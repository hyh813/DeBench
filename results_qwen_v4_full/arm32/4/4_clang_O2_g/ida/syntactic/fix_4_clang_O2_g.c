/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Required type definitions */
#include <stdarg.h>
#include <stdbool.h>

#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
#define LODWORD(x) (*((unsigned int*)&(x)))
#define JUMPOUT(x) return

typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int data[16];
} BigStruct;

typedef int (*func_ptr_t)(int);

int *ret_opaque_handle_handle1[1] = {0};
int *ret_opaque_handle_handle2[1] = {0};
static char asc_170A[] = "=== Calling Conventions Test ===";
static char aCallL206[] = "CALL-L2-01: %d\n";
static char aCallL207[] = "CALL-L2-02: %d\n";
static char aCallL208[] = "CALL-L2-03: %d\n";
static char aCallL209[] = "CALL-L2-04: %d\n";
static char aCallL210[] = "CALL-L2-05: %d\n";
static char aCallL211[] = "CALL-L2-06: %d\n";
static char asc_172B[] = "=== Parameter Passing Test ===";
static char asc_174C[] = "=== Return Values Test ===";
static char aRetL101D[] = "RET-L1-01: %d\n";
static char aRetL102D[] = "RET-L1-02: %d\n";
static char aRetL103D[] = "RET-L1-03: %d\n";
static char aRetL104D[] = "RET-L1-04: %d\n";
static char aRetL201D[] = "RET-L2-01: %d\n";
static char aRetL202D[] = "RET-L2-02: %d\n";
static char aRetL301D[] = "RET-L3-01: %d\n";
static char aRetL302D[] = "RET-L3-02: %d\n";
static char aRetL303D[] = "RET-L3-03: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_clang_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x3E4 */
int call_weak_fn()
{
 return 0;
}

/* Function: .init_proc @ 0x3E4 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_3F0 @ 0x3F0 */
void sub_3F0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x5C0 */
int cdecl_func(int a, int b)
{
 return b + a;
}


/* Function: call_cdecl @ 0x5C8 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x5D0 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x5DC */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x5E4 */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x5F0 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x5F8 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x600 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return b + a + c + d + e;
}


/* Function: call_arm_aapcs @ 0x618 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x620 */
int mips_func(int a, int b, int c, int d)
{
 return b + a + c + d;
}


/* Function: call_mips @ 0x630 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x638 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return b + a + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x658 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x660 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return b + a + c + d + e;
}


/* Function: call_ms_x64 @ 0x678 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x680 */
int vectorcall_func(int a, int b, int c, int d)
{
 return b + a + c + d;
}


/* Function: call_vectorcall @ 0x690 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x698 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x6A0 */
int varargs_func(int count, int a2, ...)
{
 va_list v2; // r2
 int v3; // r1
 int v4; // r3
 va_list va; // [sp+8h] [bp-8h] BYREF

 va_start(va, a2);
 if ( count < 1 )
 return 0;
 va_copy(v2, va);
 v3 = 0;
 do
 {
 --count;
 v4 = *((unsigned int *)v2.__ap - 1);
 v2.__ap = (char *)v2.__ap + 4;
 v3 += v4;
 }
 while ( count );
 return v3;
}


/* Function: func_no_args @ 0x6F0 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x6F8 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return b + a + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x728 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 unsigned int v4; // r6
 unsigned int v5; // r7
 size_t v7; // r0
 union { double d; unsigned int i[2]; } u;

 u.d = d;
 v5 = u.i[0];
 v4 = u.i[1];
 if ( s )
 v7 = strlen(s);
 else
 v7 = 0;
 return (int)((double)(int)(v7 + x) + u.d + (double)ll);
}


/* Function: func_struct_byval @ 0x7A0 */
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
 + LODWORD(s.data[1])
 + LODWORD(s.data[0]);
}


/* Function: func_struct_byptr @ 0x824 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x838 */
void test_calling_conventions()
{
 int v0; // r0

 puts(asc_170A);
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


/* Function: param_by_value_int @ 0x9BC */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x9C4 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x9CC */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x9E0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x9E8 */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x9F0 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x9F8 */
int param_string(const char *str)
{
 return *((unsigned char *)str + 1) + *(unsigned char *)str;
}


/* Function: call_string_param @ 0xA08 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xA10 */
int param_ptr_array(char **arr, int n)
{
 int result; // r0
 unsigned char *v4; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = (unsigned char *)*arr++;
 --n;
 result += *v4;
 }
 while ( n );
 return result;
}


/* Function: call_ptr_array @ 0xA40 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xA48 */
int param_varargs(int count, int a2, ...)
{
 va_list v2; // r2
 int v3; // r1
 int v4; // r3
 va_list va; // [sp+8h] [bp-8h] BYREF

 va_start(va, a2);
 if ( count < 1 )
 return 0;
 va_copy(v2, va);
 v3 = 0;
 do
 {
 --count;
 v4 = *((unsigned int *)v2.__ap - 1);
 v2.__ap = (char *)v2.__ap + 4;
 v3 += v4;
 }
 while ( count );
 return v3;
}


/* Function: call_varargs_param @ 0xA98 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xAC8 */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0xAE8 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0xAF0 */
int param_double_ptr(int **pp, int new_val)
{
 int *v2; // r3
 int v3; // r1
 int result; // r0
 bool v5; // zf

 result = -1;
 v5 = pp == 0;
 if ( pp )
 {
 v2 = *pp;
 v5 = *pp == 0;
 }
 if ( !v5 )
 {
 *v2 = new_val;
 *pp = 0;
 return 1;
 }
 return result;
}


/* Function: call_double_ptr @ 0xB18 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0xB20 */
int param_complex_cast(void *p, int type)
{
 if ( type == 1 )
 return *((unsigned int *)p + 1) + *(unsigned int *)p;
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: call_complex_cast @ 0xB54 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0xB60 */
// local variable allocation has failed, the output may be wrong!
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0xB6C */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0xB74 */
int param_order_dep(int a, int b)
{
 return b + a;
}


/* Function: call_order_dep @ 0xB7C */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0xB84 */
void test_parameter_passing()
{
 int v0; // r0

 puts(asc_172B);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
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


/* Function: ret_basic_type @ 0xCA0 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0xCA8 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0xCB0 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0xCB8 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0xCC0 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 retstr->x = x;
 retstr->y = y;
 return retstr;
}


/* Function: call_ret_small_struct @ 0xCC8 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0xCD0 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 retstr->data[12] = seed + 12;
 retstr->data[15] = seed + 15;
 retstr->data[8] = seed + 8;
 retstr->data[9] = seed + 9;
 retstr->data[10] = seed + 10;
 retstr->data[11] = seed + 11;
 retstr->data[13] = seed + 13;
 retstr->data[14] = seed + 14;
 retstr->data[0] = seed;
 retstr->data[1] = seed + 1;
 retstr->data[2] = seed + 2;
 retstr->data[3] = seed + 3;
 retstr->data[4] = seed + 4;
 retstr->data[5] = seed + 5;
 retstr->data[6] = seed + 6;
 retstr->data[7] = seed + 7;
 return retstr;
}


/* Function: call_ret_large_struct @ 0xD44 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0xD4C */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0xD54 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0xD5C */
func_ptr_t ret_func_ptr(int selector)
{
 int (*v1)(int); // r1

 v1 = func_b;
 if ( !selector )
 return func_a;
 return v1;
}


/* Function: call_ret_func_ptr @ 0xD84 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0xD8C */
void * ret_opaque_handle(int type)
{
 void *v1; // r1

 v1 = &ret_opaque_handle_handle2;
 if ( !type )
 return ret_opaque_handle_handle1;
 return v1;
}


/* Function: call_ret_opaque @ 0xDB4 */
int *call_ret_opaque()
{
 return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0xDC4 */
int ret_complex_expr(int x, int y, int z)
{
 int v3; // r3

 v3 = z + 10;
 if ( x > y )
 return 2 * z;
 return v3;
}


/* Function: call_ret_complex_expr @ 0xDD8 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0xDE0 */
int ret_multi_branch(int op)
{
 int v1; // r1

 v1 = -1;
 if ( (unsigned int)op < 3 )
 return 10 * op + 10;
 return v1;
}


/* Function: call_ret_multi_branch @ 0xDFC */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0xE04 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0xE10 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0xE18 */
void test_return_values()
{
 puts(asc_174C);
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


/* Function: main @ 0xEEC */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __aeabi_drsub @ 0xF08 */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0xF10 */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11C0 */
int _floatunsidf(int result)
{
 if ( result )
 return 0;
 return result;
}


/* Function: __floatsidf @ 0x11E4 */
int _floatsidf(int result)
{
 if ( result )
 return 0;
 return result;
}


/* Function: __extendsfdf2 @ 0x120C */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 int v4;
 int v5;
 int result;

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 return 0;
 }
 return result;
}


/* Function: __floatundidf @ 0x1254 */
int _floatundidf(long long a1)
{
 if ( a1 )
 return 0;
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x12C8 */
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


/* Function: .term_proc @ 0x1324 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x1208C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12090 */

/* FAILED to decompile: __imp_printf @ 0x12094 */

/* FAILED to decompile: __imp_puts @ 0x12098 */

/* FAILED to decompile: __imp_strlen @ 0x1209C */

/* FAILED to decompile: __imp_abort @ 0x120A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120A8 */

/* Total functions decompiled: 88, failed: 7 */
