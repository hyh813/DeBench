/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* ARM NEON SIMD types */
typedef struct { uint32_t n128_u32[4]; uint64_t n128_u64[2]; } int32x4_t;
typedef struct { uint32_t n128_u32[4]; uint64_t n128_u64[2]; } uint32x4_t;
typedef struct { uint8_t n128_u8[16]; uint64_t n128_u64[2]; } int8x16_t;
typedef struct { uint8_t n128_u8[16]; uint64_t n128_u64[2]; } uint8x16_t;

/* Standard library functions */
typedef int pid_t;
int printf(const char *format, ...);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void __dmb(unsigned int);
pid_t fork(void);
int waitpid(pid_t pid, int *status, int options);
void perror(const char *s);
void exit(int status);

/* ARM NEON intrinsics */
int8x16_t vaddq_s8(int8x16_t a, int8x16_t b);
int32x4_t vshlq_n_s32(int32x4_t a, unsigned int b);
int32x4_t vaddq_s32(int32x4_t a, int32x4_t b);
int32x4_t vmulq_s32(int32x4_t a, int32x4_t b);
int32x4_t vaddq_s32(int32x4_t a, int32x4_t b);
int32x4_t vaddvq_s32(int32x4_t a);

/* CRT stubs */
long long call_weak_fn(void);
#define JUMPOUT(addr) ((void)0)

/* Byte extraction macro */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Forward declarations */
long long extern_function(int a1);
long long double_value(int a1);

/* Global variables - BSS section */
unsigned int global_counter;
unsigned int global_array[10];
int static_local_counter;
int file_scope_static;
int extern_global_var;
long long global_heap_ptr;
int (*global_func_ptr)(int);
unsigned int *global_heap_ptr_addr;

/* Global constants - DATA section */
char const_string[] = "Hello World";
char asc_2229[] = "========== STACK MEMORY TESTS ==========\0";
char asc_2247[] = "========== HEAP MEMORY TESTS ==========\0";
char asc_2265[] = "========== STATIC GLOBAL TESTS ==========\0";
char asc_2289[] = "========== MEMORY OPERATION TESTS ==========\0";
char aD[] = "%d\n";
char aFork_0[] = "fork\n";
char byte_1F0A[] = "SIGNAL: %d\n";
char byte_1EE5[] = "EXIT: %d\n";
char aHelloworld[] = "HelloWorld";

/* SIMD constants */
static unsigned long long xmmword_1C30[2];
static unsigned long long xmmword_1C40[2];
static unsigned long long xmmword_1C50[2];
static unsigned long long xmmword_1C60[2];

__attribute__((constructor))
void init_simd_constants() {
    xmmword_1C30[0] = 0x2020202020202020LL; xmmword_1C30[1] = 0x2020202020202020LL;
    xmmword_1C40[0] = 0; xmmword_1C40[1] = 0;
    xmmword_1C50[0] = 1; xmmword_1C50[1] = 0;
    xmmword_1C60[0] = 3; xmmword_1C60[1] = 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_clang_O2_no_g
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
 return (unsigned int)(5 * a1);
}


/* Function: local_struct @ 0xB68 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0xB70 */
long long address_of_local(unsigned int *a1)
{
 long long result; // x0

 result = 42;
 *a1 = 42;
 return result;
}


/* Function: address_of_array @ 0xB84 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0xB90 */
long long large_stack_frame()
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
 v3 = *(int8x16_t *)xmmword_1C30;
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
long long vla_stack(unsigned int a1)
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

 if ( a1 - 1001 < 0xFFFFFC18 )
 return 0xFFFFFFFFLL;
 v15[0] = (unsigned long long)v1;
 v15[1] = (unsigned long long)v2;
 v4 = (int32x4_t *)((char *)v15 - ((4LL * a1 + 15) & 0x7FFFFFFF0LL));
 if ( a1 < 8 )
 {
 v5 = 0;
LABEL_8:
 v11 = 2 * v5;
 v12 = (char *)v4 + 4 * v5;
 v13 = a1 - v5;
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
 v5 = a1 & 0xFFFFFFF8;
 v6.n128_u64[0] = 0x800000008LL;
 v6.n128_u64[1] = 0x800000008LL;
 v7 = v5;
 v8 = *(int32x4_t *)xmmword_1C40;
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
 if ( v5 != a1 )
 goto LABEL_8;
LABEL_10:
 if ( (a1 & 0x80000000) == 0 )
 v14 = a1;
 else
 v14 = a1 + 1;
 return (unsigned int)v4->n128_u32[v14 >> 1];
}


/* Function: alloca_usage @ 0xCA0 */
long long alloca_usage(int a1)
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

 if ( a1 < 1 )
 return 0xFFFFFFFFLL;
 v16[0] = v1;
 v16[1] = v2;
 v3 = (int32x4_t *)((char *)v16 - ((4LL * (unsigned int)a1 + 15) & 0x7FFFFFFF0LL));
 if ( (unsigned int)a1 >= 8 )
 {
 v4 = a1 & 0xFFFFFFF8;
 v6.n128_u64[0] = 0x300000003LL;
 v6.n128_u64[1] = 0x300000003LL;
 v7 = v4;
 v8.n128_u32[0] = 0xC0000000CU;
 v8.n128_u32[1] = 0xC0000000CU;
 v8.n128_u32[2] = 0xC0000000CU;
 v8.n128_u32[3] = 0xC0000000CU;
 v9.n128_u32[0] = 0x800000008LL;
 v9.n128_u32[1] = 0x800000008LL;
 v9.n128_u32[2] = 0x800000008LL;
 v9.n128_u32[3] = 0x800000008LL;
 v10 = *(int32x4_t *)xmmword_1C40;
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
 if ( v4 == a1 )
 return v3->n128_u32[a1 >> 1];
 }
 else
 {
 v4 = 0;
 }
 v13 = 3 * v4;
 v14 = (char *)v3 + 4 * v4;
 v15 = (unsigned int)a1 - v4;
 do
 {
 *(unsigned int *)v14 = v13;
 v14 += 4;
 v13 += 3;
 --v15;
 }
 while ( v15 );
 return v3->n128_u32[a1 >> 1];
}


/* Function: stack_alias @ 0xD60 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0xD68 */
long long test_stack_memory()
{
 long long v0; // x8
 int8x16_t v1; // q0
 int8x16_t v2; // q1
 int8x16_t v3; // q2
 int8x16_t *v4; // x10
 unsigned char v6[2048]; // [xsp+0h] [xbp-800h] BYREF

 puts(asc_2229);
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
 v3 = *(int8x16_t *)xmmword_1C30;
 do
 {
 v4 = (int8x16_t *)&v6[v0];
 v0 += 32;
 *v4 = v3;
 v4[1] = vaddq_s8(v3, v1);
 v3 = vaddq_s8(v3, v2);
 }
 while ( v0 != 2048 );
 printf("MEM-L2-01 (large_stack_frame): %d\n", v6[1024]);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xE54 */
long long heap_basic(int a1)
{
 int32x4_t *v2; // x0
 long long v3; // x9
 unsigned int v4; // w19
 int32x4_t v5; // q0
 long long v6; // x11
 int32x4_t v7; // q1
 int32x4_t *v8; // x10
 int32x4_t v9; // q2
 int v10; // w10
 unsigned int *v11; // x11
 long long v12; // x8
 int v13; // w8

 v2 = (int32x4_t *)malloc(4LL * a1);
 if ( !v2 )
 return (unsigned int)-1;
 if ( a1 >= 1 )
 {
 if ( (unsigned int)a1 < 8 )
 {
 v3 = 0;
LABEL_9:
 v10 = 2 * v3;
 v11 = (unsigned int *)v2 + v3;
 v12 = (unsigned int)a1 - v3;
 do
 {
 *v11++ = v10;
 v10 += 2;
 --v12;
 }
 while ( v12 );
 goto LABEL_11;
 }
 v3 = a1 & 0xFFFFFFF8;
 v5.n128_u64[0] = 0x800000008LL;
 v5.n128_u64[1] = 0x800000008LL;
 v6 = v3;
 v7 = *(int32x4_t *)xmmword_1C40;
 v8 = v2 + 1;
 do
 {
 v9 = vshlq_n_s32(v7, 1u);
 v6 -= 8;
 v7 = vaddq_s32(v7, v5);
 v8[-1] = v9;
 *(int32x4_t *)v8 = vaddq_s32(v9, v5);
 v8 += 2;
 }
 while ( v6 );
 if ( v3 != a1 )
 goto LABEL_9;
 }
LABEL_11:
 if ( a1 >= 0 )
 v13 = a1;
 else
 v13 = a1 + 1;
 v4 = v2->n128_u32[v13 >> 1];
 free(v2);
 return v4;
}


/* Function: heap_calloc @ 0xF10 */
long long heap_calloc(int a1)
{
 char *v2; // x0
 unsigned int v3; // w19
 long long v4; // x8
 unsigned long long v5; // x10
 unsigned long long v6; // x9
 int32x4_t *v7; // x12
 int32x4_t v8; // q0
 int32x4_t v9; // q1
 unsigned long long v10; // x13
 int32x4_t v11; // q2
 int32x4_t v12; // q3
 long long v13; // x8
 char *v14; // x9
 int v15; // t1

 v2 = (char *)calloc(a1, 4u);
 if ( v2 )
 {
 if ( a1 > 1 )
 {
 v4 = (unsigned int)a1;
 v5 = (unsigned int)a1 - 1LL;
 if ( v5 >= 8 )
 {
 v7 = (int32x4_t *)(v2 + 20);
 v8 = 0u;
 v6 = v5 & 0xFFFFFFFFFFFFFFF8LL | 1;
 v9 = 0u;
 v10 = v5 & 0xFFFFFFFFFFFFFFF8LL;
 do
 {
 v11 = v7[-1];
 v12 = *v7;
 v7 += 2;
 v10 -= 8LL;
 v8 = vaddq_s32(v11, v8);
 v9 = vaddq_s32(v12, v9);
 }
 while ( v10 );
 v3 = vaddvq_s32(vaddq_s32(v9, v8));
 if ( v5 == (v5 & 0xFFFFFFFFFFFFFFF8LL) )
 goto LABEL_12;
 }
 else
 {
 v3 = 0;
 v6 = 1;
 }
 v13 = v4 - v6;
 v14 = &v2[4 * v6];
 do
 {
 v15 = *(unsigned int *)v14;
 v14 += 4;
 --v13;
 v3 += v15;
 }
 while ( v13 );
 }
 else
 {
 v3 = 0;
 }
LABEL_12:
 free(v2);
 return v3;
 }
 return (unsigned int)-1;
}


/* Function: heap_realloc @ 0xFDC */
long long heap_realloc()
{
 unsigned long long *v0; // x0
 void *v1; // x19
 unsigned long long *v2; // x0
 unsigned int v3; // w9
 unsigned int v4; // w20

 v0 = (unsigned long long *)(unsigned long)malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 v0[0] = xmmword_1C50[0];
 v0[1] = 5;
 v2 = (unsigned long long *)realloc(v0, 0x28u);
 if ( v2 )
 {
 v3 = v2[2];
 v1 = v2;
 v2[9] = 90;
 if ( v3 == 3 )
 v4 = 50;
 else
 v4 = -3u;
 v2[5] = xmmword_1C60[0];
 }
 else
 {
 v4 = -2;
 }
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: heap_array @ 0x106C */
long long heap_array(int a1)
{
 int32x4_t *v2; // x0
 long long v3; // x9
 unsigned int v4; // w19
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

 v2 = (int32x4_t *)malloc(4LL * a1);
 if ( !v2 )
 return (unsigned int)-1;
 if ( a1 >= 1 )
 {
 if ( (unsigned int)a1 < 8 )
 {
 v3 = 0;
LABEL_9:
 v12 = 3 * v3;
 v13 = (unsigned int *)v2 + v3;
 v14 = (unsigned int)a1 - v3;
 do
 {
 *v13++ = v12;
 v12 += 3;
 --v14;
 }
 while ( v14 );
 goto LABEL_11;
 }
 v3 = a1 & 0xFFFFFFF8;
 v5.n128_u64[0] = 0x300000003LL;
 v5.n128_u64[1] = 0x300000003LL;
 v6 = v3;
 v7.n128_u64[0] = 0xC0000000CLL;
 v7.n128_u64[1] = 0xC0000000CLL;
 v8.n128_u64[0] = 0x800000008LL;
 v8.n128_u64[1] = 0x800000008LL;
 v9 = *(int32x4_t *)xmmword_1C40;
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
 if ( v3 != a1 )
 goto LABEL_9;
 }
LABEL_11:
 if ( a1 >= 0 )
 v15 = a1;
 else
 v15 = a1 + 1;
 v4 = v2->n128_u32[v15 >> 1];
 free(v2);
 return v4;
}


/* Function: heap_struct @ 0x1130 */
long long heap_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: heap_nested @ 0x1138 */
long long heap_nested(unsigned long long *a1)
{
 unsigned long long *v2; // x0
 unsigned long long *v3; // x19
 unsigned long long *v4; // x0
 unsigned long long *v5; // x8
 long long result; // x0

 v2 = (unsigned long long *)malloc(0x10u);
 *a1 = (unsigned long long)v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 *v3 = 10;
 v4 = (unsigned long long *)malloc(0x10u);
 v3[1] = (unsigned long long)v4;
 if ( v4 )
 {
 v5 = v4;
 result = 0;
 v5[1] = 0;
 *(unsigned int *)v5 = 20;
 }
 else
 {
 free(v3);
 return 4294967294LL;
 }
 return result;
}


/* Function: linked_list_heap @ 0x11AC */
long long linked_list_heap()
{
 unsigned int *v0; // x0
 unsigned long long *v1; // x19
 unsigned long long *v2; // x0
 unsigned long long *v3; // x20
 unsigned long long *v4; // x0
 unsigned long long *v5; // x22
 unsigned long long *v6; // x0
 unsigned long long *v7; // x21
 unsigned long long *v8; // x0
 unsigned int v9; // w20
 unsigned long long *v10; // x8
 int v11; // w9
 unsigned long long *v12; // x21
 unsigned long long *v13; // x20
 unsigned long long *v14; // x20
 unsigned long long *v15; // x20

 v0 = (unsigned int *)malloc(0x10u);
 if ( !v0 )
 return (unsigned int)-1;
 v1 = (unsigned long long *)v0;
 *v0 = 0;
 v2 = (unsigned int *)malloc(0x10u);
 if ( !v2 )
 {
 free(v1);
 return (unsigned int)-1;
 }
 v3 = v2;
 v2[1] = 0;
 v1[1] = (unsigned long long)v2;
 *(unsigned int *)v2 = 10;
 v4 = malloc(0x10u);
 if ( !v4 )
 {
 do
 {
 v13 = (unsigned long long *)v1[1];
 free(v1);
 v1 = v13;
 }
 while ( v13 );
 return (unsigned int)-1;
 }
 v5 = v4;
 v4[1] = 0;
 v3[1] = v4;
 *(unsigned int *)v4 = 20;
 v6 = malloc(0x10u);
 if ( !v6 )
 {
 do
 {
 v14 = (unsigned long long *)v1[1];
 free(v1);
 v1 = v14;
 }
 while ( v14 );
 return (unsigned int)-1;
 }
 v7 = v6;
 v6[1] = 0;
 v5[1] = v6;
 *(unsigned int *)v6 = 30;
 v8 = malloc(0x10u);
 if ( !v8 )
 {
 do
 {
 v15 = (unsigned long long *)v1[1];
 free(v1);
 v1 = v15;
 }
 while ( v15 );
 return (unsigned int)-1;
 }
 v9 = 0;
 v10 = v1;
 v8[1] = 0;
 v7[1] = v8;
 *(unsigned int *)v8 = 40;
 do
 {
 v11 = *(unsigned int *)v10;
 v10 = (unsigned long long *)v10[1];
 v9 += v11;
 }
 while ( v10 );
 do
 {
 v12 = (unsigned long long *)v1[1];
 free(v1);
 v1 = v12;
 }
 while ( v12 );
 return v9;
}


/* Function: create_tree_node @ 0x12E4 */
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


/* Function: tree_heap_traversal @ 0x1314 */
long long tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x131C */
long long memory_leak(int a1)
{
 int32x4_t *v2; // x0
 long long v3; // x9
 int32x4_t v5; // q0
 long long v6; // x11
 int32x4_t v7; // q1
 int32x4_t v8; // q2
 int32x4_t *v9; // x10
 int v10; // w8

 v2 = (int32x4_t *)malloc(4LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 if ( a1 >= 1 )
 {
 if ( (unsigned int)a1 < 8 )
 {
 v3 = 0;
 do
 {
LABEL_9:
 v2->n128_u32[v3] = v3;
 ++v3;
 }
 while ( a1 != v3 );
 goto LABEL_10;
 }
 v3 = a1 & 0xFFFFFFF8;
 v5.n128_u64[0] = 0x400000004LL;
 v5.n128_u64[1] = 0x400000004LL;
 v6 = v3;
 v7.n128_u64[0] = 0x800000008LL;
 v7.n128_u64[1] = 0x800000008LL;
 v8 = *(int32x4_t *)xmmword_1C40;
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
 if ( v3 != a1 )
 goto LABEL_9;
 }
LABEL_10:
 if ( a1 >= 0 )
 v10 = a1;
 else
 v10 = a1 + 1;
 return v2->n128_u32[v10 >> 1];
}


/* Function: dangling_pointer @ 0x13C4 */
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


/* Function: double_free @ 0x1410 */
long long double_free(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x1424 */
long long heap_overflow()
{
 return 0;
}


/* Function: test_heap_memory @ 0x142C */
void test_heap_memory()
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
 int stat_loc; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_2247);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 v0 = (unsigned long long *)malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 v0[0] = xmmword_1C50[0];
 v0[1] = 5;
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
 *(unsigned long long *)(v2 + 20) = xmmword_1C60[0];
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
 waitpid(v10, &stat_loc, 0);
 v11 = stat_loc & 0x7F;
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((unsigned int)v11 << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_1F0A, v11);
 }
 else
 {
 printf(byte_1EE5, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1660 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1674 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1684 */
long long global_array_access(unsigned int a1)
{
 if ( a1 <= 9 )
 return global_array[a1];
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_local @ 0x16A4 */
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


/* Function: call_static_func @ 0x16BC */
long long call_static_func(int a1)
{
 return (2 * a1) | 1u;
}


/* Function: access_extern_global @ 0x16CC */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x16E0 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x16E8 */
long long read_const_data()
{
 return (unsigned int)(unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x16FC */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1704 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x170C */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1714 */
long long set_file_static(long long result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x1720 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x172C */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x1738 */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr(0);
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1750 */
long long global_heap_store(unsigned int *a1)
{
 global_heap_ptr = (long long)a1;
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x176C */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1774 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x177C */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1784 */
long long test_static_global()
{
 int v0; // w0
 int v2; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_2265);
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
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v2 = 100;
 global_heap_ptr = (long long)&v2;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1944 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: memop_memset @ 0x194C */
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


/* Function: memop_memcpy @ 0x198C */
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


/* Function: memop_memmove @ 0x19D4 */
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


/* Function: memop_memcmp @ 0x1A14 */
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


/* Function: memop_bzero @ 0x1A50 */
long long memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x1A88 */
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


/* Function: memop_unaligned_access @ 0x1AC4 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x1AD8 */
long long memop_memory_barrier(int *a1)
{
 int v1; // w8

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 __dmb(0xBu);
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x1AF8 */
long long test_memory_op_functions()
{
 int v1; // [xsp+Ch] [xbp-14h]

 puts(asc_2289);
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


/* Function: main @ 0x1BD4 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x1BF8 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x1C00 */
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
