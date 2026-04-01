/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>

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

/* SSE type definition */
typedef struct __m128i_struct { unsigned long long lo; unsigned long long hi; } __m128i;

/* __int128 type definition - using compiler built-in */

/* SSE intrinsics stubs */
static inline __m128i _mm_load_si128(const __m128i *p) { __m128i r = {0, 0}; return r; }
static inline __m128i _mm_add_epi8(__m128i a, __m128i b) { __m128i r = {0, 0}; return r; }
static inline void _mm_mfence(void) { }

/* BYTE1 macro for extracting second byte */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Global variables */
long long (*_gmon_start__)(void) = 0;
int global_counter = 0;
int global_array[10] = {0};
int static_local_counter = 0;
int extern_global_var = 0;
char const_string[10] = "test";
int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
long long global_heap_ptr = 0;
__m128i xmmword_2010 = {0, 0};
__m128i xmmword_2020 = {0, 0};

/* String constants */
const char *asc_2607 = "test_heap_memory";
const char *aD = "value after free: %d\n";
const char *aFork_0 = "fork";
const char *byte_22CA = "exited with signal %d\n";
const char *byte_22A5 = "exited with status %d\n";
const char *asc_2625 = "test_static_global";
const char *asc_2649 = "test_memory_op_functions";

/* Node structure definition */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* TreeNode structure definition */
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_clang_Os_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* JUMPOUT stub removed */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x120C */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1213 */
int local_array(int n)
{
 int v1; // eax
 long long i; // rcx
 unsigned int v4[10]; // [rsp+0h] [rbp-28h]

 v1 = 0;
 for ( i = 0; i != 10; ++i )
 {
 v4[i] = v1;
 v1 += n;
 }
 return v4[5];
}


/* Function: local_struct @ 0x122B */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x122F */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x123B */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1240 */
int large_stack_frame()
{
 __m128i si128; // xmm0
 long long v1; // rax
 __m128i v2; // xmm1
 __m128i v4[64]; // [rsp+0h] [rbp-808h]
 char v5; // [rsp+400h] [rbp-408h]

 si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v1 = 0;
 v2 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 v4[v1++] = si128;
 si128 = _mm_add_epi8(si128, v2);
 }
 while ( v1 != 128 );
 return v5;
}


/* Function: vla_stack @ 0x127F */
int vla_stack(int n)
{
 int result; // eax
 char *v2; // rax
 long long v3; // rsi
 long long v4; // [rsp-8h] [rbp-8h] BYREF

 result = -1;
 if ( (unsigned int)(n - 1001) >= 0xFFFFFC18 )
 {
 v2 = (char *)&v4 - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL);
 v3 = 0;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 }
 while ( 2LL * (unsigned int)n != v3 );
 return *(unsigned int *)&v2[4 * (n / 2)];
 }
 return result;
}


/* Function: alloca_usage @ 0x12D5 */
int alloca_usage(int n)
{
 long long v1; // rdx
 unsigned int *v2; // rsi
 long long v4; // [rsp-8h] [rbp-8h] BYREF

 if ( n <= 0 )
 return -1;
 v1 = 0;
 v2 = (unsigned int *)((char *)&v4 - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL));
 do
 {
 *v2 = v1;
 v1 += 3;
 ++v2;
 }
 while ( 3LL * (unsigned int)n != v1 );
 return *(unsigned int *)((char *)&v4 + 4 * (unsigned int)(n / 2) - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL));
}


/* Function: stack_alias @ 0x1323 */
long long stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x1329 */
void test_stack_memory()
{
 long long v0; // rbx
 long long v1; // rbx
 __m128i si128; // xmm0
 __m128i v3; // xmm1
 long long v4; // rbx
 __int128 *v5; // r14
 long long v6; // rbx
 __int128 v7; // [rsp+0h] [rbp-818h] BYREF
 int v8; // [rsp+14h] [rbp-804h]
 char v9; // [rsp+400h] [rbp-418h]
 const char *s = "test_stack_memory";

 puts(s);
 v0 = 0;
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 do
 {
 *(unsigned int *)((char *)&v7 + 2 * v0) = v0;
 v0 += 2;
 }
 while ( v0 != 20 );
 v1 = 0;
 printf("MEM-L1-02 (local_array): %d\n", v8);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v3 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 *(__m128i *)((char *)&v7 + v1) = si128;
 v1 += 16;
 si128 = _mm_add_epi8(si128, v3);
 }
 while ( v1 != 2048 );
 v4 = 0;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v9);
 do
 {
 *(unsigned int *)((char *)&v7 + 2 * v4) = v4;
 v4 += 2;
 }
 while ( v4 != 20 );
 v5 = (__int128 *)&v7;
 v6 = 0;
 printf("MEM-L2-02 (vla_stack): %d\n", v8);
 do
 {
 ((unsigned int *)v5)[0] = v6;
 v5 = (__int128 *)((char *)v5 + 4);
 v6 += 3;
 }
 while ( v6 != 30 );
 printf("MEM-L2-03 (alloca_usage): %d\n", v8);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1456 */
int heap_basic(int n)
{
 unsigned int *v1; // rax
 long long i; // rdx
 int v3; // ebx

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = i * 2;
 }
 v3 = v1[n / 2];
 free(v1);
 return v3;
}


/* Function: heap_calloc @ 0x14A3 */
int heap_calloc(int n)
{
 unsigned int *v1; // rax
 int v2; // ebx
 long long i; // rdx

 v1 = calloc(n, 4u);
 if ( !v1 )
 return -1;
 v2 = 0;
 if ( n >= 2 )
 {
 v2 = 0;
 for ( i = 1; i != n; v2 += v1[i++] )
 ;
 }
 free(v1);
 return v2;
}


/* Function: heap_realloc @ 0x14F1 */
int heap_realloc()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx
 long long i; // rax
 int v3; // r14d
 unsigned int *v4; // rax
 long long v5; // rcx
 int v6; // edx
 int v7; // ebp

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 0; i != 5; ++i )
 v1[i] = i + 1;
 v3 = v1[2];
 v4 = realloc(v1, 0x28u);
 if ( v4 )
 {
 v5 = 5;
 v6 = 50;
 do
 {
 v4[v5++] = v6;
 v6 += 10;
 }
 while ( v5 != 10 );
 v7 = -3;
 if ( v4[2] == v3 )
 v7 = v4[5];
 v1 = v4;
 }
 else
 {
 v7 = -2;
 }
 free(v1);
 return v7;
}


/* Function: heap_array @ 0x1576 */
int heap_array(int n)
{
 unsigned int *v1; // rax
 long long v2; // rdx
 unsigned int *v3; // rsi
 int v4; // ebx

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = 0;
 v3 = v1;
 do
 {
 *v3 = v2;
 v2 += 3;
 ++v3;
 }
 while ( 3LL * (unsigned int)n != v2 );
 }
 v4 = v1[n / 2];
 free(v1);
 return v4;
}


/* Function: heap_struct @ 0x15CA */
int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0x15CE */
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


/* Function: linked_list_heap @ 0x1631 */
int linked_list_heap()
{
 unsigned long long *v0; // rax
 int v1; // ebp
 int v2; // ebx
 unsigned long long *v3; // r15
 unsigned long long *v4; // r14
 bool v5; // bl
 unsigned long long *v6; // rbp
 int v7; // ebp
 unsigned long long *v8; // rax
 unsigned long long *v9; // rbx

 v0 = malloc(0x10u);
 v1 = 0;
 if ( v0 )
 {
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
 if ( v2 == -4 )
 break;
 v3 = v0;
 v0 = malloc(0x10u);
 --v2;
 v1 += 10;
 if ( !v0 )
 {
 v5 = (unsigned int)~v2 < 4;
 goto LABEL_10;
 }
 }
 v5 = 0;
 }
 else
 {
 v5 = 1;
 v4 = 0;
LABEL_10:
 if ( v4 )
 {
 do
 {
 v6 = (unsigned long long *)v4[1];
 free(v4);
 v4 = v6;
 }
 while ( v6 );
 }
 v4 = 0;
 }
 v7 = -1;
 if ( !v5 )
 {
 v7 = 0;
 if ( v4 )
 {
 v8 = v4;
 do
 {
 v7 += *(unsigned int *)v8;
 v8 = (unsigned long long *)v8[1];
 }
 while ( v8 );
 do
 {
 v9 = (unsigned long long *)v4[1];
 free(v4);
 v4 = v9;
 }
 while ( v9 );
 }
 }
 return v7;
}


/* Function: create_tree_node @ 0x16FE */
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


/* Function: tree_heap_traversal @ 0x171B */
int tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x1721 */
int memory_leak(int n)
{
 unsigned int *v1; // rax
 long long i; // rdx

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = i;
 }
 return v1[n / 2];
}


/* Function: dangling_pointer @ 0x1760 */
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


/* Function: double_free @ 0x1799 */
int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0x17A7 */
int heap_overflow()
{
 int *v0; // rax
 long long v1; // rcx
 int *v2; // rdx
 int v3; // ebx

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 100;
 ++v2;
 }
 while ( v1 != 1100 );
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x17E4 */
void test_heap_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 Node *v5; // rbx
 int v6; // eax
 unsigned int *v7; // rax
 long long i; // rcx
 int v9; // esi
 int v10; // eax
 unsigned int v11; // eax
 int stat_loc; // [rsp+4h] [rbp-14h] BYREF
 Node *v13; // [rsp+8h] [rbp-10h] BYREF

 puts(asc_2607);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n", v3);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v13 = 0;
 v4 = heap_nested(&v13);
 printf("HEAP-L2-06 (heap_nested): %d\n", v4);
 v5 = v13;
 if ( v13 )
 {
 free(v13->next);
 free(v5);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 v7 = malloc(0x14u);
 if ( v7 )
 {
 for ( i = 0; i != 5; ++i )
 v7[i] = i;
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
 printf(byte_22CA, stat_loc & 0x7F);
 }
 else
 {
 printf(&byte_22A5, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x199A */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x19A9 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x19B2 */
int global_array_access(int idx)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 return result;
}


/* Forward declarations */
static int double_value(int x);
extern int extern_function(int x);

/* Function: static_local @ 0x19C9 */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = static_local_counter + 1;
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x19DF */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x19E5 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x19F2 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x19FC */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1A0B */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1A0E */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1A11 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1A17 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x1A1E */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1A25 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1A2D */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return ((int (*)(int))global_func_ptr)(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x1A41 */
int global_heap_store(int *p)
{
 global_heap_ptr = (long long)p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1A56 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1A5C */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x1A60 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1A66 */
void test_static_global()
{
 int v0; // eax
 int v1; // [rsp+Ch] [rbp-Ch] BYREF

 puts(asc_2625);
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
 global_heap_ptr = (long long)&v1;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1C2C */
static int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x1C30 */
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


/* Function: memop_memcpy @ 0x1C55 */
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


/* Function: memop_memmove @ 0x1C8C */
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


/* Function: memop_memcmp @ 0x1CB7 */
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


/* Function: memop_bzero @ 0x1CE6 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x1D04 */
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


/* Function: memop_unaligned_access @ 0x1D2C */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x1D3B */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // eax

 if ( !flag )
 return -1;
 v1 = *flag;
 _mm_mfence();
 return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x1D4E */
void test_memory_op_functions()
{
 int v0; // [rsp+4h] [rbp-14h]

 puts(asc_2649);
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


/* Function: main @ 0x1E25 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}





/* Function: .term_proc @ 0x1E44 */
void term_proc()
{
 ;
}


/* External library functions - linked from standard libraries */
/* Total functions decompiled: 64, failed: 17 */
