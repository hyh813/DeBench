/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_gcc_O1_no_g
 * Processor: pc
 */

#include <stdarg.h>
#include <emmintrin.h>
#include <immintrin.h>
#include <string.h>

/* External symbols */
extern int _gmon_start__(void);
extern int handle1_1;
extern int handle2_0;
extern char s[];

/* Format strings */
extern char aCallL206[];
extern char aCallL207[];
extern char aCallL208[];
extern char aCallL209[];
extern char aCallL210[];
extern char aCallL211[];
extern char asc_2130[];
extern char asc_22BD[];
extern char aRetL101D[];
extern char aRetL102D[];
extern char aRetL103D[];
extern char aRetL104D[];
extern char aRetL201D[];
extern char aRetL202D[];
extern char aRetL301D[];
extern char aRetL302D[];
extern char aRetL303D[];

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: callback_func @ 0x11A9 */
long long callback_func(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: func_a @ 0x11B1 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x11B9 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x11C1 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x11C9 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x11D3 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x11DD */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x11E7 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x11F1 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x11FB */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1205 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_arm_aapcs @ 0x1214 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x121E */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_mips @ 0x122A */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1234 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: call_amd64_sysv @ 0x1246 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1250 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x125F */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1269 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1275 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x127F */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1289 */
long long varargs_func(
 int a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8,
 double a9,
 ...)
{
 int v9; // ecx
 unsigned int v10; // esi
 long long *v11; // rdx
 unsigned long long v12; // kr00_8
 va_list va; // [rsp+0h] [rbp-58h] BYREF

 va_start(va, a9);
 if ( a1 <= 0 )
 {
 return 0;
 }
 else
 {
 v9 = 0;
 v10 = 0;
 do
 {
 v12 = va_arg(va, unsigned long long);
 v10 += (unsigned int)v12;
 ++v9;
 }
 while ( a1 != v9 );
 }
 return v10;
}


/* Function: func_no_args @ 0x1335 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x133F */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a8 + a7 + a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: func_mixed_args @ 0x1359 */
long long func_mixed_args(int a1, const char *a2, int a3, double a4)
{
 int v5; // eax

 v5 = 0;
 if ( a2 )
 v5 = strlen(a2);
 return (unsigned int)(int)((double)(a1 + v5) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0x13A6 */
long long func_struct_byval(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 char a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16,
 int a17,
 int a18,
 int a19,
 int a20,
 int a21,
 int a22,
 char a23)
{
 char *v23; // rdx
 long long result; // rax

 v23 = &a7;
 result = 0;
 do
 {
 result += *(unsigned long long *)v23;
 v23 += 8;
 }
 while ( v23 != &a23 );
 return result;
}


/* Function: func_struct_byptr @ 0x13C9 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(a1[1] * *a1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x13DF */
unsigned long long test_calling_conventions(
 double a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8)
{
 double v8; // xmm4_8
 double v9; // xmm5_8
 unsigned int v10; // eax
 unsigned int v11; // eax
 long long i; // rax
 unsigned char *v13; // rax
 long long v14; // rdx
 long long v16[17]; // [rsp+0h] [rbp-120h]
 unsigned long long v27; // canary
 double v17; // [rsp+0h]
 double v18; // [rsp+10h]
 double v19; // [rsp+20h]
 double v20; // [rsp+30h]
 double v21; // [rsp+40h]
 double v22; // [rsp+50h]
 double v23; // [rsp+60h]
 double v24; // [rsp+70h]
 unsigned char v25[128]; // [rsp+80h]
 unsigned char *v26; // [rsp+88h]

 v27 = __readfsqword(0x28u);
 puts(s);
 __printf_chk(1, "CALL-L1-01: %d\n", 15);
 __printf_chk(1, "CALL-L1-02: %d\n", 50);
 __printf_chk(1, "CALL-L1-03: %d\n", 6);
 __printf_chk(1, "CALL-L1-04: %d\n", 15);
 __printf_chk(1, "CALL-L1-05: %d\n", 15);
 __printf_chk(1, "CALL-L1-06: %d\n", 100);
 __printf_chk(1, "CALL-L1-07: %d\n", 21);
 __printf_chk(1, "CALL-L1-08: %d\n", 15);
 __printf_chk(1, "CALL-L1-09: %d\n", 10);
 __printf_chk(1, "CALL-L1-10: %d\n", 33);
 v10 = varargs_func(5, a1, a2, a3, a4, v8, v9, a7, a8, 1, 2, 3, 4, 5);
 __printf_chk(1, aCallL206, v10);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 v11 = func_mixed_args(10, "test", 100, 3.14);
 __printf_chk(1, aCallL209, v11);
 for ( i = 0; i < 16; ++i )
  {
    v16[i] = (long long)(i + 1);
  }
 memcpy(v25, v16, 16);
 memcpy(v25 + 16, &v18, 16);
 memcpy(v25 + 32, &v19, 16);
 memcpy(v25 + 48, &v20, 16);
 memcpy(v25 + 64, &v21, 16);
 memcpy(v25 + 80, &v22, 16);
 memcpy(v25 + 96, &v23, 16);
 memcpy(v25 + 112, &v24, 16);
 v13 = v25;
 v26 = v25 + 128;
 v14 = 0;
 do
 {
 v14 += *(unsigned long long *)v13;
 v13 += 8;
 }
 while ( v26 != v13 );
 __printf_chk(1, aCallL210, v14, v26);
 __printf_chk(1, aCallL211, 50);
 return v27 - __readfsqword(0x28u);
}


/* Function: param_by_value_int @ 0x16BA */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x16C2 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16CC */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16D8 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16E2 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x16EC */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x16F6 */
long long param_string(char *a1)
{
 return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x1704 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x170E */
long long param_ptr_array(char **a1, int a2)
{
 unsigned int v4; // edx
 int i; // loop counter

 if ( a2 <= 0 )
 {
 return 0;
 }
 else
 {
 v4 = 0;
 for (i = 0; i < a2; i++)
 {
 v4 += strlen(a1[i]);
 }
 }
 return v4;
}


/* Function: call_ptr_array @ 0x1741 */
long long call_ptr_array()
{
 char *v1[4]; // local array for string storage

 v1[0] = "abc";
 v1[1] = "def";
 v1[2] = "ghi";
 return param_ptr_array(v1, 3);
}


/* Function: param_varargs @ 0x17A3 */
long long param_varargs(
 int a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8,
 double a9,
 ...)
{
 int v9; // ecx
 unsigned int v10; // esi
 unsigned long long v12; // kr00_8
 va_list va; // [rsp+0h] [rbp-58h] BYREF

 va_start(va, a9);
 if ( a1 <= 0 )
 {
 return 0;
 }
 else
 {
 v9 = 0;
 v10 = 0;
 do
 {
 v12 = va_arg(va, unsigned long long);
 v10 += (unsigned int)v12;
 ++v9;
 }
 while ( a1 != v9 );
 }
 return v10;
}


/* Function: call_varargs_param @ 0x184F */
long long call_varargs_param(
 double a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8)
{
 return param_varargs(4, a1, a2, a3, a4, a5, a6, a7, a8, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1880 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1897 */
long long call_func_ptr_param()
{
 return param_func_ptr((unsigned int ( *)(unsigned long long))callback_func, 5u);
}


/* Function: param_double_ptr @ 0x18B5 */
long long param_double_ptr(unsigned long long *a1, int a2)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 if ( !*a1 )
 return 0xFFFFFFFFLL;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x18E1 */
long long call_double_ptr()
{
 unsigned long long v2; // [rsp+10h] [rbp-18h]
 unsigned long long v2_val; // value storage
 int v1; // [rsp+Ch] [rbp-1Ch] BYREF

 v2_val = __readfsqword(0x28u);
 v2 = v2_val;
 v1 = 10;
 param_double_ptr(&v2, 20);
 return (unsigned int)v1 + (unsigned int)(v1 == 0);
}


/* Function: param_complex_cast @ 0x1944 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1960 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x196A */
long long param_struct_byval(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 long long a14)
{
 return (unsigned int)(a7 + (a14 >> 32));
}


/* Function: call_struct_byval @ 0x1977 */
long long call_struct_byval(double a1)
{
 unsigned int i; // rax
 unsigned int v2[16]; // [rsp+0h] [rbp-58h]
 unsigned long long v3; // [rsp+48h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 (void)a1;
 for ( i = 0; i < 16; ++i )
 v2[i] = i;
 return (unsigned int)(v2[15] + v2[0]);
}


/* Function: param_order_dep @ 0x19BD */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x19C5 */
long long call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x19CF */
double test_parameter_passing(
 double a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8)
{
 int v8; // eax
 int v9; // eax
 double v10; // xmm0_8
 double v11; // xmm4_8
 double v12; // xmm5_8
 int v13; // eax
 double v14; // xmm0_8
 int v15; // eax
 double v16; // xmm0_8
 int v17; // eax
 double v18; // xmm0_8
 int v19; // eax
 double v20; // xmm0_8
 int v21; // eax

 puts(asc_2130);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 v8 = call_by_value_ptr();
 __printf_chk(1, "PARAM-L1-02: %d\n", v8);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v9 = call_ptr_array();
 v10 = __printf_chk(1, "PARAM-L2-03: %d\n", v9);
 v13 = call_varargs_param(a1, a2, a3, a4, a5, a6, a7, a8);
 v14 = __printf_chk(1, "PARAM-L2-04: %d\n", v13);
 v15 = call_func_ptr_param(v14);
 v16 = __printf_chk(1, "PARAM-L3-01: %d\n", v15);
 v17 = call_double_ptr(v16);
 v18 = __printf_chk(1, "PARAM-L3-02: %d\n", v17);
 v19 = call_complex_cast(v18);
 v20 = __printf_chk(1, "PARAM-L3-03: %d\n", v19);
 v21 = call_struct_byval(v20);
 __printf_chk(1, "PARAM-L3-04: %d\n", v21);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1B42 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1B4A */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1B54 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1B5D */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1B67 */
long long ret_small_struct(unsigned int a1, long long a2)
{
 return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x1B75 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1B7F */
__m128i * ret_large_struct(__m128i *a1, int a2)
{
 __m128i *result; // rax
 int *v3; // rdx
 int v4[4]; // [rsp+0h] [rbp-58h] BYREF
 int v5[4]; // [rsp+10h] [rbp-48h] BYREF
 int v6[4]; // [rsp+20h] [rbp-38h] BYREF
 int v7[4]; // [rsp+30h] [rbp-28h] BYREF
 char v8; // [rsp+40h] [rbp-18h] BYREF
 unsigned long long v9; // [rsp+48h] [rbp-10h]

 result = a1;
 v9 = __readfsqword(0x28u);
 v3 = v4;
 do
 {
 *v3++ = a2++;
 }
 while ( v3 != &v8[1] );
 *a1 = _mm_load_si128((const __m128i *)v4);
 a1[1] = _mm_load_si128((const __m128i *)v5);
 a1[2] = _mm_load_si128((const __m128i *)v6);
 a1[3] = _mm_load_si128((const __m128i *)v7);
 return result;
}


/* Function: call_ret_large_struct @ 0x1BF0 */
long long call_ret_large_struct()
{
 __m128i v1[4]; // [rsp+0h] [rbp-58h] BYREF
 unsigned int v2; // [rsp+3Ch] [rbp-1Ch]
 unsigned long long v3; // [rsp+48h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 ret_large_struct(v1, 100);
 return (unsigned int)(_mm_cvtsi128_si32(v1[0]) + _mm_cvtsi128_si32(v1[1]));
}


/* Function: ret_func_ptr @ 0x1C36 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 long long ( *result)(int); // rax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1C4F */
long long call_ret_func_ptr()
{
 return func_b(5);
}


/* Function: ret_opaque_handle @ 0x1C5E */
int * ret_opaque_handle(int a1)
{
 int *result; // rax

 result = &handle1_1;
 if ( a1 )
 return (int *)&handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1C77 */
long long call_ret_opaque()
{
 return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1C82 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 long long result; // rax
 unsigned int v4; // edx

 result = (unsigned int)(2 * a3);
 v4 = a3 + 10;
 if ( a1 <= a2 )
 return v4;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C92 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C9C */
long long ret_multi_branch(int a1)
{
 long long result; // rax

 result = 20;
 if ( a1 != 1 )
 {
 result = 30;
 if ( a1 != 2 )
 return a1 == 0 ? 10 : -1;
 }
 return result;
}


/* Function: call_ret_multi_branch @ 0x1CC0 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1CCA */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1CD4 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1CDE */
double test_return_values()
{
 double v0; // xmm0_8
 unsigned int v1; // eax
 double v2; // xmm0_8
 unsigned int v3; // eax
 double v4; // xmm0_8
 unsigned int v5; // eax
 double v6; // xmm0_8
 unsigned int v7; // eax
 double v8; // xmm0_8
 double v9; // xmm0_8
 double v10; // xmm0_8
 double v11; // xmm0_8

 puts(asc_22BD);
 v0 = __printf_chk(1, aRetL101D, 42);
 v1 = call_ret_pointer(v0);
 v2 = __printf_chk(1, aRetL102D, v1);
 v3 = call_ret_small_struct(v2);
 v4 = __printf_chk(1, aRetL103D, v3);
 v5 = call_ret_large_struct(v4);
 v6 = __printf_chk(1, aRetL104D, v5);
 v7 = call_ret_func_ptr(v6);
 v8 = __printf_chk(1, aRetL201D, v7);
 v9 = __printf_chk(1, aRetL202D, (unsigned int)handle1_1, v8);
 v10 = __printf_chk(1, aRetL301D, 40, v9);
 v11 = __printf_chk(1, aRetL302D, 60, v10);
 return __printf_chk(1, aRetL303D, 21, v11);
}


/* Function: main @ 0x1E07 */
int main(int argc, const char **argv, const char **envp)
{
 double v3; // xmm0_8
 double v4; // xmm1_8
 double v5; // xmm2_8
 double v6; // xmm3_8
 double v7; // xmm4_8
 double v8; // xmm5_8
 double v9; // xmm6_8
 double v10; // xmm7_8
 double v11; // xmm4_8
 double v12; // xmm5_8

 test_calling_conventions(v3, v4, v5, v6, v7, v8, v9, v10);
 test_parameter_passing(v3, v4, v5, v6, v11, v12, v9, v10);
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1E38 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4028 */

/* FAILED to decompile: puts @ 0x4030 */

/* FAILED to decompile: strlen @ 0x4038 */

/* FAILED to decompile: __stack_chk_fail @ 0x4040 */

/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4050 */

/* FAILED to decompile: __gmon_start__ @ 0x4060 */

/* Total functions decompiled: 83, failed: 7 */
