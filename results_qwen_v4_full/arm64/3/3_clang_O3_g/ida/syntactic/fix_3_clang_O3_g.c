/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdint.h>

/* ARM NEON vector types */
typedef struct int8x16_t {
    union {
        int8_t n128_i8[16];
        int16_t n128_i16[8];
        int32_t n128_i32[4];
        int64_t n128_i64[2];
        uint8_t n128_u8[16];
        uint16_t n128_u16[8];
        uint32_t n128_u32[4];
        uint64_t n128_u64[2];
    };
} int8x16_t;

typedef struct int32x4_t {
    union {
        int8_t n128_i8[16];
        int16_t n128_i16[8];
        int32_t n128_i32[4];
        int64_t n128_i64[2];
        uint8_t n128_u8[16];
        uint16_t n128_u16[8];
        uint32_t n128_u32[4];
        uint64_t n128_u64[2];
    };
} int32x4_t;

/* Linked list node structure */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Tree node structure */
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variables */
static int global_counter = 0;
static int static_local_counter = 0;
static int file_scope_static = 0;
static int (*global_func_ptr)(int) = 0;
static int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static int extern_global_var = 0;
static char const_string[] = "Hello";
static long long global_heap_ptr = 0;

/* Constant data */
static int8x16_t xmmword_1CC0 = {{0}};
static int32x4_t xmmword_1CD0 = {{0}};
static int64_t xmmword_1CE0 = 0x03020100LL;
static int64_t xmmword_1CF0 = 0x07060504LL;

/* String constants */
static char asc_22B9[] = "Stack Memory Tests";
static char asc_22D7[] = "Heap Memory Tests";
static char asc_22F5[] = "Static/Global Memory Tests";
static char asc_2319[] = "Memory Operation Tests";
static char aD[] = "%d";
static char aFork_0[] = "fork";
static char byte_1F9A[] = "Exited with signal %d";
static char byte_1F75[] = "Exited with status %d";
static char aHelloworld[] = "Helloworld";

/* External function declarations */
extern void *malloc(unsigned long size);
extern void free(void *ptr);
extern void *calloc(unsigned long nmemb, unsigned long size);
extern void *realloc(void *ptr, unsigned long size);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void *memset(void *s, int c, unsigned long n);
extern void *memcpy(void *dest, const void *src, unsigned long n);
extern void *memmove(void *dest, const void *src, unsigned long n);
extern int memcmp(const void *s1, const void *s2, unsigned long n);
extern int fork(void);
extern int waitpid(int pid, int *status, int options);
extern void exit(int status);
extern void perror(const char *s);

/* Forward declarations for static functions */
static long long call_weak_fn(void);
static int double_value(int x);
static void test_stack_memory(void);
static void test_heap_memory(void);
static void test_static_global(void);
static void test_memory_op_functions(void);
static int extern_function_impl(int x);

/* CRT stub declarations */

/* ARM NEON intrinsic declarations */

/* ARM NEON intrinsic implementations */
static inline int32x4_t vmulq_s32(int32x4_t a, int32x4_t b)
{
 int32x4_t result;
 result.n128_i32[0] = a.n128_i32[0] * b.n128_i32[0];
 result.n128_i32[1] = a.n128_i32[1] * b.n128_i32[1];
 result.n128_i32[2] = a.n128_i32[2] * b.n128_i32[2];
 result.n128_i32[3] = a.n128_i32[3] * b.n128_i32[3];
 return result;
}

static inline int vaddvq_s32(int32x4_t a)
{
 return a.n128_i32[0] + a.n128_i32[1] + a.n128_i32[2] + a.n128_i32[3];
}

static inline void __dmb(unsigned int opt)
{
 /* Memory barrier - no-op for simulation */
 (void)opt;
}

static inline int32x4_t vshlq_n_s32(int32x4_t a, unsigned int b)
{
 int32x4_t result;
 result.n128_i32[0] = a.n128_i32[0] << b;
 result.n128_i32[1] = a.n128_i32[1] << b;
 result.n128_i32[2] = a.n128_i32[2] << b;
 result.n128_i32[3] = a.n128_i32[3] << b;
 return result;
}

static inline int8x16_t vaddq_s8(int8x16_t a, int8x16_t b)
{
 int8x16_t result;
 result.n128_i8[0] = a.n128_i8[0] + b.n128_i8[0];
 result.n128_i8[1] = a.n128_i8[1] + b.n128_i8[1];
 result.n128_i8[2] = a.n128_i8[2] + b.n128_i8[2];
 result.n128_i8[3] = a.n128_i8[3] + b.n128_i8[3];
 result.n128_i8[4] = a.n128_i8[4] + b.n128_i8[4];
 result.n128_i8[5] = a.n128_i8[5] + b.n128_i8[5];
 result.n128_i8[6] = a.n128_i8[6] + b.n128_i8[6];
 result.n128_i8[7] = a.n128_i8[7] + b.n128_i8[7];
 result.n128_i8[8] = a.n128_i8[8] + b.n128_i8[8];
 result.n128_i8[9] = a.n128_i8[9] + b.n128_i8[9];
 result.n128_i8[10] = a.n128_i8[10] + b.n128_i8[10];
 result.n128_i8[11] = a.n128_i8[11] + b.n128_i8[11];
 result.n128_i8[12] = a.n128_i8[12] + b.n128_i8[12];
 result.n128_i8[13] = a.n128_i8[13] + b.n128_i8[13];
 result.n128_i8[14] = a.n128_i8[14] + b.n128_i8[14];
 result.n128_i8[15] = a.n128_i8[15] + b.n128_i8[15];
 return result;
}

static inline int32x4_t vaddq_s32(int32x4_t a, int32x4_t b)
{
 int32x4_t result;
 result.n128_i32[0] = a.n128_i32[0] + b.n128_i32[0];
 result.n128_i32[1] = a.n128_i32[1] + b.n128_i32[1];
 result.n128_i32[2] = a.n128_i32[2] + b.n128_i32[2];
 result.n128_i32[3] = a.n128_i32[3] + b.n128_i32[3];
 return result;
}

/* Helper macros */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_clang_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x8C8 */
static long long init_proc(void)
{
 return call_weak_fn();
}


/* Function: sub_8E0 @ 0x8E0 */
static void sub_8E0(void)
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function */
static long long call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0xB54 */
static int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0xB60 */
static int local_array(int n)
{
 return 5 * n;
}


/* Function: local_struct @ 0xB68 */
static int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0xB70 */
static int address_of_local(int *out)
{
 int result; // w0

 result = 42;
 *out = 42;
 return result;
}


/* Function: address_of_array @ 0xB84 */
static int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0xB90 */
static int large_stack_frame()
{
 long long v0; // x8
 int8x16_t v1; // q0
 int8x16_t v2; // q1
 int8x16_t v3; // q2
 int8x16_t *v4; // x10
 unsigned char v6[2048]; // [xsp+0h] [xbp-810h] BYREF

 v0 = 0;
 v1.n128_u64[0] = 0x1010101010101010LL;
 v1.n128_u64[1] = 0x1010101010101010LL;
 v2.n128_u64[0] = 0x2020202020202020LL;
 v2.n128_u64[1] = 0x2020202020202020LL;
 v3 = (int8x16_t)xmmword_1CC0;
 do
 {
 v4 = (int8x16_t *)&v6[v0];
 v0 += 32;
 *v4 = v3;
 v4[1] = vaddq_s8(v3, v1);
 v3 = vaddq_s8(v3, v2);
 }
 while ( v0 != 2048 );
 return v6[1024];
}


/* Function: vla_stack @ 0xBDC */
static int vla_stack(int n)
{
 long long v1; // x29
 long long v2; // x30
 int32x4_t *v4; // x8
 long long v5; // x10
 int32x4_t v6; // q0
 long long v7; // x12
 int32x4_t v8; // q1
 int32x4_t *v9; // x11
 int32x4_t v10; // q2
 int v11; // w11
 char *v12; // x12
 long long v13; // x9
 int v14; // w9
 unsigned long long v15[2]; // [xsp+0h] [xbp-10h] BYREF

 if ( (unsigned int)(n - 1001) < 0xFFFFFC18 )
 return -1;
 v15[0] = v1;
 v15[1] = v2;
 v4 = (int32x4_t *)((char *)v15 - ((4LL * (unsigned int)n + 15) & 0x7FFFFFFF0LL));
 if ( (unsigned int)n < 8 )
 {
 v5 = 0;
LABEL_8:
 v11 = 2 * v5;
 v12 = (char *)v4 + 4 * v5;
 v13 = (unsigned int)n - v5;
 do
 {
 *(unsigned int *)v12 = v11;
 v12 += 4;
 v11 += 2;
 --v13;
 }
 while ( v13 );
 goto LABEL_10;
 }
 v5 = n & 0xFFFFFFF8;
 v6.n128_u64[0] = 0x800000008LL;
 v6.n128_u64[1] = 0x800000008LL;
 v7 = v5;
 v8 = (int32x4_t)xmmword_1CD0;
 v9 = v4 + 1;
 do
 {
 v10 = vshlq_n_s32(v8, 1u);
 v7 -= 8;
 v8 = vaddq_s32(v8, v6);
 v9[-1] = v10;
 *v9 = vaddq_s32(v10, v6);
 v9 += 2;
 }
 while ( v7 );
 if ( v5 != n )
 goto LABEL_8;
LABEL_10:
 if ( n >= 0 )
 v14 = n;
 else
 v14 = n + 1;
 return v4->n128_i32[v14 >> 1];
}


/* Function: alloca_usage @ 0xCA0 */
static int alloca_usage(int n)
{
 long long v1; // x29
 long long v2; // x30
 int32x4_t *v3; // x8
 long long v4; // x10
 int32x4_t v6; // q0
 long long v7; // x12
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int32x4_t *v11; // x11
 int32x4_t v12; // q4
 int v13; // w11
 char *v14; // x12
 long long v15; // x9
 unsigned long long v16[2]; // [xsp+0h] [xbp-10h] BYREF

 if ( n < 1 )
 return -1;
 v16[0] = v1;
 v16[1] = v2;
 v3 = (int32x4_t *)((char *)v16 - ((4LL * (unsigned int)n + 15) & 0x7FFFFFFF0LL));
 if ( (unsigned int)n >= 8 )
 {
 v4 = n & 0xFFFFFFF8;
 v6.n128_u64[0] = 0x300000003LL;
 v6.n128_u64[1] = 0x300000003LL;
 v7 = v4;
 v8.n128_u64[0] = 0xC0000000CLL;
 v8.n128_u64[1] = 0xC0000000CLL;
 v9.n128_u64[0] = 0x800000008LL;
 v9.n128_u64[1] = 0x800000008LL;
 v10 = (int32x4_t)xmmword_1CD0;
 v11 = v3 + 1;
 do
 {
 v12 = vmulq_s32(v10, v6);
 v7 -= 8;
 v10 = vaddq_s32(v10, v9);
 v11[-1] = v12;
 *v11 = vaddq_s32(v12, v8);
 v11 += 2;
 }
 while ( v7 );
 if ( v4 == n )
 return v3->n128_i32[n >> 1];
 }
 else
 {
 v4 = 0;
 }
 v13 = 3 * v4;
 v14 = (char *)v3 + 4 * v4;
 v15 = (unsigned int)n - v4;
 do
 {
 *(unsigned int *)v14 = v13;
 v14 += 4;
 v13 += 3;
 --v15;
 }
 while ( v15 );
 return v3->n128_i32[n >> 1];
}


/* Function: stack_alias @ 0xD60 */
static long long stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0xD68 */
static void test_stack_memory()
{
 long long v0; // x8
 int8x16_t v1; // q0
 int8x16_t v2; // q1
 int8x16_t v3; // q2
 int8x16_t *v4; // x10
 unsigned char v5[2048]; // [xsp+0h] [xbp-800h] BYREF

 puts(asc_22B9);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = 0;
 v1.n128_u64[0] = 0x1010101010101010LL;
 v1.n128_u64[1] = 0x1010101010101010LL;
 v2.n128_u64[0] = 0x2020202020202020LL;
 v2.n128_u64[1] = 0x2020202020202020LL;
 v3 = (int8x16_t)xmmword_1CC0;
 do
 {
 v4 = (int8x16_t *)&v5[v0];
 v0 += 32;
 *v4 = v3;
 v4[1] = vaddq_s8(v3, v1);
 v3 = vaddq_s8(v3, v2);
 }
 while ( v0 != 2048 );
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5[1024]);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xE54 */
static int heap_basic(int n)
{
 int32x4_t *v2; // x0
 long long v3; // x9
 int32x4_t v5; // q0
 long long v6; // x11
 int32x4_t v7; // q1
 int32x4_t *v8; // x10
 int32x4_t v9; // q2
 int v10; // w10
 unsigned int *v11; // x11
 long long v12; // x8
 int v13; // w8
 int v14; // w19

 v2 = (int32x4_t *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
LABEL_9:
 v10 = 2 * v3;
 v11 = (unsigned int *)v2 + v3;
 v12 = (unsigned int)n - v3;
 do
 {
 *v11++ = v10;
 v10 += 2;
 --v12;
 }
 while ( v12 );
 goto LABEL_11;
 }
 v3 = n & 0xFFFFFFF8;
 v5.n128_u64[0] = 0x800000008LL;
 v5.n128_u64[1] = 0x800000008LL;
 v6 = v3;
 v7 = (int32x4_t)xmmword_1CD0;
 v8 = v2 + 1;
 do
 {
 v9 = vshlq_n_s32(v7, 1u);
 v6 -= 8;
 v7 = vaddq_s32(v7, v5);
 v8[-1] = v9;
 *v8 = vaddq_s32(v9, v5);
 v8 += 2;
 }
 while ( v6 );
 if ( v3 != n )
 goto LABEL_9;
 }
LABEL_11:
 if ( n >= 0 )
 v13 = n;
 else
 v13 = n + 1;
 v14 = v2->n128_i32[v13 >> 1];
 free(v2);
 return v14;
}


/* Function: heap_calloc @ 0xF1C */
static int heap_calloc(int n)
{
 char *v2; // x0
 int v3; // w19
 long long v5; // x8
 unsigned long long v6; // x10
 unsigned long long v7; // x9
 int32x4_t *v8; // x12
 int32x4_t v9; // q0
 int32x4_t v10; // q1
 unsigned long long v11; // x13
 int32x4_t v12; // q2
 int32x4_t v13; // q3
 long long v14; // x8
 char *v15; // x9
 int v16; // t1

 v2 = (char *)calloc(n, 4u);
 if ( !v2 )
 return -1;
 if ( n > 1 )
 {
 v5 = (unsigned int)n;
 v6 = (unsigned int)n - 1LL;
 if ( v6 >= 8 )
 {
 v8 = (int32x4_t *)(v2 + 20);
 v9.n128_u32[0] = 0;
 v9.n128_u32[1] = 0;
 v9.n128_u32[2] = 0;
 v9.n128_u32[3] = 0;
 v7 = v6 & 0xFFFFFFFFFFFFFFF8LL | 1;
 v10.n128_u32[0] = 0;
 v10.n128_u32[1] = 0;
 v10.n128_u32[2] = 0;
 v10.n128_u32[3] = 0;
 v11 = v6 & 0xFFFFFFFFFFFFFFF8LL;
 do
 {
 v12 = v8[-1];
 v13 = *v8;
 v8 += 2;
 v11 -= 8LL;
 v9 = vaddq_s32(v12, v9);
 v10 = vaddq_s32(v13, v10);
 }
 while ( v11 );
 v3 = vaddvq_s32(vaddq_s32(v10, v9));
 if ( v6 == (v6 & 0xFFFFFFFFFFFFFFF8LL) )
 goto LABEL_12;
 }
 else
 {
 v3 = 0;
 v7 = 1;
 }
 v14 = v5 - v7;
 v15 = &v2[4 * v7];
 do
 {
 v16 = *(unsigned int *)v15;
 v15 += 4;
 --v14;
 v3 += v16;
 }
 while ( v14 );
 }
 else
 {
 v3 = 0;
 }
LABEL_12:
 free(v2);
 return v3;
}


/* Function: heap_realloc @ 0xFF4 */
static int heap_realloc()
{
 unsigned long long *v0; // x0
 void *v1; // x19
 char *v2; // x0
 int v3; // w9
 int v4; // w20

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 *v0 = xmmword_1CE0;
 *((unsigned int *)v0 + 4) = 5;
 v2 = (char *)realloc(v0, 0x28u);
 if ( v2 )
 {
 v3 = *((unsigned int *)v2 + 2);
 v1 = v2;
 *((unsigned int *)v2 + 9) = 90;
 if ( v3 == 3 )
 v4 = 50;
 else
 v4 = -3;
 *(unsigned long long *)(v2 + 20) = xmmword_1CF0;
 }
 else
 {
 v4 = -2;
 }
 free(v1);
 return v4;
}


/* Function: heap_array @ 0x1090 */
static int heap_array(int n)
{
 int32x4_t *v2; // x0
 long long v3; // x9
 int32x4_t v5; // q0
 long long v6; // x11
 int32x4_t v7; // q1
 int32x4_t v8; // q2
 int32x4_t v9; // q3
 int32x4_t *v10; // x10
 int32x4_t v11; // q4
 int v12; // w10
 unsigned int *v13; // x11
 long long v14; // x8
 int v15; // w8
 int v16; // w19

 v2 = (int32x4_t *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
LABEL_9:
 v12 = 3 * v3;
 v13 = (unsigned int *)v2 + v3;
 v14 = (unsigned int)n - v3;
 do
 {
 *v13++ = v12;
 v12 += 3;
 --v14;
 }
 while ( v14 );
 goto LABEL_11;
 }
 v3 = n & 0xFFFFFFF8;
 v5.n128_u64[0] = 0x300000003LL;
 v5.n128_u64[1] = 0x300000003LL;
 v6 = v3;
 v7.n128_u64[0] = 0xC0000000CLL;
 v7.n128_u64[1] = 0xC0000000CLL;
 v8.n128_u64[0] = 0x800000008LL;
 v8.n128_u64[1] = 0x800000008LL;
 v9 = (int32x4_t)xmmword_1CD0;
 v10 = v2 + 1;
 do
 {
 v11 = vmulq_s32(v9, v5);
 v6 -= 8;
 v9 = vaddq_s32(v9, v8);
 v10[-1] = v11;
 *v10 = vaddq_s32(v11, v7);
 v10 += 2;
 }
 while ( v6 );
 if ( v3 != n )
 goto LABEL_9;
 }
LABEL_11:
 if ( n >= 0 )
 v15 = n;
 else
 v15 = n + 1;
 v16 = v2->n128_i32[v15 >> 1];
 free(v2);
 return v16;
}


/* Function: heap_struct @ 0x1160 */
static int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0x1168 */
static int heap_nested(Node **head)
{
 Node *v2; // x0
 Node *v3; // x19
 Node *v4; // x0
 Node *v5; // x8
 int result; // w0

 v2 = (Node *)malloc(0x10u);
 *head = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 v2->data = 10;
 v4 = (Node *)malloc(0x10u);
 v3->next = v4;
 if ( v4 )
 {
 v5 = v4;
 result = 0;
 v5->next = 0;
 v5->data = 20;
 }
 else
 {
 free(v3);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0x11EC */
static int linked_list_heap()
{
 void **v0; // x0
 void **v1; // x19
 void **v2; // x0
 void **v3; // x20
 void **v4; // x0
 void **v5; // x22
 void **v6; // x0
 void **v7; // x21
 void **v8; // x0
 int v9; // w20
 void **v10; // x8
 int v11; // w9
 void **v12; // x21
 void **v14; // x20
 void **v15; // x20
 void **v16; // x20

 v0 = (void **)malloc(0x10u);
 if ( !v0 )
 return -1;
 v1 = v0;
 v1[0] = (void *)0;
 v2 = (void **)malloc(0x10u);
 if ( !v2 )
 {
 free(v1);
 return -1;
 }
 v3 = v2;
 v2[1] = (void *)0;
 v1[1] = v2;
 *(unsigned int *)v2 = 10;
 v4 = (void **)malloc(0x10u);
 if ( v4 )
 {
 v5 = v4;
 v4[1] = (void *)0;
 v3[1] = v4;
 *(unsigned int *)v4 = 20;
 v6 = (void **)malloc(0x10u);
 if ( v6 )
 {
 v7 = v6;
 v6[1] = (void *)0;
 v5[1] = v6;
 *(unsigned int *)v6 = 30;
 v8 = (void **)malloc(0x10u);
 if ( v8 )
 {
 v9 = 0;
 v10 = v1;
 v8[1] = (void *)0;
 v7[1] = v8;
 *(unsigned int *)v8 = 40;
 do
 {
 v11 = *(unsigned int *)v10;
 v10 = (void **)v10[1];
 v9 += v11;
 }
 while ( v10 );
 do
 {
 v12 = (void **)v1[1];
 free(v1);
 v1 = v12;
 }
 while ( v12 );
 return v9;
 }
 do
 {
 v16 = (void **)v1[1];
 free(v1);
 v1 = v16;
 }
 while ( v16 );
 return -1;
 }
 do
 {
 v15 = (void **)v1[1];
 free(v1);
 v1 = v15;
 }
 while ( v15 );
 return -1;
 }
 else
 {
 do
 {
 v14 = (void **)v1[1];
 free(v1);
 v1 = v14;
 }
 while ( v14 );
 return -1;
 }
}


/* Function: create_tree_node @ 0x1370 */
static TreeNode * create_tree_node(int data)
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


/* Function: tree_heap_traversal @ 0x13A0 */
static int tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x13A8 */
static int memory_leak(int n)
{
 int32x4_t *v2; // x0
 long long v3; // x9
 int32x4_t v5; // q0
 long long v6; // x11
 int32x4_t v7; // q1
 int32x4_t v8; // q2
 int32x4_t *v9; // x10
 int v10; // w8

 v2 = (int32x4_t *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 do
 {
LABEL_9:
 v2->n128_u32[v3] = v3;
 ++v3;
 }
 while ( n != v3 );
 goto LABEL_10;
 }
 v3 = n & 0xFFFFFFF8;
 v5.n128_u64[0] = 0x400000004LL;
 v5.n128_u64[1] = 0x400000004LL;
 v6 = v3;
 v7.n128_u64[0] = 0x800000008LL;
 v7.n128_u64[1] = 0x800000008LL;
 v8 = (int32x4_t)xmmword_1CD0;
 v9 = v2 + 1;
 do
 {
 v6 -= 8;
 v9[-1] = v8;
 *v9 = vaddq_s32(v8, v5);
 v9 += 2;
 v8 = vaddq_s32(v8, v7);
 }
 while ( v6 );
 if ( v3 != n )
 goto LABEL_9;
 }
LABEL_10:
 if ( n >= 0 )
 v10 = n;
 else
 v10 = n + 1;
 return v2->n128_i32[v10 >> 1];
}


/* Function: dangling_pointer @ 0x1458 */
static int dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 printf("value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x14AC */
static int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0x14C0 */
static int heap_overflow()
{
 return 0;
}


/* Function: test_heap_memory @ 0x14C8 */
static void test_heap_memory()
{
 unsigned long long *v0; // x0
 void *v1; // x19
 char *v2; // x0
 int v3; // w9
 int v4; // w20
 unsigned int *v5; // x0
 void **v6; // x19
 unsigned int *v7; // x0
 int v8; // w1
 int v9; // w0
 int v10; // w0
 long long v11; // x1
 unsigned int v12; // w0
 int status; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_22D7);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 *v0 = xmmword_1CE0;
 *((unsigned int *)v0 + 4) = 5;
 v2 = (char *)realloc(v0, 0x28u);
 if ( v2 )
 {
 v3 = *((unsigned int *)v2 + 2);
 v1 = v2;
 *((unsigned int *)v2 + 9) = 90;
 if ( v3 == 3 )
 v4 = 50;
 else
 v4 = -3;
 *(unsigned long long *)(v2 + 20) = xmmword_1CF0;
 }
 else
 {
 v4 = -2;
 }
 free(v1);
 }
 else
 {
 v4 = -1;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v4);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v5 = malloc(0x10u);
 if ( v5 )
 {
 v6 = (void **)v5;
 *v5 = 10;
 v7 = malloc(0x10u);
 v6[1] = v7;
 if ( v7 )
 {
 v8 = 0;
 *((unsigned long long *)v7 + 1) = 0;
 *v7 = 20;
 }
 else
 {
 free(v6);
 v8 = -2;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v8);
 free(v6[1]);
 free(v6);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v9 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v9);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 printf("HEAP-L3-03 (memory_leak): %d\n", 2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v10 = fork();
 if ( !v10 )
 {
 v12 = dangling_pointer();
 printf(aD, v12);
 exit(0);
 }
 if ( v10 < 1 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v10, &status, 0);
 v11 = status & 0x7F;
 if ( (status & 0x7F) != 0 )
 {
 if ( ((unsigned int)v11 << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_1F9A, v11);
 }
 else
 {
 printf(byte_1F75, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x16FC */
static int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1710 */
static int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1720 */
static int global_array_access(int idx)
{
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x1740 */
static int static_local(int reset)
{
 int result; // w0

 if ( reset )
 result = 0;
 else
 result = static_local_counter + 1;
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x1758 */
static int call_static_func(int x)
{
 return (2 * x) | 1;
}


/* Function: access_extern_global @ 0x1768 */
static int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x177C */
static int call_extern_func()
{
 return extern_function_impl(5);
}


/* Function: read_const_data @ 0x1784 */
static int read_const_data()
{
 return (unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1798 */
static int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x17A0 */
static int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x17A8 */
static int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x17B0 */
static void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x17BC */
static int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x17C8 */
static void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x17D4 */
static int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x17EC */
static int global_heap_store(int *p)
{
 global_heap_ptr = (long long)p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1808 */
static int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1810 */
static int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x1818 */
static int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1820 */
static void test_static_global()
{
 int v0; // w0
 int heap_val; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_22F5);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
    v0 = extern_function_impl(5);
    printf("STM-L2-02 (call_extern_func): %d\n", v0);
 printf("STM-L2-03 (read_const_data): %d\n", (unsigned char)const_string[4] + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (int (*)(int))double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 heap_val = 100;
 global_heap_ptr = (long long)&heap_val;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x19D8 */
static int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x19E0 */
static int memop_memset(void *buf, size_t size, int fill_value)
{
 int result; // w0

 result = -1;
 if ( buf )
 {
 if ( size )
 {
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
 }
 }
 return result;
}


/* Function: memop_memcpy @ 0x1A20 */
static int memop_memcpy(void *dst, const void *src, size_t n)
{
 int result; // w0

 result = -1;
 if ( dst && src )
 {
 if ( n )
 {
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x1A68 */
static int memop_memmove(void *buf, size_t n)
{
 int result; // w0

 result = -1;
 if ( buf )
 {
 if ( n >= 2 )
 {
 memmove((char *)buf + 1, buf, n - 1);
 return *((unsigned char *)buf + 1);
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x1AA8 */
static int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // w0
 int v5; // w0
 int v6; // w8

 result = 0;
 if ( p1 && p2 && n )
 {
 v5 = memcmp(p1, p2, n);
 if ( v5 )
 v6 = -1;
 else
 v6 = 0;
 if ( v5 >= 1 )
 return 1;
 else
 return v6;
 }
 return result;
}


/* Function: memop_bzero @ 0x1AE4 */
static int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x1B1C */
static int memop_bcopy(const void *src, void *dst, size_t n)
{
 int result; // w0

 result = -1;
 if ( src && dst )
 {
 if ( n )
 {
 memmove(dst, src, n);
 return *(unsigned char *)dst;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x1B58 */
static int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x1B6C */
static int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // w8

 if ( !flag )
 return -1;
 v1 = *flag;
 __dmb(0xBu);
 return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x1B8C */
static void test_memory_op_functions()
{
 int v0; // [xsp+Ch] [xbp-14h]

 puts(asc_2319);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 printf("MEMOP-L2-03: %c\n", (unsigned char)aHelloworld[0]);
 printf("MEMOP-L2-04: %d\n", -1);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 __dmb(0xBu);
 printf("MEMOP-L3-02: %d\n", v0 + 5);
}


/* Function: main @ 0x1C68 */
static int main_impl(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

int main(void)
{
 return main_impl();
}


/* Function: extern_function @ 0x1C8C */
static int extern_function_impl(int x)
{
 return 3 * x;
}


/* Function: .term_proc @ 0x1C94 */
static void term_proc(void)
{
 ;
}


/* FAILED to decompile: memcpy @ 0x13128 */

/* FAILED to decompile: memmove @ 0x13130 */

/* FAILED to decompile: exit @ 0x13138 */

/* FAILED to decompile: __libc_start_main @ 0x13140 */

/* FAILED to decompile: perror @ 0x13148 */

/* FAILED to decompile: __cxa_finalize @ 0x13150 */

/* FAILED to decompile: fork @ 0x13158 */

/* FAILED to decompile: malloc @ 0x13160 */

/* FAILED to decompile: memset @ 0x13168 */

/* FAILED to decompile: calloc @ 0x13170 */

/* FAILED to decompile: realloc @ 0x13178 */

/* FAILED to decompile: abort @ 0x13180 */

/* FAILED to decompile: puts @ 0x13188 */

/* FAILED to decompile: memcmp @ 0x13190 */

/* FAILED to decompile: free @ 0x13198 */

/* FAILED to decompile: printf @ 0x131A0 */

/* FAILED to decompile: waitpid @ 0x131A8 */

/* FAILED to decompile: __gmon_start__ @ 0x131B8 */

/* Total functions decompiled: 65, failed: 18 */
