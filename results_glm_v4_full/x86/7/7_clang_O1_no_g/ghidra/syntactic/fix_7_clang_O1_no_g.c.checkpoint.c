/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;


typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library headers */
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* Ghidra-specific type definitions */
typedef unsigned char byte;
typedef int undefined;
typedef int undefined4;
typedef unsigned char undefined1;
typedef void (*code)(void);
typedef long long longlong;

/* Global data declarations */
extern int DAT_00012028[8];
int DAT_00012008[8] = {0};
int DAT_00012028[8] = {0};
extern char DAT_00012219[];
extern char DAT_00012048[];
extern char DAT_00012064[];
extern char DAT_00012080[];
char DAT_00012219[] = "Test output\n";
char DAT_00012048[] = "%d\n";
char DAT_00012064[] = "%d\n";
char DAT_00012080[] = "%d\n";
char DAT_0001209d[] = "%d\n";
char DAT_000120b9[] = "%d\n";
char DAT_000120e3[] = "%d\n";
extern char DAT_00012108[];
extern char DAT_0001212e[];
char DAT_00012108[] = "%d\n";
char DAT_0001212e[] = "%d\n";
char DAT_0001214e[] = "%d\n";
extern char DAT_0001216a[];
char DAT_0001216a[] = "%d\n";
char DAT_00012187[] = "%d\n";
extern char DAT_000121a4[];
char DAT_000121a4[] = "%d\n";
char DAT_000121d5[] = "%d\n";
extern char DAT_000121f2[];
char DAT_000121f2[] = "%d\n";
byte param_string_encryption_encrypted[32] = {0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00, 0x5a, 0x00};
int div_zero_caught = 0;
jmp_buf jmp_buffer;
int segv_caught = 0;
jmp_buf segv_buffer;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/7/7_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


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



/* Function: param_fake_branch @ 00011250 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 00011260 */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00011270 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = param_1 + 1;
 iVar3 = iVar4;
 iVar2 = param_1;
 while (iVar1 = iVar3, iVar1 != 0) {
 iVar3 = iVar2 % iVar1;
 iVar2 = iVar1;
 }
 iVar3 = param_1 * 3 + 0x14;
 if (iVar2 == 1 && iVar4 * iVar4 == (param_1 * 2 | 1U) + param_1 * param_1) {
 iVar3 = param_1 * 2 + 10;
 }
 return iVar3;
}



/* Function: call_opaque_predicate @ 000112d0 */

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



/* Function: param_instruction_substitution @ 00011300 */

int param_instruction_substitution(uint32_t param_1)

{
 return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}



/* Function: call_instruction_substitution @ 00011320 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00011330 */

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



/* Function: param_string_encryption @ 00011390 */

int param_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte *pbVar3;
 byte local_28 [31];
 undefined1 local_9;
 
 strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 if (local_28[0] != 0) {
 pbVar3 = local_28;
 bVar1 = local_28[0];
 do {
 pbVar3 = pbVar3 + 1;
 pbVar3[-1] = bVar1 ^ 0x5a;
 bVar1 = *pbVar3;
 } while (bVar1 != 0);
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + (int)(char)local_28[0];
}



/* Function: call_string_encryption @ 00011400 */

int call_string_encryption(void)

{
 byte bVar1;
 size_t sVar2;
 byte *pbVar3;
 byte local_28 [31];
 undefined1 local_9;
 
 strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
 local_9 = 0;
 if (local_28[0] != 0) {
 pbVar3 = local_28;
 bVar1 = local_28[0];
 do {
 pbVar3 = pbVar3 + 1;
 pbVar3[-1] = bVar1 ^ 0x5a;
 bVar1 = *pbVar3;
 } while (bVar1 != 0);
 }
 sVar2 = strlen((char *)local_28);
 return sVar2 + (int)(char)local_28[0];
}



/* Function: param_tail_call_optimized @ 00011470 */

void param_tail_call_optimized(int param_1,int param_2)

{
 if (0 < param_1) {
 param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return;
}



/* Function: call_tail_call_optimized @ 000114b0 */

void call_tail_call_optimized(void)

{
 param_tail_call_optimized(1000,0);
 return;
}



/* Function: param_non_tail_call @ 000114e0 */

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



/* Function: call_non_tail_call @ 00011510 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 00011540 */

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
 }
 if (param_4 < 1) {
 iVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (param_4 != iVar1);
 }
 return iVar2;
}



/* Function: call_vectorized_loop @ 000115a0 */

int call_vectorized_loop(void)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 int local_24 [8];
 
 local_24[7] = 0;
 local_24[6] = 0;
 local_24[5] = 0;
 local_24[4] = 0;
 local_24[3] = 0;
 local_24[2] = 0;
 local_24[1] = 0;
 local_24[0] = 0;
 iVar1 = 0;
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



/* Function: param_link_time_optimization @ 00011630 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011640 */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: div_zero_handler @ 00011650 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00011680 */

undefined4 param_division_by_zero(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = (undefined4)(10 / (longlong)param_1);
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 000116e0 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: segv_handler @ 00011730 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp(segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011760 */

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



/* Function: call_null_pointer_deref @ 000117b0 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_10;
 
 local_10 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_10);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011810 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011820 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 return param_1;
}



/* Function: call_buffer_overflow @ 00011830 */

undefined4 call_buffer_overflow(void)

{
 return 0x1e;
}



/* Function: param_integer_overflow @ 00011840 */

int param_integer_overflow(uint32_t param_1,uint32_t param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_2 + param_1;
 if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
 return -1;
 }
 iVar2 = -2;
 if (iVar1 < 1) {
 iVar2 = iVar1;
 }
 if (-1 < (int)(param_2 & param_1)) {
 iVar2 = iVar1;
 }
 return iVar2;
}



/* Function: call_integer_overflow @ 00011870 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00011880 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00011890 */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 000118a0 */

undefined4 param_implementation_defined(void)

{
 return 0x2b;
}



/* Function: call_implementation_defined @ 000118b0 */

undefined4 call_implementation_defined(void)

{
 return 0x2b;
}



/* Function: test_obf_opt_edge @ 000118c0 */

void test_obf_opt_edge(void)

{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 undefined4 uVar4;
 byte *pbVar5;
 int *piVar6;
 int iVar7;
 int iVar8;
 int *piVar9;
 byte local_30 [28];
 uint32_t local_14;
 
 puts(&DAT_00012219);
 printf(&DAT_00012048,10);
 iVar3 = 5;
 iVar8 = 6;
 do {
 iVar7 = iVar8;
 iVar8 = iVar3 % iVar7;
 iVar3 = iVar7;
 } while (iVar8 != 0);
 uVar4 = 0x23;
 if (iVar7 == 1) {
 uVar4 = 0x14;
 }
 printf(&DAT_00012064,uVar4);
 printf(&DAT_00012080,0xe1);
 strncpy((char *)local_30,(char *)&param_string_encryption_encrypted,0x20);
 local_14 = local_14 & 0xffffff;
 if (local_30[0] != 0) {
 pbVar5 = local_30;
 bVar1 = local_30[0];
 do {
 pbVar5 = pbVar5 + 1;
 pbVar5[-1] = bVar1 ^ 0x5a;
 bVar1 = *pbVar5;
 } while (bVar1 != 0);
 }
 sVar2 = strlen((char *)local_30);
 printf(&DAT_0001209d,(int)(char)local_30[0] + sVar2);
 param_tail_call_optimized(1000,0);
 printf(&DAT_000120b9,0);
 uVar4 = param_non_tail_call(100);
 printf(&DAT_000120e3,uVar4);
 local_14 = 0;
 local_30[0x18] = 0;
 local_30[0x19] = 0;
 local_30[0x1a] = 0;
 local_30[0x1b] = 0;
 local_30[0x14] = 0;
 local_30[0x15] = 0;
 local_30[0x16] = 0;
 local_30[0x17] = 0;
 local_30[0x10] = 0;
 local_30[0x11] = 0;
 local_30[0x12] = 0;
 local_30[0x13] = 0;
 local_30[0xc] = 0;
 local_30[0xd] = 0;
 local_30[0xe] = 0;
 local_30[0xf] = 0;
 local_30[8] = 0;
 local_30[9] = 0;
 local_30[10] = 0;
 local_30[0xb] = 0;
 local_30[4] = 0;
 local_30[5] = 0;
 local_30[6] = 0;
 local_30[7] = 0;
 local_30[0] = 0;
 local_30[1] = 0;
 local_30[2] = 0;
 local_30[3] = 0;
 iVar3 = 0;
 piVar6 = &DAT_00012028;
 piVar9 = &DAT_00012008;
 do {
 *(int *)(local_30 + iVar3 * 4) = *piVar6 + *piVar9;
 iVar3 = iVar3 + 1;
 piVar6 = piVar6 + 1;
 piVar9 = piVar9 + 1;
 } while (iVar3 != 8);
 iVar8 = 0;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *(int *)(local_30 + iVar8 * 4);
 iVar8 = iVar8 + 1;
 } while (iVar8 != 8);
 printf(&DAT_00012108,iVar3);
 printf(&DAT_0001212e,0x14);
 iVar3 = param_division_by_zero(5);
 iVar8 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 printf(&DAT_0001214e,iVar8 + iVar3);
 local_30[0] = 0x2a;
 local_30[1] = 0;
 local_30[2] = 0;
 local_30[3] = 0;
 iVar3 = param_null_pointer_deref(local_30);
 iVar8 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 printf(&DAT_0001216a,iVar8 + iVar3);
 printf(&DAT_00012187,0x1e);
 printf(&DAT_000121a4,2000000000);
 printf(&DAT_000121d5,10);
 printf(&DAT_000121f2,0x2b);
 return;
}



/* Function: main @ 00011ba0 */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
