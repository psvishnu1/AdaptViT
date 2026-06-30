// tvm target: c -keys=cpu 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_cast_subtr_43d99f0f30bb3132_(float* p0, float* p1, float* p2, int16_t* T_subtract, uint8_t* global_const_workspace_296_var, uint8_t* global_workspace_297_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(float* p0, float* p1, float* p2, int16_t* T_subtract, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(float* p0, float* p1, float* p2, int16_t* T_subtract, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_squeeze_transpose_concatenate_add(float* p0, float* T_add, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_max(float* p0, float* p0_red, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_max_1(float* p0, float* p0_red, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_max_2(float* p0, float* p0_red, uint8_t* global_const_workspace_288_var, uint8_t* global_workspace_289_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_maximum_subtract_divide(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_maximum_subtract_divide_1(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_maximum_subtract_divide_2(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_294_var, uint8_t* global_workspace_295_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(float* p0, float* T_divide, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_min(float* p0, float* p0_red, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_min_1(float* p0, float* p0_red, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_min_2(float* p0, float* p0_red, uint8_t* global_const_workspace_290_var, uint8_t* global_workspace_291_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_minimum(float* p0, float* T_minimum, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_minimum_1(float* p0, float* T_minimum, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_minimum_2(float* p0, float* T_minimum, uint8_t* global_const_workspace_292_var, uint8_t* global_workspace_293_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_batch_matmul(float* p0, float* p1, float* T_batch_matmul_NN, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_batch_matmul_1(float* p0, float* p1, float* T_batch_matmul_NN, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add(float* p0, float* T_add, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_1(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_10(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_11(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_12(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_13(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_14(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_15(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_16(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_17(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_18(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_19(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_2(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_20(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_21(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_22(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_23(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_24(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_25(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_26(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_27(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_28(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_29(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_3(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_30(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_31(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_32(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_33(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_34(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_35(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_36(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_37(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_232_var, uint8_t* global_workspace_233_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_38(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_39(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_4(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_40(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_248_var, uint8_t* global_workspace_249_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_41(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_252_var, uint8_t* global_workspace_253_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_42(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_258_var, uint8_t* global_workspace_259_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_43(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_262_var, uint8_t* global_workspace_263_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_44(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_268_var, uint8_t* global_workspace_269_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_45(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_272_var, uint8_t* global_workspace_273_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_46(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_278_var, uint8_t* global_workspace_279_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_47(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_282_var, uint8_t* global_workspace_283_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_5(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_6(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_7(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_8(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_9(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add(int16_t* p0, float* p1, float* T_add, uint8_t* global_const_workspace_298_var, uint8_t* global_workspace_299_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_broadcast_to(float* p0, float* T_broadcast_to, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_1(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_10(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_11(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_12(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_13(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_14(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_15(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_16(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_17(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_18(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_234_var, uint8_t* global_workspace_235_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_19(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_2(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_20(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_254_var, uint8_t* global_workspace_255_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_21(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_264_var, uint8_t* global_workspace_265_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_22(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_274_var, uint8_t* global_workspace_275_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_23(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_284_var, uint8_t* global_workspace_285_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_3(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_4(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_5(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_6(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_7(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_8(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_9(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_10(float* p0, float* T_multiply, uint8_t* global_const_workspace_260_var, uint8_t* global_workspace_261_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_11(float* p0, float* T_multiply, uint8_t* global_const_workspace_280_var, uint8_t* global_workspace_281_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_4(float* p0, float* T_multiply, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_5(float* p0, float* T_multiply, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_6(float* p0, float* T_multiply, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_7(float* p0, float* T_multiply, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_8(float* p0, float* T_multiply, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_9(float* p0, float* T_multiply, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_1(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_10(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_250_var, uint8_t* global_workspace_251_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_11(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_270_var, uint8_t* global_workspace_271_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_2(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_3(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_4(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_5(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_6(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_7(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_8(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_9(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_squeeze_transpose_reshape(float* p0, float* T_reshape, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_squeeze_broadcast_to_reshape(float* p0, float* p0_1, float* p0_2, float* T_reshape, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(float* p0, float* p0_1, float* p0_2, float* T_reshape, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(float* p0, float* p0_1, float* p0_2, float* T_reshape, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_1(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_10(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_11(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_12(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_13(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_14(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_15(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_16(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_17(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_18(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_19(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_236_var, uint8_t* global_workspace_237_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_2(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_20(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_246_var, uint8_t* global_workspace_247_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_21(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_256_var, uint8_t* global_workspace_257_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_22(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_266_var, uint8_t* global_workspace_267_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_23(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_276_var, uint8_t* global_workspace_277_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_3(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_4(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_5(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_6(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_7(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_8(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_9(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_take(float* p0, float* p1, float* p2, float* T_take, uint8_t* global_const_workspace_286_var, uint8_t* global_workspace_287_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_variance(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input0_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float expf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float erff(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float sqrtf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_cast_subtr_43d99f0f30bb3132_(float* p0, float* p1, float* p2, int16_t* T_subtract, uint8_t* global_const_workspace_296_var, uint8_t* global_workspace_297_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      float v_ = 0.000000e+00f - (p2[0] / p1[0]);
      float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
      float v__2 = roundf((p0[cse_var_1] / p1[0])) + ((float)((int32_t)roundf(((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
      float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
      T_subtract[cse_var_1] = (((int16_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f))) - ((int16_t)((int32_t)roundf(((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(float* p0, float* p1, float* p2, int16_t* T_subtract, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  for (int32_t ax0 = 0; ax0 < 197; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        int32_t cse_var_1 = (((ax0 * 768) + (ax1_outer * 16)) + ax1_inner);
        float v_ = 0.000000e+00f - (p2[0] / p1[0]);
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = roundf((p0[cse_var_1] / p1[0])) + ((float)((int32_t)roundf(((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_subtract[cse_var_1] = (((int16_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)))) - ((int16_t)((int32_t)roundf(((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(float* p0, float* p1, float* p2, int16_t* T_subtract, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  for (int32_t ax0 = 0; ax0 < 197; ++ax0) {
    for (int32_t ax1_outer = 0; ax1_outer < 192; ++ax1_outer) {
      for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
        int32_t cse_var_1 = (((ax0 * 3072) + (ax1_outer * 16)) + ax1_inner);
        float v_ = 0.000000e+00f - (p2[0] / p1[0]);
        float v__1 = (v_) < (1.270000e+02f) ? (v_) : (1.270000e+02f);
        float v__2 = roundf((p0[cse_var_1] / p1[0])) + ((float)((int32_t)roundf(((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f)))));
        float v__3 = (v__2) < (2.550000e+02f) ? (v__2) : (2.550000e+02f);
        T_subtract[cse_var_1] = (((int16_t)((uint8_t)((v__3) > (0.000000e+00f) ? (v__3) : (0.000000e+00f)))) - ((int16_t)((int32_t)roundf(((v__1) > (0.000000e+00f) ? (v__1) : (0.000000e+00f))))));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform(float* p0, float* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 224; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 224; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 3; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 672) + (ax3 * 3)) + ax4_inner)] = p0[(((ax4_inner * 50176) + (ax0_ax1_fused_ax2_fused * 224)) + ax3)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_reshape_squeeze_transpose_concatenate_add(float* p0, float* T_add, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_layout_transform_reshape_squeeze_transpose_concatenate_constant_let = (&(global_const_workspace_6_var[172228608]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[173379072]));
  void* T_layout_trans_let = (&(global_workspace_7_var[4330848]));
  void* T_transpose_let = (&(global_workspace_7_var[4936032]));
  for (int32_t ax0_ax1_fused_ax2_fused_ax3_fused = 0; ax0_ax1_fused_ax2_fused_ax3_fused < 150528; ++ax0_ax1_fused_ax2_fused_ax3_fused) {
    ((float*)T_layout_trans_let)[ax0_ax1_fused_ax2_fused_ax3_fused] = p0[((((ax0_ax1_fused_ax2_fused_ax3_fused / 784) * 784) + ((ax0_ax1_fused_ax2_fused_ax3_fused % 196) * 4)) + ((ax0_ax1_fused_ax2_fused_ax3_fused % 784) / 196))];
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 150528; ++ax0_ax1_fused_ax2_fused) {
    ((float*)T_transpose_let)[ax0_ax1_fused_ax2_fused] = ((float*)T_layout_trans_let)[(((ax0_ax1_fused_ax2_fused % 768) * 196) + (ax0_ax1_fused_ax2_fused / 768))];
  }
  for (int32_t j = 0; j < 768; ++j) {
    ((float*)T_layout_trans_let)[j] = ((float*)fused_constant_1_let)[j];
  }
  for (int32_t j_1 = 0; j_1 < 150528; ++j_1) {
    ((float*)T_layout_trans_let)[(j_1 + 768)] = ((float*)T_transpose_let)[j_1];
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 151296; ++ax0_ax1_fused_ax2_fused_1) {
    T_add[ax0_ax1_fused_ax2_fused_1] = (((float*)T_layout_trans_let)[ax0_ax1_fused_ax2_fused_1] + ((float*)fused_layout_transform_reshape_squeeze_transpose_concatenate_constant_let)[ax0_ax1_fused_ax2_fused_1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_max(float* p0, float* p0_red, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  p0_red[0] = -3.402823e+38f;
  for (int32_t k1 = 0; k1 < 197; ++k1) {
    for (int32_t k2 = 0; k2 < 768; ++k2) {
      float v_ = p0_red[0];
      float v__1 = p0[((k1 * 768) + k2)];
      p0_red[0] = ((v_) > (v__1) ? (v_) : (v__1));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_max_1(float* p0, float* p0_red, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  p0_red[0] = -3.402823e+38f;
  for (int32_t k1 = 0; k1 < 197; ++k1) {
    for (int32_t k2 = 0; k2 < 3072; ++k2) {
      float v_ = p0_red[0];
      float v__1 = p0[((k1 * 3072) + k2)];
      p0_red[0] = ((v_) > (v__1) ? (v_) : (v__1));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_max_2(float* p0, float* p0_red, uint8_t* global_const_workspace_288_var, uint8_t* global_workspace_289_var) {
  p0_red[0] = -3.402823e+38f;
  for (int32_t k1 = 0; k1 < 768; ++k1) {
    float v_ = p0_red[0];
    float v__1 = p0[k1];
    p0_red[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_maximum_subtract_divide(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  float v_ = p0[0];
  T_divide[0] = ((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) - p1[0]) * 7.874016e-03f);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_maximum_subtract_divide_1(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  float v_ = p0[0];
  T_divide[0] = ((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) - p1[0]) * 7.874016e-03f);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_maximum_subtract_divide_2(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_294_var, uint8_t* global_workspace_295_var) {
  float v_ = p0[0];
  T_divide[0] = ((((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f)) - p1[0]) * 7.874016e-03f);
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_mean(float* p0, float* T_divide, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* p0_red_let = (&(global_workspace_9_var[6051840]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    ((float*)p0_red_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t k2 = 0; k2 < 768; ++k2) {
      ((float*)p0_red_let)[ax0_ax1_fused] = (((float*)p0_red_let)[ax0_ax1_fused] + p0[((ax0_ax1_fused * 768) + k2)]);
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 197; ++ax0_ax1_fused_1) {
    T_divide[ax0_ax1_fused_1] = (((float*)p0_red_let)[ax0_ax1_fused_1] * 1.302083e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_min(float* p0, float* p0_red, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  p0_red[0] = 3.402823e+38f;
  for (int32_t k1 = 0; k1 < 197; ++k1) {
    for (int32_t k2 = 0; k2 < 768; ++k2) {
      float v_ = p0_red[0];
      float v__1 = p0[((k1 * 768) + k2)];
      p0_red[0] = ((v_) < (v__1) ? (v_) : (v__1));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_min_1(float* p0, float* p0_red, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  p0_red[0] = 3.402823e+38f;
  for (int32_t k1 = 0; k1 < 197; ++k1) {
    for (int32_t k2 = 0; k2 < 3072; ++k2) {
      float v_ = p0_red[0];
      float v__1 = p0[((k1 * 3072) + k2)];
      p0_red[0] = ((v_) < (v__1) ? (v_) : (v__1));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_min_2(float* p0, float* p0_red, uint8_t* global_const_workspace_290_var, uint8_t* global_workspace_291_var) {
  p0_red[0] = 3.402823e+38f;
  for (int32_t k1 = 0; k1 < 768; ++k1) {
    float v_ = p0_red[0];
    float v__1 = p0[k1];
    p0_red[0] = ((v_) < (v__1) ? (v_) : (v__1));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_minimum(float* p0, float* T_minimum, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  float v_ = p0[0];
  T_minimum[0] = ((v_) < (0.000000e+00f) ? (v_) : (0.000000e+00f));
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_minimum_1(float* p0, float* T_minimum, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  float v_ = p0[0];
  T_minimum[0] = ((v_) < (0.000000e+00f) ? (v_) : (0.000000e+00f));
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_minimum_2(float* p0, float* T_minimum, uint8_t* global_const_workspace_292_var, uint8_t* global_workspace_293_var) {
  float v_ = p0[0];
  T_minimum[0] = ((v_) < (0.000000e+00f) ? (v_) : (0.000000e+00f));
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_batch_matmul(float* p0, float* p1, float* T_batch_matmul_NN, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  for (int32_t b_i_outer_fused_j_outer_fused = 0; b_i_outer_fused_j_outer_fused < 465708; ++b_i_outer_fused_j_outer_fused) {
    void* T_batch_matmul_NN_global_rf_let = (&(global_workspace_33_var[6146400]));
    void* T_batch_matmul_NN_global_let = (&(global_workspace_33_var[6146464]));
    for (int32_t k_inner = 0; k_inner < 16; ++k_inner) {
      int32_t cse_var_2 = (((b_i_outer_fused_j_outer_fused / 197) * 64) + k_inner);
      int32_t cse_var_1 = ((((b_i_outer_fused_j_outer_fused / 38809) * 12608) + (k_inner * 197)) + (b_i_outer_fused_j_outer_fused % 197));
      ((float*)T_batch_matmul_NN_global_rf_let)[k_inner] = 0.000000e+00f;
      ((float*)T_batch_matmul_NN_global_rf_let)[k_inner] = (((float*)T_batch_matmul_NN_global_rf_let)[k_inner] + (p0[cse_var_2] * p1[cse_var_1]));
      ((float*)T_batch_matmul_NN_global_rf_let)[k_inner] = (((float*)T_batch_matmul_NN_global_rf_let)[k_inner] + (p0[(cse_var_2 + 16)] * p1[(cse_var_1 + 3152)]));
      ((float*)T_batch_matmul_NN_global_rf_let)[k_inner] = (((float*)T_batch_matmul_NN_global_rf_let)[k_inner] + (p0[(cse_var_2 + 32)] * p1[(cse_var_1 + 6304)]));
      ((float*)T_batch_matmul_NN_global_rf_let)[k_inner] = (((float*)T_batch_matmul_NN_global_rf_let)[k_inner] + (p0[(cse_var_2 + 48)] * p1[(cse_var_1 + 9456)]));
    }
    ((float*)T_batch_matmul_NN_global_let)[0] = 0.000000e+00f;
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[0]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[1]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[2]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[3]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[4]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[5]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[6]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[7]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[8]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[9]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[10]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[11]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[12]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[13]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[14]);
    ((float*)T_batch_matmul_NN_global_let)[0] = (((float*)T_batch_matmul_NN_global_let)[0] + ((float*)T_batch_matmul_NN_global_rf_let)[15]);
    T_batch_matmul_NN[b_i_outer_fused_j_outer_fused] = ((float*)T_batch_matmul_NN_global_let)[0];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_batch_matmul_1(float* p0, float* p1, float* T_batch_matmul_NN, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  for (int32_t b_i_outer_fused_j_outer_fused = 0; b_i_outer_fused_j_outer_fused < 18912; ++b_i_outer_fused_j_outer_fused) {
    int32_t cse_var_1 = (b_i_outer_fused_j_outer_fused * 8);
    void* T_batch_matmul_NN_global_rf_let = (&(global_workspace_39_var[6146400]));
    void* T_batch_matmul_NN_global_let = (&(global_workspace_39_var[6146912]));
    for (int32_t k_inner = 0; k_inner < 16; ++k_inner) {
      for (int32_t i_c_j_c_fused = 0; i_c_j_c_fused < 8; ++i_c_j_c_fused) {
        int32_t cse_var_4 = ((k_inner * 8) + i_c_j_c_fused);
        int32_t cse_var_3 = (((b_i_outer_fused_j_outer_fused >> 3) * 197) + k_inner);
        int32_t cse_var_2 = (((((b_i_outer_fused_j_outer_fused / 1576) * 12608) + (k_inner * 64)) + ((b_i_outer_fused_j_outer_fused & 7) * 8)) + i_c_j_c_fused);
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = 0.000000e+00f;
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[cse_var_3] * p1[cse_var_2]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 16)] * p1[(cse_var_2 + 1024)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 32)] * p1[(cse_var_2 + 2048)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 48)] * p1[(cse_var_2 + 3072)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 64)] * p1[(cse_var_2 + 4096)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 80)] * p1[(cse_var_2 + 5120)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 96)] * p1[(cse_var_2 + 6144)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 112)] * p1[(cse_var_2 + 7168)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 128)] * p1[(cse_var_2 + 8192)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 144)] * p1[(cse_var_2 + 9216)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 160)] * p1[(cse_var_2 + 10240)]));
        ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 176)] * p1[(cse_var_2 + 11264)]));
        if (k_inner < 5) {
          ((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] = (((float*)T_batch_matmul_NN_global_rf_let)[cse_var_4] + (p0[(cse_var_3 + 192)] * p1[(cse_var_2 + 12288)]));
        }
      }
    }
    for (int32_t ax2 = 0; ax2 < 8; ++ax2) {
      ((float*)T_batch_matmul_NN_global_let)[ax2] = 0.000000e+00f;
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[ax2]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 8)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 16)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 24)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 32)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 40)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 48)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 56)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 64)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 72)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 80)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 88)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 96)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 104)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 112)]);
      ((float*)T_batch_matmul_NN_global_let)[ax2] = (((float*)T_batch_matmul_NN_global_let)[ax2] + ((float*)T_batch_matmul_NN_global_rf_let)[(ax2 + 120)]);
    }
    T_batch_matmul_NN[cse_var_1] = ((float*)T_batch_matmul_NN_global_let)[0];
    T_batch_matmul_NN[(cse_var_1 + 1)] = ((float*)T_batch_matmul_NN_global_let)[1];
    T_batch_matmul_NN[(cse_var_1 + 2)] = ((float*)T_batch_matmul_NN_global_let)[2];
    T_batch_matmul_NN[(cse_var_1 + 3)] = ((float*)T_batch_matmul_NN_global_let)[3];
    T_batch_matmul_NN[(cse_var_1 + 4)] = ((float*)T_batch_matmul_NN_global_let)[4];
    T_batch_matmul_NN[(cse_var_1 + 5)] = ((float*)T_batch_matmul_NN_global_let)[5];
    T_batch_matmul_NN[(cse_var_1 + 6)] = ((float*)T_batch_matmul_NN_global_let)[6];
    T_batch_matmul_NN[(cse_var_1 + 7)] = ((float*)T_batch_matmul_NN_global_let)[7];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add(float* p0, float* T_add, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[173376000]));
  void* fused_constant_let = (&(global_const_workspace_4_var[155713536]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2688; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[6140256]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((float*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0.000000e+00f;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((float*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0.000000e+00f;
    }
    for (int32_t kh = 0; kh < 16; ++kh) {
      for (int32_t kw = 0; kw < 16; ++kw) {
        for (int32_t ic_inner = 0; ic_inner < 3; ++ic_inner) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            ((float*)conv2d_NCHWc_global_let)[oc_block_c] = (((float*)conv2d_NCHWc_global_let)[oc_block_c] + (p0[(((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c)]));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_1 = (oc_block_c_1 + 4);
            ((float*)conv2d_NCHWc_global_let)[cse_var_1] = (((float*)conv2d_NCHWc_global_let)[cse_var_1] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 48)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_1)]));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_2 = (oc_block_c_2 + 8);
            ((float*)conv2d_NCHWc_global_let)[cse_var_2] = (((float*)conv2d_NCHWc_global_let)[cse_var_2] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 96)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_2)]));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_3 = (oc_block_c_3 + 12);
            ((float*)conv2d_NCHWc_global_let)[cse_var_3] = (((float*)conv2d_NCHWc_global_let)[cse_var_3] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 144)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_3)]));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_4 = (oc_block_c_4 + 16);
            ((float*)conv2d_NCHWc_global_let)[cse_var_4] = (((float*)conv2d_NCHWc_global_let)[cse_var_4] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 192)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_4)]));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_5 = (oc_block_c_5 + 20);
            ((float*)conv2d_NCHWc_global_let)[cse_var_5] = (((float*)conv2d_NCHWc_global_let)[cse_var_5] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 240)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_5)]));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_6 = (oc_block_c_6 + 24);
            ((float*)conv2d_NCHWc_global_let)[cse_var_6] = (((float*)conv2d_NCHWc_global_let)[cse_var_6] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 288)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_6)]));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_7 = (oc_block_c_7 + 28);
            ((float*)conv2d_NCHWc_global_let)[cse_var_7] = (((float*)conv2d_NCHWc_global_let)[cse_var_7] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 336)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_7)]));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_8 = (oc_block_c_8 + 32);
            ((float*)conv2d_NCHWc_global_let)[cse_var_8] = (((float*)conv2d_NCHWc_global_let)[cse_var_8] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 384)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_8)]));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_9 = (oc_block_c_9 + 36);
            ((float*)conv2d_NCHWc_global_let)[cse_var_9] = (((float*)conv2d_NCHWc_global_let)[cse_var_9] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 432)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_9)]));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_10 = (oc_block_c_10 + 40);
            ((float*)conv2d_NCHWc_global_let)[cse_var_10] = (((float*)conv2d_NCHWc_global_let)[cse_var_10] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 480)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_10)]));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_11 = (oc_block_c_11 + 44);
            ((float*)conv2d_NCHWc_global_let)[cse_var_11] = (((float*)conv2d_NCHWc_global_let)[cse_var_11] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 528)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_11)]));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_12 = (oc_block_c_12 + 48);
            ((float*)conv2d_NCHWc_global_let)[cse_var_12] = (((float*)conv2d_NCHWc_global_let)[cse_var_12] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 576)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_12)]));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
            int32_t cse_var_13 = (oc_block_c_13 + 52);
            ((float*)conv2d_NCHWc_global_let)[cse_var_13] = (((float*)conv2d_NCHWc_global_let)[cse_var_13] + (p0[((((((ax0_ax1_fused_ax2_fused % 14) * 10752) + (kh * 672)) + (kw * 3)) + ic_inner) + 624)] * ((float*)fused_constant_let)[((((((ax0_ax1_fused_ax2_fused / 14) * 3072) + (kh * 192)) + (kw * 12)) + (ic_inner * 4)) + oc_block_c_13)]));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 14; ++ax3_inner) {
      for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
        int32_t cse_var_14 = (ax3_inner * 4);
        T_add[(((ax0_ax1_fused_ax2_fused * 56) + cse_var_14) + ax4)] = (((float*)conv2d_NCHWc_global_let)[(cse_var_14 + ax4)] + ((float*)fused_nn_contrib_conv2d_NCHWc_constant_let)[(((ax0_ax1_fused_ax2_fused / 14) * 4) + ax4)]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_constant_2_let = (&(global_const_workspace_24_var[141557760]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_25_var[5238624]));
    void* compute_global_let = (&(global_workspace_25_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 3.270956e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_1(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_constant_3_let = (&(global_const_workspace_42_var[165150720]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_43_var[6354432]));
    void* compute_global_let = (&(global_workspace_43_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.768681e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_10(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_98_var, uint8_t* global_workspace_99_var) {
  void* fused_constant_12_let = (&(global_const_workspace_98_var[108527616]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_99_var[6354432]));
    void* compute_global_let = (&(global_workspace_99_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_12_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.678367e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_11(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_102_var, uint8_t* global_workspace_103_var) {
  void* fused_constant_13_let = (&(global_const_workspace_102_var[103809024]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_103_var[6051840]));
    void* compute_global_let = (&(global_workspace_103_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_13_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.320285e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_12(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_108_var, uint8_t* global_workspace_109_var) {
  void* fused_constant_14_let = (&(global_const_workspace_108_var[148635648]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_109_var[5238624]));
    void* compute_global_let = (&(global_workspace_109_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_14_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.503349e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_13(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_112_var, uint8_t* global_workspace_113_var) {
  void* fused_constant_15_let = (&(global_const_workspace_112_var[169869312]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_113_var[6354432]));
    void* compute_global_let = (&(global_workspace_113_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_15_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.020807e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_14(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_118_var, uint8_t* global_workspace_119_var) {
  void* fused_constant_16_let = (&(global_const_workspace_118_var[99090432]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_119_var[6354432]));
    void* compute_global_let = (&(global_workspace_119_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_16_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.340644e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_15(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_122_var, uint8_t* global_workspace_123_var) {
  void* fused_constant_17_let = (&(global_const_workspace_122_var[94371840]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_123_var[6051840]));
    void* compute_global_let = (&(global_workspace_123_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_17_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.225778e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_16(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_128_var, uint8_t* global_workspace_129_var) {
  void* fused_constant_18_let = (&(global_const_workspace_128_var[145096704]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_129_var[5238624]));
    void* compute_global_let = (&(global_workspace_129_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_18_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.223643e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_17(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_132_var, uint8_t* global_workspace_133_var) {
  void* fused_constant_19_let = (&(global_const_workspace_132_var[168689664]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_133_var[6354432]));
    void* compute_global_let = (&(global_workspace_133_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_19_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 8.286388e-04f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_18(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_138_var, uint8_t* global_workspace_139_var) {
  void* fused_constant_20_let = (&(global_const_workspace_138_var[89653248]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_139_var[6354432]));
    void* compute_global_let = (&(global_workspace_139_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_20_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.167956e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_19(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_142_var, uint8_t* global_workspace_143_var) {
  void* fused_constant_21_let = (&(global_const_workspace_142_var[84934656]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_143_var[6051840]));
    void* compute_global_let = (&(global_workspace_143_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_21_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.743851e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_2(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_constant_4_let = (&(global_const_workspace_48_var[42467328]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_49_var[6354432]));
    void* compute_global_let = (&(global_workspace_49_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.991090e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_20(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_148_var, uint8_t* global_workspace_149_var) {
  void* fused_constant_22_let = (&(global_const_workspace_148_var[138018816]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_149_var[5238624]));
    void* compute_global_let = (&(global_workspace_149_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_22_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.342317e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_21(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_152_var, uint8_t* global_workspace_153_var) {
  void* fused_constant_23_let = (&(global_const_workspace_152_var[167510016]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_153_var[6354432]));
    void* compute_global_let = (&(global_workspace_153_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_23_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 7.261342e-04f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_22(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_158_var, uint8_t* global_workspace_159_var) {
  void* fused_constant_24_let = (&(global_const_workspace_158_var[80216064]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_159_var[6354432]));
    void* compute_global_let = (&(global_workspace_159_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_24_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.073763e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_23(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_162_var, uint8_t* global_workspace_163_var) {
  void* fused_constant_25_let = (&(global_const_workspace_162_var[75497472]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_163_var[6051840]));
    void* compute_global_let = (&(global_workspace_163_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_25_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.146350e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_24(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_168_var, uint8_t* global_workspace_169_var) {
  void* fused_constant_26_let = (&(global_const_workspace_168_var[134479872]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_169_var[5238624]));
    void* compute_global_let = (&(global_workspace_169_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_26_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.317014e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_25(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_172_var, uint8_t* global_workspace_173_var) {
  void* fused_constant_27_let = (&(global_const_workspace_172_var[166330368]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_173_var[6354432]));
    void* compute_global_let = (&(global_workspace_173_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_27_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 7.929206e-04f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_26(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_178_var, uint8_t* global_workspace_179_var) {
  void* fused_constant_28_let = (&(global_const_workspace_178_var[70778880]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_179_var[6354432]));
    void* compute_global_let = (&(global_workspace_179_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_28_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.510113e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_27(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_182_var, uint8_t* global_workspace_183_var) {
  void* fused_constant_29_let = (&(global_const_workspace_182_var[66060288]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_183_var[6051840]));
    void* compute_global_let = (&(global_workspace_183_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_29_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.395534e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_28(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_188_var, uint8_t* global_workspace_189_var) {
  void* fused_constant_30_let = (&(global_const_workspace_188_var[130940928]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_189_var[5238624]));
    void* compute_global_let = (&(global_workspace_189_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_30_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.260885e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_29(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_192_var, uint8_t* global_workspace_193_var) {
  void* fused_constant_31_let = (&(global_const_workspace_192_var[163971072]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_193_var[6354432]));
    void* compute_global_let = (&(global_workspace_193_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_31_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 9.257438e-04f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_3(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_constant_5_let = (&(global_const_workspace_62_var[9437184]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_63_var[6051840]));
    void* compute_global_let = (&(global_workspace_63_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.113059e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_30(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_198_var, uint8_t* global_workspace_199_var) {
  void* fused_constant_32_let = (&(global_const_workspace_198_var[61341696]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_199_var[6354432]));
    void* compute_global_let = (&(global_workspace_199_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_32_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 9.653115e-04f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_31(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_202_var, uint8_t* global_workspace_203_var) {
  void* fused_constant_33_let = (&(global_const_workspace_202_var[56623104]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_203_var[6051840]));
    void* compute_global_let = (&(global_workspace_203_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_33_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.373941e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_32(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_208_var, uint8_t* global_workspace_209_var) {
  void* fused_constant_34_let = (&(global_const_workspace_208_var[127401984]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_209_var[5238624]));
    void* compute_global_let = (&(global_workspace_209_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_34_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.328230e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_33(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_212_var, uint8_t* global_workspace_213_var) {
  void* fused_constant_35_let = (&(global_const_workspace_212_var[162791424]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_213_var[6354432]));
    void* compute_global_let = (&(global_workspace_213_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_35_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.335945e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_34(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_218_var, uint8_t* global_workspace_219_var) {
  void* fused_constant_36_let = (&(global_const_workspace_218_var[51904512]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_219_var[6354432]));
    void* compute_global_let = (&(global_workspace_219_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_36_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 7.037405e-04f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_35(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_222_var, uint8_t* global_workspace_223_var) {
  void* fused_constant_37_let = (&(global_const_workspace_222_var[47185920]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_223_var[6051840]));
    void* compute_global_let = (&(global_workspace_223_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_37_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.232281e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_36(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_228_var, uint8_t* global_workspace_229_var) {
  void* fused_constant_38_let = (&(global_const_workspace_228_var[123863040]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_229_var[5238624]));
    void* compute_global_let = (&(global_workspace_229_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_38_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.476743e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_37(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_232_var, uint8_t* global_workspace_233_var) {
  void* fused_constant_39_let = (&(global_const_workspace_232_var[161611776]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_233_var[6354432]));
    void* compute_global_let = (&(global_workspace_233_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_39_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.896039e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_38(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_238_var, uint8_t* global_workspace_239_var) {
  void* fused_constant_40_let = (&(global_const_workspace_238_var[37748736]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_239_var[6354432]));
    void* compute_global_let = (&(global_workspace_239_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_40_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.030549e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_39(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_242_var, uint8_t* global_workspace_243_var) {
  void* fused_constant_41_let = (&(global_const_workspace_242_var[33030144]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_243_var[6051840]));
    void* compute_global_let = (&(global_workspace_243_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_41_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.863592e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_4(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_68_var, uint8_t* global_workspace_69_var) {
  void* fused_constant_6_let = (&(global_const_workspace_68_var[113246208]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_69_var[5238624]));
    void* compute_global_let = (&(global_workspace_69_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_6_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 3.572134e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_40(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_248_var, uint8_t* global_workspace_249_var) {
  void* fused_constant_42_let = (&(global_const_workspace_248_var[120324096]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_249_var[5238624]));
    void* compute_global_let = (&(global_workspace_249_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_42_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.095720e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_41(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_252_var, uint8_t* global_workspace_253_var) {
  void* fused_constant_43_let = (&(global_const_workspace_252_var[160432128]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_253_var[6354432]));
    void* compute_global_let = (&(global_workspace_253_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_43_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.907505e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_42(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_258_var, uint8_t* global_workspace_259_var) {
  void* fused_constant_44_let = (&(global_const_workspace_258_var[28311552]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_259_var[6354432]));
    void* compute_global_let = (&(global_workspace_259_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_44_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.201659e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_43(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_262_var, uint8_t* global_workspace_263_var) {
  void* fused_constant_45_let = (&(global_const_workspace_262_var[23592960]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_263_var[6051840]));
    void* compute_global_let = (&(global_workspace_263_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_45_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 3.546339e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_44(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_268_var, uint8_t* global_workspace_269_var) {
  void* fused_constant_46_let = (&(global_const_workspace_268_var[116785152]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_269_var[5238624]));
    void* compute_global_let = (&(global_workspace_269_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_46_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.033724e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_45(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_272_var, uint8_t* global_workspace_273_var) {
  void* fused_constant_47_let = (&(global_const_workspace_272_var[159252480]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_273_var[6354432]));
    void* compute_global_let = (&(global_workspace_273_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_47_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.812294e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_46(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_278_var, uint8_t* global_workspace_279_var) {
  void* fused_constant_48_let = (&(global_const_workspace_278_var[18874368]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_279_var[6354432]));
    void* compute_global_let = (&(global_workspace_279_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_48_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.123903e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_47(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_282_var, uint8_t* global_workspace_283_var) {
  void* fused_constant_49_let = (&(global_const_workspace_282_var[14155776]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_283_var[6657024]));
    void* compute_global_let = (&(global_workspace_283_var[6658048]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_49_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 5.943769e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_5(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_72_var, uint8_t* global_workspace_73_var) {
  void* fused_constant_7_let = (&(global_const_workspace_72_var[158072832]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_73_var[6354432]));
    void* compute_global_let = (&(global_workspace_73_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.760116e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_6(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_78_var, uint8_t* global_workspace_79_var) {
  void* fused_constant_8_let = (&(global_const_workspace_78_var[4718592]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_79_var[6354432]));
    void* compute_global_let = (&(global_workspace_79_var[6358528]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 128; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_8_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 128; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 3072) + ((ax1_outer_ax0_outer_fused / 197) * 1024)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.999347e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_7(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_82_var, uint8_t* global_workspace_83_var) {
  void* fused_constant_9_let = (&(global_const_workspace_82_var[0]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_83_var[6051840]));
    void* compute_global_let = (&(global_workspace_83_var[6052864]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 3072; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 3072) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_9_let)[(((((ax1_outer_ax0_outer_fused / 197) * 786432) + (y_inner_outer_x_inner_outer_fused * 24576)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.918646e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_8(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_88_var, uint8_t* global_workspace_89_var) {
  void* fused_constant_10_let = (&(global_const_workspace_88_var[152174592]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 1773; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_89_var[5238624]));
    void* compute_global_let = (&(global_workspace_89_var[5239648]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_10_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 2304) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 2.491658e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_9(int16_t* p0, float* p1, float* T_multiply, uint8_t* global_const_workspace_92_var, uint8_t* global_workspace_93_var) {
  void* fused_constant_11_let = (&(global_const_workspace_92_var[171048960]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 591; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_93_var[6354432]));
    void* compute_global_let = (&(global_workspace_93_var[6355456]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 32; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[(((ax1_outer_ax0_outer_fused % 197) * 768) + k_outer)]) * ((int32_t)((int16_t*)fused_constant_11_let)[(((((ax1_outer_ax0_outer_fused / 197) * 196608) + (y_inner_outer_x_inner_outer_fused * 6144)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 32; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_1 = (ax1_inner_outer * 8);
        T_multiply[(((((ax1_outer_ax0_outer_fused % 197) * 768) + ((ax1_outer_ax0_outer_fused / 197) * 256)) + cse_var_1) + ax1_inner_inner)] = (((float)((int32_t*)compute_let)[(cse_var_1 + ax1_inner_inner)]) * (p1[0] * 1.352138e-03f));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add(int16_t* p0, float* p1, float* T_add, uint8_t* global_const_workspace_298_var, uint8_t* global_workspace_299_var) {
  void* fused_nn_contrib_dense_pack_cast_multiply_multiply_constant_let = (&(global_const_workspace_298_var[173382144]));
  void* fused_constant_50_let = (&(global_const_workspace_298_var[172833792]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 37; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_299_var[6056456]));
    ((int32_t*)compute_global_let)[0] = 0;
    for (int32_t k_outer = 0; k_outer < 768; ++k_outer) {
      ((int32_t*)compute_global_let)[0] = (((int32_t*)compute_global_let)[0] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_50_let)[((ax1_outer_ax0_outer_fused * 768) + k_outer)])));
    }
    T_add[ax1_outer_ax0_outer_fused] = ((((float)((int32_t*)compute_global_let)[0]) * (p1[0] * 1.216901e-03f)) + ((float*)fused_nn_contrib_dense_pack_cast_multiply_multiply_constant_let)[ax1_outer_ax0_outer_fused]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_broadcast_to(float* p0, float* T_broadcast_to, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2364; ++ax0_ax1_fused_ax2_fused) {
    void* T_softmax_maxelem_let = (&(global_workspace_35_var[4936824]));
    void* T_softmax_exp_let = (&(global_workspace_35_var[4936032]));
    void* T_softmax_expsum_let = (&(global_workspace_35_var[4936832]));
    ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
    for (int32_t k = 0; k < 197; ++k) {
      float v_ = ((float*)T_softmax_maxelem_let)[0];
      float v__1 = p0[((ax0_ax1_fused_ax2_fused * 197) + k)];
      ((float*)T_softmax_maxelem_let)[0] = ((v_) > (v__1) ? (v_) : (v__1));
    }
    for (int32_t i3 = 0; i3 < 197; ++i3) {
      ((float*)T_softmax_exp_let)[i3] = expf((p0[((ax0_ax1_fused_ax2_fused * 197) + i3)] - ((float*)T_softmax_maxelem_let)[0]));
    }
    ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
    for (int32_t k_1 = 0; k_1 < 197; ++k_1) {
      ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
    }
    for (int32_t i3_1 = 0; i3_1 < 197; ++i3_1) {
      ((float*)T_softmax_exp_let)[i3_1] = (((float*)T_softmax_exp_let)[i3_1] / ((float*)T_softmax_expsum_let)[0]);
    }
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      T_broadcast_to[((ax0_ax1_fused_ax2_fused * 197) + ax3)] = ((float*)T_softmax_exp_let)[ax3];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_reshape_constant_1_let = (&(global_const_workspace_44_var[173372928]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_1_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_1(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  void* fused_reshape_constant_3_let = (&(global_const_workspace_64_var[173339136]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_3_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_10(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_154_var, uint8_t* global_workspace_155_var) {
  void* fused_reshape_constant_21_let = (&(global_const_workspace_154_var[173354496]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_21_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_11(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_164_var, uint8_t* global_workspace_165_var) {
  void* fused_reshape_constant_23_let = (&(global_const_workspace_164_var[173351424]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_23_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_12(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_174_var, uint8_t* global_workspace_175_var) {
  void* fused_reshape_constant_25_let = (&(global_const_workspace_174_var[173348352]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_25_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_13(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_184_var, uint8_t* global_workspace_185_var) {
  void* fused_reshape_constant_27_let = (&(global_const_workspace_184_var[173345280]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_27_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_14(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_194_var, uint8_t* global_workspace_195_var) {
  void* fused_reshape_constant_29_let = (&(global_const_workspace_194_var[173342208]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_29_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_15(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_204_var, uint8_t* global_workspace_205_var) {
  void* fused_reshape_constant_31_let = (&(global_const_workspace_204_var[173336064]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_31_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_16(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_214_var, uint8_t* global_workspace_215_var) {
  void* fused_reshape_constant_33_let = (&(global_const_workspace_214_var[173332992]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_33_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_17(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_224_var, uint8_t* global_workspace_225_var) {
  void* fused_reshape_constant_35_let = (&(global_const_workspace_224_var[173329920]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_35_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_18(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_234_var, uint8_t* global_workspace_235_var) {
  void* fused_reshape_constant_37_let = (&(global_const_workspace_234_var[173326848]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_37_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_19(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_244_var, uint8_t* global_workspace_245_var) {
  void* fused_reshape_constant_39_let = (&(global_const_workspace_244_var[173323776]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_39_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_2(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_74_var, uint8_t* global_workspace_75_var) {
  void* fused_reshape_constant_5_let = (&(global_const_workspace_74_var[173308416]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_5_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_20(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_254_var, uint8_t* global_workspace_255_var) {
  void* fused_reshape_constant_41_let = (&(global_const_workspace_254_var[173320704]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_41_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_21(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_264_var, uint8_t* global_workspace_265_var) {
  void* fused_reshape_constant_43_let = (&(global_const_workspace_264_var[173317632]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_43_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_22(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_274_var, uint8_t* global_workspace_275_var) {
  void* fused_reshape_constant_45_let = (&(global_const_workspace_274_var[173314560]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_45_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_23(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_284_var, uint8_t* global_workspace_285_var) {
  void* fused_reshape_constant_47_let = (&(global_const_workspace_284_var[173311488]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_47_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_3(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_84_var, uint8_t* global_workspace_85_var) {
  void* fused_reshape_constant_7_let = (&(global_const_workspace_84_var[173305344]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_7_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_4(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_94_var, uint8_t* global_workspace_95_var) {
  void* fused_reshape_constant_9_let = (&(global_const_workspace_94_var[173302272]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_9_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_5(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_104_var, uint8_t* global_workspace_105_var) {
  void* fused_reshape_constant_11_let = (&(global_const_workspace_104_var[173369856]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_11_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_6(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_114_var, uint8_t* global_workspace_115_var) {
  void* fused_reshape_constant_13_let = (&(global_const_workspace_114_var[173366784]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_13_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_7(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_124_var, uint8_t* global_workspace_125_var) {
  void* fused_reshape_constant_15_let = (&(global_const_workspace_124_var[173363712]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_15_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_8(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_134_var, uint8_t* global_workspace_135_var) {
  void* fused_reshape_constant_17_let = (&(global_const_workspace_134_var[173360640]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_17_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_add_9(float* p0, float* p1, float* T_add, uint8_t* global_const_workspace_144_var, uint8_t* global_workspace_145_var) {
  void* fused_reshape_constant_19_let = (&(global_const_workspace_144_var[173357568]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_2 = (ax2_outer * 16);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_2) + ax2_inner);
        T_add[cse_var_1] = (p1[cse_var_1] + (p0[cse_var_1] + ((float*)fused_reshape_constant_19_let)[(cse_var_2 + ax2_inner)]));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply(float* p0, float* T_multiply, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_reshape_constant_2_let = (&(global_const_workspace_50_var[172988928]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_2_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_2_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_1(float* p0, float* T_multiply, uint8_t* global_const_workspace_80_var, uint8_t* global_workspace_81_var) {
  void* fused_reshape_constant_6_let = (&(global_const_workspace_80_var[172890624]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_6_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_6_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_10(float* p0, float* T_multiply, uint8_t* global_const_workspace_260_var, uint8_t* global_workspace_261_var) {
  void* fused_reshape_constant_42_let = (&(global_const_workspace_260_var[172915200]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_42_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_42_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_11(float* p0, float* T_multiply, uint8_t* global_const_workspace_280_var, uint8_t* global_workspace_281_var) {
  void* fused_reshape_constant_46_let = (&(global_const_workspace_280_var[172902912]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_46_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_46_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_2(float* p0, float* T_multiply, uint8_t* global_const_workspace_100_var, uint8_t* global_workspace_101_var) {
  void* fused_reshape_constant_10_let = (&(global_const_workspace_100_var[173025792]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_10_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_10_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_3(float* p0, float* T_multiply, uint8_t* global_const_workspace_120_var, uint8_t* global_workspace_121_var) {
  void* fused_reshape_constant_14_let = (&(global_const_workspace_120_var[173013504]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_14_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_14_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_4(float* p0, float* T_multiply, uint8_t* global_const_workspace_140_var, uint8_t* global_workspace_141_var) {
  void* fused_reshape_constant_18_let = (&(global_const_workspace_140_var[173001216]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_18_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_18_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_5(float* p0, float* T_multiply, uint8_t* global_const_workspace_160_var, uint8_t* global_workspace_161_var) {
  void* fused_reshape_constant_22_let = (&(global_const_workspace_160_var[172976640]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_22_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_22_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_6(float* p0, float* T_multiply, uint8_t* global_const_workspace_180_var, uint8_t* global_workspace_181_var) {
  void* fused_reshape_constant_26_let = (&(global_const_workspace_180_var[172964352]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_26_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_26_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_7(float* p0, float* T_multiply, uint8_t* global_const_workspace_200_var, uint8_t* global_workspace_201_var) {
  void* fused_reshape_constant_30_let = (&(global_const_workspace_200_var[172952064]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_30_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_30_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_8(float* p0, float* T_multiply, uint8_t* global_const_workspace_220_var, uint8_t* global_workspace_221_var) {
  void* fused_reshape_constant_34_let = (&(global_const_workspace_220_var[172939776]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_34_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_34_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_9(float* p0, float* T_multiply, uint8_t* global_const_workspace_240_var, uint8_t* global_workspace_241_var) {
  void* fused_reshape_constant_38_let = (&(global_const_workspace_240_var[172927488]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 192; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 3072) + cse_var_3) + ax2_inner);
        T_multiply[cse_var_1] = ((p0[cse_var_1] + ((float*)fused_reshape_constant_38_let)[cse_var_2]) * (5.000000e-01f + (erff(((p0[cse_var_1] + ((float*)fused_reshape_constant_38_let)[cse_var_2]) * 7.071068e-01f)) * 5.000000e-01f)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_reshape_constant_let = (&(global_const_workspace_26_var[173139456]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_1(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_70_var, uint8_t* global_workspace_71_var) {
  void* fused_reshape_constant_4_let = (&(global_const_workspace_70_var[173065728]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_4_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_4_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_4_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_10(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_250_var, uint8_t* global_workspace_251_var) {
  void* fused_reshape_constant_40_let = (&(global_const_workspace_250_var[173056512]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_40_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_40_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_40_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_11(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_270_var, uint8_t* global_workspace_271_var) {
  void* fused_reshape_constant_44_let = (&(global_const_workspace_270_var[173047296]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_44_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_44_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_44_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_2(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_90_var, uint8_t* global_workspace_91_var) {
  void* fused_reshape_constant_8_let = (&(global_const_workspace_90_var[173038080]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_8_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_8_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_8_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_3(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_110_var, uint8_t* global_workspace_111_var) {
  void* fused_reshape_constant_12_let = (&(global_const_workspace_110_var[173130240]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_12_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_12_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_12_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_4(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_130_var, uint8_t* global_workspace_131_var) {
  void* fused_reshape_constant_16_let = (&(global_const_workspace_130_var[173121024]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_16_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_16_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_16_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_5(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_150_var, uint8_t* global_workspace_151_var) {
  void* fused_reshape_constant_20_let = (&(global_const_workspace_150_var[173111808]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_20_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_20_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_20_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_6(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_170_var, uint8_t* global_workspace_171_var) {
  void* fused_reshape_constant_24_let = (&(global_const_workspace_170_var[173102592]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_24_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_24_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_24_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_7(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_190_var, uint8_t* global_workspace_191_var) {
  void* fused_reshape_constant_28_let = (&(global_const_workspace_190_var[173093376]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_28_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_28_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_28_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_8(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_210_var, uint8_t* global_workspace_211_var) {
  void* fused_reshape_constant_32_let = (&(global_const_workspace_210_var[173084160]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_32_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_32_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_32_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_add_reshape_transpose_split_9(float* p0, float* T_split_sections, float* T_split_sections_1, float* T_split_sections_2, uint8_t* global_const_workspace_230_var, uint8_t* global_workspace_231_var) {
  void* fused_reshape_constant_36_let = (&(global_const_workspace_230_var[173074944]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 197; ++ax3) {
      for (int32_t ax4_outer = 0; ax4_outer < 4; ++ax4_outer) {
        for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
          int32_t cse_var_2 = (ax0_ax1_fused_ax2_fused * 64);
          int32_t cse_var_1 = (ax4_outer * 16);
          T_split_sections[((((ax0_ax1_fused_ax2_fused * 12608) + (ax3 * 64)) + cse_var_1) + ax4_inner)] = (p0[((((ax3 * 2304) + cse_var_2) + cse_var_1) + ax4_inner)] + ((float*)fused_reshape_constant_36_let)[((cse_var_2 + cse_var_1) + ax4_inner)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_1 = 0; ax0_ax1_fused_ax2_fused_1 < 12; ++ax0_ax1_fused_ax2_fused_1) {
    for (int32_t ax3_1 = 0; ax3_1 < 197; ++ax3_1) {
      for (int32_t ax4_outer_1 = 0; ax4_outer_1 < 4; ++ax4_outer_1) {
        for (int32_t ax4_inner_1 = 0; ax4_inner_1 < 16; ++ax4_inner_1) {
          int32_t cse_var_4 = (ax0_ax1_fused_ax2_fused_1 * 64);
          int32_t cse_var_3 = (ax4_outer_1 * 16);
          T_split_sections_1[((((ax0_ax1_fused_ax2_fused_1 * 12608) + (ax3_1 * 64)) + cse_var_3) + ax4_inner_1)] = (p0[(((((ax3_1 * 2304) + cse_var_4) + cse_var_3) + ax4_inner_1) + 768)] + ((float*)fused_reshape_constant_36_let)[(((cse_var_4 + cse_var_3) + ax4_inner_1) + 768)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused_2 = 0; ax0_ax1_fused_ax2_fused_2 < 12; ++ax0_ax1_fused_ax2_fused_2) {
    for (int32_t ax3_2 = 0; ax3_2 < 197; ++ax3_2) {
      for (int32_t ax4_outer_2 = 0; ax4_outer_2 < 4; ++ax4_outer_2) {
        for (int32_t ax4_inner_2 = 0; ax4_inner_2 < 16; ++ax4_inner_2) {
          int32_t cse_var_6 = (ax0_ax1_fused_ax2_fused_2 * 64);
          int32_t cse_var_5 = (ax4_outer_2 * 16);
          T_split_sections_2[((((ax0_ax1_fused_ax2_fused_2 * 12608) + (ax3_2 * 64)) + cse_var_5) + ax4_inner_2)] = (p0[(((((ax3_2 * 2304) + cse_var_6) + cse_var_5) + ax4_inner_2) + 1536)] + ((float*)fused_reshape_constant_36_let)[(((cse_var_6 + cse_var_5) + ax4_inner_2) + 1536)]);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_squeeze_transpose_reshape(float* p0, float* T_reshape, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        T_reshape[(((ax0_ax1_fused * 768) + (ax2_outer * 16)) + ax2_inner)] = p0[(((((ax2_outer >> 2) * 12608) + (ax0_ax1_fused * 64)) + ((ax2_outer & 3) * 16)) + ax2_inner)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_squeeze_broadcast_to_reshape(float* p0, float* p0_1, float* p0_2, float* T_reshape, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 2364; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 64) + (ax2_outer * 16)) + ax2_inner);
        T_reshape[cse_var_1] = p0_2[cse_var_1];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(float* p0, float* p0_1, float* p0_2, float* T_reshape, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 2364; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 4; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 64) + (ax2_outer * 16)) + ax2_inner);
        T_reshape[cse_var_1] = (p0[cse_var_1] * 1.250000e-01f);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(float* p0, float* p0_1, float* p0_2, float* T_reshape, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 768; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 13; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        if (((ax2_outer * 16) + ax2_inner) < 197) {
          T_reshape[(((ax0_ax1_fused * 197) + (ax2_outer * 16)) + ax2_inner)] = p0_1[(((((ax0_ax1_fused >> 6) * 12608) + (ax2_outer * 1024)) + (ax2_inner * 64)) + (ax0_ax1_fused & 63))];
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_let = (&(global_const_workspace_12_var[173222400]));
  void* fused_subtract_add_rsqrt_multiply_constant_let = (&(global_const_workspace_12_var[173299200]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_1(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_1_let = (&(global_const_workspace_46_var[173219328]));
  void* fused_subtract_add_rsqrt_multiply_constant_1_let = (&(global_const_workspace_46_var[173296128]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_1_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_1_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_10(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_146_var, uint8_t* global_workspace_147_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_10_let = (&(global_const_workspace_146_var[173216256]));
  void* fused_subtract_add_rsqrt_multiply_constant_10_let = (&(global_const_workspace_146_var[173293056]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_10_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_10_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_11(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_156_var, uint8_t* global_workspace_157_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_11_let = (&(global_const_workspace_156_var[173213184]));
  void* fused_subtract_add_rsqrt_multiply_constant_11_let = (&(global_const_workspace_156_var[173289984]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_11_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_11_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_12(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_166_var, uint8_t* global_workspace_167_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_12_let = (&(global_const_workspace_166_var[173210112]));
  void* fused_subtract_add_rsqrt_multiply_constant_12_let = (&(global_const_workspace_166_var[173286912]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_12_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_12_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_13(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_176_var, uint8_t* global_workspace_177_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_13_let = (&(global_const_workspace_176_var[173207040]));
  void* fused_subtract_add_rsqrt_multiply_constant_13_let = (&(global_const_workspace_176_var[173283840]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_13_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_13_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_14(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_186_var, uint8_t* global_workspace_187_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_14_let = (&(global_const_workspace_186_var[173203968]));
  void* fused_subtract_add_rsqrt_multiply_constant_14_let = (&(global_const_workspace_186_var[173280768]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_14_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_14_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_15(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_196_var, uint8_t* global_workspace_197_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_15_let = (&(global_const_workspace_196_var[173200896]));
  void* fused_subtract_add_rsqrt_multiply_constant_15_let = (&(global_const_workspace_196_var[173277696]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_15_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_15_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_16(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_206_var, uint8_t* global_workspace_207_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_16_let = (&(global_const_workspace_206_var[173197824]));
  void* fused_subtract_add_rsqrt_multiply_constant_16_let = (&(global_const_workspace_206_var[173274624]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_16_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_16_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_17(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_216_var, uint8_t* global_workspace_217_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_17_let = (&(global_const_workspace_216_var[173194752]));
  void* fused_subtract_add_rsqrt_multiply_constant_17_let = (&(global_const_workspace_216_var[173271552]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_17_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_17_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_18(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_226_var, uint8_t* global_workspace_227_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_18_let = (&(global_const_workspace_226_var[173191680]));
  void* fused_subtract_add_rsqrt_multiply_constant_18_let = (&(global_const_workspace_226_var[173268480]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_18_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_18_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_19(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_236_var, uint8_t* global_workspace_237_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_19_let = (&(global_const_workspace_236_var[173188608]));
  void* fused_subtract_add_rsqrt_multiply_constant_19_let = (&(global_const_workspace_236_var[173265408]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_19_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_19_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_2(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_66_var, uint8_t* global_workspace_67_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_2_let = (&(global_const_workspace_66_var[173185536]));
  void* fused_subtract_add_rsqrt_multiply_constant_2_let = (&(global_const_workspace_66_var[173262336]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_2_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_2_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_20(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_246_var, uint8_t* global_workspace_247_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_20_let = (&(global_const_workspace_246_var[173182464]));
  void* fused_subtract_add_rsqrt_multiply_constant_20_let = (&(global_const_workspace_246_var[173259264]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_20_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_20_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_21(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_256_var, uint8_t* global_workspace_257_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_21_let = (&(global_const_workspace_256_var[173179392]));
  void* fused_subtract_add_rsqrt_multiply_constant_21_let = (&(global_const_workspace_256_var[173256192]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_21_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_21_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_22(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_266_var, uint8_t* global_workspace_267_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_22_let = (&(global_const_workspace_266_var[173176320]));
  void* fused_subtract_add_rsqrt_multiply_constant_22_let = (&(global_const_workspace_266_var[173253120]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_22_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_22_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_23(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_276_var, uint8_t* global_workspace_277_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_23_let = (&(global_const_workspace_276_var[173173248]));
  void* fused_subtract_add_rsqrt_multiply_constant_23_let = (&(global_const_workspace_276_var[173250048]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_23_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_23_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_3(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_76_var, uint8_t* global_workspace_77_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_3_let = (&(global_const_workspace_76_var[173167104]));
  void* fused_subtract_add_rsqrt_multiply_constant_3_let = (&(global_const_workspace_76_var[173243904]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_3_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_3_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_4(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_86_var, uint8_t* global_workspace_87_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_4_let = (&(global_const_workspace_86_var[173164032]));
  void* fused_subtract_add_rsqrt_multiply_constant_4_let = (&(global_const_workspace_86_var[173240832]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_4_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_4_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_5(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_96_var, uint8_t* global_workspace_97_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_5_let = (&(global_const_workspace_96_var[173160960]));
  void* fused_subtract_add_rsqrt_multiply_constant_5_let = (&(global_const_workspace_96_var[173237760]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_5_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_5_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_6(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_106_var, uint8_t* global_workspace_107_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_6_let = (&(global_const_workspace_106_var[173157888]));
  void* fused_subtract_add_rsqrt_multiply_constant_6_let = (&(global_const_workspace_106_var[173234688]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_6_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_6_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_7(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_116_var, uint8_t* global_workspace_117_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_7_let = (&(global_const_workspace_116_var[173154816]));
  void* fused_subtract_add_rsqrt_multiply_constant_7_let = (&(global_const_workspace_116_var[173231616]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_7_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_7_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_8(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_126_var, uint8_t* global_workspace_127_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_8_let = (&(global_const_workspace_126_var[173151744]));
  void* fused_subtract_add_rsqrt_multiply_constant_8_let = (&(global_const_workspace_126_var[173228544]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_8_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_8_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_9(float* p0, float* p1, float* p2, float* T_add, uint8_t* global_const_workspace_136_var, uint8_t* global_workspace_137_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_9_let = (&(global_const_workspace_136_var[173148672]));
  void* fused_subtract_add_rsqrt_multiply_constant_9_let = (&(global_const_workspace_136_var[173225472]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    for (int32_t ax2_outer = 0; ax2_outer < 48; ++ax2_outer) {
      for (int32_t ax2_inner = 0; ax2_inner < 16; ++ax2_inner) {
        int32_t cse_var_3 = (ax2_outer * 16);
        int32_t cse_var_2 = (cse_var_3 + ax2_inner);
        int32_t cse_var_1 = (((ax0_ax1_fused * 768) + cse_var_3) + ax2_inner);
        T_add[cse_var_1] = ((((p0[cse_var_1] - p1[ax0_ax1_fused]) * (1.000000e+00f / sqrtf((p2[ax0_ax1_fused] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_9_let)[cse_var_2]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_9_let)[cse_var_2]);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_take(float* p0, float* p1, float* p2, float* T_take, uint8_t* global_const_workspace_286_var, uint8_t* global_workspace_287_var) {
  void* fused_subtract_add_rsqrt_multiply_multiply_constant_24_let = (&(global_const_workspace_286_var[173170176]));
  void* fused_subtract_add_rsqrt_multiply_constant_24_let = (&(global_const_workspace_286_var[173246976]));
  for (int32_t ax1_outer = 0; ax1_outer < 48; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_take[cse_var_1] = ((((p0[cse_var_1] - p1[0]) * (1.000000e+00f / sqrtf((p2[0] + 1.000000e-06f)))) * ((float*)fused_subtract_add_rsqrt_multiply_constant_24_let)[cse_var_1]) + ((float*)fused_subtract_add_rsqrt_multiply_multiply_constant_24_let)[cse_var_1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_variance(float* p0, float* p1, float* T_divide, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* T_multiply_red_let = (&(global_workspace_11_var[6051840]));
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 197; ++ax0_ax1_fused) {
    ((float*)T_multiply_red_let)[ax0_ax1_fused] = 0.000000e+00f;
    for (int32_t k2 = 0; k2 < 768; ++k2) {
      int32_t cse_var_1 = ((ax0_ax1_fused * 768) + k2);
      ((float*)T_multiply_red_let)[ax0_ax1_fused] = (((float*)T_multiply_red_let)[ax0_ax1_fused] + ((p0[cse_var_1] - p1[ax0_ax1_fused]) * (p0[cse_var_1] - p1[ax0_ax1_fused])));
    }
  }
  for (int32_t ax0_ax1_fused_1 = 0; ax0_ax1_fused_1 < 197; ++ax0_ax1_fused_1) {
    T_divide[ax0_ax1_fused_1] = (((float*)T_multiply_red_let)[ax0_ax1_fused_1] * 1.302083e-03f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(float* input0_buffer_var, float* output_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_273_let = (&(global_workspace_1_var[4330848]));
  void* sid_272_let = (&(global_workspace_1_var[6146400]));
  void* sid_271_let = (&(global_workspace_1_var[6751584]));
  void* sid_259_let = (&(global_workspace_1_var[2420736]));
  void* sid_256_let = (&(global_workspace_1_var[6052920]));
  void* sid_254_let = (&(global_workspace_1_var[0]));
  void* sid_251_let = (&(global_workspace_1_var[6358560]));
  void* sid_250_let = (&(global_workspace_1_var[6358568]));
  void* sid_248_let = (&(global_workspace_1_var[6358576]));
  void* sid_242_let = (&(global_workspace_1_var[6051840]));
  void* sid_241_let = (&(global_workspace_1_var[6355488]));
  void* sid_237_let = (&(global_workspace_1_var[4330848]));
  void* sid_235_let = (&(global_workspace_1_var[5541216]));
  void* sid_24_let = (&(global_workspace_1_var[6355512]));
  void* sid_232_let = (&(global_workspace_1_var[5541216]));
  void* sid_231_let = (&(global_workspace_1_var[4936032]));
  void* sid_452_let = (&(global_workspace_1_var[4330848]));
  void* sid_230_let = (&(global_workspace_1_var[4330848]));
  void* sid_229_let = (&(global_workspace_1_var[6146400]));
  void* sid_228_let = (&(global_workspace_1_var[6751584]));
  void* sid_284_let = (&(global_workspace_1_var[6355488]));
  void* sid_224_let = (&(global_workspace_1_var[5239688]));
  void* sid_283_let = (&(global_workspace_1_var[6355496]));
  void* sid_223_let = (&(global_workspace_1_var[5239704]));
  void* sid_341_let = (&(global_workspace_1_var[6052912]));
  void* sid_222_let = (&(global_workspace_1_var[5239696]));
  void* sid_221_let = (&(global_workspace_1_var[4330848]));
  void* sid_220_let = (&(global_workspace_1_var[6053424]));
  void* sid_209_let = (&(global_workspace_1_var[6051840]));
  void* sid_208_let = (&(global_workspace_1_var[6358560]));
  void* sid_207_let = (&(global_workspace_1_var[6358568]));
  void* sid_202_let = (&(global_workspace_1_var[6052632]));
  void* sid_200_let = (&(global_workspace_1_var[5446656]));
  void* sid_199_let = (&(global_workspace_1_var[6051840]));
  void* sid_194_let = (&(global_workspace_1_var[4330848]));
  void* sid_478_let = (&(global_workspace_1_var[6053424]));
  void* sid_193_let = (&(global_workspace_1_var[4936032]));
  void* sid_6_let = (&(global_workspace_1_var[4330848]));
  void* sid_212_let = (&(global_workspace_1_var[6052912]));
  void* sid_183_let = (&(global_workspace_1_var[4936032]));
  void* sid_180_let = (&(global_workspace_1_var[5239704]));
  void* sid_179_let = (&(global_workspace_1_var[5239696]));
  void* sid_177_let = (&(global_workspace_1_var[6053424]));
  void* sid_170_let = (&(global_workspace_1_var[6052920]));
  void* sid_168_let = (&(global_workspace_1_var[0]));
  void* sid_255_let = (&(global_workspace_1_var[6052912]));
  void* sid_167_let = (&(global_workspace_1_var[2420736]));
  void* sid_163_let = (&(global_workspace_1_var[6358584]));
  void* sid_244_let = (&(global_workspace_1_var[4841472]));
  void* sid_210_let = (&(global_workspace_1_var[2420736]));
  void* sid_270_let = (&(global_workspace_1_var[0]));
  void* sid_217_let = (&(global_workspace_1_var[5446656]));
  void* sid_158_let = (&(global_workspace_1_var[4841472]));
  void* sid_156_let = (&(global_workspace_1_var[6051840]));
  void* sid_249_let = (&(global_workspace_1_var[6358584]));
  void* sid_152_let = (&(global_workspace_1_var[6355504]));
  void* sid_437_let = (&(global_workspace_1_var[5239696]));
  void* sid_435_let = (&(global_workspace_1_var[6053424]));
  void* sid_150_let = (&(global_workspace_1_var[4936032]));
  void* sid_141_let = (&(global_workspace_1_var[0]));
  void* sid_140_let = (&(global_workspace_1_var[4936032]));
  void* sid_139_let = (&(global_workspace_1_var[5239680]));
  void* sid_173_let = (&(global_workspace_1_var[2420736]));
  void* sid_137_let = (&(global_workspace_1_var[5239704]));
  void* sid_181_let = (&(global_workspace_1_var[5239688]));
  void* sid_238_let = (&(global_workspace_1_var[6355504]));
  void* sid_135_let = (&(global_workspace_1_var[4330848]));
  void* sid_189_let = (&(global_workspace_1_var[5541216]));
  void* sid_233_let = (&(global_workspace_1_var[1862832]));
  void* sid_133_let = (&(global_workspace_1_var[6052632]));
  void* sid_164_let = (&(global_workspace_1_var[6358568]));
  void* sid_184_let = (&(global_workspace_1_var[0]));
  void* sid_62_let = (&(global_workspace_1_var[0]));
  void* sid_522_let = (&(global_workspace_1_var[6051840]));
  void* sid_79_let = (&(global_workspace_1_var[6358560]));
  void* sid_203_let = (&(global_workspace_1_var[6053424]));
  void* sid_367_let = (&(global_workspace_1_var[6355504]));
  void* sid_47_let = (&(global_workspace_1_var[6052632]));
  void* sid_196_let = (&(global_workspace_1_var[6355512]));
  void* sid_23_let = (&(global_workspace_1_var[6355504]));
  void* sid_157_let = (&(global_workspace_1_var[5446656]));
  void* sid_481_let = (&(global_workspace_1_var[5239704]));
  void* sid_46_let = (&(global_workspace_1_var[3725664]));
  void* sid_134_let = (&(global_workspace_1_var[6053424]));
  void* sid_44_let = (&(global_workspace_1_var[2420736]));
  void* sid_151_let = (&(global_workspace_1_var[4330848]));
  void* sid_74_let = (&(global_workspace_1_var[6053424]));
  void* sid_245_let = (&(global_workspace_1_var[6052632]));
  void* sid_192_let = (&(global_workspace_1_var[5541216]));
  void* sid_219_let = (&(global_workspace_1_var[6052632]));
  void* sid_267_let = (&(global_workspace_1_var[5239688]));
  void* sid_122_let = (&(global_workspace_1_var[6358560]));
  void* sid_265_let = (&(global_workspace_1_var[5239696]));
  void* sid_206_let = (&(global_workspace_1_var[6358584]));
  void* sid_42_let = (&(global_workspace_1_var[6052904]));
  void* sid_226_let = (&(global_workspace_1_var[4936032]));
  void* sid_322_let = (&(global_workspace_1_var[4936032]));
  void* sid_54_let = (&(global_workspace_1_var[4936032]));
  void* sid_298_let = (&(global_workspace_1_var[6052912]));
  void* sid_50_let = (&(global_workspace_1_var[5239696]));
  void* sid_129_let = (&(global_workspace_1_var[6052896]));
  void* sid_178_let = (&(global_workspace_1_var[4330848]));
  void* sid_162_let = (&(global_workspace_1_var[6358576]));
  void* sid_59_let = (&(global_workspace_1_var[4936032]));
  void* sid_63_let = (&(global_workspace_1_var[5541216]));
  void* sid_45_let = (&(global_workspace_1_var[5446656]));
  void* sid_260_let = (&(global_workspace_1_var[5446656]));
  void* sid_175_let = (&(global_workspace_1_var[3725664]));
  void* sid_214_let = (&(global_workspace_1_var[6052904]));
  void* sid_110_let = (&(global_workspace_1_var[6355512]));
  void* sid_136_let = (&(global_workspace_1_var[5239696]));
  void* sid_32_let = (&(global_workspace_1_var[5446656]));
  void* sid_119_let = (&(global_workspace_1_var[6358576]));
  void* sid_239_let = (&(global_workspace_1_var[6355512]));
  void* sid_64_let = (&(global_workspace_1_var[4936032]));
  void* sid_195_let = (&(global_workspace_1_var[6355504]));
  void* sid_205_let = (&(global_workspace_1_var[6358576]));
  void* sid_431_let = (&(global_workspace_1_var[2420736]));
  void* sid_38_let = (&(global_workspace_1_var[2420736]));
  void* sid_72_let = (&(global_workspace_1_var[4841472]));
  void* sid_48_let = (&(global_workspace_1_var[6053424]));
  void* sid_240_let = (&(global_workspace_1_var[6355496]));
  void* sid_211_let = (&(global_workspace_1_var[0]));
  void* sid_277_let = (&(global_workspace_1_var[0]));
  void* sid_166_let = (&(global_workspace_1_var[6051840]));
  void* sid_87_let = (&(global_workspace_1_var[2420736]));
  void* sid_332_let = (&(global_workspace_1_var[6053424]));
  void* sid_11_let = (&(global_workspace_1_var[4936032]));
  void* sid_174_let = (&(global_workspace_1_var[5446656]));
  void* sid_80_let = (&(global_workspace_1_var[6051840]));
  void* sid_83_let = (&(global_workspace_1_var[6052912]));
  void* sid_60_let = (&(global_workspace_1_var[5541216]));
  void* sid_215_let = (&(global_workspace_1_var[6052896]));
  void* sid_263_let = (&(global_workspace_1_var[6053424]));
  void* sid_4_let = (&(global_workspace_1_var[6052632]));
  void* sid_392_let = (&(global_workspace_1_var[6053424]));
  void* sid_204_let = (&(global_workspace_1_var[5446656]));
  void* sid_153_let = (&(global_workspace_1_var[6355512]));
  void* sid_10_let = (&(global_workspace_1_var[5239680]));
  void* sid_216_let = (&(global_workspace_1_var[2420736]));
  void* sid_67_let = (&(global_workspace_1_var[6355512]));
  void* sid_65_let = (&(global_workspace_1_var[4330848]));
  void* sid_172_let = (&(global_workspace_1_var[6052896]));
  void* sid_70_let = (&(global_workspace_1_var[6051840]));
  void* sid_29_let = (&(global_workspace_1_var[4841472]));
  void* sid_160_let = (&(global_workspace_1_var[6053424]));
  void* sid_225_let = (&(global_workspace_1_var[5239680]));
  void* sid_37_let = (&(global_workspace_1_var[6051840]));
  void* sid_40_let = (&(global_workspace_1_var[6052912]));
  void* sid_2_let = (&(global_workspace_1_var[4936032]));
  void* sid_405_let = (&(global_workspace_1_var[1862832]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_41_let = (&(global_workspace_1_var[6052920]));
  void* sid_213_let = (&(global_workspace_1_var[6052920]));
  void* sid_93_let = (&(global_workspace_1_var[5239696]));
  void* sid_27_let = (&(global_workspace_1_var[6051840]));
  void* sid_8_let = (&(global_workspace_1_var[5239704]));
  void* sid_114_let = (&(global_workspace_1_var[5446656]));
  void* sid_55_let = (&(global_workspace_1_var[0]));
  void* sid_234_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[4936032]));
  void* sid_148_let = (&(global_workspace_1_var[0]));
  void* sid_176_let = (&(global_workspace_1_var[6052632]));
  void* sid_406_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_275_let = (&(global_workspace_1_var[5541216]));
  void* sid_52_let = (&(global_workspace_1_var[5239688]));
  void* sid_3_let = (&(global_workspace_1_var[3725664]));
  void* sid_53_let = (&(global_workspace_1_var[5239680]));
  void* sid_68_let = (&(global_workspace_1_var[6355496]));
  void* sid_198_let = (&(global_workspace_1_var[6355488]));
  void* sid_246_let = (&(global_workspace_1_var[6053424]));
  void* sid_475_let = (&(global_workspace_1_var[5446656]));
  void* sid_236_let = (&(global_workspace_1_var[4936032]));
  void* sid_5_let = (&(global_workspace_1_var[6053424]));
  void* sid_394_let = (&(global_workspace_1_var[5239696]));
  void* sid_227_let = (&(global_workspace_1_var[0]));
  void* sid_107_let = (&(global_workspace_1_var[4936032]));
  void* sid_22_let = (&(global_workspace_1_var[4330848]));
  void* sid_1_let = (&(global_workspace_1_var[5538144]));
  void* sid_484_let = (&(global_workspace_1_var[4936032]));
  void* sid_17_let = (&(global_workspace_1_var[5541216]));
  void* sid_266_let = (&(global_workspace_1_var[5239704]));
  void* sid_94_let = (&(global_workspace_1_var[5239704]));
  void* sid_102_let = (&(global_workspace_1_var[4936032]));
  void* sid_269_let = (&(global_workspace_1_var[4936032]));
  void* sid_145_let = (&(global_workspace_1_var[4936032]));
  void* sid_33_let = (&(global_workspace_1_var[6358576]));
  void* sid_18_let = (&(global_workspace_1_var[1862832]));
  void* sid_7_let = (&(global_workspace_1_var[5239696]));
  void* sid_324_let = (&(global_workspace_1_var[6355504]));
  void* sid_58_let = (&(global_workspace_1_var[4330848]));
  void* sid_57_let = (&(global_workspace_1_var[6146400]));
  void* sid_56_let = (&(global_workspace_1_var[6751584]));
  void* sid_426_let = (&(global_workspace_1_var[0]));
  void* sid_191_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[5541216]));
  void* sid_301_let = (&(global_workspace_1_var[6052896]));
  void* sid_15_let = (&(global_workspace_1_var[4330848]));
  void* sid_14_let = (&(global_workspace_1_var[6146400]));
  void* sid_13_let = (&(global_workspace_1_var[6751584]));
  void* sid_84_let = (&(global_workspace_1_var[6052920]));
  void* sid_149_let = (&(global_workspace_1_var[5541216]));
  void* sid_252_let = (&(global_workspace_1_var[6051840]));
  void* sid_34_let = (&(global_workspace_1_var[6358584]));
  void* sid_197_let = (&(global_workspace_1_var[6355496]));
  void* sid_36_let = (&(global_workspace_1_var[6358560]));
  void* sid_323_let = (&(global_workspace_1_var[4330848]));
  void* sid_258_let = (&(global_workspace_1_var[6052896]));
  void* sid_146_let = (&(global_workspace_1_var[5541216]));
  void* sid_147_let = (&(global_workspace_1_var[1862832]));
  void* sid_35_let = (&(global_workspace_1_var[6358568]));
  void* sid_9_let = (&(global_workspace_1_var[5239688]));
  void* sid_104_let = (&(global_workspace_1_var[1862832]));
  void* sid_201_let = (&(global_workspace_1_var[4841472]));
  void* sid_66_let = (&(global_workspace_1_var[6355504]));
  void* sid_61_let = (&(global_workspace_1_var[1862832]));
  void* sid_49_let = (&(global_workspace_1_var[4330848]));
  void* sid_132_let = (&(global_workspace_1_var[3725664]));
  void* sid_16_let = (&(global_workspace_1_var[4936032]));
  void* sid_89_let = (&(global_workspace_1_var[3725664]));
  void* sid_69_let = (&(global_workspace_1_var[6355488]));
  void* sid_116_let = (&(global_workspace_1_var[6052632]));
  void* sid_441_let = (&(global_workspace_1_var[4936032]));
  void* sid_155_let = (&(global_workspace_1_var[6355488]));
  void* sid_71_let = (&(global_workspace_1_var[5446656]));
  void* sid_285_let = (&(global_workspace_1_var[6051840]));
  void* sid_243_let = (&(global_workspace_1_var[5446656]));
  void* sid_73_let = (&(global_workspace_1_var[6052632]));
  void* sid_261_let = (&(global_workspace_1_var[3725664]));
  void* sid_75_let = (&(global_workspace_1_var[5446656]));
  void* sid_171_let = (&(global_workspace_1_var[6052904]));
  void* sid_187_let = (&(global_workspace_1_var[4330848]));
  void* sid_186_let = (&(global_workspace_1_var[6146400]));
  void* sid_185_let = (&(global_workspace_1_var[6751584]));
  void* sid_165_let = (&(global_workspace_1_var[6358560]));
  void* sid_77_let = (&(global_workspace_1_var[6358584]));
  void* sid_81_let = (&(global_workspace_1_var[2420736]));
  void* sid_82_let = (&(global_workspace_1_var[0]));
  void* sid_85_let = (&(global_workspace_1_var[6052904]));
  void* sid_457_let = (&(global_workspace_1_var[6051840]));
  void* sid_448_let = (&(global_workspace_1_var[1862832]));
  void* sid_154_let = (&(global_workspace_1_var[6355496]));
  void* sid_161_let = (&(global_workspace_1_var[5446656]));
  void* sid_91_let = (&(global_workspace_1_var[6053424]));
  void* sid_92_let = (&(global_workspace_1_var[4330848]));
  void* sid_190_let = (&(global_workspace_1_var[1862832]));
  void* sid_138_let = (&(global_workspace_1_var[5239688]));
  void* sid_78_let = (&(global_workspace_1_var[6358568]));
  void* sid_96_let = (&(global_workspace_1_var[5239680]));
  void* sid_352_let = (&(global_workspace_1_var[5239704]));
  void* sid_274_let = (&(global_workspace_1_var[4936032]));
  void* sid_90_let = (&(global_workspace_1_var[6052632]));
  void* sid_97_let = (&(global_workspace_1_var[4936032]));
  void* sid_182_let = (&(global_workspace_1_var[5239680]));
  void* sid_98_let = (&(global_workspace_1_var[0]));
  void* sid_268_let = (&(global_workspace_1_var[5239680]));
  void* sid_101_let = (&(global_workspace_1_var[4330848]));
  void* sid_100_let = (&(global_workspace_1_var[6146400]));
  void* sid_99_let = (&(global_workspace_1_var[6751584]));
  void* sid_276_let = (&(global_workspace_1_var[1862832]));
  void* sid_264_let = (&(global_workspace_1_var[4330848]));
  void* sid_103_let = (&(global_workspace_1_var[5541216]));
  void* sid_105_let = (&(global_workspace_1_var[0]));
  void* sid_118_let = (&(global_workspace_1_var[5446656]));
  void* sid_169_let = (&(global_workspace_1_var[6052912]));
  void* sid_420_let = (&(global_workspace_1_var[6358576]));
  void* sid_106_let = (&(global_workspace_1_var[5541216]));
  void* sid_188_let = (&(global_workspace_1_var[4936032]));
  void* sid_313_let = (&(global_workspace_1_var[0]));
  void* sid_144_let = (&(global_workspace_1_var[4330848]));
  void* sid_143_let = (&(global_workspace_1_var[6146400]));
  void* sid_142_let = (&(global_workspace_1_var[6751584]));
  void* sid_108_let = (&(global_workspace_1_var[4330848]));
  void* sid_109_let = (&(global_workspace_1_var[6355504]));
  void* sid_247_let = (&(global_workspace_1_var[5446656]));
  void* sid_159_let = (&(global_workspace_1_var[6052632]));
  void* sid_39_let = (&(global_workspace_1_var[0]));
  void* sid_111_let = (&(global_workspace_1_var[6355496]));
  void* sid_327_let = (&(global_workspace_1_var[6355488]));
  void* sid_112_let = (&(global_workspace_1_var[6355488]));
  void* sid_257_let = (&(global_workspace_1_var[6052904]));
  void* sid_28_let = (&(global_workspace_1_var[5446656]));
  void* sid_51_let = (&(global_workspace_1_var[5239704]));
  void* sid_115_let = (&(global_workspace_1_var[4841472]));
  void* sid_30_let = (&(global_workspace_1_var[6052632]));
  void* sid_117_let = (&(global_workspace_1_var[6053424]));
  void* sid_262_let = (&(global_workspace_1_var[6052632]));
  void* sid_31_let = (&(global_workspace_1_var[6053424]));
  void* sid_76_let = (&(global_workspace_1_var[6358576]));
  void* sid_86_let = (&(global_workspace_1_var[6052896]));
  void* sid_120_let = (&(global_workspace_1_var[6358584]));
  void* sid_447_let = (&(global_workspace_1_var[5541216]));
  void* sid_25_let = (&(global_workspace_1_var[6355496]));
  void* sid_88_let = (&(global_workspace_1_var[5446656]));
  void* sid_121_let = (&(global_workspace_1_var[6358568]));
  void* sid_26_let = (&(global_workspace_1_var[6355488]));
  void* sid_43_let = (&(global_workspace_1_var[6052896]));
  void* sid_123_let = (&(global_workspace_1_var[6051840]));
  void* sid_124_let = (&(global_workspace_1_var[2420736]));
  void* sid_493_let = (&(global_workspace_1_var[5541216]));
  void* sid_125_let = (&(global_workspace_1_var[0]));
  void* sid_253_let = (&(global_workspace_1_var[2420736]));
  void* sid_126_let = (&(global_workspace_1_var[6052912]));
  void* sid_127_let = (&(global_workspace_1_var[6052920]));
  void* sid_218_let = (&(global_workspace_1_var[3725664]));
  void* sid_95_let = (&(global_workspace_1_var[5239688]));
  void* sid_130_let = (&(global_workspace_1_var[2420736]));
  void* sid_113_let = (&(global_workspace_1_var[6051840]));
  void* sid_128_let = (&(global_workspace_1_var[6052904]));
  void* sid_131_let = (&(global_workspace_1_var[5446656]));
  void* sid_278_let = (&(global_workspace_1_var[5541216]));
  void* sid_279_let = (&(global_workspace_1_var[4936032]));
  void* sid_280_let = (&(global_workspace_1_var[4330848]));
  void* sid_281_let = (&(global_workspace_1_var[6355504]));
  void* sid_429_let = (&(global_workspace_1_var[6052904]));
  void* sid_282_let = (&(global_workspace_1_var[6355512]));
  void* sid_286_let = (&(global_workspace_1_var[5446656]));
  void* sid_287_let = (&(global_workspace_1_var[4841472]));
  void* sid_288_let = (&(global_workspace_1_var[6052632]));
  void* sid_289_let = (&(global_workspace_1_var[6053424]));
  void* sid_290_let = (&(global_workspace_1_var[5446656]));
  void* sid_291_let = (&(global_workspace_1_var[6358576]));
  void* sid_292_let = (&(global_workspace_1_var[6358584]));
  void* sid_293_let = (&(global_workspace_1_var[6358568]));
  void* sid_316_let = (&(global_workspace_1_var[4330848]));
  void* sid_315_let = (&(global_workspace_1_var[6146400]));
  void* sid_314_let = (&(global_workspace_1_var[6751584]));
  void* sid_294_let = (&(global_workspace_1_var[6358560]));
  void* sid_295_let = (&(global_workspace_1_var[6051840]));
  void* sid_296_let = (&(global_workspace_1_var[2420736]));
  void* sid_297_let = (&(global_workspace_1_var[0]));
  void* sid_377_let = (&(global_workspace_1_var[6358576]));
  void* sid_299_let = (&(global_workspace_1_var[6052920]));
  void* sid_300_let = (&(global_workspace_1_var[6052904]));
  void* sid_302_let = (&(global_workspace_1_var[2420736]));
  void* sid_303_let = (&(global_workspace_1_var[5446656]));
  void* sid_383_let = (&(global_workspace_1_var[0]));
  void* sid_304_let = (&(global_workspace_1_var[3725664]));
  void* sid_305_let = (&(global_workspace_1_var[6052632]));
  void* sid_306_let = (&(global_workspace_1_var[6053424]));
  void* sid_307_let = (&(global_workspace_1_var[4330848]));
  void* sid_308_let = (&(global_workspace_1_var[5239696]));
  void* sid_309_let = (&(global_workspace_1_var[5239704]));
  void* sid_310_let = (&(global_workspace_1_var[5239688]));
  void* sid_390_let = (&(global_workspace_1_var[3725664]));
  void* sid_311_let = (&(global_workspace_1_var[5239680]));
  void* sid_312_let = (&(global_workspace_1_var[4936032]));
  void* sid_317_let = (&(global_workspace_1_var[4936032]));
  void* sid_318_let = (&(global_workspace_1_var[5541216]));
  void* sid_319_let = (&(global_workspace_1_var[1862832]));
  void* sid_320_let = (&(global_workspace_1_var[0]));
  void* sid_321_let = (&(global_workspace_1_var[5541216]));
  void* sid_411_let = (&(global_workspace_1_var[6355512]));
  void* sid_325_let = (&(global_workspace_1_var[6355512]));
  void* sid_342_let = (&(global_workspace_1_var[6052920]));
  void* sid_326_let = (&(global_workspace_1_var[6355496]));
  void* sid_328_let = (&(global_workspace_1_var[6051840]));
  void* sid_329_let = (&(global_workspace_1_var[5446656]));
  void* sid_330_let = (&(global_workspace_1_var[4841472]));
  void* sid_331_let = (&(global_workspace_1_var[6052632]));
  void* sid_333_let = (&(global_workspace_1_var[5446656]));
  void* sid_334_let = (&(global_workspace_1_var[6358576]));
  void* sid_335_let = (&(global_workspace_1_var[6358584]));
  void* sid_336_let = (&(global_workspace_1_var[6358568]));
  void* sid_337_let = (&(global_workspace_1_var[6358560]));
  void* sid_389_let = (&(global_workspace_1_var[5446656]));
  void* sid_446_let = (&(global_workspace_1_var[4936032]));
  void* sid_338_let = (&(global_workspace_1_var[6051840]));
  void* sid_339_let = (&(global_workspace_1_var[2420736]));
  void* sid_340_let = (&(global_workspace_1_var[0]));
  void* sid_467_let = (&(global_workspace_1_var[6051840]));
  void* sid_343_let = (&(global_workspace_1_var[6052904]));
  void* sid_344_let = (&(global_workspace_1_var[6052896]));
  void* sid_345_let = (&(global_workspace_1_var[2420736]));
  void* sid_346_let = (&(global_workspace_1_var[5446656]));
  void* sid_347_let = (&(global_workspace_1_var[3725664]));
  void* sid_363_let = (&(global_workspace_1_var[0]));
  void* sid_348_let = (&(global_workspace_1_var[6052632]));
  void* sid_349_let = (&(global_workspace_1_var[6053424]));
  void* sid_350_let = (&(global_workspace_1_var[4330848]));
  void* sid_351_let = (&(global_workspace_1_var[5239696]));
  void* sid_353_let = (&(global_workspace_1_var[5239688]));
  void* sid_354_let = (&(global_workspace_1_var[5239680]));
  void* sid_355_let = (&(global_workspace_1_var[4936032]));
  void* sid_356_let = (&(global_workspace_1_var[0]));
  void* sid_359_let = (&(global_workspace_1_var[4330848]));
  void* sid_358_let = (&(global_workspace_1_var[6146400]));
  void* sid_357_let = (&(global_workspace_1_var[6751584]));
  void* sid_360_let = (&(global_workspace_1_var[4936032]));
  void* sid_500_let = (&(global_workspace_1_var[6051840]));
  void* sid_361_let = (&(global_workspace_1_var[5541216]));
  void* sid_362_let = (&(global_workspace_1_var[1862832]));
  void* sid_410_let = (&(global_workspace_1_var[6355504]));
  void* sid_364_let = (&(global_workspace_1_var[5541216]));
  void* sid_365_let = (&(global_workspace_1_var[4936032]));
  void* sid_366_let = (&(global_workspace_1_var[4330848]));
  void* sid_368_let = (&(global_workspace_1_var[6355512]));
  void* sid_369_let = (&(global_workspace_1_var[6355496]));
  void* sid_370_let = (&(global_workspace_1_var[6355488]));
  void* sid_371_let = (&(global_workspace_1_var[6051840]));
  void* sid_372_let = (&(global_workspace_1_var[5446656]));
  void* sid_373_let = (&(global_workspace_1_var[4841472]));
  void* sid_374_let = (&(global_workspace_1_var[6052632]));
  void* sid_375_let = (&(global_workspace_1_var[6053424]));
  void* sid_376_let = (&(global_workspace_1_var[5446656]));
  void* sid_378_let = (&(global_workspace_1_var[6358584]));
  void* sid_379_let = (&(global_workspace_1_var[6358568]));
  void* sid_380_let = (&(global_workspace_1_var[6358560]));
  void* sid_381_let = (&(global_workspace_1_var[6051840]));
  void* sid_382_let = (&(global_workspace_1_var[2420736]));
  void* sid_384_let = (&(global_workspace_1_var[6052912]));
  void* sid_385_let = (&(global_workspace_1_var[6052920]));
  void* sid_386_let = (&(global_workspace_1_var[6052904]));
  void* sid_387_let = (&(global_workspace_1_var[6052896]));
  void* sid_388_let = (&(global_workspace_1_var[2420736]));
  void* sid_391_let = (&(global_workspace_1_var[6052632]));
  void* sid_399_let = (&(global_workspace_1_var[0]));
  void* sid_393_let = (&(global_workspace_1_var[4330848]));
  void* sid_395_let = (&(global_workspace_1_var[5239704]));
  void* sid_396_let = (&(global_workspace_1_var[5239688]));
  void* sid_397_let = (&(global_workspace_1_var[5239680]));
  void* sid_398_let = (&(global_workspace_1_var[4936032]));
  void* sid_402_let = (&(global_workspace_1_var[4330848]));
  void* sid_401_let = (&(global_workspace_1_var[6146400]));
  void* sid_400_let = (&(global_workspace_1_var[6751584]));
  void* sid_489_let = (&(global_workspace_1_var[4936032]));
  void* sid_403_let = (&(global_workspace_1_var[4936032]));
  void* sid_404_let = (&(global_workspace_1_var[5541216]));
  void* sid_407_let = (&(global_workspace_1_var[5541216]));
  void* sid_408_let = (&(global_workspace_1_var[4936032]));
  void* sid_409_let = (&(global_workspace_1_var[4330848]));
  void* sid_412_let = (&(global_workspace_1_var[6355496]));
  void* sid_413_let = (&(global_workspace_1_var[6355488]));
  void* sid_414_let = (&(global_workspace_1_var[6051840]));
  void* sid_496_let = (&(global_workspace_1_var[6355504]));
  void* sid_415_let = (&(global_workspace_1_var[5446656]));
  void* sid_416_let = (&(global_workspace_1_var[4841472]));
  void* sid_417_let = (&(global_workspace_1_var[6052632]));
  void* sid_418_let = (&(global_workspace_1_var[6053424]));
  void* sid_419_let = (&(global_workspace_1_var[5446656]));
  void* sid_421_let = (&(global_workspace_1_var[6358584]));
  void* sid_422_let = (&(global_workspace_1_var[6358568]));
  void* sid_423_let = (&(global_workspace_1_var[6358560]));
  void* sid_424_let = (&(global_workspace_1_var[6051840]));
  void* sid_425_let = (&(global_workspace_1_var[2420736]));
  void* sid_427_let = (&(global_workspace_1_var[6052912]));
  void* sid_428_let = (&(global_workspace_1_var[6052920]));
  void* sid_430_let = (&(global_workspace_1_var[6052896]));
  void* sid_432_let = (&(global_workspace_1_var[5446656]));
  void* sid_433_let = (&(global_workspace_1_var[3725664]));
  void* sid_434_let = (&(global_workspace_1_var[6052632]));
  void* sid_436_let = (&(global_workspace_1_var[4330848]));
  void* sid_511_let = (&(global_workspace_1_var[2420736]));
  void* sid_438_let = (&(global_workspace_1_var[5239704]));
  void* sid_439_let = (&(global_workspace_1_var[5239688]));
  void* sid_440_let = (&(global_workspace_1_var[5239680]));
  void* sid_442_let = (&(global_workspace_1_var[0]));
  void* sid_445_let = (&(global_workspace_1_var[4330848]));
  void* sid_444_let = (&(global_workspace_1_var[6146400]));
  void* sid_443_let = (&(global_workspace_1_var[6751584]));
  void* sid_449_let = (&(global_workspace_1_var[0]));
  void* sid_450_let = (&(global_workspace_1_var[5541216]));
  void* sid_451_let = (&(global_workspace_1_var[4936032]));
  void* sid_453_let = (&(global_workspace_1_var[6355504]));
  void* sid_454_let = (&(global_workspace_1_var[6355512]));
  void* sid_455_let = (&(global_workspace_1_var[6355496]));
  void* sid_456_let = (&(global_workspace_1_var[6355488]));
  void* sid_458_let = (&(global_workspace_1_var[5446656]));
  void* sid_459_let = (&(global_workspace_1_var[4841472]));
  void* sid_460_let = (&(global_workspace_1_var[6052632]));
  void* sid_462_let = (&(global_workspace_1_var[5446656]));
  void* sid_461_let = (&(global_workspace_1_var[6053424]));
  void* sid_463_let = (&(global_workspace_1_var[6358576]));
  void* sid_488_let = (&(global_workspace_1_var[4330848]));
  void* sid_487_let = (&(global_workspace_1_var[6146400]));
  void* sid_486_let = (&(global_workspace_1_var[6751584]));
  void* sid_464_let = (&(global_workspace_1_var[6358584]));
  void* sid_465_let = (&(global_workspace_1_var[6358568]));
  void* sid_466_let = (&(global_workspace_1_var[6358560]));
  void* sid_468_let = (&(global_workspace_1_var[2420736]));
  void* sid_492_let = (&(global_workspace_1_var[0]));
  void* sid_469_let = (&(global_workspace_1_var[0]));
  void* sid_470_let = (&(global_workspace_1_var[6052912]));
  void* sid_471_let = (&(global_workspace_1_var[6052920]));
  void* sid_472_let = (&(global_workspace_1_var[6052904]));
  void* sid_473_let = (&(global_workspace_1_var[6052896]));
  void* sid_474_let = (&(global_workspace_1_var[2420736]));
  void* sid_476_let = (&(global_workspace_1_var[3725664]));
  void* sid_515_let = (&(global_workspace_1_var[6658088]));
  void* sid_477_let = (&(global_workspace_1_var[6052632]));
  void* sid_479_let = (&(global_workspace_1_var[4330848]));
  void* sid_480_let = (&(global_workspace_1_var[5239696]));
  void* sid_482_let = (&(global_workspace_1_var[5239688]));
  void* sid_483_let = (&(global_workspace_1_var[5239680]));
  void* sid_485_let = (&(global_workspace_1_var[0]));
  void* sid_490_let = (&(global_workspace_1_var[5541216]));
  void* sid_491_let = (&(global_workspace_1_var[1862832]));
  void* sid_494_let = (&(global_workspace_1_var[4936032]));
  void* sid_495_let = (&(global_workspace_1_var[4330848]));
  void* sid_497_let = (&(global_workspace_1_var[6355512]));
  void* sid_498_let = (&(global_workspace_1_var[6355496]));
  void* sid_499_let = (&(global_workspace_1_var[6355488]));
  void* sid_501_let = (&(global_workspace_1_var[5446656]));
  void* sid_502_let = (&(global_workspace_1_var[4841472]));
  void* sid_503_let = (&(global_workspace_1_var[6052632]));
  void* sid_504_let = (&(global_workspace_1_var[6053424]));
  void* sid_505_let = (&(global_workspace_1_var[5446656]));
  void* sid_506_let = (&(global_workspace_1_var[6358576]));
  void* sid_507_let = (&(global_workspace_1_var[6358584]));
  void* sid_508_let = (&(global_workspace_1_var[6358568]));
  void* sid_509_let = (&(global_workspace_1_var[6358560]));
  void* sid_510_let = (&(global_workspace_1_var[6051840]));
  void* sid_512_let = (&(global_workspace_1_var[0]));
  void* sid_513_let = (&(global_workspace_1_var[6658096]));
  void* sid_514_let = (&(global_workspace_1_var[6658104]));
  void* sid_516_let = (&(global_workspace_1_var[6658080]));
  void* sid_517_let = (&(global_workspace_1_var[2420736]));
  void* sid_518_let = (&(global_workspace_1_var[6051840]));
  void* sid_519_let = (&(global_workspace_1_var[5446656]));
  void* sid_520_let = (&(global_workspace_1_var[6054912]));
  void* sid_521_let = (&(global_workspace_1_var[6055704]));
  void* sid_523_let = (&(global_workspace_1_var[6056464]));
  void* sid_524_let = (&(global_workspace_1_var[6056472]));
  void* sid_525_let = (&(global_workspace_1_var[6056456]));
  void* sid_526_let = (&(global_workspace_1_var[6056448]));
  void* sid_527_let = (&(global_workspace_1_var[6054912]));
  if (tvmgen_default_fused_layout_transform(input0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_reshape_squeeze_transpose_concatenate_add(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_3_let, sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add(sid_3_let, sid_4_let, sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_6_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_7_let, sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_6_let, sid_10_let, sid_9_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply(sid_11_let, sid_10_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split(sid_12_let, sid_13_let, sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_13_let, sid_14_let, sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_13_let, sid_14_let, sid_15_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_16_let, sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_13_let, sid_14_let, sid_15_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_19_let, sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_22_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_23_let, sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_22_let, sid_26_let, sid_25_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_1(sid_27_let, sid_26_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add(sid_28_let, sid_3_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_29_let, sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_1(sid_29_let, sid_30_let, sid_31_let, sid_32_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_32_let, sid_33_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_32_let, sid_34_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_34_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_33_let, sid_35_let, sid_36_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_32_let, sid_36_let, sid_35_let, sid_37_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_2(sid_37_let, sid_36_let, sid_38_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply(sid_38_let, sid_39_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_39_let, sid_40_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_39_let, sid_41_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_41_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_40_let, sid_42_let, sid_43_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_39_let, sid_43_let, sid_42_let, sid_44_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_3(sid_44_let, sid_43_let, sid_45_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_1(sid_45_let, sid_29_let, sid_46_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_46_let, sid_47_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_46_let, sid_47_let, sid_48_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_2(sid_46_let, sid_47_let, sid_48_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_49_let, sid_50_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_49_let, sid_51_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_51_let, sid_52_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_50_let, sid_52_let, sid_53_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_49_let, sid_53_let, sid_52_let, sid_54_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_4(sid_54_let, sid_53_let, sid_55_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_1(sid_55_let, sid_56_let, sid_57_let, sid_58_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_56_let, sid_57_let, sid_58_let, sid_59_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_56_let, sid_57_let, sid_58_let, sid_60_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_59_let, sid_60_let, sid_61_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_61_let, sid_62_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_56_let, sid_57_let, sid_58_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_62_let, sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_64_let, sid_65_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_65_let, sid_66_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_65_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_67_let, sid_68_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_66_let, sid_68_let, sid_69_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_65_let, sid_69_let, sid_68_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_5(sid_70_let, sid_69_let, sid_71_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_2(sid_71_let, sid_46_let, sid_72_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_72_let, sid_73_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_72_let, sid_73_let, sid_74_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_3(sid_72_let, sid_73_let, sid_74_let, sid_75_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_75_let, sid_76_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_75_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_77_let, sid_78_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_76_let, sid_78_let, sid_79_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_75_let, sid_79_let, sid_78_let, sid_80_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_6(sid_80_let, sid_79_let, sid_81_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_1(sid_81_let, sid_82_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_82_let, sid_83_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_82_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_84_let, sid_85_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_83_let, sid_85_let, sid_86_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_82_let, sid_86_let, sid_85_let, sid_87_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_7(sid_87_let, sid_86_let, sid_88_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_3(sid_88_let, sid_72_let, sid_89_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_89_let, sid_90_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_89_let, sid_90_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_4(sid_89_let, sid_90_let, sid_91_let, sid_92_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_92_let, sid_93_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_92_let, sid_94_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_94_let, sid_95_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_93_let, sid_95_let, sid_96_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_92_let, sid_96_let, sid_95_let, sid_97_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_8(sid_97_let, sid_96_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_2(sid_98_let, sid_99_let, sid_100_let, sid_101_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_99_let, sid_100_let, sid_101_let, sid_102_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_99_let, sid_100_let, sid_101_let, sid_103_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_102_let, sid_103_let, sid_104_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_104_let, sid_105_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_99_let, sid_100_let, sid_101_let, sid_106_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_105_let, sid_106_let, sid_107_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_107_let, sid_108_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_108_let, sid_109_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_108_let, sid_110_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_110_let, sid_111_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_109_let, sid_111_let, sid_112_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_108_let, sid_112_let, sid_111_let, sid_113_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_9(sid_113_let, sid_112_let, sid_114_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_4(sid_114_let, sid_89_let, sid_115_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_115_let, sid_116_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_115_let, sid_116_let, sid_117_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_5(sid_115_let, sid_116_let, sid_117_let, sid_118_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_118_let, sid_119_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_118_let, sid_120_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_120_let, sid_121_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_119_let, sid_121_let, sid_122_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_118_let, sid_122_let, sid_121_let, sid_123_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_10(sid_123_let, sid_122_let, sid_124_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_2(sid_124_let, sid_125_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_125_let, sid_126_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_125_let, sid_127_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_127_let, sid_128_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_126_let, sid_128_let, sid_129_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_125_let, sid_129_let, sid_128_let, sid_130_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_11(sid_130_let, sid_129_let, sid_131_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_5(sid_131_let, sid_115_let, sid_132_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_132_let, sid_133_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_132_let, sid_133_let, sid_134_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_6(sid_132_let, sid_133_let, sid_134_let, sid_135_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_135_let, sid_136_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_135_let, sid_137_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_137_let, sid_138_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_136_let, sid_138_let, sid_139_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_135_let, sid_139_let, sid_138_let, sid_140_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_12(sid_140_let, sid_139_let, sid_141_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_3(sid_141_let, sid_142_let, sid_143_let, sid_144_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_142_let, sid_143_let, sid_144_let, sid_145_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_142_let, sid_143_let, sid_144_let, sid_146_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_145_let, sid_146_let, sid_147_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_147_let, sid_148_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_142_let, sid_143_let, sid_144_let, sid_149_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_148_let, sid_149_let, sid_150_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_150_let, sid_151_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_151_let, sid_152_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_151_let, sid_153_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_153_let, sid_154_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_152_let, sid_154_let, sid_155_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_151_let, sid_155_let, sid_154_let, sid_156_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_13(sid_156_let, sid_155_let, sid_157_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_6(sid_157_let, sid_132_let, sid_158_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_158_let, sid_159_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_158_let, sid_159_let, sid_160_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_7(sid_158_let, sid_159_let, sid_160_let, sid_161_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_161_let, sid_162_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_161_let, sid_163_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_163_let, sid_164_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_162_let, sid_164_let, sid_165_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_161_let, sid_165_let, sid_164_let, sid_166_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_14(sid_166_let, sid_165_let, sid_167_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_3(sid_167_let, sid_168_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_168_let, sid_169_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_168_let, sid_170_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_170_let, sid_171_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_169_let, sid_171_let, sid_172_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_168_let, sid_172_let, sid_171_let, sid_173_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_15(sid_173_let, sid_172_let, sid_174_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_7(sid_174_let, sid_158_let, sid_175_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_175_let, sid_176_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_175_let, sid_176_let, sid_177_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_8(sid_175_let, sid_176_let, sid_177_let, sid_178_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_178_let, sid_179_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_178_let, sid_180_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_180_let, sid_181_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_179_let, sid_181_let, sid_182_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_178_let, sid_182_let, sid_181_let, sid_183_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_16(sid_183_let, sid_182_let, sid_184_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_4(sid_184_let, sid_185_let, sid_186_let, sid_187_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_185_let, sid_186_let, sid_187_let, sid_188_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_185_let, sid_186_let, sid_187_let, sid_189_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_188_let, sid_189_let, sid_190_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_190_let, sid_191_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_185_let, sid_186_let, sid_187_let, sid_192_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_191_let, sid_192_let, sid_193_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_193_let, sid_194_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_194_let, sid_195_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_194_let, sid_196_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_196_let, sid_197_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_195_let, sid_197_let, sid_198_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_194_let, sid_198_let, sid_197_let, sid_199_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_17(sid_199_let, sid_198_let, sid_200_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_8(sid_200_let, sid_175_let, sid_201_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_201_let, sid_202_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_201_let, sid_202_let, sid_203_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_9(sid_201_let, sid_202_let, sid_203_let, sid_204_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_204_let, sid_205_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_204_let, sid_206_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_206_let, sid_207_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_205_let, sid_207_let, sid_208_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_204_let, sid_208_let, sid_207_let, sid_209_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_18(sid_209_let, sid_208_let, sid_210_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_4(sid_210_let, sid_211_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_211_let, sid_212_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_211_let, sid_213_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_213_let, sid_214_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_212_let, sid_214_let, sid_215_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_211_let, sid_215_let, sid_214_let, sid_216_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_19(sid_216_let, sid_215_let, sid_217_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_9(sid_217_let, sid_201_let, sid_218_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_218_let, sid_219_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_218_let, sid_219_let, sid_220_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_10(sid_218_let, sid_219_let, sid_220_let, sid_221_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_221_let, sid_222_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_221_let, sid_223_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_223_let, sid_224_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_222_let, sid_224_let, sid_225_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_221_let, sid_225_let, sid_224_let, sid_226_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_20(sid_226_let, sid_225_let, sid_227_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_5(sid_227_let, sid_228_let, sid_229_let, sid_230_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_228_let, sid_229_let, sid_230_let, sid_231_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_228_let, sid_229_let, sid_230_let, sid_232_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_231_let, sid_232_let, sid_233_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_233_let, sid_234_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_228_let, sid_229_let, sid_230_let, sid_235_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_234_let, sid_235_let, sid_236_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_236_let, sid_237_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_237_let, sid_238_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_237_let, sid_239_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_239_let, sid_240_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_238_let, sid_240_let, sid_241_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_237_let, sid_241_let, sid_240_let, sid_242_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_21(sid_242_let, sid_241_let, sid_243_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_10(sid_243_let, sid_218_let, sid_244_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_244_let, sid_245_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_244_let, sid_245_let, sid_246_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_11(sid_244_let, sid_245_let, sid_246_let, sid_247_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_247_let, sid_248_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_247_let, sid_249_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_249_let, sid_250_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_248_let, sid_250_let, sid_251_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_247_let, sid_251_let, sid_250_let, sid_252_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_22(sid_252_let, sid_251_let, sid_253_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_5(sid_253_let, sid_254_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_254_let, sid_255_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_254_let, sid_256_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_256_let, sid_257_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_255_let, sid_257_let, sid_258_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_254_let, sid_258_let, sid_257_let, sid_259_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_23(sid_259_let, sid_258_let, sid_260_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_11(sid_260_let, sid_244_let, sid_261_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_261_let, sid_262_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_261_let, sid_262_let, sid_263_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_12(sid_261_let, sid_262_let, sid_263_let, sid_264_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_264_let, sid_265_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_264_let, sid_266_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_266_let, sid_267_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_265_let, sid_267_let, sid_268_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_264_let, sid_268_let, sid_267_let, sid_269_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_24(sid_269_let, sid_268_let, sid_270_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_6(sid_270_let, sid_271_let, sid_272_let, sid_273_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_271_let, sid_272_let, sid_273_let, sid_274_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_271_let, sid_272_let, sid_273_let, sid_275_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_274_let, sid_275_let, sid_276_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_276_let, sid_277_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_271_let, sid_272_let, sid_273_let, sid_278_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_277_let, sid_278_let, sid_279_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_279_let, sid_280_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_280_let, sid_281_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_280_let, sid_282_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_282_let, sid_283_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_281_let, sid_283_let, sid_284_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_280_let, sid_284_let, sid_283_let, sid_285_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_25(sid_285_let, sid_284_let, sid_286_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_12(sid_286_let, sid_261_let, sid_287_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_287_let, sid_288_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_287_let, sid_288_let, sid_289_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_13(sid_287_let, sid_288_let, sid_289_let, sid_290_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_290_let, sid_291_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_290_let, sid_292_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_292_let, sid_293_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_291_let, sid_293_let, sid_294_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_290_let, sid_294_let, sid_293_let, sid_295_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_26(sid_295_let, sid_294_let, sid_296_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_6(sid_296_let, sid_297_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_297_let, sid_298_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_297_let, sid_299_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_299_let, sid_300_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_298_let, sid_300_let, sid_301_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_297_let, sid_301_let, sid_300_let, sid_302_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_27(sid_302_let, sid_301_let, sid_303_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_13(sid_303_let, sid_287_let, sid_304_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_304_let, sid_305_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_304_let, sid_305_let, sid_306_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_14(sid_304_let, sid_305_let, sid_306_let, sid_307_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_307_let, sid_308_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_307_let, sid_309_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_309_let, sid_310_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_308_let, sid_310_let, sid_311_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_307_let, sid_311_let, sid_310_let, sid_312_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_28(sid_312_let, sid_311_let, sid_313_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_7(sid_313_let, sid_314_let, sid_315_let, sid_316_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_314_let, sid_315_let, sid_316_let, sid_317_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_314_let, sid_315_let, sid_316_let, sid_318_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_317_let, sid_318_let, sid_319_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_319_let, sid_320_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_314_let, sid_315_let, sid_316_let, sid_321_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_320_let, sid_321_let, sid_322_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_322_let, sid_323_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_323_let, sid_324_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_323_let, sid_325_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_325_let, sid_326_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_324_let, sid_326_let, sid_327_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_323_let, sid_327_let, sid_326_let, sid_328_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_29(sid_328_let, sid_327_let, sid_329_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_14(sid_329_let, sid_304_let, sid_330_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_330_let, sid_331_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_330_let, sid_331_let, sid_332_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_15(sid_330_let, sid_331_let, sid_332_let, sid_333_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_333_let, sid_334_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_333_let, sid_335_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_335_let, sid_336_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_334_let, sid_336_let, sid_337_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_333_let, sid_337_let, sid_336_let, sid_338_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_30(sid_338_let, sid_337_let, sid_339_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_7(sid_339_let, sid_340_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_340_let, sid_341_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_340_let, sid_342_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_342_let, sid_343_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_341_let, sid_343_let, sid_344_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_340_let, sid_344_let, sid_343_let, sid_345_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_31(sid_345_let, sid_344_let, sid_346_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_15(sid_346_let, sid_330_let, sid_347_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_347_let, sid_348_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_347_let, sid_348_let, sid_349_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_16(sid_347_let, sid_348_let, sid_349_let, sid_350_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_350_let, sid_351_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_350_let, sid_352_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_352_let, sid_353_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_351_let, sid_353_let, sid_354_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_350_let, sid_354_let, sid_353_let, sid_355_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_32(sid_355_let, sid_354_let, sid_356_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_8(sid_356_let, sid_357_let, sid_358_let, sid_359_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_357_let, sid_358_let, sid_359_let, sid_360_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_357_let, sid_358_let, sid_359_let, sid_361_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_360_let, sid_361_let, sid_362_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_362_let, sid_363_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_357_let, sid_358_let, sid_359_let, sid_364_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_363_let, sid_364_let, sid_365_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_365_let, sid_366_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_366_let, sid_367_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_366_let, sid_368_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_368_let, sid_369_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_367_let, sid_369_let, sid_370_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_366_let, sid_370_let, sid_369_let, sid_371_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_33(sid_371_let, sid_370_let, sid_372_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_16(sid_372_let, sid_347_let, sid_373_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_373_let, sid_374_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_373_let, sid_374_let, sid_375_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_17(sid_373_let, sid_374_let, sid_375_let, sid_376_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_376_let, sid_377_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_376_let, sid_378_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_378_let, sid_379_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_377_let, sid_379_let, sid_380_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_376_let, sid_380_let, sid_379_let, sid_381_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_34(sid_381_let, sid_380_let, sid_382_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_8(sid_382_let, sid_383_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_383_let, sid_384_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_383_let, sid_385_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_385_let, sid_386_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_384_let, sid_386_let, sid_387_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_383_let, sid_387_let, sid_386_let, sid_388_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_35(sid_388_let, sid_387_let, sid_389_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_17(sid_389_let, sid_373_let, sid_390_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_390_let, sid_391_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_390_let, sid_391_let, sid_392_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_18(sid_390_let, sid_391_let, sid_392_let, sid_393_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_393_let, sid_394_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_393_let, sid_395_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_395_let, sid_396_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_394_let, sid_396_let, sid_397_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_393_let, sid_397_let, sid_396_let, sid_398_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_36(sid_398_let, sid_397_let, sid_399_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_9(sid_399_let, sid_400_let, sid_401_let, sid_402_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_400_let, sid_401_let, sid_402_let, sid_403_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_400_let, sid_401_let, sid_402_let, sid_404_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_403_let, sid_404_let, sid_405_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_405_let, sid_406_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_400_let, sid_401_let, sid_402_let, sid_407_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_406_let, sid_407_let, sid_408_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_408_let, sid_409_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_409_let, sid_410_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_409_let, sid_411_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_411_let, sid_412_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_410_let, sid_412_let, sid_413_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_409_let, sid_413_let, sid_412_let, sid_414_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_37(sid_414_let, sid_413_let, sid_415_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_18(sid_415_let, sid_390_let, sid_416_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_416_let, sid_417_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_416_let, sid_417_let, sid_418_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_19(sid_416_let, sid_417_let, sid_418_let, sid_419_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_419_let, sid_420_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_419_let, sid_421_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_421_let, sid_422_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_420_let, sid_422_let, sid_423_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_419_let, sid_423_let, sid_422_let, sid_424_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_38(sid_424_let, sid_423_let, sid_425_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_9(sid_425_let, sid_426_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_426_let, sid_427_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_426_let, sid_428_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_428_let, sid_429_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_427_let, sid_429_let, sid_430_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_426_let, sid_430_let, sid_429_let, sid_431_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_39(sid_431_let, sid_430_let, sid_432_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_19(sid_432_let, sid_416_let, sid_433_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_433_let, sid_434_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_433_let, sid_434_let, sid_435_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_20(sid_433_let, sid_434_let, sid_435_let, sid_436_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_436_let, sid_437_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_436_let, sid_438_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_438_let, sid_439_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_437_let, sid_439_let, sid_440_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_436_let, sid_440_let, sid_439_let, sid_441_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_40(sid_441_let, sid_440_let, sid_442_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_10(sid_442_let, sid_443_let, sid_444_let, sid_445_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_443_let, sid_444_let, sid_445_let, sid_446_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_443_let, sid_444_let, sid_445_let, sid_447_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_446_let, sid_447_let, sid_448_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_448_let, sid_449_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_443_let, sid_444_let, sid_445_let, sid_450_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_449_let, sid_450_let, sid_451_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_451_let, sid_452_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_452_let, sid_453_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_452_let, sid_454_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_454_let, sid_455_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_453_let, sid_455_let, sid_456_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_452_let, sid_456_let, sid_455_let, sid_457_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_41(sid_457_let, sid_456_let, sid_458_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_20(sid_458_let, sid_433_let, sid_459_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_459_let, sid_460_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_459_let, sid_460_let, sid_461_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_21(sid_459_let, sid_460_let, sid_461_let, sid_462_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_462_let, sid_463_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_462_let, sid_464_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_464_let, sid_465_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_463_let, sid_465_let, sid_466_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_462_let, sid_466_let, sid_465_let, sid_467_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_42(sid_467_let, sid_466_let, sid_468_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_10(sid_468_let, sid_469_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_469_let, sid_470_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_469_let, sid_471_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_471_let, sid_472_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_470_let, sid_472_let, sid_473_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_469_let, sid_473_let, sid_472_let, sid_474_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_43(sid_474_let, sid_473_let, sid_475_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_21(sid_475_let, sid_459_let, sid_476_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_476_let, sid_477_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_476_let, sid_477_let, sid_478_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_22(sid_476_let, sid_477_let, sid_478_let, sid_479_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_479_let, sid_480_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_479_let, sid_481_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_481_let, sid_482_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_480_let, sid_482_let, sid_483_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_479_let, sid_483_let, sid_482_let, sid_484_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_44(sid_484_let, sid_483_let, sid_485_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_reshape_transpose_split_11(sid_485_let, sid_486_let, sid_487_let, sid_488_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_multiply_broadcast_to_reshape(sid_486_let, sid_487_let, sid_488_let, sid_489_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_transpose_broadcast_to_reshape(sid_486_let, sid_487_let, sid_488_let, sid_490_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul(sid_489_let, sid_490_let, sid_491_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_broadcast_to(sid_491_let, sid_492_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_squeeze_broadcast_to_reshape(sid_486_let, sid_487_let, sid_488_let, sid_493_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_batch_matmul_1(sid_492_let, sid_493_let, sid_494_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_squeeze_transpose_reshape(sid_494_let, sid_495_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_495_let, sid_496_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_495_let, sid_497_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_497_let, sid_498_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_496_let, sid_498_let, sid_499_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_495_let, sid_499_let, sid_498_let, sid_500_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_45(sid_500_let, sid_499_let, sid_501_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_22(sid_501_let, sid_476_let, sid_502_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_502_let, sid_503_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_502_let, sid_503_let, sid_504_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_23(sid_502_let, sid_503_let, sid_504_let, sid_505_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max(sid_505_let, sid_506_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min(sid_505_let, sid_507_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum(sid_507_let, sid_508_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide(sid_506_let, sid_508_let, sid_509_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c_(sid_505_let, sid_509_let, sid_508_let, sid_510_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_46(sid_510_let, sid_509_let, sid_511_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_multiply_erf_multiply_add_multiply_11(sid_511_let, sid_512_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_1(sid_512_let, sid_513_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_1(sid_512_let, sid_514_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_1(sid_514_let, sid_515_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_1(sid_513_let, sid_515_let, sid_516_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_contrib_re_eee3bcbb2e5e2e0c__1(sid_512_let, sid_516_let, sid_515_let, sid_517_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_47(sid_517_let, sid_516_let, sid_518_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_add_add_23(sid_518_let, sid_502_let, sid_519_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_mean(sid_519_let, sid_520_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_variance(sid_519_let, sid_520_let, sid_521_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_subtract_add_rsqrt_multiply_multiply_add_take(sid_519_let, sid_520_let, sid_521_let, sid_522_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_max_2(sid_522_let, sid_523_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_min_2(sid_522_let, sid_524_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_minimum_2(sid_524_let, sid_525_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_maximum_subtract_divide_2(sid_523_let, sid_525_let, sid_526_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_divide_round_divide_negative_clip_round_cast_cast_add_clip_cast_cast_subtr_43d99f0f30bb3132_(sid_522_let, sid_526_let, sid_525_let, sid_527_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_cast_multiply_multiply_add(sid_527_let, sid_526_let, output_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

