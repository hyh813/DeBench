/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <stdlib.h>

/* Type definitions for decompiled code */
typedef unsigned char undefined;

/* Ghidra macros */
#define SUB168(val, offset) (*(undefined8*)((unsigned char*)&(val) + (offset)))
#define CARRY8(x,y) ((ulong)(x) + (ulong)(y) < (ulong)(x))
#define LZCOUNT(x) __builtin_clzll((unsigned long long)(x))
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef long long longlong;
typedef long double long_double;
typedef unsigned char byte;
typedef void (*code)(void);

/* Forward declarations */
typedef struct Point3D Point3D;
typedef struct Rect Rect;
typedef struct Widget Widget;
typedef struct Node Node;
typedef struct DNode DNode;
typedef struct Flags Flags;
typedef struct UnionData UnionData;
typedef enum State State;
typedef struct Device Device;
typedef struct Graph Graph;
typedef struct Edge Edge;
typedef struct TreeNode TreeNode;

/* Struct definitions */
struct Point3D {
    int x;
    int y;
    int z;
};

struct Rect {
    Point3D position;
    struct { int width; int height; } size;
};

struct Widget {
    struct { struct { unsigned char r, g, b; } fill; } style;
    Rect bounds;
};

struct Node {
    int data;
    struct Node *next;
};

struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
};

struct Flags {
    unsigned short flags;
};

struct UnionData {
    union {
        int i;
        float f;
        unsigned char bytes[16];
    };
};

enum State {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
};

struct Device {
    int data;
    int (*process)(int);
};

struct Edge {
    int dest;
    struct Edge *next;
};

struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    undefined4 _4_4_;
};

struct Graph {
    int numVertices;
    Edge **adjList;
};

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int*, char**);

/* External registers */
extern undefined8 fpcr;
extern undefined8 fpsr;

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
extern char DAT_0010303f[];
extern char DAT_00103060[];
extern char DAT_0010307b[];
extern char DAT_00102aa0[];
extern char DAT_00103096[];

/* 16-byte float type for long double operations */
typedef union {
    struct { undefined8 _0_8_; undefined8 _8_8_; };
    struct { undefined4 _0_4_; undefined4 _4_4_; undefined4 _8_4_; undefined4 _12_4_; };
    undefined1 bytes[16];
} float128_t;

/* External function declarations */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern float128_t __multf3(float128_t, float128_t);
extern float128_t __addtf3(float128_t, float128_t);
extern ulong __sfp_handle_exceptions(ulong);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100620 @ 00100620 */

void FUN_00100620(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010077c @ 0010077c */

void FUN_0010077c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 001007d4 */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (byte)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 001007ec */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_int @ 001007f4 */

int process_int(int x)

{
 return x << 1 | 1;
}



/* Function: process_long @ 00100804 */

long process_long(long x)

{
 return x << 1;
}



/* Function: process_ll @ 0010080c */

longlong process_ll(longlong x)

{
 return x * x;
}



/* Function: process_float @ 00100814 */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00100824 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 0010083c */

long_double process_ld(long_double d)

{
 undefined1 auVar1 [16];
 float128_t fVar2;
 float128_t fVar3;
 float128_t fd;
 
 fd._0_8_ = SUB168(d,0);
 fd._8_8_ = SUB168(d,8);
 fVar2 = __multf3(fd,fd);
 fVar3 = __addtf3(fVar2,fd);
 SUB168(auVar1,0) = fVar3._0_8_;
 SUB168(auVar1,8) = fVar3._8_8_;
 return *(long_double*)auVar1;
}



/* Function: process_bool @ 0010085c */

_Bool process_bool(int x)

{
 return 0 < x && (x & 1U) == 0;
}



/* Function: const_param @ 00100874 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 00100880 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00100890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 /* Unresolved local var: int vol_value@[???]
 Unresolved local var: int value@[???] */
 puts(DAT_0010303f);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 printf("DT-L1-08 (process_ld): %.2Lf\n",0);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 001009a4 */

int array_1d_stack(int *arr,int n)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 piVar4 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar7;
 do {
 piVar1 = piVar4 + -4;
 piVar2 = piVar4 + -2;
 piVar3 = piVar4 + 2;
 uVar17 = *(undefined8 *)piVar4;
 piVar4 = piVar4 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar7 == uVar5) {
 return iVar9;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar4 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar9 = *piVar4 + iVar9;
 piVar4 = piVar4 + 1;
 } while (lVar6 != 0);
 return iVar9;
}



/* Function: array_string @ 00100a2c */

int array_string(char *str)

{
 char cVar1;
 int iVar2;
 
 /* Unresolved local var: int len@[???] */
 iVar2 = -1;
 do {
 cVar1 = *str;
 iVar2 = iVar2 + 1;
 str = str + 1;
 } while (cVar1 != '\0');
 return iVar2;
}



/* Function: array_2d_stack @ 00100a44 */

int array_2d_stack(int arr[10][10])

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 return arr[9][9] +
 arr[8][8] +
 arr[7][7] +
 arr[6][6] + arr[5][5] + arr[4][4] + arr[3][3] + arr[2][2] + arr[1][1] + arr[0][0];
}



/* Function: array_3d @ 00100a94 */

int array_3d(int arr[5][5][5])

{
 int sum;
 int i;
 int j;
 int k;
 
 sum = 0;
 for (i = 0; i < 5; i++) {
  for (j = 0; j < 5; j++) {
   for (k = 0; k < 5; k++) {
    sum += arr[i][j][k];
   }
  }
 }
 return sum;
}



/* Function: array_vla @ 00100bcc */

int array_vla(int n,int *arr)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 ulong uVar4;
 long lVar5;
 ulong uVar6;
 int *piVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar4 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar6 = 0;
 iVar9 = 0;
 }
 else {
 uVar6 = uVar4 & 0xfffffff8;
 piVar7 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar6;
 do {
 piVar1 = piVar7 + -4;
 piVar2 = piVar7 + -2;
 piVar3 = piVar7 + 2;
 uVar17 = *(undefined8 *)piVar7;
 piVar7 = piVar7 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar6 == uVar4) {
 return iVar9;
 }
 }
 lVar5 = uVar4 - uVar6;
 piVar7 = arr + uVar6;
 do {
 lVar5 = lVar5 + -1;
 iVar9 = *piVar7 + iVar9;
 piVar7 = piVar7 + 1;
 } while (lVar5 != 0);
 return iVar9;
}



/* Function: array_pointer @ 00100c50 */

int array_pointer(int (*arr) [10],int n)

{
 int (*paiVar1) [10];
 int *piVar2;
 int iVar3;
 int iVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 int (*paiVar8) [10];
 ulong uVar9;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if (n == 1) {
 uVar7 = 0;
 iVar3 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffe;
 iVar4 = 0;
 iVar3 = 0;
 uVar9 = uVar7;
 paiVar8 = arr;
 do {
 piVar2 = *paiVar8;
 uVar9 = uVar9 - 2;
 paiVar1 = paiVar8 + 1;
 paiVar8 = paiVar8 + 2;
 iVar4 = *piVar2 + iVar4;
 iVar3 = (*paiVar1)[0] + iVar3;
 } while (uVar9 != 0);
 iVar3 = iVar3 + iVar4;
 if (uVar7 == uVar5) {
 return iVar3;
 }
 }
 lVar6 = uVar5 - uVar7;
 paiVar8 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar3 = (*paiVar8)[0] + iVar3;
 paiVar8 = paiVar8 + 1;
 } while (lVar6 != 0);
 return iVar3;
}



/* Function: pointer_array @ 00100cd8 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int count@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (9 < (uint)n) {
 n = 10;
 }
 uVar2 = (ulong)(uint)n;
 do {
 if (*arr != (int *)0x0) {
 iVar1 = **arr + iVar1;
 }
 arr = arr + 1;
 uVar2 = uVar2 - 1;
 } while (uVar2 != 0);
 }
 return iVar1;
}



/* Function: array_complex_index @ 00100d20 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 if (-1 < x) {
 iVar1 = -1;
 if (((y < h) && (x < w)) && (-1 < y)) {
 iVar1 = arr[x + y * w];
 }
 return iVar1;
 }
 return -1;
}



/* Function: array_oob @ 00100d54 */

int array_oob(int *arr,int n)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 0) {
 return 0;
 }
 uVar5 = (ulong)(n + 1);
 if ((uint)n < 7) {
 uVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 piVar4 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar7;
 do {
 piVar1 = piVar4 + -4;
 piVar2 = piVar4 + -2;
 piVar3 = piVar4 + 2;
 uVar17 = *(undefined8 *)piVar4;
 piVar4 = piVar4 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar7 == uVar5) {
 return iVar9;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar4 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar9 = *piVar4 + iVar9;
 piVar4 = piVar4 + 1;
 } while (lVar6 != 0);
 return iVar9;
}



/* Function: test_array_types @ 00100dd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 uint uVar1;
 int local_220 [4];
 undefined1 auStack_210 [16];
 int local_200 [6];
 undefined1 auStack_1e8 [16];
 int aiStack_1d8 [110];
 
 /* Unresolved local var: int[5][5][5] cube@[DW_OP_breg31(sp): 0]
 Unresolved local var: int[10][10] matrix@[???]
 Unresolved local var: int[5][10] arr2@[???]
 Unresolved local var: int *[10] ptr_arr@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int[20] flat@[???]
 Unresolved local var: int[5] arr1@[???]
 Unresolved local var: char[6] str@[???]
 Unresolved local var: int[3] vla_arr@[???] */
 puts(DAT_00103060);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 aiStack_1d8[0x6a] = 1;
 local_220[2] = 1;
 local_220[3] = 1;
 local_220[0] = 1;
 local_220[1] = 1;
 ((int*)auStack_210)[2] = 1;
 ((int*)auStack_210)[3] = 1;
 ((int*)auStack_210)[0] = 1;
 ((int*)auStack_210)[1] = 1;
 local_200[2] = 1;
 local_200[3] = 1;
 local_200[0] = 1;
 local_200[1] = 1;
 ((int*)auStack_1e8)[0] = 1;
 ((int*)auStack_1e8)[1] = 1;
 local_200[4] = 1;
 local_200[5] = 1;
 aiStack_1d8[0] = 1;
 aiStack_1d8[1] = 1;
 ((int*)auStack_1e8)[2] = 1;
 ((int*)auStack_1e8)[3] = 1;
 aiStack_1d8[4] = 1;
 aiStack_1d8[5] = 1;
 aiStack_1d8[2] = 1;
 aiStack_1d8[3] = 1;
 aiStack_1d8[8] = 1;
 aiStack_1d8[9] = 1;
 aiStack_1d8[6] = 1;
 aiStack_1d8[7] = 1;
 aiStack_1d8[0xc] = 1;
 aiStack_1d8[0xd] = 1;
 aiStack_1d8[10] = 1;
 aiStack_1d8[0xb] = 1;
 aiStack_1d8[0x10] = 1;
 aiStack_1d8[0x11] = 1;
 aiStack_1d8[0xe] = 1;
 aiStack_1d8[0xf] = 1;
 aiStack_1d8[0x14] = 1;
 aiStack_1d8[0x15] = 1;
 aiStack_1d8[0x12] = 1;
 aiStack_1d8[0x13] = 1;
 aiStack_1d8[0x18] = 1;
 aiStack_1d8[0x19] = 1;
 aiStack_1d8[0x16] = 1;
 aiStack_1d8[0x17] = 1;
 aiStack_1d8[0x1c] = 1;
 aiStack_1d8[0x1d] = 1;
 aiStack_1d8[0x1a] = 1;
 aiStack_1d8[0x1b] = 1;
 aiStack_1d8[0x20] = 1;
 aiStack_1d8[0x21] = 1;
 aiStack_1d8[0x1e] = 1;
 aiStack_1d8[0x1f] = 1;
 aiStack_1d8[0x24] = 1;
 aiStack_1d8[0x25] = 1;
 aiStack_1d8[0x22] = 1;
 aiStack_1d8[0x23] = 1;
 aiStack_1d8[0x28] = 1;
 aiStack_1d8[0x29] = 1;
 aiStack_1d8[0x26] = 1;
 aiStack_1d8[0x27] = 1;
 aiStack_1d8[0x2c] = 1;
 aiStack_1d8[0x2d] = 1;
 aiStack_1d8[0x2a] = 1;
 aiStack_1d8[0x2b] = 1;
 aiStack_1d8[0x30] = 1;
 aiStack_1d8[0x31] = 1;
 aiStack_1d8[0x2e] = 1;
 aiStack_1d8[0x2f] = 1;
 aiStack_1d8[0x34] = 1;
 aiStack_1d8[0x35] = 1;
 aiStack_1d8[0x32] = 1;
 aiStack_1d8[0x33] = 1;
 aiStack_1d8[0x38] = 1;
 aiStack_1d8[0x39] = 1;
 aiStack_1d8[0x36] = 1;
 aiStack_1d8[0x37] = 1;
 aiStack_1d8[0x3c] = 1;
 aiStack_1d8[0x3d] = 1;
 aiStack_1d8[0x3a] = 1;
 aiStack_1d8[0x3b] = 1;
 aiStack_1d8[0x40] = 1;
 aiStack_1d8[0x41] = 1;
 aiStack_1d8[0x3e] = 1;
 aiStack_1d8[0x3f] = 1;
 aiStack_1d8[0x44] = 1;
 aiStack_1d8[0x45] = 1;
 aiStack_1d8[0x42] = 1;
 aiStack_1d8[0x43] = 1;
 aiStack_1d8[0x48] = 1;
 aiStack_1d8[0x49] = 1;
 aiStack_1d8[0x46] = 1;
 aiStack_1d8[0x47] = 1;
 aiStack_1d8[0x4c] = 1;
 aiStack_1d8[0x4d] = 1;
 aiStack_1d8[0x4a] = 1;
 aiStack_1d8[0x4b] = 1;
 aiStack_1d8[0x50] = 1;
 aiStack_1d8[0x51] = 1;
 aiStack_1d8[0x4e] = 1;
 aiStack_1d8[0x4f] = 1;
 aiStack_1d8[0x54] = 1;
 aiStack_1d8[0x55] = 1;
 aiStack_1d8[0x52] = 1;
 aiStack_1d8[0x53] = 1;
 aiStack_1d8[0x58] = 1;
 aiStack_1d8[0x59] = 1;
 aiStack_1d8[0x56] = 1;
 aiStack_1d8[0x57] = 1;
 aiStack_1d8[0x5c] = 1;
 aiStack_1d8[0x5d] = 1;
 aiStack_1d8[0x5a] = 1;
 aiStack_1d8[0x5b] = 1;
 aiStack_1d8[0x60] = 1;
 aiStack_1d8[0x61] = 1;
 aiStack_1d8[0x5e] = 1;
 aiStack_1d8[0x5f] = 1;
 aiStack_1d8[100] = 1;
 aiStack_1d8[0x65] = 1;
 aiStack_1d8[0x62] = 1;
 aiStack_1d8[99] = 1;
 aiStack_1d8[0x68] = 1;
 aiStack_1d8[0x69] = 1;
 aiStack_1d8[0x66] = 1;
 aiStack_1d8[0x67] = 1;
 uVar1 = array_3d((int (*)[5][5])aiStack_1d8);
 printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 00100ed8 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 00100ee4 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00100ef4 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00100f08 */

int ptr_increment(int *p,int n)

{
 int *piVar1;
 ulong uVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if (n - 1U < 7) {
 uVar7 = 0;
 iVar9 = 0;
 piVar6 = p;
 }
 else {
 uVar2 = (ulong)(n - 1U) + 1;
 uVar7 = uVar2 & 0x1fffffff8;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 piVar6 = p + uVar7;
 piVar5 = p + 4;
 uVar8 = uVar7;
 do {
 piVar1 = piVar5 + -4;
 piVar3 = piVar5 + -2;
 piVar4 = piVar5 + 2;
 uVar17 = *(undefined8 *)piVar5;
 piVar5 = piVar5 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar3 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar4 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar4 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar2 == uVar7) {
 return iVar9;
 }
 }
 iVar10 = n - (int)uVar7;
 do {
 iVar10 = iVar10 + -1;
 iVar9 = *piVar6 + iVar9;
 piVar6 = piVar6 + 1;
 } while (iVar10 != 0);
 return iVar9;
}



/* Function: ptr_offset @ 00100f94 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00100f9c */

int ptr_diff(int *p1,int *p2)

{
 return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 00100fa8 */

int ptr_void(void *p,int type)

{
 if (type == 1) {
 return (int)*(byte *)p;
 }
 if (type == 0) {
 return *(int *)p;
 }
 return -1;
}



/* Function: ptr_const @ 00100fcc */

int ptr_const(int *p)

{
 return *p << 1;
}



/* Function: ptr_const_ptr @ 00100fd8 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00100fec */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00100ff4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00100ff8 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *local_20;
 undefined8 uStack_18;
 
 /* Unresolved local var: char *[2] args@[DW_OP_breg31(sp): 0] */
 uStack_18 = 0;
 local_20 = "test";
 iVar1 = (*f)(p,&local_20);
 return iVar1;
}



/* Function: ptr_cast @ 00101034 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(x0)] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 0010103c */

void * opaque_handle_create(int size)

{
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101044 */

int opaque_handle_op(void *handle)

{
 return (int)handle << 1;
}



/* Function: test_pointer_types @ 0010104c */

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
 puts(DAT_0010307b);
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



/* Function: struct_simple @ 00101150 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00101164 */

int struct_array(Point3D *pts,int n)

{
 int *piVar1;
 ulong uVar2;
 ulong uVar3;
 long lVar4;
 ulong uVar5;
 Point3D *pPVar6;
 int *piVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar3 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar5 = 0;
 iVar8 = 0;
 }
 else {
 uVar5 = uVar3 & 0xfffffff8;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 uVar2 = uVar5;
 pPVar6 = pts;
 do {
 uVar2 = uVar2 - 8;
 iVar12 = pPVar6->x + iVar12 + pPVar6->y + pPVar6->z;
 iVar13 = pPVar6[1].x + iVar13 + pPVar6[1].y + pPVar6[1].z;
 iVar14 = pPVar6[2].x + iVar14 + pPVar6[2].y + pPVar6[2].z;
 iVar15 = pPVar6[3].x + iVar15 + pPVar6[3].y + pPVar6[3].z;
 iVar8 = pPVar6[4].x + iVar8 + pPVar6[4].y + pPVar6[4].z;
 iVar9 = pPVar6[5].x + iVar9 + pPVar6[5].y + pPVar6[5].z;
 iVar10 = pPVar6[6].x + iVar10 + pPVar6[6].y + pPVar6[6].z;
 iVar11 = pPVar6[7].x + iVar11 + pPVar6[7].y + pPVar6[7].z;
 pPVar6 = pPVar6 + 8;
 } while (uVar2 != 0);
 iVar8 = iVar8 + iVar12 + iVar9 + iVar13 + iVar10 + iVar14 + iVar11 + iVar15;
 if (uVar5 == uVar3) {
 return iVar8;
 }
 }
 lVar4 = uVar3 - uVar5;
 piVar7 = &pts[uVar5].y;
 do {
 pPVar6 = (Point3D *)(piVar7 + -1);
 iVar9 = *piVar7;
 piVar1 = piVar7 + 1;
 piVar7 = piVar7 + 3;
 lVar4 = lVar4 + -1;
 iVar8 = pPVar6->x + iVar8 + iVar9 + *piVar1;
 } while (lVar4 != 0);
 return iVar8;
}



/* Function: struct_nested @ 0010121c */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 0010122c */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 0010123c */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = 0;
 if (node->next != (Node *)0x0) {
 iVar1 = node->next->data;
 }
 return iVar1 + node->data;
}



/* Function: struct_bitfields @ 00101254 */

int struct_bitfields(Flags *f)

{
 ushort uVar1;
 
 uVar1 = *(ushort *)f;
 return (uVar1 & 1) + (uint)(uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00101274 */

int union_type(UnionData *u,int type)

{
 if (type == 1) {
 return (int)u->f;
 }
 if (type == 0) {
 return u->i;
 }
 return (int)(byte)u->bytes[0];
}



/* Function: union_array @ 0010129c */

int union_array(UnionData *arr,int n)

{
 UnionData *pUVar1;
 UnionData *pUVar2;
 UnionData *pUVar3;
 UnionData *pUVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 pUVar4 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar7;
 do {
 pUVar1 = pUVar4 + -4;
 pUVar2 = pUVar4 + -2;
 pUVar3 = pUVar4 + 2;
 uVar17 = *(undefined8 *)pUVar4;
 pUVar4 = pUVar4 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)pUVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)pUVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)pUVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)pUVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)pUVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)pUVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar7 == uVar5) {
 return iVar9;
 }
 }
 lVar6 = uVar5 - uVar7;
 pUVar4 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar9 = pUVar4->i + iVar9;
 pUVar4 = pUVar4 + 1;
 } while (lVar6 != 0);
 return iVar9;
}



/* Function: enum_type @ 00101324 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00101330 */

int enum_switch(State s)

{
 if (s < 4) {
 return *(int *)(&DAT_00102aa0 + (long)(int)s * 4);
 }
 return -99;
}



/* Function: struct_func_ptr @ 00101350 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0010135c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00101360 */

int linked_list(Node *head)

{
 int iVar1;
 
 /* Unresolved local var: Node * current@[DW_OP_reg0(x0)]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (Node *)0x0; head = head->next) {
 iVar1 = head->data + iVar1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00101380 */

int doubly_linked_list(DNode *head)

{
 int iVar1;
 
 /* Unresolved local var: DNode * current@[DW_OP_reg0(x0)]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (DNode *)0x0; head = head->next) {
 iVar1 = head->data + iVar1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 001013a0 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root != (TreeNode *)0x0) {
 iVar3 = 0;
 do {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 root = root->right;
 iVar3 = iVar1 + iVar3 + iVar2;
 } while (root != (TreeNode *)0x0);
 return iVar3;
 }
 return 0;
}



/* Function: binary_tree @ 00101404 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root != (TreeNode *)0x0) {
 iVar3 = 0;
 do {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 root = root->right;
 iVar3 = iVar1 + iVar3 + iVar2;
 } while (root != (TreeNode *)0x0);
 return iVar3;
 }
 return 0;
}



/* Function: graph_traverse @ 00101408 */

int graph_traverse(Graph *g)

{
 int iVar1;
 ulong uVar2;
 Edge *pEVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (g->numVertices < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar3 = g->adjList[uVar2]; pEVar3 != (Edge *)0x0; pEVar3 = pEVar3->next) {
 iVar1 = pEVar3->dest + iVar1;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != (uint)g->numVertices);
 }
 return iVar1;
}



/* Function: test_composite_types @ 00101454 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int iVar1;
 uint uVar2;
 ulong uVar3;
 int *piVar4;
 TreeNode local_a0;
 int local_80 [2];
 undefined4 *local_78;
 undefined8 uStack_70;
 undefined4 local_68 [2];
 undefined8 local_60;
 int *piStack_58;
 int local_50 [2];
 undefined4 *local_48;
 undefined4 local_40 [2];
 undefined4 *local_38;
 undefined4 local_30 [2];
 undefined8 local_28;
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[DW_OP_breg31(sp): +32]
 Unresolved local var: TreeNode tree@[DW_OP_breg31(sp): 0]
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
 puts(DAT_00103096);
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
 piVar4 = local_50;
 uVar3 = 0;
 local_50[0] = 10;
 local_30[0] = 0x1e;
 local_40[0] = 0x14;
 local_48 = local_40;
 local_38 = local_30;
 local_28 = 0;
 do {
 /* Unresolved local var: Node * current@[DW_OP_reg8(x8)]
 Unresolved local var: int sum@[DW_OP_reg1(x1)] */
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 uVar3 = (ulong)(uint)(iVar1 + (int)uVar3);
 } while (piVar4 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",uVar3);
 piVar4 = local_80;
 uVar3 = 0;
 local_80[0] = 10;
 local_68[0] = 0x14;
 local_60 = 0;
 piStack_58 = piVar4;
 local_78 = local_68;
 uStack_70 = 0;
 do {
 /* Unresolved local var: DNode * current@[DW_OP_reg8(x8)]
 Unresolved local var: int sum@[DW_OP_reg1(x1)] */
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 uVar3 = (ulong)(uint)(iVar1 + (int)uVar3);
 } while (piVar4 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar3);
 local_a0.left = (TreeNode *)0x0;
 local_a0.data = 100;
 local_a0._4_4_ = 0;
 local_a0.right = (TreeNode *)0x0;
 uVar2 = binary_tree_sum(&local_a0);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
 printf("CMP-L2-15 (graph_traverse): %d\n",1);
 return;
}



/* Function: main @ 00101604 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __addtf3 @ 00101630 */

float128_t __addtf3(float128_t param_1,float128_t param_2)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 ulong uVar4;
 float128_t auVar5;
 bool bVar6;
 bool bVar7;
 uint uVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 uint uVar12;
 ulong uVar13;
 uint uVar14;
 ulong uVar15;
 ulong uVar16;
 ulong uVar17;
 long lVar18;
 ulong uVar19;
 ulong uVar20;
 ulong uVar21;
 ulong uVar22;
 ulong uVar23;
 ulong uVar24;
 ulong uVar25;
 ulong uVar26;
 ulong uVar28;
 float128_t auVar27;
 ulong uVar29;
 
 uVar11 = param_2._8_8_;
 uVar29 = param_2._0_8_;
 uVar28 = param_1._8_8_;
 uVar26 = param_1._0_8_;
 uVar13 = fpcr;
 uVar3 = (uVar28 & 0xffffffffffff) << 3;
 lVar18 = -((long)uVar28 >> 0x3f);
 uVar12 = (uint)lVar18;
 lVar9 = -((long)uVar11 >> 0x3f);
 uVar14 = (uint)lVar9;
 uVar2 = uVar11 << 3;
 uVar4 = uVar2 & 0x7fffffffffff8;
 uVar10 = uVar26 >> 0x3d;
 uVar24 = uVar3 | uVar10;
 uVar20 = uVar28 >> 0x30 & 0x7fff;
 uVar19 = uVar11 >> 0x30 & 0x7fff;
 uVar17 = uVar29 >> 0x3d;
 uVar16 = uVar4 | uVar17;
 uVar21 = uVar26 * 8;
 uVar23 = uVar29 * 8;
 uVar22 = uVar21;
 uVar25 = uVar24;
 if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
 uVar8 = (int)uVar20 - (int)uVar19;
 lVar9 = lVar18;
 if ((int)uVar8 < 1) {
 if (uVar8 != 0) {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 goto LAB_00101950;
 }
 goto LAB_00101c04;
 }
 goto LAB_001018ac;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00101a68;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar10 = uVar17 + uVar23;
 uVar20 = uVar19;
 if (CARRY8(uVar17,uVar23)) {
 uVar16 = uVar16 + 1;
 }
 goto LAB_00101a68;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00101b14;
 }
LAB_00101c98:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_001017e4;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101f20;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101c98;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_001020c8;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102160;
 }
LAB_0010218c:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_001020d0:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101b14;
 }
LAB_00101f20:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010218c;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c98;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f20;
LAB_001020c8:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_001020d0;
 }
LAB_00102160:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00101b14;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_001018cc;
 }
 goto LAB_00101e98;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101e98;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_0010177c;
 }
LAB_00101768:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010176c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_0010177c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102170:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_001019bc;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_0010210c;
LAB_00101fd8:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_001019bc;
 }
LAB_00101e34:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00101e54;
 }
 goto LAB_00101978;
 }
LAB_00101ec4:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_00101a68;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c98;
 goto LAB_00101944;
 }
 goto LAB_00101840;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_001018ac;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c04;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00101950:
 uVar20 = 0x7fff;
 goto LAB_00101958;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_00101af4;
LAB_00101840:
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 uVar16 = uVar24;
 }
 }
 else {
 uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
 uVar16 = uVar24;
 }
 uVar10 = uVar17 + uVar21;
 if (CARRY8(uVar17,uVar21)) {
 uVar16 = uVar16 + 1;
 }
LAB_00101a68:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_001018ac;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_0010177c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00101ec4;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102170;
 if (uVar10 != 0x800000) goto LAB_00101e34;
 if (lVar18 != 0) goto LAB_00101fd8;
LAB_0010210c:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_001017ac:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_001017c8;
 }
LAB_00101978:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00101994;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101994:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_001018cc;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_001019bc:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_001019d0;
 }
 uVar8 = (int)uVar20 - (int)uVar19;
 if ((int)uVar8 < 1) {
 if (uVar8 == 0) {
 uVar11 = 0;
 if ((uVar20 + 1 & 0x7ffe) != 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar10 >> 0x33 & 1) != 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_00101704;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_00101704;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_001018cc;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101e98;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_0010177c;
 }
 goto LAB_00101f70;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010176c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_00101f70:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_001018cc;
 }
LAB_00101e98:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00101ea0;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101dd8;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00101da8;
 }
LAB_00102020:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_0010209c:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00101b14;
 }
LAB_00102038:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101b14;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00101da8;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00102020;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101da8:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101b14;
 }
 goto LAB_00102038;
 }
LAB_00101dd8:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010209c;
 }
 uVar22 = 0xffffffffffffffff;
 uVar10 = 0xffffffffffff;
 uVar12 = 0;
 uVar11 = 1;
 }
 else {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar12 = uVar14;
 goto LAB_00101950;
 }
 goto LAB_00101c04;
 }
 goto LAB_001018ac;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_001016fc;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar22 = uVar23 - uVar10;
 uVar25 = uVar16 - (uVar23 < uVar10);
 goto LAB_001016fc;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101c98;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00101b14:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_001017c8;
 }
 }
 uVar14 = 0x7fff;
 uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 uVar19 = uVar20;
 lVar9 = lVar18;
 goto LAB_001016fc;
 }
 goto LAB_001016a8;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101944:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00101950;
 }
LAB_00101c04:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00101b14;
 }
LAB_001018ac:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x001018bc;
LAB_0010177c:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00101ea0:
 uVar11 = 0;
 if (((uint)uVar13 >> 0xb & 1) != 0) {
 uVar11 = 8;
 }
 }
 }
 else {
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0x400000) {
 uVar11 = 0x10;
joined_r0x00101e54:
 if (lVar18 == 0) {
LAB_00101aa4:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00101aa4;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_001017a8;
 }
 uVar11 = 0x10;
 if (((uVar22 & 0xf) != 4) &&
 (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
 uVar25 = uVar25 + 1;
 }
 }
 uVar10 = uVar25 & 0x8000000000000;
 if (bVar6) {
 uVar11 = (ulong)((uint)uVar11 | 8);
 }
 }
LAB_001017a8:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_001017ac;
LAB_00101958:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00101b14;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_001016a8:
 if (uVar20 == 0x7fff) {
LAB_00101af4:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c98;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101b14;
 }
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
 }
 uVar22 = uVar21 - uVar10;
 uVar25 = uVar24 - (uVar21 < uVar10);
 uVar19 = uVar20;
 lVar9 = lVar18;
LAB_001016fc:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_001018ac;
LAB_00101704:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00101710;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101710:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_001018ac;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00101768;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010176c:
 uVar12 = (uint)lVar9;
joined_r0x001018bc:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_0010177c;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_001018cc:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_001017c8:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_001017e4:
 auVar27._8_8_ = uVar10;
 auVar27._0_8_ = uVar22;
 return auVar27;
 }
LAB_001019d0:
 __sfp_handle_exceptions(uVar11);
 auVar5._8_8_ = uVar10;
 auVar5._0_8_ = uVar22;
 return auVar5;
}



/* Function: __multf3 @ 001021d0 */

float128_t __multf3(float128_t param_1,float128_t param_2)

{
 ulong uVar1;
 bool bVar3;
 uint uVar4;
 uint uVar5;
 ulong uVar6;
 ulong uVar7;
 int iVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 long lVar12;
 long lVar13;
 ulong uVar14;
 ulong uVar15;
 ulong uVar16;
 ulong uVar17;
 ulong uVar18;
 ulong uVar19;
 long lVar20;
 ulong uVar21;
 ulong uVar22;
 long lVar23;
 long lVar24;
 ulong uVar25;
 ulong uVar26;
 ulong uVar27;
 ulong uVar28;
 ulong uVar29;
 ulong uVar30;
 float128_t auVar31;
 float128_t auVar2;
 
 uVar21 = param_2._8_8_;
 uVar17 = param_2._0_8_;
 uVar11 = param_1._8_8_;
 uVar15 = param_1._0_8_;
 uVar18 = fpcr;
 uVar10 = uVar11 >> 0x3f;
 uVar19 = uVar11 & 0xffffffffffff;
 uVar11 = uVar11 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar11;
 if (iVar8 == 0) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 4;
 lVar13 = 0;
 lVar24 = 1;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 if (uVar19 == 0) {
 uVar11 = LZCOUNT(uVar15) + 0x31;
 iVar8 = (int)uVar11;
 lVar13 = LZCOUNT(uVar15) + 0x40;
 if (uVar11 < 0x3d) goto LAB_00102628;
 uVar11 = 0;
 uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 }
 else {
 lVar13 = LZCOUNT(uVar19);
 iVar8 = (int)lVar13 + -0xf;
LAB_00102628:
 uVar19 = uVar15 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar19 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar11 = uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 uVar7 = 0;
 lVar13 = -0x3fef - lVar13;
 lVar24 = 0;
 uVar6 = 0;
 }
 }
 else if (iVar8 == 0x7fff) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 8;
 lVar13 = 0x7fff;
 lVar24 = 2;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 uVar6 = uVar19 >> 0x2f ^ 1;
 uVar7 = 0xc;
 lVar13 = 0x7fff;
 lVar24 = 3;
 uVar11 = uVar15;
 }
 }
 else {
 uVar19 = uVar15 >> 0x3d | uVar19 << 3 | 0x8000000000000;
 lVar13 = uVar11 - 0x3fff;
 lVar24 = 0;
 uVar7 = 0;
 uVar6 = 0;
 uVar11 = uVar15 << 3;
 }
 uVar14 = uVar21 >> 0x3f;
 uVar15 = uVar21 & 0xffffffffffff;
 uVar22 = uVar21 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar22;
 uVar4 = param_1._12_4_;
 uVar5 = param_2._12_4_;
 if (iVar8 == 0) {
 if (uVar17 == 0 && uVar15 == 0) {
 uVar7 = uVar7 | 1;
 lVar23 = lVar13 + 1;
 uVar21 = 0;
 uVar17 = 0;
 lVar12 = 1;
 lVar20 = lVar13;
 }
 else {
 if (uVar15 == 0) {
 uVar21 = LZCOUNT(uVar17) + 0x31;
 iVar8 = (int)uVar21;
 lVar23 = LZCOUNT(uVar17) + 0x40;
 if (uVar21 < 0x3d) goto LAB_001025cc;
 uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 uVar17 = 0;
 }
 else {
 lVar23 = LZCOUNT(uVar15);
 iVar8 = (int)lVar23 + -0xf;
LAB_001025cc:
 uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 lVar20 = (lVar13 - lVar23) + -0x3fef;
 lVar23 = (lVar13 - lVar23) + -0x3fee;
 lVar12 = 0;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 if (uVar7 < 0xb) {
LAB_001022dc:
 uVar15 = uVar21;
 if (2 < uVar7) {
LAB_00102358:
 uVar7 = 1L << uVar7;
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar22;
 lVar9 = lVar24;
 if ((uVar7 & 0x530) == 0) {
 if ((uVar7 & 0x240) != 0) {
 uVar6 = 1;
 uVar15 = 0xffffffffffff;
 uVar4 = 0x7fff;
 uVar11 = 0xffffffffffffffff;
 uVar10 = 0;
 goto LAB_0010230c;
 }
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 lVar9 = lVar12;
 if ((uVar7 & 0x88) == 0) goto LAB_001023fc;
 }
LAB_0010239c:
 lVar12 = lVar9;
 uVar14 = uVar26;
 uVar17 = uVar25;
 uVar22 = uVar14;
 if (lVar12 == 2) {
LAB_001023ec:
 uVar4 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 goto LAB_0010230c;
 }
 goto LAB_001023b8;
 }
 if (uVar7 - 1 < 2) {
 if (lVar12 == 2) goto LAB_001023ec;
 goto LAB_001022f8;
 }
LAB_001023fc:
 uVar29 = uVar17 & 0xffffffff;
 uVar25 = uVar11 >> 0x20;
 uVar7 = uVar15 & 0xffffffff;
 uVar11 = uVar11 & 0xffffffff;
 uVar17 = uVar17 >> 0x20;
 uVar15 = uVar15 >> 0x20;
 uVar26 = uVar25 * uVar29;
 uVar28 = uVar19 >> 0x20;
 uVar14 = uVar25 * uVar7;
 uVar19 = uVar19 & 0xffffffff;
 uVar10 = uVar26 + uVar17 * uVar11 + (uVar29 * uVar11 >> 0x20);
 uVar21 = uVar14 + uVar15 * uVar11 + (uVar11 * uVar7 >> 0x20);
 uVar27 = uVar28 * uVar29;
 uVar30 = uVar28 * uVar7;
 lVar13 = uVar25 * uVar17 + 0x100000000;
 if (uVar26 < uVar10 || uVar26 - uVar10 == 0) {
 lVar13 = uVar25 * uVar17;
 }
 uVar26 = (uVar11 * uVar7 & 0xffffffff) + (uVar21 << 0x20);
 uVar1 = uVar27 + uVar17 * uVar19 + (uVar29 * uVar19 >> 0x20);
 uVar16 = uVar30 + uVar15 * uVar19 + (uVar19 * uVar7 >> 0x20);
 lVar24 = uVar25 * uVar15 + 0x100000000;
 if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
 lVar24 = uVar25 * uVar15;
 }
 uVar14 = uVar26 + (uVar10 >> 0x20) + lVar13;
 lVar13 = uVar17 * uVar28 + 0x100000000;
 if (uVar27 < uVar1 || uVar27 - uVar1 == 0) {
 lVar13 = uVar17 * uVar28;
 }
 uVar17 = lVar24 + (uVar21 >> 0x20);
 uVar21 = (uVar19 * uVar7 & 0xffffffff) + (uVar16 << 0x20);
 lVar24 = uVar15 * uVar28 + 0x100000000;
 if (uVar30 < uVar16 || uVar30 - uVar16 == 0) {
 lVar24 = uVar15 * uVar28;
 }
 uVar15 = uVar21 + uVar17;
 uVar26 = (ulong)(uVar14 < uVar26);
 uVar19 = (uVar29 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
 uVar7 = uVar15 + uVar26;
 uVar16 = uVar16 >> 0x20;
 uVar25 = lVar13 + (uVar1 >> 0x20);
 if (CARRY8(uVar21,uVar17) || CARRY8(uVar15,uVar26)) {
 uVar16 = uVar16 + 1;
 }
 uVar15 = uVar14 + uVar19;
 uVar21 = (ulong)CARRY8(uVar14,uVar19);
 uVar17 = uVar7 + uVar25;
 uVar19 = uVar17 + uVar21;
 if (CARRY8(uVar7,uVar25) || CARRY8(uVar17,uVar21)) {
 lVar24 = lVar24 + 1;
 }
 uVar10 = (ulong)((uVar29 * uVar11 & 0xffffffff) + (uVar10 << 0x20) != 0 ||
 (uVar15 & 0x7ffffffffffff) != 0);
 uVar15 = uVar15 >> 0x33;
 uVar17 = uVar10 | uVar15 | uVar19 * 0x2000;
 uVar19 = uVar19 >> 0x33;
 uVar21 = uVar19 | (lVar24 + uVar16) * 0x2000;
 if ((lVar24 + uVar16 >> 0x27 & 1) != 0) {
 uVar17 = uVar10 | uVar15 & 1 | uVar17 >> 1 | uVar19 << 0x3f;
 uVar21 = uVar21 >> 1;
 lVar20 = lVar23;
 }
LAB_0010255c:
 lVar13 = lVar20 + 0x3fff;
 uVar5 = (uint)uVar6;
 uVar10 = uVar22;
 if (lVar13 < 1) {
 uVar19 = 1 - lVar13;
 if ((long)uVar19 < 0x75) {
 iVar8 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (ulong)(uVar17 << ((ulong)(0x40 - iVar8) & 0x3f) != 0);
 uVar17 = uVar21 << ((ulong)(0x40 - iVar8) & 0x3f) | uVar17 >> (uVar19 & 0x3f);
 uVar15 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar17 | uVar11;
 if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00102744;
 if ((uVar15 >> 0x33 & 1) == 0) goto LAB_0010288c;
LAB_001028f8:
 uVar6 = (ulong)(uVar5 | 0x18);
 uVar17 = 1;
 uVar15 = 0;
 uVar11 = 0;
 }
 else {
 uVar11 = uVar17 | uVar21 << ((ulong)(0x80 - iVar8) & 0x3f);
 if (uVar19 == 0x40) {
 uVar11 = uVar17;
 }
 uVar21 = uVar21 >> ((ulong)(iVar8 - 0x40) & 0x3f);
 uVar19 = uVar11 != 0 | uVar21;
 uVar15 = 0;
 if ((ulong)(uVar11 != 0) == 0 && (uVar21 & 7) == 0) {
LAB_0010288c:
 uVar17 = 0;
 uVar4 = 0;
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_0010230c;
 uVar6 = (ulong)(uVar5 | 8);
 }
 else {
 uVar15 = 0;
LAB_00102744:
 uVar18 = uVar18 & 0xc00000;
 if (uVar18 == 0x400000) {
 if (uVar22 == 0) {
LAB_001028ec:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar15 = uVar15 + 1;
 }
 }
 }
 else if (uVar18 == 0x800000) {
 if (uVar22 != 0) goto LAB_001028ec;
 }
 else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar15 = uVar15 + 1;
 }
 if ((uVar15 >> 0x33 & 1) != 0) goto LAB_001028f8;
 uVar6 = (ulong)(uVar5 | 0x18);
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar17 = 0;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 }
 }
 }
 else {
 uVar11 = 0;
 if (uVar17 != 0 || uVar21 != 0) {
 uVar5 = uVar5 | 0x10;
 uVar11 = 1 - uVar22;
 if (((uVar18 & 0xc00000) != 0x400000) &&
 (uVar11 = uVar22, (uVar18 & 0xc00000) != 0x800000)) {
 uVar11 = 0;
 }
 }
 uVar6 = (ulong)(uVar5 | 8);
 uVar17 = 0;
 uVar15 = 0;
 }
 }
 else {
 if ((uVar17 & 7) != 0) {
 uVar19 = uVar18 & 0xc00000;
 uVar6 = (ulong)(uVar5 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar22 == 0) {
LAB_001028dc:
 bVar3 = 0xfffffffffffffff7 < uVar17;
 uVar17 = uVar17 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar22 != 0) goto LAB_001028dc;
 }
 else if (((uVar19 == 0) && ((uVar17 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar17, uVar17 = uVar17 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 }
 if ((uVar21 >> 0x34 & 1) != 0) {
 uVar21 = uVar21 & 0xffefffffffffffff;
 lVar13 = lVar20 + 0x4000;
 }
 if (lVar13 < 0x7fff) {
 uVar15 = uVar21 >> 3 & 0xffffffffffff;
 uVar4 = (uint)lVar13 & 0x7fff;
 uVar11 = uVar17 >> 3 | uVar21 << 0x3d;
 goto LAB_0010230c;
 }
 uVar18 = uVar18 & 0xc00000;
 uVar4 = 0x7ffe;
 if (uVar18 == 0x400000) {
 bVar3 = uVar22 != 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (ulong)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(ulong)bVar3;
 }
 else if (uVar18 == 0x800000) {
 bVar3 = uVar22 == 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (ulong)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(ulong)bVar3;
 }
 else {
 uVar17 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 if (uVar18 != 0) {
 uVar17 = 0x7ffe;
 uVar15 = 0xffffffffffff;
 uVar11 = 0xffffffffffffffff;
 }
 }
 uVar6 = (ulong)((uint)uVar6 | 0x14);
 }
 uVar15 = uVar15 | uVar17 << 0x30 | uVar22 << 0x3f;
 goto LAB_001027c4;
 }
LAB_00102290:
 if (uVar7 != 0xb) {
LAB_00102298:
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar10;
 lVar9 = lVar24;
 goto LAB_0010239c;
 }
LAB_001023b8:
 uVar22 = uVar14;
 if (lVar12 == 3) {
 uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 else {
LAB_001022f8:
 lVar20 = lVar23;
 if (lVar12 != 1) goto LAB_0010255c;
 uVar4 = 0;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 }
 }
 else {
 if (iVar8 != 0x7fff) {
 lVar20 = (uVar22 - 0x3fff) + lVar13;
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar21 = uVar17 >> 0x3d | uVar15 << 3 | 0x8000000000000;
 uVar17 = uVar17 << 3;
 lVar23 = lVar20 + 1;
 lVar12 = 0;
 if (10 < uVar7) goto LAB_00102290;
 goto LAB_001022dc;
 }
 lVar20 = lVar13 + 0x7fff;
 if (uVar17 != 0 || uVar15 != 0) {
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 3;
 lVar23 = lVar13 + 0x8000;
 uVar4 = (uint)uVar6;
 if ((uVar21 & 0x800000000000) == 0) {
 uVar4 = 1;
 }
 uVar6 = (ulong)uVar4;
 lVar12 = 3;
 if (10 < uVar7) {
 lVar9 = 3;
 goto LAB_00102934;
 }
 goto LAB_00102358;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 2;
 lVar23 = lVar13 + 0x8000;
 uVar17 = 0;
 if (uVar7 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_001022dc;
 }
 lVar9 = 2;
 uVar15 = 0;
LAB_00102934:
 lVar23 = lVar13 + 0x8000;
 if (uVar7 != 0xf) {
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 if (uVar7 != 0xb) goto LAB_00102298;
 goto LAB_0010239c;
 }
 if (((uVar19 >> 0x2f & 1) == 0) || (uVar15 >> 0x2f != 0)) {
 uVar15 = uVar19 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 }
 else {
 uVar15 = uVar15 | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 }
LAB_0010230c:
 uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
 if ((int)uVar6 == 0) {
 auVar31._8_8_ = uVar15;
 auVar31._0_8_ = uVar11;
 return auVar31;
 }
LAB_001027c4:
 __sfp_handle_exceptions(uVar6);
 auVar2._8_8_ = uVar15;
 auVar2._0_8_ = uVar11;
 return auVar2;
}



/* Function: __sfp_handle_exceptions @ 001029d0 */

ulong __sfp_handle_exceptions(ulong param_1)

{
 undefined8 uVar1;
 uint uVar2;
 
 uVar2 = (uint)param_1;
 if ((param_1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 2 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 3 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 4 & 1) != 0) {
 param_1 = fpsr;
 }
 return param_1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */
