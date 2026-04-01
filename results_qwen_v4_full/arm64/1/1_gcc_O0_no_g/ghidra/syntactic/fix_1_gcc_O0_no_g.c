/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <setjmp.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef int undefined4;
typedef long undefined8;
typedef unsigned char undefined1;
typedef void undefined;
typedef undefined4 (*code)(undefined4);
typedef undefined4 (*code2)(undefined4,undefined4);

/* Stack protection globals */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;

/* CRT and C++ runtime declarations */
extern char completed_0;
extern void *__dso_handle;
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);

/* Data symbols */
extern char DAT_001029e8[];
extern char DAT_00102cc0[];
extern char DAT_00102f18[];

/* Define DAT_ string symbols */
char DAT_001029e8[] = "=== Control Flow Level 1 Tests ===";
char DAT_00102cc0[] = "=== Control Flow Level 2 Tests ===";
char DAT_00102f18[] = "=== Control Flow Level 3 Tests ===";

/* Jump buffer for setjmp/longjmp */
extern jmp_buf jump_buffer;

/* Define jump_buffer */
jmp_buf jump_buffer;

/* jmp_buf tag structure for setjmp/longjmp */
typedef struct {
 long __jmpbuf[8];
 int __mask_was_saved;
 long __saved_mask;
} __jmp_buf_tag;

/* Function pointer table symbols */
extern void *PTR_double_value_00114010;
extern void *PTR_triple_value_00114018;
extern void *PTR_recursion_factorial_00114020;
extern void *PTR_op_add_00114028;
extern void *PTR_op_sub_00114030;
extern void *PTR_op_mul_00114038;
extern void *PTR_op_div_00114040;
extern void *PTR_op_mod_00114048;
extern void *PTR_op_and_00114050;
extern void *PTR_op_or_00114058;
extern void *PTR_op_xor_00114060;
extern void *PTR_op_shl_00114068;
extern void *PTR_op_shr_00114070;

/* Forward declarations for functions referenced in pointer table */
extern int double_value(int param_1);
extern int triple_value(int param_1);
extern int recursion_factorial(int param_1);
extern int op_add(int param_1,int param_2);
extern int op_sub(int param_1,int param_2);
extern int op_mul(int param_1,int param_2);
extern int op_div(int param_1,int param_2);
extern int op_mod(int param_1,int param_2);
extern uint op_and(uint param_1,uint param_2);
extern uint op_or(uint param_1,uint param_2);
extern uint op_xor(uint param_1,uint param_2);
extern int op_shl(int param_1,uint param_2);
extern int op_shr(int param_1,uint param_2);

/* Forward declarations for state machine functions */
extern int state_idle(int param_1);
extern int state_processing(int param_1);
extern int state_done(void);
extern int state_error(int param_1);

/* Define function pointer symbols */
void *PTR_double_value_00114010 = (void *)double_value;
void *PTR_triple_value_00114018 = (void *)triple_value;
void *PTR_recursion_factorial_00114020 = (void *)recursion_factorial;
void *PTR_op_add_00114028 = (void *)op_add;
void *PTR_op_sub_00114030 = (void *)op_sub;
void *PTR_op_mul_00114038 = (void *)op_mul;
void *PTR_op_div_00114040 = (void *)op_div;
void *PTR_op_mod_00114048 = (void *)op_mod;
void *PTR_op_and_00114050 = (void *)op_and;
void *PTR_op_or_00114058 = (void *)op_or;
void *PTR_op_xor_00114060 = (void *)op_xor;
void *PTR_op_shl_00114068 = (void *)op_shl;
void *PTR_op_shr_00114070 = (void *)op_shr;

/* Define DAT_ symbols as function pointers for fsm_func_table */
void *DAT_00114078 = (void *)state_idle;
void *DAT_00114079 = (void *)state_processing;
void *DAT_0011407a = (void *)state_done;
void *DAT_0011407b = (void *)state_error;
void *DAT_0011407c = (void *)state_idle;
void *DAT_0011407d = (void *)state_processing;
void *DAT_0011407e = (void *)state_done;
void *DAT_0011407f = (void *)state_error;
void *DAT_00114080 = (void *)state_idle;
void *DAT_00114081 = (void *)state_processing;
void *DAT_00114082 = (void *)state_done;
void *DAT_00114083 = (void *)state_error;
void *DAT_00114084 = (void *)state_idle;
void *DAT_00114085 = (void *)state_processing;
void *DAT_00114086 = (void *)state_done;
void *DAT_00114087 = (void *)state_error;
void *DAT_00114088 = (void *)state_idle;
void *DAT_00114089 = (void *)state_processing;
void *DAT_0011408a = (void *)state_done;
void *DAT_0011408b = (void *)state_error;
void *DAT_0011408c = (void *)state_idle;
void *DAT_0011408d = (void *)state_processing;
void *DAT_0011408e = (void *)state_done;
void *DAT_0011408f = (void *)state_error;
void *DAT_00114090 = (void *)state_idle;
void *DAT_00114091 = (void *)state_processing;
void *DAT_00114092 = (void *)state_done;
void *DAT_00114093 = (void *)state_error;
void *DAT_00114094 = (void *)state_idle;
void *DAT_00114095 = (void *)state_processing;
void *DAT_00114096 = (void *)state_done;
void *DAT_00114097 = (void *)state_error;

/* Define DAT_ symbols as function pointers for computed_goto */
void *DAT_00114098 = (void *)state_idle;
void *DAT_00114099 = (void *)state_processing;
void *DAT_0011409a = (void *)state_done;
void *DAT_0011409b = (void *)state_error;
void *DAT_0011409c = (void *)state_idle;
void *DAT_0011409d = (void *)state_processing;
void *DAT_0011409e = (void *)state_done;
void *DAT_0011409f = (void *)state_error;
void *DAT_001140a0 = (void *)state_idle;
void *DAT_001140a1 = (void *)state_processing;
void *DAT_001140a2 = (void *)state_done;
void *DAT_001140a3 = (void *)state_error;
void *DAT_001140a4 = (void *)state_idle;
void *DAT_001140a5 = (void *)state_processing;
void *DAT_001140a6 = (void *)state_done;
void *DAT_001140a7 = (void *)state_error;
void *DAT_001140a8 = (void *)state_idle;
void *DAT_001140a9 = (void *)state_processing;
void *DAT_001140aa = (void *)state_done;
void *DAT_001140ab = (void *)state_error;
void *DAT_001140ac = (void *)state_idle;
void *DAT_001140ad = (void *)state_processing;
void *DAT_001140ae = (void *)state_done;
void *DAT_001140af = (void *)state_error;
void *DAT_001140b0 = (void *)state_idle;
void *DAT_001140b1 = (void *)state_processing;
void *DAT_001140b2 = (void *)state_done;
void *DAT_001140b3 = (void *)state_error;
void *DAT_001140b4 = (void *)state_idle;
void *DAT_001140b5 = (void *)state_processing;
void *DAT_001140b6 = (void *)state_done;
void *DAT_001140b7 = (void *)state_error;

extern void *DAT_00114078;
extern void *DAT_00114079;
extern void *DAT_0011407a;
extern void *DAT_0011407b;
extern void *DAT_0011407c;
extern void *DAT_0011407d;
extern void *DAT_0011407e;
extern void *DAT_0011407f;
extern void *DAT_00114080;
extern void *DAT_00114081;
extern void *DAT_00114082;
extern void *DAT_00114083;
extern void *DAT_00114084;
extern void *DAT_00114085;
extern void *DAT_00114086;
extern void *DAT_00114087;
extern void *DAT_00114088;
extern void *DAT_00114089;
extern void *DAT_0011408a;
extern void *DAT_0011408b;
extern void *DAT_0011408c;
extern void *DAT_0011408d;
extern void *DAT_0011408e;
extern void *DAT_0011408f;
extern void *DAT_00114090;
extern void *DAT_00114091;
extern void *DAT_00114092;
extern void *DAT_00114093;
extern void *DAT_00114094;
extern void *DAT_00114095;
extern void *DAT_00114096;
extern void *DAT_00114097;
extern void *DAT_00114098;
extern void *DAT_00114099;
extern void *DAT_0011409a;
extern void *DAT_0011409b;
extern void *DAT_0011409c;
extern void *DAT_0011409d;
extern void *DAT_0011409e;
extern void *DAT_0011409f;
extern void *DAT_001140a0;
extern void *DAT_001140a1;
extern void *DAT_001140a2;
extern void *DAT_001140a3;
extern void *DAT_001140a4;
extern void *DAT_001140a5;
extern void *DAT_001140a6;
extern void *DAT_001140a7;
extern void *DAT_001140a8;
extern void *DAT_001140a9;
extern void *DAT_001140aa;
extern void *DAT_001140ab;
extern void *DAT_001140ac;
extern void *DAT_001140ad;
extern void *DAT_001140ae;
extern void *DAT_001140af;
extern void *DAT_001140b0;
extern void *DAT_001140b1;
extern void *DAT_001140b2;
extern void *DAT_001140b3;
extern void *DAT_001140b4;
extern void *DAT_001140b5;
extern void *DAT_001140b6;
extern void *DAT_001140b7;

/* Define completed_0 */
char completed_0 = '\0';

/* Define ___stack_chk_guard */
long ___stack_chk_guard = 0;

/* Forward declarations */
extern ulong indirect_recursion_b(uint param_1,int param_2);

/* Stack check fail declaration */
extern void __stack_chk_fail(void *guard, undefined4 ret, undefined4 param_3, long diff);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100930 @ 00100930 */

void FUN_00100930(void)

{
 (*(code *)(undefined *)0x0)((undefined4)0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones */
void deregister_tm_clones(void)
{
 return;
}





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

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

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

undefined4 call_func_ptr(code *param_1,undefined4 param_2)

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
 undefined *local_20 [3];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20[0] = PTR_double_value_00114010;
 local_20[1] = PTR_triple_value_00114018;
 local_20[2] = PTR_recursion_factorial_00114020;
 if ((param_1 < 0) || (2 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*(code *)local_20[param_1])(param_2);
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
 }
 return uVar1;
}



/* Function: call_virtual_func @ 00101e04 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00101e20 */

int process_with_callback(undefined4 *param_1,int param_2,code *param_3)

{
 int iVar1;
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 iVar1 = (*param_3)(param_1[local_4]);
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
 uVar1 = duffs_device((undefined4 *)&local_28,(undefined4 *)&local_48,8);
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
 uVar1 = call_func_ptr((code *)double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",uVar1 & 0xffffffff);
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1 & 0xffffffff);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1 & 0xffffffff);
 local_60 = 0x200000001;
 uStack_58 = 0x400000003;
 local_50 = 5;
 uVar1 = process_with_callback((undefined4 *)&local_60,5,(code *)double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",uVar1 & 0xffffffff);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: non_local_jump @ 0010210c */

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
 code2 *local_58 [4];
 code2 *local_38;
 code2 *puStack_30;
 code2 *puStack_28;
 code2 *puStack_20;
 code2 *local_18;
 code2 *puStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_58[1] = (code2 *)PTR_op_sub_00114030;
 local_58[0] = (code2 *)PTR_op_add_00114028;
 local_58[3] = (code2 *)PTR_op_div_00114040;
 local_58[2] = (code2 *)PTR_op_mul_00114038;
 puStack_30 = (code2 *)PTR_op_and_00114050;
 local_38 = (code2 *)PTR_op_mod_00114048;
 puStack_20 = (code2 *)PTR_op_xor_00114060;
 puStack_28 = (code2 *)PTR_op_or_00114058;
 puStack_10 = (code2 *)PTR_op_shr_00114070;
 local_18 = (code2 *)PTR_op_shl_00114068;
 if ((param_1 < 0) || (9 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*local_58[param_1])(param_2,param_3);
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
 }
 return uVar1;
}



/* Function: conditional_func_ptr @ 001023e8 */

undefined4 conditional_func_ptr(int param_1,undefined4 param_2)

{
 code *local_8;
 
 if (param_1 == 0) {
 local_8 = (code *)double_value;
 }
 else if (param_1 == 1) {
 local_8 = (code *)triple_value;
 }
 else {
 local_8 = (code *)recursion_factorial;
 }
 return (*local_8)(param_2);
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

int state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00102544 */

int state_processing(int param_1)

{
 int uVar1;
 
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

int state_done(void)

{
 return 2;
}



/* Function: state_error @ 00102594 */

int state_error(int param_1)

{
 int uVar1;
 
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

undefined4 fsm_func_table(undefined4 param_1,int param_2)

{
 undefined4 uVar1;
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
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_28 = (code *)DAT_00114078;
 uStack_27 = (code *)DAT_00114079;
 uStack_26 = (code *)DAT_0011407a;
 uStack_25 = (code *)DAT_0011407b;
 uStack_24 = (code *)DAT_0011407c;
 uStack_23 = (code *)DAT_0011407d;
 uStack_22 = (code *)DAT_0011407e;
 uStack_21 = (code *)DAT_0011407f;
 uStack_20 = (code *)DAT_00114080;
 uStack_1f = (code *)DAT_00114081;
 uStack_1e = (code *)DAT_00114082;
 uStack_1d = (code *)DAT_00114083;
 uStack_1c = (code *)DAT_00114084;
 uStack_1b = (code *)DAT_00114085;
 uStack_1a = (code *)DAT_00114086;
 uStack_19 = (code *)DAT_00114087;
 uStack_18 = (code *)DAT_00114088;
 uStack_17 = (code *)DAT_00114089;
 uStack_16 = (code *)DAT_0011408a;
 uStack_15 = (code *)DAT_0011408b;
 uStack_14 = (code *)DAT_0011408c;
 uStack_13 = (code *)DAT_0011408d;
 uStack_12 = (code *)DAT_0011408e;
 uStack_11 = (code *)DAT_0011408f;
 uStack_10 = (code *)DAT_00114090;
 uStack_f = (code *)DAT_00114091;
 uStack_e = (code *)DAT_00114092;
 uStack_d = (code *)DAT_00114093;
 uStack_c = (code *)DAT_00114094;
 uStack_b = (code *)DAT_00114095;
 uStack_a = (code *)DAT_00114096;
 uStack_9 = (code *)DAT_00114097;
 if ((param_2 < 0) || (3 < param_2)) {
 uVar1 = 3;
 }
 else {
 uVar1 = (*((&local_28)[param_2]))(param_1);
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
 }
 return uVar1;
}



/* Function: computed_goto @ 00102660 */

/* WARNING: Removing unreachable block (ram,0x00102710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 computed_goto(undefined8 param_1,int param_2)

{
 undefined8 uVar1;
 void *local_28;
 void *uStack_27;
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
 local_28 = DAT_00114098;
 uStack_27 = DAT_00114099;
 uStack_26 = DAT_0011409a;
 uStack_25 = DAT_0011409b;
 uStack_24 = DAT_0011409c;
 uStack_23 = DAT_0011409d;
 uStack_22 = DAT_0011409e;
 uStack_21 = DAT_0011409f;
 uStack_20 = DAT_001140a0;
 uStack_1f = DAT_001140a1;
 uStack_1e = DAT_001140a2;
 uStack_1d = DAT_001140a3;
 uStack_1c = DAT_001140a4;
 uStack_1b = DAT_001140a5;
 uStack_1a = DAT_001140a6;
 uStack_19 = DAT_001140a7;
 uStack_18 = DAT_001140a8;
 uStack_17 = DAT_001140a9;
 uStack_16 = DAT_001140aa;
 uStack_15 = DAT_001140ab;
 uStack_14 = DAT_001140ac;
 uStack_13 = DAT_001140ad;
 uStack_12 = DAT_001140ae;
 uStack_11 = DAT_001140af;
 uStack_10 = DAT_001140b0;
 uStack_f = DAT_001140b1;
 uStack_e = DAT_001140b2;
 uStack_d = DAT_001140b3;
 uStack_c = DAT_001140b4;
 uStack_b = DAT_001140b5;
 uStack_a = DAT_001140b6;
 uStack_9 = DAT_001140b7;
 if ((-1 < param_2) && (param_2 < 4)) {
 /* WARNING: Could not recover jumptable at 0x001026d0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (**(code **)(&local_28 + (long)param_2 * 8))((undefined4)param_1);
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
 uVar1 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",uVar1 & 0xffffffff);
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",uVar1 & 0xffffffff);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",uVar1 & 0xffffffff);
 local_18 = 0;
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 uVar1 = computed_goto(local_10,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1 & 0xffffffff);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1 & 0xffffffff);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",uVar1 & 0xffffffff);
 uVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",uVar1 & 0xffffffff);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,0,local_8 - ___stack_chk_guard);
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




/* Total functions decompiled: 75 */
