/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_clang_Os_g
 * Processor: arm
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Type definitions */
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
    struct {
        struct {
            int r;
            int g;
            int b;
        } fill;
    } style;
    Rect bounds;
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
    int numVertices;
    Edge **adjList;
} Graph;

typedef struct {
    int data;
    int (*process)(int);
} Device;

typedef struct {
    unsigned short flags;
} Flags;

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_STOPPED = 5,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2
} State;

/* Global variables */
const char asc_2453[] = "Data Types Level 1";
const char asc_2474[] = "Array Types";
const char asc_248F[] = "Pointer Types";
const char asc_24AA[] = "Composite Types";
int dword_0 = 0;
int dword_64 = 100;
int dword_24F8[] = {0, 10, 20, 0, 0, 50};

/* Function: .init_proc @ 0x3EC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_3F8 @ 0x3F8 */
void sub_3F8()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x5C8 */
char process_char(char c)
{
 if ( (unsigned char)(c - 65) < 0x1Au )
 c += 32;
 return c;
}


/* Function: process_short @ 0x5E0 */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_int @ 0x5F0 */
int process_int(int x)
{
 return (2 * x) | 1;
}


/* Function: process_long @ 0x5FC */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x604 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x61C */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x638 */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x668 */
double process_ld(double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x690 */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x6B0 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x6BC */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x6CC */
void test_data_types_l1()
{
 puts(asc_2453);
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


/* Function: array_1d_stack @ 0x828 */
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


/* Function: array_string @ 0x854 */
int array_string(char *str)
{
 int v1; // r1

 v1 = 0;
 while ( str[v1++] )
 ;
 return v1 - 1;
}


/* Function: array_2d_stack @ 0x870 */
int array_2d_stack(int (*arr)[10])
{
 int v1; // r2
 int v2; // r1
 int v3; // r3

 v1 = 0;
 v2 = 0;
 do
 {
 v3 = (*arr)[v1];
 v1 += 11;
 v2 += v3;
 }
 while ( v1 != 110 );
 return v2;
}


/* Function: array_3d @ 0x894 */
int array_3d(int (*arr)[5][5])
{
 int v1; // r12
 int v2; // r1
 int *v3; // r3
 int i; // lr
 int j; // r2
 int v6; // r4

 v1 = 0;
 v2 = 0;
 do
 {
 v3 = (int *)arr;
 for ( i = 0; i != 5; ++i )
 {
 for ( j = 0; j != -5; --j )
 {
 v6 = v3[-j];
 v2 += v6;
 }
 v3 += 5;
 }
 ++v1;
 ++arr;
 }
 while ( v1 != 5 );
 return v2;
}


/* Function: array_vla @ 0x8EC */
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


/* Function: array_pointer @ 0x918 */
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


/* Function: pointer_array @ 0x944 */
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


/* Function: array_complex_index @ 0x984 */
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


/* Function: array_oob @ 0x9BC */
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


/* Function: test_array_types @ 0x9EC */
void test_array_types()
{
 int v0; // r0
 unsigned char *v1; // r1
 int i; // r2
 int v3; // r3
 int v4; // r0
 int v5; // r1
 int v6; // r3
 int v7; // r0
 unsigned char *v8; // r1
 unsigned char *v9; // r3
 int j; // r5
 int k; // r4
 int v12; // r12
 unsigned char *v13; // r2
 int v14; // r1
 unsigned char *v15; // r3
 int m; // r4
 int n; // r5
 int v18; // r0
 int ii; // r1
 int v20; // r2
 int v21; // r1
 int v22; // r3
 unsigned int *v23; // r5
 int v24; // r4
 int v25; // r1
 int jj; // r0
 unsigned int v27[21]; // [sp+0h] [bp-4E8h]
 unsigned int v28[9]; // [sp+54h] [bp-494h] BYREF
 int v29; // [sp+78h] [bp-470h] BYREF
 int v30; // [sp+7Ch] [bp-46Ch] BYREF
 unsigned int v31[51]; // [sp+80h] [bp-468h] BYREF
 unsigned char v32[500]; // [sp+14Ch] [bp-39Ch] BYREF
 unsigned char v33[424]; // [sp+340h] [bp-1A8h] BYREF

 puts(asc_2474);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v0 = 0;
 v1 = v33;
 do
 {
 for ( i = 0; i != 10; ++i )
 {
 v3 = 0;
 if ( v0 == i )
 v3 = v0;
 *(unsigned int *)&v1[4 * i] = v3;
 }
 ++v0;
 v1 += 40;
 }
 while ( v0 != 10 );
 v4 = 0;
 v5 = 0;
 do
 {
 v6 = *(unsigned int *)&v33[v4];
 v4 += 44;
 v5 += v6;
 }
 while ( v4 != 440 );
 printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
 v7 = 0;
 v8 = v32;
 do
 {
 v9 = v8;
 for ( j = 0; j != 5; ++j )
 {
 for ( k = 0; k != -5; --k )
 *(unsigned int *)&v9[-4 * k] = 1;
 v9 += 20;
 }
 ++v7;
 v8 += 100;
 }
 while ( v7 != 5 );
 v12 = 0;
 v13 = v32;
 v14 = 0;
 do
 {
 v15 = v13;
 for ( m = 0; m != 5; ++m )
 {
 for ( n = 0; n != -5; --n )
 {
 v18 = *(unsigned int *)&v15[-4 * n];
 v14 += v18;
 }
 v15 += 20;
 }
 ++v12;
 v13 += 100;
 }
 while ( v12 != 5 );
 printf("ARR-L1-04 (array_3d): %d\n", v14);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 for ( ii = 0; ii != 50; ii += 10 )
 v31[ii + 1] = ii;
 v20 = 0;
 v21 = 0;
 do
 {
 v22 = v31[v20 + 1];
 v20 += 10;
 v21 += v22;
 }
 while ( v20 != 50 );
 printf("ARR-L2-02 (array_pointer): %d\n", v21);
 v23 = v31;
 v24 = 0;
 v31[0] = 10;
 v27[20] = (unsigned int)v31;
 v30 = 20;
 v29 = 30;
 v28[1] = (unsigned int)&v29;
 v28[0] = (unsigned int)&v30;
 memset(&v28[2], 0, 0x1Cu);
 v25 = 0;
 while ( 1 )
 {
 if ( v23 )
 v25 += *v23;
 if ( v24 == 2 )
 break;
 v23 = (unsigned int *)v28[v24++];
 }
 printf("ARR-L2-03 (pointer_array): %d\n", v25);
 for ( jj = 0; jj != 20; ++jj )
 v27[jj] = jj;
 printf("ARR-L2-04 (array_complex_index): %d\n", v27[17]);
}


/* Function: ptr_single @ 0xC48 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0xC54 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0xC64 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0xC78 */
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


/* Function: ptr_offset @ 0xCA4 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0xCAC */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0xCB8 */
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


/* Function: ptr_const @ 0xCE0 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0xCEC */
int ptr_const_ptr(int *const p)
{
 int v1; // r1

 v1 = *p + 5;
 *p = v1;
 return v1;
}


/* Function: ptr_func_simple @ 0xD00 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0xD0C */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 unsigned int v3[4]; // [sp+0h] [bp-10h] BYREF

 v3[0] = "test";
 v3[1] = &dword_0;
 return f(p, (char **)v3);
}


/* Function: ptr_cast @ 0xD5C */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0xD64 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0xD68 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0xD70 */
void test_pointer_types()
{
 int v0; // r1
 int i; // r2
 int v2; // r3
 unsigned int v3[8]; // [sp+8h] [bp-20h]

 puts(asc_248F);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 v3[0] = 2;
 v3[1] = 3;
 v3[2] = 4;
 v3[3] = 5;
 v0 = 1;
 for ( i = 0; i != 4; ++i )
 {
 v2 = v3[i];
 v0 += v2;
 }
 printf("PTR-L2-04 (ptr_increment): %d\n", v0);
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


/* Function: struct_simple @ 0xEE0 */
int struct_simple(Point3D *p)
{
 return p->y + p->x + p->z;
}


/* Function: struct_array @ 0xEF4 */
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


/* Function: struct_nested @ 0xF38 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0xF48 */
int struct_deep(Widget *w)
{
 return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0xF58 */
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


/* Function: struct_bitfields @ 0xF74 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6) + ((*(unsigned short *)f >> 1) & 3) + ((*(unsigned short *)f >> 3) & 7);
}


/* Function: union_type @ 0xF9C */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return (unsigned char)u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0xFC8 */
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


/* Function: enum_type @ 0xFF4 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1000 */
int enum_switch(State s)
{
 int result; // r0

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return dword_24F8[s];
 return result;
}


/* Function: struct_func_ptr @ 0x1020 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x102C */
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


/* Function: doubly_linked_list @ 0x1058 */
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


/* Function: binary_tree_sum @ 0x1084 */
int binary_tree_sum(TreeNode *root)
{
 TreeNode *v1; // r4
 int result; // r0
 int v3; // r5
 int v4; // r0

 if ( !root )
 return 0;
 v1 = root;
 result = 0;
 do
 {
 v3 = v1->data + result;
 v4 = binary_tree_sum(v1->left);
 v1 = v1->right;
 result = v3 + v4;
 }
 while ( v1 );
 return result;
}


/* Function: binary_tree @ 0x10CC */
// attributes: thunk
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x10D0 */
int graph_traverse(Graph *g)
{
 int numVertices; // r12
 int v2; // lr
 int v3; // r1
 Edge *v4; // r2
 int dest; // r3

 numVertices = g->numVertices;
 if ( numVertices < 1 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = g->adjList[v2];
 while ( v4 )
 {
 dest = v4->dest;
 v4 = v4->next;
 v3 += dest;
 }
 ++v2;
 }
 while ( v2 != numVertices );
 return v3;
}


/* Function: test_composite_types @ 0x1124 */
void test_composite_types()
{
 int v0; // r1
 int *v1; // r0
 int v2; // r2
 int *v3; // r0
 int v4; // r1
 int v5; // r2
 int v6; // r0
 int v7; // r5
 int v8; // r1
 int *v9; // r0
 int v10; // r2
 unsigned int v11[11]; // [sp+4h] [bp-84h]
 unsigned int v12[3]; // [sp+30h] [bp-58h]
 TreeNode root; // [sp+3Ch] [bp-4Ch]
 unsigned int v14[3]; // [sp+48h] [bp-40h]
 unsigned int v15[3]; // [sp+54h] [bp-34h]
 unsigned int v16[2]; // [sp+60h] [bp-28h]
 unsigned int v17[2]; // [sp+68h] [bp-20h]
 unsigned int v18[6]; // [sp+70h] [bp-18h]

 puts(asc_24AA);
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
 v16[0] = 10;
 v18[0] = 30;
 v1 = (int *)v16;
 v18[1] = 0;
 v17[1] = (unsigned int)v18;
 v17[0] = 20;
 v16[1] = (unsigned int)v17;
 do
 {
 v2 = *v1;
 v1 = (int *)v1[1];
 v0 += v2;
 }
 while ( v1 );
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = (int *)v14;
 v4 = 0;
 v15[0] = 20;
 v15[2] = (int)v14;
 v15[1] = 0;
 v14[2] = 0;
 v14[0] = 10;
 v14[1] = (int)v15;
 do
 {
 v5 = *v3;
 v3 = (int *)v3[1];
 v4 += v5;
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
 root.data = (int)&dword_64;
 root.left = 0;
 root.right = 0;
 v6 = binary_tree_sum(&root);
 printf("CMP-L2-14 (binary_tree): %d\n", v6);
 v7 = 0;
 v12[1] = 0;
 v12[0] = 1;
 memset(&v11[1], 0, 0x24u);
 v8 = 0;
 v11[0] = (int)v12;
 do
 {
 v9 = (int *)v11[v7];
 while ( v9 )
 {
 v10 = *v9;
 v9 = (int *)v9[1];
 v8 += v10;
 }
 ++v7;
 }
 while ( v7 != 2 );
 printf("CMP-L2-15 (graph_traverse): %d\n", v8);
}


/* Function: main @ 0x1394 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: __muldf3 @ 0x13B4 */
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
 unsigned int a1_hi, a1_lo;

 v4 = 2047;
 a1_hi = (unsigned int)(a1 >> 32);
 a1_lo = (unsigned int)a1;
 v6 = (a1_hi >> 20) & 0x7FF;
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
 {
 long long tmp = sub_1594();
 a1_hi = (unsigned int)(tmp >> 32);
 a1_lo = (unsigned int)tmp;
 }
 v7 = v6 + v3;
 v8 = a1_hi ^ a3;
 v9 = a1_hi & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = (a1_lo | (v9 << 12)) == 0;
 if ( a1_lo | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 a1_hi = v9 | 0x100000;
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 a1_lo = a1_lo | a2;
 a1_hi = (v8 & 0x80000000 | a1_hi) ^ v12;
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return (int)((long long)a1_hi << 32 | a1_lo);
 a1_hi |= 0x100000u;
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = a1_lo * a2;
 v14 = (a1_hi * (unsigned long long)a2 + (((unsigned int)a1_lo * (unsigned long long)a2) >> 32)) >> 32;
 v15 = (a1_lo * (unsigned long long)a2) >> 32;
 v16 = v8 & 0x80000000;
 v18 = (unsigned int)a1_lo * (unsigned long long)(unsigned int)v12 + __PAIR64__(v14, v15);
 v17 = v18;
 v20 = (a1_hi * (unsigned long long)(unsigned int)v12 + (unsigned int)(v18 >> 32)) >> 32;
 v19 = a1_hi * v12 + (unsigned int)(v18 >> 32);
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
 a1_hi = v16 | (v20 << 11) | (v19 >> 21);
 a1_lo = (v19 << 11) | (v17 >> 21);
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = a1_lo & 1;
 a1_lo = v26 + a1_lo;
 return (int)((long long)a1_hi << 32 | a1_lo);
 }
 }
 if ( !v25 )
 JUMPOUT(0x1600);
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
 v32 = a1_lo << (32 - v31);
 a1_lo = ((a1_lo >> v31) | (a1_hi << (32 - v31))) + (v32 >> 31);
 if ( !(v24 | (2 * v32)) )
 a1_lo = a1_lo & ~(v32 >> 31);
 }
 else
 {
 v33 = 12 - v30;
 v34 = a1_lo << v33;
 a1_lo = ((a1_lo >> (32 - v33)) | (a1_hi << v33)) + (a1_lo << v33 >> 31);
 if ( !(v24 | (2 * v34)) )
 a1_lo = a1_lo & ~(v34 >> 31);
 }
 }
 else
 {
 v35 = v24 | (a1_lo << (32 - v29));
 v36 = (a1_lo >> v29) | (a1_hi << (32 - v29));
 a1_lo = ((a1_hi >> v29) & ~((a1_hi & 0x80000000) >> v29)) + (v36 >> 31);
 if ( !(v35 | (2 * v36)) )
 a1_lo = a1_lo & ~(v36 >> 31);
 }
 }
 else
 {
 a1_lo = 0;
 }
 return (int)((long long)a1_hi << 32 | a1_lo);
}


/* Function: sub_1594 @ 0x1594 */
int sub_1594(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf

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
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 {
 return result;
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


/* Function: __mulsf3 @ 0x1620 */
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


/* Function: __aeabi_drsub @ 0x17B8 */
double _aeabi_drsub(double a1, double a2)
{
 union { double d; unsigned int i[2]; } u;
 u.d = a1;
 u.i[1] ^= 0x80000000;
 return u.d + a2;
}


/* Function: __subdf3 @ 0x17C0 */
double _subdf3(double a1, double a2)
{
 union { double d; unsigned int i[2]; } u;
 u.d = a2;
 u.i[1] ^= 0x80000000;
 return a1 + u.d;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1A70 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x190C);
 return result;
}


/* Function: __floatsidf @ 0x1A94 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x190C);
 return result;
}


/* Function: __extendsfdf2 @ 0x1ABC */
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
 JUMPOUT(0x190C);
 }
 return result;
}


/* Function: __floatundidf @ 0x1B04 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x1B34);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x1B78 */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x1B80 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x1D14 */
void _floatunsisf()
{
 JUMPOUT(0x1D24);
}


/* Function: __floatsisf @ 0x1D1C */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x1D7C);
 return result;
}


/* Function: __floatundisf @ 0x1D3C */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x1D64);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x1DC8 */
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


/* Function: .term_proc @ 0x1E24 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x13084 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13088 */

/* FAILED to decompile: __imp_printf @ 0x1308C */

/* FAILED to decompile: __imp_puts @ 0x13090 */

/* FAILED to decompile: __imp_memset @ 0x13094 */

/* FAILED to decompile: __imp_abort @ 0x13098 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x130A0 */

/* Total functions decompiled: 83, failed: 7 */
