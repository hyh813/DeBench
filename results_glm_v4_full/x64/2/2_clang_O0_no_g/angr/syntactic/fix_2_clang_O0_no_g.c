// Angr Decompilation of 2_clang_O0_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

/* Forward declarations and stubs for CRT functions */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Global string constants for printf format strings */
char g_403150[] = "\n";
char g_4032bc[] = "\n";
char g_4033d9[] = "\n";
char g_4030fc[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
char g_403573[] = "\n";

/* Forward declarations for all functions */
int process_char(char a0);
short process_short(unsigned short a0, unsigned short a1);
int process_int(unsigned int a0);
unsigned long long process_long(unsigned long a0);
long long process_ll(unsigned long a0);
double process_float(void);
double process_double(void);
long double process_ld(void);
char process_bool(unsigned int a0);
int const_param(unsigned int *a0);
int volatile_access(unsigned int *ptr);
int test_data_types_l1(void);
unsigned int array_1d_stack(unsigned long ptr, unsigned int a1);
unsigned int array_string(char *a0);
unsigned int array_2d_stack(unsigned long a0);
unsigned int array_3d(unsigned long a0);
unsigned int array_vla(unsigned int a0, unsigned long ptr);
unsigned int array_pointer(unsigned long ptr, unsigned int a1);
unsigned int pointer_array(unsigned long a0, unsigned int a1);
unsigned int array_complex_index(unsigned long ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int array_oob(unsigned long ptr, unsigned int a1);
int test_array_types(void);
int ptr_single(unsigned int *a0);
int ptr_double(void **a0);
int ptr_triple(void **a0);
unsigned int ptr_increment(unsigned int *a0, unsigned int a1);
int ptr_offset(unsigned long a0, unsigned int a1);
unsigned long long ptr_diff(unsigned long a0, unsigned long a1);
unsigned int ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
long long ptr_func_simple(unsigned long long *a0, unsigned int a1);
long long ptr_func_complex(unsigned long long *a0, unsigned long a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int test_pointer_types(void);
unsigned int double_value(unsigned int a0);
unsigned long long complex_callback(unsigned long *ptr, unsigned long *a1);
int struct_simple(unsigned int *a0);
unsigned int struct_array(unsigned long ptr, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
int struct_with_ptr(struct_0 *ptr);
short struct_bitfields(unsigned short *a0);
unsigned int union_type(void *a0, unsigned int a1);
unsigned int union_array(unsigned long ptr, unsigned int a1);
unsigned int enum_type(unsigned int a0);
long long enum_switch(unsigned int a0);
long long struct_func_ptr(struct_0 *a0);
unsigned int linked_list(void *a0);
unsigned int doubly_linked_list(struct_1 *a0);
unsigned int binary_tree_sum(struct_1 *a0);
int binary_tree(struct_1 *a0);
unsigned int graph_traverse(void **ptr, unsigned long *a1);
int test_composite_types(void);
unsigned int main(void);

/* Common struct definitions used throughout the code */
typedef struct struct_0 {
    unsigned int field_0;
    void *field_8;
    void *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    struct struct_1 *field_8;
    struct struct_1 *field_10;
} struct_1;

typedef struct struct_2 {
    struct struct_1 *field_0;
} struct_2;

typedef struct struct_3 {
    char field_0;
} struct_3;

/* CRT stub function _init removed by preprocessor */

struct_0 *g_405fe0 = 0;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe0;
 if (g_405fe0)
 v1 = (unsigned long long *)((unsigned long long (*)())g_405fe0)();
 return v1;
}


// Function: sub_401020 at 0x401020
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 ((void (*)())g_406010)();
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 const char *v1; // rdi

 v1 = "";
 return printf("%s", v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401095 at 0x401095
void sub_401095()
{
 __builtin_trap();
}


// Function: sub_401096 at 0x401096
void sub_401096()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010c9 at 0x4010c9
void sub_4010c9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401109 at 0x401109
void sub_401109()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401159 at 0x401159
void sub_401159(char a0)
{
 process_char(a0);
 return;
}


// Function: process_char at 0x401160
int process_char(char a0)
{
 char v0; // [bp-0x9]

 if (a0 >= 65 && a0 <= 90)
 {
 v0 = a0 + 32;
 return v0;
 }
 v0 = a0;
 return v0;
}


// Function: sub_40119f at 0x40119f
void sub_40119f(unsigned short a0, unsigned short a1)
{
 process_short(a0, a1);
 return;
}


// Function: process_short at 0x4011a0
short process_short(unsigned short a0, unsigned short a1)
{
 return a0 + a1;
}


// Function: sub_4011bf at 0x4011bf
void sub_4011bf(unsigned long a0)
{
 process_int((unsigned int)a0);
 return;
}


// Function: process_int at 0x4011c0
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_4011d2 at 0x4011d2
void sub_4011d2(unsigned long a0)
{
 process_long(a0);
 return;
}


// Function: process_long at 0x4011e0
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: sub_4011f2 at 0x4011f2
void sub_4011f2(unsigned long a0)
{
 process_ll(a0);
 return;
}


// Function: process_ll at 0x401200
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: sub_401213 at 0x401213
void sub_401213()
{
 process_float();
 return;
}


// Function: process_float at 0x401220
double process_float()
{
 unsigned int v1; // ymm0

 v1 = 10;
 return (double)((0.5 * (double)v1) + 0.5);
}


// Function: sub_401248 at 0x401248
void sub_401248()
{
 process_double();
 return;
}


// Function: process_double at 0x401250
double process_double()
{
 unsigned long v1; // xmm0lq

 v1 = 20;
 return (double)((v1 / 2.0) + 0.5);
}


// Function: sub_401278 at 0x401278
void sub_401278()
{
 process_ld();
 return;
}


// Function: process_ld at 0x401280
long double process_ld()
{
 return 1.5L;
}


// Function: sub_401295 at 0x401295
void sub_401295(unsigned long a0)
{
 process_bool((unsigned int)a0);
 return;
}


// Function: process_bool at 0x4012a0
char process_bool(unsigned int a0)
{
 char v0; // [bp-0xd]
 unsigned int i;
 unsigned int bit_count;

 v0 = 0;
 if (a0 > 0)
 {
 bit_count = 0;
 for (i = 0; i < 32; i++)
 {
 if (a0 & (1U << i))
 bit_count ^= 1;
 }
 v0 = bit_count;
 }
 return v0 & 1;
}


// Function: sub_4012d4 at 0x4012d4
void sub_4012d4(unsigned long a0)
{
 const_param((unsigned int *)a0);
 return;
}


// Function: const_param at 0x4012e0
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_4012f3 at 0x4012f3
void sub_4012f3(unsigned long a0)
{
 volatile_access((unsigned int *)a0);
 return;
}


// Function: volatile_access at 0x401300
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = *(ptr);
 v0 = *(ptr);
 return v1 + v0;
}


// Function: sub_401322 at 0x401322
void sub_401322()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x401330
int test_data_types_l1()
{
 unsigned long v9; // rsi
 unsigned int v0[1]; // [bp-0x10]
 unsigned int v1[1]; // [bp-0xc]

 printf(g_403150);
 printf("DT-L1-01 (process_char): %c\n", process_char(65) & 4294967295);
 printf("DT-L1-01 (process_char): %c\n", process_char(98) & 4294967295);
 printf("DT-L1-02 (process_short): %d\n", process_short(100, 200) & 4294967295);
 printf("DT-L1-03 (process_int): %d\n", process_int(5) & 4294967295);
 printf("DT-L1-04 (process_long): %llu\n", process_long(100));
 printf("DT-L1-05 (process_ll): %lld\n", process_ll(100));
 v9 = (unsigned long)process_float();
 printf("DT-L1-06 (process_float): %.2f\n", (double)v9);
 v9 = (unsigned long)process_double();
 printf("DT-L1-07 (process_double): %.2f\n", (double)v9);
 v9 = (unsigned long)process_ld();
 printf("DT-L1-08 (process_ld): %.2Lf\n", (long double)v9);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4) & 1);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(3) & 1);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4294967294) & 1);
 v1[0] = 5;
 printf("DT-L1-10 (const_param): %d\n", const_param(v1) & 4294967295);
 v0[0] = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", volatile_access(v0) & 4294967295);
}


// Function: sub_4014e6 at 0x4014e6
void sub_4014e6(unsigned long a0, unsigned long a1)
{
 array_1d_stack(a0, (unsigned int)a1);
 return;
}


// Function: array_1d_stack at 0x4014f0
unsigned int array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: sub_401539 at 0x401539
void sub_401539(unsigned long a0)
{
 array_string((char *)a0);
 return;
}


// Function: array_string at 0x401540
unsigned int array_string(char *a0)
{
 unsigned int i; // [bp-0x14]

 for (i = 0; a0[i]; i += 1);
 return i;
}


// Function: sub_401577 at 0x401577
void sub_401577(unsigned long a0)
{
 array_2d_stack(a0);
 return;
}


// Function: array_2d_stack at 0x401580
unsigned int array_2d_stack(unsigned long a0)
{
 unsigned int i; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = 0;
 for (i = 0; i < 10; i += 1)
 {
 v1 += *((int *)(a0 + i * 40 + i * 4));
 }
 return v1;
}


// Function: sub_4015cf at 0x4015cf
void sub_4015cf(unsigned long a0)
{
 array_3d(a0);
 return;
}


// Function: array_3d at 0x4015d0
unsigned int array_3d(unsigned long a0)
{
 unsigned int k; // [bp-0x20]
 unsigned int j; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]

 v3 = 0;
 for (v2 = 0; v2 < 5; v2 += 1)
 {
 for (j = 0; j < 5; j += 1)
 {
 for (k = 0; k < 5; k += 1)
 {
 v3 += *((int *)(a0 + v2 * 100 + j * 20 + k * 4));
 }
 }
 }
 return v3;
}


// Function: sub_401672 at 0x401672
void sub_401672(unsigned long a0, unsigned long a1)
{
 array_vla((unsigned int)a0, a1);
 return;
}


// Function: array_vla at 0x401680
unsigned int array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned int i; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]

 v1 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: sub_4016c9 at 0x4016c9
void sub_4016c9(unsigned long a0, unsigned long a1)
{
 array_pointer(a0, (unsigned int)a1);
 return;
}


// Function: array_pointer at 0x4016d0
unsigned int array_pointer(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *((int *)(ptr + i * 40));
 }
 return v1;
}


// Function: sub_40171f at 0x40171f
void sub_40171f(unsigned long a0, unsigned long a1)
{
 pointer_array(a0, (unsigned int)a1);
 return;
}


// Function: pointer_array at 0x401720
unsigned int pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x24]
 unsigned int i; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]

 v3 = 0;
 v0 = (a1 < 10 ? a1 : 10);
 v2 = v0;
 for (i = 0; i < v2; i += 1)
 {
 if (*((long long *)(a0 + i * 8)))
 v3 += *((int *)*((long long *)(a0 + i * 8)));
 }
 return v3;
}


// Function: sub_4017ac at 0x4017ac
void sub_4017ac(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 array_complex_index(a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4);
 return;
}


// Function: array_complex_index at 0x4017b0
unsigned int array_complex_index(unsigned long ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // [bp-0xc]

 if (a3 >= 0 && a3 < a1 && a4 >= 0 && a4 < a2)
 {
 v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_401819 at 0x401819
void sub_401819(unsigned long a0, unsigned long a1)
{
 array_oob(a0, (unsigned int)a1);
 return;
}


// Function: array_oob at 0x401820
unsigned int array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 for (i = 0; i <= a1; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: sub_401869 at 0x401869
void sub_401869()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x401870
int test_array_types()
{
 char *l; // [bp-0x578]
 char *v1; // [bp-0x570]
 char *ptr; // [bp-0x568]
 unsigned int v3; // [bp-0x560]
 unsigned int m; // [bp-0x55c]
 unsigned long v5; // [bp-0x558]
 char *v6; // [bp-0x508]
 char *v7; // [bp-0x500]
 char *v8; // [bp-0x4f8]
 unsigned long long result; // [bp-0x4f0]
 unsigned int v11; // [bp-0x4b8]
 unsigned int v12; // [bp-0x4b4]
 unsigned int v13; // [bp-0x4b0]
 unsigned int k; // [bp-0x4ac]
 unsigned long v15; // [bp-0x4a8]
 unsigned long v16; // [bp-0x3e0]
 unsigned int v17; // [bp-0x3d8]
 unsigned int i1; // [bp-0x3d4]
 unsigned int i0; // [bp-0x3d0]
 unsigned int j; // [bp-0x3cc]
 unsigned long v21; // [bp-0x3c8]
 unsigned int n; // [bp-0x1d0]
 unsigned int i; // [bp-0x1cc]
 unsigned long v24; // [bp-0x1c8]
 char v25[6]; // [bp-0x2e]
 unsigned long v26; // [bp-0x28]
 unsigned long long v27; // [bp-0x20]
 unsigned int v28; // [bp-0x18]
 unsigned int v10; // [bp-0x14]

 printf(g_4032bc);
 v26 = 8589934593;
 v27 = 17179869187;
 v28 = 5;
 printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&v26, 5) & 4294967295);
 strncpy(v25, "hello", 5);
 printf("ARR-L1-02 (array_string): %d\n", array_string(&v25) & 4294967295);
 for (i = 0; i < 10; i += 1)
 {
 for (n = 0; n < 10; n += 1)
 {
 v3 = (i == n ? i : 0);
 *((unsigned int *)((char *)&(&v24)[5 * i] + 4 * n)) = v3;
 }
 }
 printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v24) & 4294967295);
 for (j = 0; j < 5; j += 1)
 {
 for (i0 = 0; i0 < 5; i0 += 1)
 {
 for (i1 = 0; i1 < 5; i1 += 1)
 {
 *((unsigned int *)((char *)&v21 + 100 * j + 20 * i0 + 4 * i1)) = 1;
 }
 }
 }
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v21) & 4294967295);
 v16 = 85899345930;
 v17 = 30;
 printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, &v16) & 4294967295);
 for (k = 0; k < 5; k += 1)
 {
 *((unsigned int *)&(&v15)[5 * k]) = k * 10;
 }
 printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(&v15, 5) & 4294967295);
v13 = 10;
v12 = 20;
v11 = 30;
v6 = (char *)&v13;
v7 = (char *)&v12;
v8 = (char *)&v11;
 result = 0;
 v1 = (char *)&v11;
 ptr = (char *)&v10;
 do
 {
 *((unsigned long *)ptr) = 0;
 l = ptr + 8;
 ptr = l;
 } while (l != v1);
 printf("ARR-L2-03 (pointer_array): %d\n", pointer_array((void **)&v6, 3) & 4294967295);
 for (m = 0; m < 20; m += 1)
 {
 *((unsigned int *)((char *)&v5 + 4 * m)) = m;
 }
 return printf("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(&v5, 5, 4, 2, 3) & 4294967295);
}


// Function: sub_401c85 at 0x401c85
void sub_401c85(unsigned long a0)
{
 ptr_single((unsigned int *)a0);
 return;
}


// Function: ptr_single at 0x401c90
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401ca3 at 0x401ca3
void sub_401ca3(unsigned long a0)
{
 ptr_double((struct_0 **)a0);
 return;
}


// Function: ptr_double at 0x401cb0
int ptr_double(void **a0)
{
 return ((struct_0 *)(*a0))->field_0 + 5;
}


// Function: sub_401cc6 at 0x401cc6
void sub_401cc6(unsigned long a0)
{
 ptr_triple((struct_1 **)a0);
 return;
}


// Function: ptr_triple at 0x401cd0
int ptr_triple(void **a0)
{
 return ((struct_1 *)(*a0))->field_8->field_0 + 1;
}


// Function: sub_401ce9 at 0x401ce9
void sub_401ce9(unsigned long a0, unsigned long a1)
{
 ptr_increment((unsigned int *)a0, (unsigned int)a1);
 return;
}


// Function: ptr_increment at 0x401cf0
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int *cur; // [bp-0x10]

 cur = a0;
 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *(cur);
 cur += 1;
 }
 return v1;
}


// Function: ptr_offset at 0x401d40
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401d58 at 0x401d58
void sub_401d58(unsigned long a0, unsigned long a1)
{
 ptr_diff(a0, a1);
 return;
}


// Function: ptr_diff at 0x401d60
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return (a0 - a1) >> 2;
}


// Function: sub_401d7d at 0x401d7d
void sub_401d7d(unsigned long a0, unsigned long a1)
{
 ptr_void((void *)a0, (unsigned int)a1);
 return;
}


// Function: ptr_void at 0x401d80
unsigned int ptr_void(void* a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!a1 ? *((int *)a0) : (a1 == 1 ? *((char *)a0) : 4294967295));
 return v0;
}


// Function: sub_401dcd at 0x401dcd
void sub_401dcd(unsigned long a0)
{
 ptr_const((unsigned int *)a0);
 return;
}


// Function: ptr_const at 0x401dd0
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401de6 at 0x401de6
void sub_401de6(unsigned long a0)
{
 ptr_const_ptr((unsigned int *)a0);
 return;
}


// Function: ptr_const_ptr at 0x401df0
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Function: sub_401e0f at 0x401e0f
void sub_401e0f(unsigned long a0, unsigned long a1)
{
 ptr_func_simple((unsigned long long *)a0, (unsigned int)a1);
 return;
}


// Function: ptr_func_simple at 0x401e10
long long ptr_func_simple(unsigned long long *a0, unsigned int a1)
{
 return ((long long (*)(unsigned int))(*a0))(a1);
}


// Function: sub_401e2e at 0x401e2e
void sub_401e2e(unsigned long a0, unsigned long a1)
{
 ptr_func_complex((unsigned long long *)a0, a1);
 return;
}


// Function: ptr_func_complex at 0x401e30
unsigned long long g_405dd0 = 0;
unsigned long long g_405dd8 = 0;

long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 unsigned long v0; // [bp-0x28]
 unsigned long v1; // [bp-0x20]

 v0 = g_405dd0;
 v1 = g_405dd8;
 return ((long long (*)(unsigned long, unsigned long *))(*a0))(a1, &v0);
}


// Function: sub_401e6a at 0x401e6a
void sub_401e6a(unsigned long a0)
{
 ptr_cast((unsigned int *)a0);
 return;
}


// Function: ptr_cast at 0x401e70
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401e98 at 0x401e98
void sub_401e98(unsigned long a0)
{
 opaque_handle_create((unsigned int)a0);
 return;
}


// Function: opaque_handle_create at 0x401ea0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401ead at 0x401ead
void sub_401ead(unsigned long a0)
{
 opaque_handle_op((unsigned int)a0);
 return;
}


// Function: opaque_handle_op at 0x401eb0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401ec1 at 0x401ec1
void sub_401ec1()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x401ed0
int test_pointer_types()
{
 unsigned long long v0; // [bp-0xb8]
 unsigned int v1[1]; // [bp-0xb0]
 unsigned int v2; // [bp-0xac]
 unsigned int v3[1]; // [bp-0xa8]
 unsigned int v4[1]; // [bp-0xa4]
 char v5; // [bp-0x9d]
 unsigned int v6; // [bp-0x9c]
 unsigned long v7; // [bp-0x98]
 unsigned long long v8; // [bp-0x90]
 unsigned int v9; // [bp-0x88]
 unsigned long v10; // [bp-0x78]
 unsigned long long v11; // [bp-0x70]
 unsigned int v12; // [bp-0x68]
 unsigned int v13[2]; // [bp-0x58]
 unsigned long long v14; // [bp-0x50]
 unsigned int v15; // [bp-0x48]
 void **v16; // [bp-0x40]
 void **v17; // [bp-0x38]
 void *v18; // [bp-0x30]
 unsigned int v19; // [bp-0x24]
struct_0 **v20; // [bp-0x20]
char *v21; // [bp-0x18]
 unsigned int v22; // [bp-0x10]
 unsigned int v23[1]; // [bp-0xc]

 printf(g_4033d9);
 v23[0] = 5;
 printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(&v23) & 4294967295);
 v22 = 10;
 v21 = (char *)&v22;
 v20 = (struct_0 **)&v21;
 printf("PTR-L2-02 (ptr_double): %d\n", ptr_double((struct_0 **)v20) & 4294967295);
 v19 = 5;
 v18 = (char *)&v19;
 v17 = (void **)&v18;
 v16 = (void **)&v17;
 printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple((struct_1 **)v16) & 4294967295);
 *(&v13) = 8589934593;
 v14 = 17179869187;
 v15 = 5;
 printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&v13, 5) & 4294967295);
 v10 = 85899345930;
 v11 = 171798691870;
 v12 = 50;
 printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(&v10, 2) & 4294967295);
 v7 = 0xa00000000;
 v8 = 128849018900;
 v9 = 40;
 printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&v9, &v7) & 4294967295);
 v6 = 42;
 v5 = 65;
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v6, 0) & 4294967295);
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v5, 1) & 4294967295);
 v4[0] = 10;
 printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(&v4) & 4294967295);
 v3[0] = 10;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&v3) & 4294967295);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple((unsigned long long *)&double_value, 5) & 4294967295);
 v2 = 5;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex((unsigned long long *)&complex_callback, (unsigned long)v2) & 4294967295);
 v1[0] = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&v1) & 4294967295);
 v0 = opaque_handle_create(10);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(v0) & 4294967295);
}


// Function: sub_40217d at 0x40217d
void sub_40217d(unsigned long a0)
{
 double_value((unsigned int)a0);
 return;
}


// Function: double_value at 0x402180
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40218f at 0x40218f
void sub_40218f(unsigned long a0, unsigned long a1)
{
 complex_callback((unsigned long *)a0, (unsigned long *)a1);
 return;
}


// Function: complex_callback at 0x402190
unsigned long long complex_callback(unsigned long *ptr, unsigned long *a1)
{
 *(ptr) = *(ptr) + 10;
 if (!*(a1))
 return 0;
 return 1;
}


// Function: sub_4021c2 at 0x4021c2
void sub_4021c2(unsigned long a0)
{
 struct_simple((unsigned int *)a0);
 return;
}


// Function: struct_simple at 0x4021d0
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: sub_4021ee at 0x4021ee
void sub_4021ee(unsigned long a0, unsigned long a1)
{
 struct_array(a0, (unsigned int)a1);
 return;
}


// Function: struct_array at 0x4021f0
unsigned int struct_array(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *((int *)(ptr + i * 12)) + *((int *)(ptr + i * 12 + 4)) + *((int *)(ptr + i * 12 + 8));
 }
 return v1;
}


// Function: sub_402263 at 0x402263
void sub_402263(unsigned long a0)
{
 struct_nested((unsigned int *)a0);
 return;
}


// Function: struct_nested at 0x402270
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: sub_402287 at 0x402287
void sub_402287(unsigned long a0)
{
 struct_deep((unsigned int *)a0);
 return;
}


// Function: struct_deep at 0x402290
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: sub_4022a8 at 0x4022a8
void sub_4022a8(unsigned long a0)
{
 struct_with_ptr((struct_0 *)a0);
 return;
}


// Function: struct_with_ptr at 0x4022b0
int struct_with_ptr(struct_0 *ptr)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = ptr->field_0;
 v0 = (!ptr->field_8 ? 0 : ptr->field_8->field_0);
 return v1 + v0;
}


// Function: sub_4022f6 at 0x4022f6
void sub_4022f6(unsigned long a0)
{
 struct_bitfields((unsigned short *)a0);
 return;
}


// Function: struct_bitfields at 0x402300
short struct_bitfields(unsigned short *a0)
{
 return (*(a0) & 1) + (*(a0) >> 1 & 3) + (*(a0) >> 3 & 7) + (*(a0) >> 6);
}


// Function: union_type at 0x402350
unsigned int union_type(void *a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!a1 ? *((int *)a0) : (a1 == 1 ? (unsigned int)*((int *)a0) : *((char *)a0)));
 return v0;
}


// Function: sub_40239c at 0x40239c
void sub_40239c(unsigned long a0, unsigned long a1)
{
 union_array(a0, (unsigned int)a1);
 return;
}


// Function: union_array at 0x4023a0
unsigned int union_array(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: sub_4023e9 at 0x4023e9
void sub_4023e9(unsigned long a0)
{
 enum_type((unsigned int)a0);
 return;
}


// Function: enum_type at 0x4023f0
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_4023fd at 0x4023fd
void sub_4023fd(unsigned long a0)
{
 enum_switch((unsigned int)a0);
 return;
}


// Function: enum_switch at 0x402400
unsigned int g_403040[4] = {0, 0, 0, 0};

long long enum_switch(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 if (a0 > 3)
 {
 v0 = 4294967197;
 return v0;
 }
 v0 = g_403040[a0];
 return v0;
}


// Function: sub_402468 at 0x402468
void sub_402468(unsigned long a0)
{
 struct_func_ptr((struct_0 *)a0);
 return;
}


// Function: struct_func_ptr at 0x402470
long long struct_func_ptr(struct_0 *a0)
{
 unsigned int v0;
 void (*v1)(unsigned int);
 v0 = (unsigned int)(unsigned long)a0;
 v1 = (void (*)(unsigned int))((unsigned long)a0 >> 32);
 return ((long long (*)(unsigned int))v1)(v0);
}


// Function: sub_402492 at 0x402492
void sub_402492(unsigned long a0)
{
 linked_list((void *)a0);
 return;
}


// Function: linked_list at 0x4024a0
unsigned int linked_list(void *a0)
{
 struct_0 *cur; // [bp-0x20]
 unsigned int v1; // [bp-0x14]

 v1 = 0;
 cur = (struct_0 *)a0;
 for (; cur; cur = cur->field_8)
 {
 v1 += cur->field_0;
 }
 return v1;
}


// Function: sub_4024e4 at 0x4024e4
void sub_4024e4(unsigned long a0)
{
 doubly_linked_list((struct_1 *)a0);
 return;
}


// Function: doubly_linked_list at 0x4024f0
unsigned int doubly_linked_list(struct_1 *a0)
{
 struct_1 *cur;
 unsigned int v1;

 v1 = 0;
 cur = a0;
 for (; cur; cur = cur->field_10)
 {
 v1 += cur->field_0;
 }
 return v1;
}


// Function: sub_402534 at 0x402534
void sub_402534(unsigned long a0)
{
 binary_tree_sum((struct_1 *)a0);
 return;
}


// Function: binary_tree_sum at 0x402540
unsigned int binary_tree_sum(struct_1 *ptr)
{
 unsigned int v2;

 if (ptr)
 {
 v2 = ptr->field_0 + binary_tree_sum(ptr->field_8);
 v2 += binary_tree_sum(ptr->field_10);
 return v2;
 }
 return 0;
}


// Function: sub_4025a3 at 0x4025a3
void sub_4025a3(unsigned long a0)
{
 binary_tree((struct_1 *)a0);
 return;
}


// Function: binary_tree at 0x4025b0
int binary_tree(struct_1 *a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_4025cb at 0x4025cb
void sub_4025cb(unsigned long a0)
{
 graph_traverse((struct_0 **)a0, (unsigned long *)((char *)a0 + 8));
 return;
}


// Function: graph_traverse at 0x4025d0
unsigned int graph_traverse(void **ptr, unsigned long *a1)
{
 unsigned long cur;
 unsigned int i;
 unsigned int v2;

 v2 = 0;
 for (i = 0; i < (int)*(a1); i += 1)
 {
 for (cur = (unsigned long)ptr[i]; cur; cur = *((unsigned long *)(cur + 8)))
 {
 v2 += (unsigned int)cur;
 }
 }
 return v2;
}


// Function: sub_402646 at 0x402646
void sub_402646()
{
 test_composite_types();
 return;
}


// Function: test_composite_types at 0x402650
unsigned long long g_405de0 = 0;
unsigned long long g_405de8 = 0;

int test_composite_types()
{
 char *v1; // [bp-0x1b8]
 char *v2; // [bp-0x1b0]
 unsigned long v3; // [bp-0x168]
 unsigned long graph_result; // [bp-0x160]
 unsigned int result; // [bp-0x158]
 unsigned long long flag1; // [bp-0x158]
 char *graph_buf; // [bp-0x150]
 unsigned long v6; // [bp-0x150]
 unsigned long long flag6; // [bp-0x148]
 unsigned long long flag7; // [bp-0x140]
 unsigned int v9; // [bp-0x138]
 char *v10; // [bp-0x130]
 unsigned int v13; // [bp-0x120]
 unsigned long long flag4; // [bp-0x118]
 unsigned long long flag5; // [bp-0x110]
 char *v15; // [bp-0x110]
 unsigned int v16; // [bp-0x108]
 char *v17; // [bp-0x100]
 unsigned int v18; // [bp-0xf8]
 char *v19; // [bp-0xf0]
 unsigned int v20; // [bp-0xe8]
 unsigned long long flag3; // [bp-0xe0]
 unsigned long v22; // [bp-0xd0]
 unsigned long v23; // [bp-0xc8]
 unsigned long v24; // [bp-0xc0]
 unsigned int v25; // [bp-0xb8]
 unsigned int v26; // [bp-0xb0]
 unsigned short v27[4]; // [bp-0xa8]
 unsigned int v28; // [bp-0xa0]
 char *v29; // [bp-0x98]
 unsigned long v30; // [bp-0x90]
 unsigned long long flag2; // [bp-0x88]
 char v32; // [bp-0x80]
 unsigned int v33[2]; // [bp-0x50]
 unsigned long long v34; // [bp-0x48]
 unsigned int v35; // [bp-0x40]
 unsigned long v36; // [bp-0x38]
 unsigned long long v37; // [bp-0x30]
 unsigned long long v38; // [bp-0x28]
 unsigned int v39[2]; // [bp-0x18]
 unsigned int v40; // [bp-0x10]

 printf(g_403573);
 v39[0] = 8589934593;
 v40 = 3;
 printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&v39) & 4294967295);
v36 = 4294967297;
	v37 = 8589934593;
	v38 = 8589934594;
 printf("CMP-L2-02 (struct_array): %d\n", struct_array(&v36, 2) & 4294967295);
 v33[0] = 42949672965;
 v34 = 0x6400000000;
 v35 = 200;
 printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&v33) & 4294967295);
 memcpy(&v32, &g_4030fc, 48);
 printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(&v32) & 4294967295);
 v30 = 20;
 flag2 = 0;
 v28 = 10;
 v29 = (char *)&v30;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr((struct_0 *)&v28) & 4294967295);
 v27[0] = 6429;
 printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v27) & 4294967295);
 v26 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n", union_type(&v26, 0) & 4294967295);
 v24 = 85899345930;
 v25 = 30;
 printf("CMP-L2-08 (union_array): %d\n", union_array(&v24, 3) & 4294967295);
 printf("CMP-L2-09 (enum_type): %d\n", enum_type(1) & 4294967295);
 printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(2) & 4294967295);
 v22 = 0;
 v23 = 0;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr((struct_0 *)&v22) & 4294967295);
 v16 = 10;
 v17 = (void *)&v18;
 v18 = 20;
 v19 = (void *)&v20;
 v20 = 30;
 printf("CMP-L2-12 (linked_list): %d\n", linked_list(&v16) & 4294967295);
v9 = 10;
 v10 = (char *)&v13;
 v13 = 20;
 v15 = (char *)&v9;
 v10 = (char *)&v13;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v9) & 4294967295);
 v6 = 100;
 flag6 = 0;
 flag7 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree((struct_1 *)&v6) & 4294967295);
 result = 1;
 memset(&v2, 0, 88);
 v1 = (char *)&v2;
 v3 = 2;
 v2 = (char *)&v2;
 return printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v2, &v3) & 4294967295);
}


// Function: sub_402a24 at 0x402a24
void sub_402a24()
{
 main();
 return;
}


// Function: main at 0x402a30
unsigned int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


