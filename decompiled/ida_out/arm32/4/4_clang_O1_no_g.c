/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/4/4_clang_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x3E4 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_3F0 @ 0x3F0 */
void sub_3F0()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x458 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_494 + 18152), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x49C */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x4C0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x504 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x554 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x5BC */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: cdecl_func @ 0x5C0 */
int __fastcall cdecl_func(int a1, int a2)
{
  return a2 + a1;
}


/* Function: call_cdecl @ 0x5C8 */
int call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x5D0 */
int __fastcall stdcall_func(int a1, int a2)
{
  return a2 * a1;
}


/* Function: call_stdcall @ 0x5DC */
int call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x5E4 */
int __fastcall fastcall_func(int a1, int a2, int a3)
{
  return a2 + a1 + a3;
}


/* Function: call_fastcall @ 0x5F0 */
int call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x5F8 */
int call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x600 */
int __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return a2 + a1 + a3 + a4 + a5;
}


/* Function: call_arm_aapcs @ 0x618 */
int call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x620 */
int __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return a2 + a1 + a3 + a4;
}


/* Function: call_mips @ 0x630 */
int call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x638 */
int __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return a2 + a1 + a3 + a4 + a5 + a6;
}


/* Function: call_amd64_sysv @ 0x658 */
int call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x660 */
int __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return a2 + a1 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x678 */
int call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x680 */
int __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return a2 + a1 + a3 + a4;
}


/* Function: call_vectorcall @ 0x690 */
int call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x698 */
int mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x6A0 */
int varargs_func(int a1, ...)
{
  int v1; // r1
  int v2; // kr00_4
  va_list v4; // [sp+0h] [bp-10h]
  va_list va; // [sp+4h] [bp-Ch] BYREF

  va_start(va, a1);
  va_copy(v4, va);
  v1 = 0;
  if ( a1 >= 1 )
  {
    do
    {
      v2 = va_arg(v4, _DWORD);
      v1 += v2;
      --a1;
    }
    while ( a1 );
  }
  return v1;
}


/* Function: func_no_args @ 0x6E4 */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x6EC */
int __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return a2 + a1 + a3 + a4 + a5 + a6 + a7 + a8;
}


/* Function: func_mixed_args @ 0x71C */
int __fastcall func_mixed_args(int a1, char *s, unsigned int a3, unsigned int a4, __int64 a5)
{
  size_t v8; // r0

  if ( s )
    v8 = strlen(s);
  else
    v8 = 0;
  return (int)((double)(int)(v8 + a1) + COERCE_DOUBLE(__PAIR64__(a4, a3)) + (double)a5);
}


/* Function: func_struct_byval @ 0x794 */
int __fastcall func_struct_byval(int a1, int a2, int a3, int a4)
{
  int v4; // r1
  __int64 v5; // kr00_8
  int result; // r0
  _DWORD v7[4]; // [sp+8h] [bp-10h]

  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  v7[3] = a4;
  v4 = 0;
  v5 = 0;
  do
  {
    v5 += *(_QWORD *)&v7[v4];
    result = v5;
    v4 += 2;
  }
  while ( v4 != 32 );
  return result;
}


/* Function: func_struct_byptr @ 0x7E0 */
int __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return a1[1] * *a1;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x7F4 */
int test_calling_conventions()
{
  int v0; // r4
  int v1; // r0
  int *v2; // r0
  int v3; // r0
  int v4; // r1
  _BYTE v6[136]; // [sp+8h] [bp-88h] BYREF

  puts(asc_175E);
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
  v0 = 1;
  v1 = varargs_func(5, 1, 2, 3, 4, 5);
  printf(aCallL206, v1);
  printf(aCallL207, 42);
  printf(aCallL208, 36);
  printf(aCallL209, 117);
  v2 = (int *)v6;
  do
  {
    *v2 = v0;
    v2[1] = 0;
    v2 += 2;
    ++v0;
  }
  while ( v0 != 17 );
  v3 = 0;
  v4 = 0;
  do
  {
    v4 += *(_DWORD *)&v6[v3];
    v3 += 8;
  }
  while ( v3 != 128 );
  printf(aCallL210, v4);
  return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x9CC */
int __fastcall param_by_value_int(int a1)
{
  return 2 * a1;
}


/* Function: call_by_value_int @ 0x9D4 */
int call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x9DC */
int __fastcall param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x9F0 */
int call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x9F8 */
int param_array_decay()
{
  return 4;
}


/* Function: call_array_decay @ 0xA00 */
int call_array_decay()
{
  return 4;
}


/* Function: param_string @ 0xA08 */
int __fastcall param_string(unsigned __int8 *a1)
{
  return a1[1] + *a1;
}


/* Function: call_string_param @ 0xA18 */
int call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0xA20 */
int __fastcall param_ptr_array(unsigned __int8 **a1, int a2)
{
  int result; // r0
  unsigned __int8 *v4; // t1

  if ( a2 < 1 )
    return 0;
  result = 0;
  do
  {
    v4 = *a1++;
    result += *v4;
    --a2;
  }
  while ( a2 );
  return result;
}


/* Function: call_ptr_array @ 0xA50 */
int call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0xA58 */
int param_varargs(int a1, ...)
{
  int v1; // r1
  int v2; // kr00_4
  va_list v4; // [sp+0h] [bp-10h]
  va_list va; // [sp+4h] [bp-Ch] BYREF

  va_start(va, a1);
  va_copy(v4, va);
  v1 = 0;
  if ( a1 >= 1 )
  {
    do
    {
      v2 = va_arg(v4, _DWORD);
      v1 += v2;
      --a1;
    }
    while ( a1 );
  }
  return v1;
}


/* Function: call_varargs_param @ 0xA9C */
int call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xACC */
int __fastcall param_func_ptr(int (__fastcall *a1)(int), int a2)
{
  return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0xAEC */
int call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0xAF4 */
int __fastcall param_double_ptr(_DWORD **a1, int a2, int a3, _DWORD *a4)
{
  int result; // r0
  bool v6; // zf

  result = -1;
  v6 = a1 == 0;
  if ( a1 )
  {
    a4 = *a1;
    v6 = *a1 == 0;
  }
  if ( !v6 )
  {
    *a1 = 0;
    *a4 = a2;
    return 1;
  }
  return result;
}


/* Function: call_double_ptr @ 0xB1C */
int call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0xB24 */
int __fastcall param_complex_cast(_DWORD *a1, int a2)
{
  if ( a2 == 1 )
    return a1[1] + *a1;
  if ( a2 )
    return -1;
  return *a1;
}


/* Function: call_complex_cast @ 0xB58 */
int call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0xB64 */
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


/* Function: call_struct_byval @ 0xB70 */
int call_struct_byval()
{
  int i; // r0
  _DWORD v2[16]; // [sp+0h] [bp-40h]

  for ( i = 0; i != 16; ++i )
    v2[i] = i;
  return v2[15] + v2[0];
}


/* Function: param_order_dep @ 0xBA0 */
int __fastcall param_order_dep(int a1, int a2)
{
  return a2 + a1;
}


/* Function: call_order_dep @ 0xBA8 */
int call_order_dep()
{
  return 3;
}


/* Function: test_parameter_passing @ 0xBB0 */
int test_parameter_passing()
{
  int v0; // r0
  int i; // r0
  _DWORD v3[18]; // [sp+8h] [bp-48h]

  puts(asc_177F);
  printf("PARAM-L1-01: %d\n", 15);
  printf("PARAM-L1-02: %d\n", 11);
  printf("PARAM-L2-01: %d\n", 4);
  printf("PARAM-L2-02: %d\n", 173);
  printf("PARAM-L2-03: %d\n", 300);
  v0 = param_varargs(4, 10, 20, 30, 40);
  printf("PARAM-L2-04: %d\n", v0);
  printf("PARAM-L3-01: %d\n", 20);
  printf("PARAM-L3-02: %d\n", 21);
  printf("PARAM-L3-03: %d\n", 305419896);
  for ( i = 0; i != 16; ++i )
    v3[i] = i;
  printf("PARAM-L3-04: %d\n", v3[15] + v3[0]);
  return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0xCF0 */
int __fastcall ret_basic_type(int a1)
{
  return 2 * a1;
}


/* Function: call_ret_basic @ 0xCF8 */
int call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0xD00 */
int __fastcall ret_pointer(int a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0xD08 */
int call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0xD10 */
_DWORD *__fastcall ret_small_struct(_DWORD *result, int a2, int a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}


/* Function: call_ret_small_struct @ 0xD18 */
int call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0xD20 */
int __fastcall ret_large_struct(int result, int a2)
{
  int i; // r2

  for ( i = 0; i != 16; ++i )
    *(_DWORD *)(result + 4 * i) = a2 + i;
  return result;
}


/* Function: call_ret_large_struct @ 0xD3C */
int call_ret_large_struct()
{
  int i; // r0
  _DWORD v2[16]; // [sp+0h] [bp-40h]

  for ( i = 0; i != 16; ++i )
    v2[i] = i + 100;
  return v2[15] + v2[0];
}


/* Function: func_a @ 0xD70 */
int __fastcall func_a(int a1)
{
  return a1 + 10;
}


/* Function: func_b @ 0xD78 */
int __fastcall func_b(int a1)
{
  return 2 * a1;
}


/* Function: ret_func_ptr @ 0xD80 */
int (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  int (__fastcall *v1)(int); // r1

  v1 = func_b;
  if ( !a1 )
    return func_a;
  return v1;
}


/* Function: call_ret_func_ptr @ 0xDA8 */
int call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0xDB0 */
int **__fastcall ret_opaque_handle(int a1)
{
  void *v1; // r1

  v1 = &ret_opaque_handle_handle2;
  if ( !a1 )
    return ret_opaque_handle_handle1;
  return (int **)v1;
}


/* Function: call_ret_opaque @ 0xDD8 */
int *call_ret_opaque()
{
  return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0xDE8 */
int __fastcall ret_complex_expr(int a1, int a2, int a3)
{
  int v3; // r3

  v3 = a3 + 10;
  if ( a1 > a2 )
    return 2 * a3;
  return v3;
}


/* Function: call_ret_complex_expr @ 0xDFC */
int call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0xE04 */
int __fastcall ret_multi_branch(unsigned int a1)
{
  int v1; // r1

  v1 = -1;
  if ( a1 < 3 )
    return 10 * a1 + 10;
  return v1;
}


/* Function: call_ret_multi_branch @ 0xE20 */
int call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0xE28 */
int __fastcall ret_void(int a1, int *a2)
{
  int result; // r0

  result = 3 * a1;
  *a2 = result;
  return result;
}


/* Function: call_ret_void @ 0xE34 */
int call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0xE3C */
int test_return_values()
{
  int i; // r0
  _DWORD v2[18]; // [sp+0h] [bp-48h]

  puts(asc_17A0);
  printf(aRetL101D, 42);
  printf(aRetL102D, 20);
  printf(aRetL103D, 7);
  for ( i = 0; i != 16; ++i )
    v2[i] = i + 100;
  printf(aRetL104D, v2[15] + v2[0]);
  printf(aRetL201D, 10);
  printf(aRetL202D, ret_opaque_handle_handle1[0]);
  printf(aRetL301D, 40);
  printf(aRetL302D, 60);
  return printf(aRetL303D, 21);
}


/* Function: main @ 0xF40 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: __aeabi_drsub @ 0xF5C */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0xF64 */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0xF68 */
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


/* Function: __floatunsidf @ 0x1214 */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x10B0);
  return result;
}


/* Function: __floatsidf @ 0x1238 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x10B0);
  return result;
}


/* Function: __extendsfdf2 @ 0x1260 */
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
      JUMPOUT(0x10B0);
  }
  return result;
}


/* Function: __floatundidf @ 0x12A8 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x12D8);
  return a1;
}


/* Function: __floatdidf @ 0x12BC */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x1054);
  return a1;
}


/* Function: __fixdfsi @ 0x131C */
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


/* Function: .term_proc @ 0x1378 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x1208C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12090 */

/* FAILED to decompile: __imp_printf @ 0x12094 */

/* FAILED to decompile: __imp_puts @ 0x12098 */

/* FAILED to decompile: __imp_strlen @ 0x1209C */

/* FAILED to decompile: __imp_abort @ 0x120A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120A8 */

/* Total functions decompiled: 88, failed: 7 */
