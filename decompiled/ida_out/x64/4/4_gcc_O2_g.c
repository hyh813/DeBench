/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_O2_g
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


/* Function: _start @ 0x10F0 */
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


/* Function: deregister_tm_clones @ 0x1120 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1150 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1190 */
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


/* Function: frame_dummy @ 0x11D0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: func_a @ 0x11E0 */
int __fastcall func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x11F0 */
__int64 __fastcall func_b(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x1200 */
int __fastcall cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x1210 */
int __cdecl call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x1220 */
int __fastcall stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x1230 */
int __cdecl call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x1240 */
int __fastcall fastcall_func(int a, int b, int c)
{
  return b + a + c;
}


/* Function: call_fastcall @ 0x1250 */
int __cdecl call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x1260 */
__int64 call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x1270 */
int __fastcall arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1280 */
__int64 call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x1290 */
int __fastcall mips_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_mips @ 0x12A0 */
int __cdecl call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x12B0 */
int __fastcall amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x12D0 */
int __cdecl call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x12E0 */
__int64 __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x12F0 */
__int64 call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x1300 */
__int64 __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1310 */
int __cdecl call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x1320 */
int __cdecl mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x1330 */
int varargs_func(int count, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  char *v7; // rsi
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rdx
  char *v11; // rdx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-10h]
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v14 = v3;
  v15 = v1;
  v16 = v2;
  v17 = v4;
  v18 = v5;
  if ( count <= 0 )
    return 0;
  v6 = 8;
  v7 = &v19;
  v8 = 0;
  v9 = 0;
  do
  {
    while ( v6 <= 0x2F )
    {
      v10 = v6;
      ++v8;
      v6 += 8;
      v9 += *(_DWORD *)&v13[v10];
      if ( count == v8 )
        return v9;
    }
    v11 = v7;
    ++v8;
    v7 += 8;
    v9 += *(_DWORD *)v11;
  }
  while ( count != v8 );
  return v9;
}


/* Function: func_no_args @ 0x13F0 */
int __cdecl func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x1400 */
int __fastcall func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return h + g + e + d + c + b + a + f;
}


/* Function: func_mixed_args @ 0x1420 */
__int64 __fastcall func_mixed_args(int x, char *s, double d, __int64 ll)
{
  double v4; // xmm1_8
  int v5; // ebp
  int v6; // ebx

  v4 = d;
  v5 = ll;
  v6 = x;
  if ( s )
  {
    v4 = d;
    v6 = strlen(s) + x;
  }
  return (unsigned int)(int)((double)v6 + v4 + (double)v5);
}


/* Function: func_struct_byval @ 0x1480 */
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


/* Function: func_struct_byptr @ 0x14B0 */
int __fastcall func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->y * p->x;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x14D0 */
void __cdecl test_calling_conventions()
{
  unsigned int v0; // eax
  __int64 i; // rax
  __m128i si128; // xmm1
  __int64 v3; // rdx
  _BYTE *v4; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  LargeStruct large; // [rsp+0h] [rbp-118h] BYREF
  _OWORD v12[8]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v13[8]; // [rsp+100h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+108h] [rbp-10h]

  v14 = __readfsqword(0x28u);
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
  __printf_chk(1, aCallL209, 117);
  for ( i = 1; i != 17; ++i )
    large.data[i - 1] = i;
  si128 = _mm_load_si128((const __m128i *)&large.data[2]);
  v3 = 0;
  v4 = v12;
  v5 = _mm_load_si128((const __m128i *)&large.data[4]);
  v6 = _mm_load_si128((const __m128i *)&large.data[6]);
  v7 = _mm_load_si128((const __m128i *)&large.data[8]);
  v8 = _mm_load_si128((const __m128i *)&large.data[10]);
  v12[0] = _mm_load_si128((const __m128i *)&large);
  v9 = _mm_load_si128((const __m128i *)&large.data[12]);
  v10 = _mm_load_si128((const __m128i *)&large.data[14]);
  v12[1] = si128;
  v12[2] = v5;
  v12[3] = v6;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  v12[7] = v10;
  do
  {
    v3 += *(_QWORD *)v4;
    v4 += 8;
  }
  while ( v13 != v4 );
  __printf_chk(1, aCallL210, v3, v13);
  __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1770 */
int __fastcall param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x1780 */
__int64 call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x1790 */
int __fastcall param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x17A0 */
int __cdecl call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x17B0 */
int __fastcall param_array_decay(int *arr, int n)
{
  return 8;
}


/* Function: call_array_decay @ 0x17C0 */
int __cdecl call_array_decay()
{
  return 8;
}


/* Function: param_string @ 0x17D0 */
int __fastcall param_string(const char *str)
{
  return str[1] + *str;
}


/* Function: call_string_param @ 0x17E0 */
int __cdecl call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x17F0 */
int __fastcall param_ptr_array(char **arr, int n)
{
  char **v2; // rcx
  int result; // eax
  char *v4; // rdx

  if ( n <= 0 )
    return 0;
  v2 = &arr[(unsigned int)(n - 1) + 1];
  result = 0;
  do
  {
    v4 = *arr++;
    result += *v4;
  }
  while ( arr != v2 );
  return result;
}


/* Function: call_ptr_array @ 0x1830 */
int __cdecl call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0x1840 */
int param_varargs(int count, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  char *v7; // rsi
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rdx
  char *v11; // rdx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-10h]
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v14 = v3;
  v15 = v1;
  v16 = v2;
  v17 = v4;
  v18 = v5;
  if ( count <= 0 )
    return 0;
  v6 = 8;
  v7 = &v19;
  v8 = 0;
  v9 = 0;
  do
  {
    while ( v6 <= 0x2F )
    {
      v10 = v6;
      ++v8;
      v6 += 8;
      v9 += *(_DWORD *)&v13[v10];
      if ( count == v8 )
        return v9;
    }
    v11 = v7;
    ++v8;
    v7 += 8;
    v9 += *(_DWORD *)v11;
  }
  while ( count != v8 );
  return v9;
}


/* Function: call_varargs_param @ 0x1900 */
int __cdecl call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1930 */
int __fastcall param_func_ptr(int (*callback)(int), int x)
{
  return ((__int64 (__fastcall *)(_QWORD))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1950 */
int __cdecl call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0x1960 */
int __fastcall param_double_ptr(int **pp, int new_val)
{
  int result; // eax

  if ( !pp || !*pp )
    return -1;
  **pp = new_val;
  result = 1;
  *pp = 0;
  return result;
}


/* Function: call_double_ptr @ 0x1990 */
__int64 call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x19A0 */
int __fastcall param_complex_cast(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(_DWORD *)p + *((_DWORD *)p + 1);
  return -1;
}


/* Function: call_complex_cast @ 0x19D0 */
int __cdecl call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x19E0 */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x19F0 */
int __cdecl call_struct_byval()
{
  __int64 i; // rax
  BigStruct s; // [rsp+0h] [rbp-58h]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 16; ++i )
    s.data[i] = i;
  return s.data[0] + s.data[15];
}


/* Function: param_order_dep @ 0x1A40 */
__int64 __fastcall param_order_dep(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1A50 */
int __cdecl call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x1A60 */
void __cdecl test_parameter_passing()
{
  int v0; // eax
  __int64 i; // rax
  _DWORD v2[18]; // [rsp+0h] [rbp-58h]
  unsigned __int64 v3; // [rsp+48h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  puts(asc_2130);
  __printf_chk(1, "PARAM-L1-01: %d\n", 15);
  __printf_chk(1, "PARAM-L1-02: %d\n", 11);
  __printf_chk(1, "PARAM-L2-01: %d\n", 8);
  __printf_chk(1, "PARAM-L2-02: %d\n", 173);
  __printf_chk(1, "PARAM-L2-03: %d\n", 300);
  v0 = param_varargs(4, 10, 20, 30, 40);
  __printf_chk(1, "PARAM-L2-04: %d\n", v0);
  __printf_chk(1, "PARAM-L3-01: %d\n", 20);
  __printf_chk(1, "PARAM-L3-02: %d\n", 21);
  __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
  for ( i = 0; i != 16; ++i )
    v2[i] = i;
  __printf_chk(1, "PARAM-L3-04: %d\n", v2[0] + v2[15]);
  __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1BE0 */
__int64 __fastcall ret_basic_type(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1BF0 */
int __cdecl call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x1C00 */
int *__fastcall ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x1C10 */
int __cdecl call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x1C20 */
// local variable allocation has failed, the output may be wrong!
SmallPoint __fastcall ret_small_struct(int x, int y)
{
  return (SmallPoint)((*(_QWORD *)&y << 32) | (unsigned int)x);
}


/* Function: call_ret_small_struct @ 0x1C30 */
int __cdecl call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x1C40 */
LargeData *__fastcall ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  LargeData *result; // rax
  LargeData *p_d; // rdx
  __m128i si128; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  LargeData d; // [rsp+0h] [rbp-58h] BYREF
  char v8; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-10h]

  result = retstr;
  v9 = __readfsqword(0x28u);
  p_d = &d;
  do
  {
    p_d->data[0] = seed;
    p_d = (LargeData *)((char *)p_d + 4);
    ++seed;
  }
  while ( p_d != (LargeData *)&v8 );
  si128 = _mm_load_si128((const __m128i *)&d.data[4]);
  v5 = _mm_load_si128((const __m128i *)&d.data[8]);
  v6 = _mm_load_si128((const __m128i *)&d.data[12]);
  *(__m128i *)retstr->data = _mm_load_si128((const __m128i *)&d);
  *(__m128i *)&retstr->data[4] = si128;
  *(__m128i *)&retstr->data[8] = v5;
  *(__m128i *)&retstr->data[12] = v6;
  return result;
}


/* Function: call_ret_large_struct @ 0x1CC0 */
int __cdecl call_ret_large_struct()
{
  int v0; // edx
  LargeData *p_d; // rax
  LargeData d; // [rsp+0h] [rbp-58h] BYREF
  char v4; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-10h]

  v0 = 100;
  v5 = __readfsqword(0x28u);
  p_d = &d;
  do
  {
    p_d->data[0] = v0;
    p_d = (LargeData *)((char *)p_d + 4);
    ++v0;
  }
  while ( p_d != (LargeData *)&v4 );
  return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x1D20 */
func_ptr_t __fastcall ret_func_ptr(int selector)
{
  func_ptr_t result; // rax

  result = (func_ptr_t)func_b;
  if ( !selector )
    return func_a;
  return result;
}


/* Function: call_ret_func_ptr @ 0x1D40 */
int __cdecl call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x1D50 */
void *__fastcall ret_opaque_handle(int type)
{
  void *result; // rax

  result = &handle1_1;
  if ( type )
    return &handle2_0;
  return result;
}


/* Function: call_ret_opaque @ 0x1D70 */
int __cdecl call_ret_opaque()
{
  return handle1_1;
}


/* Function: ret_complex_expr @ 0x1D80 */
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


/* Function: call_ret_complex_expr @ 0x1D90 */
int __cdecl call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x1DA0 */
int __fastcall ret_multi_branch(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op <= 2 )
    return 2 * (5 * op + 5);
  return result;
}


/* Function: call_ret_multi_branch @ 0x1DC0 */
int __cdecl call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x1DD0 */
void __fastcall ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x1DE0 */
__int64 call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x1DF0 */
void __cdecl test_return_values()
{
  unsigned int v0; // eax

  puts(asc_22AC);
  __printf_chk(1, aRetL101D, 42);
  __printf_chk(1, aRetL102D, 20);
  __printf_chk(1, aRetL103D, 7);
  v0 = call_ret_large_struct();
  __printf_chk(1, aRetL104D, v0);
  __printf_chk(1, aRetL201D, 10);
  __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
  __printf_chk(1, aRetL301D, 40);
  __printf_chk(1, aRetL302D, 60);
  __printf_chk(1, aRetL303D, 21);
}


/* Function: .term_proc @ 0x1EE8 */
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

/* Total functions decompiled: 82, failed: 7 */
