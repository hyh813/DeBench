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

/* Type definitions for custom structures */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* NULL definition */
#define NULL ((void*)0)

/* IDA/Compiler macro definitions */
#define JUMPOUT(x) do {} while(0)
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* GCC intrinsic for reading FS segment (stack canary) */
#define __readfsqword(offset) ({ unsigned long long __val; \
    asm volatile("movq %%fs:%1, %0" : "=r"(__val) : "m"(*(const unsigned long long*)((unsigned long long)(offset)))); \
    __val; })

/* Atomic operation intrinsic */
#define _InterlockedOr64(addr, val) __atomic_or_fetch((long long*)(addr), (long long)(val), __ATOMIC_SEQ_CST)

/* Function declarations */
extern int extern_function(int x);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/3/3_gcc_O2_g
 * Processor: pc
 */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}


/* Function: main @ 0x1220 */
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

/* Global variable declarations */
int global_counter = 0;
static int file_scope_static = 0;
extern int extern_global_var;

/* Data declarations */
static const char *const_string = "Hello";
static char *s = "Stack Memory Test";
static char *asc_30E6 = "Heap Memory Test";
static char *aD = "value after free: %d\n";
static char *aFork_0 = "fork";
static char *byte_33F0 = "Signal terminated\n";
static char *byte_33C8 = "Normal exit, status: %d\n";
static char *asc_3438 = "Static and Global Memory Test";
static char *asc_3688 = "Memory Operation Functions Test";
static int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int counter_1 = 0;
int (*global_func_ptr)(int) = NULL;


/* Function: double_value @ 0x1340 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: local_vars @ 0x1350 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1360 */
int local_array(int n)
{
 int v1; // edx
 int *v2; // rax
 int arr[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h] BYREF

 v1 = 0;
 v5 = __readfsqword(0x28u);
 v2 = arr;
 do
 {
 *v2++ = v1;
 v1 += n;
 }
 while ( v2 != (int *)&v5 );
 return arr[5];
}


/* Function: local_struct @ 0x13B0 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x13C0 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x13D0 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x13E0 */
int large_stack_frame()
{
 long long i; // rax
 char large_buf[2056]; // [rsp+0h] [rbp-818h]
 unsigned long long v3; // [rsp+808h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 2048; ++i )
 large_buf[i] = i;
 return large_buf[1024];
}


/* Function: vla_stack @ 0x1440 */
int vla_stack(int n)
{
 long long v1; // rdx
 unsigned int *v2; // rcx
 short v3; // dx
 signed long long v4; // rdx
 void *v5; // rsp
 long long v6; // rax
 unsigned int v9[1022]; // [rsp+8h] [rbp-1010h] BYREF
 unsigned long long v10[2]; // [rsp+1008h] [rbp-10h] BYREF

 v10[1] = __readfsqword(0x28u);
 if ( (unsigned int)(n - 1) > 0x3E7 )
 return -1;
 v1 = 4LL * n + 15;
 v2 = (unsigned int *)((char *)v10 - (v1 & 0xFFFFFFFFFFFFF000LL));
 v3 = v1 & 0xFFF0;
 if ( v10 != (unsigned long long *)v2 )
 {
 while ( v9 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 *(unsigned long long *)((char *)&v9[-2] + v4) = *(unsigned long long *)((char *)&v9[-2] + v4);
 v6 = 0;
 do
 {
 v9[v6] = 2 * v6;
 ++v6;
 }
 while ( v6 != n );
 return v9[n >> 1];
}


/* Function: alloca_usage @ 0x1510 */
int alloca_usage(int n)
{
 long long v1; // rdx
 long long *v2; // rcx
 short v3; // dx
 signed long long v4; // rdx
 void *v5; // rsp
 int v6; // eax
 unsigned int *v7; // rdx
 long long v9; // [rsp+0h] [rbp-1018h]
 long long v10; // [rsp+8h] [rbp-1010h] BYREF
 unsigned char v11[7]; // [rsp+10h] [rbp-1008h] BYREF
 unsigned long long v12[2]; // [rsp+1008h] [rbp-10h] BYREF

 v12[1] = __readfsqword(0x28u);
 if ( n <= 0 )
 return -1;
 v1 = 4LL * n + 23;
 v2 = (unsigned long long *)((char *)v12 - (v1 & 0xFFFFFFFFFFFFF000LL));
 v3 = v1 & 0xFFF0;
 if ( v12 != v2 )
 {
 while ( &v10 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 *(long long *)((char *)&v9 + v4) = *(long long *)((char *)&v9 + v4);
 v6 = 0;
 v7 = v11;
 do
 {
 *v7 = v6;
 v6 += 3;
 ++v7;
 }
 while ( v6 != 3 * n );
 return *(unsigned int *)&v11[4 * (n >> 1)];
}


/* Function: stack_alias @ 0x15E0 */
int stack_alias(int *p1, int *p2)
{
 return 20;
}


/* Function: test_stack_memory @ 0x15F0 */
void test_stack_memory()
{
 int v0; // eax
 int v1; // eax

 puts(s);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage(10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x16F0 */
int heap_basic(int n)
{
 unsigned int *v1; // rax
 long long i; // rdx
 int v3; // r12d

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = 2 * i;
 }
 v3 = v1[n / 2];
 free(v1);
 return v3;
}


/* Function: heap_calloc @ 0x1760 */
int heap_calloc(int n)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rdx
 int v3; // r12d

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
 while ( v2 != &v1[n] );
 }
 free(v1);
 return v3;
}


/* Function: heap_realloc @ 0x17C0 */
int heap_realloc()
{
 unsigned long long *v0; // rax
 void *v1; // rbp
 unsigned int *v2; // rax
 int v3; // r12d

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 *v0 = 0x200000001LL;
 v0[1] = 0x400000003LL;
 *((unsigned int *)v0 + 4) = 5;
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
 v3 = -2;
 free(v1);
 }
 return v3;
}


/* Function: heap_array @ 0x1850 */
int heap_array(int n)
{
 unsigned int *v1; // rax
 unsigned int *v2; // rcx
 int v3; // edx
 int v4; // r12d

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = v1;
 v3 = 0;
 do
 {
 *v2 = v3;
 v3 += 3;
 ++v2;
 }
 while ( v3 != 3 * n );
 }
 v4 = v1[n / 2];
 free(v1);
 return v4;
}


/* Function: heap_struct @ 0x18C0 */
int heap_struct(int x)
{
 void *v1; // rax
 int v2; // r12d

 v1 = malloc(8u);
 if ( !v1 )
 return -1;
 v2 = 3 * x;
 free(v1);
 return v2;
}


/* Function: heap_nested @ 0x1900 */
int heap_nested(Node **head)
{
 Node *v1; // rax
 Node *v2; // rbp
 Node *v3; // rax

 v1 = (Node *)malloc(0x10u);
 *head = v1;
 if ( !v1 )
 return -1;
 v1->data = 10;
 v2 = v1;
 v3 = (Node *)malloc(0x10u);
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


/* Function: linked_list_heap @ 0x1970 */
int linked_list_heap()
{
 unsigned long long *v0; // rax
 int v1; // ebp
 unsigned long long *v2; // rbx
 unsigned long long *v3; // r12
 unsigned long long *v4; // rax
 int v5; // r12d
 void *v6; // rdi
 void *v8; // rdi

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = v0;
 v0 = malloc(0x10u);
 if ( !v0 )
 break;
 *(unsigned int *)v0 = v1;
 v0[1] = 0;
 if ( v2 )
 v3[1] = v0;
 else
 v2 = v0;
 v1 += 10;
 if ( v1 == 50 )
 {
 v4 = v2;
 v5 = 0;
 do
 {
 v5 += *(unsigned int *)v4;
 v4 = (unsigned long long *)v4[1];
 }
 while ( v4 );
 do
 {
 v6 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v6);
 }
 while ( v2 );
 return v5;
 }
 }
 while ( v2 )
 {
 v8 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v8);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1A10 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // rax

 result = (TreeNode *)malloc(0x18u);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1A40 */
int tree_heap_traversal()
{
 void *v0; // rax
 void *v1; // rbp
 void *v2; // r12
 void *v3; // r13
 void *v5; // rdi

 v0 = malloc(0x18u);
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = malloc(0x18u);
 if ( v2 )
 {
 v3 = malloc(0x18u);
 if ( v3 )
 {
 free(v2);
 free(v3);
 free(v1);
 return 60;
 }
 free(v2);
 }
 else
 {
 v5 = malloc(0x18u);
 if ( v5 )
 free(v5);
 }
 free(v1);
 return -2;
}


/* Function: memory_leak @ 0x1AE0 */
int memory_leak(int n)
{
 unsigned int *v1; // rax
 long long i; // rdx

 v1 = malloc(4LL * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = i;
 }
 return v1[n / 2];
}


/* Function: dangling_pointer @ 0x1B40 */
int dangling_pointer()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rbx

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x1B80 */
int double_free(int *p)
{
 void *v2; // rax
 void *v3; // rbp

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


/* Function: heap_overflow @ 0x1BC0 */
int heap_overflow()
{
 int *v0; // rax
 int *v1; // rcx
 int i; // edx
 int v3; // r12d

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 0; i != 1100; i += 100 )
 *v1++ = i;
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x1C10 */
void test_heap_memory()
{
 unsigned int *v0; // rax
 long long i; // rdx
 int v2; // r12d
 unsigned int *v3; // rax
 unsigned int *v4; // rdx
 int v5; // r12d
 int v6; // eax
 unsigned int *v7; // rax
 unsigned int *v8; // rcx
 int j; // edx
 int v10; // r12d
 void *v11; // rdi
 int v12; // edx
 void **v13; // r12
 unsigned int *v14; // rax
 int v15; // edx
 int v16; // eax
 int v17; // eax
 unsigned int *v18; // rax
 int v19; // edx
 int v20; // eax
 unsigned int *v21; // r12
 long long v22; // rdx
 int status; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v24; // [rsp+8h] [rbp-10h]

 v24 = __readfsqword(0x28u);
 puts(asc_30E6);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 for ( i = 0; i != 10; ++i )
 v0[i] = 2 * i;
 v2 = v0[5];
 free(v0);
 }
 else
 {
 v2 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v2);
 v3 = calloc(5u, 4u);
 if ( v3 )
 {
 v4 = v3;
 v5 = 0;
 do
 v5 += *v4++;
 while ( v3 + 5 != v4 );
 free(v3);
 }
 else
 {
 v5 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
 v6 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v6);
 v7 = malloc(0x28u);
 if ( v7 )
 {
 v8 = v7;
 for ( j = 0; j != 30; j += 3 )
 *v8++ = j;
 v10 = v7[5];
 free(v7);
 }
 else
 {
 v10 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v10);
 v11 = malloc(8u);
 if ( v11 )
 {
 free(v11);
 v12 = 15;
 }
 else
 {
 v12 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v12);
 v13 = (void **)malloc(0x10u);
 if ( v13 )
 {
 v14 = malloc(0x10u);
 v13[1] = v14;
 if ( v14 )
 {
 *v14 = 20;
 v15 = 0;
 *((unsigned long long *)v14 + 1) = 0;
 }
 else
 {
 free(v13);
 v15 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v15);
 free(v13[1]);
 free(v13);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v16 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v16);
 v17 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v17);
 v18 = malloc(0x14u);
 if ( v18 )
 {
 v18[4] = 4;
 v19 = 2;
 *(unsigned long long *)v18 = 0x100000000LL;
 *((unsigned long long *)v18 + 1) = 0x300000002LL;
 }
 else
 {
 v19 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v19);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v20 = fork();
 if ( !v20 )
 {
 v21 = (unsigned int *)malloc(4u);
 if ( v21 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v21);
 v22 = *v21;
 }
 else
 {
 v22 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aD, v22);
 exit(0);
 }
 if ( v20 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v20, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( (char)((status & 0x7F) + 1) > 1 )
 __printf_chk(1, byte_33F0);
 }
 else
 {
 __printf_chk(1, byte_33C8, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x1FE0 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x2000 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x2010 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx > 9 )
 return -1;
 else
 return global_array[idx];
}


/* Function: static_local @ 0x2040 */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x2060 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x2070 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2080 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2090 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x20B0 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x20C0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x20D0 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x20E0 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x20F0 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x2100 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x2110 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2130 */
int global_heap_store(int *p)
{
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2150 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x2160 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x2170 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x2180 */
void test_static_global()
{
 int v0; // eax

 puts(asc_3438);
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


/* Function: memop_memset @ 0x2390 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( buf && size )
 return *(unsigned char *)memset(buf, fill_value, size);
 else
 return -1;
}


/* Function: memop_memcpy @ 0x23D0 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( n == 0 || src == 0 || !dst )
 return -1;
 else
 return *(unsigned int *)((char *)memcpy(dst, src, n) + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x2410 */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x2450 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // r8d
 int result; // eax

 if ( n == 0 || p2 == 0 || !p1 )
 return 0;
 v3 = memcmp(p1, p2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: memop_bzero @ 0x24A0 */
int memop_bzero(void *buf, size_t n)
{
 if ( buf )
 return *(unsigned char *)memset(buf, 0, n);
 else
 return -1;
}


/* Function: memop_bcopy @ 0x24D0 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( n == 0 || dst == 0 || !src )
 return -1;
 else
 return *(unsigned char *)memmove(dst, src, n);
}


/* Function: memop_unaligned_access @ 0x2510 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2530 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // edx
 volatile signed long long retaddr; // [rsp+0h] [rbp+0h] BYREF

 if ( !flag )
 return -1;
 v1 = *flag;
 _InterlockedOr64(&retaddr, 0);
 return v1 + *flag;
}


/* Function: test_memory_op_functions @ 0x2550 */
void test_memory_op_functions()
{
 int v0; // eax
 long long v1; // rdx
 signed long long v2; // [rsp+0h] [rbp-158h] BYREF
 int flag; // [rsp+Ch] [rbp-14Ch]
 int cmp_a[3]; // [rsp+10h] [rbp-148h] BYREF
 int cmp_b[3]; // [rsp+1Ch] [rbp-13Ch] BYREF
 char zero_buf[10]; // [rsp+2Bh] [rbp-12Dh] BYREF
 char move_buf[11]; // [rsp+35h] [rbp-123h] BYREF
 char buffer[256]; // [rsp+40h] [rbp-118h] BYREF
 unsigned long long v9; // [rsp+148h] [rbp-10h]

 v9 = __readfsqword(0x28u);
 puts(asc_3688);
 memset(buffer, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy(move_buf, "HelloWorld");
 memmove(&move_buf[1], move_buf, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 *(unsigned long long *)cmp_a = 0x200000001LL;
 cmp_a[2] = 3;
 *(unsigned long long *)cmp_b = 0x200000001LL;
 cmp_b[2] = 4;
 v0 = memcmp(cmp_a, cmp_b, 0xCu);
 v1 = (unsigned int)-(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 memset(zero_buf, 0, sizeof(zero_buf));
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 flag = 5;
 _InterlockedOr64(&v2, 0);
 __printf_chk(1, "MEMOP-L3-02: %d\n", flag + 5);
}


/* Function: extern_function @ 0x2710 - external function, definition removed to avoid multiple definitions */


/* Function: .term_proc @ 0x2718 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x6050 */

/* FAILED to decompile: __libc_start_main @ 0x6058 */

/* FAILED to decompile: puts @ 0x6060 */

/* FAILED to decompile: __stack_chk_fail @ 0x6068 */

/* FAILED to decompile: memset @ 0x6070 */

/* FAILED to decompile: memcmp @ 0x6078 */

/* FAILED to decompile: calloc @ 0x6080 */

/* FAILED to decompile: memcpy @ 0x6088 */

/* FAILED to decompile: malloc @ 0x6090 */

/* FAILED to decompile: realloc @ 0x6098 */

/* FAILED to decompile: __printf_chk @ 0x60A0 */

/* FAILED to decompile: memmove @ 0x60A8 */

/* FAILED to decompile: waitpid @ 0x60B0 */

/* FAILED to decompile: perror @ 0x60B8 */

/* FAILED to decompile: exit @ 0x60C0 */

/* FAILED to decompile: fork @ 0x60C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x60D0 */

/* FAILED to decompile: __gmon_start__ @ 0x60E0 */

/* Total functions decompiled: 79, failed: 18 */
