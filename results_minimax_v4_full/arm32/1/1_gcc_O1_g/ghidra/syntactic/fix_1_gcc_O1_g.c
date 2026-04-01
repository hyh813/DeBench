/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_gcc_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdint.h>
#include <setjmp.h>
#include <stdio.h>
#include <string.h>

/* Data arrays referenced in the binary */
char DAT_00011ba4[] = "Control Flow Tests - Level 1\n";
char DAT_00011e2c[] = "Control Flow Tests - Level 2\n";
char DAT_00012030[] = "Control Flow Tests - Level 3\n";

/* Labels for computed goto */
int label_0(void) { return 0; }
int label_1(void) { return 1; }
int label_2(void) { return 2; }
int label_3(void) { return 3; }

char DAT_00011694[] = "";
char DAT_000116b8[] = "";
char DAT_000116c0[] = "";
char DAT_000116c8[] = "";

/* Jump buffer for non-local jumps */
jmp_buf jump_buffer;

/* Type definitions for function pointers */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef void (*code)();
typedef unsigned int uint;
typedef int bool;

#define true 1
#define false 0

/* ARM intrinsic for signed borrow check */
int SBORROW4(int x, int y)
{
    /* Returns 1 if x - y would cause a signed borrow (i.e., x < y) */
    return (x < y) ? 1 : 0;
}

/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 000105d8 */

int recursion_factorial(int n)

{
 int iVar1;
 
 if (1 < n) {
 iVar1 = recursion_factorial(n + -1);
 return n * iVar1;
 }
 return 1;
}



/* Function: double_value @ 00010600 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00010608 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 00010610 */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00010618 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00010620 */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00010628 */

int op_div(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = __aeabi_idiv(a, b);
 return iVar1;
 }
 return 0;
}



/* Function: op_mod @ 00010644 */

int op_mod(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = __aeabi_idiv(a, b);
 return a - b * iVar1;
 }
 return 0;
}



/* Function: op_and @ 00010664 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 0001066c */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00010674 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 0001067c */

int op_shl(int a,int b)

{
 return a << (b & 0xffU);
}



/* Function: op_shr @ 00010684 */

int op_shr(int a,int b)

{
 return a >> (b & 0xffU);
}



/* Function: state_idle @ 0001068c */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 0001069c */

int state_processing(int event)

{
 int iVar1;
 
 if (event != 2) {
 if (event == 99) {
 iVar1 = 3;
 }
 else {
 iVar1 = 1;
 }
 return iVar1;
 }
 return 2;
}



/* Function: state_done @ 000106b4 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 000106bc */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: sequential_ops @ 000106c8 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[DW_OP_breg0(r0): 0; DW_OP_breg1(r1): 0;
 DW_OP_plus; DW_OP_stack_value]
 Unresolved local var: int temp2@[DW_OP_breg0(r0): 0; DW_OP_breg1(r1): 0;
 DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value]
 Unresolved local var: int temp3@[DW_OP_breg0(r0): 0; DW_OP_breg1(r1): 0;
 DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_breg2(r2): 0; DW_OP_minus;
 DW_OP_stack_value] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 000106d4 */

int single_if(int x)

{
 if (0 < x) {
 x = x << 1;
 }
 return x;
}



/* Function: if_else @ 000106e0 */

int if_else(int x)

{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 000106f0 */

int nested_if_2(int a,int b)

{
 if (0 < a) {
 if (0 < b) {
 a = a + b;
 }
 return a;
 }
 return 0;
}



/* Function: nested_if_deep @ 0001070c */

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
 if (d < 1) {
 return 3;
 }
 if (e < 1) {
 iVar1 = 4;
 }
 else {
 iVar1 = 5;
 }
 return iVar1;
}



/* Function: if_elseif_chain @ 00010760 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 if (x == 0) {
 return 10;
 }
 if (x == 1) {
 return 0x14;
 }
 if (x == 2) {
 iVar1 = 0x1e;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00010790 */

int if_elseif_long(int x)

{
 switch(x) {
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
 return -1;
 }
}



/* Function: switch_small @ 000107e0 */

int switch_small(int op)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 switch(op) {
 case 0:
 return 0xf;
 case 1:
 return 5;
 case 2:
 return 0x32;
 case 3:
 return 2;
 default:
 return -1;
 }
}



/* Function: switch_large @ 00010824 */

int switch_large(int op)

{
 switch(op) {
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
 op = -1;
 }
 return op;
}



/* Function: switch_default @ 000108a8 */

int switch_default(int op)

{
 int iVar1;
 
 if (op == 2) {
 return 200;
 }
 if (op == 3) {
 return 300;
 }
 if (op == 1) {
 iVar1 = 100;
 }
 else {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 000108d8 */

int switch_fallthrough(int op)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 if (op == 2) {
 iVar1 = 0;
 }
 else {
 if (op != 3) {
 if (op != 1) {
 return -1;
 }
 iVar1 = 0;
 goto LAB_00010908;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + op * 2;
LAB_00010908:
 return iVar1 + op;
}



/* Function: loop_for_fixed @ 00010918 */

int loop_for_fixed(int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_while @ 00010944 */

int loop_while(int x)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 if (x == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (x != 0);
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00010980 */

int loop_dowhile(int x)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (x != 0);
 return iVar1;
}



/* Function: loop_nested @ 000109a8 */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int total@[???]
 Unresolved local var: int i@[???] */
 if (0 < m) {
 iVar1 = 0;
 iVar2 = iVar1;
 do {
 if (0 < n) {
 iVar3 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 iVar3 = iVar3 + 1;
 } while (n != iVar3);
 iVar1 = iVar3 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (m != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_break @ 000109ec */

/* WARNING: Removing unreachable block (ram,0x00010a64) */

int loop_break(int target)

{
 int iVar1;
 int *piVar2;
 int arr [5];
 
 /* Unresolved local var: int n@[???] */
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 piVar2 = arr;
 do {
 if (*piVar2 == target) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00010a70 */

int loop_continue(int n)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 1;
 iVar1 = 0;
 do {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != n + 1U);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 00010aa4 */

int goto_forward(int x)

{
 /* Unresolved local var: int result@[???] */
 if (0 < x) {
 x = x * x;
 }
 return x << 1;
}



/* Function: goto_backward @ 00010ab8 */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 if (0 < x) {
 iVar2 = 1;
 iVar1 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 != x + 1);
 return iVar1;
 }
 return 1;
}



/* Function: ternary_op @ 00010ae8 */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 00010af4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_00011ba4);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",if_else(1));
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
 iVar1 = loop_for_fixed(10);
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",iVar1);
 iVar1 = loop_while(0x3039);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",iVar1);
 iVar1 = loop_dowhile(0x2694);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",iVar1);
 iVar1 = loop_nested(3,4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",iVar1);
 iVar1 = loop_break(0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
 iVar1 = loop_break(99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
 iVar1 = loop_continue(10);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",iVar1);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 iVar1 = goto_backward(5);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",iVar1);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 00010d6c */

/* WARNING: Removing unreachable block (ram,0x00010e10) */

int loop_multi_exit(int target)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int matrix [3] [4];
 
 matrix[0][0] = 1;
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
 /* Unresolved local var: int i@[???] */
 piVar4 = matrix[0];
 iVar1 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 iVar3 = 0;
 piVar2 = piVar4;
 do {
 if (*piVar2 == target) {
 return iVar3 + iVar1 * 10;
 }
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 4);
 iVar1 = iVar1 + 1;
 piVar4 = piVar4 + 4;
 } while (iVar1 != 3);
 return -1;
}



/* Function: infinite_loop @ 00010e1c */

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



/* Function: multi_return @ 00010e50 */

int multi_return(int x)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 if (x < 0) {
 return -1;
 }
 iVar1 = x * 2;
 if (iVar1 < 0x65) {
 if ((x & 1U) != 0) {
 iVar1 = x + 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00010e80 */

int conditional_return(int x)

{
 int iVar1;
 
 if (x < 1) {
 if (x < 0) {
 iVar1 = -x;
 }
 else {
 iVar1 = 0;
 }
 return iVar1;
 }
 return x << 1;
}



/* Function: duffs_device @ 00010ea0 */

int duffs_device(int *dst,int *src,int n)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 uint uVar6;
 
 /* Unresolved local var: int count@[???] */
 if (0 < n) {
 iVar5 = n + 7;
 if (iVar5 < 0) {
 iVar5 = n + 0xe;
 }
 iVar5 = iVar5 >> 3;
 uVar6 = n & 7;
 if (-1 < -n) {
 uVar6 = -(-n & 7U);
 }
 piVar1 = src;
 piVar2 = src;
 piVar3 = dst;
 piVar4 = dst;
 switch(uVar6) {
 case 0:
 goto switchD_00010ed0_caseD_0;
 case 1:
 goto switchD_00010ed0_caseD_1;
 case 2:
 goto switchD_00010ed0_caseD_2;
 case 3:
 goto switchD_00010ed0_caseD_3;
 case 4:
 goto switchD_00010ed0_caseD_4;
 case 5:
 goto switchD_00010ed0_caseD_5;
 case 6:
 goto switchD_00010ed0_caseD_6;
 case 7:
 goto switchD_00010ed0_caseD_7;
 default:
 return n;
 }
 }
 return -1;
switchD_00010ed0_caseD_0:
 piVar1 = src + 1;
 piVar3 = dst + 1;
 *dst = *src;
switchD_00010ed0_caseD_1:
 *piVar3 = *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
switchD_00010ed0_caseD_2:
 *piVar3 = *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
switchD_00010ed0_caseD_3:
 *piVar3 = *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
switchD_00010ed0_caseD_4:
 *piVar3 = *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
switchD_00010ed0_caseD_5:
 *piVar3 = *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
switchD_00010ed0_caseD_6:
 *piVar3 = *piVar1;
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
switchD_00010ed0_caseD_7:
 *piVar4 = *piVar3;
 piVar4 = piVar3 + 1;
 piVar3 = piVar2 + 1;
 piVar1 = piVar2 + 1;
 piVar2 = piVar1;
 iVar5 = iVar5 - 1;
 if (iVar5 != 0) {
 goto switchD_00010ed0_caseD_0;
 }
 return n;
}



/* Function: loop_complex_cond @ 00010f5c */

int loop_complex_cond(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 bool bVar5;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[DW_OP_reg0(r0)]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 iVar3 = 0;
 iVar4 = iVar3;
 }
 else {
 iVar4 = 0;
 iVar2 = 0;
 do {
 iVar4 = iVar4 + 2;
 x = x + -1;
 iVar3 = iVar2 + 1;
 bVar5 = SBORROW4(iVar3,9);
 iVar1 = iVar2 + -8;
 if (iVar3 < 10) {
 bVar5 = SBORROW4(iVar4,x);
 iVar1 = iVar4 - x;
 }
 iVar2 = iVar3;
 } while (0 < x && (iVar1 < 0) != bVar5);
 }
 return iVar4 + x + iVar3;
}



/* Function: loop_modify_var @ 00010fb4 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 iVar3 = iVar1;
 while (iVar2 = iVar3, iVar3 = iVar2 + 1, iVar3 < n) {
 iVar1 = iVar1 + iVar3;
 if (5 < iVar3) {
 iVar3 = iVar2 + 3;
 }
 }
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 00010fec */

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



/* Function: tail_recursion @ 00011010 */

int tail_recursion(int n,int acc)

{
 int iVar1;
 
 if (1 < n) {
 iVar1 = tail_recursion(n + -1,n * acc);
 return iVar1;
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011034 */

int indirect_recursion_a(int n,int depth)

{
 int iVar1;
 
 if (depth < 1) {
 return n;
 }
 if ((n & 1U) != 0) {
 if (1 < depth) {
 iVar1 = indirect_recursion_a(n * 3 + 2,depth + -2);
 return iVar1;
 }
 return n * 3 + 1;
 }
 if (depth < 2) {
 return n / 2;
 }
 iVar1 = indirect_recursion_a(n / 2 + 1,depth + -2);
 return iVar1;
}



/* Function: call_func_ptr @ 0001108c */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 000110a0 */

/* WARNING: Removing unreachable block (ram,0x00011114) */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 _func_int_int *funcs [3];
 
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((uint)idx < 3) {
 iVar1 = (*funcs[idx])(x);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_virtual_func @ 00011120 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00011128 */

int process_with_callback(int *arr,int n,_func_int_int cb)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar4 = 0;
 }
 else {
 piVar3 = arr + -1;
 iVar2 = 0;
 iVar4 = 0;
 do {
 piVar3 = piVar3 + 1;
 iVar4 = iVar4 + (*cb)(*piVar3);
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar4;
}



/* Function: test_control_flow_l2 @ 0001116c */

/* WARNING: Removing unreachable block (ram,0x000113b8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 puts(&DAT_00011e2c);
 iVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar1);
 flag = 0;
 iVar1 = infinite_loop(&flag);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",iVar1);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 src[0] = 1;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 memset(dst,0,0x20);
 iVar1 = duffs_device(dst,src,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar1);
 iVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",iVar1);
 iVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar1);
 ext_flag = 0;
 iVar1 = loop_external_state(&ext_flag);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",iVar1);
 iVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",iVar1);
 iVar1 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",iVar1);
 iVar1 = indirect_recursion_a(10,3);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",iVar1);
 iVar1 = call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",iVar1);
 iVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar1);
 iVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar1);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 iVar1 = process_with_callback(arr,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar1);
 return;
}



/* Function: non_local_jump @ 00011404 */

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



/* Function: cpp_exception @ 0001146c */

int cpp_exception(int x)

{
 if (x < 0) {
 return -1;
 }
 if (x < 0x65) {
 return x << 1;
 }
 return -2;
}



/* Function: large_jump_table @ 00011494 */

/* WARNING: Removing unreachable block (ram,0x00011520) */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
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
 iVar1 = (*ops[op])(a,b);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: conditional_func_ptr @ 0001152c */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 _func_int_int *pcVar2;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 if (mode == 0) {
 pcVar2 = double_value;
 }
 else {
 pcVar2 = triple_value;
 if (mode != 1) {
 pcVar2 = recursion_factorial;
 }
 }
 iVar1 = (*pcVar2)(x);
 return iVar1;
}



/* Function: state_machine @ 0001156c */

int state_machine(int event,int state)

{
 switch(state) {
 case 0:
 return (uint)(event == 1);
 case 1:
 if (event != 2) {
 if (event == 99) {
 state = 3;
 }
 return state;
 }
 state = 2;
switchD_00011578_caseD_2:
 return state;
 case 2:
 goto switchD_00011578_caseD_2;
 case 3:
 if (event == 0) {
 state = 0;
 }
 return state;
 default:
 return 3;
 }
}



/* Function: fsm_func_table @ 000115d8 */

/* WARNING: Removing unreachable block (ram,0x00011648) */

int fsm_func_table(int event,int state)

{
 int iVar1;
 _func_int_int *state_handlers [4];
 
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ((uint)state < 4) {
 iVar1 = (*state_handlers[state])(event);
 }
 else {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: computed_goto @ 00011654 */

/* WARNING: Removing unreachable block (ram,0x000116d8) */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 void *targets [4];
 
 targets[0] = &DAT_00011694;
 targets[1] = &DAT_000116b8;
 targets[2] = &DAT_000116c0;
 targets[3] = &DAT_000116c8;
 if (3 < (uint)idx) {
 return -1;
 }
 /* WARNING: Could not recover jumptable at 0x00011690. Too many branches */
 /* WARNING: Treating indirect jump as call - these are data pointers, not functions */
 return (int)targets[idx];
}



/* Function: obfuscated_cf @ 000116e4 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value] */
 return x << 1;
}



/* Function: opaque_predicate @ 000116ec */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x << 1;
}



/* Function: overlapped_code @ 000116f4 */

int overlapped_code(int x)

{
 int iVar1;
 
 if ((x & 1U) == 0) {
 iVar1 = x / 2;
 }
 else {
 iVar1 = x * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 0001170c */

/* WARNING: Removing unreachable block (ram,0x00011868) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int labels [4];
 
 puts(&DAT_00012030);
 iVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = non_local_jump(-5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 iVar1 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",iVar1);
 iVar1 = conditional_func_ptr(0,5);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",iVar1);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",state_machine(2,0));
 iVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",iVar1);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 iVar1 = computed_goto(labels,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 000118a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




int __aeabi_idiv0(void)

{
 raise(8);
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
