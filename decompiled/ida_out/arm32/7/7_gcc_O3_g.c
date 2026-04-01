/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/7/7_gcc_O3_g
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


/* Function: main @ 0x105AC */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: _start @ 0x105BC */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_105F8 + 18068), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x10600 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10624 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x10650 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_TMC_END__;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10688 */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x106B0 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: div_zero_handler @ 0x106B4 */
void __fastcall __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  _longjmp_chk(jmp_buffer);
}


/* Function: segv_handler @ 0x106CC */
void __fastcall __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  _longjmp_chk(segv_buffer);
}


/* Function: param_division_by_zero_0 @ 0x106E8 */
int __fastcall param_division_by_zero_0(int x)
{
  signal(8, div_zero_handler);
  if ( !setjmp(jmp_buffer) )
    __und(0);
  return -1;
}


/* Function: param_division_by_zero_1 @ 0x1071C */
int __fastcall param_division_by_zero_1(int x)
{
  signal(8, div_zero_handler);
  if ( setjmp(jmp_buffer) )
    return -1;
  else
    return 2;
}


/* Function: param_fake_branch @ 0x1074C */
int __fastcall param_fake_branch(int x)
{
  return x;
}


/* Function: call_fake_branch @ 0x10750 */
int call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x10758 */
int __fastcall param_opaque_predicate(int x)
{
  int v1; // r1
  int v2; // r5
  int v3; // r6
  bool v4; // r7
  int v5; // r4

  v1 = x + 1;
  v2 = x;
  v3 = 2 * x;
  v4 = x * x + 2 * x + 1 == (x + 1) * (x + 1);
  if ( x == -1 )
    return v3 + v2 + 20;
  do
  {
    v5 = v1;
    v1 = x % v1;
    x = v5;
  }
  while ( v1 );
  if ( v5 != 1 || !v4 )
    return v3 + v2 + 20;
  else
    return v3 + 10;
}


/* Function: call_opaque_predicate @ 0x107C8 */
int call_opaque_predicate()
{
  int v0; // r1
  int v1; // r0
  int v2; // r4

  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  if ( v2 == 1 )
    return 20;
  else
    return 35;
}


/* Function: param_instruction_substitution @ 0x107F8 */
int __fastcall param_instruction_substitution(int x)
{
  return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0x10818 */
int call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x10820 */
const char *__fastcall decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char v7; // r2
  char *v8; // r12
  int v9; // t1

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  v7 = *buffer;
  if ( *buffer )
  {
    v8 = buffer;
    do
    {
      *v8 = v7 ^ key;
      v9 = (unsigned __int8)*++v8;
      v7 = v9;
    }
    while ( v9 );
  }
  return buffer;
}


/* Function: param_string_encryption @ 0x10874 */
int param_string_encryption()
{
  int v0; // r4
  char *v1; // r3
  int v2; // t1
  char decrypted[32]; // [sp+4h] [bp-2Ch] BYREF

  strncpy(decrypted, &encrypted_0, 0x1Fu);
  v0 = (unsigned __int8)decrypted[0];
  decrypted[31] = 0;
  if ( decrypted[0] )
  {
    v1 = decrypted;
    do
    {
      *v1 = v0 ^ 0x5A;
      v2 = (unsigned __int8)*++v1;
      LOBYTE(v0) = v2;
    }
    while ( v2 );
    v0 = (unsigned __int8)decrypted[0];
  }
  return v0 + strlen(decrypted);
}


/* Function: call_string_encryption @ 0x10904 */
int call_string_encryption()
{
  int v0; // r4
  char *v1; // r3
  int v2; // t1
  char dest[32]; // [sp+4h] [bp-2Ch] BYREF

  strncpy(dest, &encrypted_0, 0x1Fu);
  v0 = (unsigned __int8)dest[0];
  dest[31] = 0;
  if ( dest[0] )
  {
    v1 = dest;
    do
    {
      *v1 = v0 ^ 0x5A;
      v2 = (unsigned __int8)*++v1;
      LOBYTE(v0) = v2;
    }
    while ( v2 );
    v0 = (unsigned __int8)dest[0];
  }
  return v0 + strlen(dest);
}


/* Function: param_tail_call_optimized @ 0x10994 */
int __fastcall param_tail_call_optimized(int n, int acc)
{
  bool v2; // cc
  int v3; // r3
  int result; // r0
  int v5; // r2

  v3 = n;
  v2 = n <= 0;
  result = acc;
  if ( !v2 )
  {
    do
    {
      v5 = v3--;
      result += v5;
    }
    while ( v3 );
  }
  return result;
}


/* Function: call_tail_call_optimized @ 0x109B4 */
int call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x109C0 */
int __fastcall param_non_tail_call(int n)
{
  bool v1; // cc
  int v2; // r3
  int result; // r0
  int v4; // r2

  v2 = n;
  v1 = n <= 0;
  result = 0;
  if ( !v1 )
  {
    do
    {
      v4 = v2--;
      result += v4;
    }
    while ( v2 );
  }
  return result;
}


/* Function: call_non_tail_call @ 0x109E0 */
int call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x109EC */
int __fastcall param_vectorized_loop(int *a, int *b, int *c, int n)
{
  int *v5; // r3
  int *v6; // lr
  int *v7; // r2
  int *v8; // r0
  int v9; // r6
  int *v10; // r1
  int *v11; // r5
  int v12; // r12
  int v13; // t1
  int v14; // t1
  int result; // r0
  int *v16; // r3
  int v17; // t1

  if ( n <= 0 )
    return 0;
  v5 = c - 1;
  v6 = c - 1;
  v7 = c - 1;
  v8 = a - 1;
  v9 = n;
  v10 = b - 1;
  v11 = &v8[n];
  do
  {
    v13 = v8[1];
    ++v8;
    v12 = v13;
    v14 = v10[1];
    ++v10;
    v7[1] = v12 + v14;
    ++v7;
  }
  while ( v8 != v11 );
  result = 0;
  v16 = &v5[v9];
  do
  {
    v17 = v6[1];
    ++v6;
    result += v17;
  }
  while ( v16 != v6 );
  return result;
}


/* Function: call_vectorized_loop @ 0x10A50 */
int call_vectorized_loop()
{
  return 72;
}


/* Function: param_link_time_optimization @ 0x10A58 */
int __fastcall param_link_time_optimization(int x)
{
  return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0x10A64 */
int call_link_time_optimization()
{
  return 20;
}


/* Function: param_division_by_zero @ 0x10A6C */
int __fastcall param_division_by_zero(int x)
{
  signal(8, div_zero_handler);
  if ( setjmp(jmp_buffer) )
    return -1;
  else
    return 10 / x;
}


/* Function: call_division_by_zero @ 0x10ABC */
int __fastcall call_division_by_zero(int a1)
{
  int v1; // r5
  int v2; // r4

  v1 = param_division_by_zero_1(a1);
  v2 = param_division_by_zero_0(v1);
  signal(8, 0);
  return v1 + v2;
}


/* Function: param_null_pointer_deref @ 0x10AE4 */
int __fastcall param_null_pointer_deref(int *p)
{
  signal(11, segv_handler);
  if ( setjmp(segv_buffer) )
    return -1;
  else
    return *p;
}


/* Function: call_null_pointer_deref @ 0x10B28 */
int call_null_pointer_deref()
{
  int v0; // r4
  int v1; // r5
  int valid; // [sp+0h] [bp-18h] BYREF

  valid = 42;
  v0 = param_null_pointer_deref(&valid);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x10B98 */
void param_buffer_overflow_stack()
{
  ;
}


/* Function: param_buffer_overflow_heap @ 0x10B9C */
int __fastcall param_buffer_overflow_heap(int x)
{
  void *v2; // r0

  v2 = malloc(0x10u);
  if ( !v2 )
    return -2;
  free(v2);
  return x;
}


/* Function: call_buffer_overflow @ 0x10BC8 */
int call_buffer_overflow()
{
  void *v0; // r0

  v0 = malloc(0x10u);
  if ( !v0 )
    return 8;
  free(v0);
  return 30;
}


/* Function: param_integer_overflow @ 0x10BF0 */
int __fastcall param_integer_overflow(int a, int b)
{
  bool v2; // cc
  int result; // r0

  v2 = a <= 0;
  if ( a > 0 )
    v2 = b <= 0;
  result = a + b;
  if ( !v2 )
    return result | (result >> 31);
  if ( ((result > 0) & ((b & (unsigned int)a) >> 31)) != 0 )
    return -2;
  return result;
}


/* Function: call_integer_overflow @ 0x10C28 */
int call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10C34 */
int __fastcall param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x10C3C */
int call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x10C44 */
int param_implementation_defined()
{
  return 44;
}


/* Function: call_implementation_defined @ 0x10C4C */
int call_implementation_defined()
{
  return 44;
}


/* Function: test_obf_opt_edge @ 0x10C54 */
void test_obf_opt_edge()
{
  int v0; // r5
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r4
  char *v5; // r3
  int v6; // t1
  size_t v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r4
  int v12; // r5
  int v13; // r4
  void *v14; // r0
  int v15; // r2
  int v16; // [sp+0h] [bp-38h] BYREF
  char dest[32]; // [sp+4h] [bp-34h] BYREF

  puts(s);
  _printf_chk(1, &unk_111B8, 10);
  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v1 % v0;
    v1 = v0;
    v0 = v2;
  }
  while ( v2 );
  if ( v1 == 1 )
    v3 = 20;
  else
    v3 = 35;
  _printf_chk(1, &unk_111D4, v3);
  _printf_chk(1, &unk_111F0, 225);
  strncpy(dest, &encrypted_0, 0x1Fu);
  v4 = (unsigned __int8)dest[0];
  dest[31] = 0;
  if ( dest[0] )
  {
    v5 = dest;
    do
    {
      *v5 = v4 ^ 0x5A;
      v6 = (unsigned __int8)*++v5;
      LOBYTE(v4) = v6;
    }
    while ( v6 );
    v4 = (unsigned __int8)dest[0];
  }
  v7 = strlen(dest);
  _printf_chk(1, &unk_11210, v4 + v7);
  _printf_chk(1, &unk_1122C, 500500);
  _printf_chk(1, &unk_11258, 5050);
  v8 = call_vectorized_loop();
  _printf_chk(1, &unk_11280, v8);
  v9 = _printf_chk(1, &unk_112A8, 20);
  v10 = param_division_by_zero_1(v9);
  v11 = param_division_by_zero_0(v10);
  signal(8, 0);
  _printf_chk(1, &unk_112C8, v10 + v11);
  v16 = 42;
  v12 = param_null_pointer_deref(&v16);
  v13 = param_null_pointer_deref(0);
  signal(11, 0);
  _printf_chk(1, &unk_112E4, v12 + v13);
  v14 = malloc(0x10u);
  if ( v14 )
  {
    free(v14);
    v15 = 30;
  }
  else
  {
    v15 = 8;
  }
  _printf_chk(1, &unk_11304, v15);
  _printf_chk(1, &unk_11324, 2000000000);
  _printf_chk(1, &unk_11358, 10);
  _printf_chk(1, &unk_11378, 44);
}


/* Function: __divsi3 @ 0x10E9C */
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


/* Function: .divsi3_skip_div0_test @ 0x10EA4 */
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
        return ((int (__fastcall *)(_DWORD))((char *)&loc_10EEC + 12 * v5))(0);
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


/* Function: __aeabi_idivmod @ 0x110BC */
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


/* Function: __aeabi_ldiv0 @ 0x110DC */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0x110EC */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x2238C */

/* FAILED to decompile: __imp_strlen @ 0x22390 */

/* FAILED to decompile: __imp___longjmp_chk @ 0x22394 */

/* FAILED to decompile: __imp_raise @ 0x22398 */

/* FAILED to decompile: __imp__setjmp @ 0x2239C */

/* FAILED to decompile: __imp_free @ 0x223A0 */

/* FAILED to decompile: __imp_signal @ 0x223A4 */

/* FAILED to decompile: __imp_malloc @ 0x223A8 */

/* FAILED to decompile: __imp_strncpy @ 0x223AC */

/* FAILED to decompile: __imp___printf_chk @ 0x223B0 */

/* FAILED to decompile: __imp_abort @ 0x223B4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x223B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x223BC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x223C0 */

/* Total functions decompiled: 49, failed: 14 */
