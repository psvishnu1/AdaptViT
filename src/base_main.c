/*
 * base_main.c — Baseline inference without pruning support
 *
 * Minimal entry point for running the unmodified TVM-generated binary.
 * No masks, no runtime classifier injection — the model runs exactly as
 * TVM compiled it, using the default classification head baked into the
 * const workspace.
 *
 * Use this to establish an accuracy and cycle-count baseline before
 * applying the C post-processing scripts. For runtime-configurable
 * pruning, use pruned_main.c instead.
 *
 * Expected files in simulation working directory:
 *   input_image_russian_blue.bin
 *   input_image_british_shorthair.bin
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include "codegen/host/include/tvmgen_default.h"

#define NUM_CLASSES  37
#define IMAGE_SIZE   (1 * 3 * 224 * 224)

static float image_buf[IMAGE_SIZE];

/* Class names in the same order as dataset.classes (alphabetically sorted) */
const char *class_names[NUM_CLASSES] = {
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

/* Load raw binary float32 file into buf */
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
        printf("ERROR: %s — expected %d floats, got %d\n", path, count, n);
        return -1;
    }

    return 0;
}

/* Softmax over logits array of length n, writes probabilities to probs */
void softmax(const float *logits, float *probs, int n)
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

/* Find index of maximum value in array of length n */
int argmax(const float *arr, int n)
{
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[idx]) idx = i;
    return idx;
}

/* Load image from binary file, run inference, print results */
void run_inference(const char *label, const char *image_bin_path)
{
    if (load_bin(image_bin_path, image_buf, IMAGE_SIZE) != 0) {
        printf("ERROR: Failed to load image — skipping %s\n\n", label);
        return;
    }

    volatile float logits[NUM_CLASSES];
    float probs[NUM_CLASSES];

    struct tvmgen_default_inputs inputs = {
        .input0 = (void *)image_buf
    };

    struct tvmgen_default_outputs outputs = {
        .output = (void *)logits
    };

    int32_t ret = tvmgen_default_run(&inputs, &outputs);
    if (ret != 0) {
        printf("ERROR: tvmgen_default_run failed with code %d\n\n", ret);
        return;
    }

    /* Copy volatile logits to normal array for softmax */
    float logits_f[NUM_CLASSES];
    for (int i = 0; i < NUM_CLASSES; i++)
        logits_f[i] = logits[i];

    softmax(logits_f, probs, NUM_CLASSES);

    int pred_idx = argmax(probs, NUM_CLASSES);

    printf("=== %s ===\n", label);
    printf("Predicted : %s (index %d)\n", class_names[pred_idx], pred_idx);
    printf("Confidence: %.4f\n", probs[pred_idx]);

    printf("Top-5:\n");
    for (int rank = 0; rank < 5; rank++) {
        int best = argmax(probs, NUM_CLASSES);
        printf("  %d. %-30s %.4f\n", rank + 1, class_names[best], probs[best]);
        probs[best] = -1.0f;
    }

    printf("Logits (all %d classes):\n  ", NUM_CLASSES);
    for (int i = 0; i < NUM_CLASSES; i++) {
        printf("%.4f", logits_f[i]);
        if (i < NUM_CLASSES - 1) printf(", ");
        if ((i + 1) % 8 == 0) printf("\n  ");
    }
    printf("\n\n");
}

int main(void)
{
    run_inference("Russian Blue",
                  "input_image_russian_blue.bin");
    run_inference("British Shorthair",
                  "input_image_british_shorthair.bin");
    return 0;
}
