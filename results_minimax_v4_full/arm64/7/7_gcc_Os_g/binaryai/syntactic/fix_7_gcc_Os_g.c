/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>

#include <stdint.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;

typedef unsigned char byte;
typedef unsigned int uint;

extern unsigned long ____stack_chk_guard;
extern void *__dso_handle;
extern char completed_0;
extern jmp_buf jmp_buffer;
extern jmp_buf segv_buffer;
extern int div_zero_caught;
extern int segv_caught;
void call_weak_fn(void);
void test_obf_opt_edge(void);

// Declare __printf_chk
int __printf_chk(int flag, const char *format, ...);
#define printf_chk(...) printf(__VA_ARGS__)

// Declare __stack_chk_fail
void __stack_chk_fail(int __status, void *__ptr, int __second, unsigned long __first);

// Declare __cxa_finalize
void __cxa_finalize(void *);

// Signal handler type
typedef void (*__sighandler_t)(int);

char stack0x00000008[1];
char encrypted_0[32] = "\x20\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30\x30";

const char DAT_00101120[] = "Test Obf Opt Edge Cases";
const char DAT_0010114d[] = "%d\n";
const char DAT_00101169[] = "opaque_predicate(5) = %d\n";
const char DAT_00101185[] = "instruction_substitution() = %d\n";
const char DAT_001011a2[] = "string_encryption() = %d\n";
const char DAT_001011be[] = "tail_call_optimized() = %lld\n";
const char DAT_001011e8[] = "non_tail_call() = %d\n";
const char DAT_0010120d[] = "vectorized_loop() = %d\n";
const char DAT_00101233[] = "link_time_optimization() = %d\n";
const char DAT_00101253[] = "division_by_zero() = %d\n";
const char DAT_0010126f[] = "null_pointer_deref() = %d\n";
const char DAT_0010128c[] = "buffer_overflow() = %d\n";
const char DAT_001012a9[] = "integer_overflow() = %d\n";
const char DAT_001012da[] = "undefined_behavior() = %d\n";
const char DAT_001012f7[] = "implementation_defined() = %d\n";

// Decompiled by BinaryAI
// SHA256: 6c6ab70700c87ac858b44fc6674dd61e5e568361578c5df913e16552f9c67df0

// Function: _init @ 0x100848
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100880
size_t strlen(char *__s);

// Function: <EXTERNAL>::_setjmp @ 0x100890
int _setjmp(jmp_buf __env);

// Function: <EXTERNAL>::__libc_start_main @ 0x1008a0
void __libc_start_main(int (*main)(void), void *stack, void *rtld_fini, void *fini, void *ctx, unsigned long long rtld_flags)
{
 (void)main; (void)stack; (void)rtld_fini; (void)fini; (void)ctx; (void)rtld_flags;
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008b0
void __cxa_finalize(void *arg)
{
 (void)arg;
 return;
}

// Function: <EXTERNAL>::signal @ 0x1008c0
__sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::malloc @ 0x1008d0
extern void *malloc(size_t);

// Function: <EXTERNAL>::printf @ 0x1008e0
int printf(const char *__fmt, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __fmt);
 iVar1 = vprintf(__fmt, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008f0
void __stack_chk_fail(int __status, void *__ptr, int __second, unsigned long __first)
{
 (void)__status; (void)__ptr; (void)__second; (void)__first;
 while(1); // infinite loop to simulate abort
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100900
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::abort @ 0x100910
void abort(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x100920
int puts(const char *__s);

// Function: <EXTERNAL>::free @ 0x100930
extern void free(void *__ptr);

// Function: <EXTERNAL>::__longjmp_chk @ 0x100940
void __longjmp_chk(jmp_buf __env, int __val)
{
 longjmp(__env, __val);
}

// Function: <EXTERNAL>::strncpy @ 0x100950
extern char *strncpy(char *__dest, char *__src, size_t __n);

// Function: main @ 0x100980
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _start @ 0x1009c0
void _start(unsigned long long param_1)
{
 void *stack;
 __libc_start_main(main, &stack, &stack0x00000008, 0, 0, param_1);
}

// Function: call_weak_fn @ 0x1009f4
void call_weak_fn(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x100a10
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100a40
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100a7c @ 0x100a7c
void FUN_00100a7c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a80
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: div_zero_handler @ 0x100ad4
void div_zero_handler(void)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}

// Function: segv_handler @ 0x100af4
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
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
void call_opaque_predicate(void)
{
 param_opaque_predicate(5);
 return;
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
byte * decrypt_string(char *param_1, byte *param_2, size_t param_3, byte param_4)
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
 local_8 = ____stack_chk_guard;
 decrypt_string((char *)&encrypted_0,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail((uint)local_28[0] + (int)sVar1,&____stack_chk_guard,0,
 local_8 - ____stack_chk_guard);
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
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
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
 long local_8;
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(uVar1,&____stack_chk_guard,0,local_8 - ____stack_chk_guard);
 }
 return;
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
 iVar1 = _setjmp(jmp_buffer);
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
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x100e7c
void call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(NULL);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(iVar1 + iVar2,&____stack_chk_guard,0,local_8 - ____stack_chk_guard);
 }
 return;
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
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 unsigned long long uVar2;
 char auVar3 [16];
 puts(&DAT_00101120);
 printf("%d\n", 10);
 uVar1 = call_opaque_predicate();
 printf("opaque_predicate(5) = %d\n", uVar1);
 printf("instruction_substitution() = 0x%x\n", 0xe1);
 param_string_encryption();
 uVar1 = call_tail_call_optimized();
 printf("tail_call_optimized() = %lld\n", uVar1);
 uVar1 = call_non_tail_call();
 printf("non_tail_call() = %d\n", uVar1);
 uVar1 = call_vectorized_loop();
 printf("vectorized_loop() = %d\n", uVar1);
 printf("link_time_optimization() = %d\n", 0x14);
 uVar1 = call_division_by_zero();
 printf("division_by_zero() = %d\n", uVar1);
 uVar1 = call_null_pointer_deref();
 printf("null_pointer_deref() = %d\n", uVar1);
 uVar1 = call_buffer_overflow();
 printf("buffer_overflow() = %d\n", uVar1);
 printf("integer_overflow() = %d\n", 2000000000);
 printf("undefined_behavior() = %d\n", 10);
 printf("implementation_defined() = %d\n", 0x30);
 return;
}

// Function: _fini @ 0x101108
void _fini(void)
{
 return;
}

