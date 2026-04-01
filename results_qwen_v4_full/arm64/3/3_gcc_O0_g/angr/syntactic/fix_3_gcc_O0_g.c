// Angr Decompilation of 3_gcc_O0_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>


/* CRT stub function _init removed by preprocessor */

extern void deregister_tm_clones();
extern void __do_global_dtors_aux();
extern void frame_dummy();

static unsigned long long __stack_chk_guard = 0;

static void __stack_chk_fail()
{
 abort(); /* do not return */
}

#define __ROL__(x, n) (((unsigned long long)(x) << (n)) | ((unsigned long long)(x) >> (64 - (n))))

// Generic struct_0 definition for decompiled code
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 void* field_8;
 unsigned long long field_10;
} struct_0;

// Forward declarations
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

typedef struct struct_0_const_data {
 char padding_0[4];
 char field_4;
} struct_0_const_data;

static unsigned long long memop_memmove(struct_0_memmove *a0, unsigned long a1);
static long long memop_unaligned_access(struct_0 *ptr);
static int extern_function(unsigned int a0);


// Function: __dollar_x at 0x4009e0
static unsigned long long g_413f20 = 0;
static char __dollar_d = 0;
static struct_0_const_data const_string_data = {0, 42};
static struct_0_const_data *const_string = &const_string_data;
static char g_402bd8[] = "dangling result: %d\n";
static char g_402c58[] = "fork/wait error";
static char g_402a68[] = "HEAP memory tests";
static char g_402be8[] = "exit status: %d\n";
static char g_402c10[] = "signal: %d\n";
static char g_402c78[] = "Static/Global tests";
static char g_402f28[] = "Memory op tests";
static char bss_buffer = 0;
static unsigned int global_array[4] = {0, 1, 2, 3};
static unsigned int counter_1 = 0;
static unsigned int extern_global_var = 0;
static unsigned int file_scope_static = 0;
static unsigned int bss_var = 0;
static unsigned int g_41403c = 0;
static unsigned int global_point = 0;
static unsigned int complex_init = 0;
static unsigned int g_414050 = 0;
static unsigned int g_414058 = 0;
static unsigned int static_depends_0 = 0;
static struct_0 *global_heap_ptr = NULL;
static unsigned long long (*global_func_ptr)(unsigned int, void*) = NULL;

static long long __dollar_x()
{
 return (long long)g_413f20;
}






/* CRT stub function _start removed by preprocessor */



// Function: sub_400b70 at 0x400b70
static void sub_400b70()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */







/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x400c54
static unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: local_vars at 0x400c6c
static unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = (a0 * 2 | a0 >> 31) & 4294967294;
 v1 = v0 + 10;
 return v1;
}


// Function: local_array at 0x400ca0

static long long local_array(unsigned int a0)
{
 char *v0; // [bp-0x60]
 unsigned int i; // [bp-0x34]
 unsigned long v5; // [bp-0x30]
 unsigned int v2; // [bp-0x1c]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = __stack_chk_guard;
 v2 = 0;
 for (i = 0; i <= 9; i += 1)
 {
 *((unsigned int *)((char *)&v5 + (__ROL__(i, 2) & 18446744073709551612))) = a0 * i;
 }
 if (v3 == __stack_chk_guard)
 return (long long)v2;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: local_struct at 0x400d30
static int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 * 2 | a0 >> 31) & 4294967294;
 return a0 + v0;
}


// Function: address_of_local at 0x400d60
static unsigned int address_of_local(unsigned long *ptr)
{
 unsigned int v0; // [bp-0x4]

 v0 = 42;
 *ptr = v0;
 return v0;
}


// Function: address_of_array at 0x400d88
static int address_of_array(unsigned int *a0)
{
 unsigned int *v0; // [bp-0x10]
 unsigned int *v1; // [bp-0x8]

 v0 = a0;
 v1 = a0;
 return *(v0) + *(v1);
}


// Function: large_stack_frame at 0x400dbc

static long long large_stack_frame()
{
 char *v0; // [bp-0x820]
 unsigned int i; // [bp-0x80c]
 unsigned long v5; // [bp-0x808]
 char v2; // [bp-0x408]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = __stack_chk_guard;
 for (i = 0; i <= 2047; i += 1)
 {
 *((char *)&v5 + i) = i;
 }
 if (v3 == __stack_chk_guard)
 return v2;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: vla_stack at 0x400e48

static long long vla_stack(unsigned int a0)
{
 unsigned long v8; // x0
 unsigned long long v9; // x0
 unsigned int v10; // w0
 unsigned long long result; // [bp-0x1fc50]
 unsigned long v11; // [bp-0x10050]
 char v1; // [bp-0x50]
 char *v2; // [bp-0x40]
 unsigned int j; // [bp-0x1c]
 unsigned long long v4; // [bp-0x18]
 unsigned long long ptr; // [bp-0x10]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]
 unsigned long *vvar_86; // [bp-0x8]

 v2 = &v7;
 v6 = __stack_chk_guard;
 if (a0 <= 0 || a0 > 1000)
 {
 v10 = 4294967295;
 }
 else
 {
 v8 = a0;
 v4 = (v8 * 0x100000000 >> 63 & 0xffffffff00000000 | v8 & 4294967295) - 1;
 for (v9 = __ROL__(__ROL__((__ROL__(v8 * 0x100000000 >> 63 & 0xffffffff00000000 | v8 & 4294967295, 2) & 18446744073709551612) + 15, 60) & 1152921504606846975, 4) & 0xfffffffffffffff0; &v11 != &(&v1)[-1 * (v9 & 0xffffffffffff0000)]; result = 0);
 vvar_86 = (unsigned long *)((char *)&v11 - (v9 & 65535));
 *((unsigned long long *)vvar_86) = 0;
 if ((v9 & 65535) >= 0x400)
 *((unsigned long *)(vvar_86 + 0x400)) = 0;
 ptr = __ROL__(__ROL__(vvar_86 + 19, 62) & 4611686018427387903, 2) & 18446744073709551612;
 for (j = 0; j < a0; j += 1)
 {
 *((unsigned int *)(ptr + j * 4)) = (j * 2 | j >> 31) & 4294967294;
 }
 v10 = *((int *)(ptr + ((((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 0x100000000 >> 63 & 0xffffffff00000000 | ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 4));
 }
 if (v6 == __stack_chk_guard)
 return v10;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: alloca_usage at 0x400fcc

static long long alloca_usage(unsigned int a0)
{
 unsigned int v6; // w0
 unsigned long long v7; // x0
 unsigned long long result; // [bp-0x1fc50]
 unsigned long v8; // [bp-0x10050]
 unsigned long v9; // [bp-0x50]
 char *v1; // [bp-0x40]
 unsigned int j; // [bp-0x14]
 unsigned long long v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]
 unsigned long *vvar_51; // [bp-0x8]

 v1 = &v5;
 v4 = __stack_chk_guard;
 if (0 >= a0)
 {
 v6 = 4294967295;
 }
 else
 {
 for (v7 = __ROL__(__ROL__((__ROL__(a0, 2) & 18446744073709551612) + 15, 60) & 1152921504606846975, 4) & 0xfffffffffffffff0; &v8 != (char *)&v9 - (v7 & 0xffffffffffff0000); result = 0);
 vvar_51 = (unsigned long *)((char *)&v8 - (v7 & 65535));
 *((unsigned long long *)vvar_51) = 0;
 if ((v7 & 65535) >= 0x400)
 *((unsigned long *)(vvar_51 + 0x400)) = 0;
 v3 = __ROL__(__ROL__(vvar_51 + 31, 60) & 1152921504606846975, 4) & 0xfffffffffffffff0;
 for (j = 0; j < a0; j += 1)
 {
 *((unsigned int *)(v3 + (__ROL__(j, 2) & 18446744073709551612))) = ((j * 2 | j >> 31) & 4294967294) + j;
 }
 v6 = *((int *)(v3 + (__ROL__((((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 0x100000000 >> 63 & 0xffffffff00000000 | ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647, 2) & 18446744073709551612)));
 }
 if (v4 == __stack_chk_guard)
 return v6;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: stack_alias at 0x401104

static long long stack_alias(unsigned long long *a0)
{
 unsigned long long v6; // x1
 unsigned int v7; // w0
 char *v0; // [bp-0x30]
 char *v1; // [bp-0x20], Other Possible Types: unsigned long long
 char *v2; // [bp-0x18], Other Possible Types: unsigned long long
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v2 = (char *)a0;
 v1 = (char *)v6;
 v4 = __stack_chk_guard;
 v3 = 10;
 v2 = (char *)&v3;
 v1 = (char *)&v3;
 if (v2 == v1 && v2)
 {
 v3 = 20;
 v7 = v3;
 }
 else
 {
 v7 = 4294967295;
 }
 if (v4 == __stack_chk_guard)
 return v7;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: test_stack_memory at 0x4011a8

static unsigned long long test_stack_memory()
{
 char *v0; // [bp-0x50]
 unsigned long v1; // [bp-0x38]
 unsigned long long flag1; // [bp-0x34]
 unsigned int result; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = __stack_chk_guard;
 puts((char*)&__dollar_d);
 printf("MEM-L1-01 (local_vars): %d\n", local_vars(5) & 4294967295);
 printf("MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
 printf("MEM-L1-03 (local_struct): %d\n", local_struct(5) & 4294967295);
 printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&v1) & 4294967295);
 memset(&result, 0, 40);
 result = 1;
 v5 = 2;
 v6 = 3;
 printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(&result) & 4294967295);
 printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 flag1 = 0;
 printf("MEM-L2-04 (stack_alias): %d\n", stack_alias(&flag1) & 4294967295);
 if (v7 == __stack_chk_guard)
 return 0;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: heap_basic at 0x4012fc
static unsigned long long heap_basic(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 void* ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612))) = (i * 2 | i >> 31) & 4294967294;
 }
 v2 = *((int *)((char *)ptr + (__ROL__((((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 0x100000000 >> 63 & 0xffffffff00000000 | ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647, 2) & 18446744073709551612)));
 free(ptr);
 return v2;
}


// Function: heap_calloc at 0x4013a8
static unsigned long long heap_calloc(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x10]
 unsigned int i; // [bp-0xc]
 void* ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v1 += *((int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612)));
 }
 free(ptr);
 return v1;
}


// Function: heap_realloc at 0x401434
static unsigned long long heap_realloc()
{
 unsigned int v8; // w0
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0x20]
 unsigned int j; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int ptr[6]; // [bp-0x10]
 char v7; // [bp+0x0]

 v0 = &v7;
 *((void* *)&ptr[0]) = malloc(20);
 if (!ptr)
 return 4294967295;
 for (i = 0; i <= 4; i += 1)
 {
 *((unsigned int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612))) = i + 1;
 }
 v3 = ptr[2];
 *((void* *)&ptr[0]) = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 return 4294967294;
 }
 for (j = 5; j <= 9; j += 1)
 {
 *((unsigned int *)((char *)ptr + (__ROL__(j, 2) & 18446744073709551612))) = ((((j * 4 | j >> 30) & 0xfffffffc) + j) * 2 | ((j * 4 | j >> 30) & 0xfffffffc) + j >> 31) & 4294967294;
 }
 if (v3 == ptr[2])
 v8 = ptr[5];
 else
 v8 = 4294967293;
 v4 = v8;
 free(ptr);
 return v4;
}


// Function: heap_array at 0x401564
static unsigned long long heap_array(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 void* ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612))) = ((i * 2 | i >> 31) & 4294967294) + i;
 }
 v2 = *((int *)((char *)ptr + (__ROL__((((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 0x100000000 >> 63 & 0xffffffff00000000 | ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647, 2) & 18446744073709551612)));
 free(ptr);
 return v2;
}


// Function: heap_struct at 0x401618
static unsigned long long heap_struct(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0xc]
 unsigned int ptr[2]; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 *((void* *)&ptr[0]) = malloc(8);
 if (ptr)
 {
 ptr[0] = a0;
 ptr[1] = (a0 * 2 | a0 >> 31) & 4294967294;
 v1 = ptr[0] + ptr[1];
 free(ptr);
 return v1;
 }
 return 4294967295;
}


// Function: heap_nested at 0x40168c
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

typedef struct struct_0_heap_nested {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0_heap_nested;

static unsigned long long heap_nested(struct_1 **a0)
{
 struct_1 *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 *(a0) = malloc(16);
 if (!*(a0))
 return 4294967295;
 (*(a0))->field_0 = 10;
 ptr = malloc(16);
 (*(a0))->field_8 = (struct struct_0 *)ptr;
 if (ptr)
 {
 ptr->field_0 = 20;
 ptr->field_8 = 0;
 return 0;
 }
 free(*(a0));
 return 4294967294;
}


// Function: linked_list_heap at 0x401748
typedef struct struct_0_linked_list {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_linked_list *field_8;
} struct_0_linked_list;

static unsigned long long linked_list_heap()
{
 char *v0; // [bp-0x50]
 unsigned int i; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 struct_0_linked_list *cur; // [bp-0x30]
 struct_0_linked_list *p; // [bp-0x28]
 struct_0_linked_list *iter; // [bp-0x20]
 struct_0_linked_list *ptr5; // [bp-0x18]
 struct_0_linked_list *ptr; // [bp-0x10]
 struct_0_linked_list *addr; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 cur = NULL;
 p = NULL;
 for (i = 0; i <= 4; i += 1)
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
 return 4294967295;
 }
 ptr->field_0 = __ROL__((__ROL__(i, 2) & 0xfffffffc) + i, 1) & 4294967294;
 ptr->field_8 = NULL;
 if (!cur)
 {
 cur = ptr;
 p = ptr;
 }
 else
 {
 p->field_8 = ptr;
 p = ptr;
 }
 }
 v2 = 0;
 for (iter = cur; iter; iter = iter->field_8)
 {
 v2 += iter->field_0;
 }
 while (cur)
 {
 ptr5 = cur;
 cur = cur->field_8;
 free(ptr5);
 }
 return v2;
}


// Function: create_tree_node at 0x401894
typedef struct struct_0_tree_node {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0_tree_node;

static struct_0 * create_tree_node(unsigned int a0)
{
 char *v0; // [bp-0x30]
 struct_0 *ptr; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x4018e0
typedef struct struct_0_tree_traversal {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1_tree *field_8;
 struct struct_2_tree *field_10;
} struct_0_tree_traversal;

typedef struct struct_1_tree {
 unsigned int field_0;
} struct_1_tree;

typedef struct struct_2_tree {
 unsigned int field_0;
} struct_2_tree;

static unsigned long long tree_heap_traversal()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 struct_0 *ptr; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 ptr = (struct_0 *)create_tree_node(10);
 if (!ptr)
 return 4294967295;
 ((struct_0_tree_node *)ptr)->field_8 = (unsigned long long)create_tree_node(20);
 ((struct_0_tree_node *)ptr)->field_10 = (unsigned long long)create_tree_node(30);
 if (((struct_0_tree_node *)ptr)->field_8 && ((struct_0_tree_node *)ptr)->field_10)
 {
 v1 = ptr->field_0 + ((struct_0_tree_node *)((struct_0_tree_node *)ptr)->field_8)->field_0 + ((struct_0_tree_node *)((struct_0_tree_node *)ptr)->field_10)->field_0;
 free((void *)((struct_0_tree_node *)ptr)->field_8);
 free((void *)((struct_0_tree_node *)ptr)->field_10);
 free(ptr);
 return v1;
 }
 if (((struct_0_tree_node *)ptr)->field_8)
 free((void *)((struct_0_tree_node *)ptr)->field_8);
 if (((struct_0_tree_node *)ptr)->field_10)
 free((void *)((struct_0_tree_node *)ptr)->field_10);
 free(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x4019f0
static unsigned long long memory_leak(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0xc]
 void* ptr; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)(ptr + (__ROL__(i, 2) & 18446744073709551612))) = i;
 }
 return *((int *)(ptr + (__ROL__((((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 0x100000000 >> 63 & 0xffffffff00000000 | ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647, 2) & 18446744073709551612)));
}


// Function: dangling_pointer at 0x401a88
static unsigned long long dangling_pointer()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int *ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
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


// Function: double_free at 0x401af8
static unsigned long long double_free(unsigned int *a0)
{
 char *v0; // [bp-0x30]
 unsigned int *ptr; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
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


// Function: heap_overflow at 0x401b64
static unsigned long long heap_overflow()
{
 char *v0; // [bp-0x20]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int *ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 for (i = 0; i <= 10; i += 1)
 {
 *((unsigned int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612))) = 100 * i;
 }
 v2 = *(ptr);
 free(ptr);
 return v2;
}


// Function: test_heap_memory at 0x401bec
typedef struct struct_0_heap_memory {
 char padding_0[8];
 void* field_8;
} struct_0_heap_memory;

static unsigned long long test_heap_memory()
{
 char *v0; // [bp-0x30]
 int v1; // [bp-0x1c]
 unsigned int flag1; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 struct_1 *result; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = __stack_chk_guard;
 puts(g_402a68);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct_1 **)&result) & 4294967295);
 if (result)
 {
 free(result->field_8);
 free(result);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5) & 4294967295);
 printf("HEAP-L3-04 (dangling_pointer): ");
 flag1 = fork();
 if (!flag1)
 {
 v3 = dangling_pointer();
 printf(g_402bd8, v3);
 exit(0); /* do not return */
 }
 if (flag1 > 0)
 {
 waitpid(flag1, &v1, 0);
 if (!((char)(v1) & 127))
 {
 printf(g_402be8, (v1 >> 31 & 0xff000000 | __ROL__(v1, 24) & 16777215) & 255);
 }
 else if ((v1 & 127) != 0)
 {
 printf(g_402c10, v1 & 127);
 }
 }
 else
 {
 perror(g_402c58);
 }
 if (v5 == __stack_chk_guard)
 return 0;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: global_var_access at 0x401e14

static int global_var_access()
{
 __dollar_d = __dollar_d + 1;
 return __dollar_d;
}


// Function: global_var_read at 0x401e40

static unsigned int global_var_read()
{
 return (__dollar_d * 2 | __dollar_d >> 31) & 4294967294;
}


// Function: global_array_access at 0x401e54

static unsigned long long global_array_access(unsigned int a0)
{
 if (a0 >= 0 && a0 <= 9)
 return global_array[a0];
 return 4294967295;
}


// Function: static_local at 0x401e94

static unsigned long long static_local(unsigned int a0)
{
 if (!a0)
 {
 counter_1 = counter_1 + 1;
 return counter_1;
 }
 counter_1 = 0;
 return 0;
}


// Function: static_helper at 0x401eec
static unsigned int static_helper(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_static_func at 0x401f04
static int call_static_func(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return static_helper(a0) + 1;
}


// Function: access_extern_global at 0x401f24

static int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401f38
static long long call_extern_func()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x401f50

static int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401f74

static int access_bss_var()
{
 return bss_var;
}


// Function: access_bss_buffer at 0x401f84

static long long access_bss_buffer()
{
 return bss_buffer;
}


// Function: global_struct_access at 0x401f94

static int global_struct_access()
{
 return global_point + g_41403c;
}


// Function: set_file_static at 0x401fb4

static char * set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return "d";
}


// Function: get_file_static at 0x401fd8

static int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401fe8

static unsigned long long * set_global_callback(unsigned long a0)
{
 global_func_ptr = (unsigned long long (*)(unsigned int, void*))a0;
 return (unsigned long long *)&global_func_ptr;
}


// Function: call_global_callback at 0x40200c
typedef struct struct_0_callback {
 unsigned long long field_0;
} struct_0_callback;

static unsigned long long call_global_callback(unsigned int a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (!global_func_ptr)
 return 4294967295;
 v2 = global_func_ptr(a0, (void*)global_func_ptr);
 return global_func_ptr(a0, (void*)global_func_ptr);
}


// Function: global_heap_store at 0x402050
typedef struct struct_0_heap_store {
 unsigned int field_0;
} struct_0_heap_store;

static unsigned long long global_heap_store(unsigned long a0)
{
 global_heap_ptr = (struct_0 *)a0;
 if (!global_heap_ptr)
 return 4294967295;
 return global_heap_ptr->field_0;
}


// Function: static_complex_init at 0x40209c
static int static_complex_init()
{
 return 0;
}


// Function: tls_access at 0x4020cc
typedef struct struct_0_tls {
 char padding_0[16];
 unsigned int field_10;
} struct_0_tls;

static struct_0_tls tls_var = {0};

static unsigned int tls_access(unsigned int a0)
{
 tls_var.field_10 = a0;
 return (tls_var.field_10 * 2 | tls_var.field_10 >> 31) & 4294967294;
}


// Function: init_depends_on at 0x402104

static int init_depends_on(unsigned int *a0)
{
 if (a0)
 static_depends_0 = *(a0);
 return static_depends_0;
}


// Function: init_order_test at 0x402140

static long long init_order_test()
{
 unsigned int v4; // w0
 char *v0; // [bp-0x20]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = __stack_chk_guard;
 v1[0] = 20;
 v4 = init_depends_on(v1);
 if (v2 == __stack_chk_guard)
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: test_static_global at 0x40219c

static unsigned long long test_static_global()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = __stack_chk_guard;
 puts(g_402c78);
 printf("STM-L1-01 (global_var_access): %d\n", global_var_access() & 4294967295);
 printf("STM-L1-01 (global_var_read): %d\n", global_var_read() & 4294967295);
 printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5) & 4294967295);
 static_local(1);
 printf("STM-L1-03 (static_local): %d\n", static_local(0) & 4294967295);
 printf("STM-L1-03 (static_local): %d\n", static_local(0) & 4294967295);
 printf("STM-L1-04 (call_static_func): %d\n", call_static_func(5) & 4294967295);
 printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global() & 4294967295);
 printf("STM-L2-02 (call_extern_func): %d\n", call_extern_func() & 4294967295);
 printf("STM-L2-03 (read_const_data): %d\n", read_const_data() & 4294967295);
 printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var() & 4294967295);
 printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer() & 4294967295);
 printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access() & 4294967295);
 set_file_static(50);
 printf("STM-L2-06 (file_static): %d\n", get_file_static() & 4294967295);
 set_global_callback((unsigned long)double_value);
 printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5) & 4294967295);
 v1 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store((unsigned long)&v1) & 4294967295);
 printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init() & 4294967295);
 printf("STM-L3-01 (tls_access): %d\n", tls_access(10) & 4294967295);
 printf("STM-L3-02 (init_order_test): %d\n", init_order_test() & 4294967295);
 if (v2 == __stack_chk_guard)
 return 0;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: memop_memset at 0x402398
static unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0 && n)
 {
 memset(a0, a2, n);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_memcpy at 0x4023ec
static unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0 && a1 && n)
 {
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 18446744073709551612)));
 }
 return 4294967295;
}


// Function: memop_memmove at 0x40245c
static unsigned long long memop_memmove(struct_0_memmove *a0, unsigned long a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0 && 1 < a1)
 {
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x4024c0
static unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 if (a0 && a1 && a2)
 {
 v1 = memcmp(a0, a1, a2);
 if (0 < v1)
 {
 return 1;
 }
 else if (0 > v1)
 {
 return 4294967295;
 }
 else
 {
 return 0;
 }
 }
 return 0;
}


// Function: memop_bzero at 0x402548
static unsigned long long memop_bzero(char *a0, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0)
 {
 memset(a0, 0, n);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_bcopy at 0x402598
static unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
{
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0 && a1 && n)
 {
 memmove(a1, a0, n);
 return *(a1);
 }
 return 4294967295;
}


// Function: memop_unaligned_access at 0x4025f8
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

static long long memop_unaligned_access(struct_0 *ptr)
{
 unsigned int v3; // w0
 char *v0; // [bp-0x30]
 unsigned long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = __stack_chk_guard;
 if (!ptr)
 v3 = 4294967295;
 else
 v3 = *((int *)&(&ptr->padding_4)[1]);
 if (v1 == __stack_chk_guard)
 return v3;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: memop_memory_barrier at 0x402670
static unsigned long long memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x4]

 if (ptr)
 {
 v0 = *(ptr);
 return *(ptr) + v0;
 }
 return 4294967295;
}


// Function: test_memory_op_functions at 0x4026b4

static unsigned long long test_memory_op_functions()
{
 char *v0; // [bp-0x1b0]
 unsigned int v1[1]; // [bp-0x194]
 unsigned long v2; // [bp-0x190]
 unsigned int v3; // [bp-0x188]
 unsigned long v4; // [bp-0x180]
 unsigned int v5; // [bp-0x178]
 unsigned long v6; // [bp-0x170]
 unsigned long long v7; // [bp-0x168]
 unsigned int v8; // [bp-0x160]
 char v9; // [bp-0x158]
 unsigned int v10; // [bp-0x140]
 char result[8]; // [bp-0x138]
 unsigned long v12; // [bp-0x130]
 char v13[16]; // [bp-0x128]
 char v14; // [bp-0x118]
 char v15[9]; // [bp-0x111]
 char v16[256]; // [bp-0x108]
 unsigned long v17; // [bp-0x8]
 char v18; // [bp+0x0]

 v0 = &v18;
 v17 = __stack_chk_guard;
 puts(g_402f28);
 v6 = 85899345930;
 v7 = 171798691870;
 v8 = 50;
 memset(&v9, 0, 20);
 printf("MEMOP-L2-01: %d\n", memop_memset((char *)&v16, 10, 65) & 4294967295);
 printf("MEMOP-L2-02: %d\n", memop_memcpy(&v9, &v6, 20) & 4294967295);
 strncpy(&v14, "HelloWor", 8);
 strncpy(v15, "rld", 3);
 struct_0_memmove memmove_struct;
 memmove_struct.field_1 = v14;
 printf("MEMOP-L2-03: %c\n", memop_memmove(&memmove_struct, 10) & 4294967295);
 v2 = 8589934593;
 v3 = 3;
 v4 = 8589934593;
 v5 = 4;
 printf("MEMOP-L2-04: %d\n", memop_memcmp(&v2, &v4, 12) & 4294967295);
 printf("MEMOP-L2-05: %d\n", memop_bzero(v13, 10) & 4294967295);
 v10 = 67305985;
 result[0] = 0;
 printf("MEMOP-L2-06: %d\n", memop_bcopy(&v10, result, 4) & 4294967295);
 v12 = 0x706050403020100;
 printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access((struct_0 *)&v12) & 4294967295);
 v1[0] = 5;
 printf("MEMOP-L3-02: %d\n", memop_memory_barrier(v1) & 4294967295);
 if (v17 == __stack_chk_guard)
 return 0;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: main at 0x402898
static int decompiled_main()
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


// Function: extern_function at 0x4028bc
static int extern_function(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + a0;
}



/* CRT stub function _fini removed by preprocessor */


