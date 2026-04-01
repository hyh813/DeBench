/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/2/2_clang_O2_g
 * Processor: arm
 */

#include <arm_neon.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Type definitions for missing structs */
typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

typedef struct {
    int width;
    int height;
} Size;

typedef struct {
    int x;
    int y;
} Position;

typedef struct {
    Size size;
    Position position;
} Rect;

typedef struct {
    struct {
        float r;
        float g;
        float b;
    } fill;
} Style;

typedef struct {
    Position position;
    int z;
} Bounds;

typedef struct {
    Style style;
    Bounds bounds;
} Widget;

typedef struct {
    int (*process)(int);
    int data;
} Device;

typedef struct {
    unsigned short flags;
} Flags;

typedef union {
    float f;
    int i;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_STOPPED = 5,
    STATE_RUNNING = 10,
    STATE_PAUSED = 15
} State;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct {
    int numVertices;
    Edge **adjList;
} Graph;

/* 128-bit floating point type */
typedef union {
    unsigned long long n128_u64[2];
    long double n128_ld;
} __n128;

/* Additional type definitions */
typedef unsigned long long _BOOL8;

/* FPCR register definition */
#define FPCR 0

/* FPSR register definition */
#define FPSR 0

/* Macro for reading status register */
#define _ReadStatusReg(reg) 0

/* Macros for 128-bit operations and word extraction */
#define LODWORD(x) ((unsigned int)(x))
#define HIWORD(x) ((unsigned short)(((unsigned long)(x) >> 16) & 0xFFFF))
#define LOWORD(x) ((unsigned short)(x))
#define LOBYTE(x) ((unsigned char)(x))
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
#define __PAIR128__(hi, lo) (((__int128)(hi) << 64) | (unsigned long long)(lo))
#define __CFADD__(a, b) (((a) + (b)) < (a))

/* Built-in function for counting leading zeros */
static inline int __clz(unsigned long long x)
{
    if (x == 0) return 64;
    int count = 0;
    while ((x & 0x8000000000000000ULL) == 0) {
        x <<= 1;
        count++;
    }
    return count;
}

/* External data references - now defined */
const char *asc_31EF = "Data Types L1";
const char *asc_3210 = "Array Types";
const char *asc_322B = "Pointer Types";
const char *asc_3246 = "Composite Types";
int dword_2C50[16] = {50, 0};
void *off_13DC8 = NULL;

/* Global xmmword variables - now defined (static to avoid linker conflicts) */
static long double xmmword_2BB0 = 1.0L;
static unsigned long long xmmword_2BC0 = 0x3FF0000000000000ULL;
static unsigned long long xmmword_2BD0 = 0x4000000000000000ULL;
static unsigned long long xmmword_2BE0 = 0x4008000000000000ULL;
static unsigned long long xmmword_2BF0 = 0x4010000000000000ULL;
static unsigned long long xmmword_2C00 = 0x4014000000000000ULL;
static unsigned long long xmmword_2C10 = 0x4018000000000000ULL;
static unsigned long long xmmword_2C20 = 0x401C000000000000ULL;
static unsigned long long xmmword_2C30 = 0x4020000000000000ULL;
static unsigned long long xmmword_2C40 = 0x4024000000000000ULL;
static unsigned long long xmmword_3268 = 0x4028000000000000ULL;

/* Function declarations for missing functions */
long long call_weak_fn(void);
void JUMPOUT(int);
unsigned long long _sfp_handle_exceptions(unsigned long long result);

/* Stub implementations for CRT functions */
long long call_weak_fn(void)
{
    return 0;
}

void JUMPOUT(int x)
{
    (void)x;
}

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



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



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
 return d * d + *(long double *)&xmmword_2BB0;
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
 puts(asc_31EF);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", *(long double *)&xmmword_2BC0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x9A4 */
int array_1d_stack(int *arr, int n)
{
 long long v2; // x10
 int v3; // w8
 int *v5; // x8
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x11
 long long v12; // x9
 int v13; // t1

 if ( n < 1 )
 return 0;
 if ( (unsigned int)n >= 8 )
 {
 v2 = n & 0xFFFFFFF8;
 v5 = arr + 4;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = *((int32x4_t *)v5 - 1);
 v10 = *(int32x4_t *)v5;
 v5 += 8;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == n )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v11 = &arr[v2];
 v12 = (unsigned int)n - v2;
 do
 {
 v13 = *v11++;
 --v12;
 v3 += v13;
 }
 while ( v12 );
 return v3;
}


/* Function: array_string @ 0xA2C */
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


/* Function: array_2d_stack @ 0xA44 */
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


/* Function: array_3d @ 0xA94 */
int array_3d(int (*arr)[5][5])
{
 int sum = 0;
 int i, j;
 for (i = 0; i < 5; i++)
 {
 for (j = 0; j < 5; j++)
 {
 sum += (*arr)[i][j];
 }
 }
 return sum;
}


/* Function: array_vla @ 0xBCC */
int array_vla(int n, int *arr)
{
 long long v2; // x8
 long long v3; // x9
 int result; // w0
 int *v5; // x10
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x10
 long long v12; // x8
 int v13; // t1

 if ( n < 1 )
 return 0;
 v2 = (unsigned int)n;
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 result = 0;
LABEL_8:
 v11 = &arr[v3];
 v12 = v2 - v3;
 do
 {
 v13 = *v11++;
 --v12;
 result += v13;
 }
 while ( v12 );
 return result;
 }
 v3 = n & 0x7FFFFFF8;
 v5 = arr + 4;
 v6 = vdupq_n_s32(0);
 v7 = n & 0xFFFFFFF8;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = *((int32x4_t *)v5 - 1);
 v10 = *(int32x4_t *)v5;
 v5 += 8;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 result = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v3 != v2 )
 goto LABEL_8;
 return result;
}


/* Function: array_pointer @ 0xC50 */
int array_pointer(int (*arr)[10], int n)
{
 long long v2; // x10
 int v3; // w8
 int v5; // w8
 int v6; // w11
 long long v7; // x12
 int *v8; // x13
 int v9; // w14
 int v10; // w15
 long long v11; // x9
 int *v12; // x11
 int v13; // t1

 if ( n < 1 )
 return 0;
 if ( n == 1 )
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = n & 0xFFFFFFFE;
 v5 = 0;
 v6 = 0;
 v7 = v2;
 v8 = (int *)arr;
 do
 {
 v9 = *v8;
 v7 -= 2;
 v10 = v8[10];
 v8 += 20;
 v5 += v9;
 v6 += v10;
 }
 while ( v7 );
 v3 = v6 + v5;
 if ( v2 == n )
 return v3;
 }
 v11 = (unsigned int)n - v2;
 v12 = &(*arr)[10 * v2];
 do
 {
 v13 = *v12;
 v12 += 10;
 --v11;
 v3 += v13;
 }
 while ( v11 );
 return v3;
}


/* Function: pointer_array @ 0xCD8 */
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


/* Function: array_complex_index @ 0xD20 */
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


/* Function: array_oob @ 0xD54 */
int array_oob(int *arr, int n)
{
 long long v2; // x9
 long long v3; // x10
 int v4; // w8
 int *v6; // x8
 int32x4_t v7; // q0
 long long v8; // x11
 int32x4_t v9; // q1
 int32x4_t v10; // q2
 int32x4_t v11; // q3
 int *v12; // x11
 long long v13; // x9
 int v14; // t1

 if ( n < 0 )
 return 0;
 v2 = (unsigned int)(n + 1);
 if ( (unsigned int)n >= 7 )
 {
 v3 = (unsigned int)v2 & 0xFFFFFFF8;
 v6 = arr + 4;
 v7 = vdupq_n_s32(0);
 v8 = v3;
 v9 = vdupq_n_s32(0);
 do
 {
 v10 = *((int32x4_t *)v6 - 1);
 v11 = *(int32x4_t *)v6;
 v6 += 8;
 v8 -= 8;
 v7 = vaddq_s32(v10, v7);
 v9 = vaddq_s32(v11, v9);
 }
 while ( v8 );
 v4 = vaddvq_s32(vaddq_s32(v9, v7));
 if ( v3 == v2 )
 return v4;
 }
 else
 {
 v3 = 0;
 v4 = 0;
 }
 v12 = &arr[v3];
 v13 = v2 - v3;
 do
 {
 v14 = *v12++;
 --v13;
 v4 += v14;
 }
 while ( v13 );
 return v4;
}


/* Function: test_array_types @ 0xDD8 */
// local variable allocation has failed, the output may be wrong!
void test_array_types()
{
 __int128 v0; // q0
 int v1; // w0
 int v2[5][5]; // [xsp+0h] [xbp-390h] BYREF
 __int128 v3; // [xsp+64h] [xbp-32Ch]
 __int128 v4; // [xsp+74h] [xbp-31Ch]
 __int128 v5; // [xsp+84h] [xbp-30Ch]
 __int128 v6; // [xsp+94h] [xbp-2FCh]
 __int128 v7; // [xsp+A4h] [xbp-2ECh]
 __int128 v8; // [xsp+B4h] [xbp-2DCh]
 int v9; // [xsp+C4h] [xbp-2CCh]
 __int128 v10; // [xsp+C8h] [xbp-2C8h]
 __int128 v11; // [xsp+D8h] [xbp-2B8h]
 __int128 v12; // [xsp+E8h] [xbp-2A8h]
 __int128 v13; // [xsp+F8h] [xbp-298h]
 __int128 v14; // [xsp+108h] [xbp-288h]
 __int128 v15; // [xsp+118h] [xbp-278h]
 int v16; // [xsp+128h] [xbp-268h]
 __int128 v17; // [xsp+12Ch] [xbp-264h]
 __int128 v18; // [xsp+13Ch] [xbp-254h]
 __int128 v19; // [xsp+14Ch] [xbp-244h]
 __int128 v20; // [xsp+15Ch] [xbp-234h]
 __int128 v21; // [xsp+16Ch] [xbp-224h]
 __int128 v22; // [xsp+17Ch] [xbp-214h]
 int v23; // [xsp+18Ch] [xbp-204h]
 __int128 v24; // [xsp+190h] [xbp-200h]
 __int128 v25; // [xsp+1A0h] [xbp-1F0h]
 __int128 v26; // [xsp+1B0h] [xbp-1E0h]
 __int128 v27; // [xsp+1C0h] [xbp-1D0h]
 __int128 v28; // [xsp+1D0h] [xbp-1C0h]
 __int128 v29; // [xsp+1E0h] [xbp-1B0h]
 int v30; // [xsp+1F0h] [xbp-1A0h]
 long long v31; // [xsp+200h] [xbp-190h]
 __int128 v32; // [xsp+208h] [xbp-188h]
 unsigned char v33[376]; // [xsp+218h] [xbp-178h] OVERLAPPED BYREF

 puts(asc_3210);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v31 = 0;
 *(unsigned long long *)&v33[16] = 0x100000000LL;
 *(unsigned long long *)&v33[64] = xmmword_2BD0;
 v32 = 0u;
 *(unsigned long long *)&v33[144] = xmmword_2BF0;
 *(unsigned long long *)&v33[184] = xmmword_2C00;
 *(unsigned long long *)v33 = 0u;
 *(unsigned long long *)&v33[240] = xmmword_2C10;
 memset(&v33[24], 0, 40);
 *(unsigned long long *)&v33[104] = xmmword_2BE0;
 memset(&v33[120], 0, 24);
 *(unsigned long long *)&v33[320] = xmmword_2C30;
 memset(&v33[80], 0, 24);
 *(unsigned long long *)&v33[280] = xmmword_2C20;
 memset(&v33[160], 0, 24);
 *(unsigned long long *)&v33[360] = xmmword_2C40;
 memset(&v33[200], 0, 40);
 memset(&v33[256], 0, 24);
 memset(&v33[296], 0, 24);
 memset(&v33[336], 0, 24);
 printf("ARR-L1-03 (array_2d_stack): %d\n", 45);
 *(unsigned long long *)&v0 = 0x100000001LL;
 *((unsigned long long *)&v0 + 1) = 0x100000001LL;
 v2[4][4] = 1;
 *(unsigned long long *)&v2[0][0] = v0;
 *(unsigned long long *)&v2[0][4] = v0;
 *(unsigned long long *)&v2[1][3] = v0;
 *(unsigned long long *)&v2[2][2] = v0;
 *(unsigned long long *)&v2[3][1] = v0;
 *(unsigned long long *)&v2[4][0] = v0;
 v3 = v0;
 v4 = v0;
 v5 = v0;
 v6 = v0;
 v7 = v0;
 v8 = v0;
 v10 = v0;
 v11 = v0;
 v12 = v0;
 v13 = v0;
 v14 = v0;
 v15 = v0;
 v16 = 1;
 v17 = v0;
 v18 = v0;
 v19 = v0;
 v20 = v0;
 v21 = v0;
 v22 = v0;
 v9 = 1;
 v23 = 1;
 v24 = v0;
 v25 = v0;
 v26 = v0;
 v27 = v0;
 v28 = v0;
 v29 = v0;
 v30 = 1;
 v1 = array_3d((int (*)[5][5])v2);
 printf("ARR-L1-04 (array_3d): %d\n", v1);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x101C */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x1028 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1038 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x104C */
int ptr_increment(int *p, int n)
{
 long long v2; // x9
 long long v4; // x10
 int result; // w0
 int *v6; // x9
 long long v7; // x11
 int32x4_t v8; // q0
 long long v9; // x12
 int32x4_t v10; // q1
 int *v11; // x8
 int32x4_t v12; // q2
 int32x4_t v13; // q3
 int v14; // w8
 int v15; // t1

 v2 = (unsigned int)(n - 1);
 if ( n < 1 )
 return 0;
 if ( (unsigned int)v2 < 7 )
 {
 v4 = 0;
 result = 0;
 v6 = p;
LABEL_8:
 v14 = n - v4;
 do
 {
 v15 = *v6++;
 --v14;
 result += v15;
 }
 while ( v14 );
 return result;
 }
 v7 = v2 + 1;
 v4 = (v2 + 1) & 0x1FFFFFFF8LL;
 v8 = vdupq_n_s32(0);
 v9 = v4;
 v10 = vdupq_n_s32(0);
 v6 = &p[v4];
 v11 = p + 4;
 do
 {
 v12 = *((int32x4_t *)v11 - 1);
 v13 = *(int32x4_t *)v11;
 v11 += 8;
 v9 -= 8;
 v8 = vaddq_s32(v12, v8);
 v10 = vaddq_s32(v13, v10);
 }
 while ( v9 );
 result = vaddvq_s32(vaddq_s32(v10, v8));
 if ( v7 != v4 )
 goto LABEL_8;
 return result;
}


/* Function: ptr_offset @ 0x10D8 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x10E0 */
int ptr_diff(int *p1, int *p2)
{
 return (unsigned long long)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0x10EC */
int ptr_void(void *p, int type)
{
 if ( type == 1 )
 return *(unsigned char *)p;
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: ptr_const @ 0x1110 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x111C */
int ptr_const_ptr(int *const p)
{
 int result; // w0

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1130 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x113C */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 __int128 v3; // [xsp+0h] [xbp-10h] BYREF

 v3 = *(unsigned long long *)&off_13DC8;
 return f(p, (char **)&v3);
}


/* Function: ptr_cast @ 0x1178 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1180 */
// local variable allocation has failed, the output may be wrong!
void * opaque_handle_create(int size)
{
 void *result; // x0

 result = (void *)(size & 0xFFFFFFFFLL);
 return result;
}


/* Function: opaque_handle_op @ 0x1188 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x1190 */
void test_pointer_types()
{
 puts(asc_322B);
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


/* Function: struct_simple @ 0x1294 */
int struct_simple(Point3D *p)
{
 return p->y + p->x + p->z;
}


/* Function: struct_array @ 0x12A8 */
int struct_array(Point3D *pts, int n)
{
 long long v2; // x10
 int v3; // w8
 Point3D *v5; // x11
 int32x4_t v6; // q1
 long long v7; // x8
 int32x4_t v8; // q0
 const float *p_x; // x12
 long long v10; // x9
 int *p_y; // x11
 int v12; // w10
 int v13; // w12
 int v14; // w13
 float32x4x3_t v15; // 0:q2.16,16:q3.16,32:q4.16
 float32x4x3_t v16; // 0:q5.16,16:q6.16,32:q7.16

 if ( n < 1 )
 return 0;
 if ( (unsigned int)n >= 8 )
 {
 v2 = n & 0xFFFFFFF8;
 v5 = pts;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 p_x = (const float *)&v5->x;
 v5 += 8;
 v7 -= 8;
 v15 = vld3q_f32(p_x);
 p_x += 12;
 v16 = vld3q_f32(p_x);
 v6 = vaddq_s32(vaddq_s32(vaddq_s32(vreinterpretq_s32_f32(v15.val[0]), v6), vreinterpretq_s32_f32(v15.val[1])), vreinterpretq_s32_f32(v15.val[2]));
 v8 = vaddq_s32(vaddq_s32(vaddq_s32(vreinterpretq_s32_f32(v16.val[0]), v8), vreinterpretq_s32_f32(v16.val[1])), vreinterpretq_s32_f32(v16.val[2]));
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == n )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v10 = (unsigned int)n - v2;
 p_y = &pts[v2].y;
 do
 {
 v12 = *(p_y - 1);
 v13 = *p_y;
 v14 = p_y[1];
 p_y += 3;
 --v10;
 v3 += v12 + v13 + v14;
 }
 while ( v10 );
 return v3;
}


/* Function: struct_nested @ 0x1360 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x1370 */
int struct_deep(Widget *w)
{
 return w->style.fill.r + w->bounds.z;
}


/* Function: struct_with_ptr @ 0x1380 */
int struct_with_ptr(Node *node)
{
 Node *next; // x9
 int next_data; // w9

 next = node->next;
 next_data = 0;
 if ( next )
 next_data = next->data;
 return (unsigned int)next_data + node->data;
}


/* Function: struct_bitfields @ 0x1398 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6) + ((*(unsigned short *)f >> 1) & 3) + ((*(unsigned short *)f >> 3) & 7);
}


/* Function: union_type @ 0x13B8 */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return (unsigned char)u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0x13E0 */
int union_array(UnionData *arr, int n)
{
 long long v2; // x10
 int v3; // w8
 UnionData *v5; // x8
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 UnionData *v11; // x11
 long long v12; // x9
 int i; // t1

 if ( n < 1 )
 return 0;
 if ( (unsigned int)n >= 8 )
 {
 v2 = n & 0xFFFFFFF8;
 v5 = arr + 4;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = *(int32x4_t *)&v5[-4].i;
 v10 = *(int32x4_t *)&v5->i;
 v5 += 8;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == n )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v11 = &arr[v2];
 v12 = (unsigned int)n - v2;
 do
 {
 i = v11->i;
 ++v11;
 --v12;
 v3 += i;
 }
 while ( v12 );
 return v3;
}


/* Function: enum_type @ 0x1468 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1474 */
int enum_switch(State s)
{
 if ( (unsigned int)s > STATE_STOPPED )
 return -99;
 else
 return dword_2C50[s];
}


/* Function: struct_func_ptr @ 0x1494 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x14A4 */
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


/* Function: doubly_linked_list @ 0x14C4 */
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


/* Function: binary_tree_sum @ 0x14E4 */
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


/* Function: binary_tree @ 0x1538 */
// attributes: thunk
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x153C */
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


/* Function: test_composite_types @ 0x1588 */
void test_composite_types()
{
 Node *v0; // x8
 int v1; // w1
 int data; // w9
 int *v3; // x8
 int v4; // w1
 int v5; // w9
 int v6; // w0
 TreeNode v7; // [xsp+0h] [xbp-80h] BYREF
 int v8; // [xsp+20h] [xbp-60h] BYREF
 int *v9; // [xsp+28h] [xbp-58h]
 long long v10; // [xsp+30h] [xbp-50h]
 int v11; // [xsp+38h] [xbp-48h] BYREF
 long long v12; // [xsp+40h] [xbp-40h]
 int *v13; // [xsp+48h] [xbp-38h]
 Node list[3]; // [xsp+50h] [xbp-30h] BYREF

 puts(asc_3246);
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
 v0 = list;
 v1 = 0;
 list[0].data = 10;
 list[2].data = 30;
 list[1].data = 20;
 list[0].next = &list[1];
 list[1].next = &list[2];
 list[2].next = 0;
 do
 {
 data = v0->data;
 v0 = v0->next;
 v1 += data;
 }
 while ( v0 );
 printf("CMP-L2-12 (linked_list): %d\n", v1);
 v3 = &v8;
 v4 = 0;
 v8 = 10;
 v11 = 20;
 v12 = 0;
 v13 = &v8;
 v9 = &v11;
 v10 = 0;
 do
 {
 v5 = *v3;
 v3 = (int *)*((unsigned long long *)v3 + 1);
 v4 += v5;
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
 *(unsigned long long *)&v7.data = xmmword_3268;
 v7.right = 0;
 v6 = binary_tree_sum(&v7);
 printf("CMP-L2-14 (binary_tree): %d\n", v6);
 printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x1738 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: __addtf3 @ 0x1760 */
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
 v10 = 32766;
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
 v8 = 0;
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
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v10 = 0;
 v8 = (StatusReg & 0xC00000) == 0x800000;
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
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 }
 else if ( __PAIR128__(v9, v13) != 0 )
 {
 v40 = __PAIR128__(v4, v11) - __PAIR128__(v9, v13);
 if ( (((__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64) & 0x8000000000000LL) != 0 )
 {
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v8 = (StatusReg & 0xC00000) == 0x800000;
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
 v8 = 0;
 v14 = 1;
 goto LABEL_103;
 }
LABEL_213:
 v41 = v9 >> 3;
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v10 = 0;
 v14 = 0;
LABEL_49:
 v30 = v24 & 0xFFFFFFFFFFFFLL;
 v33 = v10 & 0x7FFF;
 goto LABEL_29;
 }
 if ( v9 | v13 )
 {
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_46;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 {
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_120;
 }
 v8 = *((unsigned long long *)&a2 + 1) >> 63;
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
 _sfp_handle_exceptions((unsigned long long)v76.n128_u64[0]);
 return v76;
 }
 return result;
}


/* Function: __multf3 @ 0x2300 */
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
 v84 = v83 - 15;
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
 v18 = (a1 < 0.0) ^ (a2 < 0.0);
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
 v82 = v81 - 15;
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
 v18 = (a1 < 0.0) ^ (a2 < 0.0);
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
 v18 = (a1 < 0.0) ^ (a2 < 0.0);
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
 v13 = v18;
 v14 = v20;
 }
 else
 {
 if ( (v26 & 0x240) != 0 )
 {
 v11 = 1;
 v18 = 0;
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
 v18 = v13;
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
 v18 = (a1 < 0.0) ^ (a2 < 0.0);
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
 v18 = (a1 < 0.0) ^ (a2 < 0.0);
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
 _sfp_handle_exceptions((unsigned long long)v95.n128_u64[0]);
 return v95;
 }
 return result;
}


/* Function: __sfp_handle_exceptions @ 0x2B00 */
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


/* Function: .term_proc @ 0x2B70 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x140B0 */

/* FAILED to decompile: __cxa_finalize @ 0x140B8 */

/* FAILED to decompile: abort @ 0x140C0 */

/* FAILED to decompile: puts @ 0x140C8 */

/* FAILED to decompile: printf @ 0x140D0 */

/* FAILED to decompile: __gmon_start__ @ 0x140E0 */

/* Total functions decompiled: 67, failed: 6 */
