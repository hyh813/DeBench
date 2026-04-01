// Angr Decompilation of 3_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

/* CRT stub function _init removed by preprocessor */

// Define __int128_t for 128-bit integer support
#ifdef __SIZEOF_INT128__
typedef __int128 __int128_t;
#else
typedef struct { unsigned long long lo; unsigned long long hi; } __int128_t;
#endif

// Struct definitions (all consolidated at top)
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
 char padding_14[4];
 unsigned long long field_14;
 unsigned int field_24;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_4;

typedef struct struct_0_ll {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_ll *field_8;
} struct_0_ll;

typedef struct struct_0_tree {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0_tree;

typedef struct struct_0_memop {
 unsigned int field_0;
 char padding_4[4];
 unsigned int field_1;
} struct_0_memop;

typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

// Helper macro for AddV (vector addition simulation)
#define AddV(a, b) ((unsigned long long)(a) + (unsigned long long)(b))

// Forward declarations for all functions
void sub_401020();
void sub_40102c();

// Extern declarations for global variables
extern unsigned int global_counter;
extern unsigned int global_array[4];
extern unsigned int static_local_counter;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned long long global_func_ptr;
extern unsigned long long global_heap_ptr;
extern unsigned long long g_406008;
extern unsigned long long g_406010;
extern unsigned long long g_10;
extern unsigned long long g_20;
extern unsigned long long g_30;
extern char g_403719[];
extern char g_4033c5[];
extern char g_4033d5[];
extern char g_4033fa[];
extern char g_40343b[];
extern char g_403737[];
extern char g_403755[];
extern char g_403779[];
void sub_401145();
void sub_401146();
void sub_401179();
void sub_4011b9();
void sub_4011f5();
void sub_4011f9();
void sub_401209(unsigned long a0);
int local_vars(unsigned int a0);
void sub_401217(unsigned long a0);
unsigned int local_array(unsigned int a0);
void sub_401224(unsigned long a0);
unsigned int local_struct(unsigned int a0);
void sub_401234(unsigned long a0);
unsigned long long address_of_local(unsigned int *ptr);
void sub_40124c(unsigned long a0);
unsigned int address_of_array(unsigned int *a0);
void sub_401255();
int large_stack_frame();
void sub_40134a(unsigned long a0);
unsigned long long vla_stack(unsigned int a0);
void sub_401485(unsigned long a0);
unsigned long long alloca_usage(unsigned int a0);
void sub_4015c2();
unsigned long long stack_alias();
void sub_4015d6();
int test_stack_memory();
void sub_401771(unsigned long a0);
unsigned int heap_basic(unsigned int a0);
void sub_4018ac(unsigned long a0);
unsigned int heap_calloc(unsigned int a0);
void sub_401a0d();
unsigned int heap_realloc();
void sub_401a8d(unsigned long a0);
unsigned int heap_array(unsigned int a0);
void sub_401bcc(unsigned long a0);
unsigned int heap_struct(unsigned int a0);
void sub_401bd4(unsigned long a0);
unsigned long long heap_nested(struct_1 **addr);
void sub_401c43();
unsigned int linked_list_heap();
void sub_401d46();
void sub_401d66();
void sub_401d86();
void sub_401dba(unsigned long a0);
struct_0_tree * create_tree_node(unsigned int a0);
void sub_401ddd();
unsigned long long tree_heap_traversal();
void sub_401de6(unsigned long a0);
unsigned long long memory_leak(unsigned int a0);
void sub_401fa2();
unsigned long long dangling_pointer();
void sub_401fe9(unsigned long a0);
unsigned long long double_free(unsigned int *a0);
void sub_401ffe();
unsigned long long heap_overflow();
void sub_402003();
long long test_heap_memory();
void sub_402238();
unsigned int global_var_access();
unsigned int global_var_read();
void sub_402259(unsigned long a0);
unsigned long long global_array_access(unsigned int a0);
void sub_402277(unsigned long a0);
long long static_local(unsigned int a0);
void sub_402297(unsigned long a0);
int call_static_func(unsigned int a0);
void sub_4022a7();
int access_extern_global();
void sub_4022bd();
void call_extern_func();
void sub_4022ca();
int read_const_data();
void sub_4022df();
unsigned long long access_bss_var();
void sub_4022e3();
unsigned long long access_bss_buffer();
void sub_4022f3();
unsigned long long global_struct_access();
void sub_402306(unsigned long a0);
void set_file_static(unsigned int a0);
void sub_402317();
int get_file_static();
void sub_402327(unsigned long a0);
void set_global_callback(unsigned long a0);
void sub_402338();
unsigned long long call_global_callback();
void sub_402354(unsigned long a0);
unsigned long long global_heap_store(unsigned int *a0);
void sub_402375();
unsigned long long static_complex_init();
void sub_402386(unsigned long a0);
unsigned int tls_access(unsigned int a0);
void sub_402394();
unsigned long long init_order_test();
void sub_4023a6();
int test_static_global();
void sub_40257a(unsigned long a0);
unsigned int double_value(unsigned int a0);
void sub_402584(unsigned long a0);
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2);
void sub_4025b5(unsigned long a0);
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n);
void sub_4025f7(unsigned long a0);
unsigned long long memop_memmove(struct_0_memop *a0, unsigned long a1);
void sub_40262d(unsigned long a0);
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2);
void sub_40265f(unsigned long a0);
unsigned long long memop_bzero(char *a0, unsigned long n);
void sub_40267e(unsigned long a0);
unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n);
void sub_4026a8(unsigned long a0);
unsigned long long memop_unaligned_access(struct_0_unaligned *a0);
void sub_4026bf(unsigned long a0);
unsigned long long memop_memory_barrier(unsigned int *a0);
void sub_4026d3();
int test_memory_op_functions();
void sub_4027b7();
unsigned int main();
void sub_4027d9(unsigned long a0);
unsigned int extern_function(unsigned int a0);

void _init()
{
 return;
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 // goto g_406010; // Cannot goto variable
}


// Function: sub_40102c at 0x40102c
void sub_40102c()
{
 void* v1 = NULL; // rdi

 free(v1);
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198725
}


// Function: sub_401146 at 0x401146
void sub_401146()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401179 at 0x401179
void sub_401179()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4011f5 at 0x4011f5
void sub_4011f5()
{
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 local_vars(a0);
 return;
}


// Function: local_vars at 0x401210
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_401217 at 0x401217
void sub_401217(unsigned long a0)
{
 local_array(a0);
 return;
}


// Function: local_array at 0x401220
unsigned int local_array(unsigned int a0)
{
 return a0 * 5;
}


// Function: sub_401224 at 0x401224
void sub_401224(unsigned long a0)
{
 local_struct(a0);
 return;
}


// Function: local_struct at 0x401230
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401234 at 0x401234
void sub_401234(unsigned long a0)
{
 unsigned int local_val = 0;
 address_of_local(&local_val);
 return;
}


// Function: address_of_local at 0x401240
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: sub_40124c at 0x40124c
void sub_40124c(unsigned long a0)
{
 unsigned int arr[1] = {0};
 address_of_array(arr);
 return;
}


// Function: address_of_array at 0x401250
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401255 at 0x401255
void sub_401255()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x401260
int large_stack_frame()
{
 unsigned long long v2; // xmm2
 unsigned long long i; // rax
 unsigned long v4; // [bp-0x808]
 unsigned long v5; // [bp-0x7f8]
 unsigned long v6; // [bp-0x7e8]
 unsigned long v7; // [bp-0x7d8]
 unsigned long v8; // [bp-0x7c8]
 unsigned long v9; // [bp-0x7b8]
 unsigned long v10; // [bp-0x7a8]
 unsigned long v11; // [bp-0x798]
 char v0; // [bp-0x408]

 v2 = 0xf0e0d0c0b0a0908ULL;
 i = 0;
 do
 {
 *((unsigned long long *)((char *)&v4 + i)) = v2;
 *((unsigned long long *)((char *)&v5 + i)) = AddV(v2, 0x1000000000000000ULL);
 *((unsigned long long *)((char *)&v6 + i)) = AddV(v2, 0x2000000000000000ULL);
 *((unsigned long long *)((char *)&v7 + i)) = AddV(v2, 0x3000000000000000ULL);
 *((unsigned long long *)((char *)&v8 + i)) = AddV(v2, 0x4000000000000000ULL);
 *((unsigned long long *)((char *)&v9 + i)) = AddV(v2, 0x5000000000000000ULL);
 *((unsigned long long *)((char *)&v10 + i)) = AddV(v2, 0x6000000000000000ULL);
 *((unsigned long long *)((char *)&v11 + i)) = AddV(v2, 0x7000000000000000ULL);
 i += 128;
 v2 ^= 0x8000000000000000ULL;
 } while (i != 0x800);
 return v0;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned long a0)
{
 vla_stack(a0);
 return;
}


// Function: vla_stack at 0x401350
unsigned long long vla_stack(unsigned int a0)
{
 unsigned long j; // r10
 unsigned long long v11; // xmm0
 unsigned int v12; // ecx
 unsigned long index; // rsi
 unsigned long v4; // rcx
 unsigned long v5; // r9
 unsigned long long i; // rdx
 unsigned long long v7; // xmm0
 unsigned long long idx; // rcx
 int v9; // xmm4
 unsigned int *ptr;
 unsigned int vla_buffer[256];

 if (a0 - 1001 < 4294966296)
 return 4294967295;
 j = a0;
 ptr = vla_buffer;
 if (a0 < 8)
 {
 index = 0;
 }
 else
 {
 index = (unsigned int)j & 0xfffffff8;
 v4 = index - 8;
 v5 = (v4 >> 3) + 1;
 if (v4)
 {
 i = v5 & 18446744073709551614;
 v7 = 0x3000000020000000ULL;
 idx = 0;
 do
 {
 v9 = AddV(v7, v7);
 *((unsigned long long*)(ptr + idx * 4)) = v9;
 *((unsigned long long*)(ptr + idx * 4 + 16)) = AddV(v9, 0x3000000000000000ULL);
 *((unsigned long long*)(ptr + idx * 4 + 32)) = AddV(v9, 0x6000000000000000ULL);
 *((unsigned long long*)(ptr + idx * 4 + 48)) = AddV(v9, 0x9000000000000000ULL);
 idx += 16;
 v7 = AddV(v7, 0x6000000000000000ULL);
 i -= 2;
 } while (i != 2);
 v11 = AddV(v7, v7);
 if (((char)v5 & 1))
 goto LABEL_40142b;
 }
 else
 {
 v11 = 0x6000000040000000ULL;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_40142b:
 *((unsigned long long *)(ptr + idx * 4)) = v11;
 *((unsigned long long *)(ptr + idx * 4 + 16)) = AddV(0x3000000000000000ULL, v11);
 }
 }
 if (index == j)
 return *((int *)(ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
 }
 v12 = (unsigned int)index * 2;
 do
 {
 *((unsigned int *)(ptr + index * 4)) = v12;
 index += 1;
 v12 += 2;
 } while (j != index);
 return *((int *)(ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: sub_401485 at 0x401485
void sub_401485(unsigned long a0)
{
 alloca_usage(a0);
 return;
}


// Function: alloca_usage at 0x401490
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long j; // r9
 unsigned int *ptr; // rax
 int v12; // xmm1
 unsigned int v13; // ecx
 unsigned long index; // rdx
 unsigned long v4; // rcx
 unsigned long v5; // r8
 unsigned long long i; // rcx
 unsigned long long v7; // xmm0
 unsigned long long idx; // rsi
 int v9; // xmm4
 int v10; // xmm5
 unsigned int alloca_buffer[256];

 if (a0 <= 0)
 return 4294967295;
 j = a0;
 ptr = alloca_buffer;
 if (a0 < 8)
 {
 index = 0;
 }
 else
 {
 index = (unsigned int)j & 0xfffffff8;
 v4 = index - 8;
 v5 = (v4 >> 3) + 1;
 if (v4)
 {
 i = v5 & 18446744073709551614;
 v7 = 0x3000000020000000ULL;
 idx = 0;
 do
 {
 v9 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)(ptr + idx * 4)) = v9;
 *((unsigned long long*)(ptr + idx * 4 + 16)) = AddV(v9, 0x4800000000000000ULL);
 v10 = AddV(AddV(AddV(v7, 0x3000000000000000ULL), AddV(v7, 0x3000000000000000ULL)), AddV(v7, 0x3000000000000000ULL));
 *((unsigned long long*)(ptr + idx * 4 + 32)) = v10;
 *((unsigned long long*)(ptr + idx * 4 + 48)) = AddV(v10, 0x4800000000000000ULL);
 idx += 16;
 v7 = AddV(v7, 0x6000000000000000ULL);
 i -= 2;
 } while (i != 2);
 if (((char)v5 & 1))
 goto LABEL_401563;
 }
 else
 {
 v7 = 0x3000000020000000ULL;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_401563:
 v12 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)(ptr + idx * 4)) = v12;
 *((unsigned long long*)(ptr + idx * 4 + 16)) = AddV(0x4800000000000000ULL, v12);
 }
 }
 if (index == j)
 return *((int *)(ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
 }
 v13 = (unsigned int)index * 3;
 do
 {
 *((unsigned int *)(ptr + index * 4)) = v13;
 index += 1;
 v13 += 3;
 } while (j != index);
 return *((int *)(ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: sub_4015c2 at 0x4015c2
void sub_4015c2()
{
 stack_alias();
 return;
}

// Function: stack_alias at 0x4015d0
unsigned long long stack_alias()
{
 return 20;
}


// Function: sub_4015d6 at 0x4015d6
void sub_4015d6()
{
 test_stack_memory();
 return;
}

// Global variable declarations (defined at bottom of file)


// Function: test_stack_memory at 0x4015e0
int test_stack_memory()
{
 unsigned long long i; // rbx
 unsigned long long v3; // xmm2
 unsigned long v4; // [bp-0x808]
 unsigned long v5; // [bp-0x7f8]
 unsigned long v6; // [bp-0x7e8]
 unsigned long v7; // [bp-0x7d8]
 unsigned long v8; // [bp-0x7c8]
 unsigned long v9; // [bp-0x7b8]
 unsigned long v10; // [bp-0x7a8]
 unsigned long v11; // [bp-0x798]
 char v0; // [bp-0x408]

 puts(&g_403719);
 i = 0;
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 v3 = 0xf0e0d0c0b0a0908ULL;
 do
 {
 *((unsigned long long *)((char *)&v4 + i)) = v3;
 *((unsigned long long *)((char *)&v5 + i)) = AddV(v3, 0x1000000000000000ULL);
 *((unsigned long long *)((char *)&v6 + i)) = AddV(v3, 0x2000000000000000ULL);
 *((unsigned long long *)((char *)&v7 + i)) = AddV(v3, 0x3000000000000000ULL);
 *((unsigned long long *)((char *)&v8 + i)) = AddV(v3, 0x4000000000000000ULL);
 *((unsigned long long *)((char *)&v9 + i)) = AddV(v3, 0x5000000000000000ULL);
 *((unsigned long long *)((char *)&v10 + i)) = AddV(v3, 0x6000000000000000ULL);
 *((unsigned long long *)((char *)&v11 + i)) = AddV(v3, 0x7000000000000000ULL);
 i += 128;
 v3 ^= 0x8000000000000000ULL;
 } while (i != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", v0);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: sub_401771 at 0x401771
void sub_401771(unsigned long a0)
{
 heap_basic(a0);
 return;
}


// Function: heap_basic at 0x401780
unsigned int heap_basic(unsigned int a0)
{
 void* ptr; // rax
 unsigned long j; // rcx
 unsigned long long v11; // xmm0
 unsigned int v12; // esi
 unsigned long index; // rdx
 unsigned long v4; // rsi
 unsigned long v5; // r8
 unsigned long long i; // rsi
 unsigned long long v7; // xmm0
 unsigned long long idx; // rdi
 int v9; // xmm5

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 return 4294967295;
 }
 else if (a0 > 0)
 {
 j = a0;
 if (a0 < 8)
 {
 index = 0;
 }
 else
 {
 index = (unsigned int)j & 0xfffffff8;
 v4 = index - 8;
 v5 = (v4 >> 3) + 1;
 if (v4)
 {
 i = v5 & 18446744073709551614;
 v7 = 0x3000000020000000ULL;
 idx = 0;
 do
 {
 v9 = AddV(v7, v7);
 *((unsigned long long*)((char *)ptr + 4 * idx)) = v9;
 *((unsigned long long*)(16 + (char *)ptr + 4 * idx)) = AddV(v9, 0x3000000000000000ULL);
 *((unsigned long long*)(32 + (char *)ptr + 4 * idx)) = AddV(v9, 0x6000000000000000ULL);
 *((unsigned long long*)(48 + (char *)ptr + 4 * idx)) = AddV(v9, 0x9000000000000000ULL);
 idx += 16;
 v7 = AddV(v7, 0x6000000000000000ULL);
 i -= 2;
 } while (i != 2);
 v11 = AddV(v7, v7);
 if (((char)v5 & 1))
 goto LABEL_40184b;
 }
 else
 {
 v11 = 0x6000000040000000ULL;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_40184b:
 *((unsigned long long *)((char *)ptr + 4 * idx)) = v11;
 *((unsigned long long *)(16 + (char *)ptr + 4 * idx)) = AddV(0x3000000000000000ULL, v11);
 }
 }
 if (index == j)
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
 }
 }
 v12 = (unsigned int)index * 2;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index)) = v12;
 index += 1;
 v12 += 2;
 } while (j != index);
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
 }
 else
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
 }
}


// Function: sub_4018ac at 0x4018ac
void sub_4018ac(unsigned long a0)
{
 heap_calloc(a0);
 return;
}


// Function: heap_calloc at 0x4018b0
unsigned int heap_calloc(unsigned int a0)
{
 void* ptr; // rax
 unsigned long long v12; // xmm0
 unsigned long long cur; // rbp
 unsigned long long v14; // xmm1
 unsigned long long i; // rdi
 unsigned long long v17; // rdi
 unsigned long v19; // xmm1lq
 unsigned int v4; // ebx
 unsigned long k; // rcx
 unsigned long v6; // rsi
 unsigned long long idx; // rdx
 unsigned long long v8; // rdx
 unsigned long long v9; // rbp
 unsigned long v10; // rdi
 unsigned long long j; // rbx

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v4 = 0;
 if (a0 > 0 && a0 != 1)
 {
 k = a0;
 v6 = k - 1;
 if (v6 < 8)
 {
 v4 = 0;
 idx = 1;
 }
 else
 {
 v8 = v6 & 18446744073709551608;
 v9 = v8 - 8;
 v10 = (v9 >> 3) + 1;
 j = (unsigned int)v10 & 3;
 if (v9 < 24)
 {
 v12 = 0;
 cur = 0;
 v14 = 0;
 }
 else
 {
 i = v10 & 18446744073709551612;
 v12 = 0;
 cur = 0;
 v14 = 0;
 do
 {
 v12 = AddV(*((unsigned long long *)(100 + (char *)ptr + 4 * cur)), AddV(AddV(*((unsigned long long *)(68 + (char *)ptr + 4 * cur)), *((unsigned long long *)(36 + (char *)ptr + 4 * cur))), AddV(*((unsigned long long *)(4 + (char *)ptr + 4 * cur)), v12)));
 v14 = AddV(*((unsigned long long *)(116 + (char *)ptr + 4 * cur)), AddV(AddV(*((unsigned long long *)(84 + (char *)ptr + 4 * cur)), *((unsigned long long *)(52 + (char *)ptr + 4 * cur))), AddV(*((unsigned long long *)(20 + (char *)ptr + 4 * cur)), v14)));
 cur += 32;
 i -= 4;
 } while (i != 4);
 }
 if (j)
 {
 do
 {
 v17 = cur * 4 | 4;
 v12 = AddV(v12, *((unsigned long long *)((char *)ptr + v17)));
 v14 = AddV(v14, *((unsigned long long *)(16 + (char *)ptr + v17)));
 cur += 8;
 j -= 1;
 } while (j != 1);
 }
 v19 = AddV(v12, v14);
 v4 = v19;
 if (v6 == v8)
 {
 free(ptr);
 return v19;
 }
 idx = v8 | 1;
 }
 do
 {
 v4 += *((int *)((char *)ptr + 4 * idx));
 idx += 1;
 } while (k != idx);
 }
 free(ptr);
 return v4;
}


// Function: sub_401a0d at 0x401a0d
void sub_401a0d()
{
 heap_realloc();
 return;
}


// Function: heap_realloc at 0x401a10
unsigned int heap_realloc()
{
 struct_0 *ptr; // rax
 struct_0 *addr; // rbx
 struct_0 *p; // rax
 unsigned int v6; // ebp

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 addr = ptr;
 ptr->field_0 = 0x1234567890ABCDEFULL;
 ptr->field_8 = 5;
 p = realloc(ptr, 40);
 if (p)
 {
 p->field_10 = 0xFEDCBA0987654321ULL;
 p->field_24 = 90;
 v6 = (p->field_8 == 3 ? 50 : 4294967293);
 addr = p;
 }
 else
 {
 v6 = 4294967294;
 }
 free(addr);
 return v6;
}


// Function: sub_401a8d at 0x401a8d
void sub_401a8d(unsigned long a0)
{
 heap_array(a0);
 return;
}


// Function: heap_array at 0x401a90
unsigned int heap_array(unsigned int a0)
{
 void* ptr; // rax
 unsigned long j; // rcx
 int v12; // xmm1
 unsigned int v13; // esi
 unsigned long index; // rdx
 unsigned long v4; // rsi
 unsigned long v5; // r8
 unsigned long long i; // rsi
 unsigned long long v7; // xmm0
 unsigned long long idx; // rdi
 int v9; // xmm4
 int v10; // xmm5

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 return 4294967295;
 }
 else if (a0 > 0)
 {
 j = a0;
 if (a0 < 8)
 {
 index = 0;
 }
 else
 {
 index = (unsigned int)j & 0xfffffff8;
 v4 = index - 8;
 v5 = (v4 >> 3) + 1;
 if (v4)
 {
 i = v5 & 18446744073709551614;
 v7 = 0x3000000020000000ULL;
 idx = 0;
 do
 {
 v9 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)((char *)ptr + 4 * idx)) = v9;
 *((unsigned long long*)(16 + (char *)ptr + 4 * idx)) = AddV(v9, 0x4800000000000000ULL);
 v10 = AddV(AddV(AddV(v7, 0x3000000000000000ULL), AddV(v7, 0x3000000000000000ULL)), AddV(v7, 0x3000000000000000ULL));
 *((unsigned long long*)(32 + (char *)ptr + 4 * idx)) = v10;
 *((unsigned long long*)(48 + (char *)ptr + 4 * idx)) = AddV(v10, 0x4800000000000000ULL);
 idx += 16;
 v7 = AddV(v7, 0x6000000000000000ULL);
 i -= 2;
 } while (i != 2);
 if (((char)v5 & 1))
 goto LABEL_401b63;
 }
 else
 {
 v7 = 0x3000000020000000ULL;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_401b63:
 v12 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)((char *)ptr + 4 * idx)) = v12;
 *((unsigned long long*)(16 + (char *)ptr + 4 * idx)) = AddV(0x4800000000000000ULL, v12);
 }
 }
 if (index == j)
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
 }
 }
 v13 = (unsigned int)index * 3;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index)) = v13;
 index += 1;
 v13 += 3;
 } while (j != index);
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
 }
 else
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
 }
}


// Function: sub_401bcc at 0x401bcc
void sub_401bcc(unsigned long a0)
{
 heap_struct(a0);
 return;
}


// Function: heap_struct at 0x401bd0
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401bd4 at 0x401bd4
void sub_401bd4(unsigned long a0)
{
 struct_1 *addr = NULL;
 heap_nested((struct_1 **)&addr);
 return;
}


// Function: heap_nested at 0x401be0
unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr3; // rax
 struct_3 *ptr; // rbx
 struct_4 *p; // rax

 ptr3 = (struct_3 *)malloc(16);
 *(addr) = (struct_1 *)ptr3;
 if (!ptr3)
 return 4294967295;
 ptr = ptr3;
 ptr3->field_0 = 10;
 p = (struct_4 *)malloc(16);
 ptr->field_8 = (struct_2 *)p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p->field_0 = 20;
 p->field_8 = 0;
 return 0;
}


// Function: sub_401c43 at 0x401c43
void sub_401c43()
{
 linked_list_heap();
 return;
}


// Function: linked_list_heap at 0x401c50
unsigned int linked_list_heap()
{
 struct_0_ll *ptr10; // rax
 struct_0_ll *ptr9; // rbx
 struct_0_ll *ptr6; // rbx
 struct_0_ll *ptr5; // rbx
 struct_0_ll *ptr4; // rbx
 struct_0_ll *p; // rax
 struct_0_ll *addr; // rax
 struct_0_ll *ptr; // rax
 struct_0_ll *ptr8; // rax
 unsigned int v7; // r12d
 struct_0_ll *ptr3; // rax
 struct_0_ll *ptr7; // rbx

 ptr10 = malloc(16);
 if (!ptr10)
 return 4294967295;
 ptr9 = ptr10;
 ptr10->field_0 = 0;
 p = malloc(16);
 if (!p)
 {
 free(ptr9);
 return 4294967295;
 }
 p->field_0 = 10;
 p->field_8 = NULL;
 ptr9->field_8 = p;
 addr = malloc(16);
 if (addr)
 {
 addr->field_0 = 20;
 addr->field_8 = NULL;
 p->field_8 = addr;
 ptr = malloc(16);
 if (ptr)
 {
 ptr->field_0 = 30;
 ptr->field_8 = NULL;
 addr->field_8 = ptr;
 ptr8 = malloc(16);
 if (ptr8)
 {
 ptr8->field_0 = 40;
 ptr8->field_8 = NULL;
 ptr->field_8 = ptr8;
 v7 = 0;
 ptr3 = ptr9;
 do
 {
 v7 += ptr3->field_0;
 ptr3 = ptr3->field_8;
 } while (ptr3->field_8);
 do
 {
 ptr7 = ptr9;
 free(ptr7);
 ptr9 = ptr7->field_8;
 } while (ptr7->field_8);
 return v7;
 }
 else
 {
 do
 {
 ptr6 = ptr9;
 free(ptr6);
 ptr9 = ptr6->field_8;
 } while (ptr6->field_8);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr5 = ptr9;
 free(ptr5);
 ptr9 = ptr5->field_8;
 } while (ptr5->field_8);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr4 = ptr9;
 free(ptr4);
 ptr9 = ptr4->field_8;
 } while (ptr4->field_8);
 return 4294967295;
 }
}


// Function: sub_401d46 at 0x401d46
void sub_401d46()
{
}


// Function: sub_401d66 at 0x401d66
void sub_401d66()
{
}


// Function: sub_401d86 at 0x401d86
void sub_401d86()
{
}


// Function: sub_401dba at 0x401dba
void sub_401dba(unsigned long a0)
{
 create_tree_node(a0);
 return;
}


// Function: create_tree_node at 0x401dc0
struct_0_tree * create_tree_node(unsigned int a0)
{
 struct_0_tree *ptr; // rax

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 return ptr;
}


// Function: sub_401ddd at 0x401ddd
void sub_401ddd()
{
 tree_heap_traversal();
 return;
}




// Function: tree_heap_traversal at 0x401de0
unsigned long long tree_heap_traversal()
{
 return 60;
}


// Function: sub_401de6 at 0x401de6
void sub_401de6(unsigned long a0)
{
 memory_leak(a0);
 return;
}


// Function: memory_leak at 0x401df0
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long long ptr; // rax
 unsigned long long v12; // rdi
 unsigned long long j; // rbx
 unsigned long long v14; // xmm0
 unsigned long k; // rcx
 unsigned long index; // rdx
 unsigned long v6; // rbx
 unsigned long v7; // rdi
 unsigned long long v8; // rsi
 unsigned long long idx; // rbx
 unsigned long long i; // rdi

 ptr = (unsigned long long)malloc(a0 * 4);
 if (!ptr)
 {
 return 4294967295;
 }
 else if (a0 > 0)
 {
 k = a0;
 if (a0 < 8)
 {
 index = 0;
 }
 else
 {
 index = (unsigned int)k & 0xfffffff8;
 v6 = index - 8;
 v7 = (v6 >> 3) + 1;
 v8 = (unsigned int)v7 & 3;
 if (v6 < 24)
 {
 v14 = 0x3000000020000000ULL;
 idx = 0;
 }
 else
 {
 i = v7 & 18446744073709551612;
 v14 = 0x3000000020000000ULL;
 idx = 0;
 do
 {
 *((unsigned long long *)(ptr + idx * 4)) = v14;
 *((unsigned long long *)(ptr + idx * 4 + 16)) = AddV(v14, 0x1000000000000000ULL);
 *((unsigned long long *)(ptr + idx * 4 + 32)) = AddV(v14, 0x2000000000000000ULL);
 *((unsigned long long *)(ptr + idx * 4 + 48)) = AddV(v14, 0x3000000000000000ULL);
 *((unsigned long long *)(ptr + idx * 4 + 64)) = AddV(v14, 0x4000000000000000ULL);
 *((unsigned long long *)(ptr + idx * 4 + 80)) = AddV(v14, 0x5000000000000000ULL);
 *((unsigned long long *)(ptr + idx * 4 + 96)) = AddV(v14, 0x6000000000000000ULL);
 *((unsigned long long *)(ptr + idx * 4 + 112)) = AddV(v14, 0x7000000000000000ULL);
 idx += 32;
 v14 = AddV(v14, 0x8000000000000000ULL);
 i -= 4;
 } while (i != 4);
 }
 if (v8)
 {
 v12 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 *((unsigned long long *)(v12 + j - 16)) = v14;
 *((unsigned long long *)(v12 + j)) = AddV(v14, 0x1000000000000000ULL);
 v14 = AddV(v14, 0x2000000000000000ULL);
 j += 32;
 } while (v8 * 32 != j);
 }
 if (index == k)
 return *((int *)(ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
 }
 do
 {
 *((unsigned int *)(ptr + index * 4)) = index;
 index += 1;
 } while (k != index);
 return *((int *)(ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
 }
 else
 {
 return *((int *)(ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
 }
}


// Function: sub_401fa2 at 0x401fa2
void sub_401fa2()
{
 dangling_pointer();
 return;
}




// Function: dangling_pointer at 0x401fb0
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // rax

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 printf("value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: sub_401fe9 at 0x401fe9
void sub_401fe9(unsigned long a0)
{
 unsigned int val = 0;
 double_free(&val);
 return;
}


// Function: double_free at 0x401ff0
unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: sub_401ffe at 0x401ffe
void sub_401ffe()
{
 heap_overflow();
 return;
}




// Function: heap_overflow at 0x402000
unsigned long long heap_overflow()
{
 return 0;
}


// Function: sub_402003 at 0x402003
void sub_402003()
{
 test_heap_memory();
 return;
}




// Function: test_heap_memory at 0x402010
long long test_heap_memory()
{
 struct_0 *addr; // rax
 unsigned int result; // eax
 int v0; // [bp-0x18]
 unsigned long v13; // rax
 char *v14; // rdi
 struct_0 *ptr4; // rbx
 struct_0 *ptr3; // rax
 unsigned int v6; // ebp
 struct_2 *ptr5; // rax
 struct_2 *ptr; // rbx
 struct_3 *p; // rax
 unsigned long long v10; // rsi

 puts(&g_403737);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 addr = (struct_0 *)malloc(20);
 if (addr)
 {
 ptr4 = addr;
 addr->field_0 = 0x1234567890ABCDEFULL;
 addr->field_8 = 5;
 ptr3 = (struct_0 *)realloc(addr, 40);
 if (ptr3)
 {
 ptr3->field_10 = 0xFEDCBA0987654321ULL;
 ptr3->field_24 = 90;
 v6 = (ptr3->field_8 == 3 ? 50 : 4294967293);
 ptr4 = ptr3;
 }
 else
 {
 v6 = 4294967294;
 }
 free(ptr4);
 }
 else
 {
 v6 = 4294967295;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v6);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 ptr5 = (struct_2 *)malloc(16);
 if (ptr5)
 {
 ptr = ptr5;
 ptr5->field_0 = 10;
 p = (struct_3 *)malloc(16);
 ptr->field_8 = p;
 if (p)
 {
 p->field_0 = 20;
 p->field_8 = 0;
 v10 = 0;
 }
 else
 {
 free(ptr);
 v10 = 4294967294;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v10);
 free(ptr->field_8);
 free(ptr);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 printf("HEAP-L3-03 (memory_leak): %d\n", 2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 result = fork();
 if (!result)
 {
 printf(g_4033c5, dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 else if (result > 0)
 {
 waitpid(result, &v0, 0);
 v13 = *((int *)((char *)&v0 + 4)) & 127;
 if (!((char)*((int *)((char *)&v0 + 4)) & 127))
 {
 v14 = &g_4033d5;
 }
 else if ((unsigned int)v13 * 0x1000000 + 0x1000000 >= 0x2000000)
 {
 v14 = &g_4033fa;
 }
 else
 {
 return v13;
 }
 return printf(v14);
 }
 else
 {
 perror(&g_40343b);
 return 0;
 }
}


// Function: sub_402238 at 0x402238
void sub_402238()
{
 global_var_access();
 return;
}




// Function: global_var_access at 0x402240
unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x402250
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_402259 at 0x402259
void sub_402259(unsigned long a0)
{
 global_array_access(a0);
 return;
}


// Function: global_array_access at 0x402260
unsigned long long global_array_access(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 9)
 v1 = global_array[a0];
 return v1;
}


// Function: sub_402277 at 0x402277
void sub_402277(unsigned long a0)
{
 static_local(a0);
 return;
}


// Function: static_local at 0x402280
long long static_local(unsigned int a0)
{
 static_local_counter = (!a0 ? static_local_counter + 1 : 0);
 return static_local_counter;
}


// Function: sub_402297 at 0x402297
void sub_402297(unsigned long a0)
{
 call_static_func(a0);
 return;
}


// Function: call_static_func at 0x4022a0
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_4022a7 at 0x4022a7
void sub_4022a7()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x4022b0
int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_4022bd at 0x4022bd
void sub_4022bd()
{
 call_extern_func();
 return;
}


// Function: call_extern_func at 0x4022c0
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: sub_4022ca at 0x4022ca
void sub_4022ca()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x4022d0
int read_const_data()
{
 return 42;
}


// Function: sub_4022df at 0x4022df
void sub_4022df()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x4022e0
unsigned long long access_bss_var()
{
 return 0;
}


// Function: sub_4022e3 at 0x4022e3
void sub_4022e3()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x4022f0
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: sub_4022f3 at 0x4022f3
void sub_4022f3()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x402300
unsigned long long global_struct_access()
{
 return 30;
}


// Function: sub_402306 at 0x402306
void sub_402306(unsigned long a0)
{
 set_file_static(a0);
 return;
}


// Function: set_file_static at 0x402310
void set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return;
}


// Function: sub_402317 at 0x402317
void sub_402317()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x402320
int get_file_static()
{
 return file_scope_static;
}


// Function: sub_402327 at 0x402327
void sub_402327(unsigned long a0)
{
 set_global_callback(a0);
 return;
}


// Function: set_global_callback at 0x402330
void set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return;
}


// Function: sub_402338 at 0x402338
void sub_402338()
{
 call_global_callback();
 return;
}


// Function: call_global_callback at 0x402340
unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((unsigned long long (*)(void))global_func_ptr)();
}


// Function: sub_402354 at 0x402354
void sub_402354(unsigned long a0)
{
 unsigned int val = 0;
 global_heap_store(&val);
 return;
}


// Function: global_heap_store at 0x402360
unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = (unsigned long long)a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: sub_402375 at 0x402375
void sub_402375()
{
 static_complex_init();
 return;
}


// Function: static_complex_init at 0x402380
unsigned long long static_complex_init()
{
 return 15;
}


// Function: sub_402386 at 0x402386
void sub_402386(unsigned long a0)
{
 tls_access(a0);
 return;
}


// Function: tls_access at 0x402390
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402394 at 0x402394
void sub_402394()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x4023a0
unsigned long long init_order_test()
{
 return 20;
}


// Function: sub_4023a6 at 0x4023a6
void sub_4023a6()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x4023b0
int test_static_global()
{
 unsigned long v2; // rsi
 unsigned long v3; // rsi
 unsigned int v0; // [bp-0xc]

 puts(&g_403755);
 v2 = global_counter + 1;
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n", v2);
 printf("STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 v3 = static_local_counter + 1;
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n", v3);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 printf("STM-L2-02 (call_extern_func): %d\n", extern_function(5) & 4294967295);
 printf("STM-L2-03 (read_const_data): %d\n", 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (unsigned long long)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 global_heap_ptr = (unsigned long long)&v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: sub_40257a at 0x40257a
void sub_40257a(unsigned long a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x402580
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402584 at 0x402584
void sub_402584(unsigned long a0)
{
 char buf[1] = {0};
 memop_memset(buf, 1, 0);
 return;
}


// Function: memop_memset at 0x402590
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (n)
 {
 memset(a0, a2, n);
 return (unsigned long long)*(unsigned char*)a0;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4025b5 at 0x4025b5
void sub_4025b5(unsigned long a0)
{
 char src[1] = {0};
 char dst[1] = {0};
 memop_memcpy(dst, src, 1);
 return;
}


// Function: memop_memcpy at 0x4025c0
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (!a1)
 {
 return 4294967295;
 }
 else if (n)
 {
 memcpy(a0, a1, n);
 return *((unsigned char *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4025f7 at 0x4025f7
void sub_4025f7(unsigned long a0)
{
 struct_0_memop buf = {0};
 memop_memmove(&buf, 2);
 return;
}


// Function: memop_memmove at 0x402600
unsigned long long memop_memmove(struct_0_memop *a0, unsigned long a1)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove((void*)&a0->field_1, (void*)a0, a1 - 1);
 return (unsigned long long)a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40262d at 0x40262d
void sub_40262d(unsigned long a0)
{
 char src1[1] = {0};
 char src2[1] = {0};
 memop_memcmp(src1, src2, 1);
 return;
}


// Function: memop_memcmp at 0x402630
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v2; // eax
 unsigned long long result; // [bp-0x8]

 if (!a0)
 {
 return 0;
 }
 else if (!a1)
 {
 return 0;
 }
 else if (a2)
 {
 result = 0;
 v2 = memcmp(a0, a1, a2);
 return (v2 <= 0 ? -(v2) : 1);
 }
 else
 {
 return 0;
 }
}


// Function: sub_40265f at 0x40265f
void sub_40265f(unsigned long a0)
{
 char buf[1] = {0};
 memop_bzero(buf, 1);
 return;
}


// Function: memop_bzero at 0x402660
unsigned long long memop_bzero(char *a0, unsigned long n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return (unsigned long long)*(unsigned char*)a0;
}


// Function: sub_40267e at 0x40267e
void sub_40267e(unsigned long a0)
{
 char src[1] = {0};
 char dst[1] = {0};
 memop_bcopy(src, dst, 1);
 return;
}


// Function: memop_bcopy at 0x402680
unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (!a1)
 {
 return 4294967295;
 }
 else if (n)
 {
 memmove((void*)a1, a0, n);
 return (unsigned long long)*(unsigned char*)a1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4026a8 at 0x4026a8
void sub_4026a8(unsigned long a0)
{
 struct_0_memop buf = {0};
 memop_unaligned_access(&buf);
 return;
}


// Function: memop_unaligned_access at 0x4026b0
unsigned long long memop_unaligned_access(struct_0_unaligned *a0)
{
 if (!a0)
 return 4294967295;
 return a0->field_1;
}


// Function: sub_4026bf at 0x4026bf
void sub_4026bf(unsigned long a0)
{
 unsigned int val = 0;
 memop_memory_barrier(&val);
 return;
}


// Function: memop_memory_barrier at 0x4026c0
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 // MBusEvent-Imbe_Fence()
 return *(a0) * 2;
}


// Function: sub_4026d3 at 0x4026d3
void sub_4026d3()
{
 test_memory_op_functions();
 return;
}


// Function: test_memory_op_functions at 0x4026e0
int test_memory_op_functions()
{
 unsigned int v0; // [bp-0x14]
 char v1[11]; // [bp-0x10]
 char v2[15]; // [bp-0xf]

 puts(&g_403779);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 strncpy(v1, "HelloWorld", 10);
 strncpy(v2, "HelloWorl", 9);
 printf("MEMOP-L2-03: %c\n", 72);
 printf("MEMOP-L2-04: %d\n", 4294967295);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 // MBusEvent-Imbe_Fence()
 return printf("MEMOP-L3-02: %d\n", v0 * 2);
}


// Function: sub_4027b7 at 0x4027b7
void sub_4027b7()
{
 main();
 return;
}

// Define global variables
unsigned int global_counter = 0;
unsigned int global_array[4] = {0};
unsigned int static_local_counter = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
unsigned long long global_func_ptr = 0;
unsigned long long global_heap_ptr = 0;
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;
unsigned long long g_10 = 0;
unsigned long long g_20 = 0;
unsigned long long g_30 = 0;
char g_403719[] = "Stack Memory Tests:\n";
char g_4033c5[] = "%d\n";
char g_4033d5[] = "OK\n";
char g_4033fa[] = "CRASH\n";
char g_40343b[] = "fork failed";
char g_403737[] = "Heap Memory Tests:\n";
char g_403755[] = "Static/Global Memory Tests:\n";
char g_403779[] = "Memory Operation Tests:\n";


// Function: main at 0x4027c0
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_4027d9 at 0x4027d9
void sub_4027d9(unsigned long a0)
{
 extern_function(a0);
 return;
}


// Function: extern_function at 0x4027e0
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


