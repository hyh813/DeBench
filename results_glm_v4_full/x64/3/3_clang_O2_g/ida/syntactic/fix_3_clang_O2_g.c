#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <emmintrin.h>
#include <smmintrin.h>
#include <immintrin.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
/* uint8_t, uint16_t, uint32_t, uint64_t already defined by <stdint.h> */
/* int8_t, int16_t, int32_t, int64_t already defined by <stdint.h> */
/* Standard types (size_t, ssize_t, etc.) already defined by system headers */
/* intmax_t and uintmax_t already defined by system headers */

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_clang_O2_g
 * Processor: pc
 */

/* Forward declarations for types used in the code */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Forward declarations for functions used before definition */
int extern_function(int x);
int double_value(int x);

/* Global variable declarations */
extern void _gmon_start__(void);
__attribute__((weak)) int (*global_func_ptr)(int) = NULL;
__attribute__((weak)) void *global_heap_ptr = NULL;
__attribute__((weak)) int global_counter = 0;
__attribute__((weak)) int static_local_counter = 0;
__attribute__((weak)) int extern_global_var = 0;
__attribute__((weak)) int file_scope_static = 0;
__attribute__((weak)) int global_array[10] = {0};
__attribute__((weak)) const char *const_string = "Hello";

/* Data declarations */
static const char xmmword_3010[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3020[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3030[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3040[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3050[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3060[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3070[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3080[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3090[16] __attribute__((aligned(16))) = {0};
static const char xmmword_30A0[16] __attribute__((aligned(16))) = {0};
static const char xmmword_30B0[16] __attribute__((aligned(16))) = {0};
static const char xmmword_30C0[16] __attribute__((aligned(16))) = {0};
static const char xmmword_30D0[16] __attribute__((aligned(16))) = {0};
static const char xmmword_30E0[16] __attribute__((aligned(16))) = {0};
static const char xmmword_30F0[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3100[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3110[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3120[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3130[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3140[16] __attribute__((aligned(16))) = {0};
static const char xmmword_3150[16] __attribute__((aligned(16))) = {0};

static const char *s = "";
static const char *asc_3737 = "";
static const char *asc_3755 = "";
static const char *asc_3779 = "";
static const char *aD = "%d\n";
static const char *aFork_0 = "fork";
static const char *byte_33FA = "!";
static const char *byte_33D5 = "%d\n";

/* Helper macro for decompiler artifact */
#define JUMPOUT(x) return

/* Helper macros for byte access */
#define HIDWORD(x) (((unsigned long long)(x) >> 32) & 0xFFFFFFFF)
#define BYTE1(x) (((unsigned long long)(x) >> 8) & 0xFF)

/* Aligned 16-byte type for xmm constant data */
typedef union {
    unsigned char bytes[16];
    __m128i vec;
} __attribute__((aligned(16))) xmm_t;

/* Type for arrays that hold both scalar and vector data */
typedef union {
    unsigned long long scalar;
    __m128i vec;
} v128_t;

/* External functions */

/* Define _gmon_start__ if not provided by linker */
__attribute__((weak)) void _gmon_start__(void) {}

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))0;
 if ( _gmon_start__ )
 {
 _gmon_start__();
 }
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x1210 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1220 */
int local_array(int n)
{
 return 5 * n;
}


/* Function: local_struct @ 0x1230 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x1240 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x1250 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1260 */
int large_stack_frame()
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
 v128_t v11[64]; // [rsp+0h] [rbp-808h]
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
 v11[v1].vec = si128;
 v11[v1 + 1].vec = _mm_add_epi8(si128, v2);
 v11[v1 + 2].vec = _mm_add_epi8(si128, v3);
 v11[v1 + 3].vec = _mm_add_epi8(si128, v4);
 v11[v1 + 4].vec = _mm_add_epi8(si128, v5);
 v11[v1 + 5].vec = _mm_add_epi8(si128, v6);
 v11[v1 + 6].vec = _mm_add_epi8(si128, v7);
 v11[v1 + 7].vec = _mm_add_epi8(si128, v8);
 v1 += 8;
 si128 = _mm_xor_si128(si128, v9);
 }
 while ( v1 != 128 );
 return v12;
}


/* Function: vla_stack @ 0x1350 */
int vla_stack(int n)
{
 int result;
 int *v2;
 long long v3;
 unsigned long long v4;
 unsigned long long v5;
 __m128i v6;
 long long v7;
 __m128i v8;
 __m128i v9;
 __m128i v10;
 __m128i v11;
 __m128i si128;
 __m128i v13;
 int v14;

 result = -1;
 if ( n > 0 && n < 4096 )
 {
 v2 = (int *)malloc(4 * n);
 if ( v2 )
 {
 if ( n < 8 )
 {
 v3 = 0;
 goto LABEL_10;
 }
 v3 = n & 0xFFFFFFF8;
 v4 = ((unsigned long long)(v3 - 8) >> 3) + 1;
 if ( v3 == 8 )
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_30A0);
 v7 = 0;
 if ( (v4 & 1) != 0 )
 {
LABEL_8:
 v13 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30C0), si128);
 *(__m128i *)&v2[v7] = si128;
 *(__m128i *)&v2[v7 + 4] = v13;
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
 *(__m128i *)&v2[v7] = v11;
 *(__m128i *)&v2[v7 + 4] = _mm_add_epi32(v11, v8);
 *(__m128i *)&v2[v7 + 8] = _mm_add_epi32(v11, v9);
 *(__m128i *)&v2[v7 + 12] = _mm_add_epi32(v11, v10);
 v7 += 16;
 v6 = _mm_add_epi32(v6, v9);
 v5 -= 2LL;
 }
 while ( v5 );
 si128 = _mm_add_epi32(v6, v6);
 if ( (v4 & 1) != 0 )
 goto LABEL_8;
 }
 if ( v3 == n )
 {
 result = v2[n / 2];
 free(v2);
 return result;
 }
LABEL_10:
 v14 = 2 * v3;
 do
 {
 v2[v3++] = v14;
 v14 += 2;
 }
 while ( n != v3 );
 result = v2[n / 2];
 free(v2);
 return result;
 }
 }
 return result;
}


/* Function: alloca_usage @ 0x1490 */
int alloca_usage(int n)
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

 if ( n <= 0 )
 return -1;
 v1 = (char *)&v17 - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL);
 if ( (unsigned int)n < 8 )
 {
 v2 = 0;
 goto LABEL_11;
 }
 v2 = n & 0xFFFFFFF8;
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
 if ( v2 != n )
 {
LABEL_11:
 v16 = 3 * v2;
 do
 {
 *(unsigned int *)&v1[4 * v2++] = v16;
 v16 += 3;
 }
 while ( n != v2 );
 }
 return *(unsigned int *)&v1[4 * (n / 2)];
}


/* Function: stack_alias @ 0x15D0 */
long long stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x15E0 */
void test_stack_memory()
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
 v128_t v10[64]; // [rsp+0h] [rbp-808h]
 char v11; // [rsp+400h] [rbp-408h]

 puts(s);
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
 v10[v0].vec = si128;
 v10[v0 + 1].vec = _mm_add_epi8(si128, v2);
 v10[v0 + 2].vec = _mm_add_epi8(si128, v3);
 v10[v0 + 3].vec = _mm_add_epi8(si128, v4);
 v10[v0 + 4].vec = _mm_add_epi8(si128, v5);
 v10[v0 + 5].vec = _mm_add_epi8(si128, v6);
 v10[v0 + 6].vec = _mm_add_epi8(si128, v7);
 v10[v0 + 7].vec = _mm_add_epi8(si128, v8);
 v0 += 8;
 si128 = _mm_xor_si128(si128, v9);
 }
 while ( v0 != 128 );
 printf("MEM-L2-01 (large_stack_frame): %d\n", v11);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1780 */
int heap_basic(int n)
{
 unsigned int *v2; // rax
 long long v3; // rdx
 int v4; // ebx
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

 si128 = _mm_setzero_si128();
 v2 = malloc(4LL * n);
 if ( v2 )
 {
 if ( n <= 0 )
 goto LABEL_14;
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 goto LABEL_12;
 }
 v3 = n & 0xFFFFFFF8;
 v5 = ((unsigned long long)(v3 - 8) >> 3) + 1;
 si128 = _mm_setzero_si128();
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
 if ( v3 != n )
 {
LABEL_12:
 v15 = 2 * v3;
 do
 {
 v2[v3++] = v15;
 v15 += 2;
 }
 while ( n != v3 );
 }
LABEL_14:
 v4 = v2[n / 2];
 free(v2);
 return v4;
 }
 return -1;
}


/* Function: heap_calloc @ 0x18B0 */
int heap_calloc(int n)
{
 unsigned int *v1; // rax
 int v2; // ebx
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

 v1 = calloc(n, 4u);
 if ( v1 )
 {
 v2 = 0;
 if ( n >= 2 )
 {
 v3 = (unsigned int)n;
 v4 = (unsigned int)n - 1LL;
 if ( v4 >= 8 )
 {
 v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
 v7 = ((unsigned char)(((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3;
 if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) - 8 >= 0x18 )
 {
 v11 = ((((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 do
 {
 v8 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&v1[v9 + 25]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&v1[v9 + 17]),
 _mm_loadu_si128((const __m128i *)&v1[v9 + 9])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v1[v9 + 1]), v8)));
 v10 = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&v1[v9 + 29]),
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)&v1[v9 + 21]),
 _mm_loadu_si128((const __m128i *)&v1[v9 + 13])),
 _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v1[v9 + 5]), v10)));
 v9 += 32;
 v11 -= 4LL;
 }
 while ( v11 );
 }
 else
 {
 v8 = 0;
 v9 = 0;
 v10 = 0;
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
 return -1;
}


/* Function: heap_realloc @ 0x1A10 */
int heap_realloc()
{
 unsigned long long *v0; // rax
 void *v1; // rbx
 char *v2; // rax
 int v3; // ebp

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 *((unsigned int *)v0 + 4) = 5;
 v2 = (char *)realloc(v0, 0x28u);
 if ( v2 )
 {
 *((unsigned int *)v2 + 9) = 90;
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
 return v3;
}


/* Function: heap_array @ 0x1A90 */
int heap_array(int n)
{
 unsigned int *v2; // rax
 long long v3; // rdx
 int v4; // ebx
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

 v2 = malloc(4LL * n);
 if ( v2 )
 {
 if ( n <= 0 )
 goto LABEL_14;
 if ( (unsigned int)n < 8 )
 {
 v3 = 0;
 goto LABEL_12;
 }
 v3 = n & 0xFFFFFFF8;
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
 *(unsigned int *)&v2[v8] = _mm_cvtsi128_si32(v15);
 *(unsigned int *)&v2[v8 + 4] = _mm_cvtsi128_si32(v16);
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
 if ( v3 != n )
 {
LABEL_12:
 v17 = 3 * v3;
 do
 {
 v2[v3++] = v17;
 v17 += 3;
 }
 while ( n != v3 );
 }
LABEL_14:
 v4 = v2[n / 2];
 free(v2);
 return v4;
 }
 return -1;
}


/* Function: heap_struct @ 0x1BD0 */
int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0x1BE0 */
int heap_nested(Node **head)
{
 Node *v1; // rax
 Node *v2; // rbx
 Node *v3; // rax

 v1 = (Node *)malloc(0x10u);
 *head = v1;
 if ( !v1 )
 return -1;
 v2 = v1;
 v1->data = 10;
 v3 = (Node *)malloc(0x10u);
 v2->next = v3;
 if ( v3 )
 {
 v3->data = 20;
 v3->next = 0;
 return 0;
 }
 else
 {
 free(v2);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x1C50 */
int linked_list_heap()
{
 unsigned int *v0; // rax
 int v1; // r12d
 unsigned long long *v2; // rbx
 unsigned long long *v3; // rax
 unsigned long long *v4; // r14
 unsigned long long *v5; // rax
 unsigned long long *v6; // r15
 unsigned long long *v7; // rax
 unsigned long long *v8; // r14
 unsigned long long *v9; // rax
 unsigned long long *v10; // rax
 unsigned long long *v11; // rbp
 unsigned long long *v12; // rbp
 unsigned long long *v13; // rbp
 unsigned long long *v14; // rbp

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
 v3[1] = (unsigned long long)v4;
 v2[1] = (unsigned long long)v4;
 v5 = malloc(0x10u);
 if ( v5 )
 {
 v6 = v5;
 *(unsigned int *)v5 = 20;
 v5[1] = (unsigned long long)v6;
 v4[1] = (unsigned long long)v6;
 v7 = malloc(0x10u);
 if ( v7 )
 {
 v8 = v7;
 *(unsigned int *)v7 = 30;
 v7[1] = (unsigned long long)v8;
 v6[1] = (unsigned long long)v8;
 v9 = malloc(0x10u);
 if ( v9 )
 {
 *(unsigned int *)v9 = 40;
 v9[1] = (unsigned long long)v9;
 v8[1] = (unsigned long long)v9;
 v1 = 0;
 v10 = v2;
 do
 {
 v1 += *(unsigned int *)v10;
 v10 = (unsigned long long *)v10[1];
 }
 while ( v10 );
 do
 {
 v11 = (unsigned long long *)v2[1];
 free(v2);
 v2 = v11;
 }
 while ( v11 );
 }
 else
 {
 do
 {
 v14 = (unsigned long long *)v2[1];
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
 v13 = (unsigned long long *)v2[1];
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
 v12 = (unsigned long long *)v2[1];
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
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // rax

result = (TreeNode *)malloc(0x18u);
 if ( result )
 {
 result->data = data;
 result->left = NULL;
 result->right = NULL;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1DE0 */
int tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x1DF0 */
int memory_leak(int n)
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

 v2 = malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 if ( (unsigned int)n >= 8 )
 {
 v3 = n & 0xFFFFFFF8;
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
 v16 = (long long)(uintptr_t)&v2[v6 + 4];
 v17 = 0;
 v18 = _mm_load_si128((const __m128i *)&xmmword_3120);
 v19 = _mm_load_si128((const __m128i *)&xmmword_30C0);
 do
 {
 __m128i tmp1 = si128;
 __m128i tmp2 = _mm_add_epi32(si128, v18);
 si128 = _mm_add_epi32(tmp1, v19);
 v18 = tmp2;
 v17 += 32;
 }
 while ( 32LL * (((unsigned char)((unsigned long long)(v3 - 8) >> 3) + 1) & 3) != v17 );
 (void)si128;
 (void)v18;
 }
 if ( v3 == n )
 return v2[n / 2];
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
 while ( n != v3 );
 }
 return v2[n / 2];
}


/* Function: dangling_pointer @ 0x1FB0 */
int dangling_pointer()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 printf("value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1FF0 */
int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0x2000 */
int heap_overflow()
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
 int v9; // eax
 int v10; // eax
 unsigned int v11; // eax
 int stat_loc; // [rsp+0h] [rbp-14h] BYREF

 stat_loc = 0;
 puts(asc_3737);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 v1 = malloc(0x14u);
 if ( v1 )
 {
 v2 = v1;
 memcpy(v1, xmmword_3100, 16);
 *((unsigned int *)v1 + 4) = 5;
 v3 = (char *)realloc(v1, 0x28u);
 if ( v3 )
 {
 memcpy(v3 + 20, xmmword_3110, 16);
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
 v5 = malloc(0x10u);
 if ( v5 )
 {
 v6 = (void **)v5;
 *v5 = 10;
 v7 = malloc(0x10u);
 v6[1] = v7;
 if ( v7 )
 {
 *v7 = 20;
 *((unsigned long long *)v7 + 1) = 0;
 v8 = 0;
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
 v11 = dangling_pointer();
 printf(aD, v11);
 exit(0);
 }
 if ( v10 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v10, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_33FA, stat_loc & 0x7F);
 }
 else
 {
 printf(byte_33D5, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x2240 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x2250 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x2260 */
int global_array_access(int idx)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 return result;
}


/* Function: static_local @ 0x2280 */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = static_local_counter + 1;
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x22A0 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x22B0 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x22C0 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x22D0 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x22E0 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x22F0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x2300 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x2310 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x2320 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x2330 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x2340 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2360 */
int global_heap_store(int *p)
{
 global_heap_ptr = p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2380 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2390 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x23A0 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x23B0 */
void test_static_global()
{
 int v0; // eax
 int v1; // [rsp+Ch] [rbp-Ch] BYREF

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
 v1 = 100;
 global_heap_ptr = &v1;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x2580 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x2590 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 int result; // eax

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


/* Function: memop_memcpy @ 0x25C0 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 int result; // eax

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


/* Function: memop_memmove @ 0x2600 */
int memop_memmove(void *buf, size_t n)
{
 int result; // eax

 result = -1;
 if ( buf )
 {
 if ( n >= 2 )
 {
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x2630 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // eax
 int v4; // eax
 int v5; // ecx
 bool v6; // cc

 result = 0;
 if ( p1 && p2 && n )
 {
 v4 = memcmp(p1, p2, n);
 v5 = -(v4 != 0);
 v6 = v4 <= 0;
 result = 1;
 if ( v6 )
 return v5;
 }
 return result;
}


/* Function: memop_bzero @ 0x2660 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2680 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 int result; // eax

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


/* Function: memop_unaligned_access @ 0x26B0 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x26C0 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // eax

 if ( !flag )
 return -1;
 v1 = *flag;
 _mm_mfence();
 return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x26E0 */
void test_memory_op_functions()
{
 int v0; // [rsp+4h] [rbp-14h]

 puts(asc_3779);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 printf("MEMOP-L2-03: %c\n", 72);
 printf("MEMOP-L2-04: %d\n", -1);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 _mm_mfence();
 printf("MEMOP-L3-02: %d\n", v0 + 5);
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
int extern_function_impl(int x)
{
 return 3 * x;
}

/* Wrapper for extern_function */
int extern_function(int x) {
    return extern_function_impl(x);
}

/* Function: .term_proc @ 0x27E4 */
void term_proc()
{
 ;
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
