/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/1/1_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 001010e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _start @ 00101110 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101140 */

/* WARNING: Removing unreachable block (ram,0x00101153) */
/* WARNING: Removing unreachable block (ram,0x0010115f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101170 */

/* WARNING: Removing unreachable block (ram,0x00101194) */
/* WARNING: Removing unreachable block (ram,0x001011a0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011b0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: recursion_factorial @ 00101200 */

int recursion_factorial(int n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if (1 < n) {
    do {
      iVar2 = n + -1;
      iVar1 = iVar1 * n;
      n = iVar2;
    } while (iVar2 != 1);
  }
  return iVar1;
}



/* Function: double_value @ 00101220 */

int double_value(int x)

{
  return x * 2;
}



/* Function: triple_value @ 00101230 */

int triple_value(int x)

{
  return x * 3;
}



/* Function: op_add @ 00101240 */

int op_add(int a,int b)

{
  return a + b;
}



/* Function: op_sub @ 00101250 */

int op_sub(int a,int b)

{
  return a - b;
}



/* Function: op_mul @ 00101260 */

int op_mul(int a,int b)

{
  return a * b;
}



/* Function: op_div @ 00101270 */

int op_div(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a / b;
  }
  return iVar1;
}



/* Function: op_mod @ 00101290 */

int op_mod(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a % b;
  }
  return iVar1;
}



/* Function: op_and @ 001012b0 */

int op_and(int a,int b)

{
  return a & b;
}



/* Function: op_or @ 001012c0 */

int op_or(int a,int b)

{
  return a | b;
}



/* Function: op_xor @ 001012d0 */

int op_xor(int a,int b)

{
  return a ^ b;
}



/* Function: op_shl @ 001012e0 */

int op_shl(int a,int b)

{
  return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 001012f0 */

int op_shr(int a,int b)

{
  return a >> ((byte)b & 0x1f);
}



/* Function: state_idle @ 00101300 */

int state_idle(int event)

{
  return (int)(event == 1);
}



/* Function: state_processing @ 00101310 */

int state_processing(int event)

{
  if (event != 2) {
    return (event == 99) + 1 + (uint)(event == 99);
  }
  return 2;
}



/* Function: state_done @ 00101340 */

int state_done(int event)

{
  return 2;
}



/* Function: state_error @ 00101350 */

int state_error(int event)

{
  int iVar1;
  
  iVar1 = 0;
  if (event != 0) {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: sequential_ops @ 00101370 */

int sequential_ops(int a,int b,int c)

{
  return (a + b) * 2 - c;
}



/* Function: single_if @ 00101380 */

int single_if(int x)

{
  int iVar1;
  
  iVar1 = x * 2;
  if (x < 1) {
    iVar1 = x;
  }
  return iVar1;
}



/* Function: if_else @ 00101390 */

int if_else(int x)

{
  return (int)(0 < x);
}



/* Function: nested_if_2 @ 001013a0 */

int nested_if_2(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0 < a) && (iVar1 = a + b, b < 1)) {
    iVar1 = a;
  }
  return iVar1;
}



/* Function: nested_if_deep @ 001013c0 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0 < a) && (iVar1 = 1, 0 < b)) {
    if (c < 1) {
      return 2;
    }
    if (0 < d) {
      return (0 < e) + 4;
    }
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: if_elseif_chain @ 00101410 */

int if_elseif_chain(int x)

{
  int iVar1;
  
  iVar1 = 10;
  if (x != 0) {
    if (x != 1) {
      iVar1 = 0x1e;
      if (x != 2) {
        iVar1 = -1;
      }
      return iVar1;
    }
    iVar1 = 0x14;
  }
  return iVar1;
}



/* Function: if_elseif_long @ 00101440 */

int if_elseif_long(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)x < 5) {
    iVar1 = (x + 1) * 100;
  }
  return iVar1;
}



/* Function: switch_small @ 00101460 */

int switch_small(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 4) {
    iVar1 = *(int *)(CSWTCH_55 + (ulong)(uint)op * 4);
  }
  return iVar1;
}



/* Function: switch_large @ 00101480 */

int switch_large(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 10) {
    iVar1 = op * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 001014a0 */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = 0;
  if (op - 1U < 3) {
    iVar1 = op * 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 001014c0 */

int switch_fallthrough(int op)

{
  if (op == 2) {
    return 6;
  }
  if (op != 3) {
    return ((op == 1) - 1) + (uint)(op == 1);
  }
  return 0x15;
}



/* Function: loop_for_fixed @ 00101500 */

int loop_for_fixed(int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (n != iVar1);
    return iVar2;
  }
  return 0;
}



/* Function: loop_while @ 00101530 */

int loop_while(int x)

{
  int iVar1;
  
  if (x != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      x = x / 10;
    } while (x != 0);
    return iVar1;
  }
  return 1;
}



/* Function: loop_dowhile @ 00101580 */

int loop_dowhile(int x)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    x = x / 10;
  } while (x != 0);
  return iVar1;
}



/* Function: loop_nested @ 001015c0 */

int loop_nested(int m,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  iVar1 = 0;
  if (0 < m) {
    do {
                    /* Unresolved local var: int j@[???] */
      if (0 < n) {
        iVar1 = n + iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (m != iVar2);
  }
  return iVar1;
}



/* Function: loop_break @ 001015e0 */

int loop_break(int target)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int arr [5];
  
  arr[1] = 0x14;
  arr[2] = 0x1e;
  arr[3] = 0x28;
  arr[4] = 0x32;
                    /* Unresolved local var: int i@[???] */
  uVar1 = 0;
  uVar2 = uVar1;
  if (target != 10) {
    do {
      uVar1 = uVar1 + 1;
      if (uVar1 == 5) {
        uVar2 = 0xffffffff;
        break;
      }
      uVar2 = uVar1 & 0xffffffff;
    } while (target != arr[uVar1]);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)uVar2;
}



/* Function: loop_continue @ 00101670 */

int loop_continue(int n)

{
  uint uVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar1 = 1;
    iVar2 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        iVar2 = iVar2 + uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != n + 1U);
    return iVar2;
  }
  return 0;
}



/* Function: goto_forward @ 001016b0 */

int goto_forward(int x)

{
  if (0 < x) {
    x = x * x;
  }
  return x * 2;
}



/* Function: goto_backward @ 001016c0 */

int goto_backward(int x)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < x) {
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int i@[???] */
    iVar1 = 1;
    do {
      iVar2 = iVar2 * iVar1;
      iVar1 = iVar1 + 1;
    } while (x + 1 != iVar1);
  }
  return iVar2;
}



/* Function: ternary_op @ 001016f0 */

int ternary_op(int a,int b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: test_control_flow_l1 @ 00101700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  int arr [5];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103008);
  __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
  __printf_chk(1,"CF-L1-03 (if_else): %d\n",1);
  __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
  __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
  __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
  __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
  __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
  __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
  __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
  __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
  __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
  __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
  arr[1] = 0x14;
  arr[2] = 0x1e;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int i@[???] */
  arr[3] = 0x28;
  arr[4] = 0x32;
  uVar3 = 1;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == 5) {
      uVar4 = 0xffffffff;
      break;
    }
    piVar1 = arr + uVar3;
    uVar3 = uVar3 + 1;
  } while (*piVar1 != 0x1e);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar4);
  arr[1] = 0x14;
  arr[2] = 0x1e;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int i@[???] */
  arr[3] = 0x28;
  arr[4] = 0x32;
  uVar3 = 1;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == 5) {
      uVar4 = 0xffffffff;
      break;
    }
    piVar1 = arr + uVar3;
    uVar3 = uVar3 + 1;
  } while (*piVar1 != 99);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar4);
  __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: loop_multi_exit @ 00101a40 */

int loop_multi_exit(int target)

{
  int iVar1;
  int (*paiVar2) [4];
  int iVar3;
  long in_FS_OFFSET;
  int matrix [3] [4];
  
  paiVar2 = matrix;
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  matrix[0][1] = 2;
  matrix[0][2] = 3;
  matrix[0][3] = 4;
  matrix[1][0] = 5;
  matrix[1][1] = 6;
  matrix[1][2] = 7;
  matrix[1][3] = 8;
  matrix[2][0] = 9;
  matrix[2][1] = 10;
  matrix[2][2] = 0xb;
  matrix[2][3] = 0xc;
                    /* Unresolved local var: int j@[???] */
  if (target != 1) {
    do {
      if (target == *(int *)((long)paiVar2 + 4)) {
        iVar1 = 1;
        goto LAB_00101adc;
      }
      if (target == *(int *)((long)paiVar2 + 8)) {
        iVar1 = 2;
        goto LAB_00101adc;
      }
      if (target == *(int *)((long)paiVar2 + 0xc)) {
        iVar1 = 3;
        goto LAB_00101adc;
      }
      iVar3 = iVar3 + 1;
      paiVar2 = (int (*) [4])((long)paiVar2 + 0x10);
      if (iVar3 == 3) {
        iVar1 = -1;
        goto LAB_00101aed;
      }
    } while (*(int *)paiVar2 != target);
  }
  iVar1 = 0;
LAB_00101adc:
  iVar1 = iVar1 + iVar3 * 10;
LAB_00101aed:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: infinite_loop @ 00101b30 */

int infinite_loop(int *flag)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*flag == 1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  *flag = 1;
  return 0x3e9;
}



/* Function: multi_return @ 00101b60 */

int multi_return(int x)

{
  int iVar1;
  
  if (x < 0) {
    return -1;
  }
  if (x * 2 < 0x65) {
    iVar1 = x * 2;
    if ((x & 1U) != 0) {
      iVar1 = x + 1;
    }
    return iVar1;
  }
  return -2;
}



/* Function: conditional_return @ 00101b90 */

int conditional_return(int x)

{
  int iVar1;
  
  if (0 < x) {
    return x * 2;
  }
  iVar1 = -x;
  if (x == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: duffs_device @ 00101bb0 */

int duffs_device(int *dst,int *src,int n)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (n < 1) {
    n = -1;
  }
  else {
    iVar3 = n + 7 >> 3;
    piVar2 = dst;
    switch(n & 7) {
    case 0:
      piVar4 = src;
      break;
    case 1:
      goto switchD_00101bdf_caseD_1;
    case 2:
      piVar4 = src;
      goto LAB_00101c3a;
    case 3:
      goto switchD_00101bdf_caseD_3;
    case 4:
      piVar4 = src;
      goto LAB_00101c22;
    case 5:
      goto switchD_00101bdf_caseD_5;
    case 6:
      goto switchD_00101bdf_caseD_6;
    case 7:
      goto switchD_00101bdf_caseD_7;
    }
    while( true ) {
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
switchD_00101bdf_caseD_7:
      iVar1 = *src;
      piVar2 = dst + 1;
      src = src + 1;
      *dst = iVar1;
switchD_00101bdf_caseD_6:
      iVar1 = *src;
      dst = piVar2 + 1;
      src = src + 1;
      *piVar2 = iVar1;
switchD_00101bdf_caseD_5:
      *dst = *src;
      piVar2 = dst + 1;
      piVar4 = src + 1;
LAB_00101c22:
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
switchD_00101bdf_caseD_3:
      *dst = *src;
      piVar2 = dst + 1;
      piVar4 = src + 1;
LAB_00101c3a:
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
switchD_00101bdf_caseD_1:
      *dst = *src;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      piVar2 = dst + 1;
      piVar4 = src + 1;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 00101c80 */

int loop_complex_cond(int x)

{
  int iVar1;
  int iVar2;
  
  if (x < 1) {
    return x;
  }
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 2;
    x = x + -1;
    iVar2 = iVar2 + 1;
    if (x <= iVar1) break;
  } while (iVar2 < 10);
  return iVar1 + x + iVar2;
}



/* Function: loop_modify_var @ 00101cc0 */

int loop_modify_var(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  iVar2 = 0;
  if (0 < n) {
    while (iVar1 = iVar2 + 1, iVar1 < n) {
      iVar3 = iVar3 + iVar1;
      iVar2 = iVar2 + 3;
      if (iVar1 < 6) {
        iVar2 = iVar1;
      }
    }
  }
  return iVar3;
}



/* Function: loop_external_state @ 00101cf0 */

int loop_external_state(int *flag)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*flag != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  return 0x65;
}



/* Function: tail_recursion @ 00101d10 */

int tail_recursion(int n,int acc)

{
  if (1 < n) {
    do {
      acc = acc * n;
      n = n + -1;
    } while (n != 1);
  }
  return acc;
}



/* Function: indirect_recursion_a @ 00101d30 */

int indirect_recursion_a(int n,int depth)

{
  int iVar1;
  
  iVar1 = depth;
  if (0 < depth) {
    do {
      iVar1 = iVar1 + -2;
      if ((n & 1U) == 0) {
        if (depth == 1) {
          return n / 2;
        }
        n = n / 2 + 1;
      }
      else {
        if (depth == 1) {
          return n * 3 + 1;
        }
        n = n * 3 + 2;
      }
      depth = depth + -2;
    } while (iVar1 != 0);
  }
  return n;
}



/* Function: call_func_ptr @ 00101d80 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 00101d90 */

int call_func_ptr_array(int idx,int x)

{
  int iVar1;
  long in_FS_OFFSET;
  _func_int_int *funcs [3];
  
  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ((uint)idx < 3) {
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*funcs[idx])(x);
      return iVar1;
    }
  }
  else if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_virtual_func @ 00101e10 */

int call_virtual_func(void *obj,int x)

{
  return x * 2;
}



/* Function: process_with_callback @ 00101e20 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar3 = 0;
    piVar1 = arr + (ulong)(n - 1) + 1;
    do {
      iVar2 = *arr;
      arr = arr + 1;
      iVar2 = (*cb)(iVar2);
      iVar3 = iVar3 + iVar2;
    } while (arr != piVar1);
    return iVar3;
  }
  return 0;
}



/* Function: test_control_flow_l2 @ 00101e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long in_FS_OFFSET;
  int flag;
  int ext_flag;
  int arr [5];
  int local_64 [3];
  int src [8];
  int dst [8];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103118);
  iVar3 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar3);
                    /* Unresolved local var: int count@[???] */
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x3e9);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  src[0] = 1;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  src[4] = 5;
  src[5] = 6;
  dst[0] = 0;
  dst[1] = 0;
  dst[2] = 0;
  dst[3] = 0;
  dst[4] = 0;
  dst[5] = 0;
  dst[6] = 0;
  dst[7] = 0;
  src[6] = 7;
  src[7] = 8;
  iVar3 = duffs_device(dst,src,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar3);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar5 = 0;
  iVar3 = 0;
  while (iVar1 = iVar3 + 1, iVar1 < 10) {
    iVar5 = iVar5 + iVar1;
    iVar3 = iVar3 + 3;
    if (iVar1 < 6) {
      iVar3 = iVar1;
    }
  }
  __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar5);
                    /* Unresolved local var: int count@[???] */
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x65);
  __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
  __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
  __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
  __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
  arr[4] = 5;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar5 = 0;
  iVar3 = 1;
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  piVar4 = arr;
  while( true ) {
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + iVar3 * 2;
    if (piVar4 == local_64) break;
    iVar3 = *piVar4;
  }
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar5);
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: non_local_jump @ 00102190 */

int non_local_jump(int x)

{
  int iVar1;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 == 0) {
    if (x < 0) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(jump_buffer,1);
    }
    if (100 < x) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(jump_buffer,2);
    }
    iVar1 = x * 2;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: cpp_exception @ 00102200 */

int cpp_exception(int x)

{
  if (x < 0) {
    return -1;
  }
  if (x < 0x65) {
    return x * 2;
  }
  return -2;
}



/* Function: large_jump_table @ 00102230 */

int large_jump_table(int op,int a,int b)

{
  int iVar1;
  long in_FS_OFFSET;
  _func_int_int_int *ops [10];
  
  ops[0] = op_add;
  ops[1] = op_sub;
  ops[2] = op_mul;
  ops[3] = op_div;
  ops[4] = op_mod;
  ops[5] = op_and;
  ops[6] = op_or;
  ops[7] = op_xor;
  ops[8] = op_shl;
  ops[9] = op_shr;
  if ((uint)op < 10) {
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001022e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*ops[op])(a,b);
      return iVar1;
    }
  }
  else if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: conditional_func_ptr @ 00102310 */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = double_value;
  if ((mode != 0) && (UNRECOVERED_JUMPTABLE = triple_value, mode != 1)) {
    UNRECOVERED_JUMPTABLE = recursion_factorial;
  }
                    /* WARNING: Could not recover jumptable at 0x00102338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(x,x,UNRECOVERED_JUMPTABLE);
  return iVar1;
}



/* Function: state_machine @ 00102340 */

int state_machine(int event,int state)

{
  if (state == 2) {
    return 2;
  }
  if (state < 3) {
    if (state == 0) {
      return (int)(event == 1);
    }
    if (state == 1) {
      if (event == 2) {
        return 2;
      }
      return (event == 99) + 1 + (uint)(event == 99);
    }
  }
  else if (state == 3) {
    return -(uint)(event != 0) & 3;
  }
  return 3;
}



/* Function: fsm_func_table @ 001023b0 */

int fsm_func_table(int event,int state)

{
  int iVar1;
  long in_FS_OFFSET;
  _func_int_int *state_handlers [4];
  
  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ((uint)state < 4) {
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*state_handlers[state])(event);
      return iVar1;
    }
  }
  else if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: computed_goto @ 00102440 */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  long in_FS_OFFSET;
  void *targets [4];
  
  targets[0] = &LAB_001024d0;
  targets[1] = &LAB_001024c0;
  targets[2] = &LAB_001024b0;
  targets[3] = &DAT_00102490;
  if ((uint)idx < 4) {
                    /* WARNING: Could not recover jumptable at 0x0010248d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*targets[idx])();
    return iVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: obfuscated_cf @ 001024f0 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00102500 */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00102510 */

int overlapped_code(int x)

{
  if ((x & 1U) != 0) {
    return x * 3 + 1;
  }
  return x / 2;
}



/* Function: test_control_flow_l3 @ 00102530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int labels [4];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001032b8);
  iVar2 = non_local_jump(5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
  iVar2 = non_local_jump(-5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
                    /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
  iVar2 = op_add(10,5);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",iVar2);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
  labels[0] = 0;
  labels[1] = 1;
  labels[2] = 2;
  labels[3] = 3;
  iVar2 = computed_goto(labels,2);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar2);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: _fini @ 001026d0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 72 */
