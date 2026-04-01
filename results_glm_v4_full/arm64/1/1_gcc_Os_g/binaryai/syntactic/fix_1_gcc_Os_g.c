// Decompiled by BinaryAI
// SHA256: bfe610b8b1cc24247c9ac3b521882fdd08385e4c67bac298dd5d4eb79a4ddab8

#include <stdio.h>
#include <stdint.h>
#include <setjmp.h>
#include <stdbool.h>

typedef unsigned int uint;

/* Global variables */
extern long unsigned int ___stack_chk_guard;
char completed_0 = 0;
jmp_buf jump_buffer;

/* Function declarations */
extern void *__dso_handle;
extern int _setjmp(jmp_buf __env);
extern void __longjmp_chk(jmp_buf, int);
extern void __libc_start_main(int (*)(int, char **), int, char **, void (*)(void), void (*)(void), void (*)(void), void *);
extern int SBORROW4(int a, int b);
extern void __cxa_finalize(void *dso_handle);
extern int __printf_chk(int, const char *, ...);
extern void __stack_chk_fail(void);
extern void __gmon_start__(void);
extern void abort(void);
extern int puts(const char *);

int call_weak_fn(void *ctx);
void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);
int recursion_factorial(int param_1);
int double_value(int param_1);
int triple_value(int param_1);
int op_add(int param_1, int param_2);
int op_sub(int param_1, int param_2);
int op_mul(int param_1, int param_2);
int op_div(int param_1, int param_2);
int op_mod(int param_1, int param_2);
uint op_and(uint param_1, uint param_2);
uint op_or(uint param_1, uint param_2);
uint op_xor(uint param_1, uint param_2);
int op_shl(int param_1, uint param_2);
int op_shr(int param_1, uint param_2);
unsigned long long state_idle(int param_1);
unsigned long long state_processing(unsigned long long param_1);
unsigned long long state_done(void);
unsigned long long state_error(unsigned long long param_1);
int sequential_ops(int param_1, int param_2, int param_3);
unsigned long single_if(unsigned long param_1);
bool if_else(int param_1);
unsigned long nested_if_2(unsigned long param_1, int param_2);
char nested_if_deep(int param_1, int param_2, int param_3, int param_4, int param_5);
unsigned int if_elseif_chain(int param_1);
int if_elseif_long(uint param_1);
long switch_small(uint param_1);
int switch_large(uint param_1);
int switch_default(int param_1);
int switch_fallthrough(int param_1);
int loop_for_fixed(int param_1);
int loop_while(int param_1);
int loop_dowhile(int param_1);
int loop_nested(int param_1, int param_2);
void loop_break(int param_1);
int loop_continue(int param_1);
int goto_forward(int param_1);
int goto_backward(int param_1);
int ternary_op(int param_1, int param_2);
void loop_multi_exit(int param_1);
void infinite_loop(int *param_1);
int multi_return(uint param_1);
int conditional_return(int param_1);
unsigned int duffs_device(unsigned int *param_1, unsigned int *param_2, uint param_3);
int loop_complex_cond(int param_1);
int loop_modify_var(int param_1);
void loop_external_state(int *param_1);
int tail_recursion(int param_1, int param_2);
unsigned long indirect_recursion_a(unsigned long param_1, int param_2);
int call_func_ptr(void *UNRECOVERED_JUMPTABLE, unsigned int param_2);
unsigned long long call_func_ptr_array(uint param_1, unsigned int param_2);
int call_virtual_func(unsigned long long param_1, int param_2);
int process_with_callback(long param_1, int param_2, int (*param_3)(int));
int non_local_jump(int param_1);
int cpp_exception(int param_1);
unsigned long long large_jump_table(uint param_1, unsigned int param_2, unsigned int param_3);
int conditional_func_ptr(int param_1, unsigned int param_2);
uint state_machine(int param_1, uint param_2);
unsigned long long fsm_func_table(long param_1, unsigned long long param_2);
unsigned long long computed_goto(unsigned long long param_1, uint param_2);
int obfuscated_cf(int param_1);
int opaque_predicate(int param_1);
int overlapped_code(uint param_1);

/* External pointers */
extern int (*PTR_double_value_00113010)(int);
extern int (*PTR_triple_value_00113018)(int);
extern int (*PTR_recursion_factorial_00113020)(int);
extern int (*PTR_op_sub_00113030)(int, int);
extern int (*PTR_op_add_00113028)(int, int);
extern int (*PTR_op_mul_00113038)(int, int);
extern int (*PTR_op_div_00113040)(int, int);
extern uint (*PTR_op_and_00113050)(uint, uint);
extern int (*PTR_op_mod_00113048)(int, int);
extern uint (*PTR_op_xor_00113060)(uint, uint);
extern uint (*PTR_op_or_00113058)(uint, uint);
extern int (*PTR_op_shr_00113070)(int, uint);
extern int (*PTR_op_shl_00113068)(int, uint);

/* External data */
extern char DAT_00101c70[];
extern char DAT_00101edd[];
extern char DAT_001020d0[];
extern char CSWTCH_55[];
extern long tmp_ldXn;
extern long stack0x00000008;

// Function: _init @ 0x100928
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn(ctx);
 return iVar1;
}

// Function: FUN_00100940 @ 0x100940
void FUN_00100940(void)
{
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x100960



// Function: <EXTERNAL>::__cxa_finalize @ 0x100980
void __cxa_finalize(void *dso_handle)
{
 (void)dso_handle;
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100990



// Function: <EXTERNAL>::__gmon_start__ @ 0x1009b0
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x1009c0
void abort(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x1009d0
int puts(const char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x1009e0
void __longjmp_chk(jmp_buf env, int val)
{
 return;
}

// Function: main @ 0x100a00
int main(int argc, char **argv)
{
 (void)argc; (void)argv;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _start @ 0x100a40
void _start(unsigned long long param_1)
{
 void *stack_end = (void *)&stack0x00000008;
 __libc_start_main(main,0,(char **)stack_end,0,0,0,stack_end);
 abort();
}

// Function: call_weak_fn @ 0x100a74
int call_weak_fn(void *ctx)
{
 (void)ctx;
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x100a90
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100ac0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100afc @ 0x100afc
void FUN_00100afc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100b00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: recursion_factorial @ 0x100b54
int recursion_factorial(int param_1)
{
 int iVar1;
 iVar1 = 1;
 for (; 1 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}

// Function: double_value @ 0x100b74
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x100b7c
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x100b84
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x100b8c
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x100b94
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x100b9c
int op_div(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_2;
 if ((param_2 != 0) && (iVar1 = 0, param_2 != 0)) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
}

// Function: op_mod @ 0x100bb0
int op_mod(int param_1,int param_2)
{
 int iVar1;
 if (param_2 != 0) {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 param_2 = param_1 - iVar1 * param_2;
 }
 return param_2;
}

// Function: op_and @ 0x100bc8
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x100bd0
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x100bd8
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x100be0
int op_shl(int param_1,uint param_2)
{
 return param_1 << (unsigned long)(param_2 & 0x1f);
}

// Function: op_shr @ 0x100be8
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x100bf0
unsigned long long state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x100bfc
unsigned long long state_processing(unsigned long long param_1)
{
 unsigned long long uVar1;
 if ((unsigned long)param_1 != 2) {
 uVar1 = 3;
 if ((unsigned long)param_1 != 99) {
 uVar1 = 1;
 }
 param_1 = uVar1;
 }
 return param_1;
}

// Function: state_done @ 0x100c14
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x100c1c
unsigned long long state_error(unsigned long long param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x100c2c
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x100c3c
unsigned long single_if(unsigned long param_1)
{
 if (0 < (int)param_1) {
 param_1 = (unsigned long)(uint)((int)param_1 << 1);
 }
 return param_1;
}

// Function: if_else @ 0x100c4c
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x100c58
unsigned long nested_if_2(unsigned long param_1,int param_2)
{
 if ((int)param_1 < 1) {
 param_1 = 0;
 }
 else if (0 < param_2) {
 param_1 = (unsigned long)(uint)((int)param_1 + param_2);
 }
 return param_1;
}

// Function: nested_if_deep @ 0x100c78
char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 char cVar1;
 if (param_1 < 1) {
 cVar1 = '\0';
 }
 else if (param_2 < 1) {
 cVar1 = '\x01';
 }
 else if (param_3 < 1) {
 cVar1 = '\x02';
 }
 else if (param_4 < 1) {
 cVar1 = '\x03';
 }
 else {
 cVar1 = (0 < param_5) + '\x04';
 }
 return cVar1;
}

// Function: if_elseif_chain @ 0x100cc8
unsigned int if_elseif_chain(int param_1)
{
 unsigned int uVar1;
 if (param_1 == 0) {
 uVar1 = 10;
 }
 else if (param_1 == 1) {
 uVar1 = 0x14;
 }
 else {
 uVar1 = 0x1e;
 if (param_1 != 2) {
 uVar1 = 0xffffffff;
 }
 }
 return uVar1;
}

// Function: if_elseif_long @ 0x100cf4
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 100 + 100;
 if (4 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_small @ 0x100d08
long switch_small(uint param_1)
{
 long lVar1;
 if (param_1 < 4) {
 lVar1 = (long)*(char *)((long)&CSWTCH_55 + (unsigned long)param_1);
 }
 else {
 lVar1 = 0xffffffff;
 }
 return lVar1;
}

// Function: switch_large @ 0x100d28
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_default @ 0x100d3c
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = param_1 * 100;
 if (2 < param_1 - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x100d54
int switch_fallthrough(int param_1)
{
 int iVar1;
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 if (param_1 != 1) {
 return -1;
 }
 iVar1 = 0;
 goto LAB_00100d7c;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_00100d7c:
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x100d94
int loop_for_fixed(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 }
 return iVar1;
}

// Function: loop_while @ 0x100db8
int loop_while(int param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != 0; param_1 = param_1 / 10) {
 iVar1 = iVar1 + 1;
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x100ddc
int loop_dowhile(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
}

// Function: loop_nested @ 0x100df8
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 iVar2 = 0;
 while (iVar3 < param_1) {
 iVar3 = iVar3 + 1;
 iVar1 = param_2;
 if (param_2 < 0) {
 iVar1 = 0;
 }
 iVar2 = iVar2 + iVar1;
 }
 return iVar2;
}

// Function: loop_break @ 0x100e24
void loop_break(int param_1)
{
 long lVar1;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 lVar1 = 0;
 local_20 = 0x140000000a;
 uStack_18 = 0x280000001e;
 local_10 = 0x32;
 do {
 if (*(int *)((long)&local_20 + lVar1 * 4) == param_1) {
 return;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 5);
 return;
}

// Function: loop_continue @ 0x100eb0
int loop_continue(int param_1)
{
 int iVar1;
 uint uVar2;
 iVar1 = 0;
 for (uVar2 = 1; (int)uVar2 <= param_1; uVar2 = uVar2 + 1) {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 }
 return iVar1;
}

// Function: goto_forward @ 0x100ed8
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}

// Function: goto_backward @ 0x100eec
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 1;
 if (0 < param_1) {
 iVar2 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 <= param_1);
 }
 return iVar1;
}

// Function: ternary_op @ 0x100f14
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x100f20
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 puts((const char *)&DAT_00101c70);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",1);
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
 uVar1 = loop_for_fixed(10);
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
 uVar1 = loop_break(0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_continue(10);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x101194
void loop_multi_exit(int param_1)
{
 unsigned long long *puVar1;
 int iVar2;
 long lVar3;
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 unsigned long long local_8;
 local_8 = ___stack_chk_guard;
 puVar1 = &local_38;
 uStack_30 = 0x400000003;
 local_38 = 0x200000001;
 uStack_20 = 0x800000007;
 uStack_28 = 0x600000005;
 iVar2 = 0;
 uStack_10 = 0xc0000000b;
 local_18 = 0xa00000009;
 do {
 lVar3 = 0;
 do {
 if (*(int *)((long)puVar1 + lVar3 * 4) == param_1) {
 return;
 }
 lVar3 = lVar3 + 1;
 } while (lVar3 != 4);
 iVar2 = iVar2 + 1;
 puVar1 = puVar1 + 2;
 } while (iVar2 != 3);
 return;
}

// Function: infinite_loop @ 0x101238
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

// Function: multi_return @ 0x101264
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

// Function: conditional_return @ 0x101294
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (param_1 == 0) {
 iVar1 = 0;
 }
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x1012a8
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 int iVar3;
 unsigned int *puVar4;
 unsigned int *puVar5;
 if ((int)param_3 < 1) {
 param_3 = 0xffffffff;
 }
 else {
 iVar3 = (int)(param_3 + 7) >> 3;
 puVar2 = param_2;
 puVar1 = param_2;
 puVar5 = param_1;
 puVar4 = param_1;
 switch(param_3 & 7) {
 case 1:
 while( true ) {
 iVar3 = iVar3 + -1;
 *param_1 = *param_2;
 if (iVar3 == 0) break;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_001012e4_caseD_7:
 puVar1 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
 puVar2 = puVar1 + 1;
 puVar5 = puVar4 + 1;
 *puVar4 = *puVar1;
switchD_001012e4_caseD_6:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
switchD_001012e4_caseD_5:
 puVar2 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
switchD_001012e4_caseD_4:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
switchD_001012e4_caseD_3:
 puVar2 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
switchD_001012e4_caseD_2:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
 }
 break;
 case 2:
 goto switchD_001012e4_caseD_2;
 case 3:
 goto switchD_001012e4_caseD_3;
 case 4:
 goto switchD_001012e4_caseD_4;
 case 5:
 goto switchD_001012e4_caseD_5;
 case 6:
 goto switchD_001012e4_caseD_6;
 case 7:
 goto switchD_001012e4_caseD_7;
 default:
 goto switchD_001012e4_caseD_7;
 }
 }
 return param_3;
}

// Function: loop_complex_cond @ 0x101344
int loop_complex_cond(int param_1)
{
 bool bVar1;
 bool bVar2;
 int iVar3;
 iVar3 = 0;
 while( true ) {
 bVar1 = iVar3 * 2 < param_1 - iVar3;
 bVar2 = false;
 if (bVar1) {
 bVar2 = iVar3 + -9 < 0;
 }
 if ((!bVar1 || iVar3 != 9) && bVar2 == (bVar1 && SBORROW4(iVar3,9))) break;
 iVar3 = iVar3 + 1;
 }
 return iVar3 * 3 + (param_1 - iVar3);
}

// Function: loop_modify_var @ 0x101370
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 }
 return iVar1;
}

// Function: loop_external_state @ 0x1013a0
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

// Function: tail_recursion @ 0x1013c0
int tail_recursion(int param_1,int param_2)
{
 for (; 1 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 * param_1;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x1013e0
unsigned long indirect_recursion_a(unsigned long param_1,int param_2)
{
 uint uVar1;
 int iVar2;
 do {
 if (param_2 < 1) {
 return param_1;
 }
 if ((param_1 & 1) == 0) {
 uVar1 = (int)param_1 / 2;
 if (param_2 == 1) {
 return (unsigned long)uVar1;
 }
 uVar1 = uVar1 + 1;
 }
 else {
 iVar2 = (int)param_1 * 3;
 if (param_2 == 1) {
 return (unsigned long)(iVar2 + 1);
 }
 uVar1 = iVar2 + 2;
 }
 param_1 = (unsigned long)uVar1;
 param_2 = param_2 + -2;
 } while( true );
}

// Function: call_func_ptr @ 0x101424
int call_func_ptr(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 return ((int (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
}

// Function: call_func_ptr_array @ 0x101430
unsigned long long call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 void *local_20 [4];
 int (*func_ptr)(int);
 local_20[3] = (void *)___stack_chk_guard;
 local_20[0] = (void *)PTR_double_value_00113010;
 local_20[1] = (void *)PTR_triple_value_00113018;
 local_20[2] = (void *)PTR_recursion_factorial_00113020;
 if (param_1 < 3) {
 func_ptr = (int (*)(int))local_20[(int)param_1];
 uVar1 = func_ptr((int)param_2);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: call_virtual_func @ 0x1014c8
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x1014d0
int process_with_callback(long param_1,int param_2,int (*param_3)(int))
{
 int iVar1;
 long lVar2;
 int iVar3;
 iVar3 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = param_3(*(int *)(param_1 + lVar2 * 4));
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x10152c
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 unsigned int local_68;
 unsigned int local_64;
 unsigned long long local_60;
 unsigned long long uStack_58;
 unsigned int local_50;
 unsigned long long local_48;
 unsigned long long uStack_40;
 unsigned long long uStack_38;
 unsigned long long uStack_30;
 unsigned long long local_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_00101edd);
 loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0);
 local_68 = 0;
 infinite_loop(&local_68);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",1);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 uVar1 = duffs_device((unsigned int *)&local_28,(unsigned int *)&local_48,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",0);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_64 = 0;
 loop_external_state(&local_64);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",101);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 uVar1 = indirect_recursion_a(6,1);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 uVar1 = call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_60 = 0x200000001;
 uStack_58 = 0x400000003;
 local_50 = 5;
 uVar1 = process_with_callback((long)&local_60,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: non_local_jump @ 0x1017ac
int non_local_jump(int param_1)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (param_1 < 0) {
 uVar2 = 1;
 }
 else {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 uVar2 = 2;
 }
 __longjmp_chk(jump_buffer,uVar2);
}

// Function: cpp_exception @ 0x101808
int cpp_exception(int param_1)
{
 int iVar1;
 if (param_1 < 0) {
 iVar1 = 10;
 }
 else {
 iVar1 = param_1 * 2;
 if (101 < param_1) {
 iVar1 = -2;
 }
 }
 return iVar1;
}

// Function: large_jump_table @ 0x101828
unsigned long long large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned long long uVar1;
 void *local_58 [10];
 unsigned long long local_8;
 local_8 = ___stack_chk_guard;
 local_58[1] = (void *)PTR_op_sub_00113030;
 local_58[0] = (void *)PTR_op_add_00113028;
 local_58[3] = (void *)PTR_op_div_00113040;
 local_58[2] = (void *)PTR_op_mul_00113038;
 local_58[5] = (void *)PTR_op_and_00113050;
 local_58[4] = (void *)PTR_op_mod_00113048;
 local_58[7] = (void *)PTR_op_xor_00113060;
 local_58[6] = (void *)PTR_op_or_00113058;
 local_58[9] = (void *)PTR_op_shr_00113070;
 local_58[8] = (void *)PTR_op_shl_00113068;
 if (param_1 < 10) {
 uVar1 = ((unsigned long long (*)(unsigned int, unsigned int))local_58[(int)param_1])(param_2,param_3);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: conditional_func_ptr @ 0x1018d0
int conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *UNRECOVERED_JUMPTABLE;
 int iVar1;
 if (param_1 == 0) {
 UNRECOVERED_JUMPTABLE = double_value;
 }
 else {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 iVar1 = ((int (*)(int))UNRECOVERED_JUMPTABLE)((int)param_2);
 return iVar1;
}

// Function: state_machine @ 0x101908
uint state_machine(int param_1,uint param_2)
{
 switch(param_2) {
 case 0:
 param_2 = (uint)(param_1 == 1);
 return param_2;
 case 1:
 if (param_1 == 2) {
 param_2 = 2;
 }
 else if (param_1 == 99) {
 param_2 = 3;
 }
 return param_2;
 case 2:
 return param_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 param_2 = 3;
 return param_2;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x101970
unsigned long long fsm_func_table(long param_1,unsigned long long param_2)
{
 char *puVar1;
 long lVar2;
 char *puVar3;
 long lVar4;
 unsigned long long uVar5;
 char uVar6;
 char uVar7;
 char uVar8;
 char uVar9;
 char uVar10;
 char uVar11;
 char uVar12;
 char uVar13;
 char uVar14;
 char uVar15;
 char uVar16;
 char uVar17;
 char uVar18;
 char uVar19;
 char uVar20;
 char uVar21;
 char uVar22;
 char uVar23;
 char uVar24;
 char uVar25;
 char uVar26;
 char uVar27;
 char uVar28;
 char uVar29;
 char uVar30;
 char uVar31;
 char uVar32;
 char uVar33;
 char uVar34;
 char uVar35;
 char uVar36;
 void *local_28 [4];
 long local_8;
 lVar4 = (long)___stack_chk_guard;
 local_8 = (long)___stack_chk_guard;
 tmp_ldXn = 0x113078;
 puVar1 = (char *)tmp_ldXn;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar6 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar7 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar8 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar9 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar10 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar11 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar12 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar13 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar14 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar15 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar16 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar17 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar18 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar19 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar20 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar21 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar22 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar23 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar24 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar25 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar26 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar27 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar28 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar29 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar30 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar31 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar32 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar33 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar34 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar35 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar36 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 tmp_ldXn = (long)local_28;
 puVar3 = (char *)tmp_ldXn;
 *puVar3 = *puVar1;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar6;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar7;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar8;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar9;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar10;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar11;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar12;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar13;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar14;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar15;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar16;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar17;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar18;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar19;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar20;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar21;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar22;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar23;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar24;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar25;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar26;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar27;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar28;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar29;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar30;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar31;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar32;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar33;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar34;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar35;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar36;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 if ((uint)param_2 < 4) {
 if (lVar4 == local_8) {
 return 0;
 }
 return param_1;
 }
 else {
 param_1 = (unsigned long long)(lVar4 - local_8);
 param_2 = 0;
 if (param_1 == 0) {
 return 3;
 }
 __stack_chk_fail();
 return param_1;
 }
}

// Function: computed_goto @ 0x1019fc
unsigned long long computed_goto(unsigned long long param_1,uint param_2)
{
 char *puVar1;
 long lVar2;
 char *puVar3;
 long lVar4;
 char uVar5;
 char uVar6;
 char uVar7;
 char uVar8;
 char uVar9;
 char uVar10;
 char uVar11;
 char uVar12;
 char uVar13;
 char uVar14;
 char uVar15;
 char uVar16;
 char uVar17;
 char uVar18;
 char uVar19;
 char uVar20;
 char uVar21;
 char uVar22;
 char uVar23;
 char uVar24;
 char uVar25;
 char uVar26;
 char uVar27;
 char uVar28;
 char uVar29;
 char uVar30;
 char uVar31;
 char uVar32;
 char uVar33;
 char uVar34;
 char uVar35;
 void *local_28 [4];
 long local_8;
 lVar4 = (long)___stack_chk_guard;
 local_8 = (long)___stack_chk_guard;
 tmp_ldXn = 0x113098;
 puVar1 = (char *)tmp_ldXn;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar5 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar6 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar7 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar8 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar9 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar10 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar11 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar12 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar13 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar14 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar15 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar16 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar17 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar18 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar19 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar20 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar21 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar22 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar23 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar24 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar25 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar26 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar27 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar28 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar29 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar30 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar31 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar32 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar33 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar34 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar3 = (char *)tmp_ldXn;
 uVar35 = *puVar3;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 tmp_ldXn = (long)local_28;
 puVar3 = (char *)tmp_ldXn;
 *puVar3 = *puVar1;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar5;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar6;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar7;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar8;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar9;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar10;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar11;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar12;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar13;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar14;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar15;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar16;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar17;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar18;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar19;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar20;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar21;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar22;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar23;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar24;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar25;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar26;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar27;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar28;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar29;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar30;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar31;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar32;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar33;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar34;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 puVar1 = (char *)tmp_ldXn;
 *puVar1 = uVar35;
 lVar2 = tmp_ldXn;
 tmp_ldXn = lVar2 + 1;
 if (param_2 < 4) {
 return 0;
 }
 else if (lVar4 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return param_1;
}

// Function: obfuscated_cf @ 0x101a8c
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x101a94
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x101a9c
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

// Function: test_control_flow_l3 @ 0x101ab8
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 unsigned long long local_18;
 unsigned long long local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_001020d0);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 uVar1 = conditional_func_ptr(0,5);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 uVar1 = state_machine(2,1);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",uVar1);
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",0);
 local_18 = 0x100000000;
 local_10 = 0x300000002;
 computed_goto((unsigned long long)&local_18,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",0);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: _fini @ 0x101c58
void _fini(void)
{
 return;
}

