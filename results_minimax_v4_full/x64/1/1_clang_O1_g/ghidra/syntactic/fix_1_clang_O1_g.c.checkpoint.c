/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/1/1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdint.h>
#include <setjmp.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned char undefined2;
typedef unsigned char undefined3;
typedef unsigned int undefined4;
typedef void (*code)();

/* CRT stub function _init removed by preprocessor */


/* Global data from binary */
int DAT_00103040[5] = {3, 7, 9, 2, 5};
int DAT_00103060[3] = {0, 1, 2};
int DAT_00103064[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
int DAT_00103654[4] = {50, 100, 150, 200};
char DAT_001035e5[] = "Control Flow Tests Level 1\n";
char DAT_00103609[] = "Control Flow Tests Level 2\n";
char DAT_0010362d[] = "Control Flow Tests Level 3\n";

/* Forward declarations for functions used in jump tables */
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
int recursion_factorial(int n);

/* Function pointers for jump table */
int (*PTR_double_value_00105d40[3])(int) = {double_value, triple_value, double_value};
int (*PTR_op_add_00105d60[10])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
int (*PTR_state_idle_00105db0[4])() = {state_idle, state_processing, state_done, state_error};

/* Jump buffer for setjmp/longjmp */
jmp_buf jump_buffer;


/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00101170 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 00101180 */

int single_if(int x)

{
 return x << (0 < x);
}



/* Function: if_else @ 00101190 */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 001011a0 */

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



/* Function: nested_if_deep @ 001011b0 */

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



/* Function: if_elseif_chain @ 001011f0 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 3) {
 iVar1 = x * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00101210 */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 5) {
 iVar1 = x * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 00101230 */

int switch_small(int op)

{
 int iVar1;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 iVar1 = -1;
 if ((uint)op < 4) {
 iVar1 = *(int *)(&DAT_00103654 + (long)op * 4);
 }
 return iVar1;
}



/* Function: switch_large @ 00101250 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 10) {
 iVar1 = op * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 00101270 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 0;
 if (op - 1U < 3) {
 iVar1 = (op - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00101290 */

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



/* Function: loop_for_fixed @ 001012c0 */

int loop_for_fixed(int n)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 return (int)((ulong)(n - 2) * (ulong)(n - 1) >> 1) + n + -1;
 }
 return 0;
}



/* Function: loop_while @ 001012e0 */

int loop_while(int x)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int count@[???] */
 iVar3 = 0;
 if (x != 0) {
 do {
 iVar3 = iVar3 + 1;
 uVar1 = x + 9;
 x = x / 10;
 } while (0x12 < uVar1);
 }
 iVar2 = 1;
 if (iVar3 != 0) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: loop_dowhile @ 00101320 */

int loop_dowhile(int x)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int count@[DW_OP_reg0(RAX)] */
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = x + 9;
 x = x / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 00101360 */

int loop_nested(int m,int n)

{
 int iVar1;
 
 /* Unresolved local var: int total@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 n = 0;
 }
 iVar1 = 0;
 if (0 < m) {
 iVar1 = n * m;
 }
 return iVar1;
}



/* Function: loop_break @ 00101370 */

int loop_break(int target)

{
 long lVar1;
 int *piVar2;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 piVar2 = &DAT_00103040;
 lVar1 = 0;
 do {
 if (*piVar2 == target) goto LAB_00101397;
 lVar1 = lVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 5);
 lVar1 = 0xffffffff;
LAB_00101397:
 return (int)lVar1;
}



/* Function: loop_continue @ 001013a0 */

int loop_continue(int n)

{
 int iVar1;
 uint uVar2;
 bool bVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
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



/* Function: goto_forward @ 001013d0 */

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



/* Function: goto_backward @ 001013e0 */

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



/* Function: ternary_op @ 00101410 */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(&DAT_001035e5);
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



/* Function: loop_multi_exit @ 00101620 */

int loop_multi_exit(int target)

{
 int in_EAX;
 undefined4 *puVar1;
 ulong uVar2;
 int iVar3;
 ulong uVar4;
 long lVar5;
 bool bVar6;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 puVar1 = &DAT_00103064;
 lVar5 = 0;
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 do {
 if ((&DAT_00103060)[lVar5 * 4] == target) {
 bVar6 = true;
 uVar2 = 0;
 }
 else {
 uVar2 = 0;
 do {
 uVar4 = uVar2;
 if (uVar4 == 3) goto LAB_001016be;
 uVar2 = uVar4 + 1;
 } while (puVar1[uVar4] != target);
 bVar6 = uVar4 < 3;
 }
 in_EAX = (int)uVar2 + (int)lVar5 * 10;
 iVar3 = 1;
 if (bVar6) goto LAB_001016d5;
LAB_001016be:
 lVar5 = lVar5 + 1;
 puVar1 = puVar1 + 4;
 } while (lVar5 != 3);
 iVar3 = 2;
LAB_001016d5:
 if (iVar3 == 2) {
 in_EAX = -1;
 }
 return in_EAX;
}



/* Function: infinite_loop @ 001016f0 */

int infinite_loop(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[DW_OP_reg0(RAX)] */
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



/* Function: multi_return @ 00101720 */

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



/* Function: conditional_return @ 00101750 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = -x;
 if (0 < x) {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101760 */

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
 iVar2 = iVar1;
switchD_0010179d_caseD_7:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
switchD_0010179d_caseD_6:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
switchD_0010179d_caseD_5:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
switchD_0010179d_caseD_4:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
switchD_0010179d_caseD_3:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
switchD_0010179d_caseD_2:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
switchD_0010179d_caseD_1:
 iVar1 = *src;
 src = src + 1;
 *dst = iVar1;
 dst = dst + 1;
 iVar1 = iVar2 + -1;
 } while (1 < iVar2);
 break;
 case 1:
 goto switchD_0010179d_caseD_1;
 case 2:
 goto switchD_0010179d_caseD_2;
 case 3:
 goto switchD_0010179d_caseD_3;
 case 4:
 goto switchD_0010179d_caseD_4;
 case 5:
 goto switchD_0010179d_caseD_5;
 case 6:
 goto switchD_0010179d_caseD_6;
 case 7:
 goto switchD_0010179d_caseD_7;
 }
 }
 return iVar3;
}



/* Function: loop_complex_cond @ 00101810 */

int loop_complex_cond(int x)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 bool bVar5;
 
 /* Unresolved local var: int b@[DW_OP_reg5(RDI)]
 Unresolved local var: int a@[???]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 iVar1 = 0;
 uVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = x;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 x = iVar4 + -1;
 uVar2 = uVar3 + 1;
 if ((iVar4 < 2) || (x <= iVar1)) break;
 bVar5 = uVar3 < 9;
 iVar4 = x;
 uVar3 = uVar2;
 } while (bVar5);
 }
 return iVar1 + x + uVar2;
}



/* Function: loop_modify_var @ 00101850 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
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



/* Function: loop_external_state @ 00101880 */

int loop_external_state(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[DW_OP_reg0(RAX)] */
 iVar1 = 0;
 do {
 if (*flag != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: recursion_factorial @ 001018b0 */

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



/* Function: tail_recursion @ 001018d0 */

int tail_recursion(int n,int acc)

{
 if (1 < n) {
 acc = tail_recursion(n + -1,acc * n);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 001018f0 */

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



/* Function: call_func_ptr @ 00101940 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00101950 */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[3] funcs@[???] */
 iVar1 = -1;
 if ((uint)idx < 3) {
 iVar1 = PTR_double_value_00105d40[idx](x);
 }
 return iVar1;
}



/* Function: double_value @ 00101970 */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 00101980 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 00101990 */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 001019a0 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 ulong uVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = (*cb)(arr[uVar2]);
 iVar3 = iVar3 + iVar1;
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 001019f0 */

/* WARNING: Variable defined which should be unmapped: count */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 ulong uVar1;
 undefined4 *puVar2;
 uint uVar3;
 long lVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 ulong in_RSI;
 int iVar8;
 ulong uVar9;
 int count;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int[5] arr@[???] */
 puts(&DAT_00103609);
 puVar2 = &DAT_00103064;
 iVar5 = 0;
 lVar4 = 0;
 do {
 uVar1 = 0;
 do {
 uVar9 = uVar1;
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 if (uVar9 == 3) goto LAB_00101a5c;
 uVar1 = uVar9 + 1;
 } while (puVar2[uVar9] != 7);
 iVar8 = 1;
 in_RSI = (ulong)(uint)((int)(uVar9 + 1) - iVar5);
 if (uVar9 < 3) goto LAB_00101a73;
LAB_00101a5c:
 lVar4 = lVar4 + 1;
 iVar5 = iVar5 + -10;
 puVar2 = puVar2 + 4;
 } while (lVar4 != 3);
 iVar8 = 2;
LAB_00101a73:
 in_RSI = in_RSI & 0xffffffff;
 if (iVar8 == 2) {
 in_RSI = 0xffffffff;
 }
 iVar5 = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n",in_RSI);
 do {
 /* Unresolved local var: int count@[DW_OP_reg3(RBX)] */
 iVar5 = iVar5 + 1;
 } while (iVar5 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar7 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar6 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar5 = 0xb;
 do {
 uVar3 = uVar6 - 8;
 uVar6 = uVar6 + 2;
 if (iVar5 - 2U <= uVar3) break;
 uVar7 = uVar7 + 1;
 iVar5 = iVar5 + -1;
 } while (uVar7 < 9);
 iVar5 = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar6);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 do {
 iVar5 = iVar5 + 1;
 } while (iVar5 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 uVar6 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar6);
 uVar6 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar6);
 uVar6 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar6);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 uVar6 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar6);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 00101c80 */

int non_local_jump(int x)

{
 int iVar1;
 int iVar2;
 
 iVar1 = _setjmp(jump_buffer);
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



/* Function: cpp_exception @ 00101cd0 */

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



/* Function: large_jump_table @ 00101cf0 */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
 iVar1 = -1;
 if ((uint)op < 10) {
 iVar1 = PTR_op_add_00105d60[op](a,b);
 }
 return iVar1;
}



/* Function: op_add @ 00101d20 */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00101d30 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00101d40 */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 00101d50 */

int op_div(int a,int b)

{
 if (b != 0) {
 return a / b;
 }
 return 0;
}



/* Function: op_mod @ 00101d60 */

int op_mod(int a,int b)

{
 if (b != 0) {
 return a % b;
 }
 return 0;
}



/* Function: op_and @ 00101d70 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00101d80 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00101d90 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00101da0 */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00101db0 */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00101dc0 */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 _func_int_int pcVar2;
 _func_int_int pcVar3;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 pcVar3 = double_value;
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



/* Function: state_machine @ 00101df0 */

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



/* Function: fsm_func_table @ 00101e40 */

int fsm_func_table(int event,int state)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[4] state_handlers@[???] */
 iVar1 = 3;
 if ((uint)state < 4) {
 iVar1 = PTR_state_idle_00105db0[state]();
 }
 return iVar1;
}



/* Function: state_idle @ 00101e60 */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 00101e70 */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_done @ 00101e90 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00101ea0 */

int state_error(int event)

{
 return (uint)(event != 0) * 3;
}



/* Function: computed_goto @ 00101eb0 */

int computed_goto(int *labels,int idx)

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



/* Function: obfuscated_cf @ 00101ee0 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg5(RDI)] */
 return x * 2;
}



/* Function: opaque_predicate @ 00101ef0 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x * 2;
}



/* Function: overlapped_code @ 00101f00 */

int overlapped_code(int x)

{
 if ((x & 1U) == 0) {
 return x / 2;
 }
 return x * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00101f20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 uint uVar1;
 char *labels;
 
 /* Unresolved local var: int[4] labels@[???] */
 puts(&DAT_0010362d);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 uVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 labels = "CF-L3-06 (fsm_func_table): %d\n";
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto((int *)labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00102030 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 72 */
