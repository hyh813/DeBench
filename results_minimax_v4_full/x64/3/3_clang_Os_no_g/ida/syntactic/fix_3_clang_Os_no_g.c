/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <immintrin.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdint.h>
#include <stdbool.h>

/* Windows-compatible macros */
#define BYTE1(x) ((unsigned char)(((x) >> 8) & 0xFF))

/* Additional constant string needed by the code */
static const char const_string[] = "Constant Data String";

/* External symbols */
extern unsigned int _gmon_start__;
extern long long extern_function(int);
extern long long double_value(int);

/* Global data references from binary */
static const unsigned char xmmword_2010[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
static const unsigned char xmmword_2020[16] = {16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
static const char s[] = "Stack Memory Test";
static const char asc_2607[] = "Heap Memory Test";
static const char asc_2625[] = "Static/Global Memory Test";
static const char aD[] = "%d\n";
static const char aFork_0[] = "fork";
static const char byte_22CA[] = "Signal: %d\n";
static const char byte_22A5[] = "Exit code: %d\n";
static const char asc_2649[] = "Memory Operations Test";

/* Global variables */
unsigned int global_counter = 0;
unsigned int static_local_counter = 0;
int file_scope_static = 0;
unsigned int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

/* External global variable declaration */
extern unsigned int extern_global_var;

/* Global function pointer */
long long (*global_func_ptr)(int);
long long global_heap_ptr;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_clang_Os_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
void init_proc(void)
{
 /* CRT initialization - does nothing in this binary */
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Empty stub function */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x120C */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x1213 */
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


/* Function: local_struct @ 0x122B */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x122F */
long long address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x123B */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x1240 */
long long large_stack_frame()
{
 __m128i si128; // xmm0
 long long v1; // rax
 __m128i v2; // xmm1
 __int128 v4[64]; // [rsp+0h] [rbp-808h]
 char v5; // [rsp+400h] [rbp-408h]

 si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v1 = 0;
 v2 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 v4[v1++] = (__int128)si128;
 si128 = _mm_add_epi8(si128, v2);
 }
 while ( v1 != 128 );
 return (unsigned int)v5;
}


/* Function: vla_stack @ 0x127F */
long long vla_stack(unsigned int a1)
{
 long long result; // rax
 char *v2; // rax
 long long v3; // rsi
 long long v4; // [rsp-8h] [rbp-8h] BYREF

 result = 0xFFFFFFFFLL;
 if ( a1 - 1001 >= 0xFFFFFC18 )
 {
 v2 = (char *)&v4 - ((4LL * a1 + 15) & 0xFFFFFFFFFFFFFFF0LL);
 v3 = 0;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 }
 while ( 2LL * a1 != v3 );
 return *(unsigned int *)&v2[4 * ((int)a1 / 2)];
 }
 return result;
}


/* Function: alloca_usage @ 0x12D5 */
long long alloca_usage(int a1)
{
 long long v1; // rdx
 unsigned int *v2; // rsi
 long long v4; // [rsp-8h] [rbp-8h] BYREF

 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v1 = 0;
 v2 = (unsigned int *)((char *)&v4 - ((4LL * (unsigned int)a1 + 15) & 0xFFFFFFFFFFFFFFF0LL));
 do
 {
 *v2 = v1;
 v1 += 3;
 ++v2;
 }
 while ( 3LL * (unsigned int)a1 != v1 );
 return *(unsigned int *)((char *)&v4
 + 4 * (unsigned int)(a1 / 2)
 - ((4LL * (unsigned int)a1 + 15) & 0xFFFFFFFFFFFFFFF0LL));
}


/* Function: stack_alias @ 0x1323 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x1329 */
int test_stack_memory()
{
 long long v0; // rbx
 long long v1; // rbx
 __m128i si128; // xmm0
 __m128i v3; // xmm1
 long long v4; // rbx
 __int128 *v5; // r14
 long long v6; // rbx
 __int128 v8; // [rsp+0h] [rbp-818h] BYREF
 int v9; // [rsp+14h] [rbp-804h]
 char v10; // [rsp+400h] [rbp-418h]

 puts(s);
 v0 = 0;
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 do
 {
 *(unsigned int *)((char *)&v8 + 2 * v0) = v0;
 v0 += 2;
 }
 while ( v0 != 20 );
 v1 = 0;
 printf("MEM-L1-02 (local_array): %d\n", v9);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v3 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 *(__int128 *)((char *)&v8 + v1) = (__int128)si128;
 v1 += 16;
 si128 = _mm_add_epi8(si128, v3);
 }
 while ( v1 != 2048 );
 v4 = 0;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v10);
 do
 {
 *(unsigned int *)((char *)&v8 + 2 * v4) = v4;
 v4 += 2;
 }
 while ( v4 != 20 );
 v5 = &v8;
 v6 = 0;
 printf("MEM-L2-02 (vla_stack): %d\n", v9);
 do
 {
 *(unsigned int *)v5 = v6;
 v5 = (__int128 *)((char *)v5 + 4);
 v6 += 3;
 }
 while ( v6 != 30 );
 printf("MEM-L2-03 (alloca_usage): %d\n", v9);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1456 */
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


/* Function: heap_calloc @ 0x14A3 */
long long heap_calloc(int a1)
{
 unsigned int *v1; // rax
 unsigned int v2; // ebx
 long long i; // rdx

 v1 = calloc(a1, 4u);
 if ( v1 )
 {
 v2 = 0;
 if ( a1 >= 2 )
 {
 v2 = 0;
 for ( i = 1; i != a1; v2 += v1[i++] )
 ;
 }
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v2;
}


/* Function: heap_realloc @ 0x14F1 */
long long heap_realloc(unsigned int *a1)
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


/* Function: heap_array @ 0x1576 */
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


/* Function: heap_struct @ 0x15CA */
long long heap_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: heap_nested @ 0x15CE */
long long heap_nested(unsigned long long *a1)
{
 unsigned long long *v1; // rax
 unsigned long long *v2; // rbx
 unsigned long long *v3; // rax

 v1 = malloc(0x10u);
 *a1 = (unsigned long long)v1;
 if ( !v1 )
  return 0xFFFFFFFFLL;
 v2 = v1;
 *v1 = 10;
 v3 = (unsigned long long *)malloc(0x10u);
 v2[1] = (unsigned long long)v3;
 if ( v3 )
 {
 *(unsigned int *)v3 = 20;
 v3[1] = 0;
 return 0;
 }
 else
 {
 free(v2);
 return 4294967294LL;
 }
}


/* Function: linked_list_heap @ 0x1631 */
long long linked_list_heap()
{
 unsigned long long *v0; // rax
 int v1; // ebp
 int v2; // ebx
 unsigned long long *v3; // r15
 unsigned long long *v4; // r14
 bool v5; // bl
 unsigned long long *v6; // rbp
 unsigned int v7; // ebp
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
 v3[1] = v0;
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


/* Function: tree_heap_traversal @ 0x171B */
long long tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x1721 */
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


/* Function: dangling_pointer @ 0x1760 */
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


/* Function: double_free @ 0x1799 */
long long double_free(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x17A7 */
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


/* Function: test_heap_memory @ 0x17E4 */
void test_heap_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 void **v5; // rbx
 int v6; // eax
 unsigned int *v7; // rax
 long long i; // rcx
 int v9; // esi
 int v10; // eax
 unsigned int v11; // eax
 int stat_loc; // [rsp+4h] [rbp-14h] BYREF
 void **v13; // [rsp+8h] [rbp-10h] BYREF

 puts(asc_2607);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc((unsigned int *)0);
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
 free(v13[1]);
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
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x19A9 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x19B2 */
long long global_array_access(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 9 )
 return global_array[a1];
 return result;
}


/* Function: static_local @ 0x19C9 */
long long static_local(int a1)
{
 long long result; // rax

 result = 0;
 if ( !a1 )
 result = (unsigned int)(static_local_counter + 1);
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x19DF */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x19E5 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x19F2 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x19FC */
long long read_const_data()
{
 return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x1A0B */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1A0E */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1A11 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1A17 */
void set_file_static(int a1)
{
 file_scope_static = a1;
}


/* Function: get_file_static @ 0x1A1E */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x1A25 */
void set_global_callback(long long (*a1)(int))
{
 global_func_ptr = a1;
}


/* Function: call_global_callback @ 0x1A2D */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1A41 */
long long global_heap_store(unsigned int *a1)
{
 global_heap_ptr = (long long)a1;
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x1A56 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1A5C */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1A60 */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1A66 */
int test_static_global()
{
 int v0; // eax
 int v2; // [rsp+Ch] [rbp-Ch] BYREF

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
 v2 = 100;
 global_heap_ptr = (long long)&v2;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1C2C */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: memop_memset @ 0x1C30 */
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


/* Function: memop_memcpy @ 0x1C55 */
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


/* Function: memop_memmove @ 0x1C8C */
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


/* Function: memop_memcmp @ 0x1CB7 */
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


/* Function: memop_bzero @ 0x1CE6 */
long long memop_bzero(unsigned char *a1, size_t a2)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, a2);
 return *a1;
}


/* Function: memop_bcopy @ 0x1D04 */
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


/* Function: memop_unaligned_access @ 0x1D2C */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x1D3B */
long long memop_memory_barrier(int *a1)
{
 int v1; // eax

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 _mm_mfence();
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x1D4E */
int test_memory_op_functions()
{
 int v1; // [rsp+4h] [rbp-14h]

 puts(asc_2649);
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


/* Function: main @ 0x1E25 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x1E40 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x1E44 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x50D0 */

/* FAILED to decompile: __libc_start_main @ 0x50D8 */

/* FAILED to decompile: puts @ 0x50E0 */

/* FAILED to decompile: printf @ 0x50E8 */

/* FAILED to decompile: memset @ 0x50F0 */

/* FAILED to decompile: memcmp @ 0x50F8 */

/* FAILED to decompile: calloc @ 0x5100 */

/* FAILED to decompile: memcpy @ 0x5108 */

/* FAILED to decompile: malloc @ 0x5110 */

/* FAILED to decompile: realloc @ 0x5118 */

/* FAILED to decompile: memmove @ 0x5120 */

/* FAILED to decompile: waitpid @ 0x5128 */

/* FAILED to decompile: perror @ 0x5130 */

/* FAILED to decompile: exit @ 0x5138 */

/* FAILED to decompile: fork @ 0x5140 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5148 */

/* FAILED to decompile: __gmon_start__ @ 0x5158 */

/* Total functions decompiled: 64, failed: 17 */
