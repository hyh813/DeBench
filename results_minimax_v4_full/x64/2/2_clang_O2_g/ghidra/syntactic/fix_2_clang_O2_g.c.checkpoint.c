/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

#include <stdio.h>
#include <stddef.h>

/* Type definitions for common decompiler types */
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned short ushort;
typedef char undefined1;
typedef unsigned long undefined8;

/* String constants from binary */
static const char DAT_001035df[] = "Data Types Test";
static const char DAT_00103600[] = "Array Types Test";
static const char DAT_0010361b[] = "Pointer Types Test";
static const char DAT_00103636[] = "Composite Types Test";

/* Switch jump table for enum_switch */
static const int DAT_00103040[4] = {0, 10, 20, 30};

/* Custom type definitions based on usage */
typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Rect {
    struct { int x; int y; } position;
    struct { int width; int height; } size;
} Rect;

typedef struct Widget {
    struct { struct { int r; int g; int b; } fill; } style;
    struct { int x; int y; int z; } bounds;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *next;
} DNode;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct Graph {
    uint numVertices;
    Edge **adjList;
} Graph;

typedef struct Device {
    int (*process)(void *data);
    void *data;
} Device;

typedef struct UnionData {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef struct Flags {
    unsigned int a : 1;
    unsigned int b : 3;
    unsigned int c : 2;
    unsigned int d : 26;
} Flags;

typedef enum State {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
} State;

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 00101150 */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (byte)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 00101160 */

short process_short(short a,short b)

{
 return a + b;
}



/* Function: process_int @ 00101170 */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: process_long @ 00101180 */

long process_long(long x)

{
 return x * 2;
}



/* Function: process_ll @ 00101190 */

long long process_ll(long long x)

{
 return x * x;
}



/* Function: process_float @ 001011a0 */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 001011c0 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 001011e0 */

long double * process_ld(long double *__return_storage_ptr__,long double d)

{
 return __return_storage_ptr__;
}



/* Function: process_bool @ 001011f0 */

_Bool process_bool(int x)

{
 return (x & 1U) == 0 && 0 < x;
}



/* Function: const_param @ 00101200 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 00101210 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00101220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 /* Unresolved local var: int vol_value@[???]
 Unresolved local var: int value@[???] */
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
 /* Unresolved local var: int a@[???] */
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00101350 */

int array_1d_stack(int *arr,int n)

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
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if ((uint)n < 8) {
 uVar10 = 0;
 iVar8 = 0;
 }
 else {
 uVar10 = (ulong)(n & 0xfffffff8);
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
 piVar7 = arr + lVar11;
 piVar1 = arr + lVar11 + 4;
 piVar2 = arr + lVar11 + 8;
 piVar3 = arr + lVar11 + 0xc;
 piVar4 = arr + lVar11 + 0x10;
 piVar5 = arr + lVar11 + 0x14;
 piVar6 = arr + lVar11 + 0x18;
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar14 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar14;
 iVar15 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar15;
 iVar16 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar16;
 piVar7 = arr + lVar11 + 0x1c;
 iVar17 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar17;
 iVar18 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar18;
 iVar19 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar19;
 iVar20 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar20;
 lVar11 = lVar11 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar13 != 0) {
 lVar12 = 0;
 do {
 piVar7 = (int *)((long)arr + lVar12 + lVar11 * 4);
 iVar8 = iVar8 + *piVar7;
 iVar14 = iVar14 + piVar7[1];
 iVar15 = iVar15 + piVar7[2];
 iVar16 = iVar16 + piVar7[3];
 piVar7 = (int *)((long)arr + lVar12 + lVar11 * 4 + 0x10);
 iVar17 = iVar17 + *piVar7;
 iVar18 = iVar18 + piVar7[1];
 iVar19 = iVar19 + piVar7[2];
 iVar20 = iVar20 + piVar7[3];
 lVar12 = lVar12 + 0x20;
 } while (uVar13 << 5 != lVar12);
 }
 iVar8 = iVar16 + iVar20 + iVar14 + iVar18 + iVar15 + iVar19 + iVar8 + iVar17;
 if (uVar10 == (uint)n) {
 return iVar8;
 }
 }
 do {
 iVar8 = iVar8 + arr[uVar10];
 uVar10 = uVar10 + 1;
 } while ((uint)n != uVar10);
 return iVar8;
}



/* Function: array_string @ 00101470 */

int array_string(char *str)

{
 char cVar1;
 int iVar2;
 
 /* Unresolved local var: int len@[DW_OP_breg0(RAX): 0; DW_OP_constu: 4294967295;
 DW_OP_and; DW_OP_consts: -1; DW_OP_minus; DW_OP_consts: +1; DW_OP_plus;
 DW_OP_stack_value] */
 iVar2 = -1;
 do {
 iVar2 = iVar2 + 1;
 cVar1 = *str;
 str = str + 1;
 } while (cVar1 != '\0');
 return iVar2;
}



/* Function: array_2d_stack @ 00101490 */

int array_2d_stack(int (*arr) [10])

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 return arr[1][1] + (*arr)[0] + arr[2][2] + arr[3][3] + arr[4][4] + arr[5][5] + arr[6][6] +
 arr[7][7] + arr[8][8] + arr[9][9];
}



/* Function: array_3d @ 001014d0 */

int array_3d(int (*arr) [5] [5])

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 return arr[4][0][4] + arr[4][1][3] + arr[4][0][2] + arr[4][1][1] +
 arr[4][0][3] + arr[4][1][2] + arr[4][0][1] + arr[4][1][0] +
 arr[4][3][1] + arr[4][4][4] + arr[4][2][2] + arr[4][4][0] +
 arr[4][2][4] + arr[4][4][2] + arr[4][2][0] + arr[4][3][3] +
 arr[4][3][0] + arr[4][4][3] + arr[4][2][1] + arr[4][3][4] +
 arr[4][2][3] + arr[4][4][1] + arr[4][1][4] + arr[4][3][2] + arr[4][0][0] +
 arr[3][0][4] + arr[3][1][3] + arr[3][0][2] + arr[3][1][1] +
 arr[3][0][3] + arr[3][1][2] + arr[3][0][1] + arr[3][1][0] +
 arr[3][3][1] + arr[3][4][4] + arr[3][2][2] + arr[3][4][0] +
 arr[3][2][4] + arr[3][4][2] + arr[3][2][0] + arr[3][3][3] +
 arr[3][3][0] + arr[3][4][3] + arr[3][2][1] + arr[3][3][4] +
 arr[3][2][3] + arr[3][4][1] + arr[3][1][4] + arr[3][3][2] + arr[3][0][0] +
 arr[2][0][4] + arr[2][1][3] + arr[2][0][2] + arr[2][1][1] +
 arr[2][0][3] + arr[2][1][2] + arr[2][0][1] + arr[2][1][0] +
 arr[2][3][1] + arr[2][4][4] + arr[2][2][2] + arr[2][4][0] +
 arr[2][2][4] + arr[2][4][2] + arr[2][2][0] + arr[2][3][3] +
 arr[2][3][0] + arr[2][4][3] + arr[2][2][1] + arr[2][3][4] +
 arr[2][2][3] + arr[2][4][1] + arr[2][1][4] + arr[2][3][2] + arr[2][0][0] +
 arr[1][0][4] + arr[1][1][3] + arr[1][0][2] + arr[1][1][1] +
 arr[1][0][3] + arr[1][1][2] + arr[1][0][1] + arr[1][1][0] +
 arr[1][3][1] + arr[1][4][4] + arr[1][2][2] + arr[1][4][0] +
 arr[1][2][4] + arr[1][4][2] + arr[1][2][0] + arr[1][3][3] +
 arr[1][3][0] + arr[1][4][3] + arr[1][2][1] + arr[1][3][4] +
 arr[1][2][3] + arr[1][4][1] + arr[1][1][4] + arr[1][3][2] + arr[1][0][0] +
 (*arr)[1][3] + (*arr)[0][4] + (*arr)[1][1] + (*arr)[0][2] +
 (*arr)[1][2] + (*arr)[0][3] + (*arr)[1][0] + (*arr)[0][1] +
 (*arr)[3][1] + (*arr)[4][4] + (*arr)[2][2] + (*arr)[4][0] +
 (*arr)[2][4] + (*arr)[4][2] + (*arr)[2][0] + (*arr)[3][3] +
 (*arr)[3][0] + (*arr)[4][3] + (*arr)[2][1] + (*arr)[3][4] +
 (*arr)[2][3] + (*arr)[4][1] + (*arr)[1][4] + (*arr)[3][2] + (*arr)[0][0];
}



/* Function: array_vla @ 00101700 */

int array_vla(int n,int *arr)

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
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if ((uint)n < 8) {
 uVar10 = 0;
 iVar8 = 0;
 }
 else {
 uVar10 = (ulong)(n & 0xfffffff8);
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
 piVar7 = arr + lVar11;
 piVar1 = arr + lVar11 + 4;
 piVar2 = arr + lVar11 + 8;
 piVar3 = arr + lVar11 + 0xc;
 piVar4 = arr + lVar11 + 0x10;
 piVar5 = arr + lVar11 + 0x14;
 piVar6 = arr + lVar11 + 0x18;
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar14 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar14;
 iVar15 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar15;
 iVar16 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar16;
 piVar7 = arr + lVar11 + 0x1c;
 iVar17 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar17;
 iVar18 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar18;
 iVar19 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar19;
 iVar20 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar20;
 lVar11 = lVar11 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar13 != 0) {
 lVar12 = 0;
 do {
 piVar7 = (int *)((long)arr + lVar12 + lVar11 * 4);
 iVar8 = iVar8 + *piVar7;
 iVar14 = iVar14 + piVar7[1];
 iVar15 = iVar15 + piVar7[2];
 iVar16 = iVar16 + piVar7[3];
 piVar7 = (int *)((long)arr + lVar12 + lVar11 * 4 + 0x10);
 iVar17 = iVar17 + *piVar7;
 iVar18 = iVar18 + piVar7[1];
 iVar19 = iVar19 + piVar7[2];
 iVar20 = iVar20 + piVar7[3];
 lVar12 = lVar12 + 0x20;
 } while (uVar13 << 5 != lVar12);
 }
 iVar8 = iVar16 + iVar20 + iVar14 + iVar18 + iVar15 + iVar19 + iVar8 + iVar17;
 if (uVar10 == (uint)n) {
 return iVar8;
 }
 }
 do {
 iVar8 = iVar8 + arr[uVar10];
 uVar10 = uVar10 + 1;
 } while ((uint)n != uVar10);
 return iVar8;
}



/* Function: array_pointer @ 00101820 */

int array_pointer(int (*arr) [10],int n)

{
 ulong uVar1;
 int iVar2;
 long lVar3;
 ulong uVar4;
 int (*paiVar5) [10];
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar1 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar4 = 0;
 iVar2 = 0;
 }
 else {
 uVar4 = (ulong)(n & 0xfffffff8);
 iVar2 = 0;
 iVar6 = 0;
 iVar7 = 0;
 iVar8 = 0;
 lVar3 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 do {
 iVar2 = iVar2 + *(int *)((long)*arr + lVar3);
 iVar6 = iVar6 + *(int *)((long)arr[1] + lVar3);
 iVar7 = iVar7 + *(int *)((long)arr[2] + lVar3);
 iVar8 = iVar8 + *(int *)((long)arr[3] + lVar3);
 iVar9 = iVar9 + *(int *)((long)arr[4] + lVar3);
 iVar10 = iVar10 + *(int *)((long)arr[5] + lVar3);
 iVar11 = iVar11 + *(int *)((long)arr[6] + lVar3);
 iVar12 = iVar12 + *(int *)((long)arr[7] + lVar3);
 lVar3 = lVar3 + 0x140;
 } while ((uVar1 * 8 & 0xffffffffffffffc0) * 5 != lVar3);
 iVar2 = iVar12 + iVar8 + iVar10 + iVar6 + iVar11 + iVar7 + iVar9 + iVar2;
 if (uVar4 == uVar1) {
 return iVar2;
 }
 }
 paiVar5 = arr + uVar4;
 lVar3 = uVar1 - uVar4;
 do {
 iVar2 = iVar2 + (*paiVar5)[0];
 paiVar5 = paiVar5 + 1;
 lVar3 = lVar3 + -1;
 } while (lVar3 != 0);
 return iVar2;
}



/* Function: pointer_array @ 00101910 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 ulong uVar2;
 uint uVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int count@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar3 = 10;
 if ((uint)n < 10) {
 uVar3 = n;
 }
 if (uVar3 == 1) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 if (arr[uVar2] != (int *)0x0) {
 iVar1 = iVar1 + *arr[uVar2];
 }
 if (arr[uVar2 + 1] != (int *)0x0) {
 iVar1 = iVar1 + *arr[uVar2 + 1];
 }
 uVar2 = uVar2 + 2;
 } while ((uVar3 & 0xe) != uVar2);
 }
 if (((uVar3 & 1) != 0) && (arr[uVar2] != (int *)0x0)) {
 iVar1 = iVar1 + *arr[uVar2];
 }
 return iVar1;
 }
 return 0;
}



/* Function: array_complex_index @ 00101980 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 iVar1 = -1;
 if ((((-1 < x) && (y < h)) && (x < w)) && (-1 < y)) {
 iVar1 = arr[y * w + x];
 }
 return iVar1;
}



/* Function: array_oob @ 001019b0 */

int array_oob(int *arr,int n)

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
 uint uVar10;
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
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 0) {
 return 0;
 }
 uVar10 = n + 1;
 if ((uint)n < 7) {
 uVar11 = 0;
 iVar8 = 0;
 }
 else {
 uVar11 = (ulong)(uVar10 & 0xfffffff8);
 uVar9 = (uVar11 - 8 >> 3) + 1;
 uVar14 = (ulong)((uint)uVar9 & 3);
 if (uVar11 - 8 < 0x18) {
 iVar8 = 0;
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
 uVar9 = uVar9 & 0xfffffffffffffffc;
 iVar8 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 lVar12 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 iVar21 = 0;
 do {
 piVar7 = arr + lVar12;
 piVar1 = arr + lVar12 + 4;
 piVar2 = arr + lVar12 + 8;
 piVar3 = arr + lVar12 + 0xc;
 piVar4 = arr + lVar12 + 0x10;
 piVar5 = arr + lVar12 + 0x14;
 piVar6 = arr + lVar12 + 0x18;
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar15 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar15;
 iVar16 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar16;
 iVar17 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar17;
 piVar7 = arr + lVar12 + 0x1c;
 iVar18 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar18;
 iVar19 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar19;
 iVar20 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar20;
 iVar21 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar21;
 lVar12 = lVar12 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar14 != 0) {
 lVar13 = 0;
 do {
 piVar7 = (int *)((long)arr + lVar13 + lVar12 * 4);
 iVar8 = iVar8 + *piVar7;
 iVar15 = iVar15 + piVar7[1];
 iVar16 = iVar16 + piVar7[2];
 iVar17 = iVar17 + piVar7[3];
 piVar7 = (int *)((long)arr + lVar13 + lVar12 * 4 + 0x10);
 iVar18 = iVar18 + *piVar7;
 iVar19 = iVar19 + piVar7[1];
 iVar20 = iVar20 + piVar7[2];
 iVar21 = iVar21 + piVar7[3];
 lVar13 = lVar13 + 0x20;
 } while (uVar14 << 5 != lVar13);
 }
 iVar8 = iVar17 + iVar21 + iVar15 + iVar19 + iVar16 + iVar20 + iVar8 + iVar18;
 if (uVar11 == uVar10) {
 return iVar8;
 }
 }
 do {
 iVar8 = iVar8 + arr[uVar11];
 uVar11 = uVar11 + 1;
 } while (uVar10 != uVar11);
 return iVar8;
}



/* Function: test_array_types @ 00101ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 uint uVar1;
 undefined4 uVar2;
 long lVar3;
 int local_398 [4];
 undefined1 local_388 [16];
 int local_378 [6];
 undefined1 auStack_360 [16];
 int aiStack_350 [110];
 int local_198 [22];
 int local_140;
 int local_114;
 int local_e8;
 int local_bc;
 int local_90;
 int local_64;
 int local_38;
 int local_c;
 
 /* Unresolved local var: int[10][10] matrix@[???]
 Unresolved local var: int[5][5][5] cube@[???]
 Unresolved local var: int[5][10] arr2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int *[10] ptr_arr@[???]
 Unresolved local var: int[20] flat@[???]
 Unresolved local var: int[5] arr1@[???]
 Unresolved local var: char[6] str@[???]
 Unresolved local var: int[3] vla_arr@[???] */
 puts(&DAT_00103600);
 lVar3 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 *(undefined4 *)((long)local_198 + lVar3) = 0;
 *(uint *)((long)local_198 + lVar3 + 4) = (uint)(lVar3 == 0x28);
 *(uint *)((long)local_198 + lVar3 + 8) = (uint)(lVar3 == 0x50) * 2;
 *(uint *)((long)local_198 + lVar3 + 0xc) = (uint)(lVar3 == 0x78) * 3;
 *(uint *)((long)local_198 + lVar3 + 0x10) = (uint)(lVar3 == 0xa0) << 2;
 *(uint *)((long)local_198 + lVar3 + 0x14) = (uint)(lVar3 == 200) * 5;
 uVar2 = 0;
 if (lVar3 == 0xf0) {
 uVar2 = 6;
 }
 *(undefined4 *)((long)local_198 + lVar3 + 0x18) = uVar2;
 uVar2 = 0;
 if (lVar3 == 0x118) {
 uVar2 = 7;
 }
 *(undefined4 *)((long)local_198 + lVar3 + 0x1c) = uVar2;
 *(uint *)((long)local_198 + lVar3 + 0x20) = (uint)(lVar3 == 0x140) << 3;
 *(uint *)((long)local_198 + lVar3 + 0x24) = (uint)(lVar3 == 0x168) * 9;
 lVar3 = lVar3 + 0x28;
 } while (lVar3 != 400);
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 printf("ARR-L1-03 (array_2d_stack): %d\n",
 (ulong)(uint)(local_198[0xb] + local_198[0] + local_140 + local_114 + local_e8 + local_bc +
 local_90 + local_64 + local_38 + local_c));
 local_398[0] = 1;
 local_398[1] = 1;
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 local_398[2] = 1;
 local_398[3] = 1;
 local_388[0] = 1;
 local_388[4] = 1;
 local_388[8] = 1;
 local_388[12] = 1;
 local_378[0] = 1;
 local_378[1] = 1;
 local_378[2] = 1;
 local_378[3] = 1;
 local_378[4] = 1;
 local_378[5] = 1;
 auStack_360[0] = 1;
 auStack_360[4] = 1;
 auStack_360[8] = 1;
 auStack_360[12] = 1;
 aiStack_350[0] = 1;
 aiStack_350[1] = 1;
 aiStack_350[2] = 1;
 aiStack_350[3] = 1;
 aiStack_350[4] = 1;
 aiStack_350[5] = 1;
 aiStack_350[6] = 1;
 aiStack_350[7] = 1;
 aiStack_350[8] = 1;
 aiStack_350[9] = 1;
 aiStack_350[10] = 1;
 aiStack_350[0xb] = 1;
 aiStack_350[0xc] = 1;
 aiStack_350[0xd] = 1;
 aiStack_350[0xe] = 1;
 aiStack_350[0xf] = 1;
 aiStack_350[0x10] = 1;
 aiStack_350[0x11] = 1;
 aiStack_350[0x12] = 1;
 aiStack_350[0x13] = 1;
 aiStack_350[0x14] = 1;
 aiStack_350[0x15] = 1;
 aiStack_350[0x16] = 1;
 aiStack_350[0x17] = 1;
 aiStack_350[0x18] = 1;
 aiStack_350[0x19] = 1;
 aiStack_350[0x1a] = 1;
 aiStack_350[0x1b] = 1;
 aiStack_350[0x1c] = 1;
 aiStack_350[0x1d] = 1;
 aiStack_350[0x1e] = 1;
 aiStack_350[0x1f] = 1;
 aiStack_350[0x20] = 1;
 aiStack_350[0x21] = 1;
 aiStack_350[0x22] = 1;
 aiStack_350[0x23] = 1;
 aiStack_350[0x24] = 1;
 aiStack_350[0x25] = 1;
 aiStack_350[0x26] = 1;
 aiStack_350[0x27] = 1;
 aiStack_350[0x28] = 1;
 aiStack_350[0x29] = 1;
 aiStack_350[0x2a] = 1;
 aiStack_350[0x2b] = 1;
 aiStack_350[0x2c] = 1;
 aiStack_350[0x2d] = 1;
 aiStack_350[0x2e] = 1;
 aiStack_350[0x2f] = 1;
 aiStack_350[0x30] = 1;
 aiStack_350[0x31] = 1;
 aiStack_350[0x32] = 1;
 aiStack_350[0x33] = 1;
 aiStack_350[0x34] = 1;
 aiStack_350[0x35] = 1;
 aiStack_350[0x36] = 1;
 aiStack_350[0x37] = 1;
 aiStack_350[0x38] = 1;
 aiStack_350[0x39] = 1;
 aiStack_350[0x3a] = 1;
 aiStack_350[0x3b] = 1;
 aiStack_350[0x3c] = 1;
 aiStack_350[0x3d] = 1;
 aiStack_350[0x3e] = 1;
 aiStack_350[0x3f] = 1;
 aiStack_350[0x40] = 1;
 aiStack_350[0x41] = 1;
 aiStack_350[0x42] = 1;
 aiStack_350[0x43] = 1;
 aiStack_350[0x44] = 1;
 aiStack_350[0x45] = 1;
 aiStack_350[0x46] = 1;
 aiStack_350[0x47] = 1;
 aiStack_350[0x48] = 1;
 aiStack_350[0x49] = 1;
 aiStack_350[0x4a] = 1;
 aiStack_350[0x4b] = 1;
 aiStack_350[0x4c] = 1;
 aiStack_350[0x4d] = 1;
 aiStack_350[0x4e] = 1;
 aiStack_350[0x4f] = 1;
 aiStack_350[0x50] = 1;
 aiStack_350[0x51] = 1;
 aiStack_350[0x52] = 1;
 aiStack_350[0x53] = 1;
 aiStack_350[0x54] = 1;
 aiStack_350[0x55] = 1;
 aiStack_350[0x56] = 1;
 aiStack_350[0x57] = 1;
 aiStack_350[0x58] = 1;
 aiStack_350[0x59] = 1;
 aiStack_350[0x5a] = 1;
 aiStack_350[0x5b] = 1;
 aiStack_350[0x5c] = 1;
 aiStack_350[0x5d] = 1;
 aiStack_350[0x5e] = 1;
 aiStack_350[0x5f] = 1;
 aiStack_350[0x60] = 1;
 aiStack_350[0x61] = 1;
 aiStack_350[0x62] = 1;
 aiStack_350[99] = 1;
 aiStack_350[100] = 1;
 aiStack_350[0x65] = 1;
 aiStack_350[0x66] = 1;
 aiStack_350[0x67] = 1;
 aiStack_350[0x68] = 1;
 aiStack_350[0x69] = 1;
 aiStack_350[0x6a] = 1;
 uVar1 = array_3d((int (*) [5] [5])local_398);
 printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 00101dd0 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 00101de0 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00101df0 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00101e00 */

int ptr_increment(int *p,int n)

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
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar14 = 0;
 if (n - 1U < 7) {
 iVar8 = 0;
 }
 else {
 uVar13 = (ulong)(n - 1U) + 1;
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
 piVar7 = p + lVar11;
 piVar1 = p + lVar11 + 4;
 piVar2 = p + lVar11 + 8;
 piVar3 = p + lVar11 + 0xc;
 piVar4 = p + lVar11 + 0x10;
 piVar5 = p + lVar11 + 0x14;
 piVar6 = p + lVar11 + 0x18;
 iVar8 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar8;
 iVar15 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar15;
 iVar16 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar16;
 iVar17 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar17;
 piVar7 = p + lVar11 + 0x1c;
 iVar18 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar18;
 iVar19 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar19;
 iVar20 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar20;
 iVar21 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar21;
 lVar11 = lVar11 + 0x20;
 uVar9 = uVar9 - 4;
 } while (uVar9 != 0);
 }
 if (uVar10 != 0) {
 lVar12 = 0;
 do {
 piVar7 = (int *)((long)p + lVar12 + lVar11 * 4);
 iVar8 = iVar8 + *piVar7;
 iVar15 = iVar15 + piVar7[1];
 iVar16 = iVar16 + piVar7[2];
 iVar17 = iVar17 + piVar7[3];
 piVar7 = (int *)((long)p + lVar12 + lVar11 * 4 + 0x10);
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
 p = p + uVar14;
 }
 lVar11 = 0;
 do {
 iVar8 = iVar8 + p[lVar11];
 lVar11 = lVar11 + 1;
 } while (n - (int)uVar14 != (int)lVar11);
 return iVar8;
}



/* Function: ptr_offset @ 00101f30 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00101f40 */

int ptr_diff(int *p1,int *p2)

{
 return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 00101f50 */

int ptr_void(void *p,int type)

{
 int iVar1;
 
 if (type == 1) {
 iVar1 = (int)*(char *)p;
 }
 else {
 iVar1 = -1;
 if (type == 0) {
 return *(int *)p;
 }
 }
 return iVar1;
}



/* Function: ptr_const @ 00101f70 */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 00101f80 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00101f90 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101f95. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00101fa0 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 undefined4 local_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined4 uStack_c;
 
 /* Unresolved local var: char *[2] args@[???] */
 local_18 = 0x103290;
 uStack_14 = 0;
 uStack_10 = 0;
 uStack_c = 0;
 iVar1 = (*f)(p,(char **)&local_18);
 return iVar1;
}



/* Function: ptr_cast @ 00101fd0 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_reg5(RDI)]
 Unresolved local var: char * char_ptr@[DW_OP_reg5(RDI)]
 Unresolved local var: int * back_ptr@[DW_OP_reg5(RDI)] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00101fe0 */

void * opaque_handle_create(int size)

{
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101ff0 */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 00102000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 /* Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int val3@[???]
 Unresolved local var: int[5] arr4@[???]
 Unresolved local var: int[5] arr5@[???]
 Unresolved local var: int val7@[???]
 Unresolved local var: char c7@[???]
 Unresolved local var: int val8@[???]
 Unresolved local var: int val9@[???]
 Unresolved local var: int val11@[???]
 Unresolved local var: int val12@[???]
 Unresolved local var: int * ptr2@[???]
 Unresolved local var: int * * pptr2@[???]
 Unresolved local var: int * ptr3@[???]
 Unresolved local var: int * * pptr3@[???]
 Unresolved local var: int * * * ppptr3@[???]
 Unresolved local var: int[5] arr6@[???]
 Unresolved local var: void * handle@[???] */
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



/* Function: struct_simple @ 00102120 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00102130 */

int struct_array(Point3D *pts,int n)

{
 int iVar1;
 int *piVar2;
 ulong uVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 if (n == 1) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 piVar2 = &pts[1].z;
 uVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + piVar2[-5] + piVar2[-4] + piVar2[-3] + ((Point3D *)(piVar2 + -2))->x +
 piVar2[-1] + *piVar2;
 uVar3 = uVar3 + 2;
 piVar2 = piVar2 + 6;
 } while ((n & 0xfffffffe) != uVar3);
 }
 if ((n & 1U) != 0) {
 iVar1 = iVar1 + pts[uVar3].x + pts[uVar3].y + pts[uVar3].z;
 }
 return iVar1;
 }
 return 0;
}



/* Function: struct_nested @ 001021a0 */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 001021b0 */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).z;
}



/* Function: struct_with_ptr @ 001021c0 */

int struct_with_ptr(Node *node)

{
 if (node->next != (Node *)0x0) {
 return node->next->data + node->data;
 }
 return node->data;
}



/* Function: struct_bitfields @ 001021e0 */

int struct_bitfields(Flags *f)

{
 ushort uVar1;
 
 uVar1 = *(ushort *)f;
 return (uint)(uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00102210 */

int union_type(UnionData *u,int type)

{
 if (type == 1) {
 return (int)u->f;
 }
 if (type == 0) {
 return u->i;
 }
 return (int)u->bytes[0];
}



/* Function: union_array @ 00102230 */

int union_array(UnionData *arr,int n)

{
 UnionData *pUVar1;
 UnionData *pUVar2;
 UnionData *pUVar3;
 UnionData *pUVar4;
 UnionData *pUVar5;
 UnionData *pUVar6;
 UnionData *pUVar7;
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
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if ((uint)n < 8) {
 uVar11 = 0;
 iVar9 = 0;
 }
 else {
 uVar11 = (ulong)(n & 0xfffffff8);
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
 pUVar1 = arr + lVar12;
 pUVar2 = arr + lVar12 + 4;
 pUVar3 = arr + lVar12 + 8;
 pUVar4 = arr + lVar12 + 0xc;
 pUVar5 = arr + lVar12 + 0x10;
 pUVar6 = arr + lVar12 + 0x14;
 pUVar7 = arr + lVar12 + 0x18;
 iVar9 = pUVar7->i + pUVar5->i + pUVar3->i + pUVar1->i + iVar9;
 iVar15 = pUVar7[1].i + pUVar5[1].i + pUVar3[1].i + pUVar1[1].i + iVar15;
 iVar16 = pUVar7[2].i + pUVar5[2].i + pUVar3[2].i + pUVar1[2].i + iVar16;
 iVar17 = pUVar7[3].i + pUVar5[3].i + pUVar3[3].i + pUVar1[3].i + iVar17;
 pUVar1 = arr + lVar12 + 0x1c;
 iVar18 = pUVar1->i + pUVar6->i + pUVar4->i + pUVar2->i + iVar18;
 iVar19 = pUVar1[1].i + pUVar6[1].i + pUVar4[1].i + pUVar2[1].i + iVar19;
 iVar20 = pUVar1[2].i + pUVar6[2].i + pUVar4[2].i + pUVar2[2].i + iVar20;
 iVar21 = pUVar1[3].i + pUVar6[3].i + pUVar4[3].i + pUVar2[3].i + iVar21;
 lVar12 = lVar12 + 0x20;
 uVar10 = uVar10 - 4;
 } while (uVar10 != 0);
 }
 if (uVar14 != 0) {
 lVar13 = 0;
 do {
 piVar8 = (int *)(arr->bytes + lVar13 + lVar12 * 4);
 iVar9 = iVar9 + *piVar8;
 iVar15 = iVar15 + piVar8[1];
 iVar16 = iVar16 + piVar8[2];
 iVar17 = iVar17 + piVar8[3];
 piVar8 = (int *)(arr->bytes + lVar13 + lVar12 * 4 + 0x10);
 iVar18 = iVar18 + *piVar8;
 iVar19 = iVar19 + piVar8[1];
 iVar20 = iVar20 + piVar8[2];
 iVar21 = iVar21 + piVar8[3];
 lVar13 = lVar13 + 0x20;
 } while (uVar14 << 5 != lVar13);
 }
 iVar9 = iVar17 + iVar21 + iVar15 + iVar19 + iVar16 + iVar20 + iVar9 + iVar18;
 if (uVar11 == (uint)n) {
 return iVar9;
 }
 }
 do {
 iVar9 = iVar9 + arr[uVar11].i;
 uVar11 = uVar11 + 1;
 } while ((uint)n != uVar11);
 return iVar9;
}



/* Function: enum_type @ 00102350 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00102360 */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = *(int *)(&DAT_00103040 + (long)(int)s * 4);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00102380 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00102385. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00102390 */

int linked_list(Node *head)

{
 int iVar1;
 
 /* Unresolved local var: Node * current@[DW_OP_reg5(RDI)]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (Node *)0x0; head = head->next) {
 iVar1 = iVar1 + head->data;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 001023b0 */

int doubly_linked_list(DNode *head)

{
 int iVar1;
 
 /* Unresolved local var: DNode * current@[DW_OP_reg5(RDI)]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (DNode *)0x0; head = head->next) {
 iVar1 = iVar1 + head->data;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 001023d0 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root == (TreeNode *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 root = root->right;
 iVar3 = iVar3 + iVar1 + iVar2;
 } while (root != (TreeNode *)0x0);
 }
 return iVar3;
}



/* Function: binary_tree @ 00102410 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root == (TreeNode *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 root = root->right;
 iVar3 = iVar3 + iVar1 + iVar2;
 } while (root != (TreeNode *)0x0);
 }
 return iVar3;
}



/* Function: graph_traverse @ 00102420 */

int graph_traverse(Graph *g)

{
 uint uVar1;
 int *piVar2;
 Edge *pEVar3;
 int iVar4;
 ulong uVar5;
 
 /* Unresolved local var: int sum@[???] */
 uVar1 = g->numVertices;
 /* Unresolved local var: int i@[???] */
 if (0 < (int)uVar1) {
 if (uVar1 == 1) {
 uVar5 = 0;
 iVar4 = 0;
 }
 else {
 uVar5 = 0;
 iVar4 = 0;
 do {
 for (pEVar3 = g->adjList[uVar5]; pEVar3 != (Edge *)0x0; pEVar3 = pEVar3->next) {
 iVar4 = iVar4 + pEVar3->dest;
 }
 for (piVar2 = *(int **)((long)g->adjList + (uVar5 * 8 | 8)); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar4 = iVar4 + *piVar2;
 }
 uVar5 = uVar5 + 2;
 } while (uVar5 != (uVar1 & 0xfffffffe));
 }
 /* Unresolved local var: Edge * edge@[???] */
 if ((uVar1 & 1) != 0) {
 for (pEVar3 = g->adjList[uVar5]; pEVar3 != (Edge *)0x0; pEVar3 = pEVar3->next) {
 iVar4 = iVar4 + pEVar3->dest;
 }
 }
 return iVar4;
 }
 return 0;
}



/* Function: test_composite_types @ 001024c0 */

/* WARNING: Variable defined which should be unmapped: sum */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 TreeNode local_28;
 int sum;
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[???]
 Unresolved local var: TreeNode tree@[???]
 Unresolved local var: Point3D p1@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: Device dev@[???]
 Unresolved local var: Graph g@[???]
 Unresolved local var: Point3D[2] pts@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData[3] arr_u@[???]
 Unresolved local var: Edge e1@[???] */
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
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar2);
 piVar1 = local_58;
 local_58[0] = 10;
 local_48 = 0;
 local_40[0] = 0x14;
 local_38 = 0;
 local_30 = piVar1;
 local_50 = local_40;
 /* Unresolved local var: DNode * current@[DW_OP_reg0(RAX)] */
 do {
 uVar3 = uVar3 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar3);
 local_28.right = (TreeNode *)0x0;
 local_28.data = 100;
 local_28.left = (TreeNode *)0x0;
 uVar2 = binary_tree_sum(&local_28);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
 printf("CMP-L2-15 (graph_traverse): %d\n",1);
 return;
}



/* Function: main @ 001026b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 62 */
