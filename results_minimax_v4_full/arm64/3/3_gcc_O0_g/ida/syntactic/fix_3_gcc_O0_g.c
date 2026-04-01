/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t is provided by sys/types.h */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Windows-style macro to get second byte */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* ARM64 register read intrinsic - stub for cross-compilation */
static inline unsigned long long _ReadStatusReg(unsigned int reg) {
    return 0;
}

/* IDA Pro macro for indirect jumps */
#define JUMPOUT(addr) goto *(void *)(addr)

/* ARM64 special registers */
#define TPIDR_EL0 0x5E8

/* ARM memory barrier intrinsic - stub for cross-compilation */
static inline void __dmb(unsigned int val) {
    (void)val;
}

/* Pseudo-register for stack memory access */
char STACK[1];

/* String constants referenced in binary */
char asc_28F8[] = "Stack Memory Tests";
char asc_2A68[] = "Heap Memory Tests";
char asc_2C78[] = "Static/Global Memory Tests";
char asc_2F28[] = "Memory Operation Tests";
char aD[] = "%d\n";
char aFork_0[] = "fork";
char byte_2C10[] = "signal: %d\n";
char byte_2BE8[] = "exit code: %d\n";
char const_string[] = "ConstantData";

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct Point {
    int x;
    int y;
} Point;

/* Global variable declarations - made static to prevent multiple definition */
static int global_counter = 0;
static int global_array[10];
static int extern_global_var;
static int bss_var;
static char bss_buffer[16];
static Point global_point;
static int file_scope_static;
static int (*global_func_ptr)(int);
static int *global_heap_ptr;
static int complex_init[6] = {1, 0, 2, 0, 3, 0};
static int static_depends_0;
static int counter_1;

/* External function declarations */
static int call_weak_fn(void);
static int extern_function(int x);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_gcc_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x9C0 */
static long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_9E0 @ 0x9E0 */
static void sub_9E0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn - weak function that can be overridden */
int call_weak_fn(void) {
    return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0xC54 */
static int double_value(int x)
{
 return 2 * x;
}


/* Function: local_vars @ 0xC6C */
static int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0xCA0 */
static int local_array(int n)
{
 int i; // [xsp+2Ch] [xbp+2Ch]
 int arr[10]; // [xsp+30h] [xbp+30h]

 for ( i = 0; i <= 9; ++i )
 arr[i] = i * n;
 return arr[5];
}


/* Function: local_struct @ 0xD30 */
static int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0xD60 */
static int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0xD88 */
static int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0xDBC */
static int large_stack_frame()
{
 int i; // [xsp+14h] [xbp+14h]
 char large_buf[2048]; // [xsp+18h] [xbp+18h]

 for ( i = 0; i <= 2047; ++i )
 large_buf[i] = i;
 return (unsigned char)large_buf[1024];
}


/* Function: vla_stack @ 0xE48 */
static int vla_stack(int n)
{
 unsigned long long v2[2]; // [xsp+FC00h] [xbp-10h] BYREF
 long long v3; // [xsp+FC10h] [xbp+0h] BYREF
 int na; // [xsp+FC2Ch] [xbp+1Ch]
 int i; // [xsp+FC34h] [xbp+24h]
 long long v6; // [xsp+FC38h] [xbp+28h]
 int (*p_vla)[]; // [xsp+FC40h] [xbp+30h]

 na = n;
 if ( n <= 0 || na > 1000 )
 return -1;
 v6 = na - 1LL;
 while ( v2 != (unsigned long long *)((char *)v2 - ((16 * ((unsigned long long)(4LL * na + 15) >> 4)) & 0xFFFFFFFFFFFF0000LL)) )
 ;
 v2[0] = 0;
 if ( (unsigned short)(16 * ((unsigned long long)(4LL * na + 15) >> 4)) >= 0x400uLL )
 STACK[0x10000] = 0;
 p_vla = (int (*)[])&v3;
 for ( i = 0; i < na; ++i )
 *((unsigned int *)p_vla + i) = 2 * i;
 return *((unsigned int *)p_vla + na / 2);
}


/* Function: alloca_usage @ 0xFCC */
static int alloca_usage(int n)
{
 unsigned long long v2[2]; // [xsp+FC00h] [xbp-10h] BYREF
 long long v3; // [xsp+FC10h] [xbp+0h] BYREF
 int na; // [xsp+FC2Ch] [xbp+1Ch]
 int i; // [xsp+FC3Ch] [xbp+2Ch]
 int *arr; // [xsp+FC40h] [xbp+30h]

 na = n;
 if ( n <= 0 )
 return -1;
 while ( v2 != (unsigned long long *)((char *)v2 - ((16 * ((unsigned long long)(4LL * na + 15) >> 4)) & 0xFFFFFFFFFFFF0000LL)) )
 ;
 v2[0] = 0;
 if ( (unsigned short)(16 * ((unsigned long long)(4LL * na + 15) >> 4)) >= 0x400uLL )
 STACK[0x10000] = 0;
 arr = (int *)&v3;
 for ( i = 0; i < na; ++i )
 arr[i] = 3 * i;
 return arr[na / 2];
}


/* Function: stack_alias @ 0x1104 */
static int stack_alias(int *p1, int *p2)
{
 int local; // [xsp+24h] [xbp+24h] BYREF

 local = 10;
 if ( !&local )
 return -1;
 local = 20;
 return 20;
}


/* Function: test_stack_memory @ 0x11A8 */
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
 int out; // [xsp+18h] [xbp+18h] BYREF
 int alias_val; // [xsp+1Ch] [xbp+1Ch] BYREF
 int arr5[10]; // [xsp+20h] [xbp+20h] BYREF

 puts(asc_28F8);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 memset(&arr5[3], 0, 28);
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


/* Function: heap_basic @ 0x12FC */
static int heap_basic(int n)
{
 int i; // [xsp+20h] [xbp+20h]
 int result; // [xsp+24h] [xbp+24h]
 int *arr; // [xsp+28h] [xbp+28h]

 arr = (int *)malloc(4LL * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 2 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_calloc @ 0x13A8 */
static int heap_calloc(int n)
{
 int sum; // [xsp+20h] [xbp+20h]
 int i; // [xsp+24h] [xbp+24h]
 int *arr; // [xsp+28h] [xbp+28h]

 arr = (int *)calloc(n, 4u);
 if ( !arr )
 return -1;
 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 free(arr);
 return sum;
}


/* Function: heap_realloc @ 0x1434 */
static int heap_realloc()
{
 int v1; // w0
 int i; // [xsp+10h] [xbp+10h]
 int i_0; // [xsp+14h] [xbp+14h]
 int old_val; // [xsp+18h] [xbp+18h]
 int result; // [xsp+1Ch] [xbp+1Ch]
 int *p; // [xsp+20h] [xbp+20h]
 int *new_p; // [xsp+28h] [xbp+28h]

 p = (int *)malloc(0x14u);
 if ( !p )
 return -1;
 for ( i = 0; i <= 4; ++i )
 p[i] = i + 1;
 old_val = p[2];
 new_p = (int *)realloc(p, 0x28u);
 if ( new_p )
 {
 for ( i_0 = 5; i_0 <= 9; ++i_0 )
 new_p[i_0] = 10 * i_0;
 if ( old_val == new_p[2] )
 v1 = new_p[5];
 else
 v1 = -3;
 result = v1;
 free(new_p);
 return result;
 }
 else
 {
 free(p);
 return -2;
 }
}


/* Function: heap_array @ 0x1564 */
static int heap_array(int n)
{
 int i; // [xsp+20h] [xbp+20h]
 int result; // [xsp+24h] [xbp+24h]
 int *arr; // [xsp+28h] [xbp+28h]

 arr = (int *)malloc(4LL * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_struct @ 0x1618 */
static int heap_struct(int x)
{
 int result; // [xsp+24h] [xbp+24h]
 Point *p; // [xsp+28h] [xbp+28h]

 p = (Point *)malloc(8u);
 if ( !p )
 return -1;
 p->x = x;
 p->y = 2 * x;
 result = p->x + p->y;
 free(p);
 return result;
}


/* Function: heap_nested @ 0x168C */
static int heap_nested(Node **head)
{
 Node *v2; // x19

 *head = (Node *)malloc(0x10u);
 if ( !*head )
 return -1;
 (*head)->data = 10;
 v2 = *head;
 v2->next = (Node *)malloc(0x10u);
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


/* Function: linked_list_heap @ 0x1748 */
static int linked_list_heap()
{
 int i; // [xsp+18h] [xbp+18h]
 int sum; // [xsp+1Ch] [xbp+1Ch]
 Node *head; // [xsp+20h] [xbp+20h]
 Node *current; // [xsp+28h] [xbp+28h]
 Node *temp; // [xsp+30h] [xbp+30h]
 Node *temp_1; // [xsp+38h] [xbp+38h]
 Node *new_node; // [xsp+40h] [xbp+40h]
 Node *temp_0; // [xsp+48h] [xbp+48h]

 head = 0;
 current = 0;
 for ( i = 0; ; ++i )
 {
 if ( i > 4 )
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


/* Function: create_tree_node @ 0x1894 */
static TreeNode * create_tree_node(int data)
{
 TreeNode *node; // [xsp+28h] [xbp+28h]

 node = (TreeNode *)malloc(0x18u);
 if ( node )
 {
 node->data = data;
 node->left = 0;
 node->right = 0;
 }
 return node;
}


/* Function: tree_heap_traversal @ 0x18E0 */
static int tree_heap_traversal()
{
 int sum; // [xsp+14h] [xbp+14h]
 TreeNode *root; // [xsp+18h] [xbp+18h]

 root = create_tree_node(10);
 if ( !root )
 return -1;
 root->left = create_tree_node(20);
 root->right = create_tree_node(30);
 if ( root->left && root->right )
 {
 sum = root->data + root->left->data + root->right->data;
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


/* Function: memory_leak @ 0x19F0 */
static int memory_leak(int n)
{
 int i; // [xsp+24h] [xbp+24h]
 int *leak; // [xsp+28h] [xbp+28h]

 leak = (int *)malloc(4LL * n);
 if ( !leak )
 return -1;
 for ( i = 0; i < n; ++i )
 leak[i] = i;
 return leak[n / 2];
}


/* Function: dangling_pointer @ 0x1A88 */
static int dangling_pointer()
{
 int *p; // [xsp+18h] [xbp+18h]

 p = (int *)malloc(4u);
 if ( !p )
 return -1;
 *p = 42;
 printf("value before free: %d\n", *p);
 free(p);
 return *p;
}


/* Function: double_free @ 0x1AF8 */
static int double_free(int *p)
{
 int *temp; // [xsp+28h] [xbp+28h]

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


/* Function: heap_overflow @ 0x1B64 */
static int heap_overflow()
{
 int i; // [xsp+10h] [xbp+10h]
 int result; // [xsp+14h] [xbp+14h]
 int *arr; // [xsp+18h] [xbp+18h]

 arr = (int *)malloc(0x28u);
 if ( !arr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 arr[i] = 100 * i;
 result = *arr;
 free(arr);
 return result;
}


/* Function: test_heap_memory @ 0x1BEC */
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
 int status; // [xsp+14h] [xbp+14h] BYREF
 pid_t pid; // [xsp+18h] [xbp+18h]
 int result; // [xsp+1Ch] [xbp+1Ch]
 Node *head; // [xsp+20h] [xbp+20h] BYREF

 puts(asc_2A68);
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
 perror(aFork_0);
 }
 else
 {
 waitpid(pid, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( (char)((status & 0x7F) + 1) >> 1 > 0 )
 printf(byte_2C10, status & 0x7F);
 }
 else
 {
 printf(byte_2BE8, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x1E14 */
static int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1E40 */
static int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1E54 */
static int global_array_access(int idx)
{
 if ( (unsigned int)idx < 0xA )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x1E94 */
static int static_local(int reset)
{
 if ( reset )
 {
 counter_1 = 0;
 return 0;
 }
 else
 {
 return ++counter_1;
 }
}


/* Function: static_helper @ 0x1EEC */
static int static_helper(int x)
{
 return 2 * x;
}


/* Function: call_static_func @ 0x1F04 */
static int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: access_extern_global @ 0x1F24 */
static int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1F38 */
static int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1F50 */
static int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x1F74 */
static int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x1F84 */
static int access_bss_buffer()
{
  return (unsigned char)bss_buffer[0];
}


/* Function: global_struct_access @ 0x1F94 */
static int global_struct_access()
{
 return global_point.x + global_point.y;
}


/* Function: set_file_static @ 0x1FB4 */
static void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x1FD8 */
static int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1FE8 */
static void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x200C */
static int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2050 */
static int global_heap_store(int *p)
{
 global_heap_ptr = p;
 if ( p )
 return *global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x209C */
static int static_complex_init()
{
 return complex_init[0] + complex_init[2] + complex_init[4];
}


/* Function: tls_access @ 0x20CC */
static int tls_access(int val)
{
 *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 16) = val;
 return 2 * *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 16);
}


/* Function: init_depends_on @ 0x2104 */
static int init_depends_on(int *p)
{
 if ( p )
 static_depends_0 = *p;
 return static_depends_0;
}


/* Function: init_order_test @ 0x2140 */
static int init_order_test()
{
 int external_val; // [xsp+14h] [xbp+14h] BYREF

 external_val = 20;
 return init_depends_on(&external_val);
}


/* Function: test_static_global @ 0x219C */
static void test_static_global(void)
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
 int heap_val; // [xsp+14h] [xbp+14h] BYREF

 puts(asc_2C78);
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


/* Function: memop_memset @ 0x2398 */
static int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x23EC */
static int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( !dst || !src || !n )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x245C */
static int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((unsigned char *)buf + 1);
}


/* Function: memop_memcmp @ 0x24C0 */
static int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // [xsp+3Ch] [xbp+3Ch]

 if ( !p1 || !p2 || !n )
 return 0;
 result = memcmp(p1, p2, n);
 if ( result > 0 )
 return 1;
 if ( result >= 0 )
 return 0;
 return -1;
}


/* Function: memop_bzero @ 0x2548 */
static int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2598 */
static int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( !src || !dst || !n )
 return -1;
 memmove(dst, src, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x25F8 */
static int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2670 */
static int memop_memory_barrier(volatile int *flag)
{
 volatile int local; // [xsp+14h] [xbp-4h]

 if ( !flag )
 return -1;
 local = *flag;
 __dmb(0xBu);
 return *flag + local;
}


/* Function: test_memory_op_functions @ 0x26B4 */
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
 int flag; // [xsp+1Ch] [xbp+1Ch] BYREF
 int cmp_a[3]; // [xsp+20h] [xbp+20h] BYREF
 int cmp_b[3]; // [xsp+30h] [xbp+30h] BYREF
 int int_src[5]; // [xsp+40h] [xbp+40h] BYREF
 int int_dst[5]; // [xsp+58h] [xbp+58h] BYREF
 char bcopy_src[4]; // [xsp+70h] [xbp+70h] BYREF
 char bcopy_dst[4]; // [xsp+78h] [xbp+78h] BYREF
 char unalign_buf[8]; // [xsp+80h] [xbp+80h] BYREF
 char zero_buf[10]; // [xsp+88h] [xbp+88h] BYREF
 char move_buf[16]; // [xsp+98h] [xbp+98h] BYREF
 char buffer[256]; // [xsp+A8h] [xbp+A8h] BYREF

 puts(asc_2F28);
 *(unsigned long long *)int_src = *(unsigned long long *)"\n";
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
 *(unsigned int *)bcopy_dst = 0;
 v5 = memop_bcopy(bcopy_src, bcopy_dst, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 *(unsigned long long *)unalign_buf = 0x706050403020100LL;
 v6 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 flag = 5;
 v7 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x2898 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x28BC */
static int extern_function(int x)
{
 return 3 * x;
}


/* Function: .term_proc @ 0x28DC */
static void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x14170 */

/* FAILED to decompile: memmove @ 0x14178 */

/* FAILED to decompile: exit @ 0x14180 */

/* FAILED to decompile: __libc_start_main @ 0x14188 */

/* FAILED to decompile: perror @ 0x14190 */

/* FAILED to decompile: __cxa_finalize @ 0x14198 */

/* FAILED to decompile: fork @ 0x141A0 */

/* FAILED to decompile: malloc @ 0x141A8 */

/* FAILED to decompile: memset @ 0x141B0 */

/* FAILED to decompile: calloc @ 0x141B8 */

/* FAILED to decompile: realloc @ 0x141C0 */

/* FAILED to decompile: __stack_chk_fail @ 0x141C8 */

/* FAILED to decompile: abort @ 0x141D8 */

/* FAILED to decompile: puts @ 0x141E0 */

/* FAILED to decompile: memcmp @ 0x141E8 */

/* FAILED to decompile: free @ 0x141F0 */

/* FAILED to decompile: printf @ 0x141F8 */

/* FAILED to decompile: waitpid @ 0x14200 */

/* FAILED to decompile: __gmon_start__ @ 0x14210 */

/* Total functions decompiled: 67, failed: 19 */
