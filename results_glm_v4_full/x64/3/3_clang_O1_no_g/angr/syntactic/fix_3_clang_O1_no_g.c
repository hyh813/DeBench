// Angr Decompilation of 3_clang_O1_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>

/* CRT stub function _init removed by preprocessor */

extern void *g_405fe8;

/* Global variable definitions */
unsigned int global_counter = 0;
unsigned int global_array[4] = {0, 0, 0, 0};
unsigned int static_local_counter = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
unsigned long long global_func_ptr = 0;
unsigned int *global_heap_ptr = 0;
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;
char g_401492 = 0;
char g_4014a5 = 0;
char g_4035d9 = 0;
char g_403285 = 0;
char g_403295 = 0;
char g_4032ba = 0;
char g_4032fb = 0;
char g_4035f7 = 0;
char g_403615 = 0;
char g_403639 = 0;

/* Stub for const_string */
struct const_string_struct {
 char padding_0[4];
 char field_4;
};
struct const_string_struct const_string = {{0}, 'A'};

/* Forward declarations for structs used throughout the code */
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

/* Typedef for struct_2 used in tree_heap_traversal */
typedef struct struct_2_tree {
 unsigned int field_0;
 char padding_4[4];
 void *field_8;
 void *field_10;
} struct_2_tree;

/* Typedef for struct_tree_node */
typedef struct struct_tree_node {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_tree_node;

/* Typedef for struct_0_memmove */
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

/* Typedef for struct_0_unaligned */
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
 struct struct_1 *field_10;
} struct_2_full;

typedef struct struct_2_simple {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2_simple;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2_simple *field_8;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_4;

/* Function pointer type for global_func_ptr */
typedef unsigned long long (*func_ptr_t)(unsigned int);

/* Forward declarations for functions */
void deregister_tm_clones();
void register_tm_clones();
void __do_global_dtors_aux();
void frame_dummy();
int local_vars(unsigned long a0);
unsigned int local_array(unsigned long a0);
unsigned int local_struct(unsigned int a0);
unsigned long long address_of_local(unsigned int *ptr);
unsigned int address_of_array(unsigned int *a0);
int large_stack_frame();
unsigned long long vla_stack(unsigned int a0);
unsigned long long alloca_usage(unsigned int a0);
unsigned long long stack_alias();
int test_stack_memory(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6);
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);
unsigned int heap_realloc();
unsigned int heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned long long heap_nested(struct_3 *addr);
struct_tree_node * create_tree_node(unsigned int a0);
unsigned int tree_heap_traversal();
unsigned long long memory_le();
unsigned long long memory_leak(unsigned int a0);
unsigned long long dangling_pointer();
unsigned long long double_free(unsigned int *a0);
unsigned int heap_overflow();
long long test_heap_memory();
unsigned int global_var_access();
unsigned int global_var_read();
unsigned long long global_array_access(unsigned int a0);
long long static_local(unsigned int a0);
int call_static_func(unsigned int a0);
int access_extern_global();
void call_extern_func();
int read_const_data();
unsigned long long access_bss_var();
unsigned long long access_bss_buffer();
unsigned long long global_struct_access();
void set_file_static(unsigned int a0);
int get_file_static();
void set_global_callback(unsigned long a0);
unsigned long long call_global_callback();
unsigned long long global_heap_store(unsigned int *a0);
unsigned long long static_complex_init();
unsigned int tls_access(unsigned int a0);
unsigned long long init_order_test();
int test_static_global();
unsigned int double_value(unsigned int a0);
unsigned long long memop_memset();
unsigned long long memop_memcpy();
unsigned long long memop_memmove();
unsigned long long memop_memcmp();
unsigned long long memop_bzero();
unsigned long long memop_bcopy();
unsigned long long memop_unaligned_access();
unsigned long long memop_memory_barrier();
int test_memory_op_functions();
unsigned int linked_list_heap();
unsigned int extern_function(unsigned int);
unsigned int extern_function_noargs();
unsigned int main();

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_405fe8;
 if (g_405fe8)
 v1 = ((unsigned long long *(*)())g_405fe8)();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 ((void(*)())g_406010)();
}


// Function: sub_40102c at 0x40102c
void sub_40102c()
{
 void* v1; // rdi

 (void)v1;  // Suppress unused warning
 return;
}



/* CRT stub function _start removed by preprocessor */






// Function: sub_401146 at 0x401146
void sub_401146()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones() { }



// Function: sub_401179 at 0x401179
void sub_401179()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones() { }



// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux() { }



// Function: sub_4011f5 at 0x4011f5
void sub_4011f5()
{
 return;
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy() { }



// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 local_vars(a0);
 return;
}


// Function: local_vars at 0x401210
int local_vars(unsigned long a0)
{
 return a0 * 2 + 10;
}


// Function: sub_401217 at 0x401217
void sub_401217()
{
 local_array(0);
 return;
}


// Function: local_array at 0x401220
unsigned int local_array(unsigned long a0)
{
 unsigned long long v2; // rax
 unsigned long long idx; // rcx
 unsigned long v4; // [bp-0x28]
 char v0; // [bp-0x14]

 v2 = 0;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v4 + 4 * idx)) = v2;
 idx += 1;
 v2 += a0;
 } while (idx != 10);
 return *((int *)&v0);
}


// Function: sub_401245 at 0x401245
void sub_401245(unsigned long a0)
{
 local_struct((unsigned int)a0);
 return;
}


// Function: local_struct at 0x401250
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401254 at 0x401254
void sub_401254(unsigned long a0)
{
 unsigned int local_val = (unsigned int)a0;
 address_of_local(&local_val);
 return;
}


// Function: address_of_local at 0x401260
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: sub_40126c at 0x40126c
void sub_40126c(unsigned long a0)
{
 unsigned int arr[1] = {(unsigned int)a0};
 address_of_array(arr);
 return;
}


// Function: address_of_array at 0x401270
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401275 at 0x401275
void sub_401275()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x401280
int large_stack_frame()
{
 unsigned long long i; // rax
 unsigned long v3; // [bp-0x808]
 char v0; // [bp-0x408]

 i = 0;
 do
 {
 *((char *)&v3 + i) = i;
 i += 1;
 } while (i != 0x800);
 return v0;
}


// Function: vla_stack at 0x4012b0
unsigned long long vla_stack(unsigned int a0)
{
 unsigned long v1; // rdx
 unsigned long long idx; // rsi
 unsigned int vla_array[a0];

 if (a0 - 1001 < 4294966296)
 return 4294967295;
 v1 = a0;
 if (a0 <= 0)
 return vla_array[((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295];
 idx = 0;
 do
 {
 vla_array[idx] = idx;
 idx += 2;
 } while (v1 * 2 != idx);
 return vla_array[((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295];
}


// Function: alloca_usage at 0x401310
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned int *cur; // rax
 unsigned long long i; // rdx
 unsigned int vvar_11; // Stack anchor

 if (a0 <= 0)
 return 4294967295;
 cur = (unsigned int *)((char *)&vvar_11 - (a0 * 4 + 15 & 0xfffffffffffffff0));
 i = 0;
 do
 {
 *(cur) = i;
 i += 3;
 cur += 1;
 } while (a0 * 3 != i);
 return *((int *)((char *)&vvar_11 - (a0 * 4 + 15 & 0xfffffffffffffff0) + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
}


// Function: sub_401366 at 0x401366
void sub_401366()
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x401370
unsigned long long stack_alias()
{
 return 20;
}


// Function: sub_401376 at 0x401376
void sub_401376()
{
 test_stack_memory(0, 0, 0, 0, 0, 0, 0);
 return;
}


// Function: test_stack_memory at 0x401380
int test_stack_memory(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6)
{
 unsigned long long idx; // rbx
 unsigned long long j; // rbx
 unsigned long long index; // rbx
 unsigned long long l; // rbx
 unsigned int *ptr; // rax
 unsigned long v14; // rsi
 unsigned long v0; // [bp-0x820]
 unsigned long v1; // [bp-0x818]
 char v2; // [bp-0x810]
 unsigned long v15; // [bp-0x808]
 unsigned int v3; // [bp-0x7fc]
 char v4; // [bp-0x7f4]
 char v5; // [bp-0x408]

 (void)a0; (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; // Suppress unused
 (void)v14; (void)v0; (void)v1; (void)v15;
 puts("Testing stack memory");
 idx = 0;
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 do
 {
 *((unsigned int *)((char *)&v15 + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 j = 0;
 printf("MEM-L1-02 (local_array): %d\n", *((int *)&v4));
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 do
 {
 *((char *)&v15 + j) = j;
 j += 1;
 } while (j != 0x800);
 index = 0;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
 do
 {
 *((unsigned int *)((char *)&v15 + 2 * index)) = index;
 index += 2;
 } while (index != 20);
 l = 0;
 ptr = &v3;
 printf("MEM-L2-02 (vla_stack): %d\n", *((int *)&v4));
 do
 {
 *(ptr) = l;
 l += 3;
 ptr += 1;
 } while (l != 30);
 v14 = v3;
 v1 = (unsigned long)(uintptr_t)&g_401492;
 printf("MEM-L2-03 (alloca_usage): %d\n", v14);
 v0 = (unsigned long)(uintptr_t)&g_4014a5;
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: sub_4014ae at 0x4014ae
void sub_4014ae(unsigned long a0)
{
 heap_basic((unsigned int)a0);
 return;
}


// Function: heap_basic at 0x4014b0
unsigned int heap_basic(unsigned int a0)
{
 void* ptr; // rax
 unsigned long long idx; // rdx

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
 idx += 2;
 } while (a0 * 2 != idx);
 }
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
}


// Function: sub_4014fe at 0x4014fe
void sub_4014fe(unsigned long a0)
{
 heap_calloc((unsigned int)a0);
 return;
}


// Function: heap_calloc at 0x401500
unsigned int heap_calloc(unsigned int a0)
{
 void* ptr; // rax
 unsigned long idx; // rdx
 unsigned int v3; // ebx

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 idx = 0;
 v3 = 0;
 do
 {
 v3 += *((int *)((char *)ptr + 4 * idx));
 idx += 1;
 } while (a0 != idx);
 }
 else
 {
 v3 = 0;
 }
 free(ptr);
 return v3;
}


// Function: sub_401543 at 0x401543
void sub_401543()
{
 heap_realloc();
 return;
}


// Function: heap_realloc at 0x401550
unsigned int heap_realloc()
{
 unsigned int *ptr; // rax
 unsigned int *ptr2; // rbx
 unsigned long long idx; // rax
 unsigned long long v4; // rcx
 unsigned int v5; // r14d
 unsigned int *p; // rax
 unsigned long long pos; // rcx
 unsigned int v8; // edx
 unsigned int v9; // ebp

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 idx = 0;
 do
 {
 v4 = idx + 1;
 ptr[idx] = v4;
 idx = v4;
 } while (idx != 5);
 v5 = ptr[2];
 p = realloc(ptr, 40);
 if (p)
 {
 pos = 5;
 v8 = 50;
 do
 {
 p[pos] = v8;
 pos += 1;
 v8 += 10;
 } while (pos != 10);
 v9 = 4294967293;
 if (p[2] == v5)
 v9 = p[5];
 ptr2 = p;
 }
 else
 {
 v9 = 4294967294;
 }
 free(ptr2);
 return v9;
}


// Function: sub_4015de at 0x4015de
void sub_4015de(unsigned long a0)
{
 heap_array((unsigned int)a0);
 return;
}


// Function: heap_array at 0x4015e0
unsigned int heap_array(unsigned int a0)
{
 unsigned int *ptr; // rax
 unsigned long long i; // rdx
 unsigned int *ptr2; // rsi

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 i = 0;
 ptr2 = ptr;
 do
 {
 *(ptr2) = i;
 i += 3;
 ptr2 += 1;
 } while (a0 * 3 != i);
 }
 free(ptr);
 return ptr[((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295];
}


// Function: sub_401641 at 0x401641
void sub_401641(unsigned long a0)
{
 heap_struct((unsigned int)a0);
 return;
}


// Function: heap_struct at 0x401650
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401654 at 0x401654
void sub_401654(unsigned long a0)
{
 struct_3 s3;
 heap_nested(&s3);
 return;
}


// Function: heap_nested at 0x401660
unsigned long long heap_nested(struct_3 *addr)
{
 struct_2_simple *p; // rax
 struct_2_simple *ptr2; // rax

 p = malloc(16);
 addr->field_8 = p;
 if (!p)
 return 4294967295;
 p->field_0 = 10;
 ptr2 = malloc(16);
 addr->field_8 = ptr2;
 if (!ptr2)
 {
 free(addr->field_8);
 return 4294967294;
 }
 ptr2->field_0 = 20;
 ptr2->field_8 = 0;
 return 0;
}


// Function: sub_4016be at 0x4016be
void sub_4016be()
{
 linked_list_heap();
 return;
}


// Function: linked_list_heap at 0x4016c0
unsigned int linked_list_heap()
{
 struct_0 *v3; // rbp
 char v11; // r15b
 unsigned int v12; // r14d
 struct_0 *ptr; // rax
 struct_0 *ptr4; // rbp
 struct_0 *ptr3; // r12
 unsigned int v5; // r13d
 unsigned int v6; // r13d
 struct_0 *p; // r14
 struct_0 *addr; // rbp
 unsigned int v10; // eax

 v3 = NULL;
 v11 = 1;
 ptr3 = NULL;
 v5 = 0;
 do
 {
 v6 = v5;
 p = malloc(16);
 if (p)
 {
 p->field_0 = v6 * 10;
 p->field_8 = NULL;
 if (!v3)
 {
 ptr3 = p;
 v3 = p;
 if (!p)
 break;
 }
 else
 {
 ptr3->field_8 = p;
 ptr3 = p;
 if (!p)
 break;
 }
 }
 else
 {
 if (v3)
 {
 do
 {
 addr = v3;
 free(addr);
 v3 = addr->field_8;
 } while (addr->field_8);
 }
 v3 = NULL;
 if (!p)
 break;
 }
 } while ((v10 = v6 + 1, v11 = (char)(char)(v6 < 4), v5 = v6 + 1, v5 != 5));
 if ((v11 & 1))
 return 4294967295;
 v12 = 0;
 if (v3)
 {
 ptr = v3;
 do
 {
 v12 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 if (!v3)
 return v12;
 do
 {
 ptr4 = v3;
 free(ptr4);
 v3 = ptr4->field_8;
 } while (ptr4->field_8);
 return v12;
}


// Function: sub_4016d8 at 0x4016d8
void sub_4016d8()
{
 return;
}


// Function: sub_40173c at 0x40173c
void sub_40173c()
{
 return;
}


// Function: sub_4017d6 at 0x4017d6
void sub_4017d6(unsigned long a0)
{
 create_tree_node((unsigned int)a0);
 return;
}


// Function: create_tree_node at 0x4017e0
struct_tree_node * create_tree_node(unsigned int a0)
{
 struct_tree_node *ptr; // rax

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 return ptr;
}


// Function: sub_4017fd at 0x4017fd
void sub_4017fd()
{
 tree_heap_traversal();
 return;
}


// Function: tree_heap_traversal at 0x401800
unsigned int tree_heap_traversal()
{
 struct_2_tree *ptr3; // rax
 struct_2_tree *ptr; // r14
 struct_3 *p; // r15
 struct_4 *addr; // rbx
 unsigned int v7; // ebp

 ptr3 = malloc(24);
 if (!ptr3)
 return 4294967295;
 ptr = ptr3;
 ptr3->field_0 = 10;
 ptr3->field_8 = 0;
 ptr3->field_10 = 0;
 p = (struct_3*)malloc(24);
 if (p)
 {
 p->field_0 = 20;
 p->field_8 = 0;
 }
 ptr->field_8 = (void*)p;
 addr = (struct_4*)malloc(24);
 if (addr)
 {
 addr->field_0 = 30;
 addr->field_8 = 0;
 }
 ptr->field_10 = (void*)addr;
 if (p && addr)
 {
 v7 = p->field_0 + ptr->field_0 + addr->field_0;
 free(p);
 free(addr);
 free(ptr);
 return v7;
 }
 else
 {
 if (p)
 free(p);
 v7 = 4294967294;
 if (!addr)
 {
 free(ptr);
 return v7;
 }
 }
 free(addr);
 free(ptr);
 return v7;
}


// Function: sub_4018c9 at 0x4018c9
void sub_4018c9(unsigned long a0)
{
 memory_leak((unsigned int)a0);
 return;
}


// Function: memory_leak at 0x4018d0
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v1; // rbx
 unsigned long long ptr; // rax
 unsigned long long idx; // rdx

 v1 = a0;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v1 <= 0)
 return *((int *)(ptr + ((((v1 & 4294967295) >> 31 & 4294967295) + v1 & 4294967295) >> 1 & 4294967295) * 4));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while ((v1 & 4294967295) != idx);
 return *((int *)(ptr + ((((v1 & 4294967295) >> 31 & 4294967295) + v1 & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: sub_401914 at 0x401914
void sub_401914()
{
 dangling_pointer();
 return;
}


// Function: dangling_pointer at 0x401920
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // rax

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 *(ptr) = 42;
 printf("value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: sub_40195f at 0x40195f
void sub_40195f(unsigned long a0)
{
 unsigned int val = (unsigned int)a0;
 double_free(&val);
 return;
}


// Function: double_free at 0x401960
unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: sub_40196e at 0x40196e
void sub_40196e()
{
 heap_overflow();
 return;
}


// Function: heap_overflow at 0x401970
unsigned int heap_overflow()
{
 unsigned int *ptr; // rax
 unsigned long long i; // rcx
 unsigned int *ptr2; // rdx

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 ptr2 = ptr;
 do
 {
 *(ptr2) = i;
 i += 100;
 ptr2 += 1;
 } while (i != 1100);
 free(ptr);
 return *(ptr);
}


// Function: sub_4019b8 at 0x4019b8
void sub_4019b8()
{
 test_heap_memory();
 return;
}


// Function: test_heap_memory at 0x4019c0
struct struct_2_simple_local {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2_simple_local *field_8;
};

long long test_heap_memory()
{
 unsigned int *addr; // rax
 unsigned int v12; // ebp
 struct struct_2_simple_local *p; // rbx
 unsigned long long idx4; // rax
 unsigned long long v15; // rcx
 unsigned int v16; // r15d
 struct struct_2_simple_local *ptr; // rax
 unsigned long long idx7; // rcx
 unsigned int v19; // edx
 unsigned int *ptr2; // rax
 unsigned long long m; // rcx
 unsigned int v4; // r14d
 struct struct_2_simple_local *ptr_nested; // rdx
 struct struct_2_simple_local *ptr4; // rbx
 struct struct_2_simple_local *ptr5; // rax
 unsigned long long v26; // rsi
 unsigned int *ptr6; // rax
 unsigned long long off; // rcx
 unsigned long v31; // rsi
 unsigned int v5; // ebp
 unsigned int result; // eax
 unsigned long v33; // rax
 char *v34; // rdi
 unsigned long long idx; // rcx
 unsigned int v7; // ebx
 void* ptr7; // rax
 unsigned long long idx6; // rcx
 unsigned int v11; // r14d
 unsigned int *ptr8; // rax
 int v0; // [bp-0x28] - status for waitpid
 struct struct_2_simple_local *ptr3; // Local variable

 (void)v0;
 puts("Testing heap memory");
 addr = malloc(40);
 v4 = 4294967295;
 v5 = 4294967295;
 if (addr)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)addr + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 v5 = (unsigned long long)(uintptr_t)&addr[5];
 free(addr);
 }
 v7 = 0;
 printf("HEAP-L2-01 (heap_basic): %d\n", v5);
 ptr7 = calloc(5, 4);
 if (ptr7)
 {
 idx6 = 0;
 do
 {
 v7 += *((int *)((char *)ptr7 + 4 * idx6));
 idx6 += 1;
 } while (idx6 != 5);
 free(ptr7);
 v4 = v7;
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v4);
 ptr = malloc(20);
 v11 = 4294967295;
 v12 = 4294967295;
 if (ptr)
 {
 p = ptr;
 idx4 = 0;
 do
 {
 v15 = idx4 + 1;
 p[idx4] = v15;
 idx4 = v15;
 } while (idx4 != 5);
 v16 = p[2];
 ptr5 = (struct struct_2_simple_local *)realloc(p, 40);
 if (ptr5)
 {
 idx7 = 5;
 v19 = 50;
 do
 {
 ptr5[idx7].field_0 = v19;
 idx7 += 1;
 v19 += 10;
 } while (idx7 != 10);
 v12 = 4294967293;
 if (ptr5[2].field_0 == v16)
 v12 = ptr5[5].field_0;
 p = ptr5;
 }
 else
 {
 v12 = 4294967294;
 }
 free(p);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v12);
 ptr8 = malloc(40);
 if (ptr8)
 {
 m = 0;
 ptr6 = ptr8;
 do
 {
 *((unsigned int *)ptr6) = m;
 m += 3;
 ptr6 = (unsigned int *)ptr6 + 1;
 } while (m != 30);
 v11 = ((unsigned int *)ptr8)[5];
 free(ptr8);
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v11);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 ptr = malloc(16);
 if (ptr)
 {
 ptr->field_0 = 10;
 ptr3 = malloc(16);
 ptr->field_8 = ptr3;
 if (ptr3)
 {
 ptr3->field_0 = 20;
 ptr3->field_8 = 0;
 v26 = 0;
 }
 else
 {
 free(ptr);
 v26 = (unsigned long long)4294967294;
 }
 }
 else
 {
 v26 = (unsigned long long)4294967295;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v26);
 if (ptr)
 {
 free(ptr->field_8);
 free(ptr);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 ptr4 = malloc(20);
 if (ptr4)
 {
 off = 0;
 do
 {
 ptr4[off].field_0 = off;
 off += 1;
 } while (off != 5);
 v31 = ptr4[2].field_0;
 }
 else
 {
 v31 = 4294967295;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v31);
 printf("HEAP-L3-04 (dangling_pointer): ");
 result = fork();
 if (!result)
 {
 printf("%d\n", dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 else if (result > 0)
 {
 waitpid(result, &v0, 0);
 v33 = *((int *)((char *)&v0 + 4)) & 127;
 if (!((char)*((int *)((char *)&v0 + 4)) & 127))
 {
 v34 = "dangling_pointer: OK\n";
 }
 else if ((unsigned int)v33 * 0x1000000 + 0x1000000 >= 0x2000000)
 {
 v34 = "dangling_pointer: ERROR\n";
 }
 else
 {
 return v33;
 }
 return printf("%s", v34);
 }
 else
 {
 return (unsigned long long)perror("fork failed");
 }
}


// Function: sub_401cbb at 0x401cbb
void sub_401cbb()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x401cc0
unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x401cd0
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_401cd9 at 0x401cd9
void sub_401cd9(unsigned long a0)
{
 global_array_access((unsigned int)a0);
 return;
}


// Function: global_array_access at 0x401ce0
unsigned long long global_array_access(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 9)
 v1 = global_array[a0];
 return v1;
}


// Function: sub_401cf8 at 0x401cf8
void sub_401cf8(unsigned long a0)
{
 static_local();
 return;
}


// Function: static_local at 0x401d00
long long static_local(unsigned int a0)
{
 static_local_counter = (!a0 ? static_local_counter + 1 : 0);
 return static_local_counter;
}


// Function: sub_401d17 at 0x401d17
void sub_401d17(unsigned long a0)
{
 call_static_func((unsigned int)a0);
 return;
}


// Function: call_static_func at 0x401d20
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_401d27 at 0x401d27
void sub_401d27()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x401d30
int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_401d3d at 0x401d3d
void sub_401d3d()
{
 call_extern_func();
 return;
}


// Function: call_extern_func at 0x401d40
void call_extern_func()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 extern_function(5);
 return;
}


// Function: sub_401d4d at 0x401d4d
void sub_401d4d()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x401d50

int read_const_data()
{
 return const_string.field_4 + 42;
}


// Function: sub_401d5f at 0x401d5f
void sub_401d5f()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x401d60
unsigned long long access_bss_var()
{
 return 0;
}


// Function: sub_401d63 at 0x401d63
void sub_401d63()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x401d70
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: sub_401d73 at 0x401d73
void sub_401d73()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x401d80
unsigned long long global_struct_access()
{
 return 30;
}


// Function: sub_401d86 at 0x401d86
void sub_401d86(unsigned long a0)
{
 set_file_static((unsigned int)a0);
 return;
}


// Function: set_file_static at 0x401d90
void set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return;
}


// Function: sub_401d97 at 0x401d97
void sub_401d97()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x401da0
int get_file_static()
{
 return file_scope_static;
}


// Function: sub_401da7 at 0x401da7
void sub_401da7(unsigned long a0)
{
 set_global_callback(a0);
 return;
}


// Function: set_global_callback at 0x401db0
void set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return;
}


// Function: sub_401db8 at 0x401db8
void sub_401db8()
{
 call_global_callback();
 return;
}


// Function: call_global_callback at 0x401dc0
typedef struct struct_func_ptr {
 unsigned long long field_0;
} struct_func_ptr;

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((func_ptr_t)global_func_ptr)(0);
}


// Function: sub_401dd8 at 0x401dd8
void sub_401dd8(unsigned long a0)
{
 unsigned int *ptr = (unsigned int *)(uintptr_t)a0;
 global_heap_store(ptr);
 return;
}


// Function: global_heap_store at 0x401de0
unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: sub_401df5 at 0x401df5
void sub_401df5()
{
 static_complex_init();
 return;
}


// Function: static_complex_init at 0x401e00
unsigned long long static_complex_init()
{
 return 15;
}


// Function: sub_401e06 at 0x401e06
void sub_401e06(unsigned long a0)
{
 tls_access((unsigned int)a0);
 return;
}


// Function: tls_access at 0x401e10
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401e14 at 0x401e14
void sub_401e14()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x401e20
unsigned long long init_order_test()
{
 return 20;
}


// Function: sub_401e26 at 0x401e26
void sub_401e26()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x401e30
typedef struct struct_const_str2 {
 char padding_0[4];
 char field_4;
} struct_const_str2;

extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_403615;
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;
extern unsigned int *global_heap_ptr;
extern unsigned int static_local_counter;

int test_static_global()
{
 unsigned long v2; // rsi
 unsigned long v3; // rsi
 unsigned int v0; // [bp-0xc]

 puts(&g_403615);
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
 printf("STM-L2-03 (read_const_data): %d\n", const_string.field_4 + 42);
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


// Function: sub_401ffa at 0x401ffa
void sub_401ffa(unsigned long a0)
{
 double_value((unsigned int)a0);
 return;
}


// Function: double_value at 0x402000
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402004 at 0x402004
void sub_402004(unsigned long a0)
{
 memop_memset();
 return;
}


// Function: memop_memset at 0x402010
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


// Function: sub_402035 at 0x402035
void sub_402035(unsigned long a0)
{
 memop_memcpy();
 return;
}


// Function: memop_memcpy at 0x402040
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


// Function: sub_402077 at 0x402077
void sub_402077(unsigned long a0)
{
 memop_memmove();
 return;
}


// Function: memop_memmove at 0x402080
unsigned long long memop_memmove(struct_0_memmove *a0, unsigned long a1)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_1, (const char *)a0, a1 - 1);
 return a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4020ad at 0x4020ad
void sub_4020ad(unsigned long a0)
{
 (void)a0;
 memop_memcmp((void*)0, (void*)0, 0);
 return;
}


// Function: memop_memcmp at 0x4020b0
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


// Function: sub_4020df at 0x4020df
void sub_4020df(unsigned long a0)
{
 memop_bzero();
 return;
}


// Function: memop_bzero at 0x4020e0
unsigned long long memop_bzero(char *a0, unsigned long n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: sub_4020fe at 0x4020fe
void sub_4020fe(unsigned long a0)
{
 memop_bcopy();
 return;
}


// Function: memop_bcopy at 0x402100
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


// Function: sub_402128 at 0x402128
void sub_402128(unsigned long a0)
{
 memop_unaligned_access();
 return;
}


// Function: memop_unaligned_access at 0x402130
unsigned long long memop_unaligned_access(struct_0_unaligned *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: sub_40213f at 0x40213f
void sub_40213f(unsigned long a0)
{
 memop_memory_barrier();
 return;
}


// Function: memop_memory_barrier at 0x402140
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __asm__ __volatile__("" ::: "memory");
 return *(a0) * 2;
}


// Function: sub_402153 at 0x402153
void sub_402153()
{
 test_memory_op_functions();
 return;
}


// Function: test_memory_op_functions at 0x402160
extern char g_403639;

int test_memory_op_functions()
{
 unsigned int v0; // [bp-0x14]
 char v1[16]; // [bp-0x10]
 char v2[15]; // [bp-0xf]

 puts("Testing memory operation functions");
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


// Function: sub_402238 at 0x402238
void sub_402238()
{
 main();
 return;
}


// Function: main at 0x402240
unsigned int main()
{
 test_stack_memory(0, 0, 0, 0, 0, 0, 0);
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_402259 at 0x40402259
void sub_402259(unsigned long a0)
{
 extern_function_noargs();
 return;
}


// Function: extern_function at 0x402260
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}

unsigned int extern_function_noargs()
{
 return extern_function(5);
}



/* CRT stub function _fini removed by preprocessor */


