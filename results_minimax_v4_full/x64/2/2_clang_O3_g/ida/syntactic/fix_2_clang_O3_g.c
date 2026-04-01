/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_clang_O3_g
 * Processor: pc
 */

#include <stdbool.h>
#include <stdio.h>
#include <emmintrin.h>

/* String constants */
char s[] = "Test Data Types";
char asc_3690[] = "Test Array Types";
char asc_36AB[] = "Test Pointer Types";
char asc_36C6[] = "Test Composite Types";

/* 128-bit constant for array initialization */
const __int128 xmmword_30C0 = (__int128)0x0101010101010101LL | ((__int128)0x0101010101010101LL << 64);

/* Data for binary tree test */
const __int128 xmmword_36E8 = (__int128)0x0101010101010101LL | ((__int128)0x0101010101010101LL << 64);

/* Function pointer for ptr_func_complex */
int (*off_5DE0)(int *, char **);

/* Array for enum_switch */
int dword_30D0[3] = { 1, 2, 3 };

typedef enum { STATE_STARTED = 0, STATE_RUNNING = 1, STATE_STOPPED = 2 } State;

/* LODWORD macro for extracting low 32 bits */
#define LODWORD(x) ((unsigned int)((unsigned long long)(x) & 0xFFFFFFFFULL))

/* Struct definitions */
typedef struct Point3D { int x; int y; int z; } Point3D;
typedef struct Node { int data; struct Node *next; } Node;
typedef struct DNode { int data; struct DNode *next; struct DNode *prev; } DNode;
typedef struct TreeNode { int data; struct TreeNode *left; struct TreeNode *right; } TreeNode;
typedef struct Point { int x; int y; int z; } Point;
typedef struct Size { int width; int height; } Size;
typedef struct Rect { Point position; Size size; } Rect;
typedef struct Color { unsigned char r; unsigned char g; unsigned char b; unsigned char a; } Color;
typedef struct WidgetStyle { Color fill; Color stroke; } WidgetStyle;
typedef struct Widget { Rect bounds; WidgetStyle style; int z; } Widget;
typedef struct Flags { unsigned short flags; } Flags;
typedef union UnionData { int i; float f; unsigned char bytes[4]; } UnionData;
typedef struct Edge { int dest; struct Edge *next; } Edge;
typedef struct Graph { int numVertices; Edge **adjList; } Graph;
typedef struct Device { int (*process)(void *); void *data; } Device;

extern void *_gmon_start__;

/* Function: .init_proc @ 0x1000 */
void (*init_proc(void))(void)
{
 // CRT initialization stub - just return the entry point
 return (void (*)(void))&_gmon_start__;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
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
 long long v6; // xmm1
 __m128i v7; // xmm2
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 return (*arr)[99]
 + (*arr)[88]
 + (*arr)[77]
 + (*arr)[66]
 + (*arr)[55]
 + (*arr)[44]
 + (*arr)[33]
 + (*arr)[22]
 + (*arr)[0]
 + (*arr)[11];
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

 v1 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)(*arr)[1]), _mm_loadu_si128((const __m128i *)&(*arr)[0][1]));
 v2 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[2][3]), _mm_loadu_si128((const __m128i *)&(*arr)[4][1])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[1][4]), _mm_loadu_si128((const __m128i *)&(*arr)[3][2])));
 v3 = _mm_add_epi32(_mm_shuffle_epi32(v2, 238), v2);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(v1, 238), v1);
 v5 = (*arr)[0][0]
 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v3, 85), v3))
 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4));
 v6 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[5][1]), _mm_loadu_si128((const __m128i *)(*arr)[6]));
 v7 = _mm_add_epi32(
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[7][3]), _mm_loadu_si128((const __m128i *)&(*arr)[9][1])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[6][4]), _mm_loadu_si128((const __m128i *)&(*arr)[8][2])));
 v8 = _mm_add_epi32(_mm_shuffle_epi32(v7, 238), v7);
 v9 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v8, 85), v8));
 v10 = _mm_add_epi32(_mm_shuffle_epi32(v6, 238), v6);
 v11 = v5 + (*arr)[5][0] + v9 + _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v10, 85), v10));
 v12 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[10][1]), _mm_loadu_si128((const __m128i *)(*arr)[11]));
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
 v18 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[15][1]), _mm_loadu_si128((const __m128i *)(*arr)[16]));
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
 v24 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&(*arr)[20][1]), _mm_loadu_si128((const __m128i *)(*arr)[21]));
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 __int128 v2; // [rsp+1F4h] [rbp-194h]
 __int128 v3; // [rsp+204h] [rbp-184h]
 __int128 v4; // [rsp+214h] [rbp-174h]
 __int128 v5; // [rsp+224h] [rbp-164h]
 __int128 v6; // [rsp+234h] [rbp-154h]
 __int128 v7; // [rsp+244h] [rbp-144h]
 int v8; // [rsp+254h] [rbp-134h]
 __int128 v9; // [rsp+258h] [rbp-130h]
 __int128 v10; // [rsp+268h] [rbp-120h]
 __int128 v11; // [rsp+278h] [rbp-110h]
 __int128 v12; // [rsp+288h] [rbp-100h]
 __int128 v13; // [rsp+298h] [rbp-F0h]
 __int128 v14; // [rsp+2A8h] [rbp-E0h]
 int v15; // [rsp+2B8h] [rbp-D0h]
 __int128 v16; // [rsp+2BCh] [rbp-CCh]
 __int128 v17; // [rsp+2CCh] [rbp-BCh]
 __int128 v18; // [rsp+2DCh] [rbp-ACh]
 __int128 v19; // [rsp+2ECh] [rbp-9Ch]
 __int128 v20; // [rsp+2FCh] [rbp-8Ch]
 __int128 v21; // [rsp+30Ch] [rbp-7Ch]
 int v22; // [rsp+31Ch] [rbp-6Ch]
 __int128 v23; // [rsp+320h] [rbp-68h]
 __int128 v24; // [rsp+330h] [rbp-58h]
 __int128 v25; // [rsp+340h] [rbp-48h]
 __int128 v26; // [rsp+350h] [rbp-38h]
 __int128 v27; // [rsp+360h] [rbp-28h]
 __int128 v28; // [rsp+370h] [rbp-18h]
 int v29; // [rsp+380h] [rbp-8h]

 puts(asc_3690);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 printf("ARR-L1-03 (array_2d_stack): %d\n", 45);
 *(unsigned long long *)&arr[0][0] = xmmword_30C0;
 *(unsigned long long *)&arr[0][4] = xmmword_30C0;
 *(unsigned long long *)&arr[1][3] = xmmword_30C0;
 *(unsigned long long *)&arr[2][2] = xmmword_30C0;
 *(unsigned long long *)&arr[3][1] = xmmword_30C0;
 *(unsigned long long *)&arr[4][0] = xmmword_30C0;
 arr[4][4] = 1;
 v2 = xmmword_30C0;
 v3 = xmmword_30C0;
 v4 = xmmword_30C0;
 v5 = xmmword_30C0;
 v6 = xmmword_30C0;
 v7 = xmmword_30C0;
 v8 = 1;
 v9 = xmmword_30C0;
 v10 = xmmword_30C0;
 v11 = xmmword_30C0;
 v12 = xmmword_30C0;
 v13 = xmmword_30C0;
 v14 = xmmword_30C0;
 v15 = 1;
 v16 = xmmword_30C0;
 v17 = xmmword_30C0;
 v18 = xmmword_30C0;
 v19 = xmmword_30C0;
 v20 = xmmword_30C0;
 v21 = xmmword_30C0;
 v22 = 1;
 v23 = xmmword_30C0;
 v24 = xmmword_30C0;
 v25 = xmmword_30C0;
 v26 = xmmword_30C0;
 v27 = xmmword_30C0;
 v28 = xmmword_30C0;
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
 __m128i v7; // xmm1
 __m128i v8; // xmm2
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
 v6 = _mm_setzero_si128();
 v7 = _mm_setzero_si128();
 v8 = _mm_setzero_si128();
 do
 {
 v6 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[(int)v7 + 24]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[(int)v7 + 16]),
 _mm_loadu_si128((const __m128i *)&p[(int)v7 + 8])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&p[(int)v7]), v6)));
 v8 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[(int)v7 + 28]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&p[(int)v7 + 20]),
 _mm_loadu_si128((const __m128i *)&p[(int)v7 + 12])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&p[(int)v7 + 4]), v8)));
 v7 += 32;
 v9 -= 4LL;
 }
 while ( v9 );
 }
 else
 {
 v6 = _mm_setzero_si128();
 v7 = _mm_setzero_si128();
 v8 = _mm_setzero_si128();
 }
 if ( (((unsigned char)(((v5 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != 0 )
 {
 v10 = &p[(int)v7 + 4];
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
 __int128 v3; // [rsp+0h] [rbp-18h] BYREF

 v3 = *(unsigned long long *)&off_5DE0;
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
 return w->bounds.position.z + w->style.fill.r;
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
 return ((*(unsigned short *)f >> 3) & 7) + ((*(unsigned short *)f >> 1) & 3) + (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6);
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 v5 = _mm_setzero_si128();
 v6 = 0;
 v7 = _mm_setzero_si128();
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
 while ( v1 != NULL );
 return v2;
}


/* Function: binary_tree @ 0x2420 */
// attributes: thunk
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
 int *v1; // rax
 int v2; // ebp
 int *v3; // rax
 int v4; // eax
 int v5; // [rsp+0h] [rbp-88h] BYREF
 int *v6; // [rsp+8h] [rbp-80h]
 int v7; // [rsp+10h] [rbp-78h] BYREF
 int *v8; // [rsp+18h] [rbp-70h]
 int v9; // [rsp+20h] [rbp-68h] BYREF
 long long v10; // [rsp+28h] [rbp-60h]
 int v11; // [rsp+30h] [rbp-58h] BYREF
 int *v12; // [rsp+38h] [rbp-50h]
 long long v13; // [rsp+40h] [rbp-48h]
 int v14; // [rsp+48h] [rbp-40h] BYREF
 long long v15; // [rsp+50h] [rbp-38h]
 int *v16; // [rsp+58h] [rbp-30h]
 TreeNode root; // [rsp+60h] [rbp-28h] BYREF

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
 v1 = &v5;
 v5 = 10;
 v6 = &v7;
 v7 = 20;
 v8 = &v9;
 v9 = 30;
 v10 = 0;
 do
 {
 v0 += *v1;
 v1 = (int *)*((unsigned long long *)v1 + 1);
 }
 while ( v1 );
 v2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = &v11;
 v11 = 10;
 v13 = 0;
 v14 = 20;
 v15 = 0;
 v16 = &v11;
 v12 = &v14;
 do
 {
 v2 += *v3;
 v3 = (int *)*((unsigned long long *)v3 + 1);
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
 root.right = 0;
 *(unsigned long long *)&root.data = xmmword_36E8;
 v4 = binary_tree_sum(&root);
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


/* FAILED to decompile: __libc_start_main @ 0x6048 */

/* FAILED to decompile: puts @ 0x6050 */

/* FAILED to decompile: printf @ 0x6058 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6060 */

/* FAILED to decompile: __gmon_start__ @ 0x6070 */

/* Total functions decompiled: 63, failed: 5 */
