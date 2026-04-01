/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_clang_Os_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdbool.h>
#include <emmintrin.h>

/* Forward declarations for types */
typedef struct Point3D { int x; int y; int z; } Point3D;
typedef struct Size { int width; int height; } Size;
typedef struct Rect { Point3D position; Size size; } Rect;
typedef struct Style { int r; int g; int b; int a; } Style;
typedef struct Widget { Rect bounds; Style style; } Widget;
typedef struct Node { int data; struct Node *next; } Node;
typedef struct DNode { int data; struct DNode *next; struct DNode *prev; } DNode;
typedef struct TreeNode { int data; struct TreeNode *left; struct TreeNode *right; } TreeNode;
typedef struct Edge { int dest; struct Edge *next; } Edge;
typedef struct Graph { int numVertices; Edge **adjList; } Graph;
typedef struct Flags { unsigned short flags; } Flags;
typedef union UnionData { int i; float f; unsigned char bytes[4]; } UnionData;
typedef enum State { STATE_STOPPED = 5, STATE_RUNNING = 10 } State;
typedef struct Device { int data; int (*process)(int); } Device;

/* Global variables for decompiled code */
static const char *s = "test_string";
static const char *asc_2690 = "Array Types Test";
static const char *asc_26AB = "Pointer Types Test";
static const char *asc_26C6 = "Composite Types Test";
static __m128i xmmword_2030 = {0};
static __m128i xmmword_2040 = {0};
static __m128i xmmword_2050 = {0};
static __m128i xmmword_2060 = {0};
static __m128i xmmword_2070 = {0};
static __m128i xmmword_2080 = {0};
static __m128i xmmword_2090 = {0};
static __m128i xmmword_20A0 = {0};
static __m128i xmmword_20B0 = {0};
static __m128i xmmword_20C0 = {0};
static __m128i xmmword_26E8 = {0};
static int dword_20D0[16] = {50, 0};




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x114C */
char process_char(char c)
{
 char result; // al

 result = c + 32;
 if ( (unsigned char)(c - 65) >= 0x1Au )
 return c;
 return result;
}


/* Function: process_short @ 0x115B */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x115F */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x1165 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x116A */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x1172 */
float process_float(float a1, float f)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1183 */
double process_double(double a1, double d)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1194 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x119F */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x11AE */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x11B4 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x11B9 */
void test_data_types_l1()
{
 puts(s);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x12E2 */
int array_1d_stack(int *arr, int n)
{
 long long v2; // rdx
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


/* Function: array_string @ 0x12FB */
int array_string(char *str)
{
 int result; // eax

 result = -1;
 do
 ++result;
 while ( *str++ != 0 );
 return result;
}


/* Function: array_2d_stack @ 0x130C */
int array_2d_stack(int (*arr)[10])
{
 long long v1; // rcx
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


/* Function: array_3d @ 0x1321 */
int array_3d(int (*arr)[5][5])
{
 long long v1; // r8
 int result; // eax
 int *v3; // rdx
 long long i; // rsi
 long long j; // rcx

 v1 = 0;
 result = 0;
 do
 {
 v3 = (int *)arr;
 for ( i = 0; i != 5; ++i )
 {
 for ( j = 0; j != 5; ++j )
 result += v3[j];
 v3 += 5;
 }
 ++v1;
 ++arr;
 }
 while ( v1 != 5 );
 return result;
}


/* Function: array_vla @ 0x1354 */
int array_vla(int n, int *arr)
{
 long long v2; // rdx
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


/* Function: array_pointer @ 0x136D */
int array_pointer(int (*arr)[10], int n)
{
 long long v2; // rdx
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 result += (*arr)[v2];
 v2 += 10;
 }
 while ( 10LL * (unsigned int)n != v2 );
 return result;
}


/* Function: pointer_array @ 0x138F */
int pointer_array(int **arr, int n)
{
 long long v2; // rcx
 long long v3; // rdx
 int result; // eax
 int *v5; // rsi

 if ( n <= 0 )
 return 0;
 v2 = 10;
 if ( (unsigned int)n < 0xA )
 v2 = (unsigned int)n;
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


/* Function: array_complex_index @ 0x13B9 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 int result; // eax

 result = -1;
 if ( x >= 0 && y < h && x < w && y >= 0 )
 return arr[x + w * y];
 return result;
}


/* Function: array_oob @ 0x13DE */
int array_oob(int *arr, int n)
{
 long long v2; // rsi
 long long v3; // rcx
 int result; // eax

 if ( n < 0 )
 return 0;
 v2 = (unsigned int)(n + 1);
 v3 = 0;
 result = 0;
 do
 result += arr[v3++];
 while ( v2 != v3 );
 return result;
}


/* Function: test_array_types @ 0x13F7 */
void test_array_types()
{
 long long v0; // rbx
 char *v1; // rax
 __m128i si128; // xmm0
 __m128i v3; // xmm1
 __m128i v4; // xmm2
 __m128i v5; // xmm3
 long long v6; // rdx
 __m128i v7; // xmm4
 __m128i v8; // xmm5
 __m128i v9; // xmm6
 __m128i v10; // xmm5
 int v11; // esi
 int v12; // esi
 long long v13; // rax
 int v14; // esi
 long long v15; // rbx
 unsigned char *v16; // rax
 unsigned char *v17; // rcx
 long long i; // rdx
 long long j; // rsi
 long long v20; // rax
 unsigned char *v21; // rcx
 int v22; // esi
 unsigned char *v23; // rdx
 long long k; // rdi
 long long m; // rbx
 long long v26; // rbx
 long long v27; // rax
 int v28; // esi
 long long v29; // rbx
 int *v30; // rax
 int v31; // esi
 int v32; // [rsp+4h] [rbp-514h] BYREF
 int v33; // [rsp+8h] [rbp-510h] BYREF
 int v34; // [rsp+Ch] [rbp-50Ch] BYREF
 int *v35; // [rsp+10h] [rbp-508h]
 unsigned long long v36[2]; // [rsp+18h] [rbp-500h]
 __int128 v37; // [rsp+28h] [rbp-4F0h]
 __int128 v38; // [rsp+38h] [rbp-4E0h]
 __int128 v39; // [rsp+48h] [rbp-4D0h]
 long long v40; // [rsp+58h] [rbp-4C0h]
 __int128 v41; // [rsp+60h] [rbp-4B8h]
 __int128 v42; // [rsp+70h] [rbp-4A8h]
 __int128 v43; // [rsp+80h] [rbp-498h]
 __int128 v44; // [rsp+90h] [rbp-488h]
 __int128 v45; // [rsp+A0h] [rbp-478h]
 unsigned int v46[53]; // [rsp+B0h] [rbp-468h]
 char v47; // [rsp+184h] [rbp-394h] BYREF
 unsigned char v48[520]; // [rsp+310h] [rbp-208h] BYREF

 puts(asc_2690);
 v0 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v1 = &v47;
 si128 = _mm_load_si128((const __m128i *)&xmmword_2030);
 v3 = _mm_load_si128((const __m128i *)&xmmword_2040);
 v4 = _mm_load_si128((const __m128i *)&xmmword_2050);
 v5 = _mm_load_si128((const __m128i *)&xmmword_2060);
 do
 {
 v6 = 0;
 v7 = si128;
 do
 {
 v8 = _mm_xor_si128(v7, v3);
 v9 = _mm_cmpgt_epi32(v4, v8);
 v10 = _mm_or_si128(_mm_shuffle_epi32(v9, 245), _mm_and_si128(_mm_shuffle_epi32(_mm_cmpeq_epi32(v8, v4), 245), v9));
 if ( (_mm_cvtsi128_si32(v10) & 1) != 0 )
 {
 v11 = 0;
 if ( v0 == v6 )
 v11 = v0;
 *(unsigned int *)&v1[4 * v6 - 4] = v11;
 }
 if ( (_mm_extract_epi16(v10, 4) & 1) != 0 )
 {
 v12 = 0;
 if ( v0 - 1 == v6 )
 v12 = v0;
 *(unsigned int *)&v1[4 * v6] = v12;
 }
 v6 += 2;
 v7 = _mm_add_epi64(v7, v5);
 }
 while ( v6 != 10 );
 ++v0;
 v1 += 40;
 }
 while ( v0 != 10 );
 v13 = 0;
 v14 = 0;
 do
 {
 v14 += v46[v13 + 52];
 v13 += 11;
 }
 while ( v13 != 110 );
 v15 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n", v14);
 v16 = v48;
 do
 {
 v17 = v16;
 for ( i = 0; i != 5; ++i )
 {
 for ( j = 0; j != 5; ++j )
 *(unsigned int *)&v17[4 * j] = 1;
 v17 += 20;
 }
 ++v15;
 v16 += 100;
 }
 while ( v15 != 5 );
 v20 = 0;
 v21 = v48;
 v22 = 0;
 do
 {
 v23 = v21;
 for ( k = 0; k != 5; ++k )
 {
 for ( m = 0; m != 5; ++m )
 v22 += *(unsigned int *)&v23[4 * m];
 v23 += 20;
 }
 ++v20;
 v21 += 100;
 }
 while ( v20 != 5 );
 v26 = 0;
 printf("ARR-L1-04 (array_3d): %d\n", v22);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 do
 {
 v46[v26] = v26;
 v26 += 10;
 }
 while ( v26 != 50 );
 v27 = 0;
 v28 = 0;
 do
 {
 v28 += v46[v27];
 v27 += 10;
 }
 while ( v27 != 50 );
 v29 = 0;
 printf("ARR-L2-02 (array_pointer): %d\n", v28);
 v30 = &v34;
 v34 = 10;
 v33 = 20;
 v32 = 30;
 v35 = &v34;
 v36[0] = (unsigned long long)&v33;
 v36[1] = (unsigned long long)&v32;
 v37 = 0;
 v38 = 0;
 v39 = 0;
 v40 = 0;
 v31 = 0;
 while ( 1 )
 {
 if ( v30 )
 v31 += *v30;
 if ( v29 == 2 )
 break;
 v30 = (int *)v36[v29++];
 }
 printf("ARR-L2-03 (pointer_array): %d\n", v31);
 v41 = *(__int128 *)&xmmword_2070;
 v42 = *(__int128 *)&xmmword_2080;
 v43 = *(__int128 *)&xmmword_2090;
 v44 = *(__int128 *)&xmmword_20A0;
 v45 = *(__int128 *)&xmmword_20B0;
 printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x16A5 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x16AB */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x16B4 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x16BF */
int ptr_increment(int *p, int n)
{
 long long v2; // rdx
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += p[v2++];
 while ( n != (unsigned int)v2 );
 return result;
}


/* Function: ptr_offset @ 0x16D7 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x16DE */
int ptr_diff(int *p1, int *p2)
{
 return (unsigned long long)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0x16E9 */
int ptr_void(void *p, int type)
{
 int result; // eax

 if ( type == 1 )
 return *(char *)p;
 result = -1;
 if ( !type )
 return *(unsigned int *)p;
 return result;
}


/* Function: ptr_const @ 0x16FE */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1703 */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x170B */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1712 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 return ((long long ( *)(int *))f)(p);
}


/* Function: ptr_cast @ 0x1733 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1736 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x173A */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x173E */
void test_pointer_types()
{
 puts(asc_26AB);
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


/* Function: struct_simple @ 0x1855 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x185E */
int struct_array(Point3D *pts, int n)
{
 long long v2; // rdx
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 result += pts[v2].z + pts[v2].y + pts[v2].x;
 ++v2;
 }
 while ( n != v2 );
 return result;
}


/* Function: struct_nested @ 0x1888 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x188E */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.r;
}


/* Function: struct_with_ptr @ 0x1895 */
int struct_with_ptr(Node *node)
{
 Node *next; // rax
 int data; // eax

 next = node->next;
 if ( next )
 data = next->data;
 else
 data = 0;
 return node->data + data;
}


/* Function: struct_bitfields @ 0x18A9 */
int struct_bitfields(Flags *f)
{
 return ((*(unsigned short *)f >> 3) & 7) + ((*(unsigned short *)f >> 1) & 3) + (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x18CA */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0x18DF */
int union_array(UnionData *arr, int n)
{
 long long v2; // rdx
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


/* Function: enum_type @ 0x18F8 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x18FE */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return dword_20D0[s];
 return result;
}


/* Function: struct_func_ptr @ 0x1916 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x191E */
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


/* Function: doubly_linked_list @ 0x192E */
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


/* Function: binary_tree_sum @ 0x193E */
int binary_tree_sum(TreeNode *root)
{
 TreeNode *v1; // r14
 int v2; // ebx
 int v3; // ebx
 int v4; // eax

 if ( !root )
 return 0;
 v1 = root;
 v2 = 0;
 do
 {
 v3 = v1->data + v2;
 v4 = binary_tree_sum(v1->left);
 v1 = v1->right;
 v2 = v4 + v3;
 }
 while ( v1 );
 return v2;
}


/* Function: binary_tree @ 0x1971 */
// attributes: thunk
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1976 */
int graph_traverse(Graph *g)
{
 long long numVertices; // rcx
 long long v2; // rdx
 int result; // eax
 Edge *i; // rsi

 numVertices = (unsigned int)g->numVertices;
 if ( (int)numVertices <= 0 )
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


/* Function: test_composite_types @ 0x199E */
void test_composite_types()
{
 int v0; // ebp
 int *v1; // rax
 int v2; // ebx
 int *v3; // rax
 long long v4; // rbp
 int v5; // eax
 __int128 *v6; // rax
 int v7; // esi
 __int128 *v8; // [rsp+8h] [rbp-100h]
 __int128 v9; // [rsp+10h] [rbp-F8h]
 __int128 v10; // [rsp+20h] [rbp-E8h]
 __int128 v11; // [rsp+30h] [rbp-D8h]
 __int128 v12; // [rsp+40h] [rbp-C8h]
 __int128 v13; // [rsp+50h] [rbp-B8h]
 __int128 v14; // [rsp+60h] [rbp-A8h] BYREF
 int v15; // [rsp+70h] [rbp-98h] BYREF
 int *v16; // [rsp+78h] [rbp-90h]
 int v17; // [rsp+80h] [rbp-88h] BYREF
 int *v18; // [rsp+88h] [rbp-80h]
 int v19; // [rsp+90h] [rbp-78h] BYREF
 long long v20; // [rsp+98h] [rbp-70h]
 TreeNode root; // [rsp+A0h] [rbp-68h] BYREF
 int v22; // [rsp+C0h] [rbp-48h] BYREF
 int *v23; // [rsp+C8h] [rbp-40h]
 long long v24; // [rsp+D0h] [rbp-38h]
 int v25; // [rsp+D8h] [rbp-30h] BYREF
 long long v26; // [rsp+E0h] [rbp-28h]
 int *v27; // [rsp+E8h] [rbp-20h]

 puts(asc_26C6);
 v0 = 0;
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
 v1 = &v15;
 v15 = 10;
 v16 = &v17;
 v17 = 20;
 v18 = &v19;
 v19 = 30;
 v20 = 0;
 do
 {
 v0 += *v1;
 v1 = (int *)*((unsigned long long *)v1 + 1);
 }
 while ( v1 );
 v2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = &v22;
 v22 = 10;
 v24 = 0;
 v25 = 20;
 v26 = 0;
 v27 = &v22;
 v23 = &v25;
 do
 {
 v2 += *v3;
 v3 = (int *)*((unsigned long long *)v3 + 1);
 }
 while ( v3 );
 v4 = 0;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
 root.right = 0;
 *(unsigned long long *)&root.data = *(unsigned long long *)&xmmword_26E8;
 v5 = binary_tree_sum(&root);
 printf("CMP-L2-14 (binary_tree): %d\n", v5);
 v6 = &v14;
 v14 = *(__int128 *)&xmmword_20C0;
 v13 = 0;
 v12 = 0;
 v11 = 0;
 v10 = 0;
 v9 = 0;
 v8 = &v14;
 v7 = 0;
 while ( 1 )
 {
 while ( v6 )
 {
 v7 += *(unsigned int *)v6;
 v6 = (__int128 *)*((unsigned long long *)v6 + 1);
 }
 if ( ++v4 == 2 )
 break;
 v6 = *(&v8 + v4);
 }
 printf("CMP-L2-15 (graph_traverse): %d\n", v7);
}


/* Function: main @ 0x1BBC */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x1BD8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x5048 */

/* FAILED to decompile: puts @ 0x5050 */

/* FAILED to decompile: printf @ 0x5058 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5060 */

/* FAILED to decompile: __gmon_start__ @ 0x5070 */

/* Total functions decompiled: 63, failed: 5 */
