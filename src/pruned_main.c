/*
 * main.c - Pruned Vision Transformer (ViT) Inference using TVM-generated C Code
 *
 * Description:
 *   Performs image classification using a structured-pruned Vision Transformer
 *   on the Synopsys TRV32P3F RISC-V core. Pruning level is selected at runtime
 *   via user input — no recompilation needed to switch between levels.
 *
 *   All masks, classifier weights and input images are loaded from raw binary
 *   files at runtime via the ASIP Designer simulated filesystem.
 *
 * Pruning Levels:
 *   Level | MLP Pruning | Head Pruning | Notes
 *   ------|-------------|--------------|-----------------------------
 *     0   |     0%      |     0%       | Full model, compiled-in head
 *     1   |    15%      |     0%       | Light pruning
 *     2   |    25%      |    10%       | Moderate
 *     3   |    35%      |    20%       | Balanced
 *     4   |    45%      |    30%       | Aggressive
 *     5   |    55%      |    40%       | Heavy
 *     6   |    65%      |    50%       | Maximum pruning
 *
 * File Layout Expected at Simulation Working Directory:
 *   mlp_masks_full.bin                              (level 0)
 *   head_masks_full.bin                             (level 0)
 *   mlp-{mlp}-heads-{head}/mlp_masks.bin            (levels 1-6)
 *   mlp-{mlp}-heads-{head}/head_masks.bin
 *   mlp-{mlp}-heads-{head}/classifier_weights.bin
 *   mlp-{mlp}-heads-{head}/classifier_bias.bin
 *   input_image_russian_blue.bin
 *   input_image_british_shorthair.bin
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "codegen/host/include/tvmgen_default.h"
#include "model_config.h"

/* ====================================================================
 * RUNTIME BUFFERS
 * Sized for the largest supported model (ViT-Base) so the same
 * compiled binary works across architectures without recompilation.
 * Actual data loaded at runtime is always <= buffer size.
 * ==================================================================== */
static float image_buf      [IMAGE_SIZE];
static float mlp_mask_buf   [MAX_MLP_MASK_SIZE];
static float head_mask_buf  [MAX_HEAD_MASK_SIZE];
static int16_t  cls_weight_buf [MAX_CLASSIFIER_W_SIZE];
static float cls_bias_buf   [MAX_CLASSIFIER_B_SIZE];

/* ====================================================================
 * CLASS NAMES — Oxford-IIIT Pets 37 classes (alphabetical order)
 * ==================================================================== */
static const char *class_names[NUM_CLASSES] = {
    "Abyssinian", "Bengal", "Birman", "Bombay", "British_Shorthair",
    "Egyptian_Mau", "Maine_Coon", "Persian", "Ragdoll", "Russian_Blue",
    "Siamese", "Sphynx", "american_bulldog", "american_pit_bull_terrier",
    "basset_hound", "beagle", "boxer", "chihuahua", "english_cocker_spaniel",
    "english_setter", "german_shorthaired", "great_pyrenees", "havanese",
    "japanese_chin", "keeshond", "leonberger", "miniature_pinscher",
    "newfoundland", "pomeranian", "pug", "saint_bernard", "samoyed",
    "scottish_terrier", "shiba_inu", "staffordshire_bull_terrier",
    "wheaten_terrier", "yorkshire_terrier"
};

/* ====================================================================
 * BINARY FILE LOADER
 * Reads exactly `count` float32 values from a raw binary file into buf.
 * Returns 0 on success, -1 on failure.
 * ==================================================================== */
static int load_bin(const char *path, float *buf, int count)
{
    FILE *f = fopen(path, "rb");
    if (!f) {
        printf("ERROR: Cannot open file: %s\n", path);
        return -1;
    }

    int n = (int)fread(buf, sizeof(float), count, f);
    fclose(f);

    if (n != count) {
        printf("ERROR: %s — expected %d floats, got %d\n",
               path, count, n);
        return -1;
    }

    return 0;
}

static int load_bin_int16(const char *path, int16_t *buf, int count)
{
    FILE *f = fopen(path, "rb");
    if (!f) {
        printf("ERROR: Cannot open file: %s\n", path);
        return -1;
    }

    int n = (int)fread(buf, sizeof(int16_t), count, f);
    fclose(f);

    if (n != count) {
        printf("ERROR: %s — expected %d int16s, got %d\n",
               path, count, n);
        return -1;
    }

    return 0;
}

/* ====================================================================
 * PRUNING LEVEL TO FOLDER MAPPING
 * Returns subfolder name for levels 1-6.
 * Returns NULL for level 0 — handled separately.
 * ==================================================================== */
static const char *level_to_folder(int level)
{
    switch (level) {
        case 1:  return "mlp-0.15-heads-0.0";
        case 2:  return "mlp-0.25-heads-0.1";
        case 3:  return "mlp-0.35-heads-0.2";
        case 4:  return "mlp-0.45-heads-0.3";
        case 5:  return "mlp-0.55-heads-0.4";
        case 6:  return "mlp-0.65-heads-0.5";
        default: return NULL;
    }
}

/* ====================================================================
 * LOAD PRUNING LEVEL
 *
 * Level 0 : loads all-ones masks only. Classifier weights and bias
 *           are not loaded — the default head compiled into the TVM
 *           binary is used as-is.
 *
 * Level 1-6: loads pruning masks and the matching per-level classifier
 *            from the corresponding pruning level subfolder.
 *
 * Returns 0 on success, -1 on any file load failure.
 * ==================================================================== */
static int load_pruning_level(int level)
{
    char path[256];

    if (level == 0) {
        /* ── No pruning ───────────────────────────────────────────────
         * All-ones masks ensure no computation is skipped.
         * Classifier is the default head compiled into the TVM binary —
         * no loading required.
         * ─────────────────────────────────────────────────────────── */
        printf("Loading level 0 (no pruning — using compiled-in classifier)\n\n");

        if (load_bin("mlp_masks_full.bin",
                     mlp_mask_buf,  MLP_MASK_SIZE)  != 0) return -1;
        if (load_bin("head_masks_full.bin",
                     head_mask_buf, HEAD_MASK_SIZE)  != 0) return -1;

        printf("  ✓ mlp_masks          (%d floats — all ones)\n",
               MLP_MASK_SIZE);
        printf("  ✓ head_masks         (%d floats — all ones)\n",
               HEAD_MASK_SIZE);
        printf("  ✓ classifier         (compiled-in default — no load needed)\n");

    } else {
        /* ── Pruned levels 1-6 ────────────────────────────────────────
         * Load pruning masks and the matching per-level classifier.
         * ─────────────────────────────────────────────────────────── */
        const char *folder = level_to_folder(level);
        printf("Loading pruning level %d from: %s\n\n", level, folder);

        snprintf(path, sizeof(path), "%s/mlp_masks.bin", folder);
        if (load_bin(path, mlp_mask_buf,  MLP_MASK_SIZE)      != 0) return -1;

        snprintf(path, sizeof(path), "%s/head_masks.bin", folder);
        if (load_bin(path, head_mask_buf, HEAD_MASK_SIZE)      != 0) return -1;

        snprintf(path, sizeof(path), "%s/classifier_weights.bin", folder);
        if (load_bin_int16(path, cls_weight_buf, CLASSIFIER_W_SIZE)  != 0) return -1;

        snprintf(path, sizeof(path), "%s/classifier_bias.bin", folder);
        if (load_bin(path, cls_bias_buf,   CLASSIFIER_B_SIZE)  != 0) return -1;

        printf("  ✓ mlp_masks          (%d floats)\n", MLP_MASK_SIZE);
        printf("  ✓ head_masks         (%d floats)\n", HEAD_MASK_SIZE);
        printf("  ✓ classifier_weights (%d floats)\n", CLASSIFIER_W_SIZE);
        printf("  ✓ classifier_bias    (%d floats)\n", CLASSIFIER_B_SIZE);
    }

    printf("\n");
    return 0;
}

/* ====================================================================
 * SOFTMAX
 * Converts raw logits to a probability distribution.
 * Uses max subtraction for numerical stability.
 * ==================================================================== */
static void softmax(float *logits, float *probs, int n)
{
    float max_val = logits[0];
    for (int i = 1; i < n; i++)
        if (logits[i] > max_val) max_val = logits[i];

    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
        probs[i] = expf(logits[i] - max_val);
        sum += probs[i];
    }
    for (int i = 0; i < n; i++)
        probs[i] /= sum;
}

/* ====================================================================
 * ARGMAX
 * Returns the index of the maximum value in arr[0..n-1].
 * ==================================================================== */
static int argmax(const float *arr, int n)
{
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[idx]) idx = i;
    return idx;
}

/* ====================================================================
 * RUN INFERENCE
 * Loads input image from binary file, runs TVM model with currently
 * loaded masks and classifier, prints top-5 results.
 * ==================================================================== */
static void run_inference(const char *label, const char *image_bin_path,int pruning_level)
{
    printf("--------------------------------------------------\n");
    printf("Image: %s\n\n", label);

    if (load_bin(image_bin_path, image_buf, IMAGE_SIZE) != 0) {
        printf("ERROR: Failed to load image — skipping\n\n");
        return;
    }

    volatile float logits[NUM_CLASSES];

    struct tvmgen_default_inputs inputs = {
        .input0        = (void *)image_buf,
        .mlp_masks          = (void *)mlp_mask_buf,
        .head_masks         = (void *)head_mask_buf,
        .classifier_weights = (pruning_level!=0) ? (void *)cls_weight_buf : NULL,
        .classifier_bias    = (pruning_level!=0) ? (void *)cls_bias_buf : NULL
    };

    struct tvmgen_default_outputs outputs = {
        .output = (void *)logits
    };

    int32_t ret = tvmgen_default_run(&inputs, &outputs);
    if (ret != 0) {
        printf("ERROR: tvmgen_default_run failed with code %d\n\n", ret);
        return;
    }

    float logits_f[NUM_CLASSES];
    float probs   [NUM_CLASSES];
    for (int i = 0; i < NUM_CLASSES; i++)
        logits_f[i] = logits[i];

    softmax(logits_f, probs, NUM_CLASSES);

    int pred_idx = argmax(probs, NUM_CLASSES);
    printf("Predicted : %s\n", class_names[pred_idx]);
    printf("Confidence: %.4f\n\n", probs[pred_idx]);

    printf("Top-5 Predictions:\n");
    float temp[NUM_CLASSES];
    memcpy(temp, probs, sizeof(probs));
    for (int rank = 0; rank < 5; rank++) {
        int best = argmax(temp, NUM_CLASSES);
        printf("  %d. %-30s %.4f\n",
               rank + 1, class_names[best], temp[best]);
        temp[best] = -1.0f;
    }
    printf("\n");
}

/* ====================================================================
 * GET PRUNING LEVEL FROM USER
 * Prompts until a valid integer in range 0-6 is entered.
 * ==================================================================== */
static int get_pruning_level(void)
{
    int level = -1;

    while (level < 0 || level > 6) {
        printf("Select pruning level:\n");
        printf("  0 — No pruning  (full model, compiled-in classifier)\n");
        printf("  1 — MLP 15%%  Head  0%%\n");
        printf("  2 — MLP 25%%  Head 10%%\n");
        printf("  3 — MLP 35%%  Head 20%%\n");
        printf("  4 — MLP 45%%  Head 30%%\n");
        printf("  5 — MLP 55%%  Head 40%%\n");
        printf("  6 — MLP 65%%  Head 50%%\n");
        printf("\nEnter level (0-6): ");
        fflush(stdout);

        if (scanf("%d", &level) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            level = -1;
        }

        if (level < 0 || level > 6)
            printf("\nInvalid input. Please enter a value between 0 and 6.\n\n");
    }

    return level;
}

/* ====================================================================
 * MAIN
 * ==================================================================== */
int main(void)
{
    printf("==================================================\n");
    printf(" Pruned Vision Transformer Inference\n");
    printf(" TVM-generated C on Synopsys TRV32P3F RISC-V\n");
    printf("==================================================\n\n");

    /* Get pruning level from user at runtime */
    int pruning_level = get_pruning_level();
    printf("\n");

    /* Load masks and classifier for the selected level */
    if (load_pruning_level(pruning_level) != 0) {
        printf("FATAL: Failed to load pruning level %d — aborting\n",
               pruning_level);
        return -1;
    }

    /* Run inference on test images */
    run_inference("Russian Blue",
                  "input_image_russian_blue.bin",pruning_level);

    run_inference("British Shorthair",
                  "input_image_british_shorthair.bin",pruning_level);

    printf("==================================================\n");
    printf(" Inference complete — pruning level %d\n", pruning_level);
    printf("==================================================\n");

    return 0;
}
