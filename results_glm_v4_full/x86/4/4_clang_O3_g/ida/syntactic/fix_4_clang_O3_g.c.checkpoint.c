/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t already defined in system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Macro definitions */
#define __return_ptr
#define LODWORD(x) ((uint32_t)((uint64_t)(x) & 0xFFFFFFFF))

/* Type definitions */
typedef int (*func_ptr_t)(int);

/* Struct definitions */
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

/* External function declarations */

/* Global variables */
int ret_opaque_handle_handle1[1] = {0};
int ret_opaque_handle_handle2[1] = {0};

/* String constants */
const char asc_2352[] = "Calling Conventions Test";
const char asc_2373[] = "Parameter Passing Test";
const char asc_2394[] = "Return Values Test";
const char aCallL206[] = "CALL-L2-06: %d\n";
const char aCallL207[] = "CALL-L2-07: %d\n";
const char aCallL208[] = "CALL-L2-08: %d\n";
const char aCallL209[] = "CALL-L2-09: %d\n";
const char aCallL210[] = "CALL-L2-10: %d\n";
const char aCallL211[] = "CALL-L2-11: %d\n";
const char aRetL101D[] = "RET-L1-01: %d\n";
const char aRetL102D[] = "RET-L1-02: %d\n";
const char aRetL103D[] = "RET-L1-03: %d\n";
const char aRetL104D[] = "RET-L1-04: %d\n";
const char aRetL201D[] = "RET-L2-01: %d\n";
const char aRetL202D[] = "RET-L2-02: %p\n";
const char aRetL301D[] = "RET-L3-01: %d\n";
const char aRetL302D[] = "RET-L3-02: %d\n";
const char aRetL303D[] = "RET-L3-03: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_clang_O3_g
 * Processor: pc
 */

/* Function: .init_proc removed - CRT startup code */


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 /* Invalid inline asm removed - would cause compilation error */
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
 return a + b;
}


/* Function: call_cdecl @ 0x1220 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1230 */
int stdcall_func(int a, int b)
{
 return a * b;
}


/* Function: call_stdcall @ 0x1240 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1250 */
int fastcall_func(int a, int b, int c)
{
 return c + a + b;
}


/* Function: call_fastcall @ 0x1260 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1270 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1280 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x12A0 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x12B0 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_mips @ 0x12D0 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x12E0 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x1300 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1310 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_ms_x64 @ 0x1330 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1340 */
int vectorcall_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_vectorcall @ 0x1360 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1370 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1380 */
int varargs_func(int count, ...)
{
 va_list v1; // edx
 int v2; // ecx
 int result; // eax
 int v4; // esi
 va_list v5; // edi
 va_list v6; // edx
 va_list va; // [esp+14h] [ebp+8h] BYREF

 va_start(va, count);
 if ( count <= 0 )
 return 0;
 va_copy(v1, va);
 v2 = count & 3;
 if ( (unsigned int)(count - 1) >= 3 )
 {
 v4 = count & 0x7FFFFFFC;
 result = 0;
 va_copy(v5, va);
 do
 {
 v1 = v5 + 16;
 result += *((unsigned int *)v5 + 3) + *((unsigned int *)v5 + 2) + *((unsigned int *)v5 + 1) + *(unsigned int *)v5;
 v5 += 16;
 v4 -= 4;
 }
 while ( v4 );
 }
 else
 {
 result = 0;
 }
 if ( (count & 3) != 0 )
 {
 v6 = v1 + 4;
 do
 {
 result += *((unsigned int *)v6 - 1);
 v6 += 4;
 --v2;
 }
 while ( v2 );
 }
 return result;
}


/* Function: func_no_args @ 0x1420 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1430 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x1460 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 long double v4; // fst7
 size_t v5; // eax

 v4 = d;
 if ( s )
 {
 v5 = strlen(s);
 v4 = d;
 }
 else
 {
 v5 = 0;
 }
 return (int)(v4 + (long double)(int)(x + v5) + (long double)ll);
}


/* Function: func_struct_byval @ 0x14F0 */
int func_struct_byval(LargeStruct s)
{
 return LODWORD(s.data[15])
 + LODWORD(s.data[14])
 + LODWORD(s.data[13])
 + LODWORD(s.data[12])
 + LODWORD(s.data[11])
 + LODWORD(s.data[10])
 + LODWORD(s.data[9])
 + LODWORD(s.data[8])
 + LODWORD(s.data[7])
 + LODWORD(s.data[6])
 + LODWORD(s.data[5])
 + LODWORD(s.data[4])
 + LODWORD(s.data[3])
 + LODWORD(s.data[2])
 + LODWORD(s.data[0])
 + LODWORD(s.data[1]);
}


/* Function: func_struct_byptr @ 0x1540 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x1560 */
void test_calling_conventions()
{
 int v0; // eax

 puts(asc_2352);
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
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x1700 */
int call_array_decay()
{
 return 4;
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
 int v2; // esi
 int result; // eax
 char **v4; // edx
 int v5; // esi

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) >= 3 )
 {
 v2 = 0;
 result = 0;
 do
 {
 result += *arr[v2] + *arr[v2 + 1] + *arr[v2 + 2] + *arr[v2 + 3];
 v2 += 4;
 }
 while ( (n & 0x7FFFFFFC) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (n & 3) != 0 )
 {
 v4 = &arr[v2];
 v5 = 0;
 do
 result += *v4[v5++];
 while ( (n & 3) != v5 );
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
 va_list v1; // edx
 int v2; // ecx
 int result; // eax
 int v4; // esi
 va_list v5; // edi
 va_list v6; // edx
 va_list va; // [esp+14h] [ebp+8h] BYREF

 va_start(va, count);
 if ( count <= 0 )
 return 0;
 va_copy(v1, va);
 v2 = count & 3;
 if ( (unsigned int)(count - 1) >= 3 )
 {
 v4 = count & 0x7FFFFFFC;
 result = 0;
 va_copy(v5, va);
 do
 {
 v1 = v5 + 16;
 result += *((unsigned int *)v5 + 3) + *((unsigned int *)v5 + 2) + *((unsigned int *)v5 + 1) + *(unsigned int *)v5;
 v5 += 16;
 v4 -= 4;
 }
 while ( v4 );
 }
 else
 {
 result = 0;
 }
 if ( (count & 3) != 0 )
 {
 v6 = v1 + 4;
 do
 {
 result += *((unsigned int *)v6 - 1);
 v6 += 4;
 --v2;
 }
 while ( v2 );
 }
 return result;
}


/* Function: call_varargs_param @ 0x1870 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x18A0 */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x18D0 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x18E0 */
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


/* Function: call_double_ptr @ 0x1910 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1920 */
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


/* Function: call_complex_cast @ 0x1940 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1950 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1960 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1970 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x1980 */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x1990 */
void test_parameter_passing()
{
 int v0; // eax

 puts(asc_2373);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n");
 v0 = param_varargs(4, 10, 20, 30, 40);
 printf("PARAM-L2-04: %d\n", v0);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x1A90 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x1AA0 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1AB0 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1AC0 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1AD0 */
SmallPoint * ret_small_struct(SmallPoint *__return_ptr retstr, int x, int y)
{
 SmallPoint *result; // eax

 result = retstr;
 retstr->x = x;
 retstr->y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1AF0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1B00 */
LargeData *ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
 LargeData *result; // eax

 result = retstr;
 retstr->data[0] = seed;
 retstr->data[1] = seed + 1;
 retstr->data[2] = seed + 2;
 retstr->data[3] = seed + 3;
 retstr->data[4] = seed + 4;
 retstr->data[5] = seed + 5;
 retstr->data[6] = seed + 6;
 retstr->data[7] = seed + 7;
 retstr->data[8] = seed + 8;
 retstr->data[9] = seed + 9;
 retstr->data[10] = seed + 10;
 retstr->data[11] = seed + 11;
 retstr->data[12] = seed + 12;
 retstr->data[13] = seed + 13;
 retstr->data[14] = seed + 14;
 retstr->data[15] = seed + 15;
 return result;
}


/* Function: call_ret_large_struct @ 0x1B70 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x1B80 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x1B90 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x1BA0 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // eax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1BD0 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1BE0 */
int ** ret_opaque_handle(int type)
{
 int **result; // eax

 result = (int **)&ret_opaque_handle_handle2;
 if ( !type )
 return ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1C10 */
int *call_ret_opaque()
{
 return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0x1C30 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C50 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C60 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 3 )
 return 10 * op + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1C80 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1C90 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1CA0 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1CB0 */
void test_return_values()
{
 puts(asc_2394);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, ret_opaque_handle_handle1[0]);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
}


/* Function: main @ 0x1DA0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 puts(asc_2394);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, ret_opaque_handle_handle1[0]);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc removed - CRT shutdown code */


/* FAILED to decompile: __libc_start_main @ 0x4044 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: __cxa_finalize @ 0x404C */

/* FAILED to decompile: puts @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4054 */

/* Total functions decompiled: 84, failed: 5 */
