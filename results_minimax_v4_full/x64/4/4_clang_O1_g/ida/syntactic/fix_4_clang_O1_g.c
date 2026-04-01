/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

// Struct type definitions
typedef struct {
    int data[16];
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

typedef struct {
    int data[16];
} LargeData;

// Type definitions
typedef int (*func_ptr_t)(int);

// CRT stub - removed
void JUMPOUT(void) {}

// External function pointer for profiling
void (*_gmon_start__)(void) = NULL;

// String constants
const char *s = "Calling Convention Tests";
const char *asc_236F = "Parameter Passing Tests";
const char *asc_2390 = "Return Value Tests";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %d\n";
const char *aCallL211 = "CALL-L2-11: %d\n";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Function: .init_proc @ 0x1000 */
void init_proc()
{
 if ( _gmon_start__ )
 _gmon_start__();
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
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
 int result; // eax
 unsigned int *overflow_arg_area; // rdx
 va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v9[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v10; // [rsp+28h] [rbp-B0h]
 long long v11; // [rsp+30h] [rbp-A8h]
 long long v12; // [rsp+38h] [rbp-A0h]
 long long v13; // [rsp+40h] [rbp-98h]
 long long v14; // [rsp+48h] [rbp-90h]

 va_start(va, count);
 v3 = va_arg(va, unsigned long long);
 v1 = va_arg(va, unsigned long long);
 v2 = va_arg(va, unsigned long long);
 v4 = va_arg(va, unsigned long long);
 v5 = va_arg(va, unsigned long long);
 va_end(va);
 v10 = v3;
 v11 = v1;
 v12 = v2;
 v13 = v4;
 v14 = v5;
 va_copy(va, va);
 va[0].gp_offset = 8;
 result = 0;
 if ( count > 0 )
 {
 do
 {
 if ( (unsigned long long)(int)va[0].gp_offset > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = &v9[va[0].gp_offset];
 va[0].gp_offset += 8;
 }
 result += *overflow_arg_area;
 --count;
 }
 while ( count );
 }
 return result;
}


/* Function: func_no_args @ 0x1340 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1350 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x1370 */
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


/* Function: func_struct_byval @ 0x13C0 */
int func_struct_byval(LargeStruct s)
{
 long long v1; // rdx
 long long v2; // rax

 v1 = 0;
 v2 = 0;
 do
 v2 += s.data[v1++];
 while ( v1 != 16 );
 return v2;
}


/* Function: func_struct_byptr @ 0x13E0 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x1400 */
void test_calling_conventions()
{
 unsigned int v0; // eax
 long long i; // rax
 long long v2; // rax
 long long v3; // rsi
 unsigned long long v4[17]; // [rsp+0h] [rbp-88h]

 puts(s);
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
 for ( i = 1; i != 17; ++i )
 v4[i] = i;
 v2 = 0;
 v3 = 0;
 do
 v3 += v4[++v2];
 while ( v2 != 16 );
 printf(aCallL210, v3);
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x15B0 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x15C0 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x15D0 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x15E0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x15F0 */
long long param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x1600 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1610 */
int param_string(const char *str)
{
 return *str + str[1];
}


/* Function: call_string_param @ 0x1620 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1630 */
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


/* Function: call_ptr_array @ 0x1660 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1670 */
int param_varargs(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 int result; // eax
 unsigned int *overflow_arg_area; // rdx
 va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v9[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v10; // [rsp+28h] [rbp-B0h]
 long long v11; // [rsp+30h] [rbp-A8h]
 long long v12; // [rsp+38h] [rbp-A0h]
 long long v13; // [rsp+40h] [rbp-98h]
 long long v14; // [rsp+48h] [rbp-90h]

 va_start(va, count);
 v3 = va_arg(va, unsigned long long);
 v1 = va_arg(va, unsigned long long);
 v2 = va_arg(va, unsigned long long);
 v4 = va_arg(va, unsigned long long);
 v5 = va_arg(va, unsigned long long);
 va_end(va);
 v10 = v3;
 v11 = v1;
 v12 = v2;
 v13 = v4;
 v14 = v5;
 va_copy(va, va);
 va[0].gp_offset = 8;
 result = 0;
 if ( count > 0 )
 {
 do
 {
 if ( (unsigned long long)(int)va[0].gp_offset > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = &v9[va[0].gp_offset];
 va[0].gp_offset += 8;
 }
 result += *overflow_arg_area;
 --count;
 }
 while ( count );
 }
 return result;
}


/* Function: call_varargs_param @ 0x1730 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1760 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1770 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1780 */
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


/* Function: call_double_ptr @ 0x17B0 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x17C0 */
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


/* Function: call_complex_cast @ 0x17E0 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x17F0 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1800 */
int call_struct_byval()
{
 long long i; // rax
 unsigned int v2[16]; // [rsp+0h] [rbp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 return v2[0] + v2[15];
}


/* Function: param_order_dep @ 0x1830 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x1840 */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x1850 */
void test_parameter_passing()
{
 long long v0; // rbx
 int v1; // eax
 unsigned int v2[18]; // [rsp+0h] [rbp-48h]

 puts(asc_236F);
 v0 = 0;
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v1 = param_varargs(4, 10, 20, 30, 40);
 printf("PARAM-L2-04: %d\n", v1);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 do
 {
 v2[v0] = v0;
 ++v0;
 }
 while ( v0 != 16 );
 printf("PARAM-L3-04: %d\n", v2[0] + v2[15]);
 printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x1970 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x1980 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1990 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x19A0 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x19B0 */
SmallPoint ret_small_struct(int x, int y)
{
 return *(SmallPoint *)((unsigned long long)(unsigned int)y << 32 | (unsigned int)x);
}


/* Function: call_ret_small_struct @ 0x19C0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x19D0 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // rax
 long long i; // rdx

 result = retstr;
 for ( i = 0; i != 16; ++i )
 retstr->data[i] = seed + (int)i;
 return result;
}


/* Function: call_ret_large_struct @ 0x1A00 */
int call_ret_large_struct()
{
 long long i; // rax
 unsigned int v2[16]; // [rsp+0h] [rbp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i + 100;
 return v2[0] + v2[15];
}


/* Function: func_a @ 0x1A30 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x1A40 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x1A50 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1A70 */
int call_ret_func_ptr()
{
 return 10;
}


// Opaque handle storage
static int ret_opaque_handle_handle1 = 10;
static int ret_opaque_handle_handle2 = 20;

/* Function: ret_opaque_handle @ 0x1A80 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &ret_opaque_handle_handle2;
 if ( !type )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1AA0 */
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1AB0 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1AC0 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1AD0 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 3 )
 return 10 * op + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1AF0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1B00 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1B10 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1B20 */
void test_return_values()
{
 long long v0; // rbx
 unsigned int v1[18]; // [rsp+0h] [rbp-48h]

 puts(asc_2390);
 v0 = 0;
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 do
 {
 v1[v0] = v0 + 100;
 ++v0;
 }
 while ( v0 != 16 );
 printf(aRetL104D, (unsigned int)(v1[0] + v1[15]));
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
}


/* Function: main @ 0x1C00 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1C14 */
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
