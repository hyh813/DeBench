/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_clang_O3_g
 * Processor: arm
 */

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/* ARM NEON type definition for compatibility */
typedef struct {
    int val[4];
} int32x4_t;

typedef struct {
    int val[2];
} int32x2_t;

/* ARM NEON intrinsic function stubs */
static inline int32x4_t vdupq_n_s32(int a)
{
    int32x4_t v;
    v.val[0] = a;
    v.val[1] = a;
    v.val[2] = a;
    v.val[3] = a;
    return v;
}

static inline int32x4_t vaddq_s32(int32x4_t a, int32x4_t b)
{
    int32x4_t v;
    v.val[0] = a.val[0] + b.val[0];
    v.val[1] = a.val[1] + b.val[1];
    v.val[2] = a.val[2] + b.val[2];
    v.val[3] = a.val[3] + b.val[3];
    return v;
}

static inline int32x2_t vdup_n_s32(int a)
{
    int32x2_t v;
    v.val[0] = a;
    v.val[1] = a;
    return v;
}

static inline int32x2_t vadd_s32(int32x2_t a, int32x2_t b)
{
    int32x2_t v;
    v.val[0] = a.val[0] + b.val[0];
    v.val[1] = a.val[1] + b.val[1];
    return v;
}

/* Helper to create int32x2_t from two values */
static inline int32x2_t vmake_s32(int a, int b)
{
    int32x2_t v;
    v.val[0] = a;
    v.val[1] = b;
    return v;
}

/* IDA decompiler helper macros */
#define LODWORD(x) (*((unsigned int*)&(x)))
#define JUMPOUT(x) do { __builtin_unreachable(); } while(0)

/* Function pointer type definition */
typedef int (*func_ptr_t)(int);

typedef struct {
    unsigned long long data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    unsigned long long data[16];
} BigStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

/* Global variables for opaque handle test */
static int ret_opaque_handle_handle1;
static int ret_opaque_handle_handle2;

/* Stub function for weak symbol reference */
static long long call_weak_fn(void)
{
    return 0;
}

/* String constants */
static const char *asc_1752 = "Testing calling conventions:";
static const char *asc_1773 = "Testing parameter passing:";
static const char *asc_1794 = "Testing return values:";
static const char *aCallL206 = "CALL-L2-06: %d\n";
static const char *aCallL207 = "CALL-L3-01: %d\n";
static const char *aCallL208 = "CALL-L3-02: %d\n";
static const char *aCallL209 = "CALL-L3-03: %d\n";
static const char *aCallL210 = "CALL-L3-04: %d\n";
static const char *aCallL211 = "CALL-L3-05: %d\n";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";

/* ARM NEON data arrays */
static const int32x4_t xmmword_13D0 = {{1, 2, 3, 4}};
static const int32x4_t xmmword_13E0 = {{5, 6, 7, 8}};
static const int32x4_t xmmword_13F0 = {{9, 10, 11, 12}};

/* Function: .init_proc @ 0x628 */
long long init_proc()
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
 va_list va; // kr00_32
 unsigned int v2; // w11
 int v3; // w8
 unsigned int v4; // w10
 unsigned int *v5; // x11
 unsigned long long v7[8]; // [xsp+80h] [xbp-60h] BYREF
 unsigned int *v8; // [xsp+C0h] [xbp-20h] BYREF
 unsigned int **v9; // [xsp+C8h] [xbp-18h]
 unsigned long long *v10; // [xsp+D0h] [xbp-10h]
 unsigned long long v11; // [xsp+D8h] [xbp-8h]

 va_start(va, count);
 v7[1] = va_arg(va, unsigned long long);
 v7[2] = va_arg(va, unsigned long long);
 v7[3] = va_arg(va, unsigned long long);
 v7[4] = va_arg(va, unsigned long long);
 v7[5] = va_arg(va, unsigned long long);
 v7[6] = va_arg(va, unsigned long long);
 v7[7] = va_arg(va, unsigned long long);
 va_end(va);
 v10 = v7;
 v11 = 0xFFFFFF80FFFFFFC8LL;
 v9 = &v8;
 if ( count >= 1 )
 {
 v2 = v11;
 v3 = 0;
 while ( 1 )
 {
 while ( (v2 & 0x80000000) == 0 )
 {
 v4 = v2;
LABEL_5:
 v5 = v8;
 v8 += 2;
 --count;
 v3 += *v5;
 v2 = v4;
 if ( !count )
 return v3;
 }
 v4 = v2 + 8;
 LODWORD(v11) = v2 + 8;
 if ( v2 > 0xFFFFFFF8 )
 goto LABEL_5;
 --count;
 v3 += *(unsigned int *)((char *)v9 + (int)v2);
 v2 += 8;
 if ( !count )
 return v3;
 }
 }
 return 0;
}


/* Function: func_no_args @ 0xA78 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0xA80 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return b + a + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0xAA0 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 int v7; // w0

 if ( s )
 v7 = strlen(s);
 else
 v7 = 0;
 return (unsigned int)(int)((double)(v7 + x) + d + (double)ll);
}


/* Function: func_struct_byval @ 0xAF8 */
long long func_struct_byval(LargeStruct *s)
{
 return (unsigned int)(LODWORD(s->data[15])
 + LODWORD(s->data[14])
 + LODWORD(s->data[13])
 + LODWORD(s->data[12])
 + LODWORD(s->data[11])
 + LODWORD(s->data[10])
 + LODWORD(s->data[9])
 + LODWORD(s->data[8])
 + LODWORD(s->data[7])
 + LODWORD(s->data[6])
 + LODWORD(s->data[5])
 + LODWORD(s->data[4])
 + LODWORD(s->data[3])
 + LODWORD(s->data[2])
 + LODWORD(s->data[1])
 + LODWORD(s->data[0]));
}


/* Function: func_struct_byptr @ 0xB78 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0xB90 */
void test_calling_conventions()
{
 unsigned int v0; // w0

 puts(asc_1752);
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


/* Function: param_by_value_int @ 0xCC4 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0xCCC */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xCD4 */
int param_by_value_ptr(int *p)
{
 int result; // w0

 result = 1;
 *p *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xCEC */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xCF4 */
long long param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0xCFC */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xD04 */
int param_string(const char *str)
{
 return *((unsigned char *)str + 1) + *(unsigned char *)str;
}


/* Function: call_string_param @ 0xD14 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xD1C */
int param_ptr_array(char **arr, int n)
{
 long long v2; // x10
 int v3; // w8
 int v5; // w8
 int v6; // w11
 char **v7; // x12
 long long v8; // x13
 unsigned char *v9; // x14
 char *v10; // x15
 char **v11; // x11
 long long v12; // x9
 unsigned char *v13; // t1

 if ( n < 1 )
 return 0;
 if ( n == 1 )
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = n & 0xFFFFFFFE;
 v5 = 0;
 v6 = 0;
 v7 = arr + 1;
 v8 = v2;
 do
 {
 v9 = (unsigned char *)*(v7 - 1);
 v10 = *v7;
 v7 += 2;
 v8 -= 2;
 v5 += *v9;
 v6 += (unsigned char)*v10;
 }
 while ( v8 );
 v3 = v6 + v5;
 if ( v2 == n )
 return v3;
 }
 v11 = &arr[v2];
 v12 = (unsigned int)n - v2;
 do
 {
 v13 = (unsigned char *)*v11++;
 --v12;
 v3 += *v13;
 }
 while ( v12 );
 return v3;
}


/* Function: call_ptr_array @ 0xDA8 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xDB0 */
int param_varargs(int count, ...)
{
 va_list va; // kr00_32
 unsigned int v2; // w11
 int v3; // w8
 unsigned int v4; // w10
 unsigned int *v5; // x11
 unsigned long long v7[8]; // [xsp+80h] [xbp-60h] BYREF
 unsigned int *v8; // [xsp+C0h] [xbp-20h] BYREF
 unsigned int **v9; // [xsp+C8h] [xbp-18h]
 unsigned long long *v10; // [xsp+D0h] [xbp-10h]
 unsigned long long v11; // [xsp+D8h] [xbp-8h]

 va_start(va, count);
 v7[1] = va_arg(va, unsigned long long);
 v7[2] = va_arg(va, unsigned long long);
 v7[3] = va_arg(va, unsigned long long);
 v7[4] = va_arg(va, unsigned long long);
 v7[5] = va_arg(va, unsigned long long);
 v7[6] = va_arg(va, unsigned long long);
 v7[7] = va_arg(va, unsigned long long);
 va_end(va);
 v10 = v7;
 v11 = 0xFFFFFF80FFFFFFC8LL;
 v9 = &v8;
 if ( count >= 1 )
 {
 v2 = v11;
 v3 = 0;
 while ( 1 )
 {
 while ( (v2 & 0x80000000) == 0 )
 {
 v4 = v2;
LABEL_5:
 v5 = v8;
 v8 += 2;
 --count;
 v3 += *v5;
 v2 = v4;
 if ( !count )
 return v3;
 }
 v4 = v2 + 8;
 LODWORD(v11) = v2 + 8;
 if ( v2 > 0xFFFFFFF8 )
 goto LABEL_5;
 --count;
 v3 += *(unsigned int *)((char *)v9 + (int)v2);
 v2 += 8;
 if ( !count )
 return v3;
 }
 }
 return 0;
}


/* Function: call_varargs_param @ 0xF48 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xF60 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0xF80 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0xF88 */
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


/* Function: call_double_ptr @ 0xFB0 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0xFB8 */
int param_complex_cast(void *p, int type)
{
 if ( type == 1 )
 return *((unsigned int *)p + 1) + *(unsigned int *)p;
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: call_complex_cast @ 0xFE0 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0xFEC */
long long param_struct_byval(BigStruct *s)
{
 return (unsigned int)(s->data[15] + s->data[0]);
}


/* Function: call_struct_byval @ 0xFFC */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1004 */
int param_order_dep(int a, int b)
{
 return b + a;
}


/* Function: call_order_dep @ 0x100C */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x1014 */
void test_parameter_passing()
{
 int v0; // w0

 puts(asc_1773);
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
 printf("PARAM-L3-04: %d\n", 15);
 printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x10F8 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x1100 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1108 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1110 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1118 */
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 result.x = x;
 result.y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1124 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x112C */
int32x4_t ret_large_struct(unsigned int a1, long long a2)
{
 int32x4_t v2; // q3
 int32x4_t result; // q0

 v2 = vdupq_n_s32(a1);
 *(unsigned int *)a2 = a1;
 result = vaddq_s32(v2, (int32x4_t)xmmword_13D0);
 *(unsigned int *)(a2 + 60) = a1 + 15;
 *(int32x4_t *)(a2 + 4) = result;
 *(int32x4_t *)(a2 + 20) = vaddq_s32(v2, (int32x4_t)xmmword_13E0);
 *(int32x4_t *)(a2 + 36) = vaddq_s32(v2, (int32x4_t)xmmword_13F0);
 *(int32x2_t *)(a2 + 52) = vadd_s32(vdup_n_s32(a1), vmake_s32(0xD, 0xD));
 return result;
}


/* Function: call_ret_large_struct @ 0x1184 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x118C */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x1194 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x119C */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x11B8 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x11C0 */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &ret_opaque_handle_handle2;
 else
 return &ret_opaque_handle_handle1;
}


/* Function: call_ret_opaque @ 0x11D8 */
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x11E4 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x11F8 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1200 */
int ret_multi_branch(int op)
{
 if ( (unsigned int)op >= 3 )
 return -1;
 else
 return 10 * op + 10;
}


/* Function: call_ret_multi_branch @ 0x1218 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1220 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x122C */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1234 */
void test_return_values()
{
 puts(asc_1794);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
}


/* Function: main @ 0x12E0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 puts(asc_1794);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
 return 0;
}


/* Function: .term_proc @ 0x139C */
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
