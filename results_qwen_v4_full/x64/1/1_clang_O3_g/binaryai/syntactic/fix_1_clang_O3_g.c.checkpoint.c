// Decompiled by BinaryAI
// SHA256: 1c0ccd903189f989fb1de44f5a560bd70bede15fffd5f7083a9fb395808a444c

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdbool.h>

// Type definitions
typedef unsigned char byte;

// External declarations
extern void __libc_start_main(void *main, unsigned long long argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);
extern void __cxa_finalize(void *dso_handle);

// Standard library functions (already declared in headers)
// puts and printf are declared in stdio.h

// Global variable declarations
static int completed_0 = 0;
static void *__dso_handle = 0;
static jmp_buf jump_buffer;

// Forward declaration
extern unsigned long long main(void);
extern unsigned long recursion_factorial(uint param_1);
extern int double_value(int param_1);
extern int triple_value(int param_1);
extern unsigned long long computed_goto(unsigned long long param_1,unsigned int param_2);
extern int non_local_jump(uint param_1);

// Data section declarations
static unsigned int DAT_00103280[] = {0, 10, 20, 30};
static int DAT_00103108[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static int DAT_001030d8[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static char DAT_001037e5[] = "Control Flow Tests - Level 1";
static char DAT_00103809[] = "Control Flow Tests - Level 2";
static char DAT_0010382d[] = "Control Flow Tests - Level 3";
static unsigned long long _DAT_00103140 = 1;
static unsigned long long _DAT_00103160 = 1;
static unsigned long long _DAT_00103270 = 1;

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x101050
extern int _setjmp(jmp_buf __env);

// Function: <EXTERNAL>::longjmp @ 0x101060
extern void longjmp(jmp_buf __env,int __val);

// Function: sequential_ops @ 0x101170
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x101180
int single_if(int param_1)
{
 return param_1 << (0 < param_1);
}

// Function: if_else @ 0x101190
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x1011a0
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 if (param_2 < 0) {
 param_2 = 0;
 }
 iVar1 = param_2 + param_1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x1011b0
byte nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 if (param_1 < 1) {
 return 0;
 }
 if (param_2 < 1) {
 return 1;
 }
 if (param_3 < 1) {
 return 2;
 }
 if (0 < param_4) {
 return 0 < param_5 | 4;
 }
 return 3;
}

// Function: if_elseif_chain @ 0x1011f0
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x101210
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x101230
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&DAT_00103280 + (long)(int)param_1 * 4);
 }
 return uVar1;
}

// Function: switch_large @ 0x101250
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x101270
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x101290
int switch_fallthrough(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
 }
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x1012c0
int loop_for_fixed(int param_1)
{
 if (0 < param_1) {
 return (int)((unsigned long)(param_1 - 2) * (unsigned long)(param_1 - 1) >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x1012e0
int loop_while(int param_1)
{
 int iVar1;
 uint uVar2;
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}

// Function: loop_dowhile @ 0x101320
int loop_dowhile(int param_1)
{
 int iVar1;
 uint uVar2;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}

// Function: loop_nested @ 0x101360
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_2 * param_1;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: loop_break @ 0x101380
unsigned long long loop_break(unsigned int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 switch(param_1) {
 case 10:
 break;
 default:
 return 0xffffffff;
 case 0x14:
 return 1;
 case 0x1e:
 return 2;
 case 0x28:
 return 3;
 case 0x32:
 uVar1 = 4;
 }
 return uVar1;
}

// Function: loop_continue @ 0x1013c0
int loop_continue(uint param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 int iVar9;
 uint uVar10;
 uint uVar11;
 if ((int)param_1 < 1) {
 return 0;
 }
 if (param_1 < 8) {
 iVar2 = 0;
 uVar3 = 1;
 }
 else {
 uVar3 = param_1 & 0xfffffff8;
 uVar1 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar2 = 0;
 iVar5 = 0;
 uVar10 = 1;
 uVar11 = 3;
 iVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar4 = uVar1 & 0xfffffffe;
 uVar10 = 1;
 uVar11 = 3;
 iVar2 = 0;
 iVar5 = 0;
 iVar7 = 0;
 iVar9 = 0;
 do {
 uVar6 = -(uint)((uVar10 & 1) == 0);
 uVar8 = -(uint)((uVar11 & 1) == 0);
 iVar2 = (~uVar6 & uVar10 + 8) + (~uVar6 & uVar10) + iVar2;
 iVar5 = (~uVar8 & uVar11 + 8) + (~uVar8 & uVar11) + iVar5;
 iVar7 = (~uVar6 & uVar10 + 0xc) + (~uVar6 & uVar10 + 4) + iVar7;
 iVar9 = (~uVar8 & uVar11 + 0xc) + (~uVar8 & uVar11 + 4) + iVar9;
 uVar10 = uVar10 + 0x10;
 uVar11 = uVar11 + 0x10;
 uVar4 = uVar4 - 2;
 } while (uVar4 != 0);
 }
 if ((uVar1 & 1) != 0) {
 uVar1 = -(uint)((uVar10 & 1) == 0);
 uVar4 = -(uint)((uVar11 & 1) == 0);
 iVar2 = iVar2 + (~uVar1 & uVar10);
 iVar5 = iVar5 + (~uVar4 & uVar11);
 iVar7 = iVar7 + (~uVar1 & uVar10 + 4);
 iVar9 = iVar9 + (~uVar4 & uVar11 + 4);
 }
 iVar2 = iVar5 + iVar9 + iVar2 + iVar7;
 if (uVar3 == param_1) {
 return iVar2;
 }
 uVar3 = uVar3 | 1;
 }
 do {
 iVar2 = iVar2 + (-(uVar3 & 1) & uVar3);
 uVar3 = uVar3 + 1;
 } while (param_1 + 1 != uVar3);
 return iVar2;
}

// Function: goto_forward @ 0x101530
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}

// Function: goto_backward @ 0x101540
unsigned long goto_backward(uint param_1)
{
 unsigned long uVar2;
 uint uVar3;
 if ((int)param_1 < 1) {
 return 1;
 }
 uVar3 = 1;
 uVar2 = 1;
 do {
 uVar2 = uVar2 * uVar3;
 uVar3 = uVar3 + 1;
 } while (uVar3 <= param_1);
 return uVar2;
}

// Function: ternary_op @ 0x1017a0
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x1017b0
void test_control_flow_l1(void)
{
 puts(&DAT_001037e5);
 printf("CF-L1-01 (sequential_ops): %d\n",0x15);
 printf("CF-L1-02 (single_if): %d\n",0x14);
 printf("CF-L1-02 (single_if): %d\n",0xfffffffb);
 printf("CF-L1-03 (if_else): %d\n",1);
 printf("CF-L1-03 (if_else): %d\n",0);
 printf("CF-L1-04 (nested_if_2): %d\n",0xf);
 printf("CF-L1-04 (nested_if_2): %d\n",10);
 printf("CF-L1-04 (nested_if_2): %d\n",0);
 printf("CF-L1-05 (nested_if_deep): %d\n",5);
 printf("CF-L1-06 (if_elseif_chain): %d\n",0x14);
 printf("CF-L1-07 (if_elseif_long): %d\n",400);
 printf("CF-L1-08 (switch_small): %d\n",0x32);
 printf("CF-L1-09 (switch_large): %d\n",0x46);
 printf("CF-L1-10 (switch_default): %d\n",0);
 printf("CF-L1-11 (switch_fallthrough): %d\n",0x15);
 printf("CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 printf("CF-L1-13 (loop_while): %d\n",5);
 printf("CF-L1-14 (loop_dowhile): %d\n",4);
 printf("CF-L1-15 (loop_nested): %d\n",0xc);
 printf("CF-L1-16 (loop_break): %d\n",2);
 printf("CF-L1-16 (loop_break): %d\n",0xffffffff);
 printf("CF-L1-17 (loop_continue): %d\n",0x19);
 printf("CF-L1-18 (goto_forward): %d\n",0x32);
 printf("CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 printf("CF-L1-19 (goto_backward): %d\n",0x78);
 printf("CF-L1-20 (ternary_op): %d\n",10);
 printf("CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x1019b0
int loop_multi_exit(int param_1)
{
 int iVar1;
 uint uVar2;
 uVar2 = param_1 - 1;
 iVar1 = -1;
 if (uVar2 < 0xc) {
 iVar1 = *(int *)(&DAT_00103108 + (long)(int)uVar2 * 4) +
 *(int *)(&DAT_001030d8 + (long)(int)uVar2 * 4);
 }
 return iVar1;
}

// Function: infinite_loop @ 0x1019e0
int infinite_loop(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 iVar1 = *param_1;
 while( true ) {
 if (iVar1 == 1) {
 return iVar2;
 }
 if (iVar2 == 1000) {
 *param_1 = 1;
 return 0x3e9;
 }
 if (*param_1 == 1) {
 return iVar2 + 1;
 }
 if (*param_1 == 1) break;
 if (*param_1 == 1) {
 return iVar2 + 3;
 }
 iVar2 = iVar2 + 4;
 iVar1 = *param_1;
 }
 return iVar2 + 2;
}

// Function: multi_return @ 0x101a30
int multi_return(uint param_1)
{
 int iVar1;
 if (-1 < (int)param_1) {
 iVar1 = -2;
 if (param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 * 2;
 }
 }
 return iVar1;
 }
 return -1;
}

// Function: conditional_return @ 0x101a60
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}

// Function: duffs_device @ 0x101a70
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uVar4 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar2 = param_3 + 7 >> 3;
 uVar3 = uVar2;
 switch(param_3 & 7) {
 case 1:
 goto switchD_00101a96_caseD_1;
 case 2:
 goto switchD_00101a96_caseD_2;
 case 3:
 goto switchD_00101a96_caseD_3;
 case 4:
 goto switchD_00101a96_caseD_4;
 case 5:
 goto switchD_00101a96_caseD_5;
 case 6:
 goto switchD_00101a96_caseD_6;
 case 7:
 goto switchD_00101a96_caseD_7;
 }
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar3 = uVar2;
switchD_00101a96_caseD_7:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_6:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_5:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_4:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_3:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_2:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_1:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar2 = uVar3 - 1;
 uVar4 = param_3;
 } while (1 < (int)uVar3);
 }
 return uVar4;
}

// Function: loop_complex_cond @ 0x101b10
uint loop_complex_cond(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 return param_1;
 }
 iVar1 = 0;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = param_1 - 1;
 uVar2 = uVar3 + 1;
 if ((param_1 < 2) || ((int)uVar4 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 param_1 = uVar4;
 uVar3 = uVar2;
 } while (bVar5);
 return iVar1 + uVar4 + uVar2;
}

// Function: loop_modify_var @ 0x101b50
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar3 = iVar2 + 2;
 if (iVar2 < 6) {
 iVar3 = iVar2;
 }
 iVar2 = iVar3 + 1;
 } while (iVar2 < param_1);
 return iVar1;
 }
 return 0;
}

// Function: loop_external_state @ 0x101b80
int loop_external_state(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 iVar1 = *param_1;
 while( true ) {
 if (iVar1 != 0) {
 return iVar2;
 }
 if (iVar2 == 100) {
 return 0x65;
 }
 if (*param_1 != 0) {
 return iVar2 + 1;
 }
 if (*param_1 != 0) break;
 if (*param_1 != 0) {
 return iVar2 + 3;
 }
 iVar2 = iVar2 + 4;
 iVar1 = *param_1;
 }
 return iVar2 + 2;
}

// Function: recursion_factorial @ 0x101bc0
unsigned long recursion_factorial(uint param_1)
{
 unsigned long uVar4;
 if (param_1 < 2) {
 return 1;
 }
 uVar4 = 1;
 do {
 uVar4 = uVar4 * param_1;
 param_1 = param_1 - 1;
 } while (param_1 > 1);
 return uVar4;
}

// Function: tail_recursion @ 0x101e30
unsigned long tail_recursion(uint param_1,unsigned long param_2)
{
 bool bVar1;
 param_2 = param_2 & 0xffffffff;
 if (1 < (int)param_1) {
 do {
 param_2 = (unsigned long)((int)param_2 * param_1);
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x102090
unsigned long indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 uVar2 = (unsigned long)param_1;
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 if ((uVar2 & 1) == 0) {
 uVar3 = (int)(uVar2 >> 0x1f) + (int)uVar2 >> 1;
 if (param_2 == 3) {
 return (unsigned long)uVar3;
 }
 uVar3 = uVar3 + 1;
 }
 else {
 iVar1 = (int)uVar2 * 3;
 if (param_2 == 3) {
 return (unsigned long)(iVar1 + 1);
 }
 uVar3 = iVar1 + 2;
 }
 uVar2 = (unsigned long)uVar3;
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return uVar2;
}

// Function: call_func_ptr @ 0x1020f0
void call_func_ptr(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x102100
unsigned long call_func_ptr_array(unsigned int param_1,uint param_2)
{
 bool bVar1;
 unsigned long uVar4;
 switch(param_1) {
 case 0:
 return (unsigned long)(param_2 * 2);
 case 1:
 return (unsigned long)(param_2 * 3);
 case 2:
 break;
 default:
 return 0xffffffff;
 }
 uVar4 = 1;
 if (1 < (int)param_2) {
 do {
 uVar4 = (unsigned long)((int)uVar4 * param_2);
 bVar1 = 2 < param_2;
 param_2 = param_2 - 1;
 } while (bVar1);
 }
 return uVar4;
}

// Function: double_value @ 0x102120
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x102130
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x102140
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x102150
int process_with_callback(long param_1,uint param_2,void *param_3)
{
 int iVar1;
 unsigned long uVar2;
 int iVar3;
 if ((int)param_2 < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = ((int (*)(unsigned int))param_3)(*(unsigned int *)(param_1 + uVar2 * 4));
 iVar3 = iVar3 + iVar1;
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x1021a0
void test_control_flow_l2(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 puts(&DAT_00103809);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 for (iVar2 = 0; iVar2 != 1000; iVar2 = iVar2 + 4) {
 }
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar4 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar3 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar2 = 0xb;
 do {
 uVar1 = uVar3 - 8;
 uVar3 = uVar3 + 2;
 if (iVar2 - 2U <= uVar1) break;
 uVar4 = uVar4 + 1;
 iVar2 = iVar2 + -1;
 } while (uVar4 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 for (iVar2 = 0; iVar2 != 100; iVar2 = iVar2 + 4) {
 }
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}

// Function: non_local_jump @ 0x1023f0
int non_local_jump(uint param_1)
{
 int iVar1;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (-1 < (int)param_1) {
 if (param_1 < 0x65) {
 return param_1 * 2;
 }
 longjmp(jump_buffer,2);
 }
 longjmp(jump_buffer,1);
}

// Function: cpp_exception @ 0x102440
int cpp_exception(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = -2;
 if (param_1 < 0x65) {
 iVar2 = param_1 * 2;
 }
 iVar1 = -1;
 if (-1 < param_1) {
 iVar1 = iVar2;
 }
 return iVar1;
}

// Function: large_jump_table @ 0x102460
unsigned long long large_jump_table(uint param_1,uint param_2,unsigned long param_3)
{
 byte bVar3;
 uint uVar4;
 unsigned long long result;
 if (9 < param_1) {
 return 0xffffffff;
 }
 uVar4 = (uint)(param_3 & 0xffffffff);
 bVar3 = (byte)(param_3 & 0xffffffff);
 switch(param_1) {
 case 0:
 result = param_2 + uVar4;
 break;
 case 1:
 result = param_2 - uVar4;
 break;
 case 2:
 result = param_2 * uVar4;
 break;
 case 4:
 if (uVar4 != 0) {
 result = (long)(int)param_2 % (long)(int)uVar4;
 } else {
 result = 0;
 }
 break;
 case 5:
 result = param_2 & uVar4;
 break;
 case 6:
 result = param_2 | uVar4;
 break;
 case 7:
 result = param_2 ^ uVar4;
 break;
 case 8:
 result = param_2 << (bVar3 & 0x1f);
 break;
 case 9:
 result = (int)param_2 >> (bVar3 & 0x1f);
 break;
 default:
 if (uVar4 != 0) {
 result = (long)(int)param_2 / (long)(int)uVar4;
 } else {
 result = 0;
 }
 break;
 }
 return result;
}

// Function: op_add @ 0x102480
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x102490
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1024a0
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x1024b0
unsigned long long op_div(int param_1,int param_2,unsigned long param_3)
{
 unsigned long long result;
 if (param_2 != 0) {
 result = (long)param_1 / (long)param_2;
 } else {
 result = 0;
 }
 return result;
}

// Function: op_mod @ 0x1024c0
unsigned long op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 return (long)param_1 % (long)param_2 & 0xffffffff;
 }
 return 0;
}

// Function: op_and @ 0x1024d0
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x1024e0
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x1024f0
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x102500
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x102510
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x102520
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *UNRECOVERED_JUMPTABLE;
 void *pcVar1;
 pcVar1 = recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 ((int (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x102550
uint state_machine(int param_1,uint param_2)
{
 uint uVar1;
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = (uint)(param_1 == 99) * 2 + 1;
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
 case 2:
 break;
 case 3:
 return (uint)(param_1 != 0) * 3;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x1025a0
char fsm_func_table(int param_1,unsigned int param_2)
{
 char cVar1;
 switch(param_2) {
 case 0:
 return param_1 == 1;
 case 1:
 break;
 case 2:
 return 2;
 case 3:
 return (param_1 != 0) * '\x03';
 default:
 return 3;
 }
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_idle @ 0x1025c0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x1025d0
char state_processing(int param_1)
{
 char cVar1;
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_done @ 0x1025f0
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x102600
char state_error(int param_1)
{
 return (param_1 != 0) * '\x03';
}

// Function: computed_goto @ 0x102610
unsigned long long computed_goto(unsigned long long param_1,unsigned int param_2)
{
 switch(param_2) {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 default:
 return 0xffffffff;
 }
}

// Function: obfuscated_cf @ 0x102640
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x102650
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x102660
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}

// Function: test_control_flow_l3 @ 0x102680
void test_control_flow_l3(void)
{
 uint uVar1;
 puts(&DAT_0010382d);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(0, 0);
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x102790
unsigned long long main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

