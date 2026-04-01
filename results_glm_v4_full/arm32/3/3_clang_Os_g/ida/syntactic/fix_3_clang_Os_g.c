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
typedef _Bool bool;

/* Standard library headers for required functions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Structure definitions */
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

/* Stub for external function called in test_static_global */
static int extern_function(int x) {
    return 5;  /* Simple stub returning the input */
}

/* Function prototypes for atomic operations stub */





/* Macro for unconditional jump (decompilation artifact) */
#define JUMPOUT(x) do {} while(0)

/* Macro for byte extraction */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Memory copy function stub */
void qmemcpy(void *dst, const void *src, size_t n)
{
    memcpy(dst, src, n);
}

/* Full memory barrier - using compiler builtin */
#define _sync_synchronize() __sync_synchronize()

/* Global variable declarations */
int global_counter = 0;
int static_local_counter = 0;
static int *file_scope_static;
int (*global_func_ptr)(int);
int *global_heap_ptr;
const char *asc_2CFE = "=== Stack Memory Tests ===";
const char *asc_2D1C = "=== Heap Memory Tests ===";
const char *asc_2D3A = "=== Static and Global Variable Tests ===";
const char *asc_2D5E = "=== Memory Operation Tests ===";
static int extern_global_var = 0;
const char const_string[16] = "Hello, World!";
int global_array[10];
int bss_var;
unsigned char bss_buffer[32];
unsigned int word_32 = 50;
const char *aD = "%d\n";
const char *aFork_0 = "fork error";
unsigned char byte_29EA[] = "Signal: %d\n";
unsigned char byte_29C5[] = "Exit status: %d\n";
unsigned int unk_2DAC[3] = {1, 2, 3};
unsigned int unk_2DB8[3] = {1, 2, 3};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_clang_Os_g
 * Processor: arm
 */

/* CRT stub function call_weak_fn */
static int call_weak_fn(void) { return 0; }

/* Stub for init_proc - made static to avoid multiple definition */
static int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_568 @ 0x568 - removed to avoid multiple definition */



/* CRT stub function _start removed - uses system CRT _start */






/* CRT stub function deregister_tm_clones removed by preprocessor */
static void deregister_tm_clones(void) {}

/* CRT stub function register_tm_clones removed by preprocessor */
static void register_tm_clones(void) {}

/* CRT stub function __do_global_dtors_aux removed by preprocessor */
static void __do_global_dtors_aux(void) {}

/* CRT stub function frame_dummy removed by preprocessor */
static void frame_dummy(void) {}



/* Function: local_vars @ 0x7BC */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x7C8 */
int local_array(int n)
{
 int v1; // r1
 int i; // r3
 unsigned int v4[10]; // [sp+0h] [bp-28h]

 v1 = 0;
 for ( i = 0; i != -10; --i )
 {
 v4[-i] = v1;
 v1 += n;
 }
 return v4[5];
}


/* Function: local_struct @ 0x7F8 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x800 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x810 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x81C */
int large_stack_frame()
{
 int i; // r0
 unsigned char v2[2056]; // [sp+0h] [bp-808h]

 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x84C */
int vla_stack(int n)
{
 int v1; // r1
 char *v2; // r1
 int v3; // r3
 int v4; // r2
 int v6; // [sp-4h] [bp-10h] BYREF

 v1 = -1;
 if ( (unsigned int)(n - 1001) >= 0xFFFFFC18 )
 {
 v2 = (char *)&v6 - ((4 * n + 7) & 0xFFFFFFF8);
 v3 = 0;
 v4 = n;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 --v4;
 }
 while ( v4 );
 return *(unsigned int *)&v2[(2 * (n + ((unsigned int)n >> 31))) & 0xFFFFFFFD];
 }
 return v1;
}


/* Function: alloca_usage @ 0x8C0 */
int alloca_usage(int n)
{
 char *v2; // r1
 int v3; // r2
 int i; // r3
 int v5; // [sp-4h] [bp-10h] BYREF

 if ( n < 1 )
 return -1;
 v2 = (char *)&v5 - ((4 * n + 7) & 0xFFFFFFF8);
 v3 = 0;
 for ( i = 0; i != n; ++i )
 {
 *(unsigned int *)&v2[4 * i] = v3;
 v3 += 3;
 }
 return *(unsigned int *)&v2[(2 * (n + ((unsigned int)n >> 31))) & 0xFFFFFFFD];
}


/* Function: stack_alias @ 0x924 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x92C */
static void test_stack_memory()
{
 int v0; // r0
 unsigned int *v1; // r4
 int i; // r0
 int j; // r1
 int k; // r0
 unsigned char v5[20]; // [sp+0h] [bp-810h] BYREF
 int v6; // [sp+14h] [bp-7FCh]
 unsigned char v7; // [sp+400h] [bp-410h]

 puts(asc_2CFE);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 v0 = 0;
 v1 = v5;
 do
 {
 *(unsigned int *)&v5[2 * v0] = v0;
 v0 += 2;
 }
 while ( v0 != 20 );
 printf("MEM-L1-02 (local_array): %d\n", v6);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 for ( i = 0; i != 2048; ++i )
 v5[i] = i;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v7);
 for ( j = 0; j != 20; j += 2 )
 *(unsigned int *)&v5[2 * j] = j;
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 for ( k = 0; k != 30; k += 3 )
 *v1++ = k;
 printf("MEM-L2-03 (alloca_usage): %d\n", v6);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xA5C */
int heap_basic(int n)
{
 char *v2; // r0
 int v3; // r1
 int v4; // r2
 int v5; // r4

 v2 = (char *)malloc(4 * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 v3 = 0;
 v4 = n;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 --v4;
 }
 while ( v4 );
 }
 v5 = *(unsigned int *)&v2[(2 * (n + ((unsigned int)n >> 31))) & 0xFFFFFFFD];
 free(v2);
 return v5;
}


/* Function: heap_calloc @ 0xABC */
int heap_calloc(int n)
{
 int *v2; // r0
 int v3; // r4
 int *v4; // r1
 int v5; // r2
 int v6; // t1

 v2 = (int *)calloc(n, 4u);
 if ( !v2 )
 return -1;
 v3 = 0;
 if ( n >= 2 )
 {
 v4 = v2 + 1;
 v5 = n - 1;
 v3 = 0;
 do
 {
 v6 = *v4++;
 --v5;
 v3 += v6;
 }
 while ( v5 );
 }
 free(v2);
 return v3;
}


/* Function: heap_realloc @ 0xB14 */
int heap_realloc()
{
 unsigned int *v0; // r0
 unsigned int *v1; // r4
 int i; // r0
 int v3; // r6
 unsigned int *v4; // r0
 int v5; // r1
 int v6; // r5

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 0; i != 5; ++i )
 v1[i] = i + 1;
 v3 = v1[2];
 v4 = realloc(v1, 0x28u);
 if ( v4 )
 {
 v4[9] = 90;
 v5 = v4[2];
 v4[6] = 60;
 v6 = -3;
 v4[5] = 50;
 v1 = v4;
 v4[7] = 70;
 v4[8] = 80;
 if ( v5 == v3 )
 v6 = 50;
 }
 else
 {
 v6 = -2;
 }
 free(v1);
 return v6;
}


/* Function: heap_array @ 0xBBC */
int heap_array(int n)
{
 unsigned int *v2; // r0
 int v3; // r1
 unsigned int *v4; // r2
 int v5; // r3
 int v6; // r4

 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 v3 = 0;
 v4 = v2;
 v5 = n;
 do
 {
 *v4++ = v3;
 v3 += 3;
 --v5;
 }
 while ( v5 );
 }
 v6 = *(unsigned int *)((char *)v2 + ((2 * (n + ((unsigned int)n >> 31))) & 0xFFFFFFFD));
 free(v2);
 return v6;
}


/* Function: heap_struct @ 0xC20 */
int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0xC28 */
int heap_nested(Node **head)
{
 Node *v2; // r0
 Node *v3; // r4
 Node *v4; // r0
 Node *v5; // r1
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
 v5 = v4;
 result = 0;
 v5->data = 20;
 v5->next = 0;
 }
 else
 {
 free(v3);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0xC98 */
int linked_list_heap()
{
 unsigned int *v0; // r0
 unsigned int *v1; // r5
 int v2; // r7
 int v3; // r6
 unsigned int *v4; // r1
 unsigned int *v5; // r4
 unsigned int *v6; // r0
 int v7; // r6
 unsigned int *v8; // r5
 int v9; // r5
 int *v10; // r0
 int v11; // r1
 unsigned int *v12; // r6

 v0 = malloc(8u);
 if ( v0 )
 {
 v1 = v0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 while ( 1 )
 {
 *v1 = v2;
 v1[1] = 0;
 if ( v5 )
 v4[1] = v1;
 else
 v5 = v1;
 if ( v3 == 4 )
 break;
 v6 = malloc(8u);
 v4 = v1;
 ++v3;
 v2 += 10;
 v1 = v6;
 if ( !v6 )
 {
 v7 = (unsigned int)(v3 - 1) < 4;
 goto LABEL_10;
 }
 }
 v7 = 0;
 }
 else
 {
 v7 = 1;
 v5 = 0;
LABEL_10:
 if ( v5 )
 {
 do
 {
 v8 = (unsigned int *)v5[1];
 free(v5);
 v5 = v8;
 }
 while ( v8 );
 }
 v5 = 0;
 }
 v9 = -1;
 if ( !v7 )
 {
 v9 = 0;
 if ( v5 )
 {
 v10 = v5;
 do
 {
 v11 = *v10;
 v10 = (int *)v10[1];
 v9 += v11;
 }
 while ( v10 );
 do
 {
 v12 = (unsigned int *)v5[1];
 free(v5);
 v5 = v12;
 }
 while ( v12 );
 }
 }
 return v9;
}


/* Function: create_tree_node @ 0xDA4 */
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


/* Function: tree_heap_traversal @ 0xDD0 */
int tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0xDD8 */
int memory_leak(int n)
{
 unsigned int *v2; // r0
 int i; // r1

 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 for ( i = 0; i != n; ++i )
 v2[i] = i;
 }
 return *(unsigned int *)((char *)v2 + ((2 * (n + ((unsigned int)n >> 31))) & 0xFFFFFFFD));
}


/* Function: dangling_pointer @ 0xE2C */
int dangling_pointer()
{
 void *v0; // r0
 void *v1; // r4

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 printf("value before free: %d\n", 42);
 free(v1);
 return *(unsigned int *)v1;
}


/* Function: double_free @ 0xE74 */
int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0xE84 */
int heap_overflow()
{
 int *v0; // r0
 int v1; // r1
 int i; // r2
 int v3; // r4

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 for ( i = 0; i != -11; --i )
 {
 v0[-i] = v1;
 v1 += 100;
 }
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0xED0 */
static void test_heap_memory()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 Node *v5; // r4
 int v6; // r0
 unsigned int *v7; // r0
 int i; // r1
 int v9; // r1
 int v10; // r0
 int v11; // r1
 int v12; // r0
 int v13; // [sp+0h] [bp-10h] BYREF
 Node *v14; // [sp+4h] [bp-Ch] BYREF

 puts(asc_2D1C);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n", v3);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v14 = 0;
 v4 = heap_nested(&v14);
 printf("HEAP-L2-06 (heap_nested): %d\n", v4);
 v5 = v14;
 if ( v14 )
 {
 free(v14->next);
 free(v5);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 v7 = malloc(0x14u);
 if ( v7 )
 {
 for ( i = 0; i != 5; ++i )
 v7[i] = i;
 v9 = v7[2];
 }
 else
 {
 v9 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v9);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v10 = fork();
 if ( !v10 )
 {
 v12 = dangling_pointer();
 printf(aD, v12);
 exit(0);
 }
 if ( v10 < 1 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v10, &v13, 0);
 v11 = v13 & 0x7F;
 if ( (v13 & 0x7F) != 0 )
 {
 if ( (v11 << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_29EA, v11);
 }
 else
 {
 printf(byte_29C5, BYTE1(v13));
 }
 }
}


/* Function: global_var_access @ 0x10CC */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x10F0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1104 */
int global_array_access(int idx)
{
 int result; // r0

 result = -1;
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 return result;
}


/* Function: static_local @ 0x1124 */
int static_local(int reset)
{
 int v1; // r1

 v1 = 0;
 if ( !reset )
 v1 = static_local_counter + 1;
 static_local_counter = v1;
 return v1;
}


/* Function: call_static_func @ 0x1154 */
int call_static_func(int x)
{
 return (2 * x) | 1;
}


/* Function: access_extern_global @ 0x1160 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1178 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: double_value @ 0x1484 */
static int double_value(int x)
{
 return 2 * x;
}


/* Function: read_const_data @ 0x1180 */
int read_const_data()
{
 return (unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1198 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x11A0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x11A8 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x11B0 */
void set_file_static(int val)
{
 file_scope_static = (int *)val;
}


/* Function: get_file_static @ 0x11C4 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x11D4 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x11E8 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x1204 */
int global_heap_store(int *p)
{
 global_heap_ptr = (int)p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1224 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x122C */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x1234 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x123C */
static void test_static_global()
{
 int v0; // r0
 int v1; // [sp+4h] [bp-14h] BYREF

 puts(asc_2D3A);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 printf("STM-L2-03 (read_const_data): %d\n", (unsigned char)const_string[4] + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = (unsigned int *)&word_32;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 global_heap_ptr = (int)&v1;
 v1 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x148C */
int memop_memset(void *buf, size_t size, int fill_value)
{
 size_t v3; // r3
 int result; // r0
 bool v6; // zf

 result = -1;
 v6 = buf == 0;
 if ( buf )
 {
 v3 = size;
 v6 = size == 0;
 }
 if ( !v6 )
 {
 memset(buf, fill_value, v3);
 return *(unsigned char *)buf;
 }
 return result;
}


/* Function: memop_memcpy @ 0x14C4 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 size_t v3; // r4
 int result; // r0
 bool v6; // zf

 result = -1;
 if ( dst )
 {
 v6 = src == 0;
 if ( src )
 {
 v3 = n;
 v6 = n == 0;
 }
 if ( !v6 )
 {
 memcpy(dst, src, v3);
 return *(unsigned int *)((char *)dst + (v3 & 0xFFFFFFFC) - 4);
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x1508 */
int memop_memmove(void *buf, size_t n)
{
 int result; // r0

 result = -1;
 if ( buf )
 {
 if ( n >= 2 )
 {
 memmove((char *)buf + 1, buf, n - 1);
 return *((unsigned char *)buf + 1);
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x1540 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // r0
 bool v5; // zf
 int v6; // r1

 result = 0;
 if ( p1 )
 {
 v5 = p2 == 0;
 if ( p2 )
 v5 = n == 0;
 if ( !v5 )
 {
 result = memcmp(p1, p2, n);
 v6 = result;
 if ( result )
 result = -1;
 if ( v6 >= 1 )
 return 1;
 }
 }
 return result;
}


/* Function: memop_bzero @ 0x1588 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x15B4 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 int result; // r0
 bool v6; // zf

 result = -1;
 if ( src )
 {
 v6 = dst == 0;
 if ( dst )
 v6 = n == 0;
 if ( !v6 )
 {
 memmove(dst, src, n);
 return *(unsigned char *)dst;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x15EC */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *((unsigned char *)buf + 1)
 | (*((unsigned char *)buf + 2) << 8)
 | ((*((unsigned char *)buf + 3) | (*((unsigned char *)buf + 4) << 8)) << 16);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x1618 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v2; // r5

 if ( !flag )
 return -1;
 v2 = *flag;
 _sync_synchronize();
 return *flag + v2;
}


/* Function: test_memory_op_functions @ 0x1644 */
static void test_memory_op_functions()
{
 int v0; // r0
 int v1; // r1
 unsigned char src[20]; // [sp+4h] [bp-14h] BYREF

 puts(asc_2D5E);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 qmemcpy(src, "HelloWorld", 10);
 memmove(&src[1], src, 9u);
 printf("MEMOP-L2-03: %c\n", src[1]);
 v0 = memcmp(&unk_2DAC, &unk_2DB8, 0xCu);
 v1 = v0;
 if ( v0 )
 v1 = -1;
 if ( v0 >= 1 )
 v1 = 1;
 printf("MEMOP-L2-04: %d\n", v1);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 _sync_synchronize();
 printf("MEMOP-L3-02: %d\n", 10);
}


/* Function: main @ 0x1780 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}








/* Stub for term_proc - made static to avoid multiple definition */
static void term_proc(void)
{
}


/* Import stubs for library functions - resolved by system libraries */
/* Total functions decompiled: 114, failed: 18 */
