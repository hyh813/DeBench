/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_clang_Os_g
 * Processor: pc
 */

#include <emmintrin.h>
#include <smmintrin.h>
#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* Macro for extracting low DWORD from 64-bit value */
#define LODWORD(x) ((unsigned int)(x))

/* Global variables */
static int dword_2090[4] = {10, 20, 30, 50};
static unsigned int unk_20D0[5] = {1, 2, 3, 4, 5};
static unsigned int unk_20F0[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const __m128i xmmword_2010 = {0};
static const __m128i xmmword_2020 = {0};
static const __m128i xmmword_2030 = {0};
static const __m128i xmmword_2040 = {0};
static const __m128i xmmword_2050 = {0};
static const __m128i xmmword_2060 = {0};
static const __m128i xmmword_2070 = {0};
static const __m128i xmmword_2080 = {0};
static const unsigned long long xmmword_26F0 = 0;
static const unsigned long long xmmword_2700 = 0;
static const char *s = "Control Flow Tests - Level 1";
static const char *asc_2699 = "Control Flow Tests - Level 2";
static const char *asc_26BD = "Control Flow Tests - Level 3";
static jmp_buf jump_buffer;

/* Helper functions */
static int recursion_factorial(int n)
{
 if ( n <= 1 )
 return 1;
 return n * recursion_factorial(n - 1);
}

static int triple_value(int x)
{
 return 3 * x;
}

static int double_value(int x)
{
 return 2 * x;
}




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* JUMPOUT(0); */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0x116C */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1174 */
int single_if(int x)
{
 return x << (x > 0);
}


/* Function: if_else @ 0x117E */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x1186 */
int nested_if_2(int a, int b)
{
 int result; // eax

 if ( b < 0 )
 b = 0;
 result = b + a;
 if ( a <= 0 )
 return 0;
 return result;
}


/* Function: nested_if_deep @ 0x1196 */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 if ( a <= 0 )
 return 0;
 if ( b <= 0 )
 return 1;
 if ( c <= 0 )
 return 2;
 if ( d <= 0 )
 return 3;
 return (e > 0) | 4;
}


/* Function: if_elseif_chain @ 0x11C7 */
int if_elseif_chain(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x < 3 )
 return 10 * x + 10;
 return result;
}


/* Function: if_elseif_long @ 0x11DA */
int if_elseif_long(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x < 5 )
 return 100 * x + 100;
 return result;
}


/* Function: switch_small @ 0x11EC */
int switch_small(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 3 )
 return dword_2090[op];
 return result;
}


/* Function: switch_large @ 0x1204 */
int switch_large(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 0xA )
 return 10 * op;
 return result;
}


/* Function: switch_default @ 0x1216 */
int switch_default(int op)
{
 unsigned int v1; // edi
 int result; // eax

 v1 = op - 1;
 result = 0;
 if ( v1 < 3 )
 return 100 * v1 + 100;
 return result;
}


/* Function: switch_fallthrough @ 0x1227 */
int switch_fallthrough(int op)
{
 int v1; // eax
 int result; // eax

 v1 = 0;
 if ( op != 1 )
 {
 if ( op != 2 )
 {
 result = -1;
 if ( op != 3 )
 return result;
 v1 = 12;
 }
 v1 += 2 * op;
 }
 return op + v1;
}


/* Function: loop_for_fixed @ 0x1248 */
int loop_for_fixed(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1) + n - 1;
}


/* Function: loop_while @ 0x1262 */
int loop_while(int x)
{
 int result; // eax
 int v2; // ecx

 if ( !x )
 return 1;
 result = 0;
 do
 {
 v2 = x;
 x /= 10;
 ++result;
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 return result;
}


/* Function: loop_dowhile @ 0x1290 */
int loop_dowhile(int x)
{
 int result; // eax
 int v2; // ecx

 result = 0;
 do
 {
 v2 = x;
 x /= 10;
 ++result;
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 return result;
}


/* Function: loop_nested @ 0x12B4 */
int loop_nested(int m, int n)
{
 int result; // eax
 int v3; // esi

 result = 0;
 if ( n <= 0 )
 n = 0;
 v3 = m * n;
 if ( m > 0 )
 return v3;
 return result;
}


/* Function: loop_break @ 0x12C4 */
int loop_break(int target)
{
 unsigned int *v1; // rcx
 long long v2; // rax

 v1 = &unk_20D0;
 v2 = 0;
 while ( *v1 != target )
 {
 ++v2;
 ++v1;
 if ( v2 == 5 )
 {
 v2 = -1;
 return v2;
 }
 }
 return v2;
}


/* Function: loop_continue @ 0x12E4 */
int loop_continue(int n)
{
 __m128i v1; // xmm0
 __m128i v2; // xmm1
 __m128i si128; // xmm3
 int v4; // ecx
 __m128i v5; // xmm4
 __m128i v6; // xmm2
 int v7; // edx
 __m128i v8; // xmm4
 __m128i v9; // xmm3
 __m128i v10; // xmm3
 __m128i v11; // xmm0

 if ( n <= 0 )
 return 0;
 v1 = _mm_shuffle_epi32(_mm_cvtsi32_si128(n - 1), 0);
 v2 = _mm_setzero_si128();
 si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v4 = 4;
 v5 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 v6 = v2;
 v2 = _mm_add_epi32(_mm_and_si128(_mm_srai_epi32(_mm_slli_epi32(si128, 0x1Fu), 0x1Fu), si128), v2);
 si128 = _mm_add_epi32(si128, v5);
 v7 = v4;
 v4 -= 4;
 }
 while ( ((n + 3) & 0xFFFFFFFC) + v7 != 8 );
 v8 = _mm_load_si128((const __m128i *)&xmmword_2040);
 v9 = _mm_cmpgt_epi32(
 _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v4), 0), (__m128i)xmmword_2030), v8),
 _mm_xor_si128(v1, v8));
 v10 = _mm_or_si128(_mm_andnot_si128(v9, v2), _mm_and_si128(v6, v9));
 v11 = _mm_add_epi32(_mm_shuffle_epi32(v10, 238), v10);
 return _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v11, 85), v11));
}


/* Function: goto_forward @ 0x1390 */
int goto_forward(int x)
{
 int v1; // eax

 v1 = 1;
 if ( x > 0 )
 v1 = x;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0x13A0 */
int goto_backward(int x)
{
 __m128i v1; // xmm0
 __m128i si128; // xmm1
 __m128i v3; // xmm3
 int v4; // ecx
 __m128i v5; // xmm4
 __m128i v6; // xmm2
 int v7; // edx
 __m128i v8; // xmm4
 __m128i v9; // xmm3
 __m128i v10; // xmm3

 if ( x <= 0 )
 return 1;
 v1 = _mm_shuffle_epi32(_mm_cvtsi32_si128(x - 1), 0);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2050);
 v3 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v4 = 4;
 v5 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 v6 = si128;
 si128 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v3, si128), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v3, 245), _mm_shuffle_epi32(si128, 245)), 232));
 v3 = _mm_add_epi32(v3, v5);
 v7 = v4;
 v4 -= 4;
 }
 while ( ((x + 3) & 0xFFFFFFFC) + v7 != 8 );
 v8 = _mm_load_si128((const __m128i *)&xmmword_2040);
 v9 = _mm_cmpgt_epi32(
 _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v4), 0), (__m128i)xmmword_2030), v8),
 _mm_xor_si128(v1, v8));
 v10 = _mm_or_si128(_mm_andnot_si128(v9, si128), _mm_and_si128(v6, v9));
 return _mm_cvtsi128_si32(
 _mm_mul_epu32(
 _mm_mul_epu32(_mm_shuffle_epi32(v10, 238), v10),
 _mm_mul_epu32(_mm_shuffle_epi32(v10, 245), _mm_shuffle_epi32(v10, 255))));
}


/* Function: ternary_op @ 0x146A */
int ternary_op(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1472 */
void test_control_flow_l1()
{
 puts(s);
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


/* Function: loop_multi_exit @ 0x166E */
int loop_multi_exit(int target)
{
 unsigned int *v1; // rdx
 int v2; // ecx
 long long v3; // rsi
 long long i; // rax

 v1 = &unk_20F0;
 v2 = 0;
 v3 = 0;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v1[i] == target )
 return i - v2;
 }
 ++v3;
 v2 -= 10;
 v1 += 4;
 if ( v3 != 3 )
 continue;
 break;
 }
 return -1;
}


/* Function: infinite_loop @ 0x16A3 */
int infinite_loop(volatile int *flag)
{
 int result; // eax

 result = 0;
 while ( *flag != 1 )
 {
 if ( ++result == 1001 )
 {
 *flag = 1;
 return 1001;
 }
 }
 return result;
}


/* Function: multi_return @ 0x16C1 */
int multi_return(int x)
{
 int result; // eax

 if ( x < 0 )
 return -1;
 result = -2;
 if ( (unsigned int)x <= 0x32 )
 {
 result = x + 1;
 if ( (x & 1) == 0 )
 return 2 * x;
 }
 return result;
}


/* Function: conditional_return @ 0x16E4 */
int conditional_return(int x)
{
 int result; // eax

 result = -x;
 if ( x > 0 )
 return 2 * x;
 return result;
}


/* Function: duffs_device @ 0x16F1 */
int duffs_device(int *dst, int *src, int n)
{
 int result; // eax
 signed int v4; // eax
 int v5; // ecx
 int v6; // ecx
 int v7; // ecx
 int v8; // ecx
 int v9; // ecx
 int v10; // ecx
 int v11; // ecx
 int v12; // ecx

 result = -1;
 if ( n > 0 )
 {
 v4 = (unsigned int)(n + 7) >> 3;
 switch ( n & 7 )
 {
 case 0:
 goto LABEL_3;
 case 1:
 goto LABEL_10;
 case 2:
 goto LABEL_9;
 case 3:
 goto LABEL_8;
 case 4:
 goto LABEL_7;
 case 5:
 goto LABEL_6;
 case 6:
 goto LABEL_5;
 case 7:
 while ( 1 )
 {
 v6 = *src++;
 *dst++ = v6;
LABEL_5:
 v7 = *src++;
 *dst++ = v7;
LABEL_6:
 v8 = *src++;
 *dst++ = v8;
LABEL_7:
 v9 = *src++;
 *dst++ = v9;
LABEL_8:
 v10 = *src++;
 *dst++ = v10;
LABEL_9:
 v11 = *src++;
 *dst++ = v11;
LABEL_10:
 v12 = *src++;
 *dst++ = v12;
 if ( v4-- <= 1 )
 break;
LABEL_3:
 v5 = *src++;
 *dst++ = v5;
 }
 result = n;
 break;
 }
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1786 */
int loop_complex_cond(int x)
{
 unsigned int v1; // edx
 int v2; // eax
 unsigned int v3; // esi
 unsigned int v4; // ecx

 if ( x <= 0 )
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
 return v4 + x + v2;
}


/* Function: loop_modify_var @ 0x17B4 */
int loop_modify_var(int n)
{
 int v1; // ecx
 int result; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v1 = 0;
 result = 0;
 do
 {
 result += v1;
 v3 = v1 + 2;
 if ( v1 < 6 )
 v3 = v1;
 v1 = v3 + 1;
 }
 while ( v3 + 1 < n );
 return result;
}


/* Function: loop_external_state @ 0x17D3 */
int loop_external_state(volatile int *flag)
{
 int result; // eax

 result = 0;
 while ( !*flag )
 {
 if ( ++result == 101 )
 return 101;
 }
 return result;
}


/* Function: tail_recursion @ 0x18C0 */
int tail_recursion(int n, int acc)
{
 int result; // eax
 __m128i v3; // xmm2
 bool v4; // cf
 unsigned int v5; // edi
 __m128i v6; // xmm0
 __m128i v7; // xmm1
 __m128i v8; // xmm3
 int v9; // eax
 __m128i si128; // xmm4
 __m128i v11; // xmm2
 int v12; // edx
 __m128i v13; // xmm4
 __m128i v14; // xmm3
 __m128i v15; // xmm3

 result = acc;
 if ( n >= 2 )
 {
 v3 = _mm_cvtsi32_si128(n);
 v4 = (unsigned int)n < 2;
 v5 = n - 2;
 if ( v4 )
 v5 = 0;
 v6 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
 v7 = _mm_cvtsi32_si128(acc);
 v8 = _mm_add_epi32(_mm_shuffle_epi32(v3, 0), (__m128i)xmmword_2060);
 v9 = 4;
 si128 = _mm_load_si128((const __m128i *)&xmmword_2070);
 do
 {
 v11 = v7;
 v7 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v7, v8), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v7, 245), _mm_shuffle_epi32(v8, 245)), 232));
 v8 = _mm_add_epi32(v8, si128);
 v12 = v9;
 v9 -= 4;
 }
 while ( ((v5 + 4) & 0xFFFFFFFC) + v12 != 8 );
 v13 = _mm_load_si128((const __m128i *)&xmmword_2040);
 v14 = _mm_cmpgt_epi32(
 _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v9), 0), (__m128i)xmmword_2030), v13),
 _mm_xor_si128(v6, v13));
 v15 = _mm_or_si128(_mm_andnot_si128(v14, v7), _mm_and_si128(v11, v14));
 return _mm_cvtsi128_si32(
 _mm_mul_epu32(
 _mm_mul_epu32(_mm_shuffle_epi32(v15, 238), v15),
 _mm_mul_epu32(_mm_shuffle_epi32(v15, 245), _mm_shuffle_epi32(v15, 255))));
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1998 */
int indirect_recursion_a(int n, int depth)
{
 int result; // eax
 int i; // esi
 int v4; // eax

 result = n;
 if ( depth > 0 )
 {
 for ( i = depth + 2; i >= 3; i -= 2 )
 {
 if ( (result & 1) != 0 )
 {
 v4 = 3 * result;
 if ( i == 3 )
 return v4 + 1;
 result = v4 + 2;
 }
 else
 {
 if ( i == 3 )
 {
 result /= 2;
 return result;
 }
 result = result / 2 + 1;
 }
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x19D3 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x19DA */
int call_func_ptr_array(int idx, int x)
{
 __m128i v2; // xmm0
 unsigned int v3; // edi
 __m128i v4; // xmm3
 __m128i v5; // xmm0
 __m128i si128; // xmm1
 int v7; // ecx
 __m128i v8; // xmm4
 __m128i v9; // xmm2
 int v10; // edx
 __m128i v11; // xmm4
 __m128i v12; // xmm3
 __m128i v13; // xmm3
 int result; // eax

 switch ( x )
 {
 case 0:
 result = 2 * x;
 break;
 case 1:
 result = 3 * x;
 break;
 case 2:
 result = 1;
 if ( x >= 2 )
 {
 v2 = _mm_cvtsi32_si128(x);
 v3 = x - 2;
 v4 = _mm_add_epi32(_mm_shuffle_epi32(v2, 0), (__m128i)xmmword_2060);
 v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v3), 0);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2050);
 v7 = 4;
 v8 = _mm_load_si128((const __m128i *)&xmmword_2070);
 do
 {
 v9 = si128;
 si128 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v4, si128), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v4, 245), _mm_shuffle_epi32(si128, 245)), 232));
 v4 = _mm_add_epi32(v4, v8);
 v10 = v7;
 v7 -= 4;
 }
 while ( ((v3 + 4) & 0xFFFFFFFC) + v10 != 8 );
 v11 = _mm_load_si128((const __m128i *)&xmmword_2040);
 v12 = _mm_cmpgt_epi32(
 _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v7), 0), (__m128i)xmmword_2030), v11),
 _mm_xor_si128(v5, v11));
 v13 = _mm_or_si128(_mm_andnot_si128(v12, si128), _mm_and_si128(v9, v12));
 result = _mm_cvtsi128_si32(
 _mm_mul_epu32(
 _mm_mul_epu32(_mm_shuffle_epi32(v13, 238), v13),
 _mm_mul_epu32(_mm_shuffle_epi32(v13, 245), _mm_shuffle_epi32(v13, 255))));
 }
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: call_virtual_func @ 0x19FB */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x19FF */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 long long v4; // rbx
 int v5; // ebp

 if ( n <= 0 )
 return 0;
 v4 = 0;
 v5 = 0;
 do
 v5 += cb(arr[v4++]);
 while ( n != v4 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1A38 */
void test_control_flow_l2()
{
 unsigned int *v0; // rcx
 int v1; // eax
 long long v2; // rdx
 long long i; // rsi
 int v4; // esi
 int v5; // ebx
 unsigned int v6; // ebp
 int v7; // ebx
 int v8; // eax
 int v9; // eax
 unsigned int v10; // ecx
 int v11; // ebp
 int v12[8]; // [rsp+10h] [rbp-58h] BYREF
 unsigned long long v13[3]; // [rsp+30h] [rbp-38h] BYREF

 puts(asc_2699);
 v0 = &unk_20F0;
 v1 = 0;
 v2 = 0;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v0[i] == 7 )
 {
 v4 = i - v1;
 goto LABEL_8;
 }
 }
 ++v2;
 v1 -= 10;
 v0 += 4;
 if ( v2 != 3 )
 continue;
 break;
 }
 v4 = -1;
LABEL_8:
 v5 = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n", v4);
 do
 ++v5;
 while ( v5 != 1001 );
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 v6 = -1;
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v7 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 v13[1] = xmmword_2700;
 v13[0] = xmmword_26F0;
 v8 = duffs_device(v12, (int *)v13, 8);
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
 v11 = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n", v7);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
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


/* Function: non_local_jump @ 0x1C5D */
int non_local_jump(int x)
{
 int v1; // eax
 int v2; // ecx

 v1 = _setjmp(jump_buffer);
 v2 = -1;
 if ( !v1 )
 {
 if ( x < 0 )
 longjmp(jump_buffer, 1);
 if ( (unsigned int)x >= 0x65 )
 longjmp(jump_buffer, 2);
 return 2 * x;
 }
 return v2;
}


/* Function: cpp_exception @ 0x1CA8 */
int cpp_exception(int x)
{
 int v1; // ecx
 int result; // eax

 v1 = -2;
 if ( x < 101 )
 v1 = 2 * x;
 result = -1;
 if ( x >= 0 )
 return v1;
 return result;
}


/* Function: large_jump_table @ 0x1CC1 */
int large_jump_table(int op, int a, int b)
{
 int result; // eax

 switch ( a )
 {
 case 0:
 result = a + b;
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


/* Function: conditional_func_ptr @ 0x1D24 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // rcx
 int ( *v3)(int); // rax

 v2 = recursion_factorial;
 if ( mode == 1 )
 v2 = triple_value;
 v3 = double_value;
 if ( mode )
 v3 = v2;
 return v3(x);
}


/* Function: state_machine @ 0x1D4A */
int state_machine(int event, int state)
{
 int result; // eax

 result = state;
 switch ( state )
 {
 case 0:
 result = event == 1;
 break;
 case 1:
 result = 2 * (event == 99) + 1;
 if ( event == 2 )
 result = 2;
 break;
 case 2:
 return result;
 case 3:
 result = 3 * (event != 0);
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x1D90 */
int fsm_func_table(int event, int state)
{
 int result; // eax

 switch ( state )
 {
 case 0:
 result = event == 1;
 break;
 case 1:
 result = 2 * (event == 99) + 1;
 if ( event == 2 )
 result = 2;
 break;
 case 2:
 result = 2;
 break;
 case 3:
 result = 3 * (event != 0);
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: computed_goto @ 0x1DD4 */
long long computed_goto(int *labels, int idx)
{
 long long result; // rax

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


/* Function: obfuscated_cf @ 0x1E00 */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x1E04 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x1E08 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x1E1E */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax

 puts(asc_26BD);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 v2 = computed_goto((int *)"CF-L3-06 (fsm_func_table): %d\n", 2);
 printf("CF-L3-07 (computed_goto): %d\n", v2);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x1F23 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x1F38 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x5130 */

/* FAILED to decompile: puts @ 0x5138 */

/* FAILED to decompile: printf @ 0x5140 */

/* FAILED to decompile: _setjmp @ 0x5148 */

/* FAILED to decompile: longjmp @ 0x5150 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5158 */

/* FAILED to decompile: __gmon_start__ @ 0x5168 */

/* Total functions decompiled: 56, failed: 7 */
