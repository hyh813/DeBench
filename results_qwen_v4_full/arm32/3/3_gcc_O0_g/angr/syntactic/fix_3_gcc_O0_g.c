// Angr Decompilation of 3_gcc_O0_g
// Platform: ARMEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#ifndef NULL
#define NULL 0
#endif

/* Forward declarations for linker symbols */
void __stack_chk_fail(void) __attribute__((weak));
unsigned int __aeabi_read_tp(void) __attribute__((weak));
void __sync_synchronize(void) __attribute__((weak));
unsigned int extern_function_impl(unsigned int a0) __attribute__((weak));

/* Implementations of linker symbols */
void __stack_chk_fail(void)
{
    /* Stack protection failure - abort */
    abort();
}

unsigned int __aeabi_read_tp(void)
{
    /* ARM EABI thread pointer read - return 0 for simplicity */
    return 0;
}

void __sync_synchronize(void)
{
    /* Memory barrier - no-op for simplicity */
}

unsigned int extern_function_impl(unsigned int a0)
{
    /* External function implementation - return input for simplicity */
    return a0;
}



/* External string constants - defined as string arrays */
char g_13734[] = "Stack Memory Tests:\n";
char g_13890[] = "Heap Memory Tests:\n";
char g_139fc[] = "%d\n";
char g_13a0c[] = "value after free: %d\n";
char g_13a34[] = "signaled: %d\n";
char g_13a78[] = "fork failed";
char g_13a94[] = "Static/Global Memory Tests:\n";
char g_13d18[] = "Memory Operation Tests:\n";

/* Struct type definitions */
typedef struct struct_heap_global {
 unsigned int field_0;
} struct_heap_global;

typedef struct struct_const_data {
 char padding_0[4];
 char field_4;
} struct_const_data;

/* Global variable definitions */
unsigned int local_stack_chk_guard = 0;
unsigned int global_counter = 0;
unsigned int global_array[4] = {0};
unsigned int counter_1 = 0;
extern unsigned int extern_global_var;
unsigned int bss_var = 0;
char bss_buffer = 0;
unsigned int global_point = 0;
unsigned int g_24094 = 0;
unsigned int g_24008 = 0;
unsigned int file_scope_static = 0;
unsigned int global_func_ptr = 0;
unsigned int static_depends_0 = 0;
unsigned int complex_init = 0;
unsigned int g_240a4 = 0;
unsigned int g_240ac = 0;
struct_heap_global *global_heap_ptr = NULL;
struct_const_data dummy_const_data = {0, 42};
struct_const_data *const_string = &dummy_const_data;

/* CRT stub function _init removed by preprocessor */



// Function: sub_105b4 at 0x105b4
int sub_105b4()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_106d8 at 0x106d8
void sub_106d8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x10798
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x107c0
unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = a0 * 2;
 v1 = v0 + 10;
 return v1;
}


// Function: local_array at 0x10804
unsigned int local_array(unsigned int a0)
{
 unsigned int idx; // [bp-0x38]
 unsigned long v3; // [bp-0x34]
 char v1; // [bp-0x20]
 unsigned int v2; // [bp-0xc]

 v2 = local_stack_chk_guard;
 for (idx = 0; idx <= 9; idx += 1)
 {
 (&v3)[idx] = idx * a0;
 }
 if (!(v2 ^ local_stack_chk_guard))
 return *((int *)&v1);
 __stack_chk_fail(); /* do not return */
}


// Function: local_struct at 0x10898
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0 * 2;
 return a0 + v0;
}


// Function: address_of_local at 0x108d8
unsigned int address_of_local(unsigned int ptr)
{
 unsigned int v0; // [bp-0xc]

 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: address_of_array at 0x10910
int address_of_array(unsigned int *a0)
{
 unsigned int *v0; // [bp-0x10]
 unsigned int *v1; // [bp-0xc]

 v0 = a0;
 v1 = a0;
 return *(v0) + *(v1);
}


// Function: large_stack_frame at 0x10954
int large_stack_frame()
{
 unsigned int i; // [bp-0x810]
 unsigned long v3; // [bp-0x80c]
 char v1; // [bp-0x40c]
 unsigned int v2; // [bp-0xc]

 v2 = local_stack_chk_guard;
 for (i = 0; i < 0x800; i += 1)
 {
 *((char *)&v3 + i) = i;
 }
 if (!(v2 ^ local_stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: vla_stack at 0x109ec
unsigned int vla_stack(unsigned int a0)
{
 unsigned int v5; // r3
 char v0; // [bp-0x2d]
 unsigned int idx; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int ptr; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]

 v4 = local_stack_chk_guard;
 if (a0 <= 0 || a0 > 1000)
 {
 v5 = 4294967295;
 }
 else
 {
 v2 = a0 - 1;
 ptr = (unsigned int)(&v0) - 8 * ((a0 * 4 + 7) >> 3);
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 2;
 }
 v5 = *((int *)(ptr + ((a0 >> 31) + a0 >> 1) * 4));
 }
 if (!(v4 ^ local_stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: alloca_usage at 0x10b3c
unsigned int alloca_usage(unsigned int a0)
{
 unsigned int v4; // r3
 unsigned int v0; // [bp-0x1c]
 unsigned int idx; // [bp-0x14]
 unsigned int ptr; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = a0;
 v3 = local_stack_chk_guard;
 if (0 >= v0)
 {
 v4 = 4294967295;
 }
 else
 {
 ptr = (unsigned int)(&v0) - 8 * ((v0 * 4 + 7) >> 3);
 for (idx = 0; idx < v0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 }
 v4 = *((int *)(ptr + ((v0 >> 31) + v0 >> 1) * 4));
 }
 if (!(v3 ^ local_stack_chk_guard))
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: stack_alias at 0x10c34
unsigned int stack_alias(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // r3
 char *v0; // [bp-0x18], Other Possible Types: unsigned int
 char *v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v1 = a0;
 v0 = a1;
 v3 = local_stack_chk_guard;
 v2 = 10;
 v1 = &v2;
 v0 = &v2;
 if (v1 == v0 && v1)
 {
 v2 = 20;
 v4 = v2;
 }
 else
 {
 v4 = 4294967295;
 }
 if (!(v3 ^ local_stack_chk_guard))
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: test_stack_memory at 0x10cd4
unsigned int test_stack_memory()
{
 unsigned int v15; // r0
 char v0; // [bp-0x3c]
 unsigned int flag1; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 unsigned int v6; // [bp-0xc]

 v6 = local_stack_chk_guard;
 puts(0x13734);
 printf("MEM-L1-01 (local_vars): %d\n", local_vars(5));
 printf("MEM-L1-02 (local_array): %d\n", local_array(2));
 printf("MEM-L1-03 (local_struct): %d\n", local_struct(5));
 printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&v0));
 memset(&result, 0, 40);
 result = 1;
 v4 = 2;
 v5 = 3;
 printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(&result));
 printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 flag1 = 0;
 v15 = printf("MEM-L2-04 (stack_alias): %d\n", stack_alias(&flag1, &flag1));
 if (!(v6 ^ local_stack_chk_guard))
 return v15;
 __stack_chk_fail(); /* do not return */
}


// Function: heap_basic at 0x10e68
unsigned int heap_basic(unsigned int a0)
{
 unsigned int idx; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 2;
 }
 v2 = *((int *)((char *)ptr + 4 * ((a0 >> 31) + a0 >> 1)));
 free(ptr);
 return v2;
}


// Function: heap_calloc at 0x10f24
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int idx; // [bp-0x10]
 void* ptr; // [bp-0xc]

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v0 = 0;
 for (idx = 0; idx < a0; idx += 1)
 {
 v0 += *((int *)((char *)ptr + 4 * idx));
 }
 free(ptr);
 return v0;
}


// Function: heap_realloc at 0x10fc8
unsigned int heap_realloc()
{
 unsigned int idx; // [bp-0x20]
 unsigned int index; // [bp-0x1c]
 void* ptr; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v6; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx <= 4; idx += 1)
 {
 ((unsigned int *)ptr)[idx] = idx + 1;
 }
 v3 = ((unsigned int *)ptr)[2];
 ptr = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 return 4294967294;
 }
 v6 = (unsigned int)ptr;
 for (index = 5; index <= 9; index += 1)
 {
 ((unsigned int *)ptr)[index] = index * 10;
 }
 v5 = (v3 != ((unsigned int *)ptr)[2] ? 4294967293 : ((unsigned int *)ptr)[5]);
 free(ptr);
 return v5;
}


// Function: heap_array at 0x11108
unsigned int heap_array(unsigned int a0)
{
 unsigned int i; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * i)) = i * 3;
 }
 v2 = *((int *)((char *)ptr + 4 * ((a0 >> 31) + a0 >> 1)));
 free(ptr);
 return v2;
}


// Function: heap_struct at 0x111cc
unsigned int heap_struct(unsigned int a0)
{
 unsigned int *ptr; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 ptr = (unsigned int *)malloc(8);
 if (ptr)
 {
 ptr[0] = a0;
 ptr[1] = a0 * 2;
 v1 = ptr[0] + ptr[1];
 free(ptr);
 return v1;
 }
 return 4294967295;
}


// Function: heap_nested at 0x1124c
typedef struct struct_heap_nested_0 {
 unsigned int field_0;
 struct struct_heap_nested_1 *field_4;
} struct_heap_nested_0;

typedef struct struct_heap_nested_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_heap_nested_1;

unsigned int heap_nested(struct_heap_nested_0 **ptr)
{
 struct_heap_nested_0 *local_ptr[2]; // r0

 *(ptr) = malloc(8);
 if (!*(ptr))
 return 4294967295;
 (*ptr)->field_0 = 10;
 local_ptr[0] = malloc(8);
 (*ptr)->field_4 = local_ptr[0];
 if ((*ptr)->field_4)
 {
 (*ptr)->field_4->field_0 = 20;
 (*ptr)->field_4->field_4 = 0;
 return 0;
 }
 free(*(ptr));
 return 4294967294;
}


// Function: linked_list_heap at 0x11318
typedef struct struct_linked_list {
 unsigned int field_0;
 struct struct_linked_list *field_4;
} struct_linked_list;

unsigned int linked_list_heap()
{
 struct_linked_list *k; // [bp-0x28], Other Possible Types: char
 struct_linked_list *p; // [bp-0x24]
 unsigned int i; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 struct_linked_list *iter; // [bp-0x18]
 struct_linked_list *ptr5; // [bp-0x14]
 struct_linked_list *ptr; // [bp-0x10]
 struct_linked_list *addr; // [bp-0xc]

 k = NULL;
 i = 0;
 for (; i <= 4; i += 1)
 {
 ptr = malloc(8);
 if (!ptr)
 {
 while (k)
 {
 addr = k;
 k = k->field_4;
 free(addr);
 }
 return 4294967295;
 }
 ptr->field_0 = i * 10;
 ptr->field_4 = NULL;
 if (!k)
 {
 k = ptr;
 p = ptr;
 }
 else
 {
 p->field_4 = ptr;
 p = ptr;
 }
 }
 v3 = 0;
 for (iter = k; iter; iter = iter->field_4)
 {
 v3 += iter->field_0;
 }
 while (k)
 {
 ptr5 = k;
 k = k->field_4;
 free(ptr5);
 }
 return v3;
}


// Function: create_tree_node at 0x11484
void* create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // [bp-0xc]

 ptr = malloc(12);
 if (!ptr)
 return ptr;
 ptr[0] = a0;
 ptr[1] = 0;
 ptr[2] = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x114e4
typedef struct struct_tree_node {
 unsigned int field_0;
 struct struct_tree_node *field_4;
 struct struct_tree_node *field_8;
} struct_tree_node;

unsigned int tree_heap_traversal()
{
 struct_tree_node *ptr; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 ptr = (struct_tree_node *)create_tree_node(10);
 if (!ptr)
 return 4294967295;
 ptr->field_4 = (struct_tree_node *)create_tree_node(20);
 ptr->field_8 = (struct_tree_node *)create_tree_node(30);
 if (ptr->field_4 && ptr->field_8)
 {
 v1 = ptr->field_0 + ptr->field_4->field_0 + ptr->field_8->field_0;
 free(ptr->field_4);
 free(ptr->field_8);
 free(ptr);
 return v1;
 }
 if (ptr->field_4)
 free(ptr->field_4);
 if (ptr->field_8)
 free(ptr->field_8);
 free(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x1160c
unsigned int memory_leak(unsigned int a0)
{
 unsigned int idx; // [bp-0x10]
 unsigned int ptr; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 }
 return *((int *)(ptr + ((a0 >> 31) + a0 >> 1) * 4));
}


// Function: dangling_pointer at 0x116b4
unsigned int dangling_pointer()
{
 unsigned int *ptr; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 42;
 v1 = *(ptr);
 printf("value before free: %d\n", v1);
 free(ptr);
 v2 = *(ptr);
 return v2;
 }
 return 4294967295;
}


// Function: double_free at 0x11730
unsigned int double_free(unsigned int *a0)
{
 unsigned int *ptr; // [bp-0xc]

 if (a0)
 return *(a0);
 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 10;
 free(ptr);
 free(ptr);
 return 4294967294;
 }
 return 4294967295;
}


// Function: heap_overflow at 0x117a8
unsigned int heap_overflow()
{
 unsigned int idx; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx <= 10; idx += 1)
 {
 ptr[idx] = idx * 100;
 }
 v2 = *(ptr);
 free(ptr);
 return v2;
}


// Function: test_heap_memory at 0x11850
typedef struct struct_heap_test {
 char padding_0[4];
 void* field_4;
} struct_heap_test;

unsigned int test_heap_memory()
{
 unsigned int msg; // r0
 struct_heap_test *result; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int pid; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = local_stack_chk_guard;
 puts(0x13890);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct_heap_nested_0 **)&result));
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
 v3 = dangling_pointer();
 printf(0x139fc, v3);
 exit(0); /* do not return */
 }
 if (pid > 0)
 {
 msg = waitpid(pid, &v1, 0);
 if (!((char)v1 & 127))
 {
  msg = printf(0x13a0c, v1 >> 8 & 255);
 }
 else if ((((v1 & 255 & 127 & 255) + 1 & 255) >> 1 & 255) > 0)
 {
  msg = printf(0x13a34, v1 & 127);
 }
 }
 else
 {
 perror(0x13a78);
 msg = 0;
 }
 if (!(v4 ^ local_stack_chk_guard))
 return msg;
 __stack_chk_fail(); /* do not return */
}


// Function: global_var_access at 0x11ab8
int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter;
}


// Function: global_var_read at 0x11af0
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x11b18
unsigned int global_array_access(unsigned int a0)
{
 if (a0 >= 0 && a0 <= 9)
 return global_array[a0];
 return 4294967295;
}


// Function: static_local at 0x11b68
unsigned int static_local(unsigned int a0)
{
 if (!a0)
 {
 counter_1 = counter_1 + 1;
 return counter_1;
 }
 counter_1 = 0;
 return 0;
}


// Function: static_helper at 0x11bc8
unsigned int static_helper(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_static_func at 0x11bf0
unsigned int call_static_func(unsigned int a0)
{
 return static_helper(a0) + 1;
}


// Function: access_extern_global at 0x11c1c
int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x11c44
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function_impl(5);
 return extern_function_impl(5);
}


// Function: read_const_data at 0x11c60
int read_const_data()
{
 return ((struct_const_data *)const_string)->field_4 + 42;
}


// Function: access_bss_var at 0x11c98
int access_bss_var()
{
 return bss_var;
}


// Function: access_bss_buffer at 0x11cbc
int access_bss_buffer()
{
 return bss_buffer;
}


// Function: global_struct_access at 0x11ce0
int global_struct_access()
{
 return global_point + g_24094;
}


// Function: set_file_static at 0x11d10
int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x11d40
int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x11d64
int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x11d94
typedef struct struct_callback {
 unsigned int field_0;
} struct_callback;

unsigned int call_global_callback(unsigned int a0)
{
 return (!global_func_ptr ? 4294967295 : ((unsigned int (*)(unsigned int))global_func_ptr)(a0));
}


// Function: global_heap_store at 0x11de0
unsigned int global_heap_store(unsigned int a0)
{
 global_heap_ptr = (struct_heap_global *)a0;
 return (!global_heap_ptr ? 4294967295 : global_heap_ptr->field_0);
}


// Function: static_complex_init at 0x11e34
int static_complex_init()
{
 return complex_init + g_240a4 + g_240ac;
}


// Function: tls_access at 0x11e70
unsigned int tls_access(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a0;
 (void)__aeabi_read_tp();
 return a0;
}


// Function: sub_11e84 at 0x11e84
typedef struct struct_tls_0 {
 char padding_0[8];
 unsigned int field_8;
} struct_tls_0;

void sub_11e84(struct_tls_0 *ptr)
{
 unsigned int v0; // [bp-0x8]

 ptr->field_8 = v0;
 (void)__aeabi_read_tp();
}


// Function: sub_11e98 at 0x11e98
unsigned int sub_11e98(struct_tls_0 *a0)
{
 return a0->field_8 * 2;
}


// Function: init_depends_on at 0x11eb8
int init_depends_on(unsigned int *a0)
{
 if (a0)
 static_depends_0 = *(a0);
 return static_depends_0;
}


// Function: init_order_test at 0x11f00
unsigned int init_order_test()
{
 unsigned int v2; // r0
 unsigned int v0[1]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = local_stack_chk_guard;
 v0[0] = 20;
 v2 = init_depends_on(&v0);
 if (!(v1 ^ local_stack_chk_guard))
 return v2;
 __stack_chk_fail(); /* do not return */
}


// Function: test_static_global at 0x11f60
int test_static_global()
{
 unsigned int v3; // lr
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = local_stack_chk_guard;
 puts(0x13a94);
 printf("STM-L1-01 (global_var_access): %d\n", global_var_access());
 printf("STM-L1-01 (global_var_read): %d\n", global_var_read());
 printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5));
 static_local(1);
 printf("STM-L1-03 (static_local): %d\n", static_local(0));
 printf("STM-L1-03 (static_local): %d\n", static_local(0));
 printf("STM-L1-04 (call_static_func): %d\n", call_static_func(5));
 printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global());
 printf("STM-L2-02 (call_extern_func): %d\n", call_extern_func());
 printf("STM-L2-03 (read_const_data): %d\n", read_const_data());
 printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var());
 printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer());
 printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access());
 set_file_static(50);
 printf("STM-L2-06 (file_static): %d\n", get_file_static());
 set_global_callback(double_value);
 printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5));
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store(&v0));
 printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init());
 tls_access(10);
 return 0;
}


// Function: sub_12108 at 0x12108
unsigned int sub_12108(unsigned int a0)
{
 unsigned int v1; // r0
 char v0; // [bp-0x8]

 printf("STM-L3-01 (tls_access): %d\n", a0);
 v1 = printf("STM-L3-02 (init_order_test): %d\n", init_order_test());
 if (!(*((int *)&v0) ^ local_stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: memop_memset at 0x121a4
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 if (a0 && n)
 {
 memset(a0, a2, n);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_memcpy at 0x12200
unsigned int memop_memcpy(void* a0, void* a1)
{
 unsigned int n; // r2

 if (a0 && a1 && n)
 {
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 0xfffffffc)));
 }
 return 4294967295;
}


// Function: memop_memmove at 0x12278
typedef struct struct_memop {
 char padding_0[1];
 char field_1;
} struct_memop;

unsigned int memop_memmove(struct_memop *a0, unsigned int a1)
{
 if (a0 && 1 < a1)
 {
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x122e0
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

 if (a0 && a1 && a2)
 {
 v0 = memcmp(a0, a1, a2);
 return (0 < v0 ? 1 : (0 <= v0 ? 0 : 4294967295));
 }
 return 0;
}


// Function: memop_bzero at 0x12370
unsigned int memop_bzero(char *a0, unsigned int n)
{
 if (a0)
 {
 memset(a0, 0, n);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_bcopy at 0x123c4
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n)
{
 if (a0 && a1 && n)
 {
 memmove(a1, a0, n);
 return *(a1);
 }
 return 4294967295;
}


// Function: memop_unaligned_access at 0x1242c
unsigned int memop_unaligned_access(void* a0)
{
 unsigned int v2; // r3
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = local_stack_chk_guard;
 if (!a0)
 v2 = 4294967295;
 else
 memcpy(&v0, a0 + 1, 4);
 if (!(v1 ^ local_stack_chk_guard))
 return v2;
 __stack_chk_fail(); /* do not return */
}


// Function: memop_memory_barrier at 0x124a8
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]

 if (ptr)
 {
 v0 = *(ptr);
 __sync_synchronize(); /* do not return */
 }
 return 4294967295;
}


// Function: test_memory_op_functions at 0x124f8
unsigned int test_memory_op_functions()
{
 unsigned int v28; // r0
 unsigned int v0[1]; // [bp-0x178]
 unsigned int result; // [bp-0x174]
 unsigned int v2; // [bp-0x170]
 unsigned int v3; // [bp-0x16c]
 unsigned int flag1; // [bp-0x168]
 unsigned int v5; // [bp-0x164]
 unsigned int v6; // [bp-0x160]
 unsigned int v7; // [bp-0x15c]
 unsigned int v8; // [bp-0x158]
 unsigned int v9; // [bp-0x154]
 unsigned int v10; // [bp-0x150]
 unsigned int v11; // [bp-0x14c]
 char v12; // [bp-0x148]
 unsigned int v13; // [bp-0x134]
 char flag2[4]; // [bp-0x130]
 unsigned int v15; // [bp-0x12c]
 unsigned int v16; // [bp-0x128]
 char v17[12]; // [bp-0x124]
 char v18; // [bp-0x118]
 char v19[256]; // [bp-0x10c]
 unsigned int v20; // [bp-0xc]

 v20 = local_stack_chk_guard;
 puts(0x13d18);
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 memset(&v12, 0, 20);
 printf("MEMOP-L2-01: %d\n", memop_memset(&v19, 10, 65));
 printf("MEMOP-L2-02: %d\n", memop_memcpy(&v12, &v7));
 strncpy(&v18, "HelloWorld", 10);
 printf("MEMOP-L2-03: %c\n", memop_memmove(&v18, 10));
 result = 1;
 v2 = 2;
 v3 = 3;
 flag1 = 1;
 v5 = 2;
 v6 = 4;
 printf("MEMOP-L2-04: %d\n", memop_memcmp(&result, &flag1, 12));
 printf("MEMOP-L2-05: %d\n", memop_bzero(&v17, 10));
 v13 = 67305985;
 flag2[0] = 0;
 printf("MEMOP-L2-06: %d\n", memop_bcopy(&v13, &flag2, 4));
 v15 = 0x3020100;
 v16 = 117835012;
 printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v15));
 v0[0] = 5;
 v28 = printf("MEMOP-L3-02: %d\n", memop_memory_barrier(&v0));
 if (!(v20 ^ local_stack_chk_guard))
 return v28;
 __stack_chk_fail(); /* do not return */
}


// Function: main at 0x1272c
int main()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 test_stack_memory();
 test_heap_memory();
 test_static_global(); /* do not return */
}


// Function: sub_12740 at 0x12740
unsigned int sub_12740(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 test_memory_op_functions();
 return 0;
}





// Function: __sync_fetch_and_add_4 at 0x12780
__attribute__((unused)) static int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x127b8
__attribute__((unused)) static int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x127f0
__attribute__((unused)) static int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x12828
__attribute__((unused)) static int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x12860
__attribute__((unused)) static int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x12898
__attribute__((unused)) static int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x128d4
static int __sync_fetch_and_add_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_sub_2 at 0x12934
static int __sync_fetch_and_sub_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_or_2 at 0x12994
static int __sync_fetch_and_or_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_and_2 at 0x129f4
static int __sync_fetch_and_and_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_xor_2 at 0x12a54
static int __sync_fetch_and_xor_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_nand_2 at 0x12ab4
static int __sync_fetch_and_nand_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_add_1 at 0x12b18
static int __sync_fetch_and_add_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_sub_1 at 0x12b74
static int __sync_fetch_and_sub_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_or_1 at 0x12bd0
static int __sync_fetch_and_or_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_and_1 at 0x12c2c
static int __sync_fetch_and_and_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_xor_1 at 0x12c88
static int __sync_fetch_and_xor_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_fetch_and_nand_1 at 0x12ce4
static int __sync_fetch_and_nand_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_add_and_fetch_4 at 0x12d44
static int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x12d7c
static int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x12db4
static unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x12dec
static unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x12e24
static int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x12e5c
static unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x12e98
static unsigned int __sync_add_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_sub_and_fetch_2 at 0x12f00
static unsigned int __sync_sub_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_or_and_fetch_2 at 0x12f68
static unsigned int __sync_or_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_and_and_fetch_2 at 0x12fd0
static unsigned int __sync_and_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_xor_and_fetch_2 at 0x13038
static unsigned int __sync_xor_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_nand_and_fetch_2 at 0x130a0
static unsigned int __sync_nand_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_add_and_fetch_1 at 0x1310c
static unsigned int __sync_add_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_sub_and_fetch_1 at 0x13170
static unsigned int __sync_sub_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_or_and_fetch_1 at 0x131d4
static unsigned int __sync_or_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_and_and_fetch_1 at 0x13238
static unsigned int __sync_and_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_xor_and_fetch_1 at 0x1329c
static unsigned int __sync_xor_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_nand_and_fetch_1 at 0x13300
static unsigned int __sync_nand_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_val_compare_and_swap_4 at 0x13368
static int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x133b8
static unsigned int __sync_val_compare_and_swap_2(unsigned short *a0, unsigned int a1, unsigned int a2)
{
 return 0;
}


// Function: __sync_val_compare_and_swap_1 at 0x13430
static unsigned int __sync_val_compare_and_swap_1(unsigned char *a0, unsigned int a1, unsigned int a2)
{
 return 0;
}


// Function: __sync_bool_compare_and_swap_4 at 0x134a4
static unsigned int __sync_bool_compare_and_swap_4(unsigned int *a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_2 at 0x134d0
static unsigned int __sync_bool_compare_and_swap_2(unsigned short *a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_1 at 0x134ec
static unsigned int __sync_bool_compare_and_swap_1(unsigned char *a0, unsigned int a1, unsigned int a2)
{
 return 1;
}





// Function: __sync_lock_test_and_set_4 at 0x13514
__attribute__((unused)) static int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x1354c
__attribute__((unused)) static unsigned int __sync_lock_test_and_set_2(unsigned short *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_lock_test_and_set_1 at 0x135ac
__attribute__((unused)) static unsigned int __sync_lock_test_and_set_1(unsigned char *a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_lock_release_8 at 0x13608
__attribute__((unused)) static void __sync_lock_release_8(unsigned int *ptr)
{
 *(ptr) = 0;
 ptr[1] = 0;
}


// Function: __sync_lock_release_4 at 0x1362c
__attribute__((unused)) static void __sync_lock_release_4(unsigned int *ptr)
{
 *(ptr) = 0;
}


// Function: __sync_lock_release_2 at 0x1364c
__attribute__((unused)) static void __sync_lock_release_2(unsigned short *ptr)
{
 *(ptr) = 0;
}


// Function: __sync_lock_release_1 at 0x1366c
__attribute__((unused)) static void __sync_lock_release_1(char *ptr)
{
 *(ptr) = 0;
}










/* CRT stub function _fini removed by preprocessor */


