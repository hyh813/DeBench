/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_Os_no_g
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


/* Function: main @ 0x10E0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1(argc, argv, envp);
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: _start @ 0x1100 */
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


/* Function: deregister_tm_clones @ 0x1130 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1160 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11A0 */
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


/* Function: frame_dummy @ 0x11E0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: recursion_factorial @ 0x11E9 */
__int64 __fastcall recursion_factorial(int a1)
{
  __int64 result; // rax

  result = 1;
  while ( a1 > 1 )
  {
    result = (unsigned int)(a1 * result);
    --a1;
  }
  return result;
}


/* Function: double_value @ 0x11FF */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x1207 */
__int64 __fastcall triple_value(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0x120F */
__int64 __fastcall op_add(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x1217 */
__int64 __fastcall op_sub(int a1, int a2)
{
  return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x1220 */
__int64 __fastcall op_mul(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x122A */
__int64 __fastcall op_div(int a1, signed int a2)
{
  unsigned int v2; // r8d

  v2 = a2;
  if ( a2 )
    return (unsigned int)(a1 / a2);
  return v2;
}


/* Function: op_mod @ 0x1241 */
__int64 __fastcall op_mod(int a1, signed int a2)
{
  unsigned int v2; // edx

  v2 = a2;
  if ( a2 )
    return (unsigned int)(a1 % a2);
  return v2;
}


/* Function: op_and @ 0x1253 */
__int64 __fastcall op_and(unsigned int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x125C */
__int64 __fastcall op_or(unsigned int a1, int a2)
{
  return a2 | a1;
}


/* Function: op_xor @ 0x1265 */
__int64 __fastcall op_xor(unsigned int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x126E */
__int64 __fastcall op_shl(int a1, char a2)
{
  return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x1279 */
__int64 __fastcall op_shr(int a1, char a2)
{
  return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0x1284 */
_BOOL8 __fastcall state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x1290 */
__int64 __fastcall state_processing(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != 2 )
  {
    if ( a1 == 99 )
      return 3;
    else
      return 1;
  }
  return result;
}


/* Function: state_done @ 0x12AC */
__int64 state_done()
{
  return 2;
}


/* Function: state_error @ 0x12B6 */
__int64 __fastcall state_error(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 )
    return 3;
  return result;
}


/* Function: sequential_ops @ 0x12C6 */
__int64 __fastcall sequential_ops(int a1, int a2, int a3)
{
  return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x12D2 */
__int64 __fastcall single_if(int a1)
{
  __int64 result; // rax

  result = (unsigned int)a1;
  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  return result;
}


/* Function: if_else @ 0x12DF */
_BOOL8 __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x12EB */
__int64 __fastcall nested_if_2(int a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)a1;
  if ( a1 <= 0 )
    return 0;
  if ( a2 > 0 )
    return (unsigned int)(a2 + a1);
  return result;
}


/* Function: nested_if_deep @ 0x12FF */
__int64 __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = 0;
  if ( a1 > 0 )
  {
    result = 1;
    if ( a2 > 0 )
    {
      result = 2;
      if ( a3 > 0 )
      {
        result = 3;
        if ( a4 > 0 )
          return (unsigned int)(a5 > 0) + 4;
      }
    }
  }
  return result;
}


/* Function: if_elseif_chain @ 0x1330 */
__int64 __fastcall if_elseif_chain(int a1)
{
  __int64 result; // rax

  result = 10;
  if ( a1 )
  {
    result = 20;
    if ( a1 != 1 )
    {
      result = 30;
      if ( a1 != 2 )
        return 0xFFFFFFFFLL;
    }
  }
  return result;
}


/* Function: if_elseif_long @ 0x1358 */
__int64 __fastcall if_elseif_long(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 4 )
    return 100 * (a1 + 1);
  return result;
}


/* Function: switch_small @ 0x136A */
__int64 __fastcall switch_small(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 3 )
    return (unsigned int)CSWTCH_55[a1];
  return result;
}


/* Function: switch_large @ 0x1384 */
__int64 __fastcall switch_large(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 9 )
    return 10 * a1;
  return result;
}


/* Function: switch_default @ 0x1394 */
__int64 __fastcall switch_default(int a1)
{
  __int64 result; // rax

  result = 0;
  if ( (unsigned int)(a1 - 1) <= 2 )
    return (unsigned int)(100 * a1);
  return result;
}


/* Function: switch_fallthrough @ 0x13A6 */
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


/* Function: loop_for_fixed @ 0x13D0 */
__int64 __fastcall loop_for_fixed(int a1)
{
  int v1; // eax
  unsigned int v2; // r8d

  v1 = 0;
  v2 = 0;
  while ( v1 < a1 )
    v2 += v1++;
  return v2;
}


/* Function: loop_while @ 0x13E8 */
__int64 __fastcall loop_while(int a1)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = 0;
  while ( a1 )
  {
    ++v2;
    a1 /= 10;
  }
  result = 1;
  if ( v2 > 0 )
    return (unsigned int)v2;
  return result;
}


/* Function: loop_dowhile @ 0x140B */
__int64 __fastcall loop_dowhile(int a1)
{
  unsigned int v2; // r8d

  v2 = 0;
  do
  {
    ++v2;
    a1 /= 10;
  }
  while ( a1 );
  return v2;
}


/* Function: loop_nested @ 0x1427 */
__int64 __fastcall loop_nested(int a1, int a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = 0;
  result = 0;
  if ( a2 < 0 )
    a2 = 0;
  while ( v2 < a1 )
  {
    result = (unsigned int)(a2 + result);
    ++v2;
  }
  return result;
}


/* Function: loop_break @ 0x1441 */
__int64 __fastcall loop_break(int a1)
{
  __int64 v1; // rax
  unsigned int v2; // r8d
  _QWORD v4[2]; // [rsp+4h] [rbp-24h]
  int v5; // [rsp+14h] [rbp-14h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5 = 50;
  v4[0] = 0x140000000ALL;
  v4[1] = 0x280000001ELL;
  v1 = 0;
  while ( 1 )
  {
    v2 = v1;
    if ( *((_DWORD *)v4 + v1) == a1 )
      break;
    if ( ++v1 == 5 )
      return (unsigned int)-1;
  }
  return v2;
}


/* Function: loop_continue @ 0x14B6 */
__int64 __fastcall loop_continue(int a1)
{
  int v1; // eax
  unsigned int v2; // r8d

  v1 = 1;
  v2 = 0;
  while ( v1 <= a1 )
  {
    if ( (v1 & 1) != 0 )
      v2 += v1;
    ++v1;
  }
  return v2;
}


/* Function: goto_forward @ 0x14D5 */
__int64 __fastcall goto_forward(int a1)
{
  if ( a1 > 0 )
    a1 *= a1;
  return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0x14E4 */
__int64 __fastcall goto_backward(int a1)
{
  unsigned int v1; // r8d
  int i; // eax

  v1 = 1;
  if ( a1 > 0 )
  {
    for ( i = 1; i <= a1; ++i )
      v1 *= i;
  }
  return v1;
}


/* Function: ternary_op @ 0x1505 */
__int64 __fastcall ternary_op(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1;
  if ( (int)a2 >= (int)a1 )
    return a2;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1511 */
__int64 test_control_flow_l1()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

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
  __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x17CE */
__int64 __fastcall loop_multi_exit(int a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  _QWORD *v6; // rcx
  __int64 i; // rdx
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 12;
  v9[7] = __readfsqword(0x28u);
  v3 = 0;
  v4 = v9;
  v5 = &unk_35E0;
  while ( v2 )
  {
    *v4++ = *v5++;
    --v2;
  }
  v6 = v9;
  do
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( *((_DWORD *)v6 + i) == a1 )
        return (unsigned int)(i + 10 * v3);
    }
    ++v3;
    v6 += 2;
  }
  while ( v3 != 3 );
  return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x183D */
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


/* Function: multi_return @ 0x1859 */
__int64 __fastcall multi_return(int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 >= 0 )
  {
    result = (unsigned int)(2 * a1);
    if ( (int)result > 100 )
    {
      return 4294967294LL;
    }
    else if ( (a1 & 1) != 0 )
    {
      return (unsigned int)(a1 + 1);
    }
  }
  return result;
}


/* Function: conditional_return @ 0x187C */
__int64 __fastcall conditional_return(int a1)
{
  __int64 result; // rax

  result = (unsigned int)a1;
  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  if ( a1 )
    return (unsigned int)-a1;
  return result;
}


/* Function: duffs_device @ 0x188E */
__int64 __fastcall duffs_device(int *a1, int *a2, int a3)
{
  unsigned int v5; // r8d
  int v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v5 = a3;
  if ( a3 <= 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v6 = (a3 + 7) >> 3;
    switch ( a3 & 7 )
    {
      case 1:
        goto LABEL_9;
      case 2:
        goto LABEL_8;
      case 3:
        goto LABEL_7;
      case 4:
        goto LABEL_6;
      case 5:
        goto LABEL_5;
      case 6:
        goto LABEL_4;
      case 7:
        goto LABEL_3;
      default:
        while ( 1 )
        {
          v13 = *a2;
          ++a1;
          ++a2;
          *(a1 - 1) = v13;
LABEL_3:
          v7 = *a2;
          ++a1;
          ++a2;
          *(a1 - 1) = v7;
LABEL_4:
          v8 = *a2;
          ++a1;
          ++a2;
          *(a1 - 1) = v8;
LABEL_5:
          v9 = *a2;
          ++a1;
          ++a2;
          *(a1 - 1) = v9;
LABEL_6:
          v10 = *a2;
          ++a1;
          ++a2;
          *(a1 - 1) = v10;
LABEL_7:
          v11 = *a2;
          ++a1;
          ++a2;
          *(a1 - 1) = v11;
LABEL_8:
          v12 = *a2;
          ++a1;
          ++a2;
          *(a1 - 1) = v12;
LABEL_9:
          *a1 = *a2;
          if ( !--v6 )
            break;
          ++a2;
          ++a1;
        }
        break;
    }
  }
  return v5;
}


/* Function: loop_complex_cond @ 0x1939 */
__int64 __fastcall loop_complex_cond(int a1)
{
  int i; // edx

  for ( i = 0; 2 * i < a1 - i && i <= 9; ++i )
    ;
  return (unsigned int)(a1 + 2 * i);
}


/* Function: loop_modify_var @ 0x1958 */
__int64 __fastcall loop_modify_var(int a1)
{
  int v1; // eax
  unsigned int v2; // r8d

  v1 = 0;
  v2 = 0;
  while ( v1 < a1 )
  {
    v2 += v1;
    if ( v1 > 5 )
      v1 += 2;
    ++v1;
  }
  return v2;
}


/* Function: loop_external_state @ 0x1978 */
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


/* Function: tail_recursion @ 0x198C */
__int64 __fastcall tail_recursion(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  while ( a1 > 1 )
  {
    result = (unsigned int)(a1 * result);
    --a1;
  }
  return result;
}


/* Function: indirect_recursion_a @ 0x199F */
__int64 __fastcall indirect_recursion_a(unsigned int a1, int a2)
{
  __int64 result; // rax
  int v3; // eax

  result = a1;
  while ( a2 > 0 )
  {
    if ( (result & 1) != 0 )
    {
      v3 = 3 * result;
      if ( a2 == 1 )
        return (unsigned int)(v3 + 1);
      result = (unsigned int)(v3 + 2);
    }
    else
    {
      result = (unsigned int)((int)result / 2);
      if ( a2 == 1 )
        return result;
      result = (unsigned int)(result + 1);
    }
    a2 -= 2;
  }
  return result;
}


/* Function: call_func_ptr @ 0x19D2 */
__int64 __fastcall call_func_ptr(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x19DD */
__int64 __fastcall call_func_ptr_array(unsigned int a1, unsigned int a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h]

  v3[3] = __readfsqword(0x28u);
  v3[0] = double_value;
  v3[1] = triple_value;
  v3[2] = recursion_factorial;
  if ( a1 > 2 )
    return 0xFFFFFFFFLL;
  else
    return ((__int64 (__fastcall *)(_QWORD))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1A59 */
__int64 __fastcall call_virtual_func(__int64 a1, int a2)
{
  return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1A61 */
__int64 __fastcall process_with_callback(__int64 a1, int a2, __int64 (__fastcall *a3)(__int64))
{
  unsigned int v5; // r12d
  __int64 i; // rbx
  __int64 v7; // rdi

  v5 = 0;
  for ( i = 0; a2 > (int)i; ++i )
  {
    v7 = *(unsigned int *)(a1 + 4 * i);
    v5 += a3(v7);
  }
  return v5;
}


/* Function: test_control_flow_l2 @ 0x1A9A */
unsigned __int64 test_control_flow_l2()
{
  int v0; // eax
  int v1; // eax
  int *v2; // rdi
  __int64 v3; // rcx
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
  int v15; // [rsp+Ch] [rbp-8Ch] BYREF
  int v16; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v17[2]; // [rsp+14h] [rbp-84h] BYREF
  int v18; // [rsp+24h] [rbp-74h]
  _QWORD v19[4]; // [rsp+28h] [rbp-70h] BYREF
  int v20[8]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  puts(asc_3271);
  v0 = loop_multi_exit(7);
  __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  v15 = 0;
  v1 = infinite_loop(&v15);
  __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  v2 = v20;
  v3 = 8;
  v19[2] = 0x600000005LL;
  v19[3] = 0x800000007LL;
  while ( v3 )
  {
    *v2++ = 0;
    --v3;
  }
  v19[0] = 0x200000001LL;
  v19[1] = 0x400000003LL;
  v4 = duffs_device(v20, (int *)v19, 8);
  __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v4);
  v5 = loop_complex_cond(10);
  __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v5);
  v6 = loop_modify_var(10);
  __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v6);
  v16 = 0;
  v7 = loop_external_state(&v16);
  __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v7);
  v8 = recursion_factorial(5);
  __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v8);
  __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
  v9 = indirect_recursion_a(6u, 1);
  __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v9);
  v10 = call_func_ptr((__int64 (__fastcall *)(_QWORD))double_value, 5u);
  __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v10);
  v11 = call_func_ptr_array(0, 5u);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
  v12 = call_func_ptr_array(2u, 5u);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v12);
  v17[0] = 0x200000001LL;
  v17[1] = 0x400000003LL;
  v18 = 5;
  v13 = process_with_callback((__int64)v17, 5, (__int64 (__fastcall *)(__int64))double_value);
  __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v13);
  return v21 - __readfsqword(0x28u);
}


/* Function: non_local_jump @ 0x1D73 */
__int64 __fastcall non_local_jump(int a1)
{
  __int64 v1; // rsi
  __int64 result; // rax

  if ( _setjmp(jump_buffer) )
    return 0xFFFFFFFFLL;
  v1 = 1;
  if ( a1 < 0 )
    goto LABEL_5;
  result = (unsigned int)(2 * a1);
  if ( a1 > 100 )
  {
    v1 = 2;
LABEL_5:
    __longjmp_chk(jump_buffer, v1);
  }
  return result;
}


/* Function: cpp_exception @ 0x1DC5 */
__int64 __fastcall cpp_exception(int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 >= 0 )
  {
    result = 4294967294LL;
    if ( a1 <= 100 )
      return (unsigned int)(2 * a1);
  }
  return result;
}


/* Function: large_jump_table @ 0x1DDE */
__int64 __fastcall large_jump_table(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  _DWORD *v5; // rdi
  __int64 (__fastcall **v6)(); // rsi
  __int64 i; // rcx
  _QWORD v9[12]; // [rsp+8h] [rbp-60h] BYREF

  v3 = a1;
  v9[10] = __readfsqword(0x28u);
  v5 = v9;
  v6 = &off_6020;
  for ( i = 20; i; --i )
  {
    *v5 = *(_DWORD *)v6;
    v6 = (__int64 (__fastcall **)())((char *)v6 + 4);
    ++v5;
  }
  if ( (unsigned int)v3 > 9 )
    return 0xFFFFFFFFLL;
  else
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v9[v3])(a2, a3);
}


/* Function: conditional_func_ptr @ 0x1E55 */
__int64 __fastcall conditional_func_ptr(int a1, int a2)
{
  __int64 (__fastcall *v2)(int); // rax

  v2 = double_value;
  if ( a1 )
  {
    v2 = triple_value;
    if ( a1 != 1 )
      v2 = recursion_factorial;
  }
  return v2(a2);
}


/* Function: state_machine @ 0x1E7E */
__int64 __fastcall state_machine(int a1, int a2)
{
  __int64 result; // rax
  bool v3; // zf
  unsigned int v4; // edx

  result = (unsigned int)a2;
  if ( a2 != 2 )
  {
    if ( a2 > 2 )
    {
      if ( a2 != 3 )
        return 3;
      v4 = 0;
      v3 = a1 == 0;
    }
    else
    {
      if ( !a2 )
        return a1 == 1;
      if ( a2 != 1 )
        return 3;
      if ( a1 == 2 )
        return 2;
      v3 = a1 == 99;
      v4 = 3;
    }
    if ( v3 )
      return v4;
  }
  return result;
}


/* Function: fsm_func_table @ 0x1EC6 */
__int64 __fastcall fsm_func_table(__int64 a1, unsigned int a2)
{
  _QWORD v3[6]; // [rsp+8h] [rbp-30h]

  v3[4] = __readfsqword(0x28u);
  v3[0] = state_idle;
  v3[1] = state_processing;
  v3[2] = state_done;
  v3[3] = state_error;
  if ( a2 > 3 )
    return 3;
  else
    return ((__int64 (*)(void))v3[a2])();
}


/* Function: computed_goto @ 0x1F4E */
__int64 __fastcall computed_goto(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[6]; // [rsp+8h] [rbp-30h]

  v3[4] = __readfsqword(0x28u);
  v3[0] = &loc_1FA3;
  v3[1] = &loc_1FAB;
  v3[2] = &loc_1FB6;
  v3[3] = &loc_1FC1;
  result = 0xFFFFFFFFLL;
  if ( a2 <= 3 )
    __asm { jmp     [rsp+rsi*8+38h+var_30] }
  return result;
}


/* Function: obfuscated_cf @ 0x1FE4 */
__int64 __fastcall obfuscated_cf(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1FEC */
__int64 __fastcall opaque_predicate(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1FF4 */
__int64 __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return (unsigned int)(3 * a1 + 1);
  else
    return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x200D */
unsigned __int64 test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _QWORD v7[2]; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  puts(asc_3464);
  v0 = non_local_jump(5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
  v2 = large_jump_table(0, 0xAu, 5u);
  __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
  v3 = conditional_func_ptr(0, 5);
  __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
  __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
  v4 = fsm_func_table(2, 1u);
  __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
  v7[0] = 0x100000000LL;
  v7[1] = 0x300000002LL;
  v5 = computed_goto((__int64)v7, 2u);
  __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
  __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
  return v8 - __readfsqword(0x28u);
}


/* Function: .term_proc @ 0x21C4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6170 */

/* FAILED to decompile: puts @ 0x6178 */

/* FAILED to decompile: __stack_chk_fail @ 0x6180 */

/* FAILED to decompile: _setjmp @ 0x6188 */

/* FAILED to decompile: __printf_chk @ 0x6190 */

/* FAILED to decompile: __longjmp_chk @ 0x6198 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61A0 */

/* FAILED to decompile: __gmon_start__ @ 0x61B0 */

/* Total functions decompiled: 78, failed: 8 */
