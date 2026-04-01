/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-23/5-23_clang_O0_g
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
int __fastcall param_macro_constants(int size)
{
  if ( size <= 1024 )
    return 512;
  else
    return 64;
}


/* Function: call_macro_constants @ 0x734 */
int call_macro_constants()
{
  return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x74C */
int __fastcall param_macro_functions(int x, int y)
{
  int v3; // [sp+0h] [bp-10h]

  if ( x <= y )
    v3 = y;
  else
    v3 = x;
  return x * x + v3;
}


/* Function: call_macro_functions @ 0x7A0 */
int call_macro_functions()
{
  return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x7BC */
int __fastcall param_conditional_compile(int x)
{
  return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x7E8 */
int call_conditional_compile()
{
  return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x800 */
int __fastcall param_multi_branch_compile(int x)
{
  return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x824 */
int call_multi_branch_compile()
{
  return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x83C */
int __fastcall param_macro_recursion(int x)
{
  return x + 16;
}


/* Function: call_macro_recursion @ 0x854 */
int call_macro_recursion()
{
  return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x86C */
int __cdecl param_stringize(int value)
{
  size_t v2; // [sp+0h] [bp-18h]
  size_t v3; // [sp+4h] [bp-14h]

  v2 = strlen("Hello World");
  v3 = v2 + strlen("1.2.3");
  return v3 + strlen("155");
}


/* Function: call_stringize @ 0x8F0 */
int call_stringize()
{
  return param_stringize(0);
}


/* Function: my_func @ 0x908 */
int __fastcall my_func(int x)
{
  return 10 * x;
}


/* Function: param_token_paste @ 0x924 */
int __cdecl param_token_paste(int x)
{
  return my_func(x) + x + 5;
}


/* Function: call_token_paste @ 0x96C */
int call_token_paste()
{
  return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x984 */
int __fastcall param_variadic_macro(int x, int y, int z)
{
  printf("LOG: Values: %d, %d, %d\n", x, y, z);
  return x + 50;
}


/* Function: call_variadic_macro @ 0x9DC */
int call_variadic_macro()
{
  return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x9FC */
int __fastcall param_macro_override(int x)
{
  return x + 1 + 2 * x;
}


/* Function: call_macro_override @ 0xA30 */
int call_macro_override()
{
  return param_macro_override(5);
}


/* Function: param_include_guard @ 0xA48 */
int param_include_guard()
{
  return header_func(5);
}


/* Function: header_func @ 0xA60 */
int __fastcall header_func(int x)
{
  return 100 * x;
}


/* Function: call_include_guard @ 0xA7C */
int call_include_guard()
{
  return param_include_guard();
}


/* Function: param_builtin_macros @ 0xA90 */
int __cdecl param_builtin_macros(int x)
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:01:13");
  return x + 282;
}


/* Function: call_builtin_macros @ 0xB64 */
int call_builtin_macros()
{
  return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xB7C */
void test_preprocessing_features()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  printf(asc_1551);
  v0 = call_macro_constants();
  printf(aPpL201D, v0);
  v1 = call_macro_functions();
  printf(aPpL202D, v1);
  v2 = call_conditional_compile();
  printf(aPpL203D, v2);
  v3 = call_multi_branch_compile();
  printf(aPpL204D, v3);
  v4 = call_macro_recursion();
  printf(aPpL301D, v4);
  v5 = call_stringize();
  printf(aPpL302D, v5);
  v6 = call_token_paste();
  printf(aPpL303D, v6);
  v7 = call_variadic_macro();
  printf(aPpL304D, v7);
  v8 = call_macro_override();
  printf(aPpL305D, v8);
  v9 = call_include_guard();
  printf(aPpL306D, v9);
  v10 = call_builtin_macros();
  printf(aPpL307D, v10);
}


/* Function: param_asm_basic @ 0xCA4 */
int __fastcall param_asm_basic(int x)
{
  return x + 10;
}


/* Function: call_asm_basic @ 0xCC4 */
int call_asm_basic()
{
  return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0xCDC */
int __fastcall param_asm_clobber(int *arr, int n)
{
  int i; // [sp+0h] [bp-10h]
  int v4; // [sp+4h] [bp-Ch]

  v4 = 0;
  for ( i = 0; i < n; ++i )
    v4 += arr[i];
  return v4;
}


/* Function: call_asm_clobber @ 0xD44 */
int call_asm_clobber()
{
  int arr[7]; // [sp+4h] [bp-1Ch] BYREF

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0xD80 */
void __fastcall param_asm_multi_insn(void *dst, const void *src, size_t n)
{
  memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xDB4 */
int call_asm_multi_insn()
{
  int result; // r0
  bool v1; // [sp+8h] [bp-30h]
  int dst; // [sp+Ch] [bp-2Ch] BYREF
  int v3; // [sp+10h] [bp-28h]
  int v4; // [sp+14h] [bp-24h]
  int v5; // [sp+18h] [bp-20h]
  int v6; // [sp+1Ch] [bp-1Ch]
  int v7; // [sp+20h] [bp-18h]
  int v8; // [sp+24h] [bp-14h]
  int v9; // [sp+28h] [bp-10h]
  char src[12]; // [sp+2Ch] [bp-Ch] BYREF

  strcpy(src, "Hello ASM");
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  dst = 0;
  param_asm_multi_insn(&dst, src, 9u);
  v1 = 0;
  if ( (unsigned __int8)dst == 72 )
    v1 = (unsigned __int8)v3 == 111;
  result = -1;
  if ( v1 )
    return 42;
  return result;
}


/* Function: param_asm_simd @ 0xE64 */
int __fastcall param_asm_simd(int *a, int *b, int *result)
{
  int i; // [sp+0h] [bp-10h]

  for ( i = 0; i <= 3; ++i )
    result[i] = a[i] + b[i];
  return 0;
}


/* Function: param_simd_intrinsics @ 0xED0 */
int __fastcall param_simd_intrinsics(int *a, int *b, int *result)
{
  int i; // [sp+0h] [bp-10h]

  for ( i = 0; i <= 3; ++i )
    result[i] = a[i] + b[i];
  return 0;
}


/* Function: call_asm_simd @ 0xF3C */
int call_asm_simd()
{
  int v1[4]; // [sp+0h] [bp-30h] BYREF
  int b[4]; // [sp+10h] [bp-20h] BYREF
  int a[4]; // [sp+20h] [bp-10h] BYREF

  a[0] = 1;
  a[3] = 4;
  a[2] = 3;
  a[1] = 2;
  b[3] = 8;
  b[2] = 7;
  b[1] = 6;
  b[0] = 5;
  param_asm_simd(a, b, v1);
  return v1[0] + v1[1] + v1[2] + v1[3];
}


/* Function: param_asm_atomic @ 0xFE8 */
int __cdecl param_asm_atomic(int *counter, int increment)
{
  return _atomic_fetch_add_4(counter, increment, 5) + increment;
}


/* Function: param_atomic_c11 @ 0x1038 */
int __fastcall param_atomic_c11(int *counter, int increment)
{
  return _atomic_fetch_add_4(counter, increment, 5) + increment;
}


/* Function: call_asm_atomic @ 0x1080 */
int call_asm_atomic()
{
  int v0; // r1
  int counter; // [sp+4h] [bp-4h] BYREF

  counter = 10;
  v0 = param_asm_atomic(&counter, 5);
  return counter + v0;
}


/* Function: param_dynamic_code @ 0x10BC */
int __cdecl param_dynamic_code(int x)
{
  void *addr; // [sp+10h] [bp-10h]
  int page_size; // [sp+14h] [bp-Ch]

  page_size = sysconf(30);
  addr = mmap(0, page_size, 7, 34, -1, 0);
  if ( addr == (void *)-1 )
    return -1;
  munmap(addr, page_size);
  return x + 5;
}


/* Function: param_memory_protection @ 0x1150 */
int param_memory_protection()
{
  int v1; // [sp+Ch] [bp-14h]
  int *mem; // [sp+14h] [bp-Ch]
  int page_size; // [sp+18h] [bp-8h]

  page_size = sysconf(30);
  mem = (int *)mmap(0, page_size, 3, 34, -1, 0);
  if ( mem == (int *)-1 )
    return -1;
  *mem = 42;
  if ( mprotect(mem, page_size, 1) )
  {
    munmap(mem, page_size);
    return -2;
  }
  else
  {
    v1 = *mem;
    if ( mprotect(mem, page_size, 3) )
    {
      munmap(mem, page_size);
      return -3;
    }
    else
    {
      *mem = 100;
      munmap(mem, page_size);
      return v1;
    }
  }
}


/* Function: param_clobber_importance @ 0x1268 */
int __fastcall param_clobber_importance(int a, int b)
{
  return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x128C */
int call_asm_privileged()
{
  int v1; // [sp+0h] [bp-10h]
  int v2; // [sp+4h] [bp-Ch]
  int v3; // [sp+8h] [bp-8h]

  v3 = param_dynamic_code(10);
  v2 = param_memory_protection();
  v1 = param_clobber_importance(3, 7);
  if ( v3 == 15 && v2 == 42 && v1 == 20 )
    return 77;
  else
    return v3;
}


/* Function: param_memory_clobber_demo @ 0x1314 */
int param_memory_clobber_demo()
{
  return (int)&word_32 + (_DWORD)global_var;
}


/* Function: test_asm_features @ 0x1344 */
void test_asm_features()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  printf(asc_16CF);
  v0 = call_asm_basic();
  printf(aAsmL401D, v0);
  v1 = call_asm_clobber();
  printf(aAsmL402D, v1);
  v2 = call_asm_multi_insn();
  printf(aAsmL403D, v2);
  v3 = call_asm_simd();
  printf(aAsmL404D, v3);
  v4 = call_asm_atomic();
  printf(aAsmL405D, v4);
  v5 = call_asm_privileged();
  printf(aAsmL406D, v5);
}


/* Function: main @ 0x13F4 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: .term_proc @ 0x1424 */
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

/* FAILED to decompile: __imp_strlen @ 0x120A4 */

/* FAILED to decompile: __imp_mmap @ 0x120A8 */

/* FAILED to decompile: __imp_munmap @ 0x120AC */

/* FAILED to decompile: __imp_abort @ 0x120B0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120B8 */

/* Total functions decompiled: 53, failed: 12 */
