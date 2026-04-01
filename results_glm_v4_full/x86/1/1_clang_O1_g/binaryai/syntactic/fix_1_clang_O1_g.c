// Decompiled by BinaryAI
// SHA256: bfa25899d708c4eb7bc8746d7dd632fa39f6a174e32d2f0e9cf6bbf5a705dacd

#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

typedef uint8_t byte;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;

typedef unsigned int (*uint_func_uint_t)(unsigned int);
typedef int (*int_func_int_int_t)(int, int);

void __gmon_start__(void);

jmp_buf jump_buffer;
void *_GLOBAL_OFFSET_TABLE_;
unsigned int stack0x00000004;
void __do_global_ctors_aux(void);
int DAT_0001304c;
int DAT_00013050;
char DAT_000135d1[] = "Control Flow Level 1 Tests";
char DAT_000135f5[] = "Control Flow Level 2 Tests";
char DAT_00013619[] = "Control Flow Level 3 Tests";
unsigned int (*PTR_double_value_00015ec8)(unsigned int);
int (*PTR_op_add_00015ed4)(int, int);
bool (*PTR_state_idle_00015efc)(int);

// Function: _init @ 0x11000
// Standard C runtime symbol - provided by linker

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
int __libc_start_main(int (*main)(void), int argc, char **argv, 
                      int (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);



// Function: <EXTERNAL>::longjmp @ 0x11060
void longjmp(jmp_buf __env,int __val);

// Function: <EXTERNAL>::_setjmp @ 0x11070
int _setjmp(jmp_buf __env);

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(unsigned int param_1)
{
 void (*func_ptr)(void);
 func_ptr = *(void **)(param_1 + -0x10);
 func_ptr();
 return;
}

// Function: main @ 0x12330
unsigned int main(void);

// Function: _start @ 0x110a0
// Standard C runtime symbol - provided by linker

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

// Function: deregister_tm_clones @ 0x110e0
void deregister_tm_clones(void)
{
 return;
}

void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_dx(void);
void __do_global_ctors_aux_impl(void);
void __do_global_ctors_aux(void);

void __do_global_ctors_aux_impl(void)
{
 return;
}

void __do_global_ctors_aux(void)
{
 __do_global_ctors_aux_impl();
}

void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);

bool state_idle(int param_1);
unsigned int state_processing(int param_1);
unsigned int state_done(void);
char state_error(int param_1);

// Function: __gmon_start__ @ 0x110f0
void __gmon_start__(void)
{
 return;
}

// Function: frame_dummy @ 0x11100
int frame_dummy(void)
{
 return 0;
}

// Function: register_tm_clones @ 0x11120
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11170
void __do_global_dtors_aux_impl(void)
{
 uint uVar1;
 int unaff_EDI;
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

void __do_global_dtors_aux(void)
{
 __do_global_dtors_aux_impl();
}

// Function: __x86.get_pc_thunk.dx @ 0x11209
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1120e
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
 uVar1 = *(unsigned int *)(unaff_retaddr + 0x234b + param_2 * 4);
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
 int iVar3;
 iVar3 = 0;
 if (param_1 != 0) {
 do {
 iVar3 = iVar3 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 }
 iVar1 = 1;
 if (iVar3 != 0) {
 iVar1 = iVar3;
 }
 return iVar1;
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
 if (param_2 < 1) {
 param_2 = 0;
 }
 param_2 = param_2 * param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}

// Function: FUN_00011455 @ 0x11455
int FUN_00011455(unsigned int param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 int unaff_retaddr;
 iVar1 = 0;
 piVar2 = (int *)(unaff_retaddr + 0x1be3);
 do {
 if (*piVar2 == param_2) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}

// Function: loop_continue @ 0x11490
int loop_continue(uint param_1)
{
 int iVar1;
 uint uVar2;
 bool bVar3;
 if (0 < (int)param_1) {
 iVar1 = 0;
 uVar2 = 1;
 do {
 iVar1 = iVar1 + (-(uVar2 & 1) & uVar2);
 bVar3 = uVar2 != param_1;
 uVar2 = uVar2 + 1;
 } while (bVar3);
 return iVar1;
 }
 return 0;
}

// Function: goto_forward @ 0x114d0
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}

// Function: goto_backward @ 0x114f0
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 bool bVar3;
 if (0 < param_1) {
 iVar1 = 1;
 iVar2 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 bVar3 = iVar2 != param_1;
 iVar2 = iVar2 + 1;
 } while (bVar3);
 return iVar1;
 }
 return 1;
}

// Function: ternary_op @ 0x11530
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x11540
void test_control_flow_l1(void)
{
 puts(&DAT_000135d1);
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

// Function: loop_multi_exit @ 0x11790
int loop_multi_exit(int param_1_00,int param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 unsigned int *puVar5;
 bool bVar6;
 int local_14;
 iVar2 = 0;
 puVar5 = &DAT_00013050;
 local_14 = param_1_00;
 do {
 bVar6 = true;
 iVar4 = 0;
 if ((&DAT_0001304c)[iVar2 * 4] != param_1) {
 uVar1 = 0xffffffff;
 do {
 uVar3 = uVar1;
 if (uVar3 == 2) goto LAB_00011822;
 uVar1 = uVar3 + 1;
 } while (puVar5[uVar3 + 1] != param_1);
 bVar6 = uVar3 + 1 < 3;
 iVar4 = uVar3 + 2;
 }
 local_14 = iVar2 * 10 + iVar4;
 iVar4 = 1;
 if (bVar6) goto LAB_00011832;
LAB_00011822:
 iVar2 = iVar2 + 1;
 puVar5 = puVar5 + 4;
 } while (iVar2 != 3);
 iVar4 = 2;
LAB_00011832:
 if (iVar4 == 2) {
 local_14 = -1;
 }
 return local_14;
}

// Function: infinite_loop @ 0x11850
int infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 0x3e9;
}

// Function: multi_return @ 0x11880
int multi_return(uint param_1)
{
 int iVar1;
 if (-1 < (int)param_1) {
 iVar1 = -2;
 if ((int)param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 * 2;
 }
 }
 return iVar1;
 }
 return -1;
}

// Function: conditional_return @ 0x118b0
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}

// Function: duffs_device @ 0x118d0
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar4 = -1;
 if (0 < param_3) {
 iVar2 = param_3 + 0xe;
 if (-1 < param_3 + 7) {
 iVar2 = param_3 + 7;
 }
 iVar2 = iVar2 >> 3;
 iVar4 = param_3;
 if ((uint)(param_3 % 8) < 8) {
 iVar3 = iVar2;
 switch(param_3 % 8) {
 case 1:
 goto switchD_0001191f_caseD_1;
 case 2:
 goto switchD_0001191f_caseD_2;
 case 3:
 goto switchD_0001191f_caseD_3;
 case 4:
 goto switchD_0001191f_caseD_4;
 case 5:
 goto switchD_0001191f_caseD_5;
 case 6:
 goto switchD_0001191f_caseD_6;
 case 7:
 goto switchD_0001191f_caseD_7;
 }
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_0001191f_caseD_7:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_0001191f_caseD_6:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_0001191f_caseD_5:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_0001191f_caseD_4:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_0001191f_caseD_3:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_0001191f_caseD_2:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar3 = iVar2;
switchD_0001191f_caseD_1:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 iVar2 = iVar3 + -1;
 } while (1 < iVar3);
 }
 }
 return iVar4;
}

// Function: loop_complex_cond @ 0x11990
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if (param_1 < 1) {
 iVar1 = 0;
 uVar3 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = param_1;
 uVar4 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = iVar2 + -1;
 uVar3 = uVar4 + 1;
 if ((iVar2 < 2) || (param_1 <= iVar1)) break;
 bVar5 = uVar4 < 9;
 iVar2 = param_1;
 uVar4 = uVar3;
 } while (bVar5);
 }
 return iVar1 + param_1 + uVar3;
}

// Function: loop_modify_var @ 0x119d0
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

// Function: loop_external_state @ 0x11a00
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

// Function: recursion_factorial @ 0x11a30
int recursion_factorial(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (1 < param_1) {
 iVar1 = recursion_factorial(param_1 + -1);
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}

// Function: tail_recursion @ 0x11a70
int tail_recursion(int param_1,int param_2)
{
 if (1 < param_1) {
 return tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x11ab0
uint indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 if (param_2 < 2) {
 return (int)param_1 / 2;
 }
 iVar1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 < 2) {
 return param_1 * 3 + 1;
 }
 iVar1 = param_1 * 3 + 2;
 }
 param_1 = indirect_recursion_a(iVar1,param_2 + -2);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x11b10
void call_func_ptr(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x11b30
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 3) {
 unsigned int (**func_array)(unsigned int) = (unsigned int (**)(unsigned int))&PTR_double_value_00015ec8;
 uVar1 = func_array[param_1](param_2);
 }
 return uVar1;
}

// Function: double_value @ 0x11b70
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x11b80
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x11b90
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x11ba0
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

// Function: test_control_flow_l2 @ 0x11bf0
void test_control_flow_l2(void)
{
 uint uVar1;
 unsigned int uVar2;
 int iVar3;
 uint uVar4;
 unsigned int *puVar5;
 char **ppuVar6;
 int iVar7;
 int iVar8;
 ppuVar6 = &_GLOBAL_OFFSET_TABLE_;
 puts(&DAT_000135f5);
 iVar3 = 0;
 puVar5 = &DAT_00013050;
 iVar7 = 0;
 do {
 uVar4 = 0;
 do {
 uVar1 = uVar4;
 if (uVar1 == 3) {
 iVar8 = 5;
 if (2 < uVar1) goto LAB_00011c6c;
 goto LAB_00011c7f;
 }
 uVar4 = uVar1 + 1;
 } while (puVar5[uVar1] != 7);
 ppuVar6 = (char **)((uVar1 + 1) - iVar3);
 iVar8 = 1;
 if (uVar1 < 3) goto LAB_00011c7f;
LAB_00011c6c:
 iVar7 = iVar7 + 1;
 iVar3 = iVar3 + -10;
 puVar5 = puVar5 + 4;
 } while (iVar7 != 3);
 iVar8 = 2;
LAB_00011c7f:
 if (iVar8 == 2) {
 ppuVar6 = (char **)0xffffffff;
 }
 printf("CF-L2-01 (loop_multi_exit): %d\n",ppuVar6);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 uVar4 = 0xffffffff;
 iVar7 = 0xb;
 iVar3 = 10;
 do {
 uVar1 = iVar3 - 8;
 iVar3 = iVar3 + 2;
 if (iVar7 - 2U <= uVar1) break;
 uVar4 = uVar4 + 1;
 iVar7 = iVar7 + -1;
 } while (uVar4 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",iVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar2);
 uVar2 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar2);
 uVar2 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar2);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 uVar2 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar2);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}

// Function: non_local_jump @ 0x11ec0
int non_local_jump(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = _setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if (param_1 < 0) {
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp(jump_buffer,2);
 }
 iVar2 = param_1 * 2;
 }
 return iVar2;
}

// Function: cpp_exception @ 0x11f30
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

// Function: large_jump_table @ 0x11f50
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 int (**func_array)(int, int) = (int (**)(int, int))&PTR_op_add_00015ed4;
 uVar1 = func_array[param_1](param_2, param_3);
 }
 return uVar1;
}

// Function: op_add @ 0x11f90
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x11fa0
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x11fb0
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x11fc0
int op_div(int param_1,int param_2)
{
 if (param_2 != 0) {
 return param_1 / param_2;
 }
 return 0;
}

// Function: op_mod @ 0x11fe0
int op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 return param_1 % param_2;
 }
 return 0;
}

// Function: op_and @ 0x12000
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x12010
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x12020
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x12030
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x12040
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x12050
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*pcVar1)(int);
 int (*pcVar2)(int);
 pcVar2 = recursion_factorial;
 if (param_1 == 1) {
 pcVar2 = triple_value;
 }
 pcVar1 = double_value;
 if (param_1 != 0) {
 pcVar1 = pcVar2;
 }
 (*pcVar1)(param_2);
 return;
}

// Function: FUN_00012095 @ 0x12095
unsigned int FUN_00012095(unsigned int param_1,unsigned int param_2,uint param_3)
{
 unsigned int uVar1;
 if (param_3 < 4) {
 uVar1 = param_3;
 return uVar1;
 }
 return 3;
}

// Function: fsm_func_table @ 0x120e0
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 uVar1 = 3;
 if (param_2 < 4) {
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
 uVar1 = (unsigned int)state_error(param_1);
 break;
 }
 }
 return uVar1;
}

// Function: state_idle @ 0x12120
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x12130
unsigned int state_processing(int param_1)
{
 unsigned int uVar1;
 uVar1 = ((param_1 == 99) ? 1 : 0) * 2 + 1;
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
}

// Function: state_done @ 0x12150
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x12160
char state_error(int param_1)
{
 return (param_1 != 0) * '\x03';
}

// Function: FUN_00012175 @ 0x12175
unsigned int FUN_00012175(unsigned int param_1,unsigned int param_2,uint param_3)
{
 unsigned int uVar1;
 if (3 < param_3) {
 return 0xffffffff;
 }
 uVar1 = param_3;
 return uVar1;
}

// Function: obfuscated_cf @ 0x121b0
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x121c0
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x121d0
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}

// Function: computed_goto @ 0x121f0
unsigned int computed_goto(void *label, int param_1)
{
 (void)label;
 return param_1 + 1;
}

// Function: test_control_flow_l3 @ 0x121f0
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 char *pcVar2 = NULL;
 puts(&DAT_00013619);
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
 uVar1 = computed_goto(pcVar2,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x12330
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



// Function: _fini @ 0x123ac
// Standard C runtime symbol - provided by linker

