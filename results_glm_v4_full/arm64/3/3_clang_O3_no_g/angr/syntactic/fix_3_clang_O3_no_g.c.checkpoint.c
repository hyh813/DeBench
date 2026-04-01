// Angr Decompilation of 3_clang_O3_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4008e0
extern unsigned long long g_412ff8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 /* g_412ff8 is a runtime label - stub implementation */
 return 0;
}


// Function: sub_4008f4 at 0x4008f4
long long sub_4008f4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 void* dst; // x0

 dst = memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}



/* CRT stub function _start removed by preprocessor */

/* Forward declarations for CRT stub functions */
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern long long frame_dummy(void);

/* Forward declarations for functions used before definition */
extern unsigned int extern_function(unsigned int a0);
extern unsigned int double_value(unsigned int a0);

/* VEX IR helper function stubs for decompiled code */
static inline unsigned long long AddV(unsigned long long a, unsigned long long b)
{
 return a + b;
}

static inline unsigned long long __ROL__(unsigned long long value, int shift)
{
 return (value << shift) | (value >> (64 - shift));
}

static inline unsigned long long ShlNV(unsigned long long value, int shift)
{
 return value << shift;
}

static inline unsigned long long MulV(unsigned long long a, unsigned long long b)
{
 return a * b;
}

static inline int arm64g_calculate_condition(int cond, unsigned long long arg_n, unsigned long long arg_m, int arg_flags)
{
 /* Simplified stub - actual implementation depends on condition code */
 switch (cond) {
 case 33: /* Likely a comparison condition */
 return (arg_n != 0);
 default:
 return 0;
 }
}

#define CONCAT

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
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
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
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
 char field_0;
} struct_1;

/* Forward declarations for circular dependencies */
struct struct_2;
struct struct_3;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 void *field_8;
} struct_3;

unsigned long long vla_stack(unsigned int a0)
{
 unsigned long long v3; // x30
 unsigned long v4; // x9
 unsigned int v13; // w11
 struct_0 *iter; // x12
 unsigned long long j; // x9
 char *v5; // x8
 unsigned long long v6; // x10
 int v7; // q0
 unsigned long long v8; // q1
 struct_0 *cur; // x11
 unsigned long long i; // x12
 char *v11; // q2
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (!((char)arm64g_calculate_condition(33, (unsigned long long)(a0 - 1001), 1000, 0)))
 return 4294967295;
 v0 = &v2;
 v1 = v3;
 v4 = a0;
 v5 = (char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352);
 if (8 > a0)
 {
 v6 = 0;
 }
 else
 {
 v6 = v4 & 0xfffffff8;
 v7 = 34359738376;
 v8 = (unsigned long long)(long long)0x3000000020000000100000000;
 cur = (struct_0 *)v5;
 i = v6;
 do
 {
 *((char **)&cur->field_8) = (char *)(long long)ShlNV(v8, 1);
 v8 = AddV(v8, v7);
 cur->field_0 = AddV(v8, v7);
 cur += 1;
 i -= 8;
 } while (i != 8);
 if (v6 == v4)
 return *((int *)((char *)v5 + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
 }
 v13 = ((unsigned int)v6 * 2 | (unsigned int)v6 >> 31) & 4294967294;
 iter = (void *)((char *)v5 + 4 * v6);
 j = v4 - v6;
 do
 {
 *((unsigned int *)&iter->field_0) = v13;
 iter = (struct struct_0 *)((char *)&iter->field_0 + 4);
 v13 += 2;
 j -= 1;
 } while (j != 1);
 return *((int *)((char *)v5 + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
}


// Function: alloca_usage at 0x400ca0


unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long long v3; // x30
 unsigned long v4; // x9
 struct_0 *iter; // x12
 unsigned long long j; // x9
 char *v5; // x8
 unsigned long long v6; // x10
 unsigned long long v7; // q3
 struct_0 *cur; // x11
 unsigned long long i; // x12
 char *v10; // q4
 unsigned int v12; // w11
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (a0 < 1)
 return 4294967295;
 v0 = &v2;
 v1 = v3;
 v4 = a0;
 v5 = (char *)&v0 - ((__ROL__(v4, 2) & 18446744073709551612) + 15 & 34359738352);
 if (8 > a0)
 {
 v6 = 0;
 }
 else
 {
 v6 = v4 & 0xfffffff8;
 v7 = 0x3000000020000000100000000;
 cur = (struct_0 *)v5;
 i = v6;
 do
 {
 v10 = (char *)(long long)MulV(v7, 12884901891);
 v7 = AddV(v7, 34359738376);
 *((char **)&cur->field_8) = v10;
 cur->field_0 = AddV((unsigned long long)(long long)v10, 51539607564);
 cur += 1;
 i -= 8;
 } while (i != 8);
 if (v6 == v4)
 return *((int *)((char *)v5 + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
 }
 v12 = (unsigned int)v6 * 3;
 iter = (void *)((char *)v5 + 4 * v6);
 j = v4 - v6;
 do
 {
 *((unsigned int *)&iter->field_0) = v12;
 iter = (struct struct_0 *)((char *)&iter->field_0 + 4);
 v12 += 3;
 j -= 1;
 } while (j != 1);
 return *((int *)((char *)v5 + 4 * ((0 <= a0 ? a0 : a0 + 1) >> 31 & 0x80000000 | ((0 <= a0 ? a0 : a0 + 1) * 0x80000000 | (0 <= a0 ? a0 : a0 + 1) >> 1) & 2147483647)));
}


// Function: stack_alias at 0x400d60
unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x400d68
extern char g_4022b9;

int test_stack_memory()
{
 unsigned long long i; // x8
 unsigned long long v5; // q2
 char v0; // [bp-0x820]
 char v1; // [bp-0x420]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(&g_4022b9);
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
 printf("MEM-L2-01 (large_stack_frame): %d\n", v1);
 printf("MEM-L2-02 (vla_stack): %d\n", 10);
 printf("MEM-L2-03 (alloca_usage): %d\n", 15);
 return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400e54
unsigned long long heap_basic(unsigned int a0)
{
 unsigned long v2; // x19
 void* ptr; // x0
 unsigned int v12; // w10
 void* iter; // x11
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
 *((unsigned long long *)&cur[16]) = (unsigned long long)(long long)v10;
 *((unsigned long long *)cur) = (unsigned long long)(long long)AddV(v10, v6);
 cur += 32;
 i -= 8;
 } while (i != 8);
 if (v5 == v4)
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
 }
 v12 = ((unsigned int)v5 * 2 | (unsigned int)v5 >> 31) & 4294967294;
 iter = ptr + v5 * 4;
 j = v4 - v5;
 do
 {
 *((unsigned int *)iter) = v12;
 iter += 4;
 v12 += 2;
 j -= 1;
 } while (j != 1);
 free(ptr);
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
 else
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
}


// Function: heap_calloc at 0x400f1c
unsigned long long heap_calloc(unsigned int a0)
{
 unsigned long v2; // x19
 void* ptr; // x0
 unsigned long long j; // x8
 unsigned int *ptr2; // x9
 unsigned long long v4; // x8
 unsigned long long v5; // x10
 unsigned long long v6; // x19
 unsigned long long v7; // x9
 unsigned long long v8; // x11
 unsigned long long i; // x13
 unsigned long long v11; // d0
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
 v6 = 0;
 v7 = 1;
 }
 else
 {
 v8 = v5 & 18446744073709551608;
 v7 = v8 | 1;
 i = v8;
 do
 {
 i -= 8;
 } while (i != 8);
 v11 = 0;
 if (v5 == v8)
 {
 free(ptr);
 return v11 & 4294967295;
 }
 }
 j = v4 - v7;
 ptr2 = (unsigned int *)((char *)ptr + v7 * 4);
 do
 {
 v6 += *(ptr2);
 j -= 1;
 ptr2 += 1;
 } while (j != 1);
 free(ptr);
 return v6 & 4294967295;
 }
 free(ptr);
 return 0;
}


// Function: heap_realloc at 0x400ff4

unsigned long long heap_realloc()
{
 struct_0 *p; // x0
 struct_0 *addr; // x19
 struct_0 *ptr; // x0
 unsigned int v5; // w9
 unsigned int v6; // w20
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = malloc(20);
 if (!p)
 return 4294967295;
 addr = p;
 *((unsigned long long*)&p->field_0) = 316912650112397582603894390785;
 p->field_8 = 5;
 ptr = (struct_0 *)realloc(p, 40);
 if (ptr)
 {
 v5 = *((int *)((char *)&ptr->field_0 + 8));
 addr = ptr;
 *((unsigned int *)((char *)&ptr->field_10 + 4)) = 90;
 if (v5 == 3)
 v6 = 50;
 else
 v6 = 4294967293;
 }
 else
 {
 v6 = 4294967294;
 }
 free(addr);
 return v6;
}


// Function: heap_array at 0x401090
unsigned long long heap_array(unsigned int a0)
{
 unsigned long v2; // x19
 void* ptr; // x0
 void* iter; // x11
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
 cur = ptr + 16;
 i = v5;
 do
 {
 *((unsigned long long *)&cur[16]) = (unsigned long long)(long long)MulV(v6, 12884901891);
 v6 = AddV(v6, 34359738376);
 *((unsigned long long *)cur) = (unsigned long long)(long long)AddV(v6, 34359738376);
 cur += 32;
 i -= 8;
 } while (i != 8);
 if (v5 == v4)
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
 }
 v11 = (unsigned int)v5 * 3;
 iter = ptr + v5 * 4;
 j = v4 - v5;
 do
 {
 *((unsigned int *)iter) = v11;
 iter += 4;
 v11 += 3;
 j -= 1;
 } while (j != 1);
 free(ptr);
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
 else
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
}


// Function: heap_struct at 0x401160
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: heap_nested at 0x401168
typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_4;

unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr3; // x0
 struct_3 *ptr19; // x19
 struct_4 *ptr20; // x0
 struct_4 *p; // x8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr3 = (struct_3 *)malloc(16);
 *(addr) = (struct_1 *)ptr3;
 if (!ptr3)
 return 4294967295;
 ptr19 = ptr3;
 ptr3->field_0 = 10;
 ptr20 = (struct_4 *)malloc(16);
 ptr3->field_8 = (struct_3 *)ptr20;
 if (!ptr20)
 {
 free(ptr20);
 return 4294967294;
 }
 p = ptr20;
 p->field_8 = 0;
 p->field_0 = 20;
 return 0;
}


// Function: linked_list_heap at 0x4011ec

unsigned long long linked_list_heap()
{
 struct_0 *ptr10; // x0
 struct_0 *ptr8; // x19
 struct_0 *v12; // x8
 unsigned long long v13; // x20
 struct_0 *ptr6; // x19
 struct_0 *ptr5; // x19
 struct_0 *ptr4; // x19
 struct_0 *ptr3; // x19
 struct_0 *ptr; // x0
 struct_0 *addr; // x0
 struct_0 *p; // x0
 struct_0 *ptr9; // x0
 unsigned long long field_8_temp; // temporary for field_8
 unsigned long long v8; // x20
 struct_0 *v9; // x8
 struct_0 *ptr7; // x8
 unsigned long long v11; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr10 = (struct_0 *)malloc(16);
 if (!ptr10)
 return 4294967295;
 ptr8 = ptr10;
 ptr10->field_0 = 0;
 ptr = (struct_0 *)malloc(16);
 if (!ptr)
 {
 free(ptr8);
 return 4294967295;
 }
 ptr->field_8 = (unsigned long long)(struct_0 *)NULL;
 ptr8->field_8 = (unsigned long long)ptr;
 ptr->field_0 = 10;
 addr = (struct_0 *)malloc(16);
 if (addr)
 {
 addr->field_8 = 0;
 ptr->field_8 = (unsigned long long)(struct_0 *)addr;
 addr->field_0 = 20;
 p = (struct_0 *)malloc(16);
 if (p)
 {
 p->field_8 = 0;
 addr->field_8 = (unsigned long long)(struct_0 *)p;
 p->field_0 = 30;
 ptr9 = (struct_0 *)malloc(16);
 if (ptr9)
 {
 v8 = 0;
 v9 = ptr8;
 ptr9->field_8 = 0;
 p->field_8 = (unsigned long long)(struct_0 *)ptr9;
 ptr9->field_0 = 40;
 do
 {
 ptr7 = v9;
 v11 = v8;
 v12 = (struct_0 *)(unsigned long long)ptr7->field_8;
 v13 = ptr7->field_0 + v11;
 v8 = v13;
 v9 = (struct_0 *)(unsigned long long)ptr7->field_8;
 } while (ptr7->field_8);
 do
 {
 ptr6 = ptr8;
 free(ptr6);
 ptr8 = (struct_0 *)ptr6->field_8;
 } while (ptr6->field_8);
 return ptr7->field_0 + v11 & 4294967295;
 }
 else
 {
 do
 {
 ptr5 = ptr8;
 free(ptr5);
 ptr8 = (struct_0 *)ptr5->field_8;
 } while (ptr5->field_8);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr4 = ptr8;
 free(ptr4);
 ptr8 = (struct_0 *)ptr4->field_8;
 } while (ptr4->field_8);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr3 = ptr8;
 free(ptr3);
 ptr8 = (struct_0 *)ptr3->field_8;
 } while (ptr3->field_8);
 return 4294967295;
 }
}


// Function: create_tree_node at 0x401370

struct_0 * create_tree_node(unsigned int a0)
{
 struct_0 *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (struct_0 *)malloc(24);
 if (!ptr)
 return (struct_0 *)ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x4013a0
unsigned long long tree_heap_traversal()
{
 return 60;
}


// Function: memory_leak at 0x4013a8
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
 cur = ptr + 16;
 i = idx;
 do
 {
 *((unsigned long long *)&cur[16]) = v6;
 *((unsigned long long *)cur) = (unsigned long long)(long long)AddV(v6, 17179869188);
 cur += 32;
 v6 = AddV(v6, 34359738376);
 i -= 8;
 } while (i != 8);
 if (idx == j)
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
 do
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx;
 idx += 1;
 } while (j != idx);
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
 else
 {
 return *((int *)((char *)ptr + 4 * ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 31 & 0x80000000 | ((0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) * 0x80000000 | (0 <= (unsigned int)v2 ? (unsigned int)v2 : (unsigned int)v2 + 1) >> 1) & 2147483647)));
 }
}


// Function: dangling_pointer at 0x401458
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


// Function: double_free at 0x4014ac
unsigned long long double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: heap_overflow at 0x4014c0
unsigned long long heap_overflow()
{
 return 0;
}


// Function: test_heap_memory at 0x4014c8

typedef struct struct_5 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
} struct_5;

extern char g_401f65;
extern char g_401f75;
extern char g_401f9a;
extern char g_401fdb;
extern char g_4022d7;

unsigned long long test_heap_memory()
{
 struct_0 *ptr3; // x0
 struct_0 *ptr4; // x19
 unsigned int result; // w0
 unsigned long long v14; // x0
 char *v15; // x0
 unsigned long long v16; // x0
 unsigned long long msg; // x0
 struct_0 *p; // x0
 unsigned int v6; // w9
 unsigned int v7; // w20
 struct_2 *ptr5; // x0
 struct_2 *ptr; // x19
 struct_2 *addr; // x0
 unsigned long long v11; // x1
 int v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(&g_4022d7);
 printf("HEAP-L2-01 (heap_basic): %d\n", 10);
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 ptr3 = malloc(20);
 if (ptr3)
 {
 ptr4 = ptr3;
 *((unsigned long long*)&ptr3->field_0) = 316912650112397582603894390785;
 ptr3->field_8 = 5;
 p = (struct_0 *)realloc(ptr3, 40);
 if (p)
 {
 v6 = *((int *)((char *)&p->field_0 + 8));
 ptr4 = p;
 *((unsigned int *)((char *)&p->field_10 + 4)) = 90;
 if (v6 == 3)
 v7 = 50;
 else
 v7 = 4294967293;
 *((unsigned long long*)p) = 6338253002432419092900882677810ULL;
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
 printf("HEAP-L2-03 (heap_realloc): %d\n", v7);
 printf("HEAP-L2-04 (heap_array): %d\n", 15);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
	ptr5 = (struct_2 *)malloc(16);
	if (ptr5)
	{
	ptr = ptr5;
 ptr5->field_0 = 10;
 addr = (struct_2 *)malloc(16);
 ptr->field_8 = addr;
 if (addr)
 {
 v11 = 0;
 addr->field_8 = NULL;
 addr->field_0 = 20;
 }
 else
 {
 free(ptr);
 v11 = 4294967294;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v11);
 free((struct_2 *)ptr->field_8);
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
 result = (unsigned int)fork();
 if (!result)
 {
 printf("%d\n", dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 else if (result >= 1)
 {
 v14 = waitpid(result, &v0, 0);
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(v0 & 127), 0, 0))
 {
 v15 = &g_401f75;
 }
 else if ((v0 >> 8) != 0 && (v0 & 0x7f) == 0)
 {
 v15 = &g_401f9a;
 }
 else
 {
 return v14;
 }
 puts(v15);
 return 0;
 }
 else
 {
 perror(&g_401fdb);
 return 0;
 }
}


// Function: global_var_access at 0x4016fc
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x401710
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return (global_counter * 2 | global_counter >> 31) & 4294967294;
}


// Function: global_array_access at 0x401720
extern unsigned int __dollar_d_3[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 <= 9)
 return __dollar_d_3[a0];
 return 4294967295;
}


// Function: static_local at 0x401740
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


// Function: call_static_func at 0x401758
unsigned int call_static_func(unsigned int a0)
{
 return 1 | __ROL__(a0, 1) & 4294967294;
}


// Function: access_extern_global at 0x401768
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x40177c
long long call_extern_func()
{
 unsigned long long v0; // x0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x401784
typedef struct struct_read_const_data {
 char padding_0[4];
 char field_4;
} struct_read_const_data;

extern struct_read_const_data *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401798
unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x4017a0
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x4017a8
unsigned long long global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x4017b0
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x4017bc
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x4017c8
extern unsigned long long global_func_ptr;

long long set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x4017d4
extern unsigned long long global_func_ptr;

typedef unsigned long long (*callback_func_t)(void);

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 union {
 unsigned long long as_int;
 callback_func_t as_func;
 } conv;
 conv.as_int = global_func_ptr;
 return conv.as_func();
}


// Function: global_heap_store at 0x4017ec
extern unsigned int *global_heap_ptr;

unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x401808
unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401810
unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: init_order_test at 0x401818
unsigned long long init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401820
typedef struct struct_test_static_global {
 char padding_0[4];
 char field_4;
} struct_test_static_global;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_4022f5;
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;
extern unsigned int *global_heap_ptr;
extern unsigned int static_local_counter;

int test_static_global()
{
 unsigned long v3; // x1
 unsigned long v4; // x1
 int v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(&g_4022f5);
 v3 = global_counter + 1;
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n", v3);
 printf("STM-L1-01 (global_var_read): %d\n", (global_counter * 2 | global_counter >> 31) & 4294967294);
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
 global_heap_ptr = (unsigned int *)&v0;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: double_value at 0x4019d8
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: memop_memset at 0x4019e0
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


// Function: memop_memcpy at 0x401a20
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


// Function: memop_memmove at 0x401a68
typedef struct struct_memmove {
 char padding_0[1];
 char field_1;
} struct_memmove;

unsigned long long memop_memmove(struct_memmove *a0, unsigned long a1)
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


// Function: memop_memcmp at 0x401aa8
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


// Function: memop_bzero at 0x401ae4
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


// Function: memop_bcopy at 0x401b1c
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


// Function: memop_unaligned_access at 0x401b58
typedef struct struct_unaligned_access {
 char padding_0[1];
 unsigned int field_1;
} struct_unaligned_access;

unsigned long long memop_unaligned_access(struct_unaligned_access *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401b6c
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401b8c
extern char g_402319;

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
 puts(&g_402319);
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

// Function: main at 0x401c68
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


// Function: extern_function at 0x401c8c
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


