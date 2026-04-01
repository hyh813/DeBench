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

/* HIDWORD macro - extracts high 32 bits from 64-bit value */
#define HIDWORD(x) ((uint32_t)((((uint64_t)(x)) >> 32) & 0xFFFFFFFF))

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_clang_Os_no_g
 * Processor: pc
 */

/* External declarations for CRT functions */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);

/* String constants defined locally */
static const char asc_2352[] = "Calling Conventions Test";
static const char aCallL206[] = "VARARG-L1: %d\n";
static const char aCallL207[] = "VARARG-L2: %d\n";
static const char aCallL208[] = "VARARG-L3: %d\n";
static const char aCallL209[] = "VARARG-L4: %d\n";
static const char aCallL210[] = "VARARG-L5: %d\n";
static const char aCallL211[] = "VARARG-L6: %d\n";
static const char asc_2373[] = "Parameter Passing Test";
static const char asc_2394[] = "Return Values Test";
static const char aRetL101D[] = "RET-BASIC: %d\n";
static const char aRetL102D[] = "RET-POINTER: %d\n";
static const char aRetL103D[] = "RET-STRUCT: %d\n";
static const char aRetL104D[] = "RET-VOID: %p\n";
static const char aRetL201D[] = "RET-OPAQUE-HANDLE: %d\n";
static const char aRetL202D[] = "RET-OPAQUE: %d\n";
static const char aRetL301D[] = "RET-COMPLEX: %d\n";
static const char aRetL302D[] = "RET-MULTI: %d\n";
static const char aRetL303D[] = "RET-VOID2: %d\n";

/* Data references defined locally */
static int ret_opaque_handle_handle1_val = 10;
static int *ret_opaque_handle_handle1[] = { &ret_opaque_handle_handle1_val };
static int *ret_opaque_handle_handle2[] = { &ret_opaque_handle_handle1_val };
static const char loc_18E5 = 0;
static char dword_64 = 0;
static char dword_74 = 0;




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" : : );
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




/* Stub for _do_global_dtors_aux */
void _do_global_dtors_aux(void) { }




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


/* Function: cdecl_func @ 0x1204 */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x120D */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1213 */
int stdcall_func(int a1, int a2)
{
 return a1 * a2;
}


/* Function: call_stdcall @ 0x121F */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1225 */
int fastcall_func(int a1, int a2, int a3)
{
 return a3 + a1 + a2;
}


/* Function: call_fastcall @ 0x122F */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1235 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x123B */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_arm_aapcs @ 0x1250 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1256 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_mips @ 0x1267 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x126D */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: call_amd64_sysv @ 0x1286 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x128C */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_ms_x64 @ 0x12A1 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x12A7 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_vectorcall @ 0x12B8 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x12BE */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x12C4 */
int varargs_func(int a1, char a2, int a3)
{
 int v3; // ecx
 int *v4; // edx
 int result; // eax

 v3 = a1;
 if ( a1 <= 0 )
 return 0;
 v4 = &a3;
 result = 0;
 do
 {
 result += *(v4++ - 1);
 --v3;
 }
 while ( v3 );
 return result;
}


/* Function: func_no_args @ 0x12EE */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x12F4 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: func_mixed_args @ 0x1315 */
int func_mixed_args(int a1, char *s, double a3, long long a4)
{
 long double v4; // fst7
 size_t v5; // eax

 v4 = a3;
 if ( s )
 {
 v5 = strlen(s);
 v4 = a3;
 }
 else
 {
 v5 = 0;
 }
 return (int)(v4 + (long double)(int)(a1 + v5) + (long double)a4);
}


/* Function: func_struct_byval @ 0x1397 */
int func_struct_byval(char a1)
{
 int v1; // ecx
 long long v2; // kr00_8
 int result; // eax

 v1 = 0;
 v2 = 0;
 do
 {
 v2 += *((unsigned long long *)&a1 + v1);
 result = v2;
 ++v1;
 }
 while ( v1 != 16 );
 return result;
}


/* Function: func_struct_byptr @ 0x13B1 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return *a1 * a1[1];
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x13C4 */
int test_calling_conventions()
{
 int v0; // eax
 int i; // eax
 int v2; // ecx
 int v3; // eax
 unsigned int v6[2]; // [esp+4h] [ebp-90h]

 v6[0] = 5073;
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
 v0 = varargs_func(5, 1, 2);
 printf(aCallL206, v0);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 for ( i = 1; i != 17; ++i )
 {
 v6[2 * i] = 0;
 v6[2 * i - 1] = i;
 }
 v2 = 0;
 v3 = 0;
 do
 v3 += v6[2 * v2++ + 1];
 while ( v2 != 16 );
 printf(aCallL210, v3);
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1541 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x1548 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x154E */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1558 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x155E */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x1564 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x156A */
int param_string(char *a1)
{
 return *a1 + a1[1];
}


/* Function: call_string_param @ 0x1578 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x157E */
int param_ptr_array(int a1, int a2)
{
 int v2; // esi
 int result; // eax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += **(char **)(a1 + 4 * v2++);
 while ( a2 != v2 );
 return result;
}


/* Function: call_ptr_array @ 0x15A4 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x15AA */
int param_varargs(int a1, char a2, int a3)
{
 int v3; // ecx
 int *v4; // edx
 int result; // eax

 v3 = a1;
 if ( a1 <= 0 )
 return 0;
 v4 = &a3;
 result = 0;
 do
 {
 result += *(v4++ - 1);
 --v3;
 }
 while ( v3 );
 return result;
}


/* Function: call_varargs_param @ 0x15D4 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20);
}


/* Function: param_func_ptr @ 0x15FB */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x161E */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1624 */
int param_double_ptr(unsigned int **a1, int a2)
{
 int result; // eax

 result = -1;
 if ( a1 )
 {
 if ( *a1 )
 {
 **a1 = a2;
 *a1 = 0;
 return 1;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x1645 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x164B */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( a2 == 1 )
 return *a1 + a1[1];
 if ( a2 )
 return -1;
 return *a1;
}


/* Function: call_complex_cast @ 0x1669 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x166F */
int param_struct_byval(
 int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16)
{
 return a1 + a16;
}


/* Function: call_struct_byval @ 0x1678 */
int call_struct_byval()
{
 int i; // eax
 unsigned int v2[17]; // [esp+0h] [ebp-44h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 return v2[0] + v2[15];
}


/* Function: param_order_dep @ 0x1691 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x169A */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x16A0 */
int test_parameter_passing()
{
 int v0; // eax
 int i; // eax
 unsigned int v3[19]; // [esp+0h] [ebp-4Ch]

 puts(asc_2373);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n");
 v0 = param_varargs(4, 10, 20);
 printf("PARAM-L2-04: %d\n", v0);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 for ( i = 0; i != 16; ++i )
 v3[i] = i;
 printf("PARAM-L3-04: %d\n", v3[0] + v3[15]);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x17B7 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x17BE */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x17C4 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x17CC */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x17D2 */
unsigned int *ret_small_struct(unsigned int *a1, int a2, int a3)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x17E6 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x17EC */
long long ret_large_struct(long long a1)
{
 long long result; // rax
 int i; // ecx

 result = a1;
 for ( i = 0; i != 16; ++i )
 *(unsigned int *)(a1 + 4 * i) = HIDWORD(a1) + i;
 return result;
}


/* Function: call_ret_large_struct @ 0x1807 */
int call_ret_large_struct()
{
 int i; // eax
 unsigned int v2[117]; // [esp+0h] [ebp-1D4h]

 for ( i = 100; i != 116; ++i )
 v2[i] = i;
 return v2[100] + v2[115];
}


/* Function: func_a @ 0x1827 */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x182F */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: ret_func_ptr @ 0x1836 */
int ( * ret_func_ptr(int a1))(int a1)
{
 int ( *result)(int); // eax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1857 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x185D */
int ** ret_opaque_handle(int a1)
{
 int **result; // eax

 result = (int **)&ret_opaque_handle_handle2;
 if ( !a1 )
 return ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x187E */
int *call_ret_opaque()
{
 return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0x1891 */
int ret_complex_expr(int a1, int a2, int a3)
{
 int result; // eax

 result = a3 + 10;
 if ( a1 > a2 )
 return 2 * a3;
 return result;
}


/* Function: call_ret_complex_expr @ 0x18A7 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x18AD */
int ret_multi_branch(unsigned int a1)
{
 int result; // eax

 result = 10 * a1 + 10;
 if ( a1 >= 3 )
 return -1;
 return result;
}


/* Function: call_ret_multi_branch @ 0x18C2 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x18C8 */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x18D6 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x18DC */
int test_return_values()
{
 char *v0; // eax
 char *v2[117]; // [esp+0h] [ebp-1D4h]

 v2[97] = (unsigned char *)&loc_18E5;
 puts(asc_2394);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 v0 = (char *)&dword_64;
 do
 {
 v2[(unsigned int)v0] = v0;
 ++v0;
 }
 while ( v0 != (char *)&dword_74 );
 printf(aRetL104D, &v2[100][(unsigned int)v2[115]]);
 printf(aRetL201D, 10);
 printf(aRetL202D, ret_opaque_handle_handle1[0]);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 return printf(aRetL303D, 21);
}


/* Function: main @ 0x19DD */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A5C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4044 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: __cxa_finalize @ 0x404C */

/* FAILED to decompile: puts @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4054 */

/* Total functions decompiled: 84, failed: 5 */
