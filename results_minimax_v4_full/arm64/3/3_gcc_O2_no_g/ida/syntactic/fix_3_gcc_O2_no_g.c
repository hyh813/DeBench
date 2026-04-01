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

/* Global variables */
unsigned int global_counter = 0;
unsigned int global_array[10];
unsigned int counter_1 = 0;
unsigned int file_scope_static = 0;
unsigned long long extern_global_var = 0;
long long (*global_func_ptr)(void);

/* String constants (referenced by puts/printf) */
char asc_1FA8[] = "Stack Memory Test";
char asc_2118[] = "Heap Memory Test";
char asc_2318[] = "Static Memory Test";
char asc_25C8[] = "Memory Operation Test";
char const_string[] = "HelloWorld";
char aD[] = "%d\n";
char aFork_0[] = "fork";
char byte_2278[] = "%d\n";
char byte_22A0[] = " (core dumped)\n";

/* Function prototypes */
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int fork(void);
int waitpid(int pid, int *status, int options);
void perror(const char *s);
void exit(int status);
void __dmb(unsigned int);
char *strcpy(char *dest, const char *src);

/* Helper macros from IDA */
#define BYTE1(x) ((unsigned char)(((x) >> 8) & 0xFF))
#define LODWORD(x) ((unsigned int)((x) & 0xFFFFFFFF))

/* Weak function stub */
int call_weak_fn(void);

/* Debug jump stub */
void JUMPOUT(unsigned int addr);

long long double_value(int a1);
long long local_vars(int a1);
long long local_array(int a1);
long long local_struct(int a1);
long long address_of_local(unsigned int *a1);
long long address_of_array(unsigned int *a1);
long long large_stack_frame();
long long vla_stack(int a1);
long long alloca_usage(int a1);
long long stack_alias();
long long test_stack_memory();
long long heap_basic(int a1);
long long heap_calloc(int a1);
long long heap_realloc();
long long heap_array(int a1);
long long heap_struct(int a1);
long long heap_nested(void **a1);
long long linked_list_heap();
unsigned long long *create_tree_node(int a1);
long long tree_heap_traversal();
long long memory_leak(int a1);
long long dangling_pointer();
long long double_free(unsigned int *a1);
long long heap_overflow();
void test_heap_memory();
long long global_var_access();
long long global_var_read();
long long global_array_access(unsigned int a1);
long long static_local(int a1);
long long call_static_func(int a1);
long long access_extern_global();
long long call_extern_func();
long long read_const_data();
long long access_bss_var();
long long access_bss_buffer();
long long global_struct_access();
long long set_file_static(long long result);
long long get_file_static();
void *set_global_callback(void *result);
long long call_global_callback();
long long global_heap_store(unsigned int *a1);
long long static_complex_init();
long long tls_access(int a1);
long long init_order_test();
long long test_static_global();
long long memop_memset(unsigned char *a1, size_t n, int c);
long long memop_memcpy(char *a1, const void *a2, size_t a3);
long long memop_memmove(char *src, unsigned long long a2);
long long memop_memcmp(const void *a1, const void *a2, size_t a3);
long long memop_bzero(unsigned char *a1, size_t n);
long long memop_bcopy(void *src, void *dest, size_t a3);
long long memop_unaligned_access(long long a1);
long long memop_memory_barrier(int *a1);
long long test_memory_op_functions();
long long extern_function(int a1);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_gcc_O2_no_g
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


/* Function: main @ 0xB00 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 long long v5; // x0

 v3 = test_stack_memory();
 test_heap_memory();
 v5 = test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0xC60 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: local_vars @ 0xC70 */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0xC80 */
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


/* Function: local_struct @ 0xCE4 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0xCF0 */
long long address_of_local(unsigned int *a1)
{
 long long result; // x0

 result = 42;
 *a1 = 42;
 return result;
}


/* Function: address_of_array @ 0xD00 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0xD10 */
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


/* Function: vla_stack @ 0xD80 */
long long vla_stack(int a1)
{
 long long v1; // x1
 unsigned long long v2; // x2
 unsigned short v3; // w1
 unsigned char *v4; // x2
 long long v5; // x1
 unsigned int v7[128]; // [xsp+0h] [xbp-10010h] BYREF
 long long v8; // [xsp+400h] [xbp-FC10h]
 unsigned char v9[16]; // [xsp+10000h] [xbp-10h] BYREF

 if ( (unsigned int)(a1 - 1) > 0x3E7 )
  return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFFFFFFFFFFF0000LL;
 v3 = v1 & 0xFFF0;
 v4 = &v9[-v2];
 if ( v9 != v4 )
 {
 do
 v8 = 0;
 while ( (unsigned int *)v7 != v4 );
 }
 v7[0] = 0;
 if ( v3 >= 0x400uLL )
 v8 = 0;
 v5 = 0;
 do
 {
 *((unsigned int *)&v7[2] + v5) = 2 * v5;
 ++v5;
 }
 while ( a1 > (int)v5 );
 return *((unsigned int *)&v7[2] + (a1 >> 1));
}


/* Function: alloca_usage @ 0xE50 */
long long alloca_usage(int a1)
{
 long long v1; // x1
 unsigned long long v2; // x2
 unsigned short v3; // w1
 long long *v4; // x2
 unsigned int *v5; // x2
 int v6; // w1
 long long v8; // [xsp+0h] [xbp-10010h] BYREF
 unsigned int v9[252]; // [xsp+10h] [xbp-10000h] BYREF
 long long v10; // [xsp+400h] [xbp-FC10h]
 unsigned char v11[16]; // [xsp+10000h] [xbp-10h] BYREF

 if ( a1 <= 0 )
 return 0xFFFFFFFFLL;
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFFFFFFFFFFF0000LL;
 v3 = v1 & 0xFFF0;
 v4 = (long long *)&v11[-v2];
 if ( v11 != (unsigned char *)v4 )
 {
 do
 v10 = 0;
 while ( &v8 != v4 );
 }
 v8 = 0;
 if ( v3 >= 0x400uLL )
 v10 = 0;
 v5 = v9;
 v6 = 0;
 do
 {
 *v5++ = v6;
 v6 += 3;
 }
 while ( v6 != 3 * a1 );
 return (unsigned int)v9[a1 >> 1];
}


/* Function: stack_alias @ 0xF20 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0xF30 */
long long test_stack_memory()
{
 int v0; // w0
 int v1; // w0

 puts(asc_1FA8);
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
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1010 */
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


/* Function: heap_calloc @ 0x1074 */
long long heap_calloc(int a1)
{
 unsigned int *v2; // x0
 long long v3; // x1
 unsigned int v4; // w19
 int v5; // w2

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
 {
 v5 = v2[v3++];
 v4 += v5;
 }
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


/* Function: heap_realloc @ 0x10E0 */
long long heap_realloc()
{
 unsigned long long *v0; // x0
 void *v1; // x19
 unsigned int *v2; // x0
 unsigned int v3; // w19
 void *v5; // x0

 v0 = (unsigned long long *)malloc(0x14u);
 if ( v0 )
 {
 *v0 = 0x200000001ULL;
 v0[1] = 0x400000003ULL;
 v1 = v0;
 *((unsigned int *)v0 + 4) = 5;
 v2 = (unsigned int *)realloc(v0, 0x28u);
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
 v5 = v1;
 v3 = -2;
 free(v5);
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_array @ 0x1164 */
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


/* Function: heap_struct @ 0x11D0 */
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


/* Function: heap_nested @ 0x1210 */
long long heap_nested(void **a1)
{
 void *v2; // x0
 void **v3; // x19
 void *v4; // x0
 void *v5; // x1
 long long result; // x0

 v2 = malloc(0x10u);
 *a1 = v2;
 if ( !v2 )
  return 0xFFFFFFFFLL;
 v3 = (void **)v2;
 *(unsigned long long *)v3 = 10ULL;
 v4 = malloc(0x10u);
 v3[1] = v4;
 v5 = v4;
 if ( v4 )
 {
 result = 0;
 *(int *)v5 = 20;
 *((unsigned long long *)((char *)v5 + 8)) = 0ULL;
 }
 else
 {
 free(v3);
 return 4294967294LL;
 }
 return result;
}


/* Function: linked_list_heap @ 0x1284 */
long long linked_list_heap()
{
 unsigned long long *v0; // x0
 int v1; // w20
 unsigned long long *v2; // x19
 unsigned long long *v3; // x21
 unsigned long long *v4; // x0
 unsigned int v5; // w20
 int v6; // w1
 void *v7; // x0
 void *v9; // x0

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
 v6 = *(unsigned int *)v4;
 v4 = (unsigned long long *)v4[1];
 v5 += v6;
 }
 while ( v4 );
 do
 {
 v7 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v7);
 }
 while ( v2 );
 return v5;
 }
 }
 while ( v2 )
 {
 v9 = v2;
 v2 = (unsigned long long *)v2[1];
 free(v9);
 }
 return (unsigned int)-1;
}


/* Function: create_tree_node @ 0x1330 */
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


/* Function: tree_heap_traversal @ 0x1360 */
long long tree_heap_traversal()
{
 void *v0; // x0
 void *v1; // x19
 void *v2; // x20
 void *v3; // x21
 void *v5; // x0

 v0 = malloc(0x18u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 v2 = malloc(0x18u);
 if ( !v2 )
 {
 v5 = malloc(0x18u);
 if ( v5 )
 free(v5);
 goto LABEL_7;
 }
 v3 = malloc(0x18u);
 if ( !v3 )
 {
 free(v2);
LABEL_7:
 free(v1);
 return 4294967294LL;
 }
 free(v2);
 free(v3);
 free(v1);
 return 60;
}


/* Function: memory_leak @ 0x1410 */
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


/* Function: dangling_pointer @ 0x1470 */
long long dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19

 v0 = (unsigned int *)malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return *v1;
}


/* Function: double_free @ 0x14C0 */
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


/* Function: heap_overflow @ 0x1510 */
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


/* Function: test_heap_memory @ 0x1560 */
void test_heap_memory()
{
 unsigned int *v0; // x0
 long long i; // x1
 int v2; // w19
 int *v3; // x0
 int *v4; // x1
 int v5; // w19
 int v6; // t1
 int v7; // w0
 unsigned int *v8; // x0
 unsigned int *v9; // x2
 int j; // w1
 int v11; // w19
 void *v12; // x0
 int v13; // w2
 void **v14; // x19
 unsigned int *v15; // x0
 int v16; // w2
 int v17; // w0
 int v18; // w0
 unsigned long long *v19; // x0
 int v20; // w2
 int v21; // w0
 unsigned int *v22; // x19
 long long v23; // x2
 int stat_loc; // [xsp+24h] [xbp+24h] BYREF

 puts(asc_2118);
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
 v3 = (int *)calloc(5u, 4u);
 if ( v3 )
 {
 v4 = v3;
 v5 = 0;
 do
 {
 v6 = *v4++;
 v5 += v6;
 }
 while ( v3 + 5 != v4 );
 free(v3);
 }
 else
 {
 v5 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
 v7 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v7);
 v8 = malloc(0x28u);
 if ( v8 )
 {
 v9 = v8;
 for ( j = 0; j != 30; j += 3 )
 *v9++ = j;
 v11 = v8[5];
 free(v8);
 }
 else
 {
 v11 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v11);
 v12 = malloc(8u);
 if ( v12 )
 {
 free(v12);
 v13 = 15;
 }
 else
 {
 v13 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v13);
 v14 = (void **)malloc(0x10u);
 if ( v14 )
 {
 v15 = (unsigned int *)malloc(0x10u);
 *(void **)((char *)v14 + 8) = v15;
 if ( v15 )
 {
 v16 = 0;
 *v15 = 20;
 *((unsigned long long *)((char *)v15 + 8)) = 0;
 }
 else
 {
 free(v14);
 v16 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v16);
 free(*(void **)((char *)v14 + 8));
 free(v14);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v17 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v17);
 v18 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v18);
 v0 = (unsigned long long *)malloc(0x14u);
 if ( v0 )
 {
 v20 = 2;
 *((unsigned int *)v19) = 1;
 *((unsigned int *)v19 + 1) = 3;
 *((unsigned int *)v19 + 4) = 4;
 }
 else
 {
 v20 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v20);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v21 = fork();
 if ( !v21 )
 {
 v22 = (unsigned int *)malloc(4u);
 if ( v22 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v22);
 v23 = *v22;
 }
 else
 {
 v23 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aD, v23);
 exit(0);
 }
 if ( v21 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v21, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) + 1) << 24 >> 25 > 0 )
 __printf_chk(1, byte_22A0);
 }
 else
 {
 __printf_chk(1, byte_2278, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x18C0 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x18D4 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x18E4 */
long long global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x1904 */
long long static_local(int a1)
{
 long long result; // x0

 if ( a1 )
 {
 result = 0;
 counter_1 = 0;
 }
 else
 {
 return (unsigned int)++counter_1;
 }
 return result;
}


/* Function: call_static_func @ 0x1940 */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x1950 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x1964 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1970 */
long long read_const_data()
{
 return (unsigned int)(unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1984 */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1990 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x19A0 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x19B0 */
long long set_file_static(long long result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x19C0 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x19D0 */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x19E0 */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1A00 */
long long global_heap_store(unsigned int *a1)
{
 if ( a1 )
 return *a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x1A14 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1A20 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1A30 */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1A40 */
long long test_static_global()
{
 int v0; // w0

 puts(asc_2318);
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
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", (unsigned char)const_string[4] + 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (long long (*)(void))double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x1C30 */
long long memop_memset(unsigned char *a1, size_t n, int c)
{
 bool v3; // zf

 if ( a1 )
 v3 = n == 0;
 else
 v3 = 1;
 if ( v3 )
 return 0xFFFFFFFFLL;
 memset(a1, c, n);
 return *a1;
}


/* Function: memop_memcpy @ 0x1C74 */
long long memop_memcpy(char *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 unsigned long long v6; // x20

 if ( a2 )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || a1 == 0 )
 return 0xFFFFFFFFLL;
 v6 = a3 & 0xFFFFFFFFFFFFFFFCLL;
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[v6 - 4];
}


/* Function: memop_memmove @ 0x1CC0 */
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


/* Function: memop_memcmp @ 0x1D04 */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 long long result; // x0
 int v6; // w0
 bool v7; // cc

 if ( a2 )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || a1 == 0 )
 return 0;
 v6 = memcmp(a1, a2, a3);
 v7 = v6 <= 0;
 if ( v6 )
 LODWORD(result) = -1;
 else
 LODWORD(result) = 0;
 if ( v7 )
 return (unsigned int)result;
 else
 return 1;
}


/* Function: memop_bzero @ 0x1D40 */
long long memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x1D80 */
long long memop_bcopy(void *src, void *dest, size_t a3)
{
 bool v3; // zf

 if ( dest )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || src == 0 )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned char *)memmove(dest, src, a3);
}


/* Function: memop_unaligned_access @ 0x1DC0 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x1DD4 */
long long memop_memory_barrier(int *a1)
{
 int v1; // w1

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 __dmb(0xBu);
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x1DF4 */
long long test_memory_op_functions()
{
 int v0; // w0
 int v1; // w2
 int v3; // [xsp+24h] [xbp+24h]
 long long s1; // [xsp+28h] [xbp+28h] BYREF
 int v5; // [xsp+30h] [xbp+30h]
 long long s2; // [xsp+38h] [xbp+38h] BYREF
 int v7; // [xsp+40h] [xbp+40h]
 long long v8; // [xsp+48h] [xbp+48h]
 short v9; // [xsp+50h] [xbp+50h]
 unsigned long long dest[34]; // [xsp+58h] [xbp+58h] BYREF

 puts(asc_25C8);
 memset(&dest[2], 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy((char *)dest, "HelloWorld");
 memmove((char *)dest + 1, dest, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 s1 = 0x200000001LL;
 v5 = 3;
 s2 = 0x200000001LL;
 v7 = 4;
 v0 = memcmp(&s1, &s2, 0xCu);
 if ( v0 )
 v1 = -1;
 else
 v1 = 0;
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 v8 = 0;
 v9 = 0;
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v3 = 5;
 __dmb(0xBu);
 return __printf_chk(1, "MEMOP-L3-02: %d\n", v3 + 5);
}


/* Function: extern_function @ 0x1F80 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x1F88 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x14098 */

/* FAILED to decompile: memmove @ 0x140A0 */

/* FAILED to decompile: exit @ 0x140A8 */

/* FAILED to decompile: __libc_start_main @ 0x140B0 */

/* FAILED to decompile: perror @ 0x140B8 */

/* FAILED to decompile: __cxa_finalize @ 0x140C0 */

/* FAILED to decompile: fork @ 0x140C8 */

/* FAILED to decompile: malloc @ 0x140D0 */

/* FAILED to decompile: __printf_chk @ 0x140D8 */

/* FAILED to decompile: memset @ 0x140E0 */

/* FAILED to decompile: calloc @ 0x140E8 */

/* FAILED to decompile: realloc @ 0x140F0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140F8 */

/* FAILED to decompile: abort @ 0x14108 */

/* FAILED to decompile: puts @ 0x14110 */

/* FAILED to decompile: memcmp @ 0x14118 */

/* FAILED to decompile: free @ 0x14120 */

/* FAILED to decompile: waitpid @ 0x14128 */

/* FAILED to decompile: __gmon_start__ @ 0x14138 */

/* Total functions decompiled: 65, failed: 19 */
