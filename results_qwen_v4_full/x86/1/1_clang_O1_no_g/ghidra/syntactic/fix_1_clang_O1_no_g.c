/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>

/* Type definitions */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef undefined4 (*code)(undefined4);
typedef unsigned char byte;
typedef long long longlong;
typedef unsigned long long ulonglong;

/* External function declarations (forward declarations for use in global initializers) */
extern int recursion_factorial(int param_1);
extern int double_value(int param_1);
extern int triple_value(int param_1);
extern int op_add(int param_1,int param_2);
extern int op_sub(int param_1,int param_2);
extern int op_mul(int param_1,int param_2);
extern int op_div(int param_1,int param_2);
extern int op_mod(int param_1,int param_2);
extern uint op_and(uint param_1,uint param_2);
extern uint op_or(uint param_1,uint param_2);
extern uint op_xor(uint param_1,uint param_2);
extern int op_shl(int param_1,byte param_2);
extern int op_shr(int param_1,byte param_2);
extern bool state_idle(int param_1);
extern char state_processing(int param_1);
extern undefined4 state_done(int param_1);
extern char state_error(int param_1);
extern int non_local_jump(int param_1);
extern int cpp_exception(int param_1);
extern undefined4 large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3);
extern void conditional_func_ptr(int param_1,undefined4 param_2);
extern undefined4 fsm_func_table(uint param_1, undefined4 param_2);
extern int obfuscated_cf(int param_1);
extern int opaque_predicate(int param_1);
extern int overlapped_code(uint param_1);
extern void tail_recursion(int param_1,int param_2);
extern uint indirect_recursion_a(uint param_1,int param_2);
extern void call_func_ptr(code param_1,undefined4 param_2);
extern undefined4 call_func_ptr_array(uint param_1,undefined4 param_2);
extern int call_virtual_func(undefined4 param_1,int param_2);
extern int process_with_callback(int param_1,int param_2,code *param_3);
extern int loop_complex_cond(int param_1);
extern int loop_modify_var(int param_1);
extern int loop_external_state(int *param_1);
extern int infinite_loop(int *param_1);
extern int multi_return(uint param_1);
extern int conditional_return(int param_1);
extern int duffs_device(undefined4 *param_1,undefined4 *param_2,int param_3);
extern int loop_multi_exit(int param_1);

/* External data declarations */
jmp_buf jump_buffer;
char DAT_000135d1[] = "=== Control Flow Tests Level 1 ===";
char DAT_000135f5[] = "=== Control Flow Tests Level 2 ===";
char DAT_00013619[] = "=== Control Flow Tests Level 3 ===";
undefined4 DAT_00013050[] = {7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0};
undefined4 DAT_0001304c[] = {7, 7, 7, 0};
int (*PTR_double_value_00015ec8[3])(int) = {double_value, triple_value, double_value};
int (*PTR_op_add_00015ed4[10])(int, int) = {(int (*)(int, int))op_add, (int (*)(int, int))op_sub, (int (*)(int, int))op_mul, (int (*)(int, int))op_div, (int (*)(int, int))op_mod, (int (*)(int, int))op_and, (int (*)(int, int))op_or, (int (*)(int, int))op_xor, (int (*)(int, int))op_shl, (int (*)(int, int))op_shr};
bool (*PTR_state_idle_00015efc[4])(int) = {(bool (*)(int))state_idle, (bool (*)(int))state_processing, (bool (*)(int))state_done, (bool (*)(int))state_error};
undefined *_GLOBAL_OFFSET_TABLE_ = (undefined *)0;

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110cc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110d0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011209 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001120d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: sequential_ops @ 00011220 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 00011230 */

int single_if(int param_1)

{
 return param_1 << (0 < param_1);
}



/* Function: if_else @ 00011240 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00011250 */

int nested_if_2(int param_1,int param_2)

{
 if (param_2 < 0) {
 param_2 = 0;
 }
 param_2 = param_2 + param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}



/* Function: nested_if_deep @ 00011270 */

byte nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
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
 return 0 < param_5 | 4;
 }
 return 3;
}



/* Function: if_elseif_chain @ 000112b0 */

int if_elseif_chain(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 000112d0 */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}



/* Function: FUN_000112f5 @ 000112f5 */

undefined4 FUN_000112f5(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_2 < 4) {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: switch_large @ 00011320 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 00011340 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00011360 */

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



/* Function: loop_for_fixed @ 00011390 */

int loop_for_fixed(int param_1)

{
 longlong lVar1;
 
 if (0 < param_1) {
 lVar1 = (ulonglong)(param_1 - 1) * (ulonglong)(param_1 - 2);
 return ((int)((ulonglong)lVar1 >> 0x20) << 0x1f | (uint)lVar1 >> 1) + param_1 + -1;
 }
 return 0;
}



/* Function: loop_while @ 000113b0 */

int loop_while(int param_1)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = 0;
 if (param_1 != 0) {
 do {
 iVar3 = iVar3 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 }
 iVar1 = 1;
 if (iVar3 != 0) {
 iVar1 = iVar3;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00011400 */

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



/* Function: loop_nested @ 00011430 */

int loop_nested(int param_1,int param_2)

{
 if (param_2 < 1) {
 param_2 = 0;
 }
 param_2 = param_2 * param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}



/* Function: FUN_00011455 @ 00011455 */

int FUN_00011455(undefined4 param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = 0;
 piVar2 = (int *)0;
 do {
 if (*piVar2 == param_2) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00011490 */

int loop_continue(uint param_1)

{
 int iVar1;
 uint uVar2;
 bool bVar3;
 
 if (0 < (int)param_1) {
 iVar1 = 0;
 uVar2 = 1;
 do {
 iVar1 = iVar1 + (-(uVar2 & 1) & uVar2);
 bVar3 = uVar2 != param_1;
 uVar2 = uVar2 + 1;
 } while (bVar3);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 000114d0 */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}



/* Function: goto_backward @ 000114f0 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 bool bVar3;
 
 if (0 < param_1) {
 iVar1 = 1;
 iVar2 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 bVar3 = iVar2 != param_1;
 iVar2 = iVar2 + 1;
 } while (bVar3);
 return iVar1;
 }
 return 1;
}



/* Function: ternary_op @ 00011530 */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 00011540 */

void test_control_flow_l1(void)

{
 puts(&DAT_000135d1);
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



/* Function: loop_multi_exit @ 00011790 */

int loop_multi_exit(int param_1)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 undefined4 *puVar5;
 bool bVar6;
 int local_14;
 
 iVar2 = 0;
 puVar5 = &DAT_00013050;
 local_14 = param_1;
 do {
 bVar6 = true;
 iVar4 = 0;
 if ((&DAT_0001304c)[iVar2 * 4] != param_1) {
 uVar1 = 0xffffffff;
 do {
 uVar3 = uVar1;
 if (uVar3 == 2) goto LAB_00011822;
 uVar1 = uVar3 + 1;
 } while (puVar5[uVar3 + 1] != param_1);
 bVar6 = uVar3 + 1 < 3;
 iVar4 = uVar3 + 2;
 }
 local_14 = iVar2 * 10 + iVar4;
 iVar4 = 1;
 if (bVar6) goto LAB_00011832;
LAB_00011822:
 iVar2 = iVar2 + 1;
 puVar5 = puVar5 + 4;
 } while (iVar2 != 3);
 iVar4 = 2;
LAB_00011832:
 if (iVar4 == 2) {
 local_14 = -1;
 }
 return local_14;
}



/* Function: infinite_loop @ 00011850 */

int infinite_loop(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 0x3e9;
}



/* Function: multi_return @ 00011880 */

int multi_return(uint param_1)

{
 int iVar1;
 
 if (-1 < (int)param_1) {
 iVar1 = -2;
 if ((int)param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 * 2;
 }
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 000118b0 */

int conditional_return(int param_1)

{
 int iVar1;
 
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 000118d0 */

int duffs_device(undefined4 *param_1,undefined4 *param_2,int param_3)

{
 undefined4 uVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = -1;
 if (0 < param_3) {
 iVar2 = param_3 + 0xe;
 if (-1 < param_3 + 7) {
 iVar2 = param_3 + 7;
 }
 iVar2 = iVar2 >> 3;
 iVar3 = iVar2;
 iVar4 = param_3;
 if ((param_3 % 8) == 0) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar3 = iVar2;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar3 + -1;
 } while (1 < iVar3);
 } else if ((param_3 % 8) == 1) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar2 + -1;
 } while (1 < iVar2);
 } else if ((param_3 % 8) == 2) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar2 + -1;
 } while (1 < iVar2);
 } else if ((param_3 % 8) == 3) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar2 + -1;
 } while (1 < iVar2);
 } else if ((param_3 % 8) == 4) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar2 + -1;
 } while (1 < iVar2);
 } else if ((param_3 % 8) == 5) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar2 + -1;
 } while (1 < iVar2);
 } else if ((param_3 % 8) == 6) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar2 + -1;
 } while (1 < iVar2);
 } else if ((param_3 % 8) == 7) {
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar2 + -1;
 } while (1 < iVar2);
 }
 }
 return iVar4;
}



/* Function: loop_complex_cond @ 00011990 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 
 if (param_1 < 1) {
 iVar1 = 0;
 uVar3 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = param_1;
 uVar4 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = iVar2 + -1;
 uVar3 = uVar4 + 1;
 if ((iVar2 < 2) || (param_1 <= iVar1)) break;
 bVar5 = uVar4 < 9;
 iVar2 = param_1;
 uVar4 = uVar3;
 } while (bVar5);
 }
 return iVar1 + param_1 + uVar3;
}



/* Function: loop_modify_var @ 000119d0 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar3 = iVar2 + 2;
 if (iVar2 < 6) {
 iVar3 = iVar2;
 }
 iVar2 = iVar3 + 1;
 } while (iVar2 < param_1);
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 00011a00 */

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



/* Function: recursion_factorial @ 00011a30 */

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



/* Function: tail_recursion @ 00011a70 */

void tail_recursion(int param_1,int param_2)

{
 if (1 < param_1) {
 tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return;
}



/* Function: indirect_recursion_a @ 00011ab0 */

uint indirect_recursion_a(uint param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 if (param_2 < 2) {
 return (int)param_1 / 2;
 }
 iVar1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 < 2) {
 return param_1 * 3 + 1;
 }
 iVar1 = param_1 * 3 + 2;
 }
 param_1 = indirect_recursion_a(iVar1,param_2 + -2);
 }
 return param_1;
}



/* Function: call_func_ptr @ 00011b10 */

void call_func_ptr(code param_1,undefined4 param_2)

{
 ((void (*)(undefined4))param_1)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 00011b30 */

undefined4 call_func_ptr_array(uint param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 3) {
 uVar1 = (*(code *)(&PTR_double_value_00015ec8)[param_1])(param_2);
 }
 return uVar1;
}



/* Function: double_value @ 00011b70 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: triple_value @ 00011b80 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_virtual_func @ 00011b90 */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 * 2;
}



/* Function: process_with_callback @ 00011ba0 */

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
 iVar1 = (*param_3)(*(undefined4 *)(param_1 + iVar2 * 4));
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00011bf0 */

void test_control_flow_l2(void)

{
 uint uVar1;
 undefined4 uVar2;
 int iVar3;
 uint uVar4;
 undefined4 *puVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 
 iVar6 = 0;
 puts(&DAT_000135f5);
 iVar3 = 0;
 puVar5 = &DAT_00013050;
 iVar7 = 0;
 do {
 uVar4 = 0;
 do {
 uVar1 = uVar4;
 if (uVar1 == 3) goto LAB_00011c6c;
 uVar4 = uVar1 + 1;
 } while (puVar5[uVar1] != 7);
 iVar6 = (uVar1 + 1) - iVar3;
 iVar8 = 1;
 if (uVar1 < 3) goto LAB_00011c7f;
LAB_00011c6c:
 iVar7 = iVar7 + 1;
 iVar3 = iVar3 + -10;
 puVar5 = puVar5 + 4;
 } while (iVar7 != 3);
 iVar8 = 2;
LAB_00011c7f:
 if (iVar8 == 2) {
 iVar6 = -1;
 }
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar6);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 uVar4 = 0xffffffff;
 iVar7 = 0xb;
 iVar3 = 10;
 do {
 uVar1 = iVar3 - 8;
 iVar3 = iVar3 + 2;
 if (iVar7 - 2U <= uVar1) break;
 uVar4 = uVar4 + 1;
 iVar7 = iVar7 + -1;
 } while (uVar4 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar2);
 tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",0);
 uVar2 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar2);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 uVar2 = call_func_ptr_array(0, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar2);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 00011ec0 */

int non_local_jump(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar2 = param_1 * 2;
 }
 return iVar2;
}



/* Function: cpp_exception @ 00011f30 */

int cpp_exception(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = -2;
 if (param_1 < 0x65) {
 iVar2 = param_1 * 2;
 }
 iVar1 = -1;
 if (-1 < param_1) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00011f50 */

undefined4 large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = (*(code *)(&PTR_op_add_00015ed4)[param_1])(param_2,param_3);
 }
 return uVar1;
}



/* Function: op_add @ 00011f90 */

int op_add(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: op_sub @ 00011fa0 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00011fb0 */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00011fc0 */

int op_div(int param_1,int param_2)

{
 if (param_2 != 0) {
 return param_1 / param_2;
 }
 return 0;
}



/* Function: op_mod @ 00011fe0 */

int op_mod(int param_1,int param_2)

{
 if (param_2 != 0) {
 return param_1 % param_2;
 }
 return 0;
}



/* Function: op_and @ 00012000 */

uint op_and(uint param_1,uint param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 00012010 */

uint op_or(uint param_1,uint param_2)

{
 return param_2 | param_1;
}



/* Function: op_xor @ 00012020 */

uint op_xor(uint param_1,uint param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 00012030 */

int op_shl(int param_1,byte param_2)

{
 return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00012040 */

int op_shr(int param_1,byte param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 00012050 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
 code pcVar1;
 code pcVar2;
 
 pcVar2 = (code)recursion_factorial;
 if (param_1 == 1) {
 pcVar2 = (code)triple_value;
 }
 pcVar1 = (code)double_value;
 if (param_1 != 0) {
 pcVar1 = pcVar2;
 }
 ((void (*)(undefined4))pcVar1)(param_2);
 return;
}



/* Function: FUN_00012095 @ 00012095 */

undefined4 FUN_00012095(undefined4 param_1,undefined4 param_2,uint param_3)

{
 undefined4 uVar1;
 
 if (param_3 < 4) {
 uVar1 = 0;
 return uVar1;
 }
 return 3;
}



/* Function: fsm_func_table @ 000120e0 */

undefined4 fsm_func_table(uint param_1, undefined4 param_2)

{
 undefined4 uVar1;
 
 uVar1 = 3;
 if (param_1 < 4) {
 uVar1 = ((code)PTR_state_idle_00015efc[param_1])(0);
 }
 return uVar1;
}



/* Function: state_idle @ 00012120 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00012130 */

char state_processing(int param_1)

{
 char cVar1;
 
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}



/* Function: state_done @ 00012150 */

undefined4 state_done(int param_1)

{
 return 2;
}



/* Function: state_error @ 00012160 */

char state_error(int param_1)

{
 return (param_1 != 0) * '\x03';
}



/* Function: FUN_00012175 @ 00012175 */

undefined4 FUN_00012175(undefined4 param_1,undefined4 param_2,uint param_3)

{
 undefined4 uVar1;
 
 if (3 < param_3) {
 return 0xffffffff;
 }
 uVar1 = 0;
 return uVar1;
}



/* Function: obfuscated_cf @ 000121b0 */

int obfuscated_cf(int param_1)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 000121c0 */

int opaque_predicate(int param_1)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 000121d0 */

int overlapped_code(uint param_1)

{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}



/* Function: test_control_flow_l3 @ 000121f0 */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00013619);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 conditional_func_ptr(0, 5);
 printf("CF-L3-05 (state_machine): %d\n",1);
 uVar1 = fsm_func_table(1, 0);
 printf("CF-L3-06 (fsm_func_table): %d\n",uVar1);
 uVar1 = 0;
 printf("CF-L3-07 (computed_goto): %d\n",0);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00012330 */

undefined4 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
