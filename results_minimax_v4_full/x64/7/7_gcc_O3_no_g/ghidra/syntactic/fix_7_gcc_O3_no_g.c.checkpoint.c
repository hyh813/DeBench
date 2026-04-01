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
typedef unsigned long ulong;
typedef int bool;

/* Ghidra types */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef uint8_t byte;
typedef unsigned int uint;

/* Function pointer type */
typedef void (*code)(void);

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Setjmp header */
#include <setjmp.h>

/* Global variables for signal handlers */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* CONCAT44 macro - concatenates two 32-bit values into a 64-bit value */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/* External data - encrypted string data (31 bytes) */
/* This is placeholder encrypted data - replace with actual encrypted bytes from binary */
byte encrypted_0[31] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* String constants from binary - placeholder definitions */
char DAT_00102008[] = "Placeholder";
char DAT_00102137[] = "Placeholder";
char DAT_00102153[] = "Placeholder";
char DAT_0010216f[] = "Placeholder";
char DAT_0010218c[] = "Placeholder";
char DAT_00102038[] = "Placeholder";
char DAT_00102068[] = "Placeholder";
char DAT_00102090[] = "Placeholder";
char DAT_001020b8[] = "Placeholder";
char DAT_001021a8[] = "Placeholder";
char DAT_001021c4[] = "Placeholder";
char DAT_001021e1[] = "Placeholder";
char DAT_001020d8[] = "Placeholder";
char DAT_001021fe[] = "Placeholder";
char DAT_00102110[] = "Placeholder";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/7/7_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)0x0)();
 return;
}



/* Function: main @ 00101180 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00101290 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 001012c0 */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer,1);
}



/* Function: invalidInstructionException @ 001012e0 */

/* Trigger invalid instruction exception to cause SIGFPE */
void invalidInstructionException(void)
{
 /* Cause an invalid instruction by reading from NULL - will trigger SIGSEGV
    but the signal handler will catch it. Actually, let's just raise SIGFPE directly */
 raise(8);
}

/* Function: param_division_by_zero.constprop.0 @ 001012f0 */

undefined8 param_division_by_zero_constprop_0(void)
{
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar2 = _setjmp(jmp_buffer);
 if (iVar2 == 0) {
 /* WARNING: Does not return */
 invalidInstructionException();
 }
 return 0xffffffff;
}



/* Function: param_division_by_zero.constprop.1 @ 00101330 */

int param_division_by_zero_constprop_1(void)

{
 int iVar1;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 return (-(uint)(iVar1 == 0) & 3) - 1;
}



/* Function: param_fake_branch @ 00101370 */

undefined4 param_fake_branch(undefined4 param_1)

{
 return param_1;
}



/* Function: call_fake_branch @ 00101380 */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00101390 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar2 = param_1 + 1;
 iVar4 = iVar2;
 iVar1 = param_1;
 if (iVar2 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar2 * iVar2)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 001013e0 */

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
 uVar2 = 0x14;
 if (iVar3 != 1) {
 uVar2 = 0x23;
 }
 return uVar2;
}



/* Function: param_instruction_substitution @ 00101410 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00101430 */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00101440 */

byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 pbVar3 = (byte *)strncpy(param_2,param_1,param_3);
 pbVar3[param_3 - 1] = 0;
 bVar1 = *pbVar3;
 pbVar2 = pbVar3;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return pbVar3;
}



/* Function: param_string_encryption @ 00101490 */

int param_string_encryption(void)

{
 byte bVar1;
 byte *pbVar2;
 byte *__s;
 size_t sVar3;
 long in_FS_OFFSET;
 byte local_38 [31];
 undefined1 local_19;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = (byte *)strncpy((char *)local_38,(char *)&encrypted_0,0x1f);
 local_19 = 0;
 pbVar2 = __s;
 bVar1 = local_38[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)__s);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar3 + (int)(char)local_38[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_string_encryption @ 00101510 */

int call_string_encryption(void)

{
 byte bVar1;
 byte *pbVar2;
 byte *__s;
 size_t sVar3;
 long in_FS_OFFSET;
 byte local_38 [31];
 undefined1 local_19;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = (byte *)strncpy((char *)local_38,(char *)&encrypted_0,0x1f);
 local_19 = 0;
 pbVar2 = __s;
 bVar1 = local_38[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 sVar3 = strlen((char *)__s);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar3 + (int)(char)local_38[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_tail_call_optimized @ 00101590 */

int param_tail_call_optimized(uint param_1,int param_2)

{
 uint uVar1;
 bool bVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 uint uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 if ((int)param_1 < 1) {
 return param_2;
 }
 if (10 < (int)param_1) {
 uVar1 = 0;
 iVar3 = 0;
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 uVar7 = param_1;
 iVar8 = param_1 - 1;
 iVar9 = param_1 - 2;
 iVar10 = param_1 - 3;
 do {
 uVar1 = uVar1 + 1;
 iVar3 = iVar3 + uVar7;
 iVar4 = iVar4 + iVar8;
 iVar5 = iVar5 + iVar9;
 iVar6 = iVar6 + iVar10;
 uVar7 = uVar7 - 4;
 iVar8 = iVar8 + -4;
 iVar9 = iVar9 + -4;
 iVar10 = iVar10 + -4;
 } while (param_1 >> 2 != uVar1);
 param_2 = iVar3 + iVar5 + iVar4 + iVar6 + param_2;
 bVar2 = param_1 == (param_1 & 0xfffffffc);
 param_1 = param_1 - (param_1 & 0xfffffffc);
 if (bVar2) {
 return param_2;
 }
 }
 param_2 = param_2 + param_1;
 if (param_1 - 1 != 0) {
 param_2 = param_2 + (param_1 - 1);
 if (param_1 - 2 != 0) {
 param_2 = param_2 + (param_1 - 2);
 if (param_1 - 3 != 0) {
 param_2 = param_2 + (param_1 - 3);
 if (param_1 - 4 != 0) {
 param_2 = param_2 + (param_1 - 4);
 if (param_1 - 5 != 0) {
 param_2 = param_2 + (param_1 - 5);
 if (param_1 - 6 != 0) {
 param_2 = param_2 + (param_1 - 6);
 if (param_1 - 7 != 0) {
 param_2 = param_2 + (param_1 - 7);
 if (param_1 - 8 != 0) {
 param_2 = (param_1 - 9) + param_2 + (param_1 - 8);
 }
 }
 }
 }
 }
 }
 }
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00101670 */

undefined8 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00101680 */

int param_non_tail_call(uint param_1)

{
 uint uVar1;
 bool bVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 uint uVar8;
 int iVar9;
 int iVar10;
 
 if ((int)param_1 < 1) {
 return 0;
 }
 if ((int)param_1 < 0xb) {
 iVar4 = 0;
 }
 else {
 uVar1 = 0;
 iVar3 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 uVar8 = param_1;
 iVar4 = param_1 - 1;
 iVar9 = param_1 - 2;
 iVar10 = param_1 - 3;
 do {
 uVar1 = uVar1 + 1;
 iVar3 = iVar3 + uVar8;
 iVar5 = iVar5 + iVar4;
 iVar6 = iVar6 + iVar9;
 iVar7 = iVar7 + iVar10;
 uVar8 = uVar8 - 4;
 iVar4 = iVar4 + -4;
 iVar9 = iVar9 + -4;
 iVar10 = iVar10 + -4;
 } while (param_1 >> 2 != uVar1);
 iVar4 = iVar3 + iVar6 + iVar5 + iVar7;
 bVar2 = param_1 == (param_1 & 0xfffffffc);
 param_1 = param_1 - (param_1 & 0xfffffffc);
 if (bVar2) {
 return iVar4;
 }
 }
 iVar4 = iVar4 + param_1;
 if (param_1 - 1 != 0) {
 iVar4 = iVar4 + (param_1 - 1);
 if (param_1 - 2 != 0) {
 iVar4 = iVar4 + (param_1 - 2);
 if (param_1 - 3 != 0) {
 iVar4 = iVar4 + (param_1 - 3);
 if (param_1 - 4 != 0) {
 iVar4 = iVar4 + (param_1 - 4);
 if (param_1 - 5 != 0) {
 iVar4 = iVar4 + (param_1 - 5);
 if (param_1 - 6 != 0) {
 iVar4 = iVar4 + (param_1 - 6);
 if (param_1 - 7 != 0) {
 iVar4 = iVar4 + (param_1 - 7);
 if (param_1 - 8 != 0) {
 iVar4 = (param_1 - 9) + (param_1 - 8) + iVar4;
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: call_non_tail_call @ 00101760 */

undefined8 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 00101770 */

int param_vectorized_loop(long param_1,long param_2,int *param_3,uint param_4)

{
 int *piVar1;
 int *piVar2;
 undefined8 uVar3;
 undefined8 uVar4;
 int iVar5;
 int iVar6;
 int *piVar7;
 long lVar8;
 int *piVar9;
 uint uVar10;
 uint uVar11;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 ulong uVar12;
 
 if ((int)param_4 < 1) {
 return 0;
 }
 if (((ulong)((long)param_3 - (param_1 + 4)) < 9 || (ulong)((long)param_3 - (param_2 + 4)) < 9) ||
 (param_4 == 1)) {
 lVar8 = 0;
 do {
 param_3[lVar8] = *(int *)(param_2 + lVar8 * 4) + *(int *)(param_1 + lVar8 * 4);
 lVar8 = lVar8 + 1;
 } while (lVar8 != (int)param_4);
LAB_0010182f:
 if (param_4 - 1 < 3) {
 uVar11 = 0;
 iVar13 = 0;
 goto LAB_00101893;
 }
 }
 else {
 if (param_4 - 1 < 3) {
 uVar12 = 0;
 uVar10 = 0;
 uVar11 = param_4;
LAB_00101804:
 uVar3 = *(undefined8 *)(param_1 + uVar12 * 4);
 uVar4 = *(undefined8 *)(param_2 + uVar12 * 4);
 *(ulong *)(param_3 + uVar12) =
 CONCAT44((int)((ulong)uVar3 >> 0x20) + (int)((ulong)uVar4 >> 0x20),
 (int)uVar3 + (int)uVar4);
 uVar10 = uVar10 + (uVar11 & 0xfffffffe);
 if (uVar11 != (uVar11 & 0xfffffffe)) {
LAB_00101824:
 lVar8 = (long)(int)uVar10;
 param_3[lVar8] = *(int *)(param_2 + lVar8 * 4) + *(int *)(param_1 + lVar8 * 4);
 }
 goto LAB_0010182f;
 }
 lVar8 = 0;
 do {
 piVar9 = (int *)(param_1 + lVar8);
 iVar13 = piVar9[1];
 iVar14 = piVar9[2];
 iVar15 = piVar9[3];
 piVar1 = (int *)(param_2 + lVar8);
 iVar16 = piVar1[1];
 iVar5 = piVar1[2];
 iVar6 = piVar1[3];
 piVar2 = (int *)((long)param_3 + lVar8);
 *piVar2 = *piVar9 + *piVar1;
 piVar2[1] = iVar13 + iVar16;
 piVar2[2] = iVar14 + iVar5;
 piVar2[3] = iVar15 + iVar6;
 lVar8 = lVar8 + 0x10;
 } while ((ulong)(param_4 >> 2) << 4 != lVar8);
 uVar10 = param_4 & 0xfffffffc;
 uVar12 = (ulong)uVar10;
 if (param_4 != uVar10) {
 uVar11 = param_4 - uVar10;
 if (param_4 - uVar10 != 1) goto LAB_00101804;
 goto LAB_00101824;
 }
 }
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 piVar9 = param_3;
 do {
 iVar5 = *piVar9;
 piVar1 = piVar9 + 1;
 piVar2 = piVar9 + 2;
 piVar7 = piVar9 + 3;
 piVar9 = piVar9 + 4;
 iVar13 = iVar13 + iVar5;
 iVar14 = iVar14 + *piVar1;
 iVar15 = iVar15 + *piVar2;
 iVar16 = iVar16 + *piVar7;
 } while (piVar9 != param_3 + (ulong)((param_4 >> 2) - 1) * 4 + 4);
 uVar11 = param_4 & 0xfffffffc;
 iVar13 = iVar13 + iVar15 + iVar14 + iVar16;
 if ((param_4 & 3) == 0) {
 return iVar13;
 }
LAB_00101893:
 iVar13 = iVar13 + param_3[(int)uVar11];
 if (((int)(uVar11 + 1) < (int)param_4) &&
 (iVar13 = iVar13 + param_3[(long)(int)uVar11 + 1], (int)(uVar11 + 2) < (int)param_4)) {
 return iVar13 + param_3[(long)(int)uVar11 + 2];
 }
 return iVar13;
}



/* Function: call_vectorized_loop @ 00101900 */

undefined8 call_vectorized_loop(void)

{
 return 0x48;
}



/* Function: param_link_time_optimization @ 00101910 */

int param_link_time_optimization(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101920 */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00101930 */

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



/* Function: call_division_by_zero @ 00101980 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero_constprop_1();
 iVar2 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 001019b0 */

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



/* Function: call_null_pointer_deref @ 00101a00 */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 00101a70 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
 return param_1;
}



/* Function: param_buffer_overflow_heap @ 00101a80 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return param_1;
 }
 return 0xfffffffe;
}



/* Function: call_buffer_overflow @ 00101ab0 */

undefined8 call_buffer_overflow(void)

{
 void *__ptr;
 undefined8 uVar1;
 
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar1 = 8;
 }
 else {
 free(__ptr);
 uVar1 = 0x1e;
 }
 return uVar1;
}



/* Function: param_integer_overflow @ 00101ae0 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if ((0 < (int)param_1) && (0 < (int)param_2)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00101b10 */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00101b20 */

int param_undefined_behavior(int param_1)

{
 return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00101b30 */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00101b40 */

undefined8 param_implementation_defined(void)

{
 return 0x2f;
}



/* Function: call_implementation_defined @ 00101b50 */

undefined8 call_implementation_defined(void)

{
 return 0x2f;
}



/* Function: test_obf_opt_edge @ 00101b60 */

void test_obf_opt_edge(void)

{
 byte bVar1;
 long lVar2;
 byte *pbVar3;
 int iVar4;
 int iVar5;
 byte *__s;
 size_t sVar6;
 void *__ptr;
 ulong uVar7;
 undefined8 uVar8;
 long in_FS_OFFSET;
 undefined4 local_4c;
 byte local_48 [31];
 undefined1 local_29;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102008);
 __printf_chk(1,&DAT_00102137,10);
 uVar7 = 6;
 iVar4 = 5;
 do {
 iVar5 = (int)uVar7;
 lVar2 = (long)iVar4;
 uVar7 = lVar2 % (long)iVar5 & 0xffffffff;
 iVar4 = iVar5;
 } while ((int)(lVar2 % (long)iVar5) != 0);
 uVar8 = 0x14;
 if (iVar5 != 1) {
 uVar8 = 0x23;
 }
 __printf_chk(1,&DAT_00102153,uVar8);
 __printf_chk(1,&DAT_0010216f,0xe1);
 __s = (byte *)strncpy((char *)local_48,(char *)&encrypted_0,0x1f);
 local_29 = 0;
 pbVar3 = __s;
 bVar1 = local_48[0];
 while (bVar1 != 0) {
 *pbVar3 = bVar1 ^ 0x5a;
 bVar1 = pbVar3[1];
 pbVar3 = pbVar3 + 1;
 }
 sVar6 = strlen((char *)__s);
 __printf_chk(1,&DAT_0010218c,(int)(char)local_48[0] + (int)sVar6);
 __printf_chk(1,&DAT_00102038,0x7a314);
 __printf_chk(1,&DAT_00102068,0x13ba);
 __printf_chk(1,&DAT_00102090,call_vectorized_loop());
 __printf_chk(1,&DAT_001020b8,0x14);
 iVar4 = param_division_by_zero_constprop_1();
 iVar5 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_001021a8,iVar4 + iVar5);
 local_4c = 0x2a;
 iVar4 = param_null_pointer_deref(&local_4c);
 iVar5 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_001021c4,iVar4 + iVar5);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar8 = 8;
 }
 else {
 free(__ptr);
 uVar8 = 0x1e;
 }
 __printf_chk(1,&DAT_001021e1,uVar8);
 __printf_chk(1,&DAT_001020d8,2000000000);
 __printf_chk(1,&DAT_001021fe,10);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102110,0x2f);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
