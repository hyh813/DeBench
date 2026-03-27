/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_O1_no_g
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


/* Function: _start @ 0x10E0 */
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


/* Function: deregister_tm_clones @ 0x1110 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1140 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1180 */
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


/* Function: frame_dummy @ 0x11C0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: recursion_factorial @ 0x11C9 */
__int64 __fastcall recursion_factorial(int a1)
{
  __int64 result; // rax

  result = 1;
  if ( a1 > 1 )
    return a1 * (unsigned int)recursion_factorial((unsigned int)(a1 - 1));
  return result;
}


/* Function: double_value @ 0x11E8 */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x11F0 */
__int64 __fastcall triple_value(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0x11F8 */
__int64 __fastcall op_add(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x1200 */
__int64 __fastcall op_sub(int a1, int a2)
{
  return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x1209 */
__int64 __fastcall op_mul(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x1213 */
__int64 __fastcall op_div(int a1, unsigned int a2)
{
  if ( a2 )
    return (unsigned int)(a1 / (int)a2);
  return a2;
}


/* Function: op_mod @ 0x1225 */
__int64 __fastcall op_mod(int a1, unsigned int a2)
{
  if ( a2 )
    return (unsigned int)(a1 % (int)a2);
  return a2;
}


/* Function: op_and @ 0x1237 */
__int64 __fastcall op_and(unsigned int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x1240 */
__int64 __fastcall op_or(unsigned int a1, int a2)
{
  return a2 | a1;
}


/* Function: op_xor @ 0x1249 */
__int64 __fastcall op_xor(unsigned int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x1252 */
__int64 __fastcall op_shl(int a1, char a2)
{
  return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x125D */
__int64 __fastcall op_shr(int a1, char a2)
{
  return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0x1268 */
_BOOL8 __fastcall state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x1276 */
__int64 __fastcall state_processing(int a1)
{
  if ( a1 == 2 )
    return 2;
  else
    return 2 * (unsigned int)(a1 == 99) + 1;
}


/* Function: state_done @ 0x1290 */
__int64 state_done()
{
  return 2;
}


/* Function: state_error @ 0x129A */
__int64 __fastcall state_error(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 )
    return 3;
  return result;
}


/* Function: sequential_ops @ 0x12AB */
__int64 __fastcall sequential_ops(int a1, int a2, int a3)
{
  return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x12B7 */
__int64 __fastcall single_if(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(2 * a1);
  if ( a1 <= 0 )
    return (unsigned int)a1;
  return result;
}


/* Function: if_else @ 0x12C4 */
_BOOL8 __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x12D1 */
__int64 __fastcall nested_if_2(int a1, int a2)
{
  __int64 result; // rax

  result = 0;
  if ( a1 > 0 )
  {
    result = (unsigned int)(a1 + a2);
    if ( a2 <= 0 )
      return (unsigned int)a1;
  }
  return result;
}


/* Function: nested_if_deep @ 0x12E7 */
__int64 __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = 0;
  if ( a1 > 0 )
  {
    result = 1;
    if ( a2 > 0 )
    {
      if ( a3 <= 0 )
      {
        return 2;
      }
      else if ( a4 <= 0 )
      {
        return 3;
      }
      else
      {
        return (unsigned int)(a5 > 0) + 4;
      }
    }
  }
  return result;
}


/* Function: if_elseif_chain @ 0x131E */
__int64 __fastcall if_elseif_chain(int a1)
{
  __int64 result; // rax

  result = 10;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      return 20;
    }
    else
    {
      result = 30;
      if ( a1 != 2 )
        return 0xFFFFFFFFLL;
    }
  }
  return result;
}


/* Function: if_elseif_long @ 0x1347 */
__int64 __fastcall if_elseif_long(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      result = 100;
      break;
    case 1:
      result = 200;
      break;
    case 2:
      result = 300;
      break;
    case 3:
      result = 400;
      break;
    case 4:
      result = 500;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}


/* Function: switch_small @ 0x1387 */
__int64 __fastcall switch_small(int a1)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return 50;
  if ( a1 > 2 )
    return 3 * (unsigned int)(a1 == 3) - 1;
  result = 15;
  if ( a1 )
  {
    result = 0xFFFFFFFFLL;
    if ( a1 == 1 )
      return 5;
  }
  return result;
}


/* Function: switch_large @ 0x13C0 */
__int64 __fastcall switch_large(unsigned int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0u:
      result = a1;
      break;
    case 1u:
      result = 10;
      break;
    case 2u:
      result = 20;
      break;
    case 3u:
      result = 30;
      break;
    case 4u:
      result = 40;
      break;
    case 5u:
      result = 50;
      break;
    case 6u:
      result = 60;
      break;
    case 7u:
      result = 70;
      break;
    case 8u:
      result = 80;
      break;
    case 9u:
      result = 90;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}


/* Function: switch_default @ 0x141B */
__int64 __fastcall switch_default(int a1)
{
  __int64 result; // rax

  result = 200;
  if ( a1 != 2 )
  {
    result = 300;
    if ( a1 != 3 )
    {
      result = 0;
      if ( a1 == 1 )
        return 100;
    }
  }
  return result;
}


/* Function: switch_fallthrough @ 0x1444 */
__int64 __fastcall switch_fallthrough(int a1)
{
  int v2; // eax
  int v3; // eax

  if ( a1 == 2 )
  {
    v2 = 0;
LABEL_7:
    v3 = v2 + 2 * a1;
    return (unsigned int)(a1 + v3);
  }
  if ( a1 == 3 )
  {
    v2 = 12;
    goto LABEL_7;
  }
  if ( a1 != 1 )
    return 0xFFFFFFFFLL;
  v3 = 0;
  return (unsigned int)(a1 + v3);
}


/* Function: loop_for_fixed @ 0x1476 */
__int64 __fastcall loop_for_fixed(int a1)
{
  int v1; // eax
  unsigned int v2; // edx

  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v1 = 0;
    v2 = 0;
    do
      v2 += v1++;
    while ( a1 != v1 );
  }
  return v2;
}


/* Function: loop_while @ 0x149B */
__int64 __fastcall loop_while(int a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    LODWORD(result) = 0;
    do
    {
      a1 /= 10;
      result = (unsigned int)(result + 1);
    }
    while ( a1 );
  }
  else
  {
    result = 0;
  }
  if ( (int)result <= 0 )
    return 1;
  return result;
}


/* Function: loop_dowhile @ 0x14D3 */
__int64 __fastcall loop_dowhile(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  do
  {
    a1 /= 10;
    ++v1;
  }
  while ( a1 );
  return v1;
}


/* Function: loop_nested @ 0x14FB */
__int64 __fastcall loop_nested(int a1, int a2)
{
  int v2; // edx
  unsigned int v3; // ecx
  int v5; // eax

  v2 = 0;
  v3 = 0;
  if ( a1 > 0 )
  {
    do
    {
      v5 = 0;
      if ( a2 > 0 )
      {
        do
          ++v5;
        while ( a2 != v5 );
        v3 += v5;
      }
      ++v2;
    }
    while ( a1 != v2 );
  }
  return v3;
}


/* Function: loop_break @ 0x152B */
__int64 __fastcall loop_break(int a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  _DWORD v4[6]; // [rsp+0h] [rbp-28h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v1 = 0;
  v4[0] = 10;
  v4[1] = 20;
  v4[2] = 30;
  v4[3] = 40;
  v4[4] = 50;
  while ( 1 )
  {
    v2 = v1;
    if ( v4[v1] == a1 )
      break;
    if ( ++v1 == 5 )
      return (unsigned int)-1;
  }
  return v2;
}


/* Function: loop_continue @ 0x159F */
__int64 __fastcall loop_continue(int a1)
{
  int v1; // edi
  int v2; // eax
  unsigned int v3; // edx

  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v1 = a1 + 1;
    v2 = 1;
    v3 = 0;
    do
    {
      if ( (v2 & 1) != 0 )
        v3 += v2;
      ++v2;
    }
    while ( v2 != v1 );
  }
  return v3;
}


/* Function: goto_forward @ 0x15CD */
__int64 __fastcall goto_forward(int a1)
{
  if ( a1 > 0 )
    a1 *= a1;
  return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0x15DE */
__int64 __fastcall goto_backward(int a1)
{
  unsigned int v1; // edx
  int v2; // edi
  int v3; // eax

  v1 = 1;
  if ( a1 > 0 )
  {
    v2 = a1 + 1;
    v3 = 1;
    do
      v1 *= v3++;
    while ( v3 != v2 );
  }
  return v1;
}


/* Function: ternary_op @ 0x1600 */
__int64 __fastcall ternary_op(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1;
  if ( (int)a2 >= (int)a1 )
    return a2;
  return result;
}


/* Function: test_control_flow_l1 @ 0x160C */
__int64 test_control_flow_l1()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  puts(s);
  __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
  __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
  __printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
  __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
  __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
  __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
  __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
  __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
  __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
  __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
  __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
  __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
  v0 = loop_for_fixed(10);
  __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", v0);
  v1 = loop_while(12345);
  __printf_chk(1, "CF-L1-13 (loop_while): %d\n", v1);
  v2 = loop_dowhile(9876);
  __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", v2);
  v3 = loop_nested(3, 4);
  __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", v3);
  v4 = loop_break(30);
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v4);
  v5 = loop_break(99);
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v5);
  v6 = loop_continue(10);
  __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", v6);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
  v7 = goto_backward(5);
  __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", v7);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x192B */
__int64 __fastcall loop_multi_exit(int a1)
{
  _DWORD *v1; // rdx
  int v2; // esi
  __int64 i; // rax
  _DWORD v5[14]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5[0] = 1;
  v5[1] = 2;
  v5[2] = 3;
  v5[3] = 4;
  v5[4] = 5;
  v5[5] = 6;
  v5[6] = 7;
  v5[7] = 8;
  v5[8] = 9;
  v5[9] = 10;
  v5[10] = 11;
  v5[11] = 12;
  v1 = v5;
  v2 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v1[i] == a1 )
        return (unsigned int)(i + 10 * v2);
    }
    ++v2;
    v1 += 4;
    if ( v2 != 3 )
      continue;
    break;
  }
  return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x19F3 */
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
      return result;
    }
  }
  return result;
}


/* Function: multi_return @ 0x1A14 */
__int64 __fastcall multi_return(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return 0xFFFFFFFFLL;
  result = (unsigned int)(2 * a1);
  if ( (int)result > 100 )
    return 4294967294LL;
  if ( (a1 & 1) != 0 )
    return (unsigned int)(a1 + 1);
  return result;
}


/* Function: conditional_return @ 0x1A3B */
__int64 __fastcall conditional_return(int a1)
{
  __int64 result; // rax

  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  result = (unsigned int)-a1;
  if ( a1 >= 0 )
    return 0;
  return result;
}


/* Function: duffs_device @ 0x1A56 */
__int64 __fastcall duffs_device(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // edx
  int v7; // edi
  _DWORD *v8; // r8
  _DWORD *v9; // rdx
  _DWORD *v10; // r8
  _DWORD *v11; // rdx
  _DWORD *v12; // r8
  _DWORD *v13; // rdx

  result = (unsigned int)a3;
  if ( a3 <= 0 )
    return 0xFFFFFFFFLL;
  v5 = a3 + 14;
  v6 = a3 + 7;
  if ( v6 >= 0 )
    v5 = v6;
  v7 = v5 >> 3;
  switch ( (int)result % 8 )
  {
    case 0:
      goto LABEL_13;
    case 1:
      v12 = a2;
      v13 = a1;
      goto LABEL_11;
    case 2:
      goto LABEL_10;
    case 3:
      v10 = a2;
      v11 = a1;
      goto LABEL_9;
    case 4:
      goto LABEL_8;
    case 5:
      v8 = a2;
      v9 = a1;
      goto LABEL_7;
    case 6:
      goto LABEL_6;
    case 7:
      while ( 1 )
      {
        *a1++ = *a2++;
LABEL_6:
        v8 = a2 + 1;
        v9 = a1 + 1;
        *a1 = *a2;
LABEL_7:
        a2 = v8 + 1;
        a1 = v9 + 1;
        *v9 = *v8;
LABEL_8:
        v10 = a2 + 1;
        v11 = a1 + 1;
        *a1 = *a2;
LABEL_9:
        a2 = v10 + 1;
        a1 = v11 + 1;
        *v11 = *v10;
LABEL_10:
        v12 = a2 + 1;
        v13 = a1 + 1;
        *a1 = *a2;
LABEL_11:
        *v13 = *v12;
        if ( --v7 <= 0 )
          break;
        a2 = v12 + 1;
        a1 = v13 + 1;
LABEL_13:
        *a1++ = *a2++;
      }
      break;
    default:
      return result;
  }
  return result;
}


/* Function: loop_complex_cond @ 0x1B30 */
__int64 __fastcall loop_complex_cond(int a1)
{
  int v1; // edx
  int v2; // eax

  if ( a1 <= 0 )
  {
    v1 = 0;
    v2 = 0;
  }
  else
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v2 += 2;
      --a1;
      ++v1;
    }
    while ( v1 <= 9 && v2 < a1 && a1 > 0 );
  }
  return (unsigned int)(v1 + a1 + v2);
}


/* Function: loop_modify_var @ 0x1B71 */
__int64 __fastcall loop_modify_var(int a1)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // edx

  v1 = 0;
  v2 = 0;
  if ( a1 > 0 )
  {
    while ( 1 )
    {
      v3 = v2 + 1;
      if ( a1 <= v2 + 1 )
        break;
      v1 += v3;
      v2 += 3;
      if ( v3 <= 5 )
        v2 = v3;
    }
  }
  return v1;
}


/* Function: loop_external_state @ 0x1B9A */
__int64 __fastcall loop_external_state(_DWORD *a1)
{
  __int64 result; // rax

  result = 0;
  do
  {
    if ( *a1 )
      break;
    result = (unsigned int)(result + 1);
  }
  while ( (_DWORD)result != 101 );
  return result;
}


/* Function: tail_recursion @ 0x1BB2 */
__int64 __fastcall tail_recursion(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( a1 > 1 )
    return tail_recursion((unsigned int)(a1 - 1), a1 * a2);
  return result;
}


/* Function: indirect_recursion_a @ 0x1BD2 */
__int64 __fastcall indirect_recursion_a(unsigned int a1, int a2)
{
  __int64 result; // rax
  int v3; // eax
  unsigned int v4; // edi

  result = a1;
  if ( a2 > 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      v3 = 3 * a1;
      if ( a2 <= 1 )
        return (unsigned int)(v3 + 1);
      else
        return indirect_recursion_a((unsigned int)(v3 + 2), (unsigned int)(a2 - 2));
    }
    else
    {
      v4 = (int)a1 / 2;
      result = v4;
      if ( a2 > 1 )
        return indirect_recursion_a(v4 + 1, (unsigned int)(a2 - 2));
    }
  }
  return result;
}


/* Function: call_func_ptr @ 0x1C1F */
__int64 __fastcall call_func_ptr(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1C33 */
__int64 __fastcall call_func_ptr_array(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v7)(int); // [rsp+0h] [rbp-28h]
  __int64 (__fastcall *v8)(int); // [rsp+8h] [rbp-20h]
  __int64 (__fastcall *v9)(int); // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v7 = double_value;
  v8 = triple_value;
  v9 = recursion_factorial;
  if ( a1 > 2 )
    return 0xFFFFFFFFLL;
  else
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(int), __int64 (__fastcall *)(int), __int64, __int64, __int64 (__fastcall *)(int), __int64 (__fastcall *)(int), __int64 (__fastcall *)(int), unsigned __int64))*(&v7 + (int)a1))(
             (unsigned int)a2,
             a2,
             triple_value,
             recursion_factorial,
             a5,
             a6,
             v7,
             v8,
             v9,
             v10);
}


/* Function: call_virtual_func @ 0x1C9D */
__int64 __fastcall call_virtual_func(__int64 a1, int a2)
{
  return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1CA5 */
__int64 __fastcall process_with_callback(unsigned int *a1, int a2, __int64 (__fastcall *a3)(_QWORD))
{
  unsigned int *v4; // rbx
  unsigned int v5; // ebp

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = a1;
    v5 = 0;
    do
      v5 += a3(*v4++);
    while ( v4 != &a1[a2 - 1 + 1] );
  }
  return v5;
}


/* Function: test_control_flow_l2 @ 0x1CEE */
unsigned __int64 test_control_flow_l2()
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  int v22; // [rsp+8h] [rbp-90h] BYREF
  int v23; // [rsp+Ch] [rbp-8Ch] BYREF
  unsigned int v24[8]; // [rsp+10h] [rbp-88h] BYREF
  _DWORD v25[8]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v26[5]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  puts(asc_3170);
  v0 = loop_multi_exit(7);
  __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  v22 = 0;
  v1 = infinite_loop(&v22);
  __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  v25[0] = 1;
  v25[1] = 2;
  v25[2] = 3;
  v25[3] = 4;
  v25[4] = 5;
  v25[5] = 6;
  v25[6] = 7;
  v25[7] = 8;
  memset(v26, 0, 32);
  v2 = duffs_device(v26, v25, 8);
  __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
  v3 = loop_complex_cond(10);
  __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
  v4 = loop_modify_var(10);
  __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
  v23 = 0;
  v5 = loop_external_state(&v23);
  __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
  v6 = recursion_factorial(5);
  __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
  v7 = tail_recursion(5, 1u);
  __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v7);
  v8 = indirect_recursion_a(0xAu, 3);
  __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v8);
  v9 = call_func_ptr((__int64 (__fastcall *)(_QWORD))double_value, 5u);
  __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v9);
  v14 = call_func_ptr_array(0, 5, v10, v11, v12, v13);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v14);
  v19 = call_func_ptr_array(2u, 5, v15, v16, v17, v18);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v19);
  v24[0] = 1;
  v24[1] = 2;
  v24[2] = 3;
  v24[3] = 4;
  v24[4] = 5;
  v20 = process_with_callback(v24, 5, (__int64 (__fastcall *)(_QWORD))double_value);
  __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v20);
  return v27 - __readfsqword(0x28u);
}


/* Function: non_local_jump @ 0x203C */
__int64 __fastcall non_local_jump(int a1)
{
  if ( _setjmp(jump_buffer) )
    return 0xFFFFFFFFLL;
  if ( a1 < 0 )
    __longjmp_chk(jump_buffer, 1);
  if ( a1 > 100 )
    __longjmp_chk(jump_buffer, 2);
  return (unsigned int)(2 * a1);
}


/* Function: cpp_exception @ 0x209E */
__int64 __fastcall cpp_exception(int a1)
{
  if ( a1 < 0 )
    return 0xFFFFFFFFLL;
  if ( a1 > 100 )
    return 4294967294LL;
  return (unsigned int)(2 * a1);
}


/* Function: large_jump_table @ 0x20BB */
__int64 __fastcall large_jump_table(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v7)(int, int); // [rsp+0h] [rbp-68h]
  __int64 (__fastcall *v8)(int, int); // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v9)(int, int); // [rsp+10h] [rbp-58h]
  __int64 (__fastcall *v10)(int, unsigned int); // [rsp+18h] [rbp-50h]
  __int64 (__fastcall *v11)(int, unsigned int); // [rsp+20h] [rbp-48h]
  __int64 (__fastcall *v12)(unsigned int, int); // [rsp+28h] [rbp-40h]
  __int64 (__fastcall *v13)(unsigned int, int); // [rsp+30h] [rbp-38h]
  __int64 (__fastcall *v14)(unsigned int, int); // [rsp+38h] [rbp-30h]
  __int64 (__fastcall *v15)(int, char); // [rsp+40h] [rbp-28h]
  __int64 (__fastcall *v16)(int, char); // [rsp+48h] [rbp-20h]
  unsigned __int64 v17; // [rsp+58h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  v7 = op_add;
  v8 = op_sub;
  v9 = op_mul;
  v10 = op_div;
  v11 = op_mod;
  v12 = op_and;
  v13 = op_or;
  v14 = op_xor;
  v15 = op_shl;
  v16 = op_shr;
  if ( a1 > 9 )
    return 0xFFFFFFFFLL;
  else
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 (__fastcall *)(int, char), __int64 (__fastcall *)(int, char), __int64, __int64, __int64 (__fastcall *)(int, int), __int64 (__fastcall *)(int, int), __int64 (__fastcall *)(int, int), __int64 (__fastcall *)(int, unsigned int), __int64 (__fastcall *)(int, unsigned int), __int64 (__fastcall *)(unsigned int, int), __int64 (__fastcall *)(unsigned int, int), __int64 (__fastcall *)(unsigned int, int), __int64 (__fastcall *)(int, char), __int64 (__fastcall *)(int, char)))*(&v7 + (int)a1))(
             a2,
             a3,
             op_shr,
             op_shl,
             a5,
             a6,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16);
}


/* Function: conditional_func_ptr @ 0x217B */
__int64 __fastcall conditional_func_ptr(int a1, int a2)
{
  __int64 (__fastcall *v2)(int); // rdx

  v2 = double_value;
  if ( a1 )
  {
    v2 = triple_value;
    if ( a1 != 1 )
      v2 = recursion_factorial;
  }
  return v2(a2);
}


/* Function: state_machine @ 0x21AE */
__int64 __fastcall state_machine(unsigned int a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 2 )
    return 2;
  if ( a2 > 2 )
  {
    if ( a2 == 3 )
    {
      result = a1;
      if ( a1 )
        return 3;
    }
    else
    {
      return 3;
    }
  }
  else if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( a1 == 2 )
      {
        return 2;
      }
      else
      {
        result = 3;
        if ( a1 != 99 )
          return 1;
      }
    }
    else
    {
      return 3;
    }
  }
  else
  {
    return a1 == 1;
  }
  return result;
}


/* Function: fsm_func_table @ 0x21FC */
__int64 __fastcall fsm_func_table(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h]

  v5[5] = __readfsqword(0x28u);
  v5[0] = state_idle;
  v5[1] = state_processing;
  v5[2] = state_done;
  v5[3] = state_error;
  result = 3;
  if ( a2 <= 3 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v5[a2])(a1, (int)a2, a3, a4);
  return result;
}


/* Function: computed_goto @ 0x226D */
__int64 __fastcall computed_goto(__int64 a1, unsigned int a2)
{
  _QWORD v3[7]; // [rsp+0h] [rbp-38h]

  v3[5] = __readfsqword(0x28u);
  v3[0] = &loc_22BF;
  v3[1] = &loc_22DD;
  v3[2] = &loc_22E8;
  v3[3] = &loc_22F3;
  if ( a2 <= 3 )
    __asm { jmp     [rsp+rsi*8+38h+var_38] }
  return 0xFFFFFFFFLL;
}


/* Function: obfuscated_cf @ 0x230A */
__int64 __fastcall obfuscated_cf(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x2312 */
__int64 __fastcall opaque_predicate(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x231A */
__int64 __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return (unsigned int)(3 * a1 + 1);
  else
    return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x2333 */
unsigned __int64 test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  _DWORD v12[6]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  puts(asc_3310);
  v0 = non_local_jump(5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
  v5 = large_jump_table(0, 0xAu, 5u, v2, v3, v4);
  __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v5);
  v6 = conditional_func_ptr(0, 5);
  __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v6);
  __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
  v9 = fsm_func_table(2, 1u, v7, v8);
  __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v9);
  v12[0] = 0;
  v12[1] = 1;
  v12[2] = 2;
  v12[3] = 3;
  v10 = computed_goto((__int64)v12, 2u);
  __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v10);
  __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
  return v13 - __readfsqword(0x28u);
}


/* Function: main @ 0x2515 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1(argc, argv, envp);
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: .term_proc @ 0x2548 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6110 */

/* FAILED to decompile: puts @ 0x6118 */

/* FAILED to decompile: __stack_chk_fail @ 0x6120 */

/* FAILED to decompile: _setjmp @ 0x6128 */

/* FAILED to decompile: __printf_chk @ 0x6130 */

/* FAILED to decompile: __longjmp_chk @ 0x6138 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6140 */

/* FAILED to decompile: __gmon_start__ @ 0x6150 */

/* Total functions decompiled: 78, failed: 8 */
