// Decompiled by BinaryAI
// SHA256: 778bfae5b9b1593c7496aba6c16aec9f34fec7b3ab93d78a38f40ca73eb4bf8a

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <setjmp.h>

typedef unsigned int uint;
typedef unsigned char byte;

static int completed_0 = 0;
static void *__dso_handle = 0;
static char jump_buffer[256];

static char DAT_00103030[] = "=== Control Flow Level 1 ===";
static char DAT_001032d8[] = "=== Control Flow Level 2 ===";
static char DAT_001034f0[] = "=== Control Flow Level 3 ===";

// External labels for computed goto
// (functions defined later in this file)



// Forward declaration for main
unsigned long long main(void);

// Forward declaration for indirect_recursion_b
unsigned long indirect_recursion_b(uint param_1,int param_2);

// Forward declaration for conditional_func_ptr
void conditional_func_ptr(int param_1,unsigned int param_2);

// Forward declaration for computed_goto
unsigned long long computed_goto(unsigned long long param_1,int param_2);

// Forward declaration for compute_case functions
unsigned long long compute_case_0(void);
unsigned long long compute_case_1(void);
unsigned long long compute_case_2(void);
unsigned long long compute_case_3(void);

// Forward declaration for computed_goto
unsigned long long computed_goto(unsigned long long param_1,int param_2);

// External declaration for __libc_start_main
extern int __libc_start_main(unsigned long long (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101080
void __cxa_finalize(void *param_1)
{
 __cxa_finalize(param_1);
 return;
}



// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
 exit(1);
}









// Function: deregister_tm_clones @ 0x101110
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101140
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101180
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: sequential_ops @ 0x1011c9
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x1011fb
int single_if(int param_1)
{
 int local_c;
 local_c = param_1;
 if (0 < param_1) {
 local_c = param_1 << 1;
 }
 return local_c;
}

// Function: if_else @ 0x101214
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x101233
int nested_if_2(int param_1,int param_2)
{
 if (param_1 < 1) {
 param_1 = 0;
 }
 else if (0 < param_2) {
 param_1 = param_2 + param_1;
 }
 return param_1;
}

// Function: nested_if_deep @ 0x101263
unsigned long long nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned long long uVar1;
 if (param_1 < 1) {
 uVar1 = 0;
 }
 else if (param_2 < 1) {
 uVar1 = 1;
 }
 else if (param_3 < 1) {
 uVar1 = 2;
 }
 else if (param_4 < 1) {
 uVar1 = 3;
 }
 else if (param_5 < 1) {
 uVar1 = 4;
 }
 else {
 uVar1 = 5;
 }
 return uVar1;
}

// Function: if_elseif_chain @ 0x1012c3
unsigned long long if_elseif_chain(int param_1)
{
 unsigned long long uVar1;
 if (param_1 == 0) {
 uVar1 = 10;
 }
 else if (param_1 == 1) {
 uVar1 = 0x14;
 }
 else if (param_1 == 2) {
 uVar1 = 0x1e;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: if_elseif_long @ 0x1012fc
unsigned long long if_elseif_long(int param_1)
{
 unsigned long long uVar1;
 if (param_1 == 0) {
 uVar1 = 100;
 }
 else if (param_1 == 1) {
 uVar1 = 200;
 }
 else if (param_1 == 2) {
 uVar1 = 300;
 }
 else if (param_1 == 3) {
 uVar1 = 400;
 }
 else if (param_1 == 4) {
 uVar1 = 500;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: switch_small @ 0x10134f
unsigned long long switch_small(int param_1,unsigned long long param_2,unsigned long long param_3)
{
 unsigned long long uVar1;
 char auVar2 [16];
 if (param_1 == 3) {
 uVar1 = 2;
 param_3 = 0;
 goto LAB_001013b7;
 }
 if (param_1 < 4) {
 if (param_1 == 2) {
 uVar1 = 0x32;
 goto LAB_001013b7;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 param_3 = 10;
 uVar1 = 0xf;
 goto LAB_001013b7;
 }
 if (param_1 == 1) {
 uVar1 = 5;
 goto LAB_001013b7;
 }
 }
 }
 uVar1 = 0xffffffff;
LAB_001013b7:
 return uVar1;
}

// Function: switch_large @ 0x1013b9
unsigned long long switch_large(unsigned int param_1)
{
 unsigned long long uVar1;
 switch(param_1) {
 case 0:
 uVar1 = 0;
 break;
 case 1:
 uVar1 = 10;
 break;
 case 2:
 uVar1 = 0x14;
 break;
 case 3:
 uVar1 = 0x1e;
 break;
 case 4:
 uVar1 = 0x28;
 break;
 case 5:
 uVar1 = 0x32;
 break;
 case 6:
 uVar1 = 0x3c;
 break;
 case 7:
 uVar1 = 0x46;
 break;
 case 8:
 uVar1 = 0x50;
 break;
 case 9:
 uVar1 = 0x5a;
 break;
 default:
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: switch_default @ 0x10143b
unsigned long long switch_default(int param_1)
{
 if (param_1 == 3) {
 return 300;
 }
 if (param_1 < 4) {
 if (param_1 == 1) {
 return 100;
 }
 if (param_1 == 2) {
 return 200;
 }
 }
 return 0;
}

// Function: switch_fallthrough @ 0x10147c
int switch_fallthrough(int param_1)
{
 int local_c;
 local_c = 0;
 if (param_1 == 3) {
 local_c = 0xc;
LAB_001014b1:
 local_c = local_c + param_1 * 2;
LAB_001014b9:
 local_c = local_c + param_1;
 }
 else {
 if (param_1 < 4) {
 if (param_1 == 1) goto LAB_001014b9;
 if (param_1 == 2) goto LAB_001014b1;
 }
 local_c = -1;
 }
 return local_c;
}

// Function: loop_for_fixed @ 0x1014cd
int loop_for_fixed(int param_1)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + local_c;
 }
 return local_10;
}

// Function: loop_while @ 0x1014ff
int loop_while(int param_1)
{
 int local_1c;
 int local_c;
 local_c = 0;
 for (local_1c = param_1; local_1c != 0; local_1c = local_1c / 10) {
 local_c = local_c + 1;
 }
 if (local_c < 1) {
 local_c = 1;
 }
 return local_c;
}

// Function: loop_dowhile @ 0x10154c
int loop_dowhile(int param_1)
{
 int local_1c;
 int local_c;
 local_c = 0;
 local_1c = param_1;
 do {
 local_1c = local_1c / 10;
 local_c = local_c + 1;
 } while (local_1c != 0);
 return local_c;
}

// Function: loop_nested @ 0x10158d
int loop_nested(int param_1,int param_2)
{
 int local_14;
 int local_10;
 int local_c;
 local_14 = 0;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_14 = local_14 + 1;
 }
 }
 return local_14;
}

// Function: loop_break @ 0x1015d5
int loop_break(int param_1)
{
 long in_FS_OFFSET;
 int local_30;
 int local_28 [4];
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_18 = 0x32;
 for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
 if (param_1 == local_28[local_30]) goto LAB_0010164a;
 }
 local_30 = -1;
LAB_0010164a:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_30;
 }
 __stack_chk_fail();
}

// Function: loop_continue @ 0x101660
int loop_continue(int param_1)
{
 int local_10;
 uint local_c;
 local_10 = 0;
 for (local_c = 1; (int)local_c <= param_1; local_c = local_c + 1) {
 if ((local_c & 1) != 0) {
 local_10 = local_10 + local_c;
 }
 }
 return local_10;
}

// Function: goto_forward @ 0x10169f
int goto_forward(int param_1)
{
 int local_c;
 local_c = param_1;
 if (0 < param_1) {
 local_c = param_1 * param_1;
 }
 return local_c << 1;
}

// Function: goto_backward @ 0x1016c9
int goto_backward(int param_1)
{
 int local_10;
 int local_c;
 if (param_1 < 1) {
 local_10 = 1;
 }
 else {
 local_10 = 1;
 for (local_c = 1; local_c <= param_1; local_c = local_c + 1) {
 local_10 = local_10 * local_c;
 }
 }
 return local_10;
}

// Function: ternary_op @ 0x10170d
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x101728
void test_control_flow_l1(void)
{
 uint uVar1;
 puts(&DAT_00103030);
 uVar1 = sequential_ops(5,7,3);
 printf("CF-L1-01 (sequential_ops): %d\n",(unsigned long)uVar1);
 uVar1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n",(unsigned long)uVar1);
 uVar1 = single_if(0xfffffffb);
 printf("CF-L1-02 (single_if): %d\n",(unsigned long)uVar1);
 uVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",(unsigned long)uVar1);
 uVar1 = if_else(0xfffffffd);
 printf("CF-L1-03 (if_else): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_2(10,0xfffffffb);
 printf("CF-L1-04 (nested_if_2): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_2(0xfffffff6,5);
 printf("CF-L1-04 (nested_if_2): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",(unsigned long)uVar1);
 uVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",(unsigned long)uVar1);
 uVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",(unsigned long)uVar1);
 uVar1 = switch_small(2, 0, 0);
 printf("CF-L1-08 (switch_small): %d\n",(unsigned long)uVar1);
 uVar1 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",(unsigned long)uVar1);
 uVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",(unsigned long)uVar1);
 uVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",(unsigned long)uVar1);
 uVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",(unsigned long)uVar1);
 uVar1 = loop_while(0x3039);
 printf("CF-L1-13 (loop_while): %d\n",(unsigned long)uVar1);
 uVar1 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",(unsigned long)uVar1);
 uVar1 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",(unsigned long)uVar1);
 uVar1 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",(unsigned long)uVar1);
 uVar1 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",(unsigned long)uVar1);
 uVar1 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",(unsigned long)uVar1);
 uVar1 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",(unsigned long)uVar1);
 uVar1 = goto_forward(0xfffffffd);
 printf("CF-L1-18 (goto_forward): %d\n",(unsigned long)uVar1);
 uVar1 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",(unsigned long)uVar1);
 uVar1 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",(unsigned long)uVar1);
 uVar1 = ternary_op(3,8);
 printf("CF-L1-20 (ternary_op): %d\n",(unsigned long)uVar1);
 return;
}

// Function: loop_multi_exit @ 0x101adf
int loop_multi_exit(int param_1)
{
 long in_FS_OFFSET;
 int local_50;
 int local_4c;
 int local_48 [4];
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_48[0] = 1;
 local_48[1] = 2;
 local_48[2] = 3;
 local_48[3] = 4;
 local_38 = 5;
 local_34 = 6;
 local_30 = 7;
 local_2c = 8;
 local_28 = 9;
 local_24 = 10;
 local_20 = 0xb;
 local_1c = 0xc;
 local_50 = 0;
 do {
 if (2 < local_50) {
 local_4c = -1;
LAB_00101bac:
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_4c;
 }
 for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
 if (param_1 == local_48[(long)local_50 * 4 + (long)local_4c]) {
 local_4c = local_4c + local_50 * 10;
 goto LAB_00101bac;
 }
 }
 local_50 = local_50 + 1;
 } while( true );
}

// Function: infinite_loop @ 0x101bc2
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

// Function: multi_return @ 0x101bff
int multi_return(uint param_1)
{
 int iVar1;
 if ((int)param_1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1 * 2;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 }
 else {
 iVar1 = -2;
 }
 }
 return iVar1;
}

// Function: conditional_return @ 0x101c43
int conditional_return(int param_1)
{
 if (param_1 < 1) {
 if (param_1 < 0) {
 param_1 = -param_1;
 }
 else {
 param_1 = 0;
 }
 }
 else {
 param_1 = param_1 * 2;
 }
 return param_1;
}

// Function: duffs_device @ 0x101c6f
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 unsigned int *local_28;
 unsigned int *local_20;
 int local_c;
 if (param_3 < 1) {
 param_3 = -1;
 }
 else {
 local_c = param_3 + 7;
 if (param_3 + 7 < 0) {
 local_c = param_3 + 0xe;
 }
 local_c = local_c >> 3;
 local_28 = param_2;
 local_20 = param_1;
 switch(param_3 % 8) {
 case 0:
 do {
 *local_20 = *local_28;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
switchD_00101cdd_caseD_7:
 *local_20 = *local_28;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
switchD_00101cdd_caseD_6:
 *local_20 = *local_28;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
switchD_00101cdd_caseD_5:
 *local_20 = *local_28;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
switchD_00101cdd_caseD_4:
 *local_20 = *local_28;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
switchD_00101cdd_caseD_3:
 *local_20 = *local_28;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
switchD_00101cdd_caseD_2:
 *local_20 = *local_28;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
switchD_00101cdd_caseD_1:
 *local_20 = *local_28;
 local_c = local_c + -1;
 local_28 = local_28 + 1;
 local_20 = local_20 + 1;
 } while (0 < local_c);
 break;
 case 1:
 goto switchD_00101cdd_caseD_1;
 case 2:
 goto switchD_00101cdd_caseD_2;
 case 3:
 goto switchD_00101cdd_caseD_3;
 case 4:
 goto switchD_00101cdd_caseD_4;
 case 5:
 goto switchD_00101cdd_caseD_5;
 case 6:
 goto switchD_00101cdd_caseD_6;
 case 7:
 goto switchD_00101cdd_caseD_7;
 }
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x101dd4
int loop_complex_cond(int param_1)
{
 int local_14;
 int local_10;
 int local_c;
 local_14 = 0;
 local_c = 0;
 for (local_10 = param_1; ((local_14 < local_10 && (local_c < 10)) && (0 < local_10));
 local_10 = local_10 + -1) {
 local_14 = local_14 + 2;
 local_c = local_c + 1;
 }
 return local_c + local_14 + local_10;
}

// Function: loop_modify_var @ 0x101e24
int loop_modify_var(int param_1)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + local_c;
 if (5 < local_c) {
 local_c = local_c + 2;
 }
 }
 return local_10;
}

// Function: loop_external_state @ 0x101e60
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

// Function: recursion_factorial @ 0x101e91
int recursion_factorial(int param_1)
{
 int iVar1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 else {
 iVar1 = recursion_factorial(param_1 + -1);
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}

// Function: tail_recursion @ 0x101ec0
unsigned long tail_recursion(int param_1,uint param_2)
{
 unsigned long uVar1;
 if (param_1 < 2) {
 uVar1 = (unsigned long)param_2;
 }
 else {
 uVar1 = tail_recursion(param_1 + -1,param_1 * param_2);
 }
 return uVar1;
}

// Function: indirect_recursion_a @ 0x101ef5
unsigned long indirect_recursion_a(uint param_1,int param_2)
{
 unsigned long uVar1;
 if (param_2 < 1) {
 uVar1 = (unsigned long)param_1;
 }
 else if ((param_1 & 1) == 0) {
 uVar1 = indirect_recursion_b((int)param_1 / 2,param_2 + -1);
 }
 else {
 uVar1 = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
 }
 return uVar1;
}

// Function: indirect_recursion_b @ 0x101f56
unsigned long indirect_recursion_b(uint param_1,int param_2)
{
 unsigned long uVar1;
 if (param_2 < 1) {
 uVar1 = (unsigned long)param_1;
 }
 else {
 uVar1 = indirect_recursion_a(param_1 + 1,param_2 + -1);
 }
 return uVar1;
}

// Function: call_func_ptr @ 0x101f8a
void call_func_ptr(void *param_1,unsigned int param_2)
{
 void (*func_ptr)(unsigned int) = (void (*)(unsigned int))param_1;
 func_ptr(param_2);
}

// Function: double_value @ 0x101faa
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x101fbc
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_func_ptr_array @ 0x101fd2
unsigned long long call_func_ptr_array(int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 int (*local_28 [3])(int);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28[0] = double_value;
 local_28[1] = triple_value;
 local_28[2] = recursion_factorial;
 if ((param_1 < 0) || (2 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (unsigned long long)(*local_28[param_1])(param_2);
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_virtual_func @ 0x10204e
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x102064
int process_with_callback(long param_1,int param_2,void *param_3)
{
 int iVar1;
 int local_10;
 int local_c;
 int (*callback)(unsigned int);
 callback = (int (*)(unsigned int))param_3;
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 iVar1 = callback(*(unsigned int *)(param_1 + (long)local_c * 4));
 local_10 = local_10 + iVar1;
 }
 return local_10;
}

// Function: test_control_flow_l2 @ 0x1020bd
void test_control_flow_l2(void)
{
 uint uVar1;
 long in_FS_OFFSET;
 unsigned int local_80;
 unsigned int local_7c;
 unsigned int local_78;
 unsigned int local_74;
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001032d8);
 uVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",(unsigned long)uVar1);
 local_80 = 0;
 uVar1 = infinite_loop(&local_80);
 printf("CF-L2-02 (infinite_loop): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(0xfffffffb);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",(unsigned long)uVar1);
 uVar1 = conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): %d\n",(unsigned long)uVar1);
 local_58 = 1;
 local_54 = 2;
 local_50 = 3;
 local_4c = 4;
 local_48 = 5;
 local_44 = 6;
 local_40 = 7;
 local_3c = 8;
 local_38 = 0;
 local_30 = 0;
 local_28 = 0;
 local_20 = 0;
 uVar1 = duffs_device(&local_38,&local_58,8);
 printf("CF-L2-05 (duffs_device): %d\n",(unsigned long)uVar1);
 uVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar1);
 uVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",(unsigned long)uVar1);
 local_7c = 0;
 uVar1 = loop_external_state(&local_7c);
 printf("CF-L2-08 (loop_external_state): %d\n",(unsigned long)uVar1);
 uVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",(unsigned long)uVar1);
 uVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",(unsigned long)uVar1);
 uVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",(unsigned long)uVar1);
 call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): done\n");
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(unsigned long)uVar1);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(unsigned long)uVar1);
 local_78 = 1;
 local_74 = 2;
 local_70 = 3;
 local_6c = 4;
 local_68 = 5;
 uVar1 = process_with_callback(&local_78,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",(unsigned long)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: non_local_jump @ 0x102405
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp((jmp_buf *)jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 longjmp((jmp_buf *)jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp((jmp_buf *)jump_buffer,2);
 }
 param_1 = param_1 * 2;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}

// Function: cpp_exception @ 0x10246d
int cpp_exception(int param_1)
{
 if (param_1 < 0) {
 param_1 = -1;
 }
 else if (param_1 < 0x65) {
 param_1 = param_1 * 2;
 }
 else {
 param_1 = -2;
 }
 return param_1;
}

// Function: op_add @ 0x102499
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x1024b1
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1024c7
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x1024de
unsigned long long op_div(int param_1,int param_2)
{
 unsigned long uVar1;
 if (param_2 == 0) {
 uVar1 = 0;
 }
 else {
 uVar1 = (long)param_1 / (long)param_2 & 0xffffffff;
 }
 return uVar1;
}

// Function: op_mod @ 0x102502
unsigned long op_mod(int param_1,int param_2)
{
 unsigned long uVar1;
 if (param_2 == 0) {
 uVar1 = 0;
 }
 else {
 uVar1 = (long)param_1 % (long)param_2 & 0xffffffff;
 }
 return uVar1;
}

// Function: op_and @ 0x102528
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x10253e
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x102554
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x10256a
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x102586
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: large_jump_table @ 0x1025a2
unsigned long long large_jump_table(int param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long (*local_68 [4])(unsigned int, unsigned int);
 unsigned long (*local_48)(int, int);
 unsigned int (*local_40)(unsigned int, unsigned int);
 unsigned int (*local_38)(unsigned int, unsigned int);
 unsigned int (*local_30)(unsigned int, unsigned int);
 int (*local_28)(int, byte);
 int (*local_20)(int, byte);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_68[0] = (unsigned long long (*)(unsigned int, unsigned int))op_add;
 local_68[1] = (unsigned long long (*)(unsigned int, unsigned int))op_sub;
 local_68[2] = (unsigned long long (*)(unsigned int, unsigned int))op_mul;
 local_68[3] = (unsigned long long (*)(unsigned int, unsigned int))op_div;
 local_48 = op_mod;
 local_40 = op_and;
 local_38 = op_or;
 local_30 = op_xor;
 local_28 = op_shl;
 local_20 = op_shr;
 if ((param_1 < 0) || (9 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*local_68[param_1])(param_2,param_3);
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: conditional_func_ptr @ 0x102673
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*func_ptr)(int) = 0;
 if (param_1 == 0) {
 func_ptr = double_value;
 }
 else if (param_1 == 1) {
 func_ptr = triple_value;
 }
 else {
 func_ptr = recursion_factorial;
 }
 if (func_ptr) {
 func_ptr((int)param_2);
 }
}

// Function: state_machine @ 0x1026c3
unsigned long long state_machine(int param_1,int param_2)
{
 if (param_2 == 3) {
 if (param_1 == 0) {
 return 0;
 }
 return 3;
 }
 if (param_2 < 4) {
 if (param_2 == 2) {
 return 2;
 }
 if (param_2 < 3) {
 if (param_2 == 0) {
 if (param_1 == 1) {
 return 1;
 }
 return 0;
 }
 if (param_2 == 1) {
 if (param_1 == 2) {
 return 2;
 }
 if (param_1 == 99) {
 return 3;
 }
 return 1;
 }
 }
 }
 return 3;
}

// Function: state_idle @ 0x10274e
unsigned long long state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x102765
unsigned long long state_processing(int param_1)
{
 unsigned long long uVar1;
 if (param_1 == 2) {
 uVar1 = 2;
 }
 else if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
}

// Function: state_done @ 0x102791
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x1027a3
unsigned long long state_error(int param_1)
{
 unsigned long long uVar1;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 else {
 uVar1 = 3;
 }
 return uVar1;
}

// Function: fsm_func_table @ 0x1027c2
unsigned long long fsm_func_table(unsigned int param_1,int param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long (*local_38 [5])(int);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = state_idle;
 local_38[1] = state_processing;
 local_38[2] = state_done;
 local_38[3] = state_error;
 if ((param_2 < 0) || (3 < param_2)) {
 uVar1 = 3;
 }
 else {
 uVar1 = (*local_38[param_2])(param_1);
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: compute_case_0 @ 0x1028b7
unsigned long long compute_case_0(void)
{
 return 0;
}

// Function: compute_case_1 @ 0x1028c2
unsigned long long compute_case_1(void)
{
 return 1;
}

// Function: compute_case_2 @ 0x1028cd
unsigned long long compute_case_2(void)
{
 return 2;
}

// Function: compute_case_3 @ 0x1028d8
unsigned long long compute_case_3(void)
{
 return 3;
}

// Function: computed_goto @ 0x102849
unsigned long long computed_goto(unsigned long long param_1,int param_2)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long (*local_38[4])(void);
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = compute_case_0;
 local_38[1] = compute_case_1;
 local_38[2] = compute_case_2;
 local_38[3] = compute_case_3;
 if ((-1 < param_2) && (param_2 < 4)) {
 uVar1 = (*local_38[param_2])();
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: obfuscated_cf @ 0x1028f7
int obfuscated_cf(int param_1)
{
 int local_c;
 local_c = param_1;
 if (param_1 * param_1 < -1) {
 local_c = param_1 * 2 + 1;
 }
 return local_c << 1;
}

// Function: opaque_predicate @ 0x102926
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x102950
int overlapped_code(uint param_1)
{
 int iVar1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 else {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x102981
void test_control_flow_l3(void)
{
 uint uVar1;
 long in_FS_OFFSET;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001034f0);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",(unsigned long)uVar1);
 uVar1 = cpp_exception(0xfffffffb);
 printf("CF-L3-02 (cpp_exception): %d\n",(unsigned long)uVar1);
 uVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",(unsigned long)uVar1);
 conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): done\n");
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",(unsigned long)uVar1);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",(unsigned long)uVar1);
 local_28 = 0;
 local_24 = 1;
 local_20 = 2;
 local_1c = 3;
 uVar1 = computed_goto((unsigned long long)local_28,2);
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",(unsigned long)uVar1);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",(unsigned long)uVar1);
 uVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",(unsigned long)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: main @ 0x102b7e
unsigned long long main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



