/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* ARM NEON SIMD types */
typedef long long int64x2_t __attribute__((vector_size(16)));
typedef unsigned long long uint64x2_t __attribute__((vector_size(16)));
typedef signed char int8x16_t __attribute__((vector_size(16)));

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* POSIX types */
typedef int pid_t;

/* POSIX function declarations */
pid_t fork(void);
pid_t waitpid(pid_t pid, int *stat_loc, int options);
void _exit(int status);

/* External function declarations */
/* Note: extern_function is defined locally @ 0x1CC8, not truly external */
long long extern_function(int a1);

/* Byte extraction macro */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Global data declarations */
extern const uint64_t xmmword_1D00[2];
extern const int8x16_t xmmword_1D10;
extern const uint64_t xmmword_1D20[2];

/* CRT stub function declarations */
long long call_weak_fn(void);
long long double_value(int a1);
void __dmb(unsigned int arg);

/* JUMPOUT macro definition */
#define JUMPOUT(x) ((void)0)

/* ARM NEON intrinsic stub definitions */
static inline int64x2_t vdupq_n_s64(uint64_t val) {
    int64x2_t v = {val, val};
    return v;
}

static inline uint64x2_t vdupq_n_u64(uint64_t val) {
    uint64x2_t v = {val, val};
    return v;
}

static inline int64x2_t vaddq_s64(int64x2_t a, int64x2_t b) {
    return a + b;
}

static inline int8x16_t vaddq_s8(int8x16_t a, int8x16_t b) {
    int8x16_t result;
    int i;
    for (i = 0; i < 16; i++) {
        result[i] = a[i] + b[i];
    }
    return result;
}

static inline uint64x2_t vcgtq_u64(uint64x2_t a, uint64x2_t b) {
    uint64x2_t result;
    uint64_t *ra = (uint64_t *)&a;
    uint64_t *rb = (uint64_t *)&b;
    uint64_t *rres = (uint64_t *)&result;
    rres[0] = (ra[0] > rb[0]) ? ~0ULL : 0ULL;
    rres[1] = (ra[1] > rb[1]) ? ~0ULL : 0ULL;
    return result;
}

static inline uint64x2_t vcgeq_u64(uint64x2_t a, uint64x2_t b) {
    uint64x2_t result;
    uint64_t *ra = (uint64_t *)&a;
    uint64_t *rb = (uint64_t *)&b;
    uint64_t *rres = (uint64_t *)&result;
    rres[0] = (ra[0] >= rb[0]) ? ~0ULL : 0ULL;
    rres[1] = (ra[1] >= rb[1]) ? ~0ULL : 0ULL;
    return result;
}

static inline int64x2_t vmovn_s64(uint64x2_t a) {
    int64x2_t result;
    uint64_t *ra = (uint64_t *)&a;
    int64_t *rres = (int64_t *)&result;
    rres[0] = (int64_t)ra[0];
    rres[1] = (int64_t)ra[1];
    return result;
}

/* Type casting functions for vector reinterpretation */
static inline uint64x2_t vreinterpretq_u64_s64(int64x2_t a) {
    uint64x2_t result;
    __builtin_memcpy(&result, &a, sizeof(result));
    return result;
}

static inline int64x2_t vreinterpretq_s64_u64(int64x2_t a) {
    return a;
}

static inline int8x16_t vreinterpretq_s8_s64(int64x2_t a) {
    int8x16_t result;
    __builtin_memcpy(&result, &a, sizeof(result));
    return result;
}

static inline uint64x2_t vcgtq_u64_signed(int64x2_t a, int64x2_t b) {
    return vcgtq_u64(vreinterpretq_u64_s64(a), vreinterpretq_u64_s64(b));
}

static inline uint64x2_t vcgeq_u64_signed(int64x2_t a, int64x2_t b) {
    return vcgeq_u64(vreinterpretq_u64_s64(a), vreinterpretq_u64_s64(b));
}

static inline int64x2_t vmovn_s64_signed(uint64x2_t a) {
    int64x2_t result;
    uint64_t *ra = (uint64_t *)&a;
    int64_t *rres = (int64_t *)&result;
    rres[0] = (int64_t)ra[0];
    rres[1] = (int64_t)ra[1];
    return result;
}

/* Global variable declarations */
int global_counter;
static int file_scope_static;
void (*global_func_ptr)(void);
long long global_heap_ptr;
int extern_global_var;
int static_local_counter;
static unsigned int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const char const_string[] = "HelloWorld";
static const char asc_22E9[] = "Stack Memory Tests";
static const char asc_2307[] = "Heap Memory Tests";
static const char asc_2325[] = "Static and Global Tests";

static const char aHelloworld[] = "Hello, World!";
static const char asc_2349[] = "Memory Operations Tests";
static const char aD[] = "%d\n";
static const char aFork_0[] = "fork failed";
static const char byte_1FCA[] = "child signaled: %d\n";
static const char byte_1FA5[] = "child exited: %d\n";
const uint64_t xmmword_1D20[2] = {0x123456789ABCDEF0ULL, 0xFEDCBA9876543210ULL};
extern const unsigned char byte_8[];

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_clang_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x8C8 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_8E0 @ 0x8E0 */
void sub_8E0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0xB54 */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0xB60 */
long long local_array(int a1)
{
 int v1; // w8
 long long v2; // x9
 int64x2_t v3; // q0
 int64x2_t v4; // q1
 int64x2_t v5; // q2
 unsigned char v7[20]; // [xsp+8h] [xbp-28h] BYREF
 unsigned int v8; // [xsp+1Ch] [xbp-14h]

 v1 = 0;
 v2 = 0;
 v3 = vdupq_n_s64(0);
 v4 = vdupq_n_s64(0xAu);
 v5 = vdupq_n_s64(2u);
 do
 {
 if ( (vmovn_s64_signed(vcgtq_u64_signed(v4, v3))[0] & 1) != 0 )
 *(unsigned int *)&v7[v2] = v1;
 if ( (vmovn_s64_signed(vcgtq_u64_signed(vdupq_n_s64(0xAu), v3))[1] & 1) != 0 )
 *(unsigned int *)&v7[v2 + 4] = a1 + v1;
 v3 = vaddq_s64(v3, v5);
 v2 += 8;
 v1 += 2 * a1;
 }
 while ( v2 != 40 );
 return v8;
}


/* Function: local_struct @ 0xBE0 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0xBE8 */
long long address_of_local(unsigned int *a1)
{
 long long result; // x0

 result = 42;
 *a1 = 42;
 return result;
}


/* Function: address_of_array @ 0xBFC */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0xC08 */
long long large_stack_frame()
{
 long long v0; // x8
 int8x16_t v1; // q0
 int8x16_t v2; // q1
 unsigned char v4[2048]; // [xsp+0h] [xbp-810h]
 int64x2_t t1, t2;

 v0 = 0;
 t1 = vdupq_n_s64(0x1010101010101010LL);
 v1 = vreinterpretq_s8_s64(t1);
 t2 = vdupq_n_s64(0);
 v2 = vreinterpretq_s8_s64(t2);
 do
 {
 *(int8x16_t *)&v4[v0] = v2;
 v0 += 16;
t1 = vaddq_s64(t2, t1);
   v2 = vreinterpretq_s8_s64(t1);
 }
 while ( v0 != 2048 );
 return v4[1024];
}


/* Function: vla_stack @ 0xC48 */
long long vla_stack(unsigned int a1)
{
 long long v1; // x29
 long long v2; // x30
 char *v4; // x8
 long long v5; // x9
 unsigned int *v6; // x10
 int64x2_t v7; // q0
 int64x2_t v8; // q1
 int64x2_t v9; // q2
 unsigned long long v10; // d3
 int v11; // w9
 unsigned long long v12[2]; // [xsp+0h] [xbp-10h] BYREF

 if ( a1 - 1001 < 0xFFFFFC18 )
 return 0xFFFFFFFFLL;
 v12[0] = v1;
 v12[1] = v2;
 v4 = (char *)v12 - ((4LL * a1 + 15) & 0x7FFFFFFF0LL);
 v5 = 0;
 v6 = (unsigned int *)(v4 + 4);
 v7 = vdupq_n_s64(0);
 v8 = vdupq_n_s64((unsigned long long)a1 - 1);
 v9 = vdupq_n_s64(2u);
 do
 {
 v10 = vmovn_s64_signed(vcgeq_u64_signed(v8, v7))[0];
 if ( (v10 & 1) != 0 )
 *(v6 - 1) = v5;
 if ( (v10 & 0x100000000LL) != 0 )
 *v6 = v5 + 2;
 v7 = vaddq_s64(v7, v9);
 v6 += 2;
 v5 += 4;
 }
 while ( ((2LL * a1 + 2) & 0x3FFFFFFFCLL) != v5 );
 if ( (a1 & 0x80000000) == 0 )
 v11 = a1;
 else
 v11 = a1 + 1;
 return *(unsigned int *)&v4[4 * (v11 >> 1)];
}


/* Function: alloca_usage @ 0xD08 */
long long alloca_usage(int a1)
{
 long long v1; // x29
 long long v2; // x30
 char *v3; // x8
 long long v4; // x9
 unsigned int *v5; // x10
 int64x2_t v6; // q0
 int64x2_t v7; // q1
 int64x2_t v8; // q2
 unsigned long long v9; // d3
 unsigned long long v11[2]; // [xsp+0h] [xbp-10h] BYREF

 if ( a1 < 1 )
 return 0xFFFFFFFFLL;
 v11[0] = v1;
 v11[1] = v2;
 v3 = (char *)v11 - ((4LL * (unsigned int)a1 + 15) & 0x7FFFFFFF0LL);
 v4 = 0;
 v5 = (unsigned int *)(v3 + 4);
 v6 = vdupq_n_s64(0);
 v7 = vdupq_n_s64((unsigned long long)(unsigned int)a1 - 1);
 v8 = vdupq_n_s64(2u);
 do
 {
 v9 = vmovn_s64_signed(vcgeq_u64_signed(v7, v6))[0];
 if ( (v9 & 1) != 0 )
 *(v5 - 1) = v4;
 if ( (v9 & 0x100000000LL) != 0 )
 *v5 = v4 + 3;
 v6 = vaddq_s64(v6, v8);
 v5 += 2;
 v4 += 6;
 }
 while ( 6 * (((unsigned long long)(unsigned int)a1 + 1) >> 1) != v4 );
 return *(unsigned int *)&v3[4 * (a1 >> 1)];
}


/* Function: stack_alias @ 0xDC4 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0xDCC */
long long test_stack_memory()
{
 long long v0; // x8
 unsigned int *v1; // x10
 int64x2_t v2; // q0
 int64x2_t v3; // q1
 int64x2_t v4; // q2
 long long v5; // x8
 int8x16_t v6; // q0
 int8x16_t v7; // q1
 long long v8; // x8
 unsigned int *v9; // x10
 int64x2_t v10; // q0
 int64x2_t v11; // q1
 int64x2_t v12; // q2
 long long v13; // x8
 unsigned int *v14; // x10
 int64x2_t v15; // q0
 int64x2_t v16; // q1
 int64x2_t v17; // q2
 int64x2_t t1, t2;
 unsigned char v19[4]; // [xsp+0h] [xbp-800h]
 unsigned char v20[16]; // [xsp+4h] [xbp-7FCh] BYREF
 int v21; // [xsp+14h] [xbp-7ECh]
 unsigned char v22; // [xsp+400h] [xbp-400h]

 puts(asc_22E9);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 v0 = 0;
 v1 = (unsigned int *)v20;
 v2 = vdupq_n_s64(0);
 v3 = vdupq_n_s64(0xAu);
 v4 = vdupq_n_s64(2u);
 do
 {
 if ( (vmovn_s64_signed(vcgtq_u64_signed(v3, v2))[0] & 1) != 0 )
 *(v1 - 1) = v0;
 if ( (vmovn_s64_signed(vcgtq_u64_signed(vdupq_n_s64(0xAu), v2))[1] & 1) != 0 )
 *v1 = v0 + 2;
 v2 = vaddq_s64(v2, v4);
 v1 += 2;
 v0 += 4;
 }
 while ( v0 != 20 );
 printf("MEM-L1-02 (local_array): %d\n", v21);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 v5 = 0;
 t1 = vdupq_n_s64(0x1010101010101010LL);
 v6 = vreinterpretq_s8_s64(t1);
 t2 = vdupq_n_s64(0);
 v7 = vreinterpretq_s8_s64(t2);
 do
 {
 *(int8x16_t *)&v19[v5] = v7;
 v5 += 16;
 v7 = vaddq_s8(v7, v6);
 }
 while ( v5 != 2048 );
 printf("MEM-L2-01 (large_stack_frame): %d\n", v22);
 v8 = 0;
 v9 = (unsigned int *)v20;
 v10 = vdupq_n_s64(0);
 v11 = vdupq_n_s64(0xAu);
 v12 = vdupq_n_s64(2u);
 do
 {
 if ( (vmovn_s64_signed(vcgtq_u64_signed(v11, v10))[0] & 1) != 0 )
 *(v9 - 1) = v8;
 if ( (vmovn_s64_signed(vcgtq_u64_signed(vdupq_n_s64(0xAu), v10))[1] & 1) != 0 )
 *v9 = v8 + 2;
 v10 = vaddq_s64(v10, v12);
 v9 += 2;
 v8 += 4;
 }
 while ( v8 != 20 );
 printf("MEM-L2-02 (vla_stack): %d\n", v21);
 v13 = 0;
 v14 = (unsigned int *)v20;
 v15 = vdupq_n_s64(0);
 v16 = vdupq_n_s64(0xAu);
 v17 = vdupq_n_s64(2u);
 do
 {
 if ( (vmovn_s64_signed(vcgtq_u64_signed(v16, v15))[0] & 1) != 0 )
 *(v14 - 1) = v13;
 if ( (vmovn_s64_signed(vcgtq_u64_signed(vdupq_n_s64(0xAu), v15))[1] & 1) != 0 )
 *v14 = v13 + 3;
 v15 = vaddq_s64(v15, v17);
 v14 += 2;
 v13 += 6;
 }
 while ( v13 != 30 );
 printf("MEM-L2-03 (alloca_usage): %d\n", v21);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xFE4 */
long long heap_basic(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x8
 unsigned int *v4; // x9
 int64x2_t v5; // q0
 int64x2_t v6; // q1
 int64x2_t v7; // q2
 unsigned long long v8; // d3
 int v9; // w8
 unsigned int v10; // w19

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 if ( a1 >= 1 )
 {
 v3 = 0;
 v4 = v2 + 1;
 v5 = vdupq_n_s64(0);
 v6 = vdupq_n_s64((unsigned long long)(unsigned int)a1 - 1);
 v7 = vdupq_n_s64(2u);
 do
 {
 v8 = vmovn_s64_signed(vcgeq_u64_signed(v6, v5))[0];
 if ( (v8 & 1) != 0 )
 *(v4 - 1) = v3;
 if ( (v8 & 0x100000000LL) != 0 )
 *v4 = v3 + 2;
 v5 = vaddq_s64(v5, v7);
 v4 += 2;
 v3 += 4;
 }
 while ( ((2LL * (unsigned int)a1 + 2) & 0x3FFFFFFFCLL) != v3 );
 }
 if ( a1 >= 0 )
 v9 = a1;
 else
 v9 = a1 + 1;
 v10 = v2[v9 >> 1];
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v10;
}


/* Function: heap_calloc @ 0x109C */
long long heap_calloc(int a1)
{
 int *v2; // x0
 unsigned int v3; // w19
 long long v4; // x8
 int *v5; // x9
 int v6; // t1

 v2 = (int *)calloc(a1, 4u);
 if ( v2 )
 {
 if ( a1 > 1 )
 {
 v3 = 0;
 v4 = (unsigned int)a1 - 1LL;
 v5 = v2 + 1;
 do
 {
 v6 = *v5++;
 --v4;
 v3 += v6;
 }
 while ( v4 );
 }
 else
 {
 v3 = 0;
 }
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_realloc @ 0x1110 */
long long heap_realloc()
{
 unsigned int *v0; // x0
 void *v1; // x19
 long long v2; // x8
 int v3; // zf
 int v4; // w20
 unsigned int *v5; // x0
 int v6; // w9
 unsigned int v7; // w20

 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 v2 = 0;
 do
 {
 v3 = v2 == 4;
 v0[v2] = v2 + 1;
 ++v2;
 }
 while ( !v3 );
 v4 = v0[2];
 v5 = (unsigned int *)realloc(v0, 0x28u);
 if ( v5 )
 {
 v6 = v5[2];
 v1 = v5;
 *((unsigned int *)v5 + 9) = 90;
 if ( v6 == v4 )
 v7 = 50;
 else
 v7 = -3;
 *(unsigned long long *)(v5 + 20) = xmmword_1D20[0];
 }
 else
 {
 v7 = -2;
 }
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v7;
}


/* Function: heap_array @ 0x11AC */
long long heap_array(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x8
 unsigned int *v4; // x9
 int64x2_t v5; // q0
 int64x2_t v6; // q1
 int64x2_t v7; // q2
 unsigned long long v8; // d3
 int v9; // w8
 unsigned int v10; // w19

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 if ( a1 >= 1 )
 {
 v3 = 0;
 v4 = v2 + 1;
 v5 = vdupq_n_s64(0);
 v6 = vdupq_n_s64((unsigned long long)(unsigned int)a1 - 1);
 v7 = vdupq_n_s64(2u);
 do
 {
 v8 = vmovn_s64_signed(vcgeq_u64_signed(v6, v5))[0];
 if ( (v8 & 1) != 0 )
 *(v4 - 1) = v3;
 if ( (v8 & 0x100000000LL) != 0 )
 *v4 = v3 + 3;
 v5 = vaddq_s64(v5, v7);
 v4 += 2;
 v3 += 6;
 }
 while ( 6 * (((unsigned long long)(unsigned int)a1 + 1) >> 1) != v3 );
 }
 if ( a1 >= 0 )
 v9 = a1;
 else
 v9 = a1 + 1;
 v10 = v2[v9 >> 1];
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v10;
}


/* Function: heap_struct @ 0x126C */
long long heap_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: heap_nested @ 0x1274 */
void heap_nested(unsigned long long **a1)
{
 unsigned long long *v2; // x0
 unsigned long long *v3; // x19
 unsigned long long *v4; // x0
 unsigned long long *v5; // x8

 v2 = (unsigned long long *)malloc(0x10u);
 *a1 = v2;
 if ( !v2 )
 return;
 v3 = v2;
 *v2 = 10;
 v4 = (unsigned long long *)malloc(0x10u);
 v3[1] = (unsigned long long)v4;
 if ( v4 )
 {
 v5 = v4;
 v5[1] = 0;
 *(unsigned int *)v5 = 20;
 }
 else
 {
 free(v3);
 }
}


/* Function: linked_list_heap @ 0x12E8 */
long long linked_list_heap()
{
 unsigned long long *v0; // x0
 int v1; // w20
 int v2; // w21
 unsigned long long *v3; // x22
 unsigned long long *v4; // x19
 int v5; // w20
 unsigned long long *v6; // x21
 unsigned int v7; // w20
 unsigned long long *v8; // x8
 int v9; // w9
 unsigned long long *v10; // x21

 v0 = malloc(0x10u);
 if ( v0 )
 {
 v1 = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 while ( 1 )
 {
*(unsigned int *)v0 = v1;
            v0[1] = 0;
            if ( v4 )
                v3[1] = (unsigned long long)v0;
 else
 v4 = v0;
 if ( v2 == 4 )
 break;
 v3 = v0;
 v0 = malloc(0x10u);
 v1 += 10;
 ++v2;
 if ( !v0 )
 {
 v5 = (unsigned int)(v2 - 1) < 4;
 do
 {
 v6 = (unsigned long long *)v4[1];
 free(v4);
 v4 = v6;
 }
 while ( v6 );
 goto LABEL_11;
 }
 }
 }
 else
 {
 v4 = 0;
 v5 = 1;
LABEL_11:
 if ( v5 )
 return (unsigned int)-1;
 }
 v7 = 0;
 if ( v4 )
 {
 v8 = v4;
 do
 {
 v9 = *(unsigned int *)v8;
 v8 = (unsigned long long *)v8[1];
 v7 += v9;
 }
 while ( v8 );
 do
 {
 v10 = (unsigned long long *)v4[1];
 free(v4);
 v4 = v10;
 }
 while ( v10 );
 }
 return v7;
}


/* Function: create_tree_node @ 0x13DC */
unsigned long long * create_tree_node(int a1)
{
 unsigned long long *result; // x0

 result = malloc(0x18u);
 if ( result )
 {
 *(unsigned int *)result = a1;
 result[1] = 0;
 result[2] = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x140C */
long long tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x1414 */
long long memory_leak(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x8
 int v4; // w8

 v2 = malloc(4LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 if ( a1 >= 1 )
 {
 v3 = 0;
 do
 {
 v2[v3] = v3;
 ++v3;
 }
 while ( a1 != v3 );
 }
 if ( a1 >= 0 )
 v4 = a1;
 else
 v4 = a1 + 1;
 return (unsigned int)v2[v4 >> 1];
}


/* Function: dangling_pointer @ 0x1474 */
long long dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19

 v0 = (unsigned int *)malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 printf("value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x14C0 */
long long double_free(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x14D4 */
long long heap_overflow()
{
 unsigned int *v0; // x0
 long long v1; // x8
 int64x2_t v2; // q0
 unsigned int *v3; // x10
 int64x2_t v4; // q1
 int64x2_t v5; // q2
 unsigned int v6; // w19

 v0 = (unsigned int *)malloc(0x28u);
 if ( v0 )
 {
 v1 = 0;
 v2 = vdupq_n_s64(0);
 v3 = v0 + 1;
 v4 = vdupq_n_s64(0xBu);
 v5 = vdupq_n_s64(2u);
 do
 {
 if ( (vmovn_s64_signed(vcgtq_u64_signed(v4, v2))[0] & 1) != 0 )
 *(v3 - 1) = v1;
 if ( (vmovn_s64_signed(vcgtq_u64_signed(vdupq_n_s64(0xBu), v2))[1] & 1) != 0 )
 *v3 = v1 + 100;
 v2 = vaddq_s64(v2, v5);
 v3 += 2;
 v1 += 200;
 }
 while ( v1 != 1200 );
 v6 = *v0;
 free(v0);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v6;
}


/* Function: test_heap_memory @ 0x1570 */
void test_heap_memory()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 void *v5; // x19
 int v6; // w0
 unsigned int *v7; // x0
 long long i; // x8
 int v9; // w1
 int v10; // w0
 long long v11; // x1
 unsigned int v12; // w0
 int stat_loc; // [xsp+Ch] [xbp-4h] BYREF
 unsigned long long **v14; // [xsp+28h] [xbp+18h] BYREF

 puts(asc_2307);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n", v3);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v14 = NULL;
 heap_nested((unsigned long long **)&v14);
 printf("HEAP-L2-06 (heap_nested): %d\n", 0);
 if ( v14 )
 {
 free(*(void **)v14);
 free(v14);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 v7 = (unsigned int *)malloc(0x14u);
 if ( v7 )
 {
 for ( i = 0; i != 5; ++i )
 v7[i] = (unsigned int)i;
 v9 = v7[2];
 }
 else
 {
 v9 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v9);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v10 = fork();
	if ( !v10 )
	{
	v12 = dangling_pointer();
	printf(aD, v12);
	_exit(0);
	}
 if ( v10 < 1 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v10, &stat_loc, 0);
 v11 = stat_loc & 0x7F;
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((unsigned int)v11 << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_1FCA, v11);
 }
 else
 {
 printf(byte_1FA5, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1730 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1744 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1754 */
long long global_array_access(unsigned int a1)
{
 if ( a1 <= 9 )
 return global_array[a1];
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_local @ 0x1774 */
long long static_local(int a1)
{
 long long result; // x0

 if ( a1 )
 result = 0;
 else
 result = (unsigned int)(static_local_counter + 1);
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x178C */
long long call_static_func(int a1)
{
 return (2 * a1) | 1u;
}


/* Function: access_extern_global @ 0x179C */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x17B0 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x17B8 */
long long read_const_data()
{
 return (unsigned int)(unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x17CC */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x17D4 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x17DC */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x17E4 */
long long set_file_static(long long result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x17F0 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x17FC */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x1808 */
long long call_global_callback()
{
 if ( global_func_ptr )
 {
 long long (*fn)(int) = (long long (*)(int))global_func_ptr;
 return fn(5);
 }
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1820 */
long long global_heap_store(unsigned int *a1)
{
 global_heap_ptr = (intptr_t)a1;
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x183C */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1844 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x184C */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1854 */
long long test_static_global()
{
 int v0; // w0
 int v2; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_2325);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 printf("STM-L2-03 (read_const_data): %d\n", (unsigned char)const_string[4] + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (void (*)(void))double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v2 = 100;
 global_heap_ptr = (intptr_t)&v2;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1A14 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: memop_memset @ 0x1A1C */
long long memop_memset(unsigned char *s, size_t n, int c)
{
 long long result; // x0

 result = 0xFFFFFFFFLL;
 if ( s )
 {
 if ( n )
 {
 memset(s, c, n);
 return *s;
 }
 }
 return result;
}


/* Function: memop_memcpy @ 0x1A5C */
long long memop_memcpy(char *dest, const void *a2, size_t n)
{
 long long result; // x0

 result = 0xFFFFFFFFLL;
 if ( dest && a2 )
 {
 if ( n )
 {
 memcpy(dest, a2, n);
 return *(unsigned int *)&dest[(n & 0xFFFFFFFFFFFFFFFCLL) - 4];
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x1AA4 */
long long memop_memmove(char *src, unsigned long long a2)
{
 long long result; // x0

 result = 0xFFFFFFFFLL;
 if ( src )
 {
 if ( a2 >= 2 )
 {
 memmove(src + 1, src, a2 - 1);
 return (unsigned char)src[1];
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x1AE4 */
long long memop_memcmp(void *s1, const void *a2, size_t a3)
{
 long long result; // x0
 int v5; // w0
 unsigned int v6; // w8

 result = 0;
 if ( s1 && a2 && a3 )
 {
 v5 = memcmp(s1, a2, a3);
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


/* Function: memop_bzero @ 0x1B20 */
long long memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x1B58 */
long long memop_bcopy(void *src, unsigned char *dest, size_t a3)
{
 long long result; // x0

 result = 0xFFFFFFFFLL;
 if ( src && dest )
 {
 if ( a3 )
 {
 memmove(dest, src, a3);
 return *dest;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x1B94 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x1BA8 */
long long memop_memory_barrier(int *a1)
{
 int v1; // w8

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 __dmb(0xBu);
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x1BC8 */
long long test_memory_op_functions()
{
 int v1; // [xsp+Ch] [xbp-14h]

 puts(asc_2349);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 printf("MEMOP-L2-03: %c\n", (unsigned char)aHelloworld[0]);
 printf("MEMOP-L2-04: %d\n", -1);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v1 = 5;
 __dmb(0xBu);
 return printf("MEMOP-L3-02: %d\n", v1 + 5);
}


/* Function: main @ 0x1CA4 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x1CC8 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x1CD0 */
void term_proc()
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
