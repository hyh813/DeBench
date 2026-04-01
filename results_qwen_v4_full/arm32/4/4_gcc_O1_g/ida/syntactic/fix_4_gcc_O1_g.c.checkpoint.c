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
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Auto-injected struct definitions */
typedef struct {
    unsigned long long data[2];
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
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

typedef int (*func_ptr_t)(int);

/* External variables */
static char *s = "Calling Conventions Test";
static char *aCallL206 = "CALL-L2-01: %d\n";
static char *aCallL207 = "CALL-L2-02: %d\n";
static char *aCallL208 = "CALL-L2-03: %d\n";
static char *aCallL209 = "CALL-L2-04: %d\n";
static char *aCallL210 = "CALL-L2-05: %d\n";
static char *aCallL211 = "CALL-L2-06: %d\n";
static char *asc_11750 = "Parameter Passing Test";
static char *asc_11850 = "Return Values Test";
static char *aRetL101D = "RET-L1-01: %d\n";
static char *aRetL102D = "RET-L1-02: %d\n";
static char *aRetL103D = "RET-L1-03: %d\n";
static char *aRetL104D = "RET-L1-04: %d\n";
static char *aRetL201D = "RET-L2-01: %d\n";
static char *aRetL202D = "RET-L2-02: %d\n";
static char *aRetL301D = "RET-L3-01: %d\n";
static char *aRetL302D = "RET-L3-02: %d\n";
static char *aRetL303D = "RET-L3-03: %d\n";
static int handle1_1 = 100;
static int handle2_0 = 200;
static char unk_11974 = 'A';
static char unk_11978 = 'B';
static char unk_1197C = 'C';

/* External functions */
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern void *memcpy(void *dest, const void *src, size_t n);

/* Macros for 64-bit access */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*(((unsigned int*)&(x)) + 1))
#define __PAIR64__(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))
#define JUMPOUT(x) return 0

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_gcc_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103DC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103E8 @ 0x103E8 */
void sub_103E8()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */
int call_weak_fn()
{
 return 0;
}





/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: callback_func @ 0x10554 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: func_a @ 0x1055C */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x10564 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: cdecl_func @ 0x1056C */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x10574 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1057C */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x10584 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1058C */
int fastcall_func(int a, int b, int c)
{
 return a + b + c;
}


/* Function: call_fastcall @ 0x10598 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x105A0 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x105A8 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0x105C0 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x105C8 */
int mips_func(int a, int b, int c, int d)
{
 return a + b + c + d;
}


/* Function: call_mips @ 0x105D8 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x105E0 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x10600 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x10608 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return a + b + c + d + e;
}


/* Function: call_ms_x64 @ 0x10620 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x10628 */
int vectorcall_func(int a, int b, int c, int d)
{
 return a + b + c + d;
}


/* Function: call_vectorcall @ 0x10638 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x10640 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x10648 */
int varargs_func(int count, ...)
{
 int v2; // r3
 int result; // r0
 int v4; // kr00_4
 va_list args; // [sp+0h] [bp-20h]
 va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

 va_start(varg_r1, count);
 va_copy(args, varg_r1);
 if ( count <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 v4 = va_arg(args, unsigned int);
 result += v4;
 ++v2;
 }
 while ( count != v2 );
 return result;
}


/* Function: func_no_args @ 0x106D8 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x106E0 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x10710 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 size_t v6; // r0

 if ( s )
 v6 = strlen(s);
 else
 v6 = 0;
 return (int)((double)(int)(v6 + x) + d + (double)ll);
}


/* Function: func_struct_byval @ 0x10774 */
// local variable allocation has failed, the output may be wrong!
int func_struct_byval(LargeStruct s)
{
 int v1; // r12
 char *v2; // r3
 int result; // r0
 int v4; // r2
 char v5; // [sp+80h] [bp+70h] BYREF

 *(unsigned long long *)v1 = s.data[0];
 *(unsigned int *)(v1 + 8) = s.data[1];
 *(unsigned int *)(v1 + 12) = HIDWORD(s.data[1]);
 v2 = (char *)v1;
 result = 0;
 do
 {
 v4 = *(unsigned int *)v2;
 v2 += 8;
 result += v4;
 }
 while ( v2 != &v5 );
 return result;
}


/* Function: func_struct_byptr @ 0x107A8 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x107C0 */
void test_calling_conventions()
{
 int v0; // r0
 LargeStruct *p_large; // r1
 int v2; // r2
 unsigned int v3; // r0
 unsigned long long v4; // kr00_8
 char *v5; // r3
 int v6; // r2
 int v7; // r1
 LargeStruct large; // [sp+8h] [bp-110h] BYREF
 unsigned char dest[128]; // [sp+88h] [bp-90h] BYREF
 char v10; // [sp+108h] [bp-10h] BYREF

 puts(s);
 printf(1, "CALL-L1-01: %d\n", 15);
 printf(1, "CALL-L1-02: %d\n", 50);
 printf(1, "CALL-L1-03: %d\n", 6);
 printf(1, "CALL-L1-04: %d\n", 15);
 printf(1, "CALL-L1-05: %d\n", 15);
 printf(1, "CALL-L1-06: %d\n", 100);
 printf(1, "CALL-L1-07: %d\n", 21);
 printf(1, "CALL-L1-08: %d\n", 15);
 printf(1, "CALL-L1-09: %d\n", 10);
 printf(1, "CALL-L1-10: %d\n", 33);
 v0 = varargs_func(5, 1, 2, 3, 4, 5);
 printf(1, aCallL206, v0);
 printf(1, aCallL207, 42);
 printf(1, aCallL208, 36);
 printf(1, aCallL209, 117);
 p_large = &large;
 v2 = 1;
 v3 = 0;
 do
 {
 LODWORD(p_large->data[0]) = v2;
 HIDWORD(p_large->data[0]) = v3;
 p_large = (LargeStruct *)((char *)p_large + 8);
 v4 = __PAIR64__(v3, v2++) + 1;
 v3 = HIDWORD(v4);
 }
 while ( ((unsigned int)v4 - 17) | HIDWORD(v4) );
 memcpy(dest, &large, sizeof(dest));
 v5 = dest;
 v6 = 0;
 do
 {
 v7 = *(unsigned int *)v5;
 v5 += 8;
 v6 += v7;
 }
 while ( &v10 != v5 );
 printf(1, aCallL210, v6);
 printf(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x109CC */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x109D4 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x109DC */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x109F0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x109F8 */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x10A00 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x10A08 */
int param_string(const char *str)
{
 return *(unsigned char *)str + *((unsigned char *)str + 1);
}


/* Function: call_string_param @ 0x10A18 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x10A20 */
int param_ptr_array(char **arr, int n)
{
 char **v2; // r3
 char **v3; // r1
 int result; // r0
 char *v5; // t1

 if ( n <= 0 )
 return 0;
 v2 = arr - 1;
 v3 = &arr[n - 1];
 result = 0;
 do
 {
 v5 = v2[1];
 ++v2;
 result += (unsigned char)*v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: call_ptr_array @ 0x10A54 */
int call_ptr_array()
{
 char *strs[3]; // [sp+0h] [bp-18h] BYREF

 strs[0] = (char *)&unk_11974;
 strs[1] = (char *)&unk_11978;
 strs[2] = (char *)&unk_1197C;
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x10AB4 */
int param_varargs(int count, ...)
{
 int v2; // r3
 int result; // r0
 int v4; // kr00_4
 va_list args; // [sp+0h] [bp-20h]
 va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

 va_start(varg_r1, count);
 va_copy(args, varg_r1);
 if ( count <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 v4 = va_arg(args, unsigned int);
 result += v4;
 ++v2;
 }
 while ( count != v2 );
 return result;
}


/* Function: call_varargs_param @ 0x10B44 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x10B70 */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x10B88 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x10BA0 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp )
 return -1;
 if ( !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x10BD8 */
int call_double_ptr()
{
 int result; // r0
 int val; // [sp+4h] [bp-14h] BYREF
 int *ptr; // [sp+8h] [bp-10h] BYREF

 val = 10;
 ptr = &val;
 param_double_ptr(&ptr, 20);
 result = val;
 if ( !ptr )
 return val + 1;
 return result;
}


/* Function: param_complex_cast @ 0x10C44 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x10C6C */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x10C78 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x10C94 */
int call_struct_byval()
{
 BigStruct *p_s; // r2
 int i; // r3
 BigStruct s; // [sp+4h] [bp-4Ch] BYREF

 p_s = &s;
 for ( i = 0; i != 16; ++i )
 {
 p_s->data[0] = i;
 p_s = (BigStruct *)((char *)p_s + 4);
 }
 return s.data[15] + s.data[0];
}


/* Function: param_order_dep @ 0x10CF8 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x10D00 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x10D08 */
void test_parameter_passing()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0

 puts(asc_11750);
 printf(1, "PARAM-L1-01: %d\n", 15);
 v0 = call_by_value_ptr();
 printf(1, "PARAM-L1-02: %d\n", v0);
 printf(1, "PARAM-L2-01: %d\n", 4);
 printf(1, "PARAM-L2-02: %d\n", 173);
 v1 = call_ptr_array();
 printf(1, "PARAM-L2-03: %d\n", v1);
 v2 = call_varargs_param();
 printf(1, "PARAM-L2-04: %d\n", v2);
 v3 = call_func_ptr_param();
 printf(1, "PARAM-L3-01: %d\n", v3);
 v4 = call_double_ptr();
 printf(1, "PARAM-L3-02: %d\n", v4);
 v5 = call_complex_cast();
 printf(1, "PARAM-L3-03: %d\n", v5);
 v6 = call_struct_byval();
 printf(1, "PARAM-L3-04: %d\n", v6);
 printf(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x10E14 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x10E1C */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x10E24 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x10E2C */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x10E34 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 retstr->x = x;
 retstr->y = y;
 return retstr;
}


/* Function: call_ret_small_struct @ 0x10E40 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x10E48 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *p_d; // r3
 int v3; // r1
 int v4; // r2
 int v5; // r3
 int v6; // r1
 int v7; // r2
 int v8; // r3
 int v9; // r1
 int v10; // r2
 int v11; // r3
 int v12; // r1
 int v13; // r2
 int v14; // r3
 LargeData d; // [sp+4h] [bp-4Ch] BYREF
 int v16; // [sp+44h] [bp-Ch] BYREF

 p_d = &d;
 do
 {
 p_d->data[0] = seed;
 p_d = (LargeData *)((char *)p_d + 4);
 ++seed;
 }
 while ( p_d != (LargeData *)&v16 );
 v3 = d.data[1];
 v4 = d.data[2];
 v5 = d.data[3];
 retstr->data[0] = d.data[0];
 retstr->data[1] = v3;
 retstr->data[2] = v4;
 retstr->data[3] = v5;
 v6 = d.data[5];
 v7 = d.data[6];
 v8 = d.data[7];
 retstr->data[4] = d.data[4];
 retstr->data[5] = v6;
 retstr->data[6] = v7;
 retstr->data[7] = v8;
 v9 = d.data[9];
 v10 = d.data[10];
 v11 = d.data[11];
 retstr->data[8] = d.data[8];
 retstr->data[9] = v9;
 retstr->data[10] = v10;
 retstr->data[11] = v11;
 v12 = d.data[13];
 v13 = d.data[14];
 v14 = d.data[15];
 retstr->data[12] = d.data[12];
 retstr->data[13] = v12;
 retstr->data[14] = v13;
 retstr->data[15] = v14;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x10ED0 */
int call_ret_large_struct()
{
 LargeData d; // [sp+4h] [bp-4Ch] BYREF

 ret_large_struct(&d, 100);
 return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x10F28 */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x10F48 */
int call_ret_func_ptr()
{
 return func_b(5);
}


/* Function: ret_opaque_handle @ 0x10F58 */
void * ret_opaque_handle(int type)
{
 bool v1; // zf
 void *result; // r0

 v1 = type == 0;
 result = &handle1_1;
 if ( !v1 )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x10F70 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x10F80 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x10F90 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x10F98 */
int ret_multi_branch(int op)
{
 if ( op == 1 )
 return 20;
 if ( op == 2 )
 return 30;
 if ( op )
 return -1;
 return 10;
}


/* Function: call_ret_multi_branch @ 0x10FC8 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x10FD0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x10FDC */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x10FE4 */
void test_return_values()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0

 puts(asc_11850);
 printf(1, aRetL101D, 42);
 v0 = call_ret_pointer();
 printf(1, aRetL102D, v0);
 v1 = call_ret_small_struct();
 printf(1, aRetL103D, v1);
 v2 = call_ret_large_struct();
 printf(1, aRetL104D, v2);
 v3 = call_ret_func_ptr();
 printf(1, aRetL201D, v3);
 printf(1, aRetL202D, handle1_1);
 printf(1, aRetL301D, 40);
 printf(1, aRetL302D, 60);
 printf(1, aRetL303D, 21);
}


/* Function: main @ 0x110C4 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __aeabi_drsub @ 0x110DC */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x110E4 */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11394 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11230);
 return result;
}


/* Function: __floatsidf @ 0x113B8 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11230);
 return result;
}


/* Function: __extendsfdf2 @ 0x113E0 */
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
 JUMPOUT(0x11230);
 }
 return result;
}


/* Function: __floatundidf @ 0x11428 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11458);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x1149C */
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


/* Function: .term_proc @ 0x114F8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x22058 */

/* FAILED to decompile: __imp_strlen @ 0x2205C */

/* FAILED to decompile: __imp__printf @ 0x22060 */

/* FAILED to decompile: __imp_abort @ 0x22064 */

/* FAILED to decompile: __imp___libc_start_main @ 0x22068 */

/* FAILED to decompile: __imp_memcpy @ 0x2206C */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x22070 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x22074 */

/* Total functions decompiled: 89, failed: 8 */
