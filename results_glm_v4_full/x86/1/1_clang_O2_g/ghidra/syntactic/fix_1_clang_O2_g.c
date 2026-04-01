/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT CRT stub function _init removed by preprocessor */

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>

/* Type definitions for Ghidra compatibility */
typedef unsigned int uint;
typedef unsigned char byte;
typedef void undefined;
typedef void code;
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef long long longlong;
typedef unsigned long long ulonglong;

/* Forward declarations */
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
int recursion_factorial(int);
int state_idle(int);
int state_processing(int);
int state_done(int);
int state_error(int);

/* Global data declarations */
extern unsigned int UINT_000130d8[16];
extern code *PTR_double_value_00015ec8[4];
extern code *PTR_op_add_00015ed4[10];
extern code *PTR_state_idle_00015efc[4];
extern char DAT_00013691[];

/* Global data definitions */
int DAT_00013700[4] = {10, 20, 30, 50};
int DAT_00013108[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
jmp_buf jump_buffer;
char DAT_00013691[] = "Control Flow Level 1 Tests:\n";
char DAT_000136b5[] = "Control Flow Level 2 Tests:\n";
char DAT_000136d9[60] = "Control Flow Level 3 Tests:\n";
unsigned int UINT_000130d8[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
code *PTR_double_value_00015ec8[4] = {(code *)double_value, (code *)triple_value, NULL, NULL};
code *PTR_op_add_00015ed4[10] = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
code *PTR_state_idle_00015efc[4] = {state_idle, state_processing, state_done, state_error};

/* Forward declarations */
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
int recursion_factorial(int);
int state_idle(int);
int state_processing(int);
int state_done(int);
int state_error(int);




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((void (*)(void))0x0)();
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
 iVar1 = *(int *)((int *)DAT_00013700 + op);
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
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 switch(target) {
 case 10:
 break;
 default:
 return -1;
 case 0x14:
 return 1;
 case 0x1e:
 return 2;
 case 0x28:
 return 3;
 case 0x32:
 iVar1 = 4;
 }
 return iVar1;
}



/* Function: loop_continue @ 000114a0 */

int loop_continue(int n)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = n & 3;
 if (n - 1U < 3) {
 iVar2 = 0;
 uVar4 = 1;
 }
 else {
 iVar2 = 0;
 uVar4 = 1;
 do {
 iVar2 = iVar2 + uVar4 * 2 + 2;
 iVar1 = uVar4 - (n & 0xfffffffcU);
 uVar4 = uVar4 + 4;
 } while (iVar1 != -3);
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 + (-(uVar4 & 1) & uVar4);
 uVar4 = uVar4 + 1;
 }
 }
 return iVar2;
}



/* Function: goto_forward @ 00011510 */

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



/* Function: goto_backward @ 00011530 */

int goto_backward(int x)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 
 /* Unresolved local var: int i@[???]
 Unresolved local var: int result@[???] */
 if (x < 1) {
 iVar2 = 1;
 }
 else {
 uVar3 = x & 7;
 if (x - 1U < 7) {
 iVar4 = 1;
 iVar2 = 1;
 }
 else {
 iVar2 = 1;
 uVar1 = 8;
 do {
 uVar5 = uVar1;
 iVar2 = (uVar5 - 1) * uVar5 *
 (uVar5 - 2) * (uVar5 - 4) * (uVar5 - 3) *
 (uVar5 - 6) * (uVar5 - 5) * (uVar5 - 7) * iVar2;
 uVar1 = uVar5 + 8;
 } while (uVar5 != (x & 0xfffffff8U));
 iVar4 = uVar5 + 1;
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 * iVar4;
 iVar4 = iVar4 + 1;
 }
 }
 return iVar2;
}



/* Function: ternary_op @ 000115d0 */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 000115e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(&DAT_00013691);
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



/* Function: loop_multi_exit @ 00011830 */

int loop_multi_exit(int target)

{
 int iVar1;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 iVar1 = -1;
 if (target - 1U < 0xc) {
 iVar1 = *(int *)(&DAT_00013108 + target * 4) + (&UINT_000130d8)[target];
 }
 return iVar1;
}



/* Function: infinite_loop @ 00011860 */

int infinite_loop(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 while( true ) {
 if (*flag == 1) {
 return iVar1;
 }
 if (iVar1 == 1000) {
 *flag = 1;
 return 0x3e9;
 }
 if (*flag == 1) {
 return iVar1 + 1;
 }
 if (*flag == 1) break;
 if (*flag == 1) {
 return iVar1 + 3;
 }
 iVar1 = iVar1 + 4;
 }
 return iVar1 + 2;
}



/* Function: multi_return @ 000118b0 */

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



/* Function: conditional_return @ 000118e0 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = -x;
 if (0 < x) {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 00011900 */

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
 goto switchD_00011936_caseD_1;
 case 2:
 goto switchD_00011936_caseD_2;
 case 3:
 goto switchD_00011936_caseD_3;
 case 4:
 goto switchD_00011936_caseD_4;
 case 5:
 goto switchD_00011936_caseD_5;
 case 6:
 goto switchD_00011936_caseD_6;
 case 7:
 goto switchD_00011936_caseD_7;
 }
 do {
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011936_caseD_7:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011936_caseD_6:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011936_caseD_5:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011936_caseD_4:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011936_caseD_3:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00011936_caseD_2:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
 uVar2 = uVar1;
switchD_00011936_caseD_1:
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



/* Function: loop_complex_cond @ 000119a0 */

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



/* Function: loop_modify_var @ 000119e0 */

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



/* Function: loop_external_state @ 00011a10 */

int loop_external_state(int *flag)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int count@[???] */
 iVar2 = 0;
 iVar1 = *flag;
 while( true ) {
 if (iVar1 != 0) {
 return iVar2;
 }
 if (iVar2 == 100) {
 return 0x65;
 }
 if (*flag != 0) {
 return iVar2 + 1;
 }
 if (*flag != 0) break;
 if (*flag != 0) {
 return iVar2 + 3;
 }
 iVar2 = iVar2 + 4;
 iVar1 = *flag;
 }
 return iVar2 + 2;
}



/* Function: recursion_factorial @ 00011a50 */

int recursion_factorial(int n)

{
 bool bVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < n) {
 iVar2 = 1;
 do {
 iVar2 = iVar2 * n;
 bVar1 = 2 < (uint)n;
 n = n - 1;
 } while (bVar1);
 }
 return iVar2;
}



/* Function: tail_recursion @ 00011a80 */

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



/* Function: indirect_recursion_a @ 00011aa0 */

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
 if ((uint)idx < 3) {
 iVar1 = ((_func_int_int)(&PTR_double_value_00015ec8)[idx])(x);
 }
 else {
 iVar1 = -1;
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

/* WARNING: Removing unreachable block (ram,0x00011da2) */
/* WARNING: Removing unreachable block (ram,0x00011d94) */
/* WARNING: Removing unreachable block (ram,0x00011c79) */
/* WARNING: Removing unreachable block (ram,0x00011c74) */
/* WARNING: Removing unreachable block (ram,0x00011c6f) */
/* WARNING: Removing unreachable block (ram,0x00011da7) */
/* WARNING: Removing unreachable block (ram,0x00011d9d) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int[5] arr@[???] */
 puts(&DAT_000136b5);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 /* Unresolved local var: int count@[???] */
 for (iVar2 = 0; iVar2 != 1000; iVar2 = iVar2 + 4) {
 }
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9,1);
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 uVar3 = 0xffffffff;
 iVar4 = 0xb;
 iVar2 = 10;
 do {
 uVar1 = iVar2 - 8;
 iVar2 = iVar2 + 2;
 if (iVar4 - 2U <= uVar1) break;
 uVar3 = uVar3 + 1;
 iVar4 = iVar4 + -1;
 } while (uVar3 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar2);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 /* Unresolved local var: int count@[???] */
 for (iVar2 = 0; iVar2 != 100; iVar2 = iVar2 + 4) {
 }
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



/* Function: non_local_jump @ 00011e60 */

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
 if (100 < (uint)x) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar2 = x * 2;
 }
 return iVar2;
}



/* Function: cpp_exception @ 00011ed0 */

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



/* Function: large_jump_table @ 00011ef0 */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
 if (9 < (uint)op) {
 return -1;
 }
 iVar1 = ((_func_int_int_int)(&PTR_op_add_00015ed4)[op])(a,b);
 return iVar1;
}



/* Function: op_add @ 00011f30 */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 00011f40 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00011f50 */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00011f60 */

int op_div(int a,int b)

{
 if (b != 0) {
 return a / b;
 }
 return 0;
}



/* Function: op_mod @ 00011f80 */

int op_mod(int a,int b)

{
 if (b != 0) {
 return a % b;
 }
 return 0;
}



/* Function: op_and @ 00011fa0 */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 00011fb0 */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00011fc0 */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 00011fd0 */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00011fe0 */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00011ff0 */

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



/* Function: state_machine @ 00012030 */

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



/* Function: fsm_func_table @ 00012080 */

int fsm_func_table(int event,int state)

{
 int iVar1;
 
 /* Unresolved local var: _func_int_int *[4] state_handlers@[???] */
 if ((uint)state < 4) {
 iVar1 = ((_func_int_int)(&PTR_state_idle_00015efc)[state])(event);
 }
 else {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: state_idle @ 000120c0 */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 000120d0 */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_done @ 000120f0 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00012100 */

int state_error(int event)

{
 return (uint)(event != 0) * 3;
}



/* Function: computed_goto @ 00012110 */

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



/* Function: obfuscated_cf @ 00012150 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg4(ESP): +4] */
 return x * 2;
}



/* Function: opaque_predicate @ 00012160 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x * 2;
}



/* Function: overlapped_code @ 00012170 */

int overlapped_code(int x)

{
 if ((x & 1U) == 0) {
 return x / 2;
 }
 return x * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00012190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 char *labels;
 
 /* Unresolved local var: int[4] labels@[???] */
 puts(&DAT_000136d9);
 iVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 labels = "CF-L3-06 (fsm_func_table): %d\n";
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 iVar1 = computed_goto((int *)labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",iVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 000122d0 */

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
