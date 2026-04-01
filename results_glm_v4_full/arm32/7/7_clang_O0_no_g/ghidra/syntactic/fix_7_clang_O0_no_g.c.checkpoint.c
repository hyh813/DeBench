#include <setjmp.h>
#include <signal.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* typedef unsigned long size_t; - defined in system headers */
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned char undefined1;

/* Global variable declarations */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
static char param_string_encryption_encrypted[32] = "EncryptedStringForTesting\x00";
static char DAT_000116a5[] = "Testing obf/optimization edge cases...\n";
static char DAT_000116d3[] = "  param_fake_branch: %d\n";
static char DAT_000116ef[] = "  param_opaque_predicate: %d\n";
static char DAT_0001170b[] = "  param_instruction_substitution: %d\n";
static char DAT_00011728[] = "  param_string_encryption: %d\n";
static char DAT_00011744[] = "  param_tail_call_optimized: %d\n";
static char DAT_0001176e[] = "  param_non_tail_call: %d\n";
static char DAT_00011793[] = "  param_vectorized_loop: %d\n";
static char DAT_000117b9[] = "  param_link_time_optimization: %d\n";
static char DAT_000117d9[] = "  param_division_by_zero: %d\n";
static char DAT_000117f5[] = "  param_null_pointer_deref: %d\n";
static char DAT_00011812[] = "  param_buffer_overflow: %d\n";
static char DAT_0001182f[] = "  param_integer_overflow: %d\n";
static char DAT_00011860[] = "  param_undefined_behavior: %d\n";
static char DAT_0001187d[] = "  param_implementation_defined: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 000106d0 */

/* WARNING: Removing unreachable block (ram,0x0001072c) */

int param_fake_branch(int param_1)

{
 int local_10;
 
 local_10 = param_1;
 if (0x7fffffff < (uint32_t)(param_1 * param_1)) {
 local_10 = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_10;
}



/* Function: call_fake_branch @ 00010758 */

int call_fake_branch(void)

{
 return param_fake_branch(10);
}



/* Function: param_opaque_predicate @ 00010770 */

int param_opaque_predicate(int param_1)

{
 int extraout_r1;
 int local_1c;
 int local_18;
 int local_c;
 
 local_1c = param_1 + 1;
 local_18 = param_1;
 while (local_1c != 0) {
 __aeabi_idivmod(local_18,local_1c);
 local_18 = local_1c;
 local_1c = extraout_r1;
 }
 if (((param_1 * param_1 + param_1 * 2) - (param_1 + 1) * (param_1 + 1) == -1) && (local_18 == 1))
 {
 local_c = param_1 * 2 + 10;
 }
 else {
 local_c = param_1 * 3 + 0x14;
 }
 return local_c;
}



/* Function: call_opaque_predicate @ 00010878 */

int call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 00010890 */

int param_instruction_substitution(unsigned int param_1)

{
 return param_1 * 6 + (param_1 >> 1) + (param_1 & 0xf) + param_1 * 0xf;
}



/* Function: call_instruction_substitution @ 00010900 */

int call_instruction_substitution(void)

{
 return param_instruction_substitution(10);
}



/* Function: decrypt_string @ 00010918 */

unsigned char * decrypt_string(char *param_1,unsigned char *param_2,size_t param_3,unsigned char param_4)

{
 byte *local_1c;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_1c = param_2; *local_1c != 0; local_1c = local_1c + 1) {
 *local_1c = *local_1c ^ param_4;
 }
 return param_2;
}



/* Function: param_string_encryption @ 000109ac */

int param_string_encryption(void)

{
 size_t sVar1;
 byte local_28 [32];
 
 decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 return sVar1 + local_28[0];
}



/* Function: call_string_encryption @ 000109f4 */

int call_string_encryption(void)

{
 return param_string_encryption();
}



/* Function: param_tail_call_optimized @ 00010a08 */

int param_tail_call_optimized(int param_1,int param_2)

{
 undefined4 local_c;
 
 local_c = param_2;
 if (0 < param_1) {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}



/* Function: call_tail_call_optimized @ 00010a64 */

int call_tail_call_optimized(void)

{
 return param_tail_call_optimized(1000,0);
}



/* Function: param_non_tail_call @ 00010a80 */

int param_non_tail_call(int param_1)

{
 undefined4 local_c;
 
 if (param_1 < 1) {
 local_c = 0;
 }
 else {
 local_c = param_non_tail_call(param_1 + -1);
 local_c = param_1 + local_c;
 }
 return local_c;
}



/* Function: call_non_tail_call @ 00010ae0 */

int call_non_tail_call(void)

{
 return param_non_tail_call(100);
}



/* Function: param_vectorized_loop @ 00010af8 */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 
 for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
 *(int *)(param_3 + local_14 * 4) =
 *(int *)(param_1 + local_14 * 4) + *(int *)(param_2 + local_14 * 4);
 }
 local_18 = 0;
 for (local_1c = 0; local_1c < param_4; local_1c = local_1c + 1) {
 local_18 = local_18 + *(int *)(param_3 + local_1c * 4);
 }
 return local_18;
}



/* Function: call_vectorized_loop @ 00010bbc */

int call_vectorized_loop(void)

{
 undefined4 local_70;
 undefined4 local_6c;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 local_5c;
 undefined4 local_58;
 undefined4 local_54;
 undefined4 local_50;
 undefined4 uStack_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 local_40;
 undefined4 uStack_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 local_30;
 undefined4 uStack_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 local_20;
 undefined4 uStack_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 
 local_30 = 1;
 uStack_2c = 2;
 uStack_28 = 3;
 uStack_24 = 4;
 local_20 = 5;
 uStack_1c = 6;
 uStack_18 = 7;
 uStack_14 = 8;
 local_50 = 8;
 uStack_4c = 7;
 uStack_48 = 6;
 uStack_44 = 5;
 local_40 = 4;
 uStack_3c = 3;
 uStack_38 = 2;
 uStack_34 = 1;
 local_54 = 0;
 local_58 = 0;
 local_5c = 0;
 local_60 = 0;
 local_64 = 0;
 local_68 = 0;
 local_6c = 0;
 local_70 = 0;
 return param_vectorized_loop(&local_30,&local_50,&local_70,8);
}



/* Function: param_link_time_optimization @ 00010c4c */

void param_link_time_optimization(undefined4 param_1)

{
 lto_target_func(param_1);
 return;
}



/* Function: lto_target_func @ 00010c70 */

int lto_target_func(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00010c8c */

int call_link_time_optimization(void)

{
 param_link_time_optimization(5);
 return 20;
}



/* Function: div_zero_handler @ 00010ca4 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010cd8 */

undefined4 param_division_by_zero(undefined4 param_1)

{
 int iVar1;
 undefined4 local_c;
 
 signal(8,div_zero_handler);
 iVar1 = setjmp(jmp_buffer);
 if (iVar1 == 0) {
 local_c = 10 / param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_division_by_zero @ 00010d50 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 00010d9c */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010dd0 */

int param_null_pointer_deref(int *param_1)

{
 int iVar1;
 int local_c;
 
 signal(0xb,segv_handler);
 iVar1 = setjmp(segv_buffer);
 if (iVar1 == 0) {
 local_c = *param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_null_pointer_deref @ 00010e44 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_c;
 
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref((int *)0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00010e98 */

/* WARNING: Removing unreachable block (ram,0x00010f08) */

int param_buffer_overflow_stack(int param_1)

{
 int local_14;
 unsigned char auStack_c [8];
 int local_4;
 
 local_4 = param_1;
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return local_4;
}



/* Function: param_buffer_overflow_heap @ 00010f24 */

int param_buffer_overflow_heap(int param_1)

{
 void *__ptr;
 int local_18;
 int local_c;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = 0xfffffffe;
 }
 else {
 for (local_18 = 0; local_18 < 0x21; local_18 = local_18 + 1) {
 *(undefined1 *)((int)__ptr + local_18) = 0x42;
 }
 free(__ptr);
 local_c = param_1;
 }
 return local_c;
}



/* Function: call_buffer_overflow @ 00010fc0 */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00010ffc */

int param_integer_overflow(unsigned int param_1,unsigned int param_2)

{
 int local_4;
 
 local_4 = param_1 + param_2;
 if ((((int)param_1 < 1) || ((int)param_2 < 1)) || (param_1 + param_2 < 0x80000000)) {
 if (((0x7fffffff < param_1) && (0x7fffffff < param_2)) && (0 < (int)(param_1 + param_2))) {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_integer_overflow @ 000110c8 */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_integer_overflow(1000000000,2000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00011110 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00011130 */

int call_undefined_behavior(void)

{
 int uVar1;
 
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}



/* Function: param_implementation_defined @ 00011158 */

/* WARNING: Removing unreachable block (ram,0x00011178) */

int param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00011204 */

int call_implementation_defined(void)

{
 return param_implementation_defined();
}



/* Function: test_obf_opt_edge @ 00011218 */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 
 printf(&DAT_000116a5);
 uVar1 = call_fake_branch();
 printf(&DAT_000116d3,uVar1);
 uVar1 = call_opaque_predicate();
 printf(&DAT_000116ef,uVar1);
 uVar1 = call_instruction_substitution();
 printf(&DAT_0001170b,uVar1);
 uVar1 = call_string_encryption();
 printf(&DAT_00011728,uVar1);
 uVar1 = call_tail_call_optimized();
 printf(&DAT_00011744,uVar1);
 uVar1 = call_non_tail_call();
 printf(&DAT_0001176e,uVar1);
 uVar1 = call_vectorized_loop();
 printf(&DAT_00011793,uVar1);
 uVar1 = call_link_time_optimization();
 printf(&DAT_000117b9,uVar1);
 uVar1 = call_division_by_zero();
 printf(&DAT_000117d9,uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_000117f5,uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_00011812,uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_0001182f,uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_00011860,uVar1);
 uVar1 = call_implementation_defined();
 printf(&DAT_0001187d,uVar1);
 return;
}



/* Function: main @ 00011388 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __divsi3 removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */





/* CRT stub function __aeabi_ldiv0 removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
