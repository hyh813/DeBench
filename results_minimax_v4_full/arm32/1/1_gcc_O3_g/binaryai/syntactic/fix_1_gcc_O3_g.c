/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <stddef.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// size_t, ptrdiff_t, etc. are already defined in stddef.h (included via setjmp.h)
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef _Bool bool;
#define true 1
#define false 0

// Decompiled by BinaryAI
// SHA256: 7e4cd506afeb7bf73d253b2048a3490420ef9140e1ec5cfb8b5366107a3360fb

// Function: _init @ 0x10448
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x10468
extern int raise(int __sig);
int ext_raise(int __sig)
{
 return raise(__sig);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10474
void __libc_start_main(int (*main)(void), void *argc, void *argv, void (*dtors)(void), void *unused, int rtld_fini);
void ext___libc_start_main(int (*main)(void), void *argc, void *argv, void (*dtors)(void), void *unused, int rtld_fini)
{
 __libc_start_main(main, argc, argv, dtors, unused, rtld_fini);
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x10480
// Uses setjmp.h from standard library

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1048c
extern void __stack_chk_fail(void);
void ext___stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x10498
// Wrapper function - just calls puts
void wrapper_puts(char *__s)
{
 puts(__s);
 return;
}

// Function: <EXTERNAL>::memset @ 0x104b0
extern void *memset(void *__s, int __c, size_t __n);

// Function: <EXTERNAL>::__printf_chk @ 0x104bc
extern int __printf_chk(int __flag, char *__format, ...);

// Function: <EXTERNAL>::__longjmp_chk @ 0x104c8
extern void __longjmp_chk(jmp_buf __env, int __val);

// Function: <EXTERNAL>::abort @ 0x104d4
extern void abort(void);

// Function: main @ 0x104e0
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Global variables
char completed_0 = 0;
unsigned int CSWTCH_56 [] = {0,1,2,3};
char DAT_00011b58[] = "Control Flow Tests Level 1";
char DAT_00011de0[] = "Control Flow Tests Level 2";
char DAT_00011fe4[] = "Control Flow Tests Level 3";
char DAT_000116c8 = 0;
char DAT_000116c0 = 0;
char DAT_000116b8 = 0;
char DAT_00011694 = 0;
jmp_buf jump_buffer;

// Function: _start @ 0x104f8
void _start(unsigned int param_1,unsigned int param_2)
{
 void *stack = 0;
 __libc_start_main(main,param_2,stack,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x1053c
// __gmon_start__ is a weak symbol that may be NULL
extern void __gmon_start__(void);
void call_weak_fn(void)
{
 void (*gmon_start)(void) = __gmon_start__;
 if (gmon_start != NULL) {
 gmon_start();
 }
 return;
}

// Function: deregister_tm_clones @ 0x10560
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1058c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x105c4
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: recursion_factorial @ 0x105f0
int recursion_factorial(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 1;
 if (param_1 < 2) {
 return iVar1;
 }
 do {
 iVar2 = param_1 + -1;
 iVar1 = param_1 * iVar1;
 param_1 = iVar2;
 } while (iVar2 != 1);
 return iVar1;
}

// Function: double_value @ 0x10618
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10620
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x10628
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x10630
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x10638
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x10640
unsigned int op_div(unsigned int param_1,unsigned int param_2)
{
 unsigned int uVar1;
 if (param_2 != 0) {
 uVar1 = __aeabi_idiv(param_1, param_2);
 return uVar1;
 }
 return 0;
}

// Function: op_mod @ 0x1065c
unsigned int op_mod(unsigned int param_1, unsigned int param_2)
{
 if (param_2 != 0) {
 // Call the division function and get remainder
 unsigned int div_result = __aeabi_idiv(param_1, param_2);
 // Calculate remainder: a - (a/b)*b = a % b
 return param_1 - div_result * param_2;
 }
 return 0;
}

// Function: op_and @ 0x1067c
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x10684
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x1068c
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x10694
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x1069c
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: state_idle @ 0x106a4
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x106b4
unsigned int state_processing(int param_1)
{
 unsigned int uVar1;
 if (param_1 != 2) {
 if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
 }
 return 2;
}

// Function: state_done @ 0x106cc
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x106d4
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: non_local_jump.constprop.0 @ 0x106e0
unsigned int non_local_jump_constprop_0(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = _setjmp((jmp_buf *)&jump_buffer);
 if (iVar1 == 0) {
 uVar2 = 10;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: sequential_ops @ 0x10700
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x1070c
int single_if(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}

// Function: if_else @ 0x10718
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x10728
int nested_if_2(int param_1,int param_2)
{
 if (0 < param_1) {
 if (0 < param_2) {
 param_1 = param_1 + param_2;
 }
 return param_1;
 }
 return 0;
}

// Function: nested_if_deep @ 0x10744
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
 if (param_4 < 1) {
 return 3;
 }
 if (param_5 < 1) {
 uVar1 = 4;
 }
 else {
 uVar1 = 5;
 }
 return uVar1;
}

// Function: if_elseif_chain @ 0x10798
unsigned int if_elseif_chain(int param_1)
{
 unsigned int uVar1;
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 == 1) {
 return 0x14;
 }
 if (param_1 == 2) {
 uVar1 = 0x1e;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: if_elseif_long @ 0x107c8
int if_elseif_long(uint param_1)
{
 int iVar1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_small @ 0x107e4
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&CSWTCH_56 + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: switch_large @ 0x107fc
int switch_large(uint param_1)
{
 int iVar1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_default @ 0x10810
int switch_default(int param_1)
{
 if (param_1 - 1U < 3) {
 param_1 = param_1 * 100;
 }
 else {
 param_1 = 0;
 }
 return param_1;
}

// Function: switch_fallthrough @ 0x1082c
int switch_fallthrough(int param_1)
{
 int iVar1;
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 if (param_1 == 1) {
 iVar1 = 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
 }
 iVar1 = 0xc;
 }
 return iVar1 + param_1 * 3;
}

// Function: loop_for_fixed @ 0x10864
int loop_for_fixed(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: loop_while @ 0x10890
int loop_while(int param_1)
{
 int iVar1;
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
 }
 return 1;
}

// Function: loop_dowhile @ 0x108c4
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

// Function: loop_nested @ 0x108ec
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar2 = iVar2 + 1;
 if (0 < param_2) {
 iVar1 = param_2 + iVar1;
 }
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: loop_break @ 0x1091c
unsigned int loop_break(int param_1)
{
 unsigned int uVar1;
 if (param_1 == 10) {
 return 0;
 }
 if (param_1 == 0x14) {
 return 1;
 }
 if (param_1 == 0x1e) {
 return 2;
 }
 if (param_1 == 0x28) {
 return 3;
 }
 if (param_1 == 0x32) {
 uVar1 = 4;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: loop_continue @ 0x1096c
int loop_continue(int param_1)
{
 int iVar1;
 uint uVar2;
 if (0 < param_1) {
 uVar2 = 1;
 iVar1 = 0;
 do {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 uVar2 = uVar2 + 1;
 } while (param_1 + 1U != uVar2);
 return iVar1;
 }
 return 0;
}

// Function: goto_forward @ 0x109a0
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}

// Function: goto_backward @ 0x109b4
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 1;
 if (param_1 < 1) {
 return iVar1;
 }
 iVar2 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (param_1 + 1 != iVar2);
 return iVar1;
}

// Function: ternary_op @ 0x109dc
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x109e8
void test_control_flow_l1(void)
{
 puts(&DAT_00011b58);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n");
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
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",2);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",0xffffffff);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x10c14
int loop_multi_exit(int param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 == 1) {
 iVar2 = 0;
LAB_00010c90:
 iVar1 = 0;
 }
 else {
 if (param_1 == 2) {
 iVar2 = 0;
LAB_00010ca4:
 iVar1 = 1;
 goto LAB_00010c94;
 }
 if (param_1 == 3) {
 iVar2 = 0;
LAB_00010cb0:
 iVar1 = 2;
 goto LAB_00010c94;
 }
 if (param_1 == 4) {
 iVar2 = 0;
 }
 else {
 if (param_1 == 5) {
 iVar2 = 1;
 goto LAB_00010c90;
 }
 if (param_1 == 6) {
 iVar2 = 1;
 goto LAB_00010ca4;
 }
 if (param_1 == 7) {
 iVar2 = 1;
 goto LAB_00010cb0;
 }
 if (param_1 == 8) {
 iVar2 = 1;
 }
 else {
 if (param_1 == 9) {
 iVar2 = 2;
 goto LAB_00010c90;
 }
 if (param_1 == 10) {
 iVar2 = 2;
 goto LAB_00010ca4;
 }
 if (param_1 == 0xb) {
 iVar2 = 2;
 goto LAB_00010cb0;
 }
 if (param_1 != 0xc) {
 return -1;
 }
 iVar2 = 2;
 }
 }
 iVar1 = 3;
 }
LAB_00010c94:
 return iVar1 + iVar2 * 10;
}

// Function: infinite_loop @ 0x10ce4
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

// Function: multi_return @ 0x10d24
int multi_return(uint param_1)
{
 int iVar1;
 if ((int)param_1 < 0) {
 return -1;
 }
 iVar1 = param_1 * 2;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 return iVar1;
 }
 return -2;
}

// Function: conditional_return @ 0x10d54
int conditional_return(int param_1)
{
 if (0 < param_1) {
 return param_1 << 1;
 }
 if (param_1 != 0) {
 param_1 = -param_1;
 }
 return param_1;
}

// Function: duffs_device @ 0x10d6c
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int iVar5;
 if ((int)param_3 < 1) {
 return 0xffffffff;
 }
 iVar5 = (int)(param_3 + 7) >> 3;
 puVar1 = param_2;
 puVar2 = param_2;
 puVar3 = param_1;
 puVar4 = param_1;
 switch(param_3 & 7) {
 case 1:
 break;
 case 2:
 goto switchD_00010d90_caseD_2;
 case 3:
 goto switchD_00010d90_caseD_3;
 case 4:
 goto switchD_00010d90_caseD_4;
 case 5:
 goto switchD_00010d90_caseD_5;
 case 6:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
 goto switchD_00010d90_caseD_5;
 case 7:
 goto switchD_00010d90_caseD_7;
 default:
 goto switchD_00010d90_caseD_7;
 }
switchD_00010d90_caseD_1:
 iVar5 = iVar5 + -1;
 *param_1 = *param_2;
 if (iVar5 == 0) {
 return param_3;
 }
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_00010d90_caseD_7:
 puVar2 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
 *puVar4 = *puVar2;
 puVar1 = puVar2 + 2;
 puVar3 = puVar4 + 2;
 puVar4[1] = puVar2[1];
switchD_00010d90_caseD_5:
 puVar2 = puVar1 + 1;
 puVar4 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010d90_caseD_4:
 param_2 = puVar2 + 1;
 param_1 = puVar4 + 1;
 *puVar4 = *puVar2;
switchD_00010d90_caseD_3:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d90_caseD_2:
 param_2 = puVar1 + 1;
 param_1 = puVar3 + 1;
 *puVar3 = *puVar1;
 goto switchD_00010d90_caseD_1;
}

// Function: loop_complex_cond @ 0x10e24
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 < 1) {
 return param_1;
 }
 iVar3 = param_1 + -1;
 if (iVar3 < 3) {
 iVar2 = 1;
 iVar1 = 2;
 }
 else {
 iVar3 = param_1 + -2;
 if (iVar3 < 5) {
 iVar2 = 2;
 iVar1 = 4;
 }
 else {
 iVar3 = param_1 + -3;
 if (iVar3 < 7) {
 iVar2 = 3;
 iVar1 = 6;
 }
 else {
 iVar3 = param_1 + -4;
 if (iVar3 < 9) {
 iVar2 = 4;
 iVar1 = 8;
 }
 else {
 iVar3 = param_1 + -5;
 if (iVar3 < 0xb) {
 iVar2 = 5;
 iVar1 = 10;
 }
 else {
 iVar3 = param_1 + -6;
 if (iVar3 < 0xd) {
 iVar2 = 6;
 iVar1 = 0xc;
 }
 else {
 iVar3 = param_1 + -7;
 if (iVar3 < 0xf) {
 iVar2 = 7;
 iVar1 = 0xe;
 }
 else {
 iVar3 = param_1 + -8;
 if (iVar3 < 0x11) {
 iVar2 = 8;
 iVar1 = 0x10;
 }
 else {
 iVar3 = param_1 + -9;
 if (iVar3 < 0x13) {
 iVar2 = 9;
 iVar1 = 0x12;
 }
 else {
 iVar2 = 10;
 iVar1 = 0x14;
 iVar3 = param_1 + -10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar3 + iVar1 + iVar2;
}

// Function: loop_modify_var @ 0x10f1c
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 iVar3 = 0;
 if (param_1 < 1) {
 return iVar3;
 }
 if (param_1 == 1) {
 return iVar3;
 }
 iVar5 = 1;
 iVar4 = 0;
 do {
 iVar3 = iVar3 + iVar5;
 iVar2 = iVar5 + 1;
 iVar1 = iVar4;
 iVar4 = iVar5;
 while (iVar5 = iVar2, 5 < iVar4) {
 iVar4 = iVar1 + 4;
 if (param_1 <= iVar4) {
 return iVar3;
 }
 iVar3 = iVar3 + iVar4;
 iVar2 = iVar1 + 5;
 iVar1 = iVar1 + 3;
 }
 } while (iVar5 < param_1);
 return iVar3;
}

// Function: loop_external_state @ 0x10f7c
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

// Function: tail_recursion @ 0x10fa4
int tail_recursion(int param_1,int param_2)
{
 int iVar1;
 if (param_1 < 2) {
 return param_2;
 }
 do {
 iVar1 = param_1 + -1;
 param_2 = param_1 * param_2;
 param_1 = iVar1;
 } while (iVar1 != 1);
 return param_2;
}

// Function: indirect_recursion_a @ 0x10fcc
uint indirect_recursion_a(uint param_1,int param_2)
{
 uint uVar1;
 int iVar2;
 int iVar3;
 bool bVar4;
 if (param_2 < 1) {
 return param_1;
 }
 iVar3 = param_2 + -4;
 if ((param_1 & 1) == 0) goto LAB_00011030;
LAB_00010fe4:
 iVar2 = param_1 * 3;
 if (param_2 != 1) {
 uVar1 = iVar2 + 2;
 if (param_2 < 3) {
 return uVar1;
 }
 if ((uVar1 & 1) == 0) goto LAB_00011054;
 while (iVar2 = uVar1 * 3, param_2 != 3) {
 param_1 = iVar2 + 2;
 while( true ) {
 bVar4 = iVar3 == 0;
 iVar3 = iVar3 + -4;
 param_2 = param_2 + -4;
 if (bVar4) {
 return param_1;
 }
 if ((param_1 & 1) != 0) goto LAB_00010fe4;
LAB_00011030:
 if (param_2 == 1) {
 return (int)param_1 / 2;
 }
 uVar1 = (int)param_1 / 2 + 1;
 if (param_2 < 3) {
 return uVar1;
 }
 if ((uVar1 & 1) != 0) break;
LAB_00011054:
 if (param_2 == 3) {
 return (int)uVar1 / 2;
 }
 param_1 = (int)uVar1 / 2 + 1;
 }
 }
 }
 return iVar2 + 1;
}

// Function: call_func_ptr @ 0x11078
void call_func_ptr(int (*func_ptr)(int), unsigned int param_2)
{
 if (func_ptr != NULL) {
 (*func_ptr)(param_2);
 }
 return;
}

// Function: call_func_ptr_array @ 0x11084
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 int (*apcStack_18[4])(int);
 apcStack_18[0] = double_value;
 apcStack_18[1] = triple_value;
 apcStack_18[2] = recursion_factorial;
 apcStack_18[3] = NULL;
 if (param_1 < 3 && apcStack_18[param_1] != NULL) {
 uVar1 = (*apcStack_18[param_1])(param_2);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: call_virtual_func @ 0x11120
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x11128
int process_with_callback(int param_1,int param_2,int (*param_3)(int))
{
 int iVar1;
 int iVar2;
 unsigned int *puVar3;
 int iVar4;
 if (0 < param_2) {
 iVar2 = 0;
 iVar4 = 0;
 puVar3 = (unsigned int *)(param_1 + -4);
 do {
 puVar3 = puVar3 + 1;
 iVar1 = (*param_3)(*puVar3);
 iVar2 = iVar2 + 1;
 iVar4 = iVar4 + iVar1;
 } while (param_2 != iVar2);
 return iVar4;
 }
 return 0;
}

// Function: test_control_flow_l2 @ 0x11170
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 bool bVar6;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 unsigned int local_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 char auStack_2c [32];
 int local_c;
 local_c = 0;
 puts(&DAT_00011de0);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",0);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_4c = 1;
 uStack_48 = 2;
 uStack_44 = 3;
 uStack_40 = 4;
 local_3c = 5;
 uStack_38 = 6;
 uStack_34 = 7;
 uStack_30 = 8;
 memset(auStack_2c,0,0x20);
 uVar1 = duffs_device(auStack_2c,&local_4c,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar4 = 0;
 iVar3 = 1;
 iVar5 = 0;
 while (iVar2 = iVar3, iVar4 = iVar4 + iVar2, iVar2 < 6) {
 iVar5 = iVar2;
 iVar3 = iVar2 + 1;
 }
 while (bVar6 = iVar5 == 5, iVar5 = iVar5 + 3, bVar6) {
 iVar4 = iVar4 + 9;
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar4);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: non_local_jump @ 0x113e8
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp((jmp_buf *)&jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 __longjmp_chk(&jump_buffer,1);
 }
 if (100 < param_1) {
 __longjmp_chk(&jump_buffer,2);
 }
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}

// Function: cpp_exception @ 0x1144c
int cpp_exception(int param_1)
{
 if (param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 return -2;
}

// Function: large_jump_table @ 0x11474
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 void *apcStack_3c [10];
 unsigned int local_14;
 local_14 = 0;
 apcStack_3c[0] = op_add;
 apcStack_3c[1] = op_sub;
 apcStack_3c[2] = op_mul;
 apcStack_3c[3] = op_div;
 apcStack_3c[4] = op_mod;
 apcStack_3c[5] = op_and;
 apcStack_3c[6] = op_or;
 apcStack_3c[7] = op_xor;
 apcStack_3c[8] = op_shl;
 apcStack_3c[9] = op_shr;
 if (param_1 < 10) {
 uVar1 = (*apcStack_3c[param_1])(param_2,param_3);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: conditional_func_ptr @ 0x11524
int conditional_func_ptr(int param_1,int param_2)
{
 int iVar1;
 int (*func_ptr)(int);
 if (param_1 == 0) {
 return param_2 << 1;
 }
 func_ptr = triple_value;
 if (param_1 != 1) {
 func_ptr = recursion_factorial;
 }
 iVar1 = (*func_ptr)(param_2);
 return iVar1;
}

// Function: state_machine @ 0x11558
uint state_machine(int param_1,uint param_2)
{
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 break;
 case 2:
 return param_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 return 3;
 }
 if (param_1 != 2) {
 if (param_1 == 99) {
 param_2 = 3;
 }
 return param_2;
 }
 return 2;
}

// Function: fsm_func_table @ 0x115bc
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 void *apcStack_1c [4];
 unsigned int local_c;
 local_c = 0;
 apcStack_1c[0] = state_idle;
 apcStack_1c[1] = state_processing;
 apcStack_1c[2] = state_done;
 apcStack_1c[3] = state_error;
 if (param_2 < 4) {
 uVar1 = (*apcStack_1c[param_2])(param_1);
 return uVar1;
 }
 return 3;
}

// Function: computed_goto @ 0x11654
void computed_goto(unsigned int param_1,uint param_2)
{
 void (*apcStack_1c [4])(void);
 unsigned int local_c;
 local_c = 0;
 apcStack_1c[0] = (void (*)(void))&DAT_000116c8;
 apcStack_1c[1] = (void (*)(void))&DAT_000116c0;
 apcStack_1c[2] = (void (*)(void))&DAT_000116b8;
 apcStack_1c[3] = (void (*)(void))&DAT_00011694;
 if (3 < param_2) {
 return;
 }
 apcStack_1c[param_2]();
 return;
}

// Function: obfuscated_cf @ 0x116e4
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x116ec
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x116f4
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

// Function: test_control_flow_l3 @ 0x1170c
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 int local_c;
 local_c = 0;
 puts(&DAT_00011fe4);
 uVar1 = non_local_jump_constprop_0();
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",0xf);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
 local_1c = 0;
 uStack_18 = 1;
 uStack_14 = 2;
 uStack_10 = 3;
 uVar1 = computed_goto(&local_1c,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: __aeabi_idiv @ 0x1186c
// ARM EABI signed division
extern void __aeabi_idiv0(int param_1);

// Forward declaration for the division implementation
static inline uint _divsi3_skip_div0_test(uint param_1, uint param_2);

// Define LZCOUNT as a builtin
static inline int LZCOUNT(unsigned int x) {
    if (x == 0) return 32;
    int count = 0;
    if ((x & 0xFFFF0000) == 0) { count += 16; x <<= 16; }
    if ((x & 0xFF000000) == 0) { count += 8; x <<= 8; }
    if ((x & 0xF0000000) == 0) { count += 4; x <<= 4; }
    if ((x & 0xC0000000) == 0) { count += 2; x <<= 2; }
    if ((x & 0x80000000) == 0) { count += 1; }
    return count;
}

int __aeabi_idiv(int param_1, int param_2)
{
 if (param_2 == 0) {
 // Handle division by zero
 bool bVar5;
 bVar5 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = 0x80000000;
 }
 __aeabi_idiv0(param_1);
 return 0;
 }
 return _divsi3_skip_div0_test(param_1, param_2);
}

// Function: .divsi3_skip_div0_test @ 0x11874
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
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
 // For non-zero case, use simple division as fallback
 return param_1 / param_2;
}

// Function: __aeabi_idivmod @ 0x11a8c
// This function returns both quotient and remainder via r0/r1
void __aeabi_idivmod(int param_1, int param_2)
{
 bool bVar1;
 if (param_2 != 0) {
 // Just call the division function - quotient in r0, remainder would be in r1
 _divsi3_skip_div0_test(param_1, param_2);
 return;
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_idiv0(param_1);
 return;
}

// Function: __aeabi_idiv0 @ 0x11aac
void __aeabi_idiv0(int param_1)
{
 raise(8);
 return;
}

// Function: _fini @ 0x11abc
void _fini(void)
{
 return;
}

