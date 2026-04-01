/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef _Bool bool;

/* Forward declaration for va_list */
typedef __builtin_va_list va_list;

/* Variadic argument macros */
#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_end(ap) __builtin_va_end(ap)
#define va_arg(ap, type) __builtin_va_arg(ap, type)
#define va_copy(dest, src) __builtin_va_copy(dest, src)

/* NULL pointer definition */
#ifndef NULL
#define NULL ((void *)0)
#endif

/* Helper macros */
#define JUMPOUT(x) do {} while(0)
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* String constants */
static const char *s = "Testing Stack Memory";
static const char *asc_12A44 = "Testing Heap Memory";
static const char *aD = "value after free: %d\n";
static const char *aFork_0 = "fork";
static const char *asc_12C38 = "Testing Static Global";
static const char *asc_12EBC = "Testing Memory Operations";
static const char *byte_12BA0 = "Child exited with status: %d\n";
static const char *byte_12BC8 = "Child terminated by signal\n";



/* Node structure for linked list */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* TreeNode structure for binary tree */
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Memory barrier and atomic operations placeholder */
/* These are external declarations - the actual arrays are defined elsewhere */
extern int (*MEMORY[65536])(int, int, int);
/* Zero-argument function pointer for memory barriers */
extern int (*MEMORY_BARRIER[65536])(void);

/* Implementation of extern_function */
static int extern_function(int x)
{
 return 2 * x;
}

/* Global variables */
int global_counter = 0;
int extern_global_var = 0;
int (*global_func_ptr)(int) = NULL;
static int file_scope_static = 0;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const char *const_string = "Hello";
int counter_1 = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_gcc_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x1058C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10598 @ 0x10598 */
void sub_10598()
{
 /* JUMPOUT(0) - decompiler artifact removed */
}


/* Function: main @ 0x10684 */
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
int call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x10798 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: local_vars @ 0x107A0 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x107AC */
int local_array(int n)
{
 int v1; // r2
 int *v2; // r3
 int v4; // [sp+0h] [bp-38h] BYREF
 int arr[10]; // [sp+4h] [bp-34h] BYREF

 v1 = 0;
 v2 = &v4;
 do
 {
 v2[1] = v1;
 ++v2;
 v1 += n;
 }
 while ( v2 != &arr[9] );
 return arr[5];
}


/* Function: local_struct @ 0x1080C */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x10814 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x10824 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x10830 */
int large_stack_frame()
{
 int v0; // r2
 char *v1; // r3
 char v3; // [sp+3h] [bp-80Dh] BYREF
 char large_buf[2048]; // [sp+4h] [bp-80Ch] BYREF

 v0 = 0;
 v1 = &v3;
 do
 *++v1 = v0++;
 while ( v1 != &large_buf[2047] );
 return (unsigned char)large_buf[1024];
}


/* Function: vla_stack @ 0x108A0 */
int vla_stack(int n)
{
 int v1; // r3
 int *v2; // r2
 int v4; // [sp+0h] [bp-Ch] BYREF

 if ( (unsigned int)(n - 1) >= 0x3E8 )
 return -1;
 v1 = 0;
 v2 = &v4 - 1;
 do
 {
 v2[1] = v1;
 ++v2;
 v1 += 2;
 }
 while ( v1 != 2 * n );
 return *(&v4 + (n >> 1));
}


/* Function: alloca_usage @ 0x10930 */
int alloca_usage(int n)
{
 int v1; // r2
 unsigned char *v2; // r3
 unsigned char v4[4]; // [sp+0h] [bp-Ch] BYREF

 if ( n <= 0 )
 return -1;
 v1 = 0;
 v2 = &v4[-4];
 do
 {
 *((unsigned int *)v2 + 1) = v1;
 v2 += 4;
 v1 += 3;
 }
 while ( v2 != &v4[4 * n - 4] );
 return *(unsigned int *)&v4[4 * (n >> 1)];
}


/* Function: stack_alias @ 0x109C0 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x109C8 */
void test_stack_memory()
{
 int v0; // r0
 int v1; // r0

 puts(s);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n", v0);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n", v1);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10A9C */
int heap_basic(int n)
{
 unsigned int *v2; // r0
 int v3; // r3
 char *v4; // r2
 int v5; // r4

 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 v3 = 0;
 v4 = (char *)(v2 - 1);
 do
 {
 *((unsigned int *)v4 + 1) = v3;
 v4 += 4;
 v3 += 2;
 }
 while ( v3 != 2 * n );
 }
 v5 = v2[n / 2];
 free(v2);
 return v5;
}


/* Function: heap_calloc @ 0x10AF8 */
int heap_calloc(int n)
{
 char *v2; // r0
 int v3; // r4
 char *v4; // r3
 int v5; // t1

 v2 = (char *)calloc(n, 4u);
 if ( !v2 )
 return -1;
 v3 = 0;
 if ( n > 0 )
 {
 v4 = v2 - 4;
 do
 {
 v5 = *((unsigned int *)v4 + 1);
 v4 += 4;
 v3 += v5;
 }
 while ( v4 != &v2[4 * n - 4] );
 }
 free(v2);
 return v3;
}


/* Function: heap_realloc @ 0x10B4C */
int heap_realloc()
{
 unsigned int *v0; // r0
 void *v1; // r4
 unsigned int *v2; // r0
 int v3; // r4

 v0 = malloc(0x14u);
 v1 = v0;
 if ( !v0 )
 return -1;
 *v0 = 1;
 v0[1] = 2;
 v0[4] = 5;
 v0[3] = 4;
 v0[2] = 3;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 if ( v2[2] == 3 )
 v3 = 50;
 else
 v3 = -3;
 free(v2);
 }
 else
 {
 free(v1);
 return -2;
 }
 return v3;
}


/* Function: heap_array @ 0x10BC8 */
int heap_array(int n)
{
 int v1; // r4
 unsigned int *v3; // r0
 int v4; // r2
 unsigned int *v5; // r3
 int v6; // r4

 v1 = n;
 v3 = malloc(4 * n);
 if ( !v3 )
 return -1;
 if ( n > 0 )
 {
 v4 = 0;
 v5 = v3 - 1;
 do
 {
 v5[1] = v4;
 ++v5;
 v4 += 3;
 }
 while ( v5 != &v3[v1 - 1] );
 }
 v6 = v3[n / 2];
 free(v3);
 return v6;
}


/* Function: heap_struct @ 0x10C2C */
int heap_struct(int x)
{
 void *v2; // r0
 int v3; // r4

 v2 = malloc(8u);
 if ( !v2 )
 return -1;
 v3 = 3 * x;
 free(v2);
 return v3;
}


/* Function: heap_nested @ 0x10C5C */
int heap_nested(Node **head)
{
 Node *v2; // r0
 Node *v3; // r4
 Node *v4; // r3
 int result; // r0

 v2 = (Node *)malloc(8u);
 *head = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 v2->data = 10;
 v4 = (Node *)malloc(8u);
 v3->next = v4;
 if ( v4 )
 {
 result = 0;
 v4->data = 20;
 v4->next = 0;
 }
 else
 {
 free(v3);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0x10CC8 */
int linked_list_heap()
{
 int v0; // r5
 unsigned int *v1; // r3
 int *v2; // r4
 unsigned int *v3; // r6
 unsigned int *v4; // r0
 int *v5; // r3
 int v6; // r5
 int v7; // r2
 int *v8; // r0
 int *v10; // r0

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = v1;
 v4 = malloc(8u);
 v1 = v4;
 if ( !v4 )
 break;
 *v4 = v0;
 v4[1] = 0;
 v0 += 10;
 if ( v2 )
 v3[1] = v4;
 else
 v2 = v4;
 if ( v0 == 50 )
 {
 v5 = v2;
 v6 = 0;
 do
 {
 v7 = *v5;
 v5 = (int *)v5[1];
 v6 += v7;
 }
 while ( v5 );
 do
 {
 v8 = v2;
 v2 = (int *)v2[1];
 free(v8);
 }
 while ( v2 );
 return v6;
 }
 }
 while ( v2 )
 {
 v10 = v2;
 v2 = (int *)v2[1];
 free(v10);
 }
 return -1;
}


/* Function: create_tree_node @ 0x10D64 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // r0

 result = (TreeNode *)malloc(0xCu);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x10D8C */
int tree_heap_traversal()
{
 void *v0; // r4
 void *v1; // r5
 void *v2; // r6
 void *v4; // r0

 v0 = malloc(0xCu);
 if ( !v0 )
 return -1;
 v1 = malloc(0xCu);
 if ( v1 )
 {
 v2 = malloc(0xCu);
 if ( v2 )
 {
 free(v1);
 free(v2);
 free(v0);
 return 60;
 }
 free(v1);
 }
 else
 {
 v4 = malloc(0xCu);
 if ( v4 )
 free(v4);
 }
 free(v0);
 return -2;
}


/* Function: memory_leak @ 0x10E14 */
int memory_leak(int n)
{
 unsigned int *v2; // r0
 int v3; // r3
 char *v4; // r2

 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 v3 = 0;
 v4 = (char *)(v2 - 1);
 do
 {
 *((unsigned int *)v4 + 1) = v3;
 v4 += 4;
 ++v3;
 }
 while ( n != v3 );
 }
 return v2[n / 2];
}


/* Function: dangling_pointer @ 0x10E64 */
int dangling_pointer()
{
 void *v0; // r4

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 printf("value before free: %d\n", 42);
 free(v0);
 return *(unsigned int *)v0;
}


/* Function: double_free @ 0x10EA4 */
int double_free(int *p)
{
 void *v2; // r0
 void *v3; // r4

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


/* Function: heap_overflow @ 0x10EE4 */
int heap_overflow()
{
 int *v0; // r0
 int v1; // r3
 int *v2; // r2
 int v3; // r4

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0 - 1;
 do
 {
 v2[1] = v1;
 ++v2;
 v1 += 100;
 }
 while ( v1 != 1100 );
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x10F30 */
void test_heap_memory()
{
 unsigned int *v0; // r0
 int v1; // r3
 unsigned int *v2; // r2
 int v3; // r4
 char *v4; // r0
 int v5; // r4
 char *v6; // r3
 int v7; // t1
 int v8; // r0
 unsigned int *v9; // r0
 int v10; // r3
 unsigned int *v11; // r2
 int v12; // r4
 void *v13; // r0
 int v14; // r2
 void **v15; // r4
 unsigned int *v16; // r0
 int v17; // r2
 int v18; // r0
 int v19; // r0
 unsigned int *v20; // r0
 int v21; // r2
 int v22; // r0
 unsigned int *v23; // r4
 int v24; // r2
 int status; // [sp+0h] [bp-10h] BYREF

 puts(asc_12A44);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 v1 = 0;
 v2 = v0 - 1;
 do
 {
 v2[1] = v1;
 ++v2;
 v1 += 2;
 }
 while ( v1 != 20 );
 v3 = v0[5];
 free(v0);
 }
 else
 {
 v3 = -1;
 }
 printf("HEAP-L2-01 (heap_basic): %d\n", v3);
 v4 = (char *)calloc(5u, 4u);
 if ( v4 )
 {
 v5 = 0;
 v6 = v4 - 4;
 do
 {
 v7 = *((unsigned int *)v6 + 1);
 v6 += 4;
 v5 += v7;
 }
 while ( v4 + 16 != v6 );
 free(v4);
 }
 else
 {
 v5 = -1;
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v5);
 v8 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v8);
 v9 = malloc(0x28u);
 if ( v9 )
 {
 v10 = 0;
 v11 = v9 - 1;
 do
 {
 v11[1] = v10;
 ++v11;
 v10 += 3;
 }
 while ( v10 != 30 );
 v12 = v9[5];
 free(v9);
 }
 else
 {
 v12 = -1;
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v12);
 v13 = malloc(8u);
 if ( v13 )
 {
 free(v13);
 v14 = 15;
 }
 else
 {
 v14 = -1;
 }
 printf("HEAP-L2-05 (heap_struct): %d\n", v14);
 v15 = (void **)malloc(8u);
 if ( v15 )
 {
 v16 = malloc(8u);
 v15[1] = v16;
 if ( v16 )
 {
 v17 = 0;
 *v16 = 20;
 v16[1] = 0;
 }
 else
 {
 free(v15);
 v17 = -2;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v17);
 free(v15[1]);
 free(v15);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v18 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v18);
 v19 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v19);
 v20 = malloc(0x14u);
 if ( v20 )
 {
 v20[1] = 1;
 v21 = 2;
 v20[4] = 4;
 *v20 = 0;
 v20[2] = 2;
 v20[3] = 3;
 }
 else
 {
 v21 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v21);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v22 = fork();
 if ( !v22 )
 {
 v23 = malloc(4u);
 if ( v23 )
 {
 printf("value before free: %d\n", 42);
 free(v23);
 v24 = *v23;
 }
 else
 {
 v24 = -1;
 }
 printf(aD, v24);
 exit(0);
 }
 if ( v22 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v22, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( ((status & 0x7F) + 1) << 24 >= 0x2000000 )
 printf(byte_12BC8);
 }
 else
 {
 printf(byte_12BA0, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x1129C */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x112B4 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x112C8 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x112E0 */
int static_local(int reset)
{
 int *v1; // r3
 bool v2; // zf

 v2 = reset == 0;
 if ( reset )
 reset = 0;
 else
 v1 = &global_counter;
 if ( v2 )
 reset = v1[1] + 1;
 else
 v1 = &global_counter;
 v1[1] = reset;
 return reset;
}


/* Function: call_static_func @ 0x11304 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x11310 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x11324 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1132C */
int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x11344 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1134C */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x11354 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1135C */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x1136C */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1137C */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1138C */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x113AC */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x113BC */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x113C4 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x113CC */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x113D4 */
void test_static_global()
{
 int v0; // r0

 puts(asc_12C38);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++counter_1);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 printf("STM-L2-03 (read_const_data): %d\n", *((unsigned char *)const_string + 4) + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Memory barrier intrinsic - static inline to avoid multiple definition */
static inline void _sync_synchronize(void)
{
 __asm__ __volatile__("" ::: "memory");
}

/* Function: memop_memset @ 0x115A8 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 bool v3; // zf

 v3 = size == 0;
 if ( size )
 v3 = buf == 0;
 if ( v3 )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x115DC */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 bool v3; // zf
 int v4; // r3

 v3 = n == 0;
 if ( n )
 v3 = src == 0;
 v4 = v3;
 if ( !dst )
 v4 |= 1u;
 if ( v4 )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFC) - 4);
}


/* Function: memop_memmove @ 0x11624 */
int memop_memmove(void *buf, size_t n)
{
 bool v2; // cc

 v2 = buf != 0;
 if ( buf )
 v2 = n > 1;
 if ( !v2 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((unsigned char *)buf + 1);
}


/* Function: memop_memcmp @ 0x1165C */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 bool v3; // zf
 int v4; // r3
 int v6; // r0

 v3 = n == 0;
 if ( n )
 v3 = p2 == 0;
 v4 = v3;
 if ( !p1 )
 v4 |= 1u;
 if ( v4 )
 return 0;
 v6 = memcmp(p1, p2, n);
 if ( v6 > 0 )
 return 1;
 if ( v6 )
 return -1;
 return 0;
}


/* Function: memop_bzero @ 0x116A8 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x116D0 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 bool v3; // zf
 int v4; // r3

 v3 = n == 0;
 if ( n )
 v3 = dst == 0;
 v4 = v3;
 if ( !src )
 v4 |= 1u;
 if ( v4 )
 return -1;
 memmove(dst, src, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x11714 */
int memop_unaligned_access(const char *buf)
{
 int value; // [sp+0h] [bp-10h] BYREF

 if ( !buf )
 return -1;
 memcpy(&value, buf + 1, sizeof(value));
 return value;
}


/* Function: memop_memory_barrier @ 0x11778 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v2; // r5

 if ( !flag )
 return -1;
 v2 = *flag;
 _sync_synchronize();
 return *flag + v2;
}


/* Function: test_memory_op_functions @ 0x117A0 */
void test_memory_op_functions()
{
 int v0; // r0
 int v1; // r2
 int v2; // r0
 int cmp_a[3]; // [sp+4h] [bp-13Ch] BYREF
 int cmp_b[3]; // [sp+10h] [bp-130h] BYREF
 char zero_buf[10]; // [sp+1Ch] [bp-124h] BYREF
 char move_buf[12]; // [sp+28h] [bp-118h] BYREF
 char buffer[256]; // [sp+34h] [bp-10Ch] BYREF

 puts(asc_12EBC);
 memset(buffer, 65, 10);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 strcpy(move_buf, "HelloWorld");
 memmove(&move_buf[1], move_buf, 9u);
 printf("MEMOP-L2-03: %c\n", 72);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 v0 = memcmp(cmp_a, cmp_b, 0xCu);
 if ( v0 <= 0 )
 {
 if ( v0 )
 v1 = -1;
 else
 v1 = 0;
 }
 else
 {
 v1 = 1;
 }
 printf("MEMOP-L2-04: %d\n", v1);
 memset(zero_buf, 0, sizeof(zero_buf));
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 v2 = printf("MEMOP-L3-01: 0x%x\n", 67305985);
 _sync_synchronize();
 printf("MEMOP-L3-02: %d\n", 10);
}


/* External declaration for vprintf */
extern int vprintf(const char *format, va_list ap);



/* Function: __sync_fetch_and_add_4 @ 0x11940 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x11978 */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x119B0 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x119E8 */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x11A20 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x11A58 */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x11A94 */
int _sync_fetch_and_add_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x11AF4 */
int _sync_fetch_and_sub_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x11B54 */
int _sync_fetch_and_or_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x11BB4 */
int _sync_fetch_and_and_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x11C14 */
int _sync_fetch_and_xor_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11C74 */
int _sync_fetch_and_nand_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11CD8 */
int _sync_fetch_and_add_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11D34 */
int _sync_fetch_and_sub_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x11D90 */
int _sync_fetch_and_or_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11DEC */
int _sync_fetch_and_and_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x11E48 */
int _sync_fetch_and_xor_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x11EA4 */
int _sync_fetch_and_nand_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11F04 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11F3C */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x11F74 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11FAC */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x11FE4 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x1201C */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x12058 */
int _sync_add_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x120C0 */
int _sync_sub_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x12128 */
int _sync_or_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x12190 */
int _sync_and_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x121F8 */
int _sync_xor_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x12260 */
int _sync_nand_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x122CC */
int _sync_add_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x12330 */
int _sync_sub_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x12394 */
int _sync_or_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x123F8 */
int _sync_and_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x1245C */
int _sync_xor_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x124C0 */
int _sync_nand_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY[0xFFFF0FC0](0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x12528 */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x12578 */
int _sync_val_compare_and_swap_2(int a1, int a2, int a3)
{
 char v4; // r5
 int v5; // r10
 unsigned int *v6; // r4
 int v7; // r9
 int v8; // r7
 unsigned int v9; // r3

 v4 = (8 * a1) & 0x18;
 v5 = 0xFFFF << v4;
 v6 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v7 = a3 << v4;
 v8 = (unsigned short)a2;
 while ( 1 )
 {
 v9 = ((unsigned int)v5 & *v6) >> v4;
 if ( v9 != v8 )
 break;
 if ( !MEMORY[0xFFFF0FC0](*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x125F0 */
int _sync_val_compare_and_swap_1(int a1, int a2, int a3)
{
 char v4; // r5
 unsigned int *v5; // r4
 int v6; // r7
 int v7; // r9
 int v8; // r10
 unsigned int v9; // r3

 v4 = (8 * a1) & 0x18;
 v5 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v6 = 255 << v4;
 v7 = a3 << v4;
 v8 = (unsigned char)a2;
 while ( 1 )
 {
 v9 = ((unsigned int)v6 & *v5) >> v4;
 if ( v9 != v8 )
 break;
 if ( !MEMORY[0xFFFF0FC0](*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x12664 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x12690 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x126AC */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x126D4 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x1270C */
int _sync_lock_test_and_set_2(int a1, int a2)
{
 char v2; // r9
 unsigned int *v3; // r5
 int v4; // r6
 int v5; // r7
 unsigned int v6; // r4

 v2 = (8 * a1) & 0x18;
 v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v4 = 0xFFFF << v2;
 v5 = a2 << v2;
 do
 v6 = *v3;
 while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x1276C */
int _sync_lock_test_and_set_1(int a1, int a2)
{
 char v2; // r9
 unsigned int *v3; // r5
 int v4; // r6
 int v5; // r7
 unsigned int v6; // r4

 v2 = (8 * a1) & 0x18;
 v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v4 = 255 << v2;
 v5 = a2 << v2;
 do
 v6 = *v3;
 while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x127C8 */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_BARRIER[0xFFFF0FA0]();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x127EC */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_BARRIER[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x1280C */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY_BARRIER[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x1282C */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY_BARRIER[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: .term_proc @ 0x1284C */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_memset @ 0x24084 */

/* FAILED to decompile: __imp_free @ 0x24088 */

/* FAILED to decompile: __imp_abort @ 0x2408C */

/* FAILED to decompile: __imp_exit @ 0x24090 */

/* FAILED to decompile: __imp_realloc @ 0x24094 */

/* FAILED to decompile: __imp___libc_start_main @ 0x24098 */

/* FAILED to decompile: __imp___printf_chk @ 0x2409C */

/* FAILED to decompile: __imp_memcmp @ 0x240A0 */

/* FAILED to decompile: __imp_waitpid @ 0x240A4 */

/* FAILED to decompile: __imp_calloc @ 0x240A8 */

/* FAILED to decompile: __imp_fork @ 0x240AC */

/* FAILED to decompile: __imp_memmove @ 0x240B0 */

/* FAILED to decompile: __imp_puts @ 0x240B4 */

/* FAILED to decompile: __imp_memcpy @ 0x240B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x240BC */

/* FAILED to decompile: __imp_perror @ 0x240C0 */

/* FAILED to decompile: __imp_malloc @ 0x240C4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x240C8 */

/* Total functions decompiled: 114, failed: 18 */
