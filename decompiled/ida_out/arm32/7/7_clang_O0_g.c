/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/7/7_clang_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x4AC */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_4B8 @ 0x4B8 */
void sub_4B8()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x568 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_5A4 + 18090), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x5AC */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x5D0 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x614 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_TMC_END__;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x664 */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x6CC */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_fake_branch @ 0x6D0 */
int __cdecl param_fake_branch(int x)
{
  int v2; // [sp+8h] [bp-8h]

  v2 = x;
  if ( x * x <= -1 )
    v2 = 2 * x - 559038737;
  strlen("test");
  return v2;
}


/* Function: call_fake_branch @ 0x758 */
int call_fake_branch()
{
  return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x770 */
int __cdecl param_opaque_predicate(int x)
{
  int v2; // [sp+8h] [bp-18h]
  int v3; // [sp+Ch] [bp-14h]
  int v4; // [sp+10h] [bp-10h]

  v4 = x;
  v3 = x + 1;
  while ( v3 )
  {
    v2 = v3;
    v3 = v4 % v3;
    v4 = v2;
  }
  if ( x * x + 2 * x - (x + 1) * (x + 1) == -1 && v4 == 1 )
    return 2 * x + 10;
  else
    return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x878 */
int call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x890 */
unsigned int __fastcall param_instruction_substitution(unsigned int x)
{
  return 6 * x + (x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0x900 */
unsigned int call_instruction_substitution()
{
  return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x918 */
char *__fastcall decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char *i; // [sp+4h] [bp-14h]

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  for ( i = buffer; *i; ++i )
    *i ^= key;
  return buffer;
}


/* Function: param_string_encryption @ 0x9AC */
size_t param_string_encryption()
{
  char buffer[32]; // [sp+8h] [bp-20h] BYREF

  decrypt_string(param_string_encryption_encrypted, buffer, 0x20u, 90);
  return strlen(buffer) + (unsigned __int8)buffer[0];
}


/* Function: call_string_encryption @ 0x9F4 */
size_t call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xA08 */
int __fastcall param_tail_call_optimized(int n, int acc)
{
  if ( n > 0 )
    return param_tail_call_optimized(n - 1, acc + n);
  else
    return acc;
}


/* Function: call_tail_call_optimized @ 0xA64 */
int call_tail_call_optimized()
{
  return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0xA80 */
int __fastcall param_non_tail_call(int n)
{
  if ( n > 0 )
    return n + param_non_tail_call(n - 1);
  else
    return 0;
}


/* Function: call_non_tail_call @ 0xAE0 */
int call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0xAF8 */
int __fastcall param_vectorized_loop(int *a, int *b, int *c, int n)
{
  int j; // [sp+0h] [bp-1Ch]
  int v6; // [sp+4h] [bp-18h]
  int i; // [sp+8h] [bp-14h]

  for ( i = 0; i < n; ++i )
    c[i] = a[i] + b[i];
  v6 = 0;
  for ( j = 0; j < n; ++j )
    v6 += c[j];
  return v6;
}


/* Function: call_vectorized_loop @ 0xBBC */
int call_vectorized_loop()
{
  int v1[8]; // [sp+0h] [bp-68h] BYREF
  int b[8]; // [sp+20h] [bp-48h] BYREF
  int a[10]; // [sp+40h] [bp-28h] BYREF

  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;
  a[5] = 6;
  a[6] = 7;
  a[7] = 8;
  b[0] = 8;
  b[1] = 7;
  b[2] = 6;
  b[3] = 5;
  b[4] = 4;
  b[5] = 3;
  b[6] = 2;
  b[7] = 1;
  memset(v1, 0, sizeof(v1));
  return param_vectorized_loop(a, b, v1, 8);
}


/* Function: param_link_time_optimization @ 0xC4C */
int __fastcall param_link_time_optimization(int x)
{
  return lto_target_func(x);
}


/* Function: lto_target_func @ 0xC70 */
int __fastcall lto_target_func(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0xC8C */
int call_link_time_optimization()
{
  return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0xCA4 */
void __fastcall __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0xCD8 */
int __fastcall param_division_by_zero(int x)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( setjmp(&jmp_buffer) )
    return -1;
  else
    return 10 / x;
}


/* Function: call_division_by_zero @ 0xD50 */
int call_division_by_zero()
{
  int v1; // [sp+8h] [bp-8h]
  int r1; // [sp+Ch] [bp-4h]

  r1 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return r1 + v1;
}


/* Function: segv_handler @ 0xD9C */
void __fastcall __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xDD0 */
int __fastcall param_null_pointer_deref(int *p)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( setjmp(&segv_buffer) )
    return -1;
  else
    return *p;
}


/* Function: call_null_pointer_deref @ 0xE44 */
int call_null_pointer_deref()
{
  int v1; // [sp+4h] [bp-Ch]
  int v2; // [sp+8h] [bp-8h]
  int valid; // [sp+Ch] [bp-4h] BYREF

  valid = 42;
  v2 = param_null_pointer_deref(&valid);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return v2 + v1;
}


/* Function: param_buffer_overflow_stack @ 0xE98 */
int __fastcall param_buffer_overflow_stack(int x)
{
  int i; // [sp+4h] [bp-14h]
  _BYTE v3[8]; // [sp+Ch] [bp-Ch]
  int v4; // [sp+14h] [bp-4h]

  v4 = x;
  for ( i = 0; i <= 16; ++i )
    v3[i] = 65;
  return v4;
}


/* Function: param_buffer_overflow_heap @ 0xF24 */
int __fastcall param_buffer_overflow_heap(int x)
{
  int i; // [sp+0h] [bp-10h]
  _BYTE *ptr; // [sp+4h] [bp-Ch]

  ptr = malloc(0x10u);
  if ( !ptr )
    return -2;
  for ( i = 0; i <= 32; ++i )
    ptr[i] = 66;
  free(ptr);
  return x;
}


/* Function: call_buffer_overflow @ 0xFC0 */
int call_buffer_overflow()
{
  int v1; // [sp+4h] [bp-4h]

  v1 = param_buffer_overflow_stack(10);
  return v1 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0xFFC */
int __fastcall param_integer_overflow(int a, int b)
{
  int v3; // [sp+Ch] [bp-10h]

  v3 = a + b;
  if ( a >= 1 && b >= 1 && v3 <= -1 )
    return -1;
  if ( a > -1 || b > -1 || v3 < 1 )
    return a + b;
  return -2;
}


/* Function: call_integer_overflow @ 0x10C8 */
int call_integer_overflow()
{
  int v1; // [sp+4h] [bp-4h]

  v1 = param_integer_overflow(1000000000, 1000000000);
  return v1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1110 */
int __fastcall param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1130 */
int call_undefined_behavior()
{
  return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1158 */
int param_implementation_defined()
{
  return 44;
}


/* Function: call_implementation_defined @ 0x1204 */
int call_implementation_defined()
{
  return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1218 */
void test_obf_opt_edge()
{
  int v0; // r0
  int v1; // r0
  unsigned int v2; // r0
  size_t v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0

  printf(asc_16A5);
  v0 = call_fake_branch();
  printf(aObfL402D, v0);
  v1 = call_opaque_predicate();
  printf(aObfL403D, v1);
  v2 = call_instruction_substitution();
  printf(aObfL404D, v2);
  v3 = call_string_encryption();
  printf(aObfL405D, v3);
  v4 = call_tail_call_optimized();
  printf(aOptL401, v4);
  v5 = call_non_tail_call();
  printf(aOptL401_0, v5);
  v6 = call_vectorized_loop();
  printf(aOptL402, v6);
  v7 = call_link_time_optimization();
  printf(aOptL501LtoD, v7);
  v8 = call_division_by_zero();
  printf(aEdgeL301D, v8);
  v9 = call_null_pointer_deref();
  printf(aEdgeL302D, v9);
  v10 = call_buffer_overflow();
  printf(aEdgeL303D, v10);
  v11 = call_integer_overflow();
  printf(aEdgeL304D, v11);
  v12 = call_undefined_behavior();
  printf(aEdgeL401D, v12);
  v13 = call_implementation_defined();
  printf(aEdgeL402D, v13);
}


/* Function: main @ 0x1388 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: __divsi3 @ 0x13B4 */
int __fastcall _divsi3(int a1, int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test();
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: .divsi3_skip_div0_test @ 0x13BC */
int __fastcall divsi3_skip_div0_test(int result, unsigned int a2)
{
  char v2; // nf
  int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r2
  _BOOL4 v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0

  v3 = result ^ a2;
  if ( v2 )
    a2 = -a2;
  if ( a2 == 1 )
  {
    if ( (v3 ^ result) < 0 )
      return -result;
  }
  else
  {
    v4 = result;
    if ( result < 0 )
      v4 = -result;
    if ( v4 <= a2 )
    {
      if ( v4 < a2 )
        result = 0;
      if ( v4 == a2 )
        return (v3 >> 31) | 1;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      v5 = 31 - (__clz(a2) - __clz(v4));
      if ( v5 )
      {
        return ((int (__fastcall *)(_DWORD))((char *)&loc_1404 + 12 * v5))(0);
      }
      else
      {
        v6 = v4 >= a2 << 31;
        if ( v4 >= a2 << 31 )
          v4 -= a2 << 31;
        v7 = v6 + (v4 >= a2 << 30) + v6;
        if ( v4 >= a2 << 30 )
          v4 -= a2 << 30;
        v8 = v7 + (v4 >= a2 << 29) + v7;
        if ( v4 >= a2 << 29 )
          v4 -= a2 << 29;
        v9 = v8 + (v4 >= a2 << 28) + v8;
        if ( v4 >= a2 << 28 )
          v4 -= a2 << 28;
        v10 = v9 + (v4 >= a2 << 27) + v9;
        if ( v4 >= a2 << 27 )
          v4 -= a2 << 27;
        v11 = v10 + (v4 >= a2 << 26) + v10;
        if ( v4 >= a2 << 26 )
          v4 -= a2 << 26;
        v12 = v11 + (v4 >= a2 << 25) + v11;
        if ( v4 >= a2 << 25 )
          v4 -= a2 << 25;
        v13 = v12 + (v4 >= a2 << 24) + v12;
        if ( v4 >= a2 << 24 )
          v4 -= a2 << 24;
        v14 = v13 + (v4 >= a2 << 23) + v13;
        if ( v4 >= a2 << 23 )
          v4 -= a2 << 23;
        v15 = v14 + (v4 >= a2 << 22) + v14;
        if ( v4 >= a2 << 22 )
          v4 -= a2 << 22;
        v16 = v15 + (v4 >= a2 << 21) + v15;
        if ( v4 >= a2 << 21 )
          v4 -= a2 << 21;
        v17 = v16 + (v4 >= a2 << 20) + v16;
        if ( v4 >= a2 << 20 )
          v4 -= a2 << 20;
        v18 = v17 + (v4 >= a2 << 19) + v17;
        if ( v4 >= a2 << 19 )
          v4 -= a2 << 19;
        v19 = v18 + (v4 >= a2 << 18) + v18;
        if ( v4 >= a2 << 18 )
          v4 -= a2 << 18;
        v20 = v19 + (v4 >= a2 << 17) + v19;
        if ( v4 >= a2 << 17 )
          v4 -= a2 << 17;
        v21 = v20 + (v4 >= a2 << 16) + v20;
        if ( v4 >= a2 << 16 )
          v4 -= a2 << 16;
        v22 = v21 + (v4 >= a2 << 15) + v21;
        if ( v4 >= a2 << 15 )
          v4 -= a2 << 15;
        v23 = v22 + (v4 >= a2 << 14) + v22;
        if ( v4 >= a2 << 14 )
          v4 -= a2 << 14;
        v24 = v23 + (v4 >= a2 << 13) + v23;
        if ( v4 >= a2 << 13 )
          v4 -= a2 << 13;
        v25 = v24 + (v4 >= a2 << 12) + v24;
        if ( v4 >= a2 << 12 )
          v4 -= a2 << 12;
        v26 = v25 + (v4 >= a2 << 11) + v25;
        if ( v4 >= a2 << 11 )
          v4 -= a2 << 11;
        v27 = v26 + (v4 >= a2 << 10) + v26;
        if ( v4 >= a2 << 10 )
          v4 -= a2 << 10;
        v28 = v27 + (v4 >= a2 << 9) + v27;
        if ( v4 >= a2 << 9 )
          v4 -= a2 << 9;
        v29 = v28 + (v4 >= a2 << 8) + v28;
        if ( v4 >= a2 << 8 )
          v4 -= a2 << 8;
        v30 = v29 + (v4 >= a2 << 7) + v29;
        if ( v4 >= a2 << 7 )
          v4 -= a2 << 7;
        v31 = v30 + (v4 >= a2 << 6) + v30;
        if ( v4 >= a2 << 6 )
          v4 -= a2 << 6;
        v32 = v31 + (v4 >= 32 * a2) + v31;
        if ( v4 >= 32 * a2 )
          v4 -= 32 * a2;
        v33 = v32 + (v4 >= 16 * a2) + v32;
        if ( v4 >= 16 * a2 )
          v4 -= 16 * a2;
        v34 = v33 + (v4 >= 8 * a2) + v33;
        if ( v4 >= 8 * a2 )
          v4 -= 8 * a2;
        v35 = v34 + (v4 >= 4 * a2) + v34;
        if ( v4 >= 4 * a2 )
          v4 -= 4 * a2;
        v36 = v35 + (v4 >= 2 * a2) + v35;
        if ( v4 >= 2 * a2 )
          v4 -= 2 * a2;
        result = v36 + (v4 >= a2) + v36;
        if ( v3 < 0 )
          return -result;
      }
    }
    else
    {
      result = v4 >> (31 - __clz(a2));
      if ( v3 < 0 )
        return -result;
    }
  }
  return result;
}


/* Function: __aeabi_idivmod @ 0x15D4 */
int __fastcall _aeabi_idivmod(int a1, unsigned int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test(a1, a2);
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: __aeabi_ldiv0 @ 0x15F4 */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0x1604 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_raise @ 0x123C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x123C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x123CC */

/* FAILED to decompile: __imp_printf @ 0x123D0 */

/* FAILED to decompile: __imp_longjmp @ 0x123D4 */

/* FAILED to decompile: __imp__setjmp @ 0x123D8 */

/* FAILED to decompile: __imp_free @ 0x123DC */

/* FAILED to decompile: __imp_signal @ 0x123E0 */

/* FAILED to decompile: __imp_malloc @ 0x123E4 */

/* FAILED to decompile: __imp_strlen @ 0x123E8 */

/* FAILED to decompile: __imp_strncpy @ 0x123EC */

/* FAILED to decompile: __imp_abort @ 0x123F0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x123F8 */

/* Total functions decompiled: 48, failed: 13 */
