#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef __SIZE_TYPE__
typedef unsigned long size_t;
#endif
#ifndef __UINTPTR_TYPE__
typedef unsigned long uintptr_t;
#endif
#ifndef __INTPTR_TYPE__
typedef long intptr_t;
#endif
#ifndef _PTRDIFF_T
typedef unsigned long ptrdiff_t;
#endif
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Intrinsic functions */
static __inline__ unsigned int __readgsdword(unsigned int offset) {
    unsigned int val;
    __asm__ __volatile__("movl %%gs:%1,%0" : "=r" (val) : "m" (*(unsigned int *)offset));
    return val;
}

#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Struct definitions */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    struct TreeNode *left;
    struct TreeNode *right;
    int data;
} TreeNode;

/* Global variables */
int global_counter = 0;
int counter_1 = 0;
int file_scope_static = 0;
int extern_global_var = 100;
int (*global_func_ptr)(int) = ((void *)0);
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
const char const_string[] = "Hello World";

/* String constants */
const char asc_3008[] = "=== Testing Stack Memory ===";
const char asc_30EA[] = "=== Testing Heap Memory ===";
const char asc_3428[] = "=== Testing Static/Global Memory ===";
const char unk_319C[] = "value after free: %d\n";
const char unk_33E4[] = "signal %d\n";
const char unk_33BC[] = "exit status %d\n";
const char aFork_0[] = "fork";

/* External function declarations */
int extern_function(int x);

/* Forward declarations */
void test_stack_memory();
void test_heap_memory();
void test_static_global();
void test_memory_op_functions();





/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_gcc_O3_g
 * Processor: pc
 */







/* Function: sub_1140 @ 0x1140 */
int sub_1140(int a1)
{
 return (*(int (**)(void))(a1 + 80))();
}


/* Function: main @ 0x1250 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_12AC @ 0x12AC */
void sub_12AC()
{
 ;
}






/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */









/* Function: double_value @ 0x1400 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: alloca_usage_0 @ 0x1410 */
int alloca_usage_0()
{
 return 15;
}


/* Function: local_vars @ 0x1420 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1430 */
int local_array(int n)
{
 return 5 * n;
}


/* Function: local_struct @ 0x1440 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x1450 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x1470 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1480 */
long long large_stack_frame()
{
 int i; // eax
 union { long long ll; struct { int low; int high; }; } result; // rax
 char large_buf[2048]; // [esp+Ch] [ebp-810h]
 unsigned int v3; // [esp+80Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 2048; ++i )
 large_buf[i] = i;
 result.low = large_buf[1024];
 result.high = v3 - __readgsdword(0x14u);
 return result.ll;
}


/* Function: vla_stack @ 0x14E0 */
int vla_stack(int n)
{
 int v1; // edx
 unsigned short *v2; // ecx
 short v3; // dx
 int v4; // edx
 void *v5; // esp
 int v6; // eax
 unsigned short v8[2048]; // [esp-1000h] [ebp-1018h] BYREF
 unsigned int v9[5]; // [esp+0h] [ebp-18h] BYREF

 v9[3] = __readgsdword(0x14u);
 if ( (unsigned int)(n - 1) > 0x3E7 )
 return -1;
 v1 = 4 * n + 15;
 v2 = (unsigned short *)((char *)v9 - (v1 & 0xFFFFF000));
 v3 = v1 & 0xFFF0;
 if ( (void *)v9 != (void *)v2 )
 {
 while ( (void *)v8 != (void *)v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = (v4 ? alloca(v4) : alloca(1));
 v6 = 0;
 do
 {
 ((unsigned int *)v5)[v6] = v6;
 ++v6;
 }
 while ( v6 != n );
 return *((unsigned int *)v5 + (n >> 1));
}


/* Function: alloca_usage @ 0x1590 */
int alloca_usage(int n)
{
 int v1; // edx
 unsigned int *v2; // ebx
 short v3; // dx
 int v4; // edx
 void *v5; // esp
 int i; // eax
 unsigned int v8[1024]; // [esp-1000h] [ebp-1018h] BYREF
 unsigned int v9[5]; // [esp+0h] [ebp-18h] BYREF

 v9[3] = __readgsdword(0x14u);
 if ( n <= 0 )
 return -1;
 v1 = 4 * n + 27;
 v2 = (unsigned int *)((char *)v9 - (v1 & 0xFFFFF000));
 v3 = v1 & 0xFFF0;
 if ( v9 != v2 )
 {
 while ( v8 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4 ? v4 : 1);
 for ( i = 0; i != n; ++i )
 ((unsigned int *)v5)[i] = 3 * i;
 return ((unsigned int *)v5)[n >> 1];
}


/* Function: stack_alias @ 0x1630 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x1640 */
void test_stack_memory()
{
 int v0; // eax
 int v1; // eax

 puts(asc_3008);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage_0();
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1720 */
int heap_basic(int n)
{
 unsigned int *v1; // eax
 unsigned int *v2; // edx
 int i; // eax
 int v4; // esi

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v2[i] = i * 2;
 }
 v4 = v2[n / 2];
 free(v2);
 return v4;
}


/* Function: heap_calloc @ 0x1790 */
int heap_calloc(int n)
{
 unsigned int *v1; // eax
 unsigned int *v2; // edx
 int v3; // esi

 v1 = calloc(n, 4u);
 if ( !v1 )
 return -1;
 if ( n <= 0 )
 {
 v3 = 0;
 }
 else
 {
 v2 = v1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( &v1[n] != v2 );
 }
 free(v1);
 return v3;
}


/* Function: heap_realloc @ 0x1800 */
int heap_realloc()
{
 int *v0; // eax
 int *v1; // esi
 unsigned int *v2; // eax
 int v3; // esi
 int *p; // [esp+0h] [ebp-1Ch]

 v0 = (int *)malloc(0x14u);
 if ( !v0 )
 return -1;
 *v0 = 1;
 v1 = v0;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v3 = 50;
 if ( v2[2] != 3 )
 v3 = -3;
 free(v2);
 }
 else
 {
 p = v1;
 v3 = -2;
 free(p);
 }
 return v3;
}


/* Function: heap_array @ 0x18A0 */
int heap_array(int n)
{
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int i; // eax
 int v4; // esi

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v2[i] = 3 * i;
 }
 v4 = v2[n / 2];
 free(v2);
 return v4;
}


/* Function: heap_struct @ 0x1910 */
int heap_struct(int x)
{
 void *v1; // eax
 int v2; // esi

 v1 = malloc(8u);
 if ( !v1 )
 return -1;
 v2 = 3 * x;
 free(v1);
 return v2;
}


/* Function: heap_nested @ 0x1960 */
int heap_nested(Node **head)
{
 Node *v1; // esi
 Node *v2; // eax

 v1 = (Node *)malloc(8u);
 *head = v1;
 if ( !v1 )
 return -1;
 v1->data = 10;
 v2 = (Node *)malloc(8u);
 v1->next = v2;
 if ( v2 )
 {
 v2->data = 20;
 v2->next = 0;
 return 0;
 }
 else
 {
 free(v1);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x19E0 */
int linked_list_heap()
{
 int v0; // ebp
 unsigned int *v1; // edi
 unsigned int *v2; // esi
 unsigned int *v3; // eax
 unsigned int *v4; // eax
 int v5; // edi
 void *v6; // eax
 void *v8; // eax

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = malloc(8u);
 if ( !v3 )
 break;
 *v3 = v0;
 v3[1] = 0;
 if ( v2 )
 {
 v0 += 10;
 v1[1] = v3;
 if ( v0 == 50 )
 goto LABEL_7;
 }
 else
 {
 v0 += 10;
 v2 = v3;
 if ( v0 == 50 )
 {
LABEL_7:
 v4 = v2;
 v5 = 0;
 do
 {
 v5 += *v4;
 v4 = (unsigned int *)v4[1];
 }
 while ( v4 );
 do
 {
 v6 = v2;
 v2 = (unsigned int *)v2[1];
 free(v6);
 }
 while ( v2 );
 return v5;
 }
 }
 v1 = v3;
 }
 while ( v2 )
 {
 v8 = v2;
 v2 = (unsigned int *)v2[1];
 free(v8);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1A90 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // eax

 result = (TreeNode *)malloc(0xCu);
 if ( result )
 {
 result->left = 0;
 result->right = 0;
 result->data = data;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1AD0 */
int tree_heap_traversal()
{
 void *v0; // eax
 void *v1; // esi
 void *ptr; // edi
 void *v3; // ebp
 void *v5; // eax

 v0 = malloc(0xCu);
 if ( !v0 )
 return -1;
 v1 = v0;
 ptr = malloc(0xCu);
 if ( !ptr )
 {
 v5 = malloc(0xCu);
 if ( v5 )
 free(v5);
 goto LABEL_7;
 }
 v3 = malloc(0xCu);
 if ( !v3 )
 {
 free(ptr);
LABEL_7:
 free(v1);
 return -2;
 }
 free(ptr);
 free(v3);
 free(v1);
 return 60;
}


/* Function: memory_leak @ 0x1B90 */
int memory_leak(int n)
{
 unsigned int *v1; // eax
 int i; // edx

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = i;
 }
 return v1[n / 2];
}


/* Function: dangling_pointer @ 0x1BF0 */
int dangling_pointer()
{
 void *v0; // eax
 void *ptr; // esi

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 ptr = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(unsigned int *)ptr;
}


/* Function: double_free @ 0x1C40 */
int double_free(int *p)
{
 void *ptr; // eax
 void *v3; // esi

 if ( p )
 return *p;
 ptr = malloc(4u);
 v3 = ptr;
 if ( !ptr )
 return -1;
 free(ptr);
 free(v3);
 return -2;
}


/* Function: heap_overflow @ 0x1CA0 */
int heap_overflow()
{
 void *v0; // eax

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 free(v0);
 return 0;
}


/* Function: test_heap_memory @ 0x1CE0 */
void test_heap_memory()
{
 unsigned int *v0; // eax
 int v1; // eax
 unsigned int *v2; // eax
 int v3; // esi
 int v4; // eax
 unsigned int *v5; // eax
 int v6; // eax
 void *v7; // eax
 int v8; // eax
 void **v9; // esi
 unsigned int *v10; // eax
 int v11; // eax
 int v12; // ebp
 unsigned int *v13; // edi
 unsigned int *v14; // esi
 unsigned int *v15; // eax
 unsigned int *v16; // eax
 int v17; // edi
 void *v18; // eax
 int v19; // eax
 unsigned int *v20; // eax
 int v21; // eax
 int v22; // eax
 unsigned int *v23; // esi
 int v24; // eax
 void *v25; // eax
 int result; // [esp+8h] [ebp-34h]
 int status[9]; // [esp+18h] [ebp-24h] BYREF

 status[1] = __readgsdword(0x14u);
 puts(asc_30EA);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 v0[1] = 2;
 v0[2] = 4;
 v0[3] = 6;
 v0[4] = 8;
 v0[5] = 10;
 v0[6] = 12;
 v0[7] = 14;
 v0[8] = 16;
 v0[9] = 18;
 free(v0);
 v1 = 10;
 }
 else
 {
 v1 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
 v2 = calloc(5u, 4u);
 if ( v2 )
 {
 v3 = v2[4] + v2[3] + v2[2] + *v2 + v2[1];
 free(v2);
 }
 else
 {
 v3 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v3);
 v4 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v4);
 v5 = (unsigned int *)malloc(0x28u);
 if ( v5 )
 {
 v5[1] = 3;
 v5[2] = 6;
 v5[3] = 9;
 v5[4] = 12;
 v5[5] = 15;
 v5[6] = 18;
 v5[7] = 21;
 v5[8] = 24;
 v5[9] = 27;
 free(v5);
 v6 = 15;
 }
 else
 {
 v6 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v6);
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
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
 v9 = (void **)malloc(16u);
 if ( v9 )
 {
 v10 = malloc(8u);
 v9[1] = v10;
 if ( v10 )
 {
 *v10 = 20;
 v10[1] = 0;
 v11 = 0;
 }
 else
 {
 free(v9);
 v11 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v11);
 free(v9[1]);
 free(v9);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v12 = 0;
 v13 = 0;
 v14 = 0;
 while ( 1 )
 {
 v15 = malloc(8u);
 if ( !v15 )
 break;
 *v15 = v12;
 v15[1] = 0;
 if ( v14 )
 {
 v12 += 10;
 v13[1] = v15;
 if ( v12 == 50 )
 goto LABEL_19;
 }
 else
 {
 v12 += 10;
 v14 = v15;
 if ( v12 == 50 )
 {
LABEL_19:
 v16 = v14;
 v17 = 0;
 do
 {
 v17 += *v16;
 v16 = (unsigned int *)v16[1];
 }
 while ( v16 );
 do
 {
 v18 = v14;
 v14 = (unsigned int *)v14[1];
 free(v18);
 }
 while ( v14 );
 goto LABEL_22;
 }
 }
 v13 = v15;
 }
 while ( v14 )
 {
 v25 = v14;
 v14 = (unsigned int *)v14[1];
 free(v25);
 }
 v17 = -1;
LABEL_22:
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v17);
 v19 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v19);
 v20 = malloc(0x14u);
 if ( v20 )
 {
 *v20 = 0;
 v20[1] = 1;
 v20[2] = 2;
 v20[3] = 3;
 v20[4] = 4;
 v21 = 2;
 }
 else
 {
 v21 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v21);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ", result);
 v22 = fork();
 if ( !v22 )
 {
 v23 = malloc(4u);
 if ( v23 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v23);
 v24 = *v23;
 }
 else
 {
 v24 = -1;
 }
 __printf_chk(1, &unk_319C, v24);
 exit(0);
 }
 if ( v22 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v22, status, 0);
 if ( (status[0] & 0x7F) != 0 )
 {
 if ( (char)((status[0] & 0x7F) + 1) > 1 )
 __printf_chk(1, &unk_33E4, status[0] & 0x7F);
 }
 else
 {
 __printf_chk(1, &unk_33BC, BYTE1(status[0]));
 }
 }
}


/* Function: global_var_access @ 0x2180 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x21A0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x21C0 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x21F0 */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x2220 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x2230 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2250 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2270 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2290 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x22A0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x22B0 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x22C0 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x22E0 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x2300 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x2320 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2350 */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2370 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2380 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x2390 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x23A0 */
void test_static_global()
{
 int v0; // eax

 puts(asc_3428);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x2580 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x25D0 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( n == 0 || src == 0 || !dst )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFC) - 4);
}


/* Function: memop_memmove @ 0x2630 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x2680 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // edx
 int result; // eax

 if ( n == 0 || p2 == 0 || !p1 )
 return 0;
 v3 = memcmp(p1, p2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: memop_bzero @ 0x26F0 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2730 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( n == 0 || dst == 0 || !src )
 return -1;
 memmove(dst, src, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x2790 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x27B0 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // edx

 if ( !flag )
 return -1;
 v1 = *flag;
#if defined(__GNUC__)
 __sync_synchronize();
#elif defined(_MSC_VER)
 _ReadWriteBarrier();
#endif
 return v1 + *flag;
}


/* Function: test_memory_op_functions @ 0x27D0 */
void test_memory_op_functions()
{
 int v0; // edx
 int v1; // eax
 signed int v2[6]; // [esp+0h] [ebp-15Ch] BYREF
 int flag; // [esp+18h] [ebp-144h]
 int cmp_a[3]; // [esp+1Ch] [ebp-140h] BYREF
 int cmp_b[3]; // [esp+28h] [ebp-134h] BYREF
 char zero_buf[10]; // [esp+37h] [ebp-125h] BYREF
 char move_buf[11]; // [esp+41h] [ebp-11Bh] BYREF
 char buffer[256]; // [esp+4Ch] [ebp-110h] BYREF
 unsigned int v9; // [esp+14Ch] [ebp-10h]

 v9 = __readgsdword(0x14u);
 puts("=== Testing Memory Operations ===");
 memset(buffer, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy(move_buf, "HelloWorld");
 memmove(&move_buf[1], move_buf, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 v0 = memcmp(cmp_a, cmp_b, 0xCu);
 v1 = -(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 memset(zero_buf, 0, sizeof(zero_buf));
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 flag = 5;
 __sync_or_and_fetch(v2, 0);
 __printf_chk(1, "MEMOP-L3-02: %d\n", flag + 5);
}









/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: memmove @ 0x6030 */

/* FAILED to decompile: free @ 0x6034 */

/* FAILED to decompile: memcpy @ 0x6038 */

/* FAILED to decompile: memcmp @ 0x603C */

/* FAILED to decompile: __stack_chk_fail @ 0x6040 */

/* FAILED to decompile: __cxa_finalize @ 0x6044 */

/* FAILED to decompile: perror @ 0x6048 */

/* FAILED to decompile: waitpid @ 0x604C */

/* FAILED to decompile: realloc @ 0x6050 */

/* FAILED to decompile: malloc @ 0x6054 */

/* FAILED to decompile: puts @ 0x6058 */

/* FAILED to decompile: exit @ 0x605C */

/* FAILED to decompile: memset @ 0x6060 */

/* FAILED to decompile: __printf_chk @ 0x6064 */

/* FAILED to decompile: fork @ 0x6068 */

/* FAILED to decompile: calloc @ 0x606C */

/* Total functions decompiled: 89, failed: 17 */
