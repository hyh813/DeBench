/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/4/4_clang_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x400 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_40C @ 0x40C */
void sub_40C()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x474 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_4B0 + 19169), v4, (char **)&va, 0, 0, a1, &va);
  abort();
}


/* Function: call_weak_fn @ 0x4B8 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x4DC */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x520 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x570 */
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


/* Function: frame_dummy @ 0x5D8 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: cdecl_func @ 0x5DC */
int __fastcall cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x5FC */
int call_cdecl()
{
  return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x618 */
int __fastcall stdcall_func(int a, int b)
{
  return a * b;
}


/* Function: call_stdcall @ 0x638 */
int call_stdcall()
{
  return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x654 */
int __fastcall fastcall_func(int a, int b, int c)
{
  return a + b + c;
}


/* Function: call_fastcall @ 0x680 */
int call_fastcall()
{
  return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x6A0 */
int call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x6A8 */
int __fastcall arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0x6EC */
int call_arm_aapcs()
{
  return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x724 */
int __fastcall mips_func(int a, int b, int c, int d)
{
  return a + b + c + d;
}


/* Function: call_mips @ 0x75C */
int call_mips()
{
  return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x780 */
int __fastcall amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x7D0 */
int call_amd64_sysv()
{
  return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x810 */
int __fastcall ms_x64_func(int a, int b, int c, int d, int e)
{
  return a + b + c + d + e;
}


/* Function: call_ms_x64 @ 0x854 */
int call_ms_x64()
{
  return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x88C */
int __fastcall vectorcall_func(int a, int b, int c, int d)
{
  return a + b + c + d;
}


/* Function: call_vectorcall @ 0x8C4 */
int call_vectorcall()
{
  return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x8E8 */
int mixed_conventions_test()
{
  int v1; // [sp+4h] [bp-4h]
  int v2; // [sp+4h] [bp-4h]

  v1 = cdecl_func(1, 2);
  v2 = v1 + stdcall_func(3, 4);
  return v2 + fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x964 */
int varargs_func(int count, ...)
{
  int v1; // kr00_4
  int i; // [sp+0h] [bp-1Ch]
  int v4; // [sp+4h] [bp-18h]
  va_list v5; // [sp+8h] [bp-14h]
  va_list va; // [sp+10h] [bp-Ch] BYREF

  va_start(va, count);
  v4 = 0;
  va_copy(v5, va);
  for ( i = 0; i < count; ++i )
  {
    v1 = va_arg(v5, _DWORD);
    v4 += v1;
  }
  return v4;
}


/* Function: func_no_args @ 0x9E0 */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x9E8 */
int __fastcall func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0xA50 */
int __fastcall func_mixed_args(int x, char *s, double d, __int64 ll)
{
  size_t v5; // [sp+8h] [bp-28h]

  if ( s )
    v5 = strlen(s);
  else
    v5 = 0;
  return (int)((double)(int)(x + v5) + d + (double)ll);
}


/* Function: func_struct_byval @ 0xB0C */
int __fastcall func_struct_byval(LargeStruct s)
{
  int i; // [sp+4h] [bp-1Ch]
  __int64 v3; // [sp+8h] [bp-18h]

  v3 = 0;
  for ( i = 0; i <= 15; ++i )
    v3 += s.data[i];
  return v3;
}


/* Function: func_struct_byptr @ 0xB94 */
int __fastcall func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->x * p->y;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0xBDC */
void test_calling_conventions()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  __int64 *v11; // r1
  __int64 *v12; // r0
  int *v13; // r2
  __int64 *v14; // r1
  int v15; // r3
  char *v16; // [sp+70h] [bp-E0h]
  char *v17; // [sp+74h] [bp-DCh]
  int *v18; // [sp+78h] [bp-D8h]
  __int64 *v19; // [sp+7Ch] [bp-D4h]
  __int64 *v20; // [sp+80h] [bp-D0h]
  int v21; // [sp+84h] [bp-CCh]
  int b; // [sp+88h] [bp-C8h]
  int c; // [sp+8Ch] [bp-C4h]
  int d; // [sp+90h] [bp-C0h]
  int a; // [sp+94h] [bp-BCh]
  int v26; // [sp+98h] [bp-B8h]
  int v27; // [sp+9Ch] [bp-B4h]
  SmallStruct p; // [sp+A0h] [bp-B0h] BYREF
  int v29; // [sp+A8h] [bp-A8h]
  int i; // [sp+ACh] [bp-A4h]
  LargeStruct large; // [sp+B0h] [bp-A0h] BYREF
  int mixed; // [sp+134h] [bp-1Ch]
  char *test_str; // [sp+138h] [bp-18h]
  int many; // [sp+13Ch] [bp-14h]
  int no_args; // [sp+140h] [bp-10h]
  int sum; // [sp+144h] [bp-Ch]
  LargeStruct v37; // 0:r0.16,16:^0.112 BYREF

  printf(asc_2180);
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
  v21 = 5;
  d = 4;
  a = 1;
  b = 2;
  c = 3;
  sum = varargs_func(5);
  printf(aCallL206, sum);
  no_args = func_no_args();
  printf(aCallL207, no_args);
  many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
  printf(aCallL208, many);
  test_str = "test";
  v26 = 0;
  mixed = func_mixed_args(10, "test", 3.14, 100);
  printf(aCallL209, mixed);
  for ( i = 0; i <= 15; ++i )
  {
    v10 = (i + 1) >> 31;
    v11 = &large.data[i];
    *(_DWORD *)v11 = i + 1;
    *((_DWORD *)v11 + 1) = v10;
  }
  v18 = &dword_70;
  v19 = &large.data[2];
  v20 = &v37.data[2];
  do
  {
    v12 = v20;
    v13 = v18;
    v14 = (__int64 *)((char *)v19 + 4);
    v15 = *(_DWORD *)v19;
    v16 = (char *)v19 + 4;
    *(_DWORD *)v20 = v15;
    v17 = (char *)v12 + 4;
    v18 = v13 - 1;
    v19 = v14;
    v20 = (__int64 *)((char *)v12 + 4);
  }
  while ( v13 != (int *)&byte_4 );
  v37.data[0] = large.data[0];
  v37.data[1] = large.data[1];
  v29 = func_struct_byval(v37);
  printf(aCallL210, v29);
  p.y = 10;
  p.x = 5;
  v27 = func_struct_byptr(&p);
  printf(aCallL211, v27);
}


/* Function: param_by_value_int @ 0xF18 */
int __fastcall param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0xF38 */
int call_by_value_int()
{
  return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0xF70 */
int __fastcall param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0xFA4 */
int call_by_value_ptr()
{
  int v0; // r1
  int val; // [sp+Ch] [bp-4h] BYREF

  val = 5;
  v0 = param_by_value_ptr(&val);
  return val + v0;
}


/* Function: param_array_decay @ 0xFE4 */
int __fastcall param_array_decay(int *arr, int n)
{
  return 4;
}


/* Function: call_array_decay @ 0xFFC */
int call_array_decay()
{
  int s[10]; // [sp+8h] [bp-28h] BYREF

  memset(s, 0, sizeof(s));
  return param_array_decay(s, 10);
}


/* Function: param_string @ 0x1034 */
int __fastcall param_string(const char *str)
{
  return *(unsigned __int8 *)str + *((unsigned __int8 *)str + 1);
}


/* Function: call_string_param @ 0x1054 */
int call_string_param()
{
  return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1074 */
int __fastcall param_ptr_array(char **arr, int n)
{
  int i; // [sp+0h] [bp-10h]
  int v4; // [sp+4h] [bp-Ch]

  v4 = 0;
  for ( i = 0; i < n; ++i )
    v4 += (unsigned __int8)*arr[i];
  return v4;
}


/* Function: call_ptr_array @ 0x10E0 */
int call_ptr_array()
{
  char *arr[3]; // [sp+4h] [bp-Ch] BYREF

  arr[0] = "abc";
  arr[2] = "ghi";
  arr[1] = "def";
  return param_ptr_array(arr, 3);
}


/* Function: param_varargs @ 0x1130 */
int param_varargs(int count, ...)
{
  int v1; // kr00_4
  int i; // [sp+0h] [bp-1Ch]
  int v4; // [sp+4h] [bp-18h]
  va_list v5; // [sp+8h] [bp-14h]
  va_list va; // [sp+10h] [bp-Ch] BYREF

  va_start(va, count);
  va_copy(v5, va);
  v4 = 0;
  for ( i = 0; i < count; ++i )
  {
    v1 = va_arg(v5, _DWORD);
    v4 += v1;
  }
  return v4;
}


/* Function: call_varargs_param @ 0x11AC */
int call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x11E4 */
int __fastcall param_func_ptr(int (*callback)(int), int x)
{
  return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x1218 */
int call_func_ptr_param()
{
  return param_func_ptr(callback_func, 5);
}


/* Function: callback_func @ 0x123C */
int __fastcall callback_func(int x)
{
  return 2 * x;
}


/* Function: param_double_ptr @ 0x1254 */
int __fastcall param_double_ptr(int **pp, int new_val)
{
  if ( !pp || !*pp )
    return -1;
  **pp = new_val;
  *pp = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x12C4 */
int call_double_ptr()
{
  int result; // r0
  int *pp; // [sp+8h] [bp-8h] BYREF
  int val; // [sp+Ch] [bp-4h] BYREF

  val = 10;
  pp = &val;
  param_double_ptr(&pp, 20);
  result = val;
  if ( !pp )
    return val + 1;
  return result;
}


/* Function: param_complex_cast @ 0x1310 */
int __fastcall param_complex_cast(_DWORD *p, int type)
{
  if ( !type )
    return *p;
  if ( type == 1 )
    return *p + p[1];
  return -1;
}


/* Function: call_complex_cast @ 0x13A0 */
int call_complex_cast()
{
  _DWORD p[2]; // [sp+4h] [bp-Ch] BYREF
  int val; // [sp+Ch] [bp-4h] BYREF

  val = 305419896;
  p[1] = &dword_C8;
  p[0] = &dword_64;
  param_complex_cast(p, 1);
  return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x1400 */
// local variable allocation has failed, the output may be wrong!
int __fastcall param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x14B8 */
int call_struct_byval()
{
  int s_4; // [sp+40h] [bp-60h]
  BigStruct s_8; // [sp+44h] [bp-5Ch]

  for ( s_4 = 0; s_4 <= 15; ++s_4 )
    s_8.data[s_4] = s_4;
  return param_struct_byval(s_8);
}


/* Function: param_order_dep @ 0x15A4 */
int __fastcall param_order_dep(int a, int b)
{
  return a + b;
}


/* Function: call_order_dep @ 0x15C4 */
int call_order_dep()
{
  return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x1600 */
void test_parameter_passing()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  printf(asc_234B);
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
  printf("PARAM-L3-03: %d\n", v8);
  v9 = call_struct_byval();
  printf("PARAM-L3-04: %d\n", v9);
  v10 = call_order_dep();
  printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x1728 */
int __fastcall ret_basic_type(int x)
{
  return 2 * x;
}


/* Function: call_ret_basic @ 0x1740 */
int call_ret_basic()
{
  return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x1770 */
int *__fastcall ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x1788 */
int call_ret_pointer()
{
  int p[3]; // [sp+4h] [bp-Ch] BYREF

  p[0] = 10;
  p[2] = 30;
  p[1] = 20;
  return *ret_pointer(p);
}


/* Function: ret_small_struct @ 0x17E0 */
SmallPoint *__fastcall ret_small_struct(SmallPoint *__return_ptr retstr, int x, SmallPoint *y)
{
  SmallPoint *result; // r0

  retstr->x = x;
  result = y;
  retstr->y = (int)y;
  return result;
}


/* Function: call_ret_small_struct @ 0x1810 */
int call_ret_small_struct()
{
  SmallPoint v1; // [sp+0h] [bp-8h] BYREF

  ret_small_struct(&v1, 3, (SmallPoint *)&byte_4);
  return v1.x + v1.y;
}


/* Function: ret_large_struct @ 0x1844 */
LargeData *__fastcall ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  LargeData *result; // r0
  int i; // [sp+4h] [bp-8h]

  for ( i = 0; ; ++i )
  {
    result = (LargeData *)i;
    if ( i > 15 )
      break;
    retstr->data[i] = seed + i;
  }
  return result;
}


/* Function: call_ret_large_struct @ 0x189C */
int call_ret_large_struct()
{
  LargeData v1; // [sp+0h] [bp-40h] BYREF

  ret_large_struct(&v1, 100);
  return v1.data[0] + v1.data[15];
}


/* Function: func_a @ 0x18CC */
int __fastcall func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x18E4 */
int __fastcall func_b(int x)
{
  return 2 * x;
}


/* Function: ret_func_ptr @ 0x18FC */
func_ptr_t __fastcall ret_func_ptr(int selector)
{
  func_ptr_t result; // r0

  result = func_a;
  if ( selector )
    return func_b;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1930 */
int call_ret_func_ptr()
{
  func_ptr_t v1; // [sp+4h] [bp-4h]

  v1 = ret_func_ptr(1);
  return v1(5);
}


/* Function: ret_opaque_handle @ 0x1964 */
int **__fastcall ret_opaque_handle(int type)
{
  int **result; // r0

  result = (int **)&ret_opaque_handle_handle2;
  if ( !type )
    return ret_opaque_handle_handle1;
  return result;
}


/* Function: call_ret_opaque @ 0x1998 */
int *call_ret_opaque()
{
  return *ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x19C4 */
int __fastcall ret_complex_expr(int x, int y, int z)
{
  if ( x <= y )
    return z + 10;
  else
    return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x1A14 */
int call_ret_complex_expr()
{
  int r1; // [sp+14h] [bp-4h]

  r1 = ret_complex_expr(5, 3, 10);
  return r1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x1A70 */
int __fastcall ret_multi_branch(int op)
{
  switch ( op )
  {
    case 0:
      return 10;
    case 1:
      return 20;
    case 2:
      return 30;
  }
  return -1;
}


/* Function: call_ret_multi_branch @ 0x1AE8 */
int call_ret_multi_branch()
{
  int v1; // [sp+4h] [bp-4h]
  int v2; // [sp+4h] [bp-4h]

  v1 = ret_multi_branch(0);
  v2 = v1 + ret_multi_branch(1);
  return v2 + ret_multi_branch(2);
}


/* Function: ret_void @ 0x1B50 */
void __fastcall ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x1B74 */
int call_ret_void()
{
  int out; // [sp+4h] [bp-4h] BYREF

  ret_void(7, &out);
  return out;
}


/* Function: test_return_values @ 0x1B9C */
void test_return_values()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  printf(asc_2428);
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
  printf(aRetL303D, v8);
}


/* Function: main @ 0x1C94 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: __aeabi_drsub @ 0x1CC8 */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0x1CD0 */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0x1CD4 */
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


/* Function: __floatunsidf @ 0x1F80 */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x1E1C);
  return result;
}


/* Function: __floatsidf @ 0x1FA4 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x1E1C);
  return result;
}


/* Function: __extendsfdf2 @ 0x1FCC */
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
      JUMPOUT(0x1E1C);
  }
  return result;
}


/* Function: __floatundidf @ 0x2014 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x2044);
  return a1;
}


/* Function: __floatdidf @ 0x2028 */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x1DC0);
  return a1;
}


/* Function: __fixdfsi @ 0x2088 */
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


/* Function: .term_proc @ 0x20E4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x1308C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13090 */

/* FAILED to decompile: __imp_printf @ 0x13094 */

/* FAILED to decompile: __imp_strlen @ 0x13098 */

/* FAILED to decompile: __imp_memset @ 0x1309C */

/* FAILED to decompile: __imp_abort @ 0x130A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x130A8 */

/* Total functions decompiled: 89, failed: 7 */
