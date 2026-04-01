/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>

/* Type definitions */
typedef unsigned int uint;
typedef unsigned char byte;

/* Type definitions */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);

/* Global variables */
char jump_buffer[128];
jmp_buf actual_jump_buffer;

/* Data definitions for referenced data */
int DAT_00014070[5] = {0, 10, 20, 30, 40};
char DAT_000140c8[] = "=== Control Flow Level 1 Tests ===\n";
int DAT_00014084[3][4] = {{0, 1, 2, 3}, {10, 11, 12, 13}, {20, 21, 22, 23}};
int DAT_000140b4[5] = {1, 2, 3, 4, 5};
char DAT_00014336[] = "=== Control Flow Level 2 Tests ===\n";
int DAT_0001468c[8] = {1, 2, 3, 4, 5, 6, 7, 8};
char DAT_0001452a[] = "=== Control Flow Level 3 Tests ===\n";
int DAT_00012f8b = 0;
int DAT_00012f97 = 1;
int DAT_00012fa3 = 2;
int DAT_00012faf = 3;

/* Function pointer table for large_jump_table */
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

_func_int_int_int PTR_op_add_00016ed4[10] = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};

/* Forward declarations */
int double_value(int x);
int triple_value(int x);
int recursion_factorial(int n);
int indirect_recursion_b(int n, int depth);
int state_idle(int event);
int state_processing(int event);
int state_done(int event);
int state_error(int event);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */
/* Removed - calls null pointer */




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011219 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001121d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: sequential_ops @ 00011230 */

/* WARNING: Unknown calling convention */

int sequential_ops(int a,int b,int c)

{
 int temp3;
 int temp2;
 int temp1;
 
 return (a + b) * 2 - c;
}



/* Function: single_if @ 00011270 */

/* WARNING: Unknown calling convention */

int single_if(int x)

{
 if (0 < x) {
 x = x << 1;
 }
 return x;
}



/* Function: if_else @ 00011290 */

/* WARNING: Unknown calling convention */

int if_else(int x)

{
 uint local_8;
 
 local_8 = (uint)(0 < x);
 return local_8;
}



/* Function: nested_if_2 @ 000112c0 */

/* WARNING: Unknown calling convention */

int nested_if_2(int a,int b)

{
 int local_8;
 
 if (a < 1) {
 local_8 = 0;
 }
 else if (b < 1) {
 local_8 = a;
 }
 else {
 local_8 = a + b;
 }
 return local_8;
}



/* Function: nested_if_deep @ 00011310 */

/* WARNING: Unknown calling convention */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int local_8;
 
 if (a < 1) {
 local_8 = 0;
 }
 else if (b < 1) {
 local_8 = 1;
 }
 else if (c < 1) {
 local_8 = 2;
 }
 else if (d < 1) {
 local_8 = 3;
 }
 else if (e < 1) {
 local_8 = 4;
 }
 else {
 local_8 = 5;
 }
 return local_8;
}



/* Function: if_elseif_chain @ 000113a0 */

/* WARNING: Unknown calling convention */

int if_elseif_chain(int x)

{
 int local_8;
 
 if (x == 0) {
 local_8 = 10;
 }
 else if (x == 1) {
 local_8 = 0x14;
 }
 else if (x == 2) {
 local_8 = 0x1e;
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: if_elseif_long @ 00011400 */

/* WARNING: Unknown calling convention */

int if_elseif_long(int x)

{
 int local_8;
 
 if (x == 0) {
 local_8 = 100;
 }
 else if (x == 1) {
 local_8 = 200;
 }
 else if (x == 2) {
 local_8 = 300;
 }
 else if (x == 3) {
 local_8 = 400;
 }
 else if (x == 4) {
 local_8 = 500;
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: switch_small @ 00011490 */

/* WARNING: Unknown calling convention */

int switch_small(int op)

{
 int b;
 int a;
 int local_8;
 
 switch(op) {
 case 0:
 local_8 = 0xf;
 break;
 case 1:
 local_8 = 5;
 break;
 case 2:
 local_8 = 0x32;
 break;
 case 3:
 local_8 = 2;
 break;
 default:
 local_8 = -1;
 }
 return local_8;
}



/* Function: switch_large @ 00011520 */

/* WARNING: Unknown calling convention */

int switch_large(int op)

{
 int local_8;
 
 switch(op) {
 case 0:
 local_8 = 0;
 break;
 case 1:
 local_8 = 10;
 break;
 case 2:
 local_8 = 0x14;
 break;
 case 3:
 local_8 = 0x1e;
 break;
 case 4:
 local_8 = 0x28;
 break;
 case 5:
 local_8 = 0x32;
 break;
 case 6:
 local_8 = 0x3c;
 break;
 case 7:
 local_8 = 0x46;
 break;
 case 8:
 local_8 = 0x50;
 break;
 case 9:
 local_8 = 0x5a;
 break;
 default:
 local_8 = -1;
 }
 return local_8;
}



/* Function: switch_default @ 000115e0 */

/* WARNING: Unknown calling convention */

int switch_default(int op)

{
 int local_8;
 
 if (op == 1) {
 local_8 = 100;
 }
 else if (op == 2) {
 local_8 = 200;
 }
 else if (op == 3) {
 local_8 = 300;
 }
 else {
 local_8 = 0;
 }
 return local_8;
}



/* Function: switch_fallthrough @ 00011660 */

/* WARNING: Unknown calling convention */

int switch_fallthrough(int op)

{
 int result;
 
 result = 0;
 if (op != 1) {
 if (op != 2) {
 if (op != 3) {
 return -1;
 }
 result = 0xc;
 }
 result = op * 2 + result;
 }
 return op + result;
}



/* Function: loop_for_fixed @ 000116e0 */

/* WARNING: Unknown calling convention */

int loop_for_fixed(int n)

{
 int i;
 int sum;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = i + sum;
 }
 return sum;
}



/* Function: loop_while @ 00011730 */

/* WARNING: Unknown calling convention */

int loop_while(int x)

{
 int local_c;
 int count;
 
 count = 0;
 for (; x != 0; x = x / 10) {
 count = count + 1;
 }
 if (count < 1) {
 local_c = 1;
 }
 else {
 local_c = count;
 }
 return local_c;
}



/* Function: loop_dowhile @ 00011790 */

/* WARNING: Unknown calling convention */

int loop_dowhile(int x)

{
 int count;
 
 count = 0;
 do {
 x = x / 10;
 count = count + 1;
 } while (x != 0);
 return count;
}



/* Function: loop_nested @ 000117d0 */

/* WARNING: Unknown calling convention */

int loop_nested(int m,int n)

{
 int j;
 int i;
 int total;
 
 total = 0;
 for (i = 0; i < m; i = i + 1) {
 for (j = 0; j < n; j = j + 1) {
 total = total + 1;
 }
 }
 return total;
}



/* Function: loop_break @ 00011840 */

/* WARNING: Unknown calling convention */

int loop_break(int target)

{
 int i;
 int n;
 int arr [5];
 
 memcpy(arr,&DAT_00014070,0x14);
 i = 0;
 while( true ) {
 if (4 < i) {
 return -1;
 }
 if (arr[i] == target) break;
 i = i + 1;
 }
 return i;
}



/* Function: loop_continue @ 000118d0 */

/* WARNING: Unknown calling convention */

int loop_continue(int n)

{
 int i;
 int sum;
 
 sum = 0;
 for (i = 1; i <= n; i = i + 1) {
 if (i % 2 != 0) {
 sum = i + sum;
 }
 }
 return sum;
}



/* Function: goto_forward @ 00011930 */

/* WARNING: Unknown calling convention */

int goto_forward(int x)

{
 int result;
 
 if (x < 1) {
 result = x;
 }
 else {
 result = x * x;
 }
 return result << 1;
}



/* Function: goto_backward @ 00011970 */

/* WARNING: Unknown calling convention */

int goto_backward(int x)

{
 int i;
 int result;
 int local_8;
 
 if (x < 1) {
 local_8 = 1;
 }
 else {
 result = 1;
 for (i = 1; i <= x; i = i + 1) {
 result = i * result;
 }
 local_8 = result;
 }
 return local_8;
}



/* Function: ternary_op @ 000119e0 */

/* WARNING: Unknown calling convention */

int ternary_op(int a,int b)

{
 int local_8;
 
 if (b < a) {
 local_8 = a;
 }
 else {
 local_8 = b;
 }
 return local_8;
}



/* Function: test_control_flow_l1 @ 00011a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 printf(&DAT_000140c8);
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



/* Function: loop_multi_exit @ 00011e70 */

/* WARNING: Unknown calling convention */

int loop_multi_exit(int target)

{
 int j;
 int i;
 int matrix [3] [4];
 
 memcpy(matrix,&DAT_00014084,0x30);
 i = 0;
 do {
 if (2 < i) {
 return -1;
 }
 for (j = 0; j < 4; j = j + 1) {
 if (matrix[i][j] == target) {
 return i * 10 + j;
 }
 }
 i = i + 1;
 } while( true );
}



/* Function: infinite_loop @ 00011f30 */

/* WARNING: Unknown calling convention */

int infinite_loop(int *flag)

{
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



/* Function: multi_return @ 00011f90 */

/* WARNING: Unknown calling convention */

int multi_return(int x)

{
 int temp;
 int local_8;
 
 if (x < 0) {
 local_8 = -1;
 }
 else {
 local_8 = x << 1;
 if (local_8 < 0x65) {
 if (x % 2 != 0) {
 local_8 = x + 1;
 }
 }
 else {
 local_8 = -2;
 }
 }
 return local_8;
}



/* Function: conditional_return @ 00012000 */

/* WARNING: Unknown calling convention */

int conditional_return(int x)

{
 int local_c;
 int local_8;
 
 if (x < 1) {
 if (x < 0) {
 local_c = -x;
 }
 else {
 local_c = 0;
 }
 local_8 = local_c;
 }
 else {
 local_8 = x << 1;
 }
 return local_8;
}



/* Function: duffs_device @ 00012050 */

/* WARNING: Unknown calling convention */

int duffs_device(int *dst,int *src,int n)

{
 int iVar1;
 int count;
 int local_8;
 
 if (n < 1) {
 local_8 = -1;
 }
 else {
 iVar1 = n + 7;
 if (n + 7 < 0) {
 iVar1 = n + 0xe;
 }
 count = iVar1 >> 3;
 switch(n % 8) {
 case 0:
 do {
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
switchD_000120c9_caseD_7:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
switchD_000120c9_caseD_6:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
switchD_000120c9_caseD_5:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
switchD_000120c9_caseD_4:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
switchD_000120c9_caseD_3:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
switchD_000120c9_caseD_2:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
switchD_000120c9_caseD_1:
 *dst = *src;
 count = count + -1;
 dst = dst + 1;
 src = src + 1;
 } while (0 < count);
 break;
 case 1:
 goto switchD_000120c9_caseD_1;
 case 2:
 goto switchD_000120c9_caseD_2;
 case 3:
 goto switchD_000120c9_caseD_3;
 case 4:
 goto switchD_000120c9_caseD_4;
 case 5:
 goto switchD_000120c9_caseD_5;
 case 6:
 goto switchD_000120c9_caseD_6;
 case 7:
 goto switchD_000120c9_caseD_7;
 }
 local_8 = n;
 }
 return local_8;
}



/* Function: loop_complex_cond @ 000121d0 */

/* WARNING: Unknown calling convention */

int loop_complex_cond(int x)

{
 int c;
 int b;
 int a;
 
 a = 0;
 b = x;
 c = 0;
 while( 1 ) {
 int bVar1 = 0;
 if ((a < b) && (bVar1 = 0, c < 10)) {
 bVar1 = 0 < b;
 }
 if (!bVar1) break;
 a = a + 2;
 b = b + -1;
 c = c + 1;
 }
 return a + b + c;
}



/* Function: loop_modify_var @ 00012260 */

/* WARNING: Unknown calling convention */

int loop_modify_var(int n)

{
 int i;
 int sum;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = i + sum;
 if (5 < i) {
 i = i + 2;
 }
 }
 return sum;
}



/* Function: loop_external_state @ 000122c0 */

/* WARNING: Unknown calling convention */

int loop_external_state(int *flag)

{
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



/* Function: recursion_factorial @ 00012310 */

/* WARNING: Unknown calling convention */

int recursion_factorial(int n)

{
 int local_c;
 
 if (n < 2) {
 local_c = 1;
 }
 else {
 local_c = recursion_factorial(n + -1);
 local_c = n * local_c;
 }
 return local_c;
}



/* Function: tail_recursion @ 00012370 */

/* WARNING: Unknown calling convention */

int tail_recursion(int n,int acc)

{
 int local_c;
 
 if (n < 2) {
 local_c = acc;
 }
 else {
 local_c = tail_recursion(n + -1,n * acc);
 }
 return local_c;
}



/* Function: indirect_recursion_a @ 000123d0 */

/* WARNING: Unknown calling convention */

int indirect_recursion_a(int n,int depth)

{
 int local_c;
 
 if (depth < 1) {
 local_c = n;
 }
 else if (n % 2 == 0) {
 local_c = indirect_recursion_b(n / 2,depth + -1);
 }
 else {
 local_c = indirect_recursion_b(n * 3 + 1,depth + -1);
 }
 return local_c;
}



/* Function: indirect_recursion_b @ 00012470 */

/* WARNING: Unknown calling convention */

int indirect_recursion_b(int n,int depth)

{
 int local_c;
 
 if (depth < 1) {
 local_c = n;
 }
 else {
 local_c = indirect_recursion_a(n + 1,depth + -1);
 }
 return local_c;
}



/* Function: call_func_ptr @ 000124d0 */

/* WARNING: Unknown calling convention */

int call_func_ptr(_func_int_int f,int x)

{
 int iVar1;
 
 iVar1 = f(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00012500 */

/* WARNING: Unknown calling convention */

int call_func_ptr_array(int idx,int x)

{
 _func_int_int funcs [3];
 int local_c;
 
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((idx < 0) || (2 < idx)) {
 local_c = -1;
 }
 else {
 local_c = funcs[idx](x);
 }
 return local_c;
}



/* Function: double_value @ 00012580 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00012590 */

/* WARNING: Unknown calling convention */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 000125a0 */

/* WARNING: Unknown calling convention */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 000125c0 */

/* WARNING: Unknown calling convention */

int process_with_callback(int *arr,int n,_func_int_int cb)

{
 int iVar1;
 int i;
 int sum;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 iVar1 = cb(arr[i]);
 sum = iVar1 + sum;
 }
 return sum;
}



/* Function: test_control_flow_l2 @ 00012630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int arr [5];
 int ext_flag;
 int dst [8];
 int src [8];
 int flag;
 
 printf(&DAT_00014336);
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
 memcpy(src,&DAT_0001468c,0x20);
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
 memcpy(arr,&DAT_000140b4,0x14);
 iVar1 = process_with_callback(arr,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",iVar1);
 return;
}



/* Function: non_local_jump @ 000129a0 */

/* WARNING: Unknown calling convention */

int non_local_jump(int x)

{
 int iVar1;
 int local_c;
 
 iVar1 = setjmp(actual_jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(actual_jump_buffer,1);
 }
 if (100 < x) {
 /* WARNING: Subroutine does not return */
 longjmp(actual_jump_buffer,2);
 }
 local_c = x << 1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: cpp_exception @ 00012a40 */

/* WARNING: Unknown calling convention */

int cpp_exception(int x)

{
 int local_8;
 
 if (x < 0) {
 local_8 = -1;
 }
 else if (x < 0x65) {
 local_8 = x << 1;
 }
 else {
 local_8 = -2;
 }
 return local_8;
}



/* Function: large_jump_table @ 00012a90 */

/* WARNING: Unknown calling convention */

int large_jump_table(int op,int a,int b)

{
 _func_int_int_int *ops [10];
 int local_c;
 
 memcpy(ops,&PTR_op_add_00016ed4,0x28);
 if ((op < 0) || (9 < op)) {
 local_c = -1;
 }
 else {
 local_c = (*ops[op])(a,b);
 }
 return local_c;
}



/* Function: op_add @ 00012b20 */

/* WARNING: Unknown calling convention */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00012b40 */

/* WARNING: Unknown calling convention */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00012b60 */

/* WARNING: Unknown calling convention */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 00012b80 */

/* WARNING: Unknown calling convention */

int op_div(int a,int b)

{
 int local_8;
 
 if (b == 0) {
 local_8 = 0;
 }
 else {
 local_8 = a / b;
 }
 return local_8;
}



/* Function: op_mod @ 00012bc0 */

/* WARNING: Unknown calling convention */

int op_mod(int a,int b)

{
 int local_8;
 
 if (b == 0) {
 local_8 = 0;
 }
 else {
 local_8 = a % b;
 }
 return local_8;
}



/* Function: op_and @ 00012c00 */

/* WARNING: Unknown calling convention */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00012c20 */

/* WARNING: Unknown calling convention */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00012c40 */

/* WARNING: Unknown calling convention */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00012c60 */

/* WARNING: Unknown calling convention */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00012c80 */

/* WARNING: Unknown calling convention */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00012ca0 */

/* WARNING: Unknown calling convention */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 _func_int_int func;
 
 if (mode == 0) {
 func = double_value;
 }
 else if (mode == 1) {
 func = triple_value;
 }
 else {
 func = recursion_factorial;
 }
 iVar1 = func(x);
 return iVar1;
}



/* Function: state_machine @ 00012d20 */

/* WARNING: Unknown calling convention */

int state_machine(int event,int state)

{
 int local_8;
 
 switch(state) {
 case 0:
 if (event == 1) {
 local_8 = 1;
 }
 else {
 local_8 = 0;
 }
 break;
 case 1:
 if (event == 2) {
 local_8 = 2;
 }
 else if (event == 99) {
 local_8 = 3;
 }
 else {
 local_8 = 1;
 }
 break;
 case 2:
 local_8 = 2;
 break;
 case 3:
 if (event == 0) {
 local_8 = 0;
 }
 else {
 local_8 = 3;
 }
 break;
 default:
 local_8 = 3;
 }
 return local_8;
}



/* Function: fsm_func_table @ 00012e00 */

/* WARNING: Unknown calling convention */

int fsm_func_table(int event,int state)

{
 _func_int_int state_handlers [4];
 int local_c;
 
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ((state < 0) || (3 < state)) {
 local_c = 3;
 }
 else {
 local_c = state_handlers[state](event);
 }
 return local_c;
}



/* Function: state_idle @ 00012e80 */

/* WARNING: Unknown calling convention */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 00012ea0 */

/* WARNING: Unknown calling convention */

int state_processing(int event)

{
 int local_8;
 
 if (event == 2) {
 local_8 = 2;
 }
 else if (event == 99) {
 local_8 = 3;
 }
 else {
 local_8 = 1;
 }
 return local_8;
}



/* Function: state_done @ 00012ef0 */

/* WARNING: Unknown calling convention */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00012f00 */

/* WARNING: Unknown calling convention */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 3;
 if (event == 0) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: computed_goto @ 00012f20 */

/* WARNING: Unknown calling convention */

int computed_goto_label0(void) { return 0; }
int computed_goto_label1(void) { return 1; }
int computed_goto_label2(void) { return 2; }
int computed_goto_label3(void) { return 3; }

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int (*targets[4])(void);
 
 targets[0] = computed_goto_label0;
 targets[1] = computed_goto_label1;
 targets[2] = computed_goto_label2;
 targets[3] = computed_goto_label3;
 if ((-1 < idx) && (idx < 4)) {
 iVar1 = targets[idx]();
 return iVar1;
 }
 return -1;
}



/* Function: obfuscated_cf @ 00012fd0 */

/* WARNING: Unknown calling convention */

int obfuscated_cf(int x)

{
 int result;
 
 result = x;
 if (x * x + 1 < 0) {
 result = x * 2 + 1;
 }
 return result << 1;
}



/* Function: opaque_predicate @ 00013010 */

/* WARNING: Removing unreachable block (ram,0x00013041) */
/* WARNING: Unknown calling convention */

int opaque_predicate(int x)

{
 int cond;
 
 return x << 1;
}



/* Function: overlapped_code @ 00013050 */

/* WARNING: Unknown calling convention */

int overlapped_code(int x)

{
 int local_8;
 
 if ((x & 1U) == 0) {
 local_8 = x / 2;
 }
 else {
 local_8 = x * 3 + 1;
 }
 return local_8;
}



/* Function: test_control_flow_l3 @ 00013090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int labels [4];
 
 printf(&DAT_0001452a);
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



/* Function: main @ 000132d0 */

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




/* Total functions decompiled: 78 */
