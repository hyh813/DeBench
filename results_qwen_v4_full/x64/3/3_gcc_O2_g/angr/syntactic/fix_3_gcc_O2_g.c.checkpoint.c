// Angr Decompilation of 3_gcc_O2_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdatomic.h>
#include <unistd.h>
#include <sys/wait.h>

typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_1;

typedef struct struct_2 {
 unsigned long long field_0;
 unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
 unsigned long long field_8;
} struct_3;

typedef struct struct_4 {
 unsigned long long field_0;
 unsigned long long field_8;
} struct_4;

extern struct_0 *g_405fe8;

// Global variable definitions
unsigned int counter_1 = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
unsigned int global_counter = 0;
unsigned long long global_func_ptr = 0;
struct_0 const_string_storage = {42, 0, 0};
struct_0 *const_string = &const_string_storage;
char g_403688 = 0;
char g_4033f0 = 0;
char g_4033c8 = 0;
char g_403004 = 0;
char g_403198 = 0;
char g_4031a8 = 0;
unsigned int global_array[4] = {0};
char g_4030e6 = 0;
char g_403438 = 0;
unsigned long long g_405f50 = 0;
unsigned long long g_405f58 = 0;

// Forward declarations
int __printf_chk(int flag, const char *format, ...);
void __cxa_finalize(void *dso_handle);
pid_t fork(void);
pid_t waitpid(pid_t pid, int *wstatus, int options);
void exit(int status);
void perror(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
unsigned int double_value(unsigned int a0);
int local_vars(unsigned int a0);
long long local_array(unsigned long a0);
unsigned int local_struct(unsigned int a0);
unsigned long long address_of_local(unsigned int *ptr);
long long large_stack_frame();
unsigned long long vla_stack(unsigned int a0);
unsigned long long alloca_usage(unsigned int a0);
unsigned long long stack_alias();
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
unsigned long long dangling_pointer();
unsigned long long double_free(unsigned int *a0);
unsigned int heap_overflow();
unsigned int global_var_access();
unsigned int global_var_read();
unsigned long long global_array_access();
unsigned long long static_local();
int call_static_func();
int access_extern_global();
void call_extern_func();
int read_const_data();
unsigned long long access_bss_var();
unsigned long long access_bss_buffer();
unsigned long long global_struct_access();
void set_file_static();
int get_file_static();
void set_global_callback();
unsigned long long call_global_callback();
unsigned long long global_heap_store();
unsigned long long static_complex_init();
unsigned int tls_access();
unsigned long long init_order_test();
unsigned long long memop_memset(void* a0, unsigned long a1, unsigned int a2);
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long a2);
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1);
unsigned long long memop_memcmp();
unsigned long long memop_bzero();
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2);
unsigned long long memop_unaligned_access(struct_0 *a0);
unsigned long long memop_memory_barrier(unsigned int *a0);
static unsigned int extern_function(unsigned int a0);
unsigned long long test_heap_memory(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5);
long long test_memory_op_functions(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5);
int test_static_global();

// Function: extern_function
static unsigned int extern_function(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405f50;
 return;
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_401020();
 return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_401020();
 return;
}


// Function: sub_40108f at 0x40108f
void sub_40108f()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
void sub_401090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_401020();
 return;
}


// Function: sub_40109f at 0x40109f
void sub_40109f()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
void sub_4010a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_401020();
 return;
}


// Function: sub_4010af at 0x4010af
void sub_4010af()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
void sub_4010b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_401020();
 return;
}


// Function: sub_4010bf at 0x4010bf
void sub_4010bf()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_401020();
 return;
}


// Function: sub_4010cf at 0x4010cf
void sub_4010cf()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
void sub_4010d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_401020();
 return;
}


// Function: sub_4010df at 0x4010df
void sub_4010df()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
void sub_4010e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_401020();
 return;
}


// Function: sub_4010ef at 0x4010ef
void sub_4010ef()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
void sub_4010f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_401020();
 return;
}


// Function: sub_4010ff at 0x4010ff
void sub_4010ff()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
void sub_401100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_401020();
 return;
}


// Function: sub_40110f at 0x40110f
void sub_40110f()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
void sub_401110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_401020();
 return;
}


// Function: sub_40111f at 0x40111f
void sub_40111f()
{
 __cxa_finalize(NULL);
 return;
}


// Function: main at 0x401220
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_stack_memory();
 test_heap_memory(v1, v2, v3, v4, v5, v6);
 test_static_global();
 test_memory_op_functions(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_40124b at 0x40124b
void sub_40124b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401275 at 0x401275
void sub_401275()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4199029
}






/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401325 at 0x401325
void sub_401325()
{
}






/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401339 at 0x401339
void sub_401339(unsigned long a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x401340
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401348 at 0x401348
void sub_401348(unsigned long a0)
{
 local_vars(a0);
 return;
}


// Function: local_vars at 0x401350
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_401359 at 0x401359
void sub_401359(unsigned long a0)
{
 local_array(a0);
 return;
}


// Function: local_array at 0x401360
long long local_array(unsigned long a0)
{
 unsigned long long v4; // rdx
 char *cur; // rax
 char v0; // [bp-0x38]
 char v1; // [bp-0x24]
 char v2; // [bp-0x10]

 v4 = 0;
 cur = &v0;
 do
 {
 *((unsigned int *)&cur[0]) = v4;
 cur += 1;
 v4 += a0;
 } while (cur != &v2);
 return *((int *)&v1);
}


// Function: sub_4013ab at 0x4013ab
void sub_4013ab(unsigned long a0)
{
 local_struct(a0);
 return;
}


// Function: local_struct at 0x4013b0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_4013b8 at 0x4013b8
void sub_4013b8(unsigned long a0)
{
 address_of_local((unsigned int *)a0);
 return;
}


// Function: address_of_local at 0x4013c0
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x4013d0
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4013d9 at 0x4013d9
void sub_4013d9()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x4013e0
long long large_stack_frame()
{
 unsigned long long i; // rax
 unsigned long v3; // [bp-0x818]
 char v0; // [bp-0x418]

 i = 0;
 do
 {
 *((char *)&v3 + i) = i;
 i += 1;
 } while (i != 0x800);
 return v0;
}


// Function: sub_40143f at 0x40143f
void sub_40143f(unsigned long a0)
{
 vla_stack(a0);
 return;
}


// Function: vla_stack at 0x401440
unsigned long long vla_stack(unsigned int a0)
{
 unsigned long v3; // rax
 char *i; // rcx
 unsigned long v5; // rdx
 unsigned long idx; // rax
 unsigned long v7; // [bp-0x2018]
 char v0; // [bp-0x1018]
 char v1; // [bp-0x18]

 if (a0 - 1 > 999)
 return 4294967295;
 v3 = a0 * 4 + 15;
  v5 = (unsigned long)v3 & 0xfffffff0 & 4095;
 char *vvar_55 = (char *)((unsigned long)&v0 - v5);
 if (v5)
  *((long long *)(vvar_55 + v5 - 8)) = *((long long *)(vvar_55 + v5 - 8));
 idx = 0;
 do
 {
  *((unsigned int *)(vvar_55 + idx * 4)) = (unsigned int)idx * 2;
  idx += 1;
 } while (idx != a0);
 return *((int *)(vvar_55 + (a0 >> 1) * 4));
}


// Function: sub_4014e8 at 0x4014e8
void sub_4014e8()
{
}


// Function: sub_401504 at 0x401504
void sub_401504(unsigned long a0)
{
 alloca_usage(a0);
 return;
}


// Function: alloca_usage at 0x401510
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long v3; // rax
 char *i; // rcx
 unsigned long v5; // rdx
 unsigned int j; // eax
 unsigned int *cur; // rsi
 unsigned long v8; // [bp-0x2018]
 char v0; // [bp-0x1018]
 char v1; // [bp-0x18]

 if (a0 <= 0)
 return 4294967295;
 v3 = a0 * 4 + 23;
 v5 = (unsigned long)v3 & 0xfffffff0 & 4095;
 char *vvar_54 = (char *)((unsigned long)&v0 - v5);
 if (v5)
 *((long long *)(vvar_54 + v5 - 8)) = *((long long *)(vvar_54 + v5 - 8));
 j = 0;
 cur = (unsigned int *)(((unsigned long)(vvar_54 + 15) & 0xfffffffffffffff0));
 do
 {
 *(cur) = j;
 j += 3;
 cur += 1;
 } while (j != a0 * 3);
 return *((int *)(((unsigned long)(vvar_54 + 15) & 0xfffffffffffffff0) + (a0 >> 1) * 4));
}


// Function: sub_4015b6 at 0x4015b6
void sub_4015b6()
{
}


// Function: sub_4015d4 at 0x4015d4
void sub_4015d4()
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x4015e0
unsigned long long stack_alias()
{
 return 20;
}


// Function: sub_4015ea at 0x4015ea
void sub_4015ea()
{
 test_stack_memory();
 return;
}


// Function: test_stack_memory at 0x4015f0
extern char g_403004;

int test_stack_memory()
{
 puts(&g_403004);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: sub_4016eb at 0x4016eb
void sub_4016eb(unsigned long a0)
{
 heap_basic(a0);
 return;
}


// Function: heap_basic at 0x4016f0
unsigned int heap_basic(unsigned int a0)
{
 unsigned long v1; // rbx
 void* ptr1; // rax
 void* ptr2; // rdi
 unsigned long idx; // rdx

 v1 = a0;
 ptr1 = malloc(v1 * 4);
 if (!ptr1)
 return 4294967295;
 ptr2 = ptr1;
 if ((unsigned int)v1 > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr2 + 4 * idx)) = (unsigned int)idx * 2;
 idx += 1;
 } while (idx != v1);
 }
 free(ptr2);
 return *((int *)((char *)ptr2 + 4 * ((((v1 & 4294967295) >> 31 & 4294967295) + (v1 & 4294967295) & 4294967295) >> 1 & 4294967295)));
}


// Function: sub_401751 at 0x401751
void sub_401751(unsigned long a0)
{
 heap_calloc(a0);
 return;
}


// Function: heap_calloc at 0x401760
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *ptr1; // rax
 unsigned int v2; // r12d
 unsigned int *ptr2; // rdx

 ptr1 = calloc(a0, 4);
 if (!ptr1)
 return 4294967295;
 if (a0 > 0)
 {
 v2 = 0;
 ptr2 = ptr1;
 do
 {
 v2 += *(ptr2);
 ptr2 += 1;
 } while (ptr2 != &ptr1[a0]);
 }
 else
 {
 v2 = 0;
 }
 free(ptr1);
 return v2;
}


// Function: sub_4017a7 at 0x4017a7
void sub_4017a7()
{
}


// Function: sub_4017bb at 0x4017bb
void sub_4017bb()
{
 heap_realloc();
 return;
}


// Function: heap_realloc at 0x4017c0
unsigned int heap_realloc()
{
 struct_0 *ptr1; // rax
 struct_0 *ptr2; // rbp
 struct_1 *ptr3; // rax

 ptr1 = malloc(20);
 if (!ptr1)
 return 4294967295;
 ptr2 = ptr1;
 ptr2->field_0 = 8589934593;
 ptr2->field_8 = 17179869187;
 ptr2->field_10 = 5;
 ptr3 = realloc(ptr2, 40);
 if (!ptr3)
 {
 free(ptr2);
 return 4294967294;
 }
 free(ptr3);
 return (ptr3->field_8 != 3 ? 4294967293 : 50);
}


// Function: sub_40184e at 0x40184e
void sub_40184e(unsigned long a0)
{
 heap_array(a0);
 return;
}


// Function: heap_array at 0x401850
unsigned int heap_array(unsigned int a0)
{
 unsigned long v1; // rbx
 unsigned int *ptr1; // rax
 unsigned int i; // edx
 unsigned int *ptr2; // rcx

 v1 = a0;
 ptr1 = malloc(v1 * 4);
 if (!ptr1)
 return 4294967295;
 if ((unsigned int)v1 > 0)
 {
 i = 0;
 ptr2 = ptr1;
 do
 {
 *(ptr2) = i;
 i += 3;
 ptr2 += 1;
 } while (i != (unsigned int)v1 * 3);
 }
 free(ptr1);
 return ptr1[(((v1 & 4294967295) >> 31) + v1 & 4294967295) >> 1 & 4294967295];
}


// Function: sub_4018b3 at 0x4018b3
void sub_4018b3(unsigned long a0)
{
 heap_struct(a0);
 return;
}


// Function: heap_struct at 0x4018c0
unsigned int heap_struct(unsigned int a0)
{
 void* ptr; // rax

 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: sub_4018f9 at 0x4018f9
void sub_4018f9(unsigned long a0)
{
 heap_nested((struct_1 **)a0);
 return;
}


// Function: heap_nested at 0x401900
unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr3; // rax
 struct_3 *ptr; // rbp
 struct_4 *p; // rax

 ptr3 = malloc(16);
 *(addr) = ptr3;
 if (!ptr3)
 return 4294967295;
 ptr3->field_0 = 10;
 ptr = ptr3;
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


// Function: sub_401966 at 0x401966
void sub_401966()
{
 linked_list_heap();
 return;
}


// Function: linked_list_heap at 0x401970
unsigned int linked_list_heap()
{
 struct_0 *v1; // rax
 unsigned int v2; // ebp
 struct_0 *ptr3; // rbx
 struct_0 *v10; // rbx
 struct_0 *addr; // rbx
 struct_0 *v12; // rbx
 struct_0 *v3; // rbx
 struct_0 *ptr4; // rax
 struct_0 *p; // rax
 unsigned int v6; // r12d
 struct_0 *ptr5; // rax

 v1 = NULL;
 v2 = 0;
 v3 = NULL;
 while (1)
 {
 ptr4 = v1;
 p = malloc(16);
 if (!p)
 break;
 p->field_0 = v2;
 p->field_8 = NULL;
 if (v3)
 ptr4->field_8 = p;
 else
 v3 = p;
 v2 += 10;
 v1 = p;
 if (v2 == 50)
 {
 v6 = 0;
 ptr5 = v3;
 do
 {
 v6 += ptr5->field_0;
 ptr5 = ptr5->field_8;
 } while (ptr5->field_8);
 do
 {
 ptr3 = v3;
 v10 = ptr3->field_8;
 free(ptr3);
 v3 = v10;
 } while (ptr3->field_8);
 return v6;
 }
 }
 if (v3)
 {
 do
 {
 addr = v3;
 v12 = addr->field_8;
 free(addr);
 v3 = v12;
 } while (addr->field_8);
 }
 return 4294967295;
}


// Function: sub_4019e1 at 0x4019e1
void sub_4019e1()
{
}


// Function: sub_401a0b at 0x401a0b
void sub_401a0b(unsigned long a0)
{
 create_tree_node(a0);
 return;
}


// Function: create_tree_node at 0x401a10
struct_0 * create_tree_node(unsigned int a0)
{
 struct_0 *ptr1; // rax

 ptr1 = malloc(24);
 if (!ptr1)
 return ptr1;
 ptr1->field_0 = a0;
 ptr1->field_8 = 0;
 ptr1->field_10 = 0;
 return ptr1;
}


// Function: sub_401a3a at 0x401a3a
void sub_401a3a()
{
 tree_heap_traversal();
 return;
}


// Function: tree_heap_traversal at 0x401a40
unsigned long long tree_heap_traversal()
{
 void* ptr1; // rax
 void* p; // rbp
 void* ptr2; // r12
 void* ptr3; // r13
 void* ptr4; // rax

 ptr1 = malloc(24);
 if (!ptr1)
 return 4294967295;
 p = ptr1;
 ptr2 = malloc(24);
 if (ptr2)
 {
 ptr3 = malloc(24);
 if (ptr3)
 {
 free(ptr3);
 free(ptr2);
 free(p);
 return 60;
 }
 free(ptr2);
 }
 else
 {
 ptr4 = malloc(24);
 if (ptr4)
 free(ptr4);
 }
 free(p);
 return 4294967294;
}


// Function: sub_401aa2 at 0x401aa2
void sub_401aa2()
{
}


// Function: sub_401ad8 at 0x401ad8
void sub_401ad8(unsigned long a0)
{
 memory_leak(a0);
 return;
}


// Function: memory_leak at 0x401ae0
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v1; // rbx
 unsigned long long ptr; // rax
 unsigned long idx; // rdx

 v1 = a0;
 ptr = malloc(v1 * 4);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v1 <= 0)
 return *((int *)(ptr + ((((v1 & 4294967295) >> 31 & 4294967295) + (v1 & 4294967295) & 4294967295) >> 1 & 4294967295) * 4));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while (idx != v1);
 return *((int *)(ptr + ((((v1 & 4294967295) >> 31 & 4294967295) + (v1 & 4294967295) & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: sub_401b37 at 0x401b37
void sub_401b37()
{
 dangling_pointer();
 return;
}


// Function: dangling_pointer at 0x401b40
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // rax

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x401b80
unsigned long long double_free(unsigned int *a0)
{
 void* ptr; // rax

 if (a0)
 return *(a0);
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: sub_401b8c at 0x401b8c
void sub_401b8c()
{
}


// Function: sub_401bbf at 0x401bbf
void sub_401bbf()
{
 heap_overflow();
 return;
}


// Function: heap_overflow at 0x401bc0
unsigned int heap_overflow()
{
 unsigned int *ptr1; // rax
 unsigned int i; // edx
 unsigned int *ptr2; // rcx

 ptr1 = malloc(40);
 if (!ptr1)
 return 4294967295;
 i = 0;
 ptr2 = ptr1;
 do
 {
 *(ptr2) = i;
 i += 100;
 ptr2 += 1;
 } while (i != 1100);
 free(ptr1);
 return *(ptr1);
}


// Function: sub_401c05 at 0x401c05
void sub_401c05(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 test_heap_memory(a0, a1, a2, a3, a4, a5);
 return;
}


// Function: test_heap_memory at 0x401c10
extern char g_4030e6;
extern char g_403198;
extern char g_4031a8;
extern char g_4033c8;
extern char g_4033f0;

unsigned long long test_heap_memory(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned int *ptr1; // rax
 unsigned int *p; // rdi
 unsigned int k; // edx
 unsigned int *ptr; // rax
 unsigned int *ptr5; // rcx
 unsigned int v16; // r12d
 void* ptr_1; // rax
 unsigned long long v18; // rdx
 struct_1 *addr; // r12
 struct_2 *ptr3; // rax
 unsigned long long v21; // rdx
 unsigned long long off; // rdx
 struct_3 *ptr_2; // rax
 unsigned long long v25; // rdx
 unsigned int result; // eax
 unsigned int v27; // edx
 unsigned long v28; // fs
 struct_0 *ptr4; // r12
 unsigned long v30; // rdx
 unsigned int v6; // r12d
 unsigned int *ptr_3; // rax
 unsigned int v8; // r12d
 unsigned int *ptr7; // rdx
 unsigned int *ptr6; // rax
 unsigned int v0[1]; // [bp-0x14]
 unsigned long v1; // [bp-0x10]

 puts(&g_4030e6);
 ptr1 = malloc(40);
 if (ptr1)
 {
 p = ptr1;
 off = 0;
 do
 {
 p[off] = (unsigned int)off * 2;
 off += 1;
 } while (off != 10);
 v6 = p[5];
 free(p);
 }
 else
 {
 v6 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 ptr = calloc(5, 4);
 if (ptr)
 {
 v8 = 0;
 ptr7 = ptr;
 do
 {
 v8 += *(ptr7);
 ptr7 += 1;
 } while (ptr + 5 != ptr7);
 free(ptr);
 }
 else
 {
 v8 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 ptr6 = malloc(40);
 if (ptr6)
 {
 k = 0;
 ptr5 = ptr6;
 do
 {
 ptr5[0] = k;
 k += 3;
 ptr5 = &ptr5[1];
 } while (k != 30);
 v16 = ptr6[5];
 free(ptr6);
 }
 else
 {
 v16 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 ptr = malloc(8);
 if (ptr)
 {
 free(ptr);
 v18 = 15;
 }
 else
 {
 v18 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
 addr = malloc(16);
 if (addr)
 {
 ptr3 = malloc(16);
 addr->field_8 = ptr3;
 if (ptr3)
 {
 ptr3->field_0 = 20;
 v21 = 0;
 ptr3->field_8 = 0;
 }
 else
 {
 free(addr);
 v21 = 4294967294;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested(&addr) & 4294967295);
 free(addr->field_8);
 free(addr);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 ptr4 = malloc(20);
 if (ptr4)
 {
 ptr4->field_10 = 4;
 v25 = 2;
 ptr4->field_0 = 0x100000000;
 ptr4->field_8 = 12884901890;
 }
 else
 {
 v25 = 4294967295;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v25);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 result = fork();
 if (!result)
 {
 ptr_3 = malloc(4);
 if (ptr_3)
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr_3);
 v30 = *(ptr_3);
 }
 else
 {
 v30 = 4294967295;
 }
 __printf_chk(1, &g_403198, v30);
 exit(0); /* do not return */
 }
 else if (result > 0)
 {
 waitpid(result, &v0, 0);
 v27 = *(v0) & 127;
 if (!((char)*(v0) & 127))
 {
 __printf_chk(1, &g_4033c8, *(v0) >> 8);
 }
 else if ((char)v27 + 1 > 1)
 {
 __printf_chk(1, &g_4033f0, v27);
 }
 return v1 - *((long long *)(40 + v28));
 }
 else
 {
 perror(&g_4031a8);
 return -1;
 }
}


// Function: sub_401eb9 at 0x401eb9
void sub_401eb9()
{
}


// Function: sub_401ee6 at 0x401ee6
void sub_401ee6()
{
}


// Function: sub_401f44 at 0x401f44
void sub_401f44()
{
}


// Function: sub_401fdd at 0x401fdd
void sub_401fdd()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x401fe0
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4()
{
 global_var_read();
 return;
}


// Function: global_var_read at 0x402000
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_40200d at 0x40200d
void sub_40200d(unsigned long a0)
{
 global_array_access();
 return;
}


// Function: global_array_access at 0x402010
extern unsigned int global_array[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 > 9)
 return 4294967295;
 return global_array[a0];
}


// Function: sub_402027 at 0x402027
void sub_402027()
{
}


// Function: sub_402036 at 0x402036
void sub_402036(unsigned long a0)
{
 static_local();
 return;
}


// Function: static_local at 0x402040
extern unsigned int counter_1;

unsigned long long static_local(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (!a0)
 v1 = counter_1 + 1;
 counter_1 = v1;
 return v1;
}


// Function: sub_40205a at 0x40205a
void sub_40205a(unsigned long a0)
{
 call_static_func();
 return;
}


// Function: call_static_func at 0x402060
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_402069 at 0x402069
void sub_402069()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x402070
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_40207e at 0x40207e
void sub_40207e()
{
 call_extern_func();
 return;
}


// Function: call_extern_func at 0x402080
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: sub_40208e at 0x40208e
void sub_40208e()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x402090
int read_const_data()
{
 return const_string->field_0 + 42;
}


// Function: sub_4020a3 at 0x4020a3
void sub_4020a3()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x4020b0
unsigned long long access_bss_var()
{
 return 0;
}


// Function: sub_4020b7 at 0x4020b7
void sub_4020b7()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x4020c0
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: sub_4020c7 at 0x4020c7
void sub_4020c7()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x4020d0
unsigned long long global_struct_access()
{
 return 30;
}


// Function: sub_4020da at 0x4020da
void sub_4020da(unsigned long a0)
{
 set_file_static();
 return;
}


// Function: set_file_static at 0x4020e0
extern unsigned int file_scope_static;

void set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return;
}


// Function: sub_4020eb at 0x4020eb
void sub_4020eb()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x4020f0
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: sub_4020fb at 0x4020fb
void sub_4020fb(unsigned long a0)
{
 set_global_callback();
 return;
}


// Function: set_global_callback at 0x402100
extern unsigned long long global_func_ptr;

void set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return;
}


// Function: sub_40210c at 0x40210c
void sub_40210c()
{
 call_global_callback();
 return;
}


// Function: call_global_callback at 0x402110
extern unsigned long long global_func_ptr;

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return global_func_ptr;
}


// Function: sub_40212e at 0x40212e
void sub_40212e(unsigned long a0)
{
 global_heap_store();
 return;
}


// Function: global_heap_store at 0x402130
unsigned long long global_heap_store()
{
 return 10;
}


// Function: sub_40213c at 0x40213c
void sub_40213c()
{
}


// Function: sub_402146 at 0x402146
void sub_402146()
{
 static_complex_init();
 return;
}


// Function: static_complex_init at 0x402150
unsigned long long static_complex_init()
{
 return 15;
}


// Function: sub_40215a at 0x40215a
void sub_40215a(unsigned long a0)
{
 tls_access();
 return;
}


// Function: tls_access at 0x402160
unsigned int tls_access()
{
 return 10;
}


// Function: sub_402168 at 0x402168
void sub_402168()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x402170
unsigned long long init_order_test()
{
 return 20;
}


// Function: sub_40217a at 0x40217a
void sub_40217a()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x402180
extern struct_0 *const_string;
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_403438;
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;

int test_static_global()
{
 unsigned long v1; // rdx
 unsigned long v2; // rdx

 puts(&g_403438);
 v1 = global_counter + 1;
 global_counter = global_counter + 1;
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v1);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 v2 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", v2);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", extern_function(5) & 4294967295);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string->field_0 + 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", global_heap_store() & 4294967295);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", tls_access() & 4294967295);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: sub_402389 at 0x402389
void sub_402389(unsigned long a0)
{
 memop_memset((void*)0, 0, 0);
 return;
}


// Function: memop_memset at 0x402390
unsigned long long memop_memset(void* a0, unsigned long a1, unsigned int a2)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1)
 {
 return *((char *)memset(a0, a2, a1));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4023b7 at 0x4023b7
void sub_4023b7()
{
}


// Function: sub_4023c6 at 0x4023c6
void sub_4023c6(unsigned long a0, unsigned long a1, unsigned long a2)
{
 memop_memcpy(a0, a1, a2);
 return;
}


// Function: memop_memcpy at 0x4023d0
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long a2)
{
 if (!(a1 && a2))
 {
 return 4294967295;
 }
 else if (a0)
 {
 return *((int *)(-4 + (char *)memcpy(a0, a1, a2) + (a2 & 18446744073709551612)));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4023ff at 0x4023ff
void sub_4023ff()
{
}


// Function: sub_402407 at 0x402407
void sub_402407(unsigned long a0)
{
 memop_memmove(a0, 0);
 return;
}


// Function: memop_memmove at 0x402410
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 > 1)
 {
 v0 = v2;
 memmove(&a0->field_0, a0, a1 - 1);
 return a0->field_0;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_402439 at 0x402439
void sub_402439()
{
}


// Function: sub_402446 at 0x402446
void sub_402446(unsigned long a0, unsigned long a1, unsigned long a2)
{
 memop_memcmp();
 return;
}


// Function: memop_memcmp at 0x402450
unsigned long long memop_memcmp()
{
 return 0;
}


// Function: sub_40248f at 0x40248f
void sub_40248f()
{
}


// Function: sub_402493 at 0x402493
void sub_402493(unsigned long a0)
{
 memop_bzero();
 return;
}


// Function: memop_bzero at 0x4024a0
unsigned long long memop_bzero()
{
 return 0;
}


// Function: sub_4024c5 at 0x4024c5
void sub_4024c5(unsigned long a0, unsigned long a1, unsigned long a2)
{
 memop_bcopy((void*)a0, (void*)a1, a2);
 return;
}


// Function: memop_bcopy at 0x4024d0
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2)
{
 if (!(a1 && a2))
 {
 return 4294967295;
 }
 else if (a0)
 {
 return *((char *)memmove(a1, a0, a2));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_402505 at 0x402505
void sub_402505()
{
}


// Function: sub_40250e at 0x40250e
void sub_40250e(unsigned long a0)
{
 memop_unaligned_access((struct_0 *)a0);
 return;
}


// Function: memop_unaligned_access at 0x402510
unsigned long long memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&a0->field_8);
}


// Function: sub_402523 at 0x402523
void sub_402523(unsigned long a0)
{
 memop_memory_barrier((unsigned int *)a0);
 return;
}


// Function: memop_memory_barrier at 0x402530
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 char v0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 atomic_exchange(&v0, *((long long *)&v0));
 return *(a0) * 2;
}


// Function: sub_40254c at 0x40254c
void sub_40254c(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 test_memory_op_functions(a0, a1, a2, a3, a4, a5);
 return;
}


// Function: test_memory_op_functions at 0x402550
extern char g_403688;

long long test_memory_op_functions(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned int v14; // eax
 unsigned long long v15; // rdx
 char v0; // [bp-0x158]
 unsigned int v1; // [bp-0x14c]
 unsigned long long v2; // [bp-0x148]
 unsigned int v3; // [bp-0x140]
 unsigned long long v4; // [bp-0x13c]
 unsigned int v5; // [bp-0x134]
 unsigned long long flag2; // [bp-0x12d]
 unsigned short result; // [bp-0x125]
 char v8; // [bp-0x123]
 char v9; // [bp-0x122]
 unsigned short v10; // [bp-0x11b]
 char flag1; // [bp-0x119]
 char v12[264]; // [bp-0x118]

 puts(&g_403688);
 strncpy(v12, "AAAAAAAAAA", 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 v10 = 25708;
 strncpy(&v8, "HelloWor", 8);
 flag1 = 0;
 memmove(&v9, &v8, 9);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 v2 = 8589934593;
 v3 = 3;
 v4 = 8589934593;
 v5 = 4;
 v14 = memcmp(&v2, &v4, 12);
 v15 = (v14 > 0 ? 1 : -(v14));
 __printf_chk(1, "MEMOP-L2-04: %d\n", (v14 > 0 ? 1 : -(v14)));
 result = 0;
 flag2 = 0;
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v1 = 5;
 atomic_exchange(&v0, *((long long *)&v0));
 return __printf_chk(1, "MEMOP-L3-02: %d\n", v1 * 2);
}


// Function: sub_40270a at 0x40270a
void sub_40270a(unsigned long a0)
{
 extern_function(a0);
 return;
}






/* CRT stub function _fini removed by preprocessor */


