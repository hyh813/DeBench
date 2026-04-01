/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/4/4_clang_O0_no_g
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


/* Function: cdecl_func @ 0x1160 */
__int64 __fastcall cdecl_func(int a1, int a2)
{
  return (unsigned int)(a2 + a1);
}


/* Function: call_cdecl @ 0x1180 */
__int64 call_cdecl()
{
  return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x11A0 */
__int64 __fastcall stdcall_func(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x11C0 */
__int64 call_stdcall()
{
  return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x11E0 */
__int64 __fastcall fastcall_func(int a1, int a2, int a3)
{
  return (unsigned int)(a3 + a2 + a1);
}


/* Function: call_fastcall @ 0x1200 */
__int64 call_fastcall()
{
  return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1220 */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1230 */
__int64 __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a5 + a4 + a3 + a2 + a1);
}


/* Function: call_arm_aapcs @ 0x1260 */
__int64 call_arm_aapcs()
{
  return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1290 */
__int64 __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a4 + a3 + a2 + a1);
}


/* Function: call_mips @ 0x12B0 */
__int64 call_mips()
{
  return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x12D0 */
__int64 __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a6 + a5 + a4 + a3 + a2 + a1);
}


/* Function: call_amd64_sysv @ 0x1300 */
__int64 call_amd64_sysv()
{
  return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1330 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a5 + a4 + a3 + a2 + a1);
}


/* Function: call_ms_x64 @ 0x1360 */
__int64 call_ms_x64()
{
  return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x1390 */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a4 + a3 + a2 + a1);
}


/* Function: call_vectorcall @ 0x13B0 */
__int64 call_vectorcall()
{
  return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x13D0 */
__int64 mixed_conventions_test()
{
  int v1; // [rsp+Ch] [rbp-4h]
  int v2; // [rsp+Ch] [rbp-4h]

  v1 = cdecl_func(1, 2);
  v2 = v1 + stdcall_func(3, 4);
  return v2 + (unsigned int)fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x1430 */
__int64 varargs_func(int a1, ...)
{
  _DWORD *overflow_arg_area; // rax
  int i; // [rsp+D0h] [rbp-28h]
  unsigned int v4; // [rsp+D4h] [rbp-24h]
  gcc_va_list va; // [rsp+D8h] [rbp-20h] BYREF
  int v6; // [rsp+F4h] [rbp-4h]

  va_start(va, a1);
  v6 = a1;
  v4 = 0;
  for ( i = 0; i < v6; ++i )
  {
    if ( va[0].gp_offset > 0x28 )
    {
      overflow_arg_area = va[0].overflow_arg_area;
      va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
    }
    else
    {
      overflow_arg_area = (char *)va[0].reg_save_area + (int)va[0].gp_offset;
      va[0].gp_offset += 8;
    }
    v4 += *overflow_arg_area;
  }
  return v4;
}


/* Function: func_no_args @ 0x1560 */
__int64 func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1570 */
__int64 __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (unsigned int)(a8 + a7 + a6 + a5 + a4 + a3 + a2 + a1);
}


/* Function: func_mixed_args @ 0x15B0 */
__int64 __fastcall func_mixed_args(int a1, const char *a2, int a3, double a4)
{
  int v5; // [rsp+0h] [rbp-30h]

  if ( a2 )
    v5 = strlen(a2);
  else
    v5 = 0;
  return (unsigned int)(int)((double)(v5 + a1) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0x1620 */
__int64 __fastcall func_struct_byval(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int i; // [rsp+Ch] [rbp-Ch]
  __int64 v9; // [rsp+10h] [rbp-8h]

  v9 = 0;
  for ( i = 0; i < 16; ++i )
    v9 += *((_QWORD *)&a7 + i);
  return (unsigned int)v9;
}


/* Function: func_struct_byptr @ 0x1680 */
__int64 __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return (unsigned int)(a1[1] * *a1);
  else
    return (unsigned int)-1;
}


/* Function: test_calling_conventions @ 0x16C0 */
int test_calling_conventions()
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
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // [rsp+8Ch] [rbp-B4h]
  __int64 v17; // [rsp+90h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+98h] [rbp-A8h]
  int i; // [rsp+9Ch] [rbp-A4h]
  __int128 v20; // [rsp+A0h] [rbp-A0h]
  unsigned int v21; // [rsp+124h] [rbp-1Ch]
  const char *v22; // [rsp+128h] [rbp-18h]
  unsigned int v23; // [rsp+134h] [rbp-Ch]
  unsigned int v24; // [rsp+138h] [rbp-8h]
  unsigned int v25; // [rsp+13Ch] [rbp-4h]

  printf(format);
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
  v25 = varargs_func(5, 1, 2, 3, 4);
  printf(aCallL206, v25);
  v24 = func_no_args();
  printf(aCallL207, v24);
  v23 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
  printf(aCallL208, v23);
  v22 = "test";
  v21 = func_mixed_args(10, "test", 100, 3.14);
  v10 = v21;
  printf(aCallL209, v21);
  for ( i = 0; i < 16; ++i )
  {
    v12 = i + 1;
    *((_QWORD *)&v20 + i) = v12;
  }
  v18 = func_struct_byval((__int64)aCallL209, v10, v11, v12, v13, v14, v20);
  printf(aCallL210, v18);
  v17 = 0xA00000005LL;
  v16 = func_struct_byptr(&v17);
  return printf(aCallL211, v16);
}


/* Function: param_by_value_int @ 0x1970 */
__int64 __fastcall param_by_value_int(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1990 */
__int64 call_by_value_int()
{
  return (unsigned int)param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x19C0 */
__int64 __fastcall param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x1A00 */
__int64 call_by_value_ptr()
{
  int v1; // [rsp+Ch] [rbp-14h]
  int v2; // [rsp+1Ch] [rbp-4h] BYREF

  v2 = 5;
  v1 = param_by_value_ptr(&v2);
  return (unsigned int)(v1 + v2);
}


/* Function: param_array_decay @ 0x1A30 */
__int64 param_array_decay()
{
  return 8;
}


/* Function: call_array_decay @ 0x1A50 */
__int64 call_array_decay()
{
  _BYTE s[48]; // [rsp+0h] [rbp-30h] BYREF

  memset(s, 0, 0x28u);
  return param_array_decay(s, 10);
}


/* Function: param_string @ 0x1A80 */
__int64 __fastcall param_string(char *a1)
{
  return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x1AA0 */
__int64 call_string_param()
{
  return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1AC0 */
__int64 __fastcall param_ptr_array(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-14h]
  unsigned int v4; // [rsp+4h] [rbp-10h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += **(char **)(a1 + 8LL * i);
  return v4;
}


/* Function: call_ptr_array @ 0x1B10 */
__int64 call_ptr_array()
{
  _QWORD v1[4]; // [rsp+0h] [rbp-20h] BYREF

  v1[0] = "abc";
  v1[1] = "def";
  v1[2] = "ghi";
  return param_ptr_array((__int64)v1, 3);
}


/* Function: param_varargs @ 0x1B50 */
__int64 param_varargs(int a1, ...)
{
  _DWORD *overflow_arg_area; // rax
  int i; // [rsp+D0h] [rbp-28h]
  unsigned int v4; // [rsp+D4h] [rbp-24h]
  gcc_va_list va; // [rsp+D8h] [rbp-20h] BYREF
  int v6; // [rsp+F4h] [rbp-4h]

  va_start(va, a1);
  v6 = a1;
  v4 = 0;
  for ( i = 0; i < v6; ++i )
  {
    if ( va[0].gp_offset > 0x28 )
    {
      overflow_arg_area = va[0].overflow_arg_area;
      va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
    }
    else
    {
      overflow_arg_area = (char *)va[0].reg_save_area + (int)va[0].gp_offset;
      va[0].gp_offset += 8;
    }
    v4 += *overflow_arg_area;
  }
  return v4;
}


/* Function: call_varargs_param @ 0x1C80 */
__int64 call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1CB0 */
__int64 __fastcall param_func_ptr(unsigned int (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1CE0 */
__int64 call_func_ptr_param()
{
  return param_func_ptr((unsigned int (__fastcall *)(_QWORD))callback_func, 5u);
}


/* Function: callback_func @ 0x1D00 */
__int64 __fastcall callback_func(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: param_double_ptr @ 0x1D10 */
__int64 __fastcall param_double_ptr(_DWORD **a1, int a2)
{
  if ( a1 && *a1 )
  {
    **a1 = a2;
    *a1 = 0;
    return 1;
  }
  else
  {
    return (unsigned int)-1;
  }
}


/* Function: call_double_ptr @ 0x1D70 */
__int64 call_double_ptr()
{
  int *v1; // [rsp+10h] [rbp-10h] BYREF
  int v2; // [rsp+1Ch] [rbp-4h] BYREF

  v2 = 10;
  v1 = &v2;
  param_double_ptr(&v1, 20);
  return (unsigned int)(v1 == 0) + v2;
}


/* Function: param_complex_cast @ 0x1DC0 */
__int64 __fastcall param_complex_cast(unsigned int *a1, int a2)
{
  if ( a2 )
  {
    if ( a2 == 1 )
      return a1[1] + *a1;
    else
      return (unsigned int)-1;
  }
  else
  {
    return *a1;
  }
}


/* Function: call_complex_cast @ 0x1E40 */
__int64 call_complex_cast()
{
  __int64 v1; // [rsp+0h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+Ch] [rbp-4h] BYREF

  v2 = 305419896;
  v1 = 0xC800000064LL;
  param_complex_cast((unsigned int *)&v1, 1);
  return param_complex_cast(&v2, 0);
}


/* Function: param_struct_byval @ 0x1E80 */
__int64 __fastcall param_struct_byval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  return (unsigned int)(HIDWORD(a14) + a7);
}


/* Function: call_struct_byval @ 0x1E90 */
__int64 __fastcall call_struct_byval(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int i; // [rsp+4Ch] [rbp-44h]
  int v8[2]; // [rsp+50h] [rbp-40h]
  __int64 v9; // [rsp+58h] [rbp-38h]
  __int64 v10; // [rsp+60h] [rbp-30h]
  __int64 v11; // [rsp+68h] [rbp-28h]
  __int64 v12; // [rsp+70h] [rbp-20h]
  __int64 v13; // [rsp+78h] [rbp-18h]
  __int64 v14; // [rsp+80h] [rbp-10h]
  __int64 v15; // [rsp+88h] [rbp-8h]

  for ( i = 0; i < 16; ++i )
  {
    a4 = (unsigned int)i;
    v8[i] = i;
  }
  return param_struct_byval(a1, a2, a3, a4, a5, a6, v8[0], v9, v10, v11, v12, v13, v14, v15);
}


/* Function: param_order_dep @ 0x1F00 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a2 + a1);
}


/* Function: call_order_dep @ 0x1F20 */
__int64 call_order_dep()
{
  return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x1F50 */
int test_parameter_passing()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // eax

  printf(asc_31EB);
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
  v9 = v8;
  printf("PARAM-L3-03: %d\n", v8);
  v14 = call_struct_byval((__int64)"PARAM-L3-03: %d\n", v9, v10, v11, v12, v13);
  printf("PARAM-L3-04: %d\n", v14);
  v15 = call_order_dep();
  return printf("PARAM-L3-05: %d\n", v15);
}


/* Function: ret_basic_type @ 0x2050 */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x2060 */
__int64 call_ret_basic()
{
  return (unsigned int)ret_basic_type(21);
}


/* Function: ret_pointer @ 0x2090 */
__int64 __fastcall ret_pointer(__int64 a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x20B0 */
__int64 call_ret_pointer()
{
  __int64 v1; // [rsp+14h] [rbp-Ch] BYREF
  int v2; // [rsp+1Ch] [rbp-4h]

  v1 = 0x140000000ALL;
  v2 = 30;
  return *(unsigned int *)ret_pointer((__int64)&v1);
}


/* Function: ret_small_struct @ 0x20F0 */
unsigned __int64 __fastcall ret_small_struct(unsigned int a1, unsigned int a2)
{
  return __PAIR64__(a2, a1);
}


/* Function: call_ret_small_struct @ 0x2110 */
__int64 call_ret_small_struct()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-8h]

  v1 = ret_small_struct(3u, 4u);
  return (unsigned int)(HIDWORD(v1) + v1);
}


/* Function: ret_large_struct @ 0x2140 */
__int64 __fastcall ret_large_struct(__int64 a1, int a2)
{
  int i; // [rsp+10h] [rbp-8h]

  for ( i = 0; i < 16; ++i )
    *(_DWORD *)(a1 + 4LL * i) = i + a2;
  return a1;
}


/* Function: call_ret_large_struct @ 0x2190 */
__int64 call_ret_large_struct()
{
  _DWORD v1[16]; // [rsp+0h] [rbp-40h] BYREF

  ret_large_struct((__int64)v1, 100);
  return (unsigned int)(v1[15] + v1[0]);
}


/* Function: func_a @ 0x21C0 */
__int64 __fastcall func_a(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x21D0 */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x21E0 */
__int64 (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = func_a;
  if ( a1 )
    return func_b;
  return result;
}


/* Function: call_ret_func_ptr @ 0x2210 */
__int64 call_ret_func_ptr()
{
  __int64 (__fastcall *v1)(int); // [rsp+8h] [rbp-8h]

  v1 = ret_func_ptr(1);
  return v1(5);
}


/* Function: ret_opaque_handle @ 0x2240 */
void *__fastcall ret_opaque_handle(int a1)
{
  void *result; // rax

  result = &ret_opaque_handle_handle2;
  if ( !a1 )
    return &ret_opaque_handle_handle1;
  return result;
}


/* Function: call_ret_opaque @ 0x2270 */
__int64 call_ret_opaque()
{
  return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x2290 */
__int64 __fastcall ret_complex_expr(int a1, int a2, int a3)
{
  if ( a1 <= a2 )
    return (unsigned int)(a3 + 10);
  else
    return (unsigned int)(2 * a3);
}


/* Function: call_ret_complex_expr @ 0x22D0 */
__int64 call_ret_complex_expr()
{
  int v1; // [rsp+Ch] [rbp-4h]

  v1 = ret_complex_expr(5, 3, 10);
  return (unsigned int)ret_complex_expr(3, 5, 10) + v1;
}


/* Function: ret_multi_branch @ 0x2320 */
__int64 __fastcall ret_multi_branch(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      return 20;
    }
    else if ( a1 == 2 )
    {
      return 30;
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  else
  {
    return 10;
  }
}


/* Function: call_ret_multi_branch @ 0x2390 */
__int64 call_ret_multi_branch()
{
  int v1; // [rsp+Ch] [rbp-4h]
  int v2; // [rsp+Ch] [rbp-4h]

  v1 = ret_multi_branch(0);
  v2 = v1 + ret_multi_branch(1);
  return v2 + (unsigned int)ret_multi_branch(2);
}


/* Function: ret_void @ 0x23E0 */
_DWORD *__fastcall ret_void(int a1, _DWORD *a2)
{
  _DWORD *result; // rax

  result = a2;
  *a2 = 3 * a1;
  return result;
}


/* Function: call_ret_void @ 0x2400 */
__int64 call_ret_void()
{
  unsigned int v1; // [rsp+Ch] [rbp-4h] BYREF

  ret_void(7, &v1);
  return v1;
}


/* Function: test_return_values @ 0x2420 */
int test_return_values()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  printf(asc_32C8);
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
  return printf(aRetL303D, v8);
}


/* Function: main @ 0x2500 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: .term_proc @ 0x2528 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6060 */

/* FAILED to decompile: strlen @ 0x6068 */

/* FAILED to decompile: printf @ 0x6070 */

/* FAILED to decompile: memset @ 0x6078 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6080 */

/* FAILED to decompile: __gmon_start__ @ 0x6090 */

/* Total functions decompiled: 79, failed: 6 */
