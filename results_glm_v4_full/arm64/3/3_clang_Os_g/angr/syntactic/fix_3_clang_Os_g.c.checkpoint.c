// Angr Decompilation of 3_clang_Os_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>

/* Rotate-left macro for decompiler-generated operations */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (sizeof(x) * 8 - (n))))

/* Forward declarations */
unsigned int extern_function(unsigned int a0);
unsigned int double_value(unsigned int a0);
unsigned long arm64g_calculate_condition(unsigned int op, unsigned long long arg1, unsigned long long arg2, unsigned long long arg3);

/* Stub functions for CRT */
void deregister_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4008e0
extern unsigned long long g_412ff8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = (unsigned long long)v2;
 v1 = (unsigned long long)v3;
 return g_412ff8;
}


// Function: sub_4008f4 at 0x4008f4
long long sub_4008f4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400a70 at 0x400a70
void sub_400a70()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400a88 at 0x400a88
void sub_400a88()
{
 deregister_tm_clones();
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400afc at 0x400afc
void sub_400afc()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400b48 at 0x400b48
long long sub_400b48()
{
 frame_dummy();
 return 0LL;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: local_vars at 0x400b54
int local_vars(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: local_array at 0x400b60
unsigned int local_array(unsigned int a0)
{
 unsigned long long v2; // x8
 unsigned long long i; // x9
 unsigned int v5; // 372
 char v0; // [bp-0x28]
 char v1; // [bp-0x14]

 v2 = 0;
 i = 0;
 do
 {
 if (0)
 *((unsigned int *)&(&v0)[i]) = v2;
 if (((char)v5 & 1))
 *((unsigned int *)&(&v0)[4 + i]) = a0 + (unsigned int)v2;
 i += 8;
 v2 += (a0 * 2 | a0 >> 31) & 4294967294;
 } while (i != 40);
 return *((int *)&v1);
}


// Function: local_struct at 0x400be0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x400be8
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400bfc
unsigned int address_of_array(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: large_stack_frame at 0x400c08
long long large_stack_frame()
{
 unsigned long long i; // x8
 unsigned long long v5; // q1
 char v0; // [bp-0x810]
 char v1; // [bp-0x410]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 i = 0;
 v5 = 0xf0e0d0c0b0a09080706050403020100;
 do
 {
 *((unsigned long long *)&(&v0)[i]) = v5;
 i += 16;
 v5 = v5 + 1157442765409226768;
 } while (i != 0x800);
 return v1;
}


// Function: vla_stack at 0x400c48
unsigned long long vla_stack(unsigned int a0)
{
 unsigned long long v3; // x30
 unsigned long v4; // x10
 unsigned long long i; // x9
 void* cur; // x10
 unsigned int v8; // 372
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (!((char)arm64g_calculate_condition(33, (unsigned long long)(a0 - 1001), 1000, 0)))
 return 4294967295;
 v0 = &v2;
 v1 = v3;
 v4 = a0;
 i = 0;
 cur = (char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352);
 do
 {
 if (0)
 *((unsigned int *)&cur[4]) = i;
 if (((char)v8 & 1))
 *((unsigned int *)cur) = (unsigned int)i + 2;
 cur += 8;
 i += 4;
 } while (((__ROL__(v4, 1) & 18446744073709551614) + 2 & 17179869180) != i);
 return *((int *)((char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352) + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
}


// Function: alloca_usage at 0x400d08
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long long v3; // x30
 unsigned long v4; // x10
 unsigned long long i; // x9
 void* cur; // x10
 unsigned int v8; // 372
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (a0 < 1)
 return 4294967295;
 v0 = &v2;
 v1 = v3;
 v4 = a0;
 i = 0;
 cur = (char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352);
 do
 {
 if (0)
 *((unsigned int *)&cur[4]) = i;
 if (((char)v8 & 1))
 *((unsigned int *)cur) = (unsigned int)i + 3;
 cur += 8;
 i += 6;
 } while ((__ROL__((__ROL__(__ROL__(v4 + 1, 63) & 9223372036854775807, 1) & 18446744073709551614) + (v4 + 1 >> 1), 1) & 18446744073709551614) != i);
 return *((int *)((char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352) + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
}


// Function: stack_alias at 0x400dc4
unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400dcc
extern char g_4022e9;

int test_stack_memory()
{
 unsigned long long v8; // x30
 unsigned long long v9; // x28
 void* iter; // x10
 unsigned long long l; // x8
 void* node; // x10
 unsigned long long v10; // x19
 unsigned long long i; // x8
 void* cur; // x10
 unsigned int v14; // 372
 unsigned long long j; // x8
 unsigned long long v16; // q1
 unsigned long long k; // x8
 unsigned int v23; // [bp-0x820]
 char v0; // [bp-0x81c]
 char v1; // [bp-0x80c]
 char v2; // [bp-0x420]
 char *v3; // [bp-0x20]
 unsigned long long v4; // [bp-0x18]
 unsigned long long v5; // [bp-0x10]
 unsigned long long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v3 = &v7;
 v4 = v8;
 v5 = v9;
 v6 = v10;
 puts(&g_4022e9);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 i = 0;
 cur = &v0;
 do
 {
 if (0)
 *((unsigned int *)&cur[4]) = i;
 if (((char)v14 & 1))
 *((unsigned int *)cur) = (unsigned int)i + 2;
 cur += 8;
 i += 4;
 } while (i != 20);
 printf("MEM-L1-02 (local_array): %d\n", *((int *)&v1));
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 j = 0;
 v16 = 0xf0e0d0c0b0a09080706050403020100;
 do
 {
 *((unsigned long long *)((char *)&v23 + j)) = v16;
 j += 16;
 v16 = v16 + 1157442765409226768;
 } while (j != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", v2);
 k = 0;
 iter = &v0;
 do
 {
 if (0)
 *((unsigned int *)&iter[4]) = k;
 if (((char)v14 & 1))
 *((unsigned int *)iter) = (unsigned int)k + 2;
 iter += 8;
 k += 4;
 } while (k != 20);
 printf("MEM-L2-02 (vla_stack): %d\n", *((int *)&v1));
 l = 0;
 node = (void*)((unsigned long long)&v23 | 4);
 do
 {
 if (0)
 *((unsigned int *)&node[4]) = l;
 if (((char)v14 & 1))
 *((unsigned int *)node) = (unsigned int)l + 3;
 node += 8;
 l += 6;
 } while (l != 30);
 printf("MEM-L2-03 (alloca_usage): %d\n", *((int *)&v1));
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400fe4
unsigned int heap_basic(unsigned int a0)
{
 unsigned long v2; // x19
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 unsigned int *cur; // x9
 unsigned int v7; // 372
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
 cur = &ptr[1];
 do
 {
 if (0)
 cur[1] = i;
 if (((char)v7 & 1))
 cur[0] = (unsigned int)i + 2;
 cur += 1;
 i += 4;
 } while (((__ROL__(v2 & 4294967295, 1) & 18446744073709551614) + 2 & 17179869180) != i);
 }
 free(ptr);
 return ptr[(0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647];
}


// Function: heap_calloc at 0x40109c
typedef struct struct_0_heap_calloc {
 char padding_0[4];
 unsigned int field_4;
} struct_0_heap_calloc;

unsigned int heap_calloc(unsigned int a0)
{
 unsigned long v2; // x20
 struct_0_heap_calloc *ptr; // x0
 unsigned long long v4; // x19
 unsigned long long i; // x8
 struct_0_heap_calloc *ptr2; // x9
 struct_0_heap_calloc *v7; // x9
 unsigned long long v8; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = calloc(v2 * 0x100000000 >> 63 & 0xffffffff00000000 | v2 & 4294967295, 4);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v2 < 1 || (unsigned int)v2 == 1)
 {
 v4 = 0;
 }
 else
 {
 v4 = 0;
 i = (v2 & 4294967295) - 1;
 ptr2 = (struct_0_heap_calloc *)((unsigned long long)ptr + 4);
 do
 {
 v7 = (struct_0_heap_calloc *)((unsigned long long)ptr2 + 4);
 v8 = i - 1;
 v4 += (unsigned long long)ptr2->padding_0;
 i = v8;
 ptr2 = v7;
 } while (i != 1);
 }
 free(ptr);
 return v4;
}


// Function: heap_realloc at 0x401110
typedef struct struct_5 {
 unsigned int field_0;
 char padding_4[4];
 unsigned int field_8;
 char padding_c[8];
 unsigned long long field_14;
 unsigned int field_24;
} struct_5;

unsigned int heap_realloc()
{
 struct_5 *ptr; // x0
 struct_5 *ptr2; // x19
 unsigned long long index; // x8
 unsigned long long v5; // x9
 unsigned int v6; // w20
 struct_5 *p; // x0
 unsigned int v8; // w9
 unsigned int v9; // w20
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
 (&ptr->field_0)[index] = v5;
 index = v5;
 } while (index != 5);
 v6 = ptr->field_8;
 p = realloc(ptr, 40);
 if (p)
 {
 v8 = p->field_8;
 ptr2 = p;
 *(unsigned int *)((char *)&p->field_14 + 4) = 90;
 if (v8 == v6)
 v9 = 50;
 else
 v9 = 4294967293;
 *((unsigned long long*)&(&p->padding_c)[1]) = 6338253002432419092900882677810;
 }
 else
 {
 v9 = 4294967294;
 }
 free(ptr);
 ptr = NULL;
 return v9;
}


// Function: heap_array at 0x4011ac
unsigned int heap_array(unsigned int a0)
{
 unsigned long v2; // x19
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 unsigned int *cur; // x9
 unsigned int v7; // 372
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
 cur = &ptr[1];
 do
 {
 if (0)
 cur[1] = i;
 if (((char)v7 & 1))
 cur[0] = (unsigned int)i + 3;
 cur += 1;
 i += 6;
 } while ((__ROL__((__ROL__(__ROL__((v2 & 4294967295) + 1, 63) & 9223372036854775807, 1) & 18446744073709551614) + ((v2 & 4294967295) + 1 >> 1), 1) & 18446744073709551614) != i);
 }
 free(ptr);
 return ptr[(0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647];
}


// Function: heap_struct at 0x40126c
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x401274
typedef struct struct_3_heap_nested {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2_heap_nested *field_8;
} struct_3_heap_nested;

typedef struct struct_1_heap_nested {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_heap_nested *field_8;
} struct_1_heap_nested;

typedef struct struct_4_heap_nested {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_4_heap_nested;

typedef struct struct_2_heap_nested {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2_heap_nested;

typedef struct struct_0_heap_nested {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0_heap_nested;

unsigned long long heap_nested(struct_1_heap_nested **addr)
{
 struct_3_heap_nested *ptr3; // x0
 struct_3_heap_nested *v_ptr; // x19
 struct_4_heap_nested *ptr4; // x0
 struct_4_heap_nested *p; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr3 = malloc(16);
 *(addr) = (struct_1_heap_nested *)ptr3;
 if (!ptr3)
 {
 free((void*)ptr3);
 ptr3 = NULL;
 return 4294967295;
 }
 v_ptr = ptr3;
 ptr3->field_0 = 10;
 ptr4 = (struct_4_heap_nested *)malloc(16);
 ptr4->field_8 = (unsigned long long)v_ptr;
 if (!ptr4)
 {
 free((void*)ptr4);
 ptr4 = NULL;
 return 4294967294;
 }
 p = ptr4;
 p->field_8 = 0;
 p->field_0 = 20;
 return 0;
}


// Function: linked_list_heap at 0x4012e8
typedef struct struct_0_linked_list {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_linked_list *field_8;
} struct_0_linked_list;

unsigned int linked_list_heap()
{
 struct_0_linked_list *ptr; // x0
 unsigned int v3; // w20
 unsigned long long v10; // x20
 unsigned long long v11; // x20
 struct_0_linked_list *p; // x19
 unsigned long long v13; // x20
 struct_0_linked_list *ptr2; // x8
 struct_0_linked_list *addr; // x19
 unsigned long long v4; // x21
 struct_0_linked_list *v5; // x22
 struct_0_linked_list *v6; // x19
 struct_0_linked_list *ptr3; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
 if (ptr)
 {
 v3 = 0;
 v4 = 0;
 v5 = NULL;
 v6 = NULL;
 do
 {
 ptr3 = ptr;
 ptr3->field_0 = v3;
 ptr3->field_8 = NULL;
 if (v6)
 v5->field_8 = ptr3;
 else
 v6 = ptr3;
 if ((unsigned int)v4 == 4)
 {
 if ((char)arm64g_calculate_condition(35, v4 & 4294967295, 4, 0))
 v11 = 0;
 else
 v11 = 1;
 if (((char)v11 & 1))
 return 4294967295;
 goto LABEL_401394;
 }
 } while (ptr = malloc(16), v3 += 10, v4 = (unsigned long long)((unsigned int)v4 + 1), v5 = ptr3);
 if (4 <= (unsigned int)v4 - 1)
 v10 = 0;
 else
 v10 = 1;
 if (v6)
 goto LABEL_40136c;
 }
 else
 {
 v6 = NULL;
 v10 = 1;
 if (false)
 {
 do
 {
LABEL_40136c:
 p = v6;
 free(p);
 v6 = p->field_8;
 } while (p->field_8);
 }
 }
 if (((char)v10 & 1))
 return 4294967295;
LABEL_401394:
 v13 = 0;
 if (!v6)
 return 0;
 ptr2 = v6;
 do
 {
 v13 += ptr2->field_0;
 ptr2 = ptr2->field_8;
 } while (ptr2->field_8);
 if (!v6)
 return v13;
 do
 {
 addr = v6;
 free(addr);
 v6 = addr->field_8;
 } while (addr->field_8);
 return v13;
}


// Function: create_tree_node at 0x4013dc
typedef struct struct_0_tree_node {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0_tree_node;

struct_0_tree_node * create_tree_node(unsigned int a0)
{
 struct_0_tree_node *ptr; // x0
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


// Function: tree_heap_traversal at 0x40140c
unsigned long long tree_heap_traversal()
{
 return 60;
}


// Function: memory_leak at 0x401414
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v2; // x19
 void *ptr; // x0
 unsigned long long idx; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(v2 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v2, 2) & 17179869180 & 17179869183);
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


// Function: dangling_pointer at 0x401474
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 printf("value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x4014c0
unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: heap_overflow at 0x4014d4
unsigned int heap_overflow()
{
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 unsigned int *cur; // x10
 unsigned int v6; // 372
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 cur = &ptr[1];
 do
 {
 if (0)
 cur[1] = i;
 if (((char)v6 & 1))
 cur[0] = (unsigned int)i + 100;
 cur += 1;
 i += 200;
 } while (i != 1200);
 free(ptr);
 return ptr[0];
}


// Function: test_heap_memory at 0x401570
typedef struct struct_0_test_heap {
 char padding_0[8];
 unsigned int field_8[2];
} struct_0_test_heap;

extern char g_401f95;
extern char g_401fa5;
extern char g_401fca;
extern char g_40200b;
extern char g_402307;

unsigned long long test_heap_memory()
{
 unsigned long long v14; // x0
 char *v15; // x0
 unsigned long long v16; // x0
 unsigned long long msg; // x0
 unsigned int *ptr; // x0
 unsigned long long idx; // x8
 unsigned long v12; // x1
 unsigned int flag1; // w0
 unsigned int v0[1]; // [bp-0x24]
 char *v1; // [bp-0x20]
 struct_0_test_heap *result; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 puts(&g_402307);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct_1_heap_nested **)&result) & 4294967295);
 if (result)
 {
 free((void*)result->field_8);
 free(result);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 ptr = (unsigned int *)malloc(20);
 if (ptr)
 {
 idx = 0;
 do
 {
 ptr[idx] = idx;
 idx += 1;
 } while (idx != 5);
 v12 = ptr[2];
 }
 else
 {
 v12 = 4294967295;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v12);
 printf("HEAP-L3-04 (dangling_pointer): ");
 flag1 = fork();
 if (!flag1)
 {
 printf(&g_401f95, dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 else if (flag1 >= 1)
 {
 v14 = waitpid(flag1, (int*)&v0, 0);
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(v0[0] & 127), 0, 0))
 {
 v15 = &g_401fa5;
 }
 else if (0x1000000 + (v0[0] & 127) * 0x1000000 >= 0x2000000)
 {
 v15 = &g_401fca;
 }
 else
 {
 return v14;
 }
 v16 = (unsigned long long)printf(v15);
 return v16;
 }
 else
 {
 perror(&g_40200b);
 return -1;
 }
}


// Function: global_var_access at 0x401730
extern unsigned int __dollar_d_3;

unsigned int global_var_access()
{
 __dollar_d_3 = __dollar_d_3 + 1;
 return __dollar_d_3 + 1;
}


// Function: global_var_read at 0x401744
extern unsigned int __dollar_d_3;

unsigned int global_var_read()
{
 return (__dollar_d_3 * 2 | __dollar_d_3 >> 31) & 4294967294;
}


// Function: global_array_access at 0x401754
extern unsigned int __dollar_d_4[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 <= 9)
 return __dollar_d_4[a0];
 return 4294967295;
}


// Function: static_local at 0x401774
extern unsigned int static_local_counter;

unsigned long long static_local(unsigned int a0)
{
 unsigned long long v0; // x0

 if (a0)
 v0 = 0;
 else
 v0 = static_local_counter + 1;
 static_local_counter = v0;
 return v0;
}


// Function: call_static_func at 0x40178c
unsigned int call_static_func(unsigned int a0)
{
 return 1 | __ROL__(a0, 1) & 4294967294;
}


// Function: access_extern_global at 0x40179c
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x4017b0
long long call_extern_func()
{
 unsigned long long v0; // x0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x4017b8
typedef struct struct_0 {
 char padding_0[4];
 char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x4017cc
unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x4017d4
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x4017dc
unsigned long long global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x4017e4
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x4017f0
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x4017fc
extern unsigned long long global_func_ptr;

long long set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x401808
extern unsigned long long global_func_ptr;

typedef unsigned long long (*callback_func_t)(void);

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return (unsigned long long)((callback_func_t)global_func_ptr)();
}


// Function: global_heap_store at 0x401820
extern unsigned int *global_heap_ptr;

unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x40183c
unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401844
unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: init_order_test at 0x40184c
unsigned long long init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401854
typedef struct struct_0 {
 char padding_0[4];
 char field_4;
} struct_0;

extern unsigned int __dollar_d_3;
extern struct_0 *const_string;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_402325;
extern unsigned long long global_func_ptr;
extern unsigned int *global_heap_ptr;
extern unsigned int static_local_counter;

int test_static_global()
{
 unsigned long v3; // x1
 unsigned long v4; // x1
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(&g_402325);
 v3 = __dollar_d_3 + 1;
 __dollar_d_3 = __dollar_d_3 + 1;
 printf("STM-L1-01 (global_var_access): %d\n", v3);
 printf("STM-L1-01 (global_var_read): %d\n", (__dollar_d_3 * 2 | __dollar_d_3 >> 31) & 4294967294);
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
 global_func_ptr = (unsigned long long)(void*)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 global_heap_ptr = &v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: double_value at 0x401a14
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: memop_memset at 0x401a1c
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
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


// Function: memop_memcpy at 0x401a5c
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
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


// Function: memop_memmove at 0x401aa4
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

unsigned long long memop_memmove(struct_0_memmove *a0, unsigned long a1)
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
 memmove(&a0->field_1, a0, a1 - 1);
 return (unsigned long long)a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401ae4
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
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


// Function: memop_bzero at 0x401b20
unsigned long long memop_bzero(char *a0, unsigned long n)
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
 v1 = (unsigned long long)&v4;
 v2 = (unsigned long long)&v5;
 memset(a0, 0, n);
 return (unsigned long long)(unsigned char)*(a0);
}


// Function: memop_bcopy at 0x401b58
unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
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
 return (unsigned long long)(unsigned char)(*(a1));
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_unaligned_access at 0x401b94
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

unsigned long long memop_unaligned_access(struct_0_unaligned *a0)
{
 unsigned int v;
 if (!a0)
 return 4294967295;
 memcpy(&v, (char *)&a0->padding_0 + 1, sizeof(v));
 return v;
}


// Function: memop_memory_barrier at 0x401ba8
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401bc8
extern char g_402349;

int test_memory_op_functions()
{
 unsigned int v0; // [bp-0x24]
 char v1[1]; // [bp-0x20]
 char v2[7]; // [bp-0x1f]
 unsigned short v3; // [bp-0x18]
 char v4; // [bp-0x17]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 puts(&g_402349);
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
 __sync_synchronize();
 return printf("MEMOP-L3-02: %d\n", v0 * 2);
}

/* CRT stub function _fini removed by preprocessor */




// Function: main at 0x401ca4
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


// Function: extern_function at 0x401cc8
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


