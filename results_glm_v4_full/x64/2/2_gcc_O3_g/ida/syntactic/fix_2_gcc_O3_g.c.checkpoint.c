/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_gcc_O3_g
 * Processor: pc
 */

#include <emmintrin.h>
#include <stdbool.h>
#include <x86intrin.h>

/* GCC intrinsic for reading FS segment register */
static __inline unsigned long long __attribute__((__always_inline__))
__readfsqword(unsigned long long Offset)
{
  unsigned long long val;
  __asm__ __volatile__ ("movq %%fs:%1,%0" : "=r" (val) : "m" (*(const unsigned long long *)(Offset)));
  return val;
}

/* External declarations */

/* Static data */
static const char *s = "Data Types L1 Tests:";
static const char *asc_33E1 = "Array Types Tests:";
static const char *asc_3454 = "Pointer Types Tests:";
static const char *asc_354A = "Composite Types Tests:";
static const int CSWTCH_61[3] = { 0, 10, 50 };

/* Struct and type definitions */
typedef enum {
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    int x;
    int y;
} Position;

typedef struct {
    int width;
    int height;
} Size;

typedef struct {
    Position position;
    Size size;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct {
    Color fill;
    Color stroke;
} Style;

typedef struct {
    Point3D position;
} Bounds3D;

typedef struct {
    Style style;
    Bounds3D bounds;
} Widget;

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int flag4 : 4;
} Flags;

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

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
    Edge **adjList;
    int numVertices;
} Graph;

typedef struct Device {
    void *data;
    int (*process)(void *);
} Device;




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: main @ 0x10A0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x11C0 */
char process_char(char c)
{
 char result; // al

 result = c + 32;
 if ( (unsigned char)(c - 65) >= 0x1Au )
 return c;
 return result;
}


/* Function: process_short @ 0x11E0 */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_int @ 0x11F0 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x1200 */
long long process_long(long long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x1210 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x1220 */
float process_float(float a1, float f)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1240 */
double process_double(double a1, double d)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1260 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x1270 */
bool process_bool(int x)
{
 bool result; // al

 result = (x & 1) == 0;
 if ( x <= 0 )
 return 0;
 return result;
}


/* Function: const_param @ 0x1290 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x12A0 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x12B0 */
void test_data_types_l1()
{
 puts(s);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x1440 */
int array_1d_stack(int *arr, int n)
{
 const __m128i *v2; // rax
 __m128i v3; // xmm0
 __m128i v4; // xmm2
 int v5; // ecx
 __m128i v6; // xmm0
 int result; // eax
 long long v8; // r8

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v5 = 0;
 result = 0;
 }
 else
 {
 v2 = (const __m128i *)arr;
 v3 = _mm_setzero_si128();
 do
 {
 v4 = _mm_loadu_si128(v2++);
 v3 = _mm_add_epi32(v3, v4);
 }
 while ( v2 != (const __m128i *)&arr[4 * ((unsigned int)n >> 2)] );
 v5 = n & 0x7FFFFFFC;
 v6 = _mm_add_epi32(v3, _mm_srli_si128(v3, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v6, _mm_srli_si128(v6, 4)));
 if ( (n & 3) == 0 )
 return result;
 }
 v8 = v5;
 result += arr[v8];
 if ( n > v5 + 1 )
 {
 result += arr[v8 + 1];
 if ( n > v5 + 2 )
 result += arr[v8 + 2];
 }
 return result;
}


/* Function: array_string @ 0x14F0 */
int array_string(char *str)
{
 long long v1; // rax
 int v2; // r8d

 if ( !*str )
 return 0;
 v1 = 1;
 do
 v2 = v1++;
 while ( str[v1 - 1] );
 return v2;
}


/* Function: array_2d_stack @ 0x1520 */
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


/* Function: array_3d @ 0x1560 */
int array_3d(int (*arr)[5][5])
{
 __m128i v1; // xmm0
 __m128i v2; // xmm0

 v1 = _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&(*arr)[0][4]),
 _mm_loadu_si128((const __m128i *)arr)),
 _mm_loadu_si128((const __m128i *)&(*arr)[1][3])),
 _mm_loadu_si128((const __m128i *)&(*arr)[2][2])),
 _mm_loadu_si128((const __m128i *)&(*arr)[3][1])),
 _mm_loadu_si128((const __m128i *)(*arr)[4])),
 _mm_loadu_si128((const __m128i *)&(*arr)[4][4])),
 _mm_loadu_si128((const __m128i *)&(*arr)[5][3])),
 _mm_loadu_si128((const __m128i *)&(*arr)[6][2])),
 _mm_loadu_si128((const __m128i *)&(*arr)[7][1])),
 _mm_loadu_si128((const __m128i *)(*arr)[8])),
 _mm_loadu_si128((const __m128i *)&(*arr)[8][4])),
 _mm_loadu_si128((const __m128i *)&(*arr)[9][3])),
 _mm_loadu_si128((const __m128i *)&(*arr)[10][2])),
 _mm_loadu_si128((const __m128i *)&(*arr)[11][1])),
 _mm_loadu_si128((const __m128i *)(*arr)[12])),
 _mm_loadu_si128((const __m128i *)&(*arr)[12][4])),
 _mm_loadu_si128((const __m128i *)&(*arr)[13][3])),
 _mm_loadu_si128((const __m128i *)&(*arr)[14][2])),
 _mm_loadu_si128((const __m128i *)&(*arr)[15][1])),
 _mm_loadu_si128((const __m128i *)(*arr)[16])),
 _mm_loadu_si128((const __m128i *)&(*arr)[16][4])),
 _mm_loadu_si128((const __m128i *)&(*arr)[17][3])),
 _mm_loadu_si128((const __m128i *)&(*arr)[18][2])),
 _mm_loadu_si128((const __m128i *)&(*arr)[19][1]));
 v2 = _mm_add_epi32(v1, _mm_srli_si128(v1, 8));
 return (*arr)[24][4]
 + (*arr)[24][3]
 + (*arr)[24][2]
 + (*arr)[24][1]
 + (*arr)[24][0]
 + (*arr)[23][4]
 + (*arr)[23][3]
 + (*arr)[23][2]
 + (*arr)[23][1]
 + (*arr)[23][0]
 + (*arr)[22][4]
 + (*arr)[22][3]
 + (*arr)[22][2]
 + (*arr)[22][1]
 + (*arr)[22][0]
 + (*arr)[21][4]
 + (*arr)[21][3]
 + (*arr)[21][2]
 + (*arr)[21][1]
 + (*arr)[21][0]
 + (*arr)[20][4]
 + (*arr)[20][3]
 + (*arr)[20][2]
 + (*arr)[20][1]
 + (*arr)[20][0]
 + _mm_cvtsi128_si32(_mm_add_epi32(v2, _mm_srli_si128(v2, 4)));
}


/* Function: array_vla @ 0x1730 */
int array_vla(int n, int *arr)
{
 const __m128i *v2; // rax
 __m128i v3; // xmm0
 __m128i v4; // xmm2
 signed int v5; // ecx
 __m128i v6; // xmm0
 int result; // eax
 long long v8; // r8

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v5 = 0;
 result = 0;
 }
 else
 {
 v2 = (const __m128i *)arr;
 v3 = _mm_setzero_si128();
 do
 {
 v4 = _mm_loadu_si128(v2++);
 v3 = _mm_add_epi32(v3, v4);
 }
 while ( v2 != (const __m128i *)&arr[4 * ((unsigned int)n >> 2)] );
 v5 = n & 0xFFFFFFFC;
 v6 = _mm_add_epi32(v3, _mm_srli_si128(v3, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v6, _mm_srli_si128(v6, 4)));
 if ( (n & 3) == 0 )
 return result;
 }
 v8 = v5;
 result += arr[v8];
 if ( n > v5 + 1 )
 {
 result += arr[v8 + 1];
 if ( n > v5 + 2 )
 result += arr[v8 + 2];
 }
 return result;
}


/* Function: array_pointer @ 0x17E0 */
int array_pointer(int (*arr)[10], int n)
{
 int *v2; // rdx
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = &(*arr)[10 * (n - 1) + 10];
 result = 0;
 do
 result += (*arr++)[0];
 while ( arr != (int (*)[10])v2 );
 return result;
}


/* Function: pointer_array @ 0x1820 */
int pointer_array(int **arr, int n)
{
 int result; // eax
 int *v3; // rdx
 int *v4; // rdx
 int *v5; // rdx
 int *v6; // rdx
 int *v7; // rdx
 int *v8; // rdx
 int *v9; // rdx
 int *v10; // rdx
 int *v11; // rdx

 if ( n <= 0 )
 return 0;
 result = 0;
 if ( *arr )
 result = **arr;
 if ( n > 1 )
 {
 v3 = arr[1];
 if ( v3 )
 result += *v3;
 if ( n != 2 )
 {
 v4 = arr[2];
 if ( v4 )
 result += *v4;
 if ( n != 3 )
 {
 v5 = arr[3];
 if ( v5 )
 result += *v5;
 if ( n != 4 )
 {
 v6 = arr[4];
 if ( v6 )
 result += *v6;
 if ( n != 5 )
 {
 v7 = arr[5];
 if ( v7 )
 result += *v7;
 if ( n != 6 )
 {
 v8 = arr[6];
 if ( v8 )
 result += *v8;
 if ( n != 7 )
 {
 v9 = arr[7];
 if ( v9 )
 result += *v9;
 if ( n != 8 )
 {
 v10 = arr[8];
 if ( v10 )
 result += *v10;
 if ( n > 9 )
 {
 v11 = arr[9];
 if ( v11 )
 result += *v11;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: array_complex_index @ 0x18E0 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( (y | x) < 0 || x >= w || y >= h )
 return -1;
 else
 return arr[x + y * w];
}


/* Function: array_oob @ 0x1910 */
int array_oob(int *arr, int n)
{
 unsigned int v3; // edi
 const __m128i *v4; // rax
 __m128i v5; // xmm0
 __m128i v6; // xmm2
 signed int v7; // ecx
 __m128i v8; // xmm0
 int result; // eax
 long long v10; // r8

 if ( n < 0 )
 return 0;
 v3 = n + 1;
 if ( n <= 2 )
 {
 v7 = 0;
 result = 0;
 }
 else
 {
 v4 = (const __m128i *)arr;
 v5 = _mm_setzero_si128();
 do
 {
 v6 = _mm_loadu_si128(v4++);
 v5 = _mm_add_epi32(v5, v6);
 }
 while ( v4 != (const __m128i *)&arr[4 * (v3 >> 2)] );
 v7 = v3 & 0xFFFFFFFC;
 v8 = _mm_add_epi32(v5, _mm_srli_si128(v5, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v8, _mm_srli_si128(v8, 4)));
 if ( (v3 & 3) == 0 )
 return result;
 }
 v10 = v7;
 result += arr[v10];
 if ( n >= v7 + 1 )
 {
 result += arr[v10 + 1];
 if ( n >= v7 + 2 )
 result += arr[v10 + 2];
 }
 return result;
}


/* Function: test_array_types @ 0x19C0 */
void test_array_types()
{
 long long v0; // rax
 int v1; // edx
 char str[6]; // [rsp+2h] [rbp-16h] BYREF
 unsigned long long v4; // [rsp+8h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 puts(asc_33E1);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strcpy(str, "hello");
 v0 = 1;
 do
 v1 = v0++;
 while ( str[v0 - 1] );
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x1AF0 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x1B00 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1B10 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1B20 */
int ptr_increment(int *p, int n)
{
 int *v2; // rdx
 const __m128i *v3; // rax
 __m128i v4; // xmm0
 __m128i v5; // xmm2
 int v6; // ecx
 __m128i v7; // xmm0
 int result; // eax

 v2 = p;
 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v6 = 0;
 result = 0;
 }
 else
 {
 v3 = (const __m128i *)p;
 v4 = _mm_setzero_si128();
 do
 {
 v5 = _mm_loadu_si128(v3++);
 v4 = _mm_add_epi32(v4, v5);
 }
 while ( &p[4 * ((unsigned int)n >> 2)] != (int *)v3 );
 v6 = n & 0x7FFFFFFC;
 v7 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
 v2 = &p[n & 0xFFFFFFFC];
 result = _mm_cvtsi128_si32(_mm_add_epi32(v7, _mm_srli_si128(v7, 4)));
 if ( n == (n & 0xFFFFFFFC) )
 return result;
 }
 result += *v2;
 if ( n > v6 + 1 )
 {
 result += v2[1];
 if ( n > v6 + 2 )
 result += v2[2];
 }
 return result;
}


/* Function: ptr_offset @ 0x1BC0 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1BD0 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1BE0 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(char *)p;
 return -1;
}


/* Function: ptr_const @ 0x1C10 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1C20 */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1C30 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1C40 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [rsp+0h] [rbp-28h] BYREF
 unsigned long long v4; // [rsp+18h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 args[1] = 0;
 args[0] = "test";
 return f(p, args);
}


/* Function: ptr_cast @ 0x1C90 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1CA0 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x1CB0 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x1CC0 */
void test_pointer_types()
{
 puts(asc_3454);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1E30 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1E40 */
int struct_array(Point3D *pts, int n)
{
 int v2; // r8d
 Point3D *v3; // rdx
 int y; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 v3 = &pts[(unsigned int)(n - 1) + 1];
 do
 {
 y = pts->y;
 ++pts;
 v2 += pts[-1].z + pts[-1].x + y;
 }
 while ( v3 != pts );
 return v2;
}


/* Function: struct_nested @ 0x1E90 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x1EA0 */
int struct_deep(Widget *w)
{
 return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0x1EB0 */
int struct_with_ptr(Node *node)
{
 Node *next; // rdx
 int result; // eax

 next = node->next;
 result = node->data;
 if ( next )
 result += next->data;
 return result;
}


/* Function: struct_bitfields @ 0x1ED0 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f >> 6) + ((*(unsigned char *)f >> 3) & 7) + ((*(unsigned char *)f >> 1) & 3) + (*(unsigned char *)f & 1);
}


/* Function: union_type @ 0x1F00 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x1F30 */
int union_array(UnionData *arr, int n)
{
 UnionData *v2; // rax
 __m128i v3; // xmm0
 __m128i v4; // xmm2
 int v5; // ecx
 __m128i v6; // xmm0
 int result; // eax
 long long v8; // r8

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v5 = 0;
 result = 0;
 }
 else
 {
 v2 = arr;
 v3 = _mm_setzero_si128();
 do
 {
 v4 = _mm_loadu_si128((const __m128i *)v2);
 v2 += 4;
 v3 = _mm_add_epi32(v3, v4);
 }
 while ( v2 != &arr[4 * ((unsigned int)n >> 2)] );
 v5 = n & 0x7FFFFFFC;
 v6 = _mm_add_epi32(v3, _mm_srli_si128(v3, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v6, _mm_srli_si128(v6, 4)));
 if ( (n & 3) == 0 )
 return result;
 }
 v8 = v5;
 result += arr[v8].i;
 if ( n > v5 + 1 )
 {
 result += arr[v8 + 1].i;
 if ( n > v5 + 2 )
 result += arr[v8 + 2].i;
 }
 return result;
}


/* Function: enum_type @ 0x1FE0 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1FF0 */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return CSWTCH_61[s];
 return result;
}


/* Function: struct_func_ptr @ 0x2010 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x2020 */
int linked_list(Node *head)
{
 int result; // eax

 for ( result = 0; head; head = head->next )
 result += head->data;
 return result;
}


/* Function: doubly_linked_list @ 0x2050 */
int doubly_linked_list(DNode *head)
{
 int result; // eax

 for ( result = 0; head; head = head->next )
 result += head->data;
 return result;
}


/* Function: binary_tree_sum @ 0x2080 */
int binary_tree_sum(TreeNode *root)
{
 TreeNode *v1; // r11
 TreeNode *v2; // rbx
 int v3; // r10d
 int v4; // r13d
 int v5; // r11d
 TreeNode *v6; // rdx
 TreeNode *v7; // rsi
 int v8; // ecx
 int v9; // r9d
 TreeNode *v10; // rbp
 int v11; // r15d
 int v12; // r8d
 TreeNode *v13; // r13
 TreeNode *v14; // r12
 int v15; // r14d
 int v16; // ebx
 int v17; // eax
 TreeNode *left; // [rsp+8h] [rbp-A0h]
 TreeNode *v20; // [rsp+10h] [rbp-98h]
 TreeNode *v21; // [rsp+18h] [rbp-90h]
 int v22; // [rsp+20h] [rbp-88h]
 int data; // [rsp+24h] [rbp-84h]
 int v24; // [rsp+28h] [rbp-80h]
 int v25; // [rsp+2Ch] [rbp-7Ch]
 int v26; // [rsp+30h] [rbp-78h]
 int v27; // [rsp+34h] [rbp-74h]
 int v28; // [rsp+38h] [rbp-70h]
 int v29; // [rsp+3Ch] [rbp-6Ch]
 TreeNode *v30; // [rsp+40h] [rbp-68h]
 TreeNode *v31; // [rsp+48h] [rbp-60h]
 int i; // [rsp+50h] [rbp-58h]
 int v33; // [rsp+54h] [rbp-54h]
 int v34; // [rsp+60h] [rbp-48h]
 int v35; // [rsp+64h] [rbp-44h]
 int v36; // [rsp+68h] [rbp-40h]
 int v37; // [rsp+6Ch] [rbp-3Ch]

 v21 = root;
 for ( i = 0; v21; v21 = v21->right )
 {
 v25 = 0;
 data = v21->data;
 left = v21->left;
 if ( left )
 {
 do
 {
 v26 = 0;
 v24 = left->data;
 v20 = left->left;
 if ( v20 )
 {
 do
 {
 v27 = 0;
 v1 = v20->left;
 v29 = v20->data;
 if ( v1 )
 {
 do
 {
 v2 = v1->left;
 v3 = 0;
 v28 = v1->data;
 if ( v2 )
 {
 v30 = v1;
 do
 {
 v4 = v2->data;
 v5 = 0;
 v6 = v2->left;
 if ( v6 )
 {
 do
 {
 v7 = v6->left;
 v8 = v6->data;
 v9 = 0;
 if ( v7 )
 {
 do
 {
 v10 = v7->left;
 v11 = 0;
 v22 = v7->data;
 if ( v10 )
 {
 v12 = v4;
 v13 = v2;
 do
 {
 v14 = v10->left;
 v15 = v10->data;
 v16 = 0;
 if ( v14 )
 {
 do
 {
 v37 = v12;
 v36 = v9;
 v35 = v5;
 v34 = v8;
 v33 = v3;
 v31 = v6;
 v17 = v14->data + binary_tree_sum(v14->left);
 v14 = v14->right;
 v16 += v17;
 v6 = v31;
 v3 = v33;
 v8 = v34;
 v5 = v35;
 v9 = v36;
 v12 = v37;
 }
 while ( v14 );
 v15 += v16;
 }
 v10 = v10->right;
 v11 += v15;
 }
 while ( v10 );
 v22 += v11;
 v2 = v13;
 v4 = v12;
 }
 v7 = v7->right;
 v9 += v22;
 }
 while ( v7 );
 v8 += v9;
 }
 v6 = v6->right;
 v5 += v8;
 }
 while ( v6 );
 v4 += v5;
 }
 v2 = v2->right;
 v3 += v4;
 }
 while ( v2 );
 v28 += v3;
 v1 = v30;
 }
 v1 = v1->right;
 v27 += v28;
 }
 while ( v1 );
 v29 += v27;
 }
 v26 += v29;
 v20 = v20->right;
 }
 while ( v20 );
 v24 += v26;
 }
 v25 += v24;
 left = left->right;
 }
 while ( left );
 data += v25;
 }
 i += data;
 }
 return i;
}


/* Function: binary_tree @ 0x22E0 */
int binary_tree(TreeNode *root)
{
 int v1; // r13d
 TreeNode *v2; // rbp
 TreeNode *left; // rbx
 int data; // r12d
 int v5; // r14d
 int v6; // eax

 v1 = 0;
 if ( root )
 {
 v2 = root;
 do
 {
 left = v2->left;
 data = v2->data;
 v5 = 0;
 if ( left )
 {
 do
 {
 v6 = left->data + binary_tree_sum(left->left);
 left = left->right;
 v5 += v6;
 }
 while ( left );
 data += v5;
 }
 v2 = v2->right;
 v1 += data;
 }
 while ( v2 );
 }
 return v1;
}


/* Function: graph_traverse @ 0x2340 */
int graph_traverse(Graph *g)
{
 int numVertices; // eax
 int v2; // r8d
 Graph *v3; // rdx
 Edge *i; // rax

 numVertices = g->numVertices;
 if ( numVertices <= 0 )
 return 0;
 v2 = 0;
 v3 = (Graph *)&g->adjList[(unsigned int)(numVertices - 1) + 1];
 do
 {
 for ( i = g->adjList[0]; i; i = i->next )
 v2 += i->dest;
 g = (Graph *)((char *)g + 8);
 }
 while ( g != v3 );
 return v2;
}


/* Function: test_composite_types @ 0x2390 */
void test_composite_types()
{
 Node *v0; // rax
 int v1; // edx
 int data; // ecx
 DNode *v3; // rax
 int v4; // edx
 Node list[3]; // [rsp+0h] [rbp-78h] BYREF
 DNode dlist[2]; // [rsp+30h] [rbp-48h] BYREF
 unsigned long long v7; // [rsp+68h] [rbp-10h]

 v7 = __readfsqword(0x28u);
 puts(asc_354A);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v0 = &list[1];
 list[1].data = 20;
 list[2].data = 30;
 list[2].next = 0;
 list[1].next = &list[2];
 v1 = 10;
 do
 {
 data = v0->data;
 v0 = v0->next;
 v1 += data;
 }
 while ( v0 );
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v1);
 v3 = &dlist[1];
 dlist[0].data = 10;
 dlist[0].next = &dlist[1];
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 v4 = 10;
 do
 {
 v4 += v3->data;
 v3 = v3->next;
 }
 while ( v3 );
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: .term_proc @ 0x25C0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6020 */

/* FAILED to decompile: puts @ 0x6028 */

/* FAILED to decompile: __stack_chk_fail @ 0x6030 */

/* FAILED to decompile: __printf_chk @ 0x6038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6040 */

/* FAILED to decompile: __gmon_start__ @ 0x6050 */

/* Total functions decompiled: 66, failed: 6 */
