/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>



/* Type definitions for decompiled code */

/* Compiler intrinsics for x86-64 */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
    unsigned long long value;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned char *)(0 + offset)));
    return value;
}

static inline void __writefsdword(unsigned long long offset, unsigned int value)
{
    __asm__ volatile ("movl %0, %%fs:%1" : : "r" (value), "m" (*(unsigned char *)(0 + offset)));
}

static inline unsigned int __readfsdword(unsigned long long offset)
{
    unsigned int value;
    __asm__ volatile ("movl %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned char *)(0 + offset)));
    return value;
}

/* Atomic operation intrinsics */
#define _InterlockedOr64(ptr, val) __sync_or_and_fetch((volatile long long *)(ptr), (long long)(val))

/* Decompiler macros */
#define JUMPOUT(x) return
#define BYTE1(x) (((x) >> 8) & 0xFF)

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

/* Global variable declarations */
static int global_counter;
static int file_scope_static;
static int (*global_func_ptr)(int);

/* External function definition */
static int extern_function(int x) {
    return x * 2;
}

/* String constant definitions */
static const char *s = "Stack Memory Tests";
static const char *asc_3160 = "Heap Memory Tests";
static const char *aD = "%d\n";
static const char *aFork_0 = "fork failed";
static const char *byte_3300 = "Child killed by signal %d\n";
static const char *byte_32D8 = "Child exited with status %d\n";
static const char *asc_3360 = "Static and Global Memory Tests";
static const char *asc_3610 = "Memory Operation Functions Tests";

static int global_array[10];
static int counter_1;
static int extern_global_var = 0;
static const char const_string[] = "test string";
static int bss_var;
static int bss_buffer[10];
static Point global_point;
static int *global_heap_ptr;
static int complex_init[5];
static int static_depends_0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_gcc_O0_g
 * Processor: pc
 */

/* Function: sub_1020 @ 0x1020 */
static void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
static void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
static void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
static void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
static void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
static void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
static void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
static void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
static void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
static void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
static void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
static void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
static void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
static void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
static void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
static void sub_1110()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1309 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: local_vars @ 0x131B */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1342 */
int local_array(int n)
{
 int i; // [rsp+1Ch] [rbp-34h]
 int arr[10]; // [rsp+20h] [rbp-30h]
 unsigned long long v4; // [rsp+48h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 for ( i = 0; i <= 9; ++i )
 arr[i] = n * i;
 return arr[5];
}


/* Function: local_struct @ 0x139E */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x13C1 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x13E2 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x140E */
int large_stack_frame()
{
 int i; // [rsp+Ch] [rbp-814h]
 char large_buf[2056]; // [rsp+10h] [rbp-810h]
 unsigned long long v3; // [rsp+818h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i <= 2047; ++i )
 large_buf[i] = i;
 return large_buf[1024];
}


/* Function: vla_stack @ 0x1482 */
int vla_stack(int n)
{
 unsigned long long v2; // rax
 void *v3; // rsp
 unsigned char v4[12]; // [rsp+8h] [rbp-40h] BYREF
 int na; // [rsp+14h] [rbp-34h]
 int i; // [rsp+1Ch] [rbp-2Ch]
 long long v7; // [rsp+20h] [rbp-28h]
 int (*p_vla)[]; // [rsp+28h] [rbp-20h]
 unsigned long long v9; // [rsp+30h] [rbp-18h]

 na = n;
 v9 = __readfsqword(0x28u);
 if ( n <= 0 || na > 1000 )
 return -1;
 v7 = na - 1LL;
 v2 = 16 * ((4LL * na + 15) / 0x10uLL);
 while ( v4 != &v4[-(v2 & 0xFFFFFFFFFFFFF000LL)] )
 ;
 v3 = alloca(v2 & 0xFFF);
 if ( (v2 & 0xFFF) != 0 )
 *(unsigned long long *)&v4[(v2 & 0xFFF) - 8] = *(unsigned long long *)&v4[(v2 & 0xFFF) - 8];
 p_vla = (int (*)[])v4;
 for ( i = 0; i < na; ++i )
 *((unsigned int *)p_vla + i) = 2 * i;
 return *((unsigned int *)p_vla + na / 2);
}


/* Function: alloca_usage @ 0x15CD */
int alloca_usage(int n)
{
 unsigned long long v2; // rax
 void *v3; // rsp
 unsigned char v4[12]; // [rsp+8h] [rbp-30h] BYREF
 int na; // [rsp+14h] [rbp-24h]
 int i; // [rsp+24h] [rbp-14h]
 int *arr; // [rsp+28h] [rbp-10h]
 unsigned long long v8; // [rsp+30h] [rbp-8h]

 na = n;
 v8 = __readfsqword(0x28u);
 if ( n <= 0 )
 return -1;
 v2 = 16 * ((4LL * na + 23) / 0x10uLL);
 while ( v4 != &v4[-(v2 & 0xFFFFFFFFFFFFF000LL)] )
 ;
 v3 = alloca(v2 & 0xFFF);
 if ( (v2 & 0xFFF) != 0 )
 *(unsigned long long *)&v4[(v2 & 0xFFF) - 8] = *(unsigned long long *)&v4[(v2 & 0xFFF) - 8];
 arr = (int *)v4;
 for ( i = 0; i < na; ++i )
 arr[i] = 3 * i;
 return arr[na / 2];
}


/* Function: stack_alias @ 0x16F3 */
int stack_alias(int *p1, int *p2)
{
 int local; // [rsp+14h] [rbp-Ch] BYREF
 unsigned long long v4; // [rsp+18h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 local = 10;
 if ( !&local )
 return -1;
 local = 20;
 return 20;
}


/* Function: test_stack_memory @ 0x176B */
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
 int out; // [rsp+8h] [rbp-38h] BYREF
 int alias_val; // [rsp+Ch] [rbp-34h] BYREF
 int arr5[10]; // [rsp+10h] [rbp-30h] BYREF
 unsigned long long v12; // [rsp+38h] [rbp-8h]

 v12 = __readfsqword(0x28u);
 puts(s);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 *(unsigned long long *)arr5 = 0x200000001LL;
 *(unsigned long long *)&arr5[2] = 3;
 memset(&arr5[4], 0, 24);
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


/* Function: heap_basic @ 0x191D */
int heap_basic(int n)
{
 int i; // [rsp+10h] [rbp-10h]
 int result; // [rsp+14h] [rbp-Ch]
 int *arr; // [rsp+18h] [rbp-8h]

 arr = (int *)malloc(4LL * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 2 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_calloc @ 0x19B2 */
int heap_calloc(int n)
{
 int sum; // [rsp+10h] [rbp-10h]
 int i; // [rsp+14h] [rbp-Ch]
 int *arr; // [rsp+18h] [rbp-8h]

 arr = (int *)calloc(n, 4u);
 if ( !arr )
 return -1;
 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 free(arr);
 return sum;
}


/* Function: heap_realloc @ 0x1A2B */
int heap_realloc()
{
 int v1; // eax
 int i; // [rsp+0h] [rbp-20h]
 int i_0; // [rsp+4h] [rbp-1Ch]
 int old_val; // [rsp+8h] [rbp-18h]
 int result; // [rsp+Ch] [rbp-14h]
 int *p; // [rsp+10h] [rbp-10h]
 int *new_p; // [rsp+18h] [rbp-8h]

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


/* Function: heap_array @ 0x1B2D */
int heap_array(int n)
{
 int i; // [rsp+10h] [rbp-10h]
 int result; // [rsp+14h] [rbp-Ch]
 int *arr; // [rsp+18h] [rbp-8h]

 arr = (int *)malloc(4LL * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_struct @ 0x1BC7 */
int heap_struct(int x)
{
 int result; // [rsp+14h] [rbp-Ch]
 Point *p; // [rsp+18h] [rbp-8h]

 p = (Point *)malloc(8u);
 if ( !p )
 return -1;
 p->x = x;
 p->y = 2 * x;
 result = p->x + p->y;
 free(p);
 return result;
}


/* Function: heap_nested @ 0x1C2B */
int heap_nested(Node **head)
{
 Node *v2; // rbx

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


/* Function: linked_list_heap @ 0x1CDA */
int linked_list_heap()
{
 int i; // [rsp+8h] [rbp-38h]
 int sum; // [rsp+Ch] [rbp-34h]
 Node *head; // [rsp+10h] [rbp-30h]
 Node *current; // [rsp+18h] [rbp-28h]
 Node *temp; // [rsp+20h] [rbp-20h]
 Node *temp_1; // [rsp+28h] [rbp-18h]
 Node *new_node; // [rsp+30h] [rbp-10h]
 Node *temp_0; // [rsp+38h] [rbp-8h]

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


/* Function: create_tree_node @ 0x1E00 */
TreeNode * create_tree_node(int data)
{
 TreeNode *node; // [rsp+18h] [rbp-8h]

 node = (TreeNode *)malloc(0x18u);
 if ( node )
 {
 node->data = data;
 node->left = 0;
 node->right = 0;
 }
 return node;
}


/* Function: tree_heap_traversal @ 0x1E4B */
int tree_heap_traversal()
{
 int sum; // [rsp+4h] [rbp-Ch]
 TreeNode *root; // [rsp+8h] [rbp-8h]

 root = create_tree_node(10);
 if ( !root )
 return -1;
 root->left = create_tree_node(20);
 root->right = create_tree_node(30);
 if ( root->left && root->right )
 {
 sum = root->left->data + root->data + root->right->data;
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


/* Function: memory_leak @ 0x1F53 */
int memory_leak(int n)
{
 int i; // [rsp+14h] [rbp-Ch]
 int *leak; // [rsp+18h] [rbp-8h]

 leak = (int *)malloc(4LL * n);
 if ( !leak )
 return -1;
 for ( i = 0; i < n; ++i )
 leak[i] = i;
 return leak[n / 2];
}


/* Function: dangling_pointer @ 0x1FD4 */
int dangling_pointer()
{
 int *p; // [rsp+8h] [rbp-8h]

 p = (int *)malloc(4u);
 if ( !p )
 return -1;
 *p = 42;
 printf("value before free: %d\n", *p);
 free(p);
 return *p;
}


/* Function: double_free @ 0x2042 */
int double_free(int *p)
{
 int *temp; // [rsp+18h] [rbp-8h]

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


/* Function: heap_overflow @ 0x20A6 */
int heap_overflow()
{
 int i; // [rsp+0h] [rbp-10h]
 int result; // [rsp+4h] [rbp-Ch]
 int *arr; // [rsp+8h] [rbp-8h]

 arr = (int *)malloc(0x28u);
 if ( !arr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 arr[i] = 100 * i;
 result = *arr;
 free(arr);
 return result;
}


/* Function: test_heap_memory @ 0x2117 */
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
 int status; // [rsp+4h] [rbp-1Ch] BYREF
 pid_t pid; // [rsp+8h] [rbp-18h]
 int result; // [rsp+Ch] [rbp-14h]
 Node *head[2]; // [rsp+10h] [rbp-10h] BYREF

 head[1] = (Node *)__readfsqword(0x28u);
 puts(asc_3160);
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
 head[0] = 0;
 v5 = heap_nested(head);
 printf("HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( head[0] )
 {
 free(head[0]->next);
 free(head[0]);
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
 printf(&byte_3300, status & 0x7F);
 }
 else
 {
 printf(&byte_32D8, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x237C */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x239B */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x23AD */
int global_array_access(int idx)
{
 if ( (unsigned int)idx < 0xA )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x23E4 */
int static_local(int reset)
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


/* Function: static_helper @ 0x241D */
int static_helper(int x)
{
 return 2 * x;
}


/* Function: call_static_func @ 0x242F */
int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: access_extern_global @ 0x244D */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2460 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2474 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2496 */
int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x24A6 */
int access_bss_buffer()
{
 return bss_buffer[0];
}


/* Function: global_struct_access @ 0x24BA */
int global_struct_access()
{
 return global_point.x + global_point.y;
}


/* Function: set_file_static @ 0x24D2 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x24E9 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x24F9 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x2513 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}

/* Function: global_heap_store @ 0x2545 */
int global_heap_store(int *p)
{
 global_heap_ptr = p;
 if ( p )
 return *global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x257A */
int static_complex_init()
{
 return complex_init[2] + complex_init[0] + complex_init[4];
}


/* Function: tls_access @ 0x259A */
int tls_access(int val)
{
 __writefsdword(0xFFFFFFFC, val);
 return 2 * __readfsdword(0xFFFFFFFC);
}


/* Function: init_depends_on @ 0x25BC */
int init_depends_on(int *p)
{
 if ( p )
 static_depends_0 = *p;
 return static_depends_0;
}


/* Function: init_order_test @ 0x25E3 */
int init_order_test()
{
 int external_val; // [rsp+4h] [rbp-Ch] BYREF
 unsigned long long v2; // [rsp+8h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 external_val = 20;
 return init_depends_on(&external_val);
}


/* Function: test_static_global @ 0x2627 */
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
 int heap_val; // [rsp+4h] [rbp-Ch] BYREF
 unsigned long long v19; // [rsp+8h] [rbp-8h]

 v19 = __readfsqword(0x28u);
 puts(asc_3360);
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


/* Function: memop_memset @ 0x28D4 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x2921 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( !dst || !src || !n )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x2983 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x29DB */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // [rsp+2Ch] [rbp-4h]

 if ( !p1 || !p2 || !n )
 return 0;
 result = memcmp(p1, p2, n);
 if ( result > 0 )
 return 1;
 if ( result >= 0 )
 return 0;
 return -1;
}


/* Function: memop_bzero @ 0x2A4A */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2A93 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( !src || !dst || !n )
 return -1;
 memmove(dst, src, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x2AEA */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2B3D */
int memop_memory_barrier(volatile int *flag)
{
 volatile int local; // [rsp+14h] [rbp-4h]
 signed long long vars0; // [rsp+18h] [rbp+0h] BYREF

 if ( !flag )
 return -1;
 local = *flag;
 _InterlockedOr64(&vars0, 0);
 return *flag + local;
}


/* Function: test_memory_op_functions @ 0x2B73 */
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
 int flag; // [rsp+4h] [rbp-18Ch] BYREF
 int cmp_a[3]; // [rsp+8h] [rbp-188h] BYREF
 int cmp_b[3]; // [rsp+14h] [rbp-17Ch] BYREF
 int int_src[8]; // [rsp+20h] [rbp-170h] BYREF
 int int_dst[5]; // [rsp+40h] [rbp-150h] BYREF
 char bcopy_src[4]; // [rsp+5Bh] [rbp-135h] BYREF
 char bcopy_dst[4]; // [rsp+5Fh] [rbp-131h] BYREF
 char unalign_buf[8]; // [rsp+63h] [rbp-12Dh] BYREF
 char zero_buf[10]; // [rsp+6Bh] [rbp-125h] BYREF
 char move_buf[11]; // [rsp+75h] [rbp-11Bh] BYREF
 char buffer[256]; // [rsp+80h] [rbp-110h] BYREF
 unsigned long long v19; // [rsp+188h] [rbp-8h]

 v19 = __readfsqword(0x28u);
 puts(asc_3610);
 int_src[0] = 10;
 int_src[1] = 20;
 int_src[2] = 30;
 int_src[3] = 40;
 int_src[4] = 50;
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


/* Function: main @ 0x2DFE */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: .term_proc @ 0x2E4C - runtime stub, removed */


/* FAILED to decompile: free @ 0x6178 */

/* FAILED to decompile: __libc_start_main @ 0x6180 */

/* FAILED to decompile: puts @ 0x6188 */

/* FAILED to decompile: __stack_chk_fail @ 0x6190 */

/* FAILED to decompile: printf @ 0x6198 */

/* FAILED to decompile: memset @ 0x61A0 */

/* FAILED to decompile: memcmp @ 0x61A8 */

/* FAILED to decompile: calloc @ 0x61B0 */

/* FAILED to decompile: memcpy @ 0x61B8 */

/* FAILED to decompile: malloc @ 0x61C0 */

/* FAILED to decompile: realloc @ 0x61C8 */

/* FAILED to decompile: memmove @ 0x61D0 */

/* FAILED to decompile: waitpid @ 0x61D8 */

/* FAILED to decompile: perror @ 0x61E0 */

/* FAILED to decompile: exit @ 0x61E8 */

/* FAILED to decompile: fork @ 0x61F0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61F8 */

/* FAILED to decompile: __gmon_start__ @ 0x6208 */

/* Total functions decompiled: 81, failed: 18 */
