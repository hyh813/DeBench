/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_clang_O2_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdbool.h>
#include <emmintrin.h>

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
    Rect bounds;
    struct {
        struct {
            float r;
            float g;
            float b;
            float a;
        } fill;
    } style;
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
    int (*process)(int);
    int data;
} Device;

typedef struct {
    unsigned short flags;
} Flags;

typedef union {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef enum {
    STATE_STOPPED = 5,
    STATE_RUNNING,
    STATE_PAUSED
} State;

/* External declarations */
static __int128 xmmword_3030 = 0;
static __int128 xmmword_3658 = 0;
static const char *s = "test";
static const char *asc_3600 = "Array Types Test";
static const char *asc_361B = "Pointer Types Test";
static const char *asc_3636 = "Composite Types Test";
static int dword_3040[10] = {50, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static void *off_4DE0 = NULL;

/* Forward declarations */
int array_3d(int (*arr)[5][5]);

/* Function: array_3d */
int array_3d(int (*arr)[5][5])
{
 int result = 0;
 for (int i = 0; i < 5; i++)
 {
  for (int j = 0; j < 5; j++)
  {
   result += arr[i][j];
  }
 }
 return result;
}




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
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
 v6 = _mm_setzero_si128();
 v7 = 0;
 v8 = _mm_setzero_si128();
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
 long long v0; // rbx
 int v1; // edx
 int v2; // edx
 int v3; // eax
 int v4[5][5]; // [rsp+0h] [rbp-398h] BYREF
 __int128 v5; // [rsp+64h] [rbp-334h]
 __int128 v6; // [rsp+74h] [rbp-324h]
 __int128 v7; // [rsp+84h] [rbp-314h]
 __int128 v8; // [rsp+94h] [rbp-304h]
 __int128 v9; // [rsp+A4h] [rbp-2F4h]
 __int128 v10; // [rsp+B4h] [rbp-2E4h]
 int v11; // [rsp+C4h] [rbp-2D4h]
 __int128 v12; // [rsp+C8h] [rbp-2D0h]
 __int128 v13; // [rsp+D8h] [rbp-2C0h]
 __int128 v14; // [rsp+E8h] [rbp-2B0h]
 __int128 v15; // [rsp+F8h] [rbp-2A0h]
 __int128 v16; // [rsp+108h] [rbp-290h]
 __int128 v17; // [rsp+118h] [rbp-280h]
 int v18; // [rsp+128h] [rbp-270h]
 __int128 v19; // [rsp+12Ch] [rbp-26Ch]
 __int128 v20; // [rsp+13Ch] [rbp-25Ch]
 __int128 v21; // [rsp+14Ch] [rbp-24Ch]
 __int128 v22; // [rsp+15Ch] [rbp-23Ch]
 __int128 v23; // [rsp+16Ch] [rbp-22Ch]
 __int128 v24; // [rsp+17Ch] [rbp-21Ch]
 int v25; // [rsp+18Ch] [rbp-20Ch]
 __int128 v26; // [rsp+190h] [rbp-208h]
 __int128 v27; // [rsp+1A0h] [rbp-1F8h]
 __int128 v28; // [rsp+1B0h] [rbp-1E8h]
 __int128 v29; // [rsp+1C0h] [rbp-1D8h]
 __int128 v30; // [rsp+1D0h] [rbp-1C8h]
 __int128 v31; // [rsp+1E0h] [rbp-1B8h]
 int v32; // [rsp+1F0h] [rbp-1A8h]
 unsigned int v33[102]; // [rsp+200h] [rbp-198h]

 puts(asc_3600);
 v0 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 do
 {
 v33[v0] = 0;
 v33[v0 + 1] = v0 == 10;
 v33[v0 + 2] = 2 * (v0 == 20);
 v33[v0 + 3] = 3 * (v0 == 30);
 v33[v0 + 4] = 4 * (v0 == 40);
 v33[v0 + 5] = 5 * (v0 == 50);
 v1 = 0;
 if ( v0 == 60 )
 v1 = 6;
 v33[v0 + 6] = v1;
 v2 = 0;
 if ( v0 == 70 )
 v2 = 7;
 v33[v0 + 7] = v2;
 v33[v0 + 8] = 8 * (v0 == 80);
 v33[v0 + 9] = 9 * (v0 == 90);
 v0 += 10;
 }
 while ( v0 != 100 );
 printf(
 "ARR-L1-03 (array_2d_stack): %d\n",
 v33[99] + v33[88] + v33[77] + v33[66] + v33[55] + v33[44] + v33[33] + v33[22] + v33[0] + v33[11]);
 *(unsigned long long *)&v4[0][0] = xmmword_3030;
 *(unsigned long long *)&v4[0][4] = xmmword_3030;
 *(unsigned long long *)&v4[1][3] = xmmword_3030;
 *(unsigned long long *)&v4[2][2] = xmmword_3030;
 *(unsigned long long *)&v4[3][1] = xmmword_3030;
 *(unsigned long long *)&v4[4][0] = xmmword_3030;
 v4[4][4] = 1;
 v5 = xmmword_3030;
 v6 = xmmword_3030;
 v7 = xmmword_3030;
 v8 = xmmword_3030;
 v9 = xmmword_3030;
 v10 = xmmword_3030;
 v11 = 1;
 v12 = xmmword_3030;
 v13 = xmmword_3030;
 v14 = xmmword_3030;
 v15 = xmmword_3030;
 v16 = xmmword_3030;
 v17 = xmmword_3030;
 v18 = 1;
 v19 = xmmword_3030;
 v20 = xmmword_3030;
 v21 = xmmword_3030;
 v22 = xmmword_3030;
 v23 = xmmword_3030;
 v24 = xmmword_3030;
 v25 = 1;
 v26 = xmmword_3030;
 v27 = xmmword_3030;
 v28 = xmmword_3030;
 v29 = xmmword_3030;
 v30 = xmmword_3030;
 v31 = xmmword_3030;
 v32 = 1;
 v3 = array_3d((int (*)[5][5])v4);
 printf("ARR-L1-04 (array_3d): %d\n", v3);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x1DD0 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x1DE0 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1DF0 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1E00 */
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
 v3 = 0;
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
 v7 = 0;
 v8 = _mm_setzero_si128();
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
 v6 = _mm_setzero_si128();
 v7 = 0;
 v8 = _mm_setzero_si128();
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


/* Function: ptr_offset @ 0x1F30 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1F40 */
int ptr_diff(int *p1, int *p2)
{
 return (unsigned long long)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0x1F50 */
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


/* Function: ptr_const @ 0x1F70 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1F80 */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1F90 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1FA0 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *dummy = NULL;
 return f(p, &dummy);
}


/* Function: ptr_cast @ 0x1FD0 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1FE0 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x1FF0 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x2000 */
void test_pointer_types()
{
 puts(asc_361B);
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


/* Function: struct_simple @ 0x2120 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x2130 */
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


/* Function: struct_nested @ 0x21A0 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x21B0 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x21C0 */
int struct_with_ptr(Node *node)
{
 Node *next; // rax

 next = node->next;
 if ( next )
 return node->data + next->data;
 else
 return node->data;
}


/* Function: struct_bitfields @ 0x21E0 */
int struct_bitfields(Flags *f)
{
 return ((*(unsigned short *)f >> 3) & 7) + ((*(unsigned short *)f >> 1) & 3) + (*(unsigned short *)f & 1) + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x2210 */
int union_type(UnionData *u, int type)
{
 if ( type == 1 )
 return (int)u->f;
 if ( type )
 return u->bytes[0];
 return u->i;
}


/* Function: union_array @ 0x2230 */
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


/* Function: enum_type @ 0x2350 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x2360 */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return 50;
 return result;
}


/* Function: struct_func_ptr @ 0x2380 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x2390 */
int linked_list(Node *head)
{
 int result; // eax

 for ( result = 0; head; head = head->next )
 result += head->data;
 return result;
}


/* Function: doubly_linked_list @ 0x23B0 */
int doubly_linked_list(DNode *head)
{
 int result; // eax

 for ( result = 0; head; head = head->next )
 result += head->data;
 return result;
}


/* Function: binary_tree_sum @ 0x23D0 */
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


/* Function: binary_tree @ 0x2410 */
// attributes: thunk
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x2420 */
int graph_traverse(Graph *g)
{
 int numVertices; // r8d
 long long v2; // rdx
 int result; // eax
 Edge *i; // rcx
 long long j; // rcx
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
 do
 {
 for ( i = g->adjList[v2]; i; i = i->next )
 result += i->dest;
 for ( j = *(long long *)((char *)g->adjList + ((8 * v2) | 8)); j; j = *(unsigned long long *)(j + 8) )
 result += *(unsigned int *)j;
 v2 += 2;
 }
 while ( v2 != (numVertices & 0xFFFFFFFE) );
 }
 if ( (numVertices & 1) != 0 )
 {
 for ( k = g->adjList[v2]; k; k = k->next )
 result += k->dest;
 }
 return result;
}


/* Function: test_composite_types @ 0x24C0 */
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

 puts(asc_3636);
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
 *(unsigned long long *)&root.data = xmmword_3658;
 v4 = binary_tree_sum(&root);
 printf("CMP-L2-14 (binary_tree): %d\n", v4);
 printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x26B0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x26CC */
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
