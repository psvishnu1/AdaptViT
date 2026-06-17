#!/usr/bin/env python3
"""
update_lib0.py — Post-processing for TVM-generated default_lib0.c

TVM generates default_lib0.c as a self-contained C file that defines the
model's constant workspace (weights, biases, quantization parameters) and a
tvmgen_default_run() entry point. Out of the box, this entry point accepts
only an input tensor and an output tensor — it has no concept of pruning
masks or runtime-swappable classifiers.

This script patches the generated file to enable runtime configurability:

  1. Adds #include <string.h> (needed for memcpy in the injected code)
  2. Extends __tvm_main__ declaration with three new parameters:
       mlp_masks, head_masks, classifier_weight_scale
  3. Rewrites tvmgen_default_run() to:
       a. Copy the active classifier weights (int16_t) into the const
          workspace at the offset where TVM baked in the original weights.
          This lets the same binary serve all pruning levels by swapping
          only the classifier at runtime without recompiling.
       b. Copy the classifier bias (float) into its workspace offset.
       c. Forward all new parameters to __tvm_main__.

The classifier offsets are located by scanning for the int16_t and float
arrays of the expected sizes ([37 × embed_dim] and [37]) in the workspace
struct — so the script adapts to whatever offsets TVM assigned on this run.

Usage:
    python update_lib0.py <input_lib0.c> <config_file> <output_lib0.c>

Config file must contain:
    embed_dim = <int>   (e.g. 384 for ViT-Small, 768 for ViT-Base)
"""

import re
import sys


def extract_embed_dim(config_path):
    """Extract embed_dim from config file."""
    with open(config_path, encoding='utf-8') as f:
        for line in f:
            if line.startswith('embed_dim'):
                match = re.search(r'=\s*(\d+)', line)
                if match:
                    return int(match.group(1))
    raise ValueError(f"Could not find embed_dim in {config_path}")


def find_classifier_offsets(content, embed_dim):
    """
    Find classifier weights and bias offsets in default_lib0.c
    
    Weights are int16_t (quantized), bias is float.
    Returns: (weights_size, weights_offset, bias_offset)
    """
    num_classes = 37
    weights_size = num_classes * embed_dim
    
    # TVM emits the classifier weight and bias arrays as named members of the
    # const workspace struct with __attribute__((packed, aligned(16))).
    # We identify them purely by their dtype and size so we don't depend on
    # the generated variable name, which changes across TVM compilations.
    # Find classifier weights array [weights_size] as int16_t
    weights_pattern = rf'int16_t\s+\w+\[{weights_size}\]\s+__attribute__\(\(packed,\s*aligned\(16\)\)\);\s*//\s*\d+\s+bytes,\s*aligned\s+offset:\s*(\d+)'
    weights_match = re.search(weights_pattern, content)
    
    if not weights_match:
        raise ValueError(
            f"Could not find classifier weights array of size [{weights_size}] = [37 × {embed_dim}] as int16_t\n"
            "Make sure the config file has the correct embed_dim."
        )
    
    weights_offset = int(weights_match.group(1))
    print(f"  [+] Found classifier weights [{weights_size}] (int16_t) at offset {weights_offset}")
    
    # Find classifier bias array [37] as float (not quantized)
    bias_pattern = r'float\s+\w+\[37\]\s+__attribute__\(\(packed,\s*aligned\(16\)\)\);\s*//\s*\d+\s+bytes,\s*aligned\s+offset:\s*(\d+)'
    bias_match = re.search(bias_pattern, content)
    
    if not bias_match:
        raise ValueError(
            "Could not find classifier bias array of size [37] as float\n"
            "Make sure the model uses 37-class classification."
        )
    
    bias_offset = int(bias_match.group(1))
    print(f"  [+] Found classifier bias [37] (float) at offset {bias_offset}")
    
    return weights_size, weights_offset, bias_offset


def transform(input_path, config_path, output_path):
    """Transform default_lib0.c with all updates."""
    
    # Read files with UTF-8 encoding to handle hex floats and special characters
    with open(input_path, encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    # Extract embed_dim from config
    print(f"[*] Parsing config file: {config_path}")
    embed_dim = extract_embed_dim(config_path)
    print(f"  [+] Found embed_dim = {embed_dim}")
    
    # Find classifier offsets
    print(f"[*] Finding classifier arrays in default_lib0.c")
    weights_size, weights_offset, bias_offset = find_classifier_offsets(content, embed_dim)
    
    # ── 1. Add #include <string.h> ─────────────────────────────────────────────
    # Required for memcpy, which is used in the classifier injection block below.
    # TVM does not emit this include by default.
    print("[*] Adding #include <string.h>")
    if '#include <string.h>' not in content:
        # Try multiple patterns to find where to add string.h
        patterns = [
            (r'(#include "c_runtime_api\.h")', r'#include <string.h>\n\1'),
            (r'(#include\s*<.*?runtime.*?\.h>)', r'#include <string.h>\n\1'),
            (r'(#include\s*["<].*?[>"])', r'#include <string.h>\n\1'),  # Fallback: any include
        ]
        
        added = False
        for pattern, replacement in patterns:
            content, n = re.subn(pattern, replacement, content, count=1)
            if n > 0:
                print("  [+] Added #include <string.h>")
                added = True
                break
        
        if not added:
            print("  [!] Could not find #include statement to add string.h")
            # Try adding at the very beginning after any existing includes
            content = "#include <string.h>\n" + content
            print("  [+] Added #include <string.h> at the beginning")
    else:
        print("  [!] #include <string.h> already present")
    
    # ── 2. Extend __tvm_main__ declaration ─────────────────────────────────────
    # The generated declaration only carries input0 and output0. We add:
    #   mlp_masks              — pointer to the active MLP pruning mask array
    #   head_masks             — pointer to the active head pruning mask array
    #   classifier_weight_scale — float* to the per-level dequantization scale
    # These match the parameters added to __tvm_main__ in default_lib1.c by
    # update_lib1.py, so the two files stay in sync.
    print("[*] Updating __tvm_main__ declaration")
    
    # Update to include classifier_weight_scale parameter
    content, n1 = re.subn(
        r'(TVM_DLL int32_t tvmgen_default___tvm_main__\(void\* input0,void\* mlp_masks,void\* head_masks,)(void\* output0,)',
        r'\1void* classifier_weight_scale,\2',
        content)

    if n1 > 0:
        print(f"  [+] __tvm_main__ declaration updated with weight scale ({n1} occurrence(s))")
    else:
        # Try alternative pattern (in case mlp_masks/head_masks not yet added)
        content, n1 = re.subn(
            r'(TVM_DLL int32_t tvmgen_default___tvm_main__\(void\* input0,)(void\* output0,)',
            r'\1void* mlp_masks,void* head_masks,void* classifier_weight_scale,\2',
            content)
        
        if n1 > 0:
            print(f"  [+] __tvm_main__ declaration updated with all parameters ({n1} occurrence(s))")
        else:
            print("  WARNING: __tvm_main__ declaration pattern not found")

    # ── 3. Rewrite tvmgen_default_run() ────────────────────────────────────────
    # The original one-liner just calls __tvm_main__ with input0 and output0.
    # We replace it with a function body that:
    #   a) memcpys classifier_weights into the const workspace at weights_offset
    #      (TVM baked in a placeholder; we overwrite it at runtime with the
    #      weights for the currently active pruning level)
    #   b) memcpys classifier_bias into the const workspace at bias_offset
    #   c) calls __tvm_main__ with all five parameters
    #
    # Two code paths exist (direct string match, then regex fallback) because
    # the exact whitespace/formatting of the generated file can vary across TVM
    # versions.
    print("[*] Updating tvmgen_default_run wrapper")
    
    # Use direct string replacement to avoid regex issues
    search_str = "int32_t tvmgen_default_run(struct tvmgen_default_inputs* inputs,struct tvmgen_default_outputs* outputs) {return tvmgen_default___tvm_main__(inputs->input0,outputs->output,((uint8_t*)&global_const_workspace),((uint8_t*)&global_workspace));\n}"
    
    if search_str in content:
        print("  [+] Found function using direct string matching...")
        
        # Build new function with memcpy for int16_t weights and float bias
        new_function = (
            "int32_t tvmgen_default_run(struct tvmgen_default_inputs* inputs,struct tvmgen_default_outputs* outputs) {\n"
            "  // ═══════════════════════════════════════════════════════════════════════════\n"
            "  // CLASSIFIER INJECTION: Copy classifier weights and bias to workspace\n"
            "  // ═══════════════════════════════════════════════════════════════════════════\n"
            "  if (inputs->classifier_weights != NULL) {\n"
            "    memcpy(\n"
            "      (int16_t*)(&(((uint8_t*)&global_const_workspace)[" + str(weights_offset) + "])),\n"
            "      (void*)inputs->classifier_weights,\n"
            "      " + str(weights_size) + " * sizeof(int16_t)  // 37 classes × " + str(embed_dim) + " embedding dimension\n"
            "    );\n"
            "  }\n"
            "  if (inputs->classifier_bias != NULL) {\n"
            "    memcpy(\n"
            "      (float*)(&(((uint8_t*)&global_const_workspace)[" + str(bias_offset) + "])),\n"
            "      (void*)inputs->classifier_bias,\n"
            "      37 * sizeof(float)\n"
            "    );\n"
            "  }\n"
            "  // ═══════════════════════════════════════════════════════════════════════════\n"
            "  return tvmgen_default___tvm_main__(\n"
            "    inputs->input0,\n"
            "    inputs->mlp_masks,\n"
            "    inputs->head_masks,\n"
            "    inputs->classifier_weight_scale,\n"
            "    outputs->output,\n"
            "    ((uint8_t*)&global_const_workspace),\n"
            "    ((uint8_t*)&global_workspace)\n"
            "  );\n"
            "}"
        )
        
        content = content.replace(search_str, new_function)
        print("  [+] tvmgen_default_run wrapper updated with weight scale parameter")
    else:
        print("  [!] Could not find exact function match")
        print("  [!] Trying to find and update using pattern matching...")
        
        # Try regex as fallback - look for existing updated version with mlp_masks and head_masks
        pattern = (
            r'int32_t tvmgen_default_run\(struct tvmgen_default_inputs\* inputs,'
            r'struct tvmgen_default_outputs\* outputs\)\s*\{\s*'
            r'if \(inputs->classifier_weights != NULL\)\s*\{.*?'
            r'return tvmgen_default___tvm_main__\(inputs->input0,inputs->mlp_masks,inputs->head_masks,outputs->output,'
        )
        
        if re.search(pattern, content, re.DOTALL):
            print("  [+] Found function with mlp_masks and head_masks...")
            
            # Replace the return statement to include weight scale
            old_return = (
                "return tvmgen_default___tvm_main__(inputs->input0,inputs->mlp_masks,inputs->head_masks,outputs->output,"
                "((uint8_t*)&global_const_workspace),((uint8_t*)&global_workspace));"
            )
            
            new_return = (
                "return tvmgen_default___tvm_main__(\n"
                "    inputs->input0,\n"
                "    inputs->mlp_masks,\n"
                "    inputs->head_masks,\n"
                "    inputs->classifier_weight_scale,\n"
                "    outputs->output,\n"
                "    ((uint8_t*)&global_const_workspace),\n"
                "    ((uint8_t*)&global_workspace)\n"
                "  );"
            )
            
            if old_return in content:
                content = content.replace(old_return, new_return)
                print("  [+] Return statement updated with weight scale parameter")
            else:
                print("  [!] Could not find exact return statement")
        else:
            print("  [!] Could not find tvmgen_default_run function to update")

    # ── Summary ────────────────────────────────────────────────────────────────
    if content == original:
        print("\n[!] No changes made — file may already be updated or format is unexpected")
    else:
        # Use UTF-8 encoding to handle all characters properly
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"\n[✓] Successfully transformed file!")
        print(f"[✓] Output written to: {output_path}")
        print(f"\nSummary:")
        print(f"  - Classifier weights: {weights_size} int16_t values at offset {weights_offset}")
        print(f"  - Classifier bias: 37 float values at offset {bias_offset}")
        print(f"  - Embedding dimension: {embed_dim}")
        print(f"  - Number of classes: 37")
        print(f"\n[!] Important: Update __tvm_main__ in lib1 to accept float* classifier_weight_scale parameter")
        print(f"    and use it in the classifier dequantization kernel!")


if __name__ == '__main__':
    if len(sys.argv) != 4:
        print("Usage: python update_lib0.py <input_default_lib0.c> <config_file> <output_default_lib0.c>")
        print("\nExample:")
        print("  python update_lib0.py default_lib0_original.c config_vit_tiny.txt default_lib0.c")
        sys.exit(1)
    
    input_path = sys.argv[1]
    config_path = sys.argv[2]
    output_path = sys.argv[3]
    
    print(f"╔════════════════════════════════════════════════════════════╗")
    print(f"║  update_lib0.py - TVM default_lib0.c Transformer          ║")
    print(f"║  For Quantized Models (int16_t) v3.1                      ║")
    print(f"║  Now passes classifier_weight_scale to __tvm_main__       ║")
    print(f"╚════════════════════════════════════════════════════════════╝\n")
    
    try:
        transform(input_path, config_path, output_path)
    except Exception as e:
        print(f"\n[ERROR] {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)