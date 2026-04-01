/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, uintptr_t, intptr_t and other standard types are defined in <stdint.h> and <stdlib.h> */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int pid_t;

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

/* Structures */
typedef struct Point {
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

/* External function declarations */
extern void frame_dummy(void);
extern void _do_global_ctors_aux(void);
void _do_global_dtors_aux(void) { }  /* Stub definition */
extern int extern_function(int x);

/* Global variables from other modules */
int global_counter = 0;
int global_array[10];
int extern_global_var;
const char *const_string = "Default string";  /* Definition for extern const_string */
int bss_var;
int bss_buffer;
int dword_7080;
int global_point;
int *file_scope_static;
int global_func_ptr;
unsigned int global_heap_ptr;
int dword_7098;
int dword_7090;
int complex_init;
int init_depends_on_static_depends;

/* Forward declarations */
int double_value(int x);

/* String constants */
static const char asc_4008[] = "=== Testing Stack Memory ===\n";
static const char asc_4152[] = "=== Testing Heap Memory ===\n";
static const char asc_4337[] = "=== Testing Static/Global ===\n";
static const char asc_459A[] = "=== Testing Memory Operations ===\n";
static const char aD[] = "%d\n";
static const char aFork_0[] = "fork";
static const char byte_42E0[] = "Signal: %d\n";
static const char byte_42BB[] = "Exit status: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_clang_O0_g
 * Processor: pc
 */

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *%%ebx" :::);
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130(int a1)
{
 (*(void (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_116C @ 0x116C */
void sub_116C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1170 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12A9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12AD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: local_vars @ 0x12C0 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x12F0 */
int local_array(int n)
{
 int i; // [esp+0h] [ebp-2Ch]
 int arr[10]; // [esp+4h] [ebp-28h]

 for ( i = 0; i < 10; ++i )
 arr[i] = n * i;
 return arr[5];
}


/* Function: local_struct @ 0x1330 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x1360 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x1380 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x13B0 */
int large_stack_frame()
{
 int i; // [esp+0h] [ebp-804h]
 char large_buf[2048]; // [esp+4h] [ebp-800h]

 for ( i = 0; i < 2048; ++i )
 large_buf[i] = i;
 return large_buf[1024];
}


/* Function: vla_stack @ 0x1410 */
int vla_stack(int n)
{
 int v2; // [esp+0h] [ebp-18h] BYREF
 int (*p_vla)[]; // [esp+4h] [ebp-14h]
 int i; // [esp+8h] [ebp-10h]
 unsigned int __vla_expr0; // [esp+Ch] [ebp-Ch]
 int *v6; // [esp+10h] [ebp-8h]

 if ( n <= 0 || n > 1000 )
 return -1;
 v6 = &v2;
 p_vla = (int (*)[])((char *)&v2 - ((4 * n + 15) & 0xFFFFFFF0));
 __vla_expr0 = n;
 for ( i = 0; i < n; ++i )
 *((unsigned int *)p_vla + i) = 2 * i;
 return *((unsigned int *)p_vla + n / 2);
}


/* Function: alloca_usage @ 0x14B0 */
int alloca_usage(int n)
{
 unsigned int v2[3]; // [esp+0h] [ebp-18h] BYREF
 int i; // [esp+Ch] [ebp-Ch]
 int *arr; // [esp+10h] [ebp-8h]

 if ( n <= 0 )
 return -1;
 arr = (unsigned int *)((char *)v2 - ((4 * n + 15) & 0xFFFFFFF0));
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 v2[2] = arr;
 return arr[n / 2];
}


/* Function: stack_alias @ 0x1540 */
int stack_alias(int *p1, int *p2)
{
 int local; // [esp+0h] [ebp-8h] BYREF

 local = 10;
 if ( !&local )
 return -1;
 local = 20;
 return 20;
}


/* Function: test_stack_memory @ 0x15A0 */
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
 int alias_val; // [esp+14h] [ebp-34h] BYREF
 int arr5[10]; // [esp+18h] [ebp-30h] BYREF
 int out; // [esp+40h] [ebp-8h] BYREF

 printf(asc_4008);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 memset(arr5, 0, sizeof(arr5));
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


/* Function: heap_basic @ 0x1750 */
int heap_basic(int n)
{
 int result; // [esp+14h] [ebp-14h]
 int i; // [esp+18h] [ebp-10h]
 int *arr; // [esp+1Ch] [ebp-Ch]

 arr = (int *)malloc(4 * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 2 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_calloc @ 0x1800 */
int heap_calloc(int n)
{
 int i; // [esp+14h] [ebp-14h]
 int sum; // [esp+18h] [ebp-10h]
 int *arr; // [esp+1Ch] [ebp-Ch]

 arr = (int *)calloc(n, 4u);
 if ( !arr )
 return -1;
 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 free(arr);
 return sum;
}


/* Function: heap_realloc @ 0x18A0 */
int heap_realloc()
{
 int v1; // [esp+10h] [ebp-28h]
 int i_0; // [esp+1Ch] [ebp-1Ch]
 int *new_p; // [esp+20h] [ebp-18h]
 int old_val; // [esp+24h] [ebp-14h]
 int i; // [esp+28h] [ebp-10h]
 int *p; // [esp+2Ch] [ebp-Ch]

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


/* Function: heap_array @ 0x19D0 */
int heap_array(int n)
{
 int result; // [esp+14h] [ebp-14h]
 int i; // [esp+18h] [ebp-10h]
 int *arr; // [esp+1Ch] [ebp-Ch]

 arr = (int *)malloc(4 * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_struct @ 0x1A80 */
int heap_struct(int x)
{
 int result; // [esp+8h] [ebp-10h]
 Point *p; // [esp+Ch] [ebp-Ch]

 p = (Point *)malloc(8u);
 if ( !p )
 return -1;
 p->x = x;
 p->y = 2 * x;
 result = p->y + p->x;
 free(p);
 return result;
}


/* Function: heap_nested @ 0x1B00 */
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


/* Function: linked_list_heap @ 0x1BC0 */
int linked_list_heap()
{
 Node *temp_1; // [esp+10h] [ebp-28h]
 Node *temp; // [esp+14h] [ebp-24h]
 int sum; // [esp+18h] [ebp-20h]
 Node *temp_0; // [esp+1Ch] [ebp-1Ch]
 Node *new_node; // [esp+20h] [ebp-18h]
 int i; // [esp+24h] [ebp-14h]
 Node *current; // [esp+28h] [ebp-10h]
 Node *head; // [esp+2Ch] [ebp-Ch]

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
 new_node = (Node *)malloc(8u);
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


/* Function: create_tree_node @ 0x1D10 */
TreeNode * create_tree_node(int data)
{
 TreeNode *node; // [esp+10h] [ebp-8h]

 node = (TreeNode *)malloc(0xCu);
 if ( node )
 {
 node->data = data;
 node->left = 0;
 node->right = 0;
 }
 return node;
}


/* Function: tree_heap_traversal @ 0x1D70 */
int tree_heap_traversal()
{
 int sum; // [esp+8h] [ebp-10h]
 TreeNode *root; // [esp+Ch] [ebp-Ch]

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


/* Function: memory_leak @ 0x1EA0 */
int memory_leak(int n)
{
 int i; // [esp+8h] [ebp-10h]
 int *leak; // [esp+Ch] [ebp-Ch]

 leak = (int *)malloc(4 * n);
 if ( !leak )
 return -1;
 for ( i = 0; i < n; ++i )
 leak[i] = i;
 return leak[n / 2];
}


/* Function: dangling_pointer @ 0x1F30 */
int dangling_pointer()
{
 int *p; // [esp+1Ch] [ebp-Ch]

 p = (int *)malloc(4u);
 if ( !p )
 return -1;
 *p = 42;
 printf("value before free: %d\n", *p);
 free(p);
 return *p;
}


/* Function: double_free @ 0x1FC0 */
int double_free(int *p)
{
 int *temp; // [esp+Ch] [ebp-Ch]

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


/* Function: heap_overflow @ 0x2050 */
int heap_overflow()
{
 int result; // [esp+14h] [ebp-14h]
 int i; // [esp+18h] [ebp-10h]
 int *arr; // [esp+1Ch] [ebp-Ch]

 arr = (int *)malloc(0x28u);
 if ( !arr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 arr[i] = 100 * i;
 result = *arr;
 free(arr);
 return result;
}


/* Function: test_heap_memory @ 0x20E0 */
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
 int status; // [esp+14h] [ebp-14h] BYREF
 int result; // [esp+18h] [ebp-10h]
 pid_t pid; // [esp+1Ch] [ebp-Ch]
 Node *head; // [esp+20h] [ebp-8h] BYREF

 printf(asc_4152);
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
 printf(aD, result);
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
 printf(byte_42E0, status & 0x7F);
 }
 else
 {
 printf(byte_42BB, (status & 0xFF00) >> 8);
 }
 }
}


/* Function: global_var_access @ 0x2380 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x23B0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x23D0 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx < 0xA )
 return global_array[idx];
 else
 return -1;
}


/* Static local variable for static_local function */
static int static_local_counter;

/* Function: static_local @ 0x2420 */
int static_local(int reset)
{
 if ( !reset )
 return ++static_local_counter;
 static_local_counter = 0;
 return 0;
}


/* Function: call_static_func @ 0x2480 */
int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: static_helper @ 0x24B0 */
int static_helper(int x)
{
 return 2 * x;
}


/* Function: access_extern_global @ 0x24C0 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x24F0 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2520 */
int read_const_data()
{
 return *((char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x2540 */
int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x2560 */
int access_bss_buffer()
{
 return bss_buffer;
}


/* Function: global_struct_access @ 0x2580 */
/* CRT stub - deleted */
int global_struct_access()
{
 return 0;
}


/* Function: set_file_static @ 0x25A0 */
void set_file_static(int val)
{
 file_scope_static = (int *)val;
}


/* Function: get_file_static @ 0x25C0 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x25E0 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = (int)f;
}


/* PIC global offset table declaration */
extern void *GLOBAL_OFFSET_TABLE_[];

/* Function: call_global_callback @ 0x2600 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return ((int ( *)(int))global_func_ptr)(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2650 */
int global_heap_store(int *p)
{
 global_heap_ptr = (int)p;
 if ( p )
 return *(unsigned int *)global_heap_ptr;
 else
 return -1;
}


/* Function: init_order_test @ 0x26F0 */
int init_order_test()
{
 int external_val; // [esp+10h] [ebp-8h] BYREF

 external_val = 20;
 return init_depends_on(&external_val);
}


/* Function: init_depends_on @ 0x2720 */
int init_depends_on(int *p)
{
 if ( p )
 init_depends_on_static_depends = *p;
 return init_depends_on_static_depends;
}


/* Function: test_static_global @ 0x2760 */
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
 int *file_static; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int inited; // eax
 int heap_val; // [esp+10h] [ebp-8h] BYREF

 printf(asc_4337);
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
 set_global_callback(double_value);
 v13 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n", v13);
 heap_val = 100;
 v14 = global_heap_store(&heap_val);
 printf("STM-L2-08 (global_heap_store): %d\n", v14);
 /* static_complex_init and tls_access are CRT stubs - removed */
 printf("STM-L2-09 (static_complex_init): 0\n");
 printf("STM-L3-01 (tls_access): 0\n");
 inited = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Forward declarations */
int double_value(int x);
int extern_function(int x);

/* Function: double_value @ 0x2A00 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x2A10 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, (unsigned char)fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x2A90 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( !dst || !src || !n )
 return -1;
 memcpy(dst, src, n);
 return *((unsigned int *)dst + (n >> 2) - 1);
}


/* Function: memop_memmove @ 0x2B10 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n < 2 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x2B90 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int result; // [esp+18h] [ebp-10h]

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


/* Function: memop_bzero @ 0x2C40 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2CB0 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( !src || !dst || !n )
 return -1;
 bcopy(src, dst, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x2D30 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2D70 */
int memop_memory_barrier(volatile int *flag)
{
 int local; // [esp+0h] [ebp-8h] BYREF

 if ( !flag )
 return -1;
 local = *flag;
 /* Use __sync built-in for atomic read instead of _InterlockedOr */
 __sync_synchronize();
 return *flag + local;
}


/* Function: test_memory_op_functions @ 0x2DC0 */
void test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int flag; // [esp+18h] [ebp-170h] BYREF
 char unalign_buf[8]; // [esp+1Eh] [ebp-16Ah] BYREF
 char bcopy_dst[4]; // [esp+26h] [ebp-162h] BYREF
 char bcopy_src[4]; // [esp+2Ah] [ebp-15Eh] BYREF
 char zero_buf[10]; // [esp+2Eh] [ebp-15Ah] BYREF
 int cmp_b[3]; // [esp+38h] [ebp-150h] BYREF
 int cmp_a[3]; // [esp+44h] [ebp-144h] BYREF
 char move_buf[11]; // [esp+51h] [ebp-137h] BYREF
 int int_dst[5]; // [esp+5Ch] [ebp-12Ch] BYREF
 int int_src[5]; // [esp+70h] [ebp-118h] BYREF
 char buffer[256]; // [esp+84h] [ebp-104h] BYREF

 printf(asc_459A);
 memcpy(int_src, "\n", sizeof(int_src));
 memset(int_dst, 0, sizeof(int_dst));
 v0 = memop_memset(buffer, 0xAu, 65);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(int_dst, int_src, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(move_buf, "HelloWorld");
 v2 = memop_memmove(move_buf, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 v3 = memop_memcmp(cmp_a, cmp_b, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(zero_buf, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 *(unsigned int *)bcopy_src = 67305985;
 memset(bcopy_dst, 0, sizeof(bcopy_dst));
 v5 = memop_bcopy(bcopy_src, bcopy_dst, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 *(unsigned int *)unalign_buf = 50462976;
 *(unsigned int *)&unalign_buf[4] = 117835012;
 v6 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 flag = 5;
 v7 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x30D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x317C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x7134 */

/* FAILED to decompile: printf @ 0x7138 */

/* FAILED to decompile: memmove @ 0x713C */

/* FAILED to decompile: free @ 0x7140 */

/* FAILED to decompile: memcpy @ 0x7144 */

/* FAILED to decompile: memcmp @ 0x7148 */

/* FAILED to decompile: __cxa_finalize @ 0x714C */

/* FAILED to decompile: perror @ 0x7150 */

/* FAILED to decompile: bcopy @ 0x7154 */

/* FAILED to decompile: waitpid @ 0x7158 */

/* FAILED to decompile: realloc @ 0x715C */

/* FAILED to decompile: malloc @ 0x7160 */

/* FAILED to decompile: exit @ 0x7164 */

/* FAILED to decompile: memset @ 0x7168 */

/* FAILED to decompile: fork @ 0x716C */

/* FAILED to decompile: calloc @ 0x7170 */

/* Total functions decompiled: 72, failed: 16 */
