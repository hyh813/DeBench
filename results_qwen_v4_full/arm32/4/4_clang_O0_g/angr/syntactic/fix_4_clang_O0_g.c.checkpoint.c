// Angr Decompilation of 4_clang_O0_g
// Platform: ARMEL

#include <stdio.h>
#include <string.h>
#include <stddef.h>


/* CRT stub function _init removed by preprocessor */



// Function: sub_40040c at 0x40040c
extern unsigned int g_413008;

// Forward declarations
unsigned int __dollar_a_8(unsigned int a0);
unsigned int vvar_4 = 0;
extern unsigned int vvar_286;
double __floatsidf(int a0);
int __fixdfsi(double a0);
double __adddf3(double a0, double a1);

int sub_40040c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4004ac at 0x4004ac
void sub_4004ac()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: cdecl_func at 0x4005dc
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x4005fc
unsigned int call_cdecl()
{
 unsigned int v0; // r0

 v0 = cdecl_func(5, 10);
 return cdecl_func(5, 10);
}


// Function: stdcall_func at 0x400618
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x400638
unsigned int call_stdcall()
{
 unsigned int v0; // r0

 v0 = stdcall_func(5, 10);
 return stdcall_func(5, 10);
}


// Function: fastcall_func at 0x400654
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x400680
unsigned int call_fastcall()
{
 unsigned int v0; // r0

 v0 = fastcall_func(1, 2, 3);
 return fastcall_func(1, 2, 3);
}


// Function: call_thiscall at 0x4006a0
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x4006a8
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x4006ec
unsigned int call_arm_aapcs()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 5;
 v1 = arm_aapcs_func(1, 2, 3, 4);
 return arm_aapcs_func(1, 2, 3, 4);
}


// Function: mips_func at 0x400724
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x40075c
unsigned int call_mips()
{
 unsigned int v0; // r0

 v0 = mips_func(10, 20, 30, 40);
 return mips_func(10, 20, 30, 40);
}


// Function: amd64_sysv_func at 0x400780
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x4007d0
unsigned int call_amd64_sysv()
{
 unsigned int v0; // r0

 v0 = amd64_sysv_func(1, 2, 3, 4, 5, 6);
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: ms_x64_func at 0x400810
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x400854
unsigned int call_ms_x64()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 5;
 v1 = ms_x64_func(1, 2, 3, 4);
 return ms_x64_func(1, 2, 3, 4);
}


// Function: vectorcall_func at 0x40088c
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x4008c4
unsigned int call_vectorcall()
{
 unsigned int v0; // r0

 v0 = vectorcall_func(1, 2, 3, 4);
 return vectorcall_func(1, 2, 3, 4);
}


// Function: mixed_conventions_test at 0x4008e8
unsigned int mixed_conventions_test()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += cdecl_func(1, 2);
 v0 += stdcall_func(3, 4);
 v0 += fastcall_func(5, 6, 7);
 return v0;
}


// Function: varargs_func at 0x400964
unsigned int varargs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *ptr; // r0
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 char *v2; // [bp-0x14]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = a3;
 v4 = a2;
 v3 = a1;
 v1 = 0;
 v2 = (char*)&v3;
 for (i = 0; a0 > i; i += 1)
 {
 ptr = v2;
 v2 = (char*)(ptr + 1);
 v1 = v1 + *(ptr);
 }
 return v1;
}


// Function: func_no_args at 0x4009e0
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x4009e8
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400a50
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v4; // r1
 unsigned int v5; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x30]
 unsigned int v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x8]

 v3 = (unsigned int)&vvar_4;
 v1 = (!a1 ? 0 : strlen(a1));
 v2 = v1;
 v0 = __adddf3(__floatsidf(a0 + v2), 0.0);
 v5 = __adddf3(v0, v4);
 v6 = __fixdfsi(v5);
 return __fixdfsi(v5);
}


// Helper function for flag calculation
static unsigned int armg_calculate_flag_c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 0;
}

// Function: func_struct_byval at 0x400b0c
unsigned int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v8; // r1
 char *ptr; // [bp-0x20]
 char i; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v7 = a3;
 v6 = a2;
 v5 = a1;
 v4 = a0;
 ptr = &v4;
 memset(&i, 0, 12);
 for (; 15 >= i; i += 1)
 {
 v8 = v2;
 v2 = v8 + *((int *)&ptr[8 * i]);
 v3 = v3 + *((int *)&ptr[4 + 8 * i]) + armg_calculate_flag_c(1, v8, *((int *)&ptr[8 * i]), 0);
 }
 return v2;
}


// Function: func_struct_byptr at 0x400b94
unsigned int func_struct_byptr(unsigned int *a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a0 ? *(a0) * a0[1] : 4294967295);
 return v0;
}


// Function: test_calling_conventions at 0x400bdc
extern char g_402180[];
extern char g_402242[];
extern char g_40226a[];
extern char g_40228c[];
extern char g_4022b8[];
extern char g_4022e0[];
extern char g_40230c[];

// Global variable definitions
char g_402180[] = "Testing calling conventions\n";
char g_402242[] = "VARARGS-L1-01: %d\n";
char g_40226a[] = "NOARGS-L1-01: %d\n";
char g_40228c[] = "MANYARGS-L1-01: %d\n";
char g_4022b8[] = "MIXED-L1-01: %d\n";
char g_4022e0[] = "STRUCTBYVAL-L1-01: %d\n";
char g_40230c[] = "STRUCTBYPTR-L1-01: %d\n";

int test_calling_conventions()
{
 unsigned int v38; // r2
 unsigned int v39; // r2
 char v40[4]; // r1
 unsigned int v41; // r0
 unsigned int v0; // [bp-0x158]
 char v1[4]; // [bp-0xe8]
 char v2[4]; // [bp-0xe4]
 unsigned int j; // [bp-0xe0]
 unsigned int v4; // [bp-0xe0]
 char v5[4]; // [bp-0xdc]
 char ptr[4]; // [bp-0xd8]
 unsigned int v7; // [bp-0xd4]
 unsigned int v8; // [bp-0xd0]
 unsigned int v9; // [bp-0xcc]
 unsigned int v10; // [bp-0xc8]
 unsigned int result; // [bp-0xc4]
 unsigned int flag1; // [bp-0xc0]
 unsigned int v13; // [bp-0xbc]
 unsigned int v14[1]; // [bp-0xb8]
 unsigned int v15; // [bp-0xb4]
 unsigned int v16; // [bp-0xb0]
 unsigned int idx; // [bp-0xac]
 unsigned int v18; // [bp-0xa8]
 unsigned int v19; // [bp-0xa4]
 unsigned int v20; // [bp-0xa0]
 unsigned int v21; // [bp-0x9c]
 char v22; // [bp-0x98]
 unsigned int v23; // [bp-0x24]
 char *v24; // [bp-0x20]
 unsigned int v25; // [bp-0x1c]
 unsigned int v26; // [bp-0x18]
 unsigned int v27; // [bp-0x14]

 printf(&g_402180);
 printf("CALL-L1-01: %d\n", call_cdecl());
 printf("CALL-L1-02: %d\n", call_stdcall());
 printf("CALL-L1-03: %d\n", call_fastcall());
 printf("CALL-L1-04: %d\n", call_thiscall());
 printf("CALL-L1-05: %d\n", call_arm_aapcs());
 printf("CALL-L1-06: %d\n", call_mips());
 printf("CALL-L1-07: %d\n", call_amd64_sysv());
 printf("CALL-L1-08: %d\n", call_ms_x64());
 printf("CALL-L1-09: %d\n", call_vectorcall());
 printf("CALL-L1-10: %d\n", mixed_conventions_test());
 v7 = 5;
 v10 = 4;
 result = 1;
 v8 = 2;
 v9 = 3;
 v27 = varargs_func(5, 1, 2, 3);
 printf(&g_402242, v27);
 v26 = func_no_args();
 printf(&g_40226a, v26);
 v25 = func_many_args(result, v8, v9, v10, v7, 6, 7, 8);
 printf(&g_40228c, v25);
 v24 = "test";
 flag1 = 0;
 v0 = 100;
 v23 = func_mixed_args(10, v24, 1374389535, 1074339512, 100, 0);
 printf(&g_4022b8, v23);
 for (idx = flag1; 15 >= idx; idx += 1)
 {
 v38 = idx + 1;
 (&v18)[2 * idx] = v38;
 (&v19)[2 * idx] = v38 >> 31;
 }
 j = 112;
 *((char **)&v5[0]) = &v22;
 *((unsigned int **)&ptr[0]) = &v0;
 do
 {
 v39 = j;
 v40[0] = (char)j;
 v1[0] = (char)j;
 *(ptr) = *(v5);
 v2[0] = (char)(j - 4);
 v4 = j - 4;
 v5[0] = (char)v1[0];
 ptr[0] = (char)v2[0];
 j = v4;
 } while (j != 4);
 v16 = func_struct_byval(v18, v19, v20, v21);
 printf(&g_4022e0, v16);
 v15 = 10;
 *((unsigned int *)v14) = 5;
 v13 = func_struct_byptr(&v14);
 v41 = printf(&g_40230c, v13);
 return printf(&g_40230c, v13);
}


// Function: param_by_value_int at 0x400f18
unsigned int param_by_value_int(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 v0 *= 2;
 return v0;
}


// Function: call_by_value_int at 0x400f38
int call_by_value_int()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 5;
 v0 = param_by_value_int(v1);
 return v1 + v0;
}


// Function: param_by_value_ptr at 0x400f70
int param_by_value_ptr(unsigned int *a0)
{
 unsigned int *ptr; // [bp-0x4], Other Possible Types: unsigned int

 ptr = a0;
 *(ptr) = *(ptr) * 2;
 ptr = 0;
 return 0 + 0 + 1;
}


// Function: call_by_value_ptr at 0x400fa4
int call_by_value_ptr()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = 5;
 v1 = &v2;
 v0 = param_by_value_ptr(v1);
 return v2 + v0;
}


// Function: param_array_decay at 0x400fe4
unsigned int param_array_decay(unsigned int a0, unsigned int a1)
{
 return 4;
}


// Function: call_array_decay at 0x400ffc
unsigned int call_array_decay()
{
 unsigned int v2; // r0
 char *v0; // [bp-0x34]
 char v1; // [bp-0x30]

 v0 = &v1;
 memset(&v1, 0, 40);
 v2 = param_array_decay(v0, 10);
 return param_array_decay(v0, 10);
}


// Function: param_string at 0x401034
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x401054
unsigned int call_string_param()
{
 unsigned int v0; // r0

 v0 = param_string("Hello");
 return param_string("Hello");
}


// Function: param_ptr_array at 0x401074
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int i; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *((char *)*((int *)(a0 + i * 4)));
 }
 return v1;
}


// Function: call_ptr_array at 0x4010e0
extern unsigned int g_412f04;
extern unsigned int g_412f08;
extern unsigned int g_412f0c;

// Global variable definitions for ptr_array
unsigned int g_412f04 = 0x11111111;
unsigned int g_412f08 = 0x22222222;
unsigned int g_412f0c = 0x33333333;

unsigned int call_ptr_array()
{
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = g_412f04;
 v2 = g_412f0c;
 v1 = g_412f08;
 v3 = param_ptr_array(&v0, 3);
 return param_ptr_array(&v0, 3);
}


// Function: param_varargs at 0x401130
unsigned int param_varargs(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *ptr; // r0
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 char v2[4]; // [bp-0x14]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = a3;
 v4 = a2;
 v3 = a1;
 *((unsigned int **)&v2[0]) = &v3;
 v1 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 ptr = v2;
 v2[0] = (char)(ptr + 1);
 v1 = v1 + *(ptr);
 }
 return v1;
}


// Function: call_varargs_param at 0x4011ac
unsigned int call_varargs_param()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 40;
 v1 = param_varargs(4, 10, 20, 30);
 return param_varargs(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x4011e4
typedef unsigned int (*func_ptr_t)(unsigned int, unsigned int *);
int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 return a0(a1, a0) + 10;
}


// Function: call_func_ptr_param at 0x401218
unsigned int call_func_ptr_param()
{
 unsigned int v0; // r0

 v0 = param_func_ptr(__dollar_a_8, 5);
 return param_func_ptr(__dollar_a_8, 5);
}


// Function: __dollar_a_8 at 0x40123c
unsigned int __dollar_a_8(unsigned int a0)
{
 return a0 * 2;
}


// Function: param_double_ptr at 0x401254
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 v0 = 1;
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: call_double_ptr at 0x4012c4
int call_double_ptr()
{
 unsigned int v0; // [bp-0x14]
 char *result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = 10;
 result = &v2;
 v0 = param_double_ptr(&result, 20);
 if (result)
 return v2;
 return v2 + 1;
}


// Function: param_complex_cast at 0x401310
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 unsigned int ptr[2]; // [bp-0x1c]
 unsigned int p[2]; // [bp-0x18]
 unsigned int v2[2]; // [bp-0x14]
 unsigned int v3[2]; // [bp-0x10]
 unsigned int v4; // [bp-0x4]

 if (!a1)
 {
 v3[0] = a0;
 v2[0] = v3;
 p[0] = v2;
 v4 = p[0];
 return v4;
 }
 else if (a1 == 1)
 {
 ptr[0] = a0;
 v4 = ptr[0] + ptr[1];
 return v4;
 }
 else
 {
 v4 = 4294967295;
 return v4;
 }
}


// Function: call_complex_cast at 0x4013a0
unsigned int call_complex_cast()
{
 unsigned int v3; // r0
 unsigned int v0[1]; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2[1]; // [bp-0xc]

 *((unsigned int *)v2) = 305419896;
 v1 = 200;
 *((unsigned int *)v0) = 100;
 param_complex_cast(&v0, 1);
 v3 = param_complex_cast(&v2, 0);
 return param_complex_cast(&v2, 0);
}


// Function: param_struct_byval at 0x401400
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a0 + a15;
}


// Function: call_struct_byval at 0x4014b8
unsigned int call_struct_byval()
{
 unsigned int v21; // r0
 unsigned int v0; // [bp-0x78]
 unsigned int v1; // [bp-0x74]
 unsigned int v2; // [bp-0x70]
 unsigned int v3; // [bp-0x6c]
 unsigned int idx; // [bp-0x68]
 unsigned int v5; // [bp-0x64]
 unsigned int v6; // [bp-0x60]
 unsigned int v7; // [bp-0x5c]
 unsigned int v8; // [bp-0x58]
 unsigned int v9; // [bp-0x54]
 unsigned int v10; // [bp-0x50]
 unsigned int v11; // [bp-0x4c]
 unsigned int v12; // [bp-0x48]
 unsigned int v13; // [bp-0x44]
 unsigned int v14; // [bp-0x40]
 unsigned int v15; // [bp-0x3c]
 unsigned int v16; // [bp-0x38]
 unsigned int v17; // [bp-0x34]
 unsigned int v18; // [bp-0x30]
 unsigned int v19; // [bp-0x2c]
 char v20; // [bp-0x28]

 for (idx = 0; 15 >= idx; idx += 1)
 {
 (&v5)[idx] = idx;
 }
 v3 = v5;
 v2 = v17;
 v1 = v18;
 v0 = v19;
 v21 = param_struct_byval(v3, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v2, v1, v0, *((int *)&v20));
 return param_struct_byval(v3, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v2, v1, v0, *((int *)&v20));
}


// Function: param_order_dep at 0x4015a4
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x4015c4
unsigned int call_order_dep()
{
 unsigned int v3; // r0
 unsigned int result; // [bp-0xc]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0xc]

 result = 0;
 v1 = result + 1;
 v2 = v1 + 1;
 v3 = param_order_dep(result + 1, v1 + 1);
 return param_order_dep(result + 1, v1 + 1);
}


// Function: test_parameter_passing at 0x401600
extern char g_40234b[];

// Global variable definition for parameter passing
char g_40234b[] = "Testing parameter passing\n";

int test_parameter_passing()
{
 unsigned int v10; // r0

 printf(&g_40234b);
 printf("PARAM-L1-01: %d\n", call_by_value_int());
 printf("PARAM-L1-02: %d\n", call_by_value_ptr());
 printf("PARAM-L2-01: %d\n", call_array_decay());
 printf("PARAM-L2-02: %d\n", call_string_param());
 printf("PARAM-L2-03: %d\n", call_ptr_array());
 printf("PARAM-L2-04: %d\n", call_varargs_param());
 printf("PARAM-L3-01: %d\n", call_func_ptr_param());
 printf("PARAM-L3-02: %d\n", call_double_ptr());
 printf("PARAM-L3-03: %d\n", call_complex_cast());
 printf("PARAM-L3-04: %d\n", call_struct_byval());
 v10 = printf("PARAM-L3-05: %d\n", call_order_dep());
 return printf("PARAM-L3-05: %d\n", call_order_dep());
}


// Function: ret_basic_type at 0x401728
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x401740
unsigned int call_ret_basic()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 21;
 v0 = ret_basic_type(v1);
 return v0;
}


// Function: ret_pointer at 0x401770
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x401788
int call_ret_pointer()
{
 unsigned int *v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v1 = 10;
 v3 = 30;
 v2 = 20;
 v0 = ret_pointer(&v1);
 return *(v0);
}


// Function: ret_small_struct at 0x4017e0
int ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return a2;
}


// Function: call_ret_small_struct at 0x401810
int call_ret_small_struct()
{
 unsigned int v0[1]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 ret_small_struct(&v0, 3, 4);
 return *(v0) + v1;
}


// Function: ret_large_struct at 0x401844
unsigned int ret_large_struct(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0x8]

 for (idx = 0; 15 >= idx; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = a1 + idx;
 }
 return idx;
}


// Function: call_ret_large_struct at 0x40189c
int call_ret_large_struct()
{
 char v0; // [bp-0x48]
 unsigned int v1; // [bp-0xc]

 ret_large_struct(&v0, 100);
 return *((int *)&v0) + v1;
}


// Function: func_a at 0x4018cc
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x4018e4
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: ret_func_ptr at 0x4018fc
int ret_func_ptr(unsigned int a0)
{
 if (!a0)
 return func_a;
 return func_b;
}


// Function: call_ret_func_ptr at 0x401930
typedef unsigned int (*func_ptr_t2)(unsigned int, unsigned int *);
int call_ret_func_ptr()
{
 unsigned int v1; // r0
 func_ptr_t2 v0; // [bp-0xc]

 v0 = (func_ptr_t2)ret_func_ptr(1);
 v1 = v0(5, v0);
 return v0(5, v0);
}


// Function: ret_opaque_handle at 0x401964
extern char ret_opaque_handle_handle2;

// Global variable definition for opaque handle
char ret_opaque_handle_handle2 = 'H';

int ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return &ret_opaque_handle_handle2;
 return "d";
}


// Function: call_ret_opaque at 0x401998
int call_ret_opaque()
{
 unsigned int *v0; // [bp-0xc]

 v0 = ret_opaque_handle(0);
 return *(v0);
}


// Function: ret_complex_expr at 0x4019c4
unsigned int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]

 v0 = (a0 <= a1 ? a2 + 10 : a2 * 2);
 return v0;
}


// Function: call_ret_complex_expr at 0x401a14
int call_ret_complex_expr()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = 5;
 v2 = 3;
 v1 = 10;
 v4 = ret_complex_expr(5, 3, 10);
 v3 = ret_complex_expr(v2, v0, v1);
 return v4 + v3;
}


// Function: ret_multi_branch at 0x401a70
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = (!a0 ? 10 : (a0 == 1 ? 20 : (a0 == 2 ? 30 : 4294967295)));
 return v0;
}


// Function: call_ret_multi_branch at 0x401ae8
unsigned int call_ret_multi_branch()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += ret_multi_branch(0);
 v0 += ret_multi_branch(1);
 v0 += ret_multi_branch(2);
 return v0;
}


// Function: ret_void at 0x401b50
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x401b74
int call_ret_void()
{
 unsigned int v0[1]; // [bp-0xc]

 ret_void(7, &v0);
 return *(v0);
}


// Function: test_return_values at 0x401b9c
extern char g_402428[];
extern char g_402447[];
extern char g_402463[];
extern char g_40247f[];
extern char g_40249a[];
extern char g_4024b7[];
extern char g_4024d3[];
extern char g_4024f0[];
extern char g_40250c[];
extern char g_402528[];

// Global variable definitions for return values
char g_402428[] = "Testing return values\n";
char g_402447[] = "RET-L1-01: %d\n";
char g_402463[] = "RET-L1-02: %d\n";
char g_40247f[] = "RET-L1-03: %d\n";
char g_40249a[] = "RET-L1-04: %d\n";
char g_4024b7[] = "RET-L1-05: %d\n";
char g_4024d3[] = "RET-L1-06: %d\n";
char g_4024f0[] = "RET-L1-07: %d\n";
char g_40250c[] = "RET-L1-08: %d\n";
char g_402528[] = "RET-L1-09: %d\n";

int test_return_values()
{
 unsigned int v8; // r0
 unsigned int v9; // r0

 printf(&g_402428);
 printf(&g_402447, call_ret_basic());
 printf(&g_402463, call_ret_pointer());
 printf(&g_40247f, call_ret_small_struct());
 printf(&g_40249a, call_ret_large_struct());
 printf(&g_4024b7, call_ret_func_ptr());
 printf(&g_4024d3, call_ret_opaque());
 printf(&g_4024f0, call_ret_complex_expr());
 printf(&g_40250c, call_ret_multi_branch());
 v8 = call_ret_void();
 v9 = printf(&g_402528, v8);
 return printf(&g_402528, v8);
}


// Function: main at 0x401c94
unsigned int main()
{
 unsigned int result; // [bp-0x10]
 unsigned int flag1; // [bp-0xc]

 result = 0;
 flag1 = 0;
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return result;
}


// Function: __aeabi_drsub at 0x401cc8
static int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = 0;
 return 0;
}


// Function: __subdf3 at 0x401cd0
static int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = 0;
 return 0;
}


// Function: __adddf3 at 0x401cd4
double __adddf3(double a0, double a1)
{
 return 0.0;
}


// Function: __aeabi_ui2d at 0x401f80
static double __aeabi_ui2d(unsigned int a0)
{
 return (double)a0;
}


// Function: __floatsidf at 0x401fa4
double __floatsidf(int a0)
{
 return (double)a0;
}


// Function: __extendsfdf2 at 0x401fcc
static double __extendsfdf2(float a0)
{
 return (double)a0;
}


// Function: __floatundidf at 0x402014
static double __floatundidf(unsigned long long a0)
{
 return (double)a0;
}



/* CRT stub function __floatdidf removed by preprocessor */



// Function: __fixdfsi at 0x402088
int __fixdfsi(double a0)
{
 return (int)a0;
}



/* CRT stub function _fini removed by preprocessor */


