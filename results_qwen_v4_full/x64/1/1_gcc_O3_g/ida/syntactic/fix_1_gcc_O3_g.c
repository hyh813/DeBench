/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_gcc_O3_g
 * Processor: pc
 */

#include <emmintrin.h>
#include <stdbool.h>
#include <setjmp.h>

/* Define __readfsqword for stack canary access */
static unsigned long long __readfsqword(unsigned int offset)
{
 (void)offset;
 return 0;
}

jmp_buf jump_buffer;

/* Global declarations for undeclared identifiers */
const char *s = "Control Flow Test L1";
const char *asc_3118 = "Control Flow Test L2";
char MEMORY[0x10000] = {0};
__m128i xmmword_3650 = {0};
__m128i xmmword_3660 = {0};
__m128i xmmword_3670 = {0};
__m128i xmmword_3680 = {0};
__m128i xmmword_3690 = {0};

int CSWTCH_55[4] = {50, 60, 70, 80};
int dword_0 = 0;







/* Function: main @ 0x10E0 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
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
int recursion_factorial(int n)
{
 int result; // eax
 int v2; // edx

 result = 1;
 if ( n > 1 )
 {
 do
 {
 v2 = n--;
 result *= v2;
 }
 while ( n != 1 );
 }
 return result;
}


/* Function: double_value @ 0x1220 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x1230 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x1240 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x1250 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1260 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x1270 */
int op_div(int a, int b)
{
 int v2; // r8d

 v2 = b;
 if ( b )
 return a / b;
 return v2;
}


/* Function: op_mod @ 0x1290 */
int op_mod(int a, int b)
{
 int v2; // r8d

 v2 = b;
 if ( b )
 return a % b;
 return v2;
}


/* Function: op_and @ 0x12B0 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x12C0 */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x12D0 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x12E0 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x12F0 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x1300 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x1310 */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 else
 return 2 * (event == 99) + 1;
}


/* Function: state_done @ 0x1340 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x1350 */
int state_error(int event)
{
 int result; // eax

 result = event;
 if ( event )
 return 3;
 return result;
}


/* Function: computed_goto_0 @ 0x1370 */
long long computed_goto_0(int *labels, int idx)
{
 return 20;
}


/* Function: non_local_jump_0 @ 0x1380 */
long long non_local_jump_0(int x)
{
 return _setjmp(jump_buffer) == 0 ? 10 : -1;
}


/* Function: sequential_ops @ 0x13B0 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x13C0 */
int single_if(int x)
{
 int result; // eax

 result = 2 * x;
 if ( x <= 0 )
 return x;
 return result;
}


/* Function: if_else @ 0x13D0 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x13E0 */
int nested_if_2(int a, int b)
{
 int result; // eax

 result = 0;
 if ( a > 0 )
 {
 result = a + b;
 if ( b <= 0 )
 return a;
 }
 return result;
}


/* Function: nested_if_deep @ 0x1400 */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 int result; // eax

 result = 0;
 if ( a > 0 )
 {
 result = 1;
 if ( b > 0 )
 {
 if ( c <= 0 )
 {
 return 2;
 }
 else if ( d <= 0 )
 {
 return 3;
 }
 else
 {
 return (e > 0) + 4;
 }
 }
 }
 return result;
}


/* Function: if_elseif_chain @ 0x1450 */
int if_elseif_chain(int x)
{
 int result; // eax

 result = 10;
 if ( x )
 {
 if ( x == 1 )
 {
 return 20;
 }
 else
 {
 result = 30;
 if ( x != 2 )
 return -1;
 }
 }
 return result;
}


/* Function: if_elseif_long @ 0x1480 */
int if_elseif_long(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x <= 4 )
 return 100 * (x + 1);
 return result;
}


/* Function: switch_small @ 0x14A0 */
int switch_small(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 3 )
 return CSWTCH_55[op];
 return result;
}


/* Function: switch_large @ 0x14C0 */
int switch_large(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 9 )
 return 10 * op;
 return result;
}


/* Function: switch_default @ 0x14E0 */
int switch_default(int op)
{
 int result; // eax

 result = 0;
 if ( (unsigned int)(op - 1) <= 2 )
 return 100 * op;
 return result;
}


/* Function: switch_fallthrough @ 0x1500 */
int switch_fallthrough(int op)
{
 if ( op == 2 )
 return 6;
 if ( op == 3 )
 return 21;
 return 2 * (op == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1540 */
int loop_for_fixed(int n)
{
 __m128i si128; // xmm1
 int v2; // eax
 __m128i v3; // xmm0
 __m128i v4; // xmm3
 __m128i v5; // xmm2
 unsigned int v6; // ecx
 __m128i v7; // xmm0
 int result; // eax
 int v9; // ecx

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 9 )
 {
 v6 = 0;
 result = 0;
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_3650);
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
 while ( (unsigned int)n >> 2 != v2 );
 v6 = n & 0xFFFFFFFC;
 v7 = _mm_add_epi32(v3, _mm_srli_si128(v3, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v7, _mm_srli_si128(v7, 4)));
 if ( (n & 3) == 0 )
 return result;
 }
 result += v6;
 if ( n > (int)(v6 + 1) )
 {
 result += v6 + 1;
 if ( n > (int)(v6 + 2) )
 {
 result += v6 + 2;
 if ( n > (int)(v6 + 3) )
 {
 result += v6 + 3;
 if ( n > (int)(v6 + 4) )
 {
 result += v6 + 4;
 if ( n > (int)(v6 + 5) )
 {
 result += v6 + 5;
 if ( n > (int)(v6 + 6) )
 {
 result += v6 + 6;
 if ( n > (int)(v6 + 7) )
 {
 result += v6 + 7;
 if ( n > (int)(v6 + 8) )
 {
 result += v6 + 8;
 v9 = v6 + 9;
 if ( n > v9 )
 result += v9;
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
int loop_while(int x)
{
 int v1; // r8d

 if ( !x )
 return 1;
 v1 = 0;
 do
 {
 ++v1;
 x /= 10;
 }
 while ( x );
 return v1;
}


/* Function: loop_dowhile @ 0x1670 */
int loop_dowhile(int x)
{
 int v1; // r8d

 v1 = 0;
 do
 {
 ++v1;
 x /= 10;
 }
 while ( x );
 return v1;
}


/* Function: loop_nested @ 0x16B0 */
int loop_nested(int m, int n)
{
 int v2; // edx
 int result; // eax

 if ( m <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 if ( n > 0 )
 result += n;
 ++v2;
 }
 while ( m != v2 );
 return result;
}


/* Function: loop_break @ 0x16E0 */
int loop_break(int target)
{
 switch ( target )
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
 return 5 * (target == 50) - 1;
}


/* Function: loop_continue @ 0x1730 */
int loop_continue(int n)
{
 __m128i v1; // xmm1
 __m128i si128; // xmm2
 int v3; // eax
 __m128i v4; // xmm6
 __m128i v5; // xmm5
 __m128i v6; // xmm3
 __m128i v7; // xmm1
 unsigned int v8; // edx
 int result; // eax
 unsigned int v10; // ecx
 int v11; // esi
 bool v12; // zf
 signed int v13; // ecx
 int v14; // esi
 int v15; // ecx
 int v16; // edx

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 4 )
 {
 v8 = 1;
 result = 1;
 }
 else
 {
 v1 = _mm_setzero_si128();
 si128 = _mm_load_si128((const __m128i *)&xmmword_3670);
 v3 = 0;
 v4 = _mm_load_si128((const __m128i *)&xmmword_3660);
 v5 = _mm_load_si128((const __m128i *)&xmmword_3680);
 do
 {
 v6 = si128;
 ++v3;
 si128 = _mm_add_epi32(si128, v4);
 v1 = _mm_add_epi32(v1, _mm_andnot_si128(_mm_cmpeq_epi32(_mm_and_si128(v6, v5), _mm_setzero_si128()), v6));
 }
 while ( (unsigned int)n >> 2 != v3 );
 v7 = _mm_add_epi32(v1, _mm_srli_si128(v1, 8));
 v8 = (n & 0xFFFFFFFC) + 1;
 result = _mm_cvtsi128_si32(_mm_add_epi32(v7, _mm_srli_si128(v7, 4)));
 if ( n == (n & 0xFFFFFFFC) )
 return result;
 if ( (v8 & 1) != 0 )
 result += v8;
 }
 v10 = v8 + 1;
 if ( (int)(v8 + 1) <= n )
 {
 v11 = result + v10;
 v12 = (v10 & 1) == 0;
 v13 = v8 + 2;
 if ( !v12 )
 result = v11;
 if ( n >= v13 )
 {
 v14 = result + v13;
 v12 = (v13 & 1) == 0;
 v15 = v8 + 3;
 if ( !v12 )
 result = v14;
 if ( n >= v15 )
 {
 if ( (v15 & 1) != 0 )
 result += v15;
 v16 = v8 + 4;
 if ( n >= v16 && (v16 & 1) != 0 )
 result += v16;
 }
 }
 }
 return result;
}


/* Function: goto_forward @ 0x1820 */
int goto_forward(int x)
{
 if ( x > 0 )
 x *= x;
 return 2 * x;
}


/* Function: goto_backward @ 0x1830 */
int goto_backward(int x)
{
 int v1; // r8d
 int v2; // edi
 int v3; // eax

 v1 = 1;
 if ( x > 0 )
 {
 v2 = x + 1;
 v3 = 1;
 do
 v1 *= v3++;
 while ( v2 != v3 );
 }
 return v1;
}


/* Function: ternary_op @ 0x1860 */
int ternary_op(int a, int b)
{
 int result; // eax

 result = a;
 if ( b >= a )
 return b;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1870 */
void test_control_flow_l1()
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
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1B00 */
int loop_multi_exit(int target)
{
 int v1; // eax
 int v2; // eax
 int result; // eax
 int v4; // edx

 switch ( target )
 {
 case 1:
 v1 = 0;
 goto LABEL_15;
 case 2:
 v2 = 0;
 return 10 * v2 + 1;
 case 3:
 v1 = 0;
 goto LABEL_20;
 case 4:
 v1 = 0;
LABEL_22:
 v4 = 3;
 return v4 + 10 * v1;
 case 5:
 v1 = 1;
 goto LABEL_15;
 case 6:
 v2 = 1;
 return 10 * v2 + 1;
 case 7:
 v1 = 1;
 goto LABEL_20;
 case 8:
 v1 = 1;
 goto LABEL_22;
 }
 v1 = 2;
 if ( target == 9 )
 {
LABEL_15:
 v4 = 0;
 return v4 + 10 * v1;
 }
 v2 = 2;
 if ( target == 10 )
 return 10 * v2 + 1;
 v1 = 2;
 if ( target == 11 )
 {
LABEL_20:
 v4 = 2;
 return v4 + 10 * v1;
 }
 result = -1;
 if ( target == 12 )
 {
 v1 = 2;
 goto LABEL_22;
 }
 return result;
}


/* Function: infinite_loop @ 0x1BB0 */
int infinite_loop(volatile int *flag)
{
 int result; // eax

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


/* Function: multi_return @ 0x1BE0 */
int multi_return(int x)
{
 int result; // eax

 if ( x < 0 )
 return -1;
 result = 2 * x;
 if ( 2 * x > 100 )
 return -2;
 if ( (x & 1) != 0 )
 return x + 1;
 return result;
}


/* Function: conditional_return @ 0x1C10 */
int conditional_return(int x)
{
 int result; // eax

 if ( x > 0 )
 return 2 * x;
 result = -x;
 if ( !x )
 return 0;
 return result;
}


/* Function: duffs_device @ 0x1C30 */
int duffs_device(int *dst, int *src, int n)
{
 int *v4; // rcx
 int v5; // r8d
 int v6; // edx
 int *v7; // rdi
 int *v8; // rsi
 int v9; // esi
 int v10; // esi
 int *v11; // rdi
 int *v12; // rsi
 int *v13; // rdi
 int *v14; // rsi

 v4 = src;
 v5 = n;
 if ( n <= 0 )
 return -1;
 v6 = (n + 7) >> 3;
 switch ( v5 & 7 )
 {
 case 0:
 v7 = src;
 v8 = dst;
 goto LABEL_4;
 case 1:
 goto LABEL_11;
 case 2:
 v13 = src;
 v14 = dst;
 goto LABEL_10;
 case 3:
 goto LABEL_9;
 case 4:
 v11 = src;
 v12 = dst;
 goto LABEL_8;
 case 5:
 goto LABEL_7;
 case 6:
 goto LABEL_6;
 case 7:
 while ( 1 )
 {
 v9 = *v4;
 ++dst;
 ++v4;
 *(dst - 1) = v9;
LABEL_6:
 v10 = *v4;
 ++dst;
 ++v4;
 *(dst - 1) = v10;
LABEL_7:
 v11 = v4 + 1;
 v12 = dst + 1;
 *dst = *v4;
LABEL_8:
 v4 = v11 + 1;
 dst = v12 + 1;
 *v12 = *v11;
LABEL_9:
 v13 = v4 + 1;
 v14 = dst + 1;
 *dst = *v4;
LABEL_10:
 v4 = v13 + 1;
 dst = v14 + 1;
 *v14 = *v13;
LABEL_11:
 *dst = *v4;
 if ( !--v6 )
 break;
 v7 = v4 + 1;
 v8 = dst + 1;
LABEL_4:
 v4 = v7 + 1;
 dst = v8 + 1;
 *v8 = *v7;
 }
 break;
 }
 return v5;
}


/* Function: loop_complex_cond @ 0x1D00 */
int loop_complex_cond(int x)
{
 int v1; // edx
 int v2; // eax
 int v3; // ecx

 if ( x <= 0 )
 return x;
 v1 = x - 1;
 if ( x - 1 <= 2 )
 {
 v2 = 1;
 v3 = 2;
 }
 else
 {
 v1 = x - 2;
 if ( x - 2 <= 4 )
 {
 v2 = 2;
 v3 = 4;
 }
 else
 {
 v1 = x - 3;
 if ( x - 3 <= 6 )
 {
 v2 = 3;
 v3 = 6;
 }
 else
 {
 v1 = x - 4;
 if ( x - 4 <= 8 )
 {
 v2 = 4;
 v3 = 8;
 }
 else
 {
 v1 = x - 5;
 if ( x - 5 <= 10 )
 {
 v2 = 5;
 v3 = 10;
 }
 else
 {
 v1 = x - 6;
 if ( x - 6 <= 12 )
 {
 v2 = 6;
 v3 = 12;
 }
 else
 {
 v1 = x - 7;
 if ( x - 7 <= 14 )
 {
 v2 = 7;
 v3 = 14;
 }
 else
 {
 v1 = x - 8;
 if ( x - 8 <= 16 )
 {
 v2 = 8;
 v3 = 16;
 }
 else
 {
 v1 = x - 9;
 if ( x - 9 <= 18 )
 {
 v2 = 9;
 v3 = 18;
 }
 else
 {
 v1 = x - 10;
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
 return v3 + v1 + v2;
}


/* Function: loop_modify_var @ 0x1DE0 */
int loop_modify_var(int n)
{
 int v1; // r8d
 int v2; // eax
 int i; // edx
 int v4; // ecx

 v1 = 0;
 if ( n > 0 )
 {
 v2 = 1;
 if ( n != 1 )
 {
 v1 = 1;
 while ( n > v2 + 1 )
 {
 v4 = v2++;
 for ( i = v4; ; i += 3 )
 {
 v1 += v2;
 if ( v2 <= 5 )
 break;
 v2 = i + 4;
 if ( n <= i + 4 )
 return v1;
 }
 }
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1E30 */
int loop_external_state(volatile int *flag)
{
 int result; // eax

 for ( result = 0; result != 101; ++result )
 {
 if ( *flag )
 break;
 }
 return result;
}


/* Function: tail_recursion @ 0x1E50 */
int tail_recursion(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 1 )
 {
 do
 result *= n--;
 while ( n != 1 );
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1E70 */
int indirect_recursion_a(int n, int depth)
{
 int result; // eax
 int v3; // ecx
 int v4; // eax
 int v5; // edi
 int v6; // eax
 int v7; // edi

 result = n;
 v3 = depth - 4;
 if ( depth > 0 )
 {
 while ( 1 )
 {
 if ( (n & 1) != 0 )
 {
 v4 = 3 * n;
 if ( depth == 1 )
 return v4 + 1;
 result = v4 + 2;
 if ( depth <= 2 )
 return result;
 if ( (result & 1) == 0 )
 {
LABEL_15:
 v7 = result / 2;
 result /= 2;
 if ( depth == 3 )
 return result;
 v6 = v3;
 n = v7 + 1;
 goto LABEL_8;
 }
 }
 else
 {
 result = n / 2;
 if ( depth == 1 )
 return result;
 result = n / 2 + 1;
 if ( depth <= 2 )
 return result;
 if ( (result & 1) == 0 )
 goto LABEL_15;
 }
 v5 = 3 * result;
 if ( depth == 3 )
 return v5 + 1;
 v6 = v3;
 n = v5 + 2;
LABEL_8:
 v3 -= 4;
 depth -= 4;
 if ( !v6 )
 return n;
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x1F00 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1F10 */
int call_func_ptr_array(int idx, int x)
{
 int (*funcs[3])(int); // [rsp+0h] [rbp-28h]
 unsigned long long v4; // [rsp+18h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 funcs[2] = recursion_factorial;
 *(__m128i *)funcs = _mm_unpacklo_epi64(
 _mm_set1_epi64x((unsigned long long)double_value),
 _mm_set1_epi64x((unsigned long long)triple_value));
 if ( (unsigned int)idx > 2 )
 return -1;
 else
 return funcs[idx](x);
}


/* Function: call_virtual_func @ 0x1FA0 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1FB0 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int *v4; // rbx
 int v5; // r12d
 int *v6; // r13
 long long v7; // rdi

 if ( n <= 0 )
 return 0;
 v4 = arr;
 v5 = 0;
 v6 = &arr[n - 1 + 1];
 do
 {
 v7 = (unsigned int)*v4++;
 v5 += cb(v7);
 }
 while ( v4 != v6 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x2020 */
void test_control_flow_l2()
{
 int i; // edx
 int v1; // eax
 int v2; // eax
 int j; // ecx
 int v4; // edx
 int v5; // esi
 int k; // edx
 int src[8]; // [rsp+10h] [rbp-58h] BYREF
 int dst[10]; // [rsp+30h] [rbp-38h] BYREF
 unsigned long long v9; // [rsp+58h] [rbp-10h]

 v9 = __readfsqword(0x28u);
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
 *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_3670);
 *(__m128i *)&src[4] = _mm_load_si128((const __m128i *)&xmmword_3690);
 memset(dst, 0, 32);
 v1 = duffs_device(dst, src, 8);
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
}


/* Function: non_local_jump @ 0x22D0 */
int non_local_jump(int x)
{
 if ( _setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 __longjmp_chk(jump_buffer, 1);
 if ( x > 100 )
 __longjmp_chk(jump_buffer, 2);
 return 2 * x;
}


/* Function: cpp_exception @ 0x2340 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x2370 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[10])(int, int); // [rsp+0h] [rbp-68h]
 unsigned long long v5; // [rsp+58h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 *(__m128i *)ops = _mm_unpacklo_epi64(_mm_set1_epi64x((unsigned long long)op_add), _mm_set1_epi64x((unsigned long long)op_sub));
 *(__m128i *)&ops[2] = _mm_unpacklo_epi64(_mm_set1_epi64x((unsigned long long)op_mul), _mm_set1_epi64x((unsigned long long)op_div));
 *(__m128i *)&ops[4] = _mm_unpacklo_epi64(_mm_set1_epi64x((unsigned long long)op_mod), _mm_set1_epi64x((unsigned long long)op_and));
 *(__m128i *)&ops[6] = _mm_unpacklo_epi64(_mm_set1_epi64x((unsigned long long)op_or), _mm_set1_epi64x((unsigned long long)op_xor));
 *(__m128i *)&ops[8] = _mm_unpacklo_epi64(_mm_set1_epi64x((unsigned long long)op_shl), _mm_set1_epi64x((unsigned long long)op_shr));
 if ( (unsigned int)op > 9 )
 return -1;
 else
 return ops[op](a, b);
}


/* Function: conditional_func_ptr @ 0x2470 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // rdx

 v2 = double_value;
 if ( mode )
 {
 v2 = triple_value;
 if ( mode != 1 )
 v2 = recursion_factorial;
 }
 return v2(x);
}


/* Function: state_machine @ 0x24A0 */
int state_machine(int event, int state)
{
 if ( state == 2 )
 return 2;
 if ( state > 2 )
 {
 if ( state == 3 )
 return event != 0 ? 3 : 0;
 return 3;
 }
 if ( state )
 {
 if ( state == 1 )
 {
 if ( event != 2 )
 return 2 * (event == 99) + 1;
 return 2;
 }
 return 3;
 }
 return event == 1;
}


/* Function: fsm_func_table @ 0x2510 */
int fsm_func_table(int event, int state)
{
 int (*state_handlers[4])(int); // [rsp+0h] [rbp-38h]
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 *(__m128i *)state_handlers = _mm_unpacklo_epi64(
 _mm_set1_epi64x((unsigned long long)state_idle),
 _mm_set1_epi64x((unsigned long long)state_processing));
 *(__m128i *)&state_handlers[2] = _mm_unpacklo_epi64(
 _mm_set1_epi64x((unsigned long long)state_done),
 _mm_set1_epi64x((unsigned long long)state_error));
 if ( (unsigned int)state > 3 )
 return 3;
 else
 return state_handlers[state](event);
}


/* Function: computed_goto @ 0x25B0 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [rsp+0h] [rbp-38h]
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 *(__m128i *)targets = _mm_unpacklo_epi64(
 _mm_set1_epi64x((unsigned long long)&MEMORY[0x2660]),
 _mm_set1_epi64x((unsigned long long)&MEMORY[0x2650]));
 *(__m128i *)&targets[2] = _mm_unpacklo_epi64(
 _mm_set1_epi64x((unsigned long long)&MEMORY[0x2640]),
 _mm_set1_epi64x((unsigned long long)&MEMORY[0x2618]));
 if ( (unsigned int)idx <= 3 )
 {
  void *target = targets[idx];
  ((void(*)())target)();
 }
 return -1;
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
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x26C0 */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax

 puts("CF-L3 Test");
 v0 = non_local_jump_0(5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 v2 = computed_goto_0((int *)((char *)&dword_0 + 1), 0);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v2);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
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
