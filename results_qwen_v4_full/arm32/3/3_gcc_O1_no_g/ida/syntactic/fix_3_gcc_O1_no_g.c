/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef int pid_t;
typedef unsigned long size_t;

/* Standard library function declarations */
void *malloc(size_t size);
void free(void *ptr);
void *realloc(void *ptr, size_t size);
void *calloc(size_t nmemb, size_t size);
int printf(const char *format, ...);
int puts(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strcpy(char *dest, const char *src);
pid_t fork(void);
pid_t waitpid(pid_t pid, int *status, int options);
void perror(const char *s);
void exit(int status);
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int bool;

/* Global variable declarations */
int global_counter = 0;
int counter_1 = 0;
extern int extern_global_var;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int file_scope_static = 0;
int (*global_func_ptr)(void) = 0;
int static_depends_0 = 0;
char *const_string = "test";

/* String declarations */
char *s = "test";
char *asc_129FC = "Heap Memory Tests";

/* Forward declaration for extern_function */
static int extern_function(int a1);
char *aD = "%d\n";
char *aFork_0 = "fork";
char byte_12BA0[] = "exit status: %d\n";
char byte_12B78[] = "exit code: %d\n";
char *asc_12BF0 = "Static/Global Memory Tests";
char *asc_12E74 = "Memory Operation Tests";

/* Stub definitions for undefined references */
#define JUMPOUT(x) return
#define BYTE1(x) (((x) >> 8) & 0xFF)
static int _printf_chk_impl(int flag, const char *format, ...) { (void)flag; (void)format; return 0; }
#define _printf_chk _printf_chk_impl
static void _sync_synchronize_impl(void) { }
#define _sync_synchronize _sync_synchronize_impl

/* MEMORY macro for atomic operations - simulates LDREX/STREX */
static int ldrex_strex_sim(int old_val, int new_val, void *ptr) { *(int*)ptr = new_val; (void)old_val; return 0; }
static int (*g_memory_func)(int, int, void*) = ldrex_strex_sim;
static int ldrex_strex_sim_noargs(void) { return 0; }
#define MEMORY g_memory_func

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_gcc_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x1058C */
static int init_proc()
{
 return 0;
}


/* Function: sub_10598 @ 0x10598 */
void sub_10598()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1077C */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: local_vars @ 0x10784 */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x10790 */
int local_array(int a1)
{
 char *v1; // r2
 int v2; // r3
 unsigned int v4[10]; // [sp+0h] [bp-38h] BYREF
 char v5; // [sp+28h] [bp-10h] BYREF

 v1 = (char *)v4;
 v2 = 0;
 do
 {
 *((unsigned int *)v1 + 1) = v2;
 v1 += 4;
 v2 += a1;
 }
 while ( v1 != &v5 );
 return v4[6];
}


/* Function: local_struct @ 0x107F0 */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x107F8 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x10808 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x10814 */
int large_stack_frame()
{
 char *v0; // r2
 int v1; // r3
 unsigned char v3[2048]; // [sp+3h] [bp-80Dh] BYREF
 char v4; // [sp+803h] [bp-Dh] BYREF

 v0 = v3;
 v1 = 0;
 do
 *++v0 = v1++;
 while ( v0 != &v4 );
 return v3[1025];
}


/* Function: vla_stack @ 0x10884 */
int vla_stack(int a1)
{
 int *v1; // r2
 int v2; // r3
 int v4; // [sp+0h] [bp-Ch] BYREF

 if ( (unsigned int)(a1 - 1) >= 0x3E8 )
 return -1;
 v1 = &v4 - 1;
 v2 = 0;
 do
 {
 v1[1] = v2;
 ++v1;
 v2 += 2;
 }
 while ( v2 != 2 * a1 );
 return *(&v4 + a1 / 2);
}


/* Function: alloca_usage @ 0x10918 */
int alloca_usage(int a1)
{
 unsigned char *v1; // r2
 int v2; // r3
 unsigned char v4[4]; // [sp+0h] [bp-Ch] BYREF

 if ( a1 <= 0 )
 return -1;
 v1 = &v4[-4];
 v2 = 0;
 do
 {
 *((unsigned int *)v1 + 1) = v2;
 v1 += 4;
 v2 += 3;
 }
 while ( v1 != &v4[4 * a1 - 4] );
 return *(unsigned int *)&v4[4 * (a1 / 2)];
}


/* Function: stack_alias @ 0x109AC */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x109B4 */
int test_stack_memory()
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
 return _printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10A98 */
int heap_basic(int a1)
{
 unsigned int *v2; // r0
 char *v3; // r2
 int v4; // r3
 int v5; // r4

 v2 = malloc(4 * a1);
 if ( !v2 )
 return -1;
 if ( a1 > 0 )
 {
 v3 = (char *)(v2 - 1);
 v4 = 0;
 do
 {
 *((unsigned int *)v3 + 1) = v4;
 v3 += 4;
 v4 += 2;
 }
 while ( v4 != 2 * a1 );
 }
 v5 = v2[a1 / 2];
 free(v2);
 return v5;
}


/* Function: heap_calloc @ 0x10AF4 */
int heap_calloc(signed int a1)
{
 char *v2; // r0
 char *v3; // r3
 int v4; // r1
 int v5; // r4
 int v6; // t1

 v2 = (char *)calloc(a1, 4u);
 if ( !v2 )
 return -1;
 if ( a1 <= 0 )
 {
 v5 = 0;
 }
 else
 {
 v3 = v2 - 4;
 v4 = (int)&v2[4 * a1 - 4];
 v5 = 0;
 do
 {
 v6 = *((unsigned int *)v3 + 1);
 v3 += 4;
 v5 += v6;
 }
 while ( v3 != (char *)v4 );
 }
 free(v2);
 return v5;
}


/* Function: heap_realloc @ 0x10B50 */
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


/* Function: heap_array @ 0x10BFC */
int heap_array(int a1)
{
 int v2; // r4
 unsigned int *v3; // r0
 unsigned int *v4; // r2
 int v5; // r3
 int v6; // r4

 v2 = a1;
 v3 = malloc(4 * a1);
 if ( !v3 )
 return -1;
 if ( a1 > 0 )
 {
 v4 = v3 - 1;
 v5 = 0;
 do
 {
 v4[1] = v5;
 ++v4;
 v5 += 3;
 }
 while ( v4 != &v3[v2 - 1] );
 }
 v6 = v3[a1 / 2];
 free(v3);
 return v6;
}


/* Function: heap_struct @ 0x10C60 */
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


/* Function: heap_nested @ 0x10C90 */
int heap_nested(unsigned int *a1)
{
 unsigned int *v2; // r0
 unsigned int *v3; // r4
 unsigned int *v4; // r0
 unsigned int *v5; // r3
 int result; // r0

 v2 = malloc(8u);
 *a1 = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 *v2 = 10;
 v4 = malloc(8u);
 v5 = v4;
 v3[1] = v4;
 if ( v4 )
 {
 *v4 = 20;
 result = 0;
 v5[1] = 0;
 }
 else
 {
 free(v3);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0x10CFC */
int linked_list_heap()
{
 int v0; // r5
 unsigned int *v1; // r0
 unsigned int *v2; // r4
 unsigned int *v3; // r6
 unsigned int *v4; // r3
 int v5; // r5
 void *v6; // r0
 void *v8; // r0

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
 if ( v2 )
 v3[1] = v1;
 else
 v2 = v1;
 v0 += 10;
 if ( v0 == 50 )
 {
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
 if ( !v2 )
 return -1;
 do
 {
 v8 = v2;
 v2 = (unsigned int *)v2[1];
 free(v8);
 }
 while ( v2 );
 return -1;
}


/* Function: create_tree_node @ 0x10DBC */
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


/* Function: tree_heap_traversal @ 0x10DE4 */
int tree_heap_traversal()
{
 unsigned int *tree_node; // r4
 unsigned int *v1; // r3
 unsigned int *v2; // r0
 bool v3; // zf
 int v4; // r5
 void *v6; // r0

 tree_node = create_tree_node(10);
 if ( !tree_node )
 return -1;
 tree_node[1] = create_tree_node(20);
 v1 = create_tree_node(30);
 tree_node[2] = v1;
 v2 = (unsigned int *)tree_node[1];
 v3 = v2 == 0;
 if ( v2 )
 v3 = v1 == 0;
 if ( v3 )
 {
 if ( v2 )
 free(v2);
 v6 = (void *)tree_node[2];
 if ( v6 )
 free(v6);
 free(tree_node);
 return -2;
 }
 else
 {
 v4 = *tree_node + *v2 + *v1;
 free(v2);
 free((void *)tree_node[2]);
 free(tree_node);
 }
 return v4;
}


/* Function: memory_leak @ 0x10E88 */
int memory_leak(int a1)
{
 unsigned int *v2; // r0
 char *v3; // r2
 int i; // r3

 v2 = malloc(4 * a1);
 if ( !v2 )
 return -1;
 if ( a1 > 0 )
 {
 v3 = (char *)(v2 - 1);
 for ( i = 0; i != a1; ++i )
 {
 *((unsigned int *)v3 + 1) = i;
 v3 += 4;
 }
 }
 return v2[a1 / 2];
}


/* Function: dangling_pointer @ 0x10ED8 */
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


/* Function: double_free @ 0x10F18 */
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


/* Function: heap_overflow @ 0x10F5C */
int heap_overflow()
{
 int *v0; // r0
 int *v1; // r2
 int i; // r3
 int v3; // r4

 v0 = (int *)malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = v0 - 1;
 for ( i = 0; i != 1100; i += 100 )
 {
 v1[1] = i;
 ++v1;
 }
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x10FA8 */
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
 int v9; // r0
 int v10; // r0
 void *ptr; // [sp+4h] [bp-14h] BYREF
 int stat_loc; // [sp+8h] [bp-10h] BYREF

 puts(asc_129FC);
 v0 = heap_basic(10);
 _printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 _printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 _printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 _printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v3);
 v4 = heap_struct(5);
 _printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v4);
 ptr = 0;
 v5 = heap_nested(&ptr);
 _printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( ptr )
 {
 free(*((void **)ptr + 1));
 free(ptr);
 }
 v6 = linked_list_heap();
 _printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 _printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 _printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v8);
 _printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v9 = fork();
 if ( !v9 )
 {
 v10 = dangling_pointer();
 _printf_chk(1, aD, v10);
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
 if ( ((stat_loc & 0x7F) + 1) << 24 >= 0x2000000 )
 _printf_chk(1, byte_12BA0, stat_loc & 0x7F);
 }
 else
 {
 _printf_chk(1, byte_12B78, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x111B4 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x111CC */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x111E0 */
int global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return -1;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x111F8 */
int static_local(int a1)
{
 int result; // r0

 if ( a1 )
 result = 0;
 else
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x1121C */
int call_static_func(int a1)
{
 return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x11228 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1123C */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1124C */
int read_const_data()
{
 return *((unsigned char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x11264 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1126C */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x11274 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1127C */
int set_file_static(int result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x1128C */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1129C */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x112AC */
int call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return -1;
}


/* Function: global_heap_store @ 0x112D4 */
int global_heap_store(int a1)
{
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -1;
}


/* Function: static_complex_init @ 0x112E4 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x112EC */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x112F4 */
int init_order_test()
{
 int result; // r0

 result = 20;
 static_depends_0 = 20;
 return result;
}


/* Function: test_static_global @ 0x11308 */
int test_static_global()
{
 int v0; // r0
 int v1; // r0
 int const_data; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int inited; // r0

 puts(asc_12BF0);
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
 global_func_ptr = (int (*)(void))double_value;
 v4 = call_global_callback();
 _printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
 _printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 v5 = static_complex_init();
 _printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
 _printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 inited = init_order_test();
 return _printf_chk(1, "STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: memop_memset @ 0x114E4 */
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


/* Function: memop_memcpy @ 0x11518 */
int memop_memcpy(char *a1, const void *a2, size_t n)
{
 bool v4; // zf
 int v5; // r2

 v4 = n == 0;
 if ( n )
 v4 = a2 == 0;
 v5 = v4;
 if ( !a1 )
 v5 |= 1u;
 if ( v5 )
 return -1;
 memcpy(a1, a2, n);
 return *(unsigned int *)&a1[(n & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x11564 */
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


/* Function: memop_memcmp @ 0x11598 */
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
 if ( v6 <= 0 )
 return v6 >> 31;
 else
 return 1;
}


/* Function: memop_bzero @ 0x115E4 */
int memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return -1;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x11610 */
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


/* Function: memop_unaligned_access @ 0x11654 */
int memop_unaligned_access(int a1)
{
 int v2; // [sp+0h] [bp-10h] BYREF

 if ( !a1 )
 return -1;
 memcpy(&v2, (const void *)(a1 + 1), sizeof(v2));
 return v2;
}


/* Function: memop_memory_barrier @ 0x116B8 */
int memop_memory_barrier(int *a1)
{
 int v2; // r5

 if ( !a1 )
 return -1;
 v2 = *a1;
 _sync_synchronize();
 return *a1 + v2;
}


/* Function: test_memory_op_functions @ 0x116E0 */
int test_memory_op_functions()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v9; // [sp+0h] [bp-180h] BYREF
 unsigned int v10[3]; // [sp+4h] [bp-17Ch] BYREF
 unsigned int v11[3]; // [sp+10h] [bp-170h] BYREF
 unsigned int v12[5]; // [sp+1Ch] [bp-164h] BYREF
 unsigned int v13[5]; // [sp+30h] [bp-150h] BYREF
 int v14; // [sp+44h] [bp-13Ch] BYREF
 int dest; // [sp+48h] [bp-138h] BYREF
 unsigned int v16[2]; // [sp+4Ch] [bp-134h] BYREF
 unsigned char v17[12]; // [sp+54h] [bp-12Ch] BYREF
 char src[12]; // [sp+60h] [bp-120h] BYREF
 unsigned char v19[256]; // [sp+6Ch] [bp-114h] BYREF

 puts(asc_12E74);
 v12[0] = 10;
 v12[1] = 20;
 v12[2] = 30;
 v12[3] = 40;
 v12[4] = 50;
 memset(v13, 0, sizeof(v13));
 v0 = memop_memset(v19, 0xAu, 65);
 _printf_chk(1, "MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy((char *)v13, v12, 0x14u);
 _printf_chk(1, "MEMOP-L2-02: %d\n", v1);
 strcpy(src, "HelloWorld");
 v2 = memop_memmove(src, 0xAu);
 _printf_chk(1, "MEMOP-L2-03: %c\n", v2);
 v10[0] = 1;
 v10[1] = 2;
 v10[2] = 3;
 v11[0] = 1;
 v11[1] = 2;
 v11[2] = 4;
 v3 = memop_memcmp(v10, v11, 0xCu);
 _printf_chk(1, "MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v17, 0xAu);
 _printf_chk(1, "MEMOP-L2-05: %d\n", v4);
 v14 = 67305985;
 dest = 0;
 v5 = memop_bcopy(&v14, (unsigned char *)&dest, 4u);
 _printf_chk(1, "MEMOP-L2-06: %d\n", v5);
 v16[0] = 50462976;
 v16[1] = 117835012;
 v6 = memop_unaligned_access((int)v16);
 _printf_chk(1, "MEMOP-L3-01: 0x%x\n", v6);
 v9 = 5;
 v7 = memop_memory_barrier(&v9);
 return _printf_chk(1, "MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x118D4 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x118F0 */
static int extern_function(int a1)
{
 return 3 * a1;
}


/* Function: __sync_fetch_and_add_4 @ 0x118F8 */
static int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x11930 */
static int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x11968 */
static int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x119A0 */
static int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x119D8 */
static int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x11A10 */
static int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY(*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x11A4C */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x11AAC */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x11B0C */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x11B6C */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x11BCC */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11C2C */
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
 while ( MEMORY(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11C90 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11CEC */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x11D48 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11DA4 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x11E00 */
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
 while ( MEMORY(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x11E5C */
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
 while ( MEMORY(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11EBC */
static int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY(0, 0, 0) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11EF4 */
static int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY(0, 0, 0) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x11F2C */
static int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY(0, 0, 0) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11F64 */
static int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY(0, 0, 0) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x11F9C */
static int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY(0, 0, 0) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x11FD4 */
static int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY(0, 0, 0) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x12010 */
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
 while ( MEMORY(0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x12078 */
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
 while ( MEMORY(0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x120E0 */
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
 while ( MEMORY(0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x12148 */
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
 while ( MEMORY(0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x121B0 */
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
 while ( MEMORY(0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x12218 */
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
 while ( MEMORY(0, 0, 0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x12284 */
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
 while ( MEMORY(0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x122E8 */
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
 while ( MEMORY(0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x1234C */
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
 while ( MEMORY(0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x123B0 */
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
 while ( MEMORY(0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x12414 */
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
 while ( MEMORY(0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x12478 */
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
 while ( MEMORY(0, 0, 0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x124E0 */
static int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY(a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x12530 */
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
 if ( !MEMORY(*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x125A8 */
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
 if ( !MEMORY(*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x1261C */
static bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY(a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x12648 */
static bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x12664 */
static bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x1268C */
static int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY(*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x126C4 */
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
 while ( MEMORY(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x12724 */
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
 while ( MEMORY(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x12780 */
static int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = ldrex_strex_sim_noargs();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x127A4 */
static int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = ldrex_strex_sim_noargs();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x127C4 */
static int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = ldrex_strex_sim_noargs();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x127E4 */
static int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = ldrex_strex_sim_noargs();
 *a1 = 0;
 return result;
}


/* Function: .term_proc @ 0x12804 */
static void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_memset @ 0x24088 */

/* FAILED to decompile: __imp_free @ 0x2408C */

/* FAILED to decompile: __imp_abort @ 0x24090 */

/* FAILED to decompile: __imp_exit @ 0x24094 */

/* FAILED to decompile: __imp_realloc @ 0x24098 */

/* FAILED to decompile: __imp___libc_start_main @ 0x2409C */

/* FAILED to decompile: __imp___printf_chk @ 0x240A0 */

/* FAILED to decompile: __imp_memcmp @ 0x240A4 */

/* FAILED to decompile: __imp_waitpid @ 0x240A8 */

/* FAILED to decompile: __imp_calloc @ 0x240AC */

/* FAILED to decompile: __imp_fork @ 0x240B0 */

/* FAILED to decompile: __imp_memmove @ 0x240B4 */

/* FAILED to decompile: __imp_puts @ 0x240B8 */

/* FAILED to decompile: __imp_memcpy @ 0x240BC */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x240C0 */

/* FAILED to decompile: __imp_perror @ 0x240C4 */

/* FAILED to decompile: __imp_malloc @ 0x240C8 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x240CC */

/* Total functions decompiled: 114, failed: 18 */
