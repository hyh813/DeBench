/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/2/2_clang_Os_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdint.h>
#include <arm_neon.h>
#include <stdlib.h>
#include <stdbool.h>

/* External function declarations */
extern void abort(void);
extern int puts(const char *s);
extern int printf(const char *format, ...);

/* Type definitions for decompiled code */
typedef union __n128 {
    unsigned long long n128_u64[2];
    __int128 n128_i128;
} __n128;

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

typedef struct Point3D {
    int x, y, z;
} Point3D;

typedef struct Size {
    int width, height;
} Size;

typedef struct Point {
    int x, y, z;
} Point;

typedef struct Rect {
    Size size;
    Point position;
} Rect;

typedef struct Style {
    struct { int r, g, b, a; } fill;
} Style;

typedef struct Widget {
    Style style;
    Rect bounds;
} Widget;

typedef struct Flags {
    unsigned short flags;
} Flags;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[16];
} UnionData;

/* Global variables referenced in decompiled code */
long double xmmword_28F0 = 1.0L;
__int128 xmmword_2900 = 0;
__int128 xmmword_2910 = 0;
__int128 xmmword_2920 = 0;
__int128 xmmword_2930 = 0;
__int128 xmmword_2940 = 0;
__int128 xmmword_2950 = 0;
__int128 xmmword_2960 = 0;
__int128 xmmword_2970 = 0;
__int128 xmmword_2F98 = 0;
char asc_2F1F[] = "Testing data types...";
char asc_2F40[] = "Testing array types...";
char asc_2F5B[] = "Testing pointer types...";
char asc_2F76[] = "Testing composite types...";
int dword_2980[6] = {50, 10, 20, 30, 40, 50};
void *off_13DC8 = 0;

/* ARM FPCR register definition */
#define FPCR 0
#define FPSR 1

/* Helper functions */
unsigned long long _ReadStatusReg(int reg) { return 0; }
long long call_weak_fn(void) { return 0; }
void JUMPOUT(int x) { }
int __clz(unsigned long long x) {
    if (x == 0) return 64;
    int count = 0;
    while ((x & 0x8000000000000000ULL) == 0) {
        count++;
        x <<= 1;
    }
    return count;
}

/* Macros for decompiler artifacts */
#define LODWORD(x) (*(unsigned int *)&(x))
#define HIWORD(x) (*(unsigned short *)((unsigned long long *)&(x) + 1))
#define __PAIR128__(hi, lo) (((unsigned __int128)(hi) << 64) | (lo))
#define __CFADD__(a, b) (((a) + (b)) < (a))
#define LOWORD(x) (*(unsigned short *)&(x))
#define LOBYTE(x) (*(unsigned char *)&(x))
#define HIDWORD(x) (*(unsigned int *)((unsigned long long *)&(x) + 1))
#define SET_LODWORD(x, val) (*(unsigned int *)&(x) = (val))

/* Type definition for decompiler artifacts */
typedef unsigned long long _BOOL8;

typedef enum State {
    STATE_STOPPED = 5,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2
} State;

typedef struct Device {
    int (*process)(int);
    int data;
} Device;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct Graph {
    int numVertices;
    Edge **adjList;
} Graph;

/* Function: .init_proc @ 0x608 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_620 @ 0x620 */
void sub_620()
{
 JUMPOUT(0);
}







/* Function: process_char @ 0x7D4 */
char process_char(char c)
{
 if ( (unsigned char)(c - 65) < 0x1Au )
 c += 32;
 return c;
}


/* Function: process_short @ 0x7EC */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_int @ 0x7F4 */
int process_int(int x)
{
 return (2 * x) | 1;
}


/* Function: process_long @ 0x804 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x80C */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x814 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x824 */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x83C */
long double process_ld(long double d)
{
 return d * d + *(long double *)&xmmword_28F0;
}


/* Function: process_bool @ 0x85C */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x874 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x880 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x890 */
void test_data_types_l1()
{
 puts(asc_2F1F);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", *(long double *)&xmmword_2900);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x9A4 */
int array_1d_stack(int *arr, int n)
{
 int result; // w0
 long long v4; // x9
 int v5; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 v4 = (unsigned int)n;
 do
 {
 v5 = *arr++;
 --v4;
 result += v5;
 }
 while ( v4 );
 return result;
}


/* Function: array_string @ 0x9D4 */
int array_string(char *str)
{
 int result; // w0
 int v3; // t1

 result = -1;
 do
 {
 v3 = (unsigned char)*str++;
 ++result;
 }
 while ( v3 );
 return result;
}


/* Function: array_2d_stack @ 0x9EC */
int array_2d_stack(int (*arr)[10])
{
 long long v1; // x9
 int v2; // w8
 int v3; // w10

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


/* Function: array_3d @ 0xA10 */
int array_3d(int (*arr)[5][5])
{
 long long v1; // x9
 int v2; // w8
 long long v3; // x10
 int *v4; // x11
 long long i; // x12
 int v6; // w13

 v1 = 0;
 v2 = 0;
 do
 {
 v3 = 0;
 v4 = (int *)arr;
 do
 {
 for ( i = 0; i != 5; ++i )
 {
 v6 = v4[i];
 v2 += v6;
 }
 ++v3;
 v4 += 5;
 }
 while ( v3 != 5 );
 ++v1;
 ++arr;
 }
 while ( v1 != 5 );
 return v2;
}


/* Function: array_vla @ 0xA60 */
int array_vla(int n, int *arr)
{
 int result; // w0
 long long v3; // x8
 int v4; // t1

 if ( n < 1 )
 return 0;
 LODWORD(v3) = n;
 result = 0;
 v3 = (unsigned int)v3;
 do
 {
 v4 = *arr++;
 --v3;
 result += v4;
 }
 while ( v3 );
 return result;
}


/* Function: array_pointer @ 0xA90 */
int array_pointer(int (*arr)[10], int n)
{
 int result; // w0
 long long v4; // x9
 int v5; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 v4 = (unsigned int)n;
 do
 {
 v5 = (*arr++)[0];
 --v4;
 result += v5;
 }
 while ( v4 );
 return result;
}


/* Function: pointer_array @ 0xAC0 */
int pointer_array(int **arr, int n)
{
 int result; // w0
 long long v4; // x9

 if ( n < 1 )
 return 0;
 result = 0;
 if ( (unsigned int)n >= 0xA )
 v4 = 10;
 else
 v4 = (unsigned int)n;
 do
 {
 if ( *arr )
 result += **arr;
 ++arr;
 --v4;
 }
 while ( v4 );
 return result;
}


/* Function: array_complex_index @ 0xB04 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 int result; // w0

 if ( x < 0 )
 return -1;
 result = -1;
 if ( y < h && x < w && (y & 0x80000000) == 0 )
 return arr[x + y * w];
 return result;
}


/* Function: array_oob @ 0xB38 */
int array_oob(int *arr, int n)
{
 int result; // w0
 long long v4; // x9
 int v5; // t1

 if ( n < 0 )
 return 0;
 result = 0;
 v4 = (unsigned int)(n + 1);
 do
 {
 v5 = *arr++;
 --v4;
 result += v5;
 }
 while ( v4 );
 return result;
}


/* Function: test_array_types @ 0xB64 */
void test_array_types()
{
 long long v0; // x8
 int *v1; // x10
 uint64x2_t v2; // q1
 int64x2_t v3; // q2
 int64x2_t v4; // q3
 long long v5; // x11
 int *v6; // x13
 int v7; // w14
 int v8; // w14
 long long v9; // x8
 int v10; // w1
 int v11; // w10
 long long v12; // x8
 unsigned char *v13; // x9
 long long v14; // x11
 unsigned char *v15; // x12
 long long i; // x13
 long long v17; // x8
 int v18; // w1
 unsigned char *v19; // x9
 long long v20; // x10
 unsigned char *v21; // x11
 long long j; // x12
 int v23; // w13
 long long k; // x8
 long long v25; // x8
 int v26; // w1
 int v27; // w10
 long long v28; // x8
 int v29; // w1
 unsigned int *v30; // x10
 __int128 v31[5]; // [xsp+0h] [xbp-500h] BYREF
 unsigned int *v32; // [xsp+58h] [xbp-4A8h]
 unsigned long long v33[2]; // [xsp+60h] [xbp-4A0h]
 __int128 v34; // [xsp+70h] [xbp-490h]
 __int128 v35; // [xsp+80h] [xbp-480h]
 __int128 v36; // [xsp+90h] [xbp-470h]
 long long v37; // [xsp+A0h] [xbp-460h]
 int v38; // [xsp+A8h] [xbp-458h] BYREF
 int v39; // [xsp+ACh] [xbp-454h] BYREF
 unsigned int v40[51]; // [xsp+B0h] [xbp-450h] BYREF
 unsigned char v41[500]; // [xsp+17Ch] [xbp-384h] BYREF
 int matrix[10][10]; // [xsp+370h] [xbp-190h] BYREF

 puts(asc_2F40);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v0 = 0;
 v1 = &matrix[0][1];
 v2 = vdupq_n_u64(0xAu);
 v3 = vdupq_n_s64(2u);
 do
 {
 v4 = vreinterpretq_s64_u64(vld1q_u64((const uint64_t *)xmmword_2910));
 v5 = 0;
 v6 = v1;
 do
 {
 if ( (vget_lane_u32(vmovn_u64(vcgtq_u64(v2,vreinterpretq_u64_s64(v4))), 0) & 1) != 0 )
 {
 if ( v0 == v5 )
 v7 = v0;
 else
 v7 = 0;
 *(v6 - 1) = v7;
 }
 if ( (vget_lane_u32(vmovn_u64(vcgtq_u64(vdupq_n_u64(0xAu),vreinterpretq_u64_s64(v4))), 1) & 1) != 0 )
 {
 if ( v0 - 1 == v5 )
 v8 = v0;
 else
 v8 = 0;
 *v6 = v8;
 }
 v4 = vaddq_s64(v4, v3);
 v5 += 2;
 v6 += 2;
 }
 while ( v5 != 10 );
 ++v0;
 v1 += 10;
 }
 while ( v0 != 10 );
 v9 = 0;
 v10 = 0;
 do
 {
 v11 = matrix[0][v9];
 v9 += 11;
 v10 += v11;
 }
 while ( v9 != 110 );
 printf("ARR-L1-03 (array_2d_stack): %d\n", v10);
 v12 = 0;
 v13 = v41;
 do
 {
 v14 = 0;
 v15 = v13;
 do
 {
 for ( i = 0; i != 20; i += 4 )
 *(unsigned int *)&v15[i] = 1;
 ++v14;
 v15 += 20;
 }
 while ( v14 != 5 );
 ++v12;
 v13 += 100;
 }
 while ( v12 != 5 );
 v17 = 0;
 v18 = 0;
 v19 = v41;
 do
 {
 v20 = 0;
 v21 = v19;
 do
 {
 for ( j = 0; j != 20; j += 4 )
 {
 v23 = *(unsigned int *)&v21[j];
 v18 += v23;
 }
 ++v20;
 v21 += 20;
 }
 while ( v20 != 5 );
 ++v17;
 v19 += 100;
 }
 while ( v17 != 5 );
 printf("ARR-L1-04 (array_3d): %d\n", v18);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 for ( k = 0; k != 50; k += 10 )
 v40[k + 1] = k;
 v25 = 0;
 v26 = 0;
 do
 {
 v27 = v40[v25 + 1];
 v25 += 10;
 v26 += v27;
 }
 while ( v25 != 50 );
 printf("ARR-L2-02 (array_pointer): %d\n", v26);
 v28 = 0;
 v29 = 0;
 v39 = 20;
 v40[0] = 10;
 v30 = v40;
 v38 = 30;
 v37 = 0;
 v35 = 0u;
 v32 = v40;
 v33[0] = (unsigned long long)&v39;
 v33[1] = (unsigned long long)&v38;
 v36 = 0u;
 v34 = 0u;
 if ( v31 != (unsigned long long *)-176LL )
LABEL_34:
 v29 += *v30;
 while ( v28 != 2 )
 {
 v30 = (unsigned int *)v33[v28++];
 if ( v30 )
 goto LABEL_34;
 }
 printf("ARR-L2-03 (pointer_array): %d\n", v29);
 v31[4] = xmmword_2960;
 v31[0] = xmmword_2920;
 v31[1] = xmmword_2930;
 v31[2] = xmmword_2940;
 v31[3] = xmmword_2950;
 printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0xE28 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0xE34 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0xE44 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0xE58 */
int ptr_increment(int *p, int n)
{
 int v2; // w8
 int v3; // t1

 if ( n < 1 )
 return 0;
 v2 = 0;
 do
 {
 v3 = *p++;
 --n;
 v2 += v3;
 }
 while ( n );
 return v2;
}


/* Function: ptr_offset @ 0xE84 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0xE8C */
int ptr_diff(int *p1, int *p2)
{
 return (unsigned long long)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0xE98 */
int ptr_void(void *p, int type)
{
 if ( type == 1 )
 return *(unsigned char *)p;
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: ptr_const @ 0xEBC */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0xEC8 */
int ptr_const_ptr(int *const p)
{
 int result; // w0

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0xEDC */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0xEE8 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 __int128 v3; // [xsp+0h] [xbp-10h] BYREF

 v3 = *(unsigned long long *)&off_13DC8;
 return f(p, (char **)&v3);
}


/* Function: ptr_cast @ 0xF24 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0xF2C */
void * opaque_handle_create(int size)
{
 void *result;

 result = malloc(size);
 return result;
}


/* Function: opaque_handle_op @ 0xF34 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0xF3C */
void test_pointer_types()
{
 puts(asc_2F5B);
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


/* Function: struct_simple @ 0x1040 */
int struct_simple(Point3D *p)
{
 return p->y + p->x + p->z;
}


/* Function: struct_array @ 0x1054 */
int struct_array(Point3D *pts, int n)
{
 int result; // w0
 long long v4; // x9
 int *p_y; // x8
 int v6; // w10
 int v7; // w11
 int v8; // w12

 if ( n < 1 )
 return 0;
 result = 0;
 v4 = (unsigned int)n;
 p_y = &pts->y;
 do
 {
 v6 = *(p_y - 1);
 v7 = *p_y;
 v8 = p_y[1];
 p_y += 3;
 --v4;
 result += v6 + v7 + v8;
 }
 while ( v4 );
 return result;
}


/* Function: struct_nested @ 0x1098 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x10A8 */
int struct_deep(Widget *w)
{
 return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0x10B8 */
int struct_with_ptr(Node *node)
{
 Node *next; // x9

 next = node->next;
 if ( next )
 LODWORD(next) = next->data;
 return (unsigned int)next + node->data;
}


/* Function: struct_bitfields @ 0x10D0 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6) + ((*(unsigned short *)f >> 1) & 3) + ((*(unsigned short *)f >> 3) & 7);
}


/* Function: union_type @ 0x10F0 */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return (unsigned char)u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0x1118 */
int union_array(UnionData *arr, int n)
{
 int result; // w0
 long long v4; // x9
 int i; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 v4 = (unsigned int)n;
 do
 {
 i = arr->i;
 ++arr;
 --v4;
 result += i;
 }
 while ( v4 );
 return result;
}


/* Function: enum_type @ 0x1148 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1154 */
int enum_switch(State s)
{
 if ( (unsigned int)s > STATE_STOPPED )
 return -99;
 else
 return dword_2980[s];
}


/* Function: struct_func_ptr @ 0x1174 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1184 */
int linked_list(Node *head)
{
 int i; // w8
 int data; // w9

 for ( i = 0; head; i += data )
 {
 data = head->data;
 head = head->next;
 }
 return i;
}


/* Function: doubly_linked_list @ 0x11A4 */
int doubly_linked_list(DNode *head)
{
 int i; // w8
 int data; // w9

 for ( i = 0; head; i += data )
 {
 data = head->data;
 head = head->next;
 }
 return i;
}


/* Function: binary_tree_sum @ 0x11C4 */
int binary_tree_sum(TreeNode *root)
{
 TreeNode *v1; // x19
 int v2; // w20
 int data; // w21
 int v4; // w0

 if ( !root )
 return 0;
 v1 = root;
 v2 = 0;
 do
 {
 data = v1->data;
 v4 = binary_tree_sum(v1->left);
 v1 = v1->right;
 v2 += data + v4;
 }
 while ( v1 );
 return v2;
}


/* Function: binary_tree @ 0x1218 */
// attributes: thunk
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x121C */
int graph_traverse(Graph *g)
{
 long long numVertices; // x9
 long long v2; // x10
 int v3; // w8
 Edge *i; // x11
 int dest; // w12

 numVertices = (unsigned int)g->numVertices;
 if ( (int)numVertices < 1 )
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


/* Function: test_composite_types @ 0x1264 */
void test_composite_types()
{
 DNode **p_prev; // x8
 int v1; // w1
 int v2; // w9
 int *v3; // x8
 int v4; // w1
 int v5; // w9
 int v6; // w0
 long long v7; // x8
 int v8; // w1
 __int128 *v9; // x10
 int v10; // w11
 long long v11; // [xsp+0h] [xbp-F0h] BYREF
 __int128 *v12; // [xsp+8h] [xbp-E8h]
 __int128 v13; // [xsp+10h] [xbp-E0h]
 __int128 v14; // [xsp+20h] [xbp-D0h]
 __int128 v15; // [xsp+30h] [xbp-C0h]
 __int128 v16; // [xsp+40h] [xbp-B0h]
 __int128 v17; // [xsp+50h] [xbp-A0h]
 __int128 v18; // [xsp+60h] [xbp-90h] BYREF
 TreeNode root; // [xsp+70h] [xbp-80h] BYREF
 int v20; // [xsp+90h] [xbp-60h] BYREF
 int *v21; // [xsp+98h] [xbp-58h]
 long long v22; // [xsp+A0h] [xbp-50h]
 int v23; // [xsp+A8h] [xbp-48h] BYREF
 DNode dlist[2]; // [xsp+B0h] [xbp-40h] BYREF
 Node list[3]; // [xsp+E0h] [xbp-10h] BYREF

 puts(asc_2F76);
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
 p_prev = &dlist[0].prev;
 v1 = 0;
 dlist[0].prev = (DNode *)10;
 list[0].data = 30;
 dlist[1].next = (DNode *)20;
 *(unsigned long long *)&dlist[1].data = (unsigned long long)&dlist[1].next;
 dlist[1].prev = (DNode *)list;
 list[0].next = 0;
 do
 {
 v2 = *(unsigned int *)p_prev;
 p_prev = (DNode **)p_prev[1];
 v1 += v2;
 }
 while ( p_prev );
 printf("CMP-L2-12 (linked_list): %d\n", v1);
 v3 = &v20;
 v4 = 0;
 v20 = 10;
 v23 = 20;
 *(unsigned long long *)&dlist[0].data = 0;
 dlist[0].next = (DNode *)&v20;
 v21 = &v23;
 v22 = 0;
 do
 {
 v5 = *v3;
 v3 = (int *)*((unsigned long long *)v3 + 1);
 v4 += v5;
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
 *(unsigned long long *)&root.data = (unsigned long long)xmmword_2F98;
 root.right = 0;
 v6 = binary_tree_sum(&root);
 printf("CMP-L2-14 (binary_tree): %d\n", v6);
 v7 = 0;
 v8 = 0;
 v9 = (__int128 *)&v18;
 v12 = (__int128 *)&v18;
 v15 = 0u;
 v16 = 0u;
 v17 = 0u;
 v18 = xmmword_2970;
 v13 = 0u;
 v14 = 0u;
 if ( &v11 != (long long *)-96LL )
 {
 do
 {
LABEL_6:
 v10 = *(unsigned int *)v9;
 v9 = (__int128 *)*((unsigned long long *)v9 + 1);
 v8 += v10;
 }
 while ( v9 );
 }
 while ( ++v7 != 2 )
 {
 v9 = *(&v12 + v7);
 if ( v9 )
 goto LABEL_6;
 }
 printf("CMP-L2-15 (graph_traverse): %d\n", v8);
}


/* Function: main @ 0x1474 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}





/* Function: __sfp_handle_exceptions @ 0x2840 */
unsigned long long _sfp_handle_exceptions(unsigned long long result)
{
 if ( (result & 1) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 2) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 4) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 8) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 0x10) != 0 )
 return _ReadStatusReg(FPSR);
 return result;
}


/* Function: .term_proc @ 0x28B0 */
void term_proc()
{
 ;
}



