/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_Os_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdint.h>
#include <emmintrin.h>

typedef int (*func_ptr_t)(int);

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int data[32];
} BigStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} LargeData;

static int ret_opaque_handle_handle1 = 1;
static int ret_opaque_handle_handle2 = 2;

static const char *s = "=== CALLING CONVENTIONS TEST ===";
static const char *asc_23EB = "=== PARAMETER PASSING TEST ===";
static const char *asc_240C = "=== RETURN VALUES TEST ===";
static const char *aCallL206 = "CALL-L1-06: %d\n";
static const char *aCallL207 = "CALL-L2-01: %d\n";
static const char *aCallL208 = "CALL-L2-02: %d\n";
static const char *aCallL209 = "CALL-L2-03: %d\n";
static const char *aCallL210 = "CALL-L2-04: %d\n";
static const char *aCallL211 = "CALL-L2-05: %d\n";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";

static const __m128i xmmword_2010 = (__m128i)(__v2di){0LL, 0LL};
static const __m128i xmmword_2020 = (__m128i)(__v2di){0LL, 1LL};
static const __m128i xmmword_2030 = (__m128i)(__v4si){0, 0, 0, 0};
static const __m128i xmmword_2050 = (__m128i)(__v4si){0, 0, 0, 1};



#define JUMPOUT(x) do { __builtin_unreachable(); } while(0)




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x115C */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x1160 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1166 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x116C */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1172 */
int fastcall_func(int a, int b, int c)
{
 return c + a + b;
}


/* Function: call_fastcall @ 0x1178 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x117E */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1184 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x118F */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1195 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_mips @ 0x119D */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x11A3 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x11B1 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x11B7 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_ms_x64 @ 0x11C2 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x11C8 */
int vectorcall_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_vectorcall @ 0x11D0 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x11D6 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x11DC */
int varargs_func(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 int result; // eax
 unsigned int v7; // edx
 unsigned int *overflow_arg_area; // rsi
 va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v10[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v11; // [rsp+28h] [rbp-B0h]
 long long v12; // [rsp+30h] [rbp-A8h]
 long long v13; // [rsp+38h] [rbp-A0h]
 long long v14; // [rsp+40h] [rbp-98h]
 long long v15; // [rsp+48h] [rbp-90h]

 va_start(va, count);
 v3 = va_arg(va, unsigned long long);
 v1 = va_arg(va, unsigned long long);
 v2 = va_arg(va, unsigned long long);
 v4 = va_arg(va, unsigned long long);
 v5 = va_arg(va, unsigned long long);
 va_end(va);
 v11 = v3;
 v12 = v1;
 v13 = v2;
 v14 = v4;
 v15 = v5;
 va_copy(va, va);
 if ( count <= 0 )
 return 0;
 result = 0;
 v7 = 8;
 do
 {
 if ( v7 > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = &v10[v7];
 v7 += 8;
 }
 result += *overflow_arg_area;
 --count;
 }
 while ( count );
 return result;
}


/* Function: func_no_args @ 0x1281 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1287 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x129D */
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


/* Function: func_struct_byval @ 0x12DE */
int func_struct_byval(LargeStruct s)
{
 __m128i v1; // xmm0
 long long i; // rcx

 v1 = _mm_setzero_si128();
 for ( i = 0; i != 16; i += 2 )
 v1 = _mm_add_epi64(v1, _mm_loadu_si128((const __m128i *)&s.data[i]));
 {
 union { __m128i v; uint32_t u32[4]; } u;
 u.v = _mm_add_epi64(_mm_shuffle_epi32(v1, 238), v1);
 return u.u32[0];
 }
}


/* Function: func_struct_byptr @ 0x130B */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x131D */
void test_calling_conventions()
{
 long long v0; // rbx
 unsigned int v1; // eax
 __m128i si128; // xmm0
 __m128i v3; // xmm2
 __m128i v4; // xmm0
 long long i; // rax
 unsigned long long v6[8]; // [rsp+0h] [rbp-88h] BYREF

 puts(s);
 v0 = 0;
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
 v1 = varargs_func(5, 1, 2, 3, 4, 5);
 printf(aCallL206, v1);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v3 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 v6[v0++] = _mm_cvtsi128_si64(_mm_sub_epi64(si128, _mm_set1_epi64x(-1LL)));
 si128 = _mm_add_epi64(si128, v3);
 }
 while ( v0 != 8 );
 v4 = _mm_setzero_si128();
 for ( i = 0; i != 8; ++i )
 v4 = _mm_add_epi64(v4, _mm_loadu_si128((const __m128i *)&v6[i]));
 {
 union { __m128i v; uint64_t u64[2]; } u;
 u.v = _mm_add_epi64(_mm_shuffle_epi32(v4, 238), v4);
 printf(aCallL210, u.u64[0]);
 }
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x14E0 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x14E4 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x14EA */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x14F2 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x14F8 */
long long param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x14FE */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1504 */
int param_string(const char *str)
{
 return *str + str[1];
}


/* Function: call_string_param @ 0x150E */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1514 */
int param_ptr_array(char **arr, int n)
{
 long long v2; // rdx
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += *arr[v2++];
 while ( n != v2 );
 return result;
}


/* Function: call_ptr_array @ 0x1533 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1539 */
int param_varargs(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 int result; // eax
 unsigned int v7; // edx
 unsigned int *overflow_arg_area; // rsi
 va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v10[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v11; // [rsp+28h] [rbp-B0h]
 long long v12; // [rsp+30h] [rbp-A8h]
 long long v13; // [rsp+38h] [rbp-A0h]
 long long v14; // [rsp+40h] [rbp-98h]
 long long v15; // [rsp+48h] [rbp-90h]

 va_start(va, count);
 v3 = va_arg(va, unsigned long long);
 v1 = va_arg(va, unsigned long long);
 v2 = va_arg(va, unsigned long long);
 v4 = va_arg(va, unsigned long long);
 v5 = va_arg(va, unsigned long long);
 va_end(va);
 v11 = v3;
 v12 = v1;
 v13 = v2;
 v14 = v4;
 v15 = v5;
 va_copy(va, va);
 if ( count <= 0 )
 return 0;
 result = 0;
 v7 = 8;
 do
 {
 if ( v7 > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = &v10[v7];
 v7 += 8;
 }
 result += *overflow_arg_area;
 --count;
 }
 while ( count );
 return result;
}


/* Function: call_varargs_param @ 0x15DE */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x15FF */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x160C */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1612 */
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


/* Function: call_double_ptr @ 0x1633 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1639 */
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


/* Function: call_complex_cast @ 0x1650 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1656 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x165F */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1680 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x1684 */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x168A */
void test_parameter_passing()
{
 int v0; // eax

 puts(asc_23EB);
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


/* Function: ret_basic_type @ 0x17A6 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x17AA */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x17B0 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x17B5 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x17BB */
// local variable allocation has failed, the output may be wrong!
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 union { unsigned long long v; SmallPoint s; } u;
 u.v = ((unsigned long long)y << 32) | (unsigned int)x;
 result = u.s;
 return result;
}


/* Function: call_ret_small_struct @ 0x17C5 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x17CB */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // rax
 __m128i v3; // xmm0
 __m128i si128; // xmm1
 long long v5; // rcx
 __m128i v6; // xmm2

 result = retstr;
 v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(seed), 0);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2030);
 v5 = 0;
 v6 = _mm_load_si128((const __m128i *)&xmmword_2050);
 do
 {
 *(__m128i *)&retstr->data[v5] = _mm_add_epi32(si128, v3);
 v5 += 4;
 si128 = _mm_add_epi32(si128, v6);
 }
 while ( v5 != 16 );
 return result;
}


/* Function: call_ret_large_struct @ 0x1805 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x1826 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x182A */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x182E */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1843 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1849 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &ret_opaque_handle_handle2;
 if ( !type )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x185E */
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1865 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1871 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1877 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 3 )
 return 10 * op + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x188A */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1890 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1896 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x189C */
void test_return_values()
{
 puts(asc_240C);
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


/* Function: main @ 0x1975 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x198C */
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
