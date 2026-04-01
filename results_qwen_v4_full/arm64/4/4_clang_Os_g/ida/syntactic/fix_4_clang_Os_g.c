/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_clang_Os_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <arm_neon.h>

/* Type definitions */
typedef int (*func_ptr_t)(int);
typedef __builtin_va_list gcc_va_list;

/* Macro definitions for IDA decompiler artifacts */
#define LODWORD(x) ((unsigned int)(x))
#define JUMPOUT(x) do { } while(0)

/* Forward declarations */
long long call_weak_fn(void);

/* Global data declarations */

/* Struct definitions */
typedef struct {
    long long data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

/* Global variables */
static int ret_opaque_handle_handle1 = 1;
static int ret_opaque_handle_handle2 = 2;
static unsigned long long xmmword_11E0[2] = {0};
static unsigned long long xmmword_11F0[4] = {0};

/* String constants */
static const char *asc_157A = "Testing calling conventions...";
static const char *asc_159B = "Testing parameter passing...";
static const char *asc_15BC = "Testing return values...";
static const char *aCallL206 = "CALL-L2-06: %d\n";
static const char *aCallL207 = "CALL-L2-07: %d\n";
static const char *aCallL208 = "CALL-L2-08: %d\n";
static const char *aCallL209 = "CALL-L2-09: %d\n";
static const char *aCallL210 = "CALL-L2-10: %d\n";
static const char *aCallL211 = "CALL-L2-11: %d\n";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";

/* Function: .init_proc @ 0x668 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_680 @ 0x680 */
void sub_680()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* Function: call_weak_fn */
long long call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x854 */
int cdecl_func(int a, int b)
{
 return b + a;
}


/* Function: call_cdecl @ 0x85C */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x864 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x86C */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x874 */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x880 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x888 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x890 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return b + a + c + d + e;
}


/* Function: call_arm_aapcs @ 0x8A4 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x8AC */
int mips_func(int a, int b, int c, int d)
{
 return b + a + c + d;
}


/* Function: call_mips @ 0x8BC */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x8C4 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return b + a + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x8DC */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x8E4 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return b + a + c + d + e;
}


/* Function: call_ms_x64 @ 0x8F8 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x900 */
int vectorcall_func(int a, int b, int c, int d)
{
 return b + a + c + d;
}


/* Function: call_vectorcall @ 0x910 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x918 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x920 */
int varargs_func(int count, ...)
{
 gcc_va_list va;
 int v2;
 int result;
 int args[8];
 int i;

 va_start(va, count);
 for ( i = 0; i < 8 && i < count; i++ )
 {
 args[i] = va_arg(va, int);
 }
 va_end(va);
 result = 0;
 for ( i = 0; i < count && i < 8; i++ )
 {
 result += args[i];
 }
 return result;
}


/* Function: func_no_args @ 0x9CC */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x9D4 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return b + a + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x9F4 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 int v7; // w0

 if ( s )
 v7 = strlen(s);
 else
 v7 = 0;
 return (unsigned int)(int)((double)(v7 + x) + d + (double)ll);
}


/* Function: func_struct_byval @ 0xA4C */
long long func_struct_byval(LargeStruct *s)
{
 int64x2_t v1; // q0
 long long i; // x8
 int64x2_t v3; // q1

 v1 = vdupq_n_s64(0);
 for ( i = 0; i != 16; i += 2 )
 {
 v3 = *(int64x2_t *)&s->data[i];
 v1 = vaddq_s64(v3, v1);
 }
 return vaddvq_s64(v1);
}


/* Function: func_struct_byptr @ 0xA74 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0xA8C */
void test_calling_conventions()
{
 unsigned int v0; // w0
 long long v1; // x8
 int64x2_t v2; // q0
 int64x2_t v3; // q1
 int64x2_t v4; // q0
 long long i; // x8
 int64x2_t v6; // q1
 unsigned char v7[128]; // [xsp+0h] [xbp-100h] BYREF
 unsigned char src[128]; // [xsp+80h] [xbp-80h] BYREF

 puts(asc_157A);
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
 v0 = varargs_func(5, 1, 2, 3, 4, 5);
 printf(aCallL206, v0);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 v2 = vdupq_n_s64(0);
 for ( v1 = 0; v1 != 128; v1 += 16 )
 {
 v3 = vaddq_s64(v2, vdupq_n_s64(1));
 v2 = vaddq_s64(v2, vdupq_n_s64(2));
 *(int64x2_t *)&src[v1] = v3;
 }
 memcpy(v7, src, sizeof(v7));
 v4 = vdupq_n_s64(0);
 for ( i = 0; i != 128; i += 16 )
 {
 v6 = *(int64x2_t *)&v7[i];
 v4 = vaddq_s64(v6, v4);
 }
 printf(aCallL210, vaddvq_s64(v4));
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0xC44 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0xC4C */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xC54 */
int param_by_value_ptr(int *p)
{
 int result; // w0

 result = 1;
 *p *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xC6C */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xC74 */
long long param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0xC7C */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xC84 */
int param_string(const char *str)
{
 return *((unsigned char *)str + 1) + *(unsigned char *)str;
}


/* Function: call_string_param @ 0xC94 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xC9C */
int param_ptr_array(char **arr, int n)
{
 int result; // w0
 long long v4; // x9
 unsigned char *v5; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 v4 = (unsigned int)n;
 do
 {
 v5 = (unsigned char *)*arr++;
 --v4;
 result += *v5;
 }
 while ( v4 );
 return result;
}


/* Function: call_ptr_array @ 0xCD0 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xCD8 */
int param_varargs(int count, ...)
{
 gcc_va_list va;
 int v2;
 int result;
 int args[8];
 int i;

 va_start(va, count);
 for ( i = 0; i < 8 && i < count; i++ )
 {
 args[i] = va_arg(va, int);
 }
 va_end(va);
 result = 0;
 for ( i = 0; i < count && i < 8; i++ )
 {
 result += args[i];
 }
 return result;
}


/* Function: call_varargs_param @ 0xD84 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xD9C */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0xDBC */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0xDC4 */
int param_double_ptr(int **pp, int new_val)
{
 int *v3; // x9
 int result; // w0

 if ( !pp )
 return -1;
 v3 = *pp;
 if ( !*pp )
 return -1;
 result = 1;
 *v3 = new_val;
 *pp = 0;
 return result;
}


/* Function: call_double_ptr @ 0xDEC */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0xDF4 */
int param_complex_cast(void *p, int type)
{
 if ( type == 1 )
 return *((unsigned int *)p + 1) + *(unsigned int *)p;
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: call_complex_cast @ 0xE1C */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0xE28 */
long long param_struct_byval(BigStruct *s)
{
 return (unsigned int)(s->data[15] + s->data[0]);
}


/* Function: call_struct_byval @ 0xE38 */
int call_struct_byval()
{
 int v1; // [xsp+0h] [xbp-40h]

 return v1 + 15;
}


/* Function: param_order_dep @ 0xE64 */
int param_order_dep(int a, int b)
{
 return b + a;
}


/* Function: call_order_dep @ 0xE6C */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0xE74 */
void test_parameter_passing()
{
 int v0; // w0

 puts(asc_159B);
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


/* Function: ret_basic_type @ 0xF80 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0xF88 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0xF90 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0xF98 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0xFA0 */
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 result.x = x;
 result.y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0xFAC */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0xFB4 */
long long ret_large_struct(long long result, long long a2)
{
 long long v2; // x9
 int32x4_t v3; // q0
 int32x4_t v4; // q2
 int32x4_t v5; // q1
 int32x4_t v6; // q3

 v2 = 0;
 v3 = vdupq_n_s32(0x400000004);
 v4 = vdupq_n_s32((int32_t)result);
 v5 = vld1q_s32((int32_t *)xmmword_11F0);
 do
 {
 v6 = vaddq_s32(v5, v4);
 v5 = vaddq_s32(v5, v3);
 vst1q_s32((int32_t *)(a2 + v2), v6);
 v2 += 16;
 }
 while ( v2 != 64 );
 return result;
}


/* Function: call_ret_large_struct @ 0xFE4 */
int call_ret_large_struct()
{
 int v1; // [xsp+0h] [xbp-40h]

 return v1 + 115;
}


/* Function: func_a @ 0x1010 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x1018 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x1020 */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x103C */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1044 */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &ret_opaque_handle_handle2;
 else
 return &ret_opaque_handle_handle1;
}


/* Function: call_ret_opaque @ 0x1060 */
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x106C */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x1080 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1088 */
int ret_multi_branch(int op)
{
 if ( (unsigned int)op >= 3 )
 return -1;
 else
 return 10 * op + 10;
}


/* Function: call_ret_multi_branch @ 0x10A0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x10A8 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x10B4 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x10BC */
void test_return_values()
{
 puts(asc_15BC);
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


/* Function: main @ 0x1190 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x11B0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x130B8 */

/* FAILED to decompile: strlen @ 0x130C0 */

/* FAILED to decompile: __libc_start_main @ 0x130C8 */

/* FAILED to decompile: __cxa_finalize @ 0x130D0 */

/* FAILED to decompile: abort @ 0x130D8 */

/* FAILED to decompile: puts @ 0x130E0 */

/* FAILED to decompile: printf @ 0x130E8 */

/* FAILED to decompile: __gmon_start__ @ 0x130F8 */

/* Total functions decompiled: 79, failed: 8 */
