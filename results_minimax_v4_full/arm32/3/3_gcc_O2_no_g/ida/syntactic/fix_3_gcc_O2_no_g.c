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
/* Use int as bool for compatibility */
#define bool int
#define true 1
#define false 0

/* Define BYTE1 macro */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Missing stub functions */
static inline void JUMPOUT(unsigned int addr) { (void)addr; }
int call_weak_fn(void) { return 0; }
static int extern_function(int a1);

/* _printf_chk stub - use regular printf */
#define _printf_chk(fmt, ...) printf(fmt, ##__VA_ARGS__)

/* Missing global variable declarations */
int global_counter;
int extern_global_var;
char const_string[256];
unsigned int global_array[10];
int file_scope_static;
int (*global_func_ptr)(void);
int counter_1;

/* Missing string constants from binary data */
char *s = "Stack Test";
char *asc_12A44 = "Heap Test";
char *asc_12C38 = "Static Test";
char *asc_12EBC = "Memory Op Test";
char *aD = "value after free: %d\n";
char *aFork_0 = "fork";
char *byte_12BC8 = "Signal: %d\n";
char *byte_12BA0 = "Exit code: %d\n";

/* Memory barrier / atomic operation stub */
static inline int __atomic_compare_exchange(int *ptr, int *expected, int desired) {
    int old = *ptr;
    if (old == *expected) {
        *ptr = desired;
        return 1;
    }
    *expected = old;
    return 0;
}
/* _sync_synchronize - used by atomic operations */
static inline int _sync_synchronize(void) { return 0; }
/* MEMORY is used as a function pointer for atomic operations */
static inline int MEMORY(int old_val, int new_val, int *ptr) {
    return __atomic_compare_exchange(ptr, &old_val, new_val);
}
/* Stub for atomic operations that need to return 0 */
static inline int MEMORY_RET0(void) {
    return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_gcc_O2_no_g
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




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x10798 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: local_vars @ 0x107A0 */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x107AC */
int local_array(int a1)
{
 int v1; // r2
 char *v2; // r3
 unsigned int v4[10]; // [sp+0h] [bp-38h] BYREF
 char v5; // [sp+28h] [bp-10h] BYREF

 v1 = 0;
 v2 = (char *)v4;
 do
 {
 *((unsigned int *)v2 + 1) = v1;
 v2 += 4;
 v1 += a1;
 }
 while ( v2 != &v5 );
 return v4[6];
}


/* Function: local_struct @ 0x1080C */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x10814 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x10824 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x10830 */
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


/* Function: vla_stack @ 0x108A0 */
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


/* Function: alloca_usage @ 0x10930 */
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


/* Function: stack_alias @ 0x109C0 */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x109C8 */
int test_stack_memory()
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
 v1 = alloca_usage(10);
 _printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 return _printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10A9C */
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


/* Function: heap_calloc @ 0x10AF8 */
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
 while ( v4 != &v2[4 * a1 - 4] );
 }
 free(v2);
 return v3;
}


/* Function: heap_realloc @ 0x10B4C */
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
 *v0 = 1;
 v0[1] = 2;
 v0[4] = 5;
 v0[3] = 4;
 v0[2] = 3;
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


/* Function: heap_array @ 0x10BC8 */
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


/* Function: heap_struct @ 0x10C2C */
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


/* Function: heap_nested @ 0x10C5C */
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


/* Function: linked_list_heap @ 0x10CC8 */
int linked_list_heap()
{
 int v0; // r5
 unsigned int *v1; // r3
 int *v2; // r4
 unsigned int *v3; // r6
 unsigned int *v4; // r0
 int *v5; // r3
 int v6; // r5
 int v7; // r2
 int *v8; // r0
 int *v10; // r0

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = v1;
 v4 = malloc(8u);
 v1 = v4;
 if ( !v4 )
 break;
 *v4 = v0;
 v4[1] = 0;
 v0 += 10;
 if ( v2 )
 v3[1] = v4;
 else
 v2 = v4;
 if ( v0 == 50 )
 {
 v5 = v2;
 v6 = 0;
 do
 {
 v7 = *v5;
 v5 = (int *)v5[1];
 v6 += v7;
 }
 while ( v5 );
 do
 {
 v8 = v2;
 v2 = (int *)v2[1];
 free(v8);
 }
 while ( v2 );
 return v6;
 }
 }
 while ( v2 )
 {
 v10 = v2;
 v2 = (int *)v2[1];
 free(v10);
 }
 return -1;
}


/* Function: create_tree_node @ 0x10D64 */
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


/* Function: tree_heap_traversal @ 0x10D8C */
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


/* Function: memory_leak @ 0x10E14 */
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


/* Function: dangling_pointer @ 0x10E64 */
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


/* Function: double_free @ 0x10EA4 */
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


/* Function: heap_overflow @ 0x10EE4 */
int heap_overflow()
{
 int *v0; // r0
 int v1; // r3
 int *v2; // r2
 int v3; // r4

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0 - 1;
 do
 {
 v2[1] = v1;
 ++v2;
 v1 += 100;
 }
 while ( v1 != 1100 );
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x10F30 */
void test_heap_memory()
{
 unsigned int *v0; // r0
 int v1; // r3
 unsigned int *v2; // r2
 int v3; // r4
 char *v4; // r0
 int v5; // r4
 char *v6; // r3
 int v7; // t1
 int v8; // r0
 unsigned int *v9; // r0
 int v10; // r3
 unsigned int *v11; // r2
 int v12; // r4
 void *v13; // r0
 int v14; // r2
 void **v15; // r4
 unsigned int *v16; // r0
 int v17; // r2
 int v18; // r0
 int v19; // r0
 unsigned int *v20; // r0
 int v21; // r2
 int v22; // r0
 unsigned int *v23; // r4
 int v24; // r2
 int v25; // [sp+0h] [bp-10h] BYREF

 puts(asc_12A44);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 v1 = 0;
 v2 = v0 - 1;
 do
 {
 v2[1] = v1;
 ++v2;
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
 _printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v3);
 v4 = (char *)calloc(5u, 4u);
 if ( v4 )
 {
 v5 = 0;
 v6 = v4 - 4;
 do
 {
 v7 = *((unsigned int *)v6 + 1);
 v6 += 4;
 v5 += v7;
 }
 while ( v4 + 16 != v6 );
 free(v4);
 }
 else
 {
 v5 = -1;
 }
 _printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
 v8 = heap_realloc();
 _printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v8);
 v9 = malloc(0x28u);
 if ( v9 )
 {
 v10 = 0;
 v11 = v9 - 1;
 do
 {
 v11[1] = v10;
 ++v11;
 v10 += 3;
 }
 while ( v10 != 30 );
 v12 = v9[5];
 free(v9);
 }
 else
 {
 v12 = -1;
 }
 _printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v12);
 v13 = malloc(8u);
 if ( v13 )
 {
 free(v13);
 v14 = 15;
 }
 else
 {
 v14 = -1;
 }
 _printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v14);
 v15 = (void **)malloc(8u);
 if ( v15 )
 {
 v16 = malloc(8u);
 v15[1] = v16;
 if ( v16 )
 {
 v17 = 0;
 *v16 = 20;
 v16[1] = 0;
 }
 else
 {
 free(v15);
 v17 = -2;
 }
 _printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v17);
 free(v15[1]);
 free(v15);
 }
 else
 {
 _printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v18 = linked_list_heap();
 _printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v18);
 v19 = tree_heap_traversal();
 _printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v19);
 v20 = malloc(0x14u);
 if ( v20 )
 {
 v20[1] = 1;
 v21 = 2;
 v20[4] = 4;
 *v20 = 0;
 v20[2] = 2;
 v20[3] = 3;
 }
 else
 {
 v21 = -1;
 }
 _printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v21);
 _printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v22 = fork();
 if ( !v22 )
 {
 v23 = malloc(4u);
 if ( v23 )
 {
 _printf_chk(1, "value before free: %d\n", 42);
 free(v23);
 v24 = *v23;
 }
 else
 {
 v24 = -1;
 }
 _printf_chk(1, aD, v24);
 exit(0);
 }
 if ( v22 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v22, &v25, 0);
 if ( (v25 & 0x7F) != 0 )
 {
 if ( ((v25 & 0x7F) + 1) << 24 >= 0x2000000 )
 _printf_chk(1, byte_12BC8);
 }
 else
 {
 _printf_chk(1, byte_12BA0, BYTE1(v25));
 }
 }
}


/* Function: global_var_access @ 0x1129C */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x112B4 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x112C8 */
int global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return -1;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x112E0 */
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


/* Function: call_static_func @ 0x11304 */
int call_static_func(int a1)
{
 return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x11310 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x11324 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1132C */
int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x11344 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1134C */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x11354 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1135C */
int set_file_static(int result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x1136C */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1137C */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x1138C */
int call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return -1;
}


/* Function: global_heap_store @ 0x113AC */
int global_heap_store(int a1)
{
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -1;
}


/* Function: static_complex_init @ 0x113BC */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x113C4 */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x113CC */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x113D4 */
int test_static_global()
{
 int v0; // r0

 puts(asc_12C38);
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


/* Function: memop_memset @ 0x115A8 */
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


/* Function: memop_memcpy @ 0x115DC */
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


/* Function: memop_memmove @ 0x11624 */
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


/* Function: memop_memcmp @ 0x1165C */
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


/* Function: memop_bzero @ 0x116A8 */
int memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return -1;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x116D0 */
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


/* Function: memop_unaligned_access @ 0x11714 */
int memop_unaligned_access(int a1)
{
 int v2; // [sp+0h] [bp-10h] BYREF

 if ( !a1 )
 return -1;
 memcpy(&v2, (const void *)(a1 + 1), sizeof(v2));
 return v2;
}


/* Function: memop_memory_barrier @ 0x11778 */
int memop_memory_barrier(int *a1)
{
 int v2; // r5

 if ( !a1 )
 return -1;
 v2 = *a1;
 _sync_synchronize();
 return *a1 + v2;
}


/* Function: test_memory_op_functions @ 0x117A0 */
int test_memory_op_functions()
{
 int v0; // r0
 int v1; // r2
 int v2; // r0
 unsigned int s1[3]; // [sp+4h] [bp-13Ch] BYREF
 unsigned int s2[5]; // [sp+10h] [bp-130h] BYREF
 short v6; // [sp+24h] [bp-11Ch]
 char src[268]; // [sp+28h] [bp-118h] BYREF

 puts(asc_12EBC);
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
 _sync_synchronize();
 return _printf_chk(1, "MEMOP-L3-02: %d\n", 10);
}


/* Function: extern_function @ 0x11938 */
static int extern_function(int a1)
{
 return 3 * a1;
}


/* Function: __sync_fetch_and_add_4 @ 0x11940 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x11978 */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x119B0 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x119E8 */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x11A20 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x11A58 */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x11A94 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x11AF4 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x11B54 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x11BB4 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x11C14 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11C74 */
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
 while ( MEMORY(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11CD8 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11D34 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x11D90 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11DEC */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x11E48 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x11EA4 */
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
 while ( MEMORY(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11F04 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY(*a1, v4, a1) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11F3C */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY_RET0() );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x11F74 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY_RET0() );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11FAC */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY_RET0() );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x11FE4 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY_RET0() );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x1201C */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY_RET0() );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x12058 */
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
 while ( MEMORY_RET0() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x120C0 */
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
 while ( MEMORY_RET0() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x12128 */
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
 while ( MEMORY_RET0() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x12190 */
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
 while ( MEMORY_RET0() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x121F8 */
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
 while ( MEMORY_RET0() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x12260 */
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
 while ( MEMORY_RET0() );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x122CC */
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
 while ( MEMORY_RET0() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x12330 */
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
 while ( MEMORY_RET0() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x12394 */
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
 while ( MEMORY_RET0() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x123F8 */
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
 while ( MEMORY_RET0() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x1245C */
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
 while ( MEMORY_RET0() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x124C0 */
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
 while ( MEMORY_RET0() );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x12528 */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY(a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x12578 */
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
 if ( !MEMORY(*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x125F0 */
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
 if ( !MEMORY(*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x12664 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY(a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x12690 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x126AC */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x126D4 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY(*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x1270C */
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
 while ( MEMORY(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x1276C */
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
 while ( MEMORY(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x127C8 */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_RET0();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x127EC */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_RET0();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x1280C */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY_RET0();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x1282C */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY_RET0();
 *a1 = 0;
 return result;
}


/* Function: .term_proc @ 0x1284C */
void term_proc()
{
 ;
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

/* Total functions decompiled: 114, failed: 18 */
