// Angr Decompilation of 2_clang_O2_g
// Platform: AMD64

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

// Ensure uint64_t is available
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif

// Compiler intrinsics/operations (simplified stub implementations)
#define AddV(a, b) ((a) + (b))
#define InterleaveLOV(a, b) ((a) | (b))

// Declare builtin functions
void __builtin_trap(void) __attribute__((noreturn));

// Define int128_t for compatibility
typedef __int128 int128_t; 

// Missing CRT and library function declarations
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// CRT stub implementations
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

// Forward declarations for process functions
long long process_char(unsigned int a0);
int process_short(unsigned int a0, unsigned int a1);
int process_int(unsigned int a0);
unsigned long long process_long(unsigned long a0);
long long process_ll(unsigned long a0);
double process_float(void);
double process_double(void);
long double process_ld(void);
char process_bool(unsigned int a0);
int const_param(unsigned int *a0);
unsigned int volatile_access(unsigned int *a0);
int test_data_types_l1(void);

// Forward declarations for array functions
unsigned long long array_1d_stack(unsigned long ptr, unsigned int a1);
long long array_string(char *a0);
int array_2d_stack(unsigned int *a0);

typedef struct array_3d_struct {
 unsigned int field_0;
 unsigned long long field_4;
 unsigned long long field_14;
 unsigned long long field_24;
 unsigned long long field_34;
 unsigned long long field_44;
 unsigned long long field_54;
 unsigned int field_64;
 unsigned long long field_68;
 unsigned long long field_78;
 unsigned long long field_88;
 unsigned long long field_98;
 unsigned long long field_a8;
 unsigned long long field_b8;
 unsigned int field_c8;
 unsigned long long field_cc;
 unsigned long long field_dc;
 unsigned long long field_ec;
 unsigned long long field_fc;
 unsigned long long field_10c;
 unsigned long long field_11c;
 unsigned int field_12c;
 unsigned long long field_130;
 unsigned long long field_140;
 unsigned long long field_150;
 unsigned long long field_160;
 unsigned long long field_170;
 unsigned long long field_180;
 unsigned int field_190;
 unsigned long long field_194;
 unsigned long long field_1a4;
 unsigned long long field_1b4;
 unsigned long long field_1c4;
 unsigned long long field_1d4;
 unsigned long long field_1e4;
} array_3d_struct;

int array_3d(array_3d_struct *ptr);
unsigned long long array_vla(unsigned int a0, unsigned long ptr);
unsigned long long array_pointer(unsigned long a0, unsigned int a1);
unsigned long long pointer_array(unsigned long a0, unsigned int a1);
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4);
unsigned long long array_oob(unsigned long ptr, unsigned int a1);
int test_array_types(void);

// Forward declarations for pointer functions
int ptr_single(unsigned int *a0);
unsigned long long ptr_increment(unsigned long long cur, unsigned int a1);
int ptr_offset(unsigned long a0, unsigned int a1);
unsigned long long ptr_diff(unsigned long a0, unsigned long a1);
unsigned long long ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int test_pointer_types(void);

// Define structures used before forward declarations
typedef struct ptr_double_struct {
 unsigned int field_0;
} ptr_double_struct;

int ptr_double(ptr_double_struct **a0);

typedef struct ptr_triple_inner {
 unsigned int field_0;
} ptr_triple_inner;

typedef struct ptr_triple_outer {
 struct ptr_triple_inner *field_0;
} ptr_triple_outer;

int ptr_triple(ptr_triple_outer **a0);

typedef long long (*simple_func_t)(unsigned long, unsigned long);

long long ptr_func_simple(simple_func_t a0, unsigned long a1);

typedef long long (*func_ptr_t)(unsigned long, void*);

long long ptr_func_complex(func_ptr_t a0, unsigned long a1);

// Forward declarations for struct/union functions
int struct_simple(unsigned int *a0);
unsigned long long struct_array(unsigned int *ptr, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
int struct_bitfields(unsigned short *ptr);
int union_type(void* a0, unsigned int a1);
unsigned long long union_array(unsigned long ptr, unsigned int a1);
unsigned int enum_type(unsigned int a0);
unsigned long long enum_switch(unsigned int a0);
int binary_tree(void* a0);
int test_composite_types(void);

// Define structures used before forward declarations
typedef struct struct_with_ptr_inner {
 unsigned int field_0;
} struct_with_ptr_inner;

typedef struct struct_with_ptr_outer {
 unsigned int field_0;
 char padding_4[4];
 struct struct_with_ptr_inner *field_8;
} struct_with_ptr_outer;

int struct_with_ptr(struct_with_ptr_outer *a0);

typedef struct struct_func_ptr_struct {
 char padding_0[8];
 unsigned long long field_8;
} struct_func_ptr_struct;

long long struct_func_ptr(struct_func_ptr_struct *a0);

typedef struct linked_list_node {
 unsigned int field_0;
 char padding_4[4];
 struct linked_list_node *field_8;
} linked_list_node;

unsigned long long linked_list(linked_list_node *ptr);

typedef struct doubly_linked_list_node {
 unsigned int field_0;
 char padding_4[4];
 struct doubly_linked_list_node *field_8;
} doubly_linked_list_node;

unsigned long long doubly_linked_list(doubly_linked_list_node *ptr);

typedef struct binary_tree_node {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct binary_tree_node *field_10;
} binary_tree_node;

unsigned int binary_tree_sum(binary_tree_node *a0);

// Define struct_0, struct_1, struct_2, struct_3, struct_4 for graph_traverse

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

typedef struct struct_1 {
 struct struct_0 *field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_1;

typedef struct struct_2 {
 char padding_0[8];
 unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
 char padding_0[8];
 unsigned long long field_8;
} struct_3;

typedef struct struct_4 {
 char padding_0[8];
 unsigned long long field_8;
} struct_4;

unsigned long long graph_traverse(struct_1 *ptr);

// Forward declaration for main
unsigned int main(void);

/* CRT stub function _init removed by preprocessor */

struct_0 * _init()
{
 struct_0 *v1; // rax

 v1 = g_404fe0;
 if (g_404fe0_func)
 {
 g_404fe0_func();
 v1 = g_404fe0;
 }
 return v1;
}


// Global variables for _init
struct_0 *g_404fe0 = 0;
void (*g_404fe0_func)(void) = 0;

unsigned long long g_405008 = 0;
unsigned long long g_405010 = 0;

// Function: sub_401020 at 0x401020
void sub_401020()
{
 void (*func_ptr)(void);
 func_ptr = (void (*)(void))g_405010;
 if (func_ptr)
 {
 func_ptr();
 }
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return puts("");
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
 __builtin_trap();
}


// Function: sub_401086 at 0x401086
void deregister_tm_clones(void);
void sub_401086()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010b9 at 0x4010b9
void register_tm_clones(void);
void sub_4010b9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4010f9 at 0x4010f9
void __do_global_dtors_aux(void);
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
void frame_dummy(void);
void sub_401139()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401149 at 0x401149
void sub_401149(unsigned long a0)
{
 process_char(a0);
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
 process_short(a0, a1);
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
 process_int(a0);
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
 process_long(a0);
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
 float v1 = 1.0f;
 return v1 * 0.5f + 0.5f;
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
 double v1 = 1.0;
 return v1 * 0.5 + 0.25;
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4011e0
long double process_ld()
{
 long double v1 = 1.0L;
 return v1 * 0.5L + 0.25L;
}


// Function: sub_4011eb at 0x4011eb
void sub_4011eb(unsigned long a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x4011f0
char process_bool(unsigned int a0)
{
 return !((char)a0 & 1) & a0 > 0;
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
 volatile_access((unsigned int *)a0);
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
char g_4035df[] = "Testing data types:";

int test_data_types_l1()
{
 unsigned long v2; // rsi
 unsigned int v0; // [bp-0xc]

 puts(g_4035df);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 v2 = (unsigned long)(process_float() * 100.0);
 printf("DT-L1-06 (process_float): %.2f\n", v2 / 100.0);
 printf("DT-L1-07 (process_double): %.2f\n", process_double());
 printf("DT-L1-08 (process_ld): %.2Lf\n", process_ld());
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: sub_401349 at 0x401349
void sub_401349(unsigned long a0, unsigned long a1)
{
 array_1d_stack(a0, a1);
 return;
}


// Function: array_1d_stack at 0x401350
unsigned long long array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned long long sum = 0;
 unsigned int i;
 
 if (a1 <= 0)
 return 0;
 
 for (i = 0; i < a1; i++) {
 sum += *((int *)(ptr + i * 4));
 }
 return sum;
}


// Function: sub_40146d at 0x40146d
void sub_40146d(unsigned long a0)
{
 array_string((char *)a0);
 return;
}


// Function: array_string at 0x401470
long long array_string(char *a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax

 v1 = 4294967295;
 v2 = 0;
 do
 {
 v3 = v1 + 1;
 v1 = v3;
 a0 += 1;
 } while (*(a0));
 return v2 + 1;
}


// Function: sub_40148d at 0x40148d
void sub_40148d(unsigned long a0)
{
 array_2d_stack((unsigned int *)a0);
 return;
}


// Function: array_2d_stack at 0x401490
int array_2d_stack(unsigned int *a0)
{
 return a0[0] + a0[1] + a0[2] + a0[3] + a0[4] + a0[5] + a0[6] + a0[7] + a0[8] + a0[9];
}


// Function: sub_4014c3 at 0x4014c3
void sub_4014c3(unsigned long a0)
{
 array_3d((array_3d_struct *)a0);
 return;
}


// Function: array_3d at 0x4014d0
int array_3d(array_3d_struct *ptr)
{
 unsigned long long v1;
 unsigned long long v2;
 unsigned long long v5;
 unsigned long long v7;
 unsigned long long sum;

 v1 = *((uint64_t *)((char *)&ptr->field_4 + 4)) + *((uint64_t *)&(&ptr->field_0)[1]);
 v2 = *((uint64_t *)((char *)&ptr->field_24 + 4)) + *((uint64_t *)((char *)&ptr->field_44 + 4)) + *((uint64_t *)((char *)&ptr->field_14 + 4)) + *((uint64_t *)((char *)&ptr->field_34 + 4));
 v5 = *((uint64_t *)((char *)&ptr->field_54 + 8)) + *((uint64_t *)&(&ptr->field_64)[2]);
 v7 = *((uint64_t *)((char *)&ptr->field_a8 + 12)) + *((uint64_t *)((char *)&ptr->field_b8 + 12));
 sum = v1 + v2 + v5 + v7 + ptr->field_10c + ptr->field_11c + *((uint64_t *)((char *)&ptr->field_160 + 4)) + *((uint64_t *)((char *)&ptr->field_170 + 4));
 return (int)sum;
}


// Function: sub_4016fe at 0x4016fe
void sub_4016fe(unsigned long a0)
{
 array_vla(0, 0);
 return;
}


// Function: array_vla at 0x401700
unsigned long long array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rdi
 unsigned long long v12; // xmm0
 unsigned long long v13; // xmm1
 unsigned long v14; // xmm1lq
 unsigned long long v3; // rax
 unsigned long v4; // rdi
 unsigned long v5; // rax
 unsigned long long v6; // r8
 unsigned long long idx; // rdi
 unsigned long long i; // rax

 if (a0 <= 0)
 return 0;
 k = a0;
 if (a0 < 8)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)k & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 v6 = (unsigned int)v5 & 3;
 if (v4 < 24)
 {
 v12 = 0;
 idx = 0;
 v13 = 0;
 }
 else
 {
 i = v5 & 18446744073709551612;
 v12 = 0;
 idx = 0;
 v13 = 0;
 do
 {
 v12 = AddV(*((uint64_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((uint64_t *)(ptr + idx * 4 + 64)), *((uint64_t *)(ptr + idx * 4 + 32))), AddV(*((uint64_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((uint64_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((uint64_t *)(ptr + idx * 4 + 80)), *((uint64_t *)(ptr + idx * 4 + 48))), AddV(*((uint64_t *)(ptr + idx * 4 + 16)), v13)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v6)
 {
 v10 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 v12 = AddV(v12, *((uint64_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((uint64_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV((unsigned int)(AddV(v12, v13) >> 96) + (unsigned int)(AddV(v12, v13) >> 64) + (unsigned int)(AddV(v12, v13) >> 96) + (unsigned int)(AddV(v12, v13) >> 64), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40181d at 0x40181d
void sub_40181d(unsigned long a0, unsigned long a1)
{
 array_pointer(0, 0);
 return;
}


// Function: array_pointer at 0x401820
unsigned long long array_pointer(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // rcx
 unsigned long v2; // rdx
 unsigned long long v3; // rax
 unsigned long long v4; // xmm0
 unsigned long long i; // rsi
 unsigned long long v6; // xmm1
 unsigned long v7; // xmm0lq
 unsigned int *cur; // rsi
 unsigned long long j; // rcx

 if (a1 <= 0)
 return 0;
 v1 = a1;
 if (a1 < 8)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)v1 & 0xfffffff8;
 v4 = 0;
 i = 0;
 v6 = 0;
 do
 {
 v4 = AddV(v4, InterleaveLOV(InterleaveLOV(*((int *)(a0 + i + 120)), *((int *)(a0 + i + 80))), InterleaveLOV(*((int *)(a0 + i + 40)), *((int *)(a0 + i)))));
 v6 = AddV(v6, InterleaveLOV(InterleaveLOV(*((int *)(a0 + i + 280)), *((int *)(a0 + i + 240))), InterleaveLOV(*((int *)(a0 + i + 200)), *((int *)(a0 + i + 160)))));
 i += 320;
 } while ((v1 * 8 & 18446744073709551552) * 5 != i);
 v3 = v4 + v6;
 if (v2 == v1)
 return v3;
 }
 cur = a0 + v2 * 40;
 j = v1 - v2;
 do
 {
 v3 = (unsigned int)v3 + *(cur);
 cur += 10;
 j -= 1;
 } while (j != 1);
 return v3;
}


// Function: sub_40190d at 0x40190d
void sub_40190d(unsigned long a0, unsigned long a1)
{
 pointer_array(0, 0);
 return;
}


// Function: pointer_array at 0x401910
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned int result; // r8d
 unsigned long long v2; // rdx
 unsigned long long v3; // rax

 if (a1 <= 0)
 return 0;
 result = (a1 < 10 ? a1 : 10);
 if (result == 1)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 while (true)
 {
 if (*((long long *)(a0 + v2 * 8)))
 v3 = (unsigned int)v3 + *((int *)*((long long *)(a0 + v2 * 8)));
 if (*((long long *)(a0 + v2 * 8 + 8)))
 v3 = (unsigned int)v3 + *((int *)*((long long *)(a0 + v2 * 8 + 8)));
 v2 += 2;
 if ((result & 14) == v2)
 break;
 }
 }
 if (((char)result & 1) && *((long long *)(a0 + v2 * 8)))
 v3 = (unsigned int)v3 + *((int *)*((long long *)(a0 + v2 * 8)));
 return v3;
}


// Function: sub_40194c at 0x40194c
void sub_40194c()
{
}


// Function: sub_401972 at 0x401972
void sub_401972(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 array_complex_index(0, 0, 0, 0, 0);
 return;
}


// Function: array_complex_index at 0x401980
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a3 >= 0 && (unsigned int)a4 < a2 && a3 < (unsigned int)a1 && (unsigned int)a4 >= 0)
 v1 = *((int *)(ptr + (a1 * a4 + a3 & 4294967295) * 4));
 return v1;
}


// Function: sub_4019a5 at 0x4019a5
void sub_4019a5(unsigned long a0, unsigned long a1)
{
 array_oob(0, 0);
 return;
}


// Function: array_oob at 0x4019b0
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 unsigned long long v12; // xmm0
 unsigned long long v13; // xmm1
 unsigned long v14; // xmm1lq
 unsigned long long v3; // rax
 unsigned long v4; // rsi
 unsigned long v5; // rax
 unsigned long long v6; // r8
 unsigned long long idx; // rsi
 unsigned long long i; // rax

 if (a1 < 0)
 return 0;
 k = a1 + 1;
 if (a1 < 7)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)k & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 v6 = (unsigned int)v5 & 3;
 if (v4 < 24)
 {
 v12 = 0;
 idx = 0;
 v13 = 0;
 }
 else
 {
 i = v5 & 18446744073709551612;
 v12 = 0;
 idx = 0;
 v13 = 0;
 do
 {
 v12 = AddV(*((uint64_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((uint64_t *)(ptr + idx * 4 + 64)), *((uint64_t *)(ptr + idx * 4 + 32))), AddV(*((uint64_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((uint64_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((uint64_t *)(ptr + idx * 4 + 80)), *((uint64_t *)(ptr + idx * 4 + 48))), AddV(*((uint64_t *)(ptr + idx * 4 + 16)), v13)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v6)
 {
 v10 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 v12 = AddV(v12, *((uint64_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((uint64_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV((unsigned int)(AddV(v12, v13) >> 96) + (unsigned int)(AddV(v12, v13) >> 64) + (unsigned int)(AddV(v12, v13) >> 96) + (unsigned int)(AddV(v12, v13) >> 64), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_401acd at 0x401acd
void sub_401acd()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x401ad0
char g_403600[] = "Testing array types:";

int test_array_types()
{
 unsigned long long v46; // rbx
 array_3d_struct v0;
 unsigned long long v1;
 unsigned long long v2;
 unsigned long long v3;
 unsigned long long v4;
 unsigned long long v5;
 unsigned int result;
 unsigned long long v7;
 unsigned long long v8;
 unsigned long long v9;
 unsigned long long v10;
 unsigned long long v11;
 unsigned long long v12;
 unsigned int flag1;
 unsigned long long v14;
 unsigned long long v15;
 unsigned long long v16;
 unsigned long long v17;
 unsigned long long v18;
 unsigned long long v19;
 unsigned int flag2;
 unsigned long long v21;
 unsigned long long v22;
 unsigned long long v23;
 unsigned long long v24;
 unsigned long long v25;
 unsigned long long v26;
 unsigned int flag3;
 unsigned long long v28;
 unsigned long long v29;
 unsigned long long v30;
 unsigned long long v31;
 unsigned long long v32;
 unsigned long long v33;
 unsigned int flag4;
 unsigned int v35;
 unsigned int v48;
 unsigned int v49;
 unsigned int v50;
 unsigned int v51;
 unsigned int v52;
 unsigned int v53;
 unsigned int v54;
 unsigned int v55;
 unsigned long v56;
 unsigned int v36[10];
 unsigned int v37[10];
 unsigned int v38[10];
 unsigned int v39[10];
 unsigned int v40[10];
 unsigned int v41[10];
 unsigned int v42[10];
 unsigned int v43[10];
 unsigned int v44[10];

 puts(g_403600);
 v46 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 do
 {
 *((unsigned int *)((char *)&v35 + v46)) = 0;
 *((unsigned int *)((char *)&v48 + v46)) = v46 == 40;
 *((unsigned int *)((char *)&v49 + v46)) = (v46 == 80) * 2;
 *((unsigned int *)((char *)&v50 + v46)) = (v46 == 120) * 3;
 *((unsigned int *)((char *)&v51 + v46)) = (v46 == 160) * 4;
 *((unsigned int *)((char *)&v52 + v46)) = (v46 == 200) * 5;
 } while ((*((unsigned int *)((char *)&v53 + v46)) = (v46 == 240 ? 6 : 0), *((unsigned int *)((char *)&v54 + v46)) = (v46 == 280 ? 7 : 0), *((unsigned int *)((char *)&v55 + v46)) = (unsigned int)(char)(v46 == 320) * 8, *((unsigned int *)((char *)&v56 + v46)) = (unsigned int)(char)(v46 == 360) * 9, v46 += 40, v46 != 400));
 printf("ARR-L1-03 (array_2d_stack): %d\n", *((int *)&v36) + v35 + *((int *)&v37) + *((int *)&v38) + *((int *)&v39) + *((int *)&v40) + *((int *)&v41) + *((int *)&v42) + *((int *)&v43) + *((int *)&v44));
 *((unsigned long long *)&v0) = 79228162532711081671548469249;
 v1 = 79228162532711081671548469249;
 v2 = 79228162532711081671548469249;
 v3 = 79228162532711081671548469249;
 v4 = 79228162532711081671548469249;
 v5 = 79228162532711081671548469249;
 result = 1;
 v7 = 79228162532711081671548469249;
 v8 = 79228162532711081671548469249;
 v9 = 79228162532711081671548469249;
 v10 = 79228162532711081671548469249;
 v11 = 79228162532711081671548469249;
 v12 = 79228162532711081671548469249;
 flag1 = 1;
 v14 = 79228162532711081671548469249;
 v15 = 79228162532711081671548469249;
 v16 = 79228162532711081671548469249;
 v17 = 79228162532711081671548469249;
 v18 = 79228162532711081671548469249;
 v19 = 79228162532711081671548469249;
 flag2 = 1;
 v21 = 79228162532711081671548469249;
 v22 = 79228162532711081671548469249;
 v23 = 79228162532711081671548469249;
 v24 = 79228162532711081671548469249;
 v25 = 79228162532711081671548469249;
 v26 = 79228162532711081671548469249;
 flag3 = 1;
 v28 = 79228162532711081671548469249;
 v29 = 79228162532711081671548469249;
 v30 = 79228162532711081671548469249;
 v31 = 79228162532711081671548469249;
 v32 = 79228162532711081671548469249;
 v33 = 79228162532711081671548469249;
 flag4 = 1;
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v0) & 4294967295);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: sub_401dc8 at 0x401dc8
void sub_401dc8(unsigned long a0)
{
 ptr_single(0);
 return;
}


// Function: ptr_single at 0x401dd0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401dd6 at 0x401dd6
void sub_401dd6(unsigned long a0)
{
 ptr_double(0);
 return;
}


// Function: ptr_double at 0x401de0
int ptr_double(ptr_double_struct **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_401de9 at 0x401de9
void sub_401de9(unsigned long a0)
{
 ptr_triple(0);
 return;
}


// Function: ptr_triple at 0x401df0
int ptr_triple(ptr_triple_outer **a0)
{
 return (*(a0))->field_0->field_0 + 1;
}


// Function: sub_401dfc at 0x401dfc
void sub_401dfc(unsigned long a0, unsigned long a1)
{
 ptr_increment(0, 0);
 return;
}


// Function: ptr_increment at 0x401e00
unsigned long long ptr_increment(unsigned long long cur, unsigned int a1)
{
 unsigned long v1; // r8
 unsigned long long v2; // r9
 unsigned long long i; // rax
 unsigned long long v11; // rax
 unsigned long long j; // rdx
 unsigned long long v13; // xmm0
 unsigned long long v14; // xmm1
 unsigned long v15; // xmm1lq
 unsigned long long v16; // rcx
 unsigned long long v3; // rax
 unsigned long v4; // r8
 unsigned long long v5; // rdx
 unsigned long v6; // rax
 unsigned long long v7; // rcx
 unsigned long long idx; // rdx

 if (a1 <= 0)
 return 0;
 v1 = a1 - 1;
 v2 = 0;
 if ((unsigned int)v1 < 7)
 {
 v3 = 0;
 }
 else
 {
 v4 = v1 + 1;
 v2 = v4 & 18446744073709551608;
 v5 = v2 - 8;
 v6 = (v5 >> 3) + 1;
 v7 = (unsigned int)v6 & 3;
 if (v5 < 24)
 {
 v13 = 0;
 idx = 0;
 v14 = 0;
 }
 else
 {
 i = v6 & 18446744073709551612;
 v13 = 0;
 idx = 0;
 v14 = 0;
 do
 {
 v13 = AddV(*((uint64_t *)(cur + idx * 4 + 96)), AddV(AddV(*((uint64_t *)(cur + idx * 4 + 64)), *((uint64_t *)(cur + idx * 4 + 32))), AddV(*((uint64_t *)(cur + idx * 4)), v13)));
 v14 = AddV(*((uint64_t *)(cur + idx * 4 + 112)), AddV(AddV(*((uint64_t *)(cur + idx * 4 + 80)), *((uint64_t *)(cur + idx * 4 + 48))), AddV(*((uint64_t *)(cur + idx * 4 + 16)), v14)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v7)
 {
 v11 = cur + idx * 4 + 16;
 j = 0;
 do
 {
 v13 = AddV(v13, *((uint64_t *)(v11 + j - 16)));
 v14 = AddV(v14, *((uint64_t *)(v11 + j)));
 j += 32;
 } while (v7 * 32 != j);
 }
 v3 = v13 + v14;
 if (v4 == v2)
 return v3;
 cur += v2 * 4;
 }
 v16 = 0;
 do
 {
 v3 = (unsigned int)v3 + *((int *)(cur + v16 * 4));
 v16 += 1;
 } while ((unsigned int)(a1 - v2) != (unsigned int)v16);
 return v3;
}


// Function: sub_401f2c at 0x401f2c
void sub_401f2c(unsigned long a0, unsigned long a1)
{
 ptr_offset(0, 0);
 return;
}


// Function: ptr_offset at 0x401f30
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401f37 at 0x401f37
void sub_401f37(unsigned long a0, unsigned long a1)
{
 ptr_diff(0, 0);
 return;
}


// Function: ptr_diff at 0x401f40
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_401f4b at 0x401f4b
void sub_401f4b(unsigned long a0, unsigned long a1)
{
 ptr_void(0, 0);
 return;
}


// Function: ptr_void at 0x401f50
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


// Function: sub_401f65 at 0x401f65
void sub_401f65(unsigned long a0)
{
 ptr_const(0);
 return;
}


// Function: ptr_const at 0x401f70
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401f75 at 0x401f75
void sub_401f75(unsigned long a0)
{
 ptr_const_ptr(0);
 return;
}


// Function: ptr_const_ptr at 0x401f80
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401f88 at 0x401f88
void sub_401f88(unsigned long a0, unsigned long a1)
{
 ptr_func_simple(0, 0);
 return;
}


// Function: ptr_func_simple at 0x401f90
long long ptr_func_simple(simple_func_t a0, unsigned long a1)
{
 if (a0) {
 return a0(0, a1);
 }
 return 0;
}


// Function: sub_401f97 at 0x401f97
void sub_401f97(unsigned long a0, unsigned long a1)
{
 ptr_func_complex(0, 0);
 return;
}


// Function: ptr_func_complex at 0x401fa0
unsigned long long g_404de0 = 0;

long long ptr_func_complex(func_ptr_t a0, unsigned long a1)
{
 int v0; // [bp-0x18]

 *((unsigned long long *)&v0) = g_404de0;
 return a0(a1, &v0);
}


// Function: sub_401fc2 at 0x401fc2
void sub_401fc2(unsigned long a0)
{
 ptr_cast(0);
 return;
}


// Function: ptr_cast at 0x401fd0
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401fd3 at 0x401fd3
void sub_401fd3(unsigned long a0)
{
 opaque_handle_create(0);
 return;
}


// Function: opaque_handle_create at 0x401fe0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401fe4 at 0x401fe4
void sub_401fe4(unsigned long a0)
{
 opaque_handle_op(0);
 return;
}


// Function: opaque_handle_op at 0x401ff0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x402000
char g_40361b[] = "Testing pointer types:";

int test_pointer_types()
{
 puts(g_40361b);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 printf("PTR-L2-04 (ptr_increment): %d\n", 15);
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


// Function: sub_402117 at 0x402117
void sub_402117(unsigned long a0)
{
 struct_simple(0);
 return;
}


// Function: struct_simple at 0x402120
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_402129 at 0x402129
void sub_402129(unsigned long a0, unsigned long a1)
{
 struct_array(0, 0);
 return;
}


// Function: struct_array at 0x402130
unsigned long long struct_array(unsigned int *ptr, unsigned int a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax
 unsigned int *cur; // rcx

 if (a1 <= 0)
 return 0;
 if (a1 == 1)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 cur = ptr + 5;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + cur[5] + cur[4] + cur[3] + cur[2] + cur[1] + cur[0];
 i += 2;
 cur += 1;
 } while ((a1 & 4294967294) != i);
 }
 if (((char)a1 & 1))
 v2 = (unsigned int)v2 + ptr[3 * i] + ptr[1 + 3 * i] + ptr[2 + 3 * i];
 return v2;
}


// Function: sub_402194 at 0x402194
void sub_402194(unsigned long a0)
{
 struct_nested(0);
 return;
}


// Function: struct_nested at 0x4021a0
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_4021a6 at 0x4021a6
void sub_4021a6(unsigned long a0)
{
 struct_deep(0);
 return;
}


// Function: struct_deep at 0x4021b0
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_4021b7 at 0x4021b7
void sub_4021b7(unsigned long a0)
{
 struct_with_ptr(0);
 return;
}


// Function: struct_with_ptr at 0x4021c0
int struct_with_ptr(struct_with_ptr_outer *a0)
{
 if (!a0->field_8)
 return 0 + a0->field_0;
 return a0->field_8->field_0 + a0->field_0;
}


// Function: sub_4021d5 at 0x4021d5
void sub_4021d5(unsigned long a0)
{
 struct_bitfields(0);
 return;
}


// Function: struct_bitfields at 0x4021e0
int struct_bitfields(unsigned short *ptr)
{
 unsigned short v1; // ax

 v1 = *(ptr);
 return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}


// Function: sub_402201 at 0x402201
void sub_402201(unsigned long a0, unsigned long a1)
{
 union_type(0, 0);
 return;
}


// Function: union_type at 0x402210
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


// Function: sub_402225 at 0x402225
void sub_402225(unsigned long a0, unsigned long a1)
{
 union_array(0, 0);
 return;
}


// Function: union_array at 0x402230
unsigned long long union_array(unsigned long ptr, unsigned int a1)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 unsigned long long v12; // xmm0
 unsigned long long v13; // xmm1
 unsigned long v14; // xmm1lq
 unsigned long long v3; // rax
 unsigned long v4; // rsi
 unsigned long v5; // rax
 unsigned long long v6; // r8
 unsigned long long idx; // rsi
 unsigned long long i; // rax

 if (a1 <= 0)
 return 0;
 k = a1;
 if (a1 < 8)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)k & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 v6 = (unsigned int)v5 & 3;
 if (v4 < 24)
 {
 v12 = 0;
 idx = 0;
 v13 = 0;
 }
 else
 {
 i = v5 & 18446744073709551612;
 v12 = 0;
 idx = 0;
 v13 = 0;
 do
 {
 v12 = AddV(*((uint64_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((uint64_t *)(ptr + idx * 4 + 64)), *((uint64_t *)(ptr + idx * 4 + 32))), AddV(*((uint64_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((uint64_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((uint64_t *)(ptr + idx * 4 + 80)), *((uint64_t *)(ptr + idx * 4 + 48))), AddV(*((uint64_t *)(ptr + idx * 4 + 16)), v13)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v6)
 {
 v10 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 v12 = AddV(v12, *((uint64_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((uint64_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV((unsigned int)(AddV(v12, v13) >> 96) + (unsigned int)(AddV(v12, v13) >> 64) + (unsigned int)(AddV(v12, v13) >> 96) + (unsigned int)(AddV(v12, v13) >> 64), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32) + (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40234d at 0x40234d
void sub_40234d(unsigned long a0)
{
 enum_type(0);
 return;
}


// Function: enum_type at 0x402350
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_402356 at 0x402356
void sub_402356(unsigned long a0)
{
 enum_switch(0);
 return;
}


// Function: enum_switch at 0x402360
unsigned int g_403040[4] = {50, 100, 150, 200};

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = g_403040[a0];
 return v1;
}


// Function: sub_402378 at 0x402378
void sub_402378(unsigned long a0)
{
 struct_func_ptr(0);
 return;
}


// Function: struct_func_ptr at 0x402380
long long struct_func_ptr(struct_func_ptr_struct *a0)
{
 typedef long long (*func_t)(void);
 union { unsigned long long i; func_t f; } u;
 u.i = a0->field_8;
 if (u.i) {
 return ((long long (*)(void))a0->field_8)();
 }
 return 0;
}


// Function: sub_402388 at 0x402388
void sub_402388(unsigned long a0)
{
 linked_list(0);
 return;
}


// Function: linked_list at 0x402390
unsigned long long linked_list(linked_list_node *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 while (ptr)
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 }
 return v1;
}


// Function: sub_4023ac at 0x4023ac
void sub_4023ac(unsigned long a0)
{
 doubly_linked_list(0);
 return;
}


// Function: doubly_linked_list at 0x4023b0
unsigned long long doubly_linked_list(doubly_linked_list_node *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 while (ptr)
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 }
 return v1;
}


// Function: sub_4023cc at 0x4023cc
void sub_4023cc(unsigned long a0)
{
 binary_tree_sum(0);
 return;
}


// Function: binary_tree_sum at 0x4023d0
unsigned int binary_tree_sum(binary_tree_node *a0)
{
 unsigned int v3;
 binary_tree_node *ptr;
 unsigned int v5;
 binary_tree_node *v6;

 if (!a0)
 return 0;
 v3 = 0;
 do
 {
 ptr = a0;
 v5 = binary_tree_sum(*(binary_tree_node **)&ptr->field_8);
 v6 = *(binary_tree_node **)&ptr->field_10;
 v3 = v3 + ptr->field_0 + v5;
 a0 = v6;
 } while (ptr->field_10);
 return v3;
}


// Function: sub_402405 at 0x402405
void sub_402405()
{
 binary_tree();
 return;
}


// Function: binary_tree at 0x402410
int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_402415 at 0x402415
void sub_402415(unsigned long a0)
{
 graph_traverse(0);
 return;
}


// Function: graph_traverse at 0x402420
unsigned long long graph_traverse(struct_1 *ptr)
{
 unsigned int result; // r8d
 unsigned long long idx; // rdx
 unsigned long long v3; // rax
 struct_4 *addr; // rcx
 struct_2 *p; // rcx
 struct_3 *ptr3; // rcx
 struct_0 **fields_array = (struct_0 **)&ptr->field_0;

 result = ptr->field_50;
 if (result <= 0)
 return 0;
 if (result == 1)
 {
 idx = 0;
 v3 = 0;
 }
 else
 {
 idx = 0;
 v3 = 0;
 while (true)
 {
 addr = (struct_4 *)fields_array[idx];
 if (fields_array[idx])
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&addr->padding_0[0]);
 addr = addr->field_8;
 } while (addr->field_8);
 }
 p = *((struct_2 **)((char *)ptr + (idx * 8 | 8)));
 if (*((struct_2 **)((char *)ptr + (idx * 8 | 8))))
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&p->padding_0[0]);
 p = p->field_8;
 } while (p->field_8);
 }
 idx += 2;
 if (idx == (result & 4294967294))
 break;
 }
 }
 if (((char)result & 1))
 {
 ptr3 = (struct_3 *)fields_array[idx];
 if (fields_array[idx])
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&ptr3->padding_0[0]);
 ptr3 = ptr3->field_8;
 } while (ptr3->field_8);
 }
 }
 return v3;
}


// Function: sub_402449 at 0x402449
void sub_402449()
{
}


char g_403636[] = "Testing composite types:";

int test_composite_types()
{
 unsigned int v16; // ebx
 struct_0 *ptr; // rax
 unsigned int v19; // ebp
 struct_1 *p; // rax
 linked_list_node v0, v2, v4;
 doubly_linked_list_node v7, v10;
 unsigned long long flag2; // [bp-0x60]
 char *v8; // [bp-0x50]
 unsigned long long result; // [bp-0x48]
 unsigned long long flag1; // [bp-0x38]
 char *v12; // [bp-0x30]
 int v13; // [bp-0x28]
 unsigned long long flag3; // [bp-0x18]

 puts(g_403636);
 v16 = 0;
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
 ptr = (linked_list_node *)&v0;
 v0.field_0 = 10;
 v0.field_8 = &v2;
 v2.field_0 = 20;
 v2.field_8 = &v4;
 v4.field_0 = 30;
 v4.field_8 = 0;
 flag2 = 0;
 do
 {
 v16 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr);
 v19 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v16);
 p = (doubly_linked_list_node *)&v7;
 v7.field_0 = 10;
 v7.field_8 = &v10;
 result = 0;
 v10.field_0 = 20;
 v10.field_8 = 0;
 flag1 = 0;
 do
 {
 v19 += p->field_0;
 p = p->field_8;
 } while (p);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v19);
 flag3 = 0;
 v13 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v13) & 4294967295);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


// Function: sub_4026a7 at 0x4026a7
void sub_4026a7()
{
 main();
 return;
}


// Function: main at 0x4026b0
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


