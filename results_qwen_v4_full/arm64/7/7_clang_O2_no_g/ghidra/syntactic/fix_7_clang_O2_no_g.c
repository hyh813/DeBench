/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <setjmp.h>

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
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*__sighandler_t)(int);
typedef void (*code)(void);
typedef unsigned long undefined;

#define CONCAT44(hi, lo) (((undefined8)(hi) << 32) | (lo))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_clang_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Global variable declarations */
extern char DAT_001012ad[];

/* Global variable definitions */
static char completed_0 = 0;
static void *__dso_handle = 0;
static int div_zero_caught = 0;
static jmp_buf jmp_buffer;
static int segv_caught = 0;
static jmp_buf segv_buffer;
static byte param_string_encryption_encrypted[32] = {0};

/* Stub function definitions */
static void __cxa_finalize(void *p) { }
extern char DAT_001010dc[];
extern char DAT_001010f8[];
extern char DAT_00101114[];
extern char DAT_00101131[];
extern char DAT_0010114d[];
extern char DAT_00101177[];
extern char DAT_0010119c[];
extern char DAT_001011c2[];
extern char DAT_001011e2[];
extern char DAT_001011fe[];
extern char DAT_0010121b[];
extern char DAT_00101238[];
extern char DAT_00101269[];
extern char DAT_00101286[];

/* String literal definitions */
char DAT_001012ad[] = "Test output\n";
char DAT_001010dc[] = "%d\n";
char DAT_001010f8[] = "%lu\n";
char DAT_00101114[] = "%lu\n";
char DAT_00101131[] = "%lu\n";
char DAT_0010114d[] = "%lu\n";
char DAT_00101177[] = "%lu\n";
char DAT_0010119c[] = "%lu\n";
char DAT_001011c2[] = "%lu\n";
char DAT_001011e2[] = "%lu\n";
char DAT_001011fe[] = "%lu\n";
char DAT_0010121b[] = "%lu\n";
char DAT_00101238[] = "%d\n";
char DAT_00101269[] = "%d\n";
char DAT_00101286[] = "%lu\n";

/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 00100914 */

static void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 00100918 */

static undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100920 */

static int param_opaque_predicate(int param_1)

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

static undefined4 call_opaque_predicate(void)

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

static int param_instruction_substitution(uint param_1)

{
 return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}



/* Function: call_instruction_substitution @ 001009bc */

static undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: param_string_encryption @ 00100a2c */

static int param_string_encryption(void)

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



/* Function: call_string_encryption @ 00100aa4 */

static int call_string_encryption(void)

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



/* Function: param_tail_call_optimized @ 00100b1c */

static int param_tail_call_optimized(int param_1,int param_2)

{
 uint uVar1;
 
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00100b44 */

static undefined8 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100b50 */

static int param_non_tail_call(int param_1)

{
 uint uVar1;
 
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 return (param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 00100b78 */

static undefined8 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100b80 */

static int param_vectorized_loop(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
 undefined8 *puVar1;
 undefined8 *puVar2;
 ulong uVar3;
 ulong uVar4;
 long lVar5;
 ulong uVar6;
 undefined8 *puVar7;
 int *piVar8;
 undefined8 *puVar9;
 int *piVar10;
 undefined8 *puVar11;
 long lVar12;
 int *piVar13;
 int iVar14;
 undefined8 uVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 undefined8 uVar20;
 int iVar21;
 int iVar22;
 undefined8 uVar23;
 int iVar24;
 undefined8 uVar25;
 undefined8 uVar26;
 undefined8 uVar27;
 
 if ((int)param_4 < 1) {
 return 0;
 }
 uVar3 = (ulong)param_4;
 if (param_4 < 8) {
 uVar4 = 0;
 }
 else {
 lVar5 = uVar3 * 4;
 uVar4 = 0;
 if ((param_1 + lVar5 <= param_3 || param_3 + lVar5 <= param_1) &&
 (param_2 + lVar5 <= param_3 || param_3 + lVar5 <= param_2)) {
 uVar4 = uVar3 & 0xfffffff8;
 puVar7 = (undefined8 *)(param_1 + 0x10);
 puVar9 = (undefined8 *)(param_2 + 0x10);
 puVar11 = (undefined8 *)(param_3 + 0x10);
 uVar6 = uVar4;
 do {
 puVar1 = puVar7 + -1;
 uVar15 = puVar7[-2];
 uVar23 = puVar7[1];
 uVar20 = *puVar7;
 puVar7 = puVar7 + 4;
 uVar6 = uVar6 - 8;
 puVar2 = puVar9 + -1;
 uVar25 = puVar9[-2];
 uVar27 = puVar9[1];
 uVar26 = *puVar9;
 puVar9 = puVar9 + 4;
 puVar11[-1] = CONCAT44((int)((ulong)*puVar2 >> 0x20) + (int)((ulong)*puVar1 >> 0x20),
 (int)*puVar2 + (int)*puVar1);
 puVar11[-2] = CONCAT44((int)((ulong)uVar25 >> 0x20) + (int)((ulong)uVar15 >> 0x20),
 (int)uVar25 + (int)uVar15);
 puVar11[1] = CONCAT44((int)((ulong)uVar27 >> 0x20) + (int)((ulong)uVar23 >> 0x20),
 (int)uVar27 + (int)uVar23);
 *puVar11 = CONCAT44((int)((ulong)uVar26 >> 0x20) + (int)((ulong)uVar20 >> 0x20),
 (int)uVar26 + (int)uVar20);
 puVar11 = puVar11 + 4;
 } while (uVar6 != 0);
 if (uVar4 == uVar3) goto LAB_00100c50;
 }
 }
 lVar12 = uVar4 * 4;
 lVar5 = uVar3 - uVar4;
 piVar8 = (int *)(param_3 + lVar12);
 piVar10 = (int *)(param_2 + lVar12);
 piVar13 = (int *)(param_1 + lVar12);
 do {
 lVar5 = lVar5 + -1;
 *piVar8 = *piVar10 + *piVar13;
 piVar8 = piVar8 + 1;
 piVar10 = piVar10 + 1;
 piVar13 = piVar13 + 1;
 } while (lVar5 != 0);
LAB_00100c50:
 if ((int)param_4 < 1) {
 return 0;
 }
 if (param_4 < 8) {
 uVar6 = 0;
 iVar14 = 0;
 }
 else {
 uVar6 = uVar3 & 0xfffffff8;
 puVar7 = (undefined8 *)(param_3 + 0x10);
 iVar14 = 0;
 iVar16 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar21 = 0;
 iVar22 = 0;
 iVar24 = 0;
 uVar4 = uVar6;
 do {
 puVar9 = puVar7 + -2;
 puVar11 = puVar7 + -1;
 puVar1 = puVar7 + 1;
 uVar15 = *puVar7;
 puVar7 = puVar7 + 4;
 uVar4 = uVar4 - 8;
 iVar14 = (int)*puVar9 + iVar14;
 iVar16 = (int)((ulong)*puVar9 >> 0x20) + iVar16;
 iVar17 = (int)*puVar11 + iVar17;
 iVar18 = (int)((ulong)*puVar11 >> 0x20) + iVar18;
 iVar19 = (int)uVar15 + iVar19;
 iVar21 = (int)((ulong)uVar15 >> 0x20) + iVar21;
 iVar22 = (int)*puVar1 + iVar22;
 iVar24 = (int)((ulong)*puVar1 >> 0x20) + iVar24;
 } while (uVar4 != 0);
 iVar14 = iVar19 + iVar14 + iVar21 + iVar16 + iVar22 + iVar17 + iVar24 + iVar18;
 if (uVar6 == uVar3) {
 return iVar14;
 }
 }
 lVar5 = uVar3 - uVar6;
 piVar8 = (int *)(param_3 + uVar6 * 4);
 do {
 lVar5 = lVar5 + -1;
 iVar14 = *piVar8 + iVar14;
 piVar8 = piVar8 + 1;
 } while (lVar5 != 0);
 return iVar14;
}



/* Function: call_vectorized_loop @ 00100cd0 */

static undefined8 call_vectorized_loop(void)

{
 return 0x48;
}



/* Function: param_link_time_optimization @ 00100cd8 */

static int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100ce4 */

static undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00100cec */

static void div_zero_handler(int param_1)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((void*)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100d10 */

static int param_division_by_zero(int param_1)

{
 int iVar1;
 
 signal(8,(__sighandler_t)div_zero_handler);
 iVar1 = _setjmp((void*)jmp_buffer);
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



/* Function: call_division_by_zero @ 00100d5c */

static int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00100d9c */

static void segv_handler(int param_1)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((void*)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00100dc0 */

static undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,(__sighandler_t)segv_handler);
 iVar1 = _setjmp((void*)segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00100e08 */

static int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_24;
 
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00100e58 */

static void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00100e5c */

static void param_buffer_overflow_heap(void)

{
 return;
}



/* Function: call_buffer_overflow @ 00100e60 */

static undefined8 call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 00100e68 */

static int param_integer_overflow(uint param_1,uint param_2)

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



/* Function: call_integer_overflow @ 00100ea0 */

static undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100eac */

static int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00100eb4 */

static undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00100ebc */

static undefined8 param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 00100ec4 */

static undefined8 call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100ecc */

static int test_obf_opt_edge(void)

{
 byte bVar1;
 int iVar2;
 int iVar3;
 size_t sVar4;
 int iVar5;
 uint uVar6;
 byte *pbVar7;
 uint local_40 [7];
 undefined1 local_21;
 
 puts((char *)&DAT_001012ad);
 printf((char *)&DAT_001010dc,10);
 iVar2 = 6;
 iVar3 = 5;
 do {
 iVar5 = iVar2;
 iVar2 = 0;
 if (iVar5 != 0) {
 iVar2 = iVar3 / iVar5;
 }
 iVar2 = iVar3 - iVar2 * iVar5;
 iVar3 = iVar5;
 } while (iVar2 != 0);
 uVar6 = 0x14;
 if (iVar5 != 1) {
 uVar6 = 0x23;
 }
 printf((char *)&DAT_001010f8,(ulong)uVar6);
 printf((char *)&DAT_00101114,0xe1);
 strncpy((char *)local_40,(char *)&param_string_encryption_encrypted,0x20);
 uVar6 = local_40[0] & 0xff;
 local_21 = 0;
 if ((char)local_40[0] == '\0') {
 uVar6 = 0;
 }
 else {
 pbVar7 = (byte *)((ulong)local_40 | 1);
 do {
 bVar1 = (byte)uVar6;
 uVar6 = (uint)*pbVar7;
 pbVar7[-1] = bVar1 ^ 0x5a;
 pbVar7 = pbVar7 + 1;
 } while (uVar6 != 0);
 uVar6 = local_40[0] & 0xff;
 }
 sVar4 = strlen((char *)local_40);
 printf((char *)&DAT_00101131,(ulong)((int)sVar4 + uVar6));
 printf((char *)&DAT_0010114d,0x7a314);
 printf((char *)&DAT_00101177,0x13ba);
 printf((char *)&DAT_0010119c,0x48);
 printf((char *)&DAT_001011c2,0x14);
 iVar2 = param_division_by_zero(5);
 iVar3 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0);
 printf((char *)&DAT_001011e2,(ulong)(uint)(iVar3 + iVar2));
 local_40[0] = 0x2a;
 iVar2 = param_null_pointer_deref(local_40);
 iVar3 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0);
 printf((char *)&DAT_001011fe,(ulong)(uint)(iVar3 + iVar2));
 printf((char *)&DAT_0010121b,0x1e);
 printf((char *)&DAT_00101238,2000000000);
 printf((char *)&DAT_00101269,10);
 iVar2 = printf((char *)&DAT_00101286,0x30);
 return iVar2;
}



/* Function: main @ 001010ac */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
