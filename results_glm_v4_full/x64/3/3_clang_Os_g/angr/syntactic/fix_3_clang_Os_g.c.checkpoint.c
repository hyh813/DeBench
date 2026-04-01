// Angr Decompilation of 3_clang_Os_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdint.h>
#include <inttypes.h>

/* CRT stub function _init removed) removed by preprocessor */

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0;

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

typedef struct struct_0_const {
 char padding_0[4];
 char field_4;
} struct_0_const;

extern struct_0 *g_404fe8;

/* Forward declaration */
unsigned int double_value(unsigned int a0);
unsigned int extern_function(unsigned int a0);

/* CRT stub functions */
static inline void deregister_tm_clones(void) {}
static inline void register_tm_clones(void) {}
static inline void __do_global_dtors_aux(void) {}
static inline void frame_dummy(void) {}

/* Helper function */
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

/* Forward declarations */
int local_vars(unsigned int a0);




// Function: sub_401020 at 0x401020
extern unsigned long long g_405008;
extern unsigned long long g_405010;

/* Define missing global variables */
unsigned int global_array[4] = {1, 2, 3, 4};
unsigned long long global_func_ptr = 0;
unsigned int global_counter = 0;
unsigned int file_scope_static = 0;
unsigned int static_local_counter = 0;
unsigned long long global_heap_ptr = 0;
unsigned int extern_global_var = 0;
struct_0_const const_string_obj = {0, 'A'};
struct_0_const *const_string = &const_string_obj;
char g_402295[] = "value before free: %d\n";
char g_4022a5[] = "Process exited normally\n";
char g_4022ca[] = "Process signaled\n";
char g_40230b[] = "fork failed";
char g_402607[] = "Testing heap memory functions";
char g_4025e9[] = "Testing stack memory functions";
char g_402625[] = "Testing static/global variables";
char g_402649[] = "Testing memory operation functions";

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405008;
 /* goto statement removed - g_405010 is not a label */
}


// Function: sub_40102c at 0x40102c
void sub_40102c()
{
 void* v1; // rdi

 v1 = NULL;
 free(v1);
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198725 */
}


// Function: sub_401146 at 0x401146
void sub_401146()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401179 at 0x401179
void sub_401179()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 __do_global_dtors_aux();
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
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 local_vars(a0);
 return;
}





// Function: local_vars at 0x401209
int local_vars(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_array at 0x401213
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


// Function: local_struct at 0x40122b
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x40122f
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x40123b
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x401240
int large_stack_frame()
{
 unsigned long long v2; // xmm0
 unsigned long long i; // rax
 unsigned long v4; // [bp-0x808]
 char v0; // [bp-0x408]

 v2 = 0xf0e0d0c0b0a09080ULL;
 i = 0;
 do
 {
 *((unsigned long long *)((char *)&v4 + i)) = v2;
 i += 16;
 v2 = AddV(v2, 0xd0c0b0a09080f0e0ULL);
 } while (i != 0x800);
 return v0;
}


// Function: vla_stack at 0x40127f
unsigned long long vla_stack(unsigned int a0, unsigned long n)
{
 unsigned long v1; // rdx
 unsigned long long idx; // rsi
 unsigned int vla_buffer[1001];

 if (a0 - 1001 < 4294966296)
 return 4294967295;
 v1 = a0;
 idx = 0;
 do
 vla_buffer[2 * idx] = (unsigned int)idx, idx += 2;
 while (v1 * 2 != idx);
 return vla_buffer[(((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)];
}





// Function: stack_alias at 0x401323
unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x401329
extern char g_401439;
extern char g_4025e9[];

int test_stack_memory()
{
 unsigned long long v9; // r14
 unsigned long long v10; // rbx
 unsigned long long idx; // rbx
 unsigned long long j; // rbx
 unsigned long long v13; // xmm0
 unsigned long long index; // rbx
 char *cur; // r14
 unsigned long long l; // rbx
 unsigned long v17; // rsi
 unsigned long v0; // [bp-0x828]
 char v1; // [bp-0x820]
 unsigned long v2; // [bp-0x818]
 unsigned int v3; // [bp-0x80c]
 char v4; // [bp-0x804]
 char v5; // [bp-0x418]
 unsigned long long v6; // [bp-0x10]
 unsigned long long v7; // [bp-0x8]

 v7 = v9;
 v6 = v10;
 puts(&g_4025e9);
 idx = 0;
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 do
 {
 *((unsigned int *)((char *)&v2 + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 j = 0;
 printf("MEM-L1-02 (local_array): %d\n", *((int *)&v4));
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 v13 = 0xf0e0d0c0b0a09080ULL;
 do
 {
 *((unsigned long long *)((char *)&v2 + j)) = v13;
 j += 16;
 v13 = AddV(v13, 0xd0c0b0a09080f0e0ULL);
 } while (j != 0x800);
 index = 0;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
 do
 {
 *((unsigned int *)((char *)&v2 + 2 * index)) = index;
 index += 2;
 } while (index != 20);
 cur = (char *)&v2;
 l = 0;
 (void)&v1;  /* stub */
 printf("MEM-L2-02 (vla_stack): %d\n", *((int *)&v4));
 do
 {
 *((unsigned int *)&cur[0]) = l;
 cur += 1;
 l += 3;
 } while (l != 30);
 v17 = v3;
 v0 = (unsigned long)&g_401439;
 printf("MEM-L2-03 (alloca_usage): %d\n", v17);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x401456
unsigned int heap_basic(unsigned int a0)
{
 void* ptr; // rax
 unsigned long long idx; // rdx
 unsigned long long ptr_val; // [bp-0x10]

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
 ptr_val = (unsigned long long)ptr;
 free(ptr);
 return *((int *)((char *)ptr_val + 4 * (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295)));
}


// Function: heap_calloc at 0x4014a3
unsigned int heap_calloc(unsigned int a0)
{
 unsigned long long v2; // rax
 void* ptr; // rax
 unsigned int v4; // ebx
 unsigned long idx; // rdx
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v4 = 0;
 if (a0 > 0 && a0 != 1)
 {
 v4 = 0;
 idx = 1;
 do
 {
 v4 += *((int *)((char *)ptr + 4 * idx));
 idx += 1;
 } while (a0 != idx);
 }
 free(ptr);
 return v4;
}


// Function: heap_realloc at 0x4014f1
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
 unsigned int v9; // ebp;

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
 v5 = ptr2[2];
 p = realloc(ptr2, 40);
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


// Function: heap_array at 0x401576
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
 return 0;
}


// Function: heap_struct at 0x4015ca
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x4015ce
unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr3; // rax
 struct_3 *ptr; // rbx
 struct_4 *p; // rax

 (void)ptr;
 ptr3 = (struct_3 *)malloc(16);
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


// Function: linked_list_heap at 0x401631
typedef struct struct_0_ll {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_ll *field_8;
} struct_0_ll;

unsigned int linked_list_heap()
{
 struct_0_ll *ptr; // rax
 struct_0_ll *v19; // r14
 struct_0_ll *v11; // r14
 struct_0_ll *ptr3; // r14
 unsigned int v14; // ebp
 struct_0_ll *ptr7; // rax
 struct_0_ll *p; // r14
 unsigned int v4; // ebp
 unsigned int v5; // ebx
 struct_0_ll *v6; // r15
 struct_0_ll *addr; // rax
 struct_0_ll *ptr4; // r15
 struct_0_ll *ptr8; // rax
 char result; // bl
 unsigned long long v0; // [bp-0x28]

 v0 = 0;
 ptr = malloc(16);
 v4 = 0;
 if (ptr)
 {
 v5 = 0;
 v6 = NULL;
 v11 = NULL;
 do
 {
 addr = ptr;
 ptr4 = v6;
 addr->field_0 = v4;
 addr->field_8 = NULL;
 if (v11)
 ptr4->field_8 = addr;
 else
 v11 = addr;
 if (v5 == 0xfffffffc)
 {
 result = -(v5) < 4;
 goto LABEL_4016ba;
 }
 } while ((ptr = malloc(16), v5 -= 1, v4 += 10, v6 = addr, ptr = malloc(16), ptr));
 result = ~(v5) < 4;
 }
 else
 {
 result = 1;
 v11 = NULL;
 }
 if (v11)
 {
 do
 {
 ptr3 = v11;
 free(ptr3);
 v19 = ptr3->field_8;
 } while (ptr3->field_8);
 }
 v11 = NULL;
LABEL_4016ba:
 if (result)
 return 4294967295;
 v14 = 0;
 if (!v11)
 return 0;
 ptr = v11;
 do
 {
 v14 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 if (!v11)
 return v14;
 do
 {
 p = v11;
 free(p);
 v11 = p->field_8;
 } while (p->field_8);
 return v14;
}


// Function: create_tree_node at 0x4016fe
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


// Function: tree_heap_traversal at 0x40171b
unsigned long long tree_heap_traversal()
{
 return 60;
}


// Function: memory_leak at 0x401721
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v1; // rbx
 unsigned long long ptr; // rax
 unsigned long long idx; // rdx

 v1 = a0;
 ptr = (uintptr_t)malloc(a0 * 4);
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


// Function: dangling_pointer at 0x401760
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


// Function: double_free at 0x401799
unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: heap_overflow at 0x4017a7
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
 return 0;
}


// Function: test_heap_memory at 0x4017e4
typedef struct struct_0_heap {
 char padding_0[8];
 void* field_8;
} struct_0_heap;



 long long test_heap_memory()
{
 char *v13; // rdi
 unsigned int *ptr; // rax
 unsigned long long idx; // rcx
 unsigned long v11; // rsi
 unsigned int flag1; // eax
 int v0; // [bp-0x14]
 struct_0_heap *result; // [bp-0x10]
 unsigned long long v2_unused; // placeholder for decompiler artifact

 (void)v2_unused;
 puts(&g_402607);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result) & 4294967295);
 if (result)
 {
 free(result->field_8);
 free(result);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 ptr = malloc(20);
 if (ptr)
 {
 idx = 0;
 do
 {
 ptr[idx] = idx;
 idx += 1;
 } while (idx != 5);
 v11 = ptr[2];
 }
 else
 {
 v11 = 4294967295;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v11);
 printf("HEAP-L3-04 (dangling_pointer): ");
 flag1 = fork();
 if (!flag1)
 {
 printf(&g_402295, dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 else if (flag1 > 0)
 {
 waitpid(flag1, &v0, 0);
 if (!((char)v0 & 127))
 {
 v13 = &g_4022a5;
 }
 else if ((v0 & 127) * 0x1000000 + 0x1000000 >= 0x2000000)
 {
 v13 = &g_4022ca;
 }
 else
 {
 return v0 & 127;
 }
 return printf(v13);
 }
 else
 {
 perror(&g_40230b);
 return 4294967295;
 }
}


// Function: global_var_access at 0x40199a

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x4019a9

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x4019b2

unsigned long long global_array_access(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 9)
 v1 = global_array[a0];
 return v1;
}


// Function: static_local at 0x4019c9

long long static_local(unsigned int a0)
{
 static_local_counter = (!a0 ? static_local_counter + 1 : 0);
 return static_local_counter;
}


// Function: call_static_func at 0x4019df
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x4019e5

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x4019f2
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: read_const_data at 0x4019fc

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401a0b
unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401a0e
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401a11
unsigned long long global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401a17

void set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return;
}


// Function: get_file_static at 0x401a1e

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401a25

void set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return;
}


// Function: call_global_callback at 0x401a2d

typedef unsigned long long (*callback_func_t)(void);

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((callback_func_t)global_func_ptr)();
}


// Function: global_heap_store at 0x401a41

unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = (uintptr_t)a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x401a56
unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401a5c
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401a60
unsigned long long init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401a66
typedef struct struct_0_static {
 char padding_0[4];
 char field_4;
} struct_0_static;

extern struct_0_const *const_string;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;
extern unsigned long long global_heap_ptr;
extern unsigned int static_local_counter;

int test_static_global()
{
 unsigned long v2; // rsi
 unsigned long v3; // rsi
 unsigned int v0; // [bp-0xc]

 puts(&g_402625);
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
 printf("STM-L2-03 (read_const_data): %d\n", const_string->field_4 + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (uintptr_t)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 global_heap_ptr = (unsigned long long)(unsigned int*)&v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: double_value at 0x401c2c
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: memop_memset at 0x401c30
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 {
 return 4294967295;
 }
 else if (n)
 {
 v0 = v2;
 memset(a0, a2, n);
 return *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcpy at 0x401c55
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 unsigned long long v0; // [bp-0x18]

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
 return *((int *)((char *)a0 + (n & 18446744073709551612ULL) - 4));
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memmove at 0x401c8c
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

unsigned long long memop_memmove(struct_0_memmove *a0, unsigned long a1)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 v0 = v2;
 memmove(&a0->field_1, (void *)a0, a1 - 1);
 return a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401cb7
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


// Function: memop_bzero at 0x401ce6
unsigned long long memop_bzero(char *a0, unsigned long n)
{
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x401d04
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
 return (unsigned long long)(unsigned char)*(a1);
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_unaligned_access at 0x401d2c
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

unsigned long long memop_unaligned_access(struct_0_unaligned *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401d3b
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401d4e
int test_memory_op_functions()
{
 unsigned int v0; // [bp-0x14]
 char v1[1]; // [bp-0x10]
 char v2[15]; // [bp-0xf]

 puts(&g_402649);
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


// Function: main at 0x401e25
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_401e3e at 0x401e3e
void sub_401e3e(unsigned long a0)
{
 extern_function(0);
 return;
}


// Function: extern_function at 0x401e40
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


