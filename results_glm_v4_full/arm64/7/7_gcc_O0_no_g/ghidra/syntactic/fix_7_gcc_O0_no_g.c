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

/* Additional type definitions for decompiled code */
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef void (*__sighandler_t)(int);

/* Additional missing type definitions */
typedef void (*code)(void);
typedef int undefined;

/* NULL definition */
#define NULL ((void *)0)

/* jmp_buf tag type for setjmp/longjmp */
typedef struct __jmp_buf_tag {
    unsigned long long __jmpbuf[8];
    int __mask_was_saved;
    unsigned long long __saved_mask[8];
} __jmp_buf_tag;

/* Stack canary variables - external declarations */
extern unsigned long __stack_chk_guard;
unsigned long ___stack_chk_guard;

/* Global jump buffers for exception handling */
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;

/* Global exception flags */
extern int div_zero_caught;
extern int segv_caught;
int div_zero_caught = 0;
int segv_caught = 0;

/* Global encrypted string */
extern char encrypted_0[];
char encrypted_0[32];

/* Global string data references */
char DAT_001016b8[] = "Fake branch test\n";
char DAT_001016e8[] = "Opaque predicate: %u\n";
char DAT_00101708[] = "Opaque result: %u\n";
char DAT_00101728[] = "Instruction substitution: %u\n";
char DAT_00101748[] = "String encryption: %u\n";
char DAT_00101768[] = "Tail call: %u\n";
char DAT_00101798[] = "Non-tail call: %u\n";
char DAT_001017c0[] = "Vectorized loop: %u\n";
char DAT_001017e8[] = "Link time optimization done\n";
char DAT_00101808[] = "Division by zero: %u\n";
char DAT_00101828[] = "Null pointer deref: %u\n";
char DAT_00101848[] = "Buffer overflow: %u\n";
char DAT_00101868[] = "Integer overflow: %u\n";
char DAT_001018a0[] = "Undefined behavior: %u\n";
char DAT_001018c0[] = "Implementation defined done\n";

/* CRT global variables */
extern char completed_0;
char completed_0 = 0;
extern void *__dso_handle;

/* C library function declarations */
extern void __cxa_finalize(void *__dso_handle);
extern void deregister_tm_clones(void);
void deregister_tm_clones(void) {}
extern void __stack_chk_fail(unsigned long *arg1, unsigned long arg2, unsigned long arg3, long arg4);
extern char *strncpy(char *dest, const char *src, size_t n);
extern size_t strlen(const char *s);
extern void longjmp(__jmp_buf_tag *env, int val);
extern __sighandler_t signal(int sig, __sighandler_t handler);
extern int _setjmp(__jmp_buf_tag *env);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern int puts(const char *s);
extern int printf(const char *format, ...);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00100a94 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 00100abc */

void call_fake_branch(void)

{
 param_fake_branch(10);
 return;
}



/* Function: param_opaque_predicate @ 00100ad4 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 undefined4 local_18;
 undefined4 local_14;
 
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



/* Function: call_opaque_predicate @ 00100bd4 */

int call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 00100bec */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100c6c */

int call_instruction_substitution(void)

{
 return param_instruction_substitution(10);
}



/* Function: decrypt_string @ 00100c84 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte *local_8;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_8 = param_2; *local_8 != 0; local_8 = local_8 + 1) {
 *local_8 = *local_8 ^ param_4;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00100d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_string_encryption(void)

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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: call_string_encryption @ 00100d8c */

int call_string_encryption(void)

{
 return param_string_encryption();
}



/* Function: param_tail_call_optimized @ 00100da0 */

ulong param_tail_call_optimized(int param_1,uint param_2)

{
 ulong uVar1;
 
 if (param_1 < 1) {
 uVar1 = (ulong)param_2;
 }
 else {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return uVar1;
}



/* Function: call_tail_call_optimized @ 00100dec */

ulong call_tail_call_optimized(int param_1)

{
 return param_tail_call_optimized(param_1,0);
}



/* Function: param_non_tail_call @ 00100e08 */

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



/* Function: call_non_tail_call @ 00100e48 */

int call_non_tail_call(int param_1)

{
 return param_non_tail_call(param_1);
}



/* Function: param_vectorized_loop @ 00100e60 */

int param_vectorized_loop(void *param_1,void *param_2,void *param_3,int param_4)

{
 int local_c;
 int local_8;
 int local_4;
 
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 *(int *)((char *)param_3 + (long)local_c * 4) =
 *(int *)((char *)param_1 + (long)local_c * 4) + *(int *)((char *)param_2 + (long)local_c * 4);
 }
 local_8 = 0;
 for (local_4 = 0; local_4 < param_4; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)((char *)param_3 + (long)local_4 * 4);
 }
 return local_8;
}



/* Function: call_vectorized_loop @ 00100f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_vectorized_loop(int param_1)

{
 undefined4 uVar1;
 undefined8 local_68;
 undefined8 uStack_60;
 undefined8 uStack_58;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
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
 uVar1 = param_vectorized_loop(&local_68,&local_48,&local_28,8);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
 }
 return uVar1;
}



/* Function: lto_target_func @ 00100fbc */

int lto_target_func(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: param_link_time_optimization @ 00100fd8 */

void param_link_time_optimization(undefined4 param_1)

{
 lto_target_func(param_1);
 return;
}



/* Function: call_link_time_optimization @ 00100ff4 */

void call_link_time_optimization(void)

{
 param_link_time_optimization(5);
 return;
}



/* Function: div_zero_handler @ 0010100c */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)&jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00101038 */

int param_division_by_zero(int param_1)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)&jmp_buffer);
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



/* Function: call_division_by_zero @ 0010108c */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
iVar1 = param_division_by_zero(5);
	iVar2 = param_division_by_zero(0);
	signal(8,(__sighandler_t)NULL);
	return iVar1 + iVar2;
}



/* Function: segv_handler @ 001010cc */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(&segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001010f8 */

undefined4 param_null_pointer_deref(void *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp(&segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *(uint32_t *)param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00101148 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_null_pointer_deref(void)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = 0x2a;
	local_10 = param_null_pointer_deref(&local_14);
	local_c = param_null_pointer_deref(NULL);
	signal(0xb,(__sighandler_t)NULL);
	if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,local_10 + local_c,0,local_8 - ___stack_chk_guard);
 }
 return local_10 + local_c;
}



/* Function: param_buffer_overflow_stack @ 001011cc */

/* WARNING: Removing unreachable block (ram,0x00101244) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 int local_18;
 undefined1 auStack_10 [8];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 for (local_18 = 0; local_18 < 0x11; local_18 = local_18 + 1) {
 auStack_10[local_18] = 0x41;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return param_1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,param_1,0,local_8 - ___stack_chk_guard);
}



/* Function: param_buffer_overflow_heap @ 00101278 */

uintptr_t param_buffer_overflow_heap(void *param_1)

{
 void *__ptr;
 undefined4 local_c;
 
__ptr = malloc(0x10);
	if (__ptr == (void *)0x0) {
		return (uintptr_t)0xfffffffeU;
	}
 else {
 for (local_c = 0; local_c < 0x21; local_c = local_c + 1) {
 ((undefined1 *)__ptr)[local_c] = 0x42;
 }
 free(__ptr);
 }
 return (uintptr_t)param_1;
}



/* Function: call_buffer_overflow @ 001012ec */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = (int)param_buffer_overflow_stack((undefined4)10);
 iVar2 = (int)param_buffer_overflow_heap((void *)(uintptr_t)0x14U);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00101320 */

int param_integer_overflow(int param_1,int param_2)

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



/* Function: call_integer_overflow @ 001013c0 */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow((int)0xffffffff,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00101404 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00101424 */

int call_undefined_behavior(void)

{
 return param_undefined_behavior(5);
}



/* Function: param_implementation_defined @ 00101444 */

undefined4 param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 001014ec */

void call_implementation_defined(void)

{
 param_implementation_defined();
 return;
}



/* Function: test_obf_opt_edge @ 00101500 */

int test_obf_opt_edge(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = puts(DAT_001016b8);
 call_fake_branch();
iVar1 = printf(DAT_001016e8);
	uVar2 = call_opaque_predicate();
	iVar1 = printf(DAT_00101708,uVar2 & 0xffffffff);
	uVar2 = call_instruction_substitution();
 iVar1 = printf(DAT_00101728,uVar2 & 0xffffffff);
	uVar2 = call_string_encryption();
	iVar1 = printf(DAT_00101748,uVar2 & 0xffffffff);
uVar2 = call_tail_call_optimized(5);
	iVar1 = printf(DAT_00101768,uVar2 & 0xffffffff);
	uVar2 = call_non_tail_call(5);
	iVar1 = printf(DAT_00101798,uVar2 & 0xffffffff);
uVar2 = call_vectorized_loop(iVar1);
	iVar1 = printf(DAT_001017c0,(uint)(uVar2 & 0xffffffff));
call_link_time_optimization();
	iVar1 = printf(DAT_001017e8);
uVar2 = call_division_by_zero();
	iVar1 = printf(DAT_00101808,(uint)(uVar2 & 0xffffffff));
	uVar2 = call_null_pointer_deref();
	iVar1 = printf(DAT_00101828,uVar2 & 0xffffffff);
	uVar2 = call_buffer_overflow();
 iVar1 = printf(DAT_00101848,uVar2 & 0xffffffff);
	uVar2 = (ulong)call_integer_overflow();
	iVar1 = printf(DAT_00101868,(uint)(uVar2 & 0xffffffff));
	uVar2 = (ulong)call_undefined_behavior();
	iVar1 = printf(DAT_001018a0,uVar2 & 0xffffffff);
 call_implementation_defined();
 iVar1 = printf(DAT_001018c0);
 return iVar1;
}



/* Function: main @ 00101638 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
