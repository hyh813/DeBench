// Angr Decompilation of 3_clang_O3_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */

#ifndef NULL
#define NULL 0
#endif

// Stub function for armg_calculate_condition
unsigned int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 1;
}

// Stub function for Clz (count leading zeros)
unsigned int Clz(unsigned int v)
{
 if (v == 0) return 32;
 unsigned int count = 0;
 while ((v & 0x80000000) == 0)
 {
  v <<= 1;
  count++;
 }
 return count;
}

// Forward declarations
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
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

typedef struct struct_4 {
 unsigned int field_0;
 struct struct_4 *field_4;
} struct_4;

typedef struct struct_5 {
 struct struct_5 *field_0;
} struct_5;

typedef struct struct_6 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_6;

typedef struct struct_7 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_7;

typedef struct struct_8 {
 char padding_0[1];
 char field_4;
} struct_8;

static unsigned int local_extern_function(unsigned int a0);
unsigned int __dollar_a_30(unsigned int a0);

// Global variable definitions
unsigned int g_413008 = 0;
unsigned int global_func_ptr = 0;
unsigned int static_local_counter = 0;
unsigned int global_counter = 0;
unsigned int global_array = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
unsigned int global_heap_ptr = 0;
char g_402a09 = 0;
char g_402a19 = 0;
char g_402a3e = 0;
char g_402a7f = 0;
char g_402d52 = 0;
char g_402d70 = 0;
char g_402d8e = 0;
char g_402db2 = 0;
void *g_402e00 = 0;
void *g_402e0c = 0;
struct_0 *const_string = 0;

// Function: sub_400568 at 0x400568

int sub_400568()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_413008;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40068c at 0x40068c
void sub_40068c()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: local_vars at 0x4007bc
int local_vars(unsigned int a0)
{
 return 10 + a0 * 2;
}


// Function: local_array at 0x4007c8
unsigned int local_array(unsigned int a0)
{
 return a0 * 5;
}


// Function: local_struct at 0x4007d0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x4007d8
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x4007e8
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x4007f4
int large_stack_frame()
{
 unsigned int i; // r0
 unsigned long v2; // [bp-0x808]
 char v0; // [bp-0x408]

 i = 0;
 do
 {
 *((char *)&v2 + i) = i;
 i += 1;
 } while (i != 0x800);
 return v0;
}


// Function: vla_stack at 0x400824
unsigned int vla_stack(unsigned int a0)
{
 unsigned int v3; // r5
 unsigned int v4; // r4
 unsigned int idx; // r3
 unsigned int result; // r2
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 if ((char)armg_calculate_condition(49, a0 + 4294966295, 1000, 0))
 return 4294967295;
 v2 = v3;
 v1 = v4;
 idx = 0;
 result = a0;
 do
 {
 *((unsigned int *)&(&v0)[2 * idx + -1 * (7 + a0 * 4 & 0xfffffff8)]) = idx;
 idx += 2;
 result -= 1;
 } while (result != 1);
 return *((int *)&(&v0)[(4294967293 & (a0 + (a0 >> 31)) * 2) + -1 * (7 + a0 * 4 & 0xfffffff8)]);
}


// Function: alloca_usage at 0x400898
unsigned int alloca_usage(unsigned int a0)
{
 unsigned int v2; // r0
 unsigned int i; // r0
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v6; // r2
 unsigned int idx; // r3
 unsigned int v8; // [bp-0x10]
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 if (a0 < 1)
 {
 v2 = 4294967295;
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_4008a4;
 return 4294967295;
 i = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_4008a4;
 return a0;
 i = a0;
 }
LABEL_4008a4:
 v1 = v4;
 v0 = v5;
 v6 = 0;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v8 - (7 + i * 4 & 0xfffffff8) + 4 * idx)) = v6;
 idx += 1;
 v6 += 3;
 } while (i != idx);
 return *((int *)((char *)&v8 - (7 + i * 4 & 0xfffffff8) + (4294967293 & (i + (i >> 31)) * 2)));
}


// Function: stack_alias at 0x4008fc
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400904

int test_stack_memory()
{
 unsigned int i; // r0
 unsigned int v2; // r0
 unsigned long v3; // [bp-0x808]
 char v0; // [bp-0x408]

 puts(&g_402d52);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 i = 0;
 do
 {
 *((char *)&v3 + i) = i;
 i += 1;
 } while (i != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", v0);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 v2 = printf("MEM-L2-04 (stack_alias): %d\n", 20);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x4009f0
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // r4
 void* ptr; // r0
 unsigned int idx; // r1
 unsigned int result; // r2

 v0 = a0;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (v0 >= 1)
 {
 idx = 0;
 result = v0;
 do
 {
 *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
 idx += 2;
 result -= 1;
 } while (result != 1);
 }
 free(ptr);
 return *((int *)((char *)ptr + (4294967293 & (v0 + (v0 >> 31)) * 2)));
}


// Function: heap_calloc at 0x400a58

unsigned int heap_calloc(unsigned int a0)
{
 struct_0 *ptr; // r0
 unsigned int v1; // r4
 struct_0 *ptr1; // r1
 unsigned int result; // r2
 struct_0 *v4; // r1
 unsigned int v5; // r2

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 if (a0 >= 2)
 {
 ptr1 = &ptr->field_4;
 result = a0 - 1;
 v1 = 0;
 do
 {
 v4 = &ptr1->field_4;
 v5 = result - 1;
 v1 += ptr1->field_0;
 ptr1 = v4;
 result = v5;
 } while (result != 1);
 }
 free(ptr);
 return v1;
}


// Function: heap_realloc at 0x400ab8
unsigned int heap_realloc()
{
 unsigned int *ptr; // r0
 unsigned int *ptr2; // r4
 unsigned int *p; // r0
 unsigned int v3; // r1
 unsigned int v4; // r5

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 ptr[3] = 4;
 ptr[4] = 5;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 p = realloc(ptr, 40);
 if (p)
 {
 p[9] = 90;
 v3 = p[2];
 p[6] = 60;
 p[5] = 50;
 ptr2 = p;
 p[7] = 70;
 p[8] = 80;
 v4 = (v3 == 3 ? 50 : 4294967293);
 }
 else
 {
 v4 = 4294967294;
 }
 free(ptr2);
 return v4;
}


// Function: heap_array at 0x400b74
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v2; // r1
 unsigned int *ptr1; // r2
 unsigned int result; // r3
 unsigned int *v5; // r2

 v0 = a0;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (v0 >= 1)
 {
 v2 = 0;
 ptr1 = ptr;
 result = v0;
 do
 {
 v5 = ptr1 + 1;
 *(ptr1) = v2;
 v2 += 3;
 ptr1 = v5;
 result -= 1;
 } while (result != 1);
 }
 free(ptr);
 return *((int *)((char *)ptr + (4294967293 & (v0 + (v0 >> 31)) * 2)));
}


// Function: heap_struct at 0x400be0
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x400be8
struct_2 * heap_nested(struct_2 **addr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 struct_2 *ptr; // r0
 struct_2 *v2; // r0
 struct_2 *v3; // r0
 struct_3 *ptr2; // r4
 unsigned int *p; // r1
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 ptr = (struct_2 *)malloc(8);
 *addr = ptr;
 if (!ptr)
 {
 v2 = (struct_2 *)0xffffffff;
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400c0c;
 return (struct_2 *)0xffffffff;
 v3 = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400c0c;
 return ptr;
 v3 = ptr;
 }
LABEL_400c0c:
 ptr = v3;
 ptr->field_0 = 10;
 ptr2 = (struct_3 *)malloc(8);
 ptr->field_4 = (struct struct_3 *)ptr2;
 if (!ptr2)
 {
 free(ptr);
 return (struct_2 *)0xfffffffe;
 }
 ptr->field_0 = 20;
 ptr->field_4 = (struct struct_3 *)NULL;
 return (struct_2 *)NULL;
}


// Function: linked_list_heap at 0x400c5c
unsigned int linked_list_heap()
{
 struct_4 *ptr10; // r0
 struct_4 *ptr5; // r5
 struct_4 *ptr3; // r0
 struct_4 *v11; // r0
 struct_4 *ptr9; // r5
 struct_4 *ptr8; // r5
 struct_4 *ptr7; // r5
 struct_4 *ptr6; // r5
 struct_4 *ptr; // r0
 struct_4 *p; // r6
 struct_4 *ptr2; // r0
 struct_4 *addr; // r7
 struct_4 *ptr3b; // r0
 struct_4 *ptr4b; // r6
 struct_4 *ptr4; // r0
 unsigned int v9; // r4

 ptr10 = malloc(8);
 if (!ptr10)
 return 4294967295;
 ptr5 = ptr10;
 ptr10->field_0 = 0;
 ptr = malloc(8);
 if (!ptr)
 {
 free(ptr5);
 return 4294967295;
 }
 p = ptr;
 p->field_0 = 10;
 p->field_4 = 0;
 ptr5->field_4 = p;
 ptr2 = malloc(8);
 if (ptr2)
 {
 addr = ptr2;
 addr->field_0 = 20;
 addr->field_4 = 0;
 p->field_4 = addr;
 ptr3b = malloc(8);
 if (ptr3b)
 {
 ptr3b->field_0 = 30;
 ptr3b->field_4 = 0;
 addr->field_4 = ptr3b;
 ptr4 = malloc(8);
 if (ptr4)
 {
 v9 = 0;
 ptr3b->field_4 = ptr4;
 ptr4->field_0 = 40;
 ptr4->field_4 = 0;
 ptr3 = ptr5;
 do
 {
 v11 = ptr3->field_4;
 v9 += ptr3->field_0;
 ptr3 = v11;
 } while (ptr3 != (struct_4 *)NULL && ptr3->field_4 != (struct_4 *)NULL);
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


// Function: create_tree_node at 0x400da8
unsigned int* create_tree_node(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int *ptr; // r0
 unsigned int v5; // r1
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 ptr = malloc(12);
 if (ptr)
 v5 = 0;
 ptr[0] = a0;
 ptr[1] = v5;
 ptr[2] = v5;
 return ptr;
}


// Function: tree_heap_traversal at 0x400dd4
unsigned int tree_heap_traversal()
{
 return 60;
}


// Function: memory_leak at 0x400ddc
unsigned int memory_leak(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int ptr; // r0
 unsigned int v1; // r0
 unsigned int ptr2; // r0
 unsigned int idx; // r1

 ptr = malloc(i * 4);
 if (!ptr)
 {
 v1 = 4294967295;
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400dfc;
 return 4294967295;
 ptr = v1;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400dfc;
 return ptr;
 ptr = ptr;
 }
LABEL_400dfc:
 if (i >= 1)
 {
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while (i != idx);
 }
 return *((int *)(ptr + (4294967293 & (i + (i >> 31)) * 2)));
}


// Function: dangling_pointer at 0x400e30
struct_5 ** dangling_pointer(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 struct_5 **ptr; // r0
 struct_5 **v1; // r0
 struct_5 **v2; // r0
 struct_5 **result; // r0

 ptr = malloc(4);
 if (!ptr)
 {
 v1 = (struct_5 **)0xffffffff;
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400e4c;
 return (struct_5 **)0xffffffff;
 v2 = v1;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400e4c;
 return ptr;
 v2 = ptr;
 }
LABEL_400e4c:
 printf("value before free: %d\n", 42);
 result = v2;
 free(v2);
 return result;
}


// Function: double_free at 0x400e78
unsigned int double_free(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967294;
}


// Function: heap_overflow at 0x400e88
unsigned int heap_overflow()
{
 return 0;
}


// Function: test_heap_memory at 0x400e90
unsigned int test_heap_memory()
{
 unsigned int *ptr; // r0
 unsigned int *ptr2; // r4
 unsigned int pid; // r0
 unsigned int v13; // r0
 char *v14; // r0
 unsigned int v15; // r0
 unsigned int msg; // r0
 unsigned int v17; // r1
 unsigned int v18; // r2
 unsigned int v19; // r3
 unsigned int *p; // r0
 unsigned int v5; // r1
 unsigned int v6; // r5
 struct_7 *ptr3; // r0
 struct_7 *addr; // r4
 struct_1 *ptr3b; // r0
 unsigned int v10; // r1
 char v0; // [bp-0x18]
 unsigned int v1[1]; // [bp-0x14]

 puts(&g_402d70);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 ptr = malloc(20);
 if (ptr)
 {
 ptr2 = ptr;
 ptr[3] = 4;
 ptr[4] = 5;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 p = realloc(ptr, 40);
 if (p)
 {
 p[9] = 90;
 v5 = p[2];
 p[6] = 60;
 p[5] = 50;
 ptr2 = p;
 p[7] = 70;
 p[8] = 80;
 v6 = (v5 == 3 ? 50 : 4294967293);
 }
 else
 {
 v6 = 4294967294;
 }
 free(ptr2);
 }
 else
 {
 v6 = 4294967295;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v6);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 ptr3 = (struct_7 *)malloc(8);
 if (ptr3)
 {
 addr = ptr3;
 addr->field_0 = 10;
 ptr3b = (struct_1 *)malloc(8);
 addr->field_4 = ptr3b;
 if (ptr3b)
 {
 v10 = 0;
 ((unsigned int*)ptr3b)[0] = 20;
 ((unsigned int*)ptr3b)[1] = 0;
 }
 else
 {
 free(addr);
 v10 = 4294967294;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v10);
 if (ptr3b) free((void*)ptr3b);
 free(ptr3);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 printf("HEAP-L3-03 (memory_leak): %d\n", 2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 printf(&g_402a09, dangling_pointer(pid, v17, v18, v19, *((int *)&v0), v1));
 exit(0); /* do not return */
 }
 else if (pid >= 1)
 {
 waitpid(pid, &v1, 0);
 if (((char)v1[0] & 127))
 {
 v13 = 0x1000000 + (v1[0] & 127) * 0x1000000;
 if (v13 < 0x2000000)
 return v13;
 v14 = &g_402a3e;
 }
 else
 {
 v14 = &g_402a19;
 }
 v15 = printf(v14);
 return printf(v14);
 }
 else
 {
 perror(&g_402a7f);
 return 0;
 }
}


// Function: global_var_access at 0x401130

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x401154

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x401168

int global_array_access(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 7252;
 if (a0 <= 9)
 v0 = &global_array;
 return *((int *)(v0 + a0 * 4));
}


// Function: static_local at 0x401188

int static_local(unsigned int a0)
{
 static_local_counter = (!a0 ? static_local_counter + 1 : 0);
 return static_local_counter;
}


// Function: call_static_func at 0x4011b0
unsigned int call_static_func(unsigned int a0)
{
 return 1 | a0 * 2;
}


// Function: access_extern_global at 0x4011bc

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x4011d4
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = local_extern_function(5);
 return local_extern_function(5);
}


// Function: read_const_data at 0x4011dc

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x4011f4
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x4011fc
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401204
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x40120c

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x401220

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401234

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x401248

unsigned int call_global_callback(unsigned int a0)
{
 if (!global_func_ptr)
 {
 if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
 goto LABEL_401260;
 return 4294967295;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
 goto LABEL_401260;
 return a0;
 }
LABEL_401260:
 return ((unsigned int (*)(unsigned int))global_func_ptr)(a0);
}


// Function: global_heap_store at 0x401268

unsigned int global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x401288
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401290
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401298
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x4012a0
int test_static_global()
{
 unsigned int v1; // r1
 unsigned int v2; // r1
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x14]

 puts(&g_402d8e);
 v1 = global_counter + 1;
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n", v1);
 printf("STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 v2 = static_local_counter + 1;
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n", v2);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 printf("STM-L2-02 (call_extern_func): %d\n", local_extern_function(5));
 printf("STM-L2-03 (read_const_data): %d\n", const_string->field_4 + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = __dollar_a_30;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 global_heap_ptr = &v0;
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 v4 = printf("STM-L3-02 (init_order_test): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: __dollar_a_30 at 0x4014bc
unsigned int __dollar_a_30(unsigned int a0)
{
 return a0 * 2;
}


// Function: memop_memset at 0x4014c4
unsigned int memop_memset(char *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int n; // r3

 if (a0)
 {
 n = a1;
 if (!armg_calculate_condition(18, a0, 0, 0))
 goto LABEL_4014da;
LABEL_4014d9:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 else
 {
 n = a3;
 if (armg_calculate_condition(18, a0, 0, 0))
 goto LABEL_4014d9;
LABEL_4014da:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x401504
unsigned int memop_memcpy(void* a0, void* a1, unsigned int a2)
{
 unsigned int n; // r4
 unsigned int v1; // r4

 if (!a0)
 return 4294967295;
 if (a1)
 {
 n = a2;
 if (!armg_calculate_condition(18, a1, 0, 0))
 goto LABEL_401522;
LABEL_401521:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 else
 {
 n = v1;
 if (armg_calculate_condition(18, a1, 0, 0))
 goto LABEL_401521;
LABEL_401522:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 memcpy(a0, a1, n);
 return *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
}


// Function: memop_memmove at 0x401550
unsigned int memop_memmove(struct_8 *a0, unsigned int a1)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_4, a0, a1 - 1);
 return (unsigned int)a0->field_4;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401588
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // lr
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x4]

 if (a0)
 goto LABEL_401598;
 return 0;
LABEL_401598:
 if (a1)
 {
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a2 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a2 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 0;
 }
 v0 = v1;
 v2 = memcmp(a0, a1, a2);
 if (1 > v2)
 return (v2 ? 4294967295 : 0);
 return 1;
}


// Function: memop_bzero at 0x4015d0
char * memop_bzero(char *a0, unsigned int n)
{
 char *v2; // r0
 char *v3; // r0
 unsigned int v4; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (!a0)
 {
 v2 = 0xffffffff;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_4015dc;
 return 0xffffffff;
 v3 = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_4015dc;
 return a0;
 v3 = a0;
 }
LABEL_4015dc:
 v1 = 0;
 v0 = v4;
 memset(v3, 0, n);
 return v3;
}


// Function: memop_bcopy at 0x4015fc
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n)
{
 if (!a0)
 return 4294967295;
 if (a1)
 {
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? n : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? n : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 memmove(a1, a0, n);
 return *(a1);
}


// Function: memop_unaligned_access at 0x40163c
unsigned int memop_unaligned_access(char *a0)
{
 char *v0; // r0
 char *v1; // r0
 char *v2; // r0

 if (!a0)
 {
 v0 = (char*)0xffffffff;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401648;
 return 0xffffffff;
 v1 = v0;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401648;
 return (unsigned int)a0;
 v1 = a0;
 }
LABEL_401648:
 v2 = &v1[1];
 return v1[1] | v2[1] * 0x100 | (v2[2] | v2[3] * 0x100) * 0x10000;
}


// Function: memop_memory_barrier at 0x401668
unsigned int memop_memory_barrier(unsigned int a0)
{
 unsigned int v3; // r0
 unsigned int v4; // r0
 unsigned int v5; // r5
 unsigned int v6; // r4
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 if (!a0)
 {
 v3 = 4294967295;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401674;
 return 4294967295;
 v4 = v3;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401674;
 return a0;
 v4 = a0;
 }
LABEL_401674:
 v1 = v5;
 v0 = v6;
 return a0;
}


// Function: test_memory_op_functions at 0x401694

int test_memory_op_functions()
{
 unsigned int v6; // lr
 unsigned int v7; // r4
 unsigned int result; // r0
 unsigned int v10; // r1
 unsigned int v11; // r1
 unsigned int v0; // [bp-0x18]
 char v1; // [bp-0x14]
 char v2; // [bp-0x13]
 char v3[4]; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 puts(&g_402db2);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 strncpy(v3, "HelloWorld", 10);
 memmove((char*)((unsigned int)&v1 | 1), &v1, 9);
 printf("MEMOP-L2-03: %c\n", v2);
 result = memcmp(&g_402e00, &g_402e0c, 12);
 if (result)
 v10 = 4294967295;
 else
 v10 = result;
 v11 = v10;
 if (1 <= result)
 v11 = 1;
 printf("MEMOP-L2-04: %d\n", v11);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 __sync_synchronize(); /* do not return */
 return 0;
}



// Function: main at 0x4017d4
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: local_extern_function at 0x4017f4
static unsigned int local_extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: my_sync_fetch_and_add_4 at 0x4017fc
int my_sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: my_sync_fetch_and_sub_4 at 0x401834
int my_sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: my_sync_fetch_and_or_4 at 0x40186c
int my_sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: my_sync_fetch_and_and_4 at 0x4018a4
int my_sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: my_sync_fetch_and_xor_4 at 0x4018dc
int my_sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: my_sync_fetch_and_nand_4 at 0x401914
int my_sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: my_sync_fetch_and_add_2 at 0x401950
int my_sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_sub_2 at 0x4019b0
int my_sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_or_2 at 0x401a10
int my_sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_and_2 at 0x401a70
int my_sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_xor_2 at 0x401ad0
int my_sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_nand_2 at 0x401b30
int my_sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_add_1 at 0x401b94
int my_sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_sub_1 at 0x401bf0
int my_sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_or_1 at 0x401c4c
int my_sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_and_1 at 0x401ca8
int my_sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_xor_1 at 0x401d04
int my_sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_fetch_and_nand_1 at 0x401d60
int my_sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: my_sync_add_and_fetch_4 at 0x401dc0
int my_sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) + a1;
}


// Function: my_sync_sub_and_fetch_4 at 0x401df8
int my_sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) - a1;
}


// Function: my_sync_or_and_fetch_4 at 0x401e30
unsigned int my_sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) | a1;
}


// Function: my_sync_and_and_fetch_4 at 0x401e68
unsigned int my_sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) & a1;
}


// Function: my_sync_xor_and_fetch_4 at 0x401ea0
int my_sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) ^ a1;
}


// Function: my_sync_nand_and_fetch_4 at 0x401ed8
unsigned int my_sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return ~(*(a0) & a1);
}


// Function: my_sync_add_and_fetch_2 at 0x401f14
unsigned int my_sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_sub_and_fetch_2 at 0x401f7c
unsigned int my_sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_or_and_fetch_2 at 0x401fe4
unsigned int my_sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_and_and_fetch_2 at 0x40204c
unsigned int my_sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_xor_and_fetch_2 at 0x4020b4
unsigned int my_sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_nand_and_fetch_2 at 0x40211c
unsigned int my_sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_add_and_fetch_1 at 0x402188
unsigned int my_sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_sub_and_fetch_1 at 0x4021ec
unsigned int my_sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_or_and_fetch_1 at 0x402250
unsigned int my_sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_and_and_fetch_1 at 0x4022b4
unsigned int my_sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_xor_and_fetch_1 at 0x402318
unsigned int my_sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_nand_and_fetch_1 at 0x40237c
unsigned int my_sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (0);
 return 0;
}


// Function: my_sync_val_compare_and_swap_4 at 0x4023e4
int my_sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 while (*(a0) == i)
 {
 if (!0)
 return i;
 }
 return *(a0);
}


// Function: my_sync_val_compare_and_swap_2 at 0x402434
unsigned int my_sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
 {
 if (!0)
 return a1;
 }
 return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: my_sync_val_compare_and_swap_1 at 0x4024ac
unsigned int my_sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
 {
 if (!0)
 return a1;
 }
 return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: my_sync_bool_compare_and_swap_4 at 0x402520
unsigned int my_sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = 0;
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: my_sync_bool_compare_and_swap_2 at 0x40254c
unsigned int my_sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - my_sync_val_compare_and_swap_2(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: my_sync_bool_compare_and_swap_1 at 0x402568
unsigned int my_sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - my_sync_val_compare_and_swap_1(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: my_sync_synchronize at 0x402584
int my_sync_synchronize()
{
 return 0;
}


// Function: my_sync_lock_test_and_set_4 at 0x402590
int my_sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: my_sync_lock_test_and_set_2 at 0x4025c8
unsigned int my_sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (0);
 return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: my_sync_lock_test_and_set_1 at 0x402628
unsigned int my_sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (0);
 return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: my_sync_lock_release_8 at 0x402684
void my_sync_lock_release_8(unsigned int *ptr)
{
 *(ptr) = 0;
 ptr[1] = 0;
 return;
}


// Function: my_sync_lock_release_4 at 0x4026a8
void my_sync_lock_release_4(unsigned int *ptr)
{
 *(ptr) = 0;
 return;
}


// Function: my_sync_lock_release_2 at 0x4026c8
void my_sync_lock_release_2(unsigned short *ptr)
{
 *(ptr) = 0;
 return;
}


// Function: my_sync_lock_release_1 at 0x4026e8
void my_sync_lock_release_1(char *ptr)
{
 *(ptr) = 0;
 return;
}



/* CRT stub function _fini removed by preprocessor */


