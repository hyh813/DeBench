// Angr Decompilation of 3_gcc_O1_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/wait.h>

/* Helper function declarations */
extern void __stack_chk_fail(void);
extern int __printf_chk(int flag, const char *format, ...);
unsigned long long __ROL__(unsigned long long value, int shift);
extern char arm64g_calculate_condition(unsigned long long cc_op, unsigned long long cc_dep1, unsigned long long cc_dep2, unsigned long long cc_ndep);
unsigned int extern_function(unsigned int a0);
extern unsigned long long __stack_chk_guard;

/* Helper function implementation */
unsigned long long __ROL__(unsigned long long value, int shift)
{
    shift &= 63;
    return (value << shift) | (value >> (64 - shift));
}





/* Type definitions needed before use */
typedef struct struct_const_data {
 char padding_0[4];
 char field_4;
} struct_const_data;

/* Function pointer type for callbacks */
typedef unsigned int (*callback_func_t)(unsigned int);

/* Global variable definitions */
unsigned long long g_413f20 = 0;
char *g_402118 = "%d\n";
char *g_402150 = "%d\n";
char *g_402128 = "%d\n";
char *g_402198 = "error";
char *__dollar_d = "Stack Memory Test\n";
char *g_401fa8 = "Heap Memory Test\n";
char *g_4021a8 = "Static and Global Memory Test\n";
char *g_402458 = "Memory Operations Test\n";
unsigned int global_array[4] = {0};
unsigned int global_counter = 0;
static unsigned int file_scope_static = 0;
static unsigned int counter_1 = 0;
unsigned int static_depends_0 = 0;
struct_const_data const_string_data = {0, 0};
struct_const_data *const_string = &const_string_data;
callback_func_t global_func_ptr = NULL;

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4009b0
static long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 typedef long long (*func_t)(void);
 func_t target = (func_t)g_413f20;

 v0 = v2;
 v1 = v3;
 return target();
}


// Function: sub_4009c4 at 0x4009c4
static long long sub_4009c4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)(uintptr_t)v0;
 memcpy(v0, v1, v2);
 return dst;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400b30 at 0x400b30
static void sub_400b30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400b48 at 0x400b48
static void sub_400b48()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */



/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x400c14
static unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: local_vars at 0x400c1c
static int local_vars(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: local_array at 0x400c28
static long long local_array(unsigned long a0)
{
 char *cur; // x2
 unsigned long long v6; // x1
 char *v0; // [bp-0x40]
 char v1; // [bp-0x30]
 char v2; // [bp-0x1c]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *(unsigned long long *)((void *)&__stack_chk_guard);
 cur = (char *)&v1;
 v6 = 0;
 do
 {
 *((unsigned int *)&cur[0]) = v6;
 cur += 1;
 v6 += a0;
 } while (cur != &v3);
 if (v3 != *(unsigned long long *)((void *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (unsigned long long)(*((int *)&v2));
}


// Function: local_struct at 0x400c8c
static unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x400c94
static unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400ca4
static unsigned int address_of_array(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: large_stack_frame at 0x400cb0
static long long large_stack_frame()
{
 char *cur; // x1
 unsigned int i; // w0
 char *v0; // [bp-0x820]
 char v1; // [bp-0x808]
 char v2; // [bp-0x408]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 cur = (char *)&v1;
 i = 0;
 do
 {
 *(cur) = i;
 cur += 1;
 i += 1;
 } while (i != 0x800);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v2;
}


// Function: vla_stack at 0x400d18
typedef struct struct_vla_param {
 char padding_0[1];
} struct_vla_param;

static long long vla_stack(unsigned long a0)
{
 unsigned long v4; // x1
 unsigned long long v5; // x2
 unsigned long *ptr; // x3
 unsigned long long idx; // x1
 unsigned long v8; // x0
 unsigned long long result; // [bp-0x1fc30]
 unsigned long v9; // [bp-0x10030]
 unsigned long v10; // [bp-0x30]
 unsigned long *vvar_48; // local variable
 char *v1; // [bp-0x20]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 if (999 >= (unsigned int)a0 - 1)
 {
 for (v4 = (a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15; &v9 != (char *)&v10 - (v4 & 0xffffffffffff0000); result = 0ULL);
 v5 = v4 & 0xfffffffffffffff0 & 65535;
 vvar_48 = (unsigned long *)(void *)((char *)&v9 - v5);
 *((unsigned long long *)vvar_48) = 0;
 if (v5 >= 0x400)
 *((unsigned long *)(vvar_48 + 0x400)) = 0;
 ptr = vvar_48 + 16;
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = __ROL__((unsigned int)idx, 1) & 4294967294;
 idx += 1;
 } while ((unsigned int)idx < (unsigned int)a0);
 v8 = *((int *)(ptr + ((unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)a0 + ((unsigned int)a0 >> 31), 31) & 2147483647) * 4));
 }
 else
 {
 v8 = 4294967295;
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v8;
}


// Function: alloca_usage at 0x400de0
typedef struct struct_alloca {
 char padding_0[16];
 unsigned int field_10;
} struct_alloca;

static long long alloca_usage(unsigned long a0)
{
 unsigned long v4; // x1
 unsigned long long v5; // x2
 struct_alloca *p; // x4
 unsigned int j; // w1
 struct_alloca *ptr; // x2
 unsigned long v10; // x0
 unsigned long long result; // [bp-0x1fc30]
 unsigned long v11; // [bp-0x10030]
 unsigned long v12; // [bp-0x30]
 unsigned long *vvar_48; // local variable
 char *v1; // [bp-0x20]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 if ((unsigned int)a0 > 0)
 {
 for (v4 = (a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15; &v11 != (char *)&v12 - (v4 & 0xffffffffffff0000); result = 0);
 v5 = v4 & 0xfffffffffffffff0 & 65535;
 vvar_48 = (unsigned long *)(void *)((char *)&v11 - v5);
 *((unsigned long long *)vvar_48) = 0;
 if (v5 >= 0x400)
 *((unsigned long *)(vvar_48 + 0x400)) = 0;
 p = (struct_alloca *)(void *)(vvar_48 + 2);
 j = 0;
 ptr = (struct_alloca *)&p->padding_0[0];
 do
 {
 *((unsigned int *)&ptr->padding_0[0]) = j;
 j += 3;
 ptr = (struct_alloca *)&ptr->padding_0[4];
 } while (j != (unsigned int)a0 * 3);
 v10 = *((int *)&p->padding_0[4 * ((unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)a0 + ((unsigned int)a0 >> 31), 31) & 2147483647)]);
 }
 else
 {
 v10 = 4294967295;
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v10;
}


// Function: stack_alias at 0x400ea8
static unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400eb0

int test_stack_memory()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(__dollar_d);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400f9c
static unsigned int heap_basic(unsigned long a0)
{
 unsigned int i; // w19
 void* ptr; // x0
 unsigned long long idx; // x1
 unsigned int result;
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 i = a0;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = __ROL__((unsigned int)idx, 1) & 4294967294;
 idx += 1;
 } while ((unsigned int)idx < i);
 }
 result = *((int *)((char *)ptr + 4 * (i + (i >> 31) >> 31 & 0x80000000 | __ROL__(i + (i >> 31), 31) & 2147483647)));
 free(ptr);
 return result;
}


// Function: heap_calloc at 0x401000
static unsigned int heap_calloc(unsigned long a0)
{
 unsigned int i; // w20
 void* ptr; // x0
 unsigned long long v4; // x1
 unsigned long long v5; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 i = a0;
 ptr = calloc(a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295, 4);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 v4 = 0;
 v5 = 0;
 do
 {
 v5 += *((int *)((char *)ptr + 4 * v4));
 v4 += 1;
 } while ((unsigned int)v4 < i);
 }
 else
 {
 v5 = 0;
 }
 free(ptr);
 return v5;
}


// Function: heap_realloc at 0x401068
static unsigned int heap_realloc()
{
 unsigned int *ptr; // x0
 unsigned int *p; // x19
 unsigned int v5; // w19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 p = ptr;
 p[0] = 1;
 p[1] = 2;
 p[2] = 3;
 p[3] = 4;
 p[4] = 5;
 ptr = realloc(p, 40);
 if (!ptr)
 {
 free(p);
 return 4294967294;
 }
 ptr[5] = 50;
 ptr[6] = 60;
 ptr[7] = 70;
 ptr[8] = 80;
 ptr[9] = 90;
 v5 = 4294967293;
 if (ptr[2] == 3)
 v5 = ptr[5];
 free(ptr);
 return v5;
}


// Function: heap_array at 0x401128
static unsigned int heap_array(unsigned long a0)
{
 unsigned int v2; // w19
 unsigned int *ptr; // x0
 unsigned int i; // w1
 unsigned int *ptr2; // x2
 unsigned int result; // result value
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if (v2 > 0)
 {
 i = 0;
 ptr2 = ptr;
 do
 {
 *(ptr2) = i;
 i += 3;
 ptr2 += 1;
 } while (i != v2 * 3);
 }
 result = *(ptr + (v2 + (v2 >> 31) >> 31 & 0x80000000 | __ROL__(v2 + (v2 >> 31), 31) & 2147483647));
 free(ptr);
 return result;
}


// Function: heap_struct at 0x401190
static unsigned int heap_struct(unsigned int a0)
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: heap_nested at 0x4011cc
typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_3;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_1;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_4;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2;

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0;

static unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr; // x0
 struct_4 *p; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (struct_3 *)malloc(16);
 *(addr) = (struct_1 *)ptr;
 if (!ptr)
 return 4294967295;
 ptr->field_0 = 10;
 p = malloc(16);
 ptr->field_8 = (void *)p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p->field_0 = 20;
 p->field_8 = 0;
 return 0;
}


// Function: linked_list_heap at 0x40123c
typedef struct struct_linked_list {
 unsigned int field_0;
 char padding_4[4];
 struct struct_linked_list *field_8;
} struct_linked_list;

static unsigned int linked_list_heap()
{
 unsigned int i; // w20
 struct_linked_list *v3; // x0
 struct_linked_list *v11; // x19
 struct_linked_list *ptr3; // x19
 struct_linked_list *v13; // x19
 struct_linked_list *ptr4; // x0
 struct_linked_list *p; // x0
 struct_linked_list *addr; // x19
 struct_linked_list *v7; // x19
 unsigned long long v8; // x20
 struct_0 *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 i = 0;
 v3 = NULL;
 v11 = NULL;
 do
 {
 ptr4 = v3;
 p = malloc(16);
 if (!p)
 {
 if (v11)
 {
 do
 {
 addr = v11;
 v7 = addr->field_8;
 free(addr);
 v11 = v7;
 } while (addr->field_8);
 return 4294967295;
 }
 else
 {
 return 4294967295;
 }
 }
 p->field_0 = i;
 p->field_8 = NULL;
 if (!v11)
 v11 = p;
 else
 ptr4->field_8 = p;
 i += 10;
 v3 = p;
 } while (i != 50);
 if (!v11)
 return 0;
 v8 = 0;
 ptr = (struct_0 *)v11;
 do
 {
 v8 += ptr->field_0;
 ptr = (struct_0 *)ptr->field_8;
 } while (ptr);
 do
 {
 ptr3 = v11;
 v13 = ptr3->field_8;
 free(ptr3);
 v11 = v13;
 } while (ptr3->field_8);
 return v8;
}


// Function: create_tree_node at 0x401300
typedef struct struct_tree_node {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_tree_node;

static struct_tree_node * create_tree_node(unsigned int a0)
{
 struct_tree_node *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (struct_tree_node *)malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x401334
typedef struct struct_tree_root {
 unsigned int field_0;
 char padding_4[4];
 struct struct_tree_child1 *field_8;
 struct struct_tree_child2 *field_10;
} struct_tree_root;

typedef struct struct_tree_child1 {
 unsigned int field_0;
} struct_tree_child1;

typedef struct struct_tree_child2 {
 unsigned int field_0;
} struct_tree_child2;

static unsigned int tree_heap_traversal()
{
 struct_tree_root *ptr; // x19
 unsigned long v12; // cc_dep2
 unsigned long v13; // cc_ndep
 struct_tree_child1 *v4; // x1
 unsigned int *p; // x0
 unsigned long v6; // cc_op
 unsigned long v7; // cc_dep1
 unsigned long v8; // cc_dep2
 unsigned long v9; // cc_ndep
 unsigned long v10; // cc_op
 unsigned long v11; // cc_dep1
 unsigned int field0_p; // local variable for p->field_0
 unsigned int field0_v4; // local variable for v4->field_0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (struct_tree_root *)create_tree_node(10);
 if (!ptr)
 return 4294967295;
 ptr->field_8 = (struct_tree_child1 *)create_tree_node(20);
 v4 = (struct_tree_child1 *)create_tree_node(30);
 ptr->field_10 = (struct_tree_child2 *)v4;
 p = (unsigned int *)ptr->field_8;
 if (v4)
 {
 if ((char)arm64g_calculate_condition(4, (unsigned long long)((char)arm64g_calculate_condition(v6 | 16, v7, v8, v9) ? (unsigned long long)p : (unsigned long long)0x40000000), 0, 0))
 goto LABEL_4013b4;
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, (unsigned long long)((char)arm64g_calculate_condition(v10 | 16, v11, v12, v13) ? (unsigned long long)p : (unsigned long long)0x40000000), 0, 0))
 {
LABEL_4013b4:
 if (p)
 free(p);
 if (ptr->field_10)
 free(ptr->field_10);
 free(ptr);
 return 4294967294;
 }
 }
 field0_p = p ? *(p) : 0;
 field0_v4 = v4 ? v4->field_0 : 0;
 free(p);
 free(ptr->field_10);
 free(ptr);
 return ptr->field_0 + field0_p + field0_v4;
}


// Function: memory_leak at 0x4013e0
static unsigned long long memory_leak(unsigned long a0)
{
 unsigned int i; // w19
 void* ptr; // x0
 unsigned long long idx; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 i = a0;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return *((int *)(ptr + (i + (i >> 31) >> 31 & 0x80000000 | __ROL__(i + (i >> 31), 31) & 2147483647) * 4));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while ((unsigned int)idx < i);
 return *((int *)(ptr + (i + (i >> 31) >> 31 & 0x80000000 | __ROL__(i + (i >> 31), 31) & 2147483647) * 4));
}


// Function: dangling_pointer at 0x401438
static unsigned long long dangling_pointer()
{
 unsigned int *ptr; // x0
 unsigned long long v4; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v0 = &v2;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 v4 = 42;
 v1 = (unsigned long long)v4;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x401488
static unsigned long long double_free(unsigned int *a0)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 void* ptr; // x0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (a0)
 return *(a0);
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: heap_overflow at 0x4014d4
static unsigned int heap_overflow()
{
 unsigned int *ptr; // x0
 unsigned int i; // w1
 unsigned int *ptr2; // x2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
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


// Function: test_heap_memory at 0x401524
typedef struct struct_heap_wrapper {
 char padding_0[8];
 void* field_8;
} struct_heap_wrapper;

 unsigned long long test_heap_memory()
{
 unsigned int flag1; // w0
 char *v0; // [bp-0x30]
 int v1[1]; // [bp-0x14]
 struct_heap_wrapper *result; // [bp-0x10]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 puts(g_401fa8);
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
 result = NULL;
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct_1 **)&result) & 4294967295);
 if (result)
 {
 free(((struct_3 *)result)->field_8);
 free(result);
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5) & 4294967295);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 flag1 = fork();
 if (!flag1)
 {
 __printf_chk(1, g_402118, dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 if (flag1 > 0)
 {
 waitpid(flag1, v1, 0);
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(*(v1) & 127), 0, 0))
 {
 __printf_chk(1, g_402128, (*(v1) * 0x100000000000000 | *(v1) >> 8) & 18374686479671623935 & 255);
 }
 else if (((unsigned int)(((*(v1) & 127) + 1) * 0x100000000000000 >> 63) & 4294967168 | (unsigned int)(__ROL__((*(v1) & 127) + 1, 63)) & 127) > 0)
 {
 __printf_chk(1, g_402150, *(v1) & 127);
 }
 }
 else
 {
 perror(g_402198);
 }
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}





// Function: global_var_access at 0x401730
static unsigned int global_var_access()
{
 return 10;
}

// Function: global_var_read at 0x401738
static unsigned int global_var_read()
{
 return (global_counter * 2 | global_counter >> 31) & 4294967294;
}


// Function: global_array_access at 0x401748
static unsigned long long global_array_access(unsigned int a0)
{
 if (9 < a0)
 return 4294967295;
 return global_array[a0];
}


// Function: static_local at 0x401768
static long long static_local(unsigned int a0)
{
 unsigned long v0; // x0

 if (!a0)
 v0 = counter_1 + 1;
 else
 v0 = 0;
 counter_1 = v0;
 return v0;
}


// Function: call_static_func at 0x40178c
static int call_static_func(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: access_extern_global at 0x401798
static int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x4017ac
static long long call_extern_func()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x4017c4
static int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x4017d8
static unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x4017e0
static unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x4017e8
static unsigned long long global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x4017f0

static long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x4017fc

static int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401808
static long long set_global_callback(callback_func_t a0)
{
 global_func_ptr = a0;
 return (long long)a0;
}


// Function: call_global_callback at 0x401814
static unsigned long long call_global_callback()
{
 unsigned long long v3; // x30
 unsigned long long v4; // x0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (!global_func_ptr)
 return 4294967295;
 v0 = &v2;
 v1 = v3;
 v4 = global_func_ptr(5);
 return global_func_ptr(5);
}


// Function: global_heap_store at 0x40183c
static unsigned long long global_heap_store(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x401850
static unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401858
static unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: init_order_test at 0x401860
static unsigned long long init_order_test()
{
 static_depends_0 = 20;
 return 20;
}


// Function: test_static_global at 0x401870
int test_static_global()
{
 unsigned long v3; // x2
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4021a8);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", global_var_access() & 4294967295);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", (global_counter * 2 | global_counter >> 31) & 4294967294);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 v3 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", v3);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", call_extern_func() & 4294967295);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", read_const_data() & 4294967295);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access() & 4294967295);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback() & 4294967295);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init() & 4294967295);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", init_order_test() & 4294967295);
}


// Function: memop_memset at 0x401a60
static unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 unsigned long v2; // cc_op
 unsigned long v3; // cc_dep1
 unsigned long v4; // cc_dep2
 unsigned long v5; // cc_ndep
 unsigned long v6; // cc_op
 unsigned long v7; // cc_dep1
 unsigned long v8; // cc_dep2
 unsigned long v9; // cc_ndep
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0)
 {
 if ((char)arm64g_calculate_condition(4, (unsigned long long)((char)arm64g_calculate_condition(v2 | 16, v3, v4, v5) ? (unsigned long long)n : (unsigned long long)0x40000000), 0, 0))
 return 4294967295;
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, (unsigned long long)((char)arm64g_calculate_condition(v6 | 16, v7, v8, v9) ? (unsigned long long)n : (unsigned long long)0x40000000), 0, 0))
 return 4294967295;
 }
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x401aa8
static unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 unsigned long long v5; // cc_op
 unsigned long v6; // cc_op
 unsigned long v7; // cc_dep1
 unsigned long long v27; // x30
 unsigned long long v28; // x19
 unsigned long long v29; // x20
 unsigned long v8; // cc_dep2
 unsigned long v9; // cc_ndep
 unsigned long v10; // cc_dep1
 unsigned long v11; // cc_op
 unsigned long v12; // cc_dep1
 unsigned long v13; // cc_dep2
 unsigned long v14; // cc_ndep
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 unsigned long long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 if (a1)
 {
 v5 = 4;
 v10 = (unsigned long long)((char)arm64g_calculate_condition(v6 | 16, v7, v8, v9) ? (unsigned long long)n : (unsigned long long)0x40000000);
 if (!((char)arm64g_calculate_condition(20, v10, 0, 0)))
 goto LABEL_401ab2;
LABEL_401ab1:
 if ((char)arm64g_calculate_condition(4, (unsigned long long)((char)arm64g_calculate_condition(v5 | 16, v10, 0, 0) ? (unsigned long long)a0 : (unsigned long long)0x40000000), 0, 0))
 return 4294967295;
 }
 else
 {
 v5 = 0;
 v10 = (unsigned long long)((char)arm64g_calculate_condition(v11 | 16, v12, v13, v14) ? (unsigned long long)n : (unsigned long long)0x40000000);
 if ((char)arm64g_calculate_condition(16, v10, 0, 0))
 goto LABEL_401ab1;
LABEL_401ab2:
 if ((char)arm64g_calculate_condition(0, (unsigned long long)((char)arm64g_calculate_condition(v5 | 16, v10, 0, 0) ? (unsigned long long)a0 : (unsigned long long)0x40000000), 0, 0))
 return 4294967295;
 }
 v0 = &v4;
 v1 = v27;
 v2 = v28;
 v3 = v29;
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 18446744073709551612)));
}


// Function: memop_memmove at 0x401af0
typedef struct struct_memmove {
 char padding_0[1];
 char field_1;
} struct_memmove;

static unsigned long long memop_memmove(struct_memmove *a0, unsigned long a1)
{
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long long v16; // x30
 unsigned long long v17; // x19
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep
 unsigned long v8; // cc_op
 unsigned long v9; // cc_dep1
 unsigned long v10; // cc_dep2
 unsigned long v11; // cc_ndep
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (a0)
 {
 unsigned long long check_val = (unsigned long long)a1;
 if ((char)arm64g_calculate_condition(148, check_val, 1ULL, 0))
 return 4294967295;
 }
 else
 {
 unsigned long long check_val = (unsigned long long)a1;
 if ((char)arm64g_calculate_condition(144, check_val, 1ULL, 0))
 return 4294967295;
 }
 v0 = &v3;
 v1 = v16;
 v2 = v17;
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
}


// Function: memop_memcmp at 0x401b34
static unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // cc_op
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long long v25; // x30
 unsigned int v26; // w0
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep
 unsigned long v8; // cc_dep1
 unsigned long v9; // cc_op
 unsigned long v10; // cc_dep1
 unsigned long v11; // cc_dep2
 unsigned long v12; // cc_ndep
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (a1)
 {
 v3 = 4;
 v8 = (unsigned long long)((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? (unsigned long long)a2 : (unsigned long long)0x40000000);
 if (!((char)arm64g_calculate_condition(20, v8, 0, 0)))
 goto LABEL_401b3e;
LABEL_401b3d:
 if (!((char)arm64g_calculate_condition(20, (unsigned long long)((char)arm64g_calculate_condition(v3 | 16, v8, 0, 0) ? (unsigned long long)a0 : (unsigned long long)0x40000000), 0, 0)))
 return 0;
 }
 else
 {
 v3 = 0;
 v8 = (unsigned long long)((char)arm64g_calculate_condition(v9 | 16, v10, v11, v12) ? (unsigned long long)a2 : (unsigned long long)0x40000000);
 if ((char)arm64g_calculate_condition(16, v8, 0, 0))
 goto LABEL_401b3d;
LABEL_401b3e:
 if (!((char)arm64g_calculate_condition(16, (unsigned long long)((char)arm64g_calculate_condition(v3 | 16, v8, 0, 0) ? (unsigned long long)a0 : (unsigned long long)0x40000000), 0, 0)))
 return 0;
 }
 v0 = &v2;
 v1 = v25;
 v26 = memcmp(a0, a1, a2);
 if (v26 > 0)
 return 1;
 return v26 >> 31 & 4294967294 | (v26 * 2 | v26 >> 31) & 1;
}


// Function: memop_bzero at 0x401b6c
static unsigned long long memop_bzero(char *a0, unsigned long n)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (!a0)
 return 4294967295;
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x401ba4
static unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
{
 unsigned long long v4; // cc_op
 unsigned long v5; // cc_op
 unsigned long v6; // cc_dep1
 unsigned long long v26; // x30
 unsigned long long v27; // x19
 unsigned long v7; // cc_dep2
 unsigned long v8; // cc_ndep
 unsigned long v9; // cc_dep1
 unsigned long v10; // cc_op
 unsigned long v11; // cc_dep1
 unsigned long v12; // cc_dep2
 unsigned long v13; // cc_ndep
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (a1)
 {
 v4 = 4;
 v9 = (unsigned long long)((char)arm64g_calculate_condition(v5 | 16, v6, v7, v8) ? (unsigned long long)n : (unsigned long long)0x40000000);
 if (!((char)arm64g_calculate_condition(20, v9, 0, 0)))
 goto LABEL_401bae;
LABEL_401bad:
 if ((char)arm64g_calculate_condition(4, (unsigned long long)((char)arm64g_calculate_condition(v4 | 16, v9, 0, 0) ? (unsigned long long)a0 : (unsigned long long)0x40000000), 0, 0))
 return 4294967295;
 }
 else
 {
 v4 = 0;
 v9 = (unsigned long long)((char)arm64g_calculate_condition(v10 | 16, v11, v12, v13) ? (unsigned long long)n : (unsigned long long)0x40000000);
 if ((char)arm64g_calculate_condition(16, v9, 0, 0))
 goto LABEL_401bad;
LABEL_401bae:
 if ((char)arm64g_calculate_condition(0, (unsigned long long)((char)arm64g_calculate_condition(v4 | 16, v9, 0, 0) ? (unsigned long long)a0 : (unsigned long long)0x40000000), 0, 0))
 return 4294967295;
 }
 v0 = &v3;
 v1 = v26;
 v2 = v27;
 memmove(a1, a0, n);
 return *(a1);
}


// Function: memop_unaligned_access at 0x401be8
typedef struct struct_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_unaligned;

static unsigned long long memop_unaligned_access(struct_unaligned *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401bfc
static unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401c1c
unsigned long long test_memory_op_functions()
{
 char *v0; // [bp-0x1b0]
 unsigned int v1[1]; // [bp-0x18c]
 unsigned int result; // [bp-0x188]
 unsigned int v3; // [bp-0x184]
 unsigned int v4; // [bp-0x180]
 unsigned int flag1; // [bp-0x178]
 unsigned int v6; // [bp-0x174]
 unsigned int v7; // [bp-0x170]
 unsigned long v8; // [bp-0x168]
 unsigned long long v9; // [bp-0x160]
 unsigned int v10; // [bp-0x158]
 char v11; // [bp-0x150]
 unsigned int v12; // [bp-0x138]
 char flag2[8]; // [bp-0x130]
 char v14[16]; // [bp-0x128]
 char v15; // [bp-0x118]
 char v16[9]; // [bp-0x111]
 char v17[256]; // [bp-0x108]
 unsigned long v18; // [bp-0x8]
 char v19; // [bp+0x0]

 v0 = &v19;
 v18 = *((long long *)&__stack_chk_guard);
 puts(g_402458);
 v8 = 85899345930;
 v9 = 171798691870;
 v10 = 50;
 memset(&v11, 0, 20);
 __printf_chk(1, "MEMOP-L2-01: %d\n", memop_memset((char *)v17, 10, 65) & 4294967295);
 __printf_chk(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v11, &v8, 20) & 4294967295);
 strncpy(&v15, "HelloWor", 8);
 strncpy(v16, "rld", 3);
 __printf_chk(1, "MEMOP-L2-03: %c\n", memop_memmove((struct_memmove *)&v15, 10) & 4294967295);
 result = 1;
 v3 = 2;
 v4 = 3;
 flag1 = 1;
 v6 = 2;
 v7 = 4;
 __printf_chk(1, "MEMOP-L2-04: %d\n", memop_memcmp(&result, &flag1, 12) & 4294967295);
 __printf_chk(1, "MEMOP-L2-05: %d\n", memop_bzero((char *)&v14, 10) & 4294967295);
 v12 = 67305985;
 flag2[0] = 0;
 __printf_chk(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v12, flag2, 4) & 4294967295);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v1[0] = 5;
 __printf_chk(1, "MEMOP-L3-02: %d\n", memop_memory_barrier(&v1[0]) & 4294967295);
 if (v18 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: main at 0x401df0
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: extern_function at 0x401e14
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


