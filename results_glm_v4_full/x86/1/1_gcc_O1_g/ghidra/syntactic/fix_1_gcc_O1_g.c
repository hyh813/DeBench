/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

#include <setjmp.h>

/* Function pointer type definitions */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef unsigned int uint;
typedef unsigned char byte;
typedef int (*code)(int);

/* Global variables */
jmp_buf jump_buffer;

/* Data constants (forward declarations) */
extern const char DAT_00013064[];
extern const char DAT_0001316c[];
extern const char DAT_000132f0[];
extern const int DAT_00012314;

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(void *)0x0)(0);
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



/* Function: recursion_factorial @ 00011281 */

/* WARNING: Unknown calling convention */

int recursion_factorial(int n)

{
 int iVar1;
 
 iVar1 = 1;
 if (1 < n) {
 iVar1 = recursion_factorial(n + -1);
 iVar1 = iVar1 * n;
 }
 return iVar1;
}



/* Function: double_value @ 000112ae */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 000112b9 */

/* WARNING: Unknown calling convention */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 000112c5 */

/* WARNING: Unknown calling convention */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 000112d2 */

/* WARNING: Unknown calling convention */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 000112df */

/* WARNING: Unknown calling convention */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 000112ed */

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



/* Function: op_mod @ 00011305 */

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



/* Function: op_and @ 0001131d */

/* WARNING: Unknown calling convention */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 0001132a */

/* WARNING: Unknown calling convention */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00011337 */

/* WARNING: Unknown calling convention */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 00011344 */

/* WARNING: Unknown calling convention */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00011353 */

/* WARNING: Unknown calling convention */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: state_idle @ 00011362 */

/* WARNING: Unknown calling convention */

int state_idle(int event)

{
 return (unsigned int)(event == 1);
}



/* Function: state_processing @ 00011372 */

/* WARNING: Unknown calling convention */

int state_processing(int event)

{
 if (event != 2) {
 event = (uint)(event == 99) * 2 + 1;
 }
 return event;
}



/* Function: state_done @ 0001138d */

/* WARNING: Unknown calling convention */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00011397 */

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



/* Function: sequential_ops @ 000113aa */

/* WARNING: Unknown calling convention */

int sequential_ops(int a,int b,int c)

{
 return (b + a) * 2 - c;
}



/* Function: single_if @ 000113bd */

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



/* Function: if_else @ 000113ce */

/* WARNING: Unknown calling convention */

int if_else(int x)

{
 return (unsigned int)(0 < x);
}



/* Function: nested_if_2 @ 000113de */

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



/* Function: nested_if_deep @ 000113fc */

/* WARNING: Unknown calling convention */

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



/* Function: if_elseif_chain @ 00011441 */

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



/* Function: if_elseif_long @ 0001146e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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



/* Function: switch_small @ 000114b3 */

int switch_small(int op)

{
 int iVar1;
 
 if (op == 2) {
 iVar1 = 0x32;
 }
 else {
 if (2 < op) {
 return (uint)(op == 3) * 3 + -1;
 }
 iVar1 = 0xf;
 if (op != 0) {
 iVar1 = -1;
 if (op == 1) {
 iVar1 = 5;
 }
 return iVar1;
 }
 }
 return iVar1;
}



/* Function: switch_large @ 000114f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

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



/* Function: switch_default @ 0001154e */

/* WARNING: Unknown calling convention */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 200;
 if (((op != 2) && (iVar1 = 300, op != 3)) && (iVar1 = 0, op == 1)) {
 iVar1 = 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 0001157b */

int switch_fallthrough(int op)

{
 int iVar1;
 
 if (op == 2) {
 iVar1 = 0;
 }
 else {
 if (op != 3) {
 if (op != 1) {
 return -1;
 }
 iVar1 = 0;
 goto LAB_000115a7;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + op * 2;
LAB_000115a7:
 return iVar1 + op;
}



/* Function: loop_for_fixed @ 000115b1 */

int loop_for_fixed(int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (n != iVar1);
 }
 return iVar2;
}



/* Function: loop_while @ 000115da */

int loop_while(int x)

{
 int iVar1;
 int iVar2;
 
 if (x == 0) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 x = x / 10;
 iVar2 = iVar2 + 1;
 } while (x != 0);
 }
 iVar1 = 1;
 if (0 < iVar2) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00011618 */

int loop_dowhile(int x)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 x = x / 10;
 iVar1 = iVar1 + 1;
 } while (x != 0);
 return iVar1;
}



/* Function: loop_nested @ 00011646 */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 iVar3 = 0;
 if (0 < m) {
 do {
 iVar1 = 0;
 if (0 < n) {
 do {
 /* Unresolved local var: int j@[???] */
 iVar1 = iVar1 + 1;
 } while (n != iVar1);
 iVar3 = iVar3 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (m != iVar2);
 }
 return iVar3;
}



/* Function: loop_break @ 00011682 */

/* WARNING: Unknown calling convention */

int loop_break(int target)

{
 int iVar1;
 int in_GS_OFFSET;
 int arr [5];
 
 iVar1 = 0;
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 /* Unresolved local var: int i@[???] */
 do {
 if (arr[iVar1] == target) goto LAB_000116d7;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 iVar1 = -1;
LAB_000116d7:
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: loop_continue @ 000116ed */

int loop_continue(int n)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 uVar1 = 1;
 iVar2 = 0;
 do {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 uVar1 = uVar1 + 1;
 } while (uVar1 != n + 1U);
 }
 return iVar2;
}



/* Function: goto_forward @ 00011721 */

int goto_forward(int x)

{
 if (0 < x) {
 x = x * x;
 }
 return x * 2;
}



/* Function: goto_backward @ 00011735 */

/* WARNING: Unknown calling convention */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 1;
 if (0 < x) {
 iVar1 = 1;
 do {
 iVar2 = iVar2 * iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != x + 1);
 }
 return iVar2;
}



/* Function: ternary_op @ 0001175b */

/* WARNING: Unknown calling convention */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 0001176d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_00013064);
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



/* Function: loop_multi_exit @ 000119c5 */

/* WARNING: Unknown calling convention */

int loop_multi_exit(int target)

{
 int iVar1;
 int (*paiVar2) [4];
 int iVar3;
 int in_GS_OFFSET;
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
 paiVar2 = matrix;
 iVar3 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 iVar1 = 0;
 do {
 if ((*paiVar2)[iVar1] == target) {
 iVar1 = iVar1 + iVar3 * 10;
 goto LAB_00011a68;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 iVar3 = iVar3 + 1;
 paiVar2 = paiVar2 + 1;
 } while (iVar3 != 3);
 iVar1 = -1;
LAB_00011a68:
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: infinite_loop @ 00011a87 */

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



/* Function: multi_return @ 00011aac */

/* WARNING: Unknown calling convention */

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



/* Function: conditional_return @ 00011ad6 */

int conditional_return(int x)

{
 int iVar1;
 
 if (0 < x) {
 return x * 2;
 }
 iVar1 = 0;
 if (x < 0) {
 iVar1 = -x;
 }
 return iVar1;
}



/* Function: duffs_device @ 00011af4 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */

int duffs_device(int *dst,int *src,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 if (n < 1) {
 n = -1;
 }
 else {
 iVar1 = n + 0xe;
 if (-1 < n + 7) {
 iVar1 = n + 7;
 }
 iVar1 = iVar1 >> 3;
 switch(n % 8) {
 case 0:
 while( 1 ) {
 *dst = *src;
 src = src + 1;
 dst = dst + 1;
_L166:
 *dst = *src;
 src = src + 1;
 dst = dst + 1;
_L168:
 *dst = *src;
 piVar2 = dst + 1;
 piVar3 = src + 1;
LAB_00011b5c:
 src = piVar3 + 1;
 dst = piVar2 + 1;
 *piVar2 = *piVar3;
_L170:
 *dst = *src;
 piVar2 = dst + 1;
 piVar3 = src + 1;
LAB_00011b70:
 src = piVar3 + 1;
 dst = piVar2 + 1;
 *piVar2 = *piVar3;
_L172:
 *dst = *src;
 dst = dst + 1;
 src = src + 1;
LAB_00011b84:
 *dst = *src;
 iVar1 = iVar1 + -1;
 if (iVar1 < 1) break;
 src = src + 1;
 dst = dst + 1;
 }
 break;
 case 1:
 goto LAB_00011b84;
 case 2:
 goto _L172;
 case 3:
 piVar2 = dst;
 piVar3 = src;
 goto LAB_00011b70;
 case 4:
 goto _L170;
 case 5:
 piVar2 = dst;
 piVar3 = src;
 goto LAB_00011b5c;
 case 6:
 goto _L168;
 case 7:
 goto _L166;
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 00011bbf */

int loop_complex_cond(int x)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar3 = x;
 if (x < 1) {
 iVar4 = 0;
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 iVar3 = iVar3 + -1;
 iVar4 = x - iVar3;
 iVar2 = 0;
 if (-1 < iVar1) {
 iVar2 = iVar1;
 }
 } while ((iVar2 < iVar3) && (iVar4 < 10));
 }
 return iVar1 + iVar3 + iVar4;
}



/* Function: loop_modify_var @ 00011c06 */

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



/* Function: loop_external_state @ 00011c35 */

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



/* Function: tail_recursion @ 00011c51 */

/* WARNING: Unknown calling convention */

int tail_recursion(int n,int acc)

{
 if (1 < n) {
 acc = tail_recursion(n + -1,acc * n);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011c7e */

/* WARNING: Unknown calling convention */

int indirect_recursion_a(int n,int depth)

{
 if (0 < depth) {
 if ((n & 1U) == 0) {
 n = n / 2;
 if (1 < depth) {
 n = indirect_recursion_a(n + 1,depth + -2);
 }
 }
 else if (depth < 2) {
 n = n * 3 + 1;
 }
 else {
 n = indirect_recursion_a(n * 3 + 2,depth + -2);
 }
 }
 return n;
}



/* Function: call_func_ptr @ 00011cdf */

/* WARNING: Unknown calling convention */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00011cf2 */

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
 if ((uint)idx < 3) {
 iVar2 = (*funcs[idx])(x);
 }
 else {
 iVar2 = -1;
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_virtual_func @ 00011d61 */

/* WARNING: Unknown calling convention */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 00011d6c */

/* WARNING: Unknown calling convention */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
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



/* Function: test_control_flow_l2 @ 00011db7 */

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
 puts(&DAT_0001316c);
 iVar2 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar2);
 flag = 0;
 iVar2 = infinite_loop(&flag);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",iVar2);
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
 uVar3 = 0;
 do {
 *(unsigned int *)((int)dst + uVar3) = 0;
 uVar3 = uVar3 + 4;
 } while (uVar3 < 0x20);
 iVar2 = duffs_device(dst,src,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar2);
 iVar2 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",iVar2);
 iVar2 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar2);
 ext_flag = 0;
 iVar2 = loop_external_state(&ext_flag);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",iVar2);
 iVar2 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",iVar2);
 iVar2 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",iVar2);
 iVar2 = indirect_recursion_a(10,3);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",iVar2);
 iVar2 = call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",iVar2);
 iVar2 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
 iVar2 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 iVar2 = process_with_callback(arr,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar2);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: non_local_jump @ 0001205e */

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



/* Function: cpp_exception @ 000120d6 */

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



/* Function: large_jump_table @ 000120f6 */

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
 if ((uint)op < 10) {
 iVar2 = (*ops[op])(a,b);
 }
 else {
 iVar2 = -1;
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: conditional_func_ptr @ 000121b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention */

int conditional_func_ptr(int mode,int x)

{
 code *pcVar1;
 int iVar2;
 
 pcVar1 = double_value;
 if (mode != 0) {
 pcVar1 = triple_value;
 if (mode != 1) {
 pcVar1 = recursion_factorial;
 }
 }
 iVar2 = (*pcVar1)(x);
 return iVar2;
}



/* Function: state_machine @ 000121ef */

int state_machine(int event,int state)

{
 int iVar1;
 
 if (state != 2) {
 if (2 < state) {
 if (state == 3) {
 iVar1 = 3;
 if (event == 0) {
 iVar1 = 0;
 }
 return iVar1;
 }
 return 3;
 }
 if (state == 0) {
 return (uint)(event == 1);
 }
 if (state != 1) {
 return 3;
 }
 if (event != 2) {
 iVar1 = 1;
 if (event == 99) {
 iVar1 = 3;
 }
 return iVar1;
 }
 state = 2;
 }
 return state;
}



/* Function: fsm_func_table @ 00012249 */

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
 iVar2 = 3;
 if ((uint)state < 4) {
 iVar2 = (*state_handlers[state])(event);
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: computed_goto @ 000122c1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

/* Placeholder label functions for computed goto */
static int LAB_0001232e(void) { return 1; }
static int LAB_00012339(void) { return 2; }
static int LAB_00012344(void) { return 3; }

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int in_GS_OFFSET;
 int (*targets [4])(void);
 
 targets[0] = (int (*)(void))&DAT_00012314;
 targets[1] = LAB_0001232e;
 targets[2] = LAB_00012339;
 targets[3] = LAB_00012344;
 if ((uint)idx < 4) {
 /* WARNING: Could not recover jumptable at 0x00012310. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*targets[idx])();
 return iVar1;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return -1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: obfuscated_cf @ 0001235b */

/* WARNING: Unknown calling convention */

int obfuscated_cf(int x)

{
 return x * 2;
}



/* Function: opaque_predicate @ 00012366 */

/* WARNING: Unknown calling convention */

int opaque_predicate(int x)

{
 return x * 2;
}



/* Function: overlapped_code @ 00012371 */

/* WARNING: Unknown calling convention */

int overlapped_code(int x)

{
 if ((x & 1U) != 0) {
 return x * 3 + 1;
 }
 return x / 2;
}



/* Function: test_control_flow_l3 @ 0001238d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int labels [4];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000132f0);
 iVar2 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
 iVar2 = non_local_jump(-5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 iVar2 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",iVar2);
 iVar2 = conditional_func_ptr(0,5);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",iVar2);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 iVar2 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",iVar2);
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



/* Function: main @ 00012513 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012533 */

/* WARNING: This is an inlined function */

unsigned int __x86_get_pc_thunk_ax(void)

{
 return 0;
}



/* Function: __stack_chk_fail_local @ 00012540 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */

/* Data constants */
const char DAT_00013064[] = "Control Flow Level 1 Tests";
const char DAT_0001316c[] = "Control Flow Level 2 Tests";
const char DAT_000132f0[] = "Control Flow Level 3 Tests";
const int DAT_00012314 = 0;


/* Total functions decompiled: 79 */
