/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_gcc_O3_g
 * Processor: arm
 */

#include <stdbool.h>
#include <setjmp.h>
#include <stdio.h>
#include <string.h>

jmp_buf jump_buffer;

int CSWTCH_56[] = { 0, 10, 20, 30 };

char s[] = "Test";
char asc_11DE0[] = "Control Flow Level 2 Tests";
char asc_11FE4[] = "Control Flow Level 3 Tests";

/* Function: .init_proc @ 0x10448 */
int init_proc()
{
 return 0;
}


/* Function: sub_10454 @ 0x10454 */
void sub_10454()
{
}


/* Function: main @ 0x104E0 */
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



/* Function: recursion_factorial @ 0x105F0 */
int recursion_factorial(int n)
{
 int v1; // r3
 bool v2; // cc
 int result; // r0
 int v4; // r2

 v1 = n;
 v2 = n <= 1;
 result = 1;
 if ( !v2 )
 {
 do
 {
 v4 = v1--;
 result *= v4;
 }
 while ( v1 != 1 );
 }
 return result;
}


/* Function: double_value @ 0x10618 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x10620 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x10628 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x10630 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x10638 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x10640 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x1065C */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x1067C */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x10684 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x1068C */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x10694 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x1069C */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x106A4 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x106B4 */
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


/* Function: state_done @ 0x106CC */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x106D4 */
int state_error(int event)
{
 if ( event )
 return 3;
 return event;
}


/* Function: non_local_jump_0 @ 0x106E0 */
int non_local_jump_0(int x)
{
 if ( setjmp(jump_buffer) )
 return -1;
 else
 return 10;
}


/* Function: sequential_ops @ 0x10700 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1070C */
int single_if(int x)
{
 if ( x > 0 )
 x *= 2;
 return x;
}


/* Function: if_else @ 0x10718 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x10728 */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 if ( b > 0 )
 a += b;
 return a;
}


/* Function: nested_if_deep @ 0x10744 */
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
 if ( e <= 0 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0x10798 */
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


/* Function: if_elseif_long @ 0x107C8 */
int if_elseif_long(int x)
{
 if ( (unsigned int)x > 4 )
 return -1;
 else
 return 100 * (x + 1);
}


/* Function: switch_small @ 0x107E4 */
int switch_small(int op)
{
 if ( (unsigned int)op > 3 )
 return -1;
 else
 return CSWTCH_56[op];
}


/* Function: switch_large @ 0x107FC */
int switch_large(int op)
{
 if ( (unsigned int)op > 9 )
 return -1;
 else
 return 10 * op;
}


/* Function: switch_default @ 0x10810 */
int switch_default(int op)
{
 if ( (unsigned int)(op - 1) > 2 )
 return 0;
 else
 return 100 * op;
}


/* Function: switch_fallthrough @ 0x1082C */
int switch_fallthrough(int op)
{
 int v2; // r3

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


/* Function: loop_for_fixed @ 0x10864 */
int loop_for_fixed(int n)
{
 int v2; // r3
 int result; // r0

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += v2++;
 while ( n != v2 );
 return result;
}


/* Function: loop_while @ 0x10890 */
int loop_while(int x)
{
 int v1; // r3
 int result; // r0

 v1 = x;
 if ( !x )
 return 1;
 result = 0;
 do
 {
 v1 /= 10;
 ++result;
 }
 while ( v1 );
 return result;
}


/* Function: loop_dowhile @ 0x108C4 */
int loop_dowhile(int x)
{
 int result; // r0

 result = 0;
 do
 {
 x /= 10;
 ++result;
 }
 while ( x );
 return result;
}


/* Function: loop_nested @ 0x108EC */
int loop_nested(int m, int n)
{
 int v3; // r3
 int result; // r0

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


/* Function: loop_break @ 0x1091C */
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


/* Function: loop_continue @ 0x1096C */
int loop_continue(int n)
{
 int v2; // r3
 int result; // r0
 int v4; // r2

 if ( n <= 0 )
 return 0;
 v2 = 1;
 result = 0;
 v4 = n + 1;
 do
 {
 if ( (v2 & 1) != 0 )
 result += v2;
 ++v2;
 }
 while ( v4 != v2 );
 return result;
}


/* Function: goto_forward @ 0x109A0 */
int goto_forward(int x)
{
 if ( x > 0 )
 x *= x;
 return 2 * x;
}


/* Function: goto_backward @ 0x109B4 */
int goto_backward(int x)
{
 bool v1; // cc
 int result; // r0
 int v4; // r3
 int v5; // r2

 v1 = x <= 0;
 result = 1;
 if ( !v1 )
 {
 v4 = 1;
 v5 = x + 1;
 do
 result *= v4++;
 while ( v5 != v4 );
 }
 return result;
}


/* Function: ternary_op @ 0x109DC */
int ternary_op(int a, int b)
{
 if ( b >= a )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0x109E8 */
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


/* Function: loop_multi_exit @ 0x10C14 */
int loop_multi_exit(int target)
{
 int v1; // r3
 int v3; // r0

 switch ( target )
 {
 case 1:
 v1 = 0;
 goto LABEL_19;
 case 2:
 v1 = 0;
 goto LABEL_22;
 case 3:
 v1 = 0;
 goto LABEL_24;
 case 4:
 v1 = 0;
 goto LABEL_26;
 case 5:
 v1 = 1;
 goto LABEL_19;
 case 6:
 v1 = 1;
 goto LABEL_22;
 case 7:
 v1 = 1;
 goto LABEL_24;
 case 8:
 v1 = 1;
 goto LABEL_26;
 }
 if ( target != 9 )
 {
 if ( target == 10 )
 {
 v1 = 2;
LABEL_22:
 v3 = 1;
 return v3 + 10 * v1;
 }
 if ( target == 11 )
 {
 v1 = 2;
LABEL_24:
 v3 = 2;
 return v3 + 10 * v1;
 }
 if ( target != 12 )
 return -1;
 v1 = 2;
LABEL_26:
 v3 = 3;
 return v3 + 10 * v1;
 }
 v1 = 2;
LABEL_19:
 v3 = 0;
 return v3 + 10 * v1;
}


/* Function: infinite_loop @ 0x10CE4 */
int infinite_loop(volatile int *flag)
{
 int i; // r3

 for ( i = 0; i != 1001; ++i )
 {
 if ( *flag == 1 )
 return i;
 }
 *flag = 1;
 return 1001;
}


/* Function: multi_return @ 0x10D24 */
int multi_return(int x)
{
 int result; // r0

 if ( x < 0 )
 return -1;
 result = 2 * x;
 if ( 2 * x > 100 )
 return -2;
 if ( (x & 1) != 0 )
 return x + 1;
 return result;
}


/* Function: conditional_return @ 0x10D54 */
int conditional_return(int x)
{
 if ( x <= 0 )
 {
 if ( x )
 return -x;
 }
 else
 {
 x *= 2;
 }
 return x;
}


/* Function: duffs_device @ 0x10D6C */
int duffs_device(int *dst, int *src, int n)
{
 int *v3; // r3
 int v4; // r12
 int v5; // t1
 int v6; // t1
 int v7; // t1
 int v8; // t1
 int v9; // t1
 int v10; // t1
 int *v11; // r1
 int v12; // t1
 int *v13; // r3
 int v14; // t1
 int result; // r0

 if ( n <= 0 )
 return -1;
 v3 = dst;
 v4 = (n + 7) >> 3;
 switch ( n & 7 )
 {
 case 1:
 goto LABEL_8;
 case 2:
 goto LABEL_7;
 case 3:
 goto LABEL_6;
 case 4:
 goto LABEL_5;
 case 5:
 goto LABEL_4;
 case 6:
 v5 = *src++;
 *dst = v5;
 v3 = dst + 1;
 goto LABEL_4;
 case 7:
 goto LABEL_12;
 default:
 while ( 1 )
 {
 v10 = *src++;
 *v3++ = v10;
LABEL_12:
 v12 = *src;
 v11 = src + 1;
 *v3 = v12;
 v13 = v3 + 1;
 v14 = *v11;
 src = v11 + 1;
 *v13 = v14;
 v3 = v13 + 1;
LABEL_4:
 v6 = *src++;
 *v3++ = v6;
LABEL_5:
 v7 = *src++;
 *v3++ = v7;
LABEL_6:
 v8 = *src++;
 *v3++ = v8;
LABEL_7:
 v9 = *src++;
 *v3++ = v9;
LABEL_8:
 --v4;
 *v3 = *src;
 if ( !v4 )
 break;
 ++src;
 ++v3;
 }
 result = n;
 break;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x10E24 */
int loop_complex_cond(int x)
{
 int v1; // r3
 int v2; // r2
 int v3; // r1

 if ( x > 0 )
 {
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
 v2 = 10;
 v3 = 20;
 v1 = x - 10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return v1 + v3 + v2;
 }
 return x;
}


/* Function: loop_modify_var @ 0x10F1C */
int loop_modify_var(int n)
{
 bool v1; // cc
 int result; // r0
 int v4; // r3
 int v5; // r2
 int v6; // r1

 v1 = n <= 0;
 result = 0;
 if ( !v1 && n != 1 )
 {
 v4 = 1;
 v5 = 0;
 while ( 1 )
 {
 v6 = v4 + 1;
 result += v4;
 if ( v4 > 5 )
 break;
LABEL_7:
 if ( n <= v6 )
 return result;
 v5 = v4;
 v4 = v6;
 }
 while ( 1 )
 {
 v4 = v5 + 4;
 v1 = n <= v5 + 4;
 v5 += 3;
 if ( v1 )
 break;
 v6 = v4 + 1;
 result += v4;
 if ( v4 <= 5 )
 goto LABEL_7;
 }
 }
 return result;
}


/* Function: loop_external_state @ 0x10F7C */
int loop_external_state(volatile int *flag)
{
 int i; // r3

 for ( i = 0; i != 101; ++i )
 {
 if ( *flag )
 break;
 }
 return i;
}


/* Function: tail_recursion @ 0x10FA4 */
int tail_recursion(int n, int acc)
{
 int v2; // r3
 bool v3; // cc
 int result; // r0
 int v5; // r2

 v2 = n;
 v3 = n <= 1;
 result = acc;
 if ( !v3 )
 {
 do
 {
 v5 = v2--;
 result *= v5;
 }
 while ( v2 != 1 );
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x10FCC */
int indirect_recursion_a(int n, int depth)
{
 int v2; // r3
 int v3; // r1
 int v4; // r0
 int v5; // r2

 if ( depth > 0 )
 {
 v2 = depth;
 v3 = depth - 4;
 if ( (n & 1) == 0 )
 goto LABEL_10;
LABEL_3:
 v4 = 3 * n;
 if ( v2 == 1 )
 return v4 + 1;
 n = v4 + 2;
 if ( v2 <= 2 )
 return n;
 if ( (n & 1) != 0 )
 {
LABEL_6:
 v4 = 3 * n;
 if ( v2 != 3 )
 {
 v5 = v3;
 n = v4 + 2;
 goto LABEL_8;
 }
 return v4 + 1;
 }
 while ( 1 )
 {
 n /= 2;
 if ( v2 == 3 )
 break;
 v5 = v3;
 ++n;
LABEL_8:
 v3 -= 4;
 v2 -= 4;
 if ( !v5 )
 break;
 if ( (n & 1) != 0 )
 goto LABEL_3;
LABEL_10:
 n /= 2;
 if ( v2 == 1 )
 break;
 ++n;
 if ( v2 <= 2 )
 break;
 if ( (n & 1) != 0 )
 goto LABEL_6;
 }
 }
 return n;
}


/* Function: call_func_ptr @ 0x11078 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x11084 */
int call_func_ptr_array(int idx, int x)
{
 int ( **v2)(int); // r12
 unsigned int v4[2]; // [sp+10h] [bp-8h] BYREF

 *v2 = double_value;
 v2[1] = triple_value;
 v2[2] = recursion_factorial;
 if ( (unsigned int)idx > 2 )
 return -1;
 else
 return ((int ( *)(int))v4[idx - 4])(x);
}


/* Function: call_virtual_func @ 0x11120 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x11128 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v4; // r4
 int v6; // r6
 int *v7; // r5
 int v8; // t1

 if ( n <= 0 )
 return 0;
 v4 = 0;
 v6 = 0;
 v7 = arr - 1;
 do
 {
 v8 = v7[1];
 ++v7;
 ++v4;
 v6 += cb(v8);
 }
 while ( n != v4 );
 return v6;
}


/* Function: test_control_flow_l2 @ 0x11170 */
void test_control_flow_l2()
{
 int i; // r2
 int v1; // r0
 int v2; // r2
 bool v3; // zf
 int v4; // r3
 int v5; // r1
 int j; // r2
 int src[8]; // [sp+Ch] [bp-4Ch] BYREF
 int dst[8]; // [sp+2Ch] [bp-2Ch] BYREF

 puts(asc_11DE0);
 printf(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 printf(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
 printf(1, "CF-L2-03 (multi_return): %d\n", -1);
 printf(1, "CF-L2-03 (multi_return): %d\n", -2);
 printf(1, "CF-L2-03 (multi_return): %d\n", 4);
 printf(1, "CF-L2-04 (conditional_return): %d\n", 10);
 printf(1, "CF-L2-04 (conditional_return): %d\n", 5);
 src[0] = 1;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 memset(dst, 0, sizeof(dst));
 v1 = duffs_device(dst, src, 8);
 printf(1, "CF-L2-05 (duffs_device): %d\n", v1);
 printf(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v4 = 0;
 v5 = 1;
 v2 = 0;
 while ( 1 )
 {
 v2 += v5;
 if ( v5 > 5 )
 break;
 v4 = v5++;
 }
 while ( 1 )
 {
 v3 = v4 == 5;
 v4 += 3;
 if ( !v3 )
 break;
 v2 += 9;
 }
 printf(1, "CF-L2-07 (loop_modify_var): %d\n", v2);
 for ( j = 0; j != 101; ++j )
 ;
 printf(1, "CF-L2-08 (loop_external_state): %d\n", 101);
 printf(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 printf(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 printf(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 printf(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 printf(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 printf(1, "CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x113E8 */
int non_local_jump(int x)
{
 if ( setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 longjmp(jump_buffer, 1);
 if ( x > 100 )
 longjmp(jump_buffer, 2);
 return 2 * x;
}


/* Function: cpp_exception @ 0x1144C */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x11474 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[10])(int, int); // [sp+4h] [bp-3Ch]
 int v5; // [sp+2Ch] [bp-14h]

 ops[0] = op_add;
 ops[1] = op_sub;
 ops[2] = op_mul;
 ops[3] = op_div;
 ops[4] = op_mod;
 ops[5] = op_and;
 ops[6] = op_or;
 ops[7] = op_xor;
 ops[8] = op_shl;
 ops[9] = op_shr;
 if ( (unsigned int)op > 9 )
 return -1;
 else
 return ops[op](a, b);
}


/* Function: conditional_func_ptr @ 0x11524 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // r2

 if ( !mode )
 return double_value(x);
 v2 = triple_value;
 if ( mode != 1 )
 v2 = recursion_factorial;
 return v2(x);
}


/* Function: state_machine @ 0x11558 */
int state_machine(int event, int state)
{
 switch ( state )
 {
 case 0:
 event = event == 1;
 break;
 case 1:
 if ( event != 2 )
 {
 if ( event == 99 )
 event = 3;
 else
 event = state;
 }
 break;
 case 2:
 event = state;
 break;
 case 3:
 if ( event )
 event = state;
 else
 event = 0;
 break;
 default:
 event = 3;
 break;
 }
 return event;
}


/* Function: fsm_func_table @ 0x115BC */
int fsm_func_table(int event, int state)
{
 int (*state_handlers[4])(int); // [sp+4h] [bp-1Ch]

 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ( (unsigned int)state > 3 )
 return 3;
 else
 return state_handlers[state](event);
}


/* Function: computed_goto @ 0x11654 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [sp+4h] [bp-1Ch]

 targets[0] = (void *)0x116C8;
 targets[1] = (void *)0x116C0;
 targets[2] = (void *)0x116B8;
 targets[3] = (void *)0x11694;
 if ( (unsigned int)idx <= 3 )
 return ((int (*)(int))targets[idx])(idx);
 return -1;
}


/* Function: obfuscated_cf @ 0x116E4 */
int obfuscated_cf(int a1)
{
 return 2 * a1;
}


/* Function: opaque_predicate @ 0x116EC */
int opaque_predicate(int a1)
{
 return 2 * a1;
}


/* Function: overlapped_code @ 0x116F4 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x1170C */
void test_control_flow_l3()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int labels[4]; // [sp+4h] [bp-1Ch] BYREF

 v0 = puts(asc_11FE4);
 v1 = non_local_jump_0(v0);
 printf(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 v2 = non_local_jump(-5);
 printf(1, "CF-L3-01 (non_local_jump): %d\n", v2);
 printf(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 printf(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 printf(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 printf(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf(1, "CF-L3-05 (state_machine): %d\n", 1);
 printf(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 v3 = computed_goto(labels, 2);
 printf(1, "CF-L3-07 (computed_goto): %d\n", v3);
 printf(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 printf(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x11ABC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x231DC */

/* FAILED to decompile: __imp_memset @ 0x231E0 */

/* FAILED to decompile: __imp__longjmp @ 0x231E4 */

/* FAILED to decompile: __imp_raise @ 0x231E8 */

/* FAILED to decompile: __imp__setjmp @ 0x231EC */

/* FAILED to decompile: __imp__printf @ 0x231F0 */

/* FAILED to decompile: __imp_abort @ 0x231F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x231F8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x231FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23200 */

/* Total functions decompiled: 79, failed: 10 */
