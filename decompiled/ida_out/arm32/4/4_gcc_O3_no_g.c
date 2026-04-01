/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/4/4_gcc_O3_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103B8 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_103C4 @ 0x103C4 */
void sub_103C4()
{
  JUMPOUT(0);
}


/* Function: main @ 0x1042C */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v3; // r0
  int v4; // r0

  v3 = test_calling_conventions(argc, argv, envp);
  v4 = test_parameter_passing(v3);
  test_return_values(v4);
  return 0;
}


/* Function: _start @ 0x10444 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_10480 + 18155), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x10488 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x104AC */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x104D8 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10510 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x10538 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: func_a @ 0x1053C */
int __fastcall func_a(int a1)
{
  return a1 + 10;
}


/* Function: param_varargs.constprop.0 @ 0x10544 */
int __fastcall param_varargs_constprop_0(int a1, int a2, int a3, int a4, int a5)
{
  return a2 + a3 + a4 + a5;
}


/* Function: varargs_func.constprop.0 @ 0x105B4 */
int __fastcall varargs_func_constprop_0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return a2 + a3 + a4 + a5 + a6;
}


/* Function: func_b @ 0x10628 */
int __fastcall func_b(int a1)
{
  return 2 * a1;
}


/* Function: cdecl_func @ 0x10630 */
int __fastcall cdecl_func(int a1, int a2)
{
  return a1 + a2;
}


/* Function: call_cdecl @ 0x10638 */
int call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x10640 */
int __fastcall stdcall_func(int a1, int a2)
{
  return a2 * a1;
}


/* Function: call_stdcall @ 0x10648 */
int call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x10650 */
int __fastcall fastcall_func(int a1, int a2, int a3)
{
  return a1 + a2 + a3;
}


/* Function: call_fastcall @ 0x1065C */
int call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x10664 */
int call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1066C */
int __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_arm_aapcs @ 0x10684 */
int call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x1068C */
int __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return a1 + a2 + a3 + a4;
}


/* Function: call_mips @ 0x1069C */
int call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x106A4 */
int __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return a1 + a2 + a3 + a4 + a5 + a6;
}


/* Function: call_amd64_sysv @ 0x106C4 */
int call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x106CC */
int __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x106E4 */
int call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x106EC */
int __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x106FC */
int call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x10704 */
int mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x1070C */
int varargs_func(int a1, ...)
{
  int *v2; // r2
  int v3; // r3
  int result; // r0
  int v5; // t1
  va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

  va_start(varg_r1, a1);
  va_copy(v2, varg_r1);
  if ( a1 <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    v5 = *v2++;
    ++v3;
    result += v5;
  }
  while ( a1 != v3 );
  return result;
}


/* Function: func_no_args @ 0x10790 */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x10798 */
int __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
}


/* Function: func_mixed_args @ 0x107C0 */
int __fastcall func_mixed_args(int a1, const char *a2, double a3, __int64 a4)
{
  int v4; // r4

  v4 = a1;
  if ( a2 )
    v4 = a1 + strlen(a2);
  return (int)((double)v4 + a3 + (double)a4);
}


/* Function: func_struct_byval @ 0x10824 */
int __fastcall func_struct_byval(
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
        int a31)
{
  return a1 + a3 + a5 + a7 + a9 + a11 + a13 + a15 + a17 + a19 + a21 + a23 + a25 + a27 + a29 + a31;
}


/* Function: func_struct_byptr @ 0x108B8 */
int __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return a1[1] * *a1;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x108D0 */
int test_calling_conventions()
{
  int v0; // r0

  puts(s);
  _printf_chk(1, "CALL-L1-01: %d\n", 15);
  _printf_chk(1, "CALL-L1-02: %d\n", 50);
  _printf_chk(1, "CALL-L1-03: %d\n", 6);
  _printf_chk(1, "CALL-L1-04: %d\n", 15);
  _printf_chk(1, "CALL-L1-05: %d\n", 15);
  _printf_chk(1, "CALL-L1-06: %d\n", 100);
  _printf_chk(1, "CALL-L1-07: %d\n", 21);
  _printf_chk(1, "CALL-L1-08: %d\n", 15);
  _printf_chk(1, "CALL-L1-09: %d\n", 10);
  _printf_chk(1, "CALL-L1-10: %d\n", 33);
  v0 = varargs_func_constprop_0(5, 1, 2, 3, 4, 5);
  _printf_chk(1, aCallL206, v0);
  _printf_chk(1, aCallL207, 42);
  _printf_chk(1, aCallL208, 36);
  _printf_chk(1, aCallL209, 117);
  _printf_chk(1, aCallL210, 136);
  return _printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x10A4C */
int __fastcall param_by_value_int(int a1)
{
  return 2 * a1;
}


/* Function: call_by_value_int @ 0x10A54 */
int call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x10A5C */
int __fastcall param_by_value_ptr(_DWORD *a1)
{
  int result; // r0

  result = 1;
  *a1 *= 2;
  return result;
}


/* Function: call_by_value_ptr @ 0x10A74 */
int call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x10A7C */
int param_array_decay()
{
  return 4;
}


/* Function: call_array_decay @ 0x10A84 */
int call_array_decay()
{
  return 4;
}


/* Function: param_string @ 0x10A8C */
int __fastcall param_string(unsigned __int8 *a1)
{
  return *a1 + a1[1];
}


/* Function: call_string_param @ 0x10A9C */
int call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x10AA4 */
int __fastcall param_ptr_array(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r1
  unsigned __int8 *v6; // t1

  result = 0;
  if ( a2 > 0 )
  {
    v4 = a1 - 4;
    v5 = v4 + 4 * a2;
    do
    {
      v6 = *(unsigned __int8 **)(v4 + 4);
      v4 += 4;
      result += *v6;
    }
    while ( v5 != v4 );
  }
  return result;
}


/* Function: call_ptr_array @ 0x10AD4 */
int call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0x10ADC */
int param_varargs(int a1, ...)
{
  int *v2; // r2
  int v3; // r3
  int result; // r0
  int v5; // t1
  va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

  va_start(varg_r1, a1);
  va_copy(v2, varg_r1);
  if ( a1 <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    v5 = *v2++;
    ++v3;
    result += v5;
  }
  while ( a1 != v3 );
  return result;
}


/* Function: call_varargs_param @ 0x10B60 */
int call_varargs_param()
{
  return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x10B8C */
int __fastcall param_func_ptr(int (__fastcall *a1)(int), int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x10BA4 */
int call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0x10BAC */
int __fastcall param_double_ptr(_DWORD *a1, int a2)
{
  int result; // r0

  if ( !a1 || !*a1 )
    return -1;
  *(_DWORD *)*a1 = a2;
  result = 1;
  *a1 = 0;
  return result;
}


/* Function: call_double_ptr @ 0x10BDC */
int call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x10BE4 */
int __fastcall param_complex_cast(_DWORD *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return a1[1] + *a1;
  return -1;
}


/* Function: call_complex_cast @ 0x10C08 */
int call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x10C14 */
int __fastcall param_struct_byval(
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


/* Function: call_struct_byval @ 0x10C30 */
int call_struct_byval()
{
  return 15;
}


/* Function: param_order_dep @ 0x10C38 */
int __fastcall param_order_dep(int a1, int a2)
{
  return a1 + a2;
}


/* Function: call_order_dep @ 0x10C40 */
int call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x10C48 */
int test_parameter_passing()
{
  int v0; // r0

  puts(asc_115F8);
  _printf_chk(1, "PARAM-L1-01: %d\n", 15);
  _printf_chk(1, "PARAM-L1-02: %d\n", 11);
  _printf_chk(1, "PARAM-L2-01: %d\n", 4);
  _printf_chk(1, "PARAM-L2-02: %d\n", 173);
  _printf_chk(1, "PARAM-L2-03: %d\n", 300);
  v0 = param_varargs_constprop_0(4, 10, 20, 30, 40);
  _printf_chk(1, "PARAM-L2-04: %d\n", v0);
  _printf_chk(1, "PARAM-L3-01: %d\n", 20);
  _printf_chk(1, "PARAM-L3-02: %d\n", 21);
  _printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
  _printf_chk(1, "PARAM-L3-04: %d\n", 15);
  return _printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x10D60 */
int __fastcall ret_basic_type(int a1)
{
  return 2 * a1;
}


/* Function: call_ret_basic @ 0x10D68 */
int call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x10D70 */
int __fastcall ret_pointer(int a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x10D78 */
int call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x10D80 */
_DWORD *__fastcall ret_small_struct(_DWORD *result, int a2, int a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}


/* Function: call_ret_small_struct @ 0x10D88 */
int call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x10D90 */
_DWORD *__fastcall ret_large_struct(_DWORD *result, int a2)
{
  *result = a2;
  result[1] = a2 + 1;
  result[2] = a2 + 2;
  result[3] = a2 + 3;
  result[4] = a2 + 4;
  result[5] = a2 + 5;
  result[6] = a2 + 6;
  result[7] = a2 + 7;
  result[8] = a2 + 8;
  result[9] = a2 + 9;
  result[10] = a2 + 10;
  result[11] = a2 + 11;
  result[12] = a2 + 12;
  result[13] = a2 + 13;
  result[14] = a2 + 14;
  result[15] = a2 + 15;
  return result;
}


/* Function: call_ret_large_struct @ 0x10E0C */
int call_ret_large_struct()
{
  return 215;
}


/* Function: ret_func_ptr @ 0x10E14 */
int (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  if ( a1 )
    return func_b;
  else
    return func_a;
}


/* Function: call_ret_func_ptr @ 0x10E34 */
int call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x10E3C */
int *__fastcall ret_opaque_handle(int a1)
{
  if ( a1 )
    return (int *)&handle2_0;
  else
    return &handle1_1;
}


/* Function: call_ret_opaque @ 0x10E58 */
int call_ret_opaque()
{
  return handle1_1;
}


/* Function: ret_complex_expr @ 0x10E68 */
int __fastcall ret_complex_expr(int a1, int a2, int a3)
{
  if ( a1 <= a2 )
    return a3 + 10;
  else
    return 2 * a3;
}


/* Function: call_ret_complex_expr @ 0x10E78 */
int call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x10E80 */
int __fastcall ret_multi_branch(unsigned int a1)
{
  if ( a1 > 2 )
    return -1;
  else
    return 10 * (a1 + 1);
}


/* Function: call_ret_multi_branch @ 0x10E98 */
int call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x10EA0 */
int __fastcall ret_void(int a1, int *a2)
{
  int result; // r0

  result = 3 * a1;
  *a2 = result;
  return result;
}


/* Function: call_ret_void @ 0x10EAC */
int call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x10EB4 */
int test_return_values()
{
  puts(asc_116F8);
  _printf_chk(1, aRetL101D, 42);
  _printf_chk(1, aRetL102D, 20);
  _printf_chk(1, aRetL103D, 7);
  _printf_chk(1, aRetL104D, 215);
  _printf_chk(1, aRetL201D, 10);
  _printf_chk(1, aRetL202D, handle1_1);
  _printf_chk(1, aRetL301D, 40);
  _printf_chk(1, aRetL302D, 60);
  return _printf_chk(1, aRetL303D, 21);
}


/* Function: __aeabi_drsub @ 0x10F84 */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0x10F8C */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0x10F90 */
int __fastcall _aeabi_dadd(__int64 a1, __int64 a2)
{
  int v2; // r4
  int v3; // r5
  bool v4; // zf
  int v5; // r4
  bool v6; // vf
  char v7; // cc
  int v8; // r5
  __int64 v9; // r2
  int v10; // r4
  char v11; // lr
  unsigned int v12; // r12
  __int64 v13; // r0
  bool v14; // nf
  char v15; // r5
  _BOOL1 v16; // off
  _BOOL1 v17; // cf
  int v18; // off
  int v19; // r4
  bool v20; // zf
  unsigned int v21; // r3
  int v22; // r3
  bool v23; // cc
  int v24; // r2
  int v25; // r4
  int v26; // r4
  char v27; // r4
  bool v28; // zf
  bool v29; // zf

  v2 = 2 * HIDWORD(a1);
  v3 = 2 * HIDWORD(a2);
  v4 = 2 * HIDWORD(a1) == 2 * HIDWORD(a2);
  if ( 2 * HIDWORD(a1) == 2 * HIDWORD(a2) )
    v4 = (unsigned int)a1 == (unsigned int)a2;
  if ( !v4 )
  {
    v4 = (v2 | (unsigned int)a1) == 0;
    if ( v2 | (unsigned int)a1 )
    {
      v4 = (v3 | (unsigned int)a2) == 0;
      if ( v3 | (unsigned int)a2 )
      {
        v4 = v2 >> 21 == -1;
        if ( v2 >> 21 != -1 )
          v4 = v3 >> 21 == -1;
      }
    }
  }
  if ( v4 )
  {
    v28 = v2 >> 21 == -1;
    if ( v2 >> 21 != -1 )
      v28 = v3 >> 21 == -1;
    if ( v28 )
    {
      if ( v2 >> 21 != -1 )
        return a2;
    }
    else
    {
      v29 = v2 == v3;
      if ( v2 == v3 )
        v29 = (unsigned int)a1 == (unsigned int)a2;
      if ( v29 )
      {
        if ( HIDWORD(a1) != HIDWORD(a2) )
        {
          LODWORD(a1) = 0;
          return a1;
        }
        if ( !((unsigned int)v2 >> 21) )
        {
          LODWORD(a1) = 2 * a1;
          return a1;
        }
        if ( (unsigned int)v2 < 0xFFC00000 )
          return a1;
        goto LABEL_69;
      }
      if ( !(v2 | (unsigned int)a1) )
        LODWORD(a1) = a2;
    }
  }
  else
  {
    v5 = (unsigned int)v2 >> 21;
    v6 = __OFSUB__((unsigned int)v3 >> 21, v5);
    v8 = ((unsigned int)v3 >> 21) - v5;
    v7 = (v8 < 0) ^ v6 | (v8 == 0);
    if ( v8 < 0 != v6 )
      v8 = -v8;
    if ( !v7 )
    {
      v5 += v8;
      v9 = a1 ^ a2;
      a1 ^= v9;
      a2 = a1 ^ v9;
    }
    if ( (unsigned int)v8 <= 0x36 )
    {
      v4 = a1 >= 0;
      HIDWORD(a1) = HIDWORD(a1) & 0xFFFFF | 0x100000;
      if ( !v4 )
        a1 = -a1;
      v4 = a2 >= 0;
      HIDWORD(a2) = HIDWORD(a2) & 0xFFFFF | 0x100000;
      if ( !v4 )
        a2 = -a2;
      if ( v5 == v8 )
      {
        HIDWORD(a2) ^= 0x100000u;
        if ( v5 )
        {
          --v8;
        }
        else
        {
          HIDWORD(a1) ^= 0x100000u;
          v5 = 1;
        }
      }
      v10 = v5 - 1;
      v11 = 32 - v8;
      if ( v8 > 32 )
      {
        v15 = v8 - 32;
        v12 = HIDWORD(a2) << (v11 + 32);
        if ( (_DWORD)a2 )
          v12 |= 2u;
        LODWORD(a1) = a1 + (SHIDWORD(a2) >> v15);
        HIDWORD(a1) += (SHIDWORD(a2) >> 31) + __CFSHR__(HIDWORD(a2), 31);
        v14 = a1 < 0;
      }
      else
      {
        v12 = (_DWORD)a2 << v11;
        v13 = a1 + ((unsigned int)a2 >> v8);
        LODWORD(a1) = v13 + (HIDWORD(a2) << v11);
        HIDWORD(a1) = (SHIDWORD(a2) >> v8) + __CFSHR__(HIDWORD(a2), v8) + HIDWORD(v13);
        v14 = a1 < 0;
      }
      if ( v14 )
      {
        v17 = v12 == 0;
        v12 = -v12;
        v16 = v17;
        v17 = __CFSUB__(0, (_DWORD)a1, v17);
        LODWORD(a1) = -(a1 + !v16);
        HIDWORD(a1) = -(HIDWORD(a1) + !v17);
      }
      if ( HIDWORD(a1) >= 0x100000 )
      {
        if ( HIDWORD(a1) < 0x200000
          || (v17 = a1 & 1,
              LODWORD(a1) = a1 >> 1,
              v12 = (v12 >> 1) | (v17 << 31),
              (unsigned int)((v10 + 1) << 21) < 0xFFC00000) )
        {
LABEL_30:
          v17 = v12 >= 0x80000000;
          if ( v12 == 0x80000000 )
            v17 = a1 & 1;
          LODWORD(a1) = v17 + (_DWORD)a1;
          return a1;
        }
LABEL_69:
        LODWORD(a1) = 0;
        return a1;
      }
      v17 = __CFSHL__(v12, 1);
      v12 *= 2;
      v18 = v17 + (_DWORD)a1;
      v17 = __CFADD__(v17, (_DWORD)a1) | __CFADD__((_DWORD)a1, v18);
      LODWORD(a1) = a1 + v18;
      HIDWORD(a1) += v17 + HIDWORD(a1);
      v17 = v10 != 0;
      v19 = v10 - 1;
      if ( v17 && HIDWORD(a1) >= 0x100000 )
        goto LABEL_30;
      v20 = HIDWORD(a1) == 0;
      if ( !HIDWORD(a1) )
      {
        HIDWORD(a1) = a1;
        LODWORD(a1) = 0;
      }
      v21 = __clz(HIDWORD(a1));
      if ( v20 )
        v21 += 32;
      v22 = v21 - 11;
      v24 = v22 - 32;
      v23 = v22 <= 32;
      if ( v22 < 32 )
      {
        v23 = v24 <= -12;
        if ( v24 > -12 )
        {
          LODWORD(a1) = HIDWORD(a1) << v22;
          HIDWORD(a1) >>= 32 - v22;
LABEL_47:
          v7 = v19 < v22;
          v25 = v19 - v22;
          if ( v7 )
          {
            v26 = ~v25;
            v7 = v26 < 31;
            v27 = v26 - 31;
            if ( v7 )
              LODWORD(a1) = ((unsigned int)a1 >> (v27 + 32)) | (HIDWORD(a1) << -v27);
            else
              LODWORD(a1) = HIDWORD(a1) >> v27;
          }
          return a1;
        }
        LOBYTE(v24) = v22;
      }
      if ( v23 )
        LOBYTE(v12) = 32 - v24;
      HIDWORD(a1) <<= v24;
      if ( v23 )
      {
        HIDWORD(a1) |= (unsigned int)a1 >> v12;
        LODWORD(a1) = (_DWORD)a1 << v24;
      }
      goto LABEL_47;
    }
  }
  return a1;
}


/* Function: __floatunsidf @ 0x1123C */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x110D8);
  return result;
}


/* Function: __floatsidf @ 0x11260 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x110D8);
  return result;
}


/* Function: __extendsfdf2 @ 0x11288 */
int __fastcall _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
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
      JUMPOUT(0x110D8);
  }
  return result;
}


/* Function: __floatundidf @ 0x112D0 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11300);
  return a1;
}


/* Function: __floatdidf @ 0x112E4 */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x1107C);
  return a1;
}


/* Function: __fixdfsi @ 0x11344 */
unsigned int __fastcall _fixdfsi(unsigned int a1, int a2)
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


/* Function: .term_proc @ 0x113A0 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x22050 */

/* FAILED to decompile: __imp_strlen @ 0x22054 */

/* FAILED to decompile: __imp___printf_chk @ 0x22058 */

/* FAILED to decompile: __imp_abort @ 0x2205C */

/* FAILED to decompile: __imp___libc_start_main @ 0x22060 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x22064 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x22068 */

/* Total functions decompiled: 90, failed: 7 */
