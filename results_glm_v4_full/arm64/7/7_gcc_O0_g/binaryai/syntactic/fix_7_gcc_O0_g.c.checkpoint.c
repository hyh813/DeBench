#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef uint8_t byte;

typedef void (*__sighandler_t)(int);

extern unsigned long __stack_chk_guard;
unsigned long ___stack_chk_guard = 0;

/* Global variable declarations */
char completed_0 = 0;
static void *__dso_handle = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught = 0;
int segv_caught = 0;
char encrypted_0[32] = {0};
unsigned long long stack0x00000008 = 0;

/* String constants */
static char DAT_001016b8[] = "Testing fake branch...\n";
static char DAT_001016e8[] = "fake_branch result: %u\n";
static char DAT_00101708[] = "opaque_predicate result: %d\n";
static char DAT_00101728[] = "instruction_substitution result: %u\n";
static char DAT_00101748[] = "string_encryption result: %u\n";
static char DAT_00101768[] = "tail_call_optimized result: %u\n";
static char DAT_00101798[] = "non_tail_call result: %u\n";
static char DAT_001017c0[] = "vectorized_loop result: %u\n";
static char DAT_001017e8[] = "link_time_optimization result: %d\n";
static char DAT_00101808[] = "division_by_zero result: %u\n";
static char DAT_00101828[] = "null_pointer_deref result: %u\n";
static char DAT_00101848[] = "buffer_overflow result: %u\n";
static char DAT_00101868[] = "integer_overflow result: %d\n";
static char DAT_001018a0[] = "undefined_behavior result: %u\n";
static char DAT_001018c0[] = "implementation_defined result: %u\n";

/* External declarations */

// Decompiled by BinaryAI
// SHA256: 238f4466455a889333ef6e9e0077b3a428c826147d2da0af03eb360e19188c11

/* Function declarations */
int call_weak_fn(int);



// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 (*(void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008e0
extern void __stack_chk_fail(void);













// Function: param_fake_branch @ 0x100a94
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x100abc
unsigned int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x100ad4
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 local_18 = param_1;
 local_14 = param_1 + 1;
 while (local_14 != 0) {
 iVar1 = 0;
 if (local_14 != 0) {
 iVar1 = local_18 / local_14;
 }
 iVar1 = local_18 - iVar1 * local_14;
 local_18 = local_14;
 local_14 = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_18 == 1)) {
 iVar1 = (param_1 + 5) * 2;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x100bd4
int call_opaque_predicate(int param_1)
{
 return param_opaque_predicate(param_1);
}

// Function: param_instruction_substitution @ 0x100bec
int param_instruction_substitution(unsigned int param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100c6c
int call_instruction_substitution(int param_1)
{
 return param_instruction_substitution(param_1);
}

// Function: decrypt_string @ 0x100c84
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_8;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_8 = param_2; *local_8 != 0; local_8 = local_8 + 1) {
 *local_8 = *local_8 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x100d10
int param_string_encryption(void)
{
 int iVar1;
 size_t sVar2;
 byte local_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 decrypt_string(encrypted_0,local_28,0x20,0x5a);
 sVar2 = strlen((char *)local_28);
 iVar1 = (int)sVar2 + (uint)local_28[0];
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1;
}

// Function: call_string_encryption @ 0x100d8c
int call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x100da0
unsigned long param_tail_call_optimized(int param_1,unsigned int param_2)
{
 unsigned long uVar1;
 if (param_1 < 1) {
 uVar1 = (unsigned long)param_2;
 }
 else {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return uVar1;
}

// Function: call_tail_call_optimized @ 0x100dec
unsigned long call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x100e08
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_non_tail_call(param_1 + -1);
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x100e48
int call_non_tail_call(int param_1)
{
 return param_non_tail_call(param_1);
}

// Function: param_vectorized_loop @ 0x100e60
int param_vectorized_loop(void *param_1,void *param_2,void *param_3,int param_4)
{
 int local_c;
 int local_8;
 int local_4;
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 *(int *)((char *)param_3 + (long)local_c * 4) =
 *(int *)((char *)param_1 + (long)local_c * 4) + *(int *)((char *)param_2 + (long)local_c * 4);
 }
 local_8 = 0;
 for (local_4 = 0; local_4 < param_4; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)((char *)param_3 + (long)local_4 * 4);
 }
 return local_8;
}

// Function: call_vectorized_loop @ 0x100f2c
unsigned int call_vectorized_loop(int param_1)
{
 unsigned int uVar1;
 unsigned long long local_68;
 unsigned long long uStack_60;
 unsigned long long uStack_58;
 unsigned long long uStack_50;
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
 uStack_60 = 0x400000003;
 local_68 = 0x200000001;
 uStack_50 = 0x800000007;
 uStack_58 = 0x600000005;
 uStack_40 = 0x500000006;
 local_48 = 0x700000008;
 uStack_30 = 0x100000002;
 uStack_38 = 0x300000004;
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 uVar1 = param_vectorized_loop(&local_68,&local_48,&local_28,8);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: lto_target_func @ 0x100fbc
int lto_target_func(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x100fd8
void param_link_time_optimization(unsigned int param_1)
{
 lto_target_func(param_1);
 return;
}

// Function: call_link_time_optimization @ 0x100ff4
int call_link_time_optimization(int param_1)
{
 return lto_target_func(5);
}

// Function: div_zero_handler @ 0x10100c
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x101038
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
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

// Function: call_division_by_zero @ 0x10108c
int call_division_by_zero(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,NULL);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x1010cc
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1010f8
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x101148
int call_null_pointer_deref(void)
{
 unsigned int local_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_14 = 0x2a;
 local_10 = param_null_pointer_deref(&local_14);
 local_c = param_null_pointer_deref((unsigned int *)0);
 signal(0xb,NULL);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_10 + local_c;
}

// Function: param_buffer_overflow_stack @ 0x1011cc
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_18;
 char auStack_10 [8];
 long local_8;
 local_8 = ___stack_chk_guard;
 for (local_18 = 0; local_18 < 0x11; local_18 = local_18 + 1) {
 auStack_10[local_18] = 0x41;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return param_1;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_heap @ 0x101278
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_c;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_c = 0; local_c < 0x21; local_c = local_c + 1) {
 *(char *)((long)__ptr + (long)local_c) = 0x42;
 }
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x1012ec
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x101320
int param_integer_overflow(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x1013c0
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101404
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x101424
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x101444
unsigned int param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x1014ec
unsigned int call_implementation_defined(int param_1)
{
 (void)param_1;
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x101500
int test_obf_opt_edge(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001016b8);
 uVar2 = call_fake_branch();
 iVar1 = printf(DAT_001016e8,uVar2 & 0xffffffff);
 iVar1 = call_opaque_predicate(iVar1);
 iVar1 = printf(DAT_00101708,iVar1);
 iVar1 = call_instruction_substitution(iVar1);
 iVar1 = printf(DAT_00101728,uVar2 & 0xffffffff);
 uVar2 = call_string_encryption();
 iVar1 = printf(DAT_00101748,uVar2 & 0xffffffff);
 uVar2 = call_tail_call_optimized();
 iVar1 = printf(DAT_00101768,uVar2 & 0xffffffff);
 uVar2 = call_non_tail_call(iVar1);
 iVar1 = printf(DAT_00101798,uVar2 & 0xffffffff);
 uVar2 = call_vectorized_loop(iVar1);
 iVar1 = printf(DAT_001017c0,uVar2 & 0xffffffff);
 uVar2 = call_link_time_optimization(iVar1);
 iVar1 = printf(DAT_001017e8,(int)(uVar2 & 0xffffffff));
 uVar2 = call_division_by_zero(iVar1);
 iVar1 = printf(DAT_00101808,uVar2 & 0xffffffff);
 iVar1 = call_null_pointer_deref();
 iVar1 = printf(DAT_00101828,uVar2 & 0xffffffff);
 iVar1 = call_buffer_overflow();
 iVar1 = printf(DAT_00101848,uVar2 & 0xffffffff);
 iVar1 = call_integer_overflow();
 iVar1 = printf(DAT_00101868,(int)(uVar2 & 0xffffffff));
 iVar1 = call_undefined_behavior();
 iVar1 = printf(DAT_001018a0,uVar2 & 0xffffffff);
 uVar2 = call_implementation_defined(iVar1);
 iVar1 = printf(DAT_001018c0,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x101638
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



