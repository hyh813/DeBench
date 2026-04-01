/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */



#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>


/* Ghidra-specific type replacements */
typedef void undefined;
typedef unsigned int undefined4;
typedef void (*code)(void);

/* Data symbols from binary */
static const char DAT_00103150[] = "=== Testing Data Types L1 ===\n";
static const char DAT_001032bc[] = "=== Testing Array Types ===\n";
static const char DAT_001033d9[] = "=== Testing Pointer Types ===\n";
static const char DAT_00103573[] = "=== Testing Composite Types ===\n";

/* Type definitions for structs and enums */

typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

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
    Point3D position;
    Size size;
} Rect;

typedef struct {
    int r;
    int g;
    int b;
} Color;

typedef struct {
    Point3D bounds;
    Color style;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
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
    Edge *adjList[16];
} Graph;

typedef struct Device {
    int data;
    int (*process)(int);
} Device;

typedef union UnionData {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int flag4 : 10;
} Flags;

/* Function pointer typedefs */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

/* Type aliases for uint/ulong */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef long long longlong;
typedef long double longdouble;


/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* (*(code *)(undefined *)0x0)();  - null function pointer call removed */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 00101160 */

char process_char(char c)

{
 char c_local;
 char local_9;
 
 local_9 = c;
 if (('@' < c) && (c < '[')) {
 local_9 = c + ' ';
 }
 return local_9;
}



/* Function: process_short @ 001011a0 */

short process_short(short a,short b)

{
 short b_local;
 short a_local;
 
 return a + b;
}



/* Function: process_int @ 001011c0 */

int process_int(int x)

{
 int x_local;
 
 return x * 2 + 1;
}



/* Function: process_long @ 001011e0 */

long process_long(long x)

{
 long x_local;
 
 return x << 1;
}



/* Function: process_ll @ 00101200 */

longlong process_ll(longlong x)

{
 longlong x_local;
 
 return x * x;
}



/* Function: process_float @ 00101220 */

float process_float(float f)

{
 float f_local;
 
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00101250 */

double process_double(double d)

{
 double d_local;
 
 return d / 2.0 + 0.1;
}



/* Function: process_ld @ 00101280 */

longdouble * process_ld(longdouble *__return_storage_ptr__,longdouble d)

{
 longdouble *in_RAX;
 longdouble d_local;
 
 return in_RAX;
}



/* Function: process_bool @ 001012a0 */

_Bool process_bool(int x)

{
 bool local_d;
 int x_local;
 
 local_d = 0 < x && x % 2 == 0;
 return local_d;
}



/* Function: const_param @ 001012e0 */

int const_param(int *p)

{
 int *p_local;
 
 return *p + 10;
}



/* Function: volatile_access @ 00101300 */

int volatile_access(int *p)

{
 int b;
 int a;
 int *p_local;
 
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00101330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 char cVar1;
 _Bool _Var2;
 short sVar3;
 uint uVar4;
 long lVar5;
 longlong lVar6;
 char *__return_storage_ptr__;
 float fVar7;
 int vol_value;
 int value;
 
 printf(&DAT_00103150);
 cVar1 = process_char('A');
 printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
 cVar1 = process_char('b');
 printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar3);
 uVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",(ulong)uVar4);
 lVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",lVar5);
 lVar6 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n",lVar6);
 fVar7 = process_float(2.0);
 printf("DT-L1-06 (process_float): %.2f\n",(double)fVar7);
 process_double(4.0);
 __return_storage_ptr__ = "DT-L1-07 (process_double): %.2f\n";
 printf("DT-L1-07 (process_double): %.2f\n");
 process_ld((longdouble *)__return_storage_ptr__,(longdouble)3.0);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 _Var2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
 _Var2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
 _Var2 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
 value = 5;
 uVar4 = const_param(&value);
 printf("DT-L1-10 (const_param): %d\n",(ulong)uVar4);
 vol_value = 10;
 uVar4 = volatile_access(&vol_value);
 printf("DT-L1-11 (volatile_access): %d\n",(ulong)uVar4);
 return;
}



/* Function: array_1d_stack @ 001014f0 */

int array_1d_stack(int *arr,int n)

{
 int i;
 int sum;
 int n_local;
 int *arr_local;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = arr[i] + sum;
 }
 return sum;
}



/* Function: array_string @ 00101540 */

int array_string(char *str)

{
 int len;
 char *str_local;
 
 for (len = 0; str[len] != '\0'; len = len + 1) {
 }
 return len;
}



/* Function: array_2d_stack @ 00101580 */

int array_2d_stack(int (*arr) [10])

{
 int i;
 int sum;
 int (*arr_local) [10];
 
 sum = 0;
 for (i = 0; i < 10; i = i + 1) {
 sum = arr[i][i] + sum;
 }
 return sum;
}



/* Function: array_3d @ 001015d0 */

int array_3d(int (*arr) [5] [5])

{
 int k;
 int j;
 int i;
 int sum;
 int (*arr_local) [5] [5];
 
 sum = 0;
 for (i = 0; i < 5; i = i + 1) {
 for (j = 0; j < 5; j = j + 1) {
 for (k = 0; k < 5; k = k + 1) {
 sum = arr[i][j][k] + sum;
 }
 }
 }
 return sum;
}



/* Function: array_vla @ 00101680 */

int array_vla(int n,int *arr)

{
 int i;
 int sum;
 int *arr_local;
 int n_local;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = arr[i] + sum;
 }
 return sum;
}



/* Function: array_pointer @ 001016d0 */

int array_pointer(int (*arr) [10],int n)

{
 int i;
 int sum;
 int n_local;
 int (*arr_local) [10];
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = arr[i][0] + sum;
 }
 return sum;
}



/* Function: pointer_array @ 00101720 */

int pointer_array(int **arr,int n)

{
 int local_24;
 int i;
 int count;
 int sum;
 int n_local;
 int **arr_local;
 
 sum = 0;
 local_24 = n;
 if (9 < n) {
 local_24 = 10;
 }
 for (i = 0; i < local_24; i = i + 1) {
 if (arr[i] != (int *)0x0) {
 sum = *arr[i] + sum;
 }
 }
 return sum;
}



/* Function: array_complex_index @ 001017b0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int y_local;
 int x_local;
 int h_local;
 int w_local;
 int *arr_local;
 int local_c;
 
 if ((((x < 0) || (w <= x)) || (y < 0)) || (h <= y)) {
 local_c = -1;
 }
 else {
 local_c = arr[y * w + x];
 }
 return local_c;
}



/* Function: array_oob @ 00101820 */

int array_oob(int *arr,int n)

{
 int i;
 int sum;
 int n_local;
 int *arr_local;
 
 sum = 0;
 for (i = 0; i <= n; i = i + 1) {
 sum = arr[i] + sum;
 }
 return sum;
}



/* Function: test_array_types @ 00101870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 uint uVar1;
 int **local_568;
 int local_560;
 int i_3;
 int flat [20];
 int *ptr_arr [10];
 int c;
 int b;
 int a;
 int i_2;
 int arr2 [5] [10];
 int vla_arr [3];
 int k;
 int j_1;
 int i_1;
 int cube [5] [5] [5];
 int j;
 int i;
 int matrix [10] [10];
 char str [6];
 int arr1 [5];
 
 printf(&DAT_001032bc);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr1[3] = 4;
 arr1[4] = 5;
 uVar1 = array_1d_stack(arr1,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",(ulong)uVar1);
 strncpy(str, "hello", 6);
 uVar1 = array_string(str);
 printf("ARR-L1-02 (array_string): %d\n",(ulong)uVar1);
 for (i = 0; i < 10; i = i + 1) {
 for (j = 0; j < 10; j = j + 1) {
 if (i == j) {
 local_560 = i;
 }
 else {
 local_560 = 0;
 }
 matrix[i][j] = local_560;
 }
 }
 uVar1 = array_2d_stack(matrix);
 printf("ARR-L1-03 (array_2d_stack): %d\n",(ulong)uVar1);
 for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
 for (j_1 = 0; j_1 < 5; j_1 = j_1 + 1) {
 for (k = 0; k < 5; k = k + 1) {
 cube[i_1][j_1][k] = 1;
 }
 }
 }
 uVar1 = array_3d(cube);
 printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
 vla_arr[0] = 10;
 vla_arr[1] = 0x14;
 vla_arr[2] = 0x1e;
 uVar1 = array_vla(3,vla_arr);
 printf("ARR-L2-01 (array_vla): %d\n",(ulong)uVar1);
 for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
 arr2[i_2][0] = i_2 * 10;
 }
 uVar1 = array_pointer(arr2,5);
 printf("ARR-L2-02 (array_pointer): %d\n",(ulong)uVar1);
 a = 10;
 b = 0x14;
 c = 0x1e;
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 ptr_arr[3] = (int *)0x0;
 local_568 = ptr_arr + 4;
 do {
 *local_568 = (int *)0x0;
 local_568 = local_568 + 1;
 } while (local_568 != (int **)&c);
 uVar1 = pointer_array(ptr_arr,3);
 printf("ARR-L2-03 (pointer_array): %d\n",(ulong)uVar1);
 for (i_3 = 0; i_3 < 0x14; i_3 = i_3 + 1) {
 flat[i_3] = i_3;
 }
 uVar1 = array_complex_index(flat,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)uVar1);
 return;
}



/* Function: ptr_single @ 00101c90 */

int ptr_single(int *p)

{
 int *p_local;
 
 return *p + 10;
}



/* Function: ptr_double @ 00101cb0 */

int ptr_double(int **p)

{
 int **p_local;
 
 return **p + 5;
}



/* Function: ptr_triple @ 00101cd0 */

int ptr_triple(int ***p)

{
 int ***p_local;
 
 return ***p + 1;
}



/* Function: ptr_increment @ 00101cf0 */

int ptr_increment(int *p,int n)

{
 int i;
 int sum;
 int n_local;
 int *p_local;
 
 sum = 0;
 p_local = p;
 for (i = 0; i < n; i = i + 1) {
 sum = *p_local + sum;
 p_local = p_local + 1;
 }
 return sum;
}



/* Function: ptr_offset @ 00101d40 */

int ptr_offset(int *p,int offset)

{
 int offset_local;
 int *p_local;
 
 return p[offset];
}



/* Function: ptr_diff @ 00101d60 */

int ptr_diff(int *p1,int *p2)

{
 int *p2_local;
 int *p1_local;
 
 return (int)((long)p1 - (long)p2 >> 2);
}



/* Function: ptr_void @ 00101d80 */

int ptr_void(void *p,int type)

{
 int type_local;
 void *p_local;
 int local_c;
 
 if (type == 0) {
 local_c = *(int *)p;
 }
 else if (type == 1) {
 local_c = (int)*(char *)p;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: ptr_const @ 00101dd0 */

int ptr_const(int *p)

{
 int *p_local;
 
 return *p + *p;
}



/* Function: ptr_const_ptr @ 00101df0 */

int ptr_const_ptr(int *p)

{
 int *p_local;
 
 *p = *p + 5;
 return *p;
}



/* Forward declarations */
int double_value(int x);
int complex_callback(int *p, char **args);

/* Function: ptr_func_simple @ 00101e10 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 int x_local;
 _func_int_int *f_local;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00101e30 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *args [2];
 int *p_local;
 _func_int_int_ptr_char_ptr_ptr *f_local;
 
 args[0] = "test";
 args[1] = (char *)0x0;
 iVar1 = (*f)(p,args);
 return iVar1;
}



/* Function: ptr_cast @ 00101e70 */

int ptr_cast(void *p)

{
 int *back_ptr;
 char *char_ptr;
 int *int_ptr;
 void *p_local;
 
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00101ea0 */

void * opaque_handle_create(int size)

{
 int size_local;
 
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101eb0 */

int opaque_handle_op(void *handle)

{
 void *handle_local;
 
 return (int)handle << 1;
}



/* Function: test_pointer_types @ 00101ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 uint uVar1;
 void *handle_00;
 void *handle;
 int val12;
 int val11;
 int val9;
 int val8;
 char c7;
 int val7;
 int arr6 [5];
 int arr5 [5];
 int arr4 [5];
 int ***ppptr3;
 int **pptr3;
 int *ptr3;
 int val3;
 int **pptr2;
 int *ptr2;
 int val2;
 int val1;
 
 printf(&DAT_001033d9);
 val1 = 5;
 uVar1 = ptr_single(&val1);
 printf("PTR-L2-01 (ptr_single): %d\n",(ulong)uVar1);
 val2 = 10;
 ptr2 = &val2;
 pptr2 = &ptr2;
 uVar1 = ptr_double(pptr2);
 printf("PTR-L2-02 (ptr_double): %d\n",(ulong)uVar1);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 uVar1 = ptr_triple(&pptr3);
 printf("PTR-L2-03 (ptr_triple): %d\n",(ulong)uVar1);
 arr4[0] = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 uVar1 = ptr_increment(arr4,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",(ulong)uVar1);
 arr5[0] = 10;
 arr5[1] = 0x14;
 arr5[2] = 0x1e;
 arr5[3] = 0x28;
 arr5[4] = 0x32;
 uVar1 = ptr_offset(arr5,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",(ulong)uVar1);
 arr6[0] = 0;
 arr6[1] = 10;
 arr6[2] = 0x14;
 arr6[3] = 0x1e;
 arr6[4] = 0x28;
 ptr_diff(arr6 + 4,arr6);
 printf("PTR-L2-06 (ptr_diff): %d\n");
 val7 = 0x2a;
 c7 = 'A';
 uVar1 = ptr_void(&val7,0);
 printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
 uVar1 = ptr_void(&c7,1);
 printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
 val8 = 10;
 uVar1 = ptr_const(&val8);
 printf("PTR-L2-08 (ptr_const): %d\n",(ulong)uVar1);
 val9 = 10;
 uVar1 = ptr_const_ptr(&val9);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",(ulong)uVar1);
 uVar1 = ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",(ulong)uVar1);
 val11 = 5;
 uVar1 = ptr_func_complex(complex_callback,&val11);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",(ulong)uVar1);
 val12 = 0x12345678;
 uVar1 = ptr_cast(&val12);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",(ulong)uVar1);
 handle_00 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(handle_00);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",(ulong)uVar1);
 return;
}



/* Function: double_value @ 00102180 */

int double_value(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: complex_callback @ 00102190 */

int complex_callback(int *p,char **args)

{
 char **args_local;
 int *p_local;
 
 *p = *p + 10;
 return (uint)(*args != (char *)0x0);
}



/* Function: struct_simple @ 001021d0 */

int struct_simple(Point3D *p)

{
 Point3D *p_local;
 
 return p->x + p->y + p->z;
}



/* Function: struct_array @ 001021f0 */

int struct_array(Point3D *pts,int n)

{
 int i;
 int sum;
 int n_local;
 Point3D *pts_local;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = pts[i].x + pts[i].y + pts[i].z + sum;
 }
 return sum;
}



/* Function: struct_nested @ 00102270 */

int struct_nested(Rect *r)

{
 Rect *r_local;
 
 return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00102290 */

int struct_deep(Widget *w)

{
 Widget *w_local;
 
 return w->bounds.z + w->style.r;
}



/* Function: struct_with_ptr @ 001022b0 */

int struct_with_ptr(Node *node)

{
 int local_18;
 Node *node_local;
 
 if (node->next == (Node *)0x0) {
 local_18 = 0;
 }
 else {
 local_18 = node->next->data;
 }
 return node->data + local_18;
}



/* Function: struct_bitfields @ 00102300 */

int struct_bitfields(Flags *f)

{
 Flags *f_local;
 
 return (uint)(*(ushort *)f & 1) + (uint)(*(ushort *)f >> 1 & 3) + (uint)(*(ushort *)f >> 3 & 7) +
 (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00102350 */

int union_type(UnionData *u,int type)

{
 int type_local;
 UnionData *u_local;
 int local_c;
 
 if (type == 0) {
 local_c = u->i;
 }
 else if (type == 1) {
 local_c = (int)u->f;
 }
 else {
 local_c = (int)u->bytes[0];
 }
 return local_c;
}



/* Function: union_array @ 001023a0 */

int union_array(UnionData *arr,int n)

{
 int i;
 int sum;
 int n_local;
 UnionData *arr_local;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = arr[i].i + sum;
 }
 return sum;
}



/* Function: enum_type @ 001023f0 */

int enum_type(State s)

{
 State s_local;
 
 return s * 10;
}



/* Function: enum_switch @ 00102400 */

int enum_switch(State s)

{
 State s_local;
 int local_c;
 
 switch(s) {
 case STATE_IDLE:
 local_c = 0;
 break;
 case STATE_RUNNING:
 local_c = 100;
 break;
 case STATE_PAUSED:
 local_c = 0x32;
 break;
 case STATE_STOPPED:
 local_c = -1;
 break;
 default:
 local_c = -99;
 }
 return local_c;
}



/* Function: struct_func_ptr @ 00102470 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 Device *dev_local;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 001024a0 */

int linked_list(Node *head)

{
 Node *current;
 int sum;
 Node *head_local;
 
 sum = 0;
 for (current = head; current != (Node *)0x0; current = current->next) {
 sum = current->data + sum;
 }
 return sum;
}



/* Function: doubly_linked_list @ 001024f0 */

int doubly_linked_list(DNode *head)

{
 DNode *current;
 int sum;
 DNode *head_local;
 
 sum = 0;
 for (current = head; current != (DNode *)0x0; current = current->next) {
 sum = current->data + sum;
 }
 return sum;
}



/* Function: binary_tree_sum @ 00102540 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 TreeNode *root_local;
 int local_c;
 
 if (root == (TreeNode *)0x0) {
 local_c = 0;
 }
 else {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 local_c = binary_tree_sum(root->right);
 local_c = iVar1 + iVar2 + local_c;
 }
 return local_c;
}



/* Function: binary_tree @ 001025b0 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 TreeNode *root_local;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 001025d0 */

int graph_traverse(Graph *g)

{
 Edge *edge;
 int i;
 int sum;
 Graph *g_local;
 
 sum = 0;
 for (i = 0; i < g->numVertices; i = i + 1) {
 for (edge = g->adjList[i]; edge != (Edge *)0x0; edge = edge->next) {
 sum = edge->dest + sum;
 }
 }
 return sum;
}



/* Function: test_composite_types @ 00102650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 uint uVar1;
 Graph g;
 Edge e1;
 TreeNode tree;
 DNode dlist [2];
 Node list [3];
 Device dev;
 UnionData arr_u [3];
 UnionData u;
 Flags f;
 Node node1;
 Node node2;
 Widget w;
 Rect r;
 Point3D pts [2];
 Point3D p1;
 
 printf(&DAT_00103573);
 p1.x = 1;
 p1.y = 2;
 p1.z = 3;
 uVar1 = struct_simple(&p1);
 printf("CMP-L2-01 (struct_simple): %d\n",(ulong)uVar1);
 pts[0].x = 1;
 pts[0].y = 1;
 pts[0].z = 1;
 pts[1].x = 2;
 pts[1].y = 2;
 pts[1].z = 2;
 uVar1 = struct_array(pts,2);
 printf("CMP-L2-02 (struct_array): %d\n",(ulong)uVar1);
 r.position.x = 5;
 r.position.y = 10;
 r.position.z = 0;
 r.size.width = 100;
 r.size.height = 200;
 uVar1 = struct_nested(&r);
 printf("CMP-L2-03 (struct_nested): %d\n",(ulong)uVar1);
 memset(&w, 0, sizeof(w));
 uVar1 = struct_deep(&w);
 printf("CMP-L2-04 (struct_deep): %d\n",(ulong)uVar1);
node2.data = 0x14;
    node2.next = (Node *)0x0;
    node1.data = 10;
    node1.next = &node2;
 uVar1 = struct_with_ptr(&node1);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",(ulong)uVar1);
 f.flag1 = (0x191d >> 0) & 0x1;
 f.flag2 = (0x191d >> 1) & 0x3;
 f.flag3 = (0x191d >> 3) & 0x7;
 f.flag4 = (0x191d >> 6) & 0x3FF;
 struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n");
 u.i = 0x12345678;
 uVar1 = union_type(&u,0);
 printf("CMP-L2-07 (union_type): %d\n",(ulong)uVar1);
 arr_u[0] = (UnionData)0xa;
 arr_u[1] = (UnionData)0x14;
 arr_u[2].i = 0x1e;
 uVar1 = union_array(arr_u,3);
 printf("CMP-L2-08 (union_array): %d\n",(ulong)uVar1);
 uVar1 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n",(ulong)uVar1);
 uVar1 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n",(ulong)uVar1);
dev.data = 10;
    dev.process = process_int;
 uVar1 = struct_func_ptr(&dev);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",(ulong)uVar1);
 list[0].data = 10;
 list[0].next = list + 1;
 list[1].data = 0x14;
 list[1].next = list + 2;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 uVar1 = linked_list(list);
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar1);
 dlist[0].data = 10;
 dlist[0].prev = (DNode *)0x0;
 dlist[1].data = 0x14;
 dlist[1].next = (DNode *)0x0;
 dlist[1].prev = dlist;
 dlist[0].next = dlist + 1;
 uVar1 = doubly_linked_list(dlist);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar1);
tree.data = 100;
    tree.left = (TreeNode *)0x0;
    tree.right = (TreeNode *)0x0;
 binary_tree(&tree);
 printf("CMP-L2-14 (binary_tree): %d\n");
e1.dest = 1;
    e1.next = (Edge *)0x0;
 memset(&g,0,0x58);
 g.numVertices = 2;
 g.adjList[0] = &e1;
 uVar1 = graph_traverse(&g);
 printf("CMP-L2-15 (graph_traverse): %d\n",(ulong)uVar1);
 return;
}



/* Function: main @ 00102a30 */

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




/* Total functions decompiled: 64 */
