/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */


#include <stdint.h>
#include <stdbool.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef void undefined;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef int (*code)(int);

/* Missing external declarations */
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;
extern int completed_0;
extern void *__dso_handle;

/* String literals from binary data - changed to uint8_t for byte values */
extern const uint8_t DAT_00114078;
extern const uint8_t DAT_00114079;
extern const uint8_t DAT_0011407a;
extern const uint8_t DAT_0011407b;
extern const uint8_t DAT_0011407c;
extern const uint8_t DAT_0011407d;
extern const uint8_t DAT_0011407e;
extern const uint8_t DAT_0011407f;
extern const uint8_t DAT_00114080;
extern const uint8_t DAT_00114081;
extern const uint8_t DAT_00114082;
extern const uint8_t DAT_00114083;
extern const uint8_t DAT_00114084;
extern const uint8_t DAT_00114085;
extern const uint8_t DAT_00114086;
extern const uint8_t DAT_00114087;
extern const uint8_t DAT_00114088;
extern const uint8_t DAT_00114089;
extern const uint8_t DAT_0011408a;
extern const uint8_t DAT_0011408b;
extern const uint8_t DAT_0011408c;
extern const uint8_t DAT_0011408d;
extern const uint8_t DAT_0011408e;
extern const uint8_t DAT_0011408f;
extern const uint8_t DAT_00114090;
extern const uint8_t DAT_00114091;
extern const uint8_t DAT_00114092;
extern const uint8_t DAT_00114093;
extern const uint8_t DAT_00114094;
extern const uint8_t DAT_00114095;
extern const uint8_t DAT_00114096;
extern const uint8_t DAT_00114097;
extern const uint8_t DAT_00114098;
extern const uint8_t DAT_00114099;
extern const uint8_t DAT_0011409a;
extern const uint8_t DAT_0011409b;
extern const uint8_t DAT_0011409c;
extern const uint8_t DAT_0011409d;
extern const uint8_t DAT_0011409e;
extern const uint8_t DAT_0011409f;
extern const uint8_t DAT_001140a0;
extern const uint8_t DAT_001140a1;
extern const uint8_t DAT_001140a2;
extern const uint8_t DAT_001140a3;
extern const uint8_t DAT_001140a4;
extern const uint8_t DAT_001140a5;
extern const uint8_t DAT_001140a6;
extern const uint8_t DAT_001140a7;
extern const uint8_t DAT_001140a8;
extern const uint8_t DAT_001140a9;
extern const uint8_t DAT_001140aa;
extern const uint8_t DAT_001140ab;
extern const uint8_t DAT_001140ac;
extern const uint8_t DAT_001140ad;
extern const uint8_t DAT_001140ae;
extern const uint8_t DAT_001140af;
extern const uint8_t DAT_001140b0;
extern const uint8_t DAT_001140b1;
extern const uint8_t DAT_001140b2;
extern const uint8_t DAT_001140b3;
extern const uint8_t DAT_001140b4;
extern const uint8_t DAT_001140b5;
extern const uint8_t DAT_001140b6;
extern const uint8_t DAT_001140b7[];

/* Function pointer table entries */
extern int (*PTR_double_value_00114010)(int);
extern int (*PTR_triple_value_00114018)(int);
extern int (*PTR_recursion_factorial_00114020)(int);
extern int (*PTR_op_add_00114028)(int,int);
extern int (*PTR_op_sub_00114030)(int,int);
extern int (*PTR_op_mul_00114038)(int,int);
extern int (*PTR_op_div_00114040)(int,int);
extern int (*PTR_op_mod_00114048)(int,int);
extern uint (*PTR_op_and_00114050)(uint,uint);
extern uint (*PTR_op_or_00114058)(uint,uint);
extern uint (*PTR_op_xor_00114060)(uint,uint);
extern int (*PTR_op_shl_00114068)(int,uint);
extern int (*PTR_op_shr_00114070)(int,uint);

/* Function prototypes for CRT functions */
void __cxa_finalize(void *);
void __stack_chk_fail(void) __attribute__((noreturn));
void __longjmp_chk(jmp_buf, int);
void deregister_tm_clones(void);

/* Function pointer type definitions */
typedef int (*binary_op)(int, int);
typedef int (*unary_op)(int);

/* Jump buffer for non-local jumps */
#include <setjmp.h>
jmp_buf jump_buffer;

/* Function pointer type for callback functions */
typedef int (*callback_fn)(int);

/* Function pointer type for functions with 2 args */
typedef int (*binary_func)(int, int);




/* Function: FUN_00100940 @ 00100940 */

void FUN_00100940(void)

{
 /* Original was calling null function pointer - removed invalid call */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100abc @ 00100abc */

void FUN_00100abc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 00100b14 */

int recursion_factorial(int param_1)

{
 int iVar1;
 
 if (1 < param_1) {
 iVar1 = recursion_factorial(param_1 + -1);
 return iVar1 * param_1;
 }
 return 1;
}



/* Function: double_value @ 00100b4c */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00100b54 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 00100b5c */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00100b64 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00100b6c */

int op_mul(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: op_div @ 00100b74 */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 if ((param_2 != 0) && (iVar1 = 0, param_2 != 0)) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
}



/* Function: op_mod @ 00100b88 */

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



/* Function: op_and @ 00100ba0 */

uint op_and(uint param_1,uint param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 00100ba8 */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 00100bb0 */

uint op_xor(uint param_1,uint param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 00100bb8 */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (ulong)(param_2 & 0x1f);
}



/* Function: op_shr @ 00100bc0 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00100bc8 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00100bd4 */

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



/* Function: state_done @ 00100bec */

undefined8 state_done(void)

{
 return 2;
}



/* Function: state_error @ 00100bf4 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 00100c04 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00100c14 */

int single_if(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 << 1;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: if_else @ 00100c24 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00100c30 */

int nested_if_2(int param_1,int param_2)

{
 int iVar1;
 
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_1 + param_2;
 if (param_2 < 1) {
 iVar1 = param_1;
 }
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00100c50 */

char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 char cVar1;
 
 if (param_1 < 1) {
 cVar1 = '\0';
 }
 else {
 cVar1 = '\x01';
 if (0 < param_2) {
 if (param_3 < 1) {
 cVar1 = '\x02';
 }
 else if (param_4 < 1) {
 cVar1 = '\x03';
 }
 else {
 cVar1 = (0 < param_5) + '\x04';
 }
 }
 }
 return cVar1;
}



/* Function: if_elseif_chain @ 00100c9c */

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



/* Function: if_elseif_long @ 00100cc8 */

undefined4 if_elseif_long(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 100;
 }
 else if (param_1 == 1) {
 uVar1 = 200;
 }
 else if (param_1 == 2) {
 uVar1 = 300;
 }
 else if (param_1 == 3) {
 uVar1 = 400;
 }
 else {
 uVar1 = 500;
 if (param_1 != 4) {
 uVar1 = 0xffffffff;
 }
 }
 return uVar1;
}



/* Function: switch_small @ 00100d14 */

undefined4 switch_small(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 2) {
 uVar1 = 0x32;
 }
 else if (param_1 < 3) {
 uVar1 = 0xf;
 if ((param_1 != 0) && (uVar1 = 5, param_1 != 1)) {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 2;
 if (param_1 != 3) {
 uVar1 = 0xffffffff;
 }
 }
 return uVar1;
}



/* Function: switch_large @ 00100d54 */

ulong switch_large(ulong param_1)

{
 int iVar1;
 uint uVar2;
 
 iVar1 = (int)param_1;
 if (iVar1 == 5) {
 param_1 = 0x32;
 }
 else if (iVar1 < 6) {
 if (iVar1 == 2) {
 param_1 = 0x14;
 }
 else if (iVar1 < 3) {
 if (iVar1 != 0) {
 uVar2 = 10;
 if (iVar1 != 1) {
 uVar2 = 0xffffffff;
 }
 param_1 = (ulong)uVar2;
 }
 }
 else {
 uVar2 = 0x28;
 if (iVar1 == 3) {
 uVar2 = 0x1e;
 }
 param_1 = (ulong)uVar2;
 }
 }
 else {
 param_1 = 0x50;
 if (iVar1 != 8) {
 if (iVar1 < 9) {
 param_1 = 0x3c;
 if (iVar1 != 6) {
 uVar2 = 0x46;
 if (iVar1 != 7) {
 uVar2 = 0xffffffff;
 }
 param_1 = (ulong)uVar2;
 }
 }
 else {
 uVar2 = 0x5a;
 if (iVar1 != 9) {
 uVar2 = 0xffffffff;
 }
 param_1 = (ulong)uVar2;
 }
 }
 }
 return param_1;
}



/* Function: switch_default @ 00100de4 */

undefined4 switch_default(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 200;
 if (((param_1 != 2) && (uVar1 = 300, param_1 != 3)) && (uVar1 = 100, param_1 != 1)) {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: switch_fallthrough @ 00100e10 */

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
 goto LAB_00100e40;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_00100e40:
 return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 00100e50 */

int loop_for_fixed(int param_1)

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
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return iVar1;
}



/* Function: loop_while @ 00100e80 */

int loop_while(int param_1)

{
 int iVar1;
 
 if (param_1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: loop_dowhile @ 00100eb8 */

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



/* Function: loop_nested @ 00100ee0 */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 iVar2 = 0;
 if (0 < param_2) {
 do {
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 iVar1 = iVar2 + iVar1;
 }
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 return iVar1;
}



/* Function: loop_break @ 00100f24 */

/* WARNING: Removing unreachable block (ram,0x00100fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_break(int param_1)

{
 int iVar1;
 int *piVar2;
 int local_20 [6];
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 piVar2 = local_20;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 iVar1 = 0;
 do {
 if (*piVar2 == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return iVar1;
}



/* Function: loop_continue @ 00100fac */

int loop_continue(int param_1)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = 1;
 iVar1 = 0;
 do {
 iVar2 = iVar1 + uVar3;
 if ((uVar3 & 1) == 0) {
 iVar2 = iVar1;
 }
 uVar3 = uVar3 + 1;
 iVar1 = iVar2;
 } while (uVar3 != param_1 + 1U);
 }
 return iVar2;
}



/* Function: goto_forward @ 00100fe4 */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 * param_1;
 if (param_1 < 1) {
 iVar1 = param_1;
 }
 return iVar1 << 1;
}



/* Function: goto_backward @ 00100ff8 */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar1 = 1;
 }
 else {
 iVar2 = 1;
 iVar1 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != param_1 + 1);
 }
 return iVar1;
}



/* Function: ternary_op @ 00101028 */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 00101034 */

void test_control_flow_l1(void)

{
 undefined4 uVar1;
 
 puts("Test Control Flow L1");
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
 uVar1 = goto_backward(5);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",uVar1);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 001012b4 */

/* WARNING: Removing unreachable block (ram,0x00101354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_multi_exit(int param_1)

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
 
 local_8 = ___stack_chk_guard;
 puVar2 = &local_38;
 uStack_30 = 0x400000003;
 local_38 = 0x200000001;
 uStack_20 = 0x800000007;
 uStack_28 = 0x600000005;
 uStack_10 = 0xc0000000b;
 local_18 = 0xa00000009;
 iVar3 = 0;
 do {
 lVar1 = 0;
 do {
 if (*(int *)((long)puVar2 + lVar1 * 4) == param_1) {
 return;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 4);
 iVar3 = iVar3 + 1;
 puVar2 = puVar2 + 2;
 } while (iVar3 != 3);
 return;
}



/* Function: infinite_loop @ 00101358 */

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



/* Function: multi_return @ 00101384 */

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



/* Function: conditional_return @ 001013b4 */

int conditional_return(int param_1)

{
 int iVar1;
 
 if (param_1 < 1) {
 iVar1 = 0;
 if (param_1 < 0) {
 iVar1 = -param_1;
 }
 }
 else {
 iVar1 = param_1 << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 001013cc */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)
{
 undefined4 *local_10;
 undefined4 *local_c;
 uint local_8;
 
 local_10 = param_2;
 local_c = param_1;
 local_8 = 0;
 do {
 *local_c = *local_10;
 local_c = local_c + 1;
 local_10 = local_10 + 1;
 local_8 = local_8 + 1;
 } while (local_8 < param_3);
 return local_8;
}



/* Function: loop_complex_cond @ 001014b0 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar2 = 0;
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = param_1 + -1;
 iVar2 = iVar2 + 1;
 } while (((param_1 > iVar1 && iVar2 < 10) && param_1 != 0) &&
 ((param_1 <= iVar1 || 9 < iVar2) || -1 < param_1));
 }
 return iVar1 + param_1 + iVar2;
}



/* Function: loop_modify_var @ 001014f4 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar2 = 0;
 iVar3 = 0;
 if (0 < param_1) {
 while (iVar1 = iVar3 + 1, iVar1 < param_1) {
 iVar2 = iVar2 + iVar1;
 iVar3 = iVar3 + 3;
 if (iVar1 < 6) {
 iVar3 = iVar1;
 }
 }
 }
 return iVar2;
}



/* Function: loop_external_state @ 0010152c */

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



/* Function: tail_recursion @ 0010154c */

ulong tail_recursion(int param_1,uint param_2)

{
 ulong uVar1;
 
 if (1 < param_1) {
 uVar1 = tail_recursion(param_1 + -1,param_1 * param_2);
 return uVar1;
 }
 return (ulong)param_2;
}



/* Function: indirect_recursion_a @ 00101578 */

ulong indirect_recursion_a(ulong param_1,int param_2)

{
 uint uVar1;
 int iVar2;
 ulong uVar3;
 
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 uVar1 = (int)param_1 / 2;
 uVar3 = (ulong)uVar1;
 if (1 < param_2) {
 uVar3 = indirect_recursion_a(uVar1 + 1,param_2 + -2);
 }
 }
 else {
 iVar2 = (int)param_1 * 3;
 if (param_2 < 2) {
 uVar3 = (ulong)(iVar2 + 1);
 }
 else {
 uVar3 = indirect_recursion_a(iVar2 + 2,param_2 + -2);
 }
 }
 return uVar3;
 }
 return param_1;
}



/* Function: call_func_ptr @ 001015d8 */

int call_func_ptr(code param_1,undefined4 param_2)

{
 return param_1(param_2);
}



/* Function: call_func_ptr_array @ 001015f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_func_ptr_array(uint param_1,undefined4 param_2)

{
 undefined8 uVar1;
 int (*local_20[3])(int);
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20[0] = &double_value;
 local_20[1] = &triple_value;
 local_20[2] = &recursion_factorial;
 if (param_1 < 3) {
 uVar1 = (*local_20[(int)param_1])(param_2);
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}



/* Function: call_virtual_func @ 00101674 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 0010167c */

int process_with_callback(undefined4 *param_1,int param_2,code *param_3)

{
 int iVar1;
 undefined4 *puVar2;
 int iVar4;
 undefined4 *puVar3;
 
 if (param_2 < 1) {
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 puVar2 = param_1;
 do {
 puVar3 = puVar2 + 1;
 iVar1 = (*param_3)(*puVar2);
 iVar4 = iVar4 + iVar1;
 puVar2 = puVar3;
 } while (puVar3 != param_1 + (ulong)(param_2 - 1) + 1);
 }
 return iVar4;
}



/* Function: test_control_flow_l2 @ 001016dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l2(void)

{
 undefined4 uVar1;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60[2];
 undefined4 uStack_58[2];
 undefined4 local_50;
 undefined4 local_48[2];
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined4 local_28[2];
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts("Test Control Flow L2");
 uVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_68 = 0;
 uVar1 = infinite_loop(&local_68);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",uVar1);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 uStack_40 = 0x400000003;
 local_48[0] = 0x200000001;
 local_48[1] = 0x400000003;
 uStack_30 = 0x800000007;
 uStack_38 = 0x600000005;
 local_28[0] = 0;
 local_28[1] = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 uVar1 = duffs_device(local_28,local_48,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_64 = 0;
 uVar1 = loop_external_state(&local_64);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",uVar1);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 uVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_60[0] = 0x200000001;
 local_60[1] = 0x400000003;
 local_50 = 5;
 uVar1 = process_with_callback(local_60,5,&double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}



/* Function: non_local_jump @ 00101968 */

int non_local_jump(int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 iVar1 = param_1 << 1;
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 001019cc */

int cpp_exception(int param_1)

{
 if (param_1 < 0) {
 param_1 = -1;
 }
 else if (param_1 < 0x65) {
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -2;
 }
 return param_1;
}



/* Function: large_jump_table @ 001019f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int large_jump_table(uint param_1,int param_2,int param_3)

{
 int iVar1;
 int (*local_58[10])(int, int);
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_58[1] = op_sub;
 local_58[0] = op_add;
 local_58[3] = op_div;
 local_58[2] = op_mul;
 local_58[4] = op_mod;
 local_58[5] = (int (*)(int,int))op_and;
 local_58[7] = (int (*)(int,int))op_xor;
 local_58[6] = (int (*)(int,int))op_or;
 local_58[9] = (int (*)(int,int))op_shr;
 local_58[8] = (int (*)(int,int))op_shl;
 if (param_1 < 10) {
 iVar1 = local_58[(int)param_1](param_2,param_3);
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: conditional_func_ptr @ 00101a80 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
 code pcVar1;
 
 if (param_1 == 0) {
 pcVar1 = double_value;
 }
 else {
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 }
 pcVar1(param_2);
 return;
}



/* Function: state_machine @ 00101ac4 */

ulong state_machine(ulong param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 if (param_2 == 2) {
 param_1 = 2;
 }
 else {
 iVar1 = (int)param_1;
 if ((int)param_2 < 3) {
 if (param_2 == 0) {
 param_1 = (ulong)(iVar1 == 1);
 }
 else if (param_2 == 1) {
 if (iVar1 != 2) {
 uVar2 = 1;
 if (iVar1 == 99) {
 uVar2 = 3;
 }
 param_1 = (ulong)uVar2;
 }
 }
 else {
 param_1 = 3;
 }
 }
 else {
 uVar2 = param_2;
 if (iVar1 == 0) {
 uVar2 = 0;
 }
 if (param_2 != 3) {
 uVar2 = 3;
 }
 param_1 = (ulong)uVar2;
 }
 }
 return param_1;
}



/* Function: fsm_func_table @ 00101b28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fsm_func_table(undefined4 param_1,uint param_2)

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
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_28 = DAT_00114078;
 uStack_27 = DAT_00114079;
 uStack_26 = DAT_0011407a;
 uStack_25 = DAT_0011407b;
 uStack_24 = DAT_0011407c;
 uStack_23 = DAT_0011407d;
 uStack_22 = DAT_0011407e;
 uStack_21 = DAT_0011407f;
 uStack_20 = DAT_00114080;
 uStack_1f = DAT_00114081;
 uStack_1e = DAT_00114082;
 uStack_1d = DAT_00114083;
 uStack_1c = DAT_00114084;
 uStack_1b = DAT_00114085;
 uStack_1a = DAT_00114086;
 uStack_19 = DAT_00114087;
 uStack_18 = DAT_00114088;
 uStack_17 = DAT_00114089;
 uStack_16 = DAT_0011408a;
 uStack_15 = DAT_0011408b;
 uStack_14 = DAT_0011408c;
 uStack_13 = DAT_0011408d;
 uStack_12 = DAT_0011408e;
 uStack_11 = DAT_0011408f;
 uStack_10 = DAT_00114090;
 uStack_f = DAT_00114091;
 uStack_e = DAT_00114092;
 uStack_d = DAT_00114093;
 uStack_c = DAT_00114094;
 uStack_b = DAT_00114095;
 uStack_a = DAT_00114096;
 uStack_9 = DAT_00114097;
 uVar1 = 3;
 if (param_2 < 4) {
 uVar1 = (**(code **)(&local_28 + (long)(int)param_2 * 8))(param_1);
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: computed_goto @ 00101ba4 */

/* WARNING: Removing unreachable block (ram,0x00101c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void computed_goto(undefined8 param_1,undefined8 param_2)

{
 code *local_28;
 code *uStack_27;
 code *uStack_26;
 code *uStack_25;
 code *uStack_24;
 code *uStack_23;
 code *uStack_22;
 code *uStack_21;
 code *uStack_20;
 code *uStack_1f;
 code *uStack_1e;
 code *uStack_1d;
 code *uStack_1c;
 code *uStack_1b;
 code *uStack_1a;
 code *uStack_19;
 code *uStack_18;
 code *uStack_17;
 code *uStack_16;
 code *uStack_15;
 code *uStack_14;
 code *uStack_13;
 code *uStack_12;
 code *uStack_11;
 code *uStack_10;
 code *uStack_f;
 code *uStack_e;
 code *uStack_d;
 code *uStack_c;
 code *uStack_b;
 code *uStack_a;
 code *uStack_9;
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 local_28 = (code *)DAT_00114098;
 uStack_27 = (code *)DAT_00114099;
 uStack_26 = (code *)DAT_0011409a;
 uStack_25 = (code *)DAT_0011409b;
 uStack_24 = (code *)DAT_0011409c;
 uStack_23 = (code *)DAT_0011409d;
 uStack_22 = (code *)DAT_0011409e;
 uStack_21 = (code *)DAT_0011409f;
 uStack_20 = (code *)DAT_001140a0;
 uStack_1f = (code *)DAT_001140a1;
 uStack_1e = (code *)DAT_001140a2;
 uStack_1d = (code *)DAT_001140a3;
 uStack_1c = (code *)DAT_001140a4;
 uStack_1b = (code *)DAT_001140a5;
 uStack_1a = (code *)DAT_001140a6;
 uStack_19 = (code *)DAT_001140a7;
 uStack_18 = (code *)DAT_001140a8;
 uStack_17 = (code *)DAT_001140a9;
 uStack_16 = (code *)DAT_001140aa;
 uStack_15 = (code *)DAT_001140ab;
 uStack_14 = (code *)DAT_001140ac;
 uStack_13 = (code *)DAT_001140ad;
 uStack_12 = (code *)DAT_001140ae;
 uStack_11 = (code *)DAT_001140af;
 uStack_10 = (code *)DAT_001140b0;
 uStack_f = (code *)DAT_001140b1;
 uStack_e = (code *)DAT_001140b2;
 uStack_d = (code *)DAT_001140b3;
 uStack_c = (code *)DAT_001140b4;
 uStack_b = (code *)DAT_001140b5;
 uStack_a = (code *)DAT_001140b6;
 uStack_9 = (code *)DAT_001140b7;
 if (3 < (uint)param_2) {
 return;
 }
 /* WARNING: Could not recover jumptable at 0x00101be4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)(&local_28 + (long)(int)(uint)param_2 * 8))
 (*(code **)(&local_28 + (long)(int)(uint)param_2 * 8),param_2,0);
 return;
}



/* Function: obfuscated_cf @ 00101c34 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 00101c3c */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00101c44 */

int overlapped_code(uint param_1)

{
 int iVar1;
 
 iVar1 = (int)param_1 / 2;
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00101c5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts("Test Control Flow L3");
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
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_18 = 0;
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 computed_goto(&local_18);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",0);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}



/* Function: main @ 00101e00 */

undefined8 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
