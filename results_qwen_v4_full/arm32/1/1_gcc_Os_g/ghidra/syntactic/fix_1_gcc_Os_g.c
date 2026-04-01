/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdbool.h>
#include <stdint.h>
#include <setjmp.h>

typedef unsigned int uint;
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef int (*code)(void);

/* External data declarations */
extern char DAT_000114dc[];
extern char DAT_000114fc[];
extern char DAT_00011504[];
extern char DAT_0001150c[];
extern char DAT_000119c0[];
extern char DAT_00011c2d[];
extern char DAT_00011e20[];
extern char CSWTCH_56[4];
jmp_buf jump_buffer;

/* Define missing external data */
char DAT_000114dc[] = "";
char DAT_000114fc[] = "";
char DAT_00011504[] = "";
char DAT_0001150c[] = "";
char DAT_000119c0[] = "=== Control Flow Level 1 ===";
char DAT_00011c2d[] = "=== Control Flow Level 2 ===";
char DAT_00011e20[] = "=== Control Flow Level 3 ===";
char CSWTCH_56[4] = {0, 0x14, 0x1e, 0x32};

/* Ghidra helper macro for signed borrow detection */
#define SBORROW4(a, b) (((a) < 0) && ((b) >= 0))

/* CRT stub function _init removed by preprocessor */




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
 
 iVar1 = 1;
 for (; 1 < n; n = n + -1) {
 iVar1 = n * iVar1;
 }
 return iVar1;
}



/* Function: double_value @ 0001060c */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00010614 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 0001061c */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00010624 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 0001062c */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00010634 */

int op_div(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = __aeabi_idiv();
 return iVar1;
 }
 return 0;
}



/* Function: op_mod @ 00010650 */

int op_mod(int a,int b)

{
 int extraout_r1;
 
 if (b != 0) {
 __aeabi_idivmod();
 return extraout_r1;
 }
 return 0;
}



/* Function: op_and @ 00010670 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00010678 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00010680 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00010688 */

int op_shl(int a,int b)

{
 return a << (b & 0xffU);
}



/* Function: op_shr @ 00010690 */

int op_shr(int a,int b)

{
 return a >> (b & 0xffU);
}



/* Function: state_idle @ 00010698 */

int state_idle(int event)

{
 return (unsigned int)(event == 1);
}



/* Function: state_processing @ 000106a8 */

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



/* Function: state_done @ 000106c0 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 000106c8 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: sequential_ops @ 000106d4 */

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



/* Function: single_if @ 000106e0 */

int single_if(int x)

{
 if (0 < x) {
 x = x << 1;
 }
 return x;
}



/* Function: if_else @ 000106ec */

int if_else(int x)

{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 000106fc */

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



/* Function: nested_if_deep @ 00010718 */

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



/* Function: if_elseif_chain @ 0001076c */

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



/* Function: if_elseif_long @ 0001079c */

int if_elseif_long(int x)

{
 int iVar1;
 
 if ((uint)x < 5) {
 iVar1 = x * 100 + 100;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 000107b0 */

int switch_small(int op)

{
 int iVar1;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 if ((uint)op < 4) {
 iVar1 = (int)(char)(&CSWTCH_56)[op];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_large @ 000107c8 */

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



/* Function: switch_default @ 000107dc */

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



/* Function: switch_fallthrough @ 000107f4 */

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
 goto LAB_0001081c;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + op * 2;
LAB_0001081c:
 return iVar1 + op;
}



/* Function: loop_for_fixed @ 00010834 */

int loop_for_fixed(int n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 }
 return iVar1;
}



/* Function: loop_while @ 00010854 */

int loop_while(int x)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 for (; x != 0; x = x / 10) {
 iVar1 = iVar1 + 1;
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 0001088c */

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



/* Function: loop_nested @ 000108b4 */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 /* Unresolved local var: int total@[???]
 Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < m; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + (n & ~(n >> 0x1f));
 }
 return iVar1;
}



/* Function: loop_break @ 000108d8 */

/* WARNING: Removing unreachable block (ram,0x00010948) */

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
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 arr[4] = 0x32;
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



/* Function: loop_continue @ 0001095c */

int loop_continue(int n)

{
 int iVar1;
 uint uVar2;
 
 iVar1 = 0;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 for (uVar2 = 1; (int)uVar2 <= n; uVar2 = uVar2 + 1) {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 }
 return iVar1;
}



/* Function: goto_forward @ 00010980 */

int goto_forward(int x)

{
 /* Unresolved local var: int result@[???] */
 if (0 < x) {
 x = x * x;
 }
 return x << 1;
}



/* Function: goto_backward @ 00010994 */

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
 } while (iVar2 <= x);
 return iVar1;
}



/* Function: ternary_op @ 000109b8 */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 000109c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_000119c0);
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
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 00010c34 */

/* WARNING: Removing unreachable block (ram,0x00010cac) */

int loop_multi_exit(int target)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
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
 iVar3 = 0;
 piVar2 = matrix[0];
 do {
 /* Unresolved local var: int j@[???] */
 iVar4 = 0;
 piVar1 = piVar2;
 do {
 if (*piVar1 == target) {
 return iVar3 * 10 + iVar4;
 }
 iVar4 = iVar4 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar4 != 4);
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 4;
 } while (iVar3 != 3);
 return -1;
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



/* Function: multi_return @ 00010d18 */

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



/* Function: conditional_return @ 00010d48 */

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



/* Function: duffs_device @ 00010d60 */

int duffs_device(int *dst,int *src,int n)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int *piVar5;
 
 /* Unresolved local var: int count@[???] */
 if (0 < n) {
 iVar3 = n + 7 >> 3;
 piVar2 = src;
 piVar1 = src;
 piVar5 = dst;
 piVar4 = dst;
 switch(n & 7) {
 case 1:
 while( true ) {
 iVar3 = iVar3 + -1;
 *dst = *src;
 if (iVar3 == 0) break;
 src = src + 1;
 dst = dst + 1;
switchD_00010d80_default:
 piVar1 = src + 1;
 piVar4 = dst + 1;
 *dst = *src;
switchD_00010d80_caseD_7:
 piVar2 = piVar1 + 1;
 piVar5 = piVar4 + 1;
 *piVar4 = *piVar1;
switchD_00010d80_caseD_6:
 src = piVar2 + 1;
 dst = piVar5 + 1;
 *piVar5 = *piVar2;
switchD_00010d80_caseD_5:
 piVar2 = src + 1;
 piVar5 = dst + 1;
 *dst = *src;
switchD_00010d80_caseD_4:
 src = piVar2 + 1;
 dst = piVar5 + 1;
 *piVar5 = *piVar2;
switchD_00010d80_caseD_3:
 piVar2 = src + 1;
 piVar5 = dst + 1;
 *dst = *src;
switchD_00010d80_caseD_2:
 src = piVar2 + 1;
 dst = piVar5 + 1;
 *piVar5 = *piVar2;
 }
 break;
 case 2:
 goto switchD_00010d80_caseD_2;
 case 3:
 goto switchD_00010d80_caseD_3;
 case 4:
 goto switchD_00010d80_caseD_4;
 case 5:
 goto switchD_00010d80_caseD_5;
 case 6:
 goto switchD_00010d80_caseD_6;
 case 7:
 goto switchD_00010d80_caseD_7;
 default:
 goto switchD_00010d80_default;
 }
 return n;
 }
 return -1;
}



/* Function: loop_complex_cond @ 00010e00 */

int loop_complex_cond(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 _Bool bVar4;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[DW_OP_reg0(r0)]
 Unresolved local var: int c@[???] */
 iVar3 = 0;
 while( true ) {
 iVar2 = x - iVar3;
 bVar4 = SBORROW4(iVar3,9);
 iVar1 = iVar3 + -9;
 if (iVar3 < 10) {
 bVar4 = SBORROW4(iVar3 * 2,iVar2);
 iVar1 = iVar3 * 2 - iVar2;
 }
 if (iVar1 < 0 == bVar4) break;
 iVar3 = iVar3 + 1;
 }
 return iVar3 * 3 + iVar2;
}



/* Function: loop_modify_var @ 00010e2c */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 }
 return iVar1;
}



/* Function: loop_external_state @ 00010e54 */

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



/* Function: tail_recursion @ 00010e78 */

int tail_recursion(int n,int acc)

{
 for (; 1 < n; n = n + -1) {
 acc = n * acc;
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00010e94 */

int indirect_recursion_a(int n,int depth)

{
 do {
 if (depth < 1) {
 return n;
 }
 if ((n & 1U) == 0) {
 if (depth == 1) {
 return n / 2;
 }
 n = n / 2 + 1;
 }
 else {
 if (depth == 1) {
 return n * 3 + 1;
 }
 n = n * 3 + 2;
 }
 depth = depth + -2;
 } while( true );
}



/* Function: call_func_ptr @ 00010edc */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010ee4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00010ee8 */

/* WARNING: Removing unreachable block (ram,0x00010f34) */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 _func_int_int *funcs [3];
 
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((uint)idx < 3) {
 /* WARNING: Could not recover jumptable at 0x00010f50. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*funcs[idx])(x);
 return iVar1;
 }
 return -1;
}



/* Function: call_virtual_func @ 00010f80 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00010f88 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = (*cb)(arr[iVar2]);
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00010fc4 */

/* WARNING: Removing unreachable block (ram,0x000111e8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 puts(&DAT_00011c2d);
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
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 iVar1 = indirect_recursion_a(6,1);
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



/* Function: non_local_jump @ 0001123c */

int non_local_jump(int x)

{
 int iVar1;
 int uVar2;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (x < 0) {
 uVar2 = 1;
 }
 else {
 if (x < 0x65) {
 return x << 1;
 }
 uVar2 = 2;
 }
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,uVar2);
}



/* Function: cpp_exception @ 00011294 */

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



/* Function: large_jump_table @ 000112bc */

/* WARNING: Removing unreachable block (ram,0x00011320) */

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
 /* WARNING: Could not recover jumptable at 0x00011340. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*ops[op])(a,b);
 return iVar1;
 }
 return -1;
}



/* Function: conditional_func_ptr @ 0001136c */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 _func_int_int UNRECOVERED_JUMPTABLE;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 if (mode == 0) {
 UNRECOVERED_JUMPTABLE = double_value;
 }
 else {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (mode != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 /* WARNING: Could not recover jumptable at 0x00011390. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar1;
}



/* Function: state_machine @ 000113a0 */

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
switchD_000113ac_caseD_2:
 return state;
 case 2:
 goto switchD_000113ac_caseD_2;
 case 3:
 if (event == 0) {
 state = 0;
 }
 return state;
 default:
 return 3;
 }
}



/* Function: fsm_func_table @ 00011404 */

/* WARNING: Removing unreachable block (ram,0x00011454) */

int fsm_func_table(int event,int state)

{
 int iVar1;
 _func_int_int *state_handlers [4];
 
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ((uint)state < 4) {
 /* WARNING: Could not recover jumptable at 0x00011470. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*state_handlers[state])(event);
 return iVar1;
 }
 return 3;
}



/* Function: computed_goto @ 0001149c */

/* WARNING: Variable defined which should be unmapped: targets */
/* WARNING: Removing unreachable block (ram,0x000114f8) */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 code targets [4];
 
 targets[0] = &DAT_000114dc;
 targets[1] = &DAT_000114fc;
 targets[2] = &DAT_00011504;
 targets[3] = &DAT_0001150c;
 if (3 < (uint)idx) {
 return -1;
 }
 /* WARNING: Could not recover jumptable at 0x000114d8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*targets[idx])();
 return iVar1;
}



/* Function: obfuscated_cf @ 00011524 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 0001152c */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00011534 */

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



/* Function: test_control_flow_l3 @ 0001154c */

/* WARNING: Variable defined which should be unmapped: labels */
/* WARNING: Removing unreachable block (ram,0x00011694) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int labels [4];
 
 puts(&DAT_00011e20);
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
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
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




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00011914 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
