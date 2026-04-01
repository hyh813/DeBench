/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdint.h>

/* Ghidra type mappings */
typedef char undefined;
typedef char undefined1;
typedef int undefined4;
typedef long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef int (*code_1arg)(int);
typedef int (*code_2arg)(int, int);
typedef uint (*code_2arg_uint)(uint, uint);
typedef int (*code)();

/* External variables */
extern int ___stack_chk_guard;
extern void __stack_chk_fail(void *);
extern void __cxa_finalize(void *);
extern int completed_0;
extern void *__dso_handle;
extern void deregister_tm_clones(void);

/* Forward declarations */
ulong indirect_recursion_b(uint param_1, int param_2);

/* Function pointer declarations */
extern int (*PTR_double_value_00114010)(int);
extern int (*PTR_triple_value_00114018)(int);
extern int (*PTR_recursion_factorial_00114020)(int);
extern int (*PTR_op_add_00114028)(int, int);
extern int (*PTR_op_sub_00114030)(int, int);
extern int (*PTR_op_mul_00114038)(int, int);
extern int (*PTR_op_div_00114040)(int, int);
extern int (*PTR_op_mod_00114048)(int, int);
extern uint (*PTR_op_and_00114050)(uint, uint);
extern uint (*PTR_op_or_00114058)(uint, uint);
extern uint (*PTR_op_xor_00114060)(uint, uint);
extern int (*PTR_op_shl_00114068)(int, uint);
extern int (*PTR_op_shr_00114070)(int, uint);

/* String constants */
extern char *DAT_001029e8;
extern char *DAT_00102cc0;
extern char *DAT_00102f18;
extern char DAT_00114078;
extern char DAT_00114079;
extern char DAT_0011407a;
extern char DAT_0011407b;
extern char DAT_0011407c;
extern char DAT_0011407d;
extern char DAT_0011407e;
extern char DAT_0011407f;
extern char DAT_00114080;
extern char DAT_00114081;
extern char DAT_00114082;
extern char DAT_00114083;
extern char DAT_00114084;
extern char DAT_00114085;
extern char DAT_00114086;
extern char DAT_00114087;
extern char DAT_00114088;
extern char DAT_00114089;
extern char DAT_0011408a;
extern char DAT_0011408b;
extern char DAT_0011408c;
extern char DAT_0011408d;
extern char DAT_0011408e;
extern char DAT_0011408f;
extern char DAT_00114090;
extern char DAT_00114091;
extern char DAT_00114092;
extern char DAT_00114093;
extern char DAT_00114094;
extern char DAT_00114095;
extern char DAT_00114096;
extern char DAT_00114097;
extern char DAT_00114098;
extern char DAT_00114099;
extern char DAT_0011409a;
extern char DAT_0011409b;
extern int (*DAT_0011409c)(int);
extern char DAT_0011409d;
extern int (*DAT_0011409e)(int);
extern char DAT_0011409f;
extern char DAT_001140a0;
extern int (*DAT_001140a1)(int);
extern char DAT_001140a2;
extern int (*DAT_001140a3)(int);
extern char DAT_001140a4;
extern char DAT_001140a5;
extern int (*DAT_001140a6)(int);
extern int (*DAT_001140a7)(int);
extern char DAT_001140a8;
extern char DAT_001140a9;
extern int (*DAT_001140aa)(int);
extern int (*DAT_001140ab)(int);
extern int (*DAT_001140ac)(int);
extern int (*DAT_001140ad)(int);
extern int (*DAT_001140ae)(int);
extern int (*DAT_001140af)(int);
extern int (*DAT_001140b0)(int);
extern int (*DAT_001140b1)(int);
extern int (*DAT_001140b2)(int);
extern int (*DAT_001140b3)(int);
extern int (*DAT_001140b4)(int);
extern int (*DAT_001140b5)(int);
extern int (*DAT_001140b6)(int);
extern int (*DAT_001140b7)(int);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100930 @ 00100930 */

void FUN_00100930(void)

{
 (*(code *)(undefined *)0x0)();
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




/* Function: sequential_ops @ 00100b14 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00100b5c */

int single_if(int param_1)

{
 undefined4 local_4;
 
 local_4 = param_1;
 if (0 < param_1) {
 local_4 = param_1 << 1;
 }
 return local_4;
}



/* Function: if_else @ 00100b88 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00100bb0 */

int nested_if_2(int param_1,int param_2)

{
 if (param_1 < 1) {
 param_1 = 0;
 }
 else if (0 < param_2) {
 param_1 = param_1 + param_2;
 }
 return param_1;
}



/* Function: nested_if_deep @ 00100bf8 */

undefined8 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined8 uVar1;
 
 if (param_1 < 1) {
 uVar1 = 0;
 }
 else if (param_2 < 1) {
 uVar1 = 1;
 }
 else if (param_3 < 1) {
 uVar1 = 2;
 }
 else if (param_4 < 1) {
 uVar1 = 3;
 }
 else if (param_5 < 1) {
 uVar1 = 4;
 }
 else {
 uVar1 = 5;
 }
 return uVar1;
}



/* Function: if_elseif_chain @ 00100c80 */

undefined8 if_elseif_chain(int param_1)

{
 undefined8 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 10;
 }
 else if (param_1 == 1) {
 uVar1 = 0x14;
 }
 else if (param_1 == 2) {
 uVar1 = 0x1e;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: if_elseif_long @ 00100cd0 */

undefined8 if_elseif_long(int param_1)

{
 undefined8 uVar1;
 
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
 else if (param_1 == 4) {
 uVar1 = 500;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: switch_small @ 00100d48 */

undefined4 switch_small(int param_1)

{
 if (param_1 == 3) {
 return 2;
 }
 if (param_1 < 4) {
 if (param_1 == 2) {
 return 0x32;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 return 0xf;
 }
 if (param_1 == 1) {
 return 5;
 }
 }
 }
 return 0xffffffff;
}



/* Function: switch_large @ 00100df8 */

undefined8 switch_large(int param_1)

{
 if (param_1 == 9) {
 return 0x5a;
 }
 if (param_1 < 10) {
 if (param_1 == 8) {
 return 0x50;
 }
 if (param_1 < 9) {
 if (param_1 == 7) {
 return 0x46;
 }
 if (param_1 < 8) {
 if (param_1 == 6) {
 return 0x3c;
 }
 if (param_1 < 7) {
 if (param_1 == 5) {
 return 0x32;
 }
 if (param_1 < 6) {
 if (param_1 == 4) {
 return 0x28;
 }
 if (param_1 < 5) {
 if (param_1 == 3) {
 return 0x1e;
 }
 if (param_1 < 4) {
 if (param_1 == 2) {
 return 0x14;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 return 0;
 }
 if (param_1 == 1) {
 return 10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return 0xffffffff;
}



/* Function: switch_default @ 00100f38 */

undefined8 switch_default(int param_1)

{
 if (param_1 == 3) {
 return 300;
 }
 if (param_1 < 4) {
 if (param_1 == 1) {
 return 100;
 }
 if (param_1 == 2) {
 return 200;
 }
 }
 return 0;
}



/* Function: switch_fallthrough @ 00100f98 */

int switch_fallthrough(int param_1)

{
 undefined4 local_4;
 
 local_4 = 0;
 if (param_1 == 3) {
 local_4 = 0xc;
LAB_00100fec:
 local_4 = local_4 + param_1 * 2;
LAB_00101000:
 local_4 = local_4 + param_1;
 }
 else {
 if (param_1 < 4) {
 if (param_1 == 1) goto LAB_00101000;
 if (param_1 == 2) goto LAB_00100fec;
 }
 local_4 = -1;
 }
 return local_4;
}



/* Function: loop_for_fixed @ 00101028 */

int loop_for_fixed(int param_1)

{
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
 local_8 = local_8 + local_4;
 }
 return local_8;
}



/* Function: loop_while @ 00101074 */

int loop_while(int param_1)

{
 undefined4 local_14;
 undefined4 local_4;
 
 local_4 = 0;
 for (local_14 = param_1; local_14 != 0; local_14 = local_14 / 10) {
 local_4 = local_4 + 1;
 }
 if (local_4 < 1) {
 local_4 = 1;
 }
 return local_4;
}



/* Function: loop_dowhile @ 001010dc */

int loop_dowhile(int param_1)

{
 undefined4 local_14;
 undefined4 local_4;
 
 local_4 = 0;
 local_14 = param_1;
 do {
 local_14 = local_14 / 10;
 local_4 = local_4 + 1;
 } while (local_14 != 0);
 return local_4;
}



/* Function: loop_nested @ 00101130 */

int loop_nested(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 undefined4 local_4;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_c = local_c + 1;
 }
 }
 return local_c;
}



/* Function: loop_break @ 001011a0 */

/* WARNING: Removing unreachable block (ram,0x00101254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_break(int param_1)

{
 int local_28;
 int local_20 [6];
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 local_28 = 0;
 while( true ) {
 if (4 < local_28) {
 return -1;
 }
 if (param_1 == local_20[local_28]) break;
 local_28 = local_28 + 1;
 }
 return local_28;
}



/* Function: loop_continue @ 00101264 */

int loop_continue(int param_1)

{
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = 1; (int)local_4 <= param_1; local_4 = local_4 + 1) {
 if ((local_4 & 1) != 0) {
 local_8 = local_8 + local_4;
 }
 }
 return local_8;
}



/* Function: goto_forward @ 001012cc */

int goto_forward(int param_1)

{
 int local_4;
 
 local_4 = param_1;
 if (0 < param_1) {
 local_4 = param_1 * param_1;
 }
 return local_4 << 1;
}



/* Function: goto_backward @ 00101310 */

int goto_backward(int param_1)

{
 undefined4 local_8;
 undefined4 local_4;
 
 if (param_1 < 1) {
 local_8 = 1;
 }
 else {
 local_8 = 1;
 for (local_4 = 1; local_4 <= param_1; local_4 = local_4 + 1) {
 local_8 = local_8 * local_4;
 }
 }
 return local_8;
}



/* Function: ternary_op @ 0010137c */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 001013a4 */

int test_control_flow_l1(void)

{
 int iVar1;
 ulong uVar2;
 
 puts(DAT_001029e8);
 uVar2 = sequential_ops(5,7,3);
 printf("CF-L1-01 (sequential_ops): %d\n",uVar2 & 0xffffffff);
 uVar2 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n",uVar2 & 0xffffffff);
 uVar2 = single_if(0xfffffffb);
 printf("CF-L1-02 (single_if): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_else(0xfffffffd);
 printf("CF-L1-03 (if_else): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_2(10,0xfffffffb);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_2(0xfffffff6,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
 uVar2 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",uVar2 & 0xffffffff);
 uVar2 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",uVar2 & 0xffffffff);
 uVar2 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_while(0x3039);
 printf("CF-L1-13 (loop_while): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",uVar2 & 0xffffffff);
 uVar2 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",uVar2 & 0xffffffff);
 uVar2 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",uVar2 & 0xffffffff);
 uVar2 = goto_forward(0xfffffffd);
 printf("CF-L1-18 (goto_forward): %d\n",uVar2 & 0xffffffff);
 uVar2 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",uVar2 & 0xffffffff);
 uVar2 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",uVar2 & 0xffffffff);
 uVar2 = ternary_op(3,8);
 iVar1 = printf("CF-L1-20 (ternary_op): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: loop_multi_exit @ 0010167c */

/* WARNING: Removing unreachable block (ram,0x00101768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_multi_exit(int param_1)

{
 int local_40;
 int local_3c;
 int local_38 [12];
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 local_38[2] = 3;
 local_38[3] = 4;
 local_38[0] = 1;
 local_38[1] = 2;
 local_38[6] = 7;
 local_38[7] = 8;
 local_38[4] = 5;
 local_38[5] = 6;
 local_38[10] = 0xb;
 local_38[0xb] = 0xc;
 local_38[8] = 9;
 local_38[9] = 10;
 local_40 = 0;
 do {
 if (2 < local_40) {
 return -1;
 }
 for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
 if (param_1 == local_38[(long)local_40 * 4 + (long)local_3c]) {
 return local_40 * 10 + local_3c;
 }
 }
 local_40 = local_40 + 1;
 } while( true );
}



/* Function: infinite_loop @ 00101778 */

int infinite_loop(int *param_1)

{
 int local_4;
 
 local_4 = 0;
 do {
 if (*param_1 == 1) {
 return local_4;
 }
 local_4 = local_4 + 1;
 } while (local_4 < 0x3e9);
 *param_1 = 1;
 return local_4;
}



/* Function: multi_return @ 001017cc */

int multi_return(uint param_1)

{
 int iVar1;
 
 if ((int)param_1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1 << 1;
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



/* Function: conditional_return @ 00101830 */

int conditional_return(int param_1)

{
 if (param_1 < 1) {
 if (param_1 < 0) {
 param_1 = -param_1;
 }
 else {
 param_1 = 0;
 }
 }
 else {
 param_1 = param_1 << 1;
 }
 return param_1;
}



/* Function: duffs_device @ 00101874 */

uint duffs_device(uint *param_1,uint *param_2,uint param_3)

{
 uint uVar1;
 undefined4 *local_20;
 undefined4 *local_18;
 int local_4;
 
 if ((int)param_3 < 1) {
 param_3 = 0xffffffff;
 }
 else {
 local_4 = param_3 + 0xe;
 if (-1 < (int)(param_3 + 7)) {
 local_4 = param_3 + 7;
 }
 local_4 = local_4 >> 3;
 uVar1 = param_3 & 7;
 if (-1 < (int)-param_3) {
 uVar1 = -(-param_3 & 7);
 }
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 7) goto LAB_00101960;
 if ((int)uVar1 < 8) {
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 6) goto LAB_00101980;
 if ((int)uVar1 < 7) {
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 5) goto LAB_001019a0;
 if ((int)uVar1 < 6) {
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 4) goto LAB_001019c0;
 if ((int)uVar1 < 5) {
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 3) goto LAB_001019e0;
 if ((int)uVar1 < 4) {
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 2) goto LAB_00101a00;
 if ((int)uVar1 < 3) {
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 0) goto LAB_00101940;
 local_20 = param_2;
 local_18 = param_1;
 if (uVar1 == 1) {
 while( true ) {
 *local_18 = *local_20;
 local_4 = local_4 + -1;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
 if (local_4 < 1) break;
LAB_00101940:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
LAB_00101960:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
LAB_00101980:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
LAB_001019a0:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
LAB_001019c0:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
LAB_001019e0:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
LAB_00101a00:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 00101a64 */

int loop_complex_cond(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 undefined4 local_4;
 
 local_c = 0;
 local_4 = 0;
 for (local_8 = param_1; ((local_c < local_8 && (local_4 < 10)) && (0 < local_8));
 local_8 = local_8 + -1) {
 local_c = local_c + 2;
 local_4 = local_4 + 1;
 }
 return local_c + local_8 + local_4;
}



/* Function: loop_modify_var @ 00101ae8 */

int loop_modify_var(int param_1)

{
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
 local_8 = local_8 + local_4;
 if (5 < local_4) {
 local_4 = local_4 + 2;
 }
 }
 return local_8;
}



/* Function: loop_external_state @ 00101b4c */

int loop_external_state(int *param_1)

{
 int local_4;
 
 local_4 = 0;
 do {
 if (*param_1 != 0) {
 return local_4;
 }
 local_4 = local_4 + 1;
 } while (local_4 < 0x65);
 return local_4;
}



/* Function: recursion_factorial @ 00101b98 */

int recursion_factorial(int param_1)

{
 int iVar1;
 
 if (param_1 < 2) {
 iVar1 = 1;
 }
 else {
 iVar1 = recursion_factorial(param_1 + -1);
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}



/* Function: tail_recursion @ 00101bd8 */

ulong tail_recursion(int param_1,uint param_2)

{
 ulong uVar1;
 
 if (param_1 < 2) {
 uVar1 = (ulong)param_2;
 }
 else {
 uVar1 = tail_recursion(param_1 + -1,param_1 * param_2);
 }
 return uVar1;
}



/* Function: indirect_recursion_a @ 00101c24 */

ulong indirect_recursion_a(uint param_1,int param_2)

{
 ulong uVar1;
 
 if (param_2 < 1) {
 uVar1 = (ulong)param_1;
 }
 else if ((param_1 & 1) == 0) {
 uVar1 = indirect_recursion_b((int)param_1 / 2,param_2 + -1);
 }
 else {
 uVar1 = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
 }
 return uVar1;
}



/* Function: indirect_recursion_b @ 00101cb4 */

ulong indirect_recursion_b(uint param_1,int param_2)

{
 ulong uVar1;
 
 if (param_2 < 1) {
 uVar1 = (ulong)param_1;
 }
 else {
 uVar1 = indirect_recursion_a(param_1 + 1,param_2 + -1);
 }
 return uVar1;
}



/* Function: call_func_ptr @ 00101cfc */

int call_func_ptr(code_1arg param_1,undefined4 param_2)

{
 return (*param_1)(param_2);
}



/* Function: double_value @ 00101d20 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00101d38 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_func_ptr_array @ 00101d58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_func_ptr_array(int param_1,undefined4 param_2)

{
 undefined4 uVar1;
 int (*local_20 [3])(int);
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20[0] = PTR_double_value_00114010;
 local_20[1] = PTR_triple_value_00114018;
 local_20[2] = PTR_recursion_factorial_00114020;
 if ((param_1 < 0) || (2 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*local_20[param_1])(param_2);
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard);
 return uVar1;
 }
 return uVar1;
}



/* Function: call_virtual_func @ 00101e04 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00101e20 */

int process_with_callback(long param_1,int param_2,code_1arg param_3)

{
 int iVar1;
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 iVar1 = (*param_3)(*(undefined4 *)(param_1 + (long)local_4 * 4));
 local_8 = local_8 + iVar1;
 }
 return local_8;
}



/* Function: test_control_flow_l2 @ 00101e94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l2(void)

{
 ulong uVar1;
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
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00102cc0);
 uVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar1 & 0xffffffff);
 local_68 = 0;
 uVar1 = infinite_loop(&local_68);
 printf("CF-L2-02 (infinite_loop): %d\n",uVar1 & 0xffffffff);
 uVar1 = multi_return(0xfffffffb);
 printf("CF-L2-03 (multi_return): %d\n",uVar1 & 0xffffffff);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",uVar1 & 0xffffffff);
 uVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",uVar1 & 0xffffffff);
 uVar1 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1 & 0xffffffff);
 uVar1 = conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1 & 0xffffffff);
 uStack_40 = 0x400000003;
 local_48 = 0x200000001;
 uStack_30 = 0x800000007;
 uStack_38 = 0x600000005;
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 uVar1 = duffs_device((uint*)&local_28,(uint*)&local_48,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar1 & 0xffffffff);
 uVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",uVar1 & 0xffffffff);
 uVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",uVar1 & 0xffffffff);
 local_64 = 0;
 uVar1 = loop_external_state(&local_64);
 printf("CF-L2-08 (loop_external_state): %d\n",uVar1 & 0xffffffff);
 uVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar1 & 0xffffffff);
 uVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar1 & 0xffffffff);
 uVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar1 & 0xffffffff);
 uVar1 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",uVar1 & 0xffffffff);
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1 & 0xffffffff);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1 & 0xffffffff);
 local_60 = 0x200000001;
 uStack_58 = 0x400000003;
 local_50 = 5;
 uVar1 = process_with_callback((long)&local_60,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",uVar1 & 0xffffffff);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard);
 }
 return;
}



/* Function: non_local_jump @ 0010210c */

/* Jump buffer for non-local jumps */
static jmp_buf jump_buffer;

int non_local_jump(int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}



/* Function: cpp_exception @ 0010217c */

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



/* Function: op_add @ 001021bc */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 001021dc */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 001021fc */

int op_mul(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: op_div @ 0010221c */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 }
 return iVar1;
}



/* Function: op_mod @ 00102250 */

int op_mod(int param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 param_1 = 0;
 }
 else {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 param_1 = param_1 - iVar1 * param_2;
 }
 return param_1;
}



/* Function: op_and @ 00102290 */

uint op_and(uint param_1,uint param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 001022b0 */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 001022d0 */

uint op_xor(uint param_1,uint param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 001022f0 */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (ulong)(param_2 & 0x1f);
}



/* Function: op_shr @ 00102310 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: large_jump_table @ 00102330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 large_jump_table(int param_1,undefined4 param_2,undefined4 param_3)

{
 undefined4 uVar1;
int (*local_58 [4])(int, int);
int (*local_38)(int, int);
uint (*puStack_30)(uint, uint);
uint (*puStack_28)(uint, uint);
uint (*puStack_20)(uint, uint);
int (*local_18)(int, uint);
int (*puStack_10)(int, uint);
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_58[1] = PTR_op_sub_00114030;
 local_58[0] = PTR_op_add_00114028;
 local_58[3] = PTR_op_div_00114040;
 local_58[2] = PTR_op_mul_00114038;
 puStack_30 = PTR_op_and_00114050;
 local_38 = op_mod;
 puStack_20 = PTR_op_xor_00114060;
 puStack_28 = PTR_op_or_00114058;
 puStack_10 = PTR_op_shr_00114070;
 local_18 = PTR_op_shl_00114068;
 if ((param_1 < 0) || (9 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*(code_2arg)local_58[param_1])(param_2,param_3);
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard);
 }
 return uVar1;
}



void conditional_func_ptr(int param_1,undefined4 param_2)

{
 code_1arg local_8;
 int result;
 
 if (param_1 == 0) {
 local_8 = double_value;
 }
 else if (param_1 == 1) {
 local_8 = triple_value;
 }
 else {
 local_8 = recursion_factorial;
 }
 result = (*local_8)(param_2);
 return;
}



/* Function: state_machine @ 00102450 */

undefined8 state_machine(int param_1,int param_2)

{
 if (param_2 == 3) {
 if (param_1 == 0) {
 return 0;
 }
 return 3;
 }
 if (param_2 < 4) {
 if (param_2 == 2) {
 return 2;
 }
 if (param_2 < 3) {
 if (param_2 == 0) {
 if (param_1 == 1) {
 return 1;
 }
 return 0;
 }
 if (param_2 == 1) {
 if (param_1 == 2) {
 return 2;
 }
 if (param_1 == 99) {
 return 3;
 }
 return 1;
 }
 }
 }
 return 3;
}



/* Function: state_idle @ 00102524 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00102544 */

undefined8 state_processing(int param_1)

{
 undefined8 uVar1;
 
 if (param_1 == 2) {
 uVar1 = 2;
 }
 else if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: state_done @ 00102580 */

undefined8 state_done(int param_1)

{
 return 2;
}



/* Function: state_error @ 00102594 */

undefined8 state_error(int param_1)

{
 undefined8 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 0;
 }
 else {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: fsm_func_table @ 001025bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

/* Function pointer table for FSM */
static undefined8 (*fsm_func_table_ptrs[4])(int) = {
    (undefined8 (*)(int))state_idle,
    state_processing,
    state_done,
    state_error
};

undefined4 fsm_func_table(undefined4 param_1,int param_2)

{
 undefined4 uVar1;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 if ((param_2 < 0) || (3 < param_2)) {
 uVar1 = 3;
 }
 else {
 uVar1 = fsm_func_table_ptrs[param_2](param_1);
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard);
 }
 return uVar1;
}



/* Function: computed_goto @ 00102660 */

/* WARNING: Removing unreachable block (ram,0x00102710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 computed_goto(int *param_1,int param_2)

{
 undefined8 uVar1;
 int (*local_28)(int);
 int (*uStack_27)(int);
 int (*uStack_26)(int);
 int (*uStack_25)(int);
 int (*uStack_24)(int);
 int (*uStack_23)(int);
 int (*uStack_22)(int);
 int (*uStack_21)(int);
 int (*uStack_20)(int);
 int (*uStack_1f)(int);
 int (*uStack_1e)(int);
 int (*uStack_1d)(int);
 int (*uStack_1c)(int);
 int (*uStack_1b)(int);
 int (*uStack_1a)(int);
 int (*uStack_19)(int);
 int (*uStack_18)(int);
 int (*uStack_17)(int);
 int (*uStack_16)(int);
 int (*uStack_15)(int);
 int (*uStack_14)(int);
 int (*uStack_13)(int);
 int (*uStack_12)(int);
 int (*uStack_11)(int);
 int (*uStack_10)(int);
 int (*uStack_f)(int);
 int (*uStack_e)(int);
 int (*uStack_d)(int);
 int (*uStack_c)(int);
 int (*uStack_b)(int);
 int (*uStack_a)(int);
 int (*uStack_9)(int);
 undefined8 local_8;
 
 local_8 = ___stack_chk_guard;
 local_28 = (int (*)(int))DAT_00114098;
 uStack_27 = (int (*)(int))DAT_00114099;
 uStack_26 = (int (*)(int))DAT_0011409a;
 uStack_25 = (int (*)(int))DAT_0011409b;
 uStack_24 = (int (*)(int))DAT_0011409c;
 uStack_23 = (int (*)(int))DAT_0011409d;
 uStack_22 = (int (*)(int))DAT_0011409e;
 uStack_21 = (int (*)(int))DAT_0011409f;
 uStack_20 = (int (*)(int))DAT_001140a0;
 uStack_1f = (int (*)(int))DAT_001140a1;
 uStack_1e = (int (*)(int))DAT_001140a2;
 uStack_1d = (int (*)(int))DAT_001140a3;
 uStack_1c = (int (*)(int))DAT_001140a4;
 uStack_1b = (int (*)(int))DAT_001140a5;
 uStack_1a = (int (*)(int))DAT_001140a6;
 uStack_19 = (int (*)(int))DAT_001140a7;
 uStack_18 = (int (*)(int))DAT_001140a8;
 uStack_17 = (int (*)(int))DAT_001140a9;
 uStack_16 = (int (*)(int))DAT_001140aa;
 uStack_15 = (int (*)(int))DAT_001140ab;
 uStack_14 = (int (*)(int))DAT_001140ac;
 uStack_13 = (int (*)(int))DAT_001140ad;
 uStack_12 = (int (*)(int))DAT_001140ae;
 uStack_11 = (int (*)(int))DAT_001140af;
 uStack_10 = (int (*)(int))DAT_001140b0;
 uStack_f = (int (*)(int))DAT_001140b1;
 uStack_e = (int (*)(int))DAT_001140b2;
 uStack_d = (int (*)(int))DAT_001140b3;
 uStack_c = (int (*)(int))DAT_001140b4;
 uStack_b = (int (*)(int))DAT_001140b5;
 uStack_a = (int (*)(int))DAT_001140b6;
 uStack_9 = (int (*)(int))DAT_001140b7;
 if ((-1 < param_2) && (param_2 < 4)) {
 /* WARNING: Could not recover jumptable at 0x001026d0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (**(code_1arg *)(&local_28 + (long)param_2 * 8))(0);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: obfuscated_cf @ 00102720 */

int obfuscated_cf(int param_1)

{
 undefined4 local_4;
 
 local_4 = param_1;
 if (param_1 * param_1 < -1) {
 local_4 = param_1 * 2 + 1;
 }
 return local_4 << 1;
}



/* Function: opaque_predicate @ 00102768 */

/* WARNING: Removing unreachable block (ram,0x0010278c) */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 001027a4 */

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



/* Function: test_control_flow_l3 @ 001027ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l3(void)

{
 ulong uVar1;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00102f18);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1 & 0xffffffff);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1 & 0xffffffff);
 uVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1 & 0xffffffff);
 uVar1 = cpp_exception(0xfffffffb);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1 & 0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",uVar1 & 0xffffffff);
 conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): 0\n");
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",uVar1 & 0xffffffff);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",uVar1 & 0xffffffff);
 local_18 = 0;
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 uVar1 = computed_goto(&local_18,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1 & 0xffffffff);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1 & 0xffffffff);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",uVar1 & 0xffffffff);
 uVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",uVar1 & 0xffffffff);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard);
 }
 return;
}



/* Function: main @ 00102994 */

undefined8 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Function pointer definitions */
int (*PTR_double_value_00114010)(int) = double_value;
int (*PTR_triple_value_00114018)(int) = triple_value;
int (*PTR_recursion_factorial_00114020)(int) = recursion_factorial;

/* DAT function pointer table for computed_goto */
int (*DAT_0011409e)(int) = (int (*)(int))op_add;
int (*DAT_001140a1)(int) = (int (*)(int))op_sub;
int (*DAT_001140a3)(int) = (int (*)(int))op_mod;
int (*DAT_001140a6)(int) = (int (*)(int))op_and;
int (*DAT_001140a7)(int) = (int (*)(int))op_mul;
int (*DAT_001140aa)(int) = (int (*)(int))op_or;
int (*DAT_001140ac)(int) = (int (*)(int))op_div;
int (*DAT_001140ae)(int) = (int (*)(int))op_xor;
int (*DAT_001140b6)(int) = (int (*)(int))op_shl;

/* Total functions decompiled: 75 */
