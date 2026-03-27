/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_Os_g
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
  test_calling_conventions();
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
int __fastcall func_a(int x)
{
  return x + 10;
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
int __fastcall cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x11E9 */
int __cdecl call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x11F3 */
int __fastcall stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x11FD */
int __cdecl call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x1207 */
int __fastcall fastcall_func(int a, int b, int c)
{
  return b + a + c;
}


/* Function: call_fastcall @ 0x1211 */
int __cdecl call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x121B */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1225 */
int __fastcall arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1234 */
__int64 call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x123E */
int __fastcall mips_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_mips @ 0x124A */
int __cdecl call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x1254 */
int __fastcall amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1266 */
int __cdecl call_amd64_sysv()
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
int __cdecl call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x129F */
int __cdecl mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x12A9 */
int varargs_func(int count, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // r8d
  char *v9; // rax
  char *v10; // rsi
  __int64 v11; // r10
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-10h]
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v15 = v1;
  v6 = 8;
  v16 = v2;
  v7 = 0;
  v17 = v4;
  v8 = 0;
  v18 = v5;
  v14 = v3;
  v9 = &v19;
  while ( v7 < count )
  {
    v10 = v9 + 8;
    if ( v6 <= 0x2F )
    {
      v11 = v6;
      v10 = v9;
      v6 += 8;
      v9 = &v13[v11];
    }
    v8 += *(_DWORD *)v9;
    ++v7;
    v9 = v10;
  }
  return v8;
}


/* Function: func_no_args @ 0x1345 */
int __cdecl func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x134F */
int __fastcall func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return h + g + e + d + c + b + a + f;
}


/* Function: func_mixed_args @ 0x1369 */
__int64 __fastcall func_mixed_args(int x, char *s, double d, __int64 ll)
{
  int v4; // eax
  int v5; // ebx

  v4 = 0;
  v5 = ll;
  if ( s )
    v4 = strlen(s);
  return (unsigned int)(int)((double)(x + v4) + d + (double)v5);
}


/* Function: func_struct_byval @ 0x13AD */
int __cdecl func_struct_byval(LargeStruct s)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = 0;
  v2 = 0;
  do
    v2 += s.data[v1++];
  while ( v1 != 16 );
  return v2;
}


/* Function: func_struct_byptr @ 0x13C4 */
int __fastcall func_struct_byptr(SmallStruct *p)
{
  int result; // eax

  result = -1;
  if ( p )
    return p->y * p->x;
  return result;
}


/* Function: test_calling_conventions @ 0x13D7 */
void __cdecl test_calling_conventions()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  __int64 i; // rax
  LargeStruct *p_large; // rsi
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-118h]
  LargeStruct large; // [rsp+8h] [rbp-110h] BYREF
  _QWORD v10[18]; // [rsp+88h] [rbp-90h] BYREF

  v10[16] = __readfsqword(0x28u);
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
  v0 = varargs_func(5, 1, 2, 3, 4, 5);
  __printf_chk(1, aCallL206, v0);
  __printf_chk(1, aCallL207, 42);
  __printf_chk(1, aCallL208, 36);
  v1 = func_mixed_args(10, "test", 3.14, 100);
  __printf_chk(1, aCallL209, v1);
  for ( i = 1; i != 17; ++i )
  {
    *(&v8 + i) = i;
    p_large = &large;
  }
  v4 = v10;
  v5 = 32;
  v6 = 0;
  v7 = 0;
  while ( v5 )
  {
    *v4 = p_large->data[0];
    p_large = (LargeStruct *)((char *)p_large + 4);
    ++v4;
    --v5;
  }
  do
    v7 += v10[v6++];
  while ( v6 != 16 );
  __printf_chk(1, aCallL210, v7, v10);
  __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1619 */
int __fastcall param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x1621 */
__int64 call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x162B */
int __fastcall param_by_value_ptr(int *p)
{
  int result; // eax

  result = 1;
  *p = _mm_cvtsi128_si32(_mm_slli_epi32(_mm_cvtsi32_si128(*p), 1u));
  return result;
}


/* Function: call_by_value_ptr @ 0x1642 */
int __cdecl call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x164C */
int __fastcall param_array_decay(int *arr, int n)
{
  return 8;
}


/* Function: call_array_decay @ 0x1656 */
int __cdecl call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x1660 */
int __fastcall param_string(const char *str)
{
  return str[1] + *str;
}


/* Function: call_string_param @ 0x166E */
int __cdecl call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x1678 */
int __fastcall param_ptr_array(char **arr, int n)
{
  __int64 v2; // rax
  int v3; // r8d
  char *v4; // rdx

  v2 = 0;
  v3 = 0;
  while ( n > (int)v2 )
  {
    v4 = arr[v2++];
    v3 += *v4;
  }
  return v3;
}


/* Function: call_ptr_array @ 0x1698 */
int __cdecl call_ptr_array()
{
  char *strs[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  strs[0] = (char *)&unk_21BC;
  strs[1] = (char *)&unk_21C0;
  strs[2] = (char *)&unk_21C4;
  return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x16F8 */
int param_varargs(int count, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // r8d
  char *v9; // rax
  char *v10; // rsi
  __int64 v11; // r10
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-10h]
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v15 = v1;
  v6 = 8;
  v16 = v2;
  v7 = 0;
  v17 = v4;
  v8 = 0;
  v18 = v5;
  v14 = v3;
  v9 = &v19;
  while ( v7 < count )
  {
    v10 = v9 + 8;
    if ( v6 <= 0x2F )
    {
      v11 = v6;
      v10 = v9;
      v6 += 8;
      v9 = &v13[v11];
    }
    v8 += *(_DWORD *)v9;
    ++v7;
    v9 = v10;
  }
  return v8;
}


/* Function: call_varargs_param @ 0x1794 */
int __cdecl call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x17B9 */
int __fastcall param_func_ptr(int (*callback)(int), int x)
{
  return ((__int64 (__fastcall *)(_QWORD))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x17CB */
int __cdecl call_func_ptr_param()
{
  return param_func_ptr((int (*)(int))callback_func, 5);
}


/* Function: param_double_ptr @ 0x17DD */
int __fastcall param_double_ptr(int **pp, int new_val)
{
  int result; // eax

  result = -1;
  if ( pp )
  {
    if ( *pp )
    {
      **pp = new_val;
      result = 1;
      *pp = 0;
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
int __fastcall param_complex_cast(void *p, int type)
{
  int result; // eax

  if ( !type )
    return *(_DWORD *)p;
  result = -1;
  if ( type == 1 )
    return *(_DWORD *)p + *((_DWORD *)p + 1);
  return result;
}


/* Function: call_complex_cast @ 0x1822 */
int __cdecl call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x182C */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1839 */
int __cdecl call_struct_byval()
{
  __int64 i; // rax
  BigStruct s; // [rsp+8h] [rbp-50h]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
    s.data[i] = i;
  return s.data[0] + s.data[15];
}


/* Function: param_order_dep @ 0x1880 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1888 */
int __cdecl call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x1892 */
void __cdecl test_parameter_passing()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax

  puts(asc_21C8);
  __printf_chk(1, "PARAM-L1-01: %d\n", 15);
  __printf_chk(1, "PARAM-L1-02: %d\n", 11);
  __printf_chk(1, "PARAM-L2-01: %d\n", 8);
  __printf_chk(1, "PARAM-L2-02: %d\n", 173);
  v0 = call_ptr_array();
  __printf_chk(1, "PARAM-L2-03: %d\n", v0);
  v1 = call_varargs_param();
  __printf_chk(1, "PARAM-L2-04: %d\n", v1);
  v2 = call_func_ptr_param();
  __printf_chk(1, "PARAM-L3-01: %d\n", v2);
  __printf_chk(1, "PARAM-L3-02: %d\n", 21);
  __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
  v3 = call_struct_byval();
  __printf_chk(1, "PARAM-L3-04: %d\n", v3);
  __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x19BC */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x19C4 */
int __cdecl call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x19CE */
int *__fastcall ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x19D7 */
int __cdecl call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x19E1 */
// local variable allocation has failed, the output may be wrong!
SmallPoint __fastcall ret_small_struct(int x, int y)
{
  return (SmallPoint)((*(_QWORD *)&y << 32) | (unsigned int)x);
}


/* Function: call_ret_small_struct @ 0x19EF */
int __cdecl call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x19F9 */
LargeData *__fastcall ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  LargeData *result; // rax
  __int64 i; // rcx
  LargeData *p_d; // rsi
  LargeData d; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  result = retstr;
  v7 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
  {
    p_d = &d;
    d.data[i] = seed + i;
  }
  while ( i )
  {
    retstr->data[0] = p_d->data[0];
    p_d = (LargeData *)((char *)p_d + 4);
    retstr = (LargeData *)((char *)retstr + 4);
    --i;
  }
  return result;
}


/* Function: call_ret_large_struct @ 0x1A49 */
int __cdecl call_ret_large_struct()
{
  LargeData d; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v2; // [rsp+48h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  ret_large_struct(&d, 100);
  return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x1A92 */
func_ptr_t __fastcall ret_func_ptr(int selector)
{
  func_ptr_t result; // rax

  result = (func_ptr_t)func_b;
  if ( !selector )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1AAB */
int __cdecl call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x1AB5 */
void *__fastcall ret_opaque_handle(int type)
{
  void *result; // rax

  result = &handle1_1;
  if ( type )
    return &handle2_0;
  return result;
}


/* Function: call_ret_opaque @ 0x1ACE */
int __cdecl call_ret_opaque()
{
  return handle1_1;
}


/* Function: ret_complex_expr @ 0x1AD9 */
int __fastcall ret_complex_expr(int x, int y, int z)
{
  int result; // eax

  result = z + 10;
  if ( x > y )
    return 2 * z;
  return result;
}


/* Function: call_ret_complex_expr @ 0x1AE8 */
int __cdecl call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1AF2 */
int __fastcall ret_multi_branch(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op <= 2 )
    return 10 * (op + 1);
  return result;
}


/* Function: call_ret_multi_branch @ 0x1B04 */
int __cdecl call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1B0E */
void __fastcall ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x1B18 */
__int64 call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1B22 */
void __cdecl test_return_values()
{
  unsigned int v0; // eax

  puts(asc_22A4);
  __printf_chk(1, aRetL101D, 42);
  __printf_chk(1, aRetL102D, 20);
  __printf_chk(1, aRetL103D, 7);
  v0 = call_ret_large_struct();
  __printf_chk(1, aRetL104D, v0);
  __printf_chk(1, aRetL201D, 10);
  __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
  __printf_chk(1, aRetL301D, 40);
  __printf_chk(1, aRetL302D, 60);
  __printf_chk(1, aRetL303D);
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
