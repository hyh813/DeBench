/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdint.h>

/* External function declarations for system calls */
extern void _exit(int status);
extern int fork(void);
extern int waitpid(int pid, int *status, int options);
extern void perror(const char *s);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void *memset(void *s, int c, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern int printf(const char *format, ...);
extern int puts(const char *s);

/* ARM memory barrier intrinsic */
#ifdef __aarch64__
#define __dmb() __asm__ volatile("dmb sy" ::: "memory")
#else
#define __dmb() do { } while(0)
#endif

/* Macro for extracting byte 1 from a value */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Forward declarations for structs */
typedef struct Node Node;
typedef struct TreeNode TreeNode;

/* Struct definitions */
struct Node {
    int data;
    Node *next;
};

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

/* Global variable declarations */
char asc_2225[] = "=== Stack Memory Tests ===";
char asc_2243[] = "=== Heap Memory Tests ===";
char asc_2261[] = "=== Static/Global Tests ===";
char asc_2285[] = "=== Memory Operation Tests ===";
char aD[] = "%d\n";
char aFork_0[] = "fork";
char byte_1F06[] = "exit status: %d\n";
char byte_1EE1[] = "signal: %d\n";
char aHelloworld[] = "Hello World";

int global_counter = 0;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int static_local_counter = 0;
int extern_global_var = 0;
char const_string[] = "Hello";
long long global_heap_ptr = 0;
int file_scope_static = 0;
int (*global_func_ptr)(int) = 0;

/* Forward function declarations */
int extern_function(int x);
int double_value(int x);
int local_vars(int x);
int local_array(int n);
int local_struct(int x);
int address_of_local(int *out);
int address_of_array(int *arr);
int large_stack_frame(void);
int vla_stack(int n);
int alloca_usage(int n);
long long stack_alias(int *p1, int *p2);
void test_stack_memory(void);
int heap_basic(int n);
int heap_calloc(int n);
int heap_realloc(void);
int heap_array(int n);
int heap_struct(int x);
int heap_nested(Node **head);
int linked_list_heap(void);
TreeNode *create_tree_node(int data);
int tree_heap_traversal(void);
int memory_leak(int n);
int dangling_pointer(void);
int double_free(int *p);
int heap_overflow(void);
void test_heap_memory(void);
int global_var_access(void);
int global_var_read(void);
int global_array_access(int idx);
int static_local(int reset);
int call_static_func(int x);
int access_extern_global(void);
int call_extern_func(void);
int read_const_data(void);
int access_bss_var(void);
int access_bss_buffer(void);
int global_struct_access(void);
void set_file_static(int val);
int get_file_static(void);
void set_global_callback(int (*f)(int));
int call_global_callback(int x);
int global_heap_store(int *p);
int static_complex_init(void);
int tls_access(int val);
int init_order_test(void);
void test_static_global(void);
int memop_memset(void *buf, size_t size, int fill_value);
int memop_memcpy(void *dst, const void *src, size_t n);
int memop_memmove(void *buf, size_t n);
int memop_memcmp(const void *p1, const void *p2, size_t n);
int memop_bzero(void *buf, size_t n);
int memop_bcopy(const void *src, void *dst, size_t n);
int memop_unaligned_access(const char *buf);
int memop_memory_barrier(volatile int *flag);
void test_memory_op_functions(void);
int main(int argc, const char **argv, const char **envp);
void term_proc(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_clang_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x8C8 */
long long call_weak_fn(void)
{
 return 0;
}
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_8E0 @ 0x8E0 */
void JUMPOUT(int x)
{
 (void)x;
}
void sub_8E0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0xB54 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0xB60 */
int local_array(int n)
{
 long long v1; // x8
 int v2; // w9
 unsigned char v4[20]; // [xsp+8h] [xbp-28h]
 int v5; // [xsp+1Ch] [xbp-14h]

 v1 = 0;
 v2 = 0;
 do
 {
 *(unsigned int *)&v4[v1] = v2;
 v2 += n;
 v1 += 4;
 }
 while ( v1 != 40 );
 return v5;
}


/* Function: local_struct @ 0xB90 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0xB98 */
int address_of_local(int *out)
{
 int result; // w0

 result = 42;
 *out = 42;
 return result;
}


/* Function: address_of_array @ 0xBAC */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0xBB8 */
int large_stack_frame()
{
 long long i; // x8
 unsigned char v2[2048]; // [xsp+0h] [xbp-810h]

 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0xBE8 */
int vla_stack(int n)
{
 long long v1; // x29
 long long v2; // x30
 long long v4; // x9
 unsigned int *v5; // x11
 int v6; // w9
 unsigned long long v7[2]; // [xsp+0h] [xbp-10h] BYREF

 if ( (unsigned int)(n - 1001) < 0xFFFFFC18 )
 return -1;
 v7[0] = v1;
 v7[1] = v2;
 if ( n >= 1 )
 {
 v4 = 0;
 v5 = (unsigned int *)((char *)v7 - ((4LL * (unsigned int)n + 15) & 0x7FFFFFFF0LL));
 do
 {
 *v5++ = v4;
 v4 += 2;
 }
 while ( 2LL * (unsigned int)n != v4 );
 }
 if ( n >= 0 )
 v6 = n;
 else
 v6 = n + 1;
 return *(unsigned int *)((char *)v7 + 4 * (unsigned int)(v6 >> 1) - ((4LL * (unsigned int)n + 15) & 0x7FFFFFFF0LL));
}


/* Function: alloca_usage @ 0xC68 */
int alloca_usage(int n)
{
 long long v1; // x29
 long long v2; // x30
 long long v3; // x9
 unsigned int *v4; // x11
 unsigned long long v6[2]; // [xsp+0h] [xbp-10h] BYREF

 if ( n < 1 )
 return -1;
 v6[0] = v1;
 v6[1] = v2;
 v3 = 0;
 v4 = (unsigned int *)((char *)v6 - ((4LL * n + 15) & 0xFFFFFFFFFFFFFFF0LL));
 do
 {
 *v4++ = v3;
 v3 += 3;
 }
 while ( 3LL * (unsigned int)n != v3 );
 return *(unsigned int *)((char *)v6 + 4 * (unsigned int)(n >> 1) - ((4LL * n + 15) & 0xFFFFFFFFFFFFFFF0LL));
}


/* Function: stack_alias @ 0xCD4 */
long long stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0xCDC */
void test_stack_memory()
{
 long long v0; // x8
 unsigned int *v1; // x9
 long long i; // x8
 long long v3; // x8
 unsigned int *v4; // x9
 long long v5; // x8
 unsigned int *v6; // x9
 unsigned char v7[20]; // [xsp+0h] [xbp-800h] BYREF
 int v8; // [xsp+14h] [xbp-7ECh]
 unsigned char v9; // [xsp+400h] [xbp-400h]

 puts(asc_2225);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 v0 = 0;
 v1 = (unsigned int *)v7;
 do
 {
 *v1++ = v0;
 v0 += 2;
 }
 while ( v0 != 20 );
 printf("MEM-L1-02 (local_array): %d\n", v8);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 for ( i = 0; i != 2048; ++i )
 v7[i] = i;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v9);
 v3 = 0;
 v4 = (unsigned int *)v7;
 do
 {
 *v4++ = v3;
 v3 += 2;
 }
 while ( v3 != 20 );
 printf("MEM-L2-02 (vla_stack): %d\n", v8);
 v5 = 0;
 v6 = (unsigned int *)v7;
 do
 {
 *v6++ = v5;
 v5 += 3;
 }
 while ( v5 != 30 );
 printf("MEM-L2-03 (alloca_usage): %d\n", v8);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xE00 */
int heap_basic(int n)
{
 unsigned int *v2; // x0
 long long v3; // x8
 unsigned int *v4; // x10
 int v5; // w8
 int v6; // w19

 v2 = malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 v3 = 0;
 v4 = v2;
 do
 {
 *v4++ = v3;
 v3 += 2;
 }
 while ( 2LL * (unsigned int)n != v3 );
 }
 if ( n >= 0 )
 v5 = n;
 else
 v5 = n + 1;
 v6 = v2[v5 >> 1];
 free(v2);
 return v6;
}


/* Function: heap_calloc @ 0xE70 */
int heap_calloc(int n)
{
 int *v2; // x0
 int v3; // w19
 long long v4; // x8
 int *v5; // x9
 int v6; // t1

 v2 = (int *)calloc(n, 4u);
 if ( !v2 )
 return -1;
 if ( n < 1 )
 {
 v3 = 0;
 }
 else
 {
 v3 = 0;
 v4 = (unsigned int)n;
 v5 = v2;
 do
 {
 v6 = *v5++;
 --v4;
 v3 += v6;
 }
 while ( v4 );
 }
 free(v2);
 return v3;
}


/* Function: heap_realloc @ 0xED8 */
int heap_realloc()
{
 unsigned int *v0; // x0
 void *v1; // x19
 long long v2; // x8
 bool v3; // zf
 int v4; // w20
 unsigned int *v5; // x0
 int v6; // w8
 long long i; // x9
 int v8; // w20

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = 0;
 do
 {
 v3 = v2 == 4;
 v0[v2] = v2 + 1;
 ++v2;
 }
 while ( !v3 );
 v4 = v0[2];
 v5 = realloc(v0, 0x28u);
 if ( v5 )
 {
 v6 = 50;
 for ( i = 5; i != 10; ++i )
 {
 v5[i] = v6;
 v6 += 10;
 }
 if ( v5[2] == v4 )
 v8 = v5[5];
 else
 v8 = -3;
 v1 = v5;
 }
 else
 {
 v8 = -2;
 }
 free(v1);
 return v8;
}


/* Function: heap_array @ 0xF80 */
int heap_array(int n)
{
 unsigned int *v2; // x0
 long long v3; // x8
 unsigned int *v4; // x10
 int v5; // w8
 int v6; // w19

 v2 = malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 v3 = 0;
 v4 = v2;
 do
 {
 *v4++ = v3;
 v3 += 3;
 }
 while ( 3LL * (unsigned int)n != v3 );
 }
 if ( n >= 0 )
 v5 = n;
 else
 v5 = n + 1;
 v6 = v2[v5 >> 1];
 free(v2);
 return v6;
}


/* Function: heap_struct @ 0xFF0 */
int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0xFF8 */
int heap_nested(Node **head)
{
 Node *v2; // x0
 Node *next; // x8
 int result; // w0

 v2 = (Node *)malloc(0x10u);
 *head = v2;
 if ( !v2 )
 return -1;
 v2->data = 10;
 (*head)->next = (Node *)malloc(0x10u);
 next = (*head)->next;
 if ( next )
 {
 result = 0;
 next->next = 0;
 next->data = 20;
 }
 else
 {
 free(*head);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0x106C */
int linked_list_heap()
{
 Node *v0; // x19
 Node *v1; // x21
 unsigned int v2; // w23
 bool v3; // w22
 Node *v4; // x0
 Node *v5; // x24
 int v6; // w20
 Node *v7; // x8
 int v8; // w9
 Node *v9; // x21

 v0 = 0;
 v1 = 0;
 v2 = 0;
 v3 = 1;
 while ( 1 )
 {
 v4 = (Node *)malloc(0x10u);
 if ( !v4 )
 break;
 v4->next = 0;
 v4->data = 10 * v2;
  if ( v0 )
  {
   v1->next = v4;
   v1 = v4;
  }
  else
  {
   v1 = v4;
   v0 = v4;
  }
 v3 = v2++ < 4;
 if ( v2 == 5 )
 goto LABEL_11;
 }
 if ( v0 )
 {
 do
 {
 v5 = v0->next;
 free(v0);
 v0 = v5;
 }
 while ( v5 );
 }
LABEL_11:
 if ( v3 )
 return -1;
 v6 = 0;
 if ( v0 )
 {
 v7 = v0;
 do
 {
 v8 = v7->data;
 v7 = v7->next;
 v6 += v8;
 }
 while ( v7 );
 }
 if ( v0 )
 {
 do
 {
 v9 = v0->next;
 free(v0);
 v0 = v9;
 }
 while ( v9 );
 }
 return v6;
}


/* Function: create_tree_node @ 0x1160 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // x0

 result = (TreeNode *)malloc(0x18u);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1190 */
int tree_heap_traversal()
{
 TreeNode *v0; // x0
 TreeNode *v1; // x19
 TreeNode *v2; // x0
 TreeNode *v3; // x20
 TreeNode *v4; // x0
 TreeNode *v5; // x21
 int v6; // w22

 v0 = (TreeNode *)malloc(0x18u);
 if ( v0 )
 {
 v1 = v0;
 v0->left = 0;
 v0->right = 0;
 v0->data = 10;
 v2 = (TreeNode *)malloc(0x18u);
 v3 = v2;
 if ( v2 )
 {
 v2->left = 0;
 v2->right = 0;
 v2->data = 20;
 }
 v1->left = v2;
 v4 = (TreeNode *)malloc(0x18u);
 v5 = v4;
 if ( v4 )
 {
 v4->left = 0;
 v4->right = 0;
 v4->data = 30;
 }
 v1->right = v4;
 if ( v3 && v4 )
 {
 v6 = v3->data + v1->data + v4->data;
 free(v3);
 v5 = v1->right;
 }
 else
 {
 if ( v3 )
 free(v3);
 v6 = -2;
 if ( !v5 )
 goto LABEL_14;
 }
 free(v5);
LABEL_14:
 free(v1);
 return v6;
 }
 return -1;
}


/* Function: memory_leak @ 0x1268 */
int memory_leak(int n)
{
 unsigned int *v2; // x0
 long long v3; // x8
 int v4; // w8

 v2 = malloc(4LL * n);
 if ( !v2 )
 return -1;
 if ( n >= 1 )
 {
 v3 = 0;
 do
 {
 v2[v3] = v3;
 ++v3;
 }
 while ( n != v3 );
 }
 if ( n >= 0 )
 v4 = n;
 else
 v4 = n + 1;
 return v2[v4 >> 1];
}


/* Function: dangling_pointer @ 0x12C8 */
int dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 *v0 = 42;
 printf("value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x131C */
int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0x1330 */
int heap_overflow()
{
 int *v0; // x0
 long long v1; // x8
 int v2; // w9
 int v3; // w19

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = 0;
 do
 {
 v0[v1] = v2;
 v2 += 100;
 ++v1;
 }
 while ( v1 != 11 );
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x1384 */
void test_heap_memory()
{
 unsigned int *v0; // x0
 long long v1; // x8
 unsigned int *v2; // x9
 int v3; // w19
 char *v4; // x0
 long long v5; // x8
 int v6; // w19
 int v7; // w9
 unsigned int *v8; // x0
 void *v9; // x19
 long long v10; // x8
 bool v11; // zf
 int v12; // w20
 unsigned int *v13; // x0
 int v14; // w8
 long long i; // x9
 int v16; // w20
 unsigned int *v17; // x0
 long long v18; // x8
 unsigned int *v19; // x9
 int v20; // w19
 void **v21; // x19
 unsigned int *v22; // x0
 int v23; // w1
 int v24; // w0
 int v25; // w0
 unsigned int *v26; // x0
 long long j; // x8
 int v28; // w1
 int v29; // w0
 long long v30; // x1
 unsigned int v31; // w0
 int status; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_2243);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 v1 = 0;
 v2 = v0;
 do
 {
 *v2++ = v1;
 v1 += 2;
 }
 while ( v1 != 20 );
 v3 = v0[5];
 free(v0);
 }
 else
 {
 v3 = -1;
 }
 printf("HEAP-L2-01 (heap_basic): %d\n", v3);
 v4 = (char *)calloc(5u, 4u);
 if ( v4 )
 {
 v5 = 0;
 v6 = 0;
 do
 {
 v7 = *(unsigned int *)&v4[v5];
 v5 += 4;
 v6 += v7;
 }
 while ( v5 != 20 );
 free(v4);
 }
 else
 {
 v6 = -1;
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v6);
 v8 = malloc(0x14u);
 if ( v8 )
 {
 v9 = v8;
 v10 = 0;
 do
 {
 v11 = v10 == 4;
 v8[v10] = v10 + 1;
 ++v10;
 }
 while ( !v11 );
 v12 = v8[2];
 v13 = realloc(v8, 0x28u);
 if ( v13 )
 {
 v14 = 50;
 for ( i = 5; i != 10; ++i )
 {
 v13[i] = v14;
 v14 += 10;
 }
 if ( v13[2] == v12 )
 v16 = v13[5];
 else
 v16 = -3;
 v9 = v13;
 }
 else
 {
 v16 = -2;
 }
 free(v9);
 }
 else
 {
 v16 = -1;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v16);
 v17 = malloc(0x28u);
 if ( v17 )
 {
 v18 = 0;
 v19 = v17;
 do
 {
 *v19++ = v18;
 v18 += 3;
 }
 while ( v18 != 30 );
 v20 = v17[5];
 free(v17);
 }
 else
 {
 v20 = -1;
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v20);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v21 = (void **)malloc(0x10u);
 if ( v21 )
 {
 *(unsigned int *)v21 = 10;
 v22 = malloc(0x10u);
 v21[1] = v22;
 if ( v22 )
 {
 v23 = 0;
 *((unsigned long long *)v22 + 1) = 0;
 *v22 = 20;
 }
 else
 {
 free(v21);
 v23 = -2;
 }
 }
 else
 {
 v23 = -1;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v23);
 if ( v21 )
 {
 free(v21[1]);
 free(v21);
 }
 v24 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v24);
 v25 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v25);
 v26 = malloc(0x14u);
 if ( v26 )
 {
 for ( j = 0; j != 5; ++j )
 v26[j] = j;
 v28 = v26[2];
 }
 else
 {
 v28 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v28);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v29 = (int)fork();
 if ( !v29 )
 {
 v31 = dangling_pointer();
 printf(aD, v31);
 _exit(0);
 }
 if ( v29 < 1 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v29, &status, 0);
 v30 = status & 0x7F;
 if ( (status & 0x7F) != 0 )
 {
 if ( ((unsigned int)v30 << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_1F06, v30);
 }
 else
 {
 printf(byte_1EE1, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x168C */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x16A0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x16B0 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x16D0 */
int static_local(int reset)
{
 int result; // w0

 if ( reset )
 result = 0;
 else
 result = static_local_counter + 1;
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x16E8 */
int call_static_func(int x)
{
 return (2 * x) | 1;
}


/* Function: access_extern_global @ 0x16F8 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x170C */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1724 */
int read_const_data()
{
 return (unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1738 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1740 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1748 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1750 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x175C */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1768 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1774 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x17A0 */
int global_heap_store(int *p)
{
 global_heap_ptr = (long long)p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x17BC */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x17C4 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x17CC */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x17D4 */
void test_static_global()
{
 int v0; // w0
 int heap_val; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_2261);
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
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (int (*)(int))double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 heap_val = 100;
 global_heap_ptr = (long long)&heap_val;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1994 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x199C */
int memop_memset(void *buf, size_t size, int fill_value)
{
 int result; // w0

 result = -1;
 if ( buf )
 {
 if ( size )
 {
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
 }
 }
 return result;
}


/* Function: memop_memcpy @ 0x19DC */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 int result; // w0

 result = -1;
 if ( dst && src )
 {
 if ( n )
 {
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x1A24 */
int memop_memmove(void *buf, size_t n)
{
 int result; // w0

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


/* Function: memop_memcmp @ 0x1A64 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // w0
 int v5; // w0
 int v6; // w8

 result = 0;
 if ( p1 && p2 && n )
 {
 v5 = memcmp(p1, p2, n);
 if ( v5 )
 v6 = -1;
 else
 v6 = 0;
 if ( v5 >= 1 )
 return 1;
 else
 return v6;
 }
 return result;
}


/* Function: memop_bzero @ 0x1AA0 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x1AD8 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 int result; // w0

 result = -1;
 if ( src && dst )
 {
 if ( n )
 {
 memmove(dst, src, n);
 return *(unsigned char *)dst;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x1B14 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x1B28 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // w8

 if ( !flag )
 return -1;
 v1 = *flag;
 __dmb(0xBu);
 return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x1B48 */
void test_memory_op_functions()
{
 int v0; // [xsp+Ch] [xbp-14h]

 puts(asc_2285);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 printf("MEMOP-L2-03: %c\n", (unsigned char)aHelloworld[0]);
 printf("MEMOP-L2-04: %d\n", -1);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 __dmb(0xBu);
 printf("MEMOP-L3-02: %d\n", v0 + 5);
}


/* Function: main @ 0x1C28 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x1C4C */
int extern_function(int x)
{
 return 3 * x;
}


/* Function: .term_proc @ 0x1C54 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x13128 */

/* FAILED to decompile: memmove @ 0x13130 */

/* FAILED to decompile: exit @ 0x13138 */

/* FAILED to decompile: __libc_start_main @ 0x13140 */

/* FAILED to decompile: perror @ 0x13148 */

/* FAILED to decompile: __cxa_finalize @ 0x13150 */

/* FAILED to decompile: fork @ 0x13158 */

/* FAILED to decompile: malloc @ 0x13160 */

/* FAILED to decompile: memset @ 0x13168 */

/* FAILED to decompile: calloc @ 0x13170 */

/* FAILED to decompile: realloc @ 0x13178 */

/* FAILED to decompile: abort @ 0x13180 */

/* FAILED to decompile: puts @ 0x13188 */

/* FAILED to decompile: memcmp @ 0x13190 */

/* FAILED to decompile: free @ 0x13198 */

/* FAILED to decompile: printf @ 0x131A0 */

/* FAILED to decompile: waitpid @ 0x131A8 */

/* FAILED to decompile: __gmon_start__ @ 0x131B8 */

/* Total functions decompiled: 65, failed: 18 */
