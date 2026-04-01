/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/4/4_gcc_O0_no_g
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
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1120 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1160 */
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


/* Function: frame_dummy @ 0x11A0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: cdecl_func @ 0x11A9 */
__int64 __fastcall cdecl_func(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x11C1 */
__int64 call_cdecl()
{
  return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x11DA */
__int64 __fastcall stdcall_func(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x11F1 */
__int64 call_stdcall()
{
  return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x120A */
__int64 __fastcall fastcall_func(int a1, int a2, int a3)
{
  return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x122A */
__int64 call_fastcall()
{
  return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1248 */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1257 */
__int64 __fastcall arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_arm_aapcs @ 0x1288 */
__int64 call_arm_aapcs()
{
  return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x12B1 */
__int64 __fastcall mips_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_mips @ 0x12D9 */
__int64 call_mips()
{
  return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x12FC */
__int64 __fastcall amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (unsigned int)(a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: call_amd64_sysv @ 0x1336 */
__int64 call_amd64_sysv()
{
  return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1365 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x1396 */
__int64 call_ms_x64()
{
  return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x13BF */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x13E7 */
__int64 call_vectorcall()
{
  return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x140A */
__int64 mixed_conventions_test()
{
  int v1; // [rsp+Ch] [rbp-4h]
  int v2; // [rsp+Ch] [rbp-4h]

  v1 = cdecl_func(1, 2);
  v2 = stdcall_func(3, 4) + v1;
  return (unsigned int)fastcall_func(5, 6, 7) + v2;
}


/* Function: varargs_func @ 0x145D */
__int64 varargs_func(int a1, ...)
{
  __int64 *v1; // rax
  __int64 v2; // kr00_8
  unsigned int v4; // [rsp+18h] [rbp-D8h]
  int i; // [rsp+1Ch] [rbp-D4h]
  gcc_va_list va; // [rsp+20h] [rbp-D0h] BYREF

  va_start(va, a1);
  v4 = 0;
  for ( i = 0; i < a1; ++i )
  {
    if ( va[0].gp_offset > 0x2F )
    {
      v2 = va_arg(va, _QWORD);
      v1 = &v2;
    }
    else
    {
      v1 = (__int64 *)((char *)va[0].reg_save_area + va[0].gp_offset);
      va[0].gp_offset += 8;
    }
    v4 += *(_DWORD *)v1;
  }
  return v4;
}


/* Function: func_no_args @ 0x158A */
__int64 func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1599 */
__int64 __fastcall func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (unsigned int)(a7 + a6 + a5 + a4 + a3 + a2 + a1 + a8);
}


/* Function: func_mixed_args @ 0x15DD */
__int64 __fastcall func_mixed_args(int a1, const char *a2, int a3, double a4)
{
  int v4; // eax

  if ( a2 )
    v4 = strlen(a2);
  else
    v4 = 0;
  return (unsigned int)(int)((double)a3 + (double)(a1 + v4) + a4);
}


/* Function: func_struct_byval @ 0x1643 */
__int64 __fastcall func_struct_byval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int i; // [rsp+0h] [rbp-Ch]
  __int64 v9; // [rsp+4h] [rbp-8h]

  v9 = 0;
  for ( i = 0; i <= 15; ++i )
    v9 += *(&a7 + i);
  return v9;
}


/* Function: func_struct_byptr @ 0x167A */
__int64 __fastcall func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return (unsigned int)(*a1 * a1[1]);
  else
    return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x16A6 */
unsigned __int64 test_calling_conventions()
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
  int i; // [rsp+4h] [rbp-BCh]
  unsigned int v17; // [rsp+8h] [rbp-B8h]
  unsigned int v18; // [rsp+Ch] [rbp-B4h]
  unsigned int v19; // [rsp+10h] [rbp-B0h]
  unsigned int v20; // [rsp+18h] [rbp-A8h]
  unsigned int v21; // [rsp+1Ch] [rbp-A4h]
  _DWORD v22[2]; // [rsp+28h] [rbp-98h] BYREF
  __int64 v23; // [rsp+30h] [rbp-90h]
  unsigned __int64 v24; // [rsp+B8h] [rbp-8h]

  v24 = __readfsqword(0x28u);
  puts(s);
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
  v17 = varargs_func(5, 1, 2, 3, 4, 5);
  printf(aCallL206, v17);
  v18 = func_no_args();
  printf(aCallL207, v18);
  v19 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
  printf(aCallL208, v19);
  v10 = (unsigned int)func_mixed_args(10, "test", 100, 3.14);
  printf(aCallL209, v10);
  for ( i = 0; i <= 15; ++i )
  {
    v11 = i + 1;
    *(&v23 + i) = v11;
  }
  v20 = func_struct_byval((__int64)aCallL209, v10, v11, v12, v13, v14, v23);
  printf(aCallL210, v20);
  v22[0] = 5;
  v22[1] = 10;
  v21 = func_struct_byptr(v22);
  printf(aCallL211, v21);
  return v24 - __readfsqword(0x28u);
}


/* Function: param_by_value_int @ 0x1A1F */
__int64 __fastcall param_by_value_int(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1A32 */
__int64 call_by_value_int()
{
  return (unsigned int)param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x1A5C */
__int64 __fastcall param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x1A8C */
__int64 call_by_value_ptr()
{
  int v1; // [rsp+8h] [rbp-18h] BYREF
  int v2; // [rsp+Ch] [rbp-14h]
  int *v3; // [rsp+10h] [rbp-10h]
  unsigned __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  v1 = 5;
  v3 = &v1;
  v2 = param_by_value_ptr(&v1);
  return (unsigned int)(v1 + v2);
}


/* Function: param_array_decay @ 0x1AE3 */
__int64 param_array_decay()
{
  return 8;
}


/* Function: call_array_decay @ 0x1AF9 */
__int64 call_array_decay()
{
  _QWORD v1[6]; // [rsp+0h] [rbp-30h] BYREF

  v1[5] = __readfsqword(0x28u);
  memset(v1, 0, 40);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))param_array_decay)(v1, 10);
}


/* Function: param_string @ 0x1B63 */
__int64 __fastcall param_string(char *a1)
{
  return (unsigned int)(*a1 + a1[1]);
}


/* Function: call_string_param @ 0x1B8B */
__int64 call_string_param()
{
  return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1BA4 */
__int64 __fastcall param_ptr_array(__int64 a1, int a2)
{
  unsigned int v3; // [rsp+14h] [rbp-8h]
  int i; // [rsp+18h] [rbp-4h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += **(char **)(8LL * i + a1);
  return v3;
}


/* Function: call_ptr_array @ 0x1BF4 */
__int64 call_ptr_array()
{
  _QWORD v1[4]; // [rsp+0h] [rbp-20h] BYREF

  v1[3] = __readfsqword(0x28u);
  v1[0] = "abc";
  v1[1] = "def";
  v1[2] = "ghi";
  return param_ptr_array((__int64)v1, 3);
}


/* Function: param_varargs @ 0x1C57 */
__int64 param_varargs(int a1, ...)
{
  __int64 *v1; // rax
  __int64 v2; // kr00_8
  unsigned int v4; // [rsp+18h] [rbp-D8h]
  int i; // [rsp+1Ch] [rbp-D4h]
  gcc_va_list va; // [rsp+20h] [rbp-D0h] BYREF

  va_start(va, a1);
  v4 = 0;
  for ( i = 0; i < a1; ++i )
  {
    if ( va[0].gp_offset > 0x2F )
    {
      v2 = va_arg(va, _QWORD);
      v1 = &v2;
    }
    else
    {
      v1 = (__int64 *)((char *)va[0].reg_save_area + va[0].gp_offset);
      va[0].gp_offset += 8;
    }
    v4 += *(_DWORD *)v1;
  }
  return v4;
}


/* Function: call_varargs_param @ 0x1D84 */
__int64 call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1DB2 */
__int64 __fastcall param_func_ptr(unsigned int (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2) + 10;
}


/* Function: callback_func @ 0x1DD5 */
__int64 __fastcall callback_func(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_func_ptr_param @ 0x1DE7 */
__int64 call_func_ptr_param()
{
  return param_func_ptr((unsigned int (__fastcall *)(_QWORD))callback_func, 5u);
}


/* Function: param_double_ptr @ 0x1E05 */
__int64 __fastcall param_double_ptr(_QWORD *a1, int a2)
{
  if ( !a1 || !*a1 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)*a1 = a2;
  *a1 = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x1E4C */
__int64 call_double_ptr()
{
  int v1; // [rsp+8h] [rbp-18h] BYREF
  _QWORD v2[2]; // [rsp+10h] [rbp-10h] BYREF

  v2[1] = __readfsqword(0x28u);
  v1 = 10;
  v2[0] = &v1;
  param_double_ptr(v2, 20);
  return (unsigned int)(v2[0] == 0) + v1;
}


/* Function: param_complex_cast @ 0x1EB2 */
__int64 __fastcall param_complex_cast(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *a1 + a1[1];
  return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1F0D */
__int64 call_complex_cast()
{
  unsigned int v1; // [rsp+Ch] [rbp-14h] BYREF
  unsigned int v2[2]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  v1 = 305419896;
  v2[0] = 100;
  v2[1] = 200;
  param_complex_cast(v2, 1);
  return param_complex_cast(&v1, 0);
}


/* Function: param_struct_byval @ 0x1F75 */
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


/* Function: call_struct_byval @ 0x1F87 */
__int64 __fastcall call_struct_byval(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int i; // [rsp+Ch] [rbp-54h]
  __int64 v8; // [rsp+10h] [rbp-50h]
  __int64 v9; // [rsp+18h] [rbp-48h]
  __int64 v10; // [rsp+20h] [rbp-40h]
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  unsigned __int64 v16; // [rsp+58h] [rbp-8h]

  v16 = __readfsqword(0x28u);
  for ( i = 0; i <= 15; ++i )
  {
    a3 = (unsigned int)i;
    *((_DWORD *)&v8 + i) = i;
  }
  return param_struct_byval(a1, a2, a3, a4, a5, a6, v8, v9, v10, v11, v12, v13, v14, v15);
}


/* Function: param_order_dep @ 0x1FF8 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x2010 */
__int64 call_order_dep()
{
  return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x203C */
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

  puts(asc_31E8);
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


/* Function: ret_basic_type @ 0x21B6 */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x21C8 */
__int64 call_ret_basic()
{
  return (unsigned int)ret_basic_type(21);
}


/* Function: ret_pointer @ 0x21ED */
__int64 __fastcall ret_pointer(__int64 a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x2203 */
__int64 call_ret_pointer()
{
  _DWORD v1[3]; // [rsp+Ch] [rbp-14h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  v1[0] = 10;
  v1[1] = 20;
  v1[2] = 30;
  return *(unsigned int *)ret_pointer((__int64)v1);
}


/* Function: ret_small_struct @ 0x225F */
unsigned __int64 __fastcall ret_small_struct(unsigned int a1, unsigned int a2)
{
  return __PAIR64__(a2, a1);
}


/* Function: call_ret_small_struct @ 0x227F */
__int64 call_ret_small_struct()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-8h]

  v1 = ret_small_struct(3u, 4u);
  return (unsigned int)(v1 + HIDWORD(v1));
}


/* Function: ret_large_struct @ 0x22A8 */
_QWORD *__fastcall ret_large_struct(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  int i; // [rsp+1Ch] [rbp-64h]
  _QWORD v8[11]; // [rsp+20h] [rbp-60h]

  v8[9] = __readfsqword(0x28u);
  for ( i = 0; i <= 15; ++i )
    *((_DWORD *)v8 + i) = i + a2;
  v2 = v8[1];
  *a1 = v8[0];
  a1[1] = v2;
  v3 = v8[3];
  a1[2] = v8[2];
  a1[3] = v3;
  v4 = v8[5];
  a1[4] = v8[4];
  a1[5] = v4;
  v5 = v8[7];
  a1[6] = v8[6];
  a1[7] = v5;
  return a1;
}


/* Function: call_ret_large_struct @ 0x2350 */
__int64 call_ret_large_struct()
{
  _QWORD v1[7]; // [rsp+0h] [rbp-50h] BYREF
  int v2; // [rsp+3Ch] [rbp-14h]
  unsigned __int64 v3; // [rsp+48h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  ret_large_struct(v1, 100);
  return (unsigned int)(LODWORD(v1[0]) + v2);
}


/* Function: func_a @ 0x239A */
__int64 __fastcall func_a(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x23AD */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x23BF */
__int64 (__fastcall *__fastcall ret_func_ptr(int a1))(int a1)
{
  if ( a1 )
    return func_b;
  else
    return func_a;
}


/* Function: call_ret_func_ptr @ 0x23E2 */
__int64 call_ret_func_ptr()
{
  __int64 (__fastcall *v1)(int); // [rsp+8h] [rbp-8h]

  v1 = ret_func_ptr(1);
  return v1(5);
}


/* Function: ret_opaque_handle @ 0x2409 */
void *__fastcall ret_opaque_handle(int a1)
{
  if ( a1 )
    return &handle2_0;
  else
    return &handle1_1;
}


/* Function: call_ret_opaque @ 0x242C */
__int64 call_ret_opaque()
{
  return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x244E */
__int64 __fastcall ret_complex_expr(int a1, int a2, int a3)
{
  if ( a1 <= a2 )
    return (unsigned int)(a3 + 10);
  else
    return (unsigned int)(2 * a3);
}


/* Function: call_ret_complex_expr @ 0x2476 */
__int64 call_ret_complex_expr()
{
  int v1; // [rsp+8h] [rbp-8h]

  v1 = ret_complex_expr(5, 3, 10);
  return v1 + (unsigned int)ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x24BA */
__int64 __fastcall ret_multi_branch(int a1)
{
  if ( a1 == 2 )
    return 30;
  if ( a1 > 2 )
    return 0xFFFFFFFFLL;
  if ( !a1 )
    return 10;
  if ( a1 == 1 )
    return 20;
  else
    return 0xFFFFFFFFLL;
}


/* Function: call_ret_multi_branch @ 0x24FB */
__int64 call_ret_multi_branch()
{
  int v1; // [rsp+Ch] [rbp-4h]
  int v2; // [rsp+Ch] [rbp-4h]

  v1 = ret_multi_branch(0);
  v2 = ret_multi_branch(1) + v1;
  return (unsigned int)ret_multi_branch(2) + v2;
}


/* Function: ret_void @ 0x253A */
_DWORD *__fastcall ret_void(int a1, _DWORD *a2)
{
  _DWORD *result; // rax

  result = a2;
  *a2 = 3 * a1;
  return result;
}


/* Function: call_ret_void @ 0x255B */
__int64 call_ret_void()
{
  unsigned int v1; // [rsp+4h] [rbp-Ch] BYREF
  unsigned __int64 v2; // [rsp+8h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  ret_void(7, &v1);
  return v1;
}


/* Function: test_return_values @ 0x25A0 */
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

  puts(asc_32C4);
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


/* Function: main @ 0x26DA */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: .term_proc @ 0x2708 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6030 */

/* FAILED to decompile: puts @ 0x6038 */

/* FAILED to decompile: strlen @ 0x6040 */

/* FAILED to decompile: __stack_chk_fail @ 0x6048 */

/* FAILED to decompile: printf @ 0x6050 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6058 */

/* FAILED to decompile: __gmon_start__ @ 0x6068 */

/* Total functions decompiled: 83, failed: 7 */
