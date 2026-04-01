/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_gcc_O3_no_g
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


/* Function: main @ 0x11B0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: _start @ 0x11D0 */
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


/* Function: sub_11FC @ 0x11FC */
void sub_11FC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1200 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1210 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x1250 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x12A0 */
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


/* Function: frame_dummy @ 0x1330 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1339 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x133D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: div_zero_handler @ 0x1350 */
void __noreturn div_zero_handler()
{
  div_zero_caught = 1;
  __longjmp_chk(&jmp_buffer, 1);
}


/* Function: segv_handler @ 0x1380 */
void __noreturn segv_handler()
{
  segv_caught = 1;
  __longjmp_chk(&segv_buffer, 1);
}


/* Function: param_division_by_zero.constprop.0 @ 0x13B0 */
int param_division_by_zero_constprop_0()
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( !_setjmp(&jmp_buffer) )
    BUG();
  return -1;
}


/* Function: param_division_by_zero.constprop.1 @ 0x1400 */
int param_division_by_zero_constprop_1()
{
  signal(8, (__sighandler_t)div_zero_handler);
  return _setjmp(&jmp_buffer) == 0 ? 2 : -1;
}


/* Function: param_fake_branch @ 0x1440 */
int __cdecl param_fake_branch(int a1)
{
  return a1;
}


/* Function: call_fake_branch @ 0x1450 */
int call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x1460 */
int __cdecl param_opaque_predicate(int a1)
{
  int v1; // edx
  bool v2; // di
  int v3; // eax
  int v4; // ecx

  v1 = a1 + 1;
  if ( a1 == -1 )
    return 3 * a1 + 20;
  v2 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
  v3 = a1;
  do
  {
    v4 = v1;
    v1 = v3 % v1;
    v3 = v4;
  }
  while ( v1 );
  if ( v4 == 1 && v2 )
    return 2 * a1 + 10;
  else
    return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x14C0 */
int call_opaque_predicate()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  int result; // eax

  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  result = 20;
  if ( v2 != 1 )
    return 35;
  return result;
}


/* Function: param_instruction_substitution @ 0x14F0 */
int __cdecl param_instruction_substitution(unsigned int a1)
{
  return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1520 */
int call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x1530 */
char *__cdecl decrypt_string(char *src, char *dest, size_t n, char a4)
{
  char v4; // al
  char *v5; // edx

  strncpy(dest, src, n);
  dest[n - 1] = 0;
  v4 = *dest;
  if ( *dest )
  {
    v5 = dest;
    do
    {
      *v5++ = a4 ^ v4;
      v4 = *v5;
    }
    while ( *v5 );
  }
  return dest;
}


/* Function: param_string_encryption @ 0x1590 */
__int64 param_string_encryption()
{
  char v0; // dl
  char *v1; // eax
  __int64 result; // rax
  char dest[32]; // [esp+Eh] [ebp-30h] BYREF
  unsigned int v4; // [esp+2Eh] [ebp-10h]

  v4 = __readgsdword(0x14u);
  strncpy(dest, encrypted_0, 0x1Fu);
  v0 = dest[0];
  dest[31] = 0;
  if ( dest[0] )
  {
    v1 = dest;
    do
    {
      *v1++ = v0 ^ 0x5A;
      v0 = *v1;
    }
    while ( *v1 );
    v0 = dest[0];
  }
  LODWORD(result) = v0 + strlen(dest);
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: call_string_encryption @ 0x1630 */
__int64 call_string_encryption()
{
  char v0; // dl
  char *v1; // eax
  __int64 result; // rax
  char dest[32]; // [esp+Eh] [ebp-30h] BYREF
  unsigned int v4; // [esp+2Eh] [ebp-10h]

  v4 = __readgsdword(0x14u);
  strncpy(dest, encrypted_0, 0x1Fu);
  v0 = dest[0];
  dest[31] = 0;
  if ( dest[0] )
  {
    v1 = dest;
    do
    {
      *v1++ = v0 ^ 0x5A;
      v0 = *v1;
    }
    while ( *v1 );
    v0 = dest[0];
  }
  LODWORD(result) = v0 + strlen(dest);
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: param_tail_call_optimized @ 0x16D0 */
int __cdecl param_tail_call_optimized(int a1, int a2)
{
  int v2; // eax

  v2 = a1;
  if ( a1 > 0 )
  {
    do
      a2 += v2--;
    while ( v2 );
  }
  return a2;
}


/* Function: call_tail_call_optimized @ 0x16F0 */
int call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x1700 */
int __cdecl param_non_tail_call(int a1)
{
  int v1; // eax
  int v2; // edx

  v1 = a1;
  v2 = 0;
  if ( a1 > 0 )
  {
    do
      v2 += v1--;
    while ( v1 );
  }
  return v2;
}


/* Function: call_non_tail_call @ 0x1720 */
int call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x1730 */
int __cdecl param_vectorized_loop(int a1, int a2, _DWORD *a3, int a4)
{
  int i; // eax
  _DWORD *v5; // eax
  int v6; // edx

  if ( a4 <= 0 )
    return 0;
  for ( i = 0; i != a4; ++i )
    a3[i] = *(_DWORD *)(a1 + 4 * i) + *(_DWORD *)(a2 + 4 * i);
  v5 = a3;
  v6 = 0;
  do
    v6 += *v5++;
  while ( &a3[a4] != v5 );
  return v6;
}


/* Function: call_vectorized_loop @ 0x1790 */
int call_vectorized_loop()
{
  return 72;
}


/* Function: param_link_time_optimization @ 0x17A0 */
int __cdecl param_link_time_optimization(int a1)
{
  return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x17B0 */
int call_link_time_optimization()
{
  return 20;
}


/* Function: param_division_by_zero @ 0x17C0 */
int __cdecl param_division_by_zero(int a1)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(&jmp_buffer) )
    return -1;
  else
    return 10 / a1;
}


/* Function: call_division_by_zero @ 0x1820 */
int call_division_by_zero()
{
  int v0; // esi
  int v1; // edi

  v0 = param_division_by_zero_constprop_1();
  v1 = param_division_by_zero_constprop_0();
  signal(8, 0);
  return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x1860 */
int __cdecl param_null_pointer_deref(int a1)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(&segv_buffer) )
    return -1;
  else
    return *(_DWORD *)a1;
}


/* Function: call_null_pointer_deref @ 0x18B0 */
__int64 call_null_pointer_deref()
{
  int v0; // esi
  int v1; // edi
  __int64 result; // rax
  int v3; // [esp+18h] [ebp-14h] BYREF
  unsigned int v4; // [esp+1Ch] [ebp-10h]

  v4 = __readgsdword(0x14u);
  v3 = 42;
  v0 = param_null_pointer_deref((int)&v3);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  LODWORD(result) = v0 + v1;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: param_buffer_overflow_stack @ 0x1920 */
int __cdecl param_buffer_overflow_stack(int a1)
{
  return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1930 */
int __cdecl param_buffer_overflow_heap(int a1)
{
  void *v1; // eax

  v1 = malloc(0x10u);
  if ( !v1 )
    return -2;
  free(v1);
  return a1;
}


/* Function: call_buffer_overflow @ 0x1970 */
int call_buffer_overflow()
{
  void *v0; // eax

  v0 = malloc(0x10u);
  if ( !v0 )
    return 8;
  free(v0);
  return 30;
}


/* Function: param_integer_overflow @ 0x19B0 */
int __cdecl param_integer_overflow(int a1, int a2)
{
  int result; // eax

  result = a1 + a2;
  if ( a1 <= 0 || a2 <= 0 )
  {
    if ( (a2 & a1) < 0 && result > 0 )
      return -2;
  }
  else if ( result < 0 )
  {
    return -1;
  }
  return result;
}


/* Function: call_integer_overflow @ 0x19F0 */
int call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1A00 */
int __cdecl param_undefined_behavior(int a1)
{
  return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1A10 */
int call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x1A20 */
int param_implementation_defined()
{
  return 43;
}


/* Function: call_implementation_defined @ 0x1A30 */
int call_implementation_defined()
{
  return 43;
}


/* Function: test_obf_opt_edge @ 0x1A40 */
unsigned int test_obf_opt_edge()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  char v4; // dl
  char *v5; // eax
  size_t v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  void *v12; // eax
  int v13; // eax
  char v15; // [esp+1Fh] [ebp-3Dh]
  int v16; // [esp+28h] [ebp-34h] BYREF
  char dest[32]; // [esp+2Ch] [ebp-30h] BYREF
  unsigned int v18; // [esp+4Ch] [ebp-10h]

  v18 = __readgsdword(0x14u);
  puts(asc_2008);
  __printf_chk(1, &unk_212F, 10);
  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  v3 = 20;
  if ( v2 != 1 )
    v3 = 35;
  __printf_chk(1, &unk_214B, v3);
  __printf_chk(1, &unk_2167, 225);
  strncpy(dest, encrypted_0, 0x1Fu);
  v4 = dest[0];
  dest[31] = 0;
  if ( dest[0] )
  {
    v5 = dest;
    do
    {
      *v5++ = v4 ^ 0x5A;
      v4 = *v5;
    }
    while ( *v5 );
    v4 = dest[0];
  }
  v15 = v4;
  v6 = strlen(dest);
  __printf_chk(1, &unk_2184, v6 + v15);
  __printf_chk(1, &unk_2038, 500500);
  __printf_chk(1, &unk_2064, 5050);
  v7 = call_vectorized_loop();
  __printf_chk(1, &unk_208C, v7);
  __printf_chk(1, &unk_20B4, 20);
  v8 = param_division_by_zero_constprop_1();
  v9 = param_division_by_zero_constprop_0() + v8;
  signal(8, 0);
  __printf_chk(1, &unk_21A0, v9);
  v16 = 42;
  v10 = param_null_pointer_deref((int)&v16);
  v11 = param_null_pointer_deref(0) + v10;
  signal(11, 0);
  __printf_chk(1, &unk_21BC, v11);
  v12 = malloc(0x10u);
  if ( v12 )
  {
    free(v12);
    v13 = 30;
  }
  else
  {
    v13 = 8;
  }
  __printf_chk(1, &unk_21D9, v13);
  __printf_chk(1, &unk_20D4, 2000000000);
  __printf_chk(1, &unk_21F6, 10);
  __printf_chk(1, &unk_2108, 43);
  return v18 - __readgsdword(0x14u);
}


/* Function: __stack_chk_fail_local @ 0x1CA0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x1CC0 */
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


/* Function: .term_proc @ 0x1D0C */
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

/* Total functions decompiled: 62, failed: 12 */
