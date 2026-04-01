#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

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

// Decompiled by BinaryAI
// SHA256: 43a07274807e13ffdfd5bee1ebed7a649ab6b3612a60ae072474fa493d6fde6d

// Global variables
static int completed_0 = 0;
static void *__dso_handle = 0;
static int div_zero_caught = 0;
static char jmp_buffer[256];
static int segv_caught = 0;
static char segv_buffer[256];
static char DAT_001021d5[] = "Test output";
static char DAT_00102004[] = "%d\n";
static char DAT_00102020[] = "%llu\n";
static char DAT_0010203c[] = "%llu\n";
static char DAT_00102059[] = "%lu\n";
static char DAT_00102075[] = "%llu\n";
static char DAT_0010209f[] = "%llu\n";
static char DAT_001020c4[] = "%llu\n";
static char DAT_001020ea[] = "\n";
static char DAT_0010210a[] = "\n";
static char DAT_00102126[] = "%lu\n";
static char DAT_00102143[] = "%llu\n";
static char DAT_00102160[] = "%d\n";
static char DAT_00102191[] = "%llu\n";
static char DAT_001021ae[] = "%llu\n";
static byte param_string_encryption_encrypted[32] = {0};

// Function: _init @ 0x101000
static int _init(void *ctx)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// External function wrappers removed - using standard library directly

// Function: main @ 0x101ab0
int main(void);

// Function: _start @ 0x1010b0
static void _start(unsigned long long param_1,unsigned long long param_2)
{
 main();
}

// Function: deregister_tm_clones @ 0x1010e0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101110
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101150
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_fake_branch @ 0x1011a0
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x1011b0
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x1011c0
int param_opaque_predicate(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uVar6 = param_1 + 1;
 uVar5 = uVar6;
 uVar3 = param_1;
 uVar4 = 0xffffffff;
 while (uVar2 = uVar5, uVar2 != 0) {
 uVar5 = (int)uVar3 % (int)uVar2;
 uVar3 = uVar2;
 uVar4 = uVar2;
 }
 iVar1 = param_1 * 3 + 0x14;
 if ((uVar4 ^ 1 | uVar6 * uVar6 ^ (param_1 * 2 | 1) + param_1 * param_1) == 0) {
 iVar1 = param_1 * 2 + 10;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x101220
unsigned long long call_opaque_predicate(void)
{
 int iVar1;
 unsigned long long uVar2;
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

// Function: param_instruction_substitution @ 0x101250
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101270
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x101280
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 if (bVar1 != 0) {
 pbVar2 = param_2 + 1;
 do {
 pbVar2[-1] = bVar1 ^ param_4;
 bVar1 = *pbVar2;
 pbVar2 = pbVar2 + 1;
 } while (bVar1 != 0);
 }
 return param_2;
}

// Function: param_string_encryption @ 0x1012d0
int param_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 byte *pbVar4;
 byte local_28 [31];
 char local_9;
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

// Function: call_string_encryption @ 0x101330
int call_string_encryption(void)
{
 byte bVar1;
 size_t sVar2;
 int iVar3;
 byte *pbVar4;
 byte local_28 [31];
 char local_9;
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

// Function: param_tail_call_optimized @ 0x101390
int param_tail_call_optimized(int param_1,int param_2)
{
 uint uVar1;
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((unsigned long)(param_1 - 2) * (unsigned long)uVar1 >> 1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1013b0
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x1013c0
int param_non_tail_call(int param_1)
{
 uint uVar1;
 if (0 < param_1) {
 uVar1 = param_1 - 1;
 return (uVar1 * uVar1 + param_1) - (int)((unsigned long)(param_1 - 2) * (unsigned long)uVar1 >> 1);
 }
 return 0;
}

// Function: call_non_tail_call @ 0x1013e0
unsigned long long call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x1013f0
int param_vectorized_loop(unsigned long param_1,unsigned long param_2,unsigned long param_3,uint param_4)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 unsigned long uVar15;
 long lVar16;
 long lVar17;
 unsigned long uVar18;
 unsigned long uVar19;
 unsigned long uVar20;
 int iVar21;
 int iVar22;
 int iVar23;
 int iVar24;
 int iVar25;
 int iVar26;
 int iVar27;
 if ((int)param_4 < 1) {
 return 0;
 }
 uVar18 = (unsigned long)param_4;
 if (param_4 < 8) {
 uVar15 = 0;
 }
 else {
 uVar19 = param_3 + uVar18 * 4;
 uVar15 = 0;
 if ((param_1 + uVar18 * 4 <= param_3 || uVar19 <= param_1) &&
 (param_2 + uVar18 * 4 <= param_3 || uVar19 <= param_2)) {
 uVar15 = (unsigned long)(param_4 & 0xfffffff8);
 uVar19 = (uVar15 - 8 >> 3) + 1;
 if (uVar15 - 8 == 0) {
 lVar16 = 0;
 }
 else {
 uVar20 = uVar19 & 0x3ffffffffffffffe;
 lVar16 = 0;
 do {
 piVar7 = (int *)(param_1 + lVar16 * 4);
 iVar14 = piVar7[1];
 iVar21 = piVar7[2];
 iVar22 = piVar7[3];
 piVar1 = (int *)(param_1 + 0x10 + lVar16 * 4);
 iVar23 = *piVar1;
 iVar24 = piVar1[1];
 iVar25 = piVar1[2];
 iVar26 = piVar1[3];
 piVar1 = (int *)(param_2 + lVar16 * 4);
 iVar27 = piVar1[1];
 iVar8 = piVar1[2];
 iVar9 = piVar1[3];
 piVar2 = (int *)(param_2 + 0x10 + lVar16 * 4);
 iVar10 = *piVar2;
 iVar11 = piVar2[1];
 iVar12 = piVar2[2];
 iVar13 = piVar2[3];
 piVar2 = (int *)(param_3 + lVar16 * 4);
 *piVar2 = *piVar1 + *piVar7;
 piVar2[1] = iVar27 + iVar14;
 piVar2[2] = iVar8 + iVar21;
 piVar2[3] = iVar9 + iVar22;
 piVar7 = (int *)(param_3 + 0x10 + lVar16 * 4);
 *piVar7 = iVar10 + iVar23;
 piVar7[1] = iVar11 + iVar24;
 piVar7[2] = iVar12 + iVar25;
 piVar7[3] = iVar13 + iVar26;
 piVar7 = (int *)(param_1 + 0x20 + lVar16 * 4);
 iVar14 = piVar7[1];
 iVar21 = piVar7[2];
 iVar22 = piVar7[3];
 piVar1 = (int *)(param_1 + 0x30 + lVar16 * 4);
 iVar23 = *piVar1;
 iVar24 = piVar1[1];
 iVar25 = piVar1[2];
 iVar26 = piVar1[3];
 piVar1 = (int *)(param_2 + 0x20 + lVar16 * 4);
 iVar27 = piVar1[1];
 iVar8 = piVar1[2];
 iVar9 = piVar1[3];
 piVar2 = (int *)(param_2 + 0x30 + lVar16 * 4);
 iVar10 = *piVar2;
 iVar11 = piVar2[1];
 iVar12 = piVar2[2];
 iVar13 = piVar2[3];
 piVar2 = (int *)(param_3 + 0x20 + lVar16 * 4);
 *piVar2 = *piVar1 + *piVar7;
 piVar2[1] = iVar27 + iVar14;
 piVar2[2] = iVar8 + iVar21;
 piVar2[3] = iVar9 + iVar22;
 piVar7 = (int *)(param_3 + 0x30 + lVar16 * 4);
 *piVar7 = iVar10 + iVar23;
 piVar7[1] = iVar11 + iVar24;
 piVar7[2] = iVar12 + iVar25;
 piVar7[3] = iVar13 + iVar26;
 lVar16 = lVar16 + 0x10;
 uVar20 = uVar20 - 2;
 } while (uVar20 != 0);
 }
 if ((uVar19 & 1) != 0) {
 piVar7 = (int *)(param_1 + lVar16 * 4);
 iVar14 = piVar7[1];
 iVar21 = piVar7[2];
 iVar22 = piVar7[3];
 piVar1 = (int *)(param_1 + 0x10 + lVar16 * 4);
 iVar23 = *piVar1;
 iVar24 = piVar1[1];
 iVar25 = piVar1[2];
 iVar26 = piVar1[3];
 piVar1 = (int *)(param_2 + lVar16 * 4);
 iVar27 = piVar1[1];
 iVar8 = piVar1[2];
 iVar9 = piVar1[3];
 piVar2 = (int *)(param_2 + 0x10 + lVar16 * 4);
 iVar10 = *piVar2;
 iVar11 = piVar2[1];
 iVar12 = piVar2[2];
 iVar13 = piVar2[3];
 piVar2 = (int *)(param_3 + lVar16 * 4);
 *piVar2 = *piVar1 + *piVar7;
 piVar2[1] = iVar27 + iVar14;
 piVar2[2] = iVar8 + iVar21;
 piVar2[3] = iVar9 + iVar22;
 piVar7 = (int *)(param_3 + 0x10 + lVar16 * 4);
 *piVar7 = iVar10 + iVar23;
 piVar7[1] = iVar11 + iVar24;
 piVar7[2] = iVar12 + iVar25;
 piVar7[3] = iVar13 + iVar26;
 }
 if (uVar15 == uVar18) goto LAB_00101599;
 }
 }
 uVar19 = ~uVar15;
 uVar20 = uVar18 & 3;
 if ((param_4 & 3) != 0) {
 do {
 *(int *)(param_3 + uVar15 * 4) =
 *(int *)(param_2 + uVar15 * 4) + *(int *)(param_1 + uVar15 * 4);
 uVar15 = uVar15 + 1;
 uVar20 = uVar20 - 1;
 } while (uVar20 != 0);
 }
 if (2 < uVar19 + uVar18) {
 do {
 *(int *)(param_3 + uVar15 * 4) =
 *(int *)(param_2 + uVar15 * 4) + *(int *)(param_1 + uVar15 * 4);
 *(int *)(param_3 + 4 + uVar15 * 4) =
 *(int *)(param_2 + 4 + uVar15 * 4) + *(int *)(param_1 + 4 + uVar15 * 4);
 *(int *)(param_3 + 8 + uVar15 * 4) =
 *(int *)(param_2 + 8 + uVar15 * 4) + *(int *)(param_1 + 8 + uVar15 * 4);
 *(int *)(param_3 + 0xc + uVar15 * 4) =
 *(int *)(param_2 + 0xc + uVar15 * 4) + *(int *)(param_1 + 0xc + uVar15 * 4);
 uVar15 = uVar15 + 4;
 } while (uVar18 != uVar15);
 }
LAB_00101599:
 if ((int)param_4 < 1) {
 return 0;
 }
 if (param_4 < 8) {
 uVar15 = 0;
 iVar14 = 0;
 }
 else {
 uVar15 = (unsigned long)(param_4 & 0xfffffff8);
 uVar20 = (uVar15 - 8 >> 3) + 1;
 uVar19 = (unsigned long)((uint)uVar20 & 3);
 if (uVar15 - 8 < 0x18) {
 iVar14 = 0;
 iVar21 = 0;
 iVar22 = 0;
 iVar23 = 0;
 lVar16 = 0;
 iVar24 = 0;
 iVar25 = 0;
 iVar26 = 0;
 iVar27 = 0;
 }
 else {
 uVar20 = uVar20 & 0xfffffffffffffffc;
 iVar14 = 0;
 iVar21 = 0;
 iVar22 = 0;
 iVar23 = 0;
 lVar16 = 0;
 iVar24 = 0;
 iVar25 = 0;
 iVar26 = 0;
 iVar27 = 0;
 do {
 piVar7 = (int *)(param_3 + lVar16 * 4);
 piVar1 = (int *)(param_3 + 0x10 + lVar16 * 4);
 piVar2 = (int *)(param_3 + 0x20 + lVar16 * 4);
 piVar3 = (int *)(param_3 + 0x30 + lVar16 * 4);
 piVar4 = (int *)(param_3 + 0x40 + lVar16 * 4);
 piVar5 = (int *)(param_3 + 0x50 + lVar16 * 4);
 piVar6 = (int *)(param_3 + 0x60 + lVar16 * 4);
 iVar14 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar14;
 iVar21 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar21;
 iVar22 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar22;
 iVar23 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar23;
 piVar7 = (int *)(param_3 + 0x70 + lVar16 * 4);
 iVar24 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar24;
 iVar25 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar25;
 iVar26 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar26;
 iVar27 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar27;
 lVar16 = lVar16 + 0x20;
 uVar20 = uVar20 - 4;
 } while (uVar20 != 0);
 }
 if (uVar19 != 0) {
 lVar16 = param_3 + lVar16 * 4;
 lVar17 = 0;
 do {
 piVar7 = (int *)(lVar16 + lVar17);
 iVar14 = iVar14 + *piVar7;
 iVar21 = iVar21 + piVar7[1];
 iVar22 = iVar22 + piVar7[2];
 iVar23 = iVar23 + piVar7[3];
 piVar7 = (int *)(lVar16 + 0x10 + lVar17);
 iVar24 = iVar24 + *piVar7;
 iVar25 = iVar25 + piVar7[1];
 iVar26 = iVar26 + piVar7[2];
 iVar27 = iVar27 + piVar7[3];
 lVar17 = lVar17 + 0x20;
 } while (uVar19 << 5 != lVar17);
 }
 iVar14 = iVar23 + iVar27 + iVar21 + iVar25 + iVar22 + iVar26 + iVar14 + iVar24;
 if (uVar15 == uVar18) {
 return iVar14;
 }
 }
 do {
 iVar14 = iVar14 + *(int *)(param_3 + uVar15 * 4);
 uVar15 = uVar15 + 1;
 } while (uVar18 != uVar15);
 return iVar14;
}

// Function: call_vectorized_loop @ 0x1016c0
unsigned long long call_vectorized_loop(void)
{
 return 0x48;
}

// Function: param_link_time_optimization @ 0x1016d0
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x1016e0
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: div_zero_handler @ 0x1016f0
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp((jmp_buf *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x101710
unsigned long param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,(void (*)(int))div_zero_handler);
 iVar1 = setjmp((jmp_buf *)jmp_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 return 10 / (long)param_1 & 0xffffffff;
}

// Function: call_division_by_zero @ 0x101750
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(void (*)(int))0x0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x101780
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp((jmp_buf *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1017a0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 signal(0xb,(void (*)(int))segv_handler);
 iVar1 = setjmp((jmp_buf *)segv_buffer);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 if (param_1 == 0) {
 return 0xffffffff;
 }
 return *param_1;
}

// Function: call_null_pointer_deref @ 0x1017e0
int call_null_pointer_deref(void)
{
 unsigned int local_38 = 0x2a;
 int iVar1;
 int iVar2;
 iVar1 = param_null_pointer_deref(&local_38);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(void (*)(int))0x0);
 return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x101820
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x101830
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 return param_1;
}

// Function: call_buffer_overflow @ 0x101840
unsigned long long call_buffer_overflow(void)
{
 return 0x1e;
}

// Function: param_integer_overflow @ 0x101850
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

// Function: call_integer_overflow @ 0x101880
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x101890
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x1018a0
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1018b0
unsigned long long param_implementation_defined(void)
{
 return 0x2f;
}

// Function: call_implementation_defined @ 0x1018c0
unsigned long long call_implementation_defined(void)
{
 return 0x2f;
}

// Function: test_obf_opt_edge @ 0x1018d0
void test_obf_opt_edge(void)
{
 byte bVar1;
 int iVar2;
 size_t sVar3;
 unsigned long uVar4;
 int iVar5;
 unsigned int *puVar6;
 unsigned long long uVar7;
 unsigned int local_38;
 char local_19;
 puVar6 = &local_38;
 puts(&DAT_001021d5);
 printf(&DAT_00102004,10);
 uVar4 = 6;
 iVar5 = 5;
 do {
 iVar2 = (int)uVar4;
 uVar4 = (long)iVar5 % (long)iVar2 & 0xffffffff;
 iVar5 = iVar2;
 } while ((int)uVar4 != 0);
 uVar7 = 0x23;
 if (iVar2 == 1) {
 uVar7 = 0x14;
 }
 iVar5 = 0;
 printf(&DAT_00102020,uVar7);
 printf(&DAT_0010203c,0xe1);
 strncpy((char *)&local_38,(char *)&param_string_encryption_encrypted,0x20);
 local_19 = 0;
 bVar1 = (byte)local_38;
 if ((byte)local_38 != 0) {
 do {
 *(byte *)puVar6 = bVar1 ^ 0x5a;
 bVar1 = *(byte *)((long)puVar6 + 1);
 puVar6 = (unsigned int *)(byte *)((long)puVar6 + 1);
 } while (bVar1 != 0);
 iVar5 = (int)(char)(byte)local_38;
 }
 sVar3 = strlen((char *)&local_38);
 printf(&DAT_00102059,(unsigned long)(uint)(iVar5 + (int)sVar3));
 printf(&DAT_00102075,0x7a314);
 printf(&DAT_0010209f,0x13ba);
 printf(&DAT_001020c4,0x48);
 printf(&DAT_001020ea);
 param_division_by_zero(5);
 param_division_by_zero(0);
 signal(8,(void (*)(int))0x0);
 printf(&DAT_0010210a);
 local_38 = 0x2a;
 iVar5 = param_null_pointer_deref(&local_38);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(void (*)(int))0x0);
 printf(&DAT_00102126,(unsigned long)(uint)(iVar2 + iVar5));
 printf(&DAT_00102143,0x1e);
 printf(&DAT_00102160,2000000000);
 printf(&DAT_00102191,10);
 printf(&DAT_001021ae,0x2f);
 return;
}

// Function: main @ 0x101ab0
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x101abc
static void _fini(void)
{
 return;
}

