/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/4/4_gcc_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103FC */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10408 @ 0x10408 */
void sub_10408()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x10488 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_104C4 + 19164), v4, (char **)&va, 0, 0, a1, &va);
  abort();
}


/* Function: call_weak_fn @ 0x104CC */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x104F0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1051C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10554 */
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


/* Function: frame_dummy @ 0x1057C */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: cdecl_func @ 0x10580 */
int __cdecl cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x105B0 */
int call_cdecl()
{
  return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x105D0 */
int __cdecl stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x10600 */
int call_stdcall()
{
  return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x10620 */
int __cdecl fastcall_func(int a, int b, int c)
{
  return a + b + c;
}


/* Function: call_fastcall @ 0x1065C */
int call_fastcall()
{
  return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x10680 */
int call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1069C */
int __cdecl arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0x106EC */
int call_arm_aapcs()
{
  return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x10724 */
int __cdecl mips_func(int a, int b, int c, int d)
{
  return a + b + c + d;
}


/* Function: call_mips @ 0x1076C */
int call_mips()
{
  return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x10794 */
int __cdecl amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x107EC */
int call_amd64_sysv()
{
  return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1082C */
int __cdecl ms_x64_func(int a, int b, int c, int d, int e)
{
  return a + b + c + d + e;
}


/* Function: call_ms_x64 @ 0x1087C */
int call_ms_x64()
{
  return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x108B4 */
int __cdecl vectorcall_func(int a, int b, int c, int d)
{
  return a + b + c + d;
}


/* Function: call_vectorcall @ 0x108FC */
int call_vectorcall()
{
  return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x10924 */
int mixed_conventions_test()
{
  int sum; // [sp+4h] [bp-8h]
  int suma; // [sp+4h] [bp-8h]

  sum = cdecl_func(1, 2);
  suma = sum + stdcall_func(3, 4);
  return suma + fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x109A0 */
int varargs_func(int count, ...)
{
  int v1; // kr00_4
  va_list args; // [sp+0h] [bp-14h]
  int sum; // [sp+4h] [bp-10h]
  int i; // [sp+8h] [bp-Ch]
  va_list varg_r1; // [sp+1Ch] [bp+8h] BYREF

  va_start(varg_r1, count);
  sum = 0;
  va_copy(args, varg_r1);
  for ( i = 0; i < count; ++i )
  {
    v1 = va_arg(args, _DWORD);
    sum += v1;
  }
  return sum;
}


/* Function: func_no_args @ 0x10A4C */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x10A68 */
int __cdecl func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x10AD0 */
int __cdecl func_mixed_args(int x, char *s, double d, __int64 ll)
{
  size_t v4; // r3

  if ( s )
    v4 = strlen(s);
  else
    v4 = 0;
  return (int)((double)(int)(x + v4) + d + (double)ll);
}


/* Function: func_struct_byval @ 0x10B80 */
int __cdecl func_struct_byval(LargeStruct s)
{
  int i; // [sp+4h] [bp-18h]
  __int64 sum; // [sp+8h] [bp-14h]

  sum = 0;
  for ( i = 0; i <= 15; ++i )
    sum += s.data[i];
  return sum;
}


/* Function: func_struct_byptr @ 0x10C10 */
int __cdecl func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->y * p->x;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x10C58 */
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
  int i; // [sp+70h] [bp-BCh]
  int sum; // [sp+74h] [bp-B8h]
  int no_args; // [sp+78h] [bp-B4h]
  int many; // [sp+7Ch] [bp-B0h]
  char *test_str; // [sp+80h] [bp-ACh]
  int mixed; // [sp+84h] [bp-A8h]
  int struct_val; // [sp+88h] [bp-A4h]
  int struct_ptr; // [sp+8Ch] [bp-A0h]
  SmallStruct s; // [sp+90h] [bp-9Ch] BYREF
  LargeStruct large; // [sp+98h] [bp-94h] BYREF
  LargeStruct v20; // 0:r0.16,16:^0.112 BYREF

  puts(::s);
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
  sum = varargs_func(5, 1, 2, 3, 4, 5);
  printf(aCallL206, sum);
  no_args = func_no_args();
  printf(aCallL207, no_args);
  many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
  printf(aCallL208, many);
  test_str = "test";
  mixed = func_mixed_args(10, "test", 3.14, 100);
  printf(aCallL209, mixed);
  for ( i = 0; i <= 15; ++i )
    large.data[i] = i + 1;
  memcpy(&v20.data[2], &large.data[2], 0x70u);
  v20.data[0] = large.data[0];
  v20.data[1] = large.data[1];
  struct_val = func_struct_byval(v20);
  printf(aCallL210, struct_val);
  s.x = 5;
  s.y = 10;
  struct_ptr = func_struct_byptr(&s);
  printf(aCallL211, struct_ptr);
}


/* Function: param_by_value_int @ 0x10F34 */
int __cdecl param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x10F64 */
int call_by_value_int()
{
  return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x10F9C */
int __cdecl param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x10FEC */
int call_by_value_ptr()
{
  int val; // [sp+0h] [bp-14h] BYREF
  int *ptr; // [sp+4h] [bp-10h]
  int result; // [sp+8h] [bp-Ch]

  val = 5;
  ptr = &val;
  result = param_by_value_ptr(&val);
  return val + result;
}


/* Function: param_array_decay @ 0x1105C */
int __cdecl param_array_decay(int *arr, int n)
{
  return 4;
}


/* Function: call_array_decay @ 0x11084 */
int call_array_decay()
{
  int array[10]; // [sp+4h] [bp-30h] BYREF

  memset(array, 0, sizeof(array));
  return param_array_decay(array, 10);
}


/* Function: param_string @ 0x110F4 */
int __cdecl param_string(const char *str)
{
  return *(unsigned __int8 *)str + *((unsigned __int8 *)str + 1);
}


/* Function: call_string_param @ 0x11130 */
int call_string_param()
{
  return param_string("Hello");
}


/* Function: param_ptr_array @ 0x11150 */
int __cdecl param_ptr_array(char **arr, int n)
{
  int sum; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += (unsigned __int8)*arr[i];
  return sum;
}


/* Function: call_ptr_array @ 0x111D0 */
int call_ptr_array()
{
  char *strs[3]; // [sp+0h] [bp-14h] BYREF

  strs[0] = "abc";
  strs[1] = "def";
  strs[2] = "ghi";
  return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x11240 */
int param_varargs(int count, ...)
{
  int v1; // kr00_4
  va_list args; // [sp+0h] [bp-14h]
  int sum; // [sp+4h] [bp-10h]
  int i; // [sp+8h] [bp-Ch]
  va_list varg_r1; // [sp+1Ch] [bp+8h] BYREF

  va_start(varg_r1, count);
  va_copy(args, varg_r1);
  sum = 0;
  for ( i = 0; i < count; ++i )
  {
    v1 = va_arg(args, _DWORD);
    sum += v1;
  }
  return sum;
}


/* Function: call_varargs_param @ 0x112EC */
int call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x11324 */
int __cdecl param_func_ptr(int (*callback)(int), int x)
{
  return callback(x) + 10;
}


/* Function: callback_func @ 0x11358 */
int __cdecl callback_func(int x)
{
  return 2 * x;
}


/* Function: call_func_ptr_param @ 0x11380 */
int call_func_ptr_param()
{
  return param_func_ptr((int (*)(int))callback_func, 5);
}


/* Function: param_double_ptr @ 0x113A4 */
int __cdecl param_double_ptr(int **pp, int new_val)
{
  if ( !pp || !*pp )
    return -1;
  **pp = new_val;
  *pp = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x1140C */
int call_double_ptr()
{
  int val; // [sp+0h] [bp-14h] BYREF
  int *ptr; // [sp+4h] [bp-10h] BYREF

  val = 10;
  ptr = &val;
  param_double_ptr(&ptr, 20);
  return (ptr == 0) + val;
}


/* Function: param_complex_cast @ 0x11498 */
int __cdecl param_complex_cast(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(_DWORD *)p + *((_DWORD *)p + 1);
  return -1;
}


/* Function: call_complex_cast @ 0x1151C */
int call_complex_cast()
{
  int val; // [sp+0h] [bp-14h] BYREF
  TestIntPair pair; // [sp+4h] [bp-10h] BYREF

  val = 305419896;
  pair.a = 100;
  pair.b = 200;
  param_complex_cast(&pair, 1);
  return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x115A8 */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x115DC */
int call_struct_byval()
{
  int i; // [sp+30h] [bp-4Ch]
  BigStruct s; // [sp+34h] [bp-48h]

  for ( i = 0; i <= 15; ++i )
    s.data[i] = i;
  return param_struct_byval(s);
}


/* Function: param_order_dep @ 0x11690 */
int __cdecl param_order_dep(int a, int b)
{
  return a + b;
}


/* Function: call_order_dep @ 0x116C0 */
int call_order_dep()
{
  return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x11708 */
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

  puts(asc_125F4);
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


/* Function: ret_basic_type @ 0x1182C */
int __cdecl ret_basic_type(int x)
{
  return 2 * x;
}


/* Function: call_ret_basic @ 0x11854 */
int call_ret_basic()
{
  return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x11884 */
int *__cdecl ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x118AC */
int call_ret_pointer()
{
  int arr[3]; // [sp+8h] [bp-14h] BYREF

  arr[0] = *(_DWORD *)"\n";
  arr[1] = 20;
  arr[2] = 30;
  return *ret_pointer(arr);
}


/* Function: ret_small_struct @ 0x11920 */
SmallPoint *__cdecl ret_small_struct(SmallPoint *__return_ptr retstr, int x, int y)
{
  retstr->x = x;
  retstr->y = y;
  return retstr;
}


/* Function: call_ret_small_struct @ 0x1196C */
int call_ret_small_struct()
{
  SmallPoint p; // [sp+4h] [bp-10h] BYREF

  ret_small_struct(&p, 3, 4);
  return p.x + p.y;
}


/* Function: ret_large_struct @ 0x119D4 */
LargeData *__cdecl ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int i; // [sp+8h] [bp-4Ch]
  LargeData d; // [sp+Ch] [bp-48h]

  for ( i = 0; i <= 15; ++i )
    d.data[i] = seed + i;
  v2 = d.data[1];
  v3 = d.data[2];
  v4 = d.data[3];
  retstr->data[0] = d.data[0];
  retstr->data[1] = v2;
  retstr->data[2] = v3;
  retstr->data[3] = v4;
  v5 = d.data[5];
  v6 = d.data[6];
  v7 = d.data[7];
  retstr->data[4] = d.data[4];
  retstr->data[5] = v5;
  retstr->data[6] = v6;
  retstr->data[7] = v7;
  v8 = d.data[9];
  v9 = d.data[10];
  v10 = d.data[11];
  retstr->data[8] = d.data[8];
  retstr->data[9] = v8;
  retstr->data[10] = v9;
  retstr->data[11] = v10;
  v11 = d.data[13];
  v12 = d.data[14];
  v13 = d.data[15];
  retstr->data[12] = d.data[12];
  retstr->data[13] = v11;
  retstr->data[14] = v12;
  retstr->data[15] = v13;
  return retstr;
}


/* Function: call_ret_large_struct @ 0x11A94 */
int call_ret_large_struct()
{
  LargeData d; // [sp+4h] [bp-48h] BYREF

  ret_large_struct(&d, 100);
  return d.data[0] + d.data[15];
}


/* Function: func_a @ 0x11AF8 */
int __cdecl func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x11B20 */
int __cdecl func_b(int x)
{
  return 2 * x;
}


/* Function: ret_func_ptr @ 0x11B48 */
func_ptr_t __cdecl ret_func_ptr(int selector)
{
  if ( selector )
    return (func_ptr_t)func_b;
  else
    return (func_ptr_t)func_a;
}


/* Function: call_ret_func_ptr @ 0x11B88 */
int call_ret_func_ptr()
{
  func_ptr_t f; // [sp+4h] [bp-8h]

  f = ret_func_ptr(1);
  return f(5);
}


/* Function: ret_opaque_handle @ 0x11BBC */
void *__cdecl ret_opaque_handle(int type)
{
  if ( type )
    return &handle2_0;
  else
    return &handle1_1;
}


/* Function: call_ret_opaque @ 0x11BFC */
int call_ret_opaque()
{
  return *(_DWORD *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x11C28 */
int __cdecl ret_complex_expr(int x, int y, int z)
{
  if ( x <= y )
    return z + 10;
  else
    return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x11C74 */
int call_ret_complex_expr()
{
  int r1; // [sp+0h] [bp-Ch]

  r1 = ret_complex_expr(5, 3, 10);
  return r1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x11CC0 */
int __cdecl ret_multi_branch(int op)
{
  if ( op == 2 )
    return 30;
  if ( op > 2 )
    return -1;
  if ( !op )
    return 10;
  if ( op != 1 )
    return -1;
  return 20;
}


/* Function: call_ret_multi_branch @ 0x11D30 */
int call_ret_multi_branch()
{
  int sum; // [sp+4h] [bp-8h]
  int suma; // [sp+4h] [bp-8h]

  sum = ret_multi_branch(0);
  suma = sum + ret_multi_branch(1);
  return suma + ret_multi_branch(2);
}


/* Function: ret_void @ 0x11D9C */
void __cdecl ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x11DD8 */
int call_ret_void()
{
  int result; // [sp+0h] [bp-Ch] BYREF

  ret_void(7, &result);
  return result;
}


/* Function: test_return_values @ 0x11E34 */
void test_return_values()
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

  puts(asc_12700);
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


/* Function: main @ 0x11F28 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: __aeabi_drsub @ 0x11F48 */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0x11F50 */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0x11F54 */
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


/* Function: __floatunsidf @ 0x12200 */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x1209C);
  return result;
}


/* Function: __floatsidf @ 0x12224 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x1209C);
  return result;
}


/* Function: __extendsfdf2 @ 0x1224C */
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
      JUMPOUT(0x1209C);
  }
  return result;
}


/* Function: __floatundidf @ 0x12294 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x122C4);
  return a1;
}


/* Function: __floatdidf @ 0x122A8 */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x12040);
  return a1;
}


/* Function: __fixdfsi @ 0x12308 */
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


/* Function: .term_proc @ 0x12364 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x23058 */

/* FAILED to decompile: __imp_strlen @ 0x2305C */

/* FAILED to decompile: __imp_memset @ 0x23060 */

/* FAILED to decompile: __imp_printf @ 0x23064 */

/* FAILED to decompile: __imp_abort @ 0x23068 */

/* FAILED to decompile: __imp___libc_start_main @ 0x2306C */

/* FAILED to decompile: __imp_memcpy @ 0x23070 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x23074 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23078 */

/* Total functions decompiled: 89, failed: 9 */
