/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_gcc_O3_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <emmintrin.h>
#include <setjmp.h>

/* Global variables */
jmp_buf jump_buffer;

/* Forward declarations */
long long test_control_flow_l1(int argc, const char **argv, const char **envp);
unsigned long long test_control_flow_l2(void);

/* SIMD constants */
static const int32_t xmmword_3660[4] = {1, 2, 3, 4};
static const int32_t xmmword_3670[4] = {1, 1, 1, 1};
static const int32_t xmmword_3680[4] = {2, 2, 2, 2};
static const int32_t xmmword_3690[4] = {0, 0, 0, 0};
static const int32_t xmmword_3650[4] = {0, 0, 0, 0};

/* String constants */
static const char s[] = "Control Flow Tests";
static const char asc_3118[] = "L2 Tests";
static const char asc_32B8[] = "L3 Tests";

/* Jump table for switch_small */
static const long long CSWTCH_55[4] = {10, 20, 30, 40};

/* Labels for computed_goto */
static void *loc_2618;
static void *loc_2640;
static void *loc_2650;
static void *loc_2660;

/* External function */
extern void (*_gmon_start__)(void);

/* Type definitions */
typedef int _BOOL8;

/* Function: .init_proc @ 0x1000 */
void init_proc(void)
{
 if ( _gmon_start__ )
 _gmon_start__();
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: main @ 0x10E0 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1(argc, argv, envp);
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0x1200 */
long long recursion_factorial(int a1)
{
 long long result; // rax
 int v2; // edx

 result = 1;
 if ( a1 > 1 )
 {
 do
 {
 v2 = a1--;
 result = (unsigned int)(v2 * result);
 }
 while ( a1 != 1 );
 }
 return result;
}


/* Function: double_value @ 0x1220 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x1230 */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0x1240 */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x1250 */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x1260 */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x1270 */
long long op_div(int a1, signed int a2)
{
 unsigned int v2; // r8d

 v2 = a2;
 if ( a2 )
 return (unsigned int)(a1 / a2);
 return v2;
}


/* Function: op_mod @ 0x1290 */
long long op_mod(int a1, signed int a2)
{
 unsigned int v2; // r8d

 v2 = a2;
 if ( a2 )
 return (unsigned int)(a1 % a2);
 return v2;
}


/* Function: op_and @ 0x12B0 */
long long op_and(unsigned int a1, int a2)
{
 return a2 & a1;
}


/* Function: op_or @ 0x12C0 */
long long op_or(unsigned int a1, int a2)
{
 return a2 | a1;
}


/* Function: op_xor @ 0x12D0 */
long long op_xor(unsigned int a1, int a2)
{
 return a2 ^ a1;
}


/* Function: op_shl @ 0x12E0 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x12F0 */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0x1300 */
_BOOL8 state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x1310 */
long long state_processing(int a1)
{
 if ( a1 == 2 )
 return 2;
 else
 return 2 * (unsigned int)(a1 == 99) + 1;
}


/* Function: state_done @ 0x1340 */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0x1350 */
long long state_error(unsigned int a1)
{
 long long result; // rax

 result = a1;
 if ( a1 )
 return 3;
 return result;
}


/* Function: computed_goto.constprop.0 @ 0x1370 */
long long computed_goto_constprop_0()
{
 return 20;
}


/* Function: non_local_jump.constprop.0 @ 0x1380 */
long long non_local_jump_constprop_0()
{
 return setjmp(jump_buffer) == 0 ? 10 : -1;
}


/* Function: sequential_ops @ 0x13B0 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x13C0 */
long long single_if(int a1)
{
 long long result; // rax

 result = (unsigned int)(2 * a1);
 if ( a1 <= 0 )
 return (unsigned int)a1;
 return result;
}


/* Function: if_else @ 0x13D0 */
_BOOL8 if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x13E0 */
long long nested_if_2(int a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a1 > 0 )
 {
 result = (unsigned int)(a1 + a2);
 if ( a2 <= 0 )
 return (unsigned int)a1;
 }
 return result;
}


/* Function: nested_if_deep @ 0x1400 */
long long nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 long long result; // rax

 result = 0;
 if ( a1 > 0 )
 {
 result = 1;
 if ( a2 > 0 )
 {
 if ( a3 <= 0 )
 {
 return 2;
 }
 else if ( a4 <= 0 )
 {
 return 3;
 }
 else
 {
 return (unsigned int)(a5 > 0) + 4;
 }
 }
 }
 return result;
}


/* Function: if_elseif_chain @ 0x1450 */
long long if_elseif_chain(int a1)
{
 long long result; // rax

 result = 10;
 if ( a1 )
 {
 if ( a1 == 1 )
 {
 return 20;
 }
 else
 {
 result = 30;
 if ( a1 != 2 )
 return 0xFFFFFFFFLL;
 }
 }
 return result;
}


/* Function: if_elseif_long @ 0x1480 */
long long if_elseif_long(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 4 )
 return 100 * (a1 + 1);
 return result;
}


/* Function: switch_small @ 0x14A0 */
long long switch_small(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 3 )
 return CSWTCH_55[a1];
 return result;
}


/* Function: switch_large @ 0x14C0 */
long long switch_large(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 9 )
 return 10 * a1;
 return result;
}


/* Function: switch_default @ 0x14E0 */
long long switch_default(int a1)
{
 long long result; // rax

 result = 0;
 if ( (unsigned int)(a1 - 1) <= 2 )
 return (unsigned int)(100 * a1);
 return result;
}


/* Function: switch_fallthrough @ 0x1500 */
long long switch_fallthrough(int a1)
{
 if ( a1 == 2 )
 return 6;
 if ( a1 == 3 )
 return 21;
 return 2 * (unsigned int)(a1 == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1540 */
long long loop_for_fixed(int a1)
{
 __m128i si128; // xmm1
 int v2; // eax
 __m128i v3; // xmm0
 __m128i v4; // xmm3
 __m128i v5; // xmm2
 unsigned int v6; // ecx
 __m128i v7; // xmm0
 long long result; // rax
 int v9; // ecx

 if ( a1 <= 0 )
 return 0;
 if ( (unsigned int)(a1 - 1) <= 9 )
 {
 v6 = 0;
 result = 0;
 }
 else
 {
 si128 = _mm_setzero_si128();
 v2 = 0;
 v3 = _mm_setzero_si128();
 v4 = _mm_load_si128((const __m128i *)&xmmword_3660);
 do
 {
 v5 = si128;
 ++v2;
 si128 = _mm_add_epi32(si128, v4);
 v3 = _mm_add_epi32(v3, v5);
 }
 while ( (unsigned int)a1 >> 2 != v2 );
 v6 = a1 & 0xFFFFFFFC;
 v7 = _mm_add_epi32(v3, _mm_srli_si128(v3, 8));
 v7 = _mm_add_epi32(v7, _mm_srli_si128(v7, 4));
 result = (unsigned int)_mm_cvtsi128_si32(v7);
 if ( (a1 & 3) == 0 )
 return result;
 }
 result = v6 + (unsigned int)result;
 if ( a1 > (int)(v6 + 1) )
 {
 result = v6 + 1 + (unsigned int)result;
 if ( a1 > (int)(v6 + 2) )
 {
 result = v6 + 2 + (unsigned int)result;
 if ( a1 > (int)(v6 + 3) )
 {
 result = v6 + 3 + (unsigned int)result;
 if ( a1 > (int)(v6 + 4) )
 {
 result = v6 + 4 + (unsigned int)result;
 if ( a1 > (int)(v6 + 5) )
 {
 result = v6 + 5 + (unsigned int)result;
 if ( a1 > (int)(v6 + 6) )
 {
 result = v6 + 6 + (unsigned int)result;
 if ( a1 > (int)(v6 + 7) )
 {
 result = v6 + 7 + (unsigned int)result;
 if ( a1 > (int)(v6 + 8) )
 {
 result = v6 + 8 + (unsigned int)result;
 v9 = v6 + 9;
 if ( a1 > v9 )
 return (unsigned int)(result + v9);
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: loop_while @ 0x1620 */
long long loop_while(int a1)
{
 unsigned int v1; // r8d

 if ( !a1 )
 return 1;
 v1 = 0;
 do
 {
 ++v1;
 a1 /= 10;
 }
 while ( a1 );
 return v1;
}


/* Function: loop_dowhile @ 0x1670 */
long long loop_dowhile(int a1)
{
 unsigned int v1; // r8d

 v1 = 0;
 do
 {
 ++v1;
 a1 /= 10;
 }
 while ( a1 );
 return v1;
}


/* Function: loop_nested @ 0x16B0 */
long long loop_nested(int a1, int a2)
{
 int v2; // edx
 long long result; // rax

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 if ( a2 > 0 )
 result = (unsigned int)(a2 + result);
 ++v2;
 }
 while ( a1 != v2 );
 return result;
}


/* Function: loop_break @ 0x16E0 */
long long loop_break(int a1)
{
 switch ( a1 )
 {
 case 10:
 return 0;
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 }
 return 5 * (unsigned int)(a1 == 50) - 1;
}


/* Function: loop_continue @ 0x1730 */
long long loop_continue(int a1)
{
 __m128i v1; // xmm1
 __m128i si128; // xmm2
 int v3; // eax
 __m128i v4; // xmm6
 __m128i v5; // xmm5
 __m128i v6; // xmm3
 __m128i v7; // xmm1
 unsigned int v8; // edx
 long long result; // rax
 unsigned int v10; // ecx
 unsigned int v11; // esi
 bool v12; // zf
 int v13; // ecx
 unsigned int v14; // esi
 int v15; // ecx
 int v16; // edx

 if ( a1 <= 0 )
 return 0;
 if ( (unsigned int)(a1 - 1) <= 4 )
 {
 v8 = 1;
 result = 1;
 }
 else
 {
 v1 = 0;
 si128 = _mm_load_si128((const __m128i *)&xmmword_3670);
 v3 = 0;
 v4 = _mm_load_si128((const __m128i *)&xmmword_3660);
 v5 = _mm_load_si128((const __m128i *)&xmmword_3680);
 do
 {
 v6 = si128;
 ++v3;
 si128 = _mm_add_epi32(si128, v4);
 v1 = _mm_add_epi32(v1, _mm_andnot_si128(_mm_cmpeq_epi32(_mm_and_si128(v6, v5), (__m128i)0LL), v6));
 }
 while ( (unsigned int)a1 >> 2 != v3 );
 v7 = _mm_add_epi32(v1, _mm_srli_si128(v1, 8));
 v8 = (a1 & 0xFFFFFFFC) + 1;
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(v7, _mm_srli_si128(v7, 4)));
 if ( a1 == (a1 & 0xFFFFFFFC) )
 return result;
 if ( (v8 & 1) != 0 )
 result = v8 + (unsigned int)result;
 }
 v10 = v8 + 1;
 if ( (int)(v8 + 1) <= a1 )
 {
 v11 = result + v10;
 v12 = (v10 & 1) == 0;
 v13 = v8 + 2;
 if ( !v12 )
 result = v11;
 if ( a1 >= v13 )
 {
 v14 = result + v13;
 v12 = (v13 & 1) == 0;
 v15 = v8 + 3;
 if ( !v12 )
 result = v14;
 if ( a1 >= v15 )
 {
 if ( (v15 & 1) != 0 )
 result = (unsigned int)(result + v15);
 v16 = v8 + 4;
 if ( a1 >= v16 && (v16 & 1) != 0 )
 return (unsigned int)(result + v16);
 }
 }
 }
 return result;
}


/* Function: goto_forward @ 0x1820 */
long long goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0x1830 */
long long goto_backward(int a1)
{
 unsigned int v1; // r8d
 int v2; // edi
 int v3; // eax

 v1 = 1;
 if ( a1 > 0 )
 {
 v2 = a1 + 1;
 v3 = 1;
 do
 v1 *= v3++;
 while ( v2 != v3 );
 }
 return v1;
}


/* Function: ternary_op @ 0x1860 */
long long ternary_op(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a1;
 if ( (int)a2 >= (int)a1 )
 return a2;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1870 */
long long test_control_flow_l1(int argc, const char **argv, const char **envp)
{
 puts(s);
 __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
 __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
 __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
 __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 2);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", -1);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1B00 */
long long loop_multi_exit(int a1)
{
 int v1; // eax
 int v2; // eax
 long long result; // rax
 int v4; // edx

 switch ( a1 )
 {
 case 1:
 v1 = 0;
 goto LABEL_15;
 case 2:
 v2 = 0;
 return (unsigned int)(10 * v2 + 1);
 case 3:
 v1 = 0;
 goto LABEL_20;
 case 4:
 v1 = 0;
LABEL_22:
 v4 = 3;
 return (unsigned int)(v4 + 10 * v1);
 case 5:
 v1 = 1;
 goto LABEL_15;
 case 6:
 v2 = 1;
 return (unsigned int)(10 * v2 + 1);
 case 7:
 v1 = 1;
 goto LABEL_20;
 case 8:
 v1 = 1;
 goto LABEL_22;
 }
 v1 = 2;
 if ( a1 == 9 )
 {
LABEL_15:
 v4 = 0;
 return (unsigned int)(v4 + 10 * v1);
 }
 v2 = 2;
 if ( a1 == 10 )
 return (unsigned int)(10 * v2 + 1);
 v1 = 2;
 if ( a1 == 11 )
 {
LABEL_20:
 v4 = 2;
 return (unsigned int)(v4 + 10 * v1);
 }
 result = 0xFFFFFFFFLL;
 if ( a1 == 12 )
 {
 v1 = 2;
 goto LABEL_22;
 }
 return result;
}


/* Function: infinite_loop @ 0x1BB0 */
long long infinite_loop(unsigned int *a1)
{
 long long result; // rax

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


/* Function: multi_return @ 0x1BE0 */
long long multi_return(int a1)
{
 long long result; // rax

 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 result = (unsigned int)(2 * a1);
 if ( (int)result > 100 )
 return 4294967294LL;
 if ( (a1 & 1) != 0 )
 return (unsigned int)(a1 + 1);
 return result;
}


/* Function: conditional_return @ 0x1C10 */
long long conditional_return(int a1)
{
 long long result; // rax

 if ( a1 > 0 )
 return (unsigned int)(2 * a1);
 result = (unsigned int)-a1;
 if ( !a1 )
 return 0;
 return result;
}


/* Function: duffs_device @ 0x1C30 */
long long duffs_device(int *a1, int *a2, int a3)
{
 int *v4; // rcx
 unsigned int v5; // r8d
 int v6; // edx
 int *v7; // rdi
 int *v8; // rsi
 int v9; // esi
 int v10; // esi
 int *v11; // rdi
 int *v12; // rsi
 int *v13; // rdi
 int *v14; // rsi

 v4 = a2;
 v5 = a3;
 if ( a3 <= 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v6 = (a3 + 7) >> 3;
 switch ( v5 & 7 )
 {
 case 0u:
 v7 = a2;
 v8 = a1;
 goto LABEL_4;
 case 1u:
 goto LABEL_11;
 case 2u:
 v13 = a2;
 v14 = a1;
 goto LABEL_10;
 case 3u:
 goto LABEL_9;
 case 4u:
 v11 = a2;
 v12 = a1;
 goto LABEL_8;
 case 5u:
 goto LABEL_7;
 case 6u:
 goto LABEL_6;
 case 7u:
 while ( 1 )
 {
 v9 = *v4;
 ++a1;
 ++v4;
 *(a1 - 1) = v9;
LABEL_6:
 v10 = *v4;
 ++a1;
 ++v4;
 *(a1 - 1) = v10;
LABEL_7:
 v11 = v4 + 1;
 v12 = a1 + 1;
 *a1 = *v4;
LABEL_8:
 v4 = v11 + 1;
 a1 = v12 + 1;
 *v12 = *v11;
LABEL_9:
 v13 = v4 + 1;
 v14 = a1 + 1;
 *a1 = *v4;
LABEL_10:
 v4 = v13 + 1;
 a1 = v14 + 1;
 *v14 = *v13;
LABEL_11:
 *a1 = *v4;
 if ( !--v6 )
 break;
 v7 = v4 + 1;
 v8 = a1 + 1;
LABEL_4:
 v4 = v7 + 1;
 a1 = v8 + 1;
 *v8 = *v7;
 }
 break;
 }
 }
 return v5;
}


/* Function: loop_complex_cond @ 0x1D00 */
long long loop_complex_cond(int a1)
{
 int v1; // edx
 int v2; // eax
 int v3; // ecx

 if ( a1 <= 0 )
 return (unsigned int)a1;
 v1 = a1 - 1;
 if ( a1 - 1 <= 2 )
 {
 v2 = 1;
 v3 = 2;
 }
 else
 {
 v1 = a1 - 2;
 if ( a1 - 2 <= 4 )
 {
 v2 = 2;
 v3 = 4;
 }
 else
 {
 v1 = a1 - 3;
 if ( a1 - 3 <= 6 )
 {
 v2 = 3;
 v3 = 6;
 }
 else
 {
 v1 = a1 - 4;
 if ( a1 - 4 <= 8 )
 {
 v2 = 4;
 v3 = 8;
 }
 else
 {
 v1 = a1 - 5;
 if ( a1 - 5 <= 10 )
 {
 v2 = 5;
 v3 = 10;
 }
 else
 {
 v1 = a1 - 6;
 if ( a1 - 6 <= 12 )
 {
 v2 = 6;
 v3 = 12;
 }
 else
 {
 v1 = a1 - 7;
 if ( a1 - 7 <= 14 )
 {
 v2 = 7;
 v3 = 14;
 }
 else
 {
 v1 = a1 - 8;
 if ( a1 - 8 <= 16 )
 {
 v2 = 8;
 v3 = 16;
 }
 else
 {
 v1 = a1 - 9;
 if ( a1 - 9 <= 18 )
 {
 v2 = 9;
 v3 = 18;
 }
 else
 {
 v1 = a1 - 10;
 v2 = 10;
 v3 = 20;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return (unsigned int)(v3 + v1 + v2);
}


/* Function: loop_modify_var @ 0x1DE0 */
long long loop_modify_var(int a1)
{
 unsigned int v1; // r8d
 int v2; // eax
 int i; // edx
 int v4; // ecx

 v1 = 0;
 if ( a1 > 0 )
 {
 v2 = 1;
 if ( a1 != 1 )
 {
 v1 = 1;
 while ( a1 > v2 + 1 )
 {
 v4 = v2++;
 for ( i = v4; ; i += 3 )
 {
 v1 += v2;
 if ( v2 <= 5 )
 break;
 v2 = i + 4;
 if ( a1 <= i + 4 )
 return v1;
 }
 }
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1E30 */
long long loop_external_state(unsigned int *a1)
{
 long long result; // rax

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


/* Function: tail_recursion @ 0x1E50 */
long long tail_recursion(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 1 )
 {
 do
 {
 result = (unsigned int)(a1 * result);
 --a1;
 }
 while ( a1 != 1 );
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1E70 */
long long indirect_recursion_a(int a1, int a2)
{
 long long result; // rax
 int v3; // ecx
 int v4; // eax
 int v5; // edi
 int v6; // eax
 int v7; // edi

 result = (unsigned int)a1;
 v3 = a2 - 4;
 if ( a2 > 0 )
 {
 while ( 1 )
 {
 if ( (a1 & 1) != 0 )
 {
 v4 = 3 * a1;
 if ( a2 == 1 )
 return (unsigned int)(v4 + 1);
 result = (unsigned int)(v4 + 2);
 if ( a2 <= 2 )
 return result;
 if ( (result & 1) == 0 )
 {
LABEL_15:
 v7 = (int)result / 2;
 result = (unsigned int)((int)result / 2);
 if ( a2 == 3 )
 return result;
 v6 = v3;
 a1 = v7 + 1;
 goto LABEL_8;
 }
 }
 else
 {
 result = (unsigned int)(a1 / 2);
 if ( a2 == 1 )
 return result;
 result = (unsigned int)(a1 / 2 + 1);
 if ( a2 <= 2 )
 return result;
 if ( (((unsigned char)(a1 / 2) + 1) & 1) == 0 )
 goto LABEL_15;
 }
 v5 = 3 * result;
 if ( a2 == 3 )
 return (unsigned int)(v5 + 1);
 v6 = v3;
 a1 = v5 + 2;
LABEL_8:
 v3 -= 4;
 a2 -= 4;
 if ( !v6 )
 return (unsigned int)a1;
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x1F00 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1F10 */
long long call_func_ptr_array(unsigned int a1, unsigned int a2)
{
 void *v3[2]; // [rsp+0h] [rbp-18h]
 long long ( *v4)(int); // [rsp+10h] [rbp-18h]
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v4 = recursion_factorial;
 v3[0] = (void *)triple_value;
 v3[1] = (void *)double_value;
 if ( a1 > 2 )
 return 0xFFFFFFFFLL;
 else
 return ((long long ( *)(unsigned long long))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1FA0 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1FB0 */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(long long))
{
 unsigned int *v4; // rbx
 unsigned int v5; // r12d
 long long v6; // r13
 long long v7; // rdi

 if ( a2 <= 0 )
 return 0;
 v4 = a1;
 v5 = 0;
 v6 = (long long)&a1[a2 - 1 + 1];
 do
 {
 v7 = *v4++;
 v5 += a3(v7);
 }
 while ( v4 != (unsigned int *)v6 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x2020 */
unsigned long long test_control_flow_l2()
{
 int i; // edx
 int v1; // eax
 int v2; // eax
 int j; // ecx
 int v4; // edx
 int v5; // esi
 int k; // edx
 __m128i v8[2]; // [rsp+10h] [rbp-58h] BYREF
 unsigned long long v9[2]; // [rsp+30h] [rbp-38h] BYREF
 unsigned long long v10; // [rsp+58h] [rbp-10h]

 v10 = __readfsqword(0x28u);
 puts(asc_3118);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v8[0] = _mm_load_si128((const __m128i *)&xmmword_3670);
 v8[1] = _mm_load_si128((const __m128i *)&xmmword_3690);
 memset(v9, 0, sizeof(v9));
 v1 = duffs_device((int *)v9, (int *)v8, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v1);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v2 = 1;
 v4 = 1;
LABEL_7:
 v5 = v2++;
 for ( j = v5; ; j += 3 )
 {
 v4 += v2;
 if ( v2 <= 5 )
 goto LABEL_7;
 if ( j != 5 )
 break;
 v2 = 9;
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 for ( k = 0; k != 101; ++k )
 ;
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", 101);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", 30);
 return v10 - __readfsqword(0x28u);
}


/* Function: non_local_jump @ 0x22D0 */
long long non_local_jump(int a1)
{
 if ( setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( a1 < 0 )
 return (unsigned long)longjmp(jump_buffer, 1);
 if ( a1 > 100 )
 return (unsigned long)longjmp(jump_buffer, 2);
 return (unsigned int)(2 * a1);
}
long long cpp_exception(int a1)
{
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 > 100 )
 return 4294967294LL;
 return (unsigned int)(2 * a1);
}


/* Function: large_jump_table @ 0x2370 */
long long large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned long long v4[5]; // [rsp+0h] [rbp-68h]
 unsigned long long v5; // [rsp+58h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v4[0] = _mm_cvtsi128_si64(_mm_unpacklo_epi64(_mm_set_epi64x((long long)op_add, (long long)op_sub), _mm_set_epi64x(0, 0)));
 v4[1] = _mm_cvtsi128_si64(_mm_unpacklo_epi64(_mm_set_epi64x((long long)op_mul, (long long)op_div), _mm_set_epi64x(0, 0)));
 v4[2] = _mm_cvtsi128_si64(_mm_unpacklo_epi64(_mm_set_epi64x((long long)op_mod, (long long)op_and), _mm_set_epi64x(0, 0)));
 v4[3] = _mm_cvtsi128_si64(_mm_unpacklo_epi64(_mm_set_epi64x((long long)op_or, (long long)op_xor), _mm_set_epi64x(0, 0)));
 v4[4] = _mm_cvtsi128_si64(_mm_unpacklo_epi64(_mm_set_epi64x((long long)op_shl, (long long)op_shr), _mm_set_epi64x(0, 0)));
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return (*((long long ( **)(unsigned long long, unsigned long long))v4 + (int)a1))(a2, a3);
}


/* Function: conditional_func_ptr @ 0x2470 */
long long conditional_func_ptr(int a1, int a2)
{
 long long ( *v2)(int); // rdx

 v2 = double_value;
 if ( a1 )
 {
 v2 = triple_value;
 if ( a1 != 1 )
 v2 = recursion_factorial;
 }
 return v2(a2);
}


/* Function: state_machine @ 0x24A0 */
long long state_machine(int a1, int a2)
{
 if ( a2 == 2 )
 return 2;
 if ( a2 > 2 )
 {
 if ( a2 == 3 )
 return a1 != 0 ? 3 : 0;
 return 3;
 }
 if ( a2 )
 {
 if ( a2 == 1 )
 {
 if ( a1 != 2 )
 return 2 * (unsigned int)(a1 == 99) + 1;
 return 2;
 }
 return 3;
 }
 return a1 == 1;
}


/* Function: fsm_func_table @ 0x2510 */
long long fsm_func_table(long long a1, unsigned int a2)
{
 void *v3[4]; // [rsp+0h] [rbp-38h]
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v3[0] = (void *)state_idle;
 v3[1] = (void *)state_processing;
 v3[2] = (void *)state_done;
 v3[3] = (void *)state_error;
 if ( a2 > 3 )
 return 3;
 else
 return (*((long long (**)(void))v3 + (int)a2))();
}


/* Function: computed_goto @ 0x25B0 */
long long computed_goto(long long a1, unsigned int a2)
{
 void *v3[2]; // [rsp+0h] [rbp-38h]
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v3[0] = &loc_2660;
 v3[1] = &loc_2640;
 if ( a2 <= 3 )
 __asm { jmp qword ptr [rsp+rsi*8+38h+var_38] }
 return 0xFFFFFFFFLL;
}


/* Function: obfuscated_cf @ 0x2680 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x2690 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x26A0 */
long long overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x26C0 */
long long test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // edx
 int v3; // eax

 puts(asc_32B8);
 v0 = non_local_jump_constprop_0();
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 v3 = computed_goto_constprop_0(1, "CF-L3-07 (computed_goto): %d\n", v2);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v3);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 return __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: .term_proc @ 0x27FC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6110 */

/* FAILED to decompile: puts @ 0x6118 */

/* FAILED to decompile: __stack_chk_fail @ 0x6120 */

/* FAILED to decompile: _setjmp @ 0x6128 */

/* FAILED to decompile: __printf_chk @ 0x6130 */

/* FAILED to decompile: __longjmp_chk @ 0x6138 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6140 */

/* FAILED to decompile: __gmon_start__ @ 0x6150 */

/* Total functions decompiled: 80, failed: 8 */
