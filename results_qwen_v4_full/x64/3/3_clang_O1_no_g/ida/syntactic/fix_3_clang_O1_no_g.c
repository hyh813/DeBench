/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <emmintrin.h>
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

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_clang_O1_no_g
 * Processor: pc
 */

/* External declarations */
extern unsigned int global_array[];
extern long long static_local_counter;
extern long long extern_global_var;
extern long long file_scope_static;
extern long long global_heap_ptr;
extern const char *aD;
extern const char *aFork_0;
extern long long (*global_func_ptr)(long long);

/* Global variable definitions for extern declarations */
unsigned int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
long long static_local_counter = 0;
long long extern_global_var = 42;
long long file_scope_static = 0;
long long global_heap_ptr = 0;
const char *aD = "%d";
const char *aFork_0 = "fork";
long long (*global_func_ptr)(long long) = 0;

/* Global variable definitions */
int global_counter = 0;
const char const_string[] = "test_string_data";
static const char asc_35F7[] = "=== Stack Memory Test ===";
static const char asc_3615[] = "=== Static/Global Test ===";
static const char asc_3639[] = "=== Memory Op Test ===";

/* Additional declarations */
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
#define BYTE1(x) ((unsigned char)(((unsigned int)(x)) >> 8))

/* Function prototypes */
long long extern_function(int a1);
long long double_value(long long a1);




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x1210 */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x1220 */
long long local_array(int a1)
{
 int v1; // eax
 long long i; // rcx
 unsigned int v4[10]; // [rsp+0h] [rbp-28h]

 v1 = 0;
 for ( i = 0; i != 10; ++i )
 {
 v4[i] = v1;
 v1 += a1;
 }
 return v4[5];
}


/* Function: local_struct @ 0x1250 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x1260 */
long long address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x1270 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x1280 */
long long large_stack_frame()
{
 long long i; // rax
 unsigned char v2[2056]; // [rsp+0h] [rbp-808h]

 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x12B0 */
long long vla_stack(int a1)
{
 long long result; // rax
 char *v2; // rax
 long long v3; // rsi
 long long v4; // [rsp-8h] [rbp-8h] BYREF

 result = 0xFFFFFFFFLL;
 if ( (unsigned int)(a1 - 1001) >= 0xFFFFFC18 )
 {
 v2 = (char *)&v4 - ((4LL * (unsigned int)a1 + 15) & 0xFFFFFFFFFFFFFFF0LL);
 if ( a1 > 0 )
 {
 v3 = 0;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 }
 while ( 2LL * (unsigned int)a1 != v3 );
 }
 return *(unsigned int *)&v2[4 * (a1 / 2)];
 }
 return result;
}


/* Function: alloca_usage @ 0x1310 */
long long alloca_usage(int a1)
{
 long long v1; // rdx
 unsigned int *v2; // rsi
 long long v4; // [rsp-8h] [rbp-8h] BYREF

 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v1 = 0;
 v2 = (unsigned int *)((char *)&v4 - ((4LL * a1 + 15) & 0xFFFFFFFFFFFFFFF0LL));
 do
 {
 *v2 = v1;
 v1 += 3;
 ++v2;
 }
 while ( 3LL * (unsigned int)a1 != v1 );
 return *(unsigned int *)((char *)&v4 + 4 * (unsigned int)(a1 / 2) - ((4LL * a1 + 15) & 0xFFFFFFFFFFFFFFF0LL));
}


/* Function: stack_alias @ 0x1370 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x1380 */
int test_stack_memory()
{
 long long v0; // rbx
 long long v1; // rbx
 long long v2; // rbx
 long long v3; // rbx
 unsigned int *v4; // rax
 unsigned char v6[20]; // [rsp+0h] [rbp-808h] BYREF
 int v7; // [rsp+14h] [rbp-7F4h]
 char v8; // [rsp+400h] [rbp-408h]

  puts(asc_35F7);
  v0 = 0;
  printf("MEM-L1-01 (local_vars): %d\n", 20);
 do
 {
 *(unsigned int *)&v6[2 * v0] = v0;
 v0 += 2;
 }
 while ( v0 != 20 );
 v1 = 0;
 printf("MEM-L1-02 (local_array): %d\n", v7);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 do
 {
 v6[v1] = v1;
 ++v1;
 }
 while ( v1 != 2048 );
 v2 = 0;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v8);
 do
 {
 *(unsigned int *)&v6[2 * v2] = v2;
 v2 += 2;
 }
 while ( v2 != 20 );
 v3 = 0;
 printf("MEM-L2-02 (vla_stack): %d\n", v7);
 v4 = v6;
 do
 {
 *v4++ = v3;
 v3 += 3;
 }
 while ( v3 != 30 );
 printf("MEM-L2-03 (alloca_usage): %d\n", v7);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x14B0 */
long long heap_basic(int a1)
{
 unsigned int *v1; // rax
 long long i; // rdx
 unsigned int v3; // ebx

 v1 = malloc(4LL * a1);
 if ( v1 )
 {
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v1[i] = i * 2;
 }
 v3 = v1[a1 / 2];
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_calloc @ 0x1500 */
long long heap_calloc(int a1)
{
 unsigned int *v1; // rax
 long long v2; // rdx
 unsigned int v3; // ebx

 v1 = calloc(a1, 4u);
 if ( v1 )
 {
 if ( a1 <= 0 )
 {
 v3 = 0;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 do
 v3 += v1[v2++];
 while ( a1 != v2 );
 }
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_realloc @ 0x1550 */
long long heap_realloc()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx
 long long i; // rax
 int v3; // r14d
 unsigned int *v4; // rax
 long long v5; // rcx
 int v6; // edx
 unsigned int v7; // ebp

 v0 = malloc(0x14u);
 if ( v0 )
 {
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
 }
 else
 {
 return (unsigned int)-1;
 }
 return v7;
}


/* Function: heap_array @ 0x15E0 */
long long heap_array(int a1)
{
 unsigned int *v1; // rax
 long long v2; // rdx
 unsigned int *v3; // rsi
 unsigned int v4; // ebx

 v1 = malloc(4LL * a1);
 if ( v1 )
 {
 if ( a1 > 0 )
 {
 v2 = 0;
 v3 = v1;
 do
 {
 *v3 = v2;
 v2 += 3;
 ++v3;
 }
 while ( 3LL * (unsigned int)a1 != v2 );
 }
 v4 = v1[a1 / 2];
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: heap_struct @ 0x1650 */
long long heap_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: heap_nested @ 0x1660 */
long long heap_nested(void **a1)
{
 unsigned int *v1; // rax
 long long v2; // rax

 v1 = malloc(0x10u);
 *a1 = v1;
 if ( !v1 )
 return 0xFFFFFFFFLL;
 *v1 = 10;
 ((void **)*a1)[1] = (void *)malloc(0x10u);
 v2 = (long long)((void **)*a1)[1];
 if ( v2 )
 {
 *(unsigned int *)v2 = 20;
 *(unsigned long long *)(v2 + 8) = 0;
 return 0;
 }
 else
 {
 free(*a1);
 return 4294967294LL;
 }
}


/* Function: linked_list_heap @ 0x16C0 */
long long linked_list_heap()
{
 unsigned long long *v0; // rbp
 bool v1; // r15
 unsigned long long *v2; // r12
 unsigned int v3; // r13d
 unsigned long long *v4; // r14
 unsigned long long *v5; // rbx
 unsigned int v6; // r14d
 unsigned long long *v7; // rax
 unsigned long long *v8; // rbx

 v0 = 0;
 v1 = 1;
 v2 = 0;
 v3 = 0;
 while ( 1 )
 {
 v4 = malloc(0x10u);
 if ( !v4 )
 break;
 *(unsigned int *)v4 = 10 * v3;
 v4[1] = 0;
 if ( v0 )
 {
 v2[1] = (unsigned long long)v4;
 v2 = v4;
 }
 else
 {
 v2 = v4;
 v0 = v4;
 }
 v1 = v3++ < 4;
 if ( v3 == 5 )
 goto LABEL_10;
 }
 if ( v0 )
 {
 do
 {
 v5 = (unsigned long long *)v0[1];
 free(v0);
 v0 = v5;
 }
 while ( v5 );
 }
 v0 = 0;
LABEL_10:
 v6 = -1;
 if ( !v1 )
 {
 v6 = 0;
 if ( v0 )
 {
 v7 = v0;
 do
 {
 v6 += *(unsigned int *)v7;
 v7 = (unsigned long long *)v7[1];
 }
 while ( v7 );
 }
 if ( v0 )
 {
 do
 {
 v8 = (unsigned long long *)v0[1];
 free(v0);
 v0 = v8;
 }
 while ( v8 );
 }
 }
 return v6;
}


/* Function: create_tree_node @ 0x17E0 */
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


/* Function: tree_heap_traversal @ 0x1800 */
long long tree_heap_traversal()
{
 char *v0; // rax
 unsigned long long *v1; // r14
 char *v2; // rax
 unsigned int *v3; // r15
 char *v4; // rax
 void *v5; // rbx
 unsigned int v6; // ebp

 v0 = (char *)malloc(0x18u);
 if ( v0 )
 {
 v1 = v0;
 *(unsigned int *)v0 = 10;
 *(unsigned long long *)(v0 + 8) = 0;
 v2 = (char *)malloc(0x18u);
 v3 = v2;
 if ( v2 )
 {
 *(unsigned int *)v2 = 20;
 *(unsigned long long *)(v2 + 8) = 0;
 }
 v1[1] = (unsigned long long)v2;
 v4 = (char *)malloc(0x18u);
 v5 = v4;
 if ( v4 )
 {
 *(unsigned int *)v4 = 30;
 *(unsigned long long *)(v4 + 8) = 0;
 }
 v1[2] = (unsigned long long)v4;
 if ( v3 && v4 )
 {
 v6 = *(unsigned int *)v4 + *(unsigned int *)v1 + *v3;
 free(v3);
 v5 = (void *)v1[2];
 }
 else
 {
 if ( v3 )
 free(v3);
 v6 = -2;
 if ( !v5 )
 goto LABEL_14;
 }
 free(v5);
LABEL_14:
 free(v1);
 return v6;
 }
 return (unsigned int)-1;
}


/* Function: memory_leak @ 0x18D0 */
long long memory_leak(int a1)
{
 unsigned int *v1; // rax
 long long i; // rdx

 v1 = malloc(4LL * a1);
 if ( !v1 )
 return 0xFFFFFFFFLL;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v1[i] = i;
 }
 return (unsigned int)v1[a1 / 2];
}


/* Function: dangling_pointer @ 0x1920 */
long long dangling_pointer()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx

 v0 = malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 *v0 = 42;
 printf("value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1960 */
long long double_free(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x1970 */
long long heap_overflow()
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 unsigned int v3; // ebx

 v0 = malloc(0x28u);
 if ( v0 )
 {
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
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: test_heap_memory @ 0x19C0 */
void test_heap_memory()
{
 long long v0; // rax
 unsigned int *v1; // rax
 int v2; // r14d
 int v3; // ebp
 long long i; // rcx
 int v5; // ebx
 unsigned int *v6; // rax
 long long j; // rcx
 unsigned int *v8; // rax
 int v9; // r14d
 int v10; // ebp
 unsigned int *v11; // rbx
 long long k; // rax
 int v13; // r15d
 unsigned int *v14; // rax
 long long v15; // rcx
 int v16; // edx
 unsigned int *v17; // rax
 long long v18; // rcx
 unsigned int *v19; // rdx
 unsigned int *v20; // rax
 void **v21; // rbx
 unsigned int *v22; // rax
 int v23; // esi
 const char *v24; // rdi
 int v25; // esi
 int v26; // eax
 unsigned int *v27; // rax
 long long m; // rcx
 int v29; // esi
 int v30; // eax
 unsigned int v31; // eax
 int stat_loc; // [rsp+0h] [rbp-24h] BYREF

  stat_loc = HIDWORD(v0);
  puts(asc_35F7);
  v1 = malloc(0x28u);
 v2 = -1;
 v3 = -1;
 if ( v1 )
 {
 for ( i = 0; i != 10; ++i )
 v1[i] = i * 2;
 v3 = v1[5];
 free(v1);
 }
 v5 = 0;
 printf("HEAP-L2-01 (heap_basic): %d\n", v3);
 v6 = calloc(5u, 4u);
 if ( v6 )
 {
 for ( j = 0; j != 5; ++j )
 v5 += v6[j];
 free(v6);
 v2 = v5;
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v2);
 v8 = malloc(0x14u);
 v9 = -1;
 v10 = -1;
 if ( v8 )
 {
 v11 = v8;
 for ( k = 0; k != 5; ++k )
 v11[k] = k + 1;
 v13 = v11[2];
 v14 = realloc(v11, 0x28u);
 if ( v14 )
 {
 v15 = 5;
 v16 = 50;
 do
 {
 v14[v15++] = v16;
 v16 += 10;
 }
 while ( v15 != 10 );
 v10 = -3;
 if ( v14[2] == v13 )
 v10 = v14[5];
 v11 = v14;
 }
 else
 {
 v10 = -2;
 }
 free(v11);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v10);
 v17 = malloc(0x28u);
 if ( v17 )
 {
 v18 = 0;
 v19 = v17;
 do
 {
 *v19 = v18;
 v18 += 3;
 ++v19;
 }
 while ( v18 != 30 );
 v9 = v17[5];
 free(v17);
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v9);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v20 = malloc(0x10u);
 v21 = (void **)v20;
 if ( v20 )
 {
 *v20 = 10;
 v22 = malloc(0x10u);
 v21[1] = v22;
 if ( v22 )
 {
 *v22 = 20;
 *((unsigned long long *)v22 + 1) = 0;
 v23 = 0;
 }
 else
 {
 free(v21);
 v23 = -2;
 }
 }
 else
 {
 v23 = -1;
 }
 v24 = "HEAP-L2-06 (heap_nested): %d\n";
 printf("HEAP-L2-06 (heap_nested): %d\n", v23);
 if ( v21 )
 {
 free(v21[1]);
 v24 = (const char *)v21;
 free(v21);
 }
 v25 = linked_list_heap(v24);
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v25);
 v26 = tree_heap_traversal("HEAP-L3-01 (linked_list_heap): %d\n", v25);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v26);
 v27 = malloc(0x14u);
 if ( v27 )
 {
 for ( m = 0; m != 5; ++m )
 v27[m] = m;
 v29 = v27[2];
 }
 else
 {
 v29 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v29);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v30 = fork();
 if ( !v30 )
 {
 v31 = dangling_pointer("HEAP-L3-04 (dangling_pointer): ");
 printf(aD, v31);
 exit(0);
 }
 if ( v30 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v30, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 printf("Child exited with signal: %d\n", stat_loc & 0x7F);
 }
 else
 {
 printf("Child exited normally: %d\n", (stat_loc >> 8) & 0xFF);
 }
 }
}


/* Function: global_var_access @ 0x1CC0 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1CD0 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1CE0 */
long long global_array_access(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 9 )
 return global_array[a1];
 return result;
}


/* Function: static_local @ 0x1D00 */
long long static_local(int a1)
{
 long long result; // rax

 result = 0;
 if ( !a1 )
 result = (unsigned int)(static_local_counter + 1);
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x1D20 */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x1D30 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x1D40 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1D50 */
long long read_const_data()
{
 return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x1D60 */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1D70 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1D80 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1D90 */
void set_file_static(int a1)
{
 file_scope_static = a1;
}


/* Function: get_file_static @ 0x1DA0 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x1DB0 */
void set_global_callback(long long a1)
{
 global_func_ptr = (long long (*)(long long))a1;
}


/* Function: call_global_callback @ 0x1DC0 */
long long call_global_callback(long long a1)
{
 if ( global_func_ptr )
 return global_func_ptr(a1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1DE0 */
long long global_heap_store(unsigned int *a1)
{
 global_heap_ptr = (long long)a1;
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x1E00 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1E10 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1E20 */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1E30 */
int test_static_global()
{
 int v0; // eax
 int v2; // [rsp+Ch] [rbp-Ch] BYREF

 puts(asc_3615);
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
 global_func_ptr = &double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v2 = 100;
 global_heap_ptr = (long long)(uintptr_t)&v2;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x2000 */
long long double_value(long long a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: memop_memset @ 0x2010 */
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


/* Function: memop_memcpy @ 0x2040 */
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


/* Function: memop_memmove @ 0x2080 */
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


/* Function: memop_memcmp @ 0x20B0 */
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


/* Function: memop_bzero @ 0x20E0 */
long long memop_bzero(unsigned char *a1, size_t a2)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, a2);
 return *a1;
}


/* Function: memop_bcopy @ 0x2100 */
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


/* Function: memop_unaligned_access @ 0x2130 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x2140 */
long long memop_memory_barrier(int *a1)
{
 int v1; // eax

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 _mm_mfence();
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x2160 */
int test_memory_op_functions()
{
 int v1; // [rsp+4h] [rbp-14h]

 puts(asc_3639);
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


/* Function: main @ 0x2240 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x2260 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x2264 */
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
