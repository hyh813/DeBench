/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
#ifndef __INT64_TYPE__
typedef long long int64_t;
#endif
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* NEON SIMD types */
typedef struct {
    union {
        int8_t n128_i8[16];
        uint8_t n128_u8[16];
        int16_t n128_i16[8];
        uint16_t n128_u16[8];
        int32_t n128_i32[4];
        uint32_t n128_u32[4];
        int64_t n128_i64[2];
        uint64_t n128_u64[2];
    };
} int8x16_t;

typedef struct {
    union {
        int8_t n128_i8[16];
        uint8_t n128_u8[16];
        int16_t n128_i16[8];
        uint16_t n128_u16[8];
        int32_t n128_i32[4];
        uint32_t n128_u32[4];
        int64_t n128_i64[2];
        uint64_t n128_u64[2];
    };
} int32x4_t;

typedef struct {
    union {
        int8_t n128_i8[16];
        uint8_t n128_u8[16];
        int16_t n128_i16[8];
        uint16_t n128_u16[8];
        int32_t n128_i32[4];
        uint32_t n128_u32[4];
        int64_t n128_i64[2];
        uint64_t n128_u64[2];
    };
} int16x8_t;

/* Struct definitions */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variable declarations */
extern const char *asc_22B8;
extern const char *asc_2428;
extern const char *asc_2628;
extern const char *asc_28D8;
extern const char *aD;
extern const char *aFork_0;
extern const char *byte_25B0;
extern const char *byte_2588;
extern int global_counter;
extern int global_array[10];
extern int counter_1;
extern int extern_global_var;
extern int file_scope_static;
extern int (*global_func_ptr)(int);
extern const char *const_string;
extern int32x4_t xmmword_29D0;
extern int32x4_t xmmword_29E0;
extern unsigned long long xmmword_29F0;
extern unsigned long long xmmword_2A00;
extern unsigned long long xmmword_2A10;
extern unsigned long long xmmword_2A20;

/* Forward function declarations */
long long call_weak_fn();
void JUMPOUT(int);
void test_stack_memory();
void test_heap_memory();
void test_static_global();
void test_memory_op_functions();
int extern_function(int x);

/* NEON intrinsic stubs */
static inline int32x4_t vmulq_n_s32(int32x4_t a, int n) {
    int32x4_t r;
    for (int i = 0; i < 4; i++) r.n128_i32[i] = a.n128_i32[i] * n;
    return r;
}

static inline int32x4_t vaddq_s32(int32x4_t a, int32x4_t b) {
    int32x4_t r;
    for (int i = 0; i < 4; i++) r.n128_i32[i] = a.n128_i32[i] + b.n128_i32[i];
    return r;
}

static inline int32x4_t vshlq_n_s32(int32x4_t a, unsigned int n) {
    int32x4_t r;
    for (int i = 0; i < 4; i++) r.n128_i32[i] = a.n128_i32[i] << n;
    return r;
}

static inline int16x8_t vmovn_s32(int32x4_t a) {
    int16x8_t r;
    for (int i = 0; i < 4; i++) r.n128_i16[i] = (int16_t)a.n128_i32[i];
    return r;
}

static inline int16x8_t vmovn_hight_s32(int32x4_t a) {
    int16x8_t r;
    for (int i = 0; i < 4; i++) r.n128_i16[i+4] = (int16_t)a.n128_i32[i];
    return r;
}

static inline int8x16_t vmovn_s16(int16x8_t a) {
    int8x16_t r;
    for (int i = 0; i < 8; i++) r.n128_i8[i] = (int8_t)a.n128_i16[i];
    return r;
}

static inline int8x16_t vmovn_hight_s16(int16x8_t a) {
    int8x16_t r;
    for (int i = 0; i < 8; i++) r.n128_i8[i+8] = (int8_t)a.n128_i16[i];
    return r;
}

static inline int32_t vaddvq_s32(int32x4_t a) {
    return a.n128_i32[0] + a.n128_i32[1] + a.n128_i32[2] + a.n128_i32[3];
}

/* Helper macros */
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define __dmb(x) __asm__ volatile("dmb sy" ::: "memory")

/* Global variable definitions */
int global_counter = 0;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int counter_1 = 0;
int extern_global_var = 0;
int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
const char *const_string = "test";
int32x4_t xmmword_29D0 = {.n128_i32 = {0}};
int32x4_t xmmword_29E0 = {.n128_i32 = {0}};
unsigned long long xmmword_29F0 = 0;
unsigned long long xmmword_2A00 = 0;
unsigned long long xmmword_2A10 = 0;
unsigned long long xmmword_2A20 = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_gcc_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x990 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_9B0 @ 0x9B0 */
void sub_9B0()
{
 JUMPOUT(0);
}


/* Function: main @ 0xB00 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0xC60 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: alloca_usage_0 @ 0xC70 */
long long alloca_usage_0(int n)
{
 return 15;
}


/* Function: local_vars @ 0xC80 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0xC90 */
int local_array(int n)
{
 return vmulq_n_s32((int32x4_t)xmmword_29D0, n).n128_i32[1];
}


/* Function: local_struct @ 0xCB0 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0xCC0 */
int address_of_local(int *out)
{
 int result; // w0

 result = 42;
 *out = 42;
 return result;
}


/* Function: address_of_array @ 0xCD0 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0xCE0 */
int large_stack_frame()
{
 char *v0; // x0
 int32x4_t v1; // q17
 int32x4_t v2; // q16
 int32x4_t v3; // q7
 int32x4_t v4; // q6
 int32x4_t v5; // q1
 int32x4_t v6; // q0
 char large_buf[2048]; // [xsp+10h] [xbp+10h]
 char v9; // [xsp+810h] [xbp+810h]

 v0 = large_buf;
 v1.n128_u32[0] = 0x10;
 v1.n128_u32[1] = 0x10;
 v1.n128_u32[2] = 0x10;
 v1.n128_u32[3] = 0x10;
 v2.n128_u32[0] = 0x4;
 v2.n128_u32[1] = 0x4;
 v2.n128_u32[2] = 0x4;
 v2.n128_u32[3] = 0x4;
 v3.n128_u32[0] = 0x8;
 v3.n128_u32[1] = 0x8;
 v3.n128_u32[2] = 0x8;
 v3.n128_u32[3] = 0x8;
 v4.n128_u32[0] = 0xC;
 v4.n128_u32[1] = 0xC;
 v4.n128_u32[2] = 0xC;
 v4.n128_u32[3] = 0xC;
 v5 = (int32x4_t)xmmword_29E0;
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v1);
 {
  int32x4_t t1 = vaddq_s32(v6, v2);
  int32x4_t t2 = vaddq_s32(v6, v3);
  int32x4_t t3 = vaddq_s32(v6, v4);
  int16x8_t h1 = vmovn_s16(vmovn_s32(v6));
  int16x8_t h2 = vmovn_hight_s32(t1);
  int16x8_t h3 = vmovn_s32(t2);
  int16x8_t h4 = vmovn_hight_s32(t3);
  int8x16_t r1 = vmovn_s16(h1);
  int8x16_t r2 = vmovn_hight_s16(h2);
  int8x16_t r3 = vmovn_s16(h3);
  int8x16_t r4 = vmovn_hight_s16(h4);
  *(int8x16_t *)v0 = r1;
 }
 v0 += 16;
 }
 while ( &v9 != v0 );
 return (unsigned char)large_buf[1024];
}


/* Function: vla_stack @ 0xD90 */
int vla_stack(int n)
{
 long long v1; // x1
 unsigned long long v2; // x2
 unsigned short v3; // w1
 long long *v4; // x2
 int32x4_t v5; // q2
 int32x4_t *v6; // x1
 int32x4_t v7; // q1
 int32x4_t v8; // q0
 unsigned int v9; // w1
 int v10; // w2
 unsigned int *v11; // x6
 long long v13; // [xsp+0h] [xbp-10010h] BYREF
 unsigned char v14[3]; // [xsp+10h] [xbp-10000h] BYREF
 long long v15; // [xsp+400h] [xbp-FC10h]
 unsigned char v16[16]; // [xsp+10000h] [xbp-10h] BYREF

 if ( (unsigned int)(n - 1) <= 0x3E7 )
 {
 v1 = 4LL * n + 15;
 v2 = v1 & 0xFFFFFFFFFFFF0000LL;
 v3 = v1 & 0xFFF0;
 v4 = (long long *)&v16[-v2];
 if ( v16 != (unsigned char *)v4 )
 {
 do
 v15 = 0;
 while ( &v13 != v4 );
 }
 v13 = 0;
 if ( v3 >= 0x400uLL )
 v15 = 0;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v9 = 0;
 }
 else
 {
 v5.n128_u64[0] = 0x400000004LL;
 v5.n128_u64[1] = 0x400000004LL;
 v6 = (int32x4_t *)v14;
 v7 = (int32x4_t)xmmword_29E0;
 do
 {
 v8 = v7;
 v7 = vaddq_s32(v7, v5);
 *v6++ = vshlq_n_s32(v8, 1u);
 }
 while ( v6 != (int32x4_t *)&v14[16 * ((unsigned int)n >> 2)] );
 v9 = n & 0xFFFFFFFC;
 if ( (n & 3) == 0 )
 return *(unsigned int *)&v14[4 * (n >> 1)];
 }
 v10 = 2 * v9;
 v11 = (unsigned int *)&v14[4 * v9];
 *v11 = 2 * v9;
 if ( (int)(v9 + 1) < n )
 {
 v11[1] = v10 + 2;
 if ( n > (int)(v9 + 2) )
 v11[2] = v10 + 4;
 }
 return *(unsigned int *)&v14[4 * (n >> 1)];
 }
 return -1;
}


/* Function: alloca_usage @ 0xED0 */
int alloca_usage(int n)
{
 long long v1; // x1
 unsigned long long v2; // x2
 unsigned short v3; // w1
 long long *v4; // x2
 int32x4_t v5; // q3
 int32x4_t *v6; // x1
 int32x4_t v7; // q1
 int32x4_t v8; // q2
 int v9; // w1
 int v10; // w2
 unsigned int *v11; // x4
 long long v13; // [xsp+0h] [xbp-10010h] BYREF
 unsigned int v14[252]; // [xsp+10h] [xbp-10000h] BYREF
 long long v15; // [xsp+400h] [xbp-FC10h]
 unsigned char v16[16]; // [xsp+10000h] [xbp-10h] BYREF

 if ( n > 0 )
 {
 v1 = 4LL * n + 15;
 v2 = v1 & 0xFFFFFFFFFFFF0000LL;
 v3 = v1 & 0xFFF0;
 v4 = (long long *)&v16[-v2];
 if ( v16 != (unsigned char *)v4 )
 {
 do
 v15 = 0;
 while ( &v13 != v4 );
 }
 v13 = 0;
 if ( v3 >= 0x400uLL )
 v15 = 0;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v9 = 0;
 }
 else
 {
 v5.n128_u64[0] = 0x400000004LL;
 v5.n128_u64[1] = 0x400000004LL;
 v6 = (int32x4_t *)v14;
 v7 = (int32x4_t)xmmword_29E0;
 do
 {
 v8 = v7;
 v7 = vaddq_s32(v7, v5);
 *v6++ = vaddq_s32(vshlq_n_s32(v8, 1u), v8);
 }
 while ( v6 != (int32x4_t *)&v14[4 * ((unsigned int)n >> 2)] );
 v9 = n & 0x7FFFFFFC;
 if ( (n & 3) == 0 )
 return v14[n >> 1];
 }
 v10 = 3 * v9;
 v14[v9] = 3 * v9;
 if ( v9 + 1 < n )
 {
 v11 = &v14[v9];
 v11[1] = v10 + 3;
 if ( n > v9 + 2 )
 v11[2] = v10 + 6;
 }
 return v14[n >> 1];
 }
 return -1;
}


/* Function: stack_alias @ 0x1010 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x1020 */
void test_stack_memory()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0

 puts(asc_22B8);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 v1 = __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v2 = alloca_usage_0(v1);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v2);
 __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10F4 */
int heap_basic(int n)
{
 int32x4_t *v2; // x0
 int32x4_t v3; // q2
 int32x4_t *v4; // x1
 int32x4_t v5; // q1
 int32x4_t v6; // q0
 int v7; // w1
 int v8; // w2
 char *v9; // x3
 int v10; // w19

 v2 = (int32x4_t *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v7 = 0;
 goto LABEL_7;
 }
 v3.n128_u64[0] = 0x400000004LL;
 v3.n128_u64[1] = 0x400000004LL;
 v4 = v2;
 v5 = (int32x4_t)xmmword_29E0;
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v3);
 *v4++ = vshlq_n_s32(v6, 1u);
 }
 while ( v4 != &v2[(unsigned int)n >> 2] );
 v7 = n & 0x7FFFFFFC;
 if ( (n & 3) != 0 )
 {
LABEL_7:
 v8 = 2 * v7;
 v2->n128_u32[v7] = 2 * v7;
 if ( n > v7 + 1 )
 {
 v9 = (char *)v2 + 4 * v7;
 *((unsigned int *)v9 + 1) = v8 + 2;
 if ( n > v7 + 2 )
 *((unsigned int *)v9 + 2) = v8 + 4;
 }
 }
 }
 v10 = v2->n128_i32[n / 2];
 free(v2);
 return v10;
}


/* Function: heap_calloc @ 0x11D0 */
int heap_calloc(int n)
{
 int32x4_t *v2; // x0
 int32x4_t *v3; // x1
 int32x4_t v4; // q0
 int32x4_t v5; // t1
 int v6; // w1
 int v7; // w19
 char *v8; // x2

 v2 = (int32x4_t *)calloc(n, 4u);
 if ( !v2 )
 return -1;
 if ( n <= 0 )
 {
 v7 = 0;
 }
 else
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v6 = 0;
 v7 = 0;
 goto LABEL_7;
 }
 v3 = v2;
 v4.n128_u32[0] = 0;
 v4.n128_u32[1] = 0;
 v4.n128_u32[2] = 0;
 v4.n128_u32[3] = 0;
 do
 {
 v5 = *v3++;
 v4 = vaddq_s32(v4, v5);
 }
 while ( v3 != &v2[(unsigned int)n >> 2] );
 v6 = n & 0x7FFFFFFC;
 v7 = vaddvq_s32(v4);
 if ( (n & 3) != 0 )
 {
LABEL_7:
 v7 += v2->n128_i32[v6];
 if ( n > v6 + 1 )
 {
 v8 = (char *)v2 + 4 * v6;
 v7 += *((unsigned int *)v8 + 1);
 if ( n > v6 + 2 )
 v7 += *((unsigned int *)v8 + 2);
 }
 }
 }
 free(v2);
 return v7;
}


/* Function: heap_realloc @ 0x12A4 */
int heap_realloc()
{
 unsigned int *v0; // x0
 void *v1; // x19
 char *v2; // x0
 int v3; // w19
 void *v5; // x0

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v0[4] = 5;
 v1 = v0;
 *(unsigned long long *)v0 = xmmword_29F0;
 v2 = (char *)realloc(v0, 0x28u);
 if ( v2 )
 {
 if ( *((unsigned int *)v2 + 2) == 3 )
 v3 = 50;
 else
 v3 = -3;
 *(unsigned long long *)(v2 + 20) = xmmword_2A00;
 free(v2);
 }
 else
 {
 v5 = v1;
 v3 = -2;
 free(v5);
 }
 return v3;
}


/* Function: heap_array @ 0x1330 */
int heap_array(int n)
{
 int32x4_t *v2; // x0
 int32x4_t v3; // q3
 int32x4_t *v4; // x1
 int32x4_t v5; // q1
 int32x4_t v6; // q2
 int v7; // w1
 int v8; // w2
 char *v9; // x3
 int v10; // w19

 v2 = (int32x4_t *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v7 = 0;
 goto LABEL_7;
 }
 v3.n128_u64[0] = 0x400000004LL;
 v3.n128_u64[1] = 0x400000004LL;
 v4 = v2;
 v5 = (int32x4_t)xmmword_29E0;
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v3);
 *v4++ = vaddq_s32(vshlq_n_s32(v6, 1u), v6);
 }
 while ( v4 != &v2[(unsigned int)n >> 2] );
 v7 = n & 0x7FFFFFFC;
 if ( (n & 3) != 0 )
 {
LABEL_7:
 v8 = 3 * v7;
 v2->n128_u32[v7] = 3 * v7;
 if ( n > v7 + 1 )
 {
 v9 = (char *)v2 + 4 * v7;
 *((unsigned int *)v9 + 1) = v8 + 3;
 if ( n > v7 + 2 )
 *((unsigned int *)v9 + 2) = v8 + 6;
 }
 }
 }
 v10 = v2->n128_i32[n / 2];
 free(v2);
 return v10;
}


/* Function: heap_struct @ 0x1410 */
int heap_struct(int x)
{
 void *v2; // x0
 int v3; // w19

 v2 = malloc(8u);
 if ( !v2 )
 return -1;
 v3 = 3 * x;
 free(v2);
 return v3;
}


/* Function: heap_nested @ 0x1450 */
int heap_nested(Node **head)
{
 Node *v2; // x0
 Node *v3; // x19
 Node *v4; // x0
 Node *v5; // x1
 int result; // w0

 v2 = (Node *)malloc(0x10u);
 *head = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 v2->data = 10;
 v4 = (Node *)malloc(0x10u);
 v3->next = v4;
 v5 = v4;
 if ( v4 )
 {
 result = 0;
 v5->data = 20;
 v5->next = 0;
 }
 else
 {
 free(v3);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0x14C4 */
int linked_list_heap()
{
 int v0; // w20
 unsigned long long *v1; // x19
 unsigned long long *i; // x21
 unsigned long long *v3; // x0
 unsigned long long *v4; // x0
 int v5; // w20
 int v6; // w1
 void *v7; // x0
 void *v9; // x0

 v0 = 0;
 v1 = 0;
 for ( i = 0; ; i = v3 )
 {
 v3 = malloc(0x10u);
 if ( !v3 )
 break;
 *(unsigned int *)v3 = v0;
 v3[1] = 0;
 if ( v1 )
 {
 v0 += 10;
 i[1] = (unsigned long long)v3;
 if ( v0 == 50 )
 goto LABEL_7;
 }
 else
 {
 v0 += 10;
 v1 = v3;
 if ( v0 == 50 )
 {
LABEL_7:
 v4 = v1;
 v5 = 0;
 do
 {
 v6 = *(unsigned int *)v4;
 v4 = (unsigned long long *)v4[1];
 v5 += v6;
 }
 while ( v4 );
 do
 {
 v7 = v1;
 v1 = (unsigned long long *)v1[1];
 free(v7);
 }
 while ( v1 );
 return v5;
 }
 }
 }
 while ( v1 )
 {
 v9 = v1;
 v1 = (unsigned long long *)v1[1];
 free(v9);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1580 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // x0

 result = (TreeNode *)malloc(0x18u);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x15B0 */
int tree_heap_traversal()
{
 void *v0; // x0
 void *v1; // x19
 void *v2; // x20
 void *v3; // x21
 void *v5; // x0

 v0 = malloc(0x18u);
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = malloc(0x18u);
 if ( !v2 )
 {
 v5 = malloc(0x18u);
 if ( v5 )
 free(v5);
 goto LABEL_7;
 }
 v3 = malloc(0x18u);
 if ( !v3 )
 {
 free(v2);
LABEL_7:
 free(v1);
 return -2;
 }
 free(v2);
 free(v3);
 free(v1);
 return 60;
}


/* Function: memory_leak @ 0x1660 */
int memory_leak(int n)
{
 int32x4_t *v2; // x0
 int32x4_t v3; // q2
 int32x4_t *v4; // x1
 int32x4_t v5; // q0
 int32x4_t v6; // q1
 int v7; // w1
 int v8; // w3
 char *v9; // x2
 int v10; // w1

 v2 = (int32x4_t *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v7 = 0;
 goto LABEL_7;
 }
 v3.n128_u64[0] = 0x400000004LL;
 v3.n128_u64[1] = 0x400000004LL;
 v4 = v2;
 v5 = (int32x4_t)xmmword_29E0;
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v3);
 *v4++ = v6;
 }
 while ( v4 != &v2[(unsigned int)n >> 2] );
 v7 = n & 0x7FFFFFFC;
 if ( (n & 3) != 0 )
 {
LABEL_7:
 v8 = v7 + 1;
 v2->n128_u32[v7] = v7;
 if ( n > v7 + 1 )
 {
 v9 = (char *)v2 + 4 * v7;
 v10 = v7 + 2;
 *((unsigned int *)v9 + 1) = v8;
 if ( n > v10 )
 *((unsigned int *)v9 + 2) = v10;
 }
 }
 }
 return v2->n128_i32[n / 2];
}


/* Function: dangling_pointer @ 0x1720 */
int dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1770 */
int double_free(int *p)
{
 void *v2; // x0
 void *v3; // x19

 if ( p )
 return *p;
 v2 = malloc(4u);
 v3 = v2;
 if ( !v2 )
 return -1;
 free(v2);
 free(v3);
 return -2;
}


/* Function: heap_overflow @ 0x17C0 */
int heap_overflow()
{
 void *v0; // x0

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 free(v0);
 return 0;
}


/* Function: test_heap_memory @ 0x17F0 */
void test_heap_memory()
{
 unsigned long long *v0; // x0
 int v1; // w2
 int32x4_t *v2; // x0
 int v3; // w19
 int v4; // w0
 unsigned long long *v5; // x0
 int v6; // w2
 void *v7; // x0
 int v8; // w2
 void **v9; // x19
 unsigned int *v10; // x0
 int v11; // w2
 int v12; // w20
 unsigned long long *v13; // x21
 unsigned long long *v14; // x19
 unsigned long long *v15; // x0
 unsigned long long *v16; // x0
 int v17; // w20
 int v18; // w1
 void *v19; // x0
 int v20; // w0
 unsigned int *v21; // x0
 int v22; // w2
 int v23; // w0
 unsigned int *v24; // x19
 long long v25; // x2
 void *v26; // x0
 int status; // [xsp+34h] [xbp+34h] BYREF

 puts(asc_2428);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 v0[1] = xmmword_2A10;
 *((unsigned long long *)v0 + 4) = 0x1200000010LL;
 free(v0);
 v1 = 10;
 }
 else
 {
 v1 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
 v2 = (int32x4_t *)calloc(5u, 4u);
 if ( v2 )
 {
 v3 = vaddvq_s32(*v2) + v2[1].n128_u32[0];
 free(v2);
 }
 else
 {
 v3 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v3);
 v4 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v4);
 v5 = malloc(0x28u);
 if ( v5 )
 {
 v5[1] = xmmword_2A20;
 *((unsigned long long *)v5 + 4) = 0x1B00000018LL;
 free(v5);
 v6 = 15;
 }
 else
 {
 v6 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v6);
 v7 = malloc(8u);
 if ( v7 )
 {
 free(v7);
 v8 = 15;
 }
 else
 {
 v8 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
 v9 = (void **)malloc(0x10u);
 if ( v9 )
 {
 v10 = malloc(0x10u);
 v9[1] = v10;
 if ( v10 )
 {
 v11 = 0;
 *v10 = 20;
 *((unsigned long long *)v10 + 1) = 0;
 }
 else
 {
 free(v9);
 v11 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v11);
 free(v9[1]);
 free(v9);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v12 = 0;
 v13 = 0;
 v14 = 0;
 while ( 1 )
 {
 v15 = malloc(0x10u);
 if ( !v15 )
 break;
 *(unsigned int *)v15 = v12;
 v12 += 10;
 v15[1] = 0;
 if ( v14 )
 {
 v13[1] = (unsigned long long)v15;
 if ( v12 == 50 )
 goto LABEL_19;
 }
 else
 {
 v14 = v15;
 if ( v12 == 50 )
 {
LABEL_19:
 v16 = v14;
 v17 = 0;
 do
 {
 v18 = *(unsigned int *)v16;
 v16 = (unsigned long long *)v16[1];
 v17 += v18;
 }
 while ( v16 );
 do
 {
 v19 = v14;
 v14 = (unsigned long long *)v14[1];
 free(v19);
 }
 while ( v14 );
 goto LABEL_22;
 }
 }
 v13 = v15;
 }
 while ( v14 )
 {
 v26 = v14;
 v14 = (unsigned long long *)v14[1];
 free(v26);
 }
 v17 = -1;
LABEL_22:
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v17);
 v20 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v20);
 v21 = malloc(0x14u);
 if ( v21 )
 {
 v22 = 2;
 v21[4] = 4;
 *(unsigned long long *)v21 = xmmword_29E0.n128_u64[0];
 }
 else
 {
 v22 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v22);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v23 = fork();
 if ( !v23 )
 {
 v24 = (unsigned int *)malloc(4u);
 if ( v24 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v24);
 v25 = *v24;
 }
 else
 {
 v25 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aD, v25);
 exit(0);
 }
 if ( v23 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v23, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( ((status & 0x7F) + 1) << 24 >> 25 > 0 )
 __printf_chk(1, byte_25B0);
 }
 else
 {
 __printf_chk(1, byte_2588, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x1BD0 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1BE4 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1BF4 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x1C14 */
int static_local(int reset)
{
 int result; // w0

 if ( reset )
 {
 result = 0;
 counter_1 = 0;
 }
 else
 {
 return ++counter_1;
 }
 return result;
}


/* Function: call_static_func @ 0x1C50 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x1C60 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1C74 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1C80 */
int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x1C94 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1CA0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1CB0 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1CC0 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x1CD0 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1CE0 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1CF0 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x1D10 */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1D24 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1D30 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x1D40 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1D50 */
void test_static_global()
{
 int v0; // w0

 puts(asc_2628);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", *((unsigned char *)const_string + 4) + 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x1F40 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 bool v3; // zf

 if ( buf )
 v3 = size == 0;
 else
 v3 = 1;
 if ( v3 )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x1F84 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 bool v3; // zf
 size_t v6; // x20

 if ( src )
 v3 = n == 0;
 else
 v3 = 1;
 if ( v3 || dst == 0 )
 return -1;
 v6 = n & 0xFFFFFFFFFFFFFFFCLL;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + v6 - 4);
}


/* Function: memop_memmove @ 0x1FD0 */
int memop_memmove(void *buf, size_t n)
{
 bool v2; // cc

 if ( buf )
 v2 = n > 1;
 else
 v2 = 0;
 if ( !v2 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((unsigned char *)buf + 1);
}


/* Function: memop_memcmp @ 0x2014 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 bool v3; // zf
 int result; // w0
 int v6; // w0
 bool v7; // cc

 if ( p2 )
 v3 = n == 0;
 else
 v3 = 1;
 if ( v3 || p1 == 0 )
 return 0;
 v6 = memcmp(p1, p2, n);
 v7 = v6 <= 0;
 if ( v6 )
 result = -1;
 else
 result = 0;
 if ( !v7 )
 return 1;
 return result;
}


/* Function: memop_bzero @ 0x2050 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2090 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 bool v3; // zf

 if ( dst )
 v3 = n == 0;
 else
 v3 = 1;
 if ( v3 || src == 0 )
 return -1;
 else
 return *(unsigned char *)memmove(dst, src, n);
}


/* Function: memop_unaligned_access @ 0x20D0 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x20E4 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // w1

 if ( !flag )
 return -1;
 v1 = *flag;
 __dmb(0xBu);
 return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x2104 */
void test_memory_op_functions()
{
 int v0; // w0
 int v1; // w2
 volatile int flag; // [xsp+24h] [xbp+24h]
 int cmp_a[3]; // [xsp+28h] [xbp+28h] BYREF
 int cmp_b[3]; // [xsp+38h] [xbp+38h] BYREF
 char zero_buf[10]; // [xsp+48h] [xbp+48h] BYREF
 char move_buf[16]; // [xsp+58h] [xbp+58h] BYREF
 char buffer[256]; // [xsp+68h] [xbp+68h] BYREF

 puts(asc_28D8);
 memset(buffer, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy(move_buf, "HelloWorld");
 memmove(&move_buf[1], move_buf, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 cmp_a[2] = 3;
 cmp_b[2] = 4;
 *(unsigned long long *)cmp_a = 0x200000001LL;
 *(unsigned long long *)cmp_b = 0x200000001LL;
 v0 = memcmp(cmp_a, cmp_b, 0xCu);
 if ( v0 )
 v1 = -1;
 else
 v1 = 0;
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 memset(zero_buf, 0, sizeof(zero_buf));
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 flag = 5;
 __dmb(0xBu);
 __printf_chk(1, "MEMOP-L3-02: %d\n", flag + 5);
}


/* Function: extern_function @ 0x2290 */
int extern_function(int x)
{
 return 3 * x;
}


/* Function: .term_proc @ 0x2298 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x14098 */

/* FAILED to decompile: memmove @ 0x140A0 */

/* FAILED to decompile: exit @ 0x140A8 */

/* FAILED to decompile: __libc_start_main @ 0x140B0 */

/* FAILED to decompile: perror @ 0x140B8 */

/* FAILED to decompile: __cxa_finalize @ 0x140C0 */

/* FAILED to decompile: fork @ 0x140C8 */

/* FAILED to decompile: malloc @ 0x140D0 */

/* FAILED to decompile: __printf_chk @ 0x140D8 */

/* FAILED to decompile: memset @ 0x140E0 */

/* FAILED to decompile: calloc @ 0x140E8 */

/* FAILED to decompile: realloc @ 0x140F0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140F8 */

/* FAILED to decompile: abort @ 0x14108 */

/* FAILED to decompile: puts @ 0x14110 */

/* FAILED to decompile: memcmp @ 0x14118 */

/* FAILED to decompile: free @ 0x14120 */

/* FAILED to decompile: waitpid @ 0x14128 */

/* FAILED to decompile: __gmon_start__ @ 0x14138 */

/* Total functions decompiled: 66, failed: 19 */
