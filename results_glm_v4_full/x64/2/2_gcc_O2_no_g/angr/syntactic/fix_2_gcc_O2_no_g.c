// Angr Decompilation of 2_gcc_O2_no_g
// Platform: AMD64

#include <stddef.h>
#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */

/* Forward declarations */
struct struct_0;
struct struct_1;
struct struct_2;
struct struct_3;
struct struct_4;
struct struct_5;
struct struct_6;
struct struct_7;
struct struct_8;
struct struct_12;

/* Complete struct definitions needed before use */
typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
 struct struct_1 *field_10;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
 struct struct_2 *field_10;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_12 *field_8;
 struct struct_3 *field_10;
} struct_3;

typedef struct struct_12 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_11 *field_8;
 struct struct_12 *field_10;
} struct_12;

typedef struct struct_7 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_6 *field_8;
 struct struct_7 *field_10;
} struct_7;

typedef struct struct_8 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_7 *field_8;
 struct struct_8 *field_10;
} struct_8;

extern struct struct_0 *g_405fe8;

/* Common struct definitions used across functions */
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_0 *field_10;
} struct_0;



typedef struct struct_binary_tree {
 unsigned int field_0;
 char padding_4[4];
 void* field_8;
 struct struct_binary_tree *field_10;
} struct_binary_tree;

/* Function forward declarations to resolve implicit declaration conflicts */
void __cxa_finalize(void *dso_handle);
long long process_char(unsigned int a0);
long long process_long(unsigned long a0);
long long process_ll(unsigned long a0);
float process_float(void);
float process_double(void);
unsigned long long process_bool(unsigned int a0);
unsigned int volatile_access(unsigned int *a0);
unsigned long long array_1d_stack(unsigned int *a0, unsigned int a1);
unsigned long long array_string(char *a0);
unsigned long long array_2d_stack(unsigned int *a0);
unsigned long long array_3d(unsigned int *a0);
unsigned long long array_vla(unsigned int a0, unsigned int *a1);
unsigned long long array_pointer(unsigned int *a0, unsigned int a1);
unsigned long long pointer_array(unsigned long a0, unsigned int a1);
unsigned long long array_complex_index(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4);
unsigned long long array_oob(unsigned int *a0, unsigned int a1);
int ptr_single(unsigned int *a0);
int ptr_double(struct struct_0 **a0);
int ptr_triple(struct struct_1 **a0);
unsigned long long ptr_increment(unsigned int *a0, unsigned int a1);
int ptr_offset(unsigned long a0, unsigned int a1);
int ptr_diff(unsigned long a0, unsigned long a1);
unsigned long long ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
long long ptr_func_simple(unsigned long a0, unsigned long a1);
long long ptr_func_complex(unsigned long long *a0, unsigned long a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int process_short(unsigned int a0, unsigned int a1);
int process_int(unsigned int a0);
void process_ld(void);
int const_param(unsigned int *a0);
int struct_simple(unsigned int *a0);
unsigned long long struct_array(unsigned int *a0, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
unsigned long long struct_with_ptr(struct struct_3 *ptr);
int struct_bitfields(void* ptr);
int union_type(void* a0, unsigned int a1);
unsigned long long union_array(unsigned int *a0, unsigned int a1);
unsigned int enum_type(unsigned int a0);
unsigned long long enum_switch(unsigned int a0);
unsigned long long struct_func_ptr(struct struct_4 *a0);
long long linked_list(struct struct_5 *ptr);
unsigned long long doubly_linked_list(struct struct_6 *ptr);
unsigned int binary_tree_sum(struct struct_8 *a0);
unsigned int binary_tree(struct_binary_tree *a0);
unsigned long long graph_traverse(struct_1 *a0);
unsigned long long test_array_types(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5);
long long test_pointer_types(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5);
long long test_composite_types(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_405fb0;
extern unsigned long long g_405fb8;

void sub_401020()
{
 unsigned long v0; // [bp-0x8];

 v0 = g_405fb0;
 return;
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 __cxa_finalize(0);
 return;
}


// Function: main at 0x4010a0
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_data_types_l1();
 test_array_types(v1, v2, v3, v4, v5, v6);
 test_pointer_types(v1, v2, v3, v4, v5, v6);
 test_composite_types(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_4010cb at 0x4010cb
void sub_4010cb(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010f5 at 0x4010f5
void sub_4010f5()
{
 /* [D] Unsupported jumpkind Ijk_SigTRAP at address 4198645() */
}


// Function: sub_4010f6 at 0x4010f6
void sub_4010f6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401129 at 0x401129
void sub_401129()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401169 at 0x401169
void sub_401169()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4011a5 at 0x4011a5
void sub_4011a5()
{
}


// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4011b9 at 0x4011b9
void sub_4011b9(unsigned long a0)
{
 process_char(a0);
 return;
}


// Function: process_char at 0x4011c0
long long process_char(unsigned int a0)
{
 return (long long)(26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1(unsigned long a0, unsigned long a1)
{
 process_short(a0, a1);
 return;
}


// Function: process_short at 0x4011e0
int process_short(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_4011e8 at 0x4011e8
void sub_4011e8(unsigned long a0)
{
 process_int(a0);
 return;
}


// Function: process_int at 0x4011f0
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9(unsigned long a0)
{
 process_long(a0);
 return;
}


// Function: process_long at 0x401200
long long process_long(unsigned long a0)
{
 return (long long)(a0 * 2);
}


// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 process_ll(a0);
 return;
}


// Function: process_ll at 0x401210
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: sub_40121c at 0x40121c
void sub_40121c()
{
 process_float();
 return;
}


// Function: process_float at 0x401220
float process_float()
{
 return 1.5f;
}


// Function: sub_401235 at 0x401235
void sub_401235()
{
 process_double();
 return;
}


// Function: process_double at 0x401240
float process_double()
{
 return 3.14f;
}


// Function: sub_401255 at 0x401255
void sub_401255()
{
 process_ld();
 return;
}


// Function: process_ld at 0x401260
void process_ld()
{
 /* [D] unsupported_<class 'pyvex_expr_GetI'>() */
 return;
}


// Function: sub_40126f at 0x40126f
void sub_40126f(unsigned long a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x401270
unsigned long long process_bool(unsigned int a0)
{
 if (a0 > 0)
 return ~(a0) & 1;
 return 0;
}


// Function: sub_401283 at 0x401283
void sub_401283(unsigned long a0)
{
 unsigned int dummy = 0;
 const_param(&dummy);
 return;
}


// Function: const_param at 0x401290
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_40129a at 0x40129a
void sub_40129a(unsigned long a0)
{
 volatile_access((unsigned int *)a0);
 return;
}


// Function: volatile_access at 0x4012a0
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4012ab at 0x4012ab
void sub_4012ab()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x4012b0
extern char g_403008;

int test_data_types_l1()
{
 unsigned long v6; // rdx
 unsigned long long v0; // [bp-0x38]
 unsigned long v1; // [bp-0x30]
 unsigned long long v2; // [bp-0x28]
 char v3; // [bp-0x20]
 unsigned int v4; // [bp-0xc]

 puts(&g_403008);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", process_float());
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", process_double());
 process_ld(); /* [D] unsupported_<class 'pyvex_expr_GetI'>() */
 v1 = *((int *)&v3);
 v0 = 0;
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", v0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 v4 = 10;
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v4 * 2);
}


// Function: sub_401435 at 0x401435
void sub_401435(unsigned long a0, unsigned long a1)
{
 array_1d_stack((unsigned int *)a0, a1);
 return;
}


// Function: array_1d_stack at 0x401440
unsigned long long array_1d_stack(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 1;
 } while (ptr != &a0[1 + a1 + 1]);
 return v1;
}


// Function: sub_401464 at 0x401464
void sub_401464()
{
}


// Function: sub_40146b at 0x40146b
void sub_40146b(unsigned long a0)
{
 array_string((char *)a0);
 return;
}


// Function: array_string at 0x401470
unsigned long long array_string(char *a0)
{
 unsigned long long v1; // rax
 unsigned long long v3; // rax

 if (!*(a0))
 return 0;
 v1 = 1;
 do
 {
 v3 = v1 + 1;
 v1 = v3;
 } while (a0[1 + v1]);
 return v1 & 4294967295;
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
}


// Function: sub_40149f at 0x40149f
void sub_40149f(unsigned long a0)
{
 array_2d_stack((unsigned int *)a0);
 return;
}


// Function: array_2d_stack at 0x4014a0
unsigned long long array_2d_stack(unsigned int *a0)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 11;
 } while (ptr != a0 + 110);
 return v1;
}


// Function: sub_4014bc at 0x4014bc
void sub_4014bc(unsigned long a0)
{
 array_3d((unsigned int *)a0);
 return;
}


// Function: array_3d at 0x4014c0
unsigned long long array_3d(unsigned int *a0)
{
 unsigned int *i; // rcx
 unsigned long long v2; // rax
 unsigned int *p; // rdx
 unsigned int *ptr; // rdx

 i = a0 + 25;
 v2 = 0;
 do
 {
 p = i + 5;
 do
 {
 ptr = p + 1;
 v2 = (unsigned int)v2 + p[0] + ptr[4] + ptr[3] + ptr[2] + ptr[1];
 p = ptr;
 } while (p != i);
 i = ptr + 5;
 } while (i != a0 + 150);
 return v2;
}


// Function: sub_4014f6 at 0x4014f6
void sub_4014f6(unsigned long a0)
{
 array_vla(0, NULL);
 return;
}


// Function: array_vla at 0x401500
unsigned long long array_vla(unsigned int a0, unsigned int *a1)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rsi

 if (a0 <= 0)
 return 0;
 v1 = 0;
 ptr = a1;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 1;
 } while (ptr != &a1[1 + a0 + 1]);
 return v1;
}


// Function: sub_401524 at 0x401524
void sub_401524()
{
}


// Function: sub_40152b at 0x40152b
void sub_40152b(unsigned long a0, unsigned long a1)
{
 array_pointer((unsigned int *)a0, (unsigned int)a1);
 return;
}


// Function: array_pointer at 0x401530
unsigned long long array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 10;
 } while (ptr != &a0[10 + 10 * a1 + 10]);
 return v1;
}


// Function: sub_40155c at 0x40155c
void sub_40155c()
{
}


// Function: sub_401563 at 0x401563
void sub_401563(unsigned long a0, unsigned long a1)
{
 pointer_array(a0, (unsigned int)a1);
 return;
}


// Function: pointer_array at 0x401570
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d

 if (a1 <= 0)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 if (*((long long *)(a0 + idx * 8)))
 v2 += *((int *)*((long long *)(a0 + idx * 8)));
 } while ((idx += 1, (a1 <= 10 ? a1 : 10) > (unsigned int)idx));
 return v2;
}


// Function: sub_4015a8 at 0x4015a8
void sub_4015a8()
{
}


// Function: sub_4015b7 at 0x4015b7
void sub_4015b7(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 array_complex_index(a0, a1, (unsigned int)a2, (unsigned int)a3, a4);
 return;
}


// Function: array_complex_index at 0x4015c0
unsigned long long array_complex_index(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4)
{
 if ((a3 | (unsigned int)a4) < 0)
 {
 return 4294967295;
 }
 else if (a3 >= (unsigned int)a1)
 {
 return 4294967295;
 }
 else if ((unsigned int)a4 < a2)
 {
 return *((int *)(a0 + (a4 * a1 + a3 & 4294967295) * 4));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4015e4 at 0x4015e4
void sub_4015e4()
{
}


// Function: sub_4015ee at 0x4015ee
void sub_4015ee(unsigned long a0, unsigned long a1)
{
 array_oob((unsigned int *)a0, (unsigned int)a1);
 return;
}


// Function: array_oob at 0x4015f0
unsigned long long array_oob(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 if (a1 < 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 1;
 } while (ptr != &a0[a1 + 1]);
 return v1;
}


// Function: sub_401614 at 0x401614
void sub_401614()
{
}


// Function: sub_40161b at 0x40161b
void sub_40161b()
{
 test_array_types(0, 0, 0, 0, 0, 0);
 return;
}


// Function: test_array_types at 0x401620
extern char g_4033e1;

unsigned long long test_array_types(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 unsigned long long v8; // rax
 unsigned long long v9; // rax
 void* cur; // rax
 unsigned int v19; // edx
 void* p; // rax
 void* ptr; // rax
 unsigned long long idx; // rax
 unsigned long long v10; // rax
 char *iter; // r8
 unsigned int j; // ecx
 char *node; // rsi
 unsigned long long index; // rax
 unsigned int v15; // edx
 void* m; // rcx
 void* l; // rdx
 char v0; // [bp-0x3f8]
 char v1; // [bp-0x3b4]
 char v2; // [bp-0x3a8]
 unsigned long v23; // [bp-0x1f0]
 char v3; // [bp-0x1b4]
 char v4; // [bp-0x17]
 char v5[6]; // [bp-0x16]
 char v7; // [bp+0x40]

 puts(&g_4033e1);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strncpy(v5, "hello", 5);
 v9 = array_string(v5);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v9 & 4294967295);
 iter = &v2;
 j = 0;
 node = &v2;
 do
 {
 index = 0;
 do
 {
 } while ((*((unsigned int *)&node[4 * index]) = (j == (unsigned int)index ? (unsigned int)index : 0), index += 1, index != 10));
 j += 1;
 node += 40;
 } while (j != 10);
 v15 = 0;
 do
 {
 v15 += *(iter);
 iter += 11;
 } while (&v23 != iter);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v15);
 m = &v3;
 l = &v3;
 do
 {
 cur = l - 100;
 do
 {
 *((unsigned int *)cur) = 1;
 cur += 20;
 *((unsigned int *)&cur[16]) = 1;
 *((unsigned int *)&cur[12]) = 1;
 *((unsigned int *)&cur[8]) = 1;
 *((unsigned int *)&cur[4]) = 1;
 } while (cur != l);
 l = cur + 100;
 } while (&v7 != l);
 v19 = 0;
 do
 {
 p = m - 100;
 do
 {
 ptr = p + 20;
 v19 = v19 + *((int *)p) + (int)ptr[16] + (int)ptr[12] + (int)ptr[8] + (int)ptr[4];
 p = ptr;
 } while (m != p);
 m += 100;
 } while (m != &v7);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v19);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 idx = 0;
 do
 {
 *((unsigned int *)&(&v0)[4 * idx]) = idx;
 idx += 1;
 } while (idx != 20);
 return __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v1));
}


// Function: sub_401833 at 0x401833
void sub_401833(unsigned long a0)
{
 ptr_single((unsigned int *)a0);
 return;
}


// Function: ptr_single at 0x401840
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_40184a at 0x40184a
void sub_40184a(unsigned long a0)
{
 ptr_double((struct struct_0 **)a0);
 return;
}


// Function: ptr_double at 0x401850
int ptr_double(struct struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_40185d at 0x40185d
void sub_40185d(unsigned long a0)
{
 ptr_triple((struct struct_1 **)a0);
 return;
}


// Function: ptr_triple at 0x401860
int ptr_triple(struct struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x401870
unsigned long long ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 1;
 } while (ptr != &a0[a1]);
 return v1;
}


// Function: sub_401894 at 0x401894
void sub_401894()
{
}


// Function: sub_40189b at 0x40189b
void sub_40189b(unsigned long a0, unsigned long a1)
{
 ptr_offset(a0, a1);
 return;
}


// Function: ptr_offset at 0x4018a0
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_4018ab at 0x4018ab
void sub_4018ab(unsigned long a0, unsigned long a1)
{
 ptr_diff(a0, a1);
 return;
}


// Function: ptr_diff at 0x4018b0
int ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_4018be at 0x4018be
void sub_4018be(unsigned long a0, unsigned long a1)
{
 ptr_void((void*)a0, a1);
 return;
}


// Function: ptr_void at 0x4018c0
unsigned long long ptr_void(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((char *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4018d1 at 0x4018d1
void sub_4018d1()
{
}


// Function: sub_4018db at 0x4018db
void sub_4018db()
{
}


// Function: sub_4018e6 at 0x4018e6
void sub_4018e6(unsigned long a0)
{
 ptr_const((unsigned int *)a0);
 return;
}


// Function: ptr_const at 0x4018f0
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4018f9 at 0x4018f9
void sub_4018f9(unsigned long a0)
{
 ptr_const_ptr((unsigned int *)a0);
 return;
}


// Function: ptr_const_ptr at 0x401900
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_40190c at 0x40190c
void sub_40190c(unsigned long a0, unsigned long a1)
{
 ptr_func_simple(a0, a1);
 return;
}


// Function: ptr_func_simple at 0x401910
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return ((long long (*)(unsigned long, unsigned long))a0)(a0, a1);
}


// Function: sub_40191b at 0x40191b
void sub_40191b(unsigned long a0, unsigned long a1)
{
 unsigned long long dummy = 0;
 ptr_func_complex(&dummy, a1);
 return;
}


// Function: ptr_func_complex at 0x401920
long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 unsigned long long v0; // [bp-0x28]
 unsigned long long result; // [bp-0x20]

 result = 0;
 v0 = (unsigned long long)"test";
 if (a0)
 return *((long long *)a0);
 return a1;
}


// Function: ptr_cast at 0x401970
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401977 at 0x401977
void sub_401977(unsigned long a0)
{
 opaque_handle_create((unsigned int)a0);
 return;
}


// Function: opaque_handle_create at 0x401980
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401988 at 0x401988
void sub_401988(unsigned long a0)
{
 opaque_handle_op((unsigned int)a0);
 return;
}


// Function: opaque_handle_op at 0x401990
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401998 at 0x401998
void sub_401998()
{
 test_pointer_types(0, 0, 0, 0, 0, 0);
 return;
}


// Function: test_pointer_types at 0x4019a0
extern char g_403454;

long long test_pointer_types(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 unsigned long long v4; // rcx
 unsigned long long v5; // rdx
 char *cur; // rax
 unsigned long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned int v2; // [bp-0x18]
 unsigned int v7; // [bp-0x14]

 puts(&g_403454);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 v2 = 5;
 v4 = 1;
 v0 = 8589934593;
 v5 = 0;
 v1 = 17179869187;
 cur = &v0;
 while (1)
 {
 cur += 1;
 v5 += v4;
 if (cur == &v7)
 break;
 v4 = (unsigned long long)*(cur);
 }
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v5);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: sub_401a43 at 0x401a43
void sub_401a43()
{
}


// Function: sub_401b71 at 0x401b71
void sub_401b71(unsigned long a0)
{
 struct_simple((unsigned int *)a0);
 return;
}


// Function: struct_simple at 0x401b80
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_401b8d at 0x401b8d
void sub_401b8d(unsigned long a0, unsigned long a1)
{
 struct_array((unsigned int *)a0, (unsigned int)a1);
 return;
}


// Function: struct_array at 0x401b90
unsigned long long struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // r8
 unsigned int *i; // rdi
 unsigned int *p; // rdi
 unsigned long long v4; // r8
 unsigned int *ptr; // rdi
 unsigned long long v6; // r8

 if (a1 <= 0)
 return 0;
 v1 = 0;
 i = a0;
 do
 {
 p = i;
 v4 = v1;
 ptr = p + 1;
 v6 = v4 + p[1] + ptr[1] + ptr[1];
 v1 = v6;
 i = ptr;
 } while (i != &a0[3 + 3 * a1 + 3]);
 return v4 + p[1] + ptr[1] + ptr[1] & 4294967295;
}


// Function: sub_401bc9 at 0x401bc9
void sub_401bc9()
{
}


// Function: sub_401bd7 at 0x401bd7
void sub_401bd7(unsigned long a0)
{
 struct_nested((unsigned int *)a0);
 return;
}


// Function: struct_nested at 0x401be0
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: sub_401bea at 0x401bea
void sub_401bea(unsigned long a0)
{
 struct_deep((unsigned int *)a0);
 return;
}


// Function: struct_deep at 0x401bf0
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: sub_401bfb at 0x401bfb
void sub_401bfb(unsigned long a0)
{
 struct_with_ptr((struct struct_3 *)a0);
 return;
}


// Function: struct_with_ptr at 0x401c00

unsigned long long struct_with_ptr(struct struct_3 *ptr)
{
 unsigned long v1; // rax

 v1 = ptr->field_0;
 if (ptr->field_8)
 v1 = (unsigned int)v1 + ptr->field_8->field_0;
 return v1;
}


// Function: sub_401c12 at 0x401c12
void sub_401c12(unsigned long a0)
{
 struct_bitfields((void*)a0);
 return;
}


// Function: struct_bitfields at 0x401c20
int struct_bitfields(void* ptr)
{
 char v1; // dl
 unsigned int v2; // ecx

 v1 = *((char *)ptr);
 v2 = v1;
 return (v1 & 1) + ((v2 & 0xffffff00 | (char)v2 >> 1) & 3) + (v1 >> 3 & 7) + (*((short *)ptr) >> 6);
}


// Function: sub_401c4a at 0x401c4a
void sub_401c4a(unsigned long a0, unsigned long a1)
{
 union_type((void*)a0, (unsigned int)a1);
 return;
}


// Function: union_type at 0x401c50
int union_type(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 != 1)
 {
 return *((char *)a0);
 }
 else
 {
 return *((int *)a0);
 }
}


// Function: sub_401c61 at 0x401c61
void sub_401c61()
{
}


// Function: sub_401c6b at 0x401c6b
void sub_401c6b()
{
}


// Function: sub_401c75 at 0x401c75
void sub_401c75(unsigned long a0, unsigned long a1)
{
 union_array((unsigned int *)a0, (unsigned int)a1);
 return;
}


// Function: union_array at 0x401c80
unsigned long long union_array(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 1;
 } while (ptr != &a0[1 + a1 + 1]);
 return v1;
}


// Function: sub_401ca4 at 0x401ca4
void sub_401ca4()
{
}


// Function: sub_401cab at 0x401cab
void sub_401cab(unsigned long a0)
{
 enum_type((unsigned int)a0);
 return;
}


// Function: enum_type at 0x401cb0
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401cba at 0x401cba
void sub_401cba(unsigned long a0)
{
 enum_switch((unsigned int)a0);
 return;
}


// Function: enum_switch at 0x401cc0
extern unsigned int CSWTCH_61[4];

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = CSWTCH_61[a0];
 return v1;
}


// Function: sub_401cdb at 0x401cdb
void sub_401cdb(unsigned long a0)
{
 struct_func_ptr((struct struct_4 *)a0);
 return;
}


// Function: struct_func_ptr at 0x401ce0
typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_3 *field_8;
 struct struct_4 *field_10;
} struct_4;

unsigned long long struct_func_ptr(struct struct_4 *a0)
{
 return ((long long (*)(struct struct_4 *))a0->field_8)(a0);
}


// Function: sub_401cec at 0x401cec
void sub_401cec(unsigned long a0)
{
 linked_list((struct struct_5 *)a0);
 return;
}


// Function: linked_list at 0x401cf0
typedef struct struct_5 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_5 *field_8;
 struct struct_5 *field_10;
} struct_5;

long long linked_list(struct struct_5 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (!ptr)
 return 0;
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr);
 return v1;
}


// Function: sub_401d0c at 0x401d0c
void sub_401d0c()
{
}


// Function: sub_401d11 at 0x401d11
void sub_401d11(unsigned long a0)
{
 doubly_linked_list((struct struct_6 *)a0);
 return;
}


// Function: doubly_linked_list at 0x401d20
typedef struct struct_6 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_6 *field_8;
 struct struct_6 *field_10;
} struct_6;

unsigned long long doubly_linked_list(struct struct_6 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (!ptr)
 return 0;
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr);
 return v1;
}


// Function: sub_401d3c at 0x401d3c
void sub_401d3c()
{
}


// Function: sub_401d41 at 0x401d41
void sub_401d41(unsigned long a0)
{
 binary_tree_sum((struct_8 *)a0);
 return;
}


// Function: binary_tree_sum at 0x401d50

typedef struct struct_13 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_12 *field_8;
 struct struct_13 *field_10;
} struct_13;

typedef struct struct_17 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_16 *field_8;
 struct struct_17 *field_10;
} struct_17;

typedef struct struct_44 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_44 *field_10;
} struct_44;

typedef struct struct_30 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_29 *field_8;
 struct struct_30 *field_10;
} struct_30;

typedef struct struct_28 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_27 *field_8;
 struct struct_28 *field_10;
} struct_28;

typedef struct struct_43 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_42 *field_8;
 struct struct_43 *field_10;
} struct_43;

typedef struct struct_37 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_36 *field_8;
 struct struct_37 *field_10;
} struct_37;

typedef struct struct_25 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_24 *field_8;
 struct struct_25 *field_10;
} struct_25;

typedef struct struct_16 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_15 *field_8;
 struct struct_16 *field_10;
} struct_16;

typedef struct struct_29 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_29 *field_10;
} struct_29;

typedef struct struct_27 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_26 *field_8;
 struct struct_27 *field_10;
} struct_27;

typedef struct struct_42 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_41 *field_8;
 struct struct_42 *field_10;
} struct_42;

typedef struct struct_36 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_35 *field_8;
 struct struct_36 *field_10;
} struct_36;

typedef struct struct_24 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_23 *field_8;
 struct struct_24 *field_10;
} struct_24;

typedef struct struct_11 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_10 *field_8;
 struct struct_11 *field_10;
} struct_11;

typedef struct struct_15 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_14 *field_8;
 struct struct_15 *field_10;
} struct_15;

typedef struct struct_26 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_26 *field_10;
} struct_26;

typedef struct struct_41 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_40 *field_8;
 struct struct_41 *field_10;
} struct_41;

typedef struct struct_35 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_34 *field_8;
 struct struct_35 *field_10;
} struct_35;

typedef struct struct_23 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_22 *field_8;
 struct struct_23 *field_10;
} struct_23;

typedef struct struct_10 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_9 *field_8;
 struct struct_10 *field_10;
} struct_10;

typedef struct struct_14 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_14 *field_10;
} struct_14;

typedef struct struct_40 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_39 *field_8;
 struct struct_40 *field_10;
} struct_40;

typedef struct struct_34 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_33 *field_8;
 struct struct_34 *field_10;
} struct_34;

typedef struct struct_22 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_21 *field_8;
 struct struct_22 *field_10;
} struct_22;

typedef struct struct_9 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_9 *field_10;
} struct_9;

typedef struct struct_39 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_38 *field_8;
 struct struct_39 *field_10;
} struct_39;

typedef struct struct_33 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_32 *field_8;
 struct struct_33 *field_10;
} struct_33;

typedef struct struct_21 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_20 *field_8;
 struct struct_21 *field_10;
} struct_21;

typedef struct struct_38 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_38 *field_10;
} struct_38;

typedef struct struct_32 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_31 *field_8;
 struct struct_32 *field_10;
} struct_32;

typedef struct struct_20 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_19 *field_8;
 struct struct_20 *field_10;
} struct_20;

typedef struct struct_31 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_31 *field_10;
} struct_31;

typedef struct struct_19 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_18 *field_8;
 struct struct_19 *field_10;
} struct_19;

typedef struct struct_18 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_18 *field_10;
} struct_18;

unsigned int binary_tree_sum(struct struct_8 *a0)
{
 struct_8 *p; // rax
 struct_7 *addr; // rax
 struct_13 *ptr7; // rbx, Other Possible Types: struct_4 *
 unsigned long long v28; // r10
 struct_2 *iter; // rsi
 unsigned long v30; // rcx
 unsigned long long v31; // r9
 unsigned long long v46; // r11
 struct_3 *ptr8; // rdx, Other Possible Types: struct_17 *
 struct_6 *ptr5; // rax
 struct_1 *v32; // rbp
 unsigned long long v33; // r15
 unsigned int v34; // r8d
 struct_1 *ptr; // rbp
 struct_0 *v36; // r12
 unsigned long v37; // r14
 unsigned long long v38; // rbx
 struct_0 *ptr6; // r12
 unsigned int v40; // eax
 struct_5 *cur; // r11
 struct_44 *v41; // r12
 unsigned long long v43; // r13
 struct_25 *v0; // [bp-0xa0], Other Possible Types: struct_7 *
 struct_7 *ptr12; // [bp-0xa0]
 struct_37 *v2; // [bp-0x98], Other Possible Types: struct_6 *
 struct_6 *ptr13; // [bp-0x98]
 struct_8 *v4; // [bp-0x90]
 struct_8 *ptr11; // [bp-0x90]
 unsigned int v6; // [bp-0x88]
 unsigned int v7; // [bp-0x84]
 unsigned int v8; // [bp-0x80]
 unsigned int v9; // [bp-0x7c]
 unsigned int v10; // [bp-0x78]
 unsigned int v11; // [bp-0x74]
 unsigned int v12; // [bp-0x70]
 unsigned int v13; // [bp-0x6c]
 struct_17 *v14; // [bp-0x60]
 unsigned int v15; // [bp-0x58]
 unsigned int v16; // [bp-0x54]
 struct_2 *v17; // [bp-0x50]
 unsigned int v18; // [bp-0x48]
 unsigned int v19; // [bp-0x44]
 unsigned int v20; // [bp-0x40]
 unsigned int v21; // [bp-0x3c]

 v4 = a0;
 v15 = 0;
 if (!a0)
 return v15;
 do
 {
 ptr11 = v4;
 p = ptr11;
 v9 = 0;
 v7 = p->field_0;
 v0 = p->field_8;
 if (p->field_8)
 {
 do
 {
 ptr12 = v0;
 addr = ptr12;
 v10 = 0;
 v8 = addr->field_0;
 v2 = addr->field_8;
 if (addr->field_8)
 {
 do
 {
 ptr13 = v2;
 ptr5 = ptr13;
 v11 = 0;
 cur = ptr5->field_8;
 v13 = ptr5->field_0;
 if (ptr5->field_8)
 {
 do
 {
 ptr7 = cur->field_8;
 v28 = 0;
 v12 = cur->field_0;
 if (cur->field_8)
 {
 cur = cur;
 do
 {
 ptr8 = ptr7->field_8;
 v43 = ptr7->field_0;
 v46 = 0;
 if (ptr7->field_8)
 {
 do
 {
 iter = ptr8->field_8;
 v30 = ptr8->field_0;
 v31 = 0;
 if (ptr8->field_8)
 {
 do
 {
 v32 = iter->field_8;
 v33 = 0;
 v6 = iter->field_0;
 if (iter->field_8)
 {
 v34 = v43;
 do
 {
 ptr = v32;
 v36 = ptr->field_8;
 v37 = ptr->field_0;
 v38 = 0;
 if (ptr->field_8)
 {
 do
 {
 ptr6 = v36;
 v21 = v34;
 v20 = v31;
 v19 = v46;
 v17 = iter;
 v18 = v30;
 v16 = v28;
 v14 = ptr8;
 v40 = binary_tree_sum(ptr6->field_8);
 v41 = ptr6->field_10;
 v38 += v40 + ptr6->field_0;
 ptr8 = v14;
 v28 = v16;
 v30 = v18;
 iter = v17;
 v46 = v19;
 v31 = v20;
 v34 = v21;
 v36 = v41;
 } while (ptr6->field_10);
 v37 += v38;
 }
 v33 += v37;
 v32 = ptr->field_10;
 } while (ptr->field_10);
 v6 += (unsigned int)v33;
 v43 = v34;
 }
 iter = iter->field_10;
 v31 = (unsigned int)v31 + v6;
 } while (iter->field_10);
 v30 += v31;
 }
 ptr8 = ptr8->field_10;
 v46 += v30;
 } while (ptr8->field_10);
 v43 += v46;
 }
 } while ((ptr7 = ptr7->field_10, v28 += v43, ptr7->field_10));
 v12 += (unsigned int)v28;
 }
 } while ((cur = cur->field_10, v11 += v12, cur->field_10));
 v13 += v11;
 }
 } while ((v10 += v13, v2 = (struct_37 *)ptr13->field_10, v2 = (struct_6 *)v2, ptr13->field_10));
 v8 += v10;
 }
 } while ((v9 += v8, v0 = (struct_25 *)ptr12->field_10, v0 = (struct_7 *)v0, ptr12->field_10));
 v7 += v9;
 }
 } while ((v15 += v7, v4 = (struct_8 *)ptr11->field_10, ptr11->field_10));
 return v15;
}


// Function: sub_401fa8 at 0x401fa8
void sub_401fa8(unsigned long a0)
{
 binary_tree((struct struct_binary_tree *)a0);
 return;
}


// Function: binary_tree at 0x401fb0
unsigned int binary_tree(struct_binary_tree *a0)
{
 unsigned long long v1; // r12
 struct_binary_tree *ptr; // rbx
 unsigned int v3; // eax
 struct_binary_tree *v4; // rbx

 v1 = 0;
 if (!a0)
 return 0;
 do
 {
 ptr = a0;
 v3 = binary_tree_sum((struct struct_8 *)ptr->field_8);
 v4 = ptr->field_10;
 v1 += v3 + ptr->field_0;
 a0 = v4;
 } while (ptr->field_10);
 return v1;
}


// Function: sub_401fe8 at 0x401fe8
void sub_401fe8(unsigned long a0)
{
 graph_traverse((struct_1 *)a0);
 return;
}


// Function: graph_traverse at 0x401ff0
unsigned long long graph_traverse(struct_1 *a0)
{
 unsigned int v1; // r8d
 struct_1 *v2; // rdi
 struct_1 *p; // rdi
 struct_2 *ptr; // rax
 struct_1 *v6; // rdi
 unsigned long i;

 if (a0->field_0 <= 0)
 return 0;
 v1 = 0;
 v2 = a0;
 for (i = 0; i < a0->field_0; i++)
 {
 p = &v2[i];
 ptr = p->field_8;
 if (p->field_0)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_10;
 } while (ptr);
 }
 }
 return v1;
}


// Function: test_composite_types at 0x402040
typedef struct struct_test_0 {
 char field_0[4];
 char padding_4[4];
 struct struct_test_0 *field_8;
} struct_test_0;

typedef struct struct_test_1 {
 char field_0[4];
 char padding_4[4];
 struct struct_test_1 *field_8;
} struct_test_1;

extern char g_40354a;

long long test_composite_types(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 struct_test_0 *cur; // rax
 unsigned long long v16; // rcx
 unsigned long long v17; // rdx
 struct_test_1 *iter; // rax
 unsigned long long v19; // rcx
 unsigned long long v20; // rdx
 unsigned long v22; // fs
 unsigned int v0; // [bp-0x78]
 char *v1; // [bp-0x70]
 char v2; // [bp-0x68], Other Possible Types: unsigned int
 char *v3; // [bp-0x60]
 char v4; // [bp-0x58], Other Possible Types: unsigned int
 unsigned long long result; // [bp-0x50]
 unsigned int v6; // [bp-0x48]
 char *v8; // [bp-0x40]
 unsigned long long flag1; // [bp-0x38]
 char v10; // [bp-0x30], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0x28]
 char *v12; // [bp-0x20]
 unsigned long v13; // [bp-0x10]

 puts(&g_40354a);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 cur = &v2;
 v0 = 10;
 v3 = &v4;
 v16 = 10;
 v17 = 0;
 v1 = &v2;
 v2 = 20;
 v4 = 30;
 result = 0;
 while (1)
 {
 v17 += v16;
 if (!cur)
 break;
 v16 = *(unsigned int *)cur->field_0;
 cur = cur->field_8;
 }
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v17);
 iter = &v6;
 v6 = 10;
 v8 = &v10;
 v19 = 10;
 v20 = 0;
 flag1 = 0;
 v10 = 20;
 flag2 = 0;
 v12 = &v6;
 while (true)
 {
 iter = iter->field_8;
 v20 += v19;
 if (!iter)
 break;
 v19 = *(unsigned int *)iter;
 }
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v20);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(NULL) + 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 return v13 - *((long long *)(v22 + 40));
}


// Function: sub_4021a9 at 0x4021a9
void sub_4021a9()
{
}


// Function: sub_40220f at 0x40220f
void sub_40220f()
{
}



/* CRT stub function _fini removed by preprocessor */


