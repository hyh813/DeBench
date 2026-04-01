/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <setjmp.h>

/* Stack canary declarations */
extern unsigned long __stack_chk_guard;


/* Runtime symbols */
extern void *__dso_handle;
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
void __stack_chk_fail(void);

/* Stub implementation for deregister_tm_clones */
void deregister_tm_clones(void) {
    return;
}
void __longjmp_chk(jmp_buf env, int val);

/* Global variables */
char completed_0 = 0;
jmp_buf jump_buffer;

/* Ghidra type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Forward declarations for functions used in function pointers */
int double_value(int param_1);
int triple_value(int param_1);
int recursion_factorial(int param_1);
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

/* Forward declarations */
void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);

/* String literal definitions */
const char DAT_00101c70[] = "=== Testing Level 1 Control Flow ===";
const char DAT_00101edd[] = "=== Testing Level 2 Control Flow ===";
const char DAT_001020d0[] = "=== Testing Level 3 Control Flow ===";

/* External function pointers from decompiled binary */
int (*PTR_double_value_00113010)(int) = double_value;
int (*PTR_triple_value_00113018)(int) = triple_value;
int (*PTR_recursion_factorial_00113020)(int) = recursion_factorial;
int (*PTR_op_add_00113028)(int, int) = op_add;
int (*PTR_op_sub_00113030)(int, int) = op_sub;
int (*PTR_op_mul_00113038)(int, int) = op_mul;
int (*PTR_op_div_00113040)(int, int) = op_div;
int (*PTR_op_mod_00113048)(int, int) = op_mod;
int (*PTR_op_and_00113050)(unsigned int, unsigned int) = (int (*)(unsigned int, unsigned int))op_and;
int (*PTR_op_or_00113058)(unsigned int, unsigned int) = (int (*)(unsigned int, unsigned int))op_or;
int (*PTR_op_xor_00113060)(unsigned int, unsigned int) = (int (*)(unsigned int, unsigned int))op_xor;
int (*PTR_op_shl_00113068)(int, unsigned int) = op_shl;
int (*PTR_op_shr_00113070)(int, unsigned int) = op_shr;

/* External data symbols from decompiled binary */
extern char DAT_00113078;
extern char DAT_00113079;
extern char DAT_0011307a;
extern char DAT_0011307b;
extern char DAT_0011307c;
extern char DAT_0011307d;
extern char DAT_0011307e;
extern char DAT_0011307f;
extern char DAT_00113080;
extern char DAT_00113081;
extern char DAT_00113082;
extern char DAT_00113083;
extern char DAT_00113084;
extern char DAT_00113085;
extern char DAT_00113086;
extern char DAT_00113087;
extern char DAT_00113088;
extern char DAT_00113089;
extern char DAT_0011308a;
extern char DAT_0011308b;
extern char DAT_0011308c;
extern char DAT_0011308d;
extern char DAT_0011308e;
extern char DAT_0011308f;
extern char DAT_00113090;
extern char DAT_00113091;
extern char DAT_00113092;
extern char DAT_00113093;
extern char DAT_00113094;
extern char DAT_00113095;
extern char DAT_00113096;
extern char DAT_00113097;
extern char DAT_00113098;
extern char DAT_00113099;
extern char DAT_0011309a;
extern char DAT_0011309b;
extern char DAT_0011309c;
extern char DAT_0011309d;
extern char DAT_0011309e;
extern char DAT_0011309f;
extern char DAT_001130a0;
extern char DAT_001130a1;
extern char DAT_001130a2;
extern char DAT_001130a3;
extern char DAT_001130a4;
extern char DAT_001130a5;
extern char DAT_001130a6;
extern char DAT_001130a7;
extern char DAT_001130a8;
extern char DAT_001130a9;
extern char DAT_001130aa;
extern char DAT_001130ab;
extern char DAT_001130ac;
extern char DAT_001130ad;
extern char DAT_001130ae;
extern char DAT_001130af;
extern char DAT_001130b0;
extern char DAT_001130b1;
extern char DAT_001130b2;
extern char DAT_001130b3;
extern char DAT_001130b4;
extern char DAT_001130b5;
extern char DAT_001130b6;
extern char DAT_001130b7;

/* Ghidra type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Forward declarations */
void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);

/* Forward declarations for functions used in function pointers */
int double_value(int param_1);
int triple_value(int param_1);
int recursion_factorial(int param_1);
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

/* Switch table for switch_small function */
const char CSWTCH_55[4] = {50, 51, 52, 53};


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




/* Function: FUN_00100afc @ 00100afc */

void FUN_00100afc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 00100b54 */

int recursion_factorial(int param_1)

{
 int iVar1;
 
 iVar1 = 1;
 for (; 1 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}



/* Function: double_value @ 00100b74 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00100b7c */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 00100b84 */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00100b8c */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00100b94 */

int op_mul(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: op_div @ 00100b9c */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if ((param_2 != 0) && (iVar1 = 0, param_2 != 0)) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
}



/* Function: op_mod @ 00100bb0 */

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



/* Function: op_and @ 00100bc8 */

uint op_and(uint param_1,uint param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 00100bd0 */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 00100bd8 */

uint op_xor(uint param_1,uint param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 00100be0 */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (ulong)(param_2 & 0x1f);
}



/* Function: op_shr @ 00100be8 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00100bf0 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00100bfc */

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



/* Function: state_done @ 00100c14 */

undefined8 state_done(void)

{
 return 2;
}



/* Function: state_error @ 00100c1c */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 00100c2c */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00100c3c */

ulong single_if(ulong param_1)

{
 if (0 < (int)param_1) {
 param_1 = (ulong)(uint)((int)param_1 << 1);
 }
 return param_1;
}



/* Function: if_else @ 00100c4c */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00100c58 */

ulong nested_if_2(ulong param_1,int param_2)

{
 if ((int)param_1 < 1) {
 param_1 = 0;
 }
 else if (0 < param_2) {
 param_1 = (ulong)(uint)((int)param_1 + param_2);
 }
 return param_1;
}



/* Function: nested_if_deep @ 00100c78 */

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



/* Function: if_elseif_chain @ 00100cc8 */

undefined4 if_elseif_chain(int param_1)

{
 undefined4 uVar1;
 
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



/* Function: if_elseif_long @ 00100cf4 */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 100 + 100;
 if (4 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 00100d08 */

long switch_small(uint param_1)

{
 long lVar1;
 
 if (param_1 < 4) {
 lVar1 = (long)*(char *)((long)&CSWTCH_55 + (ulong)param_1);
 }
 else {
 lVar1 = 0xffffffff;
 }
 return lVar1;
}



/* Function: switch_large @ 00100d28 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00100d3c */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 100;
 if (2 < param_1 - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00100d54 */

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



/* Function: loop_for_fixed @ 00100d94 */

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



/* Function: loop_while @ 00100db8 */

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



/* Function: loop_dowhile @ 00100ddc */

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



/* Function: loop_nested @ 00100df8 */

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



/* Function: loop_break @ 00100e24 */

/* WARNING: Removing unreachable block (ram,0x00100ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_break(int param_1)

{
 long lVar1;
 int local_20 [8];
 
 lVar1 = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 do {
 if (local_20[lVar1] == param_1) {
 return param_1;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 5);
 return 0;
}



/* Function: loop_continue @ 00100eb0 */

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



/* Function: goto_forward @ 00100ed8 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}



/* Function: goto_backward @ 00100eec */

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



/* Function: ternary_op @ 00100f14 */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 00100f20 */

void test_control_flow_l1(void)

{
 undefined4 uVar1;
 
 puts(DAT_00101c70);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
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



/* Function: loop_multi_exit @ 00101194 */

/* WARNING: Removing unreachable block (ram,0x00101208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_multi_exit(int param_1)

{
 undefined8 *puVar1;
 int iVar2;
 long lVar3;
 undefined8 local_38;
 undefined8 uStack_30;
 undefined8 uStack_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 undefined8 local_8;
 
 local_8 = __stack_chk_guard;
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
 return param_1;
 }
 lVar3 = lVar3 + 1;
 } while (lVar3 != 4);
 iVar2 = iVar2 + 1;
 puVar1 = puVar1 + 2;
 } while (iVar2 != 3);
 return -1;
}



/* Function: infinite_loop @ 00101238 */

int infinite_loop(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return 0;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 1;
}



/* Function: multi_return @ 00101264 */

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



/* Function: conditional_return @ 00101294 */

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



/* Function: duffs_device @ 001012a8 */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
 undefined4 *puVar1;
 undefined4 *puVar2;
 int iVar3;
 undefined4 *puVar4;
 undefined4 *puVar5;
 
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
switchD_001012e4_default:
 puVar1 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
switchD_001012e4_caseD_7:
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
 goto switchD_001012e4_default;
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 00101344 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 
 for (iVar1 = 0; iVar1 * 2 < param_1 - iVar1 && iVar1 < 10; iVar1 = iVar1 + 1) {
 }
 return iVar1 * 3 + (param_1 - iVar1);
}



/* Function: loop_modify_var @ 00101370 */

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



/* Function: loop_external_state @ 001013a0 */

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



/* Function: tail_recursion @ 001013c0 */

int tail_recursion(int param_1,int param_2)

{
 for (; 1 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 * param_1;
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 001013e0 */

ulong indirect_recursion_a(ulong param_1,int param_2)

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
 } while( true );
}



/* Function: call_func_ptr @ 00101424 */

int call_func_ptr(int (*UNRECOVERED_JUMPTABLE)(int),int param_2)

{
 return (*UNRECOVERED_JUMPTABLE)(param_2);
}



/* Function: call_func_ptr_array @ 00101430 */

/* WARNING: Removing unreachable block (ram,0x00101494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_func_ptr_array(uint param_1,int param_2)

{
 int uVar1;
 int (*local_20[4])(int);
 
 local_20[0] = PTR_double_value_00113010;
 local_20[1] = PTR_triple_value_00113018;
 local_20[2] = PTR_recursion_factorial_00113020;
 local_20[3] = (int (*)(int))NULL;
 if (param_1 < 3) {
 uVar1 = (*local_20[(int)param_1])(param_2);
 return uVar1;
 }
 return -1;
}



/* Function: call_virtual_func @ 001014c8 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 001014d0 */

int process_with_callback(long param_1,int param_2,int (*param_3)(int))

{
 int iVar1;
 long lVar2;
 int iVar3;
 
 iVar3 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = (*param_3)(*(undefined4 *)(param_1 + lVar2 * 4));
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 0010152c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l2(void)

{
 int uVar1;
 undefined4 local_68;
 undefined4 local_64;
 undefined8 local_60;
 undefined8 uStack_58;
 undefined4 local_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_00101edd);
uVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_68 = 0;
 infinite_loop(&local_68);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",local_68);
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
 duffs_device((undefined4 *)&local_28,(undefined4 *)&local_48,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",8);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_64 = 0;
 loop_external_state(&local_64);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",local_64);
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
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: non_local_jump @ 001017ac */

int non_local_jump(int param_1)

{
 int iVar1;
 undefined8 uVar2;
 
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
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,uVar2);
}



/* Function: cpp_exception @ 00101808 */

int cpp_exception(int param_1)

{
 int iVar1;
 
 if (param_1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1 << 1;
 if (100 < param_1) {
 iVar1 = -2;
 }
 }
 return iVar1;
}



/* Function: large_jump_table @ 00101828 */

/* WARNING: Removing unreachable block (ram,0x0010189c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int large_jump_table(uint param_1,int param_2,int param_3)

{
 int uVar1;
 int (*local_58[10])(int, int);
 undefined8 local_8;
 
 local_8 = __stack_chk_guard;
 local_58[0] = PTR_op_add_00113028;
 local_58[1] = PTR_op_sub_00113030;
 local_58[2] = PTR_op_mul_00113038;
 local_58[3] = PTR_op_div_00113040;
 local_58[4] = PTR_op_mod_00113048;
 local_58[5] = (int (*)(int, int))PTR_op_and_00113050;
 local_58[6] = (int (*)(int, int))PTR_op_or_00113058;
 local_58[7] = (int (*)(int, int))PTR_op_xor_00113060;
 local_58[8] = (int (*)(int, int))PTR_op_shl_00113068;
 local_58[9] = (int (*)(int, int))PTR_op_shr_00113070;
 if (param_1 < 10) {
 uVar1 = (*local_58[(int)param_1])(param_2,param_3);
 return uVar1;
 }
 return -1;
}



/* Function: conditional_func_ptr @ 001018d0 */

int conditional_func_ptr(int param_1,int param_2)

{
 int (*UNRECOVERED_JUMPTABLE)(int);
 
 if (param_1 == 0) {
 UNRECOVERED_JUMPTABLE = double_value;
 }
 else {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 return (*UNRECOVERED_JUMPTABLE)(param_2);
}



/* Function: state_machine @ 00101908 */

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
 }
 return param_2;
}



/* Function: fsm_func_table @ 00101970 */

/* WARNING: Removing unreachable block (ram,0x001019c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fsm_func_table(undefined8 param_1,uint param_2)
{
 undefined8 uVar1;
 undefined1 local_28;
 undefined1 uStack_27;
 undefined1 uStack_26;
 undefined1 uStack_25;
 undefined1 uStack_24;
 undefined1 uStack_23;
 undefined1 uStack_22;
 undefined1 uStack_21;
 undefined1 uStack_20;
 undefined1 uStack_1f;
 undefined1 uStack_1e;
 undefined1 uStack_1d;
 undefined1 uStack_1c;
 undefined1 uStack_1b;
 undefined1 uStack_1a;
 undefined1 uStack_19;
 undefined1 uStack_18;
 undefined1 uStack_17;
 undefined1 uStack_16;
 undefined1 uStack_15;
 undefined1 uStack_14;
 undefined1 uStack_13;
 undefined1 uStack_12;
 undefined1 uStack_11;
 undefined1 uStack_10;
 undefined1 uStack_f;
 undefined1 uStack_e;
 undefined1 uStack_d;
 undefined1 uStack_c;
 undefined1 uStack_b;
 undefined1 uStack_a;
 undefined1 uStack_9;
 undefined8 local_8;
 
 local_8 = __stack_chk_guard;
 local_28 = DAT_00113078;
 uStack_27 = DAT_00113079;
 uStack_26 = DAT_0011307a;
 uStack_25 = DAT_0011307b;
 uStack_24 = DAT_0011307c;
 uStack_23 = DAT_0011307d;
 uStack_22 = DAT_0011307e;
 uStack_21 = DAT_0011307f;
 uStack_20 = DAT_00113080;
 uStack_1f = DAT_00113081;
 uStack_1e = DAT_00113082;
 uStack_1d = DAT_00113083;
 uStack_1c = DAT_00113084;
 uStack_1b = DAT_00113085;
 uStack_1a = DAT_00113086;
 uStack_19 = DAT_00113087;
 uStack_18 = DAT_00113088;
 uStack_17 = DAT_00113089;
 uStack_16 = DAT_0011308a;
 uStack_15 = DAT_0011308b;
 uStack_14 = DAT_0011308c;
 uStack_13 = DAT_0011308d;
 uStack_12 = DAT_0011308e;
 uStack_11 = DAT_0011308f;
 uStack_10 = DAT_00113090;
 uStack_f = DAT_00113091;
 uStack_e = DAT_00113092;
 uStack_d = DAT_00113093;
 uStack_c = DAT_00113094;
 uStack_b = DAT_00113095;
 uStack_a = DAT_00113096;
 uStack_9 = DAT_00113097;
 if (param_2 < 4) {
 /* WARNING: Could not recover jumptable at 0x001019d8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (**(code **)(&local_28 + (long)(int)param_2 * 8))();
 return param_2;
 }
 return 3;
}



/* Function: computed_goto @ 001019fc */

/* WARNING: Removing unreachable block (ram,0x00101a60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void computed_goto(undefined8 param_1,uint param_2)
{
 undefined1 local_28;
 undefined1 uStack_27;
 undefined1 uStack_26;
 undefined1 uStack_25;
 undefined1 uStack_24;
 undefined1 uStack_23;
 undefined1 uStack_22;
 undefined1 uStack_21;
 undefined1 uStack_20;
 undefined1 uStack_1f;
 undefined1 uStack_1e;
 undefined1 uStack_1d;
 undefined1 uStack_1c;
 undefined1 uStack_1b;
 undefined1 uStack_1a;
 undefined1 uStack_19;
 undefined1 uStack_18;
 undefined1 uStack_17;
 undefined1 uStack_16;
 undefined1 uStack_15;
 undefined1 uStack_14;
 undefined1 uStack_13;
 undefined1 uStack_12;
 undefined1 uStack_11;
 undefined1 uStack_10;
 undefined1 uStack_f;
 undefined1 uStack_e;
 undefined1 uStack_d;
 undefined1 uStack_c;
 undefined1 uStack_b;
 undefined1 uStack_a;
 undefined1 uStack_9;
 undefined8 local_8;
 
 local_8 = __stack_chk_guard;
 local_28 = DAT_00113098;
 uStack_27 = DAT_00113099;
 uStack_26 = DAT_0011309a;
 uStack_25 = DAT_0011309b;
 uStack_24 = DAT_0011309c;
 uStack_23 = DAT_0011309d;
 uStack_22 = DAT_0011309e;
 uStack_21 = DAT_0011309f;
 uStack_20 = DAT_001130a0;
 uStack_1f = DAT_001130a1;
 uStack_1e = DAT_001130a2;
 uStack_1d = DAT_001130a3;
 uStack_1c = DAT_001130a4;
 uStack_1b = DAT_001130a5;
 uStack_1a = DAT_001130a6;
 uStack_19 = DAT_001130a7;
 uStack_18 = DAT_001130a8;
 uStack_17 = DAT_001130a9;
 uStack_16 = DAT_001130aa;
 uStack_15 = DAT_001130ab;
 uStack_14 = DAT_001130ac;
 uStack_13 = DAT_001130ad;
 uStack_12 = DAT_001130ae;
 uStack_11 = DAT_001130af;
 uStack_10 = DAT_001130b0;
 uStack_f = DAT_001130b1;
 uStack_e = DAT_001130b2;
 uStack_d = DAT_001130b3;
 uStack_c = DAT_001130b4;
 uStack_b = DAT_001130b5;
 uStack_a = DAT_001130b6;
 uStack_9 = DAT_001130b7;
 if (3 < param_2) {
 return;
 }
 /* WARNING: Could not recover jumptable at 0x00101a3c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (**(code **)(&local_28 + (long)(int)param_2 * 8))();
 return;
}



/* Function: obfuscated_cf @ 00101a8c */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 00101a94 */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00101a9c */

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



/* Function: test_control_flow_l3 @ 00101ab8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 undefined8 local_18;
 undefined8 local_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_001020d0);
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
 __printf_chk(1,"CF-L3-05 (state_machine): %u\n",state_machine(2,1));
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_18 = 0x100000000;
 local_10 = 0x300000002;
 computed_goto((undefined8)&local_18,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",2);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",obfuscated_cf(5));
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",opaque_predicate(5));
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
