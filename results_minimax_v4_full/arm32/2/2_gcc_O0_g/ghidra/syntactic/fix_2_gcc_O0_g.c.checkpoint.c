/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/2/2_gcc_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */


/* Type definitions */
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Basic types */
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef long double longdouble;

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int*, char**);

/* Struct definitions */
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
    struct DNode *prev;
    struct DNode *next;
} DNode;

typedef struct Point2D {
    int x;
    int y;
    int z;
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
    unsigned char r;
    unsigned char g;
    unsigned char b;
} Color;

typedef struct WidgetStyle {
    Color fill;
    Color stroke;
} WidgetStyle;

typedef struct Widget {
    struct {
        Point2D position;
        Size size;
    } bounds;
    WidgetStyle style;
    int id;
} Widget;

typedef struct Flags {
    unsigned int _0_4_;
    unsigned int _4_4_;
} Flags;

typedef struct UnionData {
    int i;
    unsigned char bytes[4];
} UnionData;

typedef struct Device {
    int data;
    int (*process)(int);
} Device;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct Graph {
    int numVertices;
    Edge *adjList[10];
} Graph;

/* Enum definition */
typedef enum {
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

/* Helper macros */
#define CONCAT44(a,b) (((uint)(a) << 32) | (uint)(b))
#define SUB84(x, y) (x)
#define SBORROW4(a,b) (((int)(a) < (int)(b)) ? 1 : 0)
#define CARRY4(a,b) (((uint)(a) + (uint)(b)) < (uint)(a) ? 1 : 0)
#define LZCOUNT(x) (__builtin_clz(x))
#define SUB41(x,y) ((x) < (y))
#define SCARRY4(a,b) (((((uint)(a) ^ (uint)(b)) | ((uint)(a) ^ ((uint)(a) + (uint)(b)))) & 0x80000000) >> 31)

/* External function declarations - ARM soft-float ABI */
/* Note: These are defined in this file, not external */
float __mulsf3(uint, uint, uint, uint);
uint __addsf3(uint, uint, undefined4, uint);
ulonglong __aeabi_ddiv(uint, uint, uint, uint);
ulonglong __aeabi_dadd(uint, uint, uint, uint);
ulonglong __muldf3(uint, uint, uint, uint);
ulonglong __extendsfdf2(uint, undefined4, undefined4, uint);
uint __fixsfsi(uint);

/* Helper function declarations for double precision math */
extern ulonglong FUN_00012614(uint param_1, uint param_2, uint param_3, uint param_4);
extern ulonglong FUN_00012dd8(uint param_1, uint param_2, uint param_3, uint param_4);


/* Function: double_value @ 00010520 */

int double_value(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: process_char @ 00010548 */

char process_char(char c)

{
 char c_local;
 
 if ((0x40 < (byte)c) && ((byte)c < 0x5b)) {
 c = c + ' ';
 }
 return c;
}



/* Function: process_short @ 00010598 */

short process_short(short a,short b)

{
 short b_local;
 short a_local;
 
 return a + b;
}



/* Function: process_int @ 000105e4 */

int process_int(int x)

{
 int x_local;
 
 return x * 2 + 1;
}



/* Function: process_long @ 00010610 */

long process_long(long x)

{
 long x_local;
 
 return x << 1;
}



/* Function: process_ll @ 00010638 */

longlong process_ll(longlong x)

{
 longlong x_local;
 
 return x * x;
}



/* Function: process_float @ 00010690 */

float process_float(float f)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 uVar1;
 float fVar2;
 float f_local;
 
 uVar1 = __mulsf3(in_r0,0x3fc00000,in_r0,in_r1);
 fVar2 = (float)__addsf3(uVar1,0x3f000000,in_r0,in_r1);
 return fVar2;
}



/* Function: process_double @ 000106cc */

double process_double(double d)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 uVar1;
 undefined4 extraout_s1;
 undefined8 uVar2;
 double d_local;
 
 uVar2 = __aeabi_ddiv((uint)d, (uint)((ulonglong)d >> 32), (uint)(longlong)0x40000000, 0);
 uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x9999999a,0x3fb99999);
 return (double)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_ld @ 00010730 */

longdouble process_ld(longdouble d)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 uVar1;
 undefined4 extraout_s1;
 undefined8 uVar2;
 longdouble d_local;
 
 uVar2 = __muldf3(SUB84(d,0), in_r0, in_r1, 0);
 uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x3ff00000);
 return (longdouble)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_bool @ 00010790 */

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



/* Function: const_param @ 000107e0 */

int const_param(int *p)

{
 int *p_local;
 
 return *p + 10;
}



/* Function: volatile_access @ 0001080c */

int volatile_access(int *p)

{
 int *p_local;
 int a;
 int b;
 
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00010850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 char cVar1;
 _Bool _Var2;
 short sVar3;
 int iVar4;
 long lVar5;
 undefined4 extraout_r0;
 undefined4 uVar6;
 float f;
 double d;
 longdouble d_00;
 longlong lVar7;
 undefined8 uVar8;
 int value;
 int vol_value;
 int local_c;
 
 local_c = 0;
 puts("Data Types Test");
 cVar1 = process_char('A');
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 cVar1 = process_char('b');
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(int)sVar3);
 iVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",iVar4);
 lVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",lVar5);
 lVar7 = process_ll(100);
 uVar6 = (undefined4)((ulonglong)lVar7 >> 0x20);
 printf("DT-L1-05 (process_ll): %lld\n",uVar6,(int)lVar7,uVar6);
 f = process_float(f);
 uVar8 = __extendsfdf2(extraout_r0, extraout_r0, extraout_r0, 0);
 uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
 printf("DT-L1-06 (process_float): %.2f\n",uVar6,(int)uVar8,uVar6);
 process_double(d);
 printf("DT-L1-07 (process_double): %.2f\n");
 process_ld(d_00);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 _Var2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(uint)_Var2);
 _Var2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(uint)_Var2);
 _Var2 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n",(uint)_Var2);
 value = 5;
 iVar4 = const_param(&value);
 printf("DT-L1-10 (const_param): %d\n",iVar4);
 vol_value = 10;
 iVar4 = volatile_access(&vol_value);
 iVar4 = printf("DT-L1-11 (volatile_access): %d\n",iVar4);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar4);
 }
 return;
}



/* Function: array_1d_stack @ 00010a5c */

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



/* Function: array_string @ 00010ad4 */

int array_string(char *str)

{
 char *str_local;
 int len;
 
 for (len = 0; str[len] != '\0'; len = len + 1) {
 }
 return len;
}



/* Function: array_2d_stack @ 00010b28 */

int array_2d_stack(int (*arr) [10])

{
 int (*arr_local) [10];
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < 10; i = i + 1) {
 sum = sum + *(int *)((int)arr + i * 0x2c);
 }
 return sum;
}



/* Function: array_3d @ 00010bac */

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



/* Function: array_vla @ 00010c94 */

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



/* Function: array_pointer @ 00010d0c */

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



/* Function: pointer_array @ 00010d94 */

int pointer_array(int **arr,int n)

{
 int n_local;
 int **arr_local;
 int sum;
 int i;
 int count;
 
 sum = 0;
 if (9 < n) {
 n = 10;
 }
 for (i = 0; i < n; i = i + 1) {
 if (arr[i] != (int *)0x0) {
 sum = sum + *arr[i];
 }
 }
 return sum;
}



/* Function: array_complex_index @ 00010e40 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
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



/* Function: array_oob @ 00010ed0 */

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



/* Function: test_array_types @ 00010f48 */

/* WARNING: Removing unreachable block (ram,0x00011338) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
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
 
 puts("Array Types Test");
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr1[3] = 4;
 arr1[4] = 5;
 iVar1 = array_1d_stack(arr1,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",iVar1);
 str[0] = 'h';
 str[1] = 'e';
 str[2] = 'l';
 str[3] = 'l';
 str[4] = 'o';
 str[5] = '\0';
 iVar1 = array_string(str);
 printf("ARR-L1-02 (array_string): %d\n",iVar1);
 for (i = 0; i < 10; i = i + 1) {
 for (j = 0; j < 10; j = j + 1) {
 iVar1 = i;
 if (i != j) {
 iVar1 = 0;
 }
 matrix[i][j] = iVar1;
 }
 }
 iVar1 = array_2d_stack(matrix);
 printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
 for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
 for (j_1 = 0; j_1 < 5; j_1 = j_1 + 1) {
 for (k = 0; k < 5; k = k + 1) {
 cube[i_1][j_1][k] = 1;
 }
 }
 }
 iVar1 = array_3d(cube);
 printf("ARR-L1-04 (array_3d): %d\n",iVar1);
 vla_arr[0] = 10;
 vla_arr[1] = 0x14;
 vla_arr[2] = 0x1e;
 iVar1 = array_vla(3,vla_arr);
 printf("ARR-L2-01 (array_vla): %d\n",iVar1);
 for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
 arr2[i_2][0] = i_2 * 10;
 }
 iVar1 = array_pointer(arr2,5);
 printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
 a = 10;
 b = 0x14;
 c = 0x1e;
 memset(ptr_arr,0,0x28);
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 iVar1 = pointer_array(ptr_arr,3);
 printf("ARR-L2-03 (pointer_array): %d\n",iVar1);
 for (i_3 = 0; i_3 < 0x14; i_3 = i_3 + 1) {
 flat[i_3] = i_3;
 }
 iVar1 = array_complex_index(flat,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",iVar1);
 return;
}



/* Function: ptr_single @ 00011378 */

int ptr_single(int *p)

{
 int *p_local;
 
 return *p + 10;
}



/* Function: ptr_double @ 000113a4 */

int ptr_double(int **p)

{
 int **p_local;
 
 return **p + 5;
}



/* Function: ptr_triple @ 000113d4 */

int ptr_triple(int ***p)

{
 int ***p_local;
 
 return ***p + 1;
}



/* Function: ptr_increment @ 00011408 */

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



/* Function: ptr_offset @ 00011480 */

int ptr_offset(int *p,int offset)

{
 int offset_local;
 int *p_local;
 
 return p[offset];
}



/* Function: ptr_diff @ 000114b8 */

int ptr_diff(int *p1,int *p2)

{
 int *p2_local;
 int *p1_local;
 
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 000114ec */

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



/* Function: ptr_const @ 00011544 */

int ptr_const(int *p)

{
 int *p_local;
 
 return *p << 1;
}



/* Function: ptr_const_ptr @ 00011570 */

int ptr_const_ptr(int *p)

{
 int *p_local;
 
 *p = *p + 5;
 return *p;
}



/* Function: ptr_func_simple @ 000115ac */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 int x_local;
 _func_int_int *f_local;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 000115dc */

/* WARNING: Removing unreachable block (ram,0x00011640) */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 int *p_local;
 _func_int_int_ptr_char_ptr_ptr *f_local;
 char *args [2];
 
 args[0] = "test";
 args[1] = (char *)0x0;
 iVar1 = (*f)(p,args);
 return iVar1;
}



/* Function: ptr_cast @ 00011658 */

int ptr_cast(void *p)

{
 void *p_local;
 int *int_ptr;
 char *char_ptr;
 int *back_ptr;
 
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00011698 */

void * opaque_handle_create(int size)

{
 int size_local;
 
 return (void *)size;
}



/* Function: opaque_handle_op @ 000116bc */

int opaque_handle_op(void *handle)

{
 void *handle_local;
 
 return (int)handle << 1;
}



/* Function: complex_callback @ 000116e4 */

int complex_callback(int *p,char **args)

{
 char **args_local;
 int *p_local;
 
 *p = *p + 10;
 return (uint)(*args != (char *)0x0);
}



/* Function: test_pointer_types @ 00011734 */

/* WARNING: Removing unreachable block (ram,0x000119e0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 int iVar1;
 char c7;
 int val1;
 int val2;
 int *ptr2;
 int val3;
 int *ptr3;
 int **pptr3;
 int val7;
 int val8;
 int val9;
 int val11;
 int val12;
 int **pptr2;
 int ***ppptr3;
 void *handle;
 int arr4 [5];
 int arr5 [5];
 int arr6 [5];
 
 puts("Pointer Types Test");
 val1 = 5;
 iVar1 = ptr_single(&val1);
 printf("PTR-L2-01 (ptr_single): %d\n",iVar1);
 val2 = 10;
 ptr2 = &val2;
 pptr2 = &ptr2;
 iVar1 = ptr_double(pptr2);
 printf("PTR-L2-02 (ptr_double): %d\n",iVar1);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 ppptr3 = &pptr3;
 iVar1 = ptr_triple(ppptr3);
 printf("PTR-L2-03 (ptr_triple): %d\n",iVar1);
 arr4[0] = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 iVar1 = ptr_increment(arr4,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",iVar1);
 arr5[0] = 10;
 arr5[1] = 0x14;
 arr5[2] = 0x1e;
 arr5[3] = 0x28;
 arr5[4] = 0x32;
 iVar1 = ptr_offset(arr5,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",iVar1);
 arr6[0] = 0;
 arr6[1] = 10;
 arr6[2] = 0x14;
 arr6[3] = 0x1e;
 arr6[4] = 0x28;
 iVar1 = ptr_diff(arr6 + 4,arr6);
 printf("PTR-L2-06 (ptr_diff): %d\n",iVar1);
 val7 = 0x2a;
 c7 = 'A';
 iVar1 = ptr_void(&val7,0);
 printf("PTR-L2-07 (ptr_void): %d\n",iVar1);
 iVar1 = ptr_void(&c7,1);
 printf("PTR-L2-07 (ptr_void): %d\n",iVar1);
 val8 = 10;
 iVar1 = ptr_const(&val8);
 printf("PTR-L2-08 (ptr_const): %d\n",iVar1);
 val9 = 10;
 iVar1 = ptr_const_ptr(&val9);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",iVar1);
 iVar1 = ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",iVar1);
 val11 = 5;
 iVar1 = ptr_func_complex(complex_callback,&val11);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",iVar1);
 val12 = 0x12345678;
 iVar1 = ptr_cast(&val12);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",iVar1);
 handle = opaque_handle_create(10);
 iVar1 = opaque_handle_op(handle);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",iVar1);
 return;
}



/* Function: struct_simple @ 00011a40 */

int struct_simple(Point3D *p)

{
 Point3D *p_local;
 
 return p->x + p->y + p->z;
}



/* Function: struct_array @ 00011a80 */

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



/* Function: struct_nested @ 00011b58 */

int struct_nested(Rect *r)

{
 Rect *r_local;
 
 return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00011b8c */

int struct_deep(Widget *w)

{
 Widget *w_local;
 
 return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00011bc0 */

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



/* Function: struct_bitfields @ 00011c10 */

int struct_bitfields(Flags *f)

{
 Flags *f_local;
 
 return (*(byte *)f & 1) + (*(byte *)f >> 1 & 3) + (*(byte *)f >> 3 & 7) +
 (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00011c8c */

int union_type(UnionData *u,int type)

{
 uint uVar1;
 int type_local;
 UnionData *u_local;
 
 if (type == 0) {
 uVar1 = u->i;
 }
 else if (type == 1) {
 uVar1 = __fixsfsi(u->i);
 }
 else {
 uVar1 = (uint)(byte)u->bytes[0];
 }
 return uVar1;
}



/* Function: union_array @ 00011cf0 */

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



/* Function: enum_type @ 00011d68 */

int enum_type(State s)

{
 State s_local;
 
 return s * 10;
}



/* Function: enum_switch @ 00011d9c */

int enum_switch(State s)

{
 int iVar1;
 State s_local;
 
 switch(s) {
 case STATE_IDLE:
 iVar1 = 0;
 break;
 case STATE_RUNNING:
 iVar1 = 100;
 break;
 case STATE_PAUSED:
 iVar1 = 0x32;
 break;
 case STATE_STOPPED:
 iVar1 = -1;
 break;
 default:
 iVar1 = -99;
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011e00 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 Device *dev_local;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011e38 */

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



/* Function: doubly_linked_list @ 00011e9c */

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



/* Function: binary_tree_sum @ 00011f00 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 TreeNode *root_local;
 
 if (root == (TreeNode *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar3 = root->data;
 iVar1 = binary_tree_sum(root->left);
 iVar2 = binary_tree_sum(root->right);
 iVar2 = iVar3 + iVar1 + iVar2;
 }
 return iVar2;
}



/* Function: binary_tree @ 00011f68 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 TreeNode *root_local;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00011f90 */

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



/* Function: test_composite_types @ 00012028 */

/* WARNING: Removing unreachable block (ram,0x000123a0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int iVar1;
 Node node2;
 Node node1;
 Flags f;
 Device dev;
 Edge e1;
 Point3D p1;
 TreeNode tree;
 Rect r;
 Widget w;
 UnionData u;
 UnionData arr_u [3];
 Point3D pts [2];
 Node list [3];
 DNode dlist [2];
 Graph g;
 
 puts("Composite Types Test");
 p1.x = 1;
 p1.y = 2;
 p1.z = 3;
 iVar1 = struct_simple(&p1);
 printf("CMP-L2-01 (struct_simple): %d\n",iVar1);
 pts[0].x = 1;
 pts[0].y = 1;
 pts[0].z = 1;
 pts[1].x = 2;
 pts[1].y = 2;
 pts[1].z = 2;
 iVar1 = struct_array(pts,2);
 printf("CMP-L2-02 (struct_array): %d\n",iVar1);
 r.position.x = 5;
 r.position.y = 10;
 r.position.z = 0;
 r.size.width = 100;
 r.size.height = 200;
 iVar1 = struct_nested(&r);
 printf("CMP-L2-03 (struct_nested): %d\n",iVar1);
 w.bounds.position.x = 1;
 w.bounds.position.y = 2;
 w.bounds.position.z = 3;
 w.bounds.size.width = 10;
 w.bounds.size.height = 0x14;
 w.style.fill.r = 0xff;
 w.style.fill.g = 0;
 w.style.fill.b = 0;
 w.style.stroke.r = 0;
 w.style.stroke.g = 0;
 w.style.stroke.b = 0xff;
 w.id = 0x2a;
 iVar1 = struct_deep(&w);
 printf("CMP-L2-04 (struct_deep): %d\n",iVar1);
 node2.data = 0x14;
 node2.next = (Node *)0x0;
 node1.data = 10;
 node1.next = &node2;
 iVar1 = struct_with_ptr(&node1);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",iVar1);
 f._0_4_ = 0x191d;
 f._4_4_ = 0;
 iVar1 = struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n",iVar1);
 u.i = 0x12345678;
 iVar1 = union_type(&u,0);
 printf("CMP-L2-07 (union_type): %d\n",iVar1);
 arr_u[0].i = 10;
 arr_u[1].i = 0x14;
 arr_u[2].i = 0x1e;
 iVar1 = union_array(arr_u,3);
 printf("CMP-L2-08 (union_array): %d\n",iVar1);
 iVar1 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n",iVar1);
 iVar1 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n",iVar1);
 dev.data = 10;
 dev.process = process_int;
 iVar1 = struct_func_ptr(&dev);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",iVar1);
 list[0].data = 10;
 list[0].next = list + 1;
 list[1].data = 0x14;
 list[1].next = list + 2;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 iVar1 = linked_list(list);
 printf("CMP-L2-12 (linked_list): %d\n",iVar1);
 dlist[0].data = 10;
 dlist[0].prev = (DNode *)0x0;
 dlist[1].data = 0x14;
 dlist[1].next = (DNode *)0x0;
 dlist[1].prev = dlist;
 dlist[0].next = dlist + 1;
 iVar1 = doubly_linked_list(dlist);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar1);
 tree.data = 100;
 tree.left = (TreeNode *)0x0;
 tree.right = (TreeNode *)0x0;
 iVar1 = binary_tree(&tree);
 printf("CMP-L2-14 (binary_tree): %d\n",iVar1);
 e1.dest = 1;
 e1.next = (Edge *)0x0;
 memset(&g,0,0x2c);
 g.numVertices = 2;
 g.adjList[0] = &e1;
 iVar1 = graph_traverse(&g);
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar1);
 return;
}



/* Function: main @ 00012410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: FUN_00012434 @ 00012434 */

ulonglong FUN_00012434(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
 longlong lVar1;
 ulonglong uVar2;
 byte bVar3;
 uint uVar4;
 uint extraout_r2;
 uint extraout_r3;
 uint uVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 uint unaff_r5;
 uint uVar9;
 uint uVar10;
 uint extraout_r12;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 ulonglong uVar14;
 
 uVar14 = CONCAT44(param_2,param_1);
 uVar10 = 0x7ff;
 uVar6 = param_2 >> 0x14 & 0x7ff;
 bVar11 = uVar6 == 0;
 if (!bVar11) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar11 = unaff_r5 == 0;
 }
 if (!bVar11) {
 bVar11 = uVar6 == 0x7ff;
 }
 if (!bVar11) {
 bVar11 = unaff_r5 == 0x7ff;
 }
 if (bVar11) {
 uVar14 = FUN_00012614(param_1, param_2, param_3, param_4);
 param_3 = extraout_r2;
 param_4 = extraout_r3;
 uVar10 = extraout_r12;
 }
 uVar4 = (uint)(uVar14 >> 0x20);
 iVar7 = uVar6 + unaff_r5;
 uVar9 = uVar4 ^ param_4;
 uVar4 = uVar4 & ~(uVar10 << 0x15);
 param_4 = param_4 & ~(uVar10 << 0x15);
 uVar6 = uVar4 | 0x100000;
 uVar5 = param_4 | 0x100000;
 if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
 param_3 = (uint)uVar14 | param_3;
 uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
 uVar6 = uVar10 >> 1;
 bVar13 = SBORROW4(iVar7,uVar6);
 uVar8 = iVar7 - uVar6;
 bVar11 = uVar8 == 0;
 uVar4 = uVar8;
 if (!bVar11 && (int)uVar6 <= iVar7) {
 bVar13 = SBORROW4(uVar10,uVar8);
 uVar4 = uVar10 - uVar8;
 bVar11 = uVar10 == uVar8;
 }
 if (!bVar11 && (int)uVar4 < 0 == bVar13) {
 return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
 }
 uVar5 = uVar5 | 0x100000;
 uVar10 = 0;
 bVar13 = SBORROW4(uVar8,1);
 uVar8 = uVar8 - 1;
 bVar11 = uVar8 == 0;
 uVar6 = uVar8;
 }
 else {
 uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
 uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
 (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
 uVar4 = (uint)uVar14;
 lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
 uVar10 = (uint)lVar1;
 uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
 if ((int)uVar2 != 0) {
 uVar4 = uVar4 | 1;
 }
 uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
 if (uVar6 < 0x200) {
 bVar3 = (byte)(uVar4 >> 0x1f);
 uVar4 = uVar4 << 1;
 lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
 uVar10 * 2 + (uint)bVar3);
 }
 uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
 param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
 uVar10 = uVar4 * 0x800;
 bVar12 = 0xfc < uVar8;
 bVar13 = SBORROW4(uVar8,0xfd);
 uVar9 = uVar8 - 0xfd;
 bVar11 = uVar9 == 0;
 uVar6 = uVar9;
 if (bVar12 && !bVar11) {
 bVar12 = 0x6ff < uVar9;
 bVar13 = SBORROW4(uVar9,0x700);
 uVar6 = uVar8 - 0x7fd;
 bVar11 = uVar9 == 0x700;
 }
 if (!bVar12 || bVar11) {
 bVar11 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
 }
 return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
 );
 }
 }
 if (!bVar11 && (int)uVar6 < 0 == bVar13) {
 return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 if (-0x36 < (int)uVar8) {
 uVar6 = -uVar8;
 uVar4 = uVar6 - 0x20;
 if (0x1f < (int)uVar6) {
 uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
 uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
 ((int)uVar9 >> 0x1f);
 if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
 uVar6 = uVar6 & ~(uVar9 >> 0x1f);
 }
 return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
 }
 if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
 uVar4 = 0xc - (uVar6 - 0x14);
 uVar6 = param_3 << (uVar4 & 0xff);
 uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
 uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
 if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar6 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
 }
 uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
 uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
 uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
 if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar4 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
 (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
 }
 return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



/* Function: FUN_00012614 @ 00012614 */
ulonglong FUN_00012614(uint param_1, uint param_2, uint param_3, uint param_4)

{
 bool bVar1;
 int iVar2;
 uint uVar3;
 uint unaff_r4;
 uint uVar4;
 uint uVar5;
 uint in_r12;
 
 in_r12 = param_4 >> 0x14 & 0x7ff;
 unaff_r4 = param_2 >> 0x14 & 0x7ff;
 uVar4 = in_r12 & (param_4 >> 0x14);
 if (unaff_r4 != in_r12 && uVar4 != in_r12) {
 if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
 {
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 if (unaff_r4 == 0) {
 uVar5 = param_2 & 0x80000000;
 do {
 iVar2 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar2;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar5;
 if (uVar4 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar2 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar2;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 bVar1 = (param_2 & 0x7fffffff) != 0;
 uVar5 = param_4;
 iVar2 = param_3;
 if (param_1 != 0 || bVar1) {
 uVar5 = param_2;
 iVar2 = param_1;
 }
 uVar3 = uVar5;
 if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
 ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
 ((uVar4 != in_r12 ||
 (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
 return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



/* Function: __mulsf3 @ 000126a0 */

float __mulsf3(undefined4 param_1, uint param_2, undefined4 param_3, uint param_4)

{
 uint uVar1;
 longlong lVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int iVar6;
 int iVar7;
 uint uVar8;
 uint uVar9;
 bool bVar10;
 bool bVar11;
 
 uVar3 = param_1 >> 0x17 & 0xff;
 bVar10 = uVar3 == 0;
 if (!bVar10) {
 param_4 = param_2 >> 0x17 & 0xff;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = uVar3 == 0xff;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff;
 }
 if (bVar10) {
 param_4 = param_2 >> 0x17 & 0xff;
 if (uVar3 == 0xff || param_4 == 0xff) {
 uVar9 = param_2;
 if (param_1 != 0 && param_1 != 0x80000000) {
 uVar9 = param_1;
 }
 uVar5 = uVar9;
 if (((((param_1 == 0 || param_1 == 0x80000000) || param_2 == 0) || param_2 == 0x80000000) ||
 ((uVar3 == 0xff && ((uVar9 & 0x7fffff) != 0)))) ||
 ((param_4 == 0xff && (uVar5 = param_2, (param_2 & 0x7fffff) != 0)))) {
 return uVar5 | 0x7fc00000;
 }
 uVar9 = uVar9 ^ param_2;
 goto LAB_0001281c;
 }
 if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
 return (param_1 ^ param_2) & 0x80000000;
 }
 bVar10 = uVar3 == 0;
 uVar9 = param_1 & 0x80000000;
 while( true ) {
 if (bVar10) {
 param_1 = param_1 << 1;
 bVar10 = (param_1 & 0x800000) == 0;
 }
 if (!bVar10) break;
 uVar3 = uVar3 - 1;
 }
 param_1 = param_1 | uVar9;
 bVar10 = param_4 == 0;
 uVar9 = param_2 & 0x80000000;
 while( true ) {
 if (bVar10) {
 param_2 = param_2 << 1;
 bVar10 = (param_2 & 0x800000) == 0;
 }
 if (!bVar10) break;
 param_4 = param_4 - 1;
 }
 param_2 = param_2 | uVar9;
 }
 iVar4 = uVar3 + param_4;
 uVar9 = param_1 ^ param_2;
 uVar3 = param_1 << 9;
 bVar10 = uVar3 == 0;
 if (!bVar10) {
 param_2 = param_2 << 9;
 bVar10 = param_2 == 0;
 }
 if (bVar10) {
 if (uVar3 == 0) {
 param_2 = param_2 << 9;
 }
 uVar9 = uVar9 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
 bVar11 = SBORROW4(iVar4,0x7f);
 iVar6 = iVar4 + -0x7f;
 bVar10 = iVar6 == 0;
 iVar7 = iVar6;
 if (!bVar10 && 0x7e < iVar4) {
 bVar11 = SBORROW4(0xff,iVar6);
 iVar7 = -iVar6 + 0xff;
 bVar10 = -iVar6 == -0xff;
 }
 if (!bVar10 && iVar7 < 0 == bVar11) {
 return uVar9 | iVar6 * 0x800000;
 }
 uVar9 = uVar9 | 0x800000;
 uVar8 = 0;
 bVar11 = SBORROW4(iVar6,1);
 uVar5 = iVar4 - 0x80;
 bVar10 = uVar5 == 0;
 uVar3 = uVar5;
 }
 else {
 lVar2 = (ulonglong)(param_2 >> 5 | 0x8000000) * (ulonglong)(uVar3 >> 5 | 0x8000000);
 bVar10 = (uint)((ulonglong)lVar2 >> 0x20) < 0x800000;
 if (bVar10) {
 lVar2 = lVar2 * 2;
 }
 uVar8 = (uint)lVar2;
 uVar9 = uVar9 & 0x80000000 | (uint)((ulonglong)lVar2 >> 0x20);
 uVar5 = iVar4 - (bVar10 + 0x7f);
 bVar11 = SBORROW4(uVar5,0xfd);
 bVar10 = uVar5 == 0xfd;
 uVar3 = uVar5 - 0xfd;
 if (uVar5 < 0xfe) {
 uVar3 = uVar9 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar8);
 if (uVar8 == 0x80000000) {
 uVar3 = uVar3 & 0xfffffffe;
 }
 return uVar3;
 }
 }
 if (bVar10 || (int)uVar3 < 0 != bVar11) {
 if (-0x19 < (int)uVar5) {
 uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
 uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
 uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
 if (uVar8 == 0 && (uVar3 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar3 >> 0x1f);
 }
 return uVar9;
 }
 return uVar9 & 0x80000000;
 }
LAB_0001281c:
 return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 00012838 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
 __aeabi_dadd(param_1,param_2 ^ 0x80000000,0,0);
 return;
}



/* Function: __subdf3 @ 00012840 */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 
 uVar8 = param_4 ^ 0x80000000;
 uVar11 = param_2 << 1;
 param_4 = param_4 << 1;
 iVar10 = (int)uVar11 >> 0x15;
 iVar1 = (int)param_4 >> 0x15;
 if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
 param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
 if (iVar10 == -1 || iVar1 == -1) {
 uVar11 = param_3;
 uVar12 = uVar8;
 if (iVar10 == -1) {
 uVar11 = param_1;
 uVar12 = param_2;
 }
 if (iVar10 != -1 || iVar1 != -1) {
 param_3 = uVar11;
 uVar8 = uVar12;
 }
 bVar14 = (uVar12 & 0xfffff) == 0;
 bVar15 = uVar11 == 0 && bVar14;
 if (uVar11 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar12 != uVar8) {
 uVar12 = uVar12 | 0x80000;
 }
 return CONCAT44(uVar12,uVar11);
 }
 if (uVar11 != param_4 || param_1 != param_3) {
 if (uVar11 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = uVar8;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != uVar8) {
 return 0;
 }
 if (uVar11 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar11 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar11 = uVar11 | 0x80000000;
 }
 return CONCAT44(uVar11,param_1 << 1);
 }
 if (uVar11 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00012ab4:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar11 = uVar11 >> 0x15;
 param_4 = param_4 >> 0x15;
 uVar12 = param_4 - uVar11;
 bVar14 = uVar12 != 0;
 if (param_4 < uVar11) {
 uVar12 = -uVar12;
 }
 uVar6 = param_1;
 uVar9 = param_2;
 if (bVar14 && uVar11 <= param_4) {
 uVar11 = uVar11 + uVar12;
 uVar6 = param_3;
 uVar9 = uVar8;
 param_3 = param_1;
 uVar8 = param_2;
 }
 if (0x36 < uVar12) {
 return CONCAT44(uVar9,uVar6);
 }
 uVar5 = uVar9 & 0xfffff | 0x100000;
 if ((uVar9 & 0x80000000) != 0) {
 bVar14 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar5 = -(uVar5 + bVar14);
 }
 uVar9 = uVar8 & 0xfffff | 0x100000;
 if ((uVar8 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar9 = -(uVar9 + bVar14);
 }
 if (uVar11 == uVar12) {
 uVar9 = uVar9 ^ 0x100000;
 if (uVar11 == 0) {
 uVar5 = uVar5 ^ 0x100000;
 uVar11 = 1;
 }
 else {
 uVar12 = uVar12 - 1;
 }
 }
 uVar8 = -uVar12 + 0x20;
 if ((int)uVar12 < 0x21) {
 uVar13 = param_3 << (uVar8 & 0xff);
 param_3 = param_3 >> (uVar12 & 0xff);
 uVar4 = uVar6 + param_3;
 uVar7 = uVar9 << (uVar8 & 0xff);
 uVar8 = uVar4 + uVar7;
 uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
 (uint)CARRY4(uVar4,uVar7);
 }
 else {
 uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar13 = uVar13 | 2;
 }
 uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
 uVar8 = uVar6 + uVar12;
 uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
 }
 param_2 = uVar12 & 0x80000000;
 uVar6 = uVar12;
 if ((int)uVar12 < 0) {
 bVar14 = uVar13 == 0;
 uVar13 = -uVar13;
 uVar6 = -uVar8;
 uVar8 = -(uVar8 + !bVar14);
 uVar6 = -(uVar12 + (bVar14 <= uVar6));
 }
 if (0xfffff < uVar6) {
 uVar9 = uVar11 - 1;
 if (0x1fffff < uVar6) {
 bVar2 = (byte)uVar6;
 uVar6 = uVar6 >> 1;
 bVar3 = (byte)uVar8;
 uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
 uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
 uVar9 = uVar11;
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00012ab4;
 }
LAB_0001295c:
 bVar14 = 0x7fffffff < uVar13;
 if (uVar13 == 0x80000000) {
 bVar14 = (bool)((byte)uVar8 & 1);
 }
 return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
 uVar8 + bVar14);
 }
 bVar2 = (byte)(uVar13 >> 0x1f);
 uVar13 = uVar13 << 1;
 uVar9 = uVar8 * 2;
 bVar14 = CARRY4(uVar8,uVar8);
 uVar8 = uVar8 * 2 + (uint)bVar2;
 uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
 uVar9 = uVar11 - 2;
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_0001295c;
 uVar11 = uVar8;
 uVar5 = uVar6;
 if (uVar6 == 0) {
 uVar11 = 0;
 uVar5 = uVar8;
 }
 iVar10 = LZCOUNT(uVar5);
 if (uVar6 == 0) {
 iVar10 = iVar10 + 0x20;
 }
 uVar4 = iVar10 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar7 = iVar10 - 0x2b;
 bVar14 = uVar7 == 0;
 uVar8 = uVar7;
 uVar6 = uVar7;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar7,0xc);
 uVar6 = iVar10 - 0x1f;
 bVar14 = uVar6 == 0;
 uVar8 = uVar4;
 if (!bVar14 && -0xd < (int)uVar7) {
 uVar11 = uVar5 << (uVar4 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
 goto LAB_000129dc;
 }
 }
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar13 = 0x20 - uVar8;
 }
 uVar5 = uVar5 << (uVar8 & 0xff);
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
 uVar11 = uVar11 << (uVar8 & 0xff);
 }
LAB_000129dc:
 if ((int)uVar4 <= (int)uVar9) {
 return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
 }
 uVar8 = ~(uVar9 - uVar4);
 if ((int)uVar8 < 0x1f) {
 if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
 uVar8 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
 uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
 }
 return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* Function: __aeabi_ui2d @ 00012af0 */

ulonglong __aeabi_ui2d(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint in_r12;
 bool bVar7;
 bool bVar8;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = 0;
 iVar4 = LZCOUNT(param_1);
 uVar5 = iVar4 + 0x15;
 bVar8 = SBORROW4(uVar5,0x20);
 uVar2 = iVar4 - 0xb;
 bVar7 = uVar2 == 0;
 uVar6 = uVar2;
 uVar3 = uVar2;
 if (uVar5 < 0x20) {
 bVar8 = SCARRY4(uVar2,0xc);
 uVar3 = iVar4 + 1;
 bVar7 = uVar3 == 0;
 uVar6 = uVar5;
 if (!bVar7 && -0xd < (int)uVar2) {
 uVar1 = param_1 << uVar5;
 param_1 = param_1 >> (0xc - uVar3 & 0xff);
 goto LAB_000129dc;
 }
 }
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 in_r12 = 0x20 - uVar6;
 }
 param_1 = param_1 << (uVar6 & 0xff);
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 param_1 = param_1 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar6 & 0xff);
 }
LAB_000129dc:
 if (uVar5 < 0x433) {
 return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
 }
 uVar6 = ~(0x432 - uVar5);
 if (0x1e < (int)uVar6) {
 return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
 }
 if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
 uVar6 = uVar6 + 1;
 return CONCAT44(param_1 >> (uVar6 & 0xff),
 uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
 }
 uVar6 = 0xc - (uVar6 - 0x13);
 return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 00012b14 */

ulonglong __floatsidf(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint in_r12;
 bool bVar9;
 bool bVar10;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar8 = param_1 & 0x80000000;
 uVar2 = param_1;
 if ((int)uVar8 < 0) {
 uVar2 = -param_1;
 }
 uVar1 = 0;
 iVar5 = LZCOUNT(uVar2);
 uVar6 = iVar5 + 0x15;
 bVar10 = SBORROW4(uVar6,0x20);
 uVar3 = iVar5 - 0xb;
 bVar9 = uVar3 == 0;
 uVar7 = uVar3;
 uVar4 = uVar3;
 if (uVar6 < 0x20) {
 bVar10 = SCARRY4(uVar3,0xc);
 uVar4 = iVar5 + 1;
 bVar9 = uVar4 == 0;
 uVar7 = uVar6;
 if (!bVar9 && -0xd < (int)uVar3) {
 uVar1 = uVar2 << uVar6;
 uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
 goto LAB_000129dc;
 }
 }
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 in_r12 = 0x20 - uVar7;
 }
 uVar2 = uVar2 << (uVar7 & 0xff);
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar7 & 0xff);
 }
LAB_000129dc:
 if (uVar6 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
 }
 uVar7 = ~(0x432 - uVar6);
 if (0x1e < (int)uVar7) {
 return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
 uVar7 = uVar7 + 1;
 return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
 uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
 }
 uVar8 = 0xc - (uVar7 - 0x13);
 return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 00012b3c */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint in_r12;
 bool bVar10;
 bool bVar11;
 
 uVar2 = param_1 << 1;
 bVar10 = uVar2 == 0;
 uVar9 = param_1 & 0x80000000;
 uVar8 = (uint)((int)uVar2 >> 3) >> 1;
 uVar1 = uVar9 | uVar8;
 param_1 = param_1 << 0x1d;
 if (!bVar10) {
 param_4 = uVar2 & 0xff000000;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff000000;
 }
 if (!bVar10) {
 return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
 }
 if ((uVar2 & 0xffffff) == 0) {
 return CONCAT44(uVar1,param_1);
 }
 if (param_4 == 0xff000000) {
 return CONCAT44(uVar1,param_1) | 0x8000000000000;
 }
 uVar2 = param_1;
 uVar3 = uVar8;
 if (uVar8 == 0) {
 uVar2 = 0;
 uVar3 = param_1;
 }
 iVar6 = LZCOUNT(uVar3);
 if (uVar8 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar11 = SBORROW4(uVar7,0x20);
 uVar4 = iVar6 - 0x2b;
 bVar10 = uVar4 == 0;
 uVar8 = uVar4;
 uVar5 = uVar4;
 if ((int)uVar7 < 0x20) {
 bVar11 = SCARRY4(uVar4,0xc);
 uVar5 = iVar6 - 0x1f;
 bVar10 = uVar5 == 0;
 uVar8 = uVar7;
 if (!bVar10 && -0xd < (int)uVar4) {
 uVar2 = uVar3 << (uVar7 & 0xff);
 uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
 goto LAB_000129dc;
 }
 }
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 in_r12 = 0x20 - uVar8;
 }
 uVar3 = uVar3 << (uVar8 & 0xff);
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
 uVar2 = uVar2 << (uVar8 & 0xff);
 }
LAB_000129dc:
 if ((int)uVar7 < 0x381) {
 return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
 }
 uVar8 = ~(0x380 - uVar7);
 if (0x1e < (int)uVar8) {
 return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
 uVar8 = uVar8 + 1;
 return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
 uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
 }
 uVar9 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __floatundidf @ 00012b84 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 int iVar11;
 bool bVar12;
 bool bVar13;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 iVar11 = 0x432;
 uVar10 = 0;
 if (param_2 >> 0x16 != 0) {
 iVar11 = 3;
 if (param_2 >> 0x19 != 0) {
 iVar11 = 6;
 }
 if (param_2 >> 0x1c != 0) {
 iVar11 = iVar11 + 3;
 }
 iVar11 = iVar11 - ((int)param_2 >> 0x1f);
 uVar10 = param_1 << (0x20U - iVar11 & 0xff);
 param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
 param_2 = param_2 >> iVar11;
 iVar11 = iVar11 + 0x432;
 }
 if (0xfffff < param_2) {
 if (0x1fffff < param_2) {
 bVar1 = (byte)param_2;
 param_2 = param_2 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
 iVar11 = iVar11 + 1;
 if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
 return 0x7ff0000000000000;
 }
 }
LAB_0001295c:
 bVar12 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar12 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
 param_1 + bVar12);
 }
 bVar1 = (byte)(uVar10 >> 0x1f);
 uVar10 = uVar10 << 1;
 uVar3 = param_1 * 2;
 bVar12 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
 bVar12 = iVar11 != 0;
 iVar11 = iVar11 + -1;
 if (bVar12 && 0xfffff < param_2) goto LAB_0001295c;
 uVar3 = param_1;
 uVar4 = param_2;
 if (param_2 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar8 = LZCOUNT(uVar4);
 if (param_2 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar13 = SBORROW4(uVar9,0x20);
 uVar5 = iVar8 - 0x2b;
 bVar12 = uVar5 == 0;
 uVar7 = uVar5;
 uVar6 = uVar5;
 if ((int)uVar9 < 0x20) {
 bVar13 = SCARRY4(uVar5,0xc);
 uVar6 = iVar8 - 0x1f;
 bVar12 = uVar6 == 0;
 uVar7 = uVar9;
 if (!bVar12 && -0xd < (int)uVar5) {
 uVar3 = uVar4 << (uVar9 & 0xff);
 uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
 goto LAB_000129dc;
 }
 }
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar10 = 0x20 - uVar7;
 }
 uVar4 = uVar4 << (uVar7 & 0xff);
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
 uVar3 = uVar3 << (uVar7 & 0xff);
 }
LAB_000129dc:
 if ((int)uVar9 <= iVar11) {
 return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
 }
 uVar10 = ~(iVar11 - uVar9);
 if ((int)uVar10 < 0x1f) {
 if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
 uVar10 = 0xc - (uVar10 - 0x13);
 return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
 }
 uVar10 = uVar10 + 1;
 return CONCAT44(uVar4 >> (uVar10 & 0xff),
 uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
 }
 return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}



/* Function: __aeabi_l2d @ 00012b98 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 bool bVar13;
 bool bVar14;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 uVar11 = param_2 & 0x80000000;
 uVar4 = param_2;
 if ((int)uVar11 < 0) {
 bVar13 = param_1 != 0;
 param_1 = -param_1;
 uVar4 = -(param_2 + bVar13);
 }
 iVar10 = 0x432;
 uVar12 = 0;
 if (uVar4 >> 0x16 != 0) {
 iVar10 = 3;
 if (uVar4 >> 0x19 != 0) {
 iVar10 = 6;
 }
 if (uVar4 >> 0x1c != 0) {
 iVar10 = iVar10 + 3;
 }
 iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
 uVar12 = param_1 << (0x20U - iVar10 & 0xff);
 param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
 uVar4 = uVar4 >> iVar10;
 iVar10 = iVar10 + 0x432;
 }
 if (0xfffff < uVar4) {
 if (0x1fffff < uVar4) {
 bVar1 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
 iVar10 = iVar10 + 1;
 if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
 return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
 }
 }
LAB_0001295c:
 bVar13 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar13 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
 param_1 + bVar13);
 }
 bVar1 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar3 = param_1 * 2;
 bVar13 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
 bVar13 = iVar10 != 0;
 iVar10 = iVar10 + -1;
 if (bVar13 && 0xfffff < uVar4) goto LAB_0001295c;
 uVar3 = param_1;
 uVar5 = uVar4;
 if (uVar4 == 0) {
 uVar3 = 0;
 uVar5 = param_1;
 }
 iVar8 = LZCOUNT(uVar5);
 if (uVar4 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar14 = SBORROW4(uVar9,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar13 = uVar6 == 0;
 uVar4 = uVar6;
 uVar7 = uVar6;
 if ((int)uVar9 < 0x20) {
 bVar14 = SCARRY4(uVar6,0xc);
 uVar7 = iVar8 - 0x1f;
 bVar13 = uVar7 == 0;
 uVar4 = uVar9;
 if (!bVar13 && -0xd < (int)uVar6) {
 uVar3 = uVar5 << (uVar9 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
 goto LAB_000129dc;
 }
 }
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar12 = 0x20 - uVar4;
 }
 uVar5 = uVar5 << (uVar4 & 0xff);
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
 uVar3 = uVar3 << (uVar4 & 0xff);
 }
LAB_000129dc:
 if ((int)uVar9 <= iVar10) {
 return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
 }
 uVar4 = ~(iVar10 - uVar9);
 if ((int)uVar4 < 0x1f) {
 if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
 uVar4 = 0xc - (uVar4 - 0x13);
 return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar4 = uVar4 + 1;
 return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
 uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
 }
 return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __muldf3 @ 00012bf8 */

ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
 longlong lVar1;
 ulonglong uVar2;
 byte bVar3;
 uint uVar4;
 uint extraout_r2;
 uint extraout_r3;
 uint uVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 uint unaff_r5;
 uint uVar9;
 uint uVar10;
 uint extraout_r12;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 ulonglong uVar14;
 
 uVar14 = CONCAT44(param_2,param_1);
 uVar10 = 0x7ff;
 uVar6 = param_2 >> 0x14 & 0x7ff;
 bVar11 = uVar6 == 0;
 if (!bVar11) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar11 = unaff_r5 == 0;
 }
 if (!bVar11) {
 bVar11 = uVar6 == 0x7ff;
 }
 if (!bVar11) {
 bVar11 = unaff_r5 == 0x7ff;
 }
 if (bVar11) {
 uVar14 = FUN_00012dd8(param_1, param_2, param_3, param_4);
 param_3 = extraout_r2;
 param_4 = extraout_r3;
 uVar10 = extraout_r12;
 }
 uVar4 = (uint)(uVar14 >> 0x20);
 iVar7 = uVar6 + unaff_r5;
 uVar9 = uVar4 ^ param_4;
 uVar4 = uVar4 & ~(uVar10 << 0x15);
 param_4 = param_4 & ~(uVar10 << 0x15);
 uVar6 = uVar4 | 0x100000;
 uVar5 = param_4 | 0x100000;
 if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
 param_3 = (uint)uVar14 | param_3;
 uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
 uVar6 = uVar10 >> 1;
 bVar13 = SBORROW4(iVar7,uVar6);
 uVar8 = iVar7 - uVar6;
 bVar11 = uVar8 == 0;
 uVar4 = uVar8;
 if (!bVar11 && (int)uVar6 <= iVar7) {
 bVar13 = SBORROW4(uVar10,uVar8);
 uVar4 = uVar10 - uVar8;
 bVar11 = uVar10 == uVar8;
 }
 if (!bVar11 && (int)uVar4 < 0 == bVar13) {
 return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
 }
 uVar5 = uVar5 | 0x100000;
 uVar10 = 0;
 bVar13 = SBORROW4(uVar8,1);
 uVar8 = uVar8 - 1;
 bVar11 = uVar8 == 0;
 uVar6 = uVar8;
 }
 else {
 uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
 uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
 (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
 uVar4 = (uint)uVar14;
 lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
 uVar10 = (uint)lVar1;
 uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
 if ((int)uVar2 != 0) {
 uVar4 = uVar4 | 1;
 }
 uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
 if (uVar6 < 0x200) {
 bVar3 = (byte)(uVar4 >> 0x1f);
 uVar4 = uVar4 << 1;
 lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
 uVar10 * 2 + (uint)bVar3);
 }
 uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
 param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
 uVar10 = uVar4 * 0x800;
 bVar12 = 0xfc < uVar8;
 bVar13 = SBORROW4(uVar8,0xfd);
 uVar9 = uVar8 - 0xfd;
 bVar11 = uVar9 == 0;
 uVar6 = uVar9;
 if (bVar12 && !bVar11) {
 bVar12 = 0x6ff < uVar9;
 bVar13 = SBORROW4(uVar9,0x700);
 uVar6 = uVar8 - 0x7fd;
 bVar11 = uVar9 == 0x700;
 }
 if (!bVar12 || bVar11) {
 bVar11 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
 }
 return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
 );
 }
 }
 if (!bVar11 && (int)uVar6 < 0 == bVar13) {
 return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 if (-0x36 < (int)uVar8) {
 uVar6 = -uVar8;
 uVar4 = uVar6 - 0x20;
 if (0x1f < (int)uVar6) {
 uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
 uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
 ((int)uVar9 >> 0x1f);
 if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
 uVar6 = uVar6 & ~(uVar9 >> 0x1f);
 }
 return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
 }
 if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
 uVar4 = 0xc - (uVar6 - 0x14);
 uVar6 = param_3 << (uVar4 & 0xff);
 uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
 uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
 if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar6 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
 }
 uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
 uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
 uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
 if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar4 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
 (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
 }
 return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



/* Function: FUN_00012dd8 @ 00012dd8 */
ulonglong FUN_00012dd8(uint param_1, uint param_2, uint param_3, uint param_4)

{
 bool bVar1;
 int iVar2;
 uint uVar3;
 uint unaff_r4;
 uint uVar4;
 uint uVar5;
 uint in_r12;
 
 in_r12 = param_4 >> 0x14 & 0x7ff;
 unaff_r4 = param_2 >> 0x14 & 0x7ff;
 uVar4 = in_r12 & (param_4 >> 0x14);
 if (unaff_r4 != in_r12 && uVar4 != in_r12) {
 if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
 {
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 if (unaff_r4 == 0) {
 uVar5 = param_2 & 0x80000000;
 do {
 iVar2 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar2;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar5;
 if (uVar4 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar2 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar2;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 bVar1 = (param_2 & 0x7fffffff) != 0;
 uVar5 = param_4;
 iVar2 = param_3;
 if (param_1 != 0 || bVar1) {
 uVar5 = param_2;
 iVar2 = param_1;
 }
 uVar3 = uVar5;
 if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
 ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
 ((uVar4 != in_r12 ||
 (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
 return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}




/* CRT stub function __aeabi_ddiv removed by preprocessor */




/* Function: FUN_00012ff8 @ 00012ff8 */

ulonglong FUN_00012ff8(int param_1,uint param_2,int param_3,uint param_4)

{
 int iVar1;
 uint unaff_r4;
 uint uVar2;
 uint uVar3;
 uint in_r12;
 
 uVar2 = in_r12 & param_4 >> 0x14;
 uVar3 = param_2;
 if (unaff_r4 != in_r12 || uVar2 != in_r12) {
 if (unaff_r4 == in_r12) {
 if ((param_1 == 0 && (param_2 & 0xfffff) == 0) &&
 (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)) {
LAB_00012e40:
 return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 }
 else if (uVar2 == in_r12) {
 param_1 = param_3;
 uVar3 = param_4;
 if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_00012df4:
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 }
 else {
 if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) &&
 (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) {
 if (unaff_r4 == 0) {
 uVar3 = param_2 & 0x80000000;
 do {
 iVar1 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar1;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar3;
 if (uVar2 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar1 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar1;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_00012e40;
 if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_00012df4;
 }
 }
 return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}



/* Function: __aeabi_frsub @ 00013068 */

void __aeabi_frsub(uint param_1)
{
 __addsf3(param_1 ^ 0x80000000, 0, 0, 0);
 return;
}




/* CRT stub function __aeabi_fsub removed by preprocessor */




/* Function: __addsf3 @ 00013074 */

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
 int iVar1;
 int iVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 bool bVar9;
 
 uVar4 = param_1 << 1;
 bVar9 = uVar4 == 0;
 if (!bVar9) {
 param_4 = param_2 << 1;
 bVar9 = param_4 == 0;
 }
 if (!bVar9) {
 bVar9 = uVar4 == param_4;
 }
 iVar1 = (int)uVar4 >> 0x18;
 if (!bVar9) {
 bVar9 = iVar1 == -1;
 }
 if (!bVar9) {
 bVar9 = (int)param_4 >> 0x18 == -1;
 }
 if (bVar9) {
 iVar2 = (int)(param_2 << 1) >> 0x18;
 if (iVar1 == -1 || iVar2 == -1) {
 uVar4 = param_2;
 if (iVar1 == -1) {
 uVar4 = param_1;
 }
 if (iVar1 != -1 || iVar2 != -1) {
 param_2 = uVar4;
 }
 if (((uVar4 & 0x7fffff) != 0 || (param_2 & 0x7fffff) != 0) || uVar4 != param_2) {
 uVar4 = uVar4 | 0x400000;
 }
 return uVar4;
 }
 if (uVar4 != param_2 << 1) {
 if (uVar4 == 0) {
 param_1 = param_2;
 }
 return param_1;
 }
 if (param_1 != param_2) {
 return 0;
 }
 if ((uVar4 & 0xff000000) == 0) {
 uVar4 = param_1 << 1;
 if (SUB41(param_1 >> 0x1f,0)) {
 uVar4 = uVar4 | 0x80000000;
 }
 return uVar4;
 }
 if (uVar4 < 0xfe000000) {
 return param_1 + 0x800000;
 }
 param_1 = param_1 & 0x80000000;
LAB_000131d4:
 return param_1 | 0x7f800000;
 }
 uVar4 = uVar4 >> 0x18;
 param_4 = param_4 >> 0x18;
 uVar8 = param_4 - uVar4;
 uVar5 = param_2;
 uVar7 = uVar4;
 if (uVar8 != 0 && uVar4 <= param_4) {
 uVar7 = uVar4 + uVar8;
 uVar5 = param_1;
 param_1 = param_2;
 }
 if (param_4 < uVar4) {
 uVar8 = -uVar8;
 }
 if (0x19 < uVar8) {
 return param_1;
 }
 uVar4 = param_1 & 0xffffff | 0x800000;
 if ((param_1 & 0x80000000) != 0) {
 uVar4 = -uVar4;
 }
 uVar6 = uVar5 & 0xffffff | 0x800000;
 if ((uVar5 & 0x80000000) != 0) {
 uVar6 = -uVar6;
 }
 if (uVar7 == uVar8) {
 uVar6 = uVar6 ^ 0x800000;
 if (uVar7 == 0) {
 uVar4 = uVar4 ^ 0x800000;
 uVar7 = 1;
 }
 else {
 uVar8 = uVar8 - 1;
 }
 }
 uVar4 = uVar4 + ((int)uVar6 >> (uVar8 & 0xff));
 uVar6 = uVar6 << (0x20 - uVar8 & 0xff);
 param_1 = uVar4 & 0x80000000;
 if ((int)uVar4 < 0) {
 bVar9 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar4 = -(uVar4 + bVar9);
 }
 if (uVar4 < 0x800000) {
 iVar1 = (int)uVar6 >> 0x1f;
 uVar6 = uVar6 << 1;
 uVar4 = uVar4 * 2 - iVar1;
 uVar8 = uVar7 - 2;
 if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
 uVar7 = LZCOUNT(uVar4) - 8;
 uVar4 = uVar4 << (uVar7 & 0xff);
 if ((int)uVar8 < (int)uVar7) {
 uVar4 = uVar4 >> (-(uVar8 - uVar7) & 0xff);
 }
 else {
 uVar4 = uVar4 + (uVar8 - uVar7) * 0x800000;
 }
 return uVar4 | param_1;
 }
 }
 else {
 uVar8 = uVar7 - 1;
 if (0xffffff < uVar4) {
 bVar3 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
 uVar8 = uVar7;
 if (0xfd < uVar7) goto LAB_000131d4;
 }
 }
 uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00013204 */

uint __aeabi_ui2f(uint param_1)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = LZCOUNT(param_1);
 uVar2 = uVar1 - 8;
 iVar3 = uVar2 * -0x800000 + 0x4a800000;
 if (7 < uVar1) {
 uVar1 = 0 << (uVar2 & 0xff);
 uVar2 = iVar3 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
 (uint)(0x7fffffff < uVar1);
 if (uVar1 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
 }
 uVar2 = param_1 << uVar1 + 0x18;
 uVar1 = (iVar3 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar2 >> 0x1f);
 if ((uVar2 & 0x7fffffff) == 0) {
 uVar1 = uVar1 & ~(uVar2 >> 0x1f);
 }
 return uVar1;
}



/* Function: __floatsisf @ 0001320c */

uint __floatsisf(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 
 uVar3 = param_1 & 0x80000000;
 if ((int)uVar3 < 0) {
 param_1 = -param_1;
 }
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = LZCOUNT(param_1);
 uVar2 = uVar1 - 8;
 iVar4 = ((uVar3 | 0x4b000000) - 0x800000) + uVar2 * -0x800000;
 if (7 < uVar1) {
 uVar3 = 0 << (uVar2 & 0xff);
 uVar1 = iVar4 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
 (uint)(0x7fffffff < uVar3);
 if (uVar3 == 0x80000000) {
 uVar1 = uVar1 & 0xfffffffe;
 }
 return uVar1;
 }
 uVar3 = param_1 << uVar1 + 0x18;
 uVar1 = (iVar4 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar3 >> 0x1f);
 if ((uVar3 & 0x7fffffff) == 0) {
 uVar1 = uVar1 & ~(uVar3 >> 0x1f);
 }
 return uVar1;
}



/* Function: __floatundisf @ 0001322c */

uint __floatundisf(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 
 if (param_1 == 0 && param_2 == 0) {
 return param_1;
 }
 uVar1 = param_1;
 uVar2 = param_2;
 if (param_2 == 0) {
 uVar1 = 0;
 uVar2 = param_1;
 }
 iVar5 = 0x5b000000;
 if (param_2 == 0) {
 iVar5 = 0x4b000000;
 }
 uVar3 = LZCOUNT(uVar2);
 uVar4 = uVar3 - 8;
 iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
 if (uVar3 < 8) {
 uVar4 = uVar2 << uVar3 + 0x18;
 uVar2 = (iVar5 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar4 >> 0x1f);
 if (uVar1 == 0 && (uVar4 & 0x7fffffff) == 0) {
 uVar2 = uVar2 & ~(uVar4 >> 0x1f);
 }
 return uVar2;
 }
 uVar3 = uVar1 << (uVar4 & 0xff);
 uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
 (uint)(0x7fffffff < uVar3);
 if (uVar3 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
}



/* Function: __aeabi_l2f @ 0001323c */

uint __aeabi_l2f(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 bool bVar7;
 
 if (param_1 == 0 && param_2 == 0) {
 return param_1;
 }
 uVar5 = param_2 & 0x80000000;
 if ((int)uVar5 < 0) {
 bVar7 = param_1 != 0;
 param_1 = -param_1;
 param_2 = -(param_2 + bVar7);
 }
 uVar1 = param_1;
 uVar2 = param_2;
 if (param_2 == 0) {
 uVar1 = 0;
 uVar2 = param_1;
 }
 uVar5 = uVar5 | 0x5b000000;
 if (param_2 == 0) {
 uVar5 = uVar5 + 0xf0000000;
 }
 uVar3 = LZCOUNT(uVar2);
 uVar4 = uVar3 - 8;
 iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
 if (uVar3 < 8) {
 uVar5 = uVar2 << uVar3 + 0x18;
 uVar2 = (iVar6 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar5 >> 0x1f);
 if (uVar1 == 0 && (uVar5 & 0x7fffffff) == 0) {
 uVar2 = uVar2 & ~(uVar5 >> 0x1f);
 }
 return uVar2;
 }
 uVar5 = uVar1 << (uVar4 & 0xff);
 uVar2 = iVar6 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
 (uint)(0x7fffffff < uVar5);
 if (uVar5 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
}



/* Function: __fixsfsi @ 000132b8 */

uint __fixsfsi(uint param_1)

{
 uint uVar1;
 uint uVar2;
 
 if (param_1 << 1 < 0x7f000000) {
 return 0;
 }
 uVar1 = (param_1 << 1) >> 0x18;
 uVar2 = 0x9e - uVar1;
 if (uVar1 < 0x9f && uVar2 != 0) {
 uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
 if ((param_1 & 0x80000000) != 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 if ((uVar2 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
 return 0;
 }
 param_1 = param_1 & 0x80000000;
 if (param_1 == 0) {
 param_1 = 0x7fffffff;
 }
 return param_1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
