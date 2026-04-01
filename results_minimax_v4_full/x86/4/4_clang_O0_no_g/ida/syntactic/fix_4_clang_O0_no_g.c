/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_clang_O0_no_g
 * Processor: pc
 */

/* String constants for printf format strings */
const char *asc_3008 = "Testing calling conventions\n";
const char *asc_32B0 = "Testing return values\n";
const char *aCallL206 = "VARARGS: %d, %lld, %lld\n";
const char *aCallL207 = "NOARGS: %d\n";
const char *aCallL208 = "MANYARGS: %d\n";
const char *aCallL209 = "MIXEDARGS: %d\n";
const char *aCallL210 = "RET-SMALL-STRUCT: %d\n";
const char *aCallL211 = "RET-LARGE-STRUCT: %d\n";
const char *asc_31D3 = "Testing parameter passing\n";
const char *aRetL101D = "RET-BASIC: %d\n";
const char *aRetL102D = "RET-POINTER: %d\n";
const char *aRetL103D = "RET-SMALL-STRUCT: %d\n";
const char *aRetL104D = "RET-LARGE-STRUCT: %d\n";
const char *aRetL201D = "RET-FUNC-PTR: %d\n";
const char *aRetL202D = "RET-OPAQUE: %d\n";
const char *aRetL301D = "RET-COMPLEX: %d\n";
const char *aRetL302D = "RET-MULTI: %d\n";
const char *aRetL303D = "RET-VOID: %d\n";

/* External declarations for CRT functions */
void _gmon_start__(void);
void frame_dummy(void);
int _do_global_ctors_aux(void);

/* Forward declarations */
int callback_func(int a1);

/* Global data addresses */
int dword_64;
int dword_C8;
void *GLOBAL_OFFSET_TABLE_;
int ret_opaque_handle_handle1;
int ret_opaque_handle_handle2;

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 /* Inline assembly stub - was: jmp dword ptr [ebx+8] */
}


/* Function: sub_1080 @ 0x1080 */
int sub_1080(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10BC @ 0x10BC */
void sub_10BC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10C0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x11F9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x11FD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: cdecl_func @ 0x1210 */
int cdecl_func(int a1, int a2)
{
 return a2 + a1;
}


/* Function: call_cdecl @ 0x1230 */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x1260 */
int stdcall_func(int a1, int a2)
{
 return a2 * a1;
}


/* Function: call_stdcall @ 0x1280 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x12B0 */
int fastcall_func(int a1, int a2, int a3)
{
 return a3 + a2 + a1;
}


/* Function: call_fastcall @ 0x12D0 */
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1300 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1310 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a2 + a1;
}


/* Function: call_arm_aapcs @ 0x1340 */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1390 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a2 + a1;
}


/* Function: call_mips @ 0x13B0 */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x13F0 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a3 + a2 + a1;
}


/* Function: call_amd64_sysv @ 0x1420 */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1470 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a2 + a1;
}


/* Function: call_ms_x64 @ 0x14A0 */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x14F0 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a2 + a1;
}


/* Function: call_vectorcall @ 0x1510 */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x1550 */
int mixed_conventions_test()
{
 int v1; // [esp+10h] [ebp-8h]
 int v2; // [esp+10h] [ebp-8h]

 v1 = cdecl_func(1, 2);
 v2 = v1 + stdcall_func(3, 4);
 return v2 + fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x15E0 */
int varargs_func(int a1, char a2)
{
 char *v2; // eax
 int i; // [esp+0h] [ebp-Ch]
 int v5; // [esp+4h] [ebp-8h]
 char *v6; // [esp+8h] [ebp-4h]

 v5 = 0;
 v6 = &a2;
 for ( i = 0; i < a1; ++i )
 {
 v2 = v6;
 v6 += 4;
 v5 += *(unsigned int *)v2;
 }
 return v5;
}


/* Function: func_no_args @ 0x1640 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1650 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a8 + a7 + a6 + a5 + a4 + a3 + a2 + a1;
}


/* Function: func_mixed_args @ 0x1690 */
int func_mixed_args(int a1, const char *a2, double a3, long long a4)
{
 size_t v5; // [esp+Ch] [ebp-1Ch]

 if ( a2 )
 v5 = strlen(a2);
 else
 v5 = 0;
 return (int)((long double)(int)(v5 + a1) + a3 + (long double)a4);
}


/* Function: func_struct_byval @ 0x1730 */
int func_struct_byval(char a1)
{
 int i; // [esp+4h] [ebp-14h]
 long long v3; // [esp+8h] [ebp-10h]

 v3 = 0;
 for ( i = 0; i < 16; ++i )
 v3 += *((unsigned long long *)&a1 + i);
 return v3;
}


/* Function: func_struct_byptr @ 0x1790 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x17D0 */
int test_calling_conventions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // ecx
 unsigned long long v13[16]; // [esp+0h] [ebp-138h] BYREF
 int v14; // [esp+84h] [ebp-B4h]
 unsigned int v15[2]; // [esp+88h] [ebp-B0h] BYREF
 int v16; // [esp+90h] [ebp-A8h]
 int i; // [esp+94h] [ebp-A4h]
 unsigned int v18[32]; // [esp+98h] [ebp-A0h] BYREF
 int v19; // [esp+118h] [ebp-20h]
 const char *v20; // [esp+11Ch] [ebp-1Ch]
 int v21; // [esp+120h] [ebp-18h]
 int v22; // [esp+124h] [ebp-14h]
 int v23; // [esp+128h] [ebp-10h]

 printf(asc_3008);
 v0 = call_cdecl();
 printf("CALL-L1-01: %d\n", v0);
 v1 = call_stdcall();
 printf("CALL-L1-02: %d\n", v1);
 v2 = call_fastcall();
 printf("CALL-L1-03: %d\n", v2);
 v3 = call_thiscall();
 printf("CALL-L1-04: %d\n", v3);
 v4 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n", v4);
 v5 = call_mips();
 printf("CALL-L1-06: %d\n", v5);
 v6 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n", v6);
 v7 = call_ms_x64();
 printf("CALL-L1-08: %d\n", v7);
 v8 = call_vectorcall();
 printf("CALL-L1-09: %d\n", v8);
 v9 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n", v9);
 v23 = varargs_func(5, 1);
 printf(aCallL206, v23, 0x300000002LL, 0x500000004LL);
 v22 = func_no_args();
 printf(aCallL207, v22);
 v21 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, v21);
 v20 = "test";
 v19 = func_mixed_args(10, "test", 3.14, 100);
 printf(aCallL209, v19);
 for ( i = 0; i < 16; ++i )
 {
 v10 = i;
 v11 = (i + 1) >> 31;
 v18[2 * i] = i + 1;
 v18[2 * v10 + 1] = v11;
 }
 memcpy(v13, v18, sizeof(v13));
 v16 = func_struct_byval(v13[0]);
 printf(aCallL210, v16);
 v15[0] = 5;
 v15[1] = 10;
 v14 = func_struct_byptr(v15);
 return printf(aCallL211, v14);
}


/* Function: param_by_value_int @ 0x1B90 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x1BB0 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x1BF0 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1C20 */
int call_by_value_ptr()
{
 int v1; // [esp+8h] [ebp-10h]
 int v2; // [esp+10h] [ebp-8h] BYREF

 v2 = 5;
 v1 = param_by_value_ptr(&v2);
 return v1 + v2;
}


/* Function: param_array_decay @ 0x1C60 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x1C70 */
int call_array_decay()
{
 unsigned char s[44]; // [esp+1Ch] [ebp-2Ch] BYREF

 memset(s, 0, 0x28u);
 return param_array_decay();
}


/* Function: param_string @ 0x1CC0 */
int param_string(char *a1)
{
 return a1[1] + *a1;
}


/* Function: call_string_param @ 0x1CE0 */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1D10 */
int param_ptr_array(int a1, int a2)
{
 int i; // [esp+0h] [ebp-8h]
 int v4; // [esp+4h] [ebp-4h]

 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += **(char **)(a1 + 4 * i);
 return v4;
}


/* Function: call_ptr_array @ 0x1D60 */
int call_ptr_array()
{
 unsigned int v1[4]; // [esp+8h] [ebp-10h] BYREF

 v1[0] = "abc";
 v1[1] = "def";
 v1[2] = "ghi";
 return param_ptr_array((int)v1, 3);
}


/* Function: param_varargs @ 0x1DB0 */
int param_varargs(int a1, char a2)
{
 char *v2; // eax
 int i; // [esp+0h] [ebp-Ch]
 int v5; // [esp+4h] [ebp-8h]
 char *v6; // [esp+8h] [ebp-4h]

 v6 = &a2;
 v5 = 0;
 for ( i = 0; i < a1; ++i )
 {
 v2 = v6;
 v6 += 4;
 v5 += *(unsigned int *)v2;
 }
 return v5;
}


/* Function: call_varargs_param @ 0x1E10 */
int call_varargs_param()
{
 return param_varargs(4, 10);
}


/* Function: param_func_ptr @ 0x1E60 */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1E90 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: callback_func @ 0x1EC0 */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: param_double_ptr @ 0x1ED0 */
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 || !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1F20 */
int call_double_ptr()
{
 int *v1; // [esp+18h] [ebp-10h] BYREF
 int v2; // [esp+1Ch] [ebp-Ch] BYREF

 v2 = 10;
 v1 = &v2;
 param_double_ptr(&v1, 20);
 return (v1 == 0) + v2;
}


/* Function: param_complex_cast @ 0x1F80 */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return a1[1] + *a1;
 return -1;
}


/* Function: call_complex_cast @ 0x1FF0 */
int call_complex_cast()
{
 unsigned int v1[2]; // [esp+18h] [ebp-10h] BYREF
 int v2; // [esp+20h] [ebp-8h] BYREF

 v2 = 305419896;
 v1[0] = &dword_64;
 v1[1] = &dword_C8;
 param_complex_cast(v1, 1);
 return param_complex_cast(&v2, 0);
}


/* Function: param_struct_byval @ 0x2050 */
int param_struct_byval(
 int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16)
{
 return a16 + a1;
}


/* Function: call_struct_byval @ 0x2060 */
int call_struct_byval()
{
 int v1[17]; // [esp+0h] [ebp-98h] BYREF
 int i; // [esp+44h] [ebp-54h]
 unsigned int v3[20]; // [esp+48h] [ebp-50h] BYREF

 v1[16] = (int)&GLOBAL_OFFSET_TABLE_;
 for ( i = 0; i < 16; ++i )
 v3[i] = i;
 memcpy(v1, v3, 0x40u);
 return param_struct_byval(
 v1[0],
 v1[1],
 v1[2],
 v1[3],
 v1[4],
 v1[5],
 v1[6],
 v1[7],
 v1[8],
 v1[9],
 v1[10],
 v1[11],
 v1[12],
 v1[13],
 v1[14],
 v1[15]);
}


/* Function: param_order_dep @ 0x20D0 */
int param_order_dep(int a1, int a2)
{
 return a2 + a1;
}


/* Function: call_order_dep @ 0x20F0 */
int call_order_dep()
{
 return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x2130 */
int test_parameter_passing()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax

 printf(asc_31D3);
 v0 = call_by_value_int();
 printf("PARAM-L1-01: %d\n", v0);
 v1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n", v1);
 v2 = call_array_decay();
 printf("PARAM-L2-01: %d\n", v2);
 v3 = call_string_param();
 printf("PARAM-L2-02: %d\n", v3);
 v4 = call_ptr_array();
 printf("PARAM-L2-03: %d\n", v4);
 v5 = call_varargs_param();
 printf("PARAM-L2-04: %d\n", v5);
 v6 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n", v6);
 v7 = call_double_ptr();
 printf("PARAM-L3-02: %d\n", v7);
 v8 = call_complex_cast();
 printf("PARAM-L3-03: %d\n", v8);
 v9 = call_struct_byval();
 printf("PARAM-L3-04: %d\n", v9);
 v10 = call_order_dep();
 return printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x22A0 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x22B0 */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x22F0 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x2300 */
int call_ret_pointer()
{
 unsigned int v1[4]; // [esp+8h] [ebp-10h] BYREF

 v1[0] = 10;
 v1[1] = 20;
 v1[2] = 30;
 return *(unsigned int *)ret_pointer((int)v1);
}


/* Function: ret_small_struct @ 0x2350 */
unsigned int * ret_small_struct(unsigned int *a1, int a2, int a3)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x2370 */
int call_ret_small_struct()
{
 unsigned int v1[4]; // [esp+18h] [ebp-10h] BYREF

 ret_small_struct(v1, 3, 4);
 return v1[1] + v1[0];
}


/* Function: ret_large_struct @ 0x23B0 */
int ret_large_struct(int a1, int a2)
{
 int i; // [esp+8h] [ebp-4h]

 for ( i = 0; i < 16; ++i )
 *(unsigned int *)(a1 + 4 * i) = i + a2;
 return a1;
}


/* Function: call_ret_large_struct @ 0x2400 */
int call_ret_large_struct()
{
 unsigned int v1[18]; // [esp+10h] [ebp-48h] BYREF

 ret_large_struct((int)v1, 100);
 return v1[15] + v1[0];
}


/* Function: func_a @ 0x2440 */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x2450 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: ret_func_ptr @ 0x2460 */
int ( * ret_func_ptr(int a1))(int a1)
{
 int ( *result)(int); // eax

 result = func_a;
 if ( a1 )
 return func_b;
 return result;
}


/* Function: call_ret_func_ptr @ 0x2490 */
int call_ret_func_ptr()
{
 int ( *v1)(int); // [esp+10h] [ebp-8h]

 v1 = ret_func_ptr(1);
 return v1(5);
}


/* Function: ret_opaque_handle @ 0x24D0 */
void * ret_opaque_handle(int a1)
{
 void *result; // eax

 result = &ret_opaque_handle_handle2;
 if ( !a1 )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x2500 */
int call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x2530 */
int ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return a3 + 10;
 else
 return 2 * a3;
}


/* Function: call_ret_complex_expr @ 0x2570 */
int call_ret_complex_expr()
{
 int v1; // [esp+20h] [ebp-8h]

 v1 = ret_complex_expr(5, 3, 10);
 return ret_complex_expr(3, 5, 10) + v1;
}


/* Function: ret_multi_branch @ 0x25E0 */
int ret_multi_branch(int a1)
{
 switch ( a1 )
 {
 case 0:
 return 10;
 case 1:
 return 20;
 case 2:
 return 30;
 }
 return -1;
}


/* Function: call_ret_multi_branch @ 0x2660 */
int call_ret_multi_branch()
{
 int v1; // [esp+10h] [ebp-8h]
 int v2; // [esp+10h] [ebp-8h]

 v1 = ret_multi_branch(0);
 v2 = v1 + ret_multi_branch(1);
 return v2 + ret_multi_branch(2);
}


/* Function: ret_void @ 0x26D0 */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x26F0 */
int call_ret_void()
{
 int v1; // [esp+10h] [ebp-8h] BYREF

 ret_void(7, &v1);
 return v1;
}


/* Function: test_return_values @ 0x2720 */
int test_return_values()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax

 printf(asc_32B0);
 v0 = call_ret_basic();
 printf(aRetL101D, v0);
 v1 = call_ret_pointer();
 printf(aRetL102D, v1);
 v2 = call_ret_small_struct();
 printf(aRetL103D, v2);
 v3 = call_ret_large_struct();
 printf(aRetL104D, v3);
 v4 = call_ret_func_ptr();
 printf(aRetL201D, v4);
 v5 = call_ret_opaque();
 printf(aRetL202D, v5);
 v6 = call_ret_complex_expr();
 printf(aRetL301D, v6);
 v7 = call_ret_multi_branch();
 printf(aRetL302D, v7);
 v8 = call_ret_void();
 return printf(aRetL303D, v8);
}


/* Function: main @ 0x2850 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x28DC */
void term_proc()
{
 /* _do_global_dtors_aux was removed by preprocessor */
}


/* FAILED to decompile: __libc_start_main @ 0x6044 */

/* FAILED to decompile: printf @ 0x6048 */

/* FAILED to decompile: __cxa_finalize @ 0x604C */

/* FAILED to decompile: strlen @ 0x6050 */

/* FAILED to decompile: memset @ 0x6054 */

/* Total functions decompiled: 85, failed: 5 */
