/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

/* Ghidra type definitions */
typedef void undefined;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char byte;
typedef long double longdouble;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef int code;  /* function pointer */

/* Ghidra intrinsic functions */
#define CONCAT44(lo, hi) (((long long)(hi) << 32) | (unsigned int)(lo))
#define ROUND(x) ((int)((x) + 0.5))
#define SUB104(x, y) (*(long double *)((char *)&(x) + (y)))

/* Unhandled Ghidra type for long double operations */
typedef union {
    long double ld;
    unsigned char bytes[16];
} unkuint10;

/* Data references (placeholder strings) */
static const char DAT_000135bf[] = "Data Types Test\n";
static const char DAT_000135e0[] = "Array Types Test\n";
static const char DAT_000135fb[] = "Pointer Types Test\n";
static const char DAT_00013616[] = "Composite Types Test\n";
static const int DAT_00013640[] = {10, 20, 30, 40};

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

/* Struct definitions */
typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    int width;
    int height;
} Size;

typedef struct {
    int x;
    int y;
    int z;
} Position;

typedef struct {
    Size size;
    Position position;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} Color;

typedef struct {
    Color fill;
    Color stroke;
    int style;
} Style;

typedef struct {
    Position position;
    int width;
    int height;
} Bounds;

typedef struct {
    Style style;
    Bounds bounds;
    int id;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
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

typedef struct {
    int numVertices;
    Edge *adjList[1];  /* Flexible array member */
} Graph;

typedef struct {
    unsigned short flags;
} Flags;

typedef union {
    float f;
    int i;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
} State;

typedef struct {
    int (*process)(void *);
    void *data;
} Device;

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 - CRT stub, was calling null */

void FUN_00011030(void)

{
 /* This was a CRT stub that called NULL - removed */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000111e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000111ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: process_char @ 00011200 */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (byte)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 00011220 */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_int @ 00011230 */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: process_long @ 00011240 */

long process_long(long x)

{
 return x * 2;
}



/* Function: process_ll @ 00011250 */

longlong process_ll(longlong x)

{
 longlong lVar1;
 int high_part;
 int low_part;
 
 low_part = (int)x;
 high_part = (int)(x >> 32);
 lVar1 = (longlong)low_part * (longlong)low_part;
 return (longlong)((int)((ulonglong)lVar1 >> 0x20) + high_part * low_part * 2) << 32 | (unsigned int)lVar1;
}



/* Function: process_float @ 00011270 */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00011290 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 000112b0 */

longdouble process_ld(longdouble d)

{
 return d;
}



/* Function: process_bool @ 000112c0 */

_Bool process_bool(int x)

{
 return (x & 1U) == 0 && 0 < x;
}



/* Function: const_param @ 000112e0 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 000112f0 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 longdouble lVar1;
 
 /* Unresolved local var: int vol_value@[???]
 Unresolved local var: int value@[???] */
 puts(&DAT_000135bf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000,0);
 printf("DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 printf("DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 lVar1 = (longdouble)10.0;
 printf("DT-L1-08 (process_ld): %.2Lf\n",lVar1);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???] */
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00011430 */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 if (n - 1U < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2] + arr[uVar2 + 1] + arr[uVar2 + 2] + arr[uVar2 + 3] +
 arr[uVar2 + 4] + arr[uVar2 + 5] + arr[uVar2 + 6] + arr[uVar2 + 7];
 uVar2 = uVar2 + 8;
 } while ((n & 0xfffffff8U) != uVar2);
 }
 if ((n & 7U) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2 + uVar3];
 uVar3 = uVar3 + 1;
 } while ((n & 7U) != uVar3);
 }
 }
 return iVar1;
}



/* Function: array_string @ 000114a0 */

int array_string(char *str)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int len@[DW_OP_breg0(EAX): +2; DW_OP_stack_value] */
 iVar2 = -1;
 do {
 iVar1 = iVar2 + 1;
 iVar2 = iVar2 + 1;
 } while (str[iVar1] != '\0');
 return iVar2;
}



/* Function: array_2d_stack @ 000114c0 */

int array_2d_stack(int (*arr) [10])

{
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 return arr[1][1] + (*arr)[0] + arr[2][2] + arr[3][3] + arr[4][4] + arr[5][5] + arr[6][6] +
 arr[7][7] + arr[8][8] + arr[9][9];
}



/* Function: array_3d @ 00011500 */

int array_3d(int (*arr) [5] [5])

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)(*arr)[0] + iVar2) + *(int *)((int)(*arr)[0] + iVar2 + 4) +
 *(int *)((int)(*arr)[0] + iVar2 + 8) + *(int *)((int)(*arr)[0] + iVar2 + 0xc) +
 *(int *)((int)(*arr)[0] + iVar2 + 0x10) + *(int *)((int)(*arr)[1] + iVar2) +
 *(int *)((int)(*arr)[1] + iVar2 + 4) + *(int *)((int)(*arr)[1] + iVar2 + 8) +
 *(int *)((int)(*arr)[1] + iVar2 + 0xc) + *(int *)((int)(*arr)[1] + iVar2 + 0x10) +
 *(int *)((int)(*arr)[2] + iVar2) + *(int *)((int)(*arr)[2] + iVar2 + 4) +
 *(int *)((int)(*arr)[2] + iVar2 + 8) + *(int *)((int)(*arr)[2] + iVar2 + 0xc) +
 *(int *)((int)(*arr)[2] + iVar2 + 0x10) + *(int *)((int)(*arr)[3] + iVar2) +
 *(int *)((int)(*arr)[3] + iVar2 + 4) + *(int *)((int)(*arr)[3] + iVar2 + 8) +
 *(int *)((int)(*arr)[3] + iVar2 + 0xc) + *(int *)((int)(*arr)[3] + iVar2 + 0x10) +
 *(int *)((int)(*arr)[4] + iVar2) + *(int *)((int)(*arr)[4] + iVar2 + 4) +
 *(int *)((int)(*arr)[4] + iVar2 + 8) + *(int *)((int)(*arr)[4] + iVar2 + 0xc) +
 *(int *)((int)(*arr)[4] + iVar2 + 0x10);
 iVar2 = iVar2 + 100;
 } while (iVar2 != 500);
 return iVar1;
}



/* Function: array_vla @ 00011580 */

int array_vla(int n,int *arr)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 if (n - 1U < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2] + arr[uVar2 + 1] + arr[uVar2 + 2] + arr[uVar2 + 3] +
 arr[uVar2 + 4] + arr[uVar2 + 5] + arr[uVar2 + 6] + arr[uVar2 + 7];
 uVar2 = uVar2 + 8;
 } while ((n & 0xfffffff8U) != uVar2);
 }
 if ((n & 7U) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2 + uVar3];
 uVar3 = uVar3 + 1;
 } while ((n & 7U) != uVar3);
 }
 }
 return iVar1;
}



/* Function: array_pointer @ 000115f0 */

int array_pointer(int (*arr) [10],int n)

{
 int iVar1;
 int (*paiVar2) [10];
 uint uVar3;
 int iVar4;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 if (n - 1U < 3) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 uVar3 = 0;
 iVar1 = 0;
 paiVar2 = arr;
 do {
 iVar1 = iVar1 + (*paiVar2)[0] + paiVar2[1][0] + paiVar2[2][0] + paiVar2[3][0];
 uVar3 = uVar3 + 4;
 paiVar2 = paiVar2 + 4;
 } while ((n & 0xfffffffcU) != uVar3);
 }
 if ((n & 3U) != 0) {
 iVar4 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)arr[uVar3] + iVar4);
 iVar4 = iVar4 + 0x28;
 } while ((n & 3U) * 0x28 != iVar4);
 }
 }
 return iVar1;
}



/* Function: pointer_array @ 00011660 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 /* Unresolved local var: int count@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 10;
 if ((uint)n < 10) {
 uVar2 = n;
 }
 if (uVar2 == 1) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 uVar3 = 0;
 iVar1 = 0;
 do {
 if (arr[uVar3] != (int *)0x0) {
 iVar1 = iVar1 + *arr[uVar3];
 }
 if (arr[uVar3 + 1] != (int *)0x0) {
 iVar1 = iVar1 + *arr[uVar3 + 1];
 }
 uVar3 = uVar3 + 2;
 } while ((uVar2 & 0xe) != uVar3);
 }
 if (((uVar2 & 1) != 0) && (arr[uVar3] != (int *)0x0)) {
 iVar1 = iVar1 + *arr[uVar3];
 }
 }
 return iVar1;
}



/* Function: array_complex_index @ 000116d0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 iVar1 = -1;
 if ((((-1 < x) && (y < h)) && (x < w)) && (-1 < y)) {
 iVar1 = arr[y * w + x];
 }
 return iVar1;
}



/* Function: array_oob @ 00011710 */

int array_oob(int *arr,int n)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 0) {
 iVar1 = 0;
 }
 else {
 uVar2 = n + 1U & 7;
 if ((uint)n < 7) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 uVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar3] + arr[uVar3 + 1] + arr[uVar3 + 2] + arr[uVar3 + 3] +
 arr[uVar3 + 4] + arr[uVar3 + 5] + arr[uVar3 + 6] + arr[uVar3 + 7];
 uVar3 = uVar3 + 8;
 } while ((n + 1U & 0xfffffff8) != uVar3);
 }
 if (uVar2 != 0) {
 uVar4 = 0;
 do {
 iVar1 = iVar1 + arr[uVar3 + uVar4];
 uVar4 = uVar4 + 1;
 } while (uVar2 != uVar4);
 }
 }
 return iVar1;
}



/* Function: test_array_types @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
 undefined4 uVar2;
 int local_38c [125];
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
 Unresolved local var: int *[10] ptr_arr@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int[20] flat@[???]
 Unresolved local var: int[5] arr1@[???]
 Unresolved local var: char[6] str@[???]
 Unresolved local var: int[3] vla_arr@[???] */
 puts(&DAT_000135e0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 *(undefined4 *)((int)local_198 + iVar1) = 0;
 *(uint *)((int)local_198 + iVar1 + 4) = (uint)(iVar1 == 0x28);
 *(uint *)((int)local_198 + iVar1 + 8) = (uint)(iVar1 == 0x50) * 2;
 *(uint *)((int)local_198 + iVar1 + 0xc) = (uint)(iVar1 == 0x78) * 3;
 *(uint *)((int)local_198 + iVar1 + 0x10) = (uint)(iVar1 == 0xa0) << 2;
 *(uint *)((int)local_198 + iVar1 + 0x14) = (uint)(iVar1 == 200) * 5;
 uVar2 = 0;
 if (iVar1 == 0xf0) {
 uVar2 = 6;
 }
 *(undefined4 *)((int)local_198 + iVar1 + 0x18) = uVar2;
 uVar2 = 0;
 if (iVar1 == 0x118) {
 uVar2 = 7;
 }
 *(undefined4 *)((int)local_198 + iVar1 + 0x1c) = uVar2;
 *(uint *)((int)local_198 + iVar1 + 0x20) = (uint)(iVar1 == 0x140) << 3;
 *(uint *)((int)local_198 + iVar1 + 0x24) = (uint)(iVar1 == 0x168) * 9;
 iVar1 = iVar1 + 0x28;
 } while (iVar1 != 400);
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 printf("ARR-L1-03 (array_2d_stack): %d\n",
 local_198[0xb] + local_198[0] + local_140 + local_114 + local_e8 + local_bc + local_90 +
 local_64 + local_38 + local_c);
 iVar1 = 0;
 do {
 *(undefined4 *)((int)local_38c + iVar1) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 4) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 8) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0xc) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x10) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x14) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x18) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x1c) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x20) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x24) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x28) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x2c) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x30) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x34) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x38) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x3c) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x40) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x44) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x48) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x4c) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x50) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x54) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x58) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x5c) = 1;
 *(undefined4 *)((int)local_38c + iVar1 + 0x60) = 1;
 iVar1 = iVar1 + 100;
 } while (iVar1 != 500);
 iVar1 = array_3d((int (*) [5] [5])local_38c);
 printf("ARR-L1-04 (array_3d): %d\n",iVar1);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 00011a60 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 00011a70 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00011a80 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00011a90 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 if (n - 1U < 7) {
 iVar1 = 0;
 }
 else {
 uVar2 = n & 0xfffffff8;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *p + p[1] + p[2] + p[3] + p[4] + p[5] + p[6] + p[7];
 p = p + 8;
 uVar2 = uVar2 - 8;
 } while (uVar2 != 0);
 }
 if ((n & 7U) != 0) {
 uVar2 = 0;
 do {
 iVar1 = iVar1 + p[uVar2];
 uVar2 = uVar2 + 1;
 } while ((n & 7U) != uVar2);
 }
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 00011b00 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00011b10 */

int ptr_diff(int *p1,int *p2)

{
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011b20 */

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



/* Function: ptr_const @ 00011b40 */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 00011b50 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00011b60 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00011b80 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *local_c;
 undefined4 local_8;
 
 /* Unresolved local var: char *[2] args@[???] */
 local_c = "test";
 local_8 = 0;
 iVar1 = (*f)(p,&local_c);
 return iVar1;
}



/* Function: ptr_cast @ 00011bc0 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * back_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * int_ptr@[???] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00011bd0 */

void * opaque_handle_create(int size)

{
 return (void *)size;
}



/* Function: opaque_handle_op @ 00011be0 */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 00011bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 /* Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int val3@[???]
 Unresolved local var: int[5] arr4@[???]
 Unresolved local var: int[5] arr5@[???]
 Unresolved local var: char c7@[???]
 Unresolved local var: int val7@[???]
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
 puts(&DAT_000135fb);
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



/* Function: struct_simple @ 00011d50 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00011d60 */

int struct_array(Point3D *pts,int n)

{
 int iVar1;
 uint uVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 if (n == 1) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 piVar3 = &pts[1].z;
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + piVar3[-5] + piVar3[-4] + piVar3[-3] + ((Point3D *)(piVar3 + -2))->x +
 piVar3[-1] + *piVar3;
 uVar2 = uVar2 + 2;
 piVar3 = piVar3 + 6;
 } while ((n & 0xfffffffeU) != uVar2);
 }
 if ((n & 1U) != 0) {
 iVar1 = iVar1 + pts[uVar2].x + pts[uVar2].y + pts[uVar2].z;
 }
 }
 return iVar1;
}



/* Function: struct_nested @ 00011dd0 */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00011de0 */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00011df0 */

int struct_with_ptr(Node *node)

{
 if (node->next != (Node *)0x0) {
 return node->next->data + node->data;
 }
 return node->data;
}



/* Function: struct_bitfields @ 00011e10 */

int struct_bitfields(Flags *f)

{
 ushort uVar1;
 
 uVar1 = *(ushort *)f;
 return (uint)(uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00011e40 */

int union_type(UnionData *u,int type)

{
 if (type == 1) {
 return (int)ROUND(u->f);
 }
 if (type == 0) {
 return u->i;
 }
 return (int)u->bytes[0];
}



/* Function: union_array @ 00011e90 */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 if (n - 1U < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2].i + arr[uVar2 + 1].i + arr[uVar2 + 2].i + arr[uVar2 + 3].i +
 arr[uVar2 + 4].i + arr[uVar2 + 5].i + arr[uVar2 + 6].i + arr[uVar2 + 7].i;
 uVar2 = uVar2 + 8;
 } while ((n & 0xfffffff8U) != uVar2);
 }
 if ((n & 7U) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2 + uVar3].i;
 uVar3 = uVar3 + 1;
 } while ((n & 7U) != uVar3);
 }
 }
 return iVar1;
}



/* Function: enum_type @ 00011f00 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00011f10 */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = *(int *)(&DAT_00013640 + s * 4);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011f40 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011f70 */

int linked_list(Node *head)

{
 int iVar1;
 
 /* Unresolved local var: Node * current@[DW_OP_breg4(ESP): +4]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (Node *)0x0; head = head->next) {
 iVar1 = iVar1 + head->data;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00011f90 */

int doubly_linked_list(DNode *head)

{
 int iVar1;
 
 /* Unresolved local var: DNode * current@[DW_OP_breg4(ESP): +4]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (DNode *)0x0; head = head->next) {
 iVar1 = iVar1 + head->data;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00011fb0 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 for (; root != (TreeNode *)0x0; root = root->right) {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 iVar3 = iVar3 + iVar1 + iVar2;
 }
 return iVar3;
}



/* Function: binary_tree @ 00011ff0 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00012020 */

int graph_traverse(Graph *g)

{
 uint uVar1;
 Edge *pEVar2;
 int *piVar3;
 int iVar4;
 uint uVar5;
 
 /* Unresolved local var: int sum@[???] */
 uVar1 = g->numVertices;
 /* Unresolved local var: int i@[???] */
 if ((int)uVar1 < 1) {
 iVar4 = 0;
 }
 else {
 if (uVar1 == 1) {
 uVar5 = 0;
 iVar4 = 0;
 }
 else {
 uVar5 = 0;
 iVar4 = 0;
 do {
 for (pEVar2 = g->adjList[uVar5]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
 iVar4 = iVar4 + pEVar2->dest;
 }
 for (piVar3 = *(int **)((int)g->adjList + (uVar5 * 4 | 4)); piVar3 != (int *)0x0;
 piVar3 = (int *)piVar3[1]) {
 iVar4 = iVar4 + *piVar3;
 }
 uVar5 = uVar5 + 2;
 } while (uVar5 != (uVar1 & 0xfffffffe));
 }
 /* Unresolved local var: Edge * edge@[???] */
 if ((uVar1 & 1) != 0) {
 for (pEVar2 = g->adjList[uVar5]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
 iVar4 = iVar4 + pEVar2->dest;
 }
 }
 }
 return iVar4;
}



/* Function: test_composite_types @ 000120b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int *piVar1;
 int iVar2;
 bool bVar3;
 int local_44;
 undefined4 *local_40;
 undefined4 local_3c;
 undefined4 *local_38;
 undefined4 local_34;
 undefined4 local_30;
 TreeNode local_2c;
 int local_1c;
 undefined4 *local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 int *local_8;
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[???]
 Unresolved local var: TreeNode tree@[???]
 Unresolved local var: Point3D p1@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: Device dev@[???]
 Unresolved local var: Edge e1@[???]
 Unresolved local var: Graph g@[???]
 Unresolved local var: Point3D[2] pts@[???]
 Unresolved local var: UnionData[3] arr_u@[???] */
 puts(&DAT_00013616);
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
 piVar1 = &local_44;
 local_44 = 10;
 local_40 = &local_3c;
 local_3c = 0x14;
 local_38 = &local_34;
 local_34 = 0x1e;
 local_30 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar2);
 piVar1 = &local_1c;
 local_1c = 10;
 local_14 = 0;
 local_10 = 0x14;
 local_c = 0;
 local_8 = piVar1;
 local_18 = &local_10;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
 local_2c.right = (TreeNode *)0x0;
 local_2c.left = (TreeNode *)0x0;
 local_2c.data = 100;
 iVar2 = binary_tree_sum(&local_2c);
 printf("CMP-L2-14 (binary_tree): %d\n",iVar2);
 iVar2 = 1;
 piVar1 = (int *)0x0;
 /* Unresolved local var: int sum@[DW_OP_reg0(EAX)]
 Unresolved local var: int i@[???]
 Unresolved local var: Edge * edge@[???] */
 bVar3 = false;
 while (bVar3) {
 iVar2 = iVar2 + *piVar1;
 piVar1 = (int *)piVar1[1];
 bVar3 = piVar1 != (int *)0x0;
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar2);
 return;
}



/* Function: main @ 000122f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */
