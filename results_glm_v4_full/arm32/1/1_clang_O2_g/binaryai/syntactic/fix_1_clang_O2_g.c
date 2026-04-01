// Decompiled by BinaryAI
// SHA256: 1b650d86fd31e4f97262d69bf24e03b5c5b14ff4cf08859bd9b24759aa83d7a7

#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <limits.h>

// Type definitions for compatibility
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef uint8_t byte;



// Data arrays
char DAT_00011dbd[] = "=== Test Control Flow Level 1 ===";
char DAT_00011de1[] = "=== Test Control Flow Level 2 ===";
char DAT_00011e05[] = "=== Test Control Flow Level 3 ===";
int DAT_00011e6c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int DAT_00011e3c[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int UNK_00011e2c[] = {50, 70, 90, 0};
jmp_buf jump_buffer;

// Function prototypes
unsigned int main(void);
void __aeabi_ldiv0(int param);
int __aeabi_idivmod(int numerator, int denominator);
uint __divsi3(uint param_1, uint param_2);
uint _divsi3_skip_div0_test(uint param_1, uint param_2);

// Helper function implementations
int LZCOUNT(uint x)
{
 int count = 0;
 if (x == 0) return 32;
 if ((x & 0xffff0000) == 0) { count += 16; x <<= 16; }
 if ((x & 0xff000000) == 0) { count += 8; x <<= 8; }
 if ((x & 0xf0000000) == 0) { count += 4; x <<= 4; }
 if ((x & 0xc0000000) == 0) { count += 2; x <<= 2; }
 if ((x & 0x80000000) == 0) { count += 1; }
 return count;
}

int SCARRY4(int a, int b)
{
 // Check for signed overflow in addition: returns 1 if a + b overflows
 int sum = a + b;
 if (b > 0 && a > INT_MAX - b) return 1;
 if (b < 0 && a < INT_MIN - b) return 1;
 return 0;
}



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
 uVar1 = *(unsigned int *)((int *)UNK_00011e2c + param_1);
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
unsigned int loop_break(unsigned int param_1)
{
 unsigned int uVar1;
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

// Function: loop_continue @ 0x109bc
int loop_continue(uint param_1)
{
 int iVar1;
 uint uVar2;
 if (0 < (int)param_1) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 } while (param_1 != uVar2);
 return iVar1;
 }
 return 0;
}

// Function: goto_forward @ 0x109f4
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x10a0c
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 iVar2 = iVar1 * iVar2;
 } while (param_1 != iVar1);
 return iVar2;
 }
 return 1;
}

// Function: ternary_op @ 0x10a3c
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x10a48
void test_control_flow_l1(void)
{
 puts(&DAT_00011dbd);
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

// Function: loop_multi_exit @ 0x10c5c
int loop_multi_exit(int param_1)
{
 uint uVar1;
 uVar1 = param_1 - 1;
 if (0xb < uVar1) {
 return -1;
 }
 return DAT_00011e6c[uVar1] + DAT_00011e3c[uVar1];
}

// Function: infinite_loop @ 0x10c94
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

// Function: multi_return @ 0x10ccc
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

// Function: conditional_return @ 0x10cf8
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x10d0c
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
 goto switchD_00010d30_caseD_1;
 case 2:
 goto switchD_00010d30_caseD_2;
 case 3:
 goto switchD_00010d30_caseD_3;
 case 4:
 goto switchD_00010d30_caseD_4;
 case 5:
 goto switchD_00010d30_caseD_5;
 case 6:
 goto switchD_00010d30_caseD_6;
 case 7:
 goto switchD_00010d30_caseD_7;
 }
 do {
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d30_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d30_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d30_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d30_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d30_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00010d30_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 uVar4 = uVar5;
switchD_00010d30_caseD_1:
 param_2 = puVar2 + 1;
 uVar5 = uVar4 - 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 uVar3 = param_3;
 } while (uVar5 != 0 && 0 < (int)uVar4);
 }
 return uVar3;
}

// Function: loop_complex_cond @ 0x10dac
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

// Function: loop_modify_var @ 0x10e04
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar2 + iVar1;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < param_1);
 return iVar1;
 }
 return 0;
}

// Function: loop_external_state @ 0x10e40
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

// Function: recursion_factorial @ 0x10e68
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

// Function: tail_recursion @ 0x10e98
int tail_recursion(uint param_1,int param_2)
{
 bool bVar1;
 if (1 < (int)param_1) {
 do {
 param_2 = param_2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 return param_2;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x10ec4
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

// Function: call_func_ptr @ 0x10f1c
void call_func_ptr(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x10f28
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

// Function: double_value @ 0x10f4c
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10f54
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x10f5c
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x10f64
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

// Function: test_control_flow_l2 @ 0x10fac
void test_control_flow_l2(void)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 puts(&DAT_00011de1);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar3 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 iVar4 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar1 = 0xb;
 do {
 uVar2 = iVar4 - 8;
 iVar4 = iVar4 + 2;
 if (iVar1 - 2U <= uVar2) break;
 uVar3 = uVar3 + 1;
 iVar1 = iVar1 + -1;
 } while (uVar3 < 9);
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

// Function: non_local_jump @ 0x111a4
int non_local_jump(uint param_1)
{
 int iVar1;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (param_1 != 0xffffffff && (int)(param_1 + 1) < 0 == SCARRY4(param_1,1)) {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 longjmp(jump_buffer, 2);
 }
 longjmp(jump_buffer, 1);
}

// Function: cpp_exception @ 0x11218
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

// Function: large_jump_table @ 0x11234
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
 __aeabi_idivmod(param_2, param_3);
 // Get remainder from r1 register using inline assembly
 {
 unsigned int rem;
 __asm__ volatile ("mov %0, r1" : "=r" (rem));
 return rem;
 }
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
 uVar1 = __divsi3(param_2, param_3);
 return uVar1;
}

// Function: op_add @ 0x1125c
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11264
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1126c
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11278
unsigned int op_div(unsigned int param_1,int param_2)
{
 if (param_2 != 0) {
 return __divsi3(param_1, param_2);
 }
 return 0;
}

// Function: op_mod @ 0x11294
unsigned int op_mod(unsigned int param_1,int param_2)
{
 unsigned int remainder;
 if (param_2 != 0) {
 __aeabi_idivmod(param_1, param_2);
 // Get remainder from r1 register using inline assembly
 __asm__ volatile ("mov %0, r1" : "=r" (remainder));
 return remainder;
 }
 return 0;
}

// Function: op_and @ 0x112b4
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x112bc
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x112c4
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x112cc
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x112d4
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: conditional_func_ptr @ 0x112dc
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *UNRECOVERED_JUMPTABLE;
 int (*pcVar1)(int);
 pcVar1 = recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 ((int (*)(int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x11318
uint state_machine(uint param_1,uint param_2)
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
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
 case 2:
 break;
 case 3:
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x11380
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

// Function: state_idle @ 0x113a0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x113b0
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

// Function: state_done @ 0x113c8
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x113d0
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: computed_goto @ 0x113dc
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

// Function: obfuscated_cf @ 0x1141c
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x11424
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x1142c
int overlapped_code(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 3 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x11448
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 int iVar2;
 puts(&DAT_00011e05);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 iVar2 = printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(iVar2,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x11560
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __divsi3 @ 0x1157c
uint __divsi3(uint param_1,uint param_2)
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
 __aeabi_ldiv0(param_1);
 return 0;
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
 /* Fallback case - should not be reached */
 uVar1 = 0;
 return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x11584
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
 in_NG = (int)param_2 < 0;
 if (in_NG) {
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
 /* Fallback case - should not be reached */
 uVar1 = 0;
 return uVar1;
}

// Function: __aeabi_idivmod @ 0x1179c
int __aeabi_idivmod(int param_1,int param_2)
{
 bool bVar1;
 int result;
 if (param_2 != 0) {
 result = _divsi3_skip_div0_test(param_1, param_2);
 return result;
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_ldiv0(param_1);
 return 0;
}

// Function: __aeabi_ldiv0 @ 0x117bc
void __aeabi_ldiv0(int param)
{
 raise(8);
 return;
}



