// Angr Decompilation of 2_clang_O3_g
// Platform: AMD64

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Define int128_t type */
typedef __int128 int128_t;

/* Define CONCAT macro */
#define CONCAT(a, b) ((unsigned long long)(a) | (unsigned long long)(b))

/* Helper functions for int128_t bit extraction */
static inline unsigned int extract_u32_from_int128(int128_t v, int shift) {
    return (unsigned int)(v >> shift);
}

/* CRT stub function _init removed by preprocessor */

/* Stub declarations for CRT functions */
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

/* Stub for vector operations */
#define AddV(a, b) ((int128_t)((a) + (b)))
#define MulV(a, b) ((int128_t)((a) * (b)))
#define InterleaveLOV(a, b) ((int128_t)((a) + (b)))

/* Helper to create zero int128_t */
#define INT128_ZERO ((int128_t)0)
typedef struct struct_0 {
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
} struct_0;

extern struct_0 *g_405fe0;

/* Define missing struct types */
typedef struct struct_0_local {
 unsigned int field_0;
 unsigned long long field_8;
} struct_0_local;

typedef struct struct_1_local {
 struct_0_local *field_0;
 unsigned long long field_8;
} struct_1_local;

typedef struct struct_0_swp {
 unsigned int field_0;
 unsigned long long field_8;
} struct_0_swp;

typedef struct struct_0_fp {
 unsigned int field_0;
 unsigned long long field_8;
} struct_0_fp;

typedef struct struct_0_ll {
 unsigned int field_0;
 struct struct_0_ll *field_8;
} struct_0_ll;

typedef struct struct_0_dll {
 unsigned int field_0;
 struct struct_0_dll *field_8;
} struct_0_dll;

typedef struct struct_0_bt {
 unsigned int field_0;
 struct struct_0_bt *field_8;
 struct struct_0_bt *field_10;
} struct_0_bt;

typedef struct struct_0_gt {
 unsigned int field_0;
 struct struct_0_gt *field_8;
} struct_0_gt;

typedef struct struct_3_gt {
 unsigned int padding_0[4];
 struct struct_3_gt *field_8;
} struct_3_gt;

typedef struct struct_4_gt {
 unsigned int padding_0[4];
 struct struct_4_gt *field_8;
} struct_4_gt;

typedef struct struct_1_gt {
 struct_0_gt *field_0;
 unsigned int field_50;
} struct_1_gt;

typedef struct struct_0_tc {
 unsigned int field_0;
 struct struct_0_tc *field_8;
} struct_0_tc;

typedef struct struct_1_tc {
 unsigned int field_0;
 struct struct_1_tc *field_8;
} struct_1_tc;

/* Define func_ptr_t type */
typedef long long (*func_ptr_t)(unsigned long, void*);

/* Forward declarations */
long long process_char(unsigned int a0);
int process_short(unsigned int a0, unsigned int a1);
int process_int(unsigned int a0);
unsigned long long process_long(unsigned long a0);
long long process_ll(unsigned long a0);
double process_float(void);
double process_double(void);
void process_ld(void);
char process_bool(unsigned int a0);
int const_param(unsigned int *a0);
unsigned int volatile_access(unsigned int *a0);
int test_data_types_l1(void);
unsigned long long array_1d_stack(unsigned long ptr, unsigned int a1);
long long array_string(char *a0);
int array_2d_stack(unsigned int *a0);
int array_3d(struct_0 *ptr);
unsigned long long array_vla(unsigned int a0, unsigned long ptr);
unsigned long long array_pointer(unsigned long a0, unsigned int a1);
unsigned long long pointer_array(unsigned long a0, unsigned int a1);
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4);
unsigned long long array_oob(unsigned long ptr, unsigned int a1);
int test_array_types(void);
int ptr_single(unsigned int *a0);
int ptr_double(struct_0_local **a0);
int ptr_triple(struct_1_local **a0);
unsigned long long ptr_increment(unsigned long long cur, unsigned int a1);
int ptr_offset(unsigned long a0, unsigned int a1);
unsigned long long ptr_diff(unsigned long a0, unsigned long a1);
unsigned long long ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
long long ptr_func_simple(unsigned long a0, unsigned long a1);
long long ptr_func_complex(func_ptr_t a0, unsigned long a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int test_pointer_types(void);
int struct_simple(unsigned int *a0);
unsigned long long struct_array(unsigned int *ptr, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
int struct_with_ptr(struct_0_swp *a0);
int struct_bitfields(unsigned short *ptr);
int union_type(void* a0, unsigned int a1);
unsigned long long union_array(unsigned long ptr, unsigned int a1);
unsigned int enum_type(unsigned int a0);
unsigned long long enum_switch(unsigned int a0);
long long struct_func_ptr(struct_0_fp *a0);
unsigned long long linked_list(struct_0_ll *ptr);
unsigned long long doubly_linked_list(struct_0_dll *ptr);
unsigned int binary_tree_sum(struct_0_bt *a0);
int binary_tree(void* a0);
unsigned long long graph_traverse(struct_1_gt *ptr);
int test_composite_types(void);
int main(void);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe0;
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1 = NULL; // rdi

 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
 return;
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
 process_char(0);
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
 process_short(0, 0);
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
 process_long(0);
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
 process_ll(0);
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
 double v1 = 1.5; // xmm0

 return v1 * 1.5 + 0.5;
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
 double v1 = 0.5; // xmm0

 return v1 * 0.5 + 0.25;
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4011e0
void process_ld()
{
 return;
}


// Function: sub_4011eb at 0x4011eb
void sub_4011eb(unsigned long a0)
{
 process_bool(0);
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
 const_param(0);
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
 volatile_access(0);
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
extern char g_40366f;

int test_data_types_l1()
{
 unsigned long v2; // rsi
 unsigned int v0; // [bp-0xc]

 puts(&g_40366f);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 1.5);
 printf("DT-L1-07 (process_double): %.2f\n", 0.5);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
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
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 int128_t v12; // xmm0
 int128_t v13; // xmm1
 int128_t v14; // xmm1lq
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
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(((unsigned int)(AddV(v12, v13) >> 96) | (unsigned int)(AddV(v12, v13) >> 64)), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40146d at 0x40146d
void sub_40146d()
{
 array_string();
 return;
}


// Function: array_string at 0x401470
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


// Function: sub_40148d at 0x40148d
void sub_40148d(unsigned long a0)
{
 array_2d_stack((unsigned int *)a0);
 return;
}


// Function: array_2d_stack at 0x401490
int array_2d_stack(unsigned int *a0)
{
 return a0[11] + *(a0) + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_4014c3 at 0x4014c3
void sub_4014c3(unsigned long a0)
{
 array_3d((struct_0 *)a0);
 return;
}


// Function: array_3d at 0x4014d0
int array_3d(struct_0 *ptr)
{
 int128_t v1; // xmm3
 int128_t v2; // xmm0
 unsigned int v3; // xmm1
 unsigned int v4; // xmm1
 int128_t v5; // xmm1
 int128_t v6; // xmm0lq
 int128_t v7; // xmm1
 int128_t v8; // xmm0lq
 int128_t v9; // xmm1
 int128_t v10; // xmm1

 v1 = AddV(*((int128_t *)((char *)&ptr->field_4 + 4)), *((int128_t *)&(&ptr->field_0)[1]));
 v2 = AddV(AddV(*((int128_t *)((char *)&ptr->field_24 + 4)), *((int128_t *)((char *)&ptr->field_44 + 4))), AddV(*((int128_t *)((char *)&ptr->field_14 + 4)), *((int128_t *)((char *)&ptr->field_34 + 4))));
 v3 = ((unsigned int)(v2 >> 96) | (unsigned int)(v2 >> 64));
 v4 = (unsigned int)((unsigned long long)(AddV(((unsigned int)(v1 >> 96) | (unsigned int)(v1 >> 64)), v1)) >> 32);
 v5 = AddV(*((int128_t *)((char *)&ptr->field_54 + 8)), *((int128_t *)&(&ptr->field_64)[2]));
 v6 = AddV(*((int128_t *)((char *)&ptr->field_78 + 8)), *((int128_t *)((char *)&ptr->field_98 + 8)));
 v7 = AddV(*((int128_t *)((char *)&ptr->field_a8 + 12)), *((int128_t *)((char *)&ptr->field_b8 + 12)));
 v8 = AddV(*((int128_t *)((char *)&ptr->field_cc + 12)), *((int128_t *)((char *)&ptr->field_ec + 12)));
 v9 = AddV(ptr->field_10c, ptr->field_11c);
 v10 = AddV(*((int128_t *)((char *)&ptr->field_160 + 4)), *((int128_t *)((char *)&ptr->field_170 + 4)));
 return 0;
}


// Function: sub_4016fe at 0x4016fe
void sub_4016fe(unsigned long a0)
{
 array_vla(a0, 0);
 return;
}


// Function: array_vla at 0x401700
unsigned long long array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rdi
 int128_t v12; // xmm0
 int128_t v13; // xmm1
 int128_t v14; // xmm1lq
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
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(((unsigned int)(AddV(v12, v13) >> 96) | (unsigned int)(AddV(v12, v13) >> 64)), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
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
 array_pointer(a0, a1);
 return;
}


// Function: array_pointer at 0x401820
unsigned long long array_pointer(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // rcx
 unsigned long v2; // rdx
 unsigned long long v3; // rax
 int128_t v4; // xmm0
 unsigned long long i; // rsi
 int128_t v6; // xmm1
 int128_t v7; // xmm0lq
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
 v7 = AddV(((unsigned int)(AddV(v6, v4) >> 96) | (unsigned int)(AddV(v6, v4) >> 64)), AddV(v6, v4));
 v3 = ((unsigned int)(v7 >> 32)) & 18446744073709551615;
 if (v2 == v1)
 return ((unsigned int)(v7 >> 32)) & 18446744073709551615;
 }
 cur = a0 + v2 * 40;
 j = v1 - v2;
 do
 {
 v3 = v3 + *(cur);
 cur += 10;
 j -= 1;
 } while (j != 1);
 return v3;
}


// Function: sub_40190d at 0x40190d
void sub_40190d(unsigned long a0, unsigned long a1)
{
 pointer_array(a0, a1);
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
 array_oob();
 return;
}


// Function: array_oob at 0x4019b0
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 int128_t v12; // xmm0
 int128_t v13; // xmm1
 int128_t v14; // xmm1lq
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
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(((unsigned int)(AddV(v12, v13) >> 96) | (unsigned int)(AddV(v12, v13) >> 64)), AddV(v12, v13));
 v3 = ((unsigned int)(v14 >> 32)) & 18446744073709551615;
 if (v2 == k)
 return ((unsigned int)(v14 >> 32)) & 18446744073709551615;
 }
 do
 {
 v3 = v3 + *((int *)(ptr + v2 * 4));
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
extern char g_403690;

int test_array_types()
{
 int flag5; // [bp-0x388]
 unsigned long long flag6; // [bp-0x378]
 unsigned long long v2; // [bp-0x368]
 unsigned long long flag7; // [bp-0x358]
 unsigned long long flag8; // [bp-0x348]
 unsigned long long v5; // [bp-0x338]
 unsigned long long flag9; // [bp-0x328]
 unsigned long long flag10; // [bp-0x318]
 unsigned long long v8; // [bp-0x308]
 unsigned long long flag11; // [bp-0x2f8]
 unsigned long long flag12; // [bp-0x2e8]
 int v11; // [bp-0x2d8]
 unsigned long long flag13; // [bp-0x2c8]
 unsigned long long v13; // [bp-0x2b8]
 unsigned long long flag14; // [bp-0x2a8]
 unsigned long long flag15; // [bp-0x298]
 unsigned long long v16; // [bp-0x288]
 unsigned long long flag16; // [bp-0x278]
 unsigned long long flag17; // [bp-0x268]
 unsigned long long v19; // [bp-0x258]
 unsigned long long flag18; // [bp-0x248]
 unsigned long long flag19; // [bp-0x238]
 unsigned long long v22; // [bp-0x228]
 unsigned long long flag20; // [bp-0x218]
 unsigned long long v24; // [bp-0x208]
 int v25; // [bp-0x1f8]
 unsigned long long v26; // [bp-0x1e8]
 unsigned long long v27; // [bp-0x1d8]
 unsigned long long v28; // [bp-0x1c8]
 unsigned long long v29; // [bp-0x1b8]
 unsigned long long v30; // [bp-0x1a8]
 unsigned int result; // [bp-0x198]
 unsigned long long v32; // [bp-0x194]
 unsigned long long v33; // [bp-0x184]
 unsigned long long v34; // [bp-0x174]
 unsigned long long v35; // [bp-0x164]
 unsigned long long v36; // [bp-0x154]
 unsigned long long v37; // [bp-0x144]
 unsigned int flag1; // [bp-0x134]
 unsigned long long v39; // [bp-0x130]
 unsigned long long v40; // [bp-0x120]
 unsigned long long v41; // [bp-0x110]
 unsigned long long v42; // [bp-0x100]
 unsigned long long v43; // [bp-0xf0]
 unsigned long long v44; // [bp-0xe0]
 unsigned int flag2; // [bp-0xd0]
 unsigned long long v46; // [bp-0xcc]
 unsigned long long v47; // [bp-0xbc]
 unsigned long long v48; // [bp-0xac]
 unsigned long long v49; // [bp-0x9c]
 unsigned long long v50; // [bp-0x8c]
 unsigned long long v51; // [bp-0x7c]
 unsigned int flag3; // [bp-0x6c]
 unsigned long long v53; // [bp-0x68]
 unsigned long long v54; // [bp-0x58]
 unsigned long long v55; // [bp-0x48]
 unsigned long long v56; // [bp-0x38]
 unsigned long long v57; // [bp-0x28]
 unsigned long long v58; // [bp-0x18]
 unsigned int flag4; // [bp-0x8]

 puts(&g_403690);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 *((unsigned long long *)&flag5) = 0;
 flag6 = 0;
 v2 = 0x1000000000000000000000000;
 flag7 = 0;
 flag8 = 0;
 v5 = 0x20000000000000000;
 flag9 = 0;
 flag10 = 0;
 v8 = 0x300000000;
 flag11 = 0;
 flag12 = 0;
 v11 = 4;
 flag13 = 0;
 v13 = 0x5000000000000000000000000;
 flag14 = 0;
 flag15 = 0;
 v16 = 0x60000000000000000;
 flag16 = 0;
 flag17 = 0;
 v19 = 0x700000000;
 flag18 = 0;
 flag19 = 0;
 v22 = 8;
 flag20 = 0;
 v24 = 0x9000000000000000000000000;
 printf("ARR-L1-03 (array_2d_stack): %d\n", *((int *)((char *)&v19 + 4)) + *((int *)((char *)&v2 + 12)) + (int)flag5 + *((int *)((char *)&v5 + 8)) + *((int *)((char *)&v8 + 4)) + (int)v11 + *((int *)((char *)&v13 + 12)) + *((int *)((char *)&v16 + 8)) + 17);
 *((unsigned long long *)&v25) = 79228162532711081671548469249;
 v26 = 79228162532711081671548469249;
 v27 = 79228162532711081671548469249;
 v28 = 79228162532711081671548469249;
 v29 = 79228162532711081671548469249;
 v30 = 79228162532711081671548469249;
 result = 1;
 v32 = 79228162532711081671548469249;
 v33 = 79228162532711081671548469249;
 v34 = 79228162532711081671548469249;
 v35 = 79228162532711081671548469249;
 v36 = 79228162532711081671548469249;
 v37 = 79228162532711081671548469249;
 flag1 = 1;
 v39 = 79228162532711081671548469249;
 v40 = 79228162532711081671548469249;
 v41 = 79228162532711081671548469249;
 v42 = 79228162532711081671548469249;
 v43 = 79228162532711081671548469249;
 v44 = 79228162532711081671548469249;
 flag2 = 1;
 v46 = 79228162532711081671548469249;
 v47 = 79228162532711081671548469249;
 v48 = 79228162532711081671548469249;
 v49 = 79228162532711081671548469249;
 v50 = 79228162532711081671548469249;
 v51 = 79228162532711081671548469249;
 flag3 = 1;
 v53 = 79228162532711081671548469249;
 v54 = 79228162532711081671548469249;
 v55 = 79228162532711081671548469249;
 v56 = 79228162532711081671548469249;
 v57 = 79228162532711081671548469249;
 v58 = 79228162532711081671548469249;
 flag4 = 1;
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v25) & 4294967295);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: sub_401ddb at 0x401ddb
void sub_401ddb(unsigned long a0)
{
 ptr_single();
 return;
}


// Function: ptr_single at 0x401de0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401de6 at 0x401de6
void sub_401de6(unsigned long a0)
{
 ptr_double();
 return;
}


// Function: ptr_double at 0x401df0
int ptr_double(struct_0_local **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_401df9 at 0x401df9
void sub_401df9(unsigned long a0)
{
 ptr_triple();
 return;
}


// Function: ptr_triple at 0x401e00
int ptr_triple(struct_1_local **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: sub_401e0c at 0x401e0c
void sub_401e0c(unsigned long a0, unsigned long a1)
{
 ptr_increment();
 return;
}


// Function: ptr_increment at 0x401e10
unsigned long long ptr_increment(unsigned long long cur, unsigned int a1)
{
 unsigned long v1; // r8
 unsigned long long v2; // r9
 unsigned long long i; // rax
 unsigned long long v11; // rax
 unsigned long long j; // rdx
 int128_t v13; // xmm0
 int128_t v14; // xmm1
 int128_t v15; // xmm1lq
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
 v13 = AddV(*((int128_t *)(cur + idx * 4 + 96)), AddV(AddV(*((int128_t *)(cur + idx * 4 + 64)), *((int128_t *)(cur + idx * 4 + 32))), AddV(*((int128_t *)(cur + idx * 4)), v13)));
 v14 = AddV(*((int128_t *)(cur + idx * 4 + 112)), AddV(AddV(*((int128_t *)(cur + idx * 4 + 80)), *((int128_t *)(cur + idx * 4 + 48))), AddV(*((int128_t *)(cur + idx * 4 + 16)), v14)));
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
 v13 = AddV(v13, *((int128_t *)(v11 + j - 16)));
 v14 = AddV(v14, *((int128_t *)(v11 + j)));
 j += 32;
 } while (v7 * 32 != j);
 }
 v15 = AddV(((unsigned int)(AddV(v13, v14) >> 96) | (unsigned int)(AddV(v13, v14) >> 64)), AddV(v13, v14));
 v3 = ((unsigned int)(v15 >> 32)) & 18446744073709551615;
 if (v4 == v2)
 return ((unsigned int)(v15 >> 32)) & 18446744073709551615;
 cur += v2 * 4;
 }
 v16 = 0;
 do
 {
 v3 = v3 + *((int *)(cur + v16 * 4));
 v16 += 1;
 } while ((unsigned int)(a1 - v2) != (unsigned int)v16);
 return v3;
}


// Function: sub_401f3c at 0x401f3c
void sub_401f3c(unsigned long a0, unsigned long a1)
{
 ptr_offset();
 return;
}


// Function: ptr_offset at 0x401f40
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401f47 at 0x401f47
void sub_401f47(unsigned long a0, unsigned long a1)
{
 ptr_diff();
 return;
}


// Function: ptr_diff at 0x401f50
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_401f5b at 0x401f5b
void sub_401f5b(unsigned long a0, unsigned long a1)
{
 ptr_void();
 return;
}


// Function: ptr_void at 0x401f60
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


// Function: sub_401f75 at 0x401f75
void sub_401f75(unsigned long a0)
{
 ptr_const();
 return;
}


// Function: ptr_const at 0x401f80
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401f85 at 0x401f85
void sub_401f85(unsigned long a0)
{
 ptr_const_ptr();
 return;
}


// Function: ptr_const_ptr at 0x401f90
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401f98 at 0x401f98
void sub_401f98(unsigned long a0, unsigned long a1)
{
 ptr_func_simple();
 return;
}


// Function: ptr_func_simple at 0x401fa0
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return a0;
}


// Function: sub_401fa7 at 0x401fa7
void sub_401fa7(unsigned long a0, unsigned long a1)
{
 ptr_func_complex();
 return;
}


// Function: ptr_func_complex at 0x401fb0
extern unsigned long long g_405de0;

long long ptr_func_complex(func_ptr_t a0, unsigned long a1)
{
 unsigned long long v0; // [bp-0x18]

 v0 = g_405de0;
 return a0(a1, &v0);
}


// Function: sub_401fd2 at 0x401fd2
void sub_401fd2(unsigned long a0)
{
 ptr_cast();
 return;
}


// Function: ptr_cast at 0x401fe0
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401fe3 at 0x401fe3
void sub_401fe3(unsigned long a0)
{
 opaque_handle_create();
 return;
}


// Function: opaque_handle_create at 0x401ff0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4(unsigned long a0)
{
 opaque_handle_op();
 return;
}


// Function: opaque_handle_op at 0x402000
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402004 at 0x402004
void sub_402004()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x402010
extern char g_4036ab;

int test_pointer_types()
{
 puts(&g_4036ab);
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


// Function: sub_402127 at 0x402127
void sub_402127(unsigned long a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x402130
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_402139 at 0x402139
void sub_402139(unsigned long a0, unsigned long a1)
{
 struct_array();
 return;
}


// Function: struct_array at 0x402140
unsigned long long struct_array(unsigned int *ptr, unsigned int a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax
 unsigned int cur[6]; // rcx

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


// Function: sub_4021a4 at 0x4021a4
void sub_4021a4(unsigned long a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x4021b0
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_4021b6 at 0x4021b6
void sub_4021b6(unsigned long a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x4021c0
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_4021c7 at 0x4021c7
void sub_4021c7(unsigned long a0)
{
 struct_with_ptr();
 return;
}


// Function: struct_with_ptr at 0x4021d0
int struct_with_ptr(struct_0_swp *a0)
{
 if (!a0->field_8)
 return 0 + a0->field_0;
 return a0->field_8->field_0 + a0->field_0;
}


// Function: sub_4021e5 at 0x4021e5
void sub_4021e5(unsigned long a0)
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x4021f0
int struct_bitfields(unsigned short *ptr)
{
 unsigned short v1; // ax

 v1 = *(ptr);
 return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}


// Function: sub_402211 at 0x402211
void sub_402211(unsigned long a0, unsigned long a1)
{
 union_type();
 return;
}


// Function: union_type at 0x402220
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


// Function: sub_402235 at 0x402235
void sub_402235(unsigned long a0, unsigned long a1)
{
 union_array();
 return;
}


// Function: union_array at 0x402240
unsigned long long union_array(unsigned long ptr, unsigned int a1)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 int128_t v12; // xmm0
 int128_t v13; // xmm1
 int128_t v14; // xmm1lq
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
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(((unsigned int)(AddV(v12, v13) >> 96) | (unsigned int)(AddV(v12, v13) >> 64)), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40235d at 0x40235d
void sub_40235d(unsigned long a0)
{
 enum_type();
 return;
}


// Function: enum_type at 0x402360
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_402366 at 0x402366
void sub_402366(unsigned long a0)
{
 enum_switch();
 return;
}


// Function: enum_switch at 0x402370
extern unsigned int g_4030d0[4];

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = g_4030d0[a0];
 return v1;
}


// Function: sub_402388 at 0x402388
void sub_402388(unsigned long a0)
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x402390
long long struct_func_ptr(struct_0_fp *a0)
{
 return a0->field_8;
}


// Function: sub_402398 at 0x402398
void sub_402398(unsigned long a0)
{
 linked_list();
 return;
}


// Function: linked_list at 0x4023a0
unsigned long long linked_list(struct_0_ll *ptr)
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


// Function: sub_4023bc at 0x4023bc
void sub_4023bc(unsigned long a0)
{
 doubly_linked_list();
 return;
}


// Function: doubly_linked_list at 0x4023c0
unsigned long long doubly_linked_list(struct_0_dll *ptr)
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


// Function: sub_4023dc at 0x4023dc
void sub_4023dc(unsigned long a0)
{
 binary_tree_sum();
 return;
}


// Function: binary_tree_sum at 0x4023e0
unsigned int binary_tree_sum(struct_0_bt *a0)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebx
 struct_0_bt *ptr; // r14
 unsigned int v5; // eax
 struct_0_bt *v6; // r14
 unsigned long long v0; // [bp-0x18]

 if (!a0)
 return 0;
 v3 = 0;
 do
 {
 ptr = a0;
 v5 = binary_tree_sum((struct_0_bt *)ptr->field_8);
 v6 = (struct_0_bt *)ptr->field_10;
 v3 = v3 + ptr->field_0 + v5;
 a0 = v6;
 } while (ptr->field_10);
 return v3;
}


// Function: sub_402415 at 0x402415
void sub_402415()
{
 binary_tree();
 return;
}


// Function: binary_tree at 0x402420
int binary_tree(void* a0)
{
 return binary_tree_sum((struct_0_bt *)a0);
}


// Function: sub_402425 at 0x402425
void sub_402425(unsigned long a0)
{
 graph_traverse();
 return;
}


// Function: graph_traverse at 0x402430
unsigned long long graph_traverse(struct_1_gt *ptr)
{
 unsigned int result; // r8d
 unsigned long long idx; // rdx
 unsigned long long v3; // rax
 struct_0_gt *p; // rcx
 struct_4_gt *addr; // rcx
 struct_3_gt *ptr3; // rcx

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
 p = ptr->field_0;
 if (!ptr->field_0)
 goto LABEL_40249b;
 while (true)
 {
 do
 {
 v3 = (unsigned int)v3 + p->field_0;
 p = p->field_8;
 } while (p->field_8);
 do
 {
LABEL_40249b:
 addr = *((long long *)((char *)ptr + (idx * 8 | 8)));
 if (*((long long *)((char *)ptr + (idx * 8 | 8))))
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&addr->padding_0[0]);
 addr = addr->field_8;
 } while (addr->field_8);
 }
 idx += 2;
 if (idx == (result & 4294967294))
 goto LABEL_402443;
 } while ((p = (&ptr->field_0)[idx], !(&ptr->field_0)[idx]));
 }
 }
LABEL_402443:
 if (((char)result & 1))
 {
 ptr3 = (&ptr->field_0)[idx];
 if ((&ptr->field_0)[idx])
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


// Function: sub_402462 at 0x402462
void sub_402462()
{
}


// Function: test_composite_types at 0x4024e0
extern char g_4036c6;

int test_composite_types()
{
 unsigned int v16; // ebx
 struct_0_tc *ptr; // rax
 unsigned int v19; // ebp
 struct_1_tc *p; // rax
 char v0; // [bp-0x88], Other Possible Types: unsigned int
 char *v1; // [bp-0x80]
 char v2; // [bp-0x78], Other Possible Types: unsigned int
 char *v3; // [bp-0x70]
 char v4; // [bp-0x68], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0x60]
 unsigned int v7; // [bp-0x58]
 char *v8; // [bp-0x50]
 unsigned long long result; // [bp-0x48]
 unsigned int v10; // [bp-0x40]
 unsigned long long flag1; // [bp-0x38]
 char *v12; // [bp-0x30]
 int v13; // [bp-0x28]
 unsigned long long flag3; // [bp-0x18]

 puts(&g_4036c6);
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
 ptr = (struct_0_tc *)&v0;
 v0 = 10;
 v1 = &v2;
 v2 = 20;
 v3 = &v4;
 v4 = 30;
 flag2 = 0;
 do
 {
 v16 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 v19 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v16);
 p = (struct_1_tc *)&v7;
 v7 = 10;
 result = 0;
 v10 = 20;
 flag1 = 0;
 v12 = &v7;
 v8 = &v10;
 do
 {
 v19 += p->field_0;
 p = p->field_8;
 } while (p->field_8);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v19);
 flag3 = 0;
 v13 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", (binary_tree_sum((struct_0_bt *)&v13) & 4294967295));
 printf("CMP-L2-15 (graph_traverse): %d\n", 1);
 return 0;
}


// Function: sub_4026c7 at 0x4026c7
void sub_4026c7()
{
 main();
 return;
}


// Function: main at 0x4026d0
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

