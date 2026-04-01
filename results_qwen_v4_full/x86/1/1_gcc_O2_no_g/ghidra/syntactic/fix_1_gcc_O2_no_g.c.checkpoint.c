/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdbool.h>
#include <setjmp.h>

/* Ghidra type definitions */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef void (*code)(void);
typedef int (*code_int)(int);
typedef undefined4 (*code_noparam)(void);
typedef unsigned char byte;
typedef void undefined;
typedef unsigned char undefined1;
typedef struct __jmp_buf_tag __jmp_buf_tag;

/* External data declarations */
extern char DAT_00013008[];
extern char DAT_00013110[];
extern char DAT_00013294[];
extern undefined4 CSWTCH_56[];
extern jmp_buf jump_buffer;

/* Define missing global data */
char DAT_00013008[] = "CF-L1 Tests";
char DAT_00013110[] = "CF-L2 Tests";
char DAT_00013294[] = "CF-L3 Tests";
undefined4 CSWTCH_56[4] = {0, 10, 20, 50};
jmp_buf jump_buffer;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00011110 */

undefined4 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001115c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011160 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011299 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001129d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: recursion_factorial @ 000112b0 */

int recursion_factorial(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < param_1) {
 do {
 iVar1 = param_1 + -1;
 iVar2 = iVar2 * param_1;
 param_1 = iVar1;
 } while (iVar1 != 1);
 }
 return iVar2;
}



/* Function: double_value @ 000112e0 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: triple_value @ 000112f0 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 00011300 */

int op_add(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: op_sub @ 00011310 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00011320 */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00011330 */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
}



/* Function: op_mod @ 00011350 */

int op_mod(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 % param_2;
 }
 return iVar1;
}



/* Function: op_and @ 00011370 */

uint op_and(uint param_1,uint param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 00011380 */

uint op_or(uint param_1,uint param_2)

{
 return param_2 | param_1;
}



/* Function: op_xor @ 00011390 */

uint op_xor(uint param_1,uint param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 000113a0 */

int op_shl(int param_1,byte param_2)

{
 return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 000113b0 */

int op_shr(int param_1,byte param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 000113c0 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 000113d0 */

char state_processing(int param_1)

{
 if (param_1 != 2) {
 return (param_1 == 99) * '\x02' + '\x01';
 }
 return '\x02';
}



/* Function: state_done @ 00011400 */

undefined4 state_done(void)

{
 return 2;
}



/* Function: state_error @ 00011410 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 00011430 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 00011450 */

int single_if(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: if_else @ 00011470 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00011480 */

int nested_if_2(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 000114a0 */

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



/* Function: if_elseif_chain @ 00011500 */

undefined4 if_elseif_chain(int param_1)

{
 undefined4 uVar1;
 
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



/* Function: if_elseif_long @ 00011540 */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 return iVar1;
}



/* Function: switch_small @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 switch_small(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(CSWTCH_56 + param_1 * 4);
 }
 return uVar1;
}



/* Function: switch_large @ 00011590 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 000115b0 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = param_1 * 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 000115d0 */

int switch_fallthrough(int param_1)

{
 if (param_1 == 2) {
 return 6;
 }
 if (param_1 != 3) {
 return (uint)(param_1 == 1) * 2 + -1;
 }
 return 0x15;
}



/* Function: loop_for_fixed @ 00011610 */

int loop_for_fixed(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 return iVar2;
 }
 return 0;
}



/* Function: loop_while @ 00011640 */

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



/* Function: loop_dowhile @ 00011690 */

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



/* Function: loop_nested @ 000116d0 */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 if (0 < param_1) {
 iVar2 = 0;
 do {
 if (0 < param_2) {
 iVar1 = param_2 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return iVar1;
}



/* Function: loop_break @ 00011710 */

int loop_break(int param_1)

{
 int iVar1;
 int in_GS_OFFSET;
 int aiStack_24 [9];
 
 aiStack_24[5] = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 aiStack_24[1] = 0x14;
 aiStack_24[2] = 0x1e;
 aiStack_24[3] = 0x28;
 aiStack_24[4] = 0x32;
 if (param_1 != 10) {
 do {
 iVar1 = iVar1 + 1;
 if (iVar1 == 5) {
 iVar1 = -1;
 break;
 }
 } while (param_1 != aiStack_24[iVar1]);
 }
 if (aiStack_24[5] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: loop_continue @ 00011790 */

int loop_continue(int param_1)

{
 uint uVar1;
 int iVar2;
 
 if (0 < param_1) {
 uVar1 = 1;
 iVar2 = 0;
 do {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 uVar1 = uVar1 + 1;
 } while (uVar1 != param_1 + 1U);
 return iVar2;
 }
 return 0;
}



/* Function: goto_forward @ 000117d0 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}



/* Function: goto_backward @ 000117f0 */

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



/* Function: ternary_op @ 00011820 */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 00011840 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l1(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_24 [6];
 undefined4 uStack_c;
 
 uStack_c = 0x1184b;
 local_24[5] = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013008);
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
 local_24[1] = 0x14;
 iVar1 = 0;
 local_24[2] = 0x1e;
 local_24[3] = 0x28;
 local_24[4] = 0x32;
 do {
 iVar1 = iVar1 + 1;
 if (iVar1 == 5) {
 iVar1 = -1;
 break;
 }
 } while (local_24[iVar1] != 0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
 local_24[1] = 0x14;
 iVar1 = 0;
 local_24[2] = 0x1e;
 local_24[3] = 0x28;
 local_24[4] = 0x32;
 do {
 iVar1 = iVar1 + 1;
 if (iVar1 == 5) {
 iVar1 = -1;
 break;
 }
 } while (local_24[iVar1] != 99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 if (local_24[5] == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: loop_multi_exit @ 00011af0 */

int loop_multi_exit(int param_1)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_40 [15];
 
 iVar3 = 0;
 local_40[0xc] = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = local_40;
 local_40[1] = 2;
 local_40[2] = 3;
 local_40[3] = 4;
 local_40[4] = 5;
 local_40[5] = 6;
 local_40[6] = 7;
 local_40[7] = 8;
 local_40[8] = 9;
 local_40[9] = 10;
 local_40[10] = 0xb;
 local_40[0xb] = 0xc;
 if (param_1 != 1) {
 do {
 if (param_1 == piVar1[1]) {
 iVar2 = 1;
 goto LAB_00011b91;
 }
 if (param_1 == piVar1[2]) {
 iVar2 = 2;
 goto LAB_00011b91;
 }
 if (param_1 == piVar1[3]) {
 iVar2 = 3;
 goto LAB_00011b91;
 }
 iVar3 = iVar3 + 1;
 piVar1 = piVar1 + 4;
 if (iVar3 == 3) {
 iVar2 = -1;
 goto LAB_00011ba5;
 }
 } while (*piVar1 != param_1);
 }
 iVar2 = 0;
LAB_00011b91:
 iVar2 = iVar2 + iVar3 * 10;
LAB_00011ba5:
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: infinite_loop @ 00011bf0 */

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



/* Function: multi_return @ 00011c20 */

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



/* Function: conditional_return @ 00011c50 */

int conditional_return(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 return param_1 * 2;
 }
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = -param_1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00011c70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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
 goto _L186;
 case 2:
 puVar4 = param_2;
 goto LAB_00011cf4;
 case 3:
 goto _L184;
 case 4:
 puVar4 = param_2;
 goto LAB_00011ce0;
 case 5:
 goto _L182;
 case 6:
 goto _L181;
 case 7:
 goto _L179;
 }
 while( true ) {
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L179:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
_L181:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
_L182:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00011ce0:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L184:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00011cf4:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L186:
 *param_1 = *param_2;
 iVar3 = iVar3 + -1;
 if (iVar3 == 0) break;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 00011d40 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 < 1) {
 return param_1;
 }
 iVar1 = 0;
 iVar2 = param_1;
 do {
 iVar2 = iVar2 + -1;
 iVar1 = iVar1 + 2;
 if (iVar2 <= iVar1) break;
 } while (param_1 - iVar2 < 10);
 return (param_1 - iVar2) + iVar1 + iVar2;
}



/* Function: loop_modify_var @ 00011d80 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 iVar2 = 0;
 if (0 < param_1) {
 while (iVar1 = iVar2 + 1, iVar1 < param_1) {
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 3;
 if (iVar1 < 6) {
 iVar2 = iVar1;
 }
 }
 }
 return iVar3;
}



/* Function: loop_external_state @ 00011db0 */

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



/* Function: tail_recursion @ 00011dd0 */

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



/* Function: indirect_recursion_a @ 00011e00 */

uint indirect_recursion_a(uint param_1,int param_2)

{
 if (0 < param_2) {
 do {
 param_2 = param_2 + -2;
 if ((param_1 & 1) == 0) {
 if (param_2 == -1) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == -1) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 } while (param_2 != 0);
 }
 return param_1;
}



/* Function: call_func_ptr @ 00011e60 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE)

{
 /* WARNING: Could not recover jumptable at 0x00011e70. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)();
 return;
}



/* Function: call_func_ptr_array @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_func_ptr_array(uint param_1)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code_int local_1c [3];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c[0] = double_value;
 local_1c[1] = triple_value;
 local_1c[2] = recursion_factorial;
 if (param_1 < 3) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x00011ee1. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*local_1c[param_1])(param_1);
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_virtual_func @ 00011f10 */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 * 2;
}



/* Function: process_with_callback @ 00011f20 */

int process_with_callback(int param_1,int param_2,code_int param_3)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (0 < param_2) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar1 = iVar3 * 4;
 iVar3 = iVar3 + 1;
 iVar1 = (*param_3)(*(undefined4 *)(param_1 + iVar1));
 iVar2 = iVar2 + iVar1;
 } while (param_2 != iVar3);
 return iVar2;
 }
 return 0;
}



/* Function: test_control_flow_l2 @ 00011f70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l2(void)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 uint uVar4;
 int *piVar5;
 int iVar6;
 int in_GS_OFFSET;
 int local_74 [21];
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x11f7f;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013110);
 uVar2 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar2);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",0x3e9);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_74[5] = 1;
 uVar4 = 0;
 local_74[6] = 2;
 local_74[7] = 3;
 local_74[8] = 4;
 local_74[9] = 5;
 local_74[10] = 6;
 local_74[0xb] = 7;
 local_74[0xc] = 8;
 do {
 *(undefined4 *)((int)local_74 + uVar4 + 0x34) = 0;
 uVar4 = uVar4 + 4;
 } while (uVar4 < 0x20);
 uVar2 = duffs_device(local_74 + 0xd,local_74 + 5,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar2);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar6 = 0;
 iVar3 = 0;
 while (iVar1 = iVar3 + 1, iVar1 < 10) {
 iVar6 = iVar6 + iVar1;
 iVar3 = iVar3 + 3;
 if (iVar1 < 6) {
 iVar3 = iVar1;
 }
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",0x65);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 local_74[0] = 1;
 piVar5 = local_74;
 iVar3 = 0;
 local_74[1] = 2;
 iVar6 = 1;
 local_74[2] = 3;
 local_74[3] = 4;
 local_74[4] = 5;
 while( true ) {
 piVar5 = piVar5 + 1;
 iVar3 = iVar3 + iVar6 * 2;
 if (piVar5 == local_74 + 5) break;
 iVar6 = *piVar5;
 }
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar3);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return;
}



/* Function: non_local_jump @ 00012220 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int non_local_jump(int param_1)

{
 int iVar1;
 undefined4 extraout_EDX;
 
 iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,1,extraout_EDX,extraout_EDX);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,2,0,0);
 }
 param_1 = param_1 * 2;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}



/* Function: cpp_exception @ 000122a0 */

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



/* Function: large_jump_table @ 000122d0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 large_jump_table(uint param_1)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code_int local_38 [10];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_38[0] = op_add;
 local_38[1] = op_sub;
 local_38[2] = op_mul;
 local_38[3] = op_div;
 local_38[4] = op_mod;
 local_38[5] = op_and;
 local_38[6] = op_or;
 local_38[7] = op_xor;
 local_38[8] = op_shl;
 local_38[9] = op_shr;
 if (param_1 < 10) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x00012383. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*local_38[param_1])(param_1);
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: conditional_func_ptr @ 000123b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void conditional_func_ptr(int param_1)

{
 code *UNRECOVERED_JUMPTABLE;
 
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 /* WARNING: Could not recover jumptable at 0x000123e9. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)();
 return;
}



/* Function: state_machine @ 000123f0 */

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



/* Function: fsm_func_table @ 00012460 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 fsm_func_table(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code_noparam local_20 [4];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = state_idle;
 local_20[1] = state_processing;
 local_20[2] = state_done;
 local_20[3] = state_error;
 if (param_2 < 4) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x000124cd. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*local_20[param_2])();
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Label functions for computed_goto - forward declarations */
undefined4 LAB_00012588(void);
undefined4 LAB_00012578(void);
undefined4 LAB_00012568(void);
undefined4 LAB_00012548(void);

/* Function: computed_goto @ 000124f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 computed_goto(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code_noparam local_20 [4];
 int local_10;
 undefined4 uStack_4;
 
 uStack_4 = 0x124f9;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = LAB_00012588;
 local_20[1] = LAB_00012578;
 local_20[2] = LAB_00012568;
 local_20[3] = LAB_00012548;
 if (param_2 < 4) {
 /* WARNING: Could not recover jumptable at 0x0001253f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*local_20[param_2])();
 return uVar1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: obfuscated_cf @ 000125a0 */

int obfuscated_cf(int param_1)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 000125b0 */

int opaque_predicate(int param_1)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 000125c0 */

int overlapped_code(uint param_1)

{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}



/* Function: test_control_flow_l3 @ 000125f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x125fb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013294);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = op_add(10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
 local_20 = 0;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 uVar1 = computed_goto(&local_20,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 0001275c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012760 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012770 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 80 */

/* Label functions for computed_goto */
undefined4 LAB_00012588(void)
{
 return 0;
}

undefined4 LAB_00012578(void)
{
 return 1;
}

undefined4 LAB_00012568(void)
{
 return 2;
}

undefined4 LAB_00012548(void)
{
 return 3;
}
