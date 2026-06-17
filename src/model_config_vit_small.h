/*
 * model_config.h
 * Model-specific dimensions for the deployed ViT.
 * Update EMBED_DIM, NUM_HEADS and MLP_DIM when switching architecture.
 *
 * ViT-Tiny-R  : EMBED_DIM=192, NUM_HEADS=3,  MLP_DIM=768
 * ViT-Small   : EMBED_DIM=384, NUM_HEADS=6,  MLP_DIM=1536
 * ViT-Base    : EMBED_DIM=768, NUM_HEADS=12, MLP_DIM=3072
 *
 * This file applies to:
 *   timm/vit_small_patch16_224.dino
 *   timm/vit_small_patch16_224.augreg_in21k_ft_in1k
 *   timm/deit3_small_patch16_224.fb_in22k_ft_in1k
 */

#ifndef MODEL_CONFIG_H
#define MODEL_CONFIG_H

/* ── Task ── */
#define NUM_CLASSES       37

/* ── Fixed across all ViT variants ── */
#define NUM_BLOCKS        12
#define IMAGE_SIZE        (1 * 3 * 224 * 224)

/* ── Actual dimensions for the deployed model ──
 * Update these three when switching architecture  */
#define EMBED_DIM         384    /* ViT-Small: 384 */
#define NUM_HEADS         6      /* ViT-Small: 6   */
#define MLP_DIM           1536   /* ViT-Small: 1536 */

/* ── Derived actual sizes ── */
#define MLP_MASK_SIZE     (NUM_BLOCKS * MLP_DIM)
#define HEAD_MASK_SIZE    (NUM_BLOCKS * NUM_HEADS)
#define CLASSIFIER_W_SIZE (NUM_CLASSES * EMBED_DIM)
#define CLASSIFIER_B_SIZE (NUM_CLASSES)

/* ── Maximum dimensions — buffers sized for largest model (ViT-Base) ──
 * Allows same compiled binary to work across architectures.           */
#define MAX_MLP_DIM           3072
#define MAX_NUM_HEADS         12
#define MAX_EMBED_DIM         768

#define MAX_MLP_MASK_SIZE     (NUM_BLOCKS * MAX_MLP_DIM)
#define MAX_HEAD_MASK_SIZE    (NUM_BLOCKS * MAX_NUM_HEADS)
#define MAX_CLASSIFIER_W_SIZE (NUM_CLASSES * MAX_EMBED_DIM)
#define MAX_CLASSIFIER_B_SIZE (NUM_CLASSES)

#endif /* MODEL_CONFIG_H */