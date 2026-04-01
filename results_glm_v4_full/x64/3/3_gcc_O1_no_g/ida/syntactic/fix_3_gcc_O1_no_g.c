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
#include <stdbool.h>
#ifndef NULL
#define NULL ((void*)0)
#endif

/* Stack canary intrinsic for x86_64 */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
    unsigned long long value;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long*)(offset)));
    return value;
}

/* Global variable declarations */
int global_counter = 0;
static int file_scope_static = 0;
long long (*global_func_ptr)(void) = NULL;
static int counter_1 = 0;
extern int extern_global_var;
long long extern_function(int a1);
int global_array[10];
int static_depends_0;

/* String constant declarations */
static const char *s = "Testing Stack Memory\n";
static const char *asc_30E6 = "Testing Heap Memory\n";
static const char *aD = "%d\n";
static const char *aFork_0 = "fork";
static const char *byte_33F0 = "Child exited with signal %d\n";
static const char *byte_33C8 = "Child exited with status %d\n";
static const char *asc_3438 = "Testing Static & Global Memory\n";
static const char *asc_3688 = "Testing Memory Operations\n";
static const char *const_string = "HelloWorld";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_gcc_O1_no_g
 * Processor: pc
 */





/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1309 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: local_vars @ 0x1311 */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x131A */
long long local_array(int a1)
{
 unsigned long long *v1; // rax
 int v2; // edx
 unsigned int v4[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h] BYREF

 v5 = __readfsqword(0x28u);
 v1 = (unsigned long long *)v4;
 v2 = 0;
 do
 {
 *(unsigned int *)v1 = v2;
 v2 += a1;
 v1 = (unsigned long long *)((char *)v1 + 4);
 }
 while ( v1 != &v5 );
 return v4[5];
}


/* Function: local_struct @ 0x136A */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x1372 */
long long address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x1382 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x138B */
long long large_stack_frame()
{
 long long i; // rax
 unsigned char v2[2056]; // [rsp+0h] [rbp-818h]
 unsigned long long v3; // [rsp+808h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x13E0 */
long long vla_stack(int a1)
{
 signed long long v1; // rax
 void *v2; // rsp
 long long v3; // rax
 long long v4; // rdx
 unsigned int v7[2]; // [rsp+8h] [rbp-10h] BYREF
 unsigned long long v8; // [rsp+10h] [rbp-8h]

 v8 = __readfsqword(0x28u);
 if ( (unsigned int)(a1 - 1) > 0x3E7 )
 return 0xFFFFFFFFLL;
 while ( v7 != (unsigned int *)((char *)v7 - ((4LL * a1 + 15) & 0xFFFFFFFFFFFFF000LL)) )
 ;
 v1 = (4 * (unsigned short)a1 + 15) & 0xFF0;
 v2 = alloca(v1);
 if ( ((4 * (unsigned short)a1 + 15) & 0xFF0) != 0 )
 *(unsigned long long *)((char *)&v7[-2] + v1) = *(unsigned long long *)((char *)&v7[-2] + v1);
 v3 = 0;
 do
 {
 v7[v3] = 2 * v3;
 v4 = v3++;
 }
 while ( v4 != a1 - 1 );
 return (unsigned int)v7[a1 / 2];
}


/* Function: alloca_usage @ 0x149C */
long long alloca_usage(int a1)
{
 signed long long v1; // rax
 void *v2; // rsp
 unsigned int *v3; // rdx
 int v4; // eax
 unsigned int v7[2]; // [rsp+8h] [rbp-10h] BYREF
 unsigned long long v8; // [rsp+10h] [rbp-8h]

 v8 = __readfsqword(0x28u);
 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 while ( v7 != (unsigned int *)((char *)v7 - ((4LL * a1 + 23) & 0xFFFFFFFFFFFFF000LL)) )
 ;
 v1 = (4 * (unsigned short)a1 + 23) & 0xFF0;
 v2 = alloca(v1);
 if ( ((4 * (unsigned short)a1 + 23) & 0xFF0) != 0 )
 *(unsigned long long *)((char *)&v7[-2] + v1) = *(unsigned long long *)((char *)&v7[-2] + v1);
 v3 = v7;
 v4 = 0;
 do
 {
 *v3 = v4;
 v4 += 3;
 ++v3;
 }
 while ( v4 != 3 * a1 );
 return (unsigned int)v7[a1 / 2];
}


/* Function: stack_alias @ 0x1558 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x1562 */
long long test_stack_memory()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax

 puts(s);
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


/* Function: heap_basic @ 0x168A */
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
 v1[i] = 2 * i;
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


/* Function: heap_calloc @ 0x16DD */
long long heap_calloc(int a1)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rdx
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
 v2 = v1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( v2 != &v1[a1] );
 }
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_realloc @ 0x172D */
long long heap_realloc()
{
 unsigned int *v0; // rax
 void *v1; // rbx
 unsigned int *v2; // rax
 unsigned int v3; // ebx

 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v2[5] = 50;
 v2[6] = 60;
 v2[7] = 70;
 v2[8] = 80;
 v2[9] = 90;
 v3 = -3;
 if ( v2[2] == 3 )
 v3 = 50;
 free(v2);
 }
 else
 {
 free(v1);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_array @ 0x17D3 */
long long heap_array(int a1)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rcx
 int v3; // edx
 unsigned int v4; // ebx

 v1 = malloc(4LL * a1);
 if ( v1 )
 {
 if ( a1 > 0 )
 {
 v2 = v1;
 v3 = 0;
 do
 {
 *v2 = v3;
 v3 += 3;
 ++v2;
 }
 while ( v3 != 3 * a1 );
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


/* Function: heap_struct @ 0x1829 */
long long heap_struct(int a1)
{
 void *v1; // rax
 unsigned int v2; // ebx

 v1 = malloc(8u);
 if ( v1 )
 {
 v2 = 3 * a1;
 free(v1);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v2;
}


/* Function: heap_nested @ 0x1855 */
long long heap_nested(unsigned long long *a1)
{
 unsigned int *v1; // rax
 unsigned long long *v2; // rbx
 unsigned long long *v3; // rax

 v1 = malloc(0x10u);
 *a1 = v1;
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v2 = v1;
 *v1 = 10;
 v3 = malloc(0x10u);
 v2[1] = v3;
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


/* Function: linked_list_heap @ 0x18C1 */
long long linked_list_heap()
{
 int v0; // ebp
 unsigned long long *v1; // rax
 unsigned long long *v2; // rbx
 void *v3; // rdi
 unsigned int v4; // ebp
 unsigned long long *v5; // r12
 unsigned long long *v6; // rax
 void *v7; // rdi

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v5 = v1;
 v1 = malloc(0x10u);
 if ( !v1 )
 break;
 *(unsigned int *)v1 = v0;
 v1[1] = 0;
 if ( v2 )
 v5[1] = v1;
 else
 v2 = v1;
 v0 += 10;
 if ( v0 == 50 )
 {
 v6 = v2;
 v4 = 0;
 do
 {
 v4 += *(unsigned int *)v6;
 v6 = (unsigned long long *)v6[1];
 }
 while ( v6 );
 do
 {
 v7 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v7);
 }
 while ( v2 );
 return v4;
 }
 }
 if ( v2 )
 {
 do
 {
 v3 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v3);
 }
 while ( v2 );
 return (unsigned int)-1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: create_tree_node @ 0x1968 */
unsigned long long * create_tree_node(int a1)
{
 unsigned long long *result; // rax

 result = malloc(0x18u);
 if ( result )
 {
 *(unsigned int *)result = a1;
 result[1] = 0;
 result[2] = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1992 */
long long tree_heap_traversal()
{
 unsigned long long *tree_node; // rax
 unsigned long long *v1; // rbx
 unsigned long long *v2; // rax
 unsigned int *v3; // rdi
 unsigned int v4; // ebp
 void *v6; // rdi

 tree_node = create_tree_node(10);
 if ( tree_node )
 {
 v1 = tree_node;
 tree_node[1] = create_tree_node(20);
 v2 = create_tree_node(30);
 v1[2] = v2;
 v3 = (unsigned int *)v1[1];
 if ( v2 && v3 )
 {
 v4 = *(unsigned int *)v2 + *(unsigned int *)v1 + *v3;
 free(v3);
 free((void *)v1[2]);
 free(v1);
 }
 else
 {
 if ( v3 )
 free(v3);
 v6 = (void *)v1[2];
 if ( v6 )
 free(v6);
 free(v1);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: memory_leak @ 0x1A2B */
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


/* Function: dangling_pointer @ 0x1A72 */
long long dangling_pointer()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx

 v0 = (unsigned int *)malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1AB7 */
long long double_free(unsigned int *a1)
{
 void *v2; // rax
 void *v3; // rbx

 if ( a1 )
 return *a1;
 v2 = malloc(4u);
 v3 = v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 free(v2);
 free(v3);
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x1AF4 */
long long heap_overflow()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rcx
 int i; // edx
 unsigned int v3; // ebx

 v0 = malloc(0x28u);
 if ( v0 )
 {
 v1 = v0;
 for ( i = 0; i != 1100; i += 100 )
 *v1++ = i;
 v3 = *v0;
 free(v0);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: test_heap_memory @ 0x1B36 */
unsigned long long test_heap_memory()
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
 int v9; // eax
 unsigned int v10; // eax
 int stat_loc; // [rsp+Ch] [rbp-1Ch] BYREF
 void *ptr; // [rsp+10h] [rbp-18h] BYREF
 unsigned long long v14; // [rsp+18h] [rbp-10h]

 v14 = __readfsqword(0x28u);
 puts(asc_30E6);
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
 free(*((void **)ptr + 1));
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
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (char)((stat_loc & 0x7F) + 1) > 1 )
 __printf_chk(1, byte_33F0, stat_loc & 0x7F);
 }
 else
 {
 __printf_chk(1, byte_33C8, (stat_loc >> 8) & 0xFF);
 }
 }
 return v14 - __readfsqword(0x28u);
}


/* Function: global_var_access @ 0x1D80 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1D94 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1DA1 */
long long global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x1DBE */
long long static_local(int a1)
{
 long long result; // rax

 result = 0;
 if ( !a1 )
 result = (unsigned int)(counter_1 + 1);
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x1DDB */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x1DE4 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x1DF2 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1E09 */
long long read_const_data()
{
 return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x1E1C */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1E26 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1E30 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1E3A */
void set_file_static(int a1)
{
 file_scope_static = a1;
}


/* Function: get_file_static @ 0x1E45 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x1E50 */
void set_global_callback(long long a1)
{
 global_func_ptr = a1;
}


/* Function: call_global_callback @ 0x1E5C */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1E7D */
long long global_heap_store(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x1E8F */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1E99 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1EA1 */
long long init_order_test()
{
 static_depends_0 = 20;
 return 20;
}


/* Function: test_static_global @ 0x1EB5 */
long long test_static_global()
{
 int v0; // eax
 int v1; // eax
 int const_data; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int inited; // eax

 puts(asc_3438);
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
 v4 = call_global_callback(5);
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 v5 = static_complex_init();
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 inited = init_order_test();
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: memop_memset @ 0x2112 */
long long memop_memset(unsigned char *a1, size_t a2, int a3)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 if ( !a2 )
 return 0xFFFFFFFFLL;
 memset(a1, a3, a2);
 return *a1;
}


/* Function: memop_memcpy @ 0x2143 */
long long memop_memcpy(char *a1, const void *a2, size_t a3)
{
 if ( a3 == 0 || a2 == 0 || !a1 )
 return 0xFFFFFFFFLL;
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[(a3 & 0xFFFFFFFFFFFFFFFCLL) - 4];
}


/* Function: memop_memmove @ 0x2186 */
long long memop_memmove(char *src, unsigned long long a2)
{
 if ( !src )
 return 0xFFFFFFFFLL;
 if ( a2 <= 1 )
 return 0xFFFFFFFFLL;
 memmove(src + 1, src, a2 - 1);
 return (unsigned int)src[1];
}


/* Function: memop_memcmp @ 0x21BC */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // eax
 unsigned int v4; // edx
 bool v5; // cc
 long long result; // rax

 if ( a3 == 0 || a2 == 0 || !a1 )
 return 0;
 v3 = memcmp(a1, a2, a3);
 v4 = v3 >> 31;
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: memop_bzero @ 0x21F4 */
long long memop_bzero(unsigned char *a1, size_t a2)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, a2);
 return *a1;
}


/* Function: memop_bcopy @ 0x2219 */
long long memop_bcopy(void *src, unsigned char *dest, size_t a3)
{
 if ( a3 == 0 || dest == 0 )
 return 0xFFFFFFFFLL;
 if ( !src )
 return 0xFFFFFFFFLL;
 memmove(dest, src, a3);
 return *dest;
}


/* Function: memop_unaligned_access @ 0x2253 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x2266 */
long long memop_memory_barrier(int *a1)
{
 int v1; // edx
 __sync_synchronize();

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 return (unsigned int)(v1 + *a1);
}


/* Function: test_memory_op_functions @ 0x2282 */
unsigned long long test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 unsigned int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v8; // [rsp+4h] [rbp-194h] BYREF
 unsigned int v9[3]; // [rsp+8h] [rbp-190h] BYREF
 unsigned int v10[3]; // [rsp+14h] [rbp-184h] BYREF
 unsigned int v11[8]; // [rsp+20h] [rbp-178h] BYREF
 unsigned long long v12[2]; // [rsp+40h] [rbp-158h] BYREF
 int v13; // [rsp+50h] [rbp-148h]
 int v14; // [rsp+63h] [rbp-135h] BYREF
 int dest; // [rsp+67h] [rbp-131h] BYREF
 unsigned char v16[10]; // [rsp+6Bh] [rbp-12Dh] BYREF
 char src[11]; // [rsp+75h] [rbp-123h] BYREF
 unsigned char v18[264]; // [rsp+80h] [rbp-118h] BYREF
 unsigned long long v19; // [rsp+188h] [rbp-10h]

 v19 = __readfsqword(0x28u);
 puts(asc_3688);
 v11[0] = 10;
 v11[1] = 20;
 v11[2] = 30;
 v11[3] = 40;
 v11[4] = 50;
 v12[0] = 0;
 v12[1] = 0;
 v13 = 0;
 v0 = memop_memset(v18, 0xAu, 65);
 __printf_chk(1, "MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy((char *)v12, v11, 0x14u);
 __printf_chk(1, "MEMOP-L2-02: %d\n", v1);
 strcpy(src, "HelloWorld");
 v2 = memop_memmove(src, 0xAu);
 __printf_chk(1, "MEMOP-L2-03: %c\n", v2);
 v9[0] = 1;
 v9[1] = 2;
 v9[2] = 3;
 v10[0] = 1;
 v10[1] = 2;
 v10[2] = 4;
 v3 = memop_memcmp(v9, v10, 0xCu);
 __printf_chk(1, "MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v16, 0xAu);
 __printf_chk(1, "MEMOP-L2-05: %d\n", v4);
 v14 = 67305985;
 dest = 0;
 v5 = memop_bcopy(&v14, (unsigned char *)&dest, 4u);
 __printf_chk(1, "MEMOP-L2-06: %d\n", v5);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v8 = 5;
 v6 = memop_memory_barrier(&v8);
 __printf_chk(1, "MEMOP-L3-02: %d\n", v6);
 return v19 - __readfsqword(0x28u);
}


/* Function: main @ 0x24AF */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory(argc, argv, envp);
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x24E9 */
/* External function - definition removed to prevent multiple definition error */


/* Function: .term_proc @ 0x24F4 */
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

/* Total functions decompiled: 79, failed: 18 */
