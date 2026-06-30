# AdaptViT

Code for the paper **"AdaptViT: Runtime-Adaptive Vision Transformer Deployment on Custom RISC-V"**
(Submitted to ICECS 2026).

This repository provides an end-to-end pipeline that takes a pretrained Vision Transformer,
applies structured pruning across multiple sparsity levels, compiles it to bare-metal C via
TVM, and deploys it on a Synopsys TRV32P3FX RISC-V core — all from a **single compiled binary**
that switches between sparsity levels at runtime without recompilation.

The key challenge is that TVM generates C code with static loop bounds and no concept of
runtime masks or swappable classifiers. A central contribution of this work is a set of
post-compilation C code transformations that restructure the generated kernels to support
mask-driven compute skipping: pruned attention heads are bypassed with a memset, pruned
MLP neuron groups skip their MAC loops entirely, and the classifier head is injected at
runtime so the same binary serves all sparsity levels. These transformations are automated
by three Python scripts (`update_tvmgen.py`, `update_lib0.py`, `update_lib1.py`) that
take the raw TVM output and a per-model config file as input, and produce deployment-ready
C files without any manual editing.

---

## Overview

```
Pretrained ViT (timm)
        │
        ├─── Pruning (Pruning_Mask_Generation.ipynb)
        │         Group-of-8 MLP pruning + per-head attention pruning
        │         Saves pruning_masks.pt per sparsity level
        │
        ├─── Linear probing (Linear_Probing_Pruned_ViT.ipynb)
        │         Trains a new classifier head for each sparsity level
        │
        ├─── Accuracy evaluation (Pruned_Model_Evaluation.ipynb)
        │         FP32 and quantized accuracy across all levels
        │
        └─── TVM export (Pytorch_To_C_Using_TVM.ipynb)
                  Quantize → TorchScript → TVM Relay → C archive (.tar)
                  + binary files for masks, classifier, input images

                        │
                        ▼
              C post-processing  (update_model.bat)
                  update_tvmgen.py  — extends input struct
                  update_lib0.py    — classifier injection
                  update_lib1.py    — mask-based kernel restructuring

                        │
                        ▼
              RISC-V binary (Synopsys ASIP Designer)
                  Single binary, runtime-switchable sparsity
                  Entry point: pruned_main.c (or base_main.c for baseline)
```

---

## Repository Structure

```
AdaptViT/
│
├── notebooks/
│   ├── Pruning_Mask_Generation.ipynb       # Step 1 — pruning mask generation
│   ├── Linear_Probing_Pruned_ViT.ipynb     # Step 2 — classifier head training
│   ├── Pytorch_To_C_Using_TVM.ipynb        # Step 3 — quantization + TVM C export
│   └── Pruned_Model_Evaluation.ipynb       # Step 4 — accuracy evaluation
│
├── scripts/
│   ├── update_tvmgen.py                # Patches tvmgen_default.h
│   ├── update_lib0.py                  # Patches default_lib0.c
│   ├── update_lib1.py                  # Patches default_lib1.c (main kernel transforms)
│   ├── update_model.bat                # Runs all three scripts (Windows)
│   ├── config_vit_small.txt            # Model config for ViT-Small
│   └── config_vit_base.txt             # Model config for ViT-Base
│
├── src/
│   ├── pruned_main.c                   # RISC-V entry point — runtime-adaptive inference
│   ├── base_main.c                     # RISC-V entry point — unmodified baseline
│   ├── model_config_vit_small.h        # Buffer sizes and dims for ViT-Small
│   └── model_config_vit_base.h         # Buffer sizes and dims for ViT-Base
│
├── example_models/
│   ├── augreg_vits16/
│   │   ├── default_lib1_original.c              # Raw TVM-generated file (before patching)
│   │   └── default_lib1_with_runtime_pruning.c  # After running update_lib1.py
│   └── dino_vitb16/
│       ├── default_lib1_original.c
│       └── default_lib1_with_runtime_pruning.c
│
└── README.md
```

---

## Prerequisites

- Google Colab (Pro recommended; notebooks are designed for Colab)
- Google Drive (~5 GB free for model checkpoints and artifacts)
- Python 3.11 — use Colab runtime **2025.07** for TVM compatibility
- Windows machine with Python 3.x for the C post-processing step
- Synopsys ASIP Designer for compilation and simulation on TRV32P3FX

### External dependency

The pruning notebook clones and patches [SnapViT](https://github.com/WalterSimoncini/SnapViT)
(NeurIPS 2025) — no manual setup needed, the notebook handles it.

---

## Step-by-Step Usage

### Step 1 — Pruning mask generation (`Pruning_Mask_Generation.ipynb`)

Runs structured pruning on pretrained ViT models and saves binary pruning
masks for each sparsity level.

**Edit before running:**
- `DRIVE_OUTPUT_PATH` — your Drive folder for outputs
- `MODEL_VALUES` — list of models to prune (ViT-Small / ViT-Base, DINO / AugReg)

**Output** (per model, per sparsity level):
```
model_outputs/<model_name>/mlp-<r>-heads-<r>/
    pruning_masks.pt        ← loaded at runtime on RISC-V
    full_pruned_model.pt    ← used for accuracy evaluation
```

**Runtime:** ~30–60 min per model on Colab A100.

---

### Step 2 — Linear probing (`Linear_Probing_Pruned_ViT.ipynb`)

Trains a classification head on top of each pruned model (backbone frozen, 20 epochs,
AdamW). Also trains a head for the unpruned base model as a reference.

**Edit before running:**
- `BASE_PATH` — same Drive folder used in Step 1
- `MODEL_NAMES` — models to evaluate

**Output** (per model, per sparsity level):
```
model_outputs/<model_name>/mlp-<r>-heads-<r>/
    head_mlp.pt             ← trained classifier head weights
model_outputs/<model_name>/
    head_mlp_base.pt        ← head for the unpruned baseline
```

**Runtime:** ~10–20 min per model on Colab GPU.

---

### Step 3 — Accuracy evaluation (`Pruned_Model_Evaluation.ipynb`)

Evaluates top-1 accuracy on the Oxford-IIIT Pets test set under two conditions:
- **FP32** — full precision on pruned model objects
- **INT8 quantized** — dynamic INT8 backbone + C-equivalent INT16 classifier,
  precision-matched to the TVM-generated C code

The same fixed test split (random seed 2026) is used across all notebooks so results
are directly comparable.

---

### Step 4 — TVM C export (`Pytorch_To_C_Using_TVM.ipynb`)

Quantizes each model (dynamic INT8), traces with TorchScript, compiles to bare-metal C
via TVM AOT, and generates all binary files needed for RISC-V deployment.

**Requires TVM 0.14.dev273** — installed via the pinned wheel URL in the notebook.
CPU must be used throughout (TVM's C backend requires CPU tracing).

**Output** (per model):
```
model_outputs/<model_name>/
    <model_name>.tar                     ← TVM C archive (weights + generated kernels)
    mlp_masks_full.bin                   ← all-ones mask for unpruned baseline
    head_masks_full.bin
    input_image_russian_blue.bin         ← preprocessed test images
    input_image_british_shorthair.bin
    classifier_scales.bin                ← per-level dequantization scales (all levels)
    mlp-<r>-heads-<r>/
        mlp_masks.bin                    ← pruning mask for this sparsity level
        head_masks.bin
        classifier_weights.bin           ← int16 quantized classifier weights
        classifier_bias.bin              ← float32 bias
```

---

### Step 5 — C post-processing (`scripts/`)

After extracting the `.tar` from Step 4, run `update_model.bat` on Windows to patch
the three TVM-generated files:

```
update_model.bat
```

Before running, set `CONFIG_FILE` in the `.bat` to match your model:
```bat
set CONFIG_FILE=config_vit_small.txt   ← or config_vit_base.txt
```

Expected folder layout:
```
scripts/
    update_model.bat
    update_tvmgen.py
    update_lib0.py
    update_lib1.py
    config_vit_small.txt
    codegen/host/include/tvmgen_default.h
    codegen/host/src/default_lib0.c
    codegen/host/src/default_lib1.c
```

The three scripts patch the generated C files in-place:

| Script | File patched | What it does |
|---|---|---|
| `update_tvmgen.py` | `tvmgen_default.h` | Adds `mlp_masks`, `head_masks`, `classifier_weights`, `classifier_bias`, `classifier_weight_scale` fields to the inputs struct |
| `update_lib0.py` | `default_lib0.c` | Rewrites `tvmgen_default_run()` to inject classifier weights/bias at runtime and forward mask pointers |
| `update_lib1.py` | `default_lib1.c` | Restructures all dense_pack and batch_matmul kernels with mask-based skip logic (8 transformation phases) |

---

### Step 6 — RISC-V compilation and simulation

Copy the patched C files and the `src/` files into your SYNOPSYS ASIP Designer project and compile
for TRV32P3FX. Two entry points are provided:

**`pruned_main.c`** — runtime-adaptive inference. Prompts for a pruning level (0–6) at
simulation start, loads the corresponding masks and classifier from the simulated
filesystem, then runs inference on both test images. Use this for all results reported
in the paper.

**`base_main.c`** — unmodified baseline. Runs inference with no masks and no classifier
injection, using the default head baked into the TVM binary. Use this to establish the
cycle-count and accuracy baseline before applying pruning.

**`model_config_vit_small.h` / `model_config_vit_base.h`** — include the appropriate
header in your project to set buffer dimensions and mask sizes for the target model.
Copy to `model_config.h` before compiling.

Place all `.bin` files from Step 4 in the ASIP Designer simulation working directory,
preserving the subfolder structure:

```
<sim_working_dir>/
    input_image_russian_blue.bin
    input_image_british_shorthair.bin
    mlp_masks_full.bin
    head_masks_full.bin
    mlp-0.15-heads-0.0/
        mlp_masks.bin
        head_masks.bin
        classifier_weights.bin
        classifier_bias.bin
    mlp-0.25-heads-0.1/
        ...
    (and so on for all six pruning levels)
```

---

## Config Files

The config files drive all model-specific values in `update_lib1.py`. Only six fields
are needed — all loop bounds and tile sizes are derived automatically:

```ini
# config_vit_small.txt
model_name  = dino_vit_small
num_heads   = 6
num_blocks  = 12
embed_dim   = 384
mlp_dim     = 1536
seq_len     = 197
head_dim    = 64
```

```ini
# config_vit_base.txt
model_name  = vit_base
num_heads   = 12
num_blocks  = 12
embed_dim   = 768
mlp_dim     = 3072
seq_len     = 197
head_dim    = 64
```

---

## Example Models

The `example_models/` folder contains `default_lib1.c` before and after the
`update_lib1.py` transformation for two models (AugReg ViT-Small, DINO ViT-Base),
provided as a reference for the post-processing step.

---

## Models Tested

| Model | `timm` identifier | Params |
|---|---|---|
| DINO ViT-Small | `timm/vit_small_patch16_224.dino` | 22M |
| AugReg ViT-Small | `timm/vit_small_patch16_224.augreg_in21k_ft_in1k` | 22M |
| DINO ViT-Base | `timm/vit_base_patch16_224.dino` | 86M | |
| AugReg ViT-Base | `timm/vit_base_patch16_224.augreg_in21k_ft_in1k` | 86M |

The paper reports results for AugReg ViT-Small and DINO ViT-Base. The remaining two
models share identical architectures with their counterparts and therefore produce the
same acceleration numbers — only the accuracy under pruning differs slightly between
the two pretraining families.

---

## Pruning Levels

All notebooks and scripts use the same six sparsity configurations:

| Level | MLP pruning | Head pruning |
|---|---|---|
| 0 | 0% | 0% — full model, compiled-in classifier |
| 1 | 15% | 0% |
| 2 | 25% | 10% |
| 3 | 35% | 20% |
| 4 | 45% | 30% |
| 5 | 55% | 40% |
| 6 | 65% | 50% |

---

---

## Contact

Vishnu PS — vishnu.ps@ucdconnect.ie   
University College Dublin, Ireland
