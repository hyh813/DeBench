// Angr Decompilation of 2_gcc_O0_no_g
// Platform: ARMEL


#define true 1
#define false 0
#define NULL ((void*)0)



// Function: sub_103c0 at 0x103c0
extern unsigned int g_24008;

int sub_103c0()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 // goto g_24008; // Removed invalid goto to variable
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10460 at 0x10460
void sub_10460()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x10520
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_char at 0x10548
int process_char(char a0)
{
 if (a0 > 64 && 90 >= a0)
 return a0 + 32;
 return a0;
}


// Function: process_short at 0x10598
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return a0 + a1 & 65535;
}


// Function: process_int at 0x105e4
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: process_long at 0x10610
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x10638
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x10690
int process_float(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = __mulsf3(a0, 0x3fc00000);
 return __addsf3(v0, 0x3f000000);
}


// Function: process_double at 0x106cc
int process_double(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r1
 unsigned int v3; // r0
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v3 = __aeabi_ddiv(a0, a1);
 v2 = __aeabi_dadd(a0, a1);
 return __aeabi_dadd(v3, v2);
}


// Function: process_ld at 0x10730
int process_ld(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r0
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __muldf3(a0, a1, a0, a1, a0, a1, &v1, *((int *)&v0));
 v4 = __aeabi_dadd(v2, v3, 0, 0x3ff00000);
 return __aeabi_dadd(v2, v3, 0, 0x3ff00000);
}


// Function: process_bool at 0x10790
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // r3

 if (a0 > 0 && !((char)a0 & 1))
 v0 = 1;
 else
 v0 = 0;
 return v0 & 1 & 255;
}


// Function: const_param at 0x107e0
int const_param(unsigned int *a0)
{
 return *a0 + 10;
}


// Function: volatile_access at 0x1080c
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = *(ptr);
 v1 = *(ptr);
 return v0 + v1;
}


// Function: test_data_types_l1 at 0x10850
extern unsigned int __glibc___stack_chk_guard;
extern char g_133b0;

unsigned int test_data_types_l1()
{
 unsigned int v14; // r0
 unsigned int v8; // r1
 unsigned int v0[1]; // [bp-0x14]
 unsigned int v1[1]; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 puts(0x133b0);
 printf("DT-L1-01 (process_char): %c\n", process_char(65));
 printf("DT-L1-01 (process_char): %c\n", process_char(98));
 printf("DT-L1-02 (process_short): %d\n", process_short(100, 200));
 printf("DT-L1-03 (process_int): %d\n", process_int(5));
 printf("DT-L1-04 (process_long): %ld\n", process_long(100));
 process_ll(100, 0);
 printf("DT-L1-05 (process_ll): %lld\n", v8);
 __extendsfdf2(process_float(0x40000000));
 printf("DT-L1-06 (process_float): %.2f\n", v8);
 process_double(0, 0x40100000);
 printf("DT-L1-07 (process_double): %.2f\n", v8);
 process_ld(0, 0x40080000);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4));
 printf("DT-L1-09 (process_bool): %d\n", process_bool(3));
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4294967294));
 *((unsigned int *)v0) = 5;
 printf("DT-L1-10 (const_param): %d\n", const_param(&v0));
 *((unsigned int *)v1) = 10;
 v14 = printf("DT-L1-11 (volatile_access): %d\n", volatile_access(&v1));
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v14;
 __stack_chk_fail(); /* do not return */
}


// Function: array_1d_stack at 0x10a5c
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: array_string at 0x10ad4
unsigned int array_string(unsigned int a0)
{
 unsigned int i; // [bp-0xc]

 for (i = 0; *((char *)(a0 + i)); i += 1);
 return i;
}


// Function: array_2d_stack at 0x10b28
unsigned int array_2d_stack(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 0;
 for (v1 = 0; v1 <= 9; v1 += 1)
 {
 v0 += *((int *)(a0 + v1 * 40 + v1 * 4));
 }
 return v0;
}


// Function: array_3d at 0x10bac
unsigned int array_3d(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 unsigned int j; // [bp-0x10]
 unsigned int k; // [bp-0xc]

 v0 = 0;
 for (i = 0; i <= 4; i += 1)
 {
 for (j = 0; j <= 4; j += 1)
 {
 for (k = 0; k <= 4; k += 1)
 {
 v0 += *((int *)(a0 + i * 100 + (j * 5 + k) * 4));
 }
 }
 }
 return v0;
}


// Function: array_vla at 0x10c94
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]

 v0 = 0;
 for (idx = 0; idx < a0; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: array_pointer at 0x10d0c
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 40));
 }
 return v0;
}


// Function: pointer_array at 0x10d94
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x14]
 unsigned int idx; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = a1;
 v1 = 0;
 if (10 <= v0)
 v0 = 10;
 v3 = v0;
 for (idx = 0; idx < v3; idx += 1)
 {
 if (*((int *)(a0 + idx * 4)))
 v1 += *((int *)*((int *)(a0 + idx * 4)));
 }
 return v1;
}


// Function: array_complex_index at 0x10e40
unsigned int array_complex_index(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r3
 unsigned int v2; // r2
 char v0; // [bp+0x0]

 if (v1 >= 0 && a1 > v1 && *((int *)&v0) >= 0 && *((int *)&v0) < v2)
 return *((int *)(a0 + (*((int *)&v0) * a1 + v1) * 4));
 return 4294967295;
}


// Function: array_oob at 0x10ed0
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]

 v0 = 0;
 for (idx = 0; idx <= a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: test_array_types at 0x10f48
extern unsigned int __glibc___stack_chk_guard;
extern char g_13530;

unsigned int test_array_types()
{
 unsigned int v31; // r2
 unsigned int v38; // r0
 unsigned int v0; // [bp-0x528]
 unsigned int v1; // [bp-0x520]
 unsigned int v2; // [bp-0x51c]
 unsigned int v3; // [bp-0x518]
 unsigned int i; // [bp-0x514]
 unsigned int m; // [bp-0x510]
 unsigned int j; // [bp-0x50c]
 unsigned int n; // [bp-0x508]
 unsigned int i0; // [bp-0x504]
 unsigned int index; // [bp-0x500]
 unsigned int idx; // [bp-0x4fc]
 unsigned int v11; // [bp-0x4f8]
 unsigned int v12; // [bp-0x4f4]
 unsigned int v13; // [bp-0x4f0]
 unsigned int flag1; // [bp-0x4ec]
 unsigned int v15; // [bp-0x4e8]
 unsigned int v16; // [bp-0x4e4]
 unsigned int v17; // [bp-0x4e0]
 unsigned int v18; // [bp-0x4dc]
 char *v20; // [bp-0x4d8]
 char *v21; // [bp-0x4d4]
 char *v22; // [bp-0x4d0]
 unsigned long v23; // [bp-0x4b0]
 unsigned long v24; // [bp-0x460]
 unsigned long v25; // [bp-0x398]
 unsigned long v26; // [bp-0x208]
 char v27[8]; // [bp-0x14]
 unsigned int v28; // [bp-0xc]

 v28 = __glibc___stack_chk_guard;
 puts(0x13530);
 flag1 = 1;
 v15 = 2;
 v16 = 3;
 v17 = 4;
 v18 = 5;
 printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&flag1, 5));
 strncpy(v27, "hello", 5);
 printf("ARR-L1-02 (array_string): %d\n", array_string(&v27));
 for (i = 0; i <= 9; i += 1)
 {
 for (m = 0; m <= 9; m += 1)
 {
 if (i == m)
 v31 = i;
 else
 v31 = 0;
 (&v25)[10 * i + m] = v31;
 }
 }
 printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v25));
 for (j = 0; j <= 4; j += 1)
 {
 for (n = 0; n <= 4; n += 1)
 {
 for (i0 = 0; i0 <= 4; i0 += 1)
 {
 (&v26)[25 * j + 5 * n + i0] = 1;
 }
 }
 }
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v26));
 v11 = 10;
 v12 = 20;
 v13 = 30;
 printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, &v11));
 for (index = 0; index <= 4; index += 1)
 {
 (&v24)[10 * index] = index * 10;
 }
 printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(&v24, 5));
 v1 = 10;
 v2 = 20;
 v3 = 30;
 memset(&v20, 0, 40);
 v20 = &v1;
 v21 = &v2;
 v22 = &v3;
 printf("ARR-L2-03 (pointer_array): %d\n", pointer_array(&v20, 3));
 for (idx = 0; idx <= 19; idx += 1)
 {
 (&v23)[idx] = idx;
 }
 v0 = 3;
 v38 = printf("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(&v23, 5));
 if (!(v28 ^ __glibc___stack_chk_guard))
 return v38;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_single at 0x11378
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x113a4
typedef struct struct_ptr_double {
 unsigned int field_0;
} struct_ptr_double;

int ptr_double(struct_ptr_double **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x113d4
typedef struct struct_ptr_triple_1 {
 struct struct_ptr_triple_0 *field_0;
} struct_ptr_triple_1;

typedef struct struct_ptr_triple_0 {
 unsigned int field_0;
} struct_ptr_triple_0;

int ptr_triple(struct_ptr_triple_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x11408
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int *cur; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 cur = a0;
 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *(cur);
 cur += 1;
 }
 return v1;
}


// Function: ptr_offset at 0x11480
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x114b8
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return (a0 - a1) >> 2;
}


// Function: ptr_void at 0x114ec
int ptr_void(void* a0, unsigned int a1)
{
 return (a1 ? (a1 != 1 ? 4294967295 : *((char *)a0)) : *((int *)a0));
}


// Function: ptr_const at 0x11544
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x11570
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Function: ptr_func_simple at 0x115ac
int ptr_func_simple(int (*a0)(unsigned int), unsigned int a1)
{
 unsigned int v0; // r0

 v0 = a0(a1);
 return a0(a1);
}


// Function: ptr_func_complex at 0x115dc
extern unsigned int __glibc___stack_chk_guard;

unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x14]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 v0 = "test";
 result = 0;
 v3 = a0(a1, &v0, &v0, a0, a1, a0);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v3;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_cast at 0x11658
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x11698
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x116bc
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: complex_callback at 0x116e4
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1)
{
 *(ptr) = *(ptr) + 10;
 if (*(a1))
 {
 if (!armg_calculate_condition(2, *(a1), 0, 0))
 return 1;
 }
 else
 {
 if (!armg_calculate_condition(2, *(a1), 0, 0))
 return 0;
 }
 return 0;
}


// Function: test_pointer_types at 0x11734
typedef struct struct_ptr_test_0 {
 char field_0;
} struct_ptr_test_0;

typedef struct struct_ptr_test_3 {
 char field_0;
} struct_ptr_test_3;

typedef struct struct_ptr_test_2 {
 struct struct_ptr_test_1 *field_0;
} struct_ptr_test_2;

typedef struct struct_ptr_test_1 {
 char field_0;
} struct_ptr_test_1;

extern unsigned int __glibc___stack_chk_guard;
extern char g_1367c;

unsigned int test_pointer_types()
{
 unsigned int v44; // r0
 char v0; // [bp-0x81]
 unsigned int v1[1]; // [bp-0x80]
 unsigned int v2; // [bp-0x7c]
 char *v3; // [bp-0x78]
 unsigned int v4; // [bp-0x74]
 char *v5; // [bp-0x70]
 struct_ptr_test_3 **v6; // [bp-0x6c]
 unsigned int v7; // [bp-0x68]
 unsigned int v8[1]; // [bp-0x64]
 unsigned int v9[1]; // [bp-0x60]
 unsigned int v10; // [bp-0x5c]
 unsigned int v11[1]; // [bp-0x58]
 struct_ptr_test_0 **v12; // [bp-0x54]
 struct_ptr_test_2 **v13; // [bp-0x50]
 unsigned int v14; // [bp-0x4c]
 unsigned int result[1]; // [bp-0x48]
 unsigned int v16; // [bp-0x44]
 unsigned int v17; // [bp-0x40]
 unsigned int v18; // [bp-0x3c]
 unsigned int v19; // [bp-0x38]
 unsigned int v20; // [bp-0x34]
 unsigned int v21; // [bp-0x30]
 unsigned int v22; // [bp-0x2c]
 unsigned int v23; // [bp-0x28]
 unsigned int v24; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 unsigned int v26; // [bp-0x1c]
 unsigned int v27; // [bp-0x18]
 unsigned int v28; // [bp-0x14]
 unsigned int v29; // [bp-0x10]
 unsigned int v30; // [bp-0xc]

 v30 = __glibc___stack_chk_guard;
 puts(0x1367c);
 *((unsigned int *)v1) = 5;
 printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(&v1));
 v2 = 10;
 v3 = &v2;
 v12 = &v3;
 printf("PTR-L2-02 (ptr_double): %d\n", ptr_double(v12));
 v4 = 5;
 v5 = &v4;
 v6 = &v5;
 v13 = &v6;
 printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(v13));
 *((unsigned int *)result) = 1;
 v16 = 2;
 v17 = 3;
 v18 = 4;
 v19 = 5;
 printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&result, 5));
 v20 = 10;
 v21 = 20;
 v22 = 30;
 v23 = 40;
 v24 = 50;
 printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(&v20, 2));
 flag1 = 0;
 v26 = 10;
 v27 = 20;
 v28 = 30;
 v29 = 40;
 printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&v29, &flag1));
 v7 = 42;
 v0 = 65;
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v7, 0));
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v0, 1));
 *((unsigned int *)v8) = 10;
 printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(&v8));
 *((unsigned int *)v9) = 10;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&v9));
 printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5));
 v10 = 5;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v10));
 *((unsigned int *)v11) = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&v11));
 v14 = opaque_handle_create(10);
 v44 = printf("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(v14));
 if (!(v30 ^ __glibc___stack_chk_guard))
 return v44;
 __stack_chk_fail(); /* do not return */
}


// Function: struct_simple at 0x11a40
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x11a80
unsigned int struct_array(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 12)) + *((int *)(ptr + idx * 12 + 4)) + *((int *)(ptr + idx * 12 + 8));
 }
 return v0;
}


// Function: struct_nested at 0x11b58
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x11b8c
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x11bc0
typedef struct struct_with_ptr_0 {
 unsigned int field_0;
 struct struct_with_ptr_1 *field_4;
} struct_with_ptr_0;

typedef struct struct_with_ptr_1 {
 unsigned int field_0;
} struct_with_ptr_1;

int struct_with_ptr(struct_with_ptr_0 *a0)
{
 return (int)(!a0->field_4 ? NULL : (char*)a0->field_4->field_0) + a0->field_0;
}


// Function: struct_bitfields at 0x11c10
int struct_bitfields(void* a0)
{
 return (*((char *)a0) & 1) + (*((char *)a0) >> 1 & 3 & 255) + (*((char *)a0) >> 3 & 7 & 255) + (*((short *)a0) >> 6);
}


// Function: union_type at 0x11c8c
unsigned int union_type(void* a0, unsigned int a1)
{
 return (a1 ? (a1 != 1 ? *((char *)a0) : __fixsfsi(*((int *)a0))) : *((int *)a0));
}


// Function: union_array at 0x11cf0
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: enum_type at 0x11d68
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x11d9c
unsigned int enum_switch(unsigned int a0)
{
 return 4294967295;
}


// Function: struct_func_ptr at 0x11e00
int struct_func_ptr(unsigned int *a0)
{
 unsigned int v1; // r0
 char v0; // [bp-0xc]

 v1 = (*((int *)(*((int *)&v0) + 4)))(*(a0));
 return (*((int *)(*((int *)&v0) + 4)))(*(a0));
}


// Function: linked_list at 0x11e38
typedef struct struct_linked_list {
 unsigned int field_0;
 struct struct_linked_list *field_4;
} struct_linked_list;

unsigned int linked_list(struct_linked_list *a0)
{
 unsigned int v0; // [bp-0x10]
 struct_linked_list *cur; // [bp-0xc]

 v0 = 0;
 for (cur = a0; cur; cur = cur->field_4)
 {
 v0 += cur->field_0;
 }
 return v0;
}


// Function: doubly_linked_list at 0x11e9c
typedef struct struct_doubly_linked_list {
 unsigned int field_0;
 struct struct_doubly_linked_list *field_4;
} struct_doubly_linked_list;

unsigned int doubly_linked_list(struct_doubly_linked_list *a0)
{
 unsigned int v0; // [bp-0x10]
 struct_doubly_linked_list *v1; // [bp-0xc]

 v0 = 0;
 for (v1 = a0; v1; v1 = v1->field_4)
 {
 v0 += v1->field_0;
 }
 return v0;
}


// Function: binary_tree_sum at 0x11f00
unsigned int binary_tree_sum(unsigned int *a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (a0)
 {
 v0 = binary_tree_sum(a0[1]);
 v1 = binary_tree_sum(a0[2]);
 return *(a0) + v0 + v1;
 }
 return 0;
}


// Function: binary_tree at 0x11f68
unsigned int binary_tree(unsigned int *a0)
{
 unsigned int v0; // r0

 v0 = binary_tree_sum(a0);
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x11f90
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned int v0; // [bp-0x14]
 unsigned int index; // [bp-0x10]
 unsigned int cur; // [bp-0xc]

 v0 = 0;
 for (index = 0; index < ptr[10]; index += 1)
 {
 for (cur = ptr[index]; cur; cur = *((int *)(cur + 4)))
 {
 v0 += *((int *)cur);
 }
 }
 return v0;
}


// Function: test_composite_types at 0x12028
extern unsigned int __glibc___stack_chk_guard;
extern char g_1384c;

unsigned int test_composite_types()
{
 unsigned int v75; // r0
 unsigned int v0; // [bp-0x114]
 unsigned int flag10; // [bp-0x110]
 unsigned int v2; // [bp-0x10c]
 char *v3; // [bp-0x108]
 unsigned int v4; // [bp-0x104]
 unsigned int flag11; // [bp-0x100]
 unsigned int v6[1]; // [bp-0xfc]
 unsigned int v7; // [bp-0xf8]
 unsigned int flag17; // [bp-0xf4]
 unsigned int flag18; // [bp-0xf0]
 unsigned int result[1]; // [bp-0xec]
 unsigned int v11; // [bp-0xe8]
 unsigned int v12; // [bp-0xe4]
 unsigned int v13[1]; // [bp-0xe0]
 unsigned int flag15; // [bp-0xdc]
 unsigned int flag16; // [bp-0xd8]
 unsigned int v16[1]; // [bp-0xd4]
 unsigned int v17; // [bp-0xd0]
 unsigned int flag4; // [bp-0xcc]
 unsigned int v19; // [bp-0xc8]
 unsigned int v20; // [bp-0xc4]
 unsigned int flag5[1]; // [bp-0xc0]
 unsigned int v22; // [bp-0xbc]
 unsigned int v23; // [bp-0xb8]
 unsigned int v24; // [bp-0xb4]
 unsigned int v25; // [bp-0xb0]
 unsigned int v26; // [bp-0xac]
 unsigned int flag6; // [bp-0xa8]
 unsigned int flag7; // [bp-0xa4]
 unsigned int flag8; // [bp-0xa0]
 unsigned int flag9; // [bp-0x9c]
 unsigned int v31; // [bp-0x98]
 unsigned int v32; // [bp-0x94]
 unsigned int v33; // [bp-0x90]
 unsigned int v34; // [bp-0x8c]
 unsigned int v35; // [bp-0x88]
 unsigned int v36; // [bp-0x84]
 unsigned int flag1; // [bp-0x80]
 unsigned int flag2; // [bp-0x7c]
 unsigned int flag3; // [bp-0x78]
 unsigned int v40; // [bp-0x74]
 unsigned int v41; // [bp-0x70]
 unsigned int v42; // [bp-0x6c]
 unsigned int v43; // [bp-0x68]
 char *v44; // [bp-0x64]
 char v45; // [bp-0x60], Other Possible Types: unsigned int
 char *v46; // [bp-0x5c]
 char v47; // [bp-0x58], Other Possible Types: unsigned int
 unsigned int flag12; // [bp-0x54]
 unsigned int v49; // [bp-0x50]
 char *v50; // [bp-0x4c]
 unsigned int flag13; // [bp-0x48]
 unsigned int v53; // [bp-0x44]
 unsigned int flag14; // [bp-0x40]
 char *v55; // [bp-0x3c]
 char *v57; // [bp-0x38]
 char *v58; // [bp-0x38]
 unsigned int v59; // [bp-0x10]
 unsigned int v60; // [bp-0xc]

 v60 = __glibc___stack_chk_guard;
 puts(0x1384c);
 *((unsigned int *)result) = 1;
 v11 = 2;
 v12 = 3;
 printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&result));
 *((unsigned int *)&flag1) = 1;
 *((unsigned int *)&flag2) = 1;
 *((unsigned int *)&flag3) = 1;
 v40 = 2;
 v41 = 2;
 v42 = 2;
 printf("CMP-L2-02 (struct_array): %d\n", struct_array(&flag1, 2));
 *((unsigned int *)v16) = 5;
 v17 = 10;
 flag4 = 0;
 v19 = 100;
 v20 = 200;
 printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&v16));
 *((unsigned int *)flag5) = 1;
 v22 = 2;
 v23 = 3;
 v24 = 10;
 v25 = 20;
 v26 = 255;
 flag6 = 0;
 flag7 = 0;
 flag8 = 0;
 flag9 = 0;
 v31 = 255;
 v32 = 42;
 printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(&flag5));
 v0 = 20;
 flag10 = 0;
 v2 = 10;
 v3 = &v0;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v2));
 v4 = 6429;
 flag11 = 0;
 printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v4));
 v33 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n", union_type(&v33, 0));
 v34 = 10;
 v35 = 20;
 v36 = 30;
 printf("CMP-L2-08 (union_array): %d\n", union_array(&v34, 3));
 printf("CMP-L2-09 (enum_type): %d\n", enum_type(1));
 printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(2));
 *(v6) = 10;
 v7 = process_int;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v6));
 v43 = 10;
 v44 = &v45;
 v45 = 20;
 v46 = &v47;
 v47 = 30;
 flag12 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", linked_list(&v43));
 v49 = 10;
 v50 = &v53;
 flag13 = 0;
 v53 = 20;
 flag14 = 0;
 v55 = &v49;
 v50 = &v53;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v49));
 *((unsigned int *)v13) = 100;
 flag15 = 0;
 flag16 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(&v13));
 flag17 = 1;
 flag18 = 0;
 memset(&v58, 0, 44);
 v57 = &flag17;
 v59 = 2;
 v58 = &flag17;
 v75 = printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v58));
 if (!(v60 ^ __glibc___stack_chk_guard))
 return v75;
 __stack_chk_fail(); /* do not return */
}


// Function: main at 0x12410
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_12434 at 0x12434
extern char __stack_chk_guard;

unsigned long long vvar_204;
unsigned long long vvar_209;
unsigned long long vvar_221;
unsigned long long vvar_74;
unsigned long long vvar_73;
unsigned long long vvar_472;
unsigned long long vvar_247;
unsigned long long vvar_86;
unsigned long long vvar_314;
unsigned long long vvar_4;
unsigned long long vvar_32;
unsigned long long vvar_198;
unsigned long long vvar_203;
unsigned long long vvar_215;
unsigned long long vvar_68;
unsigned long long vvar_67;
unsigned long long vvar_80;
unsigned long long vvar_466;
unsigned long long vvar_241;
unsigned long long vvar_308;

unsigned int sub_12434(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11)
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
 goto LABEL_1244a;
LABEL_12449:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_1244e;
LABEL_1244d:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_12614();
 return sub_12614();
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
 goto LABEL_12449;
LABEL_1244a:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_1244d;
LABEL_1244e:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_12614();
 return sub_12614();
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
 v56 = ((unsigned long long)v55 << 32) | vvar_204 + a0 * v54 >> 32;
 vvar_209 = ((unsigned long long)v55 << 32) | vvar_204 + a0 * v54;
 v57 = ((unsigned long long)0 << 32) | v56 + v53 * v54 >> 32;
 v58 = ((unsigned long long)0 << 32) | v56 + v53 * v54;
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
 v69 = v63 * 0x800 | vvar_204 >> 21;
 vvar_247 = vvar_204 * 0x800;
 v70 = v61 - 253;
 if (253 < v61)
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if ((char)armg_calculate_condition(130, v71, v72, v73))
 goto LABEL_12518;
LABEL_124d8:
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
 goto LABEL_124d8;
LABEL_12518:
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
 goto LABEL_12506;
LABEL_12505:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_1250c;
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
 goto LABEL_12505;
LABEL_12506:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_1250c;
 return a0 | a2;
 }
LABEL_1250c:
 v68 = v78 | 0x100000;
 vvar_314 = 0;
 v61 = v0 - 1;
LABEL_12518_2:
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_12526;
LABEL_12525:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_1252c;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_12525;
LABEL_12526:
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_1252c;
 return v84;
 }
LABEL_1252c:
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


// Function: sub_12614 at 0x12614
extern char __stack_chk_guard;

unsigned int sub_12614(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
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
 goto LABEL_12640;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_12640:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_1264a;
LABEL_12649:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_1264e;
LABEL_1264d:
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
 goto LABEL_12649;
LABEL_1264a:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_1264d;
LABEL_1264e:
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
 goto LABEL_12676;
LABEL_12675:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_12675;
LABEL_12676:
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
 goto LABEL_125f4;
 return a0;
 v22 = flag3;
 }
LABEL_125f4:
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


// Function: __mulsf3 at 0x126a0
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
 goto LABEL_126ae;
LABEL_126ad:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_126b2;
LABEL_126b1:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_127b4;
 }
 else
 {
 v1 = a3;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_126ad;
LABEL_126ae:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_126b1;
LABEL_126b2:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_127b4:
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_127dc;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_127dc:
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_127e6;
LABEL_127e5:
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_127ea;
LABEL_127e9:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_127ee;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_127e5;
LABEL_127e6:
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_127e9;
LABEL_127ea:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_127ee:
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_127f4:
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
 goto LABEL_127f4;
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
 goto LABEL_12781;
 else
 goto LABEL_12782;
 while (true)
 {
 v53 = v54;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_12781:
 v54 = v53 * 2;
 if (!armg_calculate_condition(v49, v50, v51, v52))
 goto LABEL_12786;
 goto LABEL_12785;
 }
 else
 {
LABEL_12782:
 v54 = v53;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_12785:
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (!armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_1278a;
 goto LABEL_12789;
 }
 else
 {
LABEL_12786:
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & 0x800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_12789:
 v0 -= 1;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 else
 {
LABEL_1278a:
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
 goto LABEL_1279d;
 else
 goto LABEL_1279e;
 while (true)
 {
 v55 = v56;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_1279d:
 v56 = v55 * 2;
 if (!armg_calculate_condition(v30, v31, v32, v33))
 goto LABEL_127a2;
 goto LABEL_127a1;
 }
 else
 {
LABEL_1279e:
 v56 = v55;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_127a1:
 v30 = 5;
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_127a6;
 goto LABEL_127a5;
 }
 else
 {
LABEL_127a2:
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & 0x800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_127a5:
 v1 -= 1;
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 else
 {
LABEL_127a6:
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
 goto LABEL_12710;
LABEL_126cc:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < 0x800000)
 {
 v73 = v71 * 2;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_126ea;
LABEL_126e9:
 v74 = v73 | v72 >> 31;
 if (!armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_126ee;
LABEL_126ed:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_126e9;
LABEL_126ea:
 v74 = v73;
 if (armg_calculate_condition(50, v71, 0x800000, 0))
 goto LABEL_126ed;
LABEL_126ee:
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
 goto LABEL_126cc;
LABEL_12710:
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
 goto LABEL_1272e;
LABEL_1272d:
 v80 |= v81 * 0x800000;
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_12734;
 return v80 | v81 * 0x800000;
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_1272d;
LABEL_1272e:
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_12734;
 return v80;
 }
LABEL_12734:
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
 goto LABEL_12750;
 return v75 & 0x80000000;
 }
 else
 {
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_12750;
 return v75;
 }
LABEL_12750:
 if (v72 || (v75 << ((char)(32 - -(v76)) & 31) & (32 - (!(v76) & 255) & 255) - 32 >> 31) * 2)
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1);
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1) & ~((v75 << ((char)(32 - -(v76)) & 31) & (32 - (-(v76) & 255) & 255) - 32 >> 31) >> 31);
}


// Function: __aeabi_drsub at 0x12838
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}


// Function: __subdf3 at 0x12840
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x12af0
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
 unsigned long long vvar_4; // r64 register variable
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_12afc;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_12afc;
 return a0;
 }
LABEL_12afc:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
}


// Function: __floatsidf at 0x12b14
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
 goto LABEL_12b20;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_12b20;
 return a0;
 }
LABEL_12b20:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
}


// Function: __extendsfdf2 at 0x12b3c
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
 goto LABEL_12b52;
LABEL_12b51:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_12b56;
LABEL_12b55:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_12b5c;
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
 goto LABEL_12b51;
LABEL_12b52:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_12b55;
LABEL_12b56:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_12b5c;
 return v4;
 }
LABEL_12b5c:
 if ((v3 & 16777215))
 goto LABEL_12b64;
 return v4;
LABEL_12b64:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_12b70;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_12b70;
 return v4;
 }
LABEL_12b70:
 v2 = vvar_32;
 v1 = v44;
 v0 = v45;
}


// Function: __floatundidf at 0x12b84
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
 goto LABEL_12b8c;
 return a0;
LABEL_12b8c:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_0x12930;
}


// Function: __aeabi_l2d at 0x12b98
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_12ba0;
 return a0;
LABEL_12ba0:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x12bb4;
}


// Function: __muldf3 at 0x12bf8
extern char __stack_chk_guard;

int __muldf3(int a0, int a1, int a2, int a3, int a4, int a5)
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
 goto LABEL_12c0e;
LABEL_12c0d:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_12c12;
LABEL_12c11:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_12dd8();
 return sub_12dd8();
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
 goto LABEL_12c0d;
LABEL_12c0e:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_12c11;
LABEL_12c12:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_12dd8();
 return sub_12dd8();
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
 vvar_198 = ((unsigned long long)0 << 32) | (a0 * a2 >> 32) + v53 * a2;
 v56 = (((unsigned long long)v55 << 32) | vvar_198) + a0 * v54 >> 32;
 vvar_203 = (((unsigned long long)v55 << 32) | vvar_198) + a0 * v54;
 v57 = (((unsigned long long)0 << 32) | v56) + v53 * v54 >> 32;
 v58 = (((unsigned long long)0 << 32) | v56) + v53 * v54;
 if (a0 * a2)
 vvar_215 = vvar_203 | 1;
 v60 = 0;
 v61 = v45 - 1023 - (0x200 > v57);
 vvar_68 = vvar_67;
 v62 = v57;
 v63 = v58;
 v64 = v57;
 v65 = 0x200;
 if (0x200 > v62)
 {
 v60 = vvar_67 >> 31 & 1;
 v62 = v57 * 2 + armg_calculate_flag_c(3, v58, v58, vvar_67 >> 31 & 1);
 vvar_466 = vvar_67 * 2;
 v63 = v58 * 2 + (vvar_67 >> 31 & 1);
 v64 = v58;
 v65 = v58;
 }
 v67 = v64;
 v68 = v46 & 0x80000000 | v62 * 0x800 | v63 >> 21;
 v69 = v63 * 0x800 | vvar_68 >> 21;
 vvar_241 = vvar_68 * 0x800;
 v70 = v61 - 253;
 if (253 < v61)
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if ((char)armg_calculate_condition(130, v71, v72, v73))
 goto LABEL_12cdc;
LABEL_12c9c:
 if (vvar_80 == 0x80000000)
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
 goto LABEL_12c9c;
LABEL_12cdc:
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
 goto LABEL_12cca;
LABEL_12cc9:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_12cd0;
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
 goto LABEL_12cc9;
LABEL_12cca:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_12cd0;
 return a0 | a2;
 }
LABEL_12cd0:
 v68 = v78 | 0x100000;
 vvar_308 = 0;
 v61 = v0 - 1;
LABEL_12cdc:
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 }
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_12cea;
LABEL_12ce9:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_12cf0;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_12ce9;
LABEL_12cea:
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_12cf0;
 return v84;
 }
LABEL_12cf0:
 v85 = -(v1);
 v86 = v85 - 32;
 if (32 > v85)
 {
 v87 = v86 + 12;
 if (!((char)armg_calculate_condition(193, v86, 12, 0)))
 {
 v88 = (char)v87 + 20;
 if (vvar_80 || (v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) * 2)
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31) & ~((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 }
 else
 {
 if (!vvar_80 && !(v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) * 2)
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31) & ~((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 }
 }
 else if (!vvar_80 && !(v84 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) && !(v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) * 2)
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31) & ~((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
 else
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
}


// Function: sub_12dd8 at 0x12dd8
extern char __stack_chk_guard;

unsigned int sub_12dd8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
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
 goto LABEL_12e04;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_12e04:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_12e0e;
LABEL_12e0d:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_12e12;
LABEL_12e11:
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
 goto LABEL_12e0d;
LABEL_12e0e:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_12e11;
LABEL_12e12:
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
 goto LABEL_12e3a;
LABEL_12e39:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_12e39;
LABEL_12e3a:
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
 goto LABEL_12db8;
 return a0;
 v22 = flag3;
 }
LABEL_12db8:
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



/* CRT stub function __aeabi_ddiv removed by preprocessor */



// Function: sub_12ff0 at 0x12ff0
int sub_12ff0()
{
 return 0;
}


// Function: sub_12ff8 at 0x12ff8
int sub_12ff8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r12
 unsigned int v1; // r5
 unsigned int v10; // cc_dep2
 unsigned int v11; // cc_ndep
 unsigned int v15; // cc_dep1
 unsigned int v16; // cc_dep2
 unsigned int v17; // cc_ndep
 unsigned int v18; // cc_dep1
 unsigned int v19; // cc_dep2
 unsigned int v2; // r4
 unsigned int v20; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v4; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_dep1

 v1 = v0 & a3 >> 20;
 if (!(v2 ^ v0))
 {
 v6 = (armg_calculate_condition(5, v3, v4, v5) ? v1 ^ v0 : v3);
 v7 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_0x12e58;
 else
 goto LABEL_13008;
 }
 else
 {
 v6 = (armg_calculate_condition(5, v9, v10, v11) ? v1 ^ v0 : v9);
 v7 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_0x12e58;
 else
 goto LABEL_13008;
 }
LABEL_13008:
 v15 = v2 ^ v0;
 v16 = armg_calculate_flag_c(5, v6, v7, v8);
 v17 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!(v2 ^ v0))
 {
 if (a0 || a1 * 0x1000)
 goto LABEL_0x12e58;
 if ((v1 ^ v0))
 goto LABEL_0x12e40;
 }
 else
 {
 v18 = v1 ^ v0;
 v19 = armg_calculate_flag_c(5, v15, v16, v17);
 v20 = armg_calculate_flag_v(5, v15, v16, v17);
 if (!(v1 ^ v0))
 {
 if (!a2 && !a3 * 0x1000)
 goto LABEL_0x12df4;
 }
 else if (a0 || a1 * 2)
 {
 if ((char)armg_calculate_condition((armg_calculate_condition(21, v18, v19, v20) ? 5 : 5) | 16, (armg_calculate_condition(21, v18, v19, v20) ? a2 | a3 * 2 : v18), (armg_calculate_condition(21, v18, v19, v20) ? a3 >> 31 & 1 : v19), (armg_calculate_condition(21, v18, v19, v20) ? armg_calculate_flag_v(5, v18, v19, v20) : v20)))
 goto LABEL_0x12d8c;
 if (a0 || a1 * 2)
 goto LABEL_0x12e40;
 if (a2 || a3 * 2)
 goto LABEL_0x12df4;
 }
 else
 {
 if ((char)armg_calculate_condition((armg_calculate_condition(21, v18, v19, v20) ? 5 : 5) | 16, (armg_calculate_condition(21, v18, v19, v20) ? a2 | a3 * 2 : v18), (armg_calculate_condition(21, v18, v19, v20) ? a3 >> 31 & 1 : v19), (armg_calculate_condition(21, v18, v19, v20) ? armg_calculate_flag_v(5, v18, v19, v20) : v20)))
 goto LABEL_0x12d8c;
 if (a0 || a1 * 2)
 goto LABEL_0x12e40;
 if (a2 || a3 * 2)
 goto LABEL_0x12df4;
 }
 }
}


// Function: __aeabi_frsub at 0x13068
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000);
 return __addsf3(a0 ^ 0x80000000);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x13074
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
 goto LABEL_131b0;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_131b0;
 return a0;
 }
LABEL_131b0:
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
 goto LABEL_131d0;
 return a0 + 0x800000;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_131d0;
 return a0;
 }
LABEL_131d0:
 v41 = a0 & 0x80000000;
LABEL_131d4:
 return v41 | 0x7f000000 | 0x800000;
 }
 v21 = result >> 24;
 v22 = (a3 >> 24) - v21;
 v23 = a3 >> 24;
 if (v21 < a3 >> 24)
 {
 v24 = v21 + v22;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_1309a;
LABEL_13099:
 v25 = a0 ^ a1;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_1309e;
LABEL_1309d:
 v26 = v25 ^ a0;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_130a2;
LABEL_130a1:
 v27 = v26 ^ v25;
 if (!armg_calculate_condition(178, v23, v21, 0))
 goto LABEL_130a6;
 goto LABEL_130a5;
 }
 else
 {
 v24 = v21;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_13099;
LABEL_1309a:
 v25 = a1;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_1309d;
LABEL_1309e:
 v26 = a0;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_130a1;
LABEL_130a2:
 v27 = v25;
 if (armg_calculate_condition(178, v23, v21, 0))
 {
LABEL_130a5:
 v22 = -(v22);
 }
 else
 {
LABEL_130a6:
 }
 }
 if (25 >= v22)
 goto LABEL_130b0;
 return v26;
LABEL_130b0:
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
 goto LABEL_13176;
LABEL_13175:
 v24 += 1;
 if (!armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_1317a;
LABEL_13179:
 v22 -= 1;
 }
 else
 {
 v28 = v28;
 if (armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_13175;
LABEL_13176:
 if (armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_13179;
LABEL_1317a:
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
 goto LABEL_131d4;
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
 goto LABEL_13144;
 }
 else
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, 0x800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0x800000 : 0x800000), (armg_calculate_condition(34, v46, 0x800000, 0) ? 0 : 0))))
 {
LABEL_13144:
 v55 = (!v52 ? 32 : Clz(v52)) - 8;
 v56 = v53 - v55;
 if (v55 <= v53)
 {
 v58 = v57 + v56 * 0x800000;
 if (!armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_1315a;
LABEL_13159:
 v56 = -(v56);
 }
 else
 {
 v57 = v52 << ((char)v55 & 31) & (v55 & 255) - 32 >> 31;
 if (armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_13159;
LABEL_1315a:
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


// Function: __aeabi_ui2f at 0x13204
unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_1321c;
 return a0;
LABEL_1321c:
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


// Function: __floatsisf at 0x1320c
int __floatsisf(unsigned int a0)
{
}


// Function: __floatundisf at 0x1322c
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
 goto LABEL_13234;
 return a0;
LABEL_13234:
 v7 = armg_calculate_flag_c(5, v0, v5, v6);
 v8 = armg_calculate_flag_v(5, v0, v5, v6);
 if (!a1)
 {
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_1325e;
LABEL_1325d:
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_13262;
LABEL_13261:
 }
 else
 {
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_1325d;
LABEL_1325e:
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_13261;
LABEL_13262:
 }
}


// Function: __aeabi_l2f at 0x1323c
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 if (a0 || a1)
 goto LABEL_13244;
 return a0;
LABEL_13244:
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x13254;
}


// Function: __fixsfsi at 0x132b8
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


