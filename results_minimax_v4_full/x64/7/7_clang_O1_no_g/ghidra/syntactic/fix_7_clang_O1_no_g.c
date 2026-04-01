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
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long undefined4;
typedef unsigned long long undefined8;
typedef char undefined1;
typedef unsigned long ulong;

/* Required standard library headers */
#include <stdio.h>
#include <signal.h>
#include <setjmp.h>
#include <string.h>

/* Ghidra macros for manipulating 64-bit values */
#define CONCAT44(a,b) ((uint64_t)((uint32_t)(a) | ((uint64_t)(b) << 32)))

/* External data - encrypted string */
char param_string_encryption_encrypted[32] = {
  0x2a ^ 0x5a, 0x74 ^ 0x5a, 0x65 ^ 0x5a, 0x73 ^ 0x5a, 0x74 ^ 0x5a, 0x5f ^ 0x5a,
  0x73 ^ 0x5a, 0x74 ^ 0x5a, 0x72 ^ 0x5a, 0x69 ^ 0x5a, 0x6e ^ 0x5a, 0x67 ^ 0x5a,
  0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a,
  0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a,
  0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a, 0x00 ^ 0x5a,
  0x00 ^ 0x5a, 0x00 ^ 0x5a
};

/* External data references */
int DAT_00102010[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_00102030[8] = {10, 20, 30, 40, 50, 60, 70, 80};

/* External string constants */
const char DAT_00102221[] = "test_obf_opt_edge called\n";
const char DAT_00102050[] = "opaque predicate: %d\n";
const char DAT_0010206c[] = "call_opaque_predicate: %d\n";
const char DAT_00102088[] = "instruction substitution: %d\n";
const char DAT_001020a5[] = "string encryption: %d\n";
const char DAT_001020c1[] = "tail call optimized: %d\n";
const char DAT_001020eb[] = "non tail call: %lu\n";
const char DAT_00102110[] = "vectorized loop: %lu\n";
const char DAT_00102136[] = "\n";
const char DAT_00102156[] = "\nDivision by zero:\n";
const char DAT_00102172[] = "null pointer deref: %lu\n";
const char DAT_0010218f[] = "buffer overflow: %d\n";
const char DAT_001021ac[] = "integer overflow: %d\n";
const char DAT_001021dd[] = "undefined behavior: %d\n";
const char DAT_001021fa[] = "implementation defined: %d\n";

/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;

/* Jump buffers for signal handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

uint FUN_00101020(void)

{
 void (*func)(void) = (void (*)(void))0x0;
 if (func != (void (*)(void))0x0) {
 (*func)();
 }
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 001011a0 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 001011b0 */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 001011c0 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = param_1 + 1;
 iVar1 = iVar4;
 iVar3 = param_1;
 while (iVar2 = iVar1, iVar2 != 0) {
 iVar1 = iVar3 % iVar2;
 iVar3 = iVar2;
 }
 iVar1 = param_1 * 3 + 0x14;
 if (iVar3 == 1 && iVar4 * iVar4 == (param_1 * 2 | 1U) + param_1 * param_1) {
 iVar1 = param_1 * 2 + 10;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 00101210 */

undefined8 call_opaque_predicate(void)

{
 int iVar1;
 undefined8 uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = 6;
 iVar1 = 5;
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 uVar2 = 0x23;
 if (iVar3 == 1) {
 uVar2 = 0x14;
 }
 return uVar2;
}



/* Function: param_instruction_substitution @ 00101240 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00101260 */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101270 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return param_2;
}



/* Function: param_string_encryption @ 001012c0 */

int param_string_encryption(void)

{
 byte bVar1;
 byte *pbVar2;
 size_t sVar3;
 byte local_28 [31];
 undefined1 local_9;
 
 strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 pbVar2 = local_28;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)local_28);
 return (int)sVar3 + (int)(char)local_28[0];
}



/* Function: call_string_encryption @ 00101320 */

int call_string_encryption(void)

{
 return param_string_encryption();
}



/* Function: param_tail_call_optimized @ 00101380 */

void param_tail_call_optimized(int param_1,int param_2)

{
 if (0 < param_1) {
 param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return;
}



/* Function: call_tail_call_optimized @ 001013a0 */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 001013b0 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}



/* Function: call_non_tail_call @ 001013d0 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 001013e0 */

int param_vectorized_loop(long param_1,long param_2,long param_3,uint param_4)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_4) {
 uVar2 = 0;
 do {
 *(int *)(param_3 + uVar2 * 4) = *(int *)(param_2 + uVar2 * 4) + *(int *)(param_1 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_4 != uVar2);
 }
 if (0 < (int)param_4) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_4 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00101420 */

int call_vectorized_loop(void)

{
 int iVar1;
 long lVar2;
 int local_28 [10];
 
 local_28[4] = 0;
 local_28[5] = 0;
 local_28[6] = 0;
 local_28[7] = 0;
 local_28[0] = 0;
 local_28[1] = 0;
 local_28[2] = 0;
 local_28[3] = 0;
 lVar2 = 0;
 do {
 *(int *)((long)local_28 + lVar2) =
 *(int *)((long)&DAT_00102030 + lVar2) + *(int *)((long)&DAT_00102010 + lVar2);
 lVar2 = lVar2 + 4;
 } while (lVar2 != 0x20);
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_28[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 00101470 */

uint param_link_time_optimization(uint param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101480 */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00101490 */

void div_zero_handler(int signum)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 001014b0 */

uint param_division_by_zero(int param_1)

{
 int iVar1;
 uint uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 uVar2 = 0xffffffffU;
 if (iVar1 == 0) {
 uVar2 = (uint)(10 / (long)param_1);
 }
 else {
 uVar2 = 0xffffffffU;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 001014f0 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,SIG_DFL);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00101520 */

void segv_handler(int signum)

{
 (void)signum;
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00101540 */

uint param_null_pointer_deref(uint *param_1)

{
 int iVar1;
 uint uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00101570 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined1 local_14 [4];
 
 iVar1 = (int)param_null_pointer_deref(local_14);
 iVar2 = (int)param_null_pointer_deref(0);
 signal(0xb,SIG_DFL);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 001015b0 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 001015c0 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 return param_1;
}



/* Function: call_buffer_overflow @ 001015d0 */

undefined8 call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 001015e0 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 int iVar2;
 
 iVar2 = param_2 + param_1;
 if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar2 < 0)) {
 return -1;
 }
 iVar1 = -2;
 if (iVar2 < 1) {
 iVar1 = iVar2;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00101610 */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00101620 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00101630 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00101640 */

undefined8 param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 00101650 */

undefined8 call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 00101660 */

void test_obf_opt_edge(void)

{
 byte bVar1;
 byte *pbVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 ulong uVar7;
 long lVar8;
 undefined8 uVar9;
 byte local_38 [16];
 undefined8 uStack_30;
 undefined8 local_28;
 uint uStack_20;
 
 puts(&DAT_00102221);
 printf(&DAT_00102050,10);
 uVar7 = 6;
 iVar4 = 5;
 do {
 iVar5 = (int)uVar7;
 lVar8 = (long)iVar4;
 uVar7 = lVar8 % (long)iVar5 & 0xffffffff;
 iVar4 = iVar5;
 } while ((int)(lVar8 % (long)iVar5) != 0);
 uVar9 = 0x23;
 if (iVar5 == 1) {
 uVar9 = 0x14;
 }
 printf(&DAT_0010206c,uVar9);
 printf(&DAT_00102088,0xe1);
 strncpy((char *)&local_38,(char *)&param_string_encryption_encrypted,0x20);
 uStack_20 = uStack_20 & 0xffffffffffffff;
 bVar1 = local_38[0];
 pbVar2 = local_38;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar6 = strlen((char *)&local_38);
 lVar8 = 0;
 printf(&DAT_001020a5,(ulong)(uint)((int)(char)(byte)local_38 + (int)sVar6));
 param_tail_call_optimized(1000,0);
 printf(&DAT_001020c1,1000);
 uVar3 = param_non_tail_call(100);
 printf(&DAT_001020eb,(ulong)uVar3);
 local_28 = 0;
 uStack_20 = 0;
 memset(local_38, 0, 16);
 uStack_30 = 0;
 do {
 *(int *)((long)&local_38 + lVar8) =
 *(int *)((long)&DAT_00102030 + lVar8) + *(int *)((long)&DAT_00102010 + lVar8);
 lVar8 = lVar8 + 4;
 } while (lVar8 != 0x20);
 lVar8 = 0;
 uVar7 = 0;
 do {
 uVar7 = (ulong)(uint)((int)uVar7 + *(int *)((long)&local_38 + lVar8 * 4));
 lVar8 = lVar8 + 1;
 } while (lVar8 != 8);
 printf(&DAT_00102110,uVar7);
 printf(&DAT_00102136);
 param_division_by_zero(5);
 param_division_by_zero(0);
 param_division_by_zero(5);
 param_division_by_zero(0);
 signal(8,SIG_DFL);
 printf(&DAT_00102156);
 memcpy(local_38, &((uint64_t){CONCAT44((uint32_t)local_38[0],0x2a)}), sizeof(uint64_t));
 iVar4 = (int)param_null_pointer_deref(&local_38);
 iVar5 = (int)param_null_pointer_deref(0);
 signal(0xb,SIG_DFL);
 printf(&DAT_00102172,(ulong)(uint)(iVar5 + iVar4));
 printf(&DAT_0010218f,0x1e);
 printf(&DAT_001021ac,2000000000);
 printf(&DAT_001021dd,10);
 printf(&DAT_001021fa,0x2f);
 return;
}



/* Function: main @ 00101890 */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
