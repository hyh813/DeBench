// Angr Decompilation of 2_clang_O0_g
// Platform: X86

#include <stdio.h>
#include <string.h>

// Forward declarations for CRT stubs
int frame_dummy();
int deregister_tm_clones();
int register_tm_clones();
int __do_global_ctors_aux();
int __do_global_dtors_aux();
unsigned int __x86_get_pc_thunk_dx();
int __x86_get_pc_thunk_di(int a0, char *a1);
int sub_401070(unsigned int a0);

// External function declarations
int main();
int process_char(char a0);
short process_short(unsigned short a0, unsigned short a1);
int process_int(unsigned int a0);
unsigned int process_long(unsigned int a0);
int process_ll(unsigned int a0, unsigned int a1);
float process_float(float a0);
double process_double(double a0);
void process_ld();
char process_bool(unsigned int a0);
int const_param(unsigned int *a0);
int volatile_access(unsigned int *ptr);
int test_data_types_l1();
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1);
unsigned int array_string(unsigned int a0);
unsigned int array_2d_stack(unsigned int a0);
unsigned int array_3d(unsigned int a0);
unsigned int array_vla(unsigned int a0, unsigned int ptr);
unsigned int array_pointer(unsigned int ptr, unsigned int a1);
unsigned int pointer_array(unsigned int a0, unsigned int a1);
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int array_oob(unsigned int ptr, unsigned int a1);
int test_array_types();
int ptr_single(unsigned int *a0);
int ptr_double(unsigned int **a0);
int ptr_triple(unsigned int ***a0);
unsigned int ptr_increment(unsigned int *cur, unsigned int a1);
int ptr_offset(unsigned int a0, unsigned int a1);
unsigned int ptr_diff(unsigned int a0, unsigned int a1);
unsigned int ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
int ptr_func_simple(int (*a0)(unsigned int, int, char *), unsigned int a1);
int ptr_func_complex(int (*a0)(unsigned int, unsigned int *), unsigned int a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);
int test_pointer_types();
unsigned int double_value(unsigned int a0);
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1);
int struct_simple(unsigned int *a0);
unsigned int struct_array(unsigned int ptr, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
int struct_with_ptr(unsigned int *ptr);
short struct_bitfields(unsigned short *a0);
int union_type(void* ptr, unsigned int a1);
unsigned int union_array(unsigned int ptr, unsigned int a1);
unsigned int enum_type(unsigned int a0);
unsigned int enum_switch(unsigned int a0);
int struct_func_ptr(unsigned int *a0);
unsigned int linked_list(unsigned int *a0);
unsigned int doubly_linked_list(unsigned int *a0);
unsigned int binary_tree_sum(unsigned int *ptr);
unsigned int binary_tree(unsigned int *a0);
unsigned int graph_traverse(unsigned int **ptr);
int test_composite_types();

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned int field_0;
 char padding_0[256];
 char padding_4e97[256];
 unsigned int field_4ef7;
} struct_0;

typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

extern void (*g_405ff4)();
extern char _GLOBAL_OFFSET_TABLE_[];
extern char g_40312c[];
extern char g_403298[];
extern char g_4033b5[];
extern char g_40354f[];
extern unsigned int g_405f0c;
extern unsigned int g_405f10;

int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 ptr[0] = 0;
 ptr[1] = 0;
 ptr[2] = 0;
 v0 = ptr[1];
 return v0;
}


// Function: sub_401070 at 0x401070
int sub_401070(unsigned int a0)
{
 void* v1; // ebx

 v1 = (void*)0;
 return 0;
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
void sub_4010ac()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010b0
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_4010b4 at 0x4010b4
void sub_4010b4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010f3 at 0x4010f3
void sub_4010f3()
{
}


// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

int register_tm_clones()
{
 return 0;
}


// Function: sub_401147 at 0x401147
void sub_401147()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

int __do_global_dtors_aux()
{
 unsigned int v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 int v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_4e97[11];
 v8 = 0;
 v9 = 0;
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[32])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_401070(*((int *)&ptr->padding_0[28]));
 v10 = &ptr->padding_0[252];
 v11 = *((int *)&ptr->padding_0[36]);
 i = (&ptr->padding_0[248] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[36]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[36]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[36]);
 } while (*((int *)&ptr->padding_0[36]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[32] = 1;
 return v14;
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x4011e9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x4011ed
int __x86_get_pc_thunk_di(int a0, char *a1)
{
 unsigned int v0; // eax

 v0 = 0;
 return v0;
}


// Function: sub_4011f1 at 0x4011f1
void sub_4011f1(char a0)
{
 process_char(a0);
 return;
}


// Function: process_char at 0x401200
int process_char(char a0)
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x8]
 char v1; // [bp-0x5]

 v2 = 0;
 v0 = v2;
 if (a0 >= 65 && a0 <= 90)
 {
 v1 = a0 + 32;
 return v1;
 }
 v1 = a0;
 return v1;
}


// Function: sub_40123f at 0x40123f
void sub_40123f(unsigned short a0, unsigned short a1)
{
 process_short(a0, a1);
 return;
}


// Function: process_short at 0x401240
short process_short(unsigned short a0, unsigned short a1)
{
 return a0 + a1;
}


// Function: sub_401258 at 0x401258
void sub_401258(unsigned int a0)
{
 process_int(a0);
 return;
}


// Function: process_int at 0x401260
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_401271 at 0x401271
void sub_401271(unsigned int a0)
{
 process_long(a0);
 return;
}


// Function: process_long at 0x401280
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40128e at 0x40128e
void sub_40128e(unsigned int a0, unsigned int a1)
{
 process_ll(a0, a1);
 return;
}


// Function: process_ll at 0x401290
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: sub_4012ae at 0x4012ae
void sub_4012ae(unsigned int a0)
{
 process_float((float)a0);
 return;
}


// Function: process_float at 0x4012b0
float process_float(float a0)
{
 return a0 * 2.0f;
}


// Function: sub_4012d9 at 0x4012d9
void sub_4012d9()
{
 process_double(0.0);
 return;
}


// Function: process_double at 0x4012e0
double process_double(double a0)
{
 return a0 * 2.0;
}


// Function: sub_401309 at 0x401309
void sub_401309()
{
 process_ld();
 return;
}


// Function: process_ld at 0x401310
void process_ld()
{
 return;
}


// Function: sub_40132a at 0x40132a
void sub_40132a(unsigned int a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x401330
char process_bool(unsigned int a0)
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x8]
 char v1; // [bp-0x5]

 v2 = 0;
 v0 = v2;
 v1 = 0;
 if (a0 > 0)
 v1 = (a0 & 1) ^ 1;
 return v1 & 1;
}


// Function: sub_401367 at 0x401367
void sub_401367(unsigned int a0)
{
 const_param(&a0);
 return;
}


// Function: const_param at 0x401370
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x401380
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = *(ptr);
 v0 = *(ptr);
 return v1 + v0;
}


// Function: sub_4013a4 at 0x4013a4
int sub_4013a4()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x4013b0
int test_data_types_l1()
{
 unsigned int v8; // edx
 char *v0; // [bp-0x2c]
 double v1; // [bp-0x28], Other Possible Types: unsigned int, unsigned long
 unsigned int v2; // [bp-0x24]
 char *v3; // [bp-0x18]
 char *v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]

 v4 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_40312c);
 process_char(65);
 v3 = v4 + 11954;
 printf(v3);
 process_char(98);
 printf(v3);
 process_short(100, 200);
 printf(v4 + 11925);
 process_int(5);
 printf(v4 + 11895);
 process_long(100);
 printf(v4 + 11867);
 v8 = 0;
 v2 = v8;
 v1 = process_ll(100, 0);
 printf(v4 + 11837);
 process_float(0x40000000);
 printf(v4 + 11808);
 v1 = 0x40100000;
 process_double(0.0);
 v0 = v4 + 0x2e00;
 printf(v4 + 0x2e00);
 process_ld();
 printf(v4 + 11743);
 process_bool(4);
 printf(v4 + 11713);
 process_bool(3);
 printf(v4 + 11713);
 process_bool(4294967294);
 printf(v4 + 11713);
    v6 = 5;
    const_param(&v6);
    printf(v4 + 11684);
    v5 = 10;
 volatile_access(&v5);
 return printf(v4 + 11656);
}


// Function: sub_401632 at 0x401632
void sub_401632(unsigned int a0)
{
 array_1d_stack(0, a0);
 return;
}


// Function: array_1d_stack at 0x401640
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: sub_40168b at 0x40168b
void sub_40168b(unsigned int a0)
{
 array_string(a0);
 return;
}


// Function: array_string at 0x401690
unsigned int array_string(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int i; // [bp-0x8]

 v1 = 0;
 i = v1;
 for (i = 0; *((char *)(a0 + i)); i += 1);
 return i;
}


// Function: sub_4016c7 at 0x4016c7
void sub_4016c7(unsigned int a0)
{
 array_2d_stack(a0);
 return;
}


// Function: array_2d_stack at 0x4016d0
unsigned int array_2d_stack(unsigned int a0)
{
 unsigned int idx; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (idx = 0; idx < 10; idx += 1)
 {
 v1 += *((int *)(a0 + idx * 40 + idx * 4));
 }
 return v1;
}


// Function: sub_40171c at 0x40171c
void sub_40171c(unsigned int a0)
{
 array_3d(a0);
 return;
}


// Function: array_3d at 0x401720
unsigned int array_3d(unsigned int a0)
{
 unsigned int idx; // [bp-0x14]
 unsigned int j; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = 0;
 for (v2 = 0; v2 < 5; v2 += 1)
 {
 for (j = 0; j < 5; j += 1)
 {
 for (idx = 0; idx < 5; idx += 1)
 {
 v3 += *((int *)(a0 + v2 * 100 + j * 20 + idx * 4));
 }
 }
 }
 return v3;
}


// Function: sub_4017ba at 0x4017ba
void sub_4017ba(unsigned int a0)
{
 array_vla(a0, 0);
 return;
}


// Function: array_vla at 0x4017c0
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (v0 = 0; v0 < a0; v0 += 1)
 {
 v1 += *((int *)(ptr + v0 * 4));
 }
 return v1;
}


// Function: sub_40180b at 0x40180b
void sub_40180b(unsigned int a0)
{
 array_pointer(0, a0);
 return;
}


// Function: array_pointer at 0x401810
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (v0 = 0; v0 < a1; v0 += 1)
 {
 v1 += *((int *)(ptr + v0 * 40));
 }
 return v1;
}


// Function: sub_40185d at 0x40185d
void sub_40185d(unsigned int a0, unsigned int a1)
{
 pointer_array(a0, a1);
 return;
}


// Function: pointer_array at 0x401860
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int idx; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = 0;
 v0 = (a1 < 10 ? a1 : 10);
 v2 = v0;
 for (idx = 0; idx < v2; idx += 1)
 {
 if (*((int *)(a0 + idx * 4)))
 v3 += *((int *)*((int *)(a0 + idx * 4)));
 }
 return v3;
}


// Function: sub_4018ea at 0x4018ea
void sub_4018ea(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 array_complex_index(0, a0, a1, a2, a3);
 return;
}


// Function: array_complex_index at 0x4018f0
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x8]

 v1 = 0;
 v0 = v1;
 if (a3 >= 0 && a3 < a1 && a4 >= 0 && a4 < a2)
 {
 v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_401956 at 0x401956
void sub_401956(unsigned int a0)
{
 array_oob(0, a0);
 return;
}


// Function: array_oob at 0x401960
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (idx = 0; idx <= a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: sub_4019ab at 0x4019ab
int sub_4019ab()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x4019b0
int test_array_types()
{
 char *p; // ebx
 char *ptr; // ebx
 char *l; // [bp-0x530]
 char *v1; // [bp-0x52c]
 char *addr; // [bp-0x528]
 unsigned int v3; // [bp-0x524]
 char *v4; // [bp-0x520]
 unsigned int pos; // [bp-0x51c]
 unsigned int v6[20]; // [bp-0x518]
 char *v7; // [bp-0x4c8]
 char *v8; // [bp-0x4c4]
 char *v9; // [bp-0x4c0]
 unsigned int result; // [bp-0x4bc]
 char v11[20]; // [bp-0x4b8]
 unsigned int v12; // [bp-0x4a0]
 unsigned int v13; // [bp-0x49c]
 unsigned int v14; // [bp-0x498]
 unsigned int index; // [bp-0x494]
 unsigned int v16[50]; // [bp-0x490]
 unsigned int v17; // [bp-0x3c8]
 unsigned int v18; // [bp-0x3c4]
 unsigned int v19; // [bp-0x3c0]
 unsigned int idx; // [bp-0x3bc]
 unsigned int i0; // [bp-0x3b8]
 unsigned int j; // [bp-0x3b4]
 char v23[500]; // [bp-0x3b0]
 unsigned int off; // [bp-0x1bc]
 unsigned int i; // [bp-0x1b8]
 unsigned int v26[100]; // [bp-0x1b4]
 unsigned int v27; // [bp-0x22]
 unsigned short v28; // [bp-0x1e]
 char v29[20]; // [bp-0x1c]

 v4 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_403298);
    memcpy(v29, (char *)v4 - 12208, 20);
    array_1d_stack((unsigned int)&v29, 5);
 printf(v4 - 11596);
 p = v4;
    v27 = (int)((char *)p)[11564];
    v28 = (short)((char *)p)[11560];
    array_string((unsigned int)&v27);
 printf(v4 - 11558);
 for (i = 0; i < 10; i += 1)
 {
 for (off = 0; off < 10; off += 1)
 {
 v3 = (i == off ? i : 0);
 ((unsigned int *)(&v26))[10 * i + off] = v3;
 }
 }
 array_2d_stack(&v26);
 printf(v4 - 11528);
 for (j = 0; j < 5; j += 1)
 {
 for (i0 = 0; i0 < 5; i0 += 1)
 {
 for (idx = 0; idx < 5; idx += 1)
 {
 *((unsigned int *)((char *)&v23 + 100 * j + 20 * i0 + 4 * idx)) = 1;
 }
 }
 }
 array_3d(&v23);
 printf(v4 - 11496);
    ptr = v4;
    v17 = (int)((char *)ptr)[12188];
    v18 = (int)((char *)ptr)[12184];
    v19 = (int)((char *)ptr)[12180];
    array_vla(3, (unsigned int)&v17);
 printf(v4 - 11470);
 for (index = 0; index < 5; index += 1)
 {
 ((unsigned int *)(&v16))[10 * index] = index * 10;
 }
 array_pointer(&v16, 5);
 printf(v4 - 11443);
 v14 = 10;
 v13 = 20;
 v12 = 30;
 v7 = &v14;
 v8 = &v13;
 v9 = &v12;
 result = 0;
 v1 = &v12;
 addr = &v11;
 do
 {
 *((unsigned int *)&addr) = 0;
 l = addr + 4;
 addr = l;
 } while (l != v1);
 pointer_array(&v7, 3);
 printf(v4 - 11412);
 for (pos = 0; pos < 20; pos += 1)
 {
 ((unsigned int *)(&v6))[pos] = pos;
 }
 array_complex_index(&v6, 5, 4, 2, 3);
 return printf(v4 - 11381);
}


// Function: sub_401e4a at 0x401e4a
void sub_401e4a(unsigned int a0)
{
 ptr_single(&a0);
 return;
}


// Function: ptr_single at 0x401e50
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x401e60
int ptr_double(unsigned int **a0)
{
 return **a0 + 5;
}


// Function: sub_401e72 at 0x401e72
void sub_401e72(unsigned int a0)
{
 unsigned int *p = &a0;
 unsigned int **pp = &p;
 ptr_triple(&pp);
 return;
}


// Function: ptr_triple at 0x401e80
int ptr_triple(unsigned int ***a0)
{
 return ***a0 + 1;
}


// Function: sub_401e94 at 0x401e94
void sub_401e94(unsigned int a0)
{
 ptr_increment(&a0, 0);
 return;
}


// Function: ptr_increment at 0x401ea0
unsigned int ptr_increment(unsigned int *cur, unsigned int a1)
{
 unsigned int i; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *(cur);
 cur += 1;
 }
 return v1;
}


// Function: ptr_offset at 0x401ef0
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401f04 at 0x401f04
void sub_401f04(unsigned int a0, unsigned int a1)
{
 ptr_diff(a0, a1);
 return;
}


// Function: ptr_diff at 0x401f10
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_401f26 at 0x401f26
void sub_401f26(unsigned int a0, unsigned int a1)
{
 ptr_void((void*)&a0, a1);
 return;
}


// Function: ptr_void at 0x401f30
unsigned int ptr_void(void* a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x8]

 v1 = 0;
 v0 = v1;
 v0 = (!a1 ? *((int *)a0) : (a1 == 1 ? *((char *)a0) : 4294967295));
 return v0;
}


// Function: sub_401f7d at 0x401f7d
void sub_401f7d(unsigned int a0)
{
 ptr_const(&a0);
 return;
}


// Function: ptr_const at 0x401f80
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401f92 at 0x401f92
void sub_401f92(unsigned int a0)
{
 ptr_const_ptr(&a0);
 return;
}


// Function: ptr_const_ptr at 0x401fa0
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Function: sub_401fba at 0x401fba
int sub_401fba()
{
 return ptr_func_simple(0, 0);
}


// Function: ptr_func_simple at 0x401fc0
int ptr_func_simple(int (*a0)(unsigned int, int, char *), unsigned int a1)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return a0(a1, *((int *)&v0), &v1);
}


// Function: sub_401fe8 at 0x401fe8
int sub_401fe8()
{
 return ptr_func_complex(0, 0);
}


// Function: ptr_func_complex at 0x401ff0
int ptr_func_complex(int (*a0)(unsigned int, unsigned int *), unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = g_405f0c;
 v1 = g_405f10;
 return a0(a1, &v0);
}


// Function: sub_402033 at 0x402033
void sub_402033(unsigned int a0)
{
 ptr_cast(&a0);
 return;
}


// Function: ptr_cast at 0x402040
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_402065 at 0x402065
void sub_402065(unsigned int a0)
{
 opaque_handle_create(a0);
 return;
}


// Function: opaque_handle_create at 0x402070
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_40207b at 0x40207b
void sub_40207b(unsigned int a0)
{
 opaque_handle_op(a0);
 return;
}


// Function: opaque_handle_op at 0x402080
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40208e at 0x40208e
int sub_40208e()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x402090
int test_pointer_types()
{
 char *v0; // [bp-0x84]
 unsigned int v1; // [bp-0x80]
 unsigned int v2; // [bp-0x7c]
 unsigned int v3; // [bp-0x78]
 unsigned int v4; // [bp-0x74]
 unsigned int v5; // [bp-0x70]
 char v6[4]; // [bp-0x69]
 unsigned int v7; // [bp-0x68]
 char v8[24]; // [bp-0x64]
 unsigned int v9; // [bp-0x54]
 char v10[20]; // [bp-0x50]
 char v11[20]; // [bp-0x3c]
 struct_2 **v12; // [bp-0x28]
 struct_3 **v13; // [bp-0x24]
 char *v14; // [bp-0x20]
 unsigned int v15; // [bp-0x1c]
 struct_0 **v16; // [bp-0x18]
 char *v17; // [bp-0x14]
 unsigned int v18; // [bp-0x10]
 unsigned int v19; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_4033b5);
    v19 = 5;
    ptr_single(&v19);
 printf(v0 - 11311);
 v18 = 10;
 v17 = &v18;
 v16 = &v17;
 ptr_double(v16);
 printf(v0 - 11283);
 v15 = 5;
 v14 = &v15;
 v13 = &v14;
 v12 = &v13;
 ptr_triple(v12);
 printf(v0 - 11255);
    memcpy(v11, (char *)v0 - 12176, 20);
    ptr_increment((unsigned int *)&v11, 5);
 printf(v0 - 11227);
    memcpy(v10, (char *)v0 - 12156, 20);
    ptr_offset((unsigned int)&v10, 2);
 printf(v0 - 11196);
    memcpy(v8, (char *)v0 - 12136, 20);
    ptr_diff((unsigned int)v8, (unsigned int)&v9);
    printf(v0 - 11168);
 v7 = 42;
 v6[0] = 65;
 ptr_void(&v7, 0);
 printf(v0 - 11142);
 ptr_void(&v6, 1);
 printf(v0 - 11142);
    v5 = 10;
    ptr_const(&v5);
 printf(v0 - 11116);
    v4 = 10;
    ptr_const_ptr(&v4);
 printf(v0 - 11089);
 ptr_func_simple(v0 - 15424, 5);
 printf(v0 - 11058);
 v3 = 5;
 ptr_func_complex(v0 - 15408, &v3);
 printf(v0 - 11025);
    v2 = 305419896;
    ptr_cast(&v2);
 printf(v0 - 10991);
 v1 = opaque_handle_create(10);
 opaque_handle_op(v1);
 return printf(v0 - 10963);
}


// Function: sub_4023b7 at 0x4023b7
void sub_4023b7(unsigned int a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x4023c0
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4023ce at 0x4023ce
void sub_4023ce(unsigned int a0, unsigned int a1)
{
 complex_callback(&a0, &a1);
 return;
}


// Function: complex_callback at 0x4023d0
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1)
{
 *(ptr) = *(ptr) + 10;
 if (!*(a1))
 return 0;
 return 1;
}


// Function: sub_4023fa at 0x4023fa
void sub_4023fa(unsigned int a0)
{
 struct_simple(&a0);
 return;
}


// Function: struct_simple at 0x402400
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: sub_402419 at 0x402419
void sub_402419(unsigned int a0)
{
 struct_array(0, a0);
 return;
}


// Function: struct_array at 0x402420
unsigned int struct_array(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 12)) + *((int *)(ptr + idx * 12 + 4)) + *((int *)(ptr + idx * 12 + 8));
 }
 return v1;
}


// Function: sub_402485 at 0x402485
void sub_402485(unsigned int a0)
{
 struct_nested(&a0);
 return;
}


// Function: struct_nested at 0x402490
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: sub_4024a3 at 0x4024a3
void sub_4024a3(unsigned int a0)
{
 struct_deep(&a0);
 return;
}


// Function: struct_deep at 0x4024b0
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: sub_4024c4 at 0x4024c4
void sub_4024c4(unsigned int a0)
{
 struct_with_ptr(&a0);
 return;
}


// Function: struct_with_ptr at 0x4024d0
int struct_with_ptr(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = ptr[0];
 v0 = (!ptr[1] ? 0 : *((unsigned int *)ptr[1]));
 return v1 + v0;
}


// Function: sub_402515 at 0x402515
void sub_402515(unsigned int a0)
{
 unsigned short s = (unsigned short)a0;
 struct_bitfields(&s);
 return;
}


// Function: struct_bitfields at 0x402520
short struct_bitfields(unsigned short *a0)
{
 return (*(a0) & 1) + (*(a0) >> 1 & 3) + (*(a0) >> 3 & 7) + (*(a0) >> 6);
}


// Function: sub_40256a at 0x40256a
void sub_40256a(unsigned int a0, unsigned int a1)
{
 union_type((void*)&a0, a1);
 return;
}


// Function: union_type at 0x402570
int union_type(void* ptr, unsigned int a1)
{
 unsigned int v4; // fpround
 unsigned short v0; // [bp-0x10]
 unsigned short v1; // [bp-0xe]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 if (!a1)
 {
 v3 = *((int *)ptr);
 return v3;
 }
 else if (a1 == 1)
 {
 v3 = *((int *)ptr);
 return v3;
 }
 else
 {
 v3 = *((char *)ptr);
 return v3;
 }
}


// Function: sub_4025d7 at 0x4025d7
void sub_4025d7(unsigned int a0)
{
 union_array(0, a0);
 return;
}


// Function: union_array at 0x4025e0
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: sub_40262b at 0x40262b
void sub_40262b(unsigned int a0)
{
 enum_type(a0);
 return;
}


// Function: enum_type at 0x402630
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_40263c at 0x40263c
void sub_40263c(unsigned int a0)
{
 enum_switch(a0);
 return;
}


// Function: enum_switch at 0x402640
unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x8]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (a0 > 3)
 {
 v1 = 4294967197;
 return v1;
 }
 return v0;
}


// Function: sub_4026b7 at 0x4026b7
int sub_4026b7()
{
 unsigned int arr[2] = {0, 0};
 return struct_func_ptr(arr);
}


// Function: struct_func_ptr at 0x4026c0
int struct_func_ptr(unsigned int *a0)
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 return ((int (*)(unsigned int, int, char *))a0[1])(a0[0], *((int *)&v0), &v1);
}


// Function: sub_4026ea at 0x4026ea
void sub_4026ea(unsigned int a0)
{
 linked_list(&a0);
 return;
}


// Function: linked_list at 0x4026f0
unsigned int linked_list(unsigned int *a0)
{
 unsigned int *cur; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (cur = a0; cur; cur = (unsigned int *)cur[1])
 {
 v1 += cur[0];
 }
 return v1;
}


// Function: sub_402731 at 0x402731
void sub_402731(unsigned int a0)
{
 doubly_linked_list(&a0);
 return;
}


// Function: doubly_linked_list at 0x402740
unsigned int doubly_linked_list(unsigned int *a0)
{
 unsigned int *cur; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (cur = a0; cur; cur = (unsigned int *)cur[1])
 {
 v1 += cur[0];
 }
 return v1;
}


// Function: sub_402781 at 0x402781
int sub_402781()
{
 unsigned int *ptr = 0;
 return binary_tree_sum(ptr);
}


// Function: binary_tree_sum at 0x402790
unsigned int binary_tree_sum(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v2 = &_GLOBAL_OFFSET_TABLE_;
 if (ptr)
 {
 v0 = *(ptr);
 v1 = v0 + binary_tree_sum(ptr[1]);
 v3 = v1 + binary_tree_sum(ptr[2]);
 return v3;
 }
 v3 = 0;
 return v3;
}


// Function: sub_402806 at 0x402806
int sub_402806()
{
 unsigned int *a0 = 0;
 return binary_tree(a0);
}


// Function: binary_tree at 0x402810
unsigned int binary_tree(unsigned int *a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_402835 at 0x402835
void sub_402835(unsigned int a0)
{
 unsigned int **ptr = 0;
 graph_traverse(ptr);
 return;
}


// Function: graph_traverse at 0x402840
unsigned int graph_traverse(unsigned int **ptr)
{
 unsigned int cur; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = 0;
 for (v1 = 0; v1 < ptr[10]; v1 += 1)
 {
 for (cur = ptr[v1]; cur; cur = *((unsigned int *)(cur + 4)))
 {
 v2 += *((unsigned int *)cur);
 }
 }
 return v2;
}


// Function: test_composite_types at 0x4028b0
int test_composite_types()
{
 char *ptr; // ebx
 char *ptr3; // ebx
 char *ptr4; // ebx
 char *p; // ebx
 char *ptr5; // ebx
 char *addr; // ebx
 char *ptr6; // ebx
 char *ptr7; // [bp-0x128]
 char *v2; // [bp-0x124]
 unsigned int *v3[12]; // [bp-0x120]
 unsigned int v4; // [bp-0xfc]
 unsigned int v5; // [bp-0xf4]
 unsigned int v6; // [bp-0xf0]
 unsigned int v7; // [bp-0xec]
 unsigned int v8; // [bp-0xe8]
 unsigned int v9; // [bp-0xe4]
 unsigned int v10; // [bp-0xdc]
 char *v11; // [bp-0xd8]
 unsigned int flag1; // [bp-0xd4]
 unsigned int v14; // [bp-0xd0]
 unsigned int flag2; // [bp-0xcc]
 char *v16; // [bp-0xc8]
 unsigned int v17; // [bp-0xc4]
 char *v18; // [bp-0xc0]
 unsigned int v19; // [bp-0xbc]
 char *v20; // [bp-0xb8]
 unsigned int v21; // [bp-0xb4]
 unsigned int result; // [bp-0xb0]
 unsigned int v23; // [bp-0xac]
 unsigned int v24; // [bp-0xa8]
 unsigned int v25; // [bp-0xa4]
 unsigned int v26; // [bp-0xa0]
 unsigned int v27; // [bp-0x9c]
 unsigned int v28; // [bp-0x94]
 unsigned int v29; // [bp-0x8c]
 unsigned int v30; // [bp-0x88]
 unsigned int v31; // [bp-0x84]
 char *v32; // [bp-0x80]
 unsigned int v33; // [bp-0x7c]
 unsigned int v34; // [bp-0x78]
 char v35[48]; // [bp-0x74]
 char v36[24]; // [bp-0x44]
 char v37[24]; // [bp-0x2c]
 unsigned int v38; // [bp-0x14]
 unsigned int v39; // [bp-0x10]
 unsigned int v40; // [bp-0xc]

 ptr7 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_40354f);
    ptr = ptr7;
    v38 = (int)((char *)ptr)[12116];
    v39 = (int)((char *)ptr)[12112];
    v40 = (int)((char *)ptr)[12108];
    struct_simple((unsigned int *)&v38);
 printf(ptr7 - 10901);
    memcpy(v37, (char *)ptr7 - 12104, 24);
    struct_array((unsigned int)v37, 2);
 printf(ptr7 - 10870);
    memcpy(v36, (char *)ptr7 - 12080, 20);
    struct_nested((unsigned int *)v36);
 printf(ptr7 - 10840);
    memcpy(v35, (char *)ptr7 - 12060, 48);
    struct_deep((unsigned int *)v35);
 printf(ptr7 - 10809);
    ptr3 = ptr7;
    v33 = (int)((char *)ptr3)[12248];
    v34 = (int)((char *)ptr3)[12244];
    v31 = 10;
    v32 = (char *)&v33;
    struct_with_ptr((unsigned int *)&v31);
 printf(ptr7 - 10780);
    ptr4 = ptr7;
    v29 = (int)((char *)ptr4)[12240];
    v30 = (int)((char *)ptr4)[12236];
    struct_bitfields((unsigned short *)&v29);
 printf(ptr7 - 10747);
    v28 = (int)((char *)ptr7)[12264];
    union_type((void *)&v28, 0);
 printf(ptr7 - 10713);
    p = ptr7;
    v25 = (int)((char *)p)[12012];
    v26 = (int)((char *)p)[12008];
    v27 = (int)((char *)p)[12004];
    union_array((unsigned int)&v25, 3);
 printf(ptr7 - 10685);
 enum_type(1);
 printf(ptr7 - 10656);
 enum_switch(2);
 printf(ptr7 - 10629);
    ptr5 = ptr7;
    v23 = (int)((char *)ptr5)[236];
    v24 = (int)((char *)ptr5)[232];
    struct_func_ptr((unsigned int *)&v23);
 printf(ptr7 - 10600);
 v17 = 10;
 v18 = &v19;
 v19 = 20;
 v20 = &v21;
 v21 = 30;
 result = 0;
 linked_list(&v17);
 printf(ptr7 - 10567);
 v10 = 10;
 v14 = 20;
 flag1 = 0;
 flag2 = 0;
 v16 = &v10;
 doubly_linked_list(&v10);
 printf(ptr7 - 10538);
    addr = ptr7;
    v7 = (int)((char *)addr)[12000];
    v8 = (int)((char *)addr)[11996];
    v9 = (int)((char *)addr)[11992];
    binary_tree((unsigned int *)&v7);
 printf(ptr7 - 10502);
    ptr6 = ptr7;
    v5 = (int)((char *)ptr6)[12232];
    v6 = (int)((char *)ptr6)[12228];
    memset(v3, 0, 44);
    v2 = (char *)&v5;
    v4 = 2;
    v3[0] = (unsigned int *)&v7;
    v3[1] = (unsigned int *)10;
    graph_traverse((unsigned int **)v3);
 return printf(ptr7 - 10473);
}


// Function: sub_402dc9 at 0x402dc9
int sub_402dc9()
{
 return main();
}


// Function: main at 0x402dd0
int main()
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 result = 0;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_402e12 at 0x402e12
void sub_402e12()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

int __do_global_ctors_aux()
{
 struct_1 *v2; // edx
 struct_1 *ptr; // edx
 int *v4; // eax
 int v5; // ebx
 struct_1 *v6; // ebx
 struct_1 *p; // ebx
 int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = (struct_1 *)0;
 ptr = (struct_1 *)((char *)&v2[1] + 255);
 v4 = (int *)((char *)ptr + 260);
 if (*v4 == 0xffffffff)
 return -1;
 v5 = 0;
 v0 = v5;
 v6 = (struct_1 *)((char *)ptr + 260);
 do
 {
 p = v6;
 ((void(*)())*v4)();
 v4 = (int *)((char *)p + 4);
 v6 = (struct_1 *)((char *)p + 4);
 } while (*v4 != 0xffffffff);
 return -1;
}


// Function: sub_402e62 at 0x402e62
void sub_402e62()
{
}



/* CRT stub function _fini removed by preprocessor */


