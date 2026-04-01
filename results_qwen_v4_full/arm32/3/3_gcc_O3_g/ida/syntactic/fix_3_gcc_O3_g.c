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

/* Forward declarations for structs */
typedef struct Node Node;
typedef struct TreeNode TreeNode;

struct Node {
 int data;
 Node *next;
};

struct TreeNode {
 int data;
 TreeNode *left;
 TreeNode *right;
};

/* Global variables */
static int global_counter = 0;
static int counter_1 = 0;
static int extern_global_var = 0;
static int file_scope_static = 0;
static int (*global_func_ptr)(int) = 0;
static const char *const_string = "test";
static int global_array[10] = {0};

/* External function declarations */

/* Definition for extern_function */
static int extern_function(int x) { return x * 2; }

/* Standard library function declarations */
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern void *memset(void *s, int c, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern char *strcpy(char *dest, const char *src);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void exit(int status);
extern int fork(void);
extern int waitpid(int pid, int *status, int options);
extern void perror(const char *s);

/* Stub for _sync_synchronize (GCC builtin for memory barrier) */
static void _sync_synchronize(void) { }

/* Stub for _printf_chk (glibc fortified printf) */
static int _printf_chk(int flag, const char *format, ...) { return printf(format); }

/* Stub for call_weak_fn (CRT weak function) */
static int call_weak_fn(void) { return 0; }

/* String constants */
const char *s = "Stack Memory Tests";
const char *asc_12AD8 = "Heap Memory Tests";
const char *asc_12CCC = "Static/Global Memory Tests";
const char *asc_12F50 = "Memory Operation Tests";
const char *byte_12C5C = "error";
const char *byte_12C34 = "exit status: %d";
const char *aD = "%d";
const char *aFork_0 = "fork";

/* BYTE1 macro - extract second byte */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* JUMPOUT macro - stub for decompiler artifact */
#define JUMPOUT(x) return

/* MEMORY macro for atomic operations - stub implementation */
#define MEMORY(addr) memory_stub

static int memory_stub(int a, int b, int c) { return 0; }













/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_gcc_O3_g
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
static int double_value(int x)
{
 return 2 * x;
}


/* Function: alloca_usage_0 @ 0x107A0 */
static int alloca_usage_0(int n)
{
 return 15;
}


/* Function: local_vars @ 0x107A8 */
static int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x107B4 */
static int local_array(int n)
{
 return 5 * n;
}


/* Function: local_struct @ 0x107BC */
static int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x107C4 */
static int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x107D4 */
static int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x107E0 */
static int large_stack_frame()
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


/* Function: vla_stack @ 0x10850 */
static int vla_stack(int n)
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


/* Function: alloca_usage @ 0x108E0 */
static int alloca_usage(int n)
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


/* Function: stack_alias @ 0x10970 */
static int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x10978 */
void test_stack_memory()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0

 puts(s);
 _printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 _printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 _printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 _printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 _printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 _printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 v1 = _printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v2 = alloca_usage_0(v1);
 _printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v2);
 _printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10A48 */
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


/* Function: heap_calloc @ 0x10AA4 */
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
 while ( &v2[4 * n - 4] != v4 );
 }
 free(v2);
 return v3;
}


/* Function: heap_realloc @ 0x10AF8 */
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
 v0[4] = 5;
 v0[2] = 3;
 v0[3] = 4;
 *v0 = 1;
 v0[1] = 2;
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


/* Function: heap_array @ 0x10B74 */
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


/* Function: heap_struct @ 0x10BD8 */
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


/* Function: heap_nested @ 0x10C08 */
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


/* Function: linked_list_heap @ 0x10C74 */
int linked_list_heap()
{
 int *v0; // r0
 int v1; // r5
 int *v2; // r6
 int *i; // r4
 int *v4; // r0
 int v5; // r5
 int *v7; // r3
 int v8; // r2
 int *v9; // r0

 v0 = (int *)malloc(8u);
 v1 = 0;
 v2 = 0;
 for ( i = 0; v0; v0 = (int *)malloc(8u) )
 {
 *v0 = v1;
 v0[1] = 0;
 v1 += 10;
 if ( i )
 {
 v2[1] = (int)v0;
 if ( v1 == 50 )
 goto LABEL_10;
 }
 else
 {
 i = v0;
 if ( v1 == 50 )
 {
LABEL_10:
 v7 = i;
 v5 = 0;
 do
 {
 v8 = *v7;
 v7 = (int *)v7[1];
 v5 += v8;
 }
 while ( v7 );
 do
 {
 v9 = i;
 i = (int *)i[1];
 free(v9);
 }
 while ( i );
 return v5;
 }
 }
 v2 = v0;
 }
 while ( i )
 {
 v4 = i;
 i = (int *)i[1];
 free(v4);
 }
 return -1;
}


/* Function: create_tree_node @ 0x10D2C */
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


/* Function: tree_heap_traversal @ 0x10D54 */
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


/* Function: memory_leak @ 0x10DDC */
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


/* Function: dangling_pointer @ 0x10E2C */
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


/* Function: double_free @ 0x10E6C */
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


/* Function: heap_overflow @ 0x10EAC */
int heap_overflow()
{
 void *v0; // r0

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 free(v0);
 return 0;
}


/* Function: test_heap_memory @ 0x10ED4 */
void test_heap_memory()
{
 unsigned int *v0; // r0
 int v1; // r2
 unsigned int *v2; // r0
 int v3; // r4
 int v4; // r0
 unsigned int *v5; // r0
 int v6; // r2
 void *v7; // r0
 int v8; // r2
 void **v9; // r4
 unsigned int *v10; // r0
 int v11; // r2
 int *v12; // r0
 int v13; // r5
 int *v14; // r6
 int *i; // r4
 int *v16; // r0
 int v17; // r5
 int v18; // r0
 unsigned int *v19; // r0
 int v20; // r2
 int v21; // r0
 int *v22; // r3
 int v23; // r2
 int *v24; // r0
 unsigned int *v25; // r4
 int v26; // r2
 int status; // [sp+0h] [bp-20h] BYREF

 puts(asc_12AD8);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 v0[1] = 2;
 v0[2] = 4;
 v0[3] = 6;
 v0[4] = 8;
 v0[6] = 12;
 v0[5] = 10;
 v0[9] = 18;
 v0[7] = 14;
 v0[8] = 16;
 free(v0);
 v1 = 10;
 }
 else
 {
 v1 = -1;
 }
 _printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
 v2 = calloc(5u, 4u);
 if ( v2 )
 {
 v3 = *v2 + v2[1] + v2[2] + v2[3] + v2[4];
 free(v2);
 }
 else
 {
 v3 = -1;
 }
 _printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v3);
 v4 = heap_realloc();
 _printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v4);
 v5 = malloc(0x28u);
 if ( v5 )
 {
 v5[1] = 3;
 v5[2] = 6;
 v5[3] = 9;
 v5[4] = 12;
 v5[6] = 18;
 v5[5] = 15;
 v5[9] = 27;
 v5[7] = 21;
 v5[8] = 24;
 free(v5);
 v6 = 15;
 }
 else
 {
 v6 = -1;
 }
 _printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v6);
 v7 = malloc(8u);
 if ( v7 )
 {
 free(v7);
 v8 = 15;
 }
 else
 {
 v8 = -1;
 }
 _printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
 v9 = (void **)malloc(8u);
 if ( v9 )
 {
 v10 = malloc(8u);
 v9[1] = v10;
 if ( v10 )
 {
 v11 = 0;
 *v10 = 20;
 v10[1] = 0;
 }
 else
 {
 free(v9);
 v11 = -2;
 }
 _printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v11);
 free(v9[1]);
 free(v9);
 }
 else
 {
 _printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v12 = (int *)malloc(8u);
 v13 = 0;
 v14 = 0;
 for ( i = 0; v12; v12 = (int *)malloc(8u) )
 {
 *v12 = v13;
 v12[1] = 0;
 v13 += 10;
 if ( i )
 {
 v14[1] = (int)v12;
 if ( v13 == 50 )
 goto LABEL_29;
 }
 else
 {
 i = v12;
 if ( v13 == 50 )
 {
LABEL_29:
 v22 = i;
 v17 = 0;
 do
 {
 v23 = *v22;
 v22 = (int *)v22[1];
 v17 += v23;
 }
 while ( v22 );
 do
 {
 v24 = i;
 i = (int *)i[1];
 free(v24);
 }
 while ( i );
 goto LABEL_20;
 }
 }
 v14 = v12;
 }
 while ( i )
 {
 v16 = i;
 i = (int *)i[1];
 free(v16);
 }
 v17 = -1;
LABEL_20:
 _printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v17);
 v18 = tree_heap_traversal();
 _printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v18);
 v19 = malloc(0x14u);
 if ( v19 )
 {
 v19[2] = 2;
 v19[3] = 3;
 v20 = 2;
 *v19 = 0;
 v19[1] = 1;
 v19[4] = 4;
 }
 else
 {
 v20 = -1;
 }
 _printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v20);
 _printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v21 = fork();
 if ( !v21 )
 {
 v25 = malloc(4u);
 if ( v25 )
 {
 _printf_chk(1, "value before free: %d\n", 42);
 free(v25);
 v26 = *v25;
 }
 else
 {
 v26 = -1;
 }
 _printf_chk(1, aD, v26);
 exit(0);
 }
 if ( v21 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v21, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( ((status & 0x7F) + 1) << 24 >= 0x2000000 )
 _printf_chk(1, byte_12C5C);
 }
 else
 {
 _printf_chk(1, byte_12C34, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x11330 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x11348 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1135C */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x11374 */
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


/* Function: call_static_func @ 0x11398 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x113A4 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x113B8 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x113C0 */
int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x113D8 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x113E0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x113E8 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x113F0 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x11400 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x11410 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x11420 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x11440 */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x11450 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x11458 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x11460 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x11468 */
void test_static_global()
{
 int v0; // r0

 puts(asc_12CCC);
 _printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
 _printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 _printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 _printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 _printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 _printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 _printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 _printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
 _printf_chk(1, "STM-L2-03 (read_const_data): %d\n", *((unsigned char *)const_string + 4) + 42);
 _printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 _printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 _printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 _printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 _printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 _printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 _printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 _printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 _printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x1163C */
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


/* Function: memop_memcpy @ 0x11670 */
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


/* Function: memop_memmove @ 0x116B8 */
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


/* Function: memop_memcmp @ 0x116F0 */
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


/* Function: memop_bzero @ 0x1173C */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x11764 */
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


/* Function: memop_unaligned_access @ 0x117A8 */
int memop_unaligned_access(const char *buf)
{
 int value; // [sp+0h] [bp-10h] BYREF

 if ( !buf )
 return -1;
 memcpy(&value, buf + 1, sizeof(value));
 return value;
}


/* Function: memop_memory_barrier @ 0x1180C */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v2; // r5

 if ( !flag )
 return -1;
 v2 = *flag;
 _sync_synchronize();
 return *flag + v2;
}


/* Function: test_memory_op_functions @ 0x11834 */
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

 puts(asc_12F50);
 memset(buffer, 65, 10);
 _printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 _printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy(move_buf, "HelloWorld");
 memmove(&move_buf[1], move_buf, 9u);
 _printf_chk(1, "MEMOP-L2-03: %c\n", 72);
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
 _printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 memset(zero_buf, 0, sizeof(zero_buf));
 _printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 _printf_chk(1, "MEMOP-L2-06: %d\n", 1);
v2 = _printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 _sync_synchronize();
 _printf_chk(1, "MEMOP-L3-02: %d\n", 10);
}


/* Function: __sync_fetch_and_add_4 @ 0x119D4 */
static int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_stub(*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x11A0C */
static int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_stub(*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x11A44 */
static int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_stub(*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x11A7C */
static int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_stub(*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x11AB4 */
static int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_stub(*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x11AEC */
static int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( memory_stub(*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x11B28 */
static int _sync_fetch_and_add_2(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x11B88 */
static int _sync_fetch_and_sub_2(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x11BE8 */
static int _sync_fetch_and_or_2(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x11C48 */
static int _sync_fetch_and_and_2(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x11CA8 */
static int _sync_fetch_and_xor_2(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11D08 */
static int _sync_fetch_and_nand_2(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11D6C */
static int _sync_fetch_and_add_1(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11DC8 */
static int _sync_fetch_and_sub_1(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x11E24 */
static int _sync_fetch_and_or_1(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11E80 */
static int _sync_fetch_and_and_1(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x11EDC */
static int _sync_fetch_and_xor_1(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x11F38 */
static int _sync_fetch_and_nand_1(int a1, int a2)
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
 while ( memory_stub(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11F98 */
static int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( memory_stub(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11FD0 */
static int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( memory_stub(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x12008 */
static int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( memory_stub(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x12040 */
static int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( memory_stub(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x12078 */
static int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( memory_stub(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x120B0 */
static int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( memory_stub(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x120EC */
static int _sync_add_and_fetch_2(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x12154 */
static int _sync_sub_and_fetch_2(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x121BC */
static int _sync_or_and_fetch_2(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x12224 */
static int _sync_and_and_fetch_2(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x1228C */
static int _sync_xor_and_fetch_2(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x122F4 */
static int _sync_nand_and_fetch_2(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x12360 */
static int _sync_add_and_fetch_1(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x123C4 */
static int _sync_sub_and_fetch_1(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x12428 */
static int _sync_or_and_fetch_1(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x1248C */
static int _sync_and_and_fetch_1(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x124F0 */
static int _sync_xor_and_fetch_1(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x12554 */
static int _sync_nand_and_fetch_1(int a1, int a2)
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
 while ( memory_stub(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x125BC */
static int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !memory_stub(a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x1260C */
static int _sync_val_compare_and_swap_2(int a1, int a2, int a3)
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
 if ( !memory_stub(*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x12684 */
static int _sync_val_compare_and_swap_1(int a1, int a2, int a3)
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
 if ( !memory_stub(*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x126F8 */
static bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return memory_stub(a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x12724 */
static bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x12740 */
static bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x12768 */
static int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( memory_stub(*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x127A0 */
static int _sync_lock_test_and_set_2(int a1, int a2)
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
 while ( memory_stub(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x12800 */
static int _sync_lock_test_and_set_1(int a1, int a2)
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
 while ( memory_stub(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x1285C */
static int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = memory_stub(*a1, 0, a1);
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x12880 */
static int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = memory_stub(*a1, 0, a1);
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x128A0 */
static int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = memory_stub(*a1, 0, a1);
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x128C0 */
static int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = memory_stub(*a1, 0, a1);
 *a1 = 0;
 return result;
}


/* Function: .term_proc @ 0x128E0 */
void term_proc()
{
 ;
}



