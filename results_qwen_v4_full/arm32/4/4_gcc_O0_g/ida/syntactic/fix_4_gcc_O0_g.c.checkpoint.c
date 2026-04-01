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

/* Auto-injected struct definitions by preprocessor */
typedef struct { int x; int y; } SmallStruct;
typedef struct { long long data[16]; } LargeStruct;
typedef struct { int data[16]; } BigStruct;
typedef struct { int x; int y; } SmallPoint;
typedef struct { int data[16]; } LargeData;
typedef struct { int a; int b; } TestIntPair;
typedef int (*func_ptr_t)(int);
typedef char * va_list;
typedef int bool;
#define va_start(ap, last) (ap = (va_list)&last)
#define va_arg(ap, type) (*(type *)(ap))
#define va_copy(dest, src) (dest = src)
#define va_end(ap)

/* Helper definitions for decompiler artifacts */
#define JUMPOUT(addr) return
int call_weak_fn(void) { return 0; }

/* Global variables */
int handle1_1 = 42;
int handle2_0 = 100;
char *s = "test";
char *aCallL206 = "CALL-L2-06: %d\n";
char *aCallL207 = "CALL-L2-07: %d\n";
char *aCallL208 = "CALL-L2-08: %d\n";
char *aCallL209 = "CALL-L2-09: %d\n";
char *aCallL210 = "CALL-L2-10: %d\n";
char *aCallL211 = "CALL-L2-11: %d\n";
char *asc_125F4 = "=== Parameter Passing Tests ===";
char *aRetL101D = "RET-L1-01: %d\n";
char *aRetL102D = "RET-L1-02: %d\n";
char *aRetL103D = "RET-L1-03: %d\n";
char *aRetL104D = "RET-L1-04: %d\n";
char *aRetL201D = "RET-L2-01: %d\n";
char *aRetL202D = "RET-L2-02: %d\n";
char *aRetL301D = "RET-L3-01: %d\n";
char *aRetL302D = "RET-L3-02: %d\n";
char *aRetL303D = "RET-L3-03: %d\n";
char *asc_12700 = "=== Return Value Tests ===";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_gcc_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103FC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10408 @ 0x10408 */
void sub_10408()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x10580 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x105B0 */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x105D0 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x10600 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x10620 */
int fastcall_func(int a, int b, int c)
{
 return a + b + c;
}


/* Function: call_fastcall @ 0x1065C */
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x10680 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1069C */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0x106EC */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x10724 */
int mips_func(int a, int b, int c, int d)
{
 return a + b + c + d;
}


/* Function: call_mips @ 0x1076C */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x10794 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x107EC */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1082C */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return a + b + c + d + e;
}


/* Function: call_ms_x64 @ 0x1087C */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x108B4 */
int vectorcall_func(int a, int b, int c, int d)
{
 return a + b + c + d;
}


/* Function: call_vectorcall @ 0x108FC */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x10924 */
int mixed_conventions_test()
{
 int sum; // [sp+4h] [bp-8h]
 int suma; // [sp+4h] [bp-8h]

 sum = cdecl_func(1, 2);
 suma = sum + stdcall_func(3, 4);
 return suma + fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x109A0 */
int varargs_func(int count, ...)
{
 int v1; // kr00_4
 va_list args; // [sp+0h] [bp-14h]
 int sum; // [sp+4h] [bp-10h]
 int i; // [sp+8h] [bp-Ch]
 va_list varg_r1; // [sp+1Ch] [bp+8h] BYREF

 va_start(varg_r1, count);
 sum = 0;
 va_copy(args, varg_r1);
 for ( i = 0; i < count; ++i )
 {
 v1 = va_arg(args, unsigned int);
 sum += v1;
 }
 return sum;
}


/* Function: func_no_args @ 0x10A4C */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x10A68 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x10AD0 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 size_t v4; // r3

 if ( s )
 v4 = strlen(s);
 else
 v4 = 0;
 return (int)((double)(int)(x + v4) + d + (double)ll);
}


/* Function: func_struct_byval @ 0x10B80 */
int func_struct_byval(LargeStruct s)
{
 int i; // [sp+4h] [bp-18h]
 long long sum; // [sp+8h] [bp-14h]

 sum = 0;
 for ( i = 0; i <= 15; ++i )
 sum += s.data[i];
 return sum;
}


/* Function: func_struct_byptr @ 0x10C10 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x10C58 */
void test_calling_conventions()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int i; // [sp+70h] [bp-BCh]
 int sum; // [sp+74h] [bp-B8h]
 int no_args; // [sp+78h] [bp-B4h]
 int many; // [sp+7Ch] [bp-B0h]
 char *test_str; // [sp+80h] [bp-ACh]
 int mixed; // [sp+84h] [bp-A8h]
 int struct_val; // [sp+88h] [bp-A4h]
 int struct_ptr; // [sp+8Ch] [bp-A0h]
 SmallStruct s; // [sp+90h] [bp-9Ch] BYREF
 LargeStruct large; // [sp+98h] [bp-94h] BYREF
 LargeStruct v20; // 0:r0.16,16:^0.112 BYREF

 puts(s);
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
 large.data[i] = i + 1;
 memcpy(&v20.data[2], &large.data[2], 0x70u);
 v20.data[0] = large.data[0];
 v20.data[1] = large.data[1];
 struct_val = func_struct_byval(v20);
 printf(aCallL210, struct_val);
 s.x = 5;
 s.y = 10;
 struct_ptr = func_struct_byptr(&s);
 printf(aCallL211, struct_ptr);
}


/* Function: param_by_value_int @ 0x10F34 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x10F64 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x10F9C */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x10FEC */
int call_by_value_ptr()
{
 int val; // [sp+0h] [bp-14h] BYREF
 int *ptr; // [sp+4h] [bp-10h]
 int result; // [sp+8h] [bp-Ch]

 val = 5;
 ptr = &val;
 result = param_by_value_ptr(&val);
 return val + result;
}


/* Function: param_array_decay @ 0x1105C */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x11084 */
int call_array_decay()
{
 int array[10]; // [sp+4h] [bp-30h] BYREF

 memset(array, 0, sizeof(array));
 return param_array_decay(array, 10);
}


/* Function: param_string @ 0x110F4 */
int param_string(const char *str)
{
 return *(unsigned char *)str + *((unsigned char *)str + 1);
}


/* Function: call_string_param @ 0x11130 */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x11150 */
int param_ptr_array(char **arr, int n)
{
 int sum; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += (unsigned char)*arr[i];
 return sum;
}


/* Function: call_ptr_array @ 0x111D0 */
int call_ptr_array()
{
 char *strs[3]; // [sp+0h] [bp-14h] BYREF

 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x11240 */
int param_varargs(int count, ...)
{
 int v1; // kr00_4
 va_list args; // [sp+0h] [bp-14h]
 int sum; // [sp+4h] [bp-10h]
 int i; // [sp+8h] [bp-Ch]
 va_list varg_r1; // [sp+1Ch] [bp+8h] BYREF

 va_start(varg_r1, count);
 va_copy(args, varg_r1);
 sum = 0;
 for ( i = 0; i < count; ++i )
 {
 v1 = va_arg(args, unsigned int);
 sum += v1;
 }
 return sum;
}


/* Function: call_varargs_param @ 0x112EC */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x11324 */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: callback_func @ 0x11358 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: call_func_ptr_param @ 0x11380 */
int call_func_ptr_param()
{
 return param_func_ptr((int (*)(int))callback_func, 5);
}


/* Function: param_double_ptr @ 0x113A4 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1140C */
int call_double_ptr()
{
 int val; // [sp+0h] [bp-14h] BYREF
 int *ptr; // [sp+4h] [bp-10h] BYREF

 val = 10;
 ptr = &val;
 param_double_ptr(&ptr, 20);
 return (ptr == 0) + val;
}


/* Function: param_complex_cast @ 0x11498 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1151C */
int call_complex_cast()
{
 int val; // [sp+0h] [bp-14h] BYREF
 TestIntPair pair; // [sp+4h] [bp-10h] BYREF

 val = 305419896;
 pair.a = 100;
 pair.b = 200;
 param_complex_cast(&pair, 1);
 return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x115A8 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x115DC */
int call_struct_byval()
{
 int i; // [sp+30h] [bp-4Ch]
 BigStruct s; // [sp+34h] [bp-48h]

 for ( i = 0; i <= 15; ++i )
 s.data[i] = i;
 return param_struct_byval(s);
}


/* Function: param_order_dep @ 0x11690 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x116C0 */
int call_order_dep()
{
 return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x11708 */
void test_parameter_passing()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0

 puts(asc_125F4);
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


/* Function: ret_basic_type @ 0x1182C */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x11854 */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x11884 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x118AC */
int call_ret_pointer()
{
 int arr[3]; // [sp+8h] [bp-14h] BYREF

 arr[0] = *(unsigned int *)"\n";
 arr[1] = 20;
 arr[2] = 30;
 return *ret_pointer(arr);
}


/* Function: ret_small_struct @ 0x11920 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 retstr->x = x;
 retstr->y = y;
 return retstr;
}


/* Function: call_ret_small_struct @ 0x1196C */
int call_ret_small_struct()
{
 SmallPoint p; // [sp+4h] [bp-10h] BYREF

 ret_small_struct(&p, 3, 4);
 return p.x + p.y;
}


/* Function: ret_large_struct @ 0x119D4 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 int v2; // r1
 int v3; // r2
 int v4; // r3
 int v5; // r1
 int v6; // r2
 int v7; // r3
 int v8; // r1
 int v9; // r2
 int v10; // r3
 int v11; // r1
 int v12; // r2
 int v13; // r3
 int i; // [sp+8h] [bp-4Ch]
 LargeData d; // [sp+Ch] [bp-48h]

 for ( i = 0; i <= 15; ++i )
 d.data[i] = seed + i;
 v2 = d.data[1];
 v3 = d.data[2];
 v4 = d.data[3];
 retstr->data[0] = d.data[0];
 retstr->data[1] = v2;
 retstr->data[2] = v3;
 retstr->data[3] = v4;
 v5 = d.data[5];
 v6 = d.data[6];
 v7 = d.data[7];
 retstr->data[4] = d.data[4];
 retstr->data[5] = v5;
 retstr->data[6] = v6;
 retstr->data[7] = v7;
 v8 = d.data[9];
 v9 = d.data[10];
 v10 = d.data[11];
 retstr->data[8] = d.data[8];
 retstr->data[9] = v8;
 retstr->data[10] = v9;
 retstr->data[11] = v10;
 v11 = d.data[13];
 v12 = d.data[14];
 v13 = d.data[15];
 retstr->data[12] = d.data[12];
 retstr->data[13] = v11;
 retstr->data[14] = v12;
 retstr->data[15] = v13;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x11A94 */
int call_ret_large_struct()
{
 LargeData d; // [sp+4h] [bp-48h] BYREF

 ret_large_struct(&d, 100);
 return d.data[0] + d.data[15];
}


/* Function: func_a @ 0x11AF8 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x11B20 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x11B48 */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return (func_ptr_t)func_b;
 else
 return (func_ptr_t)func_a;
}


/* Function: call_ret_func_ptr @ 0x11B88 */
int call_ret_func_ptr()
{
 func_ptr_t f; // [sp+4h] [bp-8h]

 f = ret_func_ptr(1);
 return f(5);
}


/* Function: ret_opaque_handle @ 0x11BBC */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x11BFC */
int call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x11C28 */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x11C74 */
int call_ret_complex_expr()
{
 int r1; // [sp+0h] [bp-Ch]

 r1 = ret_complex_expr(5, 3, 10);
 return r1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x11CC0 */
int ret_multi_branch(int op)
{
 if ( op == 2 )
 return 30;
 if ( op > 2 )
 return -1;
 if ( !op )
 return 10;
 if ( op != 1 )
 return -1;
 return 20;
}


/* Function: call_ret_multi_branch @ 0x11D30 */
int call_ret_multi_branch()
{
 int sum; // [sp+4h] [bp-8h]
 int suma; // [sp+4h] [bp-8h]

 sum = ret_multi_branch(0);
 suma = sum + ret_multi_branch(1);
 return suma + ret_multi_branch(2);
}


/* Function: ret_void @ 0x11D9C */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x11DD8 */
int call_ret_void()
{
 int result; // [sp+0h] [bp-Ch] BYREF

 ret_void(7, &result);
 return result;
}


/* Function: test_return_values @ 0x11E34 */
void test_return_values()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0

 puts(asc_12700);
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


/* Function: main @ 0x11F28 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __aeabi_drsub @ 0x11F48 */
double _aeabi_drsub(double a1, double a2)
{
 return a2 - a1;
}


/* Function: __subdf3 @ 0x11F50 */
double _subdf3(double a1, double a2)
{
 return a1 - a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x12200 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x1209C);
 return result;
}


/* Function: __floatsidf @ 0x12224 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x1209C);
 return result;
}


/* Function: __extendsfdf2 @ 0x1224C */
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
 JUMPOUT(0x1209C);
 }
 return result;
}


/* Function: __floatundidf @ 0x12294 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x122C4);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x12308 */
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


/* Function: .term_proc @ 0x12364 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x23058 */

/* FAILED to decompile: __imp_strlen @ 0x2305C */

/* FAILED to decompile: __imp_memset @ 0x23060 */

/* FAILED to decompile: __imp_printf @ 0x23064 */

/* FAILED to decompile: __imp_abort @ 0x23068 */

/* FAILED to decompile: __imp___libc_start_main @ 0x2306C */

/* FAILED to decompile: __imp_memcpy @ 0x23070 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x23074 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23078 */

/* Total functions decompiled: 89, failed: 9 */
