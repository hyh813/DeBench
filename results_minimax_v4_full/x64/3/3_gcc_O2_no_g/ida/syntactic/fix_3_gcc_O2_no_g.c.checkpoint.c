/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
#endif
/* int64_t is provided by stdint.h or system headers */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard definitions */
#define NULL ((void*)0)
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Intrinsics */
static inline unsigned long long __readfsqword(unsigned long offset) {
    unsigned long long ret;
    __asm__ __volatile__("movq %%fs:(%1), %0" : "=r"(ret) : "r"(offset));
    return ret;
}

static inline long long _InterlockedOr64(volatile long long *ptr, long long val) {
    long long old;
    __asm__ __volatile__("lock; orq %1, %0" : "=m"(*ptr), "=r"(old) : "1"(val) : "memory");
    return old;
}

/* External declarations */
int test_stack_memory(int argc, const char **argv, const char **envp);
void test_heap_memory(void);
long long test_static_global(int argc, const char **argv, const char **envp);
long long test_memory_op_functions(void);
extern long long extern_function(int a1);
char asc_30E6[] = "Heap Memory Test";
char asc_3438[] = "Static Memory Test";
char asc_3688[] = "Memory Operations Test";
char aD[] = "value after free: %d\n";
char aFork_0[] = "fork";
char byte_33F0[] = "child signal: %d\n";
char byte_33C8[] = "child exit status: %d\n";

/* Global variable declarations */
unsigned int global_counter = 0;
unsigned int counter_1 = 0;
int file_scope_static = 0;
long long (*global_func_ptr)(void) = NULL;
unsigned int global_array[10] = {0};
static unsigned int extern_global_var = 0;
const char const_string[] = "HelloWorld";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_gcc_O2_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */


/* Function: main @ 0x1220 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory(argc, argv, envp);
 test_heap_memory();
 test_static_global(argc, argv, envp);
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1340 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: local_vars @ 0x1350 */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x1360 */
long long local_array(int a1)
{
 int v1; // edx
 unsigned long long *v2; // rax
 unsigned int v4[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h] BYREF

 v1 = 0;
 v5 = __readfsqword(0x28u);
 v2 = (unsigned long long *)v4;
 do
 {
 *(unsigned int *)v2 = v1;
 v2 = (unsigned long long *)((char *)v2 + 4);
 v1 += a1;
 }
 while ( v2 != &v5 );
 return v4[5];
}


/* Function: local_struct @ 0x13B0 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x13C0 */
long long address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x13D0 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x13E0 */
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


/* Function: vla_stack @ 0x1440 */
long long vla_stack(int a1)
{
 long long v1; // rdx
 unsigned int *v2; // rcx
 short v3; // dx
 signed long long v4; // rdx
 void *v5; // rsp
 long long v6; // rax
 unsigned int v9[1022]; // [rsp+8h] [rbp-1010h] BYREF
 unsigned long long v10[2]; // [rsp+1008h] [rbp-10h] BYREF

 v10[1] = __readfsqword(0x28u);
 if ( (unsigned int)(a1 - 1) > 0x3E7 )
 return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 15;
 v2 = (unsigned int *)((char *)v10 - (v1 & 0xFFFFFFFFFFFFF000LL));
 v3 = v1 & 0xFFF0;
 if ( v10 != (unsigned long long *)v2 )
 {
 while ( v9 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 *(unsigned long long *)((char *)&v9[-2] + v4) = *(unsigned long long *)((char *)&v9[-2] + v4);
 v6 = 0;
 do
 {
 v9[v6] = 2 * v6;
 ++v6;
 }
 while ( v6 != a1 );
 return (unsigned int)v9[a1 >> 1];
}


/* Function: alloca_usage @ 0x1510 */
long long alloca_usage(int a1)
{
 long long v1; // rdx
 long long *v2; // rcx
 short v3; // dx
 signed long long v4; // rdx
 void *v5; // rsp
 int v6; // eax
 unsigned int *v7; // rdx
 long long v9; // [rsp+0h] [rbp-1018h]
 long long v10; // [rsp+8h] [rbp-1010h] BYREF
 unsigned char v11[7]; // [rsp+10h] [rbp-1008h] BYREF
 unsigned long long v12[2]; // [rsp+1008h] [rbp-10h] BYREF

 v12[1] = __readfsqword(0x28u);
 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 23;
 v2 = (unsigned long long *)((char *)v12 - (v1 & 0xFFFFFFFFFFFFF000LL));
 v3 = v1 & 0xFFF0;
 if ( v12 != v2 )
 {
 while ( &v10 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 *(long long *)((char *)&v9 + v4) = *(long long *)((char *)&v9 + v4);
 v6 = 0;
 v7 = v11;
 do
 {
 *v7 = v6;
 v6 += 3;
 ++v7;
 }
 while ( v6 != 3 * a1 );
 return *(unsigned int *)&v11[4 * (a1 >> 1)];
}


/* Function: stack_alias @ 0x15E0 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x15F0 */
int test_stack_memory(int argc, const char **argv, const char **envp)
{
 int v0; // eax
 int v1; // eax

 puts("Stack Memory Test");
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage(10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x16F0 */
long long heap_basic(int a1)
{
 unsigned int *v1; // rax
 long long i; // rdx
 unsigned int v3; // r12d

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


/* Function: heap_calloc @ 0x1760 */
long long heap_calloc(int a1)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rdx
 unsigned int v3; // r12d

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


/* Function: heap_realloc @ 0x17C0 */
long long heap_realloc()
{
 unsigned long long *v0; // rax
 void *v1; // rbp
 unsigned int *v2; // rax
 unsigned int v3; // r12d

 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 *v0 = 0x200000001LL;
 v0[1] = 0x400000003LL;
 *((unsigned int *)v0 + 4) = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v3 = 50;
 if ( v2[2] != 3 )
 v3 = -3;
 free(v2);
 }
 else
 {
 v3 = -2;
 free(v1);
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_array @ 0x1850 */
long long heap_array(int a1)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rcx
 int v3; // edx
 unsigned int v4; // r12d

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


/* Function: heap_struct @ 0x18C0 */
long long heap_struct(int a1)
{
 void *v1; // rax
 unsigned int v2; // r12d

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


/* Function: heap_nested @ 0x1900 */
long long heap_nested(unsigned long long *a1)
{
 unsigned int *v1; // rax
 unsigned long long *v2; // rbp
 unsigned long long *v3; // rax

 v1 = malloc(0x10u);
 *a1 = v1;
 if ( !v1 )
 return 0xFFFFFFFFLL;
 *v1 = 10;
 v2 = v1;
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


/* Function: linked_list_heap @ 0x1970 */
long long linked_list_heap()
{
 unsigned long long *v0; // rax
 int v1; // ebp
 unsigned long long *v2; // rbx
 unsigned long long *v3; // r12
 unsigned long long *v4; // rax
 unsigned int v5; // r12d
 void *v6; // rdi
 void *v8; // rdi

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
 v4 = v2;
 v5 = 0;
 do
 {
 v5 += *(unsigned int *)v4;
 v4 = (unsigned long long *)v4[1];
 }
 while ( v4 );
 do
 {
 v6 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v6);
 }
 while ( v2 );
 return v5;
 }
 }
 while ( v2 )
 {
 v8 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v8);
 }
 return (unsigned int)-1;
}


/* Function: create_tree_node @ 0x1A10 */
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


/* Function: tree_heap_traversal @ 0x1A40 */
long long tree_heap_traversal()
{
 void *v0; // rax
 void *v1; // rbp
 void *v2; // r12
 void *v3; // r13
 void *v5; // rdi

 v0 = malloc(0x18u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
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
 return 4294967294LL;
}


/* Function: memory_leak @ 0x1AE0 */
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


/* Function: dangling_pointer @ 0x1B40 */
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


/* Function: double_free @ 0x1B80 */
long long double_free(unsigned int *a1)
{
 void *v2; // rax
 void *v3; // rbp

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


/* Function: heap_overflow @ 0x1BC0 */
long long heap_overflow()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rcx
 int i; // edx
 unsigned int v3; // r12d

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


/* Function: test_heap_memory @ 0x1C10 */
void test_heap_memory()
{
 unsigned int *v0; // rax
 long long i; // rdx
 int v2; // r12d
 unsigned int *v3; // rax
 unsigned int *v4; // rdx
 int v5; // r12d
 int v6; // eax
 unsigned int *v7; // rax
 unsigned int *v8; // rcx
 int j; // edx
 int v10; // r12d
 void *v11; // rdi
 int v12; // edx
 void **v13; // r12
 unsigned int *v14; // rax
 int v15; // edx
 int v16; // eax
 int v17; // eax
 unsigned int *v18; // rax
 int v19; // edx
 int v20; // eax
 unsigned int *v21; // r12
 long long v22; // rdx
 int stat_loc; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v24; // [rsp+8h] [rbp-10h]

 v24 = __readfsqword(0x28u);
 puts(asc_30E6);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 for ( i = 0; i != 10; ++i )
 v0[i] = 2 * i;
 v2 = v0[5];
 free(v0);
 }
 else
 {
 v2 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v2);
 v3 = calloc(5u, 4u);
 if ( v3 )
 {
 v4 = v3;
 v5 = 0;
 do
 v5 += *v4++;
 while ( v3 + 5 != v4 );
 free(v3);
 }
 else
 {
 v5 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
 v6 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v6);
 v7 = malloc(0x28u);
 if ( v7 )
 {
 v8 = v7;
 for ( j = 0; j != 30; j += 3 )
 *v8++ = j;
 v10 = v7[5];
 free(v7);
 }
 else
 {
 v10 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v10);
 v11 = malloc(8u);
 if ( v11 )
 {
 free(v11);
 v12 = 15;
 }
 else
 {
 v12 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v12);
 v13 = (void **)malloc(0x10u);
 if ( v13 )
 {
 v14 = malloc(0x10u);
 v13[1] = v14;
 if ( v14 )
 {
 *v14 = 20;
 v15 = 0;
 *((unsigned long long *)v14 + 1) = 0;
 }
 else
 {
 free(v13);
 v15 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v15);
 free(v13[1]);
 free(v13);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v16 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v16);
 v17 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v17);
 v18 = malloc(0x14u);
 if ( v18 )
 {
 v18[4] = 4;
 v19 = 2;
 *(unsigned long long *)v18 = 0x100000000LL;
 *((unsigned long long *)v18 + 1) = 0x300000002LL;
 }
 else
 {
 v19 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v19);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v20 = fork();
 if ( !v20 )
 {
 v21 = (unsigned int *)malloc(4u);
 if ( v21 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v21);
 v22 = *v21;
 }
 else
 {
 v22 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aD, v22);
 exit(0);
 }
 if ( v20 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v20, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (char)((stat_loc & 0x7F) + 1) > 1 )
 __printf_chk(1, byte_33F0);
 }
 else
 {
 __printf_chk(1, byte_33C8, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1FE0 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x2000 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x2010 */
long long global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x2040 */
long long static_local(int a1)
{
 long long result; // rax

 result = 0;
 if ( !a1 )
 result = (unsigned int)(counter_1 + 1);
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x2060 */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x2070 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x2080 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2090 */
long long read_const_data()
{
 return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x20B0 */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x20C0 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x20D0 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x20E0 */
void set_file_static(int a1)
{
 file_scope_static = a1;
}


/* Function: get_file_static @ 0x20F0 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x2100 */
void set_global_callback(long long a1)
{
 global_func_ptr = a1;
}


/* Function: call_global_callback @ 0x2110 */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x2130 */
long long global_heap_store(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x2150 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2160 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x2170 */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x2180 */
long long test_static_global(int argc, const char **argv, const char **envp)
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
 global_func_ptr = (long long (*)(void))double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x2390 */
long long memop_memset(void *a1, size_t a2, int a3)
{
 if ( a1 && a2 )
 return *(unsigned char *)memset(a1, a3, a2);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memcpy @ 0x23D0 */
long long memop_memcpy(void *a1, const void *a2, size_t a3)
{
 if ( a3 == 0 || a2 == 0 || !a1 )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned int *)((char *)memcpy(a1, a2, a3) + (a3 & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x2410 */
long long memop_memmove(char *src, unsigned long long a2)
{
 if ( !src || a2 <= 1 )
 return 0xFFFFFFFFLL;
 memmove(src + 1, src, a2 - 1);
 return (unsigned int)src[1];
}


/* Function: memop_memcmp @ 0x2450 */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // r8d
 long long result; // rax

 if ( a3 == 0 || a2 == 0 || !a1 )
 return 0;
 v3 = memcmp(a1, a2, a3);
 result = (unsigned int)-(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: memop_bzero @ 0x24A0 */
long long memop_bzero(void *a1, size_t a2)
{
 if ( a1 )
 return *(unsigned char *)memset(a1, 0, a2);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_bcopy @ 0x24D0 */
long long memop_bcopy(void *src, void *dest, size_t a3)
{
 if ( a3 == 0 || dest == 0 || !src )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned char *)memmove(dest, src, a3);
}


/* Function: memop_unaligned_access @ 0x2510 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x2530 */
long long memop_memory_barrier(int *a1)
{
 int v1; // edx
 void *retaddr; // [rsp+0h] [rbp+0h] BYREF

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 _InterlockedOr64((volatile signed long long *)&retaddr, 0);
 return (unsigned int)(v1 + *a1);
}


/* Function: test_memory_op_functions @ 0x2550 */
long long test_memory_op_functions()
{
 int v0; // eax
 long long v1; // rdx
 signed long long v3; // [rsp+0h] [rbp-158h] BYREF
 int v4; // [rsp+Ch] [rbp-14Ch]
 long long s1; // [rsp+10h] [rbp-148h] BYREF
 int v6; // [rsp+18h] [rbp-140h]
 long long s2; // [rsp+1Ch] [rbp-13Ch] BYREF
 int v8; // [rsp+24h] [rbp-134h]
 long long v9; // [rsp+2Bh] [rbp-12Dh]
 short v10; // [rsp+33h] [rbp-125h]
 unsigned long long dest[36]; // [rsp+35h] [rbp-123h] BYREF

 *(unsigned long long *)((char *)&dest[34] + 3) = __readfsqword(0x28u);
 puts(asc_3688);
 memset((char *)&dest[1] + 3, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy((char *)dest, "HelloWorld");
 memmove((char *)dest + 1, dest, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 s1 = 0x200000001LL;
 v6 = 3;
 s2 = 0x200000001LL;
 v8 = 4;
 v0 = memcmp(&s1, &s2, 0xCu);
 v1 = (unsigned int)-(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 v10 = 0;
 v9 = 0;
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v4 = 5;
 _InterlockedOr64(&v3, 0);
 return __printf_chk(1, "MEMOP-L3-02: %d\n", v4 + 5);
}





/* Function: .term_proc @ 0x2718 */
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
