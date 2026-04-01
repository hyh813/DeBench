/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_O0_g
 * Processor: pc
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// External declarations
extern void *_gmon_start__;

// Macro for combining two 32-bit values into a 64-bit value
#define __PAIR64__(high, low) (((unsigned long long)(high) << 32) | (unsigned long long)(low))

// Struct definitions
struct SmallStruct {
    int x;
    int y;
};

struct LargeStruct {
    int data[16];
};

struct BigStruct {
    int data[16];
};

struct LargeData {
    int data[16];
};

struct SmallPoint {
    int x;
    int y;
};
typedef struct SmallPoint SmallPoint;

struct TestIntPair {
    unsigned int a;
    unsigned int b;
};

// Function pointer type
typedef int (*func_ptr_t)(int);

// Forward declarations
int callback_func(int x);

// Opaque handles (defined as global variables)
int ret_opaque_handle_handle1 = 0;
int ret_opaque_handle_handle2 = 0;

// String constants - defined locally
static const char aRetL101D[] = "RET-L1-01: %d\n";
static const char aRetL102D[] = "RET-L1-02: %d\n";
static const char aRetL103D[] = "RET-L1-03: %d\n";
static const char aRetL104D[] = "RET-L1-04: %d\n";
static const char aRetL201D[] = "RET-L2-01: %d\n";
static const char aRetL202D[] = "RET-L2-02: %d\n";
static const char asc_32C8[] = "Return Values Test\n";
static const char asc_31EB[] = "Parameter Passing Test\n";
static const char aRetL301D[] = "RET-L3-01: %d\n";
static const char aRetL302D[] = "RET-L3-02: %d\n";
static const char aRetL303D[] = "RET-L3-03: %d\n";






/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x1160 */
int cdecl_func(int a, int b)
{
 return b + a;
}


/* Function: call_cdecl @ 0x1180 */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x11A0 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x11C0 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x11E0 */
int fastcall_func(int a, int b, int c)
{
 return c + b + a;
}


/* Function: call_fastcall @ 0x1200 */
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1220 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1230 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + b + a;
}


/* Function: call_arm_aapcs @ 0x1260 */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1290 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + b + a;
}


/* Function: call_mips @ 0x12B0 */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x12D0 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + b + a;
}


/* Function: call_amd64_sysv @ 0x1300 */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1330 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return e + d + c + b + a;
}


/* Function: call_ms_x64 @ 0x1360 */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x1390 */
int vectorcall_func(int a, int b, int c, int d)
{
 return d + c + b + a;
}


/* Function: call_vectorcall @ 0x13B0 */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x13D0 */
int mixed_conventions_test()
{
 int sum; // [rsp+Ch] [rbp-4h]
 int suma; // [rsp+Ch] [rbp-4h]

 sum = cdecl_func(1, 2);
 suma = sum + stdcall_func(3, 4);
 return suma + fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x1430 */
int varargs_func(int count, ...)
{
 unsigned int *overflow_arg_area; // rax
 int i; // [rsp+D0h] [rbp-28h]
 int sum; // [rsp+D4h] [rbp-24h]
 va_list args; // [rsp+D8h] [rbp-20h] BYREF
 int counta; // [rsp+F4h] [rbp-4h]

 va_start(args, count);
 counta = count;
 sum = 0;
 for ( i = 0; i < counta; ++i )
 {
 if ( args[0].gp_offset > 0x28 )
 {
 overflow_arg_area = args[0].overflow_arg_area;
 args[0].overflow_arg_area = (char *)args[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = (char *)args[0].reg_save_area + (int)args[0].gp_offset;
 args[0].gp_offset += 8;
 }
 sum += *overflow_arg_area;
 }
 return sum;
}


/* Function: func_no_args @ 0x1560 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1570 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + b + a;
}


/* Function: func_mixed_args @ 0x15B0 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 int v5; // [rsp+0h] [rbp-30h]
 int lla; // [rsp+10h] [rbp-20h]

 lla = ll;
 if ( s )
 v5 = strlen(s);
 else
 v5 = 0;
 return (int)((double)(v5 + x) + d + (double)lla);
}


/* Function: func_struct_byval @ 0x1620 */
int func_struct_byval(struct LargeStruct s)
{
 int i; // [rsp+Ch] [rbp-Ch]
 long long sum; // [rsp+10h] [rbp-8h]

 sum = 0;
 for ( i = 0; i < 16; ++i )
 sum += s.data[i];
 return sum;
}


/* Function: func_struct_byptr @ 0x1680 */
int func_struct_byptr(struct SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x16C0 */
void test_calling_conventions()
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
 unsigned int struct_ptr; // [rsp+8Ch] [rbp-B4h]
 struct SmallStruct s; // [rsp+90h] [rbp-B0h] BYREF
 int struct_val; // [rsp+98h] [rbp-A8h]
 int i; // [rsp+9Ch] [rbp-A4h]
 struct LargeStruct large; // [rsp+A0h] [rbp-A0h]
 int mixed; // [rsp+124h] [rbp-1Ch]
 char *test_str; // [rsp+128h] [rbp-18h]
 int many; // [rsp+134h] [rbp-Ch]
 int no_args; // [rsp+138h] [rbp-8h]
 int sum; // [rsp+13Ch] [rbp-4h]

 printf("Calling Conventions Test\n");
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
 sum = varargs_func(5, 1, 2, 3, 4);
 printf("CALL-L2-06: %d\n", (unsigned int)sum);
 no_args = func_no_args();
 printf("CALL-L2-07: %d\n", (unsigned int)no_args);
 many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf("CALL-L2-08: %d\n", (unsigned int)many);
 test_str = "test";
 mixed = func_mixed_args(10, "test", 3.14, 100);
 printf("CALL-L2-09: %d\n", (unsigned int)mixed);
 for ( i = 0; i < 16; ++i )
 large.data[i] = i + 1;
 struct_val = func_struct_byval(large);
 printf("CALL-L2-10: %d\n", (unsigned int)struct_val);
 s = (struct SmallStruct){5, 10};
 struct_ptr = func_struct_byptr(&s);
 printf("CALL-L2-11: %u\n", struct_ptr);
}


/* Function: param_by_value_int @ 0x1970 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1990 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x19C0 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1A00 */
int call_by_value_ptr()
{
 int result; // [rsp+Ch] [rbp-14h]
 int val; // [rsp+1Ch] [rbp-4h] BYREF

 val = 5;
 result = param_by_value_ptr(&val);
 return result + val;
}


/* Function: param_array_decay @ 0x1A30 */
int param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x1A50 */
int call_array_decay()
{
 int array[12]; // [rsp+0h] [rbp-30h] BYREF

 memset(array, 0, 0x28u);
 return param_array_decay(array, 10);
}


/* Function: param_string @ 0x1A80 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x1AA0 */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1AC0 */
int param_ptr_array(char **arr, int n)
{
 int i; // [rsp+0h] [rbp-14h]
 int sum; // [rsp+4h] [rbp-10h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *arr[i];
 return sum;
}


/* Function: call_ptr_array @ 0x1B10 */
int call_ptr_array()
{
 char *strs[3]; // [rsp+0h] [rbp-20h] BYREF

 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x1B50 */
int param_varargs(int count, ...)
{
 unsigned int *overflow_arg_area; // rax
 int i; // [rsp+D0h] [rbp-28h]
 int sum; // [rsp+D4h] [rbp-24h]
 va_list args; // [rsp+D8h] [rbp-20h] BYREF
 int counta; // [rsp+F4h] [rbp-4h]

 va_start(args, count);
 counta = count;
 sum = 0;
 for ( i = 0; i < counta; ++i )
 {
 if ( args[0].gp_offset > 0x28 )
 {
 overflow_arg_area = args[0].overflow_arg_area;
 args[0].overflow_arg_area = (char *)args[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = (char *)args[0].reg_save_area + (int)args[0].gp_offset;
 args[0].gp_offset += 8;
 }
 sum += *overflow_arg_area;
 }
 return sum;
}


/* Function: call_varargs_param @ 0x1C80 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1CB0 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1CE0 */
int call_func_ptr_param()
{
 return param_func_ptr((int (*)(int))callback_func, 5);
}


/* Function: callback_func @ 0x1D00 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: param_double_ptr @ 0x1D10 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1D70 */
int call_double_ptr()
{
 int *ptr; // [rsp+10h] [rbp-10h] BYREF
 int val; // [rsp+1Ch] [rbp-4h] BYREF

 val = 10;
 ptr = &val;
 param_double_ptr(&ptr, 20);
 return (ptr == 0) + val;
}


/* Function: param_complex_cast @ 0x1DC0 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *((unsigned int *)p + 1) + *(unsigned int *)p;
 return -1;
}


/* Function: call_complex_cast @ 0x1E40 */
int call_complex_cast()
{
 struct TestIntPair pair; // [rsp+0h] [rbp-10h] BYREF
 int val; // [rsp+Ch] [rbp-4h] BYREF

 val = 305419896;
 pair = (struct TestIntPair){0xC8000000u, 0x64u};
 param_complex_cast(&pair, 1);
 return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x1E80 */
int param_struct_byval(struct BigStruct s)
{
 return s.data[15] + s.data[0];
}


/* Function: call_struct_byval @ 0x1E90 */
int call_struct_byval()
{
 int i; // [rsp+4Ch] [rbp-44h]
 struct BigStruct s; // [rsp+50h] [rbp-40h]

 for ( i = 0; i < 16; ++i )
 s.data[i] = i;
 return param_struct_byval(s);
}


/* Function: param_order_dep @ 0x1F00 */
int param_order_dep(int a, int b)
{
 return b + a;
}


/* Function: call_order_dep @ 0x1F20 */
int call_order_dep()
{
 return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x1F50 */
void test_parameter_passing()
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

 printf(asc_31EB);
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
 printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x2050 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x2060 */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x2090 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x20B0 */
int call_ret_pointer()
{
 int arr[3]; // [rsp+14h] [rbp-Ch] BYREF

 *(unsigned long long *)arr = 0x140000000ALL;
 arr[2] = 30;
 return *ret_pointer(arr);
}


/* Function: ret_small_struct @ 0x20F0 */
struct SmallPoint ret_small_struct(int x, int y)
{
 return (struct SmallPoint){x, y};
}


/* Function: call_ret_small_struct @ 0x2110 */
int call_ret_small_struct()
{
 struct SmallPoint p; // [rsp+8h] [rbp-8h]

 p = ret_small_struct(3, 4);
 return p.y + p.x;
}


/* Function: ret_large_struct @ 0x2140 */
struct LargeData * ret_large_struct(struct LargeData *retstr, int seed)
{
 int i; // [rsp+10h] [rbp-8h]

 for ( i = 0; i < 16; ++i )
 retstr->data[i] = i + seed;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x2190 */
int call_ret_large_struct()
{
 struct LargeData d; // [rsp+0h] [rbp-40h] BYREF

 ret_large_struct(&d, 100);
 return d.data[15] + d.data[0];
}


/* Function: func_a @ 0x21C0 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x21D0 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x21E0 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = (func_ptr_t)func_a;
 if ( selector )
 return (func_ptr_t)func_b;
 return result;
}


/* Function: call_ret_func_ptr @ 0x2210 */
int call_ret_func_ptr()
{
 func_ptr_t f; // [rsp+8h] [rbp-8h]

 f = ret_func_ptr(1);
 return f(5);
}


/* Function: ret_opaque_handle @ 0x2240 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &ret_opaque_handle_handle2;
 if ( !type )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x2270 */
int call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x2290 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x22D0 */
int call_ret_complex_expr()
{
 int r1; // [rsp+Ch] [rbp-4h]

 r1 = ret_complex_expr(5, 3, 10);
 return ret_complex_expr(3, 5, 10) + r1;
}


/* Function: ret_multi_branch @ 0x2320 */
int ret_multi_branch(int op)
{
 switch ( op )
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


/* Function: call_ret_multi_branch @ 0x2390 */
int call_ret_multi_branch()
{
 int sum; // [rsp+Ch] [rbp-4h]
 int suma; // [rsp+Ch] [rbp-4h]

 sum = ret_multi_branch(0);
 suma = sum + ret_multi_branch(1);
 return suma + ret_multi_branch(2);
}


/* Function: ret_void @ 0x23E0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x2400 */
int call_ret_void()
{
 int result; // [rsp+Ch] [rbp-4h] BYREF

 ret_void(7, &result);
 return result;
}


/* Function: test_return_values @ 0x2420 */
void test_return_values()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

 printf(asc_32C8);
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
 printf(aRetL303D, v8);
}


/* Function: main @ 0x2500 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x2528 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6060 */

/* FAILED to decompile: strlen @ 0x6068 */

/* FAILED to decompile: printf @ 0x6070 */

/* FAILED to decompile: memset @ 0x6078 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6080 */

/* FAILED to decompile: __gmon_start__ @ 0x6090 */

/* Total functions decompiled: 79, failed: 6 */
