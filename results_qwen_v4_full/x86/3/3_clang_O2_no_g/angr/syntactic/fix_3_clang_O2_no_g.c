// Angr Decompilation of 3_clang_O2_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdatomic.h>
#include <errno.h>

// atomic_int and memory_order are already defined in stdatomic.h

// Atomic operations are declared in stdatomic.h

// Additional function declarations for compilation
void exit(int status);
char *strncpy(char *dest, const char *src, size_t n);
int puts(const char *s);
int printf(const char *format, ...);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
pid_t fork(void);
pid_t waitpid(pid_t pid, int *status, int options);
void perror(const char *s);

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int field_0;
    void *field_4;
    char padding_0[256];
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    struct struct_3 *field_4;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
    unsigned int field_4;
} struct_3;

typedef unsigned int (*func_ptr_t)(unsigned int);

extern struct_0 *g_405ff4;

// Global variable declarations
unsigned int global_counter = 0;
unsigned int static_local_counter = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
func_ptr_t global_func_ptr = 0;
unsigned int global_heap_ptr = 0;
struct_0 *ptr = NULL;
struct_0 *const_string = NULL;

// External string variables (defined for compilation)
char g_4035c1[] = "Stack Memory Tests";
char g_40326d[] = "dangling pointer test\n";
char g_40327d[] = "normal exit\n";
char g_4032a2[] = "abnormal exit\n";
char g_4032e3[] = "waitpid error\n";
char g_4035df[] = "Heap Memory Tests";
char g_4035fd[] = "Static/Global Tests";
char g_403621[] = "Memory Operation Tests";

// GOT table placeholder
unsigned int _GLOBAL_OFFSET_TABLE_[20000] = {0};

// Forward declaration for _ccall
int _ccall(int a0, int a1, int a2, int a3, int a4);

// Definition for _ccall (system call wrapper)
int _ccall(int a0, int a1, int a2, int a3, int a4)
{
 return 0;
}

// Forward declarations
void frame_dummy(void);
int __do_global_ctors_aux(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
unsigned int extern_function(unsigned int a0);
unsigned int double_value(unsigned int a0);
unsigned int init_order_test(void);
unsigned int test_static_global(void);
int sub_402197(void);
int sub_401030(void);
int sub_401130(int a0);
void sub_401136();
void sub_40116b();
void sub_40116c();
void __x86_get_pc_thunk_bx();
void sub_401174();
void sub_4011b3();
void sub_4011b9();
void sub_401207();
void sub_40129a();
void __x86_get_pc_thunk_dx();
int __x86_get_pc_thunk_di(int a0, char *a1);
void sub_4012b1(unsigned int a0);
int local_vars(unsigned int a0);
void sub_4012ca(unsigned int a0);
unsigned int local_array(unsigned int a0);
void sub_4012d8(unsigned int a0);
unsigned int local_struct(unsigned int a0);
void sub_4012e8(unsigned int a0);
unsigned int address_of_local(unsigned int *ptr);
unsigned int address_of_array(unsigned int *a0);
void sub_401309(void);
int large_stack_frame(void);
int sub_40137b(void);
unsigned int vla_stack(unsigned int a0);
int sub_401426(void);
unsigned int alloca_usage(unsigned int a0);
void sub_4014cc(void);
unsigned int stack_alias(void);
int sub_4014d6(void);
int test_stack_memory(void);
int sub_401631(void);
unsigned int heap_basic(unsigned int a0);
int sub_4016f1(void);
unsigned int heap_calloc(unsigned int a0);
int sub_4017bc(void);
unsigned int heap_realloc(void);
int sub_40186f(void);
unsigned int heap_array(unsigned int a0);
void sub_401933(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
int sub_401948(void);
unsigned int heap_nested(unsigned int **ptr3);
int sub_4019bf(void);
unsigned int linked_list_heap(void);
void sub_401ac3(void);
void sub_401ae3(void);
void sub_401b03(void);
int sub_401b35(void);
unsigned int *create_tree_node(unsigned int a0);
void sub_401b79(void);
unsigned int tree_heap_traversal(void);
int sub_401b86(void);
unsigned int memory_leak(unsigned int a0);
int sub_401c46(void);
unsigned int dangling_pointer(void);
unsigned int double_free(unsigned int *a0);
void sub_401cb1(void);
unsigned int heap_overflow(void);
int sub_401cc3(void);
unsigned int test_heap_memory(void);
void sub_401f64(void);
unsigned int global_var_access(void);
void sub_401f8c(void);
unsigned int global_var_read(void);
void sub_401fa5(unsigned int a0);
unsigned int global_array_access(unsigned int a0);
void sub_401fd2(unsigned int a0);
unsigned int static_local(unsigned int a0);
void sub_402006(unsigned int a0);
int call_static_func(unsigned int a0);
void sub_40201a(void);
int access_extern_global(void);
int sub_402038(void);
void call_extern_func(void);
void sub_402061(void);
int read_const_data(void);
void sub_40208a(void);
unsigned int access_bss_var(void);
void sub_402093(void);
unsigned int access_bss_buffer(void);
void sub_4020a3(void);
unsigned int global_struct_access(void);
void sub_4020b6(unsigned int a0);
int set_file_static(unsigned int a0);
void sub_4020d7(void);
int get_file_static(void);
void sub_4020f3(unsigned int a0);
int set_global_callback(unsigned int a0);
int sub_402117(void);
unsigned int call_global_callback(unsigned int a0);
void sub_40214f(unsigned int a0);
unsigned int global_heap_store(unsigned int *a0);
void sub_402173(void);
unsigned int static_complex_init(void);
void sub_402186(unsigned int a0);
unsigned int tls_access(unsigned int a0);
unsigned int sub_402197(void);
unsigned int sub_4021a6(void);
void sub_4023bf(unsigned int a0);
int sub_4023c7(void);
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2);
int sub_40240e(void);
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n);
int sub_402455(void);
unsigned int memop_memmove(struct_0 *a0, unsigned int a1);
int sub_4024a3(void);
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2);
unsigned int memop_bzero(char *a0, unsigned int n);
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n);
unsigned int memop_unaligned_access(struct_0 *a0);
unsigned int memop_memory_barrier(unsigned int *a0);
int sub_402539(void);
void sub_402583(unsigned int a0);
void sub_4025a2(unsigned int a0);
int sub_4025c8(void);
unsigned int test_memory_op_functions(void);
int sub_4026f2(void);
unsigned int main(void);
void sub_40272b(unsigned int a0);
void sub_402738(void);
void sub_402782(void);

int _init()
{
 if (g_405ff4)
 ((void(*)())g_405ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(void)
{
 unsigned int local_ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = local_ptr[1];
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130(int a0)
{
 void* v1; // ebx

 (void)v1;
 (void)a0;
 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136(void)
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40116b at 0x40116b
void sub_40116b()
{
}


// Function: sub_40116c at 0x40116c
void sub_40116c(void)
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401170
void __x86_get_pc_thunk_bx(void)
{
 return;
}


// Function: sub_401174 at 0x401174
void sub_401174(void)
{
 deregister_tm_clones();
 return;
}



// Stub for deregister_tm_clones
void deregister_tm_clones(void)
{
}



// Function: sub_4011b3 at 0x4011b3
void sub_4011b3(void)
{
}


// Function: sub_4011b9 at 0x4011b9
void sub_4011b9(void)
{
 register_tm_clones();
 return;
}



// Stub for register_tm_clones
void register_tm_clones(void)
{
}


// Function: sub_401207 at 0x401207
void sub_401207(void)
{
 __do_global_dtors_aux();
 return;
}



// Stub for __do_global_dtors_aux
void __do_global_dtors_aux(void)
{
}


// Function: sub_40129a at 0x40129a
void sub_40129a(void)
{
 frame_dummy();
 return;
}



// Stub for frame_dummy
void frame_dummy(void)
{
}


// Stub for __do_global_ctors_aux
int __do_global_ctors_aux(void)
{
 return 0;
}


// Function: __x86_get_pc_thunk_dx at 0x4012a9
void __x86_get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x4012ad
int __x86_get_pc_thunk_di(int a0, char *a1)
{
 unsigned int v0; // eax

 return a0;
}


// Function: sub_4012b1 at 0x4012b1
void sub_4012b1(unsigned int a0)
{
 local_vars(a0);
 return;
}


// Function: local_vars at 0x4012c0
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_4012ca at 0x4012ca
void sub_4012ca(unsigned int a0)
{
 local_array(a0);
 return;
}


// Function: local_array at 0x4012d0
unsigned int local_array(unsigned int a0)
{
 return a0 * 5;
}


// Function: sub_4012d8 at 0x4012d8
void sub_4012d8(unsigned int a0)
{
 local_struct(a0);
 return;
}


// Function: local_struct at 0x4012e0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_4012e8 at 0x4012e8
void sub_4012e8(unsigned int a0)
{
 unsigned int val = a0;
 address_of_local(&val);
 return;
}


// Function: address_of_local at 0x4012f0
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x401300
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401309 at 0x401309
void sub_401309(void)
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x401310
int large_stack_frame()
{
 unsigned int i; // eax
 char v3; // [bp-0x800]
 char v4; // [bp-0x7ff]
 char v5; // [bp-0x7fe]
 char v6; // [bp-0x7fd]
 char v7; // [bp-0x7fc]
 char v8; // [bp-0x7fb]
 char v9; // [bp-0x7fa]
 unsigned long v10; // [bp-0x7f9]
 char v0; // [bp-0x400]

 i = 0;
 do
 {
 (&v3)[i] = i;
 (&v4)[i] = (char)i + 1;
 (&v5)[i] = (char)i + 2;
 (&v6)[i] = (char)i + 3;
 (&v7)[i] = (char)i + 4;
 (&v8)[i] = (char)i + 5;
 (&v9)[i] = (char)i + 6;
 *((char *)&v10 + i) = (char)i + 7;
 i += 8;
 } while (i != 0x800);
 return v0;
}


// Function: sub_40137b at 0x40137b
unsigned int sub_40137b(void)
{
 return vla_stack(10);
}


// Function: vla_stack at 0x401380
unsigned int vla_stack(unsigned int a0)
{
 char *ptr; // eax
 unsigned int result; // esi
 unsigned int i; // edi
 unsigned int index; // edx
 unsigned int idx; // edi
 char v0; // [bp-0x1c]
 char *v1; // [bp-0x14]

 if (a0 - 1001 < 4294966296)
 return 4294967295;
 v1 = &v0;
 ptr = &(&v0)[-1 * (a0 * 4 + 15 & 0xfffffff0)];
 result = a0 & 3;
 i = 0;
 if (a0 - 1 >= 3)
 {
 i = 0;
 index = 4;
 do
 {
 *((unsigned int *)&ptr[8 + 2 * index]) = index - 4;
 *((unsigned int *)&ptr[4 + 2 * index]) = index - 2;
 *((unsigned int *)&ptr[2 * index]) = index;
 *((unsigned int *)&ptr[4 + 2 * index]) = index + 2;
 i += 4;
 index += 8;
 } while ((a0 & 0xfffffffc) != i);
 }
 if (!result)
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
 idx = i * 2;
 do
 {
 *((unsigned int *)&ptr[2 * idx]) = idx;
 idx += 2;
 result -= 1;
 } while (result != 1);
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
}


// Function: sub_401426 at 0x401426
unsigned int sub_401426(void)
{
 return alloca_usage(15);
}


// Function: alloca_usage at 0x401430
unsigned int alloca_usage(unsigned int a0)
{
 char *ptr; // ecx
 unsigned int result; // edx
 unsigned int index; // esi
 unsigned int v4; // ebx
 unsigned int v5; // esi
 unsigned int idx; // ebx
 char v0; // [bp-0x1c]

 if (a0 <= 0)
 return 4294967295;
 ptr = &(&v0)[-1 * (a0 * 4 + 15 & 0xfffffff0)];
 result = a0 & 3;
 index = 0;
 if (a0 - 1 >= 3)
 {
 index = 0;
 v4 = 6;
 do
 {
 *((unsigned int *)&ptr[4 * index]) = v4 - 6;
 *((unsigned int *)&ptr[4 + 4 * index]) = v4 - 3;
 *((unsigned int *)&ptr[8 + 4 * index]) = v4;
 *((unsigned int *)&ptr[12 + 4 * index]) = v4 + 3;
 index += 4;
 v4 += 12;
 } while ((a0 & 0xfffffffc) != index);
 }
 if (!result)
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
 v5 = index * 3;
 idx = 0;
 do
 {
 *((unsigned int *)&ptr[4 * idx + 4 * index]) = v5;
 idx += 1;
 v5 += 3;
 } while (result != idx);
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
}


// Function: sub_4014cc at 0x4014cc
void sub_4014cc(void)
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x4014d0
unsigned int stack_alias()
{
 return 20;
}


// Function: sub_4014d6 at 0x4014d6
int sub_4014d6(void)
{
 test_stack_memory();
 return 0;
}


// Function: test_stack_memory at 0x4014e0
int test_stack_memory()
{
 unsigned int i; // eax
 unsigned int v0; // [bp-0x808]
 char v4; // [bp-0x804]
 char v5; // [bp-0x803]
 char v6; // [bp-0x802]
 char v7; // [bp-0x801]
 char v8; // [bp-0x800]
 char v9; // [bp-0x7ff]
 char v10; // [bp-0x7fe]
 unsigned long v11; // [bp-0x7fd]
 char v1; // [bp-0x404]

 puts(&g_4035c1);
 v0 = 20;
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v0 = 10;
 printf("MEM-L1-02 (local_array): %d\n", v0);
 v0 = 15;
 printf("MEM-L1-03 (local_struct): %d\n", v0);
 v0 = 42;
 printf("MEM-L1-04 (address_of_local): %d\n", v0);
 v0 = 2;
 printf("MEM-L1-05 (address_of_array): %d\n", v0);
 i = 0;
 do
 {
 (&v4)[i] = i;
 (&v5)[i] = (char)i + 1;
 (&v6)[i] = (char)i + 2;
 (&v7)[i] = (char)i + 3;
 (&v8)[i] = (char)i + 4;
 (&v9)[i] = (char)i + 5;
 (&v10)[i] = (char)i + 6;
 *((char *)&v11 + i) = (char)i + 7;
 i += 8;
 } while (i != 0x800);
 v0 = v1;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v0);
 v0 = 10;
 printf("MEM-L2-02 (vla_stack): %d\n", v0);
 v0 = 15;
 printf("MEM-L2-03 (alloca_usage): %d\n", v0);
 v0 = 20;
 return printf("MEM-L2-04 (stack_alias): %d\n", v0);
}


// Function: sub_401631 at 0x401631
unsigned int sub_401631(void)
{
 return heap_basic(10);
}


// Function: heap_basic at 0x401640
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // esi
 void* ptr; // eax
 unsigned int v2; // esi
 unsigned int result; // ecx
 unsigned int i; // edx
 unsigned int index; // ebp
 unsigned int idx; // edx

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 v2 = v0;
 if (v2 > 0)
 {
 result = v0 & 3;
 i = 0;
 if (v0 - 1 >= 3)
 {
 i = 0;
 index = 4;
 do
 {
 *((unsigned int *)(-8 + (char *)ptr + 2 * index)) = index - 4;
 *((unsigned int *)(-4 + (char *)ptr + 2 * index)) = index - 2;
 *((unsigned int *)((char *)ptr + 2 * index)) = index;
 *((unsigned int *)(4 + (char *)ptr + 2 * index)) = index + 2;
 i += 4;
 index += 8;
 } while ((a0 & 0xfffffffc) != i);
 }
 v2 = a0;
 if (result)
 {
 idx = i * 2;
 do
 {
 *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
 idx += 2;
 result -= 1;
 v2 = a0;
 } while (result != 1);
 }
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((v2 >> 31) + v2 & 4294967294)));
}


// Function: sub_4016f1 at 0x4016f1
unsigned int sub_4016f1(void)
{
 return heap_calloc(10);
}


// Function: heap_calloc at 0x401700
unsigned int heap_calloc(unsigned int a0)
{
 void* ptr; // eax
 unsigned int v1; // esi
 unsigned int v2; // edi
 unsigned int result; // ecx
 unsigned int v4; // edx
 unsigned int i; // edx
 unsigned int idx; // edi

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 if (a0 >= 2)
 {
 v2 = a0 - 1;
 result = v2 & 7;
 if (a0 - 2 < 7)
 {
 v1 = 0;
 v4 = 1;
 if (result)
 goto LABEL_40178e;
 }
 else
 {
 v1 = 0;
 i = 0;
 do
 {
 v1 = v1 + *((int *)(4 + (char *)ptr + 4 * i)) + *((int *)(8 + (char *)ptr + 4 * i)) + *((int *)(12 + (char *)ptr + 4 * i)) + *((int *)(16 + (char *)ptr + 4 * i)) + *((int *)(20 + (char *)ptr + 4 * i)) + *((int *)(24 + (char *)ptr + 4 * i)) + *((int *)(28 + (char *)ptr + 4 * i)) + *((int *)(32 + (char *)ptr + 4 * i));
 i += 8;
 } while ((v2 & 0xfffffff8) != i);
 v4 = i + 1;
 if (result)
 {
LABEL_40178e:
 idx = 0;
 do
 {
 v1 += *((int *)((char *)ptr + 4 * v4 + 4 * idx));
 idx += 1;
 } while (result != idx);
 }
 }
 }
 free(ptr);
 return v1;
}


// Function: sub_4017bc at 0x4017bc
unsigned int sub_4017bc(void)
{
 return heap_realloc();
}


// Function: heap_realloc at 0x4017c0
unsigned int heap_realloc()
{
 unsigned int *ptr; // eax
 unsigned int *addr; // esi
 unsigned int *p; // eax
 unsigned int v4; // edi

 ptr = (unsigned int *)malloc(20);
 if (!ptr)
 return 4294967295;
 addr = ptr;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 p = (unsigned int *)realloc(ptr, 40);
 if (p)
 {
 p[5] = 50;
 p[6] = 60;
 p[7] = 70;
 p[8] = 80;
 p[9] = 90;
 v4 = (p[2] == 3 ? 50 : 4294967293);
 addr = p;
 }
 else
 {
 v4 = 4294967294;
 }
 free(addr);
 return v4;
}


// Function: sub_40186f at 0x40186f
unsigned int sub_40186f(void)
{
 return heap_array(10);
}


// Function: heap_array at 0x401870
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // esi
 void* ptr; // eax
 unsigned int v2; // esi
 unsigned int result; // ecx
 unsigned int index; // edx
 unsigned int v5; // ebp
 unsigned int v6; // edx
 unsigned int idx; // ebp

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 v2 = v0;
 if (v2 > 0)
 {
 result = v0 & 3;
 index = 0;
 if (v0 - 1 >= 3)
 {
 index = 0;
 v5 = 6;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index)) = v5 - 6;
 *((unsigned int *)(4 + (char *)ptr + 4 * index)) = v5 - 3;
 *((unsigned int *)(8 + (char *)ptr + 4 * index)) = v5;
 *((unsigned int *)(12 + (char *)ptr + 4 * index)) = v5 + 3;
 index += 4;
 v5 += 12;
 } while ((a0 & 0xfffffffc) != index);
 }
 v2 = a0;
 if (result)
 {
 v6 = index * 3;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index + 4 * idx)) = v6;
 idx += 1;
 v6 += 3;
 v2 = a0;
 } while (result != idx);
 }
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((v2 >> 31) + v2 & 4294967294)));
}


// Function: sub_401933 at 0x401933
unsigned int sub_401933(unsigned int a0)
{
 return heap_struct(a0);
}


// Function: heap_struct at 0x401940
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401948 at 0x401948
unsigned int sub_401948(void)
{
 unsigned int *ptr3 = NULL;
 return heap_nested(&ptr3);
}


// Function: heap_nested at 0x401950
unsigned int heap_nested(unsigned int **ptr3)
{
 struct_2 *addr; // eax
 struct_2 *ptr; // esi
 unsigned int *p; // eax

 addr = malloc(8);
 *(ptr3) = (unsigned int *)addr;
 if (!addr)
 return 4294967295;
 ptr = addr;
 addr->field_0 = 10;
 p = malloc(8);
 ptr->field_4 = p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p[0] = 20;
 p[1] = 0;
 return 0;
}


// Function: sub_4019bf at 0x4019bf
unsigned int sub_4019bf(void)
{
 return linked_list_heap();
}


// Function: linked_list_heap at 0x4019c0
unsigned int linked_list_heap()
{
 struct_0 *ptr12; // eax
 struct_0 *ptr5; // edi
 struct_0 *ptr9; // edi
 struct_0 *ptr8; // edi
 struct_0 *ptr7; // edi
 struct_0 *ptr6; // edi
 struct_0 *ptr; // eax
 struct_0 *ptr4; // eax
 struct_0 *ptr3; // eax
 struct_0 *ptr10; // ebp
 struct_0 *addr; // eax
 unsigned int v9; // esi
 struct_0 *p; // eax
 struct_0 *ptr11; // [bp-0x14]

 ptr12 = malloc(8);
 if (!ptr12)
 return 4294967295;
 ptr5 = ptr12;
 ptr12->field_0 = 0;
 ptr = malloc(8);
 if (!ptr)
 {
 free(ptr5);
 return 4294967295;
 }
 ptr->field_0 = 10;
 ptr->field_4 = NULL;
 ptr5->field_4 = ptr;
 ptr4 = malloc(8);
 if (ptr4)
 {
 ptr4->field_0 = 20;
 ptr4->field_4 = NULL;
 ptr11 = ptr4;
 ptr->field_4 = ptr4;
 ptr3 = malloc(8);
 if (ptr3)
 {
 ptr10 = ptr3;
 ptr3->field_0 = 30;
 ptr3->field_4 = NULL;
 ptr11->field_4 = ptr10;
 addr = malloc(8);
 if (addr)
 {
 addr->field_0 = 40;
 addr->field_4 = NULL;
 ptr10->field_4 = addr;
 v9 = 0;
 p = ptr5;
 do
 {
 v9 += p->field_0;
 p = p->field_4;
 } while (p && p->field_4);
 do
 {
 ptr9 = ptr5;
 free(ptr9);
 ptr5 = ptr9->field_4;
 } while (ptr9->field_4);
 return v9;
 }
 else
 {
 do
 {
 ptr8 = ptr5;
 free(ptr8);
 ptr5 = ptr8->field_4;
 } while (ptr8->field_4);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr7 = ptr5;
 free(ptr7);
 ptr5 = ptr7->field_4;
 } while (ptr7->field_4);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr6 = ptr5;
 free(ptr6);
 ptr5 = ptr6->field_4;
 } while (ptr6->field_4);
 return 4294967295;
 }
}


// Function: sub_401ac3 at 0x401ac3
void sub_401ac3(void)
{
}


// Function: sub_401ae3 at 0x401ae3
void sub_401ae3(void)
{
}


// Function: sub_401b03 at 0x401b03
void sub_401b03(void)
{
}


// Function: sub_401b35 at 0x401b35
unsigned int *sub_401b35(void)
{
 return create_tree_node(10);
}


// Function: create_tree_node at 0x401b40
unsigned int *create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // eax

 ptr = (unsigned int *)malloc(12);
 if (!ptr)
 return ptr;
 ptr[0] = a0;
 ptr[1] = 0;
 ptr[2] = 0;
 return ptr;
}


// Function: sub_401b79 at 0x401b79
unsigned int sub_401b79(void)
{
 return tree_heap_traversal();
}


// Function: tree_heap_traversal at 0x401b80
unsigned int tree_heap_traversal()
{
 return 60;
}


// Function: sub_401b86 at 0x401b86
unsigned int sub_401b86(void)
{
 return memory_leak(10);
}


// Function: memory_leak at 0x401b90
unsigned int memory_leak(unsigned int a0)
{
 unsigned int ptr; // eax
 unsigned int result; // ecx
 unsigned int cur; // edx

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 <= 0)
 return *((int *)(ptr + ((a0 >> 31) + a0 & 4294967294) * 2));
 result = a0 & 7;
 cur = 0;
 if (a0 - 1 >= 7)
 {
 cur = 0;
 do
 {
 *((unsigned int *)(ptr + cur * 4)) = cur;
 *((unsigned int *)(ptr + cur * 4 + 4)) = cur + 1;
 *((unsigned int *)(ptr + cur * 4 + 8)) = cur + 2;
 *((unsigned int *)(ptr + cur * 4 + 12)) = cur + 3;
 *((unsigned int *)(ptr + cur * 4 + 16)) = cur + 4;
 *((unsigned int *)(ptr + cur * 4 + 20)) = cur + 5;
 *((unsigned int *)(ptr + cur * 4 + 24)) = cur + 6;
 *((unsigned int *)(ptr + cur * 4 + 28)) = cur + 7;
 cur += 8;
 } while (cur != (a0 & 0xfffffff8));
 }
 if (result)
 {
 do
 {
 *((unsigned int *)(ptr + cur * 4)) = cur;
 cur += 1;
 result -= 1;
 } while (result != 1);
 }
 return *((int *)(ptr + ((a0 >> 31) + a0 & 4294967294) * 2));
}


// Function: sub_401c46 at 0x401c46
unsigned int sub_401c46(void)
{
 return dangling_pointer();
}


// Function: dangling_pointer at 0x401c50
unsigned int dangling_pointer()
{
 unsigned int *ptr; // eax
 unsigned int v0; // [bp-0x18]

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 v0 = 42;
 printf("value before free: %d\n", v0);
 *ptr = v0;
 free(ptr);
 return v0;
}


// Function: double_free at 0x401ca0
unsigned int double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: sub_401cb1 at 0x401cb1
unsigned int sub_401cb1(void)
{
 return heap_overflow();
}


// Function: heap_overflow at 0x401cc0
unsigned int heap_overflow()
{
 return 0;
}


// Function: sub_401cc3 at 0x401cc3
unsigned int sub_401cc3(void)
{
 return test_heap_memory();
}


// Function: test_heap_memory at 0x401cd0
unsigned int test_heap_memory()
{
 unsigned int *ptr; // eax
 unsigned int *ptr4; // esi
 unsigned int *p; // eax
 struct_0 *ptr5; // eax
 struct_0 *addr; // esi
 unsigned int *ptr3; // eax
 unsigned int pid; // eax
 unsigned int v10; // eax
 char *v0; // [bp-0x1c]
 unsigned int v1[1]; // [bp-0x10]

 puts(&g_4035df);
 printf("HEAP-L2-01 (heap_basic): %d\n", 0);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 ptr = malloc(20);
 if (ptr)
 {
 ptr4 = ptr;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 p = realloc(ptr, 40);
 if (p)
 {
 p[5] = 50;
 p[6] = 60;
 p[7] = 70;
 p[8] = 80;
 p[9] = 90;
 ptr4 = p;
 }
 free(ptr4);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", 0);
 printf("HEAP-L2-04 (heap_array): %d\n", 0);
 printf("HEAP-L2-05 (heap_struct): %d\n", 0);
 ptr5 = malloc(8);
 if (ptr5)
 {
 addr = ptr5;
 ptr5->field_0 = 10;
 ptr3 = malloc(8);
 addr->field_4 = ptr3;
 if (ptr3)
 {
 ptr3[0] = 20;
 ptr3[1] = 0;
 }
 else
 {
 free(addr);
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", 0);
 free(addr->field_4);
 free(addr);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", 0);
 }
 linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", 0);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 0);
 printf("HEAP-L3-03 (memory_leak): %d\n", 0);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 dangling_pointer();
 printf(&g_40326d);
 exit(0); /* do not return */
 }
 else if (_ccall(14, 15, pid, 0, 0) == 0)
 {
  waitpid(pid, (int *)&v1, 0);
 v10 = v1 & 127;
 if (!((char)v1 & 127))
 {
 v0 = &g_40327d;
 }
 else if (v10 * 0x1000000 + 0x1000000 >= 0x2000000)
 {
 v0 = &g_4032a2;
 }
 else
 {
 return v10;
 }
 return printf(v0);
 }
 else
 {
 perror(&g_4032e3);
 return 4294967295;
 }
}


// Function: sub_401f64 at 0x401f64
unsigned int sub_401f64(void)
{
 return global_var_access();
}


// Function: global_var_access at 0x401f70
unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: sub_401f8c at 0x401f8c
unsigned int sub_401f8c(void)
{
 return global_var_read();
}


// Function: global_var_read at 0x401f90
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_401fa5 at 0x401fa5
unsigned int sub_401fa5(unsigned int a0)
{
 return global_array_access(a0);
}


// Function: global_array_access at 0x401fb0
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 9)
 v0 = _GLOBAL_OFFSET_TABLE_[10684 + a0];
 return v0;
}


// Function: sub_401fd2 at 0x401fd2
unsigned int sub_401fd2(unsigned int a0)
{
 return static_local(a0);
}


// Function: static_local at 0x401fe0
unsigned int static_local(unsigned int a0)
{
 unsigned int v0; // edx

 v0 = static_local_counter + 1;
 if (a0)
 v0 = 0;
 static_local_counter = v0;
 return v0;
}


// Function: sub_402006 at 0x402006
int sub_402006(unsigned int a0)
{
 return call_static_func(a0);
}


// Function: call_static_func at 0x402010
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_40201a at 0x40201a
int sub_40201a(void)
{
 return access_extern_global();
}


// Function: access_extern_global at 0x402020
int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_402038 at 0x402038
void sub_402038(void)
{
 call_extern_func();
}


// Function: call_extern_func at 0x402040
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: sub_402061 at 0x402061
int sub_402061(void)
{
 return read_const_data();
}


// Function: read_const_data at 0x402070
int read_const_data()
{
 if (!const_string) return 42;
 return (unsigned int)const_string->field_4 + 42;
}


// Function: sub_40208a at 0x40208a
unsigned int sub_40208a(void)
{
 return access_bss_var();
}


// Function: access_bss_var at 0x402090
unsigned int access_bss_var()
{
 return 0;
}


// Function: sub_402093 at 0x402093
unsigned int sub_402093(void)
{
 return access_bss_buffer();
}


// Function: access_bss_buffer at 0x4020a0
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: sub_4020a3 at 0x4020a3
unsigned int sub_4020a3(void)
{
 return global_struct_access();
}


// Function: global_struct_access at 0x4020b0
unsigned int global_struct_access()
{
 return 30;
}


// Function: sub_4020b6 at 0x4020b6
int sub_4020b6(unsigned int a0)
{
 return set_file_static(a0);
}


// Function: set_file_static at 0x4020c0
int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return 0;
}


// Function: sub_4020d7 at 0x4020d7
int sub_4020d7(void)
{
 return get_file_static();
}


// Function: get_file_static at 0x4020e0
int get_file_static()
{
 return file_scope_static;
}


// Function: sub_4020f3 at 0x4020f3
int sub_4020f3(unsigned int a0)
{
 return set_global_callback(a0);
}


// Function: set_global_callback at 0x402100
int set_global_callback(unsigned int a0)
{
 global_func_ptr = (func_ptr_t)a0;
 return 0;
}


// Function: sub_402117 at 0x402117
unsigned int sub_402117(void)
{
 return call_global_callback(10);
}


// Function: call_global_callback at 0x402120
unsigned int call_global_callback(unsigned int a0)
{
 return (!global_func_ptr ? 4294967295 : ((func_ptr_t)global_func_ptr)(a0));
}


// Function: sub_40214f at 0x40214f
unsigned int sub_40214f(unsigned int a0)
{
 return global_heap_store(&a0);
}


// Function: global_heap_store at 0x402150
unsigned int global_heap_store(unsigned int *a0)
{
 global_heap_ptr = (unsigned int)a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: sub_402173 at 0x402173
unsigned int sub_402173(void)
{
 return static_complex_init();
}


// Function: static_complex_init at 0x402180
unsigned int static_complex_init()
{
 return 15;
}


// Function: sub_402186 at 0x402186
unsigned int sub_402186(unsigned int a0)
{
 return tls_access(a0);
}


// Function: tls_access at 0x402190
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402197 at 0x402197
unsigned int sub_402197(void)
{
 return init_order_test();
}


// Function: init_order_test at 0x4021a0
unsigned int init_order_test()
{
 return 20;
}


// Function: sub_4021a6 at 0x4021a6
unsigned int sub_4021a6(void)
{
 return test_static_global();
}


// Function: test_static_global at 0x4021b0
unsigned int test_static_global()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 puts(&g_4035fd);
 global_counter = global_counter + 1;
 v0 = global_counter;
 printf("STM-L1-01 (global_var_access): %d\n", v0);
 v0 = global_counter * 2;
 printf("STM-L1-01 (global_var_read): %d\n", v0);
 v0 = 5;
 printf("STM-L1-02 (global_array_access): %d\n", v0);
 static_local_counter = 1;
 v0 = 1;
 printf("STM-L1-03 (static_local): %d\n", v0);
 static_local_counter = static_local_counter + 1;
 v0 = static_local_counter;
 printf("STM-L1-03 (static_local): %d\n", v0);
 v0 = 11;
 printf("STM-L1-04 (call_static_func): %d\n", v0);
 v0 = extern_global_var + 100;
 printf("STM-L2-01 (access_extern_global): %d\n", v0);
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 v0 = ptr ? (unsigned int)ptr->field_4 + 42 : 42;
 printf("STM-L2-03 (read_const_data): %d\n", v0);
 v0 = 0;
 printf("STM-L2-04 (access_bss_var): %d\n", v0);
 v0 = 0;
 printf("STM-L2-04 (access_bss_buffer): %d\n", v0);
 v0 = 30;
 printf("STM-L2-05 (global_struct_access): %d\n", v0);
 file_scope_static = 50;
 v0 = 50;
 printf("STM-L2-06 (file_static): %d\n", v0);
 global_func_ptr = (func_ptr_t)double_value;
 v0 = 10;
 printf("STM-L2-07 (global_func_ptr): %d\n", v0);
 v1 = 100;
 global_heap_ptr = (unsigned int)&v1;
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", v0);
 v0 = 15;
 printf("STM-L2-09 (static_complex_init): %d\n", v0);
 v0 = 20;
 printf("STM-L3-01 (tls_access): %d\n", v0);
 v0 = 20;
 return printf("STM-L3-02 (init_order_test): %d\n", v0);
}


// Function: sub_4023bf at 0x4023bf
unsigned int sub_4023bf(unsigned int a0)
{
 return double_value(a0);
}


// Function: double_value at 0x4023c0
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4023c7 at 0x4023c7
unsigned int sub_4023c7(void)
{
 char buf[10];
 return memop_memset(buf, 10, 0);
}


// Function: memop_memset at 0x4023d0
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

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


// Function: sub_40240e at 0x40240e
unsigned int sub_40240e(void)
{
 char buf1[10], buf2[10];
 return memop_memcpy(buf1, buf2, 10);
}


// Function: memop_memcpy at 0x402410
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n)
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
 return *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_402455 at 0x402455
unsigned int sub_402455(void)
{
 struct_0 s;
 return memop_memmove(&s, 2);
}


// Function: memop_memmove at 0x402460
unsigned int memop_memmove(struct_0 *a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_0, a0, a1 - 1);
 return a0->field_0;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4024a3 at 0x4024a3
unsigned int sub_4024a3(void)
{
 char buf1[10], buf2[10];
 return memop_memcmp(buf1, buf2, 10);
}


// Function: memop_memcmp at 0x4024b0
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 int v2; // eax
 unsigned int v0; // [bp-0xc]

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
 return (v2 <= 0 ? (unsigned int)(-v2) : 1);
 }
 else
 {
 return 0;
 }
}


// Function: memop_bzero at 0x402500
unsigned int memop_bzero(char *a0, unsigned int n)
{
 unsigned int v0; // [bp-0xc]

 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: sub_402539 at 0x402539
unsigned int sub_402539(void)
{
 char buf1[10], buf2[10];
 return memop_bcopy(buf1, buf2, 10);
}


// Function: memop_bcopy at 0x402540
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n)
{
 unsigned int v0; // [bp-0xc]

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


// Function: sub_402583 at 0x402583
unsigned int sub_402583(unsigned int a0)
{
 struct_0 s;
 return memop_unaligned_access(&s);
}


// Function: memop_unaligned_access at 0x402590
unsigned int memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: sub_4025a2 at 0x4025a2
unsigned int sub_4025a2(unsigned int a0)
{
 return memop_memory_barrier(&a0);
}


// Function: memop_memory_barrier at 0x4025b0
unsigned int memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __atomic_thread_fence(__ATOMIC_SEQ_CST);
 return *(a0) * 2;
}


// Function: sub_4025c8 at 0x4025c8
unsigned int sub_4025c8(void)
{
 return test_memory_op_functions();
}


// Function: test_memory_op_functions at 0x4025d0
unsigned int test_memory_op_functions()
{
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]
 char v2[1]; // [bp-0x10]
 char v3[3]; // [bp-0xf]
 char v4[4]; // [bp-0xc]
 unsigned short v5; // [bp-0x8]

 puts(&g_403621);
 printf("MEMOP-L2-01: %d\n", 0);
 printf("MEMOP-L2-02: %d\n", 0);
 strncpy(&v4, "oWor", 4);
 strncpy(&v2, "Hell", 4);
 v5 = 25708;
 strncpy(&v3, "HelloWorl", 9);
 printf("MEMOP-L2-03: %c\n", v2[0]);
 printf("MEMOP-L2-04: %d\n", 0);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 0);
 printf("MEMOP-L3-01: 0x%x\n", 0);
 v1 = 5;
 __atomic_store_n((int *)&v0, 5, __ATOMIC_SEQ_CST);
 return printf("MEMOP-L3-02: %d\n", 0);
}


// Function: sub_4026f2 at 0x4026f2
unsigned int sub_4026f2(void)
{
 return main();
}


// Function: main at 0x402700
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_40272b at 0x40272b
void sub_40272b(unsigned int a0)
{
 extern_function(a0);
 return;
}


// Function: extern_function at 0x402730
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_402738 at 0x402738
int sub_402738(void)
{
 return __do_global_ctors_aux();
}






// Function: sub_402782 at 0x402782
void sub_402782(void)
{
}



/* CRT stub function _fini removed by preprocessor */


