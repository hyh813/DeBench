// Angr Decompilation of 3_clang_O0_no_g
// Platform: ARMEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>


/* CRT stub function _init removed by preprocessor */







/* CRT stub function _start removed by preprocessor */



// Function: sub_4006b8 at 0x4006b8
void sub_4006b8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: local_vars at 0x4007e8
unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = a0 * 2;
 v0 = v1 + 10;
 return v0;
}


// Function: local_array at 0x40081c
unsigned int local_array(unsigned int a0)
{
 unsigned int idx; // [bp-0x30]
 unsigned long v2; // [bp-0x2c]
 char v1; // [bp-0x18]

 for (idx = 0; 9 >= idx; idx += 1)
 {
 (&v2)[idx] = idx * a0;
 }
 return *((int *)&v1);
}


// Function: local_struct at 0x400874
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0 * 2;
 return a0 + v0;
}


// Function: address_of_local at 0x4008a4
unsigned int address_of_local(unsigned int ptr)
{
 unsigned int v0; // [bp-0x8]

 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: address_of_array at 0x4008cc
int address_of_array(unsigned int *a0)
{
 unsigned int *v0; // [bp-0xc]
 unsigned int *v1; // [bp-0x8]

 v1 = a0;
 v0 = a0;
 return *(v1) + *(v0);
}


// Function: large_stack_frame at 0x400900
int large_stack_frame()
{
 unsigned int i; // [bp-0x814]
 unsigned long v2; // [bp-0x810]
 char v1; // [bp-0x410]

 for (i = 0; 0x800 > i; i += 1)
 {
 *((char *)&v2 + i) = i;
 }
 return v1;
}


// Function: vla_stack at 0x40095c
unsigned int vla_stack(unsigned int a0)
{
 char *ptr; // [bp-0x28], Other Possible Types: char
 unsigned int idx; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 char *v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x14]

 if (a0 >= 1 && a0 <= 1000)
 {
 v3 = &ptr;
 ptr = &(&ptr)[-1 * (7 + a0 * 4 & 0xfffffff8)];
 v2 = a0;
 for (idx = 0; a0 > idx; idx += 1)
 {
 *((unsigned int *)&ptr[4 * idx]) = idx * 2;
 }
 v4 = *((int *)&ptr[4294967293 & (a0 + (a0 >> 31)) * 2]);
 return v4;
 }
 v4 = 4294967295;
 return v4;
}


// Function: alloca_usage at 0x400a40
unsigned int alloca_usage(unsigned int a0)
{
 char _is_1; // [bp-0x20]
 unsigned int idx; // [bp-0x1c]
 char *ptr; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]

 if (0 >= a0)
 {
 v2 = 4294967295;
 return v2;
 }
 ptr = (char *)&_is_1 - (7 + a0 * 4 & 0xfffffff8);
 for (idx = 0; a0 > idx; idx += 1)
 {
 *((unsigned int *)&ptr[4 * idx]) = idx * 3;
 }
 v2 = *((int *)&ptr[4294967293 & (a0 + (a0 >> 31)) * 2]);
 return v2;
}


// Function: stack_alias at 0x400b00
unsigned int stack_alias(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 char *v1; // [bp-0xc], Other Possible Types: unsigned int
 char *v2; // [bp-0x8], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x4]

 v2 = a0;
 v1 = a1;
 v0 = 10;
 v2 = &v0;
 v1 = &v0;
 if (v2 == v1 && v2)
 {
 v0 = 20;
 v3 = v0;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: test_stack_memory at 0x400b78
extern char g_4035b4[];

int test_stack_memory()
{
 unsigned int v18; // r0
 unsigned int v0; // [bp-0x4c]
 unsigned int v1; // [bp-0x48]
 char *v2; // [bp-0x44]
 unsigned int v3; // [bp-0x40]
 unsigned int result; // [bp-0x3c]
 unsigned int v5; // [bp-0x38]
 char v6; // [bp-0x34], Other Possible Types: unsigned int
 unsigned int v7; // [bp-0x30]
 unsigned int v8; // [bp-0x2c]
 char v9; // [bp-0xc]

 printf(&g_4035b4);
 v0 = 5;
 printf("MEM-L1-01 (local_vars): %d\n", local_vars(5));
 v1 = 2;
 printf("MEM-L1-02 (local_array): %d\n", local_array(2));
 printf("MEM-L1-03 (local_struct): %d\n", local_struct(v0));
 printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&v9));
 v2 = &v6;
 result = 0;
 memset(&v6, 0, 40);
 v6 = 1;
 v7 = v1;
 v8 = 3;
 printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(v2));
 printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 v3 = 10;
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(v3));
 v5 = result;
 v18 = printf("MEM-L2-04 (stack_alias): %d\n", stack_alias(&v5, &v5));
 return printf("MEM-L2-04 (stack_alias): %d\n", stack_alias(&v5, &v5));
}


// Function: heap_basic at 0x400ce0
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int idx; // [bp-0x18]
 void* ptr; // [bp-0x14]
 unsigned int v3; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (idx = 0; a0 > idx; idx += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 2;
 }
 v0 = *((int *)((char *)ptr + (4294967293 & (a0 + (a0 >> 31)) * 2)));
 free(ptr);
 v3 = v0;
 return v3;
}


// Function: heap_calloc at 0x400da0
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int idx; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 void* ptr; // [bp-0x14]
 unsigned int v3; // [bp-0xc]

 ptr = calloc(a0, 4);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 v1 = 0;
 for (idx = 0; a0 > idx; idx += 1)
 {
 v1 += *((int *)((char *)ptr + 4 * idx));
 }
 free(ptr);
 v3 = v1;
 return v3;
}


// Function: heap_realloc at 0x400e50
unsigned int heap_realloc()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int index; // [bp-0x20]
 unsigned int *ptr; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int *new_ptr; // [bp-0x10]
 unsigned int v7; // [bp-0xc]

 ptr = malloc(20);
 if (!ptr)
 {
 v7 = 4294967295;
 return v7;
 }
 for (idx = 0; 4 >= idx; idx += 1)
 {
 ptr[idx] = idx + 1;
 }
 v4 = ptr[2];
 new_ptr = realloc(ptr, 40);
 if (!new_ptr)
 {
 free(ptr);
 v7 = 4294967294;
 return v7;
 }
 ptr = new_ptr;
 for (index = 5; 9 >= index; index += 1)
 {
 ptr[index] = index * 10;
 }
 v0 = (ptr[2] != v4 ? 4294967293 : ptr[5]);
 v1 = v0;
 free(ptr);
 v7 = v1;
 return v7;
}


// Function: heap_array at 0x400fb0
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int idx; // [bp-0x18]
 void* ptr; // [bp-0x14]
 unsigned int v3; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (idx = 0; a0 > idx; idx += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 3;
 }
 v0 = *((int *)((char *)ptr + (4294967293 & (a0 + (a0 >> 31)) * 2)));
 free(ptr);
 v3 = v0;
 return v3;
}


// Function: heap_struct at 0x401070
unsigned int heap_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 void* ptr[2]; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 ptr[0] = malloc(8);
 if (ptr[0])
 {
 *((unsigned int *)ptr[0]) = a0;
 *((unsigned int *)(ptr[0]) + 1) = a0 * 2;
 v0 = *((unsigned int *)ptr[0]) + *((unsigned int *)(ptr[0]) + 1);
 free(ptr[0]);
 v2 = v0;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: heap_nested at 0x4010fc
typedef struct struct_0_nested {
 unsigned int field_0;
 struct struct_1_nested *field_4;
} struct_0_nested;

typedef struct struct_1_nested {
 unsigned int field_0;
} struct_1_nested;

unsigned int heap_nested(struct_0_nested **ptr)
{
 unsigned int v0; // [bp-0xc]

 *ptr = malloc(8);
 if (!*ptr)
 {
 v0 = 4294967295;
 return v0;
 }
 (*ptr)->field_0 = 10;
 (*ptr)->field_4 = malloc(8);
 if ((*ptr)->field_4)
 {
 (*ptr)->field_4->field_0 = 20;
 v0 = 0;
 return v0;
 }
 free(*ptr);
 v0 = 4294967294;
 return v0;
}


// Function: linked_list_heap at 0x4011d0
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int linked_list_heap()
{
 struct_0 *p; // [bp-0x2c]
 struct_0 *iter; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 struct_0 *addr; // [bp-0x20]
 struct_0 *ptr; // [bp-0x1c]
 char i; // [bp-0x18], Other Possible Types: unsigned int
 struct_0 *ptr5; // [bp-0x14]
 struct_0 *cur; // [bp-0x10]
 unsigned int v8; // [bp-0xc]

 memset(&i, 0, 12);
 for (; 4 >= i; i += 1)
 {
 ptr = malloc(8);
 if (!ptr)
 {
 while (cur)
 {
 addr = cur;
 cur = cur->field_4;
 free(addr);
 }
 v8 = 4294967295;
 return v8;
 }
 ptr->field_0 = i * 10;
 ptr->field_4 = NULL;
 if (!cur)
 {
 cur = ptr;
 ptr5 = ptr;
 }
 else
 {
 ptr5->field_4 = ptr;
 ptr5 = ptr;
 }
 }
 v2 = 0;
 for (iter = cur; iter; iter = iter->field_4)
 {
 v2 += iter->field_0;
 }
 while (cur)
 {
 p = cur;
 cur = cur->field_4;
 free(p);
 }
 v8 = v2;
 return v8;
}


// Function: create_tree_node at 0x401364
typedef struct tree_node {
 unsigned int field_0;
 struct tree_node *field_4;
 struct tree_node *field_8;
} tree_node;

tree_node *create_tree_node(unsigned int a0)
{
 tree_node *ptr; // [bp-0x10]

 ptr = malloc(12);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_4 = 0;
 ptr->field_8 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x4013c4
unsigned int tree_heap_traversal()
{
 unsigned int v0; // [bp-0x14]
 tree_node *ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 ptr = create_tree_node(10);
 if (!ptr)
 {
 v2 = 4294967295;
 return v2;
 }
 ptr->field_4 = create_tree_node(20);
 ptr->field_8 = create_tree_node(30);
 if (ptr->field_4 && ptr->field_8)
 {
 v0 = ptr->field_0 + ptr->field_4->field_0 + ptr->field_8->field_0;
 free(ptr->field_4);
 free(ptr->field_8);
 free(ptr);
 v2 = v0;
 return v2;
 }
 if (ptr->field_4)
 free(ptr->field_4);
 if (ptr->field_8)
 free(ptr->field_8);
 free(ptr);
 v2 = 4294967294;
 return v2;
}


// Function: memory_leak at 0x4014fc
unsigned int memory_leak(unsigned int a0)
{
 unsigned int idx; // [bp-0x18]
 void* ptr; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v2 = 4294967295;
 return v2;
 }
 for (idx = 0; a0 > idx; idx += 1)
 {
 *((unsigned int *)((char *)ptr + idx * 4)) = idx;
 }
 v2 = *((int *)((char *)ptr + (4294967293 & (a0 + (a0 >> 31)) * 2)));
 return v2;
}


// Function: dangling_pointer at 0x4015a8
unsigned int dangling_pointer()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

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


// Function: double_free at 0x401638
unsigned int double_free(unsigned int *p)
{
 unsigned int *ptr; // [bp-0x14]
 unsigned int v1; // [bp-0xc]

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


// Function: heap_overflow at 0x4016c8
unsigned int heap_overflow()
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 ptr = malloc(40);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (i = 0; 10 >= i; i += 1)
 {
 ptr[i] = i * 100;
 }
 v0 = *(ptr);
 free(ptr);
 v3 = v0;
 return v3;
}


// Function: test_heap_memory at 0x401770
typedef struct heap_result_struct {
 char padding_0[4];
 void* field_4;
} heap_result_struct;

extern char g_4036fe[];
extern const char *g_403857;
extern const char *g_403867;
extern const char *g_40388c;
extern const char *g_4038cd;

unsigned int test_heap_memory()
{
 unsigned int msg; // r0
 unsigned int v16; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 char v2; // [bp-0x18], Other Possible Types: unsigned int
 char v3; // [bp-0x17]
 unsigned int v4; // [bp-0x14]
 unsigned int pid; // [bp-0x10]
 struct_0_nested *result; // [bp-0xc]

 printf(&g_4036fe);
 v0 = 10;
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 v1 = 5;
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(v0));
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(v1));
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result));
 if (result)
 {
 free(result->field_4);
 free(result);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 v4 = dangling_pointer();
 printf(&g_403857, v4);
 exit(0); /* do not return */
 }
 else if (pid >= 1)
 {
 waitpid(pid, &v2, 0);
 if (!(v2 & 127))
 {
 v16 = printf(&g_403867, v3);
 }
 else
 {
 v16 = ((*((int *)&v2) & 127) + 1) * 0x1000000 >> 25;
 if (v16 >= 1)
 v16 = printf(&g_40388c, v2 & 127);
 }
 return v16;
 }
 else
 {
 perror(&g_4038cd);
 return 4294967295;
 }
}


// Function: global_var_access at 0x4019b0
extern unsigned int global_counter;

/* Forward declarations */
unsigned int __dollar_a_42(unsigned int a0);
unsigned int static_helper(unsigned int a0);

/* Global variable definitions */
unsigned int global_counter = 0;
unsigned int global_array[4] = {0};
unsigned int extern_global_var = 0;
unsigned int bss_var = 0;
char bss_buffer = 0;
unsigned int file_scope_static = 0;
unsigned int global_point = 0;
unsigned int g_4140a4 = 0;
unsigned int g_4140b4 = 0;
unsigned int g_4140bc = 0;
unsigned int complex_init = 0;
unsigned int init_depends_on_static_depends = 0;
unsigned int static_local_counter = 0;
unsigned int (*global_func_ptr)(unsigned int, void*) = NULL;
struct global_heap_struct *global_heap_ptr = NULL;
struct_0 *const_string = NULL;
char g_4035b4[] = "";
char g_4036fe[] = "";
const char *g_403857 = "";
const char *g_403867 = "";
const char *g_40388c = "";
const char *g_4038cd = "";
char g_4038e3[] = "";
char g_403b46[] = "";


int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter;
}


// Function: global_var_read at 0x4019e0
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x4019f4
extern unsigned int global_array[4];

unsigned int global_array_access(unsigned int idx)
{
 unsigned int v0; // [bp-0x4]

 if (idx < 4)
 {
 v0 = global_array[idx];
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: static_local at 0x401a50
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


// Function: call_static_func at 0x401ac4
int call_static_func(unsigned int a0)
{
 return static_helper(a0) + 1;
}


// Function: static_helper at 0x401aec
unsigned int static_helper(unsigned int a0)
{
 return a0 * 2;
}


// Function: access_extern_global at 0x401b04
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401b1c
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x401b34
typedef struct const_data_struct {
 char padding_0[4];
 char field_4;
} const_data_struct;

extern struct_0 *const_string;

int read_const_data()
{
 return ((const_data_struct *)const_string)->field_4 + 42;
}


// Function: access_bss_var at 0x401b4c
extern unsigned int bss_var;

int access_bss_var()
{
 return bss_var;
}


// Function: access_bss_buffer at 0x401b5c
extern char bss_buffer;

int access_bss_buffer()
{
 return bss_buffer;
}


// Function: global_struct_access at 0x401b70
extern unsigned int g_4140a4;
extern unsigned int global_point;

int global_struct_access()
{
 return global_point + g_4140a4;
}


// Function: set_file_static at 0x401b94
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x401bb8
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401bc8
typedef unsigned int (*callback_func_ptr)(unsigned int, void*);

extern callback_func_ptr global_func_ptr;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = (callback_func_ptr)a0;
 return a0;
}


// Function: call_global_callback at 0x401bec
typedef unsigned int (*callback_func_ptr)(unsigned int, void*);

extern callback_func_ptr global_func_ptr;

unsigned int call_global_callback(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!global_func_ptr ? 4294967295 : global_func_ptr(a0, NULL));
 return v0;
}


// Function: global_heap_store at 0x401c50
typedef struct global_heap_struct {
 unsigned int field_0;
} global_heap_struct;

extern global_heap_struct *global_heap_ptr;

unsigned int global_heap_store(void *a0)
{
 unsigned int v0; // [bp-0x4]

 global_heap_ptr = (global_heap_struct *)a0;
 v0 = (!global_heap_ptr ? 4294967295 : global_heap_ptr->field_0);
 return v0;
}



// Function: tls_access at 0x401ce0
unsigned int tls_access(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a0;
 /* __aeabi_read_tp stub removed by preprocessor */
 return v0;
}


// Function: sub_401cfc at 0x401cfc
unsigned int sub_401cfc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 *((unsigned int *)(a0 + a1)) = a2;
 return *((int *)(a0 + a1)) * 2;
}


// Function: init_order_test at 0x401d18
int init_order_test()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0xc]

 v0 = 20;
 v1 = init_depends_on(&v0);
 return init_depends_on(&v0);
}


// Function: init_depends_on at 0x401d40
extern unsigned int init_depends_on_static_depends;

int init_depends_on(unsigned int *a0)
{
 if (a0)
 init_depends_on_static_depends = *(a0);
 return init_depends_on_static_depends;
}





// Function: sub_401f2c at 0x401f2c
unsigned int sub_401f2c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 printf("STM-L3-01 (tls_access): %d\n", a0);
 v0 = init_order_test();
 v1 = printf("STM-L3-02 (init_order_test): %d\n", v0);
 return printf("STM-L3-02 (init_order_test): %d\n", v0);
}


// Function: __dollar_a_42 at 0x401fa8
unsigned int __dollar_a_42(unsigned int a0)
{
 return a0 * 2;
}


// Function: memop_memset at 0x401fc0
unsigned int memop_memset(char *ptr, unsigned int n, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

 if (ptr && n)
 {
 memset(ptr, a2, n);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_memcpy at 0x402034
unsigned int memop_memcpy(char *a0, char *a1, unsigned int n)
{
 unsigned int v0; // [bp-0xc]

 if (a0 && a1 && n)
 {
 char *dest = a0;
 memcpy(dest, a1, n);
 v0 = *((int *)(dest - 4 + (n & 0xfffffffc)));
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_memmove at 0x4020c4
typedef struct memmove_struct {
 char padding_0[1];
 char field_1;
} memmove_struct;

unsigned int memop_memmove(void *ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc];

 if (ptr && 1 < a1)
 {
 memmove(&((memmove_struct *)ptr)->field_1, (char *)ptr, a1 - 1);
 v0 = ((memmove_struct *)ptr)->field_1;
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_memcmp at 0x402138
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0xc]

 if (a0 && a1 && a2)
 {
 v1 = memcmp(a0, a1, a2);
 v0 = (v1 < 1 ? v1 >> 31 : 1);
 v2 = v0;
 return v2;
 }
 v2 = 0;
 return v2;
}


// Function: memop_bzero at 0x4021e8
unsigned int memop_bzero(char *ptr, unsigned int n)
{
 unsigned int v0; // [bp-0xc]

 if (ptr)
 {
 memset(ptr, 0, n);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_bcopy at 0x402248
unsigned int memop_bcopy(void* a0, char *ptr, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

 if (a0 && ptr && a2)
 {
 bcopy(a0, ptr, a2);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: memop_unaligned_access at 0x4022cc
unsigned int memop_unaligned_access(char *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 if (ptr)
 {
 v0 = ptr[1] | ptr[2] * 0x100 | (ptr[3] | ptr[4] * 0x100) * 0x10000;
 v1 = v0;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: memop_memory_barrier at 0x40232c
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0xc]

 if (ptr)
 {
 v0 = *(ptr);
 ___sync_synchronize();
 v1 = v0;
 return v1;
 }
 v1 = 0;
 return v1;
}


// Function: test_memory_op_functions at 0x402390
extern char g_403b46[];

unsigned int test_memory_op_functions()
{
 unsigned int v32; // r0
 unsigned int v33; // r0
 char *v0; // [bp-0x188]
 unsigned int v1; // [bp-0x184]
 unsigned int result; // [bp-0x180]
 unsigned int v3[1]; // [bp-0x17c]
 unsigned int v4; // [bp-0x178]
 unsigned int v5; // [bp-0x174]
 unsigned int v6; // [bp-0x170]
 unsigned int v7; // [bp-0x16c]
 char v8[10]; // [bp-0x166]
 unsigned int flag2; // [bp-0x15c]
 unsigned int v10; // [bp-0x158]
 unsigned int v11; // [bp-0x154]
 unsigned int flag1; // [bp-0x150]
 unsigned int v13; // [bp-0x14c]
 unsigned int v14; // [bp-0x148]
 char v15; // [bp-0x144]
 char v16[2]; // [bp-0x13c]
 char v17; // [bp-0x13a]
 char v18; // [bp-0x138]
 char v19; // [bp-0x124], Other Possible Types: unsigned int
 unsigned int v20; // [bp-0x120]
 unsigned int v21; // [bp-0x11c]
 unsigned int v22; // [bp-0x118]
 unsigned int v23; // [bp-0x114]
 char v24[256]; // [bp-0x110]

 printf(&g_403b46);
 v0 = &v19;
 v19 = 10;
 v20 = 20;
 v21 = 30;
 v22 = 40;
 v23 = 50;
 result = 0;
 memset(&v18, 0, 20);
 v1 = 10;
 printf("MEMOP-L2-01: %d\n", memop_memset(&v24, 10, 65));
 printf("MEMOP-L2-02: %d\n", memop_memcpy(&v18, v0, 20));
 v17 = (char)result;
 strncpy(v16, "HelloWorld", 10);
 printf("MEMOP-L2-03: %c\n", memop_memmove(&v15, v1));
 v14 = 3;
 v13 = 2;
 flag1 = 1;
 v11 = 4;
 v10 = 2;
 flag2 = 1;
 printf("MEMOP-L2-04: %d\n", memop_memcmp(&flag1, &flag2, 12));
 printf("MEMOP-L2-05: %d\n", memop_bzero(&v8, v1));
 v7 = 67305985;
 v6 = result;
 printf("MEMOP-L2-06: %d\n", memop_bcopy(&v7, &v6, 4));
 v5 = 117835012;
 v4 = 0x3020100;
 printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v4));
 *(v3) = 5;
 v32 = memop_memory_barrier(v3);
 v33 = printf("MEMOP-L3-02: %d\n", v32);
 return printf("MEMOP-L3-02: %d\n", v32);
}


// Function: main at 0x4025b4
int main()
{
 unsigned int v3; // lr
 unsigned int result; // [bp-0x10]
 unsigned int flag1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 result = 0;
 flag1 = 0;
 test_stack_memory();
 test_heap_memory();
 test_static_global(); /* do not return */
}


// Function: sub_4025d8 at 0x4025d8
int sub_4025d8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 test_memory_op_functions();
 return a4;
}


// Function: extern_function at 0x4025ec
int extern_function(unsigned int a0)
{
 return a0 * 2;
}


// Function: __sync_fetch_and_add_4 at 0x402604
int ___sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val + a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return old_val;
}


// Function: __sync_fetch_and_sub_4 at 0x40263c
int ___sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val - a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return old_val;
}


// Function: __sync_fetch_and_or_4 at 0x402674
int ___sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val | a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return old_val;
}


// Function: ___sync_fetch_and_and_4 at 0x4026ac
unsigned int ___sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val & a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_xor_4 at 0x4026e4
/* Built-in function - implementation removed */


// Function: ___sync_fetch_and_nand_4 at 0x40271c
unsigned int ___sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = ~(old_val & a1);
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_add_2 at 0x402758
unsigned int ___sync_fetch_and_add_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val + a1;
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_sub_2 at 0x4027b8
unsigned int ___sync_fetch_and_sub_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val - a1;
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_or_2 at 0x402818
unsigned int ___sync_fetch_and_or_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val | a1;
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_and_2 at 0x402878
unsigned int ___sync_fetch_and_and_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val & a1;
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_xor_2 at 0x4028d8
unsigned int ___sync_fetch_and_xor_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val ^ a1;
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_nand_2 at 0x402938
unsigned int ___sync_fetch_and_nand_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = ~(old_val & a1);
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_add_1 at 0x40299c
unsigned int ___sync_fetch_and_add_1(unsigned char *a0, unsigned char a1)
{
 unsigned char old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val + a1;
 } while (__sync_val_compare_and_swap_1(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_sub_1 at 0x4029f8
unsigned int ___sync_fetch_and_sub_1(unsigned char *a0, unsigned char a1)
{
 unsigned char old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val - a1;
 } while (__sync_val_compare_and_swap_1(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_or_1 at 0x402a54
unsigned int ___sync_fetch_and_or_1(unsigned char *a0, unsigned char a1)
{
 unsigned char old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val | a1;
 } while (__sync_val_compare_and_swap_1(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_and_1 at 0x402ab0
unsigned int ___sync_fetch_and_and_1(unsigned char *a0, unsigned char a1)
{
 unsigned char old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val & a1;
 } while (__sync_val_compare_and_swap_1(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: __sync_fetch_and_xor_1 at 0x402b0c
unsigned int ___sync_fetch_and_xor_1(unsigned char *a0, unsigned char a1)
{
 unsigned char old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val ^ a1;
 } while (__sync_val_compare_and_swap_1(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: ___sync_fetch_and_nand_1 at 0x402b68
unsigned int ___sync_fetch_and_nand_1(unsigned char *a0, unsigned char a1)
{
 unsigned char old_val, new_val;
 do {
 old_val = *a0;
 new_val = ~(old_val & a1);
 } while (__sync_val_compare_and_swap_1(a0, old_val, new_val) != old_val);
 return old_val;
}



// Function: ___sync_add_and_fetch_4 at 0x402bc8
unsigned int ___sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val + a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return new_val;
}



// Function: __sync_sub_and_fetch_4 at 0x402c00
int ___sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val - a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return new_val;
}


// Function: __sync_or_and_fetch_4 at 0x402c38
unsigned int ___sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val | a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return new_val;
}


// Function: __sync_and_and_fetch_4 at 0x402c70
unsigned int ___sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val & a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return new_val;
}


// Function: __sync_xor_and_fetch_4 at 0x402ca8
int ___sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val ^ a1;
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return new_val;
}


// Function: ___sync_nand_and_fetch_4 at 0x402ce0
unsigned int ___sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = ~(old_val & a1);
 } while (__sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return new_val;
}


// Function: ___sync_add_and_fetch_2 at 0x402d1c
unsigned int ___sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = (v1 & ~v0) | (((v1 & v0) + (a1 << ((char)a0 * 8 & 24 & 31))) & v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return new_val;
}


// Function: ___sync_sub_and_fetch_2 at 0x402d84
unsigned int ___sync_sub_and_fetch_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val - a1;
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return new_val;
}



// Function: ___sync_or_and_fetch_2 at 0x402dec
unsigned int ___sync_or_and_fetch_2(unsigned short *a0, unsigned short a1)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = old_val | a1;
 } while (__sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return new_val;
}



// Function: __sync_and_and_fetch_2 at 0x402e54
unsigned int ___sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = v1 & ((a1 << ((char)a0 * 8 & 24 & 31)) | ~v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return new_val;
}


// Function: __sync_xor_and_fetch_2 at 0x402ebc
unsigned int ___sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = (v1 & ~v0) | (((v1 & v0) ^ (a1 << ((char)a0 * 8 & 24 & 31))) & v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return new_val;
}


// Function: __sync_nand_and_fetch_2 at 0x402f24
unsigned int ___sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = (v1 & ~v0) | (~((v1 & v0) & (a1 << ((char)a0 * 8 & 24 & 31))) & v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return new_val;
}


// Function: __sync_add_and_fetch_1 at 0x402f90
unsigned int ___sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;
 unsigned int offset = ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;

 v0 = 255 << offset;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = (v1 & ~v0) | (((v1 & v0) + (a1 << offset)) & v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return (new_val & v0) >> offset;
}


// Function: __sync_sub_and_fetch_1 at 0x402ff4
unsigned int ___sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;
 unsigned int offset = ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;

 v0 = 255 << offset;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = (v1 & ~v0) | (((v1 & v0) - (a1 << offset)) & v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return (new_val & v0) >> offset;
}


// Function: __sync_or_and_fetch_1 at 0x403058
unsigned int ___sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;
 unsigned int offset = ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;

 v0 = 255 << offset;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = v1 | (a1 << offset);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return (new_val & v0) >> offset;
}


// Function: __sync_and_and_fetch_1 at 0x4030bc
unsigned int ___sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;
 unsigned int offset = ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;

 v0 = 255 << offset;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = v1 & ((a1 << offset) | ~v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return (new_val & v0) >> offset;
}


// Function: __sync_xor_and_fetch_1 at 0x403120
unsigned int ___sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;
 unsigned int offset = ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;

 v0 = 255 << offset;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = (v1 & ~v0) | (((v1 & v0) ^ (a1 << offset)) & v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return (new_val & v0) >> offset;
}


// Function: __sync_nand_and_fetch_1 at 0x403184
unsigned int ___sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0
 unsigned int new_val;
 unsigned int offset = ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;

 v0 = 255 << offset;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 new_val = (v1 & ~v0) | (~((v1 & v0) & (a1 << offset)) & v0);
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, new_val) != v1);
 return (new_val & v0) >> offset;
}


// Function: ___sync_val_compare_and_swap_4 at 0x4031ec
unsigned int ___sync_val_compare_and_swap_4(unsigned int *a0, unsigned int a1, unsigned int a2)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = (old_val == a1) ? a2 : old_val;
 } while (__sync_bool_compare_and_swap_4(a0, old_val, new_val) != 1);
 return old_val;
}



// Function: ___sync_val_compare_and_swap_2 at 0x40323c
unsigned short ___sync_val_compare_and_swap_2(unsigned short *a0, unsigned short a1, unsigned short a2)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = (old_val == a1) ? a2 : old_val;
 } while (__sync_bool_compare_and_swap_2(a0, old_val, new_val) != 1);
 return old_val;
}



// Function: ___sync_val_compare_and_swap_1 at 0x4032b4
unsigned char ___sync_val_compare_and_swap_1(unsigned char *a0, unsigned char a1, unsigned char a2)
{
 return __sync_val_compare_and_swap(a0, a1, a2);
}



// Function: ___sync_bool_compare_and_swap_4 at 0x403328
unsigned int ___sync_bool_compare_and_swap_4(unsigned int *a0, unsigned int a1, unsigned int a2)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = (old_val == a1) ? a2 : old_val;
 } while (___sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return old_val == a1;
}



// Function: ___sync_bool_compare_and_swap_2 at 0x403354
unsigned int ___sync_bool_compare_and_swap_2(unsigned short *a0, unsigned short a1, unsigned short a2)
{
 unsigned short old_val, new_val;
 do {
 old_val = *a0;
 new_val = (old_val == a1) ? a2 : old_val;
 } while (___sync_val_compare_and_swap_2(a0, old_val, new_val) != old_val);
 return old_val == a1;
}



// Function: ___sync_bool_compare_and_swap_1 at 0x403370
unsigned int ___sync_bool_compare_and_swap_1(unsigned char *a0, unsigned char a1, unsigned char a2)
{
 return __sync_bool_compare_and_swap(a0, a1, a2);
}



// Function: ___sync_synchronize at 0x40338c
int ___sync_synchronize()
{
 __asm__ __volatile__("" ::: "memory");
 return 0;
}


// Function: ___sync_lock_test_and_set_4 at 0x403398
int ___sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val, new_val;
 do {
 old_val = *a0;
 new_val = a1;
 } while (___sync_val_compare_and_swap_4(a0, old_val, new_val) != old_val);
 return old_val;
}


// Function: ___sync_lock_test_and_set_2 at 0x4033d0
unsigned int ___sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0;
 unsigned int old_val, new_val;
 unsigned int *ptr;

 v0 = (a0 & 3) * 8;
 ptr = (unsigned int *)(a0 & ~3);
 do {
 old_val = *ptr;
 new_val = (old_val & ~(0xFFFF << v0)) | ((a1 & 0xFFFF) << v0);
 } while (__sync_val_compare_and_swap_4(ptr, old_val, new_val) != old_val);
 return (old_val >> v0) & 0xFFFF;
}


// Function: ___sync_lock_test_and_set_1 at 0x403430
unsigned int ___sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0;
 unsigned int old_val, new_val;
 unsigned int *ptr;

 v0 = (a0 & 3) * 8;
 ptr = (unsigned int *)(a0 & ~3);
 do {
 old_val = *ptr;
 new_val = (old_val & ~(0xFF << v0)) | ((a1 & 0xFF) << v0);
 } while (__sync_val_compare_and_swap_4(ptr, old_val, new_val) != old_val);
 return (old_val >> v0) & 0xFF;
}


// Function: __sync_lock_release_8 at 0x40348c
void ___sync_lock_release_8(unsigned int *ptr)
{
 ___sync_synchronize();
 *(ptr) = 0;
 ptr[1] = 0;
 return;
}


// Function: __sync_lock_release_4 at 0x4034b0
void ___sync_lock_release_4(unsigned int *ptr)
{
 ___sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x4034d0
void ___sync_lock_release_2(unsigned short *ptr)
{
 ___sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x4034f0
void ___sync_lock_release_1(char *ptr)
{
 ___sync_synchronize();
 *(ptr) = 0;
 return;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


// Function: test_static_global
int test_static_global()
{
 return 0;
}

