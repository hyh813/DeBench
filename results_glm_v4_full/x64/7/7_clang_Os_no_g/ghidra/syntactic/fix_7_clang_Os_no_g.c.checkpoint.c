/* Auto-injected type definitions by preprocessor */
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

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Decompiler-specific type definitions */
typedef unsigned char byte;
typedef void (*code)(void);
typedef int undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

/* Global variables for signal handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* String data references */
extern char DAT_00102221[];
extern char DAT_00102050[];
extern char DAT_0010206c[];
extern char DAT_00102088[];
extern char DAT_001020a5[];
extern char DAT_001020c1[];
extern char DAT_001020eb[];
extern char DAT_00102110[];
extern char DAT_00102136[];
extern char DAT_00102156[];
extern char DAT_00102172[];
extern char DAT_0010218f[];
extern char DAT_001021ac[];
extern char DAT_001021dd[];
extern char DAT_001021fa[];

/* Integer array references */
extern int UNK_00102034[];
extern int UNK_00102038[];
extern int UNK_0010203c[];
extern int UNK_00102014[];
extern int UNK_00102018[];
extern int UNK_0010201c[];
extern int DAT_00102030[];
extern int DAT_00102010[];

/* Encrypted string reference */
extern char param_string_encryption_encrypted[];

/* Define missing format string data */
char DAT_00102221[] = "test_obf_opt_edge\n";
char DAT_00102050[] = "%d\n";
char DAT_0010206c[] = "%llu\n";
char DAT_00102088[] = "%llu\n";
char DAT_001020a5[] = "%llu\n";
char DAT_001020c1[] = "0x%llx\n";
char DAT_001020eb[] = "0x%llx\n";
char DAT_00102110[] = "%llu\n";
char DAT_00102136[] = "%llu\n";
char DAT_00102156[] = "%llu\n";
char DAT_00102172[] = "%llu\n";
char DAT_0010218f[] = "%llu\n";
char DAT_001021ac[] = "%llu\n";
char DAT_001021dd[] = "%llu\n";
char DAT_001021fa[] = "0x%llx\n";

/* Define missing integer arrays */
int DAT_00102030[] = {1, 2, 3, 4};
int DAT_00102010[] = {5, 6, 7, 8};
int UNK_00102014[] = {9, 10, 11, 12};
int UNK_00102018[] = {13, 14, 15, 16};
int UNK_0010201c[] = {17, 18, 19, 20};
int UNK_00102034[] = {21, 22, 23, 24};
int UNK_00102038[] = {25, 26, 27, 28};
int UNK_0010203c[] = {29, 30, 31, 32};

/* Encrypted string (XOR key 0x5a) */
char param_string_encryption_encrypted[32] = {
 0x32, 0x35, 0x32, 0x32, 0x3f, 0x7c, 0x32, 0x3b,
 0x7d, 0x32, 0x35, 0x28, 0x00, 0x5a, 0x5a, 0x5a,
 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a,
 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a, 0x5a
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




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




/* Function: param_fake_branch @ 0010119c */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 0010119f */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 001011a5 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 iVar5 = param_1 + 1;
 iVar4 = iVar5;
 iVar1 = param_1;
 iVar3 = -1;
 while (iVar2 = iVar4, iVar2 != 0) {
 iVar4 = iVar1 % iVar2;
 iVar1 = iVar2;
 iVar3 = iVar2;
 }
 iVar1 = param_1 * 3 + 0x14;
 if (iVar3 == 1 && iVar5 * iVar5 == (param_1 * 2 | 1U) + param_1 * param_1) {
 iVar1 = param_1 * 2 + 10;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 001011e9 */

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



/* Function: param_instruction_substitution @ 0010120f */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00101223 */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101229 */

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



/* Function: param_string_encryption @ 00101269 */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 byte *pbVar4;
 byte local_28 [31];
 undefined1 local_9;
 
 pbVar4 = local_28;
 strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 bVar1 = local_28[0];
 if (local_28[0] == 0) {
 iVar3 = 0;
 }
 else {
 do {
 *pbVar4 = bVar1 ^ 0x5a;
 bVar1 = pbVar4[1];
 pbVar4 = pbVar4 + 1;
 } while (bVar1 != 0);
 iVar3 = (int)(char)local_28[0];
 }
 sVar2 = strlen((char *)local_28);
 return (int)sVar2 + iVar3;
}



/* Function: param_tail_call_optimized @ 001012c0 */

int param_tail_call_optimized(int param_1,int param_2)

{
 uint uVar1;
 
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((ulong)(param_1 - 2) * (ulong)uVar1 >> 1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 001012dd */

undefined8 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 001012e3 */

int param_non_tail_call(int param_1)

{
 uint uVar1;
 
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 return (uVar1 * uVar1 + param_1) - (int)((ulong)(param_1 - 2) * (ulong)uVar1 >> 1);
 }
 return 0;
}



/* Function: call_non_tail_call @ 001012ff */

undefined8 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00101305 */

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
 if (0 < (int)param_4) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_4 != uVar2);
 return iVar1;
 }
 }
 return 0;
}



/* Function: call_vectorized_loop @ 0010133a */

int call_vectorized_loop(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 long lVar7;
 undefined1 local_28 [16];
 undefined1 local_18 [16];
 
 memset(local_18, 0, sizeof(local_18));
 memset(local_28, 0, sizeof(local_28));
 lVar7 = 0;
 do {
 iVar1 = *(int *)(&UNK_00102034 + lVar7);
 iVar2 = *(int *)(&UNK_00102038 + lVar7);
 iVar3 = *(int *)(&UNK_0010203c + lVar7);
 iVar4 = *(int *)(&UNK_00102014 + lVar7);
 iVar5 = *(int *)(&UNK_00102018 + lVar7);
 iVar6 = *(int *)(&UNK_0010201c + lVar7);
 *(int *)(local_28 + lVar7) = *(int *)(&DAT_00102030 + lVar7) + *(int *)(&DAT_00102010 + lVar7);
 *(int *)(local_28 + lVar7 + 4) = iVar1 + iVar4;
 *(int *)(local_28 + lVar7 + 8) = iVar2 + iVar5;
 *(int *)(local_28 + lVar7 + 0xc) = iVar3 + iVar6;
 lVar7 = lVar7 + 0x10;
 } while (lVar7 != 0x20);
 return ((int*)local_18)[3] + ((int*)local_28)[3] + ((int*)local_18)[1] + ((int*)local_28)[1] +
        ((int*)local_18)[2] + ((int*)local_28)[2] + ((int*)local_18)[0] + ((int*)local_28)[0];
}



/* Function: param_link_time_optimization @ 00101397 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 0010139e */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 001013a4 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer, 1);
}



/* Function: param_division_by_zero @ 001013c0 */

ulong param_division_by_zero(int param_1)

{
 int iVar1;
 ulong uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 10 / (long)param_1 & 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 001013f8 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00101427 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer, 1);
}



/* Function: param_null_pointer_deref @ 00101443 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}



/* Function: call_null_pointer_deref @ 00101473 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_null_pointer_deref((undefined4 *)0);
 iVar2 = param_null_pointer_deref((undefined4 *)0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 001014a8 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 001014ab */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 return param_1;
}



/* Function: call_buffer_overflow @ 001014ae */

undefined8 call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 001014b4 */

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



/* Function: call_integer_overflow @ 001014d9 */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 001014df */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 001014e3 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 001014e9 */

undefined8 param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 001014ef */

undefined8 call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 001014f5 */

void test_obf_opt_edge(void)

{
 long lVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 ulong uVar5;
 undefined8 uVar6;
 
 puts(&DAT_00102221);
 printf(&DAT_00102050,10);
 uVar5 = 6;
 iVar2 = 5;
 do {
 iVar4 = (int)uVar5;
 lVar1 = (long)iVar2;
 uVar5 = lVar1 % (long)iVar4 & 0xffffffff;
 iVar2 = iVar4;
 } while ((int)(lVar1 % (long)iVar4) != 0);
 uVar6 = 0x23;
 if (iVar4 == 1) {
 uVar6 = 0x14;
 }
 printf(&DAT_0010206c,uVar6);
 printf(&DAT_00102088,0xe1);
 uVar3 = param_string_encryption();
 printf(&DAT_001020a5,(ulong)uVar3);
 printf(&DAT_001020c1,0x7a314);
 printf(&DAT_001020eb,0x13ba);
 uVar3 = call_vectorized_loop();
 printf(&DAT_00102110,(ulong)uVar3);
 printf(&DAT_00102136,0x14);
 uVar3 = call_division_by_zero();
 printf(&DAT_00102156,(ulong)uVar3);
 uVar3 = call_null_pointer_deref();
 printf(&DAT_00102172,(ulong)uVar3);
 printf(&DAT_0010218f,0x1e);
 printf(&DAT_001021ac,2000000000);
 printf(&DAT_001021dd,10);
 printf(&DAT_001021fa,0x2f);
 return;
}



/* Function: main @ 00101635 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 40 */
