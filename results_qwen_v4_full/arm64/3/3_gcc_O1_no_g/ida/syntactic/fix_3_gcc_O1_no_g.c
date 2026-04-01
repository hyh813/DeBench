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
typedef long pid_t;

/* Function declarations */
long long call_weak_fn(void);
void JUMPOUT(int);
int puts(const char *);
void *malloc(unsigned long);
void free(void *);
void *calloc(unsigned long, unsigned long);
void *realloc(void *, unsigned long);
void *memcpy(void *, const void *, unsigned long);
void *memmove(void *, const void *, unsigned long);
void *memset(void *, int, unsigned long);
int memcmp(const void *, const void *, unsigned long);
int __printf_chk(int, const char *, ...);
pid_t fork(void);
pid_t waitpid(pid_t, int *, int);
void exit(int);
void _exit(int);
void perror(const char *);
void __dmb(unsigned int);
char *strcpy(char *, const char *);
long long extern_function(int);

/* Global variable declarations */
int global_counter = 0;
long long file_scope_static = 0;
long long (*global_func_ptr)(void) = 0;
long long counter_1 = 0;
int extern_global_var = 0;
unsigned char const_string[] = "test";
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
long long static_depends_0 = 0;
unsigned char STACK[0x20000];
unsigned long long _stack_chk_guard = 0;

/* Macro definitions */
#define BYTE1(x) ((unsigned char)((x) >> 8))

/* String constants */
const char *asc_1E38 = "Testing stack memory...";
const char *asc_1FA8 = "Testing heap memory...";
const char *asc_21A8 = "Testing static/global variables...";
const char *asc_2458 = "Testing memory operations...";
const char *aD = "%d\n";
const char *aFork_0 = "fork";
const char *byte_2128 = "Exited with status %d\n";
const char *byte_2150 = "Terminated by signal %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_gcc_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x990 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_9B0 @ 0x9B0 */
void sub_9B0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0xC14 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: local_vars @ 0xC1C */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0xC28 */
long long local_array(int a1)
{
 long long *v1; // x2
 int v2; // w1
 char v4; // [xsp+10h] [xbp+10h] BYREF
 unsigned int v5; // [xsp+24h] [xbp+24h]
 long long v6; // [xsp+38h] [xbp+38h] BYREF

 v1 = (long long *)&v4;
 v2 = 0;
 do
 {
 *(unsigned int *)v1 = v2;
 v1 = (long long *)((char *)v1 + 4);
 v2 += a1;
 }
 while ( v1 != &v6 );
 return v5;
}


/* Function: local_struct @ 0xC8C */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0xC94 */
long long address_of_local(unsigned int *a1)
{
 long long result; // x0

 result = 42;
 *a1 = 42;
 return result;
}


/* Function: address_of_array @ 0xCA4 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0xCB0 */
long long large_stack_frame()
{
 unsigned char *v0; // x1
 int i; // w0
 unsigned char v3[2048]; // [xsp+18h] [xbp+18h] BYREF

 v0 = v3;
 for ( i = 0; i != 2048; ++i )
 *v0++ = i;
 return v3[1024];
}


/* Function: vla_stack @ 0xD18 */
long long vla_stack(int a1)
{
 long long v1; // x1
 unsigned short v2; // w2
 unsigned long long *v3; // x1
 long long v4; // x1
 unsigned long long v6[3]; // [xsp+FC00h] [xbp-10h] BYREF

 if ( (unsigned int)(a1 - 1) > 0x3E7 )
 return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFF0;
 v3 = (unsigned long long *)((char *)v6 - (v1 & 0xFFFFFFFFFFFF0000LL));
 while ( v6 != v3 )
 ;
 v6[0] = 0;
 if ( v2 >= 0x400uLL )
 STACK[0x10000] = 0;
 v4 = 0;
 do
 {
 *((unsigned int *)&v6[2] + v4) = 2 * v4;
 ++v4;
 }
 while ( a1 > (int)v4 );
 return *((unsigned int *)&v6[2] + a1 / 2);
}


/* Function: alloca_usage @ 0xDE0 */
long long alloca_usage(int a1)
{
 long long v1; // x1
 unsigned short v2; // w2
 unsigned long long *v3; // x1
 long long *v4; // x2
 int v5; // w1
 unsigned long long v7[2]; // [xsp+FC00h] [xbp-10h] BYREF
 long long v8; // [xsp+FC10h] [xbp+0h] BYREF

 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFF0;
 v3 = (unsigned long long *)((char *)v7 - (v1 & 0xFFFFFFFFFFFF0000LL));
 while ( v7 != v3 )
 ;
 v7[0] = 0;
 if ( v2 >= 0x400uLL )
 STACK[0x10000] = 0;
 v4 = &v8;
 v5 = 0;
 do
 {
 *(unsigned int *)v4 = v5;
 v4 = (long long *)((char *)v4 + 4);
 v5 += 3;
 }
 while ( v5 != 3 * a1 );
 return *((unsigned int *)&v8 + a1 / 2);
}


/* Function: stack_alias @ 0xEA8 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0xEB0 */
long long test_stack_memory()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0

 puts(asc_1E38);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 v0 = local_array(2);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", v0);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v1 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v1);
 v2 = vla_stack(10);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", v2);
 v3 = alloca_usage(10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v3);
 __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
 return 0;
}


/* Function: heap_basic @ 0xF9C */
long long heap_basic(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x1
 unsigned int v4; // w19

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 if ( a1 > 0 )
 {
 v3 = 0;
 do
 {
 v2[v3] = 2 * v3;
 ++v3;
 }
 while ( a1 > (int)v3 );
 }
 v4 = v2[a1 / 2];
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: heap_calloc @ 0x1000 */
long long heap_calloc(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x1
 unsigned int v4; // w19

 v2 = calloc(a1, 4u);
 if ( v2 )
 {
 if ( a1 <= 0 )
 {
 v4 = 0;
 }
 else
 {
 v3 = 0;
 v4 = 0;
 do
 v4 += v2[v3++];
 while ( a1 > (int)v3 );
 }
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v4;
}


/* Function: heap_realloc @ 0x1068 */
long long heap_realloc()
{
 unsigned int *v0; // x0
 void *v1; // x19
 unsigned int *v2; // x0
 unsigned int v3; // w19

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
 v3 = v2[5];
 free(v2);
 }
 else
 {
 free(v1);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_array @ 0x1128 */
long long heap_array(int a1)
{
 unsigned int *v2; // x0
 unsigned int *v3; // x2
 int v4; // w1
 unsigned int v5; // w19

 v2 = malloc(4LL * a1);
 if ( v2 )
 {
 if ( a1 > 0 )
 {
 v3 = v2;
 v4 = 0;
 do
 {
 *v3++ = v4;
 v4 += 3;
 }
 while ( v4 != 3 * a1 );
 }
 v5 = v2[a1 / 2];
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v5;
}


/* Function: heap_struct @ 0x1190 */
long long heap_struct(int a1)
{
 void *v2; // x0
 unsigned int v3; // w19

 v2 = malloc(8u);
 if ( v2 )
 {
 v3 = 3 * a1;
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_nested @ 0x11CC */
long long heap_nested(unsigned long long *a1)
{
 unsigned int *v2; // x0
 unsigned long long *v3; // x19
 unsigned long long *v4; // x0

 v2 = malloc(0x10u);
 *a1 = (unsigned long long)v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = (unsigned long long *)v2;
 *v2 = 10;
 v4 = malloc(0x10u);
 v3[1] = (unsigned long long)v4;
 if ( v4 )
 {
 *(unsigned int *)v4 = 20;
 v4[1] = 0;
 return 0;
 }
 else
 {
 free(v3);
 return 4294967294LL;
 }
}


/* Function: linked_list_heap @ 0x123C */
long long linked_list_heap()
{
 int v0; // w20
 unsigned long long *v1; // x0
 void *v2; // x19
 unsigned long long *v3; // x0
 unsigned int v4; // w20
 unsigned long long *v5; // x21
 void *v6; // x0
 void *v7; // x0

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v5 = v1;
 v1 = malloc(0x10u);
 if ( !v1 )
 break;
 *(unsigned int *)v1 = v0;
 v1[1] = 0ULL;
 if ( v2 )
 v5[1] = (unsigned long long)v1;
 else
 v2 = v1;
 v0 += 10;
 if ( v0 == 50 )
 {
 v6 = (void *)v2;
 v4 = 0;
 do
 {
 v4 += *(unsigned int *)v6;
 v6 = (void *)(uintptr_t)((unsigned long long *)v6)[1];
 }
 while ( v6 );
 do
 {
 v7 = v2;
 v2 = (unsigned long long *)(uintptr_t)v2[1];
 free(v7);
 }
 while ( v2 );
 return v4;
 }
 }
 if ( v2 )
 {
 do
 {
 v3 = (unsigned long long *)v2;
 v2 = (unsigned long long *)(uintptr_t)v2[1];
 free(v3);
 }
 while ( v2 );
 return (unsigned int)-1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: create_tree_node @ 0x1300 */
unsigned long long * create_tree_node(int a1)
{
 unsigned long long *result; // x0

 result = malloc(0x18u);
 if ( result )
 {
 *(unsigned int *)result = a1;
 result[1] = 0;
 result[2] = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1334 */
long long tree_heap_traversal()
{
 unsigned long long *tree_node; // x0
 unsigned int *v1; // x19
 unsigned long long *v2; // x1
 unsigned int *v3; // x0
 bool v4; // zf
 unsigned int v5; // w20
 void *v7; // x0

 tree_node = create_tree_node(10);
 if ( tree_node )
 {
 v1 = (unsigned int *)tree_node;
 tree_node[1] = (unsigned long long)create_tree_node(20);
 v2 = create_tree_node(30);
 *((unsigned long long *)v1 + 2) = (unsigned long long)v2;
 v3 = (unsigned int *)(uintptr_t)tree_node[1];
 if ( v2 )
 v4 = v3 == 0;
 else
 v4 = 1;
 if ( v4 )
 {
 if ( v3 )
 free(v3);
 v7 = (void *)(unsigned long long)*((unsigned long long *)v1 + 2);
 if ( v7 )
 free(v7);
 free(v1);
 return (unsigned int)-2;
 }
 else
 {
 v5 = *v1 + *v3 + *(unsigned int *)v2;
 free(v3);
 free((void *)*((unsigned long long *)v1 + 2));
 free(v1);
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v5;
}


/* Function: memory_leak @ 0x13E0 */
long long memory_leak(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x1

 v2 = malloc(4LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 if ( a1 > 0 )
 {
 v3 = 0;
 do
 {
 v2[v3] = v3;
 ++v3;
 }
 while ( a1 > (int)v3 );
 }
 return (unsigned int)v2[a1 / 2];
}


/* Function: dangling_pointer @ 0x1438 */
long long dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19
 unsigned int v2; // w0

 v0 = (unsigned int *)malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 *v0 = 42;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 v2 = *v1;
 free(v1);
 return v2;
}


/* Function: double_free @ 0x1488 */
long long double_free(unsigned int *a1)
{
 void *v2; // x0
 void *v3; // x19

 if ( a1 )
 return *a1;
 v2 = malloc(4u);
 v3 = v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 free(v2);
 free(v3);
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x14D4 */
long long heap_overflow()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x2
 int i; // w1
 unsigned int v3; // w19

 v0 = malloc(0x28u);
 if ( v0 )
 {
 v1 = v0;
 for ( i = 0; i != 1100; i += 100 )
 *v1++ = i;
 v3 = *v0;
 free(v0);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: test_heap_memory @ 0x1524 */
long long test_heap_memory()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 unsigned int v10; // w0
 int stat_loc; // [xsp+1Ch] [xbp+1Ch] BYREF
 unsigned long long *ptr; // [xsp+20h] [xbp+20h] BYREF

 puts(asc_1FA8);
 v0 = heap_basic(10);
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v3);
 v4 = heap_struct(5);
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v4);
ptr = 0;
v5 = heap_nested((unsigned long long *)&ptr);
__printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( ptr )
 {
 unsigned long long *p = (unsigned long long *)(uintptr_t)ptr;
 free((void *)(uintptr_t)p[1]);
 free(p);
 }
 v6 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v8);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v9 = fork();
 if ( !v9 )
 {
 v10 = dangling_pointer();
 __printf_chk(1, aD, v10);
 _exit(0);
 }
 if ( v9 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 (void)waitpid((pid_t)v9, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) + 1) << 24 >> 25 > 0 )
 __printf_chk(1, byte_2150, stat_loc & 0x7F);
 }
 else
 {
 __printf_chk(1, byte_2128, BYTE1(stat_loc));
 }
 }
 return 0;
}


/* Function: global_var_access @ 0x1724 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1738 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1748 */
long long global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x1768 */
long long static_local(int a1)
{
 long long result; // x0

 if ( a1 )
 result = 0;
 else
 result = (unsigned int)(counter_1 + 1);
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x178C */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x1798 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x17AC */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x17C4 */
long long read_const_data()
{
 return (unsigned int)(unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x17D8 */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x17E0 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x17E8 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x17F0 */
long long set_file_static(long long result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x17FC */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x1808 */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x1814 */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x183C */
long long global_heap_store(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x1850 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1858 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1860 */
long long init_order_test()
{
 long long result; // x0

 result = 20;
 static_depends_0 = 20;
 return result;
}


/* Function: test_static_global @ 0x1870 */
long long test_static_global()
{
 int v0; // w0
 int v1; // w0
 int const_data; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int inited; // w0

 puts(asc_21A8);
 v0 = global_var_access();
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v0);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v1 = call_extern_func();
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v1);
 const_data = read_const_data();
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_data);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 v3 = global_struct_access();
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", v3);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (long long (*)(void))double_value;
 v4 = call_global_callback();
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 v5 = static_complex_init();
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 inited = init_order_test();
 __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", inited);
 return 0;
}


/* Function: memop_memset @ 0x1A60 */
long long memop_memset(unsigned char *s, size_t n, int c)
{
 bool v4; // zf

 if ( s )
 v4 = n == 0;
 else
 v4 = 1;
 if ( v4 )
 return 0xFFFFFFFFLL;
 memset(s, c, n);
 return *s;
}


/* Function: memop_memcpy @ 0x1AA8 */
long long memop_memcpy(char *a1, const void *a2, size_t a3)
{
 bool v3; // zf

 if ( a2 )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || a1 == 0 )
 return 0xFFFFFFFFLL;
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[(a3 & 0xFFFFFFFFFFFFFFFCLL) - 4];
}


/* Function: memop_memmove @ 0x1AF0 */
long long memop_memmove(char *src, unsigned long long a2)
{
 bool v2; // cc

 if ( src )
 v2 = a2 > 1;
 else
 v2 = 0;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 memmove(src + 1, src, a2 - 1);
 return (unsigned char)src[1];
}


/* Function: memop_memcmp @ 0x1B34 */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 int v6; // w0

 if ( a2 )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || a1 == 0 )
 return 0;
 v6 = memcmp(a1, a2, a3);
 if ( v6 > 0 )
 return 1;
 else
 return (unsigned int)(v6 >> 31);
}


/* Function: memop_bzero @ 0x1B6C */
long long memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x1BA4 */
long long memop_bcopy(void *src, unsigned char *dest, size_t a3)
{
 bool v3; // zf

 if ( dest )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || src == 0 )
 return 0xFFFFFFFFLL;
 memmove(dest, src, a3);
 return *dest;
}


/* Function: memop_unaligned_access @ 0x1BE8 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x1BFC */
long long memop_memory_barrier(int *a1)
{
 int v1; // w1

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 __dmb(0xBu);
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x1C1C */
void *test_memory_op_functions()
{
 int v0; // w0
 int v1; // w0
 unsigned int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v8; // [xsp+24h] [xbp+24h] BYREF
 unsigned int v9[4]; // [xsp+28h] [xbp+28h] BYREF
 unsigned int v10[4]; // [xsp+38h] [xbp+38h] BYREF
 unsigned long long v11[2]; // [xsp+48h] [xbp+48h] BYREF
 int v12; // [xsp+58h] [xbp+58h]
 unsigned long long v13[2]; // [xsp+60h] [xbp+60h] BYREF
 int v14; // [xsp+70h] [xbp+70h]
 int v15; // [xsp+78h] [xbp+78h] BYREF
 unsigned char dest[8]; // [xsp+80h] [xbp+80h] BYREF
 unsigned char v17[16]; // [xsp+88h] [xbp+88h] BYREF
 char src[16]; // [xsp+98h] [xbp+98h] BYREF
 unsigned char s[256]; // [xsp+A8h] [xbp+A8h] BYREF

 puts(asc_2458);
 v11[0] = 0x140000000ALL;
 v11[1] = 0x280000001ELL;
 v12 = 50;
 v13[0] = 0;
 v13[1] = 0;
 v14 = 0;
 v0 = memop_memset(s, 0xAu, 65);
 __printf_chk(1, "MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy((char *)v13, v11, 0x14u);
 __printf_chk(1, "MEMOP-L2-02: %d\n", v1);
 strcpy(src, "HelloWorld");
 v2 = memop_memmove(src, 0xAu);
 __printf_chk(1, "MEMOP-L2-03: %c\n", v2);
 v9[0] = 1;
 v9[1] = 2;
 v9[2] = 3;
 v10[0] = 1;
 v10[1] = 2;
 v10[2] = 4;
 v3 = memop_memcmp(v9, v10, 0xCu);
 __printf_chk(1, "MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v17, 0xAu);
 __printf_chk(1, "MEMOP-L2-05: %d\n", v4);
 v15 = 67305985;
 *(unsigned int *)dest = 0;
 v5 = memop_bcopy(&v15, dest, 4u);
 __printf_chk(1, "MEMOP-L2-06: %d\n", v5);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v8 = 5;
 v6 = memop_memory_barrier(&v8);
 __printf_chk(1, "MEMOP-L3-02: %d\n", v6);
 return &_stack_chk_guard;
}


/* Function: main @ 0x1DF0 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x1E14 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x1E1C */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x140A0 */

/* FAILED to decompile: memmove @ 0x140A8 */

/* FAILED to decompile: exit @ 0x140B0 */

/* FAILED to decompile: __libc_start_main @ 0x140B8 */

/* FAILED to decompile: perror @ 0x140C0 */

/* FAILED to decompile: __cxa_finalize @ 0x140C8 */

/* FAILED to decompile: fork @ 0x140D0 */

/* FAILED to decompile: malloc @ 0x140D8 */

/* FAILED to decompile: __printf_chk @ 0x140E0 */

/* FAILED to decompile: memset @ 0x140E8 */

/* FAILED to decompile: calloc @ 0x140F0 */

/* FAILED to decompile: realloc @ 0x140F8 */

/* FAILED to decompile: __stack_chk_fail @ 0x14100 */

/* FAILED to decompile: abort @ 0x14110 */

/* FAILED to decompile: puts @ 0x14118 */

/* FAILED to decompile: memcmp @ 0x14120 */

/* FAILED to decompile: free @ 0x14128 */

/* FAILED to decompile: waitpid @ 0x14130 */

/* FAILED to decompile: __gmon_start__ @ 0x14140 */

/* Total functions decompiled: 65, failed: 19 */
