/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/7/7_gcc_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x104E4 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_104F0 @ 0x104F0 */
void sub_104F0()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x105B8 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_105F4 + 18070), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x105FC */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10620 */
char *deregister_tm_clones()
{
  return &completed_0;
}


/* Function: register_tm_clones @ 0x1064C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &completed_0;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10684 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !completed_0 )
  {
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x106AC */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_fake_branch @ 0x106B0 */
void param_fake_branch()
{
  ;
}


/* Function: call_fake_branch @ 0x106E8 */
void call_fake_branch()
{
  param_fake_branch();
}


/* Function: param_opaque_predicate @ 0x10704 */
int __fastcall param_opaque_predicate(int a1)
{
  int v3; // [sp+8h] [bp-1Ch]
  int v4; // [sp+Ch] [bp-18h]
  int v5; // [sp+1Ch] [bp-8h]

  v3 = a1;
  v4 = a1 + 1;
  while ( v4 )
  {
    v5 = v4;
    v4 = v3 % v4;
    v3 = v5;
  }
  if ( a1 * a1 + 2 * a1 + 1 == (a1 + 1) * (a1 + 1) && v3 == 1 )
    return 2 * (a1 + 5);
  else
    return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x10814 */
int call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x10830 */
int __fastcall param_instruction_substitution(unsigned int a1)
{
  return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x108C0 */
int call_instruction_substitution()
{
  return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x108DC */
char *__fastcall decrypt_string(const char *a1, char *a2, size_t a3, char a4)
{
  char *i; // [sp+14h] [bp-8h]

  strncpy(a2, a1, a3);
  a2[a3 - 1] = 0;
  for ( i = a2; *i; ++i )
    *i ^= a4;
  return a2;
}


/* Function: param_string_encryption @ 0x10974 */
size_t param_string_encryption()
{
  char s[32]; // [sp+4h] [bp-28h] BYREF

  decrypt_string(encrypted_0, s, 0x20u, 90);
  return strlen(s) + (unsigned __int8)s[0];
}


/* Function: call_string_encryption @ 0x109EC */
size_t call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x10A04 */
int __fastcall param_tail_call_optimized(int a1, int a2)
{
  if ( a1 > 0 )
    return param_tail_call_optimized(a1 - 1, a2 + a1);
  else
    return a2;
}


/* Function: call_tail_call_optimized @ 0x10A58 */
int call_tail_call_optimized()
{
  return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x10A78 */
int __fastcall param_non_tail_call(int a1)
{
  if ( a1 > 0 )
    return param_non_tail_call(a1 - 1) + a1;
  else
    return 0;
}


/* Function: call_non_tail_call @ 0x10AC4 */
int call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x10AE0 */
int __fastcall param_vectorized_loop(int a1, int a2, int a3, int a4)
{
  int i; // [sp+14h] [bp-10h]
  int v6; // [sp+18h] [bp-Ch]
  int j; // [sp+1Ch] [bp-8h]

  for ( i = 0; i < a4; ++i )
    *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(a1 + 4 * i) + *(_DWORD *)(a2 + 4 * i);
  v6 = 0;
  for ( j = 0; j < a4; ++j )
    v6 += *(_DWORD *)(a3 + 4 * j);
  return v6;
}


/* Function: call_vectorized_loop @ 0x10BC8 */
int call_vectorized_loop()
{
  _DWORD v1[8]; // [sp+4h] [bp-68h] BYREF
  _DWORD v2[8]; // [sp+24h] [bp-48h] BYREF
  _BYTE s[32]; // [sp+44h] [bp-28h] BYREF

  v1[0] = 1;
  v1[1] = 2;
  v1[2] = 3;
  v1[3] = 4;
  v1[4] = 5;
  v1[5] = 6;
  v1[6] = 7;
  v1[7] = 8;
  v2[0] = 8;
  v2[1] = 7;
  v2[2] = 6;
  v2[3] = 5;
  v2[4] = 4;
  v2[5] = 3;
  v2[6] = 2;
  v2[7] = 1;
  memset(s, 0, sizeof(s));
  return param_vectorized_loop((int)v1, (int)v2, (int)s, 8);
}


/* Function: lto_target_func @ 0x10C7C */
int __fastcall lto_target_func(int a1)
{
  return 2 * (a1 + 5);
}


/* Function: param_link_time_optimization @ 0x10CA8 */
int __fastcall param_link_time_optimization(int a1)
{
  return lto_target_func(a1);
}


/* Function: call_link_time_optimization @ 0x10CD0 */
int call_link_time_optimization()
{
  return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x10CEC */
void __fastcall __noreturn div_zero_handler(int a1)
{
  div_zero_caught = 1;
  longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x10D1C */
int __fastcall param_division_by_zero(int a1)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( setjmp(jmp_buffer) )
    return -1;
  else
    return 10 / a1;
}


/* Function: call_division_by_zero @ 0x10D80 */
int call_division_by_zero()
{
  int v1; // [sp+0h] [bp-Ch]
  int v2; // [sp+4h] [bp-8h]

  v1 = param_division_by_zero(5);
  v2 = param_division_by_zero(0);
  signal(8, 0);
  return v1 + v2;
}


/* Function: segv_handler @ 0x10DC8 */
void __fastcall __noreturn segv_handler(int a1)
{
  segv_caught = 1;
  longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x10DF8 */
int __fastcall param_null_pointer_deref(int a1)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( setjmp(segv_buffer) )
    return -1;
  else
    return *(_DWORD *)a1;
}


/* Function: call_null_pointer_deref @ 0x10E54 */
int call_null_pointer_deref()
{
  int v1; // [sp+0h] [bp-14h] BYREF
  int v2; // [sp+4h] [bp-10h]
  int v3; // [sp+8h] [bp-Ch]

  v1 = 42;
  v2 = param_null_pointer_deref((int)&v1);
  v3 = param_null_pointer_deref(0);
  signal(11, 0);
  return v2 + v3;
}


/* Function: param_buffer_overflow_stack @ 0x10ED8 */
void param_buffer_overflow_stack()
{
  int i; // [sp+Ch] [bp-18h]
  _BYTE v1[8]; // [sp+14h] [bp-10h]

  for ( i = 0; i <= 16; ++i )
    v1[i] = 65;
}


/* Function: param_buffer_overflow_heap @ 0x10F84 */
int __fastcall param_buffer_overflow_heap(int a1)
{
  int i; // [sp+8h] [bp-Ch]
  _BYTE *ptr; // [sp+Ch] [bp-8h]

  ptr = malloc(0x10u);
  if ( !ptr )
    return -2;
  for ( i = 0; i <= 32; ++i )
    ptr[i] = 66;
  free(ptr);
  return a1;
}


/* Function: call_buffer_overflow @ 0x11008 */
int call_buffer_overflow()
{
  int v0; // r0

  param_buffer_overflow_stack();
  return v0 + param_buffer_overflow_heap(20);
}


/* Function: param_integer_overflow @ 0x11044 */
int __fastcall param_integer_overflow(int a1, int a2)
{
  int v4; // [sp+8h] [bp-14h]

  v4 = a1 + a2;
  if ( a1 > 0 && a2 > 0 && v4 < 0 )
    return -1;
  if ( a1 >= 0 || a2 >= 0 || v4 <= 0 )
    return a1 + a2;
  return -2;
}


/* Function: call_integer_overflow @ 0x110F4 */
int call_integer_overflow()
{
  int v1; // [sp+0h] [bp-Ch]

  v1 = param_integer_overflow(1000000000, 1000000000);
  return v1 + param_integer_overflow(-1, 1);
}


/* Function: param_undefined_behavior @ 0x1113C */
int __fastcall param_undefined_behavior(int a1)
{
  return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1116C */
int call_undefined_behavior()
{
  return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x11194 */
int param_implementation_defined()
{
  return 44;
}


/* Function: call_implementation_defined @ 0x1125C */
int call_implementation_defined()
{
  return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x11274 */
int test_obf_opt_edge()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
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

  puts(s);
  call_fake_branch();
  printf(format, v0);
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
  return printf(aEdgeL402D, v13);
}


/* Function: main @ 0x113E0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: __divsi3 @ 0x113F8 */
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


/* Function: .divsi3_skip_div0_test @ 0x11400 */
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
        return ((int (__fastcall *)(_DWORD))((char *)&loc_11448 + 12 * v5))(0);
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


/* Function: __aeabi_idivmod @ 0x11618 */
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


/* Function: __aeabi_ldiv0 @ 0x11638 */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0x11648 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_longjmp @ 0x22388 */

/* FAILED to decompile: __imp_puts @ 0x2238C */

/* FAILED to decompile: __imp_strlen @ 0x22390 */

/* FAILED to decompile: __imp_memset @ 0x22394 */

/* FAILED to decompile: __imp_raise @ 0x22398 */

/* FAILED to decompile: __imp_printf @ 0x2239C */

/* FAILED to decompile: __imp__setjmp @ 0x223A0 */

/* FAILED to decompile: __imp_free @ 0x223A4 */

/* FAILED to decompile: __imp_signal @ 0x223A8 */

/* FAILED to decompile: __imp_malloc @ 0x223AC */

/* FAILED to decompile: __imp_strncpy @ 0x223B0 */

/* FAILED to decompile: __imp_abort @ 0x223B4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x223B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x223BC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x223C0 */

/* Total functions decompiled: 48, failed: 15 */
