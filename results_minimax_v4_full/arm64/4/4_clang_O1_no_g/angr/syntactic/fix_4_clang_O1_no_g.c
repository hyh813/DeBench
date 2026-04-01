// Angr Decompilation of 4_clang_O1_no_g
// Platform: AARCH64

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* CRT stub function _init removed by preprocessor */


/* Stub functions for CRT */
void deregister_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

// Rotate left macro for 32-bit values
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))



// Global variable for g_412ff8
unsigned long long g_412ff8 = 0;

// Global variable for __dollar_d_2
unsigned int __dollar_d_2 = 0;

// Define the format string global variables
char* g_401214 = "VARARGS-01: %d\n";
char* g_40123c = "CALL-L1-11: %d\n";
char* g_40125e = "CALL-L1-12: %d\n";
char* g_401285 = "CALL-L1-13: %d\n";
char* g_4012ad = "CALL-L2-01: %d\n";
char* g_4012d9 = "CALL-L2-02: %d\n";
char* g_4013c1 = "RET-L1-01: %d\n";
char* g_4013dd = "RET-L1-02: %d\n";
char* g_4013f9 = "RET-L1-03: %d\n";
char* g_401414 = "RET-L2-01: %d\n";
char* g_401431 = "RET-L2-02: %d\n";
char* g_40144d = "RET-L2-03: %d\n";
char* g_40146a = "RET-L2-04: %d\n";
char* g_401486 = "RET-L2-05: %d\n";
char* g_4014a2 = "RET-L2-06: %d\n";
char* g_4014be = "CALL-L1\n";
char* g_4014df = "PARAM-L1\n";
char* g_401500 = "RET-L1\n";
long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30

 // Original code had invalid goto to variable - returning instead
 return (long long)v2;
}


// Function: sub_400654 at 0x400654
unsigned long long sub_400654(char *s)
{
 return strlen(s);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400730 at 0x400730
void sub_400730()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400748 at 0x400748
void sub_400748()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4007bc at 0x4007bc
void sub_4007bc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400808 at 0x400808
long long sub_400808()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: cdecl_func at 0x400814
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_cdecl at 0x40081c
unsigned long long call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x400824
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x40082c
unsigned long long call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x400834
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a1 + a0 + a2;
}


// Function: call_fastcall at 0x400840
unsigned long long call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x400848
unsigned long long call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x400850
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x400864
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x40086c
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x40087c
unsigned long long call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x400884
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x40089c
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x4008a4
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4008b8
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x4008c0
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x4008d0
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x4008d8
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x4008e0
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v21; // x8
 unsigned long long v22; // q0
 unsigned long v31; // x10
 char *ptr; // x10
 unsigned int v33; // w0
 unsigned long long v23; // q1
 unsigned long long v24; // q2
 unsigned long long v25; // q3
 unsigned long long v26; // q4
 unsigned long long v27; // q5
 unsigned long long v28; // q6
 unsigned long long v29; // q7
 unsigned int result; // w0
 unsigned long long v0; // [bp-0xe0]
 unsigned long long v1; // [bp-0xd0]
 unsigned long long v2; // [bp-0xc0]
 unsigned long long v3; // [bp-0xb0]
 unsigned long long v4; // [bp-0xa0]
 unsigned long long v5; // [bp-0x90]
 unsigned long long v6; // [bp-0x80]
 unsigned long long v7; // [bp-0x70]
 char v8; // [bp-0x60]
 unsigned long long v9; // [bp-0x58]
 unsigned long long v10; // [bp-0x50]
 unsigned long long v11; // [bp-0x48]
 unsigned long long v12; // [bp-0x40]
 unsigned long long v13; // [bp-0x38]
 unsigned long long v14; // [bp-0x30]
 unsigned long long v15; // [bp-0x28]
 char *v16_ptr; // [bp-0x20] - pointer to track position in v16_arr
 char v16_arr[4]; // [bp-0x20]
 char *v17; // [bp-0x18]
 char *v18; // [bp-0x10]
 unsigned int v19; // [bp-0x8], Other Possible Types: unsigned long long
 char v20; // [bp+0x0]

 v18 = &v8;
 v19 = 18446743528248704968;
 v21 = 0;
 v11 = a3;
 v12 = a4;
 v9 = a1;
 v10 = a2;
 v13 = a5;
 v14 = a6;
 v0 = v22;
 v1 = v23;
 v2 = v24;
 v3 = v25;
 v4 = v26;
 v5 = v27;
 v6 = v28;
 v7 = v29;
 v17 = v16_arr;
 v15 = a7;
 v16_ptr = &v20;
 if (a0 < 1)
 return 0;
 do
 {
 result = a0;
 v31 = v19;
 if (!((char)(v31 >> 31) & 1) || (v19 = (unsigned int)v31 + 8, 0 < v19))
 {
 ptr = v16_ptr;
 v16_ptr = ptr + 2;
 }
 else
 {
 ptr = &v17[v31];
 }
 v33 = result - 1;
 v21 += (unsigned long long)*(ptr);
 a0 = v33;
 } while (result != 1);
 return v21;
}


// Function: func_no_args at 0x400984
unsigned long long func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x40098c
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x4009ac
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
 unsigned long long v3; // d8
 unsigned int v4; // w0
 unsigned int v5; // s0
 unsigned long long v0; // [bp-0x30]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v0 = v3;
 v1 = &v2;
 if (a1)
 v4 = strlen(a1);
 else
 v4 = 0;
 return v4 + a0 + v5 + a2;
}


// Function: func_struct_byval at 0x400a04
int func_struct_byval(unsigned long a0)
{
 unsigned long long i; // x9
 unsigned long long v1; // x8
 unsigned long long v2; // x9

 i = 0;
 v1 = 0;
 do
 {
 v2 = i + 8;
 v1 += *((long long *)(a0 + i));
 i = v2;
 } while (i != 128);
 return v1;
}


// Function: func_struct_byptr at 0x400a28
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x400a40
extern char* g_401214;
extern char* g_40123c;
extern char* g_40125e;
extern char* g_401285;
extern char* g_4012ad;
extern char* g_4012d9;
extern char* g_4014be;

int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long idx; // x8
 unsigned long long v20; // x10
 unsigned long long j; // x8
 unsigned long long v22; // x1
 unsigned long long v23; // x8
 char v0; // [bp-0x120]
 char v1; // [bp-0x110]
 char v2; // [bp-0x100]
 char v3; // [bp-0xf0]
 char v4; // [bp-0xe0]
 char v5; // [bp-0xd0]
 char v6; // [bp-0xc0]
 char v7; // [bp-0xb0]
 unsigned long v8; // [bp-0xa0]
 char v9; // [bp-0x90]
 char v10; // [bp-0x80]
 char v11; // [bp-0x70]
 char v12; // [bp-0x60]
 char v13; // [bp-0x50]
 char v14; // [bp-0x40]
 char v15; // [bp-0x30]
 char *v16; // [bp-0x20]
 char v17; // [bp+0x0]

 v16 = &v17;
 puts(g_4014be);
 printf("CALL-L1-01: %d\n", 15);
 printf("CALL-L1-02: %d\n", 50);
 printf("CALL-L1-03: %d\n", 6);
 printf("CALL-L1-04: %d\n", 15);
 printf("CALL-L1-05: %d\n", 15);
 printf("CALL-L1-06: %d\n", 100);
 printf("CALL-L1-07: %d\n", 21);
 printf("CALL-L1-08: %d\n", 15);
 printf("CALL-L1-09: %d\n", 10);
 printf("CALL-L1-10: %d\n", 33);
 printf(g_401214, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
 printf(g_40123c, 42);
 printf(g_40125e, 36);
 printf(g_401285, 117);
 idx = 0;
 do
 {
 v20 = idx + 1;
 (&v8)[idx] = v20;
 idx = v20;
 } while (idx != 16);
 j = 0;
 v22 = 0;
 memcpy(&v4, &v12, 16);
 memcpy(&v5, &v13, 16);
 memcpy(&v6, &v14, 16);
 memcpy(&v7, &v15, 16);
 memcpy(&v0, &v8, 16);
 memcpy(&v1, &v9, 16);
 memcpy(&v2, &v10, 16);
 memcpy(&v3, &v11, 16);
 do
 {
 v23 = j + 8;
 v22 += *((long long *)&(&v0)[j]);
 j = v23;
 } while (j != 128);
 printf(g_4012ad, v22);
 return printf(g_4012d9, 50);
}


// Function: param_by_value_int at 0x400be0
unsigned int param_by_value_int(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400be8
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x400bf0
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
 return 1;
}


// Function: call_by_value_ptr at 0x400c08
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x400c10
unsigned long long param_array_decay()
{
 return 8;
}


// Function: call_array_decay at 0x400c18
unsigned long long call_array_decay()
{
 return 8;
}


// Function: param_string at 0x400c20
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x400c30
unsigned long long call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x400c38
typedef struct struct_0 {
 char field_0;
} struct_0;

 unsigned long long param_ptr_array(struct_0 **a0, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 struct_0 **v3; // x8
 unsigned long v4; // x9
 unsigned long v5; // x10
 unsigned long long v6; // x0

 if (a1 < 1)
  return 0;
 v0 = 0;
 i = a1;
 do
 {
 v2 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v6 = v2 + (*a0)->field_0;
 a0 = v3;
 v0 = v6;
 i = v4;
 } while (i != 1);
 return v2 + v5;
}


// Function: call_ptr_array at 0x400c6c
unsigned long long call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x400c74
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v21; // x8
 unsigned long long v22; // q0
 unsigned long v31; // x10
 char *ptr; // x10
 unsigned int v33; // w0
 unsigned long long v23; // q1
 unsigned long long v24; // q2
 unsigned long long v25; // q3
 unsigned long long v26; // q4
 unsigned long long v27; // q5
 unsigned long long v28; // q6
 unsigned long long v29; // q7
 unsigned int result; // w0
 unsigned long long v0; // [bp-0xe0]
 unsigned long long v1; // [bp-0xd0]
 unsigned long long v2; // [bp-0xc0]
 unsigned long long v3; // [bp-0xb0]
 unsigned long long v4; // [bp-0xa0]
 unsigned long long v5; // [bp-0x90]
 unsigned long long v6; // [bp-0x80]
 unsigned long long v7; // [bp-0x70]
 char v8; // [bp-0x60]
 unsigned long long v9; // [bp-0x58]
 unsigned long long v10; // [bp-0x50]
 unsigned long long v11; // [bp-0x48]
 unsigned long long v12; // [bp-0x40]
 unsigned long long v13; // [bp-0x38]
 unsigned long long v14; // [bp-0x30]
 unsigned long long v15; // [bp-0x28]
 char *v16_ptr; // [bp-0x20] - pointer to track position in v16_arr
 char v16_arr[4]; // [bp-0x20]
 char *v17; // [bp-0x18]
 char *v18; // [bp-0x10]
 unsigned int v19; // [bp-0x8], Other Possible Types: unsigned long long
 char v20; // [bp+0x0]

 v18 = &v8;
 v19 = 18446743528248704968;
 v21 = 0;
 v11 = a3;
 v12 = a4;
 v9 = a1;
 v10 = a2;
 v13 = a5;
 v14 = a6;
 v0 = v22;
 v1 = v23;
 v2 = v24;
 v3 = v25;
 v4 = v26;
 v5 = v27;
 v6 = v28;
 v7 = v29;
 v17 = v16_arr;
 v15 = a7;
 v16_ptr = &v20;
 if (a0 < 1)
  return 0;
 do
 {
 result = a0;
 v31 = v19;
 if (!((char)(v31 >> 31) & 1) || (v19 = (unsigned int)v31 + 8, 0 < v19))
 {
  ptr = v16_ptr;
  v16_ptr = ptr + 2;
 }
 else
 {
  ptr = &v17[v31];
 }
 v33 = result - 1;
 v21 += (unsigned long long)*(ptr);
 a0 = v33;
 } while (result != 1);
 return v21;
}


// Function: call_varargs_param at 0x400d18
int call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400d40
int param_func_ptr(long long (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400d60
unsigned long long call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x400d68
unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_double_ptr at 0x400d90
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x400d98
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return a0[1] + *(a0);
 }
 else if (!a1)
 {
 return *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_complex_cast at 0x400dc0
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x400dcc
int param_struct_byval(unsigned int *a0)
{
 return a0[15] + *(a0);
}


// Function: call_struct_byval at 0x400ddc
int call_struct_byval()
{
 unsigned long long idx; // x8
 unsigned long v0; // [bp-0x40]
 char v1; // [bp-0x4]

 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
 idx += 1;
 } while (idx != 16);
 return *((int *)&v1) + (int)v0;
}


// Function: param_order_dep at 0x400e0c
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x400e14
unsigned long long call_order_dep()
{
 return 3;
}


// Function: test_parameter_passing at 0x400e1c
extern char* g_4014df;

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long idx; // x8
 unsigned long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(g_4014df);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 printf("PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30, 40, a5, a6, a7) & 4294967295);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
 idx += 1;
 } while (idx != 16);
 printf("PARAM-L3-04: %d\n", v1 + (unsigned int)v0);
 return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x400f2c
unsigned int ret_basic_type(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x400f34
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x400f3c
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x400f44
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x400f4c
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | (a1 * 0x100000000 | a1 >> 32) & 0xffffffff00000000;
}


// Function: call_ret_small_struct at 0x400f58
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x400f60
long long ret_large_struct(unsigned long a0)
{
 unsigned long long idx; // x9
 unsigned long long ptr; // x8

 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = (unsigned int)a0 + (unsigned int)idx;
 idx += 1;
 } while (idx != 16);
 return a0;
}


// Function: call_ret_large_struct at 0x400f80
int call_ret_large_struct()
{
 unsigned long long idx; // x8
 unsigned long v0; // [bp-0x40]
 char v1; // [bp-0x4]

 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v0 + 4 * idx)) = (unsigned int)idx + 100;
 idx += 1;
 } while (idx != 16);
 return *((int *)&v1) + (int)v0;
}


// Function: func_a at 0x400fb4
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x400fbc
unsigned int func_b(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x400fc4
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
  return func_b(a0);
 return func_a(a0);
}


// Function: call_ret_func_ptr at 0x400fe0
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Global variable for ret_opaque_handle
char ret_opaque_handle_data = 0;

// Function: ret_opaque_handle at 0x400fe8
long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
  return (long long)&ret_opaque_handle_data;
 return (long long)"d";
}


// Function: call_ret_opaque at 0x401004
extern unsigned int __dollar_d_2;

int call_ret_opaque()
{
 return __dollar_d_2;
}


// Function: ret_complex_expr at 0x401010
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a1 >= a0)
 return a2 + 10;
 return __ROL__(a2, 1) & 4294967294;
}


// Function: call_ret_complex_expr at 0x401024
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x40102c
unsigned long long ret_multi_branch(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return 10 * a0 + 10;
}


// Function: call_ret_multi_branch at 0x401044
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x40104c
long long ret_void(unsigned long a0, unsigned int *ptr)
{
 *(ptr) = (unsigned int)a0 * 3;
 return a0;
}


// Function: call_ret_void at 0x401058
unsigned long long call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x401060
extern unsigned int __dollar_d_2;
extern char* g_4013c1;
extern char* g_4013dd;
extern char* g_4013f9;
extern char* g_401414;
extern char* g_401431;
extern char* g_40144d;
extern char* g_40146a;
extern char* g_401486;
extern char* g_4014a2;
extern char* g_401500;

int test_return_values()
{
 unsigned long long idx; // x8
 unsigned long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(g_401500);
 printf(g_4013c1, 42);
 printf(g_4013dd, 20);
 printf(g_4013f9, 7);
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v0 + 4 * idx)) = (unsigned int)idx + 100;
 idx += 1;
 } while (idx != 16);
 printf(g_401414, v1 + (unsigned int)v0);
 printf(g_401431, 10);
 printf(g_40144d, __dollar_d_2);
 printf(g_40146a, 40);
 printf(g_401486, 60);
 return printf(g_4014a2, 21);
}


// Function: main at 0x40113c
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_parameter_passing(test_calling_conventions(1, 0, 0, 0, 0, 0, 0, 0), 0, 0, 0, 0, 0, 0, 0);
 test_return_values();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


