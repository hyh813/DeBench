/* Auto-injected type definitions by preprocessor */
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Struct definitions */
typedef struct {
    int x;
    int y;
} Point;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Forward declarations */
static int static_helper(int x);
static int init_depends_on(int *p);
static int double_value(int x);
int extern_function(int x);

/* Global variable declarations */
int global_counter = 0;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int static_local_counter = 0;
int extern_global_var = 50;
const char *const_string = "Hello World";
int bss_var = 0;
int bss_buffer = 0;
int dword_60D4 = 0;
int global_point = 0;
int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
long long global_heap_ptr = 0;
int dword_60F0 = 0;
int dword_60E8 = 0;
int complex_init = 0;
int init_depends_on_static_depends = 0;
void (*_gmon_start__)(void) = 0;

/* String constants */
const char *format = "\n=== Stack Memory Tests ===\n";
const char *asc_314E = "\n=== Heap Memory Tests ===\n";
const char *asc_3333 = "\n=== Static & Global Memory Tests ===\n";
const char *asc_3596 = "\n=== Memory Operation Tests ===\n";
const char *aD = "%d\n";
const char *s = "fork failed";
const char *byte_32DC = "Child signal: %d\n";
const char *byte_32B7 = "Child exit status: %d\n";

/* Helper macros and inline functions */
static inline void __writefsdword(unsigned long offset, unsigned int val) {
    __asm__ __volatile__("movl %0, %%fs:(%1)" : : "r"(val), "r"(offset) : "memory");
}

static inline unsigned int __readfsdword(unsigned long offset) {
    unsigned int val;
    __asm__ __volatile__("movl %%fs:(%1), %0" : "=r"(val) : "r"(offset) : "memory");
    return val;
}

static inline void _mm_mfence(void) {
    __asm__ __volatile__("mfence" ::: "memory");
}

#define JUMPOUT(x) do { } while(0)

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_clang_O0_g
 * Processor: pc
 */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x1210 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1240 */
int local_array(int n)
{
 int i; // [rsp+0h] [rbp-34h]
 int arr[11]; // [rsp+4h] [rbp-30h]
 int na; // [rsp+30h] [rbp-4h]

 na = n;
 for ( i = 0; i < 10; ++i )
 arr[i] = na * i;
 return arr[5];
}


/* Function: local_struct @ 0x1280 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x12A0 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x12C0 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x12F0 */
int large_stack_frame()
{
 int i; // [rsp+0h] [rbp-804h]
 char large_buf[2048]; // [rsp+4h] [rbp-800h]

 for ( i = 0; i < 2048; ++i )
 large_buf[i] = i;
 return large_buf[1024];
}


/* Function: vla_stack @ 0x1360 */
int vla_stack(int n)
{
 long long v2; // [rsp+0h] [rbp-30h] BYREF
 int (*p_vla)[]; // [rsp+8h] [rbp-28h]
 int i; // [rsp+14h] [rbp-1Ch]
 unsigned long long __vla_expr0; // [rsp+18h] [rbp-18h]
 long long *v6; // [rsp+20h] [rbp-10h]
 int na; // [rsp+28h] [rbp-8h]

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


/* Function: alloca_usage @ 0x1410 */
int alloca_usage(int n)
{
 int *v2; // [rsp+0h] [rbp-20h] BYREF
 int i; // [rsp+Ch] [rbp-14h]
 int *arr; // [rsp+10h] [rbp-10h]
 int na; // [rsp+18h] [rbp-8h]

 na = n;
 if ( n <= 0 )
 return -1;
 arr = (int *)((char *)&v2 - ((4LL * na + 15) & 0xFFFFFFFFFFFFFFF0LL));
 for ( i = 0; i < na; ++i )
 arr[i] = 3 * i;
 v2 = arr;
 return arr[na / 2];
}


/* Function: stack_alias @ 0x14B0 */
int stack_alias(int *p1, int *p2)
{
 int local; // [rsp+0h] [rbp-1Ch] BYREF
 int *p2a; // [rsp+4h] [rbp-18h]
 int *p1a; // [rsp+Ch] [rbp-10h]

 local = 10;
 p1a = &local;
 p2a = &local;
 if ( !&local )
 return -1;
 *p1a = 20;
 return *p2a;
}


/* Function: test_stack_memory @ 0x1510 */
void test_stack_memory()
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
 int alias_val; // [rsp+Ch] [rbp-34h] BYREF
 int arr5[11]; // [rsp+10h] [rbp-30h] BYREF
 int out; // [rsp+3Ch] [rbp-4h] BYREF

 printf(format);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 memset(arr5, 0, 0x28u);
 arr5[0] = 1;
 arr5[1] = 2;
 arr5[2] = 3;
 v4 = address_of_array(arr5);
 printf("MEM-L1-05 (address_of_array): %d\n", v4);
 v5 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
 v6 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 v7 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n", v7);
 alias_val = 0;
 v8 = stack_alias(&alias_val, &alias_val);
 printf("MEM-L2-04 (stack_alias): %d\n", v8);
}


/* Function: heap_basic @ 0x1640 */
int heap_basic(int n)
{
 int result; // [rsp+8h] [rbp-18h]
 int i; // [rsp+Ch] [rbp-14h]
 int *arr; // [rsp+10h] [rbp-10h]

 arr = (int *)malloc(4LL * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 2 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_calloc @ 0x16E0 */
int heap_calloc(int n)
{
 int i; // [rsp+8h] [rbp-18h]
 int sum; // [rsp+Ch] [rbp-14h]
 int *arr; // [rsp+10h] [rbp-10h]

 arr = (int *)calloc(n, 4u);
 if ( !arr )
 return -1;
 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 free(arr);
 return sum;
}


/* Function: heap_realloc @ 0x1770 */
int heap_realloc()
{
 int v1; // [rsp+4h] [rbp-2Ch]
 int i_0; // [rsp+Ch] [rbp-24h]
 int *new_p; // [rsp+10h] [rbp-20h]
 int old_val; // [rsp+18h] [rbp-18h]
 int i; // [rsp+1Ch] [rbp-14h]
 int *p; // [rsp+20h] [rbp-10h]

 p = (int *)malloc(0x14u);
 if ( !p )
 return -1;
 for ( i = 0; i < 5; ++i )
 p[i] = i + 1;
 old_val = p[2];
 new_p = (int *)realloc(p, 0x28u);
 if ( new_p )
 {
 for ( i_0 = 5; i_0 < 10; ++i_0 )
 new_p[i_0] = 10 * i_0;
 if ( new_p[2] == old_val )
 v1 = new_p[5];
 else
 v1 = -3;
 free(new_p);
 return v1;
 }
 else
 {
 free(p);
 return -2;
 }
}


/* Function: heap_array @ 0x1890 */
int heap_array(int n)
{
 int result; // [rsp+8h] [rbp-18h]
 int i; // [rsp+Ch] [rbp-14h]
 int *arr; // [rsp+10h] [rbp-10h]

 arr = (int *)malloc(4LL * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_struct @ 0x1930 */
int heap_struct(int x)
{
 int result; // [rsp+Ch] [rbp-14h]
 Point *p; // [rsp+10h] [rbp-10h]

 p = (Point *)malloc(8u);
 if ( !p )
 return -1;
 p->x = x;
 p->y = 2 * x;
 result = p->y + p->x;
 free(p);
 return result;
}


/* Function: heap_nested @ 0x19A0 */
int heap_nested(Node **head)
{
 *head = (Node *)malloc(0x10u);
 if ( !*head )
 return -1;
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
 return -2;
 }
}


/* Function: linked_list_heap @ 0x1A60 */
int linked_list_heap()
{
 Node *temp_1; // [rsp+8h] [rbp-48h]
 Node *temp; // [rsp+10h] [rbp-40h]
 int sum; // [rsp+1Ch] [rbp-34h]
 Node *temp_0; // [rsp+20h] [rbp-30h]
 Node *new_node; // [rsp+28h] [rbp-28h]
 int i; // [rsp+34h] [rbp-1Ch]
 Node *current; // [rsp+38h] [rbp-18h]
 Node *head; // [rsp+40h] [rbp-10h]

 head = 0;
 current = 0;
 for ( i = 0; ; ++i )
 {
 if ( i >= 5 )
 {
 sum = 0;
 for ( temp = head; temp; temp = temp->next )
 sum += temp->data;
 while ( head )
 {
 temp_1 = head;
 head = head->next;
 free(temp_1);
 }
 return sum;
 }
 new_node = (Node *)malloc(0x10u);
 if ( !new_node )
 break;
 new_node->data = 10 * i;
 new_node->next = 0;
 if ( head )
 current->next = new_node;
 else
 head = new_node;
 current = new_node;
 }
 while ( head )
 {
 temp_0 = head;
 head = head->next;
 free(temp_0);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1BC0 */
TreeNode * create_tree_node(int data)
{
 TreeNode *node; // [rsp+0h] [rbp-10h]

 node = (TreeNode *)malloc(0x18u);
 if ( node )
 {
 node->data = data;
 node->left = 0;
 node->right = 0;
 }
 return node;
}


/* Function: tree_heap_traversal @ 0x1C10 */
int tree_heap_traversal()
{
 int sum; // [rsp+Ch] [rbp-14h]
 TreeNode *root; // [rsp+10h] [rbp-10h]

 root = create_tree_node(10);
 if ( !root )
 return -1;
 root->left = create_tree_node(20);
 root->right = create_tree_node(30);
 if ( root->left && root->right )
 {
 sum = root->right->data + root->left->data + root->data;
 free(root->left);
 free(root->right);
 free(root);
 return sum;
 }
 else
 {
 if ( root->left )
 free(root->left);
 if ( root->right )
 free(root->right);
 free(root);
 return -2;
 }
}


/* Function: memory_leak @ 0x1D30 */
int memory_leak(int n)
{
 int i; // [rsp+Ch] [rbp-14h]
 int *leak; // [rsp+10h] [rbp-10h]

 leak = (int *)malloc(4LL * n);
 if ( !leak )
 return -1;
 for ( i = 0; i < n; ++i )
 leak[i] = i;
 return leak[n / 2];
}


/* Function: dangling_pointer @ 0x1DC0 */
int dangling_pointer()
{
 int *p; // [rsp+10h] [rbp-10h]

 p = (int *)malloc(4u);
 if ( !p )
 return -1;
 *p = 42;
 printf("value before free: %d\n", *p);
 free(p);
 return *p;
}


/* Function: double_free @ 0x1E40 */
int double_free(int *p)
{
 int *temp; // [rsp+8h] [rbp-18h]

 if ( p )
 return *p;
 temp = (int *)malloc(4u);
 if ( !temp )
 return -1;
 *temp = 10;
 free(temp);
 free(temp);
 return -2;
}


/* Function: heap_overflow @ 0x1EC0 */
int heap_overflow()
{
 int result; // [rsp+8h] [rbp-18h]
 int i; // [rsp+Ch] [rbp-14h]
 int *arr; // [rsp+10h] [rbp-10h]

 arr = (int *)malloc(0x28u);
 if ( !arr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 arr[i] = 100 * i;
 result = *arr;
 free(arr);
 return result;
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
 int status; // [rsp+Ch] [rbp-14h] BYREF
 int result; // [rsp+10h] [rbp-10h]
 pid_t pid; // [rsp+14h] [rbp-Ch]
 Node *head; // [rsp+18h] [rbp-8h] BYREF

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
 v8 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n", v8);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ( !pid )
 {
 result = dangling_pointer();
 printf(aD, (unsigned int)result);
 exit(0);
 }
 if ( pid <= 0 )
 {
 perror(s);
 }
 else
 {
 waitpid(pid, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( (char)((status & 0x7F) + 1) >> 1 > 0 )
 printf(&byte_32DC, status & 0x7F);
 }
 else
 {
 printf(&byte_32B7, (status & 0xFF00) >> 8);
 }
 }
}


/* Function: global_var_access @ 0x2130 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x2150 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x2160 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx < 0xA )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x21A0 */
int static_local(int reset)
{
 if ( !reset )
 return ++static_local_counter;
 static_local_counter = 0;
 return 0;
}


/* Function: call_static_func @ 0x21F0 */
int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: static_helper @ 0x2210 */
static int static_helper(int x)
{
 return 2 * x;
}


/* Function: access_extern_global @ 0x2220 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2240 */
int call_extern_func()
{
    return extern_function(5);
}


/* Function: extern_function @ 0x2B50 */
static int extern_function(int x)
{
    return 3 * x;
}


/* Function: read_const_data @ 0x2250 */
int read_const_data()
{
 return *((char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x2270 */
int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x2280 */
int access_bss_buffer()
{
 return bss_buffer;
}


/* Function: global_struct_access @ 0x2290 */
int global_struct_access()
{
 return dword_60D4 + global_point;
}


/* Function: set_file_static @ 0x22B0 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x22D0 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x22E0 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x2300 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr((unsigned int)x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2340 */
int global_heap_store(int *p)
{
 global_heap_ptr = (long long)p;
 if ( p )
 return *(unsigned int *)global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2380 */
int static_complex_init()
{
 return dword_60F0 + dword_60E8 + complex_init;
}


/* Function: tls_access @ 0x23A0 */
int tls_access(int val)
{
 __writefsdword(0xFFFFFFFC, val);
 return 2 * __readfsdword(0xFFFFFFFC);
}


/* Function: init_order_test @ 0x23C0 */
int init_order_test()
{
 int external_val; // [rsp+Ch] [rbp-4h] BYREF

 external_val = 20;
 return init_depends_on(&external_val);
}


/* Function: init_depends_on @ 0x23E0 */
static int init_depends_on(int *p)
{
 if ( p )
 init_depends_on_static_depends = *p;
 return init_depends_on_static_depends;
}


/* Function: test_static_global @ 0x2410 */
void test_static_global()
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
 int heap_val; // [rsp+Ch] [rbp-4h] BYREF

 printf(asc_3333);
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
 v13 = call_global_callback(5);
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


/* Function: double_value @ 0x25F0 */
static int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x2600 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, (unsigned char)fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x2660 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( !dst || !src || !n )
 return -1;
 memcpy(dst, src, n);
 return *((unsigned int *)dst + (n >> 2) - 1);
}


/* Function: memop_memmove @ 0x26E0 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n < 2 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x2740 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int result; // [rsp+Ch] [rbp-24h]

 if ( !p1 || !p2 || !n )
 return 0;
 result = memcmp(p1, p2, n);
 if ( result > 0 )
 return 1;
 v3 = 0;
 if ( result < 0 )
 return -1;
 return v3;
}


/* Function: memop_bzero @ 0x27D0 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2820 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( !src || !dst || !n )
 return -1;
 bcopy(src, dst, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x2890 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x28D0 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int local; // [rsp+0h] [rbp-14h]

 if ( !flag )
 return -1;
 local = *flag;
 _mm_mfence();
 return *flag + local;
}


/* Function: test_memory_op_functions @ 0x2910 */
void test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 unsigned int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int flag; // [rsp+Ch] [rbp-184h] BYREF
 char unalign_buf[8]; // [rsp+12h] [rbp-17Eh] BYREF
 char bcopy_dst[4]; // [rsp+1Ah] [rbp-176h] BYREF
 char bcopy_src[4]; // [rsp+1Eh] [rbp-172h] BYREF
 char zero_buf[10]; // [rsp+22h] [rbp-16Eh] BYREF
 int cmp_b[3]; // [rsp+2Ch] [rbp-164h] BYREF
 int cmp_a[3]; // [rsp+38h] [rbp-158h] BYREF
 char move_buf[11]; // [rsp+45h] [rbp-14Bh] BYREF
 int int_dst[5]; // [rsp+50h] [rbp-140h] BYREF
 int int_src[5]; // [rsp+70h] [rbp-120h] BYREF
 char buffer[256]; // [rsp+90h] [rbp-100h] BYREF

 printf(asc_3596);
 *(unsigned long long *)int_src = 0x140000000ALL;
 *(unsigned long long *)&int_src[2] = 0x280000001ELL;
 int_src[4] = 50;
 memset(int_dst, 0, sizeof(int_dst));
 v0 = memop_memset(buffer, 0xAu, 65);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(int_dst, int_src, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(move_buf, "HelloWorld");
 v2 = memop_memmove(move_buf, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 *(unsigned long long *)cmp_a = 0x200000001LL;
 cmp_a[2] = 3;
 *(unsigned long long *)cmp_b = 0x200000001LL;
 cmp_b[2] = 4;
 v3 = memop_memcmp(cmp_a, cmp_b, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(zero_buf, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 *(unsigned int *)bcopy_src = 67305985;
 memset(bcopy_dst, 0, sizeof(bcopy_dst));
 v5 = memop_bcopy(bcopy_src, bcopy_dst, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 *(unsigned long long *)unalign_buf = 0x706050403020100LL;
 v6 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 flag = 5;
 v7 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n", v7);
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
