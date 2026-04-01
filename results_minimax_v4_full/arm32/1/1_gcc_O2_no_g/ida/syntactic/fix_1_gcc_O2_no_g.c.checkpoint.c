/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_gcc_O2_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdint.h>
#include <setjmp.h>
#include <stdbool.h>

// String constants
static const char s[] = "Control Flow Test L1";
static const char asc_11D98[] = "Control Flow Test L2";
static const char asc_11F9C[] = "Control Flow Test L3";

// Jump buffer for non-local jumps
static jmp_buf jump_buffer;

// Switch table for switch_small
static const int CSWTCH_56[4] = {0, 10, 20, 30};

// Stack guard for stack checking
extern uintptr_t _stack_chk_guard;
uintptr_t _stack_chk_guard = 0;

/* Function: .init_proc @ 0x10448 */
int init_proc()
{
 return call_weak_fn();
}


void sub_10454()
{
 return;
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
 int v1; // r3
 bool v2; // cc
 int result; // r0
 int v4; // r2

 v1 = a1;
 v2 = a1 <= 1;
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
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: triple_value @ 0x10620 */
int triple_value(int a1)
{
 return 3 * a1;
}


/* Function: op_add @ 0x10628 */
int op_add(int a1, int a2)
{
 return a1 + a2;
}


/* Function: op_sub @ 0x10630 */
int op_sub(int a1, int a2)
{
 return a1 - a2;
}


/* Function: op_mul @ 0x10638 */
int op_mul(int a1, int a2)
{
 return a2 * a1;
}


/* Function: op_div @ 0x10640 */
int op_div(int a1, int a2)
{
 if ( a2 )
 return a1 / a2;
 else
 return 0;
}


/* Function: op_mod @ 0x1065C */
int op_mod(int a1, int a2)
{
 if ( a2 )
 return a1 % a2;
 else
 return 0;
}


/* Function: op_and @ 0x1067C */
int op_and(int a1, int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0x10684 */
int op_or(int a1, int a2)
{
 return a1 | a2;
}


/* Function: op_xor @ 0x1068C */
int op_xor(int a1, int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0x10694 */
int op_shl(int a1, char a2)
{
 return a1 << a2;
}


/* Function: op_shr @ 0x1069C */
int op_shr(int a1, char a2)
{
 return a1 >> a2;
}


/* Function: state_idle @ 0x106A4 */
bool state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x106B4 */
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


/* Function: state_done @ 0x106CC */
int state_done()
{
 return 2;
}


/* Function: state_error @ 0x106D4 */
int state_error(int result)
{
 if ( result )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x106E0 */
int sequential_ops(int a1, int a2, int a3)
{
 return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x106EC */
int single_if(int result)
{
 if ( result > 0 )
 result *= 2;
 return result;
}


/* Function: if_else @ 0x106F8 */
bool if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x10708 */
int nested_if_2(int result, int a2)
{
 if ( result <= 0 )
 return 0;
 if ( a2 > 0 )
 result += a2;
 return result;
}


/* Function: nested_if_deep @ 0x10724 */
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


/* Function: if_elseif_chain @ 0x10778 */
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


/* Function: if_elseif_long @ 0x107A8 */
int if_elseif_long(unsigned int a1)
{
 if ( a1 > 4 )
 return -1;
 else
 return 100 * (a1 + 1);
}


/* Function: switch_small @ 0x107C4 */
int switch_small(unsigned int a1)
{
 if ( a1 > 3 )
 return -1;
 else
 return CSWTCH_56[a1];
}


/* Function: switch_large @ 0x107DC */
int switch_large(unsigned int a1)
{
 if ( a1 > 9 )
 return -1;
 else
 return 10 * a1;
}


/* Function: switch_default @ 0x107F0 */
int switch_default(int a1)
{
 if ( (unsigned int)(a1 - 1) > 2 )
 return 0;
 else
 return 100 * a1;
}


/* Function: switch_fallthrough @ 0x1080C */
int switch_fallthrough(int a1)
{
 int v2; // r3

 switch ( a1 )
 {
 case 2:
 v2 = 0;
 return v2 + 2 * a1 + a1;
 case 3:
 v2 = 12;
 return v2 + 2 * a1 + a1;
 case 1:
 return 1;
 default:
 return -1;
 }
}


/* Function: loop_for_fixed @ 0x10844 */
int loop_for_fixed(int a1)
{
 int v2; // r3
 int result; // r0

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += v2++;
 while ( a1 != v2 );
 return result;
}


/* Function: loop_while @ 0x10870 */
int loop_while(int a1)
{
 int v1; // r3
 int result; // r0

 v1 = a1;
 if ( !a1 )
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


/* Function: loop_dowhile @ 0x108A4 */
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


/* Function: loop_nested @ 0x108CC */
int loop_nested(int a1, int a2)
{
 int v3; // r3
 int result; // r0

 if ( a1 <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 ++v3;
 if ( a2 > 0 )
 result += a2;
 }
 while ( a1 != v3 );
 return result;
}


/* Function: loop_break @ 0x108FC */
int loop_break(int a1)
{
 int v1; // r12
 int *v2; // lr
 int v3; // t1
 unsigned int v5[5]; // [sp+0h] [bp-28h] BYREF

 v1 = 0;
 v2 = v5;
 v5[0] = 10;
 v5[1] = 20;
 v5[2] = 30;
 v5[3] = 40;
 v5[4] = 50;
 while ( 1 )
 {
 v3 = *v2++;
 if ( v3 == a1 )
 break;
 if ( ++v1 == 5 )
 return -1;
 }
 return v1;
}


/* Function: loop_continue @ 0x10984 */
int loop_continue(int a1)
{
 int v2; // r3
 int result; // r0
 int v4; // r2

 if ( a1 <= 0 )
 return 0;
 v2 = 1;
 result = 0;
 v4 = a1 + 1;
 do
 {
 if ( (v2 & 1) != 0 )
 result += v2;
 ++v2;
 }
 while ( v2 != v4 );
 return result;
}


/* Function: goto_forward @ 0x109B8 */
int goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return 2 * a1;
}


/* Function: goto_backward @ 0x109CC */
int goto_backward(int a1)
{
 bool v1; // cc
 int result; // r0
 int v4; // r3
 int v5; // r2

 v1 = a1 <= 0;
 result = 1;
 if ( !v1 )
 {
 v4 = 1;
 v5 = a1 + 1;
 do
 result *= v4++;
 while ( v5 != v4 );
 }
 return result;
}


/* Function: ternary_op @ 0x109F4 */
int ternary_op(int result, int a2)
{
 if ( a2 >= result )
 return a2;
 return result;
}


/* Function: test_control_flow_l1 @ 0x10A00 */
int test_control_flow_l1()
{
 int *v0; // lr
 int v1; // r12
 int v2; // t1
 int v3; // r12
 int *v4; // r4
 int v5; // t1
 int v7; // [sp+0h] [bp-28h] BYREF
 int v8; // [sp+4h] [bp-24h]
 int v9; // [sp+8h] [bp-20h]
 int v10; // [sp+Ch] [bp-1Ch]
 int v11; // [sp+10h] [bp-18h]

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
 printf(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 printf(1, "CF-L1-13 (loop_while): %d\n", 5);
 printf(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 printf(1, "CF-L1-15 (loop_nested): %d\n", 12);
 v0 = &v7;
 v1 = 0;
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 while ( 1 )
 {
 v2 = *v0++;
 if ( v2 == 30 )
 break;
 if ( ++v1 == 5 )
 {
 v1 = -1;
 break;
 }
 }
 printf(1, "CF-L1-16 (loop_break): %d\n", v1);
 v3 = 0;
 v4 = &v7;
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 while ( 1 )
 {
 v5 = *v4++;
 if ( v5 == 99 )
 break;
 if ( ++v3 == 5 )
 {
 v3 = -1;
 break;
 }
 }
 printf(1, "CF-L1-16 (loop_break): %d\n", v3);
 printf(1, "CF-L1-17 (loop_continue): %d\n", 25);
 printf(1, "CF-L1-18 (goto_forward): %d\n", 50);
 printf(1, "CF-L1-18 (goto_forward): %d\n", -6);
 printf(1, "CF-L1-19 (goto_backward): %d\n", 120);
 printf(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return printf(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x10CC8 */
int loop_multi_exit(int a1)
{
 int v1; // r5
 int *v2; // r6
 int *v3; // r2
 int i; // r3
 int v5; // t1
 unsigned int v7[12]; // [sp+4h] [bp-44h] BYREF

 v1 = 0;
 v2 = v7;
 v7[0] = 1;
 v7[1] = 2;
 v7[2] = 3;
 v7[3] = 4;
 v7[4] = 5;
 v7[5] = 6;
 v7[6] = 7;
 v7[7] = 8;
 v7[8] = 9;
 v7[9] = 10;
 v7[10] = 11;
 v7[11] = 12;
 while ( 2 )
 {
 v3 = v2;
 for ( i = 0; i != 4; ++i )
 {
 v5 = *v3++;
 if ( v5 == a1 )
 return i + 10 * v1;
 }
 ++v1;
 v2 += 4;
 if ( v1 != 3 )
 continue;
 break;
 }
 return -1;
}


/* Function: infinite_loop @ 0x10D78 */
int infinite_loop(unsigned int *a1)
{
 int i; // r3

 for ( i = 0; i != 1001; ++i )
 {
 if ( *a1 == 1 )
 return i;
 }
 *a1 = 1;
 return 1001;
}


/* Function: multi_return @ 0x10DB8 */
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


/* Function: conditional_return @ 0x10DE8 */
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


/* Function: duffs_device @ 0x10E00 */
int duffs_device(int *a1, int *a2, int a3)
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
 unsigned int *v13; // r3
 int v14; // t1
 int result; // r0

 if ( a3 <= 0 )
 return -1;
 v3 = a1;
 v4 = (a3 + 7) >> 3;
 switch ( a3 & 7 )
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
 v5 = *a2++;
 *a1 = v5;
 v3 = a1 + 1;
 goto LABEL_4;
 case 7:
 goto LABEL_12;
 default:
 while ( 1 )
 {
 v10 = *a2++;
 *v3++ = v10;
LABEL_12:
 v12 = *a2;
 v11 = a2 + 1;
 *v3 = v12;
 v13 = v3 + 1;
 v14 = *v11;
 a2 = v11 + 1;
 *v13 = v14;
 v3 = v13 + 1;
LABEL_4:
 v6 = *a2++;
 *v3++ = v6;
LABEL_5:
 v7 = *a2++;
 *v3++ = v7;
LABEL_6:
 v8 = *a2++;
 *v3++ = v8;
LABEL_7:
 v9 = *a2++;
 *v3++ = v9;
LABEL_8:
 --v4;
 *v3 = *a2;
 if ( !v4 )
 break;
 ++a2;
 ++v3;
 }
 result = a3;
 break;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x10EB8 */
int loop_complex_cond(int result)
{
 int v1; // r2
 int v2; // r3
 bool v3; // cc

 if ( result > 0 )
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 --result;
 v3 = ++v1 < 9;
 if ( v1 <= 9 )
 v3 = v2 < result;
 }
 while ( v3 );
 result += v2 + v1;
 }
 return result;
}


/* Function: loop_modify_var @ 0x10EEC */
int loop_modify_var(int a1)
{
 bool v1; // cc
 int result; // r0
 int v4; // r2
 int v5; // r3

 v1 = a1 <= 0;
 result = 0;
 if ( !v1 )
 {
 v4 = 0;
 while ( 1 )
 {
 v5 = v4 + 1;
 if ( a1 <= v4 + 1 )
 break;
 if ( v5 <= 5 )
 ++v4;
 result += v5;
 if ( v5 > 5 )
 v4 += 3;
 }
 }
 return result;
}


/* Function: loop_external_state @ 0x10F1C */
int loop_external_state(unsigned int *a1)
{
 int i; // r3

 for ( i = 0; i != 101; ++i )
 {
 if ( *a1 )
 break;
 }
 return i;
}


/* Function: tail_recursion @ 0x10F44 */
int tail_recursion(int a1, int a2)
{
 int v2; // r3
 bool v3; // cc
 int result; // r0
 int v5; // r2

 v2 = a1;
 v3 = a1 <= 1;
 result = a2;
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


/* Function: indirect_recursion_a @ 0x10F6C */
int indirect_recursion_a(int result, int a2)
{
 int v2; // r3
 int v3; // r1
 int v4; // r0
 int v5; // r2
 int v6; // r12

 if ( a2 > 0 )
 {
 v2 = a2;
 v3 = a2 - 2;
 if ( (result & 1) == 0 )
 goto LABEL_7;
LABEL_3:
 v4 = 3 * result;
 if ( v2 == 1 )
 {
 return v4 + 1;
 }
 else
 {
 v5 = v3;
 for ( result = v4 + 2; ; result = v6 + 1 )
 {
 v3 -= 2;
 v2 -= 2;
 if ( !v5 )
 break;
 if ( (result & 1) != 0 )
 goto LABEL_3;
LABEL_7:
 v6 = result / 2;
 result /= 2;
 if ( v2 == 1 )
 break;
 v5 = v3;
 }
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x10FD8 */
int call_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x10FE4 */
int call_func_ptr_array(unsigned int a1, int a2)
{
 int ( **v2)(int); // r12
 unsigned int v4[2]; // [sp+10h] [bp-8h] BYREF

 *v2 = double_value;
 v2[1] = triple_value;
 v2[2] = recursion_factorial;
 if ( a1 > 2 )
 return -1;
 else
 return ((int ( *)(int))v4[a1 - 4])(a2);
}


/* Function: call_virtual_func @ 0x11080 */
int call_virtual_func(int a1, int a2)
{
 return 2 * a2;
}


/* Function: process_with_callback @ 0x11088 */
int process_with_callback(int a1, int a2, int ( *a3)(int))
{
 int v4; // r4
 int v6; // r6
 int v7; // r5
 int v8; // t1

 if ( a2 <= 0 )
 return 0;
 v4 = 0;
 v6 = 0;
 v7 = a1 - 4;
 do
 {
 v8 = *(unsigned int *)(v7 + 4);
 v7 += 4;
 ++v4;
 v6 += a3(v8);
 }
 while ( a2 != v4 );
 return v6;
}


/* Function: test_control_flow_l2 @ 0x110D0 */
int test_control_flow_l2()
{
 int v0; // r0
 int i; // r2
 int v2; // r0
 int v3; // r1
 int v4; // r2
 int v5; // r3
 int j; // r2
 int v7; // r0
 int v8; // r0
 int v9; // lr
 int *v10; // r12
 int v11; // t1
 unsigned int v13[5]; // [sp+8h] [bp-68h] BYREF
 int v14[8]; // [sp+1Ch] [bp-54h] BYREF
 int s[8]; // [sp+3Ch] [bp-34h] BYREF

 puts(asc_11D98);
 v0 = loop_multi_exit(7);
 printf(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 for ( i = 0; i != 1001; ++i )
 ;
 printf(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
 printf(1, "CF-L2-03 (multi_return): %d\n", -1);
 printf(1, "CF-L2-03 (multi_return): %d\n", -2);
 printf(1, "CF-L2-03 (multi_return): %d\n", 4);
 printf(1, "CF-L2-04 (conditional_return): %d\n", 10);
 printf(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v14[0] = 1;
 v14[1] = 2;
 v14[2] = 3;
 v14[3] = 4;
 v14[4] = 5;
 v14[5] = 6;
 v14[6] = 7;
 v14[7] = 8;
 memset(s, 0, sizeof(s));
 v2 = duffs_device(s, v14, 8);
 printf(1, "CF-L2-05 (duffs_device): %d\n", v2);
 printf(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v4 = 0;
 v3 = 0;
 while ( 1 )
 {
 v5 = v3 + 1;
 if ( v3 + 1 > 9 )
 break;
 if ( v5 <= 5 )
 ++v3;
 v4 += v5;
 if ( v5 > 5 )
 v3 += 3;
 }
 printf(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 for ( j = 0; j != 101; ++j )
 ;
 printf(1, "CF-L2-08 (loop_external_state): %d\n", 101);
 printf(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 printf(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 printf(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 printf(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 v7 = double_value(5);
 printf(1, "CF-L2-13 (call_func_ptr_array): %d\n", v7);
 v8 = recursion_factorial(5);
 printf(1, "CF-L2-13 (call_func_ptr_array): %d\n", v8);
 v9 = 0;
 v10 = v13;
 v13[0] = 1;
 v13[1] = 2;
 v13[2] = 3;
 v13[3] = 4;
 v13[4] = 5;
 do
 {
 v11 = *v10++;
 v9 += 2 * v11;
 }
 while ( v14 != v10 );
 return printf(1, "CF-L2-15 (process_with_callback): %d\n", v9);
}


/* Function: non_local_jump @ 0x11380 */
int non_local_jump(int a1)
{
 if ( setjmp(jump_buffer) )
 return -1;
 if ( a1 < 0 )
 longjmp(jump_buffer, 1);
 if ( a1 > 100 )
 longjmp(jump_buffer, 2);
 return 2 * a1;
}


/* Function: cpp_exception @ 0x113EC */
int cpp_exception(int a1)
{
 if ( a1 < 0 )
 return -1;
 if ( a1 > 100 )
 return -2;
 return 2 * a1;
}


/* Function: large_jump_table @ 0x11414 */
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


/* Function: conditional_func_ptr @ 0x114C4 */
int conditional_func_ptr(int a1, int a2)
{
 int ( *v3)(int); // r2

 if ( !a1 )
 return double_value(a2);
 v3 = triple_value;
 if ( a1 != 1 )
 v3 = recursion_factorial;
 return v3(a2);
}


/* Function: state_machine @ 0x114F8 */
int state_machine(int result, int a2)
{
 switch ( a2 )
 {
 case 0:
 result = result == 1;
 break;
 case 1:
 if ( result != 2 )
 {
 if ( result == 99 )
 result = 3;
 else
 result = a2;
 }
 break;
 case 2:
 result = a2;
 break;
 case 3:
 if ( result )
 result = a2;
 else
 result = 0;
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x1155C */
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


/* Function: computed_goto @ 0x115F4 */
int computed_goto(int a1, unsigned int a2)
{
 unsigned int v3[4]; // [sp+4h] [bp-1Ch]

 v3[0] = 71272;
 v3[1] = 71264;
 v3[2] = 71256;
 v3[3] = 71220;
 if ( a2 <= 3 )
 {
 /* Computed jump using inline assembly */
 __asm__ volatile ("LDR PC, [R1, #-0x14]");
 }
 return -1;
}


/* Function: obfuscated_cf @ 0x11684 */
int obfuscated_cf(int a1)
{
 return 2 * a1;
}


/* Function: opaque_predicate @ 0x1168C */
int opaque_predicate(int a1)
{
 return 2 * a1;
}


/* Function: overlapped_code @ 0x11694 */
int overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return 3 * a1 + 1;
 else
 return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x116AC */
int test_control_flow_l3()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 unsigned int v6[4]; // [sp+4h] [bp-1Ch] BYREF

 puts(asc_11F9C);
 v0 = non_local_jump(5);
 printf(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 printf(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 printf(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = op_add(10, 5);
 printf(1, "CF-L3-03 (large_jump_table): %d\n", v2);
 printf(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf(1, "CF-L3-05 (state_machine): %d\n", 1);
 v3 = state_processing(2);
 printf(1, "CF-L3-06 (fsm_func_table): %d\n", v3);
 v6[0] = 0;
 v6[1] = 1;
 v6[2] = 2;
 v6[3] = 3;
 v4 = computed_goto((int)v6, 2u);
 printf(1, "CF-L3-07 (computed_goto): %d\n", v4);
 printf(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x11A74 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x231DC */

/* FAILED to decompile: __imp_memset @ 0x231E0 */

/* FAILED to decompile: __imp___longjmp_chk @ 0x231E4 */

/* FAILED to decompile: __imp_raise @ 0x231E8 */

/* FAILED to decompile: __imp__setjmp @ 0x231EC */

/* FAILED to decompile: __imp__printf @ 0x231F0 */

/* FAILED to decompile: __imp_abort @ 0x231F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x231F8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x231FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23200 */

/* Total functions decompiled: 78, failed: 10 */
