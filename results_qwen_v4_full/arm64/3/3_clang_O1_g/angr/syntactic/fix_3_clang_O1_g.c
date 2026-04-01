// Angr Decompilation of 3_clang_O1_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>


/* CRT stub function _init removed by preprocessor */



/* ARM64 helper function definition */
static unsigned long long arm64g_calculate_condition(unsigned int cond, unsigned long long val1, unsigned long long val2, unsigned long long val3)
{
    return 0;
}

/* Struct definitions */
typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    struct struct_0 *field_8;
    struct struct_0 *field_10;
    char padding_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    struct struct_4 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    struct struct_2 *field_8;
    struct struct_2 *field_10;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_4 {
    unsigned int field_0;
    unsigned int field_8;
} struct_4;

/* Forward declarations */
static unsigned int extern_function(unsigned int);
static unsigned int double_value(unsigned int);
static int test_stack_memory();
static unsigned long long test_heap_memory();
static int test_static_global();
static int test_memory_op_functions();

/* Rotate left macro */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

/* Global variable declarations */
static unsigned int __dollar_d_2 = 0;
static unsigned int __dollar_d_3[4] = {0, 1, 2, 3};
static unsigned int static_local_counter = 0;
static unsigned int extern_global_var = 0;
static unsigned int file_scope_static = 0;
static unsigned int (*global_func_ptr)(unsigned int) = NULL;
static unsigned int *global_heap_ptr = NULL;
static struct_0 *const_string = NULL;
static struct_0 const_string_data = {0, 42, NULL, NULL, 0};










/* CRT stub function _start removed by preprocessor */







/* CRT stub function call_weak_fn removed by preprocessor */












/* CRT stub function register_tm_clones removed by preprocessor */



















// Function: local_vars at 0x400b54
static int local_vars(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: local_array at 0x400b60
static unsigned int local_array(unsigned long a0)
{
 unsigned long long i; // x8
 unsigned long long v3; // x9
 char v0; // [bp-0x28]
 char v1; // [bp-0x14]

 i = 0;
 v3 = 0;
 do
 {
 *((unsigned int *)&(&v0)[i]) = v3;
 v3 += a0;
 i += 4;
 } while (i != 40);
 return *((int *)&v1);
}


// Function: local_struct at 0x400b90
static unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x400b98
static unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400bac
static unsigned int address_of_array(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: large_stack_frame at 0x400bb8
static long long large_stack_frame()
{
 unsigned long long i; // x8
 char v0; // [bp-0x810]
 char v1; // [bp-0x410]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 i = 0;
 do
 {
 (&v0)[i] = i;
 i += 1;
 } while (i != 0x800);
 return v1;
}


// Function: vla_stack at 0x400be8
static unsigned long long vla_stack(unsigned int a0)
{
 unsigned long long v3; // x30
 unsigned long v4; // x10
 char *cur; // x8
 unsigned long long i; // x9
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (!((char)arm64g_calculate_condition(33, (unsigned long long)(a0 - 1001), 1000, 0)))
 return 4294967295;
 v0 = &v2;
 v1 = v3;
 v4 = a0;
 cur = (char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352);
 if (a0 < 1)
 return *((int *)((char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352) + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
 i = 0;
 do
 {
 *((unsigned int *)cur) = i;
 cur = (char *)cur + 4;
 i += 2;
 } while ((__ROL__(v4, 1) & 18446744073709551614) != i);
 return *((int *)((char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352) + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
}


// Function: alloca_usage at 0x400c68
static unsigned long long alloca_usage(unsigned long a0)
{
 unsigned long long v3; // x30
 char *cur; // x8
 unsigned long long i; // x9
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if ((unsigned int)a0 < 1)
 return 4294967295;
 v0 = &v2;
 v1 = v3;
 cur = (char *)&v0 - ((a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15 & 0xfffffffffffffff0);
 i = 0;
 do
 {
 *((unsigned int *)cur) = i;
 cur = (char *)cur + 4;
 i += 3;
 } while ((a0 & 4294967295) * 3 != i);
 return *((int *)((char *)&v0 - ((a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15 & 0xfffffffffffffff0) + 4 * ((0 <= (unsigned int)a0 ? (unsigned int)a0 : (unsigned int)a0 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)a0 ? (unsigned int)a0 : (unsigned int)a0 + 1) * 0x80000000 | (0 <= (unsigned int)a0 ? (unsigned int)a0 : (unsigned int)a0 + 1) >> 1) & 2147483647)));
}


// Function: stack_alias at 0x400cd4
static unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400cdc
static char g_402225[] = "Testing stack memory...\n";

static int test_stack_memory()
{
 unsigned long long v7; // x30
 unsigned long long v8; // x28
 unsigned long long i; // x8
 char *cur; // x9
 unsigned long long j; // x8
 unsigned long long k; // x8
 char *iter; // x9
 unsigned long long l; // x8
 unsigned int *node; // x9
 char v0; // [bp-0x820]
 char v1; // [bp-0x80c]
 char v2; // [bp-0x420]
 char *v3; // [bp-0x20]
 unsigned long long v4; // [bp-0x18]
 unsigned long long v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v3 = &v6;
 v4 = v7;
 v5 = v8;
 puts(g_402225);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 i = 0;
 cur = &v0;
 do
 {
 *((unsigned int *)&cur[0]) = i;
 cur += 1;
 i += 2;
 } while (i != 20);
 printf("MEM-L1-02 (local_array): %d\n", *((int *)&v1));
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 j = 0;
 do
 {
 (&v0)[j] = j;
 j += 1;
 } while (j != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", v2);
 k = 0;
 iter = &v0;
 do
 {
 *((unsigned int *)&iter[0]) = k;
 iter += 1;
 k += 2;
 } while (k != 20);
 printf("MEM-L2-02 (vla_stack): %d\n", *((int *)&v1));
 l = 0;
 do
 {
 *(node) = l;
 node += 1;
 l += 3;
 } while (l != 30);
 printf("MEM-L2-03 (alloca_usage): %d\n", *((int *)&v1));
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400e00
static unsigned int heap_basic(unsigned int a0)
{
 unsigned long v2; // x19
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(v2 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v2, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v2 >= 1)
 {
 i = 0;
 ptr = ptr;
 do
 {
 *(ptr) = i;
 i += 2;
 ptr += 1;
 } while ((__ROL__(v2 & 4294967295, 1) & 18446744073709551614) != i);
 }
 free(ptr);
 return ptr[(0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647];
}


// Function: heap_calloc at 0x400e70
static unsigned int heap_calloc(unsigned int a0)
{
 unsigned long v2; // x20
 unsigned int *ptr; // x0
 unsigned long long v4; // x19
 unsigned long long i; // x8
 unsigned int *v7; // x9
 unsigned long long v8; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = calloc(v2 * 0x100000000 >> 63 & 0xffffffff00000000 | v2 & 4294967295, 4);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v2 >= 1)
 {
 v4 = 0;
 i = v2 & 4294967295;
 ptr = ptr;
 do
 {
 v7 = ptr + 1;
 v8 = i - 1;
 v4 += *(ptr);
 i = v8;
 ptr = v7;
 } while (i != 1);
 }
 else
 {
 v4 = 0;
 }
 free(ptr);
 return v4;
}


// Function: heap_realloc at 0x400ed8
static unsigned int heap_realloc()
{
 unsigned int *ptr; // x0
 unsigned int *p; // x19
 unsigned long long index; // x8
 unsigned long long v5; // x9
 unsigned int v6; // w20
 unsigned int v8; // w8
 unsigned long long j; // x9
 unsigned int v10; // w20
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 index = 0;
 do
 {
 v5 = index + 1;
 ptr[index] = v5;
 index = v5;
 } while (index != 5);
 v6 = ptr[2];
 p = realloc(ptr, 40);
 if (p)
 {
 v8 = 50;
 j = 20;
 do
 {
 *((unsigned int *)((char *)p + j)) = v8;
 v8 += 10;
 j += 4;
 } while (j != 40);
 if (p[2] == v6)
 v10 = p[5];
 else
 v10 = 4294967293;
 ptr = p;
 }
 else
 {
 v10 = 4294967294;
 }
 free(ptr);
 return v10;
}


// Function: heap_array at 0x400f80
static unsigned int heap_array(unsigned int a0)
{
 unsigned long v2; // x19
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(v2 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v2, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v2 >= 1)
 {
 i = 0;
 ptr = ptr;
 do
 {
 *(ptr) = i;
 i += 3;
 ptr += 1;
 } while ((v2 & 4294967295) * 3 != i);
 }
 free(ptr);
 return ptr[(0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647];
}


// Function: heap_struct at 0x400ff0
static unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x400ff8
static unsigned long long heap_nested(struct_3 **addr)
{
 struct_1 *p; // x0
 struct_4 *ptr; // x0
 struct_4 *ptr2; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = (struct_1 *)malloc(16);
 *addr = (struct_3 *)p;
 if (!p)
 return 4294967295;
 p->field_0 = 10;
 ptr = (struct_4 *)malloc(16);
 (*addr)->field_8 = ptr;
 ptr2 = (*addr)->field_8;
 if (!ptr2)
 {
 free(*addr);
 return 4294967294;
 }
 ptr2->field_8 = 0;
 ptr2->field_0 = 20;
 return 0;
}


// Function: linked_list_heap at 0x40106c
static unsigned long long linked_list_heap()
{
 struct_0 *ptr5; // x19
 struct_0 *ptr3; // x21
 struct_0 *v12; // x8
 struct_0 *v15; // x19
 struct_0 *ptr4; // x19
 unsigned int i; // w23
 unsigned long long v5; // x22
 unsigned int v6; // w23
 struct_0 *addr; // x20
 struct_0 *p; // x19
 unsigned int v9; // w8
 unsigned long long v10; // x20
 struct_0 *ptr; // x8
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr5 = NULL;
 ptr3 = NULL;
 i = 0;
 v5 = 1;
 do
 {
 v6 = i;
 addr = malloc(16);
 if (addr)
 {
 addr->field_8 = NULL;
 addr->field_0 = (v6 * 10 | v6 * 5 >> 31) & 4294967294;
 if (ptr5)
 {
 ptr3->field_8 = addr;
 ptr3 = addr;
 if (!addr)
 break;
 continue;
 }
 else
 {
 ptr3 = addr;
 ptr5 = addr;
 if (!addr)
 break;
 continue;
 }
 }
 else
 {
 if (ptr5)
 {
 do
 {
 p = ptr5;
 free(p);
 ptr5 = p->field_8;
 } while (p->field_8);
 }
 if (!addr)
 break;
 continue;
 }
 v9 = v6 + 1;
 if (4 <= v6)
 v5 = 0;
 else
 v5 = 1;
 i = v9;
 } while (i != 5);
 if (((char)v5 & 1))
 return 4294967295;
 v10 = 0;
 if (ptr5)
 {
 ptr = ptr5;
 do
 {
 v12 = ptr->field_8;
 v10 += ptr->field_0;
 ptr = v12;
 } while (ptr->field_8);
 }
 if (!ptr5)
 return v10;
 do
 {
 ptr4 = ptr5;
 free(ptr4);
 v15 = ptr4->field_8;
 } while (ptr4->field_8);
 return v10;
}


// Function: create_tree_node at 0x401160
static struct_0 * create_tree_node(unsigned int a0)
{
 struct_0 *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x401190
static unsigned int tree_heap_traversal()
{
 struct_2 *ptr3; // x0
 struct_2 *p; // x19
 struct_2 *ptr; // x20
 struct_2 *addr; // x21
 unsigned int v6; // w22
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr3 = malloc(24);
 if (!ptr3)
 return 4294967295;
 p = ptr3;
 ptr3->field_8 = NULL;
 ptr3->field_10 = NULL;
 ptr3->field_0 = 10;
 ptr = malloc(24);
 if (ptr)
 {
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 ptr->field_0 = 20;
 }
 p->field_8 = ptr;
 addr = (struct_2 *)malloc(24);
 if (addr)
 {
 addr->field_8 = 0;
 addr->field_10 = 0;
 addr->field_0 = 30;
 }
 p->field_10 = addr;
 if (ptr && addr)
 {
 v6 = ptr->field_0 + p->field_0 + addr->field_0;
 free(ptr);
 addr = p->field_10;
 }
 else
 {
 if (ptr)
 free(ptr);
 v6 = 4294967294;
 if (!addr)
 {
 free(p);
 return 4294967294;
 }
 }
 free(addr);
 free(p);
 return v6;
}


// Function: memory_leak at 0x401268
static unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v2; // x19
 unsigned long long ptr; // x0
 unsigned long long idx; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = (unsigned long long)malloc(v2 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v2, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v2 < 1)
 return *((int *)(ptr + ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647) * 4));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while ((v2 & 4294967295) != idx);
 return *((int *)(ptr + ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647) * 4));
}


// Function: dangling_pointer at 0x4012c8
static unsigned long long dangling_pointer()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 *(ptr) = 42;
 printf("value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x40131c
static unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: heap_overflow at 0x401330
static unsigned int heap_overflow()
{
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 unsigned int v4; // w9
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 v4 = 0;
 do
 {
 *((unsigned int *)((char *)ptr + i)) = v4;
 v4 += 100;
 i += 4;
 } while (i != 44);
 free(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x401384
static char g_401ed1[] = "value before free: %d\n";
static char g_401ee1[] = "normal exit\n";
static char g_401f06[] = "abnormal exit\n";
static char g_401f47[] = "fork failed\n";
static char g_402243[] = "Testing heap memory...\n";

static unsigned long long test_heap_memory()
{
 unsigned int *ptr6; // x0
 unsigned long long i; // x8
 unsigned int *p; // x19
 unsigned long long idx6; // x8
 unsigned long long v15; // x9
 unsigned int v16; // w20
 unsigned int *ptr8; // x0
 unsigned int v18; // w8
 unsigned long long l; // x9
 unsigned int v20; // w20
 unsigned int *ptr7; // x0
 unsigned long long m; // x8
 unsigned int *ptr4; // x9
 unsigned int *ptr5; // x9
 unsigned int v25; // w19
 struct_1 *ptr; // x19
 struct_4 *addr; // x0
 unsigned long long v28; // x1
 unsigned int *ptr3; // x0
 unsigned long long index; // x8
 unsigned long v33; // x1
 unsigned int result; // w0
 unsigned long long v35; // x0
 char *v36; // x0
 unsigned long long v37; // x0
 unsigned int v7; // w19
 unsigned int *ptr2; // x0
 unsigned long long j; // x8
 unsigned long long v10; // x19
 unsigned long long v11; // x8
 unsigned int *ptr9; // x0
 unsigned int v0[1]; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(g_402243);
 ptr6 = (unsigned int *)malloc(40);
 if (ptr6)
 {
 i = 0;
 ptr4 = ptr6;
 do
 {
 ptr4[0] = i;
 i += 2;
 ptr4 = &ptr4[1];
 } while (i != 20);
 v7 = ptr6[5];
 free(ptr6);
 }
 else
 {
 v7 = 4294967295;
 }
 printf("HEAP-L2-01 (heap_basic): %d\n", v7);
 ptr = calloc(5, 4);
 if (ptr)
 {
 j = 0;
 v10 = 0;
 do
 {
 v11 = j + 4;
 v10 += *((int *)((char *)ptr + j));
 j = v11;
 } while (j != 20);
 free(ptr);
 }
 else
 {
 v10 = 4294967295;
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v10 & 4294967295);
 ptr2 = (unsigned int *)malloc(20);
 if (ptr2)
 {
 p = ptr2;
 idx6 = 0;
 do
 {
 v15 = idx6 + 1;
 p[idx6] = v15;
 idx6 = v15;
 } while (idx6 != 5);
 v16 = p[2];
 ptr8 = (unsigned int *)realloc(p, 40);
 if (ptr8)
 {
 v18 = 50;
 l = 20;
 do
 {
 *((unsigned int *)((char *)ptr8 + l)) = v18;
 l += 4;
 v18 += 10;
 } while (l != 40);
 if (ptr8[2] == v16)
 v20 = ptr8[5];
 else
 v20 = 4294967293;
 p = ptr8;
 }
 else
 {
 v20 = 4294967294;
 }
 free(p);
 }
 else
 {
 v20 = 4294967295;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v20);
 ptr7 = (unsigned int *)malloc(40);
 if (ptr7)
 {
 m = 0;
 ptr5 = ptr7;
 do
 {
 ptr5[0] = m;
 m += 3;
 ptr5 = &ptr5[1];
 } while (m != 30);
 v25 = ptr7[5];
 free(ptr7);
 }
 else
 {
 v25 = 4294967295;
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v25);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 ptr = (struct_1 *)malloc(16);
 if (ptr)
 {
 ptr->field_0 = 10;
 addr = (struct_4 *)malloc(16);
 ptr->field_8 = (struct_4 *)addr;
 if (addr)
 {
 v28 = 0;
 addr->field_8 = 0;
 addr->field_0 = 20;
 }
 else
 {
 free(ptr);
 v28 = 4294967294;
 }
 }
 else
 {
 v28 = 4294967295;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v28);
 if (ptr)
 {
 free(ptr->field_8);
 free(ptr);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 ptr3 = (unsigned int *)malloc(20);
 if (ptr3)
 {
 index = 0;
 do
 {
 ptr3[index] = index;
 index += 1;
 } while (index != 5);
 v33 = ptr3[2];
 }
 else
 {
 v33 = 4294967295;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v33);
 printf("HEAP-L3-04 (dangling_pointer): ");
 result = fork();
 if (!result)
 {
 printf(g_401ed1, dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 else if (result >= 1)
 {
 v35 = waitpid(result, (int *)v0, 0);
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(*(v0) & 127), 0, 0))
 {
 v36 = g_401ee1;
 }
 else if (0x1000000 + (*(v0) & 127) * 0x1000000 >= 0x2000000)
 {
 v36 = g_401f06;
 }
 else
 {
 return v35;
 }
 v37 = printf(v36);
 return printf(v36);
 }
 else
 {
 perror(g_401f47);
 return 4294967295;
 }
}




static unsigned int global_var_access()
{
 __dollar_d_2 = __dollar_d_2 + 1;
 return __dollar_d_2 + 1;
}




static unsigned int global_var_read()
{
 return (__dollar_d_2 * 2 | __dollar_d_2 >> 31) & 4294967294;
}


// Function: global_array_access at 0x4016b0
static unsigned long long global_array_access(unsigned int a0)
{
 if (a0 <= 9)
 return __dollar_d_3[a0];
 return 4294967295;
}




static unsigned long long static_local(unsigned int a0)
{
 unsigned long long v0; // x0

 if (a0)
 v0 = 0;
 else
 v0 = static_local_counter + 1;
 static_local_counter = v0;
 return v0;
}


// Function: call_static_func at 0x4016e8
static unsigned int call_static_func(unsigned int a0)
{
 return 1 | __ROL__(a0, 1) & 4294967294;
}




static int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x40170c
static long long call_extern_func()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = extern_function(5);
 return extern_function(5);
}




static int read_const_data()
{
 const_string = &const_string_data;
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401738
static unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401740
static unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401748
static unsigned long long global_struct_access()
{
 return 30;
}




static long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}




static int get_file_static()
{
 return file_scope_static;
}




static long long set_global_callback(unsigned long a0)
{
 global_func_ptr = (unsigned int (*)(unsigned int))a0;
 return a0;
}




static unsigned long long call_global_callback()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (!global_func_ptr)
 return 4294967295;
 v2 = global_func_ptr(5);
 return global_func_ptr(5);
}


// Function: global_heap_store at 0x4017a0
static unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x4017bc
static unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x4017c4
static unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: init_order_test at 0x4017cc
static unsigned long long init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x4017d4
static char g_402261[] = "Testing static/global variables...\n";

static int test_static_global()
{
 unsigned long v3; // x1
 unsigned long v4; // x1
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(g_402261);
 v3 = __dollar_d_2 + 1;
 __dollar_d_2 = __dollar_d_2 + 1;
 printf("STM-L1-01 (global_var_access): %d\n", v3);
 printf("STM-L1-01 (global_var_read): %d\n", (__dollar_d_2 * 2 | __dollar_d_2 >> 31) & 4294967294);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 v4 = static_local_counter + 1;
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n", v4);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 printf("STM-L2-02 (call_extern_func): %d\n", extern_function(5) & 4294967295);
 printf("STM-L2-03 (read_const_data): %d\n", const_string->field_4 + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 global_heap_ptr = &v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: double_value at 0x401994
static unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: memop_memset at 0x40199c
static unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
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


// Function: memop_memcpy at 0x4019dc
static unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
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
 return *((int *)(-4 + (n & 18446744073709551612) + (char *)a0));
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memmove at 0x401a24
static unsigned long long memop_memmove(struct_0 *a0, unsigned long a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_4, a0, a1 - 1);
 return a0->field_4;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401a64
static unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // x30
 unsigned int result; // w0
 unsigned int v5; // w8
 unsigned long v6; // x0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

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
 v0 = &v2;
 v1 = v3;
 result = memcmp(a0, a1, a2);
 if (!result)
 v5 = 0;
 else
 v5 = 4294967295;
 if (result < 1)
 v6 = v5;
 else
 v6 = 1;
 return v6;
 }
 else
 {
 return 0;
 }
}


// Function: memop_bzero at 0x401aa0
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


// Function: memop_bcopy at 0x401ad8
static unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
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


// Function: memop_unaligned_access at 0x401b14
static unsigned long long memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401b28
static unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __asm__ __volatile__("dmb ish" ::: "memory");
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401b48
static char g_402285[] = "Testing memory operations...\n";

static int test_memory_op_functions()
{
 unsigned int v0; // [bp-0x24]
 char v1[1]; // [bp-0x20]
 char v2[7]; // [bp-0x1f]
 unsigned short v3; // [bp-0x18]
 char v4; // [bp-0x17]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 puts(g_402285);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 v3 = 25708;
 v4 = 108;
 strncpy(v1, "HelloWor", 8);
 strncpy(v2, "HelloWor", 8);
 printf("MEMOP-L2-03: %c\n", 72);
 printf("MEMOP-L2-04: %d\n", 4294967295);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 __asm__ __volatile__("dmb ish" ::: "memory");
 return printf("MEMOP-L3-02: %d\n", v0 * 2);
}


// Function: main at 0x401c28
int main(void)
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


// Function: extern_function at 0x401c4c
static unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


