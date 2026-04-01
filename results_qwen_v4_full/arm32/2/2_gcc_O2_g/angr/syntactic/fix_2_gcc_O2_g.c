// Angr Decompilation of 2_gcc_O2_g
// Platform: ARMEL

#include <stddef.h>
#include <stdbool.h>

// Forward declarations
unsigned int test_composite_types(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);


/* CRT stub function _init removed by preprocessor */



// Function: sub_103a0 at 0x103a0
extern unsigned int g_23008;

int sub_103a0()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}


// Function: main at 0x103fc
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



// Function: sub_10450 at 0x10450
void sub_10450()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: process_char at 0x10510
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


// Function: process_short at 0x10524
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return a0 + a1 & 65535;
}


// Function: process_int at 0x10534
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: process_long at 0x10540
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x10548
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x1055c
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


// Function: process_double at 0x10574
void process_double()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = __muldf3();
 __aeabi_dadd(v2, v3, 2576980378, 1069128089, *((int *)&v0), *((int *)&v1));
 return;
}


// Function: process_ld at 0x105a0
void process_ld(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = __muldf3();
 __aeabi_dadd(v2, a1, 0, 0x3ff00000, *((int *)&v0), *((int *)&v1));
 return;
}


// Function: process_bool at 0x105c4
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // r0

 if (0 < a0)
 {
 v0 = a0 & 1;
 if (!armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_105ce;
LABEL_105cd:
 if (!armg_calculate_condition(210, a0, 0, 0))
 return v0 ^ 1;
 return 0;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_105cd;
LABEL_105ce:
 if (!armg_calculate_condition(210, a0, 0, 0))
 return v0;
 return 0;
 }
 return 0;
}


// Function: const_param at 0x105d8
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x105e4
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x105f4
extern char g_12044;

int test_data_types_l1()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0xc]

 puts(&g_12044);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 0);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 3435973837);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 v1 = __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v0 * 2);
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: array_1d_stack at 0x10758
unsigned int array_1d_stack(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int *v1; // r3
 unsigned int *i; // r3
 unsigned int v3; // r0
 unsigned int *ptr; // r3
 unsigned int *v5; // r3
 unsigned int v6; // r0

 v0 = 0;
 if (a1 > 0)
 goto LABEL_10768;
 return 0;
LABEL_10768:
 v1 = a0 + 1;
 i = v1;
 ptr = a0;
 do
 {
 v3 = v0;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v0 = v6;
 } while (i != &v1[a1]);
 return v3 + ptr[1];
}


// Function: array_string at 0x10784
char array_string(char *ptr)
{
 char result; // r0
 char *v1; // r3
 char *v2; // r3
 char *v3; // r3

 result = *(ptr);
 if (result)
 goto LABEL_10794;
 return result;
LABEL_10794:
 v1 = ptr;
 v2 = ptr;
 do
 {
 v3 = &v1[1];
 v1 = v3;
 } while (v2[1]);
 return (char)(v2 - ptr + 1);
}


// Function: array_2d_stack at 0x107ac
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


// Function: array_3d at 0x107d0
unsigned int array_3d(unsigned int *a0)
{
 unsigned int v0; // r3
 unsigned int *ptr; // r2
 unsigned int *i; // r2
 unsigned int vvar_26; // r64
 unsigned int vvar_3; // r64
 unsigned int vvar_44; // r64

 v0 = 0;
 vvar_26 = (unsigned int)(a0 + 25);
 vvar_3 = (unsigned int)a0;
 do
 {
 ptr = (unsigned int *)(vvar_3 - 100);
 do
 {
 i = ptr + 1;
 v0 = v0 + ptr[0] + ptr[1] + ptr[2] + ptr[3] + ptr[4];
 ptr = i;
 } while (ptr != (unsigned int *)vvar_3);
 vvar_44 = (unsigned int)(i + 5);
 vvar_3 = vvar_44;
 } while (i != a0 + 150);
 return v0;
}


// Function: array_vla at 0x10824
unsigned int array_vla(unsigned int a0, unsigned int *a1)
{
 unsigned int v0; // r0
 unsigned int *v1; // r1
 unsigned int *i; // r1
 unsigned int *ptr; // r1
 unsigned int v4; // r0
 unsigned int *v5; // r1
 unsigned int v6; // r0

 v0 = 0;
 if (a0 > 0)
 goto LABEL_10830;
 return 0;
LABEL_10830:
 v1 = a1 + 1;
 i = v1;
 ptr = a1;
 do
 {
 v4 = v0;
 v5 = i + 1;
 v6 = v4 + i[1];
 v0 = v6;
 i = v5;
 } while (i != &v1[a0]);
 return v4 + ptr[1];
}


// Function: array_pointer at 0x1084c
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int i; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int idx; // r3
 unsigned int v4; // r3
 unsigned int v5; // r0

 if (a1 <= 0)
 return 0;
 i = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 idx = i;
 v4 = idx + 10;
 v5 = v2 + *((int *)(ptr + idx * 4));
 i = v4;
 v1 = v5;
 } while (a1 * 10 != i);
 return v2 + *((int *)(ptr + idx * 4));
}


// Function: pointer_array at 0x10888
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int pointer_array(struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // r12
 unsigned int v1; // r12
 unsigned int v2; // r12
 unsigned int v3; // r3
 struct_0 **v4; // r1
 unsigned int v5; // r0
 struct_0 **idx; // r1
 struct_0 **v7; // r1

 if (a1 < 10)
 {
 v0 = a1;
 if (!armg_calculate_condition(162, v0, 10, 0))
 {
 v2 = 10;
 }
 else
 {
 v2 = v0;
 }
 }
 else
 {
 v0 = v1;
 if (armg_calculate_condition(162, a1, 10, 0))
 {
 v2 = 10;
 }
 else
 {
 v2 = v0;
 }
 }
 if (a1 <= 0)
 return 0;
 v3 = 0;
 v4 = a0 + 1;
 v5 = 0;
 do
 {
 idx = v4;
 v7 = idx + 1;
 v3 += 1;
 if (idx[1])
 v5 += idx[1]->field_0;
 } while ((v4 = v7, v3 < v2));
 return v5;
}


// Function: array_complex_index at 0x108d0
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v1; // r12
 unsigned int vvar_22; // r64
 unsigned int vvar_24; // r64
 unsigned int vvar_5; // r64
 char v0; // [bp+0x0]

 if (a3 < a1)
 {
 vvar_22 = 0;
 if (!armg_calculate_condition(162, a3, a1, 0))
 goto LABEL_108de;
LABEL_108dd:
 vvar_24 = 1;
 }
 else
 {
 if (armg_calculate_condition(162, a3, a1, 0))
 goto LABEL_108dd;
LABEL_108de:
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


// Function: array_oob at 0x1090c
unsigned int array_oob(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int *i; // r3
 unsigned int *ptr; // r3
 unsigned int v3; // r0
 unsigned int *v4; // r3
 unsigned int v5; // r0

 v0 = 0;
 if (a1 >= 0)
 goto LABEL_1091c;
 return 0;
LABEL_1091c:
 i = a0 + 1;
 ptr = a0;
 do
 {
 v3 = v0;
 v4 = i + 1;
 v5 = v3 + i[1];
 v0 = v5;
 i = v4;
 } while (i != &a0[a1]);
 return v3 + ptr[1];
}


// Function: test_array_types at 0x10938
typedef struct struct_1 {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_1;

typedef struct struct_0_test_array {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_0_test_array;

extern unsigned int __glibc___stack_chk_guard;
extern char g_121c4;

int test_array_types()
{
 unsigned int v13; // r12
 char *addr; // r3
 unsigned int v23; // r3
 struct_1 *ptr5; // r1
 struct_1 *v25; // r1
 unsigned int v26; // r2
 char *ptr3; // r3
 char *v28; // r3
 unsigned int *l; // r0
 unsigned int flag1; // r2
 unsigned int *ptr; // r3
 unsigned int v32; // r2
 char *v15; // r3
 unsigned int *p; // r3
 unsigned int *v35; // r3
 unsigned int m; // r3
 struct_0 *ptr4; // r2
 struct_0 *v38; // r2
 unsigned int v39; // r0
 char *v16; // r3
 unsigned int v17; // r2
 unsigned int v19; // r0
 unsigned int j; // r2
 struct_1 *v21; // r12
 struct_1 *v22; // r1
 unsigned int result; // [bp-0x404]
 unsigned int v1; // [bp-0x400]
 unsigned int v2; // [bp-0x3fc]
 unsigned int v3; // [bp-0x3f8]
 unsigned int v4; // [bp-0x3f4]
 unsigned long v40; // [bp-0x3f0]
 char v5; // [bp-0x3ac]
 char v6; // [bp-0x3a4]
 char v7; // [bp-0x3a0]
 char v8[40]; // [bp-0x210]
 unsigned long v41; // [bp-0x1e8]
 char v9; // [bp-0x1ac]
 char v10[40]; // [bp-0x1c]
 char v12; // [bp+0x48]
 unsigned int vvar_193; // r64|4b
 unsigned int vvar_45; // r64|4b
 unsigned int vvar_211; // r64|4b

 *((unsigned int *)&v10[8]) = __glibc___stack_chk_guard;
 puts(0x121c4);
 v13 = 0;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 addr = (char*)&result;
 v4 = 5;
 do
 {
 v15 = addr + 1;
 v13 += *(addr);
 addr = v15;
 } while ((char*)&v40 != addr);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v13);
 v16 = v10;
 v17 = 0;
 strncpy(v10, "hello", 5);
 ptr3 = v10;
 do
 {
 v17 += 1;
 v16 = v16 + 1;
 } while (v16[1]);
 v19 = __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v17);
 j = 0;
 v21 = (struct_1*)&v6;
 do
 {
 v22 = v21;
 v23 = 0;
 do
 {
 ptr5 = v22;
 if (v23 == j)
 {
 v19 = j;
 if (!armg_calculate_condition(18, v23, j, 0))
 goto LABEL_109f2;
 goto LABEL_109f1;
 }
 else if (armg_calculate_condition(18, v23, j, 0))
 {
LABEL_109f1:
 v19 = 0;
 }
else
{
LABEL_109f2:
;
}
 } while ((v23 += 1, v25 = ptr5 + 4, ptr5->field_4 = v19, v22 = ptr5 + 4, v23 != 10));
 j += 1;
 v21 = (struct_1*)((char*)v21 + 5);
 } while (j != 10);
 v26 = 0;
 ptr3 = &v7;
 v15 = v10;
 do
 {
 v28 = ptr3 + 11;
 v26 += *(ptr3);
 ptr3 = v28;
 } while (ptr3 != (char*)&v41);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v26);
 l = (unsigned int*)&v8;
 p = l;
 do
 {
 flag1 = 5;
 ptr = l;
 do
 {
 v32 = flag1 - 1;
 ptr[0] = 1;
 ptr[1] = 1;
 ptr[2] = 1;
 ptr[3] = 1;
 ptr[4] = 1;
 ptr += 1;
 flag1 = v32;
 } while (flag1 != 1);
 l += 5;
 } while (l != (unsigned int*)&v10);
 vvar_193 = (unsigned int)&v9;
 vvar_45 = vvar_193;
 do
 {
 p = (unsigned int *)(vvar_45 - 100);
 do
 {
 v35 = p + 1;
 v32 = v32 + p[0] + p[1] + p[2] + p[3] + p[4];
 p = v35;
 } while (vvar_45 != (unsigned int)p);
 vvar_211 = vvar_45 + 100;
 } while (vvar_45 != (unsigned int)&v12);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v32);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 m = 0;
 ptr4 = &v4;
 do
 {
 v38 = &ptr4->field_4;
 ptr4->field_4 = m;
 m += 1;
 ptr4 = v38;
 } while (m != 20);
 if ((*((unsigned int *)&v10[8]) ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v39 = __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v5));
 return __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v5));
}


// Function: ptr_single at 0x10b78
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x10b84
typedef struct struct_0_ptr_double {
 unsigned int field_0;
} struct_0_ptr_double;

int ptr_double(struct_0_ptr_double **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x10b94
typedef struct struct_1_ptr_triple {
 struct struct_0_ptr_double *field_0;
} struct_1_ptr_triple;

int ptr_triple(struct_1_ptr_triple **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x10ba8
unsigned int ptr_increment(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int *ptr; // r2
 unsigned int *v4; // r2
 unsigned int v5; // r0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v2 = v1;
 v4 = a0 + 1;
 v0 += 1;
 v5 = v2 + *(a0);
 a0 = v4;
 v1 = v5;
 } while (i != v0);
 return v2 + *(ptr);
}


// Function: ptr_offset at 0x10bdc
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x10be4
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x10bf0
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


// Function: ptr_const at 0x10c10
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x10c1c
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x10c30
int ptr_func_simple(unsigned int a0, unsigned int a1)
{
 return a0;
}


// Function: ptr_func_complex at 0x10c3c
extern unsigned int __glibc___stack_chk_guard;

unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x14]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 result = 0;
 v0 = (unsigned int)"test";
 v3 = *a0;
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v3;
}


// Function: ptr_cast at 0x10ca4
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x10cac
int opaque_handle_create()
{
 unsigned int v0; // r0

 return v0;
}


// Function: opaque_handle_op at 0x10cb0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x10cb8
extern unsigned int __glibc___stack_chk_guard;
extern char g_122f0;

int test_pointer_types()
{
 char *ptr; // r12
 char *v7; // r12
 unsigned int v8; // r0
 char v0; // [bp-0x28], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]
 unsigned int vvar_37; // r64|4b
 unsigned int vvar_54; // r64|4b

 v5 = __glibc___stack_chk_guard;
 puts(0x122f0);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 vvar_37 = 0;
 ptr = &v0;
 v0 = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 do
 {
 v7 = ptr + 1;
 vvar_54 = vvar_37 + *(ptr);
 ptr = v7;
 } while (ptr != (char*)&v5);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", vvar_54);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v8 = __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: struct_simple at 0x10e54
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x10e6c
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int *v1; // r3
 unsigned int v2; // r0
 unsigned int v3; // lr
 unsigned int *ptr; // r3
 unsigned int v5; // r0
 unsigned int *v6; // r3
 unsigned int v7; // r2
 unsigned int v8; // r0
 unsigned int v0; // [bp-0x4]

 if (a1 <= 0)
 return 0;
 v1 = a0;
 v2 = 0;
 v0 = v3;
 ptr = v1;
 do
 {
 v5 = v2;
 v6 = ptr + 1;
 v8 = v5 + ptr[0] + ptr[1] + ptr[2];
 ptr = v6;
 v2 = v8;
 } while (&v1[a1] != ptr);
 return v5 + v7;
}


// Function: struct_nested at 0x10eb4
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x10ec4
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x10ed4
typedef struct struct_0_with_ptr {
 unsigned int field_0;
 struct struct_1_with_ptr *field_4;
} struct_0_with_ptr;

typedef struct struct_1_with_ptr {
 unsigned int field_0;
} struct_1_with_ptr;

int struct_with_ptr(struct_0_with_ptr *a0)
{
 if (!a0->field_4)
 return a0->field_0;
 return a0->field_0 + a0->field_4->field_0;
}


// Function: struct_bitfields at 0x10ee8
int struct_bitfields(void* ptr)
{
 unsigned int v0; // r2

 v0 = *((char *)ptr);
 return (v0 & 1) + (v0 * 0x20000000 >> 30) + (v0 * 0x4000000 >> 29) + (*((short *)ptr) >> 6);
}


// Function: union_type at 0x10f0c
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
 else if (a1 != 1)
 {
 return *((char *)a0);
 }
 else
 {
 v1 = v2;
 v0 = v3;
 v4 = __fixsfsi(*((int *)a0));
 return __fixsfsi(*((int *)a0));
 }
 return 0;
}


// Function: union_array at 0x10f3c
unsigned int union_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int *v1; // r3
 unsigned int *i; // r3
 unsigned int v3; // r0
 unsigned int *ptr; // r3
 unsigned int *v5; // r3
 unsigned int v6; // r0

 v0 = 0;
 if (a1 > 0)
 goto LABEL_10f4c;
 return 0;
LABEL_10f4c:
 v1 = a0 + 1;
 i = v1;
 ptr = a0;
 do
 {
 v3 = v0;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v0 = v6;
 } while (i != &v1[a1]);
 return v3 + ptr[1];
}


// Function: enum_type at 0x10f68
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x10f74
typedef struct struct_0_enum_switch {
 char padding_0[20];
 unsigned int field_14;
} struct_0_enum_switch;

extern struct_0_enum_switch g_1269c;

unsigned int enum_switch(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 struct_0_enum_switch *v0; // r3

 v0 = (struct_0_enum_switch*)75420;
 if (a0 <= 3)
 v0 = (struct_0_enum_switch*)(75420 + a0 * 4);
 if (!armg_calculate_condition(130, a0, 3, 0))
 return v0->field_14;
 return 4294967197;
}


// Function: struct_func_ptr at 0x10f90
typedef struct struct_0_func_ptr {
 char padding_0[4];
 unsigned int field_4;
} struct_0_func_ptr;

int struct_func_ptr(struct_0_func_ptr *a0)
{
 goto *(unsigned int*)a0->field_4;
}


// Function: linked_list at 0x10f98
typedef struct struct_0_linked_list {
 unsigned int field_0;
 struct struct_0_linked_list *field_4;
} struct_0_linked_list;

struct_0_linked_list * linked_list(struct_0_linked_list *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_0_linked_list *ptr; // r3
 struct_0_linked_list *v3; // r3
 unsigned int v4; // r0

 if (!a0)
 return a0;
 v0 = 0;
 do
 {
 v1 = v0;
 ptr = a0;
 v3 = ptr->field_4;
 v4 = v1 + ptr->field_0;
 a0 = v3;
 v0 = v4;
 } while (ptr->field_4);
 return v1 + ptr->field_0;
}


// Function: doubly_linked_list at 0x10fc0
typedef struct struct_0_doubly_linked {
 unsigned int field_0;
 struct struct_0_doubly_linked *field_4;
} struct_0_doubly_linked;

struct_0_doubly_linked * doubly_linked_list(struct_0_doubly_linked *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_0_doubly_linked *ptr; // r3
 struct_0_doubly_linked *v3; // r3
 unsigned int v4; // r0

 if (!a0)
 return a0;
 v0 = 0;
 do
 {
 v1 = v0;
 ptr = a0;
 v3 = ptr->field_4;
 v4 = v1 + ptr->field_0;
 a0 = v3;
 v0 = v4;
 } while (ptr->field_4);
 return v1 + ptr->field_0;
}


// Function: binary_tree_sum at 0x10fe8
typedef struct struct_13_bt {
 struct struct_9_bt *field_0;
 struct struct_12_bt *field_4;
 struct struct_13_bt *field_8;
} struct_13_bt;

typedef struct struct_4_bt {
 unsigned int field_0;
 struct struct_3_bt *field_4;
 struct struct_4_bt *field_8;
} struct_4_bt;

typedef struct struct_12_bt {
 struct struct_9_bt *field_0;
 struct struct_11_bt *field_4;
 struct struct_12_bt *field_8;
} struct_12_bt;

typedef struct struct_9_bt {
 unsigned int field_0;
 struct struct_8_bt *field_4;
 struct struct_9_bt *field_8;
} struct_9_bt;

typedef struct struct_11_bt {
 struct struct_9_bt *field_0;
 struct struct_10_bt *field_4;
 struct struct_11_bt *field_8;
} struct_11_bt;

typedef struct struct_10_bt {
 struct struct_9_bt *field_0;
 struct struct_9_bt *field_4;
 struct struct_10_bt *field_8;
} struct_10_bt;

typedef struct struct_50_bt {
 unsigned int field_0;
 struct struct_49_bt *field_4;
 struct struct_50_bt *field_8;
} struct_50_bt;

typedef struct struct_46_bt {
 unsigned int field_0;
 struct struct_45_bt *field_4;
 struct struct_46_bt *field_8;
} struct_46_bt;

typedef struct struct_43_bt {
 unsigned int field_0;
 struct struct_42_bt *field_4;
 struct struct_43_bt *field_8;
} struct_43_bt;

typedef struct struct_51_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_51_bt *field_8;
} struct_51_bt;

typedef struct struct_41_bt {
 struct struct_35_bt *field_0;
 struct struct_40_bt *field_4;
 struct struct_41_bt *field_8;
} struct_41_bt;

typedef struct struct_30_bt {
 struct struct_18_bt *field_0;
 struct struct_29_bt *field_4;
 struct struct_30_bt *field_8;
} struct_30_bt;

typedef struct struct_74_bt {
 struct struct_56_bt *field_0;
 struct struct_73_bt *field_4;
 struct struct_74_bt *field_8;
} struct_74_bt;

typedef struct struct_3_bt {
 unsigned int field_0;
 struct struct_2_bt *field_4;
 struct struct_3_bt *field_8;
} struct_3_bt;

typedef struct struct_8_bt {
 unsigned int field_0;
 struct struct_7_bt *field_4;
 struct struct_8_bt *field_8;
} struct_8_bt;

typedef struct struct_49_bt {
 unsigned int field_0;
 struct struct_48_bt *field_4;
 struct struct_49_bt *field_8;
} struct_49_bt;

typedef struct struct_45_bt {
 unsigned int field_0;
 struct struct_44_bt *field_4;
 struct struct_45_bt *field_8;
} struct_45_bt;

typedef struct struct_42_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_42_bt *field_8;
} struct_42_bt;

typedef struct struct_35_bt {
 unsigned int field_0;
 struct struct_34_bt *field_4;
 struct struct_35_bt *field_8;
} struct_35_bt;

typedef struct struct_40_bt {
 unsigned int field_0;
 struct struct_39_bt *field_4;
 struct struct_40_bt *field_8;
} struct_40_bt;

typedef struct struct_18_bt {
 unsigned int field_0;
 struct struct_17_bt *field_4;
 struct struct_18_bt *field_8;
} struct_18_bt;

typedef struct struct_29_bt {
 struct struct_23_bt *field_0;
 struct struct_28_bt *field_4;
 struct struct_29_bt *field_8;
} struct_29_bt;

typedef struct struct_56_bt {
 unsigned int field_0;
 struct struct_55_bt *field_4;
 struct struct_56_bt *field_8;
} struct_56_bt;

typedef struct struct_73_bt {
 struct struct_61_bt *field_0;
 struct struct_72_bt *field_4;
 struct struct_73_bt *field_8;
} struct_73_bt;

typedef struct struct_2_bt {
 unsigned int field_0;
 struct struct_1_bt *field_4;
 struct struct_2_bt *field_8;
} struct_2_bt;

typedef struct struct_7_bt {
 unsigned int field_0;
 struct struct_6_bt *field_4;
 struct struct_7_bt *field_8;
} struct_7_bt;

typedef struct struct_48_bt {
 unsigned int field_0;
 struct struct_47_bt *field_4;
 struct struct_48_bt *field_8;
} struct_48_bt;

typedef struct struct_44_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_44_bt *field_8;
} struct_44_bt;

typedef struct struct_34_bt {
 unsigned int field_0;
 struct struct_33_bt *field_4;
 struct struct_34_bt *field_8;
} struct_34_bt;

typedef struct struct_39_bt {
 unsigned int field_0;
 struct struct_38_bt *field_4;
 struct struct_39_bt *field_8;
} struct_39_bt;

typedef struct struct_17_bt {
 unsigned int field_0;
 struct struct_16_bt *field_4;
 struct struct_17_bt *field_8;
} struct_17_bt;

typedef struct struct_23_bt {
 unsigned int field_0;
 struct struct_22_bt *field_4;
 struct struct_23_bt *field_8;
} struct_23_bt;

typedef struct struct_28_bt {
 unsigned int field_0;
 struct struct_27_bt *field_4;
 struct struct_28_bt *field_8;
} struct_28_bt;

typedef struct struct_55_bt {
 unsigned int field_0;
 struct struct_54_bt *field_4;
 struct struct_55_bt *field_8;
} struct_55_bt;

typedef struct struct_61_bt {
 unsigned int field_0;
 struct struct_60_bt *field_4;
 struct struct_61_bt *field_8;
} struct_61_bt;

typedef struct struct_72_bt {
 struct struct_66_bt *field_0;
 struct struct_71_bt *field_4;
 struct struct_72_bt *field_8;
} struct_72_bt;

typedef struct struct_1_bt {
 unsigned int field_0;
 struct struct_0_bt *field_4;
 struct struct_1_bt *field_8;
} struct_1_bt;

typedef struct struct_6_bt {
 unsigned int field_0;
 struct struct_5_bt *field_4;
 struct struct_6_bt *field_8;
} struct_6_bt;

typedef struct struct_47_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_47_bt *field_8;
} struct_47_bt;

typedef struct struct_33_bt {
 unsigned int field_0;
 struct struct_32_bt *field_4;
 struct struct_33_bt *field_8;
} struct_33_bt;

typedef struct struct_38_bt {
 unsigned int field_0;
 struct struct_37_bt *field_4;
 struct struct_38_bt *field_8;
} struct_38_bt;

typedef struct struct_16_bt {
 unsigned int field_0;
 struct struct_15_bt *field_4;
 struct struct_16_bt *field_8;
} struct_16_bt;

typedef struct struct_22_bt {
 unsigned int field_0;
 struct struct_21_bt *field_4;
 struct struct_22_bt *field_8;
} struct_22_bt;

typedef struct struct_27_bt {
 unsigned int field_0;
 struct struct_26_bt *field_4;
 struct struct_27_bt *field_8;
} struct_27_bt;

typedef struct struct_54_bt {
 unsigned int field_0;
 struct struct_53_bt *field_4;
 struct struct_54_bt *field_8;
} struct_54_bt;

typedef struct struct_60_bt {
 unsigned int field_0;
 struct struct_59_bt *field_4;
 struct struct_60_bt *field_8;
} struct_60_bt;

typedef struct struct_66_bt {
 unsigned int field_0;
 struct struct_65_bt *field_4;
 struct struct_66_bt *field_8;
} struct_66_bt;

typedef struct struct_71_bt {
 unsigned int field_0;
 struct struct_70_bt *field_4;
 struct struct_71_bt *field_8;
} struct_71_bt;

typedef struct struct_0_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_0_bt *field_8;
} struct_0_bt;

typedef struct struct_5_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_5_bt *field_8;
} struct_5_bt;

typedef struct struct_32_bt {
 unsigned int field_0;
 struct struct_31_bt *field_4;
 struct struct_32_bt *field_8;
} struct_32_bt;

typedef struct struct_37_bt {
 unsigned int field_0;
 struct struct_36_bt *field_4;
 struct struct_37_bt *field_8;
} struct_37_bt;

typedef struct struct_15_bt {
 unsigned int field_0;
 struct struct_14_bt *field_4;
 struct struct_15_bt *field_8;
} struct_15_bt;

typedef struct struct_21_bt {
 unsigned int field_0;
 struct struct_20_bt *field_4;
 struct struct_21_bt *field_8;
} struct_21_bt;

typedef struct struct_26_bt {
 unsigned int field_0;
 struct struct_25_bt *field_4;
 struct struct_26_bt *field_8;
} struct_26_bt;

typedef struct struct_53_bt {
 unsigned int field_0;
 struct struct_52_bt *field_4;
 struct struct_53_bt *field_8;
} struct_53_bt;

typedef struct struct_59_bt {
 unsigned int field_0;
 struct struct_58_bt *field_4;
 struct struct_59_bt *field_8;
} struct_59_bt;

typedef struct struct_65_bt {
 unsigned int field_0;
 struct struct_64_bt *field_4;
 struct struct_65_bt *field_8;
} struct_65_bt;

typedef struct struct_70_bt {
 unsigned int field_0;
 struct struct_69_bt *field_4;
 struct struct_70_bt *field_8;
} struct_70_bt;

typedef struct struct_31_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_31_bt *field_8;
} struct_31_bt;

typedef struct struct_36_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_36_bt *field_8;
} struct_36_bt;

typedef struct struct_14_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_14_bt *field_8;
} struct_14_bt;

typedef struct struct_20_bt {
 unsigned int field_0;
 struct struct_19_bt *field_4;
 struct struct_20_bt *field_8;
} struct_20_bt;

typedef struct struct_25_bt {
 unsigned int field_0;
 struct struct_24_bt *field_4;
 struct struct_25_bt *field_8;
} struct_25_bt;

typedef struct struct_52_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_52_bt *field_8;
} struct_52_bt;

typedef struct struct_58_bt {
 unsigned int field_0;
 struct struct_57_bt *field_4;
 struct struct_58_bt *field_8;
} struct_58_bt;

typedef struct struct_64_bt {
 unsigned int field_0;
 struct struct_63_bt *field_4;
 struct struct_64_bt *field_8;
} struct_64_bt;

typedef struct struct_69_bt {
 unsigned int field_0;
 struct struct_68_bt *field_4;
 struct struct_69_bt *field_8;
} struct_69_bt;

typedef struct struct_19_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_19_bt *field_8;
} struct_19_bt;

typedef struct struct_24_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_24_bt *field_8;
} struct_24_bt;

typedef struct struct_57_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_57_bt *field_8;
} struct_57_bt;

typedef struct struct_63_bt {
 unsigned int field_0;
 struct struct_62_bt *field_4;
 struct struct_63_bt *field_8;
} struct_63_bt;

typedef struct struct_68_bt {
 unsigned int field_0;
 struct struct_67_bt *field_4;
 struct struct_68_bt *field_8;
} struct_68_bt;

typedef struct struct_62_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_62_bt *field_8;
} struct_62_bt;

typedef struct struct_67_bt {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_67_bt *field_8;
} struct_67_bt;

unsigned int binary_tree_sum(struct_13_bt *a0, struct_4_bt *ptr9)
{
 struct_4_bt *cur; // r5
 struct_4_bt *v32; // r1
 struct_4_bt *v34; // r2
 struct_50_bt *node; // r6
 unsigned int v36; // r1
 unsigned int v37; // r3
 struct_46_bt *ptr3; // r5
 struct_12_bt *flag2; // r2
 unsigned int v39; // r2
 struct_43_bt *iter; // r4
 unsigned int v41; // r10
 unsigned int v42; // r8
 struct_51_bt *result; // r7
 unsigned int v44; // r9
 unsigned int v45; // r11
 struct_9_bt *v26; // r3
 struct_51_bt *ptr8; // r7
 unsigned int v47; // r0
 struct_51_bt *v48; // r7
 struct_11_bt *flag3; // r2
 struct_4_bt *v28; // r3
 struct_10_bt *flag4; // r2
 struct_4_bt *v30; // r3
 struct_4_bt *flag1; // r2
 struct_4_bt *v0; // [bp-0x70]
 struct_4_bt *v1; // [bp-0x6c]
 unsigned int v2; // [bp-0x68]
 struct_13_bt *v3; // [bp-0x64], Other Possible Types: unsigned int
 struct_13_bt *v4; // [bp-0x60]
 struct_13_bt *ptr; // [bp-0x60]
 struct_9_bt *v6; // [bp-0x5c]
 struct_12_bt *p; // [bp-0x58]
 struct_12_bt *v8; // [bp-0x58], Other Possible Types: struct_74_bt *
 struct_4_bt *v9; // [bp-0x54]
 struct_4_bt *v10; // [bp-0x50]
 unsigned int v11; // [bp-0x50]
 struct_11_bt *v12; // [bp-0x4c], Other Possible Types: struct_30_bt *
 struct_11_bt *addr; // [bp-0x4c]
 struct_4_bt *v14; // [bp-0x48]
 unsigned int v15; // [bp-0x48]
 struct_10_bt *v16; // [bp-0x44], Other Possible Types: struct_41_bt *
 struct_10_bt *ptr7; // [bp-0x44]
 struct_4_bt *v18; // [bp-0x40]
 unsigned int v19; // [bp-0x40]
 struct_4_bt *v20; // [bp-0x3c]
 struct_4_bt *v21; // [bp-0x38]
 unsigned int v22; // [bp-0x34]
 struct_43_bt *v23; // [bp-0x30]
 unsigned int v24; // [bp-0x2c]

 v4 = a0;
 v3 = a0;
 if (!a0)
 return (unsigned int)v3;
 v3 = 0;
 do
 {
 ptr = v4;
 flag2 = ptr->field_4;
 v26 = ptr->field_0;
 v6 = ptr->field_0;
 if (flag2)
 v26 = NULL;
 v8 = flag2;
 v10 = v26;
 if (!((char)armg_calculate_condition(2, flag2, 0, 0)))
 {
 do
 {
 p = v8;
 flag3 = p->field_4;
 v28 = p->field_0;
 v9 = p->field_0;
 if (flag3)
 v28 = NULL;
 v12 = flag3;
 v14 = v28;
 if (!((char)armg_calculate_condition(2, flag3, 0, 0)))
 {
 do
 {
 addr = v12;
 flag4 = addr->field_4;
 v30 = addr->field_0;
 v21 = addr->field_0;
 if (flag4)
 v30 = NULL;
 v16 = flag4;
 v18 = v30;
 if (!((char)armg_calculate_condition(2, flag4, 0, 0)))
 {
 do
 {
 ptr7 = v16;
 flag1 = ptr7->field_4;
 if (flag1)
 {
 v32 = NULL;
 if (!armg_calculate_condition(18, flag1, 0, 0))
 goto LABEL_1108a;
 goto LABEL_11089;
 }
 else
 {
 v32 = ptr9;
 if (armg_calculate_condition(18, flag1, 0, 0))
 {
LABEL_11089:
 cur = flag1;
 goto LABEL_1108c;
 }
 else
 {
LABEL_1108a:
LABEL_1108c:
 v20 = ptr7->field_0;
 if (armg_calculate_condition(18, flag1, 0, 0))
 {
 v34 = v32;
 if ((char)armg_calculate_condition(2, flag1, 0, 0))
 continue;
 }
 else
 {
 v34 = flag1;
 if ((char)armg_calculate_condition(2, v34, 0, 0))
 continue;
 }
 do
 {
 node = cur->field_4;
 v36 = cur->field_0;
 if (cur->field_4)
 {
 v37 = 0;
 v0 = cur;
 v1 = v34;
 v2 = v36;
 do
 {
 ptr3 = node->field_4;
 v39 = node->field_0;
 if (ptr3)
 {
 v36 = 0;
 if ((char)armg_calculate_condition(2, ptr3, 0, 0))
 continue;
 }
 else
 {
 v36 = v36;
 if ((char)armg_calculate_condition(2, ptr3, 0, 0))
 continue;
 }
 do
 {
 iter = ptr3->field_4;
 v41 = ptr3->field_0;
 if (ptr3->field_4)
 {
 v42 = 0;
 do
 {
 result = iter->field_4;
 v44 = iter->field_0;
 if (iter->field_4)
 {
 v45 = 0;
 do
 {
 ptr8 = result;
 v24 = v42;
 v23 = iter;
 v22 = v44;
 v47 = binary_tree_sum(ptr8->field_4, (struct_4_bt*)((unsigned int)v42));
 v48 = ptr8->field_8;
 v44 = v22;
 iter = v23;
 v42 = v24;
 v45 += v47 + ptr8->field_0;
 result = v48;
 } while (result);
 v44 += v45;
 }
 iter = iter->field_8;
 v42 += v44;
 } while (iter);
 v41 += v42;
 }
 ptr3 = ptr3->field_8;
 v36 += v41;
 } while (ptr3);
 v39 += v36;
 } while ((node = node->field_8, v37 += v39, node));
 cur = v0;
 v34 = v1;
 v36 = (unsigned int)v2 + v37;
 } while ((cur = cur->field_8, v34 = (struct_4_bt*)((unsigned int)v34 + v36), cur));
 v20 = (struct_4_bt*)((unsigned int)v20 + (unsigned int)v34);
 }
 }
 } while (ptr7->field_8);
 ptr9 = (struct_51_bt*)((unsigned int)v20);
 v16 = ptr7->field_8;
 v19 += (unsigned int)ptr9;
 } while (ptr7->field_8);
 v21 = (struct_4_bt*)((unsigned int)v21 + v19);
 ptr9 = (struct_51_bt*)((unsigned int)v21);
 v12 = addr->field_8;
 v15 += (unsigned int)ptr9;
 } while (addr->field_8);
 v9 = (struct_4_bt*)((unsigned int)v9 + v15);
 ptr9 = (struct_51_bt*)((unsigned int)v9);
 v8 = p->field_8;
 v11 += (unsigned int)ptr9;
 } while (p->field_8);
 v6 = (struct_4_bt*)((unsigned int)v6 + v11);
 ptr9 = (struct_51_bt*)((unsigned int)v6);
 v4 = ptr->field_8;
 v3 += (unsigned int)ptr9;
 } while (ptr->field_8);
 return v3;
}


// Function: binary_tree at 0x112a8
typedef struct struct_0_binary_tree {
 unsigned int field_0;
 void* field_4;
 struct struct_0_binary_tree *field_8;
} struct_0_binary_tree;

struct_0_binary_tree * binary_tree(struct_0_binary_tree *a0, void* a1)
{
 struct_0_binary_tree *v0; // r5
 struct_0_binary_tree *ptr; // r4
 unsigned int v2; // r0
 struct_0_binary_tree *v3; // r4
 struct_0_binary_tree *v4; // r5

 if (!a0)
 {
 if ((char)armg_calculate_condition(2, (unsigned int)a0, 0, 0))
 return a0;
 }
 else
 {
 if ((char)armg_calculate_condition(2, (unsigned int)a0, 0, 0))
 return v4;
 }
 v0 = NULL;
 do
 {
 ptr = a0;
 v2 = binary_tree_sum((struct_4_bt*)ptr->field_4, a1);
 v3 = ptr->field_8;
 v0 = (struct_0_binary_tree*)((char *)v0 + v2 + ptr->field_0);
 a0 = v3;
 } while (ptr->field_8);
 return v0;
}


// Function: graph_traverse at 0x112e4
typedef struct struct_1_graph {
 struct struct_0_graph *field_0;
 char padding_4[36];
 unsigned int field_28;
} struct_1_graph;

typedef struct struct_2_graph {
 unsigned int field_0;
 struct struct_2_graph *field_4;
} struct_2_graph;

typedef struct struct_0_graph {
 unsigned int field_0;
 struct struct_0_graph *field_4;
} struct_0_graph;

unsigned int graph_traverse(struct_1_graph *a0)
{
 unsigned int v0; // r0
 struct_1_graph *v1; // r1
 struct_1_graph *p; // r1
 struct_2_graph *ptr; // r3
 struct_1_graph *v4; // r1
 struct_2_graph *v5; // r3

 v0 = 0;
 if (a0->field_28 > 0)
 goto LABEL_112f8;
 return 0;
LABEL_112f8:
 v1 = (struct_1_graph*)&a0->padding_4;
 p = v1;
 do
 {
 ptr = *((struct_2_graph **)&p->padding_4[0]);
 v4 = (struct_1_graph*)&p->padding_4;
 if (*((int *)&p->padding_4[0]))
 {
 do
 {
 v5 = ptr->field_4;
 v0 += ptr->field_0;
 ptr = v5;
 } while (ptr->field_4);
 }
 } while ((p = v4, p != (struct_1_graph*)((char*)v1 + a0->field_28 * 4)));
 return v0;
}


// Forward declarations

// Function: test_composite_types at 0x11328
typedef struct struct_0_composite {
 unsigned int field_0;
 struct struct_0_composite *field_4;
} struct_0_composite;

typedef struct struct_1_composite {
 unsigned int field_0;
 struct struct_1_composite *field_4;
} struct_1_composite;

extern unsigned int __glibc___stack_chk_guard;
extern char g_12498;

unsigned int test_composite_types(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v13; // r3
 unsigned int v14; // r2
 struct_0 *cur; // r5
 struct_1 *iter; // r4
 unsigned int v17; // r2
 unsigned int v18; // r3
 void* v19; // r1
 unsigned int v21; // r0
 unsigned int v0; // [bp-0x44]
 char *v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char *v3; // [bp-0x38]
 char v4; // [bp-0x34], Other Possible Types: unsigned int
 unsigned int flag2; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 char *v7; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 char v9; // [bp-0x20], Other Possible Types: unsigned int
 unsigned int flag1; // [bp-0x1c]
 char *v11; // [bp-0x18]
 unsigned int v12; // [bp-0x14]

 v12 = __glibc___stack_chk_guard;
 puts(0x12498);
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
 v13 = 10;
 v14 = 0;
 cur = (struct_0_composite*)&v2;
 v3 = (char*)&v4;
 v1 = (char*)&v2;
 v0 = 10;
 flag2 = 0;
 v2 = 20;
 v4 = 30;
 while (true)
 {
 v14 += v13;
 if (!cur)
 break;
 v13 = cur->field_0;
 cur = cur->field_4;
 }
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v14);
 iter = (struct_1_composite*)&v6;
 v7 = (char*)&v9;
 v17 = 0;
 v18 = 10;
 result = 0;
 flag1 = 0;
 v11 = (char*)&v6;
 v6 = 10;
 v9 = 20;
 while (true)
 {
 iter = iter->field_4;
 v17 += v18;
 if (!iter)
 break;
 v18 = iter->field_0;
 }
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v17);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(NULL, (struct_4_bt*)v19) + 100);
 v21 = __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 if ((v12 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v21;
}


// Function: __muldf3 at 0x11538
extern char __stack_chk_guard;

unsigned int __muldf3_impl(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11)
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
 unsigned int vvar_204; // r64|4b
 unsigned int vvar_209; // r64|4b
 unsigned int vvar_221; // r64|4b
 unsigned int vvar_73; // r64|4b
 unsigned int vvar_74; // r64|4b
 unsigned int vvar_472; // r64|4b
 unsigned int vvar_86; // r64|4b
 unsigned int vvar_247; // r64|4b
 unsigned int vvar_314; // r64|4b

 v2 = 2047 & a1 >> 20;
 if ((2047 & a1 >> 20))
 {
 v3 = 2047 & a3 >> 20;
 v8 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 5 : v4);
 v9 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 2047 & a3 >> 20 : v5);
 v10 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? a3 >> 19 & 1 : v6);
 v11 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? armg_calculate_flag_v(v4, v5, v6, v7) : v7);
 if (!armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_1154e;
LABEL_1154d:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_11552;
LABEL_11551:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_11718();
 return sub_11718();
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
 goto LABEL_1154d;
LABEL_1154e:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_11551;
LABEL_11552:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_11718();
 return sub_11718();
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
 v55 = ((unsigned long long)a0 * a2 >> 32) + v53 * a2 >> 32;
 vvar_204 = ((unsigned long long)a0 * a2 >> 32) + v53 * a2;
 v56 = ((unsigned long long)v55 << 32 | vvar_204) + (unsigned long long)a0 * v54 >> 32;
 vvar_209 = ((unsigned long long)v55 << 32 | vvar_204) + (unsigned long long)a0 * v54;
 v57 = ((unsigned long long)v56) + (unsigned long long)v53 * v54 >> 32;
 v58 = ((unsigned long long)v56) + (unsigned long long)v53 * v54;
 if ((unsigned long long)a0 * a2)
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
 goto LABEL_1161c;
LABEL_115dc:
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
 goto LABEL_115dc;
LABEL_1161c:
 if ((char)armg_calculate_condition(194, v71, v72, v73))
 return 0;
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
 goto LABEL_1160a;
LABEL_11609:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_11610;
 return a0 | a2;
 }
 else
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_11609;
LABEL_1160a:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_11610;
 return a0 | a2;
 }
LABEL_11610:
 v68 = v78 | 0x100000;
 vvar_314 = 0;
 v61 = (unsigned int)v0 - 1;
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 return 0;
 }
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_1162a;
LABEL_11629:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_11630;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_11629;
LABEL_1162a:
;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_11630;
 return v84;
 }
LABEL_11630:
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
 if (!vvar_86 && !((unsigned int)(v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31)) * 2)
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
 return 0;
}


// Function: sub_11718 at 0x11718
extern char __stack_chk_guard;

unsigned int sub_11718(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
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
 goto LABEL_11744;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_11744:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_1174e;
LABEL_1174d:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_11752;
LABEL_11751:
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
 goto LABEL_1174d;
LABEL_1174e:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_11751;
LABEL_11752:
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
 goto LABEL_1177a;
LABEL_11779:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_11779;
LABEL_1177a:
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
 goto LABEL_116f8;
 return a0;
 v22 = flag3;
 }
LABEL_116f8:
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


// Function: __mulsf3 at 0x117a4
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
 goto LABEL_117b2;
LABEL_117b1:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_117b6;
LABEL_117b5:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_118b8;
 }
 else
 {
 v1 = a3;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_117b1;
LABEL_117b2:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_117b5;
LABEL_117b6:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_118b8:
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_118e0;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_118e0:
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_118ea;
LABEL_118e9:
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_118ee;
LABEL_118ed:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_118f2;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_118e9;
LABEL_118ea:
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_118ed;
LABEL_118ee:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_118f2:
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_118f8:
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
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_118f9:
 if ((a0 & 2147483647))
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
 {
LABEL_11885:
 v53 = a0;
 if (armg_calculate_condition(5, v50, v51, v52))
 {
 v54 = v53 * 2;
 }
 else
 {
 v54 = v53;
 }
 while (true)
 {
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
 v0 -= 1;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 else
 {
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 }
 a0 = v54 | a0 & 0x80000000;
 }
 else
 {
LABEL_11886:
 ;
 }
 if (armg_calculate_condition(5, v50, v51, v52))
 {
 v30 = 5;
 v31 = v1;
 v32 = armg_calculate_flag_c(v49, v50, v51, v52);
 v33 = armg_calculate_flag_v(v49, v50, v51, v52);
 v55 = a1;
 if (armg_calculate_condition(5, v31, v32, v33))
 {
LABEL_118a1:
 v55 = a1;
 if (armg_calculate_condition(5, v31, v32, v33))
 {
 v56 = v55 * 2;
 }
 else
 {
 v56 = v55;
 }
 while (true)
 {
 v30 = 5;
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
 v1 -= 1;
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 else
 {
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 }
 a1 = v56 | a1 & 0x80000000;
 }
LABEL_118a2:
 ;
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
 goto LABEL_11814;
LABEL_117d0:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < 0x800000)
 {
 v73 = v71 * 2;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_117ee;
LABEL_117ed:
 v74 = v73 | v72 >> 31;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_117f2;
LABEL_117f1:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_117ed;
LABEL_117ee:
 v74 = v73;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_117f1;
LABEL_117f2:
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
 goto LABEL_117d0;
LABEL_11814:
 ;
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
 goto LABEL_11832;
LABEL_11831:
v80 |= v81 * 0x800000;
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_11838;
 return v80 | v81 * 0x800000;
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_11831;
LABEL_11832:
if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_11838;
 return v80;
 }
LABEL_11838:
 v75 = v80 | 0x800000;
 v72 = 0;
 v76 = v81 - 1;
 if ((char)armg_calculate_condition(194, v81, 1, 0))
 return (v80 | 0x800000) & 0x80000000 | 0x7f000000 | 0x800000;
 else
 {
 return 0;
 }
}


// Function: __aeabi_drsub at 0x1193c
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}


// Function: __subdf3 at 0x11944
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x11bf4
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
 unsigned int vvar_4; // r64|4b

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11c00;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11c00;
 return a0;
 }
LABEL_11c00:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return 0;
}


// Function: __floatsidf at 0x11c18
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
 unsigned int vvar_4; // r64|4b

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11c24;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11c24;
 return a0;
 }
LABEL_11c24:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return 0;
}


// Function: __extendsfdf2 at 0x11c40
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
 unsigned int vvar_32; // r64

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
 goto LABEL_11c56;
LABEL_11c55:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_11c5a;
LABEL_11c59:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11c60;
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
 goto LABEL_11c55;
LABEL_11c56:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_11c59;
LABEL_11c5a:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11c60;
 return v4;
 }
LABEL_11c60:
 if ((v3 & 16777215))
 goto LABEL_11c68;
 return v4;
LABEL_11c68:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11c74;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11c74;
 return v4;
 }
LABEL_11c74:
 v2 = vvar_32;
 v1 = v44;
 v0 = v45;
 return 0;
}


// Function: __floatundidf at 0x11c88
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
 {
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 }
 return a0;
}


// Function: __aeabi_l2d at 0x11c9c
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 {
 v2 = v3;
 v1 = v4;
 v0 = v5;
 }
 return a0;
}


// Function: __aeabi_frsub at 0x11cfc
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000);
 return __addsf3(a0 ^ 0x80000000);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x11d08
extern char g_400000;

unsigned int __addsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
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
 goto LABEL_11e44;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_11e44;
 return a0;
 }
LABEL_11e44:
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
 goto LABEL_11e64;
 return a0 + 0x800000;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_11e64;
 return a0;
 }
LABEL_11e64:
;
 v41 = a0 & 0x80000000;
 return v41 | 0x7f000000 | 0x800000;
}


// Function: __aeabi_ui2f at 0x11e98
unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_11eb0;
 return a0;
LABEL_11eb0:
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


// Function: __floatsisf at 0x11ea0
int __floatsisf(unsigned int a0)
{
 unsigned int v0; // r2

 if (!a0)
 return 0;
 v0 = (!a0 ? 32 : Clz(a0));
 return 0;
}


// Function: __floatundisf at 0x11ec0
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
 {
 v7 = armg_calculate_flag_c(5, v0, v5, v6);
 v8 = armg_calculate_flag_v(5, v0, v5, v6);
 }
 return a0;
}


// Function: __aeabi_l2f at 0x11ed0
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 if (a0 || a1)
 {
 if (!(a1 & 0x80000000) >> 31)
 {
 v0 = 0;
 }
 else
 {
 v0 = a0;
 }
 }
 else
 {
 v0 = a0;
 }
 return v0;
}


// Function: __fixsfsi at 0x11f4c
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


