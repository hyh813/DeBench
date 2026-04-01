/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/1/1_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

#include <setjmp.h>
#include <stdbool.h>
#include <stdio.h>

/* Ghidra type definitions */
typedef unsigned int uint;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef undefined8 (*code)(void);
typedef undefined8 (*code2)(undefined4, undefined4);

/* Global variables */
static jmp_buf jump_buffer;
static undefined4 CSWTCH_55[4] = {0x32, 0x64, 0x96, 0xc8};
static char DAT_00103008[] = "Control Flow Level 1 Tests";
static char DAT_00103118[] = "Control Flow Level 2 Tests";
static char DAT_001032b8[] = "Control Flow Level 3 Tests";


/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 ((void (*)(void))(void *)0x0)();
 return;
}



/* Function: main @ 001010e0 */

undefined8 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 00101200 */

int recursion_factorial(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 1;
 if (1 < param_1) {
 do {
 iVar2 = param_1 + -1;
 iVar1 = iVar1 * param_1;
 param_1 = iVar2;
 } while (iVar2 != 1);
 }
 return iVar1;
}



/* Function: double_value @ 00101220 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: triple_value @ 00101230 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 00101240 */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00101250 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00101260 */

int op_mul(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: op_div @ 00101270 */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
}



/* Function: op_mod @ 00101290 */

int op_mod(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 % param_2;
 }
 return iVar1;
}



/* Function: op_and @ 001012b0 */

uint op_and(uint param_1,uint param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 001012c0 */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 001012d0 */

uint op_xor(uint param_1,uint param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 001012e0 */

int op_shl(int param_1,byte param_2)

{
 return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 001012f0 */

int op_shr(int param_1,byte param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00101300 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00101310 */

char state_processing(int param_1)

{
 if (param_1 != 2) {
 return (param_1 == 99) * '\x02' + '\x01';
 }
 return '\x02';
}



/* Function: state_done @ 00101340 */

undefined8 state_done(void)

{
 return 2;
}



/* Function: state_error @ 00101350 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: computed_goto.constprop.0 @ 00101370 */

undefined8 computed_goto_constprop_0(void)

{
 return 0x14;
}



/* Function: non_local_jump.constprop.0 @ 00101380 */

int non_local_jump_constprop_0(void)

{
 int iVar1;
 
 iVar1 = _setjmp((jmp_buf *)jump_buffer);
 return (-(uint)(iVar1 == 0) & 0xb) - 1;
}



/* Function: sequential_ops @ 001013b0 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 001013c0 */

int single_if(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: if_else @ 001013d0 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 001013e0 */

int nested_if_2(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00101400 */

char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 char cVar1;
 
 cVar1 = '\0';
 if ((0 < param_1) && (cVar1 = '\x01', 0 < param_2)) {
 if (param_3 < 1) {
 return '\x02';
 }
 if (0 < param_4) {
 return (0 < param_5) + '\x04';
 }
 cVar1 = '\x03';
 }
 return cVar1;
}



/* Function: if_elseif_chain @ 00101450 */

undefined8 if_elseif_chain(int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 10;
 if (param_1 != 0) {
 if (param_1 != 1) {
 uVar1 = 0x1e;
 if (param_1 != 2) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
 }
 uVar1 = 0x14;
 }
 return uVar1;
}



/* Function: if_elseif_long @ 00101480 */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 return iVar1;
}



/* Function: switch_small @ 001014a0 */

undefined4 switch_small(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(CSWTCH_55 + (ulong)param_1 * 4);
 }
 return uVar1;
}



/* Function: switch_large @ 001014c0 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 001014e0 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = param_1 * 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00101500 */

int switch_fallthrough(int param_1)

{
 if (param_1 == 2) {
 return 6;
 }
 if (param_1 != 3) {
 return ((param_1 == 1) - 1) + (uint)(param_1 == 1);
 }
 return 0x15;
}



/* Function: loop_for_fixed @ 00101540 */

int loop_for_fixed(uint param_1)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 
 if ((int)param_1 < 1) {
 iVar3 = 0;
 }
 else {
 if (param_1 - 1 < 10) {
 uVar1 = 0;
 iVar3 = 0;
 }
 else {
 uVar1 = 0;
 iVar2 = 0;
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar3 = 0;
 iVar7 = 1;
 iVar8 = 2;
 iVar9 = 3;
 do {
 uVar1 = uVar1 + 1;
 iVar2 = iVar2 + iVar3;
 iVar4 = iVar4 + iVar7;
 iVar5 = iVar5 + iVar8;
 iVar6 = iVar6 + iVar9;
 iVar3 = iVar3 + 4;
 iVar7 = iVar7 + 4;
 iVar8 = iVar8 + 4;
 iVar9 = iVar9 + 4;
 } while (param_1 >> 2 != uVar1);
 uVar1 = param_1 & 0xfffffffc;
 iVar3 = iVar2 + iVar5 + iVar4 + iVar6;
 if ((param_1 & 3) == 0) {
 return iVar3;
 }
 }
 iVar3 = iVar3 + uVar1;
 if ((int)(uVar1 + 1) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 1;
 if ((int)(uVar1 + 2) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 2;
 if ((int)(uVar1 + 3) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 3;
 if ((int)(uVar1 + 4) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 4;
 if ((int)(uVar1 + 5) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 5;
 if ((int)(uVar1 + 6) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 6;
 if ((int)(uVar1 + 7) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 7;
 if ((int)(uVar1 + 8) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 8;
 if ((int)(uVar1 + 9) < (int)param_1) {
 iVar3 = iVar3 + uVar1 + 9;
 }
 return iVar3;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar3;
}



/* Function: loop_while @ 00101620 */

int loop_while(int param_1)

{
 int iVar1;
 
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00101670 */

int loop_dowhile(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 return iVar1;
}



/* Function: loop_nested @ 001016b0 */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 if (0 < param_2) {
 iVar1 = param_2 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_break @ 001016e0 */

int loop_break(int param_1)

{
 if (param_1 == 10) {
 return 0;
 }
 if (param_1 == 0x14) {
 return 1;
 }
 if (param_1 == 0x1e) {
 return 2;
 }
 if (param_1 != 0x28) {
 return (uint)(param_1 == 0x32) * 5 + -1;
 }
 return 3;
}



/* Function: loop_continue @ 00101730 */

int loop_continue(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 
 if ((int)param_1 < 1) {
 iVar4 = 0;
 }
 else {
 if (param_1 - 1 < 5) {
 uVar3 = 1;
 iVar4 = 1;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 uVar1 = 0;
 uVar3 = 1;
 uVar2 = 3;
 do {
 uVar1 = uVar1 + 1;
 iVar4 = iVar4 + (~-(uint)((uVar3 & 1) == 0) & uVar3);
 iVar5 = iVar5 + (~-(uint)((uVar2 & 1) == 0) & uVar2);
 uVar3 = uVar3 + 4;
 uVar2 = uVar2 + 4;
 } while (param_1 >> 2 != uVar1);
 iVar4 = iVar4 + iVar5;
 uVar3 = (param_1 & 0xfffffffc) + 1;
 if (param_1 == (param_1 & 0xfffffffc)) {
 return iVar4;
 }
 if ((uVar3 & 1) != 0) {
 iVar4 = iVar4 + uVar3;
 }
 }
 uVar2 = uVar3 + 1;
 if ((int)uVar2 <= (int)param_1) {
 uVar1 = uVar3 + 2;
 if ((uVar2 & 1) != 0) {
 iVar4 = iVar4 + uVar2;
 }
 if ((int)uVar1 <= (int)param_1) {
 uVar2 = uVar3 + 3;
 if ((uVar1 & 1) != 0) {
 iVar4 = iVar4 + uVar1;
 }
 if ((int)uVar2 <= (int)param_1) {
 if ((uVar2 & 1) != 0) {
 iVar4 = iVar4 + uVar2;
 }
 uVar3 = uVar3 + 4;
 if ((int)uVar3 <= (int)param_1) {
 if ((uVar3 & 1) != 0) {
 iVar4 = iVar4 + uVar3;
 }
 return iVar4;
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: goto_forward @ 00101820 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}



/* Function: goto_backward @ 00101830 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 1;
 if (0 < param_1) {
 iVar1 = 1;
 do {
 iVar2 = iVar2 * iVar1;
 iVar1 = iVar1 + 1;
 } while (param_1 + 1 != iVar1);
 }
 return iVar2;
}



/* Function: ternary_op @ 00101860 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 00101870 */

void test_control_flow_l1(void)

{
 puts(&DAT_00103008);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",1);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
 __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
 __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
 __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
 __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
 __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
 __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
 __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",2);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",0xffffffff);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 00101b00 */

int loop_multi_exit(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 == 1) {
 iVar1 = 0;
LAB_00101b57:
 iVar2 = 0;
 }
 else {
 if (param_1 == 2) {
 iVar1 = 0;
LAB_00101b62:
 return iVar1 * 10 + 1;
 }
 if (param_1 == 3) {
 iVar1 = 0;
LAB_00101b70:
 iVar2 = 2;
 goto LAB_00101b59;
 }
 if (param_1 == 4) {
 iVar1 = 0;
 }
 else {
 if (param_1 == 5) {
 iVar1 = 1;
 goto LAB_00101b57;
 }
 if (param_1 == 6) {
 iVar1 = 1;
 goto LAB_00101b62;
 }
 if (param_1 == 7) {
 iVar1 = 1;
 goto LAB_00101b70;
 }
 if (param_1 == 8) {
 iVar1 = 1;
 }
 else {
 iVar1 = 2;
 if (param_1 == 9) goto LAB_00101b57;
 iVar1 = 2;
 if (param_1 == 10) goto LAB_00101b62;
 iVar1 = 2;
 if (param_1 == 0xb) goto LAB_00101b70;
 if (param_1 != 0xc) {
 return -1;
 }
 iVar1 = 2;
 }
 }
 iVar2 = 3;
 }
LAB_00101b59:
 return iVar2 + iVar1 * 10;
}



/* Function: infinite_loop @ 00101bb0 */

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



/* Function: multi_return @ 00101be0 */

int multi_return(uint param_1)

{
 int iVar1;
 
 if ((int)param_1 < 0) {
 return -1;
 }
 if ((int)(param_1 * 2) < 0x65) {
 iVar1 = param_1 * 2;
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00101c10 */

int conditional_return(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 return param_1 * 2;
 }
 iVar1 = -param_1;
 if (param_1 == 0) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101c30 */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 int iVar3;
 undefined4 *puVar4;
 
 if ((int)param_3 < 1) {
 param_3 = 0xffffffff;
 }
 else {
 iVar3 = (int)(param_3 + 7) >> 3;
 puVar2 = param_1;
 switch(param_3 & 7) {
 case 0:
 puVar4 = param_2;
 break;
 case 1:
 goto switchD_00101c5f_caseD_1;
 case 2:
 puVar4 = param_2;
 goto LAB_00101cba;
 case 3:
 goto switchD_00101c5f_caseD_3;
 case 4:
 puVar4 = param_2;
 goto LAB_00101ca2;
 case 5:
 goto switchD_00101c5f_caseD_5;
 case 6:
 goto switchD_00101c5f_caseD_6;
 case 7:
 goto switchD_00101c5f_caseD_7;
 }
 while( 1 ) {
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
switchD_00101c5f_caseD_7:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
switchD_00101c5f_caseD_6:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
switchD_00101c5f_caseD_5:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00101ca2:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
switchD_00101c5f_caseD_3:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00101cba:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
switchD_00101c5f_caseD_1:
 *param_1 = *param_2;
 iVar3 = iVar3 + -1;
 if (iVar3 == 0) break;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 00101d00 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (0 < param_1) {
 iVar3 = param_1 + -1;
 if (iVar3 < 3) {
 iVar1 = 1;
 iVar2 = 2;
 }
 else {
 iVar3 = param_1 + -2;
 if (iVar3 < 5) {
 iVar1 = 2;
 iVar2 = 4;
 }
 else {
 iVar3 = param_1 + -3;
 if (iVar3 < 7) {
 iVar1 = 3;
 iVar2 = 6;
 }
 else {
 iVar3 = param_1 + -4;
 if (iVar3 < 9) {
 iVar1 = 4;
 iVar2 = 8;
 }
 else {
 iVar3 = param_1 + -5;
 if (iVar3 < 0xb) {
 iVar1 = 5;
 iVar2 = 10;
 }
 else {
 iVar3 = param_1 + -6;
 if (iVar3 < 0xd) {
 iVar1 = 6;
 iVar2 = 0xc;
 }
 else {
 iVar3 = param_1 + -7;
 if (iVar3 < 0xf) {
 iVar1 = 7;
 iVar2 = 0xe;
 }
 else {
 iVar3 = param_1 + -8;
 if (iVar3 < 0x11) {
 iVar1 = 8;
 iVar2 = 0x10;
 }
 else {
 iVar3 = param_1 + -9;
 if (iVar3 < 0x13) {
 iVar1 = 9;
 iVar2 = 0x12;
 }
 else {
 iVar3 = param_1 + -10;
 iVar1 = 10;
 iVar2 = 0x14;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar1 + iVar3 + iVar2;
 }
 return param_1;
}



/* Function: loop_modify_var @ 00101de0 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = 0;
 if ((0 < param_1) && (iVar4 = 0, param_1 != 1)) {
 iVar4 = 1;
 iVar2 = 1;
 while (iVar1 = iVar2 + 1, iVar3 = iVar2, iVar1 < param_1) {
 while (iVar4 = iVar4 + iVar1, iVar2 = iVar1, 5 < iVar1) {
 iVar1 = iVar3 + 4;
 iVar3 = iVar3 + 3;
 if (param_1 <= iVar1) {
 return iVar4;
 }
 }
 }
 }
 return iVar4;
}



/* Function: loop_external_state @ 00101e30 */

void loop_external_state(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return;
}



/* Function: tail_recursion @ 00101e50 */

int tail_recursion(int param_1,int param_2)

{
 if (1 < param_1) {
 do {
 param_2 = param_2 * param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 1);
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00101e70 */

ulong indirect_recursion_a(ulong param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 ulong uVar3;
 int iVar4;
 
 uVar3 = param_1 & 0xffffffff;
 iVar4 = param_2;
 if (0 < param_2) {
 do {
 iVar4 = iVar4 + -4;
 if ((param_1 & 1) == 0) {
 uVar2 = (int)(((uint)(param_1 >> 0x1f) & 1) + (int)param_1) >> 1;
 if (param_2 == 1) {
 return (ulong)uVar2;
 }
 uVar2 = uVar2 + 1;
 uVar3 = (ulong)uVar2;
 if (param_2 < 3) {
 return uVar3;
 }
 if ((uVar2 & 1) == 0) goto LAB_00101edc;
LAB_00101e97:
 if (param_2 == 3) {
 return (ulong)(uVar2 * 3 + 1);
 }
 uVar2 = uVar2 * 3 + 2;
 }
 else {
 iVar1 = (int)param_1 * 3;
 if (param_2 == 1) {
 return (ulong)(iVar1 + 1);
 }
 uVar2 = iVar1 + 2;
 uVar3 = (ulong)uVar2;
 if (param_2 < 3) {
 return uVar3;
 }
 if ((uVar2 & 1) != 0) goto LAB_00101e97;
LAB_00101edc:
 uVar2 = (int)(uVar3 >> 0x1f) + (int)uVar3 >> 1;
 if (param_2 == 3) {
 return (ulong)uVar2;
 }
 uVar2 = uVar2 + 1;
 }
 uVar3 = (ulong)uVar2;
 param_2 = param_2 + -4;
 param_1 = uVar3;
 } while (iVar4 != 0);
 }
 return uVar3;
}



/* Function: call_func_ptr @ 00101f00 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101f09. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(undefined4))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 00101f10 */

undefined8 call_func_ptr_array(uint param_1,undefined4 param_2)

{
 undefined8 uVar1;
 long in_FS_OFFSET;
 code *local_28 [3];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28[2] = recursion_factorial;
 local_28[0] = double_value;
 local_28[1] = triple_value;
 if (param_1 < 3) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Could not recover jumptable at 0x00101f74. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = ((undefined8 (*)(undefined4))local_28[(int)param_1])(param_2);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_virtual_func @ 00101fa0 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 * 2;
}



/* Function: process_with_callback @ 00101fb0 */

int process_with_callback(undefined4 *param_1,int param_2,code *param_3)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 int iVar3;
 int iVar4;
 
 if (0 < param_2) {
 iVar4 = 0;
 puVar1 = param_1 + (ulong)(param_2 - 1) + 1;
 do {
 uVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = ((int (*)(undefined4))param_3)(uVar2);
 iVar4 = iVar4 + iVar3;
 } while (param_1 != puVar1);
 return iVar4;
 }
 return 0;
}



/* Function: test_control_flow_l2 @ 00102020 */

/* WARNING: Removing unreachable block (ram,0x00102186) */

void test_control_flow_l2(void)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 long in_FS_OFFSET;
 undefined8 local_58;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined1 local_38 [16];
 undefined1 local_28 [16];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103118);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar5 = 0;
 do {
 iVar5 = iVar5 + 1;
 } while (iVar5 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",1);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_58 = 0x200000001;
 uStack_50 = 0x400000003;
 local_48 = 0x600000005;
 uStack_40 = 0x800000007;
 
 uVar2 = duffs_device(local_38,&local_58,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar2);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar4 = 1;
 iVar5 = 1;
 do {
 iVar3 = iVar5 + 1;
 iVar1 = iVar5;
 while (iVar4 = iVar4 + iVar3, iVar5 = iVar3, 5 < iVar3) {
 if (iVar1 != 5) {
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar4);
 iVar5 = 0;
 do {
 iVar5 = iVar5 + 1;
 } while (iVar5 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",1);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 iVar1 = 8;
 iVar3 = 9;
 }
 } while( 1 );
}



/* Function: non_local_jump @ 001022d0 */

int non_local_jump(int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp((jmp_buf *)jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,2);
 }
 param_1 = param_1 * 2;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}



/* Function: cpp_exception @ 00102340 */

int cpp_exception(int param_1)

{
 if (param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x65) {
 return param_1 * 2;
 }
 return -2;
}



/* Function: large_jump_table @ 00102370 */

undefined8 large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)

{
 undefined8 uVar1;
 long in_FS_OFFSET;
 code2 *local_68 [4];
 code *local_48;
 code *pcStack_40;
 code *local_38;
 code *pcStack_30;
 code *local_28;
 code *pcStack_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_68[0] = op_add;
 local_68[1] = op_sub;
 local_68[2] = op_mul;
 local_68[3] = op_div;
 local_48 = op_mod;
 pcStack_40 = op_and;
 local_38 = op_or;
 pcStack_30 = op_xor;
 local_28 = op_shl;
 pcStack_20 = op_shr;
 if (param_1 < 10) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Could not recover jumptable at 0x0010244e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*local_68[(int)param_1])(param_2, param_3);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(param_2,param_3);
}



/* Function: conditional_func_ptr @ 00102470 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
 code *UNRECOVERED_JUMPTABLE;
 
 UNRECOVERED_JUMPTABLE = double_value;
 if ((param_1 != 0) && (UNRECOVERED_JUMPTABLE = triple_value, param_1 != 1)) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 /* WARNING: Could not recover jumptable at 0x00102498. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((int (*)(undefined4))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: state_machine @ 001024a0 */

char state_machine(int param_1,int param_2)

{
 if (param_2 == 2) {
 return 2;
 }
 if (param_2 < 3) {
 if (param_2 == 0) {
 return param_1 == 1;
 }
 if (param_2 == 1) {
 if (param_1 == 2) {
 return 2;
 }
 return (param_1 == 99) * '\x02' + '\x01';
 }
 }
 else if (param_2 == 3) {
 return -(param_1 != 0) & 3;
 }
 return 3;
}



/* Function: fsm_func_table @ 00102510 */

undefined8 fsm_func_table(undefined8 param_1,uint param_2)

{
 undefined8 uVar1;
 long in_FS_OFFSET;
 code *local_38 [5];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = state_idle;
 local_38[1] = state_processing;
 local_38[2] = state_done;
 local_38[3] = state_error;
 if (param_2 < 4) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Could not recover jumptable at 0x00102587. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = ((undefined8 (*)(undefined8))local_38[(int)param_2])(param_1);
 return uVar1;
 }
 }
 else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: computed_goto @ 001025b0 */

undefined8 computed_goto(undefined8 param_1,uint param_2)

{
 undefined8 uVar1;
 long in_FS_OFFSET;
 code *local_38 [5];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = computed_goto_constprop_0;
 local_38[1] = computed_goto_constprop_0;
 local_38[2] = computed_goto_constprop_0;
 local_38[3] = computed_goto_constprop_0;
 if (param_2 < 4) {
 /* WARNING: Could not recover jumptable at 0x0010260f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = ((undefined8 (*)(undefined8))local_38[(int)param_2])(param_1);
 return uVar1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: obfuscated_cf @ 00102680 */

int obfuscated_cf(int param_1)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 00102690 */

int opaque_predicate(int param_1)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 001026a0 */

int overlapped_code(uint param_1)

{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}



/* Function: test_control_flow_l3 @ 001026c0 */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 
 puts(&DAT_001032b8);
 uVar1 = non_local_jump_constprop_0();
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",0xf);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto_constprop_0();
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
