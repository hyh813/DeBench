/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>

typedef unsigned int undefined4;
typedef unsigned char byte;
typedef unsigned int uint;
typedef undefined4 (*code)(int);
typedef undefined4 (*code2)(undefined4,int);

/* Forward declarations */
int double_value(int param_1);
int triple_value(int param_1);
int recursion_factorial(int param_1);
int op_add(int param_1,int param_2);
int op_sub(int param_1,int param_2);
int op_mul(int param_1,int param_2);
undefined4 op_div(undefined4 param_1,int param_2);
undefined4 op_mod(undefined4 param_1,int param_2);
uint op_and(uint param_1,uint param_2);
uint op_or(uint param_1,uint param_2);
uint op_xor(uint param_1,uint param_2);
int op_shl(int param_1,uint param_2);
int op_shr(int param_1,uint param_2);
int state_idle(int param_1);
int state_processing(int param_1);
undefined4 state_done(int param_1);
undefined4 state_error(int param_1);
undefined4 call_func_ptr(code *param_1,undefined4 param_2);
undefined4 conditional_func_ptr(int param_1,undefined4 param_2);

/* Global variables */
jmp_buf jump_buffer;

/* Data definitions */
char DAT_00012eea[] = "Control Flow Tests L2\n";
char DAT_000130de[] = "Control Flow Tests L3\n";


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00010698 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 000106e0 */

int single_if(int param_1)

{
 undefined4 local_4;
 
 local_4 = param_1;
 if (0 < param_1) {
 local_4 = param_1 << 1;
 }
 return local_4;
}



/* Function: if_else @ 00010714 */

undefined4 if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00010750 */

int nested_if_2(int param_1,int param_2)

{
 int local_4;
 
 if (param_1 < 1) {
 local_4 = 0;
 }
 else {
 local_4 = param_1;
 if (0 < param_2) {
 local_4 = param_1 + param_2;
 }
 }
 return local_4;
}



/* Function: nested_if_deep @ 000107b4 */

undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 local_4;
 
 if (param_1 < 1) {
 local_4 = 0;
 }
 else if (param_2 < 1) {
 local_4 = 1;
 }
 else if (param_3 < 1) {
 local_4 = 2;
 }
 else if (param_4 < 1) {
 local_4 = 3;
 }
 else if (param_5 < 1) {
 local_4 = 4;
 }
 else {
 local_4 = 5;
 }
 return local_4;
}



/* Function: if_elseif_chain @ 00010870 */

undefined4 if_elseif_chain(int param_1)

{
 undefined4 local_4;
 
 if (param_1 == 0) {
 local_4 = 10;
 }
 else if (param_1 == 1) {
 local_4 = 0x14;
 }
 else if (param_1 == 2) {
 local_4 = 0x1e;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}



/* Function: if_elseif_long @ 000108e4 */

undefined4 if_elseif_long(int param_1)

{
 undefined4 local_4;
 
 if (param_1 == 0) {
 local_4 = 100;
 }
 else if (param_1 == 1) {
 local_4 = 200;
 }
 else if (param_1 == 2) {
 local_4 = 300;
 }
 else if (param_1 == 3) {
 local_4 = 400;
 }
 else if (param_1 == 4) {
 local_4 = 500;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}



/* Function: switch_small @ 00010990 */

undefined4 switch_small(undefined4 param_1)

{
 undefined4 local_c;
 
 switch(param_1) {
 case 0:
 local_c = 0xf;
 break;
 case 1:
 local_c = 5;
 break;
 case 2:
 local_c = 0x32;
 break;
 case 3:
 local_c = __divsi3(10,5);
 break;
 default:
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: switch_large @ 00010a4c */

undefined4 switch_large(undefined4 param_1)

{
 undefined4 local_4;
 
 switch(param_1) {
 case 0:
 local_4 = 0;
 break;
 case 1:
 local_4 = 10;
 break;
 case 2:
 local_4 = 0x14;
 break;
 case 3:
 local_4 = 0x1e;
 break;
 case 4:
 local_4 = 0x28;
 break;
 case 5:
 local_4 = 0x32;
 break;
 case 6:
 local_4 = 0x3c;
 break;
 case 7:
 local_4 = 0x46;
 break;
 case 8:
 local_4 = 0x50;
 break;
 case 9:
 local_4 = 0x5a;
 break;
 default:
 local_4 = 0xffffffff;
 }
 return local_4;
}



/* Function: switch_default @ 00010b2c */

undefined4 switch_default(int param_1)

{
 undefined4 local_4;
 
 if (param_1 == 1) {
 local_4 = 100;
 }
 else if (param_1 == 2) {
 local_4 = 200;
 }
 else if (param_1 == 3) {
 local_4 = 300;
 }
 else {
 local_4 = 0;
 }
 return local_4;
}



/* Function: switch_fallthrough @ 00010ba4 */

int switch_fallthrough(int param_1)

{
 int local_8;
 
 local_8 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 local_8 = 0xc;
 }
 local_8 = local_8 + param_1 * 2;
 }
 return local_8 + param_1;
}



/* Function: loop_for_fixed @ 00010c3c */

int loop_for_fixed(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 }
 return local_8;
}



/* Function: loop_while @ 00010c98 */

int loop_while(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
 local_8 = local_8 + 1;
 }
 if (local_8 < 1) {
 local_c = 1;
 }
 else {
 local_c = local_8;
 }
 return local_c;
}



/* Function: loop_dowhile @ 00010d1c */

int loop_dowhile(int param_1)

{
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 local_4 = param_1;
 do {
 local_4 = local_4 / 10;
 local_8 = local_8 + 1;
 } while (local_4 != 0);
 return local_8;
}



/* Function: loop_nested @ 00010d78 */

int loop_nested(int param_1,int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_c = local_c + 1;
 }
 }
 return local_c;
}



/* Function: loop_break @ 00010e08 */

int loop_break(int param_1)

{
 int local_34;
 int local_2c [7];
 
 local_2c[5] = param_1;
 local_2c[0] = 10;
 local_2c[1] = 0x14;
 local_2c[2] = 0x1e;
 local_2c[3] = 0x28;
 local_2c[4] = 0x32;
 local_34 = 0;
 while( true ) {
 if (4 < local_34) {
 return -1;
 }
 if (local_2c[local_34] == param_1) break;
 local_34 = local_34 + 1;
 }
 return local_34;
}



/* Function: loop_continue @ 00010eb0 */

int loop_continue(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 1; local_c <= param_1; local_c = local_c + 1) {
 if (local_c % 2 != 0) {
 local_8 = local_8 + local_c;
 }
 }
 return local_8;
}



/* Function: goto_forward @ 00010f30 */

int goto_forward(int param_1)

{
 int local_8;
 
 local_8 = param_1;
 if (0 < param_1) {
 local_8 = param_1 * param_1;
 }
 return local_8 << 1;
}



/* Function: goto_backward @ 00010f80 */

int goto_backward(int param_1)

{
 undefined4 local_10;
 undefined4 local_c;
 undefined4 local_4;
 
 if (param_1 < 1) {
 local_4 = 1;
 }
 else {
 local_c = 1;
 for (local_10 = 1; local_10 <= param_1; local_10 = local_10 + 1) {
 local_c = local_c * local_10;
 }
 local_4 = local_c;
 }
 return local_4;
}



/* Function: ternary_op @ 00011004 */

int ternary_op(int param_1,int param_2)

{
 int local_c;
 
 local_c = param_2;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 return local_c;
}



/* Function: test_control_flow_l1 @ 00011048 */

void test_control_flow_l1(void)

{
 undefined4 uVar1;
 
 printf("Control Flow Tests L1\n");
 uVar1 = sequential_ops(10,5,3);
 printf("CF-L1-01 (sequential_ops): %d\n",uVar1);
 uVar1 = single_if(5);
 printf("CF-L1-02 (single_if): %d\n",uVar1);
 uVar1 = single_if(5);
 printf("CF-L1-02 (single_if): %d\n",uVar1);
 uVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",uVar1);
 uVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",uVar1);
 uVar1 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_2(10,0xfffffffb);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_2(0xfffffff6,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",uVar1);
 uVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",uVar1);
 uVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",uVar1);
 uVar1 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n",uVar1);
 uVar1 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",uVar1);
 uVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",uVar1);
 uVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",uVar1);
 uVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039);
 printf("CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",uVar1);
 uVar1 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",uVar1);
 uVar1 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",uVar1);
 uVar1 = goto_forward(0xfffffffd);
 printf("CF-L1-18 (goto_forward): %d\n",uVar1);
 uVar1 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",uVar1);
 uVar1 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",uVar1);
 uVar1 = ternary_op(3,8);
 printf("CF-L1-20 (ternary_op): %d\n",uVar1);
 return;
}



/* Function: loop_multi_exit @ 0001139c */

int loop_multi_exit(int param_1)

{
 int local_50;
 int local_4c;
 int local_48 [14];
 
 local_48[0xc] = param_1;
 local_48[0] = 1;
 local_48[1] = 2;
 local_48[2] = 3;
 local_48[3] = 4;
 local_48[4] = 5;
 local_48[5] = 6;
 local_48[6] = 7;
 local_48[7] = 8;
 local_48[8] = 9;
 local_48[9] = 10;
 local_48[10] = 0xb;
 local_48[0xb] = 0xc;
 local_4c = 0;
 do {
 if (2 < local_4c) {
 return -1;
 }
 for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
 if (local_48[local_4c * 4 + local_50] == param_1) {
 return local_50 + local_4c * 10;
 }
 }
 local_4c = local_4c + 1;
 } while( true );
}



/* Function: infinite_loop @ 00011484 */

int infinite_loop(int *param_1)

{
 int local_8;
 
 local_8 = 0;
 do {
 if (*param_1 == 1) {
 return local_8;
 }
 local_8 = local_8 + 1;
 } while (local_8 < 0x3e9);
 *param_1 = 1;
 return local_8;
}



/* Function: multi_return @ 000114ec */

int multi_return(uint param_1)

{
 undefined4 local_4;
 
 if (param_1 < 0x80000000) {
 local_4 = param_1 << 1;
 if (local_4 < 0x65) {
 if ((int)param_1 % 2 != 0) {
 local_4 = param_1 + 1;
 }
 }
 else {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: conditional_return @ 0001157c */

int conditional_return(uint param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 if ((int)param_1 < 1) {
 if (param_1 < 0x80000000) {
 local_c = 0;
 }
 else {
 local_c = -param_1;
 }
 local_8 = local_c;
 }
 else {
 local_8 = param_1 << 1;
 }
 return local_8;
}



/* Function: duffs_device @ 000115e8 */

int duffs_device(undefined4 *param_1,undefined4 *param_2,int param_3)

{
 int local_14;
 undefined4 *local_c;
 undefined4 *local_8;
 int local_4;
 
 if (param_3 < 1) {
 local_4 = -1;
 }
 else {
 local_14 = (int)(param_3 + 7 + ((uint)(param_3 + 7 >> 0x1f) >> 0x1d)) >> 3;
 local_c = param_2;
 local_8 = param_1;
 local_4 = param_3;
 switch(param_3 % 8) {
 case 0:
 local_c = param_2;
 local_8 = param_1;
 do {
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_7:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_6:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_5:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_4:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_3:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_2:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_1:
 *local_8 = *local_c;
 local_14 = local_14 + -1;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
 } while (0 < local_14);
 break;
 case 1:
 goto switchD_00011658_caseD_1;
 case 2:
 goto switchD_00011658_caseD_2;
 case 3:
 goto switchD_00011658_caseD_3;
 case 4:
 goto switchD_00011658_caseD_4;
 case 5:
 goto switchD_00011658_caseD_5;
 case 6:
 goto switchD_00011658_caseD_6;
 case 7:
 goto switchD_00011658_caseD_7;
 }
 }
 return local_4;
}



/* Function: loop_complex_cond @ 000117d4 */

int loop_complex_cond(int param_1)

{
 bool bVar1;
 int local_10;
 int local_c;
 int local_8;
 
 local_8 = 0;
 local_10 = 0;
 local_c = param_1;
 while( true ) {
 bVar1 = false;
 if ((local_8 < local_c) && (bVar1 = false, local_10 < 10)) {
 bVar1 = 0 < local_c;
 }
 if (!bVar1) break;
 local_8 = local_8 + 2;
 local_c = local_c + -1;
 local_10 = local_10 + 1;
 }
 return local_8 + local_c + local_10;
}



/* Function: loop_modify_var @ 00011894 */

int loop_modify_var(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 if (5 < local_c) {
 local_c = local_c + 2;
 }
 }
 return local_8;
}



/* Function: loop_external_state @ 00011910 */

int loop_external_state(int *param_1)

{
 int local_8;
 
 local_8 = 0;
 do {
 if (*param_1 != 0) {
 return local_8;
 }
 local_8 = local_8 + 1;
 } while (local_8 < 0x65);
 return local_8;
}



/* Function: recursion_factorial @ 00011968 */

int recursion_factorial(int param_1)

{
 undefined4 local_c;
 
 if (param_1 < 2) {
 local_c = 1;
 }
 else {
 local_c = recursion_factorial(param_1 + -1);
 local_c = param_1 * local_c;
 }
 return local_c;
}



/* Function: tail_recursion @ 000119c8 */

int tail_recursion(int param_1,int param_2)

{
 undefined4 local_c;
 
 local_c = param_2;
 if (1 < param_1) {
 local_c = tail_recursion(param_1 + -1,param_1 * param_2);
 }
 return local_c;
}



/* Function: indirect_recursion_a @ 00011a24 */

int indirect_recursion_a(int param_1,int param_2)

{
 undefined4 local_c;
 
 local_c = param_1;
 if (0 < param_2) {
 if (param_1 % 2 == 0) {
 local_c = indirect_recursion_b(param_1 / 2,param_2 + -1);
 }
 else {
 local_c = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
 }
 }
 return local_c;
}



/* Function: indirect_recursion_b @ 00011ac0 */

int indirect_recursion_b(int param_1,int param_2)

{
 undefined4 local_c;
 
 local_c = param_1;
 if (0 < param_2) {
 local_c = indirect_recursion_a(param_1 + 1,param_2 + -1);
 }
 return local_c;
}



/* Function: call_func_ptr @ 00011b1c */

undefined4 call_func_ptr(code *param_1,undefined4 param_2)

{
 return (*param_1)(param_2);
}



/* Function: call_func_ptr_array @ 00011b4c */

undefined4 call_func_ptr_array(int param_1,undefined4 param_2)

{
 code *local_20 [4];
 int local_10;
 undefined4 local_c;
 
 local_10 = param_1;
 local_20[3] = (code *)triple_value;
 local_20[2] = recursion_factorial;
 local_20[1] = triple_value;
 local_20[0] = double_value;
 if ((param_1 < 0) || (2 < param_1)) {
 local_c = 0xffffffff;
 }
 else {
 local_c = (*local_20[param_1])(param_2);
 }
 return local_c;
}



/* Function: double_value @ 00011be8 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00011c00 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_virtual_func @ 00011c18 */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00011c34 */

int process_with_callback(int param_1,int param_2,code *param_3)

{
 int iVar1;
 undefined4 local_1c;
 undefined4 local_18;
 
 local_18 = 0;
 for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
 iVar1 = (*param_3)(*(undefined4 *)(param_1 + local_1c * 4));
 local_18 = local_18 + iVar1;
 }
 return local_18;
}



/* Function: test_control_flow_l2 @ 00011cbc */

void test_control_flow_l2(void)

{
 undefined4 uVar1;
 undefined4 local_74;
 undefined4 uStack_70;
 undefined4 uStack_6c;
 undefined4 uStack_68;
 undefined4 uStack_64;
 undefined4 local_60;
 undefined4 local_5c;
 undefined4 local_58;
 undefined4 local_54;
 undefined4 local_50;
 undefined4 local_4c;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 
 printf(DAT_00012eea);
 uVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_1c = 0;
 uVar1 = infinite_loop(&local_1c);
 printf("CF-L2-02 (infinite_loop): %d\n",uVar1);
 uVar1 = multi_return(50);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = multi_return(0x80000000);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = conditional_return(0);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1);
 uVar1 = conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1);
 local_3c = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 local_40 = 0;
 local_44 = 0;
 local_48 = 0;
 local_4c = 0;
 local_50 = 0;
 local_54 = 0;
 local_58 = 0;
 local_5c = 0;
 uVar1 = duffs_device(&local_5c,&local_3c,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_60 = 0;
 uVar1 = loop_external_state(&local_60);
 printf("CF-L2-08 (loop_external_state): %d\n",uVar1);
 uVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar1);
 uVar1 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_74 = 1;
 uStack_70 = 2;
 uStack_6c = 3;
 uStack_68 = 4;
 uStack_64 = 5;
 uVar1 = process_with_callback(&local_74,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",uVar1);
 return;
}



/* Function: non_local_jump @ 00011f78 */

int non_local_jump(uint param_1)

{
 int iVar1;
 int local_c;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (0x7fffffff < param_1) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < (int)param_1) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 local_c = param_1 << 1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: cpp_exception @ 00012018 */

int cpp_exception(uint param_1)

{
 undefined4 local_4;
 
 if (param_1 < 0x80000000) {
 if ((int)param_1 < 0x65) {
 local_4 = param_1 << 1;
 }
 else {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: large_jump_table @ 00012074 */

undefined4 large_jump_table(int param_1,undefined4 param_2,undefined4 param_3)

{
 code2 *apcStack_48 [10];
 undefined4 local_18;
 undefined4 local_14;
 
 local_18 = param_1;
 apcStack_48[0] = (code2 *)op_add;
 apcStack_48[1] = (code2 *)op_sub;
 apcStack_48[2] = (code2 *)op_mul;
 apcStack_48[3] = (code2 *)op_div;
 apcStack_48[4] = (code2 *)op_mod;
 apcStack_48[5] = (code2 *)op_and;
 apcStack_48[6] = (code2 *)op_or;
 apcStack_48[7] = (code2 *)op_xor;
 apcStack_48[8] = (code2 *)op_shl;
 apcStack_48[9] = (code2 *)op_shr;
 if ((param_1 < 0) || (9 < param_1)) {
 local_14 = 0xffffffff;
 }
 else {
 local_14 = (*apcStack_48[param_1])(param_2,param_3);
 }
 return local_14;
}



/* Function: op_add @ 0001210c */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 0001212c */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 0001214c */

int op_mul(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: op_div @ 0001216c */

undefined4 op_div(undefined4 param_1,int param_2)

{
 undefined4 local_14;
 
 if (param_2 == 0) {
 local_14 = 0;
 }
 else {
 local_14 = __divsi3(param_1,param_2);
 }
 return local_14;
}



/* Function: op_mod @ 000121c0 */

undefined4 op_mod(undefined4 param_1,int param_2)

{
 undefined4 extraout_r1;
 undefined4 local_14;
 
 if (param_2 == 0) {
 local_14 = 0;
 }
 else {
 __aeabi_idivmod(param_1,param_2);
 local_14 = extraout_r1;
 }
 return local_14;
}



/* Function: op_and @ 00012214 */

uint op_and(uint param_1,uint param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 00012234 */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 00012254 */

uint op_xor(uint param_1,uint param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 00012274 */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (param_2 & 0xff);
}



/* Function: op_shr @ 00012294 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0xff);
}



/* Function: conditional_func_ptr @ 000122b4 */

undefined4 conditional_func_ptr(int param_1,undefined4 param_2)

{
 code *local_14;
 
 if (param_1 == 0) {
 local_14 = double_value;
 }
 else if (param_1 == 1) {
 local_14 = triple_value;
 }
 else {
 local_14 = recursion_factorial;
 }
 return (*local_14)(param_2);
}



/* Function: state_machine @ 00012344 */

undefined4 state_machine(int param_1,undefined4 param_2)

{
 undefined4 local_4;
 
 switch(param_2) {
 case 0:
 if (param_1 == 1) {
 local_4 = 1;
 }
 else {
 local_4 = 0;
 }
 break;
 case 1:
 if (param_1 == 2) {
 local_4 = 2;
 }
 else if (param_1 == 99) {
 local_4 = 3;
 }
 else {
 local_4 = 1;
 }
 break;
 case 2:
 local_4 = 2;
 break;
 case 3:
 if (param_1 == 0) {
 local_4 = 0;
 }
 else {
 local_4 = 3;
 }
 break;
 default:
 local_4 = 3;
 }
 return local_4;
}



/* Function: fsm_func_table @ 00012438 */

undefined4 fsm_func_table(undefined4 param_1,int param_2)

{
 code *local_24 [4];
 int local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = param_1;
 local_14 = param_2;
 local_24[3] = (code *)state_error;
 local_24[2] = (code *)state_done;
 local_24[1] = (code *)state_processing;
 local_24[0] = (code *)state_idle;
 if ((param_2 < 0) || (3 < param_2)) {
 local_c = 3;
 }
 else {
 local_c = (*local_24[param_2])(local_10);
 }
 return local_c;
}



/* Function: state_idle @ 000124dc */

int state_idle(int param_1)

{
 int local_4;
 
 if (param_1 == 1) {
 local_4 = 1;
 }
 else {
 local_4 = 0;
 }
 return local_4;
}



/* Function: state_processing @ 000124fc */

int state_processing(int param_1)

{
 int local_4;
 
 if (param_1 == 2) {
 local_4 = 2;
 }
 else if (param_1 == 99) {
 local_4 = 3;
 }
 else {
 local_4 = 1;
 }
 return local_4;
}



/* Function: state_done @ 00012554 */

undefined4 state_done(int param_1)

{
 (void)param_1;
 return 2;
}



/* Function: state_error @ 00012568 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Data definitions for computed_goto */
char DAT_000125fc[] = "";
char DAT_00012608[] = "";
char DAT_00012614[] = "";
char DAT_00012620[] = "";

/* Function: computed_goto @ 00012584 */

undefined4 computed_goto(undefined4 param_1,int param_2)

{
 undefined4 uVar1;
 char *local_1c [4];
 int local_c;
 undefined4 local_8;
 
 local_8 = param_1;
 local_c = param_2;
 local_1c[3] = DAT_00012620;
 local_1c[2] = DAT_00012614;
 local_1c[1] = DAT_00012608;
 local_1c[0] = DAT_000125fc;
 if ((-1 < param_2) && (param_2 < 4)) {
 /* WARNING: Could not recover jumptable at 0x0001263c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = param_2;
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: obfuscated_cf @ 00012648 */

int obfuscated_cf(uint param_1)

{
 undefined4 local_8;
 
 local_8 = param_1;
 if (param_1 * param_1 == -2 || (int)(param_1 * param_1 + 1) < -1) {
 local_8 = param_1 << 1 | 1;
 }
 return local_8 << 1;
}



/* Function: opaque_predicate @ 0001269c */

/* WARNING: Removing unreachable block (ram,0x000126cc) */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 000126e8 */

int overlapped_code(uint param_1)

{
 undefined4 local_4;
 
 if ((param_1 & 1) == 0) {
 local_4 = (int)param_1 / 2;
 }
 else {
 local_4 = param_1 * 3 + 1;
 }
 return local_4;
}



/* Function: test_control_flow_l3 @ 00012734 */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 printf(DAT_000130de);
 uVar1 = non_local_jump(50);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(200);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
 uVar1 = cpp_exception(0xfffffffb);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
 uVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",uVar1);
 uVar1 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",uVar1);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 local_18 = 0;
 uVar1 = computed_goto(&local_18,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",uVar1);
 uVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",uVar1);
 return;
}



/* Function: main @ 00012904 */

undefined4 main(void)

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





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
