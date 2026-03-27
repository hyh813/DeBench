/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_Os_g
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



/* Function: _start @ 00101100 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101130 */

/* WARNING: Removing unreachable block (ram,0x00101143) */
/* WARNING: Removing unreachable block (ram,0x0010114f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101160 */

/* WARNING: Removing unreachable block (ram,0x00101184) */
/* WARNING: Removing unreachable block (ram,0x00101190) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011a0 */

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



/* Function: recursion_factorial @ 001011e9 */

int recursion_factorial(int n)

{
  int iVar1;
  
  iVar1 = 1;
  for (; 1 < n; n = n + -1) {
    iVar1 = iVar1 * n;
  }
  return iVar1;
}



/* Function: double_value @ 001011ff */

int double_value(int x)

{
  return x * 2;
}



/* Function: triple_value @ 00101207 */

int triple_value(int x)

{
  return x * 3;
}



/* Function: op_add @ 0010120f */

int op_add(int a,int b)

{
  return a + b;
}



/* Function: op_sub @ 00101217 */

int op_sub(int a,int b)

{
  return a - b;
}



/* Function: op_mul @ 00101220 */

int op_mul(int a,int b)

{
  return a * b;
}



/* Function: op_div @ 0010122a */

int op_div(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a / b;
  }
  return iVar1;
}



/* Function: op_mod @ 00101241 */

int op_mod(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a % b;
  }
  return iVar1;
}



/* Function: op_and @ 00101253 */

int op_and(int a,int b)

{
  return a & b;
}



/* Function: op_or @ 0010125c */

int op_or(int a,int b)

{
  return a | b;
}



/* Function: op_xor @ 00101265 */

int op_xor(int a,int b)

{
  return a ^ b;
}



/* Function: op_shl @ 0010126e */

int op_shl(int a,int b)

{
  return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00101279 */

int op_shr(int a,int b)

{
  return a >> ((byte)b & 0x1f);
}



/* Function: state_idle @ 00101284 */

int state_idle(int event)

{
  return (int)(event == 1);
}



/* Function: state_processing @ 00101290 */

int state_processing(int event)

{
  if (event != 2) {
    if (event == 99) {
      return 3;
    }
    event = 1;
  }
  return event;
}



/* Function: state_done @ 001012ac */

int state_done(int event)

{
  return 2;
}



/* Function: state_error @ 001012b6 */

int state_error(int event)

{
  int iVar1;
  
  iVar1 = 0;
  if (event != 0) {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: sequential_ops @ 001012c6 */

int sequential_ops(int a,int b,int c)

{
  return (a + b) * 2 - c;
}



/* Function: single_if @ 001012d2 */

int single_if(int x)

{
  if (0 < x) {
    x = x * 2;
  }
  return x;
}



/* Function: if_else @ 001012df */

int if_else(int x)

{
  return (int)(0 < x);
}



/* Function: nested_if_2 @ 001012eb */

int nested_if_2(int a,int b)

{
  if (a < 1) {
    a = 0;
  }
  else if (0 < b) {
    return a + b;
  }
  return a;
}



/* Function: nested_if_deep @ 001012ff */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int iVar1;
  
  iVar1 = 0;
  if ((((0 < a) && (iVar1 = 1, 0 < b)) && (iVar1 = 2, 0 < c)) && (iVar1 = 3, 0 < d)) {
    iVar1 = (0 < e) + 4;
  }
  return iVar1;
}



/* Function: if_elseif_chain @ 00101330 */

int if_elseif_chain(int x)

{
  int iVar1;
  
  iVar1 = 10;
  if (((x != 0) && (iVar1 = 0x14, x != 1)) && (iVar1 = 0x1e, x != 2)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: if_elseif_long @ 00101358 */

int if_elseif_long(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)x < 5) {
    iVar1 = (x + 1) * 100;
  }
  return iVar1;
}



/* Function: switch_small @ 0010136a */

int switch_small(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 4) {
    iVar1 = (int)*(char *)((long)&CSWTCH_55 + (ulong)(uint)op);
  }
  return iVar1;
}



/* Function: switch_large @ 00101384 */

int switch_large(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 10) {
    iVar1 = op * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 00101394 */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = 0;
  if (op - 1U < 3) {
    iVar1 = op * 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 001013a6 */

int switch_fallthrough(int op)

{
  int iVar1;
  
  if (op == 2) {
    iVar1 = 0;
  }
  else {
    if (op != 3) {
      if (op != 1) {
        return -1;
      }
      iVar1 = 0;
      goto LAB_001013cd;
    }
    iVar1 = 0xc;
  }
  iVar1 = iVar1 + op * 2;
LAB_001013cd:
  return iVar1 + op;
}



/* Function: loop_for_fixed @ 001013d0 */

int loop_for_fixed(int n)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}



/* Function: loop_while @ 001013e8 */

int loop_while(int x)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; x != 0; x = x / 10) {
    iVar2 = iVar2 + 1;
  }
  iVar1 = 1;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Function: loop_dowhile @ 0010140b */

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



/* Function: loop_nested @ 00101427 */

int loop_nested(int m,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  iVar1 = 0;
  if (n < 0) {
    n = 0;
    iVar2 = 0;
    iVar1 = 0;
  }
  for (; iVar2 < m; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + n;
  }
  return iVar1;
}



/* Function: loop_break @ 00101441 */

int loop_break(int target)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int arr [5];
  
  arr[4] = 0x32;
  arr[0] = 10;
  arr[1] = 0x14;
                    /* Unresolved local var: int i@[???] */
  arr[2] = 0x1e;
  arr[3] = 0x28;
  lVar1 = 0;
  do {
    iVar2 = (int)lVar1;
    if (arr[lVar1] == target) goto LAB_00101499;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 5);
  iVar2 = -1;
LAB_00101499:
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: loop_continue @ 001014b6 */

int loop_continue(int n)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (uVar1 = 1; (int)uVar1 <= n; uVar1 = uVar1 + 1) {
    if ((uVar1 & 1) != 0) {
      iVar2 = iVar2 + uVar1;
    }
  }
  return iVar2;
}



/* Function: goto_forward @ 001014d5 */

int goto_forward(int x)

{
  if (0 < x) {
    x = x * x;
  }
  return x * 2;
}



/* Function: goto_backward @ 001014e4 */

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
    } while (iVar1 <= x);
  }
  return iVar2;
}



/* Function: ternary_op @ 00101505 */

int ternary_op(int a,int b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: test_control_flow_l1 @ 00101511 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  int iVar1;
  
  puts(&DAT_00103004);
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
  loop_for_fixed(10);
  __printf_chk(1);
  iVar1 = loop_while(0x3039);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",iVar1);
  loop_dowhile(0x2694);
  __printf_chk(1);
  iVar1 = loop_nested(3,4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",iVar1);
  iVar1 = loop_break(0x1e);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
  iVar1 = loop_break(99);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar1);
  loop_continue(10);
  __printf_chk(1);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 001017ce */

int loop_multi_exit(int target)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int (*paiVar4) [4];
  undefined4 *puVar5;
  int (*paiVar6) [4];
  long in_FS_OFFSET;
  int matrix [3] [4];
  
  paiVar4 = matrix;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  puVar5 = &DAT_001035e0;
  paiVar6 = matrix;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    (*paiVar6)[0] = *puVar5;
    puVar5 = puVar5 + 1;
    paiVar6 = (int (*) [4])((long)paiVar6 + 4);
  }
  do {
                    /* Unresolved local var: int j@[???] */
    lVar3 = 0;
    do {
      if (*(int *)((long)paiVar4 + lVar3 * 4) == target) {
        iVar2 = iVar2 * 10 + (int)lVar3;
        goto LAB_00101823;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    iVar2 = iVar2 + 1;
    paiVar4 = (int (*) [4])((long)paiVar4 + 0x10);
  } while (iVar2 != 3);
  iVar2 = -1;
LAB_00101823:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: infinite_loop @ 0010183d */

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



/* Function: multi_return @ 00101859 */

int multi_return(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if (-1 < x) {
    iVar1 = x * 2;
    if (iVar1 < 0x65) {
      if ((x & 1U) != 0) {
        return x + 1;
      }
    }
    else {
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: conditional_return @ 0010187c */

int conditional_return(int x)

{
  int iVar1;
  
  if (0 < x) {
    return x * 2;
  }
  iVar1 = 0;
  if (x != 0) {
    iVar1 = -x;
  }
  return iVar1;
}



/* Function: duffs_device @ 0010188e */

int duffs_device(int *dst,int *src,int n)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (n < 1) {
    n = -1;
  }
  else {
    iVar4 = n + 7 >> 3;
    piVar2 = dst;
    piVar3 = dst;
    switch(n & 7) {
    case 1:
      while( true ) {
        *dst = *src;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
        src = src + 1;
        dst = dst + 1;
switchD_001018c1_default:
        iVar1 = *src;
        piVar2 = dst + 1;
        src = src + 1;
        *dst = iVar1;
switchD_001018c1_caseD_7:
        iVar1 = *src;
        piVar3 = piVar2 + 1;
        src = src + 1;
        *piVar2 = iVar1;
switchD_001018c1_caseD_6:
        iVar1 = *src;
        dst = piVar3 + 1;
        src = src + 1;
        *piVar3 = iVar1;
switchD_001018c1_caseD_5:
        iVar1 = *src;
        piVar2 = dst + 1;
        src = src + 1;
        *dst = iVar1;
switchD_001018c1_caseD_4:
        iVar1 = *src;
        dst = piVar2 + 1;
        src = src + 1;
        *piVar2 = iVar1;
switchD_001018c1_caseD_3:
        iVar1 = *src;
        piVar2 = dst + 1;
        src = src + 1;
        *dst = iVar1;
switchD_001018c1_caseD_2:
        iVar1 = *src;
        dst = piVar2 + 1;
        src = src + 1;
        *piVar2 = iVar1;
      }
      break;
    case 2:
      goto switchD_001018c1_caseD_2;
    case 3:
      goto switchD_001018c1_caseD_3;
    case 4:
      goto switchD_001018c1_caseD_4;
    case 5:
      goto switchD_001018c1_caseD_5;
    case 6:
      goto switchD_001018c1_caseD_6;
    case 7:
      goto switchD_001018c1_caseD_7;
    default:
      goto switchD_001018c1_default;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 00101939 */

int loop_complex_cond(int x)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 * 2 < x - iVar1 && (iVar1 < 10)); iVar1 = iVar1 + 1) {
  }
  return iVar1 * 3 + (x - iVar1);
}



/* Function: loop_modify_var @ 00101958 */

int loop_modify_var(int n)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + iVar1;
    if (5 < iVar1) {
      iVar1 = iVar1 + 2;
    }
  }
  return iVar2;
}



/* Function: loop_external_state @ 00101978 */

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



/* Function: tail_recursion @ 0010198c */

int tail_recursion(int n,int acc)

{
  for (; 1 < n; n = n + -1) {
    acc = acc * n;
  }
  return acc;
}



/* Function: indirect_recursion_a @ 0010199f */

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



/* Function: call_func_ptr @ 001019d2 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x001019db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 001019dd */

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
                    /* WARNING: Could not recover jumptable at 0x00101a3a. Too many branches */
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



/* Function: call_virtual_func @ 00101a59 */

int call_virtual_func(void *obj,int x)

{
  return x * 2;
}



/* Function: process_with_callback @ 00101a61 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  for (lVar2 = 0; (int)lVar2 < n; lVar2 = lVar2 + 1) {
    iVar1 = (*cb)(arr[lVar2]);
    iVar3 = iVar3 + iVar1;
  }
  return iVar3;
}



/* Function: test_control_flow_l2 @ 00101a9a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  byte bVar5;
  int flag;
  int ext_flag;
  int arr [5];
  int src [8];
  int dst [8];
  
  bVar5 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103271);
  iVar2 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar2);
  flag = 0;
  infinite_loop(&flag);
  __printf_chk(1);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  src[4] = 5;
  src[5] = 6;
  src[6] = 7;
  src[7] = 8;
  piVar4 = dst;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + (ulong)bVar5 * -2 + 1;
  }
  src[0] = 1;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  iVar2 = duffs_device(dst,src,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar2);
  loop_complex_cond(10);
  __printf_chk(1);
  loop_modify_var(10);
  __printf_chk(1);
  ext_flag = 0;
  loop_external_state(&ext_flag);
  __printf_chk(1);
  recursion_factorial(5);
  __printf_chk(1);
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
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: non_local_jump @ 00101d73 */

int non_local_jump(int x)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 != 0) {
    return -1;
  }
  uVar2 = 1;
  if (-1 < x) {
    if (x < 0x65) {
      return x * 2;
    }
    uVar2 = 2;
  }
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jump_buffer,uVar2);
}



/* Function: cpp_exception @ 00101dc5 */

int cpp_exception(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if ((-1 < x) && (iVar1 = -2, x < 0x65)) {
    iVar1 = x * 2;
  }
  return iVar1;
}



/* Function: large_jump_table @ 00101dde */

int large_jump_table(int op,int a,int b)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  _func_int_int_int **pp_Var6;
  long in_FS_OFFSET;
  _func_int_int_int *ops [10];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = 0;
  puVar5 = &DAT_00106020;
  pp_Var6 = ops;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)pp_Var6 = *puVar5;
    puVar5 = puVar5 + 1;
    pp_Var6 = (_func_int_int_int **)((long)pp_Var6 + 4);
  }
  if ((uint)op < 10) {
    lVar4 = lVar1 - *(long *)(in_FS_OFFSET + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00101e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*ops[op])(a,b);
      return iVar2;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pp_Var6,puVar5,lVar4);
}



/* Function: conditional_func_ptr @ 00101e55 */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = double_value;
  if (mode != 0) {
    UNRECOVERED_JUMPTABLE = triple_value;
    if (mode != 1) {
      UNRECOVERED_JUMPTABLE = recursion_factorial;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00101e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
  return iVar1;
}



/* Function: state_machine @ 00101e7e */

int state_machine(int event,int state)

{
  int iVar1;
  bool bVar2;
  
  if (state == 2) {
    return 2;
  }
  if (state < 3) {
    if (state == 0) {
      return (uint)(event == 1);
    }
    if (state == 1) {
      if (event == 2) {
        return 2;
      }
      bVar2 = event == 99;
      iVar1 = 3;
LAB_00101ebc:
      if (bVar2) {
        state = iVar1;
      }
      return state;
    }
  }
  else if (state == 3) {
    iVar1 = 0;
    bVar2 = event == 0;
    goto LAB_00101ebc;
  }
  return 3;
}



/* Function: fsm_func_table @ 00101ec6 */

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
                    /* WARNING: Could not recover jumptable at 0x00101f2d. Too many branches */
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



/* Function: computed_goto @ 00101f4e */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  long in_FS_OFFSET;
  void *targets [4];
  
  targets[0] = &DAT_00101fa3;
  targets[1] = &LAB_00101fab;
  targets[2] = &LAB_00101fb6;
  targets[3] = &LAB_00101fc1;
  if ((uint)idx < 4) {
                    /* WARNING: Could not recover jumptable at 0x00101f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*targets[idx])();
    return iVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return -1;
}



/* Function: obfuscated_cf @ 00101fe4 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00101fec */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00101ff4 */

int overlapped_code(int x)

{
  if ((x & 1U) != 0) {
    return x * 3 + 1;
  }
  return x / 2;
}



/* Function: test_control_flow_l3 @ 0010200d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int labels [4];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103464);
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
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
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
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: _fini @ 001021c4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 72 */
