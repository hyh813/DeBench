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
typedef int bool;
#define true 1
#define false 0

/* Helper macros for IDA Pro decompilation */
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define JUMPOUT(x) return

/* va_list and related macros for variadic functions */
typedef __builtin_va_list va_list;
#define va_start(v, l) __builtin_va_start(v, l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v, l) __builtin_va_arg(v, l)

/* Missing function declarations */
extern int printf(const char *format, ...);
extern int vprintf(const char *format, va_list ap);

/* Function implementations */
static int call_weak_fn(void)
{
 return 0;
}

/* Implementation for _printf_chk - wrapper around printf */
static int _printf_chk(int flag, const char *format, ...)
{
 va_list args;
 va_start(args, format);
 int result = vprintf(format, args);
 va_end(args);
 return result;
}

/* External function declaration - provide implementation */
extern int extern_function(int x);

/* Standard library function declarations */
extern int puts(const char *s);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *realloc(void *ptr, size_t size);
extern void *calloc(size_t nmemb, size_t size);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memset(void *s, int c, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int fork(void);
extern void exit(int status);
extern int waitpid(int pid, int *status, int options);
extern void perror(const char *s);
extern char *strcpy(char *dest, const char *src);





/* Forward declarations for structs */
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
int global_counter = 0;
int counter_1 = 0;
extern int extern_global_var;
int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
const char *const_string = "test";
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

/* String declarations */
const char *s = "test_stack_memory";
const char *asc_128CD = "test_heap_memory";
const char *aD = "%d";
const char *aFork_0 = "fork";
const char *byte_12A5A = "error";
const char *byte_12A35 = "exit";
const char *asc_12AA6 = "test_static_global";
const char *asc_12D08 = "test_memory_op_functions";
const char unk_12E14[8] = {0};

/* MEMORY macro for atomic operations - simplified */
#define MEMORY(idx, ...) ((void)0)

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


/* Forward declarations for test functions */
void test_stack_memory(void);
void test_heap_memory(void);
void test_static_global(void);
void test_memory_op_functions(void);



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
void test_heap_memory(void)
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
 _printf_chk(1, byte_12A35, BYTE1(status[0]));
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


/* Memory barrier - no-op for this implementation */
#define _sync_synchronize() ((void)0)


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



























































































































































/* Function: .term_proc @ 0x126E8 */
void term_proc()
{
 ;
}



