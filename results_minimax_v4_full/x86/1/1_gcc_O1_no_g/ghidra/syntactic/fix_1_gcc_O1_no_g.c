/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Type definitions */
typedef void (*code_ptr)(void);
typedef int (*code)(int, int);
#include <setjmp.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

/* Stack canary definitions */
extern void *__stack_chk_guard;
#define CANARY_OFFSET 0x14

/* Forward declarations */
int obfuscated_cf(int, int);
int opaque_predicate(int, int);
int overlapped_code(unsigned int param_1);

/* Noreturn attribute for functions that don't return */
#ifdef __GNUC__
#define NORETURN __attribute__((noreturn))
#else
#define NORETURN
#endif

/* String constants */
extern char DAT_00013064[];
extern char DAT_0001316c[];
extern char DAT_000132f0[];

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code_ptr)NULL)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001113c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011140 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011279 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001127d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: recursion_factorial @ 00011281 */

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



/* Function: double_value @ 000112ae */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: triple_value @ 000112b9 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 000112c5 */

int op_add(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: op_sub @ 000112d2 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 000112df */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 000112ed */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
}



/* Function: op_mod @ 00011305 */

int op_mod(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 % param_2;
 }
 return iVar1;
}



/* Function: op_and @ 0001131d */

unsigned int op_and(unsigned int param_1,unsigned int param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 0001132a */

unsigned int op_or(unsigned int param_1,unsigned int param_2)

{
 return param_2 | param_1;
}



/* Function: op_xor @ 00011337 */

unsigned int op_xor(unsigned int param_1,unsigned int param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 00011344 */

int op_shl(int param_1,unsigned char param_2)

{
 return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00011353 */

int op_shr(int param_1,unsigned char param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00011362 */

int state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00011372 */

int state_processing(int param_1)

{
 if (param_1 != 2) {
 param_1 = (unsigned int)(param_1 == 99) * 2 + 1;
 }
 return param_1;
}



/* Function: state_done @ 0001138d */

int state_done(void)

{
 return 2;
}



/* Function: state_error @ 00011397 */

int state_error(int param_1)

{
 int uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 000113aa */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 000113bd */

int single_if(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 2;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: if_else @ 000113ce */

int if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 000113de */

int nested_if_2(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if ((0 < param_1) && (iVar1 = param_1 + param_2, param_2 < 1)) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 000113fc */

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



/* Function: if_elseif_chain @ 00011441 */

int if_elseif_chain(int param_1)

{
 int uVar1;
 
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



/* Function: if_elseif_long @ 0001146e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: switch_small @ 000114b3 */

int switch_small(int param_1)

{
 int iVar1;
 
 if (param_1 == 2) {
 iVar1 = 0x32;
 }
 else {
 if (2 < param_1) {
 return (unsigned int)(param_1 == 3) * 3 + -1;
 }
 iVar1 = 0xf;
 if (param_1 != 0) {
 iVar1 = -1;
 if (param_1 == 1) {
 iVar1 = 5;
 }
 return iVar1;
 }
 }
 return iVar1;
}



/* Function: switch_large @ 000114f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

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



/* Function: switch_default @ 0001154e */

int switch_default(int param_1)

{
 int uVar1;
 
 uVar1 = 200;
 if (((param_1 != 2) && (uVar1 = 300, param_1 != 3)) && (uVar1 = 0, param_1 == 1)) {
 uVar1 = 100;
 }
 return uVar1;
}



/* Function: switch_fallthrough @ 0001157b */

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
 goto LAB_000115a7;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_000115a7:
 return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 000115b1 */

int loop_for_fixed(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 }
 return iVar2;
}



/* Function: loop_while @ 000115da */

int loop_while(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 == 0) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 param_1 = param_1 / 10;
 iVar2 = iVar2 + 1;
 } while (param_1 != 0);
 }
 iVar1 = 1;
 if (0 < iVar2) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00011618 */

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



/* Function: loop_nested @ 00011646 */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar2 = 0;
 iVar3 = 0;
 if (0 < param_1) {
 do {
 iVar1 = 0;
 if (0 < param_2) {
 do {
 iVar1 = iVar1 + 1;
 } while (param_2 != iVar1);
 iVar3 = iVar3 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return iVar3;
}



/* Function: loop_break @ 00011682 */

int loop_break(int param_1)

{
 int iVar1;
 int local_24 [9];
 
 local_24[5] = __stack_chk_guard;
 iVar1 = 0;
 local_24[0] = 10;
 local_24[1] = 0x14;
 local_24[2] = 0x1e;
 local_24[3] = 0x28;
 local_24[4] = 0x32;
 do {
 if (local_24[iVar1] == param_1) goto LAB_000116d7;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 iVar1 = -1;
LAB_000116d7:
 if (local_24[5] == __stack_chk_guard) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: loop_continue @ 000116ed */

int loop_continue(int param_1)

{
 unsigned int uVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 uVar1 = 1;
 iVar2 = 0;
 do {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 uVar1 = uVar1 + 1;
 } while (uVar1 != param_1 + 1U);
 }
 return iVar2;
}



/* Function: goto_forward @ 00011721 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 * 2;
}



/* Function: goto_backward @ 00011735 */

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
 } while (iVar1 != param_1 + 1);
 }
 return iVar2;
}



/* Function: ternary_op @ 0001175b */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 0001176d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l1(void)

{
 int uVar1;
 
 puts(&DAT_00013064);
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
 uVar1 = loop_break(0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
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



/* Function: loop_multi_exit @ 000119c5 */

int loop_multi_exit(int param_1)

{
 int iVar1;
 int *puVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_40 = 1;
 local_3c = 2;
 local_38 = 3;
 local_34 = 4;
 local_30 = 5;
 local_2c = 6;
 local_28 = 7;
 local_24 = 8;
 local_20 = 9;
 local_1c = 10;
 local_18 = 0xb;
 local_14 = 0xc;
 puVar2 = &local_40;
 iVar3 = 0;
 do {
 iVar1 = 0;
 do {
 if (puVar2[iVar1] == param_1) {
 iVar1 = iVar1 + iVar3 * 10;
 goto LAB_00011a68;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 iVar3 = iVar3 + 1;
 puVar2 = puVar2 + 4;
 } while (iVar3 != 3);
 iVar1 = -1;
LAB_00011a68:
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: infinite_loop @ 00011a87 */

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



/* Function: multi_return @ 00011aac */

int multi_return(unsigned int param_1)

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



/* Function: conditional_return @ 00011ad6 */

int conditional_return(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 return param_1 * 2;
 }
 iVar1 = 0;
 if (param_1 < 0) {
 iVar1 = -param_1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00011af4 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */

int duffs_device(int *param_1,int *param_2,int param_3)

{
 int iVar1;
 int *puVar2;
 int *puVar3;
 
 if (param_3 < 1) {
 param_3 = -1;
 }
 else {
 iVar1 = param_3 + 0xe;
 if (-1 < param_3 + 7) {
 iVar1 = param_3 + 7;
 }
 iVar1 = iVar1 >> 3;
 switch(param_3 % 8) {
 case 0:
 while( true ) {
 *param_1 = *param_2;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
_L166:
 *param_1 = *param_2;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
_L168:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar3 = param_2 + 1;
LAB_00011b5c:
 param_2 = puVar3 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar3;
_L170:
 *param_1 = *param_2;
 puVar2 = param_1 + 1;
 puVar3 = param_2 + 1;
LAB_00011b70:
 param_2 = puVar3 + 1;
 param_1 = puVar2 + 1;
 *puVar2 = *puVar3;
_L172:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
LAB_00011b84:
 *param_1 = *param_2;
 iVar1 = iVar1 + -1;
 if (iVar1 < 1) break;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 }
 break;
 case 1:
 goto LAB_00011b84;
 case 2:
 goto _L172;
 case 3:
 puVar2 = param_1;
 puVar3 = param_2;
 goto LAB_00011b70;
 case 4:
 goto _L170;
 case 5:
 puVar2 = param_1;
 puVar3 = param_2;
 goto LAB_00011b5c;
 case 6:
 goto _L168;
 case 7:
 goto _L166;
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 00011bbf */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar3 = param_1;
 if (param_1 < 1) {
 iVar4 = 0;
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 iVar3 = iVar3 + -1;
 iVar4 = param_1 - iVar3;
 iVar2 = 0;
 if (-1 < iVar1) {
 iVar2 = iVar1;
 }
 } while ((iVar2 < iVar3) && (iVar4 < 10));
 }
 return iVar1 + iVar3 + iVar4;
}



/* Function: loop_modify_var @ 00011c06 */

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



/* Function: loop_external_state @ 00011c35 */

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



/* Function: tail_recursion @ 00011c51 */

int tail_recursion(int param_1,int param_2)

{
 if (1 < param_1) {
 param_2 = tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00011c7e */

unsigned int indirect_recursion_a(unsigned int param_1,int param_2)

{
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 param_1 = (int)param_1 / 2;
 if (1 < param_2) {
 param_1 = indirect_recursion_a(param_1 + 1,param_2 + -2);
 }
 }
 else if (param_2 < 2) {
 param_1 = param_1 * 3 + 1;
 }
 else {
 param_1 = indirect_recursion_a(param_1 * 3 + 2,param_2 + -2);
 }
 }
 return param_1;
}



/* Function: call_func_ptr @ 00011cdf */

int call_func_ptr(code *param_1,int param_2)

{
  return (*param_1)(param_2, 0);
}



/* Function: call_func_ptr_array @ 00011cf2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_func_ptr_array(unsigned int param_1,int param_2)

{
 int uVar1;
 int in_GS_OFFSET;
 code *local_1c [3];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c[0] = double_value;
 local_1c[1] = triple_value;
 local_1c[2] = recursion_factorial;
 if (param_1 < 3) {
 uVar1 = (*local_1c[param_1])(param_2, 0);
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_virtual_func @ 00011d61 */

int call_virtual_func(int param_1,int param_2)

{
 return param_2 * 2;
}



/* Function: process_with_callback @ 00011d6c */

int process_with_callback(int param_1,int param_2,code *param_3)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (param_2 < 1) {
 iVar3 = 0;
 }
 else {
 iVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = (*param_3)(*(int *)(param_1 + iVar2 * 4), 0);
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00011db7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l2(void)

{
 int uVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 int local_7c;
 int local_78;
 int local_74;
 int local_70;
 int local_6c;
 int local_68;
 int local_64;
 int local_60;
 int local_5c;
 int local_58;
 int local_54;
 int local_50;
 int local_4c;
 int local_48;
 int local_44;
 int local_40 [8];
 int local_20;
 
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_0001316c);
 uVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_7c = 0;
 uVar1 = infinite_loop(&local_7c);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",uVar1);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_60 = 1;
 local_5c = 2;
 local_58 = 3;
 local_54 = 4;
 local_50 = 5;
 local_4c = 6;
 local_48 = 7;
 local_44 = 8;
 uVar2 = 0;
 do {
 *(int *)((int)local_40 + uVar2) = 0;
 uVar2 = uVar2 + 4;
 } while (uVar2 < 0x20);
 uVar1 = duffs_device(local_40,&local_60,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_78 = 0;
 uVar1 = loop_external_state(&local_78);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",uVar1);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 uVar1 = call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_74 = 1;
 local_70 = 2;
 local_6c = 3;
 local_68 = 4;
 local_64 = 5;
 uVar1 = process_with_callback(&local_74,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: non_local_jump @ 0001205e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int non_local_jump(int param_1)

{
 int iVar1;
 jmp_buf jump_buffer;
 
 iVar1 = _setjmp(jump_buffer);
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



/* Function: cpp_exception @ 000120d6 */

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



/* Function: large_jump_table @ 000120f6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int large_jump_table(unsigned int param_1,int param_2,int param_3)

{
 int uVar1;
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
 uVar1 = (*local_38[param_1])(param_2,param_3);
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: conditional_func_ptr @ 000121b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int conditional_func_ptr(int param_1,int param_2)

{
 code *pcVar1;
 
 pcVar1 = double_value;
 if (param_1 != 0) {
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 }
 return (*pcVar1)(param_2, 0);
}



/* Function: state_machine @ 000121ef */

unsigned int state_machine(int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 
 if (param_2 != 2) {
 if (2 < (int)param_2) {
 if (param_2 == 3) {
 uVar1 = 3;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 return uVar1;
 }
 return 3;
 }
 if (param_2 == 0) {
 return (unsigned int)(param_1 == 1);
 }
 if (param_2 != 1) {
 return 3;
 }
 if (param_1 != 2) {
 uVar1 = 1;
 if (param_1 == 99) {
 uVar1 = 3;
 }
 return uVar1;
 }
 param_2 = 2;
 }
 return param_2;
}



/* Function: fsm_func_table @ 00012249 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int fsm_func_table(int param_1,unsigned int param_2)

{
 int uVar1;
 int in_GS_OFFSET;
 int (*local_20[4])(int);
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = state_idle;
 local_20[1] = state_processing;
 local_20[2] = state_done;
 local_20[3] = state_error;
 uVar1 = 3;
 if (param_2 < 4) {
 if (param_2 == 2) {
   uVar1 = state_done();
 }
 else {
   uVar1 = (*local_20[param_2])(param_1);
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: computed_goto @ 000122c1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int computed_goto(int param_1,unsigned int param_2)

{
 int uVar1;
 int in_GS_OFFSET;
 code *local_20 [4];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20[0] = obfuscated_cf;
 local_20[1] = opaque_predicate;
 local_20[2] = (code *)overlapped_code;
 local_20[3] = (code *)0;
 if (param_2 < 4) {
 if (local_20[param_2] != (code *)0) {
 if (param_2 == 2) {
 uVar1 = overlapped_code(param_1);
 }
 else {
 uVar1 = (*local_20[param_2])(param_1, 0);
 }
 return uVar1;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0xffffffff;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: obfuscated_cf @ 0001235b */

int obfuscated_cf(int param_1,int param_2)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 00012366 */

int opaque_predicate(int param_1,int param_2)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 00012371 */

int overlapped_code(unsigned int param_1)

{
 if ((param_1 & 1) != 0) {
 return param_1 * 3 + 1;
 }
 return (int)param_1 / 2;
}



/* Function: test_control_flow_l3 @ 0001238d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l3(void)

{
 int uVar1;
 int in_GS_OFFSET;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000132f0);
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
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
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



/* Function: main @ 00012513 */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012533 */

/* WARNING: This is an inlined function */

int __x86_get_pc_thunk_ax(void)

{
 int unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012540 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 79 */
