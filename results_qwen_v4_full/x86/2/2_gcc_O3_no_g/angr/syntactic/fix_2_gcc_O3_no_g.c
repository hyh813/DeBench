// Angr Decompilation of 2_gcc_O3_no_g
// Platform: X86

#include <math.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
 unsigned int field_8;
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int field_24;
 unsigned int field_28;
 struct struct_0 *field_2c;
 unsigned int padding_0[100];
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 struct struct_0 *field_4;
 struct struct_1 *field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 struct struct_1 *field_4;
 struct struct_2 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 struct struct_2 *field_4;
 struct struct_3 *field_8;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
 struct struct_3 *field_4;
 struct struct_4 *field_8;
} struct_4;

typedef struct struct_5 {
 unsigned int field_0;
 struct struct_4 *field_4;
 struct struct_5 *field_8;
} struct_5;

typedef struct struct_6 {
 unsigned int field_0;
 struct struct_5 *field_4;
 struct struct_6 *field_8;
} struct_6;

typedef struct struct_7 {
 unsigned int field_0;
 struct struct_6 *field_4;
 struct struct_7 *field_8;
} struct_7;

typedef struct struct_8 {
 unsigned int field_0;
 struct struct_7 *field_4;
 struct struct_8 *field_8;
} struct_8;

extern struct_0 *g_405ff4;

/* Helper function declarations */
extern unsigned int __x86_get_pc_thunk_bx();
extern unsigned int __x86_get_pc_thunk_dx();
extern int __x86_get_pc_thunk_di(int a0);
extern unsigned int __x86_get_pc_thunk_ax();
extern void __x86_get_pc_thunk_cx();

/* Process function declarations */
extern int process_char(unsigned int a0);
extern unsigned int process_short(unsigned short a0);
extern int process_int(unsigned int a0);
extern unsigned int process_long(unsigned int a0);
extern int process_ll(unsigned int a0, unsigned int a1);
extern unsigned int process_float(unsigned int a0);
extern double process_double();
extern void process_ld();
extern unsigned int process_bool(unsigned int a0);

/* Additional function declarations */
extern unsigned int volatile_access(unsigned int *a0);
extern unsigned int array_1d_stack(unsigned int *a0, unsigned int a1);
extern unsigned int array_string(char *a0);
extern unsigned int array_vla(unsigned int a0, unsigned int *a1);
extern unsigned int array_pointer(unsigned int *a0, unsigned int a1);
extern unsigned int pointer_array(struct_0 *idx, unsigned int a1);
extern unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
extern unsigned int array_oob(unsigned int *a0, unsigned int a1);
extern unsigned int ptr_increment(int *ptr, unsigned int i);
extern unsigned int ptr_const(const unsigned int *a0);
extern unsigned int ptr_func_complex(unsigned int (*a0)(unsigned int, unsigned int *), unsigned int a1);
extern unsigned int opaque_handle_op(unsigned int a0);
extern unsigned int struct_with_ptr(struct_0 *ptr);
extern unsigned int union_array(unsigned int *a0, unsigned int a1);
extern unsigned int enum_type(unsigned int a0);
extern unsigned int enum_switch(unsigned int a0);
extern unsigned int linked_list(struct_0 *ptr);
extern unsigned int doubly_linked_list(struct_0 *ptr);
extern unsigned int binary_tree_sum(struct_8 *a0);
extern unsigned int binary_tree(struct_1 *a0);
extern unsigned int graph_traverse(struct_1 *a0);

/* printf-like function */
extern int sub_4010c0(int a0, const char *a1, ...);

/* CRT stub functions */
extern void frame_dummy();
extern unsigned int __do_global_ctors_aux();
extern void deregister_tm_clones();
extern unsigned int register_tm_clones();

int _init()
{
 if (g_405ff4)
 ((void(*)())g_405ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int v0; // [bp-0x4]

 v0 = 0;
 return v0;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return;
}


// Function: sub_40107e at 0x40107e
int sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 return ((int(*)())g_405ff4->field_20)();
}


// Function: sub_40108a at 0x40108a
int sub_40108a()
{
 return sub_401090();
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 return ((int(*)())g_405ff4->field_c)();
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
 return sub_4010a0();
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 return ((int(*)())g_405ff4->field_10)();
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 return sub_4010b0();
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 return ((int(*)())g_405ff4->field_14)();
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 return sub_4010c0(1, "test");
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0(int a0, const char *a1, ...)
{
 return ((int(*)())g_405ff4->field_18)();
}


// Function: sub_4010ca at 0x4010ca
void sub_4010ca()
{
 main();
 return;
}


// Function: main at 0x4010d0
int main()
{
 char v0; // [bp+0x0]

 test_data_types_l1(&v0);
 test_array_types(&v0);
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_4010f2 at 0x4010f2
void sub_4010f2()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40112c at 0x40112c
void sub_40112c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401130
unsigned int __x86_get_pc_thunk_bx()
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401134 at 0x401134
void sub_401134()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */


// Function: sub_401173 at 0x401173
void sub_401173()
{
}


// Function: sub_401179 at 0x401179
void sub_401179()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 unsigned int v0; // [bp-0x8]
 unsigned int result; // eax

 __x86_get_pc_thunk_dx();
 v0 = 0;
 result = 0;
 return result;
}


// Function: sub_4011c7 at 0x4011c7
void sub_4011c7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 return;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401269
unsigned int __x86_get_pc_thunk_dx()
{
 unsigned int v0; // eax

 return v0;
}


// Function: __x86.get_pc_thunk_di at 0x40126d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401271 at 0x401271
void sub_401271(unsigned int a0)
{
 process_char(a0);
 return;
}


// Function: process_char at 0x401280
int process_char(unsigned int a0)
{
 if (!((a0 - 65 & 255) < 26))
 return a0;
 return a0 + 32;
}


// Function: sub_401295 at 0x401295
void sub_401295(unsigned short a0)
{
 process_short(a0);
 return;
}


// Function: process_short at 0x4012a0
unsigned int process_short(unsigned short a0)
{
 return a0 + 300;
}


// Function: sub_4012ae at 0x4012ae
void sub_4012ae(unsigned int a0)
{
 process_int(a0);
 return;
}


// Function: process_int at 0x4012b0
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_4012bd at 0x4012bd
void sub_4012bd(unsigned int a0)
{
 process_long(a0);
 return;
}


// Function: process_long at 0x4012c0
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4012cb at 0x4012cb
void sub_4012cb(unsigned int a0, unsigned int a1)
{
 process_ll(a0, a1);
 return;
}


// Function: process_ll at 0x4012d0
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6(unsigned int a0)
{
 process_float(a0);
 return;
}


// Function: process_float at 0x4012f0
unsigned int process_float(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x4]

 v1 = __x86_get_pc_thunk_ax();
 v0 = (unsigned int)nan;
 return v1 + 19671;
}


// Function: sub_40131a at 0x40131a
void sub_40131a(unsigned int a0)
{
 process_double(a0);
 return;
}


// Function: process_double at 0x401320
double process_double(unsigned int a0)
{
 unsigned int v2; // eax
 double v0; // [bp-0-c], Other Possible Types: unsigned long

 v2 = __x86_get_pc_thunk_ax();
 v0 = (double)a0;
 return v0;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned int a0)
{
 process_ld(a0);
 return;
}


// Function: process_ld at 0x401350
void process_ld(unsigned int a0)
{
 return;
}


// Function: sub_40135f at 0x40135f
void sub_40135f(unsigned int a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x401360
unsigned int process_bool(unsigned int a0)
{
 if (a0 > 0)
 return ~(a0) & 1;
 return 0;
}


// Function: sub_40137a at 0x40137a
void sub_40137a(unsigned int a0)
{
 const_param();
 return;
}


// Function: const_param at 0x401380
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_40138e at 0x40138e
void sub_40138e(unsigned int a0)
{
 volatile_access((unsigned int *)a0);
 return;
}


// Function: volatile_access at 0x401390
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_40139f at 0x40139f
int sub_40139f()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x4013a0
extern unsigned int g_403008;

/* Stack canary helper */
extern void *_ccall(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3);

int test_data_types_l1()
{
 unsigned int v0; // [bp-0x10]

 sub_4010b0();
 sub_4010c0(1, "DT-L1-01 (process_char): %c\n", 97);
 sub_4010c0(1, "DT-L1-01 (process_char): %c\n", 98);
 sub_4010c0(1, "DT-L1-02 (process_short): %d\n", 300);
 sub_4010c0(1, "DT-L1-03 (process_int): %d\n", 11);
 sub_4010c0(1, "DT-L1-04 (process_long): %ld\n", 200);
 sub_4010c0(1, "DT-L1-05 (process_ll): %lld\n", 10000, 0);
 sub_4010c0(1, "DT-L1-06 (process_float): %.2f\n", 0, 0x400c0000);
 sub_4010c0(1, "DT-L1-07 (process_double): %.2f\n", 3435973837, 1073794252);
 sub_4010c0(1, "DT-L1-08 (process_ld): %.2Lf\n", 0, 0xa0000000, 16386);
 sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 1);
 sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 0);
 sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 0);
 sub_4010c0(1, "DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return sub_4010c0(1, "DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: sub_4014eb at 0x4014eb
void sub_4014eb(unsigned int a0, unsigned int a1)
{
 array_1d_stack((unsigned int *)a0, a1);
 return;
}


// Function: array_1d_stack at 0x4014f0
unsigned int array_1d_stack(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (&a0[a1] != ptr);
 return v0;
}


// Function: sub_401514 at 0x401514
void sub_401514()
{
}


// Function: sub_40151d at 0x40151d
void sub_40151d(unsigned int a0)
{
 array_string((char *)a0);
 return;
}


// Function: array_string at 0x401520
unsigned int array_string(char *a0)
{
 unsigned int v0; // eax

 v0 = 0;
 if (!*(a0))
 return 0;
 do
 {
 v0 += 1;
 } while (a0[v0]);
 return v0;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
}


// Function: sub_401541 at 0x401541
void sub_401541(unsigned int a0)
{
 array_2d_stack();
 return;
}


// Function: array_2d_stack at 0x401550
int array_2d_stack(unsigned int *a0)
{
 return a0[11] + *(a0) + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_40158b at 0x40158b
void sub_40158b(unsigned int a0)
{
 array_3d();
 return;
}


// Function: array_3d at 0x401590
int array_3d(unsigned int *a0)
{
 return 0;
}


// Function: sub_401826 at 0x401826
void sub_401826(unsigned int a0)
{
 array_vla(a0, (unsigned int *)a0);
 return;
}


// Function: array_vla at 0x401830
unsigned int array_vla(unsigned int a0, unsigned int *a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a0 <= 0)
 return 0;
 v0 = 0;
 ptr = a1;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (&a1[a0] != ptr);
 return v0;
}


// Function: sub_401854 at 0x401854
void sub_401854()
{
}


// Function: sub_40185d at 0x40185d
void sub_40185d(unsigned int a0, unsigned int a1)
{
 array_pointer((unsigned int *)a0, a1);
 return;
}


// Function: array_pointer at 0x401860
unsigned int array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 10;
 } while (&a0[10 * a1] != ptr);
 return v0;
}


// Function: sub_40188c at 0x40188c
void sub_40188c()
{
}


// Function: sub_401895 at 0x401895
int sub_401895()
{
 pointer_array((struct_0 *)0, 0);
 return;
}


// Function: pointer_array at 0x4018a0
unsigned int pointer_array(struct_0 *idx, unsigned int a1)
{
 unsigned int cur; // eax

 if (a1 <= 0)
 return 0;
 cur = 0;
 if (idx->field_0)
 cur = idx->field_0;
 if (a1 <= 1)
 return cur;
 if (idx->field_4)
 cur += idx->field_4->field_0;
 if (a1 == 2)
 return cur;
 if (idx->field_8)
 cur += idx->field_8->field_0;
 if (a1 == 3)
 return cur;
 if (idx->field_c)
 cur += idx->field_c;
 if (a1 == 4)
 return cur;
 if (idx->field_10)
 cur += idx->field_10;
 if (a1 == 5)
 return cur;
 if (idx->field_14)
 cur += idx->field_14;
 if (a1 == 6)
 return cur;
 if (idx->field_18)
 cur += idx->field_18;
 if (a1 == 7)
 return cur;
 if (idx->field_1c)
 cur += idx->field_1c;
 if (a1 == 8)
 return cur;
 if (idx->field_20)
 cur += idx->field_20;
 return cur;
}


// Function: sub_40193f at 0x40193f
void sub_40193f()
{
}


// Function: sub_401944 at 0x401944
int sub_401944()
{
 array_complex_index(0, 10, 10, 5, 5);
 return;
}


// Function: array_complex_index at 0x401950
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if ((a3 | a4) < 0)
 {
 return 4294967295;
 }
 else if (a3 >= a1)
 {
 return 4294967295;
 }
 else if (a4 < a2)
 {
 return *((int *)(a0 + (a4 * a1 + a3) * 4));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40197f at 0x40197f
void sub_40197f()
{
}


// Function: sub_401987 at 0x401987
void sub_401987(unsigned int a0, unsigned int a1)
{
 array_oob((unsigned int *)a0, a1);
 return;
}


// Function: array_oob at 0x401990
unsigned int array_oob(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 < 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (&a0[a1 + 1] != ptr);
 return v0;
}


// Function: sub_4019bc at 0x4019bc
void sub_4019bc()
{
}


// Function: sub_4019c5 at 0x4019c5
int sub_4019c5()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x4019d0
extern unsigned int g_4033bd;

int test_array_types()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 unsigned int idx; // eax
 unsigned long v9; // [bp-0x68]
 char v0; // [bp-0x24]
 char v1[6]; // [bp-0x16]
 unsigned int v2; // [bp-0x10]

 v2 = 0;
 sub_4010b0();
 sub_4010c0(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strncpy(v1, "hello", 5);
 v7 = 0;
 do
 {
 v7 += 1;
 } while (v1[v7]);
 sub_4010c0(1, "ARR-L1-02 (array_string): %d\n", v7);
 sub_4010c0(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 sub_4010c0(1, "ARR-L1-04 (array_3d): %d\n", 125);
 sub_4010c0(1, "ARR-L2-01 (array_vla): %d\n", 60);
 sub_4010c0(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 sub_4010c0(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 idx = 0;
 do
 {
 (&v9)[idx] = idx;
 idx += 1;
 } while (idx != 20);
 sub_4010c0(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v0));
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return ptr_single();
 }
 return v2 - *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
}


// Function: ptr_single at 0x401b00
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401b0e at 0x401b0e
void sub_401b0e(unsigned int a0)
{
 ptr_double();
 return;
}


// Function: ptr_double at 0x401b10
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401b20
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: sub_401b32 at 0x401b32
int sub_401b32()
{
 int arr[5] = {1, 2, 3, 4, 5};
 ptr_increment(arr, 5);
 return;
}


// Function: ptr_increment at 0x401b40
unsigned int ptr_increment(int *ptr, unsigned int i)
{
 unsigned int idx; // eax
 unsigned int v1; // edx

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += ptr[idx];
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: sub_401b66 at 0x401b66
void sub_401b66()
{
}


// Function: sub_401b76 at 0x401b76
void sub_401b76(unsigned int a0, unsigned int a1)
{
 ptr_offset();
 return;
}


// Function: ptr_offset at 0x401b80
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x401b90
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x401ba0
unsigned int ptr_void(void* a0, unsigned int a1)
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


// Function: sub_401bb9 at 0x401bb9
void sub_401bb9()
{
}


// Function: sub_401bc7 at 0x401bc7
void sub_401bc7()
{
}


// Function: sub_401bd6 at 0x401bd6
void sub_401bd6(unsigned int a0)
{
 unsigned int val = 10;
 ptr_const(&val);
 return;
}


// Function: ptr_const at 0x401be0
unsigned int ptr_const(const unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401bed at 0x401bed
void sub_401bed(unsigned int a0)
{
 ptr_const_ptr();
 return;
}


// Function: ptr_const_ptr at 0x401bf0
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x401c00
int ptr_func_simple(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x4]

 v0 = a1;
 return a0;
}


// Function: sub_401c12 at 0x401c12
void sub_401c12()
{
 ptr_func_complex(ptr_func_simple, 10);
 return;
}


// Function: ptr_func_complex at 0x401c20
unsigned int ptr_func_complex(unsigned int (*a0)(unsigned int, unsigned int *), unsigned int a1)
{
 unsigned int v3; // eax
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v3 = __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 result = 0;
 v0 = v3 - -6146;
 v7 = a0(a1, &v0);
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return ptr_cast();
 }
 return v7;
}


// Function: ptr_cast at 0x401c80
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401c8b at 0x401c8b
void sub_401c8b(unsigned int a0)
{
 opaque_handle_create();
 return;
}


// Function: opaque_handle_create at 0x401c90
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401c99 at 0x401c99
void sub_401c99(unsigned int a0)
{
 opaque_handle_op(a0);
 return;
}


// Function: opaque_handle_op at 0x401ca0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401cab at 0x401cab
int sub_401cab()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x401cb0
extern unsigned int g_403430;

int test_pointer_types()
{
 sub_4010b0(&g_403430);
 sub_4010c0(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 sub_4010c0(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 sub_4010c0(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 sub_4010c0(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
 sub_4010c0(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 sub_4010c0(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 sub_4010c0(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 sub_4010c0(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 sub_4010c0(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 sub_4010c0(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 sub_4010c0(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return sub_4010c0(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: sub_401ddd at 0x401ddd
void sub_401ddd(unsigned int a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x401de0
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_401df1 at 0x401df1
int sub_401df1()
{
 struct_array();
 return;
}


// Function: struct_array at 0x401e00
int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // ecx
 unsigned int *i; // eax
 unsigned int v2; // ecx
 unsigned int *p; // eax
 unsigned int *ptr; // eax
 unsigned int v5; // ecx

 if (a1 <= 0)
 return 0;
 v0 = 0;
 i = a0;
 do
 {
 v2 = v0;
 p = i;
 ptr = p + 1;
 v5 = v2 + p[1] + ptr[1] + ptr[1];
 i = ptr;
 v0 = v5;
 } while (&a0[3 * a1] != i);
 return v2 + p[1] + ptr[1] + ptr[1];
}


// Function: sub_401e36 at 0x401e36
void sub_401e36()
{
}


// Function: sub_401e46 at 0x401e46
void sub_401e46(unsigned int a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x401e50
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_401e5e at 0x401e5e
void sub_401e5e(unsigned int a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x401e60
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_401e6f at 0x401e6f
void sub_401e6f(unsigned int a0)
{
 struct_with_ptr((struct_0 *)a0);
 return;
}


// Function: struct_with_ptr at 0x401e70
unsigned int struct_with_ptr(struct_0 *ptr)
{
 unsigned int v0; // eax

 v0 = ptr->field_0;
 if (ptr->field_4)
 v0 = ptr->field_0 + ptr->field_4->field_0;
 return v0;
}


// Function: sub_401e84 at 0x401e84
int sub_401e84()
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x401e90
int struct_bitfields(void* a0)
{
 return (*((char *)a0) & 1) + (*((char *)a0) >> 1 & 3) + (*((char *)a0) >> 3 & 7) + (*((short *)a0) >> 6);
}


// Function: union_type at 0x401ec0
int union_type(void* a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]

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
 v0 = (unsigned int)nan;
 return v0;
 }
}


// Function: sub_401edf at 0x401edf
void sub_401edf()
{
}


// Function: sub_401eea at 0x401eea
void sub_401eea()
{
}


// Function: sub_401f15 at 0x401f15
void sub_401f15(unsigned int a0, unsigned int a1)
{
 union_array((unsigned int *)a0, a1);
 return;
}


// Function: union_array at 0x401f20
unsigned int union_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 1;
 } while (&a0[a1] != ptr);
 return v0;
}


// Function: sub_401f44 at 0x401f44
void sub_401f44()
{
}


// Function: sub_401f4d at 0x401f4d
void sub_401f4d(unsigned int a0)
{
 enum_type(a0);
 return;
}


// Function: enum_type at 0x401f50
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401f5e at 0x401f5e
void sub_401f5e()
{
 enum_switch(0);
 return;
}


// Function: enum_switch at 0x401f60
unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // ecx

 __x86_get_pc_thunk_cx();
 if (a0 > 3)
 return 4294967197;
 return *((int *)(v0 + 16487 + a0 * 4 - 10664));
}


// Function: sub_401f85 at 0x401f85
void sub_401f85(unsigned int a0)
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x401f90
int struct_func_ptr(unsigned int *ptr)
{
 unsigned int v0; // [bp+0x4]

 v0 = *(ptr);
 return v0;
}


// Function: sub_401fa1 at 0x401fa1
void sub_401fa1(unsigned int a0)
{
 linked_list((struct_0 *)a0);
 return;
}


// Function: linked_list at 0x401fb0
unsigned int linked_list(struct_0 *ptr)
{
 unsigned int v0; // edx

 v0 = 0;
 if (ptr)
 {
 do
 {
 v0 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr);
 }
 return v0;
}


// Function: sub_401fcc at 0x401fcc
void sub_401fcc(unsigned int a0)
{
 doubly_linked_list((struct_0 *)a0);
 return;
}


// Function: doubly_linked_list at 0x401fd0
unsigned int doubly_linked_list(struct_0 *ptr)
{
 unsigned int v0; // edx

 v0 = 0;
 if (ptr)
 {
 do
 {
 v0 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr);
 }
 return v0;
}


// Function: sub_401fec at 0x401fec
int sub_401fec()
{
 binary_tree_sum((struct_8 *)0);
 return;
}


// Function: binary_tree_sum at 0x401ff0
unsigned int binary_tree_sum(struct_8 *a0)
{
 struct_7 *ptr7; // eax
 struct_6 *ptr5; // eax
 struct_8 *ptr; // ebx
 struct_7 *v34; // esi
 unsigned int v35; // edi
 unsigned int v36; // ecx
 struct_7 *ptr8; // esi
 unsigned int v38; // eax
 struct_8 *v39; // esi
 struct_6 *v40; // ebx
 struct_3 *ptr6; // edx
 struct_5 *ptr4; // eax
 struct_4 *p; // ecx
 struct_3 *cur; // ebp
 unsigned int v29; // ecx
 struct_4 *ptr9; // edx
 unsigned int v32; // ebp
 unsigned int v0; // [bp-0x70]
 unsigned int v1; // [bp-0x6c]
 unsigned int v2; // [bp-0x68]
 unsigned int v3; // [bp-0x64]
 struct_4 *v4; // [bp-0x60]
 unsigned int v5; // [bp-0x5c]
 struct_7 *v6; // [bp-0x54], Other Possible Types: struct_7 *
 struct_7 *ptr10; // [bp-0x54]
 struct_6 *ptr13; // [bp-0x50]
 struct_6 *v9; // [bp-0x50], Other Possible Types: struct_6 *
 struct_5 *v10; // [bp-0x4c], Other Possible Types: struct_5 *
 struct_4 *ptr11; // [bp-0x4c]
 unsigned int v12; // [bp-0x48]
 unsigned int v13; // [bp-0x44]
 unsigned int v14; // [bp-0x40]
 unsigned int v15; // [bp-0x3c]
 unsigned int v16; // [bp-0x38]
 unsigned int v17; // [bp-0x34]
 unsigned int v18; // [bp-0x30]
 unsigned int v19; // [bp-0x2c]
 unsigned int v20; // [bp-0x28]
 struct_8 *v41; // [bp-0x28]
 struct_2 *v21; // [bp-0x24]
 unsigned int v22; // [bp-0x20]
 struct_8 *addr; // [bp+0x4]
 struct_6 *v31; // added for fix

 v20 = 0;
 if (!a0)
 return v20;
 do
 {
 addr = a0;
 v15 = 0;
 v13 = addr->field_0;
 v6 = addr->field_4;
 if (addr->field_4)
 {
 do
 {
 ptr10 = v6;
 ptr7 = ptr10;
 v16 = 0;
 v14 = ptr7->field_0;
 v9 = ptr7->field_4;
 if (ptr7->field_4)
 {
 do
 {
 ptr13 = v9;
 ptr5 = ptr13;
 v17 = 0;
 v19 = ptr5->field_0;
 v10 = ptr5->field_4;
 if (ptr5->field_4)
 {
 do
 {
 ptr11 = v10;
 ptr4 = ptr11;
 v2 = 0;
 p = ptr4->field_4;
 v18 = ptr4->field_0;
 if (ptr4->field_4)
 {
 do
 {
 cur = p->field_4;
 v29 = p->field_0;
 v0 = 0;
 ptr9 = p;
 if (ptr9->field_4)
 {
 v4 = p;
 v5 = p->field_0;
 do
 {
 ptr6 = cur->field_4;
 v3 = 0;
 v1 = cur->field_0;
 if (cur->field_4)
 {
 do
 {
 v31 = ptr6->field_4;
 v32 = 0;
 v12 = ptr6->field_0;
 if (ptr6->field_4)
 {
 do
 {
 ptr = v31;
 v34 = ptr->field_4;
 v35 = ptr->field_0;
 v36 = 0;
 if (ptr->field_4)
 {
 do
 {
 ptr8 = v34;
 v22 = v36;
 v38 = binary_tree_sum(ptr8->field_4);
 v39 = ptr8->field_8;
 v36 = v22 + v38 + ptr8->field_0;
 v34 = v39;
 } while (ptr8->field_8);
 v35 = ptr->field_0 + v36;
 }
 } while ((v41 = ptr6->field_8, v32 += v35, v31 = v41, ptr6->field_8));
 v12 += v32;
 }
 } while ((ptr6 = (struct_3 *)ptr6->field_8, v3 += v12, ptr6->field_8));
 v1 += v3;
 }
 } while ((cur = cur->field_8, v0 += v1, cur->field_8));
 v29 = v5 + v0;
 ptr9 = v4;
 }
 } while ((p = ptr9->field_8, v2 += v29, ptr9->field_8));
 v18 += v2;
 }
 } while ((v17 += v18, ptr11 = (struct_4 *)ptr11->field_8, ptr11->field_8));
 v19 += v17;
 }
 } while ((v16 += v19, v9 = (struct_4 *)ptr13->field_8, ptr13->field_8));
 v14 += v16;
 }
 } while ((v15 += v14, v6 = (struct_5 *)ptr10->field_8, ptr10->field_8));
 v13 += v15;
 }
 } while ((v20 += v13, a0 = (struct_8 *)addr->field_8, addr->field_8));
 return v20;
}


// Function: sub_402211 at 0x402211
int sub_402211()
{
 binary_tree((struct_1 *)0);
 return;
}


// Function: binary_tree at 0x402220
unsigned int binary_tree(struct_1 *a0)
{
 struct_1 *result; // esi
 struct_1 *ptr; // esi
 struct_0 *v3; // ebx
 unsigned int v4; // edi
 unsigned int v5; // ebp
 struct_0 *p; // ebx
 unsigned int v7; // eax
 struct_2 *v8; // ebx
 struct_1 *v9; // esi
 unsigned int v0; // [bp-0x20]

 result = a0;
 v0 = 0;
 if (!result)
 return v0;
 do
 {
 ptr = result;
 v3 = ptr->field_4;
 v4 = ptr->field_0;
 v5 = 0;
 if (ptr->field_4)
 {
 do
 {
 p = v3;
 v7 = binary_tree_sum(p->field_4);
 v8 = p->field_8;
 v5 += v7 + p->field_0;
 v3 = v8;
 } while (p->field_8);
 v4 = ptr->field_0 + v5;
 }
 } while ((v9 = ptr->field_8, v0 += v4, result = ptr->field_8, ptr->field_8));
 return v0;
}


// Function: sub_402278 at 0x402278
int sub_402278()
{
 graph_traverse((struct_1 *)0);
 return;
}


// Function: graph_traverse at 0x402280
unsigned int graph_traverse(struct_1 *a0)
{
 struct_1 *v0; // ecx
 unsigned int v1; // edx
 struct_1 *v2; // ecx
 struct_1 *p; // ecx
 struct_0 *ptr; // eax
 struct_1 *v6; // ecx

 if (!a0->field_8)
 return 0;
 v1 = 0;
 v2 = a0;
 do
 {
 p = v2;
 ptr = p->field_4;
 if (p->field_4)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 } while ((v6 = p->field_8, v2 = p->field_8, v2 != a0));
 return v1;
}


// Function: sub_4022ba at 0x4022ba
int sub_4022ba()
{
 test_composite_types();
 return;
}


// Function: test_composite_types at 0x4022c0
extern unsigned int g_403526;

int test_composite_types()
{
 unsigned long v14; // ldt
 unsigned long v15; // gdt
 unsigned short v16; // gs
 struct_0 *ptr; // eax
 unsigned int v18; // edx
 struct_0 *v19; // eax
 struct_1 *p; // eax
 unsigned int v21; // edx
 unsigned int v0; // [bp-0x40]
 char *v1; // [bp-0x3c]
 char v2; // [bp-0x38], Other Possible Types: unsigned int
 char *v3; // [bp-0x34]
 char v4; // [bp-0x30], Other Possible Types: unsigned int
 unsigned int result; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 char *v7; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v9; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int flag2; // [bp-0x18]
 char *v11; // [bp-0x14]
 unsigned int v12; // [bp-0x10]
 struct_0 *ptr_local; // added for fix
 struct_0 *v19_ptr; // added for fix

 v12 = 0;
 sub_4010b0(&g_403526);
 sub_4010c0(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 sub_4010c0(1, "CMP-L2-02 (struct_array): %d\n", 9);
 sub_4010c0(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 sub_4010c0(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 sub_4010c0(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 sub_4010c0(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 sub_4010c0(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 sub_4010c0(1, "CMP-L2-08 (union_array): %d\n", 60);
 sub_4010c0(1, "CMP-L2-09 (enum_type): %d\n", 10);
 sub_4010c0(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 sub_4010c0(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 ptr_local = (struct_0 *)&v2;
 v0 = 10;
 v3 = &v4;
 v18 = 10;
 v1 = (char *)&v2;
 v2 = 20;
 v4 = 30;
 result = 0;
 do
 {
 v19 = ptr_local->field_4;
 v18 += ptr_local->field_0;
 ptr_local = v19;
 } while (ptr_local != (struct_0 *)0 && ptr_local->field_4 != (struct_0 *)0);
 sub_4010c0(1, "CMP-L2-12 (linked_list): %d\n", v18);
 p = (struct_1 *)&v9;
 v6 = 10;
 v11 = &v6;
 v21 = 10;
 v7 = &v9;
 flag1 = 0;
 v9 = 20;
 flag2 = 0;
 do
 {
 v21 += p->field_0;
 p = p->field_8;
 } while (p && p->field_8);
 sub_4010c0(1, "CMP-L2-13 (doubly_linked_list): %d\n", v21);
 sub_4010c0(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 sub_4010c0(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 if (v12 == *((int *)_ccall(v14, v15, (unsigned int)v16, 20)))
 return v12 - *((int *)_ccall(v14, v15, (unsigned int)v16, 20));
 __stack_chk_fail_local();
}


// Function: __x86.get_pc_thunk_ax at 0x4024b3
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_cx at 0x4024b7
void __x86_get_pc_thunk_cx()
{
 return;
}


// Function: sub_4024bb at 0x4024bb
int sub_4024bb()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x4024c0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010a0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)&v2[1] + 227);
 v4 = (unsigned int *)((char *)ptr + 232);
 if (*v4 == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = (struct_0 *)((char *)ptr + 232);
 do
 {
 p = v6;
 ((void(*)())v4)();
 v4 = (unsigned int *)((char *)p + 4);
 v6 = (struct_0 *)((char *)p + 4);
 } while (*v4 != 0xffffffff);
 return 4294967295;
}


// Function: sub_402522 at 0x402522
void sub_402522()
{
}



/* CRT stub function _fini removed by preprocessor */


