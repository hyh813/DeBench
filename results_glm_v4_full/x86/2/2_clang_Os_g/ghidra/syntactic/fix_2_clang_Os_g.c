/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/* Type definitions for compatibility */
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef void (*code)(void);
typedef uint32_t unkuint10;

/* Function pointer types */
typedef int (*func_int_int)(int);
typedef int (*func_int_int_ptr_char_ptr_ptr)(int *, char **);
typedef func_int_int _func_int_int;
typedef func_int_int_ptr_char_ptr_ptr _func_int_int_ptr_char_ptr_ptr;

/* Data references */
extern char DAT_000125bf[];
extern char DAT_000125e0[];
extern char DAT_000125fb[];
extern uint32_t DAT_00012634[];
extern int DAT_00012654[];
extern char DAT_00012616[];

/* Type definitions for decompiled structures */

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
    int width;
    int height;
} Size;

typedef struct {
    Point2D position;
    Size size;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct {
    Point3D position;
    Color style;
    Point3D bounds;
    Color fill;
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
    Edge *adjList[10];
} Graph;

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int flag4 : 6;
    unsigned int reserved : 20;
} Flags;

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
} State;

typedef struct {
    int data;
    func_int_int process;
} Device;

/* Helper macros */
#define CONCAT44(high, low) (((longlong)(high) << 32) | (uint32_t)(low))
#define SUB104(x, y) (x)
#define ROUND(x) ((int)(x))


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)0x0)();
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



/* Function: process_char @ 000111f4 */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (byte)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 0001120a */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_int @ 00011215 */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: process_long @ 0001121d */

long process_long(long x)

{
 return x * 2;
}



/* Function: process_ll @ 00011224 */

longlong process_ll(longlong x)

{
 longlong lVar1;
 
 lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
 return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (int)(x >> 32) * (int)x * 2,(int)lVar1);
}



/* Function: process_float @ 0001123a */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00011257 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 00011274 */

long double process_ld(long double d)

{
 return d * 2.0L + 0.1L;
}



/* Function: process_bool @ 0001127f */

_Bool process_bool(int x)

{
 return (x & 1U) == 0 && 0 < x;
}



/* Function: const_param @ 00011290 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 0001129a */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 000112a3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 long double lVar1;
 
 /* Unresolved local var: int vol_value@[???]
 Unresolved local var: int value@[???] */
 puts(&DAT_000125bf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000,0);
 printf("DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 printf("DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 lVar1 = (long double)10.0;
 printf("DT-L1-08 (process_ld): %.2Lf\n",SUB104(lVar1,0),(int)((unkuint10)lVar1 >> 0x20),
 (short)((unkuint10)lVar1 >> 0x40));
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???] */
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 000113d6 */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar1;
}



/* Function: array_string @ 000113f5 */

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



/* Function: array_2d_stack @ 00011407 */

int array_2d_stack(int (*arr) [10])

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 11) {
 iVar1 = iVar1 + *((int *)arr + iVar2);
 }
 return iVar1;
}



/* Function: array_3d @ 0001141e */

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
 /* Unresolved local var: int i@[DW_OP_reg1(ECX)]
 Unresolved local var: int j@[DW_OP_reg7(EDI)]
 Unresolved local var: int k@[DW_OP_reg3(EBX)] */
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



/* Function: array_vla @ 0001144e */

int array_vla(int n,int *arr)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar1;
}



/* Function: array_pointer @ 0001146d */

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



/* Function: pointer_array @ 00011487 */

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
 iVar2 = 10;
 if ((uint)n < 10) {
 iVar2 = n;
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



/* Function: array_complex_index @ 000114b9 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 iVar1 = -1;
 if ((((-1 < x) && (y < h)) && (x < w)) && (-1 < y)) {
 iVar1 = arr[y * w + x];
 }
 return iVar1;
}



/* Function: array_oob @ 000114e9 */

int array_oob(int *arr,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 0) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2];
 iVar2 = iVar2 + 1;
 } while (n + 1 != iVar2);
 }
 return iVar1;
}



/* Function: test_array_types @ 00011509 */

/* WARNING: Variable defined which should be unmapped: k */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
 int (*piVar2)[10];
 undefined1 *puVar3;
 undefined4 ****ppppuVar4;
 int iVar5;
 undefined1 *puVar6;
 int iVar7;
 int iVar8;
 undefined4 ****local_4dc [12];
 int local_3c [12];
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
 puts(&DAT_000125e0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 iVar1 = 0;
 piVar2 = (int (*)[10])local_394;
 do {
 iVar5 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)]
 Unresolved local var: int j@[DW_OP_reg2(EDX)] */
			iVar8 = 0;
			if (iVar1 == iVar5) {
				iVar8 = iVar1;
			}
		iVar5 = iVar5 + 1;
 } while (iVar5 != 10);
 iVar1 = iVar1 + 1;
 piVar2 = (int (*)[10])((int)piVar2 + 10);
 } while (iVar1 != 10);
	iVar5 = 0;
	iVar1 = 0;
	do {
		/* Unresolved local var: int sum@[DW_OP_reg0(EAX)]
		 Unresolved local var: int i@[???] */
		iVar1 = iVar1 + local_394[iVar5 / 4];
		iVar5 = iVar5 + 0x2c;
	} while (iVar5 != 0x1b8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
 iVar1 = 0;
 puVar3 = local_204;
 do {
 iVar5 = 0;
 puVar6 = puVar3;
 do {
 iVar8 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)]
 Unresolved local var: int j@[DW_OP_reg6(ESI)]
 Unresolved local var: int k@[DW_OP_reg7(EDI)] */
 *(undefined4 *)(puVar6 + iVar8 * 4) = 1;
 iVar8 = iVar8 + 1;
 } while (iVar8 != 5);
 iVar5 = iVar5 + 1;
 puVar6 = puVar6 + 0x14;
 } while (iVar5 != 5);
 iVar1 = iVar1 + 1;
 puVar3 = puVar3 + 100;
 } while (iVar1 != 5);
 iVar1 = 0;
 puVar3 = (undefined1 *)local_204;
 iVar5 = 0;
 do {
 iVar8 = 0;
 puVar6 = (undefined1 *)puVar3;
 do {
 iVar7 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg1(ECX)]
 Unresolved local var: int i@[DW_OP_reg0(EAX)]
 Unresolved local var: int j@[DW_OP_reg7(EDI)] */
 iVar5 = iVar5 + *(int *)(puVar6 + iVar7 * 4);
 iVar7 = iVar7 + 1;
 } while (iVar7 != 5);
 iVar8 = iVar8 + 1;
 puVar6 = (undefined1 *)(puVar6 + 0x14);
 } while (iVar8 != 5);
 iVar1 = iVar1 + 1;
 puVar3 = (undefined1 *)(puVar3 + 100);
 } while (iVar1 != 5);
 printf("ARR-L1-04 (array_3d): %d\n",iVar5);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 aiStack_45c[iVar1] = iVar1;
 iVar1 = iVar1 + 10;
 } while (iVar1 != 0x32);
 iVar5 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg0(EAX)]
 Unresolved local var: int i@[???] */
 iVar1 = iVar1 + *(int *)((char *)aiStack_45c + iVar5);
 iVar5 = iVar5 + 0x28;
 } while (iVar5 != 200);
 printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
 ppppuVar4 = local_4dc + 0xb;
 local_4dc[0xb] = (undefined4 ****)0xa;
 local_4dc[10] = (undefined4 ****)0x14;
 local_4dc[9] = (undefined4 ****)0x1e;
 local_4dc[0] = local_4dc + 10;
 local_4dc[1] = local_4dc + 9;
 iVar1 = 0;
 local_4dc[2] = (undefined4 ****)0x0;
 local_4dc[3] = (undefined4 ****)0x0;
 local_4dc[4] = (undefined4 ****)0x0;
 local_4dc[5] = (undefined4 ****)0x0;
 local_4dc[6] = (undefined4 ****)0x0;
 local_4dc[7] = (undefined4 ****)0x0;
 local_4dc[8] = (undefined4 ****)0x0;
 iVar5 = 0;
 while( true ) {
 /* Unresolved local var: int sum@[DW_OP_reg2(EDX)]
 Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 if (ppppuVar4 != (undefined4 ****)0x0) {
 iVar5 = iVar5 + (int)*ppppuVar4;
 }
 if (iVar1 == 2) break;
 ppppuVar4 = local_4dc[iVar1];
 iVar1 = iVar1 + 1;
 }
 printf("ARR-L2-03 (pointer_array): %d\n",iVar5);
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 aiStack_4ac[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",aiStack_4ac[0x11]);
 return;
}



/* Function: ptr_single @ 00011701 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 0001170b */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00011717 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00011723 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + p[iVar2];
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar1;
}



/* Function: ptr_offset @ 00011742 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 0001174e */

int ptr_diff(int *p1,int *p2)

{
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 0001175a */

int ptr_void(void *p,int type)

{
 if (type == 1) {
 return (int)*(char *)p;
 }
 if (type == 0) {
 return *(int *)p;
 }
 return -1;
}



/* Function: ptr_const @ 00011776 */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 0001177f */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 0001178b */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 000117ab */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *local_14;
 undefined4 local_10;
 
 /* Unresolved local var: char *[2] args@[???] */
 local_14 = "test";
 local_10 = 0;
 iVar1 = (*f)(p,&local_14);
 return iVar1;
}



/* Function: ptr_cast @ 000117e4 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * back_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * int_ptr@[???] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 000117eb */

void * opaque_handle_create(int size)

{
 return (void *)size;
}



/* Function: opaque_handle_op @ 000117f0 */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 000117f7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 int iVar1;
 int iVar2;
 undefined4 *puVar3;
 undefined4 *puVar4;
 byte bVar5;
 undefined4 local_20;
 int aiStack_1c [4];
 
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
 bVar5 = 0;
 puts(&DAT_000125fb);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 puVar3 = &DAT_00012634;
 puVar4 = &local_20;
 for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
 puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
 }
 iVar1 = 1;
 iVar2 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg0(EAX)]
 Unresolved local var: int i@[???] */
 iVar1 = iVar1 + aiStack_1c[iVar2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 4);
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



/* Function: struct_simple @ 00011962 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 0001196f */

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



/* Function: struct_nested @ 00011992 */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 0001199c */

int struct_deep(Widget *w)

{
 return (w->style).r + (w->bounds).z;
}



/* Function: struct_with_ptr @ 000119a7 */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 if (node->next == (Node *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = node->next->data;
 }
 return iVar1 + node->data;
}



/* Function: struct_bitfields @ 000119bd */

int struct_bitfields(Flags *f)

{
 unsigned short uVar1;
 
 uVar1 = *(unsigned short *)f;
 return (uint)(uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 000119e4 */

int union_type(UnionData *u,int type)

{
 int iVar1;
 
 if (type == 1) {
 iVar1 = (int)ROUND(u->f);
 }
 else if (type == 0) {
 iVar1 = u->i;
 }
 else {
 iVar1 = (int)u->bytes[0];
 }
 return iVar1;
}



/* Function: union_array @ 00011a27 */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[iVar2].i;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return iVar1;
}



/* Function: enum_type @ 00011a46 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00011a50 */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = *(int *)(&DAT_00012654 + s * 4);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011a72 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011a93 */

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



/* Function: doubly_linked_list @ 00011aa5 */

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



/* Function: binary_tree_sum @ 00011ab7 */

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



/* Function: binary_tree @ 00011af0 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00011b11 */

int graph_traverse(Graph *g)

{
 int iVar1;
 int iVar2;
 Edge *pEVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (g->numVertices < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar3 = g->adjList[iVar2]; pEVar3 != (Edge *)0x0; pEVar3 = pEVar3->next) {
 iVar1 = iVar1 + pEVar3->dest;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 != g->numVertices);
 }
 return iVar1;
}



/* Function: test_composite_types @ 00011b3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
	void *piVar1;
	int iVar2;
	int iVar3;
	Edge *puVar4;
	void *piVar1_edge;
	byte bVar5;
	int local_84 [3];
	void *local_78;
	int local_74;
	void *local_70;
	int local_6c;
	int local_68;
	TreeNode local_64;
	int local_54;
	void *local_50;
	int local_4c;
	int local_48;
	int local_44;
	void *local_40;
	Edge *local_3c[12] = {0};
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[???]
 Unresolved local var: TreeNode tree@[???]
 Unresolved local var: Edge e1@[???]
 Unresolved local var: Graph g@[???]
 Unresolved local var: Point3D p1@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: Device dev@[???]
 Unresolved local var: Point3D[2] pts@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: UnionData[3] arr_u@[???] */
 bVar5 = 0;
 puts(&DAT_00012616);
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
 piVar1 = local_84 + 2;
 local_84[2] = 10;
 local_78 = &local_74;
 local_74 = 0x14;
 local_70 = &local_6c;
 local_6c = 0x1e;
 local_68 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: Node * current@[DW_OP_reg0(EAX)]
 Unresolved local var: int sum@[DW_OP_reg1(ECX)] */
 iVar2 = iVar2 + *(int *)piVar1;
 piVar1 = (void *)(uintptr_t)(*(uintptr_t *)((char *)piVar1 + 4));
 } while (piVar1 != (void *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar2);
 piVar1 = &local_54;
 local_54 = 10;
 iVar2 = 0;
 local_4c = 0;
 local_48 = 0x14;
 local_44 = 0;
 local_40 = piVar1;
 local_50 = &local_48;
 do {
 /* Unresolved local var: DNode * current@[DW_OP_reg1(ECX)]
 Unresolved local var: int sum@[DW_OP_reg0(EAX)] */
 iVar2 = iVar2 + *(int *)piVar1;
 piVar1 = (void *)(uintptr_t)(*(uintptr_t *)((char *)piVar1 + 4));
 } while (piVar1 != (void *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
 local_64.right = (TreeNode *)0x0;
 local_64.left = (TreeNode *)0x0;
 local_64.data = 100;
 iVar2 = binary_tree_sum(&local_64);
 printf("CMP-L2-14 (binary_tree): %d\n",iVar2);
 piVar1 = local_84;
 *(int *)piVar1 = 1;
 *((int *)piVar1 + 1) = 0;
 *((int *)piVar1 + 2) = 10;
 iVar3 = 0;
 puVar4 = local_3c;
 for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
 *(Edge *)puVar4 = *(Edge *)0x0;
 puVar4 = (void *)((Edge *)puVar4 + 1);
 }
 {
 Edge e1;
 Edge e2;
 Graph g;
 e1.dest = 10;
 e2.dest = 10;
 g.numVertices = 2;
 g.adjList[0] = &e1;
 g.adjList[1] = &e2;
 iVar2 = graph_traverse(&g);
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar2);
 return;
}



/* Function: main @ 00011d68 */

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
