/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Ghidra-specific type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <setjmp.h>

/* Function declarations */
void __stack_chk_fail(void *, int, long);
void __longjmp_chk(jmp_buf env, int val);

/* Global symbols */
extern undefined8 __stack_chk_guard;
undefined8 ___stack_chk_guard = 0;
jmp_buf jump_buffer;
extern undefined8 __dso_handle;
extern char completed_0;
extern int CSWTCH_55[4];

/* Forward declarations */
void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
int non_local_jump(int);
int double_value(int);
int triple_value(int);
int recursion_factorial(int);
int op_add(int,int);
int op_sub(int,int);
int op_mul(int,int);
int op_div(int,int);
int op_mod(int,int);
uint op_and(uint,uint);
uint op_or(uint,uint);
uint op_xor(uint,uint);
int op_shl(int,uint);
int op_shr(int,uint);
bool state_idle(int);
ulong state_processing(ulong);
undefined8 state_done(void);
undefined4 state_error(int);

/* Function: non_local_jump @ 00100afc */
int non_local_jump(int param_1)
{
 if (setjmp(jump_buffer) == 0) {
 if (param_1 < 0) {
 longjmp(jump_buffer, 1);
 }
 return param_1 * 2;
 }
 return param_1 + 10;
}

/* Function pointers */
int (*PTR_double_value_00114010)(int) = double_value;
int (*PTR_triple_value_00114018)(int) = triple_value;
int (*PTR_recursion_factorial_00114020)(int) = recursion_factorial;
int (*PTR_op_add_00114028)(int,int) = op_add;
int (*PTR_op_sub_00114030)(int,int) = op_sub;
int (*PTR_op_mul_00114038)(int,int) = op_mul;
int (*PTR_op_div_00114040)(int,int) = op_div;
int (*PTR_op_mod_00114048)(int,int) = op_mod;
uint (*PTR_op_and_00114050)(uint,uint) = op_and;
uint (*PTR_op_or_00114058)(uint,uint) = op_or;
uint (*PTR_op_xor_00114060)(uint,uint) = op_xor;
int (*PTR_op_shl_00114068)(int,uint) = op_shl;
int (*PTR_op_shr_00114070)(int,uint) = op_shr;

/* Data references */
char DAT_00101f20[] = "Testing Control Flow L1";
char DAT_001021c8[] = "Testing Control Flow L2";
char DAT_001023e8[] = "Testing Control Flow L3";

/* Switch table for switch_small function */
int CSWTCH_55[4] = {0x14, 0x28, 0x3c, 0x50};

/* Function pointer table for fsm_func_table */
void (*DAT_00114078[4])(void) = {NULL, NULL, NULL, NULL};

extern char DAT_00114079[];
extern char DAT_0011407a[];
extern char DAT_0011407b[];
extern char DAT_0011407c[];
extern char DAT_0011407d[];
extern char DAT_0011407e[];
extern char DAT_0011407f[];
extern char DAT_00114080[];
extern char DAT_00114081[];
extern char DAT_00114082[];
extern char DAT_00114083[];
extern char DAT_00114084[];
extern char DAT_00114085[];
extern char DAT_00114086[];
extern char DAT_00114087[];
extern char DAT_00114088[];
extern char DAT_00114089[];
extern char DAT_0011408a[];
extern char DAT_0011408b[];
extern char DAT_0011408c[];
extern char DAT_0011408d[];
extern char DAT_0011408e[];
extern char DAT_0011408f[];
extern char DAT_00114090[];
extern char DAT_00114091[];
extern char DAT_00114092[];
extern char DAT_00114093[];
extern char DAT_00114094[];
extern char DAT_00114095[];
extern char DAT_00114096[];
extern char DAT_00114097[];
extern char DAT_00114098[];
extern char DAT_00114099[];
extern char DAT_0011409a[];
extern char DAT_0011409b[];
extern char DAT_0011409c[];
extern char DAT_0011409d[];
extern char DAT_0011409e[];
extern char DAT_0011409f[];
extern char DAT_001140a0[];
extern char DAT_001140a1[];
extern char DAT_001140a2[];
extern char DAT_001140a3[];
extern char DAT_001140a4[];
extern char DAT_001140a5[];
extern char DAT_001140a6[];
extern char DAT_001140a7[];
extern char DAT_001140a8[];
extern char DAT_001140a9[];
extern char DAT_001140aa[];
extern char DAT_001140ab[];
extern char DAT_001140ac[];
extern char DAT_001140ad[];
extern char DAT_001140ae[];
extern char DAT_001140af[];
extern char DAT_001140b0[];
extern char DAT_001140b1[];
extern char DAT_001140b2[];
extern char DAT_001140b3[];
extern char DAT_001140b4[];
extern char DAT_001140b5[];
extern char DAT_001140b6[];
extern char DAT_001140b7[];


/* Function: FUN_00100940 @ 00100940 */

void FUN_00100940(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00100a00 */

undefined8 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */









/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 00100b60 */

int recursion_factorial(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < param_1) {
 do {
 iVar1 = param_1 + -1;
 iVar2 = iVar2 * param_1;
 param_1 = iVar1;
 } while (iVar1 != 1);
 }
 return iVar2;
}



/* Function: double_value @ 00100b90 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00100ba0 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 00100bb0 */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00100bc0 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00100bd0 */

int op_mul(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: op_div @ 00100be0 */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if ((param_2 != 0) && (iVar1 = 0, param_2 != 0)) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
}



/* Function: op_mod @ 00100bf4 */

int op_mod(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 iVar1 = param_1 - iVar1 * param_2;
 }
 return iVar1;
}



/* Function: op_and @ 00100c10 */

uint op_and(uint param_1,uint param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 00100c20 */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 00100c30 */

uint op_xor(uint param_1,uint param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 00100c40 */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (ulong)(param_2 & 0x1f);
}



/* Function: op_shr @ 00100c50 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00100c60 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00100c70 */

ulong state_processing(ulong param_1)

{
 uint uVar1;
 
 if ((int)param_1 != 2) {
 uVar1 = 3;
 if ((int)param_1 != 99) {
 uVar1 = 1;
 }
 param_1 = (ulong)uVar1;
 }
 return param_1;
}



/* Function: state_done @ 00100c90 */

undefined8 state_done(void)

{
 return 2;
}



/* Function: state_error @ 00100ca0 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 00100cb0 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00100cc0 */

int single_if(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 << 1;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: if_else @ 00100cd0 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00100ce0 */

int nested_if_2(int param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_1 + param_2;
 if (param_2 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
 }
 return 0;
}



/* Function: nested_if_deep @ 00100d00 */

char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 char cVar1;
 
 if (param_1 < 1) {
 return '\0';
 }
 cVar1 = '\x01';
 if (0 < param_2) {
 if (param_3 < 1) {
 return '\x02';
 }
 if (param_4 < 1) {
 return '\x03';
 }
 cVar1 = (0 < param_5) + '\x04';
 }
 return cVar1;
}



/* Function: if_elseif_chain @ 00100d50 */

undefined4 if_elseif_chain(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 != 1) {
 uVar1 = 0x1e;
 if (param_1 != 2) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
 }
 return 0x14;
}



/* Function: if_elseif_long @ 00100d80 */

undefined4 if_elseif_long(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 return 100;
 }
 if (param_1 == 1) {
 return 200;
 }
 if (param_1 == 2) {
 return 300;
 }
 if (param_1 != 3) {
 uVar1 = 500;
 if (param_1 != 4) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
 }
 return 400;
}



/* Function: switch_small @ 00100dd0 */

undefined4 switch_small(uint param_1)

{
 if (param_1 < 4) {
 return *(undefined4 *)(&CSWTCH_55 + (ulong)param_1 * 4);
 }
 return 0xffffffff;
}



/* Function: switch_large @ 00100df0 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00100e04 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 100;
 if (2 < param_1 - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00100e20 */

int switch_fallthrough(int param_1)

{
 int iVar1;
 
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 iVar1 = 1;
 if (param_1 != 1) {
 iVar1 = -1;
 }
 return iVar1;
 }
 iVar1 = 0xc;
 }
 return iVar1 + param_1 * 3;
}



/* Function: loop_for_fixed @ 00100e60 */

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



/* Function: loop_while @ 00100e94 */

int loop_while(int param_1)

{
 int iVar1;
 
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00100ed0 */

int loop_dowhile(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 return iVar1;
}



/* Function: loop_nested @ 00100f00 */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 iVar2 = 0;
 iVar1 = iVar2;
 if (0 < param_1) {
 do {
 iVar3 = iVar3 + 1;
 iVar2 = param_2 + iVar1;
 if (param_2 < 1) {
 iVar2 = iVar1;
 }
 iVar1 = iVar2;
 } while (param_1 != iVar3);
 }
 return iVar2;
}



/* Function: loop_break @ 00100f34 */

/* WARNING: Removing unreachable block (ram,0x00100fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_break(int param_1)

{
 int iVar1;
 int *piVar2;
 int local_20 [6];
 undefined8 local_8;
 
 piVar2 = local_20;
 local_8 = ___stack_chk_guard;
 iVar1 = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 do {
 if (*piVar2 == param_1) {
 return;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return;
}



/* Function: loop_continue @ 00100fc0 */

int loop_continue(int param_1)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 
 if (0 < param_1) {
 uVar4 = 1;
 iVar3 = 0;
 do {
 uVar2 = uVar4 & 1;
 iVar1 = iVar3 + uVar4;
 uVar4 = uVar4 + 1;
 if (uVar2 == 0) {
 iVar1 = iVar3;
 }
 iVar3 = iVar1;
 } while (uVar4 != param_1 + 1U);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 00101000 */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * param_1;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1 << 1;
}



/* Function: goto_backward @ 00101014 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar1 = 1;
 iVar2 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 iVar2 = iVar2 + 1;
 } while (param_1 + 1 != iVar2);
 return iVar1;
 }
 return 1;
}



/* Function: ternary_op @ 00101044 */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 00101050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l1(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int local_20 [6];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 piVar2 = local_20;
 puts(DAT_00101f20);
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
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
 iVar3 = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 piVar1 = piVar2;
 do {
 if (*piVar1 == 0x1e) goto LAB_0010123c;
 iVar3 = iVar3 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar3 != 5);
 iVar3 = -1;
LAB_0010123c:
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar3);
 iVar3 = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 do {
 if (*piVar2 == 99) goto LAB_00101288;
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 5);
 iVar3 = -1;
LAB_00101288:
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar3);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: loop_multi_exit @ 00101340 */

/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_multi_exit(int param_1)

{
 long lVar1;
 undefined8 *puVar2;
 int iVar3;
 undefined8 local_38;
 undefined8 uStack_30;
 undefined8 uStack_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 undefined8 local_8;
 
 puVar2 = &local_38;
 local_8 = ___stack_chk_guard;
 iVar3 = 0;
 uStack_30 = 0x400000003;
 local_38 = 0x200000001;
 uStack_20 = 0x800000007;
 uStack_28 = 0x600000005;
 uStack_10 = 0xc0000000b;
 local_18 = 0xa00000009;
 do {
 lVar1 = 0;
 do {
 if (*(int *)((long)puVar2 + lVar1 * 4) == param_1) {
 return -1;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 4);
 iVar3 = iVar3 + 1;
 puVar2 = puVar2 + 2;
 } while (iVar3 != 3);
 return -1;
}



/* Function: infinite_loop @ 001013e4 */

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



/* Function: multi_return @ 00101420 */

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



/* Function: conditional_return @ 00101450 */

int conditional_return(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = -param_1;
 }
 if (0 < param_1) {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101464 */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
 uint uVar1;
 undefined4 *puVar2;
 undefined4 *puVar3;
 undefined4 *puVar4;
 undefined4 *puVar5;
 int iVar6;
 
 if ((int)param_3 < 1) {
 param_3 = 0xffffffff;
 }
 else {
 uVar1 = param_3 & 7;
 iVar6 = (int)(param_3 + 7) >> 3;
 puVar3 = param_2;
 puVar5 = param_1;
 if (uVar1 == 4) goto LAB_001014e0;
 if (uVar1 < 5) {
 if (uVar1 == 2) goto LAB_001014a0;
 if (uVar1 != 3) {
 if (uVar1 != 1) goto LAB_001014c0;
 iVar6 = iVar6 + -1;
 *param_1 = *param_2;
 if (iVar6 != 0) goto LAB_001014b8;
 return param_3;
 }
 }
 else {
 puVar2 = param_2;
 puVar4 = param_1;
 if (uVar1 == 6) goto LAB_001014d0;
 if (uVar1 == 7) {
 puVar2 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
 goto LAB_001014d0;
 }
 if (uVar1 != 5) goto LAB_001014c0;
 puVar3 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
 param_2 = param_2 + 2;
 param_1 = param_1 + 2;
 *puVar5 = *puVar3;
 }
 while( true ) {
 puVar3 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
LAB_001014a0:
 param_2 = puVar3 + 1;
 iVar6 = iVar6 + -1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar3;
 *param_1 = *param_2;
 if (iVar6 == 0) break;
LAB_001014b8:
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
LAB_001014c0:
 *param_1 = *param_2;
 param_1[1] = param_2[1];
 puVar2 = param_2 + 2;
 puVar4 = param_1 + 2;
LAB_001014d0:
 *puVar4 = *puVar2;
 puVar3 = puVar2 + 2;
 puVar5 = puVar4 + 2;
 puVar4[1] = puVar2[1];
LAB_001014e0:
 param_2 = puVar3 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar3;
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 00101550 */

ulong loop_complex_cond(ulong param_1)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 
 if (0 < (int)param_1) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 2;
 uVar1 = (int)param_1 - 1;
 param_1 = (ulong)uVar1;
 iVar3 = iVar3 + 1;
 } while (iVar2 < (int)uVar1 && iVar3 < 10);
 param_1 = (ulong)(iVar2 + uVar1 + iVar3);
 }
 return param_1;
}



/* Function: loop_modify_var @ 00101584 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 iVar2 = 0;
 if (0 < param_1) {
 while( true ) {
 iVar1 = iVar2 + 1;
 if (param_1 <= iVar1) break;
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 3;
 if (iVar1 < 6) {
 iVar2 = iVar1;
 }
 }
 }
 return iVar3;
}



/* Function: loop_external_state @ 001015c0 */

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



/* Function: tail_recursion @ 001015e4 */

int tail_recursion(int param_1,int param_2)

{
 int iVar1;
 
 if (1 < param_1) {
 do {
 iVar1 = param_1 + -1;
 param_2 = param_2 * param_1;
 param_1 = iVar1;
 } while (iVar1 != 1);
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00101610 */

ulong indirect_recursion_a(ulong param_1,int param_2)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = param_2;
 if (0 < param_2) {
 do {
 iVar3 = iVar3 + -2;
 if ((param_1 & 1) == 0) {
 uVar1 = (int)param_1 / 2;
 if (param_2 == 1) {
 return (ulong)uVar1;
 }
 uVar1 = uVar1 + 1;
 }
 else {
 iVar2 = (int)param_1 * 3;
 if (param_2 == 1) {
 return (ulong)(iVar2 + 1);
 }
 uVar1 = iVar2 + 2;
 }
 param_1 = (ulong)uVar1;
 param_2 = param_2 + -2;
 } while (iVar3 != 0);
 }
 return param_1;
}



/* Function: call_func_ptr @ 00101670 */

void call_func_ptr(long (*UNRECOVERED_JUMPTABLE)(),int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101678. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)();
 return;
}



/* Function: FUN_0010167c @ 0010167c */

/* WARNING: Removing unreachable block (ram,0x0010171c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0010167c(uint param_1)

{
 undefined8 uVar1;
 int (*apuStack_20)(int);
 
 apuStack_20 = (int (*)(int))___stack_chk_guard;
 apuStack_20 = (int (*)(int))PTR_double_value_00114010;
 apuStack_20 = (int (*)(int))PTR_triple_value_00114018;
 apuStack_20 = (int (*)(int))PTR_recursion_factorial_00114020;
 if (param_1 < 3) {
 /* WARNING: Could not recover jumptable at 0x001016f0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(int (*)(int))apuStack_20)(0);
 uVar1 = 0;
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: call_func_ptr_array @ 00101680 */

/* WARNING: Removing unreachable block (ram,0x0010171c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_func_ptr_array(uint param_1)

{
 undefined8 uVar1;
 int (*local_20[3])(int);
 
 local_20[0] = (int (*)(int))PTR_double_value_00114010;
 local_20[1] = (int (*)(int))PTR_triple_value_00114018;
 local_20[2] = (int (*)(int))PTR_recursion_factorial_00114020;
 if (param_1 < 3) {
 /* WARNING: Could not recover jumptable at 0x001016f0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = local_20[(int)param_1](0);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: call_virtual_func @ 00101720 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00101730 */

int process_with_callback(undefined4 *param_1,int param_2,int (*param_3)(int))

{
 int iVar1;
 undefined4 *puVar2;
 int iVar4;
 undefined4 *puVar3;
 
 if (0 < param_2) {
 iVar4 = 0;
 puVar2 = param_1;
 do {
 puVar3 = puVar2 + 1;
 iVar1 = (*param_3)(*puVar2);
 iVar4 = iVar4 + iVar1;
 puVar2 = puVar3;
 } while (puVar3 != param_1 + (ulong)(param_2 - 1) + 1);
 return iVar4;
 }
 return 0;
}



/* Function: FUN_0010179c @ 0010179c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010179c(void)

{
 int iVar1;
 long lVar2;
 undefined4 uVar3;
 int iVar4;
 long lVar5;
 int iVar6;
 int aiStack_64 [7];
 undefined8 uStack_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 uStack_28;
 undefined8 uStack_20;
 undefined8 uStack_18;
 undefined8 uStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 puts(DAT_001021c8);
 uVar3 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar3);
 iVar6 = 0;
 do {
 iVar6 = iVar6 + 1;
 } while (iVar6 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",1000);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 uStack_28 = 0;
 uStack_20 = 0;
 uStack_18 = 0;
 uStack_10 = 0;
 uStack_40 = 0x400000003;
 uStack_48 = 0x200000001;
 uStack_30 = 0x800000007;
 uStack_38 = 0x600000005;
 uVar3 = duffs_device((undefined4 *)&uStack_28,(undefined4 *)&uStack_48,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar3);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar6 = 0;
 iVar4 = 0;
 while (iVar1 = iVar4 + 1, iVar1 < 10) {
 iVar4 = iVar4 + 3;
 if (iVar1 < 6) {
 iVar4 = iVar1;
 }
 iVar6 = iVar6 + iVar1;
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
 iVar6 = 0;
 aiStack_64[0] = 0;
 do {
 iVar6 = iVar6 + 1;
 } while (iVar6 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",101);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 iVar6 = 0;
 aiStack_64[5] = 5;
 aiStack_64[1] = 1;
 aiStack_64[2] = 2;
 aiStack_64[3] = 3;
 aiStack_64[4] = 4;
 lVar5 = 1;
 do {
 lVar2 = lVar5 + 1;
 iVar6 = iVar6 + aiStack_64[lVar5] * 2;
 lVar5 = lVar2;
 } while (lVar2 != 6);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar6);
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: test_control_flow_l2 @ 001017a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l2(void)

{
 int iVar1;
 long lVar2;
 undefined4 uVar3;
 int iVar4;
 long lVar5;
 int iVar6;
 int local_64 [7];
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_001021c8);
 uVar3 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar3);
 iVar6 = 0;
 do {
 iVar6 = iVar6 + 1;
 } while (iVar6 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",1000);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 uStack_40 = 0x400000003;
 local_48 = 0x200000001;
 uStack_30 = 0x800000007;
 uStack_38 = 0x600000005;
 uVar3 = duffs_device((undefined4 *)&local_28,(undefined4 *)&local_48,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar3);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar6 = 0;
 iVar4 = 0;
 while (iVar1 = iVar4 + 1, iVar1 < 10) {
 iVar4 = iVar4 + 3;
 if (iVar1 < 6) {
 iVar4 = iVar1;
 }
 iVar6 = iVar6 + iVar1;
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
 iVar6 = 0;
 local_64[0] = 0;
 do {
 iVar6 = iVar6 + 1;
 } while (iVar6 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",101);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 iVar6 = 0;
 local_64[5] = 5;
 local_64[1] = 1;
 local_64[2] = 2;
 local_64[3] = 3;
 local_64[4] = 4;
 lVar5 = 1;
 do {
 lVar2 = lVar5 + 1;
 iVar6 = iVar6 + local_64[lVar5] * 2;
 lVar5 = lVar2;
 } while (lVar2 != 6);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar6);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}







/* Function: cpp_exception @ 00101a94 */

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



/* Function: large_jump_table @ 00101ac0 */

/* WARNING: Removing unreachable block (ram,0x00101b6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 large_jump_table(uint param_1)

{
 undefined8 uVar1;
 code local_58 [10];
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 if (param_1 < 10) {
 /* WARNING: Could not recover jumptable at 0x00101b40. Too many branches */
 /* WARNING: Treating indirect jump as call */
 if (param_1 < 2) {
 if (param_1 == 0) {
 uVar1 = op_add(0,0);
 } else {
 uVar1 = op_sub(0,0);
 }
 } else if (param_1 < 4) {
 if (param_1 == 2) {
 uVar1 = op_mul(0,0);
 } else {
 uVar1 = op_div(0,0);
 }
 } else if (param_1 < 6) {
 if (param_1 == 4) {
 uVar1 = op_mod(0,0);
 } else {
 uVar1 = op_and(0,0);
 }
 } else if (param_1 < 8) {
 if (param_1 == 6) {
 uVar1 = op_or(0,0);
 } else {
 uVar1 = op_xor(0,0);
 }
 } else {
 if (param_1 == 8) {
 uVar1 = op_shl(0,0);
 } else {
 uVar1 = op_shr(0,0);
 }
 }
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: conditional_func_ptr @ 00101b70 */

ulong conditional_func_ptr(int param_1,int param_2)

{
 int (*UNRECOVERED_JUMPTABLE)(int);
 ulong uVar1;
 
 if (param_1 == 0) {
 return (ulong)(uint)(param_2 << 1);
 }
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 /* WARNING: Could not recover jumptable at 0x00101b98. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(int (*)(int))UNRECOVERED_JUMPTABLE)(0);
 uVar1 = 0;
 return uVar1;
}



/* Function: state_machine @ 00101bb0 */

ulong state_machine(ulong param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 if (param_2 == 2) {
 return 2;
 }
 iVar1 = (int)param_1;
 if (2 < (int)param_2) {
 uVar2 = param_2;
 if (iVar1 == 0) {
 uVar2 = 0;
 }
 if (param_2 != 3) {
 uVar2 = 3;
 }
 return (ulong)uVar2;
 }
 if (param_2 == 0) {
 return (ulong)(iVar1 == 1);
 }
 if (param_2 == 1) {
 if (iVar1 != 2) {
 uVar2 = 3;
 if (iVar1 != 99) {
 uVar2 = 1;
 }
 param_1 = (ulong)uVar2;
 }
 return param_1;
 }
 return 3;
}



/* Function: fsm_func_table @ 00101c14 */

/* WARNING: Removing unreachable block (ram,0x00101ca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fsm_func_table(undefined8 param_1,uint param_2)

{
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 if (param_2 < 4) {
 /* WARNING: Could not recover jumptable at 0x00101c78. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(void))(&DAT_00114078[(long)(int)param_2]))();
 }
 return 3;
}



/* Function: computed_goto @ 00101cb0 */

/* WARNING: Removing unreachable block (ram,0x00101d3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void computed_goto(undefined8 param_1,uint param_2)

{
 code local_28;
 code uStack_27;
 void *uStack_26;
 void *uStack_25;
 void *uStack_24;
 void *uStack_23;
 void *uStack_22;
 void *uStack_21;
 void *uStack_20;
 void *uStack_1f;
 void *uStack_1e;
 void *uStack_1d;
 void *uStack_1c;
 void *uStack_1b;
 void *uStack_1a;
 void *uStack_19;
 void *uStack_18;
 void *uStack_17;
 void *uStack_16;
 void *uStack_15;
 void *uStack_14;
 void *uStack_13;
 void *uStack_12;
 void *uStack_11;
 void *uStack_10;
 void *uStack_f;
 void *uStack_e;
 void *uStack_d;
 void *uStack_c;
 void *uStack_b;
 void *uStack_a;
 void *uStack_9;
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 local_28 = (code)&DAT_00114098;
 uStack_27 = (code)&DAT_00114099;
 uStack_26 = (code)&DAT_0011409a;
 uStack_25 = (code)&DAT_0011409b;
 uStack_24 = (code)&DAT_0011409c;
 uStack_23 = (code)&DAT_0011409d;
 uStack_22 = (code)&DAT_0011409e;
 uStack_21 = (code)&DAT_0011409f;
 uStack_20 = (code)&DAT_001140a0;
 uStack_1f = (code)&DAT_001140a1;
 uStack_1e = (code)&DAT_001140a2;
 uStack_1d = (code)&DAT_001140a3;
 uStack_1c = (code)&DAT_001140a4;
 uStack_1b = (code)&DAT_001140a5;
 uStack_1a = (code)&DAT_001140a6;
 uStack_19 = (code)&DAT_001140a7;
 uStack_18 = (code)&DAT_001140a8;
 uStack_17 = (code)&DAT_001140a9;
 uStack_16 = (code)&DAT_001140aa;
 uStack_15 = (code)&DAT_001140ab;
 uStack_14 = (code)&DAT_001140ac;
 uStack_13 = (code)&DAT_001140ad;
 uStack_12 = (code)&DAT_001140ae;
 uStack_11 = (code)&DAT_001140af;
 uStack_10 = (code)&DAT_001140b0;
 uStack_f = (code)&DAT_001140b1;
 uStack_e = (code)&DAT_001140b2;
 uStack_d = (code)&DAT_001140b3;
 uStack_c = (code)&DAT_001140b4;
 uStack_b = (code)&DAT_001140b5;
 uStack_a = (code)&DAT_001140b6;
 uStack_9 = (code)&DAT_001140b7;
 if (3 < param_2) {
 return;
 }
 /* WARNING: Could not recover jumptable at 0x00101cf0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(void))(&local_28 + (long)(int)param_2 * 8))();
 return;
}



/* Function: obfuscated_cf @ 00101d40 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 00101d50 */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00101d60 */

int overlapped_code(uint param_1)

{
 int iVar1;
 
 iVar1 = (int)param_1 / 2;
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00101d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_001023e8);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = op_add(10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
 local_18 = 0x100000000;
 uStack_10 = 0x300000002;
 computed_goto((undefined8)&local_18,2);
 uVar1 = 0;
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
