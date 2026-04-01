/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Type definitions for Ghidra types */
#include <stddef.h>
#include <setjmp.h>
#include <stdbool.h>

typedef int undefined4;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef int (*code_ptr)(int);  /* actual function pointer type */
typedef int (*code_ptr_int)(int);  /* function pointer with int arg */
typedef code_ptr code;  /* function pointer placeholder */

typedef struct __jmp_buf_tag __jmp_buf_tag;
extern int _setjmp(__jmp_buf_tag *);
extern void __longjmp_chk(__jmp_buf_tag *, int, int, int);
extern void __stack_chk_fail(void);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);

/* Global jump buffer for non-local jumps */
jmp_buf jump_buffer;

/* String literals from the binary */
char DAT_00013008[] = "Control Flow Level 1 Tests";
char DAT_00013110[] = "Control Flow Level 2 Tests";
char DAT_00013294[] = "Control Flow Level 3 Tests";

/* Switch jump table for switch_small function */
static const unsigned int CSWTCH_56[4] = {0, 10, 20, 30};

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)(0);
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



/* Function: computed_goto.constprop.0 @ 00011430 */

undefined4 computed_goto_constprop_0(void)

{
 return 0x14;
}







/* Function: sequential_ops @ 00011470 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 00011490 */

int single_if(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: if_else @ 000114b0 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 000114c0 */

int nested_if_2(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 000114e0 */

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



/* Function: if_elseif_chain @ 00011540 */

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



/* Function: if_elseif_long @ 00011580 */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 return iVar1;
}



/* Function: switch_small @ 000115a0 */

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



/* Function: switch_large @ 000115d0 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 000115f0 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = param_1 * 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00011610 */

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



/* Function: loop_for_fixed @ 00011650 */

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



/* Function: loop_while @ 00011680 */

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



/* Function: loop_dowhile @ 000116d0 */

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



/* Function: loop_nested @ 00011710 */

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



/* Function: loop_break @ 00011750 */

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



/* Function: loop_continue @ 000117a0 */

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
 } while (param_1 + 1U != uVar1);
 return iVar2;
 }
 return 0;
}



/* Function: goto_forward @ 000117e0 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}



/* Function: goto_backward @ 00011800 */

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



/* Function: ternary_op @ 00011830 */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 00011850 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l1(void)

{
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



/* Function: loop_multi_exit @ 00011a50 */

int loop_multi_exit(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 == 1) {
 iVar1 = 0;
LAB_00011a9e:
 iVar2 = 0;
 }
 else {
 if (param_1 == 2) {
 iVar1 = 0;
LAB_00011aab:
 iVar2 = 1;
 goto LAB_00011aa0;
 }
 if (param_1 == 3) {
 iVar1 = 0;
LAB_00011ab4:
 iVar2 = 2;
 goto LAB_00011aa0;
 }
 if (param_1 == 4) {
 iVar1 = 0;
 }
 else {
 if (param_1 == 5) {
 iVar1 = 1;
 goto LAB_00011a9e;
 }
 if (param_1 == 6) {
 iVar1 = 1;
 goto LAB_00011aab;
 }
 if (param_1 == 7) {
 iVar1 = 1;
 goto LAB_00011ab4;
 }
 if (param_1 == 8) {
 iVar1 = 1;
 }
 else {
 if (param_1 == 9) {
 iVar1 = 2;
 goto LAB_00011a9e;
 }
 if (param_1 == 10) {
 iVar1 = 2;
 goto LAB_00011aab;
 }
 if (param_1 == 0xb) {
 iVar1 = 2;
 goto LAB_00011ab4;
 }
 if (param_1 != 0xc) {
 return -1;
 }
 iVar1 = 2;
 }
 }
 iVar2 = 3;
 }
LAB_00011aa0:
 return iVar2 + iVar1 * 10;
}



/* Function: infinite_loop @ 00011b00 */

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



/* Function: multi_return @ 00011b30 */

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



/* Function: conditional_return @ 00011b60 */

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



/* Function: duffs_device @ 00011b80 */

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
 goto _L192;
 case 2:
 puVar4 = param_2;
 goto LAB_00011c04;
 case 3:
 goto _L190;
 case 4:
 puVar4 = param_2;
 goto LAB_00011bf0;
 case 5:
 goto _L188;
 case 6:
 goto _L187;
 case 7:
 goto _L185;
 }
 while( true ) {
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L185:
 uVar1 = *param_2;
 puVar2 = param_1 + 1;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
_L187:
 uVar1 = *param_2;
 param_1 = puVar2 + 1;
 param_2 = param_2 + 1;
 *puVar2 = uVar1;
_L188:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00011bf0:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L190:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
LAB_00011c04:
 param_2 = puVar4 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar4;
_L192:
 *param_1 = *param_2;
 iVar3 = iVar3 + -1;
 if (iVar3 == 0) break;
 puVar2 = param_1 + 1;
 puVar4 = param_2 + 1;
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 00011c50 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar2 = param_1 + -1;
 if (iVar2 < 3) {
 param_1 = 1;
 iVar1 = 2;
 }
 else {
 iVar2 = param_1 + -2;
 if (iVar2 < 5) {
 param_1 = 2;
 iVar1 = 4;
 }
 else {
 iVar2 = param_1 + -3;
 if (iVar2 < 7) {
 param_1 = 3;
 iVar1 = 6;
 }
 else {
 iVar2 = param_1 + -4;
 if (iVar2 < 9) {
 param_1 = 4;
 iVar1 = 8;
 }
 else {
 iVar2 = param_1 + -5;
 if (iVar2 < 0xb) {
 param_1 = 5;
 iVar1 = 10;
 }
 else {
 iVar2 = param_1 + -6;
 if (iVar2 < 0xd) {
 param_1 = 6;
 iVar1 = 0xc;
 }
 else {
 iVar2 = param_1 + -7;
 if (iVar2 < 0xf) {
 param_1 = 7;
 iVar1 = 0xe;
 }
 else {
 iVar2 = param_1 + -8;
 if (iVar2 < 0x11) {
 param_1 = 8;
 iVar1 = 0x10;
 }
 else {
 iVar2 = param_1 + -9;
 if (iVar2 < 0x13) {
 param_1 = 9;
 iVar1 = 0x12;
 }
 else {
 iVar2 = param_1 + -10;
 iVar1 = 0x14;
 param_1 = 10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 param_1 = param_1 + iVar2 + iVar1;
 }
 return param_1;
}



/* Function: loop_modify_var @ 00011d30 */

/* WARNING: Removing unreachable block (ram,0x00011d53) */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = 0;
 if ((0 < param_1) && (param_1 != 1)) {
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



/* Function: loop_external_state @ 00011d90 */

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



/* Function: tail_recursion @ 00011db0 */

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



/* Function: indirect_recursion_a @ 00011de0 */

uint indirect_recursion_a(uint param_1,int param_2)

{
 uint uVar1;
 
 if (0 < param_2) {
 do {
 if ((param_1 & 1) == 0) {
 if (param_2 == 1) {
 return (int)param_1 / 2;
 }
 uVar1 = (int)param_1 / 2 + 1;
 if (param_2 < 3) {
 return uVar1;
 }
 if ((uVar1 & 1) == 0) goto LAB_00011e4d;
LAB_00011e0c:
 if (param_2 == 3) {
 return uVar1 * 3 + 1;
 }
 param_1 = uVar1 * 3 + 2;
 }
 else {
 if (param_2 == 1) {
 return param_1 * 3 + 1;
 }
 uVar1 = param_1 * 3 + 2;
 if (param_2 < 3) {
 return uVar1;
 }
 if ((uVar1 & 1) != 0) goto LAB_00011e0c;
LAB_00011e4d:
 if (param_2 == 3) {
 return (int)uVar1 / 2;
 }
 param_1 = (int)uVar1 / 2 + 1;
 }
 param_2 = param_2 + -4;
 } while (param_2 != 0);
 }
 return param_1;
}



/* Function: call_func_ptr @ 00011e70 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE)

{
 /* WARNING: Could not recover jumptable at 0x00011e80. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(0);
 return;
}



/* Function: call_func_ptr_array @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_func_ptr_array(uint param_1)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code *local_1c [3];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c[0] = double_value;
 local_1c[1] = triple_value;
 local_1c[2] = recursion_factorial;
 if (param_1 < 3) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x00011ef1. Too many branches */
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



/* Function: call_virtual_func @ 00011f20 */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 * 2;
}



/* Function: process_with_callback @ 00011f30 */

int process_with_callback(int param_1,int param_2,code *param_3)

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



/* Function: test_control_flow_l2 @ 00011f80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000120d7) */

void test_control_flow_l2(void)

{
 int iVar1;
 uint uVar2;
 undefined4 uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int in_GS_OFFSET;
 undefined4 local_50;
 undefined4 local_4c;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30 [8];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013110);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",0x3e9);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_50 = 1;
 uVar2 = 0;
 local_4c = 2;
 local_48 = 3;
 local_44 = 4;
 local_40 = 5;
 local_3c = 6;
 local_38 = 7;
 local_34 = 8;
 do {
 *(undefined4 *)((int)local_30 + uVar2) = 0;
 uVar2 = uVar2 + 4;
 } while (uVar2 < 0x20);
 uVar3 = duffs_device(local_30,&local_50,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar3);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar6 = 1;
 iVar1 = 1;
 do {
 iVar4 = iVar1 + 1;
 iVar5 = iVar1;
 while (iVar6 = iVar6 + iVar4, iVar1 = iVar4, 5 < iVar4) {
 if (iVar5 != 5) {
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",0x65);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 iVar5 = 8;
 iVar4 = 9;
 }
 } while( true );
}



/* Function: non_local_jump_constprop_0 @ 00011050 */

int non_local_jump_constprop_0(void)

{
 return 0;
}



/* Function: non_local_jump @ 000121f0 */

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



/* Function: cpp_exception @ 00012270 */

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



/* Function: large_jump_table @ 000122a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 large_jump_table(uint param_1)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code *local_38 [10];
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
 /* WARNING: Could not recover jumptable at 0x00012353. Too many branches */
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



/* Function: conditional_func_ptr @ 00012380 */

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
 /* WARNING: Could not recover jumptable at 0x000123b9. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_1);
 return;
}



/* Function: state_machine @ 000123c0 */

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



/* Function: fsm_func_table @ 00012430 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 fsm_func_table(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code *local_20 [4];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = state_idle;
 local_20[1] = state_processing;
 local_20[2] = state_done;
 local_20[3] = state_error;
 if (param_2 < 4) {
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x0001249d. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*local_20[param_2])(param_2);
 return uVar1;
 }
 }
 else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Forward declarations for computed goto labels */
undefined4 LAB_00012558(void);
undefined4 LAB_00012548(void);
undefined4 LAB_00012538(void);
undefined4 LAB_00012518(void);

/* Function: computed_goto @ 000124c0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 computed_goto(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 code *local_20 [4];
 int local_10;
 undefined4 uStack_4;
 
 uStack_4 = 0x124c9;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = (code *)LAB_00012558;
 local_20[1] = (code *)LAB_00012548;
 local_20[2] = (code *)LAB_00012538;
 local_20[3] = (code *)LAB_00012518;
 if (param_2 < 4) {
 /* WARNING: Could not recover jumptable at 0x0001250f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*local_20[param_2])(param_2);
 return uVar1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}

/* Forward declarations for computed goto labels */
undefined4 LAB_00012558(void);
undefined4 LAB_00012548(void);
undefined4 LAB_00012538(void);
undefined4 LAB_00012518(void);

/* Labels for computed goto */
undefined4 LAB_00012558(void) { return 0; }
undefined4 LAB_00012548(void) { return 1; }
undefined4 LAB_00012538(void) { return 2; }
undefined4 LAB_00012518(void) { return 3; }



/* Function: obfuscated_cf @ 00012570 */

int obfuscated_cf(int param_1)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 00012580 */

int opaque_predicate(int param_1)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 00012590 */

int overlapped_code(uint param_1)

{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}



/* Function: test_control_flow_l3 @ 000125c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00013294);
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



/* Function: __x86.get_pc_thunk.ax @ 000126d1 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 000126d5 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 000126e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 82 */
