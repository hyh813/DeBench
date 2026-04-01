/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-23/5-23_clang_O0_g
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


/* Function: _start @ 0x10B0 */
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


/* Function: deregister_tm_clones @ 0x10E0 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1110 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1150 */
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


/* Function: frame_dummy @ 0x1190 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x11A0 */
int __cdecl param_macro_constants(int size)
{
  if ( size <= 1024 )
    return 512;
  else
    return 64;
}


/* Function: call_macro_constants @ 0x11D0 */
int __cdecl call_macro_constants()
{
  return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x11E0 */
int __cdecl param_macro_functions(int x, int y)
{
  int v3; // [rsp+0h] [rbp-10h]

  if ( x <= y )
    v3 = y;
  else
    v3 = x;
  return v3 + x * x;
}


/* Function: call_macro_functions @ 0x1220 */
int __cdecl call_macro_functions()
{
  return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x1240 */
int __cdecl param_conditional_compile(int x)
{
  return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1260 */
int __cdecl call_conditional_compile()
{
  return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x1270 */
int __cdecl param_multi_branch_compile(int x)
{
  return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1290 */
int __cdecl call_multi_branch_compile()
{
  return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x12A0 */
int __cdecl param_macro_recursion(int x)
{
  return x + 16;
}


/* Function: call_macro_recursion @ 0x12E0 */
int __cdecl call_macro_recursion()
{
  return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x12F0 */
int __cdecl param_stringize(int value)
{
  size_t v2; // [rsp+0h] [rbp-30h]
  size_t v3; // [rsp+8h] [rbp-28h]

  v2 = strlen("Hello World");
  v3 = strlen("1.2.3") + v2;
  return strlen("155") + v3;
}


/* Function: call_stringize @ 0x1360 */
int __cdecl call_stringize()
{
  return param_stringize(0);
}


/* Function: my_func @ 0x1370 */
int __cdecl my_func(int x)
{
  return 10 * x;
}


/* Function: param_token_paste @ 0x1380 */
int __cdecl param_token_paste(int x)
{
  return my_func(x) + x + 5;
}


/* Function: call_token_paste @ 0x13C0 */
int __cdecl call_token_paste()
{
  return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x13D0 */
int __cdecl param_variadic_macro(int x, int y, int z)
{
  printf("LOG: Values: %d, %d, %d\n", x, y, z);
  return x + 50;
}


/* Function: call_variadic_macro @ 0x1410 */
int __cdecl call_variadic_macro()
{
  return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1430 */
int __cdecl param_macro_override(int x)
{
  return 2 * x + x + 1;
}


/* Function: call_macro_override @ 0x1460 */
int __cdecl call_macro_override()
{
  return param_macro_override(5);
}


/* Function: param_include_guard @ 0x1470 */
int __cdecl param_include_guard()
{
  return header_func(5);
}


/* Function: header_func @ 0x1480 */
int __cdecl header_func(int x)
{
  return 100 * x;
}


/* Function: call_include_guard @ 0x1490 */
int __cdecl call_include_guard()
{
  return param_include_guard();
}


/* Function: param_builtin_macros @ 0x14A0 */
int __cdecl param_builtin_macros(int x)
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:43");
  return x + 282;
}


/* Function: call_builtin_macros @ 0x1530 */
int __cdecl call_builtin_macros()
{
  return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x1540 */
void __cdecl test_preprocessing_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  printf(asc_2095);
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


/* Function: param_asm_basic @ 0x1640 */
int __cdecl param_asm_basic(int x)
{
  return x + 10;
}


/* Function: call_asm_basic @ 0x1660 */
int __cdecl call_asm_basic()
{
  return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1670 */
int __cdecl param_asm_clobber(int *arr, int n)
{
  int result; // eax
  __int64 i; // rcx

  result = 0;
  for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
    result += arr[i];
  return result;
}


/* Function: call_asm_clobber @ 0x16B0 */
int __cdecl call_asm_clobber()
{
  int arr[5]; // [rsp+0h] [rbp-20h] BYREF

  *(_QWORD *)arr = 0x200000001LL;
  *(_QWORD *)&arr[2] = 0x400000003LL;
  arr[4] = 5;
  return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x16F0 */
void __cdecl param_asm_multi_insn(void *dst, const void *src, size_t n)
{
  qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1740 */
int __cdecl call_asm_multi_insn()
{
  int result; // eax
  bool v1; // [rsp+Fh] [rbp-31h]
  char dst[38]; // [rsp+10h] [rbp-30h] BYREF
  char src[10]; // [rsp+36h] [rbp-Ah] BYREF

  strcpy(src, "Hello ASM");
  memset(dst, 0, 0x20u);
  param_asm_multi_insn(dst, src, 9u);
  v1 = 0;
  if ( dst[0] == 72 )
    v1 = dst[4] == 111;
  result = -1;
  if ( v1 )
    return 42;
  return result;
}


/* Function: param_asm_simd @ 0x17C0 */
int __cdecl param_asm_simd(int *a, int *b, int *result)
{
  *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x17F0 */
int __cdecl param_simd_intrinsics(int *a, int *b, int *result)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i vec_sum; // [rsp+0h] [rbp-A0h] BYREF
  __m128i vec_b; // [rsp+10h] [rbp-90h] BYREF
  __m128i vec_a; // [rsp+20h] [rbp-80h] BYREF
  int *resulta; // [rsp+38h] [rbp-68h]
  int *ba; // [rsp+40h] [rbp-60h]
  int *aa; // [rsp+48h] [rbp-58h]
  int *v12; // [rsp+50h] [rbp-50h]
  int *v13; // [rsp+58h] [rbp-48h]
  __m128i v14; // [rsp+60h] [rbp-40h] BYREF
  __m128i v15; // [rsp+70h] [rbp-30h] BYREF
  __m128i v16; // [rsp+80h] [rbp-20h] BYREF
  int *v17; // [rsp+98h] [rbp-8h]

  aa = a;
  ba = b;
  resulta = result;
  v13 = a;
  vec_a = _mm_load_si128((const __m128i *)a);
  v12 = b;
  vec_b = _mm_load_si128((const __m128i *)b);
  v3 = _mm_load_si128(&vec_b);
  v15 = _mm_load_si128(&vec_a);
  v14 = v3;
  vec_sum = _mm_add_epi32(_mm_load_si128(&v15), _mm_load_si128(&v14));
  v4 = _mm_load_si128(&vec_sum);
  v17 = result;
  v16 = v4;
  *(__m128i *)result = _mm_load_si128(&v16);
  return 0;
}


/* Function: call_asm_simd @ 0x1890 */
int __cdecl call_asm_simd()
{
  int result[4]; // [rsp+0h] [rbp-30h] BYREF
  int b[4]; // [rsp+10h] [rbp-20h] BYREF
  int a[4]; // [rsp+20h] [rbp-10h] BYREF

  *(_QWORD *)a = 0x200000001LL;
  *(_QWORD *)&a[2] = 0x400000003LL;
  *(_QWORD *)b = 0x600000005LL;
  *(_QWORD *)&b[2] = 0x800000007LL;
  param_asm_simd(a, b, result);
  return result[3] + result[2] + result[1] + result[0];
}


/* Function: param_asm_atomic @ 0x18F0 */
int __cdecl param_asm_atomic(int *counter, int increment)
{
  return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1920 */
int __cdecl param_atomic_c11(int *counter, int increment)
{
  return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1950 */
int __cdecl call_asm_atomic()
{
  int new_val; // [rsp+8h] [rbp-8h]
  int counter; // [rsp+Ch] [rbp-4h] BYREF

  counter = 10;
  new_val = param_asm_atomic(&counter, 5);
  return new_val + counter;
}


/* Function: param_dynamic_code @ 0x1980 */
int __cdecl param_dynamic_code(int x)
{
  int result; // [rsp+4h] [rbp-2Ch]
  _WORD *exec_mem; // [rsp+18h] [rbp-18h]
  __int64 page_size; // [rsp+20h] [rbp-10h]

  page_size = sysconf(30);
  exec_mem = mmap(0, page_size, 7, 34, -1, 0);
  if ( exec_mem == (_WORD *)-1LL )
    return -1;
  *(_DWORD *)exec_mem = -1065092983;
  exec_mem[2] = -15611;
  result = ((__int64 (__fastcall *)(_QWORD))exec_mem)((unsigned int)x);
  munmap(exec_mem, page_size);
  return result;
}


/* Function: param_memory_protection @ 0x1A30 */
int __cdecl param_memory_protection()
{
  int value; // [rsp+Ch] [rbp-24h]
  _DWORD *mem; // [rsp+18h] [rbp-18h]
  __int64 page_size; // [rsp+20h] [rbp-10h]

  page_size = sysconf(30);
  mem = mmap(0, page_size, 3, 34, -1, 0);
  if ( mem == (_DWORD *)-1LL )
    return -1;
  *mem = 42;
  if ( mprotect(mem, page_size, 1) )
  {
    munmap(mem, page_size);
    return -2;
  }
  else
  {
    value = *mem;
    if ( mprotect(mem, page_size, 3) )
    {
      munmap(mem, page_size);
      return -3;
    }
    else
    {
      *mem = 100;
      munmap(mem, page_size);
      return value;
    }
  }
}


/* Function: param_clobber_importance @ 0x1B40 */
int __cdecl param_clobber_importance(int a, int b)
{
  return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1B80 */
int __cdecl call_asm_privileged()
{
  int r3; // [rsp+0h] [rbp-10h]
  int r2; // [rsp+4h] [rbp-Ch]
  int r1; // [rsp+8h] [rbp-8h]

  r1 = param_dynamic_code(10);
  r2 = param_memory_protection();
  r3 = param_clobber_importance(3, 7);
  if ( r1 == 15 && r2 == 42 && r3 == 20 )
    return 77;
  else
    return r1;
}


/* Function: param_memory_clobber_demo @ 0x1BF0 */
int __cdecl param_memory_clobber_demo()
{
  return global_var + 50;
}


/* Function: test_asm_features @ 0x1C20 */
void __cdecl test_asm_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  printf(asc_2213);
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


/* Function: main @ 0x1CC0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: .term_proc @ 0x1CE4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: strlen @ 0x4078 */

/* FAILED to decompile: mmap @ 0x4080 */

/* FAILED to decompile: printf @ 0x4088 */

/* FAILED to decompile: memset @ 0x4090 */

/* FAILED to decompile: munmap @ 0x4098 */

/* FAILED to decompile: mprotect @ 0x40A0 */

/* FAILED to decompile: sysconf @ 0x40A8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40B0 */

/* FAILED to decompile: __gmon_start__ @ 0x40C0 */

/* Total functions decompiled: 52, failed: 10 */
