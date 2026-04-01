/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_gcc_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdint.h>
#include <stdbool.h>
#include <setjmp.h>

/* Type definitions */
typedef unsigned int uint;
typedef int (*code)(int);

/* Function pointer type definitions */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int, int);

/* CRT stub function _init removed by preprocessor */

/* Jump buffer for non-local jumps */
jmp_buf jump_buffer;

/* Switch tables */
static const int CSWTCH_56[4] = {0, 10, 20, 30};

/* String constants */
static const char DAT_00011b58[] = "Control Flow Level 1 Tests\n";
static const char DAT_00011de0[] = "Control Flow Level 2 Tests\n";
static const char DAT_00011fe4[] = "Control Flow Level 3 Tests\n";

/* Computed goto targets (internal addresses) */
static int (*DAT_000116c8)(void);
static int (*DAT_000116c0)(void);
static int (*DAT_000116b8)(void);
static int (*DAT_00011694)(void);




/* Function: main @ 000104e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 000105f0 */

int recursion_factorial(int n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 1;
 if (n < 2) {
 return 1;
 }
 do {
 iVar2 = n + -1;
 iVar1 = n * iVar1;
 n = iVar2;
 } while (iVar2 != 1);
 return iVar1;
}



/* Function: double_value @ 00010618 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00010620 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 00010628 */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00010630 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00010638 */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00010640 */

int op_div(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = __aeabi_idiv();
 return iVar1;
 }
 return 0;
}



/* Function: op_mod @ 0001065c */

int op_mod(int a,int b)

{
 int extraout_r1;
 
 if (b != 0) {
 __aeabi_idivmod();
 return extraout_r1;
 }
 return 0;
}



/* Function: op_and @ 0001067c */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00010684 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 0001068c */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00010694 */

int op_shl(int a,int b)

{
 return a << (b & 0xffU);
}



/* Function: op_shr @ 0001069c */

int op_shr(int a,int b)

{
 return a >> (b & 0xffU);
}



/* Function: state_idle @ 000106a4 */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 000106b4 */

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



/* Function: state_done @ 000106cc */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 000106d4 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: non_local_jump_simple @ 000106e0 */

int non_local_jump_simple(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 == 0) {
 iVar1 = 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: sequential_ops @ 00010700 */

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



/* Function: single_if @ 0001070c */

int single_if(int x)

{
 if (0 < x) {
 x = x << 1;
 }
 return x;
}



/* Function: if_else @ 00010718 */

int if_else(int x)

{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 00010728 */

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



/* Function: nested_if_deep @ 00010744 */

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



/* Function: if_elseif_chain @ 00010798 */

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



/* Function: if_elseif_long @ 000107c8 */

int if_elseif_long(int x)

{
 int iVar1;
 
 if ((uint)x < 5) {
 iVar1 = (x + 1) * 100;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 000107e4 */

int switch_small(int op)

{
 int iVar1;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 if ((uint)op < 4) {
 iVar1 = *(int *)(&CSWTCH_56 + op * 4);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_large @ 000107fc */

int switch_large(int op)

{
 int iVar1;
 
 if ((uint)op < 10) {
 iVar1 = op * 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00010810 */

int switch_default(int op)

{
 int iVar1;
 
 if (op - 1U < 3) {
 iVar1 = op * 100;
 }
 else {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 0001082c */

int switch_fallthrough(int op)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 if (op == 2) {
 iVar1 = 0;
 }
 else {
 if (op != 3) {
 if (op == 1) {
 iVar1 = 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
 }
 iVar1 = 0xc;
 }
 return iVar1 + op * 3;
}



/* Function: loop_for_fixed @ 00010864 */

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



/* Function: loop_while @ 00010890 */

int loop_while(int x)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 if (x != 0) {
 iVar1 = 0;
 do {
 x = x / 10;
 iVar1 = iVar1 + 1;
 } while (x != 0);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 000108c4 */

int loop_dowhile(int x)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 do {
 x = x / 10;
 iVar1 = iVar1 + 1;
 } while (x != 0);
 return iVar1;
}



/* Function: loop_nested @ 000108ec */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int total@[???]
 Unresolved local var: int i@[???] */
 if (0 < m) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 iVar2 = iVar2 + 1;
 if (0 < n) {
 iVar1 = n + iVar1;
 }
 } while (m != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_break @ 0001091c */

int loop_break(int target)

{
 int iVar1;
 
 /* Unresolved local var: int[5] arr@[???]
 Unresolved local var: int n@[???]
 Unresolved local var: int i@[???] */
 if (target == 10) {
 return 0;
 }
 if (target == 0x14) {
 return 1;
 }
 if (target == 0x1e) {
 return 2;
 }
 if (target == 0x28) {
 return 3;
 }
 if (target == 0x32) {
 iVar1 = 4;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: loop_continue @ 0001096c */

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
 } while (n + 1U != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 000109a0 */

int goto_forward(int x)

{
 /* Unresolved local var: int result@[???] */
 if (0 < x) {
 x = x * x;
 }
 return x << 1;
}



/* Function: goto_backward @ 000109b4 */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 1;
 if (x < 1) {
 return 1;
 }
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 iVar2 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (x + 1 != iVar2);
 return iVar1;
}



/* Function: ternary_op @ 000109dc */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 000109e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(&DAT_00011b58);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n");
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



/* Function: loop_multi_exit @ 00010c14 */

int loop_multi_exit(int target)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int[3][4] matrix@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 if (target == 1) {
 iVar2 = 0;
LAB_00010c90:
 iVar1 = 0;
 }
 else {
 if (target == 2) {
 iVar2 = 0;
LAB_00010ca4:
 iVar1 = 1;
 goto LAB_00010c94;
 }
 if (target == 3) {
 iVar2 = 0;
LAB_00010cb0:
 iVar1 = 2;
 goto LAB_00010c94;
 }
 if (target == 4) {
 iVar2 = 0;
 }
 else {
 if (target == 5) {
 iVar2 = 1;
 goto LAB_00010c90;
 }
 if (target == 6) {
 iVar2 = 1;
 goto LAB_00010ca4;
 }
 if (target == 7) {
 iVar2 = 1;
 goto LAB_00010cb0;
 }
 if (target == 8) {
 iVar2 = 1;
 }
 else {
 if (target == 9) {
 iVar2 = 2;
 goto LAB_00010c90;
 }
 if (target == 10) {
 iVar2 = 2;
 goto LAB_00010ca4;
 }
 if (target == 0xb) {
 iVar2 = 2;
 goto LAB_00010cb0;
 }
 if (target != 0xc) {
 return -1;
 }
 iVar2 = 2;
 }
 }
 iVar1 = 3;
 }
LAB_00010c94:
 return iVar1 + iVar2 * 10;
}



/* Function: infinite_loop @ 00010ce4 */

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



/* Function: multi_return @ 00010d24 */

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



/* Function: conditional_return @ 00010d54 */

int conditional_return(int x)

{
 int iVar1;
 
 if (0 < x) {
 return x << 1;
 }
 iVar1 = 0;
 if (x != 0) {
 iVar1 = -x;
 }
 return iVar1;
}



/* Function: duffs_device @ 00010d6c */

int duffs_device(int *dst,int *src,int n)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 
 /* Unresolved local var: int count@[???] */
 if (0 < n) {
 iVar5 = n + 7 >> 3;
 piVar1 = src;
 piVar2 = src;
 piVar3 = dst;
 piVar4 = dst;
 switch(n & 7) {
 case 1:
 while( true ) {
 iVar5 = iVar5 + -1;
 *dst = *src;
 if (iVar5 == 0) break;
 src = src + 1;
 dst = dst + 1;
switchD_00010d90_default:
 piVar2 = src + 1;
 piVar4 = dst + 1;
 *dst = *src;
switchD_00010d90_caseD_7:
 *piVar4 = *piVar2;
 piVar1 = piVar2 + 2;
 piVar3 = piVar4 + 2;
 piVar4[1] = piVar2[1];
switchD_00010d90_caseD_5:
 piVar2 = piVar1 + 1;
 piVar4 = piVar3 + 1;
 *piVar3 = *piVar1;
switchD_00010d90_caseD_4:
 src = piVar2 + 1;
 dst = piVar4 + 1;
 *piVar4 = *piVar2;
switchD_00010d90_caseD_3:
 piVar1 = src + 1;
 piVar3 = dst + 1;
 *dst = *src;
switchD_00010d90_caseD_2:
 src = piVar1 + 1;
 dst = piVar3 + 1;
 *piVar3 = *piVar1;
 }
 break;
 case 2:
 goto switchD_00010d90_caseD_2;
 case 3:
 goto switchD_00010d90_caseD_3;
 case 4:
 goto switchD_00010d90_caseD_4;
 case 5:
 goto switchD_00010d90_caseD_5;
 case 6:
 piVar1 = src + 1;
 piVar3 = dst + 1;
 *dst = *src;
 goto switchD_00010d90_caseD_5;
 case 7:
 goto switchD_00010d90_caseD_7;
 default:
 goto switchD_00010d90_default;
 }
 return n;
 }
 return -1;
}



/* Function: loop_complex_cond @ 00010e24 */

int loop_complex_cond(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[DW_OP_reg0(r0)]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 return x;
 }
 iVar3 = x + -1;
 if (iVar3 < 3) {
 iVar2 = 1;
 iVar1 = 2;
 }
 else {
 iVar3 = x + -2;
 if (iVar3 < 5) {
 iVar2 = 2;
 iVar1 = 4;
 }
 else {
 iVar3 = x + -3;
 if (iVar3 < 7) {
 iVar2 = 3;
 iVar1 = 6;
 }
 else {
 iVar3 = x + -4;
 if (iVar3 < 9) {
 iVar2 = 4;
 iVar1 = 8;
 }
 else {
 iVar3 = x + -5;
 if (iVar3 < 0xb) {
 iVar2 = 5;
 iVar1 = 10;
 }
 else {
 iVar3 = x + -6;
 if (iVar3 < 0xd) {
 iVar2 = 6;
 iVar1 = 0xc;
 }
 else {
 iVar3 = x + -7;
 if (iVar3 < 0xf) {
 iVar2 = 7;
 iVar1 = 0xe;
 }
 else {
 iVar3 = x + -8;
 if (iVar3 < 0x11) {
 iVar2 = 8;
 iVar1 = 0x10;
 }
 else {
 iVar3 = x + -9;
 if (iVar3 < 0x13) {
 iVar2 = 9;
 iVar1 = 0x12;
 }
 else {
 iVar2 = 10;
 iVar1 = 0x14;
 iVar3 = x + -10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar3 + iVar1 + iVar2;
}



/* Function: loop_modify_var @ 00010f1c */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar3 = 0;
 if (n < 1) {
 return 0;
 }
 if (n == 1) {
 return 0;
 }
 iVar5 = 1;
 iVar4 = 0;
 do {
 iVar3 = iVar3 + iVar5;
 iVar2 = iVar5 + 1;
 iVar1 = iVar4;
 iVar4 = iVar5;
 while (iVar5 = iVar2, 5 < iVar4) {
 iVar4 = iVar1 + 4;
 if (n <= iVar4) {
 return iVar3;
 }
 iVar3 = iVar3 + iVar4;
 iVar2 = iVar1 + 5;
 iVar1 = iVar1 + 3;
 }
 } while (iVar5 < n);
 return iVar3;
}



/* Function: loop_external_state @ 00010f7c */

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



/* Function: tail_recursion @ 00010fa4 */

int tail_recursion(int n,int acc)

{
 int iVar1;
 
 if (n < 2) {
 return acc;
 }
 do {
 iVar1 = n + -1;
 acc = n * acc;
 n = iVar1;
 } while (iVar1 != 1);
 return acc;
}



/* Function: indirect_recursion_a @ 00010fcc */

int indirect_recursion_a(int n,int depth)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 bool bVar4;
 
 if (depth < 1) {
 return n;
 }
 iVar3 = depth + -4;
 if ((n & 1U) == 0) goto LAB_00011030;
LAB_00010fe4:
 iVar2 = n * 3;
 if (depth != 1) {
 uVar1 = iVar2 + 2;
 if (depth < 3) {
 return uVar1;
 }
 if ((uVar1 & 1) == 0) goto LAB_00011054;
 while (iVar2 = uVar1 * 3, depth != 3) {
 n = iVar2 + 2;
 while( true ) {
 bVar4 = iVar3 == 0;
 iVar3 = iVar3 + -4;
 depth = depth + -4;
 if (bVar4) {
 return n;
 }
 if ((n & 1U) != 0) goto LAB_00010fe4;
LAB_00011030:
 if (depth == 1) {
 return n / 2;
 }
 uVar1 = n / 2 + 1;
 if (depth < 3) {
 return uVar1;
 }
 if ((uVar1 & 1) != 0) break;
LAB_00011054:
 if (depth == 3) {
 return (int)uVar1 / 2;
 }
 n = (int)uVar1 / 2 + 1;
 }
 }
 }
 return iVar2 + 1;
}



/* Function: call_func_ptr @ 00011078 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00011080. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00011084 */

/* WARNING: Removing unreachable block (ram,0x00011114) */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 _func_int_int *funcs [3];
 
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((uint)idx < 3) {
 /* WARNING: Could not recover jumptable at 0x000110ec. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*funcs[idx])(x);
 return iVar1;
 }
 return -1;
}



/* Function: call_virtual_func @ 00011120 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00011128 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar4 = 0;
 piVar3 = arr + -1;
 do {
 piVar3 = piVar3 + 1;
 iVar1 = (*cb)(*piVar3);
 iVar2 = iVar2 + 1;
 iVar4 = iVar4 + iVar1;
 } while (n != iVar2);
 return iVar4;
 }
 return 0;
}



/* Function: test_control_flow_l2 @ 00011170 */

/* WARNING: Removing unreachable block (ram,0x0001139c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int flag;
 int ext_flag;
 int src [8];
 int dst [8];
 
 /* Unresolved local var: int[5] arr@[???] */
 puts(&DAT_00011de0);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
 /* Unresolved local var: int count@[???] */
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
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
 iVar3 = duffs_device(dst,src,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar3);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar4 = 0;
 iVar1 = 1;
 iVar3 = 0;
 while (iVar2 = iVar1, iVar4 = iVar4 + iVar2, iVar2 < 6) {
 iVar3 = iVar2;
 iVar1 = iVar2 + 1;
 }
 while (iVar3 == 5) {
 iVar4 = iVar4 + 9;
 iVar3 = 8;
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar4);
 /* Unresolved local var: int count@[???] */
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 000113e8 */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,1);
 }
 if (100 < x) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,2);
 }
 iVar1 = x << 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 0001144c */

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



/* Function: large_jump_table @ 00011474 */

/* WARNING: Removing unreachable block (ram,0x00011518) */

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
 /* WARNING: Could not recover jumptable at 0x000114f4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*ops[op])(op,a,b);
 return iVar1;
 }
 return -1;
}



/* Function: conditional_func_ptr @ 00011524 */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 code *UNRECOVERED_JUMPTABLE;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 if (mode == 0) {
 return x << 1;
 }
 UNRECOVERED_JUMPTABLE = triple_value;
 if (mode != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 /* WARNING: Could not recover jumptable at 0x00011540. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar1;
}



/* Function: state_machine @ 00011558 */

int state_machine(int event,int state)

{
 switch(state) {
 case 0:
 return (uint)(event == 1);
 case 1:
 break;
 case 2:
 return state;
 case 3:
 if (event == 0) {
 state = 0;
 }
 return state;
 default:
 return 3;
 }
 if (event == 2) {
 return 2;
 }
 if (event == 99) {
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 000115bc */

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
 /* WARNING: Could not recover jumptable at 0x00011624. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*state_handlers[state])(event);
 return iVar1;
 }
 return 3;
}



/* Function: computed_goto @ 00011654 */

/* WARNING: Removing unreachable block (ram,0x000116d8) */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int (*targets [4])(void);
 
 targets[0] = DAT_000116c8;
 targets[1] = DAT_000116c0;
 targets[2] = DAT_000116b8;
 targets[3] = DAT_00011694;
 if (3 < (uint)idx) {
 return -1;
 }
 /* WARNING: Could not recover jumptable at 0x00011690. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*targets[idx])();
 return iVar1;
}



/* Function: obfuscated_cf @ 000116e4 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 000116ec */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
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

/* WARNING: Removing unreachable block (ram,0x00011834) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int labels [4];
 
 puts(&DAT_00011fe4);
 iVar1 = non_local_jump(0);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = non_local_jump(-5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",0xf);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
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




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00011aac */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
