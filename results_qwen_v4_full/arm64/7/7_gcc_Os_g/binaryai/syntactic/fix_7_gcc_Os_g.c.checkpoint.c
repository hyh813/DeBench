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
typedef struct { long __buf[8]; } __jmp_buf_tag;
typedef void (*__sighandler_t)(int);

int completed_0 = 0;
void *__dso_handle = 0;
long jmp_buffer[8] = {0};
long segv_buffer[8] = {0};
int div_zero_caught = 0;
int segv_caught = 0;
char encrypted_0[32] = {0};
void *stack0x00000008 = 0;
char *DAT_00101120 = 0;
char *DAT_0010114d = 0;
char *DAT_00101169 = 0;
char *DAT_00101185 = 0;
char *DAT_001011a2 = 0;
char *DAT_001011be = 0;
char *DAT_001011e8 = 0;
char *DAT_0010120d = 0;
char *DAT_00101233 = 0;
char *DAT_00101253 = 0;
char *DAT_0010126f = 0;
char *DAT_0010128c = 0;
char *DAT_001012a9 = 0;
char *DAT_001012da = 0;
char *DAT_001012f7 = 0;
static long ___stack_chk_guard = 0;

#include <stdlib.h>

void __longjmp_chk(__jmp_buf_tag *env);
void __stack_chk_fail(void);
int _setjmp(__jmp_buf_tag *env);
void signal(int signum, __sighandler_t handler);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
void *malloc(size_t size);
void free(void *ptr);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
static void test_obf_opt_edge(void);


// Decompiled by BinaryAI
// SHA256: 6c6ab70700c87ac858b44fc6674dd61e5e568361578c5df913e16552f9c67df0

// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 return;
}

// Stub for __cxa_finalize
static void __cxa_finalize(void *dso_handle)
{
 return;
}






























// Function: main @ 0x100980
int main(void)
{
 test_obf_opt_edge();
 return 0;
}













// Function: div_zero_handler @ 0x100ad4
void div_zero_handler(int param_1)
{
 div_zero_caught = 1;
 __longjmp_chk((__jmp_buf_tag *)jmp_buffer);
}

// Function: segv_handler @ 0x100af4
void segv_handler(int param_1)
{
 segv_caught = 1;
 __longjmp_chk((__jmp_buf_tag *)segv_buffer);
}

// Function: param_fake_branch @ 0x100b14
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100b18
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100b20
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar4 = param_1;
 while (iVar3 = iVar2, iVar3 != 0) {
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = iVar4 / iVar3;
 }
 iVar2 = iVar4 - iVar2 * iVar3;
 iVar4 = iVar3;
 }
 iVar2 = param_1 * 3 + 0x14;
 if (param_1 * param_1 + param_1 * 2 + 1 == iVar1 * iVar1 && iVar4 == 1) {
 iVar2 = param_1 * 2 + 10;
 }
 return iVar2;
}

// Function: call_opaque_predicate @ 0x100b78
unsigned long long call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x100b80
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100ba4
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x100bac
byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)
{
 byte *pbVar1;
 byte *pbVar2;
 pbVar1 = (byte *)strncpy(param_2,param_1,param_3);
 pbVar1[param_3 - 1] = 0;
 for (pbVar2 = pbVar1; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
 *pbVar2 = *pbVar2 ^ param_4;
 }
 return pbVar1;
}

// Function: param_string_encryption @ 0x100c04
void param_string_encryption(void)
{
 size_t sVar1;
 byte local_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 decrypt_string(encrypted_0,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_tail_call_optimized @ 0x100c80
int param_tail_call_optimized(int param_1,int param_2)
{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x100ca0
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x100cac
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x100ccc
unsigned long long call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x100cd4
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 int iVar1;
 long lVar2;
 for (lVar2 = 0; (int)lVar2 < param_4; lVar2 = lVar2 + 1) {
 *(int *)(param_3 + lVar2 * 4) = *(int *)(param_1 + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4);
 }
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_4; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_3 + lVar2 * 4);
 }
 return iVar1;
}

// Function: call_vectorized_loop @ 0x100d1c
unsigned long long call_vectorized_loop(void)
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
 long local_8;
 local_8 = ___stack_chk_guard;
 local_28 = 0;
 uStack_20 = 0;
 uStack_60 = 0x400000003;
 local_68 = 0x200000001;
 uStack_50 = 0x800000007;
 uStack_58 = 0x600000005;
 local_18 = 0;
 uStack_10 = 0;
 uStack_40 = 0x500000006;
 local_48 = 0x700000008;
 uStack_30 = 0x100000002;
 uStack_38 = 0x300000004;
 uVar1 = param_vectorized_loop((long)&local_68,(long)&local_48,(long)&local_28,8);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_link_time_optimization @ 0x100d94
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x100da0
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x100da8
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
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

// Function: call_division_by_zero @ 0x100df4
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x100e34
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x100e7c
unsigned long long call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x100ef8
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100efc
unsigned int param_buffer_overflow_heap(unsigned int param_1)
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

// Function: call_buffer_overflow @ 0x100f34
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x100f50
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1 || param_2 == 0) || 0 < (int)param_1 && (int)param_2 < 0) {
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x100f88
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100f94
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100f9c
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100fa4
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100fac
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100fb4
static void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 unsigned long long uVar2;
 char auVar3 [16];
 puts(DAT_00101120);
 __printf_chk(1,DAT_0010114d,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,DAT_00101169,uVar1);
 __printf_chk(1,DAT_00101185,0xe1);
 param_string_encryption();
 __printf_chk(1,DAT_001011a2,uVar1);
 call_tail_call_optimized();
 __printf_chk(1,DAT_001011be,0);
 uVar1 = call_non_tail_call();
 __printf_chk(1,DAT_001011e8,uVar1);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,DAT_0010120d,uVar1);
 __printf_chk(1,DAT_00101233,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,DAT_00101253,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,DAT_0010126f,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,DAT_0010128c,uVar1);
 __printf_chk(1,DAT_001012a9,2000000000);
 __printf_chk(1,DAT_001012da,10);
 __printf_chk(1,DAT_001012f7,0x30);
 return;
}



