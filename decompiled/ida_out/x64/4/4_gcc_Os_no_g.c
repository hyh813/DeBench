/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_Os_no_g
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


/* Function: _start @ 0x10E0 */
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


/* Function: deregister_tm_clones @ 0x1110 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1140 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1180 */
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


/* Function: frame_dummy @ 0x11C0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: func_a @ 0x11C9 */
__int64 __fastcall func_a(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x11D1 */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: callback_func @ 0x11D9 */
__int64 __fastcall callback_func(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x11E1 */
__int64 __fastcall cdecl_func(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x11E9 */
__int64 call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x11F3 */
__int64 __fastcall stdcall_func(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x11FD */
__int64 call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x1207 */
__int64 __fastcall fastcall_func(int a1, int a2, int a3)
{
  return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x1211 */
__int64 call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x121B */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1225 */
__int64 __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_arm_aapcs @ 0x1234 */
__int64 call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x123E */
__int64 __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_mips @ 0x124A */
__int64 call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x1254 */
__int64 __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: call_amd64_sysv @ 0x1266 */
__int64 call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x1270 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x127F */
__int64 call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x1289 */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1295 */
__int64 call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x129F */
__int64 mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x12A9 */
__int64 __fastcall varargs_func(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // r8d
  char *v10; // rax
  char *v11; // rsi
  __int64 v12; // r10
  _BYTE v14[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  __int64 v19; // [rsp+48h] [rbp-10h]

  v16 = a3;
  v7 = 8;
  v17 = a4;
  v8 = 0;
  v18 = a5;
  v9 = 0;
  v19 = a6;
  v15 = a2;
  v10 = &a7;
  while ( v8 < a1 )
  {
    v11 = v10 + 8;
    if ( v7 <= 0x2F )
    {
      v12 = v7;
      v11 = v10;
      v7 += 8;
      v10 = &v14[v12];
    }
    v9 += *(_DWORD *)v10;
    ++v8;
    v10 = v11;
  }
  return v9;
}


/* Function: func_no_args @ 0x1345 */
__int64 func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x134F */
__int64 __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (unsigned int)(a8 + a7 + a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: func_mixed_args @ 0x1369 */
__int64 __fastcall func_mixed_args(int a1, const char *a2, int a3, double a4)
{
  int v4; // eax

  v4 = 0;
  if ( a2 )
    v4 = strlen(a2);
  return (unsigned int)(int)((double)(a1 + v4) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0x13AD */
__int64 __fastcall func_struct_byval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdx
  __int64 result; // rax

  v7 = 0;
  result = 0;
  do
    result += *(&a7 + v7++);
  while ( v7 != 16 );
  return result;
}


/* Function: func_struct_byptr @ 0x13C4 */
__int64 __fastcall func_struct_byptr(_DWORD *a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 )
    return (unsigned int)(a1[1] * *a1);
  return result;
}


/* Function: test_calling_conventions @ 0x13D7 */
__int64 test_calling_conventions()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  __int64 i; // rax
  char *v3; // rsi
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-118h]
  char v10; // [rsp+8h] [rbp-110h] BYREF
  _QWORD v11[18]; // [rsp+88h] [rbp-90h] BYREF

  v11[16] = __readfsqword(0x28u);
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
  v0 = varargs_func(5, 1, 2, 3, 4, 5, v9);
  __printf_chk(1, aCallL206, v0);
  __printf_chk(1, aCallL207, 42);
  __printf_chk(1, aCallL208, 36);
  v1 = func_mixed_args(10, "test", 100, 3.14);
  __printf_chk(1, aCallL209, v1);
  for ( i = 1; i != 17; ++i )
  {
    *(&v9 + i) = i;
    v3 = &v10;
  }
  v4 = v11;
  v5 = 32;
  v6 = 0;
  v7 = 0;
  while ( v5 )
  {
    *v4 = *(_DWORD *)v3;
    v3 += 4;
    ++v4;
    --v5;
  }
  do
    v7 += v11[v6++];
  while ( v6 != 16 );
  __printf_chk(1, aCallL210, v7, v11);
  return __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1619 */
__int64 __fastcall param_by_value_int(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1621 */
__int64 call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x162B */
__int64 __fastcall param_by_value_ptr(unsigned int *a1)
{
  __int64 result; // rax

  result = 1;
  *a1 = _mm_cvtsi128_si32(_mm_slli_epi32(_mm_cvtsi32_si128(*a1), 1u));
  return result;
}


/* Function: call_by_value_ptr @ 0x1642 */
__int64 call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x164C */
__int64 param_array_decay()
{
  return 8;
}


/* Function: call_array_decay @ 0x1656 */
__int64 call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x1660 */
__int64 __fastcall param_string(char *a1)
{
  return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x166E */
__int64 call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x1678 */
__int64 __fastcall param_ptr_array(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  char *v4; // rdx

  v2 = 0;
  v3 = 0;
  while ( a2 > (int)v2 )
  {
    v4 = *(char **)(a1 + 8 * v2++);
    v3 += *v4;
  }
  return v3;
}


/* Function: call_ptr_array @ 0x1698 */
__int64 call_ptr_array()
{
  _QWORD v1[5]; // [rsp+0h] [rbp-28h] BYREF

  v1[3] = __readfsqword(0x28u);
  v1[0] = &unk_21BC;
  v1[1] = &unk_21C0;
  v1[2] = &unk_21C4;
  return param_ptr_array((__int64)v1, 3);
}


/* Function: param_varargs @ 0x16F8 */
__int64 __fastcall param_varargs(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // r8d
  char *v10; // rax
  char *v11; // rsi
  __int64 v12; // r10
  _BYTE v14[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  __int64 v19; // [rsp+48h] [rbp-10h]

  v16 = a3;
  v7 = 8;
  v17 = a4;
  v8 = 0;
  v18 = a5;
  v9 = 0;
  v19 = a6;
  v15 = a2;
  v10 = &a7;
  while ( v8 < a1 )
  {
    v11 = v10 + 8;
    if ( v7 <= 0x2F )
    {
      v12 = v7;
      v11 = v10;
      v7 += 8;
      v10 = &v14[v12];
    }
    v9 += *(_DWORD *)v10;
    ++v8;
    v10 = v11;
  }
  return v9;
}


/* Function: call_varargs_param @ 0x1794 */
__int64 __fastcall call_varargs_param(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  return param_varargs(4, 10, 20, 30, 40, a6, a7);
}


/* Function: param_func_ptr @ 0x17B9 */
__int64 __fastcall param_func_ptr(unsigned int (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x17CB */
__int64 call_func_ptr_param()
{
  return param_func_ptr((unsigned int (__fastcall *)(_QWORD))callback_func, 5u);
}


/* Function: param_double_ptr @ 0x17DD */
__int64 __fastcall param_double_ptr(_DWORD **a1, int a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 )
  {
    if ( *a1 )
    {
      **a1 = a2;
      result = 1;
      *a1 = 0;
    }
  }
  return result;
}


/* Function: call_double_ptr @ 0x1800 */
__int64 call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x180A */
__int64 __fastcall param_complex_cast(unsigned int *a1, int a2)
{
  __int64 result; // rax

  if ( !a2 )
    return *a1;
  result = 0xFFFFFFFFLL;
  if ( a2 == 1 )
    return *a1 + a1[1];
  return result;
}


/* Function: call_complex_cast @ 0x1822 */
__int64 call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x182C */
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


/* Function: call_struct_byval @ 0x1839 */
__int64 call_struct_byval()
{
  __int64 i; // rax
  _DWORD v2[16]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
    v2[i] = i;
  return (unsigned int)(v2[0] + v2[15]);
}


/* Function: param_order_dep @ 0x1880 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1888 */
__int64 call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x1892 */
__int64 __fastcall test_parameter_passing()
{
  char v0; // al
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v10; // [rsp-8h] [rbp-8h]

  v10 = v0;
  puts(asc_21C8);
  __printf_chk(1, "PARAM-L1-01: %d\n", 15);
  __printf_chk(1, "PARAM-L1-02: %d\n", 11);
  __printf_chk(1, "PARAM-L2-01: %d\n", 8);
  __printf_chk(1, "PARAM-L2-02: %d\n", 173);
  v1 = call_ptr_array();
  __printf_chk(1, "PARAM-L2-03: %d\n", v1);
  v6 = call_varargs_param(1, (__int64)"PARAM-L2-03: %d\n", v2, v3, v4, v5, v10);
  __printf_chk(1, "PARAM-L2-04: %d\n", v6);
  v7 = call_func_ptr_param();
  __printf_chk(1, "PARAM-L3-01: %d\n", v7);
  __printf_chk(1, "PARAM-L3-02: %d\n", 21);
  __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
  v8 = call_struct_byval();
  __printf_chk(1, "PARAM-L3-04: %d\n", v8);
  return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x19BC */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x19C4 */
__int64 call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x19CE */
__int64 __fastcall ret_pointer(__int64 a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x19D7 */
__int64 call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x19E1 */
__int64 __fastcall ret_small_struct(unsigned int a1, __int64 a2)
{
  return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x19EF */
__int64 call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x19F9 */
_DWORD *__fastcall ret_large_struct(_DWORD *a1, int a2)
{
  _DWORD *result; // rax
  __int64 i; // rcx
  _DWORD *v5; // rsi
  _DWORD v6[16]; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  result = a1;
  v7 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
  {
    v5 = v6;
    v6[i] = a2 + i;
  }
  while ( i )
  {
    *a1++ = *v5++;
    --i;
  }
  return result;
}


/* Function: call_ret_large_struct @ 0x1A49 */
__int64 call_ret_large_struct()
{
  _DWORD v1[16]; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v2; // [rsp+48h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  ret_large_struct(v1, 100);
  return (unsigned int)(v1[0] + v1[15]);
}


/* Function: ret_func_ptr @ 0x1A92 */
__int64 (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = func_b;
  if ( !a1 )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1AAB */
__int64 call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x1AB5 */
int *__fastcall ret_opaque_handle(int a1)
{
  int *result; // rax

  result = &handle1_1;
  if ( a1 )
    return (int *)&handle2_0;
  return result;
}


/* Function: call_ret_opaque @ 0x1ACE */
__int64 call_ret_opaque()
{
  return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1AD9 */
__int64 __fastcall ret_complex_expr(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)(a3 + 10);
  if ( a1 > a2 )
    return (unsigned int)(2 * a3);
  return result;
}


/* Function: call_ret_complex_expr @ 0x1AE8 */
__int64 call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1AF2 */
__int64 __fastcall ret_multi_branch(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 2 )
    return 10 * (a1 + 1);
  return result;
}


/* Function: call_ret_multi_branch @ 0x1B04 */
__int64 call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1B0E */
void __fastcall ret_void(int a1, _DWORD *a2)
{
  *a2 = 3 * a1;
}


/* Function: call_ret_void @ 0x1B18 */
__int64 call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1B22 */
__int64 test_return_values()
{
  unsigned int v0; // eax

  puts(asc_22A4);
  __printf_chk(1, aRetL101D, 42);
  __printf_chk(1, aRetL102D, 20);
  __printf_chk(1, aRetL103D, 7);
  v0 = call_ret_large_struct(1);
  __printf_chk(1, aRetL104D, v0);
  __printf_chk(1, aRetL201D, 10);
  __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
  __printf_chk(1, aRetL301D, 40);
  __printf_chk(1, aRetL302D, 60);
  return __printf_chk(1, aRetL303D);
}


/* Function: .term_proc @ 0x1C14 */
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
