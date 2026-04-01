#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <immintrin.h>

/* Auto-injected type definitions by preprocessor (avoiding conflicts with system headers) */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
/* int64_t typedef removed - conflicts with system header __int64_t */
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif
/* int64_t removed - conflicts with system header __int64_t */

/* External references */
static int __readfsdword(unsigned int offset) { return 0; }
static void __writefsdword(unsigned int offset, unsigned int value) { (void)offset; (void)value; }

/* Forward declarations for functions used before definition */
extern long long static_helper(int a1);
static long long extern_function(int a1);
extern long long init_depends_on(int *a1);
extern long long double_value(int a1);

/* Global variables */
static int global_counter;
static unsigned int global_array[10] = {0,1,2,3,4,5,6,7,8,9};
static int static_local_counter;
extern int extern_global_var;
static const char const_string[] = "Hello World";
static int bss_var = 0;
static unsigned int bss_buffer = 0;
static unsigned int dword_60D4 = 0;
static unsigned int global_point = 0;
static int file_scope_static = 0;
static long long global_func_ptr;
static long long global_heap_ptr;
static unsigned int dword_60E8 = 0;
static unsigned int dword_60F0 = 0;
static int complex_init = 0;
static int init_depends_on_static_depends = 0;
static const char format[] = "=== Testing Static and Global Memory ===\n";
static const char asc_314E[] = "=== Testing Heap Memory ===\n";
static const char aD[] = "%d\n";
static const char s[] = "fork failed";
static const char byte_32DC[] = "Child process exited with signal: %d\n";
static const char byte_32B7[] = "Child process exited with code: %d\n";
static const char asc_3333[] = "=== Testing Static and Global Memory ===\n";
static const char asc_3596[] = "=== Testing Memory Operations ===\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_clang_O0_no_g
 * Processor: pc
 */


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


/* Function: local_array @ 0x1240 */
long long local_array(int a1)
{
 int i; // [rsp+0h] [rbp-34h]
 unsigned int v3[11]; // [rsp+4h] [rbp-30h]
 int v4; // [rsp+30h] [rbp-4h]

 v4 = a1;
 for ( i = 0; i < 10; ++i )
 v3[i] = v4 * i;
 return v3[5];
}


/* Function: local_struct @ 0x1280 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x12A0 */
long long address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x12C0 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x12F0 */
long long large_stack_frame()
{
 int i; // [rsp+0h] [rbp-804h]
 unsigned char v2[2048]; // [rsp+4h] [rbp-800h]

 for ( i = 0; i < 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x1360 */
long long vla_stack(int a1)
{
 long long v2; // [rsp+0h] [rbp-30h] BYREF
 char *v3; // [rsp+8h] [rbp-28h]
 int i; // [rsp+14h] [rbp-1Ch]
 long long v5; // [rsp+18h] [rbp-18h]
 long long *v6; // [rsp+20h] [rbp-10h]
 int v7; // [rsp+28h] [rbp-8h]

 v7 = a1;
 if ( a1 > 0 && v7 <= 1000 )
 {
 v6 = &v2;
 v3 = (char *)&v2 - ((4LL * (unsigned int)v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
 v5 = (unsigned int)v7;
 for ( i = 0; i < v7; ++i )
 *(unsigned int *)&v3[4 * i] = 2 * i;
 return *(unsigned int *)&v3[4 * (v7 / 2)];
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: alloca_usage @ 0x1410 */
long long alloca_usage(int a1)
{
 char *v2; // [rsp+0h] [rbp-20h] BYREF
 int i; // [rsp+Ch] [rbp-14h]
 char *v4; // [rsp+10h] [rbp-10h]
 int v5; // [rsp+18h] [rbp-8h]

 v5 = a1;
 if ( a1 > 0 )
 {
 v4 = (char *)&v2 - ((4LL * v5 + 15) & 0xFFFFFFFFFFFFFFF0LL);
 for ( i = 0; i < v5; ++i )
 *(unsigned int *)&v4[4 * i] = 3 * i;
 v2 = v4;
 return *(unsigned int *)&v4[4 * (v5 / 2)];
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: stack_alias @ 0x14B0 */
long long stack_alias()
{
 int v1; // [rsp+0h] [rbp-1Ch] BYREF
 int *v2; // [rsp+4h] [rbp-18h]
 int *v3; // [rsp+Ch] [rbp-10h]

 v1 = 10;
 v3 = &v1;
 v2 = &v1;
 if ( &v1 )
 {
 *v3 = 20;
 return (unsigned int)*v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: test_stack_memory @ 0x1510 */
int test_stack_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v10; // [rsp+Ch] [rbp-34h] BYREF
 unsigned int s[11]; // [rsp+10h] [rbp-30h] BYREF
 int v12; // [rsp+3Ch] [rbp-4h] BYREF

 printf(format);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&v12);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 memset(s, 0, 0x28u);
 s[0] = 1;
 s[1] = 2;
 s[2] = 3;
 v4 = address_of_array(s);
 printf("MEM-L1-05 (address_of_array): %d\n", v4);
 v5 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
 v6 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 v7 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n", v7);
 v10 = 0;
 v8 = stack_alias(&v10);
 return printf("MEM-L2-04 (stack_alias): %d\n", v8);
}


/* Function: heap_basic @ 0x1640 */
long long heap_basic(int a1)
{
 unsigned int v2; // [rsp+8h] [rbp-18h]
 int i; // [rsp+Ch] [rbp-14h]
 unsigned int *ptr; // [rsp+10h] [rbp-10h]

 ptr = malloc(4LL * a1);
 if ( ptr )
 {
 for ( i = 0; i < a1; ++i )
 ptr[i] = 2 * i;
 v2 = ptr[a1 / 2];
 free(ptr);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: heap_calloc @ 0x16E0 */
long long heap_calloc(int a1)
{
 int i; // [rsp+8h] [rbp-18h]
 unsigned int v3; // [rsp+Ch] [rbp-14h]
 unsigned int *ptr; // [rsp+10h] [rbp-10h]

 ptr = calloc(a1, 4u);
 if ( ptr )
 {
 v3 = 0;
 for ( i = 0; i < a1; ++i )
 v3 += ptr[i];
 free(ptr);
 return v3;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: heap_realloc @ 0x1770 */
long long heap_realloc()
{
 unsigned int v1; // [rsp+4h] [rbp-2Ch]
 int j; // [rsp+Ch] [rbp-24h]
 unsigned int *v3; // [rsp+10h] [rbp-20h]
 int v4; // [rsp+18h] [rbp-18h]
 int i; // [rsp+1Ch] [rbp-14h]
 unsigned int *ptr; // [rsp+20h] [rbp-10h]

 ptr = malloc(0x14u);
 if ( ptr )
 {
 for ( i = 0; i < 5; ++i )
 ptr[i] = i + 1;
 v4 = ptr[2];
 v3 = realloc(ptr, 0x28u);
 if ( v3 )
 {
 for ( j = 5; j < 10; ++j )
 v3[j] = 10 * j;
 if ( v3[2] == v4 )
 v1 = v3[5];
 else
 v1 = -3;
 free(v3);
 return v1;
 }
 else
 {
 free(ptr);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: heap_array @ 0x1890 */
long long heap_array(int a1)
{
 unsigned int v2; // [rsp+8h] [rbp-18h]
 int i; // [rsp+Ch] [rbp-14h]
 unsigned int *ptr; // [rsp+10h] [rbp-10h]

 ptr = malloc(4LL * a1);
 if ( ptr )
 {
 for ( i = 0; i < a1; ++i )
 ptr[i] = 3 * i;
 v2 = ptr[a1 / 2];
 free(ptr);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: heap_struct @ 0x1930 */
long long heap_struct(int a1)
{
 unsigned int v2; // [rsp+Ch] [rbp-14h]
 unsigned int *ptr; // [rsp+10h] [rbp-10h]

 ptr = malloc(8u);
 if ( ptr )
 {
 *ptr = a1;
 ptr[1] = 2 * a1;
 v2 = ptr[1] + *ptr;
 free(ptr);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: heap_nested @ 0x19A0 */
long long heap_nested(void **a1)
{
 *a1 = malloc(0x10u);
 if ( *a1 )
 {
 *(unsigned int *)*a1 = 10;
 *(void **)((char *)*a1 + 8) = malloc(0x10u);
 if ( *(void **)((char *)*a1 + 8) )
 {
 *(unsigned int *)((char *)*(void **)((char *)*a1 + 8) + 0) = 20;
 *(void **)((char *)*(void **)((char *)*a1 + 8) + 8) = NULL;
 return 0;
 }
 else
 {
 free(*a1);
 return (unsigned int)-2;
 }
 }
 else
{
 return (unsigned int)-1;
 }
}


/* Function: linked_list_heap @ 0x1A60 */
long long linked_list_heap()
{
 void *v1; // [rsp+8h] [rbp-48h]
 unsigned long long *j; // [rsp+10h] [rbp-40h]
 unsigned int v3; // [rsp+1Ch] [rbp-34h]
 void *ptr; // [rsp+20h] [rbp-30h]
 unsigned long long *v5; // [rsp+28h] [rbp-28h]
 int i; // [rsp+34h] [rbp-1Ch]
 unsigned long long *v7; // [rsp+38h] [rbp-18h]
 unsigned long long *v8; // [rsp+40h] [rbp-10h]

 v8 = 0;
 v7 = 0;
 for ( i = 0; ; ++i )
 {
 if ( i >= 5 )
 {
 v3 = 0;
 for ( j = v8; j; j = (unsigned long long *)j[1] )
 v3 += *(unsigned int *)j;
 while ( v8 )
 {
 v1 = v8;
 v8 = (unsigned long long *)v8[1];
 free(v1);
 }
 return v3;
 }
 v5 = malloc(0x10u);
 if ( !v5 )
 break;
 *(unsigned int *)v5 = 10 * i;
 v5[1] = 0;
 if ( v8 )
 v7[1] = (unsigned long long)v5;
 else
 v8 = v5;
 v7 = v5;
 }
 while ( v8 )
 {
 ptr = v8;
 v8 = (unsigned long long *)v8[1];
 free(ptr);
 }
 return (unsigned int)-1;
}


/* Function: create_tree_node @ 0x1BC0 */
unsigned long long * create_tree_node(int a1)
{
 unsigned long long *v2; // [rsp+0h] [rbp-10h]

 v2 = malloc(0x18u);
 if ( v2 )
 {
 *(unsigned int *)v2 = a1;
 v2[1] = 0;
 v2[2] = 0;
 }
 return v2;
}


/* Function: tree_heap_traversal @ 0x1C10 */
long long tree_heap_traversal()
{
 unsigned int v1; // [rsp+Ch] [rbp-14h]
 unsigned long long *ptr; // [rsp+10h] [rbp-10h]

 ptr = create_tree_node(10);
 if ( ptr )
 {
 ptr[1] = (unsigned long long)(uintptr_t)create_tree_node(20);
 ptr[2] = (unsigned long long)(uintptr_t)create_tree_node(30);
 if ( ptr[1] && ptr[2] )
 {
 v1 = *(unsigned int *)(uintptr_t)ptr[2] + *(unsigned int *)(uintptr_t)ptr[1] + *(unsigned int *)ptr;
 free((void *)(uintptr_t)ptr[1]);
 free((void *)(uintptr_t)ptr[2]);
 free(ptr);
 return v1;
 }
 else
 {
 if ( ptr[1] )
 free((void *)(uintptr_t)ptr[1]);
 if ( ptr[2] )
 free((void *)(uintptr_t)ptr[2]);
 free(ptr);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memory_leak @ 0x1D30 */
long long memory_leak(int a1)
{
 int i; // [rsp+Ch] [rbp-14h]
 unsigned int *v3; // [rsp+10h] [rbp-10h]

 v3 = malloc(4LL * a1);
 if ( v3 )
 {
 for ( i = 0; i < a1; ++i )
 v3[i] = i;
 return (unsigned int)v3[a1 / 2];
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: dangling_pointer @ 0x1DC0 */
long long dangling_pointer()
{
 unsigned int *ptr; // [rsp+10h] [rbp-10h]

 ptr = (unsigned int *)malloc(4u);
 if ( ptr )
 {
 *ptr = 42;
 printf("value before free: %d\n", *ptr);
 free(ptr);
 return *ptr;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: double_free @ 0x1E40 */
long long double_free(unsigned int *a1)
{
 unsigned int *ptr; // [rsp+8h] [rbp-18h]

 if ( a1 )
 {
 return *a1;
 }
 else
 {
 ptr = malloc(4u);
 if ( ptr )
 {
 *ptr = 10;
 free(ptr);
 free(ptr);
 return (unsigned int)-2;
 }
 else
 {
 return (unsigned int)-1;
 }
 }
}


/* Function: heap_overflow @ 0x1EC0 */
long long heap_overflow()
{
 unsigned int v1; // [rsp+8h] [rbp-18h]
 int i; // [rsp+Ch] [rbp-14h]
 unsigned int *ptr; // [rsp+10h] [rbp-10h]

 ptr = (unsigned int *)malloc(0x28u);
 if ( ptr )
 {
 for ( i = 0; i <= 10; ++i )
 ptr[i] = 100 * i;
 v1 = *ptr;
 free(ptr);
 return v1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: test_heap_memory @ 0x1F40 */
void test_heap_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int stat_loc; // [rsp+Ch] [rbp-14h] BYREF
 unsigned int v10; // [rsp+10h] [rbp-10h]
 __pid_t pid; // [rsp+14h] [rbp-Ch]
 void *ptr; // [rsp+18h] [rbp-8h] BYREF

 printf(asc_314E);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n", v3);
 v4 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n", v4);
 ptr = 0;
 v5 = heap_nested(&ptr);
 printf("HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( ptr )
 {
 free(*((void **)ptr + 1));
 free(ptr);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n", v8);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ( !pid )
 {
 v10 = dangling_pointer();
 printf(aD, v10);
 exit(0);
 }
 if ( pid <= 0 )
 {
 perror(s);
 }
 else
 {
 waitpid(pid, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (char)((stat_loc & 0x7F) + 1) >> 1 > 0 )
 printf(&byte_32DC, stat_loc & 0x7F);
 }
 else
 {
 printf(&byte_32B7, (stat_loc & 0xFF00) >> 8);
 }
 }
}


/* Function: global_var_access @ 0x2130 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x2150 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x2160 */
long long global_array_access(unsigned int a1)
{
 if ( a1 < 0xA )
 return (unsigned int)global_array[a1];
 else
 return (unsigned int)-1;
}


/* Function: static_local @ 0x21A0 */
long long static_local(int a1)
{
 if ( a1 )
 {
 static_local_counter = 0;
 return 0;
 }
 else
 {
 return (unsigned int)++static_local_counter;
 }
}


/* Function: call_static_func @ 0x21F0 */
long long call_static_func(unsigned int a1)
{
 return (unsigned int)static_helper(a1) + 1;
}


/* Function: static_helper @ 0x2210 */
long long static_helper(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: access_extern_global @ 0x2220 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x2240 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2250 */
long long read_const_data()
{
 return (unsigned int)(*((char *)const_string + 4) + 42);
}


/* Function: access_bss_var @ 0x2270 */
long long access_bss_var()
{
 return (unsigned int)bss_var;
}


/* Function: access_bss_buffer @ 0x2280 */
long long access_bss_buffer()
{
 return (unsigned int)bss_buffer;
}


/* Function: global_struct_access @ 0x2290 */
long long global_struct_access()
{
 return (unsigned int)(dword_60D4 + global_point);
}


/* Function: set_file_static @ 0x22B0 */
long long set_file_static(unsigned int a1)
{
 long long result; // rax

 result = a1;
 file_scope_static = a1;
 return result;
}


/* Function: get_file_static @ 0x22D0 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x22E0 */
long long set_global_callback(long long a1)
{
 long long result; // rax

 result = a1;
 global_func_ptr = a1;
 return result;
}


/* Function: call_global_callback @ 0x2300 */
long long call_global_callback(unsigned int a1)
{
 if ( global_func_ptr )
 return (unsigned int)((long long (*)(unsigned int))global_func_ptr)(a1);
 else
 return (unsigned int)-1;
}


/* Function: global_heap_store @ 0x2340 */
long long global_heap_store(long long a1)
{
 global_heap_ptr = a1;
 if ( a1 )
 return *(unsigned int *)global_heap_ptr;
 else
 return (unsigned int)-1;
}


/* Function: static_complex_init @ 0x2380 */
long long static_complex_init()
{
 return (unsigned int)(dword_60F0 + dword_60E8 + complex_init);
}


/* Function: tls_access @ 0x23A0 */
long long tls_access(unsigned int a1)
{
 __writefsdword(0xFFFFFFFC, a1);
 return 2 * __readfsdword(0xFFFFFFFC);
}


/* Function: init_order_test @ 0x23C0 */
long long init_order_test()
{
 int v1; // [rsp+Ch] [rbp-4h] BYREF

 v1 = 20;
 return init_depends_on(&v1);
}


/* Function: init_depends_on @ 0x23E0 */
long long init_depends_on(int *a1)
{
 if ( a1 )
 init_depends_on_static_depends = *a1;
 return (unsigned int)init_depends_on_static_depends;
}


/* Function: test_static_global @ 0x2410 */
int test_static_global()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int const_data; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int file_static; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int inited; // eax
 int v19; // [rsp+Ch] [rbp-4h] BYREF

 printf(asc_3333);
 v0 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n", v0);
 v1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n", v1);
 v2 = global_array_access(5u);
 printf("STM-L1-02 (global_array_access): %d\n", v2);
 static_local(1);
 v3 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n", v3);
 v4 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n", v4);
 v5 = call_static_func(5u);
 printf("STM-L1-04 (call_static_func): %d\n", v5);
 v6 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n", v6);
 v7 = call_extern_func();
 printf("STM-L2-02 (call_extern_func): %d\n", v7);
 const_data = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n", const_data);
 v9 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n", v9);
 v10 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n", v10);
 v11 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n", v11);
 set_file_static(0x32u);
 file_static = get_file_static();
 printf("STM-L2-06 (file_static): %d\n", file_static);
 set_global_callback((long long)double_value);
 v13 = call_global_callback(5u);
 printf("STM-L2-07 (global_func_ptr): %d\n", v13);
 v19 = 100;
 v14 = global_heap_store((long long)&v19);
 printf("STM-L2-08 (global_heap_store): %d\n", v14);
 v15 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n", v15);
 v16 = tls_access(0xAu);
 printf("STM-L3-01 (tls_access): %d\n", v16);
 inited = init_order_test();
 return printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: double_value @ 0x25F0 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: memop_memset @ 0x2600 */
long long memop_memset(unsigned char *a1, size_t a2, unsigned char a3)
{
 if ( a1 && a2 )
 {
 memset(a1, a3, a2);
 return *a1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_memcpy @ 0x2660 */
long long memop_memcpy(void *a1, const void *a2, size_t a3)
{
 if ( a1 && a2 && a3 )
 {
 memcpy(a1, a2, a3);
 return (unsigned int)*((unsigned int *)a1 + (a3 >> 2) - 1);
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_memmove @ 0x26E0 */
long long memop_memmove(long long a1, unsigned long long a2)
{
 if ( a1 && a2 >= 2 )
 {
 memmove((void *)(a1 + 1), (const void *)a1, a2 - 1);
 return (unsigned int)*(char *)(a1 + 1);
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_memcmp @ 0x2740 */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // eax
 int v6; // [rsp+Ch] [rbp-24h]

 if ( a1 && a2 && a3 )
 {
 v6 = memcmp(a1, a2, a3);
 if ( v6 <= 0 )
 {
 v3 = 0;
 if ( v6 < 0 )
 v3 = -1;
 return v3;
 }
 else
 {
 return 1;
 }
 }
 else
 {
 return 0;
 }
}


/* Function: memop_bzero @ 0x27D0 */
long long memop_bzero(unsigned char *a1, size_t a2)
{
 if ( a1 )
 {
 memset(a1, 0, a2);
 return *a1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_bcopy @ 0x2820 */
long long memop_bcopy(const void *a1, unsigned char *a2, size_t a3)
{
 if ( a1 && a2 && a3 )
 {
 bcopy(a1, a2, a3);
 return *a2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_unaligned_access @ 0x2890 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return (unsigned int)-1;
}


/* Function: memop_memory_barrier @ 0x28D0 */
long long memop_memory_barrier(int *a1)
{
 int v2; // [rsp+0h] [rbp-14h]

 if ( a1 )
 {
 v2 = *a1;
 _mm_mfence();
 return (unsigned int)(*a1 + v2);
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: test_memory_op_functions @ 0x2910 */
int test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 unsigned int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v9; // [rsp+Ch] [rbp-184h] BYREF
 long long v10; // [rsp+12h] [rbp-17Eh] BYREF
 unsigned char v11[4]; // [rsp+1Ah] [rbp-176h] BYREF
 int v12; // [rsp+1Eh] [rbp-172h] BYREF
 unsigned char v13[10]; // [rsp+22h] [rbp-16Eh] BYREF
 long long v14; // [rsp+2Ch] [rbp-164h] BYREF
 int v15; // [rsp+34h] [rbp-15Ch]
 long long v16; // [rsp+38h] [rbp-158h] BYREF
 int v17; // [rsp+40h] [rbp-150h]
 char v18[43]; // [rsp+45h] [rbp-14Bh] BYREF
 unsigned long long v19[2]; // [rsp+70h] [rbp-120h] BYREF
 int v20; // [rsp+80h] [rbp-110h]
 unsigned char v21[256]; // [rsp+90h] [rbp-100h] BYREF

 printf(asc_3596);
 v19[0] = 0x140000000AULL;
 v19[1] = 0x280000001EULL;
 v20 = 50;
 memset(&v18[11], 0, 0x14u);
 v0 = memop_memset(v21, 0xAu, 0x41u);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(&v18[11], v19, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(v18, "HelloWorld");
 v2 = memop_memmove((long long)v18, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 v16 = 0x200000001ULL;
 v17 = 3;
 v14 = 0x200000001ULL;
 v15 = 4;
 v3 = memop_memcmp(&v16, &v14, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v13, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 v12 = 67305985;
 memset(v11, 0, sizeof(v11));
 v5 = memop_bcopy(&v12, v11, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 v10 = 0x706050403020100LL;
 v6 = memop_unaligned_access((long long)v10);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 v9 = 5;
 v7 = memop_memory_barrier(&v9);
 return printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x2B20 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x2B50 */
static long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x2B60 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x61B8 */

/* FAILED to decompile: __libc_start_main @ 0x61C0 */

/* FAILED to decompile: printf @ 0x61C8 */

/* FAILED to decompile: memset @ 0x61D0 */

/* FAILED to decompile: memcmp @ 0x61D8 */

/* FAILED to decompile: calloc @ 0x61E0 */

/* FAILED to decompile: memcpy @ 0x61E8 */

/* FAILED to decompile: malloc @ 0x61F0 */

/* FAILED to decompile: realloc @ 0x61F8 */

/* FAILED to decompile: bcopy @ 0x6200 */

/* FAILED to decompile: memmove @ 0x6208 */

/* FAILED to decompile: waitpid @ 0x6210 */

/* FAILED to decompile: perror @ 0x6218 */

/* FAILED to decompile: exit @ 0x6220 */

/* FAILED to decompile: fork @ 0x6228 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6230 */

/* FAILED to decompile: __gmon_start__ @ 0x6240 */

/* Total functions decompiled: 66, failed: 17 */
