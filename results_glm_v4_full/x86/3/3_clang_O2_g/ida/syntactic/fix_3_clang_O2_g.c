/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef int64_t
typedef long long int64_t;
#endif
#ifndef size_t
typedef unsigned int size_t;
#endif
#ifndef ssize_t
typedef int ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef int intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif
#ifndef bool
typedef int bool;
#endif

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Type definitions */
typedef struct _UNKNOWN { char data[1]; } _UNKNOWN;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variable definitions */
int global_counter = 0;
int global_array[10] = {0};
int static_local_counter = 0;
int extern_global_var = 0;
const char const_string[] = "test";
int *file_scope_static = NULL;
int global_func_ptr = 0;
int *global_heap_ptr = NULL;

/* String constants */
const char asc_35C1[] = "=== STACK MEMORY TESTS ===";
const char asc_35DF[] = "=== HEAP MEMORY TESTS ===";
const char asc_35FD[] = "=== STATIC/GLOBAL MEMORY TESTS ===";
const char asc_3621[] = "=== MEMORY OPERATIONS TESTS ===";
const char aD[] = "%d\n";
const char aFork_0[] = "fork";
const char byte_32A2[] = "Child exited with signal %d\n";
const char byte_327D[] = "Child exited with status %d\n";
const char byte_9[] = "\x00";
const int word_32 = 50;
const char unk_3670[] = "HelloWorld";
const char unk_367C[] = "HelloWorld";



/* Macro for extracting exit status byte */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Function prototypes */
int double_value(int x);
int extern_function(int x);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_clang_O2_g
 * Processor: pc
 */


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" : : : "memory");
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
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


/* Function: local_array @ 0x12D0 */
int local_array(int n)
{
 return 5 * n;
}


/* Function: local_struct @ 0x12E0 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x12F0 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x1300 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1310 */
int large_stack_frame()
{
 int i; // eax
 unsigned char v2[2048]; // [esp+0h] [ebp-800h]

 for ( i = 0; i != 2048; i += 8 )
 {
 v2[i] = i;
 v2[i + 1] = i + 1;
 v2[i + 2] = i + 2;
 v2[i + 3] = i + 3;
 v2[i + 4] = i + 4;
 v2[i + 5] = i + 5;
 v2[i + 6] = i + 6;
 v2[i + 7] = i + 7;
 }
 return v2[1024];
}


/* Function: vla_stack @ 0x1380 */
int vla_stack(int n)
{
 int result; // eax
 char *v2; // eax
 int v3; // esi
 int v4; // edi
 int v5; // edx
 int v6; // edi
 unsigned int v7[6]; // [esp+0h] [ebp-18h] BYREF

 result = -1;
 if ( (unsigned int)(n - 1001) >= 0xFFFFFC18 )
 {
 v7[2] = v7;
 v2 = (char *)v7 - ((4 * n + 15) & 0xFFFFFFF0);
 v3 = n & 3;
 v4 = 0;
 if ( (unsigned int)(n - 1) >= 3 )
 {
 v4 = 0;
 v5 = 4;
 do
 {
 *(unsigned int *)&v2[2 * v5 - 8] = v5 - 4;
 *(unsigned int *)&v2[2 * v5 - 4] = v5 - 2;
 *(unsigned int *)&v2[2 * v5] = v5;
 *(unsigned int *)&v2[2 * v5 + 4] = v5 + 2;
 v4 += 4;
 v5 += 8;
 }
 while ( (n & 0xFFFFFFFC) != v4 );
 }
 if ( (n & 3) != 0 )
 {
 v6 = 2 * v4;
 do
 {
 *(unsigned int *)&v2[2 * v6] = v6;
 v6 += 2;
 --v3;
 }
 while ( v3 );
 }
 return *(unsigned int *)&v2[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
 }
 return result;
}


/* Function: alloca_usage @ 0x1430 */
int alloca_usage(int n)
{
 char *v1; // ecx
 int v2; // esi
 int v3; // ebx
 char *v4; // edi
 int v5; // esi
 int v6; // ebx
 int v8; // [esp+0h] [ebp-18h] BYREF

 if ( n <= 0 )
 return -1;
 v1 = (char *)&v8 - ((4 * n + 15) & 0xFFFFFFF0);
 v2 = 0;
 if ( (unsigned int)(n - 1) >= 3 )
 {
 v2 = 0;
 v3 = 6;
 do
 {
 *(unsigned int *)&v1[4 * v2] = v3 - 6;
 *(unsigned int *)&v1[4 * v2 + 4] = v3 - 3;
 *(unsigned int *)&v1[4 * v2 + 8] = v3;
 *(unsigned int *)&v1[4 * v2 + 12] = v3 + 3;
 v2 += 4;
 v3 += 12;
 }
 while ( (n & 0x7FFFFFFC) != v2 );
 }
 if ( (n & 3) != 0 )
 {
 v4 = &v1[4 * v2];
 v5 = 3 * v2;
 v6 = 0;
 do
 {
 *(unsigned int *)&v4[4 * v6++] = v5;
 v5 += 3;
 }
 while ( (n & 3) != v6 );
 }
 return *(unsigned int *)&v1[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
}


/* Function: stack_alias @ 0x14D0 */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x14E0 */
void test_stack_memory()
{
 int i; // eax
 unsigned char v1[2052]; // [esp+8h] [ebp-804h]

 puts(asc_35C1);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 for ( i = 0; i != 2048; i += 8 )
 {
 v1[i] = i;
 v1[i + 1] = i + 1;
 v1[i + 2] = i + 2;
 v1[i + 3] = i + 3;
 v1[i + 4] = i + 4;
 v1[i + 5] = i + 5;
 v1[i + 6] = i + 6;
 v1[i + 7] = i + 7;
 }
 printf("MEM-L2-01 (large_stack_frame): %d\n", v1[1024]);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1640 */
int heap_basic(int n)
{
 unsigned int v1; // esi
 char *v2; // eax
 int v3; // ecx
 int v4; // edx
 int v5; // ebp
 int v6; // edx
 int v7; // esi

 v1 = n;
 v2 = (char *)malloc(4 * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 v3 = n & 3;
 v4 = 0;
 if ( (unsigned int)(n - 1) >= 3 )
 {
 v4 = 0;
 v5 = 4;
 do
 {
 *(unsigned int *)&v2[2 * v5 - 8] = v5 - 4;
 *(unsigned int *)&v2[2 * v5 - 4] = v5 - 2;
 *(unsigned int *)&v2[2 * v5] = v5;
 *(unsigned int *)&v2[2 * v5 + 4] = v5 + 2;
 v4 += 4;
 v5 += 8;
 }
 while ( (n & 0xFFFFFFFC) != v4 );
 }
 v1 = n;
 if ( (n & 3) != 0 )
 {
 v6 = 2 * v4;
 do
 {
 *(unsigned int *)&v2[2 * v6] = v6;
 v6 += 2;
 --v3;
 }
 while ( v3 );
 }
 }
 v7 = *(unsigned int *)&v2[2 * ((v1 + (v1 >> 31)) & 0xFFFFFFFE)];
 free(v2);
 return v7;
}


/* Function: heap_calloc @ 0x1700 */
int heap_calloc(int n)
{
 unsigned int *v1; // eax
 int v2; // esi
 int v3; // edi
 int v4; // edx
 unsigned int v5; // edi
 int v6; // edx
 char *v7; // edx
 int v8; // edi

 v1 = calloc(n, 4u);
 if ( v1 )
 {
 v2 = 0;
 if ( n >= 2 )
 {
 v3 = n - 1;
 if ( (unsigned int)(n - 2) >= 7 )
 {
 v5 = v3 & 0xFFFFFFF8;
 v2 = 0;
 v6 = 0;
 do
 {
 v2 += v1[v6 + 8] + v1[v6 + 7] + v1[v6 + 6] + v1[v6 + 5] + v1[v6 + 4] + v1[v6 + 3] + v1[v6 + 2] + v1[v6 + 1];
 v6 += 8;
 }
 while ( v5 != v6 );
 v4 = v6 + 1;
 if ( (((unsigned char)n - 1) & 7) == 0 )
 goto LABEL_12;
 }
 else
 {
 v2 = 0;
 v4 = 1;
 if ( (v3 & 7) == 0 )
 goto LABEL_12;
 }
 v7 = (char *)&v1[v4];
 v8 = 0;
 do
 v2 += *(unsigned int *)&v7[4 * v8++];
 while ( (((unsigned char)n - 1) & 7) != v8 );
 }
LABEL_12:
 free(v1);
 return v2;
 }
 return -1;
}


/* Function: heap_realloc @ 0x17C0 */
int heap_realloc()
{
 unsigned int *v0; // eax
 void *v1; // esi
 unsigned int *v2; // eax
 int v3; // edi

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v2[5] = 50;
 v2[6] = 60;
 v2[7] = 70;
 v2[8] = 80;
 v2[9] = 90;
 v3 = -3;
 if ( v2[2] == 3 )
 v3 = 50;
 v1 = v2;
 }
 else
 {
 v3 = -2;
 }
 free(v1);
 return v3;
}


/* Function: heap_array @ 0x1870 */
int heap_array(int n)
{
 unsigned int v1; // esi
 unsigned int *v2; // eax
 int v3; // edx
 int v4; // ebp
 char *v5; // edi
 int v6; // edx
 int v7; // ebp
 int v8; // esi

 v1 = n;
 v2 = malloc(4 * n);
 if ( !v2 )
 return -1;
 if ( n > 0 )
 {
 v3 = 0;
 if ( (unsigned int)(n - 1) >= 3 )
 {
 v3 = 0;
 v4 = 6;
 do
 {
 v2[v3] = v4 - 6;
 v2[v3 + 1] = v4 - 3;
 v2[v3 + 2] = v4;
 v2[v3 + 3] = v4 + 3;
 v3 += 4;
 v4 += 12;
 }
 while ( (n & 0xFFFFFFFC) != v3 );
 }
 v1 = n;
 if ( (n & 3) != 0 )
 {
 v5 = (char *)&v2[v3];
 v6 = 3 * v3;
 v7 = 0;
 do
 {
 *(unsigned int *)&v5[4 * v7++] = v6;
 v6 += 3;
 }
 while ( (n & 3) != v7 );
 }
 }
 v8 = *(unsigned int *)((char *)v2 + 2 * ((v1 + (v1 >> 31)) & 0xFFFFFFFE));
 free(v2);
 return v8;
}


/* Function: heap_struct @ 0x1940 */
int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0x1950 */
int heap_nested(Node **head)
{
 Node *v1; // eax
 Node *v2; // esi
 Node *v3; // eax

 v1 = (Node *)malloc(8u);
 *head = v1;
 if ( !v1 )
 return -1;
 v2 = v1;
 v1->data = 10;
 v3 = (Node *)malloc(8u);
 v2->next = v3;
 if ( v3 )
 {
 v3->data = 20;
 v3->next = 0;
 return 0;
 }
 else
 {
 free(v2);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x19C0 */
int linked_list_heap()
{
 unsigned int *v0; // eax
 int v1; // esi
 unsigned int *v2; // edi
 unsigned int *v3; // eax
 unsigned int *v4; // ebp
 unsigned int *v5; // eax
 unsigned int *v6; // eax
 unsigned int *v7; // ebp
 unsigned int *v8; // eax
 unsigned int *v9; // eax
 unsigned int *v10; // ebp
 unsigned int *v11; // ebp
 unsigned int *v12; // ebp
 unsigned int *v13; // ebp
 unsigned int *v15; // [esp+8h] [ebp-14h]

 v0 = malloc(8u);
 v1 = -1;
 if ( v0 )
 {
 v2 = v0;
 *v0 = 0;
 v3 = malloc(8u);
 if ( v3 )
 {
 v4 = v3;
 *v3 = 10;
 v3[1] = 0;
 v2[1] = v3;
 v5 = malloc(8u);
 if ( v5 )
 {
 *v5 = 20;
 v5[1] = 0;
 v15 = v5;
 v4[1] = v5;
 v6 = malloc(8u);
 if ( v6 )
 {
 v7 = v6;
 *v6 = 30;
 v6[1] = 0;
 v15[1] = v6;
 v8 = malloc(8u);
 if ( v8 )
 {
 *v8 = 40;
 v8[1] = 0;
 v7[1] = v8;
 v1 = 0;
 v9 = v2;
 do
 {
 v1 += *v9;
 v9 = (unsigned int *)v9[1];
 }
 while ( v9 );
 do
 {
 v10 = (unsigned int *)v2[1];
 free(v2);
 v2 = v10;
 }
 while ( v10 );
 }
 else
 {
 do
 {
 v13 = (unsigned int *)v2[1];
 free(v2);
 v2 = v13;
 }
 while ( v13 );
 }
 }
 else
 {
 do
 {
 v12 = (unsigned int *)v2[1];
 free(v2);
 v2 = v12;
 }
 while ( v12 );
 }
 }
 else
 {
 do
 {
 v11 = (unsigned int *)v2[1];
 free(v2);
 v2 = v11;
 }
 while ( v11 );
 }
 }
 else
 {
 free(v2);
 }
 }
 return v1;
}


/* Function: create_tree_node @ 0x1B40 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // eax

 result = (TreeNode *)malloc(0xCu);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1B80 */
int tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0x1B90 */
int memory_leak(int n)
{
 unsigned int *v1; // eax
 int v2; // ecx
 int v3; // edx

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = n & 7;
 v3 = 0;
 if ( (unsigned int)(n - 1) >= 7 )
 {
 v3 = 0;
 do
 {
 v1[v3] = v3;
 v1[v3 + 1] = v3 + 1;
 v1[v3 + 2] = v3 + 2;
 v1[v3 + 3] = v3 + 3;
 v1[v3 + 4] = v3 + 4;
 v1[v3 + 5] = v3 + 5;
 v1[v3 + 6] = v3 + 6;
 v1[v3 + 7] = v3 + 7;
 v3 += 8;
 }
 while ( v3 != (n & 0x7FFFFFF8) );
 }
 if ( (n & 7) != 0 )
 {
 do
 {
 v1[v3] = v3;
 ++v3;
 --v2;
 }
 while ( v2 );
 }
 }
 return *(unsigned int *)((char *)v1 + 2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE));
}


/* Function: dangling_pointer @ 0x1C50 */
int dangling_pointer()
{
 void *v0; // eax
 void *v1; // esi

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 printf("value before free: %d\n", 42);
 free(v1);
 return *(unsigned int *)v1;
}


/* Function: double_free @ 0x1CA0 */
int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0x1CC0 */
int heap_overflow()
{
 return 0;
}


/* Function: test_heap_memory @ 0x1CD0 */
void test_heap_memory()
{
 unsigned int *v0; // eax
 void *v1; // esi
 unsigned int *v2; // eax
 int v3; // edi
 void **v4; // eax
 void **v5; // esi
 unsigned int *v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int stat_loc; // [esp+Ch] [ebp-10h] BYREF

 puts(asc_35DF);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v2[5] = 50;
 v2[6] = 60;
 v2[7] = 70;
 v2[8] = 80;
 v2[9] = 90;
 v3 = -3;
 if ( v2[2] == 3 )
 v3 = 50;
 v1 = v2;
 }
 else
 {
 v3 = -2;
 }
 free(v1);
 }
 else
 {
 v3 = -1;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v3);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v4 = (void **)malloc(8u);
 if ( v4 )
 {
 v5 = v4;
 *v4 = byte_9 + 1;
 v6 = malloc(8u);
 v5[1] = v6;
 if ( v6 )
 {
 *v6 = 20;
 v6[1] = 0;
 v7 = 0;
 }
 else
 {
 free(v5);
 v7 = -2;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v7);
 free(v5[1]);
 free(v5);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v8 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v8);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 printf("HEAP-L3-03 (memory_leak): %d\n", 2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v9 = fork();
 if ( !v9 )
 {
 v10 = dangling_pointer();
 printf(aD, v10);
 exit(0);
 }
 if ( v9 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v9, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_32A2, stat_loc & 0x7F);
 }
 else
 {
 printf(byte_327D, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1F70 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1F90 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1FB0 */
int global_array_access(int idx)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 return result;
}


/* Function: static_local @ 0x1FE0 */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = static_local_counter + 1;
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x2010 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x2020 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2040 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2070 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2090 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x20A0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x20B0 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x20C0 */
void set_file_static(int val)
{
 file_scope_static = (int *)val;
}


/* Function: get_file_static @ 0x20E0 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x2100 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = (int)f;
}


/* Function: call_global_callback @ 0x2120 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return ((int ( *)(int))global_func_ptr)(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2150 */
int global_heap_store(int *p)
{
 global_heap_ptr = (int)p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2180 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2190 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x21A0 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x21B0 */
void test_static_global()
{
 int v0; // eax
 int v1; // [esp+10h] [ebp-Ch] BYREF

 puts(asc_35FD);
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
 printf("STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = (unsigned int *)&word_32;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (int)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v1 = 100;
 global_heap_ptr = (int)&v1;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: extern_function @ 0x23C0 */
int extern_function(int x)
{
 return x * 3;
}

/* Function: double_value @ 0x23D0 */
int double_value(int x)
{
 return 2 * x;
}








/* Function: memop_memset @ 0x23D0 */
int memop_memset(unsigned char *buf, size_t size, int fill_value)
{
 int result; // eax

 result = -1;
 if ( buf )
 {
 if ( size )
 {
 memset(buf, fill_value, size);
 return *buf;
 }
 }
 return result;
}


/* Function: memop_memcpy @ 0x2410 */
int memop_memcpy(char *dst, const void *src, size_t n)
{
 int result; // eax

 result = -1;
 if ( dst && src )
 {
 if ( n )
 {
 memcpy(dst, src, n);
 return *(unsigned int *)&dst[(n & 0xFFFFFFFC) - 4];
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x2460 */
int memop_memmove(char *buf, size_t n)
{
 int result; // eax

 result = -1;
 if ( buf )
 {
 if ( n >= 2 )
 {
 memmove(buf + 1, buf, n - 1);
 return buf[1];
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x24B0 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // eax
 int v4; // eax
 int v5; // ecx
 bool v6; // cc

 result = 0;
 if ( p1 && p2 && n )
 {
 v4 = memcmp(p1, p2, n);
 v5 = -(v4 != 0);
 v6 = v4 <= 0;
 result = 1;
 if ( v6 )
 return v5;
 }
 return result;
}


/* Function: memop_bzero @ 0x2500 */
int memop_bzero(unsigned char *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *buf;
}


/* Function: memop_bcopy @ 0x2540 */
int memop_bcopy(const void *src, unsigned char *dst, size_t n)
{
 int result; // eax

 result = -1;
 if ( src && dst )
 {
 if ( n )
 {
 memmove(dst, src, n);
 return *dst;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x2590 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x25B0 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // eax
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

 if ( !flag )
 return -1;
 v1 = *flag;
 __asm__ volatile("lock; orl %0, %1" : : "r"(0), "m"(*((volatile signed int *)&retaddr)) : "memory");
 return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x25D0 */
void test_memory_op_functions()
{
 int v0; // eax
 int v1; // ecx
 bool v2; // cc
 int v3; // eax
 signed int v4; // [esp+0h] [ebp-1Ch] BYREF
 int v5; // [esp+8h] [ebp-14h]
 unsigned int v6[4]; // [esp+Ch] [ebp-10h] BYREF

 puts(asc_3621);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 memcpy(v6, "HHelloWorl", 10);
 printf("MEMOP-L2-03: %c\n", 72);
 v0 = memcmp(&unk_3670, &unk_367C, 0xCu);
 v1 = -(v0 != 0);
 v2 = v0 <= 0;
 v3 = 1;
 if ( v2 )
 v3 = v1;
 printf("MEMOP-L2-04: %d\n", v3);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v5 = 5;
 __asm__ volatile("lock; orl %0, %1" : : "r"(0), "m"(v4) : "memory");
 printf("MEMOP-L3-02: %d\n", v5 + 5);
}


/* Function: main @ 0x2700 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}






/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: printf @ 0x607C */

/* FAILED to decompile: memmove @ 0x6080 */

/* FAILED to decompile: free @ 0x6084 */

/* FAILED to decompile: memcpy @ 0x6088 */

/* FAILED to decompile: memcmp @ 0x608C */

/* FAILED to decompile: __cxa_finalize @ 0x6090 */

/* FAILED to decompile: perror @ 0x6094 */

/* FAILED to decompile: waitpid @ 0x6098 */

/* FAILED to decompile: realloc @ 0x609C */

/* FAILED to decompile: malloc @ 0x60A0 */

/* FAILED to decompile: puts @ 0x60A4 */

/* FAILED to decompile: exit @ 0x60A8 */

/* FAILED to decompile: memset @ 0x60AC */

/* FAILED to decompile: fork @ 0x60B0 */

/* FAILED to decompile: calloc @ 0x60B4 */

/* Total functions decompiled: 70, failed: 16 */
