/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
// typedef long long int64_t; // Already defined in stdint.h
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;

// Global variables for signal handling
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;
static char completed_0 = 0;
char encrypted_0[32] = {0};
char div_zero_caught = 0;
char segv_caught = 0;
char DAT_00102010[] = "Testing Obfuscation & Optimization:\n";
char DAT_0010203d[] = "Fake branch: %u\n";
char DAT_00102059[] = "Opaque predicate: %u\n";
char DAT_00102075[] = "Instruction substitution: %u\n";
char DAT_00102092[] = "String encryption: %u\n";
char DAT_001020b0[] = "Tail call optimized: %u\n";
char DAT_001020e0[] = "Non-tail call: %u\n";
char DAT_00102108[] = "Vectorized loop: %u\n";
char DAT_00102130[] = "Link-time optimization: %u\n";
char DAT_00102150[] = "Division by zero: %u\n";
char DAT_0010216c[] = "Null pointer deref: %u\n";
char DAT_00102189[] = "Buffer overflow: %u\n";
char DAT_001021a8[] = "Integer overflow: %u\n";
char DAT_001021d9[] = "Undefined behavior: %u\n";
char DAT_001021f8[] = "Implementation-defined: %u\n";

// Decompiled by BinaryAI
// SHA256: 66e9113f5ae3cba3d156bd5b0c0666e24b8ce9ca5d20f5f266ccdd2881b7bf37



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Empty function (originally called null pointer)
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010d0
void __cxa_finalize(void *ptr)
{
 return;
}

// Function: <EXTERNAL>::free @ 0x1010e0
void free(void *__ptr)
{
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x1010f0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = __builtin_strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::puts @ 0x101100 - removed to avoid conflict with stdio.h

// Function: <EXTERNAL>::strlen @ 0x101110
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = __builtin_strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101120
void __stack_chk_fail(void)
{
 __builtin_trap();
}

// Using standard printf from stdio.h

// Function: <EXTERNAL>::_setjmp @ 0x101140 - renamed to avoid conflict with setjmp.h macro
int _setjmp_impl(__jmp_buf __env)
{
 int iVar1;
 iVar1 = __sigsetjmp(__env,0);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x101150 - removed to avoid conflict with signal.h

// Using standard malloc from stdlib.h



// Forward declaration
int main(void);





// Function: param_fake_branch @ 0x101269
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x10128a
unsigned int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x10129e
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_20;
 int local_1c;
 local_20 = param_1;
 local_1c = param_1 + 1;
 while (local_1c != 0) {
 iVar1 = local_20 % local_1c;
 local_20 = local_1c;
 local_1c = iVar1;
 }
 if ((param_1 * 2 + param_1 * param_1 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_20 == 1)) {
 iVar1 = (param_1 + 5) * 2;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x101340
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x101354
int param_instruction_substitution(unsigned int param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x1013b3
int call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
}

// Function: decrypt_string @ 0x1013c7
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_10;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_10 = param_2; *local_10 != 0; local_10 = local_10 + 1) {
 *local_10 = *local_10 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x10143f
int param_string_encryption(void)
{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 decrypt_string(&encrypted_0,local_38,0x20,0x5a);
 sVar1 = strlen(local_38);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (int)local_38[0] + (int)sVar1;
}

// Function: call_string_encryption @ 0x1014a7
int call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x1014bb
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

// Function: call_tail_call_optimized @ 0x1014f1
void call_tail_call_optimized(void)
{
 (void)param_tail_call_optimized(1000,0);
 return;
}

// Function: param_non_tail_call @ 0x10150a
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

// Function: call_non_tail_call @ 0x10153a
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x10154e
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 int local_14;
 int local_10;
 int local_c;
 for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
 *(int *)(param_3 + (long)local_14 * 4) =
 *(int *)(param_2 + (long)local_14 * 4) + *(int *)(param_1 + (long)local_14 * 4);
 }
 local_10 = 0;
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_3 + (long)local_c * 4);
 }
 return local_10;
}

// Function: call_vectorized_loop @ 0x1015f8
void call_vectorized_loop(void)
{
 long in_FS_OFFSET;
 unsigned int local_78;
 unsigned int local_74;
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_78 = 1;
 local_74 = 2;
 local_70 = 3;
 local_6c = 4;
 local_68 = 5;
 local_64 = 6;
 local_60 = 7;
 local_5c = 8;
 local_58 = 8;
 local_54 = 7;
 local_50 = 6;
 local_4c = 5;
 local_48 = 4;
 local_44 = 3;
 local_40 = 2;
 local_3c = 1;
 local_38 = 0;
 local_30 = 0;
 local_28 = 0;
 local_20 = 0;
 param_vectorized_loop(&local_78,&local_58,&local_38,8);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: lto_target_func @ 0x1016d2
int lto_target_func(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x1016e3
void param_link_time_optimization(unsigned int param_1)
{
 (void)lto_target_func((int)param_1);
 (void)lto_target_func((int)param_1);
 return;
}

// Function: call_link_time_optimization @ 0x1016fe
void call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return;
}

// Function: div_zero_handler @ 0x101712
void div_zero_handler(void)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10173f
unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned long uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x101791
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x1017d0
void segv_handler(void)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1017fd
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x10184d
int call_null_pointer_deref(void)
{
 long in_FS_OFFSET;
 unsigned int local_1c;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_1c = 0x2a;
 local_18 = param_null_pointer_deref(&local_1c);
 local_14 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_14 + local_18;
}

// Function: param_buffer_overflow_stack @ 0x1018b8
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 long in_FS_OFFSET;
 int local_20;
 char auStack_18 [8];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
 auStack_18[local_20] = 0x41;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return param_1;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_heap @ 0x101923
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_14;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
 *(char *)((long)__ptr + (long)local_14) = 0x42;
 }
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x101982
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar2 + iVar1;
}

// Function: param_integer_overflow @ 0x1019b2
int param_integer_overflow(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_2 + param_1;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_2 + param_1)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_2 + param_1)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x101a19
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar2 + iVar1;
}

// Function: param_undefined_behavior @ 0x101a53
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x101a6c
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x101a8a
unsigned int param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x101b0a
void call_implementation_defined(void)
{
 param_implementation_defined();
 return;
}

// Function: test_obf_opt_edge @ 0x101b1e
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 puts(&DAT_00102010);
 uVar1 = call_fake_branch();
 printf(&DAT_0010203d,(unsigned long)uVar1);
 (void)call_opaque_predicate();
 printf(&DAT_00102059,0U);
 (void)call_instruction_substitution();
 printf(&DAT_00102075,0);
 (void)call_string_encryption();
 printf(&DAT_00102092,0);
 call_tail_call_optimized();
 printf(&DAT_001020b0,0);
 call_non_tail_call();
 printf(&DAT_001020e0,0);
 call_vectorized_loop();
 printf(&DAT_00102108,0);
 (void)call_link_time_optimization();
 printf(&DAT_00102130,0);
 uVar1 = call_division_by_zero();
 printf(&DAT_00102150,(unsigned long)uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_0010216c,(unsigned long)uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_00102189,(unsigned long)uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_001021a8,(unsigned long)uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_001021d9,(unsigned long)uVar1);
 call_implementation_defined();
 printf(&DAT_001021f8,0U);
 return;
}

// Function: main @ 0x101cf8
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



