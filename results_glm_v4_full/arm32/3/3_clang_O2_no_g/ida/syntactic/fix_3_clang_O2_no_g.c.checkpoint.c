/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <stdbool.h>

/* Helper macros */
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define qmemcpy(dest, src, n) memcpy(dest, src, n)
#define JUMPOUT(x) return

/* Memory barrier intrinsic */
static inline void _sync_synchronize(void)
{
    __asm__ __volatile__("" ::: "memory");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_clang_O2_no_g
 * Processor: arm
 */

/* Global variable declarations */
int global_counter = 0;
int static_local_counter = 0;
int *file_scope_static = 0;
void *global_func_ptr = 0;



/* Atomic compare-and-swap helper */
static inline int MEMORY_cmp_swap(int expected, int desired, int *ptr)
{
    if (*ptr == expected) {
        *ptr = desired;
        return 0;
    }
    return 1;
}
#define MEMORY MEMORY_cmp_swap
const char *asc_2D56 = "=== Testing Stack Memory ===";
const char *asc_2D74 = "=== Testing Heap Memory ===";
const char *asc_2D92 = "=== Testing Static/Global Memory ===";
const char *asc_2DB6 = "=== Testing Memory Operations ===";
const char *const_string = "const_string_data";
int global_array[10] = {0};
int global_heap_ptr = 0;
int extern_global_var = 0;
int word_32 = 50;
int byte_9 = 0;
unsigned int unk_2E04[3] = {0};
unsigned int unk_2E10[3] = {0};
const char *aD = "%d\n";
const char *byte_2A42 = "signal: %d\n";
const char *byte_2A1D = "exit status: %d\n";

/* Forward declarations */
static int call_weak_fn(void);
int double_value(int a1);



/* Function: .init_proc @ 0x55C */
static int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_568 @ 0x568 */
static void sub_568()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function - simple implementation */
static int call_weak_fn(void)
{
    return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: local_vars @ 0x7BC */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x7C8 */
int local_array(int a1)
{
 return 5 * a1;
}


/* Function: local_struct @ 0x7D0 */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x7D8 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x7E8 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x7F4 */
int large_stack_frame()
{
 int i; // r0
 unsigned char v2[2056]; // [sp+0h] [bp-808h]

 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x824 */
int vla_stack(unsigned int a1)
{
 int v1; // r1
 char *v2; // r1
 int v3; // r3
 unsigned int v4; // r2
 int v6; // [sp-4h] [bp-10h] BYREF

 v1 = -1;
 if ( a1 - 1001 >= 0xFFFFFC18 )
 {
 v2 = (char *)&v6 - ((4 * a1 + 7) & 0xFFFFFFF8);
 v3 = 0;
 v4 = a1;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 --v4;
 }
 while ( v4 );
 return *(unsigned int *)&v2[(2 * (a1 + (a1 >> 31))) & 0xFFFFFFFD];
 }
 return v1;
}


/* Function: alloca_usage @ 0x898 */
int alloca_usage(int a1)
{
 char *v2; // r1
 int v3; // r2
 int i; // r3
 int v5; // [sp-4h] [bp-10h] BYREF

 if ( a1 < 1 )
 return -1;
 v2 = (char *)&v5 - ((4 * a1 + 7) & 0xFFFFFFF8);
 v3 = 0;
 for ( i = 0; i != a1; ++i )
 {
 *(unsigned int *)&v2[4 * i] = v3;
 v3 += 3;
 }
 return *(unsigned int *)&v2[(2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD];
}


/* Function: stack_alias @ 0x8FC */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x904 */
int test_stack_memory()
{
 int i; // r0
 unsigned char v2[2056]; // [sp+0h] [bp-808h]

 puts(asc_2D56);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v2[1024]);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x9F0 */
int heap_basic(int a1)
{
 char *v2; // r0
 int v3; // r1
 int v4; // r2
 int v5; // r4

 v2 = (char *)malloc(4 * a1);
 if ( !v2 )
 return -1;
 if ( a1 >= 1 )
 {
 v3 = 0;
 v4 = a1;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 --v4;
 }
 while ( v4 );
 }
 v5 = *(unsigned int *)&v2[(2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD];
 free(v2);
 return v5;
}


/* Function: heap_calloc @ 0xA50 */
int heap_calloc(signed int a1)
{
 int *v2; // r0
 int v3; // r4
 int *v4; // r1
 int v5; // r2
 int v6; // t1

 v2 = (int *)calloc(a1, 4u);
 if ( !v2 )
 return -1;
 v3 = 0;
 if ( a1 >= 2 )
 {
 v4 = v2 + 1;
 v5 = a1 - 1;
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


/* Function: heap_realloc @ 0xAA8 */
int heap_realloc()
{
 unsigned int *v0; // r0
 void *v1; // r4
 unsigned int *v2; // r0
 int v3; // r1
 int v4; // r5

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 v0[3] = 4;
 v0[4] = 5;
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v2[9] = 90;
 v3 = v2[2];
 v2[6] = 60;
 v4 = -3;
 v2[5] = 50;
 v1 = v2;
 v2[7] = 70;
 v2[8] = 80;
 if ( v3 == 3 )
 v4 = 50;
 }
 else
 {
 v4 = -2;
 }
 free(v1);
 return v4;
}


/* Function: heap_array @ 0xB5C */
int heap_array(int a1)
{
 unsigned int *v2; // r0
 int v3; // r1
 unsigned int *v4; // r2
 int v5; // r3
 int v6; // r4

 v2 = malloc(4 * a1);
 if ( !v2 )
 return -1;
 if ( a1 >= 1 )
 {
 v3 = 0;
 v4 = v2;
 v5 = a1;
 do
 {
 *v4++ = v3;
 v3 += 3;
 --v5;
 }
 while ( v5 );
 }
 v6 = *(unsigned int *)((char *)v2 + ((2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD));
 free(v2);
 return v6;
}


/* Function: heap_struct @ 0xBC0 */
int heap_struct(int a1)
{
 return 3 * a1;
}


/* Function: heap_nested @ 0xBC8 */
int heap_nested(unsigned int *a1)
{
 unsigned int *v2; // r0
 int result; // r0
 unsigned int *v4; // r4
 unsigned int *v5; // r0
 unsigned int *v6; // r1

 v2 = malloc(8u);
 *a1 = v2;
 if ( !v2 )
 return -1;
 v4 = v2;
 *v2 = 10;
 v5 = malloc(8u);
 v4[1] = v5;
 if ( v5 )
 {
 v6 = v5;
 result = 0;
 *v6 = 20;
 v6[1] = 0;
 }
 else
 {
 free(v4);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0xC3C */
int linked_list_heap()
{
 int *v0; // r0
 int v1; // r4
 int *v2; // r5
 unsigned int *v3; // r0
 unsigned int *v4; // r6
 unsigned int *v5; // r0
 unsigned int *v6; // r7
 unsigned int *v7; // r0
 unsigned int *v8; // r6
 unsigned int *v9; // r0
 int *v10; // r0
 int v11; // r1
 int *v12; // r6
 int *v13; // r6
 int *v14; // r6
 int *v15; // r6

 v0 = (int *)malloc(8u);
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
 v2[1] = (int)v3;
 v5 = malloc(8u);
 if ( v5 )
 {
 v6 = v5;
 *v5 = 20;
 v5[1] = 0;
 v4[1] = v5;
 v7 = malloc(8u);
 if ( v7 )
 {
 v8 = v7;
 *v7 = 30;
 v7[1] = 0;
 v6[1] = v7;
 v9 = malloc(8u);
 if ( v9 )
 {
 v1 = 0;
 v8[1] = v9;
 *v9 = 40;
 v9[1] = 0;
 v10 = v2;
 do
 {
 v11 = *v10;
 v10 = (int *)v10[1];
 v1 += v11;
 }
 while ( v10 );
 do
 {
 v12 = (int *)v2[1];
 free(v2);
 v2 = v12;
 }
 while ( v12 );
 }
 else
 {
 do
 {
 v15 = (int *)v2[1];
 free(v2);
 v2 = v15;
 }
 while ( v15 );
 }
 }
 else
 {
 do
 {
 v14 = (int *)v2[1];
 free(v2);
 v2 = v14;
 }
 while ( v14 );
 }
 }
 else
 {
 do
 {
 v13 = (int *)v2[1];
 free(v2);
 v2 = v13;
 }
 while ( v13 );
 }
 }
 else
 {
 free(v2);
 }
 }
 return v1;
}


/* Function: create_tree_node @ 0xD80 */
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


/* Function: tree_heap_traversal @ 0xDAC */
int tree_heap_traversal()
{
 return 60;
}


/* Function: memory_leak @ 0xDB4 */
int memory_leak(int a1)
{
 unsigned int *v2; // r0
 int i; // r1

 v2 = malloc(4 * a1);
 if ( !v2 )
 return -1;
 if ( a1 >= 1 )
 {
 for ( i = 0; i != a1; ++i )
 v2[i] = i;
 }
 return *(unsigned int *)((char *)v2 + ((2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD));
}


/* Function: dangling_pointer @ 0xE08 */
int dangling_pointer()
{
 void *v0; // r0
 void *v2; // r4

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v2 = v0;
 printf("value before free: %d\n", 42);
 free(v2);
 return *(unsigned int *)v2;
}


/* Function: double_free @ 0xE50 */
int double_free(int a1)
{
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -2;
}


/* Function: heap_overflow @ 0xE60 */
int heap_overflow()
{
 return 0;
}


/* Function: test_heap_memory @ 0xE68 */
void test_heap_memory()
{
 unsigned int *v0; // r0
 void *v1; // r4
 unsigned int *v2; // r0
 int v3; // r1
 int v4; // r5
 void **v5; // r0
 void **v6; // r4
 unsigned int *v7; // r0
 int v8; // r1
 int v9; // r0
 int v10; // r0
 int v11; // r1
 int v12; // r0
 int stat_loc; // [sp+4h] [bp-14h] BYREF

 puts(asc_2D74);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 v0 = malloc(0x14u);
 if ( v0 )
 {
 v1 = v0;
 v0[3] = 4;
 v0[4] = 5;
 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v2[9] = 90;
 v3 = v2[2];
 v2[6] = 60;
 v4 = -3;
 v2[5] = 50;
 v1 = v2;
 v2[7] = 70;
 v2[8] = 80;
 if ( v3 == 3 )
 v4 = 50;
 }
 else
 {
 v4 = -2;
 }
 free(v1);
 }
 else
 {
 v4 = -1;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v4);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v5 = (void **)malloc(8u);
 if ( v5 )
 {
 v6 = v5;
 *v5 = byte_9 + 1;
 v7 = malloc(8u);
 v6[1] = v7;
 if ( v7 )
 {
 v8 = 0;
 *v7 = 20;
 v7[1] = 0;
 }
 else
 {
 free(v6);
 v8 = -2;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v8);
 free(v6[1]);
 free(v6);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v9 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v9);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 printf("HEAP-L3-03 (memory_leak): %d\n", 2);
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
 perror("fork");
 }
 else
 {
 waitpid(v10, &stat_loc, 0);
 v11 = stat_loc & 0x7F;
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (v11 << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_2A42, v11);
 }
 else
 {
 printf(byte_2A1D, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1108 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x112C */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1140 */
int global_array_access(unsigned int a1)
{
 int result; // r0

 result = -1;
 if ( a1 <= 9 )
 return global_array[a1];
 return result;
}


/* Function: static_local @ 0x1160 */
int static_local(int a1)
{
 int v1; // r1

 v1 = 0;
 if ( !a1 )
 v1 = static_local_counter + 1;
 static_local_counter = v1;
 return v1;
}


/* Function: call_static_func @ 0x1190 */
int call_static_func(int a1)
{
 return (2 * a1) | 1;
}


/* Function: access_extern_global @ 0x119C */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x11B4 */
int call_extern_func()
{
 return 2 * 5;
}


/* Function: read_const_data @ 0x11BC */
int read_const_data()
{
 return (unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x11D4 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x11DC */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x11E4 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x11EC */
int * set_file_static(int *result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x1200 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1210 */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x1224 */
int call_global_callback()
{
 if ( global_func_ptr )
 return ((int (*)(void))global_func_ptr)();
 else
 return -1;
}


/* Function: global_heap_store @ 0x1240 */
int global_heap_store(int a1)
{
 global_heap_ptr = a1;
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1260 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1268 */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x1270 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1278 */
int test_static_global()
{
 int v0; // r0
 int v2; // [sp+4h] [bp-14h] BYREF

 puts(asc_2D92);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = 2 * 5;
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 printf("STM-L2-03 (read_const_data): %d\n", (unsigned char)const_string[4] + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = (unsigned int *)&word_32;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 global_heap_ptr = (int)&v2;
 v2 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: extern_function removed - inlined to avoid linker conflicts */

/* Function: double_value @ 0x14C0 */
int double_value(int a1)
{
 return 2 * a1;
}





/* Function: memop_memset @ 0x14C8 */
int memop_memset(unsigned char *s, size_t n, int c, size_t a4)
{
 int result; // r0
 int v6; // zf

 result = -1;
 v6 = s == 0;
 if ( s )
 {
 a4 = n;
 v6 = n == 0;
 }
 if ( !v6 )
 {
 memset(s, c, a4);
 return *s;
 }
 return result;
}


/* Function: memop_memcpy @ 0x1508 */
int memop_memcpy(char *dest, const void *a2, size_t n)
{
 size_t v3; // r4
 int result; // r0
 int v6; // zf

 result = -1;
 if ( dest )
 {
 v6 = a2 == 0;
 if ( a2 )
 {
 v3 = n;
 v6 = n == 0;
 }
 if ( !v6 )
 {
 memcpy(dest, a2, v3);
 return *(unsigned int *)&dest[(v3 & 0xFFFFFFFC) - 4];
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x1554 */
int memop_memmove(char *src, unsigned int a2)
{
 int result; // r0

 result = -1;
 if ( src )
 {
 if ( a2 >= 2 )
 {
 memmove(src + 1, src, a2 - 1);
 return (unsigned char)src[1];
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x158C */
int memop_memcmp(void *s1, const void *a2, size_t a3)
{
 int result; // r0
 int v5; // zf
 int v6; // r1

 result = 0;
 if ( s1 )
 {
 v5 = a2 == 0;
 if ( a2 )
 v5 = a3 == 0;
 if ( !v5 )
 {
 result = memcmp(s1, a2, a3);
 v6 = result;
 if ( result )
 result = -1;
 if ( v6 >= 1 )
 return 1;
 }
 }
 return result;
}


/* Function: memop_bzero @ 0x15D4 */
int memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return -1;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x1600 */
int memop_bcopy(void *src, unsigned char *dest, size_t a3)
{
 int result; // r0
 int v6; // zf

 result = -1;
 if ( src )
 {
 v6 = dest == 0;
 if ( dest )
 v6 = a3 == 0;
 if ( !v6 )
 {
 memmove(dest, src, a3);
 return *dest;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x1640 */
int memop_unaligned_access(unsigned char *a1)
{
 if ( a1 )
 return a1[1] | (a1[2] << 8) | ((a1[3] | (a1[4] << 8)) << 16);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x166C */
int memop_memory_barrier(int *a1)
{
 int v2; // r5

 if ( !a1 )
 return -1;
 v2 = *a1;
 _sync_synchronize();
 return *a1 + v2;
}


/* Function: test_memory_op_functions @ 0x1698 */
int test_memory_op_functions()
{
 int v0; // r0
 int v1; // r1
 unsigned int src[5]; // [sp+4h] [bp-14h] BYREF

 puts(asc_2DB6);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 qmemcpy(src, "HelloWorld", 10);
 memmove((char *)src + 1, src, 9u);
 printf("MEMOP-L2-03: %c\n", BYTE1(src[0]));
 v0 = memcmp(&unk_2E04, &unk_2E10, 0xCu);
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
 return printf("MEMOP-L3-02: %d\n", 10);
}


/* Function: main @ 0x17D8 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}





/* Function: __sync_fetch_and_add_4 @ 0x1800 */
static int sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_cmp_swap(*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x1838 */
static int sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_cmp_swap(*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x1870 */
static int sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_cmp_swap(*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x18A8 */
static int sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_cmp_swap(*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x18E0 */
static int sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_cmp_swap(*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x1918 */
static int sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_cmp_swap(*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x1954 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x19B4 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x1A14 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x1A74 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x1AD4 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x1B34 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x1B98 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x1BF4 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x1C50 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x1CAC */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x1D08 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x1D64 */
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
 while ( MEMORY_cmp_swap(*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x1DC4 */
static int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY_cmp_swap(v4 - a2, v4, a1) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x1DFC */
static int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY_cmp_swap(v4 + a2, v4, a1) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x1E34 */
static int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY_cmp_swap(v4 & ~a2, v4, a1) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x1E6C */
static int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY_cmp_swap(v4 | ~a2, v4, a1) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x1EA4 */
static int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY_cmp_swap(v4 ^ a2, v4, a1) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x1EDC */
static int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY_cmp_swap(~v4, v4, a1) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x1F18 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x1F80 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x1FE8 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x2050 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x20B8 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x2120 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x218C */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x21F0 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x2254 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x22B8 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x231C */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x2380 */
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
 while ( MEMORY_cmp_swap(*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x23E8 */
static int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY_cmp_swap(a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x2438 */
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
 if ( !MEMORY_cmp_swap(*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x24B0 */
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
 if ( !MEMORY_cmp_swap(*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x2524 */
static bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY_cmp_swap(a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x2550 */
static bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x256C */
static bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x2594 */
static int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY_cmp_swap(*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x25CC */
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
 while ( MEMORY_cmp_swap(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x262C */
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
 while ( MEMORY_cmp_swap(*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x2688 */
static int sync_lock_release_8(unsigned int *a1)
{
 _sync_synchronize();
 *a1 = 0;
 a1[1] = 0;
 _sync_synchronize();
 return 0;
}


/* Function: __sync_lock_release_4 @ 0x26AC */
static int sync_lock_release_4(unsigned int *a1)
{
 _sync_synchronize();
 *a1 = 0;
 _sync_synchronize();
 return 0;
}


/* Function: __sync_lock_release_2 @ 0x26CC */
static int _sync_lock_release_2(unsigned short *a1)
{
 _sync_synchronize();
 *a1 = 0;
 _sync_synchronize();
 return 0;
}


/* Function: __sync_lock_release_1 @ 0x26EC */
static int _sync_lock_release_1(unsigned char *a1)
{
 _sync_synchronize();
 *a1 = 0;
 _sync_synchronize();
 return 0;
}


/* Function: .term_proc @ 0x270C */
static void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_calloc @ 0x130C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x130C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x130CC */

/* FAILED to decompile: __imp_printf @ 0x130D0 */

/* FAILED to decompile: __imp_memmove @ 0x130D4 */

/* FAILED to decompile: __imp_free @ 0x130D8 */

/* FAILED to decompile: __imp_memcpy @ 0x130DC */

/* FAILED to decompile: __imp_memcmp @ 0x130E0 */

/* FAILED to decompile: __imp_realloc @ 0x130E4 */

/* FAILED to decompile: __imp_perror @ 0x130E8 */

/* FAILED to decompile: __imp_waitpid @ 0x130EC */

/* FAILED to decompile: __imp_puts @ 0x130F0 */

/* FAILED to decompile: __imp_malloc @ 0x130F4 */

/* FAILED to decompile: __imp_exit @ 0x130F8 */

/* FAILED to decompile: __imp_memset @ 0x130FC */

/* FAILED to decompile: __imp_fork @ 0x13100 */

/* FAILED to decompile: __imp_abort @ 0x13104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1310C */

/* Total functions decompiled: 114, failed: 18 */
