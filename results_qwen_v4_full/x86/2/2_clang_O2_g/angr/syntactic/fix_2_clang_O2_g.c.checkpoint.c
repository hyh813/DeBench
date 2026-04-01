// Angr Decompilation of 2_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

void (*g_405ff0)() = 0;
char *g_4035bf = "=== Data Types Level 1 ===";
char *g_4035e0 = "=== Array Types ===";
char *g_4035fb = "=== Pointer Types ===";
char *g_403616 = "=== Composite Types ===";
unsigned int g_405f10 = 0;
unsigned int g_405f14 = 0;

// Struct definitions (must come before forward declarations that use them)
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
 struct struct_0 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 unsigned int field_12;
 unsigned int field_16;
 unsigned int field_20;
 unsigned int field_24;
 unsigned int field_28;
} struct_1;

// Forward declarations
int process_char(unsigned int a0);
int process_short(unsigned short a0, unsigned short a1);
int process_int(unsigned int a0);
unsigned int process_long(unsigned int a0);
int process_ll(unsigned int a0, unsigned int a1);
int process_float(unsigned int a0);
int process_double();
void process_ld();
unsigned int process_bool(char a0);
int const_param(unsigned int *a0);
unsigned int volatile_access(unsigned int *a0);

// Test function declarations
int test_data_types_l1();
int test_array_types();
int test_pointer_types();
int test_composite_types();

// Array function declarations
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1);
unsigned int array_string(unsigned int a0);
int array_2d_stack(unsigned int *a0);
unsigned int array_3d(unsigned int a0);
unsigned int array_vla(unsigned int a0, unsigned int ptr);
unsigned int array_pointer(unsigned int *a0, unsigned int a1);
unsigned int pointer_array(unsigned int a0, unsigned int a1);
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int array_oob(unsigned int ptr, unsigned int a1);

// Pointer function declarations
int ptr_single(unsigned int *a0);
int ptr_double(struct_0 **a0);
int ptr_triple(struct_1 **a0);
unsigned int ptr_increment(unsigned int *a0, unsigned int a1);
int ptr_offset(unsigned int a0, unsigned int a1);
unsigned int ptr_diff(unsigned int a0, unsigned int a1);
unsigned int ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
int ptr_func_simple(unsigned int *a0, unsigned int a1);
int ptr_func_complex(unsigned int *a0, unsigned int a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);

// Struct/Composite function declarations
int struct_simple(unsigned int *a0);
unsigned int struct_array(unsigned int *a0, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
int struct_with_ptr(struct_0 *a0);
int struct_bitfields(unsigned short *ptr);
int union_type(void* a0, unsigned int a1);
unsigned int union_array(unsigned int ptr, unsigned int a1);
unsigned int enum_type(unsigned int a0);
unsigned int enum_switch(unsigned int a0);
int struct_func_ptr(struct_0 *a0);
unsigned int linked_list(struct_0 *a0);
unsigned int doubly_linked_list(struct_0 *a0);
unsigned int binary_tree_sum(struct_0 *a0);
unsigned int binary_tree(void* a0);
unsigned int graph_traverse(struct_1 *ptr);

// CRT helper declarations
void frame_dummy();
unsigned int __do_global_ctors_aux();




// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401070 at 0x401070
int sub_401070(int a0)
{
 return a0;
}


// Function: sub_401076 at 0x401076
void sub_401076()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010ab at 0x4010ab
void sub_4010ab()
{
}


// Function: sub_4010ac at 0x4010ac
int sub_4010ac()
{
 return 0;
}


// Function: __x86_get_pc_thunk_bx at 0x4010b0
void __x86_get_pc_thunk_bx()
{
}


// Function: sub_4010b4 at 0x4010b4
void sub_4010b4()
{
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int deregister_tm_clones()
{
 return 0;
}



// Function: sub_4010f3 at 0x4010f3
void sub_4010f3()
{
}


// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401147 at 0x401147
void sub_401147()
{
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 return 0;
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy()
{
}



// Function: __x86_get_pc_thunk_dx at 0x4011e9
void __x86_get_pc_thunk_dx()
{
}


// Function: __x86_get_pc_thunk_di at 0x4011ed
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function: sub_4011f1 at 0x4011f1
void sub_4011f1(unsigned int a0)
{
 process_char(a0);
 return;
}


// Function: process_char at 0x401200
int process_char(unsigned int a0)
{
 if ((char)((a0 >= 65) && (a0 <= 90)))
 return (char)a0 + 32;
 return a0;
}


// Function: sub_401216 at 0x401216
void sub_401216(unsigned short a0, unsigned short a1)
{
 process_short(a0, a1);
 return;
}


// Function: process_short at 0x401220
int process_short(unsigned short a0, unsigned short a1)
{
 return a1 + a0;
}


// Function: sub_40122b at 0x40122b
void sub_40122b(unsigned int a0)
{
 process_int(a0);
 return;
}


// Function: process_int at 0x401230
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_40123a at 0x40123a
void sub_40123a(unsigned int a0)
{
 process_long(a0);
 return;
}


// Function: process_long at 0x401240
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401247 at 0x401247
void sub_401247(unsigned int a0, unsigned int a1)
{
 process_ll(a0, a1);
 return;
}


// Function: process_ll at 0x401250
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: sub_401266 at 0x401266
void sub_401266(unsigned int a0)
{
 process_float(a0);
 return;
}


// Function: process_float at 0x401270

int process_float(unsigned int a0)
{
 return a0;
}


// Function: sub_40128d at 0x40128d
void sub_40128d()
{
 process_double();
 return;
}


// Function: process_double at 0x401290

int process_double()
{
 return 0;
}


// Function: sub_4012ad at 0x4012ad
void sub_4012ad()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4012b0
void process_ld()
{
 return;
}


// Function: sub_4012bb at 0x4012bb
void sub_4012bb(unsigned int a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x4012c0
unsigned int process_bool(char a0)
{
 return !a0;
}


// Function: sub_4012d1 at 0x4012d1
void sub_4012d1(unsigned int a0)
{
 const_param(&a0);
 return;
}


// Function: const_param at 0x4012e0
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_4012ea at 0x4012ea
void sub_4012ea(unsigned int a0)
{
 volatile_access(&a0);
 return;
}


// Function: volatile_access at 0x4012f0
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4012f9 at 0x4012f9
int sub_4012f9()
{
 test_data_types_l1();
 return 0;
}


// Function: test_data_types_l1 at 0x401300

int test_data_types_l1()
{
 unsigned int v0;

 puts(g_4035bf);
 v0 = 97;
 printf("DT-L1-01 (process_char): %c\n", v0);
 v0 = 98;
 printf("DT-L1-01 (process_char): %c\n", v0);
 v0 = 300;
 printf("DT-L1-02 (process_short): %d\n", v0);
 v0 = 11;
 printf("DT-L1-03 (process_int): %d\n", v0);
 v0 = 200;
 printf("DT-L1-04 (process_long): %ld\n", v0);
 v0 = 10000;
 printf("DT-L1-05 (process_ll): %lld\n", v0);
 v0 = 0;
 printf("DT-L1-06 (process_float): %.2f\n", 0.0);
 v0 = 0;
 printf("DT-L1-07 (process_double): %.2f\n", 0.0);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 v0 = 1;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 0;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 0;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 15;
 printf("DT-L1-10 (const_param): %d\n", v0);
 v0 = 20;
 return printf("DT-L1-11 (volatile_access): %d\n", v0);
}


// Function: sub_40142e at 0x40142e
void sub_40142e(unsigned int a0, unsigned int a1)
{
 array_1d_stack(a0, a1);
 return;
}


// Function: array_1d_stack at 0x401430
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v2; // eax
 unsigned int idx; // esi

 if (a1 <= 0)
 return 0;
 result = a1 & 7;
 if (a1 - 1 < 7)
 {
 index = 0;
 v2 = 0;
 }
 else
 {
 index = 0;
 v2 = 0;
 do
 {
 v2 = v2 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((a1 & 0xfffffff8) != index);
 }
 if (!result)
 return v2;
 idx = 0;
 do
 {
 v2 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v2;
}


// Function: sub_40149d at 0x40149d
void sub_40149d(unsigned int a0)
{
 array_string(a0);
 return;
}


// Function: array_string at 0x4014a0
unsigned int array_string(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax

 v0 = 4294967295;
 v1 = 0;
 do
 {
 v2 = v0 + 1;
 v0 = v2;
 } while (*((char *)(a0 + v1 + 1)));
 return v1 + 1;
}


// Function: sub_4014bb at 0x4014bb
void sub_4014bb(unsigned int a0)
{
 array_2d_stack((unsigned int *)a0);
 return;
}


// Function: array_2d_stack at 0x4014c0
int array_2d_stack(unsigned int *a0)
{
 return a0[11] + *(a0) + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_4014f7 at 0x4014f7
void sub_4014f7(unsigned int a0)
{
 array_3d(a0);
 return;
}


// Function: array_3d at 0x401500
unsigned int array_3d(unsigned int a0)
{
 unsigned int i;
 unsigned int v1;

 i = 0;
 v1 = 0;
 do
 {
 v1 += 1;
 i += 100;
 } while (i != 500);
 return v1;
}


// Function: sub_40157f at 0x40157f
void sub_40157f(unsigned int a0)
{
 array_vla(a0, a0);
 return;
}


// Function: array_vla at 0x401580
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v2; // eax
 unsigned int idx; // esi

 if (a0 <= 0)
 return 0;
 result = a0 & 7;
 if (a0 - 1 < 7)
 {
 index = 0;
 v2 = 0;
 }
 else
 {
 index = 0;
 v2 = 0;
 do
 {
 v2 = v2 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((a0 & 0xfffffff8) != index);
 }
 if (!result)
 return v2;
 idx = 0;
 do
 {
 v2 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v2;
}


// Function: sub_4015ed at 0x4015ed
int sub_4015ed()
{
 unsigned int arr[10] = {0};
 array_pointer(arr, 10);
 return 0;
}


// Function: array_pointer at 0x4015f0
unsigned int array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned int result; // ecx
 unsigned int i; // esi
 unsigned int v2; // eax
 unsigned int *ptr; // ebx
 unsigned int j; // esi

 if (a1 <= 0)
 return 0;
 result = a1 & 3;
 if (a1 - 1 < 3)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 i = 0;
 v2 = 0;
 ptr = a0;
 do
 {
 v2 = v2 + ptr[0] + ptr[10] + ptr[20] + ptr[30];
 i += 4;
 ptr = &ptr[1 + 9];
 } while ((a1 & 0xfffffffc) != i);
 }
 if (!result)
 return v2;
 j = 0;
 do
 {
 v2 += *((int *)((char *)&a0[10 * i] + j));
 j += 40;
 } while (result * 40 != j);
 return v2;
}


// Function: sub_40165e at 0x40165e
int sub_40165e()
{
 unsigned int arr[10] = {0};
 pointer_array((unsigned int)arr, 10);
 return 0;
}


// Function: pointer_array at 0x401660
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int result; // eax
 unsigned int idx; // esi
 unsigned int cur; // eax

 result = a1;
 if (result <= 0)
 return 0;
 if (result >= 10)
 result = 10;
 if (result == 1)
 {
 idx = 0;
 cur = 0;
 }
 else
 {
 idx = 0;
 cur = 0;
 do
 {
 if (*((int *)(a0 + idx * 4)))
 cur += *((int *)*((int *)(a0 + idx * 4)));
 if (*((int *)(a0 + idx * 4 + 4)))
 cur += *((int *)*((int *)(a0 + idx * 4 + 4)));
 idx += 2;
 } while ((result & 14) != idx);
 }
 return cur;
}


// Function: sub_4016a4 at 0x4016a4
void sub_4016a4()
{
}


// Function: sub_4016cc at 0x4016cc
void sub_4016cc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 array_complex_index(a0, a1, a2, a3, a0);
 return;
}


// Function: array_complex_index at 0x4016d0
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a3 >= 0 && a4 < a2 && a3 < a1 && a4 >= 0)
 v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
 return v0;
}


// Function: sub_401702 at 0x401702
void sub_401702(unsigned int a0, unsigned int a1)
{
 array_oob(a0, a1);
 return;
}


// Function: array_oob at 0x401710
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // edi
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v3; // eax
 unsigned int idx; // esi

 if (a1 < 0)
 return 0;
 v0 = a1 + 1;
 result = v0 & 7;
 if (a1 < 7)
 {
 index = 0;
 v3 = 0;
 }
 else
 {
 index = 0;
 v3 = 0;
 do
 {
 v3 = v3 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((v0 & 0xfffffff8) != index);
 }
 if (!result)
 return v3;
 idx = 0;
 do
 {
 v3 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v3;
}


// Function: sub_40177d at 0x40177d
int sub_40177d()
{
 return test_array_types();
}


// Function: test_array_types at 0x401780

int test_array_types()
{
 unsigned int v0;

 puts(g_4035e0);
 v0 = 15;
 printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
 v0 = 5;
 printf("ARR-L1-02 (array_string): %d\n", v0);
 v0 = 45;
 printf("ARR-L1-03 (array_2d_stack): %d\n", v0);
 v0 = 5;
 printf("ARR-L1-04 (array_3d): %d\n", v0);
 v0 = 60;
 printf("ARR-L2-01 (array_vla): %d\n", v0);
 v0 = 100;
 printf("ARR-L2-02 (array_pointer): %d\n", v0);
 v0 = 60;
 printf("ARR-L2-03 (pointer_array): %d\n", v0);
 v0 = 17;
 return printf("ARR-L2-04 (array_complex_index): %d\n", v0);
}


// Function: sub_401a55 at 0x401a55
void sub_401a55(unsigned int a0)
{
 ptr_single((unsigned int *)a0);
 return;
}


// Function: ptr_single at 0x401a60
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401a6a at 0x401a6a
void sub_401a6a(unsigned int a0)
{
 struct_0 *ptr = (struct_0 *)a0;
 ptr_double(&ptr);
 return;
}


// Function: ptr_double at 0x401a70
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_401a7c at 0x401a7c
void sub_401a7c(unsigned int a0)
{
 struct_1 *ptr = (struct_1 *)a0;
 ptr_triple(&ptr);
 return;
}


// Function: ptr_triple at 0x401a80
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0 + 1;
}


// Function: sub_401a8e at 0x401a8e
void sub_401a8e(unsigned int a0, unsigned int a1)
{
 ptr_increment((unsigned int *)a0, a1);
 return;
}


// Function: ptr_increment at 0x401a90
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int *cur; // ecx
 unsigned int result; // edx
 unsigned int v2; // eax
 unsigned int i; // esi
 unsigned int index; // esi

 if (a1 <= 0)
 return 0;
 cur = a0;
 result = a1 & 7;
 if (a1 - 1 < 7)
 {
 v2 = 0;
 }
 else
 {
 i = a1 & 0xfffffff8;
 v2 = 0;
 do
 {
 v2 = v2 + cur[0] + cur[1] + cur[2] + cur[3] + cur[4] + cur[5] + cur[6] + cur[7];
 cur += 1;
 i -= 8;
 } while (i != 8);
 }
 if (!result)
 return v2;
 index = 0;
 do
 {
 v2 += cur[index];
 index += 1;
 } while (result != index);
 return v2;
}


// Function: sub_401afc at 0x401afc
void sub_401afc(unsigned int a0, unsigned int a1)
{
 ptr_offset(a0, a1);
 return;
}


// Function: ptr_offset at 0x401b00
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401b0c at 0x401b0c
void sub_401b0c(unsigned int a0, unsigned int a1)
{
 ptr_diff(a0, a1);
 return;
}


// Function: ptr_diff at 0x401b10
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c(unsigned int a0, unsigned int a1)
{
 ptr_void((void *)a0, a1);
 return;
}


// Function: ptr_void at 0x401b20
unsigned int ptr_void(void* a0, unsigned int a1)
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


// Function: sub_401b3d at 0x401b3d
void sub_401b3d(unsigned int a0)
{
 ptr_const((unsigned int *)a0);
 return;
}


// Function: ptr_const at 0x401b40
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401b49 at 0x401b49
void sub_401b49(unsigned int a0)
{
 ptr_const_ptr((unsigned int *)a0);
 return;
}


// Function: ptr_const_ptr at 0x401b50
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401b5c at 0x401b5c
int sub_401b5c()
{
 unsigned int arr[10] = {0};
 ptr_func_simple(arr, 10);
 return 0;
}


// Function: ptr_func_simple at 0x401b60
int ptr_func_simple(unsigned int *a0, unsigned int a1)
{
 return a0[0];
}


// Function: ptr_func_complex at 0x401b80

int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v0;
 unsigned int v1;

 v1 = g_405f14;
 v0 = g_405f10;
 return a0[0];
}


// Function: sub_401bb9 at 0x401bb9
void sub_401bb9(unsigned int a0)
{
 ptr_cast((unsigned int *)a0);
 return;
}


// Function: ptr_cast at 0x401bc0
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401bc7 at 0x401bc7
void sub_401bc7(unsigned int a0)
{
 opaque_handle_create(a0);
 return;
}


// Function: opaque_handle_create at 0x401bd0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401bd5 at 0x401bd5
void sub_401bd5(unsigned int a0)
{
 opaque_handle_op(a0);
 return;
}


// Function: opaque_handle_op at 0x401be0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401be7 at 0x401be7
int sub_401be7()
{
 return test_pointer_types();
}


// Function: test_pointer_types at 0x401bf0

int test_pointer_types()
{
 unsigned int v0;

 puts(g_4035fb);
 v0 = 15;
 printf("PTR-L2-01 (ptr_single): %d\n", v0);
 v0 = 15;
 printf("PTR-L2-02 (ptr_double): %d\n", v0);
 v0 = 6;
 printf("PTR-L2-03 (ptr_triple): %d\n", v0);
 v0 = 15;
 printf("PTR-L2-04 (ptr_increment): %d\n", v0);
 v0 = 30;
 printf("PTR-L2-05 (ptr_offset): %d\n", v0);
 v0 = 4;
 printf("PTR-L2-06 (ptr_diff): %d\n", v0);
 v0 = 42;
 printf("PTR-L2-07 (ptr_void): %d\n", v0);
 v0 = 65;
 printf("PTR-L2-07 (ptr_void): %d\n", v0);
 v0 = 20;
 printf("PTR-L2-08 (ptr_const): %d\n", v0);
 v0 = 15;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", v0);
 v0 = 10;
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v0);
 v0 = 1;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v0);
 v0 = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v0);
 v0 = 20;
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", v0);
}


// Function: sub_401d43 at 0x401d43
void sub_401d43(unsigned int a0)
{
 struct_simple((unsigned int *)a0);
 return;
}


// Function: struct_simple at 0x401d50
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_401d5d at 0x401d5d
int sub_401d5d()
{
 unsigned int arr[10] = {0};
 struct_array(arr, 10);
 return 0;
}


// Function: struct_array at 0x401d60
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int i; // esi
 unsigned int v1; // eax
 unsigned int *cur; // edi

 if (a1 <= 0)
 return 0;
 if (a1 == 1)
 {
 i = 0;
 v1 = 0;
 }
 else
 {
 cur = a0 + 5;
 i = 0;
 v1 = 0;
 do
 {
 v1 = v1 + cur[5] + cur[4] + cur[3] + cur[2] + cur[1] + cur[0];
 i += 2;
 cur += 1;
 } while ((a1 & 4294967294) != i);
 }
 return v1 + a0[3 * i] + a0[1 + 3 * i] + a0[2 + 3 * i];
}


// Function: sub_401dc2 at 0x401dc2
void sub_401dc2(unsigned int a0)
{
 struct_nested((unsigned int *)a0);
 return;
}


// Function: struct_nested at 0x401dd0
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_401dda at 0x401dda
void sub_401dda(unsigned int a0)
{
 struct_deep((unsigned int *)a0);
 return;
}


// Function: struct_deep at 0x401de0
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_401deb at 0x401deb
void sub_401deb(unsigned int a0)
{
 struct_with_ptr((struct_0 *)a0);
 return;
}


// Function: struct_with_ptr at 0x401df0
int struct_with_ptr(struct_0 *a0)
{
 if (!a0->field_4)
 return 0 + a0->field_0;
 return a0->field_4->field_0 + a0->field_0;
}


// Function: sub_401e07 at 0x401e07
void sub_401e07(unsigned int a0)
{
 struct_bitfields((unsigned short *)a0);
 return;
}


// Function: struct_bitfields at 0x401e10
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // eax

 v0 = *(ptr);
 return (v0 >> 6) + (v0 & 1) + (v0 >> 1 & 3) + (v0 >> 3 & 7);
}


// Function: sub_401e37 at 0x401e37
void sub_401e37(unsigned int a0, unsigned int a1)
{
 union_type((void *)a0, a1);
 return;
}


// Function: union_type at 0x401e40
int union_type(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return 0;
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


// Function: sub_401e87 at 0x401e87
void sub_401e87(unsigned int a0, unsigned int a1)
{
 union_array(a0, a1);
 return;
}


// Function: union_array at 0x401e90
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v2; // eax
 unsigned int idx; // esi

 if (a1 <= 0)
 return 0;
 result = a1 & 7;
 if (a1 - 1 < 7)
 {
 index = 0;
 v2 = 0;
 }
 else
 {
 index = 0;
 v2 = 0;
 do
 {
 v2 = v2 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((a1 & 0xfffffff8) != index);
 }
 if (!result)
 return v2;
 idx = 0;
 do
 {
 v2 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v2;
}


// Function: sub_401efd at 0x401efd
void sub_401efd(unsigned int a0)
{
 enum_type(a0);
 return;
}


// Function: enum_type at 0x401f00
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401f0a at 0x401f0a
void sub_401f0a(unsigned int a0)
{
 enum_switch(a0);
 return;
}


// Function: enum_switch at 0x401f10

unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0;

 v0 = 4294967197;
 if (a0 <= 3)
 v0 = a0 * 10;
 return v0;
}


// Function: sub_401f32 at 0x401f32
int sub_401f32()
{
 struct_0 obj = {0, 0};
 struct_func_ptr(&obj);
 return 0;
}


// Function: struct_func_ptr at 0x401f40
int struct_func_ptr(struct_0 *a0)
{
 if (a0 && a0->field_4)
 return a0->field_4->field_0;
 return 0;
}


// Function: sub_401f61 at 0x401f61
void sub_401f61(unsigned int a0)
{
 linked_list((struct_0 *)a0);
 return;
}


// Function: linked_list at 0x401f70
unsigned int linked_list(struct_0 *a0)
{
 struct_0 *ptr;
 unsigned int v1;

 ptr = a0;
 v1 = 0;
 while (ptr)
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 }
 return v1;
}


// Function: sub_401f8a at 0x401f8a
void sub_401f8a(unsigned int a0)
{
 doubly_linked_list((struct_0 *)a0);
 return;
}


// Function: doubly_linked_list at 0x401f90
unsigned int doubly_linked_list(struct_0 *a0)
{
 struct_0 *ptr;
 unsigned int v1;

 ptr = a0;
 v1 = 0;
 while (ptr)
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 }
 return v1;
}


// Function: sub_401faa at 0x401faa
int sub_401faa()
{
 struct_0 *tree = 0;
 binary_tree_sum(tree);
 return 0;
}


// Function: binary_tree_sum at 0x401fb0
unsigned int binary_tree_sum(struct_0 *a0)
{
 unsigned int v1;

 if (!a0)
 return 0;
 v1 = a0->field_0;
 if (a0->field_8)
 v1 += binary_tree_sum(a0->field_8);
 return v1;
}


// Function: sub_401fef at 0x401fef
int sub_401fef()
{
 struct_0 *tree = 0;
 binary_tree(tree);
 return 0;
}


// Function: binary_tree at 0x401ff0
unsigned int binary_tree(void* a0)
{
 return binary_tree_sum((struct_0 *)a0);
}


// Function: sub_402011 at 0x402011
int sub_402011()
{
 struct_1 graph = {0};
 graph_traverse(&graph);
 return 0;
}


// Function: graph_traverse at 0x402020
unsigned int graph_traverse(struct_1 *ptr)
{
 unsigned int result;
 unsigned int idx;
 unsigned int cur;

 result = ptr->field_28;
 if (result <= 0)
 return 0;
 idx = 0;
 cur = 0;
 return cur;
}


// Function: sub_40206c at 0x40206c
void sub_40206c()
{
}


// Function: sub_4020ab at 0x4020ab
int sub_4020ab()
{
 return test_composite_types();
}


// Function: test_composite_types at 0x4020b0

int test_composite_types()
{
 unsigned int v0;

 puts(g_403616);
 v0 = 6;
 printf("CMP-L2-01 (struct_simple): %d\n", v0);
 v0 = 9;
 printf("CMP-L2-02 (struct_array): %d\n", v0);
 v0 = 105;
 printf("CMP-L2-03 (struct_nested): %d\n", v0);
 v0 = 258;
 printf("CMP-L2-04 (struct_deep): %d\n", v0);
 v0 = 30;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v0);
 v0 = 106;
 printf("CMP-L2-06 (struct_bitfields): %d\n", v0);
 v0 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n", v0);
 v0 = 60;
 printf("CMP-L2-08 (union_array): %d\n", v0);
 v0 = 10;
 printf("CMP-L2-09 (enum_type): %d\n", v0);
 v0 = 50;
 printf("CMP-L2-10 (enum_switch): %d\n", v0);
 v0 = 21;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v0);
 v0 = 60;
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v0 = 30;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v0);
 v0 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", v0);
 v0 = 1;
 return printf("CMP-L2-15 (graph_traverse): %d\n", v0);
}


// Function: sub_4022e2 at 0x4022e2
int sub_4022e2()
{
 return main();
}


// Function: main at 0x4022f0
int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_40231b at 0x40231b
void sub_40231b()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_402362 at 0x402362
void sub_402362()
{
}



/* CRT stub function _fini removed by preprocessor */


