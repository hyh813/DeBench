// Angr Decompilation of 3_clang_O1_no_g
// Platform: AARCH64

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/* CRT stub function declarations */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Angr decompiler helper functions */
unsigned long long arm64g_calculate_condition(int cond, unsigned long long op1, unsigned long long op2, unsigned long long op3);
unsigned long long __ROL__(unsigned long long value, int shift);

/* Forward declarations for functions used before definition */
unsigned int extern_function(unsigned int a0);
unsigned int double_value(unsigned int a0);

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4008e0
extern unsigned long long g_412ff8;

long long __dollar_x()
{
 unsigned long long v2;
 unsigned long long v3;
 (void)v2;
 (void)v3;
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = 0;
 v1 = 0;
 return 0;
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
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400afc at 0x400afc
void sub_400afc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400b48 at 0x400b48
long long sub_400b48()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: local_vars at 0x400b54
int local_vars(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: local_array at 0x400b60
unsigned int local_array(unsigned long a0)
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
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x400b98
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400bac
unsigned int address_of_array(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: large_stack_frame at 0x400bb8
long long large_stack_frame()
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
typedef struct struct_0_vla {
 char field_0;
} struct_0_vla;

unsigned long long vla_stack(unsigned int a0)
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
typedef struct struct_0_alloca {
 char field_0;
} struct_0_alloca;

unsigned long long alloca_usage(unsigned long a0)
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
unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400cdc
extern char g_402225;

int test_stack_memory()
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
 puts(&g_402225);
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
 node = (unsigned int *)&v0;
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
unsigned int heap_basic(unsigned int a0)
{
 unsigned long v2; // x19
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 unsigned int *ptr2; // x10
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
unsigned int heap_calloc(unsigned int a0)
{
 unsigned long v2; // x20
 unsigned int *ptr; // x0
 unsigned long long v4; // x19
 unsigned long long i; // x8
 unsigned int *ptr2; // x9
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
 ptr2 = ptr;
 do
 {
 v7 = ptr2 + 1;
 v8 = i - 1;
 v4 += *(ptr2);
 i = v8;
 ptr2 = v7;
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
unsigned int heap_realloc()
{
 unsigned int *ptr; // x0
 unsigned int *ptr2; // x19
 unsigned long long index; // x8
 unsigned long long v5; // x9
 unsigned int v6; // w20
 unsigned int *p; // x0
 unsigned int v8; // w8
 unsigned long long j; // x9
 unsigned int v10; // w20
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 index = 0;
 do
 {
 v5 = index + 1;
 ptr[index] = v5;
 index = v5;
 } while (index != 5);
 v6 = ptr2[2];
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
 ptr2 = p;
 }
 else
 {
 v10 = 4294967294;
 }
 free(ptr2);
 return v10;
}


// Function: heap_array at 0x400f80
unsigned int heap_array(unsigned int a0)
{
 unsigned long v2; // x19
 unsigned int *ptr; // x0
 unsigned long long i; // x8
 unsigned int *ptr2; // x10
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
 ptr2 = ptr;
 do
 {
 *(ptr2) = i;
 i += 3;
 ptr2 += 1;
 } while ((v2 & 4294967295) * 3 != i);
 }
 free(ptr);
 return ptr[(0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647];
}


// Function: heap_struct at 0x400ff0
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x400ff8
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_4;

unsigned long long heap_nested(struct_1 **addr)
{
 struct_1 *p; // x0
 struct_4 *ptr2; // x0
 struct_2 *ptr; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = malloc(16);
 *(addr) = p;
 if (!p)
 return 4294967295;
 p->field_0 = 10;
 ptr = malloc(16);
 (*addr)->field_8 = ptr;
 ptr = (*addr)->field_8;
 if (!ptr)
 {
 free(*addr);
 return 4294967294;
 }
 ptr->field_0 = 0;
 ptr->field_8 = 20;
 return 0;
}


// Function: linked_list_heap at 0x40106c
typedef struct struct_0_ll {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_ll *field_8;
} struct_0_ll;

unsigned long long linked_list_heap()
{
 struct_0_ll *ptr5; // x19
 struct_0_ll *ptr3; // x21
 struct_0_ll *v12; // x8
 struct_0_ll *v15; // x19
 struct_0_ll *ptr4; // x19
 unsigned int i; // w23
 unsigned long long v5; // x22
 unsigned int v6; // w23
 struct_0_ll *addr; // x20
 struct_0_ll *p; // x19
 unsigned int v9; // w8
 unsigned long long v10; // x20
 struct_0_ll *ptr; // x8
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
typedef struct struct_0_tree {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0_tree;

struct_0_tree * create_tree_node(unsigned int a0)
{
 struct_0_tree *ptr; // x0
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
typedef struct struct_0_trav {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0_trav;

typedef struct struct_1_trav {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_1_trav;

typedef struct struct_2_trav {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_trav *field_8;
 struct struct_1_trav *field_10;
} struct_2_trav;

typedef struct struct_3_trav {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_3_trav;

typedef struct struct_4_trav {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_4_trav;

unsigned int tree_heap_traversal()
{
 struct_2_trav *ptr3; // x0
 struct_2_trav *p; // x19
 struct_3_trav *ptr; // x20
 struct_4_trav *addr; // x21
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
 p->field_8 = (struct_0_trav *)ptr;
 addr = malloc(24);
 if (addr)
 {
 addr->field_8 = 0;
 addr->field_10 = 0;
 addr->field_0 = 30;
 }
 p->field_10 = (struct struct_1_trav *)addr;
 if (ptr && addr)
 {
 v6 = ptr->field_0 + p->field_0 + addr->field_0;
 free(ptr);
 addr = (struct_4_trav *)p->field_10;
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


// Function: dangling_pointer at 0x4012c8
unsigned long long dangling_pointer()
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
unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: heap_overflow at 0x401330
unsigned int heap_overflow()
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
typedef struct struct_0_test {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0_test;

typedef struct struct_1_test {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_test *field_8;
} struct_1_test;

typedef struct struct_2_test {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2_test;

extern char g_401ed1;
extern char g_401ee1;
extern char g_401f06;
extern char g_401f47;
extern char g_402243;

 unsigned long long test_heap_memory()
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
 struct_1_test *test_struct; // x19
 struct_2_test *addr; // x0
 unsigned long long v28; // x1
 unsigned int *ptr3; // x0
 unsigned long long index; // x8
 unsigned long v33; // x1
 unsigned int result; // w0
 char *v36; // x0
 unsigned long long v37; // x0
 unsigned long long msg; // x0
 unsigned int v7; // w19
 unsigned int *ptr; // x0
 unsigned long long j; // x8
 unsigned long long v10; // x19
 unsigned long long v11; // x8
 unsigned int v0[1]; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(&g_402243);
 ptr6 = malloc(40);
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
 ptr7 = calloc(5, 4);
 if (ptr7)
 {
 j = 0;
 v10 = 0;
 do
 {
 v11 = j + 4;
 v10 += *((int *)((char *)ptr7 + j));
 j = v11;
 } while (j != 20);
 free(ptr7);
 }
 else
 {
 v10 = 4294967295;
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v10 & 4294967295);
 ptr7 = malloc(20);
 if (ptr7)
 {
 p = ptr7;
 idx6 = 0;
 do
 {
 v15 = idx6 + 1;
 p[idx6] = v15;
 idx6 = v15;
 } while (idx6 != 5);
 v16 = p[2];
 ptr8 = realloc(p, 40);
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
 ptr7 = malloc(40);
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
 test_struct = (struct_1_test *)malloc(16);
 if (test_struct)
 {
 test_struct->field_0 = 10;
 addr = malloc(16);
 test_struct->field_8 = (struct_0_test *)addr;
 if (addr)
 {
 v28 = 0;
 addr->field_8 = 0;
 addr->field_0 = 20;
 }
 else
 {
 free(test_struct);
 v28 = 4294967294;
 }
 }
 else
 {
 v28 = 4294967295;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v28);
 if (test_struct)
 {
 free(test_struct->field_8);
 free(test_struct);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 ptr3 = malloc(20);
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
 printf(&g_401ed1, dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 else if (result >= 1)
 {
 waitpid(result, (int *)&v0, 0);
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(*(v0) & 127), 0, 0))
 {
 v36 = &g_401ee1;
 }
 else if (0x1000000 + (*(v0) & 127) * 0x1000000 >= 0x2000000)
 {
 v36 = &g_401f06;
 }
 else
 {
 return 0;
 }
 printf(v36);
 return 0;
 }
 else
 {
 perror(&g_401f47);
 return 0;
 }
}


// Function: global_var_access at 0x40168c
extern unsigned int __dollar_d_2;

unsigned int global_var_access()
{
 __dollar_d_2 = __dollar_d_2 + 1;
 return __dollar_d_2 + 1;
}


// Function: global_var_read at 0x4016a0
extern unsigned int __dollar_d_2;

unsigned int global_var_read()
{
 return (__dollar_d_2 * 2 | __dollar_d_2 >> 31) & 4294967294;
}


// Function: global_array_access at 0x4016b0
extern unsigned int __dollar_d_3[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 <= 9)
 return __dollar_d_3[a0];
 return 4294967295;
}


// Function: static_local at 0x4016d0
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


// Function: call_static_func at 0x4016e8
unsigned int call_static_func(unsigned int a0)
{
 return 1 | __ROL__(a0, 1) & 4294967294;
}


// Function: access_extern_global at 0x4016f8
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x40170c
long long call_extern_func()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x401724
typedef struct struct_0_read {
 char padding_0[4];
 char field_4;
} struct_0_read;

extern struct_0_read *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401738
unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401740
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401748
unsigned long long global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401750
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x40175c
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401768
static unsigned long long global_func_ptr;

 long long set_global_callback(void (*a0)(void))
{
 global_func_ptr = (unsigned long long)a0;
 return (long long)a0;
}


// Function: call_global_callback at 0x401774
typedef struct struct_0_callback {
 unsigned long long field_0;
} struct_0_callback;

unsigned long long call_global_callback()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]
 typedef unsigned long long (*func_ptr_t)(void);

 v0 = &v1;
 if (!global_func_ptr)
 return 4294967295;
 v2 = ((func_ptr_t)global_func_ptr)();
 return ((func_ptr_t)global_func_ptr)();
}


// Function: global_heap_store at 0x4017a0
static unsigned long long global_heap_ptr;

unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = (unsigned long long)a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x4017bc
unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x4017c4
unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: init_order_test at 0x4017cc
unsigned long long init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x4017d4
extern unsigned int __dollar_d_2;
extern struct_0_read *const_string;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_402261;
extern unsigned long long global_func_ptr;
extern unsigned long long global_heap_ptr;
extern unsigned int static_local_counter;

int test_static_global()
{
 unsigned long v3; // x1
 unsigned long v4; // x1
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(&g_402261);
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
	global_func_ptr = (unsigned long long)(void *)double_value;
	printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 global_heap_ptr = (unsigned long long)&v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: double_value at 0x401994
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: memop_memset at 0x40199c
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


// Function: memop_memcpy at 0x4019dc
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


// Function: memop_memmove at 0x401a24
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
 return a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401a64
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


// Function: memop_bzero at 0x401aa0
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
 v1 = v4;
 v2 = v5;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x401ad8
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
 return *(a1);
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_unaligned_access at 0x401b14
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

unsigned long long memop_unaligned_access(struct_0_unaligned *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401b28
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401b48
extern char g_402285;

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
 puts(&g_402285);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 v3 = 25708;
 v4 = 108;
 strncpy((char *)&v1, "HelloWor", 8);
 strncpy((char *)&v2, "HelloWor", 8);
 printf("MEMOP-L2-03: %c\n", 72);
 printf("MEMOP-L2-04: %d\n", 4294967295);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v0 = 5;
 __sync_synchronize();
 return printf("MEMOP-L3-02: %d\n", v0 * 2);
}


// Function: main at 0x401c28
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


// Function: extern_function at 0x401c4c
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


