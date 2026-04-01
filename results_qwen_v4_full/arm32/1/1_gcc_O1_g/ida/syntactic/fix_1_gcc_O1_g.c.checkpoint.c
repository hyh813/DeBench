/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_gcc_O1_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>

#define JUMPOUT(x) return
#define _printf_chk(fmt_check, ...) printf(__VA_ARGS__)
#define _longjmp_chk(buf, val) longjmp(buf, val)

/* Global variables */
jmp_buf jump_buffer;
const char *s = "Control Flow Level 1 Tests";
const char *asc_11E2C = "Control Flow Level 2 Tests";
const char *asc_12030 = "Control Flow Level 3 Tests";
char MEMORY[0x20000];

/* Function: .init_proc @ 0x10448 */
int call_weak_fn()
{
 return 0;
}

int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10454 @ 0x10454 */
void sub_10454()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0x105D8 */
int recursion_factorial(int n)
{
 if ( n <= 1 )
 return 1;
 else
 return n * recursion_factorial(n - 1);
}


/* Function: double_value @ 0x10600 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x10608 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x10610 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x10618 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x10620 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x10628 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x10644 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x10664 */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x1066C */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x10674 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x1067C */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x10684 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x1068C */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x1069C */
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


/* Function: state_done @ 0x106B4 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x106BC */
int state_error(int event)
{
 if ( event )
 return 3;
 return event;
}


/* Function: sequential_ops @ 0x106C8 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x106D4 */
int single_if(int x)
{
 if ( x > 0 )
 x *= 2;
 return x;
}


/* Function: if_else @ 0x106E0 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x106F0 */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 if ( b > 0 )
 a += b;
 return a;
}


/* Function: nested_if_deep @ 0x1070C */
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


/* Function: if_elseif_chain @ 0x10760 */
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


/* Function: if_elseif_long @ 0x10790 */
int if_elseif_long(int x)
{
 int result; // r0

 switch ( x )
 {
 case 0:
 result = 100;
 break;
 case 1:
 result = 200;
 break;
 case 2:
 result = 300;
 break;
 case 3:
 result = 400;
 break;
 case 4:
 result = 500;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: switch_small @ 0x107E0 */
int switch_small(int op)
{
 int result; // r0

 switch ( op )
 {
 case 0:
 result = 15;
 break;
 case 1:
 result = 5;
 break;
 case 2:
 result = 50;
 break;
 case 3:
 result = 2;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: switch_large @ 0x10824 */
int switch_large(int op)
{
 switch ( op )
 {
 case 0:
 return op;
 case 1:
 op = 10;
 break;
 case 2:
 op = 20;
 break;
 case 3:
 op = 30;
 break;
 case 4:
 op = 40;
 break;
 case 5:
 op = 50;
 break;
 case 6:
 op = 60;
 break;
 case 7:
 op = 70;
 break;
 case 8:
 op = 80;
 break;
 case 9:
 op = 90;
 break;
 default:
 op = -1;
 break;
 }
 return op;
}


/* Function: switch_default @ 0x108A8 */
int switch_default(int op)
{
 switch ( op )
 {
 case 2:
 return 200;
 case 3:
 return 300;
 case 1:
 return 100;
 }
 return 0;
}


/* Function: switch_fallthrough @ 0x108D8 */
int switch_fallthrough(int op)
{
 int v2; // r3
 int v3; // r3

 if ( op == 2 )
 {
 v2 = 0;
LABEL_7:
 v3 = v2 + 2 * op;
 return v3 + op;
 }
 if ( op == 3 )
 {
 v2 = 12;
 goto LABEL_7;
 }
 if ( op != 1 )
 return -1;
 v3 = 0;
 return v3 + op;
}


/* Function: loop_for_fixed @ 0x10918 */
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


/* Function: loop_while @ 0x10944 */
int loop_while(int x)
{
 int v1; // r3
 int result; // r0

 v1 = x;
 if ( x )
 {
 result = 0;
 do
 {
 ++result;
 v1 /= 10;
 }
 while ( v1 );
 }
 else
 {
 result = 0;
 }
 if ( result < 1 )
 return 1;
 return result;
}


/* Function: loop_dowhile @ 0x10980 */
int loop_dowhile(int x)
{
 int result; // r0

 result = 0;
 do
 {
 ++result;
 x /= 10;
 }
 while ( x );
 return result;
}


/* Function: loop_nested @ 0x109A8 */
int loop_nested(int m, int n)
{
 int v3; // r2
 int result; // r0
 int i; // r3

 if ( m <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 ;
 result += i;
 }
 ++v3;
 }
 while ( m != v3 );
 return result;
}


/* Function: loop_break @ 0x109EC */
int loop_break(int target)
{
 unsigned int *v1; // r12
 int *v3; // r3
 int result; // r0
 int v5; // t1
 int arr[5]; // [sp+0h] [bp-20h] BYREF

 *v1 = *(unsigned int *)"\n";
 v1[1] = 20;
 v1[2] = 30;
 v1[3] = 40;
 v1[4] = 50;
 v3 = arr;
 result = 0;
 while ( 1 )
 {
 v5 = *v3++;
 if ( v5 == target )
 break;
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x10A70 */
int loop_continue(int n)
{
 int v1; // r2
 int v2; // r3
 int result; // r0

 if ( n <= 0 )
 return 0;
 v1 = n + 1;
 v2 = 1;
 result = 0;
 do
 {
 if ( (v2 & 1) != 0 )
 result += v2;
 ++v2;
 }
 while ( v2 != v1 );
 return result;
}


/* Function: goto_forward @ 0x10AA4 */
int goto_forward(int x)
{
 if ( x > 0 )
 x *= x;
 return 2 * x;
}


/* Function: goto_backward @ 0x10AB8 */
int goto_backward(int x)
{
 int v1; // r2
 int v2; // r3
 int result; // r0

 if ( x <= 0 )
 return 1;
 v1 = x + 1;
 v2 = 1;
 result = 1;
 do
 result *= v2++;
 while ( v2 != v1 );
 return result;
}


/* Function: ternary_op @ 0x10AE8 */
int ternary_op(int a, int b)
{
 if ( b >= a )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0x10AF4 */
void test_control_flow_l1()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0

 puts(s);
 _printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 _printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 _printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
 _printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
 _printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
 _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 _printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 _printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 _printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 _printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
 _printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
 _printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
 _printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 v0 = loop_for_fixed(10);
 _printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", v0);
 v1 = loop_while(12345);
 _printf_chk(1, "CF-L1-13 (loop_while): %d\n", v1);
 v2 = loop_dowhile(9876);
 _printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", v2);
 v3 = loop_nested(3, 4);
 _printf_chk(1, "CF-L1-15 (loop_nested): %d\n", v3);
 v4 = loop_break(30);
 _printf_chk(1, "CF-L1-16 (loop_break): %d\n", v4);
 v5 = loop_break(99);
 _printf_chk(1, "CF-L1-16 (loop_break): %d\n", v5);
 v6 = loop_continue(10);
 _printf_chk(1, "CF-L1-17 (loop_continue): %d\n", v6);
 _printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 _printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
 v7 = goto_backward(5);
 _printf_chk(1, "CF-L1-19 (goto_backward): %d\n", v7);
 _printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 _printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x10D6C */
int loop_multi_exit(int target)
{
 int *v2; // r12
 int v3; // r0
 int *v4; // r2
 int i; // r3
 int v6; // t1
 int matrix[3][4]; // [sp+4h] [bp-3Ch] BYREF

 *(unsigned long long *)&matrix[0][0] = 0x200000001LL;
 *(unsigned long long *)&matrix[0][2] = 0x400000003LL;
 *(unsigned long long *)&matrix[1][0] = 0x600000005LL;
 *(unsigned long long *)&matrix[1][2] = 0x800000007LL;
 *(unsigned long long *)&matrix[2][0] = 0xA00000009LL;
 *(unsigned long long *)&matrix[2][2] = 0xC0000000BLL;
 v2 = matrix[0];
 v3 = 0;
 while ( 2 )
 {
 v4 = v2;
 for ( i = 0; i != 4; ++i )
 {
 v6 = *v4++;
 if ( v6 == target )
 return i + 10 * v3;
 }
 ++v3;
 v2 += 4;
 if ( v3 != 3 )
 continue;
 break;
 }
 return -1;
}


/* Function: infinite_loop @ 0x10E1C */
int infinite_loop(volatile int *flag)
{
 int result; // r0

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


/* Function: multi_return @ 0x10E50 */
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


/* Function: conditional_return @ 0x10E80 */
int conditional_return(int x)
{
 if ( x > 0 )
 return 2 * x;
 if ( x >= 0 )
 return 0;
 return -x;
}


/* Function: duffs_device @ 0x10EA0 */
int duffs_device(int *dst, int *src, int n)
{
 int result; // r0
 int v5; // r12
 int v6; // r4
 int v7; // t1
 int v8; // t1
 int v9; // t1
 int v10; // t1
 int v11; // t1
 int v12; // t1
 int v13; // t1

 result = n;
 if ( n <= 0 )
 return -1;
 v5 = n + 7;
 if ( n + 7 < 0 )
 v5 = n + 14;
 v6 = v5 >> 3;
 switch ( n & 7 )
 {
 case 0:
 goto LABEL_14;
 case 1:
 goto LABEL_11;
 case 2:
 goto LABEL_10;
 case 3:
 goto LABEL_9;
 case 4:
 goto LABEL_8;
 case 5:
 goto LABEL_7;
 case 6:
 goto LABEL_6;
 case 7:
 while ( 1 )
 {
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
LABEL_11:
 *dst = *src;
 if ( --v6 <= 0 )
 break;
 ++src;
 ++dst;
LABEL_14:
 v13 = *src++;
 *dst++ = v13;
 }
 break;
 default:
 return result;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x10F5C */
int loop_complex_cond(int x)
{
 int v1; // r3
 int v2; // r0
 int v3; // r1
 int v4; // cc
 char v5; // r2
 int v6; // r2

 v1 = x;
 if ( x <= 0 )
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 do
 {
 v3 += 2;
 --v1;
 v4 = ++v2 < 9;
 if ( v2 <= 9 )
 v4 = v3 < v1;
 v5 = v4;
 if ( v1 > 0 )
 v6 = v5 & 1;
 else
 v6 = 0;
 }
 while ( v6 );
 }
 return v3 + v1 + v2;
}


/* Function: loop_modify_var @ 0x10FB4 */
int loop_modify_var(int n)
{
 int result; // r0
 int v3; // r2
 int v4; // r3

 if ( n <= 0 )
 return 0;
 result = 0;
 v3 = 0;
 while ( 1 )
 {
 v4 = v3 + 1;
 if ( n <= v3 + 1 )
 break;
 result += v4;
 if ( v4 <= 5 )
 ++v3;
 else
 v3 += 3;
 }
 return result;
}


/* Function: loop_external_state @ 0x10FEC */
int loop_external_state(volatile int *flag)
{
 int result; // r0

 for ( result = 0; result != 101; ++result )
 {
 if ( *flag )
 break;
 }
 return result;
}


/* Function: tail_recursion @ 0x11010 */
int tail_recursion(int n, int acc)
{
 if ( n <= 1 )
 return acc;
 else
 return tail_recursion(n - 1, n * acc);
}


/* Function: indirect_recursion_a @ 0x11034 */
int indirect_recursion_a(int n, int depth)
{
 int v2; // r0

 if ( depth > 0 )
 {
 if ( (n & 1) != 0 )
 {
 v2 = 3 * n;
 if ( depth <= 1 )
 return v2 + 1;
 else
 return indirect_recursion_a(v2 + 2, depth - 2);
 }
 else
 {
 n /= 2;
 if ( depth > 1 )
 return indirect_recursion_a(n + 1, depth - 2);
 }
 }
 return n;
}


/* Function: call_func_ptr @ 0x1108C */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x110A0 */
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
 int *v5; // r5
 int v6; // r4
 int v7; // r6
 int v8; // t1

 if ( n <= 0 )
 return 0;
 v5 = arr - 1;
 v6 = 0;
 v7 = 0;
 do
 {
 v8 = v5[1];
 ++v5;
 v7 += cb(v8);
 ++v6;
 }
 while ( n != v6 );
 return v7;
}


/* Function: test_control_flow_l2 @ 0x1116C */
void test_control_flow_l2()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int flag; // [sp+0h] [bp-70h] BYREF
 int ext_flag; // [sp+4h] [bp-6Ch] BYREF
 int arr[5]; // [sp+8h] [bp-68h] BYREF
 int src[8]; // [sp+1Ch] [bp-54h] BYREF
 int dst[8]; // [sp+3Ch] [bp-34h] BYREF

 puts(asc_11E2C);
 v0 = loop_multi_exit(7);
 _printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 flag = 0;
 v1 = infinite_loop(&flag);
 _printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
 _printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 _printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 _printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 _printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 _printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 src[0] = 1;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 memset(dst, 0, sizeof(dst));
 v2 = duffs_device(dst, src, 8);
 _printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 _printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 _printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 ext_flag = 0;
 v5 = loop_external_state(&ext_flag);
 _printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 _printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
 v7 = tail_recursion(5, 1);
 _printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v7);
 v8 = indirect_recursion_a(10, 3);
 _printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v8);
 v9 = call_func_ptr(double_value, 5);
 _printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v9);
 v10 = call_func_ptr_array(0, 5);
 _printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v10);
 v11 = call_func_ptr_array(2, 5);
 _printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 v12 = process_with_callback(arr, 5, double_value);
 _printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v12);
}


/* Function: non_local_jump @ 0x11404 */
int non_local_jump(int x)
{
 if ( setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 _longjmp_chk(jump_buffer, 1);
 if ( x > 100 )
 _longjmp_chk(jump_buffer, 2);
 return 2 * x;
}


/* Function: cpp_exception @ 0x1146C */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x11494 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[10])(int, int); // [sp+4h] [bp-3Ch]

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


/* Function: conditional_func_ptr @ 0x1152C */
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


/* Function: state_machine @ 0x1156C */
int state_machine(int event, int state)
{
 int result; // r0

 result = state;
 switch ( state )
 {
 case 0:
 result = event == 1;
 break;
 case 1:
 if ( event == 2 )
 {
 result = 2;
 }
 else if ( event == 99 )
 {
 result = 3;
 }
 else
 {
 result = state;
 }
 break;
 case 2:
 return result;
 case 3:
 if ( event )
 result = state;
 else
 result = 0;
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x115D8 */
int fsm_func_table(int event, int state)
{
 int (*state_handlers[4])(int); // [sp+4h] [bp-1Ch]

 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ( (unsigned int)state <= 3 )
 return state_handlers[state](event);
 else
 return 3;
}


/* Function: computed_goto @ 0x11654 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [sp+4h] [bp-1Ch]

 targets[0] = &MEMORY[0x11694];
 targets[1] = &MEMORY[0x116B8];
 targets[2] = &MEMORY[0x116C0];
 targets[3] = &MEMORY[0x116C8];
 if ( (unsigned int)idx <= 3 )
 __asm__("ldr pc, [r12, #-0x14]");
 return -1;
}


/* Function: obfuscated_cf @ 0x116E4 */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x116EC */
int opaque_predicate(int x)
{
 return 2 * x;
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
 int v4; // r0
 int v5; // r0
 int labels[4]; // [sp+4h] [bp-1Ch] BYREF

 puts(asc_12030);
 v0 = non_local_jump(5);
 _printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 _printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 _printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 _printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = large_jump_table(0, 10, 5);
 _printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
 v3 = conditional_func_ptr(0, 5);
 _printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
 _printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 v4 = fsm_func_table(2, 1);
 _printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 v5 = computed_goto(labels, 2);
 _printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
 _printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 _printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 _printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x118A0 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x11B08 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x231DC */

/* FAILED to decompile: __imp_memset @ 0x231E0 */

/* FAILED to decompile: __imp___longjmp_chk @ 0x231E4 */

/* FAILED to decompile: __imp_raise @ 0x231E8 */

/* FAILED to decompile: __imp__setjmp @ 0x231EC */

/* FAILED to decompile: __imp___printf_chk @ 0x231F0 */

/* FAILED to decompile: __imp_abort @ 0x231F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x231F8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x231FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23200 */

/* Total functions decompiled: 78, failed: 10 */
