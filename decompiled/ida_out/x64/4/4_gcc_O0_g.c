/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/4/4_gcc_O0_g
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
int __cdecl cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x11C1 */
int __cdecl call_cdecl()
{
  return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x11DA */
int __cdecl stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x11F1 */
int __cdecl call_stdcall()
{
  return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x120A */
int __cdecl fastcall_func(int a, int b, int c)
{
  return b + a + c;
}


/* Function: call_fastcall @ 0x122A */
int __cdecl call_fastcall()
{
  return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1248 */
int __cdecl call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1257 */
int __cdecl arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1288 */
int __cdecl call_arm_aapcs()
{
  return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x12B1 */
int __cdecl mips_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_mips @ 0x12D9 */
int __cdecl call_mips()
{
  return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x12FC */
int __cdecl amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1336 */
int __cdecl call_amd64_sysv()
{
  return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1365 */
int __cdecl ms_x64_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_ms_x64 @ 0x1396 */
int __cdecl call_ms_x64()
{
  return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x13BF */
int __cdecl vectorcall_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_vectorcall @ 0x13E7 */
int __cdecl call_vectorcall()
{
  return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x140A */
int __cdecl mixed_conventions_test()
{
  int sum; // [rsp+Ch] [rbp-4h]
  int suma; // [rsp+Ch] [rbp-4h]

  sum = cdecl_func(1, 2);
  suma = stdcall_func(3, 4) + sum;
  return fastcall_func(5, 6, 7) + suma;
}


/* Function: varargs_func @ 0x145D */
int varargs_func(int count, ...)
{
  __int64 *v1; // rax
  __int64 v2; // kr00_8
  int sum; // [rsp+18h] [rbp-D8h]
  int i; // [rsp+1Ch] [rbp-D4h]
  va_list args; // [rsp+20h] [rbp-D0h] BYREF

  va_start(args, count);
  sum = 0;
  for ( i = 0; i < count; ++i )
  {
    if ( args[0].gp_offset > 0x2F )
    {
      v2 = va_arg(args, _QWORD);
      v1 = &v2;
    }
    else
    {
      v1 = (__int64 *)((char *)args[0].reg_save_area + args[0].gp_offset);
      args[0].gp_offset += 8;
    }
    sum += *(_DWORD *)v1;
  }
  return sum;
}


/* Function: func_no_args @ 0x158A */
int __cdecl func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1599 */
int __cdecl func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return g + f + e + d + c + b + a + h;
}


/* Function: func_mixed_args @ 0x15DD */
int __cdecl func_mixed_args(int x, char *s, double d, __int64 ll)
{
  int v4; // eax
  int lla; // [rsp+0h] [rbp-30h]

  lla = ll;
  if ( s )
    v4 = strlen(s);
  else
    v4 = 0;
  return (int)((double)lla + (double)(x + v4) + d);
}


/* Function: func_struct_byval @ 0x1643 */
int __cdecl func_struct_byval(LargeStruct s)
{
  int i; // [rsp+0h] [rbp-Ch]
  __int64 sum; // [rsp+4h] [rbp-8h]

  sum = 0;
  for ( i = 0; i <= 15; ++i )
    sum += s.data[i];
  return sum;
}


/* Function: func_struct_byptr @ 0x167A */
int __cdecl func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->x * p->y;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x16A6 */
void __cdecl test_calling_conventions()
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
  int i; // [rsp+4h] [rbp-BCh]
  unsigned int sum; // [rsp+8h] [rbp-B8h]
  unsigned int no_args; // [rsp+Ch] [rbp-B4h]
  unsigned int many; // [rsp+10h] [rbp-B0h]
  unsigned int mixed; // [rsp+14h] [rbp-ACh]
  unsigned int struct_val; // [rsp+18h] [rbp-A8h]
  unsigned int struct_ptr; // [rsp+1Ch] [rbp-A4h]
  SmallStruct s; // [rsp+28h] [rbp-98h] BYREF
  LargeStruct large; // [rsp+30h] [rbp-90h]
  unsigned __int64 v19; // [rsp+B8h] [rbp-8h]

  v19 = __readfsqword(0x28u);
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
  mixed = func_mixed_args(10, "test", 3.14, 100);
  printf(aCallL209, mixed);
  for ( i = 0; i <= 15; ++i )
    large.data[i] = i + 1;
  struct_val = func_struct_byval(large);
  printf(aCallL210, struct_val);
  s.x = 5;
  s.y = 10;
  struct_ptr = func_struct_byptr(&s);
  printf(aCallL211, struct_ptr);
}


/* Function: param_by_value_int @ 0x1A1F */
int __cdecl param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x1A32 */
int __cdecl call_by_value_int()
{
  return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x1A5C */
int __cdecl param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x1A8C */
int __cdecl call_by_value_ptr()
{
  int val; // [rsp+8h] [rbp-18h] BYREF
  int result; // [rsp+Ch] [rbp-14h]
  int *ptr; // [rsp+10h] [rbp-10h]
  unsigned __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  val = 5;
  ptr = &val;
  result = param_by_value_ptr(&val);
  return val + result;
}


/* Function: param_array_decay @ 0x1AE3 */
int __cdecl param_array_decay(int *arr, int n)
{
  return 8;
}


/* Function: call_array_decay @ 0x1AF9 */
int __cdecl call_array_decay()
{
  int array[10]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v2; // [rsp+28h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  memset(array, 0, sizeof(array));
  return param_array_decay(array, 10);
}


/* Function: param_string @ 0x1B63 */
int __cdecl param_string(const char *str)
{
  return *str + str[1];
}


/* Function: call_string_param @ 0x1B8B */
int __cdecl call_string_param()
{
  return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1BA4 */
int __cdecl param_ptr_array(char **arr, int n)
{
  int sum; // [rsp+14h] [rbp-8h]
  int i; // [rsp+18h] [rbp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += *arr[i];
  return sum;
}


/* Function: call_ptr_array @ 0x1BF4 */
int __cdecl call_ptr_array()
{
  char *strs[3]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  strs[0] = "abc";
  strs[1] = "def";
  strs[2] = "ghi";
  return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x1C57 */
int param_varargs(int count, ...)
{
  __int64 *v1; // rax
  __int64 v2; // kr00_8
  int sum; // [rsp+18h] [rbp-D8h]
  int i; // [rsp+1Ch] [rbp-D4h]
  va_list args; // [rsp+20h] [rbp-D0h] BYREF

  va_start(args, count);
  sum = 0;
  for ( i = 0; i < count; ++i )
  {
    if ( args[0].gp_offset > 0x2F )
    {
      v2 = va_arg(args, _QWORD);
      v1 = &v2;
    }
    else
    {
      v1 = (__int64 *)((char *)args[0].reg_save_area + args[0].gp_offset);
      args[0].gp_offset += 8;
    }
    sum += *(_DWORD *)v1;
  }
  return sum;
}


/* Function: call_varargs_param @ 0x1D84 */
int __cdecl call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1DB2 */
int __cdecl param_func_ptr(int (*callback)(int), int x)
{
  return ((__int64 (__fastcall *)(_QWORD))callback)((unsigned int)x) + 10;
}


/* Function: callback_func @ 0x1DD5 */
int __cdecl callback_func(int x)
{
  return 2 * x;
}


/* Function: call_func_ptr_param @ 0x1DE7 */
int __cdecl call_func_ptr_param()
{
  return param_func_ptr((int (*)(int))callback_func, 5);
}


/* Function: param_double_ptr @ 0x1E05 */
int __cdecl param_double_ptr(int **pp, int new_val)
{
  if ( !pp || !*pp )
    return -1;
  **pp = new_val;
  *pp = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x1E4C */
int __cdecl call_double_ptr()
{
  int val; // [rsp+8h] [rbp-18h] BYREF
  int *ptr[2]; // [rsp+10h] [rbp-10h] BYREF

  ptr[1] = (int *)__readfsqword(0x28u);
  val = 10;
  ptr[0] = &val;
  param_double_ptr(ptr, 20);
  return (ptr[0] == 0) + val;
}


/* Function: param_complex_cast @ 0x1EB2 */
int __cdecl param_complex_cast(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(_DWORD *)p + *((_DWORD *)p + 1);
  return -1;
}


/* Function: call_complex_cast @ 0x1F0D */
int __cdecl call_complex_cast()
{
  int val; // [rsp+Ch] [rbp-14h] BYREF
  TestIntPair pair; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  val = 305419896;
  pair.a = 100;
  pair.b = 200;
  param_complex_cast(&pair, 1);
  return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x1F75 */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1F87 */
int __cdecl call_struct_byval()
{
  int i; // [rsp+Ch] [rbp-54h]
  BigStruct s; // [rsp+10h] [rbp-50h]
  unsigned __int64 v3; // [rsp+58h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i <= 15; ++i )
    s.data[i] = i;
  return param_struct_byval(s);
}


/* Function: param_order_dep @ 0x1FF8 */
int __cdecl param_order_dep(int a, int b)
{
  return a + b;
}


/* Function: call_order_dep @ 0x2010 */
int __cdecl call_order_dep()
{
  return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x203C */
void __cdecl test_parameter_passing()
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
  int v10; // eax

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
  printf("PARAM-L3-03: %d\n", v8);
  v9 = call_struct_byval();
  printf("PARAM-L3-04: %d\n", v9);
  v10 = call_order_dep();
  printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x21B6 */
int __cdecl ret_basic_type(int x)
{
  return 2 * x;
}


/* Function: call_ret_basic @ 0x21C8 */
int __cdecl call_ret_basic()
{
  return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x21ED */
int *__cdecl ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x2203 */
int __cdecl call_ret_pointer()
{
  int arr[3]; // [rsp+Ch] [rbp-14h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  return *ret_pointer(arr);
}


/* Function: ret_small_struct @ 0x225F */
SmallPoint __cdecl ret_small_struct(int x, int y)
{
  return (SmallPoint)__PAIR64__(y, x);
}


/* Function: call_ret_small_struct @ 0x227F */
int __cdecl call_ret_small_struct()
{
  SmallPoint p; // [rsp+8h] [rbp-8h]

  p = ret_small_struct(3, 4);
  return p.x + p.y;
}


/* Function: ret_large_struct @ 0x22A8 */
LargeData *__cdecl ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  int i; // [rsp+1Ch] [rbp-64h]
  LargeData d; // [rsp+20h] [rbp-60h]
  unsigned __int64 v9; // [rsp+68h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  for ( i = 0; i <= 15; ++i )
    d.data[i] = i + seed;
  v2 = *(_QWORD *)&d.data[2];
  *(_QWORD *)retstr->data = *(_QWORD *)d.data;
  *(_QWORD *)&retstr->data[2] = v2;
  v3 = *(_QWORD *)&d.data[6];
  *(_QWORD *)&retstr->data[4] = *(_QWORD *)&d.data[4];
  *(_QWORD *)&retstr->data[6] = v3;
  v4 = *(_QWORD *)&d.data[10];
  *(_QWORD *)&retstr->data[8] = *(_QWORD *)&d.data[8];
  *(_QWORD *)&retstr->data[10] = v4;
  v5 = *(_QWORD *)&d.data[14];
  *(_QWORD *)&retstr->data[12] = *(_QWORD *)&d.data[12];
  *(_QWORD *)&retstr->data[14] = v5;
  return retstr;
}


/* Function: call_ret_large_struct @ 0x2350 */
int __cdecl call_ret_large_struct()
{
  LargeData d; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v2; // [rsp+48h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  ret_large_struct(&d, 100);
  return d.data[0] + d.data[15];
}


/* Function: func_a @ 0x239A */
int __cdecl func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x23AD */
int __cdecl func_b(int x)
{
  return 2 * x;
}


/* Function: ret_func_ptr @ 0x23BF */
func_ptr_t __cdecl ret_func_ptr(int selector)
{
  if ( selector )
    return (func_ptr_t)func_b;
  else
    return (func_ptr_t)func_a;
}


/* Function: call_ret_func_ptr @ 0x23E2 */
int __cdecl call_ret_func_ptr()
{
  func_ptr_t f; // [rsp+8h] [rbp-8h]

  f = ret_func_ptr(1);
  return f(5);
}


/* Function: ret_opaque_handle @ 0x2409 */
void *__cdecl ret_opaque_handle(int type)
{
  if ( type )
    return &handle2_0;
  else
    return &handle1_1;
}


/* Function: call_ret_opaque @ 0x242C */
int __cdecl call_ret_opaque()
{
  return *(_DWORD *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x244E */
int __cdecl ret_complex_expr(int x, int y, int z)
{
  if ( x <= y )
    return z + 10;
  else
    return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x2476 */
int __cdecl call_ret_complex_expr()
{
  int r1; // [rsp+8h] [rbp-8h]

  r1 = ret_complex_expr(5, 3, 10);
  return r1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x24BA */
int __cdecl ret_multi_branch(int op)
{
  if ( op == 2 )
    return 30;
  if ( op > 2 )
    return -1;
  if ( !op )
    return 10;
  if ( op == 1 )
    return 20;
  else
    return -1;
}


/* Function: call_ret_multi_branch @ 0x24FB */
int __cdecl call_ret_multi_branch()
{
  int sum; // [rsp+Ch] [rbp-4h]
  int suma; // [rsp+Ch] [rbp-4h]

  sum = ret_multi_branch(0);
  suma = ret_multi_branch(1) + sum;
  return ret_multi_branch(2) + suma;
}


/* Function: ret_void @ 0x253A */
void __cdecl ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x255B */
int __cdecl call_ret_void()
{
  int result; // [rsp+4h] [rbp-Ch] BYREF
  unsigned __int64 v2; // [rsp+8h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  ret_void(7, &result);
  return result;
}


/* Function: test_return_values @ 0x25A0 */
void __cdecl test_return_values()
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
  printf(aRetL303D, v8);
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
