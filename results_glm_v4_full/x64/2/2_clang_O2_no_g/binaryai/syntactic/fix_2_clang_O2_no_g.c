// Decompiled by BinaryAI
// SHA256: 998fb1f9b36cb02d3579cb1216e49b595a479c8b88eb96ec4dadf45e0888bdb6

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// Type definitions for custom types used in decompiled code
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char byte;

// External function declarations
extern int __gmon_start__(void);
extern void __libc_start_main(int (*)(void), unsigned long long, void *, void *, void *, unsigned long long, void *);
extern void __cxa_finalize(void *);
extern int puts(const char *);
extern int printf(const char *, ...);



// Global data references
char DAT_001035df[] = "Testing Data Types L1\n";
char DAT_00103600[] = "Testing Array Types L1\n";
char DAT_0010361b[] = "Testing Pointer Types L2\n";
char DAT_00103636[] = "Testing Composite Types L2\n";
unsigned int DAT_00103040[] = {100, 200, 300, 400};

// Global variables
static char completed_0 = 0;
extern void *__dso_handle;

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}



// Function: deregister_tm_clones @ 0x101090
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1010c0
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101100
static void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: process_char @ 0x101150
uint process_char(uint param_1)
{
 uint uVar1;
 uVar1 = param_1 + 0x20 & 0xff;
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}

// Function: process_short @ 0x101160
int process_short(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: process_int @ 0x101170
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x101180
long process_long(long param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x101190
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x1011a0
float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x1011c0
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x1011e0
void process_ld(void)
{
 return;
}

// Function: process_bool @ 0x1011f0
bool process_bool(uint param_1)
{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}

// Function: const_param @ 0x101200
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x101210
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x101220
void test_data_types_l1(void)
{
 puts(&DAT_001035df);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x101350
int array_1d_stack(long param_1,uint param_2)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int iVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 long lVar11;
 long lVar12;
 unsigned long uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 if ((int)param_2 < 1) {
 return 0;
 }
 if (param_2 < 8) {
 uVar10 = 0;
 iVar8 = 0;
 }
 else {
 uVar10 = (unsigned long)(param_2 & 0xfffffff8);
 uVar9 = (uVar10 - 8 >> 3) + 1;
 uVar13 = (unsigned long)((uint)uVar9 & 3);
 if (uVar10 - 8 < 0x18) {
 iVar8 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar11 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 }
 else {
 uVar9 = uVar9 & 0xfffffffffffffffc;
 iVar8 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar11 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 do {
 piVar7 = (int *)(param_1 + lVar11 * 4);
 piVar1 = (int *)(param_1 + 0x10 + lVar11 * 4);
 piVar2 = (int *)(param_1 + 0x20 + lVar11 * 4);
 piVar3 = (int *)(param_1 + 0x30 + lVar11 * 4);
 piVar4 = (int *)(param_1 + 0x40 + lVar11 * 4);
 piVar5 = (int *)(param_1 + 0x50 + lVar11 * 4);
 piVar6 = (int *)(param_1 + 0x60 + lVar11 * 4);
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar14 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar14;
 iVar15 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar15;
 iVar16 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar16;
 piVar7 = (int *)(param_1 + 0x70 + lVar11 * 4);
 iVar17 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar17;
 iVar18 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar18;
 iVar19 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar19;
 iVar20 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar20;
 lVar11 = lVar11 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar13 != 0) {
 lVar11 = param_1 + lVar11 * 4;
 lVar12 = 0;
 do {
 piVar7 = (int *)(lVar11 + lVar12);
 iVar8 = iVar8 + *piVar7;
 iVar14 = iVar14 + piVar7[1];
 iVar15 = iVar15 + piVar7[2];
 iVar16 = iVar16 + piVar7[3];
 piVar7 = (int *)(lVar11 + 0x10 + lVar12);
 iVar17 = iVar17 + *piVar7;
 iVar18 = iVar18 + piVar7[1];
 iVar19 = iVar19 + piVar7[2];
 iVar20 = iVar20 + piVar7[3];
 lVar12 = lVar12 + 0x20;
 } while (uVar13 << 5 != lVar12);
 }
 iVar8 = iVar16 + iVar20 + iVar14 + iVar18 + iVar15 + iVar19 + iVar8 + iVar17;
 if (uVar10 == param_2) {
 return iVar8;
 }
 }
 do {
 iVar8 = iVar8 + *(int *)(param_1 + uVar10 * 4);
 uVar10 = uVar10 + 1;
 } while (param_2 != uVar10);
 return iVar8;
}

// Function: array_string @ 0x101470
int array_string(char *param_1)
{
 char cVar1;
 int iVar2;
 iVar2 = -1;
 do {
 iVar2 = iVar2 + 1;
 cVar1 = *param_1;
 param_1 = param_1 + 1;
 } while (cVar1 != '\0');
 return iVar2;
}

// Function: array_2d_stack @ 0x101490
int array_2d_stack(int *param_1)
{
 return param_1[0xb] + *param_1 + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
 param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}

// Function: array_3d @ 0x1014d0
int array_3d(int *param_1)
{
 return param_1[0x68] + param_1[0x6c] + param_1[0x66] + param_1[0x6a] +
 param_1[0x67] + param_1[0x6b] + param_1[0x65] + param_1[0x69] +
 param_1[0x74] + param_1[0x7c] + param_1[0x70] + param_1[0x78] +
 param_1[0x72] + param_1[0x7a] + param_1[0x6e] + param_1[0x76] +
 param_1[0x73] + param_1[0x7b] + param_1[0x6f] + param_1[0x77] +
 param_1[0x71] + param_1[0x79] + param_1[0x6d] + param_1[0x75] + param_1[100] +
 param_1[0x4f] + param_1[0x53] + param_1[0x4d] + param_1[0x51] +
 param_1[0x4e] + param_1[0x52] + param_1[0x4c] + param_1[0x50] +
 param_1[0x5b] + param_1[99] + param_1[0x57] + param_1[0x5f] +
 param_1[0x59] + param_1[0x61] + param_1[0x55] + param_1[0x5d] +
 param_1[0x5a] + param_1[0x62] + param_1[0x56] + param_1[0x5e] +
 param_1[0x58] + param_1[0x60] + param_1[0x54] + param_1[0x5c] + param_1[0x4b] +
 param_1[0x36] + param_1[0x3a] + param_1[0x34] + param_1[0x38] +
 param_1[0x35] + param_1[0x39] + param_1[0x33] + param_1[0x37] +
 param_1[0x42] + param_1[0x4a] + param_1[0x3e] + param_1[0x46] +
 param_1[0x40] + param_1[0x48] + param_1[0x3c] + param_1[0x44] +
 param_1[0x41] + param_1[0x49] + param_1[0x3d] + param_1[0x45] +
 param_1[0x3f] + param_1[0x47] + param_1[0x3b] + param_1[0x43] + param_1[0x32] +
 param_1[0x1d] + param_1[0x21] + param_1[0x1b] + param_1[0x1f] +
 param_1[0x1c] + param_1[0x20] + param_1[0x1a] + param_1[0x1e] +
 param_1[0x29] + param_1[0x31] + param_1[0x25] + param_1[0x2d] +
 param_1[0x27] + param_1[0x2f] + param_1[0x23] + param_1[0x2b] +
 param_1[0x28] + param_1[0x30] + param_1[0x24] + param_1[0x2c] +
 param_1[0x26] + param_1[0x2e] + param_1[0x22] + param_1[0x2a] + param_1[0x19] +
 param_1[8] + param_1[4] + param_1[6] + param_1[2] +
 param_1[7] + param_1[3] + param_1[5] + param_1[1] +
 param_1[0x10] + param_1[0x18] + param_1[0xc] + param_1[0x14] +
 param_1[0xe] + param_1[0x16] + param_1[10] + param_1[0x12] +
 param_1[0xf] + param_1[0x17] + param_1[0xb] + param_1[0x13] +
 param_1[0xd] + param_1[0x15] + param_1[9] + param_1[0x11] + *param_1;
}

// Function: array_vla @ 0x101700
int array_vla(uint param_1,long param_2)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int iVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 long lVar11;
 long lVar12;
 unsigned long uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 if ((int)param_1 < 1) {
 return 0;
 }
 if (param_1 < 8) {
 uVar10 = 0;
 iVar8 = 0;
 }
 else {
 uVar10 = (unsigned long)(param_1 & 0xfffffff8);
 uVar9 = (uVar10 - 8 >> 3) + 1;
 uVar13 = (unsigned long)((uint)uVar9 & 3);
 if (uVar10 - 8 < 0x18) {
 iVar8 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar11 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 }
 else {
 uVar9 = uVar9 & 0xfffffffffffffffc;
 iVar8 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar11 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 do {
 piVar7 = (int *)(param_2 + lVar11 * 4);
 piVar1 = (int *)(param_2 + 0x10 + lVar11 * 4);
 piVar2 = (int *)(param_2 + 0x20 + lVar11 * 4);
 piVar3 = (int *)(param_2 + 0x30 + lVar11 * 4);
 piVar4 = (int *)(param_2 + 0x40 + lVar11 * 4);
 piVar5 = (int *)(param_2 + 0x50 + lVar11 * 4);
 piVar6 = (int *)(param_2 + 0x60 + lVar11 * 4);
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar14 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar14;
 iVar15 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar15;
 iVar16 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar16;
 piVar7 = (int *)(param_2 + 0x70 + lVar11 * 4);
 iVar17 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar17;
 iVar18 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar18;
 iVar19 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar19;
 iVar20 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar20;
 lVar11 = lVar11 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar13 != 0) {
 lVar11 = param_2 + lVar11 * 4;
 lVar12 = 0;
 do {
 piVar7 = (int *)(lVar11 + lVar12);
 iVar8 = iVar8 + *piVar7;
 iVar14 = iVar14 + piVar7[1];
 iVar15 = iVar15 + piVar7[2];
 iVar16 = iVar16 + piVar7[3];
 piVar7 = (int *)(lVar11 + 0x10 + lVar12);
 iVar17 = iVar17 + *piVar7;
 iVar18 = iVar18 + piVar7[1];
 iVar19 = iVar19 + piVar7[2];
 iVar20 = iVar20 + piVar7[3];
 lVar12 = lVar12 + 0x20;
 } while (uVar13 << 5 != lVar12);
 }
 iVar8 = iVar16 + iVar20 + iVar14 + iVar18 + iVar15 + iVar19 + iVar8 + iVar17;
 if (uVar10 == param_1) {
 return iVar8;
 }
 }
 do {
 iVar8 = iVar8 + *(int *)(param_2 + uVar10 * 4);
 uVar10 = uVar10 + 1;
 } while (param_1 != uVar10);
 return iVar8;
}

// Function: array_pointer @ 0x101820
int array_pointer(long param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 long lVar3;
 unsigned long uVar4;
 int *piVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar2 = (unsigned long)param_2;
 if (param_2 < 8) {
 uVar4 = 0;
 iVar1 = 0;
 }
 else {
 uVar4 = (unsigned long)(param_2 & 0xfffffff8);
 iVar1 = 0;
 iVar6 = 0;
 iVar7 = 0;
 iVar8 = 0;
 lVar3 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar3);
 iVar6 = iVar6 + *(int *)(param_1 + 0x28 + lVar3);
 iVar7 = iVar7 + *(int *)(param_1 + 0x50 + lVar3);
 iVar8 = iVar8 + *(int *)(param_1 + 0x78 + lVar3);
 iVar9 = iVar9 + *(int *)(param_1 + 0xa0 + lVar3);
 iVar10 = iVar10 + *(int *)(param_1 + 200 + lVar3);
 iVar11 = iVar11 + *(int *)(param_1 + 0xf0 + lVar3);
 iVar12 = iVar12 + *(int *)(param_1 + 0x118 + lVar3);
 lVar3 = lVar3 + 0x140;
 } while ((uVar2 * 8 & 0xffffffffffffffc0) * 5 != lVar3);
 iVar1 = iVar12 + iVar8 + iVar10 + iVar6 + iVar11 + iVar7 + iVar9 + iVar1;
 if (uVar4 == uVar2) {
 return iVar1;
 }
 }
 piVar5 = (int *)(param_1 + uVar4 * 0x28);
 lVar3 = uVar2 - uVar4;
 do {
 iVar1 = iVar1 + *piVar5;
 piVar5 = piVar5 + 10;
 lVar3 = lVar3 + -1;
 } while (lVar3 != 0);
 return iVar1;
}

// Function: pointer_array @ 0x101910
int pointer_array(long param_1,uint param_2)
{
 int *piVar1;
 int iVar2;
 unsigned long uVar3;
 uint uVar4;
 if (0 < (int)param_2) {
 uVar4 = 10;
 if (param_2 < 10) {
 uVar4 = param_2;
 }
 if (uVar4 == 1) {
 uVar3 = 0;
 iVar2 = 0;
 }
 else {
 uVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = *(int **)(param_1 + uVar3 * 8);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 piVar1 = *(int **)(param_1 + 8 + uVar3 * 8);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 uVar3 = uVar3 + 2;
 } while ((uVar4 & 0xe) != uVar3);
 }
 if (((uVar4 & 1) != 0) && (piVar1 = *(int **)(param_1 + uVar3 * 8), piVar1 != (int *)0x0)) {
 iVar2 = iVar2 + *piVar1;
 }
 return iVar2;
 }
 return 0;
}

// Function: array_complex_index @ 0x101980
unsigned int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(unsigned int *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}

// Function: array_oob @ 0x1019b0
int array_oob(long param_1,uint param_2)
{
 uint uVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int *piVar8;
 int iVar9;
 unsigned long uVar10;
 unsigned long uVar11;
 long lVar12;
 long lVar13;
 unsigned long uVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 if ((int)param_2 < 0) {
 return 0;
 }
 uVar1 = param_2 + 1;
 if (param_2 < 7) {
 uVar11 = 0;
 iVar9 = 0;
 }
 else {
 uVar11 = (unsigned long)(uVar1 & 0xfffffff8);
 uVar10 = (uVar11 - 8 >> 3) + 1;
 uVar14 = (unsigned long)((uint)uVar10 & 3);
 if (uVar11 - 8 < 0x18) {
 iVar9 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 lVar12 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 iVar21 = 0;
 }
 else {
 uVar10 = uVar10 & 0xfffffffffffffffc;
 iVar9 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 lVar12 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 iVar21 = 0;
 do {
 piVar8 = (int *)(param_1 + lVar12 * 4);
 piVar2 = (int *)(param_1 + 0x10 + lVar12 * 4);
 piVar3 = (int *)(param_1 + 0x20 + lVar12 * 4);
 piVar4 = (int *)(param_1 + 0x30 + lVar12 * 4);
 piVar5 = (int *)(param_1 + 0x40 + lVar12 * 4);
 piVar6 = (int *)(param_1 + 0x50 + lVar12 * 4);
 piVar7 = (int *)(param_1 + 0x60 + lVar12 * 4);
 iVar9 = *piVar7 + *piVar5 + *piVar3 + *piVar8 + iVar9;
 iVar15 = piVar7[1] + piVar5[1] + piVar3[1] + piVar8[1] + iVar15;
 iVar16 = piVar7[2] + piVar5[2] + piVar3[2] + piVar8[2] + iVar16;
 iVar17 = piVar7[3] + piVar5[3] + piVar3[3] + piVar8[3] + iVar17;
 piVar8 = (int *)(param_1 + 0x70 + lVar12 * 4);
 iVar18 = *piVar8 + *piVar6 + *piVar4 + *piVar2 + iVar18;
 iVar19 = piVar8[1] + piVar6[1] + piVar4[1] + piVar2[1] + iVar19;
 iVar20 = piVar8[2] + piVar6[2] + piVar4[2] + piVar2[2] + iVar20;
 iVar21 = piVar8[3] + piVar6[3] + piVar4[3] + piVar2[3] + iVar21;
 lVar12 = lVar12 + 0x20;
 uVar10 = uVar10 - 4;
 } while (uVar10 != 0);
 }
 if (uVar14 != 0) {
 lVar12 = param_1 + lVar12 * 4;
 lVar13 = 0;
 do {
 piVar8 = (int *)(lVar12 + lVar13);
 iVar9 = iVar9 + *piVar8;
 iVar15 = iVar15 + piVar8[1];
 iVar16 = iVar16 + piVar8[2];
 iVar17 = iVar17 + piVar8[3];
 piVar8 = (int *)(lVar12 + 0x10 + lVar13);
 iVar18 = iVar18 + *piVar8;
 iVar19 = iVar19 + piVar8[1];
 iVar20 = iVar20 + piVar8[2];
 iVar21 = iVar21 + piVar8[3];
 lVar13 = lVar13 + 0x20;
 } while (uVar14 << 5 != lVar13);
 }
 iVar9 = iVar17 + iVar21 + iVar15 + iVar19 + iVar16 + iVar20 + iVar9 + iVar18;
 if (uVar11 == uVar1) {
 return iVar9;
 }
 }
 do {
 iVar9 = iVar9 + *(int *)(param_1 + uVar11 * 4);
 uVar11 = uVar11 + 1;
 } while (uVar1 != uVar11);
 return iVar9;
}

// Function: test_array_types @ 0x101ad0
void test_array_types(void)
{
 unsigned int uVar1;
 uint uVar2;
 long lVar3;
 unsigned int local_398;
 unsigned int uStack_394;
 unsigned int uStack_390;
 unsigned int uStack_38c;
 unsigned int local_388;
 unsigned int uStack_384;
 unsigned int uStack_380;
 unsigned int uStack_37c;
 unsigned int local_378;
 unsigned int uStack_374;
 unsigned int uStack_370;
 unsigned int uStack_36c;
 unsigned int local_368;
 unsigned int uStack_364;
 unsigned int uStack_360;
 unsigned int uStack_35c;
 unsigned int local_358;
 unsigned int uStack_354;
 unsigned int uStack_350;
 unsigned int uStack_34c;
 unsigned int local_348;
 unsigned int uStack_344;
 unsigned int uStack_340;
 unsigned int uStack_33c;
 unsigned int local_338;
 unsigned int local_334;
 unsigned int uStack_330;
 unsigned int uStack_32c;
 unsigned int uStack_328;
 unsigned int local_324;
 unsigned int uStack_320;
 unsigned int uStack_31c;
 unsigned int uStack_318;
 unsigned int local_314;
 unsigned int uStack_310;
 unsigned int uStack_30c;
 unsigned int uStack_308;
 unsigned int local_304;
 unsigned int uStack_300;
 unsigned int uStack_2fc;
 unsigned int uStack_2f8;
 unsigned int local_2f4;
 unsigned int uStack_2f0;
 unsigned int uStack_2ec;
 unsigned int uStack_2e8;
 unsigned int local_2e4;
 unsigned int uStack_2e0;
 unsigned int uStack_2dc;
 unsigned int uStack_2d8;
 unsigned int local_2d4;
 unsigned int local_2d0;
 unsigned int uStack_2cc;
 unsigned int uStack_2c8;
 unsigned int uStack_2c4;
 unsigned int local_2c0;
 unsigned int uStack_2bc;
 unsigned int uStack_2b8;
 unsigned int uStack_2b4;
 unsigned int local_2b0;
 unsigned int uStack_2ac;
 unsigned int uStack_2a8;
 unsigned int uStack_2a4;
 unsigned int local_2a0;
 unsigned int uStack_29c;
 unsigned int uStack_298;
 unsigned int uStack_294;
 unsigned int local_290;
 unsigned int uStack_28c;
 unsigned int uStack_288;
 unsigned int uStack_284;
 unsigned int local_280;
 unsigned int uStack_27c;
 unsigned int uStack_278;
 unsigned int uStack_274;
 unsigned int local_270;
 unsigned int local_26c;
 unsigned int uStack_268;
 unsigned int uStack_264;
 unsigned int uStack_260;
 unsigned int local_25c;
 unsigned int uStack_258;
 unsigned int uStack_254;
 unsigned int uStack_250;
 unsigned int local_24c;
 unsigned int uStack_248;
 unsigned int uStack_244;
 unsigned int uStack_240;
 unsigned int local_23c;
 unsigned int uStack_238;
 unsigned int uStack_234;
 unsigned int uStack_230;
 unsigned int local_22c;
 unsigned int uStack_228;
 unsigned int uStack_224;
 unsigned int uStack_220;
 unsigned int local_21c;
 unsigned int uStack_218;
 unsigned int uStack_214;
 unsigned int uStack_210;
 unsigned int local_20c;
 unsigned int local_208;
 unsigned int uStack_204;
 unsigned int uStack_200;
 unsigned int uStack_1fc;
 unsigned int local_1f8;
 unsigned int uStack_1f4;
 unsigned int uStack_1f0;
 unsigned int uStack_1ec;
 unsigned int local_1e8;
 unsigned int uStack_1e4;
 unsigned int uStack_1e0;
 unsigned int uStack_1dc;
 unsigned int local_1d8;
 unsigned int uStack_1d4;
 unsigned int uStack_1d0;
 unsigned int uStack_1cc;
 unsigned int local_1c8;
 unsigned int uStack_1c4;
 unsigned int uStack_1c0;
 unsigned int uStack_1bc;
 unsigned int local_1b8;
 unsigned int uStack_1b4;
 unsigned int uStack_1b0;
 unsigned int uStack_1ac;
 unsigned int local_1a8;
 int local_198 [22];
 int local_140;
 int local_114;
 int local_e8;
 int local_bc;
 int local_90;
 int local_64;
 int local_38;
 int local_c;
 puts(&DAT_00103600);
 lVar3 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 do {
 *(unsigned int *)((long)local_198 + lVar3) = 0;
 *(uint *)((long)local_198 + lVar3 + 4) = (uint)(lVar3 == 0x28);
 *(uint *)((long)local_198 + lVar3 + 8) = (uint)(lVar3 == 0x50) * 2;
 *(uint *)((long)local_198 + lVar3 + 0xc) = (uint)(lVar3 == 0x78) * 3;
 *(uint *)((long)local_198 + lVar3 + 0x10) = (uint)(lVar3 == 0xa0) << 2;
 *(uint *)((long)local_198 + lVar3 + 0x14) = (uint)(lVar3 == 200) * 5;
 uVar1 = 0;
 if (lVar3 == 0xf0) {
 uVar1 = 6;
 }
 *(unsigned int *)((long)local_198 + lVar3 + 0x18) = uVar1;
 uVar1 = 0;
 if (lVar3 == 0x118) {
 uVar1 = 7;
 }
 *(unsigned int *)((long)local_198 + lVar3 + 0x1c) = uVar1;
 *(uint *)((long)local_198 + lVar3 + 0x20) = (uint)(lVar3 == 0x140) << 3;
 *(uint *)((long)local_198 + lVar3 + 0x24) = (uint)(lVar3 == 0x168) * 9;
 lVar3 = lVar3 + 0x28;
 } while (lVar3 != 400);
 printf("ARR-L1-03 (array_2d_stack): %d\n",
 (unsigned long)(uint)(local_198[11] + local_198[0] + local_140 + local_114 + local_e8 + local_bc +
 local_90 + local_64 + local_38 + local_c));
 local_398 = 1;
 uStack_394 = 1;
 uStack_390 = 1;
 uStack_38c = 1;
 local_388 = 1;
 uStack_384 = 1;
 uStack_380 = 1;
 uStack_37c = 1;
 local_378 = 1;
 uStack_374 = 1;
 uStack_370 = 1;
 uStack_36c = 1;
 local_368 = 1;
 uStack_364 = 1;
 uStack_360 = 1;
 uStack_35c = 1;
 local_358 = 1;
 uStack_354 = 1;
 uStack_350 = 1;
 uStack_34c = 1;
 local_348 = 1;
 uStack_344 = 1;
 uStack_340 = 1;
 uStack_33c = 1;
 local_338 = 1;
 local_334 = 1;
 uStack_330 = 1;
 uStack_32c = 1;
 uStack_328 = 1;
 local_324 = 1;
 uStack_320 = 1;
 uStack_31c = 1;
 uStack_318 = 1;
 local_314 = 1;
 uStack_310 = 1;
 uStack_30c = 1;
 uStack_308 = 1;
 local_304 = 1;
 uStack_300 = 1;
 uStack_2fc = 1;
 uStack_2f8 = 1;
 local_2f4 = 1;
 uStack_2f0 = 1;
 uStack_2ec = 1;
 uStack_2e8 = 1;
 local_2e4 = 1;
 uStack_2e0 = 1;
 uStack_2dc = 1;
 uStack_2d8 = 1;
 local_2d4 = 1;
 local_2d0 = 1;
 uStack_2cc = 1;
 uStack_2c8 = 1;
 uStack_2c4 = 1;
 local_2c0 = 1;
 uStack_2bc = 1;
 uStack_2b8 = 1;
 uStack_2b4 = 1;
 local_2b0 = 1;
 uStack_2ac = 1;
 uStack_2a8 = 1;
 uStack_2a4 = 1;
 local_2a0 = 1;
 uStack_29c = 1;
 uStack_298 = 1;
 uStack_294 = 1;
 local_290 = 1;
 uStack_28c = 1;
 uStack_288 = 1;
 uStack_284 = 1;
 local_280 = 1;
 uStack_27c = 1;
 uStack_278 = 1;
 uStack_274 = 1;
 local_270 = 1;
 local_26c = 1;
 uStack_268 = 1;
 uStack_264 = 1;
 uStack_260 = 1;
 local_25c = 1;
 uStack_258 = 1;
 uStack_254 = 1;
 uStack_250 = 1;
 local_24c = 1;
 uStack_248 = 1;
 uStack_244 = 1;
 uStack_240 = 1;
 local_23c = 1;
 uStack_238 = 1;
 uStack_234 = 1;
 uStack_230 = 1;
 local_22c = 1;
 uStack_228 = 1;
 uStack_224 = 1;
 uStack_220 = 1;
 local_21c = 1;
 uStack_218 = 1;
 uStack_214 = 1;
 uStack_210 = 1;
 local_20c = 1;
 local_208 = 1;
 uStack_204 = 1;
 uStack_200 = 1;
 uStack_1fc = 1;
 local_1f8 = 1;
 uStack_1f4 = 1;
 uStack_1f0 = 1;
 uStack_1ec = 1;
 local_1e8 = 1;
 uStack_1e4 = 1;
 uStack_1e0 = 1;
 uStack_1dc = 1;
 local_1d8 = 1;
 uStack_1d4 = 1;
 uStack_1d0 = 1;
 uStack_1cc = 1;
 local_1c8 = 1;
 uStack_1c4 = 1;
 uStack_1c0 = 1;
 uStack_1bc = 1;
 local_1b8 = 1;
 uStack_1b4 = 1;
 uStack_1b0 = 1;
 uStack_1ac = 1;
 local_1a8 = 1;
 uVar2 = array_3d(&local_398);
 printf("ARR-L1-04 (array_3d): %d\n",(unsigned long)uVar2);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}

// Function: ptr_single @ 0x101dd0
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x101de0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x101df0
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x101e00
int ptr_increment(long param_1,int param_2)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int iVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 long lVar11;
 long lVar12;
 unsigned long uVar13;
 unsigned long uVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 if (param_2 < 1) {
 return 0;
 }
 uVar14 = 0;
 if (param_2 - 1U < 7) {
 iVar8 = 0;
 }
 else {
 uVar13 = (unsigned long)(param_2 - 1U) + 1;
 uVar14 = uVar13 & 0xfffffffffffffff8;
 uVar9 = (uVar14 - 8 >> 3) + 1;
 uVar10 = (unsigned long)((uint)uVar9 & 3);
 if (uVar14 - 8 < 0x18) {
 iVar8 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 lVar11 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 iVar21 = 0;
 }
 else {
 uVar9 = uVar9 & 0xfffffffffffffffc;
 iVar8 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 lVar11 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 iVar21 = 0;
 do {
 piVar7 = (int *)(param_1 + lVar11 * 4);
 piVar1 = (int *)(param_1 + 0x10 + lVar11 * 4);
 piVar2 = (int *)(param_1 + 0x20 + lVar11 * 4);
 piVar3 = (int *)(param_1 + 0x30 + lVar11 * 4);
 piVar4 = (int *)(param_1 + 0x40 + lVar11 * 4);
 piVar5 = (int *)(param_1 + 0x50 + lVar11 * 4);
 piVar6 = (int *)(param_1 + 0x60 + lVar11 * 4);
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar15 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar15;
 iVar16 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar16;
 iVar17 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar17;
 piVar7 = (int *)(param_1 + 0x70 + lVar11 * 4);
 iVar18 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar18;
 iVar19 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar19;
 iVar20 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar20;
 iVar21 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar21;
 lVar11 = lVar11 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar10 != 0) {
 lVar11 = param_1 + lVar11 * 4;
 lVar12 = 0;
 do {
 piVar7 = (int *)(lVar11 + lVar12);
 iVar8 = iVar8 + *piVar7;
 iVar15 = iVar15 + piVar7[1];
 iVar16 = iVar16 + piVar7[2];
 iVar17 = iVar17 + piVar7[3];
 piVar7 = (int *)(lVar11 + 0x10 + lVar12);
 iVar18 = iVar18 + *piVar7;
 iVar19 = iVar19 + piVar7[1];
 iVar20 = iVar20 + piVar7[2];
 iVar21 = iVar21 + piVar7[3];
 lVar12 = lVar12 + 0x20;
 } while (uVar10 << 5 != lVar12);
 }
 iVar8 = iVar17 + iVar21 + iVar15 + iVar19 + iVar16 + iVar20 + iVar8 + iVar18;
 if (uVar13 == uVar14) {
 return iVar8;
 }
 param_1 = param_1 + uVar14 * 4;
 }
 lVar11 = 0;
 do {
 iVar8 = iVar8 + *(int *)(param_1 + lVar11 * 4);
 lVar11 = lVar11 + 1;
 } while (param_2 - (int)uVar14 != (int)lVar11);
 return iVar8;
}

// Function: ptr_offset @ 0x101f30
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x101f40
unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2;
}

// Function: ptr_void @ 0x101f50
int ptr_void(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 1) {
 iVar1 = (int)*(char *)param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}

// Function: ptr_const @ 0x101f70
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x101f80
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x101f90
void ptr_func_simple(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x101fa0
void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 unsigned int local_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned int uStack_c;
 local_18 = 0x103290;
 uStack_14 = 0;
 uStack_10 = 0;
 uStack_c = 0;
 ((void (*)(unsigned long long, unsigned int *))param_1)(param_2,&local_18);
 return;
}

// Function: ptr_cast @ 0x101fd0
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101fe0
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x101ff0
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x102000
void test_pointer_types(void)
{
 puts(&DAT_0010361b);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 printf("PTR-L2-04 (ptr_increment): %d\n",0xf);
 printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
 printf("PTR-L2-06 (ptr_diff): %d\n",4);
 printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
 printf("PTR-L2-07 (ptr_void): %d\n",0x41);
 printf("PTR-L2-08 (ptr_const): %d\n",0x14);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
}

// Function: struct_simple @ 0x102120
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x102130
int struct_array(long param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 unsigned long uVar3;
 if (0 < (int)param_2) {
 if (param_2 == 1) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 piVar2 = (int *)(param_1 + 0x14);
 uVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + piVar2[-5] + piVar2[-4] + piVar2[-3] + piVar2[-2] + piVar2[-1] + *piVar2;
 uVar3 = uVar3 + 2;
 piVar2 = piVar2 + 6;
 } while ((param_2 & 0xfffffffe) != uVar3);
 }
 if ((param_2 & 1) != 0) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar3 * 0xc) + *(int *)(param_1 + 4 + uVar3 * 0xc) +
 *(int *)(param_1 + 8 + uVar3 * 0xc);
 }
 return iVar1;
 }
 return 0;
}

// Function: struct_nested @ 0x1021a0
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x1021b0
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x1021c0
int struct_with_ptr(int *param_1)
{
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 return **(int **)(param_1 + 2) + *param_1;
 }
 return *param_1;
}

// Function: struct_bitfields @ 0x1021e0
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x102210
float union_type(float *param_1,int param_2)
{
 if (param_2 == 1) {
 return (float)(int)*param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return (float)(int)*(char *)param_1;
}

// Function: union_array @ 0x102230
int union_array(long param_1,uint param_2)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int iVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 long lVar11;
 long lVar12;
 unsigned long uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 if ((int)param_2 < 1) {
 return 0;
 }
 if (param_2 < 8) {
 uVar10 = 0;
 iVar8 = 0;
 }
 else {
 uVar10 = (unsigned long)(param_2 & 0xfffffff8);
 uVar9 = (uVar10 - 8 >> 3) + 1;
 uVar13 = (unsigned long)((uint)uVar9 & 3);
 if (uVar10 - 8 < 0x18) {
 iVar8 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar11 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 }
 else {
 uVar9 = uVar9 & 0xfffffffffffffffc;
 iVar8 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar11 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 do {
 piVar7 = (int *)(param_1 + lVar11 * 4);
 piVar1 = (int *)(param_1 + 0x10 + lVar11 * 4);
 piVar2 = (int *)(param_1 + 0x20 + lVar11 * 4);
 piVar3 = (int *)(param_1 + 0x30 + lVar11 * 4);
 piVar4 = (int *)(param_1 + 0x40 + lVar11 * 4);
 piVar5 = (int *)(param_1 + 0x50 + lVar11 * 4);
 piVar6 = (int *)(param_1 + 0x60 + lVar11 * 4);
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar14 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar14;
 iVar15 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar15;
 iVar16 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar16;
 piVar7 = (int *)(param_1 + 0x70 + lVar11 * 4);
 iVar17 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar17;
 iVar18 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar18;
 iVar19 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar19;
 iVar20 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar20;
 lVar11 = lVar11 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar13 != 0) {
 lVar11 = param_1 + lVar11 * 4;
 lVar12 = 0;
 do {
 piVar7 = (int *)(lVar11 + lVar12);
 iVar8 = iVar8 + *piVar7;
 iVar14 = iVar14 + piVar7[1];
 iVar15 = iVar15 + piVar7[2];
 iVar16 = iVar16 + piVar7[3];
 piVar7 = (int *)(lVar11 + 0x10 + lVar12);
 iVar17 = iVar17 + *piVar7;
 iVar18 = iVar18 + piVar7[1];
 iVar19 = iVar19 + piVar7[2];
 iVar20 = iVar20 + piVar7[3];
 lVar12 = lVar12 + 0x20;
 } while (uVar13 << 5 != lVar12);
 }
 iVar8 = iVar16 + iVar20 + iVar14 + iVar18 + iVar15 + iVar19 + iVar8 + iVar17;
 if (uVar10 == param_2) {
 return iVar8;
 }
 }
 do {
 iVar8 = iVar8 + *(int *)(param_1 + uVar10 * 4);
 uVar10 = uVar10 + 1;
 } while (param_2 != uVar10);
 return iVar8;
}

// Function: enum_type @ 0x102350
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x102360
unsigned int enum_switch(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&DAT_00103040 + (long)(int)param_1 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x102380
void struct_func_ptr(unsigned int *param_1)
{
 (*(void (*)(unsigned int))*(void **)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x102390
int linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x1023b0
int doubly_linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x1023d0
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(*(int **)(param_1 + 2));
 param_1 = *(int **)(param_1 + 4);
 iVar3 = iVar3 + iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar3;
}

// Function: graph_traverse @ 0x102420
int graph_traverse(long param_1)
{
 uint uVar1;
 int *piVar2;
 int iVar3;
 unsigned long uVar4;
 uVar1 = *(uint *)(param_1 + 0x50);
 if (0 < (int)uVar1) {
 if (uVar1 == 1) {
 uVar4 = 0;
 iVar3 = 0;
 }
 else {
 uVar4 = 0;
 iVar3 = 0;
 do {
 for (piVar2 = *(int **)(param_1 + uVar4 * 8); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar3 = iVar3 + *piVar2;
 }
 for (piVar2 = *(int **)(param_1 + (uVar4 * 8 | 8)); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar3 = iVar3 + *piVar2;
 }
 uVar4 = uVar4 + 2;
 } while (uVar4 != (uVar1 & 0xfffffffe));
 }
 if ((uVar1 & 1) != 0) {
 for (piVar2 = *(int **)(param_1 + uVar4 * 8); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar3 = iVar3 + *piVar2;
 }
 }
 return iVar3;
 }
 return 0;
}

// Function: test_composite_types @ 0x1024c0
void test_composite_types(void)
{
 int *piVar1;
 uint uVar2;
 uint uVar3;
 int local_88 [2];
 unsigned int *local_80;
 unsigned int local_78 [2];
 unsigned int *local_70;
 unsigned int local_68 [2];
 unsigned long long local_60;
 int local_58 [2];
 unsigned int *local_50;
 unsigned long long local_48;
 unsigned int local_40 [2];
 unsigned long long local_38;
 int *local_30;
 int local_28 [3];
 unsigned int uStack_24;
unsigned int uStack_20;
unsigned int uStack_1c;
unsigned long long local_18;
 piVar1 = local_88;
 puts(&DAT_00103636);
 uVar2 = 0;
 printf("CMP-L2-01 (struct_simple): %d\n",6);
 printf("CMP-L2-02 (struct_array): %d\n",9);
 printf("CMP-L2-03 (struct_nested): %d\n",0x69);
 printf("CMP-L2-04 (struct_deep): %d\n",0x102);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 printf("CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 printf("CMP-L2-07 (union_type): %d\n",0x12345678);
 printf("CMP-L2-08 (union_array): %d\n",0x3c);
 printf("CMP-L2-09 (enum_type): %d\n",10);
 printf("CMP-L2-10 (enum_switch): %d\n",0x32);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 local_88[0] = 10;
 local_80 = local_78;
 local_78[0] = 0x14;
 local_70 = local_68;
 local_68[0] = 0x1e;
 local_60 = 0;
 do {
 uVar2 = uVar2 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 uVar3 = 0;
 printf("CMP-L2-12 (linked_list): %d\n",(unsigned long)uVar2);
 piVar1 = local_58;
 local_58[0] = 10;
 local_48 = 0;
 local_40[0] = 0x14;
 local_38 = 0;
 local_30 = piVar1;
 local_50 = local_40;
 do {
 uVar3 = uVar3 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(unsigned long)uVar3);
 local_18 = 0;
 local_28[0] = 100;
 local_28[1] = 0;
 local_28[2] = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 uStack_1c = 0;
 uVar2 = binary_tree_sum(local_28);
 printf("CMP-L2-14 (binary_tree): %d\n",(unsigned long)uVar2);
 printf("CMP-L2-15 (graph_traverse): %d\n",1);
 return;
}

// Function: main @ 0x1026b0
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

