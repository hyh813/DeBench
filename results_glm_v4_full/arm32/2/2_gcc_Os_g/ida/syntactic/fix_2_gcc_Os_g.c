/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_Os_g
 * Processor: arm
 */

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

/* Platform-independent macros for 64-bit integer access */
#define LODWORD(x) (((uint32_t*)(&(x)))[0])
#define HIDWORD(x) (((uint32_t*)(&(x)))[1])
#define JUMPOUT(x) return
#define __PAIR64__(high, low) (((long long)((unsigned int)(high)) << 32) | (unsigned long long)(unsigned int)(low))
#define __CFSHL__(x, n) ((int)((x) << (n)) < 0)
#define __CFADD__(x, y) ((unsigned int)(-(int)((x) + (y)) < (unsigned int)(x)))

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    int x;
    int y;
    int z;
} Point3D_nested;

typedef struct {
    int width;
    int height;
    int depth;
} Size3D;

typedef struct {
    Point3D_nested position;
    Size3D size;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct {
    Point3D position;
    Point3D size;
    Color style;
} WidgetBounds;

typedef struct {
    WidgetBounds bounds;
    struct {
        Color fill;
    } style;
} Widget;

typedef union {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct {
    unsigned int f0 : 1;
    unsigned int f1 : 2;
    unsigned int f2 : 3;
    unsigned int f3 : 10;
    unsigned int f4 : 16;
} Flags;

typedef struct {
    int (*process)(int);
    int data;
} Device;

typedef struct {
    int data;
    struct Node *next;
} Node2;

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
    Edge *adjList[10];
} Graph;

typedef enum {
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

/* External data symbols from binary */
extern const char s[];
extern const char asc_1203F[];
extern const char asc_1215B[];
extern const char asc_122F4[];
extern const int unk_124DC[];

/* Forward declarations */
int sub_115A8(void);

/* Function: .init_proc @ 0x103DC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103E8 @ 0x103E8 */
void sub_103E8()
{
 JUMPOUT(0);
}


/* Function: main @ 0x1045C */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x10570 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: process_int @ 0x10578 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: complex_callback @ 0x10584 */
int complex_callback(int *p, char **args)
{
 int result; // r0

 *p += 10;
 result = (int)*args;
 if ( *args )
 return 1;
 return result;
}


/* Function: process_char @ 0x105A0 */
char process_char(char c)
{
 if ( (unsigned int)(c - 65) <= 0x19 )
 c += 32;
 return c;
}


/* Function: process_short @ 0x105B4 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_long @ 0x105C4 */
int process_long(int x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x105CC */
long long process_ll(long long x)
{
 unsigned long long v1; // kr00_8

 x = ((long long)((unsigned int)((uint64_t)(x) >> 32) * (unsigned int)x) << 32) | (unsigned int)x;
 v1 = (unsigned int)x * (unsigned long long)(unsigned int)x;
 x = ((long long)((unsigned int)x * (unsigned int)x) << 32) | (unsigned int)((uint64_t)(x) >> 32);
 x = ((long long)((unsigned int)((uint64_t)(v1) >> 32) + 2 * (unsigned int)((uint64_t)(x) >> 32)) << 32) | (unsigned int)x;
 return x;
}


/* Function: process_float @ 0x105E0 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x105F8 */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x10624 */
double process_ld(double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x10648 */
bool process_bool(int x)
{
 char v1; // r0

 if ( x > 0 )
 v1 = 1 - (x & 1);
 else
 v1 = 0;
 return v1 & 1;
}


/* Function: const_param @ 0x10660 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x1066C */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1067C */
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


/* Function: array_1d_stack @ 0x107DC */
int array_1d_stack(int *arr, int n)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < n )
 {
 v5 = arr[v2++];
 result += v5;
 }
 return result;
}


/* Function: array_string @ 0x10800 */
int array_string(char *str)
{
 int result; // r0

 for ( result = 0; str[result]; ++result )
 ;
 return result;
}


/* Function: array_2d_stack @ 0x1081C */
int array_2d_stack(int (*arr)[10])
{
 int v1; // r3
 int result; // r0
 int v4; // r1

 v1 = 0;
 result = 0;
 do
 {
 v4 = *((int *)arr + v1);
 v1 += 11;
 result += v4;
 }
 while ( v1 != 110 );
 return result;
}


/* Function: array_3d @ 0x10840 */
int array_3d(int (*arr)[5][5])
{
 int *v1; // r3
 int *v2; // r1
 int result; // r0
 int *v4; // r2
 int v5; // r12

 v1 = (int *)arr;
 v2 = &arr[0][0][0];
 result = 0;
 do
 {
 v4 = v1 + 25;
 do
 {
 v5 = *v1;
 v1 += 5;
 result += v5 + *(v1 - 4) + *(v1 - 3) + *(v1 - 2) + *(v1 - 1);
 }
 while ( v1 != v4 );
 }
 while ( v2 != v1 );
 return result;
}


/* Function: array_vla @ 0x10890 */
int array_vla(int n, int *arr)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < n )
 {
 v5 = arr[v2++];
 result += v5;
 }
 return result;
}


/* Function: array_pointer @ 0x108B4 */
int array_pointer(int (*arr)[10], int n)
{
 int v2; // r3
 int result; // r0
 int v5; // lr

 v2 = 0;
 for ( result = 0; v2 < n; result += (*arr)[v5] )
 v5 = 10 * v2++;
 return result;
}


/* Function: pointer_array @ 0x108EC */
int pointer_array(int **arr, int n)
{
 int v2; // r3
 int result; // r0
 int *v5; // r12

 v2 = 0;
 if ( n >= 10 )
 n = 10;
 result = 0;
 while ( v2 < n )
 {
 v5 = arr[v2++];
 if ( v5 )
 result += *v5;
 }
 return result;
}


/* Function: array_complex_index @ 0x10920 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( (x >= w) | ((x | (unsigned int)y) >> 31) || y >= h )
 return -1;
 else
 return arr[x + y * w];
}


/* Function: array_oob @ 0x1095C */
int array_oob(int *arr, int n)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 <= n )
 {
 v5 = arr[v2++];
 result += v5;
 }
 return result;
}


/* Function: test_array_types @ 0x10980 */
void test_array_types()
{
 int v0; // r0
 int v1; // r0
 int *v2; // r1
 int i; // r3
 int *v4; // r12
 int j; // r2
 int v6; // lr
 int v7; // r0
 int *v8; // r1
 int k; // r6
 int *v10; // r3
 int v11; // r4
 int v12; // r0
 int v13; // r0
 int v14; // r0
 int v15; // r0
 int *v16; // r3
 int a; // [sp+4h] [bp-51Ch] BYREF
 int b; // [sp+8h] [bp-518h] BYREF
 int c; // [sp+Ch] [bp-514h] BYREF
 int vla_arr[3]; // [sp+10h] [bp-510h] BYREF
 int arr1[5]; // [sp+1Ch] [bp-504h] BYREF
 int *ptr_arr[10]; // [sp+30h] [bp-4F0h] BYREF
 int v23[20]; // [sp+58h] [bp-4C8h] BYREF
 int arr2[5][10]; // [sp+A8h] [bp-478h] BYREF
 int matrix[10][10]; // [sp+170h] [bp-3B0h] BYREF
 int cube[5][5][5]; // [sp+300h] [bp-220h] BYREF
 char str[8]; // [sp+4F4h] [bp-2Ch] BYREF

 puts(asc_1203F);
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
 v2 = &matrix[0][0];
 v1 = (int)v2;
 for ( i = 0; i != 10; ++i )
 {
 v4 = v2;
 for ( j = 0; j != 10; ++j )
 {
 if ( j == i )
 v6 = i;
 else
 v6 = 0;
 *v4++ = v6;
 }
 v2 += 10;
 }
 v7 = array_2d_stack(matrix);
 _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v7);
 v8 = cube[0][0];
 for ( k = 0; k != 5; ++k )
 {
 v10 = v8;
 v11 = 5;
 do
 {
 --v11;
 *v10 = 1;
 v10[1] = 1;
 v10[2] = 1;
 v10[3] = 1;
 v10[4] = 1;
 v10 += 5;
 }
 while ( v11 );
 v8 += 25;
 }
 v12 = array_3d(cube);
 _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v12);
 vla_arr[0] = 10;
 vla_arr[1] = 20;
 vla_arr[2] = 30;
 v13 = array_vla(3, vla_arr);
 _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v13);
 arr2[4][0] = 40;
 arr2[0][0] = 0;
 arr2[1][0] = 10;
 arr2[2][0] = 20;
 arr2[3][0] = 30;
 v14 = array_pointer(arr2, 5);
 _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v14);
 a = 10;
 b = 20;
 c = 30;
 memset(&ptr_arr[3], 0, 0x1Cu);
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 v15 = pointer_array(ptr_arr, 3);
 _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v15);
 v16 = v23;
 do
 *v16++ = v11++;
 while ( v11 != 20 );
 _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v23[17]);
}


/* Function: ptr_single @ 0x10BF4 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x10C00 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x10C10 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x10C24 */
int ptr_increment(int *p, int n)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < n )
 {
 v5 = p[v2++];
 result += v5;
 }
 return result;
}


/* Function: ptr_offset @ 0x10C48 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x10C50 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x10C5C */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned char *)p;
 return -1;
}


/* Function: ptr_const @ 0x10C7C */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x10C88 */
int ptr_const_ptr(int *const p)
{
 int result; // r0

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x10C9C */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x10CA8 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [sp+4h] [bp-14h] BYREF

 args[0] = "test";
 args[1] = 0;
 return f(p, args);
}


/* Function: ptr_cast @ 0x10D08 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x10D10 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x10D14 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x10D1C */
void test_pointer_types()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int val3; // [sp+0h] [bp-30h] BYREF
 int *ptr3; // [sp+4h] [bp-2Ch] BYREF
 int **pptr3; // [sp+8h] [bp-28h] BYREF
 int val11; // [sp+Ch] [bp-24h] BYREF
 int arr4[5]; // [sp+10h] [bp-20h] BYREF

 puts(asc_1215B);
 _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 pptr3 = &ptr3;
 val3 = 5;
 ptr3 = &val3;
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


/* Function: struct_simple @ 0x10EE4 */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x10EF8 */
int struct_array(Point3D *pts, int n)
{
 int v2; // r12
 int result; // r0
 Point3D *i; // r3

 v2 = 0;
 result = 0;
 for ( i = pts + 1; v2 < n; ++i )
 {
 ++v2;
 result += i[-1].x + i[-1].y + i[-1].z;
 }
 return result;
}


/* Function: struct_nested @ 0x10F40 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x10F50 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x10F60 */
int struct_with_ptr(Node *node)
{
 int data; // r3
 Node *next; // r0

 data = node->data;
 next = node->next;
 if ( next )
 next = (Node *)next->data;
 return (int)((intptr_t)next + (intptr_t)data);
}


/* Function: struct_bitfields @ 0x10F78 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned char *)f & 1)
 + ((unsigned int)(*(unsigned char *)f << 29) >> 30)
 + ((unsigned int)(*(unsigned char *)f << 26) >> 29)
 + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x10F9C */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x10FCC */
int union_array(UnionData *arr, int n)
{
 int v2; // r3
 int result; // r0
 UnionData v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < n )
 {
 v5.i = (int)arr[v2++];
 result += v5.i;
 }
 return result;
}


/* Function: enum_type @ 0x10FF0 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x10FFC */
int enum_switch(State s)
{
 if ( (unsigned int)s > STATE_STOPPED )
 return -99;
 else
 {
 int idx = (int)s + 32;
 return (int)unk_124DC[idx];
 }
}


/* Function: struct_func_ptr @ 0x11018 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x11020 */
int linked_list(Node *head)
{
 int result; // r0
 int data; // r2

 result = 0;
 while ( head )
 {
 data = head->data;
 head = head->next;
 result += data;
 }
 return result;
}


/* Function: doubly_linked_list @ 0x11040 */
int doubly_linked_list(DNode *head)
{
 int result; // r0
 int data; // r2

 result = 0;
 while ( head )
 {
 data = head->data;
 head = head->next;
 result += data;
 }
 return result;
}


/* Function: binary_tree_sum @ 0x11060 */
int binary_tree_sum(TreeNode *root)
{
 int v2; // r5
 int v3; // r0
 int data; // r3

 v2 = 0;
 while ( root )
 {
 v3 = binary_tree_sum(root->left);
 data = root->data;
 root = root->right;
 v2 += v3 + data;
 }
 return v2;
}


/* Function: binary_tree @ 0x11098 */
// attributes: thunk
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1109C */
int graph_traverse(Graph *g)
{
 int v1; // r3
 int numVertices; // r12
 int result; // r0
 Edge *v5; // r1
 int dest; // lr

 v1 = 0;
 numVertices = g->numVertices;
 result = 0;
 while ( numVertices > v1 )
 {
 v5 = g->adjList[v1];
 if ( v5 )
 {
 while ( 1 )
 {
 dest = v5->dest;
 v5 = v5->next;
 result += dest;
 while ( !v5 )
 {
 if ( numVertices <= ++v1 )
 return result;
 v5 = g->adjList[v1];
 }
 }
 }
 ++v1;
 }
 return result;
}


/* Function: test_composite_types @ 0x110F8 */
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

 puts(asc_122F4);
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
 node1.next = &node2;
 node2.data = 20;
 node2.next = 0;
 node1.data = 10;
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
 dev.process = process_int;
 dev.data = 10;
 v5 = struct_func_ptr(&dev);
 _printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v5);
 list[0].next = &list[1];
 list[1].next = &list[2];
 list[2].data = 30;
 list[0].data = 10;
 list[1].data = 20;
 list[2].next = 0;
 v6 = linked_list(list);
 _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v6);
 dlist[0].next = &dlist[1];
 dlist[0].data = 10;
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


/* Function: __muldf3 @ 0x113C8 */
uint64_t _muldf3(uint64_t a1, unsigned int a2, unsigned int a3)
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
 unsigned int a4;

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
 a1 = sub_115A8();
 v7 = v6 + v3;
 v8 = ((unsigned int)((uint64_t)(a1) >> 32)) ^ a3;
 v9 = HIDWORD(a1) & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
 if ( (unsigned int)a1 | (v9 << 12) )
 v11 = ((a2 | (v10 << 12)) == 0);
 a1 = ((long long)(v9 | 0x100000) << 32) | ((unsigned int)a1 & 0xFFFFFFFF);
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 LODWORD(a1) = (unsigned int)a1 | a2;
 a1 = (((long long)((v8 ^ v12) << 32) | ((unsigned int)((uint64_t)(a1) >> 32))) << 32) | ((unsigned int)a1);
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return a1;
 a1 = (a1 & 0xFFFFFFFF) | (((unsigned int)((uint64_t)(a1) >> 32) | 0x100000) << 32);
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = (unsigned int)a1 * a2;
 v14 = (unsigned int)((HIDWORD(a1) * (unsigned long long)a2 + ((unsigned int)a1 * (unsigned long long)a2) >> 32) >> 32);
 v15 = (unsigned int)((a1 * (unsigned long long)a2) >> 32);
 v16 = v8 & 0x80000000;
 v18 = LODWORD(a1) * (unsigned long long)(unsigned int)v12 + (((unsigned long long)(unsigned int)v14) << 32 | (unsigned long long)(unsigned int)v15);
 v20 = (unsigned int)(((((HIDWORD(a1)) * (unsigned long long)(unsigned int)v12 + ((uint32_t)(v18 >> 32))) >> 32));
 v19 = HIDWORD(a1) * v12 + ((uint32_t)(v18 >> 32));
 if ( v13 )
 v17 = v18 | 1ULL;
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
 a1 = ((uint64_t)((v16 | (v20 << 11) | (v19 >> 21))) << 32) | (uint64_t)((v19 << 11) | ((uint32_t)(v17 >> 21)));
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
 JUMPOUT(0x11614);
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
 a1 = ((uint64_t)a1 & 0xFFFFFFFF00000000ULL) | ((((unsigned int)a1 >> v31) | (((unsigned int)((uint64_t)(a1) >> 32)) << (32 - v31))) + (v32 >> 31));
 if ( !(v24 | (2 * v32)) )
 a1 = ((uint64_t)a1 & 0xFFFFFFFF00000000ULL) | ((unsigned int)a1 & ~(v32 >> 31));
 }
 else
 {
 v33 = 12 - v30;
 v34 = (unsigned int)a1 << v33;
 a1 = ((uint64_t)a1 & 0xFFFFFFFF00000000ULL) | ((((unsigned int)a1 >> (32 - v33)) | (((unsigned int)((uint64_t)(a1) >> 32)) << v33)) + (v34 >> 31));
 if ( !(v24 | (2 * v34)) )
 a1 = ((uint64_t)a1 & 0xFFFFFFFF00000000ULL) | ((unsigned int)a1 & ~(v34 >> 31));
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)a1 << (32 - v29));
 v36 = ((unsigned int)a1 >> v29) | (((unsigned int)((uint64_t)(a1) >> 32)) << (32 - v29));
 a1 = ((uint64_t)a1 & 0xFFFFFFFF00000000ULL) | ((((unsigned int)((uint64_t)(a1) >> 32) >> v29) & ~(((unsigned int)((uint64_t)(a1) >> 32) & 0x80000000) >> v29)) + (v36 >> 31));
 if ( !(v35 | (2 * v36)) )
 a1 = ((uint64_t)a1 & 0xFFFFFFFF00000000ULL) | ((unsigned int)a1 & ~(v36 >> 31));
 }
 }
 else
 {
 a1 = ((uint64_t)a1 & 0xFFFFFFFF00000000ULL);
 }
 return a1;
}


/* Function: sub_115A8 @ 0x115A8 */
long long sub_115A8(void)
{
 return 0;
}


/* Function: __mulsf3 @ 0x11634 */
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
 v5 = (unsigned char)(a2 >> 23);
 v4 = v5 == 0;
 }
 if ( !v4 )
 {
 v4 = v5 == 0xFF;
 }
 if ( v4 )
 {
 if ( v5 == 0xFF )
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
 if ( a3 != 0xFF || !(a2 << 9) )
 {
 v14 = a1 ^ a2;
 return v14 & 0x80000000 | 0x7F800000;
 }
 else
 a1 = a2;
 }
 else
 a1 = a2;
 return a1 | 0x7FC00000;
 }
 v28 = ((a1 & 0x7FFFFFFF) == 0) || ((a2 & 0x7FFFFFFF) == 0);
 if ( v28 )
 return (a1 ^ a2) & 0x80000000;
 v24 = v5 == 0;
 v23 = a1 & 0x80000000;
 while ( v24 )
 {
 a1 *= 2;
 if ( (a1 & 0x800000) == 0 )
 --v5;
 if ( (a1 & 0x800000) != 0 )
 break;
 }
 a1 |= v23;
 v25 = v5 == 0;
 v26 = a2 & 0x80000000;
 while ( v25 )
 {
 a2 *= 2;
 if ( (a2 & 0x800000) == 0 )
 --v5;
 if ( (a2 & 0x800000) != 0 )
 break;
 }
 }
 a2 |= v26;
 v6 = v5 + a4;
 v7 = a1 ^ a2;
 v9 = a1 << 9;
 v8 = v9 == 0;
 if ( v9 == 0 )
 {
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
 v10 = (unsigned int)((((v9 >> 5) | 0x8000000) * (unsigned long long)((a2 >> 5) | 0x8000000)) >> 32);
 v11 = v12;
 v13 = v10 >= 0x800000;
 if ( v10 < 0x800000 )
 {
 v10 = (((unsigned long long)v10 << 32) | v12) >> 31;
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
 result = (((2 * v14) >> v21) & 1) + (((2 * v14) >> v21 >> 1) | ((v14 << 1) << 31));
 if ( !(v11 | (2 * v22)) )
 return result & ~(v22 >> 31);
 return result;
}


/* Function: __aeabi_drsub @ 0x117CC */
double _aeabi_drsub(double a1, double a2)
{
 a1 = ((long long)((unsigned int)((uint64_t)(a1) >> 32) ^ 0x80000000) << 32) | (unsigned int)a1;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x117D4 */
double _subdf3(double a1, double a2)
{
 a2 = ((long long)((unsigned int)((uint64_t)(a2) >> 32) ^ 0x80000000) << 32) | (unsigned int)a2;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11A84 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11920);
 return result;
}


/* Function: __floatsidf @ 0x11AA8 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11920);
 return result;
}


/* Function: __extendsfdf2 @ 0x11AD0 */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 if ( v4 || (v5 & 0xFF000000) == 0 || (v5 & 0xFF000000) == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 JUMPOUT(0x11920);
 }
 return result;
}


/* Function: __floatundidf @ 0x11B18 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11B48);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x11B8C */
float _aeabi_frsub(float a1, float a2)
{
 union { int i; float f; } u;
 u.f = a1;
 u.i ^= 0x80000000;
 return u.f + a2;
}


/* Function: __subsf3 @ 0x11B94 */
float _subsf3(float a1, float a2)
{
 union { int i; float f; } u;
 u.f = a2;
 u.i ^= 0x80000000;
 return a1 + u.f;
}


/* CRT stub function __aeabi_fadd removed by preprocessor */




/* Function: __floatunsisf @ 0x11D28 */
void _floatunsisf()
{
 JUMPOUT(0x11D38);
}


/* Function: __floatsisf @ 0x11D30 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x11D90);
 return result;
}


/* Function: __floatundisf @ 0x11D50 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11D78);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x11DDC */
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


/* Function: .term_proc @ 0x11E38 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x23044 */

/* FAILED to decompile: __imp_memset @ 0x23048 */

/* FAILED to decompile: __imp___printf_chk @ 0x2304C */

/* FAILED to decompile: __imp_abort @ 0x23050 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23054 */

/* FAILED to decompile: __imp_memcpy @ 0x23058 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2305C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23060 */

/* Total functions decompiled: 85, failed: 8 */
