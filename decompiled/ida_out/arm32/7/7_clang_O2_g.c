/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/7/7_clang_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x48C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_498 @ 0x498 */
void sub_498()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x53C */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_578 + 18100), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x580 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x5A4 */
char *deregister_tm_clones()
{
  return &completed_0;
}


/* Function: register_tm_clones @ 0x5E8 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &completed_0;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x638 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x6A0 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_fake_branch @ 0x6A4 */
int __fastcall param_fake_branch(int x)
{
  return x;
}


/* Function: call_fake_branch @ 0x6A8 */
int call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x6B0 */
int __fastcall param_opaque_predicate(int x)
{
  int v1; // r4
  int v2; // r7
  int v3; // r6
  int v4; // r5
  int v5; // r1
  int result; // r0

  v1 = x;
  v2 = x + 1;
  v3 = 2 * x;
  v4 = -1;
  if ( x != -1 )
  {
    v5 = x + 1;
    do
    {
      v4 = v5;
      v5 = x % v5;
      x = v4;
    }
    while ( v5 );
  }
  result = 3 * v1 + 20;
  if ( !(((v3 | 1) + v1 * v1) ^ (v2 * v2) | v4 ^ 1) )
    return v3 + 10;
  return result;
}


/* Function: call_opaque_predicate @ 0x710 */
int call_opaque_predicate()
{
  int v0; // r1
  int v1; // r0
  int v2; // r4
  int result; // r0

  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  result = 35;
  if ( v2 == 1 )
    return 20;
  return result;
}


/* Function: param_instruction_substitution @ 0x744 */
int __fastcall param_instruction_substitution(int x)
{
  return (x & 0xF) + ((unsigned int)x >> 1) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x75C */
int call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x764 */
const char *__fastcall decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  int v7; // r0
  char *v8; // r1

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  LOBYTE(v7) = *buffer;
  if ( *buffer )
  {
    v8 = buffer + 1;
    do
    {
      *(v8 - 1) = v7 ^ key;
      v7 = (unsigned __int8)*v8++;
    }
    while ( v7 );
  }
  return buffer;
}


/* Function: param_string_encryption @ 0x7C0 */
int param_string_encryption()
{
  char *v0; // r0
  int v1; // r1
  int v2; // r4
  unsigned __int8 *v3; // r0
  char v5[40]; // [sp+0h] [bp-28h] BYREF

  v0 = strncpy(v5, param_string_encryption_encrypted, 0x20u);
  LOBYTE(v1) = v5[0];
  v2 = 0;
  v5[31] = 0;
  if ( v5[0] )
  {
    v3 = (unsigned __int8 *)(v0 + 1);
    do
    {
      *(v3 - 1) = v1 ^ 0x5A;
      v1 = *v3++;
    }
    while ( v1 );
    v2 = (unsigned __int8)v5[0];
  }
  return strlen(v5) + v2;
}


/* Function: call_string_encryption @ 0x82C */
int call_string_encryption()
{
  char *v0; // r0
  int v1; // r1
  int v2; // r4
  unsigned __int8 *v3; // r0
  char v5[40]; // [sp+0h] [bp-28h] BYREF

  v0 = strncpy(v5, param_string_encryption_encrypted, 0x20u);
  LOBYTE(v1) = v5[0];
  v2 = 0;
  v5[31] = 0;
  if ( v5[0] )
  {
    v3 = (unsigned __int8 *)(v0 + 1);
    do
    {
      *(v3 - 1) = v1 ^ 0x5A;
      v1 = *v3++;
    }
    while ( v1 );
    v2 = (unsigned __int8)v5[0];
  }
  return strlen(v5) + v2;
}


/* Function: param_tail_call_optimized @ 0x898 */
int __fastcall param_tail_call_optimized(int n, int acc)
{
  if ( n >= 1 )
    return acc
         + n
         + (n - 1) * (n - 1)
         - ((__int64)((unsigned int)(n - 1) * (unsigned __int64)(unsigned int)(n - 2)) >> 1);
  return acc;
}


/* Function: call_tail_call_optimized @ 0x8D4 */
int call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x8E0 */
int __fastcall param_non_tail_call(int n)
{
  if ( n >= 1 )
    return n + (n - 1) * (n - 1) - ((__int64)((unsigned int)(n - 1) * (unsigned __int64)(unsigned int)(n - 2)) >> 1);
  else
    return 0;
}


/* Function: call_non_tail_call @ 0x910 */
int call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x91C */
int __fastcall param_vectorized_loop(int *a, int *b, int *c, int n)
{
  int result; // r0
  int *v6; // lr
  int v7; // r4
  int v8; // r5
  int v9; // t1
  int v10; // t1
  int v11; // t1

  result = 0;
  if ( n >= 1 )
  {
    v6 = c;
    v7 = n;
    do
    {
      v9 = *a++;
      v8 = v9;
      v10 = *b++;
      --v7;
      *v6++ = v10 + v8;
    }
    while ( v7 );
    result = 0;
    do
    {
      v11 = *c++;
      --n;
      result += v11;
    }
    while ( n );
  }
  return result;
}


/* Function: call_vectorized_loop @ 0x974 */
int call_vectorized_loop()
{
  return 72;
}


/* Function: param_link_time_optimization @ 0x97C */
int __fastcall param_link_time_optimization(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x988 */
int call_link_time_optimization()
{
  return 20;
}


/* Function: div_zero_handler @ 0x990 */
void __fastcall __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x9B8 */
int __fastcall param_division_by_zero(int x)
{
  bool v2; // zf
  int result; // r0

  signal(8, (__sighandler_t)div_zero_handler);
  v2 = setjmp(&jmp_buffer) == 0;
  result = -1;
  if ( v2 )
    return 10 / x;
  return result;
}


/* Function: call_division_by_zero @ 0xA10 */
int call_division_by_zero()
{
  int v0; // r4
  int v1; // r5

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return v1 + v0;
}


/* Function: segv_handler @ 0xA44 */
void __fastcall __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0xA6C */
int __fastcall param_null_pointer_deref(int *p)
{
  bool v2; // zf
  int result; // r0

  signal(11, (__sighandler_t)segv_handler);
  v2 = setjmp(&segv_buffer) == 0;
  result = -1;
  if ( v2 )
    return *p;
  return result;
}


/* Function: call_null_pointer_deref @ 0xAB0 */
int call_null_pointer_deref()
{
  int v0; // r4
  int v1; // r5
  int p; // [sp+4h] [bp-14h] BYREF

  p = 42;
  v0 = param_null_pointer_deref(&p);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return v1 + v0;
}


/* Function: param_buffer_overflow_stack @ 0xAF4 */
int __fastcall param_buffer_overflow_stack(int x)
{
  return x;
}


/* Function: param_buffer_overflow_heap @ 0xAF8 */
int __fastcall param_buffer_overflow_heap(int x)
{
  return x;
}


/* Function: call_buffer_overflow @ 0xAFC */
int call_buffer_overflow()
{
  return 30;
}


/* Function: param_integer_overflow @ 0xB04 */
int __fastcall param_integer_overflow(int a, int b)
{
  bool v2; // cc
  int v3; // r3
  int v4; // r0
  int v5; // r2

  v2 = a < 1;
  v3 = b + a;
  if ( a >= 1 )
    v2 = b < 1;
  if ( v2 || (v5 = -1, v3 >= 0) )
  {
    v4 = b & a;
    v5 = v3;
    if ( v3 > 0 )
      v5 = -2;
    if ( v4 >= 0 )
      return v3;
  }
  return v5;
}


/* Function: call_integer_overflow @ 0xB44 */
int call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0xB50 */
int __fastcall param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0xB58 */
int call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0xB60 */
int param_implementation_defined()
{
  return 44;
}


/* Function: call_implementation_defined @ 0xB68 */
int call_implementation_defined()
{
  return 44;
}


/* Function: test_obf_opt_edge @ 0xB70 */
void test_obf_opt_edge()
{
  int v0; // r1
  int v1; // r0
  int v2; // r4
  int v3; // r1
  char *v4; // r0
  int v5; // r1
  int v6; // r4
  unsigned __int8 *v7; // r0
  size_t v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r4
  int v12; // r5
  int v13[7]; // [sp+0h] [bp-30h] BYREF
  char v14; // [sp+1Fh] [bp-11h]

  puts(asc_1251);
  printf(aObfL402D, 10);
  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  v3 = 35;
  if ( v2 == 1 )
    v3 = 20;
  printf(aObfL403D, v3);
  printf(aObfL404D, 225);
  v4 = strncpy((char *)v13, param_string_encryption_encrypted, 0x20u);
  LOBYTE(v5) = v13[0];
  v6 = 0;
  v14 = 0;
  if ( LOBYTE(v13[0]) )
  {
    v7 = (unsigned __int8 *)(v4 + 1);
    do
    {
      *(v7 - 1) = v5 ^ 0x5A;
      v5 = *v7++;
    }
    while ( v5 );
    v6 = LOBYTE(v13[0]);
  }
  v8 = strlen((const char *)v13);
  printf(aObfL405D, v8 + v6);
  printf(aOptL401, 500500);
  printf(aOptL401_0, 5050);
  printf(aOptL402, 72);
  printf(aOptL501LtoD, 20);
  v9 = param_division_by_zero(5);
  v10 = param_division_by_zero(0);
  signal(8, 0);
  printf(aEdgeL301D, v10 + v9);
  v13[0] = 42;
  v11 = param_null_pointer_deref(v13);
  v12 = param_null_pointer_deref(0);
  signal(11, 0);
  printf(aEdgeL302D, v12 + v11);
  printf(aEdgeL303D, 30);
  printf(aEdgeL304D, 2000000000);
  printf(aEdgeL401D, 10);
  printf(aEdgeL402D, 44);
}


/* Function: main @ 0xD80 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: __divsi3 @ 0xD94 */
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


/* Function: .divsi3_skip_div0_test @ 0xD9C */
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
        return ((int (__fastcall *)(_DWORD))((char *)&loc_DE4 + 12 * v5))(0);
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


/* Function: __aeabi_idivmod @ 0xFB4 */
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


/* Function: __aeabi_ldiv0 @ 0xFD4 */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0xFE4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_raise @ 0x123BC */

/* FAILED to decompile: __imp___libc_start_main @ 0x123C0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x123C4 */

/* FAILED to decompile: __imp_printf @ 0x123C8 */

/* FAILED to decompile: __imp_longjmp @ 0x123CC */

/* FAILED to decompile: __imp__setjmp @ 0x123D0 */

/* FAILED to decompile: __imp_signal @ 0x123D4 */

/* FAILED to decompile: __imp_puts @ 0x123D8 */

/* FAILED to decompile: __imp_strlen @ 0x123DC */

/* FAILED to decompile: __imp_strncpy @ 0x123E0 */

/* FAILED to decompile: __imp_abort @ 0x123E4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x123EC */

/* Total functions decompiled: 47, failed: 12 */
