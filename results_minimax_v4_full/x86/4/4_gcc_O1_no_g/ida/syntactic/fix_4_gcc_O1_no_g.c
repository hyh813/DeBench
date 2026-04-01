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

/* Helper macros for accessing low/high words of 64-bit values */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))

/* Stub for Windows TLS read intrinsic - returns 0 as placeholder */
static inline unsigned int __readgsdword_replacement(unsigned int offset)
{
    /* TLS read stub - in real Windows this reads from GS:[offset] */
    return 0;
}

/* Data references from binary */
extern char asc_2008;
extern char unk_202C;
extern char unk_2054;
extern char unk_2078;
extern char unk_20A0;
extern char unk_20C8;
extern char unk_20F4;
extern char unk_2124;
extern char unk_22CA;
extern char unk_22E6;
extern char unk_2302;
extern char unk_231D;
extern char unk_233A;
extern char unk_2356;
extern char unk_2373;
extern char unk_238F;
extern char unk_23AB;

/* Handle variables */
int *handle1_1;
int *handle2_0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_gcc_O1_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *%%ebx" : : "b" (8));
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




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




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


/* Function: callback_func @ 0x1261 */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: func_a @ 0x126C */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x1278 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x1283 */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x1290 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x129A */
int stdcall_func(int a1, int a2)
{
 return a1 * a2;
}


/* Function: call_stdcall @ 0x12AA */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x12B4 */
int fastcall_func(int a1, int a2, int a3)
{
 return a3 + a1 + a2;
}


/* Function: call_fastcall @ 0x12C2 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x12CC */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x12D6 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_arm_aapcs @ 0x12EF */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x12F9 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_mips @ 0x130E */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1318 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: call_amd64_sysv @ 0x1335 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x133F */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_ms_x64 @ 0x1358 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1362 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_vectorcall @ 0x1377 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1381 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x138B */
int varargs_func(int a1, char a2)
{
 char *v2; // eax
 int v3; // edx
 int v4; // ecx
 char *v5; // ebx

 if ( a1 <= 0 )
 return 0;
 v2 = &a2;
 v3 = 0;
 v4 = 0;
 do
 {
 v5 = v2;
 v2 += 4;
 v4 += *(unsigned int *)v5;
 ++v3;
 }
 while ( a1 != v3 );
 return v4;
}


/* Function: func_no_args @ 0x13C1 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x13CB */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: func_mixed_args @ 0x13F0 */
int func_mixed_args(int a1, char *s, double a3, long long a4)
{
 size_t v4; // eax

 v4 = 0;
 if ( s )
 v4 = strlen(s);
 return (int)((long double)(int)(a1 + v4) + a3 + (long double)a4);
}


/* Function: func_struct_byval @ 0x146E */
int func_struct_byval(
 char a1,
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
 int a16,
 int a17,
 int a18,
 int a19,
 int a20,
 int a21,
 int a22,
 int a23,
 int a24,
 int a25,
 int a26,
 int a27,
 int a28,
 int a29,
 int a30,
 int a31,
 int a32,
 char a33)
{
 char *v33; // edx
 long long v34; // rcx

 v33 = &a1;
 v34 = 0;
 do
 {
 v34 += *(unsigned long long *)v33;
 v33 += 8;
 }
 while ( v33 != &a33 );
 return v34;
}


/* Function: func_struct_byptr @ 0x1498 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x14B1 - DELETED (references CRT stub symbols) */


/* Function: param_by_value_int @ 0x16AF */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x16BA */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16C4 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 = *a1 * 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16D4 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16DE */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x16E8 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x16F2 */
int param_string(char *a1)
{
 return a1[1] + *a1;
}


/* Function: call_string_param @ 0x1704 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x170E */
int param_ptr_array(char **a1, int a2)
{
 char **v2; // eax
 int v3; // edx

 if ( a2 <= 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 v3 += **v2++;
 while ( v2 != &a1[a2] );
 return v3;
}


/* Function: call_ptr_array @ 0x1742 */
int call_ptr_array()
{
 char *v1[7]; // [esp+0h] [ebp-1Ch] BYREF

 v1[0] = "abc";
 v1[1] = "def";
 v1[2] = "ghi";
 return param_ptr_array(v1, 3);
}


/* Function: param_varargs @ 0x17A2 */
int param_varargs(int a1, char a2)
{
 char *v2; // eax
 int v3; // edx
 int v4; // ecx
 char *v5; // ebx

 if ( a1 <= 0 )
 return 0;
 v2 = &a2;
 v3 = 0;
 v4 = 0;
 do
 {
 v5 = v2;
 v2 += 4;
 v4 += *(unsigned int *)v5;
 ++v3;
 }
 while ( a1 != v3 );
 return v4;
}


/* Function: call_varargs_param @ 0x17D8 */
int call_varargs_param()
{
 return param_varargs(4, 10);
}


/* Function: param_func_ptr @ 0x17EF */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1805 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x1828 */
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 )
 return -1;
 if ( !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1858 */
long long call_double_ptr()
{
 long long result; // rax
 unsigned int v1; // [esp+4h] [ebp-18h] BYREF
 unsigned int *v2; // [esp+8h] [ebp-14h] BYREF

 v1 = 10;
 v2 = &v1;
 param_double_ptr(v2, 20);
 result = ((unsigned int)(v1 + (v2 == 0))) | (((unsigned int)((unsigned int)v1 - __readgsdword_replacement(0x14u))) << 32);
 return result;
}


/* Function: param_complex_cast @ 0x18AF */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return -1;
}


/* Function: call_complex_cast @ 0x18D3 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x18DD */
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


/* Function: call_struct_byval @ 0x18EA */
long long call_struct_byval()
{
 int i; // eax
 long long result; // rax
 unsigned int v2[16]; // [esp+Ch] [ebp-50h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 LODWORD(result) = v2[15] + v2[0];
 HIDWORD(result) = 0 - __readgsdword_replacement(0x14u);
 return result;
}


/* Function: param_order_dep @ 0x1927 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x1934 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x193E - DELETED (references CRT stub symbols) */


/* Function: ret_basic_type @ 0x1A52 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x1A5D */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1A67 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1A73 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1A7D */
unsigned int * ret_small_struct(unsigned int *a1, int a2, int a3)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x1A95 */
int call_ret_small_struct()
{
 unsigned int v1[2]; // [esp+0h] [ebp-8h]
 ret_small_struct(v1, 3, 4);
 return v1[0] + v1[1];
}


/* Function: ret_large_struct @ 0x1A9F */
unsigned int * ret_large_struct(unsigned int *a1, int a2)
{
 int v2; // eax
 unsigned int v4[20]; // [esp+Ch] [ebp-50h] BYREF

 v4[16] = __readgsdword_replacement(0x14u);
 v2 = a2;
 do
 {
 v4[v2 - a2] = v2;
 ++v2;
 }
 while ( v2 != a2 + 16 );
 *a1 = v4[0];
 a1[1] = v4[1];
 a1[2] = v4[2];
 a1[3] = v4[3];
 a1[4] = v4[4];
 a1[5] = v4[5];
 a1[6] = v4[6];
 a1[7] = v4[7];
 a1[8] = v4[8];
 a1[9] = v4[9];
 a1[10] = v4[10];
 a1[11] = v4[11];
 a1[12] = v4[12];
 a1[13] = v4[13];
 a1[14] = v4[14];
 a1[15] = v4[15];
 return a1;
}


/* Function: call_ret_large_struct @ 0x1B5A */
long long call_ret_large_struct()
{
 long long result; // rax
 unsigned int v1[16]; // [esp+Ch] [ebp-50h] BYREF
 unsigned int v2; // [esp+4Ch] [ebp-10h]

 v2 = __readgsdword_replacement(0x14u);
 ret_large_struct(v1, 100);
 LODWORD(result) = v1[0] + v1[15];
 HIDWORD(result) = v2 - __readgsdword_replacement(0x14u);
 return result;
}


/* Function: ret_func_ptr @ 0x1B9D */
int ( * ret_func_ptr(int a1))(int a1)
{
 int ( *result)(int); // eax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1BC0 */
int call_ret_func_ptr()
{
 return func_b(5);
}


/* Function: ret_opaque_handle @ 0x1BCF */
int ** ret_opaque_handle(int a1)
{
 int **result; // eax

 result = &handle1_1;
 if ( a1 )
 return (int **)&handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1BF2 */
int *call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1C07 */
int ret_complex_expr(int a1, int a2, int a3)
{
 int result; // eax

 result = a3 + 10;
 if ( a1 > a2 )
 return 2 * a3;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C21 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C2B */
int ret_multi_branch(int a1)
{
 int result; // eax

 result = 20;
 if ( a1 != 1 )
 {
 result = 30;
 if ( a1 != 2 )
 return a1 == 0 ? 10 : -1;
 }
 return result;
}


/* Function: call_ret_multi_branch @ 0x1C53 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1C5D */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x1C6F */
int call_ret_void()
{
 return 21;
}


/* Function: main @ 0x1D5C */
int main(int argc, const char **argv, const char **envp)
{
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1D7C */
void *_x86_get_pc_thunk_ax()
{
 void **retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x1D80 */
void _stack_chk_fail_local()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x5020 */

/* FAILED to decompile: __stack_chk_fail @ 0x5024 */

/* FAILED to decompile: __cxa_finalize @ 0x5028 */

/* FAILED to decompile: puts @ 0x502C */

/* FAILED to decompile: strlen @ 0x5030 */

/* FAILED to decompile: __printf_chk @ 0x5034 */

/* Total functions decompiled: 92, failed: 6 */
