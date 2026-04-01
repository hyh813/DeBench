/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_clang_Os_no_g
 * Processor: arm
 */

#include <arm_neon.h>
#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* IDA decompiler helper macros */
#define JUMPOUT(x) __builtin_unreachable()
#define LODWORD(x) (*(uint32_t*)&(x))

/* Global data declarations */
extern int8x16_t xmmword_1920;
extern int8x16_t xmmword_1930;
extern int32x4_t xmmword_1940;
extern uint32_t unk_1980[12];
extern uint32_t dword_1950[4];
extern uint32_t dword_196C[5];
extern uint8_t byte_1960[16];
extern uint64_t xmmword_1F74;
extern uint64_t xmmword_1F84;

/* Global data definitions */
int8x16_t xmmword_1920 = {0};
int8x16_t xmmword_1930 = {0};
int32x4_t xmmword_1940 = {0};
uint32_t unk_1980[12] = {0, 1, 2, 3, 10, 11, 12, 13, 20, 21, 22, 23};
uint32_t dword_1950[4] = {50, 60, 70, 80};
uint32_t dword_196C[5] = {1, 2, 3, 4, 5};
uint8_t byte_1960[16] = {0};
uint64_t xmmword_1F74 = 0;
uint64_t xmmword_1F84 = 0;

/* String constants */
const char asc_1F05[] = "CF-L1 Tests Starting";
const char asc_1F29[] = "CF-L2 Tests Starting";
const char asc_1F4D[] = "CF-L3 Tests Starting";

/* Jump buffer for non-local jumps */
jmp_buf jump_buffer;

/* Function declarations for function pointers */
long long recursion_factorial(unsigned int a1);
long long triple_value(unsigned int a1);
long long double_value(unsigned int a1);

/* External function declarations */
long long call_weak_fn(void);

/* Standard C library function declarations - provided by headers */
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern int setjmp(jmp_buf env);
extern _Noreturn void longjmp(jmp_buf env, int val);
extern int _setjmp(jmp_buf env);

/* Function: recursion_factorial @ external */
long long recursion_factorial(unsigned int a1)
{
 if ( a1 <= 1 )
 return 1;
 return (unsigned int)a1 * recursion_factorial(a1 - 1);
}

/* Function: triple_value @ external */
long long triple_value(unsigned int a1)
{
 return (unsigned int)(3 * a1);
}

/* Function: double_value @ external */
long long double_value(unsigned int a1)
{
 return (unsigned int)(2 * a1);
}

/* Function: call_weak_fn @ external */
long long call_weak_fn(void)
{
 return 0;
}

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
 return dword_1950[a1];
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
 int v2; // w8
 unsigned int v3; // w8

 if ( a2 <= 0 )
 v2 = 0;
 else
 v2 = a2;
 v3 = v2 * a1;
 if ( a1 <= 0 )
 return 0;
 else
 return v3;
}


/* Function: loop_break @ 0xC54 */
long long loop_break(int a1)
{
 long long result; // x0

 result = 0;
 while ( dword_196C[result] != a1 )
 {
 if ( ++result == 5 )
 return 0xFFFFFFFFLL;
 }
 return result;
}


/* Function: loop_continue @ 0xC84 */
long long loop_continue(int a1)
{
 int8x16_t v1; // q0
 int v2; // w8
 int8x16_t v3; // q2
 int8x16_t v4; // q3
 int8x16_t v5; // q4
 uint32x4_t v6; // q1
 int8x16_t v7; // q6
 int8x16_t v8; // q5

 if ( a1 < 1 )
 return 0;
 v1 = vdupq_n_s8(0);
 v2 = 0;
 v3 = vreinterpretq_s8_u64(vdupq_n_u64(0x100000001LL));
 v4 = vreinterpretq_s8_u32(vdupq_n_u32(0x400000004));
 v5 = xmmword_1920;
 v6 = vreinterpretq_u32_s32(vdupq_n_s32(a1 - 1));
 do
 {
 v2 += 4;
 v7 = vbicq_s8(v5, vreinterpretq_s8_u32(vceqzq_s32(vreinterpretq_s32_s8(vandq_s8(v5, v3)))));
 v8 = v1;
 v5 = vreinterpretq_s8_s32(vaddq_s32(vreinterpretq_s32_s8(v5), vreinterpretq_s32_s8(v4)));
 v1 = vreinterpretq_s8_s32(vaddq_s32(vreinterpretq_s32_s8(v7), vreinterpretq_s32_s8(v1)));
 }
 while ( ((a1 + 3) & 0xFFFFFFFC) != v2 );
 return (unsigned int)vaddvq_s32(vreinterpretq_s32_s8(vbslq_s8(vreinterpretq_u8_u32(vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v2 - 4)), xmmword_1930)), v6)), v8, v1)));
}


/* Function: goto_forward @ 0xD04 */
long long goto_forward(int a1)
{
 int v1; // w8

 if ( a1 <= 1 )
 v1 = 1;
 else
 v1 = a1;
 return (unsigned int)(2 * a1 * v1);
}


/* Function: goto_backward @ 0xD18 */
long long goto_backward(int a1)
{
 int8x16_t v1; // q0
 int v2; // w8
 int8x16_t v3; // q3
 int8x16_t v4; // q4
 uint32x4_t v5; // q1
 int8x16_t v6; // q2
 int8x16_t v7; // q0

 if ( a1 < 1 )
 return 1;
 v1 = vreinterpretq_s8_u64(vdupq_n_u64(0x100000001LL));
 v2 = 0;
 v3 = vreinterpretq_s8_u32(vdupq_n_u32(0x400000004));
 v4 = xmmword_1920;
 v5 = vreinterpretq_u32_s32(vdupq_n_s32(a1 - 1));
 do
 {
 v6 = v1;
 v2 += 4;
 v1 = v4;
 v4 = vreinterpretq_s8_s32(vaddq_s32(vreinterpretq_s32_s8(v4), vreinterpretq_s32_s8(v3)));
 }
 while ( ((a1 + 3) & 0xFFFFFFFC) != v2 );
 v7 = vbslq_s8(vreinterpretq_u8_u32(vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v2 - 4)), xmmword_1930)), v5)), v6, v1);
 {
 int32x2_t low = vget_low_s32(vreinterpretq_s32_s8(v7));
 int32x2_t high = vget_high_s32(vreinterpretq_s32_s8(v7));
 int64_t result = vgetq_lane_s64(vmull_s32(low, high), 0);
 v7 = vreinterpretq_s8_s32(vdupq_n_s32((int32_t)result));
 }
 int32x4_t v7_32 = vreinterpretq_s32_s8(v7);
 return (uint32_t)vgetq_lane_s32(v7_32, 0) * (uint32_t)vgetq_lane_s32(v7_32, 1);
}


/* Function: ternary_op @ 0xD94 */
long long ternary_op(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: test_control_flow_l1 @ 0xDA0 */
long long test_control_flow_l1()
{
 puts(asc_1F05);
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


/* Function: loop_multi_exit @ 0xF6C */
long long loop_multi_exit(int a1)
{
 int v1; // w8
 long long v2; // x9
 unsigned int *v3; // x10
 long long i; // x11

 v1 = 0;
 v2 = 0;
 v3 = unk_1980;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v3[i] == a1 )
 return (unsigned int)(i - v1);
 }
 ++v2;
 v1 -= 10;
 v3 += 4;
 if ( v2 != 3 )
 continue;
 break;
 }
 return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0xFBC */
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


/* Function: multi_return @ 0xFE8 */
long long multi_return(unsigned int a1)
{
 unsigned int v1; // w9

 if ( (a1 & 0x80000000) != 0 )
 return 0xFFFFFFFFLL;
 v1 = 2 * a1;
 if ( (a1 & 1) != 0 )
 v1 = a1 + 1;
 if ( a1 <= 0x32 )
 return v1;
 else
 return 4294967294LL;
}


/* Function: conditional_return @ 0x1010 */
long long conditional_return(int a1)
{
 if ( a1 <= 0 )
 return (unsigned int)-a1;
 else
 return (unsigned int)(2 * a1);
}


/* Function: duffs_device @ 0x1020 */
long long duffs_device(long long a1, long long a2, int a3)
{
 long long *src = (long long *)a1;
 long long *dst = (long long *)a2;
 long long count = a3;
 long long result = 0;
 long long n = (count + 7) / 8;
 
 switch (count % 8) {
 case 0: do { result += *src++ + *dst++;
 case 7:      result += *src++ + *dst++;
 case 6:      result += *src++ + *dst++;
 case 5:      result += *src++ + *dst++;
 case 4:      result += *src++ + *dst++;
 case 3:      result += *src++ + *dst++;
 case 2:      result += *src++ + *dst++;
 case 1:      result += *src++ + *dst++;
 } while (--n > 0);
 }
 
 return result;
}


/* Function: loop_complex_cond @ 0x10A4 */
long long loop_complex_cond(int a1)
{
 unsigned int v1; // w10
 int v2; // w8
 unsigned int v3; // w11
 unsigned int v4; // w9

 if ( a1 < 1 )
 {
 v2 = 0;
 v4 = 0;
 }
 else
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = a1;
 v2 += 2;
 --a1;
 v4 = v1 + 1;
 if ( v3 < 2 )
 break;
 if ( v2 >= a1 )
 break;
 }
 while ( v1++ < 9 );
 }
 return a1 + v2 + v4;
}


/* Function: loop_modify_var @ 0x10F8 */
long long loop_modify_var(int a1)
{
 int v1; // w9
 unsigned int v2; // w8
 int v3; // w10

 if ( a1 < 1 )
 {
 return 0;
 }
 else
 {
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
 }
 return v2;
}


/* Function: loop_external_state @ 0x1134 */
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


/* Function: tail_recursion @ 0x11DC */
long long tail_recursion(signed int a1, unsigned int a2)
{
 int v2; // w8
 int8x16_t v3; // q4
 int8x16_t v4; // q0
 int8x16_t v5; // q3
 uint32x4_t v6; // q1
 int8x16_t v7; // q2
 int8x16_t v8; // q0

 if ( a1 >= 2 )
 {
 uint64_t init_low = a2 | 0x100000000LL;
 v4 = vreinterpretq_s8_u64(vcombine_u64(vdup_n_u64(init_low), vdup_n_u64(0x100000001LL)));
 v2 = 0;
 v3 = vreinterpretq_s8_u32(vdupq_n_u32(0x300000003));
 v5 = vreinterpretq_s8_s32(vaddq_s32(vdupq_n_s32(a1), xmmword_1940));
 v6 = vreinterpretq_u32_s32(vdupq_n_s32(a1 - 2));
 do
 {
 v7 = v4;
 v2 += 4;
 v4 = v5;
 v5 = vreinterpretq_s8_s32(vaddq_s32(vreinterpretq_s32_s8(v5), vreinterpretq_s32_s8(v3)));
 }
 while ( ((a1 + 2) & 0xFFFFFFFC) != v2 );
 v8 = vbslq_s8(vreinterpretq_u8_u32(vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v2 - 4)), xmmword_1930)), v6)), v7, v4);
 {
 int32x2_t low = vget_low_s32(vreinterpretq_s32_s8(v8));
 int32x2_t high = vget_high_s32(vreinterpretq_s32_s8(v8));
 int64_t result = vgetq_lane_s64(vmull_s32(low, high), 0);
 v8 = vreinterpretq_s8_s32(vdupq_n_s32((int32_t)result));
 }
 int32x4_t v8_32 = vreinterpretq_s32_s8(v8);
 return (uint32_t)vgetq_lane_s32(v8_32, 0) * (uint32_t)vgetq_lane_s32(v8_32, 1);
 }
 return a2;
}


/* Function: indirect_recursion_a @ 0x1264 */
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


/* Function: call_func_ptr @ 0x12B8 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x12C4 */
long long call_func_ptr_array(long long a1, signed int a2)
{
 int8x16_t v2; // q0
 int v3; // w8
 int8x16_t v4; // q4
 int8x16_t v5; // q3
 uint32x4_t v6; // q1
 int8x16_t v7; // q2
 int8x16_t v8; // q0
 long long result; // x0

 switch ( a2 )
 {
 case 0:
 result = (unsigned int)(2 * a2);
 break;
 case 1:
 result = (unsigned int)(3 * a2);
 break;
 case 2:
 if ( a2 >= 2 )
 {
 v2 = vreinterpretq_s8_u64(vdupq_n_u64(0x100000001LL));
 v3 = 0;
 v4 = vreinterpretq_s8_u32(vdupq_n_u32(0x300000003));
 v5 = vreinterpretq_s8_s32(vaddq_s32(vdupq_n_s32(a2), xmmword_1940));
 v6 = vreinterpretq_u32_s32(vdupq_n_s32(a2 - 2));
 do
 {
 v7 = v2;
 v3 += 4;
 v2 = v5;
 v5 = vreinterpretq_s8_s32(vaddq_s32(vreinterpretq_s32_s8(v5), vreinterpretq_s32_s8(v4)));
 }
 while ( ((a2 + 2) & 0xFFFFFFFC) != v3 );
 v8 = vbslq_s8(vreinterpretq_u8_u32(vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v3 - 4)), xmmword_1930)), v6)), v7, v2);
 {
 int32x2_t low = vget_low_s32(vreinterpretq_s32_s8(v8));
 int32x2_t high = vget_high_s32(vreinterpretq_s32_s8(v8));
 int64_t result_val = vgetq_lane_s64(vmull_s32(low, high), 0);
 v8 = vreinterpretq_s8_s32(vdupq_n_s32((int32_t)result_val));
 }
 int32x4_t v8_32 = vreinterpretq_s32_s8(v8);
 result = (uint32_t)vgetq_lane_s32(v8_32, 0) * (uint32_t)vgetq_lane_s32(v8_32, 1);
 }
 else
 {
 result = 1;
 }
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: call_virtual_func @ 0x12F8 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1300 */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(unsigned long long))
{
 unsigned int v5; // w20
 long long v6; // x22
 unsigned int v7; // t1

 if ( a2 < 1 )
 {
 return 0;
 }
 else
 {
 v5 = 0;
 v6 = (unsigned int)a2;
 do
 {
 v7 = *a1++;
 --v6;
 v5 += a3(v7);
 }
 while ( v6 );
 }
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1358 */
long long test_control_flow_l2()
{
 int v0; // w8
 long long v1; // x9
 unsigned int *v2; // x10
 long long i; // x11
 int v4; // w1
 int v5; // w1
 unsigned int v6; // w21
 int v7; // w19
 int v8; // w0
 int v9; // w8
 unsigned int v10; // w9
 int v11; // w1
 long long v13; // [xsp+0h] [xbp-40h] BYREF
 uint32_t v14[4]; // [xsp+20h] [xbp-20h] BYREF
 int v15; // [xsp+58h] [xbp+18h]
 int v16; // [xsp+5Ch] [xbp+1Ch]

 puts(asc_1F29);
 v0 = 0;
 v1 = 0;
 v2 = unk_1980;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v2[i] == 7 )
 {
 v4 = i - v0;
 goto LABEL_8;
 }
 }
 ++v1;
 v0 -= 10;
 v2 += 4;
 if ( v1 != 3 )
 continue;
 break;
 }
 v4 = -1;
LABEL_8:
 printf("CF-L2-01 (loop_multi_exit): %d\n", v4);
 v5 = 0;
 v16 = 0;
 do
 ++v5;
 while ( v5 != 1001 );
 v16 = 1;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 v6 = -1;
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v7 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 v14[0] = xmmword_1F74;
 v14[1] = xmmword_1F84;
 v8 = duffs_device((long long)&v13, (long long)v14, 8);
 printf("CF-L2-05 (duffs_device): %d\n", v8);
 v9 = 11;
 do
 {
 v10 = v7 - 8;
 v7 += 2;
 if ( v10 >= v9 - 2 )
 break;
 ++v6;
 --v9;
 }
 while ( v6 < 9 );
 printf("CF-L2-06 (loop_complex_cond): %d\n", v7);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 v11 = 0;
 v15 = 0;
 do
 ++v11;
 while ( v11 != 101 );
 printf("CF-L2-08 (loop_external_state): %d\n", 101);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x1578 */
long long non_local_jump(unsigned int a1)
{
 int v3; // w1

 if ( setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( (a1 & 0x80000000) != 0 )
 {
 v3 = 1;
 goto LABEL_9;
 }
 if ( a1 >= 0x65 )
 {
 v3 = 2;
LABEL_9:
 longjmp(jump_buffer, v3);
 }
 return 2 * a1;
}


/* Function: cpp_exception @ 0x15D8 */
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


/* Function: large_jump_table @ 0x15F4 */
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


/* Function: conditional_func_ptr @ 0x1688 */
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


/* Function: state_machine @ 0x16B8 */
long long state_machine(int a1, unsigned int a2)
{
 int v2; // w8

 switch ( a2 )
 {
 case 0u:
 a2 = a1 == 1;
 break;
 case 1u:
 if ( a1 == 99 )
 v2 = 3;
 else
 v2 = 1;
 if ( a1 == 2 )
 a2 = 2;
 else
 a2 = v2;
 break;
 case 2u:
 return a2;
 case 3u:
 if ( a1 )
 a2 = 3;
 else
 a2 = 0;
 break;
 default:
 a2 = 3;
 break;
 }
 return a2;
}


/* Function: fsm_func_table @ 0x171C */
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


/* Function: computed_goto @ 0x1778 */
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


/* Function: obfuscated_cf @ 0x17B8 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x17C0 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x17C8 */
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


/* Function: test_control_flow_l3 @ 0x17E4 */
long long test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 long long v2; // x0
 int v3; // w0

 puts(asc_1F4D);
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


/* Function: main @ 0x18DC */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x18FC */
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
