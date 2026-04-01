// Angr Decompilation of 3_clang_O0_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <sys/wait.h>

#define __ROL__(val, n) (((val) << (n)) | ((val) >> (64 - (n))))

// Forward struct declarations
typedef struct struct_0_const {
 char padding_0[4];
 char field_4;
} struct_0_const;

typedef struct struct_0_callback {
 unsigned long long field_0;
} struct_0_callback;

typedef struct struct_0_heap {
 unsigned int field_0;
} struct_0_heap;

typedef struct struct_0_tls {
 char padding_0[16];
 unsigned int field_10;
} struct_0_tls;

typedef struct struct_0_nested {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0_nested;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_nested *field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2;

typedef struct struct_0_list {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_list *field_8;
} struct_0_list;

typedef struct struct_0_tree {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_tree *field_8;
 struct struct_0_tree *field_10;
} struct_0_tree;

typedef struct struct_0_traversal {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_tree *field_8;
 struct struct_0_tree *field_10;
} struct_0_traversal;

typedef struct struct_0 {
 char padding_0[8];
 void* field_8;
} struct_0;

typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

// Global variable definitions
unsigned long long g_413ff8 = 0;
char *__dollar_d_1 = NULL;
char *g_40285e = NULL;
char *g_4029b7 = NULL;
char *g_4029c7 = NULL;
char *g_4029ec = NULL;
char *g_402a2d = NULL;
unsigned int __dollar_d_2 = 0;
unsigned int __dollar_d_3[4] = {0, 0, 0, 0};
unsigned int static_local_counter = 0;
unsigned int extern_global_var = 0;
struct_0_const *const_string = NULL;
unsigned int bss_var = 0;
char bss_buffer = 0;
unsigned int g_4140d4 = 0;
unsigned int global_point = 0;
unsigned int file_scope_static = 0;
struct_0_callback *global_func_ptr = NULL;
struct_0_heap *ptr = NULL;
unsigned int complex_init = 0;
unsigned int g_4140e4 = 0;
unsigned int g_4140ec = 0;
struct_0_tls *tls_ptr = NULL;
unsigned int init_depends_on_static_depends = 0;
char *g_402a43 = NULL;
char *g_402ca6 = NULL;

// Forward function declarations
static unsigned int static_helper(unsigned int a0);
unsigned int extern_function(unsigned int a0);
unsigned int init_depends_on(unsigned int *a0);
unsigned int double_value(unsigned int a0);
struct_0_tree *create_tree_node(unsigned int a0);
unsigned int local_vars(unsigned int a0);
unsigned int local_array(unsigned int a0);
int local_struct(unsigned int a0);
unsigned int address_of_local(unsigned long ptr);
int address_of_array(unsigned int *a0);
long long large_stack_frame(void);
unsigned int vla_stack(unsigned int a0);
unsigned int alloca_usage(unsigned int a0);
unsigned int stack_alias(unsigned long long a0, unsigned long long a1);
int test_stack_memory(void);
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);
unsigned int heap_realloc(void);
unsigned int heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned int heap_nested(struct_1 **ptr);
unsigned int linked_list_heap(void);
unsigned int tree_heap_traversal(void);
unsigned int memory_leak(unsigned int a0);
unsigned int dangling_pointer(void);
unsigned int double_free(unsigned int *p);
unsigned int heap_overflow(void);
int test_heap_memory(void);
int global_var_access(void);
unsigned int global_var_read(void);
unsigned int global_array_access(unsigned int a0);
unsigned int static_local(unsigned int a0);
int call_static_func(unsigned int a0);
int access_extern_global(void);
long long call_extern_func(void);
int read_const_data(void);
int access_bss_var(void);
long long access_bss_buffer(void);
int global_struct_access(void);
long long set_file_static(unsigned long a0);
int get_file_static(void);
long long set_global_callback(unsigned long a0);
unsigned int call_global_callback(unsigned int a0);
unsigned int global_heap_store(unsigned long a0);
int static_complex_init(void);
unsigned int tls_access(unsigned int a0);
long long init_order_test(void);
int test_static_global(void);
unsigned int memop_memset(char *ptr, unsigned long n, unsigned int a2);
unsigned int memop_memcpy(void* ptr, void* a1, unsigned long n);
unsigned int memop_memmove(struct_0_memmove *ptr, unsigned long a1);
unsigned int memop_memcmp(void* a0, void* a1, unsigned long a2);
unsigned int memop_bzero(char *ptr, unsigned long n);
unsigned int memop_bcopy(void* a0, char *ptr, unsigned long a2);
unsigned int memop_unaligned_access(struct_0_unaligned *ptr);
unsigned int memop_memory_barrier(unsigned int *ptr);
int test_memory_op_functions(void);
int main(void);


/* CRT stub function _init removed by preprocessor */

void deregister_tm_clones(void) { }
void __do_global_dtors_aux(void) { }
long long frame_dummy(void) { return 0; }



// Function: __dollar_x at 0x400920
extern unsigned long long g_413ff8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_413ff8;
}


// Function: sub_400934 at 0x400934
long long sub_400934()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400ab0 at 0x400ab0
void sub_400ab0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400ac8 at 0x400ac8
void sub_400ac8()
{
 deregister_tm_clones();
 return;
}












// Function: sub_400b3c at 0x400b3c
void sub_400b3c()
{
 __do_global_dtors_aux();
 return;
}







// Function: sub_400b88 at 0x400b88
long long sub_400b88()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}







// Function: local_vars at 0x400b94
unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = (a0 * 2 | a0 >> 31) & 4294967294;
 v0 = v1 + 10;
 return v0;
}


// Function: local_array at 0x400bc8
unsigned int local_array(unsigned int a0)
{
 unsigned int i; // [bp-0x30]
 unsigned long v2; // [bp-0x2c]
 char v1; // [bp-0x18]

 for (i = 0; 10 > i; i += 1)
 {
 *((unsigned int *)((char *)&v2 + 4 * i)) = a0 * i;
 }
 return *((int *)&v1);
}


// Function: local_struct at 0x400c20
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = (a0 * 2 | a0 >> 31) & 4294967294;
 return a0 + v0;
}


// Function: address_of_local at 0x400c50
unsigned int address_of_local(unsigned long ptr)
{
 unsigned int v0; // [bp-0xc]

 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: address_of_array at 0x400c78
int address_of_array(unsigned int *a0)
{
 unsigned int *v0; // [bp-0x18]
 unsigned int *v1; // [bp-0x10]

 v1 = a0;
 v0 = a0;
 return *(v1) + *(v0);
}


// Function: large_stack_frame at 0x400cac
long long large_stack_frame()
{
 unsigned int i; // [bp-0x814]
 unsigned long v4; // [bp-0x810]
 char v1; // [bp-0x410]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 for (i = 0; 0x800 > i; i += 1)
 {
 *((char *)&v4 + i) = i;
 }
 return v1;
}


// Function: vla_stack at 0x400d00
unsigned int vla_stack(unsigned int a0)
{
 unsigned long v8; // x8
 char v0; // [bp-0x40]
 char *ptr; // [bp-0x38]
 unsigned int i; // [bp-0x2c]
 unsigned long v3; // [bp-0x28]
 char *v4; // [bp-0x20]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 if (a0 > 0 && a0 <= 1000)
 {
 v8 = a0;
 v4 = &v0;
 ptr = &(&v0)[-1 * ((__ROL__(v8, 2) & 18446744073709551612) + 15 & 0xfffffffffffffff0)];
 v3 = v8;
 for (i = 0; a0 > i; i += 1)
 {
 *((unsigned int *)&ptr[4 * i]) = (i * 2 | i >> 31) & 4294967294;
 }
 v5 = *((int *)&ptr[4 * a0 / 2]);
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: alloca_usage at 0x400de0
unsigned int alloca_usage(unsigned int a0)
{
 char v0; // [bp-0x30]
 unsigned int i; // [bp-0x24]
 char *ptr; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 if (0 >= a0)
 {
 v3 = 4294967295;
 return v3;
 }
 ptr = &(&v0)[-1 * ((__ROL__(a0, 2) & 18446744073709551612) + 15 & 0xfffffffffffffff0)];
 for (i = 0; a0 > i; i += 1)
 {
 *((unsigned int *)&ptr[4 * i]) = 3 * i;
 }
 v3 = *((int *)&ptr[4 * a0 / 2]);
 return v3;
}


// Function: stack_alias at 0x400ea4
unsigned int stack_alias(unsigned long long a0, unsigned long long a1)
{
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18], Other Possible Types: unsigned long long
 char *v2; // [bp-0x10], Other Possible Types: unsigned long long
 unsigned int v3; // [bp-0x4]

 v2 = (char *)a0;
 v1 = (char *)a1;
 v0 = 10;
 v2 = (char *)&v0;
 v1 = (char *)&v0;
 if (v2 == v1 && v2)
 {
 v0 = 20;
 v3 = v0;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: test_stack_memory at 0x400f1c
extern char *__dollar_d_1;

int test_stack_memory()
{
 unsigned int v0; // [bp-0x54]
 char *v1; // [bp-0x50]
 unsigned int v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 unsigned int result; // [bp-0x40]
 char v5; // [bp-0x3c], Other Possible Types: unsigned int
 unsigned int v6; // [bp-0x38]
 unsigned int v7; // [bp-0x34]
 char v8; // [bp-0x14]
 char *v9; // [bp-0x10]
 char v10; // [bp+0x0]

 v9 = &v10;
 printf("%s", __dollar_d_1);
 v0 = 5;
 printf("MEM-L1-01 (local_vars): %d\n", local_vars(5) & 4294967295);
 v2 = 2;
 printf("MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
 printf("MEM-L1-03 (local_struct): %d\n", local_struct(v0) & 4294967295);
 printf("MEM-L1-04 (address_of_local): %d\n", address_of_local((unsigned long)&v8) & 4294967295);
 v1 = &v5;
 memset(&v5, 0, 40);
 v5 = 1;
 v6 = v2;
 v7 = 3;
 printf("MEM-L1-05 (address_of_array): %d\n", address_of_array((unsigned int *)v1) & 4294967295);
 printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 v3 = 10;
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(v3) & 4294967295);
 result = 0;
 return printf("MEM-L2-04 (stack_alias): %d\n", stack_alias((unsigned long long)&result, (unsigned long long)&result) & 4294967295);
}


// Function: heap_basic at 0x401054
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0x28]
 unsigned int i; // [bp-0x24]
 void* ptr; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (i = 0; a0 > i; i += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * i)) = (i * 2 | i >> 31) & 4294967294;
 }
 v0 = *((int *)((char *)ptr + 4 * a0 / 2));
 free(ptr);
 v3 = v0;
 return v3;
}


// Function: heap_calloc at 0x40110c
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int i; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 void* ptr; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 ptr = calloc(a0, 4);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 v1 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 v1 += *((int *)((char *)ptr + 4 * i));
 }
 free(ptr);
 v3 = v1;
 return v3;
}


// Function: heap_realloc at 0x4011b4
unsigned int heap_realloc()
{
 unsigned int v0; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int j; // [bp-0x34]
 unsigned int ptr[6]; // [bp-0x30]
 unsigned int v4; // [bp-0x28]
 unsigned int i; // [bp-0x24]
 unsigned int ptr_small[3]; // [bp-0x20], Other Possible Types: unsigned int [6]
 unsigned int v7; // [bp-0x14]
 char *v8; // [bp-0x10]
 char v9; // [bp+0x0]

 v8 = &v9;
 *((void* *)&ptr[0]) = malloc(20);
 if (!ptr)
 {
 v7 = 4294967295;
 return v7;
 }
 for (i = 0; 5 > i; i += 1)
 {
 ptr[i] = i + 1;
 }
 v4 = ptr[2];
 *((void* *)&ptr[0]) = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 v7 = 4294967294;
 return v7;
 }
 ptr[0] = (unsigned int)ptr;
 for (j = 5; 10 > j; j += 1)
 {
 ptr[j] = 10 * j;
 }
 if (ptr[2] == v4)
 v0 = ptr[5];
 else
 v0 = 4294967293;
 v1 = v0;
 free(ptr);
 v7 = v1;
 return v7;
}


// Function: heap_array at 0x401310
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // [bp-0x28]
 unsigned int i; // [bp-0x24]
 void* ptr; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (i = 0; a0 > i; i += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * i)) = 3 * i;
 }
 v0 = *((int *)((char *)ptr + 4 * a0 / 2));
 free(ptr);
 v3 = v0;
 return v3;
}


// Function: heap_struct at 0x4013cc
unsigned int heap_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x24]
 unsigned int ptr[2]; // [bp-0x20]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 *((void* *)&ptr[0]) = malloc(8);
 if (ptr)
 {
 ptr[0] = a0;
 ptr[1] = (a0 * 2 | a0 >> 31) & 4294967294;
 v0 = ptr[0] + ptr[1];
 free(ptr);
 v2 = v0;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: heap_nested at 0x401458
unsigned int heap_nested(struct_1 **ptr)
{
 struct_1 *local_ptr; // x0
 struct_0_nested *nested_ptr; // x0
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 *(ptr) = malloc(16);
 if (!*(ptr))
 {
 v0 = 4294967295;
 return v0;
 }
 (*ptr)->field_0 = 10;
 nested_ptr = malloc(16);
 (*ptr)->field_8 = nested_ptr;
 if ((*ptr)->field_8)
 {
 (*ptr)->field_8->field_0 = 20;
 (*ptr)->field_8->field_8 = 0;
 v0 = 0;
 return v0;
 }
 free(*(ptr));
 v0 = 4294967294;
 return v0;
}


// Function: linked_list_heap at 0x401520
unsigned int linked_list_heap()
{
 struct_0_list *p; // [bp-0x58]
 struct_0_list *iter; // [bp-0x50]
 unsigned int v2; // [bp-0x44]
 struct_0_list *addr; // [bp-0x40]
 struct_0_list *ptr; // [bp-0x38]
 char i; // [bp-0x2c], Other Possible Types: unsigned int
 struct_0_list *ptr5; // [bp-0x28]
 struct_0_list *cur; // [bp-0x20]
 unsigned int v8; // [bp-0x14]
 char *v9; // [bp-0x10]
 char v10; // [bp+0x0]

 v9 = &v10;
 cur = NULL;
 i = 0;
 for (; 5 > i; i += 1)
 {
 ptr = malloc(16);
 if (!ptr)
 {
 while (cur)
 {
 addr = cur;
 cur = cur->field_8;
 free(addr);
 }
 v8 = 4294967295;
 return v8;
 }
 ptr->field_0 = 10 * i;
 ptr->field_8 = NULL;
 if (!cur)
 {
 cur = ptr;
 ptr5 = ptr;
 }
 else
 {
 ptr5->field_8 = ptr;
 ptr5 = ptr;
 }
 }
 v2 = 0;
 for (iter = cur; iter; iter = iter->field_8)
 {
 v2 += iter->field_0;
 }
 while (cur)
 {
 p = cur;
 cur = cur->field_8;
 free(p);
 }
 v8 = v2;
 return v8;
}


// Function: create_tree_node at 0x401694
struct_0_tree *create_tree_node(unsigned int a0)
{
 struct_0_tree *ptr; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 ptr = (struct_0_tree *)malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = (struct_0_tree *)0;
 ptr->field_10 = (struct_0_tree *)0;
 return ptr;
}


// Function: tree_heap_traversal at 0x4016ec
unsigned int tree_heap_traversal()
{
 unsigned int v0; // [bp-0x24]
 struct_0_tree *ptr; // [bp-0x20]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 ptr = create_tree_node(10);
 if (!ptr)
 {
 v2 = 4294967295;
 return v2;
 }
 ptr->field_8 = create_tree_node(20);
 ptr->field_10 = create_tree_node(30);
 if (ptr->field_8 && ptr->field_10)
 {
 v0 = ptr->field_0 + ptr->field_8->field_0 + ptr->field_10->field_0;
 free(ptr->field_8);
 free(ptr->field_10);
 free(ptr);
 v2 = v0;
 return v2;
 }
 if (ptr->field_8)
 free(ptr->field_8);
 if (ptr->field_10)
 free(ptr->field_10);
 free(ptr);
 v2 = 4294967294;
 return v2;
}


// Function: memory_leak at 0x401818
unsigned int memory_leak(unsigned int a0)
{
 unsigned int i; // [bp-0x24]
 void* ptr; // [bp-0x20]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 {
 v2 = 4294967295;
 return v2;
 }
 for (i = 0; a0 > i; i += 1)
 {
 *((unsigned int *)(ptr + i * 4)) = i;
 }
 v2 = *((int *)(ptr + a0 / 2 * 4));
 return v2;
}


// Function: dangling_pointer at 0x4018bc
unsigned int dangling_pointer()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int *ptr; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 42;
 v1 = *(ptr);
 printf("value before free: %d\n", v1);
 free(ptr);
 v0 = *(ptr);
 v3 = v0;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: double_free at 0x401944
unsigned int double_free(unsigned int *p)
{
 unsigned int *ptr; // [bp-0x28]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 if (p)
 {
 v1 = *(p);
 return v1;
 }
 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 10;
 free(ptr);
 free(ptr);
 v1 = 4294967294;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: heap_overflow at 0x4019cc
unsigned int heap_overflow()
{
 unsigned int v0; // [bp-0x28]
 unsigned int i; // [bp-0x24]
 unsigned int *ptr; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 ptr = malloc(40);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (i = 0; 10 >= i; i += 1)
 {
 ptr[i] = 100 * i;
 }
 v0 = *(ptr);
 free(ptr);
 v3 = v0;
 return v3;
}


// Function: test_heap_memory at 0x401a70
extern char *g_40285e;
extern char *g_4029b7;
extern char *g_4029c7;
extern char *g_4029ec;
extern char *g_402a2d;

int test_heap_memory(void)
{
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x28]
 int v2; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 unsigned int flag1; // [bp-0x1c]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 printf("%s", g_40285e);
 v0 = 10;
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 v1 = 5;
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(v0) & 4294967295);
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(v1) & 4294967295);
 struct_1 *result_nested = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result_nested) & 4294967295);
 if (result_nested)
 {
 free(result_nested->field_8);
 free(result_nested);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5) & 4294967295);
 printf("HEAP-L3-04 (dangling_pointer): ");
 flag1 = fork();
 if (!flag1)
 {
 v3 = dangling_pointer();
 printf("%s", g_4029b7);
 exit(0); /* do not return */
 }
 else if (flag1 > 0)
 {
 waitpid(flag1, &v2, 0);
 if (!((char)(v2) & 127))
 {
 printf("%s", g_4029c7);
 }
 else
 {
 if (((v2) & 127) > 0)
 printf("%s", g_4029ec);
 }
 return 0;
 }
 else
 {
 perror(g_402a2d);
 return 0;
 }
}


// Function: global_var_access at 0x401c70
extern unsigned int __dollar_d_2;

int global_var_access()
{
 __dollar_d_2 = __dollar_d_2 + 1;
 return __dollar_d_2;
}


// Function: global_var_read at 0x401c88
extern unsigned int __dollar_d_2;

unsigned int global_var_read()
{
 return (__dollar_d_2 * 2 | __dollar_d_2 >> 31) & 4294967294;
}


// Function: global_array_access at 0x401c98
extern unsigned int __dollar_d_3[4];

unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (!((char)(a0 >> 31) & 1) && a0 < 10)
 {
 v0 = __dollar_d_3[a0];
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: static_local at 0x401cec
extern unsigned int static_local_counter;

unsigned int static_local(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (!a0)
 {
 static_local_counter = static_local_counter + 1;
 v0 = static_local_counter;
 return v0;
 }
 static_local_counter = 0;
 v0 = 0;
 return v0;
}


// Function: call_static_func at 0x401d38
int call_static_func(unsigned int a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return static_helper(a0) + 1;
}


// Function: static_helper at 0x401d60
static unsigned int static_helper(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: access_extern_global at 0x401d78
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401d8c
long long call_extern_func()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x401da4
extern struct_0_const *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401db8
extern unsigned int bss_var;

int access_bss_var()
{
 return bss_var;
}


// Function: access_bss_buffer at 0x401dc4
extern char bss_buffer;

long long access_bss_buffer()
{
 return bss_buffer;
}


// Function: global_struct_access at 0x401dd0
extern unsigned int g_4140d4;
extern unsigned int global_point;

int global_struct_access()
{
 return global_point + g_4140d4;
}


// Function: set_file_static at 0x401dec
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 file_scope_static = v0;
 return a0;
}


// Function: get_file_static at 0x401e08
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401e14
extern struct_0_callback *global_func_ptr;

long long set_global_callback(unsigned long a0)
{
 global_func_ptr = (struct_0_callback *)a0;
 return a0;
}


// Function: call_global_callback at 0x401e30
unsigned int call_global_callback(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 if (!global_func_ptr)
 {
 v0 = 4294967295;
 return v0;
 }
 v0 = ((unsigned int (*)(unsigned int))global_func_ptr)(a0);
 return v0;
}


// Function: global_heap_store at 0x401e84
extern struct_0_heap *ptr;

unsigned int global_heap_store(unsigned long a0)
{
 unsigned int v0; // [bp-0x4]

 ptr = (struct_0_heap *)a0;
 if (!ptr)
 {
 v0 = 4294967295;
 return v0;
 }
 v0 = ptr->field_0;
 return v0;
}


// Function: static_complex_init at 0x401ed0
extern unsigned int complex_init;
extern unsigned int g_4140e4;
extern unsigned int g_4140ec;

int static_complex_init()
{
 return complex_init + g_4140e4 + g_4140ec;
}


// Function: tls_access at 0x401ef4
extern struct_0_tls *tls_ptr;

unsigned int tls_access(unsigned int a0)
{
 struct_0_tls *ptr; // tpidr_el0

 ptr = tls_ptr;
 ptr->field_10 = a0;
 return (ptr->field_10 * 2 | ptr->field_10 >> 31) & 4294967294;
}


// Function: init_order_test at 0x401f20
long long init_order_test()
{
 unsigned long long v3; // x0
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 20;
 v3 = init_depends_on(&v0);
 return init_depends_on(&v0);
}


// Function: init_depends_on at 0x401f48
extern unsigned int init_depends_on_static_depends;

unsigned int init_depends_on(unsigned int *a0)
{
 if (a0)
 init_depends_on_static_depends = *(a0);
 return init_depends_on_static_depends;
}


// Function: test_static_global at 0x401f80
extern char *g_402a43;

int test_static_global()
{
 unsigned int result; // [bp-0x24]
 char *v1; // [bp-0x20]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 printf("%s", g_402a43);
 printf("STM-L1-01 (global_var_access): %d\n", global_var_access() & 4294967295);
 printf("STM-L1-01 (global_var_read): %d\n", global_var_read() & 4294967295);
 v2 = 5;
 printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5) & 4294967295);
 static_local(1);
 result = 0;
 v1 = "STM-L1-03 (static_local): %d\n";
 printf("STM-L1-03 (static_local): %d\n", static_local(0) & 4294967295);
 static_local(result);
 printf(v1);
 printf("STM-L1-04 (call_static_func): %d\n", call_static_func(v2) & 4294967295);
 printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global() & 4294967295);
 printf("STM-L2-02 (call_extern_func): %d\n", call_extern_func() & 4294967295);
 printf("STM-L2-03 (read_const_data): %d\n", read_const_data() & 4294967295);
 printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var() & 4294967295);
 printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer() & 4294967295);
 printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access() & 4294967295);
 set_file_static(50);
 printf("STM-L2-06 (file_static): %d\n", get_file_static() & 4294967295);
 set_global_callback((unsigned long)double_value);
 printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(v2) & 4294967295);
 v3 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store((unsigned long)&v3) & 4294967295);
 printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init() & 4294967295);
 printf("STM-L3-01 (tls_access): %d\n", tls_access(10) & 4294967295);
 return printf("STM-L3-02 (init_order_test): %d\n", init_order_test() & 4294967295);
}


// Function: double_value at 0x402154
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: memop_memset at 0x40216c
unsigned int memop_memset(char *ptr, unsigned long n, unsigned int a2)
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 if (ptr && n)
 {
 memset(ptr, a2, n);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_memcpy at 0x4021d8
unsigned int memop_memcpy(void* ptr, void* a1, unsigned long n)
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 if (ptr && a1 && n)
 {
 memcpy(ptr, a1, n);
 v0 = *((int *)(-4 + (char *)ptr + 4 * n / 4));
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_memmove at 0x402260
unsigned int memop_memmove(struct_0_memmove *ptr, unsigned long a1)
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 if (ptr && 2 <= a1)
 {
 memmove(&ptr->field_1, ptr, a1 - 1);
 v0 = ptr->field_1;
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_memcmp at 0x4022d4
unsigned int memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v5; // w8
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (a0 && a1 && a2)
 {
 v1 = memcmp(a0, a1, a2);
 if (v1 > 0)
 {
 v0 = 1;
 }
 else
 {
 if (0 <= v1)
 v5 = 0;
 else
 v5 = 4294967295;
 v0 = v5;
 }
 v2 = v0;
 return v2;
 }
 v2 = 0;
 return v2;
}


// Function: memop_bzero at 0x40237c
unsigned int memop_bzero(char *ptr, unsigned long n)
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 if (ptr)
 {
 memset(ptr, 0, n);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_bcopy at 0x4023d8
unsigned int memop_bcopy(void* a0, char *ptr, unsigned long a2)
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 if (a0 && ptr && a2)
 {
 bcopy(a0, ptr, a2);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_unaligned_access at 0x402450
unsigned int memop_unaligned_access(struct_0_unaligned *ptr)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x4]

 if (ptr)
 {
 v0 = *((int *)&(&ptr->padding_0)[1]);
 v1 = v0;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: memop_memory_barrier at 0x402494
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x4]

 if (ptr)
 {
 v0 = *(ptr);
 __asm__ __volatile__("" ::: "memory");
 v1 = v0 + *(ptr);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: test_memory_op_functions at 0x4024e8
extern char *g_402ca6;

int test_memory_op_functions()
{
 char *v0; // [bp-0x1c8]
 char *v1; // [bp-0x1c0]
 unsigned long long v2; // [bp-0x1b8]
 unsigned int v3; // [bp-0x1ac]
 unsigned long long v4; // [bp-0x1a8]
 unsigned int result; // [bp-0x19c]
 unsigned int v6; // [bp-0x198]
 char v7[10]; // [bp-0x192]
 unsigned long long v8; // [bp-0x188]
 unsigned int v9; // [bp-0x180]
 unsigned long long v10; // [bp-0x178]
 unsigned int v11; // [bp-0x170]
 char v12; // [bp-0x168]
 char v13[9]; // [bp-0x161]
 char v14; // [bp-0x158]
 char v15; // [bp-0x140], Other Possible Types: unsigned long long
 unsigned int v16; // [bp-0x130]
 char v17[256]; // [bp-0x120]
 char *v18; // [bp-0x20]
 char v19; // [bp+0x0]

 v18 = &v19;
 printf("%s", g_402ca6);
 v0 = &v15;
 v15 = 3169126501123975826038943907850;
 v16 = 50;
 v1 = &v14;
 memset(&v14, 0, 20);
 v2 = 10;
 printf("MEMOP-L2-01: %d\n", memop_memset((char *)&v17, 10, 65) & 4294967295);
 printf("MEMOP-L2-02: %d\n", memop_memcpy(v1, v0, 20) & 4294967295);
 strncpy(&v12, "HelloWor", 8);
 strncpy(v13, "rld", 3);
 printf("MEMOP-L2-03: %c\n", (char)(memop_memmove((struct_0_memmove *)&v12, v2) & 4294967295));
 v10 = 8589934593;
 v11 = 3;
 v8 = 8589934593;
 v9 = 4;
 printf("MEMOP-L2-04: %d\n", memop_memcmp(&v10, &v8, 12) & 4294967295);
 printf("MEMOP-L2-05: %d\n", memop_bzero((char *)&v7, v2) & 4294967295);
 v6 = 67305985;
 result = 0;
 printf("MEMOP-L2-06: %d\n", memop_bcopy(&v6, (char *)&result, 4) & 4294967295);
 v4 = 0x706050403020100;
 printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access((struct_0_unaligned *)&v4) & 4294967295);
 v3 = 5;
 return printf("MEMOP-L3-02: %d\n", memop_memory_barrier(&v3) & 4294967295);
}


// Function: main at 0x4026a8
int main(void)
{
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 result = 0;
 flag1 = 0;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: extern_function at 0x4026e0
unsigned int extern_function(unsigned int a0)
{
 return 3 * a0;
}



/* CRT stub function _fini removed by preprocessor */


