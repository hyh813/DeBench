/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */

/* Type definitions for function pointers */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);

/* Stack canary variable declarations */
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;

/* Stack canary failure function */
void __stack_chk_fail(void);

/* Common type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;

/* CRT stub declarations */
extern void __cxa_finalize(void *dso_handle);
extern void *__dso_handle;
extern char completed_0;
extern void deregister_tm_clones(void);

/* Global variable definitions */
char completed_0 = '\0';
unsigned long ___stack_chk_guard = 0;

/* Ghidra type stubs */
typedef void (*code)(void);

/* Forward declaration for indirect recursion */
int indirect_recursion_b(int n,int depth);

/* Data declarations for string constants */

/* String constant definitions */
static char DAT_001029e8[] = "Control Flow Level 1 Tests:";
static char DAT_00102cc0[] = "Control Flow Level 2 Tests:";
static char DAT_00102f18[] = "Control Flow Level 3 Tests:";

/* Forward declarations for functions used in function pointers */
int double_value(int x);
int triple_value(int x);
int recursion_factorial(int n);
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

/* Function pointer constants */
int (*PTR_double_value_00114010)(int) = double_value;
int (*PTR_triple_value_00114018)(int) = triple_value;
int (*PTR_recursion_factorial_00114020)(int) = recursion_factorial;
int (*PTR_op_add_00114028)(int,int) = op_add;
int (*PTR_op_sub_00114030)(int,int) = op_sub;
int (*PTR_op_mul_00114038)(int,int) = op_mul;
int (*PTR_op_div_00114040)(int,int) = op_div;
int (*PTR_op_mod_00114048)(int,int) = op_mod;
int (*PTR_op_and_00114050)(int,int) = op_and;
int (*PTR_op_or_00114058)(int,int) = op_or;
int (*PTR_op_xor_00114060)(int,int) = op_xor;
int (*PTR_op_shl_00114068)(int,int) = op_shl;
int (*PTR_op_shr_00114070)(int,int) = op_shr;


/* Function: FUN_00100930 @ 00100930 */

void FUN_00100930(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones(void) {
    return;
}


/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100abc @ 00100abc */

void FUN_00100abc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00100b14 */

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



/* Function: single_if @ 00100b5c */

int single_if(int x)

{
 int x_local;
 
 x_local = x;
 if (0 < x) {
 x_local = x << 1;
 }
 return x_local;
}



/* Function: if_else @ 00100b88 */

int if_else(int x)

{
 int x_local;
 
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 00100bb0 */

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



/* Function: nested_if_deep @ 00100bf8 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 int e_local;
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



/* Function: if_elseif_chain @ 00100c80 */

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



/* Function: if_elseif_long @ 00100cd0 */

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



/* Function: switch_small @ 00100d48 */

int switch_small(int op)

{
 int op_local;
 int a;
 int b;
 
 if (op == 3) {
 return 2;
 }
 if (op < 4) {
 if (op == 2) {
 return 0x32;
 }
 if (op < 3) {
 if (op == 0) {
 return 0xf;
 }
 if (op == 1) {
 return 5;
 }
 }
 }
 return -1;
}



/* Function: switch_large @ 00100df8 */

int switch_large(int op)

{
 int op_local;
 
 if (op == 9) {
 return 0x5a;
 }
 if (op < 10) {
 if (op == 8) {
 return 0x50;
 }
 if (op < 9) {
 if (op == 7) {
 return 0x46;
 }
 if (op < 8) {
 if (op == 6) {
 return 0x3c;
 }
 if (op < 7) {
 if (op == 5) {
 return 0x32;
 }
 if (op < 6) {
 if (op == 4) {
 return 0x28;
 }
 if (op < 5) {
 if (op == 3) {
 return 0x1e;
 }
 if (op < 4) {
 if (op == 2) {
 return 0x14;
 }
 if (op < 3) {
 if (op == 0) {
 return 0;
 }
 if (op == 1) {
 return 10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return -1;
}



/* Function: switch_default @ 00100f38 */

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



/* Function: switch_fallthrough @ 00100f98 */

int switch_fallthrough(int op)

{
 int op_local;
 int result;
 
 result = 0;
 if (op == 3) {
 result = 0xc;
LAB_00100fec:
 result = result + op * 2;
LAB_00101000:
 result = result + op;
 }
 else {
 if (op < 4) {
 if (op == 1) goto LAB_00101000;
 if (op == 2) goto LAB_00100fec;
 }
 result = -1;
 }
 return result;
}



/* Function: loop_for_fixed @ 00101028 */

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



/* Function: loop_while @ 00101074 */

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



/* Function: loop_dowhile @ 001010dc */

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



/* Function: loop_nested @ 00101130 */

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



/* Function: loop_break @ 001011a0 */

/* WARNING: Removing unreachable block (ram,0x00101254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
 while( true ) {
 if (4 < i) {
 return -1;
 }
 if (target == arr[i]) break;
 i = i + 1;
 }
 return i;
}



/* Function: loop_continue @ 00101264 */

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



/* Function: goto_forward @ 001012cc */

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



/* Function: goto_backward @ 00101310 */

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
 result = result * i;
 }
 }
 return result;
}



/* Function: ternary_op @ 0010137c */

int ternary_op(int a,int b)

{
 int b_local;
 int a_local;
 
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 001013a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 uint uVar1;
 
 puts(DAT_001029e8);
 uVar1 = sequential_ops(5,7,3);
 printf("CF-L1-01 (sequential_ops): %d\n",(ulong)uVar1);
 uVar1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n",(ulong)uVar1);
 uVar1 = single_if(-5);
 printf("CF-L1-02 (single_if): %d\n",(ulong)uVar1);
 uVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",(ulong)uVar1);
 uVar1 = if_else(-3);
 printf("CF-L1-03 (if_else): %d\n",(ulong)uVar1);
 uVar1 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
 uVar1 = nested_if_2(10,-5);
 printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
 uVar1 = nested_if_2(-10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
 uVar1 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",(ulong)uVar1);
 uVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",(ulong)uVar1);
 uVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",(ulong)uVar1);
 uVar1 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n",(ulong)uVar1);
 uVar1 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",(ulong)uVar1);
 uVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",(ulong)uVar1);
 uVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",(ulong)uVar1);
 uVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",(ulong)uVar1);
 uVar1 = loop_while(0x3039);
 printf("CF-L1-13 (loop_while): %d\n",(ulong)uVar1);
 uVar1 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",(ulong)uVar1);
 uVar1 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",(ulong)uVar1);
 uVar1 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",(ulong)uVar1);
 uVar1 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",(ulong)uVar1);
 uVar1 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",(ulong)uVar1);
 uVar1 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",(ulong)uVar1);
 uVar1 = goto_forward(-3);
 printf("CF-L1-18 (goto_forward): %d\n",(ulong)uVar1);
 uVar1 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",(ulong)uVar1);
 uVar1 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",(ulong)uVar1);
 uVar1 = ternary_op(3,8);
 printf("CF-L1-20 (ternary_op): %d\n",(ulong)uVar1);
 return;
}



/* Function: loop_multi_exit @ 0010167c */

/* WARNING: Removing unreachable block (ram,0x00101768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_multi_exit(int target)

{
 int target_local;
 int i;
 int j;
 int matrix [3] [4];
 
 matrix[0][2] = 3;
 matrix[0][3] = 4;
 matrix[0][0] = 1;
 matrix[0][1] = 2;
 matrix[1][2] = 7;
 matrix[1][3] = 8;
 matrix[1][0] = 5;
 matrix[1][1] = 6;
 matrix[2][2] = 0xb;
 matrix[2][3] = 0xc;
 matrix[2][0] = 9;
 matrix[2][1] = 10;
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



/* Function: infinite_loop @ 00101778 */

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



/* Function: multi_return @ 001017cc */

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



/* Function: conditional_return @ 00101830 */

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



/* Function: duffs_device @ 00101874 */

int duffs_device(int *dst,int *src,int n)

{
 uint uVar1;
 int iVar2;
 int n_local;
 int *src_local;
 int *dst_local;
 int count;
 
 if (n < 1) {
 n = -1;
 }
 else {
 iVar2 = n + 0xe;
 if (-1 < n + 7) {
 iVar2 = n + 7;
 }
 count = iVar2 >> 3;
 uVar1 = n & 7;
 if (-1 < -n) {
 uVar1 = -(-n & 7U);
 }
 src_local = src;
 dst_local = dst;
 if (uVar1 == 7) goto LAB_00101960;
 if ((int)uVar1 < 8) {
 src_local = src;
 dst_local = dst;
 if (uVar1 == 6) goto LAB_00101980;
 if ((int)uVar1 < 7) {
 src_local = src;
 dst_local = dst;
 if (uVar1 == 5) goto LAB_001019a0;
 if ((int)uVar1 < 6) {
 src_local = src;
 dst_local = dst;
 if (uVar1 == 4) goto LAB_001019c0;
 if ((int)uVar1 < 5) {
 src_local = src;
 dst_local = dst;
 if (uVar1 == 3) goto LAB_001019e0;
 if ((int)uVar1 < 4) {
 src_local = src;
 dst_local = dst;
 if (uVar1 == 2) goto LAB_00101a00;
 if ((int)uVar1 < 3) {
 src_local = src;
 dst_local = dst;
 if (uVar1 == 0) goto LAB_00101940;
 src_local = src;
 dst_local = dst;
 if (uVar1 == 1) {
 while( true ) {
 *dst_local = *src_local;
 count = count + -1;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
 if (count < 1) break;
LAB_00101940:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
LAB_00101960:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
LAB_00101980:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
LAB_001019a0:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
LAB_001019c0:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
LAB_001019e0:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
LAB_00101a00:
 *dst_local = *src_local;
 src_local = src_local + 1;
 dst_local = dst_local + 1;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 00101a64 */

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



/* Function: loop_modify_var @ 00101ae8 */

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



/* Function: loop_external_state @ 00101b4c */

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



/* Function: recursion_factorial @ 00101b98 */

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



/* Function: tail_recursion @ 00101bd8 */

int tail_recursion(int n,int acc)

{
 int acc_local;
 int n_local;
 
 if (1 < n) {
 acc = tail_recursion(n + -1,n * acc);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00101c24 */

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



/* Function: indirect_recursion_b @ 00101cb4 */

int indirect_recursion_b(int n,int depth)

{
 int depth_local;
 int n_local;
 
 if (0 < depth) {
 n = indirect_recursion_a(n + 1,depth + -1);
 }
 return n;
}



/* Function: call_func_ptr @ 00101cfc */

int call_func_ptr(_func_int_int f,int x)

{
 int iVar1;
 int x_local;
 _func_int_int f_local;
 
 iVar1 = f(x);
 return iVar1;
}



/* Function: double_value @ 00101d20 */

int double_value(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: triple_value @ 00101d38 */

int triple_value(int x)

{
 int x_local;
 
 return x * 3;
}



/* Function: call_func_ptr_array @ 00101d58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_func_ptr_array(int idx,int x)

{
 long lVar1;
 int iVar2;
 int x_local;
 int idx_local;
 _func_int_int funcs[3];
 
 lVar1 = ___stack_chk_guard;
 funcs[0] = PTR_double_value_00114010;
 funcs[1] = PTR_triple_value_00114018;
 funcs[2] = PTR_recursion_factorial_00114020;
 if ((idx < 0) || (2 < idx)) {
 iVar2 = -1;
 }
 else {
 iVar2 = (*funcs[idx])(x);
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_virtual_func @ 00101e04 */

int call_virtual_func(void *obj,int x)

{
 int x_local;
 void *obj_local;
 
 return x << 1;
}



/* Function: process_with_callback @ 00101e20 */

int process_with_callback(int *arr,int n,_func_int_int cb)

{
 int iVar1;
 _func_int_int cb_local;
 int n_local;
 int *arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 iVar1 = cb(arr[i]);
 sum = sum + iVar1;
 }
 return sum;
}



/* Function: test_control_flow_l2 @ 00101e94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 long lVar1;
 uint uVar2;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 lVar1 = ___stack_chk_guard;
 puts(DAT_00102cc0);
 uVar2 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",(ulong)uVar2);
 flag = 0;
 uVar2 = infinite_loop(&flag);
 printf("CF-L2-02 (infinite_loop): %d\n",(ulong)uVar2);
 uVar2 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar2);
 uVar2 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar2);
 uVar2 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar2);
 uVar2 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar2);
 uVar2 = conditional_return(-5);
 printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar2);
 src[2] = 3;
 src[3] = 4;
 src[0] = 1;
 src[1] = 2;
 src[6] = 7;
 src[7] = 8;
 src[4] = 5;
 src[5] = 6;
 dst[0] = 0;
 dst[1] = 0;
 dst[2] = 0;
 dst[3] = 0;
 dst[4] = 0;
 dst[5] = 0;
 dst[6] = 0;
 dst[7] = 0;
 uVar2 = duffs_device(dst,src,8);
 printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar2);
 uVar2 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar2);
 uVar2 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",(ulong)uVar2);
 ext_flag = 0;
 uVar2 = loop_external_state(&ext_flag);
 printf("CF-L2-08 (loop_external_state): %d\n",(ulong)uVar2);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar2);
 uVar2 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar2);
 uVar2 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar2);
 uVar2 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",(ulong)uVar2);
 uVar2 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar2);
 uVar2 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar2);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 uVar2 = process_with_callback(arr,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",(ulong)uVar2);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: non_local_jump @ 0010210c */

int non_local_jump(int x)

{
 int iVar1;
 int x_local;
 static jmp_buf jump_buffer;
 
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



/* Function: cpp_exception @ 0010217c */

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



/* Function: op_add @ 001021bc */

int op_add(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: op_sub @ 001021dc */

int op_sub(int a,int b)

{
 int b_local;
 int a_local;
 
 return a - b;
}



/* Function: op_mul @ 001021fc */

int op_mul(int a,int b)

{
 int b_local;
 int a_local;
 
 return a * b;
}



/* Function: op_div @ 0010221c */

int op_div(int a,int b)

{
 int iVar1;
 int b_local;
 int a_local;
 
 if (b == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 }
 return iVar1;
}



/* Function: op_mod @ 00102250 */

int op_mod(int a,int b)

{
 int iVar1;
 int b_local;
 int a_local;
 
 if (b == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 iVar1 = a - iVar1 * b;
 }
 return iVar1;
}



/* Function: op_and @ 00102290 */

int op_and(int a,int b)

{
 int b_local;
 int a_local;
 
 return a & b;
}



/* Function: op_or @ 001022b0 */

int op_or(int a,int b)

{
 int b_local;
 int a_local;
 
 return a | b;
}



/* Function: op_xor @ 001022d0 */

int op_xor(int a,int b)

{
 int b_local;
 int a_local;
 
 return a ^ b;
}



/* Function: op_shl @ 001022f0 */

int op_shl(int a,int b)

{
 int b_local;
 int a_local;
 
 return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00102310 */

int op_shr(int a,int b)

{
 int b_local;
 int a_local;
 
 return a >> (b & 0x1fU);
}



/* Function: large_jump_table @ 00102330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int large_jump_table(int op,int a,int b)

{
 long lVar1;
 int iVar2;
 int b_local;
 int a_local;
 int op_local;
 _func_int_int_int ops[10];
 
 lVar1 = ___stack_chk_guard;
 ops[1] = PTR_op_sub_00114030;
 ops[0] = PTR_op_add_00114028;
 ops[3] = PTR_op_div_00114040;
 ops[2] = PTR_op_mul_00114038;
 ops[5] = PTR_op_and_00114050;
 ops[4] = PTR_op_mod_00114048;
 ops[7] = PTR_op_xor_00114060;
 ops[6] = PTR_op_or_00114058;
 ops[9] = PTR_op_shr_00114070;
 ops[8] = PTR_op_shl_00114068;
 if ((op < 0) || (9 < op)) {
 iVar2 = -1;
 }
 else {
 iVar2 = ops[op](a,b);
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: conditional_func_ptr @ 001023e8 */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 int x_local;
 int mode_local;
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



/* Function: state_machine @ 00102450 */

int state_machine(int event,int state)

{
 int state_local;
 int event_local;
 
 if (state == 3) {
 if (event == 0) {
 return 0;
 }
 return 3;
 }
 if (state < 4) {
 if (state == 2) {
 return 2;
 }
 if (state < 3) {
 if (state == 0) {
 if (event == 1) {
 return 1;
 }
 return 0;
 }
 if (state == 1) {
 if (event == 2) {
 return 2;
 }
 if (event == 99) {
 return 3;
 }
 return 1;
 }
 }
 }
 return 3;
}



/* Function: state_idle @ 00102524 */

int state_idle(int event)

{
 int event_local;
 
 return (int)(event == 1);
}



/* Function: state_processing @ 00102544 */

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



/* Function: state_done @ 00102580 */

int state_done(int event)

{
 int event_local;
 
 return 2;
}



/* Function: state_error @ 00102594 */

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



/* Function: fsm_func_table @ 001025bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fsm_func_table(int event,int state)

{
 long lVar1;
 int iVar2;
 int state_local;
 int event_local;
 _func_int_int state_handlers[4];
 
 lVar1 = ___stack_chk_guard;
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ((state < 0) || (3 < state)) {
 iVar2 = 3;
 }
 else {
 iVar2 = (*state_handlers[state])(event);
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: target_0 @ 00102660 */
static int target_0(int unused) { return 0; }

/* Function: target_1 @ 00102660 */
static int target_1(int unused) { return 1; }

/* Function: target_2 @ 00102660 */
static int target_2(int unused) { return 2; }

/* Function: target_3 @ 00102660 */
static int target_3(int unused) { return 3; }

/* Function: computed_goto @ 00102660 */

/* WARNING: Removing unreachable block (ram,0x00102710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int idx_local;
 int *labels_local;
 _func_int_int targets[4];
 
 targets[0] = target_0;
 targets[1] = target_1;
 targets[2] = target_2;
 targets[3] = target_3;
 if ((-1 < idx) && (idx < 4)) {
 /* WARNING: Could not recover jumptable at 0x001026d0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*targets[idx])(0);
 return iVar1;
 }
 return -1;
}



/* Function: obfuscated_cf @ 00102720 */

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



/* Function: opaque_predicate @ 00102768 */

/* WARNING: Removing unreachable block (ram,0x0010278c) */

int opaque_predicate(int x)

{
 int x_local;
 int cond;
 
 return x << 1;
}



/* Function: overlapped_code @ 001027a4 */

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



/* Function: test_control_flow_l3 @ 001027ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 long lVar1;
 uint uVar2;
 int labels [4];
 
 lVar1 = ___stack_chk_guard;
 puts(DAT_00102f18);
 uVar2 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar2);
 uVar2 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar2);
 uVar2 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar2);
 uVar2 = cpp_exception(-5);
 printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar2);
 uVar2 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",(ulong)uVar2);
 uVar2 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",(ulong)uVar2);
 uVar2 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",(ulong)uVar2);
 uVar2 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",(ulong)uVar2);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 uVar2 = computed_goto(labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar2);
 uVar2 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",(ulong)uVar2);
 uVar2 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",(ulong)uVar2);
 uVar2 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",(ulong)uVar2);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: main @ 00102994 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
