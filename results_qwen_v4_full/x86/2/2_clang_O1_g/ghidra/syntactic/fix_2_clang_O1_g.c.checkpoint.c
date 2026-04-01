/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/* Type definitions for structs used in the code */
typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Point2D {
    int x;
    int y;
} Point2D;

typedef struct Size {
    int width;
    int height;
} Size;

typedef struct Rect {
    Point2D position;
    Size size;
} Rect;

typedef struct Color {
    int r;
    int g;
    int b;
} Color;

typedef struct Style {
    Color fill;
} Style;

typedef struct Widget {
    Rect bounds;
    Style style;
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

typedef struct Graph {
    int numVertices;
    Edge **adjList;
} Graph;

typedef struct Device {
    int data;
    int (*process)(int);
} Device;

typedef struct Flags {
    unsigned short flags;
} Flags;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum State {
    STATE_0 = 0,
    STATE_1 = 1,
    STATE_2 = 2,
    STATE_3 = 3
} State;

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

/* Ghidra decompiler types */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef void (*code)(void);

/* Simple roundf implementation */
float roundf(float x) {
    return (float)(int)(x + 0.5f);
}

/* External data declarations */
char DAT_000135bf[] = "Data Types L1";
char DAT_000135e0[] = "Array Types";
char DAT_000135fb[] = "Pointer Types";
char DAT_00013616[] = "Composite Types";
int DAT_00013654[] = {50, 100, 150, 200};

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
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

long long process_ll(long long x)

{
 return x * x;
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

long double process_ld(long double d)

{
 return d * 2.0;
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
 long double lVar1;
 
 /* Unresolved local var: int vol_value@[???]
 Unresolved local var: int value@[???] */
 puts(&DAT_000135bf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000LL);
 printf("DT-L1-06 (process_float): %.2f\n",3.75f);
 printf("DT-L1-07 (process_double): %.2f\n",2.2);
 lVar1 = (long double)10.0;
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
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: array_string @ 00011460 */

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



/* Function: array_2d_stack @ 00011480 */

int array_2d_stack(int (*arr) [10])

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)*arr + iVar2);
 iVar2 = iVar2 + 0x2c;
 } while (iVar2 != 0x1b8);
 return iVar1;
}



/* Function: array_3d @ 000114a0 */

int array_3d(int (*arr) [5] [5])

{
 int iVar1;
 int iVar2;
 int iVar3;
 int (*paiVar4) [5];
 int iVar5;
 
 /* Unresolved local var: int sum@[???] */
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar5 = 0;
 paiVar4 = *arr;
 do {
 iVar3 = 0;
 do {
 iVar1 = iVar1 + (*(int (*) [5])*paiVar4)[iVar3];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 5);
 iVar5 = iVar5 + 1;
 paiVar4 = paiVar4 + 1;
 } while (iVar5 != 5);
 iVar2 = iVar2 + 1;
 arr = (int (*) [5] [5])((int)arr + 100);
 } while (iVar2 != 5);
 return iVar1;
}



/* Function: array_vla @ 00011500 */

int array_vla(int n,int *arr)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: array_pointer @ 00011530 */

int array_pointer(int (*arr) [10],int n)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (*arr)[0];
 arr = arr + 1;
 n = n + -1;
 } while (n != 0);
 return iVar1;
 }
 return 0;
}



/* Function: pointer_array @ 00011550 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int count@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 10;
 if (n < 10) {
 iVar1 = n;
 }
 iVar2 = 1;
 if (1 < iVar1) {
 iVar2 = iVar1;
 }
 iVar3 = 0;
 iVar1 = 0;
 do {
 if (arr[iVar3] != (int *)0x0) {
 iVar1 = iVar1 + *arr[iVar3];
 }
 iVar3 = iVar3 + 1;
 } while (iVar2 != iVar3);
 }
 return iVar1;
}



/* Function: array_complex_index @ 000115a0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 iVar1 = -1;
 if ((((-1 < x) && (y < h)) && (x < w)) && (-1 < y)) {
 iVar1 = arr[y * w + x];
 }
 return iVar1;
}



/* Function: array_oob @ 000115e0 */

int array_oob(int *arr,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (-1 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2];
 iVar2 = iVar2 + 1;
 } while (n + 1 != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: test_array_types @ 00011610 */

/* WARNING: Variable defined which should be unmapped: k */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
 int *piVar2;
 undefined1 *puVar3;
 int iVar4;
 undefined1 *puVar5;
 int iVar6;
 int iVar7;
 undefined4 local_4e0;
 undefined4 local_4dc;
 undefined4 local_4d8;
 undefined4 *local_4d4 [10];
 int aiStack_4ac [20];
 int aiStack_45c [50];
 int local_394 [100];
 undefined1 local_204 [500];
 int k;
 
 /* Unresolved local var: int[10][10] matrix@[???]
 Unresolved local var: int[5][5][5] cube@[???]
 Unresolved local var: int[5][10] arr2@[???]
 Unresolved local var: int *[10] ptr_arr@[???]
 Unresolved local var: int[20] flat@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int[5] arr1@[???]
 Unresolved local var: char[6] str@[???]
 Unresolved local var: int[3] vla_arr@[???] */
 puts(&DAT_000135e0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 iVar1 = 0;
 piVar2 = local_394;
 do {
 iVar4 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)]
 Unresolved local var: int j@[DW_OP_reg2(EDX)] */
 iVar7 = 0;
 if (iVar1 == iVar4) {
 iVar7 = iVar1;
 }
 piVar2[iVar4] = iVar7;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 10);
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 10;
 } while (iVar1 != 10);
 iVar4 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg0(EAX)]
 Unresolved local var: int i@[???] */
 iVar1 = iVar1 + *(int *)((int)local_394 + iVar4);
 iVar4 = iVar4 + 0x2c;
 } while (iVar4 != 0x1b8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
 iVar1 = 0;
 puVar3 = local_204;
 do {
 iVar4 = 0;
 puVar5 = puVar3;
 do {
 iVar7 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)]
 Unresolved local var: int j@[DW_OP_reg6(ESI)]
 Unresolved local var: int k@[DW_OP_reg7(EDI)] */
 *(undefined4 *)(puVar5 + iVar7 * 4) = 1;
 iVar7 = iVar7 + 1;
 } while (iVar7 != 5);
 iVar4 = iVar4 + 1;
 puVar5 = puVar5 + 0x14;
 } while (iVar4 != 5);
 iVar1 = iVar1 + 1;
 puVar3 = puVar3 + 100;
 } while (iVar1 != 5);
 iVar1 = 0;
 puVar3 = local_204;
 iVar4 = 0;
 do {
 iVar7 = 0;
 puVar5 = puVar3;
 do {
 iVar6 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg1(ECX)]
 Unresolved local var: int i@[DW_OP_reg0(EAX)]
 Unresolved local var: int j@[DW_OP_reg7(EDI)] */
 iVar4 = iVar4 + *(int *)(puVar5 + iVar6 * 4);
 iVar6 = iVar6 + 1;
 } while (iVar6 != 5);
 iVar7 = iVar7 + 1;
 puVar5 = puVar5 + 0x14;
 } while (iVar7 != 5);
 iVar1 = iVar1 + 1;
 puVar3 = puVar3 + 100;
 } while (iVar1 != 5);
 printf("ARR-L1-04 (array_3d): %d\n",iVar4);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 aiStack_45c[iVar1] = iVar1;
 iVar1 = iVar1 + 10;
 } while (iVar1 != 0x32);
 iVar4 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg0(EAX)]
 Unresolved local var: int i@[???] */
 iVar1 = iVar1 + *(int *)((int)aiStack_45c + iVar4);
 iVar4 = iVar4 + 0x28;
 } while (iVar4 != 200);
 printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
 local_4d8 = 10;
 local_4dc = 0x14;
 local_4e0 = 0x1e;
 local_4d4[0] = &local_4d8;
 local_4d4[1] = &local_4dc;
 local_4d4[2] = &local_4e0;
 local_4d4[3] = (undefined4 *)0x0;
 local_4d4[4] = (undefined4 *)0x0;
 local_4d4[5] = (undefined4 *)0x0;
 local_4d4[6] = (undefined4 *)0x0;
 local_4d4[7] = (undefined4 *)0x0;
 local_4d4[8] = (undefined4 *)0x0;
 local_4d4[9] = (undefined4 *)0x0;
 iVar4 = 0;
 iVar1 = 0;
 do {
 if (local_4d4[iVar4] != (int *)0x0) {
 iVar1 = iVar1 + *local_4d4[iVar4];
 }
 iVar4 = iVar4 + 1;
 } while (iVar4 != 3);
 printf("ARR-L2-03 (pointer_array): %d\n",iVar1);
 iVar1 = 0;
 do {
 aiStack_4ac[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",aiStack_4ac[0x11]);
 return;
}



/* Function: ptr_single @ 000118c0 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 000118d0 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 000118e0 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 000118f0 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + p[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 00011920 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00011930 */

int ptr_diff(int *p1,int *p2)

{
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011940 */

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



/* Function: ptr_const @ 00011960 */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 00011970 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00011980 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 000119a0 */

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



/* Function: ptr_cast @ 000119e0 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * back_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * int_ptr@[???] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 000119f0 */

void * opaque_handle_create(int size)

{
 return (void *)size;
}



/* Function: opaque_handle_op @ 00011a00 */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 00011a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 int iVar1;
 int iVar2;
 int local_1c [5];
 
 /* Unresolved local var: int[5] arr4@[???]
 Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int val3@[???]
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
 local_1c[4] = 5;
 local_1c[3] = 4;
 local_1c[2] = 3;
 local_1c[1] = 2;
 local_1c[0] = 1;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_1c[iVar2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 5);
 printf("PTR-L2-04 (ptr_increment): %d\n",iVar1);
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



/* Function: struct_simple @ 00011bb0 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00011bc0 */

int struct_array(Point3D *pts,int n)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 piVar2 = &pts->z;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + ((Point3D *)(piVar2 + -2))->x + piVar2[-1] + *piVar2;
 piVar2 = piVar2 + 3;
 n = n + -1;
 } while (n != 0);
 return iVar1;
 }
 return 0;
}



/* Function: struct_nested @ 00011c00 */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00011c10 */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.y;
}



/* Function: struct_with_ptr @ 00011c20 */

int struct_with_ptr(Node *node)

{
 if (node->next != (Node *)0x0) {
 return node->next->data + node->data;
 }
 return node->data;
}



/* Function: struct_bitfields @ 00011c40 */

int struct_bitfields(Flags *f)

{
 unsigned short uVar1;
 
 uVar1 = *(unsigned short *)f;
 return (unsigned int)(uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00011c70 */

int union_type(UnionData *u,int type)

{
 if (type == 1) {
 return (int)roundf(u->f);
 }
 if (type == 0) {
 return u->i;
 }
 return (int)u->bytes[0];
}



/* Function: union_array @ 00011cc0 */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2].i;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: enum_type @ 00011cf0 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00011d00 */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = *(int *)(&DAT_00013654 + s * 4);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011d30 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011d60 */

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



/* Function: doubly_linked_list @ 00011d80 */

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



/* Function: binary_tree_sum @ 00011da0 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root == (TreeNode *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 iVar3 = binary_tree_sum(root->right);
 iVar3 = iVar3 + iVar2 + iVar1;
 }
 return iVar3;
}



/* Function: binary_tree @ 00011df0 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00011e20 */

int graph_traverse(Graph *g)

{
 Edge *pEVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (g->numVertices < 1) {
 iVar2 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar1 = g->adjList[iVar3]; pEVar1 != (Edge *)0x0; pEVar1 = pEVar1->next) {
 iVar2 = iVar2 + pEVar1->dest;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 != g->numVertices);
 }
 return iVar2;
}



/* Function: test_composite_types @ 00011e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 undefined4 local_7c;
 undefined4 local_78;
 int local_74;
 undefined4 *local_70;
 undefined4 local_6c;
 undefined4 *local_68;
 undefined4 local_64;
 undefined4 local_60;
 TreeNode local_5c;
 int local_4c;
 undefined4 *local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 int *local_38;
 undefined4 *local_34 [12];
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[???]
 Unresolved local var: TreeNode tree@[???]
 Unresolved local var: Edge e1@[???]
 Unresolved local var: Graph g@[???]
 Unresolved local var: Point3D p1@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: Device dev@[???]
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
 piVar1 = &local_74;
 local_74 = 10;
 local_70 = &local_6c;
 local_6c = 0x14;
 local_68 = &local_64;
 local_64 = 0x1e;
 local_60 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar2);
 piVar1 = &local_4c;
 local_4c = 10;
 local_48 = &local_40;
 local_44 = 0;
 local_40 = 0x14;
 local_3c = 0;
 local_38 = piVar1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
 local_5c.right = (TreeNode *)0x0;
 local_5c.left = (TreeNode *)0x0;
 local_5c.data = 100;
 iVar2 = binary_tree_sum(&local_5c);
 printf("CMP-L2-14 (binary_tree): %d\n",iVar2);
 local_7c = 1;
 local_78 = 0;
 local_34[9] = (undefined4 *)0x0;
 local_34[8] = (undefined4 *)0x0;
 local_34[7] = (undefined4 *)0x0;
 local_34[6] = (undefined4 *)0x0;
 local_34[5] = (undefined4 *)0x0;
 local_34[4] = (undefined4 *)0x0;
 local_34[3] = (undefined4 *)0x0;
 local_34[2] = (undefined4 *)0x0;
 local_34[1] = (undefined4 *)0x0;
 local_34[0] = &local_7c;
 local_34[10] = (undefined4 *)0x2;
 iVar3 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (piVar1 = local_34[iVar3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
 iVar2 = iVar2 + *piVar1;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 != 2);
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar2);
 return;
}



/* Function: main @ 00012110 */

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
