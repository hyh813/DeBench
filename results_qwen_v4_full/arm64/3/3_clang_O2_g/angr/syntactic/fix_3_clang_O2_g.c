// Angr Decompilation of 3_clang_O2_g
// Platform: AARCH64

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdint.h>

// Helper macros for decompiled code
#define AddV(a, b) ((a) + (b))
#define MulV(a, b) ((a) * (b))
#define ShlNV(a, b) ((a) << (b))
#define __ROL__(val, n) (((val) << (n)) | ((val) >> (64 - (n))))
#define arm64g_calculate_condition(cond, a, b, c) ((a) == (b))

/* CRT stub function _init removed by preprocessor */

// Forward declarations
unsigned int extern_function(unsigned int a0);
unsigned int double_value(unsigned int a0);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void register_tm_clones(void);
void call_weak_fn(void);
unsigned long long global_func_ptr;
unsigned long long global_heap_ptr;
unsigned int static_local_counter;
unsigned int file_scope_static;
unsigned int extern_global_var;
int test_stack_memory(void);
unsigned long long test_heap_memory(void);

// Function: __dollar_x at 0x4008e0
long long __dollar_x()
{
 return 0;
}


// Function: sub_4008f4 at 0x4008f4
long long sub_4008f4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 memcpy(v0, v1, v2);
 return 0;
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
 return 0;
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
 return a0 * 5;
}


// Function: local_struct at 0x400b68
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x400b70
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400b84
unsigned int address_of_array(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: large_stack_frame at 0x400b90
long long large_stack_frame()
{
 unsigned long long i; // x8
 unsigned long long v5; // q2
 char v0; // [bp-0x810]
 char v1; // [bp-0x410]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 i = 0;
 v5 = 0xf0e0d0c0b0a09080706050403020100;
 do
 {
 i += 32;
 *((unsigned long long *)&(&v0)[i]) = v5;
 *((unsigned long long *)&(&v0)[16 + i]) = AddV(v5, 1157442765409226768);
 v5 = AddV(v5, 2314885530818453536);
 } while (i != 0x800);
 return v1;
}


// Function: vla_stack at 0x400bdc
typedef struct struct_vla_0 {
 struct struct_vla_1 *field_0;
 char padding_8[8];
 unsigned long long field_10;
} struct_vla_0;

typedef struct struct_vla_1 {
 char field_0;
} struct_vla_1;

unsigned long long vla_stack(unsigned int a0)
{
 unsigned long long v3; // x30
 unsigned long v4; // x9
 unsigned int v13; // w11
 struct_vla_0 *iter; // x12
 unsigned long long j; // x9
 struct_vla_0 *v5; // x8
 unsigned long long v6; // x10
 int v7; // q0
 unsigned long long v8; // q1
 struct_vla_0 *cur; // x11
 unsigned long long i; // x12
 char *v11; // q2
 char *v0; // [bp-0x10]
 unsigned long long v1; // x1
 char v2; // [bp+0x0]

 if (!((char)arm64g_calculate_condition(33, (unsigned long long)(a0 - 1001), 1000, 0)))
 return 4294967295;
 v0 = &v2;
 v4 = a0;
 v5 = (struct_vla_0 *)((char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352));
 if (8 > a0)
 {
  return 0;
 }
 else
 {
  v6 = v4 & 0xfffffff8;
  v7 = 34359738376;
  v8 = 0x3000000020000000100000000;
  cur = v5;
  i = v6;
  do
  {
   v11 = (char *)ShlNV(v8, 1);
   v8 = AddV(v8, v7);
   cur->field_10 = (unsigned long long)v11;
   cur->field_0 = (struct_vla_1 *)AddV((unsigned long long)v11, v7);
   cur += 1;
   i -= 8;
  } while (i != 0);
  if (v6 == v4)
  {
   unsigned int *tmp_ptr = (unsigned int *)((char *)v5 + 4 * a0);
   v13 = *tmp_ptr;
   return v13;
  }
  v13 = ((unsigned int)v6 * 2 | (unsigned int)v6 >> 31) & 4294967294;
  iter = (struct_vla_0 *)((char *)v5 + 4 * v6);
  j = v4 - v6;
  do
  {
   *((unsigned int *)iter) = v13;
   iter = (struct_vla_0 *)((char *)iter + 4);
   v13 += 2;
   j -= 1;
  } while (j != 0);
  {
   unsigned int *tmp_ptr = (unsigned int *)((char *)v5 + 4 * a0);
   return *tmp_ptr;
  }
 }
}


// Function: alloca_usage at 0x400ca0
typedef struct struct_alloca_0 {
 struct struct_alloca_1 *field_0;
 char padding_8[8];
 unsigned long long field_10;
} struct_alloca_0;

typedef struct struct_alloca_1 {
 char field_0;
} struct_alloca_1;

unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long long v3; // x30
 unsigned long v4; // x9
 struct_alloca_0 *iter; // x12
 unsigned long long j; // x9
 struct_alloca_0 *v5; // x8
 unsigned long long v6; // x10
 unsigned long long v7; // q3
 struct_alloca_0 *cur; // x11
 unsigned long long i; // x12
 char *v10; // q4
 unsigned int v12; // w11
 char *v0; // [bp-0x10]
 unsigned long long v1; // x1
 char v2; // [bp+0x0]

 if (a0 < 1)
 return 4294967295;
 v0 = &v2;
 v4 = a0;
 v5 = (struct_alloca_0 *)((char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352));
 if (8 > a0)
 {
 v6 = 0;
 }
 else
 {
 v6 = v4 & 0xfffffff8;
 v7 = 0x3000000020000000100000000;
 cur = (struct_alloca_0 *)&v5->field_10;
 i = v6;
 do
 {
 v10 = (char *)MulV(v7, 12884901891);
 v7 = AddV(v7, 34359738376);
 cur->field_10 = (unsigned long long)v10;
 cur->field_0 = (struct_alloca_1 *)AddV((unsigned long long)v10, 51539607564);
 cur += 1;
 i -= 8;
 } while (i != 0);
 if (v6 == v4)
 {
  unsigned int *tmp_ptr = (unsigned int *)((char *)v5 + 4 * a0);
  v12 = *tmp_ptr;
  return v12;
 }
 }
 v12 = (unsigned int)v6 * 3;
 iter = (struct_alloca_0 *)((char *)v5 + 4 * v6);
 j = v4 - v6;
 do
 {
  *((unsigned int *)iter) = v12;
  iter = (struct_alloca_0 *)((char *)iter + 4);
  v12 += 3;
  j -= 1;
 } while (j != 0);
 {
  int *tmp_ptr = (int *)((char *)v5 + 4 * a0);
  return (unsigned int)*tmp_ptr;
 }
}


// Function: stack_alias at 0x400d60
unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400d68
extern char g_402229;

int test_stack_memory()
{
 unsigned long long i; // x8
 unsigned long long v5; // q2
 char v0; // [bp-0x820]
 char v1; // [bp-0x420]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(&g_402229);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 printf("MEM-L1-02 (local_array): %d\n", 10);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 i = 0;
 v5 = 0xf0e0d0c0b0a09080706050403020100;
 do
 {
 i += 32;
 *((unsigned long long *)&(&v0)[i]) = v5;
 *((unsigned long long *)&(&v0)[16 + i]) = AddV(v5, 1157442765409226768);
 v5 = AddV(v5, 2314885530818453536);
 } while (i != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n", (int)v1);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400e54
unsigned int heap_basic(unsigned int a0)
{
 unsigned long v2; // x19
 void* ptr; // x0
 unsigned int v12; // w10
 char* iter; // x11
 unsigned long long j; // x8
 unsigned long long v4; // x8
 unsigned long long v5; // x9
 int v6; // q0
 unsigned long long v7; // q1
 void* cur; // x10
 unsigned long long i; // x11
 int v10; // q2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(v2 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v2, 2) & 17179869180 & 17179869183);
 if (!ptr)
 {
 return 4294967295;
 }
 else if ((unsigned int)v2 >= 1)
 {
 v4 = v2 & 4294967295;
 if (8 > (unsigned int)v2)
 {
 v5 = 0;
 }
 else
 {
 v5 = v4 & 0xfffffff8;
 v6 = 34359738376;
 v7 = 0x3000000020000000100000000;
 cur = ptr + 16;
 i = v5;
 do
 {
 v10 = ShlNV(v7, 1);
 v7 = AddV(v7, v6);
 ((int*)cur)[4] = v10;
 *(int*)cur = AddV(v10, v6);
 cur += 32;
 i -= 8;
 } while (i != 0);
 if (v5 == v4)
 {
  int *tmp_ptr = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v12 = *tmp_ptr;
  free(ptr);
  return v12;
 }
 }
 v12 = ((unsigned int)v5 * 2 | (unsigned int)v5 >> 31) & 4294967294;
 iter = (char*)ptr + v5 * 4;
 j = v4 - v5;
 do
 {
 *((unsigned int *)iter) = v12;
 iter = (char*)iter + 4;
 v12 += 2;
 j -= 1;
 } while (j != 0);
 {
  int *tmp_ptr = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v12 = *tmp_ptr;
  free(ptr);
  return v12;
 }
 }
 else
 {
  int *tmp_ptr = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v12 = *tmp_ptr;
  free(ptr);
  return v12;
 }
}


// Function: heap_calloc at 0x400f10
unsigned int heap_calloc(unsigned int a0)
{
 unsigned long v2; // x19
 void* ptr; // x0
 unsigned long long j; // x8
 unsigned int *ptr_int; // x9
 unsigned long long v13; // x19
 unsigned long long v4; // x8
 unsigned long long v5; // x10
 unsigned long long v6; // x9
 unsigned long long v7; // x11
 unsigned long long i; // x13
 unsigned long long v10; // d0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = calloc(v2 * 0x100000000 >> 63 & 0xffffffff00000000 | v2 & 4294967295, 4);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v2 >= 1 && (unsigned int)v2 != 1)
 {
 v4 = v2 & 4294967295;
 v5 = v4 - 1;
 if (8 > v5)
 {
 v13 = 0;
 v6 = 1;
 }
 else
 {
 v7 = v5 & 18446744073709551608;
 v6 = v7 | 1;
 i = v7;
 do
 {
 i -= 8;
 } while (i != 8);
 v10 = 0;
 if (v5 == v7)
 {
 free(ptr);
 return v10;
 }
 }
 j = v4 - v6;
 ptr_int = (unsigned int *)((char *)ptr + 4 * v6);
 do
 {
 v13 += *ptr_int;
 j -= 1;
 ptr_int = (unsigned int *)((char *)ptr_int + 4);
 } while (j != 1);
 free(ptr);
 return v13;
 }
 free(ptr);
 return 0;
}




// Function: heap_realloc at 0x400fdc
typedef struct struct_realloc_0 {
 unsigned long long field_0;
 unsigned int field_8;
 char padding_c[4];
 unsigned int field_10;
 unsigned long long field_14;
 unsigned int field_24;
} struct_realloc_0;

unsigned int heap_realloc()
{
 struct_realloc_0 *p; // x0
 struct_realloc_0 *addr; // x19
 struct_realloc_0 *ptr; // x0
 unsigned int v5; // w9
 unsigned int v6; // w20
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = (struct_realloc_0 *)malloc(20);
 if (!p)
 return 4294967295;
 addr = p;
 p->field_0 = 316912650112397582603894390785;
 p->field_8 = 5;
 ptr = (struct_realloc_0 *)realloc(p, 40);
 if (ptr)
 {
 v5 = *((int *)((char *)&ptr->field_0 + 8));
 addr = ptr;
 ptr->field_10 = 90;
 if (v5 == 3)
 v6 = 50;
 else
 v6 = 4294967293;
 ptr->field_24 = 6338253002432419092900882677810;
 }
 else
 {
 v6 = 4294967294;
 }
 free(addr);
 return v6;
}


// Function: heap_array at 0x40106c
unsigned int heap_array(unsigned int a0)
{
 unsigned long v2; // x19
 void* ptr; // x0
 char* iter; // x11
 unsigned long long j; // x8
 unsigned long long v4; // x8
 unsigned long long v5; // x9
 unsigned long long v6; // q3
 void* cur; // x10
 unsigned long long i; // x11
 int v9; // q4
 unsigned int v11; // w10
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(v2 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v2, 2) & 17179869180 & 17179869183);
 if (!ptr)
 {
 return 4294967295;
 }
 else if ((unsigned int)v2 >= 1)
 {
 v4 = v2 & 4294967295;
 if (8 > (unsigned int)v2)
 {
 v5 = 0;
 }
 else
 {
 v5 = v4 & 0xfffffff8;
 v6 = 0x3000000020000000100000000;
 cur = (char*)ptr + 16;
 i = v5;
 do
 {
 v9 = MulV(v6, 12884901891);
 v6 = AddV(v6, 34359738376);
 ((unsigned int*)cur)[4] = v9;
 *(unsigned int*)cur = AddV(v9, 51539607564);
 cur = (char*)cur + 32;
 i -= 8;
 } while (i != 0);
 if (v5 == v4)
 {
  int *tmp_ptr = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v11 = *tmp_ptr;
  free(ptr);
  return v11;
 }
 }
 v11 = (unsigned int)v5 * 3;
 iter = (char *)ptr + v5 * 4;
 j = v4 - v5;
 do
 {
  *((unsigned int *)iter) = v11;
  iter = (char *)iter + 4;
  v11 += 3;
  j -= 1;
 } while (j != 0);
 {
  int *tmp_ptr = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v11 = *tmp_ptr;
  free(ptr);
  return v11;
 }
 }
 else
 {
  int *tmp_ptr = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v11 = *tmp_ptr;
  free(ptr);
  return v11;
 }
}


// Function: heap_struct at 0x401130
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x401138
typedef struct struct_nested_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_nested_2 *field_8;
} struct_nested_3;

typedef struct struct_nested_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_nested_0 *field_8;
} struct_nested_1;

typedef struct struct_nested_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_nested_4;

typedef struct struct_nested_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_nested_2;

typedef struct struct_nested_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_nested_0;

unsigned long long heap_nested(struct_nested_1 **addr)
{
 struct_nested_3 *ptr3; // x0
 struct_nested_3 *ptr3_iter; // x19
 struct_nested_4 *ptr4; // x0
 struct_nested_4 *p; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr3 = (struct_nested_3 *)malloc(16);
 *(addr) = (struct_nested_1 *)ptr3;
 if (!ptr3)
 return 4294967295;
 ptr4 = (struct_nested_4 *)ptr3;
 ptr3->field_0 = 10;
 ptr4 = (struct_nested_4 *)malloc(16);
 ptr4->field_8 = (unsigned long long)ptr4;
 if (!ptr4)
 {
 free(ptr4);
 return 4294967294;
 }
 p = ptr4;
 p->field_8 = 0;
 p->field_0 = 20;
 return 0;
}


// Function: linked_list_heap at 0x4011ac
typedef struct struct_linked_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_linked_0 *field_8;
} struct_linked_0;

unsigned int linked_list_heap()
{
 struct_linked_0 *ptr10; // x0
 struct_linked_0 *ptr7; // x19
 struct_linked_0 *ptr6; // x19
 struct_linked_0 *ptr5; // x19
 struct_linked_0 *ptr4; // x19
 struct_linked_0 *ptr; // x0
 struct_linked_0 *addr; // x0
 struct_linked_0 *p; // x0
 struct_linked_0 *ptr9; // x0
 unsigned long long v8; // x20
 struct_linked_0 *ptr3; // x8
 struct_linked_0 *v10; // x8
 struct_linked_0 *ptr8; // x19
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr10 = (struct_linked_0 *)malloc(16);
 if (!ptr10)
 return 4294967295;
 ptr7 = ptr10;
 ptr10->field_0 = 0;
 ptr = (struct_linked_0 *)malloc(16);
 if (ptr)
 {
 ptr->field_8 = NULL;
 ptr7->field_8 = ptr;
 ptr->field_0 = 10;
 addr = (struct_linked_0 *)malloc(16);
 if (addr)
 {
 addr->field_8 = NULL;
 ptr->field_8 = addr;
 addr->field_0 = 20;
 p = (struct_linked_0 *)malloc(16);
 if (p)
 {
 p->field_8 = NULL;
 addr->field_8 = p;
 p->field_0 = 30;
 ptr9 = (struct_linked_0 *)malloc(16);
 if (ptr9)
 {
 v8 = 0;
 ptr3 = ptr7;
 ptr9->field_8 = NULL;
 p->field_8 = ptr9;
 ptr9->field_0 = 40;
 do
 {
 v10 = ptr3->field_8;
 v8 += ptr3->field_0;
 ptr3 = v10;
 } while (ptr3->field_8);
 do
 {
 ptr8 = ptr7;
 free(ptr8);
 ptr7 = ptr8->field_8;
 } while (ptr7);
 return (unsigned int)v8;
 }
 do
 {
 ptr6 = ptr7;
 free(ptr6);
 ptr7 = ptr6->field_8;
 } while (ptr6->field_8);
 }
 else
 {
 do
 {
 ptr5 = ptr7;
 free(ptr5);
 ptr7 = ptr5->field_8;
 } while (ptr5->field_8);
 }
 }
 else
 {
 do
 {
 ptr4 = ptr7;
 free(ptr4);
 ptr7 = ptr4->field_8;
 } while (ptr4->field_8);
 }
 }
 else
 {
 free(ptr7);
 }
 return 4294967295;
}


// Function: create_tree_node at 0x4012e4
typedef struct struct_tree_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_tree_0;

struct_tree_0 * create_tree_node(unsigned int a0)
{
 struct_tree_0 *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (struct_tree_0 *)malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x401314
unsigned long long tree_heap_traversal()
{
 return 60;
}


// Function: memory_leak at 0x40131c
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v2; // x19
 void* ptr; // x0
 unsigned long long j; // x8
 unsigned long long idx; // x9
 unsigned long long v6; // q2
 void* cur; // x10
 unsigned long long i; // x11
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(v2 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v2, 2) & 17179869180 & 17179869183);
 if (!ptr)
 {
 return 4294967295;
 }
 else if ((unsigned int)v2 >= 1)
 {
 j = v2 & 4294967295;
 if (8 > (unsigned int)v2)
 {
 idx = 0;
 }
 else
 {
 idx = j & 0xfffffff8;
 v6 = 0x3000000020000000100000000;
 cur = (char*)ptr + 16;
 i = idx;
 do
 {
 *((unsigned long long *)((char*)cur + 16)) = v6;
 *((unsigned long long *)cur) = AddV(v6, 17179869188);
 cur = (char*)cur + 32;
 v6 = AddV(v6, 34359738376);
 i -= 8;
 } while (i != 0);
 if (idx == j)
 {
  int *tmp_ptr = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v6 = (unsigned int)*tmp_ptr;
  return v6;
 }
 }
 do
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx;
 idx += 1;
 } while (j != idx);
 {
  int *tmp_ptr2 = (int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647));
  v6 = (unsigned int)*tmp_ptr2;
  return v6;
 }
 }
 return 4294967295;
}


// Function: dangling_pointer at 0x4013c4
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 unsigned int v1; // w1

 v0 = &v1;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 printf("value before free: %d\n", 42);
 v1 = *(ptr);
 free(ptr);
 return v1;
}


// Function: double_free at 0x401410
unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: heap_overflow at 0x401424
unsigned long long heap_overflow()
{
 return 0;
}


// Function: test_heap_memory at 0x40142c
typedef struct struct_testheap_0 {
 unsigned long long field_0;
 unsigned int field_8;
 char padding_c[4];
 unsigned int field_10;
 unsigned long long field_14;
 unsigned int field_24;
} struct_testheap_0;

typedef struct struct_testheap_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_testheap_1 *field_8;
} struct_testheap_2;

typedef struct struct_testheap_3 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_testheap_3;

typedef struct struct_testheap_1 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_testheap_1;

extern char g_401ed5;
extern char g_401ee5;
extern char g_401f0a;
extern char g_401f4b;
extern char g_402247;
extern char g_402265;
extern char g_402289;

unsigned long long test_heap_memory()
{
 struct_testheap_0 *ptr3; // x0
 struct_testheap_0 *ptr4; // x19
 unsigned int result; // w0
 unsigned long long v14; // x0
 char *v15; // x0
 pid_t v16; // x0
 unsigned long long msg; // x0
 struct_testheap_0 *p; // x0
 unsigned int v6; // w9
 unsigned int v7; // w20
 struct_testheap_2 *ptr5; // x0
 struct_testheap_2 *ptr; // x19
 struct_testheap_3 *addr; // x0
 unsigned long long v11; // x1
 int v0[1]; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(&g_402247);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 ptr3 = (struct_testheap_0 *)malloc(20);
 if (ptr3)
 {
 ptr4 = ptr3;
 *((void*)&ptr3->field_0) = 316912650112397582603894390785;
 ptr3->field_8 = 5;
 p = (struct_testheap_0 *)realloc(ptr3, 40);
 if (p)
 {
 v6 = *((int *)((char *)&p->field_0 + 8));
 ptr4 = p;
 p->field_10 = 90;
 if (v6 == 3)
 v7 = 50;
 else
 v7 = 4294967293;
 *((void*)&p->padding_c[0]) = 6338253002432419092900882677810;
 }
 else
 {
 v7 = 4294967294;
 }
 free(ptr4);
 }
 else
 {
 v7 = 4294967295;
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", (int)v7);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 ptr5 = (struct_testheap_2 *)malloc(16);
 if (ptr5)
 {
 ptr = ptr5;
 ptr5->field_0 = 10;
 addr = (struct_testheap_3 *)malloc(16);
 ptr->field_8 = (struct_testheap_1 *)addr;
 if (addr)
 {
 v11 = 0;
 addr->field_8 = 0;
 addr->field_0 = 20;
 }
 else
 {
 free(ptr);
 v11 = 4294967294;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", (unsigned int)v11);
 free(ptr->field_8);
 free(ptr);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
 printf("HEAP-L3-03 (memory_leak): %d\n", 2);
 printf("HEAP-L3-04 (dangling_pointer): ");
  v16 = fork();
 result = (unsigned int)v16;
 if (!result)
 {
  dangling_pointer();
  printf("%s", &g_401ed5);
  _exit(0); /* do not return */
 }
  else if (result > 0)
 {
  v14 = (unsigned long long)waitpid(result, (int *)&v0, 0);
  if ((char)arm64g_calculate_condition(9, (unsigned long long)(*(v0) & 127), 0, 0))
  {
   v15 = (char *)&g_401ee5;
  }
  else if (0x1000000 + (*(v0) & 127) * 0x1000000 >= 0x2000000)
  {
   v15 = &g_401f0a;
  }
  else
  {
   v15 = &g_401ed5;
  }
  printf("%s", v15);
 }
 else
  {
  perror(&g_401f4b);
  return 0;
 }
 return 0;
}


// Function: global_var_access at 0x401660
extern unsigned int __dollar_d_3;

unsigned int global_var_access()
{
 __dollar_d_3 = __dollar_d_3 + 1;
 return __dollar_d_3 + 1;
}


// Function: global_var_read at 0x401674
extern unsigned int __dollar_d_3;

unsigned int global_var_read()
{
 return (__dollar_d_3 * 2 | __dollar_d_3 >> 31) & 4294967294;
}


// Function: global_array_access at 0x401684
extern unsigned int __dollar_d_4[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 <= 9)
 return __dollar_d_4[a0];
 return 4294967295;
}


// Function: static_local at 0x4016a4
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


// Function: call_static_func at 0x4016bc
unsigned int call_static_func(unsigned int a0)
{
 return 1 | __ROL__(a0, 1) & 4294967294;
}


// Function: access_extern_global at 0x4016cc
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x4016e0
long long call_extern_func()
{
 unsigned long long v0; // x0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x4016e8
typedef struct struct_const_0 {
 char padding_0[4];
 char field_4;
} struct_const_0;

extern struct_const_0 *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x4016fc
unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401704
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x40170c
unsigned long long global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401714
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x401720
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x40172c
extern unsigned long long global_func_ptr;

long long set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x401738
extern unsigned long long global_func_ptr;

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((unsigned long long (*)(void))global_func_ptr)();
}


// Function: global_heap_store at 0x401750
extern unsigned long long global_heap_ptr;

unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = (unsigned long long)(uintptr_t)a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x40176c
unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401774
unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: init_order_test at 0x40177c
unsigned long long init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401784
typedef struct struct_static_0 {
 char padding_0[4];
 char field_4;
} struct_static_0;

extern unsigned int __dollar_d_3;
extern struct_const_0 *const_string;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_402265;

int test_static_global()
{
 unsigned long v3; // x1
 unsigned long v4; // x1
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(&g_402265);
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
 printf("STM-L2-03 (read_const_data): %d\n", ((struct_static_0 *)const_string)->field_4 + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (unsigned long long)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v0 = 100;
 global_heap_ptr = (unsigned long long)(uintptr_t)&v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: double_value at 0x401944
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: memop_memset at 0x40194c
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
 return (unsigned long long)(unsigned char)*(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcpy at 0x40198c
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
 return (unsigned long long)*((int *)(-4 + (n & 18446744073709551612) + (char *)a0));
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memmove at 0x4019d4
typedef struct struct_memmove_0 {
 char padding_0[1];
 char field_1;
} struct_memmove_0;

unsigned long long memop_memmove(struct_memmove_0 *a0, unsigned long a1)
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
 return (unsigned long long)(unsigned char)a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_memcmp at 0x401a14
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


// Function: memop_bzero at 0x401a50
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
 return (unsigned long long)(unsigned char)*(a0);
}


// Function: memop_bcopy at 0x401a88
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
 return (unsigned long long)(unsigned char)*(a1);
 }
 else
 {
 return 4294967295;
 }
}


// Function: memop_unaligned_access at 0x401ac4
typedef struct struct_unaligned_0 {
 char padding_0[1];
 unsigned int field_1;
} struct_unaligned_0;

unsigned long long memop_unaligned_access(struct_unaligned_0 *a0)
{
 if (!a0)
 return 4294967295;
 return (unsigned long long)*((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401ad8
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __asm__ __volatile__("dmb ish" ::: "memory");
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401af8
extern char g_402289;

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
 puts(&g_402289);
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


// Function: main at 0x401bd4
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


// Function: extern_function at 0x401bf8
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


