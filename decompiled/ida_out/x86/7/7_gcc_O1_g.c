/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/7/7_gcc_O1_g
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
void sub_10D0()
{
  sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
int __usercall sub_10F0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 60))();
}


/* Function: _start @ 0x11B0 */
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


/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x11F0 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x1230 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1280 */
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


/* Function: frame_dummy @ 0x1310 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: div_zero_handler @ 0x1321 */
void __cdecl __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x134C */
void __cdecl __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x1377 */
int __cdecl param_fake_branch(int x)
{
  return x;
}


/* Function: call_fake_branch @ 0x1380 */
int call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x138A */
int __cdecl param_opaque_predicate(int x)
{
  int v1; // ecx
  bool v2; // bp
  int v3; // eax
  int v4; // ebx

  v1 = x + 1;
  if ( x == -1 )
    return 3 * x + 20;
  v2 = 2 * x + x * x + 1 == v1 * v1;
  v3 = x;
  do
  {
    v4 = v1;
    v1 = v3 % v1;
    v3 = v4;
  }
  while ( v1 );
  if ( v4 == 1 && v2 )
    return 2 * x + 10;
  else
    return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x13DD */
int call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x13EC */
int __cdecl param_instruction_substitution(int x)
{
  return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x140E */
int call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x1418 */
const char *__cdecl decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char v4; // al
  char *v5; // edx

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  v4 = *buffer;
  if ( *buffer )
  {
    v5 = buffer;
    do
    {
      *v5++ = key ^ v4;
      v4 = *v5;
    }
    while ( *v5 );
  }
  return buffer;
}


/* Function: param_string_encryption @ 0x146F */
__int64 param_string_encryption()
{
  size_t v0; // eax
  __int64 result; // rax
  char decrypted[32]; // [esp+1Ch] [ebp-30h] BYREF
  unsigned int v3; // [esp+3Ch] [ebp-10h]

  v3 = __readgsdword(0x14u);
  decrypt_string(encrypted_0, decrypted, 0x20u, 90);
  v0 = strlen(decrypted);
  LODWORD(result) = v0 + decrypted[0];
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: call_string_encryption @ 0x14D0 */
__int64 call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14E0 */
int __cdecl param_tail_call_optimized(int n, int acc)
{
  int result; // eax

  result = acc;
  if ( n > 0 )
    return param_tail_call_optimized(n - 1, n + acc);
  return result;
}


/* Function: call_tail_call_optimized @ 0x150B */
int call_tail_call_optimized()
{
  return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1522 */
int __cdecl param_non_tail_call(int n)
{
  int result; // eax

  result = 0;
  if ( n > 0 )
    return n + param_non_tail_call(n - 1);
  return result;
}


/* Function: call_non_tail_call @ 0x154D */
int call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x155F */
int __cdecl param_vectorized_loop(int *a, int *b, int *c, int n)
{
  int i; // eax
  int *v5; // edx
  int *v6; // ecx
  int result; // eax

  if ( n <= 0 )
    return 0;
  for ( i = 0; i != n; ++i )
    c[i] = a[i] + b[i];
  v5 = c;
  v6 = &c[i];
  result = 0;
  do
    result += *v5++;
  while ( v5 != v6 );
  return result;
}


/* Function: call_vectorized_loop @ 0x15AD */
int call_vectorized_loop()
{
  unsigned int v0; // eax
  int a[8]; // [esp+Ch] [ebp-70h] BYREF
  int b[8]; // [esp+2Ch] [ebp-50h] BYREF
  int c[8]; // [esp+4Ch] [ebp-30h] BYREF
  unsigned int v5; // [esp+6Ch] [ebp-10h]

  v5 = __readgsdword(0x14u);
  v0 = 0;
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;
  a[5] = 6;
  a[6] = 7;
  a[7] = 8;
  b[0] = 8;
  b[1] = 7;
  b[2] = 6;
  b[3] = 5;
  b[4] = 4;
  b[5] = 3;
  b[6] = 2;
  b[7] = 1;
  do
    c[v0++] = 0;
  while ( v0 < 8 );
  return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0x1684 */
int __cdecl param_link_time_optimization(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1691 */
int call_link_time_optimization()
{
  return 20;
}


/* Function: param_division_by_zero @ 0x169B */
int __cdecl param_division_by_zero(int x)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(jmp_buffer) )
    return -1;
  else
    return 10 / x;
}


/* Function: call_division_by_zero @ 0x16EB */
int call_division_by_zero()
{
  int v0; // esi
  int v1; // edi

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x172D */
int __cdecl param_null_pointer_deref(int *p)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(segv_buffer) )
    return -1;
  else
    return *p;
}


/* Function: call_null_pointer_deref @ 0x1779 */
__int64 call_null_pointer_deref()
{
  int v0; // esi
  int v1; // edi
  __int64 result; // rax
  int valid; // [esp+18h] [ebp-14h] BYREF
  unsigned int v4; // [esp+1Ch] [ebp-10h]

  v4 = __readgsdword(0x14u);
  valid = 42;
  v0 = param_null_pointer_deref(&valid);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  LODWORD(result) = v0 + v1;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: param_buffer_overflow_stack @ 0x17E7 */
int __cdecl param_buffer_overflow_stack(int x)
{
  return x;
}


/* Function: param_buffer_overflow_heap @ 0x17F0 */
int __cdecl param_buffer_overflow_heap(int x)
{
  void *v1; // eax
  int v2; // edx

  v1 = malloc(0x10u);
  if ( !v1 )
    return -2;
  v2 = 33;
  do
    --v2;
  while ( v2 );
  free(v1);
  return x;
}


/* Function: call_buffer_overflow @ 0x183A */
int call_buffer_overflow()
{
  return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x184F */
int __cdecl param_integer_overflow(int a, int b)
{
  int result; // eax

  result = a + b;
  if ( b > 0 && a > 0 && result < 0 )
    return -1;
  if ( (b & a) < 0 && result > 0 )
    return -2;
  return result;
}


/* Function: call_integer_overflow @ 0x1890 */
int call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x189A */
int __cdecl param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x18A5 */
int call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x18AF */
int param_implementation_defined()
{
  return 43;
}


/* Function: call_implementation_defined @ 0x18B9 */
int call_implementation_defined()
{
  return 43;
}


/* Function: test_obf_opt_edge @ 0x18C3 */
void test_obf_opt_edge()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  puts(asc_2008);
  __printf_chk(1, &unk_212F, 10);
  v0 = call_opaque_predicate();
  __printf_chk(1, &unk_214B, v0);
  __printf_chk(1, &unk_2167, 225);
  v1 = param_string_encryption();
  __printf_chk(1, &unk_2184, v1);
  v2 = call_tail_call_optimized();
  __printf_chk(1, &unk_2038, v2);
  v3 = call_non_tail_call();
  __printf_chk(1, &unk_2064, v3);
  v4 = call_vectorized_loop();
  __printf_chk(1, &unk_208C, v4);
  __printf_chk(1, &unk_20B4, 20);
  v5 = call_division_by_zero();
  __printf_chk(1, &unk_21A0, v5);
  v6 = call_null_pointer_deref();
  __printf_chk(1, &unk_21BC, v6);
  v7 = call_buffer_overflow();
  __printf_chk(1, &unk_21D9, v7);
  __printf_chk(1, &unk_20D4, 2000000000);
  __printf_chk(1, &unk_21F6, 10);
  __printf_chk(1, &unk_2108, 43);
}


/* Function: main @ 0x1A17 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: __stack_chk_fail_local @ 0x1A30 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x1A50 */
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


/* Function: .term_proc @ 0x1A9C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x41A0 */

/* FAILED to decompile: _setjmp @ 0x41A4 */

/* FAILED to decompile: free @ 0x41A8 */

/* FAILED to decompile: signal @ 0x41AC */

/* FAILED to decompile: __stack_chk_fail @ 0x41B0 */

/* FAILED to decompile: __cxa_finalize @ 0x41B4 */

/* FAILED to decompile: malloc @ 0x41B8 */

/* FAILED to decompile: puts @ 0x41BC */

/* FAILED to decompile: strlen @ 0x41C0 */

/* FAILED to decompile: strncpy @ 0x41C4 */

/* FAILED to decompile: __printf_chk @ 0x41C8 */

/* FAILED to decompile: __longjmp_chk @ 0x41CC */

/* Total functions decompiled: 60, failed: 12 */
