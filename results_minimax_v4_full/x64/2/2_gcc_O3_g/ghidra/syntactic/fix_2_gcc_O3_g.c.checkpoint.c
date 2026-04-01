/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef long long longlong;
typedef long double longdouble;

/* Composite type definitions */
typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    int x;
    int y;
} Point2D;

typedef struct {
    Point2D position;
    int width;
    int height;
} Rect;

typedef struct {
    int r;
    int g;
    int b;
    int a;
} Color;

typedef struct {
    Point3D position;
    Color fill;
} Style;

typedef struct {
    Style style;
    Point3D bounds;
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

typedef struct {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef enum {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
} State;

typedef struct {
    int (*process)(void *data);
    void *data;
} Device;

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
    Edge **adjList;
} Graph;

typedef struct {
    unsigned char flags;
} Flags;

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

/* CRT stub function _init removed by preprocessor */

/* Ghidra type definitions */
typedef void (*code)(void);  /* Function pointer type */
typedef unsigned char undefined;  /* Unknown byte type */

/* String literal declarations */
const char DAT_00103008[] = "Testing Data Types (Level 1)\n";
const char DAT_001033e1[] = "Testing Array Types\n";
const char DAT_00103454[] = "Testing Pointer Types\n";
const char DAT_0010354a[] = "Testing Composite Types\n";




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 001011c0 */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (byte)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 001011e0 */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_int @ 001011f0 */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: process_long @ 00101200 */

long process_long(long x)

{
 return x * 2;
}



/* Function: process_ll @ 00101210 */

longlong process_ll(longlong x)

{
 return x * x;
}



/* Function: process_float @ 00101220 */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00101240 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 00101260 */

/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
 longdouble *in_RAX;
 
 return in_RAX;
}



/* Function: process_bool @ 00101270 */

_Bool process_bool(int x)

{
 _Bool _Var1;
 
 _Var1 = (_Bool)(~(byte)x & 1);
 if (x < 1) {
 _Var1 = false;
 }
 return _Var1;
}



/* Function: const_param @ 00101290 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 001012a0 */

int volatile_access(int *p)

{
 return *p + *p;
}



/* Function: test_data_types_l1 @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 int vol_value;
 
 puts(&DAT_00103008);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(0x400c000000000000,1,"DT-L1-06 (process_float): %.2f\n");
 __printf_chk(0x4000cccccccccccd,1,"DT-L1-07 (process_double): %.2f\n");
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n");
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00101440 */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar7 = 0;
 }
 else {
 if (n - 1U < 3) {
 uVar6 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 piVar5 = arr;
 do {
 iVar1 = *piVar5;
 piVar2 = piVar5 + 1;
 piVar3 = piVar5 + 2;
 piVar4 = piVar5 + 3;
 piVar5 = piVar5 + 4;
 iVar7 = iVar7 + iVar1;
 iVar8 = iVar8 + *piVar2;
 iVar9 = iVar9 + *piVar3;
 iVar10 = iVar10 + *piVar4;
 } while (piVar5 != arr + (ulong)(((uint)n >> 2) - 1) * 4 + 4);
 uVar6 = n & 0xfffffffc;
 iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
 if ((n & 3U) == 0) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + arr[(int)uVar6];
 if (((int)(uVar6 + 1) < n) && (iVar7 = iVar7 + arr[(long)(int)uVar6 + 1], (int)(uVar6 + 2) < n))
 {
 return iVar7 + arr[(long)(int)uVar6 + 2];
 }
 }
 return iVar7;
}



/* Function: array_string @ 001014f0 */

int array_string(char *str)

{
 long lVar1;
 long lVar2;
 
 if (*str != '\0') {
 lVar1 = 1;
 do {
 lVar2 = lVar1;
 lVar1 = lVar2 + 1;
 } while (str[lVar2] != '\0');
 return (int)lVar2;
 }
 return 0;
}



/* Function: array_2d_stack @ 00101520 */

int array_2d_stack(int (*arr) [10])

{
 /* Unresolved local var: int i@[???] */
 return arr[1][1] + (*arr)[0] + arr[2][2] + arr[3][3] + arr[4][4] + arr[5][5] + arr[6][6] +
 arr[7][7] + arr[8][8] + arr[9][9];
}



/* Function: array_3d @ 00101560 */

int array_3d(int (*arr) [5] [5])

{
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 return (*arr)[0][4] + (*arr)[0][0] + (*arr)[1][3] + (*arr)[2][2] + (*arr)[3][1] + (*arr)[4][0] +
 (*arr)[4][4] + arr[1][0][3] + arr[1][1][2] + arr[1][2][1] + arr[1][3][0] + arr[1][3][4] +
 arr[1][4][3] + arr[2][0][2] + arr[2][1][1] + arr[2][2][0] + arr[2][2][4] + arr[2][3][3] +
 arr[2][4][2] + arr[3][0][1] + arr[3][1][0] + arr[3][1][4] + arr[3][2][3] + arr[3][3][2] +
 arr[3][4][1] +
 (*arr)[1][1] + (*arr)[0][2] + (*arr)[2][0] + (*arr)[2][4] + (*arr)[3][3] + (*arr)[4][2] +
 arr[1][0][1] + arr[1][1][0] + arr[1][1][4] + arr[1][2][3] + arr[1][3][2] + arr[1][4][1] +
 arr[2][0][0] + arr[2][0][4] + arr[2][1][3] + arr[2][2][2] + arr[2][3][1] + arr[2][4][0] +
 arr[2][4][4] + arr[3][0][3] + arr[3][1][2] + arr[3][2][1] + arr[3][3][0] + arr[3][3][4] +
 arr[3][4][3] +
 (*arr)[1][0] + (*arr)[0][1] + (*arr)[1][4] + (*arr)[2][3] + (*arr)[3][2] + (*arr)[4][1] +
 arr[1][0][0] + arr[1][0][4] + arr[1][1][3] + arr[1][2][2] + arr[1][3][1] + arr[1][4][0] +
 arr[1][4][4] + arr[2][0][3] + arr[2][1][2] + arr[2][2][1] + arr[2][3][0] + arr[2][3][4] +
 arr[2][4][3] + arr[3][0][2] + arr[3][1][1] + arr[3][2][0] + arr[3][2][4] + arr[3][3][3] +
 arr[3][4][2] +
 (*arr)[1][2] + (*arr)[0][3] + (*arr)[2][1] + (*arr)[3][0] + (*arr)[3][4] + (*arr)[4][3] +
 arr[1][0][2] + arr[1][1][1] + arr[1][2][0] + arr[1][2][4] + arr[1][3][3] + arr[1][4][2] +
 arr[2][0][1] + arr[2][1][0] + arr[2][1][4] + arr[2][2][3] + arr[2][3][2] + arr[2][4][1] +
 arr[3][0][0] + arr[3][0][4] + arr[3][1][3] + arr[3][2][2] + arr[3][3][1] + arr[3][4][0] +
 arr[3][4][4] + arr[4][0][0] + arr[4][0][1] + arr[4][0][2] + arr[4][0][3] + arr[4][0][4] +
 arr[4][1][0] + arr[4][1][1] + arr[4][1][2] + arr[4][1][3] + arr[4][1][4] + arr[4][2][0] +
 arr[4][2][1] + arr[4][2][2] + arr[4][2][3] + arr[4][2][4] + arr[4][3][0] + arr[4][3][1] +
 arr[4][3][2] + arr[4][3][3] + arr[4][3][4] + arr[4][4][0] + arr[4][4][1] + arr[4][4][2] +
 arr[4][4][3] + arr[4][4][4];
}



/* Function: array_vla @ 00101730 */

int array_vla(int n,int *arr)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar7 = 0;
 }
 else {
 if (n - 1U < 3) {
 uVar6 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 piVar5 = arr;
 do {
 iVar1 = *piVar5;
 piVar2 = piVar5 + 1;
 piVar3 = piVar5 + 2;
 piVar4 = piVar5 + 3;
 piVar5 = piVar5 + 4;
 iVar7 = iVar7 + iVar1;
 iVar8 = iVar8 + *piVar2;
 iVar9 = iVar9 + *piVar3;
 iVar10 = iVar10 + *piVar4;
 } while (piVar5 != arr + (ulong)(((uint)n >> 2) - 1) * 4 + 4);
 uVar6 = n & 0xfffffffc;
 iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
 if ((n & 3U) == 0) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + arr[(int)uVar6];
 if (((int)(uVar6 + 1) < n) && (iVar7 = iVar7 + arr[(long)(int)uVar6 + 1], (int)(uVar6 + 2) < n))
 {
 return iVar7 + arr[(long)(int)uVar6 + 2];
 }
 }
 return iVar7;
}



/* Function: array_pointer @ 001017e0 */

int array_pointer(int (*arr) [10],int n)

{
 int (*paiVar1) [10];
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 paiVar1 = arr + (ulong)(n - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (*arr)[0];
 arr = arr + 1;
 } while (arr != paiVar1);
 return iVar2;
 }
 return 0;
}



/* Function: pointer_array @ 00101820 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (*arr != (int *)0x0) {
 iVar1 = **arr;
 }
 if (1 < n) {
 if (arr[1] != (int *)0x0) {
 iVar1 = iVar1 + *arr[1];
 }
 if (n != 2) {
 if (arr[2] != (int *)0x0) {
 iVar1 = iVar1 + *arr[2];
 }
 if (n != 3) {
 if (arr[3] != (int *)0x0) {
 iVar1 = iVar1 + *arr[3];
 }
 if (n != 4) {
 if (arr[4] != (int *)0x0) {
 iVar1 = iVar1 + *arr[4];
 }
 if (n != 5) {
 if (arr[5] != (int *)0x0) {
 iVar1 = iVar1 + *arr[5];
 }
 if (n != 6) {
 if (arr[6] != (int *)0x0) {
 iVar1 = iVar1 + *arr[6];
 }
 if (n != 7) {
 if (arr[7] != (int *)0x0) {
 iVar1 = iVar1 + *arr[7];
 }
 if (n != 8) {
 if (arr[8] != (int *)0x0) {
 iVar1 = iVar1 + *arr[8];
 }
 if ((9 < n) && (arr[9] != (int *)0x0)) {
 return iVar1 + *arr[9];
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar1;
}



/* Function: array_complex_index @ 001018e0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 if (((-1 < (x | y)) && (x < w)) && (y < h)) {
 return arr[w * y + x];
 }
 return -1;
}



/* Function: array_oob @ 00101910 */

int array_oob(int *arr,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 
 /* Unresolved local var: int i@[???] */
 if (n < 0) {
 iVar8 = 0;
 }
 else {
 uVar7 = n + 1;
 if (n < 3) {
 uVar6 = 0;
 iVar8 = 0;
 }
 else {
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 piVar5 = arr;
 do {
 iVar1 = *piVar5;
 piVar2 = piVar5 + 1;
 piVar3 = piVar5 + 2;
 piVar4 = piVar5 + 3;
 piVar5 = piVar5 + 4;
 iVar8 = iVar8 + iVar1;
 iVar9 = iVar9 + *piVar2;
 iVar10 = iVar10 + *piVar3;
 iVar11 = iVar11 + *piVar4;
 } while (piVar5 != arr + (ulong)((uVar7 >> 2) - 1) * 4 + 4);
 uVar6 = uVar7 & 0xfffffffc;
 iVar8 = iVar8 + iVar10 + iVar9 + iVar11;
 if ((uVar7 & 3) == 0) {
 return iVar8;
 }
 }
 iVar8 = iVar8 + arr[(int)uVar6];
 if (((int)(uVar6 + 1) <= n) &&
 (iVar8 = iVar8 + arr[(long)(int)uVar6 + 1], (int)(uVar6 + 2) <= n)) {
 return iVar8 + arr[(long)(int)uVar6 + 2];
 }
 }
 return iVar8;
}



/* Function: test_array_types @ 001019c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 char *pcVar1;
 long lVar2;
 ulong uVar3;
 ulong uVar4;
 long in_FS_OFFSET;
 char str [6];
 
 lVar2 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001033e1);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 strncpy(str,"hello",6);
 /* Unresolved local var: int len@[???] */
 uVar3 = 1;
 do {
 uVar4 = uVar3 & 0xffffffff;
 pcVar1 = str + uVar3;
 uVar3 = uVar3 + 1;
 } while (*pcVar1 != '\0');
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar4);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_single @ 00101af0 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00101b00 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00101b10 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00101b20 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar7 = 0;
 }
 else {
 if (n - 1U < 3) {
 uVar6 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 piVar5 = p;
 do {
 iVar1 = *piVar5;
 piVar2 = piVar5 + 1;
 piVar3 = piVar5 + 2;
 piVar4 = piVar5 + 3;
 piVar5 = piVar5 + 4;
 iVar7 = iVar7 + iVar1;
 iVar8 = iVar8 + *piVar2;
 iVar9 = iVar9 + *piVar3;
 iVar10 = iVar10 + *piVar4;
 } while (p + (ulong)(((uint)n >> 2) - 1) * 4 + 4 != piVar5);
 uVar6 = n & 0xfffffffc;
 p = p + uVar6;
 iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
 if (n == uVar6) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + *p;
 if (((int)(uVar6 + 1) < n) && (iVar7 = iVar7 + p[1], (int)(uVar6 + 2) < n)) {
 return iVar7 + p[2];
 }
 }
 return iVar7;
}



/* Function: ptr_offset @ 00101bc0 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00101bd0 */

int ptr_diff(int *p1,int *p2)

{
 return (int)((long)p1 - (long)p2 >> 2);
}



/* Function: ptr_void @ 00101be0 */

int ptr_void(void *p,int type)

{
 if (type == 0) {
 return *(int *)p;
 }
 if (type == 1) {
 return (int)*(char *)p;
 }
 return -1;
}



/* Function: ptr_const @ 00101c10 */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 00101c20 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00101c30 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101c39. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00101c40 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 char *args [2];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 args[1] = (char *)0x0;
 args[0] = "test";
 iVar2 = (*f)(p,args);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_cast @ 00101c90 */

int ptr_cast(void *p)

{
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00101ca0 */

void * opaque_handle_create(int size)

{
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101cb0 */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 puts(&DAT_00103454);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",0xf);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
}



/* Function: struct_simple @ 00101e30 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00101e40 */

int struct_array(Point3D *pts,int n)

{
 Point3D *pPVar1;
 Point3D *pPVar2;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar3 = 0;
 pPVar1 = pts;
 do {
 pPVar2 = pPVar1 + 1;
 iVar3 = iVar3 + pPVar1->y + pPVar1->x + pPVar1->z;
 pPVar1 = pPVar2;
 } while (pts + (ulong)(n - 1) + 1 != pPVar2);
 return iVar3;
 }
 return 0;
}



/* Function: struct_nested @ 00101e90 */

int struct_nested(Rect *r)

{
 return (r->position).x + r->width;
}



/* Function: struct_deep @ 00101ea0 */

int struct_deep(Widget *w)

{
 return (w->bounds).z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00101eb0 */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = node->data;
 if (node->next != (Node *)0x0) {
 iVar1 = iVar1 + node->next->data;
 }
 return iVar1;
}



/* Function: struct_bitfields @ 00101ed0 */

int struct_bitfields(Flags *f)

{
 byte bVar1;
 
 bVar1 = *(byte *)f;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00101f00 */

int union_type(UnionData *u,int type)

{
 if (type == 0) {
 return u->i;
 }
 if (type != 1) {
 return (int)u->bytes[0];
 }
 return (int)u->f;
}



/* Function: union_array @ 00101f30 */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 UnionData *pUVar2;
 UnionData *pUVar3;
 UnionData *pUVar4;
 UnionData *pUVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar7 = 0;
 }
 else {
 if (n - 1U < 3) {
 uVar6 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 pUVar5 = arr;
 do {
 iVar1 = pUVar5->i;
 pUVar2 = pUVar5 + 1;
 pUVar3 = pUVar5 + 2;
 pUVar4 = pUVar5 + 3;
 pUVar5 = pUVar5 + 4;
 iVar7 = iVar7 + iVar1;
 iVar8 = iVar8 + pUVar2->i;
 iVar9 = iVar9 + pUVar3->i;
 iVar10 = iVar10 + pUVar4->i;
 } while (pUVar5 != arr + (ulong)(((uint)n >> 2) - 1) * 4 + 4);
 uVar6 = n & 0xfffffffc;
 iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
 if ((n & 3U) == 0) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + arr[(int)uVar6].i;
 if (((int)(uVar6 + 1) < n) &&
 (iVar7 = iVar7 + arr[(long)(int)uVar6 + 1].i, (int)(uVar6 + 2) < n)) {
 return iVar7 + arr[(long)(int)uVar6 + 2].i;
 }
 }
 return iVar7;
}



/* Function: enum_type @ 00101fe0 */

int enum_type(State s)

{
 return s * 10;
}



/* Switch table for enum_switch */
static const int CSWTCH_61[4] = {10, 20, 30, 40};

/* Function: enum_switch @ 00101ff0 */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = *(int *)(CSWTCH_61 + (ulong)s * 4);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00102010 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0010201a. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00102020 */

int linked_list(Node *head)

{
 int iVar1;
 
 iVar1 = 0;
 if (head == (Node *)0x0) {
 return 0;
 }
 do {
 iVar1 = iVar1 + head->data;
 head = head->next;
 } while (head != (Node *)0x0);
 return iVar1;
}



/* Function: doubly_linked_list @ 00102050 */

int doubly_linked_list(DNode *head)

{
 int iVar1;
 
 iVar1 = 0;
 if (head == (DNode *)0x0) {
 return 0;
 }
 do {
 iVar1 = iVar1 + head->data;
 head = head->next;
 } while (head != (DNode *)0x0);
 return iVar1;
}



/* Function: binary_tree_sum @ 00102080 */

int binary_tree_sum(TreeNode *root)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 TreeNode *pTVar4;
 int iVar5;
 TreeNode *pTVar6;
 TreeNode *pTVar7;
 TreeNode *pTVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 TreeNode *pTVar12;
 TreeNode *pTVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 TreeNode *local_a0;
 TreeNode *local_98;
 int local_88;
 int local_84;
 int local_80;
 int local_7c;
 int local_78;
 int local_74;
 int local_70;
 int local_6c;
 int local_58;
 
 local_58 = 0;
 for (; root != (TreeNode *)0x0; root = root->right) {
 local_7c = 0;
 local_84 = root->data;
 local_a0 = root->left;
 if (local_a0 != (TreeNode *)0x0) {
 do {
 local_78 = 0;
 local_80 = local_a0->data;
 local_98 = local_a0->left;
 if (local_98 != (TreeNode *)0x0) {
 do {
 local_74 = 0;
 local_6c = local_98->data;
 pTVar12 = local_98->left;
 if (pTVar12 != (TreeNode *)0x0) {
 do {
 local_70 = pTVar12->data;
 pTVar6 = pTVar12->left;
 iVar10 = 0;
 if (pTVar6 != (TreeNode *)0x0) {
 do {
 pTVar4 = pTVar6->left;
 iVar14 = pTVar6->data;
 iVar11 = 0;
 if (pTVar4 != (TreeNode *)0x0) {
 do {
 pTVar8 = pTVar4->left;
 iVar3 = pTVar4->data;
 iVar9 = 0;
 if (pTVar8 != (TreeNode *)0x0) {
 do {
 local_88 = pTVar8->data;
 pTVar7 = pTVar8->left;
 iVar16 = 0;
 if (pTVar7 != (TreeNode *)0x0) {
 do {
 pTVar13 = pTVar7->left;
 iVar15 = pTVar7->data;
 iVar5 = 0;
 if (pTVar13 != (TreeNode *)0x0) {
 do {
 iVar2 = binary_tree_sum(pTVar13->left);
 piVar1 = &pTVar13->data;
 pTVar13 = pTVar13->right;
 iVar5 = iVar5 + iVar2 + *piVar1;
 } while (pTVar13 != (TreeNode *)0x0);
 iVar15 = iVar15 + iVar5;
 }
 pTVar7 = pTVar7->right;
 iVar16 = iVar16 + iVar15;
 } while (pTVar7 != (TreeNode *)0x0);
 local_88 = local_88 + iVar16;
 }
 pTVar8 = pTVar8->right;
 iVar9 = iVar9 + local_88;
 } while (pTVar8 != (TreeNode *)0x0);
 iVar3 = iVar3 + iVar9;
 }
 pTVar4 = pTVar4->right;
 iVar11 = iVar11 + iVar3;
 } while (pTVar4 != (TreeNode *)0x0);
 iVar14 = iVar14 + iVar11;
 }
 pTVar6 = pTVar6->right;
 iVar10 = iVar10 + iVar14;
 } while (pTVar6 != (TreeNode *)0x0);
 local_70 = local_70 + iVar10;
 }
 pTVar12 = pTVar12->right;
 local_74 = local_74 + local_70;
 } while (pTVar12 != (TreeNode *)0x0);
 local_6c = local_6c + local_74;
 }
 local_78 = local_78 + local_6c;
 local_98 = local_98->right;
 } while (local_98 != (TreeNode *)0x0);
 local_80 = local_80 + local_78;
 }
 local_7c = local_7c + local_80;
 local_a0 = local_a0->right;
 } while (local_a0 != (TreeNode *)0x0);
 local_84 = local_84 + local_7c;
 }
 local_58 = local_58 + local_84;
 }
 return local_58;
}



/* Function: binary_tree @ 001022e0 */

int binary_tree(TreeNode *root)

{
 int *piVar1;
 int iVar2;
 TreeNode *pTVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar5 = 0;
 for (; root != (TreeNode *)0x0; root = root->right) {
 pTVar3 = root->left;
 iVar4 = root->data;
 iVar6 = 0;
 if (pTVar3 != (TreeNode *)0x0) {
 do {
 iVar2 = binary_tree_sum(pTVar3->left);
 piVar1 = &pTVar3->data;
 pTVar3 = pTVar3->right;
 iVar6 = iVar6 + iVar2 + *piVar1;
 } while (pTVar3 != (TreeNode *)0x0);
 iVar4 = iVar4 + iVar6;
 }
 iVar5 = iVar5 + iVar4;
 }
 return iVar5;
}



/* Function: graph_traverse @ 00102340 */

int graph_traverse(Graph *g)

{
 int *piVar1;
 Edge *pEVar2;
 Edge **ppEVar3;
 int iVar4;
 
 piVar1 = &g->numVertices;
 /* Unresolved local var: int i@[???] */
 if (0 < *piVar1) {
 iVar4 = 0;
 ppEVar3 = g->adjList;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar2 = g->adjList[0]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
 iVar4 = iVar4 + pEVar2->dest;
 }
 g = (Graph *)(g->adjList + 1);
 } while (g != (Graph *)(ppEVar3 + (ulong)(*piVar1 - 1) + 1));
 return iVar4;
 }
 return 0;
}



/* Function: test_composite_types @ 00102390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 long lVar1;
 int *piVar2;
 Node *pNVar3;
 DNode *pDVar4;
 int iVar5;
 long in_FS_OFFSET;
 Node list [3];
 DNode dlist [2];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_0010354a);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",9);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",0x3c);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 list[0].next = list + 1;
 list[0].data = 10;
 list[1].data = 0x14;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: Node * current@[???] */
 list[1].next = list + 2;
 iVar5 = 10;
 pNVar3 = list[0].next;
 do {
 piVar2 = &pNVar3->data;
 pNVar3 = pNVar3->next;
 iVar5 = iVar5 + *piVar2;
 } while (pNVar3 != (Node *)0x0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar5);
 pDVar4 = dlist + 1;
 dlist[0].data = 10;
 dlist[0].next = pDVar4;
 dlist[0].prev = (DNode *)0x0;
 dlist[1].data = 0x14;
 dlist[1].next = (DNode *)0x0;
 dlist[1].prev = dlist;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: DNode * current@[???] */
 iVar5 = 10;
 do {
 iVar5 = iVar5 + pDVar4->data;
 pDVar4 = pDVar4->next;
 } while (pDVar4 != (DNode *)0x0);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar5);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",100);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 62 */
