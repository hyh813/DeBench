// Angr Decompilation of 2_gcc_Os_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 char padding_0[256];
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
} struct_0;

typedef struct struct_1 {
 struct_0 *field_0;
} struct_1;

extern void (*g_405ff4)(void);

/* Forward declarations for CRT functions */
unsigned int deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
int __stack_chk_fail_local(void);

int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
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
int sub_401080(struct_0 *v1)
{
 return v1->field_0;
}


// Function: sub_40108a at 0x40108a
int sub_40108a()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090(struct_0 *v1)
{
 return v1->field_c;
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0(struct_0 *v1)
{
 return v1->field_10;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0(struct_0 *v1)
{
 return v1->field_14;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0(struct_0 *v1, unsigned int a0, const char *fmt, ...)
{
 return v1->field_18;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 return sub_4010c0(0, 0, "");
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
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401134 at 0x401134
void sub_401134()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int deregister_tm_clones(void)
{
 unsigned int v0; // edx

 __x86_get_pc_thunk_dx(0);
 return v0;
}


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

unsigned int register_tm_clones(void)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx(0);
 return v0;
}


// Function: sub_4011c7 at 0x4011c7
void sub_4011c7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int __do_global_dtors_aux(void)
{
 unsigned int v0; // [bp-0x10]

 __x86_get_pc_thunk_di(0);
 return v0;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401269
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40126d
int __x86_get_pc_thunk_di(int a0);

int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: double_value at 0x401271
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_int at 0x40127f
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: complex_callback at 0x40128e
char complex_callback(unsigned int *ptr, unsigned int *a1)
{
 *(ptr) = *(ptr) + 10;
 return *(a1);
}


// Function: process_char at 0x4012a9
unsigned int process_char(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v2; // edx

 v0 = a0;
 v2 = v0 + 32;
 if (!((v0 - 65 & 255) <= 25))
 v2 = v0;
 return v2;
}


// Function: process_short at 0x4012c4
int process_short(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: process_long at 0x4012d3
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x4012e1
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x4012fa
unsigned int process_float(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 char v0; // [bp+0x0]

 v2 = __x86_get_pc_thunk_ax(v1, &v0);
 return v2 + 19657;
}


// Function: process_double at 0x401322
unsigned int process_double()
{
 unsigned int v2; // eax
 double v0; // [bp-0xc], Other Possible Types: unsigned long

 v2 = __x86_get_pc_thunk_ax();
 v0 = NAN;
 return v2 + 19621;
}


// Function: process_ld at 0x40134c
void process_ld()
{
 return;
}


// Function: process_bool at 0x40135e
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 0;
 if (a0 > 0)
 v0 = ~(a0) & 1;
 return v0 & 1;
}


// Function: const_param at 0x40137a
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x40138b
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x40139d
extern unsigned int g_403008;

int test_data_types_l1()
{
 unsigned int v0; // [bp-0x10]

 sub_4010b0(&g_403008);
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


// Function: array_1d_stack at 0x4014ec
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // eax
 unsigned int v1; // edx

 idx = 0;
 for (v1 = 0; idx < a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: array_string at 0x401509
unsigned int array_string(unsigned int a0)
{
 unsigned int i; // eax

 for (i = 0; *((char *)(a0 + i)); i += 1);
 return i;
}


// Function: array_2d_stack at 0x401520
unsigned int array_2d_stack(unsigned int *a0)
{
 unsigned int v0; // edx
 unsigned int *ptr; // eax

 v0 = 0;
 ptr = a0;
 do
 {
 v0 += *(ptr);
 ptr += 11;
 } while (ptr != a0 + 110);
 return v0;
}


// Function: array_3d at 0x40153f
unsigned int array_3d(unsigned int *a0)
{
 unsigned int v0; // eax
 unsigned int *i; // edx
 unsigned int *v2; // edx
 unsigned int *p; // edx
 unsigned int *ptr; // edx

 v0 = 0;
 i = a0;
 do
 {
 v2 = i;
 p = v2;
 do
 {
 ptr = p + 1;
 v0 = v0 + p[0] + ptr[4] + ptr[3] + ptr[2] + ptr[1];
 p = ptr;
 } while (p != v2 + 5);
 i = ptr;
 } while (a0 + 125 != i);
 return v0;
}


// Function: array_vla at 0x401571
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int idx; // eax
 unsigned int v1; // edx

 idx = 0;
 for (v1 = 0; idx < a0; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: array_pointer at 0x40158e
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int v1; // edx
 unsigned int idx; // eax
 unsigned int v3; // eax

 v0 = 0;
 v1 = 0;
 while (1)
 {
 idx = v0;
 if (idx >= a1)
 break;
 v3 = idx + 1;
 v1 += *((int *)(ptr + idx * 40));
 v0 = v3;
 }
 return v1;
}


// Function: pointer_array at 0x4015b0
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // ecx
 unsigned int v1; // ecx
 unsigned int idx; // edx
 unsigned int v3; // eax

 v0 = 10;
 if (a1 <= 10)
 v1 = a1;
 else
 v1 = v0;
 idx = 0;
 for (v3 = 0; idx < v1; idx += 1)
 {
 if (*((int *)(a0 + idx * 4)))
 v3 += *((int *)*((int *)(a0 + idx * 4)));
 }
 return v3;
}


// Function: array_complex_index at 0x4015e1
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if ((a3 | a4) >= 0 && a3 < a1 && a4 < a2)
 v0 = *((int *)(ptr + (a4 * a1 + a3) * 4));
 return v0;
}


// Function: array_oob at 0x401615
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // eax
 unsigned int v1; // edx

 idx = 0;
 for (v1 = 0; idx <= a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: test_array_types at 0x401632
extern unsigned int g_403173;
extern unsigned int g_40360c;

int test_array_types()
{
 char *cur; // edi
 unsigned long v23; // ldt
 unsigned int index; // eax
 unsigned int *k; // edx
 unsigned int n; // ecx
 unsigned int *p; // eax
 unsigned int *ptr; // eax
 unsigned int *iter; // edi
 unsigned long v24; // gdt
 unsigned int flag2; // ecx
 unsigned int idx; // eax
 unsigned short v25; // gs
 unsigned int *i; // esi
 unsigned int flag1; // ecx
 char *node; // edx
 unsigned int j; // ecx
 unsigned int v0; // [bp-0x518]
 unsigned int v1; // [bp-0x514]
 char v2; // [bp-0x510], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x50c]
 unsigned int v4; // [bp-0x508]
 unsigned int v5; // [bp-0x504]
 char v6; // [bp-0x500]
 char v7[4]; // [bp-0x4ec]
 unsigned int v8; // [bp-0x4e8]
 unsigned int v9; // [bp-0x4e4]
 unsigned int v10; // [bp-0x4e0]
 unsigned long v45; // [bp-0x4c4]
 char v11; // [bp-0x480]
 unsigned int result; // [bp-0x474]
 unsigned int v13; // [bp-0x44c]
 unsigned int v14; // [bp-0x424]
 unsigned int v15; // [bp-0x3fc]
 unsigned int v16; // [bp-0x3d4]
 unsigned int v17[100]; // [bp-0x3ac]
 unsigned int v18[125]; // [bp-0x21c]
 unsigned int v46[125]; // [bp-0x28]
 char v19[6]; // [bp-0x26]
 unsigned int v20; // [bp-0x20]

 cur = &v6;
 v20 = *((int *)_ccall(v23, v24, (unsigned int)v25, 20));
 i = &g_40360c;
 sub_4010b0(&g_403173);
 for (flag1 = 5; flag1; i += 1)
 {
 flag1 -= 1;
 *((unsigned int *)&cur[0]) = *(i);
 cur += 1;
 }
 sub_4010c0(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&v6, 5));
 strncpy(v19, "hello", 5);
 sub_4010c0(1, "ARR-L1-02 (array_string): %d\n", array_string(&v19));
 node = &v17;
 j = 0;
 do
 {
 index = 0;
 do
 {
 } while ((*((unsigned int *)&node[4 * index]) = (index == j ? index : 0), index += 1, index != 10));
 j += 1;
 node += 40;
 } while (j != 10);
 sub_4010c0(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v17));
 k = v18;
 do
 {
 n = 0;
 p = k;
 do
 {
 n += 1;
 p[0] = 1;
 ptr = p + 1;
 ptr[4] = 1;
 ptr[3] = 1;
 ptr[2] = 1;
 ptr[1] = 1;
 p = ptr;
 } while (n != 5);
 k += 5;
 } while (&v46 != k);
 sub_4010c0(1, "ARR-L1-04 (array_3d): %d\n", array_3d(&v18));
 v3 = 10;
 v4 = 20;
 v5 = 30;
 sub_4010c0(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, &v3));
 iter = &v10;
 result = 0;
 v13 = 10;
 v14 = 20;
 v15 = 30;
 v16 = 40;
 sub_4010c0(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer(&result, 5));
 flag2 = 7;
 for (v0 = 10; flag2; iter += 1)
 {
 flag2 -= 1;
 *(iter) = 0;
 }
v0 = 10;
v1 = 20;
v7[0] = v0;
v8 = v1;
v9 = v2;
v2 = 30;
 sub_4010c0(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array((unsigned int)v7, 3));
 idx = 0;
 do
 {
 (&v45)[idx] = idx;
 idx += 1;
 } while (idx != 20);
 sub_4010c0(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v11), 20);
 if (v20 == *((int *)_ccall(v23, v24, (unsigned int)v25, 20)))
 return v20 - *((int *)_ccall(v23, v24, (unsigned int)v25, 20));
 return __stack_chk_fail_local();
}


// Function: ptr_single at 0x4018af
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x4018c0
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x4018d3
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x4018e6
unsigned int ptr_increment(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // eax
 unsigned int v1; // edx

 idx = 0;
 for (v1 = 0; idx < a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: ptr_offset at 0x401903
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x401915
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x401927
int ptr_void(void* a0, unsigned int a1)
{
 if (a1)
 return *((char *)a0);
 return *((int *)a0);
}


// Function: ptr_const at 0x401947
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x401957
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40196a
int ptr_func_simple(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x4]

 v0 = a1;
 return ((int (*)(unsigned int))a0)(a1);
}


// Function: ptr_func_complex at 0x40197d
unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1)
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
 v0 = v3 - -6398;
 v7 = ((unsigned int (*)(unsigned int, unsigned int *))a0)(a1, &v0);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v7;
 return __stack_chk_fail_local();
}


// Function: ptr_cast at 0x4019ca
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x4019d8
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x4019e4
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x4019f2
extern unsigned int g_403289;
extern unsigned int g_40360c;

int test_pointer_types()
{
 char *cur; // edi
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int *i; // esi
 unsigned int result; // ecx
 unsigned int v0; // [bp-0x44]
 char *v1; // [bp-0x40]
 struct_0 **v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 char v4; // [bp-0x34]
 unsigned int v5; // [bp-0x20]

 cur = &v4;
 v5 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 i = &g_40360c;
 sub_4010b0(&g_403289);
 sub_4010c0(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 sub_4010c0(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v0 = 5;
 v1 = &v0;
 v2 = &v1;
 sub_4010c0(1, "PTR-L2-03 (ptr_triple): %d\n", ptr_triple(&v2));
 for (result = 5; result; i += 1)
 {
 result -= 1;
 *((unsigned int *)&cur[0]) = *(i);
 cur += 1;
 }
 sub_4010c0(1, "PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&v4, 5));
 sub_4010c0(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 sub_4010c0(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 sub_4010c0(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 sub_4010c0(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 sub_4010c0(1, "PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5));
 v3 = 5;
 sub_4010c0(1, "PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v3));
 sub_4010c0(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 sub_4010c0(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 if (v5 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 return v5 - *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 return __stack_chk_fail_local();
}


// Function: struct_simple at 0x401ba4
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x401bb8
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // ecx
 unsigned int v1; // ebx
 unsigned int ptr[3]; // eax
 unsigned int p[3]; // eax

 v0 = 0;
 v1 = 0;
 while (1)
 {
 ptr = a0;
 if (v1 >= a1)
 break;
 v1 += 1;
 p = ptr + 1;
 v0 += ptr[1] + ptr[0] + p[1];
 a0 = p;
 }
 return v0;
}


// Function: struct_nested at 0x401be1
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x401bf2
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401c04
int struct_with_ptr(struct_0 *idx)
{
 unsigned int v0; // edx

 v0 = 0;
 if (idx)
 v0 = ((struct_0 *)idx->field_4)->field_0;
 return idx->field_0 + v0;
}


// Function: struct_bitfields at 0x401c1f
int struct_bitfields(unsigned int *ptr)
{
 unsigned int v0; // edx
 unsigned int v1; // ebx

 v0 = 0;
 v1 = v0 & 0xffffff00 | *((char *)ptr);
 return (v1 & 1) + ((v1 & 0xffffff00 | (char)v1 >> 1) & 3) + ((v1 & 0xffffff00 | *((char *)ptr) >> 3) & 7) + ((short)*((int *)ptr) >> 6);
}


// Function: union_type at 0x401c50
int union_type(void* a0, unsigned int a1)
{
 unsigned int v3; // fpround
 unsigned int v0; // [bp-0xc]
 unsigned short v1; // [bp-0x8]
 unsigned short v2; // [bp-0x6]

 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 v2 = _ccall(v3);
 v1 = v2 & 255 | ((char)(((unsigned int)a0 & 0xffff0000 | v2) >> 8) | 12) * 0x100;
 v0 = 0;
 return v0;
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: union_array at 0x401c8e
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // eax
 unsigned int v1; // edx

 idx = 0;
 for (v1 = 0; idx < a1; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: enum_type at 0x401cab
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x401cb8
unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // ecx

 __x86_get_pc_thunk_cx(0);
 if (a0 > 3)
 return 4294967197;
 return *((char *)(v0 + 17167 + a0 - 10636));
}


// Function: struct_func_ptr at 0x401ce1
int struct_func_ptr(unsigned int *ptr)
{
 unsigned int v0; // [bp+0x4]

 v0 = *(ptr);
 return ptr[1];
}


// Function: linked_list at 0x401cf6
unsigned int linked_list(struct_0 *i)
{
 unsigned int v0; // edx

 for (v0 = 0; i; i = (struct_0 *)i->field_4)
 {
 v0 += i->field_0;
 }
 return v0;
}


// Function: doubly_linked_list at 0x401d11
unsigned int doubly_linked_list(struct_0 *i)
{
 unsigned int v0; // edx

 for (v0 = 0; i; i = (struct_0 *)i->field_4)
 {
 v0 += i->field_0;
 }
 return v0;
}


// Function: binary_tree_sum at 0x401d2c
unsigned int binary_tree_sum(struct_0 *a0)
{
 unsigned int v0; // esi
 struct_0 *ptr; // ebx
 unsigned int v2; // eax
 struct_0 *v3; // ebx

 v0 = 0;
 while (1)
 {
 ptr = a0;
 if (!ptr)
 break;
 v2 = binary_tree_sum((struct_0 *)ptr->field_4);
 v3 = (struct_0 *)ptr->field_8;
 v0 += v2 + ptr->field_0;
 a0 = v3;
 }
 return v0;
}


// Function: binary_tree at 0x401d5e
int binary_tree()
{
 char v0; // [bp+0x0]

 binary_tree_sum(*((int *)&v0));
 return;
}


// Function: graph_traverse at 0x401d64
unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned int idx; // eax
 unsigned int v1; // ecx
 unsigned int cur; // edx

 idx = 0;
 for (v1 = 0; ptr[10] > idx; idx += 1)
 {
 for (cur = ptr[idx]; cur; cur = *((int *)(cur + 4)))
 {
 v1 += *((int *)cur);
 }
 }
 return v1;
}


// Function: test_composite_types at 0x401d92
extern unsigned int g_403422;
extern unsigned int g_403620;

int test_composite_types()
{
 char *cur; // edi
 unsigned long v34; // ldt
 unsigned int flag10; // ecx
 char *node; // edi
 unsigned int flag11; // ecx
 unsigned long v35; // gdt
 unsigned short v36; // gs
 unsigned int *i; // esi
 unsigned int flag9; // ecx
 char *iter; // edi
 unsigned int *j; // esi
 unsigned int flag6; // [bp-0xe0]
 unsigned int v1; // [bp-0xd4]
 unsigned int result; // [bp-0xd0]
 unsigned int v3; // [bp-0xcc]
 char *v4; // [bp-0xc8]
 unsigned short v5; // [bp-0xc4]
 unsigned int v6; // [bp-0xc0]
 unsigned int v7[2]; // [bp-0xbc]
 unsigned int v9_val; // [bp-0xb4]
 unsigned int flag7; // [bp-0xb4]
 unsigned int flag8; // [bp-0xb0]
 unsigned int v11; // [bp-0xac]
 unsigned int flag4; // [bp-0xa8]
 unsigned int flag5; // [bp-0xa4]
 char v14; // [bp-0xa0]
 unsigned int v15[6]; // [bp-0x94]
 unsigned int v16; // [bp-0x7c]
 char *v17; // [bp-0x78]
 unsigned int v18; // [bp-0x74]
 char *v19; // [bp-0x70]
 unsigned int v20; // [bp-0x6c]
 unsigned int flag1; // [bp-0x68]
 unsigned int v22; // [bp-0x64]
 char *v23; // [bp-0x60]
 unsigned int flag2; // [bp-0x5c]
 char v25; // [bp-0x58], Other Possible Types: unsigned int
 unsigned int flag3; // [bp-0x54]
 char *v27; // [bp-0x50]
 char *v28; // [bp-0x4c]
 char v29; // [bp-0x48]
 unsigned int v30; // [bp-0x24]
 unsigned int v31; // [bp-0x20]
 unsigned int j_val; // added for middle declaration fix

 cur = (char *)v15;
 v31 = *((int *)_ccall(v34, v35, (unsigned int)v36, 20));
 i = &g_403620;
 sub_4010b0(&g_403422);
 sub_4010c0(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 for (flag9 = 6; flag9; i += 1)
 {
 flag9 -= 1;
 *((unsigned int *)&cur[0]) = *(i);
 cur += 1;
 }
 iter = &v14;
 j_val = (unsigned int)"\n";
 j = &j_val;
 flag6 = 0;
 sub_4010c0(1, "CMP-L2-02 (struct_array): %d\n", struct_array(&v15, 2));
 sub_4010c0(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 sub_4010c0(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v1 = 20;
 v4 = &v1;
 result = 0;
 v3 = 10;
 sub_4010c0(1, "CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v3));
 v6 &= 0xfff00000;
 v5 = 6429;
 sub_4010c0(1, "CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v5));
 sub_4010c0(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 for (flag10 = 3; flag10; j += 1)
 {
 flag10 -= 1;
 *((unsigned int *)&iter[0]) = *j;
 iter += 1;
 }
 node = &v29;
 sub_4010c0(1, "CMP-L2-08 (union_array): %d\n", union_array(&v14, 3));
 sub_4010c0(1, "CMP-L2-09 (enum_type): %d\n", 10);
 sub_4010c0(1, "CMP-L2-10 (enum_switch): %d\n", 50);
v7[0] = 10;
v7[1] = process_int(v7[0]);
 sub_4010c0(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(v7));
 v16 = 10;
 v17 = (char *)&v18;
 v19 = (char *)&v20;
 v18 = 20;
 v20 = 30;
 flag1 = 0;
 sub_4010c0(1, "CMP-L2-12 (linked_list): %d\n", linked_list((struct_0 *)&v16));
 v22 = 10;
 v23 = (char *)&v25;
 flag2 = 0;
 v25 = 20;
 flag3 = 0;
 v27 = (char *)&v22;
 sub_4010c0(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list((struct_0 *)&v22));
 v11 = 100;
 flag4 = 0;
 flag5 = 0;
 sub_4010c0(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum((struct_0 *)&v11));
 flag11 = 9;
 flag7 = 1;
 for (flag8 = 0; flag11; node += 4)
 {
 flag11 -= 1;
 *(unsigned int *)node = flag6;
 }
 v30 = 2;
 v28 = (char *)&flag7;
 sub_4010c0(1, "CMP-L2-15 (graph_traverse): %d\n", graph_traverse((unsigned int **)&v28));
 if (v31 == *((int *)_ccall(v34, v35, (unsigned int)v36, 20)))
 return v31 - *((int *)_ccall(v34, v35, (unsigned int)v36, 20));
 return __stack_chk_fail_local();
}


// Function: __x86.get_pc_thunk_ax at 0x402091
int __x86_get_pc_thunk_ax(int a0);

int __x86_get_pc_thunk_ax(int a0)
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_cx at 0x402095
void __x86_get_pc_thunk_cx(void);

void __x86_get_pc_thunk_cx(void)
{
 return;
}


// Function: sub_402099 at 0x402099
int sub_402099()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x4020a0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]
 struct_0 dummy;

 v0 = v2;
 sub_4010a0(&dummy);
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx(0);
 return v0;
}


// Function: sub_402102 at 0x402102
void sub_402102()
{
}



/* CRT stub function _fini removed by preprocessor */


