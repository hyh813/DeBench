/* Auto-injected type definitions by preprocessor */
#include <signal.h>
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t undefined1;
typedef void undefined;
typedef void code(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */



/* Global data declarations */
static char encrypted_0[32];
static jmp_buf jmp_buffer;
static int div_zero_caught;
static jmp_buf segv_buffer;
static int segv_caught;

/* External data declarations */
extern char DAT_00102010[];
extern char DAT_0010203d[];
extern char DAT_00102059[];
extern char DAT_00102075[];
extern char DAT_00102092[];
extern char DAT_001020b0[];
extern char DAT_001020e0[];
extern char DAT_00102108[];
extern char DAT_00102130[];
extern char DAT_00102150[];
extern char DAT_0010216c[];
extern char DAT_00102189[];
extern char DAT_001021a8[];
extern char DAT_001021d9[];
extern char DAT_001021f8[];

/* String data definitions */
char DAT_00102010[] = "";
char DAT_0010203d[] = "";
char DAT_00102059[] = "";
char DAT_00102075[] = "";
char DAT_00102092[] = "";
char DAT_001020b0[] = "";
char DAT_001020e0[] = "";
char DAT_00102108[] = "";
char DAT_00102130[] = "";
char DAT_00102150[] = "";
char DAT_0010216c[] = "";
char DAT_00102189[] = "";
char DAT_001021a8[] = "";
char DAT_001021d9[] = "";
char DAT_001021f8[] = "";


/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00101269 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 0010128a */

void call_fake_branch(void)

{
 param_fake_branch(10);
 return;
}



/* Function: param_opaque_predicate @ 0010129e */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 undefined4 local_20;
 undefined4 local_1c;
 
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



/* Function: call_opaque_predicate @ 00101340 */

void call_opaque_predicate(void)

{
 param_opaque_predicate(5);
 return;
}



/* Function: param_instruction_substitution @ 00101354 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 001013b3 */

void call_instruction_substitution(void)

{
 param_instruction_substitution(10);
 return;
}



/* Function: decrypt_string @ 001013c7 */

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



/* Function: param_string_encryption @ 0010143f */

int param_string_encryption(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 decrypt_string(&encrypted_0,local_38,0x20,0x5a);
 sVar1 = strlen(local_38);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)local_38[0] + (int)sVar1;
}



/* Function: call_string_encryption @ 001014a7 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 001014bb */

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



/* Function: call_tail_call_optimized @ 001014f1 */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 0010150a */

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



/* Function: call_non_tail_call @ 0010153a */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 0010154e */

int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
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



/* Function: call_vectorized_loop @ 001015f8 */

void call_vectorized_loop(void)

{
 long in_FS_OFFSET;
 undefined4 local_78;
 undefined4 local_74;
 undefined4 local_70;
 undefined4 local_6c;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 local_5c;
 undefined4 local_58;
 undefined4 local_54;
 undefined4 local_50;
 undefined4 local_4c;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined8 local_38;
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
 param_vectorized_loop(&local_78,&local_58,&local_38,8);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: lto_target_func @ 001016d2 */

int lto_target_func(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: param_link_time_optimization @ 001016e3 */

void param_link_time_optimization(undefined4 param_1)

{
 lto_target_func(param_1);
 return;
}



/* Function: call_link_time_optimization @ 001016fe */

void call_link_time_optimization(void)

{
 param_link_time_optimization(5);
 return;
}



/* Function: div_zero_handler @ 00101712 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 0010173f */

ulong param_division_by_zero(int param_1)

{
 int iVar1;
 ulong uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00101791 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 001017d0 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001017fd */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 0010184d */

int call_null_pointer_deref(void)

{
 long in_FS_OFFSET;
 undefined4 local_1c;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_1c = 0x2a;
 local_18 = param_null_pointer_deref(&local_1c);
 local_14 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_14 + local_18;
}



/* Function: param_buffer_overflow_stack @ 001018b8 */

/* WARNING: Removing unreachable block (ram,0x00101908) */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 long in_FS_OFFSET;
 int local_20;
 undefined1 auStack_18 [8];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
 auStack_18[local_20] = 0x41;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return param_1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_heap @ 00101923 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 undefined4 local_14;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
 *(undefined1 *)((long)__ptr + (long)local_14) = 0x42;
 }
 free(__ptr);
 }
 return param_1;
}



/* Function: call_buffer_overflow @ 00101982 */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar2 + iVar1;
}



/* Function: param_integer_overflow @ 001019b2 */

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



/* Function: call_integer_overflow @ 00101a19 */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar2 + iVar1;
}



/* Function: param_undefined_behavior @ 00101a53 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00101a6c */

undefined4 call_undefined_behavior(void)

{
 undefined4 uVar1;
 
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}



/* Function: param_implementation_defined @ 00101a8a */

/* WARNING: Removing unreachable block (ram,0x00101aaa) */

undefined4 param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 00101b0a */

void call_implementation_defined(void)

{
 param_implementation_defined();
 return;
}



/* Function: test_obf_opt_edge @ 00101b1e */

void test_obf_opt_edge(void)

{
 puts(&DAT_00102010);
 call_fake_branch();
 printf(&DAT_0010203d,0);
 call_opaque_predicate();
 printf(&DAT_00102059,0);
 call_instruction_substitution();
 printf(&DAT_00102075,0);
 call_string_encryption();
 printf(&DAT_00102092,0);
 call_tail_call_optimized();
 printf(&DAT_001020b0,0);
 call_non_tail_call();
 printf(&DAT_001020e0,0);
 call_vectorized_loop();
 printf(&DAT_00102108,0);
 call_link_time_optimization();
 printf(&DAT_00102130,0);
 printf(&DAT_00102150,(ulong)call_division_by_zero());
 printf(&DAT_0010216c,(ulong)call_null_pointer_deref());
 printf(&DAT_00102189,(ulong)call_buffer_overflow());
 printf(&DAT_001021a8,(ulong)call_integer_overflow());
 printf(&DAT_001021d9,(ulong)call_undefined_behavior());
 call_implementation_defined();
 printf(&DAT_001021f8,0);
 return;
}



/* Function: main @ 00101cf8 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 42 */
