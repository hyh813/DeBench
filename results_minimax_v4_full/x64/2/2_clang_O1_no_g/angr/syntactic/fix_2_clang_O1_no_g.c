// Angr Decompilation of 2_clang_O1_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

/* Forward declarations */
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;
typedef struct struct_2 struct_2;
struct graph_node_struct;
struct graph_edge_struct;

/* Function forward declarations */
int process_char(unsigned int a0);
int process_short(unsigned int a0, unsigned int a1);
int process_int(unsigned int a0);
unsigned long long process_long(unsigned long a0);
long long process_ll(unsigned long a0);
double process_float();
double process_double();
void process_ld();
char process_bool(unsigned int a0);
int const_param(unsigned int *a0);
unsigned int volatile_access(unsigned int *a0);
int test_data_types_l1();
unsigned long long array_1d_stack(unsigned long ptr, unsigned long a1);
long long array_string(char *a0);
unsigned long long array_2d_stack(unsigned long a0);
unsigned long long array_3d(unsigned long long a0);
unsigned long long array_vla(unsigned long a0, unsigned long ptr);
unsigned long long array_pointer(unsigned long a0, unsigned int a1);
unsigned long long pointer_array(unsigned long a0, unsigned int a1);
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4);
unsigned long long array_oob(unsigned long ptr, unsigned int a1);
int test_array_types();
int ptr_single(unsigned int *a0);
int ptr_double(struct_0 **a0);
int ptr_triple(struct_1 **a0);
unsigned long long ptr_increment(unsigned long ptr, unsigned int i);
int ptr_offset(unsigned long a0, unsigned int a1);
unsigned long long ptr_diff(unsigned long a0, unsigned long a1);
unsigned long long ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
long long ptr_func_simple(long long (*a0)(unsigned int), unsigned int a1);
long long ptr_func_complex(long long (*a0)(unsigned long, int*), unsigned long a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int test_pointer_types();
int struct_simple(struct_0 *a0);
unsigned long long struct_array(unsigned long a0, unsigned int a1);
int struct_nested(struct_0 *a0);
int struct_deep(struct_0 *a0);
int struct_with_ptr(struct_0 *a0);
int struct_bitfields(unsigned short *ptr);
int union_type(void* a0, unsigned int a1);
unsigned long long union_array(unsigned long ptr, unsigned long a1);
unsigned int enum_type(unsigned int a0);
unsigned long long enum_switch(unsigned int a0);
long long struct_func_ptr(struct_0 *a0, long long (*func_ptr)(unsigned int));
unsigned long long linked_list(struct_0 *ptr);
unsigned long long doubly_linked_list(struct_0 *ptr);
unsigned long long binary_tree_sum(void *a0);
unsigned long long binary_tree(void* a0);
unsigned long long graph_traverse(graph_node_struct *p);
int test_composite_types();

/* CRT stub function declarations */
void deregister_tm_clones(void);
void register_tm_clones(void);
void frame_dummy(void);
void __do_global_dtors_aux(void);

/* External variables */
extern unsigned long long g_404008;
extern struct struct_0 *g_403fe0;

/* Global struct definitions */
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
 unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
 unsigned long long field_10;
} struct_2;

/* CRT stub function _init removed by preprocessor */

extern struct struct_0 *g_403fe0;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe0;
 if (g_403fe0)
 v1 = g_403fe0();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 g_404010 = v0;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1; // rdi

 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
}


// Function: sub_401086 at 0x401086
void sub_401086()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010b9 at 0x4010b9
void sub_4010b9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401135 at 0x401135
void sub_401135()
{
}


// Function: sub_401139 at 0x401139
void sub_401139()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401149 at 0x401149
void sub_401149(unsigned long a0)
{
 process_char((unsigned int)a0);
 return;
}


// Function: process_char at 0x401150
long long process_char(unsigned int a0)
{
 return (26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: sub_40115f at 0x40115f
void sub_40115f(unsigned long a0, unsigned long a1)
{
 process_short((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: process_short at 0x401160
int process_short(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401164 at 0x401164
void sub_401164(unsigned long a0)
{
 process_int(0);
 return;
}


// Function: process_int at 0x401170
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_401177 at 0x401177
void sub_401177(unsigned long a0)
{
 process_long((unsigned long)a0);
 return;
}


// Function: process_long at 0x401180
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: sub_401185 at 0x401185
void sub_401185(unsigned long a0)
{
 process_ll(a0);
 return;
}


// Function: process_ll at 0x401190
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: sub_401198 at 0x401198
void sub_401198()
{
 process_float();
 return;
}


// Function: process_float at 0x4011a0
double process_float()
{
 // Simplified implementation - original uses SIMD operations
 return 1.5;
}


// Function: sub_4011b1 at 0x4011b1
void sub_4011b1()
{
 process_double();
 return;
}


// Function: process_double at 0x4011c0
double process_double()
{
 // Simplified implementation - original uses SIMD operations
 return 2.5;
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4011e0
// Simplified implementation - original uses SIMD operations
void process_ld()
{
 // Complex SIMD operations not fully decompiled
 return;
}


// Function: sub_4011eb at 0x4011eb
void sub_4011eb(unsigned long a0)
{
 process_bool((unsigned int)a0);
 return;
}


// Function: process_bool at 0x4011f0
char process_bool(unsigned int a0)
{
 return (!((char)a0 & 1)) & (a0 > 0);
}


// Function: sub_4011ff at 0x4011ff
void sub_4011ff(unsigned long a0)
{
 const_param((unsigned int *)a0);
 return;
}


// Function: const_param at 0x401200
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401206 at 0x401206
void sub_401206(unsigned long a0)
{
 volatile_access();
 return;
}


// Function: volatile_access at 0x401210
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401215 at 0x401215
void sub_401215()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x401220
extern char *g_4025bf;

int test_data_types_l1()
{
 unsigned long v2; // rsi
 unsigned int v0; // [bp-0xc]

 puts(g_4025bf);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200ULL);
 printf("DT-L1-05 (process_ll): %lld\n", 10000LL);
 printf("DT-L1-06 (process_float): %.2f\n", process_float());
 printf("DT-L1-07 (process_double): %.2f\n", process_double());
 // Simplified SIMD operations - original used complex SIMD
 printf("DT-L1-08 (process_ld): %.2f\n", 0.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned long a0, unsigned long a1)
{
 array_1d_stack(a0, a1);
 return;
}


// Function: array_1d_stack at 0x401350
unsigned long long array_1d_stack(unsigned long ptr, unsigned long a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if ((unsigned int)a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while ((a1 & 4294967295) != i);
 return v2;
}


// Function: array_string at 0x401370
long long array_string(char *a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax

 v1 = 4294967295;
 do
 {
 v3 = v1 + 1;
 v1 = v3;
 a0 += 1;
 } while (*(a0));
 return v2 + 1;
}


// Function: sub_40138d at 0x40138d
void sub_40138d()
{
 array_2d_stack();
 return;
}


// Function: array_2d_stack at 0x401390
unsigned long long array_2d_stack(unsigned long a0)
{
 unsigned long long i; // rcx
 unsigned long long v2; // rax

 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(a0 + i));
 i += 44;
 } while (i != 440);
 return v2;
}


// Function: sub_4013b1 at 0x4013b1
void sub_4013b1()
{
 array_3d();
 return;
}


// Function: array_3d at 0x4013c0
unsigned long long array_3d(unsigned long long a0)
{
 unsigned long long i; // r8
 unsigned long long v2; // rax
 unsigned long long j; // rsi
 unsigned long long v4; // rdx
 unsigned long long ptr; // rdx
 unsigned long long k; // rcx

 i = 0;
 v2 = 0;
 do
 {
 j = 0;
 v4 = a0;
 do
 {
 ptr = v4;
 k = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + k * 4));
 k += 1;
 } while (k != 5);
 j += 1;
 v4 = ptr + 20;
 } while (j != 5);
 i += 1;
 a0 += 100;
 } while (i != 5);
 return v2;
}


// Function: sub_40141a at 0x40141a
void sub_40141a(unsigned long a0)
{
 array_vla();
 return;
}


// Function: array_vla at 0x401420
unsigned long long array_vla(unsigned long a0, unsigned long ptr)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if ((unsigned int)a0 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while ((a0 & 4294967295) != i);
 return v2;
}


// Function: array_pointer at 0x401440
unsigned long long array_pointer(unsigned long a0, unsigned int a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if (a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(a0 + i));
 i += 40;
 } while (a1 * 40 != i);
 return v2;
}


// Function: pointer_array at 0x401470
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned long long v2; // rdx
 unsigned long long v3; // rax

 if (a1 <= 0)
 return 0;
 v1 = (a1 < 10 ? a1 : 10);
 v2 = 0;
 v3 = 0;
 do
 {
 if (*((long long *)(a0 + v2 * 8)))
 v3 = (unsigned int)v3 + *((int *)*((long long *)(a0 + v2 * 8)));
 } while ((v2 += 1, (2 <= v1 ? (unsigned long long)v1 : 1) != v2));
 return v3;
}


// Function: sub_4014a9 at 0x4014a9
void sub_4014a9(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 array_complex_index();
 return;
}


// Function: array_complex_index at 0x4014b0
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a3 >= 0 && (unsigned int)a4 < a2 && a3 < (unsigned int)a1 && (unsigned int)a4 >= 0)
 v1 = *((int *)(ptr + (a1 * a4 + a3 & 4294967295) * 4));
 return v1;
}


// Function: sub_4014d5 at 0x4014d5
void sub_4014d5(unsigned long a0, unsigned long a1)
{
 array_oob();
 return;
}


// Function: array_oob at 0x4014e0
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long i; // rcx
 unsigned long long v2; // rax

 if (a1 < 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while (a1 + 1 != i);
 return v2;
}


// Function: test_array_types at 0x401500
extern char *g_4025e0;

int test_array_types()
{
 unsigned long long i; // rbx
 char *iter; // rax
 unsigned long long l; // rax
 char *v22; // rcx
 unsigned int v23; // esi
 unsigned long long i2; // rdi
 char *v25; // rdx
 char *ptr; // rdx
 unsigned long long off; // rbx
 unsigned long long index; // rbx
 unsigned long long n; // rax
 unsigned long long idx4; // rcx
 unsigned int v31; // esi
 unsigned long long v32; // rbx
 unsigned long long v33; // rsi
 unsigned long long pos; // rbx
 unsigned long long j; // rax
 unsigned int v15; // esi
 unsigned long long k; // rbx
 char *v17; // rax
 char *cur; // rcx
 unsigned long long i1; // rdx
 unsigned long long idx; // rsi
 unsigned int v0; // [bp-0x514]
 unsigned int v1; // [bp-0x510]
 unsigned int v2; // [bp-0x50c]
 char *v3; // [bp-0x508]
 char *v4; // [bp-0x500]
 char *v5; // [bp-0x4f8]
 char v6; // [bp-0x4f0]
 unsigned long v35; // [bp-0x4b8]
 char v7; // [bp-0x474]
 unsigned long v36; // [bp-0x468]
 char v8; // [bp-0x398]
 char v9; // [bp-0x208]

 puts(g_4025e0);
 i = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 iter = &v8;
 do
 {
 idx4 = 0;
 do
 {
 } while ((*((unsigned int *)&iter[4 * idx4]) = (i == idx4 ? (unsigned int)i : 0), idx4 += 1, idx4 != 10));
 i += 1;
 iter += 40;
 } while (i != 10);
 j = 0;
 v15 = 0;
 do
 {
 v15 += *((int *)&(&v8)[j]);
 j += 44;
 } while (j != 440);
 k = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n", v15);
 v17 = &v9;
 do
 {
 cur = v17;
 i1 = 0;
 do
 {
 idx = 0;
 do
 {
 *((unsigned int *)&cur[4 * idx]) = 1;
 idx += 1;
 } while (idx != 5);
 i1 += 1;
 cur += 20;
 } while (i1 != 5);
 k += 1;
 v17 += 100;
 } while (k != 5);
 l = 0;
 v22 = &v9;
 v23 = 0;
 do
 {
 i2 = 0;
 v25 = v22;
 do
 {
 ptr = v25;
 off = 0;
 do
 {
 v23 += *((int *)&ptr[4 * off]);
 off += 1;
 } while (off != 5);
 i2 += 1;
 v25 = ptr + 20;
 } while (i2 != 5);
 l += 1;
 v22 += 100;
 } while (l != 5);
 index = 0;
 printf("ARR-L1-04 (array_3d): %d\n", v23);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 do
 {
 *((unsigned int *)((char *)&v36 + 4 * index)) = index;
 index += 10;
 } while (index != 50);
 n = 0;
 v31 = 0;
 do
 {
 v31 += *((int *)((char *)&v36 + n));
 n += 40;
 } while (n != 200);
 v32 = 0;
 printf("ARR-L2-02 (array_pointer): %d\n", v31);
 v2 = 10;
 v1 = 20;
 v0 = 30;
 v3 = &v2;
 v4 = &v1;
 v5 = &v0;
 memset(&v6, 0, 56);
 v33 = 0;
 do
 {
 if ((&v3)[v32])
 v33 = (unsigned int)v33 + *((int *)&(&v3)[v32]);
 } while ((v32 += 1, v32 != 3));
 pos = 0;
 printf("ARR-L2-03 (pointer_array): %d\n", v33);
 do
 {
 *((unsigned int *)((char *)&v35 + 4 * pos)) = pos;
 pos += 1;
 } while (pos != 20);
 return printf("ARR-L2-04 (array_complex_index): %d\n", *((int *)&v7));
}


// Function: sub_401728 at 0x401728
void sub_401728()
{
}


// Function: sub_40178c at 0x40178c
void sub_40178c(unsigned long a0)
{
 ptr_single();
 return;
}


// Function: ptr_single at 0x401790
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401796 at 0x401796
void sub_401796(unsigned long a0)
{
 ptr_double();
 return;
}


// Function: ptr_double at 0x4017a0
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_4017a9 at 0x4017a9
void sub_4017a9(unsigned long a0)
{
 ptr_triple();
 return;
}


// Function: ptr_triple at 0x4017b0
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0 + 1;
}


// Function: sub_4017bc at 0x4017bc
void sub_4017bc(unsigned long a0, unsigned long a1)
{
 ptr_increment();
 return;
}


// Function: ptr_increment at 0x4017c0
unsigned long long ptr_increment(unsigned long ptr, unsigned int i)
{
 unsigned long long v1; // rdx
 unsigned long long v2; // rax

 if (i <= 0)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + v1 * 4));
 v1 += 1;
 } while (i != (unsigned int)v1);
 return v2;
}


// Function: sub_4017df at 0x4017df
void sub_4017df(unsigned long a0, unsigned long a1)
{
 ptr_offset();
 return;
}


// Function: ptr_offset at 0x4017e0
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_4017e7 at 0x4017e7
void sub_4017e7(unsigned long a0, unsigned long a1)
{
 ptr_diff();
 return;
}


// Function: ptr_diff at 0x4017f0
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return (a0 - a1) >> 2;
}


// Function: sub_4017fb at 0x4017fb
void sub_4017fb(unsigned long a0, unsigned long a1)
{
 ptr_void();
 return;
}


// Function: ptr_void at 0x401800
unsigned long long ptr_void(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return *((char *)a0);
 }
 else if (!a1)
 {
 return *((int *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401815 at 0x401815
void sub_401815(unsigned long a0)
{
 ptr_const();
 return;
}


// Function: ptr_const at 0x401820
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401825 at 0x401825
void sub_401825(unsigned long a0)
{
 ptr_const_ptr();
 return;
}


// Function: ptr_const_ptr at 0x401830
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401838 at 0x401838
void sub_401838(unsigned long a0, unsigned long a1)
{
 ptr_func_simple();
 return;
}


// Function: ptr_func_simple at 0x401840
long long ptr_func_simple(long long (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: sub_40184a at 0x40184a
void sub_40184a(unsigned long a0, unsigned long a1)
{
 ptr_func_complex();
 return;
}


// Function: ptr_func_complex at 0x401850
extern unsigned long long g_403de0;

long long ptr_func_complex(long long (*a0)(unsigned long, int*), unsigned long a1)
{
 unsigned long long v0; // [bp-0x18]

 v0 = g_403de0;
 return a0(a1, (int *)&v0);
}


// Function: sub_401872 at 0x401872
void sub_401872(unsigned long a0)
{
 ptr_cast();
 return;
}


// Function: ptr_cast at 0x401880
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401883 at 0x401883
void sub_401883(unsigned long a0)
{
 opaque_handle_create();
 return;
}


// Function: opaque_handle_create at 0x401890
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401894 at 0x401894
void sub_401894(unsigned long a0)
{
 opaque_handle_op();
 return;
}


// Function: opaque_handle_op at 0x4018a0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4018a4 at 0x4018a4
void sub_4018a4()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x4018b0
extern char *g_4025fb;

int test_pointer_types()
{
 unsigned long long idx; // rbx
 unsigned int v4; // esi
 int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x18]

 puts(g_4025fb);
 idx = 0;
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 v1 = 5;
 v0 = 316912650112397582603894390785;
 v4 = 0;
 do
 {
 v4 += *((int *)((char *)&v0 + 4 * idx));
 idx += 1;
 } while ((unsigned int)idx != 5);
 printf("PTR-L2-04 (ptr_increment): %d\n", v4);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: sub_4019fd at 0x4019fd
void sub_4019fd(unsigned long a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x401a00
int struct_simple(unsigned int *a0)
{
 return a0[1] + a0[0] + a0[2];
}


// Function: sub_401a09 at 0x401a09
void sub_401a09(unsigned long a0, unsigned long a1)
{
 struct_array();
 return;
}


// Function: struct_array at 0x401a10
unsigned long long struct_array(unsigned long a0, unsigned int a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if (a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(a0 + i)) + *((int *)(a0 + i + 4)) + *((int *)(a0 + i + 8));
 i += 12;
 } while (a1 * 12 != i);
 return v2;
}


// Function: sub_401a48 at 0x401a48
void sub_401a48(unsigned long a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x401a50
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_401a56 at 0x401a56
void sub_401a56(unsigned long a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x401a60
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_401a67 at 0x401a67
void sub_401a67(unsigned long a0)
{
 struct_with_ptr();
 return;
}


// Function: struct_with_ptr at 0x401a70
int struct_with_ptr(struct_0 *a0)
{
 if (!a0->field_8)
 return 0 + a0->field_0;
 return a0->field_8->field_0 + a0->field_0;
}


// Function: sub_401a85 at 0x401a85
void sub_401a85(unsigned long a0)
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x401a90
int struct_bitfields(unsigned short *ptr)
{
 unsigned short v1; // ax

 v1 = *(ptr);
 return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}


// Function: sub_401ab1 at 0x401ab1
void sub_401ab1(unsigned long a0, unsigned long a1)
{
 union_type();
 return;
}


// Function: union_type at 0x401ac0
int union_type(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return *((int *)a0);
 }
 else if (!a1)
 {
 return *((int *)a0);
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: sub_401ad5 at 0x401ad5
void sub_401ad5(unsigned long a0, unsigned long a1)
{
 union_array();
 return;
}


// Function: union_array at 0x401ae0
unsigned long long union_array(unsigned long ptr, unsigned long a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if ((unsigned int)a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while ((a1 & 4294967295) != i);
 return v2;
}


// Function: enum_type at 0x401b00
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401b06 at 0x401b06
void sub_401b06(unsigned long a0)
{
 enum_switch();
 return;
}


// Function: enum_switch at 0x401b10
extern unsigned int g_402680[4];

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = g_402680[a0];
 return v1;
}


// Function: sub_401b28 at 0x401b28
void sub_401b28(unsigned long a0)
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x401b30
long long struct_func_ptr(struct_0 *a0, long long (*func_ptr)(unsigned int))
{
 return func_ptr(a0->field_0);
}


// Function: sub_401b3b at 0x401b3b
void sub_401b3b(unsigned long a0)
{
 linked_list();
 return;
}


// Function: linked_list at 0x401b40
unsigned long long linked_list(struct_0 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 return v1;
}


// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned long a0)
{
 doubly_linked_list();
 return;
}


// Function: doubly_linked_list at 0x401b60
unsigned long long doubly_linked_list(struct_0 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 return v1;
}


// Function: sub_401b7c at 0x401b7c
void sub_401b7c(unsigned long a0)
{
 binary_tree_sum();
 return;
}


// Function: binary_tree_sum at 0x401b80
unsigned long long binary_tree_sum(void *a0)
{
 unsigned long long v5; // rax
 unsigned long long v6; // rax
 struct_0 *node = (struct_0 *)a0;

 if (!node)
 return 0;
 v5 = binary_tree_sum(node->field_8);
 v6 = binary_tree_sum((void *)node->field_10);
 return v6 + (v5 & 4294967295) + node->field_0;
}


// Function: binary_tree at 0x401bb0
unsigned long long binary_tree(void* a0)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return binary_tree_sum(a0);
}


// Function: sub_401bb8 at 0x401bb8
void sub_401bb8(unsigned long a0)
{
 graph_traverse();
 return;
}


// Function: graph_traverse at 0x401bc0
typedef struct graph_node_struct {
 struct graph_node_struct *field_0;
 char padding_8[72];
 unsigned int field_50;
} graph_node_struct;

typedef struct graph_edge_struct {
 char padding_0[8];
 unsigned long long field_8;
} graph_edge_struct;

unsigned long long graph_traverse(graph_node_struct *p)
{
 unsigned long v1; // rcx
 unsigned long idx; // rdx
 unsigned long long v3; // rax
 struct_2 *ptr; // rsi

 v1 = p->field_50;
 if ((unsigned int)v1 <= 0)
 return 0;
 idx = 0;
 v3 = 0;
 do
 {
 ptr = (&p->field_0)[idx];
 if ((&p->field_0)[idx])
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&ptr->padding_0[0]);
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 } while ((idx += 1, idx != v1));
 return v3;
}


// Function: sub_401bcd at 0x401bcd
void sub_401bcd()
{
}


// Function: test_composite_types at 0x401c00
// Note: struct_0, struct_1, struct_2 are defined globally

extern char *g_402616;

int test_composite_types()
{
 unsigned int v20; // ebx
 struct_0 *p; // rax
 unsigned long long v29; // rsi
 unsigned int v23; // ebp
 struct_1 *addr; // rax
 unsigned long long idx; // rbx
 struct_2 *ptr; // rax
 char v0; // [bp-0xf8], Other Possible Types: unsigned int
 char *v1; // [bp-0xf0]
 char v2; // [bp-0xe8], Other Possible Types: unsigned int
 char *v3; // [bp-0xe0]
 char v4; // [bp-0xd8], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0xd0]
 unsigned int v7; // [bp-0xc8]
 char *v8; // [bp-0xc0]
 unsigned long long result; // [bp-0xb8]
 char v10; // [bp-0xb0], Other Possible Types: unsigned int
 unsigned long long flag1; // [bp-0xa8]
 char *v12; // [bp-0xa0]
 int flag3; // [bp-0x98]
 int v14; // [bp-0x88]
 unsigned long long flag4; // [bp-0x78]
 char v16; // [bp-0x68]
 char *v17; // [bp-0x68]
 unsigned int v18; // [bp-0x18]

 puts(g_402616);
 v20 = 0;
 printf("CMP-L2-01 (struct_simple): %d\n", 6);
 printf("CMP-L2-02 (struct_array): %d\n", 9);
 printf("CMP-L2-03 (struct_nested): %d\n", 105);
 printf("CMP-L2-04 (struct_deep): %d\n", 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
 printf("CMP-L2-07 (union_type): %d\n", 305419896);
 printf("CMP-L2-08 (union_array): %d\n", 60);
 printf("CMP-L2-09 (enum_type): %d\n", 10);
 printf("CMP-L2-10 (enum_switch): %d\n", 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
 p = &v0;
 v0 = 10;
 v1 = &v2;
 v2 = 20;
 v3 = &v4;
 v4 = 30;
 flag2 = 0;
 do
 {
 v20 += p->field_0;
 p = p->field_8;
 } while (p->field_8);
 v23 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v20);
 addr = &v7;
 v7 = 10;
 v8 = &v10;
 result = 0;
 v10 = 20;
 flag1 = 0;
 v12 = &v7;
 do
 {
 v23 += addr->field_0;
 addr = addr->field_8;
 } while (addr->field_8);
 idx = 0;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v23);
 flag4 = 0;
 v14 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v14) & 4294967295);
 flag3 = 1;
 memset(&v16, 0, 88);
 v17 = &flag3;
 v18 = 2;
 v29 = 0;
 do
 {
 ptr = *((long long *)&(&v16)[8 * idx]);
 if (*((long long *)&(&v16)[8 * idx]))
 {
 do
 {
 v29 = (unsigned int)v29 + *((int *)&ptr->padding_0[0]);
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 } while ((idx += 1, idx != 2));
 return printf("CMP-L2-15 (graph_traverse): %d\n", v29);
}


// Function: sub_401e31 at 0x401e31
void sub_401e31()
{
}


// Function: sub_401e85 at 0x401e85
void sub_401e85()
{
 main();
 return;
}


// Function: main at 0x401e90
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


