// Angr Decompilation of 2_gcc_Os_g
// Platform: ARMEL

#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */

// Global variables for decompiler artifacts
unsigned int vvar_4;
unsigned int vvar_5;
unsigned int vvar_22;
unsigned int vvar_24;
unsigned int vvar_39;
unsigned int vvar_73;
unsigned int vvar_74;
unsigned int vvar_86;
unsigned int vvar_90;
unsigned int vvar_104;
unsigned int vvar_204;
unsigned int vvar_209;
unsigned int vvar_221;
unsigned int vvar_247;
unsigned int vvar_314;
unsigned int vvar_472;
unsigned int vvar_21;
unsigned int vvar_1;
unsigned int vvar_32;

// Forward declarations for struct types
struct struct_0;
struct struct_1;

// Forward declarations for functions
unsigned int test_array_types(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
unsigned int test_pointer_types(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int test_composite_types();
unsigned int __muldf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11);
unsigned int sub_115a8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
unsigned int __mulsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int __addsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);

// Struct definitions
struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
 unsigned int field_8;
 unsigned int field_12;
 unsigned int field_16;
 unsigned int field_20;
};

struct struct_1 {
 struct struct_0 *field_0;
};



// Function: sub_103e8 at 0x103e8
extern unsigned int g_23008;

int sub_103e8()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: main at 0x1045c
unsigned int main()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r3
 unsigned int v6; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = test_data_types_l1();
 v6 = test_pointer_types(test_array_types(v2, v3, v4, v5, *((int *)&v0), *((int *)&v1)), v3, v4, v5);
 test_composite_types(v6, v3, v4, v5);
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_104b0 at 0x104b0
void sub_104b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x10570
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_int at 0x10578
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: complex_callback at 0x10584
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1)
{
 *(ptr) = *(ptr) + 10;
 if (!*(a1))
 return *(a1);
 return 1;
}


// Function: process_char at 0x105a0
unsigned int process_char(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r0

 v0 = a0 - 65;
 if (v0 <= 25)
 {
 v1 = a0 + 32;
 if (!armg_calculate_condition(146, v0, 25, 0))
 return a0 + 32;
 }
 else if (!armg_calculate_condition(146, v0, 25, 0))
 {
 return a0;
 }
 return v1 & 255;
}


// Function: process_short at 0x105b4
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return a0 + a1 & 65535;
}


// Function: process_long at 0x105c4
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x105cc
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x105e0
void process_float()
{
 unsigned int v2; // r0
 unsigned int v3; // r2
 unsigned int v4; // r3
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = __mulsf3(0, 0, 0, 0);
 __addsf3(v2, 0x3f000000, v3, v4, *((int *)&v0), *((int *)&v1));
 return;
}


// Function: process_double at 0x105f8
void process_double()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = __muldf3(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
 __aeabi_dadd(v2, v3, 2576980378, 1069128089, *((int *)&v0), *((int *)&v1));
 return;
}


// Function: process_ld at 0x10624
void process_ld(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = __muldf3(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
 __aeabi_dadd(v2, a1, 0, 0x3ff00000, *((int *)&v0), *((int *)&v1));
 return;
}


// Function: process_bool at 0x10648
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (a0 <= 0)
 {
 v0 = 0;
 if (!armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10652;
LABEL_10651:
 v1 = v0 & 1;
 if (!armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10656;
LABEL_10655:
 v1 = 1 - v1;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10651;
LABEL_10652:
 v1 = v0;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10655;
LABEL_10656:
 ;
 }
 return v1 & 1;
}


// Function: const_param at 0x10660
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x1066c
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x1067c
extern char g_11ed4;

int test_data_types_l1(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = a1;
 v0 = a0;
 puts(0x11ed4);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 0);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 3435973837);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n");
 __printf_chk(1, "DT-L1-09 (process_bool): %", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 v1 = 10;
 v2 = __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v1 * 2);
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v1 * 2);
}


// Function: array_1d_stack at 0x107dc
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int idx; // r3
 unsigned int v3; // r3

 v0 = 0;
 v1 = 0;
 while (true)
 {
 idx = v0;
 if (a1 > idx)
 goto LABEL_107f0;
 return v1;
LABEL_107f0:
 v3 = idx + 1;
 v1 += *((int *)(ptr + idx * 4));
 v0 = v3;
 }
}


// Function: array_string at 0x10800
unsigned int array_string(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 0;
 while (true)
 {
 if (*((char *)(a0 + v0)))
 goto LABEL_10814;
 return v0;
LABEL_10814:
 v0 += 1;
 }
}


// Function: array_2d_stack at 0x1081c
int array_2d_stack(unsigned int ptr)
{
 unsigned int i; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int idx; // r3
 unsigned int v4; // r3
 unsigned int v5; // r0

 i = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 idx = i;
 v4 = idx + 11;
 v5 = v2 + *((int *)(ptr + idx * 4));
 i = v4;
 v1 = v5;
 } while (i != 110);
 return v2 + *((int *)(ptr + idx * 4));
}


// Function: array_3d at 0x10840
unsigned int array_3d(unsigned int *a0)
{
 unsigned int v0; // r0
 unsigned int *i; // r3
 unsigned int *v2; // r3
 unsigned int *p; // r3
 unsigned int *ptr; // r3

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


// Function: array_vla at 0x10890
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int idx; // r3
 unsigned int v3; // r3

 v0 = 0;
 v1 = 0;
 while (true)
 {
 idx = v0;
 if (a0 > idx)
 goto LABEL_108a4;
 return v1;
LABEL_108a4:
 v3 = idx + 1;
 v1 += *((int *)(ptr + idx * 4));
 v0 = v3;
 }
}


// Function: array_pointer at 0x108b4
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int i; // r3
 unsigned int v2; // r0
 unsigned int v3; // lr
 unsigned int v4; // r0
 unsigned int idx; // r3
 unsigned int v6; // r3
 unsigned int v7; // r0
 unsigned int v0; // [bp-0x4]

 i = 0;
 v2 = 0;
 if (a1 > 0)
 goto LABEL_108cc;
 return 0;
LABEL_108cc:
 v0 = v3;
 do
 {
 v4 = v2;
 idx = i;
 v6 = idx + 1;
 v7 = v4 + *((int *)(ptr + 40 * idx));
 i = v6;
 v2 = v7;
 } while (i < a1);
 return v4 + *((int *)(ptr + 40 * idx));
}


// Function: pointer_array at 0x108ec
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int idx; // r3
 unsigned int v3; // r3

 v0 = 0;
 if (10 <= a1)
 a1 = 10;
 v1 = 0;
 while (true)
 {
 idx = v0;
 if (a1 > idx)
 goto LABEL_10908;
 return v1;
LABEL_10908:
 v3 = idx + 1;
 if (*((int *)(a0 + idx * 4)))
 v1 += *((int *)*((int *)(a0 + idx * 4)));
 v0 = v3;
 }
}


// Function: array_complex_index at 0x10920
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v1; // r12
 char v0; // [bp+0x0]

 if (a3 < a1)
 {
 vvar_22 = 0;
 if (!armg_calculate_condition(162, a3, a1, 0))
 goto LABEL_1092e;
LABEL_1092d:
 vvar_24 = 1;
 ;
 }
 else
 {
 if (armg_calculate_condition(162, a3, a1, 0))
 goto LABEL_1092d;
LABEL_1092e:
 ;
 }
 v1 = *((int *)&v0);
 if (!(!vvar_5 && !(a3 | v1) >> 31))
 {
 return 4294967295;
 }
 else if (a2 > v1)
 {
 return *((int *)(a0 + (a3 + v1 * a1) * 4));
 }
 else
 {
 return 4294967295;
 }
}


// Function: array_oob at 0x1095c
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int idx; // r3
 unsigned int v3; // r3

 v0 = 0;
 v1 = 0;
 while (true)
 {
 idx = v0;
 if (a1 >= idx)
 goto LABEL_10970;
 return v1;
LABEL_10970:
 v3 = idx + 1;
 v1 += *((int *)(ptr + idx * 4));
 v0 = v3;
 }
}


// Function: test_array_types at 0x10980
extern unsigned int __glibc___stack_chk_guard;
extern char g_10a08;
extern char g_1203f;

unsigned int test_array_types(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int j; // r6
 unsigned int flag1; // r4
 unsigned int *ptr; // r3
 unsigned int k; // r4
 unsigned int *p; // r3
 unsigned int *v28; // r1
 unsigned int *v46; // r3
 unsigned int v47; // r0
 unsigned int i; // r3
 char *v30; // r12
 unsigned int v31; // r2
 char *addr; // r12
 char *v33; // r12
 unsigned int *v35; // r1
 unsigned int v0; // [bp-0x51c]
 unsigned int v1; // [bp-0x518]
 unsigned int v2; // [bp-0x514]
 unsigned int v3; // [bp-0x510]
 unsigned int v4; // [bp-0x50c]
 unsigned int v5; // [bp-0x508]
 unsigned int result; // [bp-0x504]
 unsigned int v7; // [bp-0x500]
 unsigned int v8; // [bp-0x4fc]
 unsigned int v9; // [bp-0x4f8]
 unsigned int v10; // [bp-0x4f4]
 char *v11; // [bp-0x4f0]
 char *v12; // [bp-0x4ec]
 char *v13; // [bp-0x4e8]
 char v14; // [bp-0x4e4]
 unsigned int v15; // [bp-0x4c8]
 char v16; // [bp-0x484]
 unsigned int v17; // [bp-0x478]
 unsigned int v18; // [bp-0x450]
 unsigned int v19; // [bp-0x428]
 unsigned int v20; // [bp-0x400]
 unsigned int v21; // [bp-0x3d8]
 char v22; // [bp-0x3b0]
 unsigned int v23[125]; // [bp-0x220]
 char v24; // [bp-0x2c]
 unsigned int v25; // [bp-0x24]

 v25 = __glibc___stack_chk_guard;
 puts(0x1203f);
 result = 1;
 v7 = 2;
 v8 = 3;
 v9 = 4;
 v10 = 5;
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&result, 5));
 memcpy(&v24, "hello", 6);
 vvar_90 = 68104;
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", array_string(&v24));
 v28 = (unsigned int *)&v22;
 i = 0;
 do
 {
 v30 = (char *)v28;
 v31 = 0;
 do
 {
 addr = v30;
 if (v31 == i)
 {
 vvar_1 = i;
 if (!armg_calculate_condition(18, v31, i, 0))
 goto LABEL_10a26;
 goto LABEL_10a25;
 }
 else if (armg_calculate_condition(18, v31, i, 0))
 {
LABEL_10a25:
 vvar_104 = 0;
 ;
 }
 else
 {
LABEL_10a26:
 ;
 }
 } while ((v31 += 1, v33 = addr + 1, *((int *)&addr[0]) = vvar_39, v30 = addr + 1, v31 != 10));
 i += 1;
 v28 += 10;
 } while (i != 10);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v22));
 v35 = &v23;
 j = 0;
 do
 {
 flag1 = 5;
 ptr = v35;
 do
 {
 k = flag1 - 1;
 ptr[0] = 1;
 ptr[1] = 1;
 ptr[2] = 1;
 ptr[3] = 1;
 ptr[4] = 1;
 flag1 = k;
 ptr = ptr + 1;
 } while (flag1 != 1);
 j += 1;
 v35 += 5;
 } while (j != 5);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", array_3d(&v23));
 v3 = 10;
 v4 = 20;
 v5 = 30;
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, &v3));
 v21 = 40;
 v17 = k;
 v18 = 10;
 v19 = 20;
 v20 = 30;
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer(&v17, 5));
 v0 = 10;
 v1 = 20;
 v2 = 30;
 memset(&v14, k, 28);
 v11 = &v0;
 v12 = &v1;
 v13 = &v2;
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array(&v11, 3));
 p = &v15;
 do
 {
 v46 = p + 1;
 *(p) = k;
 k += 1;
 p = v46;
 } while (k != 20);
 v47 = __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v16));
 if (!(v25 ^ __glibc___stack_chk_guard))
 return v47;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_single at 0x10bf4
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x10c00
int ptr_double(struct struct_0 **a0)
{
 return (*(a0))->field_0 + 5;
}


// Function: ptr_triple at 0x10c10
int ptr_triple(struct struct_1 **a0)
{
 return (*(a0))->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x10c24
unsigned int ptr_increment(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int idx; // r3
 unsigned int v3; // r3

 v0 = 0;
 v1 = 0;
 while (true)
 {
 idx = v0;
 if (a1 > idx)
 goto LABEL_10c38;
 return v1;
LABEL_10c38:
 v3 = idx + 1;
 v1 += *((int *)(ptr + idx * 4));
 v0 = v3;
 }
}


// Function: ptr_offset at 0x10c48
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x10c50
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x10c5c
unsigned int ptr_void(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 != 1)
 {
 return 4294967295;
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: ptr_const at 0x10c7c
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x10c88
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x10c9c
int ptr_func_simple(unsigned int a0, unsigned int a1)
{
 return ((int (*)(unsigned int, unsigned int))a0)(a0, a1);
}


// Function: ptr_func_complex at 0x10ca8
extern unsigned int __glibc___stack_chk_guard;

unsigned int ptr_func_complex(unsigned int (*a0)(unsigned int, unsigned int *, unsigned int, unsigned int *, unsigned int *, char *, unsigned int, unsigned int, unsigned int, unsigned int), unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v2; // r4
 unsigned int v3; // lr
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 v0 = "test";
 v4 = a0(a1, &v0, 0, a0, a0, "test", 0, __glibc___stack_chk_guard, v2, v3);
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_cast at 0x10d08
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x10d10
int opaque_handle_create()
{
 unsigned int v0; // r0

 return v0;
}


// Function: opaque_handle_op at 0x10d14
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x10d1c
extern unsigned int __glibc___stack_chk_guard;
extern char g_1215b;

unsigned int test_pointer_types(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v13; // r2
 unsigned int v14; // r3
 unsigned int v16; // r0
 char v0; // [bp-0x30], Other Possible Types: unsigned int
 char *v1; // [bp-0x2c], Other Possible Types: char
 char *v2; // [bp-0x28]
 unsigned int v3; // [bp-0x24]
 unsigned int result; // [bp-0x20]
 unsigned int v5; // [bp-0x1c]
 unsigned int v6; // [bp-0x18]
 unsigned int v7; // [bp-0x14]
 unsigned int v8; // [bp-0x10]
 unsigned int v9; // [bp-0xc]

 v9 = __glibc___stack_chk_guard;
 puts(0x1215b);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v2 = &v1;
 v1 = &v0;
 v0 = 5;
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", ptr_triple(&v2));
 result = 1;
 v5 = 2;
 v6 = 3;
 v7 = 4;
 v8 = 5;
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&result, 5));
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5));
 v3 = 5;
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v3, v13, v14));
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 v16 = __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 if (!(v9 ^ __glibc___stack_chk_guard))
 return v16;
 __stack_chk_fail(); /* do not return */
}


// Function: struct_simple at 0x10ee4
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x10ef8
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int i; // r12
 unsigned int v2; // r0
 unsigned int *cur; // r3
 unsigned int v4; // lr
 unsigned int v5; // r0
 unsigned int v6; // r2
 unsigned int v7; // r0
 unsigned int v0; // [bp-0x4]

 i = 0;
 v2 = 0;
 cur = (unsigned int *)(a0 + 3);
 if (a1 > 0)
 goto LABEL_10f10;
 return 0;
LABEL_10f10:
 v0 = v4;
 do
 {
 v5 = v2;
 i += 1;
 v7 = v5 + cur[1] + cur[2] + cur[1];
 cur += 1;
 v2 = v7;
 } while (i < a1);
 return v5 + v6;
}


// Function: struct_nested at 0x10f40
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x10f50
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x10f60
int struct_with_ptr(struct struct_0 *a0)
{
 return a0->field_0 + a0->field_4->field_0;
}


// Function: struct_bitfields at 0x10f78
int struct_bitfields(void* ptr)
{
 unsigned int v0; // r2

 v0 = *((char *)ptr);
 return (v0 & 1) + (v0 * 0x20000000 >> 30) + (v0 * 0x4000000 >> 29) + (*((short *)ptr) >> 6);
}


// Function: union_type at 0x10f9c
unsigned int union_type(void* a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 v1 = v2;
 v0 = v3;
 v4 = __fixsfsi(*((int *)a0));
 return __fixsfsi(*((int *)a0));
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: union_array at 0x10fcc
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int idx; // r3
 unsigned int v3; // r3

 v0 = 0;
 v1 = 0;
 while (true)
 {
 idx = v0;
 if (a1 > idx)
 goto LABEL_10fe0;
 return v1;
LABEL_10fe0:
 v3 = idx + 1;
 v1 += *((int *)(ptr + idx * 4));
 v0 = v3;
 }
}


// Function: enum_type at 0x10ff0
unsigned int enum_type(unsigned int a0)
{
 return 10 * a0;
}


// Function: enum_switch at 0x10ffc
extern struct struct_0 g_124dc;

unsigned int enum_switch(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 struct struct_0 *v0; // r3

 v0 = 74972;
 if (a0 <= 3)
 v0 = 74972 + a0;
 if (!armg_calculate_condition(130, a0, 3, 0))
 return v0->field_20;
 return 4294967197;
}


// Function: struct_func_ptr at 0x11018
int struct_func_ptr(struct struct_0 *a0)
{
 return ((int (*)(void))a0->field_4)();
 ;
}


// Function: linked_list at 0x11020
unsigned int linked_list(struct struct_0 *a0)
{
 unsigned int v0; // r0
 struct struct_0 *ptr; // r3
 struct struct_0 *v2; // r3

 v0 = 0;
 while (true)
 {
 ptr = a0;
 if (ptr)
 goto LABEL_11030;
 return v0;
LABEL_11030:
 v2 = ptr->field_4;
 v0 += ptr->field_0;
 a0 = v2;
 }
}


// Function: doubly_linked_list at 0x11040
unsigned int doubly_linked_list(struct struct_0 *a0)
{
 unsigned int v0; // r0
 struct struct_0 *ptr; // r3
 struct struct_0 *v2; // r3

 v0 = 0;
 while (true)
 {
 ptr = a0;
 if (ptr)
 goto LABEL_11050;
 return v0;
LABEL_11050:
 v2 = ptr->field_4;
 v0 += ptr->field_0;
 a0 = v2;
 }
}


// Function: binary_tree_sum at 0x11060
unsigned int binary_tree_sum(struct struct_0 *a0)
{
 unsigned int v0; // r5
 struct struct_0 *ptr; // r4
 unsigned int v2; // r0
 struct struct_0 *v3; // r4

 v0 = 0;
 while (true)
 {
 ptr = a0;
 if (!ptr)
 break;
 v2 = binary_tree_sum(ptr->field_4);
 v3 = ptr->field_8;
 v0 += v2 + ptr->field_0;
 a0 = v3;
 }
 return v0;
}


// Function: binary_tree at 0x11098
unsigned int binary_tree(void* a0)
{
 unsigned int v0; // r0

 v0 = binary_tree_sum(a0);
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x1109c
unsigned int graph_traverse(struct struct_0 **p)
{
 unsigned int cur; // r3
 unsigned int v2; // r0
 unsigned int result; // r1
 unsigned int ptr; // r1
 unsigned int v5; // r0
 unsigned int v6; // r1
 unsigned int v7; // r0
 unsigned int v0; // [bp-0x4]

 cur = 0;
 v2 = 0;
 while (true)
 {
 if (p[10] > cur)
 goto LABEL_110b4;
 return 0;
LABEL_110b4:
 result = p[cur];
 if (p[cur])
 break;
 cur += 1;
 }
 v0 = vvar_21;
 while (true)
 {
 ptr = result;
 v5 = v2;
 v6 = *((int *)(ptr + 4));
 v7 = v5 + *((int *)ptr);
 while (true)
 {
 v2 = v7;
 if (v6)
 break;
 cur += 1;
 if (cur >= p[10])
 return v5 + *((int *)ptr);
 v6 = p[cur];
 }
 }
}


// Function: test_composite_types at 0x110f8
extern unsigned int __glibc___stack_chk_guard;
extern char g_122f4;

unsigned int test_composite_types()
{
 unsigned int v50; // r0
 char v0; // [bp-0xdc], Other Possible Types: unsigned int
 unsigned int result; // [bp-0xd8]
 unsigned int v2; // [bp-0xd4]
 char *v3; // [bp-0xd0]
 unsigned int v4; // [bp-0xcc]
 unsigned int flag12; // [bp-0xc8]
 unsigned int v6; // [bp-0xc4]
 unsigned int v7; // [bp-0xc0]
 unsigned int flag6; // [bp-0xbc]
 unsigned int flag7; // [bp-0xb8]
 unsigned int flag11; // [bp-0xb4]
 unsigned int v11; // [bp-0xb0]
 unsigned int v12; // [bp-0xac]
 unsigned int v13; // [bp-0xa8]
 unsigned int flag4; // [bp-0xa4]
 unsigned int flag5; // [bp-0xa0]
 unsigned int v16; // [bp-0x9c]
 unsigned int v17; // [bp-0x98]
 unsigned int v18; // [bp-0x94]
 unsigned int *flag8; // [bp-0x90]
 unsigned int flag9; // [bp-0x8c]
 unsigned int flag10; // [bp-0x88]
 unsigned int v22; // [bp-0x84]
 unsigned int v23; // [bp-0x80]
 unsigned int v24; // [bp-0x7c]
 unsigned int v25; // [bp-0x78]
 char *v26; // [bp-0x74]
 char v27; // [bp-0x70], Other Possible Types: unsigned int
 char *v28; // [bp-0x6c]
 char v29; // [bp-0x68], Other Possible Types: unsigned int
 unsigned int flag1; // [bp-0x64]
 unsigned int v31; // [bp-0x60]
 char *v32; // [bp-0x5c]
 unsigned int flag2; // [bp-0x58]
 char v34; // [bp-0x54], Other Possible Types: unsigned int
 unsigned int flag3; // [bp-0x50]
 char *v36; // [bp-0x4c]
 char *v37; // [bp-0x48]
 char v38[36]; // [bp-0x44]
 unsigned int v39; // [bp-0x20]
 unsigned int v40; // [bp-0x1c]

 v40 = __glibc___stack_chk_guard;
 puts(0x122f4);
 flag11 = 1;
 v11 = 2;
 v12 = 3;
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", struct_simple(&flag11));
 flag8[0] = 1;
 flag9 = 1;
 flag10 = 1;
 v22 = 2;
 v23 = 2;
 v24 = 2;
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", struct_array(flag8, 2));
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v3 = &v0;
 v0 = 20;
 result = 0;
 v2 = 10;
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v2));
 v4 = 6429;
 flag12 = 0;
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v4));
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v16 = 10;
 v17 = 20;
 v18 = 30;
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", union_array(&v16, 3));
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v7 = process_int;
 v6 = 10;
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v6));
 v26 = &v27;
 v28 = &v29;
 v29 = 30;
 v25 = 10;
 v27 = 20;
 flag1 = 0;
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", linked_list(&v25));
 v32 = &v34;
 v31 = 10;
 flag2 = 0;
 v34 = 20;
 flag3 = 0;
 v36 = &v31;
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v31));
 v13 = 100;
 flag4 = 0;
 flag5 = 0;
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v13));
 flag6 = 1;
 flag7 = 0;
 memset(&v38, 0, 36);
 v37 = &flag6;
 v39 = 2;
 v50 = __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v37));
 if (!(v40 ^ __glibc___stack_chk_guard))
 return v50;
 __stack_chk_fail(); /* do not return */
}


// Function: __muldf3 at 0x113c8
extern char __stack_chk_guard;

unsigned int __muldf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11)
{
 unsigned int v2; // r4
 unsigned int v3; // r5
 unsigned int v12; // r5
 unsigned int v13; // cc_op
 unsigned int v14; // cc_dep1
 unsigned int v15; // cc_dep2
 unsigned int v16; // cc_ndep
 unsigned int v21; // cc_op
 unsigned int v4; // cc_op
 unsigned int v22; // cc_dep1
 unsigned int v23; // cc_dep2
 unsigned int v24; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v33; // cc_op
 unsigned int v34; // cc_dep1
 unsigned int v35; // cc_dep2
 unsigned int v36; // cc_ndep
 unsigned int v6; // cc_dep2
 unsigned int v45; // r4
 unsigned int v46; // r6
 unsigned int v47; // r1
 unsigned int v48; // r3
 unsigned int v49; // cc_op
 unsigned int v50; // cc_dep1
 unsigned int v7; // cc_ndep
 unsigned int v51; // cc_dep2
 unsigned int v52; // cc_ndep
 unsigned int v53; // r1
 unsigned int v54; // r3
 unsigned int v55; // r5
 unsigned int v56; // r5
 unsigned int v57; // r6
 unsigned int v58; // r5
 unsigned int v60; // cc_ndep
 unsigned int v8; // cc_op
 unsigned int v61; // r4
 unsigned int v62; // r6
 unsigned int v63; // r5
 unsigned int v64; // cc_dep1
 unsigned int v65; // cc_dep2
 unsigned int v67; // cc_dep1
 unsigned int v68; // r1
 unsigned int v69; // r0
 unsigned int v70; // r12
 unsigned int v9; // cc_dep1
 unsigned int v71; // cc_dep1
 unsigned int v72; // cc_dep2
 unsigned int v73; // cc_ndep
 unsigned int v74; // cc_op
 unsigned int v75; // cc_dep1
 unsigned int v76; // cc_dep2
 unsigned int v77; // cc_ndep
 unsigned int v78; // r1
 unsigned int v79; // r4
 unsigned int v80; // cc_op
 unsigned int v10; // cc_dep2
 unsigned int v81; // cc_dep1
 unsigned int v82; // cc_dep2
 unsigned int v83; // cc_ndep
 unsigned int v84; // r0
 unsigned int v85; // r4
 unsigned int v86; // r4
 unsigned int v87; // r4
 char v88; // r4
 unsigned int v11; // cc_ndep
 unsigned int v93; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x10]

 v2 = 2047 & a1 >> 20;
 if ((2047 & a1 >> 20))
 {
 v3 = 2047 & a3 >> 20;
 v8 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 5 : v4);
 v9 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 2047 & a3 >> 20 : v5);
 v10 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? a3 >> 19 & 1 : v6);
 v11 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? armg_calculate_flag_v(v4, v5, v6, v7) : v7);
 if (!armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_113de;
LABEL_113dd:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_113e2;
LABEL_113e1:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_115a8(0, 0, 0, 0, 0, 0, 0, 0);
 return sub_115a8(0, 0, 0, 0, 0, 0, 0, 0);
 }
 }
 else
 {
 v3 = v12;
 v8 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 5 : v13);
 v9 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 2047 & a3 >> 20 : v14);
 v10 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? a3 >> 19 & 1 : v15);
 v11 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_v(v13, v14, v15, v16) : v16);
 if (armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_113dd;
LABEL_113de:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_113e1;
LABEL_113e2:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_115a8(0, 0, 0, 0, 0, 0, 0, 0);
 return sub_115a8(0, 0, 0, 0, 0, 0, 0, 0);
 }
 }
 v45 = v2 + v3;
 v46 = a1 ^ a3;
 v47 = a1 & ~(0xffe00000);
 v48 = a3 & ~(0xffe00000);
 if (a0 || v47 * 0x1000)
 {
 v49 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? 5 : v33);
 v50 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? a2 | v48 * 0x1000 : v34);
 v51 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? v48 >> 20 & 1 : v35);
 v52 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? armg_calculate_flag_v(v33, v34, v35, v36) : v36);
 }
 else
 {
 v49 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? 5 : v33);
 v50 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? a2 | v48 * 0x1000 : v34);
 v51 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? v48 >> 20 & 1 : v35);
 v52 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? armg_calculate_flag_v(v33, v34, v35, v36) : v36);
 }
 v53 = v47 | 0x100000;
 v54 = v48 | 0x100000;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 {
 v55 = (a0 * a2 >> 32) + v53 * a2 >> 32;
 vvar_204 = (a0 * a2 >> 32) + v53 * a2;
 v56 = v55 + a0 * v54 >> 32;
 vvar_209 = v55 + a0 * v54;
 v57 = v56 + v53 * v54 >> 32;
 v58 = v56 + v53 * v54;
 if (a0 * a2)
 vvar_221 = vvar_209 | 1;
 v60 = 0;
 v61 = v45 - 1023 - (0x200 > v57);
 vvar_74 = vvar_73;
 v62 = v57;
 v63 = v58;
 v64 = v57;
 v65 = 0x200;
 if (0x200 > v62)
 {
 v60 = vvar_73 >> 31 & 1;
 v62 = v57 * 2 + armg_calculate_flag_c(3, v58, v58, vvar_73 >> 31 & 1);
 vvar_472 = vvar_73 * 2;
 v63 = v58 * 2 + (vvar_73 >> 31 & 1);
 v64 = v58;
 v65 = v58;
 }
 v67 = v64;
 v68 = v46 & 0x80000000 | v62 * 0x800 | v63 >> 21;
 v69 = v63 * 0x800 | vvar_74 >> 21;
 vvar_247 = vvar_74 * 0x800;
 v70 = v61 - 253;
 if (253 < v61)
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if ((char)armg_calculate_condition(130, v71, v72, v73))
 goto LABEL_114ac;
LABEL_1146c:
 if (vvar_86 == 0x80000000)
 {
 v74 = (armg_calculate_condition(2, v71, v72, v73) ? 5 : 2);
 v75 = (armg_calculate_condition(2, v71, v72, v73) ? v69 >> 1 : v71);
 v76 = (armg_calculate_condition(2, v71, v72, v73) ? v69 & 1 : v72);
 v77 = (armg_calculate_condition(2, v71, v72, v73) ? armg_calculate_flag_v(2, v71, v72, v73) : v73);
 }
 else
 {
 v74 = (armg_calculate_condition(2, v71, v72, v73) ? 5 : 2);
 v75 = (armg_calculate_condition(2, v71, v72, v73) ? v69 >> 1 : v71);
 v76 = (armg_calculate_condition(2, v71, v72, v73) ? v69 & 1 : v72);
 v77 = (armg_calculate_condition(2, v71, v72, v73) ? armg_calculate_flag_v(2, v71, v72, v73) : v73);
 }
 return v69 + armg_calculate_flag_c(v74, v75, v76, v77);
 }
 else
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if (!((char)armg_calculate_condition(130, v71, v72, v73)))
 goto LABEL_1146c;
LABEL_114ac:
 ;
 if ((char)armg_calculate_condition(194, v71, v72, v73))
 return 0;
 }
 }
 else
 {
 v69 = a0 | a2;
 v78 = (v46 & 0x80000000 | v53) ^ v54;
 v79 = v45 - 1023;
 if (1023 < v45)
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (!armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_1149a;
LABEL_11499:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_114a0;
 return a0 | a2;
 v1 = v0;
 }
 else
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_11499;
LABEL_1149a:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_114a0;
 return a0 | a2;
 v1 = v0;
 }
LABEL_114a0:
 v68 = v78 | 0x100000;
 vvar_314 = 0;
 v61 = v0 - 1;
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_114ba;
LABEL_114b9:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_114c0;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_114b9;
LABEL_114ba:
 ;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_114c0;
 return v84;
 }
LABEL_114c0:
 v85 = -(v1);
 v86 = v85 - 32;
 if (32 > v85)
 {
 v87 = v86 + 12;
 if (!((char)armg_calculate_condition(193, v86, 12, 0)))
 {
 v88 = (char)v87 + 20;
 if (vvar_86 || (v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) * 2)
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31) & ~((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 }
 else
 {
 if (!vvar_86 && !(v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) * 2)
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31) & ~((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 }
 }
 else if (!vvar_86 && !(v84 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) && !(v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) * 2)
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31) & ~((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
 else
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
}


// Function: sub_115a8 at 0x115a8
extern char __stack_chk_guard;

unsigned int sub_115a8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r12
 unsigned int flag3; // r5
 unsigned int v10; // cc_dep2
 unsigned int v11; // cc_ndep
 unsigned int v15; // cc_op
 unsigned int v16; // cc_dep1
 unsigned int v17; // cc_dep2
 unsigned int v18; // cc_ndep
 unsigned int v19; // cc_dep1
 unsigned int flag2; // r4
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v22; // cc_dep1
 unsigned int v23; // cc_dep1
 unsigned int flag1; // cc_dep2
 unsigned int v25; // r2
 unsigned int v26; // cc_dep1
 unsigned int result; // cc_dep2
 unsigned int v3; // cc_dep1
 unsigned int v31; // cc_dep1
 unsigned int v32; // cc_dep2
 unsigned int v33; // cc_ndep
 unsigned int v34; // r0
 unsigned int v35; // r1
 unsigned int v36; // cc_op
 unsigned int v4; // cc_dep2
 unsigned int v37; // cc_dep1
 unsigned int v38; // cc_dep2
 unsigned int v39; // cc_ndep
 unsigned int v40; // cc_dep1
 unsigned int v41; // cc_dep2
 unsigned int v42; // cc_ndep
 unsigned int v43; // cc_dep1
 unsigned int v44; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v47; // cc_dep1
 unsigned int v48; // cc_dep2
 unsigned int v49; // cc_ndep
 unsigned int v50; // r0
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_dep1

 flag3 = v0 & a3 >> 20;
 if ((flag2 ^ v0))
 {
 v6 = (armg_calculate_condition(21, v3, v4, v5) ? flag3 ^ v0 : v3);
 v7 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_115d4;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_115d4:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_115de;
LABEL_115dd:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_115e2;
LABEL_115e1:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 else
 {
 v34 = a0;
 if (armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_115dd;
LABEL_115de:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_115e1;
LABEL_115e2:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 v40 = flag2 ^ v0;
 v41 = armg_calculate_flag_c(v36, v37, v38, v39);
 v42 = armg_calculate_flag_v(v36, v37, v38, v39);
 v43 = v40;
 v44 = v41;
 if (!(flag2 ^ v0))
 {
 v42 = armg_calculate_flag_v(5, v40, v41, v42);
 v43 = v34 | v35 * 0x1000;
 v44 = v35 >> 20 & 1;
 if (v34 || v35 * 0x1000)
 return v34;
 }
 if (!(flag3 ^ v0))
 {
 v47 = a2 | a3 * 0x1000;
 v48 = a3 >> 20 & 1;
 v49 = armg_calculate_flag_v(5, flag3 ^ v0, armg_calculate_flag_c(5, v43, v44, v42), armg_calculate_flag_v(5, v43, v44, v42));
 if (a2 || a3 * 0x1000)
 {
 v50 = a2;
 if (!armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_1160a;
LABEL_11609:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_11609;
LABEL_1160a:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 }
 }
 }
 if (a0 || a1 * 2)
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 else
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 v19 = flag2;
 v20 = armg_calculate_flag_c(v15, v16, v17, v18);
 v21 = armg_calculate_flag_v(v15, v16, v17, v18);
 v22 = v19;
 if (!flag2)
 {
 while (true)
 {
 a0 *= 2;
 a1 = a1 * 2 + (a0 >> 31 & 1);
 v23 = a1 & 0x100000;
 flag1 = 0;
 v21 = armg_calculate_flag_v(5, v19, v20, v21);
 if (!(a1 & 0x100000))
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 else
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 }
 v20 = armg_calculate_flag_c(5, v23, 0, v21);
 v21 = armg_calculate_flag_v(5, v23, 0, v21);
 if (!flag3)
 goto LABEL_11588;
 return a0;
 v22 = flag3;
 }
LABEL_11588:
 while (true)
 {
 v25 = a2 * 2;
 a3 = a3 * 2 + (a2 >> 31 & 1);
 v26 = a3 & 0x100000;
 result = 0;
 v21 = armg_calculate_flag_v(5, v22, v20, v21);
 if (!(a3 & 0x100000))
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 else
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 }
}


// Function: __mulsf3 at 0x11634
unsigned int __mulsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r2
 unsigned int v1; // r3
 unsigned int v10; // cc_op
 unsigned int v79; // cc_ndep
 unsigned int v80; // r0
 unsigned int v81; // r2
 unsigned int v82; // cc_op
 unsigned int v83; // cc_dep1
 unsigned int v84; // cc_dep2
 unsigned int v85; // cc_ndep
 unsigned int v86; // cc_dep1
 unsigned int v87; // cc_dep2
 unsigned int v88; // cc_ndep
 unsigned int v11; // cc_dep1
 unsigned int v89; // r0
 unsigned int v90; // cc_dep1
 unsigned int v91; // cc_dep2
 unsigned int v92; // cc_ndep
 unsigned int v93; // cc_dep1
 unsigned int v94; // cc_dep2
 unsigned int v12; // cc_dep2
 unsigned int v95; // cc_ndep
 unsigned int v96; // cc_dep1
 unsigned int v97; // cc_dep2
 unsigned int v98; // cc_ndep
 unsigned int v99; // cc_dep1
 unsigned int v100; // cc_dep2
 unsigned int v103; // cc_dep1
 unsigned int v104; // cc_dep2
 unsigned int v13; // cc_ndep
 unsigned int v105; // cc_ndep
 unsigned int v18; // cc_op
 unsigned int v19; // cc_dep1
 unsigned int v2; // cc_op
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v30; // cc_op
 unsigned int v31; // cc_dep1
 unsigned int v32; // cc_dep2
 unsigned int v33; // cc_ndep
 unsigned int v4; // cc_dep2
 unsigned int v42; // cc_dep1
 unsigned int v43; // cc_dep2
 unsigned int v44; // cc_ndep
 unsigned int v45; // cc_op
 unsigned int v46; // cc_dep1
 unsigned int v47; // cc_dep2
 unsigned int v48; // cc_ndep
 unsigned int v49; // cc_op
 unsigned int v5; // cc_ndep
 unsigned int v50; // cc_dep1
 unsigned int v51; // cc_dep2
 unsigned int v52; // cc_ndep
 unsigned int v53; // r0
 unsigned int v54; // r0
 unsigned int v6; // cc_op
 unsigned int v55; // r1
 unsigned int v7; // cc_dep1
 unsigned int v56; // r1
 unsigned int v8; // cc_dep2
 unsigned int v61; // r2
 unsigned int v62; // r12
 unsigned int result; // r0
 unsigned int v64; // r1
 unsigned int v65; // cc_op
 unsigned int v66; // cc_dep1
 unsigned int v67; // cc_dep2
 unsigned int v68; // cc_ndep
 unsigned int v9; // cc_ndep
 unsigned int v71; // r1
 unsigned int v72; // r3
 unsigned int v73; // r1
 unsigned int v74; // r1
 unsigned int v75; // r0
 unsigned int v76; // r2
 unsigned int v77; // cc_dep1
 unsigned int v78; // cc_dep2

 v0 = 255 & a0 >> 23;
 if ((255 & a0 >> 23))
 {
 v1 = 255 & a1 >> 23;
 v6 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 5 : v2);
 v7 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 255 & a1 >> 23 : v3);
 v8 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? a1 >> 22 & 1 : v4);
 v9 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? armg_calculate_flag_v(v2, v3, v4, v5) : v5);
 if (!armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_11642;
LABEL_11641:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_11646;
LABEL_11645:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_11748;
 }
 else
 {
 v1 = a3;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_11641;
LABEL_11642:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_11645;
LABEL_11646:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11748:
 ;
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_11770;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_11770:
 ;
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_1177a;
LABEL_11779:
 ;
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_1177e;
LABEL_1177d:
 ;
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_11782;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_11779;
LABEL_1177a:
 ;
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_1177d;
LABEL_1177e:
 ;
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_11782:
 ;
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_11788:
 ;
 v96 = v0 ^ 255;
 v97 = armg_calculate_flag_c(5, v93, v94, v95);
 v98 = armg_calculate_flag_v(5, v93, v94, v95);
 v99 = v96;
 v100 = v97;
 if (!(v0 ^ 255))
 {
 v98 = armg_calculate_flag_v(5, v96, v97, v98);
 v99 = v89 * 0x200;
 v100 = v89 >> 23 & 1;
 if (v89 * 0x200)
 return v89 | 0x7f000000 | 0xc00000;
 }
 if ((v1 ^ 255))
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | 0x800000;
 v103 = a1 * 0x200;
 v104 = a1 >> 23 & 1;
 v105 = armg_calculate_flag_v(5, v1 ^ 255, armg_calculate_flag_c(5, v99, v100, v98), armg_calculate_flag_v(5, v99, v100, v98));
 if (a1 * 0x200)
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (a1 ^ a1) & 0x80000000 | 0x7f000000 | 0x800000;
 return a1 | 0x7f000000 | 0xc00000;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | 0x800000;
 return v89 | 0x7f000000 | 0xc00000;
 }
 }
 }
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_11788_end:
 ;
 return 0;
}


// Function: __aeabi_drsub at 0x117cc
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v45; // cc_op
 unsigned int v46; // cc_dep1
 unsigned int v47; // cc_dep2
 unsigned int v48; // cc_ndep
 unsigned int v49; // cc_op
 unsigned int v50; // cc_dep1
 unsigned int v51; // cc_dep2
 unsigned int v52; // cc_ndep
 unsigned int v53; // r0
 unsigned int v54; // r0
 unsigned int v55; // r1
 unsigned int v56; // r1
 unsigned int v61; // r2
 unsigned int v62; // r12
 unsigned int result; // r0
 unsigned int v64; // r1
 unsigned int v65; // cc_op
 unsigned int v66; // cc_dep1
 unsigned int v67; // cc_dep2
 unsigned int v68; // cc_ndep
 unsigned int v71; // r1
 unsigned int v72; // r3
 unsigned int v73; // r1
 unsigned int v74; // r1
 unsigned int v75; // r0
 unsigned int v76; // r2
 unsigned int v77; // cc_dep1
 unsigned int v78; // cc_dep2
 unsigned int v79; // cc_ndep
 unsigned int v80; // r0
 unsigned int v81; // r2
 unsigned int v82; // cc_op
 unsigned int v83; // cc_dep1
 unsigned int v84; // cc_dep2
 unsigned int v85; // cc_ndep
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x10]

 if (!((char)armg_calculate_condition(v45 | 16, v46, v47, v48)))
 {
 v45 = (armg_calculate_condition(21, v42, v43, v44) ? 5 : 5);
 v46 = (armg_calculate_condition(21, v42, v43, v44) ? a1 & 2147483647 : v42);
 v47 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v48 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!((char)armg_calculate_condition(v45 | 16, v46, v47, v48)))
 return (a0 ^ a1) & 0x80000000;
 }
 else
 {
 v45 = (armg_calculate_condition(21, v42, v43, v44) ? 5 : 5);
 v46 = (armg_calculate_condition(21, v42, v43, v44) ? a1 & 2147483647 : v42);
 v47 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v48 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!((char)armg_calculate_condition(v45 | 16, v46, v47, v48)))
 return (a0 ^ a1) & 0x80000000;
 }
 v49 = 5;
 v50 = v0;
 v51 = armg_calculate_flag_c(v45, v46, v47, v48);
 v52 = armg_calculate_flag_v(v45, v46, v47, v48);
 v53 = a0;
 if (armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_11715;
 else
 goto LABEL_11716;
 while (true)
 {
 v53 = v54;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_11715:
 v54 = v53 * 2;
 if (!armg_calculate_condition(v49, v50, v51, v52))
 goto LABEL_1171a;
 goto LABEL_11719;
 }
 else
 {
LABEL_11716:
 v54 = v53;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_11719:
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (!armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_1171e;
 goto LABEL_1171d;
 }
 else
 {
LABEL_1171a:
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_1171d:
 v0 -= 1;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 else
 {
LABEL_1171e:
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 }
 }
 }
 a0 = v54 | a0 & 0x80000000;
 v30 = 5;
 v31 = v1;
 v32 = armg_calculate_flag_c(v49, v50, v51, v52);
 v33 = armg_calculate_flag_v(v49, v50, v51, v52);
 v55 = a1;
 if (armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_11731;
 else
 goto LABEL_11732;
 while (true)
 {
 v55 = v56;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11731:
 v56 = v55 * 2;
 if (!armg_calculate_condition(v30, v31, v32, v33))
 goto LABEL_11736;
 goto LABEL_11735;
 }
 else
 {
LABEL_11732:
 v56 = v55;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11735:
 v30 = 5;
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_1173a;
 goto LABEL_11739;
 }
 else
 {
LABEL_11736:
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11739:
 v1 -= 1;
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 else
 {
LABEL_1173a:
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 }
 }
 }
 a1 = v56 | a1 & 0x80000000;
 }
 }
 v61 = v0 + v1;
 v62 = a0 ^ a1;
 result = a0 * 0x200;
 if (a0 * 0x200)
 {
 v64 = a1 * 0x200;
 v65 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? 5 : v30);
 v66 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 * 0x200 : v31);
 v67 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 >> 23 & 1 : v32);
 v68 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v65, v66, v67, v68))
 goto LABEL_116a4;
LABEL_11660:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < 0x800000)
 {
 v73 = v71 * 2;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_1167e;
LABEL_1167d:
 v74 = v73 | v72 >> 31;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_11682;
LABEL_11681:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_1167d;
LABEL_1167e:
 v74 = v73;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_11681;
LABEL_11682:
 }
 v75 = v62 & 0x80000000 | v74;
 v76 = v61 - 127 - (armg_calculate_flag_c(2, v71, 0x800000, 0) ^ 1);
 if (253 >= v76)
 {
 if (v72 == 0x80000000)
 return (v62 & 0x80000000 | v74) + v76 * 0x800000 + (0x80000000 <= v72) & 4294967294;
 return (v62 & 0x80000000 | v74) + v76 * 0x800000 + (0x80000000 <= v72);
 }
 else
 {
 if ((char)armg_calculate_condition(194, v76, 253, 0))
 return (v62 & 0x80000000 | v74) & 0x80000000 | 0x7f000000 | 0x800000;
 }
 }
 else
 {
 v64 = a1;
 v65 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? 5 : v30);
 v66 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 * 0x200 : v31);
 v67 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 >> 23 & 1 : v32);
 v68 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!((char)armg_calculate_condition(v65, v66, v67, v68)))
 goto LABEL_11660;
LABEL_116a4:
 v77 = result;
 v78 = armg_calculate_flag_c(v65, v66, v67, v68);
 v79 = armg_calculate_flag_v(v65, v66, v67, v68);
 if (!result)
 v64 *= 0x200;
 v80 = v62 & 0x80000000 | result >> 9 | v64 >> 9;
 v81 = v61 - 127;
 if (127 < v61)
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (!armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_116c2;
LABEL_116c1:
 v80 |= v81 * 0x800000;
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_116c8;
 return v80 | (unsigned int)v81 * 0x800000;
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_116c1;
LABEL_116c2:
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_116c8;
 return v80;
 }
LABEL_116c8:
 ;
 v75 = v80 | 0x800000;
 v72 = 0;
 v76 = v81 - 1;
 if ((char)armg_calculate_condition(194, v81, 1, 0))
 return (v80 | 0x800000) & 0x80000000 | 0x7f000000 | 0x800000;
 if (armg_calculate_condition(209, v76, 25, 0))
 {
 v75 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_116e4;
 return v75 & 0x80000000;
 }
 else
 {
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_116e4;
 return v75;
 }
LABEL_116e4:
 ;
 if (v72 || (v75 << ((char)(32 - -(v76)) & 31) & (32 - (!(v76) & 255) & 255) - 32 >> 31) * 2)
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1);
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1) & ~((v75 << ((char)(32 - -(v76)) & 31) & (32 - (-(v76) & 255) & 255) - 32 >> 31) >> 31);
LABEL_116e4_end:
 return 0;
}


/* CRT stub function __aeabi_dadd removed by preprocessor */





// Function: __aeabi_ui2d at 0x11a84
unsigned int __aeabi_ui2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11a90;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11a90;
 return a0;
 }
LABEL_11a90:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return 0;
}


// Function: __floatsidf at 0x11aa8
unsigned int __floatsidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11ab4;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11ab4;
 return a0;
 }
LABEL_11ab4:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return 0;
}


// Function: __extendsfdf2 at 0x11ad0
unsigned int __extendsfdf2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v3; // r2
 unsigned int v4; // r0
 unsigned int v13; // cc_ndep
 unsigned int v14; // cc_op
 unsigned int v15; // cc_dep1
 unsigned int v16; // cc_dep2
 unsigned int v17; // cc_ndep
 unsigned int v22; // cc_op
 unsigned int v5; // r3
 unsigned int v23; // cc_dep1
 unsigned int v24; // cc_dep2
 unsigned int v25; // cc_ndep
 unsigned int v6; // cc_op
 unsigned int v7; // cc_dep1
 unsigned int v42; // cc_dep1
 unsigned int v43; // cc_ndep
 unsigned int v44; // r5
 unsigned int v45; // r4
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 unsigned int v10; // cc_op
 unsigned int v11; // cc_dep1
 unsigned int v12; // cc_dep2
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v3 = a0 * 2;
 v4 = v3 * 0x10000000;
 if (a0 * 2)
 {
 v5 = v3 & 0xff000000;
 v10 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 5 : v6);
 v11 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v3 & 0xff000000 : v7);
 v12 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 1 : v8);
 v13 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_11ae6;
LABEL_11ae5:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_11aea;
LABEL_11ae9:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11af0;
 return v4;
 }
 else
 {
 v5 = a3;
 v10 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 5 : v14);
 v11 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? v3 & 0xff000000 : v15);
 v12 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 1 : v16);
 v13 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? armg_calculate_flag_v(v14, v15, v16, v17) : v17);
 if (armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_11ae5;
LABEL_11ae6:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_11ae9;
LABEL_11aea:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11af0;
 return v4;
 }
LABEL_11af0:
 if ((v3 & 16777215))
 goto LABEL_11af8;
 return v4;
LABEL_11af8:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11b04;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11b04;
 return v4;
 }
LABEL_11b04:
 v2 = vvar_32;
 v1 = v44;
 v0 = v45;
 return 0;
}


// Function: __floatundidf at 0x11b18
unsigned int __floatundidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v6; // r12
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_11b20;
 return a0;
LABEL_11b20:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_11b20_end;
 return 0;
LABEL_11b20_end:
 ;
 return 0;
}


// Function: __aeabi_l2d at 0x11b2c
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_11b34;
 return a0;
LABEL_11b34:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_11b34_end;
 return 0;
LABEL_11b34_end:
 ;
 return 0;
}


// Function: __aeabi_frsub at 0x11b8c
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000, 0, 0, 0, 0, 0);
 return __addsf3(a0 ^ 0x80000000, 0, 0, 0, 0, 0);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x11b98
extern char g_400000;

unsigned int __addsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int result; // r2
 unsigned int v1; // cc_op
 unsigned int v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v17; // cc_op
 unsigned int v18; // cc_dep1
 unsigned int v19; // cc_dep2
 unsigned int v2; // cc_dep1
 unsigned int v20; // cc_ndep
 unsigned int v21; // r2
 unsigned int v22; // r3
 unsigned int v23; // cc_dep1
 unsigned int v24; // r2
 unsigned int v25; // r1
 unsigned int v26; // r0
 unsigned int v27; // r1
 unsigned int v3; // cc_dep2
 unsigned int v28; // r0
 unsigned int v29; // cc_dep1
 unsigned int v30; // cc_ndep
 unsigned int v31; // r1
 unsigned int v32; // cc_dep1
 unsigned int v33; // cc_dep2
 unsigned int v34; // cc_ndep
 unsigned int v35; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v36; // cc_ndep
 unsigned int v37; // r2
 unsigned int v38; // r0
 unsigned int v39; // cc_dep2
 unsigned int v40; // r1
 unsigned int v41; // r3
 unsigned int v42; // r1
 unsigned int v43; // r0
 unsigned int v5; // cc_op
 unsigned int v46; // r0
 unsigned int v47; // r2
 unsigned int v48; // r1
 unsigned int v49; // r0
 unsigned int v51; // r1
 unsigned int v52; // r0
 unsigned int v53; // r2
 unsigned int v6; // cc_dep1
 unsigned int v54; // r0
 unsigned int v55; // r12
 unsigned int v56; // r2
 unsigned int v57; // r0
 unsigned int v58; // r0
 unsigned int v59; // r3
 unsigned int v60; // cc_op
 unsigned int v61; // cc_dep1
 unsigned int v62; // cc_dep2
 unsigned int v7; // cc_dep2
 unsigned int v63; // cc_ndep
 unsigned int v64; // cc_dep1
 unsigned int v65; // cc_dep2
 unsigned int v66; // cc_ndep
 unsigned int v67; // cc_dep1
 unsigned int v68; // cc_dep2
 unsigned int v69; // cc_ndep
 unsigned int v70; // r1
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_op

 result = a0 * 2;
 if (a0 * 2)
 {
 a3 = a1 * 2;
 v5 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? 5 : v1);
 v6 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? a1 * 2 : v2);
 v7 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? a1 >> 31 & 1 : v3);
 v8 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? armg_calculate_flag_v(v1, v2, v3, v4) : v4);
 }
 else
 {
 v5 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? 5 : v9);
 v6 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? a1 * 2 : v10);
 v7 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? a1 >> 31 & 1 : v11);
 v8 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? armg_calculate_flag_v(v9, v10, v11, v12) : v12);
 }
 v17 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)));
 v18 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? ~(a3 >> 24) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)));
 v19 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? a3 >> 23 & 1 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)));
 v20 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)));
 if ((char)armg_calculate_condition((armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? ~(a3 >> 24) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? a3 >> 23 & 1 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)))))
 {
 v59 = a1 * 2;
 if (~(result >> 24))
 {
 v60 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 5 : v17);
 v61 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? ~(v59 >> 24) : v18);
 v62 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? v59 >> 23 & 1 : v19);
 v63 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? armg_calculate_flag_v(v17, v18, v19, v20) : v20);
 if ((char)armg_calculate_condition(v60, v61, v62, v63))
 {
 v70 = ((!~(result >> 24) ? ~(v59 >> 24) : ~(result >> 24)) ? (~(result >> 24) ? a1 : a0) : a1);
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | (unsigned int)&g_400000);
 }
 }
 else
 {
 v60 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 5 : v17);
 v61 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? ~(v59 >> 24) : v18);
 v62 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? v59 >> 23 & 1 : v19);
 v63 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? armg_calculate_flag_v(v17, v18, v19, v20) : v20);
 if ((char)armg_calculate_condition(v60, v61, v62, v63))
 {
 v70 = ((!~(result >> 24) ? ~(v59 >> 24) : ~(result >> 24)) ? (~(result >> 24) ? a1 : a0) : a1);
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | (unsigned int)&g_400000);
 }
 }
 v64 = result ^ v59;
 v65 = armg_calculate_flag_c(v60, v61, v62, v63);
 v66 = armg_calculate_flag_v(v60, v61, v62, v63);
 if ((result ^ v59))
 {
 if (!result)
 return a1;
 return a0;
 }
 v67 = a0 ^ a1;
 v68 = armg_calculate_flag_c(5, v64, v65, v66);
 v69 = armg_calculate_flag_v(5, v64, v65, v66);
 if ((a0 ^ a1))
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_11cd4;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_11cd4;
 return a0;
 }
LABEL_11cd4:
 if (!(result & 0xff000000))
 {
 if (armg_calculate_condition(37, a0 * 2, a0 >> 31 & 1, armg_calculate_flag_v(5, result & 0xff000000, 1, armg_calculate_flag_v(5, v67, v68, v69))))
 return a0 * 2 | 0x80000000;
 return a0 * 2;
 }
 if (armg_calculate_condition(49, result, 0x2000000, 0))
 {
 a0 += 0x800000;
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_11cf4;
 return a0 + 0x800000;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_11cf4;
 return a0;
 }
LABEL_11cf4:
 v41 = a0 & 0x80000000;
LABEL_11cf8:
 v54 = v41 | 0x7f000000 | 0x800000;
 v38 = 0;
 goto LABEL_11cf8_end;
 v21 = result >> 24;
 v22 = (a3 >> 24) - v21;
 v23 = a3 >> 24;
 if (v21 < a3 >> 24)
 {
 v24 = v21 + v22;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11bbe;
LABEL_11bbd:
 v25 = a0 ^ a1;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11bc2;
LABEL_11bc1:
 v26 = v25 ^ a0;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11bc6;
LABEL_11bc5:
 v27 = v26 ^ v25;
 if (!armg_calculate_condition(178, v23, v21, 0))
 goto LABEL_11bca;
 goto LABEL_11bc9;
 }
 else
 {
 v24 = v21;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11bbd;
LABEL_11bbe:
 v25 = a1;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11bc1;
LABEL_11bc2:
 v26 = a0;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11bc5;
LABEL_11bc6:
 v27 = v25;
 if (armg_calculate_condition(178, v23, v21, 0))
 {
LABEL_11bc9:
 v22 = -(v22);
 }
 else
 {
LABEL_11bca:
 }
 }
 if (25 >= v22)
 goto LABEL_11bd4;
 return v26;
LABEL_11bd4:
 v28 = (v26 | 0x800000) & 16777215;
 if ((v26 & 0x80000000))
 v28 = -(v28);
 v29 = v27 & 0x80000000;
 v30 = armg_calculate_flag_v(5, v26 & 0x80000000, 1, armg_calculate_flag_v(2, v22, 25, 0));
 v31 = (v27 | 0x800000) & 16777215;
 if ((v27 & 0x80000000))
 v31 = -(v31);
 v32 = v24 ^ v22;
 v33 = armg_calculate_flag_c(5, v29, 1, v30);
 v34 = armg_calculate_flag_v(5, v29, 1, v30);
 if (!(v24 ^ v22))
 {
 v35 = armg_calculate_flag_c(5, v32, v33, v34);
 v36 = armg_calculate_flag_v(5, v32, v33, v34);
 v31 ^= 0x800000;
 if (!v24)
 {
 v28 ^= 0x800000;
 if (!armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_11c9a;
LABEL_11c99:
 v24 += 1;
 if (!armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_11c9e;
LABEL_11c9d:
 v22 -= 1;
 }
 else
 {
 v28 = v28;
 if (armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_11c99;
LABEL_11c9a:
 if (armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_11c9d;
LABEL_11c9e:
 }
 }
 v37 = v24 - 1;
 if ((v22 & 255) < 32)
 {
 v38 = v28 + (v31 >> (char)v22);
 v39 = v31 >> (char)v22;
 }
 else
 {
 v38 = v28 + (v31 >> 31);
 v39 = v31 >> 31;
 }
 v40 = v31 << ((char)(32 - v22) & 31) & (32 - v22 & 255) - 32 >> 31;
 v41 = v38 & 0x80000000;
 v42 = v40;
 v43 = v38;
 if (!((char)armg_calculate_condition(81, v28, v39, 0)))
 {
 v42 = -(v40);
 v43 = -(v38) - (v40 > 0);
 }
 v46 = v43;
 if (v46 >= 0x800000)
 {
 v47 = v37;
 v48 = v42;
 v49 = v46;
 if (v49 >= 0x1000000 && (v48 = (v46 & 1) * 0x80000000 | v42 >> 1, v47 = v37 + 1, v49 = v46 >> 1, 254 <= v47))
 goto LABEL_11cf8;
 }
 else
 {
 v51 = v42 * 2;
 v52 = v46 * 2 + (v42 >> 31 & 1);
 v53 = v37 - 1;
 if (1 <= v37)
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, 0x800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0x800000 : 0x800000), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0 : 0))))
 goto LABEL_11c68;
 }
 else
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, 0x800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0x800000 : 0x800000), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0 : 0))))
 {
LABEL_11c68:
 v55 = (!v52 ? 32 : Clz(v52)) - 8;
 v56 = v53 - v55;
 if (v55 <= v53)
 {
 v58 = v57 + v56 * 0x800000;
 if (!armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_11c7e;
LABEL_11c7d:
 v56 = -(v56);
 }
 else
 {
 v57 = v52 << ((char)v55 & 31) & (v55 & 255) - 32 >> 31;
 if (armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_11c7d;
LABEL_11c7e:
 }
 return (armg_calculate_condition(178, v53, v55, 0) ? (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) : v38 & 0x80000000 | (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) >> ((char)v56 & 31) & (v56 & 255) - 32 >> 31);
 }
 }
 }
 v54 = v49 + v47 * 0x800000 + (0x80000000 <= v48);
 if (v48 == 0x80000000)
 v54 &= 4294967294;
LABEL_11cf8_end:
 return v54 | v38 & 0x80000000;
}


// Function: __aeabi_ui2f at 0x11d28
unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_11d40;
 return a0;
LABEL_11d40:
 v0 = (!a0 ? 32 : Clz(a0));
 v1 = v0 - 8;
 v2 = 0x4a800000 - v1 * 0x800000;
 if (v0 >= 8)
 {
 if ((0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) == 0x80000000)
 return v2 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) + (0 >> ((char)(32 - v1) & 31) & (32 - v1 & 255) - 32 >> 31) + (0x80000000 <= (0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31)) & 4294967294;
 return v2 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) + (0 >> ((char)(32 - v1) & 31) & (32 - v1 & 255) - 32 >> 31) + (0x80000000 <= (0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31));
 }
 else
 {
 if (!(a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) * 2)
 return v2 + (a0 >> ((char)(32 - ((char)v1 + 32)) & 31) & (32 - ((char)v1 + 32) & 255) - 32 >> 31) + ((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31 & 1) & ~((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31);
 return v2 + (a0 >> ((char)(32 - ((char)v1 + 32)) & 31) & (32 - ((char)v1 + 32) & 255) - 32 >> 31) + ((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31 & 1);
 }
}


// Function: __floatsisf at 0x11d30
unsigned int __floatsisf(unsigned int a0)
{
 return 0;
}


// Function: __floatundisf at 0x11d50
unsigned int __floatundisf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // cc_dep1
 unsigned int v1; // cc_op
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep

 v0 = a0 | a1;
 v5 = armg_calculate_flag_c(v1, v2, v3, v4);
 v6 = armg_calculate_flag_v(v1, v2, v3, v4);
 if (a0 || a1)
 goto LABEL_11d58;
 return a0;
LABEL_11d58:
 v7 = armg_calculate_flag_c(5, v0, v5, v6);
 v8 = armg_calculate_flag_v(5, v0, v5, v6);
 if (!a1)
 {
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11d82;
LABEL_11d81:
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11d86;
LABEL_11d85:
 ;
 }
 else
 {
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11d81;
LABEL_11d82:
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11d85;
LABEL_11d86:
 return 0;
}
 return 0;
}


// Function: __aeabi_l2f at 0x11d60
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 if (a0 || a1)
 goto LABEL_11d68;
 return a0;
LABEL_11d68:
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_11d78;
 return 0;
LABEL_11d78:
 return 0;
}


// Function: __fixsfsi at 0x11ddc
unsigned int __fixsfsi(unsigned int a0)
{
 unsigned int v0; // r2

 v0 = a0 * 2;
 if (v0 < 0x7f000000)
 {
 return 0;
 }
 else if (158 <= v0 >> 24)
 {
 if (158 - (v0 >> 24) == 4294967199 && a0 * 0x200)
 return 0;
 if ((a0 & 0x80000000))
 return a0 & 0x80000000;
 return 2147483647;
 }
 else if ((a0 & 0x80000000))
 {
 return -((a0 * 0x100 | 0x80000000) >> ((char)(158 - (v0 >> 24)) & 31) & (158 - (v0 >> 24) & 255) - 32 >> 31);
 }
 else
 {
 return (a0 * 0x100 | 0x80000000) >> ((char)(158 - (v0 >> 24)) & 31) & (158 - (v0 >> 24) & 255) - 32 >> 31;
 }
}


/* CRT stub function _fini removed by preprocessor */

// End of file
