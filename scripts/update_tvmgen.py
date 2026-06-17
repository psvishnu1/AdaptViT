#!/usr/bin/env python3
"""
update_tvmgen.py — Post-processing for TVM-generated tvmgen_default.h

TVM generates tvmgen_default.h with a tvmgen_default_inputs struct that
only carries the model's original input tensor (input0) and output tensor.
It has no fields for pruning masks or runtime-swappable classifiers.

This script adds five new fields to tvmgen_default_inputs:

  mlp_masks               — pointer to the active MLP pruning mask array
  head_masks              — pointer to the active attention head mask array
  classifier_weights      — int16_t quantized classifier weight matrix,
                            swapped at runtime to match the active pruning level
  classifier_bias         — float bias vector for the classifier
  classifier_weight_scale — per-level dequantization scale (float*); set to
                            NULL for the unpruned baseline (level 0) so the
                            kernel falls back to the baked-in default scale

These fields are read by tvmgen_default_run() in default_lib0.c (patched by
update_lib0.py) and forwarded into __tvm_main__ in default_lib1.c (patched
by update_lib1.py). All three scripts must be run together for the generated
C code to compile correctly.

Usage:
    python update_tvmgen.py <input_tvmgen_default.h> <output_tvmgen_default.h>
"""

import re
import sys


def transform(input_path, output_path):
    """Transform tvmgen_default.h with all updates."""
    
    with open(input_path, encoding='utf-8') as f:
        content = f.read()
    
    original = content
    
    print("[*] Updating tvmgen_default_inputs struct...")
    
    # Two regex patterns are tried in sequence because TVM's exact whitespace
    # and formatting can vary slightly across versions. The primary pattern
    # requires the struct to fit on one regex match without newlines inside;
    # the alternative handles multi-line struct bodies.
    
    # Try to find where to insert new fields - right before the closing brace
    struct_pattern = r'(struct tvmgen_default_inputs\s*\{[^}]*void\*\s+input0;)(\s*\};)'
    
    if re.search(struct_pattern, content):
        print("  [+] Found tvmgen_default_inputs struct")
        
        # Add new fields after input0
        new_fields = (
            "\n  void* mlp_masks;                    /*!< MLP masks for structured pruning */\n"
            "  void* head_masks;                   /*!< Attention head masks for head pruning */\n"
            "  void* classifier_weights;           /*!< Classifier weights (int16_t quantized) */\n"
            "  void* classifier_bias;              /*!< Classifier bias (float) */\n"
            "  float* classifier_weight_scale;     /*!< Classifier weight scale for INT16 dequantization (NULL for level 0) */"
        )
        
        content, n = re.subn(
            struct_pattern,
            r'\1' + new_fields + r'\2',
            content
        )
        
        if n > 0:
            print(f"  [+] Added new fields to struct ({n} occurrence)")
        else:
            print("  [!] Pattern match failed, trying alternative approach")
    else:
        print("  [!] Could not find exact struct pattern")
        print("  [!] Trying alternative approach...")
        
        # Alternative: Look for closing brace of the struct more carefully
        # Find "struct tvmgen_default_inputs {" and then find its closing "}"
        alt_pattern = r'(struct tvmgen_default_inputs\s*\{[^}]*?void\*\s+input0;)(\s*)(\};)'
        
        if re.search(alt_pattern, content):
            new_fields = (
                "\n  void* mlp_masks;                    /*!< MLP masks for structured pruning */\n"
                "  void* head_masks;                   /*!< Attention head masks for head pruning */\n"
                "  void* classifier_weights;           /*!< Classifier weights (int16_t quantized) */\n"
                "  void* classifier_bias;              /*!< Classifier bias (float) */\n"
                "  float* classifier_weight_scale;     /*!< Classifier weight scale for INT16 dequantization (NULL for level 0) */"
            )
            
            content, n = re.subn(
                alt_pattern,
                r'\1' + new_fields + r'\2\3',
                content
            )
            
            if n > 0:
                print(f"  [+] Added new fields to struct using alternative pattern ({n} occurrence)")
            else:
                print("  [ERROR] Could not find tvmgen_default_inputs struct")
        else:
            print("  [ERROR] Could not find tvmgen_default_inputs struct")
    
    # ── Summary ────────────────────────────────────────────────────────────────
    if content == original:
        print("\n[!] No changes made — file may already be updated or format is unexpected")
        return False
    else:
        with open(output_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"\n[✓] Successfully transformed file!")
        print(f"[✓] Output written to: {output_path}")
        print(f"\nNew fields added to tvmgen_default_inputs:")
        print(f"  - void* mlp_masks")
        print(f"  - void* head_masks")
        print(f"  - void* classifier_weights")
        print(f"  - void* classifier_bias")
        print(f"  - float* classifier_weight_scale  (pointer — NULL for level 0)")
        return True


if __name__ == '__main__':
    if len(sys.argv) != 3:
        print("Usage: python update_tvmgen_default_h.py <input_tvmgen_default.h> <output_tvmgen_default.h>")
        print("\nExample:")
        print("  python update_tvmgen_default_h.py tvmgen_default.h tvmgen_default_updated.h")
        sys.exit(1)
    
    input_path = sys.argv[1]
    output_path = sys.argv[2]
    
    print(f"╔════════════════════════════════════════════════════════════╗")
    print(f"║  update_tvmgen_default_h.py - Header File Transformer     ║")
    print(f"║  For Quantized Models v2.1 (with classifier weight scale) ║")
    print(f"╚════════════════════════════════════════════════════════════╝\n")
    
    try:
        success = transform(input_path, output_path)
        sys.exit(0 if success else 1)
    except Exception as e:
        print(f"\n[ERROR] {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)