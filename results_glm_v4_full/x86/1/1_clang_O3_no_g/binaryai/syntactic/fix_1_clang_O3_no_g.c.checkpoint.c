// Decompiled by BinaryAI
// SHA256: 4a293b310e32c4197c535038d9af9e7f20a1e7eb63e2769587f62e180cec4eb6

#include <setjmp.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

/* Type definitions for decompiled code */
typedef unsigned char byte;
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;

/* Forward declarations and undefined */
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern void __x86_get_pc_thunk_di(void);
extern void __x86_get_pc_thunk_dx(void);
extern void __do_global_ctors_aux(void);
extern void __do_global_dtors_aux(void);
extern unsigned int main(int, char **);
extern int double_value(int);
extern int triple_value(int);
extern int call_virtual_func(unsigned int, int);
extern int op_add(int, int);
extern int op_sub(int, int);
extern int op_mul(int, int);
extern int op_div(int, int);
extern int op_mod(int, int);
extern uint op_and(uint, uint);
extern uint op_or(uint, uint);
extern uint op_xor(uint, uint);
extern int op_shl(int, byte);
extern int op_shr(int, byte);

/* Data references */
extern char DAT_00013691[];
extern char DAT_000136b5[];
extern char DAT_000136d9[];
extern int DAT_00013108[];
extern int DAT_000130d8[];
extern void* PTR_double_value_00015ec8[];
extern void* PTR_op_add_00015ed4[];
extern void* PTR_state_idle_00015efc[];

/* Data definitions */
char DAT_00013691[] = "CF-L1 Testing";
char DAT_000136b5[] = "CF-L2 Testing";
char DAT_000136d9[] = "CF-L3 Testing";
int DAT_00013108[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int DAT_000130d8[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

/* Undefined variables */
extern jmp_buf jump_buffer;
extern void* stack0x00000004;

/* Undefined function */
extern void FUN_00011090(unsigned int);
extern unsigned int non_local_jump(int);
extern void deregister_tm_clones(void);
int __real_puts(const char *__s);

/* Function definitions */
void FUN_00011090(unsigned int param)
{
    return;
}

unsigned int computed_goto(char *pc, int param)
{
    return (unsigned int)param;
}

void deregister_tm_clones(void)
{
    return;
}

int __real_puts(const char *__s)
{
    if (__s == NULL) {
        return EOF;
    }
    return fputs(__s, stdout) >= 0 ? 1 : EOF;
}

unsigned int non_local_jump(int param)
{
    return (unsigned int)(param * 2);
}













// Function: <EXTERNAL>::puts @ 0x11080
int __real_puts(const char *__s);
int puts(const char *__s)
{
 int iVar1;
 iVar1 = __real_puts(__s);
 return iVar1;
}





// Function: __i686.get_pc_thunk.bx @ 0x110cc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110d0
void __x86_get_pc_thunk_bx(void)
{
 return;
}





// Function: __do_global_dtors_aux @ 0x11170
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI = 0;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4eab) == '\0') {
 if (*(int *)(unaff_EDI + 0x4e73) != 0) {
 FUN_00011090(*(unsigned int *)(unaff_EDI + 0x4ea7));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4eaf);
 while (uVar1 < ((unaff_EDI + 0x4d47) - (unaff_EDI + 0x4d43) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4eaf) = uVar1 + 1;
 (*(void (**)(void))(unaff_EDI + 0x4d43 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4eaf);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4eab) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11209
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1120d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: sequential_ops @ 0x11220
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x11230
int single_if(int param_1)
{
 return param_1 << (0 < param_1);
}

// Function: if_else @ 0x11240
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x11250
int nested_if_2(int param_1,int param_2)
{
 if (param_2 < 0) {
 param_2 = 0;
 }
 param_2 = param_2 + param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}

// Function: nested_if_deep @ 0x11270
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

// Function: if_elseif_chain @ 0x112b0
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x112d0
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}

// Function: FUN_000112f5 @ 0x112f5
unsigned int FUN_000112f5(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int unaff_retaddr;
 uVar1 = 0xffffffff;
 if (param_2 < 4) {
 uVar1 = *(unsigned int *)(unaff_retaddr + 0x240b + param_2 * 4);
 }
 return uVar1;
}

// Function: switch_large @ 0x11320
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x11340
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x11360
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

// Function: loop_for_fixed @ 0x11390
int loop_for_fixed(int param_1)
{
 longlong lVar1;
 if (0 < param_1) {
 lVar1 = (ulonglong)(param_1 - 1) * (ulonglong)(param_1 - 2);
 return ((int)((ulonglong)lVar1 >> 0x20) << 0x1f | (uint)lVar1 >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x113b0
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

// Function: loop_dowhile @ 0x11400
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

// Function: loop_nested @ 0x11430
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

// Function: FUN_00011455 @ 0x11455
unsigned int FUN_00011455(unsigned int param_1,int param_2)
{
 unsigned int uVar1;
 int unaff_retaddr;
 if (param_2 - 10U < 0x29) {
 uVar1 = (*(unsigned int (*)(unsigned int))((void *)(unaff_retaddr + 0x4bab +
 *(int *)(unaff_retaddr + 0x1bb3 + (param_2 - 10U) * 4))))(param_1);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: loop_continue @ 0x114a0
int loop_continue(uint param_1)
{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = param_1 & 3;
 if (param_1 - 1 < 3) {
 iVar2 = 0;
 uVar4 = 1;
 }
 else {
 iVar2 = 0;
 uVar4 = 1;
 do {
 iVar2 = iVar2 + uVar4 * 2 + 2;
 iVar1 = uVar4 - (param_1 & 0xfffffffc);
 uVar4 = uVar4 + 4;
 } while (iVar1 != -3);
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 + (-(uVar4 & 1) & uVar4);
 uVar4 = uVar4 + 1;
 }
 }
 return iVar2;
}

// Function: goto_forward @ 0x11510
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}

// Function: goto_backward @ 0x11530
int goto_backward(uint param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 if ((int)param_1 < 1) {
 return 1;
 }
 uVar3 = param_1 & 7;
 if (param_1 - 1 < 7) {
 iVar4 = 1;
 iVar2 = 1;
 }
 else {
 iVar2 = 1;
 uVar1 = 8;
 do {
 uVar5 = uVar1;
 iVar2 = (uVar5 - 1) * uVar5 *
 (uVar5 - 2) * (uVar5 - 4) * (uVar5 - 3) *
 (uVar5 - 6) * (uVar5 - 5) * (uVar5 - 7) * iVar2;
 uVar1 = uVar5 + 8;
 } while (uVar5 != (param_1 & 0xfffffff8));
 iVar4 = uVar5 + 1;
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 * iVar4;
 iVar4 = iVar4 + 1;
 }
 return iVar2;
}

// Function: ternary_op @ 0x115e0
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x115f0
void test_control_flow_l1(void)
{
 puts(&DAT_00013691);
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

// Function: loop_multi_exit @ 0x11840
int loop_multi_exit(int param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 - 1U < 0xc) {
 iVar1 = ((int *)(&DAT_00013108))[param_1] + ((int *)(&DAT_000130d8))[param_1];
 }
 return iVar1;
}

// Function: infinite_loop @ 0x11870
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

// Function: multi_return @ 0x118c0
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

// Function: conditional_return @ 0x118f0
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}

// Function: duffs_device @ 0x11910
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
 goto switchD_00011946_caseD_1;
 case 2:
 goto switchD_00011946_caseD_2;
 case 3:
 goto switchD_00011946_caseD_3;
 case 4:
 goto switchD_00011946_caseD_4;
 case 5:
 goto switchD_00011946_caseD_5;
 case 6:
 goto switchD_00011946_caseD_6;
 case 7:
 goto switchD_00011946_caseD_7;
 }
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011946_caseD_7:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011946_caseD_6:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011946_caseD_5:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011946_caseD_4:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011946_caseD_3:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00011946_caseD_2:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar3 = uVar2;
switchD_00011946_caseD_1:
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

// Function: loop_complex_cond @ 0x119b0
int loop_complex_cond(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 uVar3 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = param_1;
 uVar4 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = uVar2 - 1;
 uVar3 = uVar4 + 1;
 if ((uVar2 < 2) || ((int)param_1 <= iVar1)) break;
 bVar5 = uVar4 < 9;
 uVar2 = param_1;
 uVar4 = uVar3;
 } while (bVar5);
 }
 return iVar1 + param_1 + uVar3;
}

// Function: loop_modify_var @ 0x119f0
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

// Function: loop_external_state @ 0x11a20
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

// Function: recursion_factorial @ 0x11a60
int recursion_factorial(uint param_1)
{
 bool bVar1;
 int iVar2;
 iVar2 = 1;
 if (1 < (int)param_1) {
 iVar2 = 1;
 do {
 iVar2 = iVar2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return iVar2;
}

// Function: tail_recursion @ 0x11a90
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

// Function: indirect_recursion_a @ 0x11ab0
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

// Function: call_func_ptr @ 0x11b20
void call_func_ptr(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x11b40
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 void *func_array[3];
 func_array[0] = (void *)double_value;
 func_array[1] = (void *)triple_value;
 func_array[2] = (void *)call_virtual_func;
 if (2 < param_1) {
 return 0xffffffff;
 }
 uVar1 = ((unsigned int (*)(unsigned int))func_array[param_1])(param_2);
 return uVar1;
}

// Function: double_value @ 0x11b80
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x11b90
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x11ba0
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x11bb0
int process_with_callback(int param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_2 < 1) {
 iVar3 = 0;
 }
 else {
 iVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = ((int (*)(unsigned int))param_3)(*(unsigned int *)(param_1 + iVar2 * 4));
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x11c00
void test_control_flow_l2(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 puts(&DAT_000136b5);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 for (iVar2 = 0; iVar2 != 1000; iVar2 = iVar2 + 4) {
 }
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9,1);
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 uVar3 = 0xffffffff;
 iVar4 = 0xb;
 iVar2 = 10;
 do {
 uVar1 = iVar2 - 8;
 iVar2 = iVar2 + 2;
 if (iVar4 - 2U <= uVar1) break;
 uVar3 = uVar3 + 1;
 iVar4 = iVar4 + -1;
 } while (uVar3 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar2);
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



// Function: cpp_exception @ 0x11ef0
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

// Function: large_jump_table @ 0x11f10
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 void *func_array[10];
 func_array[0] = (void *)op_add;
 func_array[1] = (void *)op_sub;
 func_array[2] = (void *)op_mul;
 func_array[3] = (void *)op_div;
 func_array[4] = (void *)op_mod;
 func_array[5] = (void *)op_and;
 func_array[6] = (void *)op_or;
 func_array[7] = (void *)op_xor;
 func_array[8] = (void *)op_shl;
 func_array[9] = (void *)op_shr;
 if (9 < param_1) {
 return 0xffffffff;
 }
 uVar1 = ((unsigned int (*)(unsigned int, unsigned int))func_array[param_1])(param_2, param_3);
 return uVar1;
}

// Function: op_add @ 0x11f50
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11f60
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x11f70
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11f80
int op_div(int param_1,int param_2)
{
 if (param_2 != 0) {
 return param_1 / param_2;
 }
 return 0;
}

// Function: op_mod @ 0x11fa0
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 return param_1 % param_2;
 }
 return 0;
}

// Function: op_and @ 0x11fc0
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x11fd0
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x11fe0
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x11ff0
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x12000
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x12010
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *pcVar1;
 void *pcVar2;
 pcVar2 = recursion_factorial;
 if (param_1 == 1) {
 pcVar2 = triple_value;
 }
 pcVar1 = double_value;
 if (param_1 != 0) {
 pcVar1 = pcVar2;
 }
 ((int (*)(unsigned int))pcVar1)(param_2);
 return;
}

// Function: FUN_00012055 @ 0x12055
unsigned int FUN_00012055(unsigned int param_1,unsigned int param_2,uint param_3)
{
 unsigned int uVar1;
 int unaff_retaddr;
 if (param_3 < 4) {
 uVar1 = ((unsigned int (*)(unsigned int, unsigned int))(*(void **)(unaff_retaddr + 0x3fab + *(int *)(unaff_retaddr + 0x1077 + param_3 * 4))))(param_1, param_2);
 return uVar1;
 }
 return 3;
}

// Forward declarations for state functions
extern bool state_idle(int);
extern char state_processing(int);
extern unsigned int state_done(void);
extern char state_error(int);

// Function: fsm_func_table @ 0x120a0
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 if (3 < param_2) {
 return 3;
 }
 switch(param_2) {
 case 0:
 uVar1 = state_idle(param_1);
 break;
 case 1:
 uVar1 = state_processing(param_1);
 break;
 case 2:
 uVar1 = state_done();
 break;
 case 3:
 uVar1 = state_error(param_1);
 break;
 default:
 uVar1 = 3;
 break;
 }
 return uVar1;
}

// Function: state_idle @ 0x120e0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x120f0
char state_processing(int param_1)
{
 char cVar1;
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_done @ 0x12110
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x12120
char state_error(int param_1)
{
 return (param_1 != 0) * '\x03';
}

// Function: FUN_00012135 @ 0x12135
unsigned int FUN_00012135(unsigned int param_1,unsigned int param_2,uint param_3)
{
 unsigned int uVar1;
 if (3 < param_3) {
 return 0xffffffff;
 }
 switch(param_3) {
 case 0:
 uVar1 = state_idle(param_1);
 break;
 case 1:
 uVar1 = state_processing(param_1);
 break;
 case 2:
 uVar1 = state_done();
 break;
 case 3:
 uVar1 = state_error(param_1);
 break;
 default:
 uVar1 = 0xffffffff;
 break;
 }
 return uVar1;
}

// Function: obfuscated_cf @ 0x12170
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x12180
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x12190
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}

// Function: test_control_flow_l3 @ 0x121b0
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 char *pcVar2;
 puts(&DAT_000136d9);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 pcVar2 = "CF-L3-06 (fsm_func_table): %d\n";
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(pcVar2,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x122f0
unsigned int main(int argc, char **argv)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12320
void __do_global_ctors_aux(void)
{
 return;
}



