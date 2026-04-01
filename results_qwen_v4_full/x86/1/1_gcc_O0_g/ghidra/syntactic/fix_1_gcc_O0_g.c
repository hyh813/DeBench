/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Type definitions for function pointers */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);

/* Additional type definitions for decompiled code */
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*code)(void);
typedef void undefined;
typedef unsigned int undefined4;

/* External data declarations */
extern char DAT_00013030[];
extern char DAT_000132c8[];
extern char DAT_000134c4[];
extern char DAT_000129db;
extern char LAB_000129e6;
extern char LAB_000129f1;
extern char LAB_000129fc;

/* setjmp/longjmp support */
#include <setjmp.h>
jmp_buf jump_buffer;

/* Define external data */
char DAT_00013030[] = "Control Flow Tests - Level 1";
char DAT_000132c8[] = "Control Flow Tests - Level 2";
char DAT_000134c4[] = "Control Flow Tests - Level 3";
char DAT_000129db = 0;
char LAB_000129e6 = 0;
char LAB_000129f1 = 0;
char LAB_000129fc = 0;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001113c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011140 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011279 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001127d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: sequential_ops @ 00011281 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int sequential_ops(int a,int b,int c)

{
 int temp1;
 int temp2;
 int temp3;
 
 return (b + a) * 2 - c;
}



/* Function: single_if @ 000112b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int single_if(int x)

{
 if (0 < x) {
 x = x << 1;
 }
 return x;
}



/* Function: if_else @ 000112d5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 000112fa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int nested_if_2(int a,int b)

{
 if (a < 1) {
 a = 0;
 }
 else if (0 < b) {
 a = b + a;
 }
 return a;
}



/* Function: nested_if_deep @ 0001132d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 
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



/* Function: if_elseif_chain @ 00011386 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int if_elseif_chain(int x)

{
 int iVar1;
 
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



/* Function: if_elseif_long @ 000113c5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int if_elseif_long(int x)

{
 int iVar1;
 
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



/* Function: switch_small @ 0001141e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int switch_small(int op)

{
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



/* Function: switch_large @ 00011491 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int switch_large(int op)

{
 int iVar1;
 
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



/* Function: switch_default @ 00011507 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int switch_default(int op)

{
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



/* Function: switch_fallthrough @ 0001154e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int switch_fallthrough(int op)

{
 int result;
 
 result = 0;
 if (op == 3) {
 result = 0xc;
LAB_0001158c:
 result = result + op * 2;
LAB_00011594:
 result = result + op;
 }
 else {
 if (op < 4) {
 if (op == 1) goto LAB_00011594;
 if (op == 2) goto LAB_0001158c;
 }
 result = -1;
 }
 return result;
}



/* Function: loop_for_fixed @ 000115a8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_for_fixed(int n)

{
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + i;
 }
 return sum;
}



/* Function: loop_while @ 000115e3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_while(int x)

{
 int count;
 
 count = 0;
 for (; x != 0; x = x / 10) {
 count = count + 1;
 }
 if (count < 1) {
 count = 1;
 }
 return count;
}



/* Function: loop_dowhile @ 00011634 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: loop_nested @ 00011679 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_nested(int m,int n)

{
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



/* Function: loop_break @ 000116c7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_break(int target)

{
 int in_GS_OFFSET;
 int i;
 int n;
 int arr [5];
 
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 for (i = 0; i < 5; i = i + 1) {
 if (target == arr[i]) goto LAB_0001173b;
 }
 i = -1;
LAB_0001173b:
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 i = __stack_chk_fail_local();
 }
 return i;
}



/* Function: loop_continue @ 0001174e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_continue(int n)

{
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



/* Function: goto_forward @ 00011796 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: goto_backward @ 000117c9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int goto_backward(int x)

{
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



/* Function: ternary_op @ 00011816 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 00011834 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_00013030);
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



/* Function: loop_multi_exit @ 00011be0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_multi_exit(int target)

{
 int iVar1;
 int in_GS_OFFSET;
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
 iVar1 = -1;
LAB_00011cab:
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
 }
 for (j = 0; j < 4; j = j + 1) {
 if (target == matrix[i][j]) {
 iVar1 = j + i * 10;
 goto LAB_00011cab;
 }
 }
  i = i + 1;
 } while( 1 );
}



/* Function: infinite_loop @ 00011cbe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: multi_return @ 00011d01 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int multi_return(int x)

{
 int iVar1;
 int temp;
 
 if (x < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = x * 2;
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



/* Function: conditional_return @ 00011d4e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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
 }
 else {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention */

int duffs_device(int *dst,int *src,int n)

{
 int iVar1;
 int count;
 
 if (n < 1) {
 n = -1;
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
_L143:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
_L145:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
_L146:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
_L147:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
_L148:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
_L149:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
_L150:
 *dst = *src;
 count = count + -1;
 dst = dst + 1;
 src = src + 1;
 } while (0 < count);
 break;
 case 1:
 goto _L150;
 case 2:
 goto _L149;
 case 3:
 goto _L148;
 case 4:
 goto _L147;
 case 5:
 goto _L146;
 case 6:
 goto _L145;
 case 7:
 goto _L143;
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 00011ea7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_complex_cond(int x)

{
 int a;
 int b;
 int c;
 
 a = 0;
 c = 0;
 for (b = x; ((a < b && (c < 10)) && (0 < b)); b = b + -1) {
 a = a + 2;
 c = c + 1;
 }
 return c + a + b;
}



/* Function: loop_modify_var @ 00011f00 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_modify_var(int n)

{
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



/* Function: loop_external_state @ 00011f45 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: recursion_factorial @ 00011f7d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int recursion_factorial(int n)

{
 int iVar1;
 
 if (n < 2) {
 iVar1 = 1;
 }
 else {
 iVar1 = recursion_factorial(n + -1);
 iVar1 = iVar1 * n;
 }
 return iVar1;
}



/* Function: tail_recursion @ 00011fb6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int tail_recursion(int n,int acc)

{
 if (1 < n) {
 acc = tail_recursion(n + -1,n * acc);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011ff1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int indirect_recursion_a(int n,int depth)

{
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



/* Function: indirect_recursion_b @ 0001205c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int indirect_recursion_b(int n,int depth)

{
 if (0 < depth) {
 n = indirect_recursion_a(n + 1,depth + -1);
 }
 return n;
}



/* Function: call_func_ptr @ 00012096 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: double_value @ 000120ba */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 000120d2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_func_ptr_array @ 000120ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 _func_int_int *funcs [3];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((idx < 0) || (2 < idx)) {
 iVar2 = -1;
 }
 else {
 iVar2 = (*funcs[idx])(x);
 }
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_virtual_func @ 00012161 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 00012179 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 iVar1 = (*cb)(arr[i]);
 sum = sum + iVar1;
 }
 return sum;
}



/* Function: test_control_flow_l2 @ 000121ce */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 int in_GS_OFFSET;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000132c8);
 iVar2 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar2);
 flag = 0;
 iVar2 = infinite_loop(&flag);
 printf("CF-L2-02 (infinite_loop): %d\n",iVar2);
 iVar2 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n",iVar2);
 iVar2 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",iVar2);
 iVar2 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",iVar2);
 iVar2 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",iVar2);
 iVar2 = conditional_return(-5);
 printf("CF-L2-04 (conditional_return): %d\n",iVar2);
 src[0] = 1;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 uVar3 = 0;
 do {
 *(undefined4 *)((int)dst + uVar3) = 0;
 uVar3 = uVar3 + 4;
 } while (uVar3 < 0x20);
 iVar2 = duffs_device(dst,src,8);
 printf("CF-L2-05 (duffs_device): %d\n",iVar2);
 iVar2 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar2);
 iVar2 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",iVar2);
 ext_flag = 0;
 iVar2 = loop_external_state(&ext_flag);
 printf("CF-L2-08 (loop_external_state): %d\n",iVar2);
 iVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",iVar2);
 iVar2 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",iVar2);
 iVar2 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",iVar2);
 iVar2 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",iVar2);
 iVar2 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
 iVar2 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 iVar2 = process_with_callback(arr,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",iVar2);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: non_local_jump @ 00012506 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int non_local_jump(int x)

{
 int iVar1;
 
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
 iVar1 = x * 2;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 00012581 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int cpp_exception(int x)

{
 int iVar1;
 
 if (x < 0) {
 iVar1 = -1;
 }
 else if (x < 0x65) {
 iVar1 = x * 2;
 }
 else {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: op_add @ 000125b3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 000125ce */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 000125e7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 00012601 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_div(int a,int b)

{
 int iVar1;
 
 if (b == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = a / b;
 }
 return iVar1;
}



/* Function: op_mod @ 00012628 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_mod(int a,int b)

{
 int iVar1;
 
 if (b == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = a % b;
 }
 return iVar1;
}



/* Function: op_and @ 00012651 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 0001266a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00012683 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 0001269c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 000126bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: large_jump_table @ 000126da */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 _func_int_int_int *ops [10];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
 iVar2 = -1;
 }
 else {
 iVar2 = (*ops[op])(a,b);
 }
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: conditional_func_ptr @ 0001278f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
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



/* Function: state_machine @ 000127de */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int state_machine(int event,int state)

{
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



/* Function: state_idle @ 0001286c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 00012889 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int state_processing(int event)

{
 int iVar1;
 
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



/* Function: state_done @ 000128bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 000128d3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int state_error(int event)

{
 int iVar1;
 
 if (event == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: fsm_func_table @ 000128f8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int fsm_func_table(int event,int state)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 _func_int_int *state_handlers [4];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: computed_goto @ 00012974 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int in_GS_OFFSET;
 int *labels_local;
 void *targets [4];
 
 targets[0] = &DAT_000129db;
 targets[1] = &LAB_000129e6;
 targets[2] = &LAB_000129f1;
 targets[3] = &LAB_000129fc;
 if ((-1 < idx) && (idx < 4)) {
 /* WARNING: Could not recover jumptable at 0x000129d9. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)())targets[idx])();
 return iVar1;
 }
 iVar1 = -1;
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: obfuscated_cf @ 00012a18 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int obfuscated_cf(int x)

{
 int result;
 
 result = x;
 if (x * x < -1) {
 result = x * 2 + 1;
 }
 return result << 1;
}



/* Function: opaque_predicate @ 00012a50 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Removing unreachable block (ram,0x00012a78) */
/* WARNING: Unknown calling convention */

int opaque_predicate(int x)

{
 int cond;
 
 return x * 2;
}



/* Function: overlapped_code @ 00012a83 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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



/* Function: test_control_flow_l3 @ 00012aba */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int labels [4];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000134c4);
 iVar2 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar2);
 iVar2 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar2);
 iVar2 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",iVar2);
 iVar2 = cpp_exception(-5);
 printf("CF-L3-02 (cpp_exception): %d\n",iVar2);
 iVar2 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",iVar2);
 iVar2 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",iVar2);
 iVar2 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",iVar2);
 iVar2 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",iVar2);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 iVar2 = computed_goto(labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",iVar2);
 iVar2 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",iVar2);
 iVar2 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",iVar2);
 iVar2 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",iVar2);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: main @ 00012cae */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012cd8 */

/* WARNING: This is an inlined function */

int __x86_get_pc_thunk_ax(void)

{
 int unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 80 */
