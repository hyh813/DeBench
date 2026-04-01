/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_O3_g
 * Processor: pc
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <emmintrin.h>

/* External declarations */
static void *ret_opaque_handle_handle1 = (void *)0x1000;
static void *ret_opaque_handle_handle2 = (void *)0x2000;
static __m128i xmmword_2010 = {0};
static __m128i xmmword_2020 = {0};
static __m128i xmmword_2030 = {0};
static char asc_23AB[] = "Testing parameter passing";
static char asc_23CC[] = "Testing return values";
static char aCallL208[] = "CALL-L2-08: %d\n";
static char aCallL209[] = "CALL-L2-09: %d\n";
static char aCallL210[] = "CALL-L2-10: %d\n";
static char aCallL211[] = "CALL-L2-11: %d\n";
static char aRetL101D[] = "RET-L1-01: %d\n";
static char aRetL102D[] = "RET-L1-02: %d\n";
static char aRetL103D[] = "RET-L1-03: %d\n";
static char aRetL104D[] = "RET-L1-04: %d\n";
static char aRetL201D[] = "RET-L2-01: %d\n";
static char aRetL202D[] = "RET-L2-02: %d\n";
static char aRetL301D[] = "RET-L3-01: %d\n";
static char aRetL302D[] = "RET-L3-02: %d\n";
static char aRetL303D[] = "RET-L3-03: %d\n";

/* Type definitions */
typedef struct { long long data[16]; } LargeStruct;
typedef struct { int x; int y; } SmallStruct;
typedef struct { int x; int y; } SmallPoint;
typedef struct { int data[16]; } LargeData;
typedef struct { int data[16]; } BigStruct;
typedef int (*func_ptr_t)(int);




/* Function: sub_1020 @ 0x1020 */
void sub_1020(void)
{
 /* JUMPOUT removed */
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
 va_list va;
 int result = 0;
 int i;

 va_start(va, count);
 for (i = 0; i < count; i++) {
 result += va_arg(va, int);
 }
 va_end(va);
 return result;
}


/* Function: func_no_args @ 0x1450 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1460 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x1480 */
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


/* Function: func_struct_byval @ 0x14D0 */
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


/* Function: func_struct_byptr @ 0x1520 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x1540 */
void test_calling_conventions()
{
 long long v0; // rax
 unsigned int v1; // eax
 long long v2; // [rsp-8h] [rbp-8h]

 v2 = v0;
 puts("Testing calling conventions");
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
 printf("CALL-L2-06: %d\n", v1);
 printf("CALL-L2-07: %d\n", 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 printf(aCallL210, 136);
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x16B0 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x16C0 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16D0 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16E0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16F0 */
long long param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x1700 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1710 */
int param_string(const char *str)
{
 return *str + str[1];
}


/* Function: call_string_param @ 0x1720 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1730 */
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


/* Function: call_ptr_array @ 0x17C0 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x17D0 */
int param_varargs(int count, ...)
{
 va_list va;
 int result = 0;
 int i;

 va_start(va, count);
 for (i = 0; i < count; i++) {
 result += va_arg(va, int);
 }
 va_end(va);
 return result;
}


/* Function: call_varargs_param @ 0x19A0 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x19D0 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x19E0 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x19F0 */
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


/* Function: call_double_ptr @ 0x1A20 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1A30 */
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


/* Function: call_complex_cast @ 0x1A50 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1A60 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1A70 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1A80 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x1A90 */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x1AA0 */
void test_parameter_passing()
{
 int v0; // eax

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


/* Function: ret_basic_type @ 0x1BA0 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x1BB0 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1BC0 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1BD0 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1BE0 */
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 result.x = x;
 result.y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1BF0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1C00 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // rax
 __m128i v3; // xmm0

 result = retstr;
 retstr->data[0] = seed;
 v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(seed), 0);
 *(__m128i *)&retstr->data[1] = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_2010), v3);
 *(__m128i *)&retstr->data[5] = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_2020), v3);
 *(__m128i *)&retstr->data[9] = _mm_add_epi32(v3, (__m128i)xmmword_2030);
 retstr->data[13] = seed + 13;
 retstr->data[14] = seed + 14;
 retstr->data[15] = seed + 15;
 return result;
}


/* Function: call_ret_large_struct @ 0x1C50 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x1C60 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x1C70 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x1C80 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1CA0 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1CB0 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &ret_opaque_handle_handle2;
 if ( !type )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1CD0 */
int call_ret_opaque()
{
 return (int)(unsigned long)ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1CE0 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1CF0 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1D00 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 3 )
 return 10 * op + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1D20 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1D30 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1D40 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1D50 */
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


/* Function: main @ 0x1E10 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
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
 return 0;
}


/* Function: .term_proc @ 0x1ED8 */
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
