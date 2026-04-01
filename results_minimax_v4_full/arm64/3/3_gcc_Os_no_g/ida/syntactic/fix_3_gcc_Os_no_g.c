/* Standard library type definitions */
#include <stdint.h>
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
/* intmax_t and uintmax_t are defined in stdint.h */

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

/* BYTE1 macro definition */
#define BYTE1(x) (((unsigned char *)&(x))[1])

/* Global variables */
unsigned int global_counter = 0;
unsigned int file_scope_static = 0;
long long (*global_func_ptr)(void) = 0;
unsigned char _stack_chk_guard = 0;
unsigned int STACK[0x10001] = {0};

/* External declarations */
extern unsigned int extern_global_var;
static unsigned int counter_1;

/* Undecompiled string/data references - placeholder declarations */
extern const char asc_1D98[];
extern const char asc_1EE1[];
extern const char asc_20BA[];
extern const char asc_231C[];
extern unsigned char byte_8[];
extern const char aD[];
extern const char aFork_0[];
extern const char byte_2049[];
extern const char byte_206E[];
extern unsigned int global_array[10];
extern const char const_string[];

/* Macro definitions */
#define LODWORD(x) ((unsigned int)((unsigned long long)(x) & 0xFFFFFFFF))
#define HIDWORD(x) ((unsigned int)(((unsigned long long)(x) >> 32) & 0xFFFFFFFF))

/* Intrinsic declarations */
void __dmb(unsigned int);

/* Function declarations */
long long call_weak_fn(void);
void JUMPOUT(int);
long long test_stack_memory(void);
void test_heap_memory(void);
void *test_memory_op_functions(void);
long long test_static_global(void);
long long extern_function(int);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_gcc_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x990 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_9B0 @ 0x9B0 */
void sub_9B0()
{
 JUMPOUT(0);
}


/* Function: main @ 0xB00 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0xC54 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: local_vars @ 0xC5C */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0xC68 */
long long local_array(int a1)
{
 int v1; // w2
 long long i; // x1
 unsigned int v4[10]; // [xsp+10h] [xbp+10h]

 v1 = 0;
 for ( i = 0; i != 10; ++i )
 {
 v4[i] = v1;
 v1 += a1;
 }
 return v4[5];
}


/* Function: local_struct @ 0xCCC */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0xCD4 */
long long address_of_local(unsigned int *a1)
{
 long long result; // x0

 result = 42;
 *a1 = 42;
 return result;
}


/* Function: address_of_array @ 0xCE4 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0xCF0 */
long long large_stack_frame()
{
 long long i; // x0
 unsigned char v2[2048]; // [xsp+18h] [xbp+18h] BYREF

 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0xD58 */
long long vla_stack(int a1)
{
 long long v1; // x1
 unsigned short v2; // w2
 unsigned long long *v3; // x1
 long long v4; // x1
 unsigned long long *v6; // [xsp+FC00h] [xbp-10h] BYREF
 unsigned long long *v6_ptr; // pointer for comparison

 if ( (unsigned int)(a1 - 1) > 0x3E7 )
 return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFF0;
 v3 = (unsigned long long *)((uintptr_t)v6 - (unsigned long long)(v1 & 0xFFFF0000LL));
 v6_ptr = v6;
 while ( v6_ptr != v3 )
 {
 v3 = (unsigned long long *)((char *)v3 - ((unsigned long long)v1 & 0xFFFF0000LL));
 v6_ptr = (unsigned long long)v3;
 }
 v6[0] = 0;
 if ( v2 >= 0x400uLL )
 STACK[0x10000] = 0;
 v4 = 0;
 do
 {
 *((unsigned int *)&v6[2] + v4) = 2 * v4;
 ++v4;
 }
 while ( a1 > (int)v4 );
 return *((unsigned int *)&v6[2] + (a1 >> 1));
}


/* Function: alloca_usage @ 0xE1C */
long long alloca_usage(int a1)
{
 long long v1; // x1
 unsigned short v2; // w2
 unsigned long long *v3; // x1
 long long v4; // x1
 void *v6; // [xsp+FC00h] [xbp-10h] BYREF

 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFF0;
 v6 = alloca(v1 & 0xFFF0);
 v3 = (unsigned long long *)((char *)v6 + v1);
 while ( v6 != v3 )
 {
 v3 = (unsigned long long *)((char *)v3 - ((unsigned long long)v1 & 0xFFFF0000LL));
 }
 *(unsigned long long *)v6 = 0;
 if ( v2 >= 0x400uLL )
 STACK[0x10000] = 0;
 v4 = 0;
 do
 {
 *((unsigned int *)v6 + v4) = 3 * v4;
 ++v4;
 }
 while ( a1 > (int)v4 );
 return *((unsigned int *)v6 + (a1 >> 1));
}


/* Function: stack_alias @ 0xEDC */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0xEE4 */
long long test_stack_memory()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0

 puts(asc_1D98);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 v0 = local_array(2);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", v0);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v1 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v1);
 v2 = vla_stack(10);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", v2);
 v3 = alloca_usage(10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v3);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xFCC */
long long heap_basic(int a1)
{
 unsigned int *v2; // x0
 long long i; // x1
 unsigned int v4; // w19

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 for ( i = 0; a1 > (int)i; ++i )
 v2[i] = 2 * i;
 v4 = v2[a1 / 2];
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: heap_calloc @ 0x102C */
long long heap_calloc(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x1
 unsigned int v4; // w19
 int v6; // w2

 v2 = calloc(a1, 4u);
 if ( v2 )
 {
 v3 = 0;
 v4 = 0;
 while ( a1 > (int)v3 )
 {
 v6 = v2[v3++];
 v4 += v6;
 }
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: heap_realloc @ 0x1088 */
long long heap_realloc()
{
 void *v0; // x0
 void *v1; // x19
 void *v2; // x0
 long long v3; // w19
 void *v5; // x0

 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 *(unsigned long long *)v0 = 0x200000001LL;
 *(unsigned long long *)((char *)v0 + 8) = 0x400000003LL;
 *((unsigned int *)v0 + 4) = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 if ( ((unsigned int *)v2)[2] == 3 )
 v3 = 50;
 else
 v3 = -3;
 free(v2);
 }
 else
 {
 v5 = v1;
 v3 = -2;
 free(v5);
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_array @ 0x1110 */
long long heap_array(int a1)
{
 unsigned int *v2; // x0
 long long i; // x1
 unsigned int v4; // w19

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 for ( i = 0; a1 > (int)i; ++i )
 v2[i] = 3 * i;
 v4 = v2[a1 / 2];
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: heap_struct @ 0x1170 */
long long heap_struct(int a1)
{
 void *v2; // x0
 unsigned int v3; // w19

 v2 = malloc(8u);
 if ( v2 )
 {
 v3 = 3 * a1;
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_nested @ 0x11AC */
long long heap_nested(void *a1)
{
 void *v2; // x0
 void **v3; // x19
 void *v4; // x0

 v2 = malloc(0x10u);
 *(void **)a1 = v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = (void **)v2;
 *(int *)v2 = 10;
 v4 = malloc(0x10u);
 *((void **)((char *)v3 + 8)) = v4;
 if ( v4 )
 {
 *(unsigned int *)v4 = 20;
 *(unsigned int *)((char *)v3 + 12) = 0;
 return 0;
 }
 else
 {
 free(v3);
 return 4294967294LL;
 }
}


/* Function: linked_list_heap @ 0x121C */
long long linked_list_heap()
{
 unsigned long long *v0; // x0
 int v1; // w20
 unsigned long long *v2; // x19
 unsigned long long *v3; // x21
 unsigned int v4; // w20
 unsigned long long *v6; // x20
 unsigned long long *v7; // x0
 int v8; // w1
 void *v9; // x0

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = v0;
 v0 = malloc(0x10u);
 if ( !v0 )
 break;
 *(unsigned int *)v0 = v1;
 v0[1] = 0;
 if ( v2 )
 v3[1] = v0;
 else
 v2 = v0;
 v1 += 10;
 if ( v1 == 50 )
 {
 v7 = v2;
 v4 = 0;
 do
 {
 v8 = *(unsigned int *)v7;
 v7 = (unsigned long long *)v7[1];
 v4 += v8;
 }
 while ( v7 );
 do
 {
 v9 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v9);
 }
 while ( v2 );
 return v4;
 }
 }
 while ( v2 )
 {
 v6 = (void *)v2[1];
 free(v2);
 v2 = v6;
 }
 return (unsigned int)-1;
}


/* Function: create_tree_node @ 0x12C8 */
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


/* Function: tree_heap_traversal @ 0x12F8 */
long long tree_heap_traversal()
{
 unsigned long long *tree_node; // x0
 unsigned long long *v1; // x19
 unsigned long long *v2; // x1
 unsigned int *v3; // x0
 void *v4; // x0
 unsigned int v5; // w20

 tree_node = create_tree_node(10);
 if ( !tree_node )
 return (unsigned int)-1;
 v1 = tree_node;
 tree_node[1] = create_tree_node(20);
 v2 = create_tree_node(30);
 v3 = (unsigned int *)v1[1];
 v1[2] = v2;
 if ( v3 )
 {
 if ( v2 )
 {
 v5 = *(unsigned int *)v1 + *v3 + *(unsigned int *)v2;
 free(v3);
 free((void *)v1[2]);
 free(v1);
 return v5;
 }
 free(v3);
 }
 v4 = (void *)v1[2];
 if ( v4 )
 free(v4);
 v5 = -2;
 free(v1);
 return v5;
}


/* Function: memory_leak @ 0x139C */
long long memory_leak(int a1)
{
 unsigned int *v2; // x0
 long long i; // x1

 v2 = malloc(4LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 for ( i = 0; a1 > (int)i; ++i )
 v2[i] = i;
 return (unsigned int)v2[a1 / 2];
}


/* Function: dangling_pointer @ 0x13F0 */
long long dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19

 v0 = (unsigned int *)malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1440 */
long long double_free(unsigned int *a1)
{
 void *v1; // x0
 void *v2; // x19

 if ( a1 )
 return *a1;
 v1 = malloc(4u);
 v2 = v1;
 if ( !v1 )
 return 0xFFFFFFFFLL;
 free(v1);
 free(v2);
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x148C */
long long heap_overflow()
{
 unsigned int *v0; // x0
 long long i; // x1
 unsigned int v2; // w19

 v0 = (unsigned int *)malloc(0x28u);
 if ( v0 )
 {
 for ( i = 0; i != 11; ++i )
 v0[i] = 100 * i;
 v2 = *v0;
 free(v0);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v2;
}


/* Function: test_heap_memory @ 0x14E0 */
void test_heap_memory(void)
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 unsigned int v10; // w0
 long long v11; // x2
 int stat_loc; // [xsp+1Ch] [xbp+1Ch] BYREF
 void *ptr; // [xsp+20h] [xbp+20h] BYREF

 puts(asc_1EE1);
 v0 = heap_basic(10);
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v3);
 v4 = heap_struct(5);
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v4);
 ptr = 0;
 v5 = heap_nested(&ptr);
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( ptr )
 {
 free(*(void **)&byte_8[(unsigned long long)(uintptr_t)ptr]);
 free(ptr);
 }
 v6 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v8);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v9 = fork();
 if ( !v9 )
 {
 v10 = dangling_pointer();
 __printf_chk(1, aD, v10);
 exit(0);
 }
 if ( v9 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v9, &stat_loc, 0);
 v11 = stat_loc & 0x7F;
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((int)v11 + 1) << 24 >> 25 > 0 )
 __printf_chk(1, byte_206E, v11);
 }
 else
 {
 __printf_chk(1, byte_2049, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x16D4 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x16E8 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x16F8 */
long long global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x1718 */
long long static_local(int a1)
{
 long long result; // x0

 if ( a1 )
 result = 0;
 else
 result = (unsigned int)(counter_1 + 1);
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x1740 */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x174C */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x1760 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1768 */
long long read_const_data()
{
 return (unsigned int)(unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x177C */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1784 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x178C */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1794 */
long long set_file_static(long long result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x17A0 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x17AC */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x17B8 */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x17D4 */
long long global_heap_store(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x17E8 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x17F0 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x17F8 */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1800 */
long long test_static_global()
{
 int v0; // w0
 int v1; // w0
 int const_data; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0

 puts(asc_20BA);
 v0 = global_var_access();
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v0);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v1 = call_extern_func();
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v1);
 const_data = read_const_data();
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_data);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 v3 = global_struct_access();
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", v3);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (long long (*)(void))double_value;
 v4 = call_global_callback();
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 v5 = static_complex_init();
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x19E8 */
long long memop_memset(unsigned char *a1, size_t n, int c)
{
 bool v3; // zf

 if ( a1 )
 v3 = n == 0;
 else
 v3 = 1;
 if ( v3 )
 return 0xFFFFFFFFLL;
 memset(a1, c, n);
 return *a1;
}


/* Function: memop_memcpy @ 0x1A2C */
long long memop_memcpy(char *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 char *v4; // x19

 if ( a1 )
 v3 = a2 == 0;
 else
 v3 = 1;
 if ( v3 )
 return 0xFFFFFFFFLL;
 if ( !a3 )
 return 0xFFFFFFFFLL;
 v4 = &a1[a3 & 0xFFFFFFFFFFFFFFFCLL];
 memcpy(a1, a2, a3);
 return *((unsigned int *)v4 - 1);
}


/* Function: memop_memmove @ 0x1A7C */
long long memop_memmove(char *src, unsigned long long a2)
{
 bool v2; // cc

 if ( src )
 v2 = a2 > 1;
 else
 v2 = 0;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 memmove(src + 1, src, a2 - 1);
 return (unsigned char)src[1];
}


/* Function: memop_memcmp @ 0x1AC0 */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 int v4; // w0
 bool v5; // cc
 long long result; // x0

 if ( a1 )
 v3 = a2 == 0;
 else
 v3 = 1;
 if ( v3 || !a3 )
 return 0;
 v4 = memcmp(a1, a2, a3);
 v5 = v4 <= 0;
 if ( v4 )
 result = -1;
 else
 result = 0;
 if ( v5 )
 return (unsigned int)result;
 else
 return 1;
}


/* Function: memop_bzero @ 0x1AF8 */
long long memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x1B30 */
long long memop_bcopy(void *src, void *dest, size_t a3)
{
 bool v3; // zf

 if ( src )
 v3 = dest == 0;
 else
 v3 = 1;
 if ( v3 || !a3 )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned char *)memmove(dest, src, a3);
}


/* Function: memop_unaligned_access @ 0x1B6C */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x1B80 */
long long memop_memory_barrier(int *a1)
{
 int v1; // w1

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 __dmb(0xBu);
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x1BA0 */
void *test_memory_op_functions()
{
 int v0; // w0
 int v1; // w0
 unsigned int v2; // w0
 int v3; // w0
 long long v4; // x2
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v9; // [xsp+24h] [xbp+24h] BYREF
 long long s1; // [xsp+28h] [xbp+28h] BYREF
 int v11; // [xsp+30h] [xbp+30h]
 long long s2; // [xsp+38h] [xbp+38h] BYREF
 int v13; // [xsp+40h] [xbp+40h]
 unsigned long long v14[2]; // [xsp+48h] [xbp+48h] BYREF
 int v15; // [xsp+58h] [xbp+58h]
 unsigned long long v16[2]; // [xsp+60h] [xbp+60h] BYREF
 int v17; // [xsp+70h] [xbp+70h]
 int v18; // [xsp+78h] [xbp+78h] BYREF
 int dest; // [xsp+80h] [xbp+80h] BYREF
 unsigned char v20[16]; // [xsp+88h] [xbp+88h] BYREF
 char src[16]; // [xsp+98h] [xbp+98h] BYREF
 unsigned char v22[256]; // [xsp+A8h] [xbp+A8h] BYREF

 puts(asc_231C);
 v16[0] = 0;
 v16[1] = 0;
 v17 = 0;
 v14[0] = 0x140000000ALL;
 v14[1] = 0x280000001ELL;
 v15 = 50;
 v0 = memop_memset(v22, 0xAu, 65);
 __printf_chk(1, "MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy((char *)v16, v14, 0x14u);
 __printf_chk(1, "MEMOP-L2-02: %d\n", v1);
 strcpy(src, "HelloWorld");
 v2 = memop_memmove(src, 0xAu);
 __printf_chk(1, "MEMOP-L2-03: %c\n", v2);
 s1 = 0x200000001LL;
 s2 = 0x200000001LL;
 v11 = 3;
 v13 = 4;
 v3 = memcmp(&s1, &s2, 0xCu);
 if ( v3 )
 LODWORD(v4) = -1;
 else
 LODWORD(v4) = 0;
 if ( v3 > 0 )
 v4 = 1;
 else
 v4 = (unsigned int)v4;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v4);
 v5 = memop_bzero(v20, 0xAu);
 __printf_chk(1, "MEMOP-L2-05: %d\n", v5);
 v18 = 67305985;
 dest = 0;
 v6 = memop_bcopy(&v18, &dest, 4u);
 __printf_chk(1, "MEMOP-L2-06: %d\n", v6);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v9 = 5;
 v7 = memop_memory_barrier(&v9);
 __printf_chk(1, "MEMOP-L3-02: %d\n", v7);
 return &_stack_chk_guard;
}


/* Function: extern_function @ 0x1D78 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x1D80 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x13098 */

/* FAILED to decompile: memmove @ 0x130A0 */

/* FAILED to decompile: exit @ 0x130A8 */

/* FAILED to decompile: __libc_start_main @ 0x130B0 */

/* FAILED to decompile: perror @ 0x130B8 */

/* FAILED to decompile: __cxa_finalize @ 0x130C0 */

/* FAILED to decompile: fork @ 0x130C8 */

/* FAILED to decompile: malloc @ 0x130D0 */

/* FAILED to decompile: __printf_chk @ 0x130D8 */

/* FAILED to decompile: memset @ 0x130E0 */

/* FAILED to decompile: calloc @ 0x130E8 */

/* FAILED to decompile: realloc @ 0x130F0 */

/* FAILED to decompile: __stack_chk_fail @ 0x130F8 */

/* FAILED to decompile: abort @ 0x13108 */

/* FAILED to decompile: puts @ 0x13110 */

/* FAILED to decompile: memcmp @ 0x13118 */

/* FAILED to decompile: free @ 0x13120 */

/* FAILED to decompile: waitpid @ 0x13128 */

/* FAILED to decompile: __gmon_start__ @ 0x13138 */

/* Total functions decompiled: 65, failed: 19 */
