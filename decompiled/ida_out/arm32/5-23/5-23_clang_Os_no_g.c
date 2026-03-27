/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-23/5-23_clang_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x4E0 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_4EC @ 0x4EC */
void sub_4EC()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x590 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_5CC + 18079), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x5D4 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x5F8 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x63C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x68C */
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


/* Function: frame_dummy @ 0x6F4 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x6F8 */
int __fastcall param_macro_constants(int a1)
{
  int v1; // r1

  v1 = 512;
  if ( a1 > 1024 )
    return 64;
  return v1;
}


/* Function: call_macro_constants @ 0x70C */
int call_macro_constants()
{
  return 64;
}


/* Function: param_macro_functions @ 0x714 */
int __fastcall param_macro_functions(int a1, int a2)
{
  if ( a1 > a2 )
    a2 = a1;
  return a2 + a1 * a1;
}


/* Function: call_macro_functions @ 0x728 */
int call_macro_functions()
{
  return 30;
}


/* Function: param_conditional_compile @ 0x730 */
int __fastcall param_conditional_compile(int a1)
{
  return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x73C */
int call_conditional_compile()
{
  return 32;
}


/* Function: param_multi_branch_compile @ 0x744 */
int __fastcall param_multi_branch_compile(int a1)
{
  return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x754 */
int call_multi_branch_compile()
{
  return 57122;
}


/* Function: param_macro_recursion @ 0x760 */
int __fastcall param_macro_recursion(int a1)
{
  return a1 + 16;
}


/* Function: call_macro_recursion @ 0x768 */
int call_macro_recursion()
{
  return 116;
}


/* Function: param_stringize @ 0x770 */
int param_stringize()
{
  return 19;
}


/* Function: call_stringize @ 0x778 */
int call_stringize()
{
  return 19;
}


/* Function: my_func @ 0x780 */
int __fastcall my_func(int a1)
{
  return 10 * a1;
}


/* Function: param_token_paste @ 0x78C */
int __fastcall param_token_paste(int a1)
{
  return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x79C */
int call_token_paste()
{
  return 60;
}


/* Function: param_variadic_macro @ 0x7A4 */
int __fastcall param_variadic_macro(int a1, int a2, int a3)
{
  printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
  return a1 + 50;
}


/* Function: call_variadic_macro @ 0x7D4 */
int call_variadic_macro()
{
  printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
  return 60;
}


/* Function: param_macro_override @ 0x800 */
int __fastcall param_macro_override(int a1)
{
  return 3 * a1 + 1;
}


/* Function: call_macro_override @ 0x80C */
int call_macro_override()
{
  return 16;
}


/* Function: param_include_guard @ 0x814 */
int param_include_guard()
{
  return 500;
}


/* Function: call_include_guard @ 0x81C */
int call_include_guard()
{
  return 500;
}


/* Function: param_builtin_macros @ 0x824 */
int __fastcall param_builtin_macros(int a1)
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:01:24");
  return a1 + 282;
}


/* Function: call_builtin_macros @ 0x894 */
int call_builtin_macros()
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:01:24");
  return 382;
}


/* Function: test_preprocessing_features @ 0x900 */
int test_preprocessing_features()
{
  puts(asc_114F);
  printf(aPpL201D, 64);
  printf(aPpL202D, 30);
  printf(aPpL203D, 32);
  printf(aPpL204D, 57122);
  printf(aPpL301D, 116);
  printf(aPpL302D, 19);
  printf(aPpL303D, 60);
  printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
  printf(aPpL304D, 60);
  printf(aPpL305D, 16);
  printf(aPpL306D, 500);
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:01:24");
  return printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xA70 */
int __fastcall param_asm_basic(int a1)
{
  return a1 + 10;
}


/* Function: call_asm_basic @ 0xA78 */
int call_asm_basic()
{
  return 15;
}


/* Function: param_asm_clobber @ 0xA80 */
int __fastcall param_asm_clobber(int *a1, int a2)
{
  int result; // r0
  int v4; // t1

  if ( a2 < 1 )
    return 0;
  result = 0;
  do
  {
    v4 = *a1++;
    --a2;
    result += v4;
  }
  while ( a2 );
  return result;
}


/* Function: call_asm_clobber @ 0xAAC */
int call_asm_clobber()
{
  return 15;
}


/* Function: param_asm_multi_insn @ 0xAB4 */
// attributes: thunk
void *param_asm_multi_insn(void *dest, const void *src, size_t n)
{
  return memcpy(dest, src, n);
}


/* Function: call_asm_multi_insn @ 0xAB8 */
int call_asm_multi_insn()
{
  return 42;
}


/* Function: param_asm_simd @ 0xAC0 */
int __fastcall param_asm_simd(int a1, int a2, int a3)
{
  int i; // lr

  for ( i = 0; i != 4; ++i )
    *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(a2 + 4 * i) + *(_DWORD *)(a1 + 4 * i);
  return 0;
}


/* Function: param_simd_intrinsics @ 0xAF0 */
int __fastcall param_simd_intrinsics(int a1, int a2, int a3)
{
  int i; // lr

  for ( i = 0; i != 4; ++i )
    *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(a2 + 4 * i) + *(_DWORD *)(a1 + 4 * i);
  return 0;
}


/* Function: call_asm_simd @ 0xB20 */
int call_asm_simd()
{
  int i; // r0
  _DWORD v2[6]; // [sp+0h] [bp-18h]

  for ( i = 0; i != 4; ++i )
    v2[i] = dword_11B0[i] + dword_11A0[i];
  return v2[1] + v2[0] + v2[2] + v2[3];
}


/* Function: param_asm_atomic @ 0xB80 */
int __fastcall param_asm_atomic(int a1, int a2)
{
  return _atomic_fetch_add_4(a1, a2, 5) + a2;
}


/* Function: param_atomic_c11 @ 0xB9C */
int __fastcall param_atomic_c11(int a1, int a2)
{
  return _atomic_fetch_add_4(a1, a2, 5) + a2;
}


/* Function: call_asm_atomic @ 0xBB8 */
int call_asm_atomic()
{
  int add_4; // r0
  int v2; // [sp+4h] [bp-Ch] BYREF

  v2 = 10;
  add_4 = _atomic_fetch_add_4(&v2, 5, 5);
  return add_4 + v2 + 5;
}


/* Function: param_dynamic_code @ 0xBF0 */
int __fastcall param_dynamic_code(int a1)
{
  size_t v2; // r5
  int v3; // r6
  void *v4; // r0

  v2 = sysconf(30);
  v3 = -1;
  v4 = mmap(0, v2, 7, 34, -1, 0);
  if ( v4 != (void *)-1 )
  {
    munmap(v4, v2);
    return a1 + 5;
  }
  return v3;
}


/* Function: param_memory_protection @ 0xC50 */
int param_memory_protection()
{
  size_t v0; // r4
  int v1; // r6
  int *v2; // r0
  int *v3; // r5
  int v4; // r7

  v0 = sysconf(30);
  v1 = -1;
  v2 = (int *)mmap(0, v0, 3, 34, -1, 0);
  if ( v2 != (int *)-1 )
  {
    v3 = v2;
    *v2 = 42;
    v1 = -2;
    if ( !mprotect(v2, v0, 1) )
    {
      v4 = *v3;
      v1 = -3;
      if ( !mprotect(v3, v0, 3) )
      {
        v1 = v4;
        *v3 = 100;
      }
    }
    munmap(v3, v0);
  }
  return v1;
}


/* Function: param_clobber_importance @ 0xCFC */
int __fastcall param_clobber_importance(int a1, int a2)
{
  return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0xD08 */
int call_asm_privileged()
{
  int v0; // r4

  v0 = param_dynamic_code(10);
  if ( !(v0 ^ 0xF | param_memory_protection() ^ 0x2A) )
    return 77;
  return v0;
}


/* Function: param_memory_clobber_demo @ 0xD38 */
char *param_memory_clobber_demo()
{
  return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0xD4C */
int test_asm_features()
{
  int v0; // r0
  int add_4; // r0
  int v2; // r4
  int v4; // [sp+4h] [bp-14h] BYREF

  puts(asc_1176);
  printf(aAsmL401D, 15);
  printf(aAsmL402D, 15);
  printf(aAsmL403D, 42);
  v0 = call_asm_simd();
  printf(aAsmL404D, v0);
  v4 = 10;
  add_4 = _atomic_fetch_add_4(&v4, 5, 5);
  printf(aAsmL405D, add_4 + v4 + 5);
  v2 = param_dynamic_code(10);
  if ( !(v2 ^ 0xF | param_memory_protection() ^ 0x2A) )
    v2 = 77;
  return printf(aAsmL406D, v2);
}


/* Function: main @ 0xE2C */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: .term_proc @ 0xE44 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x12088 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1208C */

/* FAILED to decompile: __imp_printf @ 0x12090 */

/* FAILED to decompile: __imp_mprotect @ 0x12094 */

/* FAILED to decompile: __imp_memcpy @ 0x12098 */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x1209C */

/* FAILED to decompile: __imp_sysconf @ 0x120A0 */

/* FAILED to decompile: __imp_puts @ 0x120A4 */

/* FAILED to decompile: __imp_mmap @ 0x120A8 */

/* FAILED to decompile: __imp_munmap @ 0x120AC */

/* FAILED to decompile: __imp_abort @ 0x120B0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120B8 */

/* Total functions decompiled: 52, failed: 12 */
