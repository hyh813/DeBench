/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/5-23/5-23_gcc_O0_g
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


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1020();
}


/* Function: _start @ 0x1140 */
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


/* Function: deregister_tm_clones @ 0x1170 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x11A0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11E0 */
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


/* Function: frame_dummy @ 0x1220 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x1229 */
int __cdecl param_macro_constants(int size)
{
  if ( size <= 1024 )
    return 512;
  else
    return 64;
}


/* Function: call_macro_constants @ 0x124B */
int __cdecl call_macro_constants()
{
  return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x125F */
int __cdecl param_macro_functions(int x, int y)
{
  int v2; // eax

  v2 = x;
  if ( y >= x )
    v2 = y;
  return x * x + v2;
}


/* Function: call_macro_functions @ 0x1284 */
int __cdecl call_macro_functions()
{
  return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x129D */
int __cdecl param_conditional_compile(int x)
{
  return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x12C2 */
int __cdecl call_conditional_compile()
{
  return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x12D6 */
int __cdecl param_multi_branch_compile(int x)
{
  return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x12F2 */
int __cdecl call_multi_branch_compile()
{
  return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x1306 */
int __cdecl param_macro_recursion(int x)
{
  return x + 16;
}


/* Function: call_macro_recursion @ 0x1319 */
int __cdecl call_macro_recursion()
{
  return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x132D */
int __cdecl param_stringize(int value)
{
  int v1; // ebx
  int v2; // ebx

  v1 = strlen("Hello World");
  v2 = strlen("1.2.3") + v1;
  return v2 + strlen("155");
}


/* Function: call_stringize @ 0x138E */
int __cdecl call_stringize()
{
  return param_stringize(0);
}


/* Function: my_func @ 0x13A2 */
int __cdecl my_func(int x)
{
  return 10 * x;
}


/* Function: param_token_paste @ 0x13BB */
int __cdecl param_token_paste(int x)
{
  return x + 5 + my_func(x);
}


/* Function: call_token_paste @ 0x13EB */
int __cdecl call_token_paste()
{
  return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x13FF */
int __cdecl param_variadic_macro(int x, int y, int z)
{
  printf("LOG: Values: %d, %d, %d\n", x, y, z);
  return x + 50;
}


/* Function: call_variadic_macro @ 0x1472 */
int __cdecl call_variadic_macro()
{
  return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1490 */
int __cdecl param_macro_override(int x)
{
  return x + 1 + 2 * x;
}


/* Function: call_macro_override @ 0x14B6 */
int __cdecl call_macro_override()
{
  return param_macro_override(5);
}


/* Function: header_func @ 0x14CA */
int __cdecl header_func(int x)
{
  return 100 * x;
}


/* Function: param_include_guard @ 0x14DD */
int __cdecl param_include_guard()
{
  return header_func(5);
}


/* Function: call_include_guard @ 0x14F1 */
int __cdecl call_include_guard()
{
  return param_include_guard();
}


/* Function: param_builtin_macros @ 0x1505 */
int __cdecl param_builtin_macros(int x)
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:23");
  return x + 282;
}


/* Function: call_builtin_macros @ 0x15A5 */
int __cdecl call_builtin_macros()
{
  return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x15B9 */
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

  puts(s);
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


/* Function: param_asm_basic @ 0x1733 */
int __cdecl param_asm_basic(int x)
{
  return x + 10;
}


/* Function: call_asm_basic @ 0x1750 */
int __cdecl call_asm_basic()
{
  return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1764 */
int __cdecl param_asm_clobber(int *arr, int n)
{
  int result; // eax
  __int64 i; // rcx

  result = 0;
  for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
    result += arr[i];
  return result;
}


/* Function: call_asm_clobber @ 0x179A */
int __cdecl call_asm_clobber()
{
  int arr[6]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x17FF */
void __cdecl param_asm_multi_insn(void *dst, const void *src, size_t n)
{
  qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x184D */
int __cdecl call_asm_multi_insn()
{
  char src[10]; // [rsp+6h] [rbp-3Ah] BYREF
  char dst[40]; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  strcpy(src, "Hello ASM");
  memset(dst, 0, 32);
  param_asm_multi_insn(dst, src, 9u);
  if ( dst[0] == 72 && dst[4] == 111 )
    return 42;
  else
    return -1;
}


/* Function: param_asm_simd @ 0x18E6 */
int __cdecl param_asm_simd(int *a, int *b, int *result)
{
  *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x191A */
int __cdecl param_simd_intrinsics(int *a, int *b, int *result)
{
  __m128i vec_a; // [rsp+38h] [rbp-60h] BYREF
  __m128i vec_b; // [rsp+48h] [rbp-50h] BYREF
  __m128i vec_sum; // [rsp+58h] [rbp-40h] BYREF
  __m128i v7; // [rsp+68h] [rbp-30h] BYREF
  __m128i v8; // [rsp+78h] [rbp-20h] BYREF
  __m128i v9; // [rsp+88h] [rbp-10h] BYREF

  vec_a = _mm_load_si128((const __m128i *)a);
  vec_b = _mm_load_si128((const __m128i *)b);
  v8 = _mm_load_si128(&vec_a);
  v9 = _mm_load_si128(&vec_b);
  vec_sum = _mm_add_epi32(_mm_load_si128(&v9), _mm_load_si128(&v8));
  v7 = _mm_load_si128(&vec_sum);
  *(__m128i *)result = _mm_load_si128(&v7);
  return 0;
}


/* Function: call_asm_simd @ 0x19B5 */
int __cdecl call_asm_simd()
{
  int a[4]; // [rsp+0h] [rbp-40h] BYREF
  int b[4]; // [rsp+10h] [rbp-30h] BYREF
  int result[6]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  b[0] = 5;
  b[1] = 6;
  b[2] = 7;
  b[3] = 8;
  param_asm_simd(a, b, result);
  return result[2] + result[1] + result[0] + result[3];
}


/* Function: param_asm_atomic @ 0x1A47 */
int __cdecl param_asm_atomic(int *counter, int increment)
{
  return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: param_atomic_c11 @ 0x1A6E */
int __cdecl param_atomic_c11(int *counter, int increment)
{
  return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: call_asm_atomic @ 0x1A8F */
int __cdecl call_asm_atomic()
{
  int counter; // [rsp+0h] [rbp-10h] BYREF
  int new_val; // [rsp+4h] [rbp-Ch]
  unsigned __int64 v3; // [rsp+8h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  counter = 10;
  new_val = param_asm_atomic(&counter, 5);
  return counter + new_val;
}


/* Function: param_dynamic_code @ 0x1AE3 */
int __cdecl param_dynamic_code(int x)
{
  int result; // [rsp+14h] [rbp-2Ch]
  __int64 page_size; // [rsp+18h] [rbp-28h]
  _WORD *exec_mem; // [rsp+20h] [rbp-20h]

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


/* Function: param_memory_protection @ 0x1BA8 */
int __cdecl param_memory_protection()
{
  int value; // [rsp+4h] [rbp-1Ch]
  __int64 page_size; // [rsp+8h] [rbp-18h]
  _DWORD *mem; // [rsp+10h] [rbp-10h]

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


/* Function: param_clobber_importance @ 0x1CA7 */
int __cdecl param_clobber_importance(int a, int b)
{
  return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1CDD */
int __cdecl call_asm_privileged()
{
  int r1; // [rsp+4h] [rbp-Ch]
  int r2; // [rsp+8h] [rbp-8h]
  int r3; // [rsp+Ch] [rbp-4h]

  r1 = param_dynamic_code(10);
  r2 = param_memory_protection();
  r3 = param_clobber_importance(3, 7);
  if ( r1 == 15 && r2 == 42 && r3 == 20 )
    return 77;
  else
    return r1;
}


/* Function: param_memory_clobber_demo @ 0x1D33 */
int __cdecl param_memory_clobber_demo()
{
  return global_var + 50;
}


/* Function: test_asm_features @ 0x1D57 */
void __cdecl test_asm_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  puts(asc_2210);
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


/* Function: main @ 0x1E31 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: .term_proc @ 0x1E54 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: strlen @ 0x4030 */

/* FAILED to decompile: __stack_chk_fail @ 0x4038 */

/* FAILED to decompile: mmap @ 0x4040 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: munmap @ 0x4050 */

/* FAILED to decompile: mprotect @ 0x4058 */

/* FAILED to decompile: sysconf @ 0x4060 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4068 */

/* FAILED to decompile: __gmon_start__ @ 0x4078 */

/* Total functions decompiled: 60, failed: 11 */
