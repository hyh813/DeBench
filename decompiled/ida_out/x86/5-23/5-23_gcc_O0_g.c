/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-23/5-23_gcc_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
  if ( &_gmon_start__ )
    ((void (*)(void))_gmon_start__)();
  frame_dummy();
  return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  __asm { jmp     dword ptr [ebx+8] }
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
  sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
int __usercall sub_10D0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 52))();
}


/* Function: _start @ 0x1170 */
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (*)(int, char **, char **))main, v2, &retaddr, 0, 0, a2, &v3);
  __halt();
}


/* Function: sub_119C @ 0x119C */
void sub_119C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11A0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x11B0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x11F0 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1240 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_10D0((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    _bss_start = 1;
  }
}


/* Function: frame_dummy @ 0x12D0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x12D9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12DD */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: param_macro_constants @ 0x12E1 */
int __cdecl param_macro_constants(int size)
{
  if ( size <= 1024 )
    return 512;
  else
    return 64;
}


/* Function: call_macro_constants @ 0x1309 */
int call_macro_constants()
{
  return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x1329 */
int __cdecl param_macro_functions(int x, int y)
{
  int v2; // eax

  v2 = x;
  if ( y >= x )
    v2 = y;
  return x * x + v2;
}


/* Function: call_macro_functions @ 0x1351 */
int call_macro_functions()
{
  return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x1370 */
int __cdecl param_conditional_compile(int x)
{
  return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x139E */
int call_conditional_compile()
{
  return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x13BB */
int __cdecl param_multi_branch_compile(int x)
{
  return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x13DD */
int call_multi_branch_compile()
{
  return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x13FA */
int __cdecl param_macro_recursion(int x)
{
  return x + 16;
}


/* Function: call_macro_recursion @ 0x1413 */
int call_macro_recursion()
{
  return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x1430 */
int __cdecl param_stringize(int value)
{
  size_t v1; // esi
  size_t v2; // esi

  v1 = strlen("Hello World");
  v2 = strlen("1.2.3") + v1;
  return v2 + strlen("155");
}


/* Function: call_stringize @ 0x1499 */
int call_stringize()
{
  return param_stringize(0);
}


/* Function: my_func @ 0x14BC */
int __cdecl my_func(int x)
{
  return 10 * x;
}


/* Function: param_token_paste @ 0x14DB */
int __cdecl param_token_paste(int x)
{
  return x + 5 + my_func(x);
}


/* Function: call_token_paste @ 0x1511 */
int call_token_paste()
{
  return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x152E */
int __cdecl param_variadic_macro(int x, int y, int z)
{
  printf("LOG: Values: %d, %d, %d\n", x, y, z);
  return x + 50;
}


/* Function: call_variadic_macro @ 0x1599 */
int call_variadic_macro()
{
  return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x15C0 */
int __cdecl param_macro_override(int x)
{
  return x + 1 + 2 * x;
}


/* Function: call_macro_override @ 0x15EF */
int call_macro_override()
{
  return param_macro_override(5);
}


/* Function: header_func @ 0x160C */
int __cdecl header_func(int x)
{
  return 100 * x;
}


/* Function: param_include_guard @ 0x1625 */
int param_include_guard()
{
  return header_func(5);
}


/* Function: call_include_guard @ 0x1642 */
int call_include_guard()
{
  return param_include_guard();
}


/* Function: param_builtin_macros @ 0x165A */
int __cdecl param_builtin_macros(int x)
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "02:59:44");
  return x + 282;
}


/* Function: call_builtin_macros @ 0x16EE */
int call_builtin_macros()
{
  return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x1711 */
void test_preprocessing_features()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  puts(asc_2088);
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


/* Function: param_asm_basic @ 0x1847 */
int __cdecl param_asm_basic(int x)
{
  return x + 10;
}


/* Function: call_asm_basic @ 0x186D */
int call_asm_basic()
{
  return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x188A */
int __cdecl param_asm_clobber(int *arr, int n)
{
  int result; // eax
  int i; // ecx

  result = 0;
  for ( i = 0; i < n; ++i )
    result += arr[i];
  return result;
}


/* Function: call_asm_clobber @ 0x18C7 */
int call_asm_clobber()
{
  int arr[5]; // [esp+8h] [ebp-20h] BYREF
  unsigned int v2; // [esp+1Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x192A */
void __cdecl param_asm_multi_insn(void *dst, const void *src, size_t n)
{
  qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1969 */
int call_asm_multi_insn()
{
  char src[10]; // [esp+2h] [ebp-36h] BYREF
  char dst[32]; // [esp+Ch] [ebp-2Ch] BYREF
  unsigned int v3; // [esp+2Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  strcpy(src, "Hello ASM");
  memset(dst, 0, sizeof(dst));
  param_asm_multi_insn(dst, src, 9u);
  if ( dst[0] == 72 && dst[4] == 111 )
    return 42;
  else
    return -1;
}


/* Function: param_asm_simd @ 0x1A15 */
int __cdecl param_asm_simd(int *a, int *b, int *result)
{
  *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x1A43 */
int __cdecl param_simd_intrinsics(int *a, int *b, int *result)
{
  __m128i vec_a; // [esp+10h] [ebp-68h] BYREF
  __m128i vec_b; // [esp+20h] [ebp-58h] BYREF
  __m128i vec_sum; // [esp+30h] [ebp-48h] BYREF
  __m128i v7; // [esp+40h] [ebp-38h] BYREF
  __m128i v8; // [esp+50h] [ebp-28h] BYREF
  __m128i v9; // [esp+60h] [ebp-18h] BYREF

  vec_a = _mm_load_si128((const __m128i *)a);
  vec_b = _mm_load_si128((const __m128i *)b);
  v8 = _mm_load_si128(&vec_a);
  v9 = _mm_load_si128(&vec_b);
  vec_sum = _mm_add_epi32(_mm_load_si128(&v9), _mm_load_si128(&v8));
  v7 = _mm_load_si128(&vec_sum);
  *(__m128i *)result = _mm_load_si128(&v7);
  return 0;
}


/* Function: call_asm_simd @ 0x1ABF */
__int64 call_asm_simd()
{
  __int64 v0; // rax
  int a[4]; // [esp+Ch] [ebp-3Ch] BYREF
  int b[4]; // [esp+1Ch] [ebp-2Ch] BYREF
  int result[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v4; // [esp+3Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  b[0] = 5;
  b[1] = 6;
  b[2] = 7;
  b[3] = 8;
  param_asm_simd(a, b, result);
  LODWORD(v0) = result[2] + result[1] + result[0] + result[3];
  HIDWORD(v0) = v4 - __readgsdword(0x14u);
  return v0;
}


/* Function: param_asm_atomic @ 0x1B4F */
int __cdecl param_asm_atomic(int *counter, int increment)
{
  return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: param_atomic_c11 @ 0x1B7A */
int __cdecl param_atomic_c11(int *counter, int increment)
{
  return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: call_asm_atomic @ 0x1B9C */
__int64 call_asm_atomic()
{
  __int64 result; // rax
  int counter; // [esp+4h] [ebp-14h] BYREF
  int new_val; // [esp+8h] [ebp-10h]
  unsigned int v3; // [esp+Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  counter = 10;
  new_val = param_asm_atomic(&counter, 5);
  LODWORD(result) = counter + new_val;
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: param_dynamic_code @ 0x1BEE */
int __cdecl param_dynamic_code(int x)
{
  int page_size; // [esp+4h] [ebp-14h]
  void *exec_mem; // [esp+8h] [ebp-10h]

  page_size = sysconf(30);
  exec_mem = mmap(0, page_size, 7, 34, -1, 0);
  if ( exec_mem == (void *)-1 )
    return -1;
  munmap(exec_mem, page_size);
  return x + 5;
}


/* Function: param_memory_protection @ 0x1C5E */
int param_memory_protection()
{
  int page_size; // [esp+0h] [ebp-18h]
  _DWORD *mem; // [esp+4h] [ebp-14h]
  int value; // [esp+Ch] [ebp-Ch]

  page_size = sysconf(30);
  mem = mmap(0, page_size, 3, 34, -1, 0);
  if ( mem == (_DWORD *)-1 )
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


/* Function: param_clobber_importance @ 0x1D46 */
int __cdecl param_clobber_importance(int a, int b)
{
  return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1D82 */
int call_asm_privileged()
{
  int r1; // [esp+4h] [ebp-14h]
  int r2; // [esp+8h] [ebp-10h]
  int r3; // [esp+Ch] [ebp-Ch]

  r1 = param_dynamic_code(10);
  r2 = param_memory_protection();
  r3 = param_clobber_importance(3, 7);
  if ( r1 == 15 && r2 == 42 && r3 == 20 )
    return 77;
  else
    return r1;
}


/* Function: param_memory_clobber_demo @ 0x1DDE */
int param_memory_clobber_demo()
{
  return global_var + 50;
}


/* Function: test_asm_features @ 0x1E0F */
void test_asm_features()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  puts(asc_2200);
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


/* Function: main @ 0x1ECD */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1EF2 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x1EF6 */
void _x86_get_pc_thunk_cx()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x1F00 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x1F20 */
void (*_do_global_ctors_aux())(void)
{
  void (*result)(void); // eax
  int *v1; // ebx

  result = (void (*)(void))_CTOR_LIST__;
  if ( _CTOR_LIST__ != -1 )
  {
    v1 = &_CTOR_LIST__;
    do
    {
      result();
      result = (void (*)(void))*--v1;
    }
    while ( result != (void (*)(void))-1 );
  }
  return result;
}


/* Function: .term_proc @ 0x1F6C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4018 */

/* FAILED to decompile: mprotect @ 0x401C */

/* FAILED to decompile: printf @ 0x4020 */

/* FAILED to decompile: __stack_chk_fail @ 0x4024 */

/* FAILED to decompile: sysconf @ 0x4028 */

/* FAILED to decompile: __cxa_finalize @ 0x402C */

/* FAILED to decompile: puts @ 0x4030 */

/* FAILED to decompile: mmap @ 0x4034 */

/* FAILED to decompile: strlen @ 0x4038 */

/* FAILED to decompile: munmap @ 0x403C */

/* Total functions decompiled: 70, failed: 10 */
