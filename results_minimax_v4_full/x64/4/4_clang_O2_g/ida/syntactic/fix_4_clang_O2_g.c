/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_O2_g
 * Processor: pc
 */

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// IDA Pro jump table macro (placeholder)
#define JUMPOUT(addr) ((void(*)(void))0)()

// SIMD intrinsics
#ifdef _MSC_VER
#include <intrin.h>
#else
#include <immintrin.h>
#endif

// Type definitions for structures
typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

// Function pointer type
typedef int (*func_ptr_t)(int);

// External function declarations

/* CRT startup stub removed */


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 // Placeholder for jump to external code
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x1160 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x1170 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1180 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x1190 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x11A0 */
int fastcall_func(int a, int b, int c)
{
 return c + a + b;
}


/* Function: call_fastcall @ 0x11B0 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x11C0 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x11D0 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x11E0 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x11F0 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_mips @ 0x1200 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1210 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x1220 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1230 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_ms_x64 @ 0x1240 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1250 */
int vectorcall_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_vectorcall @ 0x1260 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1270 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1280 */
int varargs_func(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 unsigned int v6; // r9d
 int result; // eax
 unsigned int *v8; // r8
 unsigned int v9; // esi
 unsigned int *v10; // rcx
 unsigned int *overflow_arg_area; // rcx
 int v12; // eax
 va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v14[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v15; // [rsp+28h] [rbp-B0h]
 long long v16; // [rsp+30h] [rbp-A8h]
 long long v17; // [rsp+38h] [rbp-A0h]
 long long v18; // [rsp+40h] [rbp-98h]
 long long v19; // [rsp+48h] [rbp-90h]

 va_start(va, count);
 v3 = va_arg(va, unsigned long long);
 v1 = va_arg(va, unsigned long long);
 v2 = va_arg(va, unsigned long long);
 v4 = va_arg(va, unsigned long long);
 v5 = va_arg(va, unsigned long long);
 va_end(va);
 v15 = v3;
 v16 = v1;
 v17 = v2;
 v18 = v4;
 v19 = v5;
 va_copy(va, va);
 if ( count <= 0 )
 return 0;
 v6 = 8;
 if ( count == 1 )
 {
 result = 0;
 }
 else
 {
 v9 = count & 0xFFFFFFFE;
 result = 0;
 do
 {
 if ( v6 > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = &v14[v6];
 v6 += 8;
 }
 v12 = *overflow_arg_area + result;
 if ( v6 < 0x29 )
 {
 v10 = &v14[v6];
 v6 += 8;
 }
 else
 {
 v10 = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 result = *v10 + v12;
 v9 -= 2;
 }
 while ( v9 );
 }
 if ( (count & 1) != 0 )
 {
 if ( v6 >= 0x29 )
 v8 = va[0].overflow_arg_area;
 else
 v8 = &v14[v6];
 result += *v8;
 }
 return result;
}


/* Function: func_no_args @ 0x13B0 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x13C0 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x13E0 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 int v4; // ebx
 int v5; // eax

 v4 = ll;
 if ( s )
 v5 = strlen(s);
 else
 v5 = 0;
 return (unsigned int)(int)((double)v4 + (double)(x + v5) + d);
}


/* Function: func_struct_byval @ 0x1430 */
int func_struct_byval(LargeStruct s)
{
 __m128i v1; // xmm1

 v1 = _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(_mm_load_si128((const __m128i *)&s.data[2]), *(__m128i *)&s.data[10]),
 _mm_add_epi64(_mm_load_si128((const __m128i *)&s.data[6]), *(__m128i *)&s.data[14])),
 _mm_add_epi64(
 _mm_add_epi64(_mm_load_si128((const __m128i *)&s), *(__m128i *)&s.data[8]),
 _mm_add_epi64(_mm_load_si128((const __m128i *)&s.data[4]), *(__m128i *)&s.data[12])));
 return _mm_cvtsi128_si32(_mm_add_epi64(_mm_shuffle_epi32(v1, 238), v1));
}


/* Function: func_struct_byptr @ 0x1480 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


// Format strings for test_calling_conventions
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %d\n";
const char *aCallL211 = "CALL-L2-11: %d\n";

/* Function: test_calling_conventions @ 0x14A0 */
void test_calling_conventions()
{
 long long v0; // rax
 unsigned int v1; // eax
 long long v2; // [rsp-8h] [rbp-8h]

 v2 = v0;
 puts("test_calling_conventions");
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
 v1 = varargs_func(5, 1, 2, 3, 4, 5, v2);
 printf(aCallL206, v1);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 printf(aCallL210, 136);
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1610 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1620 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x1630 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1640 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x1650 */
long long param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x1660 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1670 */
int param_string(const char *str)
{
 return *str + str[1];
}


/* Function: call_string_param @ 0x1680 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1690 */
int param_ptr_array(char **arr, int n)
{
 long long v2; // r8
 long long v3; // rdx
 int result; // eax
 char **v5; // rdx
 long long v6; // rsi

 if ( n <= 0 )
 return 0;
 v2 = n & 3;
 if ( (unsigned long long)(unsigned int)n - 1 >= 3 )
 {
 v3 = 0;
 result = 0;
 do
 {
 result += *arr[v3] + *arr[v3 + 1] + *arr[v3 + 2] + *arr[v3 + 3];
 v3 += 4;
 }
 while ( (n & 0xFFFFFFFC) != v3 );
 }
 else
 {
 v3 = 0;
 result = 0;
 }
 if ( (n & 3) != 0 )
 {
 v5 = &arr[v3];
 v6 = 0;
 do
 result += *v5[v6++];
 while ( v2 != v6 );
 }
 return result;
}


/* Function: call_ptr_array @ 0x1720 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1730 */
int param_varargs(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 unsigned int v6; // r9d
 int result; // eax
 unsigned int *v8; // r8
 unsigned int v9; // esi
 unsigned int *v10; // rcx
 unsigned int *overflow_arg_area; // rcx
 int v12; // eax
 va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v14[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v15; // [rsp+28h] [rbp-B0h]
 long long v16; // [rsp+30h] [rbp-A8h]
 long long v17; // [rsp+38h] [rbp-A0h]
 long long v18; // [rsp+40h] [rbp-98h]
 long long v19; // [rsp+48h] [rbp-90h]

 va_start(va, count);
 v3 = va_arg(va, unsigned long long);
 v1 = va_arg(va, unsigned long long);
 v2 = va_arg(va, unsigned long long);
 v4 = va_arg(va, unsigned long long);
 v5 = va_arg(va, unsigned long long);
 va_end(va);
 v15 = v3;
 v16 = v1;
 v17 = v2;
 v18 = v4;
 v19 = v5;
 va_copy(va, va);
 if ( count <= 0 )
 return 0;
 v6 = 8;
 if ( count == 1 )
 {
 result = 0;
 }
 else
 {
 v9 = count & 0xFFFFFFFE;
 result = 0;
 do
 {
 if ( v6 > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = &v14[v6];
 v6 += 8;
 }
 v12 = *overflow_arg_area + result;
 if ( v6 < 0x29 )
 {
 v10 = &v14[v6];
 v6 += 8;
 }
 else
 {
 v10 = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 result = *v10 + v12;
 v9 -= 2;
 }
 while ( v9 );
 }
 if ( (count & 1) != 0 )
 {
 if ( v6 >= 0x29 )
 v8 = va[0].overflow_arg_area;
 else
 v8 = &v14[v6];
 result += *v8;
 }
 return result;
}


/* Function: call_varargs_param @ 0x1860 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1890 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x18A0 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x18B0 */
int param_double_ptr(int **pp, int new_val)
{
 int result; // eax

 result = -1;
 if ( pp )
 {
 if ( *pp )
 {
 **pp = new_val;
 *pp = 0;
 return 1;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x18E0 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x18F0 */
int param_complex_cast(void *p, int type)
{
 int result; // eax

 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 result = -1;
 if ( !type )
 return *(unsigned int *)p;
 return result;
}


/* Function: call_complex_cast @ 0x1910 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1920 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1930 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1940 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x1950 */
int call_order_dep()
{
 return 3;
}


// String constants for test_parameter_passing
const char *asc_23AB = "test_parameter_passing";

// String constants for test_return_values
const char *asc_23CC = "test_return_values";

// Format strings for test_return_values
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Function: test_parameter_passing @ 0x1660 */
void test_parameter_passing()
{
 long long v0;

 puts(asc_23AB);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v0 = param_varargs(4, 10, 20, 30, 40);
 printf("PARAM-L2-04: %d\n", v0);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x1A60 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x1A70 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1A80 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1A90 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1AA0 */
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 result.x = x;
 result.y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1AB0 */
int call_ret_small_struct()
{
 return 7;
}


// SIMD constants for ret_large_struct
static const __m128i xmmword_2010 = {0};
static const __m128i xmmword_2020 = {0};
static const __m128i xmmword_2030 = {0};


/* Function: call_ret_large_struct @ 0x1B10 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x1B20 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x1B30 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x1B40 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1B60 */
int call_ret_func_ptr()
{
 return 10;
}


// Opaque handles for ret_opaque_handle
int ret_opaque_handle_handle1 = 10;
int ret_opaque_handle_handle2 = 20;

/* Function: ret_opaque_handle @ 0x1B70 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &ret_opaque_handle_handle2;
 if ( !type )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1B90 */
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1BA0 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1BB0 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1BC0 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 3 )
 return 10 * op + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1BE0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1BF0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1C00 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1C10 */
void test_return_values()
{
 puts(asc_23CC);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
}


/* Function: main @ 0x1CD0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1CE4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4060 */

/* FAILED to decompile: puts @ 0x4068 */

/* FAILED to decompile: strlen @ 0x4070 */

/* FAILED to decompile: printf @ 0x4078 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4080 */

/* FAILED to decompile: __gmon_start__ @ 0x4090 */

/* Total functions decompiled: 78, failed: 6 */
