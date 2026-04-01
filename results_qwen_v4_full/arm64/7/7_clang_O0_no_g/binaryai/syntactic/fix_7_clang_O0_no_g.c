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
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*__sighandler_t)(int);
typedef struct { long __jmp_buf[8]; } __jmp_buf_tag;

/* Function declarations */
void __cxa_finalize(void *);
int __libc_start_main(int (*)(void), int, void *, void (*)(void), void (*)(void), unsigned long long);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
__sighandler_t signal(int, __sighandler_t);
int _setjmp(__jmp_buf_tag *);
void longjmp(__jmp_buf_tag *, int);
void *malloc(size_t);
void free(void *);
int printf(const char *, ...);

void abort(void);
int main(void);
static int lto_target_func(int);

/* Global variables */
int completed_0 = 0;
extern void *__dso_handle;
long jmp_buffer[8];
long segv_buffer[8];
int div_zero_caught = 0;
int segv_caught = 0;
byte param_string_encryption_encrypted[32];
char DAT_001015f1[] = "%d\n";
char DAT_0010161f[] = "%lu\n";
char DAT_0010163b[] = "%lu\n";
char DAT_00101657[] = "%lu\n";
char DAT_00101674[] = "%lu\n";
char DAT_00101690[] = "%lu\n";
char DAT_001016ba[] = "%lu\n";
char DAT_001016df[] = "%lu\n";
char DAT_00101705[] = "%lu\n";
char DAT_00101725[] = "%lu\n";
char DAT_00101741[] = "%lu\n";
char DAT_0010175e[] = "%lu\n";
char DAT_0010177b[] = "%lu\n";
char DAT_001017ac[] = "%lu\n";
char DAT_001017c9[] = "%lu\n";

// Decompiled by BinaryAI
// SHA256: e011d470f967ff65d1bcf4aa119d44ff4c3ce3291847479e74f6d9c56b647085

/* Compiler-generated cleanup functions */
static void register_tm_clones(void) { }
static void deregister_tm_clones(void) { }

// Function: FUN_001008fc @ 0x1008fc
static void FUN_001008fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}



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
void call_fake_branch(void)
{
 param_fake_branch(10);
 return;
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
void call_opaque_predicate(void)
{
 param_opaque_predicate(5);
 return;
}

// Function: param_instruction_substitution @ 0x100b38
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100bb4
void call_instruction_substitution(void)
{
 param_instruction_substitution(10);
 return;
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
 decrypt_string(&param_string_encryption_encrypted,local_30,0x20,0x5a);
 sVar1 = strlen((char *)local_30);
 return sVar1 + local_30[0] & 0xffffffff;
}

// Function: call_string_encryption @ 0x100ca4
void call_string_encryption(void)
{
 param_string_encryption();
 return;
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
void call_tail_call_optimized(void)
{
 param_tail_call_optimized(1000,0);
 return;
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
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
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
void call_vectorized_loop(void)
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
 param_vectorized_loop((long)&local_30,(long)&local_50,(long)&local_70,8);
 return;
}

// Function: param_link_time_optimization @ 0x100ed4
void param_link_time_optimization(unsigned int param_1)
{
 lto_target_func(param_1);
 return;
}

// Function: lto_target_func @ 0x100ef8
static int lto_target_func(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100f14
void call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return;
}

// Function: div_zero_handler @ 0x100f2c
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x100f54
int param_division_by_zero(int param_1)
{
 int iVar1;
 int local_14;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
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
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x101008
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x101030
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_14;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
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
 iVar2 = param_null_pointer_deref((unsigned int *)0);
 signal(0xb,(__sighandler_t)0x0);
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
 *(char *)((long)__ptr + (long)local_24) = 0x42;
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
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x1013ac
unsigned int param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x101460
void call_implementation_defined(void)
{
 param_implementation_defined();
 return;
}

// Function: test_obf_opt_edge @ 0x101474
int test_obf_opt_edge(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf(&DAT_001015f1);
 call_fake_branch();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_0010161f,uVar2 & 0xffffffff);
 call_opaque_predicate();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_0010163b,uVar2 & 0xffffffff);
 call_instruction_substitution();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_00101657,uVar2 & 0xffffffff);
 call_string_encryption();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_00101674,uVar2 & 0xffffffff);
 call_tail_call_optimized();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_00101690,uVar2 & 0xffffffff);
 call_non_tail_call();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_001016ba,uVar2 & 0xffffffff);
 call_vectorized_loop();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_001016df,uVar2 & 0xffffffff);
 call_link_time_optimization();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_00101705,uVar2 & 0xffffffff);
 call_division_by_zero();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_00101725,uVar2 & 0xffffffff);
 call_null_pointer_deref();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_00101741,uVar2 & 0xffffffff);
 call_buffer_overflow();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_0010175e,uVar2 & 0xffffffff);
 call_integer_overflow();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_0010177b,uVar2 & 0xffffffff);
 call_undefined_behavior();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_001017ac,uVar2 & 0xffffffff);
 call_implementation_defined();
 uVar2 = iVar1;
 iVar1 = printf(&DAT_001017c9,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1015a8
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



