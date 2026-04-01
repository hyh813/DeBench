/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned int uint;
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
typedef void undefined;

/* Function pointer type for code */
typedef void (*code)(void);

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* CRT symbols */
extern void __cxa_finalize(void *dso_handle);
extern void *__dso_handle;

/* CRT stub for deregister_tm_clones */
void deregister_tm_clones(void) {
    return;
}

/* Stack canary global */
extern unsigned long __stack_chk_guard;

/* Stack canary failure function */
extern void __stack_chk_fail(void *a, ...);

/* Setjmp/longjmp buffers */
#include <setjmp.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Global flags */
char completed_0 = 0;
int div_zero_caught = 0;
int segv_caught = 0;

/* String constants for test output */
const char DAT_001016b8[] = "Testing fake_branch: %u\n";
const char DAT_001016e8[] = "Result: %u\n";
const char DAT_00101708[] = "Result: %u\n";
const char DAT_00101728[] = "Result: %u\n";
const char DAT_00101748[] = "Result: %u\n";
const char DAT_00101768[] = "Result: %u\n";
const char DAT_00101798[] = "Result: %u\n";
const char DAT_001017c0[] = "Result: %u\n";
const char DAT_001017e8[] = "Result: %u\n";
const char DAT_00101808[] = "Result: %u\n";
const char DAT_00101828[] = "Result: %u\n";
const char DAT_00101848[] = "Result: %u\n";
const char DAT_00101868[] = "Result: %u\n";
const char DAT_001018a0[] = "Result: %u\n";
const char DAT_001018c0[] = "Result: %u\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_O0_g
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

int param_fake_branch(int x)

{
 int x_local;
 int result;
 char *str;
 
 return x;
}



/* Function: call_fake_branch @ 00100abc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 int iVar1;
 
 iVar1 = param_fake_branch(10);
 return iVar1;
}



/* Function: param_opaque_predicate @ 00100ad4 */

int param_opaque_predicate(int x)

{
 int iVar1;
 int x_local;
 int a;
 int b;
 int p1;
 int p2;
 int p3;
 int temp;
 
 a = x;
 b = x + 1;
 while (b != 0) {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 iVar1 = a - iVar1 * b;
 a = b;
 b = iVar1;
 }
 if ((x * x + x * 2 + 1 == (x + 1) * (x + 1)) && (a == 1)) {
 iVar1 = (x + 5) * 2;
 }
 else {
 iVar1 = x * 3 + 0x14;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 00100bd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00100bec */

int param_instruction_substitution(int x)

{
 int x_local;
 int result;
 uint ux;
 int div2;
 int mod16;
 int mul15;
 
 return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00100c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 int iVar1;
 
 iVar1 = param_instruction_substitution(10);
 return iVar1;
}



/* Function: decrypt_string @ 00100c84 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 char key_local;
 size_t len_local;
 char *buffer_local;
 char *encrypted_local;
 char *p;
 
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 for (p = buffer; *p != '\0'; p = p + 1) {
 *p = *p ^ key;
 }
 return buffer;
}



/* Function: param_string_encryption @ 00100d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 int iVar1;
 long lVar2;
 size_t sVar3;
 char decrypted [32];
 static const char encrypted[] = {0x1b,0x1a,0x19,0x18,0x17,0x16,0x15,0x14,0x13,0x12,0x11,0x10,0x0f,0x0e,0x0d,0x0c,0x0b,0x0a,0x09,0x08,0x07,0x06,0x05,0x04,0x03,0x02,0x01,0x00,0x1f,0x1e,0x1d,0x1c};
 
 lVar2 = __stack_chk_guard;
 decrypt_string(encrypted,decrypted,0x20,'Z');
 sVar3 = strlen(decrypted);
 iVar1 = (int)sVar3 + (uint)(uint8_t)decrypted[0];
 if (lVar2 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar1,0,lVar2 - __stack_chk_guard);
 }
 return iVar1;
}



/* Function: call_string_encryption @ 00100d8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 00100da0 */

int param_tail_call_optimized(int n,int acc)

{
 int acc_local;
 int n_local;
 
 if (0 < n) {
 acc = param_tail_call_optimized(n + -1,acc + n);
 }
 return acc;
}



/* Function: call_tail_call_optimized @ 00100dec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00100e08 */

int param_non_tail_call(int n)

{
 int iVar1;
 int n_local;
 
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_non_tail_call(n + -1);
 iVar1 = iVar1 + n;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00100e48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00100e60 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int n_local;
 int *c_local;
 int *b_local;
 int *a_local;
 int i;
 int sum;
 int i_1;
 
 for (i = 0; i < n; i = i + 1) {
 c[i] = a[i] + b[i];
 }
 sum = 0;
 for (i_1 = 0; i_1 < n; i_1 = i_1 + 1) {
 sum = sum + c[i_1];
 }
 return sum;
}



/* Function: call_vectorized_loop @ 00100f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 long lVar1;
 int iVar2;
 int a [8];
 int b [8];
 int c [8];
 
 lVar1 = __stack_chk_guard;
 a[2] = 3;
 a[3] = 4;
 a[0] = 1;
 a[1] = 2;
 a[6] = 7;
 a[7] = 8;
 a[4] = 5;
 a[5] = 6;
 b[2] = 6;
 b[3] = 5;
 b[0] = 8;
 b[1] = 7;
 b[6] = 2;
 b[7] = 1;
 b[4] = 4;
 b[5] = 3;
 c[0] = 0;
 c[1] = 0;
 c[2] = 0;
 c[3] = 0;
 c[4] = 0;
 c[5] = 0;
 c[6] = 0;
 c[7] = 0;
 iVar2 = param_vectorized_loop(a,b,c,8);
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,iVar2,0,lVar1 - __stack_chk_guard);
 }
 return iVar2;
}



/* Function: lto_target_func @ 00100fbc */

int lto_target_func(int x)

{
 int x_local;
 
 return (x + 5) * 2;
}



/* Function: param_link_time_optimization @ 00100fd8 */

int param_link_time_optimization(int x)

{
 int iVar1;
 int x_local;
 
 iVar1 = lto_target_func(x);
 return iVar1;
}



/* Function: call_link_time_optimization @ 00100ff4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 int iVar1;
 
 iVar1 = param_link_time_optimization(5);
 return iVar1;
}



/* Function: div_zero_handler @ 0010100c */

void div_zero_handler(int sig)

{
 int sig_local;
 
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00101038 */

int param_division_by_zero(int x)

{
 int iVar1;
 int x_local;
 int y;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = 0;
 if (x != 0) {
 iVar1 = 10 / x;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_division_by_zero @ 0010108c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 001010cc */

void segv_handler(int sig)

{
 int sig_local;
 
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001010f8 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int *p_local;
 int val;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 iVar1 = *p;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_null_pointer_deref @ 00101148 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int valid;
 int r1;
 int r2;
 long local_8;
 
 local_8 = __stack_chk_guard;
 valid = 0x2a;
 r1 = param_null_pointer_deref(&valid);
 r2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,r1 + r2,0,local_8 - __stack_chk_guard);
 }
 return r1 + r2;
}



/* Function: param_buffer_overflow_stack @ 001011cc */

/* WARNING: Removing unreachable block (ram,0x00101244) */
/* WARNING: Removing unreachable block (ram,0x00101268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_buffer_overflow_stack(int x)

{
 int x_local;
 int i;
 int canary;
 char buffer [8];
 
 for (i = 0; i < 0x11; i = i + 1) {
 buffer[i] = 'A';
 }
 return x;
}



/* Function: param_buffer_overflow_heap @ 00101278 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int x_local;
 int i;
 char *heap_buffer;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 x = -2;
 }
 else {
 for (i = 0; i < 0x21; i = i + 1) {
 *(uint8_t *)((long)__ptr + (long)i) = 0x42;
 }
 free(__ptr);
 }
 return x;
}



/* Function: call_buffer_overflow @ 001012ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00101320 */

int param_integer_overflow(int a,int b)

{
 int iVar1;
 int b_local;
 int a_local;
 int signed_sum;
 uint ua;
 uint ub;
 uint unsigned_sum;
 
 iVar1 = a + b;
 if (((a < 1) || (b < 1)) || (-1 < a + b)) {
 if (((a < 0) && (b < 0)) && (0 < a + b)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 001013c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(-1,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00101404 */

int param_undefined_behavior(int i)

{
 int i_local;
 int local;
 
 return i << 1;
}



/* Function: call_undefined_behavior @ 00101424 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 int iVar1;
 int result;
 
 iVar1 = param_undefined_behavior(5);
 return iVar1;
}



/* Function: param_implementation_defined @ 00101444 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 char c;
 int result;
 int s;
 
 return 0x30;
}



/* Function: call_implementation_defined @ 001014ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 int iVar1;
 
 iVar1 = param_implementation_defined();
 return iVar1;
}



/* Function: test_obf_opt_edge @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 uint uVar1;
 
 puts(DAT_001016b8);
 uVar1 = call_fake_branch();
 printf(DAT_001016e8,(ulong)uVar1);
 uVar1 = call_opaque_predicate();
 printf(DAT_00101708,(ulong)uVar1);
 uVar1 = call_instruction_substitution();
 printf(DAT_00101728,(ulong)uVar1);
 uVar1 = call_string_encryption();
 printf(DAT_00101748,(ulong)uVar1);
 uVar1 = call_tail_call_optimized();
 printf(DAT_00101768,(ulong)uVar1);
 uVar1 = call_non_tail_call();
 printf(DAT_00101798,(ulong)uVar1);
 uVar1 = call_vectorized_loop();
 printf(DAT_001017c0,(ulong)uVar1);
 uVar1 = call_link_time_optimization();
 printf(DAT_001017e8,(ulong)uVar1);
 uVar1 = call_division_by_zero();
 printf(DAT_00101808,(ulong)uVar1);
 uVar1 = call_null_pointer_deref();
 printf(DAT_00101828,(ulong)uVar1);
 uVar1 = call_buffer_overflow();
 printf(DAT_00101848,(ulong)uVar1);
 uVar1 = call_integer_overflow();
 printf(DAT_00101868,(ulong)uVar1);
 uVar1 = call_undefined_behavior();
 printf(DAT_001018a0,(ulong)uVar1);
 uVar1 = call_implementation_defined();
 printf(DAT_001018c0,(ulong)uVar1);
 return;
}



/* Function: main @ 00101638 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
