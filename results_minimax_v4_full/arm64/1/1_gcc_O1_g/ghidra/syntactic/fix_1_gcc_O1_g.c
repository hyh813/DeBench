/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

#include <stdint.h>
#include <setjmp.h>
#include <stdio.h>

/* Standard type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char undefined;

/* Function pointer type definitions */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef int (*code)(int*, int, int);

/* Stack guard variable */
extern uintptr_t __stack_chk_guard;
extern void __stack_chk_fail(int, void *, ...);

/* CRT stub declarations */
extern void __cxa_finalize(void *);
extern void *__dso_handle;
void deregister_tm_clones(void);

/* Global state variable */
char completed_0 = 0;

/* Jump buffer for non-local jumps */
jmp_buf jump_buffer;
extern char DAT_00101e40;
extern char DAT_001020e8;
extern char DAT_00102308;
extern char DAT_00114078;
extern char DAT_00114079;
extern char DAT_0011407a;
extern char DAT_0011407b;
extern char DAT_0011407c;
extern char DAT_0011407d;
extern char DAT_0011407e;
extern char DAT_0011407f;
extern char DAT_00114080;
extern char DAT_00114081;
extern char DAT_00114082;
extern char DAT_00114083;
extern char DAT_00114084;
extern char DAT_00114085;
extern char DAT_00114086;
extern char DAT_00114087;
extern char DAT_00114088;
extern char DAT_00114089;
extern char DAT_0011408a;
extern char DAT_0011408b;
extern char DAT_0011408c;
extern char DAT_0011408d;
extern char DAT_0011408e;
extern char DAT_0011408f;
extern char DAT_00114090;
extern char DAT_00114091;
extern char DAT_00114092;
extern char DAT_00114093;
extern char DAT_00114094;
extern char DAT_00114095;
extern char DAT_00114096;
extern char DAT_00114097;
extern char DAT_00114098;
extern char DAT_00114099;
extern char DAT_0011409a;
extern char DAT_0011409b;
extern char DAT_0011409c;
extern char DAT_0011409d;
extern char DAT_0011409e;
extern char DAT_0011409f;
extern char DAT_001140a0;
extern char DAT_001140a1;
extern char DAT_001140a2;
extern char DAT_001140a3;
extern char DAT_001140a4;
extern char DAT_001140a5;
extern char DAT_001140a6;
extern char DAT_001140a7;
extern char DAT_001140a8;
extern char DAT_001140a9;
extern char DAT_001140aa;
extern char DAT_001140ab;
extern char DAT_001140ac;
extern char DAT_001140ad;
extern char DAT_001140ae;
extern char DAT_001140af;
extern char DAT_001140b0;
extern char DAT_001140b1;
extern char DAT_001140b2;
extern char DAT_001140b3;
extern char DAT_001140b4;
extern char DAT_001140b5;
extern char DAT_001140b6;
extern char DAT_001140b7;
extern int (*PTR_double_value_00114010)(int);
extern int (*PTR_triple_value_00114018)(int);
extern int (*PTR_recursion_factorial_00114020)(int);
extern int (*PTR_op_add_00114028)(int, int);
extern int (*PTR_op_sub_00114030)(int, int);
extern int (*PTR_op_mul_00114038)(int, int);
extern int (*PTR_op_div_00114040)(int, int);
extern int (*PTR_op_mod_00114048)(int, int);
extern int (*PTR_op_and_00114050)(int, int);
extern int (*PTR_op_or_00114058)(int, int);
extern int (*PTR_op_xor_00114060)(int, int);
extern int (*PTR_op_shl_00114068)(int, int);
extern int (*PTR_op_shr_00114070)(int, int);




/* Function: FUN_00100940 @ 00100940 */

void FUN_00100940(void)

{
 /* Empty stub - was calling NULL function pointer */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) { }

/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void) { }





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




/* Function: recursion_factorial @ 00100b14 */

int recursion_factorial(int n)

{
 int iVar1;
 
 if (1 < n) {
 iVar1 = recursion_factorial(n + -1);
 return iVar1 * n;
 }
 return 1;
}



/* Function: double_value @ 00100b4c */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00100b54 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 00100b5c */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00100b64 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00100b6c */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 00100b74 */

int op_div(int a,int b)

{
 int iVar1;
 
 iVar1 = 0;
 if ((b != 0) && (iVar1 = 0, b != 0)) {
 iVar1 = a / b;
 }
 return iVar1;
}



/* Function: op_mod @ 00100b88 */

int op_mod(int a,int b)

{
 int iVar1;
 
 iVar1 = 0;
 if (b != 0) {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 iVar1 = a - iVar1 * b;
 }
 return iVar1;
}



/* Function: op_and @ 00100ba0 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00100ba8 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00100bb0 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00100bb8 */

int op_shl(int a,int b)

{
 return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00100bc0 */

int op_shr(int a,int b)

{
 return a >> (b & 0x1fU);
}



/* Function: state_idle @ 00100bc8 */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 00100bd4 */

int state_processing(int event)

{
 bool bVar1;
 
 if ((event != 2) && (bVar1 = event != 99, event = 3, bVar1)) {
 event = 1;
 }
 return event;
}



/* Function: state_done @ 00100bec */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00100bf4 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: sequential_ops @ 00100c04 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
 DW_OP_plus; DW_OP_stack_value]
 Unresolved local var: int temp2@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
 DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value]
 Unresolved local var: int temp3@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
 DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_breg2(x2): 0; DW_OP_minus;
 DW_OP_stack_value] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 00100c14 */

int single_if(int x)

{
 int iVar1;
 
 iVar1 = x << 1;
 if (x < 1) {
 iVar1 = x;
 }
 return iVar1;
}



/* Function: if_else @ 00100c24 */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 00100c30 */

int nested_if_2(int a,int b)

{
 int iVar1;
 
 if (a < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = a + b;
 if (b < 1) {
 iVar1 = a;
 }
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00100c50 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 
 if (a < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 1;
 if (0 < b) {
 if (c < 1) {
 iVar1 = 2;
 }
 else if (d < 1) {
 iVar1 = 3;
 }
 else {
 iVar1 = (0 < e) + 4;
 }
 }
 }
 return iVar1;
}



/* Function: if_elseif_chain @ 00100c9c */

int if_elseif_chain(int x)

{
 int iVar1;
 
 if (x == 0) {
 iVar1 = 10;
 }
 else if (x == 1) {
 iVar1 = 0x14;
 }
 else {
 iVar1 = 0x1e;
 if (x != 2) {
 iVar1 = -1;
 }
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00100cc8 */

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
 else {
 iVar1 = 500;
 if (x != 4) {
 iVar1 = -1;
 }
 }
 return iVar1;
}



/* Function: switch_small @ 00100d14 */

int switch_small(int op)

{
 int iVar1;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 if (op == 2) {
 iVar1 = 0x32;
 }
 else if (op < 3) {
 iVar1 = 0xf;
 if ((op != 0) && (iVar1 = 5, op != 1)) {
 iVar1 = -1;
 }
 }
 else {
 iVar1 = 2;
 if (op != 3) {
 iVar1 = -1;
 }
 }
 return iVar1;
}



/* Function: switch_large @ 00100d54 */

int switch_large(int op)

{
 int iVar1;
 
 if (op == 5) {
 iVar1 = 0x32;
 }
 else if (op < 6) {
 if (op == 2) {
 iVar1 = 0x14;
 }
 else if (op < 3) {
 iVar1 = 0;
 if ((op != 0) && (iVar1 = 10, op != 1)) {
 iVar1 = -1;
 }
 }
 else {
 iVar1 = 0x28;
 if (op == 3) {
 iVar1 = 0x1e;
 }
 }
 }
 else {
 iVar1 = 0x50;
 if (op != 8) {
 if (op < 9) {
 iVar1 = 0x3c;
 if ((op != 6) && (iVar1 = 0x46, op != 7)) {
 iVar1 = -1;
 }
 }
 else {
 iVar1 = 0x5a;
 if (op != 9) {
 iVar1 = -1;
 }
 }
 }
 }
 return iVar1;
}



/* Function: switch_default @ 00100de4 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 200;
 if (((op != 2) && (iVar1 = 300, op != 3)) && (iVar1 = 100, op != 1)) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00100e10 */

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
 goto LAB_00100e40;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + op * 2;
LAB_00100e40:
 return iVar1 + op;
}



/* Function: loop_for_fixed @ 00100e50 */

int loop_for_fixed(int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar1;
}



/* Function: loop_while @ 00100e80 */

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



/* Function: loop_dowhile @ 00100eb8 */

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



/* Function: loop_nested @ 00100ee0 */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int total@[???] */
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar1 = 0;
 iVar2 = 0;
 if (0 < m) {
 do {
 iVar1 = iVar2;
 iVar2 = 0;
 if (0 < n) {
 do {
 /* Unresolved local var: int j@[???] */
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 iVar1 = iVar2 + iVar1;
 }
 iVar3 = iVar3 + 1;
 iVar2 = iVar1;
 } while (m != iVar3);
 }
 return iVar1;
}



/* Function: loop_break @ 00100f24 */

/* WARNING: Removing unreachable block (ram,0x00100fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_break(int target)

{
 int iVar1;
 int *piVar2;
 int arr [5];
 
 /* Unresolved local var: int n@[???] */
 piVar2 = arr;
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 do {
 if (*piVar2 == target) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00100fac */

int loop_continue(int n)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = 1;
 iVar1 = 0;
 do {
 iVar2 = iVar1 + uVar3;
 if ((uVar3 & 1) == 0) {
 iVar2 = iVar1;
 }
 uVar3 = uVar3 + 1;
 iVar1 = iVar2;
 } while (uVar3 != n + 1U);
 }
 return iVar2;
}



/* Function: goto_forward @ 00100fe4 */

int goto_forward(int x)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = x * x;
 if (x < 1) {
 iVar1 = x;
 }
 return iVar1 << 1;
}



/* Function: goto_backward @ 00100ff8 */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 if (x < 1) {
 iVar1 = 1;
 }
 else {
 iVar2 = 1;
 iVar1 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != x + 1);
 }
 return iVar1;
}



/* Function: ternary_op @ 00101028 */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00101034 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_00101e40);
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
 iVar1 = goto_backward(5);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",iVar1);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 001012b4 */

/* WARNING: Removing unreachable block (ram,0x00101354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_multi_exit(int target)

{
 uintptr_t lVar1;
 int (*paiVar2) [4];
 int iVar3;
 int matrix [3] [4];
 
 paiVar2 = matrix;
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
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 lVar1 = 0;
 do {
 if ((*paiVar2)[lVar1] == target) {
 return (int)lVar1 + iVar3 * 10;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 4);
 iVar3 = iVar3 + 1;
 paiVar2 = paiVar2 + 1;
 } while (iVar3 != 3);
 return -1;
}



/* Function: infinite_loop @ 00101358 */

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



/* Function: multi_return @ 00101384 */

int multi_return(int x)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
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



/* Function: conditional_return @ 001013b4 */

int conditional_return(int x)

{
 int iVar1;
 
 if (x < 1) {
 iVar1 = 0;
 if (x < 0) {
 iVar1 = -x;
 }
 }
 else {
 iVar1 = x << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 001013cc */

int duffs_device(int *dst,int *src,int n)

{
 uint uVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 
 /* Unresolved local var: int count@[???] */
 if (n < 1) {
 n = -1;
 }
 else {
 iVar3 = n + 0xe;
 if (-1 < n + 7) {
 iVar3 = n + 7;
 }
 iVar3 = iVar3 >> 3;
 uVar1 = n & 7;
 if (-1 < -n) {
 uVar1 = -(-n & 7U);
 }
 piVar2 = src;
 piVar4 = dst;
 if (uVar1 == 4) goto LAB_0010149c;
 if ((int)uVar1 < 5) {
 if (uVar1 == 2) goto LAB_00101424;
 if ((int)uVar1 < 3) {
 if ((n & 7U) == 0) goto LAB_0010145c;
 if (uVar1 == 1) goto LAB_00101440;
 }
 else if (uVar1 == 3) {
 while( true ) {
 piVar2 = src + 1;
 piVar4 = dst + 1;
 *dst = *src;
LAB_00101424:
 src = piVar2 + 1;
 dst = piVar4 + 1;
 *piVar4 = *piVar2;
LAB_00101440:
 *dst = *src;
 iVar3 = iVar3 + -1;
 if (iVar3 < 1) break;
 src = src + 1;
 dst = dst + 1;
LAB_0010145c:
 *dst = *src;
 src = src + 1;
 dst = dst + 1;
LAB_00101478:
 *dst = *src;
 piVar2 = src + 1;
 piVar4 = dst + 1;
LAB_00101480:
 src = piVar2 + 1;
 dst = piVar4 + 1;
 *piVar4 = *piVar2;
LAB_00101494:
 piVar2 = src + 1;
 piVar4 = dst + 1;
 *dst = *src;
LAB_0010149c:
 src = piVar2 + 1;
 dst = piVar4 + 1;
 *piVar4 = *piVar2;
 }
 }
 }
 else {
 if (uVar1 == 6) goto LAB_00101480;
 if (uVar1 == 7) goto LAB_00101478;
 if (uVar1 == 5) goto LAB_00101494;
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 001014b0 */

int loop_complex_cond(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[DW_OP_reg0(x0)]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 iVar2 = 0;
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 x = x + -1;
 iVar2 = iVar2 + 1;
 } while (((x > iVar1 && iVar2 < 10) && x != 0) && ((x <= iVar1 || 9 < iVar2) || -1 < x));
 }
 return iVar1 + x + iVar2;
}



/* Function: loop_modify_var @ 001014f4 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 iVar3 = 0;
 if (0 < n) {
 while (iVar1 = iVar3 + 1, iVar1 < n) {
 iVar2 = iVar2 + iVar1;
 iVar3 = iVar3 + 3;
 if (iVar1 < 6) {
 iVar3 = iVar1;
 }
 }
 }
 return iVar2;
}



/* Function: loop_external_state @ 0010152c */

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



/* Function: tail_recursion @ 0010154c */

int tail_recursion(int n,int acc)

{
 int iVar1;
 
 if (1 < n) {
 iVar1 = tail_recursion(n + -1,n * acc);
 return iVar1;
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00101578 */

int indirect_recursion_a(int n,int depth)

{
 int iVar1;
 
 if (0 < depth) {
 if ((n & 1U) == 0) {
 iVar1 = n / 2;
 if (1 < depth) {
 iVar1 = indirect_recursion_a(iVar1 + 1,depth + -2);
 }
 }
 else if (depth < 2) {
 iVar1 = n * 3 + 1;
 }
 else {
 iVar1 = indirect_recursion_a(n * 3 + 2,depth + -2);
 }
 return iVar1;
 }
 return n;
}



/* Function: call_func_ptr @ 001015d8 */

int call_func_ptr(_func_int_int f,int x)

{
 int iVar1;
 
 iVar1 = f(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 001015f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_func_ptr_array(int idx,int x)

{
 uintptr_t lVar1;
 int iVar2;
 _func_int_int funcs [3];
 
 lVar1 = (uintptr_t)__stack_chk_guard;
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ((uint)idx < 3) {
 iVar2 = funcs[idx](x);
 }
 else {
 iVar2 = -1;
 }
 if ((uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(1, (void *)__stack_chk_guard, (void *)((uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard));
}



/* Function: call_virtual_func @ 00101674 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 0010167c */

int process_with_callback(int *arr,int n,_func_int_int cb)

{
 int iVar1;
 int *piVar2;
 int iVar4;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 piVar2 = arr;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = (*cb)(*piVar2);
 iVar4 = iVar4 + iVar1;
 piVar2 = piVar3;
 } while (piVar3 != arr + (ulong)(n - 1) + 1);
 }
 return iVar4;
}



/* Function: test_control_flow_l2 @ 001016dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 uintptr_t lVar1;
 int iVar2;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 lVar1 = (uintptr_t)__stack_chk_guard;
 puts(&DAT_001020e8);
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
 if ((uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(1,&__stack_chk_guard,lVar1 - __stack_chk_guard);
}



/* Function: non_local_jump @ 00101968 */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 iVar1 = x << 1;
 if (100 < x) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 001019cc */

int cpp_exception(int x)

{
 int iVar1;
 
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



/* Function: large_jump_table @ 001019f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int large_jump_table(int op,int a,int b)

{
 uintptr_t lVar1;
 int iVar2;
 int (*ops[10])(int, int);
 
 lVar1 = (uintptr_t)__stack_chk_guard;
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
 if ((uint)op < 10) {
 iVar2 = ops[op](a,b);
 }
 else {
 iVar2 = -1;
 }
 if ((uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,(uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard);
}



/* Function: conditional_func_ptr @ 00101a80 */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 _func_int_int pcVar2;
 
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
 iVar1 = pcVar2(x);
 return iVar1;
}



/* Function: state_machine @ 00101ac4 */

int state_machine(int event,int state)

{
 uint uVar1;
 
 uVar1 = state;
 if (state != 2) {
 if (state < 3) {
 if (state == 0) {
 uVar1 = (uint)(event == 1);
 }
 else if (state == 1) {
 uVar1 = event;
 if ((event != 2) && (uVar1 = state, event == 99)) {
 uVar1 = 3;
 }
 }
 else {
 uVar1 = 3;
 }
 }
 else {
 if (event == 0) {
 uVar1 = event;
 }
 if (state != 3) {
 uVar1 = 3;
 }
 }
 }
 return uVar1;
}



/* Function: fsm_func_table @ 00101b28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fsm_func_table(int event,int state)

{
 uintptr_t lVar1;
 int iVar2;
 _func_int_int state_handlers [4];
 
 lVar1 = (uintptr_t)__stack_chk_guard;
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 iVar2 = 3;
 if ((uint)state < 4) {
 iVar2 = (*state_handlers[state])(event);
 }
 if ((uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,(uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard);
}



/* Function: computed_goto @ 00101ba4 */

/* WARNING: Removing unreachable block (ram,0x00101c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 code *targets [4];
 
 targets[0] = (code *)(uintptr_t)DAT_00114098;
 targets[1] = (code *)(uintptr_t)DAT_001140a0;
 targets[2] = (code *)(uintptr_t)DAT_001140a8;
 targets[3] = (code *)(uintptr_t)DAT_001140b0;
 if (3 < (uint)idx) {
 return -1;
 }
 /* WARNING: Could not recover jumptable at 0x00101be4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*targets[idx])(labels,idx,0);
 return iVar1;
}



/* Function: obfuscated_cf @ 00101c34 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value] */
 return x << 1;
}



/* Function: opaque_predicate @ 00101c3c */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x << 1;
}



/* Function: overlapped_code @ 00101c44 */

int overlapped_code(int x)

{
 int iVar1;
 
 iVar1 = x / 2;
 if ((x & 1U) != 0) {
 iVar1 = x * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00101c5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 uintptr_t lVar1;
 int iVar2;
 int labels [4];
 
 lVar1 = (uintptr_t)__stack_chk_guard;
 puts(&DAT_00102308);
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
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
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
 if ((uintptr_t)lVar1 - (uintptr_t)__stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(1,&__stack_chk_guard,lVar1 - __stack_chk_guard);
}



/* Function: main @ 00101e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
