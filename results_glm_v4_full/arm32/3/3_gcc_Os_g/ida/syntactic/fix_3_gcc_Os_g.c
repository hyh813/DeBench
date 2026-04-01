#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdint.h>
#include <stddef.h>

/* Auto-injected type definitions by preprocessor */
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
#ifndef int64_t
typedef long long int64_t;
#endif



#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif
#ifndef bool
typedef _Bool bool;
#endif

#define NULL ((void*)0)

/* Forward declarations for structures used in the code */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variables declarations */
int global_counter = 0;
int counter_1 = 0;
int file_scope_static = 0;
int extern_global_var = 0;
int (*global_func_ptr)(int) = NULL;
const char *const_string = "Hello World";
int global_array[10] = {0};

/* Memory atomic operation helpers for ARM sync primitives */
typedef union memory_op_union {
    int (*three_arg)(int, int, void *);
    int (*no_arg)(void);
} memory_op_union;

/* Helper stub functions for memory operations */
static int memory_op_helper_no_arg(void) { return 0; }
static int memory_op_helper_three_arg(int a, int b, void *c) { return 0; }

/* Stub for JUMPOUT macro */
#define JUMPOUT(x) return

/* Stub for GCC builtin */
static inline void _sync_synchronize(void) { __asm__ __volatile__("" ::: "memory"); }

/* Stub for weak function */
int call_weak_fn(void) { return 0; }

/* Stub for glibc function */
static int _printf_chk(int flag, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int ret = vprintf(fmt, args);
    va_end(args);
    return ret;
}

/* String constants */
static const char *s = "Stack Memory Tests";
static const char *asc_128CD = "Heap Memory Tests";
static const char *asc_12AA6 = "Static and Global Memory Tests";
static const char *asc_12D08 = "Memory Operation Tests";
static const char *byte_12A35 = "exit status: %d\n";
static const char *byte_12A5A = "signal: %d\n";
static const char *aD = "%d\n";
static const char *aFork_0 = "fork";
const int unk_12E14 = 0x12345678;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_gcc_Os_g
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
 JUMPOUT(0);
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
 int v1; // r3
 int v2; // r2
 int *v3; // r1
 int arr[10]; // [sp+4h] [bp-34h] BYREF

 v1 = 0;
 v2 = 0;
 v3 = arr;
 do
 {
 ++v2;
 *v3++ = v1;
 v1 += n;
 }
 while ( v2 != 10 );
 return arr[5];
}


/* Function: local_struct @ 0x10810 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x10818 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x10828 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x10834 */
int large_stack_frame()
{
 int v0; // r3
 char *v1; // r2
 char large_buf[2048]; // [sp+4h] [bp-80Ch] BYREF

 v0 = 0;
 v1 = large_buf;
 do
 *v1++ = v0++;
 while ( v0 != 2048 );
 return (unsigned char)large_buf[1024];
}


/* Function: vla_stack @ 0x10898 */
int vla_stack(int n)
{
 int v2; // r3
 int v3; // [sp+0h] [bp-Ch]

 if ( (unsigned int)(n - 1) >= 0x3E8 )
 return -1;
 v2 = 0;
 do
 {
 *(&v3 + v2) = 2 * v2;
 ++v2;
 }
 while ( n != v2 );
 return *(&v3 + (n >> 1));
}


/* Function: alloca_usage @ 0x10920 */
int alloca_usage(int n)
{
 int i; // r3
 int v3; // [sp+0h] [bp-Ch]

 if ( n <= 0 )
 return -1;
 for ( i = 0; i != n; ++i )
 *(&v3 + i) = 3 * i;
 return *(&v3 + (n >> 1));
}


/* Function: stack_alias @ 0x109A4 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x109AC */
void test_stack_memory()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0

 puts(s);
 _printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 v0 = local_array(2);
 _printf_chk(1, "MEM-L1-02 (local_array): %d\n", v0);
 _printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 _printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 _printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v1 = large_stack_frame();
 _printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v1);
 v2 = vla_stack(10);
 _printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", v2);
 v3 = alloca_usage(10);
 _printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v3);
 _printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10A90 */
int heap_basic(int n)
{
 unsigned int *v2; // r0
 int i; // r3
 int v4; // r4

 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 for ( i = 0; i < n; ++i )
 v2[i] = 2 * i;
 v4 = v2[n / 2];
 free(v2);
 return v4;
}


/* Function: heap_calloc @ 0x10AE0 */
int heap_calloc(int n)
{
 unsigned int *v2; // r0
 int v3; // r3
 int v4; // r4
 int v5; // r2

 v2 = calloc(n, 4u);
 if ( !v2 )
 return -1;
 v3 = 0;
 v4 = 0;
 while ( v3 < n )
 {
 v5 = v2[v3++];
 v4 += v5;
 }
 free(v2);
 return v4;
}


/* Function: heap_realloc @ 0x10B28 */
int heap_realloc()
{
 unsigned int *v0; // r0
 void *v1; // r4
 int v2; // r4
 unsigned int *v3; // r0

 v0 = malloc(0x14u);
 v1 = v0;
 if ( !v0 )
 return -1;
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v3 = realloc(v0, 0x28u);
 if ( v3 )
 {
 if ( v3[2] == 3 )
 v2 = 50;
 else
 v2 = -3;
 free(v3);
 }
 else
 {
 free(v1);
 return -2;
 }
 return v2;
}


/* Function: heap_array @ 0x10B98 */
int heap_array(int n)
{
 unsigned int *v2; // r0
 int i; // r3
 int v4; // r4

 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 for ( i = 0; i < n; ++i )
 v2[i] = 3 * i;
 v4 = v2[n / 2];
 free(v2);
 return v4;
}


/* Function: heap_struct @ 0x10BE8 */
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


/* Function: heap_nested @ 0x10C14 */
int heap_nested(Node **head)
{
 Node *v2; // r0
 Node *v3; // r4
 Node *v4; // r0
 Node *v5; // r3
 int result; // r0

 v2 = (Node *)malloc(8u);
 *head = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 v2->data = 10;
 v4 = (Node *)malloc(8u);
 v5 = v4;
 v3->next = v4;
 if ( v4 )
 {
 v4->data = 20;
 result = 0;
 v5->next = 0;
 }
 else
 {
 free(v3);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0x10C80 */
int linked_list_heap()
{
 int v0; // r5
 unsigned int *v1; // r0
 int *v2; // r4
 unsigned int *v3; // r7
 int v4; // r5
 int *v6; // r5
 int *v7; // r3
 int v8; // r2
 int *v9; // r0

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = v1;
 v1 = malloc(8u);
 if ( !v1 )
 break;
 *v1 = v0;
 v1[1] = 0;
 v0 += 10;
 if ( v2 )
 v3[1] = v1;
 else
 v2 = v1;
 if ( v0 == 50 )
 {
 v7 = v2;
 v4 = 0;
 do
 {
 v8 = *v7;
 v7 = (int *)v7[1];
 v4 += v8;
 }
 while ( v7 );
 do
 {
 v9 = v2;
 v2 = (int *)v2[1];
 free(v9);
 }
 while ( v2 );
 return v4;
 }
 }
 while ( v2 )
 {
 v6 = (int *)v2[1];
 free(v2);
 v2 = v6;
 }
 return -1;
}


/* Function: create_tree_node @ 0x10D20 */
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


/* Function: tree_heap_traversal @ 0x10D48 */
int tree_heap_traversal()
{
 TreeNode *tree_node; // r4
 int v1; // r5
 TreeNode *v2; // r3
 TreeNode *left; // r0
 TreeNode *right; // r0

 tree_node = create_tree_node(10);
 if ( !tree_node )
 return -1;
 tree_node->left = create_tree_node(20);
 v2 = create_tree_node(30);
 tree_node->right = v2;
 left = tree_node->left;
 if ( left )
 {
 if ( v2 )
 {
 v1 = tree_node->data + left->data + v2->data;
 free(left);
 free(tree_node->right);
 free(tree_node);
 return v1;
 }
 free(left);
 }
 right = tree_node->right;
 if ( right )
 free(right);
 free(tree_node);
 return -2;
}


/* Function: memory_leak @ 0x10DE4 */
int memory_leak(int n)
{
 unsigned int *v2; // r0
 int i; // r3

 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 for ( i = 0; i < n; ++i )
 v2[i] = i;
 return v2[n / 2];
}


/* Function: dangling_pointer @ 0x10E28 */
int dangling_pointer()
{
 void *v0; // r4

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 _printf_chk(1, "value before free: %d\n", 42);
 free(v0);
 return *(unsigned int *)v0;
}


/* Function: double_free @ 0x10E68 */
int double_free(int *p)
{
 void *v1; // r0
 void *v2; // r4

 if ( p )
 return *p;
 v1 = malloc(4u);
 v2 = v1;
 if ( !v1 )
 return -1;
 free(v1);
 free(v2);
 return -2;
}


/* Function: heap_overflow @ 0x10EA8 */
int heap_overflow()
{
 int *v0; // r0
 int v1; // r4
 int v2; // r3
 int *v3; // r2

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v2 = 0;
 v3 = v0 - 1;
 do
 {
 v3[1] = v2;
 ++v3;
 v2 += 100;
 }
 while ( v2 != 1100 );
 v1 = *v0;
 free(v0);
 return v1;
}


/* Function: test_heap_memory @ 0x10EF0 */
void test_heap_memory()
{
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0
 int v12; // r0
 int v13; // r0
 int v14; // r0
 int v15; // r2
 Node *head; // [sp+4h] [bp-14h] BYREF
 int status[4]; // [sp+8h] [bp-10h] BYREF

 status[0] = 0;
 status[1] = 0;
 puts(asc_128CD);
 v4 = heap_basic(10);
 _printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v4);
 v5 = heap_calloc(5);
 _printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
 v6 = heap_realloc();
 _printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v6);
 v7 = heap_array(10);
 _printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v7);
 v8 = heap_struct(5);
 _printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
 head = 0;
 v9 = heap_nested(&head);
 _printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v9);
 if ( head )
 {
 free(head->next);
 free(head);
 }
 v10 = linked_list_heap();
 _printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v10);
 v11 = tree_heap_traversal();
 _printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v11);
 v12 = memory_leak(5);
 _printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v12);
 _printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v13 = fork();
 if ( !v13 )
 {
 v14 = dangling_pointer();
 _printf_chk(1, aD, v14);
 exit(0);
 }
 if ( v13 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v13, status, 0);
 v15 = status[0] & 0x7F;
 if ( (status[0] & 0x7F) != 0 )
 {
 if ( (v15 + 1) << 24 >= 0x2000000 )
 _printf_chk(1, byte_12A5A, v15);
 }
 else
 {
 _printf_chk(1, byte_12A35, (status[0] >> 8) & 0xFF);
 }
 }
}


/* Function: global_var_access @ 0x110E8 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x11100 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x11114 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x1112C */
int static_local(int reset)
{
 int result; // r0

 if ( reset )
 result = 0;
 else
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x1114C */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x11158 */
int access_extern_global()
{
 return extern_global_var + 100;
}

/* Function: call_extern_func @ 0x1116C */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x11174 */
int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x1118C */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x11194 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1119C */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x111A4 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x111B4 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x111C4 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x111D4 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x111F4 */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x11204 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1120C */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x11214 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1121C */
void test_static_global()
{
 int v0; // r0
 int v1; // r0
 int const_data; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0

 puts(asc_12AA6);
 v0 = global_var_access();
 _printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v0);
 _printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 _printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 _printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 _printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 _printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 _printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v1 = call_extern_func();
 _printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v1);
 const_data = read_const_data();
 _printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_data);
 _printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 _printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 v3 = global_struct_access();
 _printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", v3);
 file_scope_static = 50;
 _printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 v4 = call_global_callback(5);
 _printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
 _printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 v5 = static_complex_init();
 _printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
 _printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 _printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x113F4 */
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


/* Function: memop_memcpy @ 0x11428 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 bool v3; // zf
 int v4; // r3
 char *v5; // r4

 v3 = n == 0;
 if ( n )
 v3 = src == 0;
 v4 = v3;
 if ( !dst )
 v4 |= 1u;
 if ( v4 )
 return -1;
 v5 = (char *)dst + (n & 0xFFFFFFFC);
 memcpy(dst, src, n);
 return *((unsigned int *)v5 - 1);
}


/* Function: memop_memmove @ 0x11470 */
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


/* Function: memop_memcmp @ 0x114A4 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 bool v3; // zf
 int v4; // r3
 int v5; // r0

 v3 = n == 0;
 if ( n )
 v3 = p2 == 0;
 v4 = v3;
 if ( !p1 )
 v4 |= 1u;
 if ( v4 )
 return 0;
 v5 = memcmp(p1, p2, n);
 if ( v5 > 0 )
 return 1;
 if ( v5 )
 return -1;
 return 0;
}


/* Function: memop_bzero @ 0x114F0 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x11518 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 bool v3; // zf
 int v4; // r12

 v3 = n == 0;
 if ( n )
 v3 = dst == 0;
 v4 = v3;
 if ( !src )
 v4 |= 1u;
 if ( v4 )
 return -1;
 else
 return *(unsigned char *)memmove(dst, src, n);
}


/* Function: memop_unaligned_access @ 0x1155C */
int memop_unaligned_access(const char *buf)
{
 int value; // [sp+0h] [bp-10h] BYREF

 value = (int)buf;
 if ( !buf )
 return -1;
 memcpy(&value, buf + 1, sizeof(value));
 return value;
}


/* Function: memop_memory_barrier @ 0x115B8 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v2; // r5

 if ( !flag )
 return -1;
 v2 = *flag;
 _sync_synchronize();
 return *flag + v2;
}


/* Function: test_memory_op_functions @ 0x115E0 */
void test_memory_op_functions()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r2
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int flag; // [sp+0h] [bp-180h] BYREF
 int cmp_a[3]; // [sp+4h] [bp-17Ch] BYREF
 int cmp_b[3]; // [sp+10h] [bp-170h] BYREF
 int int_src[5]; // [sp+1Ch] [bp-164h] BYREF
 int int_dst[5]; // [sp+30h] [bp-150h] BYREF
 char bcopy_src[4]; // [sp+44h] [bp-13Ch] BYREF
 char bcopy_dst[4]; // [sp+48h] [bp-138h] BYREF
 char unalign_buf[8]; // [sp+4Ch] [bp-134h] BYREF
 char zero_buf[10]; // [sp+54h] [bp-12Ch] BYREF
 char move_buf[12]; // [sp+60h] [bp-120h] BYREF
 char buffer[256]; // [sp+6Ch] [bp-114h] BYREF

 puts(asc_12D08);
 int_src[0] = 10;
 int_src[1] = 20;
 int_src[2] = 30;
 int_src[3] = 40;
 int_src[4] = 50;
 memset(int_dst, 0, sizeof(int_dst));
 v0 = memop_memset(buffer, 0xAu, 65);
 _printf_chk(1, "MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(int_dst, int_src, 0x14u);
 _printf_chk(1, "MEMOP-L2-02: %d\n", v1);
 strcpy(move_buf, "HelloWorld");
 v2 = memop_memmove(move_buf, 0xAu);
 _printf_chk(1, "MEMOP-L2-03: %c\n", v2);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 v3 = memcmp(cmp_a, cmp_b, 0xCu);
 if ( v3 <= 0 )
 {
 if ( v3 )
 v4 = -1;
 else
 v4 = 0;
 }
 else
 {
 v4 = 1;
 }
 _printf_chk(1, "MEMOP-L2-04: %d\n", v4);
 v5 = memop_bzero(zero_buf, 0xAu);
 _printf_chk(1, "MEMOP-L2-05: %d\n", v5);
 *(unsigned int *)bcopy_src = 67305985;
 *(unsigned int *)bcopy_dst = 0;
 v6 = memop_bcopy(bcopy_src, bcopy_dst, 4u);
 _printf_chk(1, "MEMOP-L2-06: %d\n", v6);
 memcpy(unalign_buf, &unk_12E14, sizeof(unalign_buf));
 v7 = memop_unaligned_access(unalign_buf);
 _printf_chk(1, "MEMOP-L3-01: 0x%x\n", v7);
 flag = 5;
 v8 = memop_memory_barrier(&flag);
 _printf_chk(1, "MEMOP-L3-02: %d\n", v8);
}


/* Implementation for external function */
int extern_function(int x)
{
    return x * 10;  /* Simple implementation */
}




/* Function: __sync_fetch_and_add_4 @ 0x117DC */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_op_helper_three_arg(*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x11814 */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_op_helper_three_arg(*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x1184C */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_op_helper_three_arg(*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x11884 */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_op_helper_three_arg(*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x118BC */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_op_helper_three_arg(*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x118F4 */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_op_helper_three_arg(*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x11930 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x11990 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x119F0 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x11A50 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x11AB0 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11B10 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11B74 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11BD0 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x11C2C */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11C88 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x11CE4 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x11D40 */
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
 while ( memory_op_helper_three_arg(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11DA0 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( memory_op_helper_no_arg() );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11DD8 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( memory_op_helper_no_arg() );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x11E10 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( memory_op_helper_no_arg() );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11E48 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( memory_op_helper_no_arg() );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x11E80 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( memory_op_helper_no_arg() );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x11EB8 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( memory_op_helper_no_arg() );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x11EF4 */
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
 while ( memory_op_helper_no_arg() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x11F5C */
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
 while ( memory_op_helper_no_arg() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x11FC4 */
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
 while ( memory_op_helper_no_arg() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x1202C */
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
 while ( memory_op_helper_no_arg() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x12094 */
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
 while ( memory_op_helper_no_arg() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x120FC */
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
 while ( memory_op_helper_no_arg() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x12168 */
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
 while ( memory_op_helper_no_arg() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x121CC */
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
 while ( memory_op_helper_no_arg() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x12230 */
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
 while ( memory_op_helper_no_arg() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x12294 */
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
 while ( memory_op_helper_no_arg() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x122F8 */
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
 while ( memory_op_helper_no_arg() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x1235C */
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
 while ( memory_op_helper_no_arg() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x123C4 */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !memory_op_helper_three_arg(a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x12414 */
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
 if ( !memory_op_helper_three_arg(*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x1248C */
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
 if ( !memory_op_helper_three_arg(*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x12500 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return memory_op_helper_three_arg(a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x1252C */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x12548 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x12570 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( memory_op_helper_three_arg(*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x125A8 */
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
 while ( memory_op_helper_three_arg(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x12608 */
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
 while ( memory_op_helper_three_arg(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x12664 */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = memory_op_helper_no_arg();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x12688 */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = memory_op_helper_no_arg();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x126A8 */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = memory_op_helper_no_arg();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x126C8 */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = memory_op_helper_no_arg();
 *a1 = 0;
 return result;
}


/* Function: .term_proc @ 0x126E8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_memset @ 0x23084 */

/* FAILED to decompile: __imp_free @ 0x23088 */

/* FAILED to decompile: __imp_abort @ 0x2308C */

/* FAILED to decompile: __imp_exit @ 0x23090 */

/* FAILED to decompile: __imp_realloc @ 0x23094 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23098 */

/* FAILED to decompile: __imp___printf_chk @ 0x2309C */

/* FAILED to decompile: __imp_memcmp @ 0x230A0 */

/* FAILED to decompile: __imp_waitpid @ 0x230A4 */

/* FAILED to decompile: __imp_calloc @ 0x230A8 */

/* FAILED to decompile: __imp_fork @ 0x230AC */

/* FAILED to decompile: __imp_memmove @ 0x230B0 */

/* FAILED to decompile: __imp_puts @ 0x230B4 */

/* FAILED to decompile: __imp_memcpy @ 0x230B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x230BC */

/* FAILED to decompile: __imp_perror @ 0x230C0 */

/* FAILED to decompile: __imp_malloc @ 0x230C4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x230C8 */

/* Total functions decompiled: 114, failed: 18 */
