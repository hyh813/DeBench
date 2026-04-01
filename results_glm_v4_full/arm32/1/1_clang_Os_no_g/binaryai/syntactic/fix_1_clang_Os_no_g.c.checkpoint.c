// Decompiled by BinaryAI
// SHA256: 211a5957c720d97f28c4362ecdc9c0b2644b126b0c6ebf68669b5f9189ebe310

#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// Type definitions
typedef unsigned int uint;
typedef int (*__main_t)(int, char **, char **);
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned char byte;

// Global variable declarations
extern int stack0x00000004;
extern void *__dso_handle;
extern jmp_buf jump_buffer;
extern unsigned int DAT_0001185c[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
char completed_0 = 0;
unsigned int UNK_00011e70[4] = {10, 20, 30, 40};
unsigned int DAT_00011848[5] = {1, 2, 3, 4, 5};
char DAT_00011de1[] = "Control Flow L1 Tests";
char DAT_00011e05[] = "Control Flow L2 Tests";
char DAT_00011e29[] = "Control Flow L3 Tests";

// Helper macros/functions
#define SCARRY4(a, b) (((int)(a) < 0) != ((int)(b) < 0) && ((int)((a) + (b)) < 0))
static inline unsigned int LZCOUNT(unsigned int x) {
    if (x == 0) return 32;
    unsigned int n = 0;
    if (x <= 0x0000FFFF) { n += 16; x <<= 16; }
    if (x <= 0x00FFFFFF) { n += 8; x <<= 8; }
    if (x <= 0x0FFFFFFF) { n += 4; x <<= 4; }
    if (x <= 0x3FFFFFFF) { n += 2; x <<= 2; }
    if (x <= 0x7FFFFFFF) { n += 1; }
    return n;
}

// External function declarations
extern int main(int argc, char **argv, char **envp);
extern int __libc_start_main(__main_t main, int argc, char **ubp_av, 
                             void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), 
                             void *stack_end);
extern void __cxa_finalize(void *dso_handle);
extern void deregister_tm_clones(void);
extern void __aeabi_ldiv0(void);
extern uint __aeabi_idivmod(uint, uint);






// Function: sequential_ops @ 0x106c4
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x106d0
int single_if(int param_1)
{
 return param_1 << (uint)(0 < param_1);
}

// Function: if_else @ 0x106e4
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x106f8
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (0 < param_2) {
 iVar1 = param_1 + param_2;
 }
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x10714
unsigned int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
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
 uVar1 = 4;
 if (0 < param_5) {
 uVar1 = 5;
 }
 return uVar1;
 }
 return 3;
}

// Function: if_elseif_chain @ 0x10758
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x10774
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x10790
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&UNK_00011e70 + param_1 * 4);
 }
 return uVar1;
}

// Function: switch_large @ 0x107b0
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x107c8
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x107e4
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

// Function: loop_for_fixed @ 0x10818
int loop_for_fixed(int param_1)
{
 longlong lVar1;
 if (0 < param_1) {
 lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)(param_1 - 1);
 return ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x10848
int loop_while(int param_1)
{
 int iVar1;
 uint uVar2;
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 uVar2 = param_1 + 9;
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}

// Function: loop_dowhile @ 0x10888
int loop_dowhile(int param_1)
{
 int iVar1;
 uint uVar2;
 iVar1 = 0;
 do {
 uVar2 = param_1 + 9;
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}

// Function: loop_nested @ 0x108bc
int loop_nested(int param_1,uint param_2)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = (param_2 & ~((int)param_2 >> 0x1f)) * param_1;
 }
 return iVar1;
}

// Function: loop_break @ 0x108d4
int loop_break(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if ((&DAT_00011848)[iVar1] == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 return -1;
}

// Function: loop_continue @ 0x10908
int loop_continue(uint param_1)
{
 int iVar1;
 uint uVar2;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 } while (param_1 != uVar2);
 }
 return iVar1;
}

// Function: goto_forward @ 0x1093c
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x10954
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar2 = 1;
 }
 else {
 iVar2 = 1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 iVar2 = iVar1 * iVar2;
 } while (param_1 != iVar1);
 }
 return iVar2;
}

// Function: ternary_op @ 0x10988
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x10994
void test_control_flow_l1(void)
{
 puts(&DAT_00011de1);
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

// Function: loop_multi_exit @ 0x10ba8
int loop_multi_exit(int param_1)
{
 int iVar1;
 unsigned int *puVar2;
 int iVar3;
 int iVar4;
 iVar3 = 0;
 iVar4 = 0;
 puVar2 = &DAT_0001185c;
 do {
 iVar1 = 0;
 do {
 if (puVar2[iVar1] == param_1) {
 return iVar1 - iVar3;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 iVar4 = iVar4 + 1;
 puVar2 = puVar2 + 4;
 iVar3 = iVar3 + -10;
 } while (iVar4 != 3);
 return -1;
}

// Function: infinite_loop @ 0x10c04
void infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return;
}

// Function: multi_return @ 0x10c3c
int multi_return(uint param_1)
{
 int iVar1;
 if ((int)param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
 }
 return -2;
}

// Function: conditional_return @ 0x10c68
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x10c7c
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uVar3 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar5 = param_3 + 7 >> 3;
 puVar1 = param_1;
 puVar2 = param_2;
 uVar4 = uVar5;
 switch(param_3 & 7) {
 case 1:
 goto switchD_00010ca0_caseD_1;
 case 2:
 goto switchD_00010ca0_caseD_2;
 case 3:
 goto switchD_00010ca0_caseD_3;
 case 4:
 goto switchD_00010ca0_caseD_4;
 case 5:
 goto switchD_00010ca0_caseD_5;
 case 6:
 goto switchD_00010ca0_caseD_6;
 case 7:
 goto switchD_00010ca0_caseD_7;
 }
 do {
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ca0_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010ca0_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ca0_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010ca0_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ca0_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010ca0_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 uVar4 = uVar5;
switchD_00010ca0_caseD_1:
 param_2 = puVar2 + 1;
 uVar5 = uVar4 - 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 uVar3 = param_3;
 } while (uVar5 != 0 && 0 < (int)uVar4);
 }
 return uVar3;
}

// Function: loop_complex_cond @ 0x10d1c
int loop_complex_cond(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 uVar4 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = param_1;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = uVar3 + 1;
 param_1 = uVar2 - 1;
 if ((uVar2 < 2) || ((int)param_1 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 uVar2 = param_1;
 uVar3 = uVar4;
 } while (bVar5);
 }
 return param_1 + iVar1 + uVar4;
}

// Function: loop_modify_var @ 0x10d74
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar2 + iVar1;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < param_1);
 }
 return iVar1;
}

// Function: loop_external_state @ 0x10dac
int loop_external_state(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}

// Function: recursion_factorial @ 0x10dd4
int recursion_factorial(uint param_1)
{
 bool bVar1;
 int iVar2;
 iVar2 = 1;
 if (1 < (int)param_1) {
 iVar2 = 1;
 do {
 iVar2 = param_1 * iVar2;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return iVar2;
}

// Function: tail_recursion @ 0x10e04
int tail_recursion(uint param_1,int param_2)
{
 bool bVar1;
 if (1 < (int)param_1) {
 do {
 param_2 = param_2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x10e34
uint indirect_recursion_a(uint param_1,int param_2)
{
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 if ((param_1 & 1) == 0) {
 if (param_2 == 3) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == 3) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x10e88
void call_func_ptr(void (*UNRECOVERED_JUMPTABLE)(unsigned int),unsigned int param_2)
{
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x10e94
int call_func_ptr_array(unsigned int param_1,uint param_2)
{
 bool bVar1;
 int iVar2;
 switch(param_1) {
 case 0:
 return param_2 << 1;
 case 1:
 return param_2 * 3;
 case 2:
 break;
 default:
 return -1;
 }
 iVar2 = 1;
 if (1 < (int)param_2) {
 iVar2 = 1;
 do {
 iVar2 = param_2 * iVar2;
 bVar1 = 2 < param_2;
 param_2 = param_2 - 1;
 } while (bVar1);
 }
 return iVar2;
}

// Function: double_value @ 0x10eb8
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10ec0
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x10ec8
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x10ed0
int process_with_callback(unsigned int *param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 iVar1 = ((int (*)(unsigned int))param_3)(*param_1);
 iVar2 = iVar1 + iVar2;
 param_2 = param_2 + -1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar2;
}

// Function: test_control_flow_l2 @ 0x10f18
void test_control_flow_l2(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 int iVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 char auStack_5c [32];
 unsigned int local_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 puts(&DAT_00011e05);
 iVar1 = 0;
 iVar4 = 0;
 puVar3 = &DAT_0001185c;
 do {
 iVar5 = 0;
 do {
 if (puVar3[iVar5] == 7) {
 iVar5 = iVar5 - iVar1;
 goto LAB_00010f78;
 }
 iVar5 = iVar5 + 1;
 } while (iVar5 != 4);
 iVar4 = iVar4 + 1;
 puVar3 = puVar3 + 4;
 iVar1 = iVar1 + -10;
 } while (iVar4 != 3);
 iVar5 = -1;
LAB_00010f78:
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar5);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 local_1c = 1;
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar7 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 iVar4 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 local_3c = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 uVar2 = duffs_device(auStack_5c,&local_3c,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar2);
 iVar1 = 0xb;
 do {
 uVar6 = iVar4 - 8;
 iVar4 = iVar4 + 2;
 if (iVar1 - 2U <= uVar6) break;
 uVar7 = uVar7 + 1;
 iVar1 = iVar1 + -1;
 } while (uVar7 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n");
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
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

// Function: cpp_exception @ 0x111f8
int cpp_exception(int param_1)
{
 int iVar1;
 iVar1 = param_1 << 1;
 if (100 < param_1) {
 iVar1 = -2;
 }
 if (param_1 == -1 || param_1 + 1 < 0 != SCARRY4(param_1,1)) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: large_jump_table @ 0x11214
uint large_jump_table(unsigned int param_1,uint param_2,uint param_3)
{
 uint uVar1;
 uint extraout_r1;
 switch(param_1) {
 case 0:
 return param_3 + param_2;
 case 1:
 return param_2 - param_3;
 case 2:
 return param_3 * param_2;
 case 3:
 break;
 case 4:
 if (param_3 == 0) {
 return 0;
 }
 extraout_r1 = __aeabi_idivmod(param_2, param_3);
 return extraout_r1;
 case 5:
 return param_3 & param_2;
 case 6:
 return param_3 | param_2;
 case 7:
 return param_3 ^ param_2;
 case 8:
 return param_2 << (param_3 & 0xff);
 case 9:
 return (int)param_2 >> (param_3 & 0xff);
 default:
 return 0xffffffff;
 }
 if (param_3 == 0) {
 return 0;
 }
 uVar1 = __divsi3_custom(param_2, param_3);
 return uVar1;
}

// Function: op_add @ 0x1123c
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11244
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1124c
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11258
int op_div(unsigned int param_1,int param_2)
{
 if (param_2 != 0) {
 return __aeabi_idivmod(param_1, param_2);
 }
 return 0;
}

// Function: op_mod @ 0x11274
unsigned int op_mod(unsigned int param_1,int param_2)
{
 unsigned int extraout_r1;
 if (param_2 != 0) {
 extraout_r1 = __aeabi_idivmod(param_1, param_2);
 return extraout_r1;
 }
 return 0;
}

// Function: op_and @ 0x11294
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x1129c
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x112a4
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x112ac
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x112b4
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: conditional_func_ptr @ 0x112bc
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*UNRECOVERED_JUMPTABLE)(int);
 int (*pcVar1)(int);
 pcVar1 = recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x112f8
uint state_machine(uint param_1,uint param_2)
{
 switch(param_2) {
 case 0:
 param_2 = (uint)(param_1 == 1);
 break;
 case 1:
 param_2 = 1;
 if (param_1 == 99) {
 param_2 = 3;
 }
 if (param_1 == 2) {
 param_2 = param_1;
 }
 break;
 case 2:
 break;
 case 3:
 param_2 = param_1;
 if (param_1 != 0) {
 param_2 = 3;
 }
 break;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x11360
uint fsm_func_table(uint param_1,unsigned int param_2)
{
 uint uVar1;
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = 1;
 if (param_1 == 99) {
 uVar1 = 3;
 }
 break;
 case 2:
 return 2;
 case 3:
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
 default:
 return 3;
 }
 if (param_1 != 2) {
 param_1 = uVar1;
 }
 return param_1;
}

// Function: state_idle @ 0x11380
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x11390
int state_processing(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (param_1 == 99) {
 iVar1 = 3;
 }
 if (param_1 != 2) {
 param_1 = iVar1;
 }
 return param_1;
}

// Function: state_done @ 0x113a8
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x113b0
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: computed_goto @ 0x113bc
unsigned int computed_goto(unsigned int param_1,unsigned int param_2)
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

// Function: obfuscated_cf @ 0x113fc
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}



// Function: opaque_predicate @ 0x11414
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x1140c
int overlapped_code(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 3 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 return iVar1;
}

// Function: non_local_jump @ 0x113f4
int non_local_jump(int param_1)
{
 return param_1 << 1;
}

// Function: test_control_flow_l3 @ 0x11428
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int iVar2;
 puts(&DAT_00011e29);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(2,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x11540
int main(int argc, char **argv, char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __divsi3 @ 0x1155c
int __divsi3_custom(int param_1,int param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 if (param_2 == 0) {
 bVar5 = (int)param_1 < 0;
 if (0 < (int)param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = 0x80000000;
 }
 __aeabi_ldiv0();
 return param_1;
 }
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x11564
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool in_NG;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 return uVar1;
}

