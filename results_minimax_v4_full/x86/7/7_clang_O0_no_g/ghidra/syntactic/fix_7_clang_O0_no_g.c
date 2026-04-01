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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Ghidra types */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;

/* Global variables */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Forward declarations */
int lto_target_func(int param_1);

/* Data references from binary */
extern char DAT_0001300d[];
extern char DAT_0001303b[];
extern char DAT_00013057[];
extern char DAT_00013073[];
extern char DAT_00013090[];
extern char DAT_000130ac[];
extern char DAT_000130d6[];
extern char DAT_000130fb[];
extern char DAT_00013121[];
extern char DAT_00013141[];
extern char DAT_0001315d[];
extern char DAT_0001317a[];
extern char DAT_00013197[];
extern char DAT_000131c8[];
extern char DAT_000131e5[];
extern char DAT_0001320c[];
extern char DAT_0001322c[];

/* Encrypted string for param_string_encryption */
/* Data definitions from binary */
static const char param_string_encryption_encrypted[32] = {
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a,
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a,
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a,
    0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a
};

static const char DAT_0001300d[] = "Test Obf Opt Edge\n";
static const char DAT_0001303b[] = "Fake branch: %d\n";
static const char DAT_00013057[] = "Opaque predicate: %d\n";
static const char DAT_00013073[] = "Instruction substitution: %d\n";
static const char DAT_00013090[] = "String encryption: %d\n";
static const char DAT_000130ac[] = "Tail call optimized: %d\n";
static const char DAT_000130d6[] = "Non-tail call: %d\n";
static const char DAT_000130fb[] = "Vectorized loop: %d\n";
static const char DAT_00013121[] = "Link time optimization: %d\n";
static const char DAT_00013141[] = "Division by zero: %d\n";
static const char DAT_0001315d[] = "Null pointer deref: %d\n";
static const char DAT_0001317a[] = "Buffer overflow: %d\n";
static const char DAT_00013197[] = "Integer overflow: %d\n";
static const char DAT_000131c8[] = "Undefined behavior: %d\n";
static const char DAT_000131e5[] = "Implementation defined: %d\n";
static const char DAT_0001320c[] = "12345678";
static const char DAT_0001322c[] = "87654321";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Invalid call through null pointer - replacing with no-op */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001112c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011130 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011269 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001126d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_fake_branch @ 00011280 */

/* WARNING: Removing unreachable block (ram,0x000112de) */

int param_fake_branch(int param_1)

{
 int local_c;
 
 local_c = param_1;
 if (param_1 * param_1 < 0) {
 local_c = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_c;
}



/* Function: call_fake_branch @ 00011300 */

int call_fake_branch(void)

{
 return param_fake_branch(10);
}



/* Function: param_opaque_predicate @ 00011330 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int local_14;
 int local_10;
 int local_8;
 
 local_10 = param_1;
 local_14 = param_1 + 1;
 while (local_14 != 0) {
 iVar1 = local_14;
 local_14 = local_10 % local_14;
 local_10 = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_10 == 1)) {
 local_8 = param_1 * 2 + 10;
 }
 else {
 local_8 = param_1 * 3 + 0x14;
 }
 return local_8;
}



/* Function: call_opaque_predicate @ 00011410 */

int call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 00011440 */

int param_instruction_substitution(unsigned int param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 000114a0 */

int call_instruction_substitution(void)

{
 return param_instruction_substitution(10);
}



/* Function: decrypt_string @ 000114d0 */

uint8_t * decrypt_string(char *param_1,uint8_t *param_2,size_t param_3,uint8_t param_4)

{
 uint8_t *local_c;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_c = param_2; *local_c != 0; local_c = local_c + 1) {
 *local_c = *local_c ^ param_4;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00011550 */

int param_string_encryption(void)

{
 size_t sVar1;
 char local_28 [32];
 
 decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
 sVar1 = strlen(local_28);
 return sVar1 + (int)local_28[0];
}



/* Function: call_string_encryption @ 000115b0 */

int call_string_encryption(void)

{
 return param_string_encryption();
}



/* Function: param_tail_call_optimized @ 000115d0 */

int param_tail_call_optimized(int param_1,int param_2)

{
 int local_c;
 
 if (param_1 < 1) {
 local_c = param_2;
 }
 else {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}



/* Function: call_tail_call_optimized @ 00011630 */

int call_tail_call_optimized(void)

{
 return param_tail_call_optimized(1000,0);
}



/* Function: param_non_tail_call @ 00011660 */

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



/* Function: call_non_tail_call @ 000116c0 */

int call_non_tail_call(void)

{
 return param_non_tail_call(100);
}



/* Function: param_vectorized_loop @ 000116f0 */

int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)

{
 int local_10;
 int local_c;
 int local_8;
 
 for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
 param_3[local_8] = param_1[local_8] + param_2[local_8];
 }
 local_c = 0;
 for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
 local_c = param_3[local_10] + local_c;
 }
 return local_c;
}



/* Function: call_vectorized_loop @ 00011780 */

int call_vectorized_loop(void)

{
 int local_68 [8];
 int local_48 [8];
 int local_28 [8];
 
 memcpy(local_28,DAT_0001320c,8);
 memcpy(local_48,DAT_0001322c,8);
 memset(local_68,0,sizeof(local_68));
 return param_vectorized_loop(local_28,local_48,local_68,8);
}



/* Function: param_link_time_optimization @ 00011820 */

void param_link_time_optimization(int param_1)

{
 lto_target_func(param_1);
 return;
}



/* Function: lto_target_func @ 00011850 */

int lto_target_func(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011870 */

int call_link_time_optimization(void)

{
 return param_link_time_optimization(5);
}



/* Function: div_zero_handler @ 000118a0 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000118e0 */

int param_division_by_zero(int param_1)

{
 int iVar1;
 int local_c;
 
 signal(SIGFPE,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 signal(SIGFPE,div_zero_handler);
 local_c = 10 / param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_division_by_zero @ 00011950 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(SIGFPE,NULL);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 000119b0 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 000119f0 */

int param_null_pointer_deref(int *param_1)

{
 int iVar1;
 int local_c;
 
 signal(SIGSEGV,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 local_c = *param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_null_pointer_deref @ 00011a60 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_c;
 
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(SIGSEGV,NULL);
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00011ad0 */

/* WARNING: Removing unreachable block (ram,0x00011b1f) */

int param_buffer_overflow_stack(int param_1)

{
 int local_14;
 char auStack_c [8];
 
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011b40 */

int param_buffer_overflow_heap(int param_1)

{
 void *__ptr;
 int local_14;
 int local_c;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = 0xfffffffe;
 }
 else {
 for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
 *((char *)__ptr + local_14) = 0x42;
 }
 free(__ptr);
 local_c = param_1;
 }
 return local_c;
}



/* Function: call_buffer_overflow @ 00011bd0 */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00011c20 */

int param_integer_overflow(int param_1,int param_2)

{
 int local_8;
 
 local_8 = param_1 + param_2;
 if ((param_1 < 1) || (param_2 < 1) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 local_8 = -2;
 }
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: call_integer_overflow @ 00011cb0 */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00011d10 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00011d30 */

int call_undefined_behavior(void)

{
 int iVar1;
 
 iVar1 = param_undefined_behavior(5);
 return iVar1;
}



/* Function: param_implementation_defined @ 00011d60 */

int param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 00011e00 */

int call_implementation_defined(void)

{
 return param_implementation_defined();
}



/* Function: test_obf_opt_edge @ 00011e20 */

void test_obf_opt_edge(void)

{
 int uVar1;
 
 printf(&DAT_0001300d);
 uVar1 = call_fake_branch();
 printf(&DAT_0001303b,uVar1);
 uVar1 = call_opaque_predicate();
 printf(&DAT_00013057,uVar1);
 uVar1 = call_instruction_substitution();
 printf(&DAT_00013073,uVar1);
 uVar1 = call_string_encryption();
 printf(&DAT_00013090,uVar1);
 uVar1 = call_tail_call_optimized();
 printf(&DAT_000130ac,uVar1);
 uVar1 = call_non_tail_call();
 printf(&DAT_000130d6,uVar1);
 uVar1 = call_vectorized_loop();
 printf(&DAT_000130fb,uVar1);
 uVar1 = call_link_time_optimization();
 printf(&DAT_00013121,uVar1);
 uVar1 = call_division_by_zero();
 printf(&DAT_00013141,uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_0001315d,uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_0001317a,uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_00013197,uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_000131c8,uVar1);
 uVar1 = call_implementation_defined();
 printf(&DAT_000131e5,uVar1);
 return;
}



/* Function: main @ 00011fe0 */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 47 */
