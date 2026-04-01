/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-23/5-23_gcc_O2_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x1042C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10438 @ 0x10438 */
void sub_10438()
{
  JUMPOUT(0);
}


/* Function: main @ 0x104C4 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v3; // r0

  v3 = test_preprocessing_features(argc, argv, envp);
  test_asm_features(v3);
  return 0;
}


/* Function: _start @ 0x104D8 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_10514 + 19145), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x1051C */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10540 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1056C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x105A4 */
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


/* Function: frame_dummy @ 0x105CC */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x105D0 */
int __fastcall param_macro_constants(int a1)
{
  if ( a1 > 1024 )
    return 64;
  else
    return 512;
}


/* Function: call_macro_constants @ 0x105E0 */
int call_macro_constants()
{
  return 64;
}


/* Function: param_macro_functions @ 0x105E8 */
int __fastcall param_macro_functions(int a1, int a2)
{
  if ( a1 >= a2 )
    a2 = a1;
  return a2 + a1 * a1;
}


/* Function: call_macro_functions @ 0x10600 */
int call_macro_functions()
{
  return 30;
}


/* Function: param_conditional_compile @ 0x10608 */
int __fastcall param_conditional_compile(int a1)
{
  return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x10614 */
int call_conditional_compile()
{
  return 32;
}


/* Function: param_multi_branch_compile @ 0x1061C */
int __fastcall param_multi_branch_compile(int a1)
{
  return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x1062C */
int call_multi_branch_compile()
{
  return 57122;
}


/* Function: param_macro_recursion @ 0x10638 */
int __fastcall param_macro_recursion(int a1)
{
  return a1 + 16;
}


/* Function: call_macro_recursion @ 0x10640 */
int call_macro_recursion()
{
  return 116;
}


/* Function: param_stringize @ 0x10648 */
int param_stringize()
{
  return 19;
}


/* Function: call_stringize @ 0x10650 */
int call_stringize()
{
  return 19;
}


/* Function: my_func @ 0x10658 */
int __fastcall my_func(int a1)
{
  return 10 * a1;
}


/* Function: param_token_paste @ 0x10664 */
int __fastcall param_token_paste(int a1)
{
  return a1 + 5 + 10 * a1;
}


/* Function: call_token_paste @ 0x10674 */
int call_token_paste()
{
  return 60;
}


/* Function: param_variadic_macro @ 0x1067C */
int __fastcall param_variadic_macro(int a1, int a2, int a3)
{
  _printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
  return a1 + 50;
}


/* Function: call_variadic_macro @ 0x106B0 */
int call_variadic_macro()
{
  _printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
  return 60;
}


/* Function: param_macro_override @ 0x106E4 */
int __fastcall param_macro_override(int a1)
{
  return 3 * a1 + 1;
}


/* Function: call_macro_override @ 0x106F0 */
int call_macro_override()
{
  return 16;
}


/* Function: param_include_guard @ 0x106F8 */
int param_include_guard()
{
  return 500;
}


/* Function: call_include_guard @ 0x10700 */
int call_include_guard()
{
  return 500;
}


/* Function: param_builtin_macros @ 0x10708 */
int __fastcall param_builtin_macros(int a1)
{
  _printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:01:06");
  return a1 + 282;
}


/* Function: call_builtin_macros @ 0x10768 */
int call_builtin_macros()
{
  _printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:01:06");
  return 382;
}


/* Function: test_preprocessing_features @ 0x107C4 */
int test_preprocessing_features()
{
  _printf_chk(1, asc_11EC0);
  _printf_chk(1, aPpL201D, 64);
  _printf_chk(1, aPpL202D, 30);
  _printf_chk(1, aPpL203D, 32);
  _printf_chk(1, aPpL204D, 57122);
  _printf_chk(1, aPpL301D, 116);
  _printf_chk(1, aPpL302D, 19);
  _printf_chk(1, aPpL303D, 60);
  _printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
  _printf_chk(1, aPpL304D, 60);
  _printf_chk(1, aPpL305D, 16);
  _printf_chk(1, aPpL306D, 500);
  _printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:01:06");
  return _printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x10928 */
int __fastcall param_asm_basic(int a1)
{
  return a1 + 10;
}


/* Function: call_asm_basic @ 0x10930 */
int call_asm_basic()
{
  return 15;
}


/* Function: param_asm_clobber @ 0x10938 */
int __fastcall param_asm_clobber(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r1
  int v6; // t1

  result = 0;
  if ( a2 > 0 )
  {
    v4 = a1 - 4;
    v5 = v4 + 4 * a2;
    do
    {
      v6 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      result += v6;
    }
    while ( v4 != v5 );
  }
  return result;
}


/* Function: call_asm_clobber @ 0x10964 */
int call_asm_clobber()
{
  int v0; // r12
  int *v1; // r3
  int v2; // t1
  _DWORD v4[5]; // [sp+0h] [bp-20h] BYREF
  int v5; // [sp+14h] [bp-Ch] BYREF

  v0 = 0;
  v4[0] = 1;
  v4[1] = 2;
  v4[2] = 3;
  v4[3] = 4;
  v1 = v4;
  v4[4] = 5;
  do
  {
    v2 = *v1++;
    v0 += v2;
  }
  while ( v1 != &v5 );
  return v0;
}


/* Function: param_asm_multi_insn @ 0x109E0 */
// attributes: thunk
void *param_asm_multi_insn(void *dest, const void *src, size_t n)
{
  return memcpy(dest, src, n);
}


/* Function: call_asm_multi_insn @ 0x109E4 */
int call_asm_multi_insn()
{
  return 42;
}


/* Function: param_asm_simd @ 0x109EC */
int __fastcall param_asm_simd(int a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r1
  int v5; // r2
  int v6; // r0
  int v7; // r3
  int v8; // t1
  int v9; // t1

  v3 = a1 - 4;
  v4 = a2 - 4;
  v5 = a3 - 4;
  v6 = a1 + 12;
  do
  {
    v8 = *(_DWORD *)(v3 + 4);
    v3 += 4;
    v7 = v8;
    v9 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    *(_DWORD *)(v5 + 4) = v7 + v9;
    v5 += 4;
  }
  while ( v3 != v6 );
  return 0;
}


/* Function: param_simd_intrinsics @ 0x10A20 */
int __fastcall param_simd_intrinsics(int a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r1
  int v5; // r2
  int v6; // r0
  int v7; // r3
  int v8; // t1
  int v9; // t1

  v3 = a1 - 4;
  v4 = a2 - 4;
  v5 = a3 - 4;
  v6 = a1 + 12;
  do
  {
    v8 = *(_DWORD *)(v3 + 4);
    v3 += 4;
    v7 = v8;
    v9 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    *(_DWORD *)(v5 + 4) = v7 + v9;
    v5 += 4;
  }
  while ( v3 != v6 );
  return 0;
}


/* Function: call_asm_simd @ 0x10A54 */
int call_asm_simd()
{
  int *v0; // r5
  int *v1; // r12
  _DWORD *v2; // r4
  int v3; // r3
  int v4; // t1
  int v5; // t1
  _DWORD v7[4]; // [sp+4h] [bp-44h] BYREF
  _DWORD v8[4]; // [sp+14h] [bp-34h] BYREF
  _DWORD v9[4]; // [sp+24h] [bp-24h] BYREF

  v0 = v8;
  v1 = v7;
  v2 = v9;
  v7[0] = 1;
  v7[1] = 2;
  v7[2] = 3;
  v7[3] = 4;
  v8[0] = 5;
  v8[1] = 6;
  v8[2] = 7;
  v8[3] = 8;
  do
  {
    v4 = *v1++;
    v3 = v4;
    v5 = *v0++;
    *v2++ = v3 + v5;
  }
  while ( v1 != v8 );
  return v9[0] + v9[1] + v9[2] + v9[3];
}


/* Function: param_asm_atomic @ 0x10AEC */
int __fastcall param_asm_atomic(int a1, int a2)
{
  return _sync_fetch_and_add_4() + a2;
}


/* Function: param_atomic_c11 @ 0x10B00 */
int __fastcall param_atomic_c11(int a1, int a2)
{
  return _sync_fetch_and_add_4() + a2;
}


/* Function: call_asm_atomic @ 0x10B14 */
int call_asm_atomic()
{
  int v0; // r0
  int v2; // [sp+0h] [bp-10h] BYREF

  v2 = 10;
  v0 = _sync_fetch_and_add_4(&v2, 5, 0);
  return v0 + 5 + v2;
}


/* Function: param_dynamic_code @ 0x10B74 */
int __fastcall param_dynamic_code(int a1)
{
  size_t v2; // r5
  void *v3; // r0
  int v4; // r4

  v2 = sysconf(30);
  v3 = mmap(0, v2, 7, 34, -1, 0);
  if ( v3 == (void *)-1 )
    return -1;
  v4 = a1 + 5;
  munmap(v3, v2);
  return v4;
}


/* Function: param_memory_protection @ 0x10BD4 */
int param_memory_protection()
{
  size_t v0; // r5
  int *v1; // r0
  int *v2; // r4
  int v3; // r6

  v0 = sysconf(30);
  v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
  v2 = v1;
  if ( v1 == (int *)-1 )
    return -1;
  *v1 = 42;
  if ( mprotect(v1, v0, 1) )
  {
    munmap(v2, v0);
    return -2;
  }
  else
  {
    v3 = *v2;
    if ( mprotect(v2, v0, 3) )
    {
      munmap(v2, v0);
      return -3;
    }
    else
    {
      *v2 = 100;
      munmap(v2, v0);
    }
  }
  return v3;
}


/* Function: param_clobber_importance @ 0x10CA0 */
int __fastcall param_clobber_importance(int a1, int a2)
{
  return 2 * (a1 + a2);
}


/* Function: call_asm_privileged @ 0x10CAC */
int call_asm_privileged()
{
  size_t v0; // r5
  void *v1; // r0

  v0 = sysconf(30);
  v1 = mmap(0, v0, 7, 34, -1, 0);
  if ( v1 == (void *)-1 )
  {
    param_memory_protection();
    return -1;
  }
  else
  {
    munmap(v1, v0);
    if ( param_memory_protection() == 42 )
      return 77;
    else
      return 15;
  }
}


/* Function: param_memory_clobber_demo @ 0x10D18 */
int param_memory_clobber_demo()
{
  return global_var + 50;
}


/* Function: test_asm_features @ 0x10D2C */
int __fastcall test_asm_features(int a1, int a2, int a3)
{
  int v3; // r12
  int *v4; // r3
  int v5; // t1
  int v6; // r0
  int v7; // r2
  int v8; // r0
  size_t v9; // r5
  void *v10; // r0
  int v11; // r2
  int v13; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v14[5]; // [sp+10h] [bp-28h] BYREF
  int v15; // [sp+24h] [bp-14h] BYREF

  _printf_chk(1, asc_12040, a3, 0);
  _printf_chk(1, aAsmL401D, 15);
  v3 = 0;
  v14[0] = 1;
  v14[1] = 2;
  v14[2] = 3;
  v14[3] = 4;
  v4 = v14;
  v14[4] = 5;
  do
  {
    v5 = *v4++;
    v3 += v5;
  }
  while ( v4 != &v15 );
  _printf_chk(1, aAsmL402D, v3);
  _printf_chk(1, aAsmL403D, 42);
  v6 = call_asm_simd();
  _printf_chk(1, aAsmL404D, v6);
  v13 = 10;
  v8 = _sync_fetch_and_add_4(&v13, 5, v7);
  _printf_chk(1, aAsmL405D, v8 + 5 + v13);
  v9 = sysconf(30);
  v10 = mmap(0, v9, 7, 34, -1, 0);
  if ( v10 == (void *)-1 )
  {
    param_memory_protection();
    v11 = -1;
  }
  else
  {
    munmap(v10, v9);
    if ( param_memory_protection() == 42 )
      v11 = 77;
    else
      v11 = 15;
  }
  return _printf_chk(1, aAsmL406D, v11, 0);
}


/* Function: __sync_fetch_and_add_4 @ 0x10EA8 */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x10EE0 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x10F18 */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x10F50 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x10F88 */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x10FC0 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x10FFC */
int __fastcall _sync_fetch_and_add_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x1105C */
int __fastcall _sync_fetch_and_sub_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x110BC */
int __fastcall _sync_fetch_and_or_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x1111C */
int __fastcall _sync_fetch_and_and_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x1117C */
int __fastcall _sync_fetch_and_xor_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x111DC */
int __fastcall _sync_fetch_and_nand_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11240 */
int __fastcall _sync_fetch_and_add_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x1129C */
int __fastcall _sync_fetch_and_sub_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x112F8 */
int __fastcall _sync_fetch_and_or_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11354 */
int __fastcall _sync_fetch_and_and_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x113B0 */
int __fastcall _sync_fetch_and_xor_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x1140C */
int __fastcall _sync_fetch_and_nand_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x1146C */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x114A4 */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x114DC */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11514 */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x1154C */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x11584 */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x115C0 */
int __fastcall _sync_add_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x11628 */
int __fastcall _sync_sub_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x11690 */
int __fastcall _sync_or_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x116F8 */
int __fastcall _sync_and_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x11760 */
int __fastcall _sync_xor_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x117C8 */
int __fastcall _sync_nand_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x11834 */
int __fastcall _sync_add_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x11898 */
int __fastcall _sync_sub_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x118FC */
int __fastcall _sync_or_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x11960 */
int __fastcall _sync_and_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x119C4 */
int __fastcall _sync_xor_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x11A28 */
int __fastcall _sync_nand_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x11A90 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x11AE0 */
int __fastcall _sync_val_compare_and_swap_2(int a1, int a2, int a3)
{
  char v4; // r5
  int v5; // r10
  _DWORD *v6; // r4
  int v7; // r9
  int v8; // r7
  unsigned int v9; // r3

  v4 = (8 * a1) & 0x18;
  v5 = 0xFFFF << v4;
  v6 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v7 = a3 << v4;
  v8 = (unsigned __int16)a2;
  while ( 1 )
  {
    v9 = ((unsigned int)v5 & *v6) >> v4;
    if ( v9 != v8 )
      break;
    if ( !MEMORY[0xFFFF0FC0](*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
      return a2;
  }
  return (__int16)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x11B58 */
int __fastcall _sync_val_compare_and_swap_1(int a1, int a2, int a3)
{
  char v4; // r5
  _DWORD *v5; // r4
  int v6; // r7
  int v7; // r9
  int v8; // r10
  unsigned int v9; // r3

  v4 = (8 * a1) & 0x18;
  v5 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v6 = 255 << v4;
  v7 = a3 << v4;
  v8 = (unsigned __int8)a2;
  while ( 1 )
  {
    v9 = ((unsigned int)v6 & *v5) >> v4;
    if ( v9 != v8 )
      break;
    if ( !MEMORY[0xFFFF0FC0](*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
      return a2;
  }
  return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x11BCC */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x11BF8 */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x11C14 */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x11C3C */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x11C74 */
int __fastcall _sync_lock_test_and_set_2(int a1, int a2)
{
  char v2; // r9
  unsigned int *v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r4

  v2 = (8 * a1) & 0x18;
  v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
  v4 = 0xFFFF << v2;
  v5 = a2 << v2;
  do
    v6 = *v3;
  while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
  return (__int16)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x11CD4 */
int __fastcall _sync_lock_test_and_set_1(int a1, int a2)
{
  char v2; // r9
  unsigned int *v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r4

  v2 = (8 * a1) & 0x18;
  v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
  v4 = 255 << v2;
  v5 = a2 << v2;
  do
    v6 = *v3;
  while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
  return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x11D30 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x11D54 */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x11D74 */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x11D94 */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: .term_proc @ 0x11DB4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_sysconf @ 0x23050 */

/* FAILED to decompile: __imp_mmap @ 0x23054 */

/* FAILED to decompile: __imp___printf_chk @ 0x23058 */

/* FAILED to decompile: __imp_abort @ 0x2305C */

/* FAILED to decompile: __imp___libc_start_main @ 0x23060 */

/* FAILED to decompile: __imp_mprotect @ 0x23064 */

/* FAILED to decompile: __imp_memcpy @ 0x23068 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2306C */

/* FAILED to decompile: __imp_munmap @ 0x23070 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23074 */

/* Total functions decompiled: 101, failed: 10 */
