/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_clang_Os_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);

/* Type definitions */
typedef struct { int x; int y; int z; } Point3D;
typedef struct { int x; int y; } Point2D;
typedef struct { int width; int height; } Size2D;
typedef struct { Point2D position; Size2D size; } Rect;
typedef struct { unsigned char r; unsigned char g; unsigned char b; unsigned char a; } Color;
typedef struct { Point3D position; Color style; } Widget;
typedef struct Node { int data; struct Node *next; } Node;
typedef struct DNode { int data; struct DNode *next; struct DNode *prev; } DNode;
typedef struct TreeNode { int data; struct TreeNode *left; struct TreeNode *right; } TreeNode;
typedef struct Edge { int dest; struct Edge *next; } Edge;
typedef struct Graph { int numVertices; Edge **adjList; } Graph;
typedef unsigned short Flags;
typedef union { int i; float f; char bytes[4]; } UnionData;
typedef enum { STATE_STOPPED = -1, STATE_IDLE = 0, STATE_RUNNING = 1, STATE_PAUSED = 2 } State;
typedef struct Device { void *data; int (*process)(void *); } Device;

/* External data */
extern int dword_0;
extern int dword_64;
extern int dword_2654[4];











/* CRT stub function _start removed by preprocessor */



/* Function: sub_10AC @ 0x10AC */
void sub_10AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x11E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x11ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: process_char @ 0x11F4 */
char process_char(char c)
{
 char result; // al

 result = c + 32;
 if ( (unsigned char)(c - 65) >= 0x1Au )
 return c;
 return result;
}


/* Function: process_short @ 0x120A */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x1215 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x121D */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x1224 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x123A */
float process_float(float f)
{
 return f * 1.5 + 0.5;
}


/* Function: process_double @ 0x1257 */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1274 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x127F */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x1290 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x129A */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x12A3 */
void test_data_types_l1()
{
 long double v0; // [esp+4h] [ebp-28h]
 static const char *asc_25BF = "=== TEST: DATA TYPES (L1) ===";

 puts(asc_25BF);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000, 0);
 printf("DT-L1-06 (process_float): %.2f\n", 0, 1074528256);
 printf("DT-L1-07 (process_double): %.2f\n", -858993459, 1073794252);
 v0 = 10.0;
 printf("DT-L1-08 (process_ld): %.2Lf\n", v0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x13D6 */
int array_1d_stack(int *arr, int n)
{
 int v2; // esi
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += arr[v2++];
 while ( n != v2 );
 return result;
}


/* Function: array_string @ 0x13F5 */
int array_string(char *str)
{
 int result; // eax

 result = -1;
 while ( str[++result] != 0 )
 ;
 return result;
}


/* Function: array_2d_stack @ 0x1407 */
int array_2d_stack(int (*arr)[10])
{
 int v1; // ecx
 int result; // eax

 v1 = 0;
 result = 0;
 do
 {
 result += (*arr)[v1];
 v1 += 11;
 }
 while ( v1 != 110 );
 return result;
}


/* Function: array_3d @ 0x141E */
int array_3d(int (*arr)[5][5])
{
 int v1; // ecx
 int result; // eax
 int *v4; // esi
 int i; // edi
 int j; // ebx

 v1 = 0;
 result = 0;
 do
 {
 v4 = (int *)arr;
 for ( i = 0; i != 5; ++i )
 {
 for ( j = 0; j != 5; ++j )
 result += v4[j];
 v4 += 5;
 }
 ++v1;
 ++arr;
 }
 while ( v1 != 5 );
 return result;
}


/* Function: array_vla @ 0x144E */
int array_vla(int n, int *arr)
{
 int v2; // esi
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += arr[v2++];
 while ( n != v2 );
 return result;
}


/* Function: array_pointer @ 0x146D */
int array_pointer(int (*arr)[10], int n)
{
 int v2; // ecx
 int result; // eax

 v2 = n;
 if ( n <= 0 )
 return 0;
 result = 0;
 do
 {
 result += (*arr++)[0];
 --v2;
 }
 while ( v2 );
 return result;
}


/* Function: pointer_array @ 0x1487 */
int pointer_array(int **arr, int n)
{
 int v2; // edx
 int v3; // esi
 int result; // eax
 int *v5; // edi

 if ( n <= 0 )
 return 0;
 v2 = 10;
 if ( (unsigned int)n < 0xA )
 v2 = n;
 v3 = 0;
 result = 0;
 do
 {
 v5 = arr[v3];
 if ( v5 )
 result += *v5;
 ++v3;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: array_complex_index @ 0x14B9 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 int result; // eax

 result = -1;
 if ( x >= 0 && y < h && x < w && y >= 0 )
 return arr[x + w * y];
 return result;
}


/* Function: array_oob @ 0x14E9 */
int array_oob(int *arr, int n)
{
 int v2; // esi
 int result; // eax

 if ( n < 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += arr[v2++];
 while ( n + 1 != v2 );
 return result;
}


/* Function: test_array_types @ 0x1509 */
void test_array_types()
{
 int v0; // eax
 unsigned int *v1; // ecx
 int i; // edx
 int v3; // esi
 int v4; // ecx
 int v5; // eax
 int v6; // eax
 unsigned char *v7; // ecx
 unsigned char *v8; // edx
 int j; // esi
 int k; // edi
 int v11; // eax
 unsigned char *v12; // edx
 int v13; // ecx
 unsigned char *v14; // esi
 int m; // edi
 int n; // ebp
 int ii; // eax
 int v18; // ecx
 int v19; // eax
 unsigned int *v20; // ecx
 int v21; // eax
 int v22; // edx
 int jj; // eax
 unsigned int v24[9]; // [esp+10h] [ebp-4DCh] BYREF
 int v25; // [esp+34h] [ebp-4B8h] BYREF
 int v26; // [esp+38h] [ebp-4B4h] BYREF
 unsigned int v27[71]; // [esp+3Ch] [ebp-4B0h] BYREF
 unsigned int v28[100]; // [esp+158h] [ebp-394h] BYREF
 unsigned char v29[516]; // [esp+2E8h] [ebp-204h] BYREF
 static const char *asc_25E0 = "=== TEST: ARRAY TYPES ===";

 puts(asc_25E0);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v0 = 0;
 v1 = v28;
 do
 {
 for ( i = 0; i != 10; ++i )
 {
 v3 = 0;
 if ( v0 == i )
 v3 = v0;
 v1[i] = v3;
 }
 ++v0;
 v1 += 10;
 }
 while ( v0 != 10 );
 v4 = 0;
 v5 = 0;
 do
 {
 v5 += v28[v4];
 v4 += 11;
 }
 while ( v4 != 110 );
 printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
 v6 = 0;
 v7 = v29;
 do
 {
 v8 = v7;
 for ( j = 0; j != 5; ++j )
 {
 for ( k = 0; k != 5; ++k )
 *(unsigned int *)&v8[4 * k] = 1;
 v8 += 20;
 }
 ++v6;
 v7 += 100;
 }
 while ( v6 != 5 );
 v11 = 0;
 v12 = v29;
 v13 = 0;
 do
 {
 v14 = v12;
 for ( m = 0; m != 5; ++m )
 {
 for ( n = 0; n != 5; ++n )
 v13 += *(unsigned int *)&v14[4 * n];
 v14 += 20;
 }
 ++v11;
 v12 += 100;
 }
 while ( v11 != 5 );
 printf("ARR-L1-04 (array_3d): %d\n", v13);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 for ( ii = 0; ii != 50; ii += 10 )
 v27[ii + 21] = ii;
 v18 = 0;
 v19 = 0;
 do
 {
 v19 += v27[v18 + 21];
 v18 += 10;
 }
 while ( v18 != 50 );
 printf("ARR-L2-02 (array_pointer): %d\n", v19);
 v20 = v27;
 v27[0] = 10;
 v26 = 20;
 v25 = 30;
 v24[0] = &v26;
 v24[1] = &v25;
 v21 = 0;
 memset(&v24[2], 0, 28);
 v22 = 0;
 while ( 1 )
 {
 if ( v20 )
 v22 += *v20;
 if ( v21 == 2 )
 break;
 v20 = (unsigned int *)v24[v21++];
 }
 printf("ARR-L2-03 (pointer_array): %d\n", v22);
 for ( jj = 0; jj != 20; ++jj )
 v27[jj + 1] = jj;
 printf("ARR-L2-04 (array_complex_index): %d\n", v27[18]);
}


/* Function: ptr_single @ 0x1701 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x170B */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1717 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1723 */
int ptr_increment(int *p, int n)
{
 int v2; // esi
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += p[v2++];
 while ( n != v2 );
 return result;
}


/* Function: ptr_offset @ 0x1742 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x174E */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x175A */
int ptr_void(void *p, int type)
{
 if ( type == 1 )
 return *(char *)p;
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: ptr_const @ 0x1776 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x177F */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x178B */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}





/* Function: ptr_cast @ 0x17E4 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x17EB */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x17F0 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x17F7 */
void test_pointer_types()
{
 int v0; // eax
 int i; // ecx
 unsigned int v2[8]; // [esp+Ch] [ebp-20h] BYREF
 static const char *asc_25FB = "=== TEST: POINTER TYPES ===";

 puts(asc_25FB);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 v2[0] = 0;
 v2[1] = 1;
 v2[2] = 2;
 v2[3] = 3;
 v2[4] = 4;
 v0 = 1;
 for ( i = 0; i != 4; ++i )
 v0 += v2[i + 1];
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


/* Function: struct_simple @ 0x1962 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x196F */
int struct_array(Point3D *pts, int n)
{
 int v2; // ecx
 int *p_z; // edx
 int result; // eax

 v2 = n;
 if ( n <= 0 )
 return 0;
 p_z = &pts->z;
 result = 0;
 do
 {
 result += *p_z + *(p_z - 1) + *(p_z - 2);
 p_z += 3;
 --v2;
 }
 while ( v2 );
 return result;
}


/* Function: struct_nested @ 0x1992 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x199C */
int struct_deep(Widget *w)
{
 return w->position.z + w->style.r;
}


/* Function: struct_with_ptr @ 0x19A7 */
int struct_with_ptr(Node *node)
{
 Node *next; // eax
 int data; // eax

 next = node->next;
 if ( next )
 data = next->data;
 else
 data = 0;
 return node->data + data;
}


/* Function: struct_bitfields @ 0x19BD */
int struct_bitfields(Flags *f)
{
 return ((*(unsigned short *)f >> 3) & 7) + ((*(unsigned short *)f >> 1) & 3) + (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x19E4 */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0x1A27 */
int union_array(UnionData *arr, int n)
{
 int v2; // esi
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += arr[v2++].i;
 while ( n != v2 );
 return result;
}


/* Function: enum_type @ 0x1A46 */
int enum_type(State s)
{
 return 10 * s;
}





/* Function: struct_func_ptr @ 0x1A72 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1A93 */
int linked_list(Node *head)
{
 int result; // eax

 result = 0;
 while ( head )
 {
 result += head->data;
 head = head->next;
 }
 return result;
}


/* Function: doubly_linked_list @ 0x1AA5 */
int doubly_linked_list(DNode *head)
{
 int result; // eax

 result = 0;
 while ( head )
 {
 result += head->data;
 head = head->next;
 }
 return result;
}


/* Function: binary_tree_sum @ 0x1AB7 */
int binary_tree_sum(TreeNode *root)
{
 int v2; // esi
 int v3; // esi
 int v4; // eax

 v2 = 0;
 while ( root )
 {
 v3 = root->data + v2;
 v4 = binary_tree_sum(root->left);
 root = root->right;
 v2 = v4 + v3;
 }
 return v2;
}


/* Function: binary_tree @ 0x1AF0 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1B11 */
int graph_traverse(Graph *g)
{
 int numVertices; // edx
 int v2; // esi
 int result; // eax
 Edge *i; // edi

 numVertices = g->numVertices;
 if ( numVertices <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 for ( i = g->adjList[v2]; i; i = i->next )
 result += i->dest;
 ++v2;
 }
 while ( v2 != numVertices );
 return result;
}





/* Function: main @ 0x1D68 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



extern void _do_global_dtors_aux(void);




/* FAILED to decompile: __libc_start_main @ 0x502C */

/* FAILED to decompile: printf @ 0x5030 */

/* FAILED to decompile: __cxa_finalize @ 0x5034 */

/* FAILED to decompile: puts @ 0x5038 */

/* Total functions decompiled: 69, failed: 4 */
