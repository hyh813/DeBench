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

/* Additional type definitions for missing types */
typedef unsigned int uint;
typedef unsigned char byte;

/* Boolean type definitions */
#define true 1
#define false 0
typedef int bool;
#define NULL ((void *)0)

typedef struct {
    unsigned long __buf[8];
} __jmp_buf_tag;

typedef void (*__sighandler_t)(int);

/* Global variable declarations */
static __jmp_buf_tag jmp_buffer;
static __jmp_buf_tag segv_buffer;
static char completed_0 = 0;
static char div_zero_caught = 0;
static char segv_caught = 0;
extern void *__dso_handle;
static char encrypted_0[32] = {0};
static char stack0x00000008[8] = {0};

/* Standard library function declarations */
int __gmon_start__(void);
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
void __cxa_finalize(void *dso_handle);
void __stack_chk_fail(void);
void puts(const char *s);
int printf(const char *format, ...);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
void *malloc(size_t size);
void free(void *ptr);
int _setjmp(__jmp_buf_tag *env);
void longjmp(__jmp_buf_tag *env, int val);
__sighandler_t signal(int sig, __sighandler_t handler);

/* Stack canary support for decompiled code */
#if defined(__GNUC__) || defined(__clang__)
static inline unsigned long get_stack_canary(void) {
    unsigned long canary;
    __asm__ volatile ("mov %%fs:0x28, %0" : "=r" (canary));
    return canary;
}
#else
/* Fallback for other compilers - assumes x86_64 Linux */
static inline unsigned long get_stack_canary(void) {
    unsigned long canary;
    __asm__ volatile ("mov %%fs:0x28, %0" : "=r" (canary));
    return canary;
}
#endif

/* Forward declarations */
int main(int argc, char **argv, char **envp);
char DAT_00102010[] = "test_obf_opt_edge\n";
char DAT_0010203d[] = "call_fake_branch: %lu\n";
char DAT_00102059[] = "call_opaque_predicate: %lu\n";
char DAT_00102075[] = "call_instruction_substitution: %lu\n";
char DAT_00102092[] = "call_string_encryption: %lu\n";
char DAT_001020b0[] = "call_tail_call_optimized: %lu\n";
char DAT_001020e0[] = "call_non_tail_call: %lu\n";
char DAT_00102108[] = "call_vectorized_loop: %lu\n";
char DAT_00102130[] = "call_link_time_optimization: %lu\n";
char DAT_00102150[] = "call_division_by_zero: %lu\n";
char DAT_0010216c[] = "call_null_pointer_deref: %lu\n";
char DAT_00102189[] = "call_buffer_overflow: %lu\n";
char DAT_001021a8[] = "call_integer_overflow: %lu\n";
char DAT_001021d9[] = "call_undefined_behavior: %lu\n";
char DAT_001021f8[] = "call_implementation_defined: %lu\n";

// Decompiled by BinaryAI
// SHA256: cb8498b1d717954234cd9cdcbaf62191d5e00def3e23b5ca509bfefc0fcbf9d3

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 ((void (*)(void))NULL)();
 return;
}

// Function: param_fake_branch @ 0x101269
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x10128a
void call_fake_branch(void)
{
 param_fake_branch(10);
 return;
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
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x1013b3
void call_instruction_substitution(void)
{
 param_instruction_substitution(10);
 return;
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
 char local_38 [40];
 long local_10;
 long in_FS_OFFSET = 0;
 local_10 = get_stack_canary();
 decrypt_string(encrypted_0,local_38,0x20,0x5a);
 sVar1 = strlen(local_38);
 if (local_10 != get_stack_canary()) {
 __stack_chk_fail();
 }
 return (int)local_38[0] + (int)sVar1;
}

// Function: call_string_encryption @ 0x1014a7
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x1014bb
unsigned long param_tail_call_optimized(int param_1,uint param_2)
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
 param_tail_call_optimized(1000,0);
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
int param_vectorized_loop(long *param_1,long *param_2,long *param_3,int param_4)
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
 long local_78;
 long local_74;
 long local_70;
 long local_6c;
 long local_68;
 long local_64;
 long local_60;
 long local_5c;
 long local_58;
 long local_54;
 long local_50;
 long local_4c;
 long local_48;
 long local_44;
 long local_40;
 long local_3c;
 long local_38;
 long local_30;
 long local_28;
 long local_20;
 long local_10;
 local_10 = get_stack_canary();
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
 param_vectorized_loop((long *)&local_78,(long *)&local_58,(long *)&local_38,8);
 if (local_10 != get_stack_canary()) {
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
 lto_target_func(param_1);
 return;
}

// Function: call_link_time_optimization @ 0x1016fe
void call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return;
}

// Function: div_zero_handler @ 0x101712
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp(&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10173f
unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned long uVar2;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(&jmp_buffer);
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
 signal(8,NULL);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x1017d0
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 longjmp(&segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1017fd
unsigned int param_null_pointer_deref(unsigned int *param_1)
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

// Function: call_null_pointer_deref @ 0x10184d
int call_null_pointer_deref(void)
{
 unsigned int local_1c;
 int local_18;
 int local_14;
 long local_10;
 local_10 = get_stack_canary();
 local_1c = 0x2a;
 local_18 = param_null_pointer_deref(&local_1c);
 local_14 = param_null_pointer_deref(NULL);
 signal(0xb,NULL);
 if (local_10 != get_stack_canary()) {
 __stack_chk_fail();
 }
 return local_14 + local_18;
}

// Function: param_buffer_overflow_stack @ 0x1018b8
unsigned long param_buffer_overflow_stack(unsigned int param_1)
{
 int local_20;
 char *auStack_18 = (char *)&param_1;
 long local_10;
 local_10 = get_stack_canary();
 for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
 auStack_18[local_20] = 0x41;
 }
 if (local_10 == get_stack_canary()) {
 return (unsigned long)param_1;
 }
 __stack_chk_fail();
 return (unsigned long)param_1;
}

// Function: param_buffer_overflow_heap @ 0x101923
unsigned long param_buffer_overflow_heap(unsigned int param_1)
{
 void *ptr;
 int local_14;
 ptr = malloc(0x10);
 if (ptr == NULL) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
 *(char *)((void *)(((char *)ptr) + local_14)) = 0x42;
 }
 free(ptr);
 }
 return (unsigned long)param_1;
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
 iVar2 = param_integer_overflow((int)0xffffffff,1);
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
 uint uVar1;
 uVar1 = 0;
 puts(DAT_00102010);
 call_fake_branch();
 uVar1 = call_opaque_predicate();
 printf(DAT_00102059,(unsigned long)uVar1);
 call_instruction_substitution();
 call_string_encryption();
 printf(DAT_00102092,(unsigned int)uVar1);
 call_tail_call_optimized();
 printf(DAT_001020b0,(unsigned long)uVar1);
 call_non_tail_call();
 printf(DAT_001020e0,(unsigned long)uVar1);
 call_vectorized_loop();
 printf(DAT_00102108,(unsigned int)uVar1);
 call_link_time_optimization();
 printf(DAT_00102130,(unsigned long)uVar1);
 call_division_by_zero();
 call_null_pointer_deref();
 call_buffer_overflow();
 call_integer_overflow();
 uVar1 = call_undefined_behavior();
 call_implementation_defined();
 return;
}

// Function: main @ 0x101cf8
int main(int argc, char **argv, char **envp)
{
 test_obf_opt_edge();
 return 0;
}

