/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/4/4_gcc_O3_no_g
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


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1020();
}


/* Function: varargs_func.cold @ 0x10C0 */
void __fastcall varargs_func_cold(int a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  int v5; // eax
  _DWORD *v6; // rcx

  do
  {
    v6 = a3;
    ++v5;
    a3 += 2;
    a5 += *v6;
  }
  while ( a1 > v5 );
  JUMPOUT(0x14E0);
}


/* Function: param_varargs.cold @ 0x10DB */
void __fastcall param_varargs_cold(int a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  int v5; // eax
  _DWORD *v6; // rcx

  do
  {
    v6 = a3;
    ++v5;
    a3 += 2;
    a5 += *v6;
  }
  while ( a1 > v5 );
  JUMPOUT(0x1960);
}


/* Function: main @ 0x1100 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions(argc, argv, envp);
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: _start @ 0x1130 */
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


/* Function: deregister_tm_clones @ 0x1160 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1190 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11D0 */
void *_do_global_dtors_aux()
{
  void *result; // rax

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1210 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: func_a @ 0x1220 */
__int64 __fastcall func_a(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: param_varargs.constprop.0 @ 0x1230 */
__int64 __fastcall param_varargs_constprop_0(__int64 a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a5 + a4 + a2 + a3);
}


/* Function: varargs_func.constprop.0 @ 0x12A0 */
__int64 __fastcall varargs_func_constprop_0(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a6 + a5 + a4 + a2 + a3);
}


/* Function: func_b @ 0x1320 */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x1330 */
__int64 __fastcall cdecl_func(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x1340 */
__int64 call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x1350 */
__int64 __fastcall stdcall_func(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x1360 */
__int64 call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x1370 */
__int64 __fastcall fastcall_func(int a1, int a2, int a3)
{
  return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x1380 */
__int64 call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x1390 */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x13A0 */
__int64 __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_arm_aapcs @ 0x13B0 */
__int64 call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x13C0 */
__int64 __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_mips @ 0x13D0 */
__int64 call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x13E0 */
__int64 __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: call_amd64_sysv @ 0x1400 */
__int64 call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x1410 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x1420 */
__int64 call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x1430 */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1440 */
__int64 call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x1450 */
__int64 mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x1460 */
void __fastcall varargs_func(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8)
{
  unsigned int v8; // edx
  int v9; // eax
  int v10; // r8d
  int v11; // r8d
  _BYTE v12[8]; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  v17 = a6;
  if ( a1 > 0 )
  {
    v8 = 8;
    v9 = 0;
    v10 = 0;
    while ( v8 <= 0x2F )
    {
      a2 = v8;
      ++v9;
      v8 += 8;
      v10 += *(_DWORD *)&v12[a2];
      if ( a1 == v9 )
        return;
    }
    v11 = a7 + v10;
    if ( a1 != v9 + 1 )
      varargs_func_cold(a1, a2, &a8, (__int64)&a7, v11);
  }
}


/* Function: func_no_args @ 0x1530 */
__int64 func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1540 */
__int64 __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (unsigned int)(a8 + a7 + a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: func_mixed_args @ 0x1560 */
__int64 __fastcall func_mixed_args(int a1, const char *a2, int a3, double a4)
{
  double v4; // xmm1_8
  int v6; // ebx

  v4 = a4;
  v6 = a1;
  if ( a2 )
  {
    v4 = a4;
    v6 = strlen(a2) + a1;
  }
  return (unsigned int)(int)((double)v6 + v4 + (double)a3);
}


/* Function: func_struct_byval @ 0x15C0 */
unsigned __int64 __fastcall func_struct_byval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10,
        __int128 a11,
        __int128 a12,
        __int128 a13,
        __int128 a14)
{
  __m128i v14; // xmm0

  v14 = _mm_add_epi64(
          _mm_add_epi64(
            _mm_add_epi64(
              _mm_add_epi64(
                _mm_add_epi64(
                  _mm_add_epi64(
                    _mm_add_epi64(_mm_loadu_si128((const __m128i *)&a7), _mm_loadu_si128((const __m128i *)&a8)),
                    _mm_loadu_si128((const __m128i *)&a9)),
                  _mm_loadu_si128((const __m128i *)&a10)),
                _mm_loadu_si128((const __m128i *)&a11)),
              _mm_loadu_si128((const __m128i *)&a12)),
            _mm_loadu_si128((const __m128i *)&a13)),
          _mm_loadu_si128((const __m128i *)&a14));
  return _mm_add_epi64(v14, _mm_srli_si128(v14, 8)).m128i_u64[0];
}


/* Function: func_struct_byptr @ 0x1630 */
__int64 __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return (unsigned int)(a1[1] * *a1);
  else
    return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x1650 */
__int64 test_calling_conventions()
{
  unsigned int v0; // eax

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
  v0 = varargs_func_constprop_0(5, 1, 2, 3, 4, 5);
  __printf_chk(1, aCallL206, v0);
  __printf_chk(1, aCallL207, 42);
  __printf_chk(1, aCallL208, 36);
  __printf_chk(1, aCallL209, 117);
  __printf_chk(1, aCallL210, 136);
  return __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1810 */
__int64 __fastcall param_by_value_int(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1820 */
__int64 call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x1830 */
__int64 __fastcall param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x1840 */
__int64 call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x1850 */
__int64 param_array_decay()
{
  return 8;
}


/* Function: call_array_decay @ 0x1860 */
__int64 call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x1870 */
__int64 __fastcall param_string(char *a1)
{
  return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x1880 */
__int64 call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x1890 */
__int64 __fastcall param_ptr_array(char **a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  char *v4; // rdx

  if ( a2 <= 0 )
    return 0;
  v2 = (__int64)&a1[(unsigned int)(a2 - 1) + 1];
  LODWORD(result) = 0;
  do
  {
    v4 = *a1++;
    result = (unsigned int)(*v4 + (_DWORD)result);
  }
  while ( (char **)v2 != a1 );
  return result;
}


/* Function: call_ptr_array @ 0x18D0 */
__int64 call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0x18E0 */
void __fastcall param_varargs(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8)
{
  unsigned int v8; // edx
  int v9; // eax
  int v10; // r8d
  int v11; // r8d
  _BYTE v12[8]; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  v17 = a6;
  if ( a1 > 0 )
  {
    v8 = 8;
    v9 = 0;
    v10 = 0;
    while ( v8 <= 0x2F )
    {
      a2 = v8;
      ++v9;
      v8 += 8;
      v10 += *(_DWORD *)&v12[a2];
      if ( a1 == v9 )
        return;
    }
    v11 = a7 + v10;
    if ( a1 != v9 + 1 )
      param_varargs_cold(a1, a2, &a8, (__int64)&a7, v11);
  }
}


/* Function: call_varargs_param @ 0x19B0 */
__int64 call_varargs_param()
{
  return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x19E0 */
__int64 __fastcall param_func_ptr(unsigned int (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1A00 */
__int64 call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0x1A10 */
__int64 __fastcall param_double_ptr(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( !a1 || !*a1 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)*a1 = a2;
  result = 1;
  *a1 = 0;
  return result;
}


/* Function: call_double_ptr @ 0x1A40 */
__int64 call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x1A50 */
__int64 __fastcall param_complex_cast(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *a1 + a1[1];
  return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1A80 */
__int64 call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x1A90 */
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


/* Function: call_struct_byval @ 0x1AA0 */
__int64 call_struct_byval()
{
  return 15;
}


/* Function: param_order_dep @ 0x1AB0 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1AC0 */
__int64 call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x1AD0 */
__int64 test_parameter_passing()
{
  int v0; // eax

  puts(asc_2130);
  __printf_chk(1, "PARAM-L1-01: %d\n", 15);
  __printf_chk(1, "PARAM-L1-02: %d\n", 11);
  __printf_chk(1, "PARAM-L2-01: %d\n", 8);
  __printf_chk(1, "PARAM-L2-02: %d\n", 173);
  __printf_chk(1, "PARAM-L2-03: %d\n", 300);
  v0 = param_varargs_constprop_0(4, 10, 20, 30, 40);
  __printf_chk(1, "PARAM-L2-04: %d\n", v0);
  __printf_chk(1, "PARAM-L3-01: %d\n", 20);
  __printf_chk(1, "PARAM-L3-02: %d\n", 21);
  __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
  __printf_chk(1, "PARAM-L3-04: %d\n", 15);
  return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1C10 */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1C20 */
__int64 call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x1C30 */
__int64 __fastcall ret_pointer(__int64 a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1C40 */
__int64 call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x1C50 */
unsigned __int64 __fastcall ret_small_struct(unsigned int a1, unsigned int a2)
{
  return _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a2)).m128i_u64[0];
}


/* Function: call_ret_small_struct @ 0x1C70 */
__int64 call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x1C80 */
__m128i *__fastcall ret_large_struct(__m128i *a1, unsigned int a2)
{
  __m128i *result; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm5
  __m128i v5; // xmm6

  result = a1;
  v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  v4 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_23E0), v3);
  v5 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_23F0), v3);
  *a1 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_23D0), v3);
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = _mm_add_epi32(v3, (__m128i)xmmword_2400);
  return result;
}


/* Function: call_ret_large_struct @ 0x1D00 */
__int64 call_ret_large_struct()
{
  return 215;
}


/* Function: ret_func_ptr @ 0x1D10 */
__int64 (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = func_b;
  if ( !a1 )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1D30 */
__int64 call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x1D40 */
int *__fastcall ret_opaque_handle(int a1)
{
  int *result; // rax

  result = &handle1_1;
  if ( a1 )
    return (int *)&handle2_0;
  return result;
}


/* Function: call_ret_opaque @ 0x1D60 */
__int64 call_ret_opaque()
{
  return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1D70 */
__int64 __fastcall ret_complex_expr(int a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v4; // edx

  result = (unsigned int)(2 * a3);
  v4 = a3 + 10;
  if ( a1 <= a2 )
    return v4;
  return result;
}


/* Function: call_ret_complex_expr @ 0x1D80 */
__int64 call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1D90 */
__int64 __fastcall ret_multi_branch(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 2 )
    return 2 * (5 * a1 + 5);
  return result;
}


/* Function: call_ret_multi_branch @ 0x1DB0 */
__int64 call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1DC0 */
__int64 __fastcall ret_void(int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)(3 * a1);
  *a2 = result;
  return result;
}


/* Function: call_ret_void @ 0x1DD0 */
__int64 call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1DE0 */
__int64 test_return_values()
{
  puts(asc_22AC);
  __printf_chk(1, aRetL101D, 42);
  __printf_chk(1, aRetL102D, 20);
  __printf_chk(1, aRetL103D, 7);
  __printf_chk(1, aRetL104D, 215);
  __printf_chk(1, aRetL201D, 10);
  __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
  __printf_chk(1, aRetL301D, 40);
  __printf_chk(1, aRetL302D, 60);
  return __printf_chk(1, aRetL303D, 21);
}


/* Function: .term_proc @ 0x1ED4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4028 */

/* FAILED to decompile: puts @ 0x4030 */

/* FAILED to decompile: strlen @ 0x4038 */

/* FAILED to decompile: __stack_chk_fail @ 0x4040 */

/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4050 */

/* FAILED to decompile: __gmon_start__ @ 0x4060 */

/* Total functions decompiled: 86, failed: 7 */
