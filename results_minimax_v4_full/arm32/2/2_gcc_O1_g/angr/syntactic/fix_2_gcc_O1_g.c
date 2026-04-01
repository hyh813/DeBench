// Angr Decompilation of 2_gcc_O1_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_103c4 at 0x103c4
extern unsigned int g_23008;

int sub_103c4()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 goto g_23008;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10464 at 0x10464
void sub_10464()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x10524
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_int at 0x1052c
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: complex_callback at 0x10538
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1)
{
 *(ptr) = *(ptr) + 10;
 if (!*(a1))
 return 0;
 return *(a1) + 1;
}


// Function: process_char at 0x10554
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


// Function: process_short at 0x10568
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return a0 + a1 & 65535;
}


// Function: process_long at 0x10578
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x10580
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x10594
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


// Function: process_double at 0x105ac
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


// Function: process_ld at 0x105d8
void process_ld(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = __muldf3();
 __aeabi_dadd(v2, a1, 0, 0x3ff00000, *((int *)&v0), *((int *)&v1));
 return;
}


// Function: process_bool at 0x105fc
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // r0

 if (0 < a0)
 {
 v0 = a0 & 1;
 if (!armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10606;
LABEL_10605:
 v0 = 1 - v0;
 if (!armg_calculate_condition(210, a0, 0, 0))
 goto LABEL_1060a;
LABEL_10609:
 v0 = 0;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10605;
LABEL_10606:
 if (armg_calculate_condition(210, a0, 0, 0))
 goto LABEL_10609;
LABEL_1060a:
 ;
 return v0 & 1;
}


// Function: const_param at 0x10614
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x10620
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x10630
extern char g_11fa0;

int test_data_types_l1()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0xc]

 puts(0x11fa0);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d", 300);
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


// Function: array_1d_stack at 0x10794
unsigned int array_1d_stack(unsigned int *a0, unsigned int a1)
{
 unsigned int *v0; // r3
 unsigned int v1; // r0
 unsigned int *i; // r3
 unsigned int v3; // r0
 unsigned int *ptr; // r3
 unsigned int *v5; // r3
 unsigned int v6; // r0

 if (a1 <= 0)
 return 0;
 v0 = a0 + 1;
 v1 = 0;
 i = v0;
 do
 {
 v3 = v1;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v1 = v6;
 } while (i != &v0[a1]);
 return v3 + ptr[1];
}


// Function: array_string at 0x107c4
char* array_string(char *a0)
{
 char v0[2]; // r3
 char v1[2]; // r3
 char v2[2]; // r3

 if (!*(a0))
 return 0;
 v0[0] = a0[0];
 do
 {
 v2[0] = v0[1];
 v0[0] = v2[0];
 } while (v1[1]);
 return (char *)(1 + -0x1 * a0) + v1[0];
}


// Function: array_2d_stack at 0x107f4
int array_2d_stack(unsigned int ptr)
{
 unsigned int i; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int idx; // r3
 unsigned int v4; // r0

 i = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 idx = i;
 v4 = v2 + *((int *)(ptr + idx * 4));
 i = idx + 11;
 v1 = v4;
 } while (i != 110);
 return v2 + *((int *)(ptr + idx * 4));
}


// Function: array_3d at 0x10818
unsigned int array_3d(unsigned int *a0)
{
 unsigned int *i; // r1
 unsigned int v1; // r0
 unsigned int *cur; // r3

 i = a0 + 25;
 v1 = 0;
 do
 {
 cur = i + 5;
 do
 {
 v1 = v1 + cur[0] + cur[1] + cur[2] + cur[3] + cur[4];
 cur += 1;
 } while (cur != i);
 i += 5;
 } while (i != a0 + 150);
 return v1;
}


// Function: array_vla at 0x1086c
unsigned int array_vla(unsigned int a0, unsigned int *a1)
{
 unsigned int *v0; // r1
 unsigned int v1; // r0
 unsigned int *i; // r1
 unsigned int v3; // r0
 unsigned int *ptr; // r1
 unsigned int *v5; // r1
 unsigned int v6; // r0

 if (a0 <= 0)
 return 0;
 v0 = a1 + 1;
 v1 = 0;
 i = v0;
 do
 {
 v3 = v1;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v1 = v6;
 } while (i != &v0[a0]);
 return v3 + ptr[1];
}


// Function: array_pointer at 0x1089c
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int i; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int idx; // r3
 unsigned int v4; // r0

 if (a1 <= 0)
 return 0;
 i = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 idx = i;
 v4 = v2 + *((int *)(ptr + idx * 4));
 i = idx + 10;
 v1 = v4;
 } while (i != a1 * 10);
 return v2 + *((int *)(ptr + idx * 4));
}


// Function: pointer_array at 0x108d8
// Forward declaration for struct_0
typedef struct struct_0 {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_0;

unsigned int pointer_array(struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // r12
 unsigned int v1; // r12
 unsigned int v2; // r12
 struct_0 **v3; // r1
 unsigned int v4; // r3
 unsigned int v5; // r0
 struct_0 **idx; // r1
 struct_0 **v7; // r1

 if (a1 < 10)
 {
 v0 = a1;
 if (!armg_calculate_condition(162, v0, 10, 0))
 goto LABEL_108e2;
LABEL_108e1:
 v2 = 10;
 }
 else
 {
 v0 = v1;
 if (armg_calculate_condition(162, a1, 10, 0))
 goto LABEL_108e1;
LABEL_108e2:
 v2 = v0;
 }
 if (a1 <= 0)
 return 0;
 v3 = a0 + 1;
 v4 = 0;
 v5 = 0;
 do
 {
 idx = v3;
 v7 = idx + 1;
 if (idx[1])
 v5 += idx[1]->field_0;
 } while ((v4 += 1, v3 = v7, v4 < v2));
 return v5;
}


// Function: array_complex_index at 0x10920
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v1; // r12
 unsigned int vvar_22; // r64
 unsigned int vvar_24; // r64
 unsigned int vvar_5; // r64
 char v0; // [bp+0x0]

 v1 = *((int *)&v0);
 if (a3 < a1)
 {
 vvar_22 = 0;
 if (!armg_calculate_condition(162, a3, a1, 0))
 goto LABEL_10936;
LABEL_10935:
 vvar_24 = 1;
 }
 else
 {
 if (armg_calculate_condition(162, a3, a1, 0))
 goto LABEL_10935;
LABEL_10936:
 }
 if (!(vvar_5 == 0 && !((a3 | v1) >> 31)))
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


// Function: array_oob at 0x10964
unsigned int array_oob(unsigned int *a0, unsigned int a1)
{
 unsigned int *i; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int *ptr; // r3
 unsigned int *v4; // r3
 unsigned int v5; // r0

 if (a1 < 0)
 return 0;
 i = a0 + 1;
 v1 = 0;
 do
 {
 v2 = v1;
 v4 = i + 1;
 v5 = v2 + i[1];
 i = v4;
 v1 = v5;
 } while (i != &a0[a1]);
 return v2 + ptr[1];
}


// Function: test_array_types at 0x10994
typedef struct struct_0 {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_0;

typedef struct struct_1 {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_1;

extern unsigned int __glibc___stack_chk_guard;
extern char g_12120;

unsigned int test_array_types()
{
 unsigned int *j; // r0
 unsigned int l; // r1
 unsigned int *ptr; // r3
 struct_1 *p; // r2
 struct_0 *v31; // r12
 unsigned int k; // r3
 struct_1 *v49; // r2
 unsigned int v50; // r0
 unsigned int i; // r0
 unsigned int v33; // r1
 struct_0 *v34; // r2
 unsigned int v35; // r3
 struct_0 *addr; // r2
 struct_0 *v37; // r2
 unsigned int v0; // [bp-0x514]
 unsigned int v1; // [bp-0x510]
 unsigned int v2; // [bp-0x50c]
 unsigned int v3[1]; // [bp-0x508]
 unsigned int v4; // [bp-0x504]
 unsigned int v5; // [bp-0x500]
 unsigned int result[1]; // [bp-0x4fc]
 unsigned int v7; // [bp-0x4f8]
 unsigned int v8; // [bp-0x4f4]
 unsigned int v9; // [bp-0x4f0]
 unsigned int v10; // [bp-0x4ec]
 char *v11; // [bp-0x4e8]
 char *v12; // [bp-0x4e4]
 char *v13; // [bp-0x4e0]
 unsigned int flag2; // [bp-0x4dc]
 unsigned int flag3; // [bp-0x4d8]
 char v16; // [bp-0x4d4]
 char v17; // [bp-0x4c4]
 char v18; // [bp-0x47c]
 unsigned int flag1; // [bp-0x470]
 unsigned int v20; // [bp-0x448]
 unsigned int v21; // [bp-0x420]
 unsigned int v22; // [bp-0x3f8]
 unsigned int v23; // [bp-0x3d0]
 char v24; // [bp-0x3ac]
 char v25; // [bp-0x3a8]
 char v26; // [bp-0x218]
 char v27; // [bp-0x24]
 unsigned int v28; // [bp-0x1c]

 v28 = __glibc___stack_chk_guard;
 puts(0x12120);
 *((unsigned int [1])result) = 1;
 v7 = 2;
 v8 = 3;
 v9 = 4;
 v10 = 5;
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&result, 5));
 strncpy(&v27, "hello", 5);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", array_string(&v27));
 v31 = &v24;
 i = 0;
 do
 {
 v34 = v31;
 v35 = 0;
 do
 {
 addr = v34;
 if (i == v35)
 {
 v33 = v35;
 if (!armg_calculate_condition(18, i, v35, 0))
 goto LABEL_10a4a;
 goto LABEL_10a49;
 }
 else if (armg_calculate_condition(18, i, v35, 0))
 {
LABEL_10a49:
 v33 = 0;
 }
 else
 {
LABEL_10a4a:
 }
 } while ((v37 = addr + 4, addr->field_4 = v33, v35 += 1, v34 = addr + 4, v35 != 10));
 i += 1;
 v31 += 5;
 } while (i != 10);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v25));
 j = &v26;
 do
 {
 l = 0;
 ptr = j;
 do
 {
 ptr[0] = 1;
 ptr[1] = 1;
 ptr[2] = 1;
 ptr[3] = 1;
 ptr[4] = 1;
 l += 1;
 ptr += 1;
 } while (l != 5);
 j += 5;
 } while (j != &v27);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", array_3d(&v26));
 *((unsigned int [1])v3) = 10;
 v4 = 20;
 v5 = 30;
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, &v3));
 flag1 = 0;
 v20 = 10;
 v21 = 20;
 v22 = 30;
 v23 = 40;
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer(&flag1, 5));
 v0 = 10;
 v1 = 20;
 v2 = 30;
 flag2 = 0;
 flag3 = 0;
 memset(&v16, 0, 20);
 v11 = &v0;
 v12 = &v1;
 v13 = &v2;
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array(&v11, 3));
 p = &v17;
 k = 0;
 do
 {
 v49 = &p->field_4;
 p->field_4 = k;
 k += 1;
 p = v49;
 } while (k != 20);
 v50 = __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v18));
 if ((v28 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v50;
}


// Function: ptr_single at 0x10c28
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x10c34
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

int ptr_double(struct_0 **a0)
{
 return *(a0)->field_0 + 5;
}


// Function: ptr_triple at 0x10c44
typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

int ptr_triple(struct_1 **a0)
{
 return *(a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x10c58
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
 v5 = v2 + *(a0);
 v0 += 1;
 a0 = v4;
 v1 = v5;
 } while (i != v0);
 return v2 + *(ptr);
}


// Function: ptr_offset at 0x10c8c
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x10c94
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x10ca0
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


// Function: ptr_const at 0x10cc0
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x10ccc
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x10ce0
int ptr_func_simple(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // r0

 v0 = a0(a1);
 return a0(a1);
}


// Function: ptr_func_complex at 0x10cf4
extern unsigned int __glibc___stack_chk_guard;

unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v4; // lr
 unsigned int v5; // r0
 unsigned int v0; // [bp-0x14]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 v0 = "test";
 result = 0;
 v5 = a0(a1, &v0, 0, a0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: ptr_cast at 0x10d58
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x10d60
int opaque_handle_create()
{
 unsigned int v0; // r0

 return v0;
}


// Function: opaque_handle_op at 0x10d64
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x10d6c
typedef struct struct_0 {
 char field_0;
} struct_0;

extern unsigned int __glibc___stack_chk_guard;
extern char g_1224c;

unsigned int test_pointer_types()
{
 unsigned int v14; // r0
 unsigned int v0; // [bp-0x38]
 char *v1; // [bp-0x34]
 struct_0 **v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int result[1]; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]

 v9 = __glibc___stack_chk_guard;
 puts(0x1224c);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v0 = 5;
 v1 = &v0;
 v2 = &v1;
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", ptr_triple(&v2));
 *((unsigned int [1])result) = 1;
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
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v3));
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 v14 = __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 if ((v9 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v14;
}


// Function: struct_simple at 0x10f3c
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x10f54
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int ptr[3]; // r3
 unsigned int v2; // r0
 unsigned int v3; // r2
 unsigned int v4; // r0

 if (a1 <= 0)
 return 0;
 v0 = 0;
 ptr = a0;
 do
 {
 v2 = v0;
 v4 = v2 + ptr[0] + ptr[1] + ptr[2];
 ptr += 1;
 v0 = v4;
 } while (ptr != &a0[3 * a1]);
 return v2 + v3;
}


// Function: struct_nested at 0x10f9c
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x10fac
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x10fbc
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *idx)
{
 unsigned int v0; // r0

 v0 = idx->field_4->field_0;
 if (!idx->field_4)
 v0 = 0;
 return idx->field_0 + v0;
}


// Function: struct_bitfields at 0x10fd8
int struct_bitfields(void* ptr)
{
 unsigned int v0; // r2

 v0 = *((char *)ptr);
 return (v0 & 1) + (v0 * 0x20000000 >> 30) + (v0 * 0x4000000 >> 29) + (*((short *)ptr) >> 6);
}


// Function: union_type at 0x10ffc
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


// Function: union_array at 0x1102c
unsigned int union_array(unsigned int *a0, unsigned int a1)
{
 unsigned int *v0; // r3
 unsigned int v1; // r0
 unsigned int *i; // r3
 unsigned int v3; // r0
 unsigned int *ptr; // r3
 unsigned int *v5; // r3
 unsigned int v6; // r0

 if (a1 <= 0)
 return 0;
 v0 = a0 + 1;
 v1 = 0;
 i = v0;
 do
 {
 v3 = v1;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v1 = v6;
 } while (i != &v0[a1]);
 return v3 + ptr[1];
}


// Function: enum_type at 0x1105c
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x11068
unsigned int enum_switch(unsigned int a0)
{
 return 4294967197;
}


// Function: struct_func_ptr at 0x110ac
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

int struct_func_ptr(struct_0 *a0)
{
 unsigned int v0; // r0

 v0 = a0->field_4(a0->field_0);
 return a0->field_4(a0->field_0);
}


// Function: linked_list at 0x110c0
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int linked_list(struct_0 *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_0 *ptr; // r3
 unsigned int v3; // r0

 if (!a0)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 ptr = a0;
 v3 = v1 + ptr->field_0;
 a0 = ptr->field_4;
 v0 = v3;
 } while (ptr->field_4);
 return v1 + ptr->field_0;
}


// Function: doubly_linked_list at 0x110ec
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int doubly_linked_list(struct_0 *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_0 *ptr; // r3
 unsigned int v3; // r0

 if (!a0)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 ptr = a0;
 v3 = v1 + ptr->field_0;
 a0 = ptr->field_4;
 v0 = v3;
 } while (ptr->field_4);
 return v1 + ptr->field_0;
}


// Function: binary_tree_sum at 0x11118
unsigned int binary_tree_sum(unsigned int *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (!a0)
 return 0;
 v0 = binary_tree_sum(a0[1]);
 v1 = binary_tree_sum(a0[2]);
 return v0 + *(a0) + v1;
}


// Function: binary_tree at 0x1114c
unsigned int binary_tree()
{
 unsigned int *v0; // r0
 unsigned int v1; // r0

 v1 = binary_tree_sum(v0);
 return binary_tree_sum(v0);
}


// Function: graph_traverse at 0x11158
typedef struct struct_1 {
 struct struct_0 *field_0;
 char padding_4[36];
 unsigned int field_28;
} struct_1;

typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

typedef struct struct_2 {
 unsigned int field_0;
 struct struct_2 *field_4;
} struct_2;

unsigned int graph_traverse(struct_1 *a0)
{
 struct_1 *v0; // r1
 unsigned int v1; // r0
 struct_1 *p; // r1
 struct_0 *ptr; // r3
 struct_1 *v4; // r1

 if (a0->field_28 <= 0)
 return 0;
 v0 = &a0->padding_4;
 v1 = 0;
 p = v0;
 do
 {
 ptr = *((int *)&p->padding_4[0]);
 v4 = &p->padding_4;
 if (*((int *)&p->padding_4[0]))
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 } while ((p = v4, p != v0 + a0->field_28 * 4));
 return v1;
}


// Function: test_composite_types at 0x111a4
extern unsigned int __glibc___stack_chk_guard;
extern char g_123f4;

unsigned int test_composite_types()
{
 unsigned int v50; // r0
 unsigned int v0; // [bp-0xdc]
 unsigned int flag1; // [bp-0xd8]
 unsigned int v2; // [bp-0xd4]
 char *v3; // [bp-0xd0]
 unsigned int v4; // [bp-0xcc]
 unsigned int flag12; // [bp-0xc8]
 unsigned int v6; // [bp-0xc4]
 unsigned int v7; // [bp-0xc0]
 unsigned int flag7; // [bp-0xbc]
 unsigned int flag8; // [bp-0xb8]
 unsigned int result; // [bp-0xb4]
 unsigned int v11; // [bp-0xb0]
 unsigned int v12; // [bp-0xac]
 unsigned int v13[1]; // [bp-0xa8]
 unsigned int flag5; // [bp-0xa4]
 unsigned int flag6; // [bp-0xa0]
 unsigned int v16; // [bp-0x9c]
 unsigned int v17; // [bp-0x98]
 unsigned int v18; // [bp-0x94]
 unsigned int flag9[1]; // [bp-0x90]
 unsigned int flag10; // [bp-0x8c]
 unsigned int flag11; // [bp-0x88]
 unsigned int v22; // [bp-0x84]
 unsigned int v23; // [bp-0x80]
 unsigned int v24; // [bp-0x7c]
 unsigned int v25; // [bp-0x78]
 char *v26; // [bp-0x74]
 char v27; // [bp-0x70], Other Possible Types: unsigned int
 char *v28; // [bp-0x6c]
 char v29; // [bp-0x68], Other Possible Types: unsigned int
 unsigned int flag2; // [bp-0x64]
 unsigned int v31; // [bp-0x60]
 char *v32; // [bp-0x5c]
 unsigned int flag3; // [bp-0x58]
 char v34; // [bp-0x54], Other Possible Types: unsigned int
 unsigned int flag4; // [bp-0x50]
 char *v36; // [bp-0x4c]
 char *v37; // [bp-0x48]
 char v38; // [bp-0x44]
 unsigned int v39; // [bp-0x20]
 unsigned int v40; // [bp-0x1c]

 v40 = __glibc___stack_chk_guard;
 puts(0x123f4);
 result = 1;
 v11 = 2;
 v12 = 3;
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", struct_simple(&result));
 *(flag9) = 1;
 flag10 = 1;
 flag11 = 1;
 v22 = 2;
 v23 = 2;
 v24 = 2;
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", struct_array(&flag9, 2));
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v0 = 20;
 flag1 = 0;
 v2 = 10;
 v3 = &v0;
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
 v6 = 10;
 v7 = process_int;
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v6));
 v25 = 10;
 v26 = &v27;
 v27 = 20;
 v28 = &v29;
 v29 = 30;
 flag2 = 0;
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", linked_list(&v25));
 v31 = 10;
 v32 = &v34;
 flag3 = 0;
 v34 = 20;
 flag4 = 0;
 v36 = &v31;
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v31));
 *((unsigned int [1])v13) = 100;
 flag5 = 0;
 flag6 = 0;
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v13));
 flag7 = 1;
 flag8 = 0;
 memset(&v38, 0, 36);
 v37 = &flag7;
 v39 = 2;
 v50 = __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v37));
 if ((v40 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v50;
}


// Function: main at 0x11478
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: __muldf3 at 0x11494
extern char __stack_chk_guard;

 unsigned int __muldf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11)
{
 unsigned int v2; // r4
 unsigned int v3; // r5
 unsigned long long vvar_204;
 unsigned long long vvar_209;
 unsigned long long vvar_221;
 unsigned long long vvar_74;
 unsigned long long vvar_73;
 unsigned long long vvar_472;
 unsigned long long vvar_247;
 unsigned long long vvar_86;
 unsigned long long vvar_314;
 unsigned long long vvar_73_val;
 unsigned long long vvar_74_val;
 unsigned long long vvar_221_val;
 unsigned long long vvar_86_val;
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
 goto LABEL_114aa;
LABEL_114a9:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_114ae;
LABEL_114ad:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_11674();
 return sub_11674();
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
 goto LABEL_114a9;
LABEL_114aa:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_114ad;
LABEL_114ae:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_11674();
 return sub_11674();
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
 v55 = (0 CONCAT a0 * a2 >> 32) + v53 * a2 >> 32;
 vvar_204 = (0 CONCAT a0 * a2 >> 32) + v53 * a2;
 v56 = (v55 CONCAT vvar_204) + a0 * v54 >> 32;
 vvar_209 = (v55 CONCAT vvar_204) + a0 * v54;
 v57 = (0 CONCAT v56) + v53 * v54 >> 32;
 v58 = (0 CONCAT v56) + v53 * v54;
 if (a0 * a2)
 vvar_221 = vvar_209 | 1;
 v60 = 0;
 v61 = v45 - 1023 - (0x200 > v57);
 vvar_74 = vvar_73;
 unsigned long long vvar_472;
 unsigned long long vvar_247;
 unsigned long long vvar_86;
 unsigned long long vvar_314;
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
 goto LABEL_11578;
LABEL_11538:
 if (vvar_86{r64|4b} == 0x80000000)
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
 goto LABEL_11538;
LABEL_11578:
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
 goto LABEL_11566;
LABEL_11565:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_1156c;
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
 goto LABEL_11565;
LABEL_11566:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_1156c;
 return a0 | a2;
 }
LABEL_1156c:
 v68 = v78 | 0x100000;
 vvar_314{r64|4b} = 0;
 v61 = v0 - 1;
LABEL_11578:
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 }
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_11586;
LABEL_11585:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_1158c;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_11585;
LABEL_11586:
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_1158c;
 return v84;
 }
LABEL_1158c:
 v85 = -(v1);
 v86 = v85 - 32;
 if (32 > v85)
 {
 v87 = v86 + 12;
 if (!((char)armg_calculate_condition(193, v86, 12, 0)))
 {
 v88 = (char)v87 + 20;
 if (vvar_86{r64|4b} || (v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) * 2)
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31) & ~((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 }
 else
 {
 if (!vvar_86{r64|4b} && !(v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) * 2)
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31) & ~((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 }
 }
 else if (!vvar_86{r64|4b} && !(v84 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) && !(v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) * 2)
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31) & ~((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
 else
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
}


// Function: sub_11674 at 0x11674
extern char __stack_chk_guard;

unsigned int sub_11674(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
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
 goto LABEL_116a0;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_116a0:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_116aa;
LABEL_116a9:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_116ae;
LABEL_116ad:
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
 goto LABEL_116a9;
LABEL_116aa:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_116ad;
LABEL_116ae:
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
 goto LABEL_116d6;
LABEL_116d5:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_116d5;
LABEL_116d6:
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
 while (1)
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
 goto LABEL_11654;
 return a0;
 v22 = flag3;
 }
LABEL_11654:
 while (1)
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


// Function: __mulsf3 at 0x11700
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
 goto LABEL_1170e;
LABEL_1170d:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_11712;
LABEL_11711:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_11814;
 }
 else
 {
 v1 = a3;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_1170d;
LABEL_1170e:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_11711;
LABEL_11712:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11814:
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_1183c;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_1183c:
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_11846;
LABEL_11845:
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_1184a;
LABEL_11849:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_1184e;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_11845;
LABEL_11846:
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_11849;
LABEL_1184a:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_1184e:
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_11854:
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
 goto LABEL_11854;
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
 goto LABEL_117e1;
 else
 goto LABEL_117e2;
 while (1)
 {
 v53 = v54;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_117e1:
 v54 = v53 * 2;
 if (!armg_calculate_condition(v49, v50, v51, v52))
 goto LABEL_117e6;
 goto LABEL_117e5;
 }
 else
 {
LABEL_117e2:
 v54 = v53;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_117e5:
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (!armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_117ea;
 goto LABEL_117e9;
 }
 else
 {
LABEL_117e6:
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_117e9:
 v0 -= 1;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 else
 {
LABEL_117ea:
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
 goto LABEL_117fd;
 else
 goto LABEL_117fe;
 while (1)
 {
 v55 = v56;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_117fd:
 v56 = v55 * 2;
 if (!armg_calculate_condition(v30, v31, v32, v33))
 goto LABEL_11802;
 goto LABEL_11801;
 }
 else
 {
LABEL_117fe:
 v56 = v55;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11801:
 v30 = 5;
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_11806;
 goto LABEL_11805;
 }
 else
 {
LABEL_11802:
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_11805:
 v1 -= 1;
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 else
 {
LABEL_11806:
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
 goto LABEL_11770;
LABEL_1172c:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < 0x800000)
 {
 v73 = v71 * 2;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_1174a;
LABEL_11749:
 v74 = v73 | v72 >> 31;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_1174e;
LABEL_1174d:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_11749;
LABEL_1174a:
 v74 = v73;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_1174d;
LABEL_1174e:
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
 goto LABEL_1172c;
LABEL_11770:
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
 goto LABEL_1178e;
LABEL_1178d:
 v80 |= v81 * 0x800000;
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_11794;
 return v80 | v81 * 0x800000;
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_1178d;
LABEL_1178e:
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_11794;
 return v80;
 }
LABEL_11794:
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
 goto LABEL_117b0;
 return v75 & 0x80000000;
 }
 else
 {
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_117b0;
 return v75;
 }
LABEL_117b0:
 if (v72 || (v75 << ((char)(32 - -(v76)) & 31) & (32 - (!(v76) & 255) & 255) - 32 >> 31) * 2)
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1);
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1) & ~((v75 << ((char)(32 - -(v76)) & 31) & (32 - (-(v76) & 255) & 255) - 32 >> 31) >> 31);
}


// Function: __aeabi_drsub at 0x11898
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}


// Function: __subdf3 at 0x118a0
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x11b50
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
 {
 unsigned int vvar_4 = 0;
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return v0;
 }
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 {
 unsigned int vvar_4 = 0;
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return v0;
 }
 return a0;
 }
}


// Function: __floatsidf at 0x11b74
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
 unsigned long long vvar_4;
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11b80;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11b80;
 return a0;
 }
LABEL_11b80:
 v2 = (unsigned int)vvar_4;
 v1 = v9;
 v0 = v10;
}


// Function: __extendsfdf2 at 0x11b9c
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
 unsigned long long vvar_32; // 64-bit variable
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
 goto LABEL_11bb2;
LABEL_11bb1:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_11bb6;
LABEL_11bb5:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11bbc;
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
 goto LABEL_11bb1;
LABEL_11bb2:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_11bb5;
LABEL_11bb6:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11bbc;
 return v4;
 }
LABEL_11bbc:
 if ((v3 & 16777215))
 goto LABEL_11bc4;
 return v4;
LABEL_11bc4:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11bd0;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_11bd0;
 return v4;
 }
LABEL_11bd0:
 v2 = vvar_32{r64|4b};
 v1 = v44;
 v0 = v45;
}


// Function: __floatundidf at 0x11be4
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
 goto LABEL_11bec;
 return a0;
LABEL_11bec:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_0x11990;
}


// Function: __aeabi_l2d at 0x11bf8
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_11c00;
 return a0;
LABEL_11c00:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x11c14;
}


// Function: __aeabi_frsub at 0x11c58
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000);
 return __addsf3(a0 ^ 0x80000000);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x11c64
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
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | &g_400000);
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
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | &g_400000);
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
 goto LABEL_11da0;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_11da0;
 return a0;
 }
LABEL_11da0:
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
 goto LABEL_11dc0;
 return a0 + 0x800000;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_11dc0;
 return a0;
 }
LABEL_11dc0:
 v41 = a0 & 0x80000000;
LABEL_11dc4:
 return v41 | 0x7f000000 | 0x800000;
 }
 v21 = result >> 24;
 v22 = (a3 >> 24) - v21;
 v23 = a3 >> 24;
 if (v21 < a3 >> 24)
 {
 v24 = v21 + v22;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11c8a;
LABEL_11c89:
 v25 = a0 ^ a1;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11c8e;
LABEL_11c8d:
 v26 = v25 ^ a0;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11c92;
LABEL_11c91:
 v27 = v26 ^ v25;
 if (!armg_calculate_condition(178, v23, v21, 0))
 goto LABEL_11c96;
 goto LABEL_11c95;
 }
 else
 {
 v24 = v21;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11c89;
LABEL_11c8a:
 v25 = a1;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11c8d;
LABEL_11c8e:
 v26 = a0;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_11c91;
LABEL_11c92:
 v27 = v25;
 if (armg_calculate_condition(178, v23, v21, 0))
 {
LABEL_11c95:
 v22 = -(v22);
 }
 else
 {
LABEL_11c96:
 }
 }
 if (25 >= v22)
 goto LABEL_11ca0;
 return v26;
LABEL_11ca0:
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
 goto LABEL_11d66;
LABEL_11d65:
 v24 += 1;
 if (!armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_11d6a;
LABEL_11d69:
 v22 -= 1;
 }
 else
 {
 v28 = v28;
 if (armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_11d65;
LABEL_11d66:
 if (armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_11d69;
LABEL_11d6a:
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
 goto LABEL_11dc4;
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
 goto LABEL_11d34;
 }
 else
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, 0x800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0x800000 : 0x800000), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0 : 0))))
 {
LABEL_11d34:
 v55 = (!v52 ? 32 : Clz(v52)) - 8;
 v56 = v53 - v55;
 if (v55 <= v53)
 {
 v58 = v57 + v56 * 0x800000;
 if (!armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_11d4a;
LABEL_11d49:
 v56 = -(v56);
 }
 else
 {
 v57 = v52 << ((char)v55 & 31) & (v55 & 255) - 32 >> 31;
 if (armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_11d49;
LABEL_11d4a:
 }
 return (armg_calculate_condition(178, v53, v55, 0) ? (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) : v38 & 0x80000000 | (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) >> ((char)v56 & 31) & (v56 & 255) - 32 >> 31);
 }
 }
 }
 v54 = v49 + v47 * 0x800000 + (0x80000000 <= v48);
 if (v48 == 0x80000000)
 v54 &= 4294967294;
 return v54 | v38 & 0x80000000;
}


// Function: __aeabi_ui2f at 0x11df4
unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_11e0c;
 return a0;
LABEL_11e0c:
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


// Function: __floatsisf at 0x11dfc
int __floatsisf(unsigned int a0)
{
}


// Function: __floatundisf at 0x11e1c
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
 goto LABEL_11e24;
 return a0;
LABEL_11e24:
 v7 = armg_calculate_flag_c(5, v0, v5, v6);
 v8 = armg_calculate_flag_v(5, v0, v5, v6);
 if (!a1)
 {
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11e4e;
LABEL_11e4d:
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11e52;
LABEL_11e51:
 }
 else
 {
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11e4d;
LABEL_11e4e:
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_11e51;
LABEL_11e52:
 }
}


// Function: __aeabi_l2f at 0x11e2c
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 if (a0 || a1)
 goto LABEL_11e34;
 return a0;
LABEL_11e34:
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x11e44;
}


// Function: __fixsfsi at 0x11ea8
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


