/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */


#include <stdbool.h>
#include <stdio.h>
#include <setjmp.h>

typedef unsigned int uint;
typedef int undefined4;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef undefined4 (*code)(undefined4);
typedef undefined4 (*code2)(undefined4, undefined4);

/* Forward declarations for functions used in global arrays */
undefined4 double_value(undefined4);
undefined4 triple_value(undefined4);
undefined4 op_add(undefined4, undefined4);
undefined4 op_sub(undefined4, undefined4);
undefined4 op_mul(undefined4, undefined4);
void op_div(undefined4, int);
undefined4 op_mod(undefined4, undefined4);
uint op_and(uint, uint);
uint op_or(uint, uint);
uint op_xor(uint, uint);
int op_shl(int, uint);
int op_shr(int, uint);
bool state_idle(int);
undefined4 state_processing(undefined4);
undefined4 state_done(void);
undefined4 state_error(undefined4);

/* External data declarations */
extern undefined4 DAT_00011974[5];
extern undefined4 DAT_00011988[12];
extern undefined4 DAT_00011f7c[4];
extern char DAT_00011f0d[];
extern char DAT_00011f31[];
extern char DAT_00011f55[];
extern code PTR_double_value_00022ebc[];
extern code2 PTR_op_add_00022ec8[];
extern code PTR_state_idle_00022ef0[];
extern jmp_buf jump_buffer;

/* Define missing data symbols */
undefined4 DAT_00011974[5] = {1, 2, 3, 4, 5};
undefined4 DAT_00011988[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
undefined4 DAT_00011f7c[4] = {50, 100, 150, 200};
char DAT_00011f0d[] = "Control Flow Level 1 Tests";
char DAT_00011f31[] = "Control Flow Level 2 Tests";
char DAT_00011f55[] = "Control Flow Level 3 Tests";
code PTR_double_value_00022ebc[3] = {double_value, triple_value, double_value};
code2 PTR_op_add_00022ec8[10] = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
code PTR_state_idle_00022ef0[4] = {state_idle, state_processing, state_done, state_error};
jmp_buf jump_buffer;

/* Function: sequential_ops @ 000106c4 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 000106d0 */

int single_if(int param_1)

{
 return param_1 << (uint)(0 < param_1);
}



/* Function: if_else @ 000106e4 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 000106f8 */

int nested_if_2(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (0 < param_2) {
 iVar1 = param_1 + param_2;
 }
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00010714 */

undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 if (param_1 < 1) {
 return 0;
 }
 if (param_2 < 1) {
 return 1;
 }
 if (param_3 < 1) {
 return 2;
 }
 if (0 < param_4) {
 uVar1 = 4;
 if (0 < param_5) {
 uVar1 = 5;
 }
 return uVar1;
 }
 return 3;
}



/* Function: if_elseif_chain @ 00010758 */

int if_elseif_chain(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00010774 */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 00010790 */

undefined4 switch_small(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(&DAT_00011f7c + param_1 * 4);
 }
 return uVar1;
}



/* Function: switch_large @ 000107b0 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 000107c8 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 000107e4 */

int switch_fallthrough(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
 }
 return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 00010818 */

int loop_for_fixed(int param_1)

{
 longlong lVar1;
 
 if (0 < param_1) {
 lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)(param_1 - 1);
 return ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1) + param_1 + -1;
 }
 return 0;
}



/* Function: loop_while @ 00010848 */

int loop_while(int param_1)

{
 int iVar1;
 uint uVar2;
 
 if (param_1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 }
 if (iVar1 == 0) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00010894 */

int loop_dowhile(int param_1)

{
 int iVar1;
 uint uVar2;
 
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 000108c8 */

int loop_nested(int param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = (param_2 & ~((int)param_2 >> 0x1f)) * param_1;
 }
 return iVar1;
}



/* Function: loop_break @ 000108e0 */

int loop_break(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if ((&DAT_00011974)[iVar1] == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00010914 */

int loop_continue(uint param_1)

{
 int iVar1;
 uint uVar2;
 
 if (0 < (int)param_1) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 } while (param_1 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 0001094c */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}



/* Function: goto_backward @ 00010964 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar2 = 1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 iVar2 = iVar1 * iVar2;
 } while (param_1 != iVar1);
 return iVar2;
 }
 return 1;
}



/* Function: ternary_op @ 00010994 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 000109a0 */

void test_control_flow_l1(void)

{
 puts(&DAT_00011f0d);
 printf("CF-L1-01 (sequential_ops): %d\n",0x15);
 printf("CF-L1-02 (single_if): %d\n",0x14);
 printf("CF-L1-02 (single_if): %d\n",0xfffffffb);
 printf("CF-L1-03 (if_else): %d\n",1);
 printf("CF-L1-03 (if_else): %d\n",0);
 printf("CF-L1-04 (nested_if_2): %d\n",0xf);
 printf("CF-L1-04 (nested_if_2): %d\n",10);
 printf("CF-L1-04 (nested_if_2): %d\n",0);
 printf("CF-L1-05 (nested_if_deep): %d\n",5);
 printf("CF-L1-06 (if_elseif_chain): %d\n",0x14);
 printf("CF-L1-07 (if_elseif_long): %d\n",400);
 printf("CF-L1-08 (switch_small): %d\n",0x32);
 printf("CF-L1-09 (switch_large): %d\n",0x46);
 printf("CF-L1-10 (switch_default): %d\n",0);
 printf("CF-L1-11 (switch_fallthrough): %d\n",0x15);
 printf("CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 printf("CF-L1-13 (loop_while): %d\n",5);
 printf("CF-L1-14 (loop_dowhile): %d\n",4);
 printf("CF-L1-15 (loop_nested): %d\n",0xc);
 printf("CF-L1-16 (loop_break): %d\n",2);
 printf("CF-L1-16 (loop_break): %d\n",0xffffffff);
 printf("CF-L1-17 (loop_continue): %d\n",0x19);
 printf("CF-L1-18 (goto_forward): %d\n",0x32);
 printf("CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 printf("CF-L1-19 (goto_backward): %d\n",0x78);
 printf("CF-L1-20 (ternary_op): %d\n",10);
 printf("CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 00010bb8 */

/* WARNING: Removing unreachable block (ram,0x00010c34) */

int loop_multi_exit(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined4 *puVar5;
 int unaff_lr;
 bool bVar6;
 
 iVar2 = 0;
 puVar5 = &DAT_00011988;
 do {
 iVar4 = 1;
 bVar6 = true;
 iVar3 = 0;
 if ((&DAT_00011988)[iVar2 * 4] != param_1) {
 iVar1 = 1;
 do {
 iVar3 = iVar1;
 if (iVar3 == 4) goto LAB_00010c44;
 iVar1 = iVar3 + 1;
 } while (puVar5[iVar3] != param_1);
 bVar6 = iVar3 - 1U < 3;
 }
 unaff_lr = iVar3 + iVar2 * 10;
 if (bVar6) goto LAB_00010c58;
LAB_00010c44:
 puVar5 = puVar5 + 4;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 3);
 iVar4 = 2;
LAB_00010c58:
 if (iVar4 == 2) {
 unaff_lr = -1;
 }
 return unaff_lr;
}



/* Function: infinite_loop @ 00010c70 */

void infinite_loop(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return;
}



/* Function: multi_return @ 00010ca8 */

int multi_return(uint param_1)

{
 int iVar1;
 
 if ((int)param_1 < 0) {
 return -1;
 }
 if ((int)param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00010cd4 */

int conditional_return(int param_1)

{
 int iVar1;
 
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00010ce8 */

int duffs_device(undefined4 *param_1,undefined4 *param_2,int param_3)

{
 undefined4 *puVar1;
 undefined4 *puVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 iVar3 = -1;
 if (0 < param_3) {
 iVar5 = (int)(param_3 + 7 + ((uint)(param_3 + 7 >> 0x1f) >> 0x1d)) >> 3;
 puVar1 = param_1;
 puVar2 = param_2;
 iVar3 = param_3;
 iVar4 = iVar5;
 switch(param_3 % 8) {
 case 0:
 do {
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d28_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d28_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d28_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d28_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d28_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d28_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 iVar4 = iVar5;
switchD_00010d28_caseD_1:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 iVar5 = iVar4 + -1;
 } while (iVar5 != 0 && 0 < iVar4);
 break;
 case 1:
 goto switchD_00010d28_caseD_1;
 case 2:
 goto switchD_00010d28_caseD_2;
 case 3:
 goto switchD_00010d28_caseD_3;
 case 4:
 goto switchD_00010d28_caseD_4;
 case 5:
 goto switchD_00010d28_caseD_5;
 case 6:
 goto switchD_00010d28_caseD_6;
 case 7:
 goto switchD_00010d28_caseD_7;
 }
 }
 return iVar3;
}



/* Function: loop_complex_cond @ 00010da4 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 
 if (param_1 < 1) {
 iVar1 = 0;
 uVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = param_1;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = uVar3 + 1;
 param_1 = iVar2 + -1;
 if ((iVar2 < 2) || (param_1 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 iVar2 = param_1;
 uVar3 = uVar4;
 } while (bVar5);
 }
 return param_1 + iVar1 + uVar4;
}



/* Function: loop_modify_var @ 00010dfc */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar2 + iVar1;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < param_1);
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 00010e38 */

int loop_external_state(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: recursion_factorial @ 00010e60 */

int recursion_factorial(int param_1)

{
 int iVar1;
 
 iVar1 = 1;
 if (1 < param_1) {
 iVar1 = recursion_factorial(param_1 + -1);
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}



/* Function: tail_recursion @ 00010e8c */

int tail_recursion(int param_1,int param_2)

{
 if (1 < param_1) {
 param_2 = tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00010eb8 */

void indirect_recursion_a(uint param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 if (param_2 < 2) {
 return;
 }
 iVar1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 < 2) {
 return;
 }
 iVar1 = param_1 * 3 + 2;
 }
 indirect_recursion_a(iVar1,param_2 + -2);
 }
 return;
}



/* Function: call_func_ptr @ 00010f08 */

void call_func_ptr(code *param_1,undefined4 param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 00010f24 */

undefined4 call_func_ptr_array(uint param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 if (2 < param_1) {
 return 0xffffffff;
 }
 uVar1 = PTR_double_value_00022ebc[param_1](param_2);
 return uVar1;
}



/* Function: double_value @ 00010f5c */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00010f64 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_virtual_func @ 00010f6c */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00010f74 */

int process_with_callback(undefined4 *param_1,int param_2,code *param_3)

{
 int iVar1;
 int iVar2;
 
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 iVar1 = (*param_3)(*param_1);
 iVar2 = iVar1 + iVar2;
 param_2 = param_2 + -1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar2;
}



/* Function: test_control_flow_l2 @ 00010fbc */

/* WARNING: Removing unreachable block (ram,0x00011030) */
/* WARNING: Removing unreachable block (ram,0x000110a0) */

void test_control_flow_l2(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *puVar3;
 int iVar4;
 uint uVar5;
 int iVar6;
 
 puts(&DAT_00011f31);
 puVar3 = &DAT_00011988;
 iVar4 = 0;
 do {
 iVar1 = 1;
 do {
 iVar6 = iVar1;
 if (iVar6 == 4) goto LAB_00011040;
 iVar1 = iVar6 + 1;
 } while (puVar3[iVar6] != 7);
 if (iVar6 - 1U < 3) break;
LAB_00011040:
 puVar3 = puVar3 + 4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 3);
 printf("CF-L2-01 (loop_multi_exit): %d\n");
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar5 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar1 = 0xb;
 iVar4 = 10;
 do {
 if (iVar1 - 2U <= iVar4 - 8U) break;
 uVar5 = uVar5 + 1;
 iVar1 = iVar1 + -1;
 iVar4 = iVar4 + 2;
 } while (uVar5 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n");
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar2);
 uVar2 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar2);
 indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",0);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar2);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 00011270 */

int non_local_jump(int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (-1 < param_1) {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
}



/* Function: cpp_exception @ 000112e4 */

int cpp_exception(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 << 1;
 if (100 < (int)param_1) {
 iVar1 = -2;
 }
 if (0x7fffffff < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00011300 */

undefined4 large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)

{
 undefined4 uVar1;
 
 if (9 < param_1) {
 return 0xffffffff;
 }
 uVar1 = PTR_op_add_00022ec8[param_1](param_2,param_3);
 return uVar1;
}



/* Function: op_add @ 0001133c */

int op_add(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: op_sub @ 00011344 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 0001134c */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00011358 */

void op_div(undefined4 param_1,int param_2)

{
 if (param_2 != 0) {
 (void)(param_1 / param_2);
 }
 return;
}



/* Function: op_mod @ 00011374 */

undefined4 op_mod(undefined4 param_1,int param_2)

{
 if (param_2 != 0) {
 return (undefined4)((int)param_1 % param_2);
 }
 return 0;
}



/* Function: op_and @ 00011394 */

uint op_and(uint param_1,uint param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 0001139c */

uint op_or(uint param_1,uint param_2)

{
 return param_2 | param_1;
}



/* Function: op_xor @ 000113a4 */

uint op_xor(uint param_1,uint param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 000113ac */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (param_2 & 0xff);
}



/* Function: op_shr @ 000113b4 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0xff);
}



/* Function: conditional_func_ptr @ 000113bc */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
 code *pcVar1;
 code *pcVar2;
 
 pcVar2 = recursion_factorial;
 if (param_1 == 1) {
 pcVar2 = triple_value;
 }
 pcVar1 = double_value;
 if (param_1 != 0) {
 pcVar1 = pcVar2;
 }
 (*pcVar1)(param_2);
 return;
}



/* Function: state_machine @ 00011408 */

uint state_machine(int param_1,uint param_2)

{
 uint uVar1;
 
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = 1;
 if (param_1 == 99) {
 uVar1 = 3;
 }
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
 case 2:
 break;
 case 3:
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
 default:
 param_2 = 3;
 }
 return param_2;
}



/* Function: fsm_func_table @ 00011470 */

undefined4 fsm_func_table(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 
 uVar1 = 3;
 if (param_2 < 4) {
 uVar1 = PTR_state_idle_00022ef0[param_2](param_1);
 }
 return uVar1;
}



/* Function: state_idle @ 000114a8 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 000114b8 */

int state_processing(int param_1)

{
 int iVar1;
 
 iVar1 = 1;
 if (param_1 == 99) {
 iVar1 = 3;
 }
 if (param_1 != 2) {
 param_1 = iVar1;
 }
 return param_1;
}



/* Function: state_done @ 000114d0 */

undefined4 state_done(void)

{
 return 2;
}



/* Function: state_error @ 000114d8 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: computed_goto @ 000114e4 */

undefined4 computed_goto(undefined4 param_1,undefined4 param_2)

{
 switch(param_2) {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 default:
 return 0xffffffff;
 }
}



/* Function: obfuscated_cf @ 00011524 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 0001152c */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00011534 */

int overlapped_code(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 3 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00011550 */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 int iVar2;
 
 puts(&DAT_00011f55);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 iVar2 = printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(iVar2,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 0001166c */

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




/* Total functions decompiled: 76 */
