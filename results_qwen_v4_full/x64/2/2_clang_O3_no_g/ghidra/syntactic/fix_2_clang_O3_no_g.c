/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdbool.h>

/* Ghidra type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void (*code)(void);
typedef unsigned char byte;
typedef unsigned short ushort;

/* External data declarations */
extern char DAT_0010366f[];
extern char DAT_00103690[];
extern char DAT_001036ab[];
extern char DAT_001036c6[];
extern int DAT_001030d0[];

/* Forward function declarations */
int binary_tree_sum(int *param_1);
int graph_traverse(void);

/* Additional forward declarations */
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);

/* Fix for incomplete type - define a proper pointer type */
typedef int *int_ptr_t;


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




/* Function: process_char @ 00101150 */

uint process_char(uint param_1)

{
 uint uVar1;
 
 uVar1 = param_1 + 0x20 & 0xff;
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}



/* Function: process_short @ 00101160 */

int process_short(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: process_int @ 00101170 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 00101180 */

long process_long(long param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 00101190 */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 001011a0 */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 001011c0 */

double process_double(double param_1)

{
 return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 001011e0 */

long double process_ld(long double param_1)

{
 return param_1;
}



/* Function: process_bool @ 001011f0 */

bool process_bool(uint param_1)

{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}



/* Function: const_param @ 00101200 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00101210 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00101220 */

void test_data_types_l1(void)

{
 puts(&DAT_0010366f);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 printf("DT-L1-08 (process_ld): %.2Lf\n",0.0);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00101350 */

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
 ulong uVar9;
 ulong uVar10;
 long lVar11;
 long lVar12;
 ulong uVar13;
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
 uVar10 = (ulong)(param_2 & 0xfffffff8);
 uVar9 = (uVar10 - 8 >> 3) + 1;
 uVar13 = (ulong)((uint)uVar9 & 3);
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



/* Function: array_string @ 00101470 */

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



/* Function: array_2d_stack @ 00101490 */

int array_2d_stack(int *param_1)

{
 return param_1[0xb] + *param_1 + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
 param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}



/* Function: array_3d @ 001014d0 */

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



/* Function: array_vla @ 00101700 */

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
 ulong uVar9;
 ulong uVar10;
 long lVar11;
 long lVar12;
 ulong uVar13;
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
 uVar10 = (ulong)(param_1 & 0xfffffff8);
 uVar9 = (uVar10 - 8 >> 3) + 1;
 uVar13 = (ulong)((uint)uVar9 & 3);
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



/* Function: array_pointer @ 00101820 */

int array_pointer(long param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 long lVar3;
 ulong uVar4;
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
 uVar2 = (ulong)param_2;
 if (param_2 < 8) {
 uVar4 = 0;
 iVar1 = 0;
 }
 else {
 uVar4 = (ulong)(param_2 & 0xfffffff8);
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



/* Function: pointer_array @ 00101910 */

int pointer_array(long param_1,uint param_2)

{
 int *piVar1;
 int iVar2;
 ulong uVar3;
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



/* Function: array_complex_index @ 00101980 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(undefined4 *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 001019b0 */

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
 ulong uVar10;
 ulong uVar11;
 long lVar12;
 long lVar13;
 ulong uVar14;
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
 uVar11 = (ulong)(uVar1 & 0xfffffff8);
 uVar10 = (uVar11 - 8 >> 3) + 1;
 uVar14 = (ulong)((uint)uVar10 & 3);
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



/* Function: test_array_types @ 00101ad0 */

void test_array_types(void)

{
 uint uVar1;
 undefined4 local_1f8;
 undefined4 uStack_1f4;
 undefined4 uStack_1f0;
 undefined4 uStack_1ec;
 undefined4 local_1e8;
 undefined4 uStack_1e4;
 undefined4 uStack_1e0;
 undefined4 uStack_1dc;
 undefined4 local_1d8;
 undefined4 uStack_1d4;
 undefined4 uStack_1d0;
 undefined4 uStack_1cc;
 undefined4 local_1c8;
 undefined4 uStack_1c4;
 undefined4 uStack_1c0;
 undefined4 uStack_1bc;
 undefined4 local_1b8;
 undefined4 uStack_1b4;
 undefined4 uStack_1b0;
 undefined4 uStack_1ac;
 undefined4 local_1a8;
 undefined4 uStack_1a4;
 undefined4 uStack_1a0;
 undefined4 uStack_19c;
 undefined4 local_198;
 undefined4 local_194;
 undefined4 uStack_190;
 undefined4 uStack_18c;
 undefined4 uStack_188;
 undefined4 local_184;
 undefined4 uStack_180;
 undefined4 uStack_17c;
 undefined4 uStack_178;
 undefined4 local_174;
 undefined4 uStack_170;
 undefined4 uStack_16c;
 undefined4 uStack_168;
 undefined4 local_164;
 undefined4 uStack_160;
 undefined4 uStack_15c;
 undefined4 uStack_158;
 undefined4 local_154;
 undefined4 uStack_150;
 undefined4 uStack_14c;
 undefined4 uStack_148;
 undefined4 local_144;
 undefined4 uStack_140;
 undefined4 uStack_13c;
 undefined4 uStack_138;
 undefined4 local_134;
 undefined4 local_130;
 undefined4 uStack_12c;
 undefined4 uStack_128;
 undefined4 uStack_124;
 undefined4 local_120;
 undefined4 uStack_11c;
 undefined4 uStack_118;
 undefined4 uStack_114;
 undefined4 local_110;
 undefined4 uStack_10c;
 undefined4 uStack_108;
 undefined4 uStack_104;
 undefined4 local_100;
 undefined4 uStack_fc;
 undefined4 uStack_f8;
 undefined4 uStack_f4;
 undefined4 local_f0;
 undefined4 uStack_ec;
 undefined4 uStack_e8;
 undefined4 uStack_e4;
 undefined4 local_e0;
 undefined4 uStack_dc;
 undefined4 uStack_d8;
 undefined4 uStack_d4;
 undefined4 local_d0;
 undefined4 local_cc;
 undefined4 uStack_c8;
 undefined4 uStack_c4;
 undefined4 uStack_c0;
 undefined4 local_bc;
 undefined4 uStack_b8;
 undefined4 uStack_b4;
 undefined4 uStack_b0;
 undefined4 local_ac;
 undefined4 uStack_a8;
 undefined4 uStack_a4;
 undefined4 uStack_a0;
 undefined4 local_9c;
 undefined4 uStack_98;
 undefined4 uStack_94;
 undefined4 uStack_90;
 undefined4 local_8c;
 undefined4 uStack_88;
 undefined4 uStack_84;
 undefined4 uStack_80;
 undefined4 local_7c;
 undefined4 uStack_78;
 undefined4 uStack_74;
 undefined4 uStack_70;
 undefined4 local_6c;
 undefined4 local_68;
 undefined4 uStack_64;
 undefined4 uStack_60;
 undefined4 uStack_5c;
 undefined4 local_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 undefined4 uStack_4c;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 uStack_3c;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 uStack_2c;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 uStack_1c;
 undefined4 local_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined4 uStack_c;
 undefined4 local_8;
 
 puts(&DAT_00103690);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
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
 uStack_1a4 = 1;
 uStack_1a0 = 1;
 uStack_19c = 1;
 local_198 = 1;
 local_194 = 1;
 uStack_190 = 1;
 uStack_18c = 1;
 uStack_188 = 1;
 local_184 = 1;
 uStack_180 = 1;
 uStack_17c = 1;
 uStack_178 = 1;
 local_174 = 1;
 uStack_170 = 1;
 uStack_16c = 1;
 uStack_168 = 1;
 local_164 = 1;
 uStack_160 = 1;
 uStack_15c = 1;
 uStack_158 = 1;
 local_154 = 1;
 uStack_150 = 1;
 uStack_14c = 1;
 uStack_148 = 1;
 local_144 = 1;
 uStack_140 = 1;
 uStack_13c = 1;
 uStack_138 = 1;
 local_134 = 1;
 local_130 = 1;
 uStack_12c = 1;
 uStack_128 = 1;
 uStack_124 = 1;
 local_120 = 1;
 uStack_11c = 1;
 uStack_118 = 1;
 uStack_114 = 1;
 local_110 = 1;
 uStack_10c = 1;
 uStack_108 = 1;
 uStack_104 = 1;
 local_100 = 1;
 uStack_fc = 1;
 uStack_f8 = 1;
 uStack_f4 = 1;
 local_f0 = 1;
 uStack_ec = 1;
 uStack_e8 = 1;
 uStack_e4 = 1;
 local_e0 = 1;
 uStack_dc = 1;
 uStack_d8 = 1;
 uStack_d4 = 1;
 local_d0 = 1;
 local_cc = 1;
 uStack_c8 = 1;
 uStack_c4 = 1;
 uStack_c0 = 1;
 local_bc = 1;
 uStack_b8 = 1;
 uStack_b4 = 1;
 uStack_b0 = 1;
 local_ac = 1;
 uStack_a8 = 1;
 uStack_a4 = 1;
 uStack_a0 = 1;
 local_9c = 1;
 uStack_98 = 1;
 uStack_94 = 1;
 uStack_90 = 1;
 local_8c = 1;
 uStack_88 = 1;
 uStack_84 = 1;
 uStack_80 = 1;
 local_7c = 1;
 uStack_78 = 1;
 uStack_74 = 1;
 uStack_70 = 1;
 local_6c = 1;
 local_68 = 1;
 uStack_64 = 1;
 uStack_60 = 1;
 uStack_5c = 1;
 local_58 = 1;
 uStack_54 = 1;
 uStack_50 = 1;
 uStack_4c = 1;
 local_48 = 1;
 uStack_44 = 1;
 uStack_40 = 1;
 uStack_3c = 1;
 local_38 = 1;
 uStack_34 = 1;
 uStack_30 = 1;
 uStack_2c = 1;
 local_28 = 1;
 uStack_24 = 1;
 uStack_20 = 1;
 uStack_1c = 1;
 local_18 = 1;
 uStack_14 = 1;
 uStack_10 = 1;
 uStack_c = 1;
 local_8 = 1;
 uVar1 = array_3d(&local_1f8);
 printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 00101de0 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00101df0 */

int ptr_double(undefined8 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101e00 */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00101e10 */

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
 ulong uVar9;
 ulong uVar10;
 long lVar11;
 long lVar12;
 ulong uVar13;
 ulong uVar14;
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
 uVar13 = (ulong)(param_2 - 1U) + 1;
 uVar14 = uVar13 & 0xfffffffffffffff8;
 uVar9 = (uVar14 - 8 >> 3) + 1;
 uVar10 = (ulong)((uint)uVar9 & 3);
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



/* Function: ptr_offset @ 00101f40 */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00101f50 */

ulong ptr_diff(long param_1,long param_2)

{
 return (ulong)(param_1 - param_2) >> 2;
}



/* Function: ptr_void @ 00101f60 */

int ptr_void(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 1) {
 iVar1 = (int)(char)*param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}



/* Function: ptr_const @ 00101f80 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00101f90 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 00101fa0 */

int ptr_func_simple(int param_1)

{
 return param_1;
}



/* Function: ptr_func_complex @ 00101fb0 */

int ptr_func_complex(int param_1)

{
 return param_1;
}



/* Function: ptr_cast @ 00101fe0 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101ff0 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 00102000 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 00102010 */

void test_pointer_types(void)

{
 puts(&DAT_001036ab);
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



/* Function: struct_simple @ 00102130 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00102140 */

int struct_array(long param_1,uint param_2)

{
 int iVar1;
 int *piVar2;
 ulong uVar3;
 
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



/* Function: struct_nested @ 001021b0 */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 001021c0 */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 001021d0 */

int struct_with_ptr(int *param_1)

{
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 return **(int **)(param_1 + 2) + *param_1;
 }
 return *param_1;
}



/* Function: struct_bitfields @ 001021f0 */

short struct_bitfields(ushort *param_1)

{
 ushort uVar1;
 
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00102220 */

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



/* Function: union_array @ 00102240 */

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
 ulong uVar9;
 ulong uVar10;
 long lVar11;
 long lVar12;
 ulong uVar13;
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
 uVar10 = (ulong)(param_2 & 0xfffffff8);
 uVar9 = (uVar10 - 8 >> 3) + 1;
 uVar13 = (ulong)((uint)uVar9 & 3);
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



/* Function: enum_type @ 00102360 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00102370 */

undefined4 enum_switch(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)((char *)&DAT_001030d0 + (long)(int)param_1 * 4);
 }
 return uVar1;
}



/* Function: struct_func_ptr @ 00102390 */

void struct_func_ptr(undefined4 *param_1)

{
 /* WARNING: Could not recover jumptable at 0x00102395. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (**(code **)(param_1 + 2))(*param_1);
 return;
}



/* Function: linked_list @ 001023a0 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 001023c0 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 001023e0 */

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



/* Function: graph_traverse @ 00102430 */

int graph_traverse(void)

{
 return 0;
}



/* Function: test_composite_types @ 001024e0 */

void test_composite_types(void)

{
 int *piVar1;
 uint uVar2;
 uint uVar3;
 int local_88 [2];
 undefined4 *local_80;
 undefined4 local_78 [2];
 undefined4 *local_70;
 undefined4 local_68 [2];
 undefined8 local_60;
 int local_58 [2];
 undefined4 *local_50;
 undefined8 local_48;
 undefined4 local_40 [2];
 undefined8 local_38;
 int *local_30;
 int *local_tree;
 int local_tree_arr[3] = {0};
 undefined8 local_18;
 
 piVar1 = local_88;
 puts(&DAT_001036c6);
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
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar2);
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
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar3);
 local_18 = 0;
 local_tree = local_tree_arr;
 local_tree_arr[0] = 100;
 local_tree_arr[1] = 0;
 local_tree_arr[2] = 0;
 uVar2 = binary_tree_sum(local_tree);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
 printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse());
 return;
}



/* Function: main @ 001026d0 */

undefined8 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 61 */
