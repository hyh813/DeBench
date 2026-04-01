// Angr Decompilation of 3_clang_Os_no_g
// Platform: ARMEL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Forward declarations */
unsigned int extern_function(unsigned int a0);

/* ARM condition helper for Angr decompilation */
static inline int armg_calculate_condition(int cond, unsigned int a, unsigned int b, int flags)
{
 switch (cond) {
  case 2: return a != 0;
  case 18: return a != 0;
  case 49: return (int)a < 1000;
  case 50: return a == 4;
  case 178: return a >= 1;
 default: return 1;
 }
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_400568 at 0x400568
extern unsigned int g_413008;

int sub_400568()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
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
 unsigned int v1; // r1
 unsigned int i; // r3
 unsigned long v3; // [bp-0x28]
 char v0; // [bp-0x14]

 v1 = 0;
 i = 0;
 do
 {
 (&v3)[-1 * i] = v1;
 i -= 1;
 v1 += a0;
 } while (i != 4294967286);
 return *((int *)&v0);
}


// Function: local_struct at 0x4007f8
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x400800
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400810
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x40081c
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


// Function: vla_stack at 0x40084c
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


// Function: alloca_usage at 0x4008c0
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
 goto LABEL_4008cc;
 return 4294967295;
 i = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_4008cc;
 return a0;
 i = a0;
 }
LABEL_4008cc:
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


// Function: stack_alias at 0x400924
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x40092c
extern char g_402cfe[];

int test_stack_memory()
{
 unsigned int v7; // lr
 unsigned int v8; // r6
 unsigned int v17; // r0
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int idx; // r0
 unsigned int *ptr; // r4
 unsigned int j; // r0
 unsigned int index; // r1
 unsigned int l; // r0
 unsigned int *v16; // r4
 unsigned int v0; // [bp-0x810]
 char v1; // [bp-0x7fc]
 char v2; // [bp-0x410]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]
 unsigned int v6; // [bp-0x4]

 v6 = v7;
 v5 = v8;
 v4 = v9;
 v3 = v10;
 puts(&g_402cfe);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 idx = 0;
 ptr = &v0;
 do
 {
 *((unsigned int *)((char *)&v0 + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 printf("MEM-L1-02 (local_array): %d\n", *((int *)&v1));
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 j = 0;
 do
 {
 *((char *)&v0 + j) = j;
 j += 1;
 } while (j != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", v2);
 index = 0;
 do
 {
 *((unsigned int *)((char *)&v0 + 2 * index)) = index;
 index += 2;
 } while (index != 20);
 printf("MEM-L2-02 (vla_stack): %d\n", *((int *)&v1));
 l = 0;
 do
 {
 v16 = ptr + 1;
 *(ptr) = l;
 l += 3;
 ptr = v16;
 } while (l != 30);
 printf("MEM-L2-03 (alloca_usage): %d\n", *((int *)&v1));
 v17 = printf("MEM-L2-04 (stack_alias): %d\n", 20);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400a5c
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


// Function: heap_calloc at 0x400abc
typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
} struct_0;

unsigned int heap_calloc(unsigned int a0)
{
 struct_0 *ptr; // r0
 unsigned int v1; // r4
 struct_0 *ptr2; // r1
 unsigned int result; // r2
 struct_0 *v4; // r1
 unsigned int v5; // r2

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 if (a0 >= 2)
 {
 ptr2 = &ptr->field_4;
 result = a0 - 1;
 v1 = 0;
 do
 {
 v4 = &ptr2->field_4;
 v5 = result - 1;
 v1 += ptr2->field_0;
 ptr2 = v4;
 result = v5;
 } while (result != 1);
 }
 free(ptr);
 return v1;
}


// Function: heap_realloc at 0x400b14
unsigned int heap_realloc()
{
 unsigned int *ptr; // r0
 unsigned int *p; // r4
 unsigned int index; // r0
 unsigned int v3; // r1
 unsigned int v4; // r6
 unsigned int *ptr2; // r0
 unsigned int v6; // r1
 unsigned int v7; // r5

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 p = ptr;
 index = 0;
 do
 {
 v3 = index + 1;
 p[index] = v3;
 index = v3;
 } while (index != 5);
 v4 = p[2];
 ptr = realloc(p, 40);
 if (ptr)
 {
 ptr[9] = 90;
 ptr2 = ptr;
 v6 = ptr2[2];
 ptr2[6] = 60;
 ptr2[5] = 50;
 p = ptr2;
 ptr2[7] = 70;
 ptr2[8] = 80;
 v7 = (v6 == v4 ? 50 : 4294967293);
 }
 else
 {
 v7 = 4294967294;
 }
 free(p);
 return v7;
}


// Function: heap_array at 0x400bbc
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v2; // r1
 unsigned int *ptr2; // r2
 unsigned int result; // r3
 unsigned int *v5; // r2

 v0 = a0;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (v0 >= 1)
 {
 v2 = 0;
 ptr2 = ptr;
 result = v0;
 do
 {
 v5 = ptr + 1;
 *(ptr) = v2;
 v2 += 3;
 ptr = v5;
 result -= 1;
 } while (result != 1);
 }
 free(ptr);
 return *((int *)((char *)ptr + (4294967293 & (v0 + (v0 >> 31)) * 2)));
}


// Function: heap_struct at 0x400c20
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x400c28
typedef struct struct_2 {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_2;

typedef struct struct_nested {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_nested;

typedef struct struct_3 {
 unsigned int field_0;
 unsigned int field_4;
} struct_3;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_1;

unsigned int heap_nested(struct_nested **addr)
{
 struct_2 *ptr; // r0
 struct_2 *ptr2; // r4
 unsigned int *ptr3[2]; // r0
 unsigned int *p[2]; // r1

 ptr = malloc(8);
 *(addr) = ptr;
 if (!ptr)
 return 4294947295;
 ptr = ptr;
 ptr->field_0 = 10;
 ptr = malloc(8);
 ptr->field_4 = ptr;
 if (!ptr)
 {
 free(ptr);
 return 4294967294;
 }
 ptr3[0] = (unsigned int *)ptr;
 ptr3[0][0] = 20;
 ptr3[0][1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x400c98
typedef struct struct_linked {
 unsigned int field_0;
 struct struct_linked *field_4;
} struct_linked;

unsigned int linked_list_heap()
{
 struct_linked *addr; // r0
 unsigned int v1; // r7
 unsigned int v9; // r5
 struct_linked *p; // r0
 struct_linked *v11; // r0
 struct_linked *ptr3; // r4
 unsigned int v2; // r6
 struct_linked *v4; // r4
 struct_linked *ptr4; // r1
 unsigned int result; // r6
 struct_linked *ptr; // r4

 addr = malloc(8);
 if (addr)
 {
 v1 = 0;
 v2 = 0;
 v4 = NULL;
 addr = NULL;
 do
 {
 ptr4 = addr;
 addr->field_0 = v1;
 addr->field_4 = NULL;
 ptr4->field_4 = addr;
 if (!v4)
 v4 = addr;
 if (v2 == 4)
 {
 result = (armg_calculate_condition(50, v2, 4, 0) ? 1 : 0);
 goto LABEL_400d48;
 }
 } while ((addr = malloc(8), v2 += 1, v1 += 10, addr));
 result = (v2 - 1 < 4 ? 1 : 0);
 }
 else
 {
 result = 1;
 v4 = NULL;
 }
 if (v4)
 {
 do
 {
 ptr = v4;
 free(ptr);
 v4 = ptr->field_4;
 } while (ptr->field_4);
 }
 v4 = NULL;
LABEL_400d48:
 if (result)
 return 4294967295;
 v9 = 0;
 if (!v4)
 return 0;
 p = v4;
 do
 {
 v11 = p->field_4;
 v9 += p->field_0;
 p = v11;
 } while (p->field_4);
 if (!v4)
 return v9;
 do
 {
 ptr3 = v4;
 free(ptr3);
 v4 = ptr3->field_4;
 } while (ptr3->field_4);
 return v9;
}


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


// Function: tree_heap_traversal at 0x400dd0
unsigned int tree_heap_traversal()
{
 return 60;
}


// Function: memory_leak at 0x400dd8
unsigned int memory_leak(unsigned int i)
{
 unsigned int ptr; // r0
 unsigned int idx; // r1

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i < 1)
 return *((int *)(ptr + (4294967293 & (i + (i >> 31)) * 2)));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while (i != idx);
 return *((int *)(ptr + (4294967293 & (i + (i >> 31)) * 2)));
}


// Function: dangling_pointer at 0x400e2c
unsigned int dangling_pointer()
{
 unsigned int *ptr; // r0

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 printf("value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x400e74
unsigned int double_free(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967294;
}


// Function: heap_overflow at 0x400e84
unsigned int heap_overflow()
{
 unsigned int *ptr; // r0
 unsigned int v1; // r1
 unsigned int i; // r2

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 i = 0;
 do
 {
 ptr[-1 * i] = v1;
 i -= 1;
 v1 += 100;
 } while (i != 4294967285);
 free(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x400ed0
typedef struct struct_0b {
 char padding_0[4];
 void* field_4;
} struct_0b;

extern
char g_4029b5;
extern char g_4029c5[];
extern char g_4029ea[];
extern char g_402a2b;
extern char g_402d1c[];

 int test_heap_memory()
{
 char *v12; // r0
 unsigned int v13; // r0
 unsigned int msg; // r0
 unsigned int *ptr; // r0
 unsigned int index; // r1
 unsigned int v10; // r1
 unsigned int pid; // r0
 unsigned int v0[1]; // [bp-0x10]
 struct_0 *result; // [bp-0xc]

 puts(&g_402d1c);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result));
 if (result)
 {
 free(result->field_4);
 free(result);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 ptr = malloc(20);
 if (ptr)
 {
 index = 0;
 do
 {
 ptr[index] = index;
 index += 1;
 } while (index != 5);
 v10 = ptr[2];
 }
 else
 {
 v10 = 4294967295;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v10);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
	if (!pid)
	{
	printf("%d\n", dangling_pointer());
	exit(0); /* do not return */
	}
 else if (pid >= 1)
 {
 waitpid(pid, (int *)&v0[0], 0);
	if (!((char)v0[0] & 127))
	{
	v12 = &g_4029c5;
	}
	else if (0x1000000 + (v0[0] & 127) * 0x1000000 >= 0x2000000)
 {
 v12 = &g_4029ea;
 }
 else
 {
 return 0x1000000 + (*(v0) & 127) * 0x1000000;
 }
 v13 = printf(v12);
 return printf(v12);
 }
	else
	{
	perror(&g_402a2b);
	return 0;
	}
}


// Function: global_var_access at 0x4010cc
unsigned int global_counter = 0;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x4010f0

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x401104
unsigned int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

/* Forward declarations */
unsigned int file_scope_static;

int global_array_access(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 7268;
 if (a0 <= 9)
 v0 = &global_array;
 return *((int *)(v0 + a0 * 4));
}


// Function: static_local at 0x401124
extern unsigned int static_local_counter;

int static_local(unsigned int a0)
{
 static_local_counter = (!a0 ? static_local_counter + 1 : 0);
 return static_local_counter;
}


// Function: call_static_func at 0x401154
unsigned int call_static_func(unsigned int a0)
{
 return 1 | a0 * 2;
}


// Function: access_extern_global at 0x401160
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


//// Function: call_extern_func at 0x401178
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x401180
typedef struct const_string_struct {
 char padding_0[4];
 char field_4;
} const_string_struct;

const_string_struct const_string_data = { {0}, 'A' };
const_string_struct *const_string = &const_string_data;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401198
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x4011a0
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x4011a8
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x4011b0

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x4011c4

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x4011d4
extern unsigned int global_func_ptr;
unsigned int file_scope_static = 0;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x4011e8
extern unsigned int global_func_ptr;

unsigned int call_global_callback(unsigned int a0)
{
 if (!global_func_ptr)
 {
 if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
 goto LABEL_4011fc;
 return 4294967295;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
 goto LABEL_4011fc;
 return a0;
 }
LABEL_4011fc:
 return ((unsigned int (*)(unsigned int))global_func_ptr)(a0);
}


// Function: global_heap_store at 0x401204
extern unsigned int global_heap_ptr;

unsigned int global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x401224
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x40122c
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401234
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x40123c
extern unsigned int extern_global_var;

unsigned int __dollar_a_30(unsigned int a0);
extern unsigned int file_scope_static;
char g_402d3a[] = "Testing static and global memory operations";
extern unsigned int global_counter;
;
unsigned int global_func_ptr = 0;
unsigned int global_heap_ptr = 0;
unsigned int static_local_counter = 0;

int test_static_global()
{
 unsigned int v1; // r1
 unsigned int v2; // r1
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x14]

 puts(&g_402d3a);
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
 printf("STM-L2-02 (call_extern_func): %d\n", extern_function(5));
 printf("STM-L2-03 (read_const_data): %d\n", const_string->field_4 + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = __dollar_a_30;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 v4 = printf("STM-L3-02 (init_order_test): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: __dollar_a_30 at 0x401484
unsigned int __dollar_a_30(unsigned int a0)
{
 return a0 * 2;
}


// Function: memop_memset at 0x40148c
unsigned int memop_memset(char *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int n; // r3

 if (a0)
 {
 n = a1;
 if (!armg_calculate_condition(18, a0, 0, 0))
 goto LABEL_4014a2;
LABEL_4014a1:
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
 return 4294967295;
 }
 else
 {
 n = a3;
 if (armg_calculate_condition(18, a0, 0, 0))
 goto LABEL_4014a1;
LABEL_4014a2:
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
 return 4294967295;
 }
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x4014c4
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
 goto LABEL_4014e2;
LABEL_4014e1:
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0)))
 return 4294967295;
 }
 else
 {
 n = v1;
 if (armg_calculate_condition(18, a1, 0, 0))
 goto LABEL_4014e1;
LABEL_4014e2:
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0)))
 return 4294967295;
 }
 memcpy(a0, a1, n);
 return *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
}


// Function: memop_memmove at 0x401508
typedef struct struct_memmove {
 char padding_0[1];
 char field_1;
} struct_memmove;

unsigned int memop_memmove(struct_memmove *a0, unsigned int a1)
{
 char v1[5]; // buffer
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_1, &a0->field_1, a1 - 1);
 return a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401540
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // lr
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x4]

 if (a0)
 goto LABEL_401550;
 return 0;
LABEL_401550:
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


// Function: memop_bzero at 0x401588
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
 goto LABEL_401594;
 return (char *)0xffffffff;
 v3 = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401594;
 return a0;
 v3 = a0;
 }
LABEL_401594:
 v1 = 0;
 v0 = v4;
 memset(v3, 0, n);
 return v3;
}


// Function: memop_bcopy at 0x4015b4
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n)
{
 if (!a0)
 return 4294967295;
 if (a1)
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? n : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? n : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
 return 4294967295;
 }
 memmove(a1, a0, n);
 return a1;
}


// Function: memop_unaligned_access at 0x4015ec
unsigned int memop_unaligned_access(char *a0)
{
 char v0[5]; // r0
 char v1[5]; // r0
 char v2[5]; // r0
 unsigned int temp;

 if (!a0)
 {
 temp = 0xffffffff;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_4015f8;
 return 0xffffffff;
 memcpy(v1, v0, 5);
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_4015f8;
 return (unsigned int)a0;
 memcpy(v1, a0, 5);
 }
LABEL_4015f8:
 memcpy(v2, &v1[1], 5);
 return v1[1] | v2[1] * 0x100 | (v2[2] | v2[3] * 0x100) * 0x10000;
}


// Function: memop_memory_barrier at 0x401618
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
 goto LABEL_401624;
 return 4294967295;
 v4 = v3;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401624;
 return a0;
 v4 = a0;
 }
LABEL_401624:
 v2 = 0;
 v1 = v5;
 v0 = v6;
 __sync_synchronize();
 return a0;
}


// Function: test_stack_memory at 0x40092c
extern char g_402cfe[];
char g_402cfe[] = "Testing stack memory operations";

// Function: test_heap_memory at 0x400ed0

extern char g_4029b5;
extern char g_4029c5[];
extern char g_4029ea[];
extern char g_402a2b;
extern char g_402d1c[];
char g_402d1c[] = "Testing heap memory operations";

// Function: test_memory_op_functions at 0x401644

char g_402d5e[] = "Testing memory operations";

char g_402dac[12] = "HelloWorld!";
char g_402db8[12] = "HelloWorld!";
char g_4029c5[] = "OK";
char g_4029ea[] = "Signal";

int test_memory_op_functions()
{
 unsigned int v5; // lr
 unsigned int v6; // r4
 unsigned int result; // r0
 unsigned int v9; // r1
 unsigned int v10; // r1
 unsigned int v0; // [bp-0x18]
 char v1; // [bp-0x14]
 char v2; // [bp-0x13]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 puts(&g_402d5e);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 strncpy(&v1, "HelloWorld", 10);
 memmove((char *)(&v1 + 1), &v1, 9);
 printf("MEMOP-L2-03: %c\n", v2);
 result = memcmp(&g_402dac, &g_402db8, 12);
 if (result)
 v9 = 4294967295;
 else
 v9 = result;
 v10 = v9;
 if (1 <= result)
 v10 = 1;
 printf("MEMOP-L2-04: %d\n", v10);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 __sync_synchronize();
 return v0;
}


// Function: main at 0x401780
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: extern_function at 0x4017a0
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: __sync_fetch_and_add_4 at 0x4017a8
unsigned int __sync_fetch_and_add_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x4017e0
unsigned int __sync_fetch_and_sub_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x401818
unsigned int __sync_fetch_and_or_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x401850
unsigned int __sync_fetch_and_and_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x401888
unsigned int __sync_fetch_and_xor_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x4018c0
unsigned int __sync_fetch_and_nand_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x4018fc
int __sync_fetch_and_add_2_stub(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x40195c
int __syncfetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x4019bc
int __sync_fetch_and_or_2_stub(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x401a1c
int __sync_fetch_and_and_2_stub(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x401a7c
int __sync_fetch_and_xor_2_stub(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x401adc
int __sync_fetch_and_nand_2_stub(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x401b40
int __sync_fetch_and_add_1_stub(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x401b9c
int __sync_fetch_and_sub_1_stub(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x401bf8
int __sync_fetch_and_or_1_stub(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x401c54
int __sync_fetch_and_and_1_stub(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x401cb0
int __sync_fetch_and_xor_1_stub(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x401d0c
int __sync_fetch_and_nand_1_stub(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x401d6c
unsigned int __sync_add_and_fetch_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x401da4
unsigned int __sync_sub_and_fetch_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x401ddc
unsigned int __sync_or_or_and_fetch_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x401e14
unsigned int __sync_and_and_fetch_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x401e4c
int __sync_xor_and_fetch_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x401e84
unsigned int __sync_nand_and_fetch_4_stub(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x401ec0
unsigned int __sync_add_and_fetch_2_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_sub_and_fetch_2 at 0x401f28
unsigned int __sync_sub_and_fetch_2_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_or_and_fetch_2 at 0x401f90
unsigned int __sync_or_and_fetch_2_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_and_and_fetch_2 at 0x401ff8
unsigned int __sync_and_and_fetch_2_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_xor_and_fetch_2 at 0x4020060
unsigned int __sync_xor_and_fetch_2_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_nand_and_fetch_2 at 0x4020c8
unsigned int __sync_nand_and_fetch_2_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_add_and_fetch_1 at 0x402134
unsigned int __sync_add_and_fetch_1_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_sub_and_fetch_1 at 0x402198
unsigned int __sync_sub_and_fetch_1_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_or_and_fetch_1 at 0x4021fc
unsigned int __sync_or_and_fetch_1_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_and_and_fetch_1 at 0x402260
unsigned int __sync_and_and_fetch_1_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_xor_and_fetch_1 at 0x4022c4
unsigned int __sync_xor_and_fetch_1_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_nand_and_fetch_1 at 0x402328
unsigned int __sync_nand_and_fetch_1_stub(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_val_compare_and_swap_1 at 0x402458 - Using builtin


// Function: __sync_bool_compare_and_swap_4 at 0x4024cc
_Bool __sync_bool_compare_and_swap_4_stub(unsigned int *a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = (*a0 == a1);
 if (v4)
 {
  *a0 = a2;
 }
 return v4;
}


// Function: __sync_bool_compare_and_swap_2 at 0x4024f8
_Bool __sync_bool_compare_and_swap_2_stub(unsigned short *a0, unsigned short a1, unsigned short a2)
{
 unsigned short oldval = *a0;
 if (oldval == a1)
 {
  *a0 = a2;
  return 1;
 }
 return 0;
}


// Function: __sync_bool_compare_and_swap_1 at 0x402514
_Bool __sync_bool_compare_and_swap_1_stub(unsigned char *a0, unsigned char a1, unsigned char a2)
{
 unsigned char oldval = *a0;
 if (oldval == a1)
 {
  *a0 = a2;
  return 1;
 }
 return 0;
}


// Function: __sync_synchronize at 0x402530
void __sync_synchronize_stub()
{
}


// Function: __sync_lock_test_and_set_4 at 0x40253c
int __sync_lock_test_and_set_4_stub(unsigned int *a0, unsigned int a1)
{
 unsigned int oldval = *a0;
 *a0 = a1;
 return oldval;
}


// Function: __sync_lock_test_and_set_2 at 0x402574
unsigned int __sync_lock_test_and_set_2_stub(unsigned short *a0, unsigned short a1)
{
 unsigned short oldval = *a0;
 *a0 = a1;
 return oldval;
}


// Function: __sync_lock_test_and_set_1 at 0x4025d4
unsigned char __sync_lock_test_and_set_1_stub(unsigned char *a0, unsigned char a1)
{
 unsigned char oldval = *a0;
 *a0 = a1;
 return oldval;
}


// Function: __sync_lock_release_8 at 0x402630
void __sync_lock_release_8_stub(void *ptr)
{
 __sync_synchronize();
 *(volatile unsigned int *)ptr = 0;
 *((volatile unsigned int *)ptr + 1) = 0;
 return;
}


// Function: __sync_lock_release_4 at 0x402654
void __sync_lock_release_4_stub(void *ptr)
{
 __sync_synchronize();
 *(volatile unsigned int *)ptr = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x402674
void __sync_lock_release_2_stub(void *ptr)
{
 __sync_synchronize();
 *(volatile unsigned short *)ptr = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x402694
void __sync_lock_release_1_stub(void *ptr)
{
 __sync_synchronize();
 *(volatile unsigned char *)ptr = 0;
 return;
}



/* CRT stub function _fini removed by preprocessor */


