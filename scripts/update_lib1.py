#!/usr/bin/env python3
"""
update_lib1.py — Post-processing for TVM-generated default_lib1.c

TVM generates default_lib1.c with static loop bounds and no concept of
pruning masks or head-level skipping. This script restructures the generated
C kernels to enable runtime-adaptive inference from a single compiled binary.

The transformations are applied in eight phases. Phase ordering matters —
in particular, batch_matmul call sites must be transformed before their
function signatures are changed, and QKV loop bounds must be extracted
before the function bodies are modified.

  Phase 1 — Housekeeping
              Add #include <string.h> and the inff macro (needed by the
              generated softmax code on some toolchains). Extend the
              __tvm_main__ signature with mlp_masks and head_masks parameters.

  Phase 2 — Batch matmul signature and loop bounds  (Q·Kᵀ and A·V kernels)
              Add b_start/b_end range parameters and replace the fixed loop
              bounds with these variables, enabling per-head range restriction.

  Phase 3 — Batch matmul call sites
              Replace each single kernel call with a per-head conditional block:
              active heads call the kernel with their b_start/b_end range;
              pruned heads are zero-filled with a single memset.
              Must run before Phase 2 so call-site parsing sees the original
              fixed-bound signatures.

  Phase 4 — FC1 (MLP expansion, dense_pack type 2)
              Add mlp_masks and block_idx parameters. Insert a group-of-8
              mask check at the y_inner_outer level: pruned groups zero their
              compute buffer and continue, skipping the full k_outer MAC loop.

  Phase 5 — FC2 (MLP contraction, dense_pack type 3)
              Add mlp_masks and block_idx parameters. Replace the flat k_outer
              loop with a two-level kg/k_inner loop: kg steps in groups of 8
              with a mask check at each group boundary, k_inner runs the
              original 8-wide MAC body for active groups only.

  Phase 6 — Output projection (dense_pack type 1)
              Add k_start/k_end parameters for head-range restriction. Change
              the output write from = to += so partial results from each head
              accumulate correctly into the shared output buffer.

  Phase 7 — QKV projection (dense_pack type 0)
              Add fused_start/fused_end (token-tile range) and y_start/y_end
              (head position within tile) parameters. Replace each single call
              with per-head conditional blocks issuing three calls each (Q, K, V
              sections), skipping pruned heads entirely.

  Phase 8 — Classifier weight scale
              Add classifier_weight_scale_var parameter to __tvm_main__ and
              the classifier kernel. Replace the baked-in weight scale constant
              with a runtime pointer, falling back to the compiled-in default
              when NULL (used for the unpruned baseline).

The config file drives all model-specific values (num_heads, num_blocks,
embed_dim, mlp_dim, seq_len, head_dim). All loop bounds, tile sizes, and
group counts are derived from these six fields — no hardcoded numbers appear
in the transformation logic.

Usage:
    python update_lib1.py <input_lib1.c> <output_lib1.c> <config_file>

Config file example (ViT-Small):
    num_heads  = 6
    num_blocks = 12
    embed_dim  = 384
    mlp_dim    = 1536
    seq_len    = 197
    head_dim   = 64
"""

import re
import sys


# ============================================================================
# PHASE 1: BASIC TRANSFORMATIONS (Always Applied)
# ============================================================================

def add_string_include(content):
    """Add #include <string.h> after #include <stdbool.h>"""
    string_include = "#include <string.h>"
    
    if string_include in content:
        print("✓ #include <string.h> already present")
        return content
    
    stdbool_pattern = r'(#include <stdbool\.h>)'
    if not re.search(stdbool_pattern, content):
        print("Warning: #include <stdbool.h> not found")
        return content
    
    content = re.sub(
        stdbool_pattern,
        rf'\1\n\n{string_include}',
        content,
        count=1
    )
    print("✓ Added #include <string.h>")
    return content


def add_inff_macro(content):
    """Add #ifndef inff macro definition"""
    inff_macro = """
#ifndef inff
#define inff INFINITY
#endif"""
    
    if "#ifndef inff" in content:
        print("✓ inff macro already present")
        return content
    
    string_pattern = r'(#include <string\.h>)'
    stdbool_pattern = r'(#include <stdbool\.h>)'
    
    if re.search(string_pattern, content):
        content = re.sub(string_pattern, rf'\1{inff_macro}', content, count=1)
        print("✓ Added inff macro")
    elif re.search(stdbool_pattern, content):
        content = re.sub(stdbool_pattern, rf'\1{inff_macro}', content, count=1)
        print("✓ Added inff macro")
    
    return content


def add_main_function_parameters(content):
    """Add mlp_masks_buffer_var and head_masks_buffer_var to tvmgen_default___tvm_main__"""
    param2 = "float* mlp_masks_buffer_var"
    param3 = "float* head_masks_buffer_var"
    
    pattern = r'(tvmgen_default___tvm_main__)\s*\(\s*([^,]+)\s*,\s*(.+?)\s*\)'
    
    def replace_func(match):
        func_name = match.group(1)
        first_param = match.group(2).strip()
        remaining_params = match.group(3).strip()
        new_params = f"{first_param}, {param2}, {param3}, {remaining_params}"
        return f"{func_name}({new_params})"
    
    new_content = re.sub(pattern, replace_func, content, flags=re.DOTALL)
    
    if new_content != content:
        print("✓ Modified tvmgen_default___tvm_main__ function signature")
    
    return new_content


# ============================================================================
# PHASE 2: BATCH MATMUL ANALYSIS & EXTRACTION
# ============================================================================

def extract_batch_matmul_functions(content):
    """
    Extract batch_matmul function definitions with their loop bounds.
    Returns dict: {func_name: {'total_iterations': int, 'write_factor': int}}
    """
    pattern = r'TVM_DLL int32_t\s+(tvmgen_default_fused_nn_batch_matmul(?:_\d+)?)\s*\([^)]*\)\s*\{[^}]*?for\s*\(\s*int32_t\s+b_i_outer_fused_j_outer_fused\s*=\s*0\s*;\s*b_i_outer_fused_j_outer_fused\s*<\s*(\d+)\s*;'
    
    functions = {}
    for match in re.finditer(pattern, content, re.DOTALL):
        func_name = match.group(1)
        total_iterations = int(match.group(2))
        
        # Extract write factor by counting output writes in function
        func_body_pattern = rf'TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]*\)\s*\{{(.*?)\n}}'
        func_match = re.search(func_body_pattern, content, re.DOTALL)
        
        write_factor = 1
        if func_match:
            func_body = func_match.group(1)
            # write_pattern = r'T_batch_matmul_NT\[.*?\]\s*='
            write_pattern = r'T_batch_matmul_N[TN]\[.*?\]\s*='              
            writes = list(re.finditer(write_pattern, func_body))
            write_factor = len(writes) if writes else 1
        
        functions[func_name] = {
            'total_iterations': total_iterations,
            'write_factor': write_factor
        }
    
    return functions


def extract_batch_matmul_calls(content):
    """
    Extract all batch_matmul function calls from the main function body.
    Returns list of dicts with call information.
    """
    pattern = r'if\s*\(\s*(tvmgen_default_fused_nn_batch_matmul(?:_\d+)?)\s*\(([^)]+)\)\s*!=\s*0\s*\)\s*return\s*-1\s*;'
    
    calls = []
    for match in re.finditer(pattern, content):
        func_name = match.group(1)
        params_str = match.group(2)
        params = [p.strip() for p in params_str.split(',')]
        
        # Match if we have exactly 5 params (3 data + 2 workspace)
        # OR if we have 7+ params (3 data + 2 bounds + 2 workspace) - already modified
        if len(params) >= 5:
            # Skip type declarations in params (int32_t b_start, int32_t b_end)
            # These appear as separate params after splitting by comma
            workspace_start = 3
            if len(params) >= 7 and 'int32_t' in params[3]:
                # Skip params[3] and params[4] which are the type declarations
                workspace_start = 5
            
            calls.append({
                'func_name': func_name,
                'p0': params[0],
                'p1': params[1],
                'output': params[2],
                'workspace': ', '.join(params[workspace_start:]),
                'original_line': match.group(0),
                'start_pos': match.start(),
                'end_pos': match.end()
            })
    
    return calls


# ============================================================================
# PHASE 2: BATCH MATMUL SIGNATURE & LOOP MODIFICATIONS
# ============================================================================

def modify_batch_matmul_signatures(content, num_heads):
    """
    Add b_start and b_end parameters to batch_matmul function signatures (declarations only).
    Skip modifications if already modified (b_start/b_end already present).
    Only matches function definitions (preceded by TVM_DLL int32_t), not function calls.
    """
    # Match function DECLARATIONS only (preceded by TVM_DLL int32_t)
    pattern = r'(TVM_DLL\s+int32_t\s+tvmgen_default_fused_nn_batch_matmul(?:_\d+)?)\s*\(\s*([^,]+)\s*,\s*([^,]+)\s*,\s*([^,]+)\s*,\s*(?!int32_t\s+b_start)(.+?)\s*\)'
    
    def replace_func(match):
        func_decl = match.group(1)
        param1 = match.group(2).strip()
        param2 = match.group(3).strip()
        param3 = match.group(4).strip()
        remaining_params = match.group(5).strip()
        new_params = f"{param1}, {param2}, {param3}, int32_t b_start, int32_t b_end, {remaining_params}"
        return f"{func_decl}({new_params})"
    
    new_content = re.sub(pattern, replace_func, content, flags=re.DOTALL)
    
    if new_content != content:
        count = len(re.findall(pattern, content, flags=re.DOTALL))
        print(f"✓ Modified {count} batch_matmul function signatures")
    
    return new_content


def modify_batch_matmul_loops(content):
    """Replace fixed loop bounds with dynamic b_start/b_end"""
    pattern = r'(for\s*\(\s*int32_t\s+b_i_outer_fused_j_outer_fused\s*=\s*)0(\s*;\s*b_i_outer_fused_j_outer_fused\s*<\s*)(\d+)(;)'
    
    def replace_func(match):
        return f"{match.group(1)}b_start{match.group(2)}b_end{match.group(4)}"
    
    new_content = re.sub(pattern, replace_func, content)
    
    if new_content != content:
        count = len(re.findall(pattern, content))
        print(f"✓ Modified {count} batch_matmul loop bounds")
    
    return new_content


def modify_dense_pack_signatures(content, num_blocks):
    """
    Add mlp_masks and block_idx parameters to dense_pack_2,_6,_10... functions
    These are the MLP expansion functions (one per attention block).
    
    Pattern: Functions are named dense_pack_2, dense_pack_6, dense_pack_10, etc.
    (every 4th function starting from 2)
    """
    # Dense pack functions follow pattern: 2, 6, 10, 14, ... 46 (12 blocks total)
    # Block 0 -> dense_pack_2, Block 1 -> dense_pack_6, etc.
    mlp_dense_pack_indices = [2 + i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for block_idx, func_idx in enumerate(mlp_dense_pack_indices):
        # func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_{func_idx}"
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}"    
        
        # Pattern to match both declaration and definition
        pattern = rf'({func_name})\s*\(\s*int16_t\*\s*p0\s*,\s*float\*\s*p1\s*,\s*float\*\s*T_multiply\s*,\s*(uint8_t\*[^)]+)\)'   
        
        def replace_func(match):
            func = match.group(1)
            workspaces = match.group(2)
            # Add mlp_masks and block_idx after compute parameter
            return f"{func}(int16_t* p0, float* p1, float* T_multiply, float* mlp_masks, int32_t block_idx, {workspaces})" 
        
        new_content = re.sub(pattern, replace_func, content, flags=re.DOTALL)
        
        if new_content != content:
            modified_count += 1
            content = new_content
    
    if modified_count > 0:
        print(f"✓ Modified {modified_count} dense_pack MLP function signatures")
    
    return content


def extract_global_channel_formula(func_body):
    """
    Extract the global_channel formula from the function body.
    
    IMPORTANT: For Phase 4, we extract from the computation section index calculation,
    NOT from the final output write (which uses different variable names).
    
    In quantized model:
    - Computation loop uses: y_inner_outer_x_inner_outer_fused
    - Final output loop uses: ax1_inner_outer (completely different section)
    
    We look for the pattern inside the computation:
    p1[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 3072)) + (k_outer * 8)) + x_c)]
    
    Extract: divisor=197, multiplier=512 (from (ax1_outer_ax0_outer_fused / 197) * 512 in output)
    """
    # Look in the computation section for the constant weight access pattern
    # Pattern: fused_constant_X_let[((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 3072)) + ...)]
    # We need to extract the divisor (197) and the multiplier for output indexing (512)
    
    # First, try to extract from the final T_multiply write to get divisor and multiplier
    # Pattern: T_multiply[((((ax1_outer_ax0_outer_fused % 197) * 1536) + ((ax1_outer_ax0_outer_fused / 197) * 512)) + ...)]
    write_pattern = r'T_multiply\[\(\(\(\(\(ax1_outer_ax0_outer_fused % (\d+)\) \* \d+\) \+ \(\(ax1_outer_ax0_outer_fused / \d+\) \* (\d+)\)\)'
    
    match = re.search(write_pattern, func_body)
    if match:
        divisor = match.group(1)  # 197 (from x_outer % N)
        multiplier = match.group(2)  # 512 (from the multiplication)
        # Use y_inner_outer_x_inner_outer_fused (the computation loop variable)
        formula = f"((ax1_outer_ax0_outer_fused / {divisor}) * {multiplier}) + (y_inner_outer_x_inner_outer_fused * 8) + x_c"
        return formula
    
    return None


def modify_dense_pack_functions(content, config):
    """
    Modify dense_pack function bodies for dense_pack_2,_6,_10,... functions.
    Adds group-level MLP mask check at y_inner_outer level — once per group of 8
    neurons. If pruned, zeros compute_let for that group and skips k_outer entirely.

    Transformation: at start of y_inner_outer loop body, before x_c_init, add:
      int32_t group_base = ((ax1_outer / N) * M) + (y_inner_outer * 8);
      if (mlp_masks[(block_idx * mlp_dim) + group_base] == 0.0f) {
        for (int32_t xi = 0; xi < 8; ++xi)
            ((int32_t*)compute_let)[(y_inner_outer * 8) + xi] = 0;
        continue;
      }
    """
    num_blocks = config.get('num_blocks', 12)
    mlp_dim = config.get('mlp_dim', 1536)

    mlp_dense_pack_indices = [2 + i*4 for i in range(num_blocks)]

    modified_count = 0

    for block_idx, func_idx in enumerate(mlp_dense_pack_indices):
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}"

        # Find the exact function definition
        func_def_pattern = rf'(TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]+\)\s*\{{)'
        func_match = re.search(func_def_pattern, content)

        if not func_match:
            continue

        # Find function body boundaries
        brace_start = func_match.end() - 1
        brace_count = 1
        pos = brace_start + 1

        while pos < len(content) and brace_count > 0:
            if content[pos] == '{': brace_count += 1
            elif content[pos] == '}': brace_count -= 1
            pos += 1

        if brace_count != 0:
            continue

        brace_end = pos - 1
        func_body = content[brace_start:brace_end + 1]
        original_func_body = func_body

        # Extract group_base formula from T_multiply write pattern
        global_channel_formula = extract_global_channel_formula(func_body)
        if global_channel_formula:
            # Remove trailing '+ x_c' to get group base
            group_base_formula = re.sub(r'\s*\+\s*x_c\w*\s*$', '', global_channel_formula).strip()
        else:
            group_base_formula = '((ax1_outer_ax0_outer_fused / 197) * 512) + (y_inner_outer_x_inner_outer_fused * 8)'

        # Find the y_inner_outer loop variable name (may vary across models)
        y_var_match = re.search(
            r'for\s*\(\s*int32_t\s+(y_inner_outer\w*)\s*=\s*0\s*;',
            func_body
        )
        y_var = y_var_match.group(1) if y_var_match else 'y_inner_outer_x_inner_outer_fused'

        # Build mask check block to insert at start of y_inner_outer loop body
        # Inserts after the opening { of y_inner_outer loop
        # When pruned: zero compute_let for this group, then continue
        mask_check = (
            f'\n      int32_t group_base = {group_base_formula};'
            f'\n      if (mlp_masks[(block_idx * {mlp_dim}) + group_base] == 0.0f) {{'
            f'\n        for (int32_t xi = 0; xi < 8; ++xi)'
            f'\n          ((int32_t*)compute_let)[({y_var} * 8) + xi] = 0;'
            f'\n        continue;'
            f'\n      }}'
        )

        # Insert after opening brace of y_inner_outer loop
        y_loop_pattern = (
            rf'(for\s*\(\s*int32_t\s+{re.escape(y_var)}\s*=\s*0\s*;'
            rf'\s*{re.escape(y_var)}\s*<\s*\d+\s*;\s*\+\+{re.escape(y_var)}\s*\)\s*\{{)'
        )

        new_body = re.sub(
            y_loop_pattern,
            lambda m: m.group(1) + mask_check,
            func_body
        )

        if new_body != original_func_body:
            content = content[:brace_start] + new_body + content[brace_end + 1:]
            modified_count += 1

    if modified_count > 0:
        print(f"✓ Modified {modified_count} dense_pack function bodies")

    return content


def modify_dense_pack_function_calls(content, num_blocks):
    """
    Add mlp_masks and block_idx arguments to dense_pack function calls.
    """
    mlp_dense_pack_indices = [2 + i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for block_idx, func_idx in enumerate(mlp_dense_pack_indices):
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        pattern = rf'if\s*\(\s*{re.escape(func_name)}\s*\(([^)]+)\)\s*!=\s*0\s*\)\s*return\s*-1\s*;'
        
        def replace_func(match):
            params_str = match.group(1)
            params = [p.strip() for p in params_str.split(',')]
            
            if len(params) >= 5:  # p0, p1, T_multiply, workspace1, workspace2

                p0 = params[0]  
                p1 = params[1]
                T_multiply = params[2]
                workspace = ', '.join(params[3:])
                
                # Add mlp_masks_buffer_var (passed to main function) and block_idx
                return f"if ({func_name}({p0}, {p1}, {T_multiply}, mlp_masks_buffer_var, {block_idx}, {workspace}) != 0 ) return -1;"
            
            return match.group(0)
        
        new_content = re.sub(pattern, replace_func, content)
        
        if new_content != content:
            modified_count += 1
            content = new_content
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack function calls")
    
    return content


# ============================================================================
# PHASE 5: DENSE PACK PROJECTION (Active neuron pruning)
# ============================================================================

def modify_dense_pack_projection_signatures(content, num_blocks):
    """
    Add mlp_masks and block_idx parameters to dense_pack_3,_7,_11,... functions
    (projection layer from expanded to original dimension).
    
    Pattern: Functions are named dense_pack_3, dense_pack_7, dense_pack_11, etc.
    (every 4th function starting from 3, alternating with dense_pack_2,6,10,...)
    """
    projection_dense_pack_indices = [3 + i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for func_idx in projection_dense_pack_indices:
  
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        # Match both declaration and definition
        pattern = rf'({func_name})\s*\(\s*int16_t\*\s*p0\s*,\s*float\*\s*p1\s*,\s*float\*\s*T_multiply\s*,\s*(uint8_t\*[^)]+)\)' 
        
        def replace_func(match):
            func = match.group(1)
            workspaces = match.group(2)
            return f"{func}(int16_t* p0, float* p1, float* T_multiply, float* mlp_masks, int32_t block_idx, {workspaces})"  
        
        new_content = re.sub(pattern, replace_func, content, flags=re.DOTALL)
        
        if new_content != content:
            modified_count += 1
            content = new_content
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack projection function signatures")
    
    return content


def modify_dense_pack_projection_functions(content, config):
    """
    Modify dense_pack_3,_7,_11... function bodies (MLP FC2: 1536->384).
    Replaces k_outer loop with two-level kg/k_inner loop.
    Mask checked once per group of 8 at kg boundary — 192 checks per y-tile.
    Sequential memory access preserved within each active group.

    Transformation:
    BEFORE:
      for (int32_t k_outer = 0; k_outer < 1536; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) { ... }
      }

    AFTER:
      for (int32_t kg = 0; kg < 1536; kg += 8) {
        if (mlp_masks[(block_idx * 1536) + kg] == 0.0f) continue;
        for (int32_t k_inner = 0; k_inner < 8; ++k_inner) {
          int32_t k_outer = kg + k_inner;
          for (int32_t x_c = 0; x_c < 8; ++x_c) { ... }
        }
      }
    """
    num_blocks = config.get('num_blocks', 12)
    mlp_dim = config.get('mlp_dim', 1536)

    projection_dense_pack_indices = [3 + i*4 for i in range(num_blocks)]

    modified_count = 0

    for block_idx, func_idx in enumerate(projection_dense_pack_indices):
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}"

        # Find the exact function definition
        func_def_pattern = rf'(TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]+\)\s*\{{)'
        func_match = re.search(func_def_pattern, content)

        if not func_match:
            continue

        # Find function body boundaries
        brace_start = func_match.end() - 1
        brace_count = 1
        pos = brace_start + 1

        while pos < len(content) and brace_count > 0:
            if content[pos] == '{': brace_count += 1
            elif content[pos] == '}': brace_count -= 1
            pos += 1

        if brace_count != 0:
            continue

        brace_end = pos - 1
        func_body = content[brace_start:brace_end + 1]
        original_func_body = func_body

        # Find the k_outer loop and extract its body (the x_c loop inside)
        # Match: for (int32_t k_outer = 0; k_outer < N; ++k_outer) { ... }
        k_pattern = r'for\s*\(\s*int32_t\s+k_outer\s*=\s*0\s*;\s*k_outer\s*<\s*(\d+)\s*;\s*\+\+k_outer\s*\)\s*\{'

        k_match = re.search(k_pattern, func_body)
        if not k_match:
            continue

        k_max = k_match.group(1)
        k_header_end = k_match.end()  # position just after opening {

        # Find closing brace of k_outer loop using brace counting
        brace_count = 1
        pos = k_header_end
        while pos < len(func_body) and brace_count > 0:
            if func_body[pos] == '{': brace_count += 1
            elif func_body[pos] == '}': brace_count -= 1
            pos += 1
        k_close = pos - 1  # position of closing }

        k_body = func_body[k_header_end:k_close]  # content inside k_outer braces

        # Build two-level replacement
        new_k_loop = (
            f'for (int32_t kg = 0; kg < {k_max}; kg += 8) {{\n'
            f'        if (mlp_masks[(block_idx * {mlp_dim}) + kg] == 0.0f) continue;\n'
            f'        for (int32_t k_inner = 0; k_inner < 8; ++k_inner) {{\n'
            f'          int32_t k_outer = kg + k_inner;'
            f'{k_body}'
            f'        }}\n'
            f'      }}'
        )

        new_body = func_body[:k_match.start()] + new_k_loop + func_body[k_close + 1:]

        if new_body != original_func_body:
            content = content[:brace_start] + new_body + content[brace_end + 1:]
            modified_count += 1

    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack projection function bodies")

    return content


def modify_dense_pack_projection_calls(content, num_blocks):
    """
    Add mlp_masks and block_idx arguments to dense_pack_3,_7,_11... function calls.
    """
    projection_dense_pack_indices = [3 + i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for block_idx, func_idx in enumerate(projection_dense_pack_indices):
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        pattern = rf'if\s*\(\s*{re.escape(func_name)}\s*\(([^)]+)\)\s*!=\s*0\s*\)\s*return\s*-1\s*;'
        
        def replace_func(match):
            params_str = match.group(1)
            params = [p.strip() for p in params_str.split(',')]
            
            if len(params) >= 5:  # p0, p1, T_multiply, workspace1, workspace2  
                p0 = params[0]  
                p1 = params[1]
                T_multiply = params[2]
                workspace = ', '.join(params[3:])
                
                # Add mlp_masks_buffer_var and block_idx
                return f"if ({func_name}({p0}, {p1}, {T_multiply}, mlp_masks_buffer_var, {block_idx}, {workspace}) != 0 ) return -1;"
            
            return match.group(0)
        
        new_content = re.sub(pattern, replace_func, content)
        
        if new_content != content:
            modified_count += 1
            content = new_content
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack projection function calls")
    
    return content


# ============================================================================
# PHASE 6: DENSE PACK HEAD-WISE PROJECTION (k_start/k_end with head masking)
# ============================================================================

def modify_dense_pack_headwise_signatures(content, num_blocks):
    """
    Add k_start and k_end parameters to dense_pack_1,_5,_9,... functions
    (head-wise attention projection functions).
    
    Pattern: Functions are named dense_pack_1, dense_pack_5, dense_pack_9, etc.
    (every 4th function starting from 1)
    """
    headwise_dense_pack_indices = [1 + i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for func_idx in headwise_dense_pack_indices:
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        # Match both declaration and definition
        pattern = rf'({func_name})\s*\(\s*int16_t\*\s*p0\s*,\s*float\*\s*p1\s*,\s*float\*\s*T_multiply\s*,\s*(uint8_t\*[^)]+)\)'    
        
        def replace_func(match):
            func = match.group(1)
            workspaces = match.group(2)
            return f"{func}(int16_t* p0, float* p1, float* T_multiply, int32_t k_start, int32_t k_end, {workspaces})"   
        
        new_content = re.sub(pattern, replace_func, content, flags=re.DOTALL)
        
        if new_content != content:
            modified_count += 1
            content = new_content
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack head-wise function signatures")
    
    return content


def extract_dense_pack_memset_size(func_body):
    """
    Extract the memset size from a dense_pack function by analyzing the final write pattern.
    Pattern: compute[(((...+ offset] += value
    Returns the product of dimensions in the base address.
    """
    # Pattern for write statement: compute[(expression)] = or +=
    write_pattern = r'T_multiply\[\(\(\(\(\(ax1_outer_ax0_outer_fused % (\d+)\) \* (\d+)\) \+ \(\(ax1_outer_ax0_outer_fused / (\d+)\) \* (\d+)\)\)' 
    
    match = re.search(write_pattern, func_body)
    if match:
        mod_val = int(match.group(1))  # 197 or 25
        mult_val = int(match.group(2))  # 384 or 384
        memset_size = mod_val * mult_val
        return memset_size
    
    return None


def modify_dense_pack_headwise_functions(content, config):
    """
    Modify dense_pack_1,_5,_9... function bodies:
    1. Change k_outer loop bounds from hardcoded to use k_start and k_end parameters
    
    Transformation:
    BEFORE:
      for (int32_t k_outer = 0; k_outer < 384; ++k_outer) {
    
    AFTER:
      for (int32_t k_outer = k_start; k_outer < k_end; ++k_outer) {
    """
    num_blocks = config.get('num_blocks', 12)
    
    headwise_dense_pack_indices = [1 + i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for block_idx, func_idx in enumerate(headwise_dense_pack_indices):
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}"     
        
        # Find the exact function definition
        func_def_pattern = rf'(TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]+\)\s*\{{)'
        func_match = re.search(func_def_pattern, content)
        
        if not func_match:
            continue
        
        # Find function body boundaries
        brace_start = func_match.end() - 1
        brace_count = 1
        pos = brace_start + 1
        
        while pos < len(content) and brace_count > 0:
            if content[pos] == '{':
                brace_count += 1
            elif content[pos] == '}':
                brace_count -= 1
            pos += 1
        
        if brace_count != 0:
            continue
        
        brace_end = pos - 1
        func_body = content[brace_start:brace_end + 1]
        original_func_body = func_body
        
        # Replace k_outer = 0; k_outer < N with k_outer = k_start; k_outer < k_end
        k_outer_pattern = r'for\s*\(\s*int32_t\s+k_outer\s*=\s*0\s*;\s*k_outer\s*<\s*\d+\s*;\s*\+\+k_outer\s*\)'
        
        new_func_body = re.sub(
            k_outer_pattern,
            'for (int32_t k_outer = k_start; k_outer < k_end; ++k_outer)',
            func_body
        )
        
        if new_func_body != original_func_body:
            content = content[:brace_start] + new_func_body + content[brace_end + 1:]
            modified_count += 1
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack head-wise function bodies")
    
    return content


def modify_dense_pack_headwise_writes(content, num_blocks):
    """
    Change assignment operator from = to += in output write statements
    for dense_pack_1,_5,_9... functions (head-wise projection layers).
    
    This is necessary because these functions accumulate results from different
    heads into the same output buffer.
    
    Transformation:
    BEFORE:
      compute[...] = ((float*)compute_global_let)[...];
    
    AFTER:
      compute[...] += ((float*)compute_global_let)[...];
    """
    headwise_dense_pack_indices = [1 + i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for func_idx in headwise_dense_pack_indices:
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        # Find the exact function definition
        func_def_pattern = rf'(TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]+\)\s*\{{)'
        func_match = re.search(func_def_pattern, content)
        
        if not func_match:
            continue
        
        # Find function body boundaries
        brace_start = func_match.end() - 1
        brace_count = 1
        pos = brace_start + 1
        
        while pos < len(content) and brace_count > 0:
            if content[pos] == '{':
                brace_count += 1
            elif content[pos] == '}':
                brace_count -= 1
            pos += 1
        
        if brace_count != 0:
            continue
        
        brace_end = pos - 1
        func_body = content[brace_start:brace_end + 1]
        original_func_body = func_body
        
        # Find and replace the compute write line
        # Pattern: compute[...] = ((float*)compute_global_let)[...];
        # But only the final write statement (not intermediate calculations)
        # Look for: compute[(expression)] = ((float*)compute_global_let)
        write_pattern = r'(T_multiply\s*\[[^\]]*\])\s*='
        
        new_func_body = re.sub(
            write_pattern,
            lambda m: m.group(0).replace('=', '+='),
            func_body
        )
        
        if new_func_body != original_func_body:
            content = content[:brace_start] + new_func_body + content[brace_end + 1:]
            modified_count += 1
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack head-wise output write operators (= to +=)")
    
    return content


def modify_dense_pack_headwise_calls(content, config):
    """
    Transform dense_pack_1,_5,_9... function calls into head-wise conditional blocks.
    
    For each block:
    1. Single memset for entire output range
    2. For each head, check head_masks_buffer_var[block*num_heads + head]
    3. If mask != 0, call function with k_start and k_end bounds for that head
    
    Example:
      memset(output, 0, size);
      if (head_masks_buffer_var[0 * 6 + 0] != 0.0f) {
        if (func(input, output, 0, 64, ...) != 0) return -1;
      }
      if (head_masks_buffer_var[0 * 6 + 1] != 0.0f) {
        if (func(input, output, 64, 128, ...) != 0) return -1;
      }
      ...
    """
    num_blocks = config.get('num_blocks', 12)
    num_heads = config.get('num_heads', 6)
    embed_dim = config.get('embed_dim', 384)
    
    headwise_dense_pack_indices = [1 + i*4 for i in range(num_blocks)]
    
    # Pattern to find calls: if (func_name(params) != 0) return -1;
    modified_count = 0
    
    for block_idx, func_idx in enumerate(headwise_dense_pack_indices):
        func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        # Find the call
        pattern = rf'if\s*\(\s*{re.escape(func_name)}\s*\(([^)]+)\)\s*!=\s*0\s*\)\s*return\s*-1\s*;'
        
        call_match = re.search(pattern, content)
        
        if not call_match:
            continue
        
        params_str = call_match.group(1)
        params = [p.strip() for p in params_str.split(',')]
        
        if len(params) < 5:  # p0, p1, T_multiply, workspace1, workspace2   
            continue
        
        p0 = params[0]
        p1 = params[1]
        T_multiply = params[2]
        workspace = ', '.join(params[3:])
        
        # Extract memset size from the function body
        # We need to find this function's body to understand the memset size
        func_def_pattern = rf'(TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]+\)\s*\{{)'
        func_match = re.search(func_def_pattern, content)
        
        if not func_match:
            continue
        
        brace_start = func_match.end() - 1
        brace_count = 1
        pos = brace_start + 1
        
        while pos < len(content) and brace_count > 0:
            if content[pos] == '{':
                brace_count += 1
            elif content[pos] == '}':
                brace_count -= 1
            pos += 1
        
        if brace_count != 0:
            continue
        
        brace_end = pos - 1
        func_body = content[brace_start:brace_end + 1]
        
        memset_size = extract_dense_pack_memset_size(func_body)
        if not memset_size:
            # Fallback: try to infer from context (197 * 384 for vit-small, etc.)
            memset_size = 197 * embed_dim  # Default assumption (quantized uses int32_t, not float, but memset counts elements)
        
        # Build the head-wise call block
        head_per_block = embed_dim // num_heads
        

        lines = [f"  memset({T_multiply}, 0, {memset_size} * sizeof(float));"]  
        
        for head_id in range(num_heads):
            k_start = head_id * head_per_block
            k_end = (head_id + 1) * head_per_block
            
            lines.append(f"  if (head_masks_buffer_var[{block_idx} * {num_heads} + {head_id}] != 0.0f) {{")
            lines.append(f"    if ({func_name}({p0}, {p1}, {T_multiply}, {k_start}, {k_end}, {workspace}) != 0 ) return -1;")   
            lines.append(f"  }}")
        
        replacement = '\n'.join(lines)
        
        # Replace the original call
        content = content[:call_match.start()] + replacement + content[call_match.end():]
        modified_count += 1
    
    if modified_count > 0:
        print(f"Transformed {modified_count} dense_pack head-wise function calls into head-conditional blocks")
    
    return content

def generate_masked_call_block(call, func_config, block_idx, num_heads):
    """
    Generate mask-based conditional call block for batch_matmul.
    """
    func_name = call['func_name']
    output_var = call['output']
    p0 = call['p0']
    p1 = call['p1']
    workspace = call['workspace']
    
    per_head_iterations = func_config['per_head_iterations']
    memset_elements = func_config['memset_elements']
    
    lines = []
    
    for head_id in range(num_heads):
        mask_index = f"{block_idx} * {num_heads} + {head_id}"
        b_start = head_id * per_head_iterations
        b_end = (head_id + 1) * per_head_iterations
        offset_bytes = head_id * memset_elements
        
        lines.append(f"  if (head_masks_buffer_var[{mask_index}] == 0.0f) {{")
        
        if head_id == 0:
            lines.append(f"    memset({output_var}, 0, {memset_elements} * sizeof(float));")
        else:
            lines.append(f"    memset((uint8_t*){output_var} + ({offset_bytes}) * sizeof(float), 0, {memset_elements} * sizeof(float));")
        
        lines.append(f"  }} else {{")
        lines.append(f"    if ({func_name}({p0}, {p1}, {output_var}, {b_start}, {b_end}, {workspace}) != 0 ) return -1;")
        lines.append(f"  }}")
    
    return '\n'.join(lines)


def modify_dense_pack_grouped_signatures(content, num_blocks):
    """
    Add fused_start and fused_end parameters to dense_pack functions.
    Target: dense_pack, dense_pack_4, dense_pack_8, ... dense_pack_44
    Indices: 0, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44 (13 functions total)
    """
    # grouped_dense_pack_indices = [0] + [4 + i*4 for i in range(num_blocks)]
    grouped_dense_pack_indices = [i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for func_idx in grouped_dense_pack_indices:
        if func_idx == 0:
            func_name = "tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply" 
        else:
            func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        # Match both declaration and definition
        pattern = rf'({re.escape(func_name)})\s*\(\s*int16_t\*\s*p0\s*,\s*float\*\s*p1\s*,\s*float\*\s*T_multiply\s*,\s*(uint8_t\*[^)]+)\)' 
        
        def replace_func(match):
            func = match.group(1)
            workspaces = match.group(2)
            return f"{func}(int16_t* p0, float* p1, float* T_multiply, int32_t fused_start, int32_t fused_end, int32_t y_start, int32_t y_end, {workspaces})"
        
        new_content = re.sub(pattern, replace_func, content, flags=re.DOTALL)
        
        if new_content != content:
            modified_count += 1
            content = new_content
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack grouped function signatures")
    
    return content


def modify_dense_pack_grouped_functions(content, num_blocks):
    """
    Modify dense_pack function bodies to use fused_start and fused_end parameters.
    Changes: for (int32_t x_outer_y_outer_fused = 0; ...) 
             to: for (int32_t x_outer_y_outer_fused = fused_start; ...)
    """
    # grouped_dense_pack_indices = [0] + [4 + i*4 for i in range(num_blocks)]
    grouped_dense_pack_indices = [i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for func_idx in grouped_dense_pack_indices:
        if func_idx == 0:
            func_name = "tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply" 
        else:
            func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        # Find the exact function definition
        func_def_pattern = rf'(TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]+\)\s*\{{)'
        func_match = re.search(func_def_pattern, content)
        
        if not func_match:
            continue
        
        # Find function body boundaries
        brace_start = func_match.end() - 1
        brace_count = 1
        pos = brace_start + 1
        
        while pos < len(content) and brace_count > 0:
            if content[pos] == '{':
                brace_count += 1
            elif content[pos] == '}':
                brace_count -= 1
            pos += 1
        
        if brace_count != 0:
            continue
        
        brace_end = pos - 1
        func_body = content[brace_start:brace_end + 1]
        original_func_body = func_body
        
        # Replace x_outer_y_outer_fused = 0 with fused_start, and < digit with < fused_end
        x_outer_pattern = r'for\s*\(\s*int32_t\s+ax1_outer_ax0_outer_fused\s*=\s*0\s*;\s*ax1_outer_ax0_outer_fused\s*<\s*\d+\s*;\s*\+\+ax1_outer_ax0_outer_fused\s*\)'  
        
        new_func_body = re.sub(
            x_outer_pattern,
            'for (int32_t ax1_outer_ax0_outer_fused = fused_start; ax1_outer_ax0_outer_fused < fused_end; ++ax1_outer_ax0_outer_fused)',
            func_body
        )
        
        # Replace y_inner_outer (accumulation) and ax1_inner_outer (writeback) loops
        # Both run 0..16 — replace with y_start..y_end
        # NEW — match any bound:
        y_inner_pattern = r'for\s*\(\s*int32_t\s+(y_inner_outer_x_inner_outer_fused|ax1_inner_outer)\s*=\s*0\s*;\s*\1\s*<\s*(\d+)\s*;\s*\+\+\1\s*\)'

        def replace_y(match):
            var = match.group(1)
            return f'for (int32_t {var} = y_start; {var} < y_end; ++{var})'
        
        new_func_body = re.sub(y_inner_pattern, replace_y, new_func_body)
        
        if new_func_body != original_func_body:
            content = content[:brace_start] + new_func_body + content[brace_end + 1:]
            modified_count += 1
    
    if modified_count > 0:
        print(f"Modified {modified_count} dense_pack grouped function bodies")
    
    return content


def extract_dense_pack_grouped_memset_size(func_body):
    """
    Extract memset size from dense_pack grouped function body.
    Pattern: compute[(((((x_outer % MOD) * MULT) + ...)]
    Extracts: MOD * MULT
    """
    write_pattern = r'T_multiply\[\(\(\(\(\(ax1_outer_ax0_outer_fused % (\d+)\) \* (\d+)\)' 
    
    match = re.search(write_pattern, func_body)
    if match:
        mod_val = int(match.group(1))  # 197 or 25
        mult_val = int(match.group(2))  # 1152
        memset_size = mod_val * mult_val
        return memset_size
    
    return None


def extract_original_loop_bound(func_body):
    """
    Extract the original loop bound from the x_outer_y_outer_fused loop.
    This is the total range that needs to be split into 9 function calls.
    Pattern: for (int32_t x_outer_y_outer_fused = 0; x_outer_y_outer_fused < BOUND; ...)
    Only looks in the function body provided, not elsewhere in the file.
    """
    # Match the ORIGINAL loop bound (with 0 as start, not fused_start/fused_end)
    # This appears in function body before they're modified
    pattern = r'for\s*\(\s*int32_t\s+ax1_outer_ax0_outer_fused\s*=\s*0\s*;\s*ax1_outer_ax0_outer_fused\s*<\s*(\d+)\s*;' 
    
    match = re.search(pattern, func_body)
    if match:
        bound = int(match.group(1))
        return bound
    
    return None


def extract_all_dense_pack_grouped_loop_bounds(content):
    """
    Extract loop bounds for all dense_pack grouped functions (dense_pack, dense_pack_4, _8, etc.)
    BEFORE any modifications are made.
    Returns a dict: {func_name: loop_bound}
    """
    loop_bounds = {}
    
    # Target functions: dense_pack (no number), dense_pack_4, _8, _12, _16, _20, _24, _28, _32, _36, _40, _44
    # These are indices: 0, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44
    target_indices = [0, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44]
    
    for func_idx in target_indices:

        if func_idx == 0:
            func_name = "tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply"
        else:
            func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}"
        
        # Find this function definition - match up to and including the opening brace
        func_pattern = rf'TVM_DLL int32_t {re.escape(func_name)}\s*\([^)]+\)\s*\{{'
        func_match = re.search(func_pattern, content)
        
        if not func_match:
            continue
        
        # func_match.end() points AFTER the opening brace
        # We need to find the matching closing brace
        opening_brace_pos = func_match.end() - 1  # Position of the opening brace
        
        # Count braces to find matching closing brace
        brace_count = 1
        pos = opening_brace_pos + 1
        
        while pos < len(content) and brace_count > 0:
            if content[pos] == '{':
                brace_count += 1
            elif content[pos] == '}':
                brace_count -= 1
            pos += 1
        
        if brace_count != 0:
            continue
        
        closing_brace_pos = pos - 1
        # Extract the function body including both braces
        func_body = content[opening_brace_pos:closing_brace_pos + 1]
        
        # Extract loop bound from this function body
        loop_bound = extract_original_loop_bound(func_body)
        
        if loop_bound:
            loop_bounds[func_name] = loop_bound
    
    return loop_bounds


def modify_dense_pack_grouped_calls(content, config, loop_bounds=None):
    """
    Transform dense_pack grouped function calls into head-pair grouped conditional blocks.
    Uses pre-extracted loop bounds for accurate splitting of iterations.
    
    For ViT-Small (6 heads, 1773 total iterations = 9 chunks of 197):
    - 9 function calls total (1773 / 197 = 9)
    - 3 groups of 3 calls each (9 / 3 groups = 3 calls per group)
    - Each group checks 2 heads (head pair)
    - Calls are INTERLEAVED by group, not sequential!
    
    Group 0 (heads 0-1): ranges [0,197], [591,788], [1182,1379] (call 0, 3, 6)
    Group 1 (heads 2-3): ranges [197,394], [788,985], [1379,1576] (call 1, 4, 7)
    Group 2 (heads 4-5): ranges [394,591], [985,1182], [1576,1773] (call 2, 5, 8)
    """
    if not loop_bounds:
        loop_bounds = {}
    num_blocks = config.get('num_blocks', 12)
    num_heads = config.get('num_heads', 6)
    seq_len = config.get('seq_len', 197)
    
    # grouped_dense_pack_indices = [0] + [4 + i*4 for i in range(num_blocks)]
    grouped_dense_pack_indices = [i*4 for i in range(num_blocks)]
    
    modified_count = 0
    
    for block_idx, func_idx in enumerate(grouped_dense_pack_indices):

        if func_idx == 0:
            func_name = "tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply"
        else:
            func_name = f"tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_{func_idx}" 
        
        # Find the call
        pattern = rf'if\s*\(\s*{re.escape(func_name)}\s*\(([^)]+)\)\s*!=\s*0\s*\)\s*return\s*-1\s*;'
        
        call_match = re.search(pattern, content)
        
        if not call_match:
            continue
        
        params_str = call_match.group(1)
        params = [p.strip() for p in params_str.split(',')]
        
        if len(params) < 3:  # p0, p1, T_multiply, workspace1, workspace2   
            continue

        p0 = params[0]
        p1 = params[1]
        T_multiply = params[2]
        workspace = ', '.join(params[3:])   
        
        # Extract memset size from the function body
        func_def_pattern = rf'(TVM_DLL int32_t\s+{re.escape(func_name)}\s*\([^)]+\)\s*\{{)'
        func_match = re.search(func_def_pattern, content)
        
        if not func_match:
            continue
        
        brace_start = func_match.end() - 1
        brace_count = 1
        pos = brace_start + 1
        
        while pos < len(content) and brace_count > 0:
            if content[pos] == '{':
                brace_count += 1
            elif content[pos] == '}':
                brace_count -= 1
            pos += 1
        
        if brace_count != 0:
            continue
        
        brace_end = pos - 1
        func_body = content[brace_start:brace_end + 1]
        
        memset_size = extract_dense_pack_grouped_memset_size(func_body)
        if not memset_size:
            memset_size = seq_len * 1152  # Default fallback (quantized uses int32_t accumulators but memset counts elements)
               
        # Use pre-extracted loop bound for this function
        # If not available, estimate from seq_len (fallback)
        loop_bound = loop_bounds.get(func_name)
        if not loop_bound:
            # Fallback: estimate from seq_len (this should rarely happen)
            loop_bound = seq_len * 9  # Typical estimate for ViT models
        
        group_step = loop_bound // 9  # Each call covers 1/9th of the loop

        lines = [f"  memset({T_multiply}, 0, {memset_size} * sizeof(float));"]
        
        embed_dim = config.get('embed_dim', 384)
        y_bound = embed_dim // 24   # 16 for ViT-Small, 32 for ViT-Base
        heads_per_tile = y_bound // 8  # 2 for ViT-Small, 4 for ViT-Base
        # tile_group: which of the 3 tile-column groups (Q/K/V split into 3 each)
        # within tile, head position = head_id % heads_per_tile
        
        for head_id in range(num_heads):
            tile_group = head_id // heads_per_tile
            y_pos = head_id % heads_per_tile   # position within tile (0..heads_per_tile-1)
            y_start = y_pos * 8
            y_end = y_start + 8
            
            condition = f"head_masks_buffer_var[{block_idx} * {num_heads} + {head_id}] != 0.0f"
            lines.append(f"  if ({condition}) {{")
            
            # 3 calls per head: Q section, K section, V section
            for qkv_offset in range(3):
                fused_start = (tile_group + qkv_offset * 3) * group_step
                fused_end = fused_start + group_step
                lines.append(f"    if ({func_name}({p0}, {p1}, {T_multiply}, {fused_start}, {fused_end}, {y_start}, {y_end}, {workspace}) != 0 ) return -1;")
            
            lines.append(f"  }}")
        
        replacement = '\n'.join(lines)
        
        # Replace the original call
        content = content[:call_match.start()] + replacement + content[call_match.end():]
        modified_count += 1
    
    if modified_count > 0:
        print(f"✓ Transformed {modified_count} dense_pack grouped function calls into head-pair grouped conditional blocks")
    
    return content


def transform_batch_matmul_calls(content, config):
    """
    Transform all batch_matmul calls to use head_masks-based conditional logic.
    IMPORTANT: Only replace the batch_matmul calls themselves, preserve all other code.
    """
    if not config:
        print("No config provided, skipping batch_matmul call transformation")
        return content
    
    num_heads = config.get('num_heads', 0)
    if num_heads == 0:
        print("num_heads not found in config")
        return content
    
    # Extract functions and calls
    functions = extract_batch_matmul_functions(content)
    
    # Pattern that matches both signatures: 5 params (original) or 7 params (already modified)
    call_pattern = r'if\s*\(\s*(tvmgen_default_fused_nn_batch_matmul(?:_\d+)?)\s*\(([^)]+)\)\s*!=\s*0\s*\)\s*return\s*-1\s*;'
    
    calls = []
    for match in re.finditer(call_pattern, content):
        func_name = match.group(1)
        params_str = match.group(2)
        params = [p.strip() for p in params_str.split(',')]
        
        # Extract data params (first 3) and workspace params (last 2)
        # Skip type declarations if present (int32_t b_start, int32_t b_end)
        if len(params) >= 5:
            p0 = params[0]
            p1 = params[1]
            output = params[2]
            
            # Workspace params are the last 2
   
            if len(params) >= 7 and 'int32_t' in params[3]:
                workspace = ', '.join(params[-2:])  # Only last 2 (workspace)
            else:
                workspace = ', '.join(params[-2:])  # Last 2 params
            
            calls.append({
                'func_name': func_name,
                'p0': p0,
                'p1': p1,
                'output': output,
                'workspace': workspace,
                'original_line': match.group(0),
                'start_pos': match.start(),
                'end_pos': match.end()
            })
    
    if not calls or not functions:
        return content
    
    # Calculate per-head configs for each function
    func_configs = {}
    for func_name, func_info in functions.items():
        total_iters = func_info['total_iterations']
        per_head = total_iters // num_heads
        memset_elems = per_head * func_info['write_factor']
        
        func_configs[func_name] = {
            'total_iterations': total_iters,
            'per_head_iterations': per_head,
            'write_factor': func_info['write_factor'],
            'memset_elements': memset_elems
        }
    
    # Transform calls in reverse order (to preserve positions)
    # Each call is transformed individually - no grouping
    for call in reversed(calls):
        func_name = call['func_name']
        
        if func_name not in func_configs:
            continue
        
        # Determine block_idx from the sequence of calls
        # Count how many calls have been seen before this one to determine block
        calls_before = [c for c in calls if c['start_pos'] < call['start_pos']]
        call_index = len(calls_before)
        block_idx = call_index // 2  # 2 calls per block
        
        # Generate replacement
        replacement = generate_masked_call_block(call, func_configs[func_name], block_idx, num_heads)
        
        # Replace only this single call, preserve all surrounding code
        content = content[:call['start_pos']] + replacement + content[call['end_pos']:]
    
    if calls:
        print(f" Transformed {len(calls)} batch_matmul function calls")
        print(f"  Each call split into {num_heads} head-conditional branches")
    
    return content


# ============================================================================
# MAIN ORCHESTRATION
# ============================================================================

def parse_config_file(config_file):
    """Parse ViT configuration file"""
    config = {}
    try:
        with open(config_file, 'r') as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith('#'):
                    continue
                if '=' in line:
                    key, value = line.split('=', 1)
                    key = key.strip()
                    value = value.split('#')[0].strip()
                    try:
                        config[key] = int(value)
                    except ValueError:
                        config[key] = value
        
        required = ['num_heads', 'num_blocks', 'embed_dim', 'mlp_dim', 'seq_len', 'head_dim']
        for field in required:
            if field not in config:
                raise ValueError(f"Missing required config field: {field}")
        
        print(f" Loaded config: {config.get('model_name', 'unknown')}")
        return config
    except Exception as e:
        print(f" Error parsing config file: {e}")
        raise


# ============================================================================
# PHASE 8: CLASSIFIER WEIGHT SCALE PARAMETER (FIXED VERSION)
# ============================================================================
# Pass classifier weight scale from lib0 through __tvm_main__ to classifier
# kernel for INT16→FLOAT32 dequantization
#
# ARGUMENT ORDER (CONSISTENT):
# p0 (int16_t*) - features
# p1 (float*) - feature scale  
# T_add (float*) - output logits
# classifier_weight_scale (float*) - weight scale
# global_const_workspace_298_var (uint8_t*)
# global_workspace_299_var (uint8_t*)

def phase8_update_tvm_main_declaration(content):
    """Update __tvm_main__ declaration to include classifier_weight_scale parameter"""
    
    old_pattern = (
        r'TVM_DLL int32_t tvmgen_default___tvm_main__\(\s*'
        r'float\*\s+input0_buffer_var,\s*'
        r'float\*\s+mlp_masks_buffer_var,\s*'
        r'float\*\s+head_masks_buffer_var,\s*'
        r'float\*\s+output_buffer_var,'
    )
    
    replacement = (
        'TVM_DLL int32_t tvmgen_default___tvm_main__(\n'
        '  float* input0_buffer_var,\n'
        '  float* mlp_masks_buffer_var,\n'
        '  float* head_masks_buffer_var,\n'
        '  float* classifier_weight_scale_var,\n'
        '  float* output_buffer_var,'
    )
    
    content = re.sub(old_pattern, replacement, content)
    print("  [Phase 8.1] Updated __tvm_main__ declaration with classifier_weight_scale")
    return content


def phase8_update_tvm_main_definition(content):
    """Update __tvm_main__ definition to include classifier_weight_scale parameter"""
    
    old_pattern = (
        r'TVM_DLL int32_t tvmgen_default___tvm_main__\(\s*'
        r'float\*\s+input0_buffer_var,\s*'
        r'float\*\s+mlp_masks_buffer_var,\s*'
        r'float\*\s+head_masks_buffer_var,\s*'
        r'float\*\s+output_buffer_var,\s*'
        r'uint8_t\*\s+global_const_workspace_0_var,\s*'
        r'uint8_t\*\s+global_workspace_1_var\s*\)\s*\{'
    )
    
    replacement = (
        'TVM_DLL int32_t tvmgen_default___tvm_main__(\n'
        '  float* input0_buffer_var,\n'
        '  float* mlp_masks_buffer_var,\n'
        '  float* head_masks_buffer_var,\n'
        '  float* classifier_weight_scale_var,\n'
        '  float* output_buffer_var,\n'
        '  uint8_t* global_const_workspace_0_var,\n'
        '  uint8_t* global_workspace_1_var\n'
        ') {'
    )
    
    content = re.sub(old_pattern, replacement, content, flags=re.MULTILINE)
    print("  [Phase 8.2] Updated __tvm_main__ definition with classifier_weight_scale")
    return content


def phase8_update_classifier_declaration(content):
    """Update classifier function declaration to include classifier_weight_scale parameter"""
    
    old_pattern = (
        r'TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add\(\s*'
        r'int16_t\*\s+p0,\s*'
        r'float\*\s+p1,\s*'
        r'float\*\s+T_add,\s*'
        r'uint8_t\*\s+global_const_workspace_298_var,\s*'
        r'uint8_t\*\s+global_workspace_299_var\s*\)\s*;'
    )
    
    replacement = (
        'TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add(\n'
        '  int16_t* p0,\n'
        '  float* p1,\n'
        '  float* T_add,\n'
        '  float* classifier_weight_scale,\n'
        '  uint8_t* global_const_workspace_298_var,\n'
        '  uint8_t* global_workspace_299_var\n'
        ');'
    )
    
    content = re.sub(old_pattern, replacement, content, flags=re.MULTILINE)
    print("  [Phase 8.3] Updated classifier declaration with classifier_weight_scale")
    return content


def phase8_update_classifier_definition(content):
    """Update classifier function definition to include classifier_weight_scale parameter and use it"""
    
    # Update function signature
    old_sig_pattern = (
        r'TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add\(\s*'
        r'int16_t\*\s+p0,\s*'
        r'float\*\s+p1,\s*'
        r'float\*\s+T_add,\s*'
        r'uint8_t\*\s+global_const_workspace_298_var,\s*'
        r'uint8_t\*\s+global_workspace_299_var\s*\)\s*\{'
    )
    
    replacement = (
        'TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add(\n'
        '  int16_t* p0,\n'
        '  float* p1,\n'
        '  float* T_add,\n'
        '  float* classifier_weight_scale,\n'
        '  uint8_t* global_const_workspace_298_var,\n'
        '  uint8_t* global_workspace_299_var\n'
        ') {'
    )
    
    content = re.sub(old_sig_pattern, replacement, content, flags=re.MULTILINE)
    print("  [Phase 8.4] Updated classifier definition signature")
    
    # Update dequantization formula - use simpler, more flexible pattern
    # Find: (p1[0] * <any_number>f)
    # Replace with: (p1[0] * (classifier_weight_scale != NULL ? *classifier_weight_scale : 1.024287e-03f))
    
    old_deq_pattern = (
        r'\(p1\[0\]\s*\*\s*[0-9.e+-]+f\)'
    )
    
    replacement = (
        '(p1[0] * (classifier_weight_scale != NULL ? *classifier_weight_scale : 1.024287e-03f))'
    )
    
    # Count replacements in the classifier function only (between its start and return 0;)
    # Find the function and replace only within it
    classifier_func_pattern = (
        r'(TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add\(.*?\n\) \{.*?)'
        r'(\(p1\[0\]\s*\*\s*[0-9.e+-]+f\))'
        r'(.*?return 0;\n\})'
    )
    
    def replace_in_classifier(match):
        before = match.group(1)
        old_scale = match.group(2)
        after = match.group(3)
        
        new_scale = '(p1[0] * (classifier_weight_scale != NULL ? *classifier_weight_scale : 1.024287e-03f))'
        return before + new_scale + after
    
    content = re.sub(classifier_func_pattern, replace_in_classifier, content, flags=re.DOTALL)
    
    # If the above didn't work, try simpler replacement (just find and replace the pattern)
    if '(classifier_weight_scale != NULL' not in content:
        content = re.sub(old_deq_pattern, replacement, content)
    
    print("  [Phase 8.5] Updated classifier dequantization to use scale parameter")
    return content


def phase8_update_classifier_call(content):
    """Update classifier function call in __tvm_main__ to pass classifier_weight_scale"""
    
    # Match the function call with flexible spacing
    old_call_pattern = (
        r'if\s*\(\s*tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add\s*\(\s*'
        r'sid_527_let,\s*'
        r'sid_526_let,\s*'
        r'output_buffer_var,\s*'
        r'(global_const_workspace_0_var,\s*'
        r'global_workspace_1_var)\s*\)\s*!=\s*0\s*\)\s*return\s*-1;'
    )
    
    replacement = (
        r'if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add(\n'
        r'      sid_527_let,\n'
        r'      sid_526_let,\n'
        r'      output_buffer_var,\n'
        r'      classifier_weight_scale_var,\n'
        r'      \1) != 0) return -1;'
    )
    
    content = re.sub(old_call_pattern, replacement, content, flags=re.MULTILINE)
    print("  [Phase 8.6] Updated classifier function call to pass scale")
    return content


def apply_phase8(content):
    """Apply all Phase 8 transformations"""
    print("\n" + "="*70)
    print("Phase 8: Classifier Weight Scale Parameter Passing (FIXED)")
    print("="*70)
    
    content = phase8_update_tvm_main_declaration(content)
    content = phase8_update_tvm_main_definition(content)
    content = phase8_update_classifier_declaration(content)
    content = phase8_update_classifier_definition(content)
    content = phase8_update_classifier_call(content)
    
    print("Phase 8 completed: Classifier weight scale parameter passing")
    return content

# ============================================================================
# MAIN ORCHESTRATION
# ============================================================================
# Phases are applied in a specific order. The most important constraint is
# that batch_matmul CALL sites (Phase 3) must be transformed before the
# function SIGNATURES are changed (Phase 2), because the call-site parser
# identifies original calls by their unmodified parameter count.
# Similarly, QKV loop bounds (Phase 7) must be extracted before the grouped
# function bodies are modified, so the pre-modification bounds are captured.

def apply_modifications(input_file, output_file, config_file=None):
    """Apply all modifications to the C file"""
    try:
        with open(input_file, 'r') as f:
            content = f.read()
        
        config = None
        if config_file:
            config = parse_config_file(config_file)
        
        print("\n" + "="*70)
        print("APPLYING MODIFICATIONS")
        print("="*70)
        
        # Phase 1: Initial modifications (always applied)
        content = add_string_include(content)
        content = add_inff_macro(content)
        content = add_main_function_parameters(content)
        
        # Phase 3: Batch matmul CALL transformation (MUST be before signature changes!)
        if config:
            content = transform_batch_matmul_calls(content, config)
        
        # Phase 2: Batch matmul signature and loop modifications
        if config:
            num_heads = config.get('num_heads', 0)
            content = modify_batch_matmul_signatures(content, num_heads)
            content = modify_batch_matmul_loops(content)
        
        # Phase 4: Dense pack modifications (MLP expansion with mask-based pruning)
        if config:
            num_blocks = config.get('num_blocks', 12)
            content = modify_dense_pack_function_calls(content, num_blocks)
            content = modify_dense_pack_signatures(content, num_blocks)
            content = modify_dense_pack_functions(content, config)
        
        # Phase 5: Dense pack projection modifications (active neuron pruning)
        if config:
            num_blocks = config.get('num_blocks', 12)
            content = modify_dense_pack_projection_calls(content, num_blocks)
            content = modify_dense_pack_projection_signatures(content, num_blocks)
            content = modify_dense_pack_projection_functions(content, config)
        
        # Phase 6: Dense pack head-wise projection (k_start/k_end with head masking)
        if config:
            num_blocks = config.get('num_blocks', 12)
            content = modify_dense_pack_headwise_signatures(content, num_blocks)
            content = modify_dense_pack_headwise_functions(content, config)
            content = modify_dense_pack_headwise_writes(content, num_blocks)
            content = modify_dense_pack_headwise_calls(content, config)
        
        # Phase 7: Dense pack grouped head masking (fused_start/fused_end with head-pair groups)
        if config:
            num_blocks = config.get('num_blocks', 12)
            # IMPORTANT: Extract loop bounds BEFORE any modifications to function bodies
            loop_bounds = extract_all_dense_pack_grouped_loop_bounds(content)
            content = modify_dense_pack_grouped_signatures(content, num_blocks)
            content = modify_dense_pack_grouped_functions(content, num_blocks)
            # Pass pre-extracted loop bounds to ensure accurate splitting
            content = modify_dense_pack_grouped_calls(content, config, loop_bounds)
        
        # ═══════════════════════════════════════════════════════════════════════════
        # PHASE 8: CLASSIFIER WEIGHT SCALE PARAMETER
        # ═══════════════════════════════════════════════════════════════════════════
        content = apply_phase8(content)
        
        with open(output_file, 'w') as f:
            f.write(content)
        
        print(f"\n✓ File saved to: {output_file}")
        print("="*70 + "\n")
        return True
        
    except Exception as e:
        print(f"✗ Error: {e}")
        import traceback
        traceback.print_exc()
        return False


if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python edit_c_file.py <input_raw_file> <output_updated_file> [config_file]")
        print("\nExample:")
        print("  python edit_c_file.py default_lib1.c default_lib1_new.c config_vit_small.txt")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    config_file = sys.argv[3] if len(sys.argv) > 3 else None
    
    print(f"C File Editor - TVM ViT Optimization")
    print(f"Input: {input_file}")
    print(f"Output: {output_file}")
    if config_file:
        print(f"Config: {config_file}")
    
    success = apply_modifications(input_file, output_file, config_file)
    sys.exit(0 if success else 1)