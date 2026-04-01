#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <strings.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef int pid_t;

/* Forward declarations for structs */
typedef struct Node Node;
typedef struct TreeNode TreeNode;

/* Node struct for linked lists */
struct Node {
    int data;
    Node *next;
};

/* TreeNode struct for binary trees */
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

/* Forward declarations for functions */
static int local_vars(int x);
static int local_array(int n);
static int local_struct(int x);
static int address_of_local(int *out);
static int address_of_array(int *arr);
static int large_stack_frame(void);
static int vla_stack(int n);
static int alloca_usage(int n);
static int stack_alias(int *p1, int *p2);
int extern_function(int);
static int double_value(int);
static int init_depends_on(int *);
static int static_helper(int x);
static int heap_basic(int n);
static int heap_calloc(int n);
static int heap_realloc(void);
static int heap_array(int n);
static int heap_struct(int x);
static long long heap_nested(Node **head);
static int linked_list_heap(void);
static TreeNode *create_tree_node(int data);
static int tree_heap_traversal(void);
static int memory_leak(int n);
static int dangling_pointer(void);
static long long double_free(unsigned int *p);
static int heap_overflow(void);
static int global_var_access(void);
static int global_var_read(void);
static int global_array_access(int idx);
static int static_local(int reset);
static int call_static_func(int x);
static int access_extern_global(void);
static int call_extern_func(void);
static int read_const_data(void);
static int access_bss_var(void);
static int access_bss_buffer(void);
static int global_struct_access(void);
static void set_file_static(int val);
static int get_file_static(void);
static void set_global_callback(int (*f)(int));
static long long call_global_callback(unsigned int x);
static int global_heap_store(int *p);
static int static_complex_init(void);
static int tls_access(int val);
static int init_order_test(void);
static long long memop_memset(unsigned char *buf, size_t size, int fill_value);
static long long memop_memcpy(void *dst, const void *src, size_t n);
static long long memop_memmove(char *buf, size_t n);
static long long memop_memcmp(const void *p1, const void *p2, size_t n);
static long long memop_bzero(unsigned char *buf, size_t n);
static long long memop_bcopy(const void *src, unsigned char *dst, size_t n);
static int memop_unaligned_access(const char *buf);
static int memop_memory_barrier(volatile int *flag);
static void test_stack_memory(void);
static void test_heap_memory(void);
static void test_static_global(void);
static void test_memory_op_functions(void);
static void term_proc(void);

/* External string declarations */
static const char *asc_2714 = "=== Stack Memory Tests ===\n";
static const char *asc_285E = "=== Heap Memory Tests ===\n";
static const char *aD = "dangling value: %d\n";
static const char *aFork_0 = "fork";
static const char *byte_29EC = "child exited with signal %d\n";
static const char *byte_29C7 = "child exited with status %d\n";
static const char *asc_2A43 = "=== Static/Global Tests ===\n";
static const char *asc_2CA6 = "=== Memory Op Tests ===\n";
static __int128 xmmword_2D58 = 0;
static unsigned char byte_8[256] = {0};

/* ARM intrinsics stubs */
#define TPIDR_EL0 0
static inline unsigned long _ReadStatusReg(int reg) { return 0; }
static inline void __dmb(unsigned int opt) { (void)opt; }

/* Global variables */
static int global_counter = 0;
static int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static int static_local_counter = 0;
static int extern_global_var = 50;
static unsigned char const_string[] = "Hello";
static int bss_var = 42;
static unsigned char bss_buffer[256] = {0};
static int global_point = 10;
static int dword_140D4 = 20;
static int (*global_func_ptr)(int) = 0;
static long long global_heap_ptr = 0;
static int complex_init = 1;
static int dword_140E4 = 2;
static int dword_140EC = 3;
static int init_depends_on_static_depends = 0;
static int file_scope_static = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_clang_O0_g
 * Processor: arm
 */








/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0xB94 */
static int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0xBC8 */
static int local_array(int n)
{
 int i; // [xsp+0h] [xbp-30h]
 unsigned int v3[10]; // [xsp+4h] [xbp-2Ch]
 int v4; // [xsp+2Ch] [xbp-4h]

 v4 = n;
 for ( i = 0; i < 10; ++i )
 v3[i] = i * v4;
 return v3[5];
}


/* Function: local_struct @ 0xC20 */
static int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0xC50 */
static int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0xC78 */
static int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0xCAC */
static int large_stack_frame()
{
 int i; // [xsp+Ch] [xbp-814h]
 unsigned char v2[2048]; // [xsp+10h] [xbp-810h]

 for ( i = 0; i < 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0xD00 */
static int vla_stack(int n)
{
 long long v2; // [xsp+0h] [xbp-30h] BYREF
 int (*p_vla)[]; // [xsp+8h] [xbp-28h]
 int i; // [xsp+14h] [xbp-1Ch]
 unsigned long long __vla_expr0; // [xsp+18h] [xbp-18h]
 long long *v6; // [xsp+20h] [xbp-10h]
 int na; // [xsp+28h] [xbp-8h]

 na = n;
 if ( n <= 0 || na > 1000 )
 return -1;
 v6 = &v2;
 p_vla = (int (*)[])((char *)&v2 - ((4LL * (unsigned int)na + 15) & 0xFFFFFFFFFFFFFFF0LL));
 __vla_expr0 = (unsigned int)na;
 for ( i = 0; i < na; ++i )
 *((unsigned int *)p_vla + i) = 2 * i;
 return *((unsigned int *)p_vla + na / 2);
}


/* Function: alloca_usage @ 0xDE0 */
static int alloca_usage(int n)
{
 long long v2; // [xsp+0h] [xbp-20h] BYREF
 int i; // [xsp+Ch] [xbp-14h]
 int *arr; // [xsp+10h] [xbp-10h]
 int na; // [xsp+18h] [xbp-8h]

 na = n;
 if ( n <= 0 )
 return -1;
 arr = (int *)((char *)&v2 - ((4LL * na + 15) & 0xFFFFFFFFFFFFFFF0LL));
 for ( i = 0; i < na; ++i )
 arr[i] = 3 * i;
 return arr[na / 2];
}


/* Function: stack_alias @ 0xEA4 */
static int stack_alias(int *p1, int *p2)
{
 int v3; // [xsp+4h] [xbp-1Ch] BYREF
 int *v4; // [xsp+8h] [xbp-18h]
 int *v5; // [xsp+10h] [xbp-10h]

 v3 = 10;
 v5 = &v3;
 v4 = &v3;
 if ( !&v3 )
 return -1;
 *v5 = 20;
 return *v4;
}


/* Function: test_stack_memory @ 0xF1C */
static void test_stack_memory()
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
 int p1; // [xsp+20h] [xbp-30h] BYREF
 int s[10]; // [xsp+24h] [xbp-2Ch] BYREF
 int out; // [xsp+4Ch] [xbp-4h] BYREF

 printf(asc_2714);
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


/* Function: heap_basic @ 0x1054 */
static int heap_basic(int n)
{
 int v2; // [xsp+8h] [xbp-18h]
 int i; // [xsp+Ch] [xbp-14h]
 unsigned int *ptr; // [xsp+10h] [xbp-10h]

 ptr = malloc(4LL * n);
 if ( !ptr )
 return -1;
 for ( i = 0; i < n; ++i )
 ptr[i] = 2 * i;
 v2 = ptr[n / 2];
 free(ptr);
 return v2;
}


/* Function: heap_calloc @ 0x110C */
static int heap_calloc(int n)
{
 int i; // [xsp+8h] [xbp-18h]
 int v3; // [xsp+Ch] [xbp-14h]
 unsigned int *ptr; // [xsp+10h] [xbp-10h]

 ptr = calloc(n, 4u);
 if ( !ptr )
 return -1;
 v3 = 0;
 for ( i = 0; i < n; ++i )
 v3 += ptr[i];
 free(ptr);
 return v3;
}


/* Function: heap_realloc @ 0x11B4 */
static int heap_realloc()
{
 unsigned int *v0; // x0
 int v2; // [xsp+4h] [xbp-2Ch]
 int j; // [xsp+Ch] [xbp-24h]
 int v4; // [xsp+18h] [xbp-18h]
 int i; // [xsp+1Ch] [xbp-14h]
 int *p; // [xsp+20h] [xbp-10h]

 p = (int *)malloc(0x14u);
 if ( !p )
 return -1;
 for ( i = 0; i < 5; ++i )
 p[i] = i + 1;
 v4 = p[2];
 v0 = realloc(p, 0x28u);
 if ( v0 )
 {
 for ( j = 5; j < 10; ++j )
 v0[j] = 10 * j;
 if ( v0[2] == v4 )
 v2 = v0[5];
 else
 v2 = -3;
 free(v0);
 return v2;
 }
 else
 {
 free(p);
 return -2;
 }
}


/* Function: heap_array @ 0x1310 */
static int heap_array(int n)
{
 int v2; // [xsp+8h] [xbp-18h]
 int i; // [xsp+Ch] [xbp-14h]
 unsigned int *ptr; // [xsp+10h] [xbp-10h]

 ptr = malloc(4LL * n);
 if ( !ptr )
 return -1;
 for ( i = 0; i < n; ++i )
 ptr[i] = 3 * i;
 v2 = ptr[n / 2];
 free(ptr);
 return v2;
}


/* Function: heap_struct @ 0x13CC */
static int heap_struct(int x)
{
 int v2; // [xsp+Ch] [xbp-14h]
 unsigned int *ptr; // [xsp+10h] [xbp-10h]

 ptr = malloc(8u);
 if ( !ptr )
 return -1;
 *ptr = x;
 ptr[1] = 2 * x;
 v2 = *ptr + ptr[1];
 free(ptr);
 return v2;
}


/* Function: heap_nested @ 0x1458 */
static long long heap_nested(Node **head)
{
 *head = (Node *)malloc(0x10u);
 if ( *head )
 {
 (*head)->data = 10;
 (*head)->next = (Node *)malloc(0x10u);
 if ( (*head)->next )
 {
 (*head)->next->data = 20;
 (*head)->next->next = 0;
 return 0;
 }
 else
 {
 free(*head);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: linked_list_heap @ 0x1520 */
static int linked_list_heap()
{
 Node *v1; // [xsp+8h] [xbp-48h]
 Node *j; // [xsp+10h] [xbp-40h]
 int v3; // [xsp+1Ch] [xbp-34h]
 Node *ptr; // [xsp+20h] [xbp-30h]
 Node *v5; // [xsp+28h] [xbp-28h]
 int i; // [xsp+34h] [xbp-1Ch]
 Node *current; // [xsp+38h] [xbp-18h]
 Node *head; // [xsp+40h] [xbp-10h]

 head = 0;
 current = 0;
 for ( i = 0; ; ++i )
 {
 if ( i >= 5 )
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
 v5 = (Node *)malloc(0x10u);
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


/* Function: create_tree_node @ 0x1694 */
static TreeNode * create_tree_node(int data)
{
 TreeNode *v2; // [xsp+0h] [xbp-10h]

 v2 = (TreeNode *)malloc(0x18u);
 if ( v2 )
 {
 v2->data = data;
 v2->left = 0;
 v2->right = 0;
 }
 return v2;
}


/* Function: tree_heap_traversal @ 0x16EC */
static int tree_heap_traversal()
{
 int v1; // [xsp+Ch] [xbp-14h]
 TreeNode *ptr; // [xsp+10h] [xbp-10h]

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


/* Function: memory_leak @ 0x1818 */
static int memory_leak(int n)
{
 int i; // [xsp+Ch] [xbp-14h]
 unsigned int *v3; // [xsp+10h] [xbp-10h]

 v3 = malloc(4LL * n);
 if ( !v3 )
 return -1;
 for ( i = 0; i < n; ++i )
 v3[i] = i;
 return v3[n / 2];
}


/* Function: dangling_pointer @ 0x18BC */
static int dangling_pointer()
{
 unsigned int *ptr; // [xsp+10h] [xbp-10h]

 ptr = malloc(4u);
 if ( !ptr )
 return -1;
 *ptr = 42;
 printf("value before free: %d\n", *ptr);
 free(ptr);
 return *ptr;
}


/* Function: double_free @ 0x1944 */
static long long double_free(unsigned int *p)
{
 unsigned int *ptr; // [xsp+8h] [xbp-18h]

 if ( p )
 {
 return *p;
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


/* Function: heap_overflow @ 0x19CC */
static int heap_overflow()
{
 int v1; // [xsp+8h] [xbp-18h]
 int i; // [xsp+Ch] [xbp-14h]
 int *ptr; // [xsp+10h] [xbp-10h]

 ptr = (int *)malloc(0x28u);
 if ( !ptr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 ptr[i] = 100 * i;
 v1 = *ptr;
 free(ptr);
 return v1;
}


/* Function: test_heap_memory @ 0x1A70 */
static void test_heap_memory()
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
 Node *head; // [xsp+18h] [xbp-8h] BYREF

 printf(asc_285E);
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
 free(head);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n", v8);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v8 = dangling_pointer();
 printf(aD, v8);
}


/* Function: global_var_access @ 0x1C70 */
static int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1C88 */
static int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1C98 */
static int global_array_access(int idx)
{
 if ( idx < 0 || idx >= 10 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x1CEC */
static int static_local(int reset)
{
 if ( !reset )
 return ++static_local_counter;
 static_local_counter = 0;
 return 0;
}


/* Function: call_static_func @ 0x1D38 */
static int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: static_helper @ 0x1D60 */
static int static_helper(int x)
{
 return 2 * x;
}


/* Function: access_extern_global @ 0x1D78 */
static int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1D8C */
static int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1DA4 */
static int read_const_data()
{
 return (unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1DB8 */
static int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x1DC4 */
static int access_bss_buffer()
{
 return (unsigned char)bss_buffer;
}


/* Function: global_struct_access @ 0x1DD0 */
static int global_struct_access()
{
 return global_point + dword_140D4;
}


/* Function: set_file_static @ 0x1DEC */
static void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x1E08 */
static int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1E14 */
static void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1E30 */
static long long call_global_callback(unsigned int x)
{
 if ( global_func_ptr )
 return (unsigned int)global_func_ptr(x);
 else
 return (unsigned int)-1;
}


/* Function: global_heap_store @ 0x1E84 */
static int global_heap_store(int *p)
{
 global_heap_ptr = (long long)p;
 if ( p )
 return *(unsigned int *)global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1ED0 */
static int static_complex_init()
{
 return complex_init + dword_140E4 + dword_140EC;
}


/* Function: tls_access @ 0x1EF4 */
static int tls_access(int val)
{
 int *v1; // x8

 v1 = (int *)(_ReadStatusReg(TPIDR_EL0) + 16);
 *v1 = val;
 return 2 * *v1;
}


/* Function: init_order_test @ 0x1F20 */
static int init_order_test()
{
 int external_val; // [xsp+Ch] [xbp-4h] BYREF

 external_val = 20;
 return init_depends_on(&external_val);
}


/* Function: init_depends_on @ 0x1F48 */
static int init_depends_on(int *p)
{
 if ( p )
 init_depends_on_static_depends = *p;
 return init_depends_on_static_depends;
}


/* Function: test_static_global @ 0x1F80 */
static void test_static_global()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int const_data; // w0
 int v9; // w0
 int v10; // w0
 int v11; // w0
 int file_static; // w0
 int v13; // w0
 int v14; // w0
 int v15; // w0
 int v16; // w0
 int inited; // w0
 int heap_val; // [xsp+1Ch] [xbp-4h] BYREF

 printf(asc_2A43);
 v0 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n", v0);
 v1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n", v1);
 v2 = global_array_access(5);
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
 set_file_static(50);
 file_static = get_file_static();
 printf("STM-L2-06 (file_static): %d\n", file_static);
 set_global_callback((int (*)(int))double_value);
 v13 = call_global_callback(5u);
 printf("STM-L2-07 (global_func_ptr): %d\n", v13);
 heap_val = 100;
 v14 = global_heap_store(&heap_val);
 printf("STM-L2-08 (global_heap_store): %d\n", v14);
 v15 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n", v15);
 v16 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n", v16);
 inited = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: double_value @ 0x2154 */
static int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x216C */
static long long memop_memset(unsigned char *buf, size_t size, int fill_value)
{
 if ( buf && size )
 {
 memset(buf, fill_value, size);
 return *buf;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_memcpy @ 0x21D8 */
static long long memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( dst && src && n )
 {
 memcpy(dst, src, n);
 return (unsigned int)*((unsigned int *)dst + n / 4 - 1);
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_memmove @ 0x2260 */
static long long memop_memmove(char *buf, size_t n)
{
 if ( buf && n >= 2 )
 {
 memmove(buf + 1, buf, n - 1);
 return (unsigned char)buf[1];
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_memcmp @ 0x22D4 */
static long long memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v6; // [xsp+Ch] [xbp-24h]

 if ( p1 && p2 && n )
 {
 v6 = memcmp(p1, p2, n);
 if ( v6 <= 0 )
 {
 if ( v6 < 0 )
 return (unsigned int)-1;
 else
 return 0;
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


/* Function: memop_bzero @ 0x237C */
static long long memop_bzero(unsigned char *buf, size_t n)
{
 if ( buf )
 {
 memset(buf, 0, n);
 return *buf;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_bcopy @ 0x23D8 */
static long long memop_bcopy(const void *src, unsigned char *dst, size_t n)
{
 if ( src && dst && n )
 {
 bcopy(src, dst, n);
 return *dst;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: memop_unaligned_access @ 0x2450 */
static int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2494 */
static int memop_memory_barrier(volatile int *flag)
{
 volatile int v2; // [xsp+Ch] [xbp-14h]

 if ( !flag )
 return -1;
 v2 = *flag;
 __dmb(0xBu);
 return v2 + *flag;
}


/* Function: test_memory_op_functions @ 0x24E8 */
static void test_memory_op_functions()
{
 int v0; // w0
 int v1; // w0
 unsigned int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int flag; // [xsp+24h] [xbp-18Ch] BYREF
 char v9[12]; // [xsp+28h] [xbp-188h] BYREF
 int v10; // [xsp+34h] [xbp-17Ch] BYREF
 int v11; // [xsp+38h] [xbp-178h] BYREF
 unsigned char v12[10]; // [xsp+3Eh] [xbp-172h] BYREF
 long long p2; // [xsp+48h] [xbp-168h] BYREF
 int v14; // [xsp+50h] [xbp-160h]
 long long p1; // [xsp+58h] [xbp-158h] BYREF
 int v16; // [xsp+60h] [xbp-150h]
 char v17[16]; // [xsp+68h] [xbp-148h] BYREF
 unsigned long long v18[2]; // [xsp+78h] [xbp-138h] BYREF
 int v19; // [xsp+88h] [xbp-128h]
 __int128 v20; // [xsp+90h] [xbp-120h] BYREF
 int v21; // [xsp+A0h] [xbp-110h]
 unsigned char buf[256]; // [xsp+B0h] [xbp-100h] BYREF

 printf(asc_2CA6);
 v20 = xmmword_2D58;
 v21 = 50;
 v18[0] = 0;
 v18[1] = 0;
 v19 = 0;
 v0 = memop_memset(buf, 0xAu, 65);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(v18, &v20, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(v17, "HelloWorld");
 v2 = memop_memmove(v17, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 p1 = 0x200000001LL;
 v16 = 3;
 p2 = 0x200000001LL;
 v14 = 4;
 v3 = memop_memcmp(&p1, &p2, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v12, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 v11 = 67305985;
 v10 = 0;
 v5 = memop_bcopy(&v11, (unsigned char *)&v10, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 *(unsigned long long *)v9 = 0x706050403020100LL;
 v6 = memop_unaligned_access(v9);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 flag = 5;
 v7 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n", v7);
}








/* Function: extern_function @ 0x26E0 */
int extern_function(int x)
{
 return 3 * x;
}


/* Function: .term_proc @ 0x26FC */
static void term_proc()
{
 ;
}



