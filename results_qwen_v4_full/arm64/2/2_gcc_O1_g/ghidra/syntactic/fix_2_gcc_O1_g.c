/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_gcc_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* Ghidra macros */
#define SUB168(val, offset) (((unsigned __int128)(val) >> ((offset) * 8)) & 0xFFFFFFFFFFFFFFFFULL)
#define LZCOUNT(x) __builtin_clzll(x)
#define CARRY8(a, b) (((a) + (b)) < (a))

/* Type definitions for composite types */
typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

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

typedef struct UnionData {
    int i;
    float f;
    char bytes[16];
} UnionData;

typedef struct Flags {
    unsigned int field1 : 1;
    unsigned int field2 : 2;
    unsigned int field3 : 3;
    unsigned int field4 : 10;
} Flags;

typedef struct Size {
    int width;
    int height;
} Size;

typedef struct Rect {
    Point3D position;
    Size size;
} Rect;

typedef struct Fill {
    int r;
    int g;
    int b;
} Fill;

typedef struct Style {
    Fill fill;
} Style;

typedef struct Bounds {
    Point3D position;
} Bounds;

typedef struct Widget {
    Bounds bounds;
    Style style;
} Widget;

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

typedef struct Device {
    int data;
    _func_int_int process;
} Device;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct Graph {
    Edge *adjList[10];
    int numVertices;
    int _84_4_;
} Graph;

typedef enum State {
    STATE_IDLE = 0,
    STATE_PAUSED = 1,
    STATE_STOPPED = 2
} State;

typedef unsigned int uint;
typedef long long longlong;
typedef unsigned char undefined1;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef undefined1 undefined;
typedef void (*code)(void);

typedef unsigned __int128 long_double;

typedef union {
    undefined1 data[16];
    struct {
        ulong _0_8_;
        ulong _8_8_;
    };
    struct {
        undefined1 _pad_12[12];
        uint _12_4_;
    } s2;
} float128_t;
char completed_0 = 0;
static ulong __stack_chk_guard = 0;
static void *__dso_handle = 0;
static void __cxa_finalize(void *p) { (void)p; }
void deregister_tm_clones(void) { }
static float128_t __multf3(float128_t, float128_t);
static float128_t __addtf3(float128_t, float128_t);
static void __stack_chk_fail(void) { }
static ulong fpcr = 0;
static ulong fpsr = 0;
static ulong __sfp_handle_exceptions(ulong p) { return p; }
char DAT_00102c58[] = "Testing data types (L1)...";
char DAT_00102de8[] = "Testing array types...";
char DAT_00102f20[] = "Testing pointer types...";
char DAT_001030f8[] = "Testing composite types...";


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010083c @ 0010083c */

void FUN_0010083c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100894 */

int double_value(int x)

{
 return x << 1;
}



/* Function: process_int @ 0010089c */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: complex_callback @ 001008a8 */

int complex_callback(int *p,char **args)

{
 *p = *p + 10;
 return (int)(*args != (char *)0x0);
}



/* Function: process_char @ 001008c4 */

char process_char(char c)

{
 if ((byte)(c + 0xbfU) < 0x1a) {
 c = c + ' ';
 }
 return c;
}



/* Function: process_short @ 001008e8 */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_long @ 001008f4 */

long process_long(long x)

{
 return x << 1;
}



/* Function: process_ll @ 001008fc */

longlong process_ll(longlong x)

{
 return x * x;
}



/* Function: process_float @ 00100904 */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00100918 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 00100930 */

long_double process_ld(long_double d)

{
 float128_t auVar1;
 float128_t auVar2;
 
 auVar2._0_8_ = SUB168(d,0);
 auVar2._8_8_ = SUB168(d,1);
 auVar1 = __multf3(auVar2,auVar2);
 auVar1._0_8_ = 0;
 auVar1._8_8_ = 0;
 return (long_double)auVar1._0_8_ | ((long_double)auVar1._8_8_ << 64);
}



/* Function: process_bool @ 00100958 */

_Bool process_bool(int x)

{
 _Bool _Var1;
 
 _Var1 = (_Bool)(~(byte)x & 1);
 if (x < 1) {
 _Var1 = false;
 }
 return _Var1;
}



/* Function: const_param @ 0010096c */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 00100978 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00100988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 int vol_value;
 
 /* Unresolved local var: int value@[???] */
 puts(DAT_00102c58);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",1.5);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0.6);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",2.0L);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00100adc */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[lVar2];
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < n);
 }
 return iVar1;
}



/* Function: array_string @ 00100b10 */

int array_string(char *str)

{
 char *pcVar1;
 int iVar2;
 long lVar3;
 
 /* Unresolved local var: int len@[???] */
 if (*str == '\0') {
 iVar2 = 0;
 }
 else {
 lVar3 = 1;
 do {
 iVar2 = (int)lVar3;
 pcVar1 = str + lVar3;
 lVar3 = lVar3 + 1;
 } while (*pcVar1 != '\0');
 }
 return iVar2;
}



/* Function: array_2d_stack @ 00100b3c */

int array_2d_stack(int (*arr) [10])

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 piVar2 = *arr;
 do {
 piVar3 = piVar2 + 0xb;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while ((int (*) [10])piVar3 != arr + 0xb);
 return iVar1;
}



/* Function: array_3d @ 00100b5c */

int array_3d(int (*arr) [5] [5])

{
 int iVar1;
 int (*paiVar2) [5];
 int (*paiVar3) [5];
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 paiVar3 = arr[1];
 iVar1 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 paiVar2 = paiVar3 + -5;
 do {
 /* Unresolved local var: int k@[???] */
 iVar1 = iVar1 + (*(int (*) [5] [5])paiVar2)[0][0] + (*(int (*) [5] [5])paiVar2)[0][1] +
 (*(int (*) [5] [5])paiVar2)[0][2] + (*(int (*) [5] [5])paiVar2)[0][3] +
 (*(int (*) [5] [5])paiVar2)[0][4];
 paiVar2 = *(int (*) [5] [5])paiVar2 + 1;
 } while (paiVar2 != paiVar3);
 paiVar3 = paiVar3 + 5;
 } while (paiVar3 != arr[6]);
 return iVar1;
}



/* Function: array_vla @ 00100bb0 */

int array_vla(int n,int *arr)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[lVar2];
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < n);
 }
 return iVar1;
}



/* Function: array_pointer @ 00100be4 */

int array_pointer(int (*arr) [10],int n)

{
 int iVar1;
 int (*paiVar2) [10];
 int (*paiVar3) [10];
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 paiVar2 = arr;
 do {
 paiVar3 = paiVar2 + 1;
 iVar1 = iVar1 + (*paiVar2)[0];
 paiVar2 = paiVar3;
 } while (paiVar3 != arr + (ulong)(n - 1) + 1);
 }
 return iVar1;
}



/* Function: pointer_array @ 00100c20 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 int iVar2;
 long lVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int count@[???] */
 iVar1 = n;
 if (10 < n) {
 iVar1 = 10;
 }
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 lVar3 = 0;
 iVar2 = 0;
 do {
 if (arr[lVar3] != (int *)0x0) {
 iVar2 = iVar2 + *arr[lVar3];
 }
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < iVar1);
 }
 return iVar2;
}



/* Function: array_complex_index @ 00100c6c */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 if ((x | y) < 0 || w <= x) {
 iVar1 = -1;
 }
 else if (y < h) {
 iVar1 = arr[x + w * y];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: array_oob @ 00100ca0 */

int array_oob(int *arr,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = arr;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != arr + (ulong)(uint)n + 1);
 }
 return iVar1;
}



/* Function: test_array_types @ 00100cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long lVar4;
 int (*paiVar5) [5];
 int *piVar6;
 int (*paiVar7) [10];
 int (*paiVar8) [5];
 int a;
 int b;
 int c;
 int vla_arr [3];
 int arr1 [5];
 int *ptr_arr [10];
 int flat [20];
 int arr2 [5] [10];
 int matrix [10] [10];
 int cube [5] [5] [5];
 int iStack_14;
 char str [6];
 
 lVar1 = __stack_chk_guard;
 puts(DAT_00102de8);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr1[3] = 4;
 arr1[4] = 5;
 iVar2 = array_1d_stack(arr1,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",iVar2);
 strncpy(str,"hello",6);
 iVar2 = array_string(str);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar2);
 /* Unresolved local var: int i@[???] */
 paiVar7 = matrix;
 iVar2 = 0;
 /* Unresolved local var: int j@[???] */
 do {
 lVar4 = 0;
 do {
 iVar3 = (int)lVar4;
 if (iVar2 != iVar3) {
 iVar3 = 0;
 }
 (*paiVar7)[lVar4] = iVar3;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 iVar2 = iVar2 + 1;
 paiVar7 = paiVar7 + 1;
 } while (iVar2 != 10);
 iVar2 = array_2d_stack(matrix);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar2);
 /* Unresolved local var: int i@[???] */
 paiVar8 = cube[0];
 /* Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 do {
 iVar2 = 0;
 paiVar5 = paiVar8;
 do {
 (*(int (*) [5])*paiVar5)[0] = 1;
 (*(int (*) [5])*paiVar5)[1] = 1;
 (*(int (*) [5])*paiVar5)[2] = 1;
 (*(int (*) [5])*paiVar5)[3] = 1;
 (*(int (*) [5])*paiVar5)[4] = 1;
 iVar2 = iVar2 + 1;
 paiVar5 = paiVar5 + 1;
 } while (iVar2 != 5);
 paiVar8 = paiVar8 + 5;
 } while (paiVar8 != (int (*) [5])&iStack_14);
 iVar2 = array_3d(cube);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar2);
 vla_arr[0] = 10;
 vla_arr[1] = 0x14;
 vla_arr[2] = 0x1e;
 iVar2 = array_vla(3,vla_arr);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",iVar2);
 /* Unresolved local var: int i@[???] */
 arr2[0][0] = 0;
 arr2[1][0] = 10;
 arr2[2][0] = 0x14;
 arr2[3][0] = 0x1e;
 arr2[4][0] = 0x28;
 iVar2 = array_pointer(arr2,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",iVar2);
 a = 10;
 b = 0x14;
 c = 0x1e;
 ptr_arr[4] = (int *)0x0;
 ptr_arr[3] = (int *)0x0;
 ptr_arr[6] = (int *)0x0;
 ptr_arr[5] = (int *)0x0;
 ptr_arr[8] = (int *)0x0;
 ptr_arr[7] = (int *)0x0;
 ptr_arr[9] = (int *)0x0;
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 iVar2 = pointer_array(ptr_arr,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",iVar2);
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 piVar6 = flat;
 do {
 *piVar6 = iVar2;
 iVar2 = iVar2 + 1;
 piVar6 = piVar6 + 1;
 } while (iVar2 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
 if (lVar1 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_single @ 00100f54 */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 00100f60 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00100f70 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00100f84 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = p;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != p + (uint)n);
 }
 return iVar1;
}



/* Function: ptr_offset @ 00100fb4 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00100fbc */

int ptr_diff(int *p1,int *p2)

{
 return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 00100fc8 */

int ptr_void(void *p,int type)

{
 uint uVar1;
 
 if (type == 0) {
 uVar1 = *(uint *)p;
 }
 else if (type == 1) {
 uVar1 = (uint)*(byte *)p;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: ptr_const @ 00100fec */

int ptr_const(int *p)

{
 return *p << 1;
}



/* Function: ptr_const_ptr @ 00100ff8 */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 0010100c */

int ptr_func_simple(_func_int_int f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00101028 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr f,int *p)

{
 long lVar1;
 int iVar2;
 char *args [2];
 
 lVar1 = __stack_chk_guard;
 args[0] = "test";
 args[1] = (char *)0x0;
 iVar2 = (*f)(p,args);
 if (lVar1 - __stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_cast @ 0010108c */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(x0)] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00101094 */

void * opaque_handle_create(int size)

{
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 0010109c */

int opaque_handle_op(void *handle)

{
 return (int)handle << 1;
}



/* Function: test_pointer_types @ 001010a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 long lVar1;
 int iVar2;
 int val3;
 int val11;
 int *ptr3;
 int **pptr3;
 int arr4 [5];
 
 /* Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int * ptr2@[???]
 Unresolved local var: int * * pptr2@[???]
 Unresolved local var: int * * * ppptr3@[???]
 Unresolved local var: int[5] arr5@[???]
 Unresolved local var: int[5] arr6@[???]
 Unresolved local var: int val7@[???]
 Unresolved local var: char c7@[???]
 Unresolved local var: int val8@[???]
 Unresolved local var: int val9@[???]
 Unresolved local var: int val12@[???]
 Unresolved local var: void * handle@[???] */
 lVar1 = __stack_chk_guard;
 puts(DAT_00102f20);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 iVar2 = ptr_triple(&pptr3);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",iVar2);
 arr4[0] = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 iVar2 = ptr_increment(arr4,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",iVar2);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 iVar2 = ptr_func_simple(&double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",iVar2);
 val11 = 5;
 iVar2 = ptr_func_complex(complex_callback,&val11);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",iVar2);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (lVar1 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: struct_simple @ 00101280 */

int struct_simple(Point3D *p)

{
 return p->x + p->y + p->z;
}



/* Function: struct_array @ 00101298 */

int struct_array(Point3D *pts,int n)

{
 Point3D *pPVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 pPVar1 = pts + (ulong)(n - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + pts->x + pts->y + pts->z;
 pts = pts + 1;
 } while (pts != pPVar1);
 }
 return iVar2;
}



/* Function: struct_nested @ 001012e8 */

int struct_nested(Rect *r)

{
 return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 001012f8 */

int struct_deep(Widget *w)

{
 return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00101308 */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = 0;
 if (node->next != (Node *)0x0) {
 iVar1 = node->next->data;
 }
 return node->data + iVar1;
}



/* Function: struct_bitfields @ 00101324 */

int struct_bitfields(Flags *f)

{
 uint uVar1;
 
 uVar1 = *(uint *)f;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}



/* Function: union_type @ 00101348 */

int union_type(UnionData *u,int type)

{
 uint uVar1;
 
 if (type == 0) {
 uVar1 = u->i;
 }
 else if (type == 1) {
 uVar1 = (uint)u->f;
 }
 else {
 uVar1 = (uint)(byte)u->bytes[0];
 }
 return uVar1;
}



/* Function: union_array @ 00101370 */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[lVar2].i;
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < n);
 }
 return iVar1;
}



/* Function: enum_type @ 001013a4 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 001013b0 */

int enum_switch(State s)

{
 int iVar1;
 
 if (s == STATE_PAUSED) {
 iVar1 = 0x32;
 }
 else if (s < STATE_STOPPED) {
 iVar1 = 100;
 if (s == STATE_IDLE) {
 iVar1 = 0;
 }
 }
 else {
 iVar1 = -99;
 if (s == STATE_STOPPED) {
 iVar1 = -1;
 }
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 001013e8 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00101404 */

int linked_list(Node *head)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: Node * current@[???] */
 if (head == (Node *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + head->data;
 head = head->next;
 } while (head != (Node *)0x0);
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 0010142c */

int doubly_linked_list(DNode *head)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: DNode * current@[???] */
 if (head == (DNode *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + head->data;
 head = head->next;
 } while (head != (DNode *)0x0);
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00101454 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root != (TreeNode *)0x0) {
 iVar2 = binary_tree_sum(root->left);
 iVar1 = root->data;
 iVar3 = binary_tree_sum(root->right);
 return iVar2 + iVar1 + iVar3;
 }
 return 0;
}



/* Function: binary_tree @ 00101498 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 001014ac */

int graph_traverse(Graph *g)

{
 int iVar1;
 Edge *pEVar2;
 long lVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (g->numVertices < 1) {
 iVar1 = 0;
 }
 else {
 lVar3 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar2 = g->adjList[lVar3]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
 iVar1 = iVar1 + pEVar2->dest;
 }
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < g->numVertices);
 }
 return iVar1;
}



/* Function: test_composite_types @ 001014f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 long lVar1;
 int iVar2;
 Flags f;
 Point3D p1;
 Node node2;
 Node node1;
 Device dev;
 Edge e1;
 TreeNode tree;
 UnionData arr_u [3];
 Point3D pts [2];
 Node list [3];
 DNode dlist [2];
 Graph g;
 
 /* Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: UnionData u@[???] */
 lVar1 = __stack_chk_guard;
 puts(DAT_001030f8);
 p1.x = 1;
 p1.y = 2;
 p1.z = 3;
 iVar2 = struct_simple(&p1);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",iVar2);
 pts[0].x = 1;
 pts[0].y = 1;
 pts[0].z = 1;
 pts[1].x = 2;
 pts[1].y = 2;
 pts[1].z = 2;
 iVar2 = struct_array(pts,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",iVar2);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 node2.data = 0x14;
 node2.next = (Node *)0x0;
 node1.data = 10;
 node1.next = &node2;
 iVar2 = struct_with_ptr(&node1);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",iVar2);
 *(uint *)&f = 0x191d;
 iVar2 = struct_bitfields(&f);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",iVar2);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 arr_u[0].i = 0xa;
 arr_u[1].i = 0x14;
 arr_u[2].i = 0x1e;
 iVar2 = union_array(arr_u,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",iVar2);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 dev.data = 10;
 dev.process = process_int;
 iVar2 = struct_func_ptr(&dev);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",iVar2);
 list[0].data = 10;
 list[0].next = list + 1;
 list[1].data = 0x14;
 list[1].next = list + 2;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 iVar2 = linked_list(list);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar2);
 dlist[0].data = 10;
 dlist[1].prev = dlist;
 dlist[0].next = dlist + 1;
 dlist[0].prev = (DNode *)0x0;
 dlist[1].data = 0x14;
 dlist[1].next = (DNode *)0x0;
 iVar2 = doubly_linked_list(dlist[1].prev);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
 tree.data = 100;
 tree.left = (TreeNode *)0x0;
 tree.right = (TreeNode *)0x0;
 iVar2 = binary_tree_sum(&tree);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar2);
 e1.dest = 1;
 e1.next = (Edge *)0x0;
 g.adjList[2] = (Edge *)0x0;
 g.adjList[1] = (Edge *)0x0;
 g.adjList[4] = (Edge *)0x0;
 g.adjList[3] = (Edge *)0x0;
 g.adjList[6] = (Edge *)0x0;
 g.adjList[5] = (Edge *)0x0;
 g.adjList[8] = (Edge *)0x0;
 g.adjList[7] = (Edge *)0x0;
 g.adjList[9] = (Edge *)0x0;
 g.adjList[0] = &e1;
 g.numVertices = 2;
 g._84_4_ = 0;
 iVar2 = graph_traverse(&g);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",iVar2);
 if (lVar1 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: main @ 001017f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __addtf3 @ 00101820 */

static float128_t __addtf3(float128_t param_1, float128_t param_2)

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
 goto LAB_00101b40;
 }
 goto LAB_00101df4;
 }
 goto LAB_00101a9c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00101c58;
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
 goto LAB_00101c58;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00101d04;
 }
LAB_00101e88:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_001019d4;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00102110;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101e88;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_001022b8;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102350;
 }
LAB_0010237c:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_001022c0:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101d04;
 }
LAB_00102110:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010237c;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101e88;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102110;
LAB_001022b8:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_001022c0;
 }
LAB_00102350:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00101d04;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_00101abc;
 }
 goto LAB_00102088;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102088;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_0010196c;
 }
LAB_00101958:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010195c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_0010196c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102360:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_00101bac;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_001022fc;
LAB_001021c8:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_00101bac;
 }
LAB_00102024:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00102044;
 }
 goto LAB_00101b68;
 }
LAB_001020b4:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_00101c58;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101e88;
 goto LAB_00101b34;
 }
 goto LAB_00101a30;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_00101a9c;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101df4;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00101b40:
 uVar20 = 0x7fff;
 goto LAB_00101b48;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_00101ce4;
LAB_00101a30:
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
LAB_00101c58:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_00101a9c;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_0010196c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_001020b4;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102360;
 if (uVar10 != 0x800000) goto LAB_00102024;
 if (lVar18 != 0) goto LAB_001021c8;
LAB_001022fc:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_0010199c:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_001019b8;
 }
LAB_00101b68:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00101b84;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101b84:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_00101abc;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_00101bac:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_00101bc0;
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
 goto LAB_001018f4;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_001018f4;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_00101abc;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102088;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_0010196c;
 }
 goto LAB_00102160;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010195c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_00102160:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_00101abc;
 }
LAB_00102088:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00102090;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101fc8;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00101f98;
 }
LAB_00102210:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_0010228c:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00101d04;
 }
LAB_00102228:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101d04;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00101f98;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00102210;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101f98:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101d04;
 }
 goto LAB_00102228;
 }
LAB_00101fc8:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010228c;
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
 goto LAB_00101b40;
 }
 goto LAB_00101df4;
 }
 goto LAB_00101a9c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_001018ec;
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
 goto LAB_001018ec;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101e88;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00101d04:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_001019b8;
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
 goto LAB_001018ec;
 }
 goto LAB_00101898;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101b34:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00101b40;
 }
LAB_00101df4:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00101d04;
 }
LAB_00101a9c:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x00101aac;
LAB_0010196c:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00102090:
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
joined_r0x00102044:
 if (lVar18 == 0) {
LAB_00101c94:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00101c94;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_00101998;
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
LAB_00101998:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_0010199c;
LAB_00101b48:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00101d04;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_00101898:
 if (uVar20 == 0x7fff) {
LAB_00101ce4:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101e88;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101d04;
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
LAB_001018ec:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_00101a9c;
LAB_001018f4:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00101900;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101900:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_00101a9c;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00101958;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010195c:
 uVar12 = (uint)lVar9;
joined_r0x00101aac:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_0010196c;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_00101abc:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_001019b8:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_001019d4:
 auVar27._8_8_ = uVar10;
 auVar27._0_8_ = uVar22;
 return auVar27;
 }
LAB_00101bc0:
 __sfp_handle_exceptions(uVar11);
 auVar5._8_8_ = uVar10;
 auVar5._0_8_ = uVar22;
 return auVar5;
}



/* Function: __multf3 @ 001023c0 */

static float128_t __multf3(float128_t param_1, float128_t param_2)

{
 ulong uVar1;
 float128_t auVar2;
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
 if (uVar11 < 0x3d) goto LAB_00102818;
 uVar11 = 0;
 uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 }
 else {
 lVar13 = LZCOUNT(uVar19);
 iVar8 = (int)lVar13 + -0xf;
LAB_00102818:
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
 uVar4 = param_1.s2._12_4_;
 uVar5 = param_2.s2._12_4_;
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
 if (uVar21 < 0x3d) goto LAB_001027bc;
 uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 uVar17 = 0;
 }
 else {
 lVar23 = LZCOUNT(uVar15);
 iVar8 = (int)lVar23 + -0xf;
LAB_001027bc:
 uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 lVar20 = (lVar13 - lVar23) + -0x3fef;
 lVar23 = (lVar13 - lVar23) + -0x3fee;
 lVar12 = 0;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 if (uVar7 < 0xb) {
LAB_001024cc:
 uVar15 = uVar21;
 if (2 < uVar7) {
LAB_00102548:
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
 goto LAB_001024fc;
 }
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 lVar9 = lVar12;
 if ((uVar7 & 0x88) == 0) goto LAB_001025ec;
 }
LAB_0010258c:
 lVar12 = lVar9;
 uVar14 = uVar26;
 uVar17 = uVar25;
 uVar22 = uVar14;
 if (lVar12 == 2) {
LAB_001025dc:
 uVar4 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 goto LAB_001024fc;
 }
 goto LAB_001025a8;
 }
 if (uVar7 - 1 < 2) {
 if (lVar12 == 2) goto LAB_001025dc;
 goto LAB_001024e8;
 }
LAB_001025ec:
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
LAB_0010274c:
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
 if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00102934;
 if ((uVar15 >> 0x33 & 1) == 0) goto LAB_00102a7c;
LAB_00102ae8:
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
LAB_00102a7c:
 uVar17 = 0;
 uVar4 = 0;
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_001024fc;
 uVar6 = (ulong)(uVar5 | 8);
 }
 else {
 uVar15 = 0;
LAB_00102934:
 uVar18 = uVar18 & 0xc00000;
 if (uVar18 == 0x400000) {
 if (uVar22 == 0) {
LAB_00102adc:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar15 = uVar15 + 1;
 }
 }
 }
 else if (uVar18 == 0x800000) {
 if (uVar22 != 0) goto LAB_00102adc;
 }
 else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar15 = uVar15 + 1;
 }
 if ((uVar15 >> 0x33 & 1) != 0) goto LAB_00102ae8;
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
LAB_00102acc:
 bVar3 = 0xfffffffffffffff7 < uVar17;
 uVar17 = uVar17 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar22 != 0) goto LAB_00102acc;
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
 goto LAB_001024fc;
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
 goto LAB_001029b4;
 }
LAB_00102480:
 if (uVar7 != 0xb) {
LAB_00102488:
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar10;
 lVar9 = lVar24;
 goto LAB_0010258c;
 }
LAB_001025a8:
 uVar22 = uVar14;
 if (lVar12 == 3) {
 uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 else {
LAB_001024e8:
 lVar20 = lVar23;
 if (lVar12 != 1) goto LAB_0010274c;
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
 if (10 < uVar7) goto LAB_00102480;
 goto LAB_001024cc;
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
 goto LAB_00102b24;
 }
 goto LAB_00102548;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 2;
 lVar23 = lVar13 + 0x8000;
 uVar17 = 0;
 if (uVar7 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_001024cc;
 }
 lVar9 = 2;
 uVar15 = 0;
LAB_00102b24:
 lVar23 = lVar13 + 0x8000;
 if (uVar7 != 0xf) {
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 if (uVar7 != 0xb) goto LAB_00102488;
 goto LAB_0010258c;
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
LAB_001024fc:
 uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
 if ((int)uVar6 == 0) {
 auVar31._8_8_ = uVar15;
 auVar31._0_8_ = uVar11;
 return auVar31;
 }
LAB_001029b4:
 __sfp_handle_exceptions(uVar6);
 auVar2._8_8_ = uVar15;
 auVar2._0_8_ = uVar11;
 return auVar2;
}








/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
