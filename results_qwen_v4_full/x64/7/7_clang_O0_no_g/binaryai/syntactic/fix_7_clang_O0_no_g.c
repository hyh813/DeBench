#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned char byte;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Decompiled by BinaryAI

/* Global variable declarations */
int completed_0 = 0;
extern void *__dso_handle;
int div_zero_caught = 0;
jmp_buf jmp_buffer;
int segv_caught = 0;
jmp_buf segv_buffer;
char param_string_encryption_encrypted[32] = "test_string_data";
char DAT_00102009[] = "%d\n";
char DAT_00102037[] = "%lu\n";
char DAT_00102053[] = "%lu\n";
char DAT_0010206f[] = "%lu\n";
char DAT_0010208c[] = "%lu\n";
char DAT_001020a8[] = "%lu\n";
char DAT_001020d2[] = "%lu\n";
char DAT_001020f7[] = "%lu\n";
char DAT_0010211d[] = "%lu\n";
char DAT_0010213d[] = "%lu\n";
char DAT_00102159[] = "%lu\n";
char DAT_00102176[] = "%lu\n";
char DAT_00102193[] = "%lu\n";
char DAT_001021c4[] = "%lu\n";
char DAT_001021e1[] = "%lu\n";

/* External function declarations */
// SHA256: 6a4dd6b326d764836cb1610e5749600ce91db37c9b608d4fb29d97c3390784c7

/* Forward declarations */
static int param_fake_branch(int param_1);
static int call_fake_branch(void);
static int param_opaque_predicate(int param_1);
static int call_opaque_predicate(void);
static int param_instruction_substitution(uint param_1);
static int call_instruction_substitution(void);
static byte * decrypt_string(char *param_1, byte *param_2, size_t param_3, byte param_4);
static long param_string_encryption(void);
static long call_string_encryption(void);
static int param_tail_call_optimized(int param_1, int param_2);
static int call_tail_call_optimized(void);
static int param_non_tail_call(int param_1);
static int call_non_tail_call(void);
static int param_vectorized_loop(long param_1, long param_2, long param_3, int param_4);
static int call_vectorized_loop(void);
static void param_link_time_optimization(unsigned int param_1);
static int lto_target_func(int param_1);
static void call_link_time_optimization(void);
static int call_lto_target_func(void);
static void div_zero_handler(int sig);
static unsigned int param_division_by_zero(int param_1);
static int call_division_by_zero(void);
static void segv_handler(int sig);
static unsigned int param_null_pointer_deref(unsigned int *param_1);
static int call_null_pointer_deref(void);
static unsigned int param_buffer_overflow_stack(unsigned int param_1);
static unsigned int param_buffer_overflow_heap(unsigned int param_1);
static int call_buffer_overflow(void);
static int param_integer_overflow(int param_1, int param_2);
static int call_integer_overflow(void);
static int param_undefined_behavior(int param_1);
static unsigned int call_undefined_behavior(void);
static unsigned int param_implementation_defined(void);
static void call_implementation_defined(void);
static void test_obf_opt_edge(void);

// Function: param_fake_branch @ 0x1011c0
static int param_fake_branch(int param_1)
{
 int local_10;
 local_10 = param_1;
 if (param_1 * param_1 < 0) {
 local_10 = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_10;
}

// Function: call_fake_branch @ 0x101230
static int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x101240
static int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_1c;
 int local_18;
 int local_c;
 local_1c = param_1 + 1;
 local_18 = param_1;
 while (local_1c != 0) {
 iVar1 = local_18 % local_1c;
 local_18 = local_1c;
 local_1c = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_18 == 1)) {
 local_c = param_1 * 2 + 10;
 }
 else {
 local_c = param_1 * 3 + 0x14;
 }
 return local_c;
}

// Function: call_opaque_predicate @ 0x101320
static int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x101330
static int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101380
static int call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
}

// Function: decrypt_string @ 0x101390
static byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_30;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_30 = param_2; *local_30 != 0; local_30 = local_30 + 1) {
 *local_30 = *local_30 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x101410
static long param_string_encryption(void)
{
 size_t sVar1;
 char local_28 [32];
 decrypt_string(param_string_encryption_encrypted,(byte *)local_28,0x20,0x5a);
 sVar1 = strlen(local_28);
 return sVar1 + (long)local_28[0];
}

// Function: call_string_encryption @ 0x101450
static long call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x101460
static int param_tail_call_optimized(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (0 < param_1) {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}

// Function: call_tail_call_optimized @ 0x1014a0
static int call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x1014c0
static int param_non_tail_call(int param_1)
{
 int local_c;
 if (param_1 < 1) {
 local_c = 0;
 }
 else {
 local_c = param_non_tail_call(param_1 + -1);
 local_c = param_1 + local_c;
 }
 return local_c;
}

// Function: call_non_tail_call @ 0x101510
static int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x101520
static int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 int local_30;
 int local_2c;
 int local_28;
 for (local_28 = 0; local_28 < param_4; local_28 = local_28 + 1) {
 *(int *)(param_3 + (long)local_28 * 4) =
 *(int *)(param_1 + (long)local_28 * 4) + *(int *)(param_2 + (long)local_28 * 4);
 }
 local_2c = 0;
 for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
 local_2c = *(int *)(param_3 + (long)local_30 * 4) + local_2c;
 }
 return local_2c;
}

// Function: call_vectorized_loop @ 0x1015c0
static int call_vectorized_loop(void)
{
 char local_68 [32];
 unsigned long long local_48;
 unsigned long long local_40;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 unsigned long long local_10;
 local_28 = 0x200000001;
 local_20 = 0x400000003;
 local_18 = 0x600000005;
 local_10 = 0x800000007;
 local_48 = 0x700000008;
 local_40 = 0x500000006;
 local_38 = 0x300000004;
 local_30 = 0x100000002;
 memset(local_68,0,0x20);
 return param_vectorized_loop((long)&local_28,(long)&local_48,(long)local_68,8);
}

// Function: param_link_time_optimization @ 0x101650
static void param_link_time_optimization(unsigned int param_1)
{
 lto_target_func(param_1);
 return;
}

// Function: lto_target_func @ 0x101670
static int lto_target_func(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101690
static void call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return;
}

// Function: call_lto_target_func @ 0x1016a0
static int call_lto_target_func(void)
{
 return lto_target_func(5);
}

// Function: div_zero_handler @ 0x1016b0
static void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x1016d0
static unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(8,(void (*)(int))div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 if (iVar1 == 0) {
 if (param_1 == 0) {
 local_c = 0xffffffff;
 } else {
 local_c = (unsigned int)(10 / param_1);
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_division_by_zero @ 0x101730
static int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x101770
static void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1017a0
static unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(11,(void (*)(int))segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 == 0) {
 if (param_1 == 0) {
 local_c = 0xffffffff;
 } else {
 local_c = *param_1;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_null_pointer_deref @ 0x101800
static int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(11,SIG_DFL);
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x101850
static unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_1c;
 char auStack_14 [8];
 unsigned int local_c;
 local_c = param_1;
 for (local_1c = 0; local_1c < 0x11; local_1c = local_1c + 1) {
 auStack_14[local_1c] = 0x41;
 }
 return local_c;
}

// Function: param_buffer_overflow_heap @ 0x1018b0
static unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_1c;
 unsigned int local_c;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = 0xfffffffe;
 }
 else {
 for (local_1c = 0; local_1c < 0x21; local_1c = local_1c + 1) {
 *(char *)((long)__ptr + (long)local_1c) = 0x42;
 }
 free(__ptr);
 local_c = param_1;
 }
 return local_c;
}

// Function: call_buffer_overflow @ 0x101930
static int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x101960
static int param_integer_overflow(int param_1,int param_2)
{
 int local_c;
 local_c = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 local_c = -2;
 }
 }
 else {
 local_c = -1;
 }
 return local_c;
}

// Function: call_integer_overflow @ 0x1019f0
static int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000, 1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101a30
static int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x101a50
static unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x101a70
static unsigned int param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x101b00
static void call_implementation_defined(void)
{
 param_implementation_defined();
 return;
}

// Function: test_obf_opt_edge @ 0x101b10
static void test_obf_opt_edge(void)
{
 uint uVar1;
 printf(DAT_00102009, 0);
 uVar1 = (uint)call_fake_branch();
 printf(DAT_00102037,(unsigned long)uVar1);
 uVar1 = (uint)call_opaque_predicate();
 printf(DAT_00102053,(unsigned long)uVar1);
 uVar1 = (uint)call_instruction_substitution();
 printf(DAT_0010206f,(unsigned long)uVar1);
 uVar1 = (uint)param_string_encryption();
 printf(DAT_0010208c,(unsigned long)uVar1);
 uVar1 = (uint)param_tail_call_optimized(10, 0);
 printf(DAT_001020a8,(unsigned long)uVar1);
 uVar1 = (uint)param_non_tail_call(100);
 printf(DAT_001020d2,(unsigned long)uVar1);
 uVar1 = (uint)call_vectorized_loop();
 printf(DAT_001020f7,(unsigned long)uVar1);
 uVar1 = (uint)lto_target_func(5);
 printf(DAT_0010211d,(unsigned long)uVar1);
 uVar1 = (uint)call_division_by_zero();
 printf(DAT_0010213d,(unsigned long)uVar1);
 uVar1 = (uint)call_null_pointer_deref();
 printf(DAT_00102159,(unsigned long)uVar1);
 uVar1 = (uint)call_buffer_overflow();
 printf(DAT_00102176,(unsigned long)uVar1);
 uVar1 = (uint)call_integer_overflow();
 printf(DAT_00102193,(unsigned long)uVar1);
 uVar1 = (uint)call_undefined_behavior();
 printf(DAT_001021c4,(unsigned long)uVar1);
 uVar1 = (uint)param_implementation_defined();
 printf(DAT_001021e1,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x101c50
int main(int argc, char **argv)
{
 test_obf_opt_edge();
 return 0;
}


