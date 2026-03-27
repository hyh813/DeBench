/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_O1_no_g
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


/* Function: _start @ 0x10C0 */
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


/* Function: deregister_tm_clones @ 0x10F0 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1120 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1160 */
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


/* Function: frame_dummy @ 0x11A0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: callback_func @ 0x11A9 */
__int64 __fastcall callback_func(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: func_a @ 0x11B1 */
__int64 __fastcall func_a(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x11B9 */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x11C1 */
__int64 __fastcall cdecl_func(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x11C9 */
__int64 call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x11D3 */
__int64 __fastcall stdcall_func(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x11DD */
__int64 call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x11E7 */
__int64 __fastcall fastcall_func(int a1, int a2, int a3)
{
  return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x11F1 */
__int64 call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x11FB */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1205 */
__int64 __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_arm_aapcs @ 0x1214 */
__int64 call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x121E */
__int64 __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_mips @ 0x122A */
__int64 call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x1234 */
__int64 __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: call_amd64_sysv @ 0x1246 */
__int64 call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x1250 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x125F */
__int64 call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x1269 */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1275 */
__int64 call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x127F */
__int64 mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x1289 */
__int64 varargs_func(
        int a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        ...)
{
  int v9; // ecx
  unsigned int v10; // esi
  __int64 *v11; // rdx
  __int64 v12; // kr00_8
  gcc_va_list va; // [rsp+0h] [rbp-58h] BYREF

  va_start(va, a9);
  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( va[0].gp_offset > 0x2F )
      {
        v12 = va_arg(va, _QWORD);
        v11 = &v12;
      }
      else
      {
        v11 = (__int64 *)((char *)va[0].reg_save_area + va[0].gp_offset);
        va[0].gp_offset += 8;
      }
      v10 += *(_DWORD *)v11;
      ++v9;
    }
    while ( a1 != v9 );
  }
  return v10;
}


/* Function: func_no_args @ 0x1335 */
__int64 func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x133F */
__int64 __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (unsigned int)(a8 + a7 + a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: func_mixed_args @ 0x1359 */
__int64 __fastcall func_mixed_args(int a1, const char *a2, int a3, double a4)
{
  int v5; // eax

  v5 = 0;
  if ( a2 )
    v5 = strlen(a2);
  return (unsigned int)(int)((double)(a1 + v5) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0x13A6 */
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


/* Function: func_struct_byptr @ 0x13C9 */
__int64 __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return (unsigned int)(a1[1] * *a1);
  else
    return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x13DF */
unsigned __int64 __fastcall test_calling_conventions(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  double v8; // xmm4_8
  double v9; // xmm5_8
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 i; // rax
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v16; // [rsp+0h] [rbp-120h]
  __m128i v17; // [rsp+8h] [rbp-118h] BYREF
  __m128i v18; // [rsp+18h] [rbp-108h] BYREF
  __m128i v19; // [rsp+28h] [rbp-F8h] BYREF
  __m128i v20; // [rsp+38h] [rbp-E8h] BYREF
  __m128i v21; // [rsp+48h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+58h] [rbp-C8h] BYREF
  __m128i v23; // [rsp+68h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+78h] [rbp-A8h] BYREF
  _OWORD v25[8]; // [rsp+88h] [rbp-98h] BYREF
  _BYTE v26[8]; // [rsp+108h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+110h] [rbp-10h]

  v27 = __readfsqword(0x28u);
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
  v10 = varargs_func(5, a1, a2, a3, a4, v8, v9, a7, a8, 1, 2, 3, 4, 5);
  __printf_chk(1, aCallL206, v10);
  __printf_chk(1, aCallL207, 42);
  __printf_chk(1, aCallL208, 36);
  v11 = func_mixed_args(10, "test", 100, 3.14);
  __printf_chk(1, aCallL209, v11);
  for ( i = 1; i != 17; ++i )
    *(&v16 + i) = i;
  v25[0] = _mm_load_si128(&v17);
  v25[1] = _mm_load_si128(&v18);
  v25[2] = _mm_load_si128(&v19);
  v25[3] = _mm_load_si128(&v20);
  v25[4] = _mm_load_si128(&v21);
  v25[5] = _mm_load_si128(&v22);
  v25[6] = _mm_load_si128(&v23);
  v25[7] = _mm_load_si128(&v24);
  v13 = v25;
  v14 = 0;
  do
  {
    v14 += *(_QWORD *)v13;
    v13 += 8;
  }
  while ( v26 != v13 );
  __printf_chk(1, aCallL210, v14, v26);
  __printf_chk(1, aCallL211, 50);
  return v27 - __readfsqword(0x28u);
}


/* Function: param_by_value_int @ 0x16BA */
__int64 __fastcall param_by_value_int(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x16C2 */
__int64 call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x16CC */
__int64 __fastcall param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x16D8 */
__int64 call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x16E2 */
__int64 param_array_decay()
{
  return 8;
}


/* Function: call_array_decay @ 0x16EC */
__int64 call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x16F6 */
__int64 __fastcall param_string(char *a1)
{
  return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x1704 */
__int64 call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x170E */
__int64 __fastcall param_ptr_array(char **a1, int a2)
{
  char **v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // edx

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = a1;
    v3 = (__int64)&a1[(unsigned int)(a2 - 1) + 1];
    v4 = 0;
    do
      v4 += **v2++;
    while ( v2 != (char **)v3 );
  }
  return v4;
}


/* Function: call_ptr_array @ 0x1741 */
__int64 call_ptr_array()
{
  char *v1[5]; // [rsp+0h] [rbp-28h] BYREF

  v1[3] = (char *)__readfsqword(0x28u);
  v1[0] = "abc";
  v1[1] = "def";
  v1[2] = "ghi";
  return param_ptr_array(v1, 3);
}


/* Function: param_varargs @ 0x17A3 */
__int64 param_varargs(
        int a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        ...)
{
  int v9; // ecx
  unsigned int v10; // esi
  __int64 *v11; // rdx
  __int64 v12; // kr00_8
  gcc_va_list va; // [rsp+0h] [rbp-58h] BYREF

  va_start(va, a9);
  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( va[0].gp_offset > 0x2F )
      {
        v12 = va_arg(va, _QWORD);
        v11 = &v12;
      }
      else
      {
        v11 = (__int64 *)((char *)va[0].reg_save_area + va[0].gp_offset);
        va[0].gp_offset += 8;
      }
      v10 += *(_DWORD *)v11;
      ++v9;
    }
    while ( a1 != v9 );
  }
  return v10;
}


/* Function: call_varargs_param @ 0x184F */
__int64 __fastcall call_varargs_param(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  return param_varargs(4, a1, a2, a3, a4, a5, a6, a7, a8, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1880 */
__int64 __fastcall param_func_ptr(unsigned int (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1897 */
__int64 call_func_ptr_param()
{
  return param_func_ptr((unsigned int (__fastcall *)(_QWORD))callback_func, 5u);
}


/* Function: param_double_ptr @ 0x18B5 */
__int64 __fastcall param_double_ptr(_QWORD *a1, int a2)
{
  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)*a1 = a2;
  *a1 = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x18E1 */
__int64 call_double_ptr()
{
  int v1; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v2[3]; // [rsp+10h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  v1 = 10;
  v2[0] = &v1;
  param_double_ptr(v2, 20);
  return v1 + (unsigned int)(v2[0] == 0);
}


/* Function: param_complex_cast @ 0x1944 */
__int64 __fastcall param_complex_cast(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *a1 + a1[1];
  return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1960 */
__int64 call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x196A */
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


/* Function: call_struct_byval @ 0x1977 */
__int64 call_struct_byval()
{
  __int64 i; // rax
  _DWORD v2[18]; // [rsp+0h] [rbp-58h]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
    v2[i] = i;
  return (unsigned int)(v2[15] + v2[0]);
}


/* Function: param_order_dep @ 0x19BD */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x19C5 */
__int64 call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x19CF */
double __fastcall test_parameter_passing(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v8; // eax
  int v9; // eax
  double v10; // xmm0_8
  double v11; // xmm4_8
  double v12; // xmm5_8
  int v13; // eax
  double v14; // xmm0_8
  int v15; // eax
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  int v19; // eax
  double v20; // xmm0_8
  int v21; // eax

  puts(asc_2130);
  __printf_chk(1, "PARAM-L1-01: %d\n", 15);
  v8 = call_by_value_ptr();
  __printf_chk(1, "PARAM-L1-02: %d\n", v8);
  __printf_chk(1, "PARAM-L2-01: %d\n", 8);
  __printf_chk(1, "PARAM-L2-02: %d\n", 173);
  v9 = call_ptr_array();
  v10 = __printf_chk(1, "PARAM-L2-03: %d\n", v9);
  v13 = call_varargs_param(v10, a2, a3, a4, v11, v12, a7, a8);
  v14 = __printf_chk(1, "PARAM-L2-04: %d\n", v13);
  v15 = call_func_ptr_param(v14);
  v16 = __printf_chk(1, "PARAM-L3-01: %d\n", v15);
  v17 = call_double_ptr(v16);
  v18 = __printf_chk(1, "PARAM-L3-02: %d\n", v17);
  v19 = call_complex_cast(v18);
  v20 = __printf_chk(1, "PARAM-L3-03: %d\n", v19);
  v21 = call_struct_byval(v20);
  __printf_chk(1, "PARAM-L3-04: %d\n", v21);
  return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1B42 */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1B4A */
__int64 call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x1B54 */
__int64 __fastcall ret_pointer(__int64 a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1B5D */
__int64 call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x1B67 */
__int64 __fastcall ret_small_struct(unsigned int a1, __int64 a2)
{
  return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x1B75 */
__int64 call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x1B7F */
__m128i *__fastcall ret_large_struct(__m128i *a1, __int32 a2)
{
  __m128i *result; // rax
  __m128i *v3; // rdx
  __m128i v4; // [rsp+0h] [rbp-58h] BYREF
  __m128i v5; // [rsp+10h] [rbp-48h] BYREF
  __m128i v6; // [rsp+20h] [rbp-38h] BYREF
  __m128i v7; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-10h]

  result = a1;
  v9 = __readfsqword(0x28u);
  v3 = &v4;
  do
  {
    v3->m128i_i32[0] = a2++;
    v3 = (__m128i *)((char *)v3 + 4);
  }
  while ( v3 != (__m128i *)&v8 );
  *a1 = _mm_load_si128(&v4);
  a1[1] = _mm_load_si128(&v5);
  a1[2] = _mm_load_si128(&v6);
  a1[3] = _mm_load_si128(&v7);
  return result;
}


/* Function: call_ret_large_struct @ 0x1BF0 */
__int64 call_ret_large_struct()
{
  __m128i v1[3]; // [rsp+0h] [rbp-58h] BYREF
  int v2; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  ret_large_struct(v1, 100);
  return (unsigned int)(v1[0].m128i_i32[0] + v2);
}


/* Function: ret_func_ptr @ 0x1C36 */
__int64 (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = func_b;
  if ( !a1 )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1C4F */
__int64 call_ret_func_ptr()
{
  return func_b(5);
}


/* Function: ret_opaque_handle @ 0x1C5E */
int *__fastcall ret_opaque_handle(int a1)
{
  int *result; // rax

  result = &handle1_1;
  if ( a1 )
    return (int *)&handle2_0;
  return result;
}


/* Function: call_ret_opaque @ 0x1C77 */
__int64 call_ret_opaque()
{
  return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1C82 */
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


/* Function: call_ret_complex_expr @ 0x1C92 */
__int64 call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1C9C */
__int64 __fastcall ret_multi_branch(int a1)
{
  __int64 result; // rax

  result = 20;
  if ( a1 != 1 )
  {
    result = 30;
    if ( a1 != 2 )
      return a1 == 0 ? 10 : -1;
  }
  return result;
}


/* Function: call_ret_multi_branch @ 0x1CC0 */
__int64 call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1CCA */
__int64 __fastcall ret_void(int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)(3 * a1);
  *a2 = result;
  return result;
}


/* Function: call_ret_void @ 0x1CD4 */
__int64 call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1CDE */
double test_return_values()
{
  double v0; // xmm0_8
  unsigned int v1; // eax
  double v2; // xmm0_8
  unsigned int v3; // eax
  double v4; // xmm0_8
  unsigned int v5; // eax
  double v6; // xmm0_8
  unsigned int v7; // eax
  double v8; // xmm0_8
  double v9; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm0_8

  puts(asc_22BD);
  v0 = __printf_chk(1, aRetL101D, 42);
  v1 = call_ret_pointer(v0);
  v2 = __printf_chk(1, aRetL102D, v1);
  v3 = call_ret_small_struct(v2);
  v4 = __printf_chk(1, aRetL103D, v3);
  v5 = call_ret_large_struct(v4);
  v6 = __printf_chk(1, aRetL104D, v5);
  v7 = call_ret_func_ptr(v6);
  v8 = __printf_chk(1, aRetL201D, v7);
  v9 = __printf_chk(1, aRetL202D, (unsigned int)handle1_1, v8);
  v10 = __printf_chk(1, aRetL301D, 40, v9);
  v11 = __printf_chk(1, aRetL302D, 60, v10);
  return __printf_chk(1, aRetL303D, 21, v11);
}


/* Function: main @ 0x1E07 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  double v3; // xmm0_8
  double v4; // xmm1_8
  double v5; // xmm2_8
  double v6; // xmm3_8
  double v7; // xmm4_8
  double v8; // xmm5_8
  double v9; // xmm6_8
  double v10; // xmm7_8
  double v11; // xmm4_8
  double v12; // xmm5_8

  test_calling_conventions(v3, v4, v5, v6, v7, v8, v9, v10);
  test_parameter_passing(v3, v4, v5, v6, v11, v12, v9, v10);
  test_return_values();
  return 0;
}


/* Function: .term_proc @ 0x1E38 */
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

/* Total functions decompiled: 83, failed: 7 */
