/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_gcc_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <string.h>


/* CRT stub function _init removed by preprocessor */

typedef unsigned int uint;
typedef long long longlong;
typedef long double long_double;

typedef unsigned char undefined1;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned long ulong;

/* Helper macros for long double operations */
#define CARRY8(a, b) (((a) + (b)) < (a))
#define LZCOUNT(x) __builtin_clzll(x)

/* Type for 128-bit long double (quad precision) */
typedef struct {
    unsigned long long _0_8_;
    unsigned long long _8_8_;
} uint128_t;

typedef unsigned int uint32_t;

typedef enum {
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    Point3D position;
    struct {
        int width;
        int height;
    } size;
} Rect;

typedef struct {
    struct {
        Point3D position;
        struct {
            int width;
            int height;
        } size;
    } bounds;
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char _pad1;
    } fill;
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char _pad2;
    } stroke;
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
    Edge *adjList[10];
    int numVertices;
    int _84_4_;
} Graph;

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int flag4 : 10;
    unsigned int _pad : 16;
} Flags;

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef struct {
    int data;
    int (*process)(int);
} Device;

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

extern void (*code)(void);
unsigned long ___stack_chk_guard = 0;
extern unsigned long __stack_chk_guard;
extern void *__dso_handle;
extern void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void) { return; }

/* Global definitions for decompiled symbols */
char completed_0 = 0;
char *DAT_00103660 = "Testing Data Types L1";
char *DAT_001037f0 = "Testing Array Types";
char *DAT_00103950 = "Testing Pointer Types";
extern unsigned long __stack_chk_guard;
extern unsigned long __stack_chk_guard;
extern char *DAT_00103660;
char _DAT_00103e10[16] = {0};
extern char *DAT_001037f0;
extern char *DAT_00103950;
char *DAT_00103b58 = "Testing Composite Types";
extern void __stack_chk_fail(void *, int, long long);
extern void __addtf3(void *, void *, void *);
extern void __multf3(void *, void *, void *);
unsigned long fpsr = 0;
extern ulong __sfp_handle_exceptions(ulong param_1);


/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
 ((void (*)(void))0x0)();
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
 int x_local;
 
 return x << 1;
}



/* Function: process_char @ 001008ac */

char process_char(char c)

{
 char c_local;
 
 if ((0x40 < (byte)c) && ((byte)c < 0x5b)) {
 c = c + ' ';
 }
 return c;
}



/* Function: process_short @ 001008e8 */

short process_short(short a,short b)

{
 short b_local;
 short a_local;
 
 return a + b;
}



/* Function: process_int @ 00100910 */

int process_int(int x)

{
 int x_local;
 
 return x * 2 + 1;
}



/* Function: process_long @ 0010092c */

long process_long(long x)

{
 long x_local;
 
 return x << 1;
}



/* Function: process_ll @ 00100944 */

longlong process_ll(longlong x)

{
 longlong x_local;
 
 return x * x;
}



/* Function: process_float @ 0010095c */

float process_float(float f)

{
 float f_local;
 
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00100980 */

double process_double(double d)

{
 double d_local;
 
 return d / 2.0 + 0.1;
}



/* Function: process_ld @ 001009a8 */

long_double process_ld(long_double d)

{
 undefined1 auVar1 [16];
 undefined8 uVar2;
 long_double d_local;
 
 __builtin_memcpy(&d_local, &d, sizeof(d));
 __multf3((void *)&d_local, (void *)&d_local, (void *)&d_local);
 __addtf3(auVar1, (void *)&d_local, (void *)&d_local);
 __builtin_memcpy(&d_local, auVar1, sizeof(d_local));
 return d_local;
}



/* Function: process_bool @ 001009d8 */

_Bool process_bool(int x)

{
 _Bool _Var1;
 int x_local;
 
 if ((x < 1) || ((x & 1U) != 0)) {
 _Var1 = false;
 }
 else {
 _Var1 = true;
 }
 return _Var1;
}



/* Function: const_param @ 00100a18 */

int const_param(int *p)

{
 int *p_local;
 
 return *p + 10;
}



/* Function: volatile_access @ 00100a34 */

int volatile_access(int *p)

{
 int *p_local;
 int a;
 int b;
 
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00100a68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 byte bVar1;
 bool bVar2;
 short sVar3;
 uint uVar4;
 long lVar5;
 longlong lVar6;
 float fVar7;
 undefined1 auVar8 [16];
 int value;
 int vol_value;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00103660);
 bVar1 = process_char('A');
 printf("DT-L1-01 (process_char): %c\n",(ulong)bVar1);
 bVar1 = process_char('b');
 printf("DT-L1-01 (process_char): %c\n",(ulong)bVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar3);
 uVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",(ulong)uVar4);
 lVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",lVar5);
 lVar6 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n",lVar6);
 fVar7 = process_float(2.0);
 printf("DT-L1-06 (process_float): %.2f\n",fVar7);
 process_double(4.0);
 printf("DT-L1-07 (process_double): %.2f\n");
 process_ld(*(long double *)&_DAT_00103e10);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 bVar2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)bVar2);
 bVar2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)bVar2);
 bVar2 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)bVar2);
 value = 5;
 uVar4 = const_param(&value);
 printf("DT-L1-10 (const_param): %d\n",(ulong)uVar4);
 vol_value = 10;
 uVar4 = volatile_access(&vol_value);
 printf("DT-L1-11 (volatile_access): %d\n",(ulong)uVar4);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: array_1d_stack @ 00100c38 */

int array_1d_stack(int *arr,int n)

{
 int n_local;
 int *arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + arr[i];
 }
 return sum;
}



/* Function: array_string @ 00100c98 */

int array_string(char *str)

{
 char *str_local;
 int len;
 
 for (len = 0; str[len] != '\0'; len = len + 1) {
 }
 return len;
}



/* Function: array_2d_stack @ 00100cd8 */

int array_2d_stack(int (*arr) [10])

{
 int (*arr_local) [10];
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < 10; i = i + 1) {
 sum = sum + arr[i][i];
 }
 return sum;
}



/* Function: array_3d @ 00100d44 */

int array_3d(int (*arr) [5] [5])

{
 int (*arr_local) [5] [5];
 int sum;
 int i;
 int j;
 int k;
 
 sum = 0;
 for (i = 0; i < 5; i = i + 1) {
 for (j = 0; j < 5; j = j + 1) {
 for (k = 0; k < 5; k = k + 1) {
 sum = sum + arr[i][j][k];
 }
 }
 }
 return sum;
}



/* Function: array_vla @ 00100e0c */

int array_vla(int n,int *arr)

{
 int *arr_local;
 int n_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + arr[i];
 }
 return sum;
}



/* Function: array_pointer @ 00100e6c */

int array_pointer(int (*arr) [10],int n)

{
 int n_local;
 int (*arr_local) [10];
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + arr[i][0];
 }
 return sum;
}



/* Function: pointer_array @ 00100edc */

int pointer_array(int **arr,int n)

{
 int n_local;
 int **arr_local;
 int sum;
 int i;
 int count;
 
 sum = 0;
 if (10 < n) {
 n = 10;
 }
 for (i = 0; i < n; i = i + 1) {
 if (arr[i] != (int *)0x0) {
 sum = sum + *arr[i];
 }
 }
 return sum;
}



/* Function: array_complex_index @ 00100f74 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 int y_local;
 int x_local;
 int h_local;
 int w_local;
 int *arr_local;
 
 if ((((x < 0) || (w <= x)) || (y < 0)) || (h <= y)) {
 iVar1 = -1;
 }
 else {
 iVar1 = arr[y * w + x];
 }
 return iVar1;
}



/* Function: array_oob @ 00100ffc */

int array_oob(int *arr,int n)

{
 int n_local;
 int *arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i <= n; i = i + 1) {
 sum = sum + arr[i];
 }
 return sum;
}



/* Function: test_array_types @ 0010105c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 long lVar1;
 uint uVar2;
 int iVar3;
 int a;
 int b;
 int c;
 int i;
 int j;
 int i_1;
 int j_1;
 int k;
 int i_2;
 int i_3;
 int vla_arr [3];
 int arr1 [5];
 int *ptr_arr [10];
 int flat [20];
 int arr2 [5] [10];
 int matrix [10] [10];
 int cube [5] [5] [5];
 char str [6];
 
 lVar1 = ___stack_chk_guard;
 puts(DAT_001037f0);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr1[3] = 4;
 arr1[4] = 5;
 uVar2 = array_1d_stack(arr1,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",(ulong)uVar2);
 strncpy(str,"hello",6);
 uVar2 = array_string(str);
 printf("ARR-L1-02 (array_string): %d\n",(ulong)uVar2);
 for (i = 0; i < 10; i = i + 1) {
 for (j = 0; j < 10; j = j + 1) {
 iVar3 = i;
 if (i != j) {
 iVar3 = 0;
 }
 matrix[i][j] = iVar3;
 }
 }
 uVar2 = array_2d_stack(matrix);
 printf("ARR-L1-03 (array_2d_stack): %d\n",(ulong)uVar2);
 for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
 for (j_1 = 0; j_1 < 5; j_1 = j_1 + 1) {
 for (k = 0; k < 5; k = k + 1) {
 cube[i_1][j_1][k] = 1;
 }
 }
 }
 uVar2 = array_3d(cube);
 printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar2);
 vla_arr[0] = 10;
 vla_arr[1] = 0x14;
 vla_arr[2] = 0x1e;
 uVar2 = array_vla(3,vla_arr);
 printf("ARR-L2-01 (array_vla): %d\n",(ulong)uVar2);
 for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
 arr2[i_2][0] = i_2 * 10;
 }
 uVar2 = array_pointer(arr2,5);
 printf("ARR-L2-02 (array_pointer): %d\n",(ulong)uVar2);
 a = 10;
 b = 0x14;
 c = 0x1e;
 ptr_arr[3] = (int *)0x0;
 ptr_arr[5] = (int *)0x0;
 ptr_arr[4] = (int *)0x0;
 ptr_arr[7] = (int *)0x0;
 ptr_arr[6] = (int *)0x0;
 ptr_arr[9] = (int *)0x0;
 ptr_arr[8] = (int *)0x0;
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 uVar2 = pointer_array(ptr_arr,3);
 printf("ARR-L2-03 (pointer_array): %d\n",(ulong)uVar2);
 for (i_3 = 0; i_3 < 0x14; i_3 = i_3 + 1) {
 flat[i_3] = i_3;
 }
 uVar2 = array_complex_index(flat,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)uVar2);
 if (lVar1 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: ptr_single @ 001013e8 */

int ptr_single(int *p)

{
 int *p_local;
 
 return *p + 10;
}



/* Function: ptr_double @ 00101404 */

int ptr_double(int **p)

{
 int **p_local;
 
 return **p + 5;
}



/* Function: ptr_triple @ 00101424 */

int ptr_triple(int ***p)

{
 int ***p_local;
 
 return ***p + 1;
}



/* Function: ptr_increment @ 00101448 */

int ptr_increment(int *p,int n)

{
 int n_local;
 int *p_local;
 int sum;
 int i;
 
 sum = 0;
 p_local = p;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + *p_local;
 p_local = p_local + 1;
 }
 return sum;
}



/* Function: ptr_offset @ 001014a8 */

int ptr_offset(int *p,int offset)

{
 int offset_local;
 int *p_local;
 
 return p[offset];
}



/* Function: ptr_diff @ 001014d0 */

int ptr_diff(int *p1,int *p2)

{
 int *p2_local;
 int *p1_local;
 
 return (int)((long)p1 - (long)p2 >> 2);
}



/* Function: ptr_void @ 001014f4 */

int ptr_void(void *p,int type)

{
 uint uVar1;
 int type_local;
 void *p_local;
 
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



/* Function: ptr_const @ 0010153c */

int ptr_const(int *p)

{
 int *p_local;
 
 return *p << 1;
}



/* Function: ptr_const_ptr @ 00101558 */

int ptr_const_ptr(int *p)

{
 int *p_local;
 
 *p = *p + 5;
 return *p;
}



/* Function: ptr_func_simple @ 00101584 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 int x_local;
 _func_int_int *f_local;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 001015a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 long lVar1;
 int iVar2;
 int *p_local;
 _func_int_int_ptr_char_ptr_ptr *f_local;
 char *args [2];
 
 lVar1 = ___stack_chk_guard;
 args[0] = "test";
 args[1] = (char *)0x0;
 iVar2 = (*f)(p,args);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: ptr_cast @ 00101620 */

int ptr_cast(void *p)

{
 void *p_local;
 int *int_ptr;
 char *char_ptr;
 int *back_ptr;
 
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00101650 */

void * opaque_handle_create(int size)

{
 int size_local;
 
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101664 */

int opaque_handle_op(void *handle)

{
 void *handle_local;
 
 return (int)handle << 1;
}



/* Function: complex_callback @ 0010167c */

int complex_callback(int *p,char **args)

{
 char **args_local;
 int *p_local;
 
 *p = *p + 10;
 return (int)(*args != (char *)0x0);
}



/* Function: test_pointer_types @ 001016b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 long lVar1;
 uint uVar2;
 char c7;
 int val1;
 int val2;
 int val3;
 int val7;
 int val8;
 int val9;
 int val11;
 int val12;
 int *ptr2;
 int *ptr3;
 int **pptr3;
 int **pptr2;
 int ***ppptr3;
 void *handle;
 int arr4 [5];
 int arr5 [5];
 int arr6 [5];
 
 lVar1 = ___stack_chk_guard;
 puts(DAT_00103950);
 val1 = 5;
 uVar2 = ptr_single(&val1);
 printf("PTR-L2-01 (ptr_single): %d\n",(ulong)uVar2);
 val2 = 10;
 ptr2 = &val2;
 pptr2 = &ptr2;
 uVar2 = ptr_double(pptr2);
 printf("PTR-L2-02 (ptr_double): %d\n",(ulong)uVar2);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 ppptr3 = &pptr3;
 uVar2 = ptr_triple(ppptr3);
 printf("PTR-L2-03 (ptr_triple): %d\n",(ulong)uVar2);
 arr4[0] = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 uVar2 = ptr_increment(arr4,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",(ulong)uVar2);
 arr5[0] = 10;
 arr5[1] = 0x14;
 arr5[2] = 0x1e;
 arr5[3] = 0x28;
 arr5[4] = 0x32;
 uVar2 = ptr_offset(arr5,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",(ulong)uVar2);
 arr6[0] = 0;
 arr6[1] = 10;
 arr6[2] = 0x14;
 arr6[3] = 0x1e;
 arr6[4] = 0x28;
 uVar2 = ptr_diff(arr6 + 4,arr6);
 printf("PTR-L2-06 (ptr_diff): %d\n",(ulong)uVar2);
 val7 = 0x2a;
 c7 = 'A';
 uVar2 = ptr_void(&val7,0);
 printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar2);
 uVar2 = ptr_void(&c7,1);
 printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar2);
 val8 = 10;
 uVar2 = ptr_const(&val8);
 printf("PTR-L2-08 (ptr_const): %d\n",(ulong)uVar2);
 val9 = 10;
 uVar2 = ptr_const_ptr(&val9);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",(ulong)uVar2);
 uVar2 = ptr_func_simple((_func_int_int *)double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",(ulong)uVar2);
 val11 = 5;
 uVar2 = ptr_func_complex((_func_int_int_ptr_char_ptr_ptr *)complex_callback,&val11);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",(ulong)uVar2);
 val12 = 0x12345678;
 uVar2 = ptr_cast(&val12);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",(ulong)uVar2);
 handle = opaque_handle_create(10);
 uVar2 = opaque_handle_op(handle);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",(ulong)uVar2);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return;
}



/* Function: struct_simple @ 00101968 */

int struct_simple(Point3D *p)

{
 Point3D *p_local;
 
 return p->x + p->y + p->z;
}



/* Function: struct_array @ 00101998 */

int struct_array(Point3D *pts,int n)

{
 int n_local;
 Point3D *pts_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + pts[i].x + pts[i].y + pts[i].z;
 }
 return sum;
}



/* Function: struct_nested @ 00101a58 */

int struct_nested(Rect *r)

{
 Rect *r_local;
 
 return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00101a7c */

int struct_deep(Widget *w)

{
 Widget *w_local;
 
 return (w->bounds).position.z + w->fill.r;
}



/* Function: struct_with_ptr @ 00101aa0 */

int struct_with_ptr(Node *node)

{
 int iVar1;
 Node *node_local;
 
 if (node->next == (Node *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = node->next->data;
 }
 return iVar1 + node->data;
}



/* Function: struct_bitfields @ 00101ae0 */

int struct_bitfields(Flags *f)

{
 Flags *f_local;
 
 return (*(uint *)f & 1) + (*(uint *)f >> 1 & 3) + (*(uint *)f >> 3 & 7) +
 (*(uint *)f >> 6 & 0x3ff);
}



/* Function: union_type @ 00101b40 */

int union_type(UnionData *u,int type)

{
 uint uVar1;
 int type_local;
 UnionData *u_local;
 
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



/* Function: union_array @ 00101b98 */

int union_array(UnionData *arr,int n)

{
 int n_local;
 UnionData *arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + arr[i].i;
 }
 return sum;
}



/* Function: enum_type @ 00101bf8 */

int enum_type(State s)

{
 State s_local;
 
 return s * 10;
}



/* Function: enum_switch @ 00101c1c */

int enum_switch(State s)

{
 State s_local;
 
 if (s == STATE_STOPPED) {
 return -1;
 }
 if (s < 4) {
 if (s == STATE_PAUSED) {
 return 0x32;
 }
 if (s < STATE_STOPPED) {
 if (s == STATE_IDLE) {
 return 0;
 }
 if (s == STATE_RUNNING) {
 return 100;
 }
 }
 }
 return -99;
}



/* Function: struct_func_ptr @ 00101c9c */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 Device *dev_local;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00101cc4 */

int linked_list(Node *head)

{
 Node *head_local;
 int sum;
 Node *current;
 
 sum = 0;
 for (current = head; current != (Node *)0x0; current = current->next) {
 sum = sum + current->data;
 }
 return sum;
}



/* Function: doubly_linked_list @ 00101d14 */

int doubly_linked_list(DNode *head)

{
 DNode *head_local;
 int sum;
 DNode *current;
 
 sum = 0;
 for (current = head; current != (DNode *)0x0; current = current->next) {
 sum = sum + current->data;
 }
 return sum;
}



/* Function: binary_tree_sum @ 00101d64 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 TreeNode *root_local;
 
 if (root == (TreeNode *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 iVar3 = binary_tree_sum(root->right);
 iVar3 = iVar1 + iVar2 + iVar3;
 }
 return iVar3;
}



/* Function: binary_tree @ 00101dbc */

int binary_tree(TreeNode *root)

{
 int iVar1;
 TreeNode *root_local;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00101dd8 */

int graph_traverse(Graph *g)

{
 Graph *g_local;
 int sum;
 int i;
 Edge *edge;
 
 sum = 0;
 for (i = 0; i < g->numVertices; i = i + 1) {
 for (edge = g->adjList[i]; edge != (Edge *)0x0; edge = edge->next) {
 sum = sum + edge->dest;
 }
 }
 return sum;
}



/* Function: test_composite_types @ 00101e58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 long lVar1;
 uint uVar2;
 Flags f;
 Point3D p1;
 Node node2;
 Node node1;
 Device dev;
 Edge e1;
 Rect r;
 TreeNode tree;
 Widget w;
 UnionData u;
 UnionData arr_u [3];
 Point3D pts [2];
 Node list [3];
 DNode dlist [2];
 Graph g;
 
 lVar1 = ___stack_chk_guard;
 puts(DAT_00103b58);
 p1.x = 1;
 p1.y = 2;
 p1.z = 3;
 uVar2 = struct_simple(&p1);
 printf("CMP-L2-01 (struct_simple): %d\n",(ulong)uVar2);
 pts[0].x = 1;
 pts[0].y = 1;
 pts[0].z = 1;
 pts[1].x = 2;
 pts[1].y = 2;
 pts[1].z = 2;
 uVar2 = struct_array(pts,2);
 printf("CMP-L2-02 (struct_array): %d\n",(ulong)uVar2);
 r.position.x = 5;
 r.position.y = 10;
 r.position.z = 0;
 r.size.width = 100;
 r.size.height = 200;
 uVar2 = struct_nested(&r);
 printf("CMP-L2-03 (struct_nested): %d\n",(ulong)uVar2);
 w.bounds.position.z = 3;
 w.bounds.size.width = 10;
 w.bounds.position.x = 1;
 w.bounds.position.y = 2;
 w.fill.g = 0;
 w.fill.b = 0;
 w.bounds.size.height = 0x14;
 w.fill.r = 0xff;
 w.stroke.b = 0xff;
 w.id = 0x2a;
 w.stroke.r = 0;
 w.stroke.g = 0;
 uVar2 = struct_deep(&w);
 printf("CMP-L2-04 (struct_deep): %d\n",(ulong)uVar2);
 node2.data = 0x14;
 node2.next = (Node *)0x0;
 node1.data = 10;
 node1.next = &node2;
 uVar2 = struct_with_ptr(&node1);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",(ulong)uVar2);
 union { Flags f; ulong u; } fu = { .f = f };
 fu.u = fu.u & 0xfff00000ffff0000 | 0x191d;
 f = fu.f;
 uVar2 = struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n",(ulong)uVar2);
 u.i = 0x12345678;
 uVar2 = union_type(&u,0);
 printf("CMP-L2-07 (union_type): %d\n",(ulong)uVar2);
 arr_u[0].i = 0xa;
 arr_u[1].i = 0x14;
 arr_u[2].i = 0x1e;
 uVar2 = union_array(arr_u,3);
 printf("CMP-L2-08 (union_array): %d\n",(ulong)uVar2);
 uVar2 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n",(ulong)uVar2);
 uVar2 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n",(ulong)uVar2);
 dev.data = 10;
 dev.process = process_int;
 uVar2 = struct_func_ptr(&dev);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",(ulong)uVar2);
 list[0].data = 10;
 list[0].next = list + 1;
 list[1].data = 0x14;
 list[1].next = list + 2;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 uVar2 = linked_list(list);
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar2);
 dlist[0].data = 10;
 dlist[0].prev = (DNode *)0x0;
 dlist[1].data = 0x14;
 dlist[1].next = (DNode *)0x0;
 dlist[1].prev = dlist;
 dlist[0].next = dlist + 1;
 uVar2 = doubly_linked_list(dlist);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar2);
 tree.data = 100;
 tree.left = (TreeNode *)0x0;
 tree.right = (TreeNode *)0x0;
 uVar2 = binary_tree(&tree);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
 e1.dest = 1;
 e1.next = (Edge *)0x0;
 g.adjList[1] = (Edge *)0x0;
 g.adjList[3] = (Edge *)0x0;
 g.adjList[2] = (Edge *)0x0;
 g.adjList[5] = (Edge *)0x0;
 g.adjList[4] = (Edge *)0x0;
 g.adjList[7] = (Edge *)0x0;
 g.adjList[6] = (Edge *)0x0;
 g.adjList[9] = (Edge *)0x0;
 g.adjList[8] = (Edge *)0x0;
 g.numVertices = 2;
 g._84_4_ = 0;
 g.adjList[0] = &e1;
 uVar2 = graph_traverse(&g);
 printf("CMP-L2-15 (graph_traverse): %d\n",(ulong)uVar2);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return;
}



/* Function: main @ 001021f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __addtf3 @ 00102220 */

void __addtf3(void *result, void *param_1, void *param_2)

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
 
 uVar11 = ((uint128_t *)param_2)->_8_8_;
 uVar29 = ((uint128_t *)param_2)->_0_8_;
 uVar28 = ((uint128_t *)param_1)->_8_8_;
 uVar26 = ((uint128_t *)param_1)->_0_8_;
 uVar13 = fpsr;
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
 goto LAB_00102540;
 }
 goto LAB_001027f4;
 }
 goto LAB_0010249c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00102658;
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
 goto LAB_00102658;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00102704;
 }
LAB_00102888:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_001023d4;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00102b10;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102888;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_00102cb8;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102d50;
 }
LAB_00102d7c:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102cc0:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00102704;
 }
LAB_00102b10:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102d7c;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102888;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102b10;
LAB_00102cb8:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102cc0;
 }
LAB_00102d50:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00102704;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_001024bc;
 }
 goto LAB_00102a88;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a88;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_0010236c;
 }
LAB_00102358:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010235c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_0010236c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102d60:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_001025ac;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_00102cfc;
LAB_00102bc8:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_001025ac;
 }
LAB_00102a24:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00102a44;
 }
 goto LAB_00102568;
 }
LAB_00102ab4:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_00102658;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102888;
 goto LAB_00102534;
 }
 goto LAB_00102430;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_0010249c;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_001027f4;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00102540:
 uVar20 = 0x7fff;
 goto LAB_00102548;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_001026e4;
LAB_00102430:
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
LAB_00102658:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_0010249c;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_0010236c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00102ab4;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102d60;
 if (uVar10 != 0x800000) goto LAB_00102a24;
 if (lVar18 != 0) goto LAB_00102bc8;
LAB_00102cfc:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_0010239c:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_001023b8;
 }
LAB_00102568:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00102584;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00102584:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_001024bc;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_001025ac:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_001025c0;
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
 goto LAB_001022f4;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_001022f4;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_001024bc;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a88;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_0010236c;
 }
 goto LAB_00102b60;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010235c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_00102b60:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_001024bc;
 }
LAB_00102a88:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00102a90;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_001029c8;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00102998;
 }
LAB_00102c10:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_00102c8c:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00102704;
 }
LAB_00102c28:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00102704;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00102998;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00102c10;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102998:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00102704;
 }
 goto LAB_00102c28;
 }
LAB_001029c8:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102c8c;
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
 goto LAB_00102540;
 }
 goto LAB_001027f4;
 }
 goto LAB_0010249c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_001022ec;
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
 goto LAB_001022ec;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102888;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00102704:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_001023b8;
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
 goto LAB_001022ec;
 }
 goto LAB_00102298;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102534:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00102540;
 }
LAB_001027f4:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00102704;
 }
LAB_0010249c:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x001024ac;
LAB_0010236c:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00102a90:
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
joined_r0x00102a44:
 if (lVar18 == 0) {
LAB_00102694:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00102694;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_00102398;
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
LAB_00102398:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_0010239c;
LAB_00102548:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00102704;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_00102298:
 if (uVar20 == 0x7fff) {
LAB_001026e4:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102888;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00102704;
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
LAB_001022ec:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_0010249c;
LAB_001022f4:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00102300;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00102300:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_0010249c;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00102358;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010235c:
 uVar12 = (uint)lVar9;
joined_r0x001024ac:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_0010236c;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_001024bc:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_001023b8:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_001023d4:
 ((uint128_t *)result)->_8_8_ = uVar10;
 ((uint128_t *)result)->_0_8_ = uVar22;
 return;
 }
 
LAB_001025c0:
 __sfp_handle_exceptions(uVar11);
 ((uint128_t *)result)->_8_8_ = uVar10;
 ((uint128_t *)result)->_0_8_ = uVar22;
 return;
}



/* Function: __multf3 @ 00102dc0 */

void __multf3(void *result, void *param_1, void *param_2)

{
 ulong uVar1;
 undefined1 auVar2 [16];
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
 undefined1 auVar31 [16];
 
 uVar21 = ((uint128_t *)param_2)->_8_8_;
 uVar17 = ((uint128_t *)param_2)->_0_8_;
 uVar11 = ((uint128_t *)param_1)->_8_8_;
 uVar15 = ((uint128_t *)param_1)->_0_8_;
 uVar18 = fpsr;
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
 if (uVar11 < 0x3d) goto LAB_00103218;
 uVar11 = 0;
 uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 }
 else {
 lVar13 = LZCOUNT(uVar19);
 iVar8 = (int)lVar13 + -0xf;
LAB_00103218:
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
 uVar4 = ((uint32_t *)param_1)[3];
 uVar5 = ((uint32_t *)param_2)[3];
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
 if (uVar21 < 0x3d) goto LAB_001031bc;
 uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 uVar17 = 0;
 }
 else {
 lVar23 = LZCOUNT(uVar15);
 iVar8 = (int)lVar23 + -0xf;
LAB_001031bc:
 uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 lVar20 = (lVar13 - lVar23) + -0x3fef;
 lVar23 = (lVar13 - lVar23) + -0x3fee;
 lVar12 = 0;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 if (uVar7 < 0xb) {
LAB_00102ecc:
 uVar15 = uVar21;
 if (2 < uVar7) {
LAB_00102f48:
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
 goto LAB_00102efc;
 }
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 lVar9 = lVar12;
 if ((uVar7 & 0x88) == 0) goto LAB_00102fec;
 }
LAB_00102f8c:
 lVar12 = lVar9;
 uVar14 = uVar26;
 uVar17 = uVar25;
 uVar22 = uVar14;
 if (lVar12 == 2) {
LAB_00102fdc:
 uVar4 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 goto LAB_00102efc;
 }
 goto LAB_00102fa8;
 }
 if (uVar7 - 1 < 2) {
 if (lVar12 == 2) goto LAB_00102fdc;
 goto LAB_00102ee8;
 }
LAB_00102fec:
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
LAB_0010314c:
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
 if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00103334;
 if ((uVar15 >> 0x33 & 1) == 0) goto LAB_0010347c;
LAB_001034e8:
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
LAB_0010347c:
 uVar17 = 0;
 uVar4 = 0;
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_00102efc;
 uVar6 = (ulong)(uVar5 | 8);
 }
 else {
 uVar15 = 0;
LAB_00103334:
 uVar18 = uVar18 & 0xc00000;
 if (uVar18 == 0x400000) {
 if (uVar22 == 0) {
LAB_001034dc:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar15 = uVar15 + 1;
 }
 }
 }
 else if (uVar18 == 0x800000) {
 if (uVar22 != 0) goto LAB_001034dc;
 }
 else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar15 = uVar15 + 1;
 }
 if ((uVar15 >> 0x33 & 1) != 0) goto LAB_001034e8;
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
LAB_001034cc:
 bVar3 = 0xfffffffffffffff7 < uVar17;
 uVar17 = uVar17 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar22 != 0) goto LAB_001034cc;
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
 goto LAB_00102efc;
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
 goto LAB_001033b4;
 }
LAB_00102e80:
 if (uVar7 != 0xb) {
LAB_00102e88:
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar10;
 lVar9 = lVar24;
 goto LAB_00102f8c;
 }
LAB_00102fa8:
 uVar22 = uVar14;
 if (lVar12 == 3) {
 uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 else {
LAB_00102ee8:
 lVar20 = lVar23;
 if (lVar12 != 1) goto LAB_0010314c;
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
 if (10 < uVar7) goto LAB_00102e80;
 goto LAB_00102ecc;
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
 goto LAB_00103524;
 }
 goto LAB_00102f48;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 2;
 lVar23 = lVar13 + 0x8000;
 uVar17 = 0;
 if (uVar7 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_00102ecc;
 }
 lVar9 = 2;
 uVar15 = 0;
LAB_00103524:
 lVar23 = lVar13 + 0x8000;
 if (uVar7 != 0xf) {
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 if (uVar7 != 0xb) goto LAB_00102e88;
 goto LAB_00102f8c;
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
LAB_00102efc:
 uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
 if ((int)uVar6 == 0) {
 ((uint128_t *)result)->_8_8_ = uVar15;
 ((uint128_t *)result)->_0_8_ = uVar11;
 return;
 }
 
LAB_001033b4:
 __sfp_handle_exceptions(uVar6);
 ((uint128_t *)result)->_8_8_ = uVar15;
 ((uint128_t *)result)->_0_8_ = uVar11;
 return;
}



/* Function: __sfp_handle_exceptions @ 001035c0 */

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




/* Total functions decompiled: 69 */
