/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_clang_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdint.h>
#include <stdio.h>
#include <stddef.h>

/* Type definitions for decompiler compatibility */
typedef unsigned long ulong;
typedef unsigned int uint;
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned char byte;
typedef long long longlong;
typedef long double long_double;

/* Function pointer types */
typedef void (*code)(void);

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

/* Basic structure definitions */
typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_0 = 0,
    STATE_1 = 1,
    STATE_2 = 2,
    STATE_3 = 3
} State;

typedef struct {
    int width;
    int height;
} Size;

typedef struct {
    int x;
    int y;
} Position2D;

typedef struct {
    Size size;
    Position2D position;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct {
    Color fill;
    Color stroke;
} Style;

typedef struct {
    Style style;
    struct {
        Point3D position;
        Size size;
    } bounds;
    void *data;
    int (*process)(void *);
} Widget;

typedef unsigned short ushort;

typedef struct {
    unsigned int bit0 : 1;
    unsigned int bit1_2 : 2;
    unsigned int bit3_5 : 3;
    unsigned int bit6 : 1;
} Flags;

typedef struct {
    int (*process)(void *);
    void *data;
} Device;

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct {
    int numVertices;
    Edge **adjList;
} Graph;

typedef struct TreeNode {
    int data;
    int _4_4_;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* CRT stub function _init */
void _init(void) {
    /* Stub - initialization code */
}

/* CRT runtime symbols */
char completed_0 = 0;
uint64_t fpcr = 0;
uint64_t fpsr = 0;

/* String constants from original binary */
static char DAT_00102ebf[] = "=== Data Types L1 ===";
static char DAT_00102ee0[] = "=== Array Types ===";
static char DAT_00102efb[] = "=== Pointer Types ===";
static char DAT_00102f16[] = "=== Composite Types ===";
static uint32_t DAT_00102920[] = {0, 10, 20, 30};
void *__dso_handle = NULL;

/* CRT stub functions */
void __cxa_finalize(void *dso_handle) {
    /* Stub - no implementation needed */
}

void deregister_tm_clones(void) {
    /* Stub - no implementation needed */
}



/* Forward declarations for soft-float functions */
uint8_t *__addtf3(uint8_t *result, uint8_t *param_1, uint8_t *param_2) __attribute__((weak));
uint8_t *__multf3(uint8_t *result, uint8_t *param_1, uint8_t *param_2) __attribute__((weak));

/* Forward declaration for __sfp_handle_exceptions */
ulong __sfp_handle_exceptions(ulong param_1) __attribute__((weak));

/* Macro for extracting 64-bit parts of a 128-bit type (Ghidra decompiler compatibility) */
#define SUB168(val, idx) (((uint64_t *)&(val))[idx])

/* Carry flag detection macro for 64-bit addition */
#define CARRY8(a, b) (((a) + (b)) < (a))

/* Leading zero count macro using compiler builtin with fallback */
#ifndef __has_builtin
  #define __has_builtin(x) 0
#endif
#if __has_builtin(__builtin_clzll)
  #define LZCOUNT(x) ((x) == 0 ? 64 : (unsigned int)__builtin_clzll(x))
#elif defined(__GNUC__)
  #define LZCOUNT(x) ((x) == 0 ? 64 : ((x) < 0x100000000ULL ? 32 + __builtin_clz((uint)(x)) : __builtin_clzll(x)))
#else
  #define LZCOUNT(x) ((x) == 0 ? 64 : ((x) >> 32) == 0 ? __builtin_clz((uint)(x)) + 32 : __builtin_clz((uint)((x) >> 32)))
#endif


/* Function: FUN_00100620 @ 00100620 */

void FUN_00100620(void)

{
 (*(code *)(void *)0x0)();
 return;
}




/* Forward declarations */
int main(void);
void _exit(int status);

/* CRT stub function _start - entry point */
void _start(void) {
    /* Real entry point that calls main */
    int ret = main();
    _exit(ret);
}





/* CRT stub function call_weak_fn */
void call_weak_fn(void) {
    /* Stub - weak symbol handling */
}











/* CRT stub function register_tm_clones */
void register_tm_clones(void) {
    /* Stub - thread-local storage clone registration */
}





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




/* CRT stub function __do_global_dtors_aux */
void __do_global_dtors_aux(void) {
    /* Stub - global destructors */
}




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
 uint8_t local_res [16];
 uint8_t local_tmp [16];
 uint8_t local_zero [16] = {0};
 int i;
 
 __multf3(local_tmp, (uint8_t *)&d, (uint8_t *)&d);
 __addtf3(local_res, local_tmp, local_zero);
 for (i = 0; i < 16; i++) {
 ((uint8_t *)&d)[i] = local_res[i];
 }
 return d;
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
 puts(DAT_00102ebf);
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



/* Function: array_1d_stack @ 001009a8 */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 uVar2 = (ulong)(uint)n;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *arr + iVar1;
 arr = arr + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: array_string @ 001009d8 */

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



/* Function: array_2d_stack @ 001009f0 */

int array_2d_stack(int (*arr) [10])

{
 int *piVar1;
 int iVar2;
 long lVar3;
 
 /* Unresolved local var: int sum@[???] */
 lVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = (int *)((long)*arr + lVar3);
 /* Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 0x2c;
 iVar2 = *piVar1 + iVar2;
 } while (lVar3 != 0x1b8);
 return iVar2;
}



/* Function: array_3d @ 00100a14 */

int array_3d(int (*arr) [5] [5])

{
 int *piVar1;
 int iVar2;
 long lVar3;
 long lVar4;
 int (*paiVar5) [5];
 long lVar6;
 
 /* Unresolved local var: int sum@[???] */
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar4 = 0;
 paiVar5 = *arr;
 do {
 lVar6 = 0;
 do {
 piVar1 = (int *)((long)*(int (*) [5])*paiVar5 + lVar6);
 /* Unresolved local var: int i@[DW_OP_reg9(x9)]
 Unresolved local var: int j@[DW_OP_reg10(x10)]
 Unresolved local var: int k@[???] */
 lVar6 = lVar6 + 4;
 iVar2 = *piVar1 + iVar2;
 } while (lVar6 != 0x14);
 lVar4 = lVar4 + 1;
 paiVar5 = paiVar5 + 1;
 } while (lVar4 != 5);
 lVar3 = lVar3 + 1;
 arr = (int (*) [5] [5])((long)arr + 100);
 } while (lVar3 != 5);
 return iVar2;
}



/* Function: array_vla @ 00100a64 */

int array_vla(int n,int *arr)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = (ulong)(uint)n;
 iVar1 = 0;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *arr + iVar1;
 arr = arr + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: array_pointer @ 00100a94 */

int array_pointer(int (*arr) [10],int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 uVar2 = (ulong)(uint)n;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = (*arr)[0] + iVar1;
 arr = arr + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: pointer_array @ 00100ac4 */

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
 if (9 < n) {
 n = 10;
 }
 iVar1 = 0;
 if (n < 2) {
 n = 1;
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



/* Function: array_complex_index @ 00100b14 */

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



/* Function: array_oob @ 00100b48 */

int array_oob(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (-1 < n) {
 iVar1 = 0;
 uVar2 = (ulong)(n + 1);
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *arr + iVar1;
 arr = arr + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: test_array_types @ 00100b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 unsigned long uVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 uint8_t *puVar5;
 long lVar6;
 uint8_t *puVar7;
 long lVar8;
 uint local_510 [20];
 uint32_t *local_4c0 [10];
 uint32_t local_470;
 int local_46c [50];
 uint8_t local_3a4 [500];
 int local_1b0 [100];
 uint32_t local_8;
 uint32_t local_4;
 
 /* Unresolved local var: int[10][10] matrix@[???]
 Unresolved local var: int[5][5][5] cube@[DW_OP_breg31(sp): +364]
 Unresolved local var: int[5][10] arr2@[DW_OP_breg31(sp): +164]
 Unresolved local var: int *[10] ptr_arr@[DW_OP_breg31(sp): +80]
 Unresolved local var: int[20] flat@[DW_OP_breg31(sp): 0]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int[5] arr1@[???]
 Unresolved local var: char[6] str@[???]
 Unresolved local var: int[3] vla_arr@[???] */
 puts(DAT_00102ee0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 lVar3 = 0;
 piVar4 = local_1b0;
 do {
 lVar6 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg8(x8)]
 Unresolved local var: int j@[DW_OP_reg10(x10)] */
 iVar2 = (int)lVar3;
 if (lVar3 != lVar6) {
 iVar2 = 0;
 }
 piVar4[lVar6] = iVar2;
 lVar6 = lVar6 + 1;
 } while (lVar6 != 10);
 lVar3 = lVar3 + 1;
 piVar4 = piVar4 + 10;
 } while (lVar3 != 10);
 lVar3 = 0;
 uVar1 = 0;
 do {
 piVar4 = (int *)((long)local_1b0 + lVar3);
 /* Unresolved local var: int sum@[DW_OP_reg1(x1)]
 Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 0x2c;
 uVar1 = (ulong)(uint)(*piVar4 + (int)uVar1);
 } while (lVar3 != 0x1b8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 lVar3 = 0;
 puVar5 = local_3a4;
 do {
 lVar6 = 0;
 puVar7 = puVar5;
 do {
 lVar8 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg8(x8)]
 Unresolved local var: int j@[DW_OP_reg11(x11)]
 Unresolved local var: int k@[???] */
 *(undefined4 *)(puVar7 + lVar8) = 1;
 lVar8 = lVar8 + 4;
 } while (lVar8 != 0x14);
 lVar6 = lVar6 + 1;
 puVar7 = puVar7 + 0x14;
 } while (lVar6 != 5);
 lVar3 = lVar3 + 1;
 puVar5 = puVar5 + 100;
 } while (lVar3 != 5);
 lVar3 = 0;
 uVar1 = 0;
 puVar5 = local_3a4;
 do {
 lVar6 = 0;
 puVar7 = puVar5;
 do {
 lVar8 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg1(x1)]
 Unresolved local var: int i@[DW_OP_reg8(x8)]
 Unresolved local var: int j@[DW_OP_reg10(x10)]
 Unresolved local var: int k@[???] */
 piVar4 = (int *)(puVar7 + lVar8);
 lVar8 = lVar8 + 4;
 uVar1 = (ulong)(uint)(*piVar4 + (int)uVar1);
 } while (lVar8 != 0x14);
 lVar6 = lVar6 + 1;
 puVar7 = puVar7 + 0x14;
 } while (lVar6 != 5);
 lVar3 = lVar3 + 1;
 puVar5 = puVar5 + 100;
 } while (lVar3 != 5);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 lVar3 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 local_46c[lVar3] = (int)lVar3;
 lVar3 = lVar3 + 10;
 } while (lVar3 != 0x32);
 lVar3 = 0;
 uVar1 = 0;
 do {
 piVar4 = (int *)((long)local_46c + lVar3);
 /* Unresolved local var: int sum@[DW_OP_reg1(x1)]
 Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 0x28;
 uVar1 = (ulong)(uint)(*piVar4 + (int)uVar1);
 } while (lVar3 != 200);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar1);
 lVar3 = 0;
 uVar1 = 0;
 local_8 = 0x14;
 local_4 = 10;
 local_470 = 0x1e;
 local_4c0[9] = (undefined4 *)0x0;
 local_4c0[4] = (undefined4 *)0x0;
 local_4c0[3] = (undefined4 *)0x0;
 local_4c0[0] = &local_4;
 local_4c0[1] = &local_8;
 local_4c0[2] = &local_470;
 local_4c0[6] = (undefined4 *)0x0;
 local_4c0[5] = (undefined4 *)0x0;
 local_4c0[8] = (undefined4 *)0x0;
 local_4c0[7] = (undefined4 *)0x0;
 do {
 if (*(int **)((long)local_4c0 + lVar3) != (int *)0x0) {
 uVar1 = (ulong)(uint)(**(int **)((long)local_4c0 + lVar3) + (int)uVar1);
 }
 /* Unresolved local var: int sum@[DW_OP_reg1(x1)]
 Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 8;
 } while (lVar3 != 0x18);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar1);
 lVar3 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg8(x8)] */
 local_510[lVar3] = (uint)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)local_510[0x11]);
 return;
}



/* Function: ptr_single @ 00100db4 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 00100dc0 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00100dd0 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00100de4 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 n = n + -1;
 iVar1 = *p + iVar1;
 p = p + 1;
 } while (n != 0);
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 00100e14 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00100e1c */

int ptr_diff(int *p1,int *p2)

{
 return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 00100e28 */

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



/* Function: ptr_const @ 00100e4c */

int ptr_const(int *p)

{
 return *p << 1;
}



/* Function: ptr_const_ptr @ 00100e58 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00100e6c */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00100e88 */

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



/* Function: ptr_cast @ 00100ec4 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(x0)] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00100ecc */

void * opaque_handle_create(int size)

{
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00100ed4 */

int opaque_handle_op(void *handle)

{
 return (int)handle << 1;
}



/* Function: test_pointer_types @ 00100edc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 int *piVar1;
 ulong uVar2;
 long lVar3;
 int local_40 [8];
 
 /* Unresolved local var: int[5] arr4@[DW_OP_breg31(sp): 0]
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
 puts(DAT_00102efb);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 lVar3 = 0;
 uVar2 = 0;
 local_40[2] = 3;
 local_40[3] = 4;
 local_40[0] = 1;
 local_40[1] = 2;
 local_40[4] = 5;
 do {
 piVar1 = (int *)((long)local_40 + lVar3);
 /* Unresolved local var: int sum@[DW_OP_reg1(x1)]
 Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 4;
 uVar2 = (ulong)(uint)(*piVar1 + (int)uVar2);
 } while ((int)lVar3 != 0x14);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar2);
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



/* Function: struct_simple @ 00101020 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00101034 */

int struct_array(Point3D *pts,int n)

{
 int *piVar1;
 Point3D *pPVar2;
 int iVar3;
 int iVar4;
 int *piVar5;
 ulong uVar6;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar4 = 0;
 uVar6 = (ulong)(uint)n;
 piVar5 = &pts->y;
 do {
 pPVar2 = (Point3D *)(piVar5 + -1);
 iVar3 = *piVar5;
 piVar1 = piVar5 + 1;
 piVar5 = piVar5 + 3;
 uVar6 = uVar6 - 1;
 iVar4 = pPVar2->x + iVar4 + iVar3 + *piVar1;
 } while (uVar6 != 0);
 return iVar4;
 }
 return 0;
}



/* Function: struct_nested @ 00101078 */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00101088 */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00101098 */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = 0;
 if (node->next != (Node *)0x0) {
 iVar1 = node->next->data;
 }
 return iVar1 + node->data;
}



/* Function: struct_bitfields @ 001010b0 */

int struct_bitfields(Flags *f)

{
 ushort uVar1;
 
 uVar1 = *(ushort *)f;
 return (uVar1 & 1) + (uint)(uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 001010d0 */

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



/* Function: union_array @ 001010f8 */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 uVar2 = (ulong)(uint)n;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = arr->i + iVar1;
 arr = arr + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: enum_type @ 00101128 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00101134 */

int enum_switch(State s)

{
 if (s < 4) {
 return *(int *)(&DAT_00102920 + (long)(int)s * 4);
 }
 return -99;
}



/* Function: struct_func_ptr @ 00101154 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00101170 */

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



/* Function: doubly_linked_list @ 00101190 */

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



/* Function: binary_tree_sum @ 001011b0 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 if (root != (TreeNode *)0x0) {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 iVar3 = binary_tree_sum(root->right);
 iVar3 = iVar2 + iVar1 + iVar3;
 }
 return iVar3;
}



/* Function: binary_tree @ 001011f0 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00101204 */

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

/* Function: test_composite_types @ 00101250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int iVar1;
 uint uVar2;
 unsigned long uVar3;
 int *piVar4;
 long lVar5;
 uint64_t *local_120 [12];
 uint64_t local_c0;
 uint64_t uStack_b8;
 struct TreeNode local_b0;
 int local_90 [2];
 uint32_t *local_88;
 uint64_t uStack_80;
 uint32_t local_78 [2];
 uint64_t local_70;
 int *piStack_68;
 int local_60 [2];
 undefined4 *local_58;
 undefined4 local_50 [2];
 undefined4 *local_48;
 undefined4 local_40 [2];
 undefined8 local_38;
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[???]
 Unresolved local var: TreeNode tree@[DW_OP_breg31(sp): +112]
 Unresolved local var: Edge e1@[DW_OP_breg31(sp): +96]
 Unresolved local var: Graph g@[DW_OP_breg31(sp): 0]
 Unresolved local var: Point3D p1@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: Device dev@[???]
 Unresolved local var: Point3D[2] pts@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData[3] arr_u@[???] */
 puts(DAT_00102f16);
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
 piVar4 = local_60;
 uVar3 = 0;
 local_60[0] = 10;
 local_40[0] = 0x1e;
 local_50[0] = 0x14;
 local_58 = local_50;
 local_48 = local_40;
 local_38 = 0;
 do {
 /* Unresolved local var: Node * current@[DW_OP_reg8(x8)]
 Unresolved local var: int sum@[DW_OP_reg1(x1)] */
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 uVar3 = (ulong)(uint)(iVar1 + (int)uVar3);
 } while (piVar4 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",uVar3);
 piVar4 = local_90;
 uVar3 = 0;
 local_70 = 0;
 piStack_68 = piVar4;
 local_90[0] = 10;
 local_78[0] = 0x14;
 local_88 = local_78;
 uStack_80 = 0;
 do {
 /* Unresolved local var: DNode * current@[DW_OP_reg8(x8)]
 Unresolved local var: int sum@[DW_OP_reg1(x1)] */
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 uVar3 = (ulong)(uint)(iVar1 + (int)uVar3);
 } while (piVar4 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar3);
 local_b0.left = (TreeNode *)0x0;
 local_b0.data = 100;
 local_b0._4_4_ = 0;
 local_b0.right = (TreeNode *)0x0;
 uVar2 = binary_tree_sum(&local_b0);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
 lVar5 = 0;
 uVar3 = 0;
 local_120[1] = (undefined8 *)0x0;
 local_120[3] = (undefined8 *)0x0;
 local_120[2] = (undefined8 *)0x0;
 local_120[0] = &local_c0;
 uStack_b8 = 0;
 local_c0 = 1;
 local_120[7] = (undefined8 *)0x0;
 local_120[6] = (undefined8 *)0x0;
 local_120[9] = (undefined8 *)0x0;
 local_120[8] = (undefined8 *)0x0;
 local_120[10] = (undefined8 *)0x2;
 local_120[5] = (undefined8 *)0x0;
 local_120[4] = (undefined8 *)0x0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (piVar4 = (int *)local_120[lVar5]; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 2)) {
 uVar3 = (ulong)(uint)(*piVar4 + (int)uVar3);
 }
 /* Unresolved local var: int sum@[DW_OP_reg1(x1)]
 Unresolved local var: int i@[DW_OP_reg8(x8)] */
 lVar5 = lVar5 + 1;
 } while (lVar5 != 2);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar3);
 return;
}



/* Function: main @ 00101470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __addtf3 @ 001014a0 */

uint8_t * __addtf3(uint8_t *result, uint8_t *param_1, uint8_t *param_2)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 ulong uVar4;
 undefined1 auVar5 [16];
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
 undefined1 auVar27 [16];
 ulong uVar29;
 
 uVar11 = ((uint64_t *)param_2)[1];
 uVar29 = ((uint64_t *)param_2)[0];
 uVar28 = ((uint64_t *)param_1)[1];
 uVar26 = ((uint64_t *)param_1)[0];
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
 goto LAB_001017c0;
 }
 goto LAB_00101a74;
 }
 goto LAB_0010171c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_001018d8;
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
 goto LAB_001018d8;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00101984;
 }
LAB_00101b08:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_00101654;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101d90;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101b08;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_00101f38;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101fd0;
 }
LAB_00101ffc:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101f40:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101984;
 }
LAB_00101d90:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00101ffc;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101b08;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101d90;
LAB_00101f38:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00101f40;
 }
LAB_00101fd0:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00101984;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_0010173c;
 }
 goto LAB_00101d08;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101d08;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_001015ec;
 }
LAB_001015d8:
 uVar17 = uVar22 | uVar25;
 goto LAB_001015dc;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_001015ec;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00101fe0:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_0010182c;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_00101f7c;
LAB_00101e48:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_0010182c;
 }
LAB_00101ca4:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00101cc4;
 }
 goto LAB_001017e8;
 }
LAB_00101d34:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_001018d8;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101b08;
 goto LAB_001017b4;
 }
 goto LAB_001016b0;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_0010171c;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101a74;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_001017c0:
 uVar20 = 0x7fff;
 goto LAB_001017c8;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_00101964;
LAB_001016b0:
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
LAB_001018d8:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_0010171c;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_001015ec;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00101d34;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00101fe0;
 if (uVar10 != 0x800000) goto LAB_00101ca4;
 if (lVar18 != 0) goto LAB_00101e48;
LAB_00101f7c:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_0010161c:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_00101638;
 }
LAB_001017e8:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00101804;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101804:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_0010173c;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_0010182c:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_00101840;
LAB_00101840:
LAB_0010173c:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
}
 if (uVar8 == 0) {
 uVar11 = 0;
 if ((uVar20 + 1 & 0x7ffe) != 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar10 >> 0x33 & 1) != 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_00101574;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_00101574;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_0010173c;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101d08;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_001015ec;
 }
 goto LAB_00101de0;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_001015dc;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_00101de0:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_0010173c;
 }
LAB_00101d08:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00101d10;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101c48;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00101c18;
 }
LAB_00101e90:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_00101f0c:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00101984;
 }
LAB_00101ea8:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101984;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00101c18;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00101e90;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101c18:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101984;
 }
 goto LAB_00101ea8;
 }
LAB_00101c48:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00101f0c;
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
 goto LAB_001017c0;
 }
 goto LAB_00101a74;
 }
 goto LAB_0010171c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_0010156c;
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
 goto LAB_0010156c;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101b08;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00101984:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_00101638;
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
 goto LAB_0010156c;
 }
 goto LAB_00101518;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_001017b4:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_001017c0;
 }
LAB_00101a74:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00101984;
 }
LAB_0010171c:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x0010172c;
LAB_001015ec:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00101d10:
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
joined_r0x00101cc4:
 if (lVar18 == 0) {
LAB_00101914:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00101914;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_00101618;
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
LAB_00101618:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_0010161c;
LAB_001017c8:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00101984;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_00101518:
 if (uVar20 == 0x7fff) {
LAB_00101964:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101b08;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101984;
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
LAB_0010156c:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_0010171c;
LAB_00101574:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00101580;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101580:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_0010171c;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_001015d8;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_001015dc:
 uVar12 = (uint)lVar9;
joined_r0x0010172c:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_001015ec;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_0010173c:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_00101638:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_00101654:
 ((uint64_t *)result)[1] = uVar10;
 ((uint64_t *)result)[0] = uVar22;
 return result;
}



/* Function: __multf3 @ 00102040 - Stub implementation for linker */

uint8_t * __multf3(uint8_t *result, uint8_t *param_1, uint8_t *param_2)

{
 int i;
 
 /* Simple stub: return zero */
 for (i = 0; i < 16; i++) {
 result[i] = 0;
 }
 return result;
}



/* Function: __sfp_handle_exceptions @ 00102840 */

ulong __sfp_handle_exceptions(ulong param_1)

{
 uint uVar2;
 ulong retval;
 
 retval = param_1;
 uVar2 = (uint)param_1;
 if ((param_1 & 1) != 0) {
 retval = (ulong)fpsr;
 }
 if ((uVar2 >> 1 & 1) != 0) {
 retval = (ulong)fpsr;
 }
 if ((uVar2 >> 2 & 1) != 0) {
 retval = (ulong)fpsr;
 }
 if ((uVar2 >> 3 & 1) != 0) {
 retval = (ulong)fpsr;
 }
 if ((uVar2 >> 4 & 1) != 0) {
 retval = (ulong)fpsr;
 }
 return retval;
}




/* CRT stub function _exit */
void _exit(int status) {
    /* Exit system call for ARM64 */
    __asm__ volatile (
        "mov x8, #93\n"    /* sys_exit */
        "mov x0, %0\n"    /* status code */
        "svc #0\n"        /* system call */
        "udf #0"          /* should not reach here */
        : /* no outputs */
        : "r"(status)
        : "x0", "x8", "memory"
    );
}

/* CRT stub function _fini */
void _fini(void) {
    /* Stub - termination code */
}




/* Total functions decompiled: 67 */
