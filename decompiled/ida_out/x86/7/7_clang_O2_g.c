/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/7/7_clang_O2_g
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


/* Function: sub_10C0 @ 0x10C0 */
int __usercall sub_10C0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 16))();
}


/* Function: _start @ 0x10D0 */
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


/* Function: sub_10FC @ 0x10FC */
void sub_10FC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1100 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1110 */
char *deregister_tm_clones()
{
  return &completed_1;
}


/* Function: register_tm_clones @ 0x1150 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11A0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !completed_1 )
  {
    if ( &_cxa_finalize )
      sub_10C0((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1230 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1239 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x123D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: param_fake_branch @ 0x1250 */
int __cdecl param_fake_branch(int x)
{
  return x;
}


/* Function: call_fake_branch @ 0x1260 */
int call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x1270 */
int __cdecl param_opaque_predicate(int x)
{
  int v1; // ecx
  int v2; // ebx
  int v3; // eax
  int v4; // edx
  int v5; // edi
  int v6; // ecx
  int result; // eax

  v1 = 2 * x;
  v2 = -1;
  if ( x != -1 )
  {
    v3 = x;
    v4 = x + 1;
    do
    {
      v2 = v4;
      v4 = v3 % v4;
      v3 = v2;
    }
    while ( v4 );
  }
  v5 = (x * x + (v1 | 1)) ^ ((x + 1) * (x + 1));
  v6 = v1 + 10;
  result = 3 * x + 20;
  if ( !(v5 | v2 ^ 1) )
    return v6;
  return result;
}


/* Function: call_opaque_predicate @ 0x12D0 */
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
  result = 35;
  if ( v2 == 1 )
    return 20;
  return result;
}


/* Function: param_instruction_substitution @ 0x1300 */
int __cdecl param_instruction_substitution(int x)
{
  return ((unsigned int)x >> 1) + (x & 0xF) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x1320 */
int call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x1330 */
char *__cdecl decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char v4; // al
  char *v5; // edx

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  v4 = *buffer;
  if ( *buffer )
  {
    v5 = buffer + 1;
    do
    {
      *(v5 - 1) = key ^ v4;
      v4 = *v5++;
    }
    while ( v4 );
  }
  return buffer;
}


/* Function: param_string_encryption @ 0x1390 */
int param_string_encryption()
{
  char v0; // al
  char *v1; // ecx
  int v2; // edi
  char dest; // [esp+0h] [ebp-2Ch] BYREF
  _BYTE v5[43]; // [esp+1h] [ebp-2Bh] BYREF

  strncpy(&dest, param_string_encryption_encrypted, 0x20u);
  v5[30] = 0;
  v0 = dest;
  if ( dest )
  {
    v1 = v5;
    do
    {
      *(v1 - 1) = v0 ^ 0x5A;
      v0 = *v1++;
    }
    while ( v0 );
    v2 = dest;
  }
  else
  {
    v2 = 0;
  }
  return v2 + strlen(&dest);
}


/* Function: call_string_encryption @ 0x1400 */
int call_string_encryption()
{
  char v0; // al
  char *v1; // ecx
  int v2; // edi
  char dest; // [esp+0h] [ebp-2Ch] BYREF
  _BYTE v5[43]; // [esp+1h] [ebp-2Bh] BYREF

  strncpy(&dest, param_string_encryption_encrypted, 0x20u);
  v5[30] = 0;
  v0 = dest;
  if ( dest )
  {
    v1 = v5;
    do
    {
      *(v1 - 1) = v0 ^ 0x5A;
      v0 = *v1++;
    }
    while ( v0 );
    v2 = dest;
  }
  else
  {
    v2 = 0;
  }
  return v2 + strlen(&dest);
}


/* Function: param_tail_call_optimized @ 0x1470 */
int __cdecl param_tail_call_optimized(int n, int acc)
{
  int v2; // ecx

  v2 = acc;
  if ( n > 0 )
    return (n - 1) * (n - 1) + n + acc - (((unsigned int)(n - 2) * (unsigned __int64)(unsigned int)(n - 1)) >> 1);
  return v2;
}


/* Function: call_tail_call_optimized @ 0x14A0 */
int call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x14B0 */
int __cdecl param_non_tail_call(int n)
{
  if ( n <= 0 )
    return 0;
  else
    return n + (n - 1) * (n - 1) - (((unsigned int)(n - 2) * (unsigned __int64)(unsigned int)(n - 1)) >> 1);
}


/* Function: call_non_tail_call @ 0x14E0 */
int call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x14F0 */
int __cdecl param_vectorized_loop(int *a, int *b, int *c, int n)
{
  int v4; // ebp
  int *v5; // edx
  int *v6; // ebx
  int *v7; // edi
  int v8; // ebp
  int v9; // edi
  int result; // eax
  int v11; // edx

  if ( n <= 0 )
    return 0;
  v4 = 0;
  if ( (unsigned int)(n - 1) >= 3 )
  {
    v4 = 0;
    do
    {
      c[v4] = a[v4] + b[v4];
      c[v4 + 1] = a[v4 + 1] + b[v4 + 1];
      c[v4 + 2] = a[v4 + 2] + b[v4 + 2];
      c[v4 + 3] = a[v4 + 3] + b[v4 + 3];
      v4 += 4;
    }
    while ( (n & 0x7FFFFFFC) != v4 );
  }
  if ( (n & 3) != 0 )
  {
    v5 = &c[v4];
    v6 = &b[v4];
    v7 = &a[v4];
    v8 = 0;
    do
    {
      v5[v8] = v7[v8] + v6[v8];
      ++v8;
    }
    while ( (n & 3) != v8 );
  }
  if ( (unsigned int)(n - 1) >= 7 )
  {
    v9 = 0;
    result = 0;
    do
    {
      result += c[v9 + 7] + c[v9 + 6] + c[v9 + 5] + c[v9 + 4] + c[v9 + 3] + c[v9 + 2] + c[v9 + 1] + c[v9];
      v9 += 8;
    }
    while ( (n & 0x7FFFFFF8) != v9 );
  }
  else
  {
    v9 = 0;
    result = 0;
  }
  if ( (n & 7) != 0 )
  {
    v11 = 0;
    do
      result += c[v9 + v11++];
    while ( (n & 7) != v11 );
  }
  return result;
}


/* Function: call_vectorized_loop @ 0x1610 */
int call_vectorized_loop()
{
  return 72;
}


/* Function: param_link_time_optimization @ 0x1620 */
int __cdecl param_link_time_optimization(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1630 */
int call_link_time_optimization()
{
  return 20;
}


/* Function: div_zero_handler @ 0x1640 */
void __noreturn div_zero_handler()
{
  div_zero_caught = 1;
  longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x1670 */
int __cdecl param_division_by_zero(int x)
{
  int v1; // eax
  int v2; // ecx

  signal(8, (__sighandler_t)div_zero_handler);
  v1 = _setjmp(&jmp_buffer);
  v2 = -1;
  if ( !v1 )
    return 10 / x;
  return v2;
}


/* Function: call_division_by_zero @ 0x16D0 */
int call_division_by_zero()
{
  int v0; // esi
  int v1; // edi

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return v0 + v1;
}


/* Function: segv_handler @ 0x1720 */
void __noreturn segv_handler()
{
  segv_caught = 1;
  longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1750 */
int __cdecl param_null_pointer_deref(int *p)
{
  int v1; // eax
  int v2; // ecx

  signal(11, (__sighandler_t)segv_handler);
  v1 = _setjmp(&segv_buffer);
  v2 = -1;
  if ( !v1 )
    return *p;
  return v2;
}


/* Function: call_null_pointer_deref @ 0x17A0 */
int call_null_pointer_deref()
{
  int v0; // esi
  int v1; // edi
  int p[4]; // [esp+Ch] [ebp-10h] BYREF

  p[0] = 42;
  v0 = param_null_pointer_deref(p);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x1800 */
int __cdecl param_buffer_overflow_stack(int x)
{
  return x;
}


/* Function: param_buffer_overflow_heap @ 0x1810 */
int __cdecl param_buffer_overflow_heap(int x)
{
  return x;
}


/* Function: call_buffer_overflow @ 0x1820 */
int call_buffer_overflow()
{
  return 30;
}


/* Function: param_integer_overflow @ 0x1830 */
int __cdecl param_integer_overflow(int a, int b)
{
  int v2; // ecx
  int result; // eax

  v2 = b + a;
  if ( a <= 0 || b <= 0 || (result = -1, v2 >= 0) )
  {
    result = -2;
    if ( v2 <= 0 )
      result = b + a;
    if ( (a & b) >= 0 )
      return b + a;
  }
  return result;
}


/* Function: call_integer_overflow @ 0x1860 */
int call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1870 */
int __cdecl param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1880 */
int call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x1890 */
int param_implementation_defined()
{
  return 43;
}


/* Function: call_implementation_defined @ 0x18A0 */
int call_implementation_defined()
{
  return 43;
}


/* Function: test_obf_opt_edge @ 0x18B0 */
void test_obf_opt_edge()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  bool v3; // zf
  int v4; // ecx
  char v5; // al
  char *v6; // ecx
  int v7; // esi
  size_t v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // esi
  int v12; // edi
  char dest[4]; // [esp+Ch] [ebp-30h] BYREF
  char v14; // [esp+2Bh] [ebp-11h]

  puts(asc_21D9);
  printf(aObfL402D, 10);
  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  v3 = v2 == 1;
  v4 = 35;
  if ( v3 )
    v4 = 20;
  printf(aObfL403D, v4);
  printf(aObfL404D, 225);
  strncpy(dest, param_string_encryption_encrypted, 0x20u);
  v14 = 0;
  v5 = dest[0];
  if ( dest[0] )
  {
    v6 = &dest[1];
    do
    {
      *(v6 - 1) = v5 ^ 0x5A;
      v5 = *v6++;
    }
    while ( v5 );
    v7 = dest[0];
  }
  else
  {
    v7 = 0;
  }
  v8 = strlen(dest);
  printf(aObfL405D, v7 + v8);
  printf(aOptL401, 500500);
  printf(aOptL401_0, 5050);
  printf(aOptL402, 72);
  printf(aOptL501LtoD, 20);
  v9 = param_division_by_zero(5);
  v10 = param_division_by_zero(0);
  signal(8, 0);
  printf(aEdgeL301D, v9 + v10);
  *(_DWORD *)dest = 42;
  v11 = param_null_pointer_deref((int *)dest);
  v12 = param_null_pointer_deref(0);
  signal(11, 0);
  printf(aEdgeL302D, v11 + v12);
  printf(aEdgeL303D, 30);
  printf(aEdgeL304D, 2000000000);
  printf(aEdgeL401D, 10);
  printf(aEdgeL402D, 43);
}


/* Function: main @ 0x1B00 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x1B20 */
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


/* Function: .term_proc @ 0x1B6C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4188 */

/* FAILED to decompile: printf @ 0x418C */

/* FAILED to decompile: longjmp @ 0x4190 */

/* FAILED to decompile: _setjmp @ 0x4194 */

/* FAILED to decompile: signal @ 0x4198 */

/* FAILED to decompile: __cxa_finalize @ 0x419C */

/* FAILED to decompile: puts @ 0x41A0 */

/* FAILED to decompile: strlen @ 0x41A4 */

/* FAILED to decompile: strncpy @ 0x41A8 */

/* Total functions decompiled: 48, failed: 9 */
