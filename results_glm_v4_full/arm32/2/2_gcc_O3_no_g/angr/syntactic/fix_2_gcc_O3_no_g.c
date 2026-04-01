// Angr Decompilation of 2_gcc_O3_no_g
// Platform: ARMEL

#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */



// Function: sub_103a0 at 0x103a0
extern unsigned int g_23008;

int sub_103a0()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
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

 v2 = __mulsf3();
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
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_105cd;
LABEL_105ce:
 if (!armg_calculate_condition(210, a0, 0, 0))
 return v0;
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
extern char g_12344;

typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
 struct struct_0 *field_8;
 struct struct_0 *field_c;
 struct struct_0 *field_10;
 struct struct_0 *field_14;
 struct struct_0 *field_18;
 struct struct_0 *field_1c;
 struct struct_0 *field_20;
 struct struct_0 *field_24;
} struct_0;

int test_data_types_l1()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0xc]

 puts("DT-L1");
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 0);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 3435973837);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n");
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
 do
 {
 v3 = v0;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v0 = v6;
 } while (&v1[a1] != i);
 return v3 + a0[1];
}


// Function: array_string at 0x10784
char *array_string(char *ptr)
{
	char *result; // r0
	char *v1; // r3
	char v2[2]; // r3
	char *v3; // r3

	result = ptr;
	if (result)
		goto LABEL_10794;
	return result;
LABEL_10794:
	v1 = ptr;
	do
	{
		v3 = &v1[1];
		v1 = v3;
	} while (v2[1]);
	return (char *)(1 + -0x1 * (int)(uintptr_t)ptr) + (int)(uintptr_t)v2;
}


// Function: array_2d_stack at 0x107ac
int array_2d_stack(unsigned int *a0)
{
 return *(a0) + a0[11] + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: array_3d at 0x107fc
int array_3d(unsigned int *a0)
{
 return 0;
}


// Function: array_vla at 0x10be4
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
 goto LABEL_10bf0;
 return 0;
LABEL_10bf0:
 v1 = a1 + 1;
 i = v1;
 do
 {
 v4 = v0;
 v5 = i + 1;
 v6 = v4 + i[1];
 v0 = v6;
 i = v5;
 } while (&v1[a0] != i);
 return v4 + ptr[1];
}


// Function: array_pointer at 0x10c0c
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


// Function: pointer_array at 0x10c48


unsigned int pointer_array(struct_0 *idx, unsigned int a1)
{
 unsigned int cur; // r0

 if (a1 <= 0)
 return 0;
 cur = ((struct_0 *)idx->field_0)->field_0;
 if (a1 > 1)
 goto LABEL_10c68;
 return cur;
LABEL_10c68:
 if (idx->field_4)
 cur += idx->field_4->field_0;
 if (a1 != 2)
 goto LABEL_10c80;
 return cur;
LABEL_10c80:
 if (idx->field_8)
 cur += idx->field_8->field_0;
 if (a1 != 3)
 goto LABEL_10c98;
 return cur;
LABEL_10c98:
 if (idx->field_c)
 cur += idx->field_c->field_0;
 if (a1 != 4)
 goto LABEL_10cb0;
 return cur;
LABEL_10cb0:
 if (idx->field_10)
 cur += idx->field_10->field_0;
 if (a1 != 5)
 goto LABEL_10cc8;
 return cur;
LABEL_10cc8:
 if (idx->field_14)
 cur += idx->field_14->field_0;
 if (a1 != 6)
 goto LABEL_10ce0;
 return cur;
LABEL_10ce0:
 if (idx->field_18)
 cur += idx->field_18->field_0;
 if (a1 != 7)
 goto LABEL_10cf8;
 return cur;
LABEL_10cf8:
 if (idx->field_1c)
 cur += idx->field_1c->field_0;
 if (a1 != 8)
 goto LABEL_10d10;
 return cur;
LABEL_10d10:
 if (idx->field_20)
 cur += idx->field_20->field_0;
 if (a1 > 9)
 goto LABEL_10d28;
 return cur;
LABEL_10d28:
 if (!idx->field_24)
 return cur;
 return cur + idx->field_24->field_0;
}


// Function: array_complex_index at 0x10d44
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v1; // r12
 char v0; // [bp+0x0]
 unsigned int vvar_22;
 unsigned int vvar_24;
 unsigned int vvar_5;

 if (a3 < a1)
 {
 vvar_22 = 0;
 if (!armg_calculate_condition(162, a3, a1, 0))
 return 4294967295;
LABEL_10d51:
 vvar_24 = 1;
 return 4294967295;
 }
 else
 {
 if (armg_calculate_condition(162, a3, a1, 0))
 goto LABEL_10d51;
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
 return 4294967295;
}


// Function: array_oob at 0x10d80
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
 goto LABEL_10d90;
 return 0;
LABEL_10d90:
 i = a0 + 1;
 do
 {
 v3 = v0;
 v4 = i + 1;
 v5 = v3 + i[1];
 v0 = v5;
 i = v4;
 } while (&a0[a1] != i);
 return v3 + a0[1];
}


// Function: test_array_types at 0x10dac
typedef struct struct_test_array {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_test_array;

extern unsigned int __glibc___stack_chk_guard;
extern char g_124c4;

int test_array_types(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
 unsigned int v4; // r2
 char v5[2]; // r3
 unsigned int i; // r3
 struct_0 *ptr; // r2
 struct_0 *v9; // r2
 unsigned int v10; // r0
 char v0; // [bp-0x68]
 char v1; // [bp-0x20]
 char v2[8]; // [bp-0x14]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 puts("ARR-L1");
__printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
	v4 = 0;
	strncpy(v2, "hello", 5);
	memcpy(v5, v2, sizeof(v5));
do
 {
 v4 += 1;
 } while (v5[1]);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v4);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 i = 0;
 ptr = (struct_test_array *)&v0;
 do
 {
 v9 = (struct_test_array *)&ptr->field_4;
 ptr->field_4 = i;
 i += 1;
 ptr = (struct_test_array *)v9;
 } while (i != 20);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v10 = __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v1));
 return __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v1));
}


// Function: ptr_single at 0x10ed8
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x10ee4
typedef struct struct_ptr_double {
 unsigned int field_0;
} struct_ptr_double;

int ptr_double(struct_ptr_double **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x10ef4
typedef struct struct_ptr_triple_outer {
 struct struct_ptr_triple_inner *field_0;
} struct_ptr_triple_outer;

typedef struct struct_ptr_triple_inner {
 unsigned int field_0;
} struct_ptr_triple_inner;

int ptr_triple(struct_ptr_triple_outer **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x10f08
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
 do
 {
 v2 = v1;
 v4 = a0 + 1;
 v0 += 1;
 v5 = v2 + *(a0);
 a0 = v4;
 v1 = v5;
 } while (i != v0);
 return v2 + *(a0);
}


// Function: ptr_offset at 0x10f3c
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x10f44
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x10f50
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


// Function: ptr_const at 0x10f70
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x10f7c
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x10f90
int ptr_func_simple(unsigned int a0, unsigned int a1)
{
 return ((int (*)(unsigned int, unsigned int))a0)(a0, a1);
}


// Function: ptr_func_complex at 0x10f9c
extern unsigned int __glibc___stack_chk_guard;

unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x14]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 result = 0;
 v0 = "test";
 v3 = ((int (*)(unsigned int, void*, unsigned int, unsigned int))a0)(a1, &v0, 0, a0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v3;
}


// Function: ptr_cast at 0x11004
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x1100c
int opaque_handle_create()
{
 unsigned int v0; // r0

 return v0;
}


// Function: opaque_handle_op at 0x11010
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x11018
extern char g_125f0;

int test_pointer_types()
{
 unsigned int v0; // r0

 puts("PTR-L2");
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 v0 = __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: struct_simple at 0x11148
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x11160
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
 v1 = (unsigned int (*)[3])a0;
 v2 = 0;
 v0 = v3;
 ptr = (unsigned int *)v1;
 do
 {
 v5 = v2;
 v6 = (unsigned int *)((unsigned int *)ptr + 3);
 v8 = v5 + v6[0] + v6[1] + v6[2];
 ptr = (unsigned int *)v6;
 v2 = v8;
 } while ((unsigned int (*)[3])ptr != &v1[a1]);
 return v5 + v7;
}


// Function: struct_nested at 0x111a8
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x111b8
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x111c8
typedef struct struct_with_ptr_outer {
 unsigned int field_0;
 struct struct_with_ptr_inner *field_4;
} struct_with_ptr_outer;

typedef struct struct_with_ptr_inner {
 unsigned int field_0;
} struct_with_ptr_inner;

int struct_with_ptr(struct_with_ptr_outer *a0)
{
 if (!a0->field_4)
 return a0->field_0;
 return a0->field_0 + a0->field_4->field_0;
}


// Function: struct_bitfields at 0x111dc
int struct_bitfields(void* ptr)
{
 unsigned int v0; // r2

 v0 = *((char *)ptr);
 return (v0 & 1) + (v0 * 0x20000000 >> 30) + (v0 * 0x4000000 >> 29) + (*((short *)ptr) >> 6);
}


// Function: union_type at 0x11200
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
}


// Function: union_array at 0x11230
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
 goto LABEL_11240;
 return 0;
LABEL_11240:
 v1 = a0 + 1;
 i = v1;
 do
 {
 v3 = v0;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v0 = v6;
 } while (&v1[a1] != i);
 return v3 + ptr[1];
}


// Function: enum_type at 0x1125c
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x11268
extern unsigned int CSWTCH_73[4];

unsigned int enum_switch(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (3 >= a0)
 return *((int *)(76188 + a0 * 4));
 return 4294967197;
}


// Function: struct_func_ptr at 0x11280
typedef struct struct_func_ptr_t {
 char padding_0[4];
 unsigned int field_4;
} struct_func_ptr_t;

int struct_func_ptr(struct_func_ptr_t *a0)
{
 goto *(void *)a0->field_4;
}


// Function: linked_list at 0x11288
typedef struct struct_linked_list {
 unsigned int field_0;
 struct struct_linked_list *field_4;
} struct_linked_list;

struct_linked_list * linked_list(struct_linked_list *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_linked_list *ptr; // r3
 struct_linked_list *v3; // r3
 unsigned int v4; // r0

 if (!a0)
 return (struct_linked_list *)0;
 v0 = 0;
 do
 {
 v1 = v0;
 ptr = a0;
 v3 = ptr->field_4;
 v4 = v1 + ptr->field_0;
 a0 = (struct_linked_list *)v3;
 v0 = v4;
 } while (ptr->field_4);
 return (struct_linked_list *)(v1 + ptr->field_0);
}


// Function: doubly_linked_list at 0x112b0
typedef struct struct_doubly_linked_list {
 unsigned int field_0;
 struct struct_doubly_linked_list *field_4;
} struct_doubly_linked_list;

struct_doubly_linked_list * doubly_linked_list(struct_doubly_linked_list *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_doubly_linked_list *ptr; // r3
 struct_doubly_linked_list *v3; // r3
 unsigned int v4; // r0

 if (!a0)
 return (struct_doubly_linked_list *)0;
 v0 = 0;
 do
 {
 v1 = v0;
 ptr = a0;
 v3 = ptr->field_4;
 v4 = v1 + ptr->field_0;
 a0 = (struct_doubly_linked_list *)v3;
 v0 = v4;
 } while (ptr->field_4);
 return (struct_doubly_linked_list *)(v1 + ptr->field_0);
}


// Function: binary_tree_sum at 0x112d8
typedef struct struct_28 {
 struct struct_4 *field_0;
 struct struct_27 *field_4;
 struct struct_28 *field_8;
} struct_28;

typedef struct struct_33 {
 unsigned int field_0;
 struct struct_32 *field_4;
 struct struct_33 *field_8;
} struct_33;

typedef struct struct_94 {
 struct struct_76 *field_0;
 struct struct_93 *field_4;
 struct struct_94 *field_8;
} struct_94;

typedef struct struct_64 {
 struct struct_52 *field_0;
 struct struct_63 *field_4;
 struct struct_64 *field_8;
} struct_64;

typedef struct struct_44 {
 struct struct_38 *field_0;
 struct struct_43 *field_4;
 struct struct_44 *field_8;
} struct_44;

typedef struct struct_71 {
 unsigned int field_0;
 struct struct_70 *field_4;
 struct struct_71 *field_8;
} struct_71;

typedef struct struct_47 {
 unsigned int field_0;
 struct struct_46 *field_4;
 struct struct_47 *field_8;
} struct_47;

typedef struct struct_67 {
 unsigned int field_0;
 struct struct_66 *field_4;
 struct struct_67 *field_8;
} struct_67;

typedef struct struct_65 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_65 *field_8;
} struct_65;



typedef struct struct_27 {
 struct struct_9 *field_0;
 struct struct_26 *field_4;
 struct struct_27 *field_8;
} struct_27;

typedef struct struct_32 {
 unsigned int field_0;
 struct struct_31 *field_4;
 struct struct_32 *field_8;
} struct_32;

typedef struct struct_76 {
 unsigned int field_0;
 struct struct_75 *field_4;
 struct struct_76 *field_8;
} struct_76;

typedef struct struct_93 {
 struct struct_81 *field_0;
 struct struct_92 *field_4;
 struct struct_93 *field_8;
} struct_93;

typedef struct struct_52 {
 unsigned int field_0;
 struct struct_51 *field_4;
 struct struct_52 *field_8;
} struct_52;

typedef struct struct_63 {
 struct struct_57 *field_0;
 struct struct_62 *field_4;
 struct struct_63 *field_8;
} struct_63;

typedef struct struct_38 {
 unsigned int field_0;
 struct struct_37 *field_4;
 struct struct_38 *field_8;
} struct_38;

typedef struct struct_43 {
 unsigned int field_0;
 struct struct_42 *field_4;
 struct struct_43 *field_8;
} struct_43;

typedef struct struct_70 {
 unsigned int field_0;
 struct struct_69 *field_4;
 struct struct_70 *field_8;
} struct_70;

typedef struct struct_46 {
 unsigned int field_0;
 struct struct_45 *field_4;
 struct struct_46 *field_8;
} struct_46;

typedef struct struct_66 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_66 *field_8;
} struct_66;





typedef struct struct_26 {
 struct struct_14 *field_0;
 struct struct_25 *field_4;
 struct struct_26 *field_8;
} struct_26;

typedef struct struct_31 {
 unsigned int field_0;
 struct struct_30 *field_4;
 struct struct_31 *field_8;
} struct_31;

typedef struct struct_75 {
 unsigned int field_0;
 struct struct_74 *field_4;
 struct struct_75 *field_8;
} struct_75;

typedef struct struct_81 {
 unsigned int field_0;
 struct struct_80 *field_4;
 struct struct_81 *field_8;
} struct_81;

typedef struct struct_92 {
 struct struct_86 *field_0;
 struct struct_91 *field_4;
 struct struct_92 *field_8;
} struct_92;

typedef struct struct_51 {
 unsigned int field_0;
 struct struct_50 *field_4;
 struct struct_51 *field_8;
} struct_51;

typedef struct struct_57 {
 unsigned int field_0;
 struct struct_56 *field_4;
 struct struct_57 *field_8;
} struct_57;

typedef struct struct_62 {
 unsigned int field_0;
 struct struct_61 *field_4;
 struct struct_62 *field_8;
} struct_62;

typedef struct struct_37 {
 unsigned int field_0;
 struct struct_36 *field_4;
 struct struct_37 *field_8;
} struct_37;

typedef struct struct_42 {
 unsigned int field_0;
 struct struct_41 *field_4;
 struct struct_42 *field_8;
} struct_42;

typedef struct struct_69 {
 unsigned int field_0;
 struct struct_68 *field_4;
 struct struct_69 *field_8;
} struct_69;

typedef struct struct_45 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_45 *field_8;
} struct_45;

typedef struct struct_2_tree {
 unsigned int field_0;
 struct struct_1 *field_4;
 struct struct_2_tree *field_8;
} struct_2_tree;

typedef struct struct_8_tree {
 unsigned int field_0;
 struct struct_7 *field_4;
 struct struct_8_tree *field_8;
} struct_8_tree;

typedef struct struct_14 {
 unsigned int field_0;
 struct struct_13 *field_4;
 struct struct_14 *field_8;
} struct_14;

typedef struct struct_25 {
 struct struct_19 *field_0;
 struct struct_24 *field_4;
 struct struct_25 *field_8;
} struct_25;

typedef struct struct_30 {
 unsigned int field_0;
 struct struct_29 *field_4;
 struct struct_30 *field_8;
} struct_30;

typedef struct struct_74 {
 unsigned int field_0;
 struct struct_73 *field_4;
 struct struct_74 *field_8;
} struct_74;

typedef struct struct_80 {
 unsigned int field_0;
 struct struct_79 *field_4;
 struct struct_80 *field_8;
} struct_80;

typedef struct struct_86 {
 unsigned int field_0;
 struct struct_85 *field_4;
 struct struct_86 *field_8;
} struct_86;

typedef struct struct_91 {
 unsigned int field_0;
 struct struct_90 *field_4;
 struct struct_91 *field_8;
} struct_91;

typedef struct struct_50 {
 unsigned int field_0;
 struct struct_49 *field_4;
 struct struct_50 *field_8;
} struct_50;

typedef struct struct_56 {
 unsigned int field_0;
 struct struct_55 *field_4;
 struct struct_56 *field_8;
} struct_56;

typedef struct struct_61 {
 unsigned int field_0;
 struct struct_60 *field_4;
 struct struct_61 *field_8;
} struct_61;

typedef struct struct_36 {
 unsigned int field_0;
 struct struct_35 *field_4;
 struct struct_36 *field_8;
} struct_36;

typedef struct struct_41 {
 unsigned int field_0;
 struct struct_40 *field_4;
 struct struct_41 *field_8;
} struct_41;

typedef struct struct_68 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_68 *field_8;
} struct_68;



typedef struct struct_13 {
 unsigned int field_0;
 struct struct_12 *field_4;
 struct struct_13 *field_8;
} struct_13;

typedef struct struct_19 {
 unsigned int field_0;
 struct struct_18 *field_4;
 struct struct_19 *field_8;
} struct_19;

typedef struct struct_24 {
 unsigned int field_0;
 struct struct_23 *field_4;
 struct struct_24 *field_8;
} struct_24;

typedef struct struct_29 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_29 *field_8;
} struct_29;

typedef struct struct_73 {
 unsigned int field_0;
 struct struct_72 *field_4;
 struct struct_73 *field_8;
} struct_73;

typedef struct struct_79 {
 unsigned int field_0;
 struct struct_78 *field_4;
 struct struct_79 *field_8;
} struct_79;

typedef struct struct_85 {
 unsigned int field_0;
 struct struct_84 *field_4;
 struct struct_85 *field_8;
} struct_85;

typedef struct struct_90 {
 unsigned int field_0;
 struct struct_89 *field_4;
 struct struct_90 *field_8;
} struct_90;

typedef struct struct_49 {
 unsigned int field_0;
 struct struct_48 *field_4;
 struct struct_49 *field_8;
} struct_49;

typedef struct struct_55 {
 unsigned int field_0;
 struct struct_54 *field_4;
 struct struct_55 *field_8;
} struct_55;

typedef struct struct_60 {
 unsigned int field_0;
 struct struct_59 *field_4;
 struct struct_60 *field_8;
} struct_60;

typedef struct struct_35 {
 unsigned int field_0;
 struct struct_34 *field_4;
 struct struct_35 *field_8;
} struct_35;

typedef struct struct_40 {
 unsigned int field_0;
 struct struct_39 *field_4;
 struct struct_40 *field_8;
} struct_40;

typedef struct struct_0_node {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_0_node *field_8;
} struct_0_node;

typedef struct struct_6_node {
 unsigned int field_0;
 struct struct_5 *field_4;
 struct struct_6_node *field_8;
} struct_6_node;

typedef struct struct_12 {
 unsigned int field_0;
 struct struct_11 *field_4;
 struct struct_12 *field_8;
} struct_12;

typedef struct struct_18 {
 unsigned int field_0;
 struct struct_17 *field_4;
 struct struct_18 *field_8;
} struct_18;

typedef struct struct_23 {
 unsigned int field_0;
 struct struct_22 *field_4;
 struct struct_23 *field_8;
} struct_23;

typedef struct struct_72 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_72 *field_8;
} struct_72;

typedef struct struct_78 {
 unsigned int field_0;
 struct struct_77 *field_4;
 struct struct_78 *field_8;
} struct_78;

typedef struct struct_84 {
 unsigned int field_0;
 struct struct_83 *field_4;
 struct struct_84 *field_8;
} struct_84;

typedef struct struct_89 {
 unsigned int field_0;
 struct struct_88 *field_4;
 struct struct_89 *field_8;
} struct_89;

typedef struct struct_48 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_48 *field_8;
} struct_48;

typedef struct struct_54 {
 unsigned int field_0;
 struct struct_53 *field_4;
 struct struct_54 *field_8;
} struct_54;

typedef struct struct_59 {
 unsigned int field_0;
 struct struct_58 *field_4;
 struct struct_59 *field_8;
} struct_59;

typedef struct struct_34 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_34 *field_8;
} struct_34;

typedef struct struct_39 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_39 *field_8;
} struct_39;

typedef struct struct_5 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_5 *field_8;
} struct_5;

typedef struct struct_11 {
 unsigned int field_0;
 struct struct_10 *field_4;
 struct struct_11 *field_8;
} struct_11;

typedef struct struct_17 {
 unsigned int field_0;
 struct struct_16 *field_4;
 struct struct_17 *field_8;
} struct_17;

typedef struct struct_22 {
 unsigned int field_0;
 struct struct_21 *field_4;
 struct struct_22 *field_8;
} struct_22;

typedef struct struct_77 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_77 *field_8;
} struct_77;

typedef struct struct_83 {
 unsigned int field_0;
 struct struct_82 *field_4;
 struct struct_83 *field_8;
} struct_83;

typedef struct struct_88 {
 unsigned int field_0;
 struct struct_87 *field_4;
 struct struct_88 *field_8;
} struct_88;

typedef struct struct_53 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_53 *field_8;
} struct_53;

typedef struct struct_58 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_58 *field_8;
} struct_58;

typedef struct struct_10 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_10 *field_8;
} struct_10;

typedef struct struct_16 {
 unsigned int field_0;
 struct struct_15 *field_4;
 struct struct_16 *field_8;
} struct_16;

typedef struct struct_21 {
 unsigned int field_0;
 struct struct_20 *field_4;
 struct struct_21 *field_8;
} struct_21;

typedef struct struct_82 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_82 *field_8;
} struct_82;

typedef struct struct_87 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_87 *field_8;
} struct_87;

typedef struct struct_15 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_15 *field_8;
} struct_15;

typedef struct struct_20 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_20 *field_8;
} struct_20;

struct_28 * binary_tree_sum(struct_28 *a0, struct_33 *ptr9)
{
 struct_28 *v25; // r3
 struct_28 *v26; // cc_dep1
 struct_44 *flag4; // r2
 struct_33 *v35; // r3
 struct_33 *flag1; // r2
 struct_33 *v37; // r1
 struct_33 *v39; // r2
 struct_71 *node; // r6
 unsigned int v41; // r1
 unsigned int v42; // r3
 struct_28 *v27; // r0
 struct_47 *ptr3; // r5
 unsigned int v44; // r2
 struct_67 *iter; // r4
 unsigned int v46; // r10
 unsigned int v47; // r8
 struct_65 *result; // r7
 unsigned int v49; // r9
 struct_28 *v28; // r0
 unsigned int v50; // r11
 struct_65 *ptr8; // r7
 unsigned int v52; // r0
 struct_65 *v53; // r7
 struct_33 *cur; // r5
 struct_94 *flag2; // r2
 struct_33 *v31; // r3
 struct_64 *flag3; // r2
 struct_33 *v33; // r3
 struct_33 *v0; // [bp-0x70]
 struct_33 *v1; // [bp-0x6c]
 unsigned int v2; // [bp-0x68]
 struct_28 *v3; // [bp-0x64]
 struct_28 *v4; // [bp-0x60]
 struct_28 *ptr; // [bp-0x60]
 struct_33 *v6; // [bp-0x5c]
 struct_94 *p; // [bp-0x58]
 struct_94 *v8; // [bp-0x58]
 struct_33 *v9; // [bp-0x54]
 struct_33 *v10; // [bp-0x50]
 unsigned int v11; // [bp-0x50]
 struct_64 *v12; // [bp-0x4c]
 struct_64 *addr; // [bp-0x4c]
 struct_33 *v14; // [bp-0x48]
 unsigned int v15; // [bp-0x48]
 struct_44 *v16; // [bp-0x44]
 struct_44 *ptr7; // [bp-0x44]
 struct_33 *v18; // [bp-0x40]
 unsigned int v19; // [bp-0x40]
 struct_33 *v20; // [bp-0x3c]
 struct_33 *v21; // [bp-0x38]
 unsigned int v22; // [bp-0x34]
 struct_67 *v23; // [bp-0x30]
 unsigned int v24; // [bp-0x2c]

 v25 = a0;
 v26 = a0;
 if (!a0)
 v27 = v25;
 else
 v27 = a0;
 v28 = v27;
 v4 = v25;
 v3 = v25;
 if ((char)armg_calculate_condition(2, v26, 0, 0))
 return v28;
 v3 = NULL;
 do
 {
 ptr = v4;
 flag2 = ptr->field_4;
 v31 = ptr->field_0;
 v6 = ptr->field_0;
 if (flag2)
 v31 = NULL;
 v8 = flag2;
 v10 = v31;
 if (!((char)armg_calculate_condition(2, flag2, 0, 0)))
 {
 do
 {
 p = v8;
 flag3 = p->field_4;
 v33 = p->field_0;
 v9 = p->field_0;
 if (flag3)
 v33 = NULL;
 v12 = flag3;
 v14 = v33;
 if (!((char)armg_calculate_condition(2, flag3, 0, 0)))
 {
 do
 {
 addr = v12;
 flag4 = addr->field_4;
 v35 = addr->field_0;
 v21 = addr->field_0;
 if (flag4)
 v35 = NULL;
 v16 = flag4;
 v18 = v35;
 if (!((char)armg_calculate_condition(2, flag4, 0, 0)))
 {
 do
 {
 ptr7 = v16;
 flag1 = ptr7->field_4;
 if (flag1)
 {
 v37 = NULL;
 if (!armg_calculate_condition(18, flag1, 0, 0))
 goto LABEL_1137e;
 goto LABEL_1137d;
 }
 else
 {
 v37 = ptr9;
 if (armg_calculate_condition(18, flag1, 0, 0))
 {
LABEL_1137d:
 cur = flag1;
 goto LABEL_11380;
 }
 else
 {
LABEL_1137e:
LABEL_11380:
 v20 = ptr7->field_0;
 if (armg_calculate_condition(18, flag1, 0, 0))
 {
 if ((char)armg_calculate_condition(2, flag1, 0, 0))
 continue;
 }
 else
 {
 if ((char)armg_calculate_condition(2, flag1, 0, 0))
 continue;
 }
 do
 {
 node = cur->field_4;
 v41 = cur->field_0;
 if (v37)
 {
 v42 = 0;
 v0 = cur;
 v1 = v39;
 v2 = v41;
 do
 {
 ptr3 = node->field_4;
 v44 = node->field_0;
 if (ptr3)
 {
 v41 = 0;
 if ((char)armg_calculate_condition(2, ptr3, 0, 0))
 continue;
 }
 else
 {
 v41 = v41;
 if ((char)armg_calculate_condition(2, ptr3, 0, 0))
 continue;
 }
 do
 {
 iter = ptr3->field_4;
 v46 = ptr3->field_0;
 if (ptr3->field_4)
 {
 v47 = 0;
 do
 {
 result = iter->field_4;
 v49 = iter->field_0;
 if (iter->field_4)
 {
 v50 = 0;
 do
 {
 ptr8 = result;
 v24 = v47;
 v23 = iter;
 v22 = v49;
 v52 = binary_tree_sum(ptr8->field_4, v47);
 v53 = ptr8->field_8;
 v49 = v22;
 iter = v23;
 v47 = v24;
 v50 += v52 + ptr8->field_0;
 result = v53;
 } while (result);
 v49 += v50;
 }
 iter = iter->field_8;
 v47 += v49;
 } while (iter);
 v46 += v47;
 }
 ptr3 = ptr3->field_8;
 v41 += v46;
 } while (ptr3);
 v44 += v41;
 } while ((node = node->field_8, v42 += v44, node));
 cur = v0;
 v39 = v1;
 v41 = v2 + v42;
 }
 } while ((cur = cur->field_8, v37 += v41, cur));
 v20 += (unsigned int)v37;
 }
 }
 ptr9 = v20;
 v16 = ptr7->field_8;
 v19 += (unsigned int)ptr9;
 } while (ptr7->field_8);
 v21 = (unsigned int)v21 + v19;
 }
 ptr9 = v21;
 v12 = addr->field_8;
 v15 += (unsigned int)ptr9;
 } while (addr->field_8);
 v9 = (unsigned int)v9 + v15;
 }
 ptr9 = v9;
 v8 = p->field_8;
 v11 += (unsigned int)ptr9;
 } while (p->field_8);
 v6 = (unsigned int)v6 + v11;
 }
 ptr9 = v6;
 v4 = ptr->field_8;
 v3 += (unsigned int)ptr9;
 } while (ptr->field_8);
 return v3;
}


// Function: binary_tree at 0x1159c
typedef struct struct_1_tree {
 unsigned int field_0;
 struct struct_0_tree *field_4;
 struct struct_1_tree *field_8;
} struct_1_tree;

typedef struct struct_0_tree {
 unsigned int field_0;
 void* field_4;
 struct struct_0_tree *field_8;
} struct_0_tree;

struct_1_tree * binary_tree(struct_1_tree *a0, void* a1)
{
 unsigned int v0; // r8
 struct_2_tree *v8; // r4
 unsigned int v10; // r8
 struct_1_tree *v11; // r8
 unsigned int v1; // r5
 struct_1_tree *ptr; // r6
 unsigned int v3; // r8
 struct_2_tree *result; // r4
 unsigned int v5; // r7
 struct_2_tree *p; // r4
 void* v7; // r0

 if (!a0)
 {
 if ((char)armg_calculate_condition(2, a0, 0, 0))
 return a0;
 }
 else
 {
 if ((char)armg_calculate_condition(2, a0, 0, 0))
 return v11;
 }
 v0 = 0;
 do
 {
 ptr = a0;
 v3 = v0;
 result = (struct_2_tree *)ptr->field_4;
 v5 = ptr->field_0;
 if (result)
 {
 v1 = 0;
 if ((char)armg_calculate_condition(2, (unsigned int)result, 0, 0))
 continue;
 }
 else
 {
 v1 = v1;
 if ((char)armg_calculate_condition(2, (unsigned int)result, 0, 0))
 continue;
 }
 do
 {
 p = result;
 v7 = (void *)binary_tree_sum(p->field_4, a1);
 v8 = p->field_8;
 v1 += (unsigned int)v7 + p->field_0;
 result = v8;
 } while (p->field_8);
 v5 += v1;
 v10 = v3 + v5;
 v0 = v10;
 a0 = ptr->field_8;
 } while (ptr->field_8);
 return (struct_1_tree *)(v3 + v5);
}


// Function: graph_traverse at 0x11600
typedef struct struct_1_graph {
 struct struct_0_graph *field_0;
 char padding_4[36];
 unsigned int field_28;
} struct_1_graph;

typedef struct struct_0_graph {
 unsigned int field_0;
 struct struct_0_graph *field_4;
} struct_0_graph;

typedef struct struct_2_graph {
 unsigned int field_0;
 struct struct_2_graph *field_4;
} struct_2_graph;

unsigned int graph_traverse(struct_1_graph *a0)
{
 unsigned int v0; // r0
 struct_1_graph *v1; // r1
 struct_1_graph *p; // r1
 struct_0_graph *ptr; // r3
 struct_1_graph *v4; // r1
 struct_0_graph *v5; // r3

 v0 = 0;
 if (a0->field_28 > 0)
 goto LABEL_11614;
 return 0;
LABEL_11614:
 v1 = a0;
 p = v1;
 do
 {
 ptr = *((struct_0_graph **)&p->padding_4[0]);
 v4 = p;
 if (*((struct_0_graph **)&p->padding_4[0]))
 {
 do
 {
 v5 = ptr->field_4;
 v0 += ptr->field_0;
 ptr = v5;
 } while (ptr->field_4);
 }
 p = v4 + 1;
 } while (p != v1 + a0->field_28);
 return v0;
}


extern unsigned int __glibc___stack_chk_guard;
extern char g_12798;

typedef struct struct_0_test {
 char field_0[4];
 struct struct_0_test *field_4;
} struct_0_test;

typedef struct struct_1_test {
 char field_0[4];
 struct struct_1_test *field_4;
} struct_1_test;

unsigned int test_composite_types(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v13; // r2
 struct_0_test *p; // r4
 struct_0_test *v15; // r4
 struct_1_test *ptr; // r3
 unsigned int v17; // r2
 struct_1_test *v18; // r3
 unsigned int v19; // r0
 unsigned int v0; // [bp-0x3c]
 char *v1; // [bp-0x38]
 char v2; // [bp-0x34], Other Possible Types: unsigned int
 char *v3; // [bp-0x30]
 char v4; // [bp-0x2c], Other Possible Types: unsigned int
 unsigned int result; // [bp-0x28]
 char v6; // [bp-0x24], Other Possible Types: unsigned int
 char *v7; // [bp-0x20]
 unsigned int flag1; // [bp-0x1c]
 char v9; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int flag2; // [bp-0x14]
 char *v11; // [bp-0x10]
 unsigned int v12; // [bp-0xc]

 v12 = __glibc___stack_chk_guard;
 puts("CMP-L2");
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
 p = (struct_0_test *)&v2;
 v1 = &v2;
 v3 = &v4;
 v2 = 20;
 v4 = 30;
 result = 0;
 do
 {
 v15 = p->field_4;
 v13 += *(unsigned int *)p->field_0;
 p = v15;
 } while (p->field_4);
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v13);
 ptr = (struct_1_test *)&v9;
 v7 = &v9;
 v17 = 10;
 flag1 = 0;
 flag2 = 0;
 v11 = &v6;
 v6 = 10;
 v9 = 20;
 do
 {
 v18 = ptr->field_4;
 v17 += *(unsigned int *)ptr->field_0;
 ptr = v18;
 } while (ptr->field_4);
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v17);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 v19 = __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 if ((v12 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v19;
}


// Function: __muldf3 at 0x11838
extern char __stack_chk_guard;

unsigned int __muldf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v2; // r4
 unsigned int v3; // r5
 unsigned int v12; // r5
 unsigned int v13; // cc_op
 unsigned int v14; // cc_dep1
 unsigned int v15; // cc_dep2
 unsigned int v16; // cc_ndep
 unsigned int v19; // r0
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
 unsigned int vvar_204;
 unsigned int vvar_209;
 unsigned int vvar_221;
 unsigned int vvar_73;
 unsigned int vvar_74;
 unsigned int vvar_472;
 unsigned int vvar_247;
 unsigned int vvar_86;
 unsigned int vvar_314;

 v2 = 2047 & a1 >> 20;
 if ((2047 & a1 >> 20))
 {
 v3 = 2047 & a1 >> 20;
 v8 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 5 : v4);
 v9 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 2047 & a3 >> 20 : v5);
 v10 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? a3 >> 19 & 1 : v6);
 v11 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? armg_calculate_flag_v(v4, v5, v6, v7) : v7);
 if (!armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_1184e;
LABEL_1184d:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_11852;
LABEL_11851:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_11a18();
 return sub_11a18();
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
 goto LABEL_1184d;
LABEL_1184e:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_11851;
LABEL_11852:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_11a18();
 return sub_11a18();
 }
 }
 v45 = v2 + v3;
 v46 = a1 ^ a3;
 v47 = a1 & ~(0xffe00000);
 v48 = a3 & ~(0xffe00000);
 if (a0 || v47 * 0x1000)
 {
 v49 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? 5 : v33);
 v50 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? a0 | v48 * 0x1000 : v34);
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
 v55 = ((uint64_t)a0 * (uint64_t)a2 >> 32) + v53 * a2 >> 32;
 vvar_204 = ((uint64_t)a0 * (uint64_t)a2 >> 32) + v53 * a2;
 v56 = (((uint64_t)v55 << 32) | (uint32_t)vvar_204) + a0 * v54 >> 32;
 vvar_209 = (((uint64_t)v55 << 32) | (uint32_t)vvar_204) + a0 * v54;
 v57 = (((uint64_t)0 << 32) | (uint32_t)v56) + v53 * v54 >> 32;
 v58 = (((uint64_t)0 << 32) | (uint32_t)v56) + v53 * v54;
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
 goto LABEL_1191c;
LABEL_118dc:
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
 goto LABEL_118dc;
LABEL_1191c:
 if ((char)armg_calculate_condition(194, v71, v72, v73))
 return 0;
 else
 return 0;
 }
 ;
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
 goto LABEL_1190a;
LABEL_11909:
	v78 |= v79 * 0x100000;
	if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
		return (v78 | (v79 ? 0x100000 : 0));
	return (v78 | (v79 ? 0x100000 : 0));
}
else
{
	v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
	v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
	v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
	v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
	if (armg_calculate_condition(v80 | 192, v81, v82, v83))
		goto LABEL_11909;
LABEL_1190a:
	v19 = 0;
	return (v78 | (v79 ? 0x100000 : 0));
}
 v68 = v78 | 0x100000;
 vvar_314 = 0;
 v61 = v0 - 1;
LABEL_1191b:
 v19 = 0;
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_1192a;
LABEL_11929:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_11930;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_11929;
LABEL_1192a:
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_11930;
 return v84;
 }
LABEL_11930:
 ;
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


// Function: sub_11a18 at 0x11a18
extern unsigned int __glibc___stack_chk_guard;
extern char __stack_chk_guard;

unsigned int sub_11a18(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int flag2, unsigned int flag3, unsigned int v31)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x14]
 unsigned int v6; // [bp-0x14]
 unsigned int v7; // [bp-0x14]
 unsigned int v8; // [bp-0x14]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x14]
 unsigned int v11; // [bp-0x14]
 unsigned int v15; // [bp-0x14]
 unsigned int v16; // [bp-0x14]
 unsigned int v17; // [bp-0x14]
 unsigned int v18; // [bp-0x14]
 unsigned int v19; // [bp-0x14]
 unsigned int v20; // [bp-0x14]
 unsigned int v21; // [bp-0x14]
 unsigned int v32; // [bp-0x14]
 unsigned int v33; // [bp-0x14]
 unsigned int v34; // [bp-0x14]
 unsigned int v35; // [bp-0x14]
 unsigned int v36; // [bp-0x14]
 unsigned int v37; // [bp-0x14]
 unsigned int v38; // [bp-0x14]
 unsigned int v39; // [bp-0x14]
 unsigned int v40; // [bp-0x14]
 unsigned int v41; // [bp-0x14]
 unsigned int v42; // [bp-0x14]
 unsigned int v43; // [bp-0x14]
 unsigned int v44; // [bp-0x14]
 unsigned int v47; // [bp-0x14]
 unsigned int v48; // [bp-0x14]
 unsigned int v49; // [bp-0x14]
 unsigned int v50; // [bp-0x14]
 unsigned int flag1; // [bp-0x14]
 unsigned int result; // [bp-0x14]
 unsigned int v23; // [bp-0x14]
 unsigned int v22; // [bp-0x14]
 unsigned int v26; // [bp-0x14]
 unsigned int v25; // [bp-0x14]

 v0 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 if ((flag2 ^ v0))
 {
 v6 = (armg_calculate_condition(21, v3, v4, v5) ? flag3 ^ v0 : v3);
 v7 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_11a44;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_11a44:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_11a4e;
LABEL_11a4d:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_11a52;
LABEL_11a51:
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
 goto LABEL_11a4d;
LABEL_11a4e:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_11a51;
LABEL_11a52:
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
 goto LABEL_11a7a;
LABEL_11a79:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_11a79;
LABEL_11a7a:
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
 goto LABEL_119f8;
 return a0;
 v22 = flag3;
 }
LABEL_119f8:
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


// Function: __mulsf3 at 0x11aa4
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
 goto LABEL_11ab2;
LABEL_11ab1:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_11ab6;
LABEL_11ab5:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_11bb8;
 }
 else
 {
 v1 = a3;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_11ab1;
LABEL_11ab2:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_11ab5;
LABEL_11ab6:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11bb8:
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_11be0;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_11be0:
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_11bea;
LABEL_11be9:
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_11bee;
LABEL_11bed:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_11bf2;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_11be9;
LABEL_11bea:
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_11bed;
LABEL_11bee:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_11bf2:
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_11bf8:
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
 goto LABEL_11bf8;
 }
 }
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
 goto LABEL_11b85;
 else
 goto LABEL_11b86;
 while (true)
 {
 v53 = v54;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_11b85:
 v54 = v53 * 2;
 if (!armg_calculate_condition(v49, v50, v51, v52))
 goto LABEL_11b8a;
 goto LABEL_11b89;
 }
 else
 {
LABEL_11b86:
 v54 = v53;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_11b89:
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (!armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_11b8e;
 goto LABEL_11b8d;
 }
 else
 {
LABEL_11b8a:
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_11b8d:
 v0 -= 1;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 else
 {
LABEL_11b8e:
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
 goto LABEL_11ba1;
 else
 goto LABEL_11ba2;
 while (true)
 {
 v55 = v56;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11ba1:
 v56 = v55 * 2;
 if (!armg_calculate_condition(v30, v31, v32, v33))
 goto LABEL_11ba6;
goto LABEL_11ba5;
	}
	else
	{
LABEL_11ba2:
		v56 = v55;
		if (armg_calculate_condition(v30, v31, v32, v33))
		{
LABEL_11ba5:
			v30 = 5;
			v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
			v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
			v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
			if (!armg_calculate_condition(5, v31, v32, v33))
				goto LABEL_11baa;
			goto LABEL_11ba9;
		}
		else
		{
LABEL_11ba6:
			v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
			v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
			v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
			if (armg_calculate_condition(v30, v31, v32, v33))
			{
LABEL_11ba9:
				v1 -= 1;
				if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
					break;
			}
			else
			{
LABEL_11baa:
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
					break;
			}
		}
	}
	;
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
 goto LABEL_11b14;
LABEL_11ad0:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < 0x800000)
 {
 v73 = v71 * 2;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_11aee;
LABEL_11aed:
 v74 = v73 | v72 >> 31;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_11af2;
LABEL_11af1:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_11aed;
LABEL_11aee:
 v74 = v73;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_11af1;
LABEL_11af2:
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
 goto LABEL_11ad0;
LABEL_11b14:
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
 goto LABEL_11b32;
LABEL_11b31:
 v80 |= v81 * 0x800000;
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_11b38;
 return v80 | v81 * 0x800000;
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_11b31;
LABEL_11b32:
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_11b38;
 return v80;
 ;
 }
LABEL_11b38:
 v75 = v80 | 0x800000;
 v72 = 0;
 v76 = v81 - 1;
 if ((char)armg_calculate_condition(194, v81, 1, 0))
 return (v80 | 0x800000) & 0x80000000 | 0x7f000000 | 0x800000;
 }
 if (armg_calculate_condition(209, v76, 25, 0))
 {
 v75 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_11b54;
 return v75 & 0x80000000;
 }
 else
 {
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_11b54;
 return v75;
 }
LABEL_11b54:
 if (v72 || (v75 << ((char)(32 - -(v76)) & 31) & (32 - (!(v76) & 255) & 255) - 32 >> 31) * 2)
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1);
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1) & ~((v75 << ((char)(32 - -(v76)) & 31) & (32 - (-(v76) & 255) & 255) - 32 >> 31) >> 31);
}


// Function: __aeabi_drsub at 0x11c3c
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}


// Function: __subdf3 at 0x11c44
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x11ef4
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
 unsigned int vvar_4;

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11f00;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11f00;
 return a0;
 }
LABEL_11f00:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 ;
}


// Function: __floatsidf at 0x11f18
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
 unsigned int vvar_4;

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11f24;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11f24;
 return a0;
 }
LABEL_11f24:
	v2 = v9;
	v1 = v10;
	v0 = 0;
	;
}


// Function: __extendsfdf2 at 0x11f40
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
 goto LABEL_11f56;
LABEL_11f55:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_11f5a;
LABEL_11f59:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11f60;
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
 goto LABEL_11f55;
LABEL_11f56:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_11f59;
LABEL_11f5a:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11f60;
 return v4;
 }
LABEL_11f60:
 if ((v3 & 16777215))
 goto LABEL_11f68;
 return v4;
LABEL_11f68:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11f74;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11f74;
 return v4;
 }
LABEL_11f74:
 v2 = 0;
 v1 = v44;
 v0 = v45;
 ;
}


// Function: __floatundidf at 0x11f88
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
 goto LABEL_11f90;
 return a0;
LABEL_11f90:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
;
 if (!a1 >> 22)
 return 0;
}


// Function: __aeabi_l2d at 0x11f9c
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_11fa4;
 return a0;
LABEL_11fa4:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_11fb8;
LABEL_11fb8:
 return 0;
}


// Function: __aeabi_frsub at 0x11ffc
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000);
 return __addsf3(a0 ^ 0x80000000);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x12008
extern unsigned int g_400000;

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
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | g_400000);
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
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | g_400000);
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
 goto LABEL_12144;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_12144;
 return a0;
 }
LABEL_12144:
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
 goto LABEL_12164;
 return a0 + 0x800000;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_12164;
 return a0;
 }
LABEL_12164:
 v41 = a0 & 0x80000000;
LABEL_12168:
 return v41 | 0x7f000000 | 0x800000;
 }
 v21 = result >> 24;
 v22 = (a3 >> 24) - v21;
 v23 = a3 >> 24;
 if (v21 < a3 >> 24)
 {
 v24 = v21 + v22;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_1202e;
LABEL_1202d:
 v25 = a0 ^ a1;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_12032;
LABEL_12031:
 v26 = v25 ^ a0;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_12036;
LABEL_12035:
 v27 = v26 ^ v25;
 if (!armg_calculate_condition(178, v23, v21, 0))
 goto LABEL_1203a;
 goto LABEL_12039;
 }
 else
 {
 v24 = v21;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_1202d;
LABEL_1202e:
 v25 = a1;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_12031;
LABEL_12032:
 v26 = a0;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_12035;
LABEL_12036:
 v27 = v25;
 if (armg_calculate_condition(178, v23, v21, 0))
 {
LABEL_12039:
 v22 = -(v22);
 }
 else
 {
LABEL_1203a:
 ;
 v22 = -(v22);
 }
 }
 if (25 >= v22)
 goto LABEL_12044;
 return v26;
LABEL_12044:
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
 goto LABEL_1210a;
LABEL_12109:
 v24 += 1;
 if (!armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_1210e;
LABEL_1210d:
 v22 -= 1;
 }
 else
 {
 v28 = v28;
 if (armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_12109;
LABEL_1210a:
 if (armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_1210d;
LABEL_1210e:
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
 goto LABEL_12168;
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
 goto LABEL_120d8;
 }
 else
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, 0x800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0x800000 : 0x800000), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0 : 0))))
 {
LABEL_120d8:
	v55 = (!v52 ? 32 : Clz(v52)) - 8;
	v56 = v53 - v55;
	if (v55 <= v53)
	{
 v58 = v57 + v56 * 0x800000;
 if (!armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_120ee;
LABEL_120ed:
 v56 = -(v56);
 return 0;
 }
 else
	{
	v57 = v52 << ((char)v55 & 31) & (v55 & 255) - 32 >> 31;
	if (armg_calculate_condition(178, v53, v55, 0))
		goto LABEL_120ed;
LABEL_120ee:
 v56 = v56;
 return (armg_calculate_condition(178, v53, v55, 0) ? (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) : v38 & 0x80000000 | (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) >> ((char)v56 & 31) & (v56 & 255) - 32 >> 31);
 }
 }
 }
 v54 = v49 + v47 * 0x800000 + (0x80000000 <= v48);
 if (v48 == 0x80000000)
 v54 &= 4294967294;
 return v54 | v38 & 0x80000000;
}


// Function: __aeabi_ui2f at 0x12198
unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_121b0;
 return a0;
LABEL_121b0:
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


// Function: __floatsisf at 0x121a0
int __floatsisf(unsigned int a0)
{
 return 0;
}


// Function: __floatundisf at 0x121c0
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
 goto LABEL_121c8;
 return a0;
LABEL_121c8:
 v7 = armg_calculate_flag_c(5, v0, v5, v6);
 v8 = armg_calculate_flag_v(5, v0, v5, v6);
 if (!a1)
 {
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_121f2;
LABEL_121f1:
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_121f6;
LABEL_121f5:
 return 0;
 }
 else
 {
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_121f1;
LABEL_121f2:
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_121f5;
LABEL_121f6:
 return 0;
 }
}


// Function: __aeabi_l2f at 0x121d0
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 if (a0 || a1)
 {
 if ((a1 & 0x80000000) >> 31)
 return 0;
 }
 return a0;
}


// Function: __fixsfsi at 0x1224c
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


