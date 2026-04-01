/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_gcc_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>

/* Function pointer type definitions */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);

/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */


/* Data references (string literals from binary) */
char DAT_00012aa8[] = "Control Flow Level 1 Tests";
char DAT_00012d6c[] = "Control Flow Level 2 Tests";
char DAT_00012fec[] = "Control Flow Level 3 Tests";
char DAT_00012468[] = "Label0";
char DAT_00012470[] = "Label1";
char DAT_00012478[] = "Label2";
char DAT_00012480[] = "Label3";

/* Jump buffer for setjmp/longjump */
jmp_buf jump_buffer;

/* Function: sequential_ops @ 000105b4 */

int sequential_ops(int a,int b,int c)

{
 int c_local;
 int b_local;
 int a_local;
 int temp1;
 int temp2;
 int temp3;
 
 return (a + b) * 2 - c;
}



/* Function: single_if @ 0001060c */

int single_if(int x)

{
 int x_local;
 
 x_local = x;
 if (0 < x) {
 x_local = x << 1;
 }
 return x_local;
}



/* Function: if_else @ 00010648 */

int if_else(int x)

{
 int x_local;
 
 return (uint)(0 < x ? 1 : 0);
}



/* Function: nested_if_2 @ 00010680 */

int nested_if_2(int a,int b)

{
 int b_local;
 int a_local;
 
 if (a < 1) {
 a = 0;
 }
 else if (0 < b) {
 a = a + b;
 }
 return a;
}



/* Function: nested_if_deep @ 000106d8 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 if (a < 1) {
 iVar1 = 0;
 }
 else if (b < 1) {
 iVar1 = 1;
 }
 else if (c < 1) {
 iVar1 = 2;
 }
 else if (d < 1) {
 iVar1 = 3;
 }
 else if (e < 1) {
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
 int x_local;
 
 if (x == 0) {
 iVar1 = 10;
 }
 else if (x == 1) {
 iVar1 = 0x14;
 }
 else if (x == 2) {
 iVar1 = 0x1e;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 000107cc */

int if_elseif_long(int x)

{
 int iVar1;
 int x_local;
 
 if (x == 0) {
 iVar1 = 100;
 }
 else if (x == 1) {
 iVar1 = 200;
 }
 else if (x == 2) {
 iVar1 = 300;
 }
 else if (x == 3) {
 iVar1 = 400;
 }
 else if (x == 4) {
 iVar1 = 500;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 00010854 */

int switch_small(int op)

{
 int iVar1;
 int op_local;
 int a;
 int b;
 
 switch(op) {
 case 0:
 iVar1 = 0xf;
 break;
 case 1:
 iVar1 = 5;
 break;
 case 2:
 iVar1 = 0x32;
 break;
 case 3:
 iVar1 = 10 / 5;
 break;
 default:
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_large @ 000108e8 */

int switch_large(int op)

{
 int iVar1;
 int op_local;
 
 switch(op) {
 case 0:
 iVar1 = 0;
 break;
 case 1:
 iVar1 = 10;
 break;
 case 2:
 iVar1 = 0x14;
 break;
 case 3:
 iVar1 = 0x1e;
 break;
 case 4:
 iVar1 = 0x28;
 break;
 case 5:
 iVar1 = 0x32;
 break;
 case 6:
 iVar1 = 0x3c;
 break;
 case 7:
 iVar1 = 0x46;
 break;
 case 8:
 iVar1 = 0x50;
 break;
 case 9:
 iVar1 = 0x5a;
 break;
 default:
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00010994 */

int switch_default(int op)

{
 int op_local;
 
 if (op == 3) {
 return 300;
 }
 if (op < 4) {
 if (op == 1) {
 return 100;
 }
 if (op == 2) {
 return 200;
 }
 }
 return 0;
}



/* Function: switch_fallthrough @ 00010a04 */

int switch_fallthrough(int op)

{
 int op_local;
 int result;
 
 result = 0;
 if (op == 3) {
 result = 0xc;
LAB_00010a64:
 result = result + op * 2;
LAB_00010a78:
 result = result + op;
 }
 else {
 if (op < 4) {
 if (op == 1) goto LAB_00010a78;
 if (op == 2) goto LAB_00010a64;
 }
 result = -1;
 }
 return result;
}



/* Function: loop_for_fixed @ 00010aa8 */

int loop_for_fixed(int n)

{
 int n_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + i;
 }
 return sum;
}



/* Function: loop_while @ 00010b0c */

int loop_while(int x)

{
 int x_local;
 int count;
 
 count = 0;
 for (x_local = x; x_local != 0; x_local = x_local / 10) {
 count = count + 1;
 }
 if (count < 1) {
 count = 1;
 }
 return count;
}



/* Function: loop_dowhile @ 00010b80 */

int loop_dowhile(int x)

{
 int x_local;
 int count;
 
 count = 0;
 x_local = x;
 do {
 x_local = x_local / 10;
 count = count + 1;
 } while (x_local != 0);
 return count;
}



/* Function: loop_nested @ 00010be4 */

int loop_nested(int m,int n)

{
 int n_local;
 int m_local;
 int total;
 int i;
 int j;
 
 total = 0;
 for (i = 0; i < m; i = i + 1) {
 for (j = 0; j < n; j = j + 1) {
 total = total + 1;
 }
 }
 return total;
}



/* Function: loop_break @ 00010c70 */

/* WARNING: Removing unreachable block (ram,0x00010d20) */

int loop_break(int target)

{
 int target_local;
 int i;
 int n;
 int arr [5];
 
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 i = 0;
 while(1) {
 if (4 < i) {
 return -1;
 }
 if (target == arr[i]) break;
 i = i + 1;
 }
 return i;
}



/* Function: loop_continue @ 00010d38 */

int loop_continue(int n)

{
 int n_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 1; i <= n; i = i + 1) {
 if ((i & 1U) != 0) {
 sum = sum + i;
 }
 }
 return sum;
}



/* Function: goto_forward @ 00010db4 */

int goto_forward(int x)

{
 int x_local;
 int result;
 
 result = x;
 if (0 < x) {
 result = x * x;
 }
 return result << 1;
}



/* Function: goto_backward @ 00010e10 */

int goto_backward(int x)

{
 int x_local;
 int result;
 int i;
 
 if (x < 1) {
 result = 1;
 }
 else {
 result = 1;
 for (i = 1; i <= x; i = i + 1) {
 result = i * result;
 }
 }
 return result;
}



/* Function: ternary_op @ 00010e8c */

int ternary_op(int a,int b)

{
 int b_local;
 int a_local;
 
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00010ec4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_00012aa8);
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



/* Function: loop_multi_exit @ 000111fc */

/* WARNING: Removing unreachable block (ram,0x000112f4) */

int loop_multi_exit(int target)

{
 int target_local;
 int i;
 int j;
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
 i = 0;
 do {
 if (2 < i) {
 return -1;
 }
 for (j = 0; j < 4; j = j + 1) {
 if (target == matrix[i][j]) {
 return i * 10 + j;
 }
 }
 i = i + 1;
 } while( true );
}



/* Function: infinite_loop @ 0001130c */

int infinite_loop(int *flag)

{
 int *flag_local;
 int count;
 
 count = 0;
 do {
 if (*flag == 1) {
 return count;
 }
 count = count + 1;
 } while (count < 0x3e9);
 *flag = 1;
 return count;
}



/* Function: multi_return @ 00011374 */

int multi_return(int x)

{
 int iVar1;
 int x_local;
 int temp;
 
 if (x < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = x << 1;
 if (iVar1 < 0x65) {
 if ((x & 1U) != 0) {
 iVar1 = x + 1;
 }
 }
 else {
 iVar1 = -2;
 }
 }
 return iVar1;
}



/* Function: conditional_return @ 000113e8 */

int conditional_return(int x)

{
 int iVar1;
 int x_local;
 
 if (x < 1) {
 if (x < 0) {
 iVar1 = -x;
 }
 else {
 iVar1 = 0;
 }
 }
 else {
 iVar1 = x << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 0001143c */

int duffs_device(int *dst,int *src,int n)

{
 int iVar1;
 uint uVar2;
 int n_local;
 int *src_local;
 int *dst_local;
 int count;
 
 if (n < 1) {
 n = -1;
 }
 else {
 iVar1 = n + 0xe;
 if (-1 < n + 7) {
 iVar1 = n + 7;
 }
 count = iVar1 >> 3;
 uVar2 = n & 7;
 if (-1 < -n) {
 uVar2 = -(-n & 7U);
 }
 src_local = src;
 dst_local = dst;
 switch(uVar2) {
 case 0:
 do {
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
switchD_000114a0_caseD_7:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
switchD_000114a0_caseD_6:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
switchD_000114a0_caseD_5:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
switchD_000114a0_caseD_4:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
switchD_000114a0_caseD_3:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
switchD_000114a0_caseD_2:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
switchD_000114a0_caseD_1:
 *dst_local = *src_local;
 count = count + -1;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
 } while (0 < count);
 break;
 case 1:
 goto switchD_000114a0_caseD_1;
 case 2:
 goto switchD_000114a0_caseD_2;
 case 3:
 goto switchD_000114a0_caseD_3;
 case 4:
 goto switchD_000114a0_caseD_4;
 case 5:
 goto switchD_000114a0_caseD_5;
 case 6:
 goto switchD_000114a0_caseD_6;
 case 7:
 goto switchD_000114a0_caseD_7;
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 000115f8 */

int loop_complex_cond(int x)

{
 int x_local;
 int a;
 int b;
 int c;
 
 a = 0;
 c = 0;
 for (b = x; ((a < b && (c < 10)) && (0 < b)); b = b + -1) {
 a = a + 2;
 c = c + 1;
 }
 return a + b + c;
}



/* Function: loop_modify_var @ 00011694 */

int loop_modify_var(int n)

{
 int n_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + i;
 if (5 < i) {
 i = i + 2;
 }
 }
 return sum;
}



/* Function: loop_external_state @ 00011710 */

int loop_external_state(int *flag)

{
 int *flag_local;
 int count;
 
 count = 0;
 do {
 if (*flag != 0) {
 return count;
 }
 count = count + 1;
 } while (count < 0x65);
 return count;
}



/* Function: recursion_factorial @ 00011770 */

int recursion_factorial(int n)

{
 int iVar1;
 int n_local;
 
 if (n < 2) {
 iVar1 = 1;
 }
 else {
 iVar1 = recursion_factorial(n + -1);
 iVar1 = iVar1 * n;
 }
 return iVar1;
}



/* Function: tail_recursion @ 000117bc */

int tail_recursion(int n,int acc)

{
 int acc_local;
 int n_local;
 
 if (1 < n) {
 acc = tail_recursion(n + -1,acc * n);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011810 */

int indirect_recursion_a(int n,int depth)

{
 int depth_local;
 int n_local;
 
 if (0 < depth) {
 if ((n & 1U) == 0) {
 n = indirect_recursion_b(n / 2,depth + -1);
 }
 else {
 n = indirect_recursion_b(n * 3 + 1,depth + -1);
 }
 }
 return n;
}



/* Function: indirect_recursion_b @ 000118b0 */

int indirect_recursion_b(int n,int depth)

{
 int depth_local;
 int n_local;
 
 if (0 < depth) {
 n = indirect_recursion_a(n + 1,depth + -1);
 }
 return n;
}



/* Function: call_func_ptr @ 00011904 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 int x_local;
 _func_int_int *f_local;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: double_value @ 00011934 */

int double_value(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: triple_value @ 0001195c */

int triple_value(int x)

{
 int x_local;
 
 return x * 3;
}



/* Function: call_func_ptr_array @ 0001198c */

/* WARNING: Removing unreachable block (ram,0x00011a18) */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 int x_local;
 int idx_local;
 _func_int_int *funcs [3];
 
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((idx < 0) || (2 < idx)) {
 iVar1 = -1;
 }
 else {
 iVar1 = (*funcs[idx])(x);
 }
 return iVar1;
}



/* Function: call_virtual_func @ 00011a30 */

int call_virtual_func(void *obj,int x)

{
 int x_local;
 void *obj_local;
 
 return x << 1;
}



/* Function: process_with_callback @ 00011a5c */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 _func_int_int *cb_local;
 int n_local;
 int *arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 iVar1 = (*cb)(arr[i]);
 sum = sum + iVar1;
 }
 return sum;
}



/* Function: test_control_flow_l2 @ 00011ae4 */

/* WARNING: Removing unreachable block (ram,0x00011d64) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 puts(&DAT_00012d6c);
 iVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar1);
 flag = 0;
 iVar1 = infinite_loop(&flag);
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
 printf("CF-L2-05 (duffs_device): %d\n",iVar1);
 iVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar1);
 iVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",iVar1);
 ext_flag = 0;
 iVar1 = loop_external_state(&ext_flag);
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
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 iVar1 = process_with_callback(arr,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",iVar1);
 return;
}



/* Function: non_local_jump @ 00011dbc */

int non_local_jump(int x)

{
 int iVar1;
 int x_local;
 
 iVar1 = _setjmp(jump_buffer);
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



/* Function: cpp_exception @ 00011e30 */

int cpp_exception(int x)

{
 int iVar1;
 int x_local;
 
 if (x < 0) {
 iVar1 = -1;
 }
 else if (x < 0x65) {
 iVar1 = x << 1;
 }
 else {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: op_add @ 00011e80 */

int op_add(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: op_sub @ 00011eb0 */

int op_sub(int a,int b)

{
 int b_local;
 int a_local;
 
 return a - b;
}



/* Function: op_mul @ 00011ee0 */

int op_mul(int a,int b)

{
 int b_local;
 int a_local;
 
 return b * a;
}



/* Function: op_div @ 00011f10 */

int op_div(int a,int b)

{
 int iVar1;
 int b_local;
 int a_local;
 
 if (b == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = __aeabi_idiv(a,b);
 }
 return iVar1;
}



/* Function: op_mod @ 00011f54 */

int op_mod(int a,int b)

{
 int extraout_r1;
 int iVar1;
 int b_local;
 int a_local;
 
 if (b == 0) {
 iVar1 = 0;
 }
 else {
 __aeabi_idivmod(a,b);
 iVar1 = extraout_r1;
 }
 return iVar1;
}



/* Function: op_and @ 00011f9c */

int op_and(int a,int b)

{
 int b_local;
 int a_local;
 
 return b & a;
}



/* Function: op_or @ 00011fcc */

int op_or(int a,int b)

{
 int b_local;
 int a_local;
 
 return a | b;
}



/* Function: op_xor @ 00011ffc */

int op_xor(int a,int b)

{
 int b_local;
 int a_local;
 
 return b ^ a;
}



/* Function: op_shl @ 0001202c */

int op_shl(int a,int b)

{
 int b_local;
 int a_local;
 
 return a << (b & 0xffU);
}



/* Function: op_shr @ 0001205c */

int op_shr(int a,int b)

{
 int b_local;
 int a_local;
 
 return a >> (b & 0xffU);
}



/* Function: large_jump_table @ 0001208c */

/* WARNING: Removing unreachable block (ram,0x00012134) */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 int b_local;
 int a_local;
 int op_local;
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
 if ((op < 0) || (9 < op)) {
 iVar1 = -1;
 }
 else {
 iVar1 = (*ops[op])(a,b);
 }
 return iVar1;
}



/* Function: conditional_func_ptr @ 0001214c */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 int x_local;
 int mode_local;
 _func_int_int *func;
 
 if (mode == 0) {
 func = double_value;
 }
 else if (mode == 1) {
 func = triple_value;
 }
 else {
 func = recursion_factorial;
 }
 iVar1 = (*func)(x);
 return iVar1;
}



/* Function: state_machine @ 000121c0 */

int state_machine(int event,int state)

{
 int iVar1;
 int state_local;
 int event_local;
 
 switch(state) {
 case 0:
 if (event == 1) {
 iVar1 = 1;
 }
 else {
 iVar1 = 0;
 }
 break;
 case 1:
 if (event == 2) {
 iVar1 = 2;
 }
 else if (event == 99) {
 iVar1 = 3;
 }
 else {
 iVar1 = 1;
 }
 break;
 case 2:
 iVar1 = 2;
 break;
 case 3:
 if (event == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 3;
 }
 break;
 default:
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: state_idle @ 00012278 */

int state_idle(int event)

{
 int event_local;
 
 return (uint)(event == 1);
}



/* Function: state_processing @ 000122ac */

int state_processing(int event)

{
 int iVar1;
 int event_local;
 
 if (event == 2) {
 iVar1 = 2;
 }
 else if (event == 99) {
 iVar1 = 3;
 }
 else {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: state_done @ 000122f8 */

int state_done(int event)

{
 int event_local;
 
 return 2;
}



/* Function: state_error @ 0001231c */

int state_error(int event)

{
 int iVar1;
 int event_local;
 
 if (event == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: fsm_func_table @ 00012354 */

/* WARNING: Removing unreachable block (ram,0x000123e0) */

int fsm_func_table(int event,int state)

{
 int iVar1;
 int state_local;
 int event_local;
 _func_int_int *state_handlers [4];
 
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ((state < 0) || (3 < state)) {
 iVar1 = 3;
 }
 else {
 iVar1 = (*state_handlers[state])(event);
 }
 return iVar1;
}



/* Function: computed_goto @ 000123f8 */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 
 if ((-1 < idx) && (idx < 4)) {
 iVar1 = labels[idx];
 return iVar1;
 }
 return -1;
}



/* Function: obfuscated_cf @ 000124b4 */

int obfuscated_cf(int x)

{
 int x_local;
 int result;
 
 result = x;
 if (x * x < -1) {
 result = x * 2 + 1;
 }
 return result << 1;
}



/* Function: opaque_predicate @ 00012514 */

/* WARNING: Removing unreachable block (ram,0x00012544) */

int opaque_predicate(int x)

{
 int x_local;
 int cond;
 
 return x << 1;
}



/* Function: overlapped_code @ 00012564 */

int overlapped_code(int x)

{
 int iVar1;
 int x_local;
 
 if ((x & 1U) == 0) {
 iVar1 = x / 2;
 }
 else {
 iVar1 = x * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 000125bc */

/* WARNING: Removing unreachable block (ram,0x00012748) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int labels [4];
 
 puts(&DAT_00012fec);
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
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 iVar1 = computed_goto(labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",iVar1);
 iVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",iVar1);
 iVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",iVar1);
 iVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",iVar1);
 return;
}



/* Function: main @ 00012788 */

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




/* Function: __aeabi_idiv0 @ 000129e8 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
