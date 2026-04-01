/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*__sighandler_t)(int);
typedef struct { unsigned long __buf[8]; } __jmp_buf_tag;
#define NULL ((void *)0)
#define SIG_DFL ((__sighandler_t)0)
#define SIG_IGN ((__sighandler_t)1)

/* Global variable declarations */
unsigned long ___stack_chk_guard;
static char completed_0;
void *__dso_handle;
static __jmp_buf_tag jmp_buffer;
static int div_zero_caught;
static __jmp_buf_tag segv_buffer;
static int segv_caught;
char encrypted_0[32];
char *stack0x00000008;
char DAT_001016b8[36] = "Testing fake branch optimization: %u\n";
char DAT_001016e8[35] = "Testing opaque predicate: %u\n";
char DAT_00101708[42] = "Testing instruction substitution: %u\n";
char DAT_00101728[35] = "Testing string encryption: %u\n";
char DAT_00101748[39] = "Testing tail call optimized: %u\n";
char DAT_00101768[34] = "Testing non tail call: %u\n";
char DAT_00101798[32] = "Testing vectorized loop: %u\n";
char DAT_001017c0[36] = "Testing link time optimization: %u\n";
char DAT_001017e8[34] = "Testing division by zero: %u\n";
char DAT_00101808[38] = "Testing null pointer deref: %u\n";
char DAT_00101828[32] = "Testing buffer overflow: %u\n";
char DAT_00101848[33] = "Testing integer overflow: %u\n";
char DAT_00101868[39] = "Testing undefined behavior: %u\n";
char DAT_001018a0[42] = "Testing implementation defined: %u\n";
char DAT_001018c8[10] = "Done!\n\0";

/* Forward function declarations */
static unsigned int call_fake_branch(void);
static int call_opaque_predicate(void);
static int call_instruction_substitution(void);
static unsigned int call_string_encryption(void);
static unsigned int call_tail_call_optimized(void);
static int call_non_tail_call(void);
static unsigned int call_vectorized_loop(void);
static int call_link_time_optimization(void);
static int call_division_by_zero(void);
static int call_null_pointer_deref(void);
static int call_buffer_overflow(void);
static int call_integer_overflow(void);
static unsigned int call_undefined_behavior(void);
static unsigned int call_implementation_defined(void);
int main(void);
void __libc_start_main(int (*main)(void), unsigned long long, char **, int (*)(void), void (*)(void), void *);
void abort(void);
void __cxa_finalize(void *);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
void __stack_chk_fail(void);
__sighandler_t signal(int sig, __sighandler_t handler);
int _setjmp(__jmp_buf_tag *__env);
void longjmp(__jmp_buf_tag *__env,int __val);
void *malloc(size_t size);
void free(void *ptr);
int puts(const char *s);
int printf(const char *format, ...);

// Decompiled by BinaryAI
// SHA256: f1a2b65f65087c2664735205f4e90c978f5790efee65d51b5ef2c6ff5f023814



// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 ((void (*)(void))0)();
 return;
}





























// Function: _start @ 0x100980
static void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main((int (*)(void))main,param_9,&stack0x00000008,0,0,(void *)param_1);
 abort();
}



// Function: deregister_tm_clones @ 0x1009d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100a00
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x100a40
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_fake_branch @ 0x100a94
static unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x100abc
static unsigned int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x100ad4
static int param_opaque_predicate(int param_1)
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
static int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x100bec
static int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100c6c
static int call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
}

// Function: decrypt_string @ 0x100c84
static byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
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
static int param_string_encryption(void)
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
static unsigned int call_string_encryption(void)
{
 return (unsigned int)param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x100da0
static unsigned long param_tail_call_optimized(int param_1,uint param_2)
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
static unsigned int call_tail_call_optimized(void)
{
 return (unsigned int)param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x100e08
static int param_non_tail_call(int param_1)
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
static int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x100e60
static int param_vectorized_loop(intptr_t param_1,intptr_t param_2,intptr_t param_3,int param_4)
{
 int local_c;
 int local_8;
 int local_4;
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 *(int *)(param_3 + (long)local_c * 4) =
 *(int *)(param_1 + (long)local_c * 4) + *(int *)(param_2 + (long)local_c * 4);
 }
 local_8 = 0;
 for (local_4 = 0; local_4 < param_4; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_3 + (long)local_4 * 4);
 }
 return local_8;
}

// Function: call_vectorized_loop @ 0x100f2c
static unsigned int call_vectorized_loop(void)
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
 uVar1 = param_vectorized_loop((intptr_t)&local_68,(intptr_t)&local_48,(intptr_t)&local_28,8);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: lto_target_func @ 0x100fbc
static int lto_target_func(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x100fd8
static void param_link_time_optimization(unsigned int param_1)
{
 lto_target_func(param_1);
 return;
}

// Function: call_link_time_optimization @ 0x100ff4
static int call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return 0;
}

// Function: div_zero_handler @ 0x10100c
static void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x101038
static int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(&jmp_buffer);
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
static int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)NULL);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x1010cc
static void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(&segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1010f8
static unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(&segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x101148
static int call_null_pointer_deref(void)
{
 unsigned int local_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_14 = 0x2a;
 local_10 = param_null_pointer_deref(&local_14);
 local_c = param_null_pointer_deref((unsigned int *)NULL);
 signal(0xb,(__sighandler_t)NULL);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_10 + local_c;
}

// Function: param_buffer_overflow_stack @ 0x1011cc
static unsigned int param_buffer_overflow_stack(unsigned int param_1)
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
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x101278
static unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_c;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_c = 0; local_c < 0x21; local_c = local_c + 1) {
 *(char *)((uintptr_t)__ptr + (uintptr_t)local_c) = 0x42;
 }
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x1012ec
static int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x101320
static int param_integer_overflow(int param_1,int param_2)
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
static int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow((int)0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101404
static int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x101424
static unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x101444
static unsigned int param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x1014ec
static unsigned int call_implementation_defined(void)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x101500
static int test_obf_opt_edge(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_001016b8);
 uVar2 = call_fake_branch();
 iVar1 = printf(DAT_001016e8,uVar2 & 0xffffffff);
 uVar2 = call_opaque_predicate();
 iVar1 = printf(DAT_00101708,uVar2 & 0xffffffff);
 uVar2 = call_instruction_substitution();
 iVar1 = printf(DAT_00101728,uVar2 & 0xffffffff);
 uVar2 = call_string_encryption();
 iVar1 = printf(DAT_00101748,uVar2 & 0xffffffff);
 uVar2 = call_tail_call_optimized();
 iVar1 = printf(DAT_00101768,uVar2 & 0xffffffff);
 uVar2 = call_non_tail_call();
 iVar1 = printf(DAT_00101798,uVar2 & 0xffffffff);
 uVar2 = call_vectorized_loop();
 iVar1 = printf(DAT_001017c0,uVar2 & 0xffffffff);
 uVar2 = call_link_time_optimization();
 iVar1 = printf(DAT_001017e8,uVar2 & 0xffffffff);
 uVar2 = call_division_by_zero();
 iVar1 = printf(DAT_00101808,uVar2 & 0xffffffff);
 uVar2 = call_null_pointer_deref();
 iVar1 = printf(DAT_00101828,uVar2 & 0xffffffff);
 uVar2 = call_buffer_overflow();
 iVar1 = printf(DAT_00101848,uVar2 & 0xffffffff);
 uVar2 = call_integer_overflow();
 iVar1 = printf(DAT_00101868,uVar2 & 0xffffffff);
 uVar2 = call_undefined_behavior();
 iVar1 = printf(DAT_001018a0,uVar2 & 0xffffffff);
 uVar2 = call_implementation_defined();
 iVar1 = printf(DAT_001018c8,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x101638
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x101650
static void _fini(void)
{
 return;
}

