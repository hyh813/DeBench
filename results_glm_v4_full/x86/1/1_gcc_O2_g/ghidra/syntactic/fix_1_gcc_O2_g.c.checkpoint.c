/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Standard library includes */
#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* Function prototypes */
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
int _setjmp(jmp_buf env);
void __longjmp_chk(jmp_buf env, int val);
void __stack_chk_fail(void);

/* Global data */
static jmp_buf jump_buffer;

/* Type definitions for decompiled code */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned char byte;
typedef int (*code)(void);
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);


/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined4 *)0x0)();
 return;
}



/* Function: main @ 00011110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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

/* WARNING: Unknown calling convention */

int recursion_factorial(int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < n) {
 do {
 iVar1 = n + -1;
 iVar2 = iVar2 * n;
 n = iVar1;
 } while (iVar1 != 1);
 }
 return iVar2;
}



/* Function: double_value @ 000112e0 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 000112f0 */

/* WARNING: Unknown calling convention */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 00011300 */

/* WARNING: Unknown calling convention */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 00011310 */

/* WARNING: Unknown calling convention */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00011320 */

/* WARNING: Unknown calling convention */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00011330 */

/* WARNING: Unknown calling convention */

int op_div(int a,int b)

{
 int iVar1;
 
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 return iVar1;
}



/* Function: op_mod @ 00011350 */

/* WARNING: Unknown calling convention */

int op_mod(int a,int b)

{
 int iVar1;
 
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a % b;
 }
 return iVar1;
}



/* Function: op_and @ 00011370 */

/* WARNING: Unknown calling convention */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 00011380 */

/* WARNING: Unknown calling convention */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00011390 */

/* WARNING: Unknown calling convention */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 000113a0 */

/* WARNING: Unknown calling convention */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 000113b0 */

/* WARNING: Unknown calling convention */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: state_idle @ 000113c0 */

/* WARNING: Unknown calling convention */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 000113d0 */

int state_processing(int event)

{
 if (event != 2) {
 return (uint)(event == 99) * 2 + 1;
 }
 return 2;
}



/* Function: state_done @ 00011400 */

/* WARNING: Unknown calling convention */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00011410 */

/* WARNING: Unknown calling convention */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: sequential_ops @ 00011430 */

/* WARNING: Unknown calling convention */

int sequential_ops(int a,int b,int c)

{
 return (b + a) * 2 - c;
}



/* Function: single_if @ 00011450 */

/* WARNING: Unknown calling convention */

int single_if(int x)

{
 int iVar1;
 
 iVar1 = x * 2;
 if (x < 1) {
 iVar1 = x;
 }
 return iVar1;
}



/* Function: if_else @ 00011470 */

/* WARNING: Unknown calling convention */

int if_else(int x)

{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 00011480 */

/* WARNING: Unknown calling convention */

int nested_if_2(int a,int b)

{
 int iVar1;
 
 iVar1 = 0;
 if ((0 < a) && (iVar1 = a + b, b < 1)) {
 iVar1 = a;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 000114a0 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 
 iVar1 = 0;
 if ((0 < a) && (iVar1 = 1, 0 < b)) {
 if (c < 1) {
 return 2;
 }
 if (0 < d) {
 return (0 < e) + 4;
 }
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: if_elseif_chain @ 00011500 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = 10;
 if (x != 0) {
 if (x != 1) {
 iVar1 = 0x1e;
 if (x != 2) {
 iVar1 = -1;
 }
 return iVar1;
 }
 iVar1 = 0x14;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00011540 */

/* WARNING: Unknown calling convention */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 5) {
 iVar1 = (x + 1) * 100;
 }
 return iVar1;
}



/* Switch table data */
static const int CSWTCH_56[4] = { -1, 50, 100, 150 };


/* Function: switch_small @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

int switch_small(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 4) {
 iVar1 = *(int *)(CSWTCH_56 + op * 4);
 }
 return iVar1;
}



/* Function: switch_large @ 00011590 */

/* WARNING: Unknown calling convention */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 10) {
 iVar1 = op * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 000115b0 */

/* WARNING: Unknown calling convention */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 0;
 if (op - 1U < 3) {
 iVar1 = op * 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 000115d0 */

int switch_fallthrough(int op)

{
 if (op == 2) {
 return 6;
 }
 if (op != 3) {
 return (uint)(op == 1) * 2 + -1;
 }
 return 0x15;
}



/* Function: loop_for_fixed @ 00011610 */

int loop_for_fixed(int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (n != iVar1);
 return iVar2;
 }
 return 0;
}



/* Function: loop_while @ 00011640 */

int loop_while(int x)

{
 int iVar1;
 
 if (x != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (x != 0);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00011690 */

int loop_dowhile(int x)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (x != 0);
 return iVar1;
}



/* Function: loop_nested @ 000116d0 */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (0 < m) {
 iVar2 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 if (0 < n) {
 iVar1 = n + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (m != iVar2);
 }
 return iVar1;
}



/* Function: loop_break @ 00011710 */

/* WARNING: Unknown calling convention */

int loop_break(int target)

{
 int iVar1;
 int in_GS_OFFSET;
 int arr [5];
 
 iVar1 = 0;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 /* Unresolved local var: int i@[???] */
 if (target != 10) {
 do {
 iVar1 = iVar1 + 1;
 if (iVar1 == 5) {
 iVar1 = -1;
 break;
 }
 } while (target != arr[iVar1]);
 }
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: loop_continue @ 00011790 */

int loop_continue(int n)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar1 = 1;
 iVar2 = 0;
 do {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 uVar1 = uVar1 + 1;
 } while (uVar1 != n + 1U);
 return iVar2;
 }
 return 0;
}



/* Function: goto_forward @ 000117d0 */

/* WARNING: Unknown calling convention */

int goto_forward(int x)

{
 if (0 < x) {
 x = x * x;
 }
 return x * 2;
}



/* Function: goto_backward @ 000117f0 */

/* WARNING: Unknown calling convention */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 1;
 if (0 < x) {
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 1;
 do {
 iVar2 = iVar2 * iVar1;
 iVar1 = iVar1 + 1;
 } while (x + 1 != iVar1);
 }
 return iVar2;
}



/* Function: ternary_op @ 00011820 */

/* WARNING: Unknown calling convention */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Data strings */
static const char DAT_00013008[] = "=== Control Flow Tests L1 ===";
static const char DAT_00013110[] = "=== Control Flow Tests L2 ===";
static const char DAT_00013294[] = "=== Control Flow Tests L3 ===";


/* Function: test_control_flow_l1 @ 00011840 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int arr [5];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(DAT_00013008);
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
 /* Unresolved local var: int n@[???] */
 arr[1] = 0x14;
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 do {
 iVar2 = iVar2 + 1;
 if (iVar2 == 5) {
 iVar2 = -1;
 break;
 }
 } while (arr[iVar2] != 0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar2);
 /* Unresolved local var: int n@[???] */
 arr[1] = 0x14;
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 do {
 iVar2 = iVar2 + 1;
 if (iVar2 == 5) {
 iVar2 = -1;
 break;
 }
 } while (arr[iVar2] != 99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar2);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: loop_multi_exit @ 00011af0 */

/* WARNING: Unknown calling convention */

int loop_multi_exit(int target)

{
 int (*paiVar1) [4];
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int matrix [3] [4];
 
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 paiVar1 = matrix;
 matrix[0][1] = 2;
 matrix[0][2] = 3;
 matrix[0][3] = 4;
 matrix[1][0] = 5;
 matrix[1][1] = 6;
 matrix[1][2] = 7;
 matrix[1][3] = 8;
 matrix[2][0] = 9;
 matrix[2][1] = 10;
 matrix[2][2] = 0xb;
 matrix[2][3] = 0xc;
 /* Unresolved local var: int j@[???] */
 if (target != 1) {
 do {
 if (target == (*paiVar1)[1]) {
 iVar2 = 1;
 goto LAB_00011b91;
 }
 if (target == (*paiVar1)[2]) {
 iVar2 = 2;
 goto LAB_00011b91;
 }
 if (target == (*paiVar1)[3]) {
 iVar2 = 3;
 goto LAB_00011b91;
 }
 iVar3 = iVar3 + 1;
 paiVar1 = paiVar1 + 1;
 if (iVar3 == 3) {
 iVar2 = -1;
 goto LAB_00011ba5;
 }
 } while ((*paiVar1)[0] != target);
 }
 iVar2 = 0;
LAB_00011b91:
 iVar2 = iVar2 + iVar3 * 10;
LAB_00011ba5:
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: infinite_loop @ 00011bf0 */

/* WARNING: Unknown calling convention */

int infinite_loop(int *flag)

{
 int iVar1;
 
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



/* Function: multi_return @ 00011c20 */

int multi_return(int x)

{
 int iVar1;
 
 if (x < 0) {
 return -1;
 }
 if (x * 2 < 0x65) {
 iVar1 = x * 2;
 if ((x & 1U) != 0) {
 iVar1 = x + 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00011c50 */

int conditional_return(int x)

{
 int iVar1;
 
 if (0 < x) {
 return x * 2;
 }
 iVar1 = 0;
 if (x != 0) {
 iVar1 = -x;
 }
 return iVar1;
}



/* Function: duffs_device @ 00011c70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int duffs_device(int *dst,int *src,int n)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 
 if (n < 1) {
 n = -1;
 }
 else {
 iVar3 = n + 7 >> 3;
 piVar2 = dst;
 switch(n & 7) {
 case 0:
 piVar4 = src;
 break;
 case 1:
 goto _L186;
 case 2:
 piVar4 = src;
 goto LAB_00011cf4;
 case 3:
 goto _L184;
 case 4:
 piVar4 = src;
 goto LAB_00011ce0;
 case 5:
 goto _L182;
 case 6:
 goto _L181;
 case 7:
 goto _L179;
 }
 while( 1 ) {
 src = piVar4 + 1;
 dst = piVar2 + 1;
 *piVar2 = *piVar4;
_L179:
 iVar1 = *src;
 piVar2 = dst + 1;
 src = src + 1;
 *dst = iVar1;
_L181:
 iVar1 = *src;
 dst = piVar2 + 1;
 src = src + 1;
 *piVar2 = iVar1;
_L182:
 *dst = *src;
 piVar2 = dst + 1;
 piVar4 = src + 1;
LAB_00011ce0:
 src = piVar4 + 1;
 dst = piVar2 + 1;
 *piVar2 = *piVar4;
_L184:
 *dst = *src;
 piVar2 = dst + 1;
 piVar4 = src + 1;
LAB_00011cf4:
 src = piVar4 + 1;
 dst = piVar2 + 1;
 *piVar2 = *piVar4;
_L186:
 *dst = *src;
 iVar3 = iVar3 + -1;
 if (iVar3 == 0) break;
 piVar2 = dst + 1;
 piVar4 = src + 1;
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 00011d40 */

int loop_complex_cond(int x)

{
 int iVar1;
 int iVar2;
 
 if (x < 1) {
 return x;
 }
 iVar1 = 0;
 iVar2 = x;
 do {
 iVar2 = iVar2 + -1;
 iVar1 = iVar1 + 2;
 if (iVar2 <= iVar1) break;
 } while (x - iVar2 < 10);
 return (x - iVar2) + iVar1 + iVar2;
}



/* Function: loop_modify_var @ 00011d80 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar2 = 0;
 if (0 < n) {
 while (iVar1 = iVar2 + 1, iVar1 < n) {
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 3;
 if (iVar1 < 6) {
 iVar2 = iVar1;
 }
 }
 }
 return iVar3;
}



/* Function: loop_external_state @ 00011db0 */

/* WARNING: Unknown calling convention */

int loop_external_state(int *flag)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*flag != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: tail_recursion @ 00011dd0 */

/* WARNING: Unknown calling convention */

int tail_recursion(int n,int acc)

{
 if (1 < n) {
 do {
 acc = acc * n;
 n = n + -1;
 } while (n != 1);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011e00 */

/* WARNING: Unknown calling convention */

int indirect_recursion_a(int n,int depth)

{
 if (0 < depth) {
 do {
 depth = depth + -2;
 if ((n & 1U) == 0) {
 if (depth == -1) {
 return n / 2;
 }
 n = n / 2 + 1;
 }
 else {
 if (depth == -1) {
 return n * 3 + 1;
 }
 n = n * 3 + 2;
 }
 } while (depth != 0);
 }
 return n;
}



/* Function: call_func_ptr @ 00011e60 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00011e70. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 int in_GS_OFFSET;
 _func_int_int *funcs [3];
 
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((uint)idx < 3) {
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x00011ee1. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*funcs[idx])(x);
 return iVar1;
 }
 }
 else if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return -1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_virtual_func @ 00011f10 */

/* WARNING: Unknown calling convention */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 00011f20 */

/* WARNING: Unknown calling convention */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar4 = 0;
 iVar3 = 0;
 do {
 piVar1 = arr + iVar4;
 iVar4 = iVar4 + 1;
 iVar2 = (*cb)(*piVar1);
 iVar3 = iVar3 + iVar2;
 } while (n != iVar4);
 return iVar3;
 }
 return 0;
}



/* Function: test_control_flow_l2 @ 00011f70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 int *piVar5;
 int iVar6;
 int in_GS_OFFSET;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 iVar2 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013110);
 iVar3 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar3);
 /* Unresolved local var: int count@[???] */
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",0x3e9);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 src[0] = 1;
 uVar4 = 0;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 do {
 *(undefined4 *)((int)dst + uVar4) = 0;
 uVar4 = uVar4 + 4;
 } while (uVar4 < 0x20);
 iVar3 = duffs_device(dst,src,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar3);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar6 = 0;
 iVar3 = 0;
 while (iVar1 = iVar3 + 1, iVar1 < 10) {
 iVar6 = iVar6 + iVar1;
 iVar3 = iVar3 + 3;
 if (iVar1 < 6) {
 iVar3 = iVar1;
 }
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
 /* Unresolved local var: int count@[???] */
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",0x65);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 arr[0] = 1;
 piVar5 = arr;
 /* Unresolved local var: int sum@[???] */
 iVar3 = 0;
 arr[1] = 2;
 iVar6 = 1;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 /* Unresolved local var: int i@[???] */
 while( true ) {
 piVar5 = piVar5 + 1;
 iVar3 = iVar3 + iVar6 * 2;
 if (piVar5 == src) break;
 iVar6 = *piVar5;
 }
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar3);
 if (iVar2 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return;
}



/* Function: non_local_jump @ 00012220 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,1);
 }
 if (100 < x) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,2);
 }
 iVar1 = x * 2;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 000122a0 */

int cpp_exception(int x)

{
 if (x < 0) {
 return -1;
 }
 if (x < 0x65) {
 return x * 2;
 }
 return -2;
}



/* Function: large_jump_table @ 000122d0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 int in_GS_OFFSET;
 _func_int_int_int *ops [10];
 
 ops[0] = op_add;
 ops[1] = op_sub;
 ops[2] = op_mul;
 ops[3] = op_div;
 ops[4] = op_mod;
 ops[5] = op_and;
 ops[6] = op_or;
 ops[7] = op_xor;
 ops[8] = op_shl;
 ops[9] = op_shr;
 if ((uint)op < 10) {
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x00012383. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*ops[op])(a,b);
 return iVar1;
 }
 }
 else if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return -1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: conditional_func_ptr @ 000123b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int conditional_func_ptr(int mode,int x)

{
 code *UNRECOVERED_JUMPTABLE;
 int iVar1;
 
 UNRECOVERED_JUMPTABLE = double_value;
 if (mode != 0) {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (mode != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 /* WARNING: Could not recover jumptable at 0x000123e9. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*UNRECOVERED_JUMPTABLE)();
 return iVar1;
}



/* Function: state_machine @ 000123f0 */

int state_machine(int event,int state)

{
 if (state == 2) {
 return 2;
 }
 if (state < 3) {
 if (state == 0) {
 return (uint)(event == 1);
 }
 if (state == 1) {
 if (event == 2) {
 return 2;
 }
 return (uint)(event == 99) * 2 + 1;
 }
 }
 else if (state == 3) {
 return -(uint)(event != 0) & 3;
 }
 return 3;
}



/* Function: fsm_func_table @ 00012460 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int fsm_func_table(int event,int state)

{
 int iVar1;
 int in_GS_OFFSET;
 _func_int_int *state_handlers [4];
 
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ((uint)state < 4) {
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x000124cd. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*state_handlers[state])(event);
 return iVar1;
 }
 }
 else if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return 3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: computed_goto @ 000124f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int in_GS_OFFSET;
 void *targets [4];
 
 targets[0] = (void *)3;
 targets[1] = (void *)2;
 targets[2] = (void *)1;
 targets[3] = (void *)0;
 if ((uint)idx < 4) {
 /* WARNING: Could not recover jumptable at 0x0001253f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (int)(long)targets[idx];
 return iVar1;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return -1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: obfuscated_cf @ 000125a0 */

int obfuscated_cf(int param_1)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 000125b0 */

int opaque_predicate(int param_1)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 000125c0 */

/* WARNING: Unknown calling convention */

int overlapped_code(int x)

{
 if ((x & 1U) != 0) {
 return x * 3 + 1;
 }
 return x / 2;
}



/* Function: test_control_flow_l3 @ 000125f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int labels [4];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013294);
 iVar2 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
 iVar2 = non_local_jump(-5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
 iVar2 = op_add(10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",iVar2);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 iVar2 = computed_goto(labels,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar2);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 0001275c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012760 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012770 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 80 */
