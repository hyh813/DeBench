/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdbool.h>

typedef unsigned char undefined;
typedef void (*code)(void);
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned short ushort;

extern char DAT_0010266f[];
extern char DAT_00102690[];
extern char DAT_001026ab[];
extern char DAT_001026c6[];
typedef struct {
    unsigned int _0_4_;
    unsigned int _4_4_;
} undefined4_struct;
extern undefined4_struct DAT_00102050;
extern undefined4 _DAT_00102030[];
extern undefined4 _DAT_00102040[];
extern int DAT_001020d0[];

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
    Position position;
} Bounds;

typedef struct {
    int r;
    int g;
    int b;
} Color;

typedef struct {
    Color fill;
} Style;

typedef struct {
    Bounds bounds;
    Style style;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *next;
    Node *prev;
    int data;
} DNode;

typedef struct TreeNode {
    int data;
    int _4_4_;
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
    int data;
    int (*process)(int);
} Device;

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

typedef struct {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef struct {
    unsigned short flags;
} Flags;

typedef int State;

typedef union {
    unsigned char bytes[16];
    struct {
        unsigned long long _0_8_;
        unsigned long long _8_8_;
    };
} uint128;

#define SUB164(val, offset) (*(unsigned int*)((unsigned char*)&(val) + (offset)))

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




/* Function: process_char @ 0010114c */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (byte)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 0010115b */

short process_short(short a,short b)

{
 return a + b;
}



/* Function: process_int @ 0010115f */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: process_long @ 00101165 */

long process_long(long x)

{
 return x * 2;
}



/* Function: process_ll @ 0010116a */

long long process_ll(long long x)

{
 return x * x;
}



/* Function: process_float @ 00101172 */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00101183 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 00101194 */

long double * process_ld(long double *__return_storage_ptr__,long double d)

{
 return __return_storage_ptr__;
}



/* Function: process_bool @ 0010119f */

_Bool process_bool(int x)

{
 return (x & 1U) == 0 && 0 < x;
}



/* Function: const_param @ 001011ae */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 001011b4 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 001011b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 /* Unresolved local var: int vol_value@[???]
 Unresolved local var: int value@[???] */
 puts(&DAT_0010266f);
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



/* Function: array_1d_stack @ 001012e2 */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2];
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: array_string @ 001012fb */

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



/* Function: array_2d_stack @ 0010130c */

int array_2d_stack(int (*arr) [10])

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???] */
 lVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = iVar1 + *(int *)((long)*arr + lVar2);
 lVar2 = lVar2 + 0x2c;
 } while (lVar2 != 0x1b8);
 return iVar1;
}



/* Function: array_3d @ 00101321 */

int array_3d(int (*arr) [5] [5])

{
 int iVar1;
 long lVar2;
 int (*paiVar3) [5];
 long lVar4;
 long lVar5;
 
 /* Unresolved local var: int sum@[???] */
 lVar5 = 0;
 iVar1 = 0;
 do {
 lVar4 = 0;
 paiVar3 = *arr;
 do {
 lVar2 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg8(R8)]
 Unresolved local var: int j@[DW_OP_reg4(RSI)]
 Unresolved local var: int k@[DW_OP_reg2(RCX)] */
 iVar1 = iVar1 + (*(int (*) [5])*paiVar3)[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 5);
 lVar4 = lVar4 + 1;
 paiVar3 = paiVar3 + 1;
 } while (lVar4 != 5);
 lVar5 = lVar5 + 1;
 arr = (int (*) [5] [5])((long)arr + 100);
 } while (lVar5 != 5);
 return iVar1;
}



/* Function: array_vla @ 00101354 */

int array_vla(int n,int *arr)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2];
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: array_pointer @ 0010136d */

int array_pointer(int (*arr) [10],int n)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)((long)*arr + lVar2);
 lVar2 = lVar2 + 0x28;
 } while ((ulong)(uint)n * 0x28 != lVar2);
 return iVar1;
 }
 return 0;
}



/* Function: pointer_array @ 0010138f */

int pointer_array(int **arr,int n)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int count@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 10;
 if ((uint)n < 10) {
 uVar2 = (ulong)(uint)n;
 }
 uVar3 = 0;
 iVar1 = 0;
 do {
 if (arr[uVar3] != (int *)0x0) {
 iVar1 = iVar1 + *arr[uVar3];
 }
 uVar3 = uVar3 + 1;
 } while (uVar2 != uVar3);
 return iVar1;
 }
 return 0;
}



/* Function: array_complex_index @ 001013b9 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 iVar1 = -1;
 if ((((-1 < x) && (y < h)) && (x < w)) && (-1 < y)) {
 iVar1 = arr[y * w + x];
 }
 return iVar1;
}



/* Function: array_oob @ 001013de */

int array_oob(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (-1 < n) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2];
 uVar2 = uVar2 + 1;
 } while (n + 1 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: test_array_types @ 001013f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 bool bVar1;
 undefined1 *puVar2;
 int *piVar3;
 undefined1 *puVar4;
 long lVar5;
 long lVar6;
 undefined4 uVar7;
 long lVar8;
 ulong uVar9;
 int iVar11;
 int iVar12;
 undefined4 local_514;
 undefined4 local_510;
 int local_50c;
 int *local_508;
 undefined4 *local_500 [2];
 uint128 local_4f0;
 uint128 local_4e0;
 uint128 local_4d0;
 undefined8 local_4c0;
 undefined8 local_4b8;
 undefined8 uStack_4b0;
 undefined8 local_4a8;
 undefined8 uStack_4a0;
 undefined8 local_498;
 undefined8 uStack_490;
 undefined8 local_488;
 undefined8 uStack_480;
 undefined8 local_478;
 undefined8 uStack_470;
 int aiStack_468 [53];
 undefined1 local_394 [396];
 undefined1 local_208 [512];
 uint128 auVar10;
 
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
 puts(&DAT_00102690);
 lVar6 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 /* Unresolved local var: int i@[???] */
 puVar2 = local_394;
 do {
 /* Unresolved local var: int j@[???] */
 lVar5 = 0;
 auVar10._0_8_ = (unsigned long long)_DAT_00102030[0];
 auVar10._8_8_ = (unsigned long long)_DAT_00102030[1];
 do {
 bVar1 = SUB164(auVar10,0) < (int)DAT_00102050._0_4_;
 iVar11 = SUB164(auVar10,4);
 iVar12 = DAT_00102050._4_4_;
 if (iVar11 < iVar12 || iVar11 == iVar12 && bVar1) {
 uVar7 = 0;
 if (lVar6 == lVar5) {
 uVar7 = (int)lVar6;
 }
 *(undefined4 *)(puVar2 + lVar5 * 4 + -4) = uVar7;
 }
 if (iVar11 < iVar12 || iVar11 == iVar12 && bVar1) {
 uVar7 = 0;
 if (lVar6 + -1 == lVar5) {
 uVar7 = (int)lVar6;
 }
 *(undefined4 *)(puVar2 + lVar5 * 4) = uVar7;
 }
 lVar5 = lVar5 + 2;
 lVar8 = auVar10._8_8_;
 auVar10._0_8_ = auVar10._0_8_ + 2;
 auVar10._8_8_ = lVar8 + 2;
 } while (lVar5 != 10);
 lVar6 = lVar6 + 1;
 puVar2 = puVar2 + 0x28;
 } while (lVar6 != 10);
 lVar6 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
 Unresolved local var: int i@[???] */
 lVar6 = lVar6 + 0x2c;
 } while (lVar6 != 0x1b8);
 lVar6 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n");
 puVar2 = local_208;
 do {
 lVar5 = 0;
 puVar4 = puVar2;
 do {
 lVar8 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg3(RBX)]
 Unresolved local var: int j@[DW_OP_reg1(RDX)]
 Unresolved local var: int k@[DW_OP_reg4(RSI)] */
 *(undefined4 *)(puVar4 + lVar8 * 4) = 1;
 lVar8 = lVar8 + 1;
 } while (lVar8 != 5);
 lVar5 = lVar5 + 1;
 puVar4 = puVar4 + 0x14;
 } while (lVar5 != 5);
 lVar6 = lVar6 + 1;
 puVar2 = puVar2 + 100;
 } while (lVar6 != 5);
 lVar6 = 0;
 puVar2 = local_208;
 uVar9 = 0;
 do {
 lVar5 = 0;
 puVar4 = puVar2;
 do {
 lVar8 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
 Unresolved local var: int i@[DW_OP_reg0(RAX)]
 Unresolved local var: int j@[DW_OP_reg5(RDI)]
 Unresolved local var: int k@[DW_OP_reg3(RBX)] */
 uVar9 = (ulong)(uint)((int)uVar9 + *(int *)(puVar4 + lVar8 * 4));
 lVar8 = lVar8 + 1;
 } while (lVar8 != 5);
 lVar5 = lVar5 + 1;
 puVar4 = puVar4 + 0x14;
 } while (lVar5 != 5);
 lVar6 = lVar6 + 1;
 puVar2 = puVar2 + 100;
 } while (lVar6 != 5);
 lVar6 = 0;
 printf("ARR-L1-04 (array_3d): %d\n",uVar9);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 do {
 /* Unresolved local var: int i@[???] */
 aiStack_468[lVar6] = (int)lVar6;
 lVar6 = lVar6 + 10;
 } while (lVar6 != 0x32);
 lVar6 = 0;
 uVar9 = 0;
 do {
 /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
 Unresolved local var: int i@[???] */
 uVar9 = (ulong)(uint)((int)uVar9 + *(int *)((long)aiStack_468 + lVar6));
 lVar6 = lVar6 + 0x28;
 } while (lVar6 != 200);
 lVar6 = 0;
 printf("ARR-L2-02 (array_pointer): %d\n",uVar9);
 piVar3 = &local_50c;
 local_50c = 10;
 local_510 = 0x14;
 local_514 = 0x1e;
 local_508 = piVar3;
 local_500[0] = &local_510;
 local_500[1] = &local_514;
 local_4f0._0_8_ = 0;
 local_4f0._8_8_ = 0;
 local_4e0._0_8_ = 0;
 local_4e0._8_8_ = 0;
 local_4d0._0_8_ = 0;
 local_4d0._8_8_ = 0;
 local_4c0 = 0;
 uVar9 = 0;
 while( true ) {
 /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
 Unresolved local var: int i@[DW_OP_reg3(RBX)] */
 if (piVar3 != (int *)0x0) {
 uVar9 = (ulong)(uint)((int)uVar9 + *piVar3);
 }
 if (lVar6 == 2) break;
 piVar3 = local_500[lVar6];
 lVar6 = lVar6 + 1;
 }
 printf("ARR-L2-03 (pointer_array): %d\n",uVar9);
 /* Unresolved local var: int i@[???] */
 local_4b8 = 0x100000000;
 uStack_4b0 = 0x300000002;
 local_4a8 = 0x500000004;
 uStack_4a0 = 0x700000006;
 local_498 = 0x900000008;
 uStack_490 = 0xb0000000a;
 local_488 = 0xd0000000c;
 uStack_480 = 0xf0000000e;
 local_478 = 0x1100000010;
 uStack_470 = 0x1300000012;
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 001016a5 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 001016ab */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 001016b4 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 001016bf */

int ptr_increment(int *p,int n)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + p[lVar2];
 lVar2 = lVar2 + 1;
 } while (n != (int)lVar2);
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 001016d7 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 001016de */

int ptr_diff(int *p1,int *p2)

{
 return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 001016e9 */

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



/* Function: ptr_const @ 001016fe */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 00101703 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 0010170b */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101710. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00101712 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *local_18;
 undefined8 uStack_10;
 
 /* Unresolved local var: char *[2] args@[???] */
 local_18 = "test";
 uStack_10 = 0;
 iVar1 = (*f)(p,&local_18);
 return iVar1;
}



/* Function: ptr_cast @ 00101733 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_reg5(RDI)]
 Unresolved local var: char * char_ptr@[DW_OP_reg5(RDI)]
 Unresolved local var: int * back_ptr@[DW_OP_reg5(RDI)] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00101736 */

void * opaque_handle_create(int size)

{
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 0010173a */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 0010173e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 /* Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int val3@[???]
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
 Unresolved local var: int[5] arr4@[???]
 Unresolved local var: int[5] arr6@[???]
 Unresolved local var: void * handle@[???] */
 puts(&DAT_001026ab);
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



/* Function: struct_simple @ 00101855 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 0010185e */

int struct_array(Point3D pts[],int n)

{
 int iVar1;
 int i;
 
 /* Unresolved local var: int sum@[???] */
 if (0 < n) {
 iVar1 = 0;
 for (i = 0; i < n; i++) {
 iVar1 = iVar1 + pts[i].x + pts[i].y + pts[i].z;
 }
 return iVar1;
 }
 return 0;
}



/* Function: struct_nested @ 00101888 */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 0010188e */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00101895 */

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



/* Function: struct_bitfields @ 001018a9 */

int struct_bitfields(Flags *f)

{
 ushort uVar1;
 
 uVar1 = *(ushort *)f;
 return (uint)(uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 001018ca */

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



/* Function: union_array @ 001018df */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[uVar2].i;
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: enum_type @ 001018f8 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 001018fe */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = *(int *)(&DAT_001020d0 + (long)(int)s * 4);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00101916 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0010191b. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 0010191e */

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



/* Function: doubly_linked_list @ 0010192e */

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



/* Function: binary_tree_sum @ 0010193e */

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



/* Function: binary_tree @ 00101971 */

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



/* Function: graph_traverse @ 00101976 */

int graph_traverse(Graph *g)

{
 int iVar1;
 ulong uVar2;
 Edge *pEVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < g->numVertices) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar3 = g->adjList[uVar2]; pEVar3 != (Edge *)0x0; pEVar3 = pEVar3->next) {
 iVar1 = iVar1 + pEVar3->dest;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != (uint)g->numVertices);
 return iVar1;
 }
 return 0;
}



/* Function: test_composite_types @ 0010199e */

/* WARNING: Variable defined which should be unmapped: sum */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int *piVar1;
 uint uVar2;
 uint uVar3;
 long lVar4;
 ulong uVar5;
 Edge *local_100[11];
 Edge local_a8[11];
 undefined4 *local_90;
 undefined4 local_88 [2];
 undefined4 *local_80;
 undefined4 local_78 [2];
 undefined8 local_70;
 TreeNode local_68;
 int local_48 [2];
 undefined4 *local_40;
 undefined8 local_38;
 undefined4 local_30 [2];
 undefined8 local_28;
 int *local_20;
 int sum;
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[???]
 Unresolved local var: TreeNode tree@[???]
 Unresolved local var: Edge e1@[???]
 Unresolved local var: Graph g@[???]
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
 puts(&DAT_001026c6);
 uVar3 = 0;
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
 piVar1 = local_a8 + 4;
 local_a8[4] = 10;
 local_90 = local_88;
 local_88[0] = 0x14;
 local_80 = local_78;
 local_78[0] = 0x1e;
 local_70 = 0;
 do {
 /* Unresolved local var: Node * current@[DW_OP_reg0(RAX)] */
 uVar3 = uVar3 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 uVar2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar3);
 piVar1 = local_48;
 local_48[0] = 10;
 local_38 = 0;
 local_30[0] = 0x14;
 local_28 = 0;
 local_20 = piVar1;
 local_40 = local_30;
 do {
 /* Unresolved local var: DNode * current@[DW_OP_reg0(RAX)]
 Unresolved local var: int sum@[DW_OP_reg3(RBX)] */
 uVar2 = uVar2 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 lVar4 = 0;
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar2);
 local_68.right = (TreeNode *)0x0;
 local_68.data = 100;
 local_68._4_4_ = 0;
 local_68.left = (TreeNode *)0x0;
 uVar3 = binary_tree_sum(&local_68);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar3);
local_100[0] = &local_a8[0];
local_a8[0].dest = 1;
local_a8[0].next = (Edge *)0x0;
local_a8[1].dest = 0;
local_a8[1].next = (Edge *)0x0;
local_a8[2].dest = 0;
local_a8[2].next = (Edge *)0x0;
local_a8[3].dest = 0;
local_a8[3].next = (Edge *)0x0;
local_100[9] = (Edge *)0x0;
local_100[10] = (Edge *)0x0;
local_100[7] = (Edge *)0x0;
local_100[8] = (Edge *)0x0;
local_100[5] = (Edge *)0x0;
local_100[6] = (Edge *)0x0;
local_100[3] = (Edge *)0x0;
local_100[4] = (Edge *)0x0;
local_100[1] = (Edge *)0x0;
local_100[2] = (Edge *)0x0;
 uVar5 = 0;
 Edge *pEVar1 = (Edge *)local_100[0];
 while( true ) {
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: Edge * edge@[???] */
 for (; pEVar1 != (Edge *)0x0; pEVar1 = pEVar1->next) {
 uVar5 = (ulong)(uint)((int)uVar5 + pEVar1->dest);
 }
 lVar4 = lVar4 + 1;
 if (lVar4 == 2) break;
 pEVar1 = local_100[lVar4];
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar5);
 return;
}



/* Function: main @ 00101bbc */

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
