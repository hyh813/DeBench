/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_gcc_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Data declarations */
#include <setjmp.h>

extern const char DAT_00011e2c[];
extern const char DAT_00011694[];
extern const char DAT_000116b8[];
extern const char DAT_000116c0[];
extern const char DAT_000116c8[];
extern const char DAT_00012030[];

static jmp_buf jump_buffer;




/* Function: recursion_factorial @ 000105d8 */

int recursion_factorial(int param_1)

{
 int iVar1;
 
 if (1 < param_1) {
 iVar1 = recursion_factorial(param_1 + -1);
 return param_1 * iVar1;
 }
 return 1;
}



/* Function: double_value @ 00010600 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00010608 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 00010610 */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00010618 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00010620 */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00010628 */

int op_div(int param_1,int param_2)

{
 int uVar1;
 
 if (param_2 != 0) {
 uVar1 = __aeabi_idiv();
 return uVar1;
 }
 return 0;
}



/* Function: op_mod @ 00010644 */

int op_mod(int param_1,int param_2)

{
 int extraout_r1;
 
 if (param_2 != 0) {
 __aeabi_idivmod();
 return extraout_r1;
 }
 return 0;
}



/* Function: op_and @ 00010664 */

unsigned int op_and(unsigned int param_1,unsigned int param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 0001066c */

unsigned int op_or(unsigned int param_1,unsigned int param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 00010674 */

unsigned int op_xor(unsigned int param_1,unsigned int param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 0001067c */

int op_shl(int param_1,unsigned int param_2)

{
 return param_1 << (param_2 & 0xff);
}



/* Function: op_shr @ 00010684 */

int op_shr(int param_1,unsigned int param_2)

{
 return param_1 >> (param_2 & 0xff);
}



/* Function: state_idle @ 0001068c */

int state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 0001069c */

int state_processing(int param_1)

{
 int uVar1;
 
 if (param_1 != 2) {
 if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
 }
 return 2;
}



/* Function: state_done @ 000106b4 */

int state_done(void)

{
 return 2;
}



/* Function: state_error @ 000106bc */

int state_error(int param_1)

{
 int uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 000106c8 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 000106d4 */

int single_if(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}



/* Function: if_else @ 000106e0 */

int if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 000106f0 */

int nested_if_2(int param_1,int param_2)

{
 if (0 < param_1) {
 if (0 < param_2) {
 param_1 = param_1 + param_2;
 }
 return param_1;
 }
 return 0;
}



/* Function: nested_if_deep @ 0001070c */

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
 if (param_4 < 1) {
 return 3;
 }
 if (param_5 < 1) {
 uVar1 = 4;
 }
 else {
 uVar1 = 5;
 }
 return uVar1;
}



/* Function: if_elseif_chain @ 00010760 */

int if_elseif_chain(int param_1)

{
 int uVar1;
 
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 == 1) {
 return 0x14;
 }
 if (param_1 == 2) {
 uVar1 = 0x1e;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: if_elseif_long @ 00010790 */

int if_elseif_long(int param_1)

{
 switch(param_1) {
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
 default:
 return 0xffffffff;
 }
}



/* Function: switch_small @ 000107e0 */

int switch_small(int param_1)

{
 switch(param_1) {
 case 0:
 return 0xf;
 case 1:
 return 5;
 case 2:
 return 0x32;
 case 3:
 return 2;
 default:
 return 0xffffffff;
 }
}



/* Function: switch_large @ 00010824 */

int switch_large(int param_1)

{
 switch(param_1) {
 case 0:
 break;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 case 4:
 return 0x28;
 case 5:
 return 0x32;
 case 6:
 return 0x3c;
 case 7:
 return 0x46;
 case 8:
 return 0x50;
 case 9:
 return 0x5a;
 default:
 param_1 = 0xffffffff;
 }
 return param_1;
}



/* Function: switch_default @ 000108a8 */

int switch_default(int param_1)

{
 int uVar1;
 
 if (param_1 == 2) {
 return 200;
 }
 if (param_1 == 3) {
 return 300;
 }
 if (param_1 == 1) {
 uVar1 = 100;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: switch_fallthrough @ 000108d8 */

int switch_fallthrough(int param_1)

{
 int iVar1;
 
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 if (param_1 != 1) {
 return -1;
 }
 iVar1 = 0;
 goto LAB_00010908;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_00010908:
 return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 00010918 */

int loop_for_fixed(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_while @ 00010944 */

int loop_while(int param_1)

{
 int iVar1;
 
 if (param_1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00010980 */

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



/* Function: loop_nested @ 000109a8 */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = iVar1;
 do {
 if (0 < param_2) {
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (param_2 != iVar3);
 iVar1 = iVar3 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_break @ 000109ec */

/* WARNING: Removing unreachable block (ram,0x00010a64) */

void loop_break(int param_1)

{
 int iVar1;
 int *piVar2;
 int local_20 [6];
 
 local_20[5] = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 iVar1 = 0;
 piVar2 = local_20;
 do {
 if (*piVar2 == param_1) {
 return;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return;
}



/* Function: loop_continue @ 00010a70 */

int loop_continue(int param_1)

{
 int iVar1;
 unsigned int uVar2;
 
 if (0 < param_1) {
 uVar2 = 1;
 iVar1 = 0;
 do {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != param_1 + 1U);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 00010aa4 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}



/* Function: goto_backward @ 00010ab8 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar2 = 1;
 iVar1 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 != param_1 + 1);
 return iVar1;
 }
 return 1;
}



/* Function: ternary_op @ 00010ae8 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 00010af4 */

void test_control_flow_l1(void)

{
 int uVar1;
 
 puts("Control Flow Test Level 1");
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
 uVar1 = loop_for_fixed(10);
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
 loop_break(0x1e);
 loop_break(99);
 puts("CF-L1-16 (loop_break): done");
 uVar1 = loop_continue(10);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 uVar1 = goto_backward(5);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",uVar1);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 00010d6c */

void loop_multi_exit(int param_1)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int local_3c [13];
 
 local_3c[0xc] = 0;
 local_3c[0] = 1;
 local_3c[1] = 2;
 local_3c[2] = 3;
 local_3c[3] = 4;
 local_3c[4] = 5;
 local_3c[5] = 6;
 local_3c[6] = 7;
 local_3c[7] = 8;
 local_3c[8] = 9;
 local_3c[9] = 10;
 local_3c[10] = 0xb;
 local_3c[0xb] = 0xc;
 piVar4 = local_3c;
 iVar1 = 0;
 do {
 iVar3 = 0;
 piVar2 = piVar4;
 do {
 if (*piVar2 == param_1) {
 return;
 }
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 4);
 iVar1 = iVar1 + 1;
 piVar4 = piVar4 + 4;
 } while (iVar1 != 3);
 return;
}



/* Function: infinite_loop @ 00010e1c */

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



/* Function: multi_return @ 00010e50 */

int multi_return(unsigned int param_1)

{
 int iVar1;
 
 if ((int)param_1 < 0) {
 return -1;
 }
 iVar1 = param_1 * 2;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00010e80 */

int conditional_return(int param_1)

{
 if (param_1 < 1) {
 if (param_1 < 0) {
 param_1 = -param_1;
 }
 else {
 param_1 = 0;
 }
 return param_1;
 }
 return param_1 << 1;
}



/* Function: duffs_device @ 00010ea0 */

unsigned int duffs_device(int *param_1,int *param_2,unsigned int param_3)

{
 int *puVar1;
 int *puVar2;
 int *puVar3;
 int *puVar4;
 int iVar5;
 unsigned int uVar6;
 
 if (0 < (int)param_3) {
 iVar5 = param_3 + 7;
 if (iVar5 < 0) {
 iVar5 = param_3 + 0xe;
 }
 iVar5 = iVar5 >> 3;
 uVar6 = param_3 & 7;
 if (-1 < (int)-param_3) {
 uVar6 = -(-param_3 & 7);
 }
 puVar1 = param_2;
 puVar2 = param_2;
 puVar3 = param_1;
 puVar4 = param_1;
 switch(uVar6) {
 case 0:
 goto switchD_00010ed0_caseD_0;
 case 1:
 goto switchD_00010ed0_caseD_1;
 case 2:
 goto switchD_00010ed0_caseD_2;
 case 3:
 goto switchD_00010ed0_caseD_3;
 case 4:
 goto switchD_00010ed0_caseD_4;
 case 5:
 goto switchD_00010ed0_caseD_5;
 case 6:
 goto switchD_00010ed0_caseD_6;
 case 7:
 goto switchD_00010ed0_caseD_7;
 default:
 return param_3;
 }
 }
 return 0xffffffff;
switchD_00010ed0_caseD_0:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ed0_caseD_7:
 puVar2 = puVar1 + 1;
 puVar4 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010ed0_caseD_6:
 param_2 = puVar2 + 1;
 param_1 = puVar4 + 1;
 *puVar4 = *puVar2;
switchD_00010ed0_caseD_5:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ed0_caseD_4:
 param_2 = puVar1 + 1;
 param_1 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010ed0_caseD_3:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ed0_caseD_2:
 param_2 = puVar1 + 1;
 param_1 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010ed0_caseD_1:
 *param_1 = *param_2;
 iVar5 = iVar5 + -1;
 if (iVar5 < 1) {
 return param_3;
 }
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 goto switchD_00010ed0_caseD_0;
}



/* Function: loop_complex_cond @ 00010f5c */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int bVar5;
 
 if (param_1 < 1) {
 iVar3 = 0;
 iVar4 = iVar3;
 }
 else {
 iVar4 = 0;
 iVar2 = 0;
 do {
 iVar4 = iVar4 + 2;
 param_1 = param_1 + -1;
 iVar3 = iVar2 + 1;
 bVar5 = SBORROW4(iVar3,9);
 iVar1 = iVar2 + -8;
 if (iVar3 < 10) {
 bVar5 = SBORROW4(iVar4,param_1);
 iVar1 = iVar4 - param_1;
 }
 iVar2 = iVar3;
 } while (0 < param_1 && iVar1 < 0 != bVar5);
 }
 return iVar4 + param_1 + iVar3;
}



/* Function: loop_modify_var @ 00010fb4 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (0 < param_1) {
 iVar1 = 0;
 iVar3 = iVar1;
 while (iVar2 = iVar3, iVar3 = iVar2 + 1, iVar3 < param_1) {
 iVar1 = iVar1 + iVar3;
 if (5 < iVar3) {
 iVar3 = iVar2 + 3;
 }
 }
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 00010fec */

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



/* Function: tail_recursion @ 00011010 */

int tail_recursion(int param_1,int param_2)

{
 int iVar1;
 
 if (1 < param_1) {
 iVar1 = tail_recursion(param_1 + -1,param_1 * param_2);
 return iVar1;
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00011034 */

unsigned int indirect_recursion_a(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 
 if (param_2 < 1) {
 return param_1;
 }
 if ((param_1 & 1) != 0) {
 if (1 < param_2) {
 uVar1 = indirect_recursion_a(param_1 * 3 + 2,param_2 + -2);
 return uVar1;
 }
 return param_1 * 3 + 1;
 }
 if (param_2 < 2) {
 return (int)param_1 / 2;
 }
 uVar1 = indirect_recursion_a((int)param_1 / 2 + 1,param_2 + -2);
 return uVar1;
}



/* Function: call_func_ptr @ 0001108c */

void call_func_ptr(int (*param_1)(int),int param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 000110a0 */

void call_func_ptr_array(unsigned int param_1,int param_2)

{
 long long uVar1;
 int (*apcStack_18 [3])(int);
 int local_c;
 
 local_c = 0;
 apcStack_18[0] = double_value;
 apcStack_18[1] = triple_value;
 apcStack_18[2] = recursion_factorial;
 if (param_1 < 3) {
 uVar1 = (*apcStack_18[param_1])(param_2);
 }
 else {
 uVar1 = 0x10608ffffffff;
 }
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar1,(int)((unsigned long long)uVar1 >> 0x20),local_c,0);
}



/* Function: call_virtual_func @ 00011120 */

int call_virtual_func(int param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00011128 */

int process_with_callback(int param_1,int param_2,int (*param_3)(int))

{
 int iVar1;
 int iVar2;
 int *puVar3;
 int iVar4;
 
 if (param_2 < 1) {
 iVar4 = 0;
 }
 else {
 puVar3 = (int *)(param_1 + -4);
 iVar2 = 0;
 iVar4 = 0;
 do {
 puVar3 = puVar3 + 1;
 iVar1 = (*param_3)(*puVar3);
 iVar4 = iVar4 + iVar1;
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar4;
}



/* Function: test_control_flow_l2 @ 0001116c */

void test_control_flow_l2(void)

{
 int uVar1;
 int local_70;
 int local_6c;
 int local_68;
 int uStack_64;
 int uStack_60;
 int uStack_5c;
 int local_58;
 int local_54;
 int uStack_50;
 int uStack_4c;
 int uStack_48;
 int local_44;
 int uStack_40;
 int uStack_3c;
 int uStack_38;
 char auStack_34 [32];
 int local_14;
 
 local_14 = 0;
 puts(&DAT_00011e2c);
 loop_multi_exit(7);
 puts("CF-L2-01 (loop_multi_exit): done");
 local_70 = 0;
 infinite_loop(&local_70);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",local_70);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_54 = 1;
 uStack_50 = 2;
 uStack_4c = 3;
 uStack_48 = 4;
 local_44 = 5;
 uStack_40 = 6;
 uStack_3c = 7;
 uStack_38 = 8;
 memset(auStack_34,0,0x20);
 uVar1 = duffs_device(auStack_34,&local_54,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_6c = 0;
 loop_external_state(&local_6c);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",local_6c);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 call_func_ptr(double_value,5);
 puts("CF-L2-12 (call_func_ptr): done");
 call_func_ptr_array(0,5);
 puts("CF-L2-13 (call_func_ptr_array): done");
 call_func_ptr_array(2,5);
 local_68 = 1;
 uStack_64 = 2;
 uStack_60 = 3;
 uStack_5c = 4;
 local_58 = 5;
 uVar1 = process_with_callback(&local_68,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: non_local_jump @ 00011404 */

int non_local_jump(int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(&jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(&jump_buffer,2);
 }
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}



/* Function: cpp_exception @ 0001146c */

int cpp_exception(int param_1)

{
 if (param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 return -2;
}



/* Function: large_jump_table @ 00011494 */

void large_jump_table(unsigned int param_1,int param_2,int param_3)

{
 long long uVar1;
 int (*apcStack_3c [10])(int,int);
 int local_14;
 
 local_14 = 0;
 apcStack_3c[0] = op_add;
 apcStack_3c[1] = op_sub;
 apcStack_3c[2] = op_mul;
 apcStack_3c[3] = op_div;
 apcStack_3c[4] = op_mod;
 apcStack_3c[5] = op_and;
 apcStack_3c[6] = op_or;
 apcStack_3c[7] = op_xor;
 apcStack_3c[8] = op_shl;
 apcStack_3c[9] = op_shr;
 if (param_1 < 10) {
 uVar1 = (*apcStack_3c[param_1])(param_2,param_3);
 }
 else {
 uVar1 = 0x10684ffffffff;
 }
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar1,(int)((unsigned long long)uVar1 >> 0x20),local_14,0);
}



/* Function: conditional_func_ptr @ 0001152c */

void conditional_func_ptr(int param_1,int param_2)

{
 int (*pcVar1)(int);
 
 if (param_1 == 0) {
 pcVar1 = double_value;
 }
 else {
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 }
 (*pcVar1)(param_2);
 return;
}



/* Function: state_machine @ 0001156c */

unsigned int state_machine(int param_1,unsigned int param_2)

{
 switch(param_2) {
 case 0:
 return (unsigned int)(param_1 == 1);
 case 1:
 if (param_1 != 2) {
 if (param_1 == 99) {
 param_2 = 3;
 }
 return param_2;
 }
 param_2 = 2;
switchD_00011578_caseD_2:
 return param_2;
 case 2:
 goto switchD_00011578_caseD_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 return 3;
 }
}



/* Function: fsm_func_table @ 000115d8 */

void fsm_func_table(int param_1,unsigned int param_2)

{
 long long uVar1;
 int (*apcStack_1c [4])(int);
 int local_c;
 
 local_c = 0;
 apcStack_1c[0] = state_idle;
 apcStack_1c[1] = state_processing;
 apcStack_1c[2] = state_done;
 apcStack_1c[3] = state_error;
 if (param_2 < 4) {
 uVar1 = (*apcStack_1c[param_2])(param_1);
 }
 else {
 uVar1 = 0x1069c00000003;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar1,(int)((unsigned long long)uVar1 >> 0x20),local_c,0);
 }
 return;
}



/* Function: computed_goto @ 00011654 */

/* WARNING: Removing unreachable block (ram,0x000116d8) */

void computed_goto(int param_1,unsigned int param_2)

{
 char *apuStack_1c [4];
 int local_c;
 
 local_c = 0;
 apuStack_1c[0] = &DAT_00011694;
 apuStack_1c[1] = &DAT_000116b8;
 apuStack_1c[2] = &DAT_000116c0;
 apuStack_1c[3] = &DAT_000116c8;
 if (3 < param_2) {
 return;
 }
 /* WARNING: Could not recover jumptable at 0x00011690. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(void (*)())apuStack_1c[param_2])();
 return;
}



/* Function: obfuscated_cf @ 000116e4 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 000116ec */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 000116f4 */

int overlapped_code(unsigned int param_1)

{
 int iVar1;
 
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 else {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 0001170c */

void test_control_flow_l3(void)

{
 int uVar1;
 int local_1c;
 int uStack_18;
 int uStack_14;
 int uStack_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_00012030);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 conditional_func_ptr(0,5);
 puts("CF-L3-04 (conditional_func_ptr): done");
 (void)state_machine(2,1);
 puts("CF-L3-05 (state_machine): done");
 (void)fsm_func_table(2,1);
 puts("CF-L3-06 (fsm_func_table): done");
 local_1c = 0;
 local_1c = 0;
 uStack_18 = 1;
 uStack_14 = 2;
 uStack_10 = 3;
 uVar1 = computed_goto(&local_1c,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: main @ 000118a0 */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Data declarations */
extern const char DAT_00011e2c[];
extern const char DAT_00011694[];
extern const char DAT_000116b8[];
extern const char DAT_000116c0[];
extern const char DAT_000116c8[];
extern const char DAT_00012030[];

#include <setjmp.h>
static jmp_buf jump_buffer;

/* Function: __aeabi_idiv0 @ 00011af8 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
