/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_gcc_O3_g
 * Processor: arm
 */

#include <stdarg.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

/* Macros for accessing high/low 32 bits of a 64-bit value */
#define LODWORD(x) (*((unsigned int*)&(x)))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))

/* Helper macro for jump placeholders */
#define JUMPOUT(x) do {} while(0)

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

typedef int (*func_ptr_t)(int);

/* String constants and global variables */
const char *s = "Calling Conventions Test";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L3-01: %d\n";
const char *aCallL208 = "CALL-L3-02: %d\n";
const char *aCallL209 = "CALL-L3-03: %d\n";
const char *aCallL210 = "CALL-L3-04: %d\n";
const char *aCallL211 = "CALL-L3-05: %d\n";
const char *asc_115F8 = "Parameter Passing Test";
const char *asc_116F8 = "Return Values Test";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";
int handle1_1 = 42;
int handle2_0 = 100;

/* Function: .init_proc @ 0x103B8 */
int init_proc()
{
 return call_weak_fn();
}

/* CRT stub function call_weak_fn removed by preprocessor */
int call_weak_fn()
{
 return 0;
}


/* Function: sub_103C4 @ 0x103C4 */
void sub_103C4()
{
 JUMPOUT(0);
}


/* Function: main @ 0x1042C */
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



/* Function: func_a @ 0x1053C */
int func_a(int x)
{
 return x + 10;
}


/* Function: param_varargs_0 @ 0x10544 */
int param_varargs_0(int count, ...)
{
 int varg_r1; // [sp+14h] [bp-Ch]
 int varg_r2; // [sp+18h] [bp-8h]
 int varg_r3; // [sp+1Ch] [bp-4h]
 int v5; // [sp+20h] [bp+0h]
 va_list va; // [sp+24h] [bp+4h] BYREF

 va_start(va, count);
 varg_r1 = va_arg(va, unsigned int);
 varg_r2 = va_arg(va, unsigned int);
 varg_r3 = va_arg(va, unsigned int);
 v5 = va_arg(va, unsigned int);
 return varg_r1 + varg_r2 + varg_r3 + v5;
}


/* Function: varargs_func_0 @ 0x105B4 */
int varargs_func_0(int count, ...)
{
 int varg_r1; // [sp+14h] [bp-Ch]
 int varg_r2; // [sp+18h] [bp-8h]
 int varg_r3; // [sp+1Ch] [bp-4h]
 int v5; // [sp+20h] [bp+0h]
 int v6; // [sp+24h] [bp+4h]
 va_list va; // [sp+28h] [bp+8h] BYREF

 va_start(va, count);
 varg_r1 = va_arg(va, unsigned int);
 varg_r2 = va_arg(va, unsigned int);
 varg_r3 = va_arg(va, unsigned int);
 v5 = va_arg(va, unsigned int);
 v6 = va_arg(va, unsigned int);
 return varg_r1 + varg_r2 + varg_r3 + v5 + v6;
}


/* Function: func_b @ 0x10628 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x10630 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x10638 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x10640 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x10648 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x10650 */
int fastcall_func(int a, int b, int c)
{
 return a + b + c;
}


/* Function: call_fastcall @ 0x1065C */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x10664 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1066C */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0x10684 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1068C */
int mips_func(int a, int b, int c, int d)
{
 return a + b + c + d;
}


/* Function: call_mips @ 0x1069C */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x106A4 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x106C4 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x106CC */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x106E4 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x106EC */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x106FC */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x10704 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1070C */
int varargs_func(int count, ...)
{
 int v3; // r3
 int result; // r0
 int v5; // t1
 va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

 va_start(varg_r1, count);
 if ( count <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = va_arg(varg_r1, int);
 ++v3;
 result += v5;
 }
 while ( count != v3 );
 return result;
}


/* Function: func_no_args @ 0x10790 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x10798 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x107C0 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 int v4; // r4

 v4 = x;
 if ( s )
 v4 = x + strlen(s);
 return (int)((double)v4 + d + (double)ll);
}


/* Function: func_struct_byval @ 0x10824 */
int func_struct_byval(LargeStruct s)
{
 return LODWORD(s.data[0])
 + LODWORD(s.data[1])
 + LODWORD(s.data[2])
 + LODWORD(s.data[3])
 + LODWORD(s.data[4])
 + LODWORD(s.data[5])
 + LODWORD(s.data[6])
 + LODWORD(s.data[7])
 + LODWORD(s.data[8])
 + LODWORD(s.data[9])
 + LODWORD(s.data[10])
 + LODWORD(s.data[11])
 + LODWORD(s.data[12])
 + LODWORD(s.data[13])
 + LODWORD(s.data[14])
 + LODWORD(s.data[15]);
}


/* Function: func_struct_byptr @ 0x108B8 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x108D0 */
void test_calling_conventions()
{
 int v0; // r0

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
 v0 = varargs_func_0(5, 1, 2, 3, 4, 5);
 printf(aCallL206, v0);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 printf(aCallL210, 136);
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x10A4C */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x10A54 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x10A5C */
int param_by_value_ptr(int *p)
{
 int result; // r0

 result = 1;
 *p *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0x10A74 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x10A7C */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x10A84 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x10A8C */
int param_string(const char *str)
{
 return *(unsigned char *)str + *((unsigned char *)str + 1);
}


/* Function: call_string_param @ 0x10A9C */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x10AA4 */
int param_ptr_array(char **arr, int n)
{
 int result; // r0
 char **v4; // r3
 char **v5; // r1
 char *v6; // t1

 result = 0;
 if ( n > 0 )
 {
 v4 = arr - 1;
 v5 = &v4[n];
 do
 {
 v6 = v4[1];
 ++v4;
 result += (unsigned char)*v6;
 }
 while ( v5 != v4 );
 }
 return result;
}


/* Function: call_ptr_array @ 0x10AD4 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x10ADC */
int param_varargs(int count, ...)
{
 int v3; // r3
 int result; // r0
 int v5; // t1
 va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

 va_start(varg_r1, count);
 if ( count <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = va_arg(varg_r1, int);
 ++v3;
 result += v5;
 }
 while ( count != v3 );
 return result;
}


/* Function: call_varargs_param @ 0x10B60 */
int call_varargs_param()
{
 return param_varargs_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x10B8C */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x10BA4 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x10BAC */
int param_double_ptr(int **pp, int new_val)
{
 int result; // r0

 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 result = 1;
 *pp = 0;
 return result;
}


/* Function: call_double_ptr @ 0x10BDC */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x10BE4 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *((unsigned int *)p + 1) + *(unsigned int *)p;
 return -1;
}


/* Function: call_complex_cast @ 0x10C08 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x10C14 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x10C30 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x10C38 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x10C40 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x10C48 */
void test_parameter_passing()
{
 int v0; // r0

 puts(asc_115F8);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v0 = param_varargs_0(4, 10, 20, 30, 40);
 printf("PARAM-L2-04: %d\n", v0);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 printf("PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x10D60 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x10D68 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x10D70 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x10D78 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x10D80 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 retstr->x = x;
 retstr->y = y;
 return retstr;
}


/* Function: call_ret_small_struct @ 0x10D88 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x10D90 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
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
 return retstr;
}


/* Function: call_ret_large_struct @ 0x10E0C */
int call_ret_large_struct()
{
 return 215;
}


/* Function: ret_func_ptr @ 0x10E14 */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x10E34 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x10E3C */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x10E58 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x10E68 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x10E78 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x10E80 */
int ret_multi_branch(int op)
{
 if ( (unsigned int)op > 2 )
 return -1;
 else
 return 10 * (op + 1);
}


/* Function: call_ret_multi_branch @ 0x10E98 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x10EA0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x10EAC */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x10EB4 */
void test_return_values()
{
 puts(asc_116F8);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, handle1_1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
}


/* Function: __aeabi_drsub @ 0x10F84 */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x10F8C */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1123C */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x110D8);
 return result;
}


/* Function: __floatsidf @ 0x11260 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x110D8);
 return result;
}


/* Function: __extendsfdf2 @ 0x11288 */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 JUMPOUT(0x110D8);
 }
 return result;
}


/* Function: __floatundidf @ 0x112D0 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11300);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x11344 */
unsigned int _fixdfsi(unsigned int a1, int a2)
{
 int v2; // r2
 bool v3; // cf
 int v4; // r2
 unsigned int result; // r0

 v2 = 2 * a2 + 0x200000;
 if ( (unsigned int)(2 * a2) >= 0xFFE00000 )
 {
 if ( a1 | (a2 << 12) )
 return 0;
 goto LABEL_10;
 }
 if ( 2 * a2 + 0x200000 >= 0 )
 return 0;
 v3 = (unsigned int)(v2 >> 21) <= 0xFFFFFC1F;
 v4 = -993 - (v2 >> 21);
 if ( v4 == 0 || !v3 )
 {
LABEL_10:
 result = a2 & 0x80000000;
 if ( a2 >= 0 )
 return 0x7FFFFFFF;
 return result;
 }
 result = ((a2 << 11) | 0x80000000 | (a1 >> 21)) >> v4;
 if ( a2 < 0 )
 return -result;
 return result;
}


/* Function: .term_proc @ 0x113A0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x22050 */

/* FAILED to decompile: __imp_strlen @ 0x22054 */

/* FAILED to decompile: __imp___printf_chk @ 0x22058 */

/* FAILED to decompile: __imp_abort @ 0x2205C */

/* FAILED to decompile: __imp___libc_start_main @ 0x22060 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x22064 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x22068 */

/* Total functions decompiled: 90, failed: 7 */
