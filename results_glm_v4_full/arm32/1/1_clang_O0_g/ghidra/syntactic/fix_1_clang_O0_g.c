/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* Ghidra type definitions */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef int (*code)(int);

/* ARM compiler intrinsics */
extern int __divsi3(int a, int b);
extern int __aeabi_idivmod(int a, int b);

/* Forward declarations */
int triple_value(int x);
int double_value(int x);
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

/* Global variables and data references */
jmp_buf jump_buffer;
const char DAT_00012c7c[] = "";
const char DAT_00012eea[] = "";
const char DAT_000130de[] = "";
const char DAT_00012620 = 0;
const char DAT_00012614 = 0;
const char DAT_00012608 = 0;
const char DAT_000125fc = 0;


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00010698 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[DW_OP_breg13(sp): +8]
 Unresolved local var: int temp2@[DW_OP_breg13(sp): +4]
 Unresolved local var: int temp3@[DW_OP_breg13(sp): 0] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 000106e0 */

int single_if(int x)

{
 undefined4 local_4;
 
 local_4 = x;
 if (0 < x) {
 local_4 = x << 1;
 }
 return local_4;
}



/* Function: if_else @ 00010714 */

int if_else(int x)

{
 uint local_4;
 
 local_4 = (uint)(0 < x);
 return local_4;
}



/* Function: nested_if_2 @ 00010750 */

int nested_if_2(int a,int b)

{
 int local_4;
 
 if (a < 1) {
 local_4 = 0;
 }
 else {
 local_4 = a;
 if (0 < b) {
 local_4 = a + b;
 }
 }
 return local_4;
}



/* Function: nested_if_deep @ 000107b4 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 undefined4 local_4;
 
 if (a < 1) {
 local_4 = 0;
 }
 else if (b < 1) {
 local_4 = 1;
 }
 else if (c < 1) {
 local_4 = 2;
 }
 else if (d < 1) {
 local_4 = 3;
 }
 else if (e < 1) {
 local_4 = 4;
 }
 else {
 local_4 = 5;
 }
 return local_4;
}



/* Function: if_elseif_chain @ 00010870 */

int if_elseif_chain(int x)

{
 undefined4 local_4;
 
 if (x == 0) {
 local_4 = 10;
 }
 else if (x == 1) {
 local_4 = 0x14;
 }
 else if (x == 2) {
 local_4 = 0x1e;
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: if_elseif_long @ 000108e4 */

int if_elseif_long(int x)

{
 undefined4 local_4;
 
 if (x == 0) {
 local_4 = 100;
 }
 else if (x == 1) {
 local_4 = 200;
 }
 else if (x == 2) {
 local_4 = 300;
 }
 else if (x == 3) {
 local_4 = 400;
 }
 else if (x == 4) {
 local_4 = 500;
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: switch_small @ 00010990 */

int switch_small(int op)

{
 int local_c;
 
 /* Unresolved local var: int a@[DW_OP_breg13(sp): +12]
 Unresolved local var: int b@[DW_OP_breg13(sp): +8] */
 switch(op) {
 case 0:
 local_c = 0xf;
 break;
 case 1:
 local_c = 5;
 break;
 case 2:
 local_c = 0x32;
 break;
 case 3:
 local_c = __divsi3(10,5);
 break;
 default:
 local_c = -1;
 }
 return local_c;
}



/* Function: switch_large @ 00010a4c */

int switch_large(int op)

{
 int local_4;
 
 switch(op) {
 case 0:
 local_4 = 0;
 break;
 case 1:
 local_4 = 10;
 break;
 case 2:
 local_4 = 0x14;
 break;
 case 3:
 local_4 = 0x1e;
 break;
 case 4:
 local_4 = 0x28;
 break;
 case 5:
 local_4 = 0x32;
 break;
 case 6:
 local_4 = 0x3c;
 break;
 case 7:
 local_4 = 0x46;
 break;
 case 8:
 local_4 = 0x50;
 break;
 case 9:
 local_4 = 0x5a;
 break;
 default:
 local_4 = -1;
 }
 return local_4;
}



/* Function: switch_default @ 00010b2c */

int switch_default(int op)

{
 undefined4 local_4;
 
 if (op == 1) {
 local_4 = 100;
 }
 else if (op == 2) {
 local_4 = 200;
 }
 else if (op == 3) {
 local_4 = 300;
 }
 else {
 local_4 = 0;
 }
 return local_4;
}



/* Function: switch_fallthrough @ 00010ba4 */

int switch_fallthrough(int op)

{
 int local_8;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 local_8 = 0;
 if (op != 1) {
 if (op != 2) {
 if (op != 3) {
 return -1;
 }
 local_8 = 0xc;
 }
 local_8 = local_8 + op * 2;
 }
 return local_8 + op;
}



/* Function: loop_for_fixed @ 00010c3c */

int loop_for_fixed(int n)

{
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_8 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_c = 0; local_c < n; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 }
 return local_8;
}



/* Function: loop_while @ 00010c98 */

int loop_while(int x)

{
 undefined4 local_c;
 undefined4 local_8;
 undefined4 local_4;
 
 /* Unresolved local var: int count@[DW_OP_breg13(sp): +4] */
 local_8 = 0;
 for (local_4 = x; local_4 != 0; local_4 = local_4 / 10) {
 local_8 = local_8 + 1;
 }
 if (local_8 < 1) {
 local_c = 1;
 }
 else {
 local_c = local_8;
 }
 return local_c;
}



/* Function: loop_dowhile @ 00010d1c */

int loop_dowhile(int x)

{
 undefined4 local_8;
 undefined4 local_4;
 
 /* Unresolved local var: int count@[DW_OP_breg13(sp): 0] */
 local_8 = 0;
 local_4 = x;
 do {
 local_4 = local_4 / 10;
 local_8 = local_8 + 1;
 } while (local_4 != 0);
 return local_8;
}



/* Function: loop_nested @ 00010d78 */

int loop_nested(int m,int n)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 /* Unresolved local var: int total@[DW_OP_breg13(sp): +8] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_10 = 0; local_10 < m; local_10 = local_10 + 1) {
 /* Unresolved local var: int j@[DW_OP_breg13(sp): 0] */
 for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
 local_c = local_c + 1;
 }
 }
 return local_c;
}



/* Function: loop_break @ 00010e08 */

int loop_break(int target)

{
 int local_34;
 int local_2c [7];
 
 /* Unresolved local var: int[5] arr@[DW_OP_breg13(sp): +8]
 Unresolved local var: int n@[DW_OP_breg13(sp): +4] */
 local_2c[5] = target;
 local_2c[0] = 10;
 local_2c[1] = 0x14;
 local_2c[2] = 0x1e;
 local_2c[3] = 0x28;
 local_2c[4] = 0x32;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 local_34 = 0;
 while( true ) {
 if (4 < local_34) {
 return -1;
 }
 if (local_2c[local_34] == target) break;
 local_34 = local_34 + 1;
 }
 return local_34;
}



/* Function: loop_continue @ 00010eb0 */

int loop_continue(int n)

{
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_8 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_c = 1; local_c <= n; local_c = local_c + 1) {
 if (local_c % 2 != 0) {
 local_8 = local_8 + local_c;
 }
 }
 return local_8;
}



/* Function: goto_forward @ 00010f30 */

int goto_forward(int x)

{
 int local_8;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
 local_8 = x;
 if (0 < x) {
 local_8 = x * x;
 }
 return local_8 << 1;
}



/* Function: goto_backward @ 00010f80 */

int goto_backward(int x)

{
 undefined4 local_10;
 undefined4 local_c;
 undefined4 local_4;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +4]
 Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 if (x < 1) {
 local_4 = 1;
 }
 else {
 local_c = 1;
 for (local_10 = 1; local_10 <= x; local_10 = local_10 + 1) {
 local_c = local_c * local_10;
 }
 local_4 = local_c;
 }
 return local_4;
}



/* Function: ternary_op @ 00011004 */

int ternary_op(int a,int b)

{
 int local_c;
 
 local_c = b;
 if (b < a) {
 local_c = a;
 }
 return local_c;
}



/* Function: test_control_flow_l1 @ 00011048 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 printf(&DAT_00012c7c);
 iVar1 = sequential_ops(5,7,3);
 printf("CF-L1-01 (sequential_ops): %d\n",iVar1);
 iVar1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n",iVar1);
 iVar1 = single_if(-5);
 printf("CF-L1-02 (single_if): %d\n",iVar1);
 iVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",iVar1);
 iVar1 = if_else(-3);
 printf("CF-L1-03 (if_else): %d\n",iVar1);
 iVar1 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",iVar1);
 iVar1 = nested_if_2(10,-5);
 printf("CF-L1-04 (nested_if_2): %d\n",iVar1);
 iVar1 = nested_if_2(-10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",iVar1);
 iVar1 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",iVar1);
 iVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",iVar1);
 iVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",iVar1);
 iVar1 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n",iVar1);
 iVar1 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",iVar1);
 iVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",iVar1);
 iVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",iVar1);
 iVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",iVar1);
 iVar1 = loop_while(0x3039);
 printf("CF-L1-13 (loop_while): %d\n",iVar1);
 iVar1 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",iVar1);
 iVar1 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",iVar1);
 iVar1 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",iVar1);
 iVar1 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",iVar1);
 iVar1 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",iVar1);
 iVar1 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",iVar1);
 iVar1 = goto_forward(-3);
 printf("CF-L1-18 (goto_forward): %d\n",iVar1);
 iVar1 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",iVar1);
 iVar1 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",iVar1);
 iVar1 = ternary_op(3,8);
 printf("CF-L1-20 (ternary_op): %d\n",iVar1);
 return;
}



/* Function: loop_multi_exit @ 0001139c */

int loop_multi_exit(int target)

{
 int local_50;
 int local_4c;
 int local_48 [14];
 
 /* Unresolved local var: int[3][4] matrix@[DW_OP_breg13(sp): +8] */
 local_48[0xc] = target;
 local_48[0] = 1;
 local_48[1] = 2;
 local_48[2] = 3;
 local_48[3] = 4;
 local_48[4] = 5;
 local_48[5] = 6;
 local_48[6] = 7;
 local_48[7] = 8;
 local_48[8] = 9;
 local_48[9] = 10;
 local_48[10] = 0xb;
 local_48[0xb] = 0xc;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 local_4c = 0;
 do {
 if (2 < local_4c) {
 return -1;
 }
 /* Unresolved local var: int j@[DW_OP_breg13(sp): 0] */
 for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
 if (local_48[local_4c * 4 + local_50] == target) {
 return local_50 + local_4c * 10;
 }
 }
 local_4c = local_4c + 1;
 } while( true );
}



/* Function: infinite_loop @ 00011484 */

int infinite_loop(int *flag)

{
 int local_8;
 
 /* Unresolved local var: int count@[DW_OP_breg13(sp): 0] */
 local_8 = 0;
 do {
 if (*flag == 1) {
 return local_8;
 }
 local_8 = local_8 + 1;
 } while (local_8 < 0x3e9);
 *flag = 1;
 return local_8;
}



/* Function: multi_return @ 000114ec */

int multi_return(int x)

{
 undefined4 local_4;
 
 /* Unresolved local var: int temp@[DW_OP_breg13(sp): 0] */
 if ((uint)x < 0x80000000) {
 local_4 = x << 1;
 if (local_4 < 0x65) {
 if (x % 2 != 0) {
 local_4 = x + 1;
 }
 }
 else {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: conditional_return @ 0001157c */

int conditional_return(int x)

{
 undefined4 local_c;
 undefined4 local_8;
 
 if (x < 1) {
 if ((uint)x < 0x80000000) {
 local_c = 0;
 }
 else {
 local_c = -x;
 }
 local_8 = local_c;
 }
 else {
 local_8 = x << 1;
 }
 return local_8;
}



/* Function: duffs_device @ 000115e8 */

int duffs_device(int *dst,int *src,int n)

{
 int local_14;
 int *local_c;
 int *local_8;
 int local_4;
 
 /* Unresolved local var: int count@[DW_OP_breg13(sp): +4] */
 if (n < 1) {
 local_4 = -1;
 }
 else {
 local_14 = (int)(n + 7 + ((uint)(n + 7 >> 0x1f) >> 0x1d)) >> 3;
 local_c = src;
 local_8 = dst;
 local_4 = n;
 switch(n % 8) {
 case 0:
 local_c = src;
 local_8 = dst;
 do {
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_7:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_6:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_5:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_4:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_3:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_2:
 *local_8 = *local_c;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
switchD_00011658_caseD_1:
 *local_8 = *local_c;
 local_14 = local_14 + -1;
 local_c = local_c + 1;
 local_8 = local_8 + 1;
 } while (0 < local_14);
 break;
 case 1:
 goto switchD_00011658_caseD_1;
 case 2:
 goto switchD_00011658_caseD_2;
 case 3:
 goto switchD_00011658_caseD_3;
 case 4:
 goto switchD_00011658_caseD_4;
 case 5:
 goto switchD_00011658_caseD_5;
 case 6:
 goto switchD_00011658_caseD_6;
 case 7:
 goto switchD_00011658_caseD_7;
 }
 }
 return local_4;
}



/* Function: loop_complex_cond @ 000117d4 */

int loop_complex_cond(int x)

{
 bool bVar1;
 int local_10;
 int local_c;
 int local_8;
 
 /* Unresolved local var: int a@[DW_OP_breg13(sp): +12]
 Unresolved local var: int b@[DW_OP_breg13(sp): +8]
 Unresolved local var: int c@[DW_OP_breg13(sp): +4] */
 local_8 = 0;
 local_10 = 0;
 local_c = x;
 while( true ) {
 bVar1 = false;
 if ((local_8 < local_c) && (bVar1 = false, local_10 < 10)) {
 bVar1 = 0 < local_c;
 }
 if (!bVar1) break;
 local_8 = local_8 + 2;
 local_c = local_c + -1;
 local_10 = local_10 + 1;
 }
 return local_8 + local_c + local_10;
}



/* Function: loop_modify_var @ 00011894 */

int loop_modify_var(int n)

{
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_8 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_c = 0; local_c < n; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 if (5 < local_c) {
 local_c = local_c + 2;
 }
 }
 return local_8;
}



/* Function: loop_external_state @ 00011910 */

int loop_external_state(int *flag)

{
 int local_8;
 
 /* Unresolved local var: int count@[DW_OP_breg13(sp): 0] */
 local_8 = 0;
 do {
 if (*flag != 0) {
 return local_8;
 }
 local_8 = local_8 + 1;
 } while (local_8 < 0x65);
 return local_8;
}



/* Function: recursion_factorial @ 00011968 */

int recursion_factorial(int n)

{
 undefined4 local_c;
 
 if (n < 2) {
 local_c = 1;
 }
 else {
 local_c = recursion_factorial(n + -1);
 local_c = n * local_c;
 }
 return local_c;
}



/* Function: tail_recursion @ 000119c8 */

int tail_recursion(int n,int acc)

{
 undefined4 local_c;
 
 local_c = acc;
 if (1 < n) {
 local_c = tail_recursion(n + -1,n * acc);
 }
 return local_c;
}



/* Function: indirect_recursion_a @ 00011a24 */

int indirect_recursion_a(int n,int depth)

{
 undefined4 local_c;
 
 local_c = n;
 if (0 < depth) {
 if (n % 2 == 0) {
 local_c = indirect_recursion_b(n / 2,depth + -1);
 }
 else {
 local_c = indirect_recursion_b(n * 3 + 1,depth + -1);
 }
 }
 return local_c;
}



/* Function: indirect_recursion_b @ 00011ac0 */

int indirect_recursion_b(int n,int depth)

{
 undefined4 local_c;
 
 local_c = n;
 if (0 < depth) {
 local_c = indirect_recursion_a(n + 1,depth + -1);
 }
 return local_c;
}



/* Function: call_func_ptr @ 00011b1c */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00011b4c */

int call_func_ptr_array(int idx,int x)

{
 _func_int_int local_20[3];
 int local_14;
 int local_10;
 int local_c;
 
 /* Unresolved local var: _func_int_int *[3] funcs@[DW_OP_breg13(sp): 0] */
 local_10 = idx;
 local_14 = x;
 local_20[2] = recursion_factorial;
 local_20[1] = triple_value;
 local_20[0] = double_value;
 if ((idx < 0) || (2 < idx)) {
 local_c = -1;
 }
 else {
 local_c = (*local_20[idx])(x);
 }
 return local_c;
}



/* Function: double_value @ 00011be8 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00011c00 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 00011c18 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00011c34 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int local_1c;
 int local_18;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +8] */
 local_18 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_1c = 0; local_1c < n; local_1c = local_1c + 1) {
 iVar1 = (*cb)(arr[local_1c]);
 local_18 = local_18 + iVar1;
 }
 return local_18;
}



/* Function: test_control_flow_l2 @ 00011cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int local_74;
 undefined4 uStack_70;
 undefined4 uStack_6c;
 undefined4 uStack_68;
 undefined4 uStack_64;
 int local_60 [10];
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 int local_1c;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[DW_OP_breg13(sp): +60]
 Unresolved local var: int ext_flag@[DW_OP_breg13(sp): +56]
 Unresolved local var: int[5] arr@[DW_OP_breg13(sp): +36] */
 printf(&DAT_00012eea);
 iVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar1);
 local_1c = 0;
 iVar1 = infinite_loop(&local_1c);
 printf("CF-L2-02 (infinite_loop): %d\n",iVar1);
 iVar1 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n",iVar1);
 iVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",iVar1);
 iVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",iVar1);
 iVar1 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",iVar1);
 iVar1 = conditional_return(-5);
 printf("CF-L2-04 (conditional_return): %d\n",iVar1);
 local_60[9] = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 local_60[8] = 0;
 local_60[7] = 0;
 local_60[6] = 0;
 local_60[5] = 0;
 local_60[4] = 0;
 local_60[3] = 0;
 local_60[2] = 0;
 local_60[1] = 0;
 iVar1 = duffs_device(local_60 + 1,local_60 + 9,8);
 printf("CF-L2-05 (duffs_device): %d\n",iVar1);
 iVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar1);
 iVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",iVar1);
 local_60[0] = 0;
 iVar1 = loop_external_state(local_60);
 printf("CF-L2-08 (loop_external_state): %d\n",iVar1);
 iVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",iVar1);
 iVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",iVar1);
 iVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",iVar1);
 iVar1 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",iVar1);
 iVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",iVar1);
 iVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",iVar1);
 local_74 = 1;
 uStack_70 = 2;
 uStack_6c = 3;
 uStack_68 = 4;
 uStack_64 = 5;
 iVar1 = process_with_callback(&local_74,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",iVar1);
 return;
}



/* Function: non_local_jump @ 00011f78 */

int non_local_jump(int x)

{
 int iVar1;
 int local_c;
 
	iVar1 = setjmp(jump_buffer);
	if (iVar1 == 0) {
	if (0x7fffffff < (uint)x) {
	/* WARNING: Subroutine does not return */
	longjmp(jump_buffer,1);
	}
	if (100 < x) {
	/* WARNING: Subroutine does not return */
	longjmp(jump_buffer,2);
	}
 local_c = x << 1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: cpp_exception @ 00012018 */

int cpp_exception(int x)

{
 undefined4 local_4;
 
 if ((uint)x < 0x80000000) {
 if (x < 0x65) {
 local_4 = x << 1;
 }
 else {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: large_jump_table @ 00012074 */

int large_jump_table(int op,int a,int b)

{
 _func_int_int_int apcStack_48[10];
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 
 /* Unresolved local var: _func_int_int_int *[10] ops@[DW_OP_breg13(sp): 0] */
 local_18 = op;
 local_1c = a;
 local_20 = b;
 apcStack_48[0] = op_add;
 apcStack_48[1] = op_sub;
 apcStack_48[2] = op_mul;
 apcStack_48[3] = op_div;
 apcStack_48[4] = op_mod;
 apcStack_48[5] = op_and;
 apcStack_48[6] = op_or;
 apcStack_48[7] = op_xor;
 apcStack_48[8] = op_shl;
 apcStack_48[9] = op_shr;
 if ((op < 0) || (9 < op)) {
 local_14 = -1;
 }
 else {
 local_14 = (*apcStack_48[op])(a,b);
 }
 return local_14;
}



/* Function: op_add @ 0001210c */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 0001212c */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 0001214c */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 0001216c */

int op_div(int a,int b)

{
 undefined4 local_14;
 
 if (b == 0) {
 local_14 = 0;
 }
 else {
 local_14 = __divsi3(a,b);
 }
 return local_14;
}



/* Function: op_mod @ 000121c0 */

int op_mod(int a,int b)

{
 undefined4 local_14;
 
 if (b == 0) {
 local_14 = 0;
 }
 else {
 local_14 = a % b;
 }
 return local_14;
}



/* Function: op_and @ 00012214 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00012234 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00012254 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00012274 */

int op_shl(int a,int b)

{
 return a << (b & 0xffU);
}



/* Function: op_shr @ 00012294 */

int op_shr(int a,int b)

{
 return a >> (b & 0xffU);
}



/* Function: conditional_func_ptr @ 000122b4 */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 code *local_14;
 
 /* Unresolved local var: _func_int_int * func@[DW_OP_breg13(sp): +4] */
 if (mode == 0) {
 local_14 = double_value;
 }
 else if (mode == 1) {
 local_14 = triple_value;
 }
 else {
 local_14 = recursion_factorial;
 }
 iVar1 = (*local_14)(x);
 return iVar1;
}



/* Function: state_machine @ 00012344 */

int state_machine(int event,int state)

{
 int local_4;
 
 switch(state) {
 case 0:
 if (event == 1) {
 local_4 = 1;
 }
 else {
 local_4 = 0;
 }
 break;
 case 1:
 if (event == 2) {
 local_4 = 2;
 }
 else if (event == 99) {
 local_4 = 3;
 }
 else {
 local_4 = 1;
 }
 break;
 case 2:
 local_4 = 2;
 break;
 case 3:
 if (event == 0) {
 local_4 = 0;
 }
 else {
 local_4 = 3;
 }
 break;
 default:
 local_4 = 3;
 }
 return local_4;
}



/* Function: fsm_func_table @ 00012438 */

int fsm_func_table(int event,int state)

{
 _func_int_int local_24 [4];
 int local_14;
 int local_10;
 int local_c;
 
 /* Unresolved local var: _func_int_int *[4] state_handlers@[DW_OP_breg13(sp):
 +4] */
 local_10 = event;
 local_14 = state;
 local_24[3] = state_error;
 local_24[2] = state_done;
 local_24[1] = state_processing;
 local_24[0] = state_idle;
 if ((state < 0) || (3 < state)) {
 local_c = 3;
 }
 else {
 local_c = (*local_24[state])(event);
 }
 return local_c;
}



/* Function: state_idle @ 000124dc */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 000124fc */

int state_processing(int event)

{
 undefined4 local_4;
 
 if (event == 2) {
 local_4 = 2;
 }
 else if (event == 99) {
 local_4 = 3;
 }
 else {
 local_4 = 1;
 }
 return local_4;
}



/* Function: state_done @ 00012554 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00012568 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: computed_goto @ 00012584 */

int computed_goto(int *labels,int idx)

{
 void *local_1c [4];
 int local_c;
 int *local_8;
 
 /* Unresolved local var: void *[4] targets@[DW_OP_breg13(sp): +4] */
 local_8 = labels;
 local_c = idx;
 local_1c[3] = &DAT_00012620;
 local_1c[2] = &DAT_00012614;
 local_1c[1] = &DAT_00012608;
 local_1c[0] = &DAT_000125fc;
 if ((-1 < idx) && (idx < 4)) {
 /* WARNING: Could not recover jumptable at 0x0001263c. Too many branches */
 /* Simulated computed goto - return success if index valid */
 return 0;
 }
 return -1;
}



/* Function: obfuscated_cf @ 00012648 */

int obfuscated_cf(int x)

{
 undefined4 local_8;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
 local_8 = x;
 if (x * x == -2 || x * x + 1 < -1) {
 local_8 = x << 1 | 1;
 }
 return local_8 << 1;
}



/* Function: opaque_predicate @ 0001269c */

/* WARNING: Removing unreachable block (ram,0x000126cc) */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[DW_OP_breg13(sp): 0] */
 return x << 1;
}



/* Function: overlapped_code @ 000126e8 */

int overlapped_code(int x)

{
 undefined4 local_4;
 
 if ((x & 1U) == 0) {
 local_4 = x / 2;
 }
 else {
 local_4 = x * 3 + 1;
 }
 return local_4;
}



/* Function: test_control_flow_l3 @ 00012734 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 /* Unresolved local var: int[4] labels@[???] */
 printf(&DAT_000130de);
 iVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",iVar1);
 iVar1 = cpp_exception(-5);
 printf("CF-L3-02 (cpp_exception): %d\n",iVar1);
 iVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",iVar1);
 iVar1 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",iVar1);
 iVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",iVar1);
 iVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",iVar1);
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 local_18 = 0;
 iVar1 = computed_goto(&local_18,2);
 printf("CF-L3-07 (computed_goto): %d\n",iVar1);
 iVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",iVar1);
 iVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",iVar1);
 iVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",iVar1);
 return;
}



/* Function: main @ 00012904 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function __divsi3 removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */





/* CRT stub function __aeabi_ldiv0 removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
