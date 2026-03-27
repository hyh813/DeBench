/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/1/1_gcc_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100928 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100940 @ 00100940 */

void FUN_00100940(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00100a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _start @ 00100a40 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100a74 */

/* WARNING: Removing unreachable block (ram,0x00100a84) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100a90 */

/* WARNING: Removing unreachable block (ram,0x00100aa8) */
/* WARNING: Removing unreachable block (ram,0x00100ab4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100ac0 */

/* WARNING: Removing unreachable block (ram,0x00100ae4) */
/* WARNING: Removing unreachable block (ram,0x00100af0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100afc @ 00100afc */

void FUN_00100afc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100b00 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: recursion_factorial @ 00100b54 */

int recursion_factorial(int n)

{
  int iVar1;
  
  iVar1 = 1;
  for (; 1 < n; n = n + -1) {
    iVar1 = iVar1 * n;
  }
  return iVar1;
}



/* Function: double_value @ 00100b74 */

int double_value(int x)

{
  return x << 1;
}



/* Function: triple_value @ 00100b7c */

int triple_value(int x)

{
  return x * 3;
}



/* Function: op_add @ 00100b84 */

int op_add(int a,int b)

{
  return a + b;
}



/* Function: op_sub @ 00100b8c */

int op_sub(int a,int b)

{
  return a - b;
}



/* Function: op_mul @ 00100b94 */

int op_mul(int a,int b)

{
  return a * b;
}



/* Function: op_div @ 00100b9c */

int op_div(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if ((b != 0) && (iVar1 = 0, b != 0)) {
    iVar1 = a / b;
  }
  return iVar1;
}



/* Function: op_mod @ 00100bb0 */

int op_mod(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = 0;
    if (b != 0) {
      iVar1 = a / b;
    }
    iVar1 = a - iVar1 * b;
  }
  return iVar1;
}



/* Function: op_and @ 00100bc8 */

int op_and(int a,int b)

{
  return a & b;
}



/* Function: op_or @ 00100bd0 */

int op_or(int a,int b)

{
  return a | b;
}



/* Function: op_xor @ 00100bd8 */

int op_xor(int a,int b)

{
  return a ^ b;
}



/* Function: op_shl @ 00100be0 */

int op_shl(int a,int b)

{
  return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00100be8 */

int op_shr(int a,int b)

{
  return a >> (b & 0x1fU);
}



/* Function: state_idle @ 00100bf0 */

int state_idle(int event)

{
  return (int)(event == 1);
}



/* Function: state_processing @ 00100bfc */

int state_processing(int event)

{
  bool bVar1;
  
  if ((event != 2) && (bVar1 = event != 99, event = 3, bVar1)) {
    event = 1;
  }
  return event;
}



/* Function: state_done @ 00100c14 */

int state_done(int event)

{
  return 2;
}



/* Function: state_error @ 00100c1c */

int state_error(int event)

{
  int iVar1;
  
  iVar1 = 0;
  if (event != 0) {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: sequential_ops @ 00100c2c */

int sequential_ops(int a,int b,int c)

{
                    /* Unresolved local var: int temp1@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
                       DW_OP_plus; DW_OP_stack_value]
                       Unresolved local var: int temp2@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
                       DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value]
                       Unresolved local var: int temp3@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
                       DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_breg2(x2): 0; DW_OP_minus;
                       DW_OP_stack_value] */
  return (a + b) * 2 - c;
}



/* Function: single_if @ 00100c3c */

int single_if(int x)

{
  if (0 < x) {
    x = x << 1;
  }
  return x;
}



/* Function: if_else @ 00100c4c */

int if_else(int x)

{
  return (int)(0 < x);
}



/* Function: nested_if_2 @ 00100c58 */

int nested_if_2(int a,int b)

{
  if (a < 1) {
    a = 0;
  }
  else if (0 < b) {
    a = a + b;
  }
  return a;
}



/* Function: nested_if_deep @ 00100c78 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int iVar1;
  
  if (a < 1) {
    iVar1 = 0;
  }
  else if (b < 1) {
    iVar1 = 1;
  }
  else if (c < 1) {
    iVar1 = 2;
  }
  else if (d < 1) {
    iVar1 = 3;
  }
  else {
    iVar1 = (0 < e) + 4;
  }
  return iVar1;
}



/* Function: if_elseif_chain @ 00100cc8 */

int if_elseif_chain(int x)

{
  int iVar1;
  
  if (x == 0) {
    iVar1 = 10;
  }
  else if (x == 1) {
    iVar1 = 0x14;
  }
  else {
    iVar1 = 0x1e;
    if (x != 2) {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* Function: if_elseif_long @ 00100cf4 */

int if_elseif_long(int x)

{
  int iVar1;
  
  iVar1 = x * 100 + 100;
  if (4 < (uint)x) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_small @ 00100d08 */

int switch_small(int op)

{
  int iVar1;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  if ((uint)op < 4) {
    iVar1 = (int)*(char *)((long)&CSWTCH_55 + (ulong)(uint)op);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_large @ 00100d28 */

int switch_large(int op)

{
  int iVar1;
  
  iVar1 = op * 10;
  if (9 < (uint)op) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_default @ 00100d3c */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = op * 100;
  if (2 < op - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00100d54 */

int switch_fallthrough(int op)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  if (op == 2) {
    iVar1 = 0;
  }
  else {
    if (op != 3) {
      if (op != 1) {
        return -1;
      }
      iVar1 = 0;
      goto LAB_00100d7c;
    }
    iVar1 = 0xc;
  }
  iVar1 = iVar1 + op * 2;
LAB_00100d7c:
  return iVar1 + op;
}



/* Function: loop_for_fixed @ 00100d94 */

int loop_for_fixed(int n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}



/* Function: loop_while @ 00100db8 */

int loop_while(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int count@[???] */
  iVar1 = 0;
  for (; x != 0; x = x / 10) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: loop_dowhile @ 00100ddc */

int loop_dowhile(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int count@[???] */
  iVar1 = 0;
  do {
    x = x / 10;
    iVar1 = iVar1 + 1;
  } while (x != 0);
  return iVar1;
}



/* Function: loop_nested @ 00100df8 */

int loop_nested(int m,int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int total@[???]
                       Unresolved local var: int i@[???] */
  iVar3 = 0;
  iVar2 = 0;
  while (iVar3 < m) {
    iVar3 = iVar3 + 1;
    iVar1 = n;
    if (n < 0) {
      iVar1 = 0;
    }
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}



/* Function: loop_break @ 00100e24 */

/* WARNING: Removing unreachable block (ram,0x00100ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_break(int target)

{
  long lVar1;
  int arr [5];
  
                    /* Unresolved local var: int n@[???] */
  lVar1 = 0;
  arr[0] = 10;
  arr[1] = 0x14;
  arr[2] = 0x1e;
  arr[3] = 0x28;
  arr[4] = 0x32;
  do {
                    /* Unresolved local var: int i@[???] */
    if (arr[lVar1] == target) {
      return (int)lVar1;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 5);
  return -1;
}



/* Function: loop_continue @ 00100eb0 */

int loop_continue(int n)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  for (uVar2 = 1; (int)uVar2 <= n; uVar2 = uVar2 + 1) {
    if ((uVar2 & 1) != 0) {
      iVar1 = iVar1 + uVar2;
    }
  }
  return iVar1;
}



/* Function: goto_forward @ 00100ed8 */

int goto_forward(int x)

{
                    /* Unresolved local var: int result@[???] */
  if (0 < x) {
    x = x * x;
  }
  return x << 1;
}



/* Function: goto_backward @ 00100eec */

int goto_backward(int x)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int i@[???] */
  iVar1 = 1;
  if (0 < x) {
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int i@[???] */
    iVar2 = 1;
    do {
      iVar1 = iVar1 * iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= x);
  }
  return iVar1;
}



/* Function: ternary_op @ 00100f14 */

int ternary_op(int a,int b)

{
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: test_control_flow_l1 @ 00100f20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  int iVar1;
  
  puts(&DAT_00101c70);
  __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
  __printf_chk(1,"CF-L1-03 (if_else): %d\n");
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
  iVar1 = loop_for_fixed(10);
  __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",iVar1);
  iVar1 = loop_while(0x3039);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",iVar1);
  iVar1 = loop_dowhile(0x2694);
  __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",iVar1);
  iVar1 = loop_nested(3,4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",iVar1);
  iVar1 = loop_break(0x1e);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
  iVar1 = loop_break(99);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
  iVar1 = loop_continue(10);
  __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",iVar1);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 00101194 */

/* WARNING: Removing unreachable block (ram,0x00101208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_multi_exit(int target)

{
  int (*paiVar1) [4];
  int iVar2;
  long lVar3;
  int matrix [3] [4];
  
  paiVar1 = matrix;
  matrix[0][2] = 3;
  matrix[0][3] = 4;
  matrix[0][0] = 1;
  matrix[0][1] = 2;
  matrix[1][2] = 7;
  matrix[1][3] = 8;
  matrix[1][0] = 5;
  matrix[1][1] = 6;
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  matrix[2][2] = 0xb;
  matrix[2][3] = 0xc;
  matrix[2][0] = 9;
  matrix[2][1] = 10;
  do {
                    /* Unresolved local var: int j@[???] */
    lVar3 = 0;
    do {
      if ((*paiVar1)[lVar3] == target) {
        return (int)lVar3 + iVar2 * 10;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    iVar2 = iVar2 + 1;
    paiVar1 = paiVar1 + 1;
  } while (iVar2 != 3);
  return -1;
}



/* Function: infinite_loop @ 00101238 */

int infinite_loop(int *flag)

{
  int iVar1;
  
                    /* Unresolved local var: int count@[???] */
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



/* Function: multi_return @ 00101264 */

int multi_return(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  if (x < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = x * 2;
    if (iVar1 < 0x65) {
      if ((x & 1U) != 0) {
        iVar1 = x + 1;
      }
    }
    else {
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: conditional_return @ 00101294 */

int conditional_return(int x)

{
  int iVar1;
  
  iVar1 = -x;
  if (x == 0) {
    iVar1 = 0;
  }
  if (0 < x) {
    iVar1 = x << 1;
  }
  return iVar1;
}



/* Function: duffs_device @ 001012a8 */

int duffs_device(int *dst,int *src,int n)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
                    /* Unresolved local var: int count@[???] */
  if (n < 1) {
    n = -1;
  }
  else {
    iVar3 = n + 7 >> 3;
    piVar2 = src;
    piVar1 = src;
    piVar5 = dst;
    piVar4 = dst;
    switch(n & 7) {
    case 1:
      while( true ) {
        iVar3 = iVar3 + -1;
        *dst = *src;
        if (iVar3 == 0) break;
        src = src + 1;
        dst = dst + 1;
switchD_001012e4_default:
        piVar1 = src + 1;
        piVar4 = dst + 1;
        *dst = *src;
switchD_001012e4_caseD_7:
        piVar2 = piVar1 + 1;
        piVar5 = piVar4 + 1;
        *piVar4 = *piVar1;
switchD_001012e4_caseD_6:
        src = piVar2 + 1;
        dst = piVar5 + 1;
        *piVar5 = *piVar2;
switchD_001012e4_caseD_5:
        piVar2 = src + 1;
        piVar5 = dst + 1;
        *dst = *src;
switchD_001012e4_caseD_4:
        src = piVar2 + 1;
        dst = piVar5 + 1;
        *piVar5 = *piVar2;
switchD_001012e4_caseD_3:
        piVar2 = src + 1;
        piVar5 = dst + 1;
        *dst = *src;
switchD_001012e4_caseD_2:
        src = piVar2 + 1;
        dst = piVar5 + 1;
        *piVar5 = *piVar2;
      }
      break;
    case 2:
      goto switchD_001012e4_caseD_2;
    case 3:
      goto switchD_001012e4_caseD_3;
    case 4:
      goto switchD_001012e4_caseD_4;
    case 5:
      goto switchD_001012e4_caseD_5;
    case 6:
      goto switchD_001012e4_caseD_6;
    case 7:
      goto switchD_001012e4_caseD_7;
    default:
      goto switchD_001012e4_default;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 00101344 */

int loop_complex_cond(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[DW_OP_reg0(x0)]
                       Unresolved local var: int c@[???] */
  for (iVar1 = 0; iVar1 * 2 < x - iVar1 && iVar1 < 10; iVar1 = iVar1 + 1) {
  }
  return iVar1 * 3 + (x - iVar1);
}



/* Function: loop_modify_var @ 00101370 */

int loop_modify_var(int n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + iVar2;
    if (5 < iVar2) {
      iVar2 = iVar2 + 2;
    }
  }
  return iVar1;
}



/* Function: loop_external_state @ 001013a0 */

int loop_external_state(int *flag)

{
  int iVar1;
  
                    /* Unresolved local var: int count@[???] */
  iVar1 = 0;
  do {
    if (*flag != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  return 0x65;
}



/* Function: tail_recursion @ 001013c0 */

int tail_recursion(int n,int acc)

{
  for (; 1 < n; n = n + -1) {
    acc = acc * n;
  }
  return acc;
}



/* Function: indirect_recursion_a @ 001013e0 */

int indirect_recursion_a(int n,int depth)

{
  do {
    if (depth < 1) {
      return n;
    }
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
  } while( true );
}



/* Function: call_func_ptr @ 00101424 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0010142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 00101430 */

/* WARNING: Removing unreachable block (ram,0x00101494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_func_ptr_array(int idx,int x)

{
  int iVar1;
  _func_int_int *funcs [3];
  
  funcs[0] = (_func_int_int *)PTR_double_value_00113010;
  funcs[1] = (_func_int_int *)PTR_triple_value_00113018;
  funcs[2] = (_func_int_int *)PTR_recursion_factorial_00113020;
  if ((uint)idx < 3) {
                    /* WARNING: Could not recover jumptable at 0x001014a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*funcs[idx])(x);
    return iVar1;
  }
  return -1;
}



/* Function: call_virtual_func @ 001014c8 */

int call_virtual_func(void *obj,int x)

{
  return x << 1;
}



/* Function: process_with_callback @ 001014d0 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  for (lVar2 = 0; (int)lVar2 < n; lVar2 = lVar2 + 1) {
    iVar1 = (*cb)(arr[lVar2]);
    iVar3 = iVar3 + iVar1;
  }
  return iVar3;
}



/* Function: test_control_flow_l2 @ 0010152c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  long lVar1;
  int iVar2;
  int flag;
  int ext_flag;
  int arr [5];
  int src [8];
  int dst [8];
  
  lVar1 = ___stack_chk_guard;
  puts(&DAT_00101edd);
  iVar2 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar2);
  flag = 0;
  iVar2 = infinite_loop(&flag);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",iVar2);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  dst[0] = 0;
  dst[1] = 0;
  dst[2] = 0;
  dst[3] = 0;
  dst[4] = 0;
  dst[5] = 0;
  dst[6] = 0;
  dst[7] = 0;
  src[2] = 3;
  src[3] = 4;
  src[0] = 1;
  src[1] = 2;
  src[6] = 7;
  src[7] = 8;
  src[4] = 5;
  src[5] = 6;
  iVar2 = duffs_device(dst,src,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar2);
  iVar2 = loop_complex_cond(10);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",iVar2);
  iVar2 = loop_modify_var(10);
  __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar2);
  ext_flag = 0;
  iVar2 = loop_external_state(&ext_flag);
  __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",iVar2);
  iVar2 = recursion_factorial(5);
  __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",iVar2);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
  iVar2 = indirect_recursion_a(6,1);
  __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",iVar2);
  iVar2 = call_func_ptr(double_value,5);
  __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",iVar2);
  iVar2 = call_func_ptr_array(0,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
  iVar2 = call_func_ptr_array(2,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",iVar2);
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  iVar2 = process_with_callback(arr,5,double_value);
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar2);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}



/* Function: non_local_jump @ 001017ac */

int non_local_jump(int x)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 != 0) {
    return -1;
  }
  if (x < 0) {
    uVar2 = 1;
  }
  else {
    if (x < 0x65) {
      return x << 1;
    }
    uVar2 = 2;
  }
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jump_buffer,uVar2);
}



/* Function: cpp_exception @ 00101808 */

int cpp_exception(int x)

{
  int iVar1;
  
  if (x < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = x << 1;
    if (100 < x) {
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: large_jump_table @ 00101828 */

/* WARNING: Removing unreachable block (ram,0x0010189c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int large_jump_table(int op,int a,int b)

{
  int iVar1;
  _func_int_int_int *ops [10];
  
  ops[1] = (_func_int_int_int *)PTR_op_sub_00113030;
  ops[0] = (_func_int_int_int *)PTR_op_add_00113028;
  ops[3] = (_func_int_int_int *)PTR_op_div_00113040;
  ops[2] = (_func_int_int_int *)PTR_op_mul_00113038;
  ops[5] = (_func_int_int_int *)PTR_op_and_00113050;
  ops[4] = (_func_int_int_int *)PTR_op_mod_00113048;
  ops[7] = (_func_int_int_int *)PTR_op_xor_00113060;
  ops[6] = (_func_int_int_int *)PTR_op_or_00113058;
  ops[9] = (_func_int_int_int *)PTR_op_shr_00113070;
  ops[8] = (_func_int_int_int *)PTR_op_shl_00113068;
  if ((uint)op < 10) {
                    /* WARNING: Could not recover jumptable at 0x001018ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*ops[op])(a,b);
    return iVar1;
  }
  return -1;
}



/* Function: conditional_func_ptr @ 001018d0 */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* Unresolved local var: _func_int_int * func@[???] */
  if (mode == 0) {
    UNRECOVERED_JUMPTABLE = double_value;
  }
  else {
    UNRECOVERED_JUMPTABLE = triple_value;
    if (mode != 1) {
      UNRECOVERED_JUMPTABLE = recursion_factorial;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001018f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
  return iVar1;
}



/* Function: state_machine @ 00101908 */

int state_machine(int event,int state)

{
  switch(state) {
  case 0:
    state = (int)(event == 1);
    break;
  case 1:
    if (event == 2) {
      state = 2;
    }
    else if (event == 99) {
      state = 3;
    }
    break;
  case 2:
    break;
  case 3:
    if (event == 0) {
      state = 0;
    }
    break;
  default:
    state = 3;
  }
  return state;
}



/* Function: fsm_func_table @ 00101970 */

/* WARNING: Removing unreachable block (ram,0x001019c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fsm_func_table(int event,int state)

{
  int iVar1;
  _func_int_int *state_handlers [4];
  
  state_handlers[0]._0_1_ = DAT_00113078;
  state_handlers[0]._1_1_ = DAT_00113079;
  state_handlers[0]._2_1_ = DAT_0011307a;
  state_handlers[0]._3_1_ = DAT_0011307b;
  state_handlers[0]._4_1_ = DAT_0011307c;
  state_handlers[0]._5_1_ = DAT_0011307d;
  state_handlers[0]._6_1_ = DAT_0011307e;
  state_handlers[0]._7_1_ = DAT_0011307f;
  state_handlers[1]._0_1_ = DAT_00113080;
  state_handlers[1]._1_1_ = DAT_00113081;
  state_handlers[1]._2_1_ = DAT_00113082;
  state_handlers[1]._3_1_ = DAT_00113083;
  state_handlers[1]._4_1_ = DAT_00113084;
  state_handlers[1]._5_1_ = DAT_00113085;
  state_handlers[1]._6_1_ = DAT_00113086;
  state_handlers[1]._7_1_ = DAT_00113087;
  state_handlers[2]._0_1_ = DAT_00113088;
  state_handlers[2]._1_1_ = DAT_00113089;
  state_handlers[2]._2_1_ = DAT_0011308a;
  state_handlers[2]._3_1_ = DAT_0011308b;
  state_handlers[2]._4_1_ = DAT_0011308c;
  state_handlers[2]._5_1_ = DAT_0011308d;
  state_handlers[2]._6_1_ = DAT_0011308e;
  state_handlers[2]._7_1_ = DAT_0011308f;
  state_handlers[3]._0_1_ = DAT_00113090;
  state_handlers[3]._1_1_ = DAT_00113091;
  state_handlers[3]._2_1_ = DAT_00113092;
  state_handlers[3]._3_1_ = DAT_00113093;
  state_handlers[3]._4_1_ = DAT_00113094;
  state_handlers[3]._5_1_ = DAT_00113095;
  state_handlers[3]._6_1_ = DAT_00113096;
  state_handlers[3]._7_1_ = DAT_00113097;
  if ((uint)state < 4) {
                    /* WARNING: Could not recover jumptable at 0x001019d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*state_handlers[state])(event);
    return iVar1;
  }
  return 3;
}



/* Function: computed_goto @ 001019fc */

/* WARNING: Removing unreachable block (ram,0x00101a60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  void *targets [4];
  
  targets[0]._0_1_ = DAT_00113098;
  targets[0]._1_1_ = DAT_00113099;
  targets[0]._2_1_ = DAT_0011309a;
  targets[0]._3_1_ = DAT_0011309b;
  targets[0]._4_1_ = DAT_0011309c;
  targets[0]._5_1_ = DAT_0011309d;
  targets[0]._6_1_ = DAT_0011309e;
  targets[0]._7_1_ = DAT_0011309f;
  targets[1]._0_1_ = DAT_001130a0;
  targets[1]._1_1_ = DAT_001130a1;
  targets[1]._2_1_ = DAT_001130a2;
  targets[1]._3_1_ = DAT_001130a3;
  targets[1]._4_1_ = DAT_001130a4;
  targets[1]._5_1_ = DAT_001130a5;
  targets[1]._6_1_ = DAT_001130a6;
  targets[1]._7_1_ = DAT_001130a7;
  targets[2]._0_1_ = DAT_001130a8;
  targets[2]._1_1_ = DAT_001130a9;
  targets[2]._2_1_ = DAT_001130aa;
  targets[2]._3_1_ = DAT_001130ab;
  targets[2]._4_1_ = DAT_001130ac;
  targets[2]._5_1_ = DAT_001130ad;
  targets[2]._6_1_ = DAT_001130ae;
  targets[2]._7_1_ = DAT_001130af;
  targets[3]._0_1_ = DAT_001130b0;
  targets[3]._1_1_ = DAT_001130b1;
  targets[3]._2_1_ = DAT_001130b2;
  targets[3]._3_1_ = DAT_001130b3;
  targets[3]._4_1_ = DAT_001130b4;
  targets[3]._5_1_ = DAT_001130b5;
  targets[3]._6_1_ = DAT_001130b6;
  targets[3]._7_1_ = DAT_001130b7;
  if (3 < (uint)idx) {
    return -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00101a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*targets[idx])();
  return iVar1;
}



/* Function: obfuscated_cf @ 00101a8c */

int obfuscated_cf(int param_1)

{
  return param_1 << 1;
}



/* Function: opaque_predicate @ 00101a94 */

int opaque_predicate(int param_1)

{
  return param_1 << 1;
}



/* Function: overlapped_code @ 00101a9c */

int overlapped_code(int x)

{
  int iVar1;
  
  if ((x & 1U) == 0) {
    iVar1 = x / 2;
  }
  else {
    iVar1 = x * 3 + 1;
  }
  return iVar1;
}



/* Function: test_control_flow_l3 @ 00101ab8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  long lVar1;
  int iVar2;
  int labels [4];
  
  lVar1 = ___stack_chk_guard;
  puts(&DAT_001020d0);
  iVar2 = non_local_jump(5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
  iVar2 = non_local_jump(-5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  iVar2 = large_jump_table(0,10,5);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",iVar2);
  iVar2 = conditional_func_ptr(0,5);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",iVar2);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
  iVar2 = fsm_func_table(2,1);
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",iVar2);
  labels[0] = 0;
  labels[1] = 1;
  labels[2] = 2;
  labels[3] = 3;
  iVar2 = computed_goto(labels,2);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar2);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}



/* Function: _fini @ 00101c58 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 74 */
