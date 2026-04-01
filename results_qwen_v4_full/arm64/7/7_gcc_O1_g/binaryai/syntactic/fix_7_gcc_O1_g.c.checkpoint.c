#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*__sighandler_t)(int);
typedef struct { long __jmp_buf[8]; } __jmp_buf_tag;

/* Global variables */
char completed_0;
void *___stack_chk_guard = 0;
extern void *__dso_handle;
int div_zero_caught;
int segv_caught;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;

// Helper to get jmp_buf from __jmp_buf_tag
#define GET_JMP_BUF(tag) ((tag).__jmp_buf)
char encrypted_0[32];
char DAT_00101180[] = "Test message";
char DAT_001011b0[] = "%d";
char DAT_001011d0[] = "%d";
char DAT_001011f0[] = "%d";
char DAT_00101210[] = "%d";
char DAT_00101230[] = "%d";
char DAT_00101260[] = "%d";
char DAT_00101288[] = "%d";
char DAT_001012b0[] = "%d";
char DAT_001012d0[] = "%d";
char DAT_001012f0[] = "%d";
char DAT_00101310[] = "%d";
char DAT_00101330[] = "%d";
char DAT_00101368[] = "%d";
char DAT_00101388[] = "%d";

// Decompiled by BinaryAI
// SHA256: 8cb59d874022a132a094f3f51b3c799ede4ad3b0d415f255df5f9a79f10e6cba

// Forward declarations
void call_weak_fn(void);
unsigned long long main(void);
void __stack_chk_fail(void);
int __printf_chk(int, const char *, ...);

// Stub for stack check fail
void __stack_chk_fail(void) {
    // Stack check failed - in real code this would abort
}

// Wrapper for printf_chk
int __printf_chk(int flag, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}



// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 return;
}

// Function: call_weak_fn
void call_weak_fn(void)
{
 return;
}









































// Function: div_zero_handler @ 0x100a94
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp((void *)&jmp_buffer, 1);
}

// Function: segv_handler @ 0x100ab4
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp((void *)&segv_buffer, 1);
}

// Function: param_fake_branch @ 0x100ad4
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100ad8
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100ae0
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar4 = param_1;
 if (iVar1 != 0) {
 do {
 iVar3 = iVar2;
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = iVar4 / iVar3;
 }
 iVar2 = iVar4 - iVar2 * iVar3;
 iVar4 = iVar3;
 } while (iVar2 != 0);
 if (param_1 * 2 + param_1 * param_1 + 1 == iVar1 * iVar1 && iVar3 == 1) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x100b38
void call_opaque_predicate(void)
{
 (void)param_opaque_predicate(5);
 return;
}

// Function: param_instruction_substitution @ 0x100b50
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100b74
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x100b7c
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = param_4 ^ bVar1;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x100bdc
void param_string_encryption(void)
{
 size_t sVar1;
 byte local_28 [32];
 void *local_8;
 local_8 = ___stack_chk_guard;
 decrypt_string((char *)&encrypted_0,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 if ((char *)local_8 - (char *)___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_string_encryption @ 0x100c54
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x100c68
unsigned long param_tail_call_optimized(int param_1,uint param_2)
{
 unsigned long uVar1;
 if (0 < param_1) {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_1 + param_2);
 return uVar1;
 }
 return (unsigned long)param_2;
}

// Function: call_tail_call_optimized @ 0x100c94
void call_tail_call_optimized(void)
{
 param_tail_call_optimized(1000,0);
 return;
}

// Function: param_non_tail_call @ 0x100cb0
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}

// Function: call_non_tail_call @ 0x100ce8
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x100d00
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 int iVar1;
 long lVar2;
 if (param_4 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 do {
 *(int *)(param_3 + lVar2 * 4) = *(int *)(param_1 + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_4);
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_4);
 }
 return iVar1;
}

// Function: call_vectorized_loop @ 0x100d50
void call_vectorized_loop(void)
{
 unsigned long long uVar1;
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
 void *local_8;
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
 uVar1 = param_vectorized_loop((long)&local_68,(long)&local_48,(long)&local_28,8);
 if ((char *)local_8 - (char *)___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_link_time_optimization @ 0x100dc8
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x100dd4
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x100ddc
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp((void *)&jmp_buffer);
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

// Function: call_division_by_zero @ 0x100e28
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x100e68
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp((void *)&segv_buffer);
 if (iVar1 == 0) {
  uVar2 = *param_1;
 }
 else {
  uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x100eb0
void call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 void *local_8;
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if ((char *)local_8 - (char *)___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_stack @ 0x100f2c
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100f30
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int iVar1;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 iVar1 = 0x21;
 do {
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x100f74
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x100f90
int param_integer_overflow(uint param_1,uint param_2)
{
 bool bVar1;
 int iVar2;
 iVar2 = param_1 + param_2;
 if ((((int)param_1 < 1 || param_2 == 0) || 0 < (int)param_1 && (int)param_2 < 0) || -1 < iVar2) {
 bVar1 = (int)(param_1 & param_2) < 0;
 if ((bVar1 && iVar2 != 0) && (!bVar1 || -1 < iVar2)) {
 iVar2 = -2;
 }
 }
 else {
 iVar2 = -1;
 }
 return iVar2;
}

// Function: call_integer_overflow @ 0x100fc4
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100fd0
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100fd8
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100fe0
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100fe8
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100ff0
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 puts((char *)&DAT_00101180);
 __printf_chk(1,(const char *)&DAT_001011b0,10);
 call_opaque_predicate();
 __printf_chk(1,(const char *)&DAT_001011d0,0);
 __printf_chk(1,(const char *)&DAT_001011f0,0xe1);
 param_string_encryption();
 __printf_chk(1,(const char *)&DAT_00101210,0);
 call_tail_call_optimized();
 __printf_chk(1,(const char *)&DAT_00101230,0);
 call_non_tail_call();
 __printf_chk(1,(const char *)&DAT_00101260,0);
 call_vectorized_loop();
 __printf_chk(1,(const char *)&DAT_00101288,0);
 __printf_chk(1,(const char *)&DAT_001012b0,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,(const char *)&DAT_001012d0,uVar1);
 call_null_pointer_deref();
 __printf_chk(1,(const char *)&DAT_001012f0,0);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,(const char *)&DAT_00101310,uVar1);
 __printf_chk(1,(const char *)&DAT_00101330,2000000000);
 __printf_chk(1,(const char *)&DAT_00101368,10);
 __printf_chk(1,(const char *)&DAT_00101388,0x30);
 return;
}

// Function: main @ 0x101148
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}



