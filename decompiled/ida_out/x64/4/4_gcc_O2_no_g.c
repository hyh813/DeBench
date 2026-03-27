/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_O2_no_g
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


/* Function: main @ 0x10C0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions(argc, argv, envp);
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: _start @ 0x10F0 */
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


/* Function: deregister_tm_clones @ 0x1120 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1150 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1190 */
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


/* Function: frame_dummy @ 0x11D0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: func_a @ 0x11E0 */
__int64 __fastcall func_a(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x11F0 */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x1200 */
__int64 __fastcall cdecl_func(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x1210 */
__int64 call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x1220 */
__int64 __fastcall stdcall_func(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x1230 */
__int64 call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x1240 */
__int64 __fastcall fastcall_func(int a1, int a2, int a3)
{
  return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x1250 */
__int64 call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x1260 */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1270 */
__int64 __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_arm_aapcs @ 0x1280 */
__int64 call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x1290 */
__int64 __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_mips @ 0x12A0 */
__int64 call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x12B0 */
__int64 __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: call_amd64_sysv @ 0x12D0 */
__int64 call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x12E0 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x12F0 */
__int64 call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x1300 */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1310 */
__int64 call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x1320 */
__int64 mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x1330 */
__int64 __fastcall varargs_func(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ecx
  char *v8; // rsi
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  char *v12; // rdx
  _BYTE v14[8]; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  __int64 v19; // [rsp+48h] [rbp-10h]

  v15 = a2;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  v19 = a6;
  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v7 = 8;
    v8 = &a7;
    v9 = 0;
    v10 = 0;
    do
    {
      while ( v7 <= 0x2F )
      {
        v11 = v7;
        ++v9;
        v7 += 8;
        v10 += *(_DWORD *)&v14[v11];
        if ( a1 == v9 )
          return v10;
      }
      v12 = v8;
      ++v9;
      v8 += 8;
      v10 += *(_DWORD *)v12;
    }
    while ( a1 != v9 );
  }
  return v10;
}


/* Function: func_no_args @ 0x13F0 */
__int64 func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1400 */
__int64 __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (unsigned int)(a8 + a7 + a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: func_mixed_args @ 0x1420 */
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


/* Function: func_struct_byval @ 0x1480 */
__int64 __fastcall func_struct_byval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
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
        char a23)
{
  char *v23; // rdx
  __int64 result; // rax

  v23 = &a7;
  result = 0;
  do
  {
    result += *(_QWORD *)v23;
    v23 += 8;
  }
  while ( v23 != &a23 );
  return result;
}


/* Function: func_struct_byptr @ 0x14B0 */
__int64 __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return (unsigned int)(a1[1] * *a1);
  else
    return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x14D0 */
__int64 test_calling_conventions()
{
  unsigned int v0; // eax
  __int64 i; // rax
  __m128i v2; // xmm1
  __int64 v3; // rdx
  _BYTE *v4; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  __m128i v12; // [rsp+0h] [rbp-118h] BYREF
  __m128i v13; // [rsp+10h] [rbp-108h] BYREF
  __m128i v14; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v15; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v16; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v17; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v18; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v19; // [rsp+70h] [rbp-A8h] BYREF
  _OWORD v20[8]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v21[8]; // [rsp+100h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+108h] [rbp-10h]

  v22 = __readfsqword(0x28u);
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
  v0 = varargs_func(5, 1, 2, 3, 4, 5, v12.m128i_i8[0]);
  __printf_chk(1, aCallL206, v0);
  __printf_chk(1, aCallL207, 42);
  __printf_chk(1, aCallL208, 36);
  __printf_chk(1, aCallL209, 117);
  for ( i = 1; i != 17; ++i )
    v12.m128i_i64[i - 1] = i;
  v2 = _mm_load_si128(&v13);
  v3 = 0;
  v4 = v20;
  v5 = _mm_load_si128(&v14);
  v6 = _mm_load_si128(&v15);
  v7 = _mm_load_si128(&v16);
  v8 = _mm_load_si128(&v17);
  v20[0] = _mm_load_si128(&v12);
  v9 = _mm_load_si128(&v18);
  v10 = _mm_load_si128(&v19);
  v20[1] = v2;
  v20[2] = v5;
  v20[3] = v6;
  v20[4] = v7;
  v20[5] = v8;
  v20[6] = v9;
  v20[7] = v10;
  do
  {
    v3 += *(_QWORD *)v4;
    v4 += 8;
  }
  while ( v21 != v4 );
  __printf_chk(1, aCallL210, v3, v21);
  return __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1770 */
__int64 __fastcall param_by_value_int(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1780 */
__int64 call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x1790 */
__int64 __fastcall param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x17A0 */
__int64 call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x17B0 */
__int64 param_array_decay()
{
  return 8;
}


/* Function: call_array_decay @ 0x17C0 */
__int64 call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x17D0 */
__int64 __fastcall param_string(char *a1)
{
  return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x17E0 */
__int64 call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x17F0 */
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
  while ( a1 != (char **)v2 );
  return result;
}


/* Function: call_ptr_array @ 0x1830 */
__int64 call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0x1840 */
__int64 __fastcall param_varargs(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ecx
  char *v8; // rsi
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  char *v12; // rdx
  _BYTE v14[8]; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  __int64 v19; // [rsp+48h] [rbp-10h]

  v15 = a2;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  v19 = a6;
  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v7 = 8;
    v8 = &a7;
    v9 = 0;
    v10 = 0;
    do
    {
      while ( v7 <= 0x2F )
      {
        v11 = v7;
        ++v9;
        v7 += 8;
        v10 += *(_DWORD *)&v14[v11];
        if ( a1 == v9 )
          return v10;
      }
      v12 = v8;
      ++v9;
      v8 += 8;
      v10 += *(_DWORD *)v12;
    }
    while ( a1 != v9 );
  }
  return v10;
}


/* Function: call_varargs_param @ 0x1900 */
__int64 __fastcall call_varargs_param(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  return param_varargs(4, 10, 20, 30, 40, a6, a7);
}


/* Function: param_func_ptr @ 0x1930 */
__int64 __fastcall param_func_ptr(unsigned int (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1950 */
__int64 call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0x1960 */
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


/* Function: call_double_ptr @ 0x1990 */
__int64 call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x19A0 */
__int64 __fastcall param_complex_cast(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *a1 + a1[1];
  return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x19D0 */
__int64 call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x19E0 */
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


/* Function: call_struct_byval @ 0x19F0 */
__int64 call_struct_byval()
{
  __int64 i; // rax
  _DWORD v2[18]; // [rsp+0h] [rbp-58h]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
    v2[i] = i;
  return (unsigned int)(v2[0] + v2[15]);
}


/* Function: param_order_dep @ 0x1A40 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1A50 */
__int64 call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x1A60 */
__int64 test_parameter_passing()
{
  __int64 v0; // r9
  int v1; // eax
  __int64 i; // rax
  _DWORD v4[18]; // [rsp+0h] [rbp-58h]
  unsigned __int64 v5; // [rsp+48h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  puts(asc_2130);
  __printf_chk(1, "PARAM-L1-01: %d\n", 15);
  __printf_chk(1, "PARAM-L1-02: %d\n", 11);
  __printf_chk(1, "PARAM-L2-01: %d\n", 8);
  __printf_chk(1, "PARAM-L2-02: %d\n", 173);
  __printf_chk(1, "PARAM-L2-03: %d\n", 300);
  v1 = param_varargs(4, 10, 20, 30, 40, v0, v4[0]);
  __printf_chk(1, "PARAM-L2-04: %d\n", v1);
  __printf_chk(1, "PARAM-L3-01: %d\n", 20);
  __printf_chk(1, "PARAM-L3-02: %d\n", 21);
  __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
  for ( i = 0; i != 16; ++i )
    v4[i] = i;
  __printf_chk(1, "PARAM-L3-04: %d\n", v4[0] + v4[15]);
  return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1BE0 */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1BF0 */
__int64 call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x1C00 */
__int64 __fastcall ret_pointer(__int64 a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1C10 */
__int64 call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x1C20 */
__int64 __fastcall ret_small_struct(unsigned int a1, __int64 a2)
{
  return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x1C30 */
__int64 call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x1C40 */
__m128i *__fastcall ret_large_struct(__m128i *a1, __int32 a2)
{
  __m128i *result; // rax
  __m128i *v3; // rdx
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __m128i v7; // [rsp+0h] [rbp-58h] BYREF
  __m128i v8; // [rsp+10h] [rbp-48h] BYREF
  __m128i v9; // [rsp+20h] [rbp-38h] BYREF
  __m128i v10; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-10h]

  result = a1;
  v12 = __readfsqword(0x28u);
  v3 = &v7;
  do
  {
    v3->m128i_i32[0] = a2;
    v3 = (__m128i *)((char *)v3 + 4);
    ++a2;
  }
  while ( v3 != (__m128i *)&v11 );
  v4 = _mm_load_si128(&v8);
  v5 = _mm_load_si128(&v9);
  v6 = _mm_load_si128(&v10);
  *a1 = _mm_load_si128(&v7);
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = v6;
  return result;
}


/* Function: call_ret_large_struct @ 0x1CC0 */
__int64 call_ret_large_struct()
{
  int v0; // edx
  char *v1; // rax
  _DWORD v3[16]; // [rsp+0h] [rbp-58h] BYREF
  char v4; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-10h]

  v0 = 100;
  v5 = __readfsqword(0x28u);
  v1 = (char *)v3;
  do
  {
    *(_DWORD *)v1 = v0;
    v1 += 4;
    ++v0;
  }
  while ( v1 != &v4 );
  return (unsigned int)(v3[0] + v3[15]);
}


/* Function: ret_func_ptr @ 0x1D20 */
__int64 (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = func_b;
  if ( !a1 )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1D40 */
__int64 call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x1D50 */
int *__fastcall ret_opaque_handle(int a1)
{
  int *result; // rax

  result = &handle1_1;
  if ( a1 )
    return (int *)&handle2_0;
  return result;
}


/* Function: call_ret_opaque @ 0x1D70 */
__int64 call_ret_opaque()
{
  return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1D80 */
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


/* Function: call_ret_complex_expr @ 0x1D90 */
__int64 call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1DA0 */
__int64 __fastcall ret_multi_branch(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 2 )
    return 2 * (5 * a1 + 5);
  return result;
}


/* Function: call_ret_multi_branch @ 0x1DC0 */
__int64 call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1DD0 */
__int64 __fastcall ret_void(int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)(3 * a1);
  *a2 = result;
  return result;
}


/* Function: call_ret_void @ 0x1DE0 */
__int64 call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1DF0 */
__int64 test_return_values()
{
  unsigned int v0; // eax

  puts(asc_22AC);
  __printf_chk(1, aRetL101D, 42);
  __printf_chk(1, aRetL102D, 20);
  __printf_chk(1, aRetL103D, 7);
  v0 = call_ret_large_struct();
  __printf_chk(1, aRetL104D, v0);
  __printf_chk(1, aRetL201D, 10);
  __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
  __printf_chk(1, aRetL301D, 40);
  __printf_chk(1, aRetL302D, 60);
  return __printf_chk(1, aRetL303D, 21);
}


/* Function: .term_proc @ 0x1EE8 */
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

/* Total functions decompiled: 82, failed: 7 */
