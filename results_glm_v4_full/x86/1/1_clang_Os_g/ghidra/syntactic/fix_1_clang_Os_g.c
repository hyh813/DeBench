/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <setjmp.h>

/* Ghidra-specific type definitions */
typedef unsigned char byte;
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef void (*code)(void);
typedef int undefined;
typedef uint32_t undefined4;

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);

/* External/global variable declarations */
extern int DAT_00012660[4];
extern int DAT_00012038[5];
extern int DAT_0001204c[12];
extern char DAT_000125d1[];
extern char DAT_000125f5[];
extern int DAT_00012640[8];
extern char DAT_00012619[];
extern _func_int_int PTR_double_value_00014ec8[3];
extern _func_int_int_int PTR_op_add_00014ed4[10];
extern _func_int_int PTR_state_idle_00014efc[4];

/* Forward declarations for functions used in array initializers */
int double_value(int x);
int triple_value(int x);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_and(int a, int b);
int op_or(int a, int b);
int op_xor(int a, int b);
int op_shl(int a, int b);
int op_shr(int a, int b);
int state_idle(int event);
int state_processing(int event);
int state_done(int event);
int state_error(int event);

/* Global variable definitions */
char DAT_000125d1[] = "=== Control Flow Tests Level 1 ===";
char DAT_000125f5[] = "=== Control Flow Tests Level 2 ===";
int DAT_00012660[4] = {50, 100, 150, 200};
int DAT_00012038[5] = {10, 20, 30, 40, 50};
int DAT_0001204c[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int DAT_00012640[8] = {1, 2, 3, 4, 5, 6, 7, 8};
char DAT_00012619[] = "CF-L3-06 (fsm_func_table)";
_func_int_int PTR_double_value_00014ec8[3] = {double_value, triple_value, double_value};
_func_int_int_int PTR_op_add_00014ed4[10] = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
_func_int_int PTR_state_idle_00014efc[4] = {state_idle, state_processing, state_done, state_error};
jmp_buf jump_buffer;

/* CRT stub function _init removed by preprocessor */




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



/* Function: sequential_ops @ 00011214 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (b + a) * 2 - c;
}



/* Function: single_if @ 00011223 */

int single_if(int x)

{
 return x << (0 < x);
}



/* Function: if_else @ 0001122f */

int if_else(int x)

{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 0001123a */

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



/* Function: nested_if_deep @ 00011251 */

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



/* Function: if_elseif_chain @ 0001128e */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = x * 10 + 10;
 if (2 < (uint)x) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 000112a3 */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 5) {
 iVar1 = x * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 000112b7 */

int switch_small(int op)

{
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 if ((uint)op < 4) {
 return *(int *)(&DAT_00012660 + op * 4);
 }
 return -1;
}



/* Function: switch_large @ 000112d8 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = op * 10;
 if (9 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 000112ec */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 0;
 if (op - 1U < 3) {
 iVar1 = (op - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00011300 */

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



/* Function: loop_for_fixed @ 00011324 */

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



/* Function: loop_while @ 00011340 */

int loop_while(int x)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int count@[???] */
 if (x == 0) {
 iVar1 = 1;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = x + 9;
 x = x / 10;
 } while (0x12 < uVar2);
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00011374 */

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



/* Function: loop_nested @ 0001139f */

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



/* Function: loop_break @ 000113b7 */

int loop_break(int target)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 iVar1 = 0;
 piVar2 = &DAT_00012038;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 if (*piVar2 == target) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 000113e4 */

int loop_continue(int n)

{
 int iVar1;
 uint uVar2;
 bool bVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = 1;
 do {
 iVar1 = iVar1 + (-(uVar2 & 1) & uVar2);
 bVar3 = uVar2 != n;
 uVar2 = uVar2 + 1;
 } while (bVar3);
 }
 return iVar1;
}



/* Function: goto_forward @ 0001140f */

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



/* Function: goto_backward @ 00011421 */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 bool bVar3;
 
 /* Unresolved local var: int i@[???]
 Unresolved local var: int result@[???] */
 if (x < 1) {
 iVar1 = 1;
 }
 else {
 iVar1 = 1;
 iVar2 = iVar1;
 do {
 iVar1 = iVar1 * iVar2;
 bVar3 = iVar2 != x;
 iVar2 = iVar2 + 1;
 } while (bVar3);
 }
 return iVar1;
}



/* Function: ternary_op @ 00011445 */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00011453 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(&DAT_000125d1);
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



/* Function: loop_multi_exit @ 00011695 */

int loop_multi_exit(int target)

{
 int iVar1;
 undefined4 *puVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 iVar1 = 0;
 puVar2 = &DAT_0001204c;
 iVar4 = 0;
 do {
 iVar3 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg7(EDI)]
 Unresolved local var: int j@[DW_OP_reg3(EBX)] */
 if (puVar2[iVar3] == target) {
 return iVar3 - iVar1;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 != 4);
 iVar4 = iVar4 + 1;
 iVar1 = iVar1 + -10;
 puVar2 = puVar2 + 4;
 } while (iVar4 != 3);
 return -1;
}



/* Function: infinite_loop @ 000116d8 */

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



/* Function: multi_return @ 000116f9 */

int multi_return(int x)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 if (-1 < x) {
 iVar1 = -2;
 if ((uint)x < 0x33) {
 iVar1 = x + 1;
 if ((x & 1U) == 0) {
 iVar1 = x * 2;
 }
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 0001171c */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = -x;
 if (0 < x) {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 0001172d */

int duffs_device(int *dst,int *src,int n)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 
 /* Unresolved local var: int count@[???] */
 iVar3 = -1;
 if (0 < n) {
 uVar1 = n + 7U >> 3;
 uVar2 = uVar1;
 switch(n & 7) {
 case 1:
 goto switchD_00011761_caseD_1;
 case 2:
 goto switchD_00011761_caseD_2;
 case 3:
 goto switchD_00011761_caseD_3;
 case 4:
 goto switchD_00011761_caseD_4;
 case 5:
 goto switchD_00011761_caseD_5;
 case 6:
 goto switchD_00011761_caseD_6;
 case 7:
 goto switchD_00011761_caseD_7;
 }
 do {
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011761_caseD_7:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011761_caseD_6:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011761_caseD_5:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011761_caseD_4:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011761_caseD_3:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011761_caseD_2:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
 uVar2 = uVar1;
switchD_00011761_caseD_1:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
 uVar1 = uVar2 - 1;
 iVar3 = n;
 } while (1 < (int)uVar2);
 }
 return iVar3;
}



/* Function: loop_complex_cond @ 000117c3 */

int loop_complex_cond(int x)

{
 int iVar1;
 uint uVar2;
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
 uVar2 = x;
 uVar4 = 0;
 do {
 iVar1 = iVar1 + 2;
 x = uVar2 - 1;
 uVar3 = uVar4 + 1;
 if ((uVar2 < 2) || (x <= iVar1)) break;
 bVar5 = uVar4 < 9;
 uVar2 = x;
 uVar4 = uVar3;
 } while (bVar5);
 }
 return iVar1 + x + uVar3;
}



/* Function: loop_modify_var @ 000117f7 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
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
 }
 return iVar1;
}



/* Function: loop_external_state @ 0001181c */

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



/* Function: recursion_factorial @ 00011833 */

int recursion_factorial(int n)

{
 bool bVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < n) {
 do {
 iVar2 = iVar2 * n;
 bVar1 = 2 < (uint)n;
 n = n - 1;
 } while (bVar1);
 }
 return iVar2;
}



/* Function: tail_recursion @ 0001184d */

int tail_recursion(int n,int acc)

{
 bool bVar1;
 
 if (1 < n) {
 do {
 acc = acc * n;
 bVar1 = 2 < (uint)n;
 n = n - 1;
 } while (bVar1);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011868 */

int indirect_recursion_a(int n,int depth)

{
 int iVar1;
 
 if (0 < depth) {
 iVar1 = depth + 2;
 do {
 if ((n & 1U) == 0) {
 if (iVar1 == 3) {
 return n / 2;
 }
 n = n / 2 + 1;
 }
 else {
 if (iVar1 == 3) {
 return n * 3 + 1;
 }
 n = n * 3 + 2;
 }
 iVar1 = iVar1 + -2;
 } while (2 < iVar1);
 }
 return n;
}



/* Function: call_func_ptr @ 000118a7 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 000118c7 */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[3] funcs@[???] */
 if ((uint)idx < 3) {
 iVar1 = (*(int (**)(int))(&PTR_double_value_00014ec8[idx]))(x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: double_value @ 000118f8 */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 000118ff */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 00011907 */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 0001190e */

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



/* Function: test_control_flow_l2 @ 00011950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 undefined4 *puVar5;
 int iVar6;
 int *piVar7;
 int iVar8;
 int *piVar9;
 byte bVar10;
 int local_50 [8];
 int local_30 [8];
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[5] arr@[???] */
 bVar10 = 0;
 puts(&DAT_000125f5);
 iVar3 = 0;
 puVar5 = &DAT_0001204c;
 iVar2 = -1;
 iVar6 = 0;
 do {
 iVar8 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg6(ESI)]
 Unresolved local var: int j@[DW_OP_reg7(EDI)] */
 if (puVar5[iVar8] == 7) {
 iVar2 = iVar8 - iVar3;
 goto LAB_000119a2;
 }
 iVar8 = iVar8 + 1;
 } while (iVar8 != 4);
 iVar6 = iVar6 + 1;
 iVar3 = iVar3 + -10;
 puVar5 = puVar5 + 4;
 } while (iVar6 != 3);
LAB_000119a2:
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar2);
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
 piVar7 = &DAT_00012640;
 piVar9 = local_30;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar9 = *piVar7;
 piVar7 = piVar7 + (uint)bVar10 * -2 + 1;
 piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
 }
 iVar2 = duffs_device(local_50,local_30,8);
 printf("CF-L2-05 (duffs_device): %d\n",iVar2);
 uVar4 = 0xffffffff;
 iVar3 = 0xb;
 iVar2 = 10;
 do {
 /* Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 uVar1 = iVar2 - 8;
 iVar2 = iVar2 + 2;
 if (iVar3 - 2U <= uVar1) break;
 uVar4 = uVar4 + 1;
 iVar3 = iVar3 + -1;
 } while (uVar4 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar2);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar2 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg0(EAX)] */
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
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



/* Function: non_local_jump @ 00011b58 */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < (uint)x) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar1 = x * 2;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 00011bb6 */

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



/* Function: large_jump_table @ 00011bd1 */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
 if (9 < (uint)op) {
 return -1;
 }
 iVar1 = (*(int (**)(int,int))(&PTR_op_add_00014ed4)[op])(a,b);
 return iVar1;
}



/* Function: op_add @ 00011c09 */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 00011c12 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00011c1b */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00011c25 */

int op_div(int a,int b)

{
 if (b != 0) {
 return a / b;
 }
 return 0;
}



/* Function: op_mod @ 00011c38 */

int op_mod(int a,int b)

{
 if (b != 0) {
 return a % b;
 }
 return 0;
}



/* Function: op_and @ 00011c4d */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 00011c56 */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00011c5f */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 00011c68 */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00011c73 */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00011c7e */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 _func_int_int pcVar2;
 _func_int_int pcVar3;
 
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



/* Function: state_machine @ 00011cbd */

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



/* Function: fsm_func_table @ 00011d0b */

int fsm_func_table(int event,int state)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[4] state_handlers@[???] */
 if ((uint)state < 4) {
 iVar1 = (*(int (*)(int))(&PTR_state_idle_00014efc[state]))(event);
 }
 else {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: state_idle @ 00011d3e */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 00011d49 */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_done @ 00011d5f */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00011d65 */

int state_error(int event)

{
 return (uint)(event != 0) * 3;
}



/* Function: computed_goto @ 00011d73 */

int computed_goto(int idx)

{
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



/* Function: obfuscated_cf @ 00011da8 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg4(ESP): +4] */
 return x * 2;
}



/* Function: opaque_predicate @ 00011daf */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x * 2;
}



/* Function: overlapped_code @ 00011db6 */

int overlapped_code(int x)

{
 if ((x & 1U) == 0) {
 return x / 2;
 }
 return x * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00011dce */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 char *labels;
 
 iVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
labels = (char *)DAT_00012619;
	printf("CF-L3-06 (fsm_func_table): %d\n",2);
	iVar1 = computed_goto(2);
	printf("CF-L3-07 (computed_goto): %d\n",iVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00011efc */

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
