/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/4/4_clang_Os_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (__int64 (**)(void))_gmon_start__();
  return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x1070 */
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (*)(int, char **, char **))main, v4, &retaddr, 0, 0, a3, &v5);
  __halt();
}


/* Function: deregister_tm_clones @ 0x10A0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10D0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1110 */
char *_do_global_dtors_aux()
{
  char *result; // rax

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1150 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: cdecl_func @ 0x115C */
__int64 __fastcall cdecl_func(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x1160 */
__int64 call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x1166 */
__int64 __fastcall stdcall_func(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x116C */
__int64 call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x1172 */
__int64 __fastcall fastcall_func(int a1, int a2, int a3)
{
  return (unsigned int)(a3 + a1 + a2);
}


/* Function: call_fastcall @ 0x1178 */
__int64 call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x117E */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1184 */
__int64 __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_arm_aapcs @ 0x118F */
__int64 call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x1195 */
__int64 __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_mips @ 0x119D */
__int64 call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x11A3 */
__int64 __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: call_amd64_sysv @ 0x11B1 */
__int64 call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x11B7 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_ms_x64 @ 0x11C2 */
__int64 call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x11C8 */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_vectorcall @ 0x11D0 */
__int64 call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x11D6 */
__int64 mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x11DC */
__int64 varargs_func(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7, ...)
{
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // kr00_8
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v12[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+30h] [rbp-A8h]
  __int64 v15; // [rsp+38h] [rbp-A0h]
  __int64 v16; // [rsp+40h] [rbp-98h]
  __int64 v17; // [rsp+48h] [rbp-90h]

  va_start(va, a7);
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  v17 = a6;
  if ( a1 <= 0 )
    return 0;
  LODWORD(result) = 0;
  v8 = 8;
  do
  {
    if ( v8 > 0x28 )
    {
      v10 = va_arg(va, _QWORD);
      v9 = &v10;
    }
    else
    {
      v9 = (__int64 *)&v12[v8];
      v8 += 8;
    }
    result = (unsigned int)(*(_DWORD *)v9 + result);
    --a1;
  }
  while ( a1 );
  return result;
}


/* Function: func_no_args @ 0x1281 */
__int64 func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1287 */
__int64 __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (unsigned int)(a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: func_mixed_args @ 0x129D */
__int64 __fastcall func_mixed_args(int a1, const char *a2, int a3, double a4)
{
  int v5; // eax

  if ( a2 )
    v5 = strlen(a2);
  else
    v5 = 0;
  return (unsigned int)(int)((double)a3 + (double)(a1 + v5) + a4);
}


/* Function: func_struct_byval @ 0x12DE */
unsigned __int64 __fastcall func_struct_byval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __m128i v7; // xmm0
  __int64 i; // rcx

  v7 = 0;
  for ( i = 0; i != 16; i += 2 )
    v7 = _mm_add_epi64(v7, _mm_loadu_si128((const __m128i *)(&a7 + 8 * i)));
  return _mm_add_epi64(_mm_shuffle_epi32(v7, 238), v7).m128i_u64[0];
}


/* Function: func_struct_byptr @ 0x130B */
__int64 __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return (unsigned int)(*a1 * a1[1]);
  else
    return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x131D */
int __fastcall test_calling_conventions(double a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __m128i si128; // xmm0
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  __int64 i; // rax
  _OWORD v8[8]; // [rsp+0h] [rbp-88h] BYREF

  puts(s);
  v1 = 0;
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
  v2 = varargs_func(5, 1, 2, 3, 4, 5, a1);
  printf(aCallL206, v2);
  printf(aCallL207, 42);
  printf(aCallL208, 36);
  printf(aCallL209, 117);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
  v4 = _mm_load_si128((const __m128i *)&xmmword_2020);
  do
  {
    v8[v1++] = _mm_sub_epi64(si128, (__m128i)-1LL);
    si128 = _mm_add_epi64(si128, v4);
  }
  while ( v1 != 8 );
  v5 = 0;
  for ( i = 0; i != 8; ++i )
    v5 = _mm_add_epi64(v5, _mm_loadu_si128((const __m128i *)&v8[i]));
  printf(aCallL210, _mm_add_epi64(_mm_shuffle_epi32(v5, 238), v5).m128i_u64[0]);
  return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x14E0 */
__int64 __fastcall param_by_value_int(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x14E4 */
__int64 call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x14EA */
__int64 __fastcall param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x14F2 */
__int64 call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x14F8 */
__int64 param_array_decay()
{
  return 8;
}


/* Function: call_array_decay @ 0x14FE */
__int64 call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x1504 */
__int64 __fastcall param_string(char *a1)
{
  return (unsigned int)(*a1 + a1[1]);
}


/* Function: call_string_param @ 0x150E */
__int64 call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x1514 */
__int64 __fastcall param_ptr_array(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  LODWORD(result) = 0;
  do
    result = (unsigned int)(**(char **)(a1 + 8 * v2++) + (_DWORD)result);
  while ( a2 != v2 );
  return result;
}


/* Function: call_ptr_array @ 0x1533 */
__int64 call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0x1539 */
__int64 param_varargs(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7, ...)
{
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // kr00_8
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v12[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+30h] [rbp-A8h]
  __int64 v15; // [rsp+38h] [rbp-A0h]
  __int64 v16; // [rsp+40h] [rbp-98h]
  __int64 v17; // [rsp+48h] [rbp-90h]

  va_start(va, a7);
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  v17 = a6;
  if ( a1 <= 0 )
    return 0;
  LODWORD(result) = 0;
  v8 = 8;
  do
  {
    if ( v8 > 0x28 )
    {
      v10 = va_arg(va, _QWORD);
      v9 = &v10;
    }
    else
    {
      v9 = (__int64 *)&v12[v8];
      v8 += 8;
    }
    result = (unsigned int)(*(_DWORD *)v9 + result);
    --a1;
  }
  while ( a1 );
  return result;
}


/* Function: call_varargs_param @ 0x15DE */
__int64 __fastcall call_varargs_param(
        double a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return param_varargs(4, 10, 20, 30, 40, a7, a1);
}


/* Function: param_func_ptr @ 0x15FF */
__int64 __fastcall param_func_ptr(unsigned int (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x160C */
__int64 call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0x1612 */
__int64 __fastcall param_double_ptr(_DWORD **a1, int a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
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


/* Function: call_double_ptr @ 0x1633 */
__int64 call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x1639 */
__int64 __fastcall param_complex_cast(unsigned int *a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 1 )
    return *a1 + a1[1];
  result = 0xFFFFFFFFLL;
  if ( !a2 )
    return *a1;
  return result;
}


/* Function: call_complex_cast @ 0x1650 */
__int64 call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x1656 */
__int64 __fastcall param_struct_byval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14)
{
  return (unsigned int)(a7 + HIDWORD(a14));
}


/* Function: call_struct_byval @ 0x165F */
__int64 call_struct_byval()
{
  return 15;
}


/* Function: param_order_dep @ 0x1680 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1684 */
__int64 call_order_dep()
{
  return 3;
}


/* Function: test_parameter_passing @ 0x168A */
int __fastcall test_parameter_passing(double a1)
{
  __int64 v1; // r9
  int v2; // eax

  puts(asc_23EB);
  printf("PARAM-L1-01: %d\n", 15);
  printf("PARAM-L1-02: %d\n", 11);
  printf("PARAM-L2-01: %d\n", 8);
  printf("PARAM-L2-02: %d\n", 173);
  printf("PARAM-L2-03: %d\n", 300);
  v2 = param_varargs(4, 10, 20, 30, 40, v1, a1);
  printf("PARAM-L2-04: %d\n", v2);
  printf("PARAM-L3-01: %d\n", 20);
  printf("PARAM-L3-02: %d\n", 21);
  printf("PARAM-L3-03: %d\n", 305419896);
  printf("PARAM-L3-04: %d\n", 15);
  return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x17A6 */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x17AA */
__int64 call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x17B0 */
__int64 __fastcall ret_pointer(__int64 a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x17B5 */
__int64 call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x17BB */
__int64 __fastcall ret_small_struct(unsigned int a1, __int64 a2)
{
  return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x17C5 */
__int64 call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x17CB */
__int64 __fastcall ret_large_struct(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __m128i v3; // xmm0
  __m128i si128; // xmm1
  __int64 v5; // rcx
  __m128i v6; // xmm2

  result = a1;
  v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2030);
  v5 = 0;
  v6 = _mm_load_si128((const __m128i *)&xmmword_2050);
  do
  {
    *(__m128i *)(a1 + 4 * v5) = _mm_add_epi32(si128, v3);
    v5 += 4;
    si128 = _mm_add_epi32(si128, v6);
  }
  while ( v5 != 16 );
  return result;
}


/* Function: call_ret_large_struct @ 0x1805 */
__int64 call_ret_large_struct()
{
  return 215;
}


/* Function: func_a @ 0x1826 */
__int64 __fastcall func_a(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x182A */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x182E */
__int64 (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = func_b;
  if ( !a1 )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1843 */
__int64 call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x1849 */
int *__fastcall ret_opaque_handle(int a1)
{
  int *result; // rax

  result = (int *)&ret_opaque_handle_handle2;
  if ( !a1 )
    return &ret_opaque_handle_handle1;
  return result;
}


/* Function: call_ret_opaque @ 0x185E */
__int64 call_ret_opaque()
{
  return (unsigned int)ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1865 */
__int64 __fastcall ret_complex_expr(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)(a3 + 10);
  if ( a1 > a2 )
    return (unsigned int)(2 * a3);
  return result;
}


/* Function: call_ret_complex_expr @ 0x1871 */
__int64 call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1877 */
__int64 __fastcall ret_multi_branch(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 < 3 )
    return 10 * a1 + 10;
  return result;
}


/* Function: call_ret_multi_branch @ 0x188A */
__int64 call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1890 */
__int64 __fastcall ret_void(int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)(3 * a1);
  *a2 = result;
  return result;
}


/* Function: call_ret_void @ 0x1896 */
__int64 call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x189C */
int test_return_values()
{
  puts(asc_240C);
  printf(aRetL101D, 42);
  printf(aRetL102D, 20);
  printf(aRetL103D, 7);
  printf(aRetL104D, 215);
  printf(aRetL201D, 10);
  printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
  printf(aRetL301D, 40);
  printf(aRetL302D, 60);
  return printf(aRetL303D, 21);
}


/* Function: main @ 0x1975 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  double v3; // xmm0_8

  test_calling_conventions(v3);
  test_parameter_passing(v3);
  test_return_values();
  return 0;
}


/* Function: .term_proc @ 0x198C */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4060 */

/* FAILED to decompile: puts @ 0x4068 */

/* FAILED to decompile: strlen @ 0x4070 */

/* FAILED to decompile: printf @ 0x4078 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4080 */

/* FAILED to decompile: __gmon_start__ @ 0x4090 */

/* Total functions decompiled: 78, failed: 6 */
