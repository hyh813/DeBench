/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_clang_O0_g
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


/* Function: _start @ 0x10D0 */
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


/* Function: deregister_tm_clones @ 0x1100 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x1130 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1170 */
void *_do_global_dtors_aux()
{
  void *result; // rax

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x11B0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_fake_branch @ 0x11C0 */
int __cdecl param_fake_branch(int x)
{
  int result; // [rsp+8h] [rbp-8h]

  result = x;
  if ( x * x < 0 )
    result = 2 * x - 559038737;
  strlen("test");
  return result;
}


/* Function: call_fake_branch @ 0x1230 */
int __cdecl call_fake_branch()
{
  return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x1240 */
int __cdecl param_opaque_predicate(int x)
{
  int temp; // [rsp+8h] [rbp-18h]
  int b; // [rsp+Ch] [rbp-14h]
  int a; // [rsp+10h] [rbp-10h]

  a = x;
  b = x + 1;
  while ( b )
  {
    temp = b;
    b = a % b;
    a = temp;
  }
  if ( 2 * x + x * x + 1 == (x + 1) * (x + 1) && a == 1 )
    return 2 * x + 10;
  else
    return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x1320 */
int __cdecl call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1330 */
int __cdecl param_instruction_substitution(int x)
{
  return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x1380 */
int __cdecl call_instruction_substitution()
{
  return param_instruction_substitution(10);
}


/* Function: decrypt_string @ 0x1390 */
const char *__cdecl decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char *p; // [rsp+8h] [rbp-28h]

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  for ( p = buffer; *p; ++p )
    *p ^= key;
  return buffer;
}


/* Function: param_string_encryption @ 0x1410 */
int __cdecl param_string_encryption()
{
  int v0; // eax
  char decrypted[32]; // [rsp+0h] [rbp-20h] BYREF

  decrypt_string(&param_string_encryption_encrypted, decrypted, 0x20u, 90);
  v0 = strlen(decrypted);
  return decrypted[0] + v0;
}


/* Function: call_string_encryption @ 0x1450 */
int __cdecl call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x1460 */
int __cdecl param_tail_call_optimized(int n, int acc)
{
  if ( n > 0 )
    return param_tail_call_optimized(n - 1, n + acc);
  else
    return acc;
}


/* Function: call_tail_call_optimized @ 0x14A0 */
int __cdecl call_tail_call_optimized()
{
  return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x14C0 */
int __cdecl param_non_tail_call(int n)
{
  if ( n > 0 )
    return param_non_tail_call(n - 1) + n;
  else
    return 0;
}


/* Function: call_non_tail_call @ 0x1510 */
int __cdecl call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1520 */
int __cdecl param_vectorized_loop(int *a, int *b, int *c, int n)
{
  int i_0; // [rsp+0h] [rbp-28h]
  int sum; // [rsp+4h] [rbp-24h]
  int i; // [rsp+8h] [rbp-20h]

  for ( i = 0; i < n; ++i )
    c[i] = b[i] + a[i];
  sum = 0;
  for ( i_0 = 0; i_0 < n; ++i_0 )
    sum += c[i_0];
  return sum;
}


/* Function: call_vectorized_loop @ 0x15C0 */
int __cdecl call_vectorized_loop()
{
  int c[8]; // [rsp+0h] [rbp-60h] BYREF
  int b[8]; // [rsp+20h] [rbp-40h] BYREF
  int a[8]; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)a = 0x200000001LL;
  *(_QWORD *)&a[2] = 0x400000003LL;
  *(_QWORD *)&a[4] = 0x600000005LL;
  *(_QWORD *)&a[6] = 0x800000007LL;
  *(_QWORD *)b = 0x700000008LL;
  *(_QWORD *)&b[2] = 0x500000006LL;
  *(_QWORD *)&b[4] = 0x300000004LL;
  *(_QWORD *)&b[6] = 0x100000002LL;
  memset(c, 0, sizeof(c));
  return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0x1650 */
int __cdecl param_link_time_optimization(int x)
{
  return lto_target_func(x);
}


/* Function: lto_target_func @ 0x1670 */
int __cdecl lto_target_func(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1690 */
int __cdecl call_link_time_optimization()
{
  return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x16A0 */
void __cdecl __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x16D0 */
int __cdecl param_division_by_zero(int x)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(jmp_buffer) )
    return -1;
  else
    return 10 / x;
}


/* Function: call_division_by_zero @ 0x1730 */
int __cdecl call_division_by_zero()
{
  int r2; // [rsp+8h] [rbp-8h]
  int r1; // [rsp+Ch] [rbp-4h]

  r1 = param_division_by_zero(5);
  r2 = param_division_by_zero(0);
  signal(8, 0);
  return r2 + r1;
}


/* Function: segv_handler @ 0x1770 */
void __cdecl __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x17A0 */
int __cdecl param_null_pointer_deref(int *p)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(segv_buffer) )
    return -1;
  else
    return *p;
}


/* Function: call_null_pointer_deref @ 0x1800 */
int __cdecl call_null_pointer_deref()
{
  int r2; // [rsp+4h] [rbp-Ch]
  int r1; // [rsp+8h] [rbp-8h]
  int valid; // [rsp+Ch] [rbp-4h] BYREF

  valid = 42;
  r1 = param_null_pointer_deref(&valid);
  r2 = param_null_pointer_deref(0);
  signal(11, 0);
  return r2 + r1;
}


/* Function: param_buffer_overflow_stack @ 0x1850 */
int __cdecl param_buffer_overflow_stack(int x)
{
  int i; // [rsp+4h] [rbp-14h]
  char buffer[8]; // [rsp+Ch] [rbp-Ch]
  int xa; // [rsp+14h] [rbp-4h]

  xa = x;
  for ( i = 0; i <= 16; ++i )
    buffer[i] = 65;
  return xa;
}


/* Function: param_buffer_overflow_heap @ 0x18B0 */
int __cdecl param_buffer_overflow_heap(int x)
{
  int i; // [rsp+Ch] [rbp-14h]
  char *heap_buffer; // [rsp+10h] [rbp-10h]

  heap_buffer = (char *)malloc(0x10u);
  if ( !heap_buffer )
    return -2;
  for ( i = 0; i <= 32; ++i )
    heap_buffer[i] = 66;
  free(heap_buffer);
  return x;
}


/* Function: call_buffer_overflow @ 0x1930 */
int __cdecl call_buffer_overflow()
{
  int r1; // [rsp+Ch] [rbp-4h]

  r1 = param_buffer_overflow_stack(10);
  return param_buffer_overflow_heap(20) + r1;
}


/* Function: param_integer_overflow @ 0x1960 */
int __cdecl param_integer_overflow(int a, int b)
{
  int signed_sum; // [rsp+Ch] [rbp-10h]

  signed_sum = b + a;
  if ( a > 0 && b > 0 && signed_sum < 0 )
    return -1;
  if ( a >= 0 || b >= 0 || signed_sum <= 0 )
    return b + a;
  return -2;
}


/* Function: call_integer_overflow @ 0x19F0 */
int __cdecl call_integer_overflow()
{
  int r1; // [rsp+Ch] [rbp-4h]

  r1 = param_integer_overflow(1000000000, 1000000000);
  return param_integer_overflow(-1, 1) + r1;
}


/* Function: param_undefined_behavior @ 0x1A30 */
int __cdecl param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1A50 */
int __cdecl call_undefined_behavior()
{
  return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1A70 */
int __cdecl param_implementation_defined()
{
  return 47;
}


/* Function: call_implementation_defined @ 0x1B00 */
int __cdecl call_implementation_defined()
{
  return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1B10 */
void __cdecl test_obf_opt_edge()
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
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  printf(format);
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


/* Function: main @ 0x1C50 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: .term_proc @ 0x1C6C */
void term_proc()
{
  ;
}


/* FAILED to decompile: free @ 0x4240 */

/* FAILED to decompile: __libc_start_main @ 0x4248 */

/* FAILED to decompile: strncpy @ 0x4250 */

/* FAILED to decompile: strlen @ 0x4258 */

/* FAILED to decompile: printf @ 0x4260 */

/* FAILED to decompile: memset @ 0x4268 */

/* FAILED to decompile: _setjmp @ 0x4270 */

/* FAILED to decompile: signal @ 0x4278 */

/* FAILED to decompile: malloc @ 0x4280 */

/* FAILED to decompile: longjmp @ 0x4288 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4290 */

/* FAILED to decompile: __gmon_start__ @ 0x42A0 */

/* Total functions decompiled: 43, failed: 12 */
