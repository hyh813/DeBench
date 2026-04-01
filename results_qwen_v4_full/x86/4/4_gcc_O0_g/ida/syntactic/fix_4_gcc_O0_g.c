/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned long size_t;

/* IDA decompiler macros */
#define LODWORD(x) ((int)(x))
#define HIDWORD(x) ((int)((unsigned long long)(x) >> 32))

/* Stack canary intrinsic */
static unsigned int __readgsdword(unsigned int offset) { return 0; }

/* Quick memory copy */
static void *qmemcpy(void *dest, const void *src, size_t n) { return memcpy(dest, src, n); }

/* External declarations */
extern void *_gmon_start__;
#include <stdarg.h>

/* Struct type definitions */
typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    long long data[16];
} LargeStruct;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int a;
    int b;
} TestIntPair;

typedef int (*func_ptr_t)(int);

static void *handle1_1 = (void *)0x12345678;
static void *handle2_0 = (void *)0x87654321;
static char *asc_3008 = "=== Calling Conventions Test ===";
static char *aCallL206 = "CALL-L2-06: %d\n";
static char *aCallL207 = "CALL-L2-07: %d\n";
static char *aCallL208 = "CALL-L2-08: %d\n";
static char *aCallL209 = "CALL-L2-09: %d\n";
static char *aCallL210 = "CALL-L2-10: %d\n";
static char *aCallL211 = "CALL-L2-11: %d\n";
static char *asc_31D8 = "=== Parameter Passing Test ===";
static char *asc_32B4 = "=== Return Values Test ===";
static char *aRetL101D = "RET-L1-01: %d\n";
static char *aRetL102D = "RET-L1-02: %d\n";
static char *aRetL103D = "RET-L1-03: %d\n";
static char *aRetL104D = "RET-L1-04: %d\n";
static char *aRetL201D = "RET-L2-01: %d\n";
static char *aRetL202D = "RET-L2-02: %d\n";
static char *aRetL301D = "RET-L3-01: %d\n";
static char *aRetL302D = "RET-L3-02: %d\n";
static char *aRetL303D = "RET-L3-03: %d\n";
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
typedef void _UNKNOWN;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_gcc_O0_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
int sub_1090(int a1)
{
 return (*(int (**)(void))(a1 + 36))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_111C @ 0x111C */
void sub_111C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1120 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux */
static void _do_global_dtors_aux(void) { ; }




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1259 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x125D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: cdecl_func @ 0x1261 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x127C */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x129B */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x12B7 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x12D3 */
int fastcall_func(int a1, int a2, int a, int b, int c)
{
 return a1 + a2 + a;
}


/* Function: call_fastcall @ 0x12FE */
int call_fastcall()
{
 return 15;
}


/* Function: call_thiscall @ 0x1322 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x133A */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1364 */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1389 */
int mips_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_mips @ 0x13AE */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x13D1 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1400 */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1427 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_ms_x64 @ 0x1451 */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x1476 */
int vectorcall_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_vectorcall @ 0x149B */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x14BE */
int mixed_conventions_test()
{
 int v1; // [esp+0h] [ebp-10h]
 int v2; // [esp+4h] [ebp-Ch]
 int sum; // [esp+Ch] [ebp-4h]
 int suma; // [esp+Ch] [ebp-4h]

 sum = cdecl_func(1, 2);
 suma = stdcall_func(3, 4) + sum;
 return fastcall_func(6, 5, 7, v1, v2) + suma;
}


/* Function: varargs_func @ 0x150D */
int varargs_func(int count, ...)
{
 int v1; // kr00_4
 va_list args; // [esp+0h] [ebp-18h]
 int sum; // [esp+4h] [ebp-14h]
 int i; // [esp+8h] [ebp-10h]
 va_list va; // [esp+24h] [ebp+Ch] BYREF

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


/* Function: func_no_args @ 0x1572 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x158A */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return g + f + e + d + c + b + a + h;
}


/* Function: func_mixed_args @ 0x15C3 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 size_t v4; // eax

 if ( s )
 v4 = strlen(s);
 else
 v4 = 0;
 return (int)((long double)(int)(x + v4) + d + (long double)ll);
}


/* Function: func_struct_byval @ 0x1645 */
int func_struct_byval(LargeStruct s)
{
 int i; // [esp+4h] [ebp-Ch]
 int sum; // [esp+8h] [ebp-8h]

 sum = 0;
 for ( i = 0; i <= 15; ++i )
 sum += LODWORD(s.data[i]);
 return sum;
}


/* Function: func_struct_byptr @ 0x1690 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x16BE */
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
 long long v10; // rax
 int v11; // ecx
 LargeStruct v12; // [esp-80h] [ebp-148h] BYREF
 int i; // [esp+4h] [ebp-C4h]
 int sum; // [esp+8h] [ebp-C0h]
 int no_args; // [esp+Ch] [ebp-BCh]
 int many; // [esp+10h] [ebp-B8h]
 char *test_str; // [esp+14h] [ebp-B4h]
 int mixed; // [esp+18h] [ebp-B0h]
 int struct_val; // [esp+1Ch] [ebp-ACh]
 int struct_ptr; // [esp+20h] [ebp-A8h]
 SmallStruct s; // [esp+24h] [ebp-A4h] BYREF
 LargeStruct large; // [esp+2Ch] [ebp-9Ch] BYREF
 unsigned int v23; // [esp+ACh] [ebp-1Ch]

 v23 = __readgsdword(0x14u);
 puts(asc_3008);
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
 for ( i = 0; i <= 15; ++i )
 {
 v10 = i + 1;
 v11 = i;
 large.data[i] = v10;
 }
 qmemcpy(&v12, &large, sizeof(v12));
 struct_val = func_struct_byval(v12);
 printf(aCallL210, struct_val);
 s.x = 5;
 s.y = 10;
 struct_ptr = func_struct_byptr(&s);
 printf(aCallL211, struct_ptr);
}


/* Function: param_by_value_int @ 0x1998 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x19B1 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x19E4 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1A15 */
long long call_by_value_ptr()
{
 long long v0; // rax
 int val; // [esp+0h] [ebp-18h] BYREF
 int *ptr; // [esp+4h] [ebp-14h]
 int result; // [esp+8h] [ebp-10h]
 unsigned int v4; // [esp+Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 val = 5;
 ptr = &val;
 result = param_by_value_ptr(&val);
 v0 = val + result;
 return v0;
}


/* Function: param_array_decay @ 0x1A6A */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x1A82 */
int call_array_decay()
{
 int array[10]; // [esp+4h] [ebp-34h] BYREF
 unsigned int v2; // [esp+2Ch] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 memset(array, 0, sizeof(array));
 return param_array_decay(array, 10);
}


/* Function: param_string @ 0x1AD7 */
int param_string(const char *str)
{
 return *str + str[1];
}


/* Function: call_string_param @ 0x1B01 */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1B23 */
int param_ptr_array(char **arr, int n)
{
 int sum; // [esp+8h] [ebp-8h]
 int i; // [esp+Ch] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *arr[i];
 return sum;
}


/* Function: call_ptr_array @ 0x1B72 */
int call_ptr_array()
{
 char *strs[3]; // [esp+0h] [ebp-18h] BYREF
 unsigned int v2; // [esp+Ch] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x1BCE */
int param_varargs(int count, ...)
{
 int v1; // kr00_4
 va_list args; // [esp+0h] [ebp-18h]
 int sum; // [esp+4h] [ebp-14h]
 int i; // [esp+8h] [ebp-10h]
 va_list va; // [esp+24h] [ebp+Ch] BYREF

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


/* Function: call_varargs_param @ 0x1C33 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1C5E */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: callback_func @ 0x1C85 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: call_func_ptr_param @ 0x1C9D */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x1CC7 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1D08 */
long long call_double_ptr()
{
 long long result; // rax
 int val; // [esp+0h] [ebp-18h] BYREF
 int *ptr; // [esp+4h] [ebp-14h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 val = 10;
 ptr = &val;
 param_double_ptr(&ptr, 20);
 result = (ptr == 0) + val;
 return result;
}


/* Function: param_complex_cast @ 0x1D68 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1DBD */
int call_complex_cast()
{
 int val; // [esp+0h] [ebp-18h] BYREF
 TestIntPair pair; // [esp+4h] [ebp-14h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 val = 305419896;
 pair.a = 100;
 pair.b = 200;
 param_complex_cast(&pair, 1);
 return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x1E20 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1E3B */
int call_struct_byval()
{
 int i; // [esp+8h] [ebp-50h]
 BigStruct s; // [esp+Ch] [ebp-4Ch]
 unsigned int v3; // [esp+4Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i <= 15; ++i )
 s.data[i] = i;
 return param_struct_byval(s);
}


/* Function: param_order_dep @ 0x1EC2 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x1EDD */
int call_order_dep()
{
 return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x1F10 */
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

 puts(asc_31D8);
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


/* Function: ret_basic_type @ 0x2046 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x205E */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x208C */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x20A5 */
long long call_ret_pointer()
{
 long long result; // rax
 int arr[3]; // [esp+10h] [ebp-18h] BYREF
 unsigned int v2; // [esp+1Ch] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 arr[0] = 10;
 arr[1] = 20;
 arr[2] = 30;
 result = *ret_pointer(arr);
 return result;
}


/* Function: ret_small_struct @ 0x2100 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 retstr->x = x;
 retstr->y = y;
 return retstr;
}


/* Function: call_ret_small_struct @ 0x2135 */
long long call_ret_small_struct()
{
 long long result; // rax
 SmallPoint p; // [esp+4h] [ebp-14h] BYREF
 unsigned int v2; // [esp+Ch] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 ret_small_struct(&p, 3, 4);
 result = p.x + p.y;
 return result;
}


/* Function: ret_large_struct @ 0x217F */
LargeData *ret_large_struct(LargeData *retstr, int seed)
{
 int i; // [esp+18h] [ebp-50h]
 LargeData d; // [esp+1Ch] [ebp-4Ch]
 unsigned int v5; // [esp+5Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 for ( i = 0; i <= 15; ++i )
 d.data[i] = i + seed;
 *retstr = d;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x2240 */
long long call_ret_large_struct()
{
 long long result; // rax
 LargeData d; // [esp+Ch] [ebp-4Ch] BYREF
 unsigned int v2; // [esp+4Ch] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 ret_large_struct(&d, 100);
 result = d.data[0] + d.data[15];
 return result;
}


/* Function: func_a @ 0x228B */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x22A4 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x22BC */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x22E3 */
int call_ret_func_ptr()
{
 func_ptr_t f; // [esp+Ch] [ebp-Ch]

 f = ret_func_ptr(1);
 return f(5);
}


/* Function: ret_opaque_handle @ 0x2313 */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x233A */
int call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x2362 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x238A */
int call_ret_complex_expr()
{
 int r1; // [esp+8h] [ebp-8h]

 r1 = ret_complex_expr(5, 3, 10);
 return r1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x23CA */
int ret_multi_branch(int op)
{
 if ( op == 2 )
 return 30;
 if ( op > 2 )
 return -1;
 if ( !op )
 return 10;
 if ( op == 1 )
 return 20;
 else
 return -1;
}


/* Function: call_ret_multi_branch @ 0x2411 */
int call_ret_multi_branch()
{
 int sum; // [esp+Ch] [ebp-4h]
 int suma; // [esp+Ch] [ebp-4h]

 sum = ret_multi_branch(0);
 suma = ret_multi_branch(1) + sum;
 return ret_multi_branch(2) + suma;
}


/* Function: ret_void @ 0x2458 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x247A */
long long call_ret_void()
{
 long long v0; // rax
 int result; // [esp+8h] [ebp-10h] BYREF
 unsigned int v2; // [esp+Ch] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 ret_void(7, &result);
 v0 = result;
 return v0;
}


/* Function: test_return_values @ 0x24BD */
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

 puts(asc_32B4);
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


/* Function: main @ 0x25C3 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x25ED */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2600 */
void _stack_chk_fail_local()
{
 ;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x266C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6024 */

/* FAILED to decompile: printf @ 0x6028 */

/* FAILED to decompile: __stack_chk_fail @ 0x602C */

/* FAILED to decompile: __cxa_finalize @ 0x6030 */

/* FAILED to decompile: puts @ 0x6034 */

/* FAILED to decompile: strlen @ 0x6038 */

/* Total functions decompiled: 91, failed: 7 */
