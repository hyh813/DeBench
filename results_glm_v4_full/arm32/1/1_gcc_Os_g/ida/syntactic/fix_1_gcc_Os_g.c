/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_gcc_Os_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>

/* Global declarations for decompiled data */
static const char s[] = "Control Flow Level 1 Tests";
static const char asc_11C2D[] = "Control Flow Level 2 Tests";
static const char asc_11E20[] = "Control Flow Level 3 Tests";
static unsigned int _stack_chk_guard = 0;

/* Switch table data */
static const int CSWTCH_56[] = {0, 50, 100, 200};

/* Jump buffer for setjmp/longjmp */
static jmp_buf jump_buffer;

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
 int result; // r0

 result = 1;
 while ( n > 1 )
 result *= n--;
 return result;
}


/* Function: double_value @ 0x1060C */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x10614 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x1061C */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x10624 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1062C */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x10634 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x10650 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x10670 */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x10678 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x10680 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x10688 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x10690 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x10698 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x106A8 */
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


/* Function: state_done @ 0x106C0 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x106C8 */
int state_error(int event)
{
 if ( event )
 return 3;
 return event;
}


/* Function: sequential_ops @ 0x106D4 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x106E0 */
int single_if(int x)
{
 if ( x > 0 )
 x *= 2;
 return x;
}


/* Function: if_else @ 0x106EC */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x106FC */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 if ( b > 0 )
 a += b;
 return a;
}


/* Function: nested_if_deep @ 0x10718 */
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


/* Function: if_elseif_chain @ 0x1076C */
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


/* Function: if_elseif_long @ 0x1079C */
int if_elseif_long(int x)
{
 if ( (unsigned int)x > 4 )
 return -1;
 else
 return 100 * x + 100;
}


/* Function: switch_small @ 0x107B0 */
int switch_small(int op)
{
 if ( (unsigned int)op > 3 )
 return -1;
 else
 return CSWTCH_56[op];
}


/* Function: switch_large @ 0x107C8 */
int switch_large(int op)
{
 if ( (unsigned int)op > 9 )
 return -1;
 else
 return 10 * op;
}


/* Function: switch_default @ 0x107DC */
int switch_default(int op)
{
 if ( (unsigned int)(op - 1) > 2 )
 return 0;
 else
 return 100 * op;
}


/* Function: switch_fallthrough @ 0x107F4 */
int switch_fallthrough(int op)
{
 int v2; // r3
 int v3; // r3

 if ( op == 2 )
 {
 v2 = 0;
LABEL_6:
 v3 = v2 + 2 * op;
 return v3 + op;
 }
 if ( op == 3 )
 {
 v2 = 12;
 goto LABEL_6;
 }
 if ( op != 1 )
 return -1;
 v3 = 0;
 return v3 + op;
}


/* Function: loop_for_fixed @ 0x10834 */
int loop_for_fixed(int n)
{
 int v1; // r3
 int result; // r0

 v1 = 0;
 result = 0;
 while ( v1 < n )
 result += v1++;
 return result;
}


/* Function: loop_while @ 0x10854 */
int loop_while(int x)
{
 int v1; // r3

 v1 = 0;
 while ( x )
 {
 x /= 10;
 ++v1;
 }
 if ( v1 < 1 )
 return 1;
 else
 return v1;
}


/* Function: loop_dowhile @ 0x1088C */
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


/* Function: loop_nested @ 0x108B4 */
int loop_nested(int m, int n)
{
 int v2; // r3
 int result; // r0
 int v5; // r1

 v2 = 0;
 result = 0;
 v5 = n & ~(n >> 31);
 while ( v2 < m )
 {
 result += v5;
 ++v2;
 }
 return result;
}


/* Function: loop_break @ 0x108D8 */
int loop_break(int target)
{
 unsigned int *v1; // r12
 int result; // r0
 int *v4; // r3
 int v5; // t1
 int arr[5]; // [sp+0h] [bp-20h] BYREF

 *v1 = 10;
 v1[1] = 20;
 v1[2] = 30;
 v1[3] = 40;
 result = 0;
 v1[4] = 50;
 v4 = arr;
 while ( 1 )
 {
 v5 = *v4++;
 if ( v5 == target )
 break;
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x1095C */
int loop_continue(int n)
{
 int v2; // r3
 int result; // r0

 v2 = 1;
 result = 0;
 while ( v2 <= n )
 {
 if ( (v2 & 1) != 0 )
 result += v2;
 ++v2;
 }
 return result;
}


/* Function: goto_forward @ 0x10980 */
int goto_forward(int x)
{
 if ( x > 0 )
 x *= x;
 return 2 * x;
}


/* Function: goto_backward @ 0x10994 */
int goto_backward(int x)
{
 bool v1; // cc
 int result; // r0
 int i; // r3

 v1 = x <= 0;
 result = 1;
 if ( !v1 )
 {
 for ( i = 1; i <= x; ++i )
 result *= i;
 }
 return result;
}


/* Function: ternary_op @ 0x109B8 */
int ternary_op(int a, int b)
{
 if ( b >= a )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0x109C4 */
void test_control_flow_l1()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0

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
 v0 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n", v0);
 v1 = loop_while(12345);
 printf("CF-L1-13 (loop_while): %d\n", v1);
 v2 = loop_dowhile(9876);
 printf("CF-L1-14 (loop_dowhile): %d\n", v2);
 v3 = loop_nested(3, 4);
 printf("CF-L1-15 (loop_nested): %d\n", v3);
 v4 = loop_break(30);
 printf("CF-L1-16 (loop_break): %d\n", v4);
 v5 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n", v5);
 v6 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n", v6);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", -6);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x10C34 */
int loop_multi_exit(int target)
{
 int v2; // r2
 int *v3; // r1
 int *v4; // r0
 int i; // r3
 int v6; // t1
 int matrix[3][4]; // [sp+4h] [bp-3Ch] BYREF

 *(unsigned long long *)&matrix[0][0] = 0x200000001LL;
 *(unsigned long long *)&matrix[0][2] = 0x400000003LL;
 *(unsigned long long *)&matrix[1][0] = 0x600000005LL;
 *(unsigned long long *)&matrix[1][2] = 0x800000007LL;
 *(unsigned long long *)&matrix[2][0] = 0xA00000009LL;
 *(unsigned long long *)&matrix[2][2] = 0xC0000000BLL;
 v2 = 0;
 v3 = matrix[0];
 do
 {
 v4 = v3;
 for ( i = 0; i != 4; ++i )
 {
 v6 = *v4++;
 if ( v6 == target )
 return i + 10 * v2;
 }
 ++v2;
 v3 += 4;
 }
 while ( v2 != 3 );
 return -1;
}


/* Function: infinite_loop @ 0x10CE4 */
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


/* Function: multi_return @ 0x10D18 */
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


/* Function: conditional_return @ 0x10D48 */
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


/* Function: duffs_device @ 0x10D60 */
int duffs_device(int *dst, int *src, int n)
{
 int result; // r0
 int v5; // r2
 int v6; // t1
 int v7; // t1
 int v8; // t1
 int v9; // t1
 int v10; // t1
 int v11; // t1
 int v12; // t1

 result = n;
 if ( n <= 0 )
 return -1;
 v5 = (n + 7) >> 3;
 switch ( result & 7 )
 {
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
 goto LABEL_4;
 default:
 while ( 1 )
 {
 v6 = *src++;
 *dst++ = v6;
LABEL_4:
 v7 = *src++;
 *dst++ = v7;
LABEL_5:
 v8 = *src++;
 *dst++ = v8;
LABEL_6:
 v9 = *src++;
 *dst++ = v9;
LABEL_7:
 v10 = *src++;
 *dst++ = v10;
LABEL_8:
 v11 = *src++;
 *dst++ = v11;
LABEL_9:
 v12 = *src++;
 *dst++ = v12;
LABEL_10:
 --v5;
 *dst = *src;
 if ( !v5 )
 break;
 ++src;
 ++dst;
 }
 break;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x10E00 */
int loop_complex_cond(int x)
{
 int i; // r3
 int v2; // r2
 bool v3; // cc

 for ( i = 0; ; ++i )
 {
 v2 = 2 * i;
 v3 = i < 9;
 if ( i <= 9 )
 v3 = v2 < x - i;
 if ( !v3 )
 break;
 }
 return v2 + x;
}


/* Function: loop_modify_var @ 0x10E2C */
int loop_modify_var(int n)
{
 int v1; // r3
 int result; // r0

 v1 = 0;
 result = 0;
 while ( v1 < n )
 {
 result += v1;
 if ( v1 > 5 )
 v1 += 2;
 ++v1;
 }
 return result;
}


/* Function: loop_external_state @ 0x10E54 */
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


/* Function: tail_recursion @ 0x10E78 */
int tail_recursion(int n, int acc)
{
 int result; // r0

 result = acc;
 while ( n > 1 )
 result *= n--;
 return result;
}


/* Function: indirect_recursion_a @ 0x10E94 */
int indirect_recursion_a(int n, int depth)
{
 int v2; // r0

 while ( depth > 0 )
 {
 if ( (n & 1) != 0 )
 {
 v2 = 3 * n;
 if ( depth == 1 )
 return v2 + 1;
 n = v2 + 2;
 }
 else
 {
 n /= 2;
 if ( depth == 1 )
 return n;
 ++n;
 }
 depth -= 2;
 }
 return n;
}


/* Function: call_func_ptr @ 0x10EDC */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x10EE8 */
int call_func_ptr_array(int idx, int x)
{
 int (*funcs[3])(int); // [sp+0h] [bp-18h]

 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ( (unsigned int)idx > 2 )
 return -1;
 else
 return ((int ( *)(int, unsigned int))funcs[idx])(x, 0);
}


/* Function: call_virtual_func @ 0x10F80 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x10F88 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v3; // r4
 int v7; // r5
 int v9; // r0

 v3 = 0;
 v7 = 0;
 while ( v3 < n )
 {
 v9 = cb(arr[v3++]);
 v7 += v9;
 }
 return v7;
}


/* Function: test_control_flow_l2 @ 0x10FC4 */
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
 int flag; // [sp+0h] [bp-70h] BYREF
 int ext_flag; // [sp+4h] [bp-6Ch] BYREF
 int arr[5]; // [sp+8h] [bp-68h] BYREF
 int src[8]; // [sp+1Ch] [bp-54h] BYREF
 int dst[8]; // [sp+3Ch] [bp-34h] BYREF

 puts(asc_11C2D);
 v0 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n\n", v0);
 flag = 0;
 v1 = infinite_loop(&flag);
 printf("CF-L2-02 (infinite_loop): %d\n", v1);
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
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
 printf("CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n", v4);
 ext_flag = 0;
 v5 = loop_external_state(&ext_flag);
 printf("CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n", v6);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 v7 = indirect_recursion_a(6, 1);
 printf("CF-L2-11 (indirect_recursion): %d\n", v7);
 v8 = call_func_ptr(double_value, 5);
 printf("CF-L2-12 (call_func_ptr): %d\n", v8);
 v9 = call_func_ptr_array(0, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v9);
 v10 = call_func_ptr_array(2, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v10);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 v11 = process_with_callback(arr, 5, double_value);
 printf("CF-L2-15 (process_with_callback): %d\n", v11);
}


/* Function: non_local_jump @ 0x1123C */
int non_local_jump(int x)
{
 int v1; // r1

 if ( setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 {
 v1 = 1;
 goto LABEL_7;
 }
 if ( x > 100 )
 {
 v1 = 2;
LABEL_7:
 longjmp(jump_buffer, v1);
 }
 return 2 * x;
}


/* Function: cpp_exception @ 0x11294 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x112BC */
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
 return ((int ( *)(int, int, int))ops[op])(a, b, v5 ^ _stack_chk_guard);
}


/* Function: conditional_func_ptr @ 0x1136C */
int conditional_func_ptr(int mode, int x)
{
 int ( *v3)(int); // r3

 if ( !mode )
 return double_value(x);
 v3 = triple_value;
 if ( mode != 1 )
 v3 = recursion_factorial;
 return v3(x);
}


/* Function: state_machine @ 0x113A0 */
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
 break;
 case 2:
 return result;
 case 3:
 if ( !event )
 result = 0;
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x11404 */
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


/* Function: computed_goto @ 0x1149C */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [sp+4h] [bp-1Ch]

 targets[0] = &&label0;
 targets[1] = &&label1;
 targets[2] = &&label2;
 targets[3] = &&label3;
 if ( (unsigned int)idx <= 3 )
 goto *targets[idx];
 return -1;

label0:
 return 0;
label1:
 return 1;
label2:
 return 2;
label3:
 return 3;
}


/* Function: obfuscated_cf @ 0x11524 */
int obfuscated_cf(int a1)
{
 return 2 * a1;
}


/* Function: opaque_predicate @ 0x1152C */
int opaque_predicate(int a1)
{
 return 2 * a1;
}


/* Function: overlapped_code @ 0x11534 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x1154C */
void test_control_flow_l3()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int labels[4]; // [sp+4h] [bp-1Ch] BYREF

 puts(asc_11E20);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = large_jump_table(0, 10, 5);
 printf("CF-L3-03 (large_jump_table): %d\n", v2);
 v3 = conditional_func_ptr(0, 5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", v3);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 v4 = fsm_func_table(2, 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", v4);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 v5 = computed_goto(labels, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v5);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 printf("CF-L3-10 (overlapped_code): %d\n", 16);
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x11924 */
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
