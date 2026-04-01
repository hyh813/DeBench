// Decompiled by BinaryAI
// SHA256: 83c373b4006233bfc5544027c170717914300b1db4aef5267547c08658b457ad

#include <setjmp.h>
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int uint;

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
void *stack0x00000008 = 0;
jmp_buf jump_buffer;

// Data arrays (from binary)
unsigned int DAT_001018f0[4] = {7, 3, 5, 9};
unsigned int DAT_001018ec[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
unsigned int DAT_001018d8[5] = {0, 1, 2, 3, 4};
unsigned int DAT_00101ee0[4] = {50, 100, 200, 300};

// String pointers
char *DAT_00101e71 = "Control Flow Test Level 1\n";
char *DAT_00101e95 = "Control Flow Test Level 2\n";
char *DAT_00101eb9 = "Control Flow Test Level 3\n";

// Function declarations
void call_weak_fn(void);
int main(void);
int double_value(int);
int triple_value(int);
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
uint op_and(uint, uint);
uint op_or(uint, uint);
uint op_xor(uint, uint);
int op_shl(int, uint);
int op_shr(int, uint);
bool state_idle(int);
int state_processing(int);
unsigned long long state_done(void);
unsigned int state_error(int);

// Function pointer arrays
int (*PTR_double_value_00112d30[3])(int) = {double_value, triple_value, NULL};
int (*PTR_op_add_00112d48[10])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod, (int (*)(int,int))op_and, (int (*)(int,int))op_or, (int (*)(int,int))op_xor, (int (*)(int,int))op_shl, (int (*)(int,int))op_shr};
// Note: state_done returns unsigned long long, state_error returns unsigned int - using void* for compatibility
void (*PTR_state_idle_00112d98[4])(void) = {(void (*)(void))state_idle, (void (*)(void))state_processing, (void (*)(void))state_done, (void (*)(void))state_error};

// Function pointer array pointers (for indexed access)
int (*PTR_double_value_arr[3])(int) = {double_value, triple_value, double_value};
int (*PTR_op_add_arr[10])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod, (int (*)(int,int))op_and, (int (*)(int,int))op_or, (int (*)(int,int))op_xor, (int (*)(int,int))op_shl, (int (*)(int,int))op_shr};
unsigned long long (*PTR_state_idle_arr[4])(void) = {state_idle, state_processing, state_done, state_error};

// Function: _init @ 0x100860
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100880 @ 0x100880
void FUN_00100880(void)
{
 // Null function pointer call - removed as it's invalid
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x1008a0
// Note: Using standard library _setjmp, no wrapper needed

// Function: <EXTERNAL>::__libc_start_main @ 0x1008b0
// Stub - actual implementation in libc
void __libc_start_main(void (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long long auxv);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008c0
void __cxa_finalize(void *dso)
{
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1008d0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::abort @ 0x1008e0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x1008f0
// Stub - using standard library puts

// Function: <EXTERNAL>::longjmp @ 0x100900
// Using standard library longjmp

// Function: <EXTERNAL>::printf @ 0x100910
// Using standard library printf

// Function: _start @ 0x100940
void _start(unsigned long long param_1)
{
 void *param_9;
 __libc_start_main((void (*)(void))main,param_9,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x100974
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100990
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1009c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001009fc @ 0x1009fc
void FUN_001009fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: sequential_ops @ 0x100a54
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x100a64
int single_if(int param_1)
{
 return param_1 << (0 < param_1);
}

// Function: if_else @ 0x100a74
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x100a80
int nested_if_2(int param_1,uint param_2)
{
 int iVar1;
 iVar1 = (param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) + param_1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x100a94
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

// Function: if_elseif_chain @ 0x100ae4
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x100afc
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 100 + 100;
 if (4 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_small @ 0x100b14
unsigned int switch_small(uint param_1)
{
 if (param_1 < 4) {
 return *(unsigned int *)(&DAT_00101ee0 + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}

// Function: switch_large @ 0x100b34
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_default @ 0x100b48
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = (param_1 - 1U) * 100 + 100;
 if (2 < param_1 - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x100b64
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

// Function: loop_for_fixed @ 0x100b98
int loop_for_fixed(int param_1)
{
 if (0 < param_1) {
 return (int)((unsigned long)(param_1 - 1) * (unsigned long)(param_1 - 2) >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x100bc0
int loop_while(int param_1)
{
 uint uVar1;
 int iVar2;
 iVar2 = 0;
 if (param_1 != 0) {
 do {
 iVar2 = iVar2 + 1;
 uVar1 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar1);
 }
 if (iVar2 == 0) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: loop_dowhile @ 0x100c00
int loop_dowhile(int param_1)
{
 uint uVar1;
 int iVar2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 uVar1 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar1);
 return iVar2;
}

// Function: loop_nested @ 0x100c38
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

// Function: loop_break @ 0x100c50
long loop_break(int param_1)
{
 long lVar1;
 lVar1 = 0;
 do {
 if (DAT_001018d8[lVar1] == param_1) {
 return lVar1;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 5);
 return 0xffffffff;
}

// Function: loop_continue @ 0x100c80
int loop_continue(uint param_1)
{
 int iVar1;
 uint uVar2;
 if (0 < (int)param_1) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 iVar1 = (-(uVar2 & 1) & uVar2) + iVar1;
 } while (param_1 != uVar2);
 return iVar1;
 }
 return 0;
}

// Function: goto_forward @ 0x100cbc
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x100cd0
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 1;
 do {
 iVar2 = iVar2 + 1;
 iVar1 = iVar2 * iVar1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 1;
}

// Function: ternary_op @ 0x100d00
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x100d0c
int test_control_flow_l1(void)
{
 int iVar1;
 puts(DAT_00101e71);
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
 iVar1 = printf("CF-L1-20 (ternary_op): %d\n",8);
 return iVar1;
}

// Function: loop_multi_exit @ 0x100edc
int loop_multi_exit(int param_1)
{
 bool bVar1;
 long lVar2;
 unsigned int *puVar3;
 int in_w12;
 int iVar4;
 unsigned long uVar5;
 unsigned long uVar6;
 lVar2 = 0;
 puVar3 = DAT_001018f0;
 do {
 if ((&DAT_001018ec)[lVar2 * 4] == param_1) {
 uVar5 = 0;
 bVar1 = true;
 }
 else {
 uVar5 = 0;
 do {
 uVar6 = uVar5;
 if (uVar6 == 3) {
 iVar4 = 5;
 if (uVar6 < 3) goto LAB_00100f68;
 goto LAB_00100f54;
 }
 uVar5 = uVar6 + 1;
 } while (puVar3[uVar6] != param_1);
 bVar1 = uVar6 < 3;
 }
 in_w12 = (int)uVar5 + (int)lVar2 * 10;
 iVar4 = 1;
 if (bVar1) goto LAB_00100f68;
LAB_00100f54:
 lVar2 = lVar2 + 1;
 puVar3 = puVar3 + 4;
 } while (lVar2 != 3);
 iVar4 = 2;
LAB_00100f68:
 if (iVar4 == 2) {
 in_w12 = -1;
 }
 return in_w12;
}

// Function: infinite_loop @ 0x100f74
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

// Function: multi_return @ 0x100fa0
int multi_return(uint param_1)
{
 int iVar1;
 int iVar2;
 if (-1 < (int)param_1) {
 iVar2 = param_1 << 1;
 if ((param_1 & 1) != 0) {
 iVar2 = param_1 + 1;
 }
 iVar1 = -2;
 if ((int)param_1 < 0x33) {
 iVar1 = iVar2;
 }
 return iVar1;
 }
 return -1;
}

// Function: conditional_return @ 0x100fc8
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = param_1 << 1;
 if (param_1 < 1) {
 iVar1 = -param_1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x100fd8
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 iVar5 = -1;
 if (0 < param_3) {
 iVar3 = param_3 + 0xe;
 if (-1 < param_3 + 7) {
 iVar3 = param_3 + 7;
 }
 iVar3 = iVar3 >> 3;
 iVar5 = param_3;
 if ((uint)(param_3 % 8) < 8) {
 puVar1 = param_1;
 puVar2 = param_2;
 iVar4 = iVar3;
 switch(param_3 % 8) {
 case 1:
 goto switchD_00101024_caseD_1;
 case 2:
 goto switchD_00101024_caseD_2;
 case 3:
 goto switchD_00101024_caseD_3;
 case 4:
 goto switchD_00101024_caseD_4;
 case 5:
 goto switchD_00101024_caseD_5;
 case 6:
 goto switchD_00101024_caseD_6;
 case 7:
 goto switchD_00101024_caseD_7;
 }
 do {
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 iVar4 = iVar3;
switchD_00101024_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00101024_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00101024_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00101024_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00101024_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_00101024_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_00101024_caseD_1:
 param_2 = puVar2 + 1;
 iVar3 = iVar4 + -1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 } while (iVar3 != 0 && 0 < iVar4);
 }
 }
 return iVar5;
}

// Function: loop_complex_cond @ 0x10107c
int loop_complex_cond(int param_1)
{
 bool bVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 if (param_1 < 1) {
 iVar3 = 0;
 uVar4 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = param_1;
 uVar5 = 0;
 do {
 iVar3 = iVar3 + 2;
 param_1 = iVar2 + -1;
 uVar4 = uVar5 + 1;
 if ((iVar2 < 2) || (param_1 <= iVar3)) break;
 bVar1 = uVar5 < 9;
 iVar2 = param_1;
 uVar5 = uVar4;
 } while (bVar1);
 }
 return param_1 + iVar3 + uVar4;
}

// Function: loop_modify_var @ 0x1010d0
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (0 < param_1) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar1 = iVar3 + 2;
 if (iVar3 < 6) {
 iVar1 = iVar3;
 }
 iVar2 = iVar3 + iVar2;
 iVar3 = iVar1 + 1;
 } while (iVar3 < param_1);
 return iVar2;
 }
 return 0;
}

// Function: loop_external_state @ 0x101110
void loop_external_state(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return;
}

// Function: recursion_factorial @ 0x101130
int recursion_factorial(int param_1)
{
 int iVar1;
 if (param_1 < 2) {
 return 1;
 }
 iVar1 = recursion_factorial(param_1 + -1);
 return iVar1 * param_1;
}

// Function: tail_recursion @ 0x101168
int tail_recursion(int param_1,int param_2)
{
 if (1 < param_1) {
 param_2 = tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x101194
unsigned long indirect_recursion_a(unsigned long param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = (int)param_1;
 if ((param_1 & 1) == 0) {
 if (iVar1 < 0) {
 iVar1 = iVar1 + 1;
 }
 if (param_2 < 2) {
 return (unsigned long)(uint)(iVar1 >> 1);
 }
 iVar1 = (iVar1 >> 1) + 1;
 }
 else {
 if (param_2 < 2) {
 return (unsigned long)(iVar1 * 3 + 1);
 }
 iVar1 = iVar1 * 3 + 2;
 }
 param_1 = indirect_recursion_a(iVar1,param_2 + -2);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x1011ec
void call_func_ptr(void *param_1,unsigned int param_2)
{
 (*param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x101208
unsigned long long call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 if (2 < param_1) {
 return 0xffffffff;
 }
 uVar1 = (unsigned long long)PTR_double_value_arr[param_1](param_2);
 return uVar1;
}

// Function: double_value @ 0x10123c
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x101244
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x10124c
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x101254
int process_with_callback(unsigned int *param_1,uint param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 unsigned long uVar3;
 if ((int)param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 uVar3 = (unsigned long)param_2;
 do {
 iVar1 = (*param_3)(*param_1);
 uVar3 = uVar3 - 1;
 iVar2 = iVar1 + iVar2;
 param_1 = param_1 + 1;
 } while (uVar3 != 0);
 }
 return iVar2;
}

// Function: test_control_flow_l2 @ 0x1012ac
int test_control_flow_l2(void)
{
 uint uVar1;
 unsigned long uVar2;
 int iVar3;
 long lVar4;
 unsigned int *puVar5;
 uint uVar6;
 unsigned long extraout_x11;
 unsigned long uVar7;
 int iVar8;
 unsigned long uVar9;
 uint uVar10;
 puts(DAT_00101e95);
 iVar3 = 0;
 lVar4 = 0;
 puVar5 = &DAT_001018f0[0];
 uVar7 = extraout_x11;
 do {
 uVar6 = (uint)uVar7;
 uVar2 = 0;
 do {
 uVar9 = uVar2;
 if (uVar9 == 3) {
 iVar8 = 5;
 if (2 < uVar9) goto LAB_0010131c;
 goto LAB_00101334;
 }
 uVar2 = uVar9 + 1;
 } while (puVar5[uVar9] != 7);
 uVar6 = (int)(uVar9 + 1) - iVar3;
 uVar7 = (unsigned long)uVar6;
 iVar8 = 1;
 if (uVar9 < 3) goto LAB_00101334;
LAB_0010131c:
 uVar6 = (uint)uVar7;
 lVar4 = lVar4 + 1;
 iVar3 = iVar3 + -10;
 puVar5 = puVar5 + 4;
 } while (lVar4 != 3);
 iVar8 = 2;
LAB_00101334:
 if (iVar8 == 2) {
 uVar6 = 0xffffffff;
 }
 printf("CF-L2-01 (loop_multi_exit): %d\n",(unsigned long)uVar6);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n");
 uVar10 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar6 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar3 = 0xb;
 do {
 uVar1 = uVar6 - 8;
 uVar6 = uVar6 + 2;
 if (iVar3 - 2U <= uVar1) break;
 uVar10 = uVar10 + 1;
 iVar3 = iVar3 + -1;
 } while (uVar10 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar6);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n");
 uVar7 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar7 & 0xffffffff);
 uVar7 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar7 & 0xffffffff);
 uVar7 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar7 & 0xffffffff);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 uVar7 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar7 & 0xffffffff);
 iVar3 = printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return iVar3;
}

// Function: non_local_jump @ 0x1014f8
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp(jump_buffer,2);
 }
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}

// Function: cpp_exception @ 0x10155c
int cpp_exception(int param_1)
{
 int iVar1;
 iVar1 = -2;
 if (param_1 < 0x65) {
 iVar1 = param_1 << 1;
 }
 if (param_1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: large_jump_table @ 0x101578
unsigned long long large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned long long uVar1;
 if (9 < param_1) {
 return 0xffffffff;
 }
 uVar1 = (unsigned long long)PTR_op_add_arr[param_1](param_2,param_3);
 return uVar1;
}

// Function: op_add @ 0x1015b0
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x1015b8
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1015c0
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x1015c8
int op_div(int param_1,int param_2)
{
 int iVar1;
 if (param_2 != 0) {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
 }
 return 0;
}

// Function: op_mod @ 0x1015dc
int op_mod(int param_1,int param_2)
{
 int iVar1;
 if (param_2 != 0) {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 return param_1 - iVar1 * param_2;
 }
 return 0;
}

// Function: op_and @ 0x1015f4
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x1015fc
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x101604
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x10160c
int op_shl(int param_1,uint param_2)
{
 return param_1 << (unsigned long)(param_2 & 0x1f);
}

// Function: op_shr @ 0x101614
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x10161c
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *pcVar1;
 void *pcVar2;
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 pcVar2 = double_value;
 if (param_1 != 0) {
 pcVar2 = pcVar1;
 }
 (*pcVar2)(param_2);
 return;
}

// Function: state_machine @ 0x10165c
uint state_machine(uint param_1,uint param_2)
{
 uint uVar1;
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = 3;
 if (param_1 != 99) {
 uVar1 = 1;
 }
 if (param_1 != 2) {
 param_1 = uVar1;
 }
 return param_1;
 case 2:
 break;
 case 3:
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x1016c0
unsigned long long fsm_func_table(unsigned long long param_1,uint param_2)
{
 unsigned long long uVar1;
 if (3 < param_2) {
 return 3;
 }
 uVar1 = (unsigned long long)PTR_state_idle_arr[param_2]();
 return uVar1;
}

// Function: state_idle @ 0x1016f0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x1016fc
int state_processing(int param_1)
{
 int iVar1;
 iVar1 = 3;
 if (param_1 != 99) {
 iVar1 = 1;
 }
 if (param_1 != 2) {
 param_1 = iVar1;
 }
 return param_1;
}

// Function: state_done @ 0x101714
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x10171c
unsigned int state_error(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}

// Function: computed_goto @ 0x10172c
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

// Function: obfuscated_cf @ 0x10176c
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x101774
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x10177c
int overlapped_code(uint param_1)
{
 int iVar1;
 uint uVar2;
 uVar2 = param_1;
 if ((int)param_1 < 0) {
 uVar2 = param_1 + 1;
 }
 iVar1 = (int)uVar2 >> 1;
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x101798
int test_control_flow_l3(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_00101eb9);
 uVar2 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar2 & 0xffffffff);
 uVar2 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar2 & 0xffffffff);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 iVar1 = printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar2 = computed_goto(iVar1,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar2 & 0xffffffff);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 iVar1 = printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return iVar1;
}

// Function: main @ 0x101894
int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _fini @ 0x1018b4
void _fini(void)
{
 return;
}

