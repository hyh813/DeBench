// Angr Decompilation of 2_clang_O2_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Helper macros for decompiler artifacts */
#define AddV(a, b) ((a) + (b))
#define InterleaveLOV(a, b) ((a) + (b))
#define CONCAT(a, b) (((unsigned long long)(unsigned int)(a) << 32) | (unsigned int)(b))
#define CONCAT4(a, b, c, d) (((unsigned __int128)(a) << 96) | ((unsigned __int128)(b) << 64) | ((unsigned __int128)(c) << 32) | (unsigned int)(d))

/* Forward declarations */
#ifdef __SIZEOF_INT128__
typedef __int128 int128_t;
#else
typedef struct { unsigned long long lo; unsigned long long hi; } int128_t;
#endif
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;

/* Function forward declarations */
long long process_char(unsigned int a0);
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
unsigned long long array_1d_stack(unsigned long ptr, unsigned int a1);
long long array_string(char *a0);
int array_2d_stack(unsigned int *a0);
int array_3d(struct_0 *ptr);
unsigned long long array_vla(unsigned int a0, unsigned long ptr);
unsigned long long array_pointer(unsigned long a0, unsigned int a1);
unsigned long long pointer_array(unsigned long a0, unsigned int a1);
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4);
unsigned long long array_oob(unsigned long ptr, unsigned int a1);
int test_array_types();
int ptr_single(unsigned int *a0);
int ptr_double(struct_0 **a0);
int ptr_triple(struct_1 **a0);
unsigned long long ptr_increment(unsigned long long cur, unsigned int a1);
int ptr_offset(unsigned long a0, unsigned int a1);
unsigned long long ptr_diff(unsigned long a0, unsigned long a1);
unsigned long long ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
long long ptr_func_simple(unsigned long a0, unsigned long a1);
long long ptr_func_complex(unsigned long long *a0, unsigned long a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int test_pointer_types();
int struct_simple(unsigned int *a0);
unsigned long long struct_array(unsigned int *ptr, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
int struct_with_ptr(struct_0 *a0);
int struct_bitfields(unsigned short *ptr);
int union_type(void* a0, unsigned int a1);
unsigned long long union_array(unsigned long ptr, unsigned int a1);
unsigned int enum_type(unsigned int a0);
unsigned long long enum_switch(unsigned int a0);
long long struct_func_ptr(struct_0 *a0);
unsigned long long linked_list(struct_0 *ptr);
unsigned long long doubly_linked_list(struct_0 *ptr);
unsigned int binary_tree_sum(struct_0 *a0);
int binary_tree(void* a0);
unsigned long long graph_traverse(struct_1 *ptr);
int test_composite_types();
unsigned int main();

/* Struct definitions */
struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    struct_0 *field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    struct_0 *left;
    struct_0 *right;
    void *field_18;
};

struct struct_1 {
    struct_0 *field_0;
    unsigned int field_50;
};

/* CRT stub functions */
void deregister_tm_clones(void) { }
void register_tm_clones(void) { }
void __do_global_dtors_aux(void) { }
void frame_dummy(void) { }

extern struct_0 *g_404fe0;

/* _init removed - CRT function */


// Function: sub_401020 at 0x401020
extern unsigned long long g_405008;
extern unsigned long long g_405010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405008;
 // goto g_405010; // Removed invalid goto
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1; // rdi

 v1 = NULL;
 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198533
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
 process_int((unsigned int)a0);
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
 double v1 = 1.5;

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
 double v1 = 0.5;

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
 // Long double processing - simplified
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
char g_4035df[] = "Data Types L1 Test";

int test_data_types_l1()
{
 unsigned long v2; // rsi
 unsigned int v0; // [bp-0xc]

 puts(&g_4035df);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 2.25);
 printf("DT-L1-07 (process_double): %.2f\n", 0.5);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0L);
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
 array_1d_stack(a0, (unsigned int)a1);
 return;
}


// Function: array_1d_stack at 0x401350
unsigned long long array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned long long sum = 0;
 unsigned int i;
 if (a1 <= 0)
 return 0;
 for (i = 0; i < a1; i++)
 {
 sum += *((int *)(ptr + i * 4));
 }
 return sum;
}


// Function: sub_40146d at 0x40146d
void sub_40146d(char *a0)
{
 array_string(a0);
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
 int sum = 0;
 sum += ptr->field_0;
 sum += (int)ptr->field_4;
 sum += (int)ptr->field_14;
 return sum;
}


// Function: sub_4016fe at 0x4016fe
void sub_4016fe(unsigned long a0, unsigned long a1)
{
 array_vla((unsigned int)a0, a1);
 return;
}


// Function: array_vla at 0x401700
unsigned long long array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned long long sum = 0;
 unsigned int i;
 if (a0 <= 0)
 return 0;
 for (i = 0; i < a0; i++)
 {
 sum += *((int *)(ptr + i * 4));
 }
 return sum;
}


// Function: sub_40181d at 0x40181d
void sub_40181d(unsigned long a0, unsigned long a1)
{
 array_pointer(a0, (unsigned int)a1);
 return;
}


// Function: array_pointer at 0x401820
unsigned long long array_pointer(unsigned long a0, unsigned int a1)
{
 unsigned long long sum = 0;
 unsigned int i;
 if (a1 <= 0)
 return 0;
 for (i = 0; i < a1; i++)
 {
 sum += *((int *)(a0 + i * 40));
 }
 return sum;
}


// Function: sub_40190d at 0x40190d
void sub_40190d(unsigned long a0, unsigned long a1)
{
 pointer_array(a0, (unsigned int)a1);
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
 while (1)
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
 array_complex_index(a0, a1, (unsigned int)a2, (unsigned int)a3, a0);
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
 array_oob(a0, (unsigned int)a1);
 return;
}


// Function: array_oob at 0x4019b0
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long long sum = 0;
 unsigned int i;
 if (a1 < 0)
 return 0;
 for (i = 0; i <= a1; i++)
 {
 sum += *((int *)(ptr + i * 4));
 }
 return sum;
}


// Function: sub_401acd at 0x401acd
void sub_401acd()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x401ad0
char g_403600[] = "Array Types Test";

int test_array_types()
{
 unsigned long long v46; // rbx
 int v0; // [bp-0x398]
 unsigned long long v1; // [bp-0x388]
 unsigned long long v2; // [bp-0x378]
 unsigned long long v3; // [bp-0x368]
 unsigned long long v4; // [bp-0x358]
 unsigned long long v5; // [bp-0x348]
 unsigned int result; // [bp-0x338]
 unsigned long long v7; // [bp-0x334]
 unsigned long long v8; // [bp-0x324]
 unsigned long long v9; // [bp-0x314]
 unsigned long long v10; // [bp-0x304]
 unsigned long long v11; // [bp-0x2f4]
 unsigned long long v12; // [bp-0x2e4]
 unsigned int flag1; // [bp-0x2d4]
 unsigned long long v14; // [bp-0x2d0]
 unsigned long long v15; // [bp-0x2c0]
 unsigned long long v16; // [bp-0x2b0]
 unsigned long long v17; // [bp-0x2a0]
 unsigned long long v18; // [bp-0x290]
 unsigned long long v19; // [bp-0x280]
 unsigned int flag2; // [bp-0x270]
 unsigned long long v21; // [bp-0x26c]
 unsigned long long v22; // [bp-0x25c]
 unsigned long long v23; // [bp-0x24c]
 unsigned long long v24; // [bp-0x23c]
 unsigned long long v25; // [bp-0x22c]
 unsigned long long v26; // [bp-0x21c]
 unsigned int flag3; // [bp-0x20c]
 unsigned long long v28; // [bp-0x208]
 unsigned long long v29; // [bp-0x1f8]
 unsigned long long v30; // [bp-0x1e8]
 unsigned long long v31; // [bp-0x1d8]
 unsigned long long v32; // [bp-0x1c8]
 unsigned long long v33; // [bp-0x1b8]
 unsigned int flag4; // [bp-0x1a8]
 unsigned int v35; // [bp-0x198]
 unsigned int v48; // [bp-0x194]
 unsigned int v49; // [bp-0x190]
 unsigned int v50; // [bp-0x18c]
 unsigned int v51; // [bp-0x188]
 unsigned int v52; // [bp-0x184]
 unsigned int v53; // [bp-0x180]
 unsigned int v54; // [bp-0x17c]
 unsigned int v55; // [bp-0x178]
 unsigned long v56; // [bp-0x174]
 char v36; // [bp-0x16c]
 char v37; // [bp-0x140]
 char v38; // [bp-0x114]
 char v39; // [bp-0xe8]
 char v40; // [bp-0xbc]
 char v41; // [bp-0x90]
 char v42; // [bp-0x64]
 char v43; // [bp-0x38]
 char v44; // [bp-0xc]

 puts(&g_403600);
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
 *((unsigned long long *)&v0) = 0xFFFFFFFFFFFFFFFFULL;
 v1 = 0xFFFFFFFFFFFFFFFFULL;
 v2 = 0xFFFFFFFFFFFFFFFFULL;
 v3 = 0xFFFFFFFFFFFFFFFFULL;
 v4 = 0xFFFFFFFFFFFFFFFFULL;
 v5 = 0xFFFFFFFFFFFFFFFFULL;
 result = 1;
 v7 = 0xFFFFFFFFFFFFFFFFULL;
 v8 = 0xFFFFFFFFFFFFFFFFULL;
 v9 = 0xFFFFFFFFFFFFFFFFULL;
 v10 = 0xFFFFFFFFFFFFFFFFULL;
 v11 = 0xFFFFFFFFFFFFFFFFULL;
 v12 = 0xFFFFFFFFFFFFFFFFULL;
 flag1 = 1;
 v14 = 0xFFFFFFFFFFFFFFFFULL;
 v15 = 0xFFFFFFFFFFFFFFFFULL;
 v16 = 0xFFFFFFFFFFFFFFFFULL;
 v17 = 0xFFFFFFFFFFFFFFFFULL;
 v18 = 0xFFFFFFFFFFFFFFFFULL;
 v19 = 0xFFFFFFFFFFFFFFFFULL;
 flag2 = 1;
 v21 = 0xFFFFFFFFFFFFFFFFULL;
 v22 = 0xFFFFFFFFFFFFFFFFULL;
 v23 = 0xFFFFFFFFFFFFFFFFULL;
 v24 = 0xFFFFFFFFFFFFFFFFULL;
 v25 = 0xFFFFFFFFFFFFFFFFULL;
 v26 = 0xFFFFFFFFFFFFFFFFULL;
 flag3 = 1;
 v28 = 0xFFFFFFFFFFFFFFFFULL;
 v29 = 0xFFFFFFFFFFFFFFFFULL;
 v30 = 0xFFFFFFFFFFFFFFFFULL;
 v31 = 0xFFFFFFFFFFFFFFFFULL;
 v32 = 0xFFFFFFFFFFFFFFFFULL;
 v33 = 0xFFFFFFFFFFFFFFFFULL;
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
 ptr_single((unsigned int *)a0);
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
 ptr_double((struct_0 **)a0);
 return;
}


// Function: ptr_double at 0x401de0
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_401de9 at 0x401de9
void sub_401de9(unsigned long a0)
{
 ptr_triple((struct_1 **)a0);
 return;
}


// Function: ptr_triple at 0x401df0
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: sub_401dfc at 0x401dfc
void sub_401dfc(unsigned long a0, unsigned long a1)
{
 ptr_increment(a0, (unsigned int)a1);
 return;
}


// Function: ptr_increment at 0x401e00
unsigned long long ptr_increment(unsigned long long cur, unsigned int a1)
{
 unsigned long long sum = 0;
 unsigned int i;
 if (a1 <= 0)
 return 0;
 for (i = 0; i < a1; i++)
 {
 sum += *((int *)(cur + i * 4));
 }
 return sum;
}


// Function: sub_401f2c at 0x401f2c
void sub_401f2c(unsigned long a0, unsigned long a1)
{
 ptr_offset(a0, (unsigned int)a1);
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
 ptr_diff(a0, a1);
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
 ptr_void((void *)a0, (unsigned int)a1);
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
 ptr_const((unsigned int *)a0);
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
 ptr_const_ptr((unsigned int *)a0);
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
 ptr_func_simple(a0, a1);
 return;
}


// Function: ptr_func_simple at 0x401f90
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return ((long long (*)())a0)();
}


// Function: sub_401f97 at 0x401f97
void sub_401f97(unsigned long a0, unsigned long a1)
{
 ptr_func_complex((unsigned long long *)a0, a1);
 return;
}


// Function: ptr_func_complex at 0x401fa0
extern unsigned long long g_404de0;

long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 unsigned long long v0;

 v0 = g_404de0;
 return (long long)((unsigned long long (*)())a0)();
}


// Function: sub_401fc2 at 0x401fc2
void sub_401fc2(unsigned long a0)
{
 ptr_cast((unsigned int *)a0);
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
 opaque_handle_create((unsigned int)a0);
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
 opaque_handle_op((unsigned int)a0);
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
char g_40361b[] = "Pointer Types Test";

int test_pointer_types()
{
 puts(&g_40361b);
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
 struct_simple((unsigned int *)a0);
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
 struct_array((unsigned int *)a0, (unsigned int)a1);
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
 struct_nested((unsigned int *)a0);
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
 struct_deep((unsigned int *)a0);
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
 struct_with_ptr((struct_0 *)a0);
 return;
}


// Function: struct_with_ptr at 0x4021c0
int struct_with_ptr(struct_0 *a0)
{
 if (!a0->field_8)
 return 0 + a0->field_0;
 return a0->field_8->field_0 + a0->field_0;
}


// Function: sub_4021d5 at 0x4021d5
void sub_4021d5(unsigned long a0)
{
 struct_bitfields((unsigned short *)a0);
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
 union_type((void *)a0, (unsigned int)a1);
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
 union_array(a0, (unsigned int)a1);
 return;
}


// Function: union_array at 0x402230
unsigned long long union_array(unsigned long ptr, unsigned int a1)
{
 unsigned long long sum = 0;
 unsigned int i;
 if (a1 <= 0)
 return 0;
 for (i = 0; i < a1; i++)
 {
 sum += *((int *)(ptr + i * 4));
 }
 return sum;
}


// Function: sub_40234d at 0x40234d
void sub_40234d(unsigned long a0)
{
 enum_type((unsigned int)a0);
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
 enum_switch((unsigned int)a0);
 return;
}


// Function: enum_switch at 0x402360
unsigned int g_403040[4] = {10, 20, 30, 50};

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
 struct_func_ptr((struct_0 *)a0);
 return;
}


// Function: struct_func_ptr at 0x402380
long long struct_func_ptr(struct_0 *a0)
{
 return ((long long (*)())a0->field_8)();
}


// Function: sub_402388 at 0x402388
void sub_402388(unsigned long a0)
{
 linked_list((struct_0 *)a0);
 return;
}


// Function: linked_list at 0x402390
unsigned long long linked_list(struct_0 *ptr)
{
 unsigned long long v1;

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
 doubly_linked_list((struct_0 *)a0);
 return;
}


// Function: doubly_linked_list at 0x4023b0
unsigned long long doubly_linked_list(struct_0 *ptr)
{
 unsigned long long v1;

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
 binary_tree_sum((struct_0 *)a0);
 return;
}


// Function: binary_tree_sum at 0x4023d0
unsigned int binary_tree_sum(struct_0 *a0)
{
 unsigned int sum;

 if (!a0)
 return 0;
 sum = a0->field_0;
 sum += binary_tree_sum(a0->left);
 sum += binary_tree_sum(a0->right);
 return sum;
}


// Function: sub_402405 at 0x402405
void sub_402405(void *a0)
{
 binary_tree(a0);
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
 graph_traverse((struct_1 *)a0);
 return;
}


// Function: graph_traverse at 0x402420
unsigned long long graph_traverse(struct_1 *ptr)
{
 unsigned int result;
 unsigned long long v3;
 unsigned long long idx;
 struct_0 *node;

 result = ptr->field_50;
 if (result <= 0)
 return 0;
 v3 = 0;
 idx = 0;
 while (idx < result)
 {
 node = ptr->field_0;
 while (node)
 {
 v3 += node->field_0;
 node = node->field_8;
 }
 idx++;
 }
 return v3;
}


// Function: sub_402449 at 0x402449
void sub_402449()
{
}


// Function: test_composite_types at 0x4024c0
char g_403636[] = "Composite Types Test";

int test_composite_types()
{
 unsigned int v16; // ebx
 struct_0 *ptr; // rax
 unsigned int v19; // ebp
 struct_1 *p; // rax
 struct_0 v0; // [bp-0x88]
 char *v1; // [bp-0x80]
 struct_0 v2; // [bp-0x78]
 char *v3; // [bp-0x70]
 struct_0 v4; // [bp-0x68]
 unsigned long long flag2; // [bp-0x60]
 struct_1 v7; // [bp-0x58]
 char *v8; // [bp-0x50]
 unsigned long long result; // [bp-0x48]
 unsigned int v10; // [bp-0x40]
 unsigned long long flag1; // [bp-0x38]
 char *v12; // [bp-0x30]
 int v13; // [bp-0x28]
 unsigned long long flag3; // [bp-0x18]

 puts(&g_403636);
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
 ptr = &v0;
 v0.field_0 = 10;
 v1 = (char*)&v2;
 v2.field_0 = 20;
 v3 = (char*)&v4;
 v4.field_0 = 30;
 flag2 = 0;
 do
 {
 v16 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr && ptr->field_8);
 v19 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v16);
 p = &v7;
 v7.field_0 = (struct_0*)((unsigned long)10);
 result = 0;
 v10 = 20;
 flag1 = 0;
 v12 = (char*)&v7;
 v8 = (char*)&v10;
 do
 {
 v19 += (unsigned long)p->field_0;
 p = (struct_1*)((char*)p + 8);
 } while (p && (char*)p < (char*)&v10);
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


