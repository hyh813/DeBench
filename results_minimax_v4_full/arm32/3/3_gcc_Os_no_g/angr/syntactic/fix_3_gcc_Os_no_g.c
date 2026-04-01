// Angr Decompilation of 3_gcc_Os_no_g
// Platform: ARMEL

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

/* Function declaration for armg_calculate_condition */
unsigned int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);



// Function: sub_10598 at 0x10598
extern unsigned int g_23008;

int sub_10598()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 g_23008 = v0;
 return 0;
}


// Function: main at 0x10684
unsigned int main()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r3
 unsigned int v6; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = test_stack_memory();
 v6 = test_static_global(test_heap_memory(v2, v3, v4, v5, *((int *)&v0), *((int *)&v1)), v3, v4, v5);
 test_memory_op_functions(v6, v3, v4, v5);
 return 0;
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


// Function: local_vars at 0x107a0
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x107ac
extern unsigned int __glibc___stack_chk_guard;

unsigned int local_array(unsigned int a0)
{
 unsigned int v4; // lr
 unsigned int v5; // r3
 unsigned int i; // r2
 unsigned int *ptr; // r1
 unsigned int *v8; // r1
 unsigned int v0; // [bp-0x34]
 char v1; // [bp-0x20]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 v5 = 0;
 i = 0;
 ptr = &v0;
 do
 {
 i += 1;
 v8 = ptr + 1;
 *(ptr) = v5;
 v5 += a0;
 ptr = v8;
 } while (i != 10);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return *((int *)&v1);
 __stack_chk_fail(); /* do not return */
}


// Function: local_struct at 0x10810
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x10818
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x10828
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x10834
extern unsigned int __glibc___stack_chk_guard;

int large_stack_frame()
{
 unsigned int v4; // lr
 unsigned int i; // r3
 char *ptr; // r2
 char *v7; // r2
 char v0; // [bp-0x80c]
 char v1; // [bp-0x40c]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 i = 0;
 ptr = &v0;
 do
 {
 v7 = ptr + 1;
 *(ptr) = i;
 i += 1;
 ptr = v7;
 } while (i != 0x800);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: vla_stack at 0x10898
extern unsigned int __glibc___stack_chk_guard;

unsigned int vla_stack(unsigned int a0)
{
 unsigned int v2; // r3
 unsigned int i; // r0
 char *ptr; // r2
 unsigned int idx; // r3
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 v2 = a0 - 1;
 if (1000 <= v2)
 {
 i = 4294967295;
 if (!((char)armg_calculate_condition(34, v2, 1000, 0)))
 goto LABEL_108c4;
 }
 else
 {
 i = a0;
 if (!((char)armg_calculate_condition(34, v2, 1000, 0)))
 {
LABEL_108c4:
 ptr = &(&v0)[-1 * (i * 4 + 7 & 0xfffffff8)];
 idx = 0;
 do
 {
 *((unsigned int *)&ptr[4 * idx]) = idx * 2;
 idx += 1;
 } while (i != idx);
 i = *((int *)&ptr[4 * (i >> 1)]);
 }
 }
 if (!(v1 ^ __glibc___stack_chk_guard))
 return i;
 __stack_chk_fail(); /* do not return */
}


// Function: alloca_usage at 0x10920
extern unsigned int __glibc___stack_chk_guard;

unsigned int alloca_usage(unsigned int a0)
{
 unsigned int i; // r0
 char *ptr; // r2
 unsigned int idx; // r3
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 if (a0 <= 0)
 {
 i = 4294967295;
 if (!((char)armg_calculate_condition(210, a0, 0, 0)))
 goto LABEL_10948;
 }
 else
 {
 i = a0;
 if (!((char)armg_calculate_condition(210, a0, 0, 0)))
 {
LABEL_10948:
 ptr = &(&v0)[-1 * (i * 4 + 7 & 0xfffffff8)];
 idx = 0;
 do
 {
 *((unsigned int *)&ptr[4 * idx]) = idx * 3;
 idx += 1;
 } while (i != idx);
 i = *((int *)&ptr[4 * (i >> 1)]);
 }
 }
 if (!(v1 ^ __glibc___stack_chk_guard))
 return i;
 __stack_chk_fail(); /* do not return */
}


// Function: stack_alias at 0x109a4
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x109ac
extern char g_12784;

int test_stack_memory()
{
 unsigned int v4; // r0

 puts(0x12784);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", local_array(2));
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 v4 = __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x10a90
unsigned int heap_basic(unsigned int a0)
{
 void* ptr; // r0
 unsigned int idx; // r3

 if (ptr)
 {
 idx = 0;
 }
 else if ((char)armg_calculate_condition(18, ptr, 0, 0))
 {
 for (ptr = malloc(a0 * 4); idx < a0; idx += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 2;
 }
 free(ptr);
 return *((int *)((char *)ptr + 4 * (a0 + (a0 >> 31) >> 1)));
 }
 return 4294967295;
}


// Function: heap_calloc at 0x10ae0
int heap_calloc(unsigned int a0)
{
 void* ptr; // r0
 unsigned int v1; // r3
 unsigned int v2; // r3
 unsigned int v3; // r4
 unsigned int idx; // r3
 unsigned int v5; // r4
 unsigned int v6; // r3

 ptr = calloc(a0, 4);
 if (ptr)
 {
 v1 = 0;
 if (!armg_calculate_condition(18, ptr, 0, 0))
 goto LABEL_10afa;
LABEL_10af9:
 v3 = v1;
 if ((char)armg_calculate_condition(18, ptr, 0, 0))
 goto LABEL_10b14;
 }
 else
 {
 v1 = v2;
 if (armg_calculate_condition(18, ptr, 0, 0))
 goto LABEL_10af9;
LABEL_10afa:
 if ((char)armg_calculate_condition(18, ptr, 0, 0))
 {
 while (true)
 {
LABEL_10b14:
 idx = v1;
 v5 = v3;
 if (idx >= a0)
 break;
 v6 = idx + 1;
 v3 = v5 + *((int *)((char *)ptr + 4 * idx));
 v1 = v6;
 }
 free(ptr);
 return v5;
 }
 }
 return 4294967295;
}


// Function: heap_realloc at 0x10b28
typedef struct struct_heap_realloc {
 char padding_0[8];
 unsigned int field_8;
} struct_heap_realloc;

unsigned int heap_realloc()
{
 unsigned int *ptr; // r0
 unsigned int *v2; // r4
 unsigned int *ptr_out; // r4
 struct_heap_realloc *ptr_struct; // r3

 ptr = malloc(20);
 if (!ptr)
 {
 v2 = (unsigned int *)0xffffffff;
 if ((char)armg_calculate_condition(2, (unsigned int)ptr, 0, 0))
 return 0xffffffff;
 }
 else
 {
 v2 = ptr;
 if ((char)armg_calculate_condition(2, (unsigned int)v2, 0, 0))
 return (unsigned int)ptr;
 }
 ptr = v2;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 ptr = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 return 0xfffffffe;
 }
 ptr_struct = (struct_heap_realloc *)ptr;
 if (ptr_struct->field_8 == 3)
 {
 ptr = (unsigned int *)0x32;
 if (!armg_calculate_condition(18, ptr_struct->field_8, 3, 0))
 {
 ptr = (unsigned int *)0xfffffffd;
 }
 }
 else
 {
 if (armg_calculate_condition(18, ptr_struct->field_8, 3, 0))
 {
 ptr = (unsigned int *)0xfffffffd;
 }
 }
 free(ptr);
 return (unsigned int)ptr;
}


// Function: heap_array at 0x10b98
unsigned int heap_array(unsigned int a0)
{
 void* ptr; // r0
 unsigned int idx; // r3

 if (ptr)
 {
 idx = 0;
 }
 else if ((char)armg_calculate_condition(18, ptr, 0, 0))
 {
 for (ptr = malloc(a0 * 4); idx < a0; idx += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 3;
 }
 free(ptr);
 return *((int *)((char *)ptr + 4 * (a0 + (a0 >> 31) >> 1)));
 }
 return 4294967295;
}


// Function: heap_struct at 0x10be8
unsigned int heap_struct(unsigned int a0)
{
 void* ptr; // r0

 ptr = malloc(8);
 if (!ptr)
 {
 a0 = 4294967295;
 if ((char)armg_calculate_condition(2, ptr, 0, 0))
 return 4294967295;
 }
 else if ((char)armg_calculate_condition(2, ptr, 0, 0))
 {
 return a0;
 }
 free(ptr);
 return a0 * 3;
}


// Function: heap_nested at 0x10c14
typedef struct struct_3 {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_3;

typedef struct struct_heap_nested_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_heap_nested_1;

typedef struct struct_heap_nested_2 {
 unsigned int field_0;
 struct struct_heap_nested_2 *field_4;
} struct_heap_nested_2;

unsigned int heap_nested(struct_heap_nested_2 **addr)
{
 struct_heap_nested_2 *ptr3; // r0
 struct_heap_nested_2 *p; // r4
 struct struct_heap_nested_1 *ptr; // r0

 ptr3 = malloc(8);
 *(addr) = ptr3;
 if (!ptr3)
 return 4294967295;
 p = ptr3;
 ptr3->field_0 = 10;
 ptr = malloc(8);
 p->field_4 = (struct struct_3 *)ptr;
 if (ptr)
 {
 ptr->field_0 = 20;
 ptr->field_4 = 0;
 return 0;
 }
 free(p);
 return 4294967294;
}


// Function: linked_list_heap at 0x10c80
typedef struct struct_linked_list {
 unsigned int field_0;
 struct struct_linked_list *field_4;
} struct_linked_list;

unsigned int linked_list_heap()
{
 unsigned int v0; // r5
 struct_linked_list *v1; // r0
 struct_linked_list *p; // r3
 struct_linked_list *v11; // r3
 struct_linked_list *addr; // r4
 struct_linked_list *v13; // r4
 struct_linked_list *v2; // r4
 struct_linked_list *ptr4; // r0
 struct_linked_list *cur; // r4
 struct_linked_list *ptr; // r0
 struct_linked_list *ptr5; // r4
 struct_linked_list *v8; // r4
 unsigned int v9; // r5

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while (true)
 {
 ptr4 = v1;
 cur = v2;
 if (!ptr)
 {
 for (ptr = malloc(8); cur; cur = cur->field_4)
 {
 free(cur);
 }
 return 4294967295;
 }
 else
 {
 ptr->field_0 = v0;
 ptr->field_4 = 0;
 v0 += 10;
 if (!cur)
 ptr5 = ptr;
 else
 ptr5 = cur;
 v8 = ptr5;
 ptr4->field_4 = ptr;
 v2 = v8;
 v1 = ptr;
 if (v0 == 50)
 {
 v9 = 0;
 p = v8;
 do
 {
 v11 = p->field_4;
 v9 += p->field_0;
 p = v11;
 } while (p->field_4);
 do
 {
 addr = v8;
 v13 = addr->field_4;
 free(addr);
 v8 = v13;
 } while (addr->field_4);
 return v9;
 }
 }
 }
}


// Function: create_tree_node at 0x10d20
unsigned int* create_tree_node(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int *ptr; // r0
 unsigned int v5; // r3
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 ptr = (unsigned int *)malloc(12);
 if (ptr)
 v5 = 0;
 ptr[0] = a0;
 ptr[1] = v5;
 ptr[2] = v5;
 return ptr;
}


// Function: tree_heap_traversal at 0x10d48
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_1 *field_4;
 struct struct_2 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

unsigned int tree_heap_traversal()
{
 struct_0 *flag1; // r0
 struct_0 *ptr; // r4
 struct_0 *v2; // cc_dep1
 unsigned int *result; // r3
 unsigned int v4; // r5

 flag1 = create_tree_node(10);
 ptr = flag1;
 v2 = flag1;
 if (!flag1)
 {
 if ((char)armg_calculate_condition(2, v2, 0, 0))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(2, v2, 0, 0))
 return v4;
 }
 ptr->field_4 = create_tree_node(20);
 result = create_tree_node(30);
 ptr->field_8 = result;
 if (ptr->field_4)
 {
 if (!result)
 {
 free(ptr->field_4);
 }
 else
 {
 free(ptr->field_4);
 free(ptr->field_8);
 free(ptr);
 return ptr->field_0 + ptr->field_4->field_0 + *(result);
 }
 }
 if (ptr->field_8)
 free(ptr->field_8);
 free(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x10de4
unsigned int memory_leak(unsigned int a0)
{
 unsigned int ptr; // r0
 unsigned int idx; // r3

 ptr = malloc(a0 * 4);
 if (ptr)
 {
 idx = 0;
 if (!((char)armg_calculate_condition(18, ptr, 0, 0)))
 return 4294967295;
 }
 else if (!((char)armg_calculate_condition(18, ptr, 0, 0)))
 {
 return 4294967295;
 }
 for (; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 }
 return *((int *)(ptr + (a0 + (a0 >> 31) >> 1) * 4));
}


// Function: dangling_pointer at 0x10e28
unsigned int dangling_pointer()
{
 unsigned int *ptr; // r0

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x10e68
unsigned int double_free(unsigned int *a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 void* ptr; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0)
 return *(a0);
 v1 = v2;
 v0 = v3;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: heap_overflow at 0x10ea8
unsigned int heap_overflow()
{
 unsigned int *ptr; // r0
 unsigned int i; // r3
 unsigned int *v3; // r2
 unsigned int v4; // r4

 ptr = malloc(40);
 if (!ptr)
 {
 if ((char)armg_calculate_condition(2, ptr, 0, 0))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(2, ptr, 0, 0))
 return v4;
 }
 i = 0;
 ptr = ptr + 1;
 do
 {
 v3 = ptr + 1;
 ptr[1] = i;
 i += 100;
 ptr = v3;
 } while (i != 1100);
 free(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x10ef0
typedef struct struct_test_heap {
 char padding_0[4];
 void* field_4;
} struct_test_heap;

extern unsigned int __glibc___stack_chk_guard;
extern char g_128cd;
extern char g_12a25;
extern char g_12a35;
extern char g_12a5a;
extern char g_12a9b;

unsigned int test_heap_memory(unsigned int a0, void* a1[1], unsigned int a2[1])
{
 unsigned int v5; // r3
 unsigned int pid; // r0
 unsigned int msg; // r0
 char *v18; // r1
 unsigned int v0; // [bp-0x18]
 void* v1[1]; // [bp-0x14]
 unsigned int v3[1]; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = v5;
 v3[0] = a2;
 v1[0] = a1;
 v0 = a0;
 v4 = __glibc___stack_chk_guard;
 puts(0x128cd);
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 *(v1) = NULL;
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested(&v1));
 if (*(v1))
 {
 free((int)(*(v1))[4]);
 free(*(v1));
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 __printf_chk(1, 0x12a25, dangling_pointer());
 exit(pid); /* do not return */
 }
 else if (!((char)armg_calculate_condition(210, pid, 0, 0)))
 {
 msg = waitpid(pid, &v3, 0);
 if (!((char)*(v3) & 127))
 {
 v18 = 76341;
 }
 else
 {
 if ((*(v3) & 127) + 1 < 2)
 {
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return msg;
 }
 v18 = 76378;
 }
 msg = __printf_chk(1, v18);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return msg;
 __stack_chk_fail(); /* do not return */
 }
 else
 {
 msg = (unsigned int)perror(0x12a9b);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return msg;
 __stack_chk_fail(); /* do not return */
 }
}


// Function: global_var_access at 0x110e8
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x11100
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x11114
extern unsigned int global_array[4];

unsigned int global_array_access(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (9 >= a0)
 return *((int *)(77248 + a0 * 4));
 return 4294967295;
}


// Function: static_local at 0x1112c
extern unsigned int counter_1;

int static_local(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = counter_1;
 if (armg_calculate_condition(2, a0, 0, 0))
 v0 = counter_1 + 1;
 counter_1 = v0;
 return v0;
}


// Function: call_static_func at 0x1114c
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x11158
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x1116c
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x11174
typedef struct struct_0 {
 char padding_0[4];
 char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x1118c
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x11194
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x1119c
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x111a4
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x111b4
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x111c4
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x111d4
extern unsigned int global_func_ptr;

unsigned int call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return global_func_ptr();
}


// Function: global_heap_store at 0x111f4
unsigned int global_heap_store(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x11204
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x1120c
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x11214
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x1121c
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_12aa6;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

unsigned int test_static_global()
{
 unsigned int v1; // r2
 unsigned int v7; // r0

 puts(0x12aa6);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", global_var_access());
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 v1 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", v1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", call_extern_func());
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", read_const_data());
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access());
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback());
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init());
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 v7 = __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: memop_memset at 0x113f4
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 char *v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v14; // lr
 unsigned int v15; // r4
 unsigned int v4; // cc_ndep
 char *v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 char *v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (n)
 {
 v5 = (armg_calculate_condition(18, v2, v3, v4) ? a0 : v2);
 v6 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3);
 v7 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4);
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a0 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 }
 if ((char)armg_calculate_condition(2, v5, v6, v7))
 return 4294967295;
 v1 = v14;
 v0 = v15;
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x11428
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n, unsigned int a3)
{
 void* v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v28; // lr
 unsigned int v29; // r6
 unsigned int v30; // r5
 unsigned int v31; // r4
 void* v7; // cc_dep1
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 void* v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 if (n)
 {
 v7 = (armg_calculate_condition(18, v4, v5, v6) ? a1 : v4);
 v8 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v5);
 v9 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v6);
 if (!armg_calculate_condition(2, v7, v8, v9))
 goto LABEL_11432;
LABEL_11431:
 a3 = 1;
 if (!armg_calculate_condition(18, v7, v8, v9))
 goto LABEL_11436;
LABEL_11435:
 a3 = 0;
 }
 else
 {
 v7 = (armg_calculate_condition(18, v10, v11, v12) ? a1 : v10);
 v8 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v11);
 v9 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v12);
 if (armg_calculate_condition(2, v7, v8, v9))
 goto LABEL_11431;
LABEL_11432:
 if (armg_calculate_condition(18, v7, v8, v9))
 goto LABEL_11435;
 if (!a0)
 a3 |= 1;
 (void)0;
 if (a3)
 return 4294967295;
 v3 = v28;
 v2 = v29;
 v1 = v30;
 v0 = v31;
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 0xfffffffc)));
}


// Function: memop_memmove at 0x11470
typedef struct struct_memop_0 {
 char padding_0[1];
 char field_1;
} struct_memop_0;

unsigned int memop_memmove(struct_memop_0 *a0, unsigned int a1)
{
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v12; // r4
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v11; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0)
 {
 if ((char)armg_calculate_condition(146, (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2), (armg_calculate_condition(18, v2, v3, v4) ? 1 : v3), (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4)))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(146, (armg_calculate_condition(18, v5, v6, v7) ? a1 : v5), (armg_calculate_condition(18, v5, v6, v7) ? 1 : v6), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v7)))
 return 4294967295;
 }
 v1 = v11;
 v0 = v12;
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
}


// Function: memop_memcmp at 0x114a4
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2, unsigned int a3)
{
 void* v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v26; // lr
 unsigned int v27; // r4
 unsigned int v28; // r0
 unsigned int v30; // r0
 void* v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 void* v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a2)
 {
 v5 = (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2);
 v6 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3);
 v7 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4);
 if (!armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_114ae;
LABEL_114ad:
 a3 = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_114b2;
LABEL_114b1:
 a3 = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_114ad;
LABEL_114ae:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_114b1;
 if (!a0)
 a3 |= 1;
 if (a3)
 return 0;
LABEL_114b2:
 v1 = v26;
 v0 = v27;
 v28 = memcmp(a0, a1, a2);
 if (0 < v28)
 return 1;
 if (armg_calculate_condition(18, v28, 0, 0))
 {
 v30 = 4294967295;
 if (!armg_calculate_condition(2, v28, 0, 0))
 return v30;
 }
 else
 {
 v30 = v28;
 if (!armg_calculate_condition(2, v30, 0, 0))
 return v30;
 }
 return 0;
}


// Function: memop_bzero at 0x114f0
unsigned int memop_bzero(char *a0, unsigned int n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x11518
unsigned int memop_bcopy(void* a0, void* a1, unsigned int a2)
{
 void* v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int result; // r12
 unsigned int v4; // cc_ndep
 unsigned int v27; // lr
 unsigned int v28; // r4
 void* v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 void* v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a2)
 {
 v5 = (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2);
 v6 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3);
 v7 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4);
 if (!armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_11522;
LABEL_11521:
 result = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_11526;
LABEL_11525:
 result = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_11521;
LABEL_11522:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_11525;
LABEL_11526:
 }
 if (!a0)
 result |= 1;
 if (result)
 return 4294967295;
 v1 = v27;
 v0 = v28;
 return *((char *)memmove(a1, a0, a2));
}


// Function: memop_unaligned_access at 0x1155c
extern unsigned int __glibc___stack_chk_guard;

int memop_unaligned_access(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v4; // lr
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v1 = __glibc___stack_chk_guard;
 if (!a0)
 {
 v6 = 4294967295;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_1157c;
 }
 else
 {
 v6 = a0;
 if (!((char)armg_calculate_condition(2, v6, 0, 0)))
 {
LABEL_1157c:
 memcpy(&v0, a0 + 1, 4);
 v6 = v0;
 }
 }
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: memop_memory_barrier at 0x115b8
unsigned int memop_memory_barrier(unsigned int a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize(); /* do not return */
}


// Function: test_memory_op_functions at 0x115e0
extern unsigned int __glibc___stack_chk_guard;
extern char g_12d08;
extern void g_12e14;

unsigned int test_memory_op_functions()
{
 unsigned int v21; // r3
 unsigned int v31; // r0
 unsigned int v24; // r0
 unsigned int v25; // r2
 unsigned int v26; // r2
 unsigned int v29; // r1
 unsigned int v0; // [bp-0x180]
 unsigned int flag1; // [bp-0x17c]
 unsigned int v2; // [bp-0x178]
 unsigned int v3; // [bp-0x174]
 unsigned int flag2; // [bp-0x170]
 unsigned int v5; // [bp-0x16c]
 unsigned int v6; // [bp-0x168]
 unsigned int v7; // [bp-0x164]
 unsigned int v8; // [bp-0x160]
 unsigned int v9; // [bp-0x15c]
 unsigned int v10; // [bp-0x158]
 unsigned int v11; // [bp-0x154]
 char v12; // [bp-0x150]
 unsigned int v13; // [bp-0x13c]
 unsigned int result; // [bp-0x138]
 char v15; // [bp-0x134]
 char v16[12]; // [bp-0x12c]
 char v17; // [bp-0x120]
 char v18[256]; // [bp-0x114]
 unsigned int v19; // [bp-0x14]

 v19 = __glibc___stack_chk_guard;
 puts(0x12d08);
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 memset(&v12, 0, 20);
 __printf_chk(1, "MEMOP-L2-01: %d\n", memop_memset(&v18, 10, 65));
 __printf_chk(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v12, &v7, 20, v21));
 memcpy(&v17, "HelloWorld", 11);
 __printf_chk(1, "MEMOP-L2-03: %c\n", memop_memmove(&v17, 10));
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 flag2 = 1;
 v5 = 2;
 v6 = 4;
 v24 = memcmp(&flag1, &flag2, 12);
 if (0 < v24)
 {
 v25 = 1;
 if (!((char)armg_calculate_condition(194, v24, 0, 0)))
 {
 if (armg_calculate_condition(18, v24, 0, 0))
 goto LABEL_116d1;
LABEL_116d2:
 if (armg_calculate_condition(2, v24, 0, 0))
 goto LABEL_116d5;
LABEL_116d6:
 }
 }
 else
 {
 v25 = v26;
 if (!((char)armg_calculate_condition(194, v24, 0, 0)))
 {
 if (!armg_calculate_condition(18, v24, 0, 0))
 goto LABEL_116d2;
LABEL_116d1:
 v25 = 4294967295;
 if (!armg_calculate_condition(2, v24, 0, 0))
 goto LABEL_116d6;
LABEL_116d5:
 v25 = 0;
 }
 }
 __printf_chk(1, "MEMOP-L2-04: %d\n", v25);
 __printf_chk(1, "MEMOP-L2-05: %d\n", memop_bzero(&v16, 10));
 v13 = 67305985;
 result = 0;
 __printf_chk(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v13, &result, 4));
 memcpy(&v15, 0x12e14, 8);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v15, v29, v26));
 v0 = 5;
 v31 = __printf_chk(1, "MEMOP-L3-02: %d\n", memop_memory_barrier(&v0));
 if (!(v19 ^ __glibc___stack_chk_guard))
 return v31;
 __stack_chk_fail(); /* do not return */
}


// Function: extern_function at 0x117d4
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


/* GCC sync builtins - these are compiler intrinsics, not to be redefined */



/* CRT stub function _fini removed by preprocessor */


