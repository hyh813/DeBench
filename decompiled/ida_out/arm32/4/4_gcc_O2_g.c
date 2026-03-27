/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/4/4_gcc_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103DC */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_103E8 @ 0x103E8 */
void sub_103E8()
{
  JUMPOUT(0);
}


/* Function: main @ 0x1045C */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: _start @ 0x10474 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_104B0 + 18144), v4, (char **)&va, 0, 0, a1, &va);
  abort();
}


/* Function: call_weak_fn @ 0x104B8 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x104DC */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10508 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10540 */
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


/* Function: frame_dummy @ 0x10568 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: func_a @ 0x1056C */
int __fastcall func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x10574 */
int __fastcall func_b(int a1)
{
  return 2 * a1;
}


/* Function: cdecl_func @ 0x1057C */
int __fastcall cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x10584 */
int call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x1058C */
int __fastcall stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x10594 */
int call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x1059C */
int __fastcall fastcall_func(int a, int b, int c)
{
  return a + b + c;
}


/* Function: call_fastcall @ 0x105A8 */
int call_fastcall()
{
  return 6;
}


/* Function: call_thiscall @ 0x105B0 */
int call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x105B8 */
int __fastcall arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return a + b + c + d + e;
}


/* Function: call_arm_aapcs @ 0x105D0 */
int call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x105D8 */
int __fastcall mips_func(int a, int b, int c, int d)
{
  return a + b + c + d;
}


/* Function: call_mips @ 0x105E8 */
int call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x105F0 */
int __fastcall amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return a + b + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x10610 */
int call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x10618 */
int __fastcall ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x10630 */
int call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x10638 */
int __fastcall vectorcall_func(int a1, int a2, int a3, int a4)
{
  return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x10648 */
int call_vectorcall()
{
  return 10;
}


/* Function: mixed_conventions_test @ 0x10650 */
int mixed_conventions_test()
{
  return 33;
}


/* Function: varargs_func @ 0x10658 */
int varargs_func(int count, ...)
{
  int *v2; // r2
  int v3; // r3
  int result; // r0
  int v5; // t1
  va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

  va_start(varg_r1, count);
  va_copy((va_list)v2, varg_r1);
  if ( count <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    v5 = *v2++;
    ++v3;
    result += v5;
  }
  while ( count != v3 );
  return result;
}


/* Function: func_no_args @ 0x106DC */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x106E4 */
int __fastcall func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return a + b + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x1070C */
int __fastcall func_mixed_args(int x, char *s, double d, __int64 ll)
{
  int v4; // r4

  v4 = x;
  if ( s )
    v4 = x + strlen(s);
  return (int)((double)v4 + d + (double)ll);
}


/* Function: func_struct_byval @ 0x10770 */
// local variable allocation has failed, the output may be wrong!
int __cdecl func_struct_byval(LargeStruct s)
{
  int v1; // r12
  char *v2; // r3
  int result; // r0
  int v4; // r2
  char v5; // [sp+80h] [bp+70h] BYREF

  *(_QWORD *)v1 = s.data[0];
  *(_DWORD *)(v1 + 8) = s.data[1];
  *(_DWORD *)(v1 + 12) = HIDWORD(s.data[1]);
  v2 = (char *)v1;
  result = 0;
  do
  {
    v4 = *(_DWORD *)v2;
    v2 += 8;
    result += v4;
  }
  while ( v2 != &v5 );
  return result;
}


/* Function: func_struct_byptr @ 0x107A4 */
int __fastcall func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->y * p->x;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x107BC */
void test_calling_conventions()
{
  int v0; // r0
  int v1; // r3
  unsigned int v2; // r2
  LargeStruct *p_large; // r1
  int v4; // kr00_4
  int v5; // r2
  char *v6; // r3
  int v7; // r1
  LargeStruct large; // [sp+8h] [bp-110h] BYREF
  _BYTE dest[128]; // [sp+88h] [bp-90h] BYREF
  char v10; // [sp+108h] [bp-10h] BYREF

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
  v0 = varargs_func(5, 1, 2, 3, 4, 5);
  _printf_chk(1, aCallL206, v0);
  _printf_chk(1, aCallL207, 42);
  _printf_chk(1, aCallL208, 36);
  _printf_chk(1, aCallL209, 117);
  v1 = 1;
  v2 = 0;
  p_large = &large;
  do
  {
    v4 = v1;
    LODWORD(p_large->data[0]) = v1;
    HIDWORD(p_large->data[0]) = v2;
    ++v1;
    v2 = (__PAIR64__(v2, v4) + 1) >> 32;
    p_large = (LargeStruct *)((char *)p_large + 8);
  }
  while ( (v4 - 16) | v2 );
  memcpy(dest, &large, sizeof(dest));
  v5 = 0;
  v6 = dest;
  do
  {
    v7 = *(_DWORD *)v6;
    v6 += 8;
    v5 += v7;
  }
  while ( &v10 != v6 );
  _printf_chk(1, aCallL210, v5);
  _printf_chk(1, aCallL211, 50, 0);
}


/* Function: param_by_value_int @ 0x109C4 */
int __fastcall param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x109CC */
int call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x109D4 */
int __fastcall param_by_value_ptr(int *p)
{
  int result; // r0

  result = 1;
  *p *= 2;
  return result;
}


/* Function: call_by_value_ptr @ 0x109EC */
int call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x109F4 */
int __fastcall param_array_decay(int *arr, int n)
{
  return 4;
}


/* Function: call_array_decay @ 0x109FC */
int call_array_decay()
{
  return 4;
}


/* Function: param_string @ 0x10A04 */
int __fastcall param_string(const char *str)
{
  return *(unsigned __int8 *)str + *((unsigned __int8 *)str + 1);
}


/* Function: call_string_param @ 0x10A14 */
int call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0x10A1C */
int __fastcall param_ptr_array(char **arr, int n)
{
  int result; // r0
  char **v4; // r3
  char **v5; // r1
  char *v6; // t1

  result = 0;
  if ( n > 0 )
  {
    v4 = arr - 1;
    v5 = &v4[n];
    do
    {
      v6 = v4[1];
      ++v4;
      result += (unsigned __int8)*v6;
    }
    while ( v4 != v5 );
  }
  return result;
}


/* Function: call_ptr_array @ 0x10A4C */
int call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0x10A54 */
int param_varargs(int count, ...)
{
  int *v2; // r2
  int v3; // r3
  int result; // r0
  int v5; // t1
  va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

  va_start(varg_r1, count);
  va_copy((va_list)v2, varg_r1);
  if ( count <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    v5 = *v2++;
    ++v3;
    result += v5;
  }
  while ( count != v3 );
  return result;
}


/* Function: call_varargs_param @ 0x10AD8 */
int call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x10B04 */
int __fastcall param_func_ptr(int (*callback)(int), int x)
{
  return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x10B1C */
int call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0x10B24 */
int __fastcall param_double_ptr(int **pp, int new_val)
{
  int result; // r0

  if ( !pp || !*pp )
    return -1;
  **pp = new_val;
  result = 1;
  *pp = 0;
  return result;
}


/* Function: call_double_ptr @ 0x10B54 */
int call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0x10B5C */
int __fastcall param_complex_cast(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *((_DWORD *)p + 1) + *(_DWORD *)p;
  return -1;
}


/* Function: call_complex_cast @ 0x10B80 */
int call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0x10B8C */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x10BA8 */
int call_struct_byval()
{
  int v0; // r3
  BigStruct *p_s; // r2
  BigStruct s; // [sp+4h] [bp-4Ch] BYREF

  v0 = 0;
  p_s = &s;
  do
  {
    p_s->data[0] = v0;
    p_s = (BigStruct *)((char *)p_s + 4);
    ++v0;
  }
  while ( v0 != 16 );
  return s.data[0] + s.data[15];
}


/* Function: param_order_dep @ 0x10C0C */
int __fastcall param_order_dep(int a1, int a2)
{
  return a1 + a2;
}


/* Function: call_order_dep @ 0x10C14 */
int call_order_dep()
{
  return 4;
}


/* Function: test_parameter_passing @ 0x10C1C */
void test_parameter_passing()
{
  int v0; // r0
  int v1; // r3
  _DWORD *v2; // r2
  _DWORD v3[16]; // [sp+Ch] [bp-4Ch] BYREF

  puts(asc_11688);
  _printf_chk(1, "PARAM-L1-01: %d\n", 15);
  _printf_chk(1, "PARAM-L1-02: %d\n", 11);
  _printf_chk(1, "PARAM-L2-01: %d\n", 4);
  _printf_chk(1, "PARAM-L2-02: %d\n", 173);
  _printf_chk(1, "PARAM-L2-03: %d\n", 300);
  v0 = param_varargs(4, 10, 20, 30, 40);
  _printf_chk(1, "PARAM-L2-04: %d\n", v0);
  _printf_chk(1, "PARAM-L3-01: %d\n", 20);
  _printf_chk(1, "PARAM-L3-02: %d\n", 21);
  _printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
  v1 = 0;
  v2 = v3;
  do
    *v2++ = v1++;
  while ( v1 != 16 );
  _printf_chk(1, "PARAM-L3-04: %d\n", v3[0] + v3[15]);
  _printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x10D84 */
int __fastcall ret_basic_type(int a1)
{
  return 2 * a1;
}


/* Function: call_ret_basic @ 0x10D8C */
int call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0x10D94 */
int *__fastcall ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x10D9C */
int call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0x10DA4 */
SmallPoint *__fastcall ret_small_struct(SmallPoint *__return_ptr retstr, int x, int y)
{
  retstr->x = x;
  retstr->y = y;
  return retstr;
}


/* Function: call_ret_small_struct @ 0x10DAC */
int call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0x10DB4 */
LargeData *__fastcall ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  LargeData *p_d; // r3
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  LargeData d; // [sp+4h] [bp-4Ch] BYREF
  int v16; // [sp+44h] [bp-Ch] BYREF

  p_d = &d;
  do
  {
    p_d->data[0] = seed;
    p_d = (LargeData *)((char *)p_d + 4);
    ++seed;
  }
  while ( p_d != (LargeData *)&v16 );
  v3 = d.data[1];
  v4 = d.data[2];
  v5 = d.data[3];
  retstr->data[0] = d.data[0];
  retstr->data[1] = v3;
  retstr->data[2] = v4;
  retstr->data[3] = v5;
  v6 = d.data[5];
  v7 = d.data[6];
  v8 = d.data[7];
  retstr->data[4] = d.data[4];
  retstr->data[5] = v6;
  retstr->data[6] = v7;
  retstr->data[7] = v8;
  v9 = d.data[9];
  v10 = d.data[10];
  v11 = d.data[11];
  retstr->data[8] = d.data[8];
  retstr->data[9] = v9;
  retstr->data[10] = v10;
  retstr->data[11] = v11;
  v12 = d.data[13];
  v13 = d.data[14];
  v14 = d.data[15];
  retstr->data[12] = d.data[12];
  retstr->data[13] = v12;
  retstr->data[14] = v13;
  retstr->data[15] = v14;
  return retstr;
}


/* Function: call_ret_large_struct @ 0x10E3C */
int call_ret_large_struct()
{
  int v0; // r3
  _DWORD *v1; // r2
  _DWORD v3[16]; // [sp+4h] [bp-4Ch] BYREF

  v0 = 100;
  v1 = v3;
  do
    *v1++ = v0++;
  while ( v0 != 116 );
  return v3[15] + v3[0];
}


/* Function: ret_func_ptr @ 0x10EA0 */
func_ptr_t __fastcall ret_func_ptr(int selector)
{
  if ( selector )
    return func_b;
  else
    return func_a;
}


/* Function: call_ret_func_ptr @ 0x10EC0 */
int call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0x10EC8 */
void *__fastcall ret_opaque_handle(int type)
{
  if ( type )
    return &handle2_0;
  else
    return &handle1_1;
}


/* Function: call_ret_opaque @ 0x10EE4 */
int call_ret_opaque()
{
  return handle1_1;
}


/* Function: ret_complex_expr @ 0x10EF4 */
int __fastcall ret_complex_expr(int x, int y, int z)
{
  if ( x <= y )
    return z + 10;
  else
    return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x10F04 */
int call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0x10F0C */
int __fastcall ret_multi_branch(int op)
{
  if ( (unsigned int)op > 2 )
    return -1;
  else
    return 10 * (op + 1);
}


/* Function: call_ret_multi_branch @ 0x10F24 */
int call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0x10F2C */
void __fastcall ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x10F38 */
int call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0x10F40 */
void test_return_values()
{
  int v0; // r0

  puts(asc_11788);
  _printf_chk(1, aRetL101D, 42);
  _printf_chk(1, aRetL102D, 20);
  _printf_chk(1, aRetL103D, 7);
  v0 = call_ret_large_struct();
  _printf_chk(1, aRetL104D, v0);
  _printf_chk(1, aRetL201D, 10);
  _printf_chk(1, aRetL202D, handle1_1);
  _printf_chk(1, aRetL301D, 40);
  _printf_chk(1, aRetL302D, 60);
  _printf_chk(1, aRetL303D, 21);
}


/* Function: __aeabi_drsub @ 0x11014 */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0x1101C */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0x11020 */
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


/* Function: __floatunsidf @ 0x112CC */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x11168);
  return result;
}


/* Function: __floatsidf @ 0x112F0 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x11168);
  return result;
}


/* Function: __extendsfdf2 @ 0x11318 */
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
      JUMPOUT(0x11168);
  }
  return result;
}


/* Function: __floatundidf @ 0x11360 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11390);
  return a1;
}


/* Function: __floatdidf @ 0x11374 */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x1110C);
  return a1;
}


/* Function: __fixdfsi @ 0x113D4 */
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


/* Function: .term_proc @ 0x11430 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x22058 */

/* FAILED to decompile: __imp_strlen @ 0x2205C */

/* FAILED to decompile: __imp___printf_chk @ 0x22060 */

/* FAILED to decompile: __imp_abort @ 0x22064 */

/* FAILED to decompile: __imp___libc_start_main @ 0x22068 */

/* FAILED to decompile: __imp_memcpy @ 0x2206C */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x22070 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x22074 */

/* Total functions decompiled: 88, failed: 8 */
