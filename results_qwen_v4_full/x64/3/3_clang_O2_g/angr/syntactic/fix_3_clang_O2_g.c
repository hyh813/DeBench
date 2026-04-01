// Angr Decompilation of 3_clang_O2_g
// Platform: AMD64

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[8];
    unsigned int field_14;
} struct_0;

// Complete struct definitions
typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
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

// Helper function for vector addition (stub)
int AddV(int a, int b) {
    return a + b;
}

// Global variables
unsigned long long g_40 = 0;
unsigned long long g_406010 = 0;











/* CRT stub function _start removed by preprocessor */

// Global variables
unsigned int global_counter = 0;
unsigned int static_local_counter = 0;
unsigned int file_scope_static = 0;
unsigned long long global_func_ptr = 0;
unsigned long long global_heap_ptr = 0;
unsigned int global_array[4] = {5, 10, 15, 20};
unsigned int extern_global_var = 42;
struct_0 dummy_const_string = {42, {0}, 0, {0}, 0};
struct_0 *const_string = &dummy_const_string;

// Forward declarations
unsigned int extern_function(unsigned int a0);
unsigned int double_value(unsigned int a0);
char g_403719[] = "=== Stack Memory Tests ===";
char g_4033c5[] = "%d\n";
char g_4033d5[] = "Child exited normally\n";
char g_4033fa[] = "Child exited with signal\n";
char g_40343b[] = "fork failed";
char g_403737[] = "=== Heap Memory Tests ===";
char g_403755[] = "=== Static/Global Memory Tests ===";
char g_403779[] = "=== Memory Operation Tests ===";

/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */










/* CRT stub function frame_dummy removed by preprocessor */



// Function prototypes
int local_vars(unsigned int a0);
unsigned int local_array(unsigned int a0);
unsigned int local_struct(unsigned int a0);
unsigned long long address_of_local(unsigned int *ptr);
unsigned int address_of_array(unsigned int *a0);
int large_stack_frame();
int vla_stack(unsigned int a0);
unsigned long long alloca_usage(unsigned int a0);
int stack_alias();
int test_stack_memory();
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);
unsigned int heap_realloc();
unsigned int heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned long long heap_nested(struct_1 **addr);
unsigned int linked_list_heap();
struct_0 * create_tree_node(unsigned int a0);
unsigned long long tree_heap_traversal();
unsigned long long memory_leak(unsigned int a0);
int dangling_pointer();
int double_free(unsigned int *a0);
int heap_overflow();
long long test_heap_memory();
unsigned int global_var_access();
unsigned int global_var_read();
unsigned long long global_array_access(unsigned int a0);
long long static_local(unsigned int a0);
int call_static_func(unsigned int a0);
int access_extern_global();
void call_extern_func();
int read_const_data();
int access_bss_var();
int access_bss_buffer();
int global_struct_access();
void set_file_static(unsigned int a0);
int get_file_static();
void set_global_callback(unsigned long a0);
int call_global_callback();
int global_heap_store(unsigned int *a0);
int static_complex_init();
unsigned int tls_access(unsigned int a0);
int init_order_test();
int test_static_global();
int memop_memset(char *a0, unsigned long n, int a2);
int memop_memcpy(void* a0, void* a1, unsigned long n);
int memop_memmove(struct_0 *a0, unsigned long a1);
int memop_memcmp(void* a0, void* a1, unsigned long a2);
int memop_bzero(char *a0, unsigned long n);
int memop_bcopy(void* a0, char *a1, unsigned long n);
int memop_unaligned_access(struct_0 *a0);
int memop_memory_barrier(unsigned int *a0);
int test_memory_op_functions();
int main();
unsigned int double_value(unsigned int a0);
unsigned int extern_function(unsigned int a0);

// Helper function for vector addition with unsigned long long support
unsigned long long AddV_ull(unsigned long long a, unsigned long long b) {
    return a + b;
}

int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}





unsigned int local_array(unsigned int a0)
{
 return a0 * 5;
}





unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}





unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}





unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}







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

 v2 = 0xf0e0d0c0b0a09080706050403020100;
 i = 0;
 do
 {
 *((unsigned long long *)((char *)&v4 + i)) = v2;
 *((unsigned long long *)((char *)&v5 + i)) = AddV(v2, 0x1234567890ABCDEFULL);
 *((unsigned long long *)((char *)&v6 + i)) = AddV(v2, 0x2345678901BCDEF0ULL);
 *((unsigned long long *)((char *)&v7 + i)) = AddV(v2, 0x3456789012CDEF01ULL);
 *((unsigned long long *)((char *)&v8 + i)) = AddV(v2, 0x4567890123DEF012ULL);
 *((unsigned long long *)((char *)&v9 + i)) = AddV(v2, 0x567890124EF0123ULL);
 *((unsigned long long *)((char *)&v10 + i)) = AddV(v2, 0x67890125F01234ULL);
 *((unsigned long long *)((char *)&v11 + i)) = AddV(v2, 0x7890126012345ULL);
 i += 128;
 v2 ^= 0x8901234567890ABCULL;
 } while (i != 0x800);
 return v0;
}





int vla_stack(unsigned int a0)
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
 char vvar_120[256];

 if (a0 - 1001 < 4294966296)
 return 4294967295;
 j = a0;
 ptr = (unsigned long long)(vvar_120) - (j * 4 + 15 & 0xfffffffffffffff0);
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
 *((void*)(ptr + idx * 4)) = v9;
 *((void*)(ptr + idx * 4 + 16)) = AddV(v9, 633825300261688653372387753992);
 *((void*)(ptr + idx * 4 + 32)) = AddV(v9, 1267650600523377306744775507984);
 *((void*)(ptr + idx * 4 + 48)) = AddV(v9, 1901475900785065960117163261976);
 idx += 16;
 v7 = AddV(v7, 1267650600523377306744775507984);
 i -= 2;
 } while (i != 2);
 v11 = AddV(v7, v7);
 if (((char)v5 & 1))
 goto LABEL_40142b;
 }
 else
 {
 v11 = 0x6000000040000000200000000;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_40142b:
 *((unsigned long long *)(ptr + idx * 4)) = v11;
 *((unsigned long long *)(ptr + idx * 4 + 16)) = AddV(633825300261688653372387753992, v11);
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





int alloca_usage(unsigned int a0)
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
 char vvar_94[256];

 if (a0 <= 0)
 return 4294967295;
 j = a0;
 ptr = (unsigned long long)(vvar_94) - (j * 4 + 15 & 0xfffffffffffffff0);
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
 *((void*)(ptr + idx * 4)) = v9;
 *((void*)(ptr + idx * 4 + 16)) = AddV(v9, 950737950392532980058581630988);
 v10 = AddV(AddV(AddV(v7, 633825300261688653372387753992), AddV(v7, 633825300261688653372387753992)), AddV(v7, 633825300261688653372387753992));
 *((void*)(ptr + idx * 4 + 32)) = v10;
 *((void*)(ptr + idx * 4 + 48)) = AddV(v10, 950737950392532980058581630988);
 idx += 16;
 v7 = AddV(v7, 1267650600523377306744775507984);
 i -= 2;
 } while (i != 2);
 if (((char)v5 & 1))
 goto LABEL_401563;
 }
 else
 {
 v7 = 0x3000000020000000100000000;
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_401563:
 v12 = AddV(AddV(v7, v7), v7);
 *((void*)(ptr + idx * 4)) = v12;
 *((void*)(ptr + idx * 4 + 16)) = AddV(950737950392532980058581630988, v12);
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







int stack_alias()
{
 return 20;
}


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
 v3 = 0xf0e0d0c0b0a09080706050403020100;
 do
 {
 *((unsigned long long *)((char *)&v4 + i)) = v3;
 *((unsigned long long *)((char *)&v5 + i)) = AddV(v3, 21351050473470648687898014583954083856);
 *((unsigned long long *)((char *)&v6 + i)) = AddV(v3, 42702100946941297375796029167908167712);
 *((unsigned long long *)((char *)&v7 + i)) = AddV(v3, 64053151420411946063694043751862251568);
 *((unsigned long long *)((char *)&v8 + i)) = AddV(v3, 85404201893882594751592058335816335424);
 *((unsigned long long *)((char *)&v9 + i)) = AddV(v3, 106755252367353243439490072919770419280);
 *((unsigned long long *)((char *)&v10 + i)) = AddV(v3, 128106302840823892127388087503724503136);
 *((unsigned long long *)((char *)&v11 + i)) = AddV(v3, 149457353314294540815286102087678586992);
 i += 128;
 v3 ^= 170808403787765189503184116671632670848;
 } while (i != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", v0);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}





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
 v7 = 0x3000000020000000100000000;
 idx = 0;
 do
 {
 v9 = AddV(v7, v7);
 *((void*)((char *)ptr + 4 * idx)) = v9;
 *((void*)(16 + (char *)ptr + 4 * idx)) = AddV(v9, 633825300261688653372387753992);
 *((void*)(32 + (char *)ptr + 4 * idx)) = AddV(v9, 1267650600523377306744775507984);
 *((void*)(48 + (char *)ptr + 4 * idx)) = AddV(v9, 1901475900785065960117163261976);
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





unsigned int heap_calloc(unsigned int a0)
{
 unsigned long long v2; // rax
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
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
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
 v4 = (unsigned int)v19;
 if (v6 == v8)
 {
 free(ptr);
 return (unsigned int)v19;
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







unsigned int heap_realloc()
{
 unsigned long long v2; // rax
 struct_0 *ptr; // rax
 struct_0 *addr; // rbx
 struct_0 *p; // rax
 unsigned int v6; // ebp
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 addr = ptr;
 *((void*)&ptr->field_0) = 316912650112397582603894390785;
 ptr->field_8 = 5;
 p = realloc(ptr, 40);
 if (p)
 {
 *((void*)&p->padding_c[0]) = 6338253002432419092900882677810;
 *((unsigned int *)((char *)&p->field_14 + 4)) = 90;
 v6 = (*((int *)((char *)&p->field_0 + 8)) == 3 ? 50 : 4294967293);
 addr = p;
 }
 else
 {
 v6 = 4294967294;
 }
 free(addr);
 return v6;
}





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
 v7 = 0x3000000020000000100000000;
 idx = 0;
 do
 {
 v9 = AddV(AddV(v7, v7), v7);
 *((void*)((char *)ptr + 4 * idx)) = v9;
 *((void*)(16 + (char *)ptr + 4 * idx)) = AddV(v9, 950737950392532980058581630988);
 v10 = AddV(AddV(AddV(v7, 633825300261688653372387753992), AddV(v7, 633825300261688653372387753992)), AddV(v7, 633825300261688653372387753992));
 *((void*)(32 + (char *)ptr + 4 * idx)) = v10;
 *((void*)(48 + (char *)ptr + 4 * idx)) = AddV(v10, 950737950392532980058581630988);
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
 *((void*)((char *)ptr + 4 * idx)) = v12;
 *((void*)(16 + (char *)ptr + 4 * idx)) = AddV(950737950392532980058581630988, v12);
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





unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}





int heap_nested(struct_1 **addr)
{
 unsigned long long v2; // rax
 struct_1 *ptr3; // rax
 struct_1 *ptr; // rbx
 struct_0 *p; // rax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 ptr3 = malloc(16);
 *(addr) = ptr3;
 if (!ptr3)
 return 4294967295;
 ptr = ptr3;
 ptr3->field_0 = 10;
 p = malloc(24);
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














struct_0 * create_tree_node(unsigned int a0)
{
 struct_0 *ptr; // rax

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 *((unsigned long long *)&(&ptr->padding_4)[1]) = 0;
 return ptr;
}







int tree_heap_traversal()
{
 return 60;
}





int memory_leak(unsigned int a0)
{
 unsigned long long v2; // rax
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
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
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
 *((unsigned long long *)(ptr + idx * 4)) = v14;
 *((unsigned long long *)(ptr + idx * 4 + 16)) = AddV(v14, 316912650130844326686193876996);
 *((unsigned long long *)(ptr + idx * 4 + 32)) = AddV(v14, 633825300261688653372387753992);
 *((unsigned long long *)(ptr + idx * 4 + 48)) = AddV(v14, 950737950392532980058581630988);
 *((unsigned long long *)(ptr + idx * 4 + 64)) = AddV(v14, 1267650600523377306744775507984);
 *((unsigned long long *)(ptr + idx * 4 + 80)) = AddV(v14, 1584563250654221633430969384980);
 *((unsigned long long *)(ptr + idx * 4 + 96)) = AddV(v14, 1901475900785065960117163261976);
 *((unsigned long long *)(ptr + idx * 4 + 112)) = AddV(v14, 2218388550915910286803357138972);
 idx += 32;
 v14 = AddV(v14, 2535301201046754613489551015968);
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
 *((unsigned long long *)(v12 + j)) = AddV(v14, 316912650130844326686193876996);
 v14 = AddV(v14, 633825300261688653372387753992);
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







int dangling_pointer()
{
 unsigned int *ptr; // rax

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 printf("value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}





int double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}







int heap_overflow()
{
 return 0;
}


long long test_heap_memory()
{
 unsigned long v2; // rax
 struct_0 *addr; // rax
 pid_t result; // eax
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

 v0 = v2;
 puts(&g_403737);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 addr = malloc(20);
 if (addr)
 {
 ptr4 = addr;
 *((void*)&addr->field_0) = 316912650112397582603894390785;
 addr->field_8 = 5;
 ptr3 = realloc(addr, 40);
 if (ptr3)
 {
 *((void*)&ptr3->padding_c[0]) = 6338253002432419092900882677810;
 *((unsigned int *)((char *)&ptr3->field_14 + 4)) = 90;
 v6 = (*((int *)((char *)&ptr3->field_0 + 8)) == 3 ? 50 : 4294967293);
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
 perror(&g_40343b);
 return 4294967295;
 }
}




unsigned int global_var_read()
{
 return global_counter * 2;
}


unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}








unsigned long long global_array_access(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 9)
 v1 = global_array[a0];
 return v1;
}





long long static_local(unsigned int a0)
{
 static_local_counter = (!a0 ? static_local_counter + 1 : 0);
 return static_local_counter;
}





int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}







int access_extern_global()
{
 return extern_global_var + 100;
}










int read_const_data()
{
 return const_string->field_0 + 42;
}


int access_bss_var()
{
 return 0;
}







int access_bss_buffer()
{
 return 0;
}


int global_struct_access()
{
 return 30;
}





void set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return;
}







int get_file_static()
{
 return file_scope_static;
}





void set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return;
}







int call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((int (*)(void))global_func_ptr)();
}





int global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}







int static_complex_init()
{
 return 15;
}





unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}







int init_order_test()
{
 return 20;
}


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
 printf("STM-L2-03 (read_const_data): %d\n", const_string->field_0 + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 global_func_ptr = (unsigned long long)double_value;
 v0 = 100;
 global_heap_ptr = (unsigned long long)&v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}





unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}





int memop_memset(char *a0, unsigned long n, int a2)
{
 if (!a0)
 {
 return -1;
 }
 else if (n)
 {
 memset(a0, a2, n);
 return (int)*(a0);
 }
 else
 {
 return -1;
 }
}





int memop_memcpy(void* a0, void* a1, unsigned long n)
{
 if (!a0)
 {
 return -1;
 }
 else if (!a1)
 {
 return -1;
 }
 else if (n)
 {
 memcpy(a0, a1, n);
 return *((int *)(-4 + (n & 18446744073709551612) + (char *)a0));
 }
 else
 {
 return -1;
 }
}





int memop_memmove(struct_0 *a0, unsigned long a1)
{
 if (!a0)
 {
 return -1;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_0, a0, a1 - 1);
 return (int)a0->field_0;
 }
 else
 {
 return -1;
 }
}





int memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 int v2; // eax

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
 v2 = memcmp(a0, a1, a2);
 return (v2 <= 0 ? -v2 : 1);
 }
 else
 {
 return 0;
 }
}





int memop_bzero(char *a0, unsigned long n)
{
 if (!a0)
 return -1;
 memset(a0, 0, n);
 return (int)*(a0);
}





int memop_bcopy(void* a0, char *a1, unsigned long n)
{
 if (!a0)
 {
 return -1;
 }
 else if (!a1)
 {
 return -1;
 }
 else if (n)
 {
 memmove(a1, a0, n);
 return (int)*(a1);
 }
 else
 {
 return -1;
 }
}





int memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return -1;
 return *((int *)&(&a0->padding_4)[1]);
}





int memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return -1;
 // MBusEvent-Imbe_Fence
 __asm__ __volatile__("" ::: "memory");
 return (int)(*(a0) * 2);
}







int test_memory_op_functions()
{
 unsigned int v0; // [bp-0x14]
 char v1[1]; // [bp-0x10]
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
 __asm__ __volatile__("" ::: "memory");
 return printf("MEMOP-L3-02: %d\n", v0 * 2);
}


int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}





unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}

void call_extern_func()
{
 // Stub implementation for extern function call
 return;
}

/* CRT stub function _fini removed by preprocessor */


