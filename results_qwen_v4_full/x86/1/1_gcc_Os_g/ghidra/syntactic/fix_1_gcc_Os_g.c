/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/1/1_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Type definitions for decompiled code */
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef unsigned int uint;
typedef void (*code)(void);
typedef int bool;
#define true 1
#define false 0

/* setjmp type definition */
typedef struct {
 int jb[20];
} __jmp_buf_tag;

/* Function forward declarations */
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

/* Global data declarations */
char CSWTCH_56[] = {0x00, 0x01, 0x02, 0x03};
int DAT_00013020[] = {30, 30, 30, 30, 30};
char DAT_000130e8[] = "Control Flow Tests - Level 1";
int DAT_00013040[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
char DAT_00013355[] = "Control Flow Tests - Level 2";
int DAT_000130a0[] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_000130c0[] = {1, 2, 3, 4, 5};
int DAT_000130d4[] = {0, 1, 2, 3};
char DAT_00013548[] = "Control Flow Tests - Level 3";
undefined *PTR_op_add_00016020[] = {(undefined*)op_add, (undefined*)op_sub, (undefined*)op_mul, (undefined*)op_div, (undefined*)op_mod, (undefined*)op_and, (undefined*)op_or, (undefined*)op_xor, (undefined*)op_shl, (undefined*)op_shr};
undefined *PTR_state_idle_00016048[] = {(undefined*)state_idle, (undefined*)state_processing, (undefined*)state_done, (undefined*)state_error};
undefined *PTR_DAT_00016058[] = {(undefined*)state_idle, (undefined*)state_processing, (undefined*)state_done, (undefined*)state_error};
int jump_buffer[20] = {0};


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
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



/* Function: recursion_factorial @ 000112a1 */

/* WARNING: Unknown calling convention */

int recursion_factorial(int n)

{
 int iVar1;
 
 iVar1 = 1;
 for (; 1 < n; n = n + -1) {
 iVar1 = iVar1 * n;
 }
 return iVar1;
}



/* Function: double_value @ 000112bd */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 000112cb */

/* WARNING: Unknown calling convention */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 000112d8 */

/* WARNING: Unknown calling convention */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 000112e7 */

/* WARNING: Unknown calling convention */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 000112f6 */

/* WARNING: Unknown calling convention */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00011306 */

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



/* Function: op_mod @ 00011320 */

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



/* Function: op_and @ 0001133a */

/* WARNING: Unknown calling convention */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 00011349 */

/* WARNING: Unknown calling convention */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00011358 */

/* WARNING: Unknown calling convention */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 00011367 */

/* WARNING: Unknown calling convention */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00011378 */

/* WARNING: Unknown calling convention */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: state_idle @ 00011389 */

/* WARNING: Unknown calling convention */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 0001139b */

int state_processing(int event)

{
 if (event != 2) {
 if (event == 99) {
 event = 3;
 }
 else {
 event = 1;
 }
 }
 return event;
}



/* Function: state_done @ 000113bd */

/* WARNING: Unknown calling convention */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 000113c7 */

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



/* Function: sequential_ops @ 000113dc */

/* WARNING: Unknown calling convention */

int sequential_ops(int a,int b,int c)

{
 return (b + a) * 2 - c;
}



/* Function: single_if @ 000113f0 */

int single_if(int x)

{
 if (0 < x) {
 x = x * 2;
 }
 return x;
}



/* Function: if_else @ 00011402 */

/* WARNING: Unknown calling convention */

int if_else(int x)

{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 00011414 */

int nested_if_2(int a,int b)

{
 if (a < 1) {
 a = 0;
 }
 else if (0 < b) {
 a = a + b;
 }
 return a;
}



/* Function: nested_if_deep @ 00011431 */

/* WARNING: Unknown calling convention */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 
 iVar1 = 0;
 if ((((0 < a) && (iVar1 = 1, 0 < b)) && (iVar1 = 2, 0 < c)) && (iVar1 = 3, 0 < d)) {
 iVar1 = (0 < e) + 4;
 }
 return iVar1;
}



/* Function: if_elseif_chain @ 0001146f */

/* WARNING: Unknown calling convention */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = 10;
 if (((x != 0) && (iVar1 = 0x14, x != 1)) && (iVar1 = 0x1e, x != 2)) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 0001149e */

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



/* Function: switch_small @ 000114b8 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

int switch_small(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 4) {
 iVar1 = (int)*(char *)((int)&CSWTCH_56 + op);
 }
 return iVar1;
}



/* Function: switch_large @ 000114df */

/* WARNING: Unknown calling convention */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = op * 10;
 if (9 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 000114f6 */

/* WARNING: Unknown calling convention */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = op * 100;
 if (2 < op - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 0001150f */

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
 goto LAB_0001153d;
 }
 iVar1 = 0xc;
 }
 iVar1 = op * 2 + iVar1;
LAB_0001153d:
 return iVar1 + op;
}



/* Function: loop_for_fixed @ 00011541 */

/* WARNING: Unknown calling convention */

int loop_for_fixed(int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + iVar1;
 }
 return iVar2;
}



/* Function: loop_while @ 0001155a */

int loop_while(int x)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 for (; x != 0; x = x / 10) {
 iVar2 = iVar2 + 1;
 }
 iVar1 = 1;
 if (0 < iVar2) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00011583 */

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



/* Function: loop_nested @ 000115a2 */

/* WARNING: Unknown calling convention */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 iVar2 = 0;
 if (n < 0) {
 n = 0;
 }
 for (; iVar1 < m; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + n;
 }
 return iVar2;
}



/* Function: loop_break @ 000115c7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_break(int target)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int *piVar5;
 int in_GS_OFFSET;
 int arr [5];
 
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 piVar4 = &DAT_00013020;
 piVar5 = arr;
 for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
 *piVar5 = *piVar4;
 piVar4 = piVar4 + 1;
 piVar5 = piVar5 + 1;
 }
 do {
 if (arr[iVar2] == target) goto LAB_0001160f;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 5);
 iVar2 = -1;
LAB_0001160f:
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: loop_continue @ 00011627 */

/* WARNING: Unknown calling convention */

int loop_continue(int n)

{
 uint uVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (uVar1 = 1; (int)uVar1 <= n; uVar1 = uVar1 + 1) {
 if ((uVar1 & 1) != 0) {
 iVar2 = iVar2 + uVar1;
 }
 }
 return iVar2;
}



/* Function: goto_forward @ 00011647 */

/* WARNING: Unknown calling convention */

int goto_forward(int x)

{
 if (0 < x) {
 x = x * x;
 }
 return x * 2;
}



/* Function: goto_backward @ 0001165c */

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
 } while (iVar1 <= x);
 }
 return iVar2;
}



/* Function: ternary_op @ 00011680 */

/* WARNING: Unknown calling convention */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00011694 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_000130e8);
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
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 000118e7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int loop_multi_exit(int target)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int (*paiVar4) [4];
 int *piVar5;
 int *piVar6;
 int in_GS_OFFSET;
 int matrix [3] [4];
 
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar3 = 0xc;
 piVar5 = &DAT_00013040;
 piVar6 = matrix[0];
 for (; iVar3 != 0; iVar3 = iVar3 + -1) {
 *piVar6 = *piVar5;
 piVar5 = piVar5 + 1;
 piVar6 = piVar6 + 1;
 }
 paiVar4 = matrix;
 do {
 /* Unresolved local var: int j@[???] */
 iVar3 = 0;
 do {
 if ((*paiVar4)[iVar3] == target) {
 iVar3 = iVar2 * 10 + iVar3;
 goto LAB_00011941;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 != 4);
 iVar2 = iVar2 + 1;
 paiVar4 = paiVar4 + 1;
 } while (iVar2 != 3);
 iVar3 = -1;
LAB_00011941:
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: infinite_loop @ 00011959 */

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



/* Function: multi_return @ 0001197a */

/* WARNING: Unknown calling convention */

int multi_return(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if (-1 < x) {
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



/* Function: conditional_return @ 000119a4 */

int conditional_return(int x)

{
 int iVar1;
 
 if (x < 1) {
 iVar1 = 0;
 if (x != 0) {
 iVar1 = -x;
 }
 }
 else {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 000119bc */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */

int duffs_device(int *dst,int *src,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 
 if (n < 1) {
 n = -1;
 }
 else {
 iVar4 = n + 7 >> 3;
 piVar2 = dst;
 piVar3 = dst;
 switch(n & 7) {
 case 1:
 while( true ) {
 *dst = *src;
 iVar4 = iVar4 + -1;
 if (iVar4 == 0) break;
 src = src + 1;
 dst = dst + 1;
switchD_000119f6_default:
 iVar1 = *src;
 piVar2 = dst + 1;
 src = src + 1;
 *dst = iVar1;
_L194:
 iVar1 = *src;
 piVar3 = piVar2 + 1;
 src = src + 1;
 *piVar2 = iVar1;
_L196:
 iVar1 = *src;
 dst = piVar3 + 1;
 src = src + 1;
 *piVar3 = iVar1;
_L197:
 iVar1 = *src;
 piVar2 = dst + 1;
 src = src + 1;
 *dst = iVar1;
_L198:
 iVar1 = *src;
 dst = piVar2 + 1;
 src = src + 1;
 *piVar2 = iVar1;
_L199:
 iVar1 = *src;
 piVar2 = dst + 1;
 src = src + 1;
 *dst = iVar1;
_L200:
 iVar1 = *src;
 dst = piVar2 + 1;
 src = src + 1;
 *piVar2 = iVar1;
 }
 break;
 case 2:
 goto _L200;
 case 3:
 goto _L199;
 case 4:
 goto _L198;
 case 5:
 goto _L197;
 case 6:
 goto _L196;
 case 7:
 goto _L194;
 default:
 goto switchD_000119f6_default;
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 00011a5f */

/* WARNING: Unknown calling convention */

int loop_complex_cond(int x)

{
 int iVar1;
 
 for (iVar1 = 0; (iVar1 * 2 < x - iVar1 && (iVar1 < 10)); iVar1 = iVar1 + 1) {
 }
 return iVar1 * 3 + (x - iVar1);
}



/* Function: loop_modify_var @ 00011a82 */

/* WARNING: Unknown calling convention */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + iVar1;
 if (5 < iVar1) {
 iVar1 = iVar1 + 2;
 }
 }
 return iVar2;
}



/* Function: loop_external_state @ 00011aa3 */

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



/* Function: tail_recursion @ 00011abd */

/* WARNING: Unknown calling convention */

int tail_recursion(int n,int acc)

{
 for (; 1 < n; n = n + -1) {
 acc = acc * n;
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00011ad7 */

/* WARNING: Unknown calling convention */

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



/* Function: call_func_ptr @ 00011b13 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00011b24. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00011b26 */

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
 /* WARNING: Could not recover jumptable at 0x00011b85. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*funcs[idx])(x);
 return iVar1;
 }
 }
 else if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return -1;
 }
 __stack_chk_fail_local();
 return -1;
}



/* Function: call_virtual_func @ 00011ba1 */

/* WARNING: Unknown calling convention */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 00011baf */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = (*cb)(arr[iVar2]);
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00011bde */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 byte bVar5;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 bVar5 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013355);
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
 piVar3 = &DAT_000130a0;
 piVar4 = src;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
 piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
 }
 piVar3 = dst;
 for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar3 = 0;
 piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
 }
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
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 iVar2 = indirect_recursion_a(6,1);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",iVar2);
 iVar2 = call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",iVar2);
 iVar2 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
 iVar2 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
 piVar3 = &DAT_000130c0;
 piVar4 = arr;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
 piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
 }
 iVar2 = process_with_callback(arr,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar2);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}







/* Function: cpp_exception @ 00011e9d */

/* WARNING: Unknown calling convention */

int cpp_exception(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((-1 < x) && (iVar1 = x * 2, 100 < x)) {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00011ebe */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 int iVar2;
 undefined **ppuVar3;
 _func_int_int_int **pp_Var4;
 int in_GS_OFFSET;
 _func_int_int_int *ops [10];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 ppuVar3 = &PTR_op_add_00016020;
 pp_Var4 = ops;
 for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
 *pp_Var4 = (_func_int_int_int *)*ppuVar3;
 ppuVar3 = ppuVar3 + 1;
 pp_Var4 = pp_Var4 + 1;
 }
 if ((uint)op < 10) {
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x00011f1d. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*ops[op])(a,b);
 return iVar1;
 }
 }
 else if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return -1;
 }
 __stack_chk_fail_local();
 return -1;
}



/* Function: conditional_func_ptr @ 00011f3b */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int conditional_func_ptr(int mode,int x)

{
 _func_int_int *UNRECOVERED_JUMPTABLE;
 int iVar1;
 
 UNRECOVERED_JUMPTABLE = double_value;
 if ((mode != 0) && (UNRECOVERED_JUMPTABLE = triple_value, mode != 1)) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 /* WARNING: Could not recover jumptable at 0x00011f72. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar1;
}



/* Function: state_machine @ 00011f74 */

int state_machine(int event,int state)

{
 int iVar1;
 bool bVar2;
 
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
 bVar2 = event == 99;
 iVar1 = 3;
LAB_00011fbd:
 if (!bVar2) {
 return state;
 }
 return iVar1;
 }
 }
 else if (state == 3) {
 bVar2 = event == 0;
 iVar1 = 0;
 goto LAB_00011fbd;
 }
 return 3;
}



/* Function: fsm_func_table @ 00011fc9 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int fsm_func_table(int event,int state)

{
 int iVar1;
 int iVar2;
 undefined **ppuVar3;
 _func_int_int **pp_Var4;
 int in_GS_OFFSET;
 _func_int_int *state_handlers [4];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 ppuVar3 = &PTR_state_idle_00016048;
 pp_Var4 = state_handlers;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 *pp_Var4 = (_func_int_int *)*ppuVar3;
 ppuVar3 = ppuVar3 + 1;
 pp_Var4 = pp_Var4 + 1;
 }
 if ((uint)state < 4) {
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Could not recover jumptable at 0x00012020. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*state_handlers[state])(event);
 return iVar1;
 }
 }
 else if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 3;
 }
 __stack_chk_fail_local();
 return 3;
}



/* Function: computed_goto @ 0001203f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined **ppuVar4;
 _func_int_int **pp_Var5;
 int in_GS_OFFSET;
 _func_int_int *targets [4];
 
 iVar1 = -1;
 iVar2 = *(int *)(in_GS_OFFSET + 0x14);
 ppuVar4 = &PTR_DAT_00016058;
 pp_Var5 = targets;
 for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
 *pp_Var5 = (_func_int_int *)*ppuVar4;
 ppuVar4 = ppuVar4 + 1;
 pp_Var5 = pp_Var5 + 1;
 }
 if ((uint)idx < 4) {
 /* WARNING: Could not recover jumptable at 0x0001207c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar2 = (*targets[idx])(0);
 return iVar2;
 }
 if (iVar2 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: obfuscated_cf @ 000120bf */

int obfuscated_cf(int param_1)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 000120cd */

int opaque_predicate(int param_1)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 000120db */

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



/* Function: test_control_flow_l3 @ 000120f9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 byte bVar5;
 int labels [4];
 
 bVar5 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013548);

 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 iVar2 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",iVar2);
 iVar2 = conditional_func_ptr(0,5);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",iVar2);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 iVar2 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",iVar2);
 piVar3 = &DAT_000130d4;
 piVar4 = labels;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
 piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
 }
 iVar2 = computed_goto(labels,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar2);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 0001226f */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012273 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.si @ 00012277 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012280 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 81 */
