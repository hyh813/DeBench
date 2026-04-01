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
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef _Bool bool;
typedef int pid_t;

#define false 0
#define true 1

#include <stdarg.h>
#include <stdio.h>

/* Global variable declarations */
int global_counter;
int extern_global_var;
static int file_scope_static;
int (*global_func_ptr)(void);
static int counter_1;
const char *const_string = "Hello";
unsigned int global_array[10];
const char *s = "Test String";
const char *asc_12AD8 = "Heap Memory Test";
const char *asc_12CCC = "Static/Global Memory Test";
const char *asc_12F50 = "Memory Operations Test";
const char *aD = "%d\n";
const char *aFork_0 = "fork failed";
const char *byte_12C5C = "child crashed with signal %d\n";
const char *byte_12C34 = "child exited normally, status=%d\n";

/* External function declarations */
int call_weak_fn(void);
int test_stack_memory(int argc, const char **argv, const char **envp);
int test_heap_memory(int a1);
int test_static_global(int a1);
void test_memory_op_functions(int a1);
pid_t fork(void);
pid_t waitpid(pid_t pid, int *status, int options);
void exit(int status);
void JUMPOUT(int addr);
int _printf_chk(int flag, const char *format, ...);
void __sync_synchronize(void);
static int extern_function(int a1);
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Atomic operation macro for ARM LDREXD/STREXD */
#define __sync_synchronize() __asm__ __volatile__("dmb" ::: "memory")

/* Atomic compare-and-swap helper */
#define MEMORY(expected, desired, ptr) __sync_val_compare_and_swap(ptr, expected, desired)
#define MEMORY_IDX __sync_val_compare_and_swap

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_gcc_O3_no_g
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
 return;
}


/* Function: main @ 0x10684 */
int main(int argc, const char **argv, const char **envp)
{
 int v3; // r0
 int v4; // r0
 int v5; // r0

 v3 = test_stack_memory(argc, argv, envp);
 v4 = test_heap_memory(v3);
 v5 = test_static_global(v4);
 test_memory_op_functions(v5);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn implementation */
int call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x10798 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: alloca_usage.constprop.0 @ 0x107A0 */
int alloca_usage_constprop_0()
{
 return 15;
}


/* Function: local_vars @ 0x107A8 */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x107B4 */
int local_array(int a1)
{
 return 5 * a1;
}


/* Function: local_struct @ 0x107BC */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x107C4 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x107D4 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x107E0 */
int large_stack_frame()
{
 int v0; // r2
 char *v1; // r3
 unsigned char v3[2048]; // [sp+3h] [bp-80Dh] BYREF
 char v4; // [sp+803h] [bp-Dh] BYREF

 v0 = 0;
 v1 = v3;
 do
 *++v1 = v0++;
 while ( v1 != &v4 );
 return v3[1025];
}


/* Function: vla_stack @ 0x10850 */
int vla_stack(int a1)
{
 int v1; // r3
 int *v2; // r2
 int v4; // [sp+0h] [bp-Ch] BYREF

 if ( (unsigned int)(a1 - 1) >= 0x3E8 )
 return -1;
 v1 = 0;
 v2 = &v4 - 1;
 do
 {
 v2[1] = v1;
 ++v2;
 v1 += 2;
 }
 while ( v1 != 2 * a1 );
 return *(&v4 + (a1 >> 1));
}


/* Function: alloca_usage @ 0x108E0 */
int alloca_usage(int a1)
{
 int v1; // r2
 unsigned char *v2; // r3
 unsigned char v4[4]; // [sp+0h] [bp-Ch] BYREF

 if ( a1 <= 0 )
 return -1;
 v1 = 0;
 v2 = &v4[-4];
 do
 {
 *((unsigned int *)v2 + 1) = v1;
 v2 += 4;
 v1 += 3;
 }
 while ( v2 != &v4[4 * a1 - 4] );
 return *(unsigned int *)&v4[4 * (a1 >> 1)];
}


/* Function: stack_alias @ 0x10970 */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x10978 */
int test_stack_memory(int argc, const char **argv, const char **envp)
{
 int v0; // r0
 int v1; // r0

 puts(s);
 _printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 _printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 _printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 _printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 _printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 _printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 _printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage_constprop_0();
 _printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 return _printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10A48 */
int heap_basic(int a1)
{
 unsigned int *v2; // r0
 int v3; // r3
 char *v4; // r2
 int v5; // r4

 v2 = malloc(4 * a1);
 if ( !v2 )
 return -1;
 if ( a1 > 0 )
 {
 v3 = 0;
 v4 = (char *)(v2 - 1);
 do
 {
 *((unsigned int *)v4 + 1) = v3;
 v4 += 4;
 v3 += 2;
 }
 while ( v3 != 2 * a1 );
 }
 v5 = v2[a1 / 2];
 free(v2);
 return v5;
}


/* Function: heap_calloc @ 0x10AA4 */
int heap_calloc(signed int a1)
{
 char *v2; // r0
 int v3; // r4
 char *v4; // r3
 int v5; // t1

 v2 = (char *)calloc(a1, 4u);
 if ( !v2 )
 return -1;
 v3 = 0;
 if ( a1 > 0 )
 {
 v4 = v2 - 4;
 do
 {
 v5 = *((unsigned int *)v4 + 1);
 v4 += 4;
 v3 += v5;
 }
 while ( &v2[4 * a1 - 4] != v4 );
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
int heap_array(int a1)
{
 int v1; // r4
 unsigned int *v3; // r0
 int v4; // r2
 unsigned int *v5; // r3
 int v6; // r4

 v1 = a1;
 v3 = malloc(4 * a1);
 if ( !v3 )
 return -1;
 if ( a1 > 0 )
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
 v6 = v3[a1 / 2];
 free(v3);
 return v6;
}


/* Function: heap_struct @ 0x10BD8 */
int heap_struct(int a1)
{
 void *v2; // r0
 int v3; // r4

 v2 = malloc(8u);
 if ( !v2 )
 return -1;
 v3 = 3 * a1;
 free(v2);
 return v3;
}


/* Function: heap_nested @ 0x10C08 */
int heap_nested(unsigned int *a1)
{
 unsigned int *v2; // r0
 unsigned int *v3; // r4
 unsigned int *v4; // r3
 int result; // r0

 v2 = malloc(8u);
 *a1 = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 *v2 = 10;
 v4 = malloc(8u);
 v3[1] = v4;
 if ( v4 )
 {
 result = 0;
 *v4 = 20;
 v4[1] = 0;
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
unsigned int * create_tree_node(int a1)
{
 unsigned int *result; // r0

 result = malloc(0xCu);
 if ( result )
 {
 *result = a1;
 result[1] = 0;
 result[2] = 0;
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
int memory_leak(int a1)
{
 unsigned int *v2; // r0
 int v3; // r3
 char *v4; // r2

 v2 = malloc(4 * a1);
 if ( !v2 )
 return -1;
 if ( a1 > 0 )
 {
 v3 = 0;
 v4 = (char *)(v2 - 1);
 do
 {
 *((unsigned int *)v4 + 1) = v3;
 v4 += 4;
 ++v3;
 }
 while ( a1 != v3 );
 }
 return v2[a1 / 2];
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
int double_free(int a1)
{
 void *v2; // r0
 void *v3; // r4

 if ( a1 )
 return *(unsigned int *)a1;
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
int test_heap_memory(int a1)
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
 int v27; // [sp+0h] [bp-20h] BYREF

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
 waitpid(v21, &v27, 0);
 if ( (v27 & 0x7F) != 0 )
 {
 if ( ((v27 & 0x7F) + 1) << 24 >= 0x2000000 )
 _printf_chk(1, byte_12C5C);
 }
 else
 {
 _printf_chk(1, byte_12C34, BYTE1(v27));
 }
 return 0;
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
int global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return -1;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x11374 */
int static_local(int result, int a2, int a3, int *a4)
{
 bool v4; // zf

 v4 = result == 0;
 if ( result )
 result = 0;
 else
 a4 = &global_counter;
 if ( v4 )
 result = a4[1] + 1;
 else
 a4 = &global_counter;
 a4[1] = result;
 return result;
}


/* Function: call_static_func @ 0x11398 */
int call_static_func(int a1)
{
 return 2 * a1 + 1;
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
int set_file_static(int result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x11400 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x11410 */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x11420 */
int call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return -1;
}


/* Function: global_heap_store @ 0x11440 */
int global_heap_store(int a1)
{
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -1;
}


/* Function: static_complex_init @ 0x11450 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x11458 */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x11460 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x11468 */
int test_static_global(int a1)
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
 global_func_ptr = (int (*)(void))double_value;
 _printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 _printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 _printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 _printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return _printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x1163C */
int memop_memset(unsigned char *a1, size_t n, int c)
{
 bool v3; // zf

 v3 = n == 0;
 if ( n )
 v3 = a1 == 0;
 if ( v3 )
 return -1;
 memset(a1, c, n);
 return *a1;
}


/* Function: memop_memcpy @ 0x11670 */
int memop_memcpy(char *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 int v4; // r3

 v3 = a3 == 0;
 if ( a3 )
 v3 = a2 == 0;
 v4 = v3;
 if ( !a1 )
 v4 |= 1u;
 if ( v4 )
 return -1;
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[(a3 & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x116B8 */
int memop_memmove(char *src, unsigned int a2)
{
 bool v2; // cc

 v2 = src != 0;
 if ( src )
 v2 = a2 > 1;
 if ( !v2 )
 return -1;
 memmove(src + 1, src, a2 - 1);
 return (unsigned char)src[1];
}


/* Function: memop_memcmp @ 0x116F0 */
int memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 int v4; // r3
 int v6; // r0

 v3 = a3 == 0;
 if ( a3 )
 v3 = a2 == 0;
 v4 = v3;
 if ( !a1 )
 v4 |= 1u;
 if ( v4 )
 return 0;
 v6 = memcmp(a1, a2, a3);
 if ( v6 > 0 )
 return 1;
 if ( v6 )
 return -1;
 return 0;
}


/* Function: memop_bzero @ 0x1173C */
int memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return -1;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x11764 */
int memop_bcopy(void *src, unsigned char *dest, size_t a3)
{
 bool v3; // zf
 int v4; // r3

 v3 = a3 == 0;
 if ( a3 )
 v3 = dest == 0;
 v4 = v3;
 if ( !src )
 v4 |= 1u;
 if ( v4 )
 return -1;
 memmove(dest, src, a3);
 return *dest;
}


/* Function: memop_unaligned_access @ 0x117A8 */
int memop_unaligned_access(int a1)
{
 int v2; // [sp+0h] [bp-10h] BYREF

 if ( !a1 )
 return -1;
 memcpy(&v2, (const void *)(a1 + 1), sizeof(v2));
 return v2;
}


/* Function: memop_memory_barrier @ 0x1180C */
int memop_memory_barrier(int *a1)
{
 int v2; // r5

 if ( !a1 )
 return -1;
 v2 = *a1;
 __sync_synchronize();
 return *a1 + v2;
}


/* Function: test_memory_op_functions @ 0x11834 */
void test_memory_op_functions(int a1)
{
 int v0; // r0
 int v1; // r2
 int v2; // r0
 unsigned int s1[3]; // [sp+4h] [bp-13Ch] BYREF
 unsigned int s2[5]; // [sp+10h] [bp-130h] BYREF
 short v6; // [sp+24h] [bp-11Ch]
 char src[268]; // [sp+28h] [bp-118h] BYREF

 puts(asc_12F50);
 memset(&src[12], 65, 10);
 _printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 _printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy(src, "HelloWorld");
 memmove(&src[1], src, 9u);
 _printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 s2[0] = 1;
 s2[1] = 2;
 s2[2] = 4;
 v0 = memcmp(s1, s2, 0xCu);
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
 s2[3] = 0;
 v6 = 0;
 s2[4] = 0;
 _printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 _printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 v2 = _printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 __sync_synchronize();
 _printf_chk(1, "MEMOP-L3-02: %d\n", 10);
}


/* Function: extern_function @ 0x119CC */
static int extern_function(int a1)
{
 return 3 * a1;
}


/* Function: __sync_fetch_and_add_4 @ 0x119D4 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_IDX(a1, v4, v4 + a2) != v4 );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x11A0C */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_IDX(a1, v4, v4 - a2) != v4 );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x11A44 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_IDX(a1, v4, v4 | a2) != v4 );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x11A7C */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_IDX(a1, v4, v4 & a2) != v4 );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x11AB4 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_IDX(a1, v4, v4 ^ a2) != v4 );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x11AEC */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_IDX(a1, v4, ~(v4 & a2)) != v4 );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x11B28 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 + a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x11B88 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 - a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x11BE8 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 | a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x11C48 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 & a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x11CA8 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 ^ a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11D08 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), ((~(v6 & a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11D6C */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 + a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11DC8 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 - a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x11E24 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 | a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11E80 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 & a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x11EDC */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), (((v6 ^ a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x11F38 */
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
 while ( MEMORY_IDX(v4, (v6 << v3) | ((*v4) & ~v5), ((~(v6 & a2) << v3) & v5) | ((*v4) & ~v5)) != (v6 << v3) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11F98 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY_IDX(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11FD0 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY_IDX(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x12008 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY_IDX(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x12040 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY_IDX(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x12078 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY_IDX(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x120B0 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY_IDX(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x120EC */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x12154 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x121BC */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x12224 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x1228C */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x122F4 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3) & v5)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x12360 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x123C4 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x12428 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x1248C */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x124F0 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x12554 */
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
 while ( MEMORY_IDX(v4, (*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3, (*v4 & ~v5) | ((~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3) & v5)) != ((*v4 & ~v5) | (((unsigned int)v5 & *v4) >> v3) << v3) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x125BC */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( MEMORY_IDX((unsigned int *)a1, a2, a3) == a2 )
 return a2;
 else
 break;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x1260C */
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
 if ( MEMORY_IDX(v6, (*v6 & ~v5) | (v8 << v4), (*v6 & ~v5) | (v7 & v5)) == ((*v6 & ~v5) | (v8 << v4)) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x12684 */
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
 if ( MEMORY_IDX(v5, (*v5 & ~v6) | (v8 << v4), (*v5 & ~v6) | (v7 & v6)) == ((*v5 & ~v6) | (v8 << v4)) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x126F8 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY_IDX((unsigned int *)a1, a2, a3) == a2;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x12724 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x12740 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x12768 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY_IDX(a1, v4, a2) != v4 );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x127A0 */
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
 while ( MEMORY_IDX(v3, (*v3 & ~v4) | v5, (*v3 & ~v4) | v5) != (*v3 & ~v4) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x12800 */
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
 while ( MEMORY_IDX(v3, (*v3 & ~v4) | v5, (*v3 & ~v4) | v5) != (*v3 & ~v4) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x1285C */
int _sync_lock_release_8(unsigned int *a1)
{
 __sync_synchronize();
 *a1 = 0;
 a1[1] = 0;
 return 0;
}


/* Function: __sync_lock_release_4 @ 0x12880 */
int _sync_lock_release_4(unsigned int *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_2 @ 0x128A0 */
int _sync_lock_release_2(unsigned short *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_1 @ 0x128C0 */
int _sync_lock_release_1(unsigned char *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}


/* Function: .term_proc @ 0x128E0 */
void term_proc()
{
 ;
}

/* Implementation of _printf_chk (GNU extension) */
int _printf_chk(int flag, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

/* FAILED to decompile: __imp_memset @ 0x24084 */

/* FAILED to decompile: __imp_free @ 0x24088 */

/* FAILED to decompile: __imp_abort @ 0x2408C */

/* FAILED to decompile: __imp_exit @ 0x24090 */

/* FAILED to decompile: __imp_realloc @ 0x24094 */

/* FAILED to decompile: __imp___libc_start_main @ 0x24098 */

/* FAILED to decompile: __imp___printf_chk @ 0x2409C */

/* FAILED to decompile: __imp_memcmp @ 0x240A0 */

/* FAILED to decompile: __imp_waitpid @ 0x240A4 */

/* FAILED to decompile: __imp_calloc @ 0x240A8 */

/* FAILED to decompile: __imp_fork @ 0x240AC */

/* FAILED to decompile: __imp_memmove @ 0x240B0 */

/* FAILED to decompile: __imp_puts @ 0x240B4 */

/* FAILED to decompile: __imp_memcpy @ 0x240B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x240BC */

/* FAILED to decompile: __imp_perror @ 0x240C0 */

/* FAILED to decompile: __imp_malloc @ 0x240C4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x240C8 */

/* Total functions decompiled: 115, failed: 18 */
