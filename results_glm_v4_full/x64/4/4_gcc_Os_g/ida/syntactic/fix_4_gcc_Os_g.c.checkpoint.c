/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_gcc_Os_g
 * Processor: pc
 */

/* Type definitions */
typedef struct {
    int x;
    int y;
} SmallStruct;

/* Compiler intrinsic for reading from FS segment */
static inline unsigned long long __readfsqword(unsigned int offset)
{
    unsigned long long value;
    __asm__ volatile ("mov %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(unsigned long)offset));
    return value;
}

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

typedef int (*func_ptr_t)(int);

/* External declarations */
extern void _gmon_start__(void);

/* Global variables */
static int handle1_1;
static int handle2_0;

/* String constants */
static const char *s = "Testing calling conventions";
static const char *aCallL206 = "CALL-L2-06: %d\n";
static const char *aCallL207 = "CALL-L2-07: %d\n";
static const char *aCallL208 = "CALL-L2-08: %d\n";
static const char *aCallL209 = "CALL-L2-09: %d\n";
static const char *aCallL210 = "CALL-L3-01: %d %p\n";
static const char *aCallL211 = "CALL-L3-02: %d\n";
static const char *asc_21C8 = "Testing parameter passing";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";
static const char *asc_22A4 = "Testing return values";
static const char unk_21BC[4] = "AB";
static const char unk_21C0[4] = "C";
static const char unk_21C4[4] = "D";









/* Function: main @ 0x10C0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x11C9 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x11D1 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: callback_func @ 0x11D9 */
long long callback_func(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x11E1 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x11E9 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x11F3 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x11FD */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1207 */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x1211 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x121B */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1225 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1234 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x123E */
int mips_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_mips @ 0x124A */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1254 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1266 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1270 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x127F */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1289 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1295 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x129F */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x12A9 */
int varargs_func(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 unsigned int v6; // edx
 int v7; // ecx
 int v8; // r8d
 char *v9; // rax
 char *v10; // rsi
 long long v11; // r10
 unsigned char v13[8]; // [rsp+20h] [rbp-38h] BYREF
 long long v14; // [rsp+28h] [rbp-30h]
 long long v15; // [rsp+30h] [rbp-28h]
 long long v16; // [rsp+38h] [rbp-20h]
 long long v17; // [rsp+40h] [rbp-18h]
 long long v18; // [rsp+48h] [rbp-10h]
 char v19; // [rsp+60h] [rbp+8h] BYREF

 v15 = v1;
 v6 = 8;
 v16 = v2;
 v7 = 0;
 v17 = v4;
 v8 = 0;
 v18 = v5;
 v14 = v3;
 v9 = &v19;
 while ( v7 < count )
 {
 v10 = v9 + 8;
 if ( v6 <= 0x2F )
 {
 v11 = v6;
 v10 = v9;
 v6 += 8;
 v9 = &v13[v11];
 }
 v8 += *(unsigned int *)v9;
 ++v7;
 v9 = v10;
 }
 return v8;
}


/* Function: func_no_args @ 0x1345 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x134F */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + e + d + c + b + a + f;
}


/* Function: func_mixed_args @ 0x1369 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 int v4; // eax
 int v5; // ebx

 v4 = 0;
 v5 = ll;
 if ( s )
 v4 = strlen(s);
 return (unsigned int)(int)((double)(x + v4) + d + (double)v5);
}


/* Function: func_struct_byval @ 0x13AD */
int func_struct_byval(LargeStruct s)
{
 long long v1; // rdx
 long long v2; // rax

 v1 = 0;
 v2 = 0;
 do
 v2 += s.data[v1++];
 while ( v1 != 16 );
 return v2;
}


/* Function: func_struct_byptr @ 0x13C4 */
int func_struct_byptr(SmallStruct *p)
{
 int result; // eax

 result = -1;
 if ( p )
 return p->y * p->x;
 return result;
}


/* Function: test_calling_conventions @ 0x13D7 */
void test_calling_conventions()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 long long i; // rax
 LargeStruct *p_large; // rsi
 unsigned int *v4; // rdi
 long long v5; // rcx
 long long v6; // rax
 long long v7; // rdx
 long long v8; // [rsp+0h] [rbp-118h]
 LargeStruct large; // [rsp+8h] [rbp-110h] BYREF
 unsigned long long v10[18]; // [rsp+88h] [rbp-90h] BYREF

 v10[16] = __readfsqword(0x28u);
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
 v1 = func_mixed_args(10, "test", 3.14, 100);
 __printf_chk(1, aCallL209, v1);
 for ( i = 1; i != 17; ++i )
 {
 *(&v8 + i) = i;
 p_large = &large;
 }
 v4 = v10;
 v5 = 32;
 v6 = 0;
 v7 = 0;
 while ( v5 )
 {
 *v4 = p_large->data[0];
 p_large = (LargeStruct *)((char *)p_large + 4);
 ++v4;
 --v5;
 }
 do
 v7 += v10[v6++];
 while ( v6 != 16 );
 __printf_chk(1, aCallL210, v7, v10);
 __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1619 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1621 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x162B */
int param_by_value_ptr(int *p)
{
 int result; // eax

 result = 1;
 *p = *p * 2;
 return result;
}


/* Function: call_by_value_ptr @ 0x1642 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x164C */
int param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x1656 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1660 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x166E */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1678 */
int param_ptr_array(char **arr, int n)
{
 long long v2; // rax
 int v3; // r8d
 char *v4; // rdx

 v2 = 0;
 v3 = 0;
 while ( n > (int)v2 )
 {
 v4 = arr[v2++];
 v3 += *v4;
 }
 return v3;
}


/* Function: call_ptr_array @ 0x1698 */
int call_ptr_array()
{
 char *strs[3]; // [rsp+0h] [rbp-28h] BYREF
 unsigned long long v2; // [rsp+18h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 strs[0] = (char *)&unk_21BC;
 strs[1] = (char *)&unk_21C0;
 strs[2] = (char *)&unk_21C4;
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x16F8 */
int param_varargs(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 unsigned int v6; // edx
 int v7; // ecx
 int v8; // r8d
 char *v9; // rax
 char *v10; // rsi
 long long v11; // r10
 unsigned char v13[8]; // [rsp+20h] [rbp-38h] BYREF
 long long v14; // [rsp+28h] [rbp-30h]
 long long v15; // [rsp+30h] [rbp-28h]
 long long v16; // [rsp+38h] [rbp-20h]
 long long v17; // [rsp+40h] [rbp-18h]
 long long v18; // [rsp+48h] [rbp-10h]
 char v19; // [rsp+60h] [rbp+8h] BYREF

 v15 = v1;
 v6 = 8;
 v16 = v2;
 v7 = 0;
 v17 = v4;
 v8 = 0;
 v18 = v5;
 v14 = v3;
 v9 = &v19;
 while ( v7 < count )
 {
 v10 = v9 + 8;
 if ( v6 <= 0x2F )
 {
 v11 = v6;
 v10 = v9;
 v6 += 8;
 v9 = &v13[v11];
 }
 v8 += *(unsigned int *)v9;
 ++v7;
 v9 = v10;
 }
 return v8;
}


/* Function: call_varargs_param @ 0x1794 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x17B9 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x17CB */
int call_func_ptr_param()
{
 return param_func_ptr((int (*)(int))callback_func, 5);
}


/* Function: param_double_ptr @ 0x17DD */
int param_double_ptr(int **pp, int new_val)
{
 int result; // eax

 result = -1;
 if ( pp )
 {
 if ( *pp )
 {
 **pp = new_val;
 result = 1;
 *pp = 0;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x1800 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x180A */
int param_complex_cast(void *p, int type)
{
 int result; // eax

 if ( !type )
 return *(unsigned int *)p;
 result = -1;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return result;
}


/* Function: call_complex_cast @ 0x1822 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x182C */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1839 */
int call_struct_byval()
{
 long long i; // rax
 BigStruct s; // [rsp+8h] [rbp-50h]
 unsigned long long v3; // [rsp+48h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 16; ++i )
 s.data[i] = i;
 return s.data[0] + s.data[15];
}


/* Function: param_order_dep @ 0x1880 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1888 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1892 */
void test_parameter_passing()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax

 puts(asc_21C8);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v0 = call_ptr_array();
 __printf_chk(1, "PARAM-L2-03: %d\n", v0);
 v1 = call_varargs_param();
 __printf_chk(1, "PARAM-L2-04: %d\n", v1);
 v2 = call_func_ptr_param();
 __printf_chk(1, "PARAM-L3-01: %d\n", v2);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 v3 = call_struct_byval();
 __printf_chk(1, "PARAM-L3-04: %d\n", v3);
 __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x19BC */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x19C4 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x19CE */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x19D7 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x19E1 */
// local variable allocation has failed, the output may be wrong!
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint result;
 result.x = x;
 result.y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x19EF */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x19F9 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // rax
 long long i; // rcx
 LargeData *p_d; // rsi
 LargeData d; // [rsp+8h] [rbp-50h] BYREF
 unsigned long long v7; // [rsp+48h] [rbp-10h]

 result = retstr;
 v7 = __readfsqword(0x28u);
 for ( i = 0; i != 16; ++i )
 {
 p_d = &d;
 d.data[i] = seed + i;
 }
 while ( i )
 {
 retstr->data[0] = p_d->data[0];
 p_d = (LargeData *)((char *)p_d + 4);
 retstr = (LargeData *)((char *)retstr + 4);
 --i;
 }
 return result;
}


/* Function: call_ret_large_struct @ 0x1A49 */
int call_ret_large_struct()
{
 LargeData d; // [rsp+8h] [rbp-50h] BYREF
 unsigned long long v2; // [rsp+48h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 ret_large_struct(&d, 100);
 return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x1A92 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = (func_ptr_t)func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1AAB */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1AB5 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &handle1_1;
 if ( type )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1ACE */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1AD9 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1AE8 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1AF2 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 2 )
 return 10 * (op + 1);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1B04 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1B0E */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1B18 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1B22 */
void test_return_values()
{
 unsigned int v0; // eax

 puts(asc_22A4);
 __printf_chk(1, aRetL101D, 42);
 __printf_chk(1, aRetL102D, 20);
 __printf_chk(1, aRetL103D, 7);
 v0 = call_ret_large_struct();
 __printf_chk(1, aRetL104D, v0);
 __printf_chk(1, aRetL201D, 10);
 __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
 __printf_chk(1, aRetL301D, 40);
 __printf_chk(1, aRetL302D, 60);
 __printf_chk(1, aRetL303D);
}





/* FAILED to decompile: __libc_start_main @ 0x4028 */

/* FAILED to decompile: puts @ 0x4030 */

/* FAILED to decompile: strlen @ 0x4038 */

/* FAILED to decompile: __stack_chk_fail @ 0x4040 */

/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4050 */

/* FAILED to decompile: __gmon_start__ @ 0x4060 */

/* Total functions decompiled: 83, failed: 7 */
