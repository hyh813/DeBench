/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_gcc_O3_g
 * Processor: arm
 */

#include <arm_neon.h>
#include <setjmp.h>
#include <stdio.h>
#include <string.h>

/* Forward declarations for functions defined later */
void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);

/* Forward declarations for state handler functions */
int state_idle(int event);
int state_processing(int event);

/* Forward declarations for function pointers used in arrays */
int double_value(int x);
int triple_value(int x);
int recursion_factorial(int n);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Weak function declaration for call_weak_fn */
__attribute__((weak)) long long call_weak_fn(void);

/* Declaration for __longjmp_chk */
extern void __longjmp_chk(jmp_buf env, int val);

/* JUMPOUT macro for computed jumps */
#define JUMPOUT(x) __asm__ volatile ("br %0" :: "r"(x))

/* Global constants for SIMD operations */
static int32x4_t xmmword_2B00 = {2, 3, 2, 3};
static int32x4_t xmmword_2B10 = {1, 2, 3, 4};
static int32x4_t xmmword_2B20 = {1, 2, 3, 4};
static int32x4_t xmmword_2B40 = {5, 6, 7, 8};
static int32x4_t xmmword_2B50 = {9, 10, 11, 12};

/* Function pointer arrays for indirect calls */
static int (*off_14010[])(int) = {double_value};
static int (*off_14018[])(int) = {triple_value};
static int (*off_14020[])(int) = {recursion_factorial};

/* Function pointer arrays for binary operations */
static int (*off_14028[])(int, int) = {op_add};
static int (*off_14038[])(int, int) = {op_sub};
static int (*off_14048[])(int, int) = {op_mul};
static int (*off_14058[])(int, int) = {op_div};
static int (*off_14068[])(int, int) = {op_mod};

/* Function pointer arrays for state handlers */
static int (*off_14078[])(int) = {state_idle};
static int (*off_14088[])(int) = {state_processing};

/* Function pointer arrays for computed goto */
static int (*off_14098[])(int) = {double_value};
static int (*off_140A8[])(int) = {triple_value};


/* External stack check guard */
extern void *_stack_chk_guard;

/* Jump table for switch_small */
static int CSWTCH_55[] = {0, 10, 20, 30};

/* String constants for test functions */
static const char asc_24B8[] = "Control Flow Level 1 Tests";
static const char asc_2760[] = "Control Flow Level 2 Tests";
static const char asc_2980[] = "Control Flow Level 3 Tests";

/* Jump buffer for setjmp/longjmp */
static jmp_buf jump_buffer;

/* Function: .init_proc @ 0x928 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_940 @ 0x940 */
void sub_940()
{
 JUMPOUT(0);
}


/* Function: main @ 0xA00 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0xB60 */
int recursion_factorial(int n)
{
 int result; // w0
 unsigned int v3; // w3
 int32x4_t v4; // q1
 int v5; // w0
 int32x4_t v6; // q3
 int32x4_t v7; // q0
 int32x4_t v8; // q2
 int32x4_t v9; // q1

 result = 1;
 if ( n > 1 )
 {
 v3 = n - 1;
 if ( (unsigned int)(n - 2) <= 0xD )
 {
 result = 1;
 }
 else
 {
 v4 = vdupq_n_s32(1);
 v5 = 0;
 v6 = vdupq_n_s32(3);
 v7 = vaddq_s32(vdupq_n_s32(n), vdupq_n_s32(2));
 do
 {
 v8 = v7;
 ++v5;
 v7 = vaddq_s32(v7, v6);
 v4 = vmulq_s32(v4, vdupq_n_s32(v5));
 }
 while ( v3 >> 2 != v5 );
 n -= v3 & 0xFFFFFFFC;
 v9 = vmulq_s32(v4, vdupq_n_s32(0));
 result = vgetq_lane_s32(vmulq_s32(v9, vdupq_n_s32(0)), 0);
 if ( v3 == (v3 & 0xFFFFFFFC) )
 return result;
 v3 = n - 1;
 }
 result *= n;
 if ( v3 != 1 )
 {
 result *= v3;
 if ( n != 3 )
 {
 result *= n - 2;
 if ( n != 4 )
 {
 result *= n - 3;
 if ( n != 5 )
 {
 result *= n - 4;
 if ( n != 6 )
 {
 result *= n - 5;
 if ( n != 7 )
 {
 result *= n - 6;
 if ( n != 8 )
 {
 result *= n - 7;
 if ( n != 9 )
 {
 result *= n - 8;
 if ( n != 10 )
 {
 result *= n - 9;
 if ( n != 11 )
 {
 result *= n - 10;
 if ( n != 12 )
 {
 result *= n - 11;
 if ( n != 13 )
 result *= (n - 13) * (n - 12);
 }
 }
 }
 }
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


/* Function: double_value @ 0xCC0 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0xCD0 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0xCE0 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0xCF0 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0xD00 */
int op_mul(int a, int b)
{
 return a * b;
}


/* Function: op_div @ 0xD10 */
int op_div(int a, int b)
{
 int result; // w0

 result = b;
 if ( b )
 return a / b;
 return result;
}


/* Function: op_mod @ 0xD24 */
int op_mod(int a, int b)
{
 int result; // w0

 result = b;
 if ( b )
 return a % b;
 return result;
}


/* Function: op_and @ 0xD40 */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0xD50 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0xD60 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0xD70 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0xD80 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0xD90 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0xDA0 */
int state_processing(int event)
{
 if ( event != 2 )
 {
 if ( event == 99 )
 return 3;
 else
 return 1;
 }
 return event;
}


/* Function: state_done @ 0xDC0 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0xDD0 */
int state_error(int event)
{
 if ( event )
 return 3;
 else
 return 0;
}


/* Function: non_local_jump_0 @ 0xDE0 */
long long non_local_jump_0(int x)
{
 if ( _setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 else
 return 10;
}


/* Function: sequential_ops @ 0xE10 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0xE20 */
int single_if(int x)
{
 if ( x > 0 )
 x *= 2;
 return x;
}


/* Function: if_else @ 0xE30 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0xE40 */
int nested_if_2(int a, int b)
{
 bool v2; // cc
 int v3; // w1

 if ( a <= 0 )
 return 0;
 v2 = b <= 0;
 v3 = a + b;
 if ( !v2 )
 return v3;
 return a;
}


/* Function: nested_if_deep @ 0xE60 */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 int result; // w0

 if ( a <= 0 )
 return 0;
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
 return result;
}


/* Function: if_elseif_chain @ 0xEB0 */
int if_elseif_chain(int x)
{
 switch ( x )
 {
 case 0:
 return 10;
 case 1:
 return 20;
 case 2:
 return 30;
 }
 return -1;
}


/* Function: if_elseif_long @ 0xEE0 */
int if_elseif_long(int x)
{
 switch ( x )
 {
 case 0:
 return 100;
 case 1:
 return 200;
 case 2:
 return 300;
 case 3:
 return 400;
 case 4:
 return 500;
 }
 return -1;
}


/* Function: switch_small @ 0xF30 */
int switch_small(int op)
{
 if ( (unsigned int)op > 3 )
 return -1;
 else
 return CSWTCH_55[op];
}


/* Function: switch_large @ 0xF50 */
int switch_large(int op)
{
 bool v1; // cf
 int result; // w0

 v1 = (unsigned int)op >= 0xA;
 result = 10 * op;
 if ( v1 )
 return -1;
 return result;
}


/* Function: switch_default @ 0xF64 */
int switch_default(int op)
{
 unsigned int v1; // w2
 int result; // w0

 v1 = op - 1;
 result = 100 * op;
 if ( v1 >= 3 )
 return 0;
 return result;
}


/* Function: switch_fallthrough @ 0xF80 */
int switch_fallthrough(int op)
{
 int v2; // w1

 switch ( op )
 {
 case 2:
 v2 = 0;
 return v2 + 2 * op + op;
 case 3:
 v2 = 12;
 return v2 + 2 * op + op;
 case 1:
 return 1;
 default:
 return -1;
 }
}


/* Function: loop_for_fixed @ 0xFC0 */
int loop_for_fixed(int n)
{
 int v2; // w1
 int32x4_t v3; // q0
 int32x4_t v4; // q3
 int32x4_t v5; // q1
 int32x4_t v6; // q2
 int v7; // w1
 int result; // w0
 int v9; // w1
 bool v10; // cc
 int v11; // w1

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 7 )
 {
 v7 = 0;
 result = 0;
 }
 else
 {
 v2 = 0;
 v3 = vdupq_n_s32(0);
 v4 = (int32x4_t){4, 4, 4, 4};
 v5 = xmmword_2B10;
 do
 {
 v6 = v5;
 ++v2;
 v5 = vaddq_s32(v5, v4);
 v3 = vaddq_s32(v3, v6);
 }
 while ( (unsigned int)n >> 2 != v2 );
 v7 = n & 0x7FFFFFFC;
 result = vaddvq_s32(v3);
 if ( (n & 3) == 0 )
 return result;
 }
 result += v7;
 if ( n > v7 + 1 )
 {
 result += v7 + 1;
 if ( n > v7 + 2 )
 {
 result += v7 + 2;
 if ( n > v7 + 3 )
 {
 result += v7 + 3;
 if ( n > v7 + 4 )
 {
 result += v7 + 4;
 if ( n > v7 + 5 )
 {
 result += v7 + 5;
 if ( n > v7 + 6 )
 {
 result += v7 + 6;
 v9 = v7 + 7;
 v10 = n <= v9;
 v11 = result + v9;
 if ( !v10 )
 return v11;
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: loop_while @ 0x10B0 */
int loop_while(int x)
{
 int v1; // w2
 int result; // w0

 v1 = x;
 if ( !x )
 return 1;
 result = 0;
 do
 {
 ++result;
 v1 /= 10;
 }
 while ( v1 );
 return result;
}


/* Function: loop_dowhile @ 0x10F0 */
int loop_dowhile(int x)
{
 int result; // w0

 result = 0;
 do
 {
 ++result;
 x /= 10;
 }
 while ( x );
 return result;
}


/* Function: loop_nested @ 0x1120 */
int loop_nested(int m, int n)
{
 int v3; // w2
 int result; // w0

 if ( m <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 ++v3;
 if ( n > 0 )
 result += n;
 }
 while ( m != v3 );
 return result;
}


/* Function: loop_break @ 0x1160 */
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
 case 50:
 return 4;
 }
 return -1;
}


/* Function: loop_continue @ 0x11B0 */
int loop_continue(int n)
{
 int v2; // w1
 int32x4_t v3; // q1
 int32x4_t v4; // q5
 int8x16_t v5; // q4
 int32x4_t v6; // q2
 int8x16_t v7; // q3
 unsigned int v8; // w1
 int result; // w0
 unsigned int v10; // w3
 bool v11; // zf
 signed int v12; // w4
 int v13; // w3
 signed int v14; // w3
 int v15; // w4
 signed int v16; // w1
 int v17; // w3
 int v18; // w1

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 4 )
 {
 v8 = 1;
 result = 1;
 }
 else
 {
 v2 = 0;
 v3 = vdupq_n_s32(0);
 v4 = vdupq_n_s32(4);
 v5 = vdupq_n_s8(1);
 v6 = xmmword_2B20;
 do
 {
 v7 = v6;
 ++v2;
 v6 = vaddq_s32(v6, v4);
 v3 = vaddq_s32(v3, vbicq_s8((int8x16_t)v7, vceqzq_s8(vandq_s8((int8x16_t)v7, v5))));
 }
 while ( (unsigned int)n >> 2 != v2 );
 v8 = (n & 0xFFFFFFFC) + 1;
 result = vaddvq_s32(v3);
 if ( n == (n & 0xFFFFFFFC) )
 return result;
 if ( (v8 & 1) != 0 )
 result += v8;
 }
 v10 = v8 + 1;
 if ( (int)(v8 + 1) <= n )
 {
 v11 = (v10 & 1) == 0;
 v12 = v8 + 2;
 v13 = result + v10;
 if ( !v11 )
 result = v13;
 if ( n >= v12 )
 {
 v11 = (v12 & 1) == 0;
 v14 = v8 + 3;
 v15 = result + v12;
 if ( !v11 )
 result = v15;
 if ( n >= v14 )
 {
 v11 = (v14 & 1) == 0;
 v16 = v8 + 4;
 v17 = result + v14;
 if ( !v11 )
 result = v17;
 if ( n >= v16 )
 {
 v11 = (v16 & 1) == 0;
 v18 = result + v16;
 if ( !v11 )
 return v18;
 }
 }
 }
 }
 return result;
}


/* Function: goto_forward @ 0x12B0 */
int goto_forward(int x)
{
 if ( x > 0 )
 x *= x;
 return 2 * x;
}


/* Function: goto_backward @ 0x12C4 */
int goto_backward(int x)
{
 int result; // w0
 int32x4_t v3; // q1
 int32x4_t v4; // q3
 int32x4_t v5; // q0
 int v6; // w1
 int32x4_t v7; // q2
 unsigned int v8; // w1
 int32x4_t v9; // q1

 result = 1;
 if ( x > 0 )
 {
 if ( (unsigned int)(x - 1) <= 0xD )
 {
 result = 1;
 v8 = 1;
 }
 else
 {
 v3 = (int32x4_t){1, 0, 1, 0};
 v4 = (int32x4_t){4, 4, 4, 4};
 v5 = xmmword_2B20;
 v6 = 0;
 do
 {
 v7 = v5;
 ++v6;
 v5 = vaddq_s32(v5, v4);
 v3 = vmulq_s32(v3, v7);
 }
 while ( (unsigned int)x >> 2 != v6 );
 v8 = (x & 0xFFFFFFFC) + 1;
 v9 = vmulq_s32(vextq_s8((int8x16_t)v3, (int8x16_t)v3, 8), (int32x4_t)v3);
 result = vgetq_lane_s32(vmulq_s32(vextq_s8((int8x16_t)v9, (int8x16_t)v9, 4), v9), 0);
 if ( x == (x & 0xFFFFFFFC) )
 return result;
 }
 result *= v8;
 if ( x >= (int)(v8 + 1) )
 {
 result *= v8 + 1;
 if ( x >= (int)(v8 + 2) )
 {
 result *= v8 + 2;
 if ( x >= (int)(v8 + 3) )
 {
 result *= v8 + 3;
 if ( x >= (int)(v8 + 4) )
 {
 result *= v8 + 4;
 if ( x >= (int)(v8 + 5) )
 {
 result *= v8 + 5;
 if ( x >= (int)(v8 + 6) )
 {
 result *= v8 + 6;
 if ( x >= (int)(v8 + 7) )
 {
 result *= v8 + 7;
 if ( x >= (int)(v8 + 8) )
 {
 result *= v8 + 8;
 if ( x >= (int)(v8 + 9) )
 {
 result *= v8 + 9;
 if ( x >= (int)(v8 + 10) )
 {
 result *= v8 + 10;
 if ( x >= (int)(v8 + 11) )
 {
 result *= v8 + 11;
 if ( x >= (int)(v8 + 12) )
 return 0x7FFFFFFF;
 }
 }
 }
 }
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


/* Function: ternary_op @ 0x1410 */
int ternary_op(int a, int b)
{
 if ( b >= a )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0x1420 */
void test_control_flow_l1()
{
 puts(asc_24B8);
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


/* Function: loop_multi_exit @ 0x1660 */
int loop_multi_exit(int target)
{
 int v2; // w0
 int result; // w0
 int v4; // w1

 switch ( target )
 {
 case 1:
 v2 = 0;
LABEL_15:
 v4 = 0;
 return v4 + 10 * v2;
 case 2:
 v2 = 0;
 goto LABEL_18;
 case 3:
 v2 = 0;
 goto LABEL_20;
 case 4:
 v2 = 0;
 v4 = 3;
 return v4 + 10 * v2;
 case 5:
 v2 = 1;
 goto LABEL_15;
 case 6:
 v2 = 1;
 v4 = 1;
 return v4 + 10 * v2;
 case 7:
 v2 = 1;
 v4 = 2;
 return v4 + 10 * v2;
 case 8:
 v2 = 1;
 v4 = 3;
 return v4 + 10 * v2;
 }
 v2 = 2;
 if ( target == 9 )
 goto LABEL_15;
 v2 = 2;
 if ( target == 10 )
 {
LABEL_18:
 v4 = 1;
 return v4 + 10 * v2;
 }
 v2 = 2;
 if ( target == 11 )
 {
LABEL_20:
 v4 = 2;
 return v4 + 10 * v2;
 }
 result = -1;
 if ( target == 12 )
 {
 v2 = 2;
 v4 = 3;
 return v4 + 10 * v2;
 }
 return result;
}


/* Function: infinite_loop @ 0x1750 */
int infinite_loop(volatile int *flag)
{
 int i; // w1

 for ( i = 0; i != 1001; ++i )
 {
 if ( *flag == 1 )
 return i;
 }
 *flag = 1;
 return 1001;
}


/* Function: multi_return @ 0x1790 */
int multi_return(int x)
{
 int result; // w0

 if ( x < 0 )
 return -1;
 result = 2 * x;
 if ( result > 100 )
 return -2;
 if ( (x & 1) != 0 )
 return x + 1;
 return result;
}


/* Function: conditional_return @ 0x17C0 */
int conditional_return(int x)
{
 bool v1; // cc
 int v2; // w1
 int result; // w0

 v1 = x <= 0;
 if ( x )
 v2 = -x;
 else
 v2 = 0;
 result = 2 * x;
 if ( v1 )
 return v2;
 return result;
}


/* Function: duffs_device @ 0x17D4 */
int duffs_device(int *dst, int *src, int n)
{
 int *v3; // x3
 int v4; // w4
 int v5; // w5
 int v6; // t1
 int v7; // t1
 int *v8; // x1
 int v9; // t1
 int *v10; // x3
 int v11; // t1
 int *v12; // x1
 int v13; // t1
 int *v14; // x3
 int v15; // t1
 int v16; // t1
 int v17; // t1
 int *v18; // x1
 int v19; // t1
 int v20; // t1

 v3 = dst;
 if ( n <= 0 )
 return -1;
 v4 = n & 7;
 v5 = (n + 7) >> 3;
 if ( v4 == 4 )
 goto LABEL_11;
 if ( (n & 7u) > 4 )
 {
 if ( v4 == 6 )
 goto LABEL_10;
 if ( v4 == 7 )
 {
 v17 = *src++;
 *dst = v17;
 v3 = dst + 1;
 goto LABEL_10;
 }
 if ( v4 != 5 )
 goto LABEL_9;
 v19 = *src;
 v18 = src + 1;
 *dst = v19;
 v20 = *v18;
 src = v18 + 1;
 dst[1] = v20;
 v3 = dst + 2;
 }
 else
 {
 if ( v4 == 2 )
 goto LABEL_7;
 if ( v4 != 3 )
 {
 if ( v4 != 1 )
 goto LABEL_9;
 --v5;
 *dst = *src;
 if ( v5 )
 goto LABEL_8;
 return n;
 }
 }
 while ( 1 )
 {
 v6 = *src++;
 *v3++ = v6;
LABEL_7:
 v7 = *src++;
 --v5;
 *v3++ = v7;
 *v3 = *src;
 if ( !v5 )
 break;
LABEL_8:
 ++src;
 ++v3;
LABEL_9:
 v9 = *src;
 v8 = src + 1;
 *v3 = v9;
 v10 = v3 + 1;
 v11 = *v8;
 src = v8 + 1;
 *v10 = v11;
 v3 = v10 + 1;
LABEL_10:
 v13 = *src;
 v12 = src + 1;
 *v3 = v13;
 v14 = v3 + 1;
 v15 = *v12;
 src = v12 + 1;
 *v14 = v15;
 v3 = v14 + 1;
LABEL_11:
 v16 = *src++;
 *v3++ = v16;
 }
 return n;
}


/* Function: loop_complex_cond @ 0x18C0 */
int loop_complex_cond(int x)
{
 int v1; // w1
 int v2; // w2
 int v3; // w0

 if ( x > 0 )
 {
 v1 = x - 1;
 if ( x - 1 <= 2 )
 {
 v3 = 1;
 v2 = 2;
 }
 else
 {
 v1 = x - 2;
 if ( x - 2 <= 4 )
 {
 v3 = 2;
 v2 = 4;
 }
 else
 {
 v1 = x - 3;
 if ( x - 3 <= 6 )
 {
 v3 = 3;
 v2 = 6;
 }
 else
 {
 v1 = x - 4;
 if ( x - 4 <= 8 )
 {
 v3 = 4;
 v2 = 8;
 }
 else
 {
 v1 = x - 5;
 if ( x - 5 <= 10 )
 {
 v3 = 5;
 v2 = 10;
 }
 else
 {
 v1 = x - 6;
 if ( x - 6 <= 12 )
 {
 v3 = 6;
 v2 = 12;
 }
 else
 {
 v1 = x - 7;
 if ( x - 7 <= 14 )
 {
 v3 = 7;
 v2 = 14;
 }
 else
 {
 v1 = x - 8;
 if ( x - 8 <= 16 )
 {
 v3 = 8;
 v2 = 16;
 }
 else
 {
 v1 = x - 9;
 if ( x - 9 <= 18 )
 {
 v3 = 9;
 v2 = 18;
 }
 else
 {
 v1 = x - 10;
 v2 = 20;
 v3 = 10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return v1 + v2 + v3;
 }
 return x;
}


/* Function: loop_modify_var @ 0x19C0 */
int loop_modify_var(int n)
{
 int result; // w0
 int v3; // w1
 int v4; // w2
 int v5; // w3

 result = 0;
 if ( n > 0 )
 {
 v3 = 1;
 v4 = 0;
 if ( n != 1 )
 {
 do
 {
 while ( 1 )
 {
 v5 = v3 + 1;
 result += v3;
 if ( v3 <= 5 )
 break;
 v3 = v4 + 4;
 v4 += 3;
 if ( n <= v3 )
 return result;
 }
 v4 = v3++;
 }
 while ( n > v5 );
 }
 }
 return result;
}


/* Function: loop_external_state @ 0x1A20 */
int loop_external_state(volatile int *flag)
{
 int i; // w1

 for ( i = 0; i != 101; ++i )
 {
 if ( *flag )
 break;
 }
 return i;
}


/* Function: tail_recursion @ 0x1A44 */
int tail_recursion(int n, int acc)
{
 int result; // w0
 unsigned int v4; // w4
 int8x16_t v5; // q1
 int v6; // w0
 int32x4_t v7; // q3
 int32x4_t v8; // q0
 int32x4_t v9; // q2
 int8x16_t v10; // q1

 result = acc;
 if ( n > 1 )
 {
 v4 = n - 1;
 if ( (unsigned int)(n - 2) <= 0xD )
 {
 result = acc;
 }
 else
 {
 v5 = (int8x16_t){1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
 v6 = 0;
 v7 = (int32x4_t){3, 3, 3, 3};
 v8 = vaddq_s32(vdupq_n_s32(n), (int32x4_t)xmmword_2B00);
 do
 {
 v9 = v8;
 ++v6;
 v8 = vaddq_s32(v8, v7);
 v5 = vmulq_s32(v5, v9);
 }
 while ( v4 >> 2 != v6 );
 n -= v4 & 0xFFFFFFFC;
 v10 = vmulq_s32(vextq_s8(v5, (int8x16_t){0}, 8), v5);
 result = vgetq_lane_s32(vmulq_s32(vextq_s8(v10, vdupq_n_s8(0), 4), v10), 0) * acc;
 if ( v4 == (v4 & 0xFFFFFFFC) )
 return result;
 v4 = n - 1;
 }
 result *= n;
 if ( v4 != 1 )
 {
 result *= v4;
 if ( n != 3 )
 {
 result *= n - 2;
 if ( n != 4 )
 {
 result *= n - 3;
 if ( n != 5 )
 {
 result *= n - 4;
 if ( n != 6 )
 {
 result *= n - 5;
 if ( n != 7 )
 {
 result *= n - 6;
 if ( n != 8 )
 {
 result *= n - 7;
 if ( n != 9 )
 {
 result *= n - 8;
 if ( n != 10 )
 {
 result *= n - 9;
 if ( n != 11 )
 {
 result *= n - 10;
 if ( n != 12 )
 {
 result *= n - 11;
 if ( n != 13 )
 result *= (n - 13) * (n - 12);
 }
 }
 }
 }
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


/* Function: indirect_recursion_a @ 0x1BA4 */
int indirect_recursion_a(int n, int depth)
{
 int v2; // w2
 int v3; // w0
 int v4; // w3

 v2 = depth - 4;
 if ( depth > 0 )
 {
 do
 {
 if ( (n & 1) != 0 )
 {
 v3 = 3 * n;
 if ( depth == 1 )
 return v3 + 1;
 n = v3 + 2;
 if ( depth <= 2 )
 return n;
 if ( (n & 1) == 0 )
 {
LABEL_14:
 n /= 2;
 if ( depth == 3 )
 return n;
 ++n;
 v4 = v2;
 goto LABEL_8;
 }
 }
 else
 {
 n /= 2;
 if ( depth == 1 )
 return n;
 ++n;
 if ( depth <= 2 )
 return n;
 if ( (n & 1) == 0 )
 goto LABEL_14;
 }
 v3 = 3 * n;
 if ( depth == 3 )
 return v3 + 1;
 n = v3 + 2;
 v4 = v2;
LABEL_8:
 v2 -= 4;
 depth -= 4;
 }
 while ( v4 );
 }
 return n;
}


/* Function: call_func_ptr @ 0x1C40 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1C50 */
int call_func_ptr_array(int idx, int x)
{
 int (*funcs[3])(int); // [xsp+10h] [xbp+10h]

 funcs[0] = (int (*)(int))off_14010[0];
 funcs[1] = (int (*)(int))off_14018[0];
 funcs[2] = (int (*)(int))off_14020[0];
 if ( (unsigned int)idx > 2 )
 return -1;
 else
 return funcs[idx](x);
}


/* Function: call_virtual_func @ 0x1CF0 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1D00 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int *v3; // x19
 int *v5; // x21
 int v6; // w20
 int v7; // t1

 if ( n <= 0 )
 return 0;
 v3 = arr;
 v5 = &arr[n - 1 + 1];
 v6 = 0;
 do
 {
 v7 = *v3++;
 v6 += cb(v7);
 }
 while ( v3 != v5 );
 return v6;
}


/* Function: test_control_flow_l2 @ 0x1D70 */
void test_control_flow_l2()
{
 int i; // w2
 int v1; // w0
 int j; // w1
 int v3; // w0
 int v4; // w2
 int v5; // w3
 int k; // w2
 int src[8]; // [xsp+28h] [xbp+28h] BYREF
 int dst[8]; // [xsp+48h] [xbp+48h] BYREF

 puts(asc_2760);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 memset(dst, 0, sizeof(dst));
 *(unsigned long long *)src = xmmword_2B40;
 *(unsigned long long *)&src[4] = xmmword_2B50;
 v1 = duffs_device(dst, src, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v1);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v3 = 1;
 v4 = 1;
LABEL_7:
 v5 = v3++;
 for ( j = v5; ; j += 3 )
 {
 v4 += v3;
 if ( v3 <= 5 )
 goto LABEL_7;
 if ( j != 5 )
 break;
 v3 = 9;
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


/* Function: non_local_jump @ 0x1FE4 */
int non_local_jump(int x)
{
 int result; // w0

 if ( _setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 __longjmp_chk(jump_buffer, 1);
 result = 2 * x;
 if ( x > 100 )
 __longjmp_chk(jump_buffer, 2);
 return result;
}


/* Function: cpp_exception @ 0x2050 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x2074 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[10])(int, int); // [xsp+18h] [xbp+18h]

 *(unsigned long long *)ops = *(unsigned long long *)off_14028;
 *(unsigned long long *)&ops[2] = *(unsigned long long *)off_14038;
 *(unsigned long long *)&ops[4] = *(unsigned long long *)off_14048;
 *(unsigned long long *)&ops[6] = *(unsigned long long *)off_14058;
 *(unsigned long long *)&ops[8] = *(unsigned long long *)off_14068;
 if ( (unsigned int)op > 9 )
 return -1;
 else
 return ops[op](a, b);
}


/* Function: conditional_func_ptr @ 0x2124 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // x2

 if ( !mode )
 return double_value(x);
 v2 = triple_value;
 if ( mode != 1 )
 v2 = recursion_factorial;
 return v2(x);
}


/* Function: state_machine @ 0x2160 */
int state_machine(int event, int state)
{
 if ( state == 2 )
 return 2;
 if ( state > 2 )
 {
 if ( event )
 event = state;
 else
 event = 0;
 if ( state != 3 )
 return 3;
 }
 else if ( state )
 {
 if ( state == 1 )
 {
 if ( event != 2 )
 {
 if ( event == 99 )
 return 3;
 else
 return 1;
 }
 }
 else
 {
 return 3;
 }
 }
 else
 {
 return event == 1;
 }
 return event;
}


/* Function: fsm_func_table @ 0x21C4 */
int fsm_func_table(int event, int state)
{
 int (*state_handlers[4])(int); // [xsp+18h] [xbp+18h]

 *(unsigned long long *)state_handlers = *(unsigned long long *)off_14078;
 *(unsigned long long *)&state_handlers[2] = *(unsigned long long *)off_14088;
 if ( (unsigned int)state > 3 )
 return 3;
 else
 return ((long long ( *)(int, int, void *, unsigned long long))state_handlers[state])(event, state, &_stack_chk_guard, 0);
}


/* Function: computed_goto @ 0x2260 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [xsp+18h] [xbp+18h]

 *(unsigned long long *)targets = *(unsigned long long *)&off_14098;
 *(unsigned long long *)&targets[2] = *(unsigned long long *)&off_140A8;
 if ( (unsigned int)idx <= 3 )
 {
 void *target = targets[idx];
 __asm__ volatile ("br %0" :: "r"(target));
 }
 return -1;
}


/* Function: obfuscated_cf @ 0x22F0 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x2300 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x2310 */
int overlapped_code(int x)
{
 bool v2; // zf
 int v3; // w0

 v2 = (x & 1) == 0;
 v3 = 3 * x;
 if ( v2 )
 return x / 2;
 else
 return v3 + 1;
}


/* Function: test_control_flow_l3 @ 0x2330 */
void test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int labels[6]; // [xsp+20h] [xbp+20h] BYREF

 v0 = puts(asc_2980);
 v1 = non_local_jump_0(v0);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 v2 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v2);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 *(unsigned long long *)labels = xmmword_2B10;
 v3 = computed_goto(labels, 2);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v3);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: .term_proc @ 0x249C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _setjmp @ 0x14248 */

/* FAILED to decompile: __libc_start_main @ 0x14250 */

/* FAILED to decompile: __cxa_finalize @ 0x14258 */

/* FAILED to decompile: __printf_chk @ 0x14260 */

/* FAILED to decompile: __stack_chk_fail @ 0x14268 */

/* FAILED to decompile: abort @ 0x14278 */

/* FAILED to decompile: puts @ 0x14280 */

/* FAILED to decompile: __longjmp_chk @ 0x14288 */

/* FAILED to decompile: __gmon_start__ @ 0x14298 */

/* Total functions decompiled: 75, failed: 9 */
