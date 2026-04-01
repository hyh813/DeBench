/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_clang_O2_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

// Struct definitions needed by the code
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
} DNode;

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
    int r;
    int g;
    int b;
} Color;

typedef struct {
    Color fill;
} Style;

typedef struct {
    Style style;
    Position position;
    int width;
    int height;
    int z;
} Bounds;

typedef struct {
    Bounds bounds;
    Style style;
} Widget;

typedef struct {
    unsigned short flags;
} Flags;

typedef union {
    int i;
    unsigned char bytes[4];
    float f;
} UnionData;

typedef enum {
    STATE_START = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

typedef struct {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct {
    int dest;
    struct Edge *next;
} Edge;

typedef struct {
    int numVertices;
    Edge *adjList[1];
} Graph;

typedef struct {
    int (*process)(void *data);
    void *data;
} Device;

/* Function: .init_proc @ 0x3CC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_3D8 @ 0x3D8 */
void sub_3D8()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */


/* Data items */
const char *asc_2483 = "=== Data Types Level 1 ===";
const char *asc_24A4 = "=== Array Types ===";
const char *asc_24BF = "=== Pointer Types ===";
const char *asc_24DA = "=== Composite Types ===";

int dword_0 = 0;
int dword_64 = 100;
int dword_2514[4] = {10, 20, 30, 50};


/* Function: process_char @ 0x59C */
char process_char(char c)
{
 if ( (unsigned char)(c - 65) < 0x1Au )
 c += 32;
 return c;
}


/* Function: process_short @ 0x5B4 */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_int @ 0x5C4 */
int process_int(int x)
{
 return (2 * x) | 1;
}


/* Function: process_long @ 0x5D0 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x5D8 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x5F0 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x60C */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x63C */
double process_ld(double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x664 */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x684 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x690 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x6A0 */
void test_data_types_l1()
{
 puts(asc_2483);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000LL);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x7FC */
int array_1d_stack(int *arr, int n)
{
 int result; // r0
 int v4; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *arr++;
 --n;
 result += v4;
 }
 while ( n );
 return result;
}


/* Function: array_string @ 0x828 */
int array_string(char *str)
{
 int v1; // r1

 v1 = 0;
 while ( str[v1++] )
 ;
 return v1 - 1;
}


/* Function: array_2d_stack @ 0x844 */
int array_2d_stack(int (*arr)[10])
{
 return (*arr)[99]
 + (*arr)[88]
 + (*arr)[77]
 + (*arr)[66]
 + (*arr)[55]
 + (*arr)[44]
 + (*arr)[33]
 + (*arr)[22]
 + (*arr)[11]
 + (*arr)[0];
}


/* Function: array_3d @ 0x894 */
int array_3d(int (*arr)[5][5])
{
 int v1; // r12
 int v2; // r1
 int v3; // r2
 int *v4; // r3

 v1 = 0;
 v2 = 0;
 do
 {
 v4 = (*arr)[v1];
 v3 = (*arr)[v1][0];
 v1 += 5;
 v2 += v4[24]
 + v4[23]
 + v4[22]
 + v4[21]
 + v4[20]
 + v4[19]
 + v4[18]
 + v4[17]
 + v4[16]
 + v4[15]
 + v4[14]
 + v4[13]
 + v4[12]
 + v4[11]
 + v4[10]
 + v4[9]
 + v4[8]
 + v4[7]
 + v4[6]
 + v4[5]
 + v4[4]
 + v4[3]
 + v4[2]
 + v4[1]
 + v3;
 }
 while ( v1 != 25 );
 return v2;
}


/* Function: array_vla @ 0x96C */
int array_vla(int n, int *arr)
{
 int v2; // r2
 int result; // r0
 int v4; // t1

 if ( n < 1 )
 return 0;
 v2 = n;
 result = 0;
 do
 {
 v4 = *arr++;
 --v2;
 result += v4;
 }
 while ( v2 );
 return result;
}


/* Function: array_pointer @ 0x998 */
int array_pointer(int (*arr)[10], int n)
{
 int result; // r0
 int v4; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = (*arr++)[0];
 --n;
 result += v4;
 }
 while ( n );
 return result;
}


/* Function: pointer_array @ 0x9C4 */
int pointer_array(int **arr, int n)
{
 int v2; // r2
 unsigned int *v3; // r3

 if ( n < 1 )
 return 0;
 v2 = 0;
 if ( (unsigned int)n >= 0xA )
 n = 10;
 do
 {
 v3 = *arr++;
 if ( v3 )
 v2 += *v3;
 --n;
 }
 while ( n );
 return v2;
}


/* Function: array_complex_index @ 0xA08 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 int result; // r0
 bool v7; // cc

 result = -1;
 if ( x >= 0 )
 {
 v7 = y < h;
 if ( y < h )
 v7 = x < w;
 if ( v7 && y >= 0 )
 return arr[x + y * w];
 }
 return result;
}


/* Function: array_oob @ 0xA48 */
int array_oob(int *arr, int n)
{
 int v2; // r2
 int v3; // r1
 int v4; // t1

 if ( n < 0 )
 return 0;
 v2 = n + 1;
 v3 = 0;
 do
 {
 v4 = *arr++;
 --v2;
 v3 += v4;
 }
 while ( v2 );
 return v3;
}


/* Function: test_array_types @ 0xA7C */
void test_array_types()
{
 int v0; // r2
 int v1; // r0
 unsigned int *v2; // r3
 int v3; // r1
 int v4; // r4
 int v5; // r5
 int v6; // r0
 int v7; // r9
 int v8; // r6
 int v9; // r7
 int v10; // r0
 int *v11; // r3
 int v12; // r0
 int arr[5][5]; // [sp+4h] [bp-3A4h] BYREF
 unsigned int v14[108]; // [sp+1F8h] [bp-1B0h] BYREF

 puts(asc_24A4);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v0 = 0;
 do
 {
 v1 = 0;
 v2 = &v14[v0];
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v14[v0] = 0;
 if ( v0 == 90 )
 v1 = 9;
 v2[9] = v1;
 v6 = 0;
 if ( v0 == 70 )
 v6 = 7;
 if ( v0 == 60 )
 v3 = 6;
 v2[7] = v6;
 if ( v0 == 50 )
 v4 = 5;
 v2[6] = v3;
 if ( v0 == 30 )
 v5 = 3;
 v2[5] = v4;
 v2[3] = v5;
 v2[1] = v0 == 10;
 v7 = 8 * (v0 == 80);
 v8 = v0 == 40;
 v9 = v0 * 4 - 80;
 v0 += 10;
 v2[8] = v7;
 v2[4] = 4 * v8;
 v2[2] = 2 * (v9 == 0);
 }
 while ( v0 != 100 );
 printf(
 "ARR-L1-03 (array_2d_stack): %d\n",
 v14[11] + v14[0] + v14[22] + v14[33] + v14[44] + v14[55] + v14[66] + v14[77] + v14[88] + v14[99]);
 v10 = 0;
 do
 {
 v11 = arr[v10];
 arr[v10][0] = 1;
 v10 += 5;
 v11[17] = 1;
 v11[18] = 1;
 v11[19] = 1;
 v11[20] = 1;
 v11[21] = 1;
 v11[22] = 1;
 v11[23] = 1;
 v11[24] = 1;
 v11[9] = 1;
 v11[10] = 1;
 v11[11] = 1;
 v11[12] = 1;
 v11[13] = 1;
 v11[14] = 1;
 v11[15] = 1;
 v11[16] = 1;
 v11[1] = 1;
 v11[2] = 1;
 v11[3] = 1;
 v11[4] = 1;
 v11[5] = 1;
 v11[6] = 1;
 v11[7] = 1;
 v11[8] = 1;
 }
 while ( v10 != 25 );
 v12 = array_3d((int (*)[5][5])arr);
 printf("ARR-L1-04 (array_3d): %d\n", v12);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0xCCC */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0xCD8 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0xCE8 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0xCFC */
int ptr_increment(int *p, int n)
{
 int result; // r0
 int v4; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *p++;
 --n;
 result += v4;
 }
 while ( n );
 return result;
}


/* Function: ptr_offset @ 0xD28 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0xD30 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0xD3C */
int ptr_void(void *p, int type)
{
 int result; // r0

 if ( type == 1 )
 return *(unsigned char *)p;
 result = -1;
 if ( !type )
 return *(unsigned int *)p;
 return result;
}


/* Function: ptr_const @ 0xD64 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0xD70 */
int ptr_const_ptr(int *const p)
{
 int v1; // r1

 v1 = *p + 5;
 *p = v1;
 return v1;
}


/* Function: ptr_func_simple @ 0xD84 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0xD90 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 unsigned int v3[4]; // [sp+0h] [bp-10h] BYREF

 v3[0] = (unsigned int)"test";
 v3[1] = (unsigned int)&dword_0;
 return f(p, (char **)v3);
}


/* Function: ptr_cast @ 0xDE0 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0xDE8 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0xDEC */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0xDF4 */
void test_pointer_types()
{
 puts(asc_24BF);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 printf("PTR-L2-04 (ptr_increment): %d\n", 15);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0xF24 */
int struct_simple(Point3D *p)
{
 return p->y + p->x + p->z;
}


/* Function: struct_array @ 0xF38 */
int struct_array(Point3D *pts, int n)
{
 int *p_y; // r2
 int result; // r0
 int *v4; // lr

 if ( n < 1 )
 return 0;
 p_y = &pts->y;
 result = 0;
 do
 {
 v4 = p_y - 1;
 p_y += 3;
 --n;
 result += *v4 + v4[1] + v4[2];
 }
 while ( n );
 return result;
}


/* Function: struct_nested @ 0xF80 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0xF90 */
int struct_deep(Widget *w)
{
 return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0xFA0 */
int struct_with_ptr(Node *node)
{
 int data; // r1
 Node *next; // r0
 int v3; // r0

 data = node->data;
 next = node->next;
 if ( next )
 v3 = next->data;
 else
 v3 = 0;
 return v3 + data;
}


/* Function: struct_bitfields @ 0xFBC */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6) + ((*(unsigned short *)f >> 1) & 3) + ((*(unsigned short *)f >> 3) & 7);
}


/* Function: union_type @ 0xFE4 */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return (unsigned char)u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0x1014 */
int union_array(UnionData *arr, int n)
{
 int result; // r0
 int i; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 do
 {
 i = arr->i;
 ++arr;
 --n;
 result += i;
 }
 while ( n );
 return result;
}


/* Function: enum_type @ 0x1040 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x104C */
int enum_switch(State s)
{
 int result; // r0

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return dword_2514[s];
 return result;
}


/* Function: struct_func_ptr @ 0x106C */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1078 */
int linked_list(Node *head)
{
 int result; // r0
 Node *v2; // r1
 int data; // r2

 if ( !head )
 return 0;
 v2 = head;
 result = 0;
 do
 {
 data = v2->data;
 v2 = v2->next;
 result += data;
 }
 while ( v2 );
 return result;
}


/* Function: doubly_linked_list @ 0x10A4 */
int doubly_linked_list(DNode *head)
{
 int result; // r0
 DNode *v2; // r1
 int data; // r2

 if ( !head )
 return 0;
 v2 = head;
 result = 0;
 do
 {
 data = v2->data;
 v2 = v2->next;
 result += data;
 }
 while ( v2 );
 return result;
}


/* Function: binary_tree_sum @ 0x10D0 */
int binary_tree_sum(TreeNode *root)
{
 int result; // r0
 TreeNode *v2; // r4
 int v3; // r5
 int v4; // r0

 if ( !root )
 {
 return 0;
 }
 v2 = root;
 result = 0;
 do
 {
 v3 = v2->data + result;
 v4 = binary_tree_sum(v2->left);
 v2 = v2->right;
 result = v3 + v4;
 }
 while ( v2 );
 return result;
}

// attributes: thunk
/* Function: binary_tree @ 0x1118 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x111C */
int graph_traverse(Graph *g)
{
 int numVertices; // r12
 int v2; // lr
 int v3; // r1
 Edge *i; // r2
 int dest; // r3

 numVertices = g->numVertices;
 if ( numVertices < 1 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 {
 for ( i = g->adjList[v2]; i; v3 += dest )
 {
 dest = i->dest;
 i = i->next;
 }
 ++v2;
 }
 while ( v2 != numVertices );
 return v3;
}


/* Function: test_composite_types @ 0x1178 */
void test_composite_types()
{
 int v0; // r1
 int *v1; // r0
 int v2; // r2
 int *v3; // r0
 int v4; // r1
 int v5; // r2
 int v6; // r0
 TreeNode root; // [sp+4h] [bp-44h] BYREF
 unsigned int *v8[4]; // [sp+10h] [bp-38h] BYREF
 unsigned int *v9[4]; // [sp+1Ch] [bp-2Ch] BYREF
 unsigned int *v10[4]; // [sp+28h] [bp-20h] BYREF
 unsigned int *v11[4]; // [sp+30h] [bp-18h] BYREF
 unsigned int *v12[4]; // [sp+38h] [bp-10h] BYREF

 puts(asc_24DA);
 printf("CMP-L2-01 (struct_simple): %d\n", 6);
 printf("CMP-L2-02 (struct_array): %d\n", 9);
 printf("CMP-L2-03 (struct_nested): %d\n", 105);
 printf("CMP-L2-04 (struct_deep): %d\n", 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
 printf("CMP-L2-07 (union_type): %d\n", 305419896);
 printf("CMP-L2-08 (union_array): %d\n", 60);
 printf("CMP-L2-09 (enum_type): %d\n", 10);
 printf("CMP-L2-10 (enum_switch): %d\n", 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v0 = 0;
 v10[0] = (unsigned int*)(uintptr_t)10;
 v12[0] = (unsigned int*)(uintptr_t)30;
 v1 = (int*)v10;
 v12[1] = NULL;
 v11[1] = (unsigned int*)(uintptr_t)v12;
 v11[0] = (unsigned int*)(uintptr_t)20u;
 v10[1] = (unsigned int*)(uintptr_t)v11;
 v9[0] = (unsigned int*)(uintptr_t)20;
 v9[2] = (unsigned int*)v8;
 v9[1] = NULL;
 v8[2] = NULL;
 v8[0] = (unsigned int*)(uintptr_t)10;
 v8[1] = (unsigned int*)v9;
 do
 {
 v2 = (int)*v1;
 v1 = (int*)*((unsigned int**)v1 + 1);
 v0 += v2;
 }
 while ( v1 );
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = v8;
 v4 = 0;
 v9[0] = (unsigned int*)(uintptr_t)20;
 v9[2] = (unsigned int*)v8;
 v9[1] = NULL;
 v8[2] = NULL;
 v8[0] = (unsigned int*)(uintptr_t)10;
 v8[1] = (unsigned int*)v9;
 do
 {
 v5 = (int)*v3;
 v3 = (int*)v3[1];
 v4 += v5;
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
 root.right = 0;
 root.left = 0;
 root.data = (int)&dword_64;
 v6 = binary_tree_sum(&root);
 printf("CMP-L2-14 (binary_tree): %d\n", v6);
 printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


// Macros for accessing high/low parts of 64-bit values
#define LODWORD(x) ((unsigned int*)(&(x)))[0]
#define HIDWORD(x) ((unsigned int*)(&(x)))[1]

// ARM helper macros and functions
#define COERCE_FLOAT(x) (*(float*)&(x))
#define HIBYTE(x) (((x) >> 16) & 0xFF)

// Forward declaration for sub_15C4
int sub_15C4(unsigned int result_lo, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8);

static inline unsigned int __CFSHL__(unsigned int x, int cnt) {
    return cnt >= 0 ? (x << cnt) : (x >> -cnt);
}

static inline int __CFADD__(int a, int b) {
    return (unsigned int)(a + b) < (unsigned int)a;
}

static inline unsigned long long __PAIR64__(unsigned int high, unsigned int low) {
    return ((unsigned long long)high << 32) | low;
}

static inline unsigned long long __SPAIR64__(unsigned int high, unsigned int low) {
    return ((unsigned long long)(high & 0x80000000) << 32) | ((unsigned long long)high << 32) | low;
}

/* Function: __muldf3 @ 0x13E4 */
unsigned long long __muldf3(unsigned long long a1, unsigned int a2, unsigned int a3)
{
 unsigned int v3;
 unsigned int v4;
 bool v5;
 unsigned int v6;
 unsigned int v7;
 unsigned int v8;
 unsigned int v9;
 unsigned int v10;
 bool v11;
 unsigned int v12;
 unsigned int v13;
 unsigned int v14;
 unsigned int v15;
 unsigned int v16;
 unsigned int v17;
 unsigned long long v18;
 unsigned int v19;
 unsigned int v20;
 unsigned int v21;
 unsigned int v22;
 unsigned int v24;
 bool v25;
 bool v26;
 unsigned int v27;
 unsigned int v28;
 unsigned int v29;
 unsigned int v30;
 unsigned int v31;
 unsigned int v32;
 unsigned int v33;
 unsigned int v34;
 unsigned int v35;
 unsigned int v36;
 unsigned long long result;

 result = a1;
 v4 = 2047;
 v6 = ((unsigned int)(result >> 32) >> 20) & 0x7FF;
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
 result = sub_15C4((unsigned int)result, a2, a3, 0, 0, 0, 0, 0);
 v7 = v6 + v3;
 v8 = (unsigned int)(result >> 32) ^ a3;
 v9 = (unsigned int)(result >> 32) & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = ((unsigned int)result | (v9 << 12)) == 0;
 if ( (unsigned int)result | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 HIDWORD(result) = v9 | 0x100000;
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 LODWORD(result) = result | a2;
 HIDWORD(result) = (v8 & 0x80000000 | HIDWORD(result)) ^ v12;
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return result;
 HIDWORD(result) |= 0x100000u;
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = result * a2;
 v14 = (HIDWORD(result) * (unsigned long long)a2 + (((unsigned int)result * (unsigned long long)a2) >> 32)) >> 32;
 v15 = (result * (unsigned long long)a2) >> 32;
 v16 = v8 & 0x80000000;
 v18 = (unsigned int)result * (unsigned long long)(unsigned int)v12 + __PAIR64__(v14, v15);
 v17 = v18;
 v20 = (HIDWORD(result) * (unsigned long long)(unsigned int)v12 + HIDWORD(v18)) >> 32;
 v19 = HIDWORD(result) * v12 + HIDWORD(v18);
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
 HIDWORD(result) = v16 | (v20 << 11) | (v19 >> 21);
 LODWORD(result) = (v19 << 11) | (v17 >> 21);
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = result & 1;
 LODWORD(result) = v26 + (unsigned int)result;
 return result;
 }
 }
 if ( !v25 )
 JUMPOUT(0x1630);
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
 v32 = (unsigned int)result << (32 - v31);
 LODWORD(result) = (((unsigned int)result >> v31) | (HIDWORD(result) << (32 - v31))) + (v32 >> 31);
 if ( !(v24 | (2 * v32)) )
 LODWORD(result) = result & ~(v32 >> 31);
 }
 else
 {
 v33 = 12 - v30;
 v34 = (unsigned int)result << v33;
 LODWORD(result) = (((unsigned int)result >> (32 - v33)) | (HIDWORD(result) << v33)) + ((unsigned int)result << v33 >> 31);
 if ( !(v24 | (2 * v34)) )
 LODWORD(result) = result & ~(v34 >> 31);
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)result << (32 - v29));
 v36 = ((unsigned int)result >> v29) | (HIDWORD(result) << (32 - v29));
 LODWORD(result) = ((HIDWORD(result) >> v29) & ~((HIDWORD(result) & 0x80000000) >> v29)) + (v36 >> 31);
 if ( !(v35 | (2 * v36)) )
 LODWORD(result) = result & ~(v36 >> 31);
 }
 }
 else
 {
 LODWORD(result) = 0;
 }
 return result;
}


/* Function: sub_15C4 @ 0x15C4 */
int sub_15C4(unsigned int result_lo, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 unsigned int v9; // r4
 unsigned int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf
 unsigned long long result = ((unsigned long long)result_lo << 32) | (unsigned int)result;

 v9 = (((unsigned int)(result >> 32)) >> 20) & 0x7FF;
 v10 = ((unsigned int)a4 >> 20) & 0x7FF;

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
 }
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 {
 }
 if ( v9 )
 goto LABEL_24;
 while ( 1 )
 {
 v8 = __CFSHL__(result, 1);
 result *= 2;
 a2 += v8 + a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v9;
 }
 if ( !v12 )
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

}


/* Function: __mulsf3 @ 0x1650 */
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


/* Function: __aeabi_drsub @ 0x17E8 */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x17F0 */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1AA0 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x193C);
 return result;
}


/* Function: __floatsidf @ 0x1AC4 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x193C);
 return result;
}


/* Function: __extendsfdf2 @ 0x1AEC */
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
 JUMPOUT(0x193C);
 }
 return result;
}


/* Function: __floatundidf @ 0x1B34 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x1B64);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x1BA8 */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x1BB0 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x1D44 */
void _floatunsisf()
{
 JUMPOUT(0x1D54);
}


/* Function: __floatsisf @ 0x1D4C */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x1DAC);
 return result;
}


/* Function: __floatundisf @ 0x1D6C */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x1D94);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x1DF8 */
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


/* Function: .term_proc @ 0x1E54 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x13080 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13084 */

/* FAILED to decompile: __imp_printf @ 0x13088 */

/* FAILED to decompile: __imp_puts @ 0x1308C */

/* FAILED to decompile: __imp_abort @ 0x13090 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x13098 */

/* Total functions decompiled: 83, failed: 6 */
