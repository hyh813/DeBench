/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_O1_g
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



/* Function: _start @ 001010e0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101110 */

/* WARNING: Removing unreachable block (ram,0x00101123) */
/* WARNING: Removing unreachable block (ram,0x0010112f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101140 */

/* WARNING: Removing unreachable block (ram,0x00101164) */
/* WARNING: Removing unreachable block (ram,0x00101170) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101180 */

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



/* Function: recursion_factorial @ 001011c9 */

int recursion_factorial(int n)

{
  int iVar1;
  
  if (1 < n) {
    iVar1 = recursion_factorial(n + -1);
    return iVar1 * n;
  }
  return 1;
}



/* Function: double_value @ 001011e8 */

int double_value(int x)

{
  return x * 2;
}



/* Function: triple_value @ 001011f0 */

int triple_value(int x)

{
  return x * 3;
}



/* Function: op_add @ 001011f8 */

int op_add(int a,int b)

{
  return a + b;
}



/* Function: op_sub @ 00101200 */

int op_sub(int a,int b)

{
  return a - b;
}



/* Function: op_mul @ 00101209 */

int op_mul(int a,int b)

{
  return a * b;
}



/* Function: op_div @ 00101213 */

int op_div(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a / b;
  }
  return iVar1;
}



/* Function: op_mod @ 00101225 */

int op_mod(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a % b;
  }
  return iVar1;
}



/* Function: op_and @ 00101237 */

int op_and(int a,int b)

{
  return a & b;
}



/* Function: op_or @ 00101240 */

int op_or(int a,int b)

{
  return a | b;
}



/* Function: op_xor @ 00101249 */

int op_xor(int a,int b)

{
  return a ^ b;
}



/* Function: op_shl @ 00101252 */

int op_shl(int a,int b)

{
  return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 0010125d */

int op_shr(int a,int b)

{
  return a >> ((byte)b & 0x1f);
}



/* Function: state_idle @ 00101268 */

int state_idle(int event)

{
  return (int)(event == 1);
}



/* Function: state_processing @ 00101276 */

int state_processing(int event)

{
  if (event != 2) {
    return (event == 99) + 1 + (uint)(event == 99);
  }
  return 2;
}



/* Function: state_done @ 00101290 */

int state_done(int event)

{
  return 2;
}



/* Function: state_error @ 0010129a */

int state_error(int event)

{
  int iVar1;
  
  iVar1 = 0;
  if (event != 0) {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: sequential_ops @ 001012ab */

int sequential_ops(int a,int b,int c)

{
  return (a + b) * 2 - c;
}



/* Function: single_if @ 001012b7 */

int single_if(int x)

{
  int iVar1;
  
  iVar1 = x * 2;
  if (x < 1) {
    iVar1 = x;
  }
  return iVar1;
}



/* Function: if_else @ 001012c4 */

int if_else(int x)

{
  return (int)(0 < x);
}



/* Function: nested_if_2 @ 001012d1 */

int nested_if_2(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0 < a) && (iVar1 = a + b, b < 1)) {
    iVar1 = a;
  }
  return iVar1;
}



/* Function: nested_if_deep @ 001012e7 */

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



/* Function: if_elseif_chain @ 0010131e */

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



/* Function: if_elseif_long @ 00101347 */

int if_elseif_long(int x)

{
  switch(x) {
  case 0:
    return 100;
  case 1:
    return 200;
  case 2:
    return 300;
  case 3:
    return 400;
  case 4:
    return 500;
  default:
    return -1;
  }
}



/* Function: switch_small @ 00101387 */

int switch_small(int op)

{
  int iVar1;
  
  if (op == 2) {
    iVar1 = 0x32;
  }
  else {
    if (2 < op) {
      return (uint)(op == 3) * 3 + -1;
    }
    iVar1 = 0xf;
    if (op != 0) {
      iVar1 = -1;
      if (op == 1) {
        iVar1 = 5;
      }
      return iVar1;
    }
  }
  return iVar1;
}



/* Function: switch_large @ 001013c0 */

int switch_large(int op)

{
  switch(op) {
  case 0:
    return op;
  case 1:
    return 10;
  case 2:
    return 0x14;
  case 3:
    return 0x1e;
  case 4:
    return 0x28;
  case 5:
    return 0x32;
  case 6:
    return 0x3c;
  case 7:
    return 0x46;
  case 8:
    return 0x50;
  case 9:
    return 0x5a;
  default:
    return -1;
  }
}



/* Function: switch_default @ 0010141b */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = 200;
  if (((op != 2) && (iVar1 = 300, op != 3)) && (iVar1 = 0, op == 1)) {
    iVar1 = 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00101444 */

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
      goto LAB_0010146c;
    }
    iVar1 = 0xc;
  }
  iVar1 = iVar1 + op * 2;
LAB_0010146c:
  return iVar1 + op;
}



/* Function: loop_for_fixed @ 00101476 */

int loop_for_fixed(int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (n != iVar1);
  }
  return iVar2;
}



/* Function: loop_while @ 0010149b */

int loop_while(int x)

{
  int iVar1;
  
  if (x == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      x = x / 10;
      iVar1 = iVar1 + 1;
    } while (x != 0);
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: loop_dowhile @ 001014d3 */

int loop_dowhile(int x)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    x = x / 10;
    iVar1 = iVar1 + 1;
  } while (x != 0);
  return iVar1;
}



/* Function: loop_nested @ 001014fb */

int loop_nested(int m,int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  iVar2 = 0;
  if (0 < m) {
    do {
      iVar1 = 0;
      if (0 < n) {
        do {
                    /* Unresolved local var: int j@[???] */
          iVar1 = iVar1 + 1;
        } while (n != iVar1);
        iVar2 = iVar2 + iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (m != iVar3);
  }
  return iVar2;
}



/* Function: loop_break @ 0010152b */

int loop_break(int target)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int arr [5];
  
  lVar1 = 0;
  arr[0] = 10;
  arr[1] = 0x14;
  arr[2] = 0x1e;
  arr[3] = 0x28;
  arr[4] = 0x32;
                    /* Unresolved local var: int i@[???] */
  do {
    iVar2 = (int)lVar1;
    if (arr[lVar1] == target) goto LAB_00101583;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 5);
  iVar2 = -1;
LAB_00101583:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: loop_continue @ 0010159f */

int loop_continue(int n)

{
  uint uVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    uVar1 = 1;
    iVar2 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        iVar2 = iVar2 + uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != n + 1U);
  }
  return iVar2;
}



/* Function: goto_forward @ 001015cd */

int goto_forward(int x)

{
  if (0 < x) {
    x = x * x;
  }
  return x * 2;
}



/* Function: goto_backward @ 001015de */

int goto_backward(int x)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < x) {
    iVar1 = 1;
    do {
      iVar2 = iVar2 * iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != x + 1);
  }
  return iVar2;
}



/* Function: ternary_op @ 00101600 */

int ternary_op(int a,int b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: test_control_flow_l1 @ 0010160c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  int iVar1;
  
  puts(&DAT_00103060);
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
  iVar1 = goto_backward(5);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",iVar1);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 0010192b */

int loop_multi_exit(int target)

{
  long lVar1;
  int (*paiVar2) [4];
  int iVar3;
  long in_FS_OFFSET;
  int matrix [3] [4];
  
  paiVar2 = matrix;
  matrix[0][0] = 1;
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
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  do {
                    /* Unresolved local var: int j@[???] */
    lVar1 = 0;
    do {
      if (*(int *)((long)paiVar2 + lVar1 * 4) == target) {
        iVar3 = (int)lVar1 + iVar3 * 10;
        goto LAB_001019d1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 4);
    iVar3 = iVar3 + 1;
    paiVar2 = (int (*) [4])((long)paiVar2 + 0x10);
  } while (iVar3 != 3);
  iVar3 = -1;
LAB_001019d1:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: infinite_loop @ 001019f3 */

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



/* Function: multi_return @ 00101a14 */

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



/* Function: conditional_return @ 00101a3b */

int conditional_return(int x)

{
  int iVar1;
  
  if (0 < x) {
    return x * 2;
  }
  iVar1 = -x;
  if (-1 < x) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: duffs_device @ 00101a56 */

int duffs_device(int *dst,int *src,int n)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (n < 1) {
    n = -1;
  }
  else {
    iVar2 = n + 0xe;
    if (-1 < n + 7) {
      iVar2 = n + 7;
    }
    iVar2 = iVar2 >> 3;
    switch(n % 8) {
    case 0:
      while( true ) {
        *dst = *src;
        src = src + 1;
        dst = dst + 1;
switchD_00101aa1_caseD_7:
        *dst = *src;
        src = src + 1;
        dst = dst + 1;
switchD_00101aa1_caseD_6:
        *dst = *src;
        piVar1 = dst + 1;
        piVar3 = src + 1;
LAB_00101abc:
        src = piVar3 + 1;
        dst = piVar1 + 1;
        *piVar1 = *piVar3;
switchD_00101aa1_caseD_4:
        *dst = *src;
        piVar1 = dst + 1;
        piVar3 = src + 1;
LAB_00101ad6:
        src = piVar3 + 1;
        dst = piVar1 + 1;
        *piVar1 = *piVar3;
switchD_00101aa1_caseD_2:
        *dst = *src;
        dst = dst + 1;
        src = src + 1;
LAB_00101af0:
        *dst = *src;
        iVar2 = iVar2 + -1;
        if (iVar2 < 1) break;
        src = src + 1;
        dst = dst + 1;
      }
      break;
    case 1:
      goto LAB_00101af0;
    case 2:
      goto switchD_00101aa1_caseD_2;
    case 3:
      piVar1 = dst;
      piVar3 = src;
      goto LAB_00101ad6;
    case 4:
      goto switchD_00101aa1_caseD_4;
    case 5:
      piVar1 = dst;
      piVar3 = src;
      goto LAB_00101abc;
    case 6:
      goto switchD_00101aa1_caseD_6;
    case 7:
      goto switchD_00101aa1_caseD_7;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 00101b30 */

int loop_complex_cond(int x)

{
  int iVar1;
  int iVar2;
  
  if (x < 1) {
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 2;
      x = x + -1;
      iVar2 = iVar2 + 1;
      if (x <= iVar1 || 9 < iVar2) break;
    } while (0 < x);
  }
  return iVar1 + x + iVar2;
}



/* Function: loop_modify_var @ 00101b71 */

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



/* Function: loop_external_state @ 00101b9a */

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



/* Function: tail_recursion @ 00101bb2 */

int tail_recursion(int n,int acc)

{
  int iVar1;
  
  if (1 < n) {
    iVar1 = tail_recursion(n + -1,acc * n);
    return iVar1;
  }
  return acc;
}



/* Function: indirect_recursion_a @ 00101bd2 */

int indirect_recursion_a(int n,int depth)

{
  int iVar1;
  
  if (0 < depth) {
    if ((n & 1U) == 0) {
      iVar1 = n / 2;
      if (1 < depth) {
        iVar1 = indirect_recursion_a(iVar1 + 1,depth + -2);
      }
    }
    else if (depth < 2) {
      iVar1 = n * 3 + 1;
    }
    else {
      iVar1 = indirect_recursion_a(n * 3 + 2,depth + -2);
    }
    return iVar1;
  }
  return n;
}



/* Function: call_func_ptr @ 00101c1f */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 00101c33 */

int call_func_ptr_array(int idx,int x)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  _func_int_int *funcs [3];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ((uint)idx < 3) {
    iVar2 = (*funcs[idx])(x);
  }
  else {
    iVar2 = -1;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_virtual_func @ 00101c9d */

int call_virtual_func(void *obj,int x)

{
  return x * 2;
}



/* Function: process_with_callback @ 00101ca5 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar3 = 0;
  }
  else {
    piVar1 = arr + (ulong)(n - 1) + 1;
    iVar3 = 0;
    do {
      iVar2 = (*cb)(*arr);
      iVar3 = iVar3 + iVar2;
      arr = arr + 1;
    } while (arr != piVar1);
  }
  return iVar3;
}



/* Function: test_control_flow_l2 @ 00101cee */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int flag;
  int ext_flag;
  int arr [5];
  int src [8];
  int dst [8];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103170);
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
  src[0] = 1;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  src[4] = 5;
  src[5] = 6;
  src[6] = 7;
  src[7] = 8;
  dst[0] = 0;
  dst[1] = 0;
  dst[2] = 0;
  dst[3] = 0;
  dst[4] = 0;
  dst[5] = 0;
  dst[6] = 0;
  dst[7] = 0;
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
  iVar2 = tail_recursion(5,1);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",iVar2);
  iVar2 = indirect_recursion_a(10,3);
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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: non_local_jump @ 0010203c */

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



/* Function: cpp_exception @ 0010209e */

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



/* Function: large_jump_table @ 001020bb */

int large_jump_table(int op,int a,int b)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  _func_int_int_int *ops [10];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
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
    iVar2 = (*ops[op])(a,b);
  }
  else {
    iVar2 = -1;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: conditional_func_ptr @ 0010217b */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = double_value;
  if ((mode != 0) && (pcVar2 = triple_value, mode != 1)) {
    pcVar2 = recursion_factorial;
  }
  iVar1 = (*pcVar2)(x);
  return iVar1;
}



/* Function: state_machine @ 001021ae */

int state_machine(int event,int state)

{
  int iVar1;
  
  if (state == 2) {
    return 2;
  }
  if (2 < state) {
    if (state == 3) {
      iVar1 = 0;
      if (event != 0) {
        iVar1 = 3;
      }
      return iVar1;
    }
    return 3;
  }
  if (state == 0) {
    return (int)(event == 1);
  }
  if (state == 1) {
    if (event != 2) {
      iVar1 = 3;
      if (event != 99) {
        iVar1 = 1;
      }
      return iVar1;
    }
    return 2;
  }
  return 3;
}



/* Function: fsm_func_table @ 001021fc */

int fsm_func_table(int event,int state)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  _func_int_int *state_handlers [4];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  iVar2 = 3;
  if ((uint)state < 4) {
    iVar2 = (*state_handlers[state])(event);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: computed_goto @ 0010226d */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  long in_FS_OFFSET;
  void *targets [4];
  
  targets[0] = &DAT_001022bf;
  targets[1] = &LAB_001022dd;
  targets[2] = &LAB_001022e8;
  targets[3] = &LAB_001022f3;
  if ((uint)idx < 4) {
                    /* WARNING: Could not recover jumptable at 0x001022bc. Too many branches */
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



/* Function: obfuscated_cf @ 0010230a */

int obfuscated_cf(int x)

{
  return x * 2;
}



/* Function: opaque_predicate @ 00102312 */

int opaque_predicate(int x)

{
  return x * 2;
}



/* Function: overlapped_code @ 0010231a */

int overlapped_code(int x)

{
  if ((x & 1U) != 0) {
    return x * 3 + 1;
  }
  return x / 2;
}



/* Function: test_control_flow_l3 @ 00102333 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int labels [4];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103310);
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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: main @ 00102515 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _fini @ 00102548 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 72 */
