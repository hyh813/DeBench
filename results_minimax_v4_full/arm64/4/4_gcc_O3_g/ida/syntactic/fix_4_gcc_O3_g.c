/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_gcc_O3_g
 * Processor: arm
 */

#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <arm_neon.h>

/* Type definitions */
typedef int (*func_ptr_t)(int);

/* Struct definitions */
typedef struct {
    int64_t data[16];
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

/* Forward declarations */
void test_calling_conventions(void);
void test_parameter_passing(void);
void test_return_values(void);

/* External declarations */
extern unsigned int _stack_chk_guard;

/* Stack guard definition (provided by CRT in normal builds) */
unsigned int _stack_chk_guard = 0xDEADBEEF;

/* CRT stub - weak function that can be overridden */
int __attribute__((weak)) call_weak_fn(void)
{
    return 0;
}

/* Defined global variables */
static int handle1_1 = 1;
static int handle2_0 = 2;

/* NEON constants (rodata) */
static const int32x4_t xmmword_19D0 = {0, 0, 0, 0};
static const int32x4_t xmmword_19E0 = {1, 1, 1, 1};
static const int32x4_t xmmword_19F0 = {2, 2, 2, 2};
static const int32x4_t xmmword_1A00 = {3, 3, 3, 3};

/* String constants (rodata) */
static const char asc_1598[] = "=== Calling Conventions Test ===\n";
static const char asc_1760[] = "=== Parameter Passing Test ===\n";
static const char asc_1890[] = "=== Return Values Test ===\n";

/* Format strings */
static const char aCallL206[] = "CALL-L2-01: varargs_func(5, 1,2,3,4) = %d\n";
static const char aCallL207[] = "CALL-L2-02: func_no_args() = %d\n";
static const char aCallL208[] = "CALL-L2-03: func_many_args() = %d\n";
static const char aCallL209[] = "CALL-L2-04: func_mixed_args() = %d\n";
static const char aCallL210[] = "CALL-L2-05: func_struct_byval() = %d\n";
static const char aCallL211[] = "CALL-L2-06: func_struct_byptr() = %d\n";

static const char aRetL101D[] = "RET-L1-01: ret_basic_type() = %d\n";
static const char aRetL102D[] = "RET-L1-02: ret_pointer() = %d\n";
static const char aRetL103D[] = "RET-L1-03: ret_small_struct() = %d\n";
static const char aRetL104D[] = "RET-L1-04: ret_large_struct() = %d\n";
static const char aRetL201D[] = "RET-L2-01: ret_func_ptr() = %d\n";
static const char aRetL202D[] = "RET-L2-02: ret_opaque_handle() = %d\n";
static const char aRetL301D[] = "RET-L3-01: ret_complex_expr() = %d\n";
static const char aRetL302D[] = "RET-L3-02: ret_multi_branch() = %d\n";
static const char aRetL303D[] = "RET-L3-03: ret_void() = %d\n";

/* CRT stub declaration */
int call_weak_fn(void);

/* JUMPOUT macro for jump table stubs */
void JUMPOUT(unsigned long long addr) {
    ((void (*)(void))addr)();
}

/* Function: .init_proc @ 0x6F0 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_710 @ 0x710 */
void sub_710()
{
 JUMPOUT(0);
}


/* Function: main @ 0x7C0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x920 */
int func_a(int x)
{
 return x + 10;
}


/* Function: param_varargs_0 @ 0x930 */
int param_varargs_0(int count, ...)
{
 int v1; // w1
 int v2; // w2
 int v3; // w3
 int v4; // w4

 return v1 + v2 + v3 + v4;
}


/* Function: varargs_func_0 @ 0x9B0 */
int varargs_func_0(int count, ...)
{
 int v1; // w1
 int v2; // w2
 int v3; // w3
 int v4; // w4
 int v5; // w5

 return v1 + v2 + v3 + v4 + v5;
}


/* Function: func_b @ 0xA40 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0xA50 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0xA60 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0xA70 */
int stdcall_func(int a, int b)
{
 return a * b;
}


/* Function: call_stdcall @ 0xA80 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0xA90 */
int fastcall_func(int a, int b, int c)
{
 return a + b + c;
}


/* Function: call_fastcall @ 0xAA0 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0xAB0 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0xAC0 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0xAD4 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0xAE0 */
int mips_func(int a, int b, int c, int d)
{
 return a + b + c + d;
}


/* Function: call_mips @ 0xAF0 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0xB00 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0xB20 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0xB30 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_ms_x64 @ 0xB44 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0xB50 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_vectorcall @ 0xB60 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0xB70 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0xB80 */
int varargs_func(int count, ...)
{
 va_list va; // kr00_32
 int v3; // w3
 char *v4; // x2
 int result; // w0
 int v6; // w1
 int v7; // w3
 int v8; // w1
 char *v9; // x2
 char *v10; // x3
 int v11; // w5
 char *v12; // x3
 long long vars0; // [xsp+48h] [xbp+48h]
 long long vars8; // [xsp+50h] [xbp+50h]
 long long vars10; // [xsp+58h] [xbp+58h]
 long long vars18; // [xsp+60h] [xbp+60h]
 long long vars20; // [xsp+68h] [xbp+68h]
 long long vars28; // [xsp+70h] [xbp+70h]
 char v19; // [xsp+80h] [xbp+80h] BYREF

 va_start(va, count);
 vars0 = va_arg(va, unsigned long long);
 vars8 = va_arg(va, unsigned long long);
 vars10 = va_arg(va, unsigned long long);
 vars18 = va_arg(va, unsigned long long);
 vars20 = va_arg(va, unsigned long long);
 vars28 = va_arg(va, unsigned long long);
 va_end(va);
 v3 = -56;
 if ( count <= 0 )
 return 0;
 v4 = &v19;
 result = 0;
 v6 = 0;
 while ( v3 < 0 )
 {
 v11 = v3 + 8;
 if ( v3 + 8 <= 0 )
 {
 v12 = &v19 + v3;
 }
 else
 {
 v12 = v4;
 v4 += 8;
 }
 ++v6;
 result += *(unsigned int *)v12;
 if ( count == v6 )
 return result;
 v3 = v11;
 }
 v7 = *(unsigned int *)v4;
 v8 = v6 + 1;
 v9 = v4 + 8;
 result += v7;
 if ( count != v8 )
 {
 do
 {
 v10 = v9;
 ++v8;
 v9 += 2;
 result += *(unsigned int *)v10;
 }
 while ( count > v8 );
 }
 return result;
}


/* Function: func_no_args @ 0xC80 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0xC90 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0xCB0 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 int v4; // w19

 v4 = x;
 if ( s )
 v4 = x + strlen(s);
 return (unsigned int)(int)((double)v4 + d + (double)ll);
}


/* Function: func_struct_byval @ 0xD00 */
long long func_struct_byval(LargeStruct *s)
{
 return vaddvq_s64(
 vaddq_s64(
 *(int64x2_t *)&s->data[14],
 vaddq_s64(
 *(int64x2_t *)&s->data[12],
 vaddq_s64(
 *(int64x2_t *)&s->data[10],
 vaddq_s64(
 *(int64x2_t *)&s->data[8],
 vaddq_s64(
 *(int64x2_t *)&s->data[6],
 vaddq_s64(*(int64x2_t *)&s->data[4], vaddq_s64(*(int64x2_t *)s->data, *(int64x2_t *)&s->data[2]))))))));
}


/* Function: func_struct_byptr @ 0xD40 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0xD60 */
void test_calling_conventions()
{
 unsigned int v0; // w0

 puts(asc_1598);
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
 v0 = varargs_func_0(5, 1, 2, 3, 4);
 __printf_chk(1, aCallL206, v0);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 __printf_chk(1, aCallL209, 117);
 __printf_chk(1, aCallL210, 136);
 __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0xED4 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0xEE0 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xEF0 */
int param_by_value_ptr(int *p)
{
 int result; // w0

 result = 1;
 *p *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xF10 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xF20 */
int param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0xF30 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xF40 */
int param_string(const char *str)
{
 return *(unsigned char *)str + *((unsigned char *)str + 1);
}


/* Function: call_string_param @ 0xF50 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xF60 */
int param_ptr_array(char **arr, int n)
{
 long long v3; // x2
 int result; // w0
 char *v5; // x3

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = arr[v3++];
 result += (unsigned char)*v5;
 }
 while ( n > (int)v3 );
 return result;
}


/* Function: call_ptr_array @ 0xFA0 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xFB0 */
int param_varargs(int count, ...)
{
 va_list va; // kr00_32
 int v3; // w3
 char *v4; // x2
 int result; // w0
 int v6; // w1
 int v7; // w3
 int v8; // w1
 char *v9; // x2
 char *v10; // x3
 int v11; // w5
 char *v12; // x3
 long long vars0; // [xsp+48h] [xbp+48h]
 long long vars8; // [xsp+50h] [xbp+50h]
 long long vars10; // [xsp+58h] [xbp+58h]
 long long vars18; // [xsp+60h] [xbp+60h]
 long long vars20; // [xsp+68h] [xbp+68h]
 long long vars28; // [xsp+70h] [xbp+70h]
 char v19; // [xsp+80h] [xbp+80h] BYREF

 va_start(va, count);
 vars0 = va_arg(va, unsigned long long);
 vars8 = va_arg(va, unsigned long long);
 vars10 = va_arg(va, unsigned long long);
 vars18 = va_arg(va, unsigned long long);
 vars20 = va_arg(va, unsigned long long);
 vars28 = va_arg(va, unsigned long long);
 va_end(va);
 v3 = -56;
 if ( count <= 0 )
 return 0;
 v4 = &v19;
 result = 0;
 v6 = 0;
 while ( v3 < 0 )
 {
 v11 = v3 + 8;
 if ( v3 + 8 <= 0 )
 {
 v12 = &v19 + v3;
 }
 else
 {
 v12 = v4;
 v4 += 8;
 }
 ++v6;
 result += *(unsigned int *)v12;
 if ( count == v6 )
 return result;
 v3 = v11;
 }
 v7 = *(unsigned int *)v4;
 v8 = v6 + 1;
 v9 = v4 + 8;
 result += v7;
 if ( count != v8 )
 {
 do
 {
 v10 = v9;
 ++v8;
 v9 += 2;
 result += *v10;
 }
 while ( count > v8 );
 }
 return result;
}


/* Function: call_varargs_param @ 0x10B0 */
int call_varargs_param()
{
 return param_varargs_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x10D0 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x10F0 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1100 */
int param_double_ptr(int **pp, int new_val)
{
 int *v3; // x0
 int result; // w0

 if ( !pp )
 return -1;
 v3 = *pp;
 if ( !v3 )
 return -1;
 *v3 = new_val;
 result = 1;
 *pp = 0;
 return result;
}


/* Function: call_double_ptr @ 0x1130 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1140 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1170 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1180 */
long long param_struct_byval(BigStruct *s)
{
 return (unsigned int)(s->data[0] + s->data[15]);
}


/* Function: call_struct_byval @ 0x1190 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x11A0 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x11B0 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x11C0 */
void test_parameter_passing()
{
 int v0; // w0

 puts(asc_1760);
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


/* Function: ret_basic_type @ 0x12D0 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x12E0 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x12F0 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1300 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1310 */
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 result.x = x;
 result.y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1320 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1330 */
long long ret_large_struct(unsigned int a1, int32x4_t *a2)
{
 int32x4_t v2; // q0
 long long v4; // [xsp+58h] [xbp+58h]

 v2 = vdupq_n_s32((int32_t)a1);
 *a2 = vaddq_s32(v2, (int32x4_t)xmmword_19D0);
 a2[1] = vaddq_s32(v2, (int32x4_t)xmmword_19E0);
 a2[2] = vaddq_s32(v2, (int32x4_t)xmmword_19F0);
 a2[3] = vaddq_s32(v2, (int32x4_t)xmmword_1A00);
 return v4 - _stack_chk_guard;
}


/* Function: call_ret_large_struct @ 0x13C4 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: ret_func_ptr @ 0x13D0 */
func_ptr_t ret_func_ptr(int selector)
{
 bool v1; // zf
 func_ptr_t result; // x0

 v1 = selector == 0;
 result = (func_ptr_t)func_b;
 if ( v1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x13F0 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1400 */
void * ret_opaque_handle(int type)
{
 bool v1; // zf
 void *result; // x0

 v1 = type == 0;
 result = &handle2_0;
 if ( v1 )
 return &handle1_1;
 return result;
}


/* Function: call_ret_opaque @ 0x1420 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1430 */
int ret_complex_expr(int x, int y, int z)
{
 bool v3; // cc
 int result; // w0
 int v5; // w2

 v3 = x <= y;
 result = z + 10;
 v5 = 2 * z;
 if ( !v3 )
 return v5;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1444 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1450 */
int ret_multi_branch(int op)
{
 bool v1; // cf
 int result; // w0

 v1 = (unsigned int)op >= 3;
 result = 10 * (op + 1);
 if ( v1 )
 return -1;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1470 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1480 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1490 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x14A0 */
void test_return_values()
{
 puts(asc_1890);
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


/* Function: .term_proc @ 0x1570 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x13078 */

/* FAILED to decompile: __libc_start_main @ 0x13080 */

/* FAILED to decompile: __cxa_finalize @ 0x13088 */

/* FAILED to decompile: __printf_chk @ 0x13090 */

/* FAILED to decompile: __stack_chk_fail @ 0x13098 */

/* FAILED to decompile: abort @ 0x130A8 */

/* FAILED to decompile: puts @ 0x130B0 */

/* FAILED to decompile: __gmon_start__ @ 0x130C0 */

/* Total functions decompiled: 81, failed: 8 */
