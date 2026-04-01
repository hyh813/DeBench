/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_O0_g
 * Processor: arm
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Macros for accessing high/low DWORDs of 64-bit values */
#define LODWORD(x) (((int*)&(x))[0])
#define HIDWORD(x) (((int*)&(x))[1])

/* Macro for carry flag from shift left */
#define __CFSHL__(x, n) (((x) >> (32 - (n))) & 1)

/* Global string declarations */
const char *s = "Testing data types...";
const char *asc_13530 = "Testing array types...";
const char *asc_1367C = "Testing pointer types...";
const char *asc_1384C = "Testing composite types...";

/* Type definitions */
typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Size {
    int width;
    int height;
} Size;

typedef struct Rect {
    Point3D position;
    Size size;
} Rect;

typedef struct Color {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct Style {
    Color fill;
    Color stroke;
} Style;

typedef struct Widget {
    Rect bounds;
    Style style;
    int id;
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

typedef struct Graph {
    int numVertices;
    Edge *adjList[10];
} Graph;

typedef struct Flags {
    unsigned int flags;
} Flags;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
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

/* Function: .init_proc @ 0x103B4 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103C0 @ 0x103C0 */
void sub_103C0()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x10520 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: process_char @ 0x10548 */
char process_char(char c)
{
 if ( (unsigned char)c <= 0x40u || (unsigned char)c > 0x5Au )
 return c;
 else
 return c + 32;
}


/* Function: process_short @ 0x10598 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x105E4 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x10610 */
int process_long(int x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x10638 */
long long process_ll(long long x)
{
 long long v1; // r2

 v1 = (unsigned int)x * (unsigned long long)(unsigned int)x;
 HIDWORD(v1) += 2 * x * HIDWORD(x);
 return v1;
}


/* Function: process_float @ 0x10690 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x106CC */
double process_double(double d)
{
 return d / 2.0 + 0.1;
}


/* Function: process_ld @ 0x10730 */
double process_ld(double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x10790 */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x107E0 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x1080C */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x10850 */
void test_data_types_l1()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 long long v5; // r0
 double v6; // r0
 double v7; // r0
 double v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int v13; // r0
 int value; // [sp+4h] [bp-10h] BYREF
 int vol_value; // [sp+8h] [bp-Ch] BYREF

 puts(s);
 v0 = process_char(65);
 printf("DT-L1-01 (process_char): %c\n", v0);
 v1 = process_char(98);
 printf("DT-L1-01 (process_char): %c\n", v1);
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


/* Function: array_1d_stack @ 0x10A5C */
int array_1d_stack(int *arr, int n)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_string @ 0x10AD4 */
int array_string(char *str)
{
 int len; // [sp+Ch] [bp-8h]

 for ( len = 0; str[len]; ++len )
 ;
 return len;
}


/* Function: array_2d_stack @ 0x10B28 */
int array_2d_stack(int (*arr)[10])
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i <= 9; ++i )
 sum += (*arr)[10 * i + i];
 return sum;
}


/* Function: array_3d @ 0x10BAC */
int array_3d(int (*arr)[5][5])
{
 int sum; // [sp+8h] [bp-14h]
 int i; // [sp+Ch] [bp-10h]
 int j; // [sp+10h] [bp-Ch]
 int k; // [sp+14h] [bp-8h]

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


/* Function: array_vla @ 0x10C94 */
int array_vla(int n, int *arr)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_pointer @ 0x10D0C */
int array_pointer(int (*arr)[10], int n)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += (*arr)[10 * i];
 return sum;
}


/* Function: pointer_array @ 0x10D94 */
int pointer_array(int **arr, int n)
{
 int v2; // r3
 int sum; // [sp+Ch] [bp-10h]
 int i; // [sp+10h] [bp-Ch]

 sum = 0;
 v2 = n;
 if ( n >= 10 )
 v2 = 10;
 for ( i = 0; i < v2; ++i )
 {
 if ( arr[i] )
 sum += *arr[i];
 }
 return sum;
}


/* Function: array_complex_index @ 0x10E40 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( x >= 0 && x < w && y >= 0 && y < h )
 return arr[y * w + x];
 else
 return -1;
}


/* Function: array_oob @ 0x10ED0 */
int array_oob(int *arr, int n)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i <= n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: test_array_types @ 0x10F48 */
void test_array_types()
{
 int v0; // r0
 int v1; // r0
 int v2; // r2
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int a; // [sp+8h] [bp-51Ch] BYREF
 int b; // [sp+Ch] [bp-518h] BYREF
 int c; // [sp+10h] [bp-514h] BYREF
 int i; // [sp+14h] [bp-510h]
 int j; // [sp+18h] [bp-50Ch]
 int i_0; // [sp+1Ch] [bp-508h]
 int j_0; // [sp+20h] [bp-504h]
 int k; // [sp+24h] [bp-500h]
 int i_1; // [sp+28h] [bp-4FCh]
 int i_2; // [sp+2Ch] [bp-4F8h]
 int vla_arr[3]; // [sp+30h] [bp-4F4h] BYREF
 int arr1[5]; // [sp+3Ch] [bp-4E8h] BYREF
 int *ptr_arr[10]; // [sp+50h] [bp-4D4h] BYREF
 int v22[20]; // [sp+78h] [bp-4ACh] BYREF
 int arr2[5][10]; // [sp+C8h] [bp-45Ch] BYREF
 int matrix[10][10]; // [sp+190h] [bp-394h] BYREF
 int cube[5][5][5]; // [sp+320h] [bp-204h] BYREF
 char str[8]; // [sp+514h] [bp-10h] BYREF

 puts(asc_13530);
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
 vla_arr[0] = *(unsigned int *)"\n";
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
 memset(ptr_arr, 0, sizeof(ptr_arr));
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 v7 = pointer_array(ptr_arr, 3);
 printf("ARR-L2-03 (pointer_array): %d\n", v7);
 for ( i_2 = 0; i_2 <= 19; ++i_2 )
 v22[i_2] = i_2;
 v8 = array_complex_index(v22, 5, 4, 2, 3);
 printf("ARR-L2-04 (array_complex_index): %d\n", v8);
}


/* Function: ptr_single @ 0x11378 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x113A4 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x113D4 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x11408 */
int ptr_increment(int *p, int n)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *p++;
 return sum;
}


/* Function: ptr_offset @ 0x11480 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x114B8 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x114EC */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned char *)p;
 return -1;
}


/* Function: ptr_const @ 0x11544 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x11570 */
int ptr_const_ptr(int *const p)
{
 *p += 5;
 return *p;
}


/* Function: ptr_func_simple @ 0x115AC */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x115DC */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [sp+Ch] [bp-10h] BYREF

 args[0] = "test";
 args[1] = 0;
 return f(p, args);
}


/* Function: ptr_cast @ 0x11658 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x11698 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x116BC */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: complex_callback @ 0x116E4 */
int complex_callback(int *p, char **args)
{
 *p += 10;
 return *args != 0;
}


/* Function: test_pointer_types @ 0x11734 */
void test_pointer_types()
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
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int v13; // r0
 char c7; // [sp+7h] [bp-7Dh] BYREF
 int val1; // [sp+8h] [bp-7Ch] BYREF
 int val2; // [sp+Ch] [bp-78h] BYREF
 int *ptr2; // [sp+10h] [bp-74h] BYREF
 int val3; // [sp+14h] [bp-70h] BYREF
 int *ptr3; // [sp+18h] [bp-6Ch] BYREF
 int **pptr3; // [sp+1Ch] [bp-68h] BYREF
 int val7; // [sp+20h] [bp-64h] BYREF
 int val8; // [sp+24h] [bp-60h] BYREF
 int val9; // [sp+28h] [bp-5Ch] BYREF
 int val11; // [sp+2Ch] [bp-58h] BYREF
 int val12; // [sp+30h] [bp-54h] BYREF
 int **pptr2; // [sp+34h] [bp-50h]
 int ***ppptr3; // [sp+38h] [bp-4Ch]
 void *handle; // [sp+3Ch] [bp-48h]
 int arr4[5]; // [sp+40h] [bp-44h] BYREF
 int arr5[5]; // [sp+54h] [bp-30h] BYREF
 int arr6[5]; // [sp+68h] [bp-1Ch] BYREF

 puts(asc_1367C);
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
 arr5[0] = *(unsigned int *)"\n";
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


/* Function: struct_simple @ 0x11A40 */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x11A80 */
int struct_array(Point3D *pts, int n)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += pts[i].x + pts[i].y + pts[i].z;
 return sum;
}


/* Function: struct_nested @ 0x11B58 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x11B8C */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x11BC0 */
int struct_with_ptr(Node *node)
{
 int data; // r3

 if ( node->next )
 data = node->next->data;
 else
 data = 0;
 return data + node->data;
}


/* Function: struct_bitfields @ 0x11C10 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned char *)f & 1) + ((*(unsigned char *)f >> 1) & 3) + ((*(unsigned char *)f >> 3) & 7) + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x11C8C */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x11CF0 */
int union_array(UnionData *arr, int n)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i].i;
 return sum;
}


/* Function: enum_type @ 0x11D68 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x11D9C */
int enum_switch(State s)
{
 int v1; // r3

 switch ( s )
 {
 case STATE_IDLE:
 v1 = 0;
 break;
 case STATE_RUNNING:
 v1 = 100;
 break;
 case STATE_PAUSED:
 v1 = 50;
 break;
 case STATE_STOPPED:
 v1 = -1;
 break;
 default:
 v1 = -99;
 break;
 }
 return v1;
}


/* Function: struct_func_ptr @ 0x11E00 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x11E38 */
int linked_list(Node *head)
{
 int sum; // [sp+8h] [bp-Ch]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: doubly_linked_list @ 0x11E9C */
int doubly_linked_list(DNode *head)
{
 int sum; // [sp+8h] [bp-Ch]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: binary_tree_sum @ 0x11F00 */
int binary_tree_sum(TreeNode *root)
{
 int data; // r4
 int v3; // r4

 if ( !root )
 return 0;
 data = root->data;
 v3 = data + binary_tree_sum(root->left);
 return v3 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x11F68 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x11F90 */
int graph_traverse(Graph *g)
{
 int sum; // [sp+Ch] [bp-10h]
 int i; // [sp+10h] [bp-Ch]
 Edge *edge; // [sp+14h] [bp-8h]

 sum = 0;
 for ( i = 0; i < g->numVertices; ++i )
 {
 for ( edge = g->adjList[i]; edge; edge = edge->next )
 sum += edge->dest;
 }
 return sum;
}


/* Function: test_composite_types @ 0x12028 */
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
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int v13; // r0
 int v14; // r0
 Node node2; // [sp+4h] [bp-110h] BYREF
 Node node1; // [sp+Ch] [bp-108h] BYREF
 Flags f; // [sp+14h] [bp-100h] BYREF
 Device dev; // [sp+1Ch] [bp-F8h] BYREF
 Edge e1; // [sp+24h] [bp-F0h] BYREF
 Point3D p1; // [sp+2Ch] [bp-E8h] BYREF
 TreeNode tree; // [sp+38h] [bp-DCh] BYREF
 Rect r; // [sp+44h] [bp-D0h] BYREF
 Widget w; // [sp+58h] [bp-BCh] BYREF
 UnionData u; // [sp+88h] [bp-8Ch] BYREF
 UnionData arr_u[3]; // [sp+8Ch] [bp-88h] BYREF
 Point3D pts[2]; // [sp+98h] [bp-7Ch] BYREF
 Node list[3]; // [sp+B0h] [bp-64h] BYREF
 DNode dlist[2]; // [sp+C8h] [bp-4Ch] BYREF
 Graph g; // [sp+E0h] [bp-34h] BYREF

 puts(asc_1384C);
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
 memset(&w.style.fill.g, 0, 16);
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
 *(unsigned int *)&f = 6429;
 *((unsigned int *)&f + 1) = 0;
 v5 = struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v5);
 u.i = 305419896;
 v6 = union_type(&u, 0);
 printf("CMP-L2-07 (union_type): %d\n", v6);
 arr_u[0].i = 10;
 arr_u[1].i = 20;
 arr_u[2].i = 30;
 v7 = union_array(arr_u, 3);
 printf("CMP-L2-08 (union_array): %d\n", v7);
 v8 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n", v8);
 v9 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n", v9);
 dev.data = 10;
 dev.process = (int (*)(int))process_int;
 v10 = struct_func_ptr(&dev);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v10);
 list[0].data = 10;
 list[0].next = &list[1];
 list[1].data = 20;
 list[1].next = &list[2];
 list[2].data = 30;
 list[2].next = 0;
 v11 = linked_list(list);
 printf("CMP-L2-12 (linked_list): %d\n", v11);
 dlist[0].data = 10;
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 dlist[0].next = &dlist[1];
 v12 = doubly_linked_list(dlist);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v12);
 tree.data = 100;
 tree.left = 0;
 tree.right = 0;
 v13 = binary_tree(&tree);
 printf("CMP-L2-14 (binary_tree): %d\n", v13);
 e1.dest = 1;
 e1.next = 0;
 memset(&g, 0, sizeof(g));
 g.numVertices = 2;
 g.adjList[0] = &e1;
 v14 = graph_traverse(&g);
 printf("CMP-L2-15 (graph_traverse): %d\n", v14);
}


/* Function: main @ 0x12410 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: sub_12434 @ 0x12434 */
int sub_12434(long long a1, unsigned int a2, unsigned int a3)
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
 a1 = sub_12614();
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
 return a1;
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
 }
 else
 {
 LODWORD(a1) = 0;
 }
 return a1;
}


/* Function: sub_12614 @ 0x12614 */
int sub_12614(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf

 v9 = 0;
 v10 = 0;
 v11 = v9 == v10;
 v12 = v10 & (a4 >> 20);
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
 {
 return result;
 }
 }
 else
 {
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 {
 return result;
 }
 if ( v9 )
 {
 while ( 1 )
 {
 v8 = __CFSHL__(result, 1);
 result *= 2;
 a2 += v8 + a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v9;
 }
 }
 else
 {
LABEL_24:
 while ( 1 )
 {
 v8 = __CFSHL__(a3, 1);
 a3 *= 2;
 a4 += v8 + a4;
 if ( (a4 & 0x100000) != 0 )
 break;
 --v12;
 }
 }
 return result;
 }
 return result;
}


/* Function: __mulsf3 @ 0x126A0 */
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

 v5 = (unsigned char)(a1 >> 23);
 v4 = v5 == 0;
 if ( (unsigned char)(a1 >> 23) )
 {
 a4 = (unsigned char)(a2 >> 23);
 v4 = a4 == 0;
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


/* Function: __aeabi_drsub @ 0x12838 */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x12840 */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x12AF0 */
int _floatunsidf(int result)
{
 if ( result )
 return 0;
 return result;
}


/* Function: __floatsidf @ 0x12B14 */
int _floatsidf(int result)
{
 if ( result )
 return 0;
 return result;
}


/* Function: __extendsfdf2 @ 0x12B3C */
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
 return 0;
 }
 return result;
}


/* Function: __floatundidf @ 0x12B84 */
int _floatundidf(long long a1)
{
 if ( a1 )
 return 0;
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __muldf3 @ 0x12BF8 */
long long __muldf3(long long a1, unsigned int a2, unsigned int a3)
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
 a1 = sub_12DD8(a1, a2, a3, 0, 0, 0, 0, 0);
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
 return a1;
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


/* Function: sub_12DD8 @ 0x12DD8 */
int sub_12DD8(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf

 v9 = 0;
 v10 = 0;
 v11 = v9 == v10;
 v12 = v10 & (a4 >> 20);
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
 {
 return result;
 }
 }
 else
 {
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 {
 return result;
 }
 if ( v9 )
 {
 while ( 1 )
 {
 v8 = __CFSHL__(result, 1);
 result *= 2;
 a2 += v8 + a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v9;
 }
 }
 else
 {
 while ( 1 )
 {
 v8 = __CFSHL__(a3, 1);
 a3 *= 2;
 a4 += v8 + a4;
 if ( (a4 & 0x100000) != 0 )
 break;
 --v12;
 }
 }
 }
 return result;
}


/* Function: __divdf3 @ 0x12E64 */
unsigned int _divdf3(unsigned int result, unsigned int a2, unsigned int a3, unsigned int a4)
{
 int v4; // r5
 unsigned int v5; // r12
 bool v6; // zf
 int v7; // r4
 int v8; // r4
 int v9; // lr
 unsigned int v10; // r1
 unsigned long long v11; // r2
 unsigned int v12; // r5
 unsigned int v13; // r6
 unsigned int v14; // r1
 bool v15; // cf
 unsigned int v16; // r4
 unsigned long long v17; // kr00_8
 unsigned long long v18; // r2
 int v19; // r0
 unsigned int v20; // r12
 unsigned long long v21; // r2
 unsigned long long v22; // r2
 bool v23; // cc
 char v24; // cf
 bool v25; // vf
 char v26; // cc
 int v27; // r4

 v5 = 2047;
 v7 = (a2 >> 20) & 0x7FF;
 v6 = v7 == 0;
 if ( v7 )
 {
 v4 = (a4 >> 20) & 0x7FF;
 v6 = v4 == 0;
 }
 if ( !v6 )
 {
 v6 = v7 == 0x7FF;
 if ( v7 != 0x7FF )
 v6 = v4 == 0x7FF;
 }
 if ( v6 )
 result = sub_12FF8();
 v8 = v7 - v4;
 v9 = a2 ^ a4;
 v10 = a2 << 12;
 if ( a3 | (a4 << 12) )
 {
 HIDWORD(v11) = (a4 << 8) & 0xFFFFFFF | 0x10000000 | HIBYTE(a3);
 LODWORD(v11) = a3 << 8;
 v12 = (v10 >> 4) | 0x10000000 | HIBYTE(result);
 v13 = result << 8;
 v14 = v9 & 0x80000000;
 v15 = v12 >= HIDWORD(v11);
 if ( v12 == HIDWORD(v11) )
 v15 = v13 >= (unsigned int)v11;
 v16 = v15 + v8 + 1021;
 if ( !v15 )
 v11 >>= 1;
 v17 = __PAIR64__(v12, v13) - v11;
 v18 = v11 >> 1;
 v19 = 0x100000;
 v20 = 0x80000;
 while ( 1 )
 {
 if ( v17 >= v18 )
 {
 v19 |= v20;
 v17 -= v18;
 }
 v21 = v18 >> 1;
 if ( v17 >= v21 )
 {
 v19 |= v20 >> 1;
 v17 -= v21;
 }
 v22 = v21 >> 1;
 if ( v17 >= v22 )
 {
 v19 |= v20 >> 2;
 v17 -= v22;
 }
 v18 = v22 >> 1;
 if ( v17 >= v18 )
 {
 v19 |= v20 >> 3;
 v17 -= v18;
 }
 if ( !v17 )
 break;
 v18 *= 8LL;
 v20 >>= 4;
 v17 *= 16LL;
 if ( !v20 )
 {
 if ( (v14 & 0x100000) != 0 )
 goto LABEL_28;
 v14 |= v19;
 v19 = 0;
 v20 = 0x80000000;
 }
 }
 if ( (v14 & 0x100000) == 0 )
 v19 = 0;
LABEL_28:
 v23 = v16 > 0xFD;
 if ( v16 > 0xFD )
 v23 = v16 - 253 > 0x700;
 if ( !v23 )
 {
 v24 = v17 >= v18;
 if ( v17 == v18 )
 v24 = v19 & 1;
 return v24 + v19;
 }
 }
LABEL_38:
 return result;
 }
 v25 = __OFADD__(v8, v5 >> 1);
 v27 = v8 + (v5 >> 1);
 v26 = (v27 < 0) ^ v25 | (v27 == 0);
 if ( !v26 )
 v26 = (int)v5 <= v27;
 if ( v26 )
 goto LABEL_38;
 return result;
}


/* Function: sub_12FF0 @ 0x12FF0 */
void sub_12FF0()
{
 return;
}


/* Function: sub_12FF8 @ 0x12FF8 */
int sub_12FF8(int result, int a2, int a3, unsigned int a4)
{
 bool v4; // cf
 int v5; // r4
 int v6; // r12
 int v7; // r5
 bool v8; // zf
 bool v9; // zf

 v5 = 0;
 v6 = 0;
 v7 = v6 & (a4 >> 20);
 v8 = v5 == v6;
 if ( v5 == v6 )
 v8 = v7 == v6;
 if ( v8 )
 {
 return result;
 }
 if ( v5 == v6 )
 {
 if ( result | (a2 << 12) || v7 == v6 )
 {
 return result;
 }
 return result;
 }
 if ( v7 == v6 )
 {
 if ( a3 | (a4 << 12) )
 {
 return result;
 }
 return result;
 }
 v9 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v9 = (a3 | (2 * a4)) == 0;
 if ( v9 )
 {
 if ( result | (2 * a2) )
 {
 return result;
 }
 if ( !(a3 | (2 * a4)) )
 {
 return result;
 }
 return result;
 }
 if ( v5 )
 {
 while ( 1 )
 {
 v4 = __CFSHL__(result, 1);
 result *= 2;
 a2 += v4 + a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v5;
 }
 }
 if ( !v7 )
 {
 while ( 1 )
 {
 v4 = __CFSHL__(a3, 1);
 a3 *= 2;
 a4 += v4 + a4;
 if ( (a4 & 0x100000) != 0 )
 break;
 --v7;
 }
 }
 return result;
}


/* Function: __aeabi_frsub @ 0x13068 */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x13070 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x13204 */
void _floatunsisf()
{
 return;
}


/* Function: __floatsisf @ 0x1320C */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 return 0;
 return result;
}


/* Function: __floatundisf @ 0x1322C */
int _floatundisf(long long a1)
{
 if ( a1 )
 return 0;
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x132B8 */
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


/* Function: .term_proc @ 0x13314 */
void term_proc()
{
}


/* FAILED to decompile: __imp_puts @ 0x24040 */

/* FAILED to decompile: __imp_memset @ 0x24044 */

/* FAILED to decompile: __imp_printf @ 0x24048 */

/* FAILED to decompile: __imp_abort @ 0x2404C */

/* FAILED to decompile: __imp___libc_start_main @ 0x24050 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x24054 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x24058 */

/* Total functions decompiled: 90, failed: 7 */
