/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_clang_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef int (*_func_int_int)(int);
typedef void (*code)(void);

/* Forward declarations for functions used in global initializers */
int double_value(int);
int triple_value(int);
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int op_and(int, int);
int op_or(int, int);
int op_xor(int, int);
int op_shl(int, int);
int op_shr(int, int);
int state_idle(int);
int state_processing(int);
int state_done(int);
int state_error(int);
int computed_goto(int);

/* Global declarations for decompiled code */
static jmp_buf jump_buffer;

/* Define global variables */
static char completed_0 = '\0';
static void *__dso_handle = (void *)0;

/* Stub definitions for C++ runtime functions */
void __cxa_finalize(void *d) { (void)d; }
void deregister_tm_clones(void) { }
void register_tm_clones(void) { }
static undefined4 DAT_001018f0[3][4];
static undefined4 DAT_001018ec[3][4];
static undefined4 DAT_001018d8[5];
static undefined4 DAT_00101ee0[4];
static int (*PTR_double_value_00112d30[3])(int) = {double_value, triple_value, double_value};
static int (*PTR_op_add_00112d48[10])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
static int (*PTR_state_idle_00112d98[4])(int) = {state_idle, state_processing, state_done, state_error};
static char *DAT_00101e71 = "=== Control Flow L1 Tests ===";
static char *DAT_00101e95 = "=== Control Flow L2 Tests ===";
static char *DAT_00101eb9 = "=== Control Flow L3 Tests ===";


/* CRT stub function _init removed by preprocessor */









/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001009fc @ 001009fc */

void FUN_001009fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00100a54 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (b + a) * 2 - c;
}



/* Function: single_if @ 00100a64 */

int single_if(int x)

{
 return x << (0 < x);
}



/* Function: if_else @ 00100a74 */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 00100a80 */

int nested_if_2(int a,int b)

{
 int iVar1;
 
 iVar1 = (b & (b >> 0x1f ^ 0xffffffffU)) + a;
 if (a < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00100a94 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 
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
 iVar1 = 4;
 if (0 < e) {
 iVar1 = 5;
 }
 return iVar1;
 }
 return 3;
}



/* Function: if_elseif_chain @ 00100ae4 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = x * 10 + 10;
 if (2 < (uint)x) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00100afc */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = x * 100 + 100;
 if (4 < (uint)x) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 00100b14 */

int switch_small(int op)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 if ((uint)op < 4) {
 return *(int *)(&DAT_00101ee0 + (long)op * 4);
 }
 return -1;
}



/* Function: switch_large @ 00100b34 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = op * 10;
 if (9 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00100b48 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = (op - 1U) * 100 + 100;
 if (2 < op - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00100b64 */

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



/* Function: loop_for_fixed @ 00100b98 */

int loop_for_fixed(int n)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 return (int)((ulong)(n - 1) * (ulong)(n - 2) >> 1) + n + -1;
 }
 return 0;
}



/* Function: loop_while @ 00100bc0 */

int loop_while(int x)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int count@[???] */
 iVar2 = 0;
 if (x != 0) {
 do {
 iVar2 = iVar2 + 1;
 uVar1 = x + 9;
 x = x / 10;
 } while (0x12 < uVar1);
 }
 if (iVar2 == 0) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: loop_dowhile @ 00100c00 */

int loop_dowhile(int x)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int count@[???] */
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 uVar1 = x + 9;
 x = x / 10;
 } while (0x12 < uVar1);
 return iVar2;
}



/* Function: loop_nested @ 00100c38 */

int loop_nested(int m,int n)

{
 int iVar1;
 
 /* Unresolved local var: int total@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 n = 0;
 }
 iVar1 = n * m;
 if (m < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: loop_break @ 00100c50 */

int loop_break(int target)

{
 long lVar1;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(x0)] */
 if ((&DAT_001018d8)[lVar1] == target) goto LAB_00100c7c;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 5);
 lVar1 = 0xffffffff;
LAB_00100c7c:
 return (int)lVar1;
}



/* Function: loop_continue @ 00100c80 */

int loop_continue(int n)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 iVar1 = (-(uVar2 & 1) & uVar2) + iVar1;
 } while (n != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 00100cbc */

int goto_forward(int x)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = x;
 if (x < 2) {
 iVar1 = 1;
 }
 return x * iVar1 * 2;
}



/* Function: goto_backward @ 00100cd0 */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???]
 Unresolved local var: int result@[???] */
 if (0 < x) {
 iVar2 = 0;
 iVar1 = 1;
 do {
 iVar2 = iVar2 + 1;
 iVar1 = iVar2 * iVar1;
 } while (x != iVar2);
 return iVar1;
 }
 return 1;
}



/* Function: ternary_op @ 00100d00 */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 00100d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(DAT_00101e71);
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



/* Function: loop_multi_exit @ 00100edc */

int loop_multi_exit(int target)

{
 bool bVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 ulong uVar5;
 ulong uVar6;
 int result;
 int in_w12;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 lVar2 = 0;
 puVar3 = &DAT_001018f0[0][0];
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 if ((&DAT_001018ec)[lVar2 * 4] == target) {
 uVar5 = 0;
 bVar1 = true;
 }
 else {
 uVar5 = 0;
 do {
 uVar6 = uVar5;
 if (uVar6 == 3) goto LAB_00100f54;
 uVar5 = uVar6 + 1;
 } while (puVar3[uVar6] != target);
 bVar1 = uVar6 < 3;
 }
 in_w12 = (int)uVar5 + (int)lVar2 * 10;
 iVar4 = 1;
 if (bVar1) goto LAB_00100f68;
LAB_00100f54:
 lVar2 = lVar2 + 1;
 puVar3 = puVar3 + 4;
 } while (lVar2 != 3);
 iVar4 = 2;
LAB_00100f68:
 if (iVar4 == 2) {
 in_w12 = -1;
 }
 return in_w12;
}



/* Function: infinite_loop @ 00100f74 */

int infinite_loop(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
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



/* Function: multi_return @ 00100fa0 */

int multi_return(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int temp@[???] */
 if (-1 < x) {
 iVar2 = x << 1;
 if ((x & 1U) != 0) {
 iVar2 = x + 1;
 }
 iVar1 = -2;
 if (x < 0x33) {
 iVar1 = iVar2;
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 00100fc8 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = x << 1;
 if (x < 1) {
 iVar1 = -x;
 }
 return iVar1;
}



/* Function: duffs_device @ 00100fd8 */

int duffs_device(int *dst,int *src,int n)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: int count@[???] */
 iVar5 = -1;
 if (0 < n) {
 iVar3 = n + 0xe;
 if (-1 < n + 7) {
 iVar3 = n + 7;
 }
 iVar3 = iVar3 >> 3;
 piVar1 = dst;
 piVar2 = src;
 iVar4 = iVar3;
 iVar5 = n;
 switch(n % 8) {
 case 0:
 do {
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
 iVar4 = iVar3;
switchD_00101024_caseD_7:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_00101024_caseD_6:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_00101024_caseD_5:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_00101024_caseD_4:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_00101024_caseD_3:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_00101024_caseD_2:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_00101024_caseD_1:
 src = piVar2 + 1;
 iVar3 = iVar4 + -1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
 } while (iVar3 != 0 && 0 < iVar4);
 break;
 case 1:
 goto switchD_00101024_caseD_1;
 case 2:
 goto switchD_00101024_caseD_2;
 case 3:
 goto switchD_00101024_caseD_3;
 case 4:
 goto switchD_00101024_caseD_4;
 case 5:
 goto switchD_00101024_caseD_5;
 case 6:
 goto switchD_00101024_caseD_6;
 case 7:
 goto switchD_00101024_caseD_7;
 }
 }
 return iVar5;
}



/* Function: loop_complex_cond @ 0010107c */

int loop_complex_cond(int x)

{
 bool bVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 
 /* Unresolved local var: int b@[DW_OP_reg0(x0)]
 Unresolved local var: int a@[???]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 iVar3 = 0;
 uVar4 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = x;
 uVar5 = 0;
 do {
 iVar3 = iVar3 + 2;
 x = iVar2 + -1;
 uVar4 = uVar5 + 1;
 if ((iVar2 < 2) || (x <= iVar3)) break;
 bVar1 = uVar5 < 9;
 iVar2 = x;
 uVar5 = uVar4;
 } while (bVar1);
 }
 return x + iVar3 + uVar4;
}



/* Function: loop_modify_var @ 001010d0 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar1 = iVar3 + 2;
 if (iVar3 < 6) {
 iVar1 = iVar3;
 }
 iVar2 = iVar3 + iVar2;
 iVar3 = iVar1 + 1;
 } while (iVar3 < n);
 return iVar2;
 }
 return 0;
}



/* Function: loop_external_state @ 00101110 */

int loop_external_state(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 do {
 if (*flag != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: recursion_factorial @ 00101130 */

int recursion_factorial(int n)

{
 int iVar1;
 
 if (n < 2) {
 return 1;
 }
 iVar1 = recursion_factorial(n + -1);
 return iVar1 * n;
}



/* Function: tail_recursion @ 00101168 */

int tail_recursion(int n,int acc)

{
 if (1 < n) {
 acc = tail_recursion(n + -1,acc * n);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00101194 */

int indirect_recursion_a(int n,int depth)

{
 int n_00;
 
 if (0 < depth) {
 if ((n & 1U) == 0) {
 if (n < 0) {
 n = n + 1;
 }
 if (depth < 2) {
 return n >> 1;
 }
 n_00 = (n >> 1) + 1;
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



/* Function: call_func_ptr @ 001011ec */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00101208 */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[3] funcs@[???] */
 if (2 < (uint)idx) {
 return -1;
 }
 iVar1 = ((int (*)(int))(&PTR_double_value_00112d30)[idx])(x);
 return iVar1;
}



/* Function: double_value @ 0010123c */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00101244 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 0010124c */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00101254 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 ulong uVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???] */
 uVar2 = (ulong)(uint)n;
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = (*cb)(*arr);
 uVar2 = uVar2 - 1;
 iVar3 = iVar1 + iVar3;
 arr = arr + 1;
 } while (uVar2 != 0);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 001012ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 uint uVar1;
 ulong uVar2;
 uint uVar3;
 int iVar4;
 long lVar5;
 undefined4 *puVar6;
 ulong extraout_x11;
 ulong uVar7;
 int iVar8;
 ulong uVar9;
 uint uVar10;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[5] arr@[???] */
 puts(DAT_00101e95);
 iVar4 = 0;
 lVar5 = 0;
 puVar6 = &DAT_001018f0[0][0];
 uVar7 = extraout_x11;
 do {
 uVar2 = 0;
 do {
 uVar9 = uVar2;
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 if (uVar9 == 3) goto LAB_0010131c;
 uVar2 = uVar9 + 1;
 } while (puVar6[uVar9] != 7);
 uVar3 = (int)(uVar9 + 1) - iVar4;
 uVar7 = (ulong)uVar3;
 iVar8 = 1;
 if (uVar9 < 3) goto LAB_00101334;
LAB_0010131c:
 uVar3 = (uint)uVar7;
 lVar5 = lVar5 + 1;
 iVar4 = iVar4 + -10;
 puVar6 = puVar6 + 4;
 } while (lVar5 != 3);
 iVar8 = 2;
LAB_00101334:
 if (iVar8 == 2) {
 uVar3 = 0xffffffff;
 }
 printf("CF-L2-01 (loop_multi_exit): %d\n",(ulong)uVar3);
 iVar4 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg1(x1)] */
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",1001);
 uVar10 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar3 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar4 = 0xb;
 uVar10 = 0xffffffff;
 do {
 /* Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 uVar1 = uVar3 - 8;
 uVar3 = uVar3 + 2;
 if (iVar4 - 2U <= uVar1) break;
 uVar10 = uVar10 + 1;
 iVar4 = iVar4 + -1;
 } while (uVar10 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar4 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg1(x1)] */
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",101);
 uVar3 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar3);
 uVar3 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar3);
 uVar3 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 uVar3 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar3);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 001014f8 */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < x) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar1 = x << 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 0010155c */

int cpp_exception(int x)

{
 int iVar1;
 
 iVar1 = -2;
 if (x < 0x65) {
 iVar1 = x << 1;
 }
 if (x < 0) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00101578 */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
 if (9 < (uint)op) {
 return -1;
 }
 iVar1 = ((int (*)(int, int))(&PTR_op_add_00112d48)[op])(a,b);
 return iVar1;
}



/* Function: op_add @ 001015b0 */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 001015b8 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 001015c0 */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 001015c8 */

int op_div(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 return iVar1;
 }
 return 0;
}



/* Function: op_mod @ 001015dc */

int op_mod(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 return a - iVar1 * b;
 }
 return 0;
}



/* Function: op_and @ 001015f4 */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 001015fc */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00101604 */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 0010160c */

int op_shl(int a,int b)

{
 return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00101614 */

int op_shr(int a,int b)

{
 return a >> (b & 0x1fU);
}



/* Function: conditional_func_ptr @ 0010161c */

int conditional_func_ptr(int mode,int x)

{
 _func_int_int pcVar1;
 _func_int_int pcVar2;
 int iVar3;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 pcVar1 = triple_value;
 if (mode != 1) {
 pcVar1 = recursion_factorial;
 }
 pcVar2 = double_value;
 if (mode != 0) {
 pcVar2 = pcVar1;
 }
 iVar3 = pcVar2(x);
 return iVar3;
}



/* Function: state_machine @ 0010165c */

int state_machine(int event,int state)

{
 int iVar1;
 
 switch(state) {
 case 0:
 return (int)(event == 1);
 case 1:
 iVar1 = 3;
 if (event != 99) {
 iVar1 = 1;
 }
 if (event != 2) {
 event = iVar1;
 }
 return event;
 case 2:
 break;
 case 3:
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
 default:
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 001016c0 */

int fsm_func_table(int event,int state)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[4] state_handlers@[???] */
 if (3 < (uint)state) {
 return 3;
 }
 iVar1 = ((int (*)(int))(&PTR_state_idle_00112d98)[state])(event);
 return iVar1;
}



/* Function: state_idle @ 001016f0 */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 001016fc */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = 3;
 if (event != 99) {
 iVar1 = 1;
 }
 if (event != 2) {
 event = iVar1;
 }
 return event;
}



/* Function: state_done @ 00101714 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 0010171c */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: computed_goto @ 0010172c */

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



/* Function: obfuscated_cf @ 0010176c */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)] */
 return x << 1;
}



/* Function: opaque_predicate @ 00101774 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x << 1;
}



/* Function: overlapped_code @ 0010177c */

int overlapped_code(int x)

{
 int iVar1;
 
 iVar1 = x;
 if (x < 0) {
 iVar1 = x + 1;
 }
 iVar1 = iVar1 >> 1;
 if ((x & 1U) != 0) {
 iVar1 = x * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00101798 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 uint uVar1;
 
 /* Unresolved local var: int[4] labels@[???] */
 puts(DAT_00101eb9);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 uVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(2);
 printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00101894 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
