// Angr Decompilation of 2_clang_O1_no_g
// Platform: AARCH64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Global variables
unsigned long long g_413ff8 = 0;
unsigned long long __dollar_d_4 = 0;
unsigned long long __dollar_x = 0;
unsigned long long g_402ebf = 0;
unsigned long long g_402ee0 = 0;
unsigned long long g_402efb = 0;
unsigned long long g_402f16 = 0;
unsigned long v3 = 0;
unsigned int g_402920[4] = {0, 0, 0, 0};

// Helper macros and function declarations
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))
// Stub implementations for missing functions
unsigned long long __addtf3(unsigned long long a, unsigned long long b) { return a + b; }
unsigned int __multf3(unsigned long long a, unsigned long long b) { return (unsigned int)(a * b); }
unsigned long long arm64g_calculate_condition(unsigned int cond, unsigned long long val1, unsigned long long val2, unsigned long long val3) { return 0; }
unsigned int arm64g_calculate_flag_c(unsigned int op, unsigned long long val1, unsigned long long val2, unsigned long long val3) { return 0; }
int Clz(unsigned long long x) { return 0; }



/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400620
unsigned long long __dollar_x_func(unsigned long long a0)
{
 return __dollar_x;
}

// Struct type definitions
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_8;
 struct struct_0 *field_10;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned long field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 unsigned long field_8;
 char padding_0[4];
} struct_2;

// CRT function declarations
extern void abort(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern unsigned long long frame_dummy(void);

// Stub implementations for CRT functions
void deregister_tm_clones(void) { return; }
void __do_global_dtors_aux(void) { return; }
unsigned long long frame_dummy(void) { return 0; }


// Function: sub_400634 at 0x400634
long long sub_400634()
{
 return 0;
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
 return 0;
}


// Function: process_double at 0x400824
long long process_double()
{
 return 0;
}


// Function: process_ld at 0x40083c
void process_ld()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __addtf3(0, __multf3(0, 0));
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
int test_data_types_l1()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 puts((const char *)&g_402ebf);
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


// Function: array_1d_stack at 0x4009a8
unsigned long long array_1d_stack(unsigned int *cur, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
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


// Function: array_string at 0x4009d8
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


// Function: array_2d_stack at 0x4009f0
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


// Function: array_3d at 0x400a14
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


// Function: array_vla at 0x400a64
unsigned long long array_vla(unsigned int a0, unsigned int *cur)
{
 unsigned long long v0; // x0
 unsigned long i; // x8
 unsigned long long v2; // x0
 unsigned long long v5; // x0

 if (a0 < 1)
 return 0;
 v0 = 0;
 i = a0;
 do
 {
 v2 = v0;
 cur += 1;
 v5 = *(cur) + v2;
 i -= 1;
 v0 = v5;
 } while (i != 1);
 return v2;
}


// Function: array_pointer at 0x400a94
unsigned long long array_pointer(unsigned int *cur, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 unsigned long long v5; // x0

 if (a1 < 1)
 return 0;
 v0 = 0;
 i = a1;
 do
 {
 v2 = v0;
 cur += 10;
 v5 = *(cur) + v2;
 v0 = v5;
 i -= 1;
 } while (i != 1);
 return v2;
}


// Function: pointer_array at 0x400ac4
unsigned long long pointer_array(struct_0 **a0, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long v1; // x9
 unsigned long v2; // x9
 unsigned long v3; // x9

 if (a1 < 1)
 return 0;
 if (a1 >= 10)
 a1 = 10;
 v0 = 0;
 if (1 < a1)
 v1 = a1;
 else
 v1 = 1;
 do
 {
 v2 = v1;
 if (*(a0))
 v0 += (*a0)->field_0;
 } while ((a0 += 8, v3 = v2 - 1, v1 = v2 - 1, v2 != 1));
 return v0;
}


// Function: array_complex_index at 0x400b14
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


// Function: array_oob at 0x400b48
unsigned long long array_oob(unsigned int *cur, unsigned long a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 unsigned long long v5; // x0

 if (((char)(a1 >> 31) & 1))
 return 0;
 v0 = 0;
 i = (unsigned int)a1 + 1;
 do
 {
 v2 = v0;
 cur += 1;
 v5 = *(cur) + v2;
 v0 = v5;
 i -= 1;
 } while (i != 1);
 return v2;
}


// Function: test_array_types at 0x400b74
int test_array_types()
{
 unsigned long long i; // x8
 char *cur; // x9
 char *v26; // x12
 unsigned long long i3; // x13
 unsigned long long l; // x8
 unsigned long long v29; // x1
 char *v30; // x9
 unsigned long long i2; // x10
 char *v32; // x11
 char *v33; // x11
 unsigned long long i4; // x12
 unsigned long long pos; // x10
 unsigned long long v35; // x12
 unsigned long long idx; // x8
 unsigned long long n; // x8
 unsigned long long v39; // x1
 unsigned long long v40; // x8
 unsigned long long v41; // x8
 unsigned long long v42; // x1
 unsigned long long index; // x8
 unsigned int v19; // w11
 unsigned long long j; // x8
 unsigned long long v21; // x1
 unsigned long long v22; // x8
 unsigned long long k; // x8
 char *v24; // x9
 unsigned long long i1; // x11
 char v0; // [bp-0x510]
 char v1; // [bp-0x4cc]
 char *v2; // [bp-0x4c0]
 char *v3; // [bp-0x4b8]
 char *v4; // [bp-0x4b0]
 unsigned long long flag1; // [bp-0x4a8]
 unsigned long long flag2; // [bp-0x498]
 unsigned long long flag3; // [bp-0x488]
 unsigned long long result; // [bp-0x478]
 unsigned int v9; // [bp-0x470]
 unsigned long v44; // [bp-0x46c]
 char v10; // [bp-0x3a4]
 char v11; // [bp-0x1b0]
 char *v12; // [bp-0x20]
 unsigned int v13; // [bp-0x8]
 unsigned int v14; // [bp-0x4]
 char v15; // [bp+0x0]

 v12 = &v15;
 puts((const char *)&g_402ee0);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 i = 0;
 cur = &v11;
 do
 {
 pos = 0;
 do
 {
 if (i == pos)
 v19 = i;
 else
 v19 = 0;
 } while ((*((unsigned int *)&cur[4 * pos]) = v19, pos += 1, pos != 10));
 i += 1;
 cur += 40;
 } while (i != 10);
 j = 0;
 v21 = 0;
 do
 {
 v22 = j + 44;
 v21 += *((int *)&(&v11)[j]);
 j = v22;
 } while (j != 440);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v21);
 k = 0;
 v24 = &v10;
 do
 {
 i1 = 0;
 v26 = v24;
 do
 {
 i3 = 0;
 do
 {
 *((unsigned int *)&v26[i3]) = 1;
 i3 += 4;
 } while (i3 != 20);
 i1 += 1;
 v26 += 20;
 } while (i1 != 5);
 k += 1;
 v24 += 100;
 } while (k != 5);
 l = 0;
 v29 = 0;
 v30 = &v10;
 do
 {
 i2 = 0;
 v32 = v30;
 do
 {
 v33 = v32;
 i4 = 0;
 do
 {
 v35 = i4 + 4;
 v29 += *((int *)&v33[i4]);
 i4 = v35;
 } while (i4 != 20);
 i2 += 1;
 v32 = v33 + 20;
 } while (i2 != 5);
 l += 1;
 v30 += 100;
 } while (l != 5);
 printf("ARR-L1-04 (array_3d): %d\n", v29);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v44 + 4 * idx)) = idx;
 idx += 10;
 } while (idx != 50);
 n = 0;
 v39 = 0;
 do
 {
 v40 = n + 40;
 v39 += *((int *)((char *)&v44 + n));
 n = v40;
 } while (n != 200);
 printf("ARR-L2-02 (array_pointer): %d\n", v39);
 v41 = 0;
 v42 = 0;
 v13 = 20;
 v14 = 10;
 v9 = 30;
 result = 0;
 flag1 = 0;
 v2 = (char *)&v14;
 v3 = (char *)&v13;
 v4 = (char *)&v9;
 flag2 = 0;
 flag3 = 0;
 do
 {
 if (*((long long *)((char *)&v2 + v41)))
 v42 += *((int *)*((long long *)((char *)&v2 + v41)));
 } while ((v41 += 8, v41 != 24));
 printf("ARR-L2-03 (pointer_array): %d\n", v42);
 index = 0;
 do
 {
 *((unsigned int *)&(&v0)[4 * index]) = index;
 index += 1;
 } while (index != 20);
 return printf("ARR-L2-04 (array_complex_index): %d\n", *((int *)&v1));
}


// Function: ptr_single at 0x400db4
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x400dc0
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x400dd0
int ptr_triple(struct_1 **a0)
{
 return ((struct_1 *)(*a0)->field_0)->field_0 + 1;
}


// Function: ptr_increment at 0x400de4
unsigned long long ptr_increment(unsigned int *a0, unsigned int i)
{
 unsigned long long v0; // x8
 unsigned long long v2; // x8
 unsigned int *v3; // x0
 unsigned int v4; // w1
 unsigned long long v5; // x8

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v2 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v2;
 v0 = v5;
 a0 = v3;
 i = v4;
 } while (i != 1);
 return *(a0) + v2 & 4294967295;
}


// Function: ptr_offset at 0x400e14
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x400e1c
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return __ROL__(a0 - a1, 62) & 4611686018427387903;
}


// Function: ptr_void at 0x400e28
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


// Function: ptr_const at 0x400e4c
unsigned int ptr_const(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x400e58
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x400e6c
int ptr_func_simple(unsigned long long (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1);
}


// Function: ptr_func_complex at 0x400e88
long long ptr_func_complex(unsigned long long (*a0)(unsigned long, void*), unsigned long a1)
{
 unsigned long long v3; // x0
 int v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 *((unsigned long long *)&v0) = __dollar_d_4;
 v3 = a0(a1, &v0);
 return a0(a1, &v0);
}


// Function: ptr_cast at 0x400ec4
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x400ecc
unsigned long long opaque_handle_create(unsigned long a0)
{
 return a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
}


// Function: opaque_handle_op at 0x400ed4
unsigned int opaque_handle_op(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: test_pointer_types at 0x400edc
int test_pointer_types()
{
 unsigned long long v4; // x8
 unsigned long long v5; // x1
 unsigned long long v6; // x8
 unsigned long long v0; // [bp-0x40]
 unsigned int v1; // [bp-0x30]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts((const char *)&g_402efb);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 v4 = 0;
 v5 = 0;
 v0 = 316912650112397582603894390785;
 v1 = 5;
 do
 {
 v6 = v4 + 4;
 v5 += *((int *)((char *)&v0 + v4));
 v4 = v6;
 } while ((unsigned int)v4 != 20);
 printf("PTR-L2-04 (ptr_increment): %d\n", v5);
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


// Function: struct_simple at 0x401020
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x401034
unsigned long long struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned int *cur; // x8
 unsigned long long v3; // x0
 unsigned long v4; // x10
 unsigned long v5; // x11
 unsigned long long v8; // x0

 if (a1 < 1)
 return 0;
 v0 = 0;
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
 return v4 + v3 + v5;
}


// Function: struct_nested at 0x401078
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x401088
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401098
int struct_with_ptr(struct_0 *p)
{
 unsigned long ptr; // x9

 ptr = (unsigned long)p->field_8;
 return (unsigned int)ptr + p->field_0;
}


// Function: struct_bitfields at 0x4010b0
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // w8

 v0 = *(ptr);
 return (v0 & 1) + (v0 >> 6) + (__ROL__(v0, 31) & 2147483651 & 3) + (__ROL__(v0, 29) & 3758096391 & 7);
}


// Function: union_type at 0x4010d0
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


// Function: union_array at 0x4010f8
unsigned long long union_array(unsigned int *cur, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
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
 return v2;
}


// Function: enum_type at 0x401128
unsigned int enum_type(unsigned int a0)
{
 return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: enum_switch at 0x401134
unsigned long long enum_switch(unsigned int a0)
{
 if (3 < a0)
 return 4294967197;
 return g_402920[a0];
}


// Function: struct_func_ptr at 0x401154
int struct_func_ptr(struct_0 *a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return ((int (*)(unsigned int))a0->field_8)(a0->field_0);
}


// Function: linked_list at 0x401170
int linked_list(struct_0 *ptr)
{
 unsigned long long v0; // x8
 struct_0 *v1; // x0

 v0 = 0;
 if (ptr)
 {
 do
 {
 v1 = (struct_0 *)ptr->field_8;
 v0 += ptr->field_0;
 ptr = v1;
 } while (ptr->field_8);
 }
 return v0;
}


// Function: doubly_linked_list at 0x401190
int doubly_linked_list(struct_0 *ptr)
{
 unsigned long long v0; // x8
 struct_0 *v1; // x0

 v0 = 0;
 if (ptr)
 {
 do
 {
 v1 = (struct_0 *)ptr->field_8;
 v0 += ptr->field_0;
 ptr = v1;
 } while (ptr->field_8);
 }
 return v0;
}


// Function: binary_tree_sum at 0x4011b0
int binary_tree_sum(struct_0 *a0)
{
 unsigned long long v5; // x30
 unsigned long long v6; // x20
 unsigned long long v7; // x19
 unsigned int v8; // w0
 unsigned int v9; // w0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 unsigned long long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 if (!a0)
 return (unsigned int)a0;
 v0 = &v4;
 v1 = v5;
 v2 = v6;
 v3 = v7;
 v8 = binary_tree_sum(a0->field_8);
 v9 = binary_tree_sum(a0->field_10);
 return v8 + a0->field_0 + v9;
}


// Function: binary_tree at 0x4011f0
int binary_tree()
{
 struct_0 *v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = 0;
 return binary_tree_sum(v2);
}


// Function: graph_traverse at 0x401204
unsigned int graph_traverse(struct_1 *p)
{
 unsigned long v0; // x9
 unsigned long idx; // x10
 unsigned long long v2; // x8
 struct_2 *ptr; // x11
 unsigned long v4; // x11

 v0 = p->field_0;
 if ((unsigned int)v0 < 1)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 ptr = (struct_2 *)(&p->field_0)[idx];
 if ((&p->field_0)[idx])
 {
 do
 {
 v4 = ptr->field_8;
 v2 += *((int *)&ptr->padding_0[0]);
 ptr = (struct_2 *)v4;
 } while (ptr->field_8);
 }
 } while ((idx += 1, idx != v0));
 return v2;
}


// Function: test_composite_types at 0x401250
int test_composite_types()
{
 struct_0 *ptr; // x8
 unsigned long long v25; // x1
 unsigned long long v33; // x1
 unsigned long v34; // x10
 struct_0 *v26; // x8
 struct_1 *p; // x8
 unsigned long long v28; // x1
 struct_1 *v29; // x8
 unsigned long long pos; // x8
 struct_2 *addr; // x10
 int v0; // [bp-0x120], Other Possible Types: unsigned long long
 char *v1; // [bp-0x120]
 unsigned long long flag1; // [bp-0x110]
 unsigned long long flag4; // [bp-0x100]
 unsigned long long flag2; // [bp-0xf0]
 unsigned long long flag3; // [bp-0xe0]
 unsigned int v6; // [bp-0xd0], Other Possible Types: unsigned long long
 char v7; // [bp-0xc0], Other Possible Types: unsigned long long
 unsigned long long v8; // [bp-0xb0]
 unsigned long long flag7; // [bp-0xa0]
 char v10; // [bp-0x90], Other Possible Types: unsigned int
 char *v11; // [bp-0x88]
 unsigned long long flag6; // [bp-0x80]
 unsigned int v13; // [bp-0x78]
 unsigned long long flag5; // [bp-0x70]
 char *v15; // [bp-0x68]
 char v16; // [bp-0x60], Other Possible Types: unsigned int
 char *v17; // [bp-0x58]
 unsigned int v18; // [bp-0x50]
 char *v19; // [bp-0x48]
 unsigned int v20; // [bp-0x40]
 unsigned long long result; // [bp-0x38]
 char *v22; // [bp-0x30]
 char v23; // [bp+0x0]

 v22 = &v23;
 puts((const char *)&g_402f16);
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
 ptr = (struct_0 *)&v16;
 v25 = 0;
 v16 = 10;
 v20 = 30;
 v18 = 20;
 v17 = (char *)&v18;
 v19 = (char *)&v20;
 result = 0;
 do
 {
 v26 = (struct_0 *)ptr->field_8;
 v25 += (unsigned long long)ptr->field_0;
 ptr = v26;
 } while (ptr->field_8);
 printf("CMP-L2-12 (linked_list): %d\n", v25);
 p = (struct_1 *)&v10;
 v28 = 0;
 flag5 = 0;
 v15 = (char *)&v10;
 v10 = 10;
 v13 = 20;
 v11 = (char *)&v13;
 flag6 = 0;
 do
 {
 v29 = (struct_1 *)p->field_8;
 v28 += (unsigned long long)p->field_0;
 p = v29;
 } while (p->field_8);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v28);
 v8 = 100;
 flag7 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum((struct_0 *)&v8) & 4294967295);
 pos = 0;
 v33 = 0;
 v6 = 0;
 v0 = 0;
 flag1 = 0;
 v1 = (char *)&v7;
 *((unsigned long long *)&v0) = v0 & 0xffffffffffffffff0000000000000000 | (unsigned long long)v1;
 v7 = 1;
 flag2 = 0;
 flag3 = 0;
 v6 = 2;
 flag4 = 0;
 do
 {
 addr = (struct_2 *)*((long long *)((char *)&v0 + 8 * pos));
 if (*((long long *)((char *)&v0 + 8 * pos)))
 {
 do
 {
 v34 = addr->field_8;
 v33 += *((int *)&addr->padding_0[0]);
 addr = (struct_2 *)v34;
 } while (addr->field_8);
 }
 } while ((pos += 1, pos != 2));
 return printf("CMP-L2-15 (graph_traverse): %d\n", v33);
}


// Function: main at 0x401470
int main()
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


// Function: sub_401494 at 0x401494
void sub_401494()
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
unsigned long long __sfp_handle_exceptions(unsigned long long a0)
{
 unsigned long long v0 = 0;

 if (((char)(a0 >> 4) & 1))
 a0 = ((unsigned long long)(v0 >> 64) || (unsigned long long)v0) * 0x8000000;
 return a0;
}


// Function: _fini at 0x4028b0
long long _fini()
{
 return 0;
}

