#include <emmintrin.h>
#include <stdbool.h>

/* Platform-specific intrinsics and macros */
#ifdef _MSC_VER
#include <intrin.h>
#else
/* GCC/Clang compatible definitions */
#define __readfsqword(offset) ({ unsigned long long val; __asm__ __volatile__("movq %%gs:%1,%0" : "=r"(val) : "m"(*(const unsigned long long*)((unsigned long long)(offset)))); val; })
#define _InterlockedOr64(addr, val) __sync_fetch_and_or(addr, val)
#endif

/* BYTE1 macro - extracts bits 8-15 from a 32-bit value */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
// typedef long long int64_t;  // Already defined in system headers
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations */
typedef struct Node Node;
typedef struct TreeNode TreeNode;

struct Node {
    int data;
    Node *next;
    Node *right;
};

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

/* Global variable declarations */
static const __m128i xmmword_3710 = {0};
static const __m128i xmmword_3720 = {0};
static const __m128i xmmword_3730 = {0};
static const __m128i xmmword_3740 = {0};
static const __m128i xmmword_3750 = {0};
static const __m128i xmmword_3760 = {0};
static const __m128i xmmword_3770 = {0};
static const __m128i xmmword_3780 = {0};
static const __m128i xmmword_3790 = {0};
static const __m128i xmmword_37A0 = {0};
static const __m128i xmmword_37B0 = {0};
static const char s[] = "Stack Memory Tests";
static const char asc_30E6[] = "Heap Memory Tests";
static const char aD[] = "value after free: %d\n";
static const char aFork_0[] = "fork";
static const char byte_33F0[] = "signal\n";
static const char byte_33C8[] = "exit: %d\n";
static const char asc_3438[] = "Static and Global Memory Tests";
static const char asc_3688[] = "Memory Operation Tests";
int global_counter = 0;
int global_array[10] = {0};
static int counter_1 = 0;
extern int extern_global_var;
extern void (*_gmon_start__)(void);
static const char const_string[] = "test";
static int (*global_func_ptr)(int) = NULL;
static int file_scope_static = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_gcc_O3_g
 * Processor: pc
 */







/* Function: main @ 0x1220 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1340 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: alloca_usage_0 @ 0x1350 */
long long alloca_usage_0(int n)
{
 return 15;
}


/* Function: local_vars @ 0x1360 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1370 */
int local_array(int n)
{
 return _mm_cvtsi128_si32(
 _mm_mul_epu32(
 _mm_srli_epi64(_mm_shuffle_epi32(_mm_cvtsi32_si128(n), 0), 0x20u),
 _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_3710), 0x20u)));
}


/* Function: local_struct @ 0x13A0 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x13B0 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x13C0 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x13D0 */
int large_stack_frame()
{
 __m128i si128; // xmm3
 __m128i v1; // xmm9
 char *v2; // rax
 __m128i v3; // xmm7
 __m128i v4; // xmm8
 __m128i v5; // xmm6
 __m128i v6; // xmm5
 __m128i v7; // xmm2
 __m128i v8; // xmm4
 __m128i v9; // xmm0
 __m128i v10; // xmm4
 __m128i v11; // xmm1
 __m128i v12; // xmm4
 __m128i v13; // xmm0
 __m128i v14; // xmm2
 __m128i v15; // xmm1
 __m128i v16; // xmm4
 __m128i v17; // xmm0
 __m128i v18; // xmm4
 char large_buf[2048]; // [rsp+0h] [rbp-818h] BYREF
 char v21; // [rsp+800h] [rbp-18h] BYREF
 unsigned long long v22; // [rsp+808h] [rbp-10h]

 si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
 v1 = _mm_load_si128((const __m128i *)&xmmword_3730);
 v22 = __readfsqword(0x28u);
 v2 = large_buf;
 v3 = _mm_load_si128((const __m128i *)&xmmword_3750);
 v4 = _mm_load_si128((const __m128i *)&xmmword_3740);
 v5 = _mm_load_si128((const __m128i *)&xmmword_3760);
 v6 = _mm_load_si128((const __m128i *)&xmmword_3770);
 do
 {
 v7 = si128;
 v2 += 16;
 si128 = _mm_add_epi32(si128, v1);
 v8 = _mm_add_epi32(v7, v4);
 v9 = _mm_unpackhi_epi16(v7, v8);
 v10 = _mm_unpacklo_epi16(v7, v8);
 v11 = _mm_unpacklo_epi16(v10, v9);
 v12 = _mm_unpackhi_epi16(v10, v9);
 v13 = v7;
 v14 = _mm_add_epi32(v7, v5);
 v15 = _mm_unpacklo_epi16(v11, v12);
 v16 = _mm_add_epi32(v13, v3);
 v17 = _mm_unpacklo_epi16(v16, v14);
 v18 = _mm_unpackhi_epi16(v16, v14);
 *((__m128i *)v2 - 1) = _mm_packus_epi16(
 _mm_and_si128(v15, v6),
 _mm_and_si128(
 _mm_unpacklo_epi16(_mm_unpacklo_epi16(v17, v18), _mm_unpackhi_epi16(v17, v18)),
 v6));
 }
 while ( &v21 != v2 );
 return large_buf[1024];
}


/* Function: vla_stack @ 0x14D0 */
int vla_stack(int n)
{
 unsigned int v2; // edi
 long long v3; // rcx
 unsigned int *v4; // rsi
 short v5; // cx
 signed long long v6; // rcx
 void *v7; // rsp
 __m128i si128; // xmm1
 __m128i v9; // xmm2
 __m128i *v10; // rax
 __m128i v11; // xmm0
 unsigned int v12; // eax
 int v13; // ecx
 unsigned int *v14; // rdi
 unsigned int v17[1022]; // [rsp+8h] [rbp-1010h] BYREF
 unsigned long long v18[2]; // [rsp+1008h] [rbp-10h] BYREF

 v2 = n - 1;
 v18[1] = __readfsqword(0x28u);
 if ( v2 <= 0x3E7 )
 {
 v3 = 4LL * n + 15;
 v4 = (unsigned int *)((char *)v18 - (v3 & 0xFFFFFFFFFFFFF000LL));
 v5 = v3 & 0xFFF0;
 if ( v18 != (unsigned long long *)v4 )
 {
 while ( v17 != v4 )
 ;
 }
 v6 = v5 & 0xFFF;
 v7 = alloca(v6);
 if ( v6 )
 *(unsigned long long *)((char *)&v17[-2] + v6) = *(unsigned long long *)((char *)&v17[-2] + v6);
 if ( v2 <= 2 )
 {
 v12 = 0;
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
 v9 = _mm_load_si128((const __m128i *)&xmmword_3740);
 v10 = (__m128i *)v17;
 do
 {
 v11 = si128;
 ++v10;
 si128 = _mm_add_epi32(si128, v9);
 v10[-1] = _mm_slli_epi32(v11, 1u);
 }
 while ( v10 != (__m128i *)&v17[4 * ((unsigned int)n >> 2)] );
 v12 = n & 0xFFFFFFFC;
 if ( (n & 3) == 0 )
 return v17[n >> 1];
 }
 v13 = 2 * v12;
 v14 = &v17[v12];
 *v14 = 2 * v12;
 if ( n > (int)(v12 + 1) )
 {
 v14[1] = v13 + 2;
 if ( n > (int)(v12 + 2) )
 v14[2] = v13 + 4;
 }
 return v17[n >> 1];
 }
 return -1;
}


/* Function: alloca_usage @ 0x1600 */
int alloca_usage(int n)
{
 long long v1; // rcx
 long long *v2; // rsi
 short v3; // cx
 signed long long v4; // rcx
 void *v5; // rsp
 __m128i si128; // xmm1
 __m128i v7; // xmm3
 __m128i *v8; // rax
 __m128i v9; // xmm2
 int v10; // eax
 int v11; // ecx
 long long v12; // r8
 long long v14; // [rsp+0h] [rbp-1018h]
 long long v15; // [rsp+8h] [rbp-1010h] BYREF
 unsigned char v16[7]; // [rsp+10h] [rbp-1008h] BYREF
 unsigned long long v17[2]; // [rsp+1008h] [rbp-10h] BYREF

 v17[1] = __readfsqword(0x28u);
 if ( n > 0 )
 {
 v1 = 4LL * n + 23;
 v2 = (unsigned long long *)((char *)v17 - (v1 & 0xFFFFFFFFFFFFF000LL));
 v3 = v1 & 0xFFF0;
 if ( v17 != v2 )
 {
 while ( &v15 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 *(long long *)((char *)&v14 + v4) = *(long long *)((char *)&v14 + v4);
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v10 = 0;
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
 v7 = _mm_load_si128((const __m128i *)&xmmword_3740);
 v8 = (__m128i *)v16;
 do
 {
 v9 = si128;
 ++v8;
 si128 = _mm_add_epi32(si128, v7);
 v8[-1] = _mm_add_epi32(_mm_slli_epi32(v9, 1u), v9);
 }
 while ( v8 != (__m128i *)&v16[16 * ((unsigned int)n >> 2)] );
 v10 = n & 0x7FFFFFFC;
 if ( (n & 3) == 0 )
 return *(unsigned int *)&v16[4 * (n >> 1)];
 }
 v11 = 3 * v10;
 *(unsigned int *)&v16[4 * v10] = 3 * v10;
 v12 = 4LL * v10;
 if ( n > v10 + 1 )
 {
 *(unsigned int *)&v16[v12 + 4] = v11 + 3;
 if ( n > v10 + 2 )
 *(unsigned int *)&v16[v12 + 8] = v11 + 6;
 }
 return *(unsigned int *)&v16[4 * (n >> 1)];
 }
 return -1;
}


/* Function: stack_alias @ 0x1740 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x1750 */
void test_stack_memory()
{
 int v0; // eax
 int v1; // eax

 puts(s);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage_0(1);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1850 */
int heap_basic(int n)
{
 __m128i *v2; // rax
 __m128i *v3; // rdi
 __m128i si128; // xmm1
 __m128i v5; // xmm2
 __m128i *v6; // rdx
 __m128i v7; // xmm0
 int v8; // eax
 int v9; // edx
 long long v10; // rsi
 int v11; // r12d

 v2 = (__m128i *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 v3 = v2;
 if ( n > 0 )
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v8 = 0;
 goto LABEL_7;
 }
 si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
 v5 = _mm_load_si128((const __m128i *)&xmmword_3740);
 v6 = &v2[(unsigned int)n >> 2];
 do
 {
 v7 = si128;
 ++v2;
 si128 = _mm_add_epi32(si128, v5);
 ((int *)v2)[-1] = _mm_cvtsi128_si32(_mm_slli_epi32(v7, 1u));
 }
 while ( v2 != v6 );
 v8 = n & 0x7FFFFFFC;
 if ( (n & 3) != 0 )
 {
LABEL_7:
 v9 = 2 * v8;
 ((int *)v3)[v8] = 2 * v8;
 v10 = v8;
 if ( v8 + 1 < n )
 {
 ((int *)v3)[v10 + 1] = v9 + 2;
 if ( n > v8 + 2 )
 ((int *)v3)[v10 + 2] = v9 + 4;
 }
 }
 }
 v11 = ((int *)v3)[n / 2];
 free(v3);
 return v11;
}


/* Function: heap_calloc @ 0x1930 */
int heap_calloc(int n)
{
 const __m128i *v2; // rax
 __m128i *v3; // rdi
 const __m128i *v4; // rdx
 __m128i v5; // xmm0
 __m128i v6; // xmm2
 int v7; // eax
 __m128i v8; // xmm0
 int v9; // r12d
 long long v10; // rcx

 v2 = (const __m128i *)calloc(n, 4u);
 if ( !v2 )
 return -1;
 v3 = (__m128i *)v2;
 if ( n <= 0 )
 {
 v9 = 0;
 }
 else
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v7 = 0;
 v9 = 0;
 goto LABEL_7;
 }
 v4 = v2;
 v5 = _mm_setzero_si128();
 do
 {
 v6 = _mm_loadu_si128(v4++);
 v5 = _mm_add_epi32(v5, v6);
 }
 while ( v4 != &v2[(unsigned int)n >> 2] );
 v7 = n & 0x7FFFFFFC;
 v8 = _mm_add_epi32(v5, _mm_srli_si128(v5, 8));
 v9 = _mm_cvtsi128_si32(_mm_add_epi32(v8, _mm_srli_si128(v8, 4)));
 if ( (n & 3) != 0 )
 {
LABEL_7:
 v10 = v7;
 v9 += ((int *)v3)[v10];
 if ( n > v7 + 1 )
 {
 v9 += ((int *)v3)[v10 + 1];
 if ( n > v7 + 2 )
 v9 += ((int *)v3)[v10 + 2];
 }
 }
 }
 free(v3);
 return v9;
}


/* Function: heap_realloc @ 0x1A10 */
int heap_realloc()
{
 __m128i *v0; // rax
 __m128i si128; // xmm0
 __m128i *v2; // rbp
 char *v3; // rax
 bool v4; // zf
 int v5; // r12d

 v0 = (__m128i *)malloc(0x14u);
 if ( !v0 )
 return -1;
 si128 = _mm_load_si128((const __m128i *)&xmmword_3780);
 v2 = v0;
 ((int *)v0)[4] = 5;
 *v0 = si128;
 v3 = (char *)realloc(v0, 0x28u);
 if ( v3 )
 {
 v4 = *((unsigned int *)v3 + 2) == 3;
 v5 = 50;
 *(__m128i *)(v3 + 20) = _mm_load_si128((const __m128i *)&xmmword_3790);
 if ( !v4 )
 v5 = -3;
 free(v3);
 }
 else
 {
 v5 = -2;
 free(v2);
 }
 return v5;
}


/* Function: heap_array @ 0x1AA0 */
int heap_array(int n)
{
 __m128i *v2; // rax
 __m128i *v3; // rdi
 __m128i si128; // xmm1
 __m128i v5; // xmm3
 __m128i *v6; // rdx
 __m128i v7; // xmm2
 int v8; // eax
 int v9; // edx
 long long v10; // rsi
 int v11; // r12d

 v2 = (__m128i *)malloc(4LL * n);
 if ( !v2 )
 return -1;
 v3 = v2;
 if ( n > 0 )
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v8 = 0;
 goto LABEL_7;
 }
 si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
 v5 = _mm_load_si128((const __m128i *)&xmmword_3740);
 v6 = &v2[(unsigned int)n >> 2];
 do
 {
 v7 = si128;
 ++v2;
 si128 = _mm_add_epi32(si128, v5);
 ((int *)v2)[-1] = _mm_cvtsi128_si32(_mm_add_epi32(_mm_slli_epi32(v7, 1u), v7));
 }
 while ( v2 != v6 );
 v8 = n & 0x7FFFFFFC;
 if ( (n & 3) != 0 )
 {
LABEL_7:
 v9 = 3 * v8;
 ((int *)v3)[v8] = 3 * v8;
 v10 = v8;
 if ( n > v8 + 1 )
 {
 ((int *)v3)[v10 + 1] = v9 + 3;
 if ( n > v8 + 2 )
 ((int *)v3)[v10 + 2] = v9 + 6;
 }
 }
 }
 v11 = ((int *)v3)[n / 2];
 free(v3);
 return v11;
}


/* Function: heap_struct @ 0x1B90 */
int heap_struct(int x)
{
 void *v1; // rax
 int v2; // r12d

 v1 = malloc(8u);
 if ( !v1 )
 return -1;
 v2 = 3 * x;
 free(v1);
 return v2;
}


/* Function: heap_nested @ 0x1BD0 */
int heap_nested(Node **head)
{
 Node *v1; // rax
 Node *v2; // rbp
 Node *v3; // rax

 v1 = (Node *)malloc(0x10u);
 *head = v1;
 if ( !v1 )
 return -1;
 v1->data = 10;
 v2 = v1;
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


/* Function: linked_list_heap @ 0x1C40 */
int linked_list_heap()
{
 unsigned long long *v0; // r12
 int v1; // ebp
 unsigned long long *v2; // rbx
 unsigned long long *i; // rax
 void *v4; // rdi
 int v5; // r12d
 unsigned long long *v7; // rax
 void *v8; // rdi

 v0 = 0;
 v1 = 0;
 v2 = 0;
 for ( i = malloc(0x10u); i; i = malloc(0x10u) )
 {
 *(unsigned int *)i = v1;
 i[1] = 0;
 if ( v2 )
 {
 v1 += 10;
 v0[1] = i;
 if ( v1 == 50 )
 goto LABEL_10;
 }
 else
 {
 v1 += 10;
 v2 = i;
 if ( v1 == 50 )
 {
LABEL_10:
 v7 = v2;
 v5 = 0;
 do
 {
 v5 += *(unsigned int *)v7;
 v7 = (unsigned long long *)v7[1];
 }
 while ( v7 );
 do
 {
 v8 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v8);
 }
 while ( v2 );
 return v5;
 }
 }
 v0 = i;
 }
 while ( v2 )
 {
 v4 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v4);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1CF0 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // rax

 result = (TreeNode *)malloc(0x18u);
 if ( result )
 {
 result->data = data;
 *(unsigned long long *)&result->left = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1D20 */
int tree_heap_traversal()
{
 void *v0; // rax
 void *v1; // rbp
 void *v2; // r12
 void *v3; // r13
 void *v5; // rdi

 v0 = malloc(0x18u);
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = malloc(0x18u);
 if ( v2 )
 {
 v3 = malloc(0x18u);
 if ( v3 )
 {
 free(v2);
 free(v3);
 free(v1);
 return 60;
 }
 free(v2);
 }
 else
 {
 v5 = malloc(0x18u);
 if ( v5 )
 free(v5);
 }
 free(v1);
 return -2;
}


/* Function: memory_leak @ 0x1DC0 */
int memory_leak(int n)
{
 unsigned long long *v1; // rax
 unsigned long long *v2; // rcx
 __m128i si128; // xmm0
 __m128i v4; // xmm2
 __m128i v5; // xmm1
 int v6; // eax
 long long v7; // rsi
 int v8; // edx
 int v9; // eax

 v1 = malloc(4LL * n);
 if ( v1 )
 {
 v2 = v1;
 if ( n > 0 )
 {
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v6 = 0;
 goto LABEL_7;
 }
 si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
 v4 = _mm_load_si128((const __m128i *)&xmmword_3740);
 do
 {
 v5 = si128;
 ++v1;
 si128 = _mm_add_epi32(si128, v4);
 *((unsigned long long *)v1 - 1) = (unsigned long long)_mm_cvtsi128_si32(v5);
 }
 while ( v1 != &v2[(unsigned int)n >> 2] );
 v6 = n & 0x7FFFFFFC;
 if ( (n & 3) != 0 )
 {
LABEL_7:
 *((unsigned int *)v2 + v6) = v6;
 v7 = 4LL * v6;
 v8 = v6 + 1;
 if ( n > v6 + 1 )
 {
 v9 = v6 + 2;
 *(unsigned int *)((char *)v2 + v7 + 4) = v8;
 if ( n > v9 )
 *(unsigned int *)((char *)v2 + v7 + 8) = v9;
 }
 }
 }
 return *((unsigned int *)v2 + n / 2);
 }
 return -1;
}


/* Function: dangling_pointer @ 0x1E70 */
int dangling_pointer()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1EB0 */
int double_free(int *p)
{
 void *v2; // rax
 void *v3; // rbp

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


/* Function: heap_overflow @ 0x1EF0 */
int heap_overflow()
{
 void *v0; // rax

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 free(v0);
 return 0;
}


/* Function: test_heap_memory @ 0x1F20 */
void test_heap_memory()
{
 __m128i *v0; // rax
 int v1; // edx
 __m128i *v2; // rax
 __m128i v3; // xmm0
 int v4; // r12d
 int v5; // eax
 __m128i *v6; // rax
 int v7; // edx
 void *v8; // rdi
 int v9; // edx
 void **v10; // r12
 unsigned int *v11; // rax
 int v12; // edx
 int v13; // ebx
 unsigned long long *v14; // r13
 unsigned long long *v15; // r12
 unsigned long long *i; // rax
 void *v17; // rdi
 int v18; // r13d
 int v19; // eax
 __m128i *v20; // rax
 __m128i si128; // xmm0
 int v22; // edx
 int v23; // eax
 unsigned long long *v24; // rax
 void *v25; // rdi
 unsigned int *v26; // rbx
 long long v27; // rdx
 int status; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v29; // [rsp+8h] [rbp-20h]

 v29 = __readfsqword(0x28u);
 puts(asc_30E6);
 v0 = (__m128i *)malloc(0x28u);
 if ( v0 )
 {
 v0[1] = _mm_load_si128((const __m128i *)&xmmword_37A0);
 ((unsigned long long *)v0)[4] = 0x1200000010LL;
 free(v0);
 v1 = 10;
 }
 else
 {
 v1 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
 v2 = (__m128i *)calloc(5u, 4u);
 if ( v2 )
 {
 v3 = _mm_add_epi32(_mm_srli_si128(_mm_loadu_si128(v2), 8), _mm_loadu_si128(v2));
 v4 = ((int *)v2)[1] + _mm_cvtsi128_si32(_mm_add_epi32(v3, _mm_srli_si128(v3, 4)));
 free(v2);
 }
 else
 {
 v4 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v4);
 v5 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v5);
 v6 = (__m128i *)malloc(0x28u);
 if ( v6 )
 {
 v6[1] = _mm_load_si128((const __m128i *)&xmmword_37B0);
 ((unsigned long long *)v6)[4] = 0x1B00000018LL;
 free(v6);
 v7 = 15;
 }
 else
 {
 v7 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v7);
 v8 = malloc(8u);
 if ( v8 )
 {
 free(v8);
 v9 = 15;
 }
 else
 {
 v9 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v9);
 v10 = (void **)malloc(0x10u);
 if ( v10 )
 {
 v11 = malloc(0x10u);
 v10[1] = v11;
 if ( v11 )
 {
 *v11 = 20;
 v12 = 0;
 *((unsigned long long *)v11 + 1) = 0;
 }
 else
 {
 free(v10);
 v12 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v12);
 free(v10[1]);
 free(v10);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v13 = 0;
 v14 = 0;
 v15 = 0;
 for ( i = malloc(0x10u); i; i = malloc(0x10u) )
 {
 *(unsigned int *)i = v13;
 i[1] = 0;
 if ( v15 )
 {
 v13 += 10;
 v14[1] = i;
 if ( v13 == 50 )
 goto LABEL_29;
 }
 else
 {
 v13 += 10;
 v15 = i;
 if ( v13 == 50 )
 {
LABEL_29:
 v24 = v15;
 v18 = 0;
 do
 {
 v18 += *(unsigned int *)v24;
 v24 = (unsigned long long *)v24[1];
 }
 while ( v24 );
 do
 {
 v25 = v15;
 v15 = (unsigned long long *)v15[1];
 free(v25);
 }
 while ( v15 );
 goto LABEL_20;
 }
 }
 v14 = i;
 }
 while ( v15 )
 {
 v17 = v15;
 v15 = (unsigned long long *)v15[1];
 free(v17);
 }
 v18 = -1;
LABEL_20:
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v18);
 v19 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v19);
 v20 = (__m128i *)malloc(0x14u);
 if ( v20 )
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
 ((int *)v20)[4] = 4;
 *v20 = si128;
 v22 = 2;
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
 v26 = (unsigned int *)malloc(4u);
 if ( v26 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v26);
 v27 = *v26;
 }
 else
 {
 v27 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aD, v27);
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
 if ( (char)((status & 0x7F) + 1) > 1 )
 __printf_chk(1, byte_33F0);
 }
 else
 {
 __printf_chk(1, byte_33C8, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x23A0 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x23C0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x23D0 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x2400 */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x2420 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x2430 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2440 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2450 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2470 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x2480 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x2490 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x24A0 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x24B0 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x24C0 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x24D0 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x24F0 */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2510 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2520 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x2530 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x2540 */
void test_static_global()
{
 int v0; // eax

 puts(asc_3438);
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
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
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


/* Function: memop_memset @ 0x2750 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( buf && size )
 return *(unsigned char *)memset(buf, fill_value, size);
 else
 return -1;
}


/* Function: memop_memcpy @ 0x2790 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( n == 0 || src == 0 || !dst )
 return -1;
 else
 return *(unsigned int *)((char *)memcpy(dst, src, n) + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x27D0 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x2810 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // r8d
 int result; // eax

 if ( n == 0 || p2 == 0 || !p1 )
 return 0;
 v3 = memcmp(p1, p2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: memop_bzero @ 0x2860 */
int memop_bzero(void *buf, size_t n)
{
 if ( buf )
 return *(unsigned char *)memset(buf, 0, n);
 else
 return -1;
}


/* Function: memop_bcopy @ 0x2890 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( n == 0 || dst == 0 || !src )
 return -1;
 else
 return *(unsigned char *)memmove(dst, src, n);
}


/* Function: memop_unaligned_access @ 0x28D0 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x28F0 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // edx
 long long retaddr; // [rsp+0h] [rbp+0h] BYREF

 if ( !flag )
 return -1;
 v1 = *flag;
 _InterlockedOr64((volatile long long *)&retaddr, 0);
 return v1 + *flag;
}


/* Function: test_memory_op_functions @ 0x2910 */
void test_memory_op_functions()
{
 int v0; // eax
 long long v1; // rdx
 long long v2; // [rsp+0h] [rbp-158h] BYREF
 int cmp_a[3]; // [rsp+8h] [rbp-150h] BYREF
 int cmp_b[3]; // [rsp+18h] [rbp-140h] BYREF
 char zero_buf[10]; // [rsp+2Bh] [rbp-12Dh] BYREF
 char move_buf[11]; // [rsp+35h] [rbp-123h] BYREF
 char buffer[256]; // [rsp+40h] [rbp-118h] BYREF
 unsigned long long v8; // [rsp+148h] [rbp-10h]

 v8 = __readfsqword(0x28u);
 puts(asc_3688);
 memset(buffer, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy(move_buf, "HelloWorld");
 memmove(&move_buf[1], move_buf, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 cmp_a[2] = 3;
 *(unsigned long long *)cmp_a = 0x200000001LL;
 *(unsigned long long *)cmp_b = 0x200000001LL;
 cmp_b[2] = 4;
 v0 = memcmp(cmp_a, cmp_b, 0xCu);
 v1 = (unsigned int)-(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 memset(zero_buf, 0, sizeof(zero_buf));
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 ((int *)&v2)[1] = 5;
 _InterlockedOr64(&v2, 0);
 __printf_chk(1, "MEMOP-L3-02: %d\n", ((int *)&v2)[1] + 5);
}


/* Function: extern_function @ 0x2AD0 */
/* This function is defined externally - local definition removed to avoid multiple definitions */

/* Function: .term_proc @ 0x2AD8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x6050 */

/* FAILED to decompile: __libc_start_main @ 0x6058 */

/* FAILED to decompile: puts @ 0x6060 */

/* FAILED to decompile: __stack_chk_fail @ 0x6068 */

/* FAILED to decompile: memset @ 0x6070 */

/* FAILED to decompile: memcmp @ 0x6078 */

/* FAILED to decompile: calloc @ 0x6080 */

/* FAILED to decompile: memcpy @ 0x6088 */

/* FAILED to decompile: malloc @ 0x6090 */

/* FAILED to decompile: realloc @ 0x6098 */

/* FAILED to decompile: __printf_chk @ 0x60A0 */

/* FAILED to decompile: memmove @ 0x60A8 */

/* FAILED to decompile: waitpid @ 0x60B0 */

/* FAILED to decompile: perror @ 0x60B8 */

/* FAILED to decompile: exit @ 0x60C0 */

/* FAILED to decompile: fork @ 0x60C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x60D0 */

/* FAILED to decompile: __gmon_start__ @ 0x60E0 */

/* Total functions decompiled: 80, failed: 18 */
