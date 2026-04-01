/* Standard includes */
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
typedef unsigned char byte;
typedef unsigned char __u8;
typedef void (*__sighandler_t)(int);

extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void __cxa_finalize(void *);
extern void * __dso_handle;


// Forward declarations
int lto_target_func(int param_1);
void param_link_time_optimization(unsigned int param_1);
int main(void);

// Missing global variables
char completed_0 = 0;
char div_zero_caught = 0;
char segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

// Encrypted string for param_string_encryption
char param_string_encryption_encrypted[32] = "encrypted_string_data";

// String constants referenced in code
char DAT_00102009[] = "Testing obfuscated optimizations:\n";
char DAT_00102037[] = "fake_branch: %u\n";
char DAT_00102053[] = "opaque_predicate: %u\n";
char DAT_0010206f[] = "instruction_substitution: %u\n";
char DAT_0010208c[] = "string_encryption: %u\n";
char DAT_001020a8[] = "tail_call_optimized: %u\n";
char DAT_001020d2[] = "non_tail_call: %u\n";
char DAT_001020f7[] = "vectorized_loop: %u\n";
char DAT_0010211d[] = "link_time_optimization: %u\n";
char DAT_0010213d[] = "division_by_zero: %u\n";
char DAT_00102159[] = "null_pointer_deref: %u\n";
char DAT_00102176[] = "buffer_overflow: %u\n";
char DAT_00102193[] = "integer_overflow: %u\n";
char DAT_001021c4[] = "undefined_behavior: %u\n";
char DAT_001021e1[] = "implementation_defined: %u\n";

// Decompiled by BinaryAI
// SHA256: 21873e65b361014d744d18fce28b864ec2df30a3271e1befae31681dd1e7fd7d



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // This was attempting to call a null function pointer - likely dead code
 return;
}

// External function declarations
extern void free(void *__ptr);
extern char *strncpy(char *__dest, const char *__src, size_t __n);
extern size_t strlen(const char *__s);
extern int printf(const char *__format, ...);
extern void *memset(void *__s, int __c, size_t __n);
extern int _setjmp(jmp_buf __env);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern void *malloc(size_t __size);
extern void longjmp(jmp_buf __env, int __val);
extern void __cxa_finalize(void *__dso_handle);



// Function: deregister_tm_clones @ 0x101100
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101130
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101170
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_fake_branch @ 0x1011c0
int param_fake_branch(int param_1)
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
int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x101240
int param_opaque_predicate(int param_1)
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
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x101330
int param_instruction_substitution(unsigned int param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101380
int call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
}

// Function: decrypt_string @ 0x101390
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
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
long param_string_encryption(void)
{
 size_t sVar1;
 char local_28 [32];
 decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
 sVar1 = strlen(local_28);
 return sVar1 + (long)local_28[0];
}

// Function: call_string_encryption @ 0x101450
int call_string_encryption(void)
{
 return (int)param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x101460
int param_tail_call_optimized(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (0 < param_1) {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}

// Function: call_tail_call_optimized @ 0x1014a0
int call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x1014c0
int param_non_tail_call(int param_1)
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
int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x101520
int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)
{
 int local_30;
 int local_2c;
 int local_28;
 for (local_28 = 0; local_28 < param_4; local_28 = local_28 + 1) {
 param_3[local_28] = param_1[local_28] + param_2[local_28];
 }
 local_2c = 0;
 for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
 local_2c = param_3[local_30] + local_2c;
 }
 return local_2c;
}

// Function: call_vectorized_loop @ 0x1015c0
int call_vectorized_loop(void)
{
 int local_68 [8];
 int local_48;
 int local_40;
 int local_38;
 int local_30;
 int local_28;
 int local_20;
 int local_18;
 int local_10;
 local_28 = 0x200000001;
 local_20 = 0x400000003;
 local_18 = 0x600000005;
 local_10 = 0x800000007;
 local_48 = 0x700000008;
 local_40 = 0x500000006;
 local_38 = 0x300000004;
 local_30 = 0x100000002;
 memset(local_68,0,0x20);
 return param_vectorized_loop(&local_28,&local_48,local_68,8);
}

// Function: param_link_time_optimization @ 0x101650
void param_link_time_optimization(unsigned int param_1)
{
 (void)lto_target_func(param_1);
 return;
}

// Function: lto_target_func @ 0x101670
int lto_target_func(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101690
int call_link_time_optimization(void)
{
 (void)param_link_time_optimization(5);
 return lto_target_func(5);
}

// Function: div_zero_handler @ 0x1016a0
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x1016d0
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 local_c = (unsigned int)(10 / (long)param_1);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_division_by_zero @ 0x101730
int call_division_by_zero(void)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar1 = param_division_by_zero(5);
 uVar2 = param_division_by_zero(0);
 (void)signal(8,(__sighandler_t)0x0);
 return (int)(uVar1 + uVar2);
}

// Function: segv_handler @ 0x101770
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1017a0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 local_c = (unsigned int)*param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_null_pointer_deref @ 0x101800
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x101850
unsigned int param_buffer_overflow_stack(unsigned int param_1)
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
unsigned int param_buffer_overflow_heap(unsigned int param_1)
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
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x101960
int param_integer_overflow(int param_1,int param_2)
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
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000, 1);
 iVar2 = param_integer_overflow(0xffffffff, 1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101a30
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x101a50
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x101a70
unsigned int param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x101b00
void call_implementation_defined(void)
{
 (void)param_implementation_defined();
 return;
}

// Remove duplicate/conflicting main declaration

// Function: test_obf_opt_edge @ 0x101b10
unsigned int test_obf_opt_edge(void)
{
 unsigned int uVar1;
 printf(&DAT_00102009);
 uVar1 = call_fake_branch();
 printf(&DAT_00102037,(unsigned long)uVar1);
 uVar1 = call_opaque_predicate();
 printf(&DAT_00102053,(unsigned long)uVar1);
 uVar1 = call_instruction_substitution();
 printf(&DAT_0010206f,(unsigned long)uVar1);
 uVar1 = call_string_encryption();
 printf(&DAT_0010208c,(unsigned long)uVar1);
 uVar1 = call_tail_call_optimized();
 printf(&DAT_001020a8,(unsigned long)uVar1);
 uVar1 = call_non_tail_call();
 printf(&DAT_001020d2,(unsigned long)uVar1);
 uVar1 = call_vectorized_loop();
 printf(&DAT_001020f7,(unsigned long)uVar1);
 uVar1 = call_link_time_optimization();
 printf(&DAT_0010211d,(unsigned long)uVar1);
 uVar1 = call_division_by_zero();
 printf(&DAT_0010213d,(unsigned long)uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_00102159,(unsigned long)uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_00102176,(unsigned long)uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_00102193,(unsigned long)uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_001021c4,(unsigned long)uVar1);
 (void)call_implementation_defined();
 printf(&DAT_001021e1,(unsigned long)0);
 return uVar1;
}

// Function: main @ 0x101c50
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



