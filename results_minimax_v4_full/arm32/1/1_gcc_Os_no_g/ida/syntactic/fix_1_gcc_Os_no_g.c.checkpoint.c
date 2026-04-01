/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_gcc_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10448 */
#include <stdbool.h>
#include <stdio.h>
#include <setjmp.h>
#include <string.h>

/* Global variables for decompiled code */
jmp_buf jump_buffer;
unsigned int _stack_chk_guard = 0;
const char *asc_11E20 = "Control Flow Test L3";

int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10454 @ 0x10454 */
void sub_10454()
{
 /* Empty stub - original code contained unreachable JUMPOUT */
}


/* Function: main @ 0x104E0 */
int main(int argc, const char **argv, const char **envp)
{
 int v3; // r0
 int v4; // r0

 v3 = test_control_flow_l1(argc, argv, envp);
 v4 = test_control_flow_l2(v3);
 test_control_flow_l3(v4);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




int call_weak_fn()
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0x105F0 */
int recursion_factorial(int a1)
{
 int result; // r0

 result = 1;
 while ( a1 > 1 )
 result *= a1--;
 return result;
}


/* Function: double_value @ 0x1060C */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: triple_value @ 0x10614 */
int triple_value(int a1)
{
 return 3 * a1;
}


/* Function: op_add @ 0x1061C */
int op_add(int a1, int a2)
{
 return a1 + a2;
}


/* Function: op_sub @ 0x10624 */
int op_sub(int a1, int a2)
{
 return a1 - a2;
}


/* Function: op_mul @ 0x1062C */
int op_mul(int a1, int a2)
{
 return a2 * a1;
}


/* Function: op_div @ 0x10634 */
int op_div(int a1, int a2)
{
 if ( a2 )
 return a1 / a2;
 else
 return 0;
}


/* Function: op_mod @ 0x10650 */
int op_mod(int a1, int a2)
{
 if ( a2 )
 return a1 % a2;
 else
 return 0;
}


/* Function: op_and @ 0x10670 */
int op_and(int a1, int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0x10678 */
int op_or(int a1, int a2)
{
 return a1 | a2;
}


/* Function: op_xor @ 0x10680 */
int op_xor(int a1, int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0x10688 */
int op_shl(int a1, char a2)
{
 return a1 << a2;
}


/* Function: op_shr @ 0x10690 */
int op_shr(int a1, char a2)
{
 return a1 >> a2;
}


/* Function: state_idle @ 0x10698 */
int state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x106A8 */
int state_processing(int result)
{
 if ( result != 2 )
 {
 if ( result == 99 )
 return 3;
 else
 return 1;
 }
 return result;
}


/* Function: state_done @ 0x106C0 */
int state_done()
{
 return 2;
}


/* Function: state_error @ 0x106C8 */
int state_error(int result)
{
 if ( result )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x106D4 */
int sequential_ops(int a1, int a2, int a3)
{
 return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x106E0 */
int single_if(int result)
{
 if ( result > 0 )
 result *= 2;
 return result;
}


/* Function: if_else @ 0x106EC */
int if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x106FC */
int nested_if_2(int result, int a2)
{
 if ( result <= 0 )
 return 0;
 if ( a2 > 0 )
 result += a2;
 return result;
}


/* Function: nested_if_deep @ 0x10718 */
int nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 if ( a1 <= 0 )
 return 0;
 if ( a2 <= 0 )
 return 1;
 if ( a3 <= 0 )
 return 2;
 if ( a4 <= 0 )
 return 3;
 if ( a5 <= 0 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0x1076C */
int if_elseif_chain(int a1)
{
 switch ( a1 )
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
int if_elseif_long(unsigned int a1)
{
 if ( a1 > 4 )
 return -1;
 else
 return 100 * a1 + 100;
}


/* Function: switch_small @ 0x107B0 */
int switch_small(unsigned int a1)
{
 int CSWTCH_56[4]; // switch table
 CSWTCH_56[0] = 0;
 CSWTCH_56[1] = 10;
 CSWTCH_56[2] = 30;
 CSWTCH_56[3] = 60;
 if ( a1 > 3 )
 return -1;
 else
 return CSWTCH_56[a1];
}


/* Function: switch_large @ 0x107C8 */
int switch_large(unsigned int a1)
{
 if ( a1 > 9 )
 return -1;
 else
 return 10 * a1;
}


/* Function: switch_default @ 0x107DC */
int switch_default(int a1)
{
 if ( (unsigned int)(a1 - 1) > 2 )
 return 0;
 else
 return 100 * a1;
}


/* Function: switch_fallthrough @ 0x107F4 */
int switch_fallthrough(int a1)
{
 int v2; // r3
 int v3; // r3

 if ( a1 == 2 )
 {
 v2 = 0;
LABEL_6:
 v3 = v2 + 2 * a1;
 return v3 + a1;
 }
 if ( a1 == 3 )
 {
 v2 = 12;
 goto LABEL_6;
 }
 if ( a1 != 1 )
 return -1;
 v3 = 0;
 return v3 + a1;
}


/* Function: loop_for_fixed @ 0x10834 */
int loop_for_fixed(int a1)
{
 int v1; // r3
 int result; // r0

 v1 = 0;
 result = 0;
 while ( v1 < a1 )
 result += v1++;
 return result;
}


/* Function: loop_while @ 0x10854 */
int loop_while(int a1)
{
 int v1; // r3

 v1 = 0;
 while ( a1 )
 {
 a1 /= 10;
 ++v1;
 }
 if ( v1 < 1 )
 return 1;
 else
 return v1;
}


/* Function: loop_dowhile @ 0x1088C */
int loop_dowhile(int a1)
{
 int result; // r0

 result = 0;
 do
 {
 a1 /= 10;
 ++result;
 }
 while ( a1 );
 return result;
}


/* Function: loop_nested @ 0x108B4 */
int loop_nested(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 int v5; // r1

 v2 = 0;
 result = 0;
 v5 = a2 & ~(a2 >> 31);
 while ( v2 < a1 )
 {
 result += v5;
 ++v2;
 }
 return result;
}


/* Function: loop_break @ 0x108D8 */
int loop_break(int a1)
{
 unsigned int *v1; // r12
 int result; // r0
 int *v4; // r3
 int v5; // t1
 int v6; // [sp+0h] [bp-20h] BYREF

 *v1 = 10;
 v1[1] = 20;
 v1[2] = 30;
 v1[3] = 40;
 result = 0;
 v1[4] = 50;
 v4 = &v6;
 while ( 1 )
 {
 v5 = *v4++;
 if ( v5 == a1 )
 break;
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x1095C */
int loop_continue(int a1)
{
 int v2; // r3
 int result; // r0

 v2 = 1;
 result = 0;
 while ( v2 <= a1 )
 {
 if ( (v2 & 1) != 0 )
 result += v2;
 ++v2;
 }
 return result;
}


/* Function: goto_forward @ 0x10980 */
int goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return 2 * a1;
}


/* Function: goto_backward @ 0x10994 */
int goto_backward(int a1)
{
 bool v1; // cc
 int result; // r0
 int i; // r3

 v1 = a1 <= 0;
 result = 1;
 if ( !v1 )
 {
 for ( i = 1; i <= a1; ++i )
 result *= i;
 }
 return result;
}


/* Function: ternary_op @ 0x109B8 */
int ternary_op(int result, int a2)
{
 if ( a2 >= result )
 return a2;
 return result;
}


/* Function: test_control_flow_l1 @ 0x109C4 */
int test_control_flow_l1()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 const char *s = "Control Flow Test L1";

 puts(s);
 printf(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 printf(1, "CF-L1-02 (single_if): %d\n", 20);
 printf(1, "CF-L1-02 (single_if): %d\n", -5);
 printf(1, "CF-L1-03 (if_else): %d\n", 1);
 printf(1, "CF-L1-03 (if_else): %d\n", 0);
 printf(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 printf(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 printf(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 printf(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 printf(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 printf(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 printf(1, "CF-L1-08 (switch_small): %d\n", 50);
 printf(1, "CF-L1-09 (switch_large): %d\n", 70);
 printf(1, "CF-L1-10 (switch_default): %d\n", 0);
 printf(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 v0 = loop_for_fixed(10);
 printf(1, "CF-L1-12 (loop_for_fixed): %d\n", v0);
 v1 = loop_while(12345);
 printf(1, "CF-L1-13 (loop_while): %d\n", v1);
 v2 = loop_dowhile(9876);
 printf(1, "CF-L1-14 (loop_dowhile): %d\n", v2);
 v3 = loop_nested(3, 4);
 printf(1, "CF-L1-15 (loop_nested): %d\n", v3);
 v4 = loop_break(30);
 printf(1, "CF-L1-16 (loop_break): %d\n", v4);
 v5 = loop_break(99);
 printf(1, "CF-L1-16 (loop_break): %d\n", v5);
 v6 = loop_continue(10);
 printf(1, "CF-L1-17 (loop_continue): %d\n", v6);
 printf(1, "CF-L1-18 (goto_forward): %d\n", 50);
 printf(1, "CF-L1-18 (goto_forward): %d\n", -6);
 printf(1, "CF-L1-19 (goto_backward): %d\n", 120);
 printf(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return printf(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x10C34 */
int loop_multi_exit(int a1)
{
 int v2; // r2
 int *v3; // r1
 int *v4; // r0
 int i; // r3
 int v6; // t1
 unsigned int v8[12]; // [sp+4h] [bp-3Ch] BYREF

 v8[0] = 1;
 v8[1] = 2;
 v8[2] = 3;
 v8[3] = 4;
 v8[4] = 5;
 v8[5] = 6;
 v8[6] = 7;
 v8[7] = 8;
 v8[8] = 9;
 v8[9] = 10;
 v8[10] = 11;
 v8[11] = 12;
 v2 = 0;
 v3 = v8;
 do
 {
 v4 = v3;
 for ( i = 0; i != 4; ++i )
 {
 v6 = *v4++;
 if ( v6 == a1 )
 return i + 10 * v2;
 }
 ++v2;
 v3 += 4;
 }
 while ( v2 != 3 );
 return -1;
}


/* Function: infinite_loop @ 0x10CE4 */
int infinite_loop(unsigned int *a1)
{
 int result; // r0

 result = 0;
 while ( *a1 != 1 )
 {
 if ( ++result == 1001 )
 {
 *a1 = 1;
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0x10D18 */
int multi_return(int a1)
{
 int result; // r0

 if ( a1 < 0 )
 return -1;
 result = 2 * a1;
 if ( 2 * a1 > 100 )
 return -2;
 if ( (a1 & 1) != 0 )
 return a1 + 1;
 return result;
}


/* Function: conditional_return @ 0x10D48 */
int conditional_return(int result)
{
 if ( result <= 0 )
 {
 if ( result )
 return -result;
 }
 else
 {
 result *= 2;
 }
 return result;
}


/* Function: duffs_device @ 0x10D60 */
int duffs_device(int *a1, int *a2, int a3)
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

 result = a3;
 if ( a3 <= 0 )
 return -1;
 v5 = (a3 + 7) >> 3;
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
 v6 = *a2++;
 *a1++ = v6;
LABEL_4:
 v7 = *a2++;
 *a1++ = v7;
LABEL_5:
 v8 = *a2++;
 *a1++ = v8;
LABEL_6:
 v9 = *a2++;
 *a1++ = v9;
LABEL_7:
 v10 = *a2++;
 *a1++ = v10;
LABEL_8:
 v11 = *a2++;
 *a1++ = v11;
LABEL_9:
 v12 = *a2++;
 *a1++ = v12;
LABEL_10:
 --v5;
 *a1 = *a2;
 if ( !v5 )
 break;
 ++a2;
 ++a1;
 }
 break;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x10E00 */
int loop_complex_cond(int a1)
{
 int i; // r3
 int v2; // r2
 bool v3; // cc

 for ( i = 0; ; ++i )
 {
 v2 = 2 * i;
 v3 = i < 9;
 if ( i <= 9 )
 v3 = v2 < a1 - i;
 if ( !v3 )
 break;
 }
 return v2 + a1;
}


/* Function: loop_modify_var @ 0x10E2C */
int loop_modify_var(int a1)
{
 int v1; // r3
 int result; // r0

 v1 = 0;
 result = 0;
 while ( v1 < a1 )
 {
 result += v1;
 if ( v1 > 5 )
 v1 += 2;
 ++v1;
 }
 return result;
}


/* Function: loop_external_state @ 0x10E54 */
int loop_external_state(unsigned int *a1)
{
 int result; // r0

 for ( result = 0; result != 101; ++result )
 {
 if ( *a1 )
 break;
 }
 return result;
}


/* Function: tail_recursion @ 0x10E78 */
int tail_recursion(int a1, int a2)
{
 int result; // r0

 result = a2;
 while ( a1 > 1 )
 result *= a1--;
 return result;
}


/* Function: indirect_recursion_a @ 0x10E94 */
int indirect_recursion_a(int result, int a2)
{
 int v2; // r0

 while ( a2 > 0 )
 {
 if ( (result & 1) != 0 )
 {
 v2 = 3 * result;
 if ( a2 == 1 )
 return v2 + 1;
 result = v2 + 2;
 }
 else
 {
 result /= 2;
 if ( a2 == 1 )
 return result;
 ++result;
 }
 a2 -= 2;
 }
 return result;
}


/* Function: call_func_ptr @ 0x10EDC */
int call_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x10EE8 */
int call_func_ptr_array(unsigned int a1, int a2, int a3, int a4)
{
 unsigned int v5[4]; // [sp+0h] [bp-18h]

 v5[3] = a4;
 v5[0] = double_value;
 v5[1] = triple_value;
 v5[2] = recursion_factorial;
 if ( a1 > 2 )
 return -1;
 else
 return ((int ( *)(int, unsigned int))v5[a1])(a2, 0);
}


/* Function: call_virtual_func @ 0x10F80 */
int call_virtual_func(int a1, int a2)
{
 return 2 * a2;
}


/* Function: process_with_callback @ 0x10F88 */
int process_with_callback(int a1, int a2, int ( *a3)(unsigned int))
{
 int v3; // r4
 int v7; // r5
 int v9; // r0

 v3 = 0;
 v7 = 0;
 while ( v3 < a2 )
 {
 v9 = a3(*(unsigned int *)(a1 + 4 * v3++));
 v7 += v9;
 }
 return v7;
}


/* Function: test_control_flow_l2 @ 0x10FC4 */
int test_control_flow_l2()
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
 int v9; // r2
 int v10; // r3
 int v11; // r0
 int v12; // r2
 int v13; // r3
 int v14; // r0
 int v15; // r0
 int v17; // [sp+0h] [bp-70h] BYREF
 int v18; // [sp+4h] [bp-6Ch] BYREF
 unsigned int v19[5]; // [sp+8h] [bp-68h] BYREF
 int v20[8]; // [sp+1Ch] [bp-54h] BYREF
 int s[8]; // [sp+3Ch] [bp-34h] BYREF
 const char *asc_11C2D = "Control Flow Test L2";

 puts(asc_11C2D);
 v0 = loop_multi_exit(7);
 printf(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 v17 = 0;
 v1 = infinite_loop(&v17);
 printf(1, "CF-L2-02 (infinite_loop): %d\n", v1);
 printf(1, "CF-L2-03 (multi_return): %d\n", -1);
 printf(1, "CF-L2-03 (multi_return): %d\n", -2);
 printf(1, "CF-L2-03 (multi_return): %d\n", 4);
 printf(1, "CF-L2-04 (conditional_return): %d\n", 10);
 printf(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v20[0] = 1;
 v20[1] = 2;
 v20[2] = 3;
 v20[3] = 4;
 v20[4] = 5;
 v20[5] = 6;
 v20[6] = 7;
 v20[7] = 8;
 memset(s, 0, sizeof(s));
 v2 = duffs_device(s, v20, 8);
 printf(1, "CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 printf(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 printf(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 v18 = 0;
 v5 = loop_external_state(&v18);
 printf(1, "CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 printf(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
 printf(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 v7 = indirect_recursion_a(6, 1);
 printf(1, "CF-L2-11 (indirect_recursion): %d\n", v7);
 v8 = call_func_ptr(double_value, 5);
 printf(1, "CF-L2-12 (call_func_ptr): %d\n", v8);
 v11 = call_func_ptr_array(0, 5, v9, v10);
 printf(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
 v14 = call_func_ptr_array(2u, 5, v12, v13);
 printf(1, "CF-L2-13 (call_func_ptr_array): %d\n", v14);
 v19[0] = 1;
 v19[1] = 2;
 v19[2] = 3;
 v19[3] = 4;
 v19[4] = 5;
 v15 = process_with_callback((int)v19, 5, double_value);
 return printf(1, "CF-L2-15 (process_with_callback): %d\n", v15);
}


/* Function: non_local_jump @ 0x1123C */
int non_local_jump(int a1)
{
 int v1; // r1

 if ( setjmp(jump_buffer) )
 return -1;
 if ( a1 < 0 )
 {
 v1 = 1;
 goto LABEL_7;
 }
 if ( a1 > 100 )
 {
 v1 = 2;
LABEL_7:
 longjmp(jump_buffer, v1);
 }
 return 2 * a1;
}


/* Function: cpp_exception @ 0x11294 */
int cpp_exception(int a1)
{
 if ( a1 < 0 )
 return -1;
 if ( a1 > 100 )
 return -2;
 return 2 * a1;
}


/* Function: large_jump_table @ 0x112BC */
int large_jump_table(unsigned int a1, int a2, int a3)
{
 unsigned int v4[11]; // [sp+4h] [bp-3Ch]

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
 if ( a1 > 9 )
 return -1;
 else
 return ((int ( *)(int, int, int))v4[a1])(a2, a3, v4[10] ^ _stack_chk_guard);
}


/* Function: conditional_func_ptr @ 0x1136C */
int conditional_func_ptr(int a1, int a2)
{
 int ( *v3)(int); // r3

 if ( !a1 )
 return double_value(a2);
 v3 = triple_value;
 if ( a1 != 1 )
 v3 = recursion_factorial;
 return v3(a2);
}


/* Function: state_machine @ 0x113A0 */
int state_machine(int a1, int a2)
{
 int result; // r0

 result = a2;
 switch ( a2 )
 {
 case 0:
 result = a1 == 1;
 break;
 case 1:
 if ( a1 == 2 )
 {
 result = 2;
 }
 else if ( a1 == 99 )
 {
 result = 3;
 }
 break;
 case 2:
 return result;
 case 3:
 if ( !a1 )
 result = 0;
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x11404 */
int fsm_func_table(int a1, unsigned int a2)
{
 unsigned int v3[4]; // [sp+4h] [bp-1Ch]

 v3[0] = state_idle;
 v3[1] = state_processing;
 v3[2] = state_done;
 v3[3] = state_error;
 if ( a2 > 3 )
 return 3;
 else
 return ((int ( *)(int))v3[a2])(a1);
}


/* Function: computed_goto @ 0x1149C */
int computed_goto(int a1, unsigned int a2)
{
 unsigned int v3[4]; // [sp+4h] [bp-1Ch]

 v3[0] = 70876;
 v3[1] = 70908;
 v3[2] = 70916;
 v3[3] = 70924;
 if ( a2 <= 3 )
  goto *((void **)v3 + a2);
 return -1;
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
int overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return 3 * a1 + 1;
 else
 return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x1154C */
int test_control_flow_l3()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 unsigned int v7[4]; // [sp+4h] [bp-1Ch] BYREF

 puts(asc_11E20);
 v0 = non_local_jump(5);
 printf(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 printf(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 printf(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = large_jump_table(0, 10, 5);
 printf(1, "CF-L3-03 (large_jump_table): %d\n", v2);
 v3 = conditional_func_ptr(0, 5);
 printf(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
 printf(1, "CF-L3-05 (state_machine): %d\n", 1);
 v4 = fsm_func_table(2, 1u);
 printf(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
 v7[0] = 0;
 v7[1] = 1;
 v7[2] = 2;
 v7[3] = 3;
 v5 = computed_goto((int)v7, 2u);
 printf(1, "CF-L3-07 (computed_goto): %d\n", v5);
 printf(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf(1, "CF-L3-10 (overlapped_code): %d\n", 16);
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

/* FAILED to decompile: __imp__longjmp @ 0x231E4 */

/* FAILED to decompile: __imp_raise @ 0x231E8 */

/* FAILED to decompile: __imp__setjmp @ 0x231EC */

/* FAILED to decompile: __imp__printf @ 0x231F0 */

/* FAILED to decompile: __imp_abort @ 0x231F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x231F8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x231FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23200 */

/* Total functions decompiled: 78, failed: 10 */
