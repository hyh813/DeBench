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
typedef unsigned char bool;

/* Helper macros for decompiled code */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/3/3_clang_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x55C */
int init_proc()
{
 return 0;
}

/* Function: _sync_synchronize */
static void _sync_synchronize(void)
{
 asm volatile("" ::: "memory");
}

/* Function: _sync_synchronize_internal */
static void _sync_synchronize_internal(void)
{
 asm volatile("" ::: "memory");
}

/* Function: sub_568 @ 0x568 */
void sub_568()
{
 return;
}

/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

/* Global variables */
int global_counter = 0;
const char *asc_2F62 = "Stack Memory Tests";
const char *asc_2F9E = "Static and Global Memory Tests";
int static_local_counter = 0;
int *file_scope_static = 0;
int (*global_func_ptr)(int) = 0;
const char *asc_2F80 = "Heap Memory Tests";
const char *asc_2FC2 = "Memory Operation Tests";
unsigned char byte_9 = 0;
int global_heap_ptr = 0;
unsigned int global_array[10] = {0};
int extern_global_var = 0;
const char *const_string = "Test";
unsigned int word_32 = 50;
unsigned int unk_3010 = 0x01000000;
unsigned int unk_301C = 0x04030201;

/* Missing string constants from decompilation */
static const char aD[] = "%d\n";
static const char aFork_0[] = "fork";
static const char byte_2C4E[] = "Signal: %d\n";
static const char byte_2C29[] = "Exit status: %d\n";

/* Forward declarations */
int double_value(int a1);



/* System function declarations */
/* Memory allocation functions */
void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void free(void *ptr);

/* String/memory functions */
int printf(const char *format, ...);
int puts(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);

/* Process functions */
int fork(void);
int waitpid(int pid, int *stat_loc, int options);
void perror(const char *s);
void exit(int status);

/* Function: local_vars @ 0x7BC */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x7C8 */
int local_array(int a1)
{
 int v1; // r1
 int i; // r3
 unsigned char v4[40]; // [sp+0h] [bp-28h]

 v1 = 0;
 for ( i = 0; i != -10; --i )
 {
 *(unsigned int *)&v4[-4 * i] = v1;
 v1 += a1;
 }
 return *(unsigned int *)&v4[20];
}


/* Function: local_struct @ 0x7F8 */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x800 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x810 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
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
int vla_stack(int a1)
{
 int v1; // r1
 char *v2; // r1
 int v3; // r3
 int v4; // r2
 int v6; // [sp-4h] [bp-10h] BYREF

 v1 = -1;
 if ( (unsigned int)(a1 - 1001) >= 0xFFFFFC18 )
 {
 v2 = (char *)&v6 - ((4 * a1 + 7) & 0xFFFFFFF8);
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
 return *(unsigned int *)&v2[(2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD];
 }
 return v1;
}


/* Function: alloca_usage @ 0x8C8 */
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


/* Function: stack_alias @ 0x92C */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x934 */
int test_stack_memory()
{
 int v0; // r0
 unsigned int *v1; // r4
 int i; // r0
 int j; // r1
 int k; // r0
 unsigned char v6[20]; // [sp+0h] [bp-810h] BYREF
 int v7; // [sp+14h] [bp-7FCh]
 unsigned char v8; // [sp+400h] [bp-410h]

 puts(asc_2F62);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 v0 = 0;
 v1 = v6;
 do
 {
 *(unsigned int *)&v6[2 * v0] = v0;
 v0 += 2;
 }
 while ( v0 != 20 );
 printf("MEM-L1-02 (local_array): %d\n", v7);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 for ( i = 0; i != 2048; ++i )
 v6[i] = i;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v8);
 for ( j = 0; j != 20; j += 2 )
 *(unsigned int *)&v6[2 * j] = j;
 printf("MEM-L2-02 (vla_stack): %d\n", v7);
 for ( k = 0; k != 30; k += 3 )
 *v1++ = k;
 printf("MEM-L2-03 (alloca_usage): %d\n", v7);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xA68 */
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


/* Function: heap_calloc @ 0xAC8 */
int heap_calloc(size_t a1)
{
 int v1; // r5
 int *v2; // r0
 int v3; // r4
 int *v4; // r1
 int v5; // t1

 v1 = a1;
 v2 = (int *)calloc(a1, 4u);
 if ( !v2 )
 return -1;
 v3 = 0;
 if ( v1 >= 1 )
 {
 v4 = v2;
 do
 {
 v5 = *v4++;
 v3 += v5;
 --v1;
 }
 while ( v1 );
 }
 free(v2);
 return v3;
}


/* Function: heap_realloc @ 0xB18 */
int heap_realloc()
{
 unsigned int *v0; // r0
 unsigned int *v1; // r4
 int i; // r0
 int v3; // r6
 unsigned int *v4; // r0
 int v5; // r1
 int v6; // r2
 int v7; // r5

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
 v5 = 5;
 v6 = 50;
 do
 {
 v1[v5] = v6;
 v6 += 10;
 ++v5;
 }
 while ( v5 != 10 );
 v7 = -3;
 if ( v1[2] == v3 )
 v7 = v1[5];
 v1 = v4;
 }
 else
 {
 v7 = -2;
 }
 free(v1);
 return v7;
}


/* Function: heap_array @ 0xBB4 */
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


/* Function: heap_struct @ 0xC18 */
int heap_struct(int a1)
{
 return 3 * a1;
}


/* Function: heap_nested @ 0xC20 */
int heap_nested(void **a1)
{
 unsigned int *v2; // r0
 int result; // r0
 unsigned int *v4; // r1

 v2 = malloc(8u);
 *a1 = v2;
 if ( !v2 )
 return -1;
 *v2 = 10;
 *((unsigned int *)*a1 + 1) = malloc(8u);
 v4 = (unsigned int *)*((unsigned int *)*a1 + 1);
 if ( v4 )
 {
 result = 0;
 *v4 = 20;
 v4[1] = 0;
 }
 else
 {
 free(*a1);
 return -2;
 }
 return result;
}


/* Function: linked_list_heap @ 0xC94 */
int linked_list_heap()
{
 bool v0; // r7
 unsigned int *v1; // r5
 unsigned int *v2; // r9
 unsigned int v3; // r6
 unsigned int *v4; // r10
 unsigned int *v5; // r4
 int v6; // r4
 int *v7; // r0
 int v8; // r1
 unsigned int *v9; // r6

 v0 = 1;
 v1 = 0;
 v2 = 0;
 v3 = 0;
 while ( 1 )
 {
 v4 = malloc(8u);
 if ( !v4 )
 break;
 *v4 = 10 * v3;
 v4[1] = 0;
 if ( v1 )
 {
 v2[1] = v4;
 v2 = v4;
 }
 else
 {
 v2 = v4;
 v1 = v4;
 }
 v0 = v3++ < 4;
 if ( v3 == 5 )
 goto LABEL_10;
 }
 if ( v1 )
 {
 do
 {
 v5 = (unsigned int *)v1[1];
 free(v1);
 v1 = v5;
 }
 while ( v5 );
 }
 v1 = 0;
LABEL_10:
 v6 = -1;
 if ( !v0 )
 {
 v6 = 0;
 if ( v1 )
 {
 v7 = v1;
 do
 {
 v8 = *v7;
 v7 = (int *)v7[1];
 v6 += v8;
 }
 while ( v7 );
 }
 if ( v1 )
 {
 do
 {
 v9 = (unsigned int *)v1[1];
 free(v1);
 v1 = v9;
 }
 while ( v9 );
 }
 }
 return v6;
}


/* Function: create_tree_node @ 0xD9C */
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


/* Function: tree_heap_traversal @ 0xDC8 */
int tree_heap_traversal()
{
 int *v0; // r0
 int *v1; // r4
 int *v2; // r5
 int *v3; // r6
 bool v4; // zf
 int v5; // r8
 int v6; // r7
 int v7; // r6
 int v8; // r5

 v0 = (int *)malloc(0xCu);
 if ( v0 )
 {
 v1 = v0;
 *v0 = 10;
 v0[1] = 0;
 v0[2] = 0;
 v2 = (int *)malloc(0xCu);
 if ( v2 )
 {
 *v2 = 20;
 v2[1] = 0;
 v2[2] = 0;
 }
 v1[1] = (int)v2;
 v3 = (int *)malloc(0xCu);
 if ( v3 )
 {
 *v3 = 30;
 v3[1] = 0;
 v3[2] = 0;
 }
 v1[2] = (int)v3;
 v4 = v2 == 0;
 if ( v2 )
 v4 = v3 == 0;
 if ( v4 )
 {
 if ( v2 )
 free(v2);
 v8 = -2;
 if ( !v3 )
 goto LABEL_16;
 }
 else
 {
 v5 = *v3;
 v6 = *v2;
 v7 = *v1;
 free(v2);
 v8 = v6 + v7 + v5;
 v3 = (int *)v1[2];
 }
 free(v3);
LABEL_16:
 free(v1);
 return v8;
 }
 return -1;
}


/* Function: memory_leak @ 0xEA8 */
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


/* Function: dangling_pointer @ 0xEFC */
int dangling_pointer()
{
 unsigned int *v0; // r0
 void *v2; // r4

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v2 = v0;
 *v0 = 42;
 printf("value before free: %d\n", 42);
 free(v2);
 return *(unsigned int *)v2;
}


/* Function: double_free @ 0xF4C */
int double_free(int a1)
{
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -2;
}


/* Function: heap_overflow @ 0xF5C */
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


/* Function: test_heap_memory @ 0xFA8 */
void test_heap_memory()
{
 unsigned int *v0; // r0
 int v1; // r4
 int v2; // r5
 int i; // r1
 unsigned int *v4; // r0
 int v5; // r1
 unsigned int *v6; // r0
 int v7; // r4
 int v8; // r6
 unsigned int *v9; // r5
 int j; // r0
 int v11; // r7
 unsigned int *v12; // r0
 int v13; // r1
 int v14; // r2
 unsigned int *v15; // r0
 int v16; // r1
 int k; // r2
 void **v18; // r0
 void **v19; // r4
 unsigned int *v20; // r0
 int v21; // r1
 int v22; // r0
 int v23; // r0
 unsigned int *v24; // r0
 int m; // r1
 int v26; // r1
 int v27; // r0
 int v28; // r1
 int v29; // r0
 int stat_loc; // [sp+4h] [bp-1Ch] BYREF

 puts(asc_2F80);
 v0 = malloc(0x28u);
 v1 = -1;
 v2 = -1;
 if ( v0 )
 {
 for ( i = 0; i != 10; ++i )
 v0[i] = i * 2;
 v2 = v0[5];
 free(v0);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n", v2);
 v4 = calloc(5u, 4u);
 if ( v4 )
 {
 v5 = 0;
 v1 = 0;
 do
 v1 += v4[-v5--];
 while ( v5 != -5 );
 free(v4);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v6 = malloc(0x14u);
 v7 = -1;
 v8 = -1;
 if ( v6 )
 {
 v9 = v6;
 for ( j = 0; j != 5; ++j )
 v9[j] = j + 1;
 v11 = v9[2];
 v12 = realloc(v9, 0x28u);
 if ( v12 )
 {
 v13 = 5;
 v14 = 50;
 do
 {
 v12[v13] = v14;
 v14 += 10;
 ++v13;
 }
 while ( v13 != 10 );
 v8 = -3;
 if ( v12[2] == v11 )
 v8 = v12[5];
 v9 = v12;
 }
 else
 {
 v8 = -2;
 }
 free(v9);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v8);
 v15 = malloc(0x28u);
 if ( v15 )
 {
 v16 = 0;
 for ( k = 0; k != -10; --k )
 {
 v15[-k] = v16;
 v16 += 3;
 }
 v7 = v15[5];
 free(v15);
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v7);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v18 = (void **)malloc(8u);
 v19 = v18;
 if ( v18 )
 {
 *v18 = byte_9 + 1;
 v20 = malloc(8u);
 v19[1] = v20;
 if ( v20 )
 {
 v21 = 0;
 *v20 = 20;
 v20[1] = 0;
 }
 else
 {
 free(v19);
 v21 = -2;
 }
 }
 else
 {
 v21 = -1;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v21);
 if ( v19 )
 {
 free(v19[1]);
 free(v19);
 }
 v22 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v22);
 v23 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v23);
 v24 = malloc(0x14u);
 if ( v24 )
 {
 for ( m = 0; m != 5; ++m )
 v24[m] = m;
 v26 = v24[2];
 }
 else
 {
 v26 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v26);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v27 = fork();
 if ( !v27 )
 {
 v29 = dangling_pointer();
 printf(aD, v29);
 exit(0);
 }
 if ( v27 < 1 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v27, &stat_loc, 0);
 v28 = stat_loc & 0x7F;
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (v28 << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_2C4E, v28);
 }
 else
 {
 printf(byte_2C29, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x12F0 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1314 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1328 */
int global_array_access(unsigned int a1)
{
 int result; // r0

 result = -1;
 if ( a1 <= 9 )
 return global_array[a1];
 return result;
}


/* Function: static_local @ 0x1348 */
int static_local(int a1)
{
 int v1; // r1

 v1 = 0;
 if ( !a1 )
 v1 = static_local_counter + 1;
 static_local_counter = v1;
 return v1;
}


/* Function: call_static_func @ 0x1378 */
int call_static_func(int a1)
{
 return (2 * a1) | 1;
}


/* Function: access_extern_global @ 0x1384 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x139C */
int call_extern_func()
{
 return external_function_call(5);
}


/* Function: read_const_data @ 0x13B0 */
int read_const_data()
{
 return (unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x13C8 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x13D0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x13D8 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x13E0 */
int * set_file_static(int *result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x13F4 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x1404 */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x1418 */
int call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr(0);
 else
 return -1;
}


/* Function: global_heap_store @ 0x1448 */
int global_heap_store(int a1)
{
 global_heap_ptr = a1;
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -1;
}


/* Function: static_complex_init @ 0x1468 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1470 */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x1478 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1480 */
int test_static_global()
{
 int v0; // r0
 int v2; // [sp+4h] [bp-14h] BYREF

 puts(asc_2F9E);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = external_function_call(5);
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


/* Function: double_value @ 0x16C8 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: memop_memset @ 0x16D0 */
int memop_memset(unsigned char *s, size_t n, int c, size_t a4)
{
 int result; // r0
 bool v6; // zf

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


/* Function: memop_memcpy @ 0x1710 */
int memop_memcpy(char *dest, const void *a2, size_t n)
{
 size_t v3; // r4
 int result; // r0
 bool v6; // zf

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


/* Function: memop_memmove @ 0x175C */
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


/* Function: memop_memcmp @ 0x1794 */
int memop_memcmp(void *s1, const void *a2, size_t a3)
{
 int result; // r0
 bool v5; // zf
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


/* Function: memop_bzero @ 0x17DC */
int memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return -1;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x1808 */
int memop_bcopy(void *src, unsigned char *dest, size_t a3)
{
 int result; // r0
 bool v6; // zf

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


/* Function: memop_unaligned_access @ 0x1848 */
int memop_unaligned_access(unsigned char *a1)
{
 if ( a1 )
 return a1[1] | (a1[2] << 8) | ((a1[3] | (a1[4] << 8)) << 16);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x1874 */
int memop_memory_barrier(int *a1)
{
 int v3; // r5

 if ( !a1 )
 return -1;
 v3 = *a1;
 asm volatile("" ::: "memory");
 return *a1 + v3;
}


/* Function: test_memory_op_functions @ 0x18A0 */
int test_memory_op_functions()
{
 int v0; // r0
 int v1; // r1
 unsigned int src[5]; // [sp+4h] [bp-14h] BYREF

 puts(asc_2FC2);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 memcpy(src, "HelloWorld", 10);
 memmove((char *)src + 1, src, 9u);
 printf("MEMOP-L2-03: %c\n", BYTE1(src[0]));
 v0 = memcmp(&unk_3010, &unk_301C, 0xCu);
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


/* Function: main @ 0x19E4 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: external_function_call @ 0x1A04 */
int external_function_call(int a1)
{
 return 3 * a1;
}

/* Atomic operation helper declarations */
static bool _sync_bool_compare_and_swap_4(int ptr, unsigned int oldval, unsigned int newval);
static int _sync_val_compare_and_swap_4(unsigned int *ptr, unsigned int oldval, unsigned int newval);

/* Function: __sync_fetch_and_add_4 @ 0x1A0C */
static int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( !_sync_bool_compare_and_swap_4((int)a1, v4, v4 + a2) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x1A44 */
static int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( !_sync_bool_compare_and_swap_4((int)a1, v4, v4 - a2) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x1A7C */
static int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( !_sync_bool_compare_and_swap_4((int)a1, v4, v4 | a2) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x1AB4 */
static int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( !_sync_bool_compare_and_swap_4((int)a1, v4, v4 & a2) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x1AEC */
static int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( !_sync_bool_compare_and_swap_4((int)a1, v4, v4 ^ a2) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x1B24 */
static int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( !_sync_bool_compare_and_swap_4((int)a1, v4, ~(v4 & a2)) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x1B60 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x1BC0 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x1C20 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x1C80 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x1CE0 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x1D40 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x1DA4 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x1E00 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x1E5C */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x1EB8 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x1F14 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x1F70 */
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
 while ( __sync_val_compare_and_swap_4(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x1FD0 */
static int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( 0 );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x2008 */
static int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( 0 );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x2040 */
static int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( 0 );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x2078 */
static int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( 0 );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x20B0 */
static int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( 0 );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x20E8 */
static int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( 0 );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x2124 */
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
 while ( 0 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x218C */
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
 while ( 0 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x21F4 */
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
 while ( 0 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x225C */
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
 while ( 0 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x22C4 */
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
 while ( 0 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x232C */
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
 while ( 0 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x2398 */
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
 while ( 0 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x23FC */
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
 while ( 0 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x2460 */
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
 while ( 0 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x24C4 */
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
 while ( 0 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x2528 */
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
 while ( 0 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x258C */
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
 while ( 0 );
 return (char)((v5 & v6) >> v3);
}


/* Function: _sync_val_compare_and_swap_4 @ 0x25F4 */
static int _sync_val_compare_and_swap_4(unsigned int *ptr, unsigned int oldval, unsigned int newval)
{
 unsigned int old;
 do {
 old = *ptr;
 } while (old == oldval && !_sync_bool_compare_and_swap_4((int)ptr, (int)old, (int)newval));
 return old;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x2644 */
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
 if ( !__sync_val_compare_and_swap_4(v6, *v6, (v7 ^ *v6) & v5 ^ *v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x26BC */
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
 if ( !__sync_val_compare_and_swap_4(v5, *v5, (v7 ^ *v5) & v6 ^ *v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x2730 */
static bool _sync_bool_compare_and_swap_4(int ptr, unsigned int oldval, unsigned int newval)
{
 unsigned int old = *(unsigned int *)ptr;
 if (old == oldval) {
 *(unsigned int *)ptr = newval;
 return 1;
 }
 return 0;
}




/* Function: __sync_bool_compare_and_swap_2 @ 0x275C */
static bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x2778 */
static bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x27A0 */
static int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap_4(a1, *a1, a2) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x27D8 */
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
 while ( __sync_val_compare_and_swap_4(v3, *v3, (v5 ^ *v3) & v4 ^ *v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x2838 */
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
 while ( __sync_val_compare_and_swap_4(v3, *v3, (v5 ^ *v3) & v4 ^ *v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x2894 */
static void _sync_lock_release_8(unsigned int *a1)
{
 _sync_synchronize_internal();
 *a1 = 0;
 a1[1] = 0;
}


/* Function: __sync_lock_release_4 @ 0x28B8 */
static void _sync_lock_release_4(unsigned int *a1)
{
 _sync_synchronize_internal();
 *a1 = 0;
}


/* Function: __sync_lock_release_2 @ 0x28D8 */
static void _sync_lock_release_2(unsigned short *a1)
{
 _sync_synchronize_internal();
 *a1 = 0;
}


/* Function: __sync_lock_release_1 @ 0x28F8 */
static void _sync_lock_release_1(unsigned char *a1)
{
 _sync_synchronize_internal();
 *a1 = 0;
}


/* Function: .term_proc @ 0x2918 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_calloc @ 0x140C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x140C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x140CC */

/* FAILED to decompile: __imp_printf @ 0x140D0 */

/* FAILED to decompile: __imp_memmove @ 0x140D4 */

/* FAILED to decompile: __imp_free @ 0x140D8 */

/* FAILED to decompile: __imp_memcpy @ 0x140DC */

/* FAILED to decompile: __imp_memcmp @ 0x140E0 */

/* FAILED to decompile: __imp_realloc @ 0x140E4 */

/* FAILED to decompile: __imp_perror @ 0x140E8 */

/* FAILED to decompile: __imp_waitpid @ 0x140EC */

/* FAILED to decompile: __imp_puts @ 0x140F0 */

/* FAILED to decompile: __imp_malloc @ 0x140F4 */

/* FAILED to decompile: __imp_exit @ 0x140F8 */

/* FAILED to decompile: __imp_memset @ 0x140FC */

/* FAILED to decompile: __imp_fork @ 0x14100 */

/* FAILED to decompile: __imp_abort @ 0x14104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1410C */

/* Total functions decompiled: 114, failed: 18 */
