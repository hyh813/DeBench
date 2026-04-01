/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/2/2_clang_O0_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#define FPCR 3
#define FPSR 4
#define JUMPOUT(x) __builtin_unreachable()
#define LODWORD(x) (*(unsigned int*)&(x))

/* ARM64 compiler built-ins and helper macros */
static inline unsigned long long _ReadStatusReg(unsigned int reg) {
    unsigned long long val;
    if (reg == FPCR)
        __asm__ volatile("mrs %0, fpcr" : "=r"(val));
    else if (reg == FPSR)
        __asm__ volatile("mrs %0, fpsr" : "=r"(val));
    else
        val = 0;
    return val;
}

/* Helper unions for byte/word access */
typedef union {
    unsigned long long qw;
    struct {
        unsigned int low;
        unsigned int high;
    } dw;
} __UQWORD;

typedef union {
    unsigned int dw;
    struct {
        unsigned char low;
        unsigned char high;
    } db;
} __UDWORD;

#define HIWORD(x) (((__UQWORD *)&(x))->dw.high)
#define LOWORD(x) (((__UQWORD *)&(x))->dw.low)
#define LOBYTE(x) (((__UDWORD *)&(x))->db.low)
#define HIDWORD(x) (((__UQWORD *)&(x))->dw.high)

#define __CFADD__(a, b) ((a) + (b) < (a))

/* Compiler builtins */
static inline unsigned int __clz(unsigned int x) {
    return __builtin_clz(x);
}
static inline unsigned int __clzll(unsigned long long x) {
    return __builtin_clzll(x);
}

#define __PAIR128__(high, low) (((__int128)(high) << 64) | (__int128)(low))

typedef union {
    unsigned long long n128_u64[2];
    unsigned __int128 n128_u128;
} __n128;

typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    Point3D position;
    Point3D size;
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

typedef struct Graph {
    int numVertices;
    Edge *adjList[10];
} Graph;

typedef struct Flags {
    unsigned short flags;
} Flags;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef struct Device {
    int (*process)(int);
    int data;
} Device;

typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

typedef unsigned char _BOOL8;

/* Forward declarations */
long long call_weak_fn(void);
int double_value(int x);
int complex_callback(int *p, char **args);
unsigned long long _sfp_handle_exceptions(unsigned long long result);

/* Global data constants */
extern const long double xmmword_3620;
extern const long double xmmword_3630;
extern const char asc_3758[];
extern const char asc_38C4[];
extern const char asc_39E1[];
extern const char asc_3B7B[];
extern const __int128 xmmword_3670;
extern const __int128 xmmword_36D8;
extern const __int128 xmmword_36F0;
extern const __int128 xmmword_3640;
extern const unsigned char unk_3704[48];
extern const __int128 xmmword_3690;
extern const __int128 xmmword_36A4;
extern const __int128 xmmword_36B8;
extern const unsigned char loc_191C;
extern const unsigned char xmmword_3740[16];
extern const __int128 off_14DB8;
extern const __int128 xmmword_3650;
extern const unsigned char unk_14DC8[16];

/* Function: .init_proc @ 0x660 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_680 @ 0x680 */
void sub_680()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* Stub implementation for call_weak_fn */
long long call_weak_fn(void)
{
    return 0;
}


/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x854 */
char process_char(char c)
{
 if ( (unsigned char)c < 0x41u || (unsigned char)c > 0x5Au )
 return c;
 else
 return c + 32;
}


/* Function: process_short @ 0x8A4 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x8C4 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x8E0 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x8F8 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x914 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x934 */
double process_double(double d)
{
 return d / 2.0 + 0.1;
}


/* Function: process_ld @ 0x95C */
long double process_ld(long double d)
{
 return d * d + *(long double *)&xmmword_3620;
}


/* Function: process_bool @ 0x98C */
bool process_bool(int x)
{
 bool v2; // [xsp+8h] [xbp-8h]

 v2 = 0;
 if ( x > 0 )
 return x % 2 == 0;
 return v2;
}


/* Function: const_param @ 0x9E0 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x9FC */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0xA30 */
void test_data_types_l1()
{
 unsigned char v0; // w0
 unsigned char v1; // w0
 short v2; // w0
 int v3; // w0
 long v4; // x0
 long long v5; // x0
 float v6; // s0
 double v7; // d0
 long double v8; // q0
 bool v9; // w0
 bool v10; // w0
 bool v11; // w0
 int v12; // w0
 int v13; // w0
 int vol_value; // [xsp+28h] [xbp-8h] BYREF
 int value; // [xsp+2Ch] [xbp-4h] BYREF

 printf(asc_3758);
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
 v8 = process_ld(*(long double *)&xmmword_3630);
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


/* Function: array_1d_stack @ 0xBC4 */
int array_1d_stack(int *arr, int n)
{
 int i; // [xsp+Ch] [xbp-14h]
 int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += arr[i];
 return v4;
}


/* Function: array_string @ 0xC28 */
int array_string(char *str)
{
 int i; // [xsp+4h] [xbp-Ch]

 for ( i = 0; str[i]; ++i )
 ;
 return i;
}


/* Function: array_2d_stack @ 0xC68 */
int array_2d_stack(int (*arr)[10])
{
 int i; // [xsp+0h] [xbp-10h]
 int v3; // [xsp+4h] [xbp-Ch]

 v3 = 0;
 for ( i = 0; i < 10; ++i )
 v3 += (*arr)[10 * i + i];
 return v3;
}


/* Function: array_3d @ 0xCD4 */
int array_3d(int (*arr)[5][5])
{
 int k; // [xsp+8h] [xbp-18h]
 int j; // [xsp+Ch] [xbp-14h]
 int i; // [xsp+10h] [xbp-10h]
 int v5; // [xsp+14h] [xbp-Ch]

 v5 = 0;
 for ( i = 0; i < 5; ++i )
 {
 for ( j = 0; j < 5; ++j )
 {
 for ( k = 0; k < 5; ++k )
 v5 += (*arr)[5 * i][5 * j + k];
 }
 }
 return v5;
}


/* Function: array_vla @ 0xDA8 */
int array_vla(int n, int *arr)
{
 int i; // [xsp+8h] [xbp-18h]
 int v4; // [xsp+Ch] [xbp-14h]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += arr[i];
 return v4;
}


/* Function: array_pointer @ 0xE0C */
int array_pointer(int (*arr)[10], int n)
{
 int i; // [xsp+Ch] [xbp-14h]
 int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += (*arr)[10 * i];
 return v4;
}


/* Function: pointer_array @ 0xE78 */
int pointer_array(int **arr, int n)
{
 int v3; // [xsp+4h] [xbp-1Ch]
 int i; // [xsp+8h] [xbp-18h]
 int v5; // [xsp+10h] [xbp-10h]

 v5 = 0;
 if ( n >= 10 )
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


/* Function: array_complex_index @ 0xF28 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( x < 0 || x >= w || y < 0 || y >= h )
 return -1;
 else
 return arr[y * w + x];
}


/* Function: array_oob @ 0xFBC */
int array_oob(int *arr, int n)
{
 int i; // [xsp+Ch] [xbp-14h]
 int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i <= n; ++i )
 v4 += arr[i];
 return v4;
}


/* Function: test_array_types @ 0x1020 */
void test_array_types()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v7; // w0
 int v8; // w0
 long long *v9; // [xsp+8h] [xbp-568h]
 int v10; // [xsp+14h] [xbp-55Ch]
 int jj; // [xsp+24h] [xbp-54Ch]
 int v12[20]; // [xsp+28h] [xbp-548h] BYREF
 int *v13[4]; // [xsp+78h] [xbp-4F8h] BYREF
 long long v14; // [xsp+98h] [xbp-4D8h] BYREF
 int v15; // [xsp+C8h] [xbp-4A8h] BYREF
 int v16; // [xsp+CCh] [xbp-4A4h] BYREF
 int v17; // [xsp+D0h] [xbp-4A0h] BYREF
 int ii; // [xsp+D4h] [xbp-49Ch]
 int v19[10]; // [xsp+D8h] [xbp-498h] BYREF
 int v20[4]; // [xsp+1A0h] [xbp-3D0h] BYREF
 int n; // [xsp+1B0h] [xbp-3C0h]
 int m; // [xsp+1B4h] [xbp-3BCh]
 int k; // [xsp+1B8h] [xbp-3B8h]
 int v24[5][5][5]; // [xsp+1BCh] [xbp-3B4h] BYREF
 int j; // [xsp+3B0h] [xbp-1C0h]
 int i; // [xsp+3B4h] [xbp-1BCh]
 int arr[10][10]; // [xsp+3B8h] [xbp-1B8h] BYREF
 char v28[8]; // [xsp+548h] [xbp-28h] BYREF
 __int128 v29; // [xsp+550h] [xbp-20h] BYREF
 int v30; // [xsp+560h] [xbp-10h]

 printf(asc_38C4);
 memcpy(&v29, &xmmword_3670, sizeof(__int128));
 v30 = 5;
 v0 = array_1d_stack((int *)&v29, 5);
 printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(v28, "hello");
 v1 = array_string(v28);
 printf("ARR-L1-02 (array_string): %d\n", v1);
 for ( i = 0; i < 10; ++i )
 {
 for ( j = 0; j < 10; ++j )
 {
 if ( i == j )
 v10 = i;
 else
 v10 = 0;
 arr[i][j] = v10;
 }
 }
 v2 = array_2d_stack(arr);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v2);
 for ( k = 0; k < 5; ++k )
 {
 for ( m = 0; m < 5; ++m )
 {
 for ( n = 0; n < 5; ++n )
 v24[k][m][n] = 1;
 }
 }
 v3 = array_3d(v24);
 printf("ARR-L1-04 (array_3d): %d\n", v3);
 *(unsigned long long *)v20 = 0x140000000ALL;
 v20[2] = 30;
 v4 = array_vla(3, v20);
 printf("ARR-L2-01 (array_vla): %d\n", v4);
 for ( ii = 0; ii < 5; ++ii )
 v19[10 * ii] = 10 * ii;
 v5 = array_pointer((int (*)[10])v19, 5);
 printf("ARR-L2-02 (array_pointer): %d\n", v5);
 v17 = 10;
 v16 = 20;
 v15 = 30;
 v13[0] = &v17;
 v13[1] = &v16;
 v13[2] = &v15;
 v13[3] = 0;
 v9 = (long long *)&v14;
 do
 *v9 = 0;
 while ( (char *)(++v9) < (char *)&v15 );
 v7 = pointer_array(v13, 3);
 printf("ARR-L2-03 (pointer_array): %d\n", v7);
 for ( jj = 0; jj < 20; ++jj )
 v12[jj] = jj;
 v8 = array_complex_index(v12, 5, 4, 2, 3);
 printf("ARR-L2-04 (array_complex_index): %d\n", v8);
}


/* Function: ptr_single @ 0x13D0 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x13EC */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x140C */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1430 */
int ptr_increment(int *p, int n)
{
 int i; // [xsp+Ch] [xbp-14h]
 int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += *p++;
 return v4;
}


/* Function: ptr_offset @ 0x149C */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x14BC */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x14E8 */
int ptr_void(void *p, int type)
{
 unsigned int value;
 unsigned char cvalue;
 if ( !type )
 {
 memcpy(&value, p, sizeof(value));
 return value;
 }
 if ( type == 1 )
 {
 memcpy(&cvalue, p, sizeof(cvalue));
 return cvalue;
 }
 return -1;
}


/* Function: ptr_const @ 0x154C */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1570 */
int ptr_const_ptr(int *const p)
{
 *p += 5;
 return *p;
}


/* Function: ptr_func_simple @ 0x159C */
long long ptr_func_simple(int (*f)(int), unsigned int x)
{
 return ((long long ( *)(unsigned long long))f)(x);
}


/* Function: ptr_func_complex @ 0x15C8 */
long long ptr_func_complex(int (*f)(int *, char **), int *p)
{
 __int128 v3; // [xsp+0h] [xbp-20h] BYREF
 int *v4; // [xsp+10h] [xbp-10h]
 int (*fa)(int *, char **); // [xsp+18h] [xbp-8h]

 fa = f;
 v4 = p;
 memcpy(&v3, &off_14DB8, sizeof(__int128));
 return (long long)((int (*)(int *, __int128 *))f)(p, &v3);
}


/* Function: ptr_cast @ 0x1608 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1638 */
void * opaque_handle_create(int size)
{
 void *result;

 result = malloc(size);
 return result;
}


/* Function: opaque_handle_op @ 0x164C */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x1664 */
void test_pointer_types()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 int v10; // w0
 int v11; // w0
 int v12; // w0
 int v13; // w0
 void *handle; // [xsp+20h] [xbp-B0h]
 int v15; // [xsp+28h] [xbp-A8h] BYREF
 int v16; // [xsp+2Ch] [xbp-A4h] BYREF
 int v17; // [xsp+30h] [xbp-A0h] BYREF
 int v18; // [xsp+34h] [xbp-9Ch] BYREF
 char v19; // [xsp+3Bh] [xbp-95h] BYREF
 int v20; // [xsp+3Ch] [xbp-94h] BYREF
 int p2[4]; // [xsp+40h] [xbp-90h] BYREF
 int v22[4]; // [xsp+50h] [xbp-80h] BYREF
 int p[4]; // [xsp+60h] [xbp-70h] BYREF
 int v24; // [xsp+70h] [xbp-60h]
 int arr4[6]; // [xsp+80h] [xbp-50h] BYREF
 int ***ppptr3; // [xsp+98h] [xbp-38h]
 int **pptr3; // [xsp+A0h] [xbp-30h] BYREF
 int *ptr3; // [xsp+A8h] [xbp-28h] BYREF
 int val3; // [xsp+B4h] [xbp-1Ch] BYREF
 int **pptr2; // [xsp+B8h] [xbp-18h]
 int *ptr2; // [xsp+C0h] [xbp-10h] BYREF
 int val2; // [xsp+C8h] [xbp-8h] BYREF
 int val1; // [xsp+CCh] [xbp-4h] BYREF

 printf(asc_39E1);
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
 memcpy(arr4, &xmmword_3690, sizeof(__int128));
 arr4[4] = 5;
 v3 = ptr_increment(arr4, 5);
 printf("PTR-L2-04 (ptr_increment): %d\n", v3);
 memcpy(p, &xmmword_36A4, sizeof(__int128));
 v24 = 50;
 v4 = ptr_offset(p, 2);
 printf("PTR-L2-05 (ptr_offset): %d\n", v4);
 memcpy(p2, &xmmword_36B8, sizeof(__int128));
 v22[0] = 40;
 v5 = ptr_diff(v22, p2);
 printf("PTR-L2-06 (ptr_diff): %d\n", v5);
 v20 = 42;
 v19 = 65;
 v6 = ptr_void(&v20, 0);
 printf("PTR-L2-07 (ptr_void): %d\n", v6);
 v7 = ptr_void(&v19, 1);
 printf("PTR-L2-07 (ptr_void): %d\n", v7);
 v18 = 10;
 v8 = ptr_const(&v18);
 printf("PTR-L2-08 (ptr_const): %d\n", v8);
 v17 = 10;
 v9 = ptr_const_ptr(&v17);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
 v10 = ptr_func_simple((int (*)(int))double_value, 5u);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
 v16 = 5;
 v11 = ptr_func_complex((int (*)(int *, char **))complex_callback, &v16);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
 v15 = 305419896;
 v12 = ptr_cast(&v15);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
 handle = opaque_handle_create(10);
 v13 = opaque_handle_op(handle);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
}


/* Function: double_value @ 0x18D4 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: complex_callback @ 0x18EC */
int complex_callback(int *p, char **args)
{
 *p += 10;
 return *args != 0;
}


/* Adapter function to bridge complex_callback signature for struct_func_ptr usage */
static int complex_callback_adapter(int data)
{
 int p = data;
 char *args = (char *)&p;
 return complex_callback(&p, &args);
}


/* Function: struct_simple @ 0x1928 */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x1958 */
int struct_array(Point3D *pts, int n)
{
 int i; // [xsp+Ch] [xbp-14h]
 int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += pts[i].x + pts[i].y + pts[i].z;
 return v4;
}


/* Function: struct_nested @ 0x19F4 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.x;
}


/* Function: struct_deep @ 0x1A18 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1A3C */
int struct_with_ptr(Node *node)
{
 int data; // [xsp+0h] [xbp-10h]

 if ( node->next )
 data = node->next->data;
 else
 data = 0;
 return node->data + data;
}


/* Function: struct_bitfields @ 0x1A94 */
int struct_bitfields(Flags *f)
{
 return ((*(unsigned short *)f >> 1) & 3) + (*(unsigned short *)f & 1) + ((*(unsigned short *)f >> 3) & 7) + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x1AEC */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x1B54 */
int union_array(UnionData *arr, int n)
{
 int i; // [xsp+Ch] [xbp-14h]
 int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += arr[i].i;
 return v4;
}


/* Function: enum_type @ 0x1BB8 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1BD4 */
int enum_switch(State s)
{
 int v2; // [xsp+Ch] [xbp-4h]

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


/* Function: struct_func_ptr @ 0x1C50 */
long long struct_func_ptr(Device *dev)
{
 return (long long)dev->process(dev->data);
}


/* Function: linked_list @ 0x1C80 */
int linked_list(Node *head)
{
 int v3; // [xsp+14h] [xbp-Ch]

 v3 = 0;
 while ( head )
 {
 v3 += head->data;
 head = head->next;
 }
 return v3;
}


/* Function: doubly_linked_list @ 0x1CD4 */
int doubly_linked_list(DNode *head)
{
 int v3; // [xsp+14h] [xbp-Ch]

 v3 = 0;
 while ( head )
 {
 v3 += head->data;
 head = head->next;
 }
 return v3;
}


/* Function: binary_tree_sum @ 0x1D28 */
long long binary_tree_sum(TreeNode *root)
{
 int data; // [xsp+8h] [xbp-18h]
 int v3; // [xsp+Ch] [xbp-14h]

 if ( root )
 {
 data = root->data;
 v3 = data + binary_tree_sum(root->left);
 return (unsigned int)(v3 + binary_tree_sum(root->right));
 }
 else
 {
 return 0;
 }
}


/* Function: binary_tree @ 0x1D9C */
long long binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1DC0 */
int graph_traverse(Graph *g)
{
 Edge *j; // [xsp+8h] [xbp-18h]
 int i; // [xsp+10h] [xbp-10h]
 int v4; // [xsp+14h] [xbp-Ch]

 v4 = 0;
 for ( i = 0; i < g->numVertices; ++i )
 {
 for ( j = g->adjList[i]; j; j = j->next )
 v4 += j->dest;
 }
 return v4;
}


/* Function: test_composite_types @ 0x1E50 */
// local variable allocation has failed, the output may be wrong!
void test_composite_types()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 int v10; // w0
 int v11; // w0
 int v12; // w0
 int v13; // w0
 int v14; // w0
 Graph v15; // [xsp+38h] [xbp-1B8h] BYREF
 __int128 v16; // [xsp+90h] [xbp-160h] BYREF
 TreeNode root; // [xsp+A0h] [xbp-150h] BYREF
 DNode v18; // [xsp+C0h] [xbp-130h] BYREF
 int v19; // [xsp+D8h] [xbp-118h] BYREF
 long long v20; // [xsp+E0h] [xbp-110h]
 DNode *v21; // [xsp+E8h] [xbp-108h]
 Node head; // [xsp+F0h] [xbp-100h] BYREF
 int v23; // [xsp+100h] [xbp-F0h] BYREF
 int *v24; // [xsp+108h] [xbp-E8h]
 int v25; // [xsp+110h] [xbp-E0h] BYREF
 long long v26; // [xsp+118h] [xbp-D8h]
 Device v27; // [xsp+120h] [xbp-D0h] BYREF
 UnionData arr[2]; // [xsp+138h] [xbp-B8h] BYREF
 Device dev; // [xsp+140h] [xbp-B0h] BYREF
 Node node; // [xsp+150h] [xbp-A0h] BYREF
 __int128 v31; // [xsp+160h] [xbp-90h] OVERLAPPED BYREF
 Node node1; // [xsp+170h] [xbp-80h] BYREF
 Widget w; // [xsp+190h] [xbp-60h] BYREF
 unsigned char r[24]; // [xsp+1C0h] [xbp-30h] OVERLAPPED BYREF
 Point3D pts[2]; // [xsp+1E0h] [xbp-10h] BYREF

 printf(asc_3B7B);
 __int128 tmp_pts;
 memcpy(&tmp_pts, &xmmword_36D8, sizeof(tmp_pts));
 memcpy(pts, &tmp_pts, sizeof(__int128));
 pts[0].z = 3;
 v0 = struct_simple(pts);
 printf("CMP-L2-01 (struct_simple): %d\n", v0);
 memcpy(r, &xmmword_36D8, sizeof(__int128));
 __int128 tmp_r16 = 0x200000002LL;
 memcpy(&r[16], &tmp_r16, sizeof(__int128));
 v1 = struct_array((Point3D *)&r, 2);
 printf("CMP-L2-02 (struct_array): %d\n", v1);
 memcpy(&w.bounds.size, &xmmword_36F0, sizeof(xmmword_36F0));
 w.style.stroke.r = 200;
 v2 = struct_nested(&w.bounds);
 printf("CMP-L2-03 (struct_nested): %d\n", v2);
 memcpy(&node1, &unk_3704, 0x30u);
 v3 = struct_deep((Widget *)&node1);
 printf("CMP-L2-04 (struct_deep): %d\n", v3);
v31 = (__int128)xmmword_3640;
node.data = 10;
node.next = (Node *)&v31;
 v4 = struct_with_ptr(&node);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
 dev.process = (int (*)(int))double_value;
 v5 = struct_bitfields((Flags *)&dev.process);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v5);
 *(&dev.data + 1) = 305419896;
 v6 = union_type((UnionData *)&dev.data + 1, 0);
 printf("CMP-L2-07 (union_type): %d\n", v6);
 *(unsigned long long *)&arr[0].i = 0x140000000ALL;
 dev.data = 30;
 v7 = union_array(arr, 3);
 printf("CMP-L2-08 (union_array): %d\n", v7);
 v8 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n", v8);
 v9 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n", v9);
 memcpy(&v27, (const void *)unk_14DC8, sizeof(Device));
 v10 = struct_func_ptr(&v27);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v10);
 head.data = 10;
 head.next = (Node *)&v23;
 v23 = 20;
 v24 = &v25;
 v25 = 30;
 v26 = 0;
 v11 = linked_list(&head);
 printf("CMP-L2-12 (linked_list): %d\n", v11);
 v18.data = 10;
 v18.prev = 0;
 v19 = 20;
 v20 = (long long)((uintptr_t)v18.next - (uintptr_t)(DNode *)&v19);
 v21 = &v18;
 v18.next = (DNode *)&v19;
 v12 = doubly_linked_list(&v18);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v12);
 memcpy(&root.data, xmmword_3740, sizeof(root.data));
 root.right = 0;
 v13 = binary_tree(&root);
 printf("CMP-L2-14 (binary_tree): %d\n", v13);
 v16 = (__int128)xmmword_3650;
 memset(&v15, 0, sizeof(v15));
 v15.numVertices = 2;
 v15.adjList[0] = (Edge *)&v16;
 v14 = graph_traverse(&v15);
 printf("CMP-L2-15 (graph_traverse): %d\n", v14);
}


/* Function: main @ 0x2194 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: __addtf3 @ 0x21D0 */
__n128 _addtf3(long double a1, long double a2)
{
 unsigned long long StatusReg; // x16
 long long v3; // x6
 unsigned long long v4; // x13
 long long v5; // x8
 long long v6; // x7
 long long v7; // x15
 int v8; // w14
 unsigned long long v9; // x3
 long long v10; // x2
 unsigned long long v11; // x9
 long long v12; // x1
 unsigned long long v13; // x11
 int v14; // w0
 unsigned long long v15; // x4
 unsigned long long v16; // x3
 unsigned long long v17; // x0
 unsigned long long v18; // x4
 int v19; // w1
 unsigned long long v20; // x3
 unsigned long long v21; // x0
 int v22; // w1
 int v23; // w7
 long long v24; // x6
 long long v25; // x0
 int v26; // w4
 long long v27; // x1
 long long v28; // x1
 long long v29; // x2
 long long v30; // x1
 unsigned long long v31; // x9
 __int128 v32; // t2
 short v33; // w2
 __n128 result; // q0
 int v35; // w0
 unsigned long long v36; // x1
 unsigned long long v37; // x3
 unsigned long long v38; // x0
 unsigned long long v39; // x7
 unsigned __int128 v40; // kr30_16
 long long v41; // x1
 __int128 v42; // t2
 long long v43; // x1
 int v44; // w0
 int v45; // w0
 unsigned long long v46; // x4
 unsigned long long v47; // x0
 bool v48; // cf
 char v49; // w1
 unsigned long long v50; // x4
 unsigned long long v51; // x0
 unsigned long long v52; // x1
 char v53; // w1
 char v54; // w1
 int v55; // w0
 unsigned long long v56; // x1
 char v57; // w1
 int v58; // w0
 unsigned long long v59; // x1
 signed __int128 v60; // kr70_16
 unsigned long long v61; // x9
 char v62; // w2
 int v63; // w0
 unsigned long long v64; // x2
 char v65; // w2
 int v66; // w0
 unsigned long long v67; // x2
 unsigned long long v68; // x2
 unsigned long long v69; // x1
 __int128 v70; // t2
 unsigned long long v71; // x2
 unsigned long long v72; // x1
 unsigned long long v73; // x9
 unsigned long long v74; // x1
 __int128 v75; // t2
 __n128 v76; // [xsp+10h] [xbp+10h]

 StatusReg = _ReadStatusReg(FPCR);
 v3 = *((unsigned long long *)&a1 + 1) >> 63;
 v4 = *(__int128 *)&a1 >> 61;
 v5 = HIWORD(*((unsigned long long *)&a1 + 1)) & 0x7FFFLL;
 v6 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a1 + 1) >> 63;
 v8 = *((unsigned long long *)&a1 + 1) >> 63;
 v9 = *(__int128 *)&a2 >> 61;
 v10 = v5;
 v11 = 8LL * *(unsigned long long *)&a1;
 v12 = v6;
 v13 = 8LL * *(unsigned long long *)&a2;
 if ( *((unsigned long long *)&a1 + 1) >> 63 == *((unsigned long long *)&a2 + 1) >> 63 )
 {
 v14 = v5 - v6;
 if ( (int)v5 - (int)v6 > 0 )
 {
 if ( v6 )
 {
 v9 |= 0x8000000000000uLL;
 if ( v5 == 0x7FFF )
 {
LABEL_100:
 if ( v4 | v11 )
 {
 v31 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v4 << 61);
 v41 = v4 >> 3;
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 goto LABEL_102;
 }
 goto LABEL_132;
 }
 }
 else
 {
 if ( __PAIR128__(v9, v13) == 0 )
 {
 if ( v5 != 0x7FFF )
 goto LABEL_46;
 if ( __PAIR128__(v4, v11) == 0 )
 goto LABEL_120;
 v14 = (v4 >> 50) ^ 1;
 goto LABEL_61;
 }
 if ( !--v14 )
 {
 v48 = __CFADD__(v11, v13);
 v11 += v13;
 v4 += v48 + v9;
 goto LABEL_85;
 }
 if ( v5 == 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 goto LABEL_132;
LABEL_60:
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 goto LABEL_61;
 }
 }
 if ( v14 > 116 )
 {
 v38 = (v9 | v13) != 0;
 }
 else if ( v14 > 63 )
 {
 v57 = 0x80 - v14;
 v58 = v14 - 64;
 v59 = v13 | (v9 << v57);
 if ( v58 )
 v13 = v59;
 v38 = (v13 != 0) | (v9 >> v58);
 }
 else
 {
 v36 = (v9 << (64 - (unsigned char)v14)) | (v13 >> v14);
 v37 = v9 >> v14;
 v38 = v36 | (v13 << (64 - (unsigned char)v14) != 0);
 v4 += v37;
 }
 v48 = __CFADD__(v38, v11);
 v11 += v38;
 if ( v48 )
 ++v4;
LABEL_85:
 if ( (v4 & 0x8000000000000LL) == 0 )
 goto LABEL_46;
 if ( ++v10 != 0x7FFF )
 {
 v26 = 0;
 v11 = v11 & 1 | (v11 >> 1) | (v4 << 63);
 v4 = (v4 & 0xFFF7FFFFFFFFFFFFLL) >> 1;
 v25 = v11 & 7;
 goto LABEL_20;
 }
 v43 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0 )
 goto LABEL_71;
 if ( v43 != 0x400000 || a1 < 0.0 )
 {
 if ( v43 != 0x800000 )
 goto LABEL_161;
 if ( a1 >= 0.0 )
 goto LABEL_222;
 goto LABEL_195;
 }
 goto LABEL_231;
 }
 if ( (unsigned int)v5 != (unsigned int)v6 )
 {
 if ( v5 )
 {
 v45 = v6 - v5;
 v4 |= 0x8000000000000uLL;
 }
 else
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( v6 != 0x7FFF )
 {
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 goto LABEL_46;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_120;
 v11 = 8LL * *(unsigned long long *)&a2;
 v4 = *(__int128 *)&a2 >> 61;
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 goto LABEL_61;
 }
 v45 = ~v14;
 if ( !v45 )
 {
 v48 = __CFADD__(v11, v13);
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v11 += v13;
 v4 += v48 + v9;
 goto LABEL_85;
 }
 }
 if ( v6 == 0x7FFF )
 {
 if ( v9 | v13 )
 {
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 v41 = v9 >> 3;
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 goto LABEL_102;
 }
 goto LABEL_132;
 }
 if ( v45 > 116 )
 {
 v47 = (v4 | v11) != 0;
 }
 else if ( v45 > 63 )
 {
 v65 = 0x80 - v45;
 v66 = v45 - 64;
 v67 = v11 | (v4 << v65);
 if ( v66 )
 v11 = v67;
 v47 = (v11 != 0) | (v4 >> v66);
 }
 else
 {
 v46 = v4 >> v45;
 v47 = (v4 << (64 - (unsigned char)v45)) | (v11 >> v45) | (v11 << (64 - (unsigned char)v45) != 0);
 v9 += v46;
 }
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v11 = v47 + v13;
 if ( __CFADD__(v47, v13) )
 v4 = v9 + 1;
 else
 v4 = v9;
 goto LABEL_85;
 }
 if ( ((v5 + 1) & 0x7FFE) != 0 )
 {
 if ( v5 != 32766 )
 {
 v10 = v5 + 1;
 v60 = __PAIR128__(v9, v11) + __PAIR128__(v4, v13);
 v26 = 0;
 v25 = ((v11 + v13) >> 1) & 7;
 v4 = (unsigned long long)((__PAIR128__(v9, v11) + __PAIR128__(v4, v13)) >> 64) >> 1;
 v11 = v60 >> 1;
 goto LABEL_20;
 }
 v43 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0 )
 goto LABEL_71;
 if ( v43 != 0x400000 || a1 < 0.0 )
 {
 if ( v43 != 0x800000 )
 {
LABEL_161:
 v14 = 20;
 if ( v43 != 0x400000 )
 {
LABEL_65:
 if ( v43 )
 {
 if ( v43 == 0x400000 )
 {
 if ( v7 )
 goto LABEL_68;
 }
 else if ( ((v43 == 0x800000) & (unsigned char)v7) == 0 )
 {
LABEL_68:
 v31 = -1;
 v14 |= 0x14u;
 v24 = 0x1FFFFFFFFFFFFFFFLL;
 LOWORD(v10) = 32766;
 goto LABEL_49;
 }
 }
 v3 = (unsigned char)v8;
LABEL_71:
 result.n128_u64[0] = 0;
 result.n128_u64[1] = (v3 << 63) | 0x7FFF000000000000LL;
 goto LABEL_72;
 }
 v4 = -1;
 v10 = 32766;
 v11 = -1;
 v26 = 0;
 v14 = 20;
 if ( a1 < 0.0 )
 goto LABEL_91;
 goto LABEL_89;
 }
 if ( a1 >= 0.0 )
 {
LABEL_222:
 v4 = -1;
 LOWORD(v8) = 0;
 v11 = -1;
 v10 = 32766;
 v14 = 20;
 goto LABEL_27;
 }
LABEL_195:
 v3 = 1;
 goto LABEL_71;
 }
LABEL_231:
 v3 = 0;
 goto LABEL_71;
 }
 if ( !v5 )
 {
 v24 = v9 | v13;
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( __PAIR128__(v9, v13) == 0 )
 {
 v31 = 0;
 goto LABEL_49;
 }
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 }
 else if ( __PAIR128__(v9, v13) != 0 )
 {
 v48 = __CFADD__(v11, v13);
 v49 = v11 + v13;
 v11 += v13;
 v4 += v48 + v9;
 if ( (v4 & 0x8000000000000LL) != 0 )
 {
 v4 &= ~0x8000000000000uLL;
 v25 = v49 & 7;
 v26 = 0;
 v10 = 1;
 goto LABEL_20;
 }
 goto LABEL_17;
 }
 goto LABEL_168;
 }
 if ( v5 == 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( v6 != 0x7FFF )
 goto LABEL_182;
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_132;
 }
 else
 {
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 if ( v6 != 0x7FFF )
 goto LABEL_216;
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_230;
 }
 }
 else
 {
 if ( v6 != 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
LABEL_182:
 v41 = v9 >> 3;
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 goto LABEL_102;
 }
LABEL_216:
 if ( v9 | v13 )
 goto LABEL_217;
LABEL_230:
 v41 = v4 >> 3;
 v31 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v4 << 61);
 goto LABEL_102;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 goto LABEL_132;
 goto LABEL_230;
 }
 }
 if ( (v9 & 0x4000000000000LL) == 0 )
 v14 = 1;
 if ( !(v4 | v11) )
 goto LABEL_182;
LABEL_217:
 v72 = v4 >> 3;
 v73 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v4 << 61);
 if ( (v4 & 0x4000000000000LL) != 0 && (v9 & 0x4000000000000LL) == 0 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v73 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | (v9 << 61);
 v72 = v9 >> 3;
 }
 *((unsigned long long *)&v75 + 1) = v72;
 *(unsigned long long *)&v75 = v73;
 v74 = v75 >> 61;
 v31 = v73 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v74 << 61);
 v41 = v74 >> 3;
 goto LABEL_102;
 }
 v14 = v5 - v6;
 if ( (int)v5 - (int)v6 > 0 )
 {
 if ( v6 )
 {
 v9 |= 0x8000000000000uLL;
 goto LABEL_5;
 }
 if ( __PAIR128__(v9, v13) != 0 )
 {
 if ( !--v14 )
 {
 v4 = (__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64;
 v11 -= v13;
 goto LABEL_10;
 }
LABEL_5:
 if ( v5 != 0x7FFF )
 {
 if ( v14 > 116 )
 {
 v17 = (v9 | v13) != 0;
 }
 else if ( v14 > 63 )
 {
 v54 = 0x80 - v14;
 v55 = v14 - 64;
 v56 = v13 | (v9 << v54);
 if ( v55 )
 v13 = v56;
 v17 = (v13 != 0) | (v9 >> v55);
 }
 else
 {
 v15 = (v9 << (64 - (unsigned char)v14)) | (v13 >> v14);
 v16 = v9 >> v14;
 v17 = v15 | (v13 << (64 - (unsigned char)v14) != 0);
 v4 -= v16;
 }
 v4 = (__PAIR128__(v4, v11) - v17) >> 64;
 v11 -= v17;
 goto LABEL_10;
 }
 goto LABEL_100;
 }
 if ( v5 != 0x7FFF )
 goto LABEL_46;
 if ( __PAIR128__(v4, v11) == 0 )
 {
LABEL_120:
 v31 = 0;
 v41 = 0;
 v14 = 0;
 goto LABEL_102;
 }
 goto LABEL_60;
 }
 if ( (unsigned int)v5 == (unsigned int)v6 )
 {
 if ( ((v5 + 1) & 0x7FFE) != 0 )
 {
 v18 = (__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64;
 v52 = v11 - v13;
 if ( (v18 & 0x8000000000000LL) != 0 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v18 = (__PAIR128__(v9, v13) - __PAIR128__(v4, v11)) >> 64;
 v11 = v13 - v11;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 }
 else
 {
 v24 = v52 | v18;
 if ( __PAIR128__(v18, v52) == 0 )
 {
 v31 = 0;
 LOWORD(v10) = 0;
 LOWORD(v8) = (StatusReg & 0xC00000) == 0x800000;
 goto LABEL_49;
 }
 v11 -= v13;
 }
 goto LABEL_11;
 }
 v39 = v4 | v11;
 v24 = v9 | v13;
 if ( !v5 )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_187;
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 }
 else if ( __PAIR128__(v9, v13) != 0 )
 {
 v40 = __PAIR128__(v4, v11) - __PAIR128__(v9, v13);
 if ( (((__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64) & 0x8000000000000LL) != 0 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = (__PAIR128__(v9, v13) - __PAIR128__(v4, v11)) >> 64;
 v11 = v13 - v11;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 v24 = v11 | v4;
 goto LABEL_18;
 }
 v24 = v40 | *((unsigned long long *)&v40 + 1);
 if ( v40 != 0 )
 {
 v25 = v40 & 7;
 v4 = (__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64;
 v11 -= v13;
 v26 = 1;
 goto LABEL_20;
 }
LABEL_187:
 v31 = 0;
 LOWORD(v8) = (StatusReg & 0xC00000) == 0x800000;
 goto LABEL_49;
 }
LABEL_168:
 v28 = 0;
 v10 = 0;
 goto LABEL_169;
 }
 if ( v5 == 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( v12 != 0x7FFF )
 goto LABEL_153;
 }
 else
 {
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 if ( v12 != 0x7FFF )
 goto LABEL_149;
 }
 }
 else if ( v12 != 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) != 0 )
 goto LABEL_149;
LABEL_153:
 if ( !v24 )
 {
LABEL_154:
 v31 = -1;
 v41 = 0xFFFFFFFFFFFFLL;
 LOWORD(v8) = 0;
 v14 = 1;
 goto LABEL_103;
 }
LABEL_213:
 v41 = v9 >> 3;
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_102;
 }
 if ( v24 )
 {
 if ( (v9 & 0x4000000000000LL) == 0 )
 v14 = 1;
 if ( v39 )
 {
 v61 = v4 << 61;
 v41 = v4 >> 3;
LABEL_205:
 v68 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | v61;
 if ( (v41 & 0x800000000000LL) != 0 && (v9 & 0x4000000000000LL) == 0 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v68 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 v41 = v9 >> 3;
 }
 *((unsigned long long *)&v70 + 1) = v41;
 *(unsigned long long *)&v70 = v68;
 v69 = v70 >> 61;
 v71 = v68 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v69 << 61);
 v41 = v69 >> 3;
 v31 = v71;
 goto LABEL_102;
 }
 goto LABEL_213;
 }
 if ( !v39 )
 goto LABEL_154;
LABEL_149:
 v61 = v4 << 61;
 v41 = v4 >> 3;
 if ( !v24 )
 {
 v31 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | v61;
 goto LABEL_102;
 }
 goto LABEL_205;
 }
 if ( v5 )
 {
 v35 = v6 - v5;
 v4 |= 0x8000000000000uLL;
LABEL_111:
 if ( v6 != 0x7FFF )
 {
 if ( v35 > 116 )
 {
 v51 = (v4 | v11) != 0;
 }
 else if ( v35 > 63 )
 {
 v62 = 0x80 - v35;
 v63 = v35 - 64;
 v64 = v11 | (v4 << v62);
 if ( v63 )
 v11 = v64;
 v51 = (v11 != 0) | (v4 >> v63);
 }
 else
 {
 v50 = v4 >> v35;
 v51 = (v4 << (64 - (unsigned char)v35)) | (v11 >> v35) | (v11 << (64 - (unsigned char)v35) != 0);
 v9 -= v50;
 }
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = (__PAIR128__(v9, v13) - v51) >> 64;
 v11 = v13 - v51;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
LABEL_10:
 v18 = v4 & 0x7FFFFFFFFFFFFLL;
 if ( (v4 & 0x8000000000000LL) == 0 )
 goto LABEL_46;
LABEL_11:
 if ( v18 )
 {
 v19 = __clz(v18) - 12;
 }
 else
 {
 v44 = __clz(v11);
 v19 = v44 + 52;
 if ( v44 + 52 > 63 )
 {
 v21 = v11 << ((unsigned char)v44 - 12);
 goto LABEL_14;
 }
 }
 v20 = v18 << v19;
 v18 = v11 << v19;
 v21 = (v11 >> -(char)v19) | v20;
LABEL_14:
 if ( v19 >= v10 )
 {
 v22 = v19 - v10;
 v23 = v22 + 1;
 if ( v22 + 1 <= 63 )
 {
 v4 = v21 >> v23;
 v11 = (v21 << (63 - (unsigned char)v22))
 | (v18 >> ((unsigned char)v22 + 1))
 | (v18 << (63 - (unsigned char)v22) != 0);
LABEL_17:
 v24 = v11 | v4;
 goto LABEL_18;
 }
 v53 = v22 - 63;
 if ( v23 != 64 )
 v18 |= v21 << (0x80 - (unsigned char)v23);
 v4 = 0;
 v11 = (v18 != 0) | (v21 >> v53);
 v24 = v11;
LABEL_18:
 if ( v24 )
 goto LABEL_19;
 goto LABEL_48;
 }
 v10 -= v19;
 v4 = v21 & 0xFFF7FFFFFFFFFFFFLL;
 v11 = v18;
LABEL_46:
 v24 = v11 | v4;
 v25 = v11 & 7;
 v26 = 0;
 if ( v10 )
 goto LABEL_20;
 if ( v24 )
 {
LABEL_19:
 v25 = v11 & 7;
 v10 = 0;
 v26 = 1;
LABEL_20:
 if ( v25 )
 {
 v27 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0x400000 )
 {
 v14 = 16;
 if ( !v7 )
 {
LABEL_89:
 v48 = __CFADD__(v11, 8);
 v11 += 8LL;
 if ( v48 )
 ++v4;
 }
 }
 else
 {
 if ( v27 != 0x800000 )
 {
 if ( v27 )
 {
 v28 = v4 & 0x8000000000000LL;
 v14 = 16;
 if ( v26 )
 v14 = 24;
 goto LABEL_26;
 }
 v14 = 16;
 if ( (v11 & 0xF) != 4 )
 {
 v48 = __CFADD__(v11, 4);
 v11 += 4LL;
 if ( v48 )
 ++v4;
 }
 goto LABEL_91;
 }
 v14 = 16;
 if ( v7 )
 goto LABEL_89;
 }
LABEL_91:
 v28 = v4 & 0x8000000000000LL;
 if ( v26 )
 v14 |= 8u;
 goto LABEL_26;
 }
 v28 = v4 & 0x8000000000000LL;
 v14 = 0;
 if ( !v26 )
 goto LABEL_26;
LABEL_169:
 v14 = 0;
 if ( (StatusReg & 0x800) != 0 )
 v14 = 8;
LABEL_26:
 if ( v28 )
 {
LABEL_27:
 v29 = v10 + 1;
 if ( v29 != 0x7FFF )
 {
 v30 = (v4 >> 3) & 0xFFFFFFFFFFFFLL;
 *((unsigned long long *)&v32 + 1) = v4;
 *(unsigned long long *)&v32 = v11;
 v31 = v32 >> 3;
 v33 = v29 & 0x7FFF;
 goto LABEL_29;
 }
 v43 = StatusReg & 0xC00000;
 goto LABEL_65;
 }
 goto LABEL_62;
 }
LABEL_48:
 v31 = 0;
 LOWORD(v10) = 0;
 v14 = 0;
LABEL_49:
 v30 = v24 & 0xFFFFFFFFFFFFLL;
 v33 = v10 & 0x7FFF;
 goto LABEL_29;
 }
 if ( v9 | v13 )
 {
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 v41 = v9 >> 3;
 goto LABEL_102;
 }
 v3 = *((unsigned long long *)&a2 + 1) >> 63;
LABEL_132:
 result.n128_u64[0] = 0;
 result.n128_u64[1] = (v3 << 63) | 0x7FFF000000000000LL;
 return result;
 }
 if ( __PAIR128__(v4, v11) != 0 )
 {
 v35 = ~v14;
 if ( !v35 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = (__PAIR128__(v9, v13) - __PAIR128__(v4, v11)) >> 64;
 v11 = v13 - v11;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_10;
 }
 goto LABEL_111;
 }
 if ( v6 != 0x7FFF )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_46;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_120;
 }
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v11 = 8LL * *(unsigned long long *)&a2;
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 v4 = *(__int128 *)&a2 >> 61;
LABEL_61:
 v10 = 0x7FFF;
LABEL_62:
 v41 = v4 >> 3;
 *((unsigned long long *)&v42 + 1) = v4;
 *(unsigned long long *)&v42 = v11;
 v31 = v42 >> 3;
 v24 = v4 >> 3;
 if ( v10 != 0x7FFF )
 goto LABEL_49;
LABEL_102:
 if ( v41 | v31 )
 {
LABEL_103:
 v33 = 0x7FFF;
 v30 = v41 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 goto LABEL_29;
 }
 v31 = 0;
 v33 = 0x7FFF;
 v30 = 0;
LABEL_29:
 result.n128_u64[0] = v31;
 result.n128_u64[1] = v30 & 0xFFFFFFFFFFFFLL | ((unsigned long long)(unsigned short)(v33 | ((unsigned short)v8 << 15)) << 48);
 if ( v14 )
 {
LABEL_72:
 v76 = result;
 _sfp_handle_exceptions(v14);
 return v76;
 }
 return result;
}


/* Function: __multf3 @ 0x2D70 */
__n128 _multf3(long double a1, long double a2)
{
 unsigned long long v2; // x7
 unsigned long long StatusReg; // x6
 unsigned long long v4; // x9
 long long v5; // x3
 __int128 v6; // t2
 long long v7; // x3
 unsigned long long v8; // x8
 long long v9; // x17
 long long v10; // x1
 int v11; // w0
 unsigned long long v12; // x12
 int v13; // w16
 unsigned long long v14; // x5
 long long v15; // x13
 __int128 v16; // t2
 long long v17; // x13
 int v18; // w11
 long long v19; // x10
 unsigned long long v20; // x2
 long long v21; // x3
 long long v22; // x4
 short v23; // w1
 long long v24; // x4
 __n128 result; // q0
 long long v26; // x1
 long long v27; // x30
 unsigned long long v28; // x17
 long long v29; // x1
 unsigned long long v30; // x21
 unsigned long long v31; // x3
 unsigned long long v32; // x19
 unsigned long long v33; // x20
 unsigned long long v34; // x7
 long long v35; // x5
 unsigned long long v36; // x15
 long long v37; // x16
 unsigned long long v38; // x12
 long long v39; // x18
 unsigned long long v40; // x4
 unsigned long long v41; // x8
 bool v42; // cc
 unsigned long long v43; // x12
 unsigned long long v44; // x19
 unsigned long long v45; // x30
 unsigned long long v46; // x1
 unsigned long long v47; // x17
 unsigned long long v48; // x15
 unsigned long long v49; // x9
 unsigned long long v50; // x7
 unsigned long long v51; // x5
 unsigned long long v52; // x3
 long long v53; // x16
 unsigned long long v54; // x4
 unsigned long long v55; // x4
 unsigned long long v56; // x12
 unsigned long long v57; // x1
 bool v58; // cf
 unsigned long long v59; // x1
 long long v60; // x14
 _BOOL8 v61; // x12
 unsigned long long v62; // x8
 unsigned long long v63; // x1
 unsigned long long v64; // x5
 long long v65; // x12
 bool v66; // zf
 unsigned long long v67; // x7
 unsigned long long v68; // x4
 long long v69; // x8
 unsigned long long v70; // x1
 long long v71; // x9
 unsigned long long v72; // x1
 long long v73; // x7
 bool v74; // zf
 long long v75; // x16
 unsigned long long v76; // x4
 __int128 v77; // t2
 long long v78; // x1
 long long v79; // x3
 __int128 v80; // t2
 unsigned long long v81; // x13
 long long v82; // x2
 unsigned long long v83; // x0
 long long v84; // x3
 long long v85; // x1
 unsigned long long v86; // x8
 unsigned long long v87; // x4
 long long v88; // x6
 __int128 v89; // t2
 unsigned long long v90; // x0
 unsigned long long v91; // x13
 long long v92; // x6
 __int128 v93; // t2
 long long v94; // x2
 __n128 v95; // [xsp+30h] [xbp+30h]

 v2 = *(unsigned long long *)&a2;
 StatusReg = _ReadStatusReg(FPCR);
 v4 = *((unsigned long long *)&a1 + 1) & 0xFFFFFFFFFFFFLL;
 v5 = HIWORD(*((unsigned long long *)&a1 + 1)) & 0x7FFFLL;
 if ( !(unsigned int)v5 )
 {
 v8 = *(unsigned long long *)&a1 | v4;
 if ( !(*(unsigned long long *)&a1 | v4) )
 {
 v4 = 0;
 v10 = 4;
 v7 = 0;
 v9 = 1;
 v11 = 0;
 goto LABEL_4;
 }
 if ( v4 )
 {
 v83 = __clz(v4);
 LOBYTE(v84) = v83 - 15;
 }
 else
 {
 v90 = __clz(*(unsigned long long *)&a1);
 v84 = v90 + 49;
 v83 = v90 + 64;
 if ( v84 > 60 )
 {
 v8 = 0;
 v4 = *(unsigned long long *)&a1 << ((unsigned char)v84 - 61);
 goto LABEL_87;
 }
 }
 v4 = (*(unsigned long long *)&a1 >> (61 - (unsigned char)v84)) | (v4 << ((unsigned char)v84 + 3));
 v8 = *(unsigned long long *)&a1 << ((unsigned char)v84 + 3);
LABEL_87:
 v10 = 0;
 v7 = -16367LL - v83;
 v9 = 0;
 v11 = 0;
 goto LABEL_4;
 }
 if ( (unsigned int)v5 == 0x7FFF )
 {
 v8 = *(unsigned long long *)&a1 | v4;
 if ( *(unsigned long long *)&a1 | v4 )
 {
 v8 = *(unsigned long long *)&a1;
 v10 = 12;
 v11 = ((unsigned char)(v4 >> 47) ^ 1) & 1;
 v7 = 0x7FFF;
 v9 = 3;
 }
 else
 {
 v4 = 0;
 v10 = 8;
 v7 = 0x7FFF;
 v9 = 2;
 v11 = 0;
 }
 }
 else
 {
 *((unsigned long long *)&v6 + 1) = *((unsigned long long *)&a1 + 1) & 0xFFFFFFFFFFFFLL;
 *(unsigned long long *)&v6 = *(unsigned long long *)&a1;
 v4 = (v6 >> 61) | 0x8000000000000LL;
 v7 = (HIWORD(a1) & 0x7FFF) - 0x3FFFLL;
 v8 = 8LL * *(unsigned long long *)&a1;
 v9 = 0;
 v10 = 0;
 v11 = 0;
 }
LABEL_4:
 v12 = *((unsigned long long *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
 v13 = *((unsigned long long *)&a2 + 1) >> 63;
 v14 = *((unsigned long long *)&a2 + 1) >> 63;
 v15 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 if ( !(unsigned int)v15 )
 {
 if ( !(*(unsigned long long *)&a2 | v12) )
 {
 v17 = v7;
 v10 |= 1uLL;
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
 v19 = v7 + 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v12 = 0;
 v2 = 0;
 v21 = 1;
 if ( v10 <= 10 )
 goto LABEL_12;
LABEL_7:
 if ( v10 == 11 )
 {
 v18 = *((unsigned long long *)&a2 + 1) >> 63;
 v20 = *((unsigned long long *)&a2 + 1) >> 63;
LABEL_29:
 if ( v21 == 3 )
 {
 v8 = v2;
 v24 = v12 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 v23 = 0x7FFF;
 goto LABEL_17;
 }
 goto LABEL_15;
 }
 goto LABEL_8;
 }
 if ( v12 )
 {
 v81 = __clz(v12);
 LOBYTE(v82) = v81 - 15;
 }
 else
 {
 v91 = __clz(*(unsigned long long *)&a2);
 v82 = v91 + 49;
 v81 = v91 + 64;
 if ( v82 > 60 )
 {
 v2 = 0;
 v12 = *(unsigned long long *)&a2 << ((unsigned char)v82 - 61);
LABEL_81:
 v17 = v7 - v81 - 16367;
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
 v19 = v17 + 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v21 = 0;
 if ( v10 <= 10 )
 goto LABEL_12;
 goto LABEL_7;
 }
 }
 v12 = (*(unsigned long long *)&a2 >> (61 - (unsigned char)v82)) | (v12 << ((unsigned char)v82 + 3));
 v2 = *(unsigned long long *)&a2 << ((unsigned char)v82 + 3);
 goto LABEL_81;
 }
 if ( (unsigned int)v15 == 0x7FFF )
 {
 v22 = *(unsigned long long *)&a2 | v12;
 v17 = v7 + 0x7FFF;
 if ( *(unsigned long long *)&a2 | v12 )
 {
 v10 |= 3uLL;
 v19 = v7 + 0x8000;
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
 if ( (*((unsigned long long *)&a2 + 1) & 0x800000000000LL) == 0 )
 v11 = 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v21 = 3;
 if ( v10 <= 10 )
 {
LABEL_22:
 v26 = 1LL << v10;
 if ( (v26 & 0x530) != 0 )
 {
 LOWORD(v13) = v18;
 v14 = v20;
 }
 else
 {
 if ( (v26 & 0x240) != 0 )
 {
 v11 = 1;
 LOWORD(v18) = 0;
 v24 = 0xFFFFFFFFFFFFLL;
 v8 = -1;
 v23 = 0x7FFF;
 goto LABEL_17;
 }
 if ( (v26 & 0x88) == 0 )
 goto LABEL_33;
 v4 = v12;
 v8 = v2;
 v9 = v21;
 }
LABEL_27:
 LOWORD(v18) = v13;
 if ( v9 != 2 )
 {
 v12 = v4;
 v2 = v8;
 v21 = v9;
 v20 = v14;
 goto LABEL_29;
 }
LABEL_32:
 v23 = 0x7FFF;
 v24 = 0;
 v8 = 0;
 goto LABEL_17;
 }
 v22 = *((unsigned long long *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
 v94 = 3;
 }
 else
 {
 v10 |= 2uLL;
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
 v19 = v7 + 0x8000;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v2 = 0;
 if ( v10 <= 10 )
 {
 v12 = 0;
 v21 = 2;
 goto LABEL_12;
 }
 v94 = 2;
 }
 if ( v10 == 15 )
 {
 if ( (v4 & 0x800000000000LL) == 0 || (v22 & 0x800000000000LL) != 0 )
 {
 v18 = *((unsigned long long *)&a1 + 1) >> 63;
 v24 = v4 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 v23 = 0x7FFF;
 }
 else
 {
 v18 = *((unsigned long long *)&a2 + 1) >> 63;
 v24 = v22 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 v8 = v2;
 v23 = 0x7FFF;
 }
 goto LABEL_17;
 }
 if ( v10 != 11 )
 {
LABEL_8:
 v13 = *((unsigned long long *)&a1 + 1) >> 63;
 v14 = *((unsigned long long *)&a1 + 1) >> 63;
 goto LABEL_27;
 }
 v4 = v22;
 v8 = v2;
 v9 = v94;
 goto LABEL_27;
 }
 *((unsigned long long *)&v16 + 1) = *((unsigned long long *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
 *(unsigned long long *)&v16 = *(unsigned long long *)&a2;
 v17 = (HIWORD(a2) & 0x7FFF) - 0x3FFFLL + v7;
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
 v12 = (v16 >> 61) | 0x8000000000000LL;
 v2 = 8LL * *(unsigned long long *)&a2;
 v19 = v17 + 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v21 = 0;
 if ( v10 > 10 )
 goto LABEL_7;
LABEL_12:
 if ( v10 > 2 )
 goto LABEL_22;
 if ( (unsigned long long)(v10 - 1) <= 1 )
 {
 if ( v21 != 2 )
 {
LABEL_15:
 if ( v21 == 1 )
 {
 v23 = 0;
 v24 = 0;
 v8 = 0;
 goto LABEL_17;
 }
 goto LABEL_68;
 }
 goto LABEL_32;
 }
LABEL_33:
 v27 = (unsigned int)v2;
 v28 = HIDWORD(v8);
 v29 = (unsigned int)v12;
 v8 = (unsigned int)v8;
 v30 = HIDWORD(v2);
 v31 = HIDWORD(v12);
 v32 = v28 * (unsigned int)v2;
 v33 = HIDWORD(v4);
 v34 = v28 * (unsigned int)v12;
 v35 = (unsigned int)v4;
 v36 = (unsigned int)v8 * (unsigned long long)(unsigned int)v12;
 v37 = (unsigned int)(v27 * v8);
 v38 = v34 + HIDWORD(v12) * (unsigned int)v8;
 v39 = v28 * v30;
 v40 = v32 + v30 * v8 + ((v27 * v8) >> 32);
 v41 = v27 * (unsigned int)v4;
 v42 = v32 > v40;
 v43 = v38 + HIDWORD(v36);
 v44 = HIDWORD(v4) * v27;
 v45 = HIDWORD(v4) * v29;
 if ( v42 )
 v39 = v28 * v30 + 0x100000000LL;
 v46 = (unsigned int)v4 * v29;
 v42 = v34 > v43;
 v47 = v28 * v31;
 v48 = (unsigned int)v36 + (v43 << 32);
 v49 = v30 * v33;
 v50 = v44 + v30 * v35 + HIDWORD(v41);
 v51 = v45 + v31 * v35 + HIDWORD(v46);
 v52 = v31 * v33;
 v53 = v37 + (v40 << 32);
 v54 = v48 + HIDWORD(v40);
 if ( v42 )
 v47 += 0x100000000LL;
 v55 = v54 + v39;
 if ( v44 > v50 )
 v49 += 0x100000000LL;
 v56 = v47 + HIDWORD(v43);
 v57 = (unsigned int)v46 + (v51 << 32);
 if ( v45 > v51 )
 v52 += 0x100000000LL;
 v58 = __CFADD__(v57, v56);
 v59 = v57 + v56;
 v60 = v58;
 v61 = v55 < v48;
 v62 = (unsigned int)v41 + (v50 << 32);
 v58 = __CFADD__(v59, v61);
 v63 = v59 + v61;
 v64 = HIDWORD(v51);
 v65 = v58;
 if ( v60 )
 v66 = 0;
 else
 v66 = v65 == 0;
 v67 = v49 + HIDWORD(v50);
 if ( !v66 )
 ++v64;
 v58 = __CFADD__(v55, v62);
 v68 = v55 + v62;
 v69 = v58;
 v58 = __CFADD__(v63, v67);
 v70 = v63 + v67;
 v71 = v58;
 v58 = __CFADD__(v70, v69);
 v72 = v70 + v69;
 v73 = v58;
 if ( v71 )
 v74 = 0;
 else
 v74 = v73 == 0;
 v75 = v53 | (v68 << 13);
 if ( !v74 )
 ++v52;
 v76 = (v75 != 0) | (v68 >> 51);
 v2 = v76 | (v72 << 13);
 *((unsigned long long *)&v77 + 1) = v52 + v64;
 *(unsigned long long *)&v77 = v72;
 v12 = v77 >> 51;
 if ( ((v52 + v64) & 0x8000000000LL) != 0 )
 {
 v2 = v76 & 1 | ((v76 | (v72 << 13)) >> 1) | (v12 << 63);
 v12 >>= 1;
 }
 else
 {
 v19 = v17;
 }
LABEL_68:
 v78 = v19 + 0x3FFF;
 if ( v19 + 0x3FFF > 0 )
 {
 if ( (v2 & 7) != 0 )
 {
 v79 = StatusReg & 0xC00000;
 v11 |= 0x10u;
 if ( (StatusReg & 0xC00000) == 0x400000 )
 {
 if ( !v20 )
 goto LABEL_137;
 }
 else
 {
 if ( v79 != 0x800000 )
 {
 if ( !v79 && (v2 & 0xF) != 4 )
 {
 v58 = __CFADD__(v2, 4);
 v2 += 4LL;
 if ( v58 )
 ++v12;
 }
 goto LABEL_73;
 }
 if ( v20 )
 {
LABEL_137:
 v58 = __CFADD__(v2, 8);
 v2 += 8LL;
 if ( v58 )
 ++v12;
 }
 }
 }
LABEL_73:
 if ( (v12 & 0x10000000000000LL) != 0 )
 {
 v12 &= ~0x10000000000000uLL;
 v78 = v19 + 0x4000;
 }
 if ( v78 <= 32766 )
 {
 v24 = (v12 >> 3) & 0xFFFFFFFFFFFFLL;
 *((unsigned long long *)&v80 + 1) = v12;
 *(unsigned long long *)&v80 = v2;
 v8 = v80 >> 3;
 v23 = v78 & 0x7FFF;
 goto LABEL_17;
 }
 v8 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0x400000 )
 {
 v24 = 0xFFFFFFFFFFFFLL;
 if ( v20 )
 v23 = 32766;
 else
 v23 = 0x7FFF;
 if ( v20 )
 {
 v8 = -1;
 }
 else
 {
 v24 = 0;
 v8 = 0;
 }
 }
 else if ( v8 == 0x800000 )
 {
 v24 = 0xFFFFFFFFFFFFLL;
 if ( v20 )
 v23 = 0x7FFF;
 else
 v23 = 32766;
 if ( v20 )
 {
 v24 = 0;
 v8 = 0;
 }
 else
 {
 v8 = -1;
 }
 }
 else
 {
 v23 = 0x7FFF;
 v24 = 0;
 if ( v8 )
 {
 v23 = 32766;
 v24 = 0xFFFFFFFFFFFFLL;
 v8 = -1;
 }
 }
LABEL_110:
 result.n128_u64[0] = v8;
 result.n128_u64[1] = v24 & 0xFFFFFFFFFFFFLL
 | ((unsigned long long)(v23 & 0x7FFF) << 48) & 0x7FFFFFFFFFFFFFFFLL
 | ((unsigned long long)(unsigned char)v18 << 63);
 goto LABEL_111;
 }
 v85 = -16382 - v19;
 if ( -16382 - v19 > 116 )
 {
 v8 = v2 | v12;
 if ( v2 | v12 )
 {
 v92 = StatusReg & 0xC00000;
 v8 = 1 - v20;
 if ( v92 != 0x400000 )
 {
 if ( v92 == 0x800000 )
 v8 = v20;
 else
 v8 = 0;
 }
 }
 v23 = 0;
 v24 = 0;
 goto LABEL_110;
 }
 if ( v85 <= 63 )
 {
 v87 = v12 >> v85;
 v86 = (v12 << ((unsigned char)v19 + 62))
 | (v2 >> (2 - (unsigned char)v19))
 | (v2 << ((unsigned char)v19 + 62) != 0);
 if ( ((v12 << ((unsigned char)v19 + 62)) | (v2 >> (2 - (unsigned char)v19))) & 7
 | (v2 << ((unsigned char)v19 + 62) != 0) )
 {
LABEL_101:
 v88 = StatusReg & 0xC00000;
 if ( v88 == 0x400000 )
 {
 if ( v20 )
 goto LABEL_143;
 }
 else
 {
 if ( v88 != 0x800000 )
 {
 if ( v88 )
 {
 if ( (v87 & 0x8000000000000LL) == 0 )
 {
LABEL_105:
 *((unsigned long long *)&v89 + 1) = v87;
 *(unsigned long long *)&v89 = v86;
 v8 = v89 >> 3;
 v23 = 0;
 v24 = (v87 >> 3) & 0xFFFFFFFFFFFFLL;
 goto LABEL_110;
 }
LABEL_144:
 v23 = 1;
 v24 = 0;
 v8 = 0;
 goto LABEL_110;
 }
 if ( (v86 & 0xF) != 4 )
 {
 v58 = __CFADD__(v86, 4);
 v86 += 4LL;
 if ( v58 )
 ++v87;
 if ( (v87 & 0x8000000000000LL) == 0 )
 goto LABEL_105;
 goto LABEL_144;
 }
LABEL_143:
 if ( (v87 & 0x8000000000000LL) == 0 )
 goto LABEL_105;
 goto LABEL_144;
 }
 if ( !v20 )
 {
 if ( (v87 & 0x8000000000000LL) == 0 )
 goto LABEL_105;
 goto LABEL_144;
 }
 }
 v58 = __CFADD__(v86, 8);
 v86 += 8LL;
 if ( v58 )
 ++v87;
 goto LABEL_143;
 }
 if ( (v87 & 0x8000000000000LL) != 0 )
 goto LABEL_144;
 }
 else
 {
 if ( v85 != 64 )
 v2 |= v12 << ((unsigned char)v19 + 126);
 v86 = (v2 != 0) | (v12 >> (-62 - (unsigned char)v19));
 v87 = (v2 != 0) | (v12 >> (-62 - (unsigned char)v19)) & 7;
 if ( v87 )
 {
 v87 = 0;
 goto LABEL_101;
 }
 }
 v23 = 0;
 *((unsigned long long *)&v93 + 1) = v87;
 *(unsigned long long *)&v93 = v86;
 v8 = v93 >> 3;
 v24 = (v87 >> 3) & 0xFFFFFFFFFFFFLL;
 if ( (StatusReg & 0x800) != 0 )
 goto LABEL_110;
LABEL_17:
 result.n128_u64[0] = v8;
 result.n128_u64[1] = v24 & 0xFFFFFFFFFFFFLL | ((unsigned long long)(unsigned short)(v23 | ((unsigned short)v18 << 15)) << 48);
 if ( v11 )
 {
LABEL_111:
 v95 = result;
 _sfp_handle_exceptions(v11);
 return v95;
 }
 return result;
}


/* Function: __sfp_handle_exceptions @ 0x3570 */
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


/* Function: .term_proc @ 0x35E0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x150B8 */

/* FAILED to decompile: __libc_start_main @ 0x150C0 */

/* FAILED to decompile: __cxa_finalize @ 0x150C8 */

/* FAILED to decompile: memset @ 0x150D0 */

/* FAILED to decompile: abort @ 0x150D8 */

/* FAILED to decompile: printf @ 0x150E0 */

/* FAILED to decompile: __gmon_start__ @ 0x150F0 */

/* Total functions decompiled: 69, failed: 7 */

/* Define global data constants */
const long double xmmword_3620 = 0.0L;
const long double xmmword_3630 = 0.0L;
const char asc_3758[] = "=== Data Types L1 ===\n";
const char asc_38C4[] = "=== Array Types ===\n";
const char asc_39E1[] = "=== Pointer Types ===\n";
const char asc_3B7B[] = "=== Composite Types ===\n";
const __int128 xmmword_3670 = 0;
const __int128 xmmword_36D8 = 0;
const __int128 xmmword_36F0 = 0;
const __int128 xmmword_3640 = 0;
const unsigned char unk_3704[48] = {0};
const __int128 xmmword_3690 = 0;
const __int128 xmmword_36A4 = 0;
const __int128 xmmword_36B8 = 0;
const unsigned char loc_191C = 0;
const unsigned char xmmword_3740[16] = {0};
const __int128 off_14DB8 = 0;
const __int128 xmmword_3650 = 0;
const unsigned char unk_14DC8[16] = {0};
