/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t is provided by system headers */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Define code pointer type */
typedef void (*code)();

/* Define undefined type (typically unsigned char for decompiled code) */
typedef unsigned char undefined;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100760 @ 00100760 */

void FUN_00100760(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008fc @ 001008fc */

/* Global variable declarations */
char completed_0 = 0;
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* CRT stub function prototypes (normally provided by CRT) */
extern void __cxa_finalize(void *);
extern void *__dso_handle;
extern void deregister_tm_clones(void);

/* Global variable for encrypted string */
extern char param_string_encryption_encrypted[32];

/* Function prototypes */
uint8_t * decrypt_string(char *param_1, uint8_t *param_2, size_t param_3, uint8_t param_4);
int param_link_time_optimization(unsigned int param_1);
uint32_t param_null_pointer_deref(uint32_t *param_1);
uint32_t param_buffer_overflow_stack(uint32_t param_1);
uint32_t param_buffer_overflow_heap(uint32_t param_1);
uint32_t param_implementation_defined(void);
int call_fake_branch(int);
int call_opaque_predicate(int);
int call_instruction_substitution(int);
int call_string_encryption(int);
unsigned long call_tail_call_optimized(unsigned long);
int call_non_tail_call(int);
unsigned long call_vectorized_loop(unsigned long);
int call_link_time_optimization(int);
int call_division_by_zero(int);
int call_null_pointer_deref(void);
int call_buffer_overflow(void);
int call_integer_overflow(void);
uint32_t call_undefined_behavior(void);
uint32_t call_implementation_defined(void);

/* String literal declarations */
extern const char *DAT_001015f1;
extern const char *DAT_0010161f;
extern const char *DAT_0010163b;
extern const char *DAT_00101657;
extern const char *DAT_00101674;
extern const char *DAT_00101690;
extern const char *DAT_001016ba;
extern const char *DAT_001016df;
extern const char *DAT_00101705;
extern const char *DAT_00101725;
extern const char *DAT_00101741;
extern const char *DAT_0010175e;
extern const char *DAT_0010177b;
extern const char *DAT_001017ac;
extern const char *DAT_001017c9;

void FUN_001008fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00100954 */

/* WARNING: Removing unreachable block (ram,0x001009b8) */

int param_fake_branch(int param_1)

{
 int local_14;
 
 local_14 = param_1;
 if (param_1 * param_1 < 0) {
 local_14 = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_14;
}



/* Function: call_fake_branch @ 001009dc */

int call_fake_branch(int param_1)

{
 return param_fake_branch(param_1);
}



/* Function: param_opaque_predicate @ 001009f4 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_4;
 
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



/* Function: call_opaque_predicate @ 00100b20 */

int call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 00100b38 */

int param_instruction_substitution(unsigned int param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100bb4 */

void call_instruction_substitution(void)

{
 param_instruction_substitution(10);
 return;
}



/* Function: decrypt_string @ 00100bcc */

uint8_t * decrypt_string(char *param_1, uint8_t *param_2, size_t param_3, uint8_t param_4)

{
 uint8_t *local_38;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_38 = param_2; *local_38 != 0; local_38 = local_38 + 1) {
 *local_38 = *local_38 ^ param_4;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00100c5c */

uint32_t param_string_encryption(void)

{
 size_t sVar1;
 uint8_t local_30 [32];
 uint32_t local_14;
 
 decrypt_string(&param_string_encryption_encrypted,local_30,0x20,0x5a);
 sVar1 = strlen((char *)local_30);
 local_14 = sVar1 + local_30[0];
 return local_14 & 0xffffffff;
}



/* Function: call_string_encryption @ 00100ca4 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 00100cb8 */

int param_tail_call_optimized(int param_1,int param_2)

{
 uint32_t local_14;
 
 local_14 = param_2;
 if (0 < param_1) {
 local_14 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_14;
}



/* Function: call_tail_call_optimized @ 00100d18 */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 00100d34 */

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



/* Function: call_non_tail_call @ 00100d90 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 00100da8 */

int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)

{
 uint32_t local_14;
 uint32_t local_28;
 uint32_t local_24;
 uint32_t local_20;
 
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



/* Function: call_vectorized_loop @ 00100e6c */

void call_vectorized_loop(void)

{
 uint64_t local_70;
 uint64_t uStack_68;
 uint64_t local_60;
 uint64_t uStack_58;
 uint64_t local_50;
 uint64_t uStack_48;
 uint64_t local_40;
 uint64_t uStack_38;
 uint64_t local_30;
 uint64_t uStack_28;
 uint64_t local_20;
 uint64_t uStack_18;
 
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
 param_vectorized_loop(&local_30,&local_50,&local_70,8);
 return;
}



/* Function: param_link_time_optimization @ 00100ed4 */

void param_link_time_optimization(unsigned int32_t param_1)

{
 lto_target_func(param_1);
 return;
}



/* Function: lto_target_func @ 00100ef8 */

int lto_target_func(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100f14 */

void call_link_time_optimization(void)

{
 param_link_time_optimization(5);
 return;
}



/* Function: div_zero_handler @ 00100f2c */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100f54 */

int param_division_by_zero(int param_1)

{
 int iVar1;
 int local_14;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
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



/* Function: call_division_by_zero @ 00100fc0 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 00101008 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00101030 */

unsigned int32_t param_null_pointer_deref(unsigned int32_t *param_1)

{
 int iVar1;
 unsigned int32_t local_14;
 
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



/* Function: call_null_pointer_deref @ 00101098 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 uint32_t local_14;
 uint32_t local_10;
 
 local_14 = 0x2a;
 local_10 = 0;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(&local_10);
 signal(0xb,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 001010ec */

/* WARNING: Removing unreachable block (ram,0x00101164) */

unsigned int32_t param_buffer_overflow_stack(unsigned int32_t param_1)

{
 int local_14;
 undefined1 auStack_c [8];
 unsigned int32_t local_4;
 
 local_4 = param_1;
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return local_4;
}



/* Function: param_buffer_overflow_heap @ 0010117c */

unsigned int32_t param_buffer_overflow_heap(unsigned int32_t param_1)

{
 void *__ptr;
 unsigned int32_t local_24;
 unsigned int32_t local_14;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_14 = 0xfffffffe;
 }
 else {
 for (local_24 = 0; local_24 < 0x21; local_24 = local_24 + 1) {
 *(undefined1 *)((long)__ptr + (long)local_24) = 0x42;
 }
 free(__ptr);
 local_14 = param_1;
 }
 return local_14;
}



/* Function: call_buffer_overflow @ 00101214 */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00101250 */

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



/* Function: call_integer_overflow @ 0010131c */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_integer_overflow(1000000000, 0);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00101364 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00101384 */

unsigned int32_t call_undefined_behavior(void)

{
 unsigned int32_t uVar1;
 
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}



/* Function: param_implementation_defined @ 001013ac */

/* WARNING: Removing unreachable block (ram,0x001013c8) */

unsigned int32_t param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 00101460 */

void call_implementation_defined(void)

{
 param_implementation_defined();
 return;
}



/* Function: test_obf_opt_edge @ 00101474 */

int test_obf_opt_edge(void)

{
 int iVar1;
 unsigned long uVar2;
 
 iVar1 = printf(&DAT_001015f1);
 uVar2 = call_fake_branch(iVar1);
 iVar1 = printf(&DAT_0010161f,uVar2 & 0xffffffff);
 uVar2 = call_opaque_predicate(iVar1);
 iVar1 = printf(&DAT_0010163b,uVar2 & 0xffffffff);
 uVar2 = call_instruction_substitution(iVar1);
 iVar1 = printf(&DAT_00101657,uVar2 & 0xffffffff);
 uVar2 = call_string_encryption(iVar1);
 iVar1 = printf(&DAT_00101674,uVar2 & 0xffffffff);
 uVar2 = call_tail_call_optimized(iVar1);
 iVar1 = printf(&DAT_00101690,uVar2 & 0xffffffff);
 uVar2 = call_non_tail_call(iVar1);
 iVar1 = printf(&DAT_001016ba,uVar2 & 0xffffffff);
 uVar2 = call_vectorized_loop(iVar1);
 iVar1 = printf(&DAT_001016df,uVar2 & 0xffffffff);
 uVar2 = call_link_time_optimization(iVar1);
 iVar1 = printf(&DAT_00101705,uVar2 & 0xffffffff);
 uVar2 = call_division_by_zero(iVar1);
 iVar1 = printf(&DAT_00101725,uVar2 & 0xffffffff);
 uVar2 = call_null_pointer_deref(iVar1);
 iVar1 = printf(&DAT_00101741,uVar2 & 0xffffffff);
 uVar2 = call_buffer_overflow(iVar1);
 iVar1 = printf(&DAT_0010175e,uVar2 & 0xffffffff);
 uVar2 = call_integer_overflow(iVar1);
 iVar1 = printf(&DAT_0010177b,uVar2 & 0xffffffff);
 uVar2 = call_undefined_behavior(iVar1);
 iVar1 = printf(&DAT_001017ac,uVar2 & 0xffffffff);
 uVar2 = call_implementation_defined(iVar1);
 iVar1 = printf(&DAT_001017c9,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 001015a8 */

unsigned int32_t main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
