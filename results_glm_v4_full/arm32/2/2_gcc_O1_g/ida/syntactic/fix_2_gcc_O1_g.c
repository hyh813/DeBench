/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_O1_g
 * Processor: arm
 */

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/* Helper macros for accessing high/low parts of 64-bit values */
#define HIDWORD(x) (((unsigned int *)&(x))[1])
#define LODWORD(x) (*((unsigned int *)&(x)))
#define __PAIR64__(high, low) (((long long)(high) << 32) | (unsigned long long)(low))
#define __SPAIR64__(high, low) (((int)(high) << 32) | (unsigned long long)(low))
#define __CFSHL__(x, n) ((x) << (n))
#define __CFADD__(x, y) ((x) + (y))
#define HIBYTE(x) (((unsigned int)(x) >> 24) & 0xFF)
#define JUMPOUT(x) return

/* Stub for CRT weak function */
static int call_weak_fn(void) { return 0; }

/* Wrapper for __printf_chk to use standard printf */
static int _printf_chk(int flag, const char *format, ...)
{
    va_list args;
    int result;
    va_start(args, format);
    result = vprintf(format, args);
    va_end(args);
    return result;
}

/* String constants */
static const char *s = "Testing Data Types L1";
static const char *asc_12120 = "Testing Array Types";
static const char *asc_1224C = "Testing Pointer Types";
static const char *asc_123F4 = "Testing Composite Types";

/* Type definitions */
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
    Point3D position;
    Size size;
} Rect;

typedef struct Color {
    int r;
    int g;
    int b;
    int a;
} Color;

typedef struct Style {
    Color fill;
    Color stroke;
} Style;

typedef struct Bounds {
    Point3D position;
    Point3D size;
} Bounds;

typedef struct Widget {
    Bounds bounds;
    Style style;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Flags {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int flag4 : 10;
} Flags;

typedef union UnionData {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef enum State {
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

typedef struct Device {
    int data;
    int (*process)(int);
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

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

typedef struct Graph {
    int numVertices;
    Edge *adjList[20];
} Graph;

/* Function: .init_proc @ 0x103B8 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103C4 @ 0x103C4 */
void sub_103C4()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x10524 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: process_int @ 0x1052C */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: complex_callback @ 0x10538 */
int complex_callback(int *p, char **args)
{
 int result; // r0

 *p += 10;
 result = (int)*args;
 if ( *args )
 return 1;
 return result;
}


/* Function: process_char @ 0x10554 */
char process_char(char c)
{
 if ( (unsigned int)(c - 65) <= 0x19 )
 c += 32;
 return c;
}


/* Function: process_short @ 0x10568 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_long @ 0x10578 */
int process_long(int x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x10580 */
long long process_ll(long long x)
{
 unsigned long long v1; // kr00_8

 HIDWORD(x) *= (unsigned int)x;
 v1 = (unsigned int)x * (unsigned long long)(unsigned int)x;
 LODWORD(x) = x * x;
 HIDWORD(x) = HIDWORD(v1) + 2 * HIDWORD(x);
 return x;
}


/* Function: process_float @ 0x10594 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x105AC */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x105D8 */
double process_ld(double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x105FC */
bool process_bool(int x)
{
 char v1; // r0

 if ( x <= 0 )
 v1 = 0;
 else
 v1 = 1 - (x & 1);
 return v1 & 1;
}


/* Function: const_param @ 0x10614 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x10620 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x10630 */
void test_data_types_l1()
{
 puts(s);
 _printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 _printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 _printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 _printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 _printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 _printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000LL);
 _printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 _printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 _printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 _printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 _printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x10794 */
int array_1d_stack(int *arr, int n)
{
 int *v2; // r3
 int *v3; // r1
 int result; // r0
 int v5; // t1

 if ( n <= 0 )
 return 0;
 v2 = arr - 1;
 v3 = &arr[n - 1];
 result = 0;
 do
 {
 v5 = v2[1];
 ++v2;
 result += v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: array_string @ 0x107C4 */
int array_string(char *str)
{
 char *v1; // r3
 int v2; // r1
 int result; // r0

 if ( !*str )
 return 0;
 v1 = str;
 v2 = 1 - (unsigned int)str;
 do
 result = (int)&v1[v2];
 while ( *++v1 );
 return result;
}


/* Function: array_2d_stack @ 0x107F4 */
int array_2d_stack(int (*arr)[10])
{
 int v2; // r3
 int result; // r0

 v2 = 0;
 result = 0;
 do
 {
 result += (*arr)[v2];
 v2 += 11;
 }
 while ( v2 != 110 );
 return result;
}


/* Function: array_3d @ 0x10818 */
int array_3d(int (*arr)[5][5])
{
 int *v1; // r1
 int *v2; // r12
 int result; // r0
 int *v4; // r3

 v1 = (*arr)[5];
 v2 = (*arr)[30];
 result = 0;
 do
 {
 v4 = v1 - 25;
 do
 {
 result += *v4 + v4[1] + v4[2] + v4[3] + v4[4];
 v4 += 5;
 }
 while ( v4 != v1 );
 v1 += 25;
 }
 while ( v1 != v2 );
 return result;
}


/* Function: array_vla @ 0x1086C */
int array_vla(int n, int *arr)
{
 int *v2; // r1
 int *v3; // r2
 int result; // r0
 int v5; // t1

 if ( n <= 0 )
 return 0;
 v2 = arr - 1;
 v3 = &v2[n];
 result = 0;
 do
 {
 v5 = v2[1];
 ++v2;
 result += v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: array_pointer @ 0x1089C */
int array_pointer(int (*arr)[10], int n)
{
 int v3; // r3
 int result; // r0

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 result += (*arr)[v3];
 v3 += 10;
 }
 while ( v3 != 10 * n );
 return result;
}


/* Function: pointer_array @ 0x108D8 */
int pointer_array(int **arr, int n)
{
 int v2; // r12
 int **v3; // r1
 int v4; // r3
 int result; // r0
 int *v6; // r2
 int *v7; // t1

 if ( n >= 10 )
 v2 = 10;
 else
 v2 = n;
 if ( n <= 0 )
 return 0;
 v3 = arr - 1;
 v4 = 0;
 result = 0;
 do
 {
 v7 = v3[1];
 ++v3;
 v6 = v7;
 if ( v7 )
 result += *v6;
 ++v4;
 }
 while ( v2 > v4 );
 return result;
}


/* Function: array_complex_index @ 0x10920 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( (x >= w) | ((x | (unsigned int)y) >> 31) )
 return -1;
 if ( y >= h )
 return -1;
 return arr[x + y * w];
}


/* Function: array_oob @ 0x10964 */
int array_oob(int *arr, int n)
{
 int *v2; // r3
 int *v3; // r1
 int result; // r0
 int v5; // t1

 if ( n < 0 )
 return 0;
 v2 = arr - 1;
 v3 = &arr[n];
 result = 0;
 do
 {
 v5 = v2[1];
 ++v2;
 result += v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: test_array_types @ 0x10994 */
void test_array_types()
{
 int v0; // r0
 int v1; // r0
 int *v2; // r12
 int i; // r0
 int *v4; // r2
 int j; // r3
 int v6; // r1
 int v7; // r0
 char *v8; // r0
 char *v9; // r3
 int k; // r1
 int v11; // r0
 int v12; // r0
 int v13; // r0
 int v14; // r0
 int **v15; // r2
 int *m; // r3
 int a; // [sp+4h] [bp-514h] BYREF
 int b; // [sp+8h] [bp-510h] BYREF
 int c; // [sp+Ch] [bp-50Ch] BYREF
 int vla_arr[3]; // [sp+10h] [bp-508h] BYREF
 int arr1[5]; // [sp+1Ch] [bp-4FCh] BYREF
 int *ptr_arr[10]; // [sp+30h] [bp-4E8h] BYREF
 int v23[20]; // [sp+58h] [bp-4C0h]
 int arr2[5][10]; // [sp+A8h] [bp-470h] BYREF
 int matrix[10][10]; // [sp+170h] [bp-3A8h] BYREF
 int cube[5][5][5]; // [sp+300h] [bp-218h] BYREF
 char str[8]; // [sp+4F4h] [bp-24h] BYREF

 puts(asc_12120);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr1[3] = 4;
 arr1[4] = 5;
 v0 = array_1d_stack(arr1, 5);
 _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(str, "hello");
 v1 = array_string(str);
 _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
 v2 = (int *)&arr2[4][9];
 for ( i = 0; i != 10; ++i )
 {
 v4 = v2;
 for ( j = 0; j != 10; ++j )
 {
 if ( i == j )
 v6 = j;
 else
 v6 = 0;
 *v4 = v6;
 ++v4;
 }
 v2 -= 9;
 }
 v7 = array_2d_stack(matrix);
 _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v7);
 v8 = (char *)cube;
 do
 {
 v9 = v8;
 for ( k = 0; k != 5; ++k )
 {
 *(unsigned int *)v9 = 1;
 *((unsigned int *)v9 + 1) = 1;
 *((unsigned int *)v9 + 2) = 1;
 *((unsigned int *)v9 + 3) = 1;
 *((unsigned int *)v9 + 4) = 1;
 v9 += 20;
 }
 v8 += 100;
 }
 while ( v8 != str );
 v11 = array_3d(cube);
 _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v11);
 vla_arr[0] = 10;
 vla_arr[1] = 20;
 vla_arr[2] = 30;
 v12 = array_vla(3, vla_arr);
 _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v12);
 arr2[0][0] = 0;
 arr2[1][0] = 10;
 arr2[2][0] = 20;
 arr2[3][0] = 30;
 arr2[4][0] = 40;
 v13 = array_pointer(arr2, 5);
 _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v13);
 a = 10;
 b = 20;
 c = 30;
 memset(&ptr_arr[3], 0, 28);
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 v14 = pointer_array(ptr_arr, 3);
 _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v14);
 v15 = &ptr_arr[9];
 for ( m = 0; m != (int *)20; m = (int *)((char *)m + 1) )
 {
 v15[1] = m;
 ++v15;
 }
 _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v23[17]);
}


/* Function: ptr_single @ 0x10C28 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x10C34 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x10C44 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x10C58 */
int ptr_increment(int *p, int n)
{
 int v3; // r3
 int result; // r0
 int v5; // t1

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = *p++;
 result += v5;
 ++v3;
 }
 while ( n != v3 );
 return result;
}


/* Function: ptr_offset @ 0x10C8C */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x10C94 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x10CA0 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned char *)p;
 return -1;
}


/* Function: ptr_const @ 0x10CC0 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x10CCC */
int ptr_const_ptr(int *const p)
{
 int result; // r0

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x10CE0 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x10CF4 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [sp+4h] [bp-14h] BYREF

 args[0] = "test";
 args[1] = 0;
 return f(p, args);
}


/* Function: ptr_cast @ 0x10D58 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x10D60 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x10D64 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x10D6C */
void test_pointer_types()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int val3; // [sp+0h] [bp-38h] BYREF
 int *ptr3; // [sp+4h] [bp-34h] BYREF
 int **pptr3; // [sp+8h] [bp-30h] BYREF
 int val11; // [sp+Ch] [bp-2Ch] BYREF
 int arr4[5]; // [sp+10h] [bp-28h] BYREF

 puts(asc_1224C);
 _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 v0 = ptr_triple(&pptr3);
 _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
 arr4[0] = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 v1 = ptr_increment(arr4, 5);
 _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
 _printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 _printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 _printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 _printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 v2 = ptr_func_simple(double_value, 5);
 _printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
 val11 = 5;
 v3 = ptr_func_complex(complex_callback, &val11);
 _printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
 _printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 _printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x10F3C */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x10F54 */
int struct_array(Point3D *pts, int n)
{
 Point3D *v2; // r3
 Point3D *v3; // r12
 int result; // r0

 if ( n <= 0 )
 return 0;
 v2 = pts;
 v3 = &pts[n];
 result = 0;
 do
 {
 result += v2->x + v2->y + v2->z;
 ++v2;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: struct_nested @ 0x10F9C */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x10FAC */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x10FBC */
int struct_with_ptr(Node *node)
{
 int data; // r2
 Node *next; // r3
 int v3; // r0

 data = node->data;
 next = node->next;
 if ( next )
 v3 = next->data;
 else
 v3 = 0;
 return data + v3;
}


/* Function: struct_bitfields @ 0x10FD8 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned char *)f & 1)
 + ((unsigned int)(*(unsigned char *)f << 29) >> 30)
 + ((unsigned int)(*(unsigned char *)f << 26) >> 29)
 + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x10FFC */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x1102C */
int union_array(UnionData *arr, int n)
{
 UnionData *v2; // r3
 UnionData *v3; // r1
 int result; // r0
 UnionData v5; // t1

 if ( n <= 0 )
 return 0;
 v2 = arr - 1;
 v3 = &arr[n - 1];
 result = 0;
 do
 {
 v5.i = v2[1].i;
 ++v2;
 result += v5.i;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: enum_type @ 0x1105C */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x11068 */
int enum_switch(State s)
{
 int result; // r0

 switch ( s )
 {
 case STATE_IDLE:
 result = 0;
 break;
 case STATE_RUNNING:
 result = 100;
 break;
 case STATE_PAUSED:
 result = 50;
 break;
 case STATE_STOPPED:
 result = -1;
 break;
 default:
 result = -99;
 break;
 }
 return result;
}


/* Function: struct_func_ptr @ 0x110AC */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x110C0 */
int linked_list(Node *head)
{
 Node *v1; // r3
 int result; // r0

 v1 = head;
 if ( !head )
 return 0;
 result = 0;
 do
 {
 result += v1->data;
 v1 = v1->next;
 }
 while ( v1 );
 return result;
}


/* Function: doubly_linked_list @ 0x110EC */
int doubly_linked_list(DNode *head)
{
 DNode *v1; // r3
 int result; // r0

 v1 = head;
 if ( !head )
 return 0;
 result = 0;
 do
 {
 result += v1->data;
 v1 = v1->next;
 }
 while ( v1 );
 return result;
}


/* Function: binary_tree_sum @ 0x11118 */
int binary_tree_sum(TreeNode *root)
{
 int v2; // r5

 if ( !root )
 return 0;
 v2 = binary_tree_sum(root->left) + root->data;
 return v2 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x1114C */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x11158 */
int graph_traverse(Graph *g)
{
 int numVertices; // r12
 int *p_numVertices; // r1
 Edge **v3; // r12
 int result; // r0
 unsigned int *i; // r3
 unsigned int *v6; // t1

 numVertices = g->numVertices;
 if ( numVertices <= 0 )
 return 0;
 p_numVertices = &g[-1].numVertices;
 v3 = &g[-1].adjList[numVertices + 10];
 result = 0;
 do
 {
 v6 = (unsigned int *)p_numVertices[1];
 ++p_numVertices;
 for ( i = v6; i; i = (unsigned int *)i[1] )
 result += *i;
 }
 while ( p_numVertices != (int *)v3 );
 return result;
}


/* Function: test_composite_types @ 0x111A4 */
void test_composite_types()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 Node node2; // [sp+4h] [bp-DCh] BYREF
 Node node1; // [sp+Ch] [bp-D4h] BYREF
 Flags f; // [sp+14h] [bp-CCh] BYREF
 Device dev; // [sp+1Ch] [bp-C4h] BYREF
 Edge e1; // [sp+24h] [bp-BCh] BYREF
 Point3D p1; // [sp+2Ch] [bp-B4h] BYREF
 TreeNode tree; // [sp+38h] [bp-A8h] BYREF
 UnionData arr_u[3]; // [sp+44h] [bp-9Ch] BYREF
 Point3D pts[2]; // [sp+50h] [bp-90h] BYREF
 Node list[3]; // [sp+68h] [bp-78h] BYREF
 DNode dlist[2]; // [sp+80h] [bp-60h] BYREF
 Graph g; // [sp+98h] [bp-48h] BYREF

 puts(asc_123F4);
 p1.x = 1;
 p1.y = 2;
 p1.z = 3;
 v0 = struct_simple(&p1);
 _printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", v0);
 pts[0].x = 1;
 pts[0].y = 1;
 pts[0].z = 1;
 pts[1].x = 2;
 pts[1].y = 2;
 pts[1].z = 2;
 v1 = struct_array(pts, 2);
 _printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v1);
 _printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 _printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 node2.data = 20;
 node2.next = 0;
 node1.data = 10;
 node1.next = &node2;
 v2 = struct_with_ptr(&node1);
 _printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v2);
 *(unsigned int *)&f = 6429;
 *((unsigned int *)&f + 1) = 0;
 v3 = struct_bitfields(&f);
 _printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v3);
 _printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 arr_u[0].i = 10;
 arr_u[1].i = 20;
 arr_u[2].i = 30;
 v4 = union_array(arr_u, 3);
 _printf_chk(1, "CMP-L2-08 (union_array): %d\n", v4);
 _printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 _printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 dev.data = 10;
 dev.process = process_int;
 v5 = struct_func_ptr(&dev);
 _printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v5);
 list[0].data = 10;
 list[0].next = &list[1];
 list[1].data = 20;
 list[1].next = &list[2];
 list[2].data = 30;
 list[2].next = 0;
 v6 = linked_list(list);
 _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v6);
 dlist[0].data = 10;
 dlist[0].next = &dlist[1];
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 v7 = doubly_linked_list(dlist);
 _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v7);
 tree.data = 100;
 tree.left = 0;
 tree.right = 0;
 v8 = binary_tree_sum(&tree);
 _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v8);
 e1.dest = 1;
 e1.next = 0;
 memset(&g.adjList[1], 0, 0x24u);
 g.adjList[0] = &e1;
 g.numVertices = 2;
 v9 = graph_traverse(&g);
 _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v9);
}


/* Function: main @ 0x11478 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: __muldf3 @ 0x11494 */
int _muldf3(long long a1, unsigned int a2, unsigned int a3)
{
 int v3; // r5
 unsigned int v4; // r12
 bool v5; // zf
 int v6; // r4
 int v7; // r4
 int v8; // r6
 int v9; // r1
 int v10; // r3
 bool v11; // zf
 int v12; // r3
 int v13; // r12
 unsigned int v14; // r5
 unsigned int v15; // lr
 unsigned int v16; // r2
 unsigned int v17; // lr
 unsigned long long v18; // kr10_8
 unsigned int v19; // r5
 unsigned int v20; // r6
 int v21; // r4
 unsigned int v22; // off
 unsigned int v24; // lr
 bool v25; // cc
 bool v26; // cf
 int v27; // r4
 int v28; // r4
 int v29; // r4
 char v30; // r4
 char v31; // r4
 unsigned int v32; // r3
 char v33; // r4
 unsigned int v34; // r3
 int v35; // lr
 unsigned int v36; // r3

 v4 = 2047;
 v6 = (HIDWORD(a1) >> 20) & 0x7FF;
 v5 = v6 == 0;
 if ( v6 )
 {
 v3 = (a3 >> 20) & 0x7FF;
 v5 = v3 == 0;
 }
 if ( !v5 )
 {
 v5 = v6 == 0x7FF;
 if ( v6 != 0x7FF )
 v5 = v3 == 0x7FF;
 }
 if ( v5 )
 a1 = sub_11674();
 v7 = v6 + v3;
 v8 = HIDWORD(a1) ^ a3;
 v9 = HIDWORD(a1) & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
 if ( (unsigned int)a1 | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 HIDWORD(a1) = v9 | 0x100000;
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 LODWORD(a1) = a1 | a2;
 HIDWORD(a1) = (v8 & 0x80000000 | HIDWORD(a1)) ^ v12;
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return a1;
 HIDWORD(a1) |= 0x100000u;
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = a1 * a2;
 v14 = (HIDWORD(a1) * (unsigned long long)a2 + (((unsigned int)a1 * (unsigned long long)a2) >> 32)) >> 32;
 v15 = (a1 * (unsigned long long)a2) >> 32;
 v16 = v8 & 0x80000000;
 v18 = (unsigned int)a1 * (unsigned long long)(unsigned int)v12 + __PAIR64__(v14, v15);
 v17 = v18;
 v20 = (HIDWORD(a1) * (unsigned long long)(unsigned int)v12 + HIDWORD(v18)) >> 32;
 v19 = HIDWORD(a1) * v12 + HIDWORD(v18);
 if ( v13 )
 v17 = v18 | 1;
 v21 = (__PAIR64__(v7 - 255, v20) - 0x30000000200LL) >> 32;
 if ( v20 < 0x200 )
 {
 v26 = __CFSHL__(v17, 1);
 v17 *= 2;
 v22 = v26 + v19;
 v26 = __CFADD__(v26, v19) | __CFADD__(v19, v22);
 v19 += v22;
 v20 += v26 + v20;
 }
 HIDWORD(a1) = v16 | (v20 << 11) | (v19 >> 21);
 LODWORD(a1) = (v19 << 11) | (v17 >> 21);
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = a1 & 1;
 LODWORD(a1) = v26 + (unsigned int)a1;
 return a1;
 }
 }
 if ( !v25 )
 JUMPOUT(0x116E0);
 if ( v21 > -54 )
 {
 v28 = -v21;
 v25 = v28 < 32;
 v29 = v28 - 32;
 if ( v25 )
 {
 v25 = v29 <= -12;
 v30 = v29 + 12;
 if ( v25 )
 {
 v31 = v30 + 20;
 v32 = (unsigned int)a1 << (32 - v31);
 LODWORD(a1) = (((unsigned int)a1 >> v31) | (HIDWORD(a1) << (32 - v31))) + (v32 >> 31);
 if ( !(v24 | (2 * v32)) )
 LODWORD(a1) = a1 & ~(v32 >> 31);
 }
 else
 {
 v33 = 12 - v30;
 v34 = (unsigned int)a1 << v33;
 LODWORD(a1) = (((unsigned int)a1 >> (32 - v33)) | (HIDWORD(a1) << v33)) + ((unsigned int)a1 << v33 >> 31);
 if ( !(v24 | (2 * v34)) )
 LODWORD(a1) = a1 & ~(v34 >> 31);
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)a1 << (32 - v29));
 v36 = ((unsigned int)a1 >> v29) | (HIDWORD(a1) << (32 - v29));
 LODWORD(a1) = ((HIDWORD(a1) >> v29) & ~((HIDWORD(a1) & 0x80000000) >> v29)) + (v36 >> 31);
 if ( !(v35 | (2 * v36)) )
 LODWORD(a1) = a1 & ~(v36 >> 31);
 }
 }
 else
 {
 LODWORD(a1) = 0;
 }
 return a1;
}


/* Function: sub_11674 @ 0x11674 */
int sub_11674(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf
 unsigned int v16, v17, v18, v20;

 v9 = (result >> 20) & 0x7FF;
 v10 = (a3 >> 20) & 0x7FF;
 v12 = v10 & (a4 >> 20);
 v11 = v9 == v10;
 if ( v9 != v10 )
 v11 = v12 == v10;
 if ( v11 )
 {
 v14 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 {
 v14 = (a3 | (2 * a4)) == 0;
 }
 else
 {
 result = a3;
 a2 = a4;
 }
 if ( !v14 && (v9 != v10 || !(result | (a2 << 12))) && (v12 != v10 || !(a3 | (a4 << 12))) )
 return result;
 return result;
 }
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 return result;
 if ( v9 )
 goto LABEL_24;
 while ( 1 )
 {
 v8 = (result & 0x80000000) != 0;
 result = result * 2;
 v16 = a2;
 a2 = a2 * 2;
 a2 = v8 ? a2 + 1 : a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v9;
 }
 if ( !v12 )
 {
LABEL_24:
 while ( 1 )
 {
 v8 = (a3 & 0x80000000) != 0;
 a3 = a3 * 2;
 v17 = a4;
 a4 = a4 * 2;
 a4 = v8 ? a4 + 1 : a4;
 if ( (a4 & 0x100000) != 0 )
 break;
 --v12;
 }
 }
 return result;
}


/* Function: __mulsf3 @ 0x11700 */
int _mulsf3(unsigned int a1, unsigned int a2, int a3, int a4)
{
 bool v4; // zf
 int v5; // r2
 int v6; // r2
 int v7; // r12
 bool v8; // zf
 unsigned int v9; // r0
 unsigned int v10; // r1
 unsigned int v11; // r3
 int v12; // kr00_4
 bool v13; // cf
 unsigned int v14; // r0
 int v15; // r2
 bool v16; // cc
 int result; // r0
 unsigned int v18; // r12
 int v19; // r0
 int v20; // r2
 int v21; // r2
 unsigned int v22; // r12
 unsigned int v23; // r12
 bool v24; // zf
 bool v25; // zf
 unsigned int v26; // r12
 bool v27; // zf
 bool v28; // zf
 bool v29; // zf
 unsigned int a2_exp;

 v5 = (unsigned char)(a1 >> 23);
 v4 = v5 == 0;
 if ( (unsigned char)(a1 >> 23) )
 {
 a2_exp = (unsigned char)(a2 >> 23);
 v4 = a2_exp == 0;
 }
 if ( !v4 )
 {
 v4 = v5 == 0xFF;
 if ( v5 != 0xFF )
 v4 = a4 == 0xFF;
 }
 if ( v4 )
 {
 a4 = (unsigned char)(a2 >> 23);
 v27 = v5 == 0xFF;
 if ( v5 != 0xFF )
 v27 = a4 == 0xFF;
 if ( v27 )
 {
 v29 = a1 == 0;
 if ( a1 )
 v29 = a1 == 0x80000000;
 if ( v29 )
 a1 = a2;
 else
 v29 = a2 == 0;
 if ( !v29 )
 v29 = a2 == 0x80000000;
 if ( !v29 && (v5 != 0xFF || !(a1 << 9)) )
 {
 if ( a4 != 0xFF || !(a2 << 9) )
 {
 v14 = a1 ^ a2;
 return v14 & 0x80000000 | 0x7F800000;
 }
 a1 = a2;
 }
 return a1 | 0x7FC00000;
 }
 v28 = (a1 & 0x7FFFFFFF) == 0;
 if ( (a1 & 0x7FFFFFFF) != 0 )
 v28 = (a2 & 0x7FFFFFFF) == 0;
 if ( v28 )
 return (a1 ^ a2) & 0x80000000;
 v24 = v5 == 0;
 v23 = a1 & 0x80000000;
 while ( v24 )
 {
 a1 *= 2;
 v24 = (a1 & 0x800000) == 0;
 if ( (a1 & 0x800000) != 0 )
 break;
 --v5;
 }
 a1 |= v23;
 v25 = a4 == 0;
 v26 = a2 & 0x80000000;
 while ( v25 )
 {
 a2 *= 2;
 v25 = (a2 & 0x800000) == 0;
 if ( (a2 & 0x800000) != 0 )
 break;
 --a4;
 }
 a2 |= v26;
 }
 v6 = v5 + a4;
 v7 = a1 ^ a2;
 v9 = a1 << 9;
 v8 = v9 == 0;
 if ( v9 )
 {
 a2 <<= 9;
 v8 = a2 == 0;
 }
 if ( v8 )
 {
 v18 = v7 & 0x80000000;
 if ( !v9 )
 a2 <<= 9;
 v19 = v18 | (v9 >> 9) | (a2 >> 9);
 v16 = v6 <= 127;
 v20 = v6 - 127;
 if ( !v16 && v20 < 255 )
 return v19 | (v20 << 23);
 v14 = v19 | 0x800000;
 v11 = 0;
 v16 = v20 <= 1;
 v15 = v20 - 1;
 }
 else
 {
 v12 = ((v9 >> 5) | 0x8000000) * ((a2 >> 5) | 0x8000000);
 v10 = (((v9 >> 5) | 0x8000000) * (unsigned long long)((a2 >> 5) | 0x8000000)) >> 32;
 v11 = v12;
 v13 = v10 >= 0x800000;
 if ( v10 < 0x800000 )
 {
 v10 = __SPAIR64__(v10, v12) >> 31;
 v11 = 2 * v12;
 }
 v14 = v7 & 0x80000000 | v10;
 v15 = v6 - (!v13 + 127);
 v16 = v15 <= 253;
 if ( (unsigned int)v15 <= 0xFD )
 {
 result = (v15 << 23) + (v11 >= 0x80000000) + v14;
 if ( v11 == 0x80000000 )
 return result & 0xFFFFFFFE;
 return result;
 }
 }
 if ( !v16 )
 return v14 & 0x80000000 | 0x7F800000;
 if ( v15 <= -25 )
 return v14 & 0x80000000;
 v21 = -v15;
 v22 = v14 << (32 - v21);
 result = (((2 * v14) >> v21) & 1) + (((2 * v14) >> v21 >> 1) | (__CFSHL__(v14, 1) << 31));
 if ( !(v11 | (2 * v22)) )
 return result & ~(v22 >> 31);
 return result;
}


/* Function: __aeabi_drsub @ 0x11898 */
double _aeabi_drsub(double a1, double a2)
{
 unsigned int *p = (unsigned int *)&a1;
 p[1] ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x118A0 */
double _subdf3(double a1, double a2)
{
 unsigned int *p = (unsigned int *)&a2;
 p[1] ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11B50 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x119EC);
 return result;
}


/* Function: __floatsidf @ 0x11B74 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x119EC);
 return result;
}


/* Function: __extendsfdf2 @ 0x11B9C */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 JUMPOUT(0x119EC);
 }
 return result;
}


/* Function: __floatundidf @ 0x11BE4 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11C14);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x11C58 */
float _aeabi_frsub(int a1, float a2)
{
 unsigned int a1_u = a1;
 a1_u ^= 0x80000000;
 return *(float *)&a1_u + a2;
}


/* Function: __subsf3 @ 0x11C60 */
float _subsf3(float a1, int a2)
{
 unsigned int a2_u = a2;
 a2_u ^= 0x80000000;
 return a1 + *(float *)&a2_u;
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x11DF4 */
void _floatunsisf()
{
 JUMPOUT(0x11E04);
}


/* Function: __floatsisf @ 0x11DFC */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x11E5C);
 return result;
}


/* Function: __floatundisf @ 0x11E1C */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11E44);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x11EA8 */
unsigned int _fixsfsi(int a1)
{
 unsigned int v1; // r2
 bool v2; // cf
 int v3; // r2
 bool v4; // zf
 unsigned int result; // r0

 v1 = 2 * a1;
 if ( (unsigned int)(2 * a1) < 0x7F000000 )
 return 0;
 v2 = HIBYTE(v1) <= 0x9Eu;
 v3 = 158 - HIBYTE(v1);
 if ( v3 != 0 && v2 )
 {
 v4 = a1 >= 0;
 result = ((a1 << 8) | 0x80000000) >> v3;
 if ( !v4 )
 return -result;
 }
 else if ( v3 == -97 && a1 << 9 )
 {
 return 0;
 }
 else
 {
 result = a1 & 0x80000000;
 if ( !result )
 return 0x7FFFFFFF;
 }
 return result;
}


/* Function: .term_proc @ 0x11F04 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x23040 */

/* FAILED to decompile: __imp_memset @ 0x23044 */

/* FAILED to decompile: __imp___printf_chk @ 0x23048 */

/* FAILED to decompile: __imp_abort @ 0x2304C */

/* FAILED to decompile: __imp___libc_start_main @ 0x23050 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x23054 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23058 */

/* Total functions decompiled: 85, failed: 7 */
