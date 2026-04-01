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
typedef struct __jmp_buf_tag { unsigned long __buf[64]; } __jmp_buf_tag;
#define NULL ((void*)0)

/* Global variables */
char completed_0 = 0;
void *__dso_handle;
__jmp_buf_tag jmp_buffer;
int div_zero_caught;
__jmp_buf_tag segv_buffer;
int segv_caught;
char param_string_encryption_encrypted[32];
char DAT_001015f1[] = "test_obf_opt_edge: %d\n";
char DAT_0010161f[] = "  fake_branch: %lu\n";
char DAT_0010163b[] = "  opaque_predicate: %lu\n";
char DAT_00101657[] = "  instruction_substitution: %lu\n";
char DAT_00101674[] = "  string_encryption: %lu\n";
char DAT_00101690[] = "  tail_call_optimized: %lu\n";
char DAT_001016ba[] = "  non_tail_call: %lu\n";
char DAT_001016df[] = "  vectorized_loop: %lu\n";
char DAT_00101705[] = "  link_time_optimization: %lu\n";
char DAT_00101725[] = "  division_by_zero: %lu\n";
char DAT_00101741[] = "  null_pointer_deref: %lu\n";
char DAT_0010175e[] = "  buffer_overflow: %lu\n";
char DAT_0010177b[] = "  integer_overflow: %lu\n";
char DAT_001017ac[] = "  undefined_behavior: %lu\n";
char DAT_001017c9[] = "  implementation_defined: %lu\n";

/* Function declarations */

void __cxa_finalize(void *dso_handle);
size_t strlen(const char *);
char *strncpy(char *dest, const char *src, size_t n);
void longjmp(__jmp_buf_tag *buf, int val) __attribute__((noreturn));
void (*signal(int sig, void (*func)(int)))(int);
int _setjmp(__jmp_buf_tag *buf);
void *malloc(size_t size);
void free(void *ptr);
int printf(const char *format, ...);
void exit(int status);

int param_fake_branch(int);
int param_opaque_predicate(int);
int param_instruction_substitution(uint);
unsigned long param_string_encryption(void);
int param_tail_call_optimized(int,int);
int param_non_tail_call(int);
int param_vectorized_loop(void *,void *,void *,int);
unsigned long param_link_time_optimization(unsigned int);
int param_division_by_zero(int);
unsigned int param_null_pointer_deref(unsigned int *);
unsigned int param_buffer_overflow_stack(unsigned int);
unsigned int param_buffer_overflow_heap(unsigned int);
int param_integer_overflow(int,int);
unsigned int param_undefined_behavior(unsigned int);
unsigned int param_implementation_defined(void);

unsigned long call_fake_branch(void);
unsigned long call_opaque_predicate(void);
unsigned long call_instruction_substitution(void);
unsigned long call_string_encryption(void);
unsigned long call_tail_call_optimized(void);
unsigned long call_non_tail_call(void);
unsigned long call_vectorized_loop(void);
unsigned long call_link_time_optimization(void);
int call_division_by_zero(void);
int call_null_pointer_deref(void);
int call_buffer_overflow(void);
int call_integer_overflow(void);
unsigned int call_undefined_behavior(void);
unsigned long call_implementation_defined(void);
int lto_target_func(int);
int test_obf_opt_edge(void);
int main(void);

// Decompiled by BinaryAI
// SHA256: e011d470f967ff65d1bcf4aa119d44ff4c3ce3291847479e74f6d9c56b647085



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
unsigned long call_fake_branch(void)
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
unsigned long call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x100b38
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100bb4
unsigned long call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
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
unsigned long call_string_encryption(void)
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
unsigned long call_tail_call_optimized(void)
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
unsigned long call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x100da8
int param_vectorized_loop(void *param_1,void *param_2,void *param_3,int param_4)
{
 int local_28;
 int local_24;
 int local_20;
 for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
 *(int *)((char *)param_3 + (long)local_20 * 4) =
 *(int *)((char *)param_1 + (long)local_20 * 4) + *(int *)((char *)param_2 + (long)local_20 * 4);
 }
 local_24 = 0;
 for (local_28 = 0; local_28 < param_4; local_28 = local_28 + 1) {
 local_24 = local_24 + *(int *)((char *)param_3 + (long)local_28 * 4);
 }
 return local_24;
}

// Function: call_vectorized_loop @ 0x100e6c
unsigned long call_vectorized_loop(void)
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
 return param_vectorized_loop(&local_30,&local_50,&local_70,8);
}

// Function: param_link_time_optimization @ 0x100ed4
unsigned long param_link_time_optimization(unsigned int param_1)
{
 return lto_target_func(param_1);
}

// Function: lto_target_func @ 0x100ef8
int lto_target_func(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100f14
unsigned long call_link_time_optimization(void)
{
 return param_link_time_optimization(5);
}

// Function: div_zero_handler @ 0x100f2c
void div_zero_handler(int sig)
{
	div_zero_caught = 1;
	longjmp(&jmp_buffer,1);
}

// Function: segv_handler @ 0x101008
void segv_handler(int sig)
{
	segv_caught = 1;
	longjmp(&segv_buffer,1);
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
 signal(8,(__sighandler_t)NULL);
 return iVar1 + iVar2;
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
 signal(0xb,(__sighandler_t)NULL);
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
 iVar2 = param_null_pointer_deref(NULL);
 signal(0xb,(__sighandler_t)NULL);
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
 iVar1 = param_integer_overflow(1000000000,1);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101364
unsigned int param_undefined_behavior(unsigned int param_1)
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
unsigned long call_implementation_defined(void)
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
 uVar2 = call_opaque_predicate();
 iVar1 = printf(DAT_0010163b,uVar2 & 0xffffffff);
 uVar2 = call_instruction_substitution();
 iVar1 = printf(DAT_00101657,uVar2 & 0xffffffff);
 uVar2 = call_string_encryption();
 iVar1 = printf(DAT_00101674,uVar2 & 0xffffffff);
 uVar2 = call_tail_call_optimized();
 iVar1 = printf(DAT_00101690,uVar2 & 0xffffffff);
 uVar2 = call_non_tail_call();
 iVar1 = printf(DAT_001016ba,uVar2 & 0xffffffff);
 uVar2 = call_vectorized_loop();
 iVar1 = printf(DAT_001016df,uVar2 & 0xffffffff);
uVar2 = call_link_time_optimization();
 iVar1 = printf(DAT_00101705,uVar2 & 0xffffffff);
uVar2 = (unsigned long)call_division_by_zero();
 iVar1 = printf(DAT_00101725,uVar2 & 0xffffffff);
uVar2 = (unsigned long)call_null_pointer_deref();
 iVar1 = printf(DAT_00101741,uVar2 & 0xffffffff);
uVar2 = (unsigned long)call_buffer_overflow();
iVar1 = printf(DAT_0010175e,uVar2 & 0xffffffff);
uVar2 = (unsigned long)call_integer_overflow();
 iVar1 = printf(DAT_0010177b,uVar2 & 0xffffffff);
uVar2 = (unsigned long)call_undefined_behavior();
 iVar1 = printf(DAT_001017ac,uVar2 & 0xffffffff);
 uVar2 = call_implementation_defined();
 iVar1 = printf(DAT_001017c9,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1015a8
int main(void)
{
 test_obf_opt_edge();
 return 0;
}



