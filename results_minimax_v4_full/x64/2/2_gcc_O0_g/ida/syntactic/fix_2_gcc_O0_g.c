/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_gcc_O0_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Type definitions
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode;

typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Rect {
    Point3D position;
    struct {
        int width;
        int height;
    } size;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} Color;

typedef struct {
    Color fill;
    Color stroke;
} Style;

typedef struct {
    Rect bounds;
    Style style;
    int id;
} Widget;

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

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
    int (*process)(int);
    int data;
} Device;

typedef unsigned short Flags;

typedef enum {
    STATE_STOPPED = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2
} State;

// External declarations
extern void _gmon_start__(void);

// Global strings
static const char *s = "Data Types Test";
static const char *asc_3180 = "Array Types Test";
static const char *asc_32A2 = "Pointer Types Test";
static const char *asc_3452 = "Composite Types Test";

/* Function: .init_proc @ 0x1000 */
void init_proc(void)
{
 if ( &_gmon_start__ )
 _gmon_start__();
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1189 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: process_char @ 0x119B */
char process_char(char c)
{
 if ( c <= 64 || c > 90 )
 return c;
 else
 return c + 32;
}


/* Function: process_short @ 0x11C3 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x11E3 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x11F8 */
long long process_long(long long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x120D */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x1223 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x124F */
double process_double(double d)
{
 return d / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1289 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x129E */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x12CA */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x12E1 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1309 */
void test_data_types_l1()
{
 char v0; // al
 char v1; // al
 short v2; // ax
 int v3; // eax
 long long v4; // rax
 long long v5; // rax
 double v6; // xmm1_8
 double v7; // xmm0_8
 long double v8; // fst7
 bool v9; // al
 bool v10; // al
 bool v11; // al
 int v12; // eax
 int v13; // eax
 int value; // [rsp+10h] [rbp-10h] BYREF
 int vol_value; // [rsp+14h] [rbp-Ch] BYREF
 unsigned long long v16; // [rsp+18h] [rbp-8h]

 v16 = __readfsqword(0x28u);
 puts(s);
 v0 = process_char(65);
 printf("DT-L1-01 (process_char): %c\n", (unsigned int)v0);
 v1 = process_char(98);
 printf("DT-L1-01 (process_char): %c\n", (unsigned int)v1);
 v2 = process_short(100, 200);
 printf("DT-L1-02 (process_short): %d\n", v2);
 v3 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n", v3);
 v4 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n", v4);
 v5 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n", v5);
 v6 = process_float(2.0);
 printf("DT-L1-06 (process_float): %.2f\n", v6);
 v7 = process_double(4.0);
 printf("DT-L1-07 (process_double): %.2f\n", v7);
 v8 = process_ld(3.0);
 printf("DT-L1-08 (process_ld): %.2Lf\n", v8);
 v9 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n", v9);
 v10 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n", v10);
 v11 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n", v11);
 value = 5;
 v12 = const_param(&value);
 printf("DT-L1-10 (const_param): %d\n", v12);
 vol_value = 10;
 v13 = volatile_access(&vol_value);
 printf("DT-L1-11 (volatile_access): %d\n", v13);
}


/* Function: array_1d_stack @ 0x156E */
int array_1d_stack(int *arr, int n)
{
 int sum; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_string @ 0x15B7 */
int array_string(char *str)
{
 int len; // [rsp+14h] [rbp-4h]

 for ( len = 0; str[len]; ++len )
 ;
 return len;
}


/* Function: array_2d_stack @ 0x15E9 */
int array_2d_stack(int (*arr)[10])
{
 int sum; // [rsp+10h] [rbp-8h]
 int i; // [rsp+14h] [rbp-4h]

 sum = 0;
 for ( i = 0; i <= 9; ++i )
 sum += (*arr)[10 * i + i];
 return sum;
}


/* Function: array_3d @ 0x163D */
int array_3d(int (*arr)[5][5])
{
 int sum; // [rsp+8h] [rbp-10h]
 int i; // [rsp+Ch] [rbp-Ch]
 int j; // [rsp+10h] [rbp-8h]
 int k; // [rsp+14h] [rbp-4h]

 sum = 0;
 for ( i = 0; i <= 4; ++i )
 {
 for ( j = 0; j <= 4; ++j )
 {
 for ( k = 0; k <= 4; ++k )
 sum += (*arr)[5 * i][5 * j + k];
 }
 }
 return sum;
}


/* Function: array_vla @ 0x16D7 */
int array_vla(int n, int *arr)
{
 int sum; // [rsp+18h] [rbp-8h]
 int i; // [rsp+1Ch] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_pointer @ 0x1720 */
int array_pointer(int (*arr)[10], int n)
{
 int sum; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += (*arr)[10 * i];
 return sum;
}


/* Function: pointer_array @ 0x1773 */
int pointer_array(int **arr, int n)
{
 int v2; // eax
 int sum; // [rsp+10h] [rbp-Ch]
 int i; // [rsp+14h] [rbp-8h]

 sum = 0;
 v2 = n;
 if ( n > 10 )
 v2 = 10;
 for ( i = 0; i < v2; ++i )
 {
 if ( arr[i] )
 sum += *arr[i];
 }
 return sum;
}


/* Function: array_complex_index @ 0x17EB */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( x >= 0 && x < w && y >= 0 && y < h )
 return arr[w * y + x];
 else
 return -1;
}


/* Function: array_oob @ 0x184A */
int array_oob(int *arr, int n)
{
 int sum; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 sum = 0;
 for ( i = 0; i <= n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: test_array_types @ 0x1893 */
void test_array_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // edx
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int a; // [rsp+Ch] [rbp-564h] BYREF
 int b; // [rsp+10h] [rbp-560h] BYREF
 int c; // [rsp+14h] [rbp-55Ch] BYREF
 int i; // [rsp+18h] [rbp-558h]
 int j; // [rsp+1Ch] [rbp-554h]
 int i_0; // [rsp+20h] [rbp-550h]
 int j_0; // [rsp+24h] [rbp-54Ch]
 int k; // [rsp+28h] [rbp-548h]
 int i_1; // [rsp+2Ch] [rbp-544h]
 int i_2; // [rsp+30h] [rbp-540h]
 int vla_arr[3]; // [rsp+34h] [rbp-53Ch] BYREF
 int arr1[8]; // [rsp+40h] [rbp-530h] BYREF
 int *ptr_arr[10]; // [rsp+60h] [rbp-510h] BYREF
 int arr[20]; // [rsp+B0h] [rbp-4C0h] BYREF
 int arr2[5][10]; // [rsp+100h] [rbp-470h] BYREF
 int matrix[10][10]; // [rsp+1D0h] [rbp-3A0h] BYREF
 int cube[5][5][5]; // [rsp+360h] [rbp-210h] BYREF
 char str[6]; // [rsp+562h] [rbp-Eh] BYREF
 unsigned long long v27; // [rsp+568h] [rbp-8h]

 v27 = __readfsqword(0x28u);
 puts(asc_3180);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr1[3] = 4;
 arr1[4] = 5;
 v0 = array_1d_stack(arr1, 5);
 printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(str, "hello");
 v1 = array_string(str);
 printf("ARR-L1-02 (array_string): %d\n", v1);
 for ( i = 0; i <= 9; ++i )
 {
 for ( j = 0; j <= 9; ++j )
 {
 if ( i == j )
 v2 = i;
 else
 v2 = 0;
 matrix[i][j] = v2;
 }
 }
 v3 = array_2d_stack(matrix);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v3);
 for ( i_0 = 0; i_0 <= 4; ++i_0 )
 {
 for ( j_0 = 0; j_0 <= 4; ++j_0 )
 {
 for ( k = 0; k <= 4; ++k )
 cube[i_0][j_0][k] = 1;
 }
 }
 v4 = array_3d(cube);
 printf("ARR-L1-04 (array_3d): %d\n", v4);
 vla_arr[0] = 10;
 vla_arr[1] = 20;
 vla_arr[2] = 30;
 v5 = array_vla(3, vla_arr);
 printf("ARR-L2-01 (array_vla): %d\n", v5);
 for ( i_1 = 0; i_1 <= 4; ++i_1 )
 arr2[i_1][0] = 10 * i_1;
 v6 = array_pointer(arr2, 5);
 printf("ARR-L2-02 (array_pointer): %d\n", v6);
 a = 10;
 b = 20;
 c = 30;
 memset(&ptr_arr[3], 0, 56);
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 v7 = pointer_array(ptr_arr, 3);
 printf("ARR-L2-03 (pointer_array): %d\n", v7);
 for ( i_2 = 0; i_2 <= 19; ++i_2 )
 arr[i_2] = i_2;
 v8 = array_complex_index(arr, 5, 4, 2, 3);
 printf("ARR-L2-04 (array_complex_index): %d\n", v8);
}


/* Function: ptr_single @ 0x1CDA */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x1CF1 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1D0B */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1D28 */
int ptr_increment(int *p, int n)
{
 int sum; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *p++;
 return sum;
}


/* Function: ptr_offset @ 0x1D66 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1D8D */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1DAB */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(char *)p;
 return -1;
}


/* Function: ptr_const @ 0x1DE1 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1DF7 */
int ptr_const_ptr(int *const p)
{
 *p += 5;
 return *p;
}


/* Function: ptr_func_simple @ 0x1E1A */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1E3A */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 long long v2; // r8
 long long v3; // r9
 char *args[2]; // [rsp+10h] [rbp-20h] BYREF
 unsigned long long v6; // [rsp+28h] [rbp-8h]

 v6 = __readfsqword(0x28u);
 args[0] = "test";
 args[1] = 0;
 return ((long long ( *)(int *, char **, char **, int (*)(int *, char **), long long, long long, int *, int (*)(int *, char **)))f)(
 p,
 args,
 args,
 f,
 v2,
 v3,
 p,
 f);
}


/* Function: ptr_cast @ 0x1E9A */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1EC6 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x1ED8 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: complex_callback @ 0x1EEC */
int complex_callback(int *p, char **args)
{
 *p += 10;
 return *args != 0;
}


/* Function: test_pointer_types @ 0x1F1D */
void test_pointer_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 char c7; // [rsp+Fh] [rbp-B1h] BYREF
 int val1; // [rsp+10h] [rbp-B0h] BYREF
 int val2; // [rsp+14h] [rbp-ACh] BYREF
 int val3; // [rsp+18h] [rbp-A8h] BYREF
 int val7; // [rsp+1Ch] [rbp-A4h] BYREF
 int val8; // [rsp+20h] [rbp-A0h] BYREF
 int val9; // [rsp+24h] [rbp-9Ch] BYREF
 int val11; // [rsp+28h] [rbp-98h] BYREF
 int val12; // [rsp+2Ch] [rbp-94h] BYREF
 int *ptr2; // [rsp+30h] [rbp-90h] BYREF
 int *ptr3; // [rsp+38h] [rbp-88h] BYREF
 int **pptr3; // [rsp+40h] [rbp-80h] BYREF
 int **pptr2; // [rsp+48h] [rbp-78h]
 int ***ppptr3; // [rsp+50h] [rbp-70h]
 void *handle; // [rsp+58h] [rbp-68h]
 int arr4[8]; // [rsp+60h] [rbp-60h] BYREF
 int arr5[8]; // [rsp+80h] [rbp-40h] BYREF
 int arr6[6]; // [rsp+A0h] [rbp-20h] BYREF
 unsigned long long v32; // [rsp+B8h] [rbp-8h]

 v32 = __readfsqword(0x28u);
 puts(asc_32A2);
 val1 = 5;
 v0 = ptr_single(&val1);
 printf("PTR-L2-01 (ptr_single): %d\n", v0);
 val2 = 10;
 ptr2 = &val2;
 pptr2 = &ptr2;
 v1 = ptr_double(&ptr2);
 printf("PTR-L2-02 (ptr_double): %d\n", v1);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 ppptr3 = &pptr3;
 v2 = ptr_triple(&pptr3);
 printf("PTR-L2-03 (ptr_triple): %d\n", v2);
 arr4[0] = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 v3 = ptr_increment(arr4, 5);
 printf("PTR-L2-04 (ptr_increment): %d\n", v3);
 arr5[0] = 10;
 arr5[1] = 20;
 arr5[2] = 30;
 arr5[3] = 40;
 arr5[4] = 50;
 v4 = ptr_offset(arr5, 2);
 printf("PTR-L2-05 (ptr_offset): %d\n", v4);
 arr6[0] = 0;
 arr6[1] = 10;
 arr6[2] = 20;
 arr6[3] = 30;
 arr6[4] = 40;
 v5 = ptr_diff(&arr6[4], arr6);
 printf("PTR-L2-06 (ptr_diff): %d\n", v5);
 val7 = 42;
 c7 = 65;
 v6 = ptr_void(&val7, 0);
 printf("PTR-L2-07 (ptr_void): %d\n", v6);
 v7 = ptr_void(&c7, 1);
 printf("PTR-L2-07 (ptr_void): %d\n", v7);
 val8 = 10;
 v8 = ptr_const(&val8);
 printf("PTR-L2-08 (ptr_const): %d\n", v8);
 val9 = 10;
 v9 = ptr_const_ptr(&val9);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
 v10 = ptr_func_simple((int (*)(int))double_value, 5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
 val11 = 5;
 v11 = ptr_func_complex((int (*)(int *, char **))complex_callback, &val11);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
 val12 = 305419896;
 v12 = ptr_cast(&val12);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
 handle = opaque_handle_create(10);
 v13 = opaque_handle_op(handle);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
}


/* Function: struct_simple @ 0x228B */
int struct_simple(Point3D *p)
{
 return p->y + p->x + p->z;
}


/* Function: struct_array @ 0x22B1 */
int struct_array(Point3D *pts, int n)
{
 int sum; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += pts[i].y + pts[i].x + pts[i].z;
 return sum;
}


/* Function: struct_nested @ 0x2347 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x2364 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x2382 */
int struct_with_ptr(Node *node)
{
 int data; // eax

 if ( node->next )
 data = node->next->data;
 else
 data = 0;
 return node->data + data;
}


/* Function: struct_bitfields @ 0x23B6 */
int struct_bitfields(Flags *f)
{
 return ((*(unsigned char *)f >> 3) & 7) + ((*(unsigned char *)f >> 1) & 3) + (*(unsigned char *)f & 1) + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x2404 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x2441 */
int union_array(UnionData *arr, int n)
{
 int sum; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i].i;
 return sum;
}


/* Function: enum_type @ 0x248A */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x24A3 */
int enum_switch(State s)
{
 if ( s == STATE_STOPPED )
 return -1;
 if ( (unsigned int)s > STATE_STOPPED )
 return -99;
 if ( s == STATE_PAUSED )
 return 50;
 if ( s )
 return 100;
 return 0;
}


/* Function: struct_func_ptr @ 0x24F7 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x251B */
int linked_list(Node *head)
{
 int sum; // [rsp+Ch] [rbp-Ch]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: doubly_linked_list @ 0x2559 */
int doubly_linked_list(DNode *head)
{
 int sum; // [rsp+Ch] [rbp-Ch]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: binary_tree_sum @ 0x2597 */
int binary_tree_sum(TreeNode *root)
{
 int data; // ebx
 int v3; // ebx

 if ( !root )
 return 0;
 data = root->data;
 v3 = binary_tree_sum(root->left) + data;
 return v3 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x25E6 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x2604 */
int graph_traverse(Graph *g)
{
 int sum; // [rsp+8h] [rbp-10h]
 long long i; // [rsp+Ch] [rbp-Ch]
 Edge *edge; // [rsp+10h] [rbp-8h]

 sum = 0;
 LODWORD(i) = 0;
 while ( (int)i < g->numVertices )
 {
 for ( edge = g->adjList[(int)i]; edge; edge = edge->next )
 sum += edge->dest;
 i = (unsigned int)(i + 1);
 }
 return sum;
}


/* Function: test_composite_types @ 0x2665 */
void test_composite_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 short v5; // ax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 Flags f = 0;
 {
 unsigned short flag_val = 0;
 flag_val |= 1;    // bit 0 = 1
 flag_val |= 4;   // bit 2 = 1
 flag_val |= 0x18; // bits 3,4 = 1,1 (0x18 = 00011000)
 flag_val |= ((unsigned short)(25 & 0x3F) << 8); // bits 8-13 = 25
 f = (Flags)flag_val;
 }
 Point3D p1; // [rsp+14h] [rbp-1ACh] BYREF
 Node node2; // [rsp+20h] [rbp-1A0h] BYREF
 Node node1; // [rsp+30h] [rbp-190h] BYREF
 Device dev; // [rsp+40h] [rbp-180h] BYREF
 Edge e1; // [rsp+50h] [rbp-170h] BYREF
 Rect r; // [rsp+60h] [rbp-160h] BYREF
 TreeNode tree; // [rsp+80h] [rbp-140h] BYREF
 Widget w; // [rsp+A0h] [rbp-120h] BYREF
 UnionData u; // [rsp+D0h] [rbp-F0h] BYREF
 UnionData arr_u[3]; // [rsp+D4h] [rbp-ECh] BYREF
 Point3D pts[2]; // [rsp+E0h] [rbp-E0h] BYREF
 Node list[3]; // [rsp+100h] [rbp-C0h] BYREF
 DNode dlist[2]; // [rsp+130h] [rbp-90h] BYREF
 Graph g; // [rsp+160h] [rbp-60h] BYREF
 unsigned long long v31; // [rsp+1B8h] [rbp-8h]

 v31 = __readfsqword(0x28u);
 puts(asc_3452);
 p1.x = 1;
 p1.y = 2;
 p1.z = 3;
 v0 = struct_simple(&p1);
 printf("CMP-L2-01 (struct_simple): %d\n", v0);
 pts[0].x = 1;
 pts[0].y = 1;
 pts[0].z = 1;
 pts[1].x = 2;
 pts[1].y = 2;
 pts[1].z = 2;
 v1 = struct_array(pts, 2);
 printf("CMP-L2-02 (struct_array): %d\n", v1);
 r.position.x = 5;
 r.position.y = 10;
 r.position.z = 0;
 r.size.width = 100;
 r.size.height = 200;
 v2 = struct_nested(&r);
 printf("CMP-L2-03 (struct_nested): %d\n", v2);
 w.bounds.position.x = 1;
 w.bounds.position.y = 2;
 w.bounds.position.z = 3;
 w.bounds.size.width = 10;
 w.bounds.size.height = 20;
 w.style.fill.r = 255;
 w.style.fill.g = 0;
 w.style.fill.b = 0;
 w.style.stroke.r = 0;
 w.style.stroke.g = 0;
 w.style.stroke.b = 255;
 w.id = 42;
 v3 = struct_deep(&w);
 printf("CMP-L2-04 (struct_deep): %d\n", v3);
 node2.data = 20;
 node2.next = 0;
 node1.data = 10;
 node1.next = &node2;
 v4 = struct_with_ptr(&node1);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
 {
 unsigned short flag_val = 0;
 flag_val = flag_val | 1;    // bit 0 = 1
 flag_val = flag_val | 4;   // bit 2 = 1
 flag_val = flag_val | 0x18; // bits 3,4 = 1,1
 flag_val = flag_val | ((unsigned short)(25 & 0x3F) << 8); // bits 8-13 = 25
 f = (Flags)flag_val;
 }
 v6 = struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v6);
 u.i = 305419896;
 v7 = union_type(&u, 0);
 printf("CMP-L2-07 (union_type): %d\n", v7);
 arr_u[0].i = 10;
 arr_u[1].i = 20;
 arr_u[2].i = 30;
 v8 = union_array(arr_u, 3);
 printf("CMP-L2-08 (union_array): %d\n", v8);
 v9 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n", v9);
 v10 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n", v10);
 dev.data = 10;
 dev.process = (int (*)(int))process_int;
 v11 = struct_func_ptr(&dev);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v11);
 list[0].data = 10;
 list[0].next = &list[1];
 list[1].data = 20;
 list[1].next = &list[2];
 list[2].data = 30;
 list[2].next = 0;
 v12 = linked_list(list);
 printf("CMP-L2-12 (linked_list): %d\n", v12);
 dlist[0].data = 10;
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 dlist[0].next = &dlist[1];
 v13 = doubly_linked_list(dlist);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v13);
 tree.data = 100;
 tree.left = 0;
 tree.right = 0;
 v14 = binary_tree(&tree);
 printf("CMP-L2-14 (binary_tree): %d\n", v14);
 e1.dest = 1;
 e1.next = 0;
 memset(&g, 0, sizeof(g));
 g.numVertices = 2;
 g.adjList[0] = &e1;
 v15 = graph_traverse(&g);
 printf("CMP-L2-15 (graph_traverse): %d\n", v15);
}


/* Function: main @ 0x2BA5 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x2BDC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6020 */

/* FAILED to decompile: puts @ 0x6028 */

/* FAILED to decompile: __stack_chk_fail @ 0x6030 */

/* FAILED to decompile: printf @ 0x6038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6040 */

/* FAILED to decompile: __gmon_start__ @ 0x6050 */

/* Total functions decompiled: 68, failed: 6 */
