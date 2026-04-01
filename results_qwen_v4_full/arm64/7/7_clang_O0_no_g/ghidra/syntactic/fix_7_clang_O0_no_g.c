#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Forward declarations for C++ runtime (CRT) */
extern void *__dso_handle;

/* Additional type definitions for decompiled code */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t byte;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef void undefined;
typedef void (*code)(void);
typedef uint8_t undefined1;



/* Declare global variables for signal handling */
extern int lto_target_func(int);

/* Define global variables */
static char completed_0 = '\0';
static jmp_buf segv_buffer;
static jmp_buf jmp_buffer;
static int div_zero_caught = 0;
static int segv_caught = 0;
static char param_string_encryption_encrypted[] = "encrypted_string_data_here";

/* CRT stub function implementations */
static void __cxa_finalize(void *handle) { (void)handle; }
static void deregister_tm_clones(void) { }
static void register_tm_clones(void) { }

/* Declare format string data used by printf */
extern const char DAT_001015f1[];
extern const char DAT_0010161f[];
extern const char DAT_0010163b[];
extern const char DAT_00101657[];
extern const char DAT_00101674[];
extern const char DAT_00101690[];
extern const char DAT_001016ba[];
extern const char DAT_001016df[];
extern const char DAT_00101705[];
extern const char DAT_00101725[];
extern const char DAT_00101741[];
extern const char DAT_0010175e[];
extern const char DAT_0010177b[];
extern const char DAT_001017ac[];
extern const char DAT_001017c9[];

/* Define format string data */
const char DAT_001015f1[] = "Result: %d\n";
const char DAT_0010161f[] = "Result: %d\n";
const char DAT_0010163b[] = "Result: %d\n";
const char DAT_00101657[] = "Result: %d\n";
const char DAT_00101674[] = "Result: %d\n";
const char DAT_00101690[] = "Result: %d\n";
const char DAT_001016ba[] = "Result: %d\n";
const char DAT_001016df[] = "Result: %d\n";
const char DAT_00101705[] = "Result: %d\n";
const char DAT_00101725[] = "Result: %d\n";
const char DAT_00101741[] = "Result: %d\n";
const char DAT_0010175e[] = "Result: %d\n";
const char DAT_0010177b[] = "Result: %d\n";
const char DAT_001017ac[] = "Result: %d\n";
const char DAT_001017c9[] = "Result: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100760 @ 00100760 */

void FUN_00100760(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008fc @ 001008fc */

void FUN_001008fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00100954 */

/* WARNING: Removing unreachable block (ram,0x001009b8) */

int param_fake_branch(int param_1)

{
 int local_18;
 
 local_18 = param_1;
 if (param_1 * param_1 < 0) {
 local_18 = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_18;
}



/* Function: call_fake_branch @ 001009dc */

int call_fake_branch(int param_1)

{
 return param_fake_branch(param_1);
}



/* Function: param_opaque_predicate @ 001009f4 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_4;
 
 local_14 = param_1 + 1;
 local_10 = param_1;
 while (local_14 != 0) {
 iVar1 = 0;
 if (local_14 != 0) {
 iVar1 = local_10 / local_14;
 }
 iVar1 = local_10 - iVar1 * local_14;
 local_10 = local_14;
 local_14 = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_10 == 1)) {
 local_4 = param_1 * 2 + 10;
 }
 else {
 local_4 = param_1 * 3 + 0x14;
 }
 return local_4;
}



/* Function: call_opaque_predicate @ 00100b20 */

int call_opaque_predicate(int param_1)

{
 return param_opaque_predicate(param_1);
}



/* Function: param_instruction_substitution @ 00100b38 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100bb4 */

int call_instruction_substitution(int param_1)

{
 return param_instruction_substitution(param_1);
}



/* Function: decrypt_string @ 00100bcc */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte *local_38;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_38 = param_2; *local_38 != 0; local_38 = local_38 + 1) {
 *local_38 = *local_38 ^ param_4;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00100c5c */

ulong param_string_encryption(void)

{
 size_t sVar1;
 byte local_30 [32];
 
 decrypt_string(param_string_encryption_encrypted,local_30,0x20,0x5a);
 sVar1 = strlen((char *)local_30);
 return sVar1 + local_30[0] & 0xffffffff;
}



/* Function: call_string_encryption @ 00100ca4 */

ulong call_string_encryption(int param_1)

{
 (void)param_1;
 return param_string_encryption();
}



/* Function: param_tail_call_optimized @ 00100cb8 */

int param_tail_call_optimized(int param_1,int param_2)

{
 undefined4 local_14;
 
 local_14 = param_2;
 if (0 < param_1) {
 local_14 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_14;
}



/* Function: call_tail_call_optimized @ 00100d18 */

int call_tail_call_optimized(int param_1)

{
 (void)param_1;
 return param_tail_call_optimized(1000,0);
}



/* Function: param_non_tail_call @ 00100d34 */

int param_non_tail_call(int param_1)

{
 undefined4 local_14;
 
 if (param_1 < 1) {
 local_14 = 0;
 }
 else {
 local_14 = param_non_tail_call(param_1 + -1);
 local_14 = param_1 + local_14;
 }
 return local_14;
}



/* Function: call_non_tail_call @ 00100d90 */

int call_non_tail_call(int param_1)

{
 (void)param_1;
 return param_non_tail_call(100);
}



/* Function: param_vectorized_loop @ 00100da8 */

int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)

{
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 
 for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
 param_3[local_20] = param_1[local_20] + param_2[local_20];
 }
 local_24 = 0;
 for (local_28 = 0; local_28 < param_4; local_28 = local_28 + 1) {
 local_24 = local_24 + param_3[local_28];
 }
 return local_24;
}



/* Function: call_vectorized_loop @ 00100e6c */

int call_vectorized_loop(int param_1)

{
 int local_70[8];
 int uStack_68[8];
 int local_60[8];
 int uStack_58[8];
 int local_50[8];
 int uStack_48[8];
 int local_40[8];
 int uStack_38[8];
 int local_30[8];
 int uStack_28[8];
 int local_20[8];
 int uStack_18[8];
 
 (void)param_1;
 local_30[0] = 0x200000001;
 uStack_28[0] = 0x400000003;
 local_20[0] = 0x600000005;
 uStack_18[0] = 0x800000007;
 local_40[0] = 0x300000004;
 uStack_48[0] = 0x500000006;
 local_50[0] = 0x700000008;
 uStack_38[0] = 0x100000002;
 return param_vectorized_loop(local_30,local_50,local_70,8);
}



/* Function: param_link_time_optimization @ 00100ed4 */

int param_link_time_optimization(undefined4 param_1)

{
 return lto_target_func(param_1);
}



/* Function: lto_target_func @ 00100ef8 */

int lto_target_func(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100f14 */

int call_link_time_optimization(int param_1)

{
 (void)param_1;
 return param_link_time_optimization(5);
}



/* Function: div_zero_handler @ 00100f2c */

void div_zero_handler(int sig)

{
 (void)sig;
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100f54 */

int param_division_by_zero(int param_1)

{
 int iVar1;
 int local_14;
 
 signal(8,(void (*)(int))div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 local_14 = 0;
 if (param_1 != 0) {
 local_14 = 10 / param_1;
 }
 }
 else {
 local_14 = -1;
 }
 return local_14;
}



/* Function: call_division_by_zero @ 00100fc0 */

int call_division_by_zero(int param_1)

{
 int iVar1;
 int iVar2;
 
 (void)param_1;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(void (*)(int))0);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 00101008 */

void segv_handler(int sig)

{
 (void)sig;
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00101030 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 local_14;
 
 signal(0xb,(void (*)(int))segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 local_14 = *param_1;
 }
 else {
 local_14 = 0xffffffff;
 }
 return local_14;
}



/* Function: call_null_pointer_deref @ 00101098 */

int call_null_pointer_deref(int param_1)

{
 int iVar1;
 int iVar2;
 undefined4 local_14;
 
 (void)param_1;
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref((undefined4 *)0);
 signal(0xb,(void (*)(int))0);
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 001010ec */

/* WARNING: Removing unreachable block (ram,0x00101164) */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 int local_14;
 undefined1 auStack_c [8];
 undefined4 local_4;
 
 local_4 = param_1;
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return local_4;
}



/* Function: param_buffer_overflow_heap @ 0010117c */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 undefined4 local_24;
 undefined4 local_14;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_14 = 0xfffffffe;
 }
 else {
 for (local_24 = 0; local_24 < 0x21; local_24 = local_24 + 1) {
 *(undefined1 *)((long)__ptr + (long)local_24) = 0x42;
 }
 free(__ptr);
 local_14 = param_1;
 }
 return local_14;
}



/* Function: call_buffer_overflow @ 00101214 */

int call_buffer_overflow(int param_1)

{
 int iVar1;
 int iVar2;
 
 (void)param_1;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00101250 */

int param_integer_overflow(int param_1,int param_2)

{
 int local_4;
 
 local_4 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_integer_overflow @ 0010131c */

int call_integer_overflow(int param_1)

{
 int iVar1;
 int iVar2;
 
 (void)param_1;
 iVar1 = param_integer_overflow(1000000000, 1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00101364 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00101384 */

int call_undefined_behavior(int param_1)

{
 (void)param_1;
 return param_undefined_behavior(5);
}



/* Function: param_implementation_defined @ 001013ac */

/* WARNING: Removing unreachable block (ram,0x001013c8) */

undefined4 param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 00101460 */

int call_implementation_defined(int param_1)

{
 (void)param_1;
 return param_implementation_defined();
}



/* Function: test_obf_opt_edge @ 00101474 */

int test_obf_opt_edge(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_001015f1);
 uVar2 = call_fake_branch(iVar1);
 iVar1 = printf(DAT_0010161f,uVar2 & 0xffffffff);
 uVar2 = call_opaque_predicate(iVar1);
 iVar1 = printf(DAT_0010163b,uVar2 & 0xffffffff);
 uVar2 = call_instruction_substitution(iVar1);
 iVar1 = printf(DAT_00101657,uVar2 & 0xffffffff);
 uVar2 = call_string_encryption(iVar1);
 iVar1 = printf(DAT_00101674,uVar2 & 0xffffffff);
 uVar2 = call_tail_call_optimized(iVar1);
 iVar1 = printf(DAT_00101690,uVar2 & 0xffffffff);
 uVar2 = call_non_tail_call(iVar1);
 iVar1 = printf(DAT_001016ba,uVar2 & 0xffffffff);
 uVar2 = call_vectorized_loop(iVar1);
 iVar1 = printf(DAT_001016df,uVar2 & 0xffffffff);
 uVar2 = call_link_time_optimization(iVar1);
 iVar1 = printf(DAT_00101705,uVar2 & 0xffffffff);
 uVar2 = call_division_by_zero(iVar1);
 iVar1 = printf(DAT_00101725,uVar2 & 0xffffffff);
 uVar2 = call_null_pointer_deref(iVar1);
 iVar1 = printf(DAT_00101741,uVar2 & 0xffffffff);
 uVar2 = call_buffer_overflow(iVar1);
 iVar1 = printf(DAT_0010175e,uVar2 & 0xffffffff);
 uVar2 = call_integer_overflow(iVar1);
 iVar1 = printf(DAT_0010177b,uVar2 & 0xffffffff);
 uVar2 = call_undefined_behavior(iVar1);
 iVar1 = printf(DAT_001017ac,uVar2 & 0xffffffff);
 uVar2 = call_implementation_defined(iVar1);
 iVar1 = printf(DAT_001017c9,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 001015a8 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
