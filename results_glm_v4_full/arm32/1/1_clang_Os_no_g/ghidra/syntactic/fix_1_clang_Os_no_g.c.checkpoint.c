/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <setjmp.h>

/* Type definitions */
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef int (*code)(int);

/* External data declarations */

/* Data definitions */
static int DAT_00011e70[4] = {10, 20, 30, 50};
static int DAT_00011848[5] = {1, 3, 5, 7, 9};
static int DAT_0001185c[12] = {0, 1, 2, 3, 10, 11, 12, 13, 20, 21, 22, 23};
static char DAT_00011de1[] = "CF-L1 Tests";
static char DAT_00011e05[] = "CF-L2 Tests";
static char DAT_00011e29[] = "CF-L3 Tests";
static int jump_buffer[16];

/* Function declarations */
int _setjmp(jmp_buf);
void longjmp(jmp_buf, int);
int __aeabi_idivmod(int, int);
int __divsi3(int, int);





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




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

int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 int uVar1;
 
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

int if_elseif_chain(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00010774 */

int if_elseif_long(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 00010790 */

int switch_small(unsigned int param_1)

{
 int uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(int *)(&DAT_00011e70 + param_1 * 4);
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
 
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 uVar2 = param_1 + 9;
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00010888 */

int loop_dowhile(int param_1)

{
 int iVar1;
 uint uVar2;
 
 iVar1 = 0;
 do {
 uVar2 = param_1 + 9;
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 000108bc */

int loop_nested(int param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = (param_2 & ~((int)param_2 >> 0x1f)) * param_1;
 }
 return iVar1;
}



/* Function: loop_break @ 000108d4 */

int loop_break(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if ((&DAT_00011848)[iVar1] == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00010908 */

int loop_continue(unsigned int param_1)

{
 int iVar1;
 uint uVar2;
 
 if ((int)param_1 < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 } while (param_1 != uVar2);
 }
 return iVar1;
}



/* Function: goto_forward @ 0001093c */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}



/* Function: goto_backward @ 00010954 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar2 = 1;
 }
 else {
 iVar2 = 1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 iVar2 = iVar1 * iVar2;
 } while (param_1 != iVar1);
 }
 return iVar2;
}



/* Function: ternary_op @ 00010988 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 00010994 */

void test_control_flow_l1(void)

{
 puts(&DAT_00011de1);
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



/* Function: loop_multi_exit @ 00010ba8 */

int loop_multi_exit(int param_1)

{
 int iVar1;
 int *puVar2;
 int iVar3;
 int iVar4;
 
 iVar3 = 0;
 iVar4 = 0;
 puVar2 = &DAT_0001185c;
 do {
 iVar1 = 0;
 do {
 if (puVar2[iVar1] == param_1) {
 return iVar1 - iVar3;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 iVar4 = iVar4 + 1;
 puVar2 = puVar2 + 4;
 iVar3 = iVar3 + -10;
 } while (iVar4 != 3);
 return -1;
}



/* Function: infinite_loop @ 00010c04 */

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



/* Function: multi_return @ 00010c3c */

int multi_return(uint param_1)

{
 int iVar1;
 
 if ((int)param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00010c68 */

int conditional_return(int param_1)

{
 int iVar1;
 
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00010c7c */

unsigned int duffs_device(int *param_1,int *param_2,unsigned int param_3)

{
 int *puVar1;
 int *puVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 unsigned int uVar5;
 
 uVar3 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar5 = param_3 + 7 >> 3;
 puVar1 = param_1;
 puVar2 = param_2;
 uVar4 = uVar5;
 switch(param_3 & 7) {
 case 1:
 goto switchD_00010ca0_caseD_1;
 case 2:
 goto switchD_00010ca0_caseD_2;
 case 3:
 goto switchD_00010ca0_caseD_3;
 case 4:
 goto switchD_00010ca0_caseD_4;
 case 5:
 goto switchD_00010ca0_caseD_5;
 case 6:
 goto switchD_00010ca0_caseD_6;
 case 7:
 goto switchD_00010ca0_caseD_7;
 }
 do {
 puVar2 = (int *)((int)param_2 + 4);
 puVar1 = (int *)((int)param_1 + 4);
 *param_1 = *param_2;
switchD_00010ca0_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010ca0_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ca0_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010ca0_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ca0_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010ca0_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 uVar4 = uVar5;
switchD_00010ca0_caseD_1:
 param_2 = puVar2 + 1;
 uVar5 = uVar4 - 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 uVar3 = param_3;
 } while (uVar5 != 0 && 0 < (int)uVar4);
 }
 return uVar3;
}



/* Function: loop_complex_cond @ 00010d1c */

int loop_complex_cond(unsigned int param_1)

{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 bool bVar5;
 
 if ((int)param_1 < 1) {
 iVar1 = 0;
 uVar4 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = param_1;
 uVar3 = 0;
 uVar4 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = uVar3 + 1;
 param_1 = uVar2 - 1;
 if ((uVar2 < 2) || ((int)param_1 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 uVar2 = param_1;
 uVar3 = uVar4;
 } while (bVar5);
 }
 return param_1 + iVar1 + uVar4;
}



/* Function: loop_modify_var @ 00010d74 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar2 + iVar1;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < param_1);
 }
 return iVar1;
}



/* Function: loop_external_state @ 00010dac */

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



/* Function: recursion_factorial @ 00010dd4 */

int recursion_factorial(uint param_1)

{
 bool bVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < (int)param_1) {
 iVar2 = 1;
 do {
 iVar2 = param_1 * iVar2;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return iVar2;
}



/* Function: tail_recursion @ 00010e04 */

int tail_recursion(uint param_1,int param_2)

{
 bool bVar1;
 
 if (1 < (int)param_1) {
 do {
 param_2 = param_2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00010e34 */

uint indirect_recursion_a(uint param_1,int param_2)

{
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 if ((param_1 & 1) == 0) {
 if (param_2 == 3) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == 3) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return param_1;
}



/* Function: call_func_ptr @ 00010e88 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010e90. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 00010e94 */

int call_func_ptr_array(undefined4 param_1,uint param_2)

{
 bool bVar1;
 int iVar2;
 
 switch(param_1) {
 case 0:
 return param_2 << 1;
 case 1:
 return param_2 * 3;
 case 2:
 break;
 default:
 return -1;
 }
 iVar2 = 1;
 if (1 < (int)param_2) {
 iVar2 = 1;
 do {
 iVar2 = param_2 * iVar2;
 bVar1 = 2 < param_2;
 param_2 = param_2 - 1;
 } while (bVar1);
 }
 return iVar2;
}



/* Function: double_value @ 00010eb8 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00010ec0 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_virtual_func @ 00010ec8 */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00010ed0 */

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



/* Function: test_control_flow_l2 @ 00010f18 */

/* WARNING: Removing unreachable block (ram,0x00010fb8) */

void test_control_flow_l2(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *puVar3;
 int iVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 undefined1 auStack_5c [32];
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 
 puts(&DAT_00011e05);
 iVar1 = 0;
 iVar4 = 0;
 puVar3 = &DAT_0001185c;
 do {
 iVar5 = 0;
 do {
 if (puVar3[iVar5] == 7) {
 iVar5 = iVar5 - iVar1;
 goto LAB_00010f78;
 }
 iVar5 = iVar5 + 1;
 } while (iVar5 != 4);
 iVar4 = iVar4 + 1;
 puVar3 = puVar3 + 4;
 iVar1 = iVar1 + -10;
 } while (iVar4 != 3);
 iVar5 = -1;
LAB_00010f78:
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar5);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 local_1c = 1;
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar7 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 iVar4 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 local_3c = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 uVar2 = duffs_device(auStack_5c,&local_3c,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar2);
 iVar1 = 0xb;
 do {
 uVar6 = iVar4 - 8;
 iVar4 = iVar4 + 2;
 if (iVar1 - 2U <= uVar6) break;
 uVar7 = uVar7 + 1;
 iVar1 = iVar1 + -1;
 } while (uVar7 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n");
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 0001118c */

int non_local_jump(uint param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = _setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if ((int)param_1 < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar2 = param_1 << 1;
 }
 return iVar2;
}



/* Function: cpp_exception @ 000111f8 */

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



/* Function: large_jump_table @ 00011214 */

uint large_jump_table(undefined4 param_1,uint param_2,uint param_3)

{
 uint uVar1;
 uint extraout_r1;
 
 switch(param_1) {
 case 0:
 return param_3 + param_2;
 case 1:
 return param_2 - param_3;
 case 2:
 return param_3 * param_2;
 case 3:
 break;
 case 4:
 if (param_3 == 0) {
 return 0;
 }
 uVar1 = __aeabi_idivmod(param_2, param_3);
 return uVar1;
 case 5:
 return param_3 & param_2;
 case 6:
 return param_3 | param_2;
 case 7:
 return param_3 ^ param_2;
 case 8:
 return param_2 << (param_3 & 0xff);
 case 9:
 return (int)param_2 >> (param_3 & 0xff);
 default:
 return 0xffffffff;
 }
 if (param_3 == 0) {
 return 0;
 }
 uVar1 = __divsi3(param_2, param_3);
 return uVar1;
}



/* Function: op_add @ 0001123c */

int op_add(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: op_sub @ 00011244 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 0001124c */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00011258 */

void op_div(undefined4 param_1,int param_2)

{
 if (param_2 != 0) {
 __divsi3(param_1, param_2);
 return;
 }
 return;
}



/* Function: op_mod @ 00011274 */

undefined4 op_mod(undefined4 param_1,int param_2)

{
 int iVar1;
 
 if (param_2 != 0) {
 iVar1 = __aeabi_idivmod(param_1, param_2);
 return iVar1;
 }
 return 0;
}



/* Function: op_and @ 00011294 */

uint op_and(uint param_1,uint param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 0001129c */

uint op_or(uint param_1,uint param_2)

{
 return param_2 | param_1;
}



/* Function: op_xor @ 000112a4 */

uint op_xor(uint param_1,uint param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 000112ac */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (param_2 & 0xff);
}



/* Function: op_shr @ 000112b4 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0xff);
}



/* Function: conditional_func_ptr @ 000112bc */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
 code *UNRECOVERED_JUMPTABLE;
 code *pcVar1;
 
 pcVar1 = recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 /* WARNING: Could not recover jumptable at 0x000112e8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: state_machine @ 000112f8 */

uint state_machine(uint param_1,uint param_2)

{
 switch(param_2) {
 case 0:
 param_2 = (uint)(param_1 == 1);
 break;
 case 1:
 param_2 = 1;
 if (param_1 == 99) {
 param_2 = 3;
 }
 if (param_1 == 2) {
 param_2 = param_1;
 }
 break;
 case 2:
 break;
 case 3:
 param_2 = param_1;
 if (param_1 != 0) {
 param_2 = 3;
 }
 break;
 default:
 param_2 = 3;
 }
 return param_2;
}



/* Function: fsm_func_table @ 00011360 */

uint fsm_func_table(uint param_1,undefined4 param_2)

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
 break;
 case 2:
 return 2;
 case 3:
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
 default:
 return 3;
 }
 if (param_1 != 2) {
 param_1 = uVar1;
 }
 return param_1;
}



/* Function: state_idle @ 00011380 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00011390 */

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



/* Function: state_done @ 000113a8 */

undefined4 state_done(void)

{
 return 2;
}



/* Function: state_error @ 000113b0 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: computed_goto @ 000113bc */

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



/* Function: obfuscated_cf @ 000113fc */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 00011404 */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 0001140c */

int overlapped_code(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 3 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00011428 */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 int iVar2;
 
 puts(&DAT_00011e29);
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



/* Function: main @ 00011540 */

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
