// Angr Decompilation of 2_gcc_O0_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* Rotate left macro */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

/* Soft float function declarations */
extern unsigned long long __addtf3(unsigned long long *a0);
extern unsigned int __multf3(unsigned long long a0, unsigned long long a1);

/* Helper function declarations for soft float */
extern unsigned long long arm64g_calculate_flag_c(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned int a3);
extern int arm64g_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
extern unsigned int Clz(unsigned long long a0);
extern unsigned long long __sfp_handle_exceptions(unsigned long long a0);

/* Stack protection */
extern void __stack_chk_fail(void) __attribute__((noreturn));

/* Extern declarations for CRT stub functions */
extern void __libc_start_main(void);
extern void abort(void) __attribute__((noreturn));
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);


// Function: __dollar_x at 0x4006d0
extern unsigned long long g_414f88;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_414f88;
}


// Function: sub_4006e4 at 0x4006e4
long long sub_4006e4()
{
 __libc_start_main(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4007b0 at 0x4007b0
void sub_4007b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4007c8 at 0x4007c8
void sub_4007c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40083c at 0x40083c
void sub_40083c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400888 at 0x400888
long long sub_400888()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x400894
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: process_char at 0x4008ac
long long process_char(char a0)
{
 if (a0 > 64 && 90 >= a0)
 return a0 + 32;
 return a0;
}


// Function: process_short at 0x4008e8
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return (a0 + a1 & 65535) * 0x10000 >> 31 & 0xffff0000 | a0 + a1 & 65535;
}


// Function: process_int at 0x400910
int process_int(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: process_long at 0x40092c
unsigned long long process_long(unsigned long a0)
{
 return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: process_ll at 0x400944
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x40095c
long long process_float()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_double at 0x400980
extern char g_403000;

unsigned long long process_double()
{
 return (unsigned long long)(unsigned long)(unsigned int)&g_403000;
}


// Function: process_ld at 0x4009a8
extern unsigned long long g_403e00;

long long process_ld()
{
 unsigned long long v3; // q0
 unsigned long long v4; // x0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 __multf3(v3, v1);
 v4 = __addtf3(&g_403e00);
 return __addtf3(&g_403e00);
}


// Function: process_bool at 0x4009d8
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // w0

 if (a0 > 0 && !((char)a0 & 1))
 v0 = 1;
 else
 v0 = 0;
 return v0 & 1 & 255;
}


// Function: const_param at 0x400a18
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x400a34
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = *(ptr);
 v1 = *(ptr);
 return v0 + v1;
}


// Function: test_data_types_l1 at 0x400a68
extern char __dollar_d;
extern char __stack_chk_guard;

unsigned long long test_data_types_l1()
{
 unsigned long long v10; // x1
 char *v0; // [bp-0x20]
 unsigned int v1[1]; // [bp-0x10]
 unsigned int v2[1]; // [bp-0xc]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 puts(&__dollar_d);
 printf("DT-L1-01 (process_char): %c\n", (int)process_char(65) & 255);
 printf("DT-L1-01 (process_char): %c\n", (int)process_char(98) & 255);
 printf("DT-L1-02 (process_short): %d\n", process_short(100, 200) * 0x10000 >> 31 & 0xffff0000 | process_short(100, 200) & 65535);
 printf("DT-L1-03 (process_int): %d\n", process_int(5) & 4294967295);
 printf("DT-L1-04 (process_long): %ld\n", process_long(100));
 v10 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n", v10);
 process_float();
 printf("DT-L1-06 (process_float): %.2f\n", v10);
 process_double();
 printf("DT-L1-07 (process_double): %.2f\n", (double)process_double());
 process_ld();
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4) & 255);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(3) & 255);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4294967294) & 255);
 v1[0] = 5;
 printf("DT-L1-10 (const_param): %d\n", const_param(v1) & 4294967295);
 v2[0] = 10;
 printf("DT-L1-11 (volatile_access): %d\n", volatile_access(v2) & 4294967295);
 if (v3 == *((long long *)&__stack_chk_guard))
 return (unsigned long long)&__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: array_1d_stack at 0x400c38
unsigned int array_1d_stack(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((int *)(a0 + (__ROL__(i, 2) & 18446744073709551612)));
 }
 return v0;
}


// Function: array_string at 0x400c98
unsigned int array_string(char *a0)
{
 unsigned int i; // [bp-0x4]

 for (i = 0; a0[i]; i += 1);
 return i;
}


// Function: array_2d_stack at 0x400cd8
unsigned int array_2d_stack(unsigned long a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = 0;
 for (v1 = 0; v1 <= 9; v1 += 1)
 {
 v0 += *((int *)(a0 + (__ROL__((__ROL__(v1, 2) & 18446744073709551612) + v1, 3) & 18446744073709551608) + v1 * 4));
 }
 return v0;
}


// Function: array_3d at 0x400d44
unsigned int array_3d(unsigned long a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]
 unsigned int j; // [bp-0x8]
 unsigned int k; // [bp-0x4]

 v0 = 0;
 for (i = 0; i <= 4; i += 1)
 {
 for (j = 0; j <= 4; j += 1)
 {
 for (k = 0; k <= 4; k += 1)
 {
 v0 += *((int *)(a0 + (__ROL__((__ROL__((__ROL__(i, 1) & 18446744073709551614) + i, 3) & 18446744073709551608) + i, 2) & 18446744073709551612) + ((__ROL__(j, 2) & 18446744073709551612) + j + k) * 4));
 }
 }
 }
 return v0;
}


// Function: array_vla at 0x400e0c
unsigned int array_vla(unsigned int a0, unsigned long a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v0 += *((int *)(a1 + (__ROL__(i, 2) & 18446744073709551612)));
 }
 return v0;
}


// Function: array_pointer at 0x400e6c
unsigned int array_pointer(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((int *)(a0 + (__ROL__((__ROL__(i, 2) & 18446744073709551612) + i, 3) & 18446744073709551608)));
 }
 return v0;
}


// Function: pointer_array at 0x400edc
unsigned int pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]
 unsigned int i; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v0 = a1;
 v1 = 0;
 if (v0 > 10)
 v0 = 10;
 v3 = v0;
 for (i = 0; i < v3; i += 1)
 {
 if (*((long long *)(a0 + (__ROL__(i, 3) & 18446744073709551608))))
 v1 += *((int *)*((long long *)(a0 + (__ROL__(i, 3) & 18446744073709551608))));
 }
 return v1;
}


// Function: array_complex_index at 0x400f74
unsigned long long array_complex_index(unsigned long a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if (a3 >= 0 && a1 > a3 && a4 >= 0 && a4 < a2)
 return *((int *)(a0 + (__ROL__((a1 * a4 + a3) * 0x100000000 >> 63 & 0xffffffff00000000 | a1 * a4 + a3 & 4294967295, 2) & 18446744073709551612)));
 return 4294967295;
}


// Function: array_oob at 0x400ffc
unsigned int array_oob(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = 0;
 for (v1 = 0; v1 <= a1; v1 += 1)
 {
 v0 += *((int *)(a0 + (__ROL__(v1, 2) & 18446744073709551612)));
 }
 return v0;
}


// Function: test_array_types at 0x40105c
extern char __stack_chk_guard;
extern char g_4037f0;

unsigned long long test_array_types()
{
 unsigned int v29; // w1
 char *v0; // [bp-0x560]
 unsigned int v1; // [bp-0x550]
 unsigned int v2; // [bp-0x54c]
 unsigned int v3; // [bp-0x548]
 unsigned int i; // [bp-0x544]
 unsigned int m; // [bp-0x540]
 unsigned int j; // [bp-0x53c]
 unsigned int n; // [bp-0x538]
 unsigned int i0; // [bp-0x534]
 unsigned int k; // [bp-0x530]
 unsigned int l; // [bp-0x52c]
 unsigned long v11; // [bp-0x528]
 unsigned int v12; // [bp-0x520]
 unsigned long long v13; // [bp-0x518]
 unsigned long long v14; // [bp-0x510]
 unsigned int v15; // [bp-0x508]
 unsigned int *v17; // [bp-0x500]
 unsigned int *v18; // [bp-0x4f8]
 unsigned int *v19; // [bp-0x4f0]

 v17 = &v1;
 v18 = &v2;
 v19 = &v3;
 unsigned long v20; // [bp-0x4b0]
 unsigned long v21; // [bp-0x460]
 unsigned long v22; // [bp-0x398]
 unsigned long v23; // [bp-0x208]
 char v24[8]; // [bp-0x10]
 unsigned long v25; // [bp-0x8]
 char v26; // [bp+0x0]

 v0 = &v26;
 v25 = *((long long *)&__stack_chk_guard);
 puts(&g_4037f0);
 v13 = 8589934593;
 v14 = 17179869187;
 v15 = 5;
 printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&v13, 5) & 4294967295);
 strncpy(v24, "hello", 5);
 printf("ARR-L1-02 (array_string): %d\n", array_string(&v24) & 4294967295);
 for (i = 0; i <= 9; i += 1)
 {
 for (m = 0; m <= 9; m += 1)
 {
 if (i == m)
 v29 = i;
 else
 v29 = 0;
 *((unsigned int *)((char *)&v22 + (__ROL__((__ROL__((__ROL__(i, 2) & 18446744073709551612) + i, 1) & 18446744073709551614) + m, 2) & 18446744073709551612))) = v29;
 }
 }
 printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v22) & 4294967295);
 for (j = 0; j <= 4; j += 1)
 {
 for (n = 0; n <= 4; n += 1)
 {
 for (i0 = 0; i0 <= 4; i0 += 1)
 {
 *((unsigned int *)((char *)&v23 + (__ROL__((__ROL__((__ROL__(j, 1) & 18446744073709551614) + j, 3) & 18446744073709551608) + j + (__ROL__(n, 2) & 18446744073709551612) + n + i0, 2) & 18446744073709551612))) = 1;
 }
 }
 }
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v23) & 4294967295);
 v11 = 85899345930;
 v12 = 30;
 printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, &v11) & 4294967295);
 for (k = 0; k <= 4; k += 1)
 {
 *((unsigned int *)((char *)&v21 + (__ROL__((__ROL__(k, 2) & 18446744073709551612) + k, 3) & 18446744073709551608))) = ((((k * 4 | k >> 30) & 0xfffffffc) + k) * 2 | ((k * 4 | k >> 30) & 0xfffffffc) + k >> 31) & 4294967294;
 }
 printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(&v21, 5) & 4294967295);
 v1 = 10;
 v2 = 20;
 v3 = 30;
 memset(v17, 0, 80);
 v17 = &v1;
 v18 = &v2;
 v19 = &v3;
 printf("ARR-L2-03 (pointer_array): %d\n", pointer_array(&v17, 3) & 4294967295);
 for (l = 0; l <= 19; l += 1)
 {
 *((unsigned int *)((char *)&v20 + (__ROL__(l, 2) & 18446744073709551612))) = l;
 }
 printf("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(&v20, 5, 4, 2, 3) & 4294967295);
 if (v25 == *((long long *)&__stack_chk_guard))
 return &__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_single at 0x4013e8
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x401404
typedef struct struct_ptr_double {
 unsigned int field_0;
} struct_ptr_double;

int ptr_double(struct_ptr_double **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401424
typedef struct struct_ptr_triple_0 {
 unsigned int field_0;
} struct_ptr_triple_0;

typedef struct struct_ptr_triple_1 {
 struct struct_ptr_triple_0 *field_0;
} struct_ptr_triple_1;

int ptr_triple(struct_ptr_triple_1 **a0)
{
 return *(a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x401448
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int *cur; // [bp-0x18]
 unsigned int v1; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 cur = a0;
 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *(cur);
 cur += 1;
 }
 return v1;
}


// Function: ptr_offset at 0x4014a8
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + (__ROL__(a1, 2) & 18446744073709551612)));
}


// Function: ptr_diff at 0x4014d0
unsigned long long ptr_diff(unsigned long a0)
{
 unsigned long v0; // x1

 return a0 - v0 >> 63 & 0xc000000000000000 | ((a0 - v0) * 0x4000000000000000 | a0 - v0 >> 2) & 4611686018427387903;
}


// Function: ptr_void at 0x4014f4
unsigned long long ptr_void(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((char *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: ptr_const at 0x40153c
unsigned int ptr_const(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x401558
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Function: ptr_func_simple at 0x401584
int ptr_func_simple(int (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1);
}


// Function: ptr_func_complex at 0x4015a8
extern char __stack_chk_guard;

long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 unsigned int v5; // w0
 char *v0; // [bp-0x40]
 unsigned long v1; // [bp-0x18]
 unsigned long long result; // [bp-0x10]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 v1 = "test";
 result = 0;
 v5 = a0(a1, &v1, a0);
 if (v3 == *((long long *)&__stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_cast at 0x401620
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x401650
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x401664
unsigned int opaque_handle_op(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: complex_callback at 0x40167c
long long complex_callback(unsigned int *ptr, unsigned long long *a1)
{
 unsigned int v0; // w0

 *(ptr) = *(ptr) + 10;
 if (!*(a1))
 v0 = 0;
 else
 v0 = 1;
 return v0 & 255;
}


// Function: test_pointer_types at 0x4016b8
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

extern char __stack_chk_guard;
extern char g_403950;

unsigned long long test_pointer_types()
{
 char *v0; // [bp-0xc0]
 unsigned int v1_val; // [bp-0xa1]
 unsigned int *v1; // [bp-0xa0]
 unsigned int v2[1]; // [bp-0x9c]
 unsigned int v3_val; // [bp-0x98]
 unsigned int *v3; // [bp-0x94]
 unsigned int v4_val; // [bp-0x90]
 unsigned int *v4; // [bp-0x8c]
 unsigned int v5_val; // [bp-0x88]
 char *v5; // [bp-0x84]
 unsigned int v6[1]; // [bp-0x80]
 unsigned int v7[1]; // [bp-0x7c]
 unsigned int v8; // [bp-0x78]
 unsigned int v9[1]; // [bp-0x74]
 unsigned int *v10; // [bp-0x70]
 unsigned int *v11; // [bp-0x68]
 struct_ptr_test_3 **v12; // [bp-0x60]
 struct_ptr_test_0 **v13; // [bp-0x58]
 struct_ptr_test_2 **v14; // [bp-0x50]
 unsigned int *v8_ptr; // [bp-0x48]
 unsigned long long v15; // [bp-0x48]
 unsigned long long v16; // [bp-0x40]
 unsigned long long v17; // [bp-0x38]
 unsigned int v18; // [bp-0x30]
 unsigned long long v19; // [bp-0x28]
 unsigned long long v20; // [bp-0x20]
 unsigned int v21; // [bp-0x18]
 unsigned long long v22; // [bp-0x10]
 unsigned long long v23; // [bp-0x8]
 unsigned int v24; // [bp-0x4]
 unsigned long v25; // [bp-0x8]
 char v26; // [bp+0x0]

 v0 = &v26;
 v25 = *((long long *)&__stack_chk_guard);
 puts(&g_403950);
 v2[0] = 5;
 printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(v2) & 4294967295);
 v3_val = 10;
 v3 = &v3_val;
 v10 = v3;
 v13 = &v10;
 printf("PTR-L2-02 (ptr_double): %d\n", ptr_double(v13) & 4294967295);
 v4_val = 5;
 v4 = &v4_val;
 v11 = v4;
 v12 = &v11;
 v14 = &v12;
 printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(v14) & 4294967295);
 v16 = 8589934593;
 v17 = 17179869187;
 v18 = 5;
 printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&v16, 5) & 4294967295);
 v19 = 85899345930;
 v20 = 171798691870;
 v21 = 50;
 printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(&v19, 2) & 4294967295);
 v22 = 0xa00000000;
 v23 = 128849018900;
 v24 = 40;
 printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&v24) & 4294967295);
 v5_val = 42;
 v5 = &v5_val;
 v1_val = 65;
 v1 = &v1_val;
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(v5, 0) & 4294967295);
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(v1, 1) & 4294967295);
 v6[0] = 10;
 printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(v6) & 4294967295);
 v7[0] = 10;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(v7) & 4294967295);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5) & 4294967295);
 v8 = 5;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v8) & 4294967295);
 *((unsigned int [1])v9) = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&v9) & 4294967295);
 v15 = opaque_handle_create(10);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(v15) & 4294967295);
 if (v25 == *((long long *)&__stack_chk_guard))
 return &__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: struct_simple at 0x401968
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x401998
unsigned int struct_array(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((int *)(a0 + (__ROL__((__ROL__(i, 1) & 18446744073709551614) + i, 2) & 18446744073709551612))) + *((int *)(a0 + (__ROL__((__ROL__(i, 1) & 18446744073709551614) + i, 2) & 18446744073709551612) + 4)) + *((int *)(a0 + (__ROL__((__ROL__(i, 1) & 18446744073709551614) + i, 2) & 18446744073709551612) + 8));
 }
 return v0;
}


// Function: struct_nested at 0x401a58
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x401a7c
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x401aa0
typedef struct struct_with_ptr_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_with_ptr_1 *field_8;
} struct_with_ptr_0;

typedef struct struct_with_ptr_1 {
 unsigned int field_0;
} struct_with_ptr_1;

int struct_with_ptr(struct_with_ptr_0 *idx)
{
 unsigned int v0; // w0

 if (idx->field_8)
  v0 = idx->field_8->field_0;
 else
  v0 = 0;
 return v0 + idx->field_0;
}


// Function: struct_bitfields at 0x401ae0
int struct_bitfields(unsigned int *a0)
{
 return (*(a0) & 1 & 255) + ((*(a0) * 0 | *(a0) >> 1) & 3 & 255) + ((*(a0) * 0 | *(a0) >> 3) & 7 & 255) + ((*(a0) * 0 | *(a0) >> 6) & 1023 & 65535);
}


// Function: union_type at 0x401b40
int union_type(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((int *)a0);
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: union_array at 0x401b98
unsigned int union_array(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((int *)(a0 + (__ROL__(i, 2) & 18446744073709551612)));
 }
 return v0;
}


// Function: enum_type at 0x401bf8
unsigned int enum_type(unsigned int a0)
{
 return ((((a0 * 4 | a0 >> 30) & 0xfffffffc) + a0) * 2 | ((a0 * 4 | a0 >> 30) & 0xfffffffc) + a0 >> 31) & 4294967294;
}


// Function: enum_switch at 0x401c1c
unsigned long long enum_switch(unsigned int a0)
{
 if (a0 == 3)
 return 4294967295;
 if (3 < a0)
 return 4294967197;
 if (a0 == 2)
 {
 return 50;
 }
 else if (2 >= a0)
 {
 if (!a0)
 {
 return 0;
 }
 else if (a0 == 1)
 {
 return 100;
 }
 }
 return 4294967197;
}


// Function: struct_func_ptr at 0x401c9c
typedef struct struct_func_ptr_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_func_ptr_0;

int struct_func_ptr(struct_func_ptr_0 *a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 return (*((long long *)(*((long long *)&v1) + 8)))(a0->field_0, a0->field_8);
}


// Function: linked_list at 0x401cc4
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

unsigned int linked_list(struct_0 *a0)
{
 unsigned int v0; // [bp-0xc]
 struct_0 *cur; // [bp-0x8]

 v0 = 0;
 for (cur = a0; cur; cur = cur->field_8)
 {
 v0 += cur->field_0;
 }
 return v0;
}


// Function: doubly_linked_list at 0x401d14
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

unsigned int doubly_linked_list(struct_0 *a0)
{
 unsigned int v0; // [bp-0xc]
 struct_0 *v1; // [bp-0x8]

 v0 = 0;
 for (v1 = a0; v1; v1 = v1->field_8)
 {
 v0 += v1->field_0;
 }
 return v0;
}


// Function: binary_tree_sum at 0x401d64
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0;

unsigned long long binary_tree_sum(struct_0 *a0)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0)
 {
 v2 = binary_tree_sum(a0->field_8);
 v3 = binary_tree_sum(a0->field_10);
 return a0->field_0 + v2 + v3;
 }
 return 0;
}


// Function: binary_tree at 0x401dbc
unsigned long long binary_tree(void* a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = binary_tree_sum(a0);
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401dd8
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]
 unsigned long cur; // [bp-0x8]

 v0 = 0;
 for (i = 0; i < (int)ptr[10]; i += 1)
 {
 for (cur = ptr[i]; cur; cur = *((long long *)(cur + 8)))
 {
 v0 += *((int *)cur);
 }
 }
 return v0;
}


// Function: test_composite_types at 0x401e58
extern char __stack_chk_guard;
extern char g_403b58;

unsigned long long test_composite_types()
{
 char *v0; // [bp-0x1c0]
 unsigned int v1[2]; // [bp-0x1a8]
 unsigned int v3[2]; // [bp-0x1a0]
 unsigned int v4; // [bp-0x198]
 unsigned int v5; // [bp-0x190]
 unsigned long long flag1; // [bp-0x188]
 unsigned int v7; // [bp-0x180]
 char *v8; // [bp-0x178]
 unsigned int v9; // [bp-0x170]
 unsigned long long v10; // [bp-0x168]
 unsigned int result; // [bp-0x160]
 unsigned long long flag7; // [bp-0x158]
 unsigned long long v13; // [bp-0x150]
 unsigned long long v14; // [bp-0x148]
 unsigned int v15; // [bp-0x140]
 unsigned int v16; // [bp-0x138]
 unsigned long long flag5; // [bp-0x130]
 unsigned long long flag6; // [bp-0x128]
 unsigned int v19[4]; // [bp-0x120]
 unsigned long long v20; // [bp-0x110]
 unsigned long long v21; // [bp-0x100]
 unsigned int v22; // [bp-0xf0]
 unsigned long v23; // [bp-0xe8]
 unsigned int v24; // [bp-0xe0]
 unsigned long long v25; // [bp-0xd8]
 unsigned long long v26; // [bp-0xd0]
 unsigned long long v27; // [bp-0xc8]
 unsigned int v28; // [bp-0xc0]
 char *v29; // [bp-0xb8]
 char v30; // [bp-0xb0], Other Possible Types: unsigned int
 char *v31; // [bp-0xa8]
 char v32; // [bp-0xa0], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0x98]
 unsigned int v34; // [bp-0x90]
 char *v35; // [bp-0x88]
 unsigned long long flag3; // [bp-0x80]
 unsigned int v38; // [bp-0x78]
 unsigned long long flag4; // [bp-0x70]
 char *v40; // [bp-0x68]
 char *v42; // [bp-0x60]
 char *v43; // [bp-0x60]
 unsigned int v44; // [bp-0x10], Other Possible Types: unsigned long long
 unsigned long v45; // [bp-0x8]
 char v46; // [bp+0x0]

 v0 = &v46;
 v45 = *((long long *)&__stack_chk_guard);
 puts(&g_403b58);
 *(&v3) = 8589934593;
 v4 = 3;
 printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&v3) & 4294967295);
 v25 = 4294967297;
 *((unsigned int [2])&v26) = 8589934593;
 v27 = 8589934594;
 printf("CMP-L2-02 (struct_array): %d\n", struct_array(&v25, 2) & 4294967295);
 v13 = 42949672965;
 v14 = 0x6400000000;
 v15 = 200;
 printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&v13) & 4294967295);
 *(&v19) = 792281625197983608165158092801;
 v20 = 1095216660500;
 v21 = 0x2a000000ff0000000000000000;
 printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(&v19) & 4294967295);
 v5 = 20;
 flag1 = 0;
 v7 = 10;
 v8 = &v5;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v7) & 4294967295);
 *(&v1) = *(&v1) | 1;
 *(v1) = *(v1) & 0xfffffff8 | (*(v1) & 4294967289 | __ROL__(2, 1) & 6) & 7;
 *(&v1) = *(&v1) & 0xffffffff00000000 | *(v1);
 *(v1) = *(v1) & 0xffffffc0 | (*(v1) & 4294967239 | __ROL__(3, 3) & 56) & 63;
 *(&v1) = *(&v1) & 0xffffffff00000000 | *(v1);
 *(v1) = *(v1) & 0xffff0000 | (*(v1) & 4294901823 | __ROL__(100, 6) & 65472) & 65535;
 *(&v1) = *(&v1) & 0xffffffff00000000 | *(v1);
 *(&v1) = *(&v1) & 18442240478377148415;
 printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v1) & 4294967295);
 v22 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n", union_type(&v22, 0) & 4294967295);
 v23 = 85899345930;
 v24 = 30;
 printf("CMP-L2-08 (union_array): %d\n", union_array(&v23, 3) & 4294967295);
 printf("CMP-L2-09 (enum_type): %d\n", enum_type(1) & 4294967295);
 printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(2) & 4294967295);
 v9 = 10;
 v10 = process_int;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v9) & 4294967295);
 v28 = 10;
 v29 = &v30;
 v30 = 20;
 v31 = &v32;
 v32 = 30;
 flag2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", linked_list(&v28) & 4294967295);
 v34 = 10;
 v35 = &v38;
 flag3 = 0;
 v38 = 20;
 flag4 = 0;
 v40 = &v34;
 v35 = &v38;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v34) & 4294967295);
 v16 = 100;
 flag5 = 0;
 flag6 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(&v16) & 4294967295);
 result = 1;
 flag7 = 0;
 memset(&v43, 0, 80);
 v44 = 0;
 v42 = &result;
 v44 = 2;
 v43 = &result;
 printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v43) & 4294967295);
 if (v45 == *((long long *)&__stack_chk_guard))
 return &__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
}


// Function: main at 0x4021f4
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_402218 at 0x402218
void sub_402218()
{
 __addtf3();
 return;
}


// Function: __addtf3 at 0x402220
extern unsigned long long g_400000;
extern char g_800000;

unsigned long long __addtf3(unsigned long long *a0, unsigned long long a1)
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
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned long long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v5 = v1;
 v6 = v2;
 v7 = a1;
 v8 = v3;
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
 goto LABEL_402298;
 }
 if (cur || flag9)
 {
 v21 = (unsigned int)v21 - 1;
 if ((unsigned int)v21 != 1)
 {
LABEL_402298:
 if (iter == 32767)
 goto LABEL_4026e4;
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
 goto LABEL_4022ec;
 }
 else
 {
 v27 = flag10 - flag9;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 goto LABEL_4022ec;
 }
 }
 v27 = flag10;
 if (flag5 == 32767 && (cur || flag10))
 {
LABEL_402534:
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag10;
 goto LABEL_402540;
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
 goto LABEL_402768;
 v27 = flag9 - flag10;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 iter = flag6;
 goto LABEL_4022ec;
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
 goto LABEL_402540;
 }
 else
 {
 goto LABEL_4027f4;
 }
 }
 else
 {
 v21 = -((unsigned int)v21);
 cur |= 0x8000000000000;
LABEL_402768:
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
LABEL_4022ec:
 flag8 = cur & 2251799813685247;
 if ((cur >> 51 & 1))
 goto LABEL_4022f4;
 }
 else
 {
 if (!cur && !flag9)
 return v21;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 goto LABEL_402704;
 goto LABEL_402704;
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
 goto LABEL_402b60;
 v27 = flag9;
 goto LABEL_402a88;
 }
 v27 = flag10;
 if (!flag3)
 goto LABEL_402a88;
 v27 = flag10 - flag9;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 if (((char)(cur >> 51) & 1))
 {
 v27 = flag9 - flag10;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 v38 = v27 | cur;
LABEL_40235c:
 if (!v38)
 goto LABEL_4024b0;
 goto LABEL_402360;
 }
 if (!v27 && !cur)
 {
LABEL_402b60:
 v34 = 0;
 goto LABEL_4024bc;
 }
 else
 {
 v39 = v27 & 7;
 flag4 = 1;
 goto LABEL_40236c;
 }
 }
 else
 {
 if (iter != 32767)
 {
 if (v19 != 32767)
 {
 if (!flag2)
 goto LABEL_4029c8;
 goto LABEL_402998;
 }
 }
 else
 {
 if (flag2)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 if (v19 != 32767)
 goto LABEL_402998;
 }
 else if (v19 != 32767)
 {
LABEL_4029c8:
 if (!flag3)
 goto LABEL_4029cc;
 goto LABEL_402c8c;
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
LABEL_402c28:
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
 goto LABEL_402704;
 }
 else
 {
LABEL_402c8c:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 goto LABEL_402704;
 }
 }
 else if (flag2)
 {
LABEL_402998:
 v41 = __ROL__(cur, 61) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 if (flag3)
 goto LABEL_402c28;
 v34 = v5 & 2305843009213693951 | v41;
 goto LABEL_402704;
 }
 else
 {
LABEL_4029cc:
 v34 = 18446744073709551615;
 v21 = 1;
LABEL_40270c:
 goto LABEL_4023b8;
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
 goto LABEL_4022f4;
 }
 if (!v27 && !flag8)
 {
 v34 = 0;
 goto LABEL_4024bc;
 }
 else
 {
 result = result;
LABEL_4022f4:
 if (flag8)
 {
 if (!flag8)
 v46 = 64;
 else
 v46 = Clz(flag8);
 v47 = v46 - 12;
LABEL_402300:
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
 goto LABEL_402300;
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
 goto LABEL_402358;
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
 goto LABEL_40235c;
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
 goto LABEL_402a88;
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 if (!((char)(cur >> 51) & 1))
 {
LABEL_402358:
 v38 = v27 | cur;
 goto LABEL_40235c;
 }
 else
 {
 cur &= 18444492273895866367;
 v39 = v27 & 7;
 flag4 = 0;
 iter = 1;
 goto LABEL_40236c;
 }
 }
 else
 {
 if (!flag7)
 {
 v34 = 0;
 goto LABEL_4024bc;
 }
 else
 {
 v27 = flag9;
LABEL_402a88:
 flag11 = 0;
 iter = 0;
 goto LABEL_402a90;
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
 goto LABEL_402cb8;
 goto LABEL_402b10;
 }
 if (cur || flag9)
 goto LABEL_402d7c;
 if (!flag1)
 return v21;
 goto LABEL_402d50;
 }
 else
 {
 if (flag1)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 if (v19 != 32767)
 {
LABEL_402cb8:
 if (cur || flag9)
 goto LABEL_402cc0;
 }
 else
 {
 if (cur || flag9)
 goto LABEL_402d7c;
 }
LABEL_402d50:
 v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 goto LABEL_402704;
 }
 else
 {
 if (v19 != 32767)
 goto LABEL_402b10;
 if (!cur && !flag9)
 return v21;
LABEL_402d7c:
 if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
 v21 &= 4294967295;
 else
 v21 = 1;
 if (!flag1)
 {
LABEL_402b10:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 goto LABEL_402704;
 }
 else
 {
LABEL_402cc0:
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
 goto LABEL_402704;
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
LABEL_402ab4:
 goto LABEL_402d60;
 }
 if (v67 != &g_400000)
 v80 = 0;
 else
 v80 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v80 & (v16 ^ 1)), 0, 0))
 {
LABEL_402d60:
 v1 = 0;
 v83 = __sfp_handle_exceptions();
 return __sfp_handle_exceptions();
 }
 if (v67 == &g_800000)
 {
 if (!result)
 goto LABEL_402cfc;
 goto LABEL_402bc8;
 }
LABEL_402a24:
 v21 = 20;
 if (v67 == &g_400000)
 {
 cur = 18446744073709551615;
 iter = 32766;
 v27 = 18446744073709551615;
 flag4 = 0;
 v21 = 20;
 if (!result)
 {
LABEL_402694:
 v27 += 8;
 if (!((char)arm64g_calculate_condition(50, v27, 8, 0)))
 cur += 1;
 }
LABEL_40269c:
 flag11 = cur & 0x8000000000000;
 if (flag4)
 {
 v21 = (unsigned int)v21 | 8;
 goto LABEL_402398;
 }
 }
LABEL_402568:
 switch (v67)
 {
 case 0:
LABEL_4025a0:
 break;
 case 4194304:
 if (!result)
 goto LABEL_4025a0;
LABEL_402584:
 v34 = 18446744073709551615;
 v21 = (unsigned int)v21 | 20;
 goto LABEL_4024bc;
 case 8388608:
 v81 = 1;
LABEL_40257c:
 if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v81 & (unsigned int)result), 0, 0)))
 goto LABEL_402584;
 break;
 default:
 v81 = 0;
 goto LABEL_40257c;
 }
 goto LABEL_4024bc;
 }
LABEL_40236c:
 if (!v39)
 {
 flag11 = cur & 0x8000000000000;
 v21 = 0;
 if (flag4)
 {
LABEL_402a90:
 v21 = 0;
 if (((char)(v10 >> 11) & 1))
 v21 = 8;
 }
LABEL_402398:
 if (flag11)
 goto LABEL_40239c;
 goto LABEL_402548;
 }
 switch (v78)
 {
 case 4194304:
 v21 = 16;
 if (!result)
 goto LABEL_402694;
 break;
 case 8388608:
 v21 = 16;
 if (result)
 goto LABEL_402694;
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
 goto LABEL_402398;
 }
 }
 goto LABEL_40269c;
 }
 }
 if (flag5)
 {
 v21 = -((unsigned int)v21);
 cur |= 0x8000000000000;
 goto LABEL_402600;
 }
 if (cur || flag10)
 {
 v21 = ~((unsigned int)v21);
 if ((unsigned int)v21)
 {
LABEL_402600:
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
 goto LABEL_402658;
 }
 else
 {
 cur += 1;
 iter = v19;
 goto LABEL_402658;
 }
 }
 else
 {
 if (!cur && !flag9)
 return v21;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 goto LABEL_402704;
 }
 }
 else
 {
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 iter = flag6;
LABEL_402658:
 if (((char)(cur >> 51) & 1))
 {
 iter += 1;
 if (iter != 32767)
 {
 flag4 = 0;
 v27 = v27 & 1 | v27 >> 1 | cur * 0x8000000000000000;
 cur = __ROL__(cur & 18444492273895866367, 63) & 9223372036854775807;
 v39 = v27 & 7;
 goto LABEL_40236c;
 }
 else
 {
 v67 = v10 & 0xc00000;
 if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
 goto LABEL_402ab4;
 if (v67 != &g_400000)
 v68 = 0;
 else
 v68 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v68 & (v16 ^ 1)), 0, 0))
 goto LABEL_402d60;
 if (v67 != &g_800000)
 goto LABEL_402a24;
 if (result)
 {
LABEL_402bc8:
 goto LABEL_402d60;
 }
 else
 {
LABEL_402cfc:
 cur = 18446744073709551615;
 v27 = 18446744073709551615;
 iter = 32766;
 v21 = 20;
LABEL_40239c:
 if (iter + 1 != 32767)
 {
 v34 = cur * 0x2000000000000000 | v27 >> 3;
 }
 else
 {
 v67 = v10 & 0xc00000;
 goto LABEL_402568;
 }
 }
LABEL_4023b8:
 if ((unsigned int)v21)
 {
 *((unsigned long long *)&v1) = v34;
 v83 = __sfp_handle_exceptions();
 return __sfp_handle_exceptions();
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
LABEL_4027f4:
 v34 = 0;
 v35 = 0;
 v21 = 0;
 }
 else
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag9;
LABEL_402540:
 iter = 32767;
LABEL_402548:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = cur * 0x2000000000000000 | v27 >> 3;
 if (iter != 32767)
 {
LABEL_4024bc:
 goto LABEL_4023b8;
 }
 }
LABEL_402704:
 if (v35 || v34)
 goto LABEL_40270c;
 v34 = 0;
 goto LABEL_4023b8;
 }
 }
 }
 else if (flag6)
 {
 cur |= 0x8000000000000;
 v57 = v21;
 if (flag5 != 32767)
 goto LABEL_402430;
LABEL_4026e4:
 if (!cur && !flag10)
 return v21;
 v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 goto LABEL_402704;
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
 goto LABEL_402534;
 }
LABEL_402430:
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
LABEL_402810:
 v27 = v61 + flag10;
 if (!((char)arm64g_calculate_condition(50, v61, flag10, 0)))
 cur += 1;
 goto LABEL_402810;
 }
 else
 {
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 goto LABEL_402658;
 }
 }
 v27 = flag10;
 if (flag5 == 32767 && (cur || flag10))
 {
 v21 = (unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1;
 v27 = flag10;
 goto LABEL_402540;
 }
 }
 }
 v39 = v27 & 7;
 flag4 = 0;
 if (!iter)
 {
 if (v27 || cur)
 {
LABEL_402360:
 v39 = v27 & 7;
 iter = 0;
 flag4 = 1;
 goto LABEL_40236c;
 }
 else
 {
LABEL_4024b0:
 v34 = 0;
 v21 = 0;
 goto LABEL_4024bc;
 }
 }
}


// Function: sub_402db4 at 0x402db4
void sub_402db4()
{
 __multf3();
 return;
}


// Function: __multf3 at 0x402dc0

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
LABEL_403218:
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
 goto LABEL_403218;
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
 case 0:
 case 1:
 case 2:
 break;
 }
}


// Function: __sfp_handle_exceptions at 0x4035c0
unsigned long long __sfp_handle_exceptions(unsigned long long a0)
{
 unsigned long long v0; // qcflag

 if (((char)(a0 >> 4) & 1))
 a0 = ((unsigned long long)(v0 >> 64) || (unsigned long long)v0) * 0x8000000;
 return a0;
}



/* CRT stub function _fini removed by preprocessor */


