/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/2/2_gcc_O2_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

/* Compiler intrinsics and macros */
#ifndef __INT128_DEFINED
#define __INT128_DEFINED
typedef unsigned __int128 uint128_t;
typedef __int128 int128_t;
#endif

#define LODWORD(x) ((unsigned long long)(x))
#define HIDWORD(x) (*((unsigned long long*)&(x) + 1))
#define LOWORD(x) ((unsigned int)(x))
#define HIWORD(x) (*((unsigned int*)&(x) + 1))
#define LOBYTE(x) ((unsigned char)(x))
#define HIBYTE(x) ((unsigned char)(((uint16_t)(x)) >> 8))
#define _ReadStatusReg(reg) ({ unsigned long long _val; __asm__ volatile("mrs %0, " #reg : "=r"(_val)); _val; })
/* Macro for 128-bit pair operations - used as rvalue only */
#define __PAIR128__(hi, lo) ((__int128)(((unsigned __int128)(hi) << 64) | (unsigned __int128)(lo)))
/* Macro for 128-bit pair subtraction */
#define __PAIR128_SUB__(a, b) (__PAIR128__(*((unsigned long long*)&(a) + 1), *(unsigned long long*)&(a)) - __PAIR128__(*((unsigned long long*)&(b) + 1), *(unsigned long long*)&(b)))
#define __CFADD__(a, b) ({ unsigned long long _a = (a), _b = (b); (_a + _b) < _a; })
#define _sfp_handle_exceptions(x) (x)

/* Macro for 128-bit pair operations - used as rvalue only (for compatibility) */
#define __PAIR128_R__(hi, lo) (((unsigned __int128)(hi) << 64) | (unsigned __int128)(lo))

/* Helper function for count-leading-zeros on 64-bit values */
static inline int __clz_helper(unsigned long long x) {
    return __builtin_clzll(x);
}
#define __clz(x) __clz_helper(x)

/* External function declarations */
int __printf_chk(int flag, const char *format, ...);

/* Type definitions */
/* Type definitions for 128-bit operations */
typedef unsigned long long __n128_u64[2];
typedef union __n128_t {
 unsigned long long n128_u64[2];
 unsigned long long u64[2];
} __n128_t;
typedef __n128_t __n128;
typedef __n128_t __n128_tt;

/* Helper function for 128-bit pair operations - used as rvalue */
static inline unsigned __int128 make_uint128(unsigned long long hi, unsigned long long lo) {
    return (((unsigned __int128)(hi) << 64) | (unsigned __int128)(lo));
}

typedef int _BOOL8;

typedef int _BOOL8;

/* ARM FPCR register definition */
#define FPCR "fpsr"

/* Struct definitions */
typedef struct {
 int x;
 int y;
 int z;
} Point3D;

typedef struct Node {
 int data;
 struct Node *next;
} Node;

typedef struct DNode {
 int data;
 struct DNode *next;
 struct DNode *prev;
} DNode;

typedef struct {
 int x;
 int y;
} Point2D;

typedef struct {
 Point2D position;
 struct {
  int width;
  int height;
 } size;
} Rect;

typedef struct {
 unsigned char r;
 unsigned char g;
 unsigned char b;
 unsigned char a;
} Color;

typedef struct {
 Point2D position;
 int width;
 int height;
} Bounds;

typedef struct {
 Bounds bounds;
 struct {
  Color fill;
 } style;
} Widget;

typedef struct {
 unsigned int flags;
} Flags;

typedef enum {
 STATE_STARTED = 0,
 STATE_RUNNING = 1,
 STATE_PAUSED = 2,
 STATE_STOPPED = 3
} State;

typedef union {
 int i;
 float f;
 unsigned char bytes[4];
} UnionData;

typedef struct {
 int (*process)(void *);
 void *data;
} Device;

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
 Edge *adjList[1];
} Graph;

/* External declarations for string constants */
extern const char asc_2D48[];
extern const char asc_2ED8[];
extern const char asc_3010[];
extern const char asc_31E8[];
extern const unsigned long long qword_3440[];
extern const long double xmmword_3420;
extern const long double xmmword_3430;

/* Function prototypes */
long long call_weak_fn(void);
void JUMPOUT(unsigned long long);
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);

/* Function: .init_proc @ 0x6B8 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_6D0 @ 0x6D0 */
void sub_6D0()
{
 JUMPOUT(0);
}


/* Function: main @ 0x780 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x8E0 */
char process_char(char c)
{
 if ( (unsigned char)(c - 65) <= 0x19u )
 c += 32;
 return c;
}


/* Function: process_short @ 0x900 */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_int @ 0x910 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x920 */
long long process_long(long long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x930 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x940 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x950 */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x964 */
long double process_ld(long double d)
{
 long double result;
 result = d * d + xmmword_3420;
 return result;
}


/* Function: process_bool @ 0x990 */
bool process_bool(int x)
{
 bool v1; // cc
 bool result; // w0

 v1 = x <= 0;
 result = (x & 1) == 0;
 if ( v1 )
 return 0;
 return result;
}


/* Function: const_param @ 0x9A4 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x9B0 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x9C0 */
void test_data_types_l1()
{
 puts(asc_2D48);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", (long double)xmmword_3430);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0xB10 */
int array_1d_stack(int *arr, int n)
{
 long long v3; // x2
 int result; // w0
 int v5; // w3

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = arr[v3++];
 result += v5;
 }
 while ( n > (int)v3 );
 return result;
}


/* Function: array_string @ 0xB50 */
int array_string(char *str)
{
 char *v1; // x3
 long long v2; // x1
 int result; // w0

 if ( !*str )
 return 0;
 v1 = str - 1;
 v2 = 1;
 do
 result = v2++;
 while ( v1[v2] );
 return result;
}


/* Function: array_2d_stack @ 0xB80 */
int array_2d_stack(int (*arr)[10])
{
 int result; // w0
 int *v3; // x3
 int v4; // t1

 result = 0;
 v3 = &(*arr)[110];
 do
 {
 v4 = (*arr)[0];
 arr = (int (*)[10])((char *)arr + 44);
 result += v4;
 }
 while ( arr != (int (*)[10])v3 );
 return result;
}


/* Function: array_3d @ 0xBA4 */
int array_3d(int (*arr)[5][5])
{
 int *v1; // x4
 int *v2; // x5
 int v3; // w1
 int *v4; // x0
 int v5; // w1
 int v6; // w2
 int v7; // w3

 v1 = (*arr)[5];
 v2 = (*arr)[30];
 v3 = 0;
 do
 {
 v4 = v1 - 25;
 do
 {
 v5 = v3 + *v4 + v4[1];
 v6 = v4[2];
 v7 = v4[3];
 v4 += 5;
 v3 = v5 + v6 + v7 + *(v4 - 1);
 }
 while ( v4 != v1 );
 v1 = v4 + 25;
 }
 while ( v4 + 25 != v2 );
 return v3;
}


/* Function: array_vla @ 0xBF4 */
int array_vla(int n, int *arr)
{
 long long v3; // x2
 int result; // w0
 int v5; // w3

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = arr[v3++];
 result += v5;
 }
 while ( n > (int)v3 );
 return result;
}


/* Function: array_pointer @ 0xC30 */
int array_pointer(int (*arr)[10], int n)
{
 int *v2; // x3
 int *v3; // x2
 int result; // w0
 int *v5; // x3
 int v6; // t1

 if ( n <= 0 )
 return 0;
 v2 = &(*arr)[10];
 v3 = (int *)arr;
 result = 0;
 v5 = &v2[10 * (n - 1)];
 do
 {
 v6 = *v3;
 v3 += 10;
 result += v6;
 }
 while ( v3 != v5 );
 return result;
}


/* Function: pointer_array @ 0xC70 */
int pointer_array(int **arr, int n)
{
 int v3; // w3
 long long v4; // x1
 int result; // w0
 int *v6; // x2

 if ( n > 10 )
 v3 = 10;
 else
 v3 = n;
 if ( n <= 0 )
 return 0;
 v4 = 0;
 result = 0;
 do
 {
 v6 = arr[v4++];
 if ( v6 )
 result += *v6;
 }
 while ( v3 > (int)v4 );
 return result;
}


/* Function: array_complex_index @ 0xCC0 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 bool v5; // cc

 v5 = (x | y) >= 0 && x < w;
 if ( v5 && y < h )
 return arr[x + w * y];
 else
 return -1;
}


/* Function: array_oob @ 0xCF0 */
int array_oob(int *arr, int n)
{
 int result; // w0
 int *v4; // x3
 int v5; // t1

 if ( n < 0 )
 return 0;
 result = 0;
 v4 = &arr[n + 1];
 do
 {
 v5 = *arr++;
 result += v5;
 }
 while ( arr != v4 );
 return result;
}


/* Function: test_array_types @ 0xD24 */
void test_array_types()
{
 long long idx; // x0
 int sum; // w2
 int *ptr; // x1
 char *str_ptr; // x0
 int len; // w2
 int ch; // t1
 int *matrix_ptr; // x4
 int row; // w2
 int *row_ptr; // x3
 long long i; // x0
 int val; // w1
 int total; // w2
 int elem; // t1
 int *cube_ptr; // x3
 int *inner_ptr; // x0
 int inner_idx; // w2
 int *outer_ptr; // x4
 int outer_idx; // w2
 int *curr_ptr; // x0
 int curr_idx; // w2
 int x; // w1
 int y; // w3
 int *arr_ptr; // x1
 int j; // w0
 int arr1[5]; // [xsp+10h] [xbp+10h] BYREF
 int v25[20]; // [xsp+28h] [xbp+28h] BYREF
 int matrix[10][10]; // [xsp+78h] [xbp+78h] BYREF
 int cube[5][5][5]; // [xsp+208h] [xbp+208h] BYREF
 char v28; // [xsp+3FCh] [xbp+3FCh] BYREF
 char str[8]; // [xsp+400h] [xbp+400h] BYREF
 long long v30; // [xsp+460h] [xbp+460h] BYREF

 puts(asc_2ED8);
 idx = 1;
 sum = 0;
 *(unsigned long long *)arr1 = 0x200000001LL;
 *(unsigned long long *)&arr1[2] = 0x400000003LL;
 arr1[4] = 5;
 do
 {
 ptr = &arr1[idx++];
 sum += *(ptr - 1);
 }
 while ( idx != 6 );
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", sum);
 str_ptr = &str[1];
 len = 0;
 strcpy(str, "hello");
 do
 {
 ch = (unsigned char)*str_ptr++;
 ++len;
 }
 while ( ch );
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", len);
 matrix_ptr = matrix[0];
 row = 0;
 row_ptr = matrix[0];
 do
 {
 for ( i = 0; i != 10; ++i )
 {
 if ( row == (unsigned int)i )
 val = i;
 else
 val = 0;
 row_ptr[i] = val;
 }
 ++row;
 row_ptr += 10;
 }
 while ( row != 10 );
 total = 0;
 do
 {
 elem = *matrix_ptr;
 matrix_ptr += 11;
 total += elem;
 }
 while ( cube[0][2] != matrix_ptr );
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", total);
 cube_ptr = cube[0][0];
 do
 {
 inner_ptr = cube_ptr;
 inner_idx = 5;
 do
 {
 *inner_ptr = 1;
 inner_ptr[1] = 1;
 --inner_idx;
 inner_ptr[2] = 1;
 inner_ptr[3] = 1;
 inner_ptr += 5;
 *(inner_ptr - 1) = 1;
 }
 while ( inner_idx );
 cube_ptr += 25;
 }
 while ( cube_ptr != (int *)&v28 );
 outer_ptr = cube[1][0];
 outer_idx = 0;
 do
 {
 curr_ptr = outer_ptr - 25;
 do
 {
 curr_idx = outer_idx + *curr_ptr + curr_ptr[1];
 x = curr_ptr[2];
 y = curr_ptr[3];
 curr_ptr += 5;
 outer_idx = curr_idx + x + y + *(curr_ptr - 1);
 }
 while ( curr_ptr != outer_ptr );
 outer_ptr = curr_ptr + 25;
 }
 while ( curr_ptr + 25 != (int *)&v30 );
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", outer_idx);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 arr_ptr = v25;
 for ( j = 0; j != 20; ++j )
 *arr_ptr++ = j;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v25[17]);
}


/* Function: ptr_single @ 0xF64 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0xF70 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0xF80 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0xF94 */
int ptr_increment(int *p, int n)
{
 int *v2; // x2
 int *v3; // x3
 int result; // w0
 int v5; // t1

 v2 = p;
 if ( n <= 0 )
 return 0;
 v3 = &p[n];
 result = 0;
 do
 {
 v5 = *v2++;
 result += v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: ptr_offset @ 0xFC4 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0xFD0 */
int ptr_diff(int *p1, int *p2)
{
 return (unsigned long long)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0xFE0 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned char *)p;
 return -1;
}


/* Function: ptr_const @ 0x1004 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1010 */
int ptr_const_ptr(int *const p)
{
 int result; // w0

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1024 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1030 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [xsp+18h] [xbp+18h] BYREF

 args[0] = "test";
 args[1] = 0;
 return f(p, args);
}


/* Function: ptr_cast @ 0x1090 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x10A0 */
// local variable allocation has failed, the output may be wrong!
void * opaque_handle_create(int size)
{
 void *result; // x0

 *(unsigned long long *)&size = size;
 LODWORD(result) = size;
 return result;
}


/* Function: opaque_handle_op @ 0x10B0 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x10C0 */
void test_pointer_types()
{
 int *v0; // x0
 int v1; // w2
 int v2; // t1
 int arr4[5]; // [xsp+20h] [xbp+20h] BYREF
 char v4; // [xsp+34h] [xbp+34h] BYREF

 puts(asc_3010);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 v0 = arr4;
 v1 = 0;
 *(unsigned long long *)arr4 = 0x200000001LL;
 *(unsigned long long *)&arr4[2] = 0x400000003LL;
 arr4[4] = 5;
 do
 {
 v2 = *v0++;
 v1 += v2;
 }
 while ( v0 != (int *)&v4 );
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
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


/* Function: struct_simple @ 0x1264 */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x1280 */
int struct_array(Point3D *pts, int n)
{
 Point3D *v2; // x3
 Point3D *v3; // x2
 int result; // w0
 Point3D *v5; // x5
 int x; // w1
 int y; // w4

 if ( n <= 0 )
 return 0;
 v2 = pts + 1;
 v3 = pts;
 result = 0;
 v5 = &v2[n - 1];
 do
 {
 x = v3->x;
 y = v3->y;
 ++v3;
 result += x + y + v3[-1].z;
 }
 while ( v3 != v5 );
 return result;
}


/* Function: struct_nested @ 0x12D0 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x12E0 */
int struct_deep(Widget *w)
{
 return w->bounds.position.x + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x12F0 */
int struct_with_ptr(Node *node)
{
 Node *next; // x1
 int result; // w0

 next = node->next;
 result = node->data;
 if ( next )
 result += next->data;
 return result;
}


/* Function: struct_bitfields @ 0x1310 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned int *)f & 1)
 + ((*(unsigned int *)f >> 1) & 3)
 + ((*(unsigned int *)f >> 3) & 7)
 + ((unsigned short)*(unsigned int *)f >> 6);
}


/* Function: union_type @ 0x1334 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x1360 */
int union_array(UnionData *arr, int n)
{
 long long v3; // x2
 int result; // w0
 UnionData v5; // w3

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5.i = (int)arr[v3++];
 result += v5.i;
 }
 while ( n > (int)v3 );
 return result;
}


/* Function: enum_type @ 0x13A0 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x13B0 */
int enum_switch(State s)
{
 if ( (unsigned int)s > STATE_STOPPED )
 return -99;
 else
 return *((unsigned int *)&qword_3440 + (unsigned int)s + 6);
}


/* Function: struct_func_ptr @ 0x13D4 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x13F0 */
int linked_list(Node *head)
{
 int result; // w0
 int data; // w2

 for ( result = 0; head; result += data )
 {
 data = head->data;
 head = head->next;
 }
 return result;
}


/* Function: doubly_linked_list @ 0x1414 */
int doubly_linked_list(DNode *head)
{
 int result; // w0
 int data; // w2

 for ( result = 0; head; result += data )
 {
 data = head->data;
 head = head->next;
 }
 return result;
}


/* Function: binary_tree_sum @ 0x1434 */
int binary_tree_sum(TreeNode *root)
{
 TreeNode *v1; // x1
 int i; // w9
 TreeNode *left; // x4
 int v4; // w11
 int data; // w10
 TreeNode *v6; // x5
 int v7; // w13
 int v8; // w12
 TreeNode *v9; // x6
 int v10; // w15
 int v11; // w14
 int v12; // w18
 TreeNode *v13; // x19
 int v14; // w27
 TreeNode *v15; // x21
 int v16; // w25
 int v17; // w22
 TreeNode *v18; // x2
 int v19; // w7
 int v20; // w28
 int v21; // w8
 TreeNode *v22; // x20
 int v23; // w26
 TreeNode **v24; // x23
 int v25; // w3
 int v26; // w24
 int v27; // w0
 int v28; // w16
 int v30; // [xsp+6Ch] [xbp+6Ch]
 TreeNode *v31; // [xsp+70h] [xbp+70h]
 int v32; // [xsp+78h] [xbp+78h]
 int v33; // [xsp+7Ch] [xbp+7Ch]
 TreeNode *v34; // [xsp+80h] [xbp+80h]
 TreeNode *v35; // [xsp+88h] [xbp+88h]
 int v36; // [xsp+90h] [xbp+90h]
 int v37; // [xsp+94h] [xbp+94h]
 TreeNode *v38; // [xsp+98h] [xbp+98h]
 int v39; // [xsp+A0h] [xbp+A0h]
 int v40; // [xsp+A4h] [xbp+A4h]
 int v41; // [xsp+A8h] [xbp+A8h]
 int v42; // [xsp+B0h] [xbp+B0h]
 int v43; // [xsp+B4h] [xbp+B4h]
 TreeNode *v44; // [xsp+B8h] [xbp+B8h]

 v1 = root;
 for ( i = 0; v1; i += data )
 {
 left = v1->left;
 v4 = 0;
 data = v1->data;
 if ( left )
 {
 do
 {
 v6 = left->left;
 v7 = 0;
 v8 = left->data;
 if ( v6 )
 {
 do
 {
 v9 = v6->left;
 v10 = 0;
 v11 = v6->data;
 if ( v9 )
 {
 while ( 1 )
 {
 do
 {
 v12 = v9->data;
 v13 = v9->left;
 v14 = 0;
 if ( v13 )
 {
 do
 {
 v15 = v13->left;
 v16 = 0;
 v17 = v13->data;
 if ( v15 )
 {
 do
 {
 v18 = v15->left;
 v19 = 0;
 v20 = v15->data;
 if ( v18 )
 {
 do
 {
 v21 = v18->data;
 v22 = v18->left;
 v23 = 0;
 if ( v22 )
 {
 do
 {
 v24 = (TreeNode **)v22->left;
 v25 = 0;
 v26 = v22->data;
 if ( v24 )
 {
 do
 {
 v30 = data;
 v31 = left;
 v32 = v8;
 v33 = v4;
 v34 = v6;
 v35 = v9;
 v36 = v7;
 v37 = v10;
 v38 = v18;
 v39 = v21;
 v40 = v19;
 v41 = v25;
 v42 = v11;
 v43 = i;
 v44 = v1;
 v27 = binary_tree_sum(v24[1]);
 v28 = *(unsigned int *)v24;
 v24 = (TreeNode **)v24[2];
 data = v30;
 v8 = v32;
 v4 = v33;
 v25 = v41 + v27 + v28;
 v7 = v36;
 v10 = v37;
 v21 = v39;
 v19 = v40;
 v11 = v42;
 i = v43;
 left = v31;
 v6 = v34;
 v9 = v35;
 v18 = v38;
 v1 = v44;
 }
 while ( v24 );
 v26 += v25;
 }
 v22 = v22->right;
 v23 += v26;
 }
 while ( v22 );
 v21 += v23;
 }
 v18 = v18->right;
 v19 += v21;
 }
 while ( v18 );
 v20 += v19;
 }
 v15 = v15->right;
 v16 += v20;
 }
 while ( v15 );
 v17 += v16;
 }
 v13 = v13->right;
 v14 += v17;
 }
 while ( v13 );
 v12 += v14;
 }
 v9 = v9->right;
 v10 += v12;
 }
 while ( v9 );
 v6 = v6->right;
 v7 += v11 + v10;
 if ( !v6 )
 {
LABEL_24:
 left = left->right;
 v4 += v8 + v7;
 if ( !left )
 goto LABEL_27;
 while ( 1 )
 {
 v6 = left->left;
 v7 = 0;
 v8 = left->data;
 if ( v6 )
 break;
 left = left->right;
 v4 += v8;
 if ( !left )
 {
LABEL_27:
 v1 = v1->right;
 i += data + v4;
 if ( !v1 )
 return i;
 while ( 1 )
 {
 left = v1->left;
 v4 = 0;
 data = v1->data;
 if ( left )
 break;
 v1 = v1->right;
 i += data;
 if ( !v1 )
 return i;
 }
 }
 }
 }
 while ( 1 )
 {
 v9 = v6->left;
 v10 = 0;
 v11 = v6->data;
 if ( v9 )
 break;
 v6 = v6->right;
 v7 += v11;
 if ( !v6 )
 goto LABEL_24;
 }
 }
 }
 v6 = v6->right;
 v7 += v11;
 }
 while ( v6 );
 v8 += v7;
 }
 left = left->right;
 v4 += v8;
 }
 while ( left );
 data += v4;
 }
 v1 = v1->right;
 }
 return i;
}


/* Function: binary_tree @ 0x1670 */
int binary_tree(TreeNode *root)
{
 int v1; // w20
 TreeNode *v2; // x19
 int v3; // w0
 int data; // w1

 v1 = 0;
 if ( root )
 {
 v2 = root;
 do
 {
 v3 = binary_tree_sum(v2->left);
 data = v2->data;
 v2 = v2->right;
 v1 += v3 + data;
 }
 while ( v2 );
 }
 return v1;
}


/* Function: graph_traverse @ 0x16B4 */
int graph_traverse(Graph *g)
{
 int numVertices; // w5
 long long v3; // x3
 int result; // w0
 Edge *i; // x1
 int dest; // w2

 numVertices = g->numVertices;
 if ( numVertices <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 for ( i = g->adjList[v3]; i; result += dest )
 {
 dest = i->dest;
 i = i->next;
 }
 ++v3;
 }
 while ( numVertices > (int)v3 );
 return result;
}


/* Function: test_composite_types @ 0x1700 */
void test_composite_types()
{
 Node *v0; // x0
 int data; // w1
 int v2; // w2
 DNode *v3; // x0
 int v4; // w1
 int v5; // w2
 int v6; // w0
 Node list[3]; // [xsp+18h] [xbp+18h] BYREF
 DNode dlist[2]; // [xsp+48h] [xbp+48h] BYREF

 puts(asc_31E8);
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
 list[2].next = 0;
 v0 = &list[1];
 data = 10;
 v2 = 0;
 list[1].data = 20;
 list[1].next = &list[2];
 list[2].data = 30;
 while ( 1 )
 {
 v2 += data;
 if ( !v0 )
 break;
 data = v0->data;
 v0 = v0->next;
 }
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v2);
 v3 = dlist;
 v4 = 10;
 v5 = 0;
 dlist[0].data = 10;
 dlist[0].next = &dlist[1];
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 while ( 1 )
 {
 v3 = v3->next;
 v5 += v4;
 if ( !v3 )
 break;
 v4 = v3->data;
 }
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v5);
 v6 = binary_tree_sum(0);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v6 + 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __addtf3 @ 0x1910 */
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
 unsigned long long v24; // x6
 unsigned long long v25; // x0
 int v26; // w4
 unsigned long long v27; // x1
 unsigned long long v28; // x1
 unsigned long long v29; // x2
 unsigned long long v30; // x1
 unsigned long long v31; // x9
 unsigned __int128 v32; // t2
 short v33; // w2
 __n128 result; // q0
 int v35; // w0
 unsigned long long v36; // x1
 unsigned long long v37; // x3
 unsigned long long v38; // x0
 unsigned long long v39; // x7
 unsigned __int128 v40; // kr30_16
 unsigned long long v41; // x1
 unsigned __int128 v42; // t2
 unsigned long long v43; // x1
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
 unsigned __int128 v60; // kr70_16
 unsigned long long v61; // x9
 char v62; // w2
 int v63; // w0
 unsigned long long v64; // x2
 char v65; // w2
 int v66; // w0
 unsigned long long v67; // x2
 unsigned long long v68; // x2
 unsigned long long v69; // x1
 unsigned __int128 v70; // t2
 unsigned long long v71; // x2
 unsigned long long v72; // x1
 unsigned long long v73; // x9
 unsigned long long v74; // x1
 unsigned __int128 v75; // t2
 __n128 v76; // [xsp+10h] [xbp+10h]

 StatusReg = _ReadStatusReg(FPCR);
 v3 = *((unsigned long long *)&a1 + 1) >> 63;
 v4 = (unsigned long long)(*(__int128 *)&a1 >> 61);
 v5 = HIWORD(*((unsigned long long *)&a1 + 1)) & 0x7FFFLL;
 v6 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a1 + 1) >> 63;
 v8 = *((unsigned long long *)&a1 + 1) >> 63;
 v9 = (unsigned long long)(*(__int128 *)&a2 >> 61);
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
 _sfp_handle_exceptions();
 return v76;
 }
 return result;
}


/* Function: __multf3 @ 0x24B0 */
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
 _sfp_handle_exceptions();
 return v95;
 }
 return result;
}


/* Function: __sfp_handle_exceptions @ 0x2CB0 */
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


/* Function: .term_proc @ 0x2D20 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x14080 */

/* FAILED to decompile: __cxa_finalize @ 0x14088 */

/* FAILED to decompile: __printf_chk @ 0x14090 */

/* FAILED to decompile: __stack_chk_fail @ 0x14098 */

/* FAILED to decompile: abort @ 0x140A8 */

/* FAILED to decompile: puts @ 0x140B0 */

/* FAILED to decompile: __gmon_start__ @ 0x140C0 */

/* Total functions decompiled: 67, failed: 7 */
