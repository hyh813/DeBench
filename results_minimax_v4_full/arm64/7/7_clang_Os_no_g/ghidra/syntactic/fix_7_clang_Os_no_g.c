/* Auto-injected type definitions by preprocessor */
#include <setjmp.h>
#include <string.h>
#include <signal.h>
#include <stdio.h>

/* Compiler builtin for concatenating 44-bit values */
#define CONCAT44(x, y) (((uint64_t)(x) << 32) | ((uint32_t)(y)))

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long ulong;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
// typedef long long int64_t; // Already defined in stdint.h
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned long undefined;
typedef unsigned char byte;
typedef unsigned int uint;
typedef void (*__sighandler_t)(int);
typedef void (*code)();

/* External data from binary - treated as addresses for vectorized loop */
/* These are defined as actual data arrays to simulate the binary's data section */
unsigned long DAT_00100f10_arr[4] = {0x11111111, 0x22222222, 0x33333333, 0x44444444};
unsigned long DAT_00100f30_arr[4] = {0x55555555, 0x66666666, 0x77777777, 0x88888888};
unsigned long UNK_00100f38_arr[4] = {0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, 0xCCCCCCCC};
unsigned long UNK_00100f18_arr[4] = {0xDDDDDDDD, 0xEEEEEEEE, 0xFFFFFFFF, 0x12345678};
unsigned long DAT_00100f10 = (unsigned long)DAT_00100f10_arr;
unsigned long DAT_00100f30 = (unsigned long)DAT_00100f30_arr;
unsigned long UNK_00100f38 = (unsigned long)UNK_00100f38_arr;
unsigned long UNK_00100f18 = (unsigned long)UNK_00100f18_arr;

/* Encrypted string data for param_string_encryption - XOR key 0x5a */
const char param_string_encryption_encrypted[] = "\x20\x3b\x35\x34\x34\x34\x3c\x38\x38\x38\x3c\x2a\x30\x30\x30\x34\x3c\x3a\x32\x32\x32\x2c\x2e\x3c\x3c\x3c\x2a\x38\x32\x30\x30";

/* String data definitions for format strings */
const char DAT_00100f88[] = "%x\n";
const char DAT_00100fa5[] = "%u\n";
const char DAT_0010108f[] = "%x\n";
const char DAT_00101036[] = "%d\n";
const char DAT_001010ac[] = "%u\n";
const char DAT_001010dd[] = "%d\n";
const char DAT_00101056[] = "%d\n";
const char DAT_00101072[] = "%d\n";
const char DAT_00100fc1[] = "%x\n";
const char DAT_00100feb[] = "%x\n";
const char DAT_00100f50[] = "Value: %d\n";
const char DAT_00100f6c[] = "Opaque: %x\n";
const char DAT_00101010[] = "%d\n";
const char DAT_001010fa[] = "%d\n";
const char DAT_00101121[] = "test_obf_opt_edge\n";

/* Global variables */
char completed_0 = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
char div_zero_caught = 0;
char segv_caught = 0;

/* External declarations */
void __cxa_finalize(void *);
void __dso_handle(void);
void deregister_tm_clones(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_clang_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100730 @ 00100730 */

void FUN_00100730(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones - stub implementation */
void deregister_tm_clones(void)
{
 return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00100914 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 00100918 */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100920 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = param_1 + 1;
 iVar3 = param_1;
 iVar2 = iVar1;
 if (param_1 == -1) {
 iVar4 = -1;
 }
 else {
 do {
 iVar4 = iVar2;
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 } while (iVar2 != 0);
 }
 iVar2 = param_1 * 2 + 10;
 if (iVar4 != 1 || (param_1 * 2 | 1U) + param_1 * param_1 != iVar1 * iVar1) {
 iVar2 = param_1 * 3 + 0x14;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 00100978 */

undefined4 call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 int iVar4;
 
 iVar1 = 6;
 iVar4 = 5;
 do {
 iVar2 = iVar1;
 iVar1 = 0;
 if (iVar2 != 0) {
 iVar1 = iVar4 / iVar2;
 }
 iVar1 = iVar4 - iVar1 * iVar2;
 iVar4 = iVar2;
 } while (iVar1 != 0);
 uVar3 = 0x14;
 if (iVar2 != 1) {
 uVar3 = 0x23;
 }
 return uVar3;
}



/* Function: param_instruction_substitution @ 001009a8 */

int param_instruction_substitution(uint param_1)

{
 return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}



/* Function: call_instruction_substitution @ 001009bc */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 001009c4 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte bVar2;
 byte *pbVar3;
 
 strncpy((char *)param_2,param_1,(int)param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar3 = param_2;
 while (bVar1 != 0) {
 bVar2 = bVar1 ^ param_4;
 bVar1 = pbVar3[1];
 *pbVar3 = bVar2;
 pbVar3 = pbVar3 + 1;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00100a2c */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte bVar3;
 byte *pbVar4;
 uint uVar5;
 byte local_40 [31];
 undefined1 local_21;
 
 strncpy((char *)local_40,(char *)&param_string_encryption_encrypted,0x20);
 local_21 = 0;
 if (local_40[0] == 0) {
 uVar5 = 0;
 }
 else {
 pbVar4 = (byte *)((ulong)local_40 | 1);
 bVar3 = local_40[0];
 do {
 bVar1 = bVar3 ^ 0x5a;
 bVar3 = *pbVar4;
 pbVar4[-1] = bVar1;
 pbVar4 = pbVar4 + 1;
 } while (bVar3 != 0);
 uVar5 = (uint)local_40[0];
 }
 sVar2 = strlen((char *)local_40);
 return (int)sVar2 + uVar5;
}



/* Function: param_tail_call_optimized @ 00100aa8 */

int param_tail_call_optimized(int param_1,int param_2)

{
 uint uVar1;
 
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00100ad0 */

undefined8 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100adc */

int param_non_tail_call(int param_1)

{
 uint uVar1;
 
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 return (param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 00100b04 */

undefined8 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100b0c */

int param_vectorized_loop(int *param_1,int *param_2,int *param_3,uint param_4)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 int *piVar4;
 
 if (0 < (int)param_4) {
 uVar2 = (ulong)param_4;
 uVar3 = uVar2;
 piVar4 = param_3;
 do {
 uVar3 = uVar3 - 1;
 *piVar4 = *param_2 + *param_1;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 piVar4 = piVar4 + 1;
 } while (uVar3 != 0);
 if (0 < (int)param_4) {
 iVar1 = 0;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_3 + iVar1;
 param_3 = param_3 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00100b60 */

int call_vectorized_loop(void)

{
 long lVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 undefined8 local_20 [4];
 
 lVar1 = 0;
 local_20[1] = 0;
 local_20[0] = 0;
 local_20[3] = 0;
 local_20[2] = 0;
 do {
 uVar2 = *(undefined8 *)(&DAT_00100f10 + lVar1);
 uVar3 = *(undefined8 *)(&DAT_00100f30 + lVar1);
 *(ulong *)((long)local_20 + lVar1 + 8) =
 CONCAT44((int)((ulong)*(undefined8 *)(&UNK_00100f38 + lVar1) >> 0x20) +
 (int)((ulong)*(undefined8 *)(&UNK_00100f18 + lVar1) >> 0x20),
 (int)*(undefined8 *)(&UNK_00100f38 + lVar1) +
 (int)*(undefined8 *)(&UNK_00100f18 + lVar1));
 *(ulong *)((long)local_20 + lVar1) =
 CONCAT44((int)((ulong)uVar3 >> 0x20) + (int)((ulong)uVar2 >> 0x20),(int)uVar3 + (int)uVar2)
 ;
 lVar1 = lVar1 + 0x10;
 } while (lVar1 != 0x20);
 return (int)local_20[2] + (int)local_20[0] +
 (int)((ulong)local_20[2] >> 0x20) + (int)((ulong)local_20[0] >> 0x20) +
 (int)local_20[3] + (int)local_20[1] +
 (int)((ulong)local_20[3] >> 0x20) + (int)((ulong)local_20[1] >> 0x20);
}



/* Function: param_link_time_optimization @ 00100bb4 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100bc0 */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00100bc8 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100bec */

int param_division_by_zero(int param_1)

{
 int iVar1;
 
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
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



/* Function: call_division_by_zero @ 00100c38 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00100c78 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00100c9c */

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



/* Function: call_null_pointer_deref @ 00100ce4 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_24;
 
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00100d34 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00100d38 */

void param_buffer_overflow_heap(void)

{
 return;
}



/* Function: call_buffer_overflow @ 00100d3c */

undefined8 call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 00100d44 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_2 + param_1;
 if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1 || -1 < (int)(param_2 & param_1)) {
 iVar2 = iVar1;
 }
 return iVar2;
}



/* Function: call_integer_overflow @ 00100d7c */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100d88 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00100d90 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00100d98 */

undefined8 param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 00100da0 */

undefined8 call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100da8 */

int test_obf_opt_edge(void)

{
 int iVar1;
 ulong uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 puts(DAT_00101121);
 printf(DAT_00100f50,10);
 iVar1 = 6;
 iVar5 = 5;
 do {
 iVar3 = iVar1;
 iVar1 = 0;
 if (iVar3 != 0) {
 iVar1 = iVar5 / iVar3;
 }
 iVar1 = iVar5 - iVar1 * iVar3;
 iVar5 = iVar3;
 } while (iVar1 != 0);
 uVar4 = 0x14;
 if (iVar3 != 1) {
 uVar4 = 0x23;
 }
 printf(DAT_00100f6c,(ulong)uVar4);
 iVar1 = printf(DAT_00100f88,0xe1);
 uVar2 = param_string_encryption();
 printf(DAT_00100fa5,uVar2 & 0xffffffff);
 printf(DAT_00100fc1,0x7a314);
 iVar1 = printf(DAT_00100feb,0x13ba);
 uVar2 = call_vectorized_loop();
 printf(DAT_00101010,uVar2 & 0xffffffff);
 iVar1 = printf(DAT_00101036,0x14);
 uVar2 = call_division_by_zero();
 iVar1 = printf(DAT_00101056,uVar2 & 0xffffffff);
 uVar2 = call_null_pointer_deref();
 printf(DAT_00101072,uVar2 & 0xffffffff);
 printf(DAT_0010108f,0x1e);
 printf(DAT_001010ac,2000000000);
 printf(DAT_001010dd,10);
 iVar1 = printf(DAT_001010fa,0x30);
 return iVar1;
}



/* Function: main @ 00100ee0 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 42 */
