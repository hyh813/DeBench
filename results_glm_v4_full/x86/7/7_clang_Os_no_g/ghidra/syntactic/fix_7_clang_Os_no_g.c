/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t come from system headers */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Skip size_t redefinition - it's defined in system headers */
/* typedef unsigned long size_t; */
/* Skip ssize_t, uintptr_t, intptr_t, ptrdiff_t - they're defined in system headers */
/* typedef long ssize_t; */
/* typedef unsigned long uintptr_t; */
/* typedef long intptr_t; */
/* typedef unsigned long ptrdiff_t; */

/* Additional type definitions for Ghidra compatibility */
typedef unsigned char byte;
typedef int undefined;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef void (*code)(void);
typedef unsigned int uint;
typedef unsigned long ulong;

/* Standard library headers */
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Global variable definitions */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Data references */
int DAT_00012028[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int DAT_00012008[8] = {0, 0, 0, 0, 0, 0, 0, 0};
char DAT_00012219[] = "%s\n";
char DAT_00012048[] = "%d\n";
char DAT_00012064[] = "%d\n";
char DAT_00012080[] = "%d\n";
char DAT_0001209d[] = "%d\n";
char DAT_000120b9[] = "%d\n";
char DAT_000120e3[] = "%d\n";
char DAT_00012108[] = "%d\n";
char DAT_0001212e[] = "%d\n";
char DAT_0001214e[] = "%d\n";
char DAT_0001216a[] = "%d\n";
char DAT_00012187[] = "%d\n";
char DAT_000121a4[] = "%d\n";
char DAT_000121d5[] = "%d\n";
char DAT_000121f2[] = "%d\n";

/* Encrypted string data */
char param_string_encryption_encrypted[32] = {0};
extern int DAT_00012008[];
extern char DAT_00012219[];
extern char DAT_00012048[];
extern char DAT_00012064[];
extern char DAT_00012080[];
extern char DAT_0001209d[];
extern char DAT_000120b9[];
extern char DAT_000120e3[];
extern char DAT_00012108[];
extern char DAT_0001212e[];
extern char DAT_0001214e[];
extern char DAT_0001216a[];
extern char DAT_00012187[];
extern char DAT_000121a4[];
extern char DAT_000121d5[];
extern char DAT_000121f2[];

/* Encrypted string data */
extern char param_string_encryption_encrypted[];


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_fake_branch @ 00011244 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 00011249 */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 0001124f */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = param_1 + 1;
 iVar1 = param_1;
 iVar2 = iVar4;
 if (iVar4 == 0) {
 iVar3 = -1;
 }
 else {
 do {
 iVar3 = iVar2;
 iVar2 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar2 != 0);
 }
 iVar1 = param_1 * 3 + 0x14;
 if (iVar3 == 1 && iVar4 * iVar4 == (param_1 * 2 | 1U) + param_1 * param_1) {
 iVar1 = param_1 * 2 + 10;
 }
 return iVar1;
}



/* Function: call_opaque_predicate @ 00011298 */

undefined4 call_opaque_predicate(void)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = 5;
 iVar4 = 6;
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



/* Function: param_instruction_substitution @ 000112be */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}



/* Function: call_instruction_substitution @ 000112d4 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 000112da */

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



/* Function: param_string_encryption @ 00011326 */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte *pbVar3;
 int iVar4;
 byte local_2c [31];
 undefined1 local_d;
 
 pbVar3 = local_2c;
 strncpy((char *)local_2c,(char *)&param_string_encryption_encrypted,0x20);
 local_d = 0;
 bVar1 = local_2c[0];
 if (local_2c[0] == 0) {
 iVar4 = 0;
 }
 else {
 do {
 *pbVar3 = bVar1 ^ 0x5a;
 bVar1 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 } while (bVar1 != 0);
 iVar4 = (int)(char)local_2c[0];
 }
 sVar2 = strlen((char *)local_2c);
 return sVar2 + iVar4;
}



/* Function: call_string_encryption @ 00011388 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 000113a2 */

int param_tail_call_optimized(int param_1,int param_2)

{
 uint uVar1;
 long long lVar2;
 
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 lVar2 = (unsigned long long)uVar1 * (unsigned long long)(param_1 - 2);
 param_2 = (param_2 + param_1 + uVar1 * uVar1) -
 ((int)((unsigned long long)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 000113cc */

undefined4 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 000113d2 */

int param_non_tail_call(int param_1)

{
 uint uVar1;
 long long lVar2;
 int iVar3;
 
 if (param_1 < 1) {
 iVar3 = 0;
 }
 else {
 uVar1 = param_1 - 1;
 lVar2 = (unsigned long long)uVar1 * (unsigned long long)(param_1 - 2);
 iVar3 = (uVar1 * uVar1 + param_1) - ((int)((unsigned long long)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1)
 ;
 }
 return iVar3;
}



/* Function: call_non_tail_call @ 000113f8 */

undefined4 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 000113fe */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_4) {
 iVar2 = 0;
 do {
 *(int *)(param_3 + iVar2 * 4) = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_4 != iVar2);
 if (0 < param_4) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (param_4 != iVar1);
 return iVar2;
 }
 }
 return 0;
}



/* Function: call_vectorized_loop @ 0001143d */

int call_vectorized_loop(void)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int local_24 [8];
 
 iVar1 = 0;
 local_24[7] = 0;
 local_24[6] = 0;
 local_24[5] = 0;
 local_24[4] = 0;
 local_24[3] = 0;
 local_24[2] = 0;
 local_24[1] = 0;
 local_24[0] = 0;
 piVar2 = &DAT_00012028;
 piVar4 = &DAT_00012008;
 do {
 local_24[iVar1] = *piVar2 + *piVar4;
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 piVar4 = piVar4 + 1;
 } while (iVar1 != 8);
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_24[iVar3];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 0001149f */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 000114a9 */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 000114af */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000114d8 */

undefined4 param_division_by_zero(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = (undefined4)(10 / (long long)param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00011526 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(void (*)(int))0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 0001156f */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011598 */

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



/* Function: call_null_pointer_deref @ 000115e1 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_14;
 
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(void (*)(int))0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011630 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011635 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 return param_1;
}



/* Function: call_buffer_overflow @ 0001163a */

undefined4 call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 00011640 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_2 + param_1;
 if ((((int)param_1 < 1) || ((int)param_2 < 1)) || (-1 < iVar1)) {
 iVar2 = -2;
 if (iVar1 < 1) {
 iVar2 = iVar1;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar2 = iVar1;
 }
 }
 else {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: call_integer_overflow @ 0001166e */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00011674 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 0001167b */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00011681 */

undefined4 param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 00011687 */

undefined4 call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 0001168d */

void test_obf_opt_edge(void)

{
 int iVar1;
 undefined4 uVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int *piVar6;
 int local_28 [8];
 
 puts(&DAT_00012219);
 printf(&DAT_00012048,10);
 iVar1 = 5;
 iVar5 = 6;
 do {
 iVar4 = iVar5;
 iVar5 = iVar1 % iVar4;
 iVar1 = iVar4;
 } while (iVar5 != 0);
 uVar2 = 0x23;
 if (iVar4 == 1) {
 uVar2 = 0x14;
 }
 printf(&DAT_00012064,uVar2);
 printf(&DAT_00012080,0xe1);
 uVar2 = param_string_encryption();
 printf(&DAT_0001209d,uVar2);
 printf(&DAT_000120b9,0x7a314);
 printf(&DAT_000120e3,0x13ba);
 iVar1 = 0;
 local_28[7] = 0;
 local_28[6] = 0;
 local_28[5] = 0;
 local_28[4] = 0;
 local_28[3] = 0;
 local_28[2] = 0;
 local_28[1] = 0;
 local_28[0] = 0;
 piVar3 = &DAT_00012028;
 piVar6 = &DAT_00012008;
 do {
 local_28[iVar1] = *piVar3 + *piVar6;
 iVar1 = iVar1 + 1;
 piVar3 = piVar3 + 1;
 piVar6 = piVar6 + 1;
 } while (iVar1 != 8);
 iVar5 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_28[iVar5];
 iVar5 = iVar5 + 1;
 } while (iVar5 != 8);
 printf(&DAT_00012108,iVar1);
 printf(&DAT_0001212e,0x14);
 uVar2 = call_division_by_zero();
 printf(&DAT_0001214e,uVar2);
 uVar2 = call_null_pointer_deref();
 printf(&DAT_0001216a,uVar2);
 printf(&DAT_00012187,0x1e);
 printf(&DAT_000121a4,2000000000);
 printf(&DAT_000121d5,10);
 printf(&DAT_000121f2,0x2b);
 return;
}



/* Function: main @ 00011856 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
