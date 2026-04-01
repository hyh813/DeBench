/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_gcc_O3_g
 * Processor: pc
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <emmintrin.h>

// Type definitions
typedef int (*func_ptr_t)(int);

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} LargeData;

// Global variables (referenced but not defined in the decompiled code)
/* String constants referenced in code */
static const char s[] = "Calling Convention Tests";
static const char asc_2130[] = "Parameter Passing Tests";
static const char asc_22AC[] = "Return Value Tests";
static const char aCallL206[] = "CALL-L2-01: %d\n";
static const char aCallL207[] = "CALL-L2-02: %d\n";
static const char aCallL208[] = "CALL-L2-03: %d\n";
static const char aCallL209[] = "CALL-L2-04: %d\n";
static const char aCallL210[] = "CALL-L2-05: %d\n";
static const char aCallL211[] = "CALL-L2-06: %d\n";

/* String constants for return value tests */
static const char aRetL101D[] = "RET-L1-01: %d\n";
static const char aRetL102D[] = "RET-L1-02: %d\n";
static const char aRetL103D[] = "RET-L1-03: %d\n";
static const char aRetL104D[] = "RET-L1-04: %d\n";
static const char aRetL201D[] = "RET-L2-01: %d\n";
static const char aRetL202D[] = "RET-L2-02: %d\n";
static const char aRetL301D[] = "RET-L3-01: %d\n";
static const char aRetL302D[] = "RET-L3-02: %d\n";
static const char aRetL303D[] = "RET-L3-03: %d\n";
extern int handle1_1;
extern int handle2_0;

/* Define the missing global variables */
int handle1_1 = 0;
int handle2_0 = 0;

/* SIMD data constants */
static const __m128i xmmword_23D0 = {0};
static const __m128i xmmword_23E0 = {0};
static const __m128i xmmword_23F0 = {0};
static const __m128i xmmword_2400 = {0};

/* External declarations for runtime functions */
extern void _gmon_start__(void);

/* JUMPOUT placeholder - used for indirect jumps that couldn't be decompiled */
#define JUMPOUT(addr) ((void)0)

/* Function: init_proc @ 0x1000 */
void init_proc(void)
{
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


/* Function: varargs_func.cold @ 0x10C0 */
void varargs_func_cold(int a1, long long a2, unsigned int *a3, long long a4, int a5)
{
 int v5; // eax
 unsigned int *v6; // rcx

 do
 {
 v6 = a3;
 ++v5;
 a3 += 2;
 a5 += *v6;
 }
 while ( a1 > v5 );
 JUMPOUT(0x14E0);
}


/* Function: param_varargs.cold @ 0x10DB */
void param_varargs_cold(int a1, long long a2, unsigned int *a3, long long a4, int a5)
{
 int v5; // eax
 unsigned int *v6; // rcx

 do
 {
 v6 = a3;
 ++v5;
 a3 += 2;
 a5 += *v6;
 }
 while ( a1 > v5 );
 JUMPOUT(0x1960);
}


/* Function: main @ 0x1100 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x1220 */
int func_a(int x)
{
 return x + 10;
}


/* Function: param_varargs_0 @ 0x1230 */
int param_varargs_0(int count, ...)
{
 int v1; // edx
 int v2; // ecx
 int v3; // esi
 int v4; // r8d

 return v4 + v2 + v3 + v1;
}


/* Function: varargs_func_0 @ 0x12A0 */
int varargs_func_0(int count, ...)
{
 va_list va; // kr00_24
 int v3; // [rsp+28h] [rbp-30h]
 int v4; // [rsp+30h] [rbp-28h]
 int v5; // [rsp+38h] [rbp-20h]
 int v6; // [rsp+40h] [rbp-18h]
 int v7; // [rsp+48h] [rbp-10h]

 va_start(va, count);
 v3 = va_arg(va, unsigned long long);
 v4 = va_arg(va, unsigned long long);
 v5 = va_arg(va, unsigned long long);
 v6 = va_arg(va, unsigned long long);
 v7 = va_arg(va, unsigned long long);
 va_end(va);
 return v7 + v6 + v5 + v3 + v4;
}


/* Function: func_b @ 0x1320 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x1330 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x1340 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1350 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x1360 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1370 */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x1380 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1390 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x13A0 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x13B0 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x13C0 */
int mips_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_mips @ 0x13D0 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x13E0 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1400 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1410 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x1420 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1430 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1440 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1450 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1460 */
void varargs_func(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, int a7, int a8)
{
 unsigned int v8; // edx
 int v9; // eax
 int v10; // r8d
 int v11; // r8d
 unsigned int v12[2]; // [rsp+20h] [rbp-38h]
 long long v13; // [rsp+28h] [rbp-30h]
 long long v14; // [rsp+30h] [rbp-28h]
 long long v15; // [rsp+38h] [rbp-20h]
 long long v16; // [rsp+40h] [rbp-18h]
 long long v17; // [rsp+48h] [rbp-10h]

 v13 = a2;
 v14 = a3;
 v15 = a4;
 v16 = a5;
 v17 = a6;
 if ( a1 > 0 )
 {
 v8 = 8;
 v9 = 0;
 v10 = 0;
 while ( v8 <= 0x2F )
 {
 a2 = v8;
 ++v9;
 v8 += 8;
 v10 += v12[a2 >> 3];
 if ( a1 == v9 )
 return;
 }
 v11 = a7 + v10;
 if ( a1 != v9 + 1 )
 {
 varargs_func_cold(a1, a2, v12, v11, a8);
 }
 }
}


/* Function: func_no_args @ 0x1530 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1540 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + e + d + c + b + a + f;
}


/* Function: func_mixed_args @ 0x1560 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 double v4; // xmm1_8
 int v5; // ebp
 int v6; // ebx

 v4 = d;
 v5 = ll;
 v6 = x;
 if ( s )
 {
 v4 = d;
 v6 = strlen(s) + x;
 }
 return (unsigned int)(int)((double)v6 + v4 + (double)v5);
}


/* Function: func_struct_byval @ 0x15C0 */
int func_struct_byval(LargeStruct s)
{
 __m128i v1; // xmm0

 v1 = _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(_mm_loadu_si128((const __m128i *)&s), _mm_loadu_si128((const __m128i *)&s.data[2])),
 _mm_loadu_si128((const __m128i *)&s.data[4])),
 _mm_loadu_si128((const __m128i *)&s.data[6])),
 _mm_loadu_si128((const __m128i *)&s.data[8])),
 _mm_loadu_si128((const __m128i *)&s.data[10])),
 _mm_loadu_si128((const __m128i *)&s.data[12])),
 _mm_loadu_si128((const __m128i *)&s.data[14]));
{
    __m128i v2 = _mm_add_epi64(v1, _mm_srli_si128(v1, 8));
    return _mm_cvtsi128_si64(v2);
}
}


/* Function: func_struct_byptr @ 0x1630 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x1650 */
void test_calling_conventions()
{
 unsigned int v0; // eax

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
 v0 = varargs_func_0(5, 1, 2, 3, 4, 5);
 __printf_chk(1, aCallL206, v0);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 __printf_chk(1, aCallL209, 117);
 __printf_chk(1, aCallL210, 136);
 __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1810 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1820 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x1830 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1840 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x1850 */
int param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x1860 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1870 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x1880 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1890 */
int param_ptr_array(char **arr, int n)
{
 char **v2; // rcx
 int result; // eax
 char *v4; // rdx

 if ( n <= 0 )
 return 0;
 v2 = &arr[(unsigned int)(n - 1) + 1];
 result = 0;
 do
 {
 v4 = *arr++;
 result += *v4;
 }
 while ( v2 != arr );
 return result;
}


/* Function: call_ptr_array @ 0x18D0 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x18E0 */
void param_varargs(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, int a7, int a8)
{
 unsigned int v8; // edx
 int v9; // eax
 int v10; // r8d
 int v11; // r8d
 unsigned char v12[8]; // [rsp+20h] [rbp-38h]
 long long v13; // [rsp+28h] [rbp-30h]
 long long v14; // [rsp+30h] [rbp-28h]
 long long v15; // [rsp+38h] [rbp-20h]
 long long v16; // [rsp+40h] [rbp-18h]
 long long v17; // [rsp+48h] [rbp-10h]

 v13 = a2;
 v14 = a3;
 v15 = a4;
 v16 = a5;
 v17 = a6;
 if ( a1 > 0 )
 {
 v8 = 8;
 v9 = 0;
 v10 = 0;
 while ( v8 <= 0x2F )
 {
 a2 = v8;
 ++v9;
 v8 += 8;
 v10 += (unsigned int)v12[a2];
 if ( a1 == v9 )
 return;
 }
 v11 = a7 + v10;
 if ( a1 != v9 + 1 )
 {
 param_varargs_cold(a1, a2, (unsigned int *)v12, v11, a8);
 }
 }
}


/* Function: call_varargs_param @ 0x19B0 */
int call_varargs_param()
{
 return param_varargs_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x19E0 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1A00 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1A10 */
int param_double_ptr(int **pp, int new_val)
{
 int result; // eax

 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 result = 1;
 *pp = 0;
 return result;
}


/* Function: call_double_ptr @ 0x1A40 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1A50 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1A80 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1A90 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1AA0 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1AB0 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1AC0 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1AD0 */
void test_parameter_passing()
{
 int v0; // eax

 puts(asc_2130);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = param_varargs_0(4, 10, 20, 30, 40);
 __printf_chk(1, "PARAM-L2-04: %d\n", v0);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", 15);
 __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1C10 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1C20 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1C30 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1C40 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1C50 */
SmallPoint ret_small_struct(int x, int y)
{
 __m128i tmp = _mm_unpacklo_epi32(_mm_cvtsi32_si128(x), _mm_cvtsi32_si128(y));
 SmallPoint result;
 memcpy(&result, &tmp, sizeof(SmallPoint));
 return result;
}


/* Function: call_ret_small_struct @ 0x1C70 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1C80 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // rax
 __m128i v3; // xmm0
 __m128i v4; // xmm5
 __m128i v5; // xmm6

 result = retstr;
 v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(seed), 0);
 v4 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&xmmword_23E0), v3);
 v5 = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&xmmword_23F0), v3);
 *(__m128i *)retstr->data = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&xmmword_23D0), v3);
 *(__m128i *)&retstr->data[4] = v4;
 *(__m128i *)&retstr->data[8] = v5;
 *(__m128i *)&retstr->data[12] = _mm_add_epi32(v3, _mm_loadu_si128((const __m128i *)&xmmword_2400));
 return result;
}


/* Function: call_ret_large_struct @ 0x1D00 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: ret_func_ptr @ 0x1D10 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = (func_ptr_t)func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1D30 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1D40 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &handle1_1;
 if ( type )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1D60 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1D70 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax
 int v4; // edx

 result = 2 * z;
 v4 = z + 10;
 if ( x <= y )
 return v4;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1D80 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1D90 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 2 )
 return 2 * (5 * op + 5);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1DB0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1DC0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1DD0 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1DE0 */
void test_return_values()
{
 puts(asc_22AC);
 __printf_chk(1, aRetL101D, 42);
 __printf_chk(1, aRetL102D, 20);
 __printf_chk(1, aRetL103D, 7);
 __printf_chk(1, aRetL104D, 215);
 __printf_chk(1, aRetL201D, 10);
 __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
 __printf_chk(1, aRetL301D, 40);
 __printf_chk(1, aRetL302D, 60);
 __printf_chk(1, aRetL303D, 21);
}


/* Function: .term_proc @ 0x1ED4 */
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

/* Total functions decompiled: 86, failed: 7 */
