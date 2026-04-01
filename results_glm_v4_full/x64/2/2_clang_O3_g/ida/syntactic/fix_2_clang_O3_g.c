/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_clang_O3_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <inttypes.h>
#include <xmmintrin.h>   /* SSE */
#include <emmintrin.h>   /* SSE2 */
#include <pmmintrin.h>   /* SSE3 */
#include <tmmintrin.h>   /* SSSE3 */
#include <smmintrin.h>   /* SSE4.1 */
#include <immintrin.h>   /* AVX */

#define JUMPOUT(x) __builtin_unreachable()

/* IDA decompiler compatibility macros */
#define LODWORD(x) (*(unsigned int *)&(x))

/* Type alias for 128-bit integer compatibility - always use struct for member access */
typedef struct {
    unsigned long long lo;
    unsigned long long hi;
} Int128;
typedef struct __attribute__((packed)) {
    unsigned long long lo;
    unsigned long long hi;
} UInt128;

/* Ensure __int128 is available for direct use when supported */
#if defined(__SIZEOF_INT128__) || defined(__int128)
#define HAS_NATIVE_INT128 1
#else
#undef HAS_NATIVE_INT128
#endif

/* Type definitions */
typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    Point3D position;
    struct {
        int width;
        int height;
    } size;
} Rect;

typedef struct {
    int r;
    int g;
    int b;
} Color;

typedef struct {
    Point3D position;
    Color fill;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int reserved : 4;
    unsigned int flag3 : 2;
} Flags;

typedef union __attribute__((packed)) {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

typedef struct Device {
    int data;
    int (*process)(int);
} Device;

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

typedef struct {
    int numVertices;
    Edge **adjList;
} Graph;



/* Global data definitions */

const char *s = "=== Testing Data Types L1 ===";
const char *asc_3690 = "=== Testing Array Types ===";
const char *asc_36AB = "=== Testing Pointer Types ===";
const char *asc_36C6 = "=== Testing Composite Types ===";



const unsigned long long xmmword_30C0[2] = {0, 0};
const unsigned long long xmmword_36E8[2] = {0, 0};
const unsigned long long off_5DE0 = 0;
const int dword_30D0[4] = {0, 10, 20, 30};

/* Global UInt128 zero constant */
const UInt128 uint128_zero = {0, 0};

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = 0;
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 __builtin_unreachable();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x1150 */
char process_char(char c)
{
 char result; // al

 result = c + 32;
 if ( (unsigned char)(c - 65) >= 0x1Au )
 return c;
 return result;
}


/* Function: process_short @ 0x1160 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x1170 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x1180 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x1190 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x11A0 */
float process_float(float a1, float f)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x11C0 */
double process_double(double a1, double d)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x11E0 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x11F0 */
bool process_bool(int x)
{
 return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x1200 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x1210 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1220 */
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


/* Function: array_1d_stack @ 0x1350 */
int array_1d_stack(int *arr, int n)
{
 long long v2; // rcx
 long long v3; // rdx
 int result; // eax
 __m128i v5; // xmm0
 long long v6; // rsi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 int *v9; // rax
 long long v10; // rsi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( n <= 0 )
 return 0;
 v2 = (unsigned int)n;
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 result = 0;
 do
LABEL_13:
 result += arr[v3++];
 while ( v2 != v3 );
 return result;
 }
 v3 = n & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 24]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 16]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 8])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6]), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 28]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 20]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 12])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6 + 4]), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = &arr[v6 + 4];
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)&v9[v10 - 4]));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)&v9[v10]));
 v10 += 8;
 }
 while ( 8LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: array_string @ 0x1470 */
int array_string(char *str)
{
 int result; // eax

 result = -1;
 do
 ++result;
 while ( *str++ != 0 );
 return result;
}


/* Function: array_2d_stack @ 0x1490 */
int array_2d_stack(int (*arr)[10])
{
 int i;
 int sum = 0;
 for (i = 0; i < 10; i++)
 sum += (*arr)[i];
 return sum;
}


/* Function: array_3d @ 0x14D0 */
int array_3d(int (*arr)[5][5])
{
 __m128i v1; // xmm3
 __m128i v2; // xmm0
 __m128i v3; // xmm1
 __m128i v4; // xmm0
 int v5; // ecx
 __m128i v6; // xmm1
 __m128i v7; // xmm3
 __m128i v8; // xmm0
 int v9; // edx
 __m128i v10; // xmm0
 int v11; // eax
 __m128i v12; // xmm1
 __m128i v13; // xmm3
 __m128i v14; // xmm0
 int v15; // edx
 __m128i v16; // xmm0
 int v17; // ecx
 __m128i v18; // xmm1
 __m128i v19; // xmm3
 __m128i v20; // xmm0
 int v21; // eax
 __m128i v22; // xmm0
 int v23; // edx
 __m128i v24; // xmm1
 __m128i v25; // xmm3
 __m128i v26; // xmm0
 int v27; // ecx
 __m128i v28; // xmm0

 v1 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[1][0]), _mm_loadu_si128((const __m128i *)&(*arr)[0][1]));
 v2 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[2][3]), _mm_loadu_si128((const __m128i *)&(*arr)[4][1])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[1][4]), _mm_loadu_si128((const __m128i *)&(*arr)[3][2])));
 v3 = _mm_add_epi32(_mm_shuffle_epi32(v2, 238), v2);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(v1, 238), v1);
 v5 = (*arr)[0][0]
 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v3, 85), v3))
 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4));
 v6 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[5][1]), _mm_loadu_si128((const __m128i *)&(*arr)[6][0]));
 v7 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[7][3]), _mm_loadu_si128((const __m128i *)&(*arr)[9][1])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[6][4]), _mm_loadu_si128((const __m128i *)&(*arr)[8][2])));
 v8 = _mm_add_epi32(_mm_shuffle_epi32(v7, 238), v7);
 v9 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v8, 85), v8));
 v10 = _mm_add_epi32(_mm_shuffle_epi32(v6, 238), v6);
 v11 = v5 + (*arr)[5][0] + v9 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v10, 85), v10));
 v12 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[10][1]), _mm_loadu_si128((const __m128i *)&(*arr)[11][0]));
 v13 = _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&(*arr)[12][3]),
 _mm_loadu_si128((const __m128i *)&(*arr)[14][1])),
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&(*arr)[11][4]),
 _mm_loadu_si128((const __m128i *)&(*arr)[13][2])));
 v14 = _mm_add_epi32(_mm_shuffle_epi32(v13, 238), v13);
 v15 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v14, 85), v14));
 v16 = _mm_add_epi32(_mm_shuffle_epi32(v12, 238), v12);
 v17 = v11 + (*arr)[10][0] + v15 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v16, 85), v16));
 v18 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[15][1]), _mm_loadu_si128((const __m128i *)&(*arr)[16][0]));
 v19 = _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&(*arr)[17][3]),
 _mm_loadu_si128((const __m128i *)&(*arr)[19][1])),
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&(*arr)[16][4]),
 _mm_loadu_si128((const __m128i *)&(*arr)[18][2])));
 v20 = _mm_add_epi32(_mm_shuffle_epi32(v19, 238), v19);
 v21 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v20, 85), v20));
 v22 = _mm_add_epi32(_mm_shuffle_epi32(v18, 238), v18);
 v23 = v17 + (*arr)[15][0] + v21 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v22, 85), v22));
 v24 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[20][1]), _mm_loadu_si128((const __m128i *)&(*arr)[21][0]));
 v25 = _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&(*arr)[22][3]),
 _mm_loadu_si128((const __m128i *)&(*arr)[24][1])),
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&(*arr)[21][4]),
 _mm_loadu_si128((const __m128i *)&(*arr)[23][2])));
 v26 = _mm_add_epi32(_mm_shuffle_epi32(v25, 238), v25);
 v27 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v26, 85), v26));
 v28 = _mm_add_epi32(_mm_shuffle_epi32(v24, 238), v24);
 return v23 + (*arr)[20][0] + v27 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v28, 85), v28));
}


/* Function: array_vla @ 0x1700 */
int array_vla(int n, int *arr)
{
 long long v2; // rcx
 long long v3; // rdx
 int result; // eax
 __m128i v5; // xmm0
 long long v6; // rdi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 int *v9; // rax
 long long v10; // rdi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( n <= 0 )
 return 0;
 v2 = (unsigned int)n;
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 result = 0;
 do
LABEL_13:
 result += arr[v3++];
 while ( v2 != v3 );
 return result;
 }
 v3 = n & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 24]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 16]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 8])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6]), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 28]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 20]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 12])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6 + 4]), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = &arr[v6 + 4];
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)&v9[v10 - 4]));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)&v9[v10]));
 v10 += 8;
 }
 while ( 8LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: array_pointer @ 0x1820 */
int array_pointer(int (*arr)[10], int n)
{
 long long v2; // rcx
 long long v3; // rdx
 int result; // eax
 unsigned long long v5; // rax
 __m128i v6; // xmm0
 unsigned long long v7; // rsi
 __m128i v8; // xmm1
 __m128i v9; // xmm1
 __m128i v10; // xmm0
 int *v11; // rsi
 long long v12; // rcx

 if ( n <= 0 )
 return 0;
 v2 = (unsigned int)n;
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 result = 0;
LABEL_8:
 v11 = &(*arr)[10 * v3];
 v12 = v2 - v3;
 do
 {
 result += *v11;
 v11 += 10;
 --v12;
 }
 while ( v12 );
 return result;
 }
 v3 = n & 0xFFFFFFF8;
 v5 = 5 * ((8LL * (unsigned int)n) & 0xFFFFFFFFFFFFFFC0LL);
 v6 = 0;
 v7 = 0;
 v8 = 0;
 do
 {
 v6 = _mm_add_epi32(
 v6,
 _mm_unpacklo_epi64(
 _mm_unpacklo_epi32(_mm_cvtsi32_si128((*arr)[v7 / 4]), _mm_cvtsi32_si128((*arr)[v7 / 4 + 10])),
 _mm_unpacklo_epi32(_mm_cvtsi32_si128((*arr)[v7 / 4 + 20]), _mm_cvtsi32_si128((*arr)[v7 / 4 + 30]))));
 v8 = _mm_add_epi32(
 v8,
 _mm_unpacklo_epi64(
 _mm_unpacklo_epi32(_mm_cvtsi32_si128((*arr)[v7 / 4 + 40]), _mm_cvtsi32_si128((*arr)[v7 / 4 + 50])),
 _mm_unpacklo_epi32(_mm_cvtsi32_si128((*arr)[v7 / 4 + 60]), _mm_cvtsi32_si128((*arr)[v7 / 4 + 70]))));
 v7 += 320LL;
 }
 while ( v5 != v7 );
 v9 = _mm_add_epi32(v8, v6);
 v10 = _mm_add_epi32(_mm_shuffle_epi32(v9, 238), v9);
 result = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v10, 85), v10));
 if ( v3 != v2 )
 goto LABEL_8;
 return result;
}


/* Function: pointer_array @ 0x1910 */
int pointer_array(int **arr, int n)
{
 int v2; // r8d
 long long v3; // rdx
 int result; // eax
 int *v5; // rcx
 int *v6; // rcx
 int *v7; // rcx

 if ( n <= 0 )
 return 0;
 v2 = 10;
 if ( (unsigned int)n < 0xA )
 v2 = n;
 if ( v2 == 1 )
 {
 v3 = 0;
 result = 0;
 }
 else
 {
 v3 = 0;
 result = 0;
 do
 {
 v6 = arr[v3];
 if ( v6 )
 result += *v6;
 v7 = arr[v3 + 1];
 if ( v7 )
 result += *v7;
 v3 += 2;
 }
 while ( (v2 & 0xE) != v3 );
 }
 if ( (v2 & 1) != 0 )
 {
 v5 = arr[v3];
 if ( v5 )
 result += *v5;
 }
 return result;
}


/* Function: array_complex_index @ 0x1980 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 int result; // eax

 result = -1;
 if ( x >= 0 && y < h && x < w && y >= 0 )
 return arr[x + w * y];
 return result;
}


/* Function: array_oob @ 0x19B0 */
int array_oob(int *arr, int n)
{
 long long v2; // rcx
 long long v3; // rdx
 int result; // eax
 __m128i v5; // xmm0
 long long v6; // rsi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 int *v9; // rax
 long long v10; // rsi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( n < 0 )
 return 0;
 v2 = (unsigned int)(n + 1);
 if ( (unsigned int)n < 7 )
 {
 v3 = 0;
 result = 0;
 do
LABEL_13:
 result += arr[v3++];
 while ( v2 != v3 );
 return result;
 }
 v3 = (unsigned int)v2 & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 24]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 16]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 8])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6]), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 28]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 20]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 12])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6 + 4]), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = &arr[v6 + 4];
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)&v9[v10 - 4]));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)&v9[v10]));
 v10 += 8;
 }
 while ( 8LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: test_array_types @ 0x1AD0 */
void test_array_types()
{
 int v0; // eax
 int arr[5][5]; // [rsp+190h] [rbp-1F8h] BYREF
 UInt128 v2; // [rsp+1F4h] [rbp-194h]
 UInt128 v3; // [rsp+204h] [rbp-184h]
 UInt128 v4; // [rsp+214h] [rbp-174h]
 UInt128 v5; // [rsp+224h] [rbp-164h]
UInt128 v6; // [rsp+234h] [rbp-154h]
	UInt128 v7; // [rsp+244h] [rbp-144h]
	UInt128 v8; // [rsp+250h] [rbp-138h]
	v8.lo = xmmword_30C0[0]; v8.hi = 0;
	UInt128 v9; // [rsp+258h] [rbp-130h]
 UInt128 v10; // [rsp+268h] [rbp-120h]
 UInt128 v11; // [rsp+278h] [rbp-110h]
 UInt128 v12; // [rsp+288h] [rbp-100h]
UInt128 v13; // [rsp+298h] [rbp-F0h]
	UInt128 v14; // [rsp+2A8h] [rbp-E0h]
	UInt128 v15; // [rsp+2B8h] [rbp-D0h]
	v15.lo = xmmword_30C0[0]; v15.hi = 0;
	UInt128 v16; // [rsp+2BCh] [rbp-CCh]
 UInt128 v17; // [rsp+2CCh] [rbp-BCh]
 UInt128 v18; // [rsp+2DCh] [rbp-ACh]
 UInt128 v19; // [rsp+2ECh] [rbp-9Ch]
UInt128 v20; // [rsp+2FCh] [rbp-8Ch]
	UInt128 v21; // [rsp+30Ch] [rbp-7Ch]
	UInt128 v22; // [rsp+31Ch] [rbp-6Ch]
	v22.lo = xmmword_30C0[0]; v22.hi = 0;
	UInt128 v23; // [rsp+320h] [rbp-68h]
 UInt128 v24; // [rsp+330h] [rbp-58h]
 UInt128 v25; // [rsp+340h] [rbp-48h]
 UInt128 v26; // [rsp+350h] [rbp-38h]
 UInt128 v27; // [rsp+360h] [rbp-28h]
 UInt128 v28; // [rsp+370h] [rbp-18h]
 UInt128 v29; // [rsp+380h] [rbp-8h]

 puts(asc_3690);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 printf("ARR-L1-03 (array_2d_stack): %d\n", 45);
 *(unsigned long long *)&arr[0][0] = xmmword_30C0[0];
 *(unsigned long long *)&arr[0][4] = xmmword_30C0[0];
 *(unsigned long long *)&arr[1][3] = xmmword_30C0[0];
 *(unsigned long long *)&arr[2][2] = xmmword_30C0[0];
 *(unsigned long long *)&arr[3][1] = xmmword_30C0[0];
 *(unsigned long long *)&arr[4][0] = xmmword_30C0[0];
 arr[4][4] = 1;
 v2.lo = xmmword_30C0[0]; v2.hi = 0;
 v3.lo = xmmword_30C0[0]; v3.hi = 0;
 v4.lo = xmmword_30C0[0]; v4.hi = 0;
 v5.lo = xmmword_30C0[0]; v5.hi = 0;
 v6.lo = xmmword_30C0[0]; v6.hi = 0;
 v7.lo = xmmword_30C0[0]; v7.hi = 0;
 v8 = 1;
 v9.lo = xmmword_30C0[0]; v9.hi = 0;
 v10.lo = xmmword_30C0[0]; v10.hi = 0;
 v11.lo = xmmword_30C0[0]; v11.hi = 0;
 v12.lo = xmmword_30C0[0]; v12.hi = 0;
 v13.lo = xmmword_30C0[0]; v13.hi = 0;
 v14.lo = xmmword_30C0[0]; v14.hi = 0;
 v15 = 1;
 v16.lo = xmmword_30C0[0]; v16.hi = 0;
 v17.lo = xmmword_30C0[0]; v17.hi = 0;
 v18.lo = xmmword_30C0[0]; v18.hi = 0;
 v19.lo = xmmword_30C0[0]; v19.hi = 0;
 v20.lo = xmmword_30C0[0]; v20.hi = 0;
 v21.lo = xmmword_30C0[0]; v21.hi = 0;
 v22 = 1;
 v23.lo = xmmword_30C0[0]; v23.hi = 0;
 v24.lo = xmmword_30C0[0]; v24.hi = 0;
 v25.lo = xmmword_30C0[0]; v25.hi = 0;
 v26.lo = xmmword_30C0[0]; v26.hi = 0;
 v27.lo = xmmword_30C0[0]; v27.hi = 0;
 v28.lo = xmmword_30C0[0]; v28.hi = 0;
 v29 = 1;
 v0 = array_3d((int (*)[5][5])arr);
 printf("ARR-L1-04 (array_3d): %d\n", v0);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x1DE0 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x1DF0 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1E00 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1E10 */
int ptr_increment(int *p, int n)
{
 long long v2; // r8
 unsigned long long v3; // r9
 int result; // eax
 long long v5; // r8
 __m128i v6; // xmm0
 long long v7; // rdx
 __m128i v8; // xmm1
 unsigned long long v9; // rax
 int *v10; // rax
 long long v11; // rdx
 __m128i v12; // xmm0
 __m128i v13; // xmm1
 int v14; // esi
 long long v15; // rcx

 if ( n <= 0 )
 return 0;
 v2 = (unsigned int)(n - 1);
 LODWORD(v3) = 0;
 if ( (unsigned int)v2 < 7 )
 {
 result = 0;
 goto LABEL_14;
 }
 v5 = v2 + 1;
 v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
 if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) - 8 >= 0x18 )
 {
 v9 = ((((v5 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 do
 {
 v6 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[v7 + 24]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[v7 + 16]),
 _mm_loadu_si128((const __m128i *)&p[v7 + 8])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&p[v7]), v6)));
 v8 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[v7 + 28]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[v7 + 20]),
 _mm_loadu_si128((const __m128i *)&p[v7 + 12])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&p[v7 + 4]), v8)));
 v7 += 32;
 v9 -= 4LL;
 }
 while ( v9 );
 }
 else
 {
 v6 = 0;
 v7 = 0;
 v8 = 0;
 }
 if ( (((unsigned char)(((v5 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != 0 )
 {
 v10 = &p[v7 + 4];
 v11 = 0;
 do
 {
 v6 = _mm_add_epi32(v6, _mm_loadu_si128((const __m128i *)&v10[v11 - 4]));
 v8 = _mm_add_epi32(v8, _mm_loadu_si128((const __m128i *)&v10[v11]));
 v11 += 8;
 }
 while ( 8LL * (((unsigned char)(((v5 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != v11 );
 }
 v12 = _mm_add_epi32(v6, v8);
 v13 = _mm_add_epi32(_mm_shuffle_epi32(v12, 238), v12);
 result = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v13, 85), v13));
 if ( v5 != v3 )
 {
 p += v3;
LABEL_14:
 v14 = n - v3;
 v15 = 0;
 do
 result += p[v15++];
 while ( v14 != (unsigned int)v15 );
 }
 return result;
}


/* Function: ptr_offset @ 0x1F40 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1F50 */
int ptr_diff(int *p1, int *p2)
{
 return (unsigned long long)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0x1F60 */
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


/* Function: ptr_const @ 0x1F80 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1F90 */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1FA0 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1FB0 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 UInt128 v3; // [rsp+0h] [rbp-18h] BYREF

 v3.lo = off_5DE0;
 v3.hi = 0;
 return f(p, (char **)&v3);
}


/* Function: ptr_cast @ 0x1FE0 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1FF0 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x2000 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x2010 */
void test_pointer_types()
{
 puts(asc_36AB);
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


/* Function: struct_simple @ 0x2130 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x2140 */
int struct_array(Point3D *pts, int n)
{
 char v2; // r8
 long long v3; // rdx
 int result; // eax
 long long v5; // rsi
 int *p_z; // rcx

 if ( n <= 0 )
 return 0;
 v2 = n;
 if ( n == 1 )
 {
 v3 = 0;
 result = 0;
 }
 else
 {
 v5 = n & 0xFFFFFFFE;
 p_z = &pts[1].z;
 v3 = 0;
 result = 0;
 do
 {
 result += *p_z + *(p_z - 1) + *(p_z - 2) + *(p_z - 3) + *(p_z - 4) + *(p_z - 5);
 v3 += 2;
 p_z += 6;
 }
 while ( v5 != v3 );
 }
 if ( (v2 & 1) != 0 )
 result += pts[v3].z + pts[v3].y + pts[v3].x;
 return result;
}


/* Function: struct_nested @ 0x21B0 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x21C0 */
int struct_deep(Widget *w)
{
 return w->position.z + w->fill.r;
}


/* Function: struct_with_ptr @ 0x21D0 */
int struct_with_ptr(Node *node)
{
 Node *next; // rax

 next = node->next;
 if ( next )
 return node->data + next->data;
 else
 return node->data;
}


/* Function: struct_bitfields @ 0x21F0 */
int struct_bitfields(Flags *f)
{
 return (f->reserved & 7) + (f->flag2 * 2) + f->flag1 + ((f->flag3 & 3) << 6);
}


/* Function: union_type @ 0x2220 */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0x2240 */
int union_array(UnionData *arr, int n)
{
 long long v2; // rcx
 long long v3; // rdx
 int result; // eax
 __m128i v5; // xmm0
 long long v6; // rsi
 __m128i v7; // xmm1
 unsigned long long v8; // rax
 UnionData *v9; // rax
 long long v10; // rsi
 __m128i v11; // xmm0
 __m128i v12; // xmm1

 if ( n <= 0 )
 return 0;
 v2 = (unsigned int)n;
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 result = 0;
 do
LABEL_13:
 result += arr[v3++].i;
 while ( v2 != v3 );
 return result;
 }
 v3 = n & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v8 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 do
 {
 v5 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 24]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 16]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 8])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6]), v5)));
 v7 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 28]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&arr[v6 + 20]),
 _mm_loadu_si128((const __m128i *)&arr[v6 + 12])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&arr[v6 + 4]), v7)));
 v6 += 32;
 v8 -= 4LL;
 }
 while ( v8 );
 }
 else
 {
 v5 = 0;
 v6 = 0;
 v7 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v9 = &arr[v6 + 4];
 v10 = 0;
 do
 {
 v5 = _mm_add_epi32(v5, _mm_loadu_si128((const __m128i *)&v9[v10 - 4]));
 v7 = _mm_add_epi32(v7, _mm_loadu_si128((const __m128i *)&v9[v10]));
 v10 += 8;
 }
 while ( 8LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v10 );
 }
 v11 = _mm_add_epi32(v5, v7);
 v12 = _mm_add_epi32(_mm_shuffle_epi32(v11, 238), v11);
 result = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v12, 85), v12));
 if ( v3 != v2 )
 goto LABEL_13;
 return result;
}


/* Function: enum_type @ 0x2360 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x2370 */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return dword_30D0[s];
 return result;
}


/* Function: struct_func_ptr @ 0x2390 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x23A0 */
int linked_list(Node *head)
{
 int result; // eax

 for ( result = 0; head; head = head->next )
 result += head->data;
 return result;
}


/* Function: doubly_linked_list @ 0x23C0 */
int doubly_linked_list(DNode *head)
{
 int result; // eax

 for ( result = 0; head; head = head->next )
 result += head->data;
 return result;
}


/* Function: binary_tree_sum @ 0x23E0 */
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


/* Function: binary_tree @ 0x2420 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x2430 */
int graph_traverse(Graph *g)
{
 int numVertices; // r8d
 long long v2; // rdx
 int result; // eax
 Edge *j; // rcx
 long long i; // rcx
 Edge *k; // rcx

 numVertices = g->numVertices;
 if ( numVertices <= 0 )
 return 0;
 if ( numVertices == 1 )
 {
 v2 = 0;
 result = 0;
 }
 else
 {
 v2 = 0;
 result = 0;
 j = g->adjList[0];
 if ( g->adjList[0] )
 goto LABEL_11;
 while ( 1 )
 {
 for ( i = *(long long *)((char *)g->adjList + ((8 * v2) | 8)); i; i = *(unsigned long long *)(i + 8) )
 result += *(unsigned int *)i;
 v2 += 2;
 if ( v2 == (numVertices & 0xFFFFFFFE) )
 break;
 for ( j = g->adjList[v2]; j; j = j->next )
LABEL_11:
 result += j->dest;
 }
 }
 if ( (numVertices & 1) != 0 )
 {
 for ( k = g->adjList[v2]; k; k = k->next )
 result += k->dest;
 }
 return result;
}


/* Function: test_composite_types @ 0x24E0 */
void test_composite_types()
{
 int v0; // ebx
 Node *v1; // rax
 int v2; // ebp
 DNode *v3; // rax
 TreeNode *v4; // eax
 Node node1; // [rsp+0h] [rbp-88h] BYREF
 Node node2; // [rsp+10h] [rbp-78h] BYREF
 Node node3; // [rsp+20h] [rbp-68h] BYREF
 DNode dnode1; // [rsp+30h] [rbp-58h] BYREF
 DNode dnode2; // [rsp+48h] [rbp-40h] BYREF
 DNode dnode3; // [rsp+60h] [rbp-28h] BYREF

 puts(asc_36C6);
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
 
 /* linked list test: 10 -> 20 -> 30 */
 node1.data = 10;
 node2.data = 20;
 node3.data = 30;
 node1.next = &node2;
 node2.next = &node3;
 node3.next = 0;
 v1 = &node1;
 while ( v1 )
 {
 v0 += v1->data;
 v1 = v1->next;
 }
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 
 /* doubly linked list test: 10 -> 20 -> 30 */
 dnode1.data = 10;
 dnode2.data = 20;
 dnode3.data = 30;
 dnode1.prev = 0;
 dnode1.next = &dnode2;
 dnode2.prev = &dnode1;
 dnode2.next = &dnode3;
 dnode3.prev = &dnode2;
 dnode3.next = 0;
 v3 = &dnode1;
 v2 = 0;
 while ( v3 )
 {
 v2 += v3->data;
 v3 = v3->next;
 }
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
 
 /* binary tree test */
 v4 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", v4);
 printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x26D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x26EC */
void term_proc()
{
 ;
}


/* Total functions decompiled: 63, failed: 5 */
