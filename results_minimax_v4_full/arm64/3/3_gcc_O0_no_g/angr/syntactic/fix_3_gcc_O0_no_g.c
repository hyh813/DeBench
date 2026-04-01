// Angr Decompilation of 3_gcc_O0_no_g
// Platform: AARCH64

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);
extern void __stack_chk_fail(void);
int extern_function(unsigned int a0);

#define __ROL__(x, n) (((unsigned long)(x) << (n)) | ((unsigned long)(x) >> (64 - (n))))

// Forward struct declarations to avoid redefinition
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;
typedef struct struct_2 struct_2;

// Unified struct definitions
struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
 struct struct_0 *field_10;
};

struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
};

struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
};

// Struct for callback function pointer
typedef struct struct_0_call {
 unsigned long long field_0;
} struct_0_call;

// Struct for memop_memmove
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

// Struct for memop_unaligned_access
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4009e0
extern unsigned long long g_413f20;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_413f20;
}


// Function: sub_4009f4 at 0x4009f4
long long sub_4009f4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)dst;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400b70 at 0x400b70
void sub_400b70()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400b88 at 0x400b88
void sub_400b88()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400bfc at 0x400bfc
void sub_400bfc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400c48 at 0x400c48
void sub_400c48()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x400c54
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: local_vars at 0x400c6c
unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = (a0 * 2 | a0 >> 31) & 4294967294;
 v1 = v0 + 10;
 return v1;
}


// Function: local_array at 0x400ca0
extern char __stack_chk_guard;

long long local_array(unsigned int a0)
{
 char *v0; // [bp-0x60]
 unsigned int i; // [bp-0x34]
 unsigned long v5; // [bp-0x30]
 char v2; // [bp-0x1c]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 for (i = 0; i <= 9; i += 1)
 {
 *((unsigned int *)((char *)&v5 + (__ROL__(i, 2) & 18446744073709551612))) = a0 * i;
 }
 if (v3 == *((long long *)&__stack_chk_guard))
 return *((int *)&v2);
 __stack_chk_fail(); /* do not return */
}


// Function: local_struct at 0x400d30
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 * 2 | a0 >> 31) & 4294967294;
 return a0 + v0;
}


// Function: address_of_local at 0x400d60
unsigned int address_of_local(unsigned long ptr)
{
 unsigned int v0; // [bp-0x4]

 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: address_of_array at 0x400d88
int address_of_array(unsigned int *a0)
{
 unsigned int *v0; // [bp-0x10]
 unsigned int *v1; // [bp-0x8]

 v0 = a0;
 v1 = a0;
 return *(v0) + *(v1);
}


// Function: large_stack_frame at 0x400dbc
extern char __stack_chk_guard;

long long large_stack_frame()
{
 char *v0; // [bp-0x820]
 unsigned int i; // [bp-0x80c]
 unsigned long v5; // [bp-0x808]
 char v2; // [bp-0x408]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 for (i = 0; i <= 2047; i += 1)
 {
 *((char *)&v5 + i) = i;
 }
 if (v3 == *((long long *)&__stack_chk_guard))
 return v2;
 __stack_chk_fail(); /* do not return */
}


// Function: vla_stack at 0x400e48
extern char __stack_chk_guard;

long long vla_stack(unsigned int a0)
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

 v2 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 if (a0 <= 0 || a0 > 1000)
 {
 v10 = 4294967295;
 }
 else
 {
 v8 = a0;
 v4 = (v8 * 0x100000000 >> 63 & 0xffffffff00000000 | v8 & 4294967295) - 1;
 v9 = (__ROL__(__ROL__((__ROL__(v8 * 0x100000000 >> 63 & 0xffffffff00000000 | v8 & 4294967295, 2) & 18446744073709551612) + 15, 60) & 1152921504606846975, 4) & 0xfffffffffffffff0);
 v11 = (unsigned long)((char *)&v1 - (v9 & 65535));
 *((unsigned long long *)v2) = 0;
 if ((v9 & 65535) >= 0x400)
 *((unsigned long *)(v2 + 0x400)) = 0;
 ptr = __ROL__(__ROL__(v2 + 19, 62) & 4611686018427387903, 2) & 18446744073709551612;
 for (j = 0; j < a0; j += 1)
 {
 *((unsigned int *)(ptr + j * 4)) = (j * 2 | j >> 31) & 4294967294;
 }
 v10 = *((int *)(ptr + ((((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 0x100000000 >> 63 & 0xffffffff00000000 | ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 4));
 }
 if (v6 == *((long long *)&__stack_chk_guard))
 return v10;
 __stack_chk_fail(); /* do not return */
}


// Function: alloca_usage at 0x400fcc
extern char __stack_chk_guard;

long long alloca_usage(unsigned int a0)
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
 char *v2; // [bp-0x40]
 char v5; // [bp+0x0]

 v1 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 if (0 >= a0)
 {
 v6 = 4294967295;
 }
 else
 {
 v7 = __ROL__(__ROL__((__ROL__(a0, 2) & 18446744073709551612) + 15, 60) & 1152921504606846975, 4) & 0xfffffffffffffff0;
 v2 = (char *)((char *)&v8 - (v7 & 65535));
 *((unsigned long long *)v2) = 0;
 if ((v7 & 65535) >= 0x400)
 *((unsigned long *)(v2 + 0x400)) = 0;
 v3 = __ROL__(__ROL__(v2 + 31, 60) & 1152921504606846975, 4) & 0xfffffffffffffff0;
 for (j = 0; j < a0; j += 1)
 {
 *((unsigned int *)(v3 + (__ROL__(j, 2) & 18446744073709551612))) = ((j * 2 | j >> 31) & 4294967294) + j;
 }
 v6 = *((int *)(v3 + (__ROL__((((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647) * 0x100000000 >> 63 & 0xffffffff00000000 | ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647, 2) & 18446744073709551612)));
 }
 if (v4 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: stack_alias at 0x401104
extern char __stack_chk_guard;

long long stack_alias(unsigned long long a0)
{
 unsigned long long v6; // x1
 unsigned int v7; // w0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v2 = a0;
 v1 = v6;
 v4 = *((long long *)&__stack_chk_guard);
 v3 = 10;
 v2 = (unsigned long long)&v3;
 v1 = (unsigned long long)&v3;
 if (v2 == v1 && v2)
 {
 v3 = 20;
 v7 = v3;
 }
 else
 {
 v7 = 4294967295;
 }
 if (v4 == *((long long *)&__stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: test_stack_memory at 0x4011a8
extern unsigned int __dollar_d;
extern char __stack_chk_guard;

unsigned long long test_stack_memory()
{
 char *v0; // [bp-0x50]
 char v1; // [bp-0x38]
 unsigned int flag1; // [bp-0x34]
 unsigned int result; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 printf("%u\n", __dollar_d);
 printf("MEM-L1-01 (local_vars): %d\n", local_vars(5) & 4294967295);
 printf("MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
 printf("MEM-L1-03 (local_struct): %d\n", local_struct(5) & 4294967295);
 printf("MEM-L1-04 (address_of_local): %d\n", address_of_local((unsigned long)&v1) & 4294967295);
 memset(&result, 0, 40);
 result = 1;
 v5 = 2;
 v6 = 3;
 printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(&result) & 4294967295);
 printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 flag1 = 0;
 printf("MEM-L2-04 (stack_alias): %d\n", stack_alias((unsigned long long)&flag1) & 4294967295);
 if (v7 == *((long long *)&__stack_chk_guard))
 return (unsigned long long)&__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: heap_basic at 0x4012fc
unsigned long long heap_basic(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 char *ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 ptr = (char *)malloc(__ROL__(a0, 2) & 18446744073709551612);
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
unsigned long long heap_calloc(unsigned int a0)
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
unsigned long long heap_realloc()
{
 unsigned int v8; // w0
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0x20]
 unsigned int j; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 char v7; // [bp+0x0]

 v0 = &v7;
 ptr = (unsigned int *)malloc(20);
 if (!ptr)
 return 4294967295;
 for (i = 0; i <= 4; i += 1)
 {
 *((unsigned int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612))) = i + 1;
 }
 v3 = ptr[2];
 ptr = (unsigned int *)realloc(ptr, 40);
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
unsigned long long heap_array(unsigned int a0)
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
unsigned long long heap_struct(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0xc]
 void *ptr; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 ptr = malloc(8);
 if (ptr)
 {
 *((unsigned int *)ptr) = a0;
 *((unsigned int *)((char *)ptr + 4)) = (a0 * 2 | a0 >> 31) & 4294967294;
 v1 = *((unsigned int *)ptr) + *((unsigned int *)((char *)ptr + 4));
 free(ptr);
 return v1;
 }
 return 4294967295;
}


// Function: heap_nested at 0x40168c
unsigned long long heap_nested(struct_1 **a0)
{
 struct_1 *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
 if (!ptr)
 return 4294967295;
 ptr->field_0 = 10;
 a0[0] = ptr;
 ptr = malloc(16);
 if (!ptr)
 {
 free(a0[0]);
 return 4294967294;
 }
 ptr->field_8 = (unsigned long long)ptr;
 if (ptr->field_8)
 {
 ((struct_2 *)ptr->field_8)->field_0 = 20;
 ((struct_2 *)ptr->field_8)->field_8 = 0;
 return 0;
 }
 free(a0[0]);
 return 4294967294;
}


// Function: linked_list_heap at 0x401748
unsigned long long linked_list_heap()
{
 char *v0; // [bp-0x50]
 unsigned int i; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 struct_0 *cur; // [bp-0x30]
 struct_0 *p; // [bp-0x28]
 struct_0 *iter; // [bp-0x20]
 struct_0 *ptr5; // [bp-0x18]
 struct_0 *ptr; // [bp-0x10]
 struct_0 *addr; // [bp-0x8]
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
struct_0 * create_tree_node(unsigned int a0)
{
 char *v0; // [bp-0x30]
 struct_0 *ptr; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 ptr = (struct_0 *)malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x4018e0
unsigned long long tree_heap_traversal()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 struct_0 *ptr; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 ptr = create_tree_node(10);
 if (!ptr)
 return 4294967295;
 ptr->field_8 = create_tree_node(20);
 ptr->field_10 = create_tree_node(30);
 if (ptr->field_8 && ptr->field_10)
 {
 v1 = ptr->field_0 + ptr->field_8->field_0 + ptr->field_10->field_0;
 free(ptr->field_8);
 free(ptr->field_10);
 free(ptr);
 return v1;
 }
 if (ptr->field_8)
 free(ptr->field_8);
 if (ptr->field_10)
 free(ptr->field_10);
 free(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x4019f0
unsigned long long memory_leak(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0xc]
 unsigned long long ptr; // [bp-0x8]
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
unsigned long long dangling_pointer()
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
unsigned long long double_free(unsigned int *a0)
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
unsigned long long heap_overflow()
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
extern char __stack_chk_guard;
extern char g_402a68;
extern char g_402bd8;
extern char g_402be8;
extern char g_402c10;
extern char g_402c58;

unsigned long long test_heap_memory()
{
 char *v0; // [bp-0x30]
 unsigned int v1[1]; // [bp-0x1c]
 unsigned int flag1; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 struct_0 *result; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 puts(&g_402a68);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
 struct_1 *result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result) & 4294967295);
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
 printf(&g_402bd8, v3);
 exit(0); /* do not return */
 }
 if (flag1 > 0)
 {
 waitpid(flag1, &v1, 0);
 if (!((char)*(v1) & 127))
 {
 printf(&g_402be8, (*(v1) >> 31 & 0xff000000 | __ROL__(*(v1), 24) & 16777215) & 255);
 }
 else
 {
 printf(&g_402c10, *(v1) & 127);
 }
 }
 else
 {
 perror(&g_402c58);
 }
 if (v5 == *((long long *)&__stack_chk_guard))
 return (unsigned long long)&__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: global_var_access at 0x401e14
extern unsigned int __dollar_d;

int global_var_access()
{
 __dollar_d = __dollar_d + 1;
 return __dollar_d;
}


// Function: global_var_read at 0x401e40
extern unsigned int __dollar_d;

unsigned int global_var_read()
{
 return (__dollar_d * 2 | __dollar_d >> 31) & 4294967294;
}


// Function: global_array_access at 0x401e54
extern unsigned int global_array[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 >= 0 && a0 <= 9)
 return global_array[a0];
 return 4294967295;
}


// Function: static_local at 0x401e94
extern unsigned int counter_1;

unsigned long long static_local(unsigned int a0)
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
unsigned int static_helper(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_static_func at 0x401f04
int call_static_func(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return static_helper(a0) + 1;
}


// Function: access_extern_global at 0x401f24
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401f38
long long call_extern_func()
{
 int v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = extern_function(5);
 return (long long)v2;
}


// Function: read_const_data at 0x401f50
extern struct_0 *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401f74
extern unsigned int bss_var;

int access_bss_var()
{
 return bss_var;
}


// Function: access_bss_buffer at 0x401f84
extern char bss_buffer;

long long access_bss_buffer()
{
 return bss_buffer;
}


// Function: global_struct_access at 0x401f94
extern unsigned int g_41403c;
extern unsigned int global_point;

int global_struct_access()
{
 return global_point + g_41403c;
}


// Function: set_file_static at 0x401fb4
extern unsigned int file_scope_static;

unsigned int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return file_scope_static;
}


// Function: get_file_static at 0x401fd8
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401fe8
extern unsigned long long global_func_ptr;

unsigned long long * set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return &global_func_ptr;
}


// Function: call_global_callback at 0x40200c
extern struct_0_call *global_func_ptr;

unsigned long long call_global_callback(unsigned int a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (!global_func_ptr)
 return 4294967295;
 v2 = global_func_ptr(a0, global_func_ptr);
 return global_func_ptr(a0, global_func_ptr);
}


// Function: global_heap_store at 0x402050
extern struct_0 *global_heap_ptr;

unsigned long long global_heap_store(unsigned long a0)
{
 global_heap_ptr = (struct_0 *)a0;
 if (!global_heap_ptr)
 return 4294967295;
 return global_heap_ptr->field_0;
}


// Function: static_complex_init at 0x40209c
extern unsigned int complex_init;
extern unsigned int g_414050;
extern unsigned int g_414058;

int static_complex_init()
{
 return complex_init + g_414050 + g_414058;
}


// Function: tls_access at 0x4020cc
unsigned int tls_access(unsigned int a0)
{
 unsigned int local_val = a0; // tpidr_el0 - TLS register

 return (local_val * 2 | local_val >> 31) & 4294967294;
}


// Function: init_depends_on at 0x402104
extern unsigned int static_depends_0;

int init_depends_on(unsigned int *a0)
{
 if (a0)
 static_depends_0 = *(a0);
 return static_depends_0;
}


// Function: init_order_test at 0x402140
extern char __stack_chk_guard;

long long init_order_test()
{
 unsigned int v4; // w0
 char *v0; // [bp-0x20]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 v1[0] = 20;
 v4 = init_depends_on(&v1);
 if (v2 == *((long long *)&__stack_chk_guard))
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: test_static_global at 0x40219c
extern char __stack_chk_guard;
extern char g_402c78;

unsigned long long test_static_global()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 puts(&g_402c78);
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
 set_global_callback(double_value);
 printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5) & 4294967295);
 v1 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store(&v1) & 4294967295);
 printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init() & 4294967295);
 printf("STM-L3-01 (tls_access): %d\n", tls_access(10) & 4294967295);
 printf("STM-L3-02 (init_order_test): %d\n", init_order_test() & 4294967295);
 if (v2 == *((long long *)&__stack_chk_guard))
 return (unsigned long long)&__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: memop_memset at 0x402398
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
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
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0 && a1 && n)
 {
 memcpy(a0, a1, n);
 return *((int *)((char *)a0 + (n & 0xFFFFFFF0) - 4));
 }
 return 4294967295;
}


// Function: memop_memmove at 0x40245c
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0 && 1 < a1)
 {
 memmove(&a0->field_0, a0, a1 - 1);
 return a0->field_0;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x4024c0
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
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
unsigned long long memop_bzero(char *a0, unsigned long n)
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
unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
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
extern char __stack_chk_guard;

long long memop_unaligned_access(struct_0 *ptr)
{
 unsigned int v3; // w0
 char *v0; // [bp-0x30]
 unsigned long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = *((long long *)&__stack_chk_guard);
 if (!ptr)
 v3 = 4294967295;
 else
 v3 = *((int *)&(&ptr->padding_0)[1]);
 if (v1 == *((long long *)&__stack_chk_guard))
 return v3;
 __stack_chk_fail(); /* do not return */
}


// Function: memop_memory_barrier at 0x402670
unsigned long long memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x4]

 if (ptr)
 {
 v0 = *(ptr);
 /* memory barrier */
 return *(ptr) + v0;
 }
 return 4294967295;
}


// Function: test_memory_op_functions at 0x4026b4
extern char __stack_chk_guard;
extern char g_402f28;

unsigned long long test_memory_op_functions()
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
 v17 = *((long long *)&__stack_chk_guard);
 puts(&g_402f28);
 v6 = 85899345930;
 v7 = 171798691870;
 v8 = 50;
 memset(&v9, 0, 20);
 printf("MEMOP-L2-01: %d\n", memop_memset(&v16, 10, 65) & 4294967295);
 printf("MEMOP-L2-02: %d\n", memop_memcpy(&v9, &v6, 20) & 4294967295);
 strncpy(&v14, "HelloWor", 8);
 strncpy(v15, "rld", 3);
 printf("MEMOP-L2-03: %c\n", memop_memmove(&v14, 10) & 4294967295);
 v2 = 8589934593;
 v3 = 3;
 v4 = 8589934593;
 v5 = 4;
 printf("MEMOP-L2-04: %d\n", memop_memcmp(&v2, &v4, 12) & 4294967295);
 printf("MEMOP-L2-05: %d\n", memop_bzero(&v13, 10) & 4294967295);
 v10 = 67305985;
 *(&result) = 0;
 printf("MEMOP-L2-06: %d\n", memop_bcopy(&v10, &result, 4) & 4294967295);
 v12 = 0x706050403020100;
 printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v12) & 4294967295);
 v1[0] = 5;
 printf("MEMOP-L3-02: %d\n", memop_memory_barrier(&v1) & 4294967295);
 if (v17 == *((long long *)&__stack_chk_guard))
 return &__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: main at 0x402898
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


// Function: extern_function at 0x4028bc
int extern_function(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + a0;
}



/* CRT stub function _fini removed by preprocessor */


