// Angr Decompilation of 4_clang_O0_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */


// External variables from decompiler
extern unsigned int vvar_4;
extern unsigned int vvar_32;
extern unsigned int vvar_286;

// Define NULL if not already defined
#ifndef NULL
#define NULL ((void*)0)
#endif


// Function: sub_40040c at 0x40040c
extern unsigned int g_413008;

int sub_40040c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
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
 char v2[4]; // [bp-0x14]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = a3;
 v4 = a2;
 v3 = a1;
 v1 = 0;
 ptr = (char *)&v3;
 for (i = 0; a0 > i; i += 1)
 {
 v1 += *(ptr);
 ptr = ptr + 1;
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

 v3 = &vvar_4;
 v1 = (!a1 ? 0 : strlen(a1));
 v2 = v1;
 v0 = __adddf3(__floatsidf(a0 + v2, v2), a1, a2, a3);
 v5 = __adddf3(v0, v4, __floatdidf(a4, a5), v4);
 v6 = __fixdfsi(v5, a1, a2, a3);
 return __fixdfsi(v5, a1, a2, a3);
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
extern char g_402180;
extern char g_402242;
extern char g_40226a;
extern char g_40228c;
extern char g_4022b8;
extern char g_4022e0;
extern char g_40230c;

int test_calling_conventions()
{
 unsigned int v38; // r2
 unsigned int v39; // r2
 char *v40; // r1
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
 v40 = (char *)v5 + 1;
 *((char **)&v1[0]) = (char *)v5 + 1;
 *(unsigned int *)ptr = *(unsigned int *)v5;
 *((char **)&v2[0]) = (char *)ptr + 1;
 v4 = j - 4;
 *((char **)&v5[0]) = v1;
 *((char **)&ptr[0]) = v2;
 j = v4;
 } while (j != 4);
 v16 = func_struct_byval(v18, v19, v20, v21);
 printf(&g_4022e0, v16);
 v15 = 10;
 v14[0] = 5;
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
 ptr = NULL;
 return ptr - ptr + (ptr <= 0);
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
 ptr = (char *)&v3;
 v1 = 0;
 for (i = 0; a0 > i; i += 1)
 {
 v1 += *(ptr);
 ptr = ptr + 1;
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


// Function: __dollar_a_8 at 0x40123c (forward declaration)
unsigned int __dollar_a_8(unsigned int a0);

// Function: param_func_ptr at 0x4011e4
int param_func_ptr(unsigned int (*a0)(unsigned int, unsigned int), unsigned int a1)
{
 return a0(a1, a1) + 10;
}


// Function: call_func_ptr_param at 0x401218
unsigned int call_func_ptr_param()
{
 unsigned int v0; // r0

 v0 = param_func_ptr((unsigned int*)__dollar_a_8, 5);
 return param_func_ptr((unsigned int*)__dollar_a_8, 5);
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
 (*(ptr))->field_0 = a1;
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
 unsigned int *ptr; // [bp-0x1c]
 unsigned int *p; // [bp-0x18]
 unsigned int *v2; // [bp-0x14]
 unsigned int *v3; // [bp-0x10]
 unsigned int v4; // [bp-0x4]

 if (!a1)
 {
 v3 = a0;
 v2 = v3;
 p = v2;
 v4 = (unsigned int)p;
 return v4;
 }
 else if (a1 == 1)
 {
 ptr = a0;
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
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = 305419896;
 v1 = 200;
 v0 = 100;
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
extern char g_40234b;

int test_parameter_passing()
{
 unsigned int v10; // r0
 unsigned int v11; // r0

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
 v10 = call_order_dep();
 v11 = printf("PARAM-L3-05: %d\n", v10);
 return printf("PARAM-L3-05: %d\n", v10);
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
int (*ret_func_ptr(unsigned int a0))(unsigned int)
{
 if (!a0)
 return func_a;
 return func_b;
}


// Function: call_ret_func_ptr at 0x401930
int call_ret_func_ptr()
{
 unsigned int v1; // r0
 int (*v0)(unsigned int); // [bp-0xc]

 v0 = ret_func_ptr(1);
 v1 = v0(5);
 return v0(5);
}


// Function: ret_opaque_handle at 0x401964
extern char ret_opaque_handle_handle2;

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
extern char g_402428;
extern char g_402447;
extern char g_402463;
extern char g_40247f;
extern char g_40249a;
extern char g_4024b7;
extern char g_4024d3;
extern char g_4024f0;
extern char g_40250c;
extern char g_402528;

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
unsigned int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 // Placeholder implementation
 return a0;
}


// Function: __subdf3 at 0x401cd0
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(a0);
 return __adddf3(a0);
}


// Function: __adddf3 at 0x401cd4
extern unsigned int g_400000;



// Helper function for ARM emulation
unsigned int armg_calculate_condition(unsigned int cc, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep);
unsigned int armg_calculate_flag_c(unsigned int cc, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep);
unsigned int armg_calculate_flag_v(unsigned int cc, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep);
unsigned int Clz(unsigned int x);

// Placeholder implementations for ARM helper functions
unsigned int armg_calculate_condition(unsigned int cc, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
    return cc_dep1;
}

unsigned int armg_calculate_flag_c(unsigned int cc, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
    return cc_dep2;
}

unsigned int armg_calculate_flag_v(unsigned int cc, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
    return cc_ndep;
}

unsigned int Clz(unsigned int x)
{
    int count = 0;
    while (x && count < 32) {
        count++;
        x >>= 1;
    }
    return count;
}

// Function implementation for __adddf3
unsigned int __adddf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // cc_dep1
 unsigned int v2; // cc_dep2
 unsigned int v3; // r3
 unsigned int v4; // r5
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v92; // cc_dep2
 unsigned int v93; // cc_ndep
 unsigned int flag2; // r1
 unsigned int v95; // r3
 unsigned int v96; // r3
 unsigned int v97; // r2
 unsigned int v98; // cc_op
 unsigned int v99; // cc_dep2
 unsigned int v11; // cc_dep1
 unsigned int v100; // cc_dep1
 unsigned int v101; // r2
 unsigned int v102; // r2
 unsigned int v103; // r0
 unsigned int v104; // r1
 unsigned int v106; // r1
 unsigned int v107; // r4
 unsigned int v108; // r4
 unsigned int v12; // cc_dep2
 char v109; // r4
 unsigned int v110; // cc_op
 unsigned int v111; // cc_dep1
 unsigned int v112; // cc_dep2
 unsigned int v113; // cc_ndep
 unsigned int v114; // cc_dep1
 unsigned int v115; // cc_dep2
 unsigned int v116; // cc_ndep
 unsigned int v117; // cc_dep1
 unsigned int v118; // cc_dep2
 unsigned int v13; // cc_ndep
 unsigned int v119; // cc_ndep
 unsigned int v120; // cc_dep1
 unsigned int v121; // cc_dep2
 unsigned int v122; // cc_ndep
 unsigned int v123; // r1
 unsigned int v14; // r2
 unsigned int v18; // cc_op
 unsigned int v3; // r3
 unsigned int v19; // cc_dep1
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v4; // r5
 unsigned int v28; // cc_op
 unsigned int v29; // cc_dep1
 unsigned int v30; // cc_dep2
 unsigned int v31; // cc_ndep
 unsigned int v32; // r4
 unsigned int v33; // cc_dep1
 unsigned int v34; // r5
 unsigned int v35; // r5
 unsigned int v36; // r2
 unsigned int v5; // cc_dep1
 unsigned int v37; // r3
 unsigned int v38; // r1
 unsigned int v39; // r2
 unsigned int v40; // r3
 unsigned int v41; // cc_op
 unsigned int v42; // cc_dep1
 unsigned int v44; // cc_ndep
 unsigned int v45; // r1
 unsigned int v46; // cc_dep2
 unsigned int v6; // cc_dep2
 unsigned int v47; // r0
 unsigned int v49; // cc_op
 unsigned int v50; // cc_dep1
 unsigned int v52; // cc_ndep
 unsigned int v53; // r3
 unsigned int v54; // cc_dep2
 unsigned int v55; // r2
 unsigned int v7; // cc_ndep
 unsigned int v57; // cc_dep1
 unsigned int v58; // cc_dep2
 unsigned int v59; // cc_ndep
 unsigned int v60; // cc_dep2
 unsigned int v61; // cc_ndep
 unsigned int v62; // r4
 unsigned int v63; // cc_dep2
 unsigned int v64; // r12
 unsigned int v65; // r0
 unsigned int v66; // r1
 unsigned int v67; // cc_dep2
 unsigned int v68; // cc_ndep
 char v69; // r5
 unsigned int v70; // r1
 unsigned int v8; // cc_dep1
 unsigned int v71; // r12
 unsigned int v72; // r0
 unsigned int v76; // cc_dep1
 unsigned int v77; // cc_op
 unsigned int v78; // cc_dep2
 unsigned int v79; // cc_ndep
 unsigned int v9; // cc_dep2
 unsigned int v80; // r12
 unsigned int v81; // r0
 unsigned int v83; // r12
 unsigned int v84; // r0
 unsigned int flag3; // r1
 unsigned int v86; // r4
 unsigned int v87; // cc_op
 unsigned int v88; // cc_dep1
 unsigned int v89; // cc_dep2
 unsigned int v0; // [bp-0xc]

 v2 = v1 * 2;
 v4 = v3 * 2;
 if (!(v2 ^ v4))
 {
 v8 = (armg_calculate_condition(5, v5, v6, v7) ? a0 ^ v14 : v5);
 v9 = (armg_calculate_condition(5, v5, v6, v7) ? armg_calculate_flag_c(5, v5, v6, v7) : v6);
 v10 = (armg_calculate_condition(5, v5, v6, v7) ? armg_calculate_flag_v(5, v5, v6, v7) : v7);
 if (!armg_calculate_condition(21, v8, v9, v10))
 goto LABEL_401cea;
LABEL_401ce9:
 v18 = (armg_calculate_condition(21, v8, v9, v10) ? 5 : 5);
 v19 = (armg_calculate_condition(21, v8, v9, v10) ? v2 | a0 : v8);
 v20 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_c(5, v8, v9, v10) : v9);
 v21 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_v(5, v8, v9, v10) : v10);
 }
 else
 {
 v8 = (armg_calculate_condition(5, v11, v12, v13) ? a0 ^ v14 : v11);
 v9 = (armg_calculate_condition(5, v11, v12, v13) ? armg_calculate_flag_c(5, v11, v12, v13) : v12);
 v10 = (armg_calculate_condition(5, v11, v12, v13) ? armg_calculate_flag_v(5, v11, v12, v13) : v13);
 if (armg_calculate_condition(21, v8, v9, v10))
 goto LABEL_401ce9;
LABEL_401cea:
 v18 = (armg_calculate_condition(21, v8, v9, v10) ? 5 : 5);
 v19 = (armg_calculate_condition(21, v8, v9, v10) ? v2 | a0 : v8);
 v20 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_c(5, v8, v9, v10) : v9);
 v21 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_v(5, v8, v9, v10) : v10);
 }
 v28 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)));
 v29 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? ~(v4 >> 21) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)));
 v30 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? v4 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)));
 v31 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)));
 if (!((char)armg_calculate_condition((armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? ~(v4 >> 21) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? v4 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))))))
 {
 v32 = v2 >> 21;
 v33 = v4 >> 21;
 if (v4 >> 21 < v32)
 {
 v35 = -(v34);
 if (!((char)armg_calculate_condition(210, v33, v32, 0)))
 goto LABEL_401d0c;
 }
 else
 {
 v34 = (v4 >> 21) - v32;
 if (!((char)armg_calculate_condition(210, v33, v32, 0)))
 {
LABEL_401d0c:
 v32 += v35;
 v36 = a0 ^ v14;
 v37 = v1 ^ v3;
 a0 ^= v36;
 v38 = v37 ^ v1;
 v39 = a0 ^ v36;
 v40 = v38 ^ v37;
 }
 }
 if (54 >= v35)
 goto LABEL_401d30;
 return a0;
LABEL_401d30:
 v41 = 5;
 v42 = v38 & 0x80000000;
 v44 = armg_calculate_flag_v(2, v35, 54, 0);
 v45 = 0x100000 | v38 & 1048575;
 v46 = 1;
 v47 = a0;
 if ((v38 & 0x80000000))
 {
 v41 = 2;
 v42 = 0;
 v44 = 0;
 v45 = -(v45) - (a0 > 0);
 v46 = a0;
 v47 = -(a0);
 }
 v49 = 5;
 v50 = v40 & 0x80000000;
 v52 = armg_calculate_flag_v(v41, v42, v46, v44);
 v53 = 0x100000 | v40 & 1048575;
 v54 = 1;
 v55 = v39;
 if ((v40 & 0x80000000))
 {
 v49 = 2;
 v50 = 0;
 v52 = 0;
 v53 = -(v53) - (v39 > 0);
 v54 = v39;
 v55 = -(v39);
 }
 v57 = v32 ^ v35;
 v58 = armg_calculate_flag_c(v49, v50, v54, v52);
 v59 = armg_calculate_flag_v(v49, v50, v54, v52);
 if (!(v32 ^ v35))
 {
 v60 = armg_calculate_flag_c(5, v57, v58, v59);
 v61 = armg_calculate_flag_v(5, v57, v58, v59);
 v53 ^= 0x100000;
 if (!v32)
 {
 v45 ^= 0x100000;
 if (!armg_calculate_condition(5, v32, v60, v61))
 goto LABEL_401eda;
LABEL_401ed9:
 v32 += 1;
 if (!armg_calculate_condition(21, v32, v60, v61))
 goto LABEL_401ede;
LABEL_401edd:
 v35 -= 1;
 }
 else
 {
 v45 = v45;
 if (armg_calculate_condition(5, v32, v60, v61))
 goto LABEL_401ed9;
LABEL_401eda:
 if (armg_calculate_condition(21, v32, v60, v61))
 goto LABEL_401edd;
LABEL_401ede:
 }
 }
 v62 = v32 - 1;
 vvar_286 = (char)(32 - v35);
 v63 = v35;
 if (32 >= v35)
 {
 v64 = v55 << (vvar_286 & 31) & vvar_286 - 32 >> 31;
 v45 += armg_calculate_flag_c(1, v47, v55 >> ((char)v35 & 31) & (v35 & 255) - 32 >> 31, 0);
 v65 = v47 + (v55 >> ((char)v35 & 31) & (v35 & 255) - 32 >> 31) + (v53 << (vvar_286 & 31) & vvar_286 - 32 >> 31);
 if ((v35 & 255) < 32)
 {
 v66 = v45 + (v53 >> (char)v35) + armg_calculate_flag_c(2, 32, v63, 0);
 v67 = v53 >> (char)v35;
 v68 = armg_calculate_flag_c(2, 32, v63, 0);
 }
 else
 {
 v66 = v45 + (v53 >> 31) + armg_calculate_flag_c(2, 32, v63, 0);
 v67 = v53 >> 31;
 v68 = armg_calculate_flag_c(2, 32, v63, 0);
 }
 }
 else
 {
 v69 = v35 - 32;
 v64 = (1 <= v55 ? v53 << ((vvar_286 + 32) & 31) & vvar_286 - 0 >> 31 | 2 : v53 << ((vvar_286 + 32) & 31) & vvar_286 - 0 >> 31);
 v65 = v47 + (v53 >> (char)(v69 < 32 ? v69 : 31));
 v66 = v45 + (v53 >> 31) + armg_calculate_flag_c(1, v47, v53 >> (char)(v69 < 32 ? v69 : 31), 0);
 v67 = v53 >> 31;
 v68 = armg_calculate_flag_c(1, v47, v53 >> (char)(v69 < 32 ? v69 : 31), 0);
 }
 v70 = v66;
 v71 = v64;
 v72 = v65;
 if (!((char)armg_calculate_condition(83, v45, v67, v68)))
 {
 v70 = -(v66) - ((v64 <= 0 ? v65 <= 0 : v65 < 0) ^ 1);
 v71 = -(v64);
 v72 = -(v65) - (v64 > 0);
 }
 v91 = v70;
 v76 = v91;
 if (v91 >= 0x100000)
 {
 v77 = 2;
 v78 = 0x200000;
 v79 = 0;
 v80 = v71;
 v81 = v72;
 if (v91 >= 0x200000)
 {
 v80 = (v72 & 1) * 0x80000000 | v71 >> 1;
 v91 = (v62 + 1) * 0x200000;
 v77 = 1;
 v78 = &g_400000;
 v79 = 0;
 v81 = (v91 & 1) * 0x80000000 | v72 >> 1;
 if ((char)armg_calculate_condition(33, v91, &g_400000, 0))
 return 0;
 }
 }
 else
 {
 v83 = v71 * 2;
 v84 = v72 * 2 + (v71 >> 31 & 1);
 flag3 = v91 * 2 + armg_calculate_flag_c(3, v72, v72, v71 >> 31 & 1);
 v86 = v62 - 1;
 if (1 <= v62)
 {
 v77 = 2;
 v91 = (armg_calculate_condition(34, v76, 0x100000, 0) ? flag3 : v76);
 v78 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0x100000 : 0x100000);
 v79 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0 : 0);
 v80 = v83;
 v81 = v84;
 if (!((char)armg_calculate_condition(34, v91, v78, v79)))
 goto LABEL_401e1c;
 }
 else
 {
 v77 = 2;
 v91 = (armg_calculate_condition(34, v76, 0x100000, 0) ? flag3 : v76);
 v78 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0x100000 : 0x100000);
 v79 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0 : 0);
 v80 = v83;
 v81 = v84;
 if (!((char)armg_calculate_condition(34, v91, v78, v79)))
 {
LABEL_401e1c:
 v92 = armg_calculate_flag_c(2, v91, v78, v79);
 v93 = armg_calculate_flag_v(2, v91, v78, v79);
 if (!flag3)
 {
 flag2 = v84;
 if (!armg_calculate_condition(5, flag3, v92, v93))
 goto LABEL_401e26;
LABEL_401e25:
 v84 = 0;
 }
 else
 {
 flag2 = flag3;
 if (armg_calculate_condition(5, flag3, v92, v93))
 goto LABEL_401e25;
LABEL_401e26:
 }
 if (!flag2)
 {
 v95 = 32;
 if (!armg_calculate_condition(5, flag3, v92, v93))
 goto LABEL_401e2e;
LABEL_401e2d:
 v95 += 32;
 }
 else
 {
 v95 = Clz(flag2);
 if (armg_calculate_condition(5, flag3, v92, v93))
 goto LABEL_401e2d;
LABEL_401e2e:
 }
 v96 = v95 - 11;
 v97 = v96 - 32;
 v98 = 2;
 v99 = 32;
 v100 = v96;
 v101 = v97;
 if (32 > v100)
 {
 v102 = v97 + 12;
 v98 = 1;
 v99 = 12;
 if (!((char)armg_calculate_condition(209, v97, 12, 0)))
 {
 v103 = flag2 << ((char)v102 + 20 & 31) & (char)v102 - 12 >> 31;
 v104 = flag2 >> ((char)(12 - v102) & 31) & (12 - v102 & 255) - 32 >> 31;
 goto LABEL_401e6c;
 }
 else
 {
 v100 = v97;
 v101 = v102 + 20;
 }
 }
 v104 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 | v84 >> ((char)(armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v83) & 31) & ((armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v83) & 255) - 32 >> 31 : flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31);
 v103 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? v84 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 : v84);
LABEL_401e6c:
 if (v96 <= v86)
 {
 v106 = v104 + (v86 - v96) * 0x100000;
 if (!armg_calculate_condition(162, v86, v96, 0))
 goto LABEL_401e76;
LABEL_401e75:
 v106 |= v66 & 0x80000000;
 if (!((char)armg_calculate_condition(162, v86, v96, 0)))
 goto LABEL_401e7c;
 return v103;
 }
 else
 {
 v106 = v104;
 if (armg_calculate_condition(162, v86, v96, 0))
 goto LABEL_401e75;
LABEL_401e76:
 if (!((char)armg_calculate_condition(162, v86, v96, 0)))
 goto LABEL_401e7c;
 return v103;
 }
LABEL_401e7c:
 v107 = ~(v0);
 v108 = v107 - 31;
 if (31 <= v107)
 {
 return v106 >> ((char)v108 & 31) & (v108 & 255) - 32 >> 31;
 }
 else if (!((char)armg_calculate_condition(193, v108, 12, 0)))
 {
 v109 = (char)v108 + 32;
 return v103 >> (v109 & 31) & v109 - 32 >> 31 | v106 << ((char)(32 - v109) & 31) & (32 - v109 & 255) - 32 >> 31;
 }
 else
 {
 return v103 >> ((char)(32 - (12 - (v108 + 12))) & 31) & (32 - (12 - (v108 + 12)) & 255) - 32 >> 31 | v106 << ((char)(12 - (v108 + 12)) & 31) & (12 - (v108 + 12) & 255) - 32 >> 31;
 }
 }
 }
 }
 if (v80 == 0x80000000)
 {
 v87 = (armg_calculate_condition(v77, v91, v78, v79) ? 5 : v77);
 v88 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 >> 1 : v91);
 v89 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 & 1 : v78);
 v90 = (armg_calculate_condition(v77, v91, v78, v79) ? armg_calculate_flag_v(v77, v91, v78, v79) : v79);
 }
 else
 {
 v87 = (armg_calculate_condition(v77, v91, v78, v79) ? 5 : v77);
 v88 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 >> 1 : v91);
 v89 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 & 1 : v78);
 v90 = (armg_calculate_condition(v77, v91, v78, v79) ? armg_calculate_flag_v(v77, v91, v78, v79) : v79);
 }
 return v81 + armg_calculate_flag_c(v87, v88, v89, v90);
 }
 else
 {
 if (~(v2 >> 21))
 {
 v110 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? 5 : v28);
 v111 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? ~(v4 >> 21) : v29);
 v112 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? v4 >> 20 & 1 : v30);
 v113 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? armg_calculate_flag_v(v28, v29, v30, v31) : v31);
 if ((char)armg_calculate_condition(v110, v111, v112, v113))
 goto LABEL_401f54;
 }
 else
 {
 v110 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? 5 : v28);
 v111 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? ~(v4 >> 21) : v29);
 v112 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? v4 >> 20 & 1 : v30);
 v113 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? armg_calculate_flag_v(v28, v29, v30, v31) : v31);
 if ((char)armg_calculate_condition(v110, v111, v112, v113))
 {
LABEL_401f54:
 return (armg_calculate_condition(21, ~(v2 >> 21), v2 >> 20 & 1, armg_calculate_flag_v(v110, v111, v112, v113)) ? a0 : v39);
 }
 }
 if (!(v2 ^ v4))
 {
 v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
 v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
 v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
 if ((char)armg_calculate_condition(5, v114, v115, v116))
 goto LABEL_401f0c;
 }
 else
 {
 v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
 v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
 v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
 if ((char)armg_calculate_condition(5, v114, v115, v116))
 {
LABEL_401f0c:
 v120 = v38 ^ v40;
 v121 = armg_calculate_flag_c(5, v114, v115, v116);
 v122 = armg_calculate_flag_v(5, v114, v115, v116);
 if ((v38 ^ v40))
 {
 v123 = 0;
 if (!armg_calculate_condition(21, v120, v121, v122))
 goto LABEL_401f16;
LABEL_401f15:
 a0 = 0;
 if (!((char)armg_calculate_condition(21, v120, v121, v122)))
 goto LABEL_401f1c;
 return 0;
 }
 else
 {
 v123 = v38;
 if (armg_calculate_condition(21, v120, v121, v122))
 goto LABEL_401f15;
LABEL_401f16:
 if (!((char)armg_calculate_condition(21, v120, v121, v122)))
 goto LABEL_401f1c;
 return a0;
 }
LABEL_401f1c:
 if (!v0 >> 21)
 return a0 * 2;
 if (armg_calculate_condition(49, v0, &g_400000, 0))
 {
 if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
 goto LABEL_401f40;
 return a0;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
 goto LABEL_401f40;
 return a0;
 }
LABEL_401f40:
 return 0;
 }
 }
 v117 = v2 | a0;
 v118 = armg_calculate_flag_c(5, v114, v115, v116);
 v119 = armg_calculate_flag_v(5, v114, v115, v116);
 if (!v2 && !a0)
 {
 if (!armg_calculate_condition(5, v117, v118, v119))
 return a0;
 }
 else
 {
 if (!armg_calculate_condition(5, v117, v118, v119))
 return a0;
 }
 return v39;
 }
}


// Function: __aeabi_ui2d at 0x401f80
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
LABEL_401f8c:
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
 goto LABEL_401f8c;
 }
 return a0;
 }
}


// Function: __floatsidf at 0x401fa4
// Placeholder implementation - converts integer to double
unsigned int __floatsidf(unsigned int a0, unsigned int a1)
{
 return a0;
}


// Function: __extendsfdf2 at 0x401fcc
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
 goto LABEL_401fe2;
LABEL_401fe1:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_401fe6;
LABEL_401fe5:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_401fec;
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
 goto LABEL_401fe1;
LABEL_401fe2:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_401fe5;
LABEL_401fe6:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_401fec;
 return v4;
 }
LABEL_401fec:
 if ((v3 & 16777215))
 goto LABEL_401ff4;
 return v4;
LABEL_401ff4:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_402000;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_402000;
 return v4;
 }
LABEL_402000:
 v2 = vvar_32;
 v1 = v44;
 v0 = v45;
}


// Function: __floatundidf at 0x402014
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
 goto LABEL_40201c;
 return a0;
LABEL_40201c:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_0x401dc0;
}



/* CRT stub function __floatdidf removed by preprocessor */



// Function: __fixdfsi at 0x402088
unsigned int __fixdfsi(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r2

 v0 = a1 * 2;
 if (!((char)armg_calculate_condition(33, v0, 0x200000, 0)))
 {
 if ((char)armg_calculate_condition(81, v0, 0x200000, 0))
 {
 return 0;
 }
 else if (4294966303 > v0 + 0x200000 >> 21)
 {
 if ((a1 & 0x80000000))
 return -((a1 * 0x800 | 0x80000000 | a0 >> 21) >> ((char)(4294966303 - (v0 + 0x200000 >> 21)) & 31) & (4294966303 - (v0 + 0x200000 >> 21) & 255) - 32 >> 31);
 return (a1 * 0x800 | 0x80000000 | a0 >> 21) >> ((char)(4294966303 - (v0 + 0x200000 >> 21)) & 31) & (4294966303 - (v0 + 0x200000 >> 21) & 255) - 32 >> 31;
 }
 }
 else
 {
 if (a0 || a1 * 0x1000)
 return 0;
 }
 if ((a1 & 0x80000000))
 return a1 & 0x80000000;
 return 2147483647;
}



/* CRT stub function _fini removed by preprocessor */


