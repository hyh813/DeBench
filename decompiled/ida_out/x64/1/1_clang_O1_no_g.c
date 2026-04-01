/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/1/1_clang_O1_no_g
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


/* Function: _start @ 0x1080 */
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


/* Function: deregister_tm_clones @ 0x10B0 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10E0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1120 */
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


/* Function: frame_dummy @ 0x1160 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: sequential_ops @ 0x1170 */
__int64 __fastcall sequential_ops(int a1, int a2, int a3)
{
  return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x1180 */
__int64 __fastcall single_if(int a1)
{
  return (unsigned int)(a1 << (a1 > 0));
}


/* Function: if_else @ 0x1190 */
_BOOL8 __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x11A0 */
__int64 __fastcall nested_if_2(int a1, int a2)
{
  __int64 result; // rax

  if ( a2 < 0 )
    a2 = 0;
  result = (unsigned int)(a2 + a1);
  if ( a1 <= 0 )
    return 0;
  return result;
}


/* Function: nested_if_deep @ 0x11B0 */
__int64 __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return 1;
  if ( a3 <= 0 )
    return 2;
  if ( a4 <= 0 )
    return 3;
  return (a5 > 0) | 4u;
}


/* Function: if_elseif_chain @ 0x11F0 */
__int64 __fastcall if_elseif_chain(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 < 3 )
    return 10 * a1 + 10;
  return result;
}


/* Function: if_elseif_long @ 0x1210 */
__int64 __fastcall if_elseif_long(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 < 5 )
    return 100 * a1 + 100;
  return result;
}


/* Function: switch_small @ 0x1230 */
__int64 __fastcall switch_small(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 3 )
    return dword_3654[a1];
  return result;
}


/* Function: switch_large @ 0x1250 */
__int64 __fastcall switch_large(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 < 0xA )
    return 10 * a1;
  return result;
}


/* Function: switch_default @ 0x1270 */
__int64 __fastcall switch_default(int a1)
{
  unsigned int v1; // edi
  __int64 result; // rax

  v1 = a1 - 1;
  result = 0;
  if ( v1 < 3 )
    return 100 * v1 + 100;
  return result;
}


/* Function: switch_fallthrough @ 0x1290 */
__int64 __fastcall switch_fallthrough(int a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = 0;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      result = 0xFFFFFFFFLL;
      if ( a1 != 3 )
        return result;
      v1 = 12;
    }
    v1 += 2 * a1;
  }
  return (unsigned int)(a1 + v1);
}


/* Function: loop_for_fixed @ 0x12C0 */
__int64 __fastcall loop_for_fixed(int a1)
{
  if ( a1 <= 0 )
    return 0;
  else
    return (unsigned int)(((unsigned int)(a1 - 1) * (unsigned __int64)(unsigned int)(a1 - 2)) >> 1) + a1 - 1;
}


/* Function: loop_while @ 0x12E0 */
__int64 __fastcall loop_while(int a1)
{
  unsigned int v1; // ecx
  int v2; // eax
  __int64 result; // rax

  v1 = 0;
  if ( a1 )
  {
    do
    {
      v2 = a1;
      a1 /= 10;
      ++v1;
    }
    while ( (unsigned int)(v2 + 9) > 0x12 );
  }
  result = 1;
  if ( v1 )
    return v1;
  return result;
}


/* Function: loop_dowhile @ 0x1320 */
__int64 __fastcall loop_dowhile(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  LODWORD(result) = 0;
  do
  {
    v2 = a1;
    a1 /= 10;
    result = (unsigned int)(result + 1);
  }
  while ( (unsigned int)(v2 + 9) > 0x12 );
  return result;
}


/* Function: loop_nested @ 0x1360 */
__int64 __fastcall loop_nested(int a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // esi

  result = 0;
  if ( a2 <= 0 )
    a2 = 0;
  v3 = a1 * a2;
  if ( a1 > 0 )
    return v3;
  return result;
}


/* Function: loop_break @ 0x1370 */
__int64 __fastcall loop_break(int a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax

  v1 = &unk_3040;
  result = 0;
  while ( *v1 != a1 )
  {
    ++result;
    ++v1;
    if ( result == 5 )
      return 0xFFFFFFFFLL;
  }
  return result;
}


/* Function: loop_continue @ 0x13A0 */
__int64 __fastcall loop_continue(int a1)
{
  int v1; // edi
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx

  if ( a1 <= 0 )
    return 0;
  v1 = -a1;
  LODWORD(result) = 0;
  v3 = 1;
  do
  {
    result = (v3 & -(v3 & 1)) + (int)result;
    v4 = v1 + v3++ + 1;
  }
  while ( v4 != 1 );
  return result;
}


/* Function: goto_forward @ 0x13D0 */
__int64 __fastcall goto_forward(int a1)
{
  int v1; // eax

  v1 = 1;
  if ( a1 > 0 )
    v1 = a1;
  return (unsigned int)(2 * a1 * v1);
}


/* Function: goto_backward @ 0x13E0 */
__int64 __fastcall goto_backward(int a1)
{
  int v1; // edi
  int v2; // ecx
  __int64 result; // rax
  int v4; // edx

  if ( a1 <= 0 )
    return 1;
  v1 = -a1;
  v2 = 1;
  LODWORD(result) = 1;
  do
  {
    result = (unsigned int)(v2 * result);
    v4 = v1 + v2++ + 1;
  }
  while ( v4 != 1 );
  return result;
}


/* Function: ternary_op @ 0x1410 */
__int64 __fastcall ternary_op(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( (int)a1 > (int)a2 )
    return a1;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1420 */
int test_control_flow_l1()
{
  puts(s);
  printf("CF-L1-01 (sequential_ops): %d\n", 21);
  printf("CF-L1-02 (single_if): %d\n", 20);
  printf("CF-L1-02 (single_if): %d\n", -5);
  printf("CF-L1-03 (if_else): %d\n", 1);
  printf("CF-L1-03 (if_else): %d\n", 0);
  printf("CF-L1-04 (nested_if_2): %d\n", 15);
  printf("CF-L1-04 (nested_if_2): %d\n", 10);
  printf("CF-L1-04 (nested_if_2): %d\n", 0);
  printf("CF-L1-05 (nested_if_deep): %d\n", 5);
  printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
  printf("CF-L1-07 (if_elseif_long): %d\n", 400);
  printf("CF-L1-08 (switch_small): %d\n", 50);
  printf("CF-L1-09 (switch_large): %d\n", 70);
  printf("CF-L1-10 (switch_default): %d\n", 0);
  printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
  printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
  printf("CF-L1-13 (loop_while): %d\n", 5);
  printf("CF-L1-14 (loop_dowhile): %d\n", 4);
  printf("CF-L1-15 (loop_nested): %d\n", 12);
  printf("CF-L1-16 (loop_break): %d\n", 2);
  printf("CF-L1-16 (loop_break): %d\n", -1);
  printf("CF-L1-17 (loop_continue): %d\n", 25);
  printf("CF-L1-18 (goto_forward): %d\n", 50);
  printf("CF-L1-18 (goto_forward): %d\n", -6);
  printf("CF-L1-19 (goto_backward): %d\n", 120);
  printf("CF-L1-20 (ternary_op): %d\n", 10);
  return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1620 */
__int64 __fastcall loop_multi_exit(int a1)
{
  _DWORD *v1; // rcx
  __int64 i; // r10
  bool v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  int v8; // esi

  v1 = &unk_3064;
  for ( i = 0; i != 3; ++i )
  {
    if ( *((_DWORD *)&unk_3060 + 4 * i) == a1 )
    {
      v3 = 1;
      LODWORD(v4) = 0;
LABEL_8:
      result = (unsigned int)(v4 + 10 * i);
      v8 = 1;
      if ( v3 )
        goto LABEL_11;
    }
    else
    {
      v5 = 0;
      while ( v5 != 3 )
      {
        v4 = v5 + 1;
        if ( v1[v5++] == a1 )
        {
          v3 = (unsigned __int64)(v4 - 1) < 3;
          goto LABEL_8;
        }
      }
    }
    v1 += 4;
  }
  v8 = 2;
LABEL_11:
  if ( v8 == 2 )
    return 0xFFFFFFFFLL;
  return result;
}


/* Function: infinite_loop @ 0x16F0 */
__int64 __fastcall infinite_loop(_DWORD *a1)
{
  __int64 result; // rax

  result = 0;
  while ( *a1 != 1 )
  {
    result = (unsigned int)(result + 1);
    if ( (_DWORD)result == 1001 )
    {
      *a1 = 1;
      return 1001;
    }
  }
  return result;
}


/* Function: multi_return @ 0x1720 */
__int64 __fastcall multi_return(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return 0xFFFFFFFFLL;
  result = 4294967294LL;
  if ( a1 <= 50 )
  {
    result = (unsigned int)(a1 + 1);
    if ( (a1 & 1) == 0 )
      return (unsigned int)(2 * a1);
  }
  return result;
}


/* Function: conditional_return @ 0x1750 */
__int64 __fastcall conditional_return(int a1)
{
  __int64 result; // rax

  result = (unsigned int)-a1;
  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  return result;
}


/* Function: duffs_device @ 0x1760 */
__int64 __fastcall duffs_device(_DWORD *a1, int *a2, int a3)
{
  __int64 result; // rax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  result = 0xFFFFFFFFLL;
  if ( a3 > 0 )
  {
    v4 = a3 + 14;
    if ( a3 + 7 >= 0 )
      v4 = a3 + 7;
    v5 = v4 >> 3;
    switch ( a3 - (a3 & 0xFFFFFFF8) )
    {
      case 0u:
        goto LABEL_5;
      case 1u:
        goto LABEL_12;
      case 2u:
        goto LABEL_11;
      case 3u:
        goto LABEL_10;
      case 4u:
        goto LABEL_9;
      case 5u:
        goto LABEL_8;
      case 6u:
        goto LABEL_7;
      case 7u:
        while ( 1 )
        {
          v7 = *a2++;
          *a1++ = v7;
LABEL_7:
          v8 = *a2++;
          *a1++ = v8;
LABEL_8:
          v9 = *a2++;
          *a1++ = v9;
LABEL_9:
          v10 = *a2++;
          *a1++ = v10;
LABEL_10:
          v11 = *a2++;
          *a1++ = v11;
LABEL_11:
          v12 = *a2++;
          *a1++ = v12;
LABEL_12:
          v13 = *a2++;
          *a1++ = v13;
          if ( v5-- <= 1 )
            break;
LABEL_5:
          v6 = *a2++;
          *a1++ = v6;
        }
        break;
      default:
        return (unsigned int)a3;
    }
    return (unsigned int)a3;
  }
  return result;
}


/* Function: loop_complex_cond @ 0x1810 */
__int64 __fastcall loop_complex_cond(int a1)
{
  unsigned int v1; // edx
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ecx

  if ( a1 <= 0 )
  {
    v2 = 0;
    v4 = 0;
  }
  else
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = a1;
      v2 += 2;
      --a1;
      v4 = v1 + 1;
      if ( v3 < 2 )
        break;
      if ( v2 >= a1 )
        break;
    }
    while ( v1++ < 9 );
  }
  return v4 + a1 + v2;
}


/* Function: loop_modify_var @ 0x1850 */
__int64 __fastcall loop_modify_var(int a1)
{
  int v1; // ecx
  __int64 result; // rax
  int v3; // edx

  if ( a1 <= 0 )
    return 0;
  v1 = 0;
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(v1 + result);
    v3 = v1 + 2;
    if ( v1 < 6 )
      v3 = v1;
    v1 = v3 + 1;
  }
  while ( v3 + 1 < a1 );
  return result;
}


/* Function: loop_external_state @ 0x1880 */
__int64 __fastcall loop_external_state(_DWORD *a1)
{
  __int64 result; // rax

  result = 0;
  while ( !*a1 )
  {
    result = (unsigned int)(result + 1);
    if ( (_DWORD)result == 101 )
      return 101;
  }
  return result;
}


/* Function: recursion_factorial @ 0x18B0 */
__int64 __fastcall recursion_factorial(int a1)
{
  __int64 result; // rax

  result = 1;
  if ( a1 >= 2 )
    return a1 * (unsigned int)recursion_factorial((unsigned int)(a1 - 1));
  return result;
}


/* Function: tail_recursion @ 0x18D0 */
__int64 __fastcall tail_recursion(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( a1 >= 2 )
    return tail_recursion((unsigned int)(a1 - 1), a1 * a2);
  return result;
}


/* Function: indirect_recursion_a @ 0x18F0 */
__int64 __fastcall indirect_recursion_a(unsigned int a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // eax

  result = a1;
  if ( a2 > 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( a2 < 2 )
        return 3 * a1 + 1;
      v3 = 3 * a1 + 2;
    }
    else
    {
      result = (unsigned int)((int)a1 / 2);
      if ( a2 < 2 )
        return result;
      v3 = result + 1;
    }
    return indirect_recursion_a(v3, (unsigned int)(a2 - 2));
  }
  return result;
}


/* Function: call_func_ptr @ 0x1940 */
__int64 __fastcall call_func_ptr(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1950 */
__int64 __fastcall call_func_ptr_array(unsigned int a1, int a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 2 )
    return ((__int64 (__fastcall *)(int))funcs_1967[a1])(a2);
  return result;
}


/* Function: double_value @ 0x1970 */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x1980 */
__int64 __fastcall triple_value(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: call_virtual_func @ 0x1990 */
__int64 __fastcall call_virtual_func(__int64 a1, int a2)
{
  return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x19A0 */
__int64 __fastcall process_with_callback(__int64 a1, int a2, __int64 (__fastcall *a3)(_QWORD))
{
  __int64 v4; // rbx
  unsigned int v5; // ebp

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    do
      v5 += a3(*(unsigned int *)(a1 + 4 * v4++));
    while ( a2 != v4 );
  }
  return v5;
}


/* Function: test_control_flow_l2 @ 0x19F0 */
int __fastcall test_control_flow_l2(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  int v3; // ecx
  __int64 i; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbp
  int v8; // edi
  int v9; // ebx
  unsigned int v10; // ebp
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax

  puts(asc_3609);
  v2 = &unk_3064;
  v3 = 0;
  for ( i = 0; i != 3; ++i )
  {
    v5 = 0;
    while ( v5 != 3 )
    {
      v6 = v5 + 1;
      if ( v2[v5++] == 7 )
      {
        v8 = 1;
        a2 = v6 - v3;
        if ( (unsigned __int64)(v6 - 1) < 3 )
          goto LABEL_8;
        break;
      }
    }
    v3 -= 10;
    v2 += 4;
  }
  v8 = 2;
LABEL_8:
  if ( v8 == 2 )
    a2 = -1;
  v9 = 0;
  printf("CF-L2-01 (loop_multi_exit): %d\n", a2);
  do
    ++v9;
  while ( v9 != 1001 );
  printf("CF-L2-02 (infinite_loop): %d\n", 1001);
  v10 = -1;
  printf("CF-L2-03 (multi_return): %d\n", -1);
  printf("CF-L2-03 (multi_return): %d\n", -2);
  printf("CF-L2-03 (multi_return): %d\n", 4);
  v11 = 10;
  printf("CF-L2-04 (conditional_return): %d\n", 10);
  printf("CF-L2-04 (conditional_return): %d\n", 5);
  printf("CF-L2-05 (duffs_device): %d\n", 8);
  v12 = 11;
  do
  {
    v13 = v11 - 8;
    v11 += 2;
    if ( v13 >= v12 - 2 )
      break;
    ++v10;
    --v12;
  }
  while ( v10 < 9 );
  v14 = 0;
  printf("CF-L2-06 (loop_complex_cond): %d\n", v11);
  printf("CF-L2-07 (loop_modify_var): %d\n", 30);
  do
    ++v14;
  while ( v14 != 101 );
  printf("CF-L2-08 (loop_external_state): %d\n", 101);
  v15 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n", v15);
  v16 = tail_recursion(5, 1u);
  printf("CF-L2-10 (tail_recursion): %d\n", v16);
  v17 = indirect_recursion_a(0xAu, 3);
  printf("CF-L2-11 (indirect_recursion): %d\n", v17);
  printf("CF-L2-12 (call_func_ptr): %d\n", 10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
  v18 = recursion_factorial(5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v18);
  return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x1C80 */
__int64 __fastcall non_local_jump(int a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = _setjmp(jump_buffer);
  v2 = -1;
  if ( !v1 )
  {
    if ( a1 < 0 )
      longjmp(jump_buffer, 1);
    if ( a1 >= 101 )
      longjmp(jump_buffer, 2);
    return (unsigned int)(2 * a1);
  }
  return v2;
}


/* Function: cpp_exception @ 0x1CD0 */
__int64 __fastcall cpp_exception(int a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = -2;
  if ( a1 < 101 )
    v1 = 2 * a1;
  result = 0xFFFFFFFFLL;
  if ( a1 >= 0 )
    return v1;
  return result;
}


/* Function: large_jump_table @ 0x1CF0 */
__int64 __fastcall large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 9 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))funcs_1D09[a1])(a2, a3);
  return result;
}


/* Function: op_add @ 0x1D20 */
__int64 __fastcall op_add(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x1D30 */
__int64 __fastcall op_sub(int a1, int a2)
{
  return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x1D40 */
__int64 __fastcall op_mul(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x1D50 */
__int64 __fastcall op_div(int a1, int a2)
{
  if ( a2 )
    return (unsigned int)(a1 / a2);
  else
    return 0;
}


/* Function: op_mod @ 0x1D60 */
__int64 __fastcall op_mod(int a1, int a2)
{
  if ( a2 )
    return (unsigned int)(a1 % a2);
  else
    return 0;
}


/* Function: op_and @ 0x1D70 */
__int64 __fastcall op_and(unsigned int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x1D80 */
__int64 __fastcall op_or(unsigned int a1, int a2)
{
  return a2 | a1;
}


/* Function: op_xor @ 0x1D90 */
__int64 __fastcall op_xor(unsigned int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x1DA0 */
__int64 __fastcall op_shl(int a1, char a2)
{
  return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x1DB0 */
__int64 __fastcall op_shr(int a1, char a2)
{
  return (unsigned int)(a1 >> a2);
}


/* Function: conditional_func_ptr @ 0x1DC0 */
__int64 __fastcall conditional_func_ptr(int a1, int a2)
{
  __int64 (__fastcall *v2)(int); // rcx
  __int64 (__fastcall *v3)(int); // rax

  v2 = recursion_factorial;
  if ( a1 == 1 )
    v2 = triple_value;
  v3 = double_value;
  if ( a1 )
    v3 = v2;
  return v3(a2);
}


/* Function: state_machine @ 0x1DF0 */
__int64 __fastcall state_machine(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  switch ( a2 )
  {
    case 0u:
      result = a1 == 1;
      break;
    case 1u:
      result = 2 * (unsigned int)(a1 == 99) + 1;
      if ( a1 == 2 )
        result = 2;
      break;
    case 2u:
      return result;
    case 3u:
      result = 3 * (unsigned int)(a1 != 0);
      break;
    default:
      result = 3;
      break;
  }
  return result;
}


/* Function: fsm_func_table @ 0x1E40 */
__int64 __fastcall fsm_func_table(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 3;
  if ( a2 <= 3 )
    return ((__int64 (__fastcall *)(__int64))funcs_1E55[a2])(a1);
  return result;
}


/* Function: state_idle @ 0x1E60 */
_BOOL8 __fastcall state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x1E70 */
__int64 __fastcall state_processing(int a1)
{
  __int64 result; // rax

  result = 2 * (unsigned int)(a1 == 99) + 1;
  if ( a1 == 2 )
    return 2;
  return result;
}


/* Function: state_done @ 0x1E90 */
__int64 state_done()
{
  return 2;
}


/* Function: state_error @ 0x1EA0 */
__int64 __fastcall state_error(int a1)
{
  return 3 * (unsigned int)(a1 != 0);
}


/* Function: computed_goto @ 0x1EB0 */
__int64 __fastcall computed_goto(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 10;
      break;
    case 2:
      result = 20;
      break;
    case 3:
      result = 30;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}


/* Function: obfuscated_cf @ 0x1EE0 */
__int64 __fastcall obfuscated_cf(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1EF0 */
__int64 __fastcall opaque_predicate(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1F00 */
__int64 __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return (unsigned int)(3 * a1 + 1);
  else
    return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x1F20 */
int test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax

  puts(asc_362D);
  v0 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n", v1);
  printf("CF-L3-02 (cpp_exception): %d\n", 10);
  printf("CF-L3-02 (cpp_exception): %d\n", -1);
  printf("CF-L3-03 (large_jump_table): %d\n", 15);
  printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
  printf("CF-L3-05 (state_machine): %d\n", 1);
  printf("CF-L3-06 (fsm_func_table): %d\n", 2);
  v2 = computed_goto((__int64)"CF-L3-06 (fsm_func_table): %d\n", 2);
  printf("CF-L3-07 (computed_goto): %d\n", v2);
  printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
  printf("CF-L3-09 (opaque_predicate): %d\n", 10);
  return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x2030 */
// local variable allocation has failed, the output may be wrong!
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2(*(__int64 *)&argc, (int)argv);
  test_control_flow_l3();
  return 0;
}


/* Function: .term_proc @ 0x2044 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6130 */

/* FAILED to decompile: puts @ 0x6138 */

/* FAILED to decompile: printf @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6148 */

/* FAILED to decompile: longjmp @ 0x6150 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6158 */

/* FAILED to decompile: __gmon_start__ @ 0x6168 */

/* Total functions decompiled: 73, failed: 7 */
