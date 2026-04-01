// Angr Decompilation of 2_clang_O1_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

/* Forward declarations for CRT stub functions */
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void deregister_tm_clones(void);
unsigned int register_tm_clones(void);

/* External global variable */
extern void (*g_405ff0)(void);

/* Forward declarations for test functions */
int test_data_types_l1(void);
int test_array_types(void);
int test_pointer_types(void);
int test_composite_types(void);

/* Global struct definitions */
typedef struct struct_0_global {
 unsigned int field_0;
 struct struct_0_global *field_4;
} struct_0;

typedef struct struct_1_global {
 unsigned int field_0;
 struct struct_0_global *field_0_ptr;
} struct_1;

typedef struct struct_2_global {
 char padding_0[4];
 unsigned int field_4;
} struct_2;

/* Forward declarations for process functions */
int process_char(unsigned int);
int process_short(unsigned short, unsigned short);
int process_int(unsigned int);
unsigned int process_long(unsigned int);
int process_ll(unsigned int, unsigned int);
int process_float(unsigned int);
int process_double(void);
int process_ld(void);
unsigned int process_bool(char);
int const_param(unsigned int *);
unsigned int volatile_access(unsigned int *);
unsigned int array_1d_stack(unsigned int, unsigned int);
unsigned int array_string(unsigned int);
unsigned int array_2d_stack(unsigned int);
unsigned int array_3d(unsigned int);
unsigned int array_vla(unsigned int, unsigned int);
unsigned int array_pointer(unsigned int *, unsigned int);
unsigned int pointer_array(unsigned int, unsigned int);
unsigned int array_complex_index(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
unsigned int array_oob(unsigned int, unsigned int);
int ptr_single(unsigned int *);
int ptr_double(unsigned int **);
int ptr_triple(struct_1 **);
unsigned int ptr_increment(unsigned int, unsigned int);
int ptr_offset(unsigned int, unsigned int);
unsigned int ptr_diff(unsigned int, unsigned int);
unsigned int ptr_void(void*, unsigned int);
unsigned int ptr_const(unsigned int *);
int ptr_const_ptr(unsigned int *);
int ptr_func_simple(unsigned int *, unsigned int);
int ptr_func_complex(unsigned int *, unsigned int);
int ptr_cast(unsigned int *);
int opaque_handle_create(unsigned int);
unsigned int opaque_handle_op(unsigned int);
int struct_simple(unsigned int *);
unsigned int struct_array(unsigned int *, unsigned int);
int struct_nested(unsigned int *);
int struct_deep(unsigned int *);
int struct_with_ptr(struct_0 *);
int struct_bitfields(unsigned short *);
int union_type(void*, unsigned int);
unsigned int union_array(unsigned int, unsigned int);
unsigned int enum_type(unsigned int);
unsigned int enum_switch(unsigned int);
int struct_func_ptr(struct_0 *);
unsigned int linked_list(struct_0 *);
unsigned int doubly_linked_list(struct_0 *);
unsigned int binary_tree_sum(unsigned int *);
unsigned int binary_tree(unsigned int *);
unsigned int graph_traverse(struct_1 *);

/* Forward declarations for helper functions */
void __x86.get_pc_thunk_bx(void);
void __x86.get_pc_thunk_dx(void);
int __x86.get_pc_thunk_di(int);

/* _ccall function - handles calling conventions */
unsigned int _ccall(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    (void)a0; (void)a1; (void)a2; (void)a3; (void)a4;
    return 0;
}

int _init()
{
 if (g_405ff0)
 g_405ff0();
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int result; // ebx
 unsigned int v0; // [bp-0x4]

 result = 0;
 v0 = result;
 return result;
}


// Function: sub_401070 at 0x401070
int sub_401070(unsigned int a0)
{
 (void)a0;
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
 // Unsupported operation
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

unsigned int register_tm_clones()
{
 // Stub implementation for CRT
 return 0;
}


// Function: sub_401147 at 0x401147
void sub_401147()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86.get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_4e93[15];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[32])
 return v5;
 if (*((int *)&ptr->padding_0[20]))
 sub_401070(*((int *)&ptr->padding_0[28]));
 v10 = &ptr->padding_0[248];
 v11 = *((int *)&ptr->padding_0[36]);
 i = (&ptr->padding_0[244] - v10 >> 2) - 1;
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



// Function: __x86.get_pc_thunk_dx at 0x4011e9
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4011ed
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
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
 if (!((char)_ccall(3, 4, (unsigned int)((char)a0 - 65), 26, 0)))
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
 // Complex floating point operations (simplified)
 return 0;
}


// Function: sub_4012ad at 0x4012ad
void sub_4012ad()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4012b0
int process_ld()
{
 // Complex floating point operations (simplified)
 return 0;
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
 return (a0 & 0xffffff00) | (!(a0 & 1) & (char)_ccall(15, 15, (unsigned int)a0, 0, 0));
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
 return;
}


// Function: test_data_types_l1 at 0x401300
extern char g_4035bf;

int test_data_types_l1()
{
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v4;
 puts(&g_4035bf);
 v0 = 97;
 printf("DT-L1-01 (process_char): %c\n", (char)v0);
 v0 = 98;
 printf("DT-L1-01 (process_char): %c\n", (char)v0);
 v0 = 300;
 printf("DT-L1-02 (process_short): %d\n", v0);
 v0 = 11;
 printf("DT-L1-03 (process_int): %d\n", v0);
 v0 = 200;
 printf("DT-L1-04 (process_long): %ld\n", (long)v0);
 v1 = 0;
 v0 = 10000;
 printf("DT-L1-05 (process_ll): %lld\n", (long long)v0);
 v1 = 0x400c0000;
 v0 = 0;
 printf("DT-L1-06 (process_float): %.2f\n", *(float*)&v0);
 v1 = 1073794252;
 v0 = 3435973837;
 printf("DT-L1-07 (process_double): %.2f\n", *(double*)&v0);
 // Complex floating point operations (simplified)
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 v0 = 1;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 0;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 0;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 15;
 printf("DT-L1-10 (const_param): %d\n", v0);
 v2 = 10;
 v0 = v2 * 2;
 return printf("DT-L1-11 (volatile_access): %d\n", v0);
}


// Function: sub_40142e at 0x40142e
void sub_40142e(unsigned int a0, unsigned int a1)
{
 array_1d_stack(a0, a1);
 return;
}


// Function: array_1d_stack at 0x401430
unsigned int array_1d_stack(unsigned int ptr, unsigned int i)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: array_string at 0x401460
unsigned int array_string(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax

 v0 = 4294967295;
 do
 {
 v2 = v0 + 1;
 v0 = v2;
 } while (*((char *)(a0 + v1 + 1)));
 return v1 + 1;
}


// Function: sub_40147b at 0x40147b
void sub_40147b(unsigned int a0)
{
 array_2d_stack(a0);
 return;
}


// Function: array_2d_stack at 0x401480
unsigned int array_2d_stack(unsigned int a0)
{
 unsigned int i; // ecx
 unsigned int v1; // eax
 unsigned int *arr; // pointer to array

 arr = (unsigned int *)a0;
 i = 0;
 v1 = 0;
 do
 {
 v1 += arr[i];
 i += 44;
 } while (i != 440);
 return v1;
}


// Function: sub_40149f at 0x40149f
int sub_40149f(unsigned int a0)
{
 return array_3d(a0);
}


// Function: array_3d at 0x4014a0
unsigned int array_3d(unsigned int a0)
{
 unsigned int i; // ecx
 unsigned int v1; // eax
 unsigned int j; // edi
 unsigned int v3; // esi
 unsigned int ptr; // esi
 unsigned int idx; // ebx

 i = 0;
 v1 = 0;
 do
 {
 j = 0;
 v3 = a0;
 do
 {
 ptr = v3;
 idx = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (idx != 5);
 j += 1;
 v3 = ptr + 20;
 } while (j != 5);
 i += 1;
 a0 += 100;
 } while (i != 5);
 return v1;
}


// Function: sub_4014f5 at 0x4014f5
void sub_4014f5(unsigned int a0, unsigned int a1)
{
 array_vla(a0, a1);
 return;
}


// Function: array_vla at 0x401500
unsigned int array_vla(unsigned int i, unsigned int ptr)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: array_pointer at 0x401530
unsigned int array_pointer(unsigned int *cur, unsigned int i)
{
 unsigned int v0; // eax

 if (i <= 0)
 return 0;
 v0 = 0;
 do
 {
 v0 += *(cur);
 cur += 10;
 i -= 1;
 } while (i != 1);
 return v0;
}


// Function: sub_40154e at 0x40154e
void sub_40154e(unsigned int a0, unsigned int a1)
{
 pointer_array(a0, a1);
 return;
}


// Function: pointer_array at 0x401550
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int idx; // esi
 unsigned int v2; // eax

 v0 = a1;
 if (v0 <= 0)
 return 0;
 if (v0 >= 10)
 v0 = 10;
 if (v0 < 2)
 v0 = 1;
 idx = 0;
 v2 = 0;
 do
 {
 if (*((int *)(a0 + idx * 4)))
 v2 += *((int *)*((int *)(a0 + idx * 4)));
 } while ((idx += 1, v0 != idx));
 return v2;
}


// Function: sub_40157a at 0x40157a
void sub_40157a()
{
}


// Function: sub_401597 at 0x401597
void sub_401597(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 array_complex_index(a0, a1, a2, a3, a2);
 return;
}


// Function: array_complex_index at 0x4015a0
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a3 >= 0 && a4 < a2 && a3 < a1 && a4 >= 0)
 v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
 return v0;
}


// Function: sub_4015d2 at 0x4015d2
void sub_4015d2(unsigned int a0, unsigned int a1)
{
 array_oob(a0, a1);
 return;
}


// Function: array_oob at 0x4015e0
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (a1 < 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (a1 + 1 != idx);
 return v1;
}


// Function: test_array_types at 0x401610
extern char g_4035e0;

int test_array_types()
{
 unsigned int i; // eax
 char *iter; // ecx
 unsigned int i1; // esi
 unsigned int idx; // edi
 unsigned int l; // eax
 char *v25; // edx
 unsigned int v26; // ecx
 unsigned int i2; // edi
 char *v28; // esi
 char *ptr; // esi
 unsigned int index; // ebp
 unsigned int idx5; // edx
 unsigned int pos; // eax
 unsigned int n; // ecx
 unsigned int v34; // eax
 unsigned int idx4; // ecx
 unsigned int v36; // eax
 unsigned int off; // eax
 unsigned int v15; // esi
 unsigned int j; // ecx
 unsigned int v18; // eax
 unsigned int k; // eax
 char *v20; // ecx
 char *cur; // edx
 unsigned int v0; // [bp-0x4e8]
 unsigned int v1; // [bp-0x4e0]
 unsigned int v2; // [bp-0x4dc]
 unsigned int v3; // [bp-0x4d8]
 char *v4; // [bp-0x4d4]
 char *v5; // [bp-0x4d0]
 char *v6; // [bp-0x4cc]
 char v7; // [bp-0x4c8]
 unsigned long v38; // [bp-0x4ac]
 char v8; // [bp-0x468]
 unsigned long v39; // [bp-0x45c]
 char v9; // [bp-0x394]
 char v10; // [bp-0x204]

 puts(&g_4035e0);
 v0 = 15;
 printf("ARR-L1-01 (array_1d_stack): %d\n");
 v0 = 5;
 printf("ARR-L1-02 (array_string): %d\n");
 i = 0;
 iter = &v9;
 do
 {
 idx5 = 0;
 do
 {
 if (i == idx5)
 v15 = i;
 else
 v15 = 0;
 } while ((*((unsigned int *)&iter[4 * idx5]) = v15, idx5 += 1, idx5 != 10));
 i += 1;
 iter += 40;
 } while (i != 10);
 j = 0;
 v18 = 0;
 do
 {
 v18 += *((int *)&(&v9)[j]);
 j += 44;
 } while (j != 440);
 v0 = v18;
 printf("ARR-L1-03 (array_2d_stack): %d\n");
 k = 0;
 v20 = &v10;
 do
 {
 cur = v20;
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
 v20 += 100;
 } while (k != 5);
 l = 0;
 v25 = &v10;
 v26 = 0;
 do
 {
 i2 = 0;
 v28 = v25;
 do
 {
 ptr = v28;
 index = 0;
 do
 {
 v26 += *((int *)&ptr[4 * index]);
 index += 1;
 } while (index != 5);
 i2 += 1;
 v28 = ptr + 20;
 } while (i2 != 5);
 l += 1;
 v25 += 100;
 } while (l != 5);
 v0 = v26;
 printf("ARR-L1-04 (array_3d): %d\n");
 v0 = 60;
 printf("ARR-L2-01 (array_vla): %d\n");
 pos = 0;
 do
 {
 (&v39)[pos] = pos;
 pos += 10;
 } while (pos != 50);
 n = 0;
 v34 = 0;
 do
 {
 v34 += *((int *)((char *)&v39 + n));
 n += 40;
 } while (n != 200);
 v0 = v34;
 printf("ARR-L2-02 (array_pointer): %d\n");
 v3 = 10;
 v2 = 20;
 v1 = 30;
 v4 = &v3;
 v5 = &v2;
 v6 = &v1;
 memset(&v7, 0, 28);
 idx4 = 0;
 v36 = 0;
 do
 {
 if ((&v4)[idx4])
 v36 += *((int *)&(&v4)[idx4]);
 } while ((idx4 += 1, idx4 != 3));
 v0 = v36;
 printf("ARR-L2-03 (pointer_array): %d\n");
 off = 0;
 do
 {
 (&v38)[off] = off;
 off += 1;
 } while (off != 20);
 v0 = *((int *)&v8);
 return printf("ARR-L2-04 (array_complex_index): %d\n");
}


// Function: sub_401852 at 0x401852
void sub_401852()
{
}


// Function: ptr_single at 0x4018c0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_4018ca at 0x4018ca
void sub_4018ca(unsigned int a0)
{
 ptr_double((unsigned int **)a0);
 return;
}


// Function: ptr_double at 0x4018d0
int ptr_double(unsigned int **a0)
{
 return (*a0)[0] + 5;
}


// Function: sub_4018dc at 0x4018dc
void sub_4018dc(unsigned int a0)
{
 ptr_triple((struct_1 **)a0);
 return;
}


// Function: ptr_triple at 0x4018e0
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: sub_4018ee at 0x4018ee
void sub_4018ee(unsigned int a0, unsigned int a1)
{
 ptr_increment(a0, a1);
 return;
}


// Function: ptr_increment at 0x4018f0
unsigned int ptr_increment(unsigned int ptr, unsigned int i)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: ptr_offset at 0x401920
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_40192c at 0x40192c
void sub_40192c(unsigned int a0, unsigned int a1)
{
 ptr_diff(a0, a1);
 return;
}


// Function: ptr_diff at 0x401930
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return (a0 - a1) >> 2;
}


// Function: sub_40193c at 0x40193c
void sub_40193c(unsigned int a0, unsigned int a1)
{
 ptr_void((void*)a0, a1);
 return;
}


// Function: ptr_void at 0x401940
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


// Function: sub_40195d at 0x40195d
void sub_40195d(unsigned int a0)
{
 ptr_const((unsigned int *)a0);
 return;
}


// Function: ptr_const at 0x401960
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401969 at 0x401969
void sub_401969(unsigned int a0)
{
 ptr_const_ptr((unsigned int *)a0);
 return;
}


// Function: ptr_const_ptr at 0x401970
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_40197c at 0x40197c
int sub_40197c()
{
 // ptr_func_simple needs a function pointer and argument - using dummy values
 return ptr_func_simple((unsigned int *)0, 0);
}


// Function: ptr_func_simple at 0x401980
int ptr_func_simple(unsigned int *a0, unsigned int a1)
{
 return a0(a1);
}


// Function: ptr_func_complex at 0x4019a0
extern unsigned int g_405f10;
extern unsigned int g_405f14;

int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = g_405f14;
 v0 = g_405f10;
 return a0(a1, &v0);
}


// Function: sub_4019d9 at 0x4019d9
void sub_4019d9(unsigned int a0)
{
 ptr_cast((unsigned int *)a0);
 return;
}


// Function: ptr_cast at 0x4019e0
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_4019e7 at 0x4019e7
void sub_4019e7(unsigned int a0)
{
 opaque_handle_create();
 return;
}


// Function: opaque_handle_create at 0x4019f0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_4019f5 at 0x4019f5
void sub_4019f5(unsigned int a0)
{
 opaque_handle_op();
 return;
}


// Function: opaque_handle_op at 0x401a00
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401a07 at 0x401a07
int sub_401a07()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x401a10
extern char g_4035fb;

int test_pointer_types()
{
 unsigned int idx; // ecx
 unsigned int v8; // eax
 unsigned int v0; // [bp-0x28]
 unsigned int result; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 puts(&g_4035fb);
 v0 = 15;
 printf("PTR-L2-01 (ptr_single): %d\n");
 v0 = 15;
 printf("PTR-L2-02 (ptr_double): %d\n");
 v0 = 6;
 printf("PTR-L2-03 (ptr_triple): %d\n");
 v5 = 5;
 v4 = 4;
 v3 = 3;
 v2 = 2;
 result = 1;
 idx = 0;
 v8 = 0;
 do
 {
 v8 += (&result)[idx];
 idx += 1;
 } while (idx != 5);
 v0 = v8;
 printf("PTR-L2-04 (ptr_increment): %d\n");
 v0 = 30;
 printf("PTR-L2-05 (ptr_offset): %d\n");
 v0 = 4;
 printf("PTR-L2-06 (ptr_diff): %d\n");
 v0 = 42;
 printf("PTR-L2-07 (ptr_void): %d\n");
 v0 = 65;
 printf("PTR-L2-07 (ptr_void): %d\n");
 v0 = 20;
 printf("PTR-L2-08 (ptr_const): %d\n");
 v0 = 15;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n");
 v0 = 10;
 printf("PTR-L2-10 (ptr_func_simple): %d\n");
 v0 = 1;
 printf("PTR-L2-11 (ptr_func_complex): %d\n");
 v0 = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n");
 v0 = 20;
 return printf("PTR-L2-13 (opaque_handle_op): %d\n");
}


// Function: sub_401baa at 0x401baa
void sub_401baa(unsigned int a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x401bb0
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_401bbd at 0x401bbd
void sub_401bbd(unsigned int a0, unsigned int a1)
{
 struct_array();
 return;
}


// Function: struct_array at 0x401bc0
unsigned int struct_array(unsigned int *a0, unsigned int i)
{
 unsigned int *cur; // pointer to current position
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 cur = a0 + 2;
 v1 = 0;
 do
 {
 v1 = v1 + cur[2] + cur[1] + cur[0];
 cur += 1;
 i -= 1;
 } while (i != 1);
 return v1;
}


// Function: sub_401bf4 at 0x401bf4
void sub_401bf4(unsigned int a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x401c00
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_401c0a at 0x401c0a
void sub_401c0a(unsigned int a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x401c10
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_401c1b at 0x401c1b
void sub_401c1b(unsigned int a0)
{
 struct_with_ptr();
 return;
}


// Function: struct_with_ptr at 0x401c20
int struct_with_ptr(struct_0 *a0)
{
 if (!a0->field_4)
 return 0 + a0->field_0;
 return a0->field_4->field_0 + a0->field_0;
}


// Function: sub_401c37 at 0x401c37
void sub_401c37(unsigned int a0)
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x401c40
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // eax

 v0 = *(ptr);
 return (v0 >> 6) + (v0 & 1) + (v0 >> 1 & 3) + (v0 >> 3 & 7);
}


// Function: sub_401c67 at 0x401c67
void sub_401c67(unsigned int a0, unsigned int a1)
{
 union_type();
 return;
}


// Function: union_type at 0x401c70
int union_type(void* a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 if (a1 == 1)
 {
 // Complex floating point operations (simplified)
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


// Function: sub_401cb7 at 0x401cb7
void sub_401cb7(unsigned int a0, unsigned int a1)
{
 union_array();
 return;
}


// Function: union_array at 0x401cc0
unsigned int union_array(unsigned int ptr, unsigned int i)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: enum_type at 0x401cf0
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401cfa at 0x401cfa
void sub_401cfa(unsigned int a0)
{
 enum_switch();
 return;
}


// Function: enum_switch at 0x401d00
extern char _GLOBAL_OFFSET_TABLE_[];

unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967197;
 if (a0 <= 3)
 v0 = *((int *)&(&_GLOBAL_OFFSET_TABLE_)[10668 + 4 * a0]);
 return v0;
}


// Function: sub_401d22 at 0x401d22
int sub_401d22()
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x401d30
int struct_func_ptr(struct_0 *a0)
{
 return a0->field_4(a0->field_0);
}


// Function: sub_401d51 at 0x401d51
void sub_401d51(unsigned int a0)
{
 linked_list();
 return;
}


// Function: linked_list at 0x401d60
unsigned int linked_list(struct_0 *a0)
{
 struct_0 *ptr; // ecx
 unsigned int v1; // eax

 ptr = a0;
 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 return v1;
}


// Function: sub_401d7a at 0x401d7a
void sub_401d7a(unsigned int a0)
{
 doubly_linked_list();
 return;
}


// Function: doubly_linked_list at 0x401d80
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int doubly_linked_list(struct_0 *a0)
{
 struct_0 *ptr; // ecx
 unsigned int v1; // eax

 ptr = a0;
 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 return v1;
}


// Function: sub_401d9a at 0x401d9a
int sub_401d9a()
{
 binary_tree_sum();
 return;
}


// Function: binary_tree_sum at 0x401da0
unsigned int binary_tree_sum(unsigned int *ptr)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 if (!ptr)
 return 0;
 v0 = binary_tree_sum(ptr[1]);
 v1 = binary_tree_sum(ptr[2]) + v0 + *(ptr);
 return v1;
}


// Function: sub_401de5 at 0x401de5
int sub_401de5()
{
 binary_tree();
 return;
}


// Function: binary_tree at 0x401df0
unsigned int binary_tree(unsigned int *a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_401e11 at 0x401e11
void sub_401e11(unsigned int a0)
{
 graph_traverse();
 return;
}


// Function: graph_traverse at 0x401e20
typedef struct struct_1 {
 struct struct_0 *field_0;
 char padding_4[36];
 unsigned int field_28;
} struct_1;

typedef struct struct_2 {
 char padding_0[4];
 unsigned int field_4;
} struct_2;

typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int graph_traverse(struct_1 *p)
{
 unsigned int index; // esi
 unsigned int v1; // eax
 struct_2 *ptr; // edi

 if (p->field_28 <= 0)
 return 0;
 index = 0;
 v1 = 0;
 do
 {
 ptr = (&p->field_0)[index];
 if ((&p->field_0)[index])
 {
 do
 {
 v1 += ptr->padding_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 } while ((index += 1, index != p->field_28));
 return v1;
}


// Function: sub_401e33 at 0x401e33
void sub_401e33()
{
}


// Function: test_composite_types at 0x401e60
typedef struct struct_0 {
 char field_0[4];
 struct struct_0 *field_4;
} struct_0;

typedef struct struct_1 {
 char field_0[4];
 struct struct_1 *field_4;
} struct_1;

typedef struct struct_2 {
 char padding_0[4];
 unsigned int field_4;
} struct_2;

extern char g_403616;

int test_composite_types()
{
 struct_0 *p; // eax
 unsigned int v24; // ecx
 struct_1 *addr; // eax
 unsigned int v27; // ecx
 unsigned int idx; // ecx
 unsigned int v30; // eax
 struct_2 *ptr; // edx
 unsigned int v0; // [bp-0x88]
 unsigned int flag4; // [bp-0x7c]
 unsigned int flag3; // [bp-0x78]
 char v3; // [bp-0x74], Other Possible Types: unsigned int
 char *v4; // [bp-0x70]
 char v5; // [bp-0x6c], Other Possible Types: unsigned int
 char *v6; // [bp-0x68]
 char v7; // [bp-0x64], Other Possible Types: unsigned int
 unsigned int result; // [bp-0x60]
 unsigned int v9[1]; // [bp-0x5c]
 unsigned int flag6; // [bp-0x58]
 unsigned int flag5; // [bp-0x54]
 unsigned int v13; // [bp-0x4c]
 char *v14; // [bp-0x48]
 unsigned int flag1; // [bp-0x44]
 char v16; // [bp-0x40], Other Possible Types: unsigned int
 unsigned int flag2; // [bp-0x3c]
 char *v18; // [bp-0x38]
 char *v19; // [bp-0x34]
 char v20; // [bp-0x30]
 unsigned int v21; // [bp-0xc]

 puts(&g_403616);
 v0 = 6;
 printf("CMP-L2-01 (struct_simple): %d\n");
 v0 = 9;
 printf("CMP-L2-02 (struct_array): %d\n");
 v0 = 105;
 printf("CMP-L2-03 (struct_nested): %d\n");
 v0 = 258;
 printf("CMP-L2-04 (struct_deep): %d\n");
 v0 = 30;
 printf("CMP-L2-05 (struct_with_ptr): %d\n");
 v0 = 106;
 printf("CMP-L2-06 (struct_bitfields): %d\n");
 v0 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n");
 v0 = 60;
 printf("CMP-L2-08 (union_array): %d\n");
 v0 = 10;
 printf("CMP-L2-09 (enum_type): %d\n");
 v0 = 50;
 printf("CMP-L2-10 (enum_switch): %d\n");
 v0 = 21;
 printf("CMP-L2-11 (struct_func_ptr): %d\n");
 p = &v3;
 v3 = 10;
 v4 = &v5;
 v5 = 20;
 v6 = &v7;
 v7 = 30;
 result = 0;
 v24 = 0;
 do
 {
 v24 += p->field_0;
 p = p->field_4;
 } while (p->field_4);
 v0 = v24;
 printf("CMP-L2-12 (linked_list): %d\n");
 addr = &v13;
 v13 = 10;
 v14 = &v16;
 flag1 = 0;
 v16 = 20;
 flag2 = 0;
 v18 = &v13;
 v27 = 0;
 do
 {
 v27 += addr->field_0;
 addr = addr->field_4;
 } while (addr->field_4);
 v0 = v27;
 printf("CMP-L2-13 (doubly_linked_list): %d\n");
 flag5 = 0;
 flag6 = 0;
 *((unsigned int [1])v9) = 100;
 v0 = binary_tree_sum(&v9);
 printf("CMP-L2-14 (binary_tree): %d\n");
 flag3 = 0;
 flag4 = 1;
 memset(&v20, 0, 36);
 v19 = &flag4;
 v21 = 2;
 idx = 0;
 v30 = 0;
 do
 {
 ptr = (&v19)[idx];
 if ((&v19)[idx])
 {
 do
 {
 v30 += ptr->padding_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 } while ((idx += 1, idx != 2));
 v0 = v30;
 return printf("CMP-L2-15 (graph_traverse): %d\n");
}


// Function: sub_4020cc at 0x4020cc
void sub_4020cc()
{
}


// Function: sub_402105 at 0x402105
int sub_402105()
{
 main();
 return;
}


// Function: main at 0x402110
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_40213b at 0x40213b
void sub_40213b()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */


// Function: sub_402182 at 0x402182
void sub_402182()
{
}



/* CRT stub function _fini removed by preprocessor */


