// Angr Decompilation of 2_clang_Os_g
// Platform: AARCH64

#include <stdio.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

// Helper function declarations
unsigned long long __ROL__(unsigned long long value, int shift);
unsigned int Clz(unsigned long long value);
unsigned long long arm64g_calculate_condition(unsigned int cond, unsigned long long a, unsigned long long b, unsigned long long c);
unsigned long long arm64g_calculate_flag_c(unsigned int op, unsigned long long a, unsigned long long b, unsigned long long c);
static unsigned long long __sfp_handle_exceptions(unsigned long long a0);
static unsigned long long __addtf3(unsigned long long a0, unsigned long long a1);
static unsigned long long __multf3(unsigned long long a0, unsigned long long a1);

// CRT stub function declarations
void __libc_start_main(void);
void abort(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
unsigned long long frame_dummy(void);

// Forward declarations for functions used before definition
typedef struct struct_0 struct_0;



unsigned long long __ROL__(unsigned long long value, int shift) {
 return (value << shift) | (value >> (64 - shift));
}

unsigned int Clz(unsigned long long value) {
 unsigned int count = 0;
 while (value && !(value & 0x8000000000000000ULL)) {
  value <<= 1;
  count++;
 }
 return count;
}

unsigned long long arm64g_calculate_condition(unsigned int cond, unsigned long long a, unsigned long long b, unsigned long long c) {
 return 0;
}

unsigned long long arm64g_calculate_flag_c(unsigned int op, unsigned long long a, unsigned long long b, unsigned long long c) {
 return 0;
}

// Struct definitions
typedef struct struct_0 {
 unsigned int field_0;
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 unsigned long long field_8;
 char padding_0[8];
} struct_2;



// Function: __dollar_x at 0x400620
unsigned long long g_413ff8 = 0;
unsigned long long __dollar_d_4 = 0;

// CRT functions are provided by the system C runtime

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_413ff8;
}


// Function: sub_400634 at 0x400634
long long sub_400634()
{
 __libc_start_main(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4006f0 at 0x4006f0
void sub_4006f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400708 at 0x400708
void sub_400708()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40077c at 0x40077c
void sub_40077c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4007c8 at 0x4007c8
long long sub_4007c8()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: process_char at 0x4007d4
long long process_char(unsigned int a0)
{
 if ((a0 - 65 & 255) >= 26)
 return a0;
 return a0 + 32;
}


// Function: process_short at 0x4007ec
int process_short(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: process_int at 0x4007f4
unsigned int process_int(unsigned int a0)
{
 return 1 | __ROL__(a0, 1) & 4294967294;
}


// Function: process_long at 0x400804
unsigned long long process_long(unsigned long a0)
{
 return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: process_ll at 0x40080c
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x400814
long long process_float()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_double at 0x400824
long long process_double()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_ld at 0x40083c
void process_ld()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __addtf3(0, 0);
 return;
}


// Function: process_bool at 0x40085c
long long process_bool(unsigned int a0)
{
 unsigned int v0; // w8
 unsigned int v1; // w9

 if (a0 <= 0)
 v0 = 0;
 else
 v0 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(a0 & 1), 0, 0))
 v1 = 0;
 else
 v1 = 1;
 return v0 & v1;
}


// Function: const_param at 0x400874
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x400880
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x400890
char g_402f1f = 0;

int test_data_types_l1()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 puts(&g_402f1f);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 10000);
 printf("DT-L1-07 (process_double): %.2f\n", 10000);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v1 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v1 * 2);
}


// Function: array_1d_stack at 0x4009a4
unsigned long long array_1d_stack(unsigned int *cur, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 unsigned long v3; // x10
 unsigned long long v5; // x0

 if (a1 < 1)
 return 0;
 v0 = 0;
 v3 = 0;
 i = a1;
 do
 {
 v2 = v0;
 cur += 1;
 v5 = *(cur) + v2;
 v0 = v5;
 i -= 1;
 } while (i != 1);
 return v3 + v2;
}


// Function: array_string at 0x4009d4
unsigned int array_string(char *a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v3; // w0

 v0 = 4294967295;
 do
 {
 v3 = v0 + 1;
 a0 += 1;
 v0 = v3;
 } while (*(a0));
 return v1 + 1;
}


// Function: array_2d_stack at 0x4009ec
int array_2d_stack(unsigned long a0)
{
 unsigned long long i; // x9
 unsigned long long v1; // x8
 unsigned long long v2; // x8
 unsigned long long v3; // x9
 unsigned long long v4; // x9
 unsigned long long v5; // x8

 i = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 v3 = i;
 v4 = v3 + 44;
 v5 = *((int *)(a0 + v3)) + v2;
 i = v4;
 v1 = v5;
 } while (i != 440);
 return *((int *)(a0 + v3)) + (unsigned int)v2;
}


// Function: array_3d at 0x400a10
int array_3d(unsigned long long a0)
{
 unsigned long long i; // x9
 unsigned long long v1; // x8
 unsigned long long j; // x10
 unsigned long long v3; // x11
 unsigned long long v4; // x11
 unsigned long long k; // x12
 unsigned long long v6; // x12

 i = 0;
 v1 = 0;
 do
 {
 j = 0;
 v3 = a0;
 do
 {
 v4 = v3;
 k = 0;
 do
 {
 v6 = k + 4;
 v1 += *((int *)(v4 + k));
 k = v6;
 } while (k != 20);
 j += 1;
 v3 = v4 + 20;
 } while (j != 5);
 i += 1;
 a0 += 100;
 } while (i != 5);
 return v1;
}


// Function: array_vla at 0x400a60
unsigned long long array_vla(unsigned int a0, unsigned int *cur)
{
 unsigned long long v0; // x0
 unsigned long i; // x8
 unsigned long long v2; // x0
 unsigned long v3; // x9
 unsigned long long v5; // x0

 if (a0 < 1)
 return 0;
 v0 = 0;
 v3 = 0;
 i = a0;
 do
 {
 v2 = v0;
 cur += 1;
 v5 = *(cur) + v2;
 i -= 1;
 v0 = v5;
 } while (i != 1);
 return v3 + v2;
}


// Function: array_pointer at 0x400a90
unsigned long long array_pointer(unsigned int *cur, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 unsigned long v3; // x10
 unsigned long long v5; // x0

 if (a1 < 1)
 return 0;
 v0 = 0;
 v3 = 0;
 i = a1;
 do
 {
 v2 = v0;
 cur += 10;
 v5 = *(cur) + v2;
 v0 = v5;
 i -= 1;
 } while (i != 1);
 return v3 + v2;
}


// Function: pointer_array at 0x400ac0
unsigned long long pointer_array(struct_0 **a0, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long v1; // x9
 unsigned long v2; // x9
 unsigned long v3; // x9

 if (a1 < 1)
 return 0;
 v0 = 0;
 if (a1 < 10)
 v1 = a1;
 else
 v1 = 10;
 do
 {
 v2 = v1;
 if (*a0)
 v0 += (*a0)->field_0;
 } while ((a0 += 8, v3 = v2 - 1, v1 = v2 - 1, v2 != 1));
 return v0;
}


// Function: array_complex_index at 0x400b04
unsigned long long array_complex_index(unsigned long ptr, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4)
{
 unsigned long long v0; // x0

 if (((char)(a3 >> 31) & 1))
 return 4294967295;
 v0 = 4294967295;
 if (a2 > (unsigned int)a4 && a1 > (unsigned int)a3 && !((char)(a4 >> 31) & 1))
 v0 = *((int *)(ptr + ((unsigned int)a3 + a1 * (unsigned int)a4) * 4));
 return v0;
}


// Function: array_oob at 0x400b38
unsigned long long array_oob(unsigned int *cur, unsigned long a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 unsigned long v3; // x10
 unsigned long long v5; // x0

 if (((char)(a1 >> 31) & 1))
 return 0;
 v0 = 0;
 v3 = 0;
 i = (unsigned int)a1 + 1;
 do
 {
 v2 = v0;
 cur += 1;
 v5 = *(cur) + v2;
 v0 = v5;
 i -= 1;
 } while (i != 1);
 return v3 + v2;
}


// Function: test_array_types at 0x400b64
char g_402f40 = 0;

int test_array_types()
{
 unsigned long long i; // x8
 char *v20; // x10
 unsigned long long v29; // x8
 unsigned long long k; // x8
 char *v31; // x9
 unsigned long long i1; // x11
 char *iter; // x12
 unsigned long long i3; // x13
 unsigned long long l; // x8
 unsigned long long v36; // x1
 char *v37; // x9
 unsigned long long i2; // x10
 unsigned long long i0; // x11
 char *v39; // x11
 char *v40; // x11
 unsigned long long i4; // x12
 unsigned long long v42; // x12
 unsigned long long idx; // x8
 unsigned long long n; // x8
 unsigned long long v46; // x1
 unsigned long long v47; // x8
 unsigned long long v48; // x8
 char *cur; // x13
 unsigned long long v49; // x1
 char ptr[4]; // x10
 unsigned int v24; // w14
 unsigned int v25; // 388
 unsigned int v26; // w14
 unsigned long long j; // x8
 unsigned long long v28; // x1
 unsigned long long v0; // [bp-0x520]
 unsigned long long v1; // [bp-0x510]
 unsigned long long v2; // [bp-0x500]
 unsigned long long v3; // [bp-0x4f0]
 unsigned long long v4; // [bp-0x4e0]
 char *v5; // [bp-0x4c8]
 char *v6; // [bp-0x4c0]
 char *v7; // [bp-0x4b8]
 unsigned long long flag3; // [bp-0x4b0]
 unsigned long long flag1; // [bp-0x4a0]
 unsigned long long flag2; // [bp-0x490]
 unsigned long long result; // [bp-0x480]
 unsigned int v12; // [bp-0x478]
 unsigned int v13; // [bp-0x474]
 unsigned int v14; // [bp-0x470]
 unsigned long v51; // [bp-0x46c]
 char v15; // [bp-0x3a4]
 unsigned int v52; // [bp-0x1b0]
 char v16; // [bp-0x1ac]
 char *v17; // [bp-0x20]
 char v18; // [bp+0x0]

 v17 = &v18;
 puts(&g_402f40);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 i = 0;
 v20 = (char *)&v16;
 do
 {
 i0 = 0;
 cur = v20;
 do
 {
 if (0)
 {
 if (i == i0)
 v24 = i;
 else
 v24 = 0;
 *((unsigned int *)&cur[4]) = v24;
 }
 if (((char)v25 & 1))
 {
 if (i - 1 == i0)
 v26 = i;
 else
 v26 = 0;
 *((unsigned int *)cur) = v26;
 }
 i0 += 2;
 cur += 8;
 } while (i0 != 10);
 i += 1;
 v20 += 40;
 } while (i != 10);
 j = 0;
 v28 = 0;
 do
 {
 v29 = j + 44;
 v28 += *((int *)((char *)&v52 + j));
 j = v29;
 } while (j != 440);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v28);
 k = 0;
 v31 = (char *)&v15;
 do
 {
 i1 = 0;
 iter = v31;
 do
 {
 i3 = 0;
 do
 {
 *((unsigned int *)&iter[i3]) = 1;
 i3 += 4;
 } while (i3 != 20);
 i1 += 1;
 iter += 20;
 } while (i1 != 5);
 k += 1;
 v31 += 100;
 } while (k != 5);
 l = 0;
 v36 = 0;
 v37 = &v15;
 do
 {
 i2 = 0;
 v39 = v37;
 do
 {
 v40 = v39;
 i4 = 0;
 do
 {
 v42 = i4 + 4;
 v36 += *((int *)&v40[i4]);
 i4 = v42;
 } while (i4 != 20);
 i2 += 1;
 v39 = v40 + 20;
 } while (i2 != 5);
 l += 1;
 v37 += 100;
 } while (l != 5);
 printf("ARR-L1-04 (array_3d): %d\n", v36);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v51 + 4 * idx)) = idx;
 idx += 10;
 } while (idx != 50);
 n = 0;
 v46 = 0;
 do
 {
 v47 = n + 40;
 v46 += *((int *)((char *)&v51 + n));
 n = v47;
 } while (n != 200);
 printf("ARR-L2-02 (array_pointer): %d\n", v46);
 v48 = 0;
 v49 = 0;
 v13 = 20;
 v14 = 10;
 v17 = (char *)&v14;
 v12 = 30;
 result = 0;
 flag1 = 0;
 v5 = (char *)&v14;
 v6 = (char *)&v13;
 v7 = (char *)&v12;
 flag2 = 0;
 flag3 = 0;
 if (!v17)
 goto LABEL_400db0;
 while (true)
 {
 v49 += (unsigned long long)*(v17);
 do
 {
LABEL_400db0:
 if (v48 == 16)
 {
 printf("ARR-L2-03 (pointer_array): %d\n", v49);
 v4 = 1505335088103063807677121429520;
 v0 = 0x3000000020000000100000000;
 v1 = 554597137710530827618539798532;
 v2 = 871509787841375154304733675528;
 v3 = 1188422437972219480990927552524;
 return printf("ARR-L2-04 (array_complex_index): %d\n", *((int *)((char *)&v4 + 4)));
 }
 } while ((v17 = *((char **)((char *)&v6 + v48)), v48 += 8, !v17));
 }
}


// Function: ptr_single at 0x400e28
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x400e34
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x400e44
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0 + 1;
}


// Function: ptr_increment at 0x400e58
unsigned int ptr_increment(unsigned int *ptr, unsigned int i)
{
 unsigned long long v0; // x8
 unsigned int *v1; // x0
 unsigned int v2; // w1

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = ptr + 1;
 v2 = i - 1;
 v0 += *(ptr);
 ptr = v1;
 i = v2;
 } while (i != 1);
 return v0;
}


// Function: ptr_offset at 0x400e84
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x400e8c
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return __ROL__(a0 - a1, 62) & 4611686018427387903;
}


// Function: ptr_void at 0x400e98
unsigned long long ptr_void(void* a0, unsigned int a1)
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


// Function: ptr_const at 0x400ebc
unsigned int ptr_const(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x400ec8
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x400edc
int ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return ((int (*)(unsigned long, unsigned long))a0)(a0, a1);
}


// Function: ptr_func_complex at 0x400ee8
long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 unsigned long long v3; // x0
 int v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 *((unsigned long long *)&v0) = __dollar_d_4;
 v3 = ((unsigned long long (*)(unsigned long, char *))a0)(a1, (char *)&v0);
 return ((unsigned long long (*)(unsigned long, char *))a0)(a1, (char *)&v0);
}


// Function: ptr_cast at 0x400f24
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x400f2c
unsigned long long opaque_handle_create(unsigned long a0)
{
 return a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
}


// Function: opaque_handle_op at 0x400f34
unsigned int opaque_handle_op(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: test_pointer_types at 0x400f3c
char g_402f5b = 0;

int test_pointer_types()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_402f5b);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 printf("PTR-L2-04 (ptr_increment): %d\n", 15);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: struct_simple at 0x401040
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x401054
unsigned long long struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned int *cur; // x8
 unsigned long long v3; // x0
 unsigned long v4; // x10
 unsigned long v5; // x11
 unsigned long v6; // x12
 unsigned long long v8; // x0

 if (a1 < 1)
 return 0;
 v0 = 0;
 v6 = 0;
 i = a1;
 cur = a0 + 1;
 do
 {
 v3 = v0;
 v4 = cur[1];
 v5 = cur[0];
 cur += 1;
 v8 = v4 + v3 + v5 + cur[1];
 v0 = v8;
 i -= 1;
 } while (i != 1);
 return v4 + v3 + v5 + v6;
}


// Function: struct_nested at 0x401098
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x4010a8
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x4010b8
int struct_with_ptr(struct_0 *p)
{
 unsigned int *ptr; // x9

 ptr = (unsigned int *)p->field_8;
 if (ptr)
 ptr = *(unsigned int **)ptr;
 return (unsigned int)ptr + p->field_0;
}


// Function: struct_bitfields at 0x4010d0
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // w8

 v0 = *(ptr);
 return (v0 & 1) + (v0 >> 6) + (__ROL__(v0, 31) & 2147483651 & 3) + (__ROL__(v0, 29) & 3758096391 & 7);
}


// Function: union_type at 0x4010f0
long long union_type(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return *((int *)a0);
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


// Function: union_array at 0x401118
unsigned long long union_array(unsigned int *cur, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 unsigned long v3; // x10
 unsigned long long v5; // x0

 if (a1 < 1)
 return 0;
 v0 = 0;
 i = a1;
 do
 {
 v2 = v0;
 cur += 1;
 v5 = *(cur) + v2;
 v0 = v5;
 i -= 1;
 } while (i != 1);
 return v3 + v2;
}


// Function: enum_type at 0x401148
unsigned int enum_type(unsigned int a0)
{
 return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: enum_switch at 0x401154
unsigned int g_402980[4] = {50, 0, 0, 0};

unsigned long long enum_switch(unsigned int a0)
{
 if (3 < a0)
 return 4294967197;
 return g_402980[a0];
}


// Function: struct_func_ptr at 0x401174
int struct_func_ptr(struct_0 *a0)
{
 return ((int (*)(void))a0->field_8)();
}


// Function: linked_list at 0x401184
int linked_list(struct_0 *ptr)
{
 unsigned long long v0; // x8
 struct_0 *v1; // x0

 v0 = 0;
 if (ptr)
 {
 do
 {
 v1 = (struct_0 *)(ptr->field_8);
 v0 += ptr->field_0;
 ptr = (struct_0 *)v1;
 } while ((unsigned long long)ptr->field_8);
 }
 return v0;
}


// Function: doubly_linked_list at 0x4011a4
int doubly_linked_list(struct_0 *ptr)
{
 unsigned long long v0; // x8
 struct_0 *v1; // x0

 v0 = 0;
 if (ptr)
 {
 do
 {
 v1 = (struct_0 *)(ptr->field_8);
 v0 += ptr->field_0;
 ptr = (struct_0 *)v1;
 } while ((unsigned long long)ptr->field_8);
 }
 return v0;
}


// Function: binary_tree_sum at 0x4011c4
unsigned int binary_tree_sum(struct_0 *a0)
{
 unsigned long long v2; // x20
 struct_0 *ptr; // x19
 unsigned long long v4; // x0
 struct_0 *v5; // x19
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (!a0)
 return 0;
 v2 = 0;
 do
 {
 ptr = a0;
 v4 = binary_tree_sum((struct_0 *)ptr->field_8);
 v5 = (struct_0 *)ptr->field_10;
 v2 = ptr->field_0 + v2 + v4;
 a0 = v5;
 } while (ptr->field_10);
 return v2;
}


// Function: binary_tree at 0x401218
int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x40121c
unsigned int graph_traverse(struct_1 *p)
{
 unsigned long v0; // x9
 unsigned long idx; // x10
 unsigned long long v2; // x8
 struct_2 *ptr; // x11
 unsigned long v4; // x11

 v0 = p->field_8;
 if ((unsigned int)v0 < 1)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 ptr = (struct_2 *)((&p->field_0)[idx]);
 if ((&p->field_0)[idx])
 {
 do
 {
 v4 = ptr->field_8;
 v2 += ptr->field_0;
 ptr = (struct_2 *)v4;
 } while (ptr->field_8);
 }
 } while ((idx += 1, idx != v0));
 return v2;
}


// Function: test_composite_types at 0x401264
char g_402f76 = 0;

int test_composite_types()
{
 struct_0 *ptr; // x8
 unsigned long long v24; // x1
 struct_2 *v33; // x10
 struct_0 *v25; // x8
 struct_1 *p; // x8
 unsigned long long v27; // x1
 struct_1 *v28; // x8
 unsigned long long pos; // x8
 unsigned long long v31; // x1
 struct_2 *addr; // x10
 char *v0; // [bp-0x118]
 unsigned long long flag4; // [bp-0x110]
 unsigned long long flag5; // [bp-0x100]
 char v3; // [bp-0xf0]
 unsigned long long flag3; // [bp-0xc0]
 unsigned long long v6; // [bp-0xb0]
 unsigned long long flag6; // [bp-0xa0]
 unsigned int v8; // [bp-0x90]
 char *v10; // [bp-0x88]
 unsigned long long flag1; // [bp-0x80]
 unsigned int v12; // [bp-0x78]
 unsigned long long result; // [bp-0x70]
 char *v14; // [bp-0x68]
 char v15; // [bp-0x60], Other Possible Types: unsigned int
 char *v16; // [bp-0x58]
 unsigned int v17; // [bp-0x50]
 char *v18; // [bp-0x48]
 unsigned int v19; // [bp-0x40]
 unsigned long long flag2; // [bp-0x38]
 char *v21; // [bp-0x30]
 char v22; // [bp+0x0]

 v21 = &v22;
 puts(&g_402f76);
 printf("CMP-L2-01 (struct_simple): %d\n", 6);
 printf("CMP-L2-02 (struct_array): %d\n", 9);
 printf("CMP-L2-03 (struct_nested): %d\n", 105);
 printf("CMP-L2-04 (struct_deep): %d\n", 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
 printf("CMP-L2-07 (union_type): %d\n", 305419896);
 printf("CMP-L2-08 (union_array): %d\n", 60);
 printf("CMP-L2-09 (enum_type): %d\n", 10);
 printf("CMP-L2-10 (enum_switch): %d\n", 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v15 = 10;
 v19 = 30;
 v17 = 20;
 v16 = (char *)&v17;
 v18 = (char *)&v19;
 flag2 = 0;
 ptr = (struct_0 *)&v15;
 v24 = 0;
 do
 {
 v25 = (struct_0 *)ptr->field_8;
 v24 += (unsigned long long)ptr->field_0;
 ptr = v25;
 } while (ptr->field_8);
 printf("CMP-L2-12 (linked_list): %d\n", v24);
 v8 = 10;
 v12 = 20;
 result = 0;
 v14 = (char *)&v8;
 v10 = (char *)&v12;
 flag1 = 0;
 p = (struct_1 *)&v8;
 v27 = 0;
 do
 {
 v28 = (struct_1 *)p->field_8;
 v27 += (unsigned long long)p->field_0;
 p = v28;
 } while (p->field_8);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v27);
 v6 = 100;
 flag6 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum((struct_0 *)&v6) & 4294967295);
 pos = 0;
 v31 = 0;
 v0 = (char *)&flag3;
 memset(&v3, 0, 48);
 flag3 = 1;
 flag4 = 0;
 flag5 = 0;
 addr = (struct_2 *)&flag3;
 if (!addr)
 goto LABEL_40143c;
 while (true)
 {
 v33 = (struct_2 *)addr->field_8;
 v31 += (unsigned long long)addr->field_0;
 addr = v33;
 if (addr->field_8)
 continue;
 do
 {
LABEL_40143c:
 pos += 1;
 if (pos == 2)
 return printf("CMP-L2-15 (graph_traverse): %d\n", v31);
 } while ((addr = (struct_2 *)((&v0)[pos]), !(&v0)[pos]));
 }
}


// Function: main at 0x401474
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


// Function: sub_401498 at 0x401498
void sub_401498()
{
 __addtf3(0, 0);
 return;
}





// Function: sub_402034 at 0x402034
void sub_402034()
{
 __multf3(0, 0);
 return;
}





// Function: __sfp_handle_exceptions at 0x402840
static unsigned long long __sfp_handle_exceptions(unsigned long long a0) {
 return a0;
}

// Function: __addtf3 - floating point add helper
static unsigned long long __addtf3(unsigned long long a0, unsigned long long a1) {
 return a0 + a1;
}

// Function: __multf3 - floating point multiply helper
static unsigned long long __multf3(unsigned long long a0, unsigned long long a1) {
 return a0 * a1;
}


// Function: _fini at 0x4028b0
long long _fini()
{
 unsigned long v0; // x0

 return v0;
}

