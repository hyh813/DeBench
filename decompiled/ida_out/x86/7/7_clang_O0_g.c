/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_clang_O0_g
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


/* Function: sub_10F0 @ 0x10F0 */
int __usercall sub_10F0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 16))();
}


/* Function: _start @ 0x1100 */
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


/* Function: sub_112C @ 0x112C */
void sub_112C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1130 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1140 */
char *deregister_tm_clones()
{
  return &completed_1;
}


/* Function: register_tm_clones @ 0x1180 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11D0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !completed_1 )
  {
    if ( &_cxa_finalize )
      sub_10F0((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    completed_1 = 1;
  }
}


/* Function: frame_dummy @ 0x1260 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1269 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x126D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: param_fake_branch @ 0x1280 */
int __cdecl param_fake_branch(int x)
{
  int result; // [esp+10h] [ebp-8h]

  result = x;
  if ( x * x < 0 )
    result = 2 * x - 559038737;
  strlen((const char *)&GLOBAL_OFFSET_TABLE_ - 8184);
  return result;
}


/* Function: call_fake_branch @ 0x1300 */
int call_fake_branch()
{
  return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x1330 */
int __cdecl param_opaque_predicate(int x)
{
  int temp; // [esp+8h] [ebp-14h]
  int b; // [esp+Ch] [ebp-10h]
  int a; // [esp+10h] [ebp-Ch]

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


/* Function: call_opaque_predicate @ 0x1410 */
int call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1440 */
int __cdecl param_instruction_substitution(int x)
{
  return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x14A0 */
int call_instruction_substitution()
{
  return param_instruction_substitution(10);
}


/* Function: decrypt_string @ 0x14D0 */
const char *__cdecl decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char *p; // [esp+10h] [ebp-8h]

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  for ( p = buffer; *p; ++p )
    *p ^= key;
  return buffer;
}


/* Function: param_string_encryption @ 0x1550 */
size_t param_string_encryption()
{
  size_t v0; // eax
  char decrypted[36]; // [esp+14h] [ebp-24h] BYREF

  decrypt_string(param_string_encryption_encrypted, decrypted, 0x20u, 90);
  v0 = strlen(decrypted);
  return decrypted[0] + v0;
}


/* Function: call_string_encryption @ 0x15B0 */
size_t call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x15D0 */
int __cdecl param_tail_call_optimized(int n, int acc)
{
  if ( n > 0 )
    return param_tail_call_optimized(n - 1, n + acc);
  else
    return acc;
}


/* Function: call_tail_call_optimized @ 0x1630 */
int call_tail_call_optimized()
{
  return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1660 */
int __cdecl param_non_tail_call(int n)
{
  if ( n > 0 )
    return param_non_tail_call(n - 1) + n;
  else
    return 0;
}


/* Function: call_non_tail_call @ 0x16C0 */
int call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x16F0 */
int __cdecl param_vectorized_loop(int *a, int *b, int *c, int n)
{
  int i_0; // [esp+0h] [ebp-Ch]
  int sum; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < n; ++i )
    c[i] = b[i] + a[i];
  sum = 0;
  for ( i_0 = 0; i_0 < n; ++i_0 )
    sum += c[i_0];
  return sum;
}


/* Function: call_vectorized_loop @ 0x1780 */
int call_vectorized_loop()
{
  int c[8]; // [esp+14h] [ebp-64h] BYREF
  int b[8]; // [esp+34h] [ebp-44h] BYREF
  int a[9]; // [esp+54h] [ebp-24h] BYREF

  memcpy(a, &unk_320C, 0x20u);
  memcpy(b, &unk_322C, sizeof(b));
  memset(c, 0, sizeof(c));
  return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0x1820 */
int __cdecl param_link_time_optimization(int x)
{
  return lto_target_func(x);
}


/* Function: lto_target_func @ 0x1850 */
int __cdecl lto_target_func(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1870 */
int call_link_time_optimization()
{
  return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x18A0 */
void __cdecl __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x18E0 */
int __cdecl param_division_by_zero(int x)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(&jmp_buffer) )
    return -1;
  else
    return 10 / x;
}


/* Function: call_division_by_zero @ 0x1950 */
int call_division_by_zero()
{
  int r2; // [esp+Ch] [ebp-Ch]
  int r1; // [esp+10h] [ebp-8h]

  r1 = param_division_by_zero(5);
  r2 = param_division_by_zero(0);
  signal(8, 0);
  return r2 + r1;
}


/* Function: segv_handler @ 0x19B0 */
void __cdecl __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x19F0 */
int __cdecl param_null_pointer_deref(int *p)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(&segv_buffer) )
    return -1;
  else
    return *p;
}


/* Function: call_null_pointer_deref @ 0x1A60 */
int call_null_pointer_deref()
{
  int r2; // [esp+18h] [ebp-10h]
  int r1; // [esp+1Ch] [ebp-Ch]
  int valid; // [esp+20h] [ebp-8h] BYREF

  valid = 42;
  r1 = param_null_pointer_deref(&valid);
  r2 = param_null_pointer_deref(0);
  signal(11, 0);
  return r2 + r1;
}


/* Function: param_buffer_overflow_stack @ 0x1AD0 */
int __cdecl param_buffer_overflow_stack(int x)
{
  int i; // [esp+4h] [ebp-10h]
  char buffer[8]; // [esp+Ch] [ebp-8h]

  for ( i = 0; i <= 16; ++i )
    buffer[i] = 65;
  return x;
}


/* Function: param_buffer_overflow_heap @ 0x1B40 */
int __cdecl param_buffer_overflow_heap(int x)
{
  int i; // [esp+8h] [ebp-10h]
  char *heap_buffer; // [esp+Ch] [ebp-Ch]

  heap_buffer = (char *)malloc(0x10u);
  if ( !heap_buffer )
    return -2;
  for ( i = 0; i <= 32; ++i )
    heap_buffer[i] = 66;
  free(heap_buffer);
  return x;
}


/* Function: call_buffer_overflow @ 0x1BD0 */
int call_buffer_overflow()
{
  int r1; // [esp+10h] [ebp-8h]

  r1 = param_buffer_overflow_stack(10);
  return param_buffer_overflow_heap(20) + r1;
}


/* Function: param_integer_overflow @ 0x1C20 */
int __cdecl param_integer_overflow(int a, int b)
{
  int signed_sum; // [esp+Ch] [ebp-8h]

  signed_sum = b + a;
  if ( a > 0 && b > 0 && signed_sum < 0 )
    return -1;
  if ( a >= 0 || b >= 0 || signed_sum <= 0 )
    return b + a;
  return -2;
}


/* Function: call_integer_overflow @ 0x1CB0 */
int call_integer_overflow()
{
  int r1; // [esp+10h] [ebp-8h]

  r1 = param_integer_overflow(1000000000, 1000000000);
  return param_integer_overflow(-1, 1) + r1;
}


/* Function: param_undefined_behavior @ 0x1D10 */
int __cdecl param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1D30 */
int call_undefined_behavior()
{
  return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1D60 */
int param_implementation_defined()
{
  return 43;
}


/* Function: call_implementation_defined @ 0x1E00 */
int call_implementation_defined()
{
  return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1E20 */
void test_obf_opt_edge()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  size_t v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  printf(asc_300D);
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


/* Function: main @ 0x1FE0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x2010 */
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


/* Function: .term_proc @ 0x205C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x5194 */

/* FAILED to decompile: printf @ 0x5198 */

/* FAILED to decompile: longjmp @ 0x519C */

/* FAILED to decompile: _setjmp @ 0x51A0 */

/* FAILED to decompile: free @ 0x51A4 */

/* FAILED to decompile: memcpy @ 0x51A8 */

/* FAILED to decompile: signal @ 0x51AC */

/* FAILED to decompile: __cxa_finalize @ 0x51B0 */

/* FAILED to decompile: malloc @ 0x51B4 */

/* FAILED to decompile: strlen @ 0x51B8 */

/* FAILED to decompile: memset @ 0x51BC */

/* FAILED to decompile: strncpy @ 0x51C0 */

/* Total functions decompiled: 49, failed: 12 */
