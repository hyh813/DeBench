/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_clang_O3_no_g
 * Processor: arm
 */

#include <arm_neon.h>
#include <stdio.h>
#include <setjmp.h>

/* Forward declaration */
long long call_weak_fn(void);

/* Global data arrays */
extern const int8x16_t xmmword_1A00;
extern const int32x4_t xmmword_1A10;
extern const unsigned int dword_1A20[];
extern const unsigned int dword_19CC[];
extern const unsigned int dword_199C[];
extern const char asc_1F85[];
extern const char asc_1FA9[];
extern const char asc_1FCD[];
extern jmp_buf jump_buffer;
extern long long recursion_factorial(unsigned long long);
extern long long triple_value(unsigned long long);
extern long long double_value(unsigned long long);
extern void loc_10A0(void);
extern const unsigned char byte_198D[];

/* Decompiler macros */
#define JUMPOUT(addr) __builtin_unreachable()
#define LODWORD(x) ((uint32_t)(x))

/* Function: .init_proc @ 0x860 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_880 @ 0x880 */
void sub_880()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0xA54 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a2 + a1) - a3);
}


/* Function: single_if @ 0xA64 */
long long single_if(int a1)
{
 return (unsigned int)(a1 << (a1 > 0));
}


/* Function: if_else @ 0xA74 */
bool if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0xA80 */
long long nested_if_2(int a1, int a2)
{
 if ( a1 <= 0 )
 return 0;
 else
 return (a2 & (unsigned int)~(a2 >> 31)) + a1;
}


/* Function: nested_if_deep @ 0xA94 */
long long nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 if ( a1 < 1 )
 return 0;
 if ( a2 < 1 )
 return 1;
 if ( a3 < 1 )
 return 2;
 if ( a4 < 1 )
 return 3;
 if ( a5 <= 0 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0xAE4 */
long long if_elseif_chain(unsigned int a1)
{
 if ( a1 >= 3 )
 return 0xFFFFFFFFLL;
 else
 return 10 * a1 + 10;
}


/* Function: if_elseif_long @ 0xAFC */
long long if_elseif_long(unsigned int a1)
{
 if ( a1 >= 5 )
 return 0xFFFFFFFFLL;
 else
 return 100 * a1 + 100;
}


/* Function: switch_small @ 0xB14 */
long long switch_small(unsigned int a1)
{
 if ( a1 > 3 )
 return 0xFFFFFFFFLL;
 else
 return dword_1A20[a1];
}


/* Function: switch_large @ 0xB34 */
long long switch_large(unsigned int a1)
{
 if ( a1 >= 0xA )
 return 0xFFFFFFFFLL;
 else
 return 10 * a1;
}


/* Function: switch_default @ 0xB48 */
long long switch_default(int a1)
{
 if ( (unsigned int)(a1 - 1) >= 3 )
 return 0;
 else
 return (unsigned int)(100 * (a1 - 1) + 100);
}


/* Function: switch_fallthrough @ 0xB64 */
long long switch_fallthrough(int a1)
{
 int v1; // w8

 v1 = 0;
 switch ( a1 )
 {
 case 1:
 return (unsigned int)(v1 + a1);
 case 2:
LABEL_5:
 v1 += 2 * a1;
 return (unsigned int)(v1 + a1);
 case 3:
 v1 = 12;
 goto LABEL_5;
 }
 return 0xFFFFFFFFLL;
}


/* Function: loop_for_fixed @ 0xB98 */
long long loop_for_fixed(int a1)
{
 if ( a1 < 1 )
 return 0;
 else
 return (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1) + a1 - 1;
}


/* Function: loop_while @ 0xBC0 */
long long loop_while(int a1)
{
 int v1; // w8
 long long result; // x0
 unsigned int v3; // w11

 if ( !a1 )
 return 1;
 v1 = a1;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(result + 1);
 v3 = v1 + 9;
 v1 /= 10;
 }
 while ( v3 > 0x12 );
 return result;
}


/* Function: loop_dowhile @ 0xC04 */
long long loop_dowhile(int a1)
{
 long long result; // x0
 unsigned int v3; // w11

 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(result + 1);
 v3 = a1 + 9;
 a1 /= 10;
 }
 while ( v3 > 0x12 );
 return result;
}


/* Function: loop_nested @ 0xC3C */
long long loop_nested(int a1, int a2)
{
 if ( a2 <= 0 || a1 <= 0 )
 return 0;
 else
 return (unsigned int)(a2 * a1);
}


/* Function: loop_break @ 0xC50 */
long long loop_break(int a1)
{
 int v1; // w8
 long long result; // x0

 v1 = a1 - 10;
 result = 0;
 switch ( v1 )
 {
 case 0:
 return result;
 case 10:
 result = 1;
 break;
 case 20:
 result = 2;
 break;
 case 30:
 result = 3;
 break;
 case 40:
 result = 4;
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: loop_continue @ 0xCA0 */
long long loop_continue(int a1)
{
 unsigned int v1; // w8
 unsigned int v2; // w9
 int32x4_t v4; // q0
 int32x4_t v5; // q1
 uint8x16_t v6; // q2
 uint8x16_t v7; // q4
 int32x4_t v8; // q3
 unsigned int v9; // w8
 int32x4_t v10; // q5
 int32x4_t v11; // q6
 uint8x16_t v12; // q16
 uint8x16_t v13; // q6
 int v14; // w11

 if ( a1 < 1 )
 return 0;
 if ( (unsigned int)a1 >= 8 )
 {
 v4 = vdupq_n_s32(0);
 v2 = (a1 & 0xFFFFFFF8) | 1;
 v5 = vdupq_n_s32(0x400000004);
 v6 = vreinterpretq_u8_u64(vdupq_n_u64(0x100000001));
 v7 = xmmword_1A00;
 v8 = vdupq_n_s32(0x800000008);
 uint32_t v9_scalar = a1 & 0xFFFFFFF8;
 v10 = vdupq_n_s32(0);
 do
 {
 v9_scalar -= 8;
 uint32x4_t vtemp3;
 {
 int8x16_t vtemp1 = vandq_s8(vreinterpretq_s8_u8(v7), vreinterpretq_s8_u8(v6));
 int32x4_t vtemp2 = vreinterpretq_s32_s8(vtemp1);
 vtemp3 = vceqzq_u32((uint32x4_t)vtemp2);
 v11 = vreinterpretq_s32_u32(vtemp3);
 }
 {
 int8x16_t vtemp4 = vbicq_s8(vreinterpretq_s8_u8(v7), vreinterpretq_s8_s32(vreinterpretq_s32_u32(vtemp3)));
 v12 = vreinterpretq_u8_s8(vtemp4);
 v12 = (uint8x16_t)vtemp4;
 }
 {
 int32x4_t vtemp_add = vaddq_s32(vreinterpretq_s32_u8(v7), v5);
 int8x16_t vtemp5 = vbicq_s8(vreinterpretq_s8_s32(vtemp_add), v11);
 v13 = vreinterpretq_u8_s8(vtemp5);
 }
 {
 int32x4_t vtemp = vaddq_s32(vreinterpretq_s32_u8(v7), v8);
 v7 = vreinterpretq_u8_s32(vtemp);
 }
 {
 int32x4_t vtemp4 = vreinterpretq_s32_u8(v12);
 v4 = vaddq_s32(vtemp4, v4);
 }
 {
 int32x4_t vtemp5 = vreinterpretq_s32_u8(v13);
 v10 = vaddq_s32(vtemp5, v10);
 }
 }
 while ( v9_scalar );
 {
 int32_t vtemp = vaddvq_s32(vaddq_s32(v10, v4));
 v1 = vtemp;
 }
 if ( (a1 & 0x7FFFFFF8) == a1 )
 return v1;
 }
 else
 {
 v1 = 0;
 v2 = 1;
 }
 do
 {
 v14 = ((int)(v2 << 31) >> 31) & v2;
 ++v2;
 v1 += v14;
 }
 while ( a1 + 1 != v2 );
 return v1;
}


/* Function: goto_forward @ 0xD4C */
long long goto_forward(int a1)
{
 int v1; // w8

 if ( a1 <= 1 )
 v1 = 1;
 else
 v1 = a1;
 return (unsigned int)(2 * a1 * v1);
}


/* Function: goto_backward @ 0xD60 */
long long goto_backward(int a1)
{
 unsigned int v1; // w9
 unsigned int v2; // w8
 uint32x4_t v4; // q0
 int32x4_t v5; // q1
 int32x4_t v6; // q2
 int32x4_t v7; // q4
 uint32x4_t v8; // q3
 unsigned int v9; // w8
 int32x4_t v10; // q5
 int8x16_t v11; // q0

 if ( a1 < 1 )
 return 1;
 if ( (unsigned int)a1 >= 8 )
 {
 v4 = vdupq_n_u32(1);
 v2 = (a1 & 0xFFFFFFF8) | 1;
 v5 = vdupq_n_s32(0x400000004);
 v6 = vdupq_n_s32(0x800000008);
 v7 = vreinterpretq_s32_u8(xmmword_1A00);
 v8 = vdupq_n_u32(1);
 uint32_t v9_scalar = a1 & 0xFFFFFFF8;
 do
 {
 int32x4_t vtemp10 = vaddq_s32(v7, v5);
 v10 = vtemp10;
 v9_scalar -= 8;
 {
 uint32x4_t vtemp_u32 = vmulq_u32(v4, vreinterpretq_u32_u32(vreinterpretq_u32_s32(v7)));
 v4 = vtemp_u32;
 }
 {
 int32x4_t vtemp7 = vaddq_s32(v7, v6);
 v7 = vtemp7;
 }
 {
 uint32x4_t vtemp2_u32 = vmulq_u32(v8, vreinterpretq_u32_u32(vreinterpretq_u32_s32(vtemp10)));
 v8 = vtemp2_u32;
 }
 }
 while ( v9_scalar );
 {
 uint32_t temp1 = vgetq_lane_u32(vreinterpretq_u32_s32(v4), 0);
 uint32_t temp2 = vgetq_lane_u32(vreinterpretq_u32_s32(v4), 1);
 v2 = temp1 * temp2;
 }
 if ( (a1 & 0x7FFFFFF8) == a1 )
 return v2;
 }
 else
 {
 v1 = 1;
 v2 = 1;
 }
 do
 v2 *= v1++;
 while ( a1 + 1 != v1 );
 return v2;
}


/* Function: ternary_op @ 0xDFC */
long long ternary_op(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: test_control_flow_l1 @ 0xE08 */
long long test_control_flow_l1()
{
 puts(asc_1F85);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", -5);
 printf("CF-L1-03 (if_else): %d\n", 1);
 printf("CF-L1-03 (if_else): %d\n", 0);
 printf("CF-L1-04 (nested_if_2): %d\n", 15);
 printf("CF-L1-04 (nested_if_2): %d\n", 10);
 printf("CF-L1-04 (nested_if_2): %d\n", 0);
 printf("CF-L1-05 (nested_if_deep): %d\n", 5);
 printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
 printf("CF-L1-07 (if_elseif_long): %d\n", 400);
 printf("CF-L1-08 (switch_small): %d\n", 50);
 printf("CF-L1-09 (switch_large): %d\n", 70);
 printf("CF-L1-10 (switch_default): %d\n", 0);
 printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
 printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
 printf("CF-L1-13 (loop_while): %d\n", 5);
 printf("CF-L1-14 (loop_dowhile): %d\n", 4);
 printf("CF-L1-15 (loop_nested): %d\n", 12);
 printf("CF-L1-16 (loop_break): %d\n", 2);
 printf("CF-L1-16 (loop_break): %d\n", -1);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", -6);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0xFD4 */
long long loop_multi_exit(int a1)
{
 if ( (unsigned int)(a1 - 1) > 0xB )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(dword_19CC[a1 - 1] + dword_199C[a1 - 1]);
}


/* Function: infinite_loop @ 0x100C */
long long infinite_loop(unsigned int *a1)
{
 long long result; // x0

 result = 0;
 while ( *a1 != 1 )
 {
 result = (unsigned int)(result + 1);
 if ( (unsigned int)result == 1001 )
 {
 *a1 = 1;
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0x1038 */
long long multi_return(unsigned int a1)
{
 unsigned int v1; // w9

 if ( (a1 & 0x80000000) != 0 )
 return 0xFFFFFFFFLL;
 v1 = 2 * a1;
 if ( (a1 & 1) != 0 )
 v1 = a1 + 1;
 if ( a1 <= 0x32 )
 return (unsigned int)v1;
 else
 return 4294967294LL;
}


/* Function: conditional_return @ 0x1060 */
long long conditional_return(int a1)
{
 if ( a1 <= 0 )
 return (unsigned int)-a1;
 else
 return (unsigned int)(2 * a1);
}


/* Function: duffs_device @ 0x1070 */
long long duffs_device(long long a1, long long a2, int a3)
{
 if ( a3 < 1 )
 return 0xFFFFFFFFLL;
 else
 return ((long long (*)(void))((char *)&loc_10A0 + 4 * byte_198D[a3 & 7]))();
}


/* Function: loop_complex_cond @ 0x1104 */
long long loop_complex_cond(long long result)
{
 unsigned int v1; // w10
 int v2; // w8
 unsigned int v3; // w11
 unsigned int v4; // w9

 if ( (int)result < 1 )
 return (unsigned int)result;
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = result;
 v2 += 2;
 LODWORD(result) = result - 1;
 v4 = v1 + 1;
 if ( v3 < 2 )
 break;
 if ( v2 >= (int)result )
 break;
 }
 while ( v1++ < 9 );
 return (unsigned int)result + v2 + v4;
}


/* Function: loop_modify_var @ 0x1160 */
long long loop_modify_var(int a1)
{
 int v1; // w9
 unsigned int v2; // w8
 int v3; // w10

 if ( a1 < 1 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = v1 + 2;
 if ( v1 <= 5 )
 v3 = v1;
 v2 += v1;
 v1 = v3 + 1;
 }
 while ( v3 + 1 < a1 );
 return v2;
}


/* Function: loop_external_state @ 0x11A0 */
long long loop_external_state(unsigned int *a1)
{
 long long result; // x0

 result = 0;
 do
 {
 if ( *a1 )
 break;
 result = (unsigned int)(result + 1);
 }
 while ( (unsigned int)result != 101 );
 return result;
}


/* Function: tail_recursion @ 0x1268 */
long long tail_recursion(signed int a1, unsigned int a2)
{
 int v2; // w8
 int32x4_t v3; // q3
 uint32x4_t v4; // q1
 unsigned int v5; // w10
 int32x4_t v6; // q2
 int32x4_t v7; // q0
 int32x4_t v8; // q3
 int32x4_t v9; // q4
 int32x4_t v10; // q5
 int8x16_t v11; // q0

 if ( a1 >= 2 )
 {
 v2 = a1 - 1;
 if ( (unsigned int)(a1 - 1) < 8 )
 goto LABEL_10;
 v3 = vdupq_n_s32(a1);
 v4 = vdupq_n_u32(1);
 uint32_t v5_scalar = a2;
 a1 -= v2 & 0xFFFFFFF8;
 v6 = vdupq_n_s32(0x300000003);
 v7 = vreinterpretq_s32_u32(vreinterpretq_u32_u64(vdupq_n_u64(a2 | 0x100000000)));
 v8 = vaddq_s32(v3, xmmword_1A10);
 v9 = vdupq_n_s32(0x700000007);
 do
 {
 int32x4_t vtemp10 = vaddq_s32(v8, v6);
 v10 = vtemp10;
 v5_scalar -= 8;
 {
 uint32x4_t vtemp_u32 = vmulq_u32(v4, vreinterpretq_u32_u32(vreinterpretq_u32_s32(v8)));
 v4 = vtemp_u32;
 }
 {
 int32x4_t vtemp8 = vaddq_s32(v8, v9);
 v8 = vtemp8;
 }
 {
 uint32x4_t vtemp2_u32 = vmulq_u32(v4, vreinterpretq_u32_s32(vtemp10));
 v4 = vtemp2_u32;
 }
 }
 while ( v5_scalar );
 a2 = vgetq_lane_u32(v4, 0) * vgetq_lane_u32(v4, 1);
 if ( v2 != (v2 & 0xFFFFFFF8) )
 {
LABEL_10:
 do
 a2 *= a1;
 while ( (unsigned int)a1-- > 2 );
 }
 }
 return a2;
}


/* Function: indirect_recursion_a @ 0x1304 */
long long indirect_recursion_a(long long result, int a2)
{
 int i; // w8
 int v3; // w9
 int v4; // w9

 if ( a2 >= 1 )
 {
 for ( i = a2 + 2; i >= 3; i -= 2 )
 {
 if ( (result & 1) != 0 )
 {
 v4 = 3 * result;
 if ( i == 3 )
 return (unsigned int)(v4 + 1);
 result = (unsigned int)(v4 + 2);
 }
 else
 {
 if ( (int)result >= 0 )
 v3 = result;
 else
 v3 = result + 1;
 result = (unsigned int)(v3 >> 1);
 if ( i == 3 )
 return result;
 result = (unsigned int)(result + 1);
 }
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x135C */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1368 */
long long call_func_ptr_array(long long a1, signed int a2)
{
 unsigned int v2; // w8
 int v3; // w9
 int32x4_t v4; // q0
 unsigned int v5; // w11
 int32x4_t v6; // q1
 int32x4_t v7; // q2
 int32x4_t v8; // q3
 int32x4_t v9; // q4
 int32x4_t v10; // q5
 int8x16_t v11; // q0
 long long result; // x0

 switch ( a2 )
 {
 case 0:
 return (unsigned int)(2 * a2);
 case 1:
 return (unsigned int)(3 * a2);
 case 2:
 if ( a2 < 2 )
 return 1;
 v2 = a2;
 v3 = a2 - 1;
 if ( v3 < 8 )
 {
 result = 1;
 do
LABEL_13:
 result = v2 * (unsigned int)result;
 while ( v2-- > 2 );
 return result;
 }
 v4 = vreinterpretq_s32_u64(vdupq_n_u64(0x100000001));
 uint32_t v5_scalar = v3;
 v6 = vdupq_n_s32(0x300000003);
 v7 = vdupq_n_s32(0x700000007);
 v8 = vaddq_s32(vdupq_n_s32(a2), xmmword_1A10);
 v9 = vreinterpretq_s32_u64(vdupq_n_u64(0x100000001));
 do
 {
 int32x4_t vtemp10 = vaddq_s32(v8, v6);
 v10 = vtemp10;
 v5_scalar -= 8;
 {
 uint32x4_t vtemp_u32 = vmulq_u32(vreinterpretq_u32_u32(vreinterpretq_u32_s32(v4)), vreinterpretq_u32_u32(vreinterpretq_u32_s32(v8)));
 v4 = vreinterpretq_s32_u32(vtemp_u32);
 }
 {
 int32x4_t vtemp8 = vaddq_s32(v8, v7);
 v8 = vtemp8;
 }
 {
 uint32x4_t vtemp2_u32 = vmulq_u32(vreinterpretq_u32_u32(vreinterpretq_u32_s32(v9)), vreinterpretq_u32_u32(vreinterpretq_u32_s32(vtemp10)));
 v9 = vreinterpretq_s32_u32(vtemp2_u32);
 }
 }
 while ( v5_scalar );
 {
 uint32_t temp1 = vgetq_lane_u32(vreinterpretq_u32_s32(v4), 0);
 uint32_t temp2 = vgetq_lane_u32(vreinterpretq_u32_s32(v4), 1);
 result = temp1 * temp2;
 }
 if ( v3 != (v3 & 0xFFFFFFF8) )
 goto LABEL_13;
 return result;
 default:
 return 0xFFFFFFFFLL;
 }
}


/* Function: call_virtual_func @ 0x139C */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x13A4 */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(unsigned long long))
{
 unsigned int v5; // w20
 long long v6; // x22
 unsigned int v7; // t1

 if ( a2 < 1 )
 return 0;
 v5 = 0;
 v6 = (unsigned int)a2;
 do
 {
 v7 = *a1++;
 --v6;
 v5 += a3(v7);
 }
 while ( v6 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x140C */
long long test_control_flow_l2()
{
 int i; // w1
 unsigned int v1; // w21
 int v2; // w19
 int v3; // w8
 unsigned int v4; // w9
 int j; // w1

 puts(asc_1FA9);
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 v1 = -1;
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v2 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v3 = 11;
 do
 {
 v4 = v2 - 8;
 v2 += 2;
 if ( v4 >= v3 - 2 )
 break;
 ++v1;
 --v3;
 }
 while ( v1 < 9 );
 printf("CF-L2-06 (loop_complex_cond): %d\n", v2);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 for ( j = 0; j != 101; ++j )
 ;
 printf("CF-L2-08 (loop_external_state): %d\n", 101);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x15BC */
long long non_local_jump(unsigned int a1)
{
 if ( _setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( (a1 & 0x80000000) != 0 )
 longjmp(jump_buffer, 1);
 if ( a1 >= 0x65 )
 longjmp(jump_buffer, 2);
 return 2 * a1;
}


/* Function: cpp_exception @ 0x1628 */
long long cpp_exception(int a1)
{
 unsigned int v1; // w8

 if ( a1 <= 100 )
 v1 = 2 * a1;
 else
 v1 = -2;
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 else
 return v1;
}


/* Function: large_jump_table @ 0x1644 */
long long large_jump_table(long long a1, int a2, int a3)
{
 long long result; // x0

 switch ( a2 )
 {
 case 0:
 result = (unsigned int)(a3 + a2);
 break;
 case 1:
 result = (unsigned int)(a2 - a3);
 break;
 case 2:
 result = (unsigned int)(a3 * a2);
 break;
 case 3:
 if ( a3 )
 result = (unsigned int)(a2 / a3);
 else
 result = 0;
 break;
 case 4:
 if ( a3 )
 result = (unsigned int)(a2 % a3);
 else
 result = 0;
 break;
 case 5:
 result = a3 & (unsigned int)a2;
 break;
 case 6:
 result = a3 | (unsigned int)a2;
 break;
 case 7:
 result = a3 ^ (unsigned int)a2;
 break;
 case 8:
 result = (unsigned int)(a2 << a3);
 break;
 case 9:
 result = (unsigned int)(a2 >> a3);
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: conditional_func_ptr @ 0x16D8 */
long long conditional_func_ptr(int a1, unsigned int a2)
{
 long long ( *v2)(unsigned long long); // x8

 v2 = (long long ( *)(unsigned long long))&recursion_factorial;
 if ( a1 == 1 )
 v2 = (long long ( *)(unsigned long long))&triple_value;
 if ( a1 )
 return v2(a2);
 else
 return ((long long ( *)(unsigned long long))double_value)(a2);
}


/* Function: state_machine @ 0x1708 */
long long state_machine(int a1, unsigned int a2)
{
 long long result; // x0
 unsigned int v3; // w8

 switch ( a2 )
 {
 case 0u:
 result = a1 == 1;
 break;
 case 1u:
 if ( a1 == 99 )
 v3 = 3;
 else
 v3 = 1;
 if ( a1 == 2 )
 result = 2;
 else
 result = v3;
 break;
 case 2u:
 goto LABEL_4;
 case 3u:
 if ( a1 )
 result = 3;
 else
 result = 0;
 break;
 default:
 a2 = 3;
LABEL_4:
 result = a2;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x176C */
long long fsm_func_table(int a1, int a2)
{
 long long result; // x0
 unsigned int v3; // w8

 switch ( a2 )
 {
 case 0:
 result = a1 == 1;
 break;
 case 1:
 if ( a1 == 99 )
 v3 = 3;
 else
 v3 = 1;
 if ( a1 == 2 )
 result = 2;
 else
 result = v3;
 break;
 case 2:
 result = 2;
 break;
 case 3:
 if ( a1 )
 result = 3;
 else
 result = 0;
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: computed_goto @ 0x17C8 */
long long computed_goto(long long a1, int a2)
{
 long long result; // x0

 switch ( a2 )
 {
 case 0:
 result = 0;
 break;
 case 1:
 result = 10;
 break;
 case 2:
 result = 20;
 break;
 case 3:
 result = 30;
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: obfuscated_cf @ 0x1808 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1810 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1818 */
long long overlapped_code(int a1)
{
 int v1; // w8
 unsigned int v2; // w8

 if ( a1 >= 0 )
 v1 = a1;
 else
 v1 = a1 + 1;
 v2 = v1 >> 1;
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return v2;
}


/* Function: test_control_flow_l3 @ 0x1834 */
long long test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 long long v2; // x0
 int v3; // w0

 puts(asc_1FCD);
 v0 = non_local_jump(5u);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(0xFFFFFFFB);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 v2 = printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 v3 = computed_goto(v2, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v3);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x192C */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x194C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _setjmp @ 0x131E0 */

/* FAILED to decompile: __libc_start_main @ 0x131E8 */

/* FAILED to decompile: __cxa_finalize @ 0x131F0 */

/* FAILED to decompile: abort @ 0x131F8 */

/* FAILED to decompile: puts @ 0x13200 */

/* FAILED to decompile: longjmp @ 0x13208 */

/* FAILED to decompile: printf @ 0x13210 */

/* FAILED to decompile: __gmon_start__ @ 0x13220 */

/* Total functions decompiled: 57, failed: 8 */
