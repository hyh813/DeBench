/* Auto-injected type definitions by preprocessor */
#include <stdbool.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;

/* Additional type definitions */
typedef struct { long __jmp_buf[8]; } __jmp_buf_tag;

#define NULL ((void *)0)

/* Global variables */
static char completed_0 = '\0';
static void *__dso_handle = 0;
static __jmp_buf_tag jump_buffer;

/* Forward declarations for function pointer array */
unsigned int op_add(unsigned int, unsigned int);
unsigned int op_sub(unsigned int, unsigned int);
unsigned int op_mul(unsigned int, unsigned int);
unsigned int op_div(unsigned int, unsigned int);
unsigned int op_mod(unsigned int, unsigned int);
unsigned int op_and(unsigned int, unsigned int);
unsigned int op_or(unsigned int, unsigned int);
unsigned int op_xor(unsigned int, unsigned int);
unsigned int op_shl(unsigned int, unsigned int);
unsigned int op_shr(unsigned int, unsigned int);

/* Data references */
static const char DAT_00102b5c[] = "CF-L1 Tests:\n";
static const char DAT_00102dca[] = "CF-L2 Tests:\n";
static const char DAT_00102fbe[] = "CF-L3 Tests:\n";
static const int DAT_00102b18[12] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
static unsigned int (*PTR_op_add_00113d48[10])(unsigned int, unsigned int) = {(unsigned int (*)(unsigned int, unsigned int))op_add, (unsigned int (*)(unsigned int, unsigned int))op_sub, (unsigned int (*)(unsigned int, unsigned int))op_mul, (unsigned int (*)(unsigned int, unsigned int))op_div, (unsigned int (*)(unsigned int, unsigned int))op_mod, (unsigned int (*)(unsigned int, unsigned int))op_and, (unsigned int (*)(unsigned int, unsigned int))op_or, (unsigned int (*)(unsigned int, unsigned int))op_xor, (unsigned int (*)(unsigned int, unsigned int))op_shl, (unsigned int (*)(unsigned int, unsigned int))op_shr};

/* Forward declarations */
int main(void);
int double_value(int param_1);
int triple_value(int param_1);
int recursion_factorial(int param_1);
int indirect_recursion_a(int param_1,int param_2);
int indirect_recursion_b(int param_1,int param_2);
bool state_idle(int param_1);
unsigned int state_processing(int param_1);
unsigned int state_done(int param_1);
unsigned int state_error(int param_1);
unsigned int op_add(unsigned int param_1,unsigned int param_2);
unsigned int op_sub(unsigned int param_1,unsigned int param_2);
unsigned int op_mul(unsigned int param_1,unsigned int param_2);
unsigned int op_div(unsigned int param_1,unsigned int param_2);
unsigned int op_mod(unsigned int param_1,unsigned int param_2);
unsigned int op_and(unsigned int param_1,unsigned int param_2);
unsigned int op_or(unsigned int param_1,unsigned int param_2);
unsigned int op_xor(unsigned int param_1,unsigned int param_2);
unsigned int op_shl(unsigned int param_1,unsigned int param_2);
unsigned int op_shr(unsigned int param_1,unsigned int param_2);

/* External function declarations */
void *memcpy(void *__dest,void *__src,size_t __n);
int _setjmp(__jmp_buf_tag *__env);
void abort(void);
void longjmp(__jmp_buf_tag *__env,int __val);
int printf(const char *__format,...);

/* Labels for computed goto */
static unsigned long long LAB_0010277c(void) { return 0; }
static unsigned long long LAB_00102784(void) { return 1; }
static unsigned long long LAB_00102790(void) { return 2; }
static unsigned long long LAB_0010279c(void) { return 3; }

// Decompiled by BinaryAI
// SHA256: bd122f5de2f567f6921feb41b0802016883a03218d42978e15e25705db5c52f9



// Function: sequential_ops @ 0x100a54
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x100a9c
int single_if(int param_1)
{
 int local_4;
 local_4 = param_1;
 if (0 < param_1) {
 local_4 = param_1 << 1;
 }
 return local_4;
}

// Function: if_else @ 0x100ad0
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x100b08
int nested_if_2(int param_1,int param_2)
{
 int local_4;
 if (param_1 < 1) {
 local_4 = 0;
 }
 else {
 local_4 = param_1;
 if (0 < param_2) {
 local_4 = param_1 + param_2;
 }
 }
 return local_4;
}

// Function: nested_if_deep @ 0x100b68
unsigned int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int local_4;
 if (param_1 < 1) {
 local_4 = 0;
 }
 else if (param_2 < 1) {
 local_4 = 1;
 }
 else if (param_3 < 1) {
 local_4 = 2;
 }
 else if (param_4 < 1) {
 local_4 = 3;
 }
 else if (param_5 < 1) {
 local_4 = 4;
 }
 else {
 local_4 = 5;
 }
 return local_4;
}

// Function: if_elseif_chain @ 0x100c20
unsigned int if_elseif_chain(int param_1)
{
 unsigned int local_4;
 if (param_1 == 0) {
 local_4 = 10;
 }
 else if (param_1 == 1) {
 local_4 = 0x14;
 }
 else if (param_1 == 2) {
 local_4 = 0x1e;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}

// Function: if_elseif_long @ 0x100c90
unsigned int if_elseif_long(int param_1)
{
 unsigned int local_4;
 if (param_1 == 0) {
 local_4 = 100;
 }
 else if (param_1 == 1) {
 local_4 = 200;
 }
 else if (param_1 == 2) {
 local_4 = 300;
 }
 else if (param_1 == 3) {
 local_4 = 400;
 }
 else if (param_1 == 4) {
 local_4 = 500;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}

// Function: switch_small @ 0x100d38
unsigned int switch_small(unsigned int param_1)
{
 unsigned int local_4;
 switch(param_1) {
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
 local_4 = 0xffffffff;
 }
 return local_4;
}

// Function: switch_large @ 0x100de8
unsigned int switch_large(unsigned int param_1)
{
 unsigned int local_4;
 switch(param_1) {
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
 local_4 = 0xffffffff;
 }
 return local_4;
}

// Function: switch_default @ 0x100eac
unsigned int switch_default(int param_1)
{
 unsigned int local_4;
 if (param_1 == 1) {
 local_4 = 100;
 }
 else if (param_1 == 2) {
 local_4 = 200;
 }
 else if (param_1 == 3) {
 local_4 = 300;
 }
 else {
 local_4 = 0;
 }
 return local_4;
}

// Function: switch_fallthrough @ 0x100f20
int switch_fallthrough(int param_1)
{
 int local_8;
 local_8 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 local_8 = 0xc;
 }
 local_8 = local_8 + param_1 * 2;
 }
 return local_8 + param_1;
}

// Function: loop_for_fixed @ 0x100fb4
int loop_for_fixed(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 }
 return local_8;
}

// Function: loop_while @ 0x10100c
int loop_while(int param_1)
{
 int local_c;
 int local_8;
 int local_4;
 local_8 = 0;
 for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
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

// Function: loop_dowhile @ 0x10107c
int loop_dowhile(int param_1)
{
 int local_8;
 int local_4;
 local_8 = 0;
 local_4 = param_1;
 do {
 local_4 = local_4 / 10;
 local_8 = local_8 + 1;
 } while (local_4 != 0);
 return local_8;
}

// Function: loop_nested @ 0x1010c4
int loop_nested(int param_1,int param_2)
{
 int local_14;
 int local_10;
 int local_c;
 local_c = 0;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_c = local_c + 1;
 }
 }
 return local_c;
}

// Function: loop_break @ 0x10114c
int loop_break(int param_1)
{
 int local_28;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 int local_8;
 local_8 = param_1;
 uStack_18 = 0x280000001e;
 local_20 = 0x140000000a;
 local_10 = 0x32;
 local_28 = 0;
 while( true ) {
 if (4 < local_28) {
 return -1;
 }
 if (*(int *)((long)&local_20 + (long)local_28 * 4) == param_1) break;
 local_28 = local_28 + 1;
 }
 return local_28;
}

// Function: loop_continue @ 0x1011e4
int loop_continue(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 1; local_c <= param_1; local_c = local_c + 1) {
 if (local_c % 2 != 0) {
 local_8 = local_8 + local_c;
 }
 }
 return local_8;
}

// Function: goto_forward @ 0x101260
int goto_forward(int param_1)
{
 int local_8;
 local_8 = param_1;
 if (0 < param_1) {
 local_8 = param_1 * param_1;
 }
 return local_8 << 1;
}

// Function: goto_backward @ 0x1012b4
int goto_backward(int param_1)
{
 int local_10;
 int local_c;
 int local_4;
 if (param_1 < 1) {
 local_4 = 1;
 }
 else {
 local_c = 1;
 for (local_10 = 1; local_10 <= param_1; local_10 = local_10 + 1) {
 local_c = local_c * local_10;
 }
 local_4 = local_c;
 }
 return local_4;
}

// Function: ternary_op @ 0x101338
int ternary_op(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 return local_c;
}

// Function: test_control_flow_l1 @ 0x10137c
int test_control_flow_l1(void)
{
 int iVar1;
 unsigned long uVar2;
 printf(DAT_00102b5c);
 uVar2 = sequential_ops(10,5,3);
 printf("CF-L1-01 (sequential_ops): %d\n",uVar2 & 0xffffffff);
 uVar2 = single_if(5);
 printf("CF-L1-02 (single_if): %d\n",uVar2 & 0xffffffff);
 uVar2 = single_if(-5);
 printf("CF-L1-02 (single_if): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_else(0);
 printf("CF-L1-03 (if_else): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_2(10,0xfffffffb);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_2(0xfffffff6,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_while(0x3039);
 printf("CF-L1-13 (loop_while): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",uVar2 & 0xffffffff);
 uVar2 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",uVar2 & 0xffffffff);
 uVar2 = goto_forward(0xfffffffd);
 printf("CF-L1-18 (goto_forward): %d\n",uVar2 & 0xffffffff);
 uVar2 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",uVar2 & 0xffffffff);
 uVar2 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",uVar2 & 0xffffffff);
 uVar2 = ternary_op(3,8);
 iVar1 = printf("CF-L1-20 (ternary_op): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: loop_multi_exit @ 0x101670
int loop_multi_exit(int param_1)
{
 int local_50;
 int local_4c;
 int aiStack_48 [12];
 int local_18;
 local_18 = param_1;
 memcpy(aiStack_48,&DAT_00102b18,0x30);
 local_4c = 0;
 do {
 if (2 < local_4c) {
 return -1;
 }
 for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
 if (aiStack_48[(long)local_4c * 4 + (long)local_50] == local_18) {
 return local_4c * 10 + local_50;
 }
 }
 local_4c = local_4c + 1;
 } while( true );
}

// Function: infinite_loop @ 0x101748
int infinite_loop(int *param_1)
{
 int local_c;
 local_c = 0;
 do {
 if (*param_1 == 1) {
 return local_c;
 }
 local_c = local_c + 1;
 } while (local_c < 0x3e9);
 *param_1 = 1;
 return local_c;
}

// Function: multi_return @ 0x1017ac
int multi_return(int param_1)
{
 int local_4;
 if (param_1 < 0) {
 local_4 = -1;
 }
 else {
 local_4 = param_1 << 1;
 if (local_4 < 0x65) {
 if (param_1 % 2 != 0) {
 local_4 = param_1 + 1;
 }
 }
 else {
 local_4 = -2;
 }
 }
 return local_4;
}

// Function: conditional_return @ 0x10183c
int conditional_return(int param_1)
{
 int local_c;
 int local_8;
 if (param_1 < 1) {
 if (param_1 < 0) {
 local_c = -param_1;
 }
 else {
 local_c = 0;
 }
 local_8 = local_c;
 }
 else {
 local_8 = param_1 << 1;
 }
 return local_8;
}

// Function: duffs_device @ 0x1018ac
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 int local_20;
 unsigned int *local_18;
 unsigned int *local_10;
 int local_4;
 if (param_3 < 1) {
 local_4 = -1;
 }
 else {
 local_20 = (param_3 + 7) / 8;
 local_18 = param_2;
 local_10 = param_1;
 local_4 = param_3;
 switch(param_3 % 8) {
 case 0:
 local_18 = param_2;
 local_10 = param_1;
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

// Function: loop_complex_cond @ 0x101a80
int loop_complex_cond(int param_1)
{
 bool bVar1;
 int local_10;
 int local_c;
 int local_8;
 local_8 = 0;
 local_10 = 0;
 local_c = param_1;
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

// Function: loop_modify_var @ 0x101b34
int loop_modify_var(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = local_8 + local_c;
 if (5 < local_c) {
 local_c = local_c + 2;
 }
 }
 return local_8;
}

// Function: loop_external_state @ 0x101bac
int loop_external_state(int *param_1)
{
 int local_c;
 local_c = 0;
 do {
 if (*param_1 != 0) {
 return local_c;
 }
 local_c = local_c + 1;
 } while (local_c < 0x65);
 return local_c;
}

// Function: recursion_factorial @ 0x101bfc
int recursion_factorial(int param_1)
{
 int local_14;
 if (param_1 < 2) {
 local_14 = 1;
 }
 else {
 local_14 = recursion_factorial(param_1 + -1);
 local_14 = param_1 * local_14;
 }
 return local_14;
}

// Function: tail_recursion @ 0x101c5c
int tail_recursion(int param_1,int param_2)
{
 int local_14;
 local_14 = param_2;
 if (1 < param_1) {
 local_14 = tail_recursion(param_1 + -1,param_1 * param_2);
 }
 return local_14;
}

// Function: indirect_recursion_a @ 0x101cbc
int indirect_recursion_a(int param_1,int param_2)
{
 int local_14;
 local_14 = param_1;
 if (0 < param_2) {
 if (param_1 % 2 == 0) {
 local_14 = indirect_recursion_b(param_1 / 2,param_2 + -1);
 }
 else {
 local_14 = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
 }
 }
 return local_14;
}

// Function: indirect_recursion_b @ 0x101d5c
int indirect_recursion_b(int param_1,int param_2)
{
 int local_14;
 local_14 = param_1;
 if (0 < param_2) {
 local_14 = indirect_recursion_a(param_1 + 1,param_2 + -1);
 }
 return local_14;
}

// Function: call_func_ptr @ 0x101db8
void call_func_ptr(void *param_1,unsigned int param_2)
{
 ((int (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x101de4
unsigned int call_func_ptr_array(int param_1,unsigned int param_2)
{
 void *local_40 [4];
 unsigned int local_1c;
 int local_18;
 unsigned int local_14;
 local_18 = param_1;
 local_1c = param_2;
 local_40[1] = triple_value;
 local_40[0] = double_value;
 local_40[2] = recursion_factorial;
 if ((param_1 < 0) || (2 < param_1)) {
 local_14 = 0xffffffff;
 }
 else {
 local_14 = ((unsigned int (*)(unsigned int))local_40[param_1])(param_2);
 }
 return local_14;
}

// Function: double_value @ 0x101e64
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x101e7c
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x101e98
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x101eb4
int process_with_callback(long param_1,int param_2,void *param_3)
{
 int iVar1;
 int local_30;
 int local_2c;
 local_2c = 0;
 for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
 iVar1 = ((int (*)(unsigned int))param_3)(*(unsigned int *)(param_1 + (long)local_30 * 4));
 local_2c = local_2c + iVar1;
 }
 return local_2c;
}

// Function: test_control_flow_l2 @ 0x101f30
int test_control_flow_l2(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long long local_80;
 unsigned long long uStack_78;
 unsigned int local_70;
 unsigned int local_64;
 unsigned long long local_60;
 unsigned long long uStack_58;
 unsigned long long local_50;
 unsigned long long uStack_48;
 unsigned long long local_40;
 unsigned long long uStack_38;
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned int local_14;
 printf(DAT_00102dca);
 uVar2 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar2 & 0xffffffff);
 local_14 = 0;
 uVar2 = infinite_loop(&local_14);
 printf("CF-L2-02 (infinite_loop): %d\n",uVar2 & 0xffffffff);
 uVar2 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n",uVar2 & 0xffffffff);
 uVar2 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",uVar2 & 0xffffffff);
 uVar2 = multi_return(50);
 printf("CF-L2-03 (multi_return): %d\n",uVar2 & 0xffffffff);
 uVar2 = conditional_return(0);
 printf("CF-L2-04 (conditional_return): %d\n",uVar2 & 0xffffffff);
 uVar2 = conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): %d\n",uVar2 & 0xffffffff);
 uStack_38 = 0x400000003;
 local_40 = 0x200000001;
 uStack_28 = 0x800000007;
 local_30 = 0x600000005;
 uStack_58 = 0;
 local_60 = 0;
 uStack_48 = 0;
 local_50 = 0;
 uVar2 = duffs_device((unsigned int *)&local_60,(unsigned int *)&local_40,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",uVar2 & 0xffffffff);
 local_64 = 0;
 uVar2 = loop_external_state(&local_64);
 printf("CF-L2-08 (loop_external_state): %d\n",uVar2 & 0xffffffff);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar2 & 0xffffffff);
 uVar2 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar2 & 0xffffffff);
 uVar2 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar2 & 0xffffffff);
 call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): done\n");
 uVar2 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar2 & 0xffffffff);
 uStack_78 = 0x400000003;
 local_80 = 0x200000001;
 local_70 = 5;
 uVar2 = process_with_callback((long)&local_80,5,double_value);
 iVar1 = printf("CF-L2-15 (process_with_callback): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: non_local_jump @ 0x102188
int non_local_jump(int param_1)
{
 int iVar1;
 int local_14;
 iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 longjmp((__jmp_buf_tag *)&jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp((__jmp_buf_tag *)&jump_buffer,2);
 }
 local_14 = param_1 << 1;
 }
 else {
 local_14 = -1;
 }
 return local_14;
}

// Function: cpp_exception @ 0x102218
int cpp_exception(int param_1)
{
 int local_4;
 if (param_1 < 0) {
 local_4 = -1;
 }
 else if (param_1 < 0x65) {
 local_4 = param_1 << 1;
 }
 else {
 local_4 = -2;
 }
 return local_4;
}

// Function: large_jump_table @ 0x102274
unsigned int large_jump_table(int param_1,unsigned int param_2,unsigned int param_3)
{
 void *apcStack_70 [10];
 unsigned int local_20;
 unsigned int local_1c;
 int local_18;
 unsigned int local_14;
 local_20 = param_3;
 local_1c = param_2;
 local_18 = param_1;
 memcpy(apcStack_70,&PTR_op_add_00113d48,0x50);
 if ((local_18 < 0) || (9 < local_18)) {
 local_14 = 0xffffffff;
 }
 else {
 local_14 = ((unsigned int (*)(unsigned int,unsigned int))apcStack_70[local_18])(local_1c,local_20);
 }
 return local_14;
}

// Function: op_add @ 0x1022f8
unsigned int op_add(unsigned int param_1,unsigned int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x102318
unsigned int op_sub(unsigned int param_1,unsigned int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x102338
unsigned int op_mul(unsigned int param_1,unsigned int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x102358
unsigned int op_div(unsigned int param_1,unsigned int param_2)
{
 unsigned int local_c;
 if (param_2 == 0) {
 local_c = 0;
 }
 else {
 local_c = 0;
 if (param_2 != 0) {
 local_c = param_1 / param_2;
 }
 }
 return local_c;
}

// Function: op_mod @ 0x10239c
unsigned int op_mod(unsigned int param_1,unsigned int param_2)
{
 unsigned int iVar1;
 unsigned int local_c;
 if (param_2 == 0) {
 local_c = 0;
 }
 else {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 local_c = param_1 - iVar1 * param_2;
 }
 return local_c;
}

// Function: op_and @ 0x1023e8
unsigned int op_and(unsigned int param_1,unsigned int param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x102408
unsigned int op_or(unsigned int param_1,unsigned int param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x102428
unsigned int op_xor(unsigned int param_1,unsigned int param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x102448
unsigned int op_shl(unsigned int param_1,unsigned int param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x102468
unsigned int op_shr(unsigned int param_1,unsigned int param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x102488
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *local_20;
 if (param_1 == 0) {
 local_20 = double_value;
 }
 else if (param_1 == 1) {
 local_20 = triple_value;
 }
 else {
 local_20 = recursion_factorial;
 }
 ((unsigned int (*)(unsigned int))local_20)(param_2);
 return;
}

// Function: state_machine @ 0x102504
unsigned int state_machine(int param_1,unsigned int param_2)
{
 unsigned int local_4;
 switch(param_2) {
 case 0:
 if (param_1 == 1) {
 local_4 = 1;
 }
 else {
 local_4 = 0;
 }
 break;
 case 1:
 if (param_1 == 2) {
 local_4 = 2;
 }
 else if (param_1 == 99) {
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
 if (param_1 == 0) {
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

// Function: fsm_func_table @ 0x1025ec
unsigned int fsm_func_table(unsigned int param_1,int param_2)
{
 void *local_40 [4];
 int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 local_18 = param_1;
 local_1c = param_2;
 local_40[1] = state_processing;
 local_40[0] = state_idle;
 local_40[3] = state_error;
 local_40[2] = state_done;
 if ((param_2 < 0) || (3 < param_2)) {
 local_14 = 3;
 }
 else {
 local_14 = ((unsigned int (*)(int))local_40[param_2])(param_1);
 }
 return local_14;
}

// Function: state_idle @ 0x10266c
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x10268c
unsigned int state_processing(int param_1)
{
 unsigned int local_4;
 if (param_1 == 2) {
 local_4 = 2;
 }
 else if (param_1 == 99) {
 local_4 = 3;
 }
 else {
 local_4 = 1;
 }
 return local_4;
}

// Function: state_done @ 0x1026e4
unsigned int state_done(int param_1)
{
 return 2;
}

// Function: state_error @ 0x1026f8
unsigned int state_error(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}

// Function: computed_goto @ 0x10271c
unsigned long long computed_goto(unsigned long long param_1,int param_2)
{
 unsigned long long uVar1;
 void *local_40 [5];
 int local_14;
 unsigned long long local_10;
 local_10 = param_1;
 local_14 = param_2;
 local_40[1] = (void *)&LAB_00102784;
 local_40[0] = (void *)&LAB_0010277c;
 local_40[3] = (void *)&LAB_0010279c;
 local_40[2] = (void *)&LAB_00102790;
 if ((-1 < param_2) && (param_2 < 4)) {
 uVar1 = ((unsigned long long (*)(void))local_40[param_2])();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: obfuscated_cf @ 0x1027bc
int obfuscated_cf(int param_1)
{
 int local_8;
 local_8 = param_1;
 if (param_1 * param_1 + 1 < 0) {
 local_8 = param_1 * 2 + 1;
 }
 return local_8 << 1;
}

// Function: opaque_predicate @ 0x102814
int opaque_predicate(int param_1)
{
 int local_4;
 if ((uint)(param_1 * 0x12345678) % 2 == 0) {
 local_4 = param_1 << 1;
 }
 else {
 local_4 = param_1 * 3;
 }
 return local_4;
}

// Function: overlapped_code @ 0x102884
int overlapped_code(uint param_1)
{
 int local_4;
 if ((param_1 & 1) == 0) {
 local_4 = (int)param_1 / 2;
 }
 else {
 local_4 = param_1 * 3 + 1;
 }
 return local_4;
}

// Function: test_control_flow_l3 @ 0x1028d0
int test_control_flow_l3(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long long local_20;
 unsigned long long uStack_18;
 printf(DAT_00102fbe);
 uVar2 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar2 & 0xffffffff);
 uVar2 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar2 & 0xffffffff);
 uVar2 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar2 & 0xffffffff);
 uVar2 = cpp_exception(0xfffffffb);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar2 & 0xffffffff);
 uVar2 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",uVar2 & 0xffffffff);
 conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): done\n");
 uVar2 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",uVar2 & 0xffffffff);
 uVar2 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",uVar2 & 0xffffffff);
 uStack_18 = 0x300000002;
 local_20 = 0x100000000;
 uVar2 = computed_goto(local_20,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar2 & 0xffffffff);
 uVar2 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",uVar2 & 0xffffffff);
 uVar2 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",uVar2 & 0xffffffff);
 uVar2 = overlapped_code(5);
 iVar1 = printf("CF-L3-10 (overlapped_code): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x102a50
int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _fini @ 0x102a84
static void _fini(void)
{
 return;
}

