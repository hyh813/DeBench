/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_clang_O0_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <setjmp.h>

/* CRT stub definitions */
#define JUMPOUT(x) ((void)0)
int call_weak_fn(void) { return 0; }

/* Global variables */
jmp_buf jump_buffer;
const char *asc_2C7C = "=== Control Flow Level 1 ===\n";
const char *asc_2EEA = "=== Control Flow Level 2 ===\n";
const char *asc_30DE = "=== Control Flow Level 3 ===\n";

/* Forward declarations */
int double_value(int x);
int triple_value(int x);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_and(int a, int b);
int op_or(int a, int b);
int op_xor(int a, int b);
int op_shl(int a, char b);
int op_shr(int a, char b);
bool state_idle(int event);
int state_processing(int event);
int state_done(int event);
int state_error(int event);

/* Function: .init_proc @ 0x4B0 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_4BC @ 0x4BC */
void sub_4BC()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0x698 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x6E0 */
int single_if(int x)
{
 int v2; // [sp+0h] [bp-4h]

 v2 = x;
 if ( x >= 1 )
 return 2 * x;
 return v2;
}


/* Function: if_else @ 0x714 */
bool if_else(int x)
{
 return x >= 1;
}


/* Function: nested_if_2 @ 0x750 */
int nested_if_2(int a, int b)
{
 if ( a < 1 )
 return 0;
 if ( b < 1 )
 return a;
 return a + b;
}


/* Function: nested_if_deep @ 0x7B4 */
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
 if ( e < 1 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0x870 */
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


/* Function: if_elseif_long @ 0x8E4 */
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


/* Function: switch_small @ 0x990 */
int switch_small(int op)
{
 int v2; // [sp+14h] [bp-4h]

 switch ( op )
 {
 case 0:
 v2 = 15;
 break;
 case 1:
 v2 = 5;
 break;
 case 2:
 v2 = 50;
 break;
 case 3:
 v2 = 2;
 break;
 default:
 v2 = -1;
 break;
 }
 return v2;
}


/* Function: switch_large @ 0xA4C */
int switch_large(int op)
{
 int v2; // [sp+8h] [bp-4h]

 switch ( op )
 {
 case 0:
 v2 = 0;
 break;
 case 1:
 v2 = 10;
 break;
 case 2:
 v2 = 20;
 break;
 case 3:
 v2 = 30;
 break;
 case 4:
 v2 = 40;
 break;
 case 5:
 v2 = 50;
 break;
 case 6:
 v2 = 60;
 break;
 case 7:
 v2 = 70;
 break;
 case 8:
 v2 = 80;
 break;
 case 9:
 v2 = 90;
 break;
 default:
 v2 = -1;
 break;
 }
 return v2;
}


/* Function: switch_default @ 0xB2C */
int switch_default(int op)
{
 switch ( op )
 {
 case 1:
 return 100;
 case 2:
 return 200;
 case 3:
 return 300;
 }
 return 0;
}


/* Function: switch_fallthrough @ 0xBA4 */
int switch_fallthrough(int op)
{
 int v2; // [sp+4h] [bp-8h]

 v2 = 0;
 if ( op != 1 )
 {
 if ( op != 2 )
 {
 if ( op != 3 )
 return -1;
 v2 = 12;
 }
 v2 += 2 * op;
 }
 return v2 + op;
}


/* Function: loop_for_fixed @ 0xC3C */
int loop_for_fixed(int n)
{
 int i; // [sp+0h] [bp-Ch]
 int v3; // [sp+4h] [bp-8h]

 v3 = 0;
 for ( i = 0; i < n; ++i )
 v3 += i;
 return v3;
}


/* Function: loop_while @ 0xC98 */
int loop_while(int x)
{
 int v3; // [sp+4h] [bp-8h]

 v3 = 0;
 while ( x )
 {
 x /= 10;
 ++v3;
 }
 if ( v3 < 1 )
 return 1;
 else
 return v3;
}


/* Function: loop_dowhile @ 0xD1C */
int loop_dowhile(int x)
{
 int v2; // [sp+0h] [bp-8h]

 v2 = 0;
 do
 {
 x /= 10;
 ++v2;
 }
 while ( x );
 return v2;
}


/* Function: loop_nested @ 0xD78 */
int loop_nested(int m, int n)
{
 int j; // [sp+0h] [bp-14h]
 int i; // [sp+4h] [bp-10h]
 int v5; // [sp+8h] [bp-Ch]

 v5 = 0;
 for ( i = 0; i < m; ++i )
 {
 for ( j = 0; j < n; ++j )
 ++v5;
 }
 return v5;
}


/* Function: loop_break @ 0xE08 */
int loop_break(int target)
{
 int i; // [sp+0h] [bp-2Ch]
 unsigned int v3[5]; // [sp+8h] [bp-24h]
 int targeta; // [sp+1Ch] [bp-10h]

 targeta = target;
 v3[0] = 10;
 v3[1] = 20;
 v3[2] = 30;
 v3[3] = 40;
 v3[4] = 50;
 for ( i = 0; i < 5; ++i )
 {
 if ( v3[i] == targeta )
 return i;
 }
 return -1;
}


/* Function: loop_continue @ 0xEB0 */
int loop_continue(int n)
{
 int i; // [sp+0h] [bp-Ch]
 int v3; // [sp+4h] [bp-8h]

 v3 = 0;
 for ( i = 1; i <= n; ++i )
 {
 if ( i % 2 )
 v3 += i;
 }
 return v3;
}


/* Function: goto_forward @ 0xF30 */
int goto_forward(int x)
{
 int v2; // [sp+0h] [bp-8h]

 if ( x < 1 )
 v2 = x;
 else
 v2 = x * x;
 return 2 * v2;
}


/* Function: goto_backward @ 0xF80 */
int goto_backward(int x)
{
 int i; // [sp+0h] [bp-10h]
 int v3; // [sp+4h] [bp-Ch]

 if ( x <= 0 )
 return 1;
 v3 = 1;
 for ( i = 1; i <= x; ++i )
 v3 *= i;
 return v3;
}


/* Function: ternary_op @ 0x1004 */
int ternary_op(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: test_control_flow_l1 @ 0x1048 */
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
 int v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int v13; // r0
 int v14; // r0
 int v15; // r0
 int v16; // r0
 int v17; // r0
 int v18; // r0
 int v19; // r0
 int v20; // r0
 int v21; // r0
 int v22; // r0
 int v23; // r0
 int v24; // r0
 int v25; // r0
 int v26; // r0

 printf(asc_2C7C);
 v0 = sequential_ops(5, 7, 3);
 printf("CF-L1-01 (sequential_ops): %d\n", v0);
 v1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n", v1);
 v2 = single_if(-5);
 printf("CF-L1-02 (single_if): %d\n", v2);
 v3 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n", v3);
 v4 = if_else(-3);
 printf("CF-L1-03 (if_else): %d\n", v4);
 v5 = nested_if_2(10, 5);
 printf("CF-L1-04 (nested_if_2): %d\n", v5);
 v6 = nested_if_2(10, -5);
 printf("CF-L1-04 (nested_if_2): %d\n", v6);
 v7 = nested_if_2(-10, 5);
 printf("CF-L1-04 (nested_if_2): %d\n", v7);
 v8 = nested_if_deep(1, 1, 1, 1, 1);
 printf("CF-L1-05 (nested_if_deep): %d\n", v8);
 v9 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n", v9);
 v10 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n", v10);
 v11 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n", v11);
 v12 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n", v12);
 v13 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n", v13);
 v14 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n", v14);
 v15 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n", v15);
 v16 = loop_while(12345);
 printf("CF-L1-13 (loop_while): %d\n", v16);
 v17 = loop_dowhile(9876);
 printf("CF-L1-14 (loop_dowhile): %d\n", v17);
 v18 = loop_nested(3, 4);
 printf("CF-L1-15 (loop_nested): %d\n", v18);
 v19 = loop_break(30);
 printf("CF-L1-16 (loop_break): %d\n", v19);
 v20 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n", v20);
 v21 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n", v21);
 v22 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n", v22);
 v23 = goto_forward(-3);
 printf("CF-L1-18 (goto_forward): %d\n", v23);
 v24 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n", v24);
 v25 = ternary_op(10, 5);
 printf("CF-L1-20 (ternary_op): %d\n", v25);
 v26 = ternary_op(3, 8);
 printf("CF-L1-20 (ternary_op): %d\n", v26);
}


/* Function: loop_multi_exit @ 0x139C */
int loop_multi_exit(int target)
{
 int j; // [sp+0h] [bp-48h]
 int i; // [sp+4h] [bp-44h]
 unsigned int v4[12]; // [sp+8h] [bp-40h] BYREF
 int targeta; // [sp+38h] [bp-10h]

 targeta = target;
 v4[0] = 1;
 v4[1] = 2;
 v4[2] = 3;
 v4[3] = 4;
 v4[4] = 5;
 v4[5] = 6;
 v4[6] = 7;
 v4[7] = 8;
 v4[8] = 9;
 v4[9] = 10;
 v4[10] = 11;
 v4[11] = 12;
 for ( i = 0; i <= 2; ++i )
 {
 for ( j = 0; j <= 3; ++j )
 {
 if ( v4[4 * i + j] == targeta )
 return j + 10 * i;
 }
 }
 return -1;
}


/* Function: infinite_loop @ 0x1484 */
int infinite_loop(volatile int *flag)
{
 int v2; // [sp+0h] [bp-8h]

 v2 = 0;
 while ( *flag != 1 )
 {
 if ( ++v2 > 1000 )
 {
 *flag = 1;
 return v2;
 }
 }
 return v2;
}


/* Function: multi_return @ 0x14EC */
int multi_return(int x)
{
 if ( x <= -1 )
 return -1;
 if ( 2 * x >= 101 )
 return -2;
 if ( x % 2 )
 return x + 1;
 return 2 * x;
}


/* Function: conditional_return @ 0x157C */
int conditional_return(int x)
{
 if ( x >= 1 )
 return 2 * x;
 if ( x > -1 )
 return 0;
 else
 return -x;
}


/* Function: duffs_device @ 0x15E8 */
int duffs_device(int *dst, int *src, int n)
{
 int *v3; // r0
 int *v4; // r1
 int *v5; // r0
 int *v6; // r1
 int *v7; // r0
 int *v8; // r1
 int *v9; // r0
 int *v10; // r1
 int *v11; // r0
 int *v12; // r1
 int *v13; // r0
 int *v14; // r1
 int *v15; // r0
 int *v16; // r1
 int *v17; // r0
 int *v18; // r1
 int v20; // [sp+4h] [bp-14h]

 if ( n <= 0 )
 return -1;
 v20 = (n + 7) / 8;
 switch ( n % 8 )
 {
 case 0:
 goto LABEL_4;
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
 v5 = src++;
 v6 = dst++;
 *v6 = *v5;
LABEL_6:
 v7 = src++;
 v8 = dst++;
 *v8 = *v7;
LABEL_7:
 v9 = src++;
 v10 = dst++;
 *v10 = *v9;
LABEL_8:
 v11 = src++;
 v12 = dst++;
 *v12 = *v11;
LABEL_9:
 v13 = src++;
 v14 = dst++;
 *v14 = *v13;
LABEL_10:
 v15 = src++;
 v16 = dst++;
 *v16 = *v15;
LABEL_11:
 v17 = src++;
 v18 = dst++;
 *v18 = *v17;
 if ( --v20 <= 0 )
 break;
LABEL_4:
 v3 = src++;
 v4 = dst++;
 *v4 = *v3;
 }
 break;
 default:
 return n;
 }
 return n;
}


/* Function: loop_complex_cond @ 0x17D4 */
int loop_complex_cond(int x)
{
 bool v2; // [sp+0h] [bp-14h]
 int i; // [sp+4h] [bp-10h]
 int v5; // [sp+Ch] [bp-8h]

 v5 = 0;
 for ( i = 0; ; ++i )
 {
 v2 = 0;
 if ( v5 < x )
 {
 v2 = 0;
 if ( i <= 9 )
 v2 = x > 0;
 }
 if ( !v2 )
 break;
 v5 += 2;
 --x;
 }
 return v5 + x + i;
}


/* Function: loop_modify_var @ 0x1894 */
int loop_modify_var(int n)
{
 int i; // [sp+0h] [bp-Ch]
 int v3; // [sp+4h] [bp-8h]

 v3 = 0;
 for ( i = 0; i < n; ++i )
 {
 v3 += i;
 if ( i >= 6 )
 i += 2;
 }
 return v3;
}


/* Function: loop_external_state @ 0x1910 */
int loop_external_state(volatile int *flag)
{
 int i; // [sp+0h] [bp-8h]

 for ( i = 0; i < 101; ++i )
 {
 if ( *flag )
 break;
 }
 return i;
}


/* Function: recursion_factorial @ 0x1968 */
int recursion_factorial(int n)
{
 if ( n > 1 )
 return n * recursion_factorial(n - 1);
 else
 return 1;
}


/* Function: tail_recursion @ 0x19C8 */
int tail_recursion(int n, int acc)
{
 if ( n > 1 )
 return tail_recursion(n - 1, n * acc);
 else
 return acc;
}


/* Function: indirect_recursion_a @ 0x1A24 */
int indirect_recursion_a(int n, int depth)
{
 if ( depth <= 0 )
 return n;
 if ( n % 2 )
 return indirect_recursion_b(3 * n + 1, depth - 1);
 return indirect_recursion_b(n / 2, depth - 1);
}


/* Function: indirect_recursion_b @ 0x1AC0 */
int indirect_recursion_b(int n, int depth)
{
 if ( depth > 0 )
 return indirect_recursion_a(n + 1, depth - 1);
 else
 return n;
}


/* Function: call_func_ptr @ 0x1B1C */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1B4C */
int call_func_ptr_array(int idx, int x)
{
 unsigned int v3[3]; // [sp+0h] [bp-18h]
 int v4; // [sp+Ch] [bp-Ch]
 int idxa; // [sp+10h] [bp-8h]

 idxa = idx;
 v4 = x;
 v3[2] = recursion_factorial;
 v3[1] = triple_value;
 v3[0] = double_value;
 if ( idx >= 0 && idxa < 3 )
 return ((int ( *)(int))v3[idxa])(v4);
 else
 return -1;
}


/* Function: double_value @ 0x1BE8 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x1C00 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0x1C18 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1C34 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int i; // [sp+4h] [bp-14h]
 int v5; // [sp+8h] [bp-10h]

 v5 = 0;
 for ( i = 0; i < n; ++i )
 v5 += cb(arr[i]);
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1CBC */
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
 int v13; // r0
 int v14; // r0
 int v15; // r0
 int v16; // r0
 int v17; // r0
 int arr[5]; // [sp+24h] [bp-6Ch] BYREF
 int v19; // [sp+38h] [bp-58h] BYREF
 int dst[8]; // [sp+3Ch] [bp-54h] BYREF
 int src[8]; // [sp+5Ch] [bp-34h] BYREF
 int flag[5]; // [sp+7Ch] [bp-14h] BYREF

 printf(asc_2EEA);
 v0 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
 flag[0] = 0;
 v1 = infinite_loop(flag);
 printf("CF-L2-02 (infinite_loop): %d\n", v1);
 v2 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n", v2);
 v3 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n", v3);
 v4 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n", v4);
 v5 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n", v5);
 v6 = conditional_return(-5);
 printf("CF-L2-04 (conditional_return): %d\n", v6);
 src[0] = 1;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 memset(dst, 0, sizeof(dst));
 v7 = duffs_device(dst, src, 8);
 printf("CF-L2-05 (duffs_device): %d\n", v7);
 v8 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
 v9 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n", v9);
 v19 = 0;
 v10 = loop_external_state(&v19);
 printf("CF-L2-08 (loop_external_state): %d\n", v10);
 v11 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n", v11);
 v12 = tail_recursion(5, 1);
 printf("CF-L2-10 (tail_recursion): %d\n", v12);
 v13 = indirect_recursion_a(10, 3);
 printf("CF-L2-11 (indirect_recursion): %d\n", v13);
 v14 = call_func_ptr(double_value, 5);
 printf("CF-L2-12 (call_func_ptr): %d\n", v14);
 v15 = call_func_ptr_array(0, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v15);
 v16 = call_func_ptr_array(2, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 v17 = process_with_callback(arr, 5, double_value);
 printf("CF-L2-15 (process_with_callback): %d\n", v17);
}


/* Function: non_local_jump @ 0x1F78 */
int non_local_jump(int x)
{
 if ( setjmp(&jump_buffer) )
 return -1;
 if ( x <= -1 )
 longjmp(&jump_buffer, 1);
 if ( x >= 101 )
 longjmp(&jump_buffer, 2);
 return 2 * x;
}


/* Function: cpp_exception @ 0x2018 */
int cpp_exception(int x)
{
 if ( x <= -1 )
 return -1;
 if ( x < 101 )
 return 2 * x;
 return -2;
}


/* Function: large_jump_table @ 0x2074 */
int large_jump_table(int op, int a, int b)
{
 unsigned int v4[10]; // [sp+0h] [bp-40h]
 int ba; // [sp+28h] [bp-18h]
 int aa; // [sp+2Ch] [bp-14h]
 int opa; // [sp+30h] [bp-10h]

 opa = op;
 aa = a;
 ba = b;
 v4[0] = op_add;
 v4[1] = op_sub;
 v4[2] = op_mul;
 v4[3] = op_div;
 v4[4] = op_mod;
 v4[5] = op_and;
 v4[6] = op_or;
 v4[7] = op_xor;
 v4[8] = op_shl;
 v4[9] = op_shr;
 if ( op >= 0 && opa < 10 )
 return ((int ( *)(int, int))v4[opa])(aa, ba);
 else
 return -1;
}


/* Function: op_add @ 0x210C */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x212C */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x214C */
int op_mul(int a, int b)
{
 return a * b;
}


/* Function: op_div @ 0x216C */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x21C0 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x2214 */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x2234 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x2254 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x2274 */
int op_shl(int a, char b)
{
 return a << b;
}


/* Function: op_shr @ 0x2294 */
int op_shr(int a, char b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x22B4 */
int conditional_func_ptr(int mode, int x)
{
 if ( !mode )
 return double_value(x);
 if ( mode == 1 )
 return triple_value(x);
 return recursion_factorial(x);
}


/* Function: state_machine @ 0x2344 */
int state_machine(int event, int state)
{
 int v3; // [sp+Ch] [bp-4h]

 switch ( state )
 {
 case 0:
 v3 = event == 1;
 break;
 case 1:
 if ( event == 2 )
 {
 v3 = 2;
 }
 else if ( event == 99 )
 {
 v3 = 3;
 }
 else
 {
 v3 = 1;
 }
 break;
 case 2:
 v3 = 2;
 break;
 case 3:
 if ( event )
 v3 = 3;
 else
 v3 = 0;
 break;
 default:
 v3 = 3;
 break;
 }
 return v3;
}


/* Function: fsm_func_table @ 0x2438 */
int fsm_func_table(int event, int state)
{
 unsigned int v3[4]; // [sp+4h] [bp-1Ch]
 int statea; // [sp+14h] [bp-Ch]
 int eventa; // [sp+18h] [bp-8h]

 eventa = event;
 statea = state;
 v3[3] = state_error;
 v3[2] = state_done;
 v3[1] = state_processing;
 v3[0] = state_idle;
 if ( state >= 0 && statea < 4 )
 return ((int ( *)(int))v3[statea])(eventa);
 else
 return 3;
}


/* Function: state_idle @ 0x24DC */
bool state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x24FC */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 if ( event == 99 )
 return 3;
 return 1;
}


/* Function: state_done @ 0x2554 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x2568 */
int state_error(int event)
{
 if ( event )
 return 3;
 return event;
}


/* Function: computed_goto @ 0x2584 */
int computed_goto(int *labels, unsigned int idx)
{
 if ( idx < 4 )
 return labels[idx];
 return -1;
}


/* Function: obfuscated_cf @ 0x2648 */
int obfuscated_cf(int x)
{
 int v2; // [sp+0h] [bp-8h]

 v2 = x;
 if ( x * x + 1 <= -1 )
 v2 = (2 * x) | 1;
 return 2 * v2;
}


/* Function: opaque_predicate @ 0x269C */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x26E8 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x2734 */
void test_control_flow_l3()
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
 int labels[4]; // [sp+20h] [bp-10h] BYREF

 printf(asc_30DE);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 v2 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n", v2);
 v3 = cpp_exception(-5);
 printf("CF-L3-02 (cpp_exception): %d\n", v3);
 v4 = large_jump_table(0, 10, 5);
 printf("CF-L3-03 (large_jump_table): %d\n", v4);
 v5 = conditional_func_ptr(0, 5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", v5);
 v6 = state_machine(1, 0);
 printf("CF-L3-05 (state_machine): %d\n", v6);
 v7 = fsm_func_table(2, 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", v7);
 labels[3] = 3;
 labels[2] = 2;
 labels[1] = 1;
 labels[0] = 0;
 v8 = computed_goto(labels, 2u);
 printf("CF-L3-07 (computed_goto): %d\n", v8);
 v9 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
 v10 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n", v10);
 v11 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n", v11);
}


/* Function: main @ 0x2904 */
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



/* Function: .term_proc @ 0x2B88 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_raise @ 0x1420C */

/* FAILED to decompile: __imp___libc_start_main @ 0x14210 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x14214 */

/* FAILED to decompile: __imp_printf @ 0x14218 */

/* FAILED to decompile: __imp_longjmp @ 0x1421C */

/* FAILED to decompile: __imp__setjmp @ 0x14220 */

/* FAILED to decompile: __imp_abort @ 0x14224 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1422C */

/* Total functions decompiled: 79, failed: 8 */
