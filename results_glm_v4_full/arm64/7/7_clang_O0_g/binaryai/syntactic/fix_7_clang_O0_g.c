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
typedef unsigned char byte;
typedef unsigned int uint;
typedef void (*__sighandler_t)(int);
#define NULL ((void*)0)
typedef struct __jmp_buf_tag {
    long __jmpbuf[8];
    int __mask_was_saved;
    long __saved_mask;
} __jmp_buf_tag;

/* Global variable declarations */
extern void *__dso_handle;
extern unsigned long stack0x00000008;
char completed_0 = 0;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
int div_zero_caught = 0;
int segv_caught = 0;
char param_string_encryption_encrypted[] = "EncryptedString1234567890123456789012345";
const char DAT_001015f1[] = "call_fake_branch: %lu\n";
const char DAT_0010161f[] = "Result: %lu\n";
const char DAT_0010163b[] = "Result: %lu\n";
const char DAT_00101657[] = "Result: %lu\n";
const char DAT_00101674[] = "Result: %lu\n";
const char DAT_00101690[] = "Result: %lu\n";
const char DAT_001016ba[] = "Result: %lu\n";
const char DAT_001016df[] = "Result: %lu\n";
const char DAT_00101705[] = "Result: %lu\n";
const char DAT_00101725[] = "Result: %lu\n";
const char DAT_00101741[] = "Result: %lu\n";
const char DAT_0010175e[] = "Result: %lu\n";
const char DAT_0010177b[] = "Result: %lu\n";
const char DAT_001017ac[] = "Result: %lu\n";
const char DAT_001017c9[] = "Result: %lu\n";

/* Forward declarations */
int main(void);
int lto_target_func(int);

// Decompiled by BinaryAI
// SHA256: a449ba1938ef0c799014fb5ecb03ea328f10ad8ff16c952523ae70a232aeb296

// Function: <EXTERNAL>::strlen @ 0x100780
size_t strlen(char *__s);
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::_setjmp @ 0x100790
int _setjmp(__jmp_buf_tag *__env);
extern int _setjmp(__jmp_buf_tag *__env);

// Function: <EXTERNAL>::__libc_start_main @ 0x1007a0
int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1007b0
void __cxa_finalize(void *__d);
extern void __cxa_finalize(void *__d);

// Function: <EXTERNAL>::signal @ 0x1007c0
__sighandler_t signal(int __sig,__sighandler_t __handler);
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::malloc @ 0x1007d0
void * malloc(size_t __size);
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007e0
void __gmon_start__(void);
extern void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x1007f0
void abort(void);
extern void abort(void);

// Function: <EXTERNAL>::free @ 0x100800
void free(void *__ptr);
extern void free(void *__ptr);

// Function: <EXTERNAL>::longjmp @ 0x100810
void longjmp(__jmp_buf_tag *__env,int __val);
extern void longjmp(__jmp_buf_tag *__env,int __val);

// Function: <EXTERNAL>::strncpy @ 0x100820
char * strncpy(char *__dest,char *__src,size_t __n);
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::printf @ 0x100830
int printf(const char *__format,...);
extern int printf(const char *__format,...);



// Function: param_fake_branch @ 0x100954
int param_fake_branch(int param_1)
{
 int local_18;
 local_18 = param_1;
 if (param_1 * param_1 < 0) {
 local_18 = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_18;
}

// Function: call_fake_branch @ 0x1009dc
int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x1009f4
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_14;
 int local_10;
 int local_4;
 local_14 = param_1 + 1;
 local_10 = param_1;
 while (local_14 != 0) {
 iVar1 = 0;
 if (local_14 != 0) {
 iVar1 = local_10 / local_14;
 }
 iVar1 = local_10 - iVar1 * local_14;
 local_10 = local_14;
 local_14 = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_10 == 1)) {
 local_4 = param_1 * 2 + 10;
 }
 else {
 local_4 = param_1 * 3 + 0x14;
 }
 return local_4;
}

// Function: call_opaque_predicate @ 0x100b20
int call_opaque_predicate(int param_1)
{
 return param_opaque_predicate(param_1);
}

// Function: param_instruction_substitution @ 0x100b38
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100bb4
int call_instruction_substitution(int param_1)
{
 return param_instruction_substitution(param_1);
}

// Function: decrypt_string @ 0x100bcc
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_38;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_38 = param_2; *local_38 != 0; local_38 = local_38 + 1) {
 *local_38 = *local_38 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x100c5c
unsigned long param_string_encryption(void)
{
 size_t sVar1;
 byte local_30 [32];
 decrypt_string(param_string_encryption_encrypted,local_30,0x20,0x5a);
 sVar1 = strlen((char *)local_30);
 return sVar1 + local_30[0] & 0xffffffff;
}

// Function: call_string_encryption @ 0x100ca4
unsigned long call_string_encryption(int param_1)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x100cb8
int param_tail_call_optimized(int param_1,int param_2)
{
 int local_14;
 local_14 = param_2;
 if (0 < param_1) {
 local_14 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_14;
}

// Function: call_tail_call_optimized @ 0x100d18
int call_tail_call_optimized(int param_1)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x100d34
int param_non_tail_call(int param_1)
{
 int local_14;
 if (param_1 < 1) {
 local_14 = 0;
 }
 else {
 local_14 = param_non_tail_call(param_1 + -1);
 local_14 = param_1 + local_14;
 }
 return local_14;
}

// Function: call_non_tail_call @ 0x100d90
int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x100da8
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 int local_28;
 int local_24;
 int local_20;
 for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
 *(int *)(param_3 + (long)local_20 * 4) =
 *(int *)(param_1 + (long)local_20 * 4) + *(int *)(param_2 + (long)local_20 * 4);
 }
 local_24 = 0;
 for (local_28 = 0; local_28 < param_4; local_28 = local_28 + 1) {
 local_24 = local_24 + *(int *)(param_3 + (long)local_28 * 4);
 }
 return local_24;
}

// Function: call_vectorized_loop @ 0x100e6c
int call_vectorized_loop(void)
{
 unsigned long long local_70;
 unsigned long long uStack_68;
 unsigned long long local_60;
 unsigned long long uStack_58;
 unsigned long long local_50;
 unsigned long long uStack_48;
 unsigned long long local_40;
 unsigned long long uStack_38;
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned long long local_20;
 unsigned long long uStack_18;
 uStack_28 = 0x400000003;
 local_30 = 0x200000001;
 uStack_18 = 0x800000007;
 local_20 = 0x600000005;
 uStack_48 = 0x500000006;
 local_50 = 0x700000008;
 uStack_38 = 0x100000002;
 local_40 = 0x300000004;
 uStack_68 = 0;
 local_70 = 0;
 uStack_58 = 0;
 local_60 = 0;
 return param_vectorized_loop((long long)(intptr_t)&local_30,(long long)(intptr_t)&local_50,(long long)(intptr_t)&local_70,8);
}

// Function: param_link_time_optimization @ 0x100ed4
void param_link_time_optimization(unsigned int param_1)
{
 lto_target_func(param_1);
 return;
}

// Function: lto_target_func @ 0x100ef8
int lto_target_func(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100f14
int call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return 5 * 2 + 10;
}

// Function: div_zero_handler @ 0x100f2c
void div_zero_handler(int signo)
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x100f54
int param_division_by_zero(int param_1)
{
 int iVar1;
 int local_14;
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp(&jmp_buffer);
 if (iVar1 == 0) {
 local_14 = 0;
 if (param_1 != 0) {
 local_14 = 10 / param_1;
 }
 }
 else {
 local_14 = -1;
 }
 return local_14;
}

// Function: call_division_by_zero @ 0x100fc0
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x101008
void segv_handler(int signo)
{
 segv_caught = 1;
 longjmp(&segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x101030
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_14;
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp(&segv_buffer);
 if (iVar1 == 0) {
 local_14 = *param_1;
 }
 else {
 local_14 = 0xffffffff;
 }
 return local_14;
}

// Function: call_null_pointer_deref @ 0x101098
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_14;
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref((unsigned int *)NULL);
 signal(0xb,(__sighandler_t)0);
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x1010ec
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_14;
 char auStack_c [8];
 unsigned int local_4;
 local_4 = param_1;
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return local_4;
}

// Function: param_buffer_overflow_heap @ 0x10117c
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_24;
 unsigned int local_14;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_14 = 0xfffffffe;
 }
 else {
 for (local_24 = 0; local_24 < 0x21; local_24 = local_24 + 1) {
 ((char *)__ptr)[local_24] = 0x42;
 }
 free(__ptr);
 local_14 = param_1;
 }
 return local_14;
}

// Function: call_buffer_overflow @ 0x101214
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x101250
int param_integer_overflow(int param_1,int param_2)
{
 int local_4;
 local_4 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}

// Function: call_integer_overflow @ 0x10131c
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000, 1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101364
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x101384
unsigned int call_undefined_behavior(int param_1)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(param_1);
 return uVar1;
}

// Function: param_implementation_defined @ 0x1013ac
unsigned int param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x101460
int call_implementation_defined(int param_1)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x101474
int test_obf_opt_edge(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf(DAT_001015f1);
 uVar2 = call_fake_branch();
 iVar1 = printf(DAT_0010161f,uVar2 & 0xffffffff);
 uVar2 = call_opaque_predicate(iVar1);
 iVar1 = printf(DAT_0010163b,uVar2 & 0xffffffff);
 uVar2 = call_instruction_substitution(iVar1);
 iVar1 = printf(DAT_00101657,uVar2 & 0xffffffff);
 uVar2 = call_string_encryption(iVar1);
 iVar1 = printf(DAT_00101674,uVar2 & 0xffffffff);
 uVar2 = call_tail_call_optimized(iVar1);
 iVar1 = printf(DAT_00101690,uVar2 & 0xffffffff);
 uVar2 = call_non_tail_call();
 iVar1 = printf(DAT_001016ba,uVar2 & 0xffffffff);
 uVar2 = call_vectorized_loop();
 iVar1 = printf(DAT_001016df,uVar2 & 0xffffffff);
 uVar2 = call_link_time_optimization();
 iVar1 = printf(DAT_00101705,uVar2 & 0xffffffff);
 uVar2 = call_division_by_zero();
 iVar1 = printf(DAT_00101725,uVar2 & 0xffffffff);
 uVar2 = call_null_pointer_deref();
 iVar1 = printf(DAT_00101741,uVar2 & 0xffffffff);
 uVar2 = call_buffer_overflow();
 iVar1 = printf(DAT_0010175e,uVar2 & 0xffffffff);
 uVar2 = call_integer_overflow();
 iVar1 = printf(DAT_0010177b,uVar2 & 0xffffffff);
 uVar2 = call_undefined_behavior(iVar1);
 iVar1 = printf(DAT_001017ac,uVar2 & 0xffffffff);
 uVar2 = call_implementation_defined(iVar1);
 iVar1 = printf(DAT_001017c9,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1015a8
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



