/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library includes */
#include <stdarg.h>
#include <string.h>

/* External CRT functions */
void frame_dummy(void);

/* Stub implementations for removed CRT functions */
int _do_global_ctors_aux(void) { return 0; }
void _do_global_dtors_aux(void) { }
void frame_dummy(void) { }

/* Stub for ret_opaque_handle handles */
int ret_opaque_handle_handle1;
int ret_opaque_handle_handle2;

/* Function pointer type */
typedef int (*func_ptr_t)(int);

/* Forward declarations */
int callback_func(int x);

/* Struct definitions */
typedef struct {
    int x;
    int y;
} SmallPoint;

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
    int data[16];
} LargeData;

typedef struct {
    int a;
    int b;
} TestIntPair;

/* External variables */
extern void *_gmon_start__;
extern void *GLOBAL_OFFSET_TABLE_;
extern int dword_64;
extern int dword_C8;
extern int ret_opaque_handle_handle1;
extern int ret_opaque_handle_handle2;

/* String literals */
static const char asc_3008[] = "=== Calling Conventions Test ===\n";
static const char asc_31D3[] = "=== Parameter Passing Test ===\n";
static const char asc_32B0[] = "=== Return Values Test ===\n";
static const char aCallL206[] = "CALL-L1-06: %d\n";
static const char aCallL207[] = "CALL-L1-07: %d\n";
static const char aCallL208[] = "CALL-L1-08: %d\n";
static const char aCallL209[] = "CALL-L1-09: %d\n";
static const char aCallL210[] = "CALL-L1-10: %d\n";
static const char aCallL211[] = "CALL-L1-11: %d\n";
static const char aRetL101D[] = "RET-L1-01: %d\n";
static const char aRetL102D[] = "RET-L1-02: %d\n";
static const char aRetL103D[] = "RET-L1-03: %d\n";
static const char aRetL104D[] = "RET-L1-04: %d\n";
static const char aRetL201D[] = "RET-L2-01: %d\n";
static const char aRetL202D[] = "RET-L2-02: %d\n";
static const char aRetL301D[] = "RET-L3-01: %d\n";
static const char aRetL302D[] = "RET-L3-02: %d\n";
static const char aRetL303D[] = "RET-L3-03: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_clang_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
void *_gmon_start__;

int init_proc()
{
 if ( _gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
    __asm__ volatile ("jmp *%%ebx" : : "b"(8));
}


/* Function: sub_1080 @ 0x1080 */
int sub_1080(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10BC @ 0x10BC */
void sub_10BC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10C0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x11F9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x11FD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: cdecl_func @ 0x1210 */
int cdecl_func(int a, int b)
{
 return b + a;
}


/* Function: call_cdecl @ 0x1230 */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x1260 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x1280 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x12B0 */
int fastcall_func(int a, int b, int c, int a1, int a2)
{
 return a + a1 + a2;
}


/* Function: call_fastcall @ 0x12D0 */
int call_fastcall()
{
 return fastcall_func(2, 1, 3, 4, 5);
}


/* Function: call_thiscall @ 0x1300 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1310 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + b + a;
}


/* Function: call_arm_aapcs @ 0x1340 */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1390 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + b + a;
}


/* Function: call_mips @ 0x13B0 */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x13F0 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + b + a;
}


/* Function: call_amd64_sysv @ 0x1420 */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1470 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return e + d + c + b + a;
}


/* Function: call_ms_x64 @ 0x14A0 */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x14F0 */
int vectorcall_func(int a, int b, int c, int d)
{
 return d + c + b + a;
}


/* Function: call_vectorcall @ 0x1510 */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x1550 */
int mixed_conventions_test()
{
 int v1; // [esp+4h] [ebp-14h]
 int v2; // [esp+8h] [ebp-10h]
 int sum; // [esp+10h] [ebp-8h]
 int suma; // [esp+10h] [ebp-8h]

 sum = cdecl_func(1, 2);
 suma = sum + stdcall_func(3, 4);
 return suma + fastcall_func(6, 5, 7, v1, v2);
}


/* Function: varargs_func @ 0x15E0 */
int varargs_func(int count, ...)
{
 int v1; // kr00_4
 int i; // [esp+0h] [ebp-Ch]
 int sum; // [esp+4h] [ebp-8h]
 va_list args; // [esp+8h] [ebp-4h]
 va_list va; // [esp+18h] [ebp+Ch] BYREF

 va_start(va, count);
 sum = 0;
 va_copy(args, va);
 for ( i = 0; i < count; ++i )
 {
 v1 = va_arg(args, unsigned int);
 sum += v1;
 }
 return sum;
}


/* Function: func_no_args @ 0x1640 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1650 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + b + a;
}


/* Function: func_mixed_args @ 0x1690 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 size_t v5; // [esp+Ch] [ebp-1Ch]

 if ( s )
 v5 = strlen(s);
 else
 v5 = 0;
 return (int)((long double)(int)(v5 + x) + d + (long double)ll);
}


/* Function: func_struct_byval @ 0x1730 */
int func_struct_byval(LargeStruct s)
{
 int i; // [esp+4h] [ebp-14h]
 long long sum; // [esp+8h] [ebp-10h]

 sum = 0;
 for ( i = 0; i < 16; ++i )
 sum += s.data[i];
 return sum;
}


/* Function: func_struct_byptr @ 0x1790 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x17D0 */
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
 int v10; // eax
 int v11; // ecx
 LargeStruct v12; // [esp+0h] [ebp-138h] BYREF
 int struct_ptr; // [esp+84h] [ebp-B4h]
 SmallStruct s; // [esp+88h] [ebp-B0h] BYREF
 int struct_val; // [esp+90h] [ebp-A8h]
 int i; // [esp+94h] [ebp-A4h]
 LargeStruct large; // [esp+98h] [ebp-A0h] BYREF
 int mixed; // [esp+118h] [ebp-20h]
 char *test_str; // [esp+11Ch] [ebp-1Ch]
 int many; // [esp+120h] [ebp-18h]
 int no_args; // [esp+124h] [ebp-14h]
 int sum; // [esp+128h] [ebp-10h]

 printf(asc_3008);
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
 sum = varargs_func(5, 1, 2, 3, 4, 5);
 printf(aCallL206, sum);
 no_args = func_no_args();
 printf(aCallL207, no_args);
 many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, many);
 test_str = "test";
 mixed = func_mixed_args(10, "test", 3.14, 100);
 printf(aCallL209, mixed);
    for ( i = 0; i < 16; ++i )
 {
 large.data[i] = i + 1;
 }
 memcpy(&v12, &large, sizeof(v12));
 struct_val = func_struct_byval(v12);
 printf(aCallL210, struct_val);
 s.x = 5;
 s.y = 10;
 struct_ptr = func_struct_byptr(&s);
 printf(aCallL211, struct_ptr);
}


/* Function: param_by_value_int @ 0x1B90 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1BB0 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x1BF0 */
int param_by_value_ptr(int *p)
{
 *p = *p * 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1C20 */
int call_by_value_ptr()
{
 int result; // [esp+8h] [ebp-10h]
 int val; // [esp+10h] [ebp-8h] BYREF

 val = 5;
 result = param_by_value_ptr(&val);
 return result + val;
}


/* Function: param_array_decay @ 0x1C60 */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x1C70 */
int call_array_decay()
{
 int array[11]; // [esp+1Ch] [ebp-2Ch] BYREF

 memset(array, 0, 0x28u);
 return param_array_decay(array, 10);
}


/* Function: param_string @ 0x1CC0 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x1CE0 */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1D10 */
int param_ptr_array(char **arr, int n)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *arr[i];
 return sum;
}


/* Function: call_ptr_array @ 0x1D60 */
int call_ptr_array()
{
 char *strs[3]; // [esp+8h] [ebp-10h] BYREF

 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x1DB0 */
int param_varargs(int count, ...)
{
 int v1; // kr00_4
 int i; // [esp+0h] [ebp-Ch]
 int sum; // [esp+4h] [ebp-8h]
 va_list args; // [esp+8h] [ebp-4h]
 va_list va; // [esp+18h] [ebp+Ch] BYREF

 va_start(va, count);
 va_copy(args, va);
 sum = 0;
 for ( i = 0; i < count; ++i )
 {
 v1 = va_arg(args, unsigned int);
 sum += v1;
 }
 return sum;
}


/* Function: call_varargs_param @ 0x1E10 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1E60 */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x1E90 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: callback_func @ 0x1EC0 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: param_double_ptr @ 0x1ED0 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1F20 */
int call_double_ptr()
{
 int *ptr; // [esp+18h] [ebp-10h] BYREF
 int val; // [esp+1Ch] [ebp-Ch] BYREF

 val = 10;
 ptr = &val;
 param_double_ptr(&ptr, 20);
 return (ptr == 0) + val;
}


/* Function: param_complex_cast @ 0x1F80 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *((unsigned int *)p + 1) + *(unsigned int *)p;
 return -1;
}


/* Function: call_complex_cast @ 0x1FA0 */
int call_complex_cast()
{
 int vals[2]; // [esp+8h] [ebp-8h] BYREF
 int result; // [esp+Ch] [ebp-4h]

 vals[0] = 10;
 vals[1] = 20;
 result = param_complex_cast(vals, 1);
 return result;
}





/* Function: param_struct_byval @ 0x2050 */
int param_struct_byval(BigStruct s)
{
 return s.data[15] + s.data[0];
}


/* Function: call_struct_byval @ 0x2060 */
int call_struct_byval()
{
 BigStruct v1; // [esp+0h] [ebp-98h] BYREF
 int i; // [esp+44h] [ebp-54h]
 BigStruct s; // [esp+48h] [ebp-50h] BYREF

 for ( i = 0; i < 16; ++i )
 s.data[i] = i;
 memcpy(&v1, &s, sizeof(v1));
 return param_struct_byval(v1);
}


/* Function: param_order_dep @ 0x20D0 */
int param_order_dep(int a, int b)
{
 return b + a;
}


/* Function: call_order_dep @ 0x20F0 */
int call_order_dep()
{
 return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x2130 */
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

 printf(asc_31D3);
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


/* Function: ret_basic_type @ 0x22A0 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x22B0 */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x22F0 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x2300 */
int call_ret_pointer()
{
 int arr[4]; // [esp+8h] [ebp-10h] BYREF

 arr[0] = 10;
 arr[1] = 20;
 arr[2] = 30;
 return *ret_pointer(arr);
}


/* Function: ret_small_struct @ 0x2350 */
SmallPoint *ret_small_struct(SmallPoint *retstr, int x, int y)
{
 SmallPoint *result; // eax

 result = retstr;
 retstr->x = x;
 retstr->y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x2370 */
int call_ret_small_struct()
{
 SmallPoint p; // [esp+18h] [ebp-10h] BYREF

 ret_small_struct(&p, 3, 4);
 return p.y + p.x;
}


/* Function: ret_large_struct @ 0x23B0 */
LargeData *ret_large_struct(LargeData *retstr, int seed)
{
 int i; // [esp+8h] [ebp-4h]

 for ( i = 0; i < 16; ++i )
 retstr->data[i] = i + seed;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x2400 */
int call_ret_large_struct()
{
 LargeData d; // [esp+10h] [ebp-48h] BYREF

 ret_large_struct(&d, 100);
 return d.data[15] + d.data[0];
}


/* Function: func_a @ 0x2440 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x2450 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x2460 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // eax

 result = func_a;
 if ( selector )
 return func_b;
 return result;
}


/* Function: call_ret_func_ptr @ 0x2490 */
int call_ret_func_ptr()
{
 func_ptr_t f; // [esp+10h] [ebp-8h]

 f = ret_func_ptr(1);
 return f(5);
}


/* Function: ret_opaque_handle @ 0x24D0 */
void * ret_opaque_handle(int type)
{
 void *result; // eax

 result = &ret_opaque_handle_handle2;
 if ( !type )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x2500 */
int call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x2530 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x2570 */
int call_ret_complex_expr()
{
 int r1; // [esp+20h] [ebp-8h]

 r1 = ret_complex_expr(5, 3, 10);
 return ret_complex_expr(3, 5, 10) + r1;
}


/* Function: ret_multi_branch @ 0x25E0 */
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


/* Function: call_ret_multi_branch @ 0x2660 */
int call_ret_multi_branch()
{
 int sum; // [esp+10h] [ebp-8h]
 int suma; // [esp+10h] [ebp-8h]

 sum = ret_multi_branch(0);
 suma = sum + ret_multi_branch(1);
 return suma + ret_multi_branch(2);
}


/* Function: ret_void @ 0x26D0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x26F0 */
int call_ret_void()
{
 int result; // [esp+10h] [ebp-8h] BYREF

 ret_void(7, &result);
 return result;
}


/* Function: test_return_values @ 0x2720 */
void test_return_values()
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

 printf(asc_32B0);
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


/* Function: main @ 0x2850 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x28DC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6044 */

/* FAILED to decompile: printf @ 0x6048 */

/* FAILED to decompile: __cxa_finalize @ 0x604C */

/* FAILED to decompile: strlen @ 0x6050 */

/* FAILED to decompile: memset @ 0x6054 */

/* Total functions decompiled: 85, failed: 5 */
