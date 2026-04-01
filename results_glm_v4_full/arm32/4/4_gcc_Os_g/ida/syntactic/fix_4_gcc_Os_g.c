/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_gcc_Os_g
 * Processor: arm
 */

#include <stdarg.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

/* Forward declarations for glibc functions */
int ___printf_chk(int flag, const char *format, ...);

typedef struct {
    int data[32];
} LargeStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef int (*func_ptr_t)(int);

/* Helper macros for accessing high/low words of 64-bit values */
#define LODWORD(x) (*(((unsigned int*)&(x))))
#define HIDWORD(x) (*(((unsigned int*)&(x))+1))
#define SHIDWORD(x) (*(((unsigned int*)&(x))+1))
#define JUMPOUT(x) do {} while(0)

/* Global variables */
int handle1_1 = 1;
int handle2_0 = 2;

/* String literals */
const char *s = "CALL-L1-00: Starting tests";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %d %p\n";
const char *aCallL211 = "CALL-L2-11: %d %d\n";
const char *asc_1163F = "PARAM-L1-00: Starting tests";
const char *asc_1171B = "RET-L1-00: Starting tests";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Data for string array tests */
int unk_11836 = 0x41424344;  // "ABCD"
int unk_1183A = 0x45464748;  // "EFGH"
int unk_1183E = 0x494A4B4C;  // "IJKL"

/* Function: .init_proc @ 0x103DC */
int init_proc()
{
 return call_weak_fn();
}


/* CRT stub function call_weak_fn implementation */
int call_weak_fn()
{
 return 0;
}


/* Function: sub_103E8 @ 0x103E8 */
void sub_103E8()
{
 JUMPOUT(0);
}


/* Function: main @ 0x1045C */
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



/* Function: func_a @ 0x1056C */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x10574 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: callback_func @ 0x1057C */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x10584 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x1058C */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x10594 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x1059C */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x105A4 */
int fastcall_func(int a, int b, int c)
{
 return a + b + c;
}


/* Function: call_fastcall @ 0x105B0 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x105B8 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x105C0 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0x105D8 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x105E0 */
int mips_func(int a, int b, int c, int d)
{
 return a + b + c + d;
}


/* Function: call_mips @ 0x105F0 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x105F8 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x10618 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x10620 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x10638 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x10640 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x10650 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x10658 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x10660 */
int varargs_func(int count, ...)
{
 int v1; // r3
 int result; // r0
 int v3; // r12
 va_list varg_r1; // [sp+14h] [bp-Ch]

 va_start(varg_r1, count);
 v1 = 0;
 result = 0;
 while ( v1 < count )
 {
 v3 = *((int *)&varg_r1 + v1++);
 result += v3;
 }
 return result;
}


/* Function: func_no_args @ 0x106D4 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x106DC */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x1070C */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 char *v5; // r0

 v5 = s;
 if ( s )
 v5 = (char *)strlen(s);
 return (int)((double)(int)&v5[x] + d + (double)ll);
}


/* Function: func_struct_byval @ 0x1076C */
// local variable allocation has failed, the output may be wrong!
int func_struct_byval(LargeStruct s)
{
 int *v1; // r12
 int v2; // r3
 int result; // r0
 int v4; // r2

 *(unsigned long long *)v1 = s.data[0];
 v1[2] = s.data[1];
 v1[3] = HIDWORD(s.data[1]);
 v2 = 16;
 result = 0;
 do
 {
 v4 = *v1;
 v1 += 2;
 result += v4;
 --v2;
 }
 while ( v2 );
 return result;
}


/* Function: func_struct_byptr @ 0x1079C */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x107B0 */
void test_calling_conventions()
{
 int v0; // r0
 LargeStruct *p_large; // r2
 long long v2; // kr08_8
 int v3; // r12
 int v4; // r2
 int v5; // r1
 unsigned int *v6; // r3
 LargeStruct large; // [sp+8h] [bp-110h] BYREF
 unsigned char dest[132]; // [sp+88h] [bp-90h] BYREF

 puts(s);
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
 v0 = varargs_func(5, 1, 2, 3, 4, 5);
 __printf_chk(1, aCallL206, v0);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 __printf_chk(1, aCallL209, 117);
 p_large = &large;
 v2 = 1;
 do
 {
 p_large->data[0] = v2;
 v3 = v2++ - 16;
 p_large = (LargeStruct *)((char *)p_large + 8);
 }
 while ( v3 | HIDWORD(v2) );
 memcpy(dest, &large, 0x80u);
 v4 = 0;
 v5 = 0;
 v6 = dest;
 do
 {
 ++v5;
 v4 += *v6;
 v6 += 2;
 }
 while ( v5 != 16 );
 __printf_chk(1, aCallL210, v4, v6);
 __printf_chk(1, aCallL211, 50, 0);
}


/* Function: param_by_value_int @ 0x109B8 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x109C0 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x109C8 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x109DC */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x109E4 */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x109EC */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x109F4 */
int param_string(const char *str)
{
 return *(unsigned char *)str + *((unsigned char *)str + 1);
}


/* Function: call_string_param @ 0x10A04 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x10A0C */
int param_ptr_array(char **arr, int n)
{
 int v2; // r3
 int result; // r0
 char *v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < n )
 {
 v5 = arr[v2++];
 result += (unsigned char)*v5;
 }
 return result;
}


/* Function: call_ptr_array @ 0x10A34 */
int call_ptr_array(int a1, int a2, int a3, int a4)
{
 char *strs[3]; // [sp+0h] [bp-18h] BYREF
 int v6; // [sp+Ch] [bp-Ch]

 v6 = a4;
 strs[0] = (char *)&unk_11836;
 strs[1] = (char *)&unk_1183A;
 strs[2] = (char *)&unk_1183E;
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x10A90 */
int param_varargs(int count, ...)
{
 int v1; // r3
 int result; // r0
 int v3; // r12
 va_list varg_r1; // [sp+14h] [bp-Ch]

 va_start(varg_r1, count);
 v1 = 0;
 result = 0;
 while ( v1 < count )
 {
 v3 = *((int *)&varg_r1 + v1++);
 result += v3;
 }
 return result;
}


/* Function: call_varargs_param @ 0x10B04 */
int call_varargs_param(int a1, int a2, int a3)
{
 return param_varargs(4, 10, 20, 30, 40, a2, a3);
}


/* Function: param_func_ptr @ 0x10B2C */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x10B44 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x10B54 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x10B84 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x10B8C */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x10BB0 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x10BBC */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x10BD8 */
int call_struct_byval()
{
 int v0; // r3
 BigStruct *p_s; // r2
 BigStruct s; // [sp+4h] [bp-4Ch] BYREF

 v0 = 0;
 p_s = &s;
 do
 {
 p_s->data[0] = v0;
 p_s = (BigStruct *)((char *)p_s + 4);
 ++v0;
 }
 while ( v0 != 16 );
 return s.data[0] + s.data[15];
}


/* Function: param_order_dep @ 0x10C3C */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x10C44 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x10C4C */
void test_parameter_passing()
{
 long long v0; // r0
 int v1; // r2
 int v2; // r3
 int v3; // r0
 long long v4; // r0
 int v5; // r2
 int v6; // r0
 int v7; // r0
 int v8; // r0

 puts(asc_1163F);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 v0 = __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v3 = call_ptr_array(v0, SHIDWORD(v0), v1, v2);
 v4 = __printf_chk(1, "PARAM-L2-03: %d\n", v3);
 v6 = call_varargs_param(v4, SHIDWORD(v4), v5);
 __printf_chk(1, "PARAM-L2-04: %d\n", v6);
 v7 = call_func_ptr_param();
 __printf_chk(1, "PARAM-L3-01: %d\n", v7);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 v8 = call_struct_byval();
 __printf_chk(1, "PARAM-L3-04: %d\n", v8);
 __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x10D50 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x10D58 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x10D60 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x10D68 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x10D70 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 retstr->x = x;
 retstr->y = y;
 return retstr;
}


/* Function: call_ret_small_struct @ 0x10D78 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x10D80 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *p_d; // r2
 int i; // r3
 int v5; // r0
 int v6; // r1
 int v7; // r2
 int v8; // r3
 int v9; // r1
 int v10; // r2
 int v11; // r3
 int v12; // r1
 int v13; // r2
 int v14; // r3
 int v15; // r1
 int v16; // r2
 int v17; // r3
 LargeData d; // [sp+4h] [bp-4Ch] BYREF

 p_d = &d;
 for ( i = 0; i != 16; ++i )
 {
 v5 = seed + i;
 p_d->data[0] = v5;
 p_d = (LargeData *)((char *)p_d + 4);
 }
 v6 = d.data[1];
 v7 = d.data[2];
 v8 = d.data[3];
 retstr->data[0] = d.data[0];
 retstr->data[1] = v6;
 retstr->data[2] = v7;
 retstr->data[3] = v8;
 v9 = d.data[5];
 v10 = d.data[6];
 v11 = d.data[7];
 retstr->data[4] = d.data[4];
 retstr->data[5] = v9;
 retstr->data[6] = v10;
 retstr->data[7] = v11;
 v12 = d.data[9];
 v13 = d.data[10];
 v14 = d.data[11];
 retstr->data[8] = d.data[8];
 retstr->data[9] = v12;
 retstr->data[10] = v13;
 retstr->data[11] = v14;
 v15 = d.data[13];
 v16 = d.data[14];
 v17 = d.data[15];
 retstr->data[12] = d.data[12];
 retstr->data[13] = v15;
 retstr->data[14] = v16;
 retstr->data[15] = v17;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x10E0C */
int call_ret_large_struct()
{
 LargeData d; // [sp+4h] [bp-4Ch] BYREF

 ret_large_struct(&d, 100);
 return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x10E64 */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x10E84 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x10E8C */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x10EA8 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x10EB8 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x10EC8 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x10ED0 */
int ret_multi_branch(int op)
{
 if ( (unsigned int)op > 2 )
 return -1;
 else
 return 10 * op + 10;
}


/* Function: call_ret_multi_branch @ 0x10EE4 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x10EEC */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x10EF8 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x10F00 */
void test_return_values()
{
 int v0; // r0

 puts(asc_1171B);
 __printf_chk(1, aRetL101D, 42);
 __printf_chk(1, aRetL102D, 20);
 __printf_chk(1, aRetL103D, 7);
 v0 = call_ret_large_struct();
 __printf_chk(1, aRetL104D, v0);
 __printf_chk(1, aRetL201D, 10);
 __printf_chk(1, aRetL202D, handle1_1);
 __printf_chk(1, aRetL301D, 40);
 __printf_chk(1, aRetL302D, 60);
 __printf_chk(1, aRetL303D, 21);
}


/* Function: __aeabi_drsub @ 0x10FD4 */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x10FDC */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1128C */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11128);
 return result;
}


/* Function: __floatsidf @ 0x112B0 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11128);
 return result;
}


/* Function: __extendsfdf2 @ 0x112D8 */
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
 JUMPOUT(0x11128);
 }
 return result;
}


/* Function: __floatundidf @ 0x11320 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11350);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x11394 */
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


/* Function: .term_proc @ 0x113F0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x22058 */

/* FAILED to decompile: __imp_strlen @ 0x2205C */

/* FAILED to decompile: __imp___printf_chk @ 0x22060 */

/* FAILED to decompile: __imp_abort @ 0x22064 */

/* FAILED to decompile: __imp___libc_start_main @ 0x22068 */

/* FAILED to decompile: __imp_memcpy @ 0x2206C */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x22070 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x22074 */

/* Total functions decompiled: 89, failed: 8 */
