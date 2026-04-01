/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init rem

/* Type definitions for decompiled code */
typedef char undefined;
#include <setjmp.h>oved by preprocessor */

/* Function pointer type */
typedef int (*code)(int);
typedef int (*code2)(int, int);
typedef int (*code0)(void);

/* For binary operations */
typedef int (*binary_op)(int, int);

/* Define true/false for _Bool */
#ifndef true
#define true 1
#define false 0
#endif

/* ARM intrinsic for signed borrow detection */
static inline int SBORROW4(int a, int b) {
    return ((a ^ b) & (a ^ (a - b))) < 0;
}

/* Switch table for switch_small */
static const char CSWTCH_56[] = {0, 1, 4, 9};

/* Function: main @ 000104e0 */

int main(void)

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




/* Function: recursion_factorial @ 000105f0 */

int recursion_factorial(int param_1)

{
 int iVar1;
 
 iVar1 = 1;
 for (; 1 < param_1; param_1 = param_1 + -1) {
 iVar1 = param_1 * iVar1;
 }
 return iVar1;
}



/* Function: double_value @ 0001060c */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00010614 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 0001061c */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00010624 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 0001062c */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00010634 */

int op_div(int param_1,int param_2)

{
 if (param_2 != 0) {
 return param_1 / param_2;
 }
 return 0;
}



/* Function: op_mod @ 00010650 */

int op_mod(int param_1,int param_2)

{
 int extraout_r1;
 int quotient;
 
 if (param_2 != 0) {
 quotient = __aeabi_idivmod();
 extraout_r1 = __aeabi_idivmod();  /*余数*/
 return extraout_r1;
 }
 return 0;
}



/* Function: op_and @ 00010670 */

unsigned int op_and(unsigned int param_1,unsigned int param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 00010678 */

unsigned int op_or(unsigned int param_1,unsigned int param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 00010680 */

unsigned int op_xor(unsigned int param_1,unsigned int param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 00010688 */

int op_shl(int param_1,unsigned int param_2)

{
 return param_1 << (param_2 & 0xff);
}



/* Function: op_shr @ 00010690 */

int op_shr(int param_1,unsigned int param_2)

{
 return param_1 >> (param_2 & 0xff);
}



/* Function: state_idle @ 00010698 */

_Bool state_idle(int param_1)

{
 return param_1 == 1 ? 1 : 0;
}



/* Function: state_processing @ 000106a8 */

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



/* Function: state_done @ 000106c0 */

int state_done(void)

{
 return 2;
}



/* Function: state_error @ 000106c8 */

int state_error(int param_1)

{
 int uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 000106d4 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 000106e0 */

int single_if(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}



/* Function: if_else @ 000106ec */

_Bool if_else(int param_1)

{
 return 0 < param_1 ? 1 : 0;
}



/* Function: nested_if_2 @ 000106fc */

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



/* Function: nested_if_deep @ 00010718 */

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



/* Function: if_elseif_chain @ 0001076c */

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



/* Function: if_elseif_long @ 0001079c */

int if_elseif_long(unsigned int param_1)

{
 int iVar1;
 
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 000107b0 */

int switch_small(unsigned int param_1)

{
 int iVar1;
 
 if (param_1 < 4) {
 iVar1 = (int)(char)(&CSWTCH_56)[param_1];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_large @ 000107c8 */

int switch_large(unsigned int param_1)

{
 int iVar1;
 
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 000107dc */

int switch_default(int param_1)

{
 if (param_1 - 1U < 3) {
 param_1 = param_1 * 100;
 }
 else {
 param_1 = 0;
 }
 return param_1;
}



/* Function: switch_fallthrough @ 000107f4 */

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
 goto LAB_0001081c;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_0001081c:
 return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 00010834 */

int loop_for_fixed(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 }
 return iVar1;
}



/* Function: loop_while @ 00010854 */

int loop_while(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != 0; param_1 = param_1 / 10) {
 iVar1 = iVar1 + 1;
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 0001088c */

int loop_dowhile(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
}



/* Function: loop_nested @ 000108b4 */

int loop_nested(int param_1,unsigned int param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + (param_2 & ~((int)param_2 >> 0x1f));
 }
 return iVar1;
}



/* Function: loop_break @ 000108d8 */

/* WARNING: Removing unreachable block (ram,0x00010948) */

int loop_break(int param_1)

{
 int iVar1;
 int *piVar2;
 int local_20 [6];
 
 local_20[5] = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 iVar1 = 0;
 local_20[4] = 0x32;
 piVar2 = local_20;
 do {
 if (*piVar2 == param_1) {
 return 1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return 0;
}



/* Function: loop_continue @ 0001095c */

int loop_continue(int param_1)

{
 int iVar1;
 unsigned int uVar2;
 
 iVar1 = 0;
 for (uVar2 = 1; (int)uVar2 <= param_1; uVar2 = uVar2 + 1) {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 }
 return iVar1;
}



/* Function: goto_forward @ 00010980 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}



/* Function: goto_backward @ 00010994 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 1;
 if (param_1 < 1) {
 return 1;
 }
 iVar2 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 <= param_1);
 return iVar1;
}



/* Function: ternary_op @ 000109b8 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 000109c4 */

void test_control_flow_l1(void)

{
 int uVar1;
 
 puts("Control Flow Tests - Level 1");
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",if_else(5));
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",if_else(0));
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
 uVar1 = loop_break(0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): found\n");
 uVar1 = loop_break(99);
 __printf_chk(1,"CF-L1-16 (loop_break): not found\n");
 uVar1 = loop_continue(10);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 00010c34 */

/* WARNING: Removing unreachable block (ram,0x00010cac) */

void loop_multi_exit(int param_1)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
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
 iVar3 = 0;
 piVar2 = local_3c;
 do {
 iVar4 = 0;
 piVar1 = piVar2;
 do {
 if (*piVar1 == param_1) {
 return;
 }
 iVar4 = iVar4 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar4 != 4);
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 4;
 } while (iVar3 != 3);
 return;
}



/* Function: infinite_loop @ 00010ce4 */

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



/* Function: multi_return @ 00010d18 */

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



/* Function: conditional_return @ 00010d48 */

int conditional_return(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 return param_1 << 1;
 }
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = -param_1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00010d60 */

unsigned int duffs_device(int *param_1,int *param_2,unsigned int param_3)

{
 int *puVar1;
 int *puVar2;
 int iVar3;
 int *puVar4;
 int *puVar5;
 
 if (0 < (int)param_3) {
 iVar3 = (int)(param_3 + 7) >> 3;
 puVar2 = param_2;
 puVar1 = param_2;
 puVar5 = param_1;
 puVar4 = param_1;
 switch(param_3 & 7) {
 case 1:
 while( true ) {
 iVar3 = iVar3 + -1;
 *param_1 = *param_2;
 if (iVar3 == 0) break;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_00010d80_default:
 puVar1 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d80_caseD_7:
 puVar2 = puVar1 + 1;
 puVar5 = puVar4 + 1;
 *puVar4 = *puVar1;
switchD_00010d80_caseD_6:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
switchD_00010d80_caseD_5:
 puVar2 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d80_caseD_4:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
switchD_00010d80_caseD_3:
 puVar2 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d80_caseD_2:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
 }
 break;
 case 2:
 goto switchD_00010d80_caseD_2;
 case 3:
 goto switchD_00010d80_caseD_3;
 case 4:
 goto switchD_00010d80_caseD_4;
 case 5:
 goto switchD_00010d80_caseD_5;
 case 6:
 goto switchD_00010d80_caseD_6;
 case 7:
 goto switchD_00010d80_caseD_7;
 default:
 goto switchD_00010d80_default;
 }
 return param_3;
 }
 return 0xffffffff;
}



/* Function: loop_complex_cond @ 00010e00 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 _Bool bVar4;
 
 iVar3 = 0;
 while( true ) {
 iVar2 = param_1 - iVar3;
 bVar4 = SBORROW4(iVar3,9);
 iVar1 = iVar3 + -9;
 if (iVar3 < 10) {
 bVar4 = SBORROW4(iVar3 * 2,iVar2);
 iVar1 = iVar3 * 2 - iVar2;
 }
 if (iVar1 < 0 == bVar4) break;
 iVar3 = iVar3 + 1;
 }
 return iVar3 * 3 + iVar2;
}



/* Function: loop_modify_var @ 00010e2c */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 }
 return iVar1;
}



/* Function: loop_external_state @ 00010e54 */

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



/* Function: tail_recursion @ 00010e78 */

int tail_recursion(int param_1,int param_2)

{
 for (; 1 < param_1; param_1 = param_1 + -1) {
 param_2 = param_1 * param_2;
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00010e94 */

unsigned int indirect_recursion_a(unsigned int param_1,int param_2)

{
 do {
 if (param_2 < 1) {
 return param_1;
 }
 if ((param_1 & 1) == 0) {
 if (param_2 == 1) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == 1) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 param_2 = param_2 + -2;
 } while( true );
}



/* Function: call_func_ptr @ 00010edc */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010ee4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 00010ee8 */

/* WARNING: Removing unreachable block (ram,0x00010f34) */

int call_func_ptr_array(unsigned int param_1,int param_2)

{
 int uVar1;
 code *apcStack_18 [4];
 
 apcStack_18[3] = (code *)0x0;
 apcStack_18[0] = double_value;
 apcStack_18[1] = triple_value;
 apcStack_18[2] = recursion_factorial;
 if (param_1 < 3) {
 /* WARNING: Could not recover jumptable at 0x00010f50. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*apcStack_18[param_1])(param_2);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: call_virtual_func @ 00010f80 */

int call_virtual_func(int param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00010f88 */

int process_with_callback(int param_1,int param_2,code *param_3)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = (*param_3)(*(int *)(param_1 + iVar2 * 4));
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00010fc4 */

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
 puts("Control Flow Tests - Level 2");
 loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): done\n");
 local_70 = 0;
 infinite_loop(&local_70);
 __printf_chk(1,"CF-L2-02 (infinite_loop): done\n");
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
 __printf_chk(1,"CF-L2-08 (loop_external_state): done\n");
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(6,1);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): done\n");
 uVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_68 = 1;
 uStack_64 = 2;
 uStack_60 = 3;
 uStack_5c = 4;
 local_58 = 5;
 uVar1 = process_with_callback(&local_68,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: non_local_jump @ 0001123c */

int non_local_jump(int param_1)

{
 int iVar1;
 int uVar2;
 jmp_buf jump_buffer;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (param_1 < 0) {
 uVar2 = 1;
 }
 else {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 uVar2 = 2;
 }
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,uVar2);
 return 0;
}



/* Function: cpp_exception @ 00011294 */

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



/* Function: large_jump_table @ 000112bc */

/* WARNING: Removing unreachable block (ram,0x00011320) */

int large_jump_table(unsigned int param_1,int param_2,int param_3)

{
 int uVar1;
 binary_op apcStack_3c [10];
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
 /* WARNING: Could not recover jumptable at 0x00011340. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*apcStack_3c[param_1])(param_2,param_3);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: conditional_func_ptr @ 0001136c */

int conditional_func_ptr(int param_1,int param_2)

{
 code *UNRECOVERED_JUMPTABLE;
 int result;
 
 if (param_1 == 0) {
 UNRECOVERED_JUMPTABLE = double_value;
 }
 else {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 /* WARNING: Could not recover jumptable at 0x00011390. Too many branches */
 /* WARNING: Treating indirect jump as call */
 result = (*UNRECOVERED_JUMPTABLE)(param_2);
 return result;
}



/* Function: state_machine @ 000113a0 */

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
switchD_000113ac_caseD_2:
 return param_2;
 case 2:
 goto switchD_000113ac_caseD_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 return 3;
 }
}



/* Function: fsm_func_table @ 00011404 */

/* WARNING: Removing unreachable block (ram,0x00011454) */

int fsm_func_table(int param_1,unsigned int param_2)

{
 int uVar1;
 code *apcStack_1c [4];
 int local_c;
 
 local_c = 0;
 apcStack_1c[0] = state_idle;
 apcStack_1c[1] = state_processing;
 apcStack_1c[2] = state_done;
 apcStack_1c[3] = state_error;
 if (param_2 < 4) {
 /* WARNING: Could not recover jumptable at 0x00011470. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*apcStack_1c[param_2])(param_1);
 return uVar1;
 }
 return 3;
}



/* Function: computed_goto @ 0001149c */

/* WARNING: Removing unreachable block (ram,0x000114f8) */

void computed_goto(int param_1,unsigned int param_2)

{
 code2 *apuStack_1c [3];
 
 apuStack_1c[0] = op_add;
 apuStack_1c[1] = op_sub;
 apuStack_1c[2] = op_mul;
 if (3 < param_2) {
 return;
 }
 /* WARNING: Could not recover jumptable at 0x000114d8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*apuStack_1c[param_2])(param_1,param_2);
 return;
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



/* Function: test_control_flow_l3 @ 0001154c */

/* WARNING: Removing unreachable block (ram,0x00011694) */

void test_control_flow_l3
 (int param_1,int param_2,int param_3,int param_4)

{
 int uVar1;
 int local_1c;
 int uStack_18;
 int uStack_14;
 
 local_1c = param_2;
 uStack_18 = param_3;
 uStack_14 = param_4;
 puts("Control Flow Tests - Level 3");
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 uVar1 = conditional_func_ptr(0,5);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 uVar1 = state_machine(2,1);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",uVar1);
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_1c = 0;
 uStack_18 = 1;
 uStack_14 = 2;
 computed_goto(&local_1c,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): done\n");
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00011914 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
