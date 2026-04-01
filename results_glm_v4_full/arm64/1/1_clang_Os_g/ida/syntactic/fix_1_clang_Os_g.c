/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_clang_Os_g
 * Processor: arm
 */

#include <arm_neon.h>
#include <stdio.h>
#include <setjmp.h>
#include <signal.h>

/* Helper macros from decompiler */
#define LODWORD(x) ((uint32_t)(x))
#define JUMPOUT(x) __builtin_unreachable()

/* External data declarations */
extern const int8x16_t xmmword_1920;
extern const int8x16_t xmmword_1930;
extern const int8x16_t xmmword_1940;
extern const int8x16_t xmmword_1F74;
extern const int8x16_t xmmword_1F84;
extern const int dword_1950[4];
extern const int dword_196C[5];
extern unsigned int unk_1980[];
extern const char asc_1F05[];
extern const char asc_1F29[];
extern const char asc_1F4D[];
extern const unsigned char byte_1960[];
extern long long call_weak_fn(void);
extern long long loc_1050(void *, void *);

/* External function declarations */
extern int recursion_factorial(int n);
extern int triple_value(int x);
extern int double_value(int x);

/* Global variables */
jmp_buf jump_buffer;

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
int sequential_ops(int a, int b, int c)
{
 return 2 * (b + a) - c;
}


/* Function: single_if @ 0xA64 */
int single_if(int x)
{
 return x << (x > 0);
}


/* Function: if_else @ 0xA74 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0xA80 */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 else
 return (b & ~(b >> 31)) + a;
}


/* Function: nested_if_deep @ 0xA94 */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 if ( a < 1 )
 return 0;
 if ( b < 1 )
 return 1;
 if ( c < 1 )
 return 2;
 if ( d < 1 )
 return 3;
 if ( e <= 0 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0xAE4 */
int if_elseif_chain(int x)
{
 if ( (unsigned int)x >= 3 )
 return -1;
 else
 return 10 * x + 10;
}


/* Function: if_elseif_long @ 0xAFC */
int if_elseif_long(int x)
{
 if ( (unsigned int)x >= 5 )
 return -1;
 else
 return 100 * x + 100;
}


/* Function: switch_small @ 0xB14 */
int switch_small(int op)
{
 if ( (unsigned int)op > 3 )
 return -1;
 else
 return dword_1950[op];
}


/* Function: switch_large @ 0xB34 */
int switch_large(int op)
{
 if ( (unsigned int)op >= 0xA )
 return -1;
 else
 return 10 * op;
}


/* Function: switch_default @ 0xB48 */
int switch_default(int op)
{
 if ( (unsigned int)(op - 1) >= 3 )
 return 0;
 else
 return 100 * (op - 1) + 100;
}


/* Function: switch_fallthrough @ 0xB64 */
int switch_fallthrough(int op)
{
 int v1; // w8

 v1 = 0;
 switch ( op )
 {
 case 1:
 return v1 + op;
 case 2:
LABEL_5:
 v1 += 2 * op;
 return v1 + op;
 case 3:
 v1 = 12;
 goto LABEL_5;
 }
 return -1;
}


/* Function: loop_for_fixed @ 0xB98 */
int loop_for_fixed(int n)
{
 if ( n < 1 )
 return 0;
 else
 return (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1) + n - 1;
}


/* Function: loop_while @ 0xBC0 */
int loop_while(int x)
{
 int v1; // w8
 int result; // w0
 unsigned int v3; // w11

 if ( !x )
 return 1;
 v1 = x;
 result = 0;
 do
 {
 ++result;
 v3 = v1 + 9;
 v1 /= 10;
 }
 while ( v3 > 0x12 );
 return result;
}


/* Function: loop_dowhile @ 0xC04 */
int loop_dowhile(int x)
{
 int result; // w0
 unsigned int v3; // w11

 result = 0;
 do
 {
 ++result;
 v3 = x + 9;
 x /= 10;
 }
 while ( v3 > 0x12 );
 return result;
}


/* Function: loop_nested @ 0xC3C */
int loop_nested(int m, int n)
{
 int v2; // w8
 int v3; // w8

 if ( n <= 0 )
 v2 = 0;
 else
 v2 = n;
 v3 = v2 * m;
 if ( m <= 0 )
 return 0;
 else
 return v3;
}


/* Function: loop_break @ 0xC54 */
int loop_break(int target)
{
 long long v2; // x0

 v2 = 0;
 while ( dword_196C[v2] != target )
 {
 if ( ++v2 == 5 )
 {
 LODWORD(v2) = -1;
 return v2;
 }
 }
 return v2;
}


/* Function: loop_continue @ 0xC84 */
int loop_continue(int n)
{
 int8x16_t v1; // q0
 int v2; // w8
 int8x16_t v3; // q2
 int32x4_t v4; // q3
 int32x4_t v5; // q4
 uint32x4_t v6; // q1
 int8x16_t v7; // q6
 int8x16_t v8; // q5

 if ( n < 1 )
 return 0;
 v1 = vreinterpretq_s8_s32(vdupq_n_s32(0));
 v2 = 0;
 v3 = vreinterpretq_s8_u64(vcombine_u64(vcreate_u64(0x100000001ULL), vcreate_u64(0x100000001ULL)));
 v4 = vreinterpretq_s32_u64(vcombine_u64(vcreate_u64(0x400000004ULL), vcreate_u64(0x400000004ULL)));
 v6 = vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v2 - 4)), xmmword_1930)), vdupq_n_u32(n - 1));
 do
 {
 v2 += 4;
 v7 = vbicq_s8(v1, vreinterpretq_s8_u32(vceqq_s32(vreinterpretq_s32_s8(v1), vdupq_n_s32(0))));
 v8 = v1;
 v5 = vaddq_s32(vreinterpretq_s32_s8(v1), v4);
 v1 = vreinterpretq_s8_s32(vaddq_s32(vreinterpretq_s32_s8(v7), vreinterpretq_s32_s8(v1)));
 v5 = vaddq_s32(v5, v4);
 v1 = vreinterpretq_s8_s32(v5);
 }
 while ( ((n + 3) & 0xFFFFFFFC) != v2 );
 uint64_t low = vgetq_lane_u64(vreinterpretq_u64_s8(v1), 0);
 uint64_t high = vgetq_lane_u64(vreinterpretq_u64_s8(v1), 1);
 return (low >> 32) * (high >> 32);
}


/* Function: goto_forward @ 0xD04 */
int goto_forward(int x)
{
 int v1; // w8

 if ( x <= 1 )
 v1 = 1;
 else
 v1 = x;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0xD18 */
int goto_backward(int x)
{
 int8x16_t v1; // q0
 int v2; // w8
 int32x4_t v3; // q3
 int32x4_t v4; // q4
 uint32x4_t v5; // q1
 int8x16_t v6; // q2
 int8x16_t v7; // q0

 if ( x < 1 )
 return 1;
 v1 = vreinterpretq_s8_u64(vcombine_u64(vcreate_u64(0x100000001ULL), vcreate_u64(0x100000001ULL)));
 v2 = 0;
 v3 = vreinterpretq_s32_u64(vcombine_u64(vcreate_u64(0x400000004ULL), vcreate_u64(0x400000004ULL)));
 v4 = vreinterpretq_s32_s8(xmmword_1920);
 v5 = vdupq_n_u32(x - 1);
 do
 {
 v6 = v1;
 v2 += 4;
 v1 = vreinterpretq_s8_u32(vreinterpretq_u32_s32(vmulq_s32(v4, vreinterpretq_s32_s8(v1))));
 v4 = vaddq_s32(v4, v3);
 }
 while ( ((x + 3) & 0xFFFFFFFC) != v2 );
 v7 = vbslq_s8(vreinterpretq_u8_u32(vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v2 - 4)), xmmword_1930)), v5)), v6, v1);
 {
  uint64_t low = vgetq_lane_u64(vreinterpretq_u64_s8(v7), 0);
  uint64_t high = vgetq_lane_u64(vreinterpretq_u64_s8(v7), 1);
  return (low >> 32) * (high >> 32);
 }
}


/* Function: ternary_op @ 0xD94 */
int ternary_op(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0xDA0 */
void test_control_flow_l1()
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
 printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0xF6C */
int loop_multi_exit(int target)
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
 if ( v3[i] == target )
 return i - v1;
 }
 ++v2;
 v1 -= 10;
 v3 += 4;
 if ( v2 != 3 )
 continue;
 break;
 }
 return -1;
}


/* Function: infinite_loop @ 0xFBC */
int infinite_loop(volatile int *flag)
{
 int result; // w0

 result = 0;
 while ( *flag != 1 )
 {
 if ( ++result == 1001 )
 {
 *flag = 1;
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0xFE8 */
int multi_return(int x)
{
 int v1; // w9

 if ( x < 0 )
 return -1;
 v1 = 2 * x;
 if ( (x & 1) != 0 )
 v1 = x + 1;
 if ( (unsigned int)x <= 0x32 )
 return v1;
 else
 return -2;
}


/* Function: conditional_return @ 0x1010 */
int conditional_return(int x)
{
 if ( x <= 0 )
 return -x;
 else
 return 2 * x;
}


/* Function: duffs_device @ 0x1020 */
int duffs_device(int *dst, int *src, int n)
{
 if ( n < 1 )
 return -1;
 else
 {
 typedef long long (*func_t)(int *, int *);
 return ((func_t)((char *)&loc_1050 + 4 * byte_1960[n & 7]))(dst, src);
 }
}


/* Function: loop_complex_cond @ 0x10A4 */
int loop_complex_cond(int x)
{
 unsigned int v1; // w10
 int v2; // w8
 unsigned int v3; // w11
 unsigned int v4; // w9

 if ( x < 1 )
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
 v3 = x;
 v2 += 2;
 --x;
 v4 = v1 + 1;
 if ( v3 < 2 )
 break;
 if ( v2 >= x )
 break;
 }
 while ( v1++ < 9 );
 }
 return x + v2 + v4;
}


/* Function: loop_modify_var @ 0x10F8 */
int loop_modify_var(int n)
{
 int v1; // w9
 int v2; // w8
 int v3; // w10

 if ( n < 1 )
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
 while ( v3 + 1 < n );
 return v2;
}


/* Function: loop_external_state @ 0x1134 */
int loop_external_state(volatile int *flag)
{
 int result; // w0

 for ( result = 0; result != 101; ++result )
 {
 if ( *flag )
 break;
 }
 return result;
}


/* Function: tail_recursion @ 0x11DC */
int tail_recursion(int n, int acc)
{
 int v2; // w8
 int32x4_t v3; // q4
 int8x16_t v4_temp; // q0
 int32x4_t v5; // q3
 uint32x4_t v6; // q1
 int8x16_t v7; // q2
 int8x16_t v8; // q0

 if ( n >= 2 )
 {
 v2 = 0;
 v3 = vreinterpretq_s32_u64(vcombine_u64(vcreate_u64(0x300000003ULL), vcreate_u64(0x300000003ULL)));
 v4_temp = vreinterpretq_s8_u64(vcombine_u64(vcreate_u64((unsigned long long)(unsigned int)acc | 0x100000000ULL), vcreate_u64(0x100000001ULL)));
 v5 = vaddq_s32(vdupq_n_s32(n), vreinterpretq_s32_s8(xmmword_1940));
 v6 = vdupq_n_u32(n - 2);
 do
 {
 v7 = v4_temp;
 v2 += 4;
 v4_temp = vreinterpretq_s8_s32(vmulq_s32(v5, vreinterpretq_s32_s8(v4_temp)));
 v5 = vaddq_s32(v5, v3);
 }
 while ( ((n + 2) & 0xFFFFFFFC) != v2 );
 v8 = vbslq_s8(vreinterpretq_u8_u32(vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v2 - 4)), xmmword_1930)), v6)), v7, v4_temp);
  uint64_t low = vgetq_lane_u64(vreinterpretq_u64_s8(v8), 0);
  uint64_t high = vgetq_lane_u64(vreinterpretq_u64_s8(v8), 1);
  return (low >> 32) * (high >> 32);
 }
 return acc;
}


/* Function: indirect_recursion_a @ 0x1264 */
int indirect_recursion_a(int n, int depth)
{
 int i; // w8
 int v3; // w9
 int v4; // w9

 if ( depth >= 1 )
 {
 for ( i = depth + 2; i >= 3; i -= 2 )
 {
 if ( (n & 1) != 0 )
 {
 v4 = 3 * n;
 if ( i == 3 )
 return v4 + 1;
 n = v4 + 2;
 }
 else
 {
 if ( n >= 0 )
 v3 = n;
 else
 v3 = n + 1;
 n = v3 >> 1;
 if ( i == 3 )
 return n;
 ++n;
 }
 }
 }
 return n;
}


/* Function: call_func_ptr @ 0x12B8 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x12C4 */
int call_func_ptr_array(int idx, int x)
{
 int8x16_t v2; // q0
 int v3; // w8
 int32x4_t v4; // q4
 int32x4_t v5; // q3
 uint32x4_t v6; // q1
 int8x16_t v7; // q2
 int8x16_t v8; // q0
 int result; // w0

 switch ( x )
 {
 case 0:
 result = 2 * x;
 break;
 case 1:
 result = 3 * x;
 break;
 case 2:
 if ( x >= 2 )
 {
 v2 = vreinterpretq_s8_u64(vcombine_u64(vcreate_u64(0x100000001ULL), vcreate_u64(0x100000001ULL)));
 v3 = 0;
 v4 = vreinterpretq_s32_u64(vcombine_u64(vcreate_u64(0x300000003ULL), vcreate_u64(0x300000003ULL)));
 v5 = vaddq_s32(vdupq_n_s32(x), vreinterpretq_s32_s8(xmmword_1940));
 v6 = vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v3 - 4)), xmmword_1930)), vreinterpretq_u32_s32(vdupq_n_s32(x - 2)));
 do
 {
 v7 = v2;
 v3 += 4;
 v2 = vreinterpretq_s8_s32(vmulq_s32(v5, vreinterpretq_s32_s8(v2)));
 v5 = vaddq_s32(v5, v4);
 }
 while ( ((x + 2) & 0xFFFFFFFC) != v3 );
 v8 = vbslq_s8(vreinterpretq_u8_u32(vcgtq_u32(vreinterpretq_u32_s8(vorrq_s8(vreinterpretq_s8_s32(vdupq_n_s32(v3 - 4)), xmmword_1930)), v6)), v7, v2);
 {
  uint64_t low = vgetq_lane_u64(vreinterpretq_u64_s8(v8), 0);
  uint64_t high = vgetq_lane_u64(vreinterpretq_u64_s8(v8), 1);
  result = (low >> 32) * (high >> 32);
 }
 }
 else
 {
 result = 1;
 }
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: call_virtual_func @ 0x12F8 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1300 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v5; // w20
 long long v6; // x22
 int v7; // t1

 if ( n < 1 )
 return 0;
 v5 = 0;
 v6 = (unsigned int)n;
 do
 {
 v7 = *arr++;
 --v6;
 v5 += cb(v7);
 }
 while ( v6 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1358 */
void test_control_flow_l2()
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
 int v12[8]; // [xsp+0h] [xbp-40h] BYREF
 int src[4]; // [xsp+20h] [xbp-20h] BYREF
 __int128 v14; // [xsp+30h] [xbp-10h]
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
 *(unsigned long long *)src = vgetq_lane_u64(vreinterpretq_u64_s8(xmmword_1F74), 0);
 v14 = (__int128)vgetq_lane_u64(vreinterpretq_u64_s8(xmmword_1F84), 0) | ((__int128)vgetq_lane_u64(vreinterpretq_u64_s8(xmmword_1F84), 1) << 64);
 v8 = duffs_device(v12, src, 8);
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
 printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x1578 */
int non_local_jump(int x)
{
 int v3; // w1

 if ( _setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 {
 v3 = 1;
 goto LABEL_9;
 }
 if ( (unsigned int)x >= 0x65 )
 {
 v3 = 2;
LABEL_9:
 longjmp(jump_buffer, v3);
 }
 return 2 * x;
}


/* Function: cpp_exception @ 0x15D8 */
int cpp_exception(int x)
{
 int v1; // w8

 if ( x <= 100 )
 v1 = 2 * x;
 else
 v1 = -2;
 if ( x < 0 )
 return -1;
 else
 return v1;
}


/* Function: large_jump_table @ 0x15F4 */
int large_jump_table(int op, int a, int b)
{
 int result; // w0

 switch ( a )
 {
 case 0:
 result = b + a;
 break;
 case 1:
 result = a - b;
 break;
 case 2:
 result = b * a;
 break;
 case 3:
 if ( b )
 result = a / b;
 else
 result = 0;
 break;
 case 4:
 if ( b )
 result = a % b;
 else
 result = 0;
 break;
 case 5:
 result = b & a;
 break;
 case 6:
 result = b | a;
 break;
 case 7:
 result = b ^ a;
 break;
 case 8:
 result = a << b;
 break;
 case 9:
 result = a >> b;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: conditional_func_ptr @ 0x1688 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // x8

 v2 = recursion_factorial;
 if ( mode == 1 )
 v2 = triple_value;
 if ( mode )
 return v2(x);
 else
 return double_value(x);
}


/* Function: state_machine @ 0x16B8 */
int state_machine(int event, int state)
{
 int v2; // w8

 switch ( state )
 {
 case 0:
 state = event == 1;
 break;
 case 1:
 if ( event == 99 )
 v2 = 3;
 else
 v2 = 1;
 if ( event == 2 )
 state = 2;
 else
 state = v2;
 break;
 case 2:
 return state;
 case 3:
 if ( event )
 state = 3;
 else
 state = 0;
 break;
 default:
 state = 3;
 break;
 }
 return state;
}


/* Function: fsm_func_table @ 0x171C */
int fsm_func_table(int event, int state)
{
 int result; // w0
 int v3; // w8

 switch ( state )
 {
 case 0:
 result = event == 1;
 break;
 case 1:
 if ( event == 99 )
 v3 = 3;
 else
 v3 = 1;
 if ( event == 2 )
 result = 2;
 else
 result = v3;
 break;
 case 2:
 result = 2;
 break;
 case 3:
 if ( event )
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
long long computed_goto(int *labels, int idx)
{
 long long result; // x0

 switch ( idx )
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
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x17C0 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x17C8 */
int overlapped_code(int x)
{
 int v1; // w8
 int v2; // w8

 if ( x >= 0 )
 v1 = x;
 else
 v1 = x + 1;
 v2 = v1 >> 1;
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return v2;
}


/* Function: test_control_flow_l3 @ 0x17E4 */
void test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 int *v2; // x0
 int v3; // w0

 puts(asc_1F4D);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 v2 = (int *)printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 v3 = computed_goto(v2, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v3);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 printf("CF-L3-10 (overlapped_code): %d\n", 16);
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
