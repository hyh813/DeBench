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

/* Additional type definitions for decompiled code */
typedef _Bool bool;
typedef int pid_t;

/* Structure definitions */
struct Point {
    int x;
    int y;
};
typedef struct Point Point;

/* Global variable declarations */
extern int global_counter;
extern int counter_1;
extern int extern_global_var;
extern unsigned char bss_buffer[10];
extern Point global_point;
extern int (*global_func_ptr)(int);
extern int *global_heap_ptr;
extern int extern_function(int x);

/* Global variable definitions */
int global_array[10];
int bss_var;
int file_scope_static;
int complex_init[6] = {1, 2, 3, 4, 5, 6};
int static_depends_0;
int *global_heap_ptr;
int (*global_func_ptr)(int);
int global_counter;
int counter_1;
Point global_point;
unsigned char bss_buffer[10];
const char *const_string = "TestString";

/* String constants */
const char *s = "=== Testing Stack Memory ===";
const char *asc_13890 = "=== Testing Heap Memory ===";
const char *aD = "%d";
const char *aFork_0 = "fork failed";
const char *byte_13A34 = "Child process exited with signal %d\n";
const char *byte_13A0C = "Child process exited with status %d\n";
const char *asc_13A94 = "=== Testing Static/Global Memory ===";
const char *asc_13D18 = "=== Testing Memory Operations ===";

/* Atomic operation macro for decompiled code */
#define MEMORY(x) MEMORY_ ## x
#define MEMORY_(x) x
#define MEMORY_0xFFFF0FC0(addr, oldval, newval) __sync_val_compare_and_swap_4((int*)(addr), (oldval), (newval))
#define MEMORY_0xFFFF0FA0() __sync_synchronize()
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Standard library function declarations */
extern void free(void *ptr);
extern void *malloc(size_t size);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void *memset(void *s, int c, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern char *strcpy(char *dest, const char *src);
extern int printf(const char *fmt, ...);
extern void puts(const char *s);
extern int fork(void);
extern pid_t waitpid(pid_t pid, int *status, int options);
extern void perror(const char *s);
extern void exit(int status);
extern void abort(void);
extern void __sync_synchronize(void);

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node Node;

struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
typedef struct TreeNode TreeNode;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_gcc_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x105A8 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_105B4 @ 0x105B4 */
void sub_105B4()
{
 /* JUMPOUT is decompiler artifact - function is a stub */
}



/* CRT stub function _start removed by preprocessor */




int call_weak_fn()
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


/* Function: local_vars @ 0x107C0 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x10804 */
int local_array(int n)
{
 int i; // [sp+8h] [bp-34h]
 int arr[10]; // [sp+Ch] [bp-30h]

 for ( i = 0; i <= 9; ++i )
 arr[i] = i * n;
 return arr[5];
}


/* Function: local_struct @ 0x10898 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x108D8 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x10910 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x10954 */
int large_stack_frame()
{
 int i; // [sp+0h] [bp-80Ch]
 char large_buf[2048]; // [sp+4h] [bp-808h]

 for ( i = 0; i < 2048; ++i )
 large_buf[i] = i;
 return (unsigned char)large_buf[1024];
}


/* Function: vla_stack @ 0x109EC */
int vla_stack(int n)
{
 int v3; // [sp+0h] [bp-2Ch] BYREF
 int na; // [sp+4h] [bp-28h]
 int i; // [sp+8h] [bp-24h]
 int v6; // [sp+Ch] [bp-20h]
 int (*p_vla)[]; // [sp+10h] [bp-1Ch]

 na = n;
 if ( n <= 0 || na > 1000 )
 return -1;
 v6 = na - 1;
 p_vla = (int (*)[])&v3;
 for ( i = 0; i < na; ++i )
 *((unsigned int *)p_vla + i) = 2 * i;
 return *((unsigned int *)p_vla + na / 2);
}


/* Function: alloca_usage @ 0x10B3C */
int alloca_usage(int n)
{
 int v3; // [sp+0h] [bp-1Ch] BYREF
 int na; // [sp+4h] [bp-18h]
 int i; // [sp+Ch] [bp-10h]
 int *arr; // [sp+10h] [bp-Ch]

 na = n;
 if ( n <= 0 )
 return -1;
 arr = &v3;
 for ( i = 0; i < na; ++i )
 arr[i] = 3 * i;
 return arr[na / 2];
}


/* Function: stack_alias @ 0x10C34 */
int stack_alias(int *p1, int *p2)
{
 int local; // [sp+8h] [bp-Ch] BYREF

 local = 10;
 if ( !&local )
 return -1;
 local = 20;
 return 20;
}


/* Function: test_stack_memory @ 0x10CD4 */
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
 int out; // [sp+4h] [bp-38h] BYREF
 int alias_val; // [sp+8h] [bp-34h] BYREF
 int arr5[10]; // [sp+Ch] [bp-30h] BYREF

 puts(s);
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


/* Function: heap_basic @ 0x10E68 */
int heap_basic(int n)
{
 int i; // [sp+Ch] [bp-10h]
 int *arr; // [sp+10h] [bp-Ch]
 int result; // [sp+14h] [bp-8h]

 arr = (int *)malloc(4 * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 2 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_calloc @ 0x10F24 */
int heap_calloc(int n)
{
 int sum; // [sp+Ch] [bp-10h]
 int i; // [sp+10h] [bp-Ch]
 int *arr; // [sp+14h] [bp-8h]

 arr = (int *)calloc(n, 4u);
 if ( !arr )
 return -1;
 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 free(arr);
 return sum;
}


/* Function: heap_realloc @ 0x10FC8 */
int heap_realloc()
{
 int v1; // r3
 int i; // [sp+0h] [bp-1Ch]
 int i_0; // [sp+4h] [bp-18h]
 int *p; // [sp+8h] [bp-14h]
 int old_val; // [sp+Ch] [bp-10h]
 int *new_p; // [sp+10h] [bp-Ch]
 int result; // [sp+14h] [bp-8h]

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


/* Function: heap_array @ 0x11108 */
int heap_array(int n)
{
 int i; // [sp+Ch] [bp-10h]
 int *arr; // [sp+10h] [bp-Ch]
 int result; // [sp+14h] [bp-8h]

 arr = (int *)malloc(4 * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_struct @ 0x111CC */
int heap_struct(int x)
{
 Point *p; // [sp+8h] [bp-Ch]
 int result; // [sp+Ch] [bp-8h]

 p = (Point *)malloc(8u);
 if ( !p )
 return -1;
 p->x = x;
 p->y = 2 * x;
 result = p->x + p->y;
 free(p);
 return result;
}


/* Function: heap_nested @ 0x1124C */
int heap_nested(Node **head)
{
 Node *v2; // r4

 *head = (Node *)malloc(8u);
 if ( !*head )
 return -1;
 (*head)->data = 10;
 v2 = *head;
 v2->next = (Node *)malloc(8u);
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


/* Function: linked_list_heap @ 0x11318 */
int linked_list_heap()
{
 Node *head; // [sp+0h] [bp-24h]
 Node *current; // [sp+4h] [bp-20h]
 int i; // [sp+8h] [bp-1Ch]
 int sum; // [sp+Ch] [bp-18h]
 Node *temp; // [sp+10h] [bp-14h]
 Node *temp_1; // [sp+14h] [bp-10h]
 Node *new_node; // [sp+18h] [bp-Ch]
 Node *temp_0; // [sp+1Ch] [bp-8h]

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


/* Function: create_tree_node @ 0x11484 */
TreeNode * create_tree_node(int data)
{
 TreeNode *node; // [sp+Ch] [bp-8h]

 node = (TreeNode *)malloc(0xCu);
 if ( node )
 {
 node->data = data;
 node->left = 0;
 node->right = 0;
 }
 return node;
}


/* Function: tree_heap_traversal @ 0x114E4 */
int tree_heap_traversal()
{
 TreeNode *root; // [sp+0h] [bp-Ch]
 int sum; // [sp+4h] [bp-8h]

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


/* Function: memory_leak @ 0x1160C */
int memory_leak(int n)
{
 int i; // [sp+8h] [bp-Ch]
 int *leak; // [sp+Ch] [bp-8h]

 leak = (int *)malloc(4 * n);
 if ( !leak )
 return -1;
 for ( i = 0; i < n; ++i )
 leak[i] = i;
 return leak[n / 2];
}


/* Function: dangling_pointer @ 0x116B4 */
int dangling_pointer()
{
 int *p; // [sp+4h] [bp-10h]

 p = (int *)malloc(4u);
 if ( !p )
 return -1;
 *p = 42;
 printf("value before free: %d\n", *p);
 free(p);
 return *p;
}


/* Function: double_free @ 0x11730 */
int double_free(int *p)
{
 int *temp; // [sp+Ch] [bp-8h]

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


/* Function: heap_overflow @ 0x117A8 */
int heap_overflow()
{
 int i; // [sp+4h] [bp-10h]
 int *arr; // [sp+8h] [bp-Ch]
 int result; // [sp+Ch] [bp-8h]

 arr = (int *)malloc(0x28u);
 if ( !arr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 arr[i] = 100 * i;
 result = *arr;
 free(arr);
 return result;
}


/* Function: test_heap_memory @ 0x11850 */
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
 Node *head; // [sp+4h] [bp-18h] BYREF
 int status; // [sp+8h] [bp-14h] BYREF
 pid_t pid; // [sp+Ch] [bp-10h]
 int result; // [sp+10h] [bp-Ch]

 puts(asc_13890);
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
 printf(&byte_13A34, status & 0x7F);
 }
 else
 {
 printf(&byte_13A0C, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x11AB8 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x11AF0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x11B18 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx < 0xA )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x11B68 */
int static_local(int reset)
{
 if ( !reset )
 return ++counter_1;
 counter_1 = 0;
 return 0;
}


/* Function: static_helper @ 0x11BC8 */
int static_helper(int x)
{
 return 2 * x;
}


/* Function: call_static_func @ 0x11BF0 */
int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: access_extern_global @ 0x11C1C */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x11C44 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x11C60 */
int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x11C98 */
int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x11CBC */
int access_bss_buffer()
{
 return (unsigned char)bss_buffer[0];
}


/* Function: global_struct_access @ 0x11CE0 */
int global_struct_access()
{
 return global_point.x + global_point.y;
}


/* Function: set_file_static @ 0x11D10 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x11D40 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x11D64 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x11D94 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x11DE0 */
int global_heap_store(int *p)
{
 global_heap_ptr = p;
 if ( p )
 return *global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x11E34 */
int static_complex_init()
{
 return complex_init[0] + complex_init[2] + complex_init[4];
}


/* Function: tls_access @ 0x11E70 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_depends_on @ 0x11EB8 */
int init_depends_on(int *p)
{
 if ( p )
 static_depends_0 = *p;
 return static_depends_0;
}


/* Function: init_order_test @ 0x11F00 */
int init_order_test()
{
 int external_val; // [sp+0h] [bp-Ch] BYREF

 external_val = 20;
 return init_depends_on(&external_val);
}


/* Function: test_static_global @ 0x11F60 */
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
 int file_static; // r0
 int v13; // r0
 int v14; // r0
 int v15; // r0
 int v16; // r0
 int inited; // r0
 int heap_val; // [sp+0h] [bp-Ch] BYREF

 puts(asc_13A94);
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


/* Function: memop_memset @ 0x121A4 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x12200 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( !dst || !src || !n )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFC) - 4);
}


/* Function: memop_memmove @ 0x12278 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((unsigned char *)buf + 1);
}


/* Function: memop_memcmp @ 0x122E0 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // [sp+14h] [bp-8h]

 if ( !p1 || !p2 || !n )
 return 0;
 result = memcmp(p1, p2, n);
 if ( result > 0 )
 return 1;
 if ( result >= 0 )
 return 0;
 return -1;
}


/* Function: memop_bzero @ 0x12370 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x123C4 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( !src || !dst || !n )
 return -1;
 memmove(dst, src, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x1242C */
int memop_unaligned_access(const char *buf)
{
 int value; // [sp+8h] [bp-Ch] BYREF

 if ( !buf )
 return -1;
 memcpy(&value, buf + 1, sizeof(value));
 return value;
}


/* Function: memop_memory_barrier @ 0x124A8 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int local; // [sp+Ch] [bp-8h]

 if ( !flag )
 return -1;
 local = *flag;
 __sync_synchronize();
 return *flag + local;
}


/* Function: test_memory_op_functions @ 0x124F8 */
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
 int flag; // [sp+0h] [bp-174h] BYREF
 int cmp_a[3]; // [sp+4h] [bp-170h] BYREF
 int cmp_b[3]; // [sp+10h] [bp-164h] BYREF
 int int_src[5]; // [sp+1Ch] [bp-158h] BYREF
 int int_dst[5]; // [sp+30h] [bp-144h] BYREF
 char bcopy_src[4]; // [sp+44h] [bp-130h] BYREF
 char bcopy_dst[4]; // [sp+48h] [bp-12Ch] BYREF
 char unalign_buf[8]; // [sp+4Ch] [bp-128h] BYREF
 char zero_buf[10]; // [sp+54h] [bp-120h] BYREF
 char move_buf[12]; // [sp+60h] [bp-114h] BYREF
 char buffer[256]; // [sp+6Ch] [bp-108h] BYREF

 puts(asc_13D18);
 int_src[0] = *(unsigned int *)"\n";
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
 *(unsigned int *)unalign_buf = 50462976;
 *(unsigned int *)&unalign_buf[4] = 117835012;
 v6 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 flag = 5;
 v7 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x1272C */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x12750 */
/* extern_function is defined elsewhere - local implementation removed */


/* Function: __sync_fetch_and_add_4 @ 0x12780 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_0xFFFF0FC0(*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x127B8 */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_0xFFFF0FC0(*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x127F0 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_0xFFFF0FC0(*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x12828 */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_0xFFFF0FC0(*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x12860 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_0xFFFF0FC0(*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x12898 */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_0xFFFF0FC0(*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x128D4 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x12934 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x12994 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x129F4 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x12A54 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x12AB4 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x12B18 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x12B74 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x12BD0 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x12C2C */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x12C88 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x12CE4 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x12D44 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY_0xFFFF0FC0(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x12D7C */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY_0xFFFF0FC0(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x12DB4 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY_0xFFFF0FC0(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x12DEC */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY_0xFFFF0FC0(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x12E24 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY_0xFFFF0FC0(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x12E5C */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY_0xFFFF0FC0(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x12E98 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x12F00 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x12F68 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x12FD0 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x13038 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x130A0 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x1310C */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x13170 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x131D4 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x13238 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x1329C */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x13300 */
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
 while ( MEMORY_0xFFFF0FC0(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x13368 */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY_0xFFFF0FC0(a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x133B8 */
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
 if ( !MEMORY_0xFFFF0FC0(*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x13430 */
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
 if ( !MEMORY_0xFFFF0FC0(*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x134A4 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY_0xFFFF0FC0(a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x134D0 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x134EC */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x13514 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY_0xFFFF0FC0(*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x1354C */
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
 while ( MEMORY_0xFFFF0FC0(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x135AC */
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
 while ( MEMORY_0xFFFF0FC0(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x13608 */
int _sync_lock_release_8(unsigned int *a1)
{
 __sync_synchronize();
 *a1 = 0;
 a1[1] = 0;
 return 0;
}


/* Function: __sync_lock_release_4 @ 0x1362C */
int _sync_lock_release_4(unsigned int *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_2 @ 0x1364C */
int _sync_lock_release_2(unsigned short *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_1 @ 0x1366C */
int _sync_lock_release_1(unsigned char *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */



/* Function: .term_proc @ 0x13698 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_memset @ 0x2413C */

/* FAILED to decompile: __imp_free @ 0x24140 */

/* FAILED to decompile: __imp_abort @ 0x24144 */

/* FAILED to decompile: __imp_exit @ 0x24148 */

/* FAILED to decompile: __imp_realloc @ 0x2414C */

/* FAILED to decompile: __imp___libc_start_main @ 0x24150 */

/* FAILED to decompile: __imp_memcmp @ 0x24154 */

/* FAILED to decompile: __imp_waitpid @ 0x24158 */

/* FAILED to decompile: __imp_calloc @ 0x2415C */

/* FAILED to decompile: __imp_fork @ 0x24160 */

/* FAILED to decompile: __imp_memmove @ 0x24164 */

/* FAILED to decompile: __imp_puts @ 0x24168 */

/* FAILED to decompile: __imp_memcpy @ 0x2416C */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x24170 */

/* FAILED to decompile: __imp_perror @ 0x24174 */

/* FAILED to decompile: __imp_printf @ 0x24178 */

/* FAILED to decompile: __imp_malloc @ 0x2417C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x24180 */

/* Total functions decompiled: 117, failed: 18 */
