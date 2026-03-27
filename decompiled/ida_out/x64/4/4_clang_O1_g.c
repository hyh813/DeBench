/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_clang_O1_g
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
int __fastcall cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x1170 */
int __cdecl call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x1180 */
int __fastcall stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x1190 */
int __cdecl call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x11A0 */
int __fastcall fastcall_func(int a, int b, int c)
{
  return c + a + b;
}


/* Function: call_fastcall @ 0x11B0 */
int __cdecl call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x11C0 */
int __cdecl call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x11D0 */
int __fastcall arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x11E0 */
int __cdecl call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x11F0 */
int __fastcall mips_func(int a, int b, int c, int d)
{
  return d + c + a + b;
}


/* Function: call_mips @ 0x1200 */
int __cdecl call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x1210 */
int __fastcall amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x1220 */
int __cdecl call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x1230 */
int __fastcall ms_x64_func(int a, int b, int c, int d, int e)
{
  return e + d + c + a + b;
}


/* Function: call_ms_x64 @ 0x1240 */
int __cdecl call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x1250 */
int __fastcall vectorcall_func(int a, int b, int c, int d)
{
  return d + c + a + b;
}


/* Function: call_vectorcall @ 0x1260 */
int __cdecl call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x1270 */
int __cdecl mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x1280 */
int varargs_func(int count, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int result; // eax
  _DWORD *overflow_arg_area; // rdx
  va_list va; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v9[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-B0h]
  __int64 v11; // [rsp+30h] [rbp-A8h]
  __int64 v12; // [rsp+38h] [rbp-A0h]
  __int64 v13; // [rsp+40h] [rbp-98h]
  __int64 v14; // [rsp+48h] [rbp-90h]

  va_start(va, count);
  v3 = va_arg(va, _QWORD);
  v1 = va_arg(va, _QWORD);
  v2 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  va_end(va);
  v10 = v3;
  v11 = v1;
  v12 = v2;
  v13 = v4;
  v14 = v5;
  va_copy(va, va);
  va[0].gp_offset = 8;
  result = 0;
  if ( count > 0 )
  {
    do
    {
      if ( (unsigned __int64)(int)va[0].gp_offset > 0x28 )
      {
        overflow_arg_area = va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        overflow_arg_area = &v9[va[0].gp_offset];
        va[0].gp_offset += 8;
      }
      result += *overflow_arg_area;
      --count;
    }
    while ( count );
  }
  return result;
}


/* Function: func_no_args @ 0x1340 */
int __cdecl func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1350 */
int __fastcall func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x1370 */
__int64 __fastcall func_mixed_args(int x, char *s, double d, __int64 ll)
{
  int v4; // ebx
  int v5; // eax

  v4 = ll;
  if ( s )
    v5 = strlen(s);
  else
    v5 = 0;
  return (unsigned int)(int)((double)v4 + (double)(x + v5) + d);
}


/* Function: func_struct_byval @ 0x13C0 */
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


/* Function: func_struct_byptr @ 0x13E0 */
int __fastcall func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->x * p->y;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x1400 */
void __cdecl test_calling_conventions()
{
  unsigned int v0; // eax
  __int64 i; // rax
  __int64 v2; // rax
  __int64 v3; // rsi
  _QWORD v4[17]; // [rsp+0h] [rbp-88h]

  puts(s);
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
  v0 = varargs_func(5, 1, 2, 3, 4, 5);
  printf(aCallL206, v0);
  printf(aCallL207, 42);
  printf(aCallL208, 36);
  printf(aCallL209, 117);
  for ( i = 1; i != 17; ++i )
    v4[i] = i;
  v2 = 0;
  v3 = 0;
  do
    v3 += v4[++v2];
  while ( v2 != 16 );
  printf(aCallL210, v3);
  printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x15B0 */
int __fastcall param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x15C0 */
int __cdecl call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x15D0 */
int __fastcall param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x15E0 */
int __cdecl call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x15F0 */
__int64 __fastcall param_array_decay(int *arr, int n)
{
  return 8;
}


/* Function: call_array_decay @ 0x1600 */
int __cdecl call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x1610 */
int __fastcall param_string(const char *str)
{
  return *str + str[1];
}


/* Function: call_string_param @ 0x1620 */
int __cdecl call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x1630 */
int __fastcall param_ptr_array(char **arr, int n)
{
  __int64 v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += *arr[v2++];
  while ( n != v2 );
  return result;
}


/* Function: call_ptr_array @ 0x1660 */
int __cdecl call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0x1670 */
int param_varargs(int count, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int result; // eax
  _DWORD *overflow_arg_area; // rdx
  va_list va; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v9[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-B0h]
  __int64 v11; // [rsp+30h] [rbp-A8h]
  __int64 v12; // [rsp+38h] [rbp-A0h]
  __int64 v13; // [rsp+40h] [rbp-98h]
  __int64 v14; // [rsp+48h] [rbp-90h]

  va_start(va, count);
  v3 = va_arg(va, _QWORD);
  v1 = va_arg(va, _QWORD);
  v2 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  va_end(va);
  v10 = v3;
  v11 = v1;
  v12 = v2;
  v13 = v4;
  v14 = v5;
  va_copy(va, va);
  va[0].gp_offset = 8;
  result = 0;
  if ( count > 0 )
  {
    do
    {
      if ( (unsigned __int64)(int)va[0].gp_offset > 0x28 )
      {
        overflow_arg_area = va[0].overflow_arg_area;
        va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
      }
      else
      {
        overflow_arg_area = &v9[va[0].gp_offset];
        va[0].gp_offset += 8;
      }
      result += *overflow_arg_area;
      --count;
    }
    while ( count );
  }
  return result;
}


/* Function: call_varargs_param @ 0x1730 */
int __cdecl call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1760 */
int __fastcall param_func_ptr(int (*callback)(int), int x)
{
  return ((__int64 (__fastcall *)(_QWORD))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1770 */
int __cdecl call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0x1780 */
int __fastcall param_double_ptr(int **pp, int new_val)
{
  int result; // eax

  result = -1;
  if ( pp )
  {
    if ( *pp )
    {
      **pp = new_val;
      *pp = 0;
      return 1;
    }
  }
  return result;
}


/* Function: call_double_ptr @ 0x17B0 */
int __cdecl call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x17C0 */
int __fastcall param_complex_cast(void *p, int type)
{
  int result; // eax

  if ( type == 1 )
    return *(_DWORD *)p + *((_DWORD *)p + 1);
  result = -1;
  if ( !type )
    return *(_DWORD *)p;
  return result;
}


/* Function: call_complex_cast @ 0x17E0 */
int __cdecl call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x17F0 */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1800 */
int __cdecl call_struct_byval()
{
  __int64 i; // rax
  _DWORD v2[16]; // [rsp+0h] [rbp-40h]

  for ( i = 0; i != 16; ++i )
    v2[i] = i;
  return v2[0] + v2[15];
}


/* Function: param_order_dep @ 0x1830 */
int __fastcall param_order_dep(int a, int b)
{
  return a + b;
}


/* Function: call_order_dep @ 0x1840 */
int __cdecl call_order_dep()
{
  return 3;
}


/* Function: test_parameter_passing @ 0x1850 */
void __cdecl test_parameter_passing()
{
  __int64 v0; // rbx
  int v1; // eax
  _DWORD v2[18]; // [rsp+0h] [rbp-48h]

  puts(asc_236F);
  v0 = 0;
  printf("PARAM-L1-01: %d\n", 15);
  printf("PARAM-L1-02: %d\n", 11);
  printf("PARAM-L2-01: %d\n", 8);
  printf("PARAM-L2-02: %d\n", 173);
  printf("PARAM-L2-03: %d\n", 300);
  v1 = param_varargs(4, 10, 20, 30, 40);
  printf("PARAM-L2-04: %d\n", v1);
  printf("PARAM-L3-01: %d\n", 20);
  printf("PARAM-L3-02: %d\n", 21);
  printf("PARAM-L3-03: %d\n", 305419896);
  do
  {
    v2[v0] = v0;
    ++v0;
  }
  while ( v0 != 16 );
  printf("PARAM-L3-04: %d\n", v2[0] + v2[15]);
  printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x1970 */
int __fastcall ret_basic_type(int x)
{
  return 2 * x;
}


/* Function: call_ret_basic @ 0x1980 */
int __cdecl call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x1990 */
int *__fastcall ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x19A0 */
int __cdecl call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x19B0 */
// local variable allocation has failed, the output may be wrong!
SmallPoint __fastcall ret_small_struct(int x, int y)
{
  return (SmallPoint)((*(_QWORD *)&y << 32) | (unsigned int)x);
}


/* Function: call_ret_small_struct @ 0x19C0 */
int __cdecl call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x19D0 */
LargeData *__fastcall ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  LargeData *result; // rax
  __int64 i; // rdx

  result = retstr;
  for ( i = 0; i != 16; ++i )
    retstr->data[i] = seed + i;
  return result;
}


/* Function: call_ret_large_struct @ 0x1A00 */
int __cdecl call_ret_large_struct()
{
  __int64 i; // rax
  _DWORD v2[16]; // [rsp+0h] [rbp-40h]

  for ( i = 0; i != 16; ++i )
    v2[i] = i + 100;
  return v2[0] + v2[15];
}


/* Function: func_a @ 0x1A30 */
int __fastcall func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x1A40 */
int __fastcall func_b(int x)
{
  return 2 * x;
}


/* Function: ret_func_ptr @ 0x1A50 */
func_ptr_t __fastcall ret_func_ptr(int selector)
{
  func_ptr_t result; // rax

  result = func_b;
  if ( !selector )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1A70 */
int __cdecl call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x1A80 */
void *__fastcall ret_opaque_handle(int type)
{
  void *result; // rax

  result = &ret_opaque_handle_handle2;
  if ( !type )
    return &ret_opaque_handle_handle1;
  return result;
}


/* Function: call_ret_opaque @ 0x1AA0 */
int __cdecl call_ret_opaque()
{
  return ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1AB0 */
int __fastcall ret_complex_expr(int x, int y, int z)
{
  int result; // eax

  result = z + 10;
  if ( x > y )
    return 2 * z;
  return result;
}


/* Function: call_ret_complex_expr @ 0x1AC0 */
int __cdecl call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1AD0 */
int __fastcall ret_multi_branch(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op < 3 )
    return 10 * op + 10;
  return result;
}


/* Function: call_ret_multi_branch @ 0x1AF0 */
int __cdecl call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1B00 */
void __fastcall ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x1B10 */
int __cdecl call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1B20 */
void __cdecl test_return_values()
{
  __int64 v0; // rbx
  _DWORD v1[18]; // [rsp+0h] [rbp-48h]

  puts(asc_2390);
  v0 = 0;
  printf(aRetL101D, 42);
  printf(aRetL102D, 20);
  printf(aRetL103D, 7);
  do
  {
    v1[v0] = v0 + 100;
    ++v0;
  }
  while ( v0 != 16 );
  printf(aRetL104D, (unsigned int)(v1[0] + v1[15]));
  printf(aRetL201D, 10);
  printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
  printf(aRetL301D, 40);
  printf(aRetL302D, 60);
  printf(aRetL303D, 21);
}


/* Function: main @ 0x1C00 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: .term_proc @ 0x1C14 */
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
