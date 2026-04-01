/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/4/4_gcc_O1_g
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
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1120 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1160 */
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


/* Function: frame_dummy @ 0x11A0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: callback_func @ 0x11A9 */
int __fastcall callback_func(int x)
{
  return 2 * x;
}


/* Function: func_a @ 0x11B1 */
int __fastcall func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x11B9 */
int __fastcall func_b(int x)
{
  return 2 * x;
}


/* Function: cdecl_func @ 0x11C1 */
int __fastcall cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x11C9 */
int __cdecl call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x11D3 */
int __fastcall stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x11DD */
int __cdecl call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x11E7 */
int __fastcall fastcall_func(int a, int b, int c)
{
  return b + a + c;
}


/* Function: call_fastcall @ 0x11F1 */
int __cdecl call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x11FB */
int __cdecl call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1205 */
int __fastcall arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1214 */
int __cdecl call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x121E */
int __fastcall mips_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_mips @ 0x122A */
int __cdecl call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x1234 */
int __fastcall amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1246 */
int __cdecl call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x1250 */
int __fastcall ms_x64_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_ms_x64 @ 0x125F */
int __cdecl call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x1269 */
int __fastcall vectorcall_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_vectorcall @ 0x1275 */
int __cdecl call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x127F */
int __cdecl mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x1289 */
int varargs_func(int count, ...)
{
  int v1; // ecx
  int v2; // esi
  __int64 *v3; // rdx
  __int64 v4; // kr00_8
  va_list args; // [rsp+0h] [rbp-58h] BYREF

  va_start(args, count);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  if ( count <= 0 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
  {
    if ( args[0].gp_offset > 0x2F )
    {
      v4 = va_arg(args, _QWORD);
      v3 = &v4;
    }
    else
    {
      v3 = (__int64 *)((char *)args[0].reg_save_area + args[0].gp_offset);
      args[0].gp_offset += 8;
    }
    v2 += *(_DWORD *)v3;
    ++v1;
  }
  while ( count != v1 );
  return v2;
}


/* Function: func_no_args @ 0x1335 */
int __cdecl func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x133F */
int __fastcall func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return h + g + e + d + c + b + a + f;
}


/* Function: func_mixed_args @ 0x1359 */
__int64 __fastcall func_mixed_args(int x, char *s, double d, __int64 ll)
{
  int v4; // ebx
  int v5; // eax

  v4 = ll;
  v5 = 0;
  if ( s )
    v5 = strlen(s);
  return (unsigned int)(int)((double)(x + v5) + d + (double)v4);
}


/* Function: func_struct_byval @ 0x13A6 */
int __cdecl func_struct_byval(LargeStruct s)
{
  LargeStruct *p_s; // rdx
  __int64 v2; // rax
  char v4; // [rsp+88h] [rbp+88h] BYREF

  p_s = &s;
  v2 = 0;
  do
  {
    v2 += p_s->data[0];
    p_s = (LargeStruct *)((char *)p_s + 8);
  }
  while ( p_s != (LargeStruct *)&v4 );
  return v2;
}


/* Function: func_struct_byptr @ 0x13C9 */
int __fastcall func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->y * p->x;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x13DF */
void __cdecl test_calling_conventions()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  __int64 i; // rax
  _BYTE *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+0h] [rbp-120h]
  LargeStruct large; // [rsp+8h] [rbp-118h] BYREF
  _OWORD v7[8]; // [rsp+88h] [rbp-98h] BYREF
  _BYTE v8[8]; // [rsp+108h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+110h] [rbp-10h]

  v9 = __readfsqword(0x28u);
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
    *(&v5 + i) = i;
  v7[0] = _mm_load_si128((const __m128i *)&large);
  v7[1] = _mm_load_si128((const __m128i *)&large.data[2]);
  v7[2] = _mm_load_si128((const __m128i *)&large.data[4]);
  v7[3] = _mm_load_si128((const __m128i *)&large.data[6]);
  v7[4] = _mm_load_si128((const __m128i *)&large.data[8]);
  v7[5] = _mm_load_si128((const __m128i *)&large.data[10]);
  v7[6] = _mm_load_si128((const __m128i *)&large.data[12]);
  v7[7] = _mm_load_si128((const __m128i *)&large.data[14]);
  v3 = v7;
  v4 = 0;
  do
  {
    v4 += *(_QWORD *)v3;
    v3 += 8;
  }
  while ( v8 != v3 );
  __printf_chk(1, aCallL210, v4, v8);
  __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x16BA */
int __fastcall param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x16C2 */
int __cdecl call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x16CC */
int __fastcall param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x16D8 */
int __cdecl call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x16E2 */
int __fastcall param_array_decay(int *arr, int n)
{
  return 8;
}


/* Function: call_array_decay @ 0x16EC */
int __cdecl call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x16F6 */
int __fastcall param_string(const char *str)
{
  return str[1] + *str;
}


/* Function: call_string_param @ 0x1704 */
int __cdecl call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x170E */
int __fastcall param_ptr_array(char **arr, int n)
{
  char **v2; // rax
  char **v3; // rsi
  int v4; // edx

  if ( n <= 0 )
    return 0;
  v2 = arr;
  v3 = &arr[(unsigned int)(n - 1) + 1];
  v4 = 0;
  do
    v4 += **v2++;
  while ( v2 != v3 );
  return v4;
}


/* Function: call_ptr_array @ 0x1741 */
int __cdecl call_ptr_array()
{
  char *strs[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  strs[0] = "abc";
  strs[1] = "def";
  strs[2] = "ghi";
  return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x17A3 */
int param_varargs(int count, ...)
{
  int v1; // ecx
  int v2; // esi
  __int64 *v3; // rdx
  __int64 v4; // kr00_8
  va_list args; // [rsp+0h] [rbp-58h] BYREF

  va_start(args, count);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  va_arg(args, double);
  if ( count <= 0 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
  {
    if ( args[0].gp_offset > 0x2F )
    {
      v4 = va_arg(args, _QWORD);
      v3 = &v4;
    }
    else
    {
      v3 = (__int64 *)((char *)args[0].reg_save_area + args[0].gp_offset);
      args[0].gp_offset += 8;
    }
    v2 += *(_DWORD *)v3;
    ++v1;
  }
  while ( count != v1 );
  return v2;
}


/* Function: call_varargs_param @ 0x184F */
int __cdecl call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1880 */
int __fastcall param_func_ptr(int (*callback)(int), int x)
{
  return ((__int64 (__fastcall *)(_QWORD))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1897 */
int __cdecl call_func_ptr_param()
{
  return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x18B5 */
int __fastcall param_double_ptr(int **pp, int new_val)
{
  if ( !pp )
    return -1;
  if ( !*pp )
    return -1;
  **pp = new_val;
  *pp = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x18E1 */
int __cdecl call_double_ptr()
{
  int val; // [rsp+Ch] [rbp-1Ch] BYREF
  int *ptr[3]; // [rsp+10h] [rbp-18h] BYREF

  ptr[1] = (int *)__readfsqword(0x28u);
  val = 10;
  ptr[0] = &val;
  param_double_ptr(ptr, 20);
  return val + (ptr[0] == 0);
}


/* Function: param_complex_cast @ 0x1944 */
int __fastcall param_complex_cast(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(_DWORD *)p + *((_DWORD *)p + 1);
  return -1;
}


/* Function: call_complex_cast @ 0x1960 */
int __cdecl call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x196A */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1977 */
int __cdecl call_struct_byval()
{
  __int64 i; // rax
  BigStruct s; // [rsp+0h] [rbp-58h]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
    s.data[i] = i;
  return s.data[15] + s.data[0];
}


/* Function: param_order_dep @ 0x19BD */
int __fastcall param_order_dep(int a, int b)
{
  return a + b;
}


/* Function: call_order_dep @ 0x19C5 */
int __cdecl call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x19CF */
void __cdecl test_parameter_passing()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  puts(asc_2130);
  __printf_chk(1, "PARAM-L1-01: %d\n", 15);
  v0 = call_by_value_ptr();
  __printf_chk(1, "PARAM-L1-02: %d\n", v0);
  __printf_chk(1, "PARAM-L2-01: %d\n", 8);
  __printf_chk(1, "PARAM-L2-02: %d\n", 173);
  v1 = call_ptr_array();
  __printf_chk(1, "PARAM-L2-03: %d\n", v1);
  v2 = call_varargs_param();
  __printf_chk(1, "PARAM-L2-04: %d\n", v2);
  v3 = call_func_ptr_param();
  __printf_chk(1, "PARAM-L3-01: %d\n", v3);
  v4 = call_double_ptr();
  __printf_chk(1, "PARAM-L3-02: %d\n", v4);
  v5 = call_complex_cast();
  __printf_chk(1, "PARAM-L3-03: %d\n", v5);
  v6 = call_struct_byval();
  __printf_chk(1, "PARAM-L3-04: %d\n", v6);
  __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1B42 */
int __fastcall ret_basic_type(int x)
{
  return 2 * x;
}


/* Function: call_ret_basic @ 0x1B4A */
int __cdecl call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x1B54 */
int *__fastcall ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x1B5D */
int __cdecl call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x1B67 */
// local variable allocation has failed, the output may be wrong!
SmallPoint __fastcall ret_small_struct(int x, int y)
{
  return (SmallPoint)((*(_QWORD *)&y << 32) | (unsigned int)x);
}


/* Function: call_ret_small_struct @ 0x1B75 */
int __cdecl call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x1B7F */
LargeData *__fastcall ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  LargeData *result; // rax
  LargeData *p_d; // rdx
  LargeData d; // [rsp+0h] [rbp-58h] BYREF
  char v5; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-10h]

  result = retstr;
  v6 = __readfsqword(0x28u);
  p_d = &d;
  do
  {
    p_d->data[0] = seed++;
    p_d = (LargeData *)((char *)p_d + 4);
  }
  while ( p_d != (LargeData *)&v5 );
  *(__m128i *)retstr->data = _mm_load_si128((const __m128i *)&d);
  *(__m128i *)&retstr->data[4] = _mm_load_si128((const __m128i *)&d.data[4]);
  *(__m128i *)&retstr->data[8] = _mm_load_si128((const __m128i *)&d.data[8]);
  *(__m128i *)&retstr->data[12] = _mm_load_si128((const __m128i *)&d.data[12]);
  return result;
}


/* Function: call_ret_large_struct @ 0x1BF0 */
int __cdecl call_ret_large_struct()
{
  LargeData d; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v2; // [rsp+48h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  ret_large_struct(&d, 100);
  return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x1C36 */
func_ptr_t __fastcall ret_func_ptr(int selector)
{
  func_ptr_t result; // rax

  result = func_b;
  if ( !selector )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1C4F */
int __cdecl call_ret_func_ptr()
{
  return func_b(5);
}


/* Function: ret_opaque_handle @ 0x1C5E */
void *__fastcall ret_opaque_handle(int type)
{
  void *result; // rax

  result = &handle1_1;
  if ( type )
    return &handle2_0;
  return result;
}


/* Function: call_ret_opaque @ 0x1C77 */
int __cdecl call_ret_opaque()
{
  return handle1_1;
}


/* Function: ret_complex_expr @ 0x1C82 */
int __fastcall ret_complex_expr(int x, int y, int z)
{
  int result; // eax
  int v4; // edx

  result = 2 * z;
  v4 = z + 10;
  if ( x <= y )
    return v4;
  return result;
}


/* Function: call_ret_complex_expr @ 0x1C92 */
int __cdecl call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1C9C */
int __fastcall ret_multi_branch(int op)
{
  int result; // eax

  result = 20;
  if ( op != 1 )
  {
    result = 30;
    if ( op != 2 )
      return op == 0 ? 10 : -1;
  }
  return result;
}


/* Function: call_ret_multi_branch @ 0x1CC0 */
int __cdecl call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1CCA */
void __fastcall ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x1CD4 */
int __cdecl call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1CDE */
void __cdecl test_return_values()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax

  puts(asc_22BD);
  __printf_chk(1, aRetL101D, 42);
  v0 = call_ret_pointer();
  __printf_chk(1, aRetL102D, v0);
  v1 = call_ret_small_struct();
  __printf_chk(1, aRetL103D, v1);
  v2 = call_ret_large_struct();
  __printf_chk(1, aRetL104D, v2);
  v3 = call_ret_func_ptr();
  __printf_chk(1, aRetL201D, v3);
  __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
  __printf_chk(1, aRetL301D, 40);
  __printf_chk(1, aRetL302D, 60);
  __printf_chk(1, aRetL303D, 21);
}


/* Function: main @ 0x1E07 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: .term_proc @ 0x1E38 */
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
