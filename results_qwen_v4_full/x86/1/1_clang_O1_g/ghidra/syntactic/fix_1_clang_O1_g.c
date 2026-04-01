/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdbool.h>


/* CRT stub function _init removed by preprocessor */

/* Type definitions */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef unsigned char undefined;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef void (*code)(void);
typedef long long longlong;
typedef unsigned long long ulonglong;

/* Function forward declarations */
int double_value(int x);
int triple_value(int x);
int op_add(int a,int b);
int op_sub(int a,int b);
int op_mul(int a,int b);
int op_div(int a,int b);
int op_mod(int a,int b);
int op_and(int a,int b);
int op_or(int a,int b);
int op_xor(int a,int b);
int op_shl(int a,int b);
int op_shr(int a,int b);
int state_idle(int event);
int state_processing(int event);
int state_done(int event);
int state_error(int event);

/* Global variables */
#define __regparm1
static jmp_buf jump_buffer;

/* External data references */
static int DAT_00013640[4] = {50, 60, 70, 80};
static int DAT_00013038[5] = {1, 2, 3, 4, 5};
static int DAT_00013050[12] = {1, 2, 7, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static int DAT_0001304c[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static char DAT_000135d1[] = "Control Flow Tests - Level 1";
static char DAT_000135f5[] = "Control Flow Tests - Level 2";
static char DAT_00013619[] = "Control Flow Tests - Level 3";
static _func_int_int PTR_double_value_00015ec8[3] = {double_value, triple_value, double_value};
static _func_int_int_int PTR_op_add_00015ed4[10] = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
static _func_int_int PTR_state_idle_00015efc[4] = {state_idle, state_processing, state_done, state_error};
static void *_GLOBAL_OFFSET_TABLE_ = NULL;


/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)
{
 (*(code *)(undefined *)0x0)();
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

int sequential_ops(int a,int b,int c)
{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (b + a) * 2 - c;
}



/* Function: single_if @ 00011230 */

int single_if(int x)
{
 return x << (0 < x);
}



/* Function: if_else @ 00011240 */

int if_else(int x)
{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 00011250 */

int nested_if_2(int a,int b)
{
 int iVar1;
 
 if (b < 0) {
 b = 0;
 }
 iVar1 = b + a;
 if (a < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00011270 */

int nested_if_deep(int a,int b,int c,int d,int e)
{
 if (a < 1) {
 return 0;
 }
 if (b < 1) {
 return 1;
 }
 if (c < 1) {
 return 2;
 }
 if (0 < d) {
 return 0 < e | 4;
 }
 return 3;
}



/* Function: if_elseif_chain @ 000112b0 */

int if_elseif_chain(int x)
{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 3) {
 iVar1 = x * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 000112d0 */

int if_elseif_long(int x)
{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 5) {
 iVar1 = x * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 000112f0 */

int switch_small(int op)
{
 int iVar1;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 iVar1 = -1;
 if ((uint)op < 4) {
 iVar1 = *(int *)(&DAT_00013640 + op * 4);
 }
 return iVar1;
}



/* Function: switch_large @ 00011320 */

int switch_large(int op)
{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 10) {
 iVar1 = op * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 00011340 */

int switch_default(int op)
{
 int iVar1;
 
 iVar1 = 0;
 if (op - 1U < 3) {
 iVar1 = (op - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00011360 */

int switch_fallthrough(int op)
{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = 0;
 if (op != 1) {
 if (op != 2) {
 if (op != 3) {
 return -1;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + op * 2;
 }
 return iVar1 + op;
}



/* Function: loop_for_fixed @ 00011390 */

int loop_for_fixed(int n)
{
 longlong lVar1;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar1 = (ulonglong)(n - 1) * (ulonglong)(n - 2);
 return ((int)((ulonglong)lVar1 >> 0x20) << 0x1f | (uint)lVar1 >> 1) + n + -1;
 }
 return 0;
}



/* Function: loop_while @ 000113b0 */

int loop_while(int x)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 /* Unresolved local var: int count@[???] */
 iVar3 = 0;
 if (x != 0) {
 do {
 iVar3 = iVar3 + 1;
 uVar2 = x + 9;
 x = x / 10;
 } while (0x12 < uVar2);
 }
 iVar1 = 1;
 if (iVar3 != 0) {
 iVar1 = iVar3;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00011400 */

int loop_dowhile(int x)
{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = x + 9;
 x = x / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 00011430 */

int loop_nested(int m,int n)
{
 int iVar1;
 
 /* Unresolved local var: int total@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 n = 0;
 }
 iVar1 = n * m;
 if (m < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: loop_break @ 00011450 */

int loop_break(int target)
{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 iVar1 = 0;
 piVar2 = &DAT_00013038;
 do {
 if (*piVar2 == target) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00011490 */

int loop_continue(int n)
{
 int iVar1;
 uint uVar2;
 bool bVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 uVar2 = 1;
 do {
 iVar1 = iVar1 + (-(uVar2 & 1) & uVar2);
 bVar3 = uVar2 != n;
 uVar2 = uVar2 + 1;
 } while (bVar3);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 000114d0 */

int goto_forward(int x)
{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = 1;
 if (0 < x) {
 iVar1 = x;
 }
 return iVar1 * x * 2;
}



/* Function: goto_backward @ 000114f0 */

int goto_backward(int x)
{
 int iVar1;
 int iVar2;
 bool bVar3;
 
 /* Unresolved local var: int i@[???]
 Unresolved local var: int result@[???] */
 if (0 < x) {
 iVar1 = 1;
 iVar2 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 bVar3 = iVar2 != x;
 iVar2 = iVar2 + 1;
 } while (bVar3);
 return iVar1;
 }
 return 1;
}



/* Function: ternary_op @ 00011530 */

int ternary_op(int a,int b)
{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

int __regparm1 loop_multi_exit(int target)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 undefined4 *puVar5;
 bool bVar6;
 int in_stack_00000004;
 int local_14;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 iVar2 = 0;
 puVar5 = &DAT_00013050;
 local_14 = target;
 do {
 bVar6 = true;
 iVar4 = 0;
 if ((&DAT_0001304c)[iVar2 * 4] != in_stack_00000004) {
 uVar1 = 0xffffffff;
 do {
 uVar3 = uVar1;
 if (uVar3 == 2) goto LAB_00011822;
 uVar1 = uVar3 + 1;
 } while (puVar5[uVar3 + 1] != in_stack_00000004);
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

int infinite_loop(int *flag)
{
 int iVar1;
 
 /* Unresolved local var: int count@[DW_OP_reg0(EAX)] */
 iVar1 = 0;
 do {
 if (*flag == 1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *flag = 1;
 return 0x3e9;
}



/* Function: multi_return @ 00011880 */

int multi_return(int x)
{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 if (-1 < x) {
 iVar1 = -2;
 if (x < 0x33) {
 iVar1 = x + 1;
 if ((x & 1U) == 0) {
 iVar1 = x * 2;
 }
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 000118b0 */

int conditional_return(int x)
{
 int iVar1;
 
 iVar1 = -x;
 if (0 < x) {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 000118d0 */

int duffs_device(int *dst,int *src,int n)
{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int count@[???] */
 iVar3 = -1;
 if (0 < n) {
 iVar1 = n + 0xe;
 if (-1 < n + 7) {
 iVar1 = n + 7;
 }
 iVar1 = iVar1 >> 3;
 iVar2 = iVar1;
 iVar3 = n;
 switch(n % 8) {
 case 0:
 do {
 iVar2 = *src;
 src = src + 1;
 *dst = iVar2;
 dst = dst + 1;
switchD_0001191f_caseD_7:
 iVar2 = *src;
 src = src + 1;
 *dst = iVar2;
 dst = dst + 1;
switchD_0001191f_caseD_6:
 iVar2 = *src;
 src = src + 1;
 *dst = iVar2;
 dst = dst + 1;
switchD_0001191f_caseD_5:
 iVar2 = *src;
 src = src + 1;
 *dst = iVar2;
 dst = dst + 1;
switchD_0001191f_caseD_4:
 iVar2 = *src;
 src = src + 1;
 *dst = iVar2;
 dst = dst + 1;
switchD_0001191f_caseD_3:
 iVar2 = *src;
 src = src + 1;
 *dst = iVar2;
 dst = dst + 1;
switchD_0001191f_caseD_2:
 iVar2 = *src;
 src = src + 1;
 *dst = iVar2;
 dst = dst + 1;
 iVar2 = iVar1;
switchD_0001191f_caseD_1:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
 iVar1 = iVar2 + -1;
 } while (1 < iVar2);
 break;
 case 1:
 goto switchD_0001191f_caseD_1;
 case 2:
 goto switchD_0001191f_caseD_2;
 case 3:
 goto switchD_0001191f_caseD_3;
 case 4:
 goto switchD_0001191f_caseD_4;
 case 5:
 goto switchD_0001191f_caseD_5;
 case 6:
 goto switchD_0001191f_caseD_6;
 case 7:
 goto switchD_0001191f_caseD_7;
 }
 }
 return iVar3;
}



/* Function: loop_complex_cond @ 00011990 */

int loop_complex_cond(int x)
{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int a@[???] */
 if (x < 1) {
 iVar1 = 0;
 uVar3 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = x;
 uVar4 = 0;
 do {
 iVar1 = iVar1 + 2;
 x = iVar2 + -1;
 uVar3 = uVar4 + 1;
 if ((iVar2 < 2) || (x <= iVar1)) break;
 bVar5 = uVar4 < 9;
 iVar2 = x;
 uVar4 = uVar3;
 } while (bVar5);
 }
 return iVar1 + x + uVar3;
}



/* Function: loop_modify_var @ 000119d0 */

int loop_modify_var(int n)
{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar3 = iVar2 + 2;
 if (iVar2 < 6) {
 iVar3 = iVar2;
 }
 iVar2 = iVar3 + 1;
 } while (iVar2 < n);
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 00011a00 */

int loop_external_state(int *flag)
{
 int iVar1;
 
 /* Unresolved local var: int count@[DW_OP_reg0(EAX)] */
 iVar1 = 0;
 do {
 if (*flag != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: recursion_factorial @ 00011a30 */

int recursion_factorial(int n)
{
 int iVar1;
 
 iVar1 = 1;
 if (1 < n) {
 iVar1 = recursion_factorial(n + -1);
 iVar1 = iVar1 * n;
 }
 return iVar1;
}



/* Function: tail_recursion @ 00011a70 */

int tail_recursion(int n,int acc)
{
 if (1 < n) {
 acc = tail_recursion(n + -1,acc * n);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011ab0 */

int indirect_recursion_a(int n,int depth)
{
 int n_00;
 
 if (0 < depth) {
 if ((n & 1U) == 0) {
 if (depth < 2) {
 return n / 2;
 }
 n_00 = n / 2 + 1;
 }
 else {
 if (depth < 2) {
 return n * 3 + 1;
 }
 n_00 = n * 3 + 2;
 }
 n = indirect_recursion_a(n_00,depth + -2);
 }
 return n;
}



/* Function: call_func_ptr @ 00011b10 */

int call_func_ptr(_func_int_int *f,int x)
{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00011b30 */

int call_func_ptr_array(int idx,int x)
{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[3] funcs@[???] */
 iVar1 = -1;
 if ((uint)idx < 3) {
 iVar1 = (PTR_double_value_00015ec8[idx])(x);
 }
 return iVar1;
}



/* Function: double_value @ 00011b70 */

int double_value(int x)
{
 return x * 2;
}



/* Function: triple_value @ 00011b80 */

int triple_value(int x)
{
 return x * 3;
}



/* Function: call_virtual_func @ 00011b90 */

int call_virtual_func(void *obj,int x)
{
 return x * 2;
}



/* Function: process_with_callback @ 00011ba0 */

int process_with_callback(int *arr,int n,_func_int_int *cb)
{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar3 = 0;
 }
 else {
 iVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = (*cb)(arr[iVar2]);
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00011bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 undefined4 *puVar4;
 undefined **ppuVar5;
 int iVar6;
 int iVar7;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[5] arr@[???] */
 ppuVar5 = &_GLOBAL_OFFSET_TABLE_;
 puts(&DAT_000135f5);
 iVar2 = 0;
 puVar4 = &DAT_00013050;
 iVar6 = 0;
 do {
 uVar3 = 0;
 do {
 uVar1 = uVar3;
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 if (uVar1 == 3) goto LAB_00011c6c;
 uVar3 = uVar1 + 1;
 } while (puVar4[uVar1] != 7);
 iVar7 = 1;
 if (uVar1 < 3) goto LAB_00011c7f;
LAB_00011c6c:
 iVar6 = iVar6 + 1;
 iVar2 = iVar2 + -10;
 puVar4 = puVar4 + 4;
 } while (iVar6 != 3);
 iVar7 = 2;
LAB_00011c7f:
 if (iVar7 == 2) {
 iVar6 = -1;
 }
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar6);
 iVar2 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg0(EAX)] */
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 uVar3 = 0xffffffff;
 iVar6 = 0xb;
 iVar2 = 10;
 do {
 uVar1 = iVar2 - 8;
 iVar2 = iVar2 + 2;
 if (iVar6 - 2U <= uVar1) break;
 uVar3 = uVar3 + 1;
 iVar6 = iVar6 + -1;
 } while (uVar3 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar2);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 iVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",iVar2);
 iVar2 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",iVar2);
 iVar2 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",iVar2);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 iVar2 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 00011ec0 */

int non_local_jump(int x)
{
 int iVar1;
 int iVar2;
 
 iVar1 = setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < x) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar2 = x * 2;
 }
 return iVar2;
}



/* Function: cpp_exception @ 00011f30 */

int cpp_exception(int x)
{
 int iVar1;
 int iVar2;
 
 iVar2 = -2;
 if (x < 0x65) {
 iVar2 = x * 2;
 }
 iVar1 = -1;
 if (-1 < x) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00011f50 */

int large_jump_table(int op,int a,int b)
{
 int iVar1;
 
 /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
 iVar1 = -1;
 if ((uint)op < 10) {
 iVar1 = (PTR_op_add_00015ed4[op])(a,b);
 }
 return iVar1;
}



/* Function: op_add @ 00011f90 */

int op_add(int a,int b)
{
 return b + a;
}



/* Function: op_sub @ 00011fa0 */

int op_sub(int a,int b)
{
 return a - b;
}



/* Function: op_mul @ 00011fb0 */

int op_mul(int a,int b)
{
 return b * a;
}



/* Function: op_div @ 00011fc0 */

int op_div(int a,int b)
{
 if (b != 0) {
 return a / b;
 }
 return 0;
}



/* Function: op_mod @ 00011fe0 */

int op_mod(int a,int b)
{
 if (b != 0) {
 return a % b;
 }
 return 0;
}



/* Function: op_and @ 00012000 */

int op_and(int a,int b)
{
 return b & a;
}



/* Function: op_or @ 00012010 */

int op_or(int a,int b)
{
 return b | a;
}



/* Function: op_xor @ 00012020 */

int op_xor(int a,int b)
{
 return b ^ a;
}



/* Function: op_shl @ 00012030 */

int op_shl(int a,int b)
{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00012040 */

int op_shr(int a,int b)
{
 return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00012050 */

int conditional_func_ptr(int mode,int x)
{
 int iVar1;
 _func_int_int pcVar2;
 _func_int_int pcVar3;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 pcVar3 = recursion_factorial;
 if (mode == 1) {
 pcVar3 = triple_value;
 }
 pcVar2 = double_value;
 if (mode != 0) {
 pcVar2 = pcVar3;
 }
 iVar1 = (*pcVar2)(x);
 return iVar1;
}



/* Function: state_machine @ 00012090 */

int state_machine(int event,int state)
{
 int iVar1;
 
 switch(state) {
 case 0:
 return (uint)(event == 1);
 case 1:
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
 case 2:
 break;
 case 3:
 return (uint)(event != 0) * 3;
 default:
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 000120e0 */

int fsm_func_table(int event,int state)
{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[4] state_handlers@[???] */
 iVar1 = 3;
 if ((uint)state < 4) {
 iVar1 = (PTR_state_idle_00015efc[state])(event);
 }
 return iVar1;
}



/* Function: state_idle @ 00012120 */

int state_idle(int event)
{
 return (uint)(event == 1);
}



/* Function: state_processing @ 00012130 */

int state_processing(int event)
{
 int iVar1;
 
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_done @ 00012150 */

int state_done(int event)
{
 return 2;
}



/* Function: state_error @ 00012160 */

int state_error(int event)
{
 return (uint)(event != 0) * 3;
}



/* Function: computed_goto @ 00012170 */

int computed_goto(int *labels,int idx)
{
 /* Unresolved local var: void *[4] targets@[???] */
 switch(idx) {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 default:
 return -1;
 }
}



/* Function: obfuscated_cf @ 000121b0 */

int obfuscated_cf(int x)
{
 /* Unresolved local var: int result@[DW_OP_breg4(ESP): +4] */
 return x * 2;
}



/* Function: opaque_predicate @ 000121c0 */

int opaque_predicate(int x)
{
 /* Unresolved local var: int cond@[???] */
 return x * 2;
}



/* Function: overlapped_code @ 000121d0 */

int overlapped_code(int x)
{
 if ((x & 1U) == 0) {
 return x / 2;
 }
 return x * 3 + 1;
}



/* Function: test_control_flow_l3 @ 000121f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)
{
 int iVar1;
 int labels[4] = {0};
 
 puts(&DAT_00013619);
 iVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 iVar1 = computed_goto((int *)labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",iVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00012330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
