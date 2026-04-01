// Angr Decompilation of 3_clang_O1_g
// Platform: ARMEL

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* CRT stub function _init removed by preprocessor */



// Function: sub_400568 at 0x400568
void sub_400568()
{
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
 v1 += a0;
 i -= 1;
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
 if (a0 < 1)
 return *((int *)&(&v0)[(4294967293 & (a0 + (a0 >> 31)) * 2) + -1 * (7 + a0 * 4 & 0xfffffff8)]);
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


// Function: alloca_usage at 0x4008c8
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
 goto LABEL_4008d4;
 return 4294967295;
 i = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_4008d4;
 return a0;
 i = a0;
 }
LABEL_4008d4:
 v1 = v4;
 v0 = v5;
 v6 = 0;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v8 - (7 + i * 4 & 0xfffffff8) + 4 * idx)) = v6;
 v6 += 3;
 idx += 1;
 } while (i != idx);
 return *((int *)((char *)&v8 - (7 + i * 4 & 0xfffffff8) + (4294967293 & (i + (i >> 31)) * 2)));
}


// Function: stack_alias at 0x40092c
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400934
extern char g_402f62;

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
 puts(&g_402f62);
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


// Function: heap_basic at 0x400a68
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


// Function: heap_calloc at 0x400ac8
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int result; // r5
 unsigned int *ptr; // r0
 unsigned int v2; // r4
 unsigned int *v4; // r1

 result = a0;
 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v2 = 0;
 if (result >= 1)
 {
 ptr = ptr;
 do
 {
 v4 = ptr + 1;
 v2 += *(ptr);
 result -= 1;
 ptr = v4;
 } while (result != 1);
 }
 free(ptr);
 return v2;
}


// Function: heap_realloc at 0x400b18
unsigned int heap_realloc()
{
 unsigned int *ptr; // r0
 unsigned int *ptr2; // r4
 unsigned int idx; // r0
 unsigned int v3; // r1
 unsigned int *p; // r0
 unsigned int index; // r1
 unsigned int v6; // r2
 unsigned int v7; // r5

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 idx = 0;
 do
 {
 v3 = idx + 1;
 ptr[idx] = v3;
 idx = v3;
 } while (idx != 5);
 p = realloc(ptr, 40);
 if (p)
 {
 index = 5;
 v6 = 50;
 do
 {
 p[index] = v6;
 v6 += 10;
 index += 1;
 } while (index != 10);
 v7 = p[5];
 ptr2 = p;
 }
 else
 {
 v7 = 4294967294;
 }
 free(ptr2);
 return v7;
}


// Function: heap_array at 0x400bb4
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v2; // r1
 unsigned int result; // r3
 unsigned int *v5; // r2

 v0 = a0;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (v0 >= 1)
 {
 v2 = 0;
 ptr = ptr;
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


// Function: heap_struct at 0x400c18
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x400c20
typedef struct struct_2_inner {
 unsigned int padding_0;
 struct struct_3_inner *field_4;
} struct_2_inner;

typedef struct struct_0_inner {
 unsigned int padding_0;
 struct struct_1_inner *field_4;
} struct_0_inner;

typedef struct struct_3_inner {
 unsigned int field_0;
 unsigned int field_4;
} struct_3_inner;

typedef struct struct_1_inner {
 unsigned int field_0;
 unsigned int field_4;
} struct_1_inner;

struct_2_inner * heap_nested(struct_0_inner **a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 struct_0_inner **addr; // r4
 struct_2_inner *ptr; // r0
 struct_2_inner *p; // r0

 addr = a0;
 ptr = (struct_2_inner *)malloc(8);
 *(addr) = ptr;
 if (!ptr)
 {
 return (struct_2_inner *)0xffffffff;
 }
 // Set field_0 (which is at offset 0, same as padding_0)
 ptr->padding_0 = 10;
 ptr->field_4 = (struct_3_inner *)malloc(8);
 if (!ptr->field_4)
 {
 free(*(addr));
 return (struct_2_inner *)0xfffffffe;
 }
 ptr->field_4->field_0 = 20;
 ptr->field_4->field_4 = 0;
 return (struct_2_inner *)NULL;
}


// Function: linked_list_heap at 0x400c94
typedef struct struct_0_list {
 unsigned int field_0;
 struct struct_0_list *field_4;
} struct_0_list;

unsigned int linked_list_heap()
{
 unsigned int v0; // r7
 struct_0_list *v1; // r5
 struct_0_list *v9; // r0
 struct_0_list *ptr4; // r5
 struct_0_list *ptr3; // r9
 unsigned int v3; // r6
 struct_0_list *p; // r10
 struct_0_list *ptr; // r5
 unsigned int v7; // r4
 struct_0_list *addr; // r0

 v0 = 1;
 v1 = NULL;
 ptr3 = NULL;
 v3 = 0;
 do
 {
 p = malloc(8);
 if (p)
 {
 p->field_0 = v3 * 10;
 p->field_4 = NULL;
 if (!v1)
 {
 ptr3 = p;
 v1 = p;
 if (!p)
 break;
 }
 else
 {
 ptr3->field_4 = p;
 ptr3 = p;
 if (!p)
 break;
 }
 }
 else
 {
 if (v1)
 {
 do
 {
 ptr = v1;
 free(ptr);
 v1 = ptr->field_4;
 } while (ptr->field_4);
 }
 v1 = NULL;
 if (!p)
 break;
 }
 } while ((v0 = (v3 < 4 ? 1 : 0), v3 += 1, v3 != 5));
 if (((char)v0 & 1))
 return 4294967295;
 v7 = 0;
 if (v1)
 {
 addr = v1;
 do
 {
 v9 = addr->field_4;
 v7 += addr->field_0;
 addr = v9;
 } while (addr->field_4);
 }
 if (!v1)
 return v7;
 do
 {
 ptr4 = v1;
 free(ptr4);
 v1 = ptr4->field_4;
 } while (ptr4->field_4);
 return v7;
}


// Function: create_tree_node at 0x400d9c
unsigned int *create_tree_node(unsigned int a0)
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


// Function: tree_heap_traversal at 0x400dc8
typedef struct struct_0_tree {
 unsigned int field_0;
 struct struct_1_tree *field_4;
 struct struct_2_tree *field_8;
} struct_0_tree;

typedef struct struct_1_tree {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
} struct_1_tree;

typedef struct struct_2_tree {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
} struct_2_tree;

unsigned int tree_heap_traversal()
{
 struct_0_tree *p; // r4
 struct_1_tree *ptr; // r5
 struct_2_tree *addr; // r6
 unsigned int v4; // r1
 unsigned int v5; // r5

 ptr = (struct_1_tree *)malloc(12);
 if (!ptr)
 return 4294967295;
 p = (struct_0_tree *)ptr;
 p->field_0 = 10;
 p->field_4 = 0;
 p->field_8 = 0;
 ptr = (struct_1_tree *)malloc(12);
 if (ptr)
 {
 ptr->field_0 = 20;
 ptr->field_4 = 0;
 ptr->field_8 = 0;
 }
 else
 {
 ptr->field_0 = 0;
 ptr->field_4 = 0;
 ptr->field_8 = 0;
 }
 p->field_4 = ptr;
 addr = malloc(12);
 if (addr)
 {
 if (!armg_calculate_condition(18, addr, 0, 0))
 goto LABEL_400e26;
LABEL_400e25:
 v4 = 30;
 }
 else
 {
 if (armg_calculate_condition(18, addr, 0, 0))
 goto LABEL_400e25;
LABEL_400e26:
 }
 addr->field_0 = v4;
 addr->field_4 = 0;
 addr->field_8 = 0;
 p->field_8 = addr;
 if (ptr)
 {
 if ((char)armg_calculate_condition(18, (armg_calculate_condition(18, addr, 0, 0) ? addr : addr), (armg_calculate_condition(18, addr, 0, 0) ? 0 : 0), (armg_calculate_condition(18, addr, 0, 0) ? 0 : 0)))
 goto LABEL_400e6c;
LABEL_400e44:
 if (ptr)
 free(ptr);
 v5 = 4294967294;
 if (!addr)
 {
 free(p);
 return 4294967294;
 }
 }
 else
 {
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, addr, 0, 0) ? addr : addr), (armg_calculate_condition(18, addr, 0, 0) ? 0 : 0), (armg_calculate_condition(18, addr, 0, 0) ? 0 : 0))))
 goto LABEL_400e44;
LABEL_400e6c:
 free(ptr);
 v5 = ptr[0] + p->field_0 + addr[0];
 addr = p->field_8;
 }
 free(addr);
 free(p);
 return v5;
}


// Function: memory_leak at 0x400ea8
unsigned int memory_leak(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int *ptr; // r0
 unsigned int v1; // r0
 unsigned int idx; // r1

 ptr = (unsigned int *)malloc(i * 4);
 if (!ptr)
 {
 return 4294967295;
 }
 if (i >= 1)
 {
 idx = 0;
 do
 {
 ptr[idx] = idx;
 idx += 1;
 } while (i != idx);
 }
 return ptr[0];
}


// Function: dangling_pointer at 0x400efc
typedef struct struct_0_dangle {
 struct struct_0_dangle *field_0;
} struct_0_dangle;

struct_0_dangle ** dangling_pointer(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 struct_0_dangle **ptr; // r0
 struct_0_dangle **v1; // r0
 struct_0_dangle **v2; // r0
 struct_0_dangle **ptr_out; // r4

 ptr = malloc(4);
 if (!ptr)
 {
 v1 = (struct_0_dangle **)0xffffffff;
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400f18;
 return (struct_0_dangle **)0xffffffff;
 v2 = v1;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_400f18;
 return ptr;
 v2 = ptr;
 }
LABEL_400f18:
 ptr_out = v2;
 *(ptr_out) = (struct_0_dangle *)0x2a;
 printf("value before free: %d\n", 42);
 free(ptr_out);
 return *(ptr_out);
}


// Function: double_free at 0x400f4c
unsigned int double_free(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967294;
}


// Function: heap_overflow at 0x400f5c
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
 v1 += 100;
 i -= 1;
 } while (i != 4294967285);
 free(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x400fa8
typedef struct struct_0_heap {
 unsigned int field_0;
 struct struct_1_heap *field_4;
} struct_0_heap;

typedef struct struct_1_heap {
 unsigned int field_0;
 unsigned int field_4;
} struct_1_heap;

extern char g_402c19;
extern char g_402c29;
extern char g_402c4e;
extern char g_402c8f;
extern char g_402f80;

unsigned int test_heap_memory()
{
 unsigned int *p; // r0
 unsigned int v3; // r4
 unsigned int idx4; // r0
 unsigned int v13; // r1
 unsigned int *ptr6; // r0
 unsigned int idx5; // r1
 unsigned int v16; // r2
 unsigned int *addr; // r0
 unsigned int v18; // r1
 unsigned int m; // r2
 struct_0_heap *ptr; // r4
 unsigned int *ptr4; // r0
 unsigned int v4; // r5
 unsigned int v22; // r1
 unsigned int *ptr5; // r0
 unsigned int off; // r1
 unsigned int v27; // r1
 unsigned int pid; // r0
 unsigned int v29; // r0
 char *v30; // r0
 unsigned int v31; // r0
 unsigned int index; // r1
 unsigned int msg; // r0
 unsigned int v33; // r1
 unsigned int v34; // r2
 unsigned int v35; // r3
 unsigned int *ptr7; // r0
 unsigned int j; // r1
 unsigned int *ptr_arr; // r0
 unsigned int v9; // r4
 unsigned int v10; // r6
 unsigned int *ptr3; // r5
 char v0; // [bp-0x20]
 unsigned int v1[1]; // [bp-0x1c]

 puts(&g_402f80);
 p = malloc(40);
 v3 = 4294967295;
 v4 = 4294967295;
 if (p)
 {
 index = 0;
 do
 {
 *((unsigned int *)((char *)p + 2 * index)) = index;
 index += 2;
 } while (index != 20);
 v4 = p[5];
 free(p);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n", v4);
 ptr7 = calloc(5, 4);
 if (ptr7)
 {
 j = 0;
 v3 = 0;
 do
 {
 v3 += ptr7[-1 * j];
 j -= 1;
 } while (j != 4294967291);
 free(ptr7);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v3);
 ptr = malloc(20);
 v9 = 4294967295;
 v10 = 4294967295;
 if (ptr)
 {
 ptr3 = ptr;
 idx4 = 0;
 do
 {
 v13 = idx4 + 1;
 ptr3[idx4] = v13;
 idx4 = v13;
 } while (idx4 != 5);
 ptr6 = realloc(ptr3, 40);
 if (ptr6)
 {
 idx5 = 5;
 v16 = 50;
 do
 {
 ptr6[idx5] = v16;
 v16 += 10;
 idx5 += 1;
 } while (idx5 != 10);
 v10 = ptr6[5];
 ptr3 = ptr6;
 }
 else
 {
 v10 = 4294967294;
 }
 free(ptr3);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v10);
 addr = malloc(40);
 if (addr)
 {
 v18 = 0;
 m = 0;
 do
 {
 addr[-1 * m] = v18;
 v18 += 3;
 m -= 1;
 } while (m != 4294967286);
 v9 = addr[5];
 free(addr);
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v9);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 ptr = malloc(8);
 if (ptr)
 {
 ptr->field_0 = 10;
 ptr4 = malloc(8);
 ptr->field_4 = ptr4;
 if (ptr4)
 {
 v22 = 0;
 ptr4[0] = 20;
 ptr4[1] = 0;
 }
 else
 {
 free(ptr);
 v22 = 4294967294;
 }
 }
 else
 {
 v22 = 4294967295;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v22);
 if (ptr)
 {
 free(ptr->field_4);
 free(ptr);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 ptr5 = malloc(20);
 if (ptr5)
 {
 off = 0;
 do
 {
 ptr5[off] = off;
 off += 1;
 } while (off != 5);
 v27 = ptr5[2];
 }
 else
 {
 v27 = 4294967295;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v27);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 printf(&g_402c19, dangling_pointer(pid, v33, v34, v35, *((int *)&v0), v1));
 exit(0); /* do not return */
 }
 else if (pid >= 1)
 {
 waitpid(pid, &v1, 0);
 if (((char)v1 & 127))
 {
 v29 = 0x1000000 + (v1 & 127) * 0x1000000;
 if (v29 < 0x2000000)
 return v29;
 v30 = &g_402c4e;
 }
 else
 {
 v30 = &g_402c29;
 }
 v31 = printf(v30);
 return printf(v30);
 }
 else
 {
 msg = (unsigned int)perror(&g_402c8f);
 return (unsigned int)perror(&g_402c8f);
 }
}


// Function: global_var_access at 0x4012f0
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x401314
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x401328
extern unsigned int global_array;

int global_array_access(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 7332;
 if (a0 <= 9)
 v0 = &global_array;
 return *((int *)(v0 + a0 * 4));
}


// Function: static_local at 0x401348
extern unsigned int static_local_counter;

int static_local(unsigned int a0)
{
 static_local_counter = (!a0 ? static_local_counter + 1 : 0);
 return static_local_counter;
}


// Function: call_static_func at 0x401378
unsigned int call_static_func(unsigned int a0)
{
 return 1 | a0 * 2;
}


// Function: access_extern_global at 0x401384
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}

// Forward declaration for __dollar_a_30
unsigned int __dollar_a_30(unsigned int a0);


// Function: call_extern_func at 0x40139c
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x4013b0
typedef struct struct_0_read_const {
 char padding_0[4];
 char field_4;
} struct_0_read_const;

extern struct_0_read_const *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x4013c8
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x4013d0
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x4013d8
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x4013e0
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x4013f4
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401404
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x401418
typedef struct struct_0_callback {
 unsigned int field_0;
} struct_0_callback;

extern struct_0_callback *global_func_ptr;

unsigned int call_global_callback(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x8]

 v0 = a0;
 if (!global_func_ptr)
 {
 if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
 goto LABEL_401434;
 return 4294967295;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
 goto LABEL_401434;
 return a0;
 }
LABEL_401434:
 v1 = global_func_ptr->field_0;
 return global_func_ptr->field_0;
}


// Function: global_heap_store at 0x401448
extern unsigned int global_heap_ptr;

unsigned int global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x401468
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401470
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401478
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401480
typedef struct struct_0_test_static {
 char padding_0[4];
 char field_4;
} struct_0_test_static;

extern struct_0_test_static *const_string;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_402f9e;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;
extern unsigned int global_heap_ptr;
extern unsigned int static_local_counter;

int test_static_global()
{
 unsigned int v1; // r1
 unsigned int v2; // r1
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x14]

 puts(&g_402f9e);
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
 global_heap_ptr = &v0;
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 v4 = printf("STM-L3-02 (init_order_test): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: __dollar_a_30 at 0x4016c8
unsigned int __dollar_a_30(unsigned int a0)
{
 return a0 * 2;
}


// Function: memop_memset at 0x4016d0
unsigned int memop_memset(char *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int n; // r3

 if (a0)
 {
 n = a1;
 if (!armg_calculate_condition(18, a0, 0, 0))
 goto LABEL_4016e6;
LABEL_4016e5:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 else
 {
 n = a3;
 if (armg_calculate_condition(18, a0, 0, 0))
 goto LABEL_4016e5;
LABEL_4016e6:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x401710
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
 goto LABEL_40172e;
LABEL_40172d:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 else
 {
 n = v1;
 if (armg_calculate_condition(18, a1, 0, 0))
 goto LABEL_40172d;
LABEL_40172e:
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 memcpy(a0, a1, n);
 return *((int *)((char *)a0 + n - 4));
}


// Function: memop_memmove at 0x40175c
typedef struct struct_0 {
 char padding_0[1];
 char field_1;
} struct_0;

unsigned int memop_memmove(struct_0 *a0, unsigned int a1)
{
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


// Function: memop_memcmp at 0x401794
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // lr
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x4]
 unsigned int v1; // [bp-0x8]

 if (a0)
 goto LABEL_4017a4;
 return 0;
LABEL_4017a4:
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
 v2 = memcmp(a0, a1, a2);
 if (1 > v2)
 return (v2 ? 4294967295 : 0);
 return 1;
}


// Function: memop_bzero at 0x4017dc
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
 goto LABEL_4017e8;
 return 0xffffffff;
 v3 = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_4017e8;
 return a0;
 v3 = a0;
 }
LABEL_4017e8:
 memset(v3, 0, n);
 return 0;
}


// Function: memop_bcopy at 0x401808
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


// Function: memop_unaligned_access at 0x401848
unsigned int memop_unaligned_access(char *a0)
{
 unsigned int result; // r0

 if (!a0)
 {
 result = 0xffffffff;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401854;
 return 0xffffffff;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401854;
 return (unsigned int)(unsigned char)a0;
 }
LABEL_401854:
 result = (unsigned char)a0[1] | (unsigned int)(unsigned char)a0[2] << 8 | (unsigned int)(unsigned char)a0[3] << 16;
 return result;
}


// Function: memop_memory_barrier at 0x401874
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
 goto LABEL_401880;
 return 4294967295;
 v4 = v3;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401880;
 return a0;
 v4 = a0;
 }
LABEL_401880:
 v2 = v4;
 v1 = v5;
 v0 = v6;
 __sync_synchronize(); /* do not return */
}


// Function: test_memory_op_functions at 0x4018a0
extern char g_402fc2;
extern void g_403010;
extern void g_40301c;

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
 puts(&g_402fc2);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 strncpy(v3, "HelloWorld", 10);
 memmove(&v1 | 1, &v1, 9);
 printf("MEMOP-L2-03: %c\n", v2);
 result = memcmp(&g_403010, &g_40301c, 12);
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
 __sync_synchronize();
 return 0;
}


// Function: main at 0x4019e4
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: extern_function at 0x401a04
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: __sync_fetch_and_add_4 at 0x401a0c
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x401a44
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x401a7c
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x401ab4
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x401aec
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x401b24
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x401b60
int __sync_fetch_and_add_2(unsigned int *a0, unsigned int a1)
{
 int result;
 do
 { } while (0);
 result = *a0;
 return (unsigned short)(result);
}


// Function: __sync_fetch_and_sub_2 at 0x401bc0
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x401c20
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x401c80
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x401ce0
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x401d40
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x401da4
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x401e00
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x401e5c
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x401eb8
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x401f14
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x401f70
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x401fd0
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x402008
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x402040
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x402078
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x4020b0
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x4020e8
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x402124
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return v1 + a1;
}


// Function: __sync_sub_and_fetch_2 at 0x40218c
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 - a1) != v1);
 return v1 - a1;
}


// Function: __sync_or_and_fetch_2 at 0x4021f4
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return v1 | a1;
}


// Function: __sync_and_and_fetch_2 at 0x40225c
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_xor_and_fetch_2 at 0x4022c4
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_nand_and_fetch_2 at 0x40232c
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_add_and_fetch_1 at 0x402398
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_sub_and_fetch_1 at 0x4023fc
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_or_and_fetch_1 at 0x402460
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_and_and_fetch_1 at 0x4024c4
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_xor_and_fetch_1 at 0x402528
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_nand_and_fetch_1 at 0x40258c
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_val_compare_and_swap_4 at 0x4025f4
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 while (*(a0) == i)
 {
 if (!4294905792())
 return i;
 }
 return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x402644
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
 {
 if (!4294905792())
 return a1;
 }
 return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x4026bc
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
 {
 if (!4294905792())
 return a1;
 }
 return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x402730
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = __sync_val_compare_and_swap_4(&a0, a1, a2);
 return (!v4 ? 32 : 0) >> 5;
}


// Function: __sync_bool_compare_and_swap_2 at 0x40275c
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_2(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_1 at 0x402778
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_1(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_synchronize at 0x402794
void __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x4027a0
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (4294905792());
 return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x4027d8
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (4294905792());
 return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x402838
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (4294905792());
 return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x402894
void __sync_lock_release_8(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 ptr[1] = 0;
 return;
}


// Function: __sync_lock_release_4 at 0x4028b8
void __sync_lock_release_4(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x4028d8
void __sync_lock_release_2(unsigned short *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x4028f8
void __sync_lock_release_1(char *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}



/* CRT stub function _fini removed by preprocessor */


