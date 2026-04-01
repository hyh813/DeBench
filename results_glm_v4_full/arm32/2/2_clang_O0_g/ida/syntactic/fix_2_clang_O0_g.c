/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_clang_O0_g
 * Processor: arm
 */

#include <stdbool.h>

/* Helper union for splitting 64-bit values */
typedef union {
    long long ll;
    struct {
        unsigned int lo;
        unsigned int hi;
    } parts;
} ll_union_t;

#define LODWORD(v)   ((unsigned int)((unsigned long long)(v) & 0xFFFFFFFFULL))
#define HIDWORD(v)   ((unsigned int)((unsigned long long)(v) >> 32))
#define SET_LODWORD(v, x)  do { ll_union_t _u; _u.ll = (v); _u.parts.lo = (x); (v) = _u.ll; } while(0)
#define SET_HIDWORD(v, x)  do { ll_union_t _u; _u.ll = (v); _u.parts.hi = (x); (v) = _u.ll; } while(0)

#define __PAIR64__(lo, hi)  (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define __SPAIR64__(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define HIBYTE(v)    ((unsigned char)((v) >> 24))
#define COERCE_FLOAT(x)   (*(float *)&(x))

#define __CFSHL__(v, n)   ((unsigned int)(v) >> (32 - (n)))
#define __CFADD__(a, b)   ((a) + (b) < (a))
#define __OFADD__(a, b)   (((a) > 0) != ((b) > 0) && ((a) + (b) > 0) == ((b) > 0))

typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Size2D {
    int width;
    int height;
} Size2D;

typedef struct Rect {
    Point3D position;
    Size2D size;
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
    struct DNode *next;
    struct DNode *prev;
} DNode;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct Graph {
    Edge *adjList[10];
    int numVertices;
} Graph;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef struct Flags {
    unsigned int field1 : 1;
    unsigned int field2 : 2;
    unsigned int field3 : 3;
    unsigned int field4 : 10;
    unsigned int field5 : 16;
} Flags;

typedef enum State {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

typedef struct Device {
    int (*process)(int);
    void *data;
} Device;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

static const char asc_306C[] = "=== Testing Data Types ===\n";
static const char asc_31D8[] = "=== Testing Array Types ===\n";
static const char asc_32F5[] = "=== Testing Pointer Types ===\n";
static const char asc_348F[] = "=== Testing Composite Types ===\n";
static int dword_0 = 0;
static int dword_64 = 0;
static unsigned char byte_9[10] = {0};

int double_value(int x);
int complex_callback(int *p, char **args);

/* Function: .init_proc @ 0x3D4 */
int init_proc()
{
 return 0;
}


/* Function: sub_3E0 @ 0x3E0 */
void sub_3E0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x5A4 */
int process_char(unsigned char c)
{
 if ( c < 0x41u || c > 0x5Au )
 return c;
 else
 return (unsigned char)(c + 32);
}


/* Function: process_short @ 0x5F4 */
int process_short(short a, short b)
{
 return (short)(a + b);
}


/* Function: process_int @ 0x61C */
int process_int(int x)
{
 return (2 * x) | 1;
}


/* Function: process_long @ 0x638 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x650 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x678 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x6A8 */
double process_double(double d)
{
 return d / 2.0 + 0.1;
}


/* Function: process_ld @ 0x6F0 */
double process_ld(double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x734 */
int process_bool(int x)
{
 bool v2; // [sp+0h] [bp-8h]

 v2 = 0;
 if ( x >= 1 )
 return x % 2 == 0;
 return v2;
}


/* Function: const_param @ 0x784 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x7A0 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x7D4 */
void test_data_types_l1()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 long v4; // r0
 long long v5; // r0
 double v6; // r0
 double v7; // r0
 double v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int v13; // r0
 int vol_value; // [sp+18h] [bp-8h] BYREF
 int value; // [sp+1Ch] [bp-4h] BYREF

 printf(asc_306C);
 v0 = process_char(0x41u);
 printf("DT-L1-01 (process_char): %c\n", v0);
 v1 = process_char(0x62u);
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


/* Function: array_1d_stack @ 0x9BC */
int array_1d_stack(int *arr, int n)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += arr[i];
 return v4;
}


/* Function: array_string @ 0xA24 */
int array_string(char *str)
{
 int i; // [sp+0h] [bp-8h]

 for ( i = 0; str[i]; ++i )
 ;
 return i;
}


/* Function: array_2d_stack @ 0xA6C */
int array_2d_stack(int (*arr)[10])
{
 int i; // [sp+0h] [bp-Ch]
 int v3; // [sp+4h] [bp-8h]

 v3 = 0;
 for ( i = 0; i <= 9; ++i )
 v3 += (*arr)[10 * i + i];
 return v3;
}


/* Function: array_3d @ 0xAD4 */
int array_3d(int (*arr)[5][5])
{
 int k; // [sp+0h] [bp-14h]
 int j; // [sp+4h] [bp-10h]
 int i; // [sp+8h] [bp-Ch]
 int v5; // [sp+Ch] [bp-8h]

 v5 = 0;
 for ( i = 0; i <= 4; ++i )
 {
 for ( j = 0; j <= 4; ++j )
 {
 for ( k = 0; k <= 4; ++k )
 v5 += (*arr)[5 * i][5 * j + k];
 }
 }
 return v5;
}


/* Function: array_vla @ 0xBAC */
int array_vla(int n, int *arr)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += arr[i];
 return v4;
}


/* Function: array_pointer @ 0xC14 */
int array_pointer(int (*arr)[10], int n)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += (*arr)[10 * i];
 return v4;
}


/* Function: pointer_array @ 0xC80 */
int pointer_array(int **arr, int n)
{
 int v3; // [sp+0h] [bp-18h]
 int i; // [sp+4h] [bp-14h]
 int v5; // [sp+Ch] [bp-Ch]

 v5 = 0;
 if ( n > 9 )
 v3 = 10;
 else
 v3 = n;
 for ( i = 0; i < v3; ++i )
 {
 if ( arr[i] )
 v5 += *arr[i];
 }
 return v5;
}


/* Function: array_complex_index @ 0xD3C */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( x >= 0 && x < w && y >= 0 && y < h )
 return arr[x + y * w];
 else
 return -1;
}


/* Function: array_oob @ 0xDD4 */
int array_oob(int *arr, int n)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i <= n; ++i )
 v4 += arr[i];
 return v4;
}


/* Function: test_array_types @ 0xE3C */
void test_array_types()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int *v8; // [sp+Ch] [bp-52Ch]
 int v9; // [sp+10h] [bp-528h]
 int jj; // [sp+14h] [bp-524h]
 int v11[20]; // [sp+18h] [bp-520h] BYREF
 int *v12[4]; // [sp+68h] [bp-4D0h] BYREF
 int v13; // [sp+78h] [bp-4C0h] BYREF
 int v14; // [sp+90h] [bp-4A8h] BYREF
 int v15; // [sp+94h] [bp-4A4h] BYREF
 int v16; // [sp+98h] [bp-4A0h] BYREF
 int ii; // [sp+9Ch] [bp-49Ch]
 int v18[10]; // [sp+A0h] [bp-498h] BYREF
 int v19[3]; // [sp+168h] [bp-3D0h] BYREF
 int n; // [sp+174h] [bp-3C4h]
 int m; // [sp+178h] [bp-3C0h]
 int k; // [sp+17Ch] [bp-3BCh]
 int arr[5][5][5]; // [sp+180h] [bp-3B8h] BYREF
 int j; // [sp+374h] [bp-1C4h]
 int i; // [sp+378h] [bp-1C0h]
 int matrix[10][10]; // [sp+37Ch] [bp-1BCh] BYREF
 char str[8]; // [sp+50Ch] [bp-2Ch] BYREF
 int arr1[9]; // [sp+514h] [bp-24h] BYREF

 printf(asc_31D8);
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
 v9 = i;
 else
 v9 = 0;
 matrix[i][j] = v9;
 }
 }
 v2 = array_2d_stack(matrix);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v2);
 for ( k = 0; k <= 4; ++k )
 {
 for ( m = 0; m <= 4; ++m )
 {
 for ( n = 0; n <= 4; ++n )
 arr[k][m][n] = 1;
 }
 }
 v3 = array_3d(arr);
 printf("ARR-L1-04 (array_3d): %d\n", v3);
 v19[2] = 30;
 v19[1] = 20;
 v19[0] = 10;
 v4 = array_vla(3, v19);
 printf("ARR-L2-01 (array_vla): %d\n", v4);
 for ( ii = 0; ii <= 4; ++ii )
 v18[10 * ii] = 10 * ii;
 v5 = array_pointer((int (*)[10])v18, 5);
 printf("ARR-L2-02 (array_pointer): %d\n", v5);
 v16 = 10;
 v15 = 20;
 v14 = 30;
 v12[0] = &v16;
 v12[1] = &v15;
 v12[2] = &v14;
 v12[3] = 0;
 v8 = &v13;
 do
 *v8++ = 0;
 while ( v8 != &v14 );
 v6 = pointer_array(v12, 3);
 printf("ARR-L2-03 (pointer_array): %d\n", v6);
 for ( jj = 0; jj <= 19; ++jj )
 v11[jj] = jj;
 v7 = array_complex_index(v11, 5, 4, 2, 3);
 printf("ARR-L2-04 (array_complex_index): %d\n", v7);
}


/* Function: ptr_single @ 0x121C */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x1238 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1258 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x127C */
int ptr_increment(int *p, int n)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += *p++;
 return v4;
}


/* Function: ptr_offset @ 0x12EC */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x130C */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1330 */
int ptr_void(unsigned char *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *p;
 return -1;
}


/* Function: ptr_const @ 0x1398 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x13B4 */
int ptr_const_ptr(int *const p)
{
 *p += 5;
 return *p;
}


/* Function: ptr_func_simple @ 0x13DC */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x140C */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 unsigned int v3[3]; // [sp+0h] [bp-10h] BYREF
 int (*fa)(int *, char **); // [sp+Ch] [bp-4h]

 fa = f;
 v3[2] = p;
 v3[1] = &dword_0;
 v3[0] = "test";
 return f(p, (char **)v3);
}


/* Function: ptr_cast @ 0x1464 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1494 */
void opaque_handle_create(int size)
{
 ;
}


/* Function: opaque_handle_op @ 0x14A8 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x14C0 */
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
 void *v13; // r0
 int v14; // r0
 int v15; // [sp+14h] [bp-84h] BYREF
 int v16; // [sp+18h] [bp-80h] BYREF
 int v17; // [sp+1Ch] [bp-7Ch] BYREF
 int v18; // [sp+20h] [bp-78h] BYREF
 unsigned char v19; // [sp+27h] [bp-71h] BYREF
 int v20; // [sp+28h] [bp-70h] BYREF
 int p2[4]; // [sp+2Ch] [bp-6Ch] BYREF
 int v22; // [sp+3Ch] [bp-5Ch] BYREF
 int p[5]; // [sp+40h] [bp-58h] BYREF
 int arr4[5]; // [sp+54h] [bp-44h] BYREF
 int ***ppptr3; // [sp+68h] [bp-30h]
 int **pptr3; // [sp+6Ch] [bp-2Ch] BYREF
 int *ptr3; // [sp+70h] [bp-28h] BYREF
 int val3; // [sp+74h] [bp-24h] BYREF
 int **pptr2; // [sp+78h] [bp-20h]
 int *ptr2; // [sp+7Ch] [bp-1Ch] BYREF
 int val2; // [sp+80h] [bp-18h] BYREF
 int val1[5]; // [sp+84h] [bp-14h] BYREF

 printf(asc_32F5);
 val1[0] = 5;
 v0 = ptr_single(val1);
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
 p[0] = 10;
 p[1] = 20;
 p[2] = 30;
 p[3] = 40;
 p[4] = 50;
 v4 = ptr_offset(p, 2);
 printf("PTR-L2-05 (ptr_offset): %d\n", v4);
 p2[0] = 0;
 p2[1] = 10;
 p2[2] = 20;
 p2[3] = 30;
 v22 = 40;
 v5 = ptr_diff(&v22, p2);
 printf("PTR-L2-06 (ptr_diff): %d\n", v5);
 v20 = 42;
 v19 = 65;
 v6 = ptr_void((unsigned char *)&v20, 0);
 printf("PTR-L2-07 (ptr_void): %d\n", v6);
 v7 = ptr_void(&v19, 1);
 printf("PTR-L2-07 (ptr_void): %d\n", v7);
 v18 = 10;
 v8 = ptr_const(&v18);
 printf("PTR-L2-08 (ptr_const): %d\n", v8);
 v17 = 10;
 v9 = ptr_const_ptr(&v17);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
 v10 = ptr_func_simple(double_value, 5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
 v16 = 5;
 v11 = ptr_func_complex(complex_callback, &v16);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
 v15 = 305419896;
 v12 = ptr_cast(&v15);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
 opaque_handle_create(10);
 v14 = opaque_handle_op(v13);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", v14);
}


/* Function: double_value @ 0x1768 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: complex_callback @ 0x1780 */
int complex_callback(int *p, char **args)
{
 int result; // r0

 *p += 10;
 result = (int)*args;
 if ( *args )
 return 1;
 return result;
}


/* Function: struct_simple @ 0x17B4 */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x17DC */
int struct_array(Point3D *pts, int n)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += pts[i].x + pts[i].y + pts[i].z;
 return v4;
}


/* Function: struct_nested @ 0x1858 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1878 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1898 */
int struct_with_ptr(Node *node)
{
 int data; // [sp+0h] [bp-Ch]

 if ( node->next )
 data = node->next->data;
 else
 data = 0;
 return node->data + data;
}


/* Function: struct_bitfields @ 0x18F0 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f & 1) + ((*(unsigned short *)f >> 1) & 3) + ((*(unsigned short *)f >> 3) & 7) + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x1928 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x19A0 */
int union_array(UnionData *arr, int n)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += arr[i].i;
 return v4;
}


/* Function: enum_type @ 0x1A08 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1A24 */
int enum_switch(State s)
{
 int v2; // [sp+8h] [bp-4h]

 switch ( s )
 {
 case STATE_IDLE:
 v2 = 0;
 break;
 case STATE_RUNNING:
 v2 = 100;
 break;
 case STATE_PAUSED:
 v2 = 50;
 break;
 case STATE_STOPPED:
 v2 = -1;
 break;
 default:
 v2 = -99;
 break;
 }
 return v2;
}


/* Function: struct_func_ptr @ 0x1AA4 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1AD4 */
int linked_list(Node *head)
{
 int v3; // [sp+4h] [bp-8h]

 v3 = 0;
 while ( head )
 {
 v3 += head->data;
 head = head->next;
 }
 return v3;
}


/* Function: doubly_linked_list @ 0x1B30 */
int doubly_linked_list(DNode *head)
{
 int v3; // [sp+4h] [bp-8h]

 v3 = 0;
 while ( head )
 {
 v3 += head->data;
 head = head->next;
 }
 return v3;
}


/* Function: binary_tree_sum @ 0x1B8C */
int binary_tree_sum(TreeNode *root)
{
 int data; // [sp+0h] [bp-10h]
 int v3; // [sp+4h] [bp-Ch]

 if ( !root )
 return 0;
 data = root->data;
 v3 = data + binary_tree_sum(root->left);
 return v3 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x1C0C */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1C30 */
int graph_traverse(Graph *g)
{
 Edge *j; // [sp+0h] [bp-10h]
 int i; // [sp+4h] [bp-Ch]
 int v4; // [sp+8h] [bp-8h]

 v4 = 0;
 for ( i = 0; i < g->numVertices; ++i )
 {
 for ( j = g->adjList[i]; j; j = j->next )
 v4 += j->dest;
 }
 return v4;
}


/* Function: test_composite_types @ 0x1CC8 */
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
 Graph v15; // [sp+18h] [bp-118h] BYREF
 unsigned int v16[2]; // [sp+44h] [bp-ECh] BYREF
 TreeNode root; // [sp+4Ch] [bp-E4h] BYREF
 DNode v18; // [sp+58h] [bp-D8h] BYREF
 unsigned int v19[3]; // [sp+64h] [bp-CCh] BYREF
 Node head; // [sp+70h] [bp-C0h] BYREF
 unsigned int v21[2]; // [sp+78h] [bp-B8h] BYREF
 unsigned int v22[2]; // [sp+80h] [bp-B0h] BYREF
 Device dev; // [sp+88h] [bp-A8h] BYREF
 UnionData arr; // [sp+90h] [bp-A0h] BYREF
 int v25; // [sp+94h] [bp-9Ch]
 int v26; // [sp+98h] [bp-98h]
 UnionData u; // [sp+9Ch] [bp-94h] BYREF
 Flags f; // [sp+A0h] [bp-90h] BYREF
 Node node1; // [sp+A8h] [bp-88h] BYREF
 Node node2; // [sp+B0h] [bp-80h] BYREF
 Widget w; // [sp+B8h] [bp-78h] BYREF
 Rect r; // [sp+E8h] [bp-48h] BYREF
 Point3D pts[2]; // [sp+FCh] [bp-34h] BYREF
 Point3D p1; // [sp+114h] [bp-1Ch] BYREF

 printf(asc_348F);
 p1.z = 3;
 p1.y = 2;
 p1.x = 1;
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
 node2.next = 0;
 node2.data = 20;
 node1.data = 10;
 node1.next = &node2;
 v4 = struct_with_ptr(&node1);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
 *((unsigned int *)&f + 1) = 0;
 *(unsigned int *)&f = 6429;
 v5 = struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v5);
 u.i = 305419896;
 v6 = union_type(&u, 0);
 printf("CMP-L2-07 (union_type): %d\n", v6);
 v26 = 30;
 v25 = 20;
 arr.i = 10;
 v7 = union_array(&arr, 3);
 printf("CMP-L2-08 (union_array): %d\n", v7);
 v8 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n", v8);
 v9 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n", v9);
 dev.process = process_int;
 dev.data = (int)&byte_9[1];
 v10 = struct_func_ptr(&dev);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v10);
 head.data = 10;
 head.next = (Node *)v21;
 v21[0] = 20;
 v21[1] = v22;
 v22[0] = 30;
 v22[1] = 0;
 v11 = linked_list(&head);
 printf("CMP-L2-12 (linked_list): %d\n", v11);
 v18.data = 10;
 v18.prev = 0;
 v19[0] = 20;
 v19[1] = 0;
 v19[2] = &v18;
 v18.next = (DNode *)v19;
 v12 = doubly_linked_list(&v18);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v12);
 root.right = 0;
 root.left = 0;
 root.data = (int)&dword_64;
 v13 = binary_tree(&root);
 printf("CMP-L2-14 (binary_tree): %d\n", v13);
 v16[1] = 0;
 v16[0] = 1;
 memset(&v15, 0, sizeof(v15));
 v15.numVertices = 2;
 v15.adjList[0] = (Edge *)v16;
 v14 = graph_traverse(&v15);
 printf("CMP-L2-15 (graph_traverse): %d\n", v14);
}


/* Function: main @ 0x20B8 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: sub_20F0 @ 0x20F0 */
int sub_20F0(long long a1, unsigned int a2, unsigned int a3)
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
 a1 = sub_22D0();
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
 JUMPOUT(0x233C);
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


/* Function: sub_22D0 @ 0x22D0 */
int sub_22D0(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v5; // r4
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf

 v5 = (a2 >> 20) & 0x7FF;
 v9 = v5;
 v10 = (a4 >> 20) & 0x7FF;
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


/* Function: __mulsf3 @ 0x235C */
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
 v11 = (unsigned int)(2 * v12);
 }
 v14 = v7 & 0x80000000 | v10;
 v15 = v6 - (!v13 + 127);
 v16 = v15 <= 253;
 if ( (unsigned int)v15 <= 0xFD )
 {
 result = (v15 << 23) + ((unsigned int)v11 >= 0x80000000) + v14;
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
 SET_LODWORD(result, (((2 * v14) >> v21) & 1) + (((2 * v14) >> v21 >> 1) | (__CFSHL__(v14, 1) << 31)));
 if ( !(v11 | (2 * v22)) )
 return result & ~(v22 >> 31);
 return result;
}


/* Function: __aeabi_drsub @ 0x24F4 */
double _aeabi_drsub(double a1, double a2)
{
 SET_HIDWORD(a1, HIDWORD(a1) ^ 0x80000000);
 return a1 + a2;
}


/* Function: __subdf3 @ 0x24FC */
double _subdf3(double a1, double a2)
{
 SET_HIDWORD(a2, HIDWORD(a2) ^ 0x80000000);
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x27AC */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x2648);
 return result;
}


/* Function: __floatsidf @ 0x27D0 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x2648);
 return result;
}


/* Function: __extendsfdf2 @ 0x27F8 */
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
 JUMPOUT(0x2648);
 }
 return result;
}


/* Function: __floatundidf @ 0x2840 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x2870);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __muldf3 @ 0x28B4 */
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
 a1 = sub_2A94();
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
 JUMPOUT(0x2B00);
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


/* Function: sub_2A94 @ 0x2A94 */
int sub_2A94(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v5; // r4
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf

 v5 = (a2 >> 20) & 0x7FF;
 v9 = v5;
 v10 = (a4 >> 20) & 0x7FF;
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


/* Function: __divdf3 @ 0x2B20 */
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
 result = sub_2CB4();
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
LABEL_38:
 JUMPOUT(0x2998);
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


/* Function: sub_2CAC @ 0x2CAC */
void sub_2CAC()
{
 JUMPOUT(0x2998);
}


/* Function: sub_2CB4 @ 0x2CB4 */
int sub_2CB4(int result, int a2, int a3, unsigned int a4)
{
 bool v4; // cf
 int v5; // r4
 int v6; // r12
 int v7; // r5
 bool v8; // zf
 bool v9; // zf

 v5 = (a2 >> 20) & 0x7FF;
 v6 = (a4 >> 20) & 0x7FF;
 v7 = v6 & (a4 >> 20);
 v8 = v5 == v6;
 if ( v5 == v6 )
 v8 = v7 == v6;
 if ( v8 )
LABEL_25:
 return result;
 if ( v5 == v6 )
 {
 if ( result | (a2 << 12) || v7 == v6 )
 goto LABEL_25;
LABEL_26:
 return result;
 }
 if ( v7 == v6 )
 {
 if ( a3 | (a4 << 12) )
 goto LABEL_25;
 goto LABEL_27;
 }
 v9 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v9 = (a3 | (2 * a4)) == 0;
 if ( v9 )
 {
 if ( result | (2 * a2) )
 goto LABEL_26;
 if ( !(a3 | (2 * a4)) )
 goto LABEL_25;
LABEL_27:
 return result;
 }
 if ( v5 )
 goto LABEL_23;
 while ( 1 )
 {
 v4 = __CFSHL__(result, 1);
 result *= 2;
 a2 += v4 + a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v5;
 }
 if ( !v7 )
 {
LABEL_23:
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


/* Function: __aeabi_frsub @ 0x2D24 */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x2D2C */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x2EC0 */
void _floatunsisf()
{
 JUMPOUT(0x2ED0);
}


/* Function: __floatsisf @ 0x2EC8 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x2F28);
 return result;
}


/* Function: __floatundisf @ 0x2EE8 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x2F10);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x2F74 */
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


/* Function: .term_proc @ 0x2FD0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x14084 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x14088 */

/* FAILED to decompile: __imp_printf @ 0x1408C */

/* FAILED to decompile: __imp_memset @ 0x14090 */

/* FAILED to decompile: __imp_abort @ 0x14094 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1409C */

/* Total functions decompiled: 90, failed: 6 */
