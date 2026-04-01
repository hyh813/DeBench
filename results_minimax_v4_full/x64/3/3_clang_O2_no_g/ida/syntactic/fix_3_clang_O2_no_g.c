/* Auto-injected type definitions by preprocessor */
/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <emmintrin.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* External declarations */
extern void (*_gmon_start__)(void);
long long extern_function(int a1);
long long double_value(int a1);

/* Global variables */
unsigned int global_counter = 0;
unsigned int static_local_counter = 0;
int file_scope_static = 0;
long long global_heap_ptr = 0;
long long (*global_func_ptr)(int) = NULL;
unsigned int global_array[10] = {0};
unsigned int extern_global_var = 0;

/* Windows compatibility macros for HIDWORD and BYTE1 */
#ifndef HIDWORD
#define HIDWORD(x) ((unsigned int)(((unsigned long long)(x) >> 32) & 0xFFFFFFFF))
#endif
#ifndef BYTE1
#define BYTE1(x) ((unsigned int)(((unsigned long long)(x) >> 8) & 0xFF))
#endif

/* IDA Pro helper macro */
#define JUMPOUT(addr) ((void (*)(void))addr)()

/* Constant data - these are 128-bit values used with SSE instructions */
static const unsigned char xmmword_3010[16] = {0};
static const unsigned char xmmword_3020[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
static const unsigned char xmmword_3030[16] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
static const unsigned char xmmword_3040[16] = {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
static const unsigned char xmmword_3050[16] = {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
static const unsigned char xmmword_3060[16] = {5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
static const unsigned char xmmword_3070[16] = {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6};
static const unsigned char xmmword_3080[16] = {7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7};
static const unsigned char xmmword_3090[16] = {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8};
static const unsigned char xmmword_30A0[16] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static const unsigned char xmmword_30B0[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
static const unsigned char xmmword_30C0[16] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
static const unsigned char xmmword_30D0[16] = {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
static const unsigned char xmmword_30E0[16] = {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
static const unsigned char xmmword_30F0[16] = {5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
static const unsigned char xmmword_3100[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
static const unsigned char xmmword_3110[16] = {17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
static const unsigned char xmmword_3120[16] = {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6};
static const unsigned char xmmword_3130[16] = {7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7};
static const unsigned char xmmword_3140[16] = {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8};
static const unsigned char xmmword_3150[16] = {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_clang_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 {
 _gmon_start__();
 }
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Empty stub function - JUMPOUT removed as it causes void operand error */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* Additional string constants */
static const char const_string[] = "TestString";
static const char asc_3737[] = "Heap Memory Tests";
static const char asc_3755[] = "Static/Global Memory Tests";
static const char asc_3779[] = "Memory Operation Tests";
static const char aD[] = "%d\n";
static const char aFork_0[] = "fork";
static const char byte_33FA[] = "signal: %d\n";
static const char byte_33D5[] = "signal: %d\n";




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x1210 */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x1220 */
long long local_array(int a1)
{
 return (unsigned int)(5 * a1);
}


/* Function: local_struct @ 0x1230 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x1240 */
long long address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x1250 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x1260 */
long long large_stack_frame()
{
 __m128i si128; // xmm2
 long long v1; // rax
 __m128i v2; // xmm8
 __m128i v3; // xmm9
 __m128i v4; // xmm3
 __m128i v5; // xmm4
 __m128i v6; // xmm5
 __m128i v7; // xmm6
 __m128i v8; // xmm7
 __m128i v9; // xmm1
 __m128i v11[64]; // [rsp+0h] [rbp-808h]
 char v12; // [rsp+400h] [rbp-408h]

 si128 = _mm_load_si128((const __m128i *)&xmmword_3010);
 v1 = 0;
 v2 = _mm_load_si128((const __m128i *)&xmmword_3020);
 v3 = _mm_load_si128((const __m128i *)&xmmword_3030);
 v4 = _mm_load_si128((const __m128i *)&xmmword_3040);
 v5 = _mm_load_si128((const __m128i *)&xmmword_3050);
 v6 = _mm_load_si128((const __m128i *)&xmmword_3060);
 v7 = _mm_load_si128((const __m128i *)&xmmword_3070);
 v8 = _mm_load_si128((const __m128i *)&xmmword_3080);
 v9 = _mm_load_si128((const __m128i *)&xmmword_3090);
 do
 {
 v11[v1] = si128;
 v11[v1 + 1] = _mm_add_epi8(si128, v2);
 v11[v1 + 2] = _mm_add_epi8(si128, v3);
 v11[v1 + 3] = _mm_add_epi8(si128, v4);
 v11[v1 + 4] = _mm_add_epi8(si128, v5);
 v11[v1 + 5] = _mm_add_epi8(si128, v6);
 v11[v1 + 6] = _mm_add_epi8(si128, v7);
 v11[v1 + 7] = _mm_add_epi8(si128, v8);
 v1 += 8;
 si128 = _mm_xor_si128(si128, v9);
 }
 while ( v1 != 128 );
 return (unsigned int)v12;
}


/* Function: vla_stack @ 0x1350 */
long long vla_stack(unsigned int a1)
{
 long long result; // rax
 char *v2; // rax
 long long v3; // rsi
 unsigned long long v4; // r9
 unsigned long long v5; // rdx
 __m128i v6; // xmm0
 long long v7; // rcx
 __m128i v8; // xmm1
 __m128i v9; // xmm2
 __m128i v10; // xmm3
 __m128i v11; // xmm4
 __m128i si128; // xmm0
 __m128i v13; // xmm1
 int v14; // ecx
 long long v15; // [rsp-8h] [rbp-8h] BYREF

 result = 0xFFFFFFFFLL;
 if ( a1 - 1001 >= 0xFFFFFC18 )
 {
 v2 = (char *)&v15 - ((4LL * a1 + 15) & 0xFFFFFFFFFFFFFFF0LL);
 if ( a1 < 8 )
 {
 v3 = 0;
 goto LABEL_10;
 }
 v3 = a1 & 0xFFFFFFF8;
 v4 = ((unsigned long long)(v3 - 8) >> 3) + 1;
 if ( v3 == 8 )
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_30A0);
 v7 = 0;
 if ( (v4 & 1) != 0 )
 {
LABEL_8:
 v13 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30C0), si128);
 *(__m128i *)&v2[4 * v7] = si128;
 *(__m128i *)&v2[4 * v7 + 16] = v13;
 }
 }
 else
 {
 v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
 v6 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v7 = 0;
 v8 = _mm_load_si128((const __m128i *)&xmmword_30C0);
 v9 = _mm_load_si128((const __m128i *)&xmmword_30D0);
 v10 = _mm_load_si128((const __m128i *)&xmmword_30E0);
 do
 {
 v11 = _mm_add_epi32(v6, v6);
 *(__m128i *)&v2[4 * v7] = v11;
 *(__m128i *)&v2[4 * v7 + 16] = _mm_add_epi32(v11, v8);
 *(__m128i *)&v2[4 * v7 + 32] = _mm_add_epi32(v11, v9);
 *(__m128i *)&v2[4 * v7 + 48] = _mm_add_epi32(v11, v10);
 v7 += 16;
 v6 = _mm_add_epi32(v6, v9);
 v5 -= 2LL;
 }
 while ( v5 );
 si128 = _mm_add_epi32(v6, v6);
 if ( (v4 & 1) != 0 )
 goto LABEL_8;
 }
 if ( v3 == a1 )
 return *(unsigned int *)&v2[4 * ((int)a1 / 2)];
LABEL_10:
 v14 = 2 * v3;
 do
 {
 *(unsigned int *)&v2[4 * v3++] = v14;
 v14 += 2;
 }
 while ( a1 != v3 );
 return *(unsigned int *)&v2[4 * ((int)a1 / 2)];
 }
 return result;
}


/* Function: alloca_usage @ 0x1490 */
long long alloca_usage(int a1)
{
 char *v1; // rax
 long long v2; // rdx
 unsigned long long v4; // r8
 unsigned long long v5; // rcx
 __m128i si128; // xmm0
 long long v7; // rsi
 __m128i v8; // xmm1
 __m128i v9; // xmm2
 __m128i v10; // xmm3
 __m128i v11; // xmm4
 __m128i v12; // xmm4
 __m128i v13; // xmm5
 __m128i v14; // xmm1
 __m128i v15; // xmm0
 int v16; // ecx
 long long v17; // [rsp-8h] [rbp-8h] BYREF

 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v1 = (char *)&v17 - ((4LL * (unsigned int)a1 + 15) & 0xFFFFFFFFFFFFFFF0LL);
 if ( (unsigned int)a1 < 8 )
 {
 v2 = 0;
 goto LABEL_11;
 }
 v2 = a1 & 0xFFFFFFF8;
 v4 = ((unsigned long long)(v2 - 8) >> 3) + 1;
 if ( v2 == 8 )
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v7 = 0;
 if ( (v4 & 1) != 0 )
 {
LABEL_9:
 v14 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
 v15 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30F0), v14);
 *(__m128i *)&v1[4 * v7] = v14;
 *(__m128i *)&v1[4 * v7 + 16] = v15;
 }
 }
 else
 {
 v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
 si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v7 = 0;
 v8 = _mm_load_si128((const __m128i *)&xmmword_30F0);
 v9 = _mm_load_si128((const __m128i *)&xmmword_30C0);
 v10 = _mm_load_si128((const __m128i *)&xmmword_30D0);
 do
 {
 v11 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
 *(__m128i *)&v1[4 * v7] = v11;
 *(__m128i *)&v1[4 * v7 + 16] = _mm_add_epi32(v11, v8);
 v12 = _mm_add_epi32(si128, v9);
 v13 = _mm_add_epi32(_mm_add_epi32(v12, v12), v12);
 *(__m128i *)&v1[4 * v7 + 32] = v13;
 *(__m128i *)&v1[4 * v7 + 48] = _mm_add_epi32(v13, v8);
 v7 += 16;
 si128 = _mm_add_epi32(si128, v10);
 v5 -= 2LL;
 }
 while ( v5 );
 if ( (v4 & 1) != 0 )
 goto LABEL_9;
 }
 if ( v2 != a1 )
 {
LABEL_11:
 v16 = 3 * v2;
 do
 {
 *(unsigned int *)&v1[4 * v2++] = v16;
 v16 += 3;
 }
 while ( a1 != v2 );
 }
 return *(unsigned int *)&v1[4 * (a1 / 2)];
}


/* Function: stack_alias @ 0x15D0 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x15E0 */
int test_stack_memory()
{
 long long v0; // rbx
 __m128i si128; // xmm2
 __m128i v2; // xmm8
 __m128i v3; // xmm9
 __m128i v4; // xmm3
 __m128i v5; // xmm4
 __m128i v6; // xmm5
 __m128i v7; // xmm6
 __m128i v8; // xmm7
 __m128i v9; // xmm1
 __m128i v11[64]; // [rsp+0h] [rbp-808h]
 char v12; // [rsp+400h] [rbp-408h]

 puts("Stack Memory Tests");
 v0 = 0;
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 si128 = _mm_load_si128((const __m128i *)&xmmword_3010);
 v2 = _mm_load_si128((const __m128i *)&xmmword_3020);
 v3 = _mm_load_si128((const __m128i *)&xmmword_3030);
 v4 = _mm_load_si128((const __m128i *)&xmmword_3040);
 v5 = _mm_load_si128((const __m128i *)&xmmword_3050);
 v6 = _mm_load_si128((const __m128i *)&xmmword_3060);
 v7 = _mm_load_si128((const __m128i *)&xmmword_3070);
 v8 = _mm_load_si128((const __m128i *)&xmmword_3080);
 v9 = _mm_load_si128((const __m128i *)&xmmword_3090);
 do
 {
 v11[v0] = si128;
 v11[v0 + 1] = _mm_add_epi8(si128, v2);
 v11[v0 + 2] = _mm_add_epi8(si128, v3);
 v11[v0 + 3] = _mm_add_epi8(si128, v4);
 v11[v0 + 4] = _mm_add_epi8(si128, v5);
 v11[v0 + 5] = _mm_add_epi8(si128, v6);
 v11[v0 + 6] = _mm_add_epi8(si128, v7);
 v11[v0 + 7] = _mm_add_epi8(si128, v8);
 v0 += 8;
 si128 = _mm_xor_si128(si128, v9);
 }
 while ( v0 != 128 );
 printf("MEM-L2-01 (large_stack_frame): %d\n", v12);
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(15));
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1780 */
long long heap_basic(int a1)
{
 unsigned int *v2; // rax
 long long v3; // rdx
 unsigned int v4; // ebx
 unsigned long long v5; // r8
 unsigned long long v6; // rsi
 __m128i v7; // xmm0
 long long v8; // rdi
 __m128i v9; // xmm1
 __m128i v10; // xmm2
 __m128i v11; // xmm3
 __m128i v12; // xmm4
 __m128i si128; // xmm0
 __m128i v14; // xmm1
 int v15; // esi

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 if ( a1 <= 0 )
 goto LABEL_14;
 if ( (unsigned int)a1 < 8 )
 {
 v3 = 0;
 goto LABEL_12;
 }
 v3 = a1 & 0xFFFFFFF8;
 v5 = ((unsigned long long)(v3 - 8) >> 3) + 1;
 if ( v3 == 8 )
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_30A0);
 v8 = 0;
 if ( (v5 & 1) != 0 )
 {
LABEL_10:
 v14 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30C0), si128);
 *(__m128i *)&v2[v8] = si128;
 *(__m128i *)&v2[v8 + 4] = v14;
 }
 }
 else
 {
 v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
 v7 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v8 = 0;
 v9 = _mm_load_si128((const __m128i *)&xmmword_30C0);
 v10 = _mm_load_si128((const __m128i *)&xmmword_30D0);
 v11 = _mm_load_si128((const __m128i *)&xmmword_30E0);
 do
 {
 v12 = _mm_add_epi32(v7, v7);
 *(__m128i *)&v2[v8] = v12;
 *(__m128i *)&v2[v8 + 4] = _mm_add_epi32(v12, v9);
 *(__m128i *)&v2[v8 + 8] = _mm_add_epi32(v12, v10);
 *(__m128i *)&v2[v8 + 12] = _mm_add_epi32(v12, v11);
 v8 += 16;
 v7 = _mm_add_epi32(v7, v10);
 v6 -= 2LL;
 }
 while ( v6 );
 si128 = _mm_add_epi32(v7, v7);
 if ( (v5 & 1) != 0 )
 goto LABEL_10;
 }
 if ( v3 != a1 )
 {
LABEL_12:
 v15 = 2 * v3;
 do
 {
 v2[v3++] = v15;
 v15 += 2;
 }
 while ( a1 != v3 );
 }
LABEL_14:
 v4 = v2[a1 / 2];
 free(v2);
 return v4;
 }
 return (unsigned int)-1;
}


/* Function: heap_calloc @ 0x18B0 */
long long heap_calloc(int a1)
{
 unsigned int *v1; // rax
 unsigned int v2; // ebx
 long long v3; // rcx
 unsigned long long v4; // rsi
 long long v5; // rdx
 unsigned long long v6; // rdx
 long long v7; // rbx
 __m128i v8; // xmm0
 long long v9; // rbp
 __m128i v10; // xmm1
 unsigned long long v11; // rdi
 long long v12; // rdi
 __m128i v13; // xmm0
 __m128i v14; // xmm1

 v1 = calloc(a1, 4u);
 if ( v1 )
 {
 v2 = 0;
 if ( a1 >= 2 )
 {
 v3 = (unsigned int)a1;
 v4 = (unsigned int)a1 - 1LL;
 if ( v4 >= 8 )
 {
 v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
 v7 = ((unsigned char)(((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3;
 if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) - 8 >= 0x18 )
 {
 v11 = ((((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v8 = _mm_setzero_si128();
 v9 = 0;
 v10 = _mm_setzero_si128();
 do
 {
 v8 = _mm_add_epi32(
 v8,
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 25))),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 17))),
 _mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 9)))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 1))), _mm_setzero_si128()))));
 v10 = _mm_add_epi32(
 v10,
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 29))),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 21))),
 _mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 13)))),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)((char *)v1 + 4 * (v9 + 5))), _mm_setzero_si128()))));
 v9 += 32;
 v11 -= 4LL;
 }
 while ( v11 );
 }
 else
 {
 v8 = _mm_setzero_si128();
 v9 = 0;
 v10 = _mm_setzero_si128();
 }
 if ( (((unsigned char)(((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != 0 )
 {
 do
 {
 v12 = (4 * v9) | 4;
 v8 = _mm_add_epi32(v8, _mm_loadu_si128((const __m128i *)((char *)v1 + v12)));
 v10 = _mm_add_epi32(v10, _mm_loadu_si128((const __m128i *)((char *)v1 + v12 + 16)));
 v9 += 8;
 --v7;
 }
 while ( v7 );
 }
 v13 = _mm_add_epi32(v8, v10);
 v14 = _mm_add_epi32(_mm_shuffle_epi32(v13, 238), v13);
 v2 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v14, 85), v14));
 if ( v4 == v6 )
 goto LABEL_15;
 v5 = v6 | 1;
 }
 else
 {
 v2 = 0;
 v5 = 1;
 }
 do
 v2 += v1[v5++];
 while ( v3 != v5 );
 }
LABEL_15:
 free(v1);
 return v2;
 }
 return (unsigned int)-1;
}


/* Function: heap_realloc @ 0x1A10 */
long long heap_realloc()
{
 unsigned long long *v0; // rax
 void *v1; // rbx
 char *v2; // rax
 unsigned int v3; // ebp

 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 *(unsigned long long *)v0 = *(const unsigned long long *)(xmmword_3100);
 *(unsigned int *)((char *)v0 + 8) = 3;
 *(unsigned int *)((char *)v0 + 12) = 4;
 *(unsigned int *)((char *)v0 + 16) = 5;
 v2 = (char *)realloc(v0, 0x28u);
 if ( v2 )
 {
 *(unsigned long long *)(v2 + 20) = *(const unsigned long long *)(xmmword_3110);
 *(unsigned int *)((char *)v2 + 36) = 90;
 v3 = -3;
 if ( *((unsigned int *)v2 + 2) == 3 )
 v3 = 50;
 v1 = v2;
 }
 else
 {
 v3 = -2;
 }
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_array @ 0x1A90 */
long long heap_array(int a1)
{
 unsigned int *v2; // rax
 long long v3; // rdx
 unsigned int v4; // ebx
 unsigned long long v5; // r8
 unsigned long long v6; // rsi
 __m128i si128; // xmm0
 long long v8; // rdi
 __m128i v9; // xmm1
 __m128i v10; // xmm2
 __m128i v11; // xmm3
 __m128i v12; // xmm4
 __m128i v13; // xmm4
 __m128i v14; // xmm5
 __m128i v15; // xmm1
 __m128i v16; // xmm0
 int v17; // esi

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 if ( a1 <= 0 )
 goto LABEL_14;
 if ( (unsigned int)a1 < 8 )
 {
 v3 = 0;
 goto LABEL_12;
 }
 v3 = a1 & 0xFFFFFFF8;
 v5 = ((unsigned long long)(v3 - 8) >> 3) + 1;
 if ( v3 == 8 )
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v8 = 0;
 if ( (v5 & 1) != 0 )
 {
LABEL_10:
 v15 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
 v16 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30F0), v15);
 *(__m128i *)&v2[v8] = v15;
 *(__m128i *)&v2[v8 + 4] = v16;
 }
 }
 else
 {
 v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
 si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v8 = 0;
 v9 = _mm_load_si128((const __m128i *)&xmmword_30F0);
 v10 = _mm_load_si128((const __m128i *)&xmmword_30C0);
 v11 = _mm_load_si128((const __m128i *)&xmmword_30D0);
 do
 {
 v12 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
 *(__m128i *)&v2[v8] = v12;
 *(__m128i *)&v2[v8 + 4] = _mm_add_epi32(v12, v9);
 v13 = _mm_add_epi32(si128, v10);
 v14 = _mm_add_epi32(_mm_add_epi32(v13, v13), v13);
 *(__m128i *)&v2[v8 + 8] = v14;
 *(__m128i *)&v2[v8 + 12] = _mm_add_epi32(v14, v9);
 v8 += 16;
 si128 = _mm_add_epi32(si128, v11);
 v6 -= 2LL;
 }
 while ( v6 );
 if ( (v5 & 1) != 0 )
 goto LABEL_10;
 }
 if ( v3 != a1 )
 {
LABEL_12:
 v17 = 3 * v3;
 do
 {
 v2[v3++] = v17;
 v17 += 3;
 }
 while ( a1 != v3 );
 }
LABEL_14:
 v4 = v2[a1 / 2];
 free(v2);
 return v4;
 }
 return (unsigned int)-1;
}


/* Function: heap_struct @ 0x1BD0 */
long long heap_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: heap_nested @ 0x1BE0 */
long long heap_nested(void **a1)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rbx
 unsigned int *v3; // rax

 v1 = malloc(0x10u);
 *a1 = v1;
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v2 = v1;
 *v2 = 10;
 v3 = malloc(0x10u);
 v2[1] = (unsigned int)(uintptr_t)v3;
 if ( v3 )
 {
 *v3 = 20;
 v3[1] = 0;
 return 0;
 }
 else
 {
 free(v2);
 return 4294967294LL;
 }
}


/* Function: linked_list_heap @ 0x1C50 */
long long linked_list_heap(unsigned int a1)
{
 unsigned int *v0; // rax
 unsigned int v1; // r12d
 unsigned int *v2; // rbx
 unsigned int *v3; // rax
 unsigned int *v4; // r14
 unsigned int *v5; // rax
 unsigned int *v6; // r15
 unsigned int *v7; // rax
 unsigned int *v8; // r14
 unsigned int *v9; // rax
 unsigned int *v10; // rax
 unsigned int *v11; // rbp
 unsigned int *v12; // rbp
 unsigned int *v13; // rbp
 unsigned int *v14; // rbp

 v0 = malloc(0x10u);
 v1 = -1;
 if ( v0 )
 {
 v2 = v0;
 *v0 = 0;
 v3 = malloc(0x10u);
 if ( v3 )
 {
 v4 = v3;
 *(unsigned int *)v3 = 10;
 v3[1] = 0;
 v2[1] = (unsigned int)(uintptr_t)v3;
 v5 = malloc(0x10u);
 if ( v5 )
 {
 v6 = v5;
 *(unsigned int *)v5 = 20;
 v5[1] = 0;
 v4[1] = (unsigned int)(uintptr_t)v5;
 v7 = malloc(0x10u);
 if ( v7 )
 {
 v8 = v7;
 *(unsigned int *)v7 = 30;
 v7[1] = 0;
 v6[1] = (unsigned int)(uintptr_t)v7;
 v9 = malloc(0x10u);
 if ( v9 )
 {
 *(unsigned int *)v9 = 40;
 v9[1] = 0;
 v8[1] = (unsigned int)(uintptr_t)v9;
 v1 = 0;
 v10 = v2;
 do
 {
 v1 += *(unsigned int *)v10;
 v10 = (unsigned int *)v10[1];
 }
 while ( v10 );
 do
 {
 v11 = (unsigned int *)v2[1];
 free(v2);
 v2 = v11;
 }
 while ( v11 );
 }
 else
 {
 do
 {
 v14 = (unsigned int *)v2[1];
 free(v2);
 v2 = v14;
 }
 while ( v14 );
 }
 }
 else
 {
 do
 {
 v13 = (unsigned int *)v2[1];
 free(v2);
 v2 = v13;
 }
 while ( v13 );
 }
 }
 else
 {
 do
 {
 v12 = (unsigned int *)v2[1];
 free(v2);
 v2 = v12;
 }
 while ( v12 );
 }
 }
 else
 {
 free(v2);
 }
 }
 return v1;
}


/* Function: create_tree_node @ 0x1DC0 */
char * create_tree_node(int a1)
{
 char *result; // rax

 result = (char *)malloc(0x18u);
 if ( result )
 {
 *(unsigned int *)result = a1;
 *(unsigned long long *)(result + 8) = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1DE0 */
long long tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x1DF0 */
long long memory_leak(int a1)
{
 unsigned int *v2; // rax
 long long v3; // rdx
 __m128i si128; // xmm0
 long long v6; // rbx
 unsigned long long v7; // rdi
 __m128i v8; // xmm8
 __m128i v9; // xmm9
 __m128i v10; // xmm10
 __m128i v11; // xmm4
 __m128i v12; // xmm5
 __m128i v13; // xmm6
 __m128i v14; // xmm7
 __m128i v15; // xmm1
 long long v16; // rdi
 long long v17; // rbx
 __m128i v18; // xmm1
 __m128i v19; // xmm2

 v2 = malloc(4LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 if ( a1 > 0 )
 {
 if ( (unsigned int)a1 >= 8 )
 {
 v3 = a1 & 0xFFFFFFF8;
 if ( (unsigned long long)(v3 - 8) >= 0x18 )
 {
 v7 = (((unsigned long long)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v6 = 0;
 v8 = _mm_load_si128((const __m128i *)&xmmword_3120);
 v9 = _mm_load_si128((const __m128i *)&xmmword_30C0);
 v10 = _mm_load_si128((const __m128i *)&xmmword_30F0);
 v11 = _mm_load_si128((const __m128i *)&xmmword_30D0);
 v12 = _mm_load_si128((const __m128i *)&xmmword_3130);
 v13 = _mm_load_si128((const __m128i *)&xmmword_30E0);
 v14 = _mm_load_si128((const __m128i *)&xmmword_3140);
 v15 = _mm_load_si128((const __m128i *)&xmmword_3150);
 do
 {
 *(__m128i *)&v2[v6] = si128;
 *(__m128i *)&v2[v6 + 4] = _mm_add_epi32(si128, v8);
 *(__m128i *)&v2[v6 + 8] = _mm_add_epi32(si128, v9);
 *(__m128i *)&v2[v6 + 12] = _mm_add_epi32(si128, v10);
 *(__m128i *)&v2[v6 + 16] = _mm_add_epi32(si128, v11);
 *(__m128i *)&v2[v6 + 20] = _mm_add_epi32(si128, v12);
 *(__m128i *)&v2[v6 + 24] = _mm_add_epi32(si128, v13);
 *(__m128i *)&v2[v6 + 28] = _mm_add_epi32(si128, v14);
 v6 += 32;
 si128 = _mm_add_epi32(si128, v15);
 v7 -= 4LL;
 }
 while ( v7 );
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
 v6 = 0;
 }
 if ( (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != 0 )
 {
 v16 = (long long)&v2[v6 + 4];
 v17 = 0;
 v18 = _mm_load_si128((const __m128i *)&xmmword_3120);
 v19 = _mm_load_si128((const __m128i *)&xmmword_30C0);
 do
 {
 *(__m128i *)(v16 + v17 - 16) = si128;
 *(__m128i *)(v16 + v17) = _mm_add_epi32(si128, v18);
 si128 = _mm_add_epi32(si128, v19);
 v17 += 32;
 }
 while ( 32LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v17 );
 }
 if ( v3 == a1 )
 return (unsigned int)v2[a1 / 2];
 }
 else
 {
 v3 = 0;
 }
 do
 {
 v2[v3] = v3;
 ++v3;
 }
 while ( a1 != v3 );
 }
 return (unsigned int)v2[a1 / 2];
}


/* Function: dangling_pointer @ 0x1FB0 */
long long dangling_pointer()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx

 v0 = (unsigned int *)malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 printf("value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1FF0 */
long long double_free(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x2000 */
long long heap_overflow()
{
 return 0;
}


/* Function: test_heap_memory @ 0x2010 */
void test_heap_memory()
{
 long long v0; // rax
 unsigned long long *v1; // rax
 void *v2; // rbx
 char *v3; // rax
 int v4; // ebp
 unsigned int *v5; // rax
 void **v6; // rbx
 unsigned int *v7; // rax
 int v8; // esi
 const char *v9; // rdi
 int v10; // eax
 int v11; // eax
 unsigned int v12; // eax
 int stat_loc; // [rsp+0h] [rbp-14h] BYREF

 stat_loc = HIDWORD(v0);
 puts(asc_3737);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 v1 = malloc(0x14u);
 if ( v1 )
 {
 v2 = v1;
 *v1 = *(const unsigned long long *)xmmword_3100;
 *((unsigned int *)v1 + 4) = 5;
 v3 = (char *)realloc(v1, 0x28u);
 if ( v3 )
 {
 *(unsigned long long *)(v3 + 20) = *(const unsigned long long *)xmmword_3110;
 *((unsigned int *)v3 + 9) = 90;
 v4 = -3;
 if ( *((unsigned int *)v3 + 2) == 3 )
 v4 = 50;
 v2 = v3;
 }
 else
 {
 v4 = -2;
 }
 free(v2);
 }
 else
 {
 v4 = -1;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v4);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 void *heap_nested_arg;
 v5 = malloc(0x10u);
 if ( v5 )
 {
 v6 = (void **)v5;
 *v5 = 10;
 v7 = malloc(0x10u);
 v6[1] = v7;
 heap_nested_arg = v6;
 v8 = heap_nested((void **)&heap_nested_arg);
 if ( v7 )
 {
 *v7 = 20;
 *((unsigned long long *)v7 + 1) = 0;
 }
 else
 {
 free(v6);
 v8 = -2;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v8);
 free(v6[1]);
 v9 = (const char *)v6;
 free(v6);
 }
 else
 {
 v9 = "HEAP-L2-06 (heap_nested): %d\n";
 printf("HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v10 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v10);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 printf("HEAP-L3-03 (memory_leak): %d\n", 2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v11 = fork();
 if ( !v11 )
 {
 v12 = dangling_pointer("HEAP-L3-04 (dangling_pointer): ");
 printf(aD, v12);
 exit(0);
 }
 if ( v11 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v11, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_33FA, stat_loc & 0x7F);
 }
 else
 {
 printf(&byte_33D5, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x2240 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x2250 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x2260 */
long long global_array_access(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 9 )
 return global_array[a1];
 return result;
}


/* Function: static_local @ 0x2280 */
long long static_local(int a1)
{
 long long result; // rax

 result = 0;
 if ( !a1 )
 result = (unsigned int)(static_local_counter + 1);
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x22A0 */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x22B0 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x22C0 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x22D0 */
long long read_const_data()
{
 return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x22E0 */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x22F0 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x2300 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x2310 */
void set_file_static(int a1)
{
 file_scope_static = a1;
}


/* Function: get_file_static @ 0x2320 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x2330 */
void set_global_callback(int (*a1)(int))
{
 global_func_ptr = a1;
}


/* Function: call_global_callback @ 0x2340 */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x2360 */
long long global_heap_store(unsigned int *a1)
{
 global_heap_ptr = (long long)a1;
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x2380 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2390 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x23A0 */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x23B0 */
int test_static_global()
{
 int v0; // eax
 int v2; // [rsp+Ch] [rbp-Ch] BYREF

 puts(asc_3755);
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
 printf("STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
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


/* Function: double_value @ 0x2580 */
long long double_value(int a1)
{
 return (int)(2 * a1);
}


/* Function: memop_memset @ 0x2590 */
long long memop_memset(unsigned char *a1, size_t a2, int a3)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 )
 {
 if ( a2 )
 {
 memset(a1, a3, a2);
 return *a1;
 }
 }
 return result;
}


/* Function: memop_memcpy @ 0x25C0 */
long long memop_memcpy(char *a1, const void *a2, size_t a3)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 && a2 )
 {
 if ( a3 )
 {
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[(a3 & 0xFFFFFFFFFFFFFFFCLL) - 4];
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x2600 */
long long memop_memmove(char *src, unsigned long long a2)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( src )
 {
 if ( a2 >= 2 )
 {
 memmove(src + 1, src, a2 - 1);
 return (unsigned int)src[1];
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x2630 */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 long long result; // rax
 int v4; // eax
 unsigned int v5; // ecx
 bool v6; // cc

 result = 0;
 if ( a1 && a2 && a3 )
 {
 v4 = memcmp(a1, a2, a3);
 v5 = -(v4 != 0);
 v6 = v4 <= 0;
 result = 1;
 if ( v6 )
 return v5;
 }
 return result;
}


/* Function: memop_bzero @ 0x2660 */
long long memop_bzero(unsigned char *a1, size_t a2)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, a2);
 return *a1;
}


/* Function: memop_bcopy @ 0x2680 */
long long memop_bcopy(void *src, unsigned char *dest, size_t a3)
{
 long long result; // rax

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


/* Function: memop_unaligned_access @ 0x26B0 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x26C0 */
long long memop_memory_barrier(int *a1)
{
 int v1; // eax

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 _mm_mfence();
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x26E0 */
int test_memory_op_functions()
{
 int v1; // [rsp+4h] [rbp-14h]

 puts(asc_3779);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 printf("MEMOP-L2-03: %c\n", 72);
 printf("MEMOP-L2-04: %d\n", -1);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v1 = 5;
 _mm_mfence();
 return printf("MEMOP-L3-02: %d\n", v1 + 5);
}


/* Function: main @ 0x27C0 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x27E0 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x27E4 */
void term_proc()
{
}


/* FAILED to decompile: free @ 0x60D0 */

/* FAILED to decompile: __libc_start_main @ 0x60D8 */

/* FAILED to decompile: puts @ 0x60E0 */

/* FAILED to decompile: printf @ 0x60E8 */

/* FAILED to decompile: memset @ 0x60F0 */

/* FAILED to decompile: memcmp @ 0x60F8 */

/* FAILED to decompile: calloc @ 0x6100 */

/* FAILED to decompile: memcpy @ 0x6108 */

/* FAILED to decompile: malloc @ 0x6110 */

/* FAILED to decompile: realloc @ 0x6118 */

/* FAILED to decompile: memmove @ 0x6120 */

/* FAILED to decompile: waitpid @ 0x6128 */

/* FAILED to decompile: perror @ 0x6130 */

/* FAILED to decompile: exit @ 0x6138 */

/* FAILED to decompile: fork @ 0x6140 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6148 */

/* FAILED to decompile: __gmon_start__ @ 0x6158 */

/* Total functions decompiled: 64, failed: 17 */
