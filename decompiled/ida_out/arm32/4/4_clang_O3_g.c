/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/4/4_clang_O3_g
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
  _libc_start_main((int (*)(int, char **, char **))*(&off_494 + 18152), v4, (char **)&va, 0, 0, a1, &va);
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
int __fastcall cdecl_func(int a, int b)
{
  return b + a;
}


/* Function: call_cdecl @ 0x5C8 */
int call_cdecl()
{
  return 15;
}


/* Function: stdcall_func @ 0x5D0 */
int __fastcall stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x5DC */
int call_stdcall()
{
  return 50;
}


/* Function: fastcall_func @ 0x5E4 */
int __fastcall fastcall_func(int a, int b, int c)
{
  return b + a + c;
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
int __fastcall arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return b + a + c + d + e;
}


/* Function: call_arm_aapcs @ 0x618 */
int call_arm_aapcs()
{
  return 15;
}


/* Function: mips_func @ 0x620 */
int __fastcall mips_func(int a, int b, int c, int d)
{
  return b + a + c + d;
}


/* Function: call_mips @ 0x630 */
int call_mips()
{
  return 100;
}


/* Function: amd64_sysv_func @ 0x638 */
int __fastcall amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return b + a + c + d + e + f;
}


/* Function: call_amd64_sysv @ 0x658 */
int call_amd64_sysv()
{
  return 21;
}


/* Function: ms_x64_func @ 0x660 */
int __fastcall ms_x64_func(int a, int b, int c, int d, int e)
{
  return b + a + c + d + e;
}


/* Function: call_ms_x64 @ 0x678 */
int call_ms_x64()
{
  return 15;
}


/* Function: vectorcall_func @ 0x680 */
int __fastcall vectorcall_func(int a, int b, int c, int d)
{
  return b + a + c + d;
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
int varargs_func(int count, int a2, ...)
{
  va_list v2; // r2
  int v3; // r1
  int v4; // r3
  va_list va; // [sp+8h] [bp-8h] BYREF

  va_start(va, a2);
  if ( count < 1 )
    return 0;
  va_copy(v2, va);
  v3 = 0;
  do
  {
    --count;
    v4 = *((_DWORD *)v2.__ap - 1);
    v2.__ap = (char *)v2.__ap + 4;
    v3 += v4;
  }
  while ( count );
  return v3;
}


/* Function: func_no_args @ 0x6F8 */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x700 */
int __fastcall func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return b + a + c + d + e + f + g + h;
}


/* Function: func_mixed_args @ 0x730 */
int __fastcall func_mixed_args(int x, char *s, double d, __int64 ll)
{
  unsigned int v4; // r6
  unsigned int v5; // r7
  size_t v7; // r0

  v4 = HIDWORD(d);
  v5 = LODWORD(d);
  if ( s )
    v7 = strlen(s);
  else
    v7 = 0;
  return (int)((double)(int)(v7 + x) + COERCE_DOUBLE(__PAIR64__(v4, v5)) + (double)ll);
}


/* Function: func_struct_byval @ 0x7A8 */
int __cdecl func_struct_byval(LargeStruct s)
{
  return LODWORD(s.data[15])
       + LODWORD(s.data[14])
       + LODWORD(s.data[13])
       + LODWORD(s.data[12])
       + LODWORD(s.data[11])
       + LODWORD(s.data[10])
       + LODWORD(s.data[9])
       + LODWORD(s.data[8])
       + LODWORD(s.data[7])
       + LODWORD(s.data[6])
       + LODWORD(s.data[5])
       + LODWORD(s.data[4])
       + LODWORD(s.data[3])
       + LODWORD(s.data[2])
       + LODWORD(s.data[1])
       + LODWORD(s.data[0]);
}


/* Function: func_struct_byptr @ 0x82C */
int __fastcall func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->y * p->x;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x840 */
void test_calling_conventions()
{
  int v0; // r0

  puts(asc_17D6);
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
  printf(aCallL210, 136);
  printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x9C4 */
int __fastcall param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x9CC */
int call_by_value_int()
{
  return 15;
}


/* Function: param_by_value_ptr @ 0x9D4 */
int __fastcall param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x9E8 */
int call_by_value_ptr()
{
  return 11;
}


/* Function: param_array_decay @ 0x9F0 */
int __fastcall param_array_decay(int *arr, int n)
{
  return 4;
}


/* Function: call_array_decay @ 0x9F8 */
int call_array_decay()
{
  return 4;
}


/* Function: param_string @ 0xA00 */
int __fastcall param_string(const char *str)
{
  return *((unsigned __int8 *)str + 1) + *(unsigned __int8 *)str;
}


/* Function: call_string_param @ 0xA10 */
int call_string_param()
{
  return 173;
}


/* Function: param_ptr_array @ 0xA18 */
int __fastcall param_ptr_array(char **arr, int n)
{
  int result; // r0
  unsigned __int8 *v4; // t1

  if ( n < 1 )
    return 0;
  result = 0;
  do
  {
    v4 = (unsigned __int8 *)*arr++;
    --n;
    result += *v4;
  }
  while ( n );
  return result;
}


/* Function: call_ptr_array @ 0xA48 */
int call_ptr_array()
{
  return 300;
}


/* Function: param_varargs @ 0xA50 */
int param_varargs(int count, int a2, ...)
{
  va_list v2; // r2
  int v3; // r1
  int v4; // r3
  va_list va; // [sp+8h] [bp-8h] BYREF

  va_start(va, a2);
  if ( count < 1 )
    return 0;
  va_copy(v2, va);
  v3 = 0;
  do
  {
    --count;
    v4 = *((_DWORD *)v2.__ap - 1);
    v2.__ap = (char *)v2.__ap + 4;
    v3 += v4;
  }
  while ( count );
  return v3;
}


/* Function: call_varargs_param @ 0xAA8 */
int call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xAD8 */
int __fastcall param_func_ptr(int (*callback)(int), int x)
{
  return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0xAF8 */
int call_func_ptr_param()
{
  return 20;
}


/* Function: param_double_ptr @ 0xB00 */
int __fastcall param_double_ptr(int **pp, int new_val)
{
  int *v2; // r3
  int result; // r0
  bool v5; // zf

  result = -1;
  v5 = pp == 0;
  if ( pp )
  {
    v2 = *pp;
    v5 = *pp == 0;
  }
  if ( !v5 )
  {
    *v2 = new_val;
    *pp = 0;
    return 1;
  }
  return result;
}


/* Function: call_double_ptr @ 0xB28 */
int call_double_ptr()
{
  return 21;
}


/* Function: param_complex_cast @ 0xB30 */
int __fastcall param_complex_cast(void *p, int type)
{
  if ( type == 1 )
    return *((_DWORD *)p + 1) + *(_DWORD *)p;
  if ( type )
    return -1;
  return *(_DWORD *)p;
}


/* Function: call_complex_cast @ 0xB64 */
int call_complex_cast()
{
  return 305419896;
}


/* Function: param_struct_byval @ 0xB70 */
// local variable allocation has failed, the output may be wrong!
int __fastcall param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0xB7C */
int call_struct_byval()
{
  return 15;
}


/* Function: param_order_dep @ 0xB84 */
int __fastcall param_order_dep(int a, int b)
{
  return b + a;
}


/* Function: call_order_dep @ 0xB8C */
int call_order_dep()
{
  return 3;
}


/* Function: test_parameter_passing @ 0xB94 */
void test_parameter_passing()
{
  int v0; // r0

  puts(asc_17F7);
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
  printf("PARAM-L3-04: %d\n", 15);
  printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0xCB0 */
int __fastcall ret_basic_type(int x)
{
  return 2 * x;
}


/* Function: call_ret_basic @ 0xCB8 */
int call_ret_basic()
{
  return 42;
}


/* Function: ret_pointer @ 0xCC0 */
int *__fastcall ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0xCC8 */
int call_ret_pointer()
{
  return 20;
}


/* Function: ret_small_struct @ 0xCD0 */
SmallPoint *__fastcall ret_small_struct(SmallPoint *__return_ptr retstr, int x, int y)
{
  retstr->x = x;
  retstr->y = y;
  return retstr;
}


/* Function: call_ret_small_struct @ 0xCD8 */
int call_ret_small_struct()
{
  return 7;
}


/* Function: ret_large_struct @ 0xCE0 */
LargeData *__fastcall ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  retstr->data[12] = seed + 12;
  retstr->data[15] = seed + 15;
  retstr->data[8] = seed + 8;
  retstr->data[9] = seed + 9;
  retstr->data[10] = seed + 10;
  retstr->data[11] = seed + 11;
  retstr->data[13] = seed + 13;
  retstr->data[14] = seed + 14;
  retstr->data[0] = seed;
  retstr->data[1] = seed + 1;
  retstr->data[2] = seed + 2;
  retstr->data[3] = seed + 3;
  retstr->data[4] = seed + 4;
  retstr->data[5] = seed + 5;
  retstr->data[6] = seed + 6;
  retstr->data[7] = seed + 7;
  return retstr;
}


/* Function: call_ret_large_struct @ 0xD54 */
int call_ret_large_struct()
{
  return 215;
}


/* Function: func_a @ 0xD5C */
int __fastcall func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0xD64 */
int __fastcall func_b(int x)
{
  return 2 * x;
}


/* Function: ret_func_ptr @ 0xD6C */
func_ptr_t __fastcall ret_func_ptr(int selector)
{
  int (*v1)(int); // r1

  v1 = func_b;
  if ( !selector )
    return func_a;
  return v1;
}


/* Function: call_ret_func_ptr @ 0xD94 */
int call_ret_func_ptr()
{
  return 10;
}


/* Function: ret_opaque_handle @ 0xD9C */
void *__fastcall ret_opaque_handle(int type)
{
  int **v1; // r1

  v1 = ret_opaque_handle_handle1;
  if ( type )
    return &ret_opaque_handle_handle2;
  return v1;
}


/* Function: call_ret_opaque @ 0xDB8 */
int *call_ret_opaque()
{
  return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0xDC8 */
int __fastcall ret_complex_expr(int x, int y, int z)
{
  int v3; // r3

  v3 = z + 10;
  if ( x > y )
    return 2 * z;
  return v3;
}


/* Function: call_ret_complex_expr @ 0xDDC */
int call_ret_complex_expr()
{
  return 40;
}


/* Function: ret_multi_branch @ 0xDE4 */
int __fastcall ret_multi_branch(int op)
{
  int v1; // r1

  v1 = -1;
  if ( (unsigned int)op < 3 )
    return 10 * op + 10;
  return v1;
}


/* Function: call_ret_multi_branch @ 0xE00 */
int call_ret_multi_branch()
{
  return 60;
}


/* Function: ret_void @ 0xE08 */
void __fastcall ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0xE14 */
int call_ret_void()
{
  return 21;
}


/* Function: test_return_values @ 0xE1C */
void test_return_values()
{
  puts(asc_1818);
  printf(aRetL101D, 42);
  printf(aRetL102D, 20);
  printf(aRetL103D, 7);
  printf(aRetL104D, 215);
  printf(aRetL201D, 10);
  printf(aRetL202D, ret_opaque_handle_handle1[0]);
  printf(aRetL301D, 40);
  printf(aRetL302D, 60);
  printf(aRetL303D, 21);
}


/* Function: main @ 0xEF0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  puts(asc_1818);
  printf(aRetL101D, 42);
  printf(aRetL102D, 20);
  printf(aRetL103D, 7);
  printf(aRetL104D, 215);
  printf(aRetL201D, 10);
  printf(aRetL202D, ret_opaque_handle_handle1[0]);
  printf(aRetL301D, 40);
  printf(aRetL302D, 60);
  printf(aRetL303D, 21);
  return 0;
}


/* Function: __aeabi_drsub @ 0xFD4 */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0xFDC */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0xFE0 */
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


/* Function: __floatunsidf @ 0x128C */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x1128);
  return result;
}


/* Function: __floatsidf @ 0x12B0 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x1128);
  return result;
}


/* Function: __extendsfdf2 @ 0x12D8 */
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
      JUMPOUT(0x1128);
  }
  return result;
}


/* Function: __floatundidf @ 0x1320 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x1350);
  return a1;
}


/* Function: __floatdidf @ 0x1334 */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x10CC);
  return a1;
}


/* Function: __fixdfsi @ 0x1394 */
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


/* Function: .term_proc @ 0x13F0 */
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
