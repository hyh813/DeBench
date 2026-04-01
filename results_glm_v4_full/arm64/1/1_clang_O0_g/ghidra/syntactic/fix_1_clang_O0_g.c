/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

#include <stdbool.h>

/* Type definitions for decompiler-generated types */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);
typedef _func_int_int *func_ptr_array;

/* External function and variable declarations */
extern char completed_0;
extern void *__dso_handle;
void __cxa_finalize(void *);
void deregister_tm_clones(void);

typedef struct __jmp_buf_tag { unsigned long __jb[20]; } __jmp_buf_tag[1];
__jmp_buf_tag jump_buffer;
int _setjmp(__jmp_buf_tag);
void longjmp(__jmp_buf_tag, int);

extern char DAT_00102b18[];
extern char DAT_00102b5c[];
extern char DAT_00102dca[];
extern char DAT_00102fbe[];
extern void *PTR_op_add_00113d48[];

/* Data definitions */
char DAT_00102b18[48] = {0};  /* 3x4 matrix data (12 ints) */
char DAT_00102b5c[] = "\n=== Testing Control Flow Level 1 ===\n";
char DAT_00102dca[] = "\n=== Testing Control Flow Level 2 ===\n";
char DAT_00102fbe[] = "\n=== Testing Control Flow Level 3 ===\n";

/* Function declarations - must come before array initialization */
void *memcpy(void *, const void *, unsigned long);
int printf(const char *, ...);

void LAB_0010277c(void);
void LAB_00102784(void);
void LAB_00102790(void);
void LAB_0010279c(void);

int double_value(int x);
int triple_value(int x);
int state_idle(int event);
int state_processing(int event);
int state_done(int event);
int state_error(int event);

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

/* Array initialization - now after function declarations */
void *PTR_op_add_00113d48[10] = {
    op_add, op_sub, op_mul, op_div, op_mod,
    op_and, op_or, op_xor, op_shl, op_shr
};

/* CRT data definitions */
char completed_0 = 0;

/* Empty LAB function definitions for computed_goto */
void LAB_0010277c(void) {}
void LAB_00102784(void) {}
void LAB_00102790(void) {}
void LAB_0010279c(void) {}

/* CRT stub function implementations */
void deregister_tm_clones(void) {}


/* Function: FUN_00100880 @ 00100880 */

void FUN_00100880(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001009fc @ 001009fc */

void FUN_001009fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00100a54 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 00100a9c */

int single_if(int x)

{
 undefined4 local_4;
 
 local_4 = x;
 if (0 < x) {
 local_4 = x << 1;
 }
 return local_4;
}



/* Function: if_else @ 00100ad0 */

int if_else(int x)

{
 uint local_4;
 
 local_4 = (uint)(0 < x);
 return local_4;
}



/* Function: nested_if_2 @ 00100b08 */

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



/* Function: nested_if_deep @ 00100b68 */

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



/* Function: if_elseif_chain @ 00100c20 */

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



/* Function: if_elseif_long @ 00100c90 */

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



/* Function: switch_small @ 00100d38 */

int switch_small(int op)

{
 int local_4;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 switch(op) {
 case 0:
 local_4 = 0xf;
 break;
 case 1:
 local_4 = 5;
 break;
 case 2:
 local_4 = 0x32;
 break;
 case 3:
 local_4 = 2;
 break;
 default:
 local_4 = -1;
 }
 return local_4;
}



/* Function: switch_large @ 00100de8 */

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



/* Function: switch_default @ 00100eac */

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



/* Function: switch_fallthrough @ 00100f20 */

int switch_fallthrough(int op)

{
 int local_8;
 
 /* Unresolved local var: int result@[???] */
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



/* Function: loop_for_fixed @ 00100fb4 */

int loop_for_fixed(int n)

{
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int sum@[???] */
 local_8 = 0;
 /* Unresolved local var: int i@[???] */
 for (local_c = 0; local_c < n; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 }
 return local_8;
}



/* Function: loop_while @ 0010100c */

int loop_while(int x)

{
 undefined4 local_c;
 undefined4 local_8;
 undefined4 local_4;
 
 /* Unresolved local var: int count@[???] */
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



/* Function: loop_dowhile @ 0010107c */

int loop_dowhile(int x)

{
 undefined4 local_8;
 undefined4 local_4;
 
 /* Unresolved local var: int count@[???] */
 local_8 = 0;
 local_4 = x;
 do {
 local_4 = local_4 / 10;
 local_8 = local_8 + 1;
 } while (local_4 != 0);
 return local_8;
}



/* Function: loop_nested @ 001010c4 */

int loop_nested(int m,int n)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 /* Unresolved local var: int total@[???] */
 local_c = 0;
 /* Unresolved local var: int i@[???] */
 for (local_10 = 0; local_10 < m; local_10 = local_10 + 1) {
 /* Unresolved local var: int j@[???] */
 for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
 local_c = local_c + 1;
 }
 }
 return local_c;
}



/* Function: loop_break @ 0010114c */

int loop_break(int target)

{
 int local_28;
 int local_20 [6];
 int local_8;
 
 /* Unresolved local var: int[5] arr@[???]
 Unresolved local var: int n@[???] */
 local_8 = target;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[4] = 0x32;
 /* Unresolved local var: int i@[???] */
 local_28 = 0;
 while( true ) {
 if (4 < local_28) {
 return -1;
 }
 if (local_20[local_28] == target) break;
 local_28 = local_28 + 1;
 }
 return local_28;
}



/* Function: loop_continue @ 001011e4 */

int loop_continue(int n)

{
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int sum@[???] */
 local_8 = 0;
 /* Unresolved local var: int i@[???] */
 for (local_c = 1; local_c <= n; local_c = local_c + 1) {
 if (local_c % 2 != 0) {
 local_8 = local_8 + local_c;
 }
 }
 return local_8;
}



/* Function: goto_forward @ 00101260 */

int goto_forward(int x)

{
 int local_8;
 
 /* Unresolved local var: int result@[???] */
 local_8 = x;
 if (0 < x) {
 local_8 = x * x;
 }
 return local_8 << 1;
}



/* Function: goto_backward @ 001012b4 */

int goto_backward(int x)

{
 undefined4 local_10;
 undefined4 local_c;
 undefined4 local_4;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
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



/* Function: ternary_op @ 00101338 */

int ternary_op(int a,int b)

{
 int local_c;
 
 local_c = b;
 if (b < a) {
 local_c = a;
 }
 return local_c;
}



/* Function: test_control_flow_l1 @ 0010137c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 uint uVar1;
 
 printf(DAT_00102b5c);
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



/* Function: loop_multi_exit @ 00101670 */

int loop_multi_exit(int target)

{
 int local_50;
 int local_4c;
 int aiStack_48 [12];
 int local_18;
 
 /* Unresolved local var: int[3][4] matrix@[DW_OP_breg31(sp): +8] */
 local_18 = target;
 memcpy(aiStack_48,&DAT_00102b18,0x30);
 /* Unresolved local var: int i@[DW_OP_breg31(sp): +4] */
 local_4c = 0;
 do {
 if (2 < local_4c) {
 return -1;
 }
 /* Unresolved local var: int j@[DW_OP_breg31(sp): 0] */
 for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
 if (aiStack_48[(long)local_4c * 4 + (long)local_50] == local_18) {
 return local_4c * 10 + local_50;
 }
 }
 local_4c = local_4c + 1;
 } while( true );
}



/* Function: infinite_loop @ 00101748 */

int infinite_loop(int *flag)

{
 int local_c;
 
 /* Unresolved local var: int count@[???] */
 local_c = 0;
 do {
 if (*flag == 1) {
 return local_c;
 }
 local_c = local_c + 1;
 } while (local_c < 0x3e9);
 *flag = 1;
 return local_c;
}



/* Function: multi_return @ 001017ac */

int multi_return(int x)

{
 undefined4 local_4;
 
 /* Unresolved local var: int temp@[???] */
 if (x < 0) {
 local_4 = -1;
 }
 else {
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
 return local_4;
}



/* Function: conditional_return @ 0010183c */

int conditional_return(int x)

{
 undefined4 local_c;
 undefined4 local_8;
 
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



/* Function: duffs_device @ 001018ac */

int duffs_device(int *dst,int *src,int n)

{
 int local_20;
 int *local_18;
 int *local_10;
 int local_4;
 
 /* Unresolved local var: int count@[???] */
 if (n < 1) {
 local_4 = -1;
 }
 else {
 local_20 = (n + 7) / 8;
 local_18 = src;
 local_10 = dst;
 local_4 = n;
 switch(n % 8) {
 case 0:
 local_18 = src;
 local_10 = dst;
 do {
 *local_10 = *local_18;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
switchD_00101924_caseD_7:
 *local_10 = *local_18;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
switchD_00101924_caseD_6:
 *local_10 = *local_18;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
switchD_00101924_caseD_5:
 *local_10 = *local_18;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
switchD_00101924_caseD_4:
 *local_10 = *local_18;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
switchD_00101924_caseD_3:
 *local_10 = *local_18;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
switchD_00101924_caseD_2:
 *local_10 = *local_18;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
switchD_00101924_caseD_1:
 *local_10 = *local_18;
 local_20 = local_20 + -1;
 local_18 = local_18 + 1;
 local_10 = local_10 + 1;
 } while (0 < local_20);
 break;
 case 1:
 goto switchD_00101924_caseD_1;
 case 2:
 goto switchD_00101924_caseD_2;
 case 3:
 goto switchD_00101924_caseD_3;
 case 4:
 goto switchD_00101924_caseD_4;
 case 5:
 goto switchD_00101924_caseD_5;
 case 6:
 goto switchD_00101924_caseD_6;
 case 7:
 goto switchD_00101924_caseD_7;
 }
 }
 return local_4;
}



/* Function: loop_complex_cond @ 00101a80 */

int loop_complex_cond(int x)

{
 bool bVar1;
 undefined4 local_10;
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???] */
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



/* Function: loop_modify_var @ 00101b34 */

int loop_modify_var(int n)

{
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int sum@[???] */
 local_8 = 0;
 /* Unresolved local var: int i@[???] */
 for (local_c = 0; local_c < n; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 if (5 < local_c) {
 local_c = local_c + 2;
 }
 }
 return local_8;
}



/* Function: loop_external_state @ 00101bac */

int loop_external_state(int *flag)

{
 int local_c;
 
 /* Unresolved local var: int count@[???] */
 local_c = 0;
 do {
 if (*flag != 0) {
 return local_c;
 }
 local_c = local_c + 1;
 } while (local_c < 0x65);
 return local_c;
}



/* Function: recursion_factorial @ 00101bfc */

int recursion_factorial(int n)

{
 undefined4 local_14;
 
 if (n < 2) {
 local_14 = 1;
 }
 else {
 local_14 = recursion_factorial(n + -1);
 local_14 = n * local_14;
 }
 return local_14;
}



/* Function: tail_recursion @ 00101c5c */

int indirect_recursion_b(int n,int depth);

int tail_recursion(int n,int acc)

{
 undefined4 local_14;
 
 local_14 = acc;
 if (1 < n) {
 local_14 = tail_recursion(n + -1,n * acc);
 }
 return local_14;
}



/* Function: indirect_recursion_a @ 00101cbc */

int indirect_recursion_a(int n,int depth)

{
 undefined4 local_14;
 
 local_14 = n;
 if (0 < depth) {
 if (n % 2 == 0) {
 local_14 = indirect_recursion_b(n / 2,depth + -1);
 }
 else {
 local_14 = indirect_recursion_b(n * 3 + 1,depth + -1);
 }
 }
 return local_14;
}



/* Function: indirect_recursion_b @ 00101d5c */

int indirect_recursion_b(int n,int depth)

{
 undefined4 local_14;
 
 local_14 = n;
 if (0 < depth) {
 local_14 = indirect_recursion_a(n + 1,depth + -1);
 }
 return local_14;
}



/* Function: call_func_ptr @ 00101db8 */

int call_func_ptr(_func_int_int f,int x)

{
 int iVar1;
 
 iVar1 = f(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00101de4 */

int call_func_ptr_array(int idx,int x)

{
 _func_int_int local_40 [4];
 int local_1c;
 int local_18;
 int local_14;
 
 /* Unresolved local var: _func_int_int *[3] funcs@[DW_OP_breg31(sp): 0] */
 local_18 = idx;
 local_1c = x;
 local_40[1] = triple_value;
 local_40[0] = double_value;
 local_40[2] = recursion_factorial;
 if ((idx < 0) || (2 < idx)) {
 local_14 = -1;
 }
 else {
 local_14 = local_40[idx](x);
 }
 return local_14;
}



/* Function: double_value @ 00101e64 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00101e7c */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 00101e98 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00101eb4 */

int process_with_callback(int *arr,int n,_func_int_int cb)

{
 int iVar1;
 int local_30;
 int local_2c;
 
 /* Unresolved local var: int sum@[DW_OP_breg31(sp): +4] */
 local_2c = 0;
 /* Unresolved local var: int i@[DW_OP_breg31(sp): 0] */
 for (local_30 = 0; local_30 < n; local_30 = local_30 + 1) {
 iVar1 = cb(arr[local_30]);
 local_2c = local_2c + iVar1;
 }
 return local_2c;
}



/* Function: test_control_flow_l2 @ 00101f30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 uint uVar1;
 int local_80 [7];
 int local_64;
 int local_60 [19];
 int local_14;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[5] arr@[DW_OP_breg31(sp): +64] */
 printf(DAT_00102dca);
 uVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",(ulong)uVar1);
 local_14 = 0;
 uVar1 = infinite_loop(&local_14);
 printf("CF-L2-02 (infinite_loop): %d\n",(ulong)uVar1);
 uVar1 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
 uVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
 uVar1 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar1);
 uVar1 = conditional_return(-5);
 printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar1);
 local_60[10] = 3;
 local_60[0xb] = 4;
 local_60[8] = 1;
 local_60[9] = 2;
 local_60[0xe] = 7;
 local_60[0xf] = 8;
 local_60[0xc] = 5;
 local_60[0xd] = 6;
 local_60[2] = 0;
 local_60[3] = 0;
 local_60[0] = 0;
 local_60[1] = 0;
 local_60[6] = 0;
 local_60[7] = 0;
 local_60[4] = 0;
 local_60[5] = 0;
 uVar1 = duffs_device(local_60,local_60 + 8,8);
 printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar1);
 uVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar1);
 uVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",(ulong)uVar1);
 local_64 = 0;
 uVar1 = loop_external_state(&local_64);
 printf("CF-L2-08 (loop_external_state): %d\n",(ulong)uVar1);
 uVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar1);
 uVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar1);
 uVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar1);
 uVar1 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",(ulong)uVar1);
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar1);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar1);
 local_80[2] = 3;
 local_80[3] = 4;
 local_80[0] = 1;
 local_80[1] = 2;
 local_80[4] = 5;
 uVar1 = process_with_callback(local_80,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",(ulong)uVar1);
 return;
}



/* Function: non_local_jump @ 00102188 */

int non_local_jump(int x)

{
 int iVar1;
 int local_14;
 
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
 local_14 = x << 1;
 }
 else {
 local_14 = -1;
 }
 return local_14;
}



/* Function: cpp_exception @ 00102218 */

int cpp_exception(int x)

{
 undefined4 local_4;
 
 if (x < 0) {
 local_4 = -1;
 }
 else if (x < 0x65) {
 local_4 = x << 1;
 }
 else {
 local_4 = -2;
 }
 return local_4;
}



/* Function: large_jump_table @ 00102274 */

int large_jump_table(int op,int a,int b)

{
 _func_int_int_int auStack_70 [10];
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 
 /* Unresolved local var: _func_int_int_int *[10] ops@[DW_OP_breg31(sp): 0] */
 local_20 = b;
 local_1c = a;
 local_18 = op;
 memcpy(auStack_70,&PTR_op_add_00113d48,0x50);
 if ((local_18 < 0) || (9 < local_18)) {
 local_14 = -1;
 }
 else {
 local_14 = auStack_70[local_18](local_1c,local_20);
 }
 return local_14;
}



/* Function: op_add @ 001022f8 */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00102318 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00102338 */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 00102358 */

int op_div(int a,int b)

{
 undefined4 local_c;
 
 if (b == 0) {
 local_c = 0;
 }
 else {
 local_c = 0;
 if (b != 0) {
 local_c = a / b;
 }
 }
 return local_c;
}



/* Function: op_mod @ 0010239c */

int op_mod(int a,int b)

{
 int iVar1;
 undefined4 local_c;
 
 if (b == 0) {
 local_c = 0;
 }
 else {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 local_c = a - iVar1 * b;
 }
 return local_c;
}



/* Function: op_and @ 001023e8 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00102408 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00102428 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00102448 */

int op_shl(int a,int b)

{
 return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00102468 */

int op_shr(int a,int b)

{
 return a >> (b & 0x1fU);
}



/* Function: conditional_func_ptr @ 00102488 */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 _func_int_int local_20;
 
 /* Unresolved local var: _func_int_int * func@[DW_OP_breg31(sp): 0] */
 if (mode == 0) {
 local_20 = double_value;
 }
 else if (mode == 1) {
 local_20 = triple_value;
 }
 else {
 local_20 = recursion_factorial;
 }
 iVar1 = local_20(x);
 return iVar1;
}



/* Function: state_machine @ 00102504 */

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



/* Function: fsm_func_table @ 001025ec */

int fsm_func_table(int event,int state)

{
 _func_int_int local_40 [4];
 int local_1c;
 int local_18;
 int local_14;
 
 /* Unresolved local var: _func_int_int *[4] state_handlers@[DW_OP_breg31(sp): 0]
 */
 local_18 = event;
 local_1c = state;
 local_40[1] = state_processing;
 local_40[0] = state_idle;
 local_40[3] = state_error;
 local_40[2] = state_done;
 if ((state < 0) || (3 < state)) {
 local_14 = 3;
 }
 else {
 local_14 = local_40[state](event);
 }
 return local_14;
}



/* Function: state_idle @ 0010266c */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 0010268c */

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



/* Function: state_done @ 001026e4 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 001026f8 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: computed_goto @ 0010271c */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 void *local_40 [5];
 int local_14;
 int *local_10;
 
 /* Unresolved local var: void *[4] targets@[???] */
 local_10 = labels;
 local_14 = idx;
 local_40[1] = &LAB_00102784;
 local_40[0] = &LAB_0010277c;
 local_40[3] = &LAB_0010279c;
 local_40[2] = &LAB_00102790;
 if ((-1 < idx) && (idx < 4)) {
 /* WARNING: Could not recover jumptable at 0x001027b8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)())local_40[idx])();
 iVar1 = 0;
 return iVar1;
 }
 return -1;
}



/* Function: obfuscated_cf @ 001027bc */

int obfuscated_cf(int x)

{
 undefined4 local_8;
 
 /* Unresolved local var: int result@[???] */
 local_8 = x;
 if (x * x + 1 < 0) {
 local_8 = x * 2 + 1;
 }
 return local_8 << 1;
}



/* Function: opaque_predicate @ 00102814 */

int opaque_predicate(int x)

{
 undefined4 local_4;
 
 /* Unresolved local var: int cond@[???] */
 if ((uint)(x * 0x12345678) % 2 == 0) {
 local_4 = x << 1;
 }
 else {
 local_4 = x * 3;
 }
 return local_4;
}



/* Function: overlapped_code @ 00102884 */

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



/* Function: test_control_flow_l3 @ 001028d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 uint uVar1;
 int local_20 [4];
 
 /* Unresolved local var: int[4] labels@[???] */
 printf(DAT_00102fbe);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 uVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 uVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar1);
 uVar1 = cpp_exception(-5);
 printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar1);
 uVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",(ulong)uVar1);
 uVar1 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",(ulong)uVar1);
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",(ulong)uVar1);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",(ulong)uVar1);
 local_20[2] = 2;
 local_20[3] = 3;
 local_20[0] = 0;
 local_20[1] = 1;
 uVar1 = computed_goto(local_20,2);
 printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",(ulong)uVar1);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",(ulong)uVar1);
 uVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",(ulong)uVar1);
 return;
}



/* Function: main @ 00102a50 */

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
