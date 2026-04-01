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

/* Standard library headers */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/* Forward declarations */
static int static_helper(int x);
static int call_extern_func(void);
int init_depends_on(int *p);
int init_order_test(void);
int extern_function(int x);

/* ARM memory barrier / atomic operation stub - defined as weak to avoid conflicts */
typedef int (*memory_func_t)();
memory_func_t MEMORY[2] = {0, 0};

/* Global Offset Table for ARM PIC */
void *GLOBAL_OFFSET_TABLE_ = 0;

/* Macro definitions */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* ARM sync primitives */
void _sync_synchronize() { __asm__ __volatile__("" ::: "memory"); }

/* Weak function stub for call_weak_fn - defined as weak to allow override */
__attribute__((weak))
#ifndef __cplusplus
int call_weak_fn(void)
#else
extern "C" int call_weak_fn(void)
#endif
{ return 0; }

/* JUMPOUT stub for ARM */
void JUMPOUT(unsigned int addr) { 
    __asm__ __volatile__("bx %0" : : "r"(addr)); 
}

/* Process ID type */
typedef int pid_t;
typedef int bool;

/* Struct definitions */
typedef struct Node {
 int data;
 struct Node *next;
} Node;

typedef struct TreeNode {
 int data;
 struct TreeNode *left;
 struct TreeNode *right;
} TreeNode;

/* String constants */
const char asc_35B4[] = "=== Stack Memory Tests ===\n";
const char asc_36FE[] = "=== Heap Memory Tests ===\n";
const char asc_38E3[] = "=== Static/Global Memory Tests ===\n";
const char asc_3B46[] = "=== Memory Operation Tests ===\n";
const char aD[] = "%d\n";
const char aFork_0[] = "fork";
const char byte_388C[] = "signal: %d\n";
const char byte_3867[] = "child exited: %d\n";

/* Global variables */
int global_counter = 0;
int global_array[10];
int extern_global_var = 0;
int bss_var;
char bss_buffer[10];
int global_point = 0;
int dword_140A4 = 0;
int complex_init = 0;
int dword_140B4 = 0;
int dword_140BC = 0;
char byte_9[16];
int word_32 = 0;
int *file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
int *global_heap_ptr = 0;
int init_depends_on_static_depends = 0;
int static_local_counter = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_clang_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x57C - marked as static to avoid multiple definition */
static int init_proc(void)
{
 return call_weak_fn();
}


/* Function: sub_588 @ 0x588 */
void sub_588()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x7E8 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x81C */
int local_array(int n)
{
 int i; // [sp+0h] [bp-30h]
 unsigned int v3[10]; // [sp+4h] [bp-2Ch]
 int v4; // [sp+2Ch] [bp-4h]

 v4 = n;
 for ( i = 0; i <= 9; ++i )
 v3[i] = i * v4;
 return v3[5];
}


/* Function: local_struct @ 0x874 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x8A4 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x8CC */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x900 */
int large_stack_frame()
{
 int i; // [sp+0h] [bp-80Ch]
 unsigned char v2[2056]; // [sp+4h] [bp-808h]

 for ( i = 0; i < 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x95C */
int vla_stack(int n)
{
 char *v2; // [sp+0h] [bp-20h] BYREF
 int i; // [sp+4h] [bp-1Ch]
 unsigned int __vla_expr0; // [sp+8h] [bp-18h]
 char **v5; // [sp+Ch] [bp-14h]
 int na; // [sp+10h] [bp-10h]

 na = n;
 if ( n < 1 || na > 1000 )
 return -1;
 v5 = &v2;
 v2 = (char *)&v2 - ((4 * na + 7) & 0xFFFFFFF8);
 __vla_expr0 = na;
 for ( i = 0; i < na; ++i )
 *(unsigned int *)&v2[4 * i] = 2 * i;
 return *(unsigned int *)&v2[(2 * (na + ((unsigned int)na >> 31))) & 0xFFFFFFFD];
}


/* Function: alloca_usage @ 0xA40 */
int alloca_usage(int n)
{
 int i; // [sp+0h] [bp-18h] BYREF
 int *arr; // [sp+4h] [bp-14h]
 int na; // [sp+8h] [bp-10h]

 na = n;
 if ( n <= 0 )
 return -1;
 arr = (int *)((char *)&i - ((4 * na + 7) & 0xFFFFFFF8));
 for ( i = 0; i < na; ++i )
 arr[i] = 3 * i;
 return *(int *)((char *)arr + ((2 * (na + ((unsigned int)na >> 31))) & 0xFFFFFFFD));
}


/* Function: stack_alias @ 0xB00 */
int stack_alias(int *p1, int *p2)
{
 int v3; // [sp+0h] [bp-10h] BYREF
 int *v4; // [sp+4h] [bp-Ch]
 int *v5; // [sp+8h] [bp-8h]

 v3 = 10;
 v5 = &v3;
 v4 = &v3;
 if ( !&v3 )
 return -1;
 *v5 = 20;
 return *v4;
}


/* Function: test_stack_memory @ 0xB78 */
void test_stack_memory()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int p1; // [sp+18h] [bp-30h] BYREF
 int s[10]; // [sp+1Ch] [bp-2Ch] BYREF
 int out; // [sp+44h] [bp-4h] BYREF

 printf(asc_35B4);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 memset(s, 0, sizeof(s));
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
 p1 = 0;
 v8 = stack_alias(&p1, &p1);
 printf("MEM-L2-04 (stack_alias): %d\n", v8);
}


/* Function: heap_basic @ 0xCE0 */
int heap_basic(int n)
{
 int v2; // [sp+4h] [bp-14h]
 int i; // [sp+8h] [bp-10h]
 unsigned int *ptr; // [sp+Ch] [bp-Ch]

 ptr = malloc(4 * n);
 if ( !ptr )
 return -1;
 for ( i = 0; i < n; ++i )
 ptr[i] = 2 * i;
 v2 = *(unsigned int *)((char *)ptr + ((2 * (n + ((unsigned int)n >> 31))) & 0xFFFFFFFD));
 free(ptr);
 return v2;
}


/* Function: heap_calloc @ 0xDA0 */
int heap_calloc(int n)
{
 int i; // [sp+4h] [bp-14h]
 int v3; // [sp+8h] [bp-10h]
 unsigned int *ptr; // [sp+Ch] [bp-Ch]

 ptr = calloc(n, 4u);
 if ( !ptr )
 return -1;
 v3 = 0;
 for ( i = 0; i < n; ++i )
 v3 += ptr[i];
 free(ptr);
 return v3;
}


/* Function: heap_realloc @ 0xE50 */
int heap_realloc()
{
 int v1; // [sp+0h] [bp-20h]
 int j; // [sp+8h] [bp-18h]
 unsigned int *v3; // [sp+Ch] [bp-14h]
 int v4; // [sp+10h] [bp-10h]
 int i; // [sp+14h] [bp-Ch]
 int *p; // [sp+18h] [bp-8h]

 p = (int *)malloc(0x14u);
 if ( !p )
 return -1;
 for ( i = 0; i <= 4; ++i )
 p[i] = i + 1;
 v4 = p[2];
 v3 = realloc(p, 0x28u);
 if ( v3 )
 {
 for ( j = 5; j <= 9; ++j )
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
 free(p);
 return -2;
 }
}


/* Function: heap_array @ 0xFB0 */
int heap_array(int n)
{
 int v2; // [sp+4h] [bp-14h]
 int i; // [sp+8h] [bp-10h]
 unsigned int *ptr; // [sp+Ch] [bp-Ch]

 ptr = malloc(4 * n);
 if ( !ptr )
 return -1;
 for ( i = 0; i < n; ++i )
 ptr[i] = 3 * i;
 v2 = *(unsigned int *)((char *)ptr + ((2 * (n + ((unsigned int)n >> 31))) & 0xFFFFFFFD));
 free(ptr);
 return v2;
}


/* Function: heap_struct @ 0x1070 */
int heap_struct(int x)
{
 int v2; // [sp+0h] [bp-10h]
 unsigned int *ptr; // [sp+4h] [bp-Ch]

 ptr = malloc(8u);
 if ( !ptr )
 return -1;
 *ptr = x;
 ptr[1] = 2 * x;
 v2 = *ptr + ptr[1];
 free(ptr);
 return v2;
}


/* Function: heap_nested @ 0x10FC */
int heap_nested(Node **head)
{
 *head = (Node *)malloc(8u);
 if ( !*head )
 return -1;
 (*head)->data = 10;
 (*head)->next = (Node *)malloc(8u);
 if ( (*head)->next )
 {
 (*head)->next->data = 20;
 (*head)->next->next = 0;
 return 0;
 }
 else
 {
 free(*head);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x11D0 */
int linked_list_heap()
{
 Node *v1; // [sp+4h] [bp-24h]
 Node *j; // [sp+8h] [bp-20h]
 int v3; // [sp+Ch] [bp-1Ch]
 Node *ptr; // [sp+10h] [bp-18h]
 Node *v5; // [sp+14h] [bp-14h]
 int i; // [sp+18h] [bp-10h]
 Node *current; // [sp+1Ch] [bp-Ch]
 Node *head; // [sp+20h] [bp-8h]

 head = 0;
 current = 0;
 for ( i = 0; ; ++i )
 {
 if ( i > 4 )
 {
 v3 = 0;
 for ( j = head; j; j = j->next )
 v3 += j->data;
 while ( head )
 {
 v1 = head;
 head = head->next;
 free(v1);
 }
 return v3;
 }
 v5 = (Node *)malloc(8u);
 if ( !v5 )
 break;
 v5->data = 10 * i;
 v5->next = 0;
 if ( head )
 current->next = v5;
 else
 head = v5;
 current = v5;
 }
 while ( head )
 {
 ptr = head;
 head = head->next;
 free(ptr);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1364 */
TreeNode * create_tree_node(int data)
{
 unsigned int *v2; // [sp+0h] [bp-8h]

 v2 = malloc(0xCu);
 if ( v2 )
 {
 *v2 = data;
 v2[1] = 0;
 v2[2] = 0;
 }
 return (TreeNode *)v2;
}


/* Function: tree_heap_traversal @ 0x13C4 */
int tree_heap_traversal()
{
 int v1; // [sp+4h] [bp-Ch]
 TreeNode *ptr; // [sp+8h] [bp-8h]

 ptr = create_tree_node(10);
 if ( !ptr )
 return -1;
 ptr->left = create_tree_node(20);
 ptr->right = create_tree_node(30);
 if ( ptr->left && ptr->right )
 {
 v1 = ptr->data + ptr->left->data + ptr->right->data;
 free(ptr->left);
 free(ptr->right);
 free(ptr);
 return v1;
 }
 else
 {
 if ( ptr->left )
 free(ptr->left);
 if ( ptr->right )
 free(ptr->right);
 free(ptr);
 return -2;
 }
}


/* Function: memory_leak @ 0x14FC */
int memory_leak(unsigned int n)
{
 signed int i; // [sp+0h] [bp-10h]
 unsigned int *v3; // [sp+4h] [bp-Ch]

 v3 = malloc(4 * n);
 if ( !v3 )
 return -1;
 for ( i = 0; i < (int)n; ++i )
 v3[i] = i;
 return *(unsigned int *)((char *)v3 + ((2 * (n + (n >> 31))) & 0xFFFFFFFD));
}


/* Function: dangling_pointer @ 0x15A8 */
int dangling_pointer()
{
 unsigned int *ptr; // [sp+8h] [bp-8h]

 ptr = malloc(4u);
 if ( !ptr )
 return -1;
 *ptr = 42;
 printf("value before free: %d\n", *ptr);
 free(ptr);
 return *ptr;
}


/* Function: double_free @ 0x1638 */
int double_free(int *p)
{
 unsigned int *ptr; // [sp+4h] [bp-Ch]

 if ( p )
 return *p;
 ptr = malloc(4u);
 if ( !ptr )
 return -1;
 *ptr = 10;
 free(ptr);
 free(ptr);
 return -2;
}


/* Function: heap_overflow @ 0x16C8 */
int heap_overflow()
{
 int v1; // [sp+0h] [bp-10h]
 int i; // [sp+4h] [bp-Ch]
 int *ptr; // [sp+8h] [bp-8h]

 ptr = (int *)malloc(0x28u);
 if ( !ptr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 ptr[i] = 100 * i;
 v1 = *ptr;
 free(ptr);
 return v1;
}


/* Function: test_heap_memory @ 0x1770 */
void test_heap_memory()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int stat_loc; // [sp+8h] [bp-10h] BYREF
 int v10; // [sp+Ch] [bp-Ch]
 pid_t pid; // [sp+10h] [bp-8h]
 Node *head; // [sp+14h] [bp-4h] BYREF

 printf(asc_36FE);
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
 head = 0;
 v5 = heap_nested(&head);
 printf("HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( head )
 {
 free(head->next);
 free(head);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5u);
 printf("HEAP-L3-03 (memory_leak): %d\n", v8);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ( !pid )
 {
 v10 = dangling_pointer();
 printf(aD, v10);
 exit(0);
 }
 if ( pid < 1 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(pid, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) + 1) << 24 >> 25 >= 1 )
 printf(byte_388C, stat_loc & 0x7F);
 }
 else
 {
 printf(byte_3867, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x19B0 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x19E0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x19F4 */
int global_array_access(unsigned int idx)
{
 if ( idx < 0xA )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x1A50 */
int static_local(int reset)
{
 if ( !reset )
 return ++static_local_counter;
 static_local_counter = 0;
 return 0;
}


/* Function: call_static_func @ 0x1AC4 */
int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: static_helper @ 0x1AEC */
static int static_helper(int x)
{
 return 2 * x;
}


/* Function: access_extern_global @ 0x1B04 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1B1C - static to avoid multiple definition */
static int call_extern_func(void)
{
 return 3 * 5;
}


/* Function: read_const_data @ 0x1B34 */
int read_const_data()
{
 return (unsigned char)asc_35B4[4] + 42;
}


/* Function: access_bss_var @ 0x1B4C */
int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x1B5C */
int access_bss_buffer()
{
 return (unsigned char)bss_buffer;
}


/* Function: global_struct_access @ 0x1B70 */
int global_struct_access()
{
 return global_point + dword_140A4;
}


/* Function: set_file_static @ 0x1B94 */
void set_file_static(int *val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x1BB8 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1BC8 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1BEC */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x1C50 */
int global_heap_store(int *p)
{
 global_heap_ptr = (int)p;
 if ( p )
 return *(unsigned int *)global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1CB4 */
int static_complex_init()
{
 return complex_init + dword_140B4 + dword_140BC;
}


/* Function: tls_access @ 0x1CE0 */
int tls_access(void *val)
{
 GLOBAL_OFFSET_TABLE_ = val;
 return 2 * (unsigned int)val;
}


/* Function: init_order_test @ 0x1D18 */
int init_order_test()
{
 int p; // [sp+4h] [bp-4h] BYREF

 p = 20;
 return init_depends_on(&p);
}


/* Function: init_depends_on @ 0x1D40 */
int init_depends_on(int *p)
{
 if ( p )
 init_depends_on_static_depends = *p;
 return init_depends_on_static_depends;
}


int double_value(int x);

/* Function: test_static_global @ 0x1D88 */
void test_static_global()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int const_data; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0
 int *file_static; // r0
 int v13; // r0
 int v14; // r0
 int v15; // r0
 int v16; // r0
 int inited; // r0
 int heap_val; // [sp+Ch] [bp-4h] BYREF

 printf(asc_38E3);
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
 v5 = call_static_func(5);
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
 set_file_static((int *)&word_32);
 file_static = get_file_static();
 printf("STM-L2-06 (file_static): %d\n", file_static);
 set_global_callback(double_value);
 v13 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n", v13);
 heap_val = 100;
 v14 = global_heap_store(&heap_val);
 printf("STM-L2-08 (global_heap_store): %d\n", v14);
 v15 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n", v15);
 v16 = tls_access(&byte_9[1]);
 printf("STM-L3-01 (tls_access): %d\n", v16);
 inited = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: double_value @ 0x1FA8 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x1FC0 */
int memop_memset(unsigned char *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, fill_value, size);
 return *buf;
}


/* Function: memop_memcpy @ 0x2034 */
int memop_memcpy(char *dst, const void *src, size_t n)
{
 if ( !dst || !src || !n )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)&dst[(n & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x20C4 */
int memop_memmove(char *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove(buf + 1, buf, n - 1);
 return (unsigned char)buf[1];
}


/* Function: memop_memcmp @ 0x2138 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v5; // [sp+4h] [bp-14h]

 if ( !p1 || !p2 || !n )
 return 0;
 v5 = memcmp(p1, p2, n);
 if ( v5 < 1 )
 return v5 >> 31;
 else
 return 1;
}


/* Function: memop_bzero @ 0x21E8 */
int memop_bzero(unsigned char *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *buf;
}


/* Function: memop_bcopy @ 0x2248 */
int memop_bcopy(const void *src, unsigned char *dst, size_t n)
{
 if ( !src || !dst || !n )
 return -1;
 bcopy(src, dst, n);
 return *dst;
}


/* Function: memop_unaligned_access @ 0x22CC */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *((unsigned char *)buf + 1)
 | (*((unsigned char *)buf + 2) << 8)
 | ((*((unsigned char *)buf + 3) | (*((unsigned char *)buf + 4) << 8)) << 16);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x232C */
int memop_memory_barrier(volatile int *flag)
{
 int v2; // [sp+4h] [bp-Ch]

 if ( !flag )
 return -1;
 v2 = *flag;
 _sync_synchronize();
 return v2 + *flag;
}


/* Function: test_memory_op_functions @ 0x2390 */
void test_memory_op_functions()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int flag; // [sp+Ch] [bp-174h] BYREF
 char v9[4]; // [sp+10h] [bp-170h] BYREF
 int v10; // [sp+14h] [bp-16Ch]
 int v11; // [sp+18h] [bp-168h] BYREF
 int v12; // [sp+1Ch] [bp-164h] BYREF
 unsigned char v13[10]; // [sp+22h] [bp-15Eh] BYREF
 unsigned int p2[3]; // [sp+2Ch] [bp-154h] BYREF
 unsigned int p1[3]; // [sp+38h] [bp-148h] BYREF
 char v16[12]; // [sp+44h] [bp-13Ch] BYREF
 unsigned int dst[5]; // [sp+50h] [bp-130h] BYREF
 unsigned int v18[5]; // [sp+64h] [bp-11Ch] BYREF
 unsigned char buf[264]; // [sp+78h] [bp-108h] BYREF

 printf(asc_3B46);
 v18[0] = *(unsigned int *)"\n";
 v18[1] = 20;
 v18[2] = 30;
 v18[3] = 40;
 v18[4] = 50;
 memset(dst, 0, sizeof(dst));
 v0 = memop_memset(buf, 0xAu, 65);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy((char *)dst, v18, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(v16, "HelloWorld");
 v2 = memop_memmove(v16, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 p1[2] = 3;
 p1[1] = 2;
 p1[0] = 1;
 p2[2] = 4;
 p2[1] = 2;
 p2[0] = 1;
 v3 = memop_memcmp(p1, p2, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v13, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 v12 = 67305985;
 v11 = 0;
 v5 = memop_bcopy(&v12, (unsigned char *)&v11, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 v10 = 117835012;
 *(unsigned int *)v9 = 50462976;
 v6 = memop_unaligned_access(v9);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 flag = 5;
 v7 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x25B4 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* External function - defined elsewhere - declaration removed, already in forward declarations */
/* Stub functions for missing imports - defined as weak symbols */
__attribute__((weak)) void __imp_calloc(void) { while(1); }
__attribute__((weak)) void __imp___libc_start_main(void) { while(1); }
__attribute__((weak)) void __imp___cxa_finalize(void) { while(1); }
__attribute__((weak)) void __imp_printf(void) { while(1); }
__attribute__((weak)) void __imp_memmove(void) { while(1); }
__attribute__((weak)) void __imp_free(void) { while(1); }
__attribute__((weak)) void __imp_memcpy(void) { while(1); }
__attribute__((weak)) void __imp_memcmp(void) { while(1); }
__attribute__((weak)) void __imp_realloc(void) { while(1); }
__attribute__((weak)) void __imp_perror(void) { while(1); }
__attribute__((weak)) void __imp_bcopy(void) { while(1); }
__attribute__((weak)) void __imp_waitpid(void) { while(1); }
__attribute__((weak)) void __imp_malloc(void) { while(1); }
__attribute__((weak)) void __imp_exit(void) { while(1); }
__attribute__((weak)) void __imp_memset(void) { while(1); }
__attribute__((weak)) void __imp_fork(void) { while(1); }
__attribute__((weak)) void __imp_abort(void) { while(1); }
__attribute__((weak)) void __imp___gmon_start__(void) { while(1); }


/* Function: __sync_fetch_and_add_4 @ 0x2604 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x263C */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x2674 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x26AC */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x26E4 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x271C */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x2758 */
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


/* Function: __sync_fetch_and_sub_2 @ 0x27B8 */
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


/* Function: __sync_fetch_and_or_2 @ 0x2818 */
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


/* Function: __sync_fetch_and_and_2 @ 0x2878 */
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


/* Function: __sync_fetch_and_xor_2 @ 0x28D8 */
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


/* Function: __sync_fetch_and_nand_2 @ 0x2938 */
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


/* Function: __sync_fetch_and_add_1 @ 0x299C */
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


/* Function: __sync_fetch_and_sub_1 @ 0x29F8 */
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


/* Function: __sync_fetch_and_or_1 @ 0x2A54 */
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


/* Function: __sync_fetch_and_and_1 @ 0x2AB0 */
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


/* Function: __sync_fetch_and_xor_1 @ 0x2B0C */
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


/* Function: __sync_fetch_and_nand_1 @ 0x2B68 */
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


/* Function: __sync_add_and_fetch_4 @ 0x2BC8 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY[0xFFFF0FC0]() );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x2C00 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY[0xFFFF0FC0]() );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x2C38 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY[0xFFFF0FC0]() );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x2C70 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY[0xFFFF0FC0]() );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x2CA8 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY[0xFFFF0FC0]() );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x2CE0 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY[0xFFFF0FC0]() );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x2D1C */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x2D84 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x2DEC */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x2E54 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x2EBC */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x2F24 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x2F90 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x2FF4 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x3058 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x30BC */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x3120 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x3184 */
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
 while ( MEMORY[0xFFFF0FC0]() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x31EC */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x323C */
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


/* Function: __sync_val_compare_and_swap_1 @ 0x32B4 */
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


/* Function: __sync_bool_compare_and_swap_4 @ 0x3328 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x3354 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x3370 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x3398 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x33D0 */
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


/* Function: __sync_lock_test_and_set_1 @ 0x3430 */
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


/* Function: __sync_lock_release_8 @ 0x348C */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x34B0 */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x34D0 */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x34F0 */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */



/* Function: .term_proc @ 0x3518 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_calloc @ 0x1417C */

/* FAILED to decompile: __imp___libc_start_main @ 0x14180 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x14184 */

/* FAILED to decompile: __imp_printf @ 0x14188 */

/* FAILED to decompile: __imp_memmove @ 0x1418C */

/* FAILED to decompile: __imp_free @ 0x14190 */

/* FAILED to decompile: __imp_memcpy @ 0x14194 */

/* FAILED to decompile: __imp_memcmp @ 0x14198 */

/* FAILED to decompile: __imp_realloc @ 0x1419C */

/* FAILED to decompile: __imp_perror @ 0x141A0 */

/* FAILED to decompile: __imp_bcopy @ 0x141A4 */

/* FAILED to decompile: __imp_waitpid @ 0x141A8 */

/* FAILED to decompile: __imp_malloc @ 0x141AC */

/* FAILED to decompile: __imp_exit @ 0x141B0 */

/* FAILED to decompile: __imp_memset @ 0x141B4 */

/* FAILED to decompile: __imp_fork @ 0x141B8 */

/* FAILED to decompile: __imp_abort @ 0x141BC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x141C4 */

/* Total functions decompiled: 117, failed: 18 */
