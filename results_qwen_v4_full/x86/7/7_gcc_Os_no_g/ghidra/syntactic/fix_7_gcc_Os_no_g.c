/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void undefined;
typedef void (*__sighandler_t)(int);
typedef void (*code)(void);

/* Include standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Global variables for signal handlers */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Global data declarations */
char encrypted_0[32];
undefined4 DAT_00012020[8];
undefined4 DAT_00012040[8];
char DAT_00012060[64];
char DAT_0001208d[64];
char DAT_000120a9[64];
char DAT_000120c5[64];
char DAT_000120e2[64];
char DAT_000120fe[64];
char DAT_00012128[64];
char DAT_0001214d[64];
char DAT_00012173[64];
char DAT_00012193[64];
char DAT_000121af[64];
char DAT_000121cc[64];
char DAT_000121e9[64];
char DAT_0001221a[64];
char DAT_00012237[64];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: main @ 000111b0 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011200 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011339 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001133d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: div_zero_handler @ 00011341 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 0001136f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 0001139d */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 000113a9 */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 000113b3 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = param_1 + 1;
 iVar2 = param_1;
 iVar4 = iVar1;
 while (iVar4 != 0) {
 iVar3 = iVar2 % iVar4;
 iVar2 = iVar4;
 iVar4 = iVar3;
 }
 if ((iVar2 != 1) ||
 (iVar2 = param_1 * 2 + 10, param_1 * 2 + 1 + param_1 * param_1 != iVar1 * iVar1)) {
 iVar2 = param_1 * 3 + 0x14;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 000113fd */

void call_opaque_predicate(void)

{
 param_opaque_predicate(5);
 return;
}



/* Function: param_instruction_substitution @ 00011413 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00011434 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 0001143e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte *pbVar1;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (pbVar1 = param_2; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
 *pbVar1 = *pbVar1 ^ param_4;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00011491 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_string_encryption(void)

{
 size_t sVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 decrypt_string(&encrypted_0,local_30,0x20,0x5a);
 sVar1 = strlen(local_30);
 iVar2 = sVar1 + (int)local_30[0];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_tail_call_optimized @ 000114f6 */

int param_tail_call_optimized(int param_1,int param_2)

{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 0001150e */

undefined4 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00011518 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00011531 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 00011547 */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 int iVar1;
 int iVar2;
 
 for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
 *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
 }
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 00011584 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void call_vectorized_loop(void)

{
 int iVar1;
 undefined4 *puVar2;
 undefined4 *puVar3;
 int in_GS_OFFSET;
 undefined4 local_70 [8];
 undefined4 local_50 [8];
 undefined4 local_30 [8];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puVar2 = &DAT_00012020;
 puVar3 = local_70;
 for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar3 = *puVar2;
 puVar2 = puVar2 + 1;
 puVar3 = puVar3 + 1;
 }
 puVar2 = &DAT_00012040;
 puVar3 = local_50;
 for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar3 = *puVar2;
 puVar2 = puVar2 + 1;
 puVar3 = puVar3 + 1;
 }
 puVar2 = local_30;
 for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 param_vectorized_loop(local_70,local_50,local_30,8);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_link_time_optimization @ 000115fd */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 0001160e */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00011618 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_division_by_zero(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = (undefined4)(10 / (long long)param_1);
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00011668 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 000116ad */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 000116f9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined4 local_24;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x11708;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 iVar1 = iVar1 + iVar2;
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011763 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 0001176f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 undefined4 uVar1;
 
 __ptr = malloc(0x10);
 uVar1 = 0xfffffffe;
 if (__ptr != (void *)0x0) {
 free(__ptr);
 uVar1 = param_1;
 }
 return uVar1;
}



/* Function: call_buffer_overflow @ 000117ae */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 000117c4 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1) || ((int)param_2 < 1)) {
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 000117f8 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00011802 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00011810 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 0001181a */

undefined4 param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 00011824 */

undefined4 call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 0001182e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012060);
 __printf_chk(1,&DAT_0001208d,10);
 call_opaque_predicate();
 __printf_chk(1,&DAT_000120a9,0);
 __printf_chk(1,&DAT_000120c5,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_000120e2,uVar1);
 uVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_000120fe,uVar1);
 call_non_tail_call();
 __printf_chk(1,&DAT_00012128,0);
 call_vectorized_loop();
 __printf_chk(1,&DAT_0001214d,0);
 __printf_chk(1,&DAT_00012173,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_00012193,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_000121af,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_000121cc,uVar1);
 __printf_chk(1,&DAT_000121e9,2000000000);
 __printf_chk(1,&DAT_0001221a,10);
 __printf_chk(1,&DAT_00012237,0x2b);
 return;
}



/* Function: __stack_chk_fail_local @ 00011990 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
