#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <unistd.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif

#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif

/* Additional type definitions */
typedef unsigned int uint;
typedef uint8_t byte;

/* Forward declarations for setjmp/signal types */
#ifndef __jmp_buf_tag_defined
struct __jmp_buf_tag {
  long __val[8];
};
typedef struct __jmp_buf_tag __jmp_buf_tag;
#define __jmp_buf_tag_defined
#endif
typedef void (*__sighandler_t)(int);

/* Global variable declarations */
static struct __jmp_buf_tag jmp_buffer[1];
static struct __jmp_buf_tag segv_buffer[1];
static char completed_0 = 0;
static void *__dso_handle = 0;
static int div_zero_caught = 0;
static int segv_caught = 0;
static unsigned long stack0x00000008 = 0;

/* Forward declarations */
int main(void);

/* Data string declarations */
static char encrypted_0[32] = "This is a test string for encryption\x00\x00\x00";
static char DAT_00102008[4] = "%d\n";
static char DAT_00102137[4] = "%d\n";
static char DAT_00102153[4] = "%d\n";
static char DAT_0010216f[4] = "%d\n";
static char DAT_0010218c[4] = "%d\n";
static char DAT_00102038[4] = "%d\n";
static char DAT_00102068[4] = "%d\n";
static char DAT_00102090[4] = "%d\n";
static char DAT_001020b8[4] = "%d\n";
static char DAT_001021a8[4] = "%d\n";
static char DAT_001021c4[4] = "%d\n";
static char DAT_001021e1[4] = "%d\n";
static char DAT_001020d8[4] = "%d\n";
static char DAT_001021fe[4] = "%d\n";
static char DAT_00102110[4] = "%d\n";

// Decompiled by BinaryAI
// SHA256: 66c4a8e6dadd5e3143891c0682c8d7de537ac2217acf9c005f3343e5acaa4fc2



// Function: div_zero_handler @ 0x101269
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer,1);
}

// Function: segv_handler @ 0x10128e
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer,1);
}

// Function: param_fake_branch @ 0x1012b3
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x1012ba
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x1012c4
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar2 = param_1 + 1;
 iVar4 = iVar2;
 iVar1 = param_1;
 if (iVar2 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar2 * iVar2)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x10130b
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x10131a
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101338
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x101342
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x101385
int param_string_encryption(void)
{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 decrypt_string(&encrypted_0,local_38,0x20,0x5a);
 sVar1 = strlen(local_38);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)local_38[0] + (int)sVar1;
 }
 __stack_chk_fail();
}

// Function: call_string_encryption @ 0x1013e6
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x1013fd
unsigned long param_tail_call_optimized(int param_1,uint param_2)
{
 unsigned long uVar1;
 if (0 < param_1) {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 return uVar1;
 }
 return (unsigned long)param_2;
}

// Function: call_tail_call_optimized @ 0x10141b
unsigned long long call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x101437
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}

// Function: call_non_tail_call @ 0x101454
int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x10146b
int param_vectorized_loop(long param_1,long param_2,int *param_3,uint param_4)
{
 int *piVar1;
 unsigned long uVar2;
 int iVar3;
 if ((int)param_4 < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 do {
 param_3[uVar2] = *(int *)(param_2 + uVar2 * 4) + *(int *)(param_1 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (uVar2 != param_4);
 piVar1 = param_3 + (unsigned long)(param_4 - 1) + 1;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *param_3;
 param_3 = param_3 + 1;
 } while (param_3 != piVar1);
 }
 return iVar3;
}

// Function: call_vectorized_loop @ 0x1014b5
int call_vectorized_loop(void)
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
 int result;
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
 result = param_vectorized_loop(&local_78,&local_58,(int *)&local_38,8);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return result;
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_link_time_optimization @ 0x1015a1
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x1015aa
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x1015b4
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

// Function: call_division_by_zero @ 0x1015fb
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x101636
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

// Function: call_null_pointer_deref @ 0x10167b
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned int local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + iVar2;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_stack @ 0x1016e3
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1016ea
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

// Function: call_buffer_overflow @ 0x10171d
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x101737
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1 || (int)param_2 < 1) || (-1 < iVar1)) {
 if ((int)(param_1 & param_2) < 0) {
 if (0 < iVar1) {
 iVar1 = -2;
 }
 return iVar1;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x101765
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x10176f
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x101777
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x101781
unsigned long long param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x10178b
unsigned long long call_implementation_defined(void)
{
 return 0x2f;
}

// Function: test_obf_opt_edge @ 0x101795
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 puts(&DAT_00102008);
 __printf_chk(1,&DAT_00102137,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_00102153,uVar1);
 __printf_chk(1,&DAT_0010216f,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_0010218c,uVar1);
 uVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00102038,uVar1);
 uVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_00102068,uVar1);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_00102090,uVar1);
 __printf_chk(1,&DAT_001020b8,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_001021a8,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_001021c4,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_001021e1,uVar1);
 __printf_chk(1,&DAT_001020d8,2000000000);
 __printf_chk(1,&DAT_001021fe,10);
 __printf_chk(1,&DAT_00102110,0x2f);
 return;
}

// Function: main @ 0x101960
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



