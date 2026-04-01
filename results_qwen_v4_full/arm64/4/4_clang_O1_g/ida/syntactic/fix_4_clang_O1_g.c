/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_clang_O1_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>





/* Type definitions for decompiled code */

typedef struct {
    unsigned int data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    unsigned int data[16];
} BigStruct;

typedef struct {
    unsigned int x;
    unsigned int y;
} SmallPoint;

/* Global variables for opaque handles */
int ret_opaque_handle_handle1 = 1;
int ret_opaque_handle_handle2 = 2;

/* Function pointer type */
typedef int (*func_ptr_t)(int);

/* Forward declarations for CRT stubs */
int call_weak_fn(void);
void JUMPOUT(int x);

/* Forward declarations for standard library functions */
int printf(const char *format, ...);
int puts(const char *s);
size_t strlen(const char *s);
void *memset(void *s, int c, size_t n);









/* Implementations for CRT stubs */
int call_weak_fn(void)
{
    return 0;
}

void JUMPOUT(int x)
{
    /* Stub - does nothing */
    (void)x;
}

/* Macro for extracting low dword from 64-bit value */
#define LODWORD(x) ((unsigned int)(x))



/* String constants */
const char asc_14BE[] = "Testing calling conventions...";
const char asc_14DF[] = "Testing parameter passing...";
const char asc_1500[] = "Testing return values...";
const char aCallL206[] = "CALL-L2-06: %d\n";
const char aCallL207[] = "CALL-L2-07: %d\n";
const char aCallL208[] = "CALL-L2-08: %d\n";
const char aCallL209[] = "CALL-L2-09: %d\n";
const char aCallL210[] = "CALL-L2-10: %llu\n";
const char aCallL211[] = "CALL-L2-11: %d\n";
const char aRetL101D[] = "RET-L1-01: %d\n";
const char aRetL102D[] = "RET-L1-02: %d\n";
const char aRetL103D[] = "RET-L1-03: %d\n";
const char aRetL104D[] = "RET-L1-04: %d\n";
const char aRetL201D[] = "RET-L2-01: %d\n";
const char aRetL202D[] = "RET-L2-02: %d\n";
const char aRetL301D[] = "RET-L3-01: %d\n";
const char aRetL302D[] = "RET-L3-02: %d\n";
const char aRetL303D[] = "RET-L3-03: %d\n";

/* Function: .init_proc @ 0x628 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_640 @ 0x640 */
void sub_640()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x814 */
int cdecl_func(int a, int b)
{
 return b + a;
}


/* Function: call_cdecl @ 0x81C */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x824 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x82C */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x834 */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x840 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x848 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x850 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return b + a + c + d + e;
}


/* Function: call_arm_aapcs @ 0x864 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x86C */
int mips_func(int a, int b, int c, int d)
{
 return b + a + c + d;
}


/* Function: call_mips @ 0x87C */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x884 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return b + a + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x89C */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x8A4 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return b + a + c + d + e;
}


/* Function: call_ms_x64 @ 0x8B8 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x8C0 */
int vectorcall_func(int a, int b, int c, int d)
{
 return b + a + c + d;
}


/* Function: call_vectorcall @ 0x8D0 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x8D8 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x8E0 */
int varargs_func(int count, ...)
{
 __builtin_va_list va;
 int v2;
 unsigned int *v3;
 long long v4;
 unsigned long long v6[8];
 unsigned long long v7[8];
 unsigned long long *v7_ptr;
 unsigned long long *v8;
 unsigned long long *v9;
 unsigned long long v10;

 memset(v6, 0, sizeof(v6));
 memset(v7, 0, sizeof(v7));
 __builtin_va_start(va, count);
 v6[1] = __builtin_va_arg(va, unsigned long long);
 v6[2] = __builtin_va_arg(va, unsigned long long);
 v6[3] = __builtin_va_arg(va, unsigned long long);
 v6[4] = __builtin_va_arg(va, unsigned long long);
 v6[5] = __builtin_va_arg(va, unsigned long long);
 v6[6] = __builtin_va_arg(va, unsigned long long);
 v6[7] = __builtin_va_arg(va, unsigned long long);
 __builtin_va_end(va);
 v9 = v6;
 v10 = 0xFFFFFF80FFFFFFC8LL;
 v2 = 0;
 v8 = v7;
 v7_ptr = v7;
 if ( count >= 1 )
 {
 do
 {
 v4 = (int)v10;
 if ( (v10 & 0x80000000) != 0 )
 {
 v3 = (unsigned int *)v7_ptr;
 v7_ptr += 2;
 }
 else
 {
 v3 = (unsigned int *)v7_ptr;
 v7_ptr += 2;
 }
 --count;
 v2 += *v3;
 }
 while ( count );
 }
 return v2;
}


/* Function: func_no_args @ 0x984 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x98C */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return b + a + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x9AC */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 int v7; // w0

 if ( s )
 v7 = (int)strlen(s);
 else
 v7 = 0;
 return (long long)((double)(v7 + x) + d + (double)ll);
}


/* Function: func_struct_byval @ 0xA04 */
unsigned int func_struct_byval(LargeStruct *s)
{
 int v1; // x9
 unsigned int v2; // w8

 v1 = 0;
 v2 = 0;
 do
 {
 v2 += s->data[v1++];
 }
 while ( v1 != 16 );
 return v2;
}


/* Function: func_struct_byptr @ 0xA28 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0xA40 */
void test_calling_conventions()
{
 unsigned int v0; // w0
 long long v1; // x8
 bool v2; // zf
 long long v3; // x8
 long long v4; // x1
 long long v5; // x10
 unsigned long long v6[8]; // [xsp+0h] [xbp-100h]
 unsigned long long v7[8]; // [xsp+80h] [xbp-80h]

 puts(asc_14BE);
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
 v1 = 0;
 do
 {
 v2 = v1 == 15;
 *((unsigned long long *)v7 + v1) = v1 + 1;
 ++v1;
 }
 while ( !v2 );
 v3 = 0;
 v4 = 0;
 v6[4] = v7[4];
 v6[5] = v7[5];
 v6[6] = v7[6];
 v6[7] = v7[7];
 v6[0] = v7[0];
 v6[1] = v7[1];
 v6[2] = v7[2];
 v6[3] = v7[3];
 do
 {
 v5 = *(unsigned long long *)((char *)v6 + v3);
 v3 += 8;
 v4 += v5;
 }
 while ( v3 != 128 );
 printf(aCallL210, v4);
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0xBE0 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0xBE8 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xBF0 */
int param_by_value_ptr(int *p)
{
 int result; // w0

 result = 1;
 *p *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xC08 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xC10 */
long long param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0xC18 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xC20 */
int param_string(const char *str)
{
 return *((unsigned char *)str + 1) + *(unsigned char *)str;
}


/* Function: call_string_param @ 0xC30 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xC38 */
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


/* Function: call_ptr_array @ 0xC6C */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xC74 */
int param_varargs(int count, ...)
{
 __builtin_va_list va;
 int v2;
 unsigned int *v3;
 long long v4;
 unsigned long long v6[8];
 unsigned long long v7[8];
 unsigned long long *v7_ptr;
 unsigned long long *v8;
 unsigned long long *v9;
 unsigned long long v10;

 memset(v6, 0, sizeof(v6));
 memset(v7, 0, sizeof(v7));
 __builtin_va_start(va, count);
 v6[1] = __builtin_va_arg(va, unsigned long long);
 v6[2] = __builtin_va_arg(va, unsigned long long);
 v6[3] = __builtin_va_arg(va, unsigned long long);
 v6[4] = __builtin_va_arg(va, unsigned long long);
 v6[5] = __builtin_va_arg(va, unsigned long long);
 v6[6] = __builtin_va_arg(va, unsigned long long);
 v6[7] = __builtin_va_arg(va, unsigned long long);
 __builtin_va_end(va);
 v9 = v6;
 v10 = 0xFFFFFF80FFFFFFC8LL;
 v2 = 0;
 v8 = v7;
 v7_ptr = v7;
 if ( count >= 1 )
 {
 do
 {
 v4 = (int)v10;
 if ( (v10 & 0x80000000) != 0 )
 {
 v3 = (unsigned int *)v7_ptr;
 v7_ptr += 2;
 }
 else
 {
 v3 = (unsigned int *)v7_ptr;
 v7_ptr += 2;
 }
 --count;
 v2 += *v3;
 }
 while ( count );
 }
 return v2;
}


/* Function: call_varargs_param @ 0xD18 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xD40 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0xD60 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0xD68 */
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


/* Function: call_double_ptr @ 0xD90 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0xD98 */
int param_complex_cast(void *p, int type)
{
 if ( type == 1 )
 return *((unsigned int *)p + 1) + *(unsigned int *)p;
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: call_complex_cast @ 0xDC0 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0xDCC */
unsigned int param_struct_byval(BigStruct *s)
{
 return s->data[15] + s->data[0];
}


/* Function: call_struct_byval @ 0xDDC */
int call_struct_byval()
{
 long long i; // x8
 unsigned int v2[16]; // [xsp+0h] [xbp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 return v2[15] + v2[0];
}


/* Function: param_order_dep @ 0xE0C */
int param_order_dep(int a, int b)
{
 return b + a;
}


/* Function: call_order_dep @ 0xE14 */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0xE1C */
void test_parameter_passing()
{
 int v0; // w0
 long long i; // x8
 unsigned int v2[16]; // [xsp+0h] [xbp-40h]

 puts(asc_14DF);
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
 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 printf("PARAM-L3-04: %d\n", v2[15] + v2[0]);
 printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0xF2C */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0xF34 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0xF3C */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0xF44 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0xF4C */
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 result.x = x;
 result.y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0xF58 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0xF60 */
LargeStruct ret_large_struct()
{
 LargeStruct result;
 long long i; // x9

 for ( i = 0; i != 16; ++i )
 result.data[i] = (unsigned int)i;
 return result;
}


/* Function: call_ret_large_struct @ 0xF80 */
int call_ret_large_struct()
{
 int i; // x8
 LargeStruct v2; // [xsp+0h] [xbp-40h]

 for ( i = 0; i != 16; ++i )
 v2.data[i] = i + 100;
 return v2.data[15] + v2.data[0];
}


/* Function: func_a @ 0xFB4 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0xFBC */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0xFC4 */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0xFE0 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0xFE8 */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &ret_opaque_handle_handle2;
 else
 return &ret_opaque_handle_handle1;
}


/* Function: call_ret_opaque @ 0x1004 */
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1010 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x1024 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x102C */
int ret_multi_branch(int op)
{
 if ( (unsigned int)op >= 3 )
 return -1;
 else
 return 10 * op + 10;
}


/* Function: call_ret_multi_branch @ 0x1044 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x104C */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1058 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1060 */
void test_return_values()
{
 long long i; // x8
 unsigned int v1[16]; // [xsp+0h] [xbp-40h]

 puts(asc_1500);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 for ( i = 0; i != 16; ++i )
 v1[i] = i + 100;
 printf(aRetL104D, (unsigned int)(v1[15] + v1[0]));
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
}


/* Function: main @ 0x113C */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x115C */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x130B0 */

/* FAILED to decompile: __libc_start_main @ 0x130B8 */

/* FAILED to decompile: __cxa_finalize @ 0x130C0 */

/* FAILED to decompile: abort @ 0x130C8 */

/* FAILED to decompile: puts @ 0x130D0 */

/* FAILED to decompile: printf @ 0x130D8 */

/* FAILED to decompile: __gmon_start__ @ 0x130E8 */

/* Total functions decompiled: 79, failed: 7 */
