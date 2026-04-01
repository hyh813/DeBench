// Angr Decompilation of 2_clang_O0_g
// Platform: AARCH64

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Helper macros and functions
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

// Floating point helper functions - declared as extern
extern unsigned long long __addtf3(unsigned long long a0, unsigned long long a1);
extern unsigned long long __multf3(unsigned long long a0, unsigned long long a1);

// Helper functions used in floating point emulation
extern unsigned long long arm64g_calculate_flag_c(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned int a3);
extern unsigned long long arm64g_calculate_condition(unsigned int a0, unsigned long long a1, unsigned int a2, unsigned int a3);
extern unsigned int Clz(unsigned long long a0);
unsigned long long __sfp_handle_exceptions(unsigned long long a0);

// Forward declarations for functions used before definition
extern unsigned int double_value(unsigned int a0);
extern unsigned long long complex_callback(unsigned int *ptr, unsigned long long *a1);

// CRT stub functions - declared as extern
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400680
extern unsigned long long g_414ff8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_414ff8;
}


// Function: sub_400694 at 0x400694
long long sub_400694()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400770 at 0x400770
void sub_400770()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400788 at 0x400788
void sub_400788()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4007fc at 0x4007fc
void sub_4007fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400848 at 0x400848
long long sub_400848()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: process_char at 0x400854
long long process_char(char a0)
{
 char v0; // [bp-0x1]

 if (a0 >= 65 && 90 >= a0)
 {
 v0 = a0 + 32;
 return v0;
 }
 v0 = a0;
 return v0;
}


// Function: process_short at 0x4008a4
int process_short(unsigned short a0, unsigned short a1)
{
 return a0 + a1;
}


// Function: process_int at 0x4008c4
int process_int(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: process_long at 0x4008e0
unsigned long long process_long(unsigned long a0)
{
 return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: process_ll at 0x4008f8
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x400914
long long process_float()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_double at 0x400934
long long process_double()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_ld at 0x40095c
void process_ld()
{
 unsigned long long v3; // q0
 unsigned long long v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = v3;
 __addtf3(__multf3(v3, v0));
 return;
}


// Function: process_bool at 0x40098c
unsigned int process_bool(unsigned int a0)
{
 unsigned int v1; // w8
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 if (a0 > 0)
 {
 if (a0 - 2 * a0 / 2)
 v1 = 0;
 else
 v1 = 1;
 v0 = v1;
 }
 return v0 & 1;
}


// Function: const_param at 0x4009e0
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x4009fc
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = *(ptr);
 v0 = *(ptr);
 return v1 + v0;
}


// Function: test_data_types_l1 at 0x400a30
extern char __dollar_d_4;

int test_data_types_l1()
{
 unsigned long long v12; // x1
 unsigned long long *v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x30]
 unsigned long long *v2; // [bp-0x28]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]
 unsigned long long *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 printf(&__dollar_d_4);
 v0 = (unsigned long long *)"DT-L1-01 (process_char): %c\n";
 printf("DT-L1-01 (process_char): %c\n", (int)process_char(65) & 255);
 process_char(98);
 printf("DT-L1-01 (process_char): %c\n", (int)process_char(98) & 255);
 printf("DT-L1-02 (process_short): %d\n", process_short(100, 200) * 0x10000 >> 31 & 0xffff0000 | process_short(100, 200) & 65535);
 v3 = 5;
 printf("DT-L1-03 (process_int): %d\n", process_int(5) & 4294967295);
 v1 = 100;
 printf("DT-L1-04 (process_long): %ld\n", process_long(100));
 v12 = process_ll(v1);
 printf("DT-L1-05 (process_ll): %lld\n", v12);
 process_float();
 printf("DT-L1-06 (process_float): %.2f\n", v12);
 process_double();
 printf("DT-L1-07 (process_double): %.2f\n", v12);
 process_ld();
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 v2 = "DT-L1-09 (process_bool): %d\n";
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4) & 1);
 process_bool(3);
 printf(v2);
 process_bool(4294967294);
 printf(v2);
 v5 = v3;
 printf("DT-L1-10 (const_param): %d\n", const_param(&v5) & 4294967295);
 v4 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", volatile_access(&v4) & 4294967295);
}


// Function: array_1d_stack at 0x400bc4
unsigned int array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: array_string at 0x400c28
unsigned int array_string(char *a0)
{
 unsigned int i; // [bp-0xc]

 for (i = 0; a0[i]; i += 1);
 return i;
}


// Function: array_2d_stack at 0x400c68
unsigned int array_2d_stack(unsigned long a0)
{
 unsigned int i; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (i = 0; 10 > i; i += 1)
 {
 v1 += *((int *)(a0 + 40 * i + i * 4));
 }
 return v1;
}


// Function: array_3d at 0x400cd4
unsigned int array_3d(unsigned long a0)
{
 unsigned int k; // [bp-0x18]
 unsigned int j; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = 0;
 for (i = 0; 5 > i; i += 1)
 {
 for (j = 0; 5 > j; j += 1)
 {
 for (k = 0; 5 > k; k += 1)
 {
 v3 += *((int *)(a0 + 100 * i + 20 * j + k * 4));
 }
 }
 }
 return v3;
}


// Function: array_vla at 0x400da8
unsigned int array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned int i; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: array_pointer at 0x400e0c
unsigned int array_pointer(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *((int *)(ptr + 40 * i));
 }
 return v1;
}


// Function: pointer_array at 0x400e78
unsigned int pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int i; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v3 = 0;
 if (10 > a1)
 v0 = a1;
 else
 v0 = 10;
 v2 = v0;
 for (i = 0; v2 > i; i += 1)
 {
 if (*((long long *)(a0 + i * 8)))
 v3 += *((int *)*((long long *)(a0 + i * 8)));
 }
 return v3;
}


// Function: array_complex_index at 0x400f28
unsigned int array_complex_index(unsigned long ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // [bp-0x4]

 if (!((char)(a3 >> 31) & 1) && a1 > a3 && !((char)(a4 >> 31) & 1) && a4 < a2)
 {
 v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: array_oob at 0x400fbc
unsigned int array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (v0 = 0; a1 >= v0; v0 += 1)
 {
 v1 += *((int *)(ptr + v0 * 4));
 }
 return v1;
}


// Function: test_array_types at 0x401020
extern char g_4038c4;

int test_array_types()
{
 char *v0; // [bp-0x590]
 char *cur; // [bp-0x588]
 unsigned int v2; // [bp-0x57c]
 char *v3; // [bp-0x578]
 unsigned int m; // [bp-0x56c]
 unsigned long v5; // [bp-0x568]
 char *v6; // [bp-0x518]
 char *v7; // [bp-0x510]
 char *v8; // [bp-0x508]
 unsigned long long result; // [bp-0x500]
 char v10; // [bp-0x4f8]
 unsigned int v11; // [bp-0x4c8]
 unsigned int v12; // [bp-0x4c4]
 unsigned int v13; // [bp-0x4c0]
 unsigned int k; // [bp-0x4bc]
 unsigned long v15; // [bp-0x4b8]
 unsigned long long v16; // [bp-0x3f0]
 unsigned int v17; // [bp-0x3e8]
 unsigned int i1; // [bp-0x3e0]
 unsigned int i0; // [bp-0x3dc]
 unsigned int j; // [bp-0x3d8]
 unsigned long long v21; // [bp-0x3d4]
 unsigned int n; // [bp-0x1e0]
 unsigned int i; // [bp-0x1dc]
 unsigned long v24; // [bp-0x1d8]
 char v25[8]; // [bp-0x48]
 unsigned long long v26; // [bp-0x40]
 unsigned int v27; // [bp-0x30]
 char *v28; // [bp-0x20]
 char v29; // [bp+0x0]

 v28 = &v29;
 v3 = &v16;
 printf(&g_4038c4);
 v26 = 316912650112397582603894390785;
 unsigned int v27 = 5;
 printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack((unsigned long)&v26, v27) & 4294967295);
 strncpy(v25, "hello", 5);
 printf("ARR-L1-02 (array_string): %d\n", array_string(&v25) & 4294967295);
 for (i = 0; 10 > i; i += 1)
 {
 for (n = 0; 10 > n; n += 1)
 {
 if (i == n)
 v2 = i;
 else
 v2 = 0;
 *((unsigned int *)((char *)&(&v24)[5 * i] + 4 * n)) = v2;
 }
 }
 printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v24) & 4294967295);
 for (j = 0; 5 > j; j += 1)
 {
 for (i0 = 0; 5 > i0; i0 += 1)
 {
 for (i1 = 0; 5 > i1; i1 += 1)
 {
 *((unsigned int *)((char *)&v21 + 100 * j + 20 * i0 + 4 * i1)) = 1;
 }
 }
 }
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v21) & 4294967295);
 v16 = 85899345930;
 v17 = 30;
 printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, &v16) & 4294967295);
 for (k = 0; 5 > k; k += 1)
 {
 *((unsigned int *)&(&v15)[5 * k]) = 10 * k;
 }
 printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(&v15, 5) & 4294967295);
 v13 = 10;
 v12 = 20;
 v11 = 30;
 v6 = &v13;
 v7 = &v12;
 v8 = &v11;
 result = 0;
 v0 = &v11;
 cur = &v10;
 do
 {
 *((unsigned long *)&cur) = 0;
 cur += 8;
 } while (cur != v0);
 printf("ARR-L2-03 (pointer_array): %d\n", pointer_array(&v6, 3) & 4294967295);
 for (m = 0; 20 > m; m += 1)
 {
 *((unsigned int *)((char *)&v5 + 4 * m)) = m;
 }
 return printf("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(&v5, 5, 4, 2, 3) & 4294967295);
}


// Function: ptr_single at 0x4013d0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x4013ec
typedef struct struct_ptr_double {
 unsigned int field_0;
 char padding_4[4];
} ptr_double_t;

int ptr_double(ptr_double_t **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x40140c
typedef struct struct_0_ptr_triple {
 unsigned int field_0;
} struct_0_ptr_triple;

typedef struct struct_1_ptr_triple {
 struct_0_ptr_triple *field_0;
} struct_1_ptr_triple;

int ptr_triple(struct_1_ptr_triple **a0)
{
 return *(a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x401430
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int *cur; // [bp-0x8]

 cur = a0;
 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *(cur);
 cur += 1;
 }
 return v1;
}


// Function: ptr_offset at 0x40149c
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x4014bc
unsigned int ptr_diff(unsigned long a0, unsigned long a1)
{
 return (unsigned int)((a0 - a1) / 4);
}


// Function: ptr_void at 0x4014e8
unsigned int ptr_void(void* ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 if (!a1)
 {
 v0 = *((int *)ptr);
 return v0;
 }
 else if (a1 == 1)
 {
 v0 = *((char *)ptr);
 return v0;
 }
 else
 {
 v0 = 4294967295;
 return v0;
 }
}


// Function: ptr_const at 0x40154c
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x401570
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Function: ptr_func_simple at 0x40159c
int ptr_func_simple(unsigned long long (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1);
}


// Function: ptr_func_complex at 0x4015c8
extern unsigned long long __dollar_d_5;

long long ptr_func_complex(unsigned long long (*a0)(unsigned long, unsigned long long *), unsigned long a1)
{
 unsigned long long v3; // x0
 int v0; // [bp-0x30]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 *((unsigned long long *)&v0) = __dollar_d_5;
 v3 = a0(a1, &v0);
 return a0(a1, &v0);
}


// Function: ptr_cast at 0x401608
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x401638
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x40164c
unsigned int opaque_handle_op(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Forward declarations for struct types used before definition
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;

// Function: test_pointer_types at 0x401664
// Note: Using different struct names to avoid redefinition
typedef struct struct_ptr0 {
 char field_0;
} struct_ptr0;

typedef struct struct_ptr1 {
 char field_0;
} struct_ptr1;

extern char g_4039e1;

int test_pointer_types()
{
 unsigned int *v0; // [bp-0xd8]
 unsigned int *v1; // [bp-0xd0]
 unsigned int v2; // [bp-0xc8]
 unsigned int v3; // [bp-0xc4]
 unsigned long long v4; // [bp-0xc0]
 unsigned int v5; // [bp-0xb8]
 unsigned int v6; // [bp-0xb4]
 unsigned int v7; // [bp-0xb0]
 unsigned int v8; // [bp-0xac]
 char v9; // [bp-0xa5]
 unsigned int v10; // [bp-0xa4]
 unsigned long long v11; // [bp-0xa0]
 unsigned int v12; // [bp-0x90]
 unsigned long long v13; // [bp-0x80]
 unsigned int v14; // [bp-0x70]
 unsigned long long v15; // [bp-0x60]
 unsigned int v16; // [bp-0x50]
 struct_1 **v17; // [bp-0x48]
 char *v18; // [bp-0x40]
 char *v19; // [bp-0x38]
 unsigned int v20; // [bp-0x2c]
 struct_0 **v21; // [bp-0x28]
 char *v22; // [bp-0x20]
 unsigned int v23; // [bp-0x18]
 unsigned int v24; // [bp-0x14]
 char *v25; // [bp-0x10]
 char v26; // [bp+0x0]

 v25 = &v26;
 printf(&g_4039e1);
 v2 = 5;
 v24 = 5;
 printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(&v24) & 4294967295);
 v3 = 10;
 v23 = 10;
 v22 = &v23;
 v21 = (struct_1 **)&v22;
 printf("PTR-L2-02 (ptr_double): %d\n", ptr_double(v21) & 4294967295);
 v20 = v2;
 v19 = (char *)&v20;
 v18 = (char **)&v19;
 v17 = (struct_1 **)v18;
 printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(v17) & 4294967295);
 v15 = 316912650112397582603894390785;
 v16 = 5;
 printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment((unsigned int *)&v15, v2) & 4294967295);
 v13 = 3169126501123975826038943907850;
 v14 = 50;
 printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(&v13, 2) & 4294967295);
 v11 = 0x1e000000140000000a00000000;
 v12 = 40;
 printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&v12, &v11) & 4294967295);
 v10 = 42;
 v9 = 65;
 v0 = (unsigned int *)&v9;
 v1 = "PTR-L2-07 (ptr_void): %d\n";
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v10, 0) & 4294967295);
 ptr_void(v0, 1);
 printf(v1);
 v8 = v3;
 printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(&v8) & 4294967295);
 v7 = v3;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&v7) & 4294967295);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, v2) & 4294967295);
 v6 = v2;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v6) & 4294967295);
 v5 = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&v5) & 4294967295);
 v4 = opaque_handle_create(v3);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(v4) & 4294967295);
}


// Function: double_value at 0x4018d4
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: complex_callback at 0x4018ec
unsigned long long complex_callback(unsigned int *ptr, unsigned long long *a1)
{
 *(ptr) = *(ptr) + 10;
 if (*(a1))
 return 1;
 return 0;
}


// Function: struct_simple at 0x401928
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x401958
unsigned int struct_array(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *((int *)(ptr + 12 * i)) + *((int *)(ptr + 12 * i + 4)) + *((int *)(ptr + 12 * i + 8));
 }
 return v1;
}


// Function: struct_nested at 0x4019f4
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x401a18
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x401a3c
// Forward declaration
typedef struct struct_1 struct_1;

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = ptr->field_0;
 if (ptr->field_8)
 v0 = ptr->field_8->field_0;
 else
 v0 = 0;
 return v1 + v0;
}


// Function: struct_bitfields at 0x401a94
int struct_bitfields(unsigned short *a0)
{
 return ((*(a0) * 0x80000000 | *(a0) >> 1) & 2147483647 & 3 & 65535) + (*(a0) & 1) + ((*(a0) * 0x20000000 | *(a0) >> 3) & 536870911 & 7 & 65535) + ((*(a0) * 0x4000000 | *(a0) >> 6) & 67108863 & 65535);
}


// Function: union_type at 0x401aec
int union_type(void* ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 if (!a1)
 {
 v0 = *((int *)ptr);
 return v0;
 }
 else if (a1 == 1)
 {
 v0 = *((int *)ptr);
 return v0;
 }
 else
 {
 v0 = *((char *)ptr);
 return v0;
 }
}


// Function: union_array at 0x401b54
unsigned int union_array(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: enum_type at 0x401bb8
unsigned int enum_type(unsigned int a0)
{
 return 10 * a0;
}


// Function: enum_switch at 0x401bd4
extern unsigned int __dollar_d_3[4];
extern char g_401bfc;

unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (3 < a0)
 {
 v0 = 4294967197;
 return v0;
 }
 goto &(&g_401bfc)[__dollar_d_3[a0]];
}


// Function: struct_func_ptr at 0x401c50
int struct_func_ptr(unsigned int *a0)
{
 char v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 return (*((long long *)(*((long long *)&v0) + 8)))(*(a0));
}


// Forward declaration for linked_list
struct linked_list_node {
 unsigned int field_0;
 char padding_4[4];
 struct linked_list_node *field_8;
};

// Function: linked_list at 0x401c9c
unsigned int linked_list(struct_0 *a0)
{
 struct_0 *cur; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (cur = a0; cur; cur = cur->field_8)
 {
 v1 += cur->field_0;
 }
 return v1;
}


// Function: doubly_linked_list at 0x401cd4
// struct_0 already defined earlier
unsigned int doubly_linked_list(struct_0 *a0)
{
 struct_0 *v0; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (v0 = a0; v0; v0 = v0->field_8)
 {
 v1 += v0->field_0;
 }
 return v1;
}


// Function: binary_tree_sum at 0x401d28
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0;

unsigned int binary_tree_sum(struct_0 *ptr)
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (ptr)
 {
 v0 = ptr->field_0;
 v1 = v0 + binary_tree_sum(ptr->field_8);
 v2 = v1 + binary_tree_sum(ptr->field_10);
 return v2;
 }
 v2 = 0;
 return v2;
}


// Function: binary_tree at 0x401d9c
int binary_tree(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401dc0
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned long cur; // [bp-0x18]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = 0;
 for (i = 0; (int)ptr[10] > i; i += 1)
 {
 for (cur = ptr[i]; cur; cur = *((long long *)(cur + 8)))
 {
 v2 += *((int *)cur);
 }
 }
 return v2;
}


// Function: test_composite_types at 0x401e50
extern void g_403704;
extern char g_403b7b;
extern unsigned long long g_414dc8;

int test_composite_types()
{
 char *v0; // [bp-0x210]
 char *v1; // [bp-0x208]
 unsigned int v2; // [bp-0x1fc]
 unsigned int v3; // [bp-0x1f8]
 unsigned int result; // [bp-0x1f4]
 char *v5; // [bp-0x1f0]
 unsigned int v6; // [bp-0x1e4]
 char *v7; // [bp-0x1e0]
 char *v8; // [bp-0x1d8], Other Possible Types: char
 unsigned int v9; // [bp-0x188]
 char v10; // [bp-0x180], Other Possible Types: unsigned long long
 unsigned long long v11; // [bp-0x170]
 unsigned long long flag1; // [bp-0x160]
 unsigned int v13; // [bp-0x150]
 char *v14; // [bp-0x148]
 unsigned long long flag3; // [bp-0x140]
 unsigned int v17; // [bp-0x138]
 unsigned long long flag4; // [bp-0x130]
 char *v19; // [bp-0x128]
 unsigned int v20; // [bp-0x120]
 char *v21; // [bp-0x118]
 char v22; // [bp-0x110], Other Possible Types: unsigned int
 char *v23; // [bp-0x108]
 char v24; // [bp-0x100], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0xf8]
 unsigned int v26[6]; // [bp-0xf0]
 unsigned long long v27; // [bp-0xd8]
 unsigned int v28; // [bp-0xd0]
 unsigned int v29; // [bp-0xcc]
 unsigned long long v30; // [bp-0xc8]
 unsigned int v31; // [bp-0xc0]
 char *v32; // [bp-0xb8]
 unsigned long long v33; // [bp-0xb0]
 char v34; // [bp-0xa0]
 unsigned long long v35; // [bp-0x70]
 unsigned int v36; // [bp-0x60]
 unsigned long long v37; // [bp-0x50]
 unsigned long long v38; // [bp-0x40]
 unsigned long long v39; // [bp-0x30]
 unsigned int v40; // [bp-0x28]
 char *v41; // [bp-0x20]
 char v42; // [bp+0x0]

 v41 = &v42;
 v1 = &v26;
 printf(&g_403b7b);
 v39 = 8589934593;
 v40 = 3;
 printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&v39) & 4294967295);
 v37 = 158456325046975419265092419585;
 v38 = 8589934594;
 v6 = 2;
 printf("CMP-L2-02 (struct_array): %d\n", struct_array(&v37, 2) & 4294967295);
 v35 = 7922816251426433759397344706565;
 v36 = 200;
 printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&v35) & 4294967295);
 v0 = &v34;
 memcpy(&v34, &g_403704, 48);
 printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(v0) & 4294967295);
 v33 = 20;
 v2 = 10;
 v31 = 10;
 v32 = &v33;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v31) & 4294967295);
 v30 = 6429;
 printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v30) & 4294967295);
 v29 = 305419896;
 result = 0;
 printf("CMP-L2-07 (union_type): %d\n", union_type(&v29, 0) & 4294967295);
 v27 = 85899345930;
 v28 = 30;
 printf("CMP-L2-08 (union_array): %d\n", union_array(&v27, 3) & 4294967295);
 printf("CMP-L2-09 (enum_type): %d\n", enum_type(1) & 4294967295);
 printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(v6) & 4294967295);
 *((unsigned long long *)&v26) = g_414dc8;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v26) & 4294967295);
 v20 = v2;
 v21 = &v22;
 v3 = 20;
 v22 = 20;
 v23 = &v24;
 v24 = 30;
 flag2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", linked_list(&v20) & 4294967295);
 v13 = v2;
 v14 = &v17;
 flag3 = 0;
 v17 = v3;
 flag4 = 0;
 v19 = &v13;
 v14 = &v17;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v13) & 4294967295);
 v11 = 100;
 flag1 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(&v11) & 4294967295);
 v7 = &v10;
 v10 = 1;
 v5 = &v8;
 memset(&v8, result, 88);
 v8 = v7;
 v9 = v6;
 return printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(v5) & 4294967295);
}


// Function: main at 0x402194
unsigned int main()
{
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 result = 0;
 flag1 = 0;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return result;
}


// Function: sub_4021cc at 0x4021cc
void sub_4021cc()
{
 __addtf3();
 return;
}


// Function: __addtf3 at 0x4021d0
extern unsigned long long __dollar_d_15;
extern char g_800000;

unsigned long long __addtf3()
{
 unsigned long long v5; // x4
 unsigned long long v6; // x2
 unsigned long long flag6; // x7
 unsigned long long result; // x15
 unsigned int v16; // w14
 unsigned long long iter; // x2
 unsigned long long flag10; // x9
 unsigned long long v19; // x1
 unsigned long long flag9; // x11
 unsigned long long v21; // x0
 unsigned long v7; // x5
 char v23; // x4
 unsigned long long v24; // x1
 unsigned long long v25; // x0
 unsigned long long v26; // x0
 unsigned long long v27; // x9
 char v28; // x2
 unsigned long long v29; // x5
 unsigned long long v30; // x0
 unsigned long long cur; // x3
 unsigned long long v32; // x0
 unsigned long long v8; // x1
 unsigned long long flag8; // x4
 unsigned long long v34; // x9
 unsigned long long v35; // x1
 unsigned long long flag2; // x7
 unsigned long long flag3; // x6
 unsigned long long v38; // x6
 unsigned long long v39; // x0
 unsigned int flag4; // w4
 unsigned long long v41; // x9
 unsigned long long v42; // x2
 unsigned int v9; // fpcr
 unsigned long long v43; // x1
 unsigned long long v45; // x1
 unsigned int v46; // w1
 unsigned long v47; // x1
 unsigned int v48; // w0
 unsigned long long v50; // x0
 unsigned long long v51; // x3
 unsigned int v52; // w1
 unsigned long v10; // x16
 unsigned int v53; // w7
 char v54; // x1
 unsigned long long v55; // x1
 unsigned long long v56; // x9
 unsigned long long v57; // x0
 char v59; // x4
 unsigned long long v60; // x4
 unsigned long long v61; // x0
 unsigned long long v62; // x0
 unsigned long long v11; // x6
 char v63; // x2
 unsigned long long v64; // x5
 unsigned long long v65; // x0
 unsigned long long v66; // x0
 unsigned long long v67; // x1
 unsigned int v68; // w2
 unsigned long long v69; // x7
 unsigned long long flag1; // x7
 unsigned long long flag7; // x6
 unsigned long long flag11; // x1
 unsigned long long v12; // x0
 unsigned long long v73; // x4
 unsigned long long v74; // x1
 unsigned long long v75; // x1
 unsigned long long v76; // x1
 unsigned long v77; // x3
 unsigned long long v78; // x1
 unsigned int v80; // w2
 unsigned int v81; // w1
 unsigned long long v83; // x0
 unsigned long long flag5; // x8
 char *v0; // [bp-0x30]
 int v1; // [bp-0x20], Other Possible Types: char
 unsigned long long v2; // [bp-0x18]
 char v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v5 = *((long long *)&v1);
 v6 = v2;
 v7 = *((long long *)&v3);
 v8 = *((long long *)&v3);
 v10 = v9;
 v11 = __ROL__(v6, 1) & 1;
 v12 = __ROL__(v8, 1) & 1;
 cur = (v6 * 8 | v6 >> 61) & 2251799813685240 & 2251799813685247 | v5 >> 61;
 flag5 = (v6 * 0x10000 | v6 >> 48) & 18446744073709518847 & 32767;
 flag6 = (v8 * 0x10000 | v8 >> 48) & 18446744073709518847 & 32767;
 result = __ROL__(v6, 1) & 1;
 v16 = (unsigned int)result & 255;
 cur = (v8 * 8 | v8 >> 61) & 2251799813685240 & 2251799813685247 | v7 >> 61;
 iter = flag5;
 flag10 = __ROL__(v5, 3) & 18446744073709551608;
 v19 = flag6;
 flag9 = __ROL__(v7, 3) & 18446744073709551608;
 if (result != v12)
 {
 result = v12;
 v21 = flag5 - flag6;
 if ((unsigned int)v21 > 0)
 {
 if (flag6)
 {
 cur |= 0x8000000000000;
 goto LABEL_402248;
 }
 if (cur || flag9)
 {
 v21 = (unsigned int)v21 - 1;
 if ((unsigned int)v21 != 1)
 {
LABEL_402248:
 if (iter == 32767)
 goto LABEL_402694;
 if (116 >= (unsigned int)v21)
 {
 if (63 >= (unsigned int)v21)
 {
 v23 = 64 - (unsigned int)v21;
 if (!flag9 << (v23 & 63))
 v24 = 0;
 else
 v24 = 1;
 v25 = cur << (v23 & 63) | flag9 >> ((char)v21 & 63) | v24;
 cur -= cur >> ((char)v21 & 63);
 }
 else
 {
 if ((unsigned int)v21 != 64)
 flag9 |= cur << ((char)(128 - (unsigned int)v21) & 63);
 if (!flag9)
 v26 = 0;
 else
 v26 = 1;
 v25 = v26 | cur >> ((char)((unsigned int)v21 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag9)
 v25 = 0;
 else
 v25 = 1;
 }
 v27 = flag10 - v25;
 cur -= arm64g_calculate_flag_c(4, flag10, v25, 0) ^ 1;
 goto LABEL_40229c;
 }
 else
 {
 v27 = flag10 - flag9;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 goto LABEL_40229c;
 }
 }
 v27 = flag10;
 if (flag5 == 32767 && (cur || flag10))
 {
LABEL_4024e4:
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag10;
 goto LABEL_4024f0;
 }
 }
 else if (!((char)arm64g_calculate_condition(3, v21 & 4294967295, 0, 0)))
 {
 if (!flag5)
 {
 if (cur || flag10)
 {
 v21 = ~((unsigned int)v21);
 if ((unsigned int)v21)
 goto LABEL_402718;
 v27 = flag9 - flag10;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 iter = flag6;
 goto LABEL_40229c;
 }
 if (flag6 != 32767)
 {
 v27 = flag9;
 iter = flag6;
 }
 else if (cur || flag9)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag9;
 goto LABEL_4024f0;
 }
 else
 {
 goto LABEL_4027a4;
 }
 }
 else
 {
 v21 = -((unsigned int)v21);
 cur |= 0x8000000000000;
LABEL_402718:
 if (v19 != 32767)
 {
 if (116 >= (unsigned int)v21)
 {
 if (63 >= (unsigned int)v21)
 {
 v28 = 64 - (unsigned int)v21;
 if (!flag10 << (v28 & 63))
 v29 = 0;
 else
 v29 = 1;
 v30 = cur << (v28 & 63) | flag10 >> ((char)v21 & 63) | v29;
 cur -= cur >> ((char)v21 & 63);
 }
 else
 {
 if ((unsigned int)v21 != 64)
 flag10 |= cur << ((char)(128 - (unsigned int)v21) & 63);
 if (!flag10)
 v32 = 0;
 else
 v32 = 1;
 v30 = v32 | cur >> ((char)((unsigned int)v21 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag10)
 v30 = 0;
 else
 v30 = 1;
 }
 v27 = flag9 - v30;
 cur -= arm64g_calculate_flag_c(4, flag9, v30, 0) ^ 1;
 iter = v19;
LABEL_40229c:
 flag8 = cur & 2251799813685247;
 if ((cur >> 51 & 1))
 goto LABEL_4022a4;
 }
 else
 {
 if (!cur && !flag9)
 return v21;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 goto LABEL_4026b4;
 goto LABEL_4026b4;
 }
 }
 }
 else
 {
 if (!((char)arm64g_calculate_condition(26, flag5 + 1 & 32766, 0, 0)))
 {
 flag2 = cur | flag10;
 flag3 = cur | flag9;
 if (!flag5)
 {
 if (!flag2)
 {
 if (!flag3)
 goto LABEL_402b10;
 v27 = flag9;
 goto LABEL_402a38;
 }
 v27 = flag10;
 if (!flag3)
 goto LABEL_402a38;
 v27 = flag10 - flag9;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 if (((char)(cur >> 51) & 1))
 {
 v27 = flag9 - flag10;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 v38 = v27 | cur;
LABEL_40230c:
 if (!v38)
 goto LABEL_402460;
 goto LABEL_402310;
 }
 if (!v27 && !cur)
 {
LABEL_402b10:
 v34 = 0;
 goto LABEL_40246c;
 }
 else
 {
 v39 = v27 & 7;
 flag4 = 1;
 goto LABEL_40231c;
 }
 }
 else
 {
 if (iter != 32767)
 {
 if (v19 != 32767)
 {
 if (!flag2)
 goto LABEL_402978;
 goto LABEL_402948;
 }
 }
 else
 {
 if (flag2)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 if (v19 != 32767)
 goto LABEL_402948;
 }
 else if (v19 != 32767)
 {
LABEL_402978:
 if (!flag3)
 goto LABEL_40297c;
 goto LABEL_402c3c;
 }
 }
 if (flag3)
 {
 if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
 v21 &= 4294967295;
 else
 v21 = 1;
 if (flag2)
 {
 v41 = __ROL__(cur, 61) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
LABEL_402bd8:
 v42 = v5 & 2305843009213693951 | v41;
 v43 = v35;
 if (((char)(v43 >> 47) & 1))
 {
 v43 = v35;
 if (!((char)(cur >> 50) & 1))
 {
 v42 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v43 = __ROL__(cur, 61) & 2305843009213693951;
 }
 }
 v45 = v43 * 8 | v42 >> 61;
 v35 = __ROL__(v45, 61) & 2305843009213693951;
 v34 = v42 & 2305843009213693951 | (v45 * 0x2000000000000000 | v45 >> 3) & 0xe000000000000000;
 goto LABEL_4026b4;
 }
 else
 {
LABEL_402c3c:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 goto LABEL_4026b4;
 }
 }
 else if (flag2)
 {
LABEL_402948:
 v41 = __ROL__(cur, 61) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 if (flag3)
 goto LABEL_402bd8;
 v34 = v5 & 2305843009213693951 | v41;
 goto LABEL_4026b4;
 }
 else
 {
LABEL_40297c:
 v34 = 18446744073709551615;
 v21 = 1;
LABEL_4026bc:
 goto LABEL_402368;
 }
 }
 }
 else
 {
 v27 = flag10 - flag9;
 flag8 = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 if (((char)(flag8 >> 51) & 1))
 {
 v27 = flag9 - flag10;
 flag8 = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 goto LABEL_4022a4;
 }
 if (!v27 && !flag8)
 {
 v34 = 0;
 goto LABEL_40246c;
 }
 else
 {
 result = result;
LABEL_4022a4:
 if (flag8)
 {
 if (!flag8)
 v46 = 64;
 else
 v46 = Clz(flag8);
 v47 = v46 - 12;
LABEL_4022b0:
 v50 = v27 >> ((char)-((unsigned int)v47) & 63) | flag8 << ((char)v47 & 63);
 v27 <<= (char)v47 & 63;
 }
 else
 {
 if (!v27)
 v48 = 64;
 else
 v48 = Clz(v27);
 v47 = v48 + 52;
 if ((unsigned int)v47 <= 63)
 goto LABEL_4022b0;
 v50 = v27 << ((char)(v48 - 12) & 63);
 v27 = flag8;
 }
 v51 = v47 * 0x100000000 >> 63 & 0xffffffff00000000 | v47 & 4294967295;
 if (v51 >= iter)
 {
 v52 = v47 - iter;
 v53 = v52 + 1;
 if (63 >= v53)
 {
 v54 = 64 - v53;
 if (!v27 << (v54 & 63))
 v55 = 0;
 else
 v55 = 1;
 cur = v50 >> ((char)v53 & 63);
 v27 = v50 << (v54 & 63) | v27 >> ((char)v53 & 63) | v55;
 goto LABEL_402308;
 }
 else
 {
 if (v53 != 64)
 v27 |= v50 << ((char)(128 - v53) & 63);
 cur = 0;
 if (!v27)
 v56 = 0;
 else
 v56 = 1;
 v27 = v56 | v50 >> ((char)(v52 - 63) & 63);
 v38 = v27;
 goto LABEL_40230c;
 }
 }
 else
 {
 iter -= v51;
 cur = v50 & 18444492273895866367;
 }
 }
 }
 }
 }
 else
 {
 v21 = flag5 - flag6;
 if ((unsigned int)v21 <= 0)
 {
 if ((char)arm64g_calculate_condition(3, v21 & 4294967295, 0, 0))
 {
 v69 = flag5 + 1;
 if (!((char)arm64g_calculate_condition(26, v69 & 32766, 0, 0)))
 {
 flag1 = cur | flag10;
 if (!flag5)
 {
 flag7 = cur | flag9;
 if (flag1)
 {
 v27 = flag10;
 if (!flag7)
 goto LABEL_402a38;
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 if (!((char)(cur >> 51) & 1))
 {
LABEL_402308:
 v38 = v27 | cur;
 goto LABEL_40230c;
 }
 else
 {
 cur &= 18444492273895866367;
 v39 = v27 & 7;
 flag4 = 0;
 iter = 1;
 goto LABEL_40231c;
 }
 }
 else
 {
 if (!flag7)
 {
 v34 = 0;
 goto LABEL_40246c;
 }
 else
 {
 v27 = flag9;
LABEL_402a38:
 flag11 = 0;
 iter = 0;
 goto LABEL_402a40;
 }
 }
 }
 else
 {
 if (iter != 32767)
 {
 if (v19 != 32767)
 {
 if (flag1)
 goto LABEL_402c68;
 goto LABEL_402ac0;
 }
 if (cur || flag9)
 goto LABEL_402d2c;
 if (!flag1)
 return v21;
 goto LABEL_402d00;
 }
 else
 {
 if (flag1)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 if (v19 != 32767)
 {
LABEL_402c68:
 if (cur || flag9)
 goto LABEL_402c70;
 }
 else
 {
 if (cur || flag9)
 goto LABEL_402d2c;
 }
LABEL_402d00:
 v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 goto LABEL_4026b4;
 }
 else
 {
 if (v19 != 32767)
 goto LABEL_402ac0;
 if (!cur && !flag9)
 return v21;
LABEL_402d2c:
 if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
 v21 &= 4294967295;
 else
 v21 = 1;
 if (!flag1)
 {
LABEL_402ac0:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 goto LABEL_4026b4;
 }
 else
 {
LABEL_402c70:
 v73 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v74 = __ROL__(cur, 61) & 2305843009213693951;
 if (((char)(cur >> 50) & 1) && !((char)(cur >> 50) & 1))
 {
 v73 = v7 & 2305843009213693951 | cur * 0x2000000000000000;
 v74 = __ROL__(cur, 61) & 2305843009213693951;
 }
 v75 = v74 * 8 | v73 >> 61;
 v34 = v73 & 2305843009213693951 | (v75 * 0x2000000000000000 | v75 >> 3) & 0xe000000000000000;
 v35 = __ROL__(v75, 61) & 2305843009213693951;
 goto LABEL_4026b4;
 }
 }
 }
 }
 }
 else
 {
 if (v69 != 32767)
 {
 v76 = flag10 + flag9;
 v77 = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 flag4 = 0;
 v39 = (v76 * 0x8000000000000000 | v76 >> 1) & 9223372036854775815 & 7;
 cur = __ROL__(v77, 63) & 9223372036854775807;
 v27 = v77 * 0x8000000000000000 | v76 >> 1;
 iter = v69;
 }
 else
 {
 v67 = v10 & 0xc00000;
 if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
 {
LABEL_402a64:
 goto LABEL_402d10;
 }
 if (v67 != &__dollar_d_15)
 v80 = 0;
 else
 v80 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v80 & (v16 ^ 1)), 0, 0))
 {
LABEL_402d10:
 v1 = 0;
 v83 = __sfp_handle_exceptions(result);
 return __sfp_handle_exceptions(result);
 }
 if (v67 == &g_800000)
 {
 if (!result)
 goto LABEL_402cac;
 goto LABEL_402b78;
 }
LABEL_4029d4:
 v21 = 20;
 if (v67 == &__dollar_d_15)
 {
 cur = 18446744073709551615;
 iter = 32766;
 v27 = 18446744073709551615;
 flag4 = 0;
 v21 = 20;
 if (!result)
 {
LABEL_402644:
 v27 += 8;
 if (!((char)arm64g_calculate_condition(50, v27, 8, 0)))
 cur += 1;
 }
LABEL_40264c:
 flag11 = cur & 0x8000000000000;
 if (flag4)
 {
 v21 = (unsigned int)v21 | 8;
 goto LABEL_402348;
 }
 }
LABEL_402518:
 switch (v67)
 {
 case 0:
LABEL_402550:
 break;
 case 4194304:
 if (!result)
 goto LABEL_402550;
LABEL_402534:
 v34 = 18446744073709551615;
 v21 = (unsigned int)v21 | 20;
 goto LABEL_40246c;
 case 8388608:
 v81 = 1;
LABEL_40252c:
 if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v81 & (unsigned int)result), 0, 0)))
 goto LABEL_402534;
 break;
 default:
 v81 = 0;
 goto LABEL_40252c;
 }
 goto LABEL_40246c;
 }
LABEL_40231c:
 if (!v39)
 {
 flag11 = cur & 0x8000000000000;
 v21 = 0;
 if (flag4)
 {
LABEL_402a40:
 v21 = 0;
 if (((char)(v10 >> 11) & 1))
 v21 = 8;
 }
LABEL_402348:
 if (flag11)
 goto LABEL_40234c;
 goto LABEL_4024f8;
 }
 switch (v78)
 {
 case 4194304:
 v21 = 16;
 if (!result)
 goto LABEL_402644;
 break;
 case 8388608:
 v21 = 16;
 if (result)
 goto LABEL_402644;
 break;
 case 0:
 v21 = 16;
 if (((char)v27 & 15) != 4)
 {
 if (!((char)arm64g_calculate_condition(50, v27, 4, 0)))
 cur += 1;
 v27 += 4;
 break;
 }
 break;
 default:
 flag11 = cur & 0x8000000000000;
 v21 = 16;
 if (flag4)
 {
 v21 = 24;
 goto LABEL_402348;
 }
 }
 goto LABEL_40264c;
 }
 }
 if (flag5)
 {
 v21 = -((unsigned int)v21);
 cur |= 0x8000000000000;
 goto LABEL_4025b0;
 }
 if (cur || flag10)
 {
 v21 = ~((unsigned int)v21);
 if ((unsigned int)v21)
 {
LABEL_4025b0:
 if (v19 != 32767)
 {
 if (116 >= (unsigned int)v21)
 {
 if (63 >= (unsigned int)v21)
 {
 v63 = 64 - (unsigned int)v21;
 if (!flag10 << (v63 & 63))
 v64 = 0;
 else
 v64 = 1;
 v65 = cur << (v63 & 63) | flag10 >> ((char)v21 & 63) | v64;
 cur += cur >> ((char)v21 & 63);
 }
 else
 {
 if ((unsigned int)v21 != 64)
 flag10 |= cur << ((char)(128 - (unsigned int)v21) & 63);
 if (!flag10)
 v66 = 0;
 else
 v66 = 1;
 v65 = v66 | cur >> ((char)((unsigned int)v21 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag10)
 v65 = 0;
 else
 v65 = 1;
 }
 v27 = v65 + flag9;
 if ((char)arm64g_calculate_condition(50, v65, flag9, 0))
 {
 iter = v19;
 goto LABEL_402608;
 }
 else
 {
 cur += 1;
 iter = v19;
 goto LABEL_402608;
 }
 }
 else
 {
 if (!cur && !flag9)
 return v21;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 goto LABEL_4026b4;
 }
 }
 else
 {
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 iter = flag6;
LABEL_402608:
 if (((char)(cur >> 51) & 1))
 {
 iter += 1;
 if (iter != 32767)
 {
 flag4 = 0;
 v27 = v27 & 1 | v27 >> 1 | cur * 0x8000000000000000;
 cur = __ROL__(cur & 18444492273895866367, 63) & 9223372036854775807;
 v39 = v27 & 7;
 goto LABEL_40231c;
 }
 else
 {
 v67 = v10 & 0xc00000;
 if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
 goto LABEL_402a64;
 if (v67 != &__dollar_d_15)
 v68 = 0;
 else
 v68 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v68 & (v16 ^ 1)), 0, 0))
 goto LABEL_402d10;
 if (v67 != &g_800000)
 goto LABEL_4029d4;
 if (result)
 {
LABEL_402b78:
 goto LABEL_402d10;
 }
 else
 {
LABEL_402cac:
 cur = 18446744073709551615;
 v27 = 18446744073709551615;
 iter = 32766;
 v21 = 20;
LABEL_40234c:
 if (iter + 1 != 32767)
 {
 v34 = cur * 0x2000000000000000 | v27 >> 3;
 }
 else
 {
 v67 = v10 & 0xc00000;
 goto LABEL_402518;
 }
 }
LABEL_402368:
 if ((unsigned int)v21)
 {
 *((unsigned long long *)&v1) = v34;
 v83 = __sfp_handle_exceptions(result);
 return __sfp_handle_exceptions(result);
 }
 return v21;
 }
 }
 }
 }
 else
 {
 if (flag6 != 32767)
 {
 v27 = flag9;
 iter = flag6;
 }
 else
 {
 if (!cur && !flag9)
 {
LABEL_4027a4:
 v34 = 0;
 v35 = 0;
 v21 = 0;
 }
 else
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag9;
LABEL_4024f0:
 iter = 32767;
LABEL_4024f8:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = cur * 0x2000000000000000 | v27 >> 3;
 if (iter != 32767)
 {
LABEL_40246c:
 goto LABEL_402368;
 }
 }
LABEL_4026b4:
 if (v35 || v34)
 goto LABEL_4026bc;
 v34 = 0;
 goto LABEL_402368;
 }
 }
 }
 else if (flag6)
 {
 cur |= 0x8000000000000;
 v57 = v21;
 if (flag5 != 32767)
 goto LABEL_4023e0;
LABEL_402694:
 if (!cur && !flag10)
 return v21;
 v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 goto LABEL_4026b4;
 }
 else
 {
 if (cur || flag9)
 {
 if ((unsigned int)v21 != 1)
 {
 v57 = (unsigned int)v21 - 1;
 if (flag5 == 32767)
 {
 if (!cur && !flag10)
 return cur | flag10;
 goto LABEL_4024e4;
 }
LABEL_4023e0:
 if (116 >= (unsigned int)v57)
 {
 if (63 >= (unsigned int)v57)
 {
 v59 = 64 - (unsigned int)v57;
 if (!flag9 << (v59 & 63))
 v60 = 0;
 else
 v60 = 1;
 v61 = cur << (v59 & 63) | flag9 >> ((char)v57 & 63) | v60;
 cur += cur >> ((char)v57 & 63);
 }
 else
 {
 if ((unsigned int)v57 != 64)
 flag9 |= cur << ((char)(128 - (unsigned int)v57) & 63);
 if (!flag9)
 v62 = 0;
 else
 v62 = 1;
 v61 = v62 | cur >> ((char)((unsigned int)v57 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag9)
 v61 = 0;
 else
 v61 = 1;
 }
LABEL_4027c0:
 v27 = v61 + flag10;
 if (!((char)arm64g_calculate_condition(50, v61, flag10, 0)))
 cur += 1;
 goto LABEL_4027c0;
 }
 else
 {
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 goto LABEL_402608;
 }
 }
 v27 = flag10;
 if (flag5 == 32767 && (cur || flag10))
 {
 v21 = (unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1;
 v27 = flag10;
 goto LABEL_4024f0;
 }
 }
 }
 v39 = v27 & 7;
 flag4 = 0;
 if (!iter)
 {
 if (v27 || cur)
 {
LABEL_402310:
 v39 = v27 & 7;
 iter = 0;
 flag4 = 1;
 goto LABEL_40231c;
 }
 else
 {
LABEL_402460:
 v34 = 0;
 v21 = 0;
 goto LABEL_40246c;
 }
 }
}


// Function: sub_402d64 at 0x402d64
void sub_402d64()
{
 __multf3();
 return;
}


// Function: __multf3 at 0x402d70

unsigned int __multf3()
{
 unsigned long long v8; // x1
 unsigned long long v9; // x0
 unsigned long long v17; // x3
 unsigned long long v98; // x7
 unsigned long long iter; // x12
 unsigned long long v18; // x8
 unsigned long long v19; // x17
 unsigned long long v20; // x1
 unsigned int flag1; // w0
 unsigned long long v22; // x8
 unsigned long long v23; // x8
 unsigned long long v24; // x0
 unsigned long long v25; // x3
 unsigned long long v26; // x0
 char v27; // x8
 unsigned long long v28; // x4
 char v29; // x16
 unsigned long long v30; // x5
 unsigned int flag5; // w13
 unsigned long long v10; // x2
 unsigned int v11; // fpcr
 unsigned long v12; // x6
 unsigned long long result; // x9
 char v15; // x15
 unsigned int flag6; // w3
 char *v0; // [bp-0x50]
 char v4; // [bp-0x20]
 unsigned long long v5; // [bp-0x18]
 char v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v8 = *((long long *)&v4);
 v9 = v5;
 v98 = *((long long *)&v4);
 v10 = *((long long *)&v6);
 v12 = v11;
 result = v9 & 281474976710655;
 v15 = (char)(__ROL__(v9, 1)) & 1;
 flag6 = ((unsigned int)v9 * 0x10000 | (unsigned int)(v9 >> 48)) & 4294934527 & 32767;
 switch (flag6)
 {
 case 0:
 v23 = v8 | result;
 if (v23)
 {
 if (result)
 {
 if (!result)
 v24 = 64;
 else
 v24 = Clz(result);
 v25 = v24 - 15;
LABEL_4031c8:
 v27 = (char)v25 + 3;
 result = v8 >> ((char)(61 - v25) & 63) | result << (v27 & 63);
 v18 = v8 << (v27 & 63);
 }
 else
 {
 if (!v8)
 v26 = 64;
 else
 v26 = Clz(v8);
 v25 = v26 + 49;
 v24 = v26 + 64;
 if (v25 <= 60)
 goto LABEL_4031c8;
 v18 = 0;
 result = v8 << ((char)((unsigned int)v25 - 61) & 63);
 }
 v20 = 0;
 v17 = 18446744073709535249 - v24;
 v19 = 0;
 flag1 = 0;
 break;
 }
 else
 {
 result = 0;
 v20 = 4;
 v17 = 0;
 v19 = 1;
 flag1 = 0;
 v18 = v23;
 break;
 }
 case 32767:
 v22 = v8 | result;
 if (!v22)
 {
 result = 0;
 v20 = 8;
 v17 = 32767;
 v19 = 2;
 flag1 = 0;
 v18 = v22;
 break;
 }
 else
 {
 v20 = 12;
 flag1 = ((unsigned int)(__ROL__(result, 17)) & 131071 ^ 1) & 1;
 v17 = 32767;
 v19 = 3;
 v18 = v8;
 break;
 }
 default:
 result = result * 8 | v8 >> 61 | 0x8000000000000;
 v17 = (flag6 & 65535) + 18446744073709535233;
 v18 = __ROL__(v8, 3) & 18446744073709551608;
 v19 = 0;
 v20 = 0;
 flag1 = 0;
 break;
 }
 v28 = __ROL__(v10, 1) & 1;
 iter = v10 & 281474976710655;
 v29 = v28;
 v30 = v28;
 flag5 = ((unsigned int)v10 * 0x10000 | (unsigned int)(v10 >> 48)) & 4294934527 & 32767;
 switch (flag5)
 {
 default:
 break;
 }
}


// Function: __sfp_handle_exceptions at 0x403570
unsigned long long __sfp_handle_exceptions(unsigned long long a0)
{
 unsigned long long v0; // qcflag

 if (((char)(a0 >> 4) & 1))
 a0 = ((unsigned long long)(v0 >> 64) || (unsigned long long)v0) * 0x8000000;
 return a0;
}


// Function: _fini at 0x4035e0
long long _fini()
{
 unsigned long v0; // x0

 return v0;
}

