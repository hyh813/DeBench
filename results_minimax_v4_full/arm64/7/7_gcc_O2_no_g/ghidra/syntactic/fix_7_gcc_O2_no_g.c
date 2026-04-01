/* Auto-injected type definitions by preprocessor */
#define _GNU_SOURCE
#include <stdint.h>
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
extern jmp_buf jmp_buffer;
extern jmp_buf segv_buffer;

/* Stack canary variables */
extern uintptr_t __stack_chk_guard;
extern uintptr_t ___stack_chk_guard;

/* Forward declarations */
void test_obf_opt_edge(void);

/* External CRT symbols */
extern void *__dso_handle;

/* Global variables */
uint8_t completed_0;
int div_zero_caught;
int segv_caught;

/* Stack canary - define the double-underscore version */
uintptr_t ___stack_chk_guard = 0;

/* Jump buffers for signal handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* CRT stub functions - empty implementations */
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __cxa_finalize(void *arg) { (void)arg; }

/* Encrypted string for string encryption test */
char encrypted_0[31] = "V}~uxj\x1dgfl\x1dZgslexi1g\x1a\x1e\x12\x14\x11\x16\x10\x15\x14\x17\x10\x16\x1b\x1a\x12\x13\x16\x1c\x12";

/* String literals (DAT_* from binary) */
const char *DAT_00101328 = "Testing obfuscated optimizations:\n";
const char *DAT_00101358 = "Opaque predicate: %d\n";
const char *DAT_00101378 = "Instruction substitution: %u\n";
const char *DAT_00101398 = "String encryption: %u\n";
const char *DAT_001013b8 = "Tail call optimization: %u\n";
const char *DAT_001013d8 = "Non-tail call: %u\n";
const char *DAT_00101408 = "Vectorized loop: %u\n";
const char *DAT_00101430 = "Link-time optimization: %u\n";
const char *DAT_00101458 = "Division by zero: %d\n";
const char *DAT_00101478 = "Null pointer deref: %d\n";
const char *DAT_00101498 = "Buffer overflow: %u\n";
const char *DAT_001014b8 = "Integer overflow: %u\n";
const char *DAT_001014d8 = "Undefined behavior: %u\n";
const char *DAT_00101510 = "Implementation-defined: %u\n";
const char *DAT_00101530 = "All tests completed!\n";

/* External CRT functions */
void __cxa_finalize(void *);
void deregister_tm_clones(void);
void register_tm_clones(void);

/* Stack_chk_fail declaration */
void __stack_chk_fail(void);
int __printf_chk(int flag, const char *format, ...);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100860 @ 00100860 */
/* NOTE: This function intentionally causes a crash (null pointer dereference) - likely test code */

void FUN_00100860(void)

{
 /* Dereferencing null function pointer - will crash */
 void (*func)(void) = (void (*)(void))0;
 func();
 return;
}



/* Function: main @ 00100980 */

uint64_t main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a7c @ 00100a7c */

void FUN_00100a7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00100ae0 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer, 1);
}



/* Function: segv_handler @ 00100b00 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer, 1);
}



/* Function: param_fake_branch @ 00100b20 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 00100b24 */

uint64_t call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100b30 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar3 = param_1;
 if (iVar1 != 0) {
 do {
 iVar4 = iVar2;
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 } while (iVar2 != 0);
 if (param_1 * 2 + param_1 * param_1 + 1 == iVar1 * iVar1 && iVar4 == 1) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00100b90 */

uint32_t call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 uint32_t uVar3;
 int iVar4;
 
 iVar1 = 6;
 iVar4 = 5;
 do {
 iVar2 = iVar1;
 iVar1 = 0;
 if (iVar2 != 0) {
 iVar1 = iVar4 / iVar2;
 }
 iVar1 = iVar4 - iVar1 * iVar2;
 iVar4 = iVar2;
 } while (iVar1 != 0);
 uVar3 = 0x14;
 if (iVar2 != 1) {
 uVar3 = 0x23;
 }
 return uVar3;
}



/* Function: param_instruction_substitution @ 00100bc0 */

int param_instruction_substitution(uint32_t param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100be4 */

uint64_t call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: FUN_00100bec @ 00100bec */

uint8_t * FUN_00100bec(char *param_1,char *param_2,size_t param_3,uint8_t param_4)

{
 uint8_t bVar1;
 uint8_t *pbVar2;
 uint8_t *pbVar3;
 
 pbVar2 = (uint8_t *)strncpy(param_2,param_1,param_3);
 pbVar2[param_3 - 1] = 0;
 bVar1 = *pbVar2;
 pbVar3 = pbVar2;
 while (bVar1 != 0) {
 *pbVar3 = param_4 ^ bVar1;
 pbVar3 = pbVar3 + 1;
 bVar1 = *pbVar3;
 }
 return pbVar2;
}



/* Function: decrypt_string @ 00100bf0 */

uint8_t * decrypt_string(char *param_1,char *param_2,size_t param_3,uint8_t param_4)

{
 uint8_t bVar1;
 uint8_t *pbVar2;
 uint8_t *pbVar3;
 
 pbVar2 = (uint8_t *)strncpy(param_2,param_1,param_3);
 pbVar2[param_3 - 1] = 0;
 bVar1 = *pbVar2;
 pbVar3 = pbVar2;
 while (bVar1 != 0) {
 *pbVar3 = param_4 ^ bVar1;
 pbVar3 = pbVar3 + 1;
 bVar1 = *pbVar3;
 }
 return pbVar2;
}



/* Function: param_string_encryption @ 00100c50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_string_encryption(void)

{
 uint8_t bVar1;
 uint8_t *__s;
 uint8_t *pbVar2;
 size_t sVar3;
 uint8_t local_28 [31];
 uint8_t local_9;
 long local_8;
 
 local_8 = __stack_chk_guard;
 __s = (uint8_t *)strncpy((char *)local_28,encrypted_0,0x1f);
 local_9 = 0;
 pbVar2 = __s;
 bVar1 = local_28[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 sVar3 = strlen((char *)__s);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_tail_call_optimized @ 00100cf4 */

int param_tail_call_optimized(int param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_1) {
 do {
 iVar1 = param_1 + -1;
 param_2 = param_2 + param_1;
 param_1 = iVar1;
 } while (iVar1 != 0);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00100d20 */

uint64_t call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100d30 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 if (0 < param_1) {
 do {
 iVar1 = param_1 + -1;
 iVar2 = iVar2 + param_1;
 param_1 = iVar1;
 } while (iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_non_tail_call @ 00100d54 */

uint64_t call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100d60 */

int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)

{
 long lVar1;
 int iVar2;
 long lVar3;
 
 if (0 < param_4) {
 lVar3 = 0;
 do {
 *(int *)(param_3 + lVar3 * 4) = *(int *)(param_1 + lVar3 * 4) + *(int *)(param_2 + lVar3 * 4);
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < param_4);
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *(int *)(param_3 + lVar1);
 } while ((int)lVar3 < param_4);
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00100dc0 */

/* WARNING: Removing unreachable block (ram,0x00100e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_vectorized_loop(void)

{
 long lVar1;
 long lVar2;
 int aiStack_6c [27];
 
 aiStack_6c[0x11] = 0;
 aiStack_6c[0x12] = 0;
 aiStack_6c[0x13] = 0;
 aiStack_6c[0x14] = 0;
 aiStack_6c[0x15] = 0;
 aiStack_6c[0x16] = 0;
 aiStack_6c[0x17] = 0;
 aiStack_6c[0x18] = 0;
 aiStack_6c[3] = 3;
 aiStack_6c[4] = 4;
 aiStack_6c[1] = 1;
 aiStack_6c[2] = 2;
 aiStack_6c[7] = 7;
 aiStack_6c[8] = 8;
 aiStack_6c[5] = 5;
 aiStack_6c[6] = 6;
 aiStack_6c[0xb] = 6;
 aiStack_6c[0xc] = 5;
 aiStack_6c[9] = 8;
 aiStack_6c[10] = 7;
 aiStack_6c[0xf] = 2;
 aiStack_6c[0x10] = 1;
 aiStack_6c[0xd] = 4;
 aiStack_6c[0xe] = 3;
 lVar2 = 1;
 do {
 lVar1 = lVar2 + 1;
 aiStack_6c[lVar2 + 0x10] = aiStack_6c[lVar2] + aiStack_6c[lVar2 + 8];
 lVar2 = lVar1;
 } while (lVar1 != 9);
 lVar2 = 1;
 do {
 lVar2 = lVar2 + 1;
 } while (lVar2 != 9);
 return;
}



/* Function: param_link_time_optimization @ 00100e90 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100ea0 */

uint64_t call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00100eb0 */

int param_division_by_zero(int param_1)

{
 int iVar1;
 
 signal(SIGFPE, div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = 10 / param_1;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: FUN_00100efc @ 00100efc */

int FUN_00100efc(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 return iVar1 + iVar2;
}



/* Function: call_division_by_zero @ 00100f00 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(SIGFPE, SIG_DFL);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00100f40 */

uint32_t param_null_pointer_deref(uint32_t *param_1)

{
 int iVar1;
 uint32_t uVar2;
 
 signal(SIGSEGV, segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00100f90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 uint32_t local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(SIGSEGV, NULL);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 00101010 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00101014 */

uint32_t param_buffer_overflow_heap(uint32_t param_1)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 free(__ptr);
 }
 return param_1;
}



/* Function: FUN_0010104c @ 0010104c */

uint64_t FUN_0010104c(void)

{
 void *__ptr;
 uint64_t uVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar1 = 8;
 }
 else {
 free(__ptr);
 uVar1 = 0x1e;
 }
 return uVar1;
}



/* Function: call_buffer_overflow @ 00101050 */

uint64_t call_buffer_overflow(void)

{
 void *__ptr;
 uint64_t uVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar1 = 8;
 }
 else {
 free(__ptr);
 uVar1 = 0x1e;
 }
 return uVar1;
}



/* Function: param_integer_overflow @ 00101080 */

int param_integer_overflow(uint32_t param_1,uint32_t param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if (0 < (int)param_1 && 0 < (int)param_2) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if ((int)(param_1 & param_2) < 0 && 0 < iVar1) {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 001010b4 */

uint64_t call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 001010c0 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 001010d0 */

uint64_t call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 001010e0 */

uint64_t param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 001010f0 */

uint64_t call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00101100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_obf_opt_edge(void)

{
 int iVar1;
 uint32_t uVar2;
 int iVar3;
 int iVar4;
 void *__ptr;
 uint64_t uVar5;
 uint32_t local_c;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_00101328);
 printf(DAT_00101358,10);
 iVar3 = 6;
 iVar4 = 5;
 do {
 iVar1 = iVar3;
 iVar3 = 0;
 if (iVar1 != 0) {
 iVar3 = iVar4 / iVar1;
 }
 iVar3 = iVar4 - iVar3 * iVar1;
 iVar4 = iVar1;
 } while (iVar3 != 0);
 uVar2 = 0x14;
 if (iVar1 != 1) {
 uVar2 = 0x23;
 }
 __printf_chk(1,DAT_00101378,uVar2);
 __printf_chk(1,DAT_00101398,0xe1);
 param_string_encryption();
 uVar2 = 0;
 __printf_chk(1,DAT_001013b8,uVar2);
 __printf_chk(1,DAT_001013d8,0x7a314);
 __printf_chk(1,DAT_00101408,0x13ba);
 call_vectorized_loop();
 uVar2 = 0;
 __printf_chk(1,DAT_00101430,uVar2);
 __printf_chk(1,DAT_00101458,0x14);
 iVar3 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 __printf_chk(1,DAT_00101478,iVar3 + iVar4);
 local_c = 0x2a;
 iVar3 = param_null_pointer_deref(&local_c);
 iVar4 = param_null_pointer_deref(0);
 signal(SIGSEGV, NULL);
 __printf_chk(1,DAT_00101498,iVar3 + iVar4);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar5 = 8;
 }
 else {
 free(__ptr);
 uVar5 = 0x1e;
 }
 __printf_chk(1,DAT_001014b8,uVar5);
 __printf_chk(1,DAT_001014d8,2000000000);
 __printf_chk(1,DAT_00101510,10);
 if (local_8 - __stack_chk_guard == 0) {
 __printf_chk(1,DAT_00101530,0x30);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
