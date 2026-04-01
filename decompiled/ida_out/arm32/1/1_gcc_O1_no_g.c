/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/1/1_gcc_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10448 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10454 @ 0x10454 */
void sub_10454()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x104E0 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_1051C + 19143), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x10524 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10548 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10574 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x105AC */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x105D4 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: recursion_factorial @ 0x105D8 */
int __fastcall recursion_factorial(int a1)
{
  if ( a1 <= 1 )
    return 1;
  else
    return a1 * recursion_factorial(a1 - 1);
}


/* Function: double_value @ 0x10600 */
int __fastcall double_value(int a1)
{
  return 2 * a1;
}


/* Function: triple_value @ 0x10608 */
int __fastcall triple_value(int a1)
{
  return 3 * a1;
}


/* Function: op_add @ 0x10610 */
int __fastcall op_add(int a1, int a2)
{
  return a1 + a2;
}


/* Function: op_sub @ 0x10618 */
int __fastcall op_sub(int a1, int a2)
{
  return a1 - a2;
}


/* Function: op_mul @ 0x10620 */
int __fastcall op_mul(int a1, int a2)
{
  return a2 * a1;
}


/* Function: op_div @ 0x10628 */
int __fastcall op_div(int a1, int a2)
{
  if ( a2 )
    return a1 / a2;
  else
    return 0;
}


/* Function: op_mod @ 0x10644 */
int __fastcall op_mod(int a1, int a2)
{
  if ( a2 )
    return a1 % a2;
  else
    return 0;
}


/* Function: op_and @ 0x10664 */
int __fastcall op_and(int a1, int a2)
{
  return a1 & a2;
}


/* Function: op_or @ 0x1066C */
int __fastcall op_or(int a1, int a2)
{
  return a1 | a2;
}


/* Function: op_xor @ 0x10674 */
int __fastcall op_xor(int a1, int a2)
{
  return a1 ^ a2;
}


/* Function: op_shl @ 0x1067C */
int __fastcall op_shl(int a1, char a2)
{
  return a1 << a2;
}


/* Function: op_shr @ 0x10684 */
int __fastcall op_shr(int a1, char a2)
{
  return a1 >> a2;
}


/* Function: state_idle @ 0x1068C */
bool __fastcall state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x1069C */
int __fastcall state_processing(int result)
{
  if ( result != 2 )
  {
    if ( result == 99 )
      return 3;
    else
      return 1;
  }
  return result;
}


/* Function: state_done @ 0x106B4 */
int state_done()
{
  return 2;
}


/* Function: state_error @ 0x106BC */
int __fastcall state_error(int result)
{
  if ( result )
    return 3;
  return result;
}


/* Function: sequential_ops @ 0x106C8 */
int __fastcall sequential_ops(int a1, int a2, int a3)
{
  return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x106D4 */
int __fastcall single_if(int result)
{
  if ( result > 0 )
    result *= 2;
  return result;
}


/* Function: if_else @ 0x106E0 */
bool __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x106F0 */
int __fastcall nested_if_2(int result, int a2)
{
  if ( result <= 0 )
    return 0;
  if ( a2 > 0 )
    result += a2;
  return result;
}


/* Function: nested_if_deep @ 0x1070C */
int __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return 1;
  if ( a3 <= 0 )
    return 2;
  if ( a4 <= 0 )
    return 3;
  if ( a5 <= 0 )
    return 4;
  return 5;
}


/* Function: if_elseif_chain @ 0x10760 */
int __fastcall if_elseif_chain(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 10;
    case 1:
      return 20;
    case 2:
      return 30;
  }
  return -1;
}


/* Function: if_elseif_long @ 0x10790 */
int __fastcall if_elseif_long(int a1)
{
  int result; // r0

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
      result = -1;
      break;
  }
  return result;
}


/* Function: switch_small @ 0x107E0 */
int __fastcall switch_small(int a1)
{
  int result; // r0

  switch ( a1 )
  {
    case 0:
      result = 15;
      break;
    case 1:
      result = 5;
      break;
    case 2:
      result = 50;
      break;
    case 3:
      result = 2;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


/* Function: switch_large @ 0x10824 */
int __fastcall switch_large(int result)
{
  switch ( result )
  {
    case 0:
      return result;
    case 1:
      result = 10;
      break;
    case 2:
      result = 20;
      break;
    case 3:
      result = 30;
      break;
    case 4:
      result = 40;
      break;
    case 5:
      result = 50;
      break;
    case 6:
      result = 60;
      break;
    case 7:
      result = 70;
      break;
    case 8:
      result = 80;
      break;
    case 9:
      result = 90;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


/* Function: switch_default @ 0x108A8 */
int __fastcall switch_default(int a1)
{
  switch ( a1 )
  {
    case 2:
      return 200;
    case 3:
      return 300;
    case 1:
      return 100;
  }
  return 0;
}


/* Function: switch_fallthrough @ 0x108D8 */
int __fastcall switch_fallthrough(int a1)
{
  int v2; // r3
  int v3; // r3

  if ( a1 == 2 )
  {
    v2 = 0;
LABEL_7:
    v3 = v2 + 2 * a1;
    return v3 + a1;
  }
  if ( a1 == 3 )
  {
    v2 = 12;
    goto LABEL_7;
  }
  if ( a1 != 1 )
    return -1;
  v3 = 0;
  return v3 + a1;
}


/* Function: loop_for_fixed @ 0x10918 */
int __fastcall loop_for_fixed(int a1)
{
  int v2; // r3
  int result; // r0

  if ( a1 <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += v2++;
  while ( a1 != v2 );
  return result;
}


/* Function: loop_while @ 0x10944 */
int __fastcall loop_while(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = a1;
  if ( a1 )
  {
    result = 0;
    do
    {
      ++result;
      v1 /= 10;
    }
    while ( v1 );
  }
  else
  {
    result = 0;
  }
  if ( result < 1 )
    return 1;
  return result;
}


/* Function: loop_dowhile @ 0x10980 */
int __fastcall loop_dowhile(int a1)
{
  int result; // r0

  result = 0;
  do
  {
    ++result;
    a1 /= 10;
  }
  while ( a1 );
  return result;
}


/* Function: loop_nested @ 0x109A8 */
int __fastcall loop_nested(int a1, int a2)
{
  int v3; // r2
  int result; // r0
  int i; // r3

  if ( a1 <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    if ( a2 > 0 )
    {
      for ( i = 0; i != a2; ++i )
        ;
      result += i;
    }
    ++v3;
  }
  while ( a1 != v3 );
  return result;
}


/* Function: loop_break @ 0x109EC */
int __fastcall loop_break(int a1)
{
  _DWORD *v1; // r12
  int *v3; // r3
  int result; // r0
  int v5; // t1
  int v6; // [sp+0h] [bp-20h] BYREF

  *v1 = *(_DWORD *)"\n";
  v1[1] = 20;
  v1[2] = 30;
  v1[3] = 40;
  v1[4] = 50;
  v3 = &v6;
  result = 0;
  while ( 1 )
  {
    v5 = *v3++;
    if ( v5 == a1 )
      break;
    if ( ++result == 5 )
      return -1;
  }
  return result;
}


/* Function: loop_continue @ 0x10A70 */
int __fastcall loop_continue(int a1)
{
  int v1; // r2
  int v2; // r3
  int result; // r0

  if ( a1 <= 0 )
    return 0;
  v1 = a1 + 1;
  v2 = 1;
  result = 0;
  do
  {
    if ( (v2 & 1) != 0 )
      result += v2;
    ++v2;
  }
  while ( v2 != v1 );
  return result;
}


/* Function: goto_forward @ 0x10AA4 */
int __fastcall goto_forward(int a1)
{
  if ( a1 > 0 )
    a1 *= a1;
  return 2 * a1;
}


/* Function: goto_backward @ 0x10AB8 */
int __fastcall goto_backward(int a1)
{
  int v1; // r2
  int v2; // r3
  int result; // r0

  if ( a1 <= 0 )
    return 1;
  v1 = a1 + 1;
  v2 = 1;
  result = 1;
  do
    result *= v2++;
  while ( v2 != v1 );
  return result;
}


/* Function: ternary_op @ 0x10AE8 */
int __fastcall ternary_op(int result, int a2)
{
  if ( a2 >= result )
    return a2;
  return result;
}


/* Function: test_control_flow_l1 @ 0x10AF4 */
int test_control_flow_l1()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  puts(s);
  _printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
  _printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
  _printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
  _printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
  _printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
  _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
  _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
  _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
  _printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
  _printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
  _printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
  _printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
  _printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
  _printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
  _printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
  v0 = loop_for_fixed(10);
  _printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", v0);
  v1 = loop_while(12345);
  _printf_chk(1, "CF-L1-13 (loop_while): %d\n", v1);
  v2 = loop_dowhile(9876);
  _printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", v2);
  v3 = loop_nested(3, 4);
  _printf_chk(1, "CF-L1-15 (loop_nested): %d\n", v3);
  v4 = loop_break(30);
  _printf_chk(1, "CF-L1-16 (loop_break): %d\n", v4);
  v5 = loop_break(99);
  _printf_chk(1, "CF-L1-16 (loop_break): %d\n", v5);
  v6 = loop_continue(10);
  _printf_chk(1, "CF-L1-17 (loop_continue): %d\n", v6);
  _printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
  _printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
  v7 = goto_backward(5);
  _printf_chk(1, "CF-L1-19 (goto_backward): %d\n", v7);
  _printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  return _printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x10D6C */
int __fastcall loop_multi_exit(int a1)
{
  int *v2; // r12
  int v3; // r0
  int *v4; // r2
  int i; // r3
  int v6; // t1
  _DWORD v8[12]; // [sp+4h] [bp-3Ch] BYREF

  v8[0] = 1;
  v8[1] = 2;
  v8[2] = 3;
  v8[3] = 4;
  v8[4] = 5;
  v8[5] = 6;
  v8[6] = 7;
  v8[7] = 8;
  v8[8] = 9;
  v8[9] = 10;
  v8[10] = 11;
  v8[11] = 12;
  v2 = v8;
  v3 = 0;
  while ( 2 )
  {
    v4 = v2;
    for ( i = 0; i != 4; ++i )
    {
      v6 = *v4++;
      if ( v6 == a1 )
        return i + 10 * v3;
    }
    ++v3;
    v2 += 4;
    if ( v3 != 3 )
      continue;
    break;
  }
  return -1;
}


/* Function: infinite_loop @ 0x10E1C */
int __fastcall infinite_loop(_DWORD *a1)
{
  int result; // r0

  result = 0;
  while ( *a1 != 1 )
  {
    if ( ++result == 1001 )
    {
      *a1 = 1;
      return result;
    }
  }
  return result;
}


/* Function: multi_return @ 0x10E50 */
int __fastcall multi_return(int a1)
{
  int result; // r0

  if ( a1 < 0 )
    return -1;
  result = 2 * a1;
  if ( 2 * a1 > 100 )
    return -2;
  if ( (a1 & 1) != 0 )
    return a1 + 1;
  return result;
}


/* Function: conditional_return @ 0x10E80 */
int __fastcall conditional_return(int a1)
{
  if ( a1 > 0 )
    return 2 * a1;
  if ( a1 >= 0 )
    return 0;
  return -a1;
}


/* Function: duffs_device @ 0x10EA0 */
int __fastcall duffs_device(int *a1, int *a2, int a3)
{
  int result; // r0
  int v5; // r12
  int v6; // r4
  int v7; // t1
  int v8; // t1
  int v9; // t1
  int v10; // t1
  int v11; // t1
  int v12; // t1
  int v13; // t1

  result = a3;
  if ( a3 <= 0 )
    return -1;
  v5 = a3 + 7;
  if ( a3 + 7 < 0 )
    v5 = a3 + 14;
  v6 = v5 >> 3;
  switch ( a3 & 7 )
  {
    case 0:
      goto LABEL_14;
    case 1:
      goto LABEL_11;
    case 2:
      goto LABEL_10;
    case 3:
      goto LABEL_9;
    case 4:
      goto LABEL_8;
    case 5:
      goto LABEL_7;
    case 6:
      goto LABEL_6;
    case 7:
      while ( 1 )
      {
        v7 = *a2++;
        *a1++ = v7;
LABEL_6:
        v8 = *a2++;
        *a1++ = v8;
LABEL_7:
        v9 = *a2++;
        *a1++ = v9;
LABEL_8:
        v10 = *a2++;
        *a1++ = v10;
LABEL_9:
        v11 = *a2++;
        *a1++ = v11;
LABEL_10:
        v12 = *a2++;
        *a1++ = v12;
LABEL_11:
        *a1 = *a2;
        if ( --v6 <= 0 )
          break;
        ++a2;
        ++a1;
LABEL_14:
        v13 = *a2++;
        *a1++ = v13;
      }
      break;
    default:
      return result;
  }
  return result;
}


/* Function: loop_complex_cond @ 0x10F5C */
int __fastcall loop_complex_cond(int a1)
{
  int v1; // r3
  int v2; // r0
  int v3; // r1
  bool v4; // cc
  char v5; // r2
  int v6; // r2

  v1 = a1;
  if ( a1 <= 0 )
  {
    v2 = 0;
    v3 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v3 += 2;
      --v1;
      v4 = ++v2 < 9;
      if ( v2 <= 9 )
        v4 = v3 < v1;
      v5 = v4;
      if ( v1 > 0 )
        v6 = v5 & 1;
      else
        v6 = 0;
    }
    while ( v6 );
  }
  return v3 + v1 + v2;
}


/* Function: loop_modify_var @ 0x10FB4 */
int __fastcall loop_modify_var(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r3

  if ( a1 <= 0 )
    return 0;
  result = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = v3 + 1;
    if ( a1 <= v3 + 1 )
      break;
    result += v4;
    if ( v4 <= 5 )
      ++v3;
    else
      v3 += 3;
  }
  return result;
}


/* Function: loop_external_state @ 0x10FEC */
int __fastcall loop_external_state(_DWORD *a1)
{
  int result; // r0

  for ( result = 0; result != 101; ++result )
  {
    if ( *a1 )
      break;
  }
  return result;
}


/* Function: tail_recursion @ 0x11010 */
int __fastcall tail_recursion(int a1, int a2)
{
  if ( a1 <= 1 )
    return a2;
  else
    return tail_recursion(a1 - 1, a1 * a2);
}


/* Function: indirect_recursion_a @ 0x11034 */
int __fastcall indirect_recursion_a(int result, int a2)
{
  int v2; // r0

  if ( a2 > 0 )
  {
    if ( (result & 1) != 0 )
    {
      v2 = 3 * result;
      if ( a2 <= 1 )
        return v2 + 1;
      else
        return indirect_recursion_a(v2 + 2, a2 - 2);
    }
    else
    {
      result /= 2;
      if ( a2 > 1 )
        return indirect_recursion_a(result + 1, a2 - 2);
    }
  }
  return result;
}


/* Function: call_func_ptr @ 0x1108C */
int __fastcall call_func_ptr(int (__fastcall *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x110A0 */
int __fastcall call_func_ptr_array(unsigned int a1, int a2)
{
  int (__fastcall **v2)(int); // r12
  _DWORD v4[2]; // [sp+10h] [bp-8h] BYREF

  *v2 = double_value;
  v2[1] = triple_value;
  v2[2] = recursion_factorial;
  if ( a1 > 2 )
    return -1;
  else
    return ((int (__fastcall *)(int))v4[a1 - 4])(a2);
}


/* Function: call_virtual_func @ 0x11120 */
int __fastcall call_virtual_func(int a1, int a2)
{
  return 2 * a2;
}


/* Function: process_with_callback @ 0x11128 */
int __fastcall process_with_callback(int a1, int a2, int (__fastcall *a3)(int))
{
  int v5; // r5
  int v6; // r4
  int v7; // r6
  int v8; // t1

  if ( a2 <= 0 )
    return 0;
  v5 = a1 - 4;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *(_DWORD *)(v5 + 4);
    v5 += 4;
    v7 += a3(v8);
    ++v6;
  }
  while ( a2 != v6 );
  return v7;
}


/* Function: test_control_flow_l2 @ 0x1116C */
int test_control_flow_l2()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v14; // [sp+0h] [bp-70h] BYREF
  int v15; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v16[5]; // [sp+8h] [bp-68h] BYREF
  int v17[8]; // [sp+1Ch] [bp-54h] BYREF
  int s[8]; // [sp+3Ch] [bp-34h] BYREF

  puts(asc_11E2C);
  v0 = loop_multi_exit(7);
  _printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  v14 = 0;
  v1 = infinite_loop(&v14);
  _printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
  _printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  _printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  _printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  _printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  _printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  v17[0] = 1;
  v17[1] = 2;
  v17[2] = 3;
  v17[3] = 4;
  v17[4] = 5;
  v17[5] = 6;
  v17[6] = 7;
  v17[7] = 8;
  memset(s, 0, sizeof(s));
  v2 = duffs_device(s, v17, 8);
  _printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
  v3 = loop_complex_cond(10);
  _printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
  v4 = loop_modify_var(10);
  _printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
  v15 = 0;
  v5 = loop_external_state(&v15);
  _printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
  v6 = recursion_factorial(5);
  _printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
  v7 = tail_recursion(5, 1);
  _printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v7);
  v8 = indirect_recursion_a(10, 3);
  _printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v8);
  v9 = call_func_ptr(double_value, 5);
  _printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v9);
  v10 = call_func_ptr_array(0, 5);
  _printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v10);
  v11 = call_func_ptr_array(2u, 5);
  _printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
  v16[0] = 1;
  v16[1] = 2;
  v16[2] = 3;
  v16[3] = 4;
  v16[4] = 5;
  v12 = process_with_callback((int)v16, 5, double_value);
  return _printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v12);
}


/* Function: non_local_jump @ 0x11404 */
int __fastcall non_local_jump(int a1)
{
  if ( setjmp(jump_buffer) )
    return -1;
  if ( a1 < 0 )
    _longjmp_chk(jump_buffer, 1);
  if ( a1 > 100 )
    _longjmp_chk(jump_buffer, 2);
  return 2 * a1;
}


/* Function: cpp_exception @ 0x1146C */
int __fastcall cpp_exception(int a1)
{
  if ( a1 < 0 )
    return -1;
  if ( a1 > 100 )
    return -2;
  return 2 * a1;
}


/* Function: large_jump_table @ 0x11494 */
int __fastcall large_jump_table(unsigned int a1, int a2, int a3)
{
  _DWORD v4[10]; // [sp+4h] [bp-3Ch]

  v4[0] = op_add;
  v4[1] = op_sub;
  v4[2] = op_mul;
  v4[3] = op_div;
  v4[4] = op_mod;
  v4[5] = op_and;
  v4[6] = op_or;
  v4[7] = op_xor;
  v4[8] = op_shl;
  v4[9] = op_shr;
  if ( a1 > 9 )
    return -1;
  else
    return ((int (__fastcall *)(int, int))v4[a1])(a2, a3);
}


/* Function: conditional_func_ptr @ 0x1152C */
int __fastcall conditional_func_ptr(int a1, int a2)
{
  int (__fastcall *v2)(int); // r2

  if ( !a1 )
    return double_value(a2);
  v2 = triple_value;
  if ( a1 != 1 )
    v2 = recursion_factorial;
  return v2(a2);
}


/* Function: state_machine @ 0x1156C */
int __fastcall state_machine(int a1, int a2)
{
  int result; // r0

  result = a2;
  switch ( a2 )
  {
    case 0:
      result = a1 == 1;
      break;
    case 1:
      if ( a1 == 2 )
      {
        result = 2;
      }
      else if ( a1 == 99 )
      {
        result = 3;
      }
      else
      {
        result = a2;
      }
      break;
    case 2:
      return result;
    case 3:
      if ( a1 )
        result = a2;
      else
        result = 0;
      break;
    default:
      result = 3;
      break;
  }
  return result;
}


/* Function: fsm_func_table @ 0x115D8 */
int __fastcall fsm_func_table(int a1, unsigned int a2)
{
  _DWORD v3[4]; // [sp+4h] [bp-1Ch]

  v3[0] = state_idle;
  v3[1] = state_processing;
  v3[2] = state_done;
  v3[3] = state_error;
  if ( a2 <= 3 )
    return ((int (__fastcall *)(int))v3[a2])(a1);
  else
    return 3;
}


/* Function: computed_goto @ 0x11654 */
int __fastcall computed_goto(int a1, unsigned int a2)
{
  _DWORD v3[4]; // [sp+4h] [bp-1Ch]

  v3[0] = 71316;
  v3[1] = 71352;
  v3[2] = 71360;
  v3[3] = 71368;
  if ( a2 <= 3 )
    __asm { LDR     PC, [R12,#-0x14] }
  return -1;
}


/* Function: obfuscated_cf @ 0x116E4 */
int __fastcall obfuscated_cf(int a1)
{
  return 2 * a1;
}


/* Function: opaque_predicate @ 0x116EC */
int __fastcall opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x116F4 */
int __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return 3 * a1 + 1;
  else
    return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x1170C */
int test_control_flow_l3()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  _DWORD v7[4]; // [sp+4h] [bp-1Ch] BYREF

  puts(asc_12030);
  v0 = non_local_jump(5);
  _printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  _printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
  _printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
  _printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
  v2 = large_jump_table(0, 10, 5);
  _printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
  v3 = conditional_func_ptr(0, 5);
  _printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
  _printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
  v4 = fsm_func_table(2, 1u);
  _printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
  v7[0] = 0;
  v7[1] = 1;
  v7[2] = 2;
  v7[3] = 3;
  v5 = computed_goto((int)v7, 2u);
  _printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
  _printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  _printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  return _printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x118A0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: __divsi3 @ 0x118B8 */
int __fastcall _divsi3(int a1, int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test();
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: .divsi3_skip_div0_test @ 0x118C0 */
int __fastcall divsi3_skip_div0_test(int result, unsigned int a2)
{
  char v2; // nf
  int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r2
  _BOOL4 v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0

  v3 = result ^ a2;
  if ( v2 )
    a2 = -a2;
  if ( a2 == 1 )
  {
    if ( (v3 ^ result) < 0 )
      return -result;
  }
  else
  {
    v4 = result;
    if ( result < 0 )
      v4 = -result;
    if ( v4 <= a2 )
    {
      if ( v4 < a2 )
        result = 0;
      if ( v4 == a2 )
        return (v3 >> 31) | 1;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      v5 = 31 - (__clz(a2) - __clz(v4));
      if ( v5 )
      {
        return ((int (__fastcall *)(_DWORD))((char *)&loc_11908 + 12 * v5))(0);
      }
      else
      {
        v6 = v4 >= a2 << 31;
        if ( v4 >= a2 << 31 )
          v4 -= a2 << 31;
        v7 = v6 + (v4 >= a2 << 30) + v6;
        if ( v4 >= a2 << 30 )
          v4 -= a2 << 30;
        v8 = v7 + (v4 >= a2 << 29) + v7;
        if ( v4 >= a2 << 29 )
          v4 -= a2 << 29;
        v9 = v8 + (v4 >= a2 << 28) + v8;
        if ( v4 >= a2 << 28 )
          v4 -= a2 << 28;
        v10 = v9 + (v4 >= a2 << 27) + v9;
        if ( v4 >= a2 << 27 )
          v4 -= a2 << 27;
        v11 = v10 + (v4 >= a2 << 26) + v10;
        if ( v4 >= a2 << 26 )
          v4 -= a2 << 26;
        v12 = v11 + (v4 >= a2 << 25) + v11;
        if ( v4 >= a2 << 25 )
          v4 -= a2 << 25;
        v13 = v12 + (v4 >= a2 << 24) + v12;
        if ( v4 >= a2 << 24 )
          v4 -= a2 << 24;
        v14 = v13 + (v4 >= a2 << 23) + v13;
        if ( v4 >= a2 << 23 )
          v4 -= a2 << 23;
        v15 = v14 + (v4 >= a2 << 22) + v14;
        if ( v4 >= a2 << 22 )
          v4 -= a2 << 22;
        v16 = v15 + (v4 >= a2 << 21) + v15;
        if ( v4 >= a2 << 21 )
          v4 -= a2 << 21;
        v17 = v16 + (v4 >= a2 << 20) + v16;
        if ( v4 >= a2 << 20 )
          v4 -= a2 << 20;
        v18 = v17 + (v4 >= a2 << 19) + v17;
        if ( v4 >= a2 << 19 )
          v4 -= a2 << 19;
        v19 = v18 + (v4 >= a2 << 18) + v18;
        if ( v4 >= a2 << 18 )
          v4 -= a2 << 18;
        v20 = v19 + (v4 >= a2 << 17) + v19;
        if ( v4 >= a2 << 17 )
          v4 -= a2 << 17;
        v21 = v20 + (v4 >= a2 << 16) + v20;
        if ( v4 >= a2 << 16 )
          v4 -= a2 << 16;
        v22 = v21 + (v4 >= a2 << 15) + v21;
        if ( v4 >= a2 << 15 )
          v4 -= a2 << 15;
        v23 = v22 + (v4 >= a2 << 14) + v22;
        if ( v4 >= a2 << 14 )
          v4 -= a2 << 14;
        v24 = v23 + (v4 >= a2 << 13) + v23;
        if ( v4 >= a2 << 13 )
          v4 -= a2 << 13;
        v25 = v24 + (v4 >= a2 << 12) + v24;
        if ( v4 >= a2 << 12 )
          v4 -= a2 << 12;
        v26 = v25 + (v4 >= a2 << 11) + v25;
        if ( v4 >= a2 << 11 )
          v4 -= a2 << 11;
        v27 = v26 + (v4 >= a2 << 10) + v26;
        if ( v4 >= a2 << 10 )
          v4 -= a2 << 10;
        v28 = v27 + (v4 >= a2 << 9) + v27;
        if ( v4 >= a2 << 9 )
          v4 -= a2 << 9;
        v29 = v28 + (v4 >= a2 << 8) + v28;
        if ( v4 >= a2 << 8 )
          v4 -= a2 << 8;
        v30 = v29 + (v4 >= a2 << 7) + v29;
        if ( v4 >= a2 << 7 )
          v4 -= a2 << 7;
        v31 = v30 + (v4 >= a2 << 6) + v30;
        if ( v4 >= a2 << 6 )
          v4 -= a2 << 6;
        v32 = v31 + (v4 >= 32 * a2) + v31;
        if ( v4 >= 32 * a2 )
          v4 -= 32 * a2;
        v33 = v32 + (v4 >= 16 * a2) + v32;
        if ( v4 >= 16 * a2 )
          v4 -= 16 * a2;
        v34 = v33 + (v4 >= 8 * a2) + v33;
        if ( v4 >= 8 * a2 )
          v4 -= 8 * a2;
        v35 = v34 + (v4 >= 4 * a2) + v34;
        if ( v4 >= 4 * a2 )
          v4 -= 4 * a2;
        v36 = v35 + (v4 >= 2 * a2) + v35;
        if ( v4 >= 2 * a2 )
          v4 -= 2 * a2;
        result = v36 + (v4 >= a2) + v36;
        if ( v3 < 0 )
          return -result;
      }
    }
    else
    {
      result = v4 >> (31 - __clz(a2));
      if ( v3 < 0 )
        return -result;
    }
  }
  return result;
}


/* Function: __aeabi_idivmod @ 0x11AD8 */
int __fastcall _aeabi_idivmod(int a1, unsigned int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test(a1, a2);
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: __aeabi_ldiv0 @ 0x11AF8 */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0x11B08 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x231DC */

/* FAILED to decompile: __imp_memset @ 0x231E0 */

/* FAILED to decompile: __imp___longjmp_chk @ 0x231E4 */

/* FAILED to decompile: __imp_raise @ 0x231E8 */

/* FAILED to decompile: __imp__setjmp @ 0x231EC */

/* FAILED to decompile: __imp___printf_chk @ 0x231F0 */

/* FAILED to decompile: __imp_abort @ 0x231F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x231F8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x231FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23200 */

/* Total functions decompiled: 78, failed: 10 */
