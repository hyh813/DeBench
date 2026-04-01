// Angr Decompilation of 3_clang_O3_g
// Platform: AMD64

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned long long field_0;
 struct struct_0 *field_8;
 unsigned int field_10;
 unsigned long long field_14;
 unsigned int field_24;
} struct_0;

/* Forward declarations for other struct types */
typedef struct struct_1 {
 unsigned long long field_0;
 struct struct_2 *field_8;
} struct_1;

/* Missing global variable definitions */
extern unsigned int extern_global_var;
unsigned int extern_global_var = 0;

extern unsigned int global_counter;
unsigned int global_counter = 0;

extern unsigned int global_array[10];
unsigned int global_array[10] = {0};

static unsigned int static_local_counter = 0;

static unsigned int file_scope_static = 0;

extern unsigned long long global_func_ptr;
unsigned long long global_func_ptr = 0;

extern unsigned int *global_heap_ptr;
unsigned int *global_heap_ptr = NULL;

typedef struct struct_2 {
 unsigned long long field_0;
 struct struct_2 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
 struct struct_4 *field_8;
} struct_3;

typedef struct struct_4 {
 unsigned long long field_0;
 unsigned long long field_8;
} struct_4;

extern struct struct_0 *g_405fe8;
struct struct_0 *g_405fe8 = NULL;

/* String constants and data */
extern char g_403719[];
extern char g_403737[];
extern char g_4033c5[];
extern char g_4033d5[];
extern char g_4033fa[];
extern char g_40343b[];
extern char g_403755[];
extern char g_403779[];

/* Define the string constants */
char g_403719[] = "Testing Stack Memory Operations";
char g_403737[] = "Testing Heap Memory Operations";
char g_4033c5[] = "%d\n";
char g_4033d5[] = "Child process completed successfully\n";
char g_4033fa[] = "Child process exited with error\n";
char g_40343b[] = "fork error";
char g_403755[] = "Testing Static and Global Variables";
char g_403779[] = "Testing Memory Operation Functions";

/* const_string structure */
extern struct struct_0 *const_string;
static struct struct_0 const_string_instance = {0};
struct struct_0 *const_string = &const_string_instance;

/* Define int128_t as __int128 for GCC/Clang compatibility */
typedef __int128 int128_t;

/* CONCAT macro for concatenating values */
#define CONCAT(a, b, c, d) (((unsigned long long)(a) << 96) | ((unsigned long long)(b) << 64) | ((unsigned long long)(c) << 32) | (unsigned long long)(d))

/* Forward declarations for functions called before definition */
int local_vars(unsigned int a0);
unsigned int local_array(unsigned int a0);
unsigned int local_struct(unsigned int a0);
unsigned long long address_of_local(unsigned int *ptr);
unsigned int address_of_array(unsigned int *a0);
int large_stack_frame();
unsigned long long vla_stack(unsigned int a0);
unsigned long long alloca_usage(unsigned int a0);
unsigned long long stack_alias();
int test_stack_memory();
unsigned long long heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);

unsigned long long heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned long long heap_nested(struct_1 **addr);

unsigned int linked_list_heap();
struct_0 * create_tree_node(unsigned int a0);
unsigned long long tree_heap_traversal();
unsigned long long memory_leak(unsigned int a0);
unsigned int heap_realloc();
unsigned long long dangling_pointer();
unsigned long long double_free(unsigned int *a0);
unsigned long long heap_overflow();
long long test_heap_memory();
unsigned int global_var_access();
unsigned int global_var_read();
unsigned long long global_array_access(unsigned int a0);
long long static_local(unsigned int a0);
int call_static_func(unsigned int a0);
int access_extern_global();
void call_extern_func();
unsigned int extern_function(unsigned int a0);
int read_const_data();
unsigned long long access_bss_var();
unsigned long long access_bss_buffer();
unsigned long long global_struct_access();
void set_file_static(unsigned int a0);
int get_file_static();
void set_global_callback(unsigned long long a0);
unsigned long long call_global_callback();
unsigned long long global_heap_store(unsigned int *a0);
unsigned long long static_complex_init();
unsigned int tls_access(unsigned int a0);
unsigned long long init_order_test();
int test_static_global();
unsigned int double_value(unsigned int a0);
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2);
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n);
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1);
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2);
unsigned long long memop_bzero(char *a0, unsigned long n);
unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n);
unsigned long long memop_unaligned_access(struct_0 *a0);
unsigned long long memop_memory_barrier(unsigned int *a0);
int test_memory_op_functions();
unsigned int main();
void sub_401bd4(unsigned long a0);


/* AddV helper function for decompiler arithmetic */
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 if (g_405fe8)
 v1 = (unsigned long long *)((unsigned long long (*)(void))g_405fe8)();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;
extern unsigned int g_10;
extern unsigned int g_20;
extern unsigned int g_30;
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;
unsigned int g_10 = 0;
unsigned int g_20 = 0;
unsigned int g_30 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 ((void (*)())g_406010)();
}


// Function: sub_40102c at 0x40102c
void sub_40102c()
{
 /* stub function - original freed uninitialized register value */
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
 __builtin_trap();
}


// Function: sub_401146 at 0x401146
/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones() { return; }

void sub_401146()
{
 deregister_tm_clones();
 return;
}



// Function: sub_401179 at 0x401179
/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones() { return; }

void sub_401179()
{
 register_tm_clones();
 return;
}



// Function: sub_4011b9 at 0x4011b9
/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux() { return; }

void sub_4011b9()
{
 __do_global_dtors_aux();
 return;
}



// Function: sub_4011f5 at 0x4011f5
void sub_4011f5()
{
}


// Function: sub_4011f9 at 0x4011f9
/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy() { return; }

void sub_4011f9()
{
 frame_dummy();
 return;
}



// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 local_vars((unsigned int)a0);
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
 local_array((unsigned int)a0);
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
 local_struct((unsigned int)a0);
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
 unsigned int temp = 0;
 address_of_local(&temp);
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
 unsigned int temp = 0;
 address_of_array(&temp);
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

 v2 = 0xf0e0d0c0b0a09080ULL;
 i = 0;
 do
 {
 *((unsigned long long *)((char *)&v4 + i)) = v2;
 *((unsigned long long *)((char *)&v5 + i)) = AddV(v2, 0x4b93718af873e1e0ULL);
 *((unsigned long long *)((char *)&v6 + i)) = AddV(v2, 0x9726e315f0e7c3c0ULL);
 *((unsigned long long *)((char *)&v7 + i)) = AddV(v2, 0xe2ba54a7f95ba5a0ULL);
 *((unsigned long long *)((char *)&v8 + i)) = AddV(v2, 0x12e4dc63f1cf8780ULL);
 *((unsigned long long *)((char *)&v9 + i)) = AddV(v2, 0x1750f420ea436960ULL);
 *((unsigned long long *)((char *)&v10 + i)) = AddV(v2, 0x1bbd0b1de2d14b40ULL);
 *((unsigned long long *)((char *)&v11 + i)) = AddV(v2, 0x2029211adb2f2d20ULL);
 i += 128;
 v2 ^= 0x2bc81dcd93440000ULL;
 } while (i != 0x800);
 return v0;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned long a0)
{
 vla_stack((unsigned int)a0);
 return;
}


// Function: vla_stack at 0x401350
unsigned long long vla_stack(unsigned int a0)
{
 unsigned long j; // r10
 unsigned long long ptr; // rax
 unsigned long long v11; // xmm0
 unsigned int v12; // ecx
 unsigned long index; // rsi
 unsigned long v4; // rcx
 unsigned long v5; // r9
 unsigned long long i; // rdx
 unsigned long long v7; // xmm0
 unsigned long long idx; // rcx
 int v9; // xmm4

 if (a0 - 1001 < 4294966296)
 return 4294967295;
 j = a0;
 {
 unsigned char vvar_buf[1024];
 ptr = (unsigned long long)((char *)&vvar_buf - (j * 4 + 15 & 0xfffffffffffffff0));
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
 i = v5 & 18446744073709551614ULL;
 v7 = 0x300000002ULL;
 idx = 0;
 do
 {
 v9 = AddV(v7, v7);
 *((unsigned long long*)(ptr + idx * 4)) = v9;
 *((unsigned long long*)(ptr + idx * 4 + 16)) = AddV(v9, 0x8c0000000ULL);
 *((unsigned long long*)(ptr + idx * 4 + 32)) = AddV(v9, 0x1180000000ULL);
 *((unsigned long long*)(ptr + idx * 4 + 48)) = AddV(v9, 0x1a40000000ULL);
 idx += 16;
 v7 = AddV(v7, 0x1180000000ULL);
 i -= 2;
 } while (i != 2);
 v11 = AddV(v7, v7);
 if (((char)v5 & 1))
 goto LABEL_40142b;
 }
 else
 {
 v11 = 0x600000004ULL;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_40142b:
 *((unsigned long long *)(ptr + idx * 4)) = v11;
 *((unsigned long long *)(ptr + idx * 4 + 16)) = AddV(0x8c0000000ULL, v11);
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
 alloca_usage((unsigned int)a0);
 return;
}


// Function: alloca_usage at 0x401490
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long j; // r9
 unsigned long long ptr; // rax
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

 if (a0 <= 0)
 return 4294967295;
 j = a0;
 {
 unsigned char vvar_buf[512];
 ptr = (unsigned long long)((char *)&vvar_buf - (j * 4 + 15 & 0xfffffffffffffff0));
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
 i = v5 & 18446744073709551614ULL;
 v7 = 0x300000002ULL;
 idx = 0;
 do
 {
 v9 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)(ptr + idx * 4)) = v9;
 *((unsigned long long*)(ptr + idx * 4 + 16)) = AddV(v9, 0xd2aaaaaaacULL);
 v10 = AddV(AddV(AddV(v7, 0x8c0000000ULL), AddV(v7, 0x8c0000000ULL)), AddV(v7, 0x8c0000000ULL));
 *((unsigned long long*)(ptr + idx * 4 + 32)) = v10;
 *((unsigned long long*)(ptr + idx * 4 + 48)) = AddV(v10, 0xd2aaaaaaacULL);
 idx += 16;
 v7 = AddV(v7, 0x1180000000ULL);
 i -= 2;
 } while (i != 2);
 if (((char)v5 & 1))
 goto LABEL_401563;
 }
 else
 {
 v7 = 0x300000002ULL;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_401563:
 v12 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)(ptr + idx * 4)) = v12;
 *((unsigned long long*)(ptr + idx * 4 + 16)) = AddV(0xd2aaaaaaacULL, v12);
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
 v3 = 0xf0e0d0c0b0a09080ULL;
 do
 {
 *((unsigned long long *)((char *)&v4 + i)) = v3;
 *((unsigned long long *)((char *)&v5 + i)) = AddV(v3, 0x4b93718af873e1e0ULL);
 *((unsigned long long *)((char *)&v6 + i)) = AddV(v3, 0x9726e315f0e7c3c0ULL);
 *((unsigned long long *)((char *)&v7 + i)) = AddV(v3, 0xe2ba54a7f95ba5a0ULL);
 *((unsigned long long *)((char *)&v8 + i)) = AddV(v3, 0x12e4dc63f1cf8780ULL);
 *((unsigned long long *)((char *)&v9 + i)) = AddV(v3, 0x1750f420ea436960ULL);
 *((unsigned long long *)((char *)&v10 + i)) = AddV(v3, 0x1bbd0b1de2d14b40ULL);
 *((unsigned long long *)((char *)&v11 + i)) = AddV(v3, 0x2029211adb2f2d20ULL);
 i += 128;
 v3 ^= 0x2bc81dcd93440000ULL;
 } while (i != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", v0);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: sub_401771 at 0x401771
void sub_401771(unsigned long a0)
{
 heap_basic((unsigned int)a0);
 return;
}


// Function: heap_basic at 0x401780
unsigned long long heap_basic(unsigned int a0)
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
 v7 = 0x3000000020000000100000000;
 idx = 0;
 do
 {
 v9 = AddV(v7, v7);
 *((unsigned long long*)((char *)ptr + 4 * idx)) = v9;
 *((unsigned long long*)(16 + (char *)ptr + 4 * idx)) = AddV(v9, 633825300261688653372387753992);
 *((unsigned long long*)(32 + (char *)ptr + 4 * idx)) = AddV(v9, 1267650600523377306744775507984);
 *((unsigned long long*)(48 + (char *)ptr + 4 * idx)) = AddV(v9, 1901475900785065960117163261976);
 idx += 16;
 v7 = AddV(v7, 1267650600523377306744775507984);
 i -= 2;
 } while (i != 2);
 v11 = AddV(v7, v7);
 if (((char)v5 & 1))
 goto LABEL_40184b;
 }
 else
 {
 v11 = 0x6000000040000000200000000;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_40184b:
 *((unsigned long long *)((char *)ptr + 4 * idx)) = v11;
 *((unsigned long long *)(16 + (char *)ptr + 4 * idx)) = AddV(633825300261688653372387753992, v11);
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
 heap_calloc((unsigned int)a0);
 return;
}


// Function: heap_calloc at 0x4018b0
unsigned int heap_calloc(unsigned int a0)
{
 void* ptr;
 unsigned int v4;
 unsigned long k;
 unsigned long v6;
 unsigned long long idx;
 unsigned long long v8;
 unsigned long long v9;
 unsigned long v10;
 unsigned long long j;
 unsigned long long v12;
 unsigned long long cur;
 unsigned long long v14;

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
 if (v9 >= 24)
 {
 unsigned long long i = v10 & 18446744073709551612;
 v12 = 0;
 cur = 0;
 v14 = 0;
 do
 {
 v12 += *((int *)((char *)ptr + 4 * cur + 4));
 v12 += *((int *)((char *)ptr + 4 * cur + 36));
 v12 += *((int *)((char *)ptr + 4 * cur + 68));
 v12 += *((int *)((char *)ptr + 4 * cur + 100));
 v14 += *((int *)((char *)ptr + 4 * cur + 20));
 v14 += *((int *)((char *)ptr + 4 * cur + 52));
 v14 += *((int *)((char *)ptr + 4 * cur + 84));
 v14 += *((int *)((char *)ptr + 4 * cur + 116));
 cur += 32;
 i -= 4;
 } while (i != 4);
 }
 if (j)
 {
 unsigned long long v17;
 do
 {
 v17 = cur * 4 | 4;
 v12 += *((int *)((char *)ptr + v17));
 v14 += *((int *)((char *)ptr + v17 + 16));
 cur += 8;
 j -= 1;
 } while (j != 1);
 }
 v4 = v12 + v14;
 if (v6 == v8)
 {
 free(ptr);
 return v4;
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
 ptr->field_0 = 10;
 ptr->field_8 = (struct struct_0 *)5;
 p = realloc(ptr, 40);
 if (p)
 {
 p->field_0 = 20;
 p->field_10 = 90;
 v6 = (p->field_10 == 3 ? 50 : 4294967293);
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
 heap_array((unsigned int)a0);
 return;
}


// Function: heap_array at 0x401a90
unsigned long long heap_array(unsigned int a0)
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
 v7 = 0x3000000020000000100000000;
 idx = 0;
 do
 {
 v9 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)((char *)ptr + 4 * idx)) = v9;
 *((unsigned long long*)(16 + (char *)ptr + 4 * idx)) = AddV(v9, 950737950392532980058581630988);
 v10 = AddV(AddV(AddV(v7, 633825300261688653372387753992), AddV(v7, 633825300261688653372387753992)), AddV(v7, 633825300261688653372387753992));
 *((unsigned long long*)(32 + (char *)ptr + 4 * idx)) = v10;
 *((unsigned long long*)(48 + (char *)ptr + 4 * idx)) = AddV(v10, 950737950392532980058581630988);
 idx += 16;
 v7 = AddV(v7, 1267650600523377306744775507984);
 i -= 2;
 } while (i != 2);
 if (((char)v5 & 1))
 goto LABEL_401b63;
 }
 else
 {
 v7 = 0x3000000020000000100000000;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_401b63:
 v12 = AddV(AddV(v7, v7), v7);
 *((unsigned long long*)((char *)ptr + 4 * idx)) = v12;
 *((unsigned long long*)(16 + (char *)ptr + 4 * idx)) = AddV(950737950392532980058581630988, v12);
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
 heap_struct((unsigned int)a0);
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
 struct_1 *temp = NULL;
 heap_nested(&temp);
 free(temp);
 if (temp && temp->field_8)
     free(temp->field_8);
 return;
}


// Function: sub_401c4f at 0x401c4f
void sub_401c4f()
{
 linked_list_heap();
 return;
}


// Function: linked_list_heap at 0x401c50

unsigned int linked_list_heap()
{
 struct_0 *ptr10; // rax
 struct_0 *ptr9; // rbx
 struct_0 *ptr6; // rbx
 struct_0 *ptr5; // rbx
 struct_0 *ptr4; // rbx
 struct_0 *p; // rax
 struct_0 *addr; // rax
 struct_0 *ptr; // rax
 struct_0 *ptr8; // rax
 unsigned int v7; // r12d
 struct_0 *ptr3; // rax
 struct_0 *ptr7; // rbx

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
 p->field_8 = 0;
 ptr9->field_8 = p;
 addr = malloc(16);
 if (addr)
 {
 addr->field_0 = 20;
 addr->field_8 = 0;
 p->field_8 = addr;
 ptr = malloc(16);
 if (ptr)
 {
 ptr->field_0 = 30;
 ptr->field_8 = 0;
 addr->field_8 = ptr;
 ptr8 = malloc(16);
 if (ptr8)
 {
 ptr8->field_0 = 40;
 ptr8->field_8 = 0;
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
 return;
}


// Function: sub_401d66 at 0x401d66
void sub_401d66()
{
 return;
}


// Function: sub_401d86 at 0x401d86
void sub_401d86()
{
 return;
}


// Function: heap_nested at 0x401be0
unsigned long long heap_nested(struct_1 **addr)
{
 struct_1 *ptr3; // rax
 struct_1 *ptr; // rbx
 struct_2 *p; // rax

 ptr3 = malloc(16);
 *(addr) = ptr3;
 if (!ptr3)
 return 4294967295;
 ptr = ptr3;
 ptr3->field_0 = 10;
 p = malloc(16);
 ptr->field_8 = p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p->field_0 = 20;
 p->field_8 = 0;
 return 0;
}


// Function: sub_401dba at 0x401dba
void sub_401dba(unsigned long a0)
{
 create_tree_node((unsigned int)a0);
 return;
}


// Function: create_tree_node at 0x401dc0

struct_0 * create_tree_node(unsigned int a0)
{
 struct_0 *ptr; // rax

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 ptr->field_14 = 0;
 ptr->field_24 = 0;
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
 memory_leak((unsigned int)a0);
 return;
}


// Function: memory_leak at 0x401df0
unsigned long long memory_leak(unsigned int a0)
{
 char* ptr;
 unsigned long long v12;
 unsigned long long j;
 unsigned long long v14;
 unsigned long k;
 unsigned long index;
 unsigned long v6;
 unsigned long v7;
 unsigned long long v8;
 unsigned long long idx;
 unsigned long long i;

 ptr = malloc(a0 * 4);
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
 v14 = 0x3000000020000000100000000;
 idx = 0;
 }
 else
 {
 i = v7 & 18446744073709551612;
 v14 = 0x3000000020000000100000000;
 idx = 0;
 do
 {
 *((unsigned long long *)((char*)ptr + idx * 4)) = v14;
 *((unsigned long long *)((char*)ptr + idx * 4 + 16)) = AddV(v14, 316912650130844326686193876996);
 *((unsigned long long *)((char*)ptr + idx * 4 + 32)) = AddV(v14, 633825300261688653372387753992);
 *((unsigned long long *)((char*)ptr + idx * 4 + 48)) = AddV(v14, 950737950392532980058581630988);
 *((unsigned long long *)((char*)ptr + idx * 4 + 64)) = AddV(v14, 1267650600523377306744775507984);
 *((unsigned long long *)((char*)ptr + idx * 4 + 80)) = AddV(v14, 1584563250654221633430969384980);
 *((unsigned long long *)((char*)ptr + idx * 4 + 96)) = AddV(v14, 1901475900785065960117163261976);
 *((unsigned long long *)((char*)ptr + idx * 4 + 112)) = AddV(v14, 2218388550915910286803357138972);
 idx += 32;
 v14 = AddV(v14, 2535301201046754613489551015968);
 i -= 4;
 } while (i != 4);
 }
 if (v8)
 {
 v12 = (char*)ptr + idx * 4 + 16;
 j = 0;
 do
 {
 *((unsigned long long *)(v12 + j - 16)) = v14;
 *((unsigned long long *)(v12 + j)) = AddV(v14, 316912650130844326686193876996);
 v14 = AddV(v14, 633825300261688653372387753992);
 j += 32;
 } while (v8 * 32 != j);
 }
 if (index == k)
 return *((int *)((char*)ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
 }
 do
 {
 *((unsigned int *)((char*)ptr + index * 4)) = index;
 index += 1;
 } while (k != index);
 return *((int *)((char*)ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
 }
 else
 {
 return *((int *)((char*)ptr + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
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
 return (unsigned long long)*(ptr);
}


// Function: sub_401fe9 at 0x401fe9
void sub_401fe9(unsigned long a0)
{
 unsigned int temp = 0;
 double_free(&temp);
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
 unsigned long v13; // rax
 char *v14; // rdi
 struct_0 *ptr4; // rbx
 struct_0 *ptr3; // rax
 unsigned int v6; // ebp
 struct_2 *ptr5; // rax
 struct_2 *ptr; // rbx
 struct_3 *p; // rax
 unsigned long long v10; // rsi
 int v0; // [bp-0x18]

 puts(&g_403737);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 addr = malloc(20);
 if (addr)
 {
 ptr4 = addr;
 addr->field_0 = 10;
 addr->field_8 = (struct struct_0 *)5;
 ptr3 = realloc(addr, 40);
 if (ptr3)
 {
 ptr3->field_0 = 20;
 ptr3->field_10 = 90;
 v6 = (ptr3->field_10 == 3 ? 50 : 4294967293);
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
 ptr5 = malloc(16);
 if (ptr5)
 {
 ptr = ptr5;
 ptr5->field_0 = 10;
 p = malloc(16);
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
 if (ptr->field_8)
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
 printf(&g_4033c5, dangling_pointer() & 4294967295);
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
 return (unsigned long long)perror(&g_40343b);
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
 global_array_access((unsigned int)a0);
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
 static_local((unsigned int)a0);
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
 call_static_func((unsigned int)a0);
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
 return const_string->field_8 + 42;
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
 set_file_static();
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
 set_global_callback();
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
 typedef unsigned long long (*func_t)(unsigned int);
 
 if (!global_func_ptr)
 return 4294967295;
 return ((func_t)global_func_ptr)(0);
}


// Function: sub_402354 at 0x402354
void sub_402354(unsigned long a0)
{
 unsigned int temp = 0;
 global_heap_store(&temp);
 return;
}


// Function: global_heap_store at 0x402360
unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
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
 tls_access((unsigned int)a0);
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
 printf("STM-L2-03 (read_const_data): %d\n", const_string->field_8 + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 global_heap_ptr = &v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: sub_40257a at 0x40257a
void sub_40257a(unsigned long a0)
{
 double_value((unsigned int)a0);
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
 char buf[16] = {0};
 memop_memset(buf, 16, 0);
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
 return *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4025b5 at 0x4025b5
void sub_4025b5(unsigned long a0)
{
 char src[16] = "Hello", dst[16] = {0};
 memop_memcpy(dst, src, 5);
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
 return *((int *)(-4 + (n & 18446744073709551612) + (char *)a0));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4025f7 at 0x4025f7
void sub_4025f7(unsigned long a0)
{
 struct_0 temp = {0};
 memop_memmove(&temp, 10);
 return;
}


// Function: memop_memmove at 0x402600

unsigned long long memop_memmove(struct_0 *a0, unsigned long a1)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_8, a0, a1 - 1);
 return a0->field_8;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40262d at 0x40262d
void sub_40262d(unsigned long a0)
{
 char buf1[16] = "Hello", buf2[16] = "Hello";
 memop_memcmp(buf1, buf2, 5);
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
 char buf[16] = {0};
 memop_bzero(buf, 16);
 return;
}


// Function: memop_bzero at 0x402660
unsigned long long memop_bzero(char *a0, unsigned long n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: sub_40267e at 0x40267e
void sub_40267e(unsigned long a0)
{
 char src[16] = "Hello", dst[16] = {0};
 memop_bcopy(src, dst, 5);
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
 memmove(a1, a0, n);
 return *(a1);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4026a8 at 0x4026a8
void sub_4026a8(unsigned long a0)
{
 struct_0 temp = {0};
 memop_unaligned_access(&temp);
 return;
}


// Function: memop_unaligned_access at 0x4026b0

unsigned long long memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&a0->field_8);
}


// Function: sub_4026bf at 0x4026bf
void sub_4026bf(unsigned long a0)
{
 unsigned int temp = 0;
 memop_memory_barrier(&temp);
 return;
}


// Function: memop_memory_barrier at 0x4026c0
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
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
 char v1[16]; // [bp-0x10]
 char v2[15]; // [bp-0xf]

 puts(&g_403779);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 strncpy(&v1, "HelloWorld", 10);
 strncpy(&v2, "HelloWorl", 9);
 printf("MEMOP-L2-03: %c\n", 72);
 printf("MEMOP-L2-04: %d\n", 4294967295);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 __sync_synchronize();
 return printf("MEMOP-L3-02: %d\n", v0 * 2);
}


// Function: sub_4027b7 at 0x4027b7
void sub_4027b7()
{
 main();
 return;
}


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
 extern_function((unsigned int)a0);
 return;
}


// Function: extern_function at 0x4027e0
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


