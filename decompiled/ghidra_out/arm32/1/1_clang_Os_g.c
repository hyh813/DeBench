/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/1/1_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000104d0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 0001055c */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000105a0 */

/* WARNING: Removing unreachable block (ram,0x000105b4) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000105c4 */

/* WARNING: Removing unreachable block (ram,0x000105e4) */
/* WARNING: Removing unreachable block (ram,0x000105f0) */
/* WARNING: Removing unreachable block (ram,0x000105f4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010608 */

/* WARNING: Removing unreachable block (ram,0x00010634) */
/* WARNING: Removing unreachable block (ram,0x00010640) */
/* WARNING: Removing unreachable block (ram,0x00010644) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010658 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: sequential_ops @ 000106c4 */

int sequential_ops(int a,int b,int c)

{
                    /* Unresolved local var: int temp1@[???]
                       Unresolved local var: int temp3@[???]
                       Unresolved local var: int temp2@[???] */
  return (b + a) * 2 - c;
}



/* Function: single_if @ 000106d0 */

int single_if(int x)

{
  return x << (uint)(0 < x);
}



/* Function: if_else @ 000106e4 */

int if_else(int x)

{
  return (uint)(0 < x);
}



/* Function: nested_if_2 @ 000106f8 */

int nested_if_2(int a,int b)

{
  int iVar1;
  
  iVar1 = a;
  if (0 < b) {
    iVar1 = a + b;
  }
  if (a < 1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: nested_if_deep @ 00010714 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int iVar1;
  
  if (a < 1) {
    return 0;
  }
  if (b < 1) {
    return 1;
  }
  if (c < 1) {
    return 2;
  }
  if (0 < d) {
    iVar1 = 4;
    if (0 < e) {
      iVar1 = 5;
    }
    return iVar1;
  }
  return 3;
}



/* Function: if_elseif_chain @ 00010758 */

int if_elseif_chain(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)x < 3) {
    iVar1 = x * 10 + 10;
  }
  return iVar1;
}



/* Function: if_elseif_long @ 00010774 */

int if_elseif_long(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)x < 5) {
    iVar1 = x * 100 + 100;
  }
  return iVar1;
}



/* Function: switch_small @ 00010790 */

int switch_small(int op)

{
  int iVar1;
  
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???] */
  iVar1 = -1;
  if ((uint)op < 4) {
    iVar1 = *(int *)(&DAT_00011e70 + op * 4);
  }
  return iVar1;
}



/* Function: switch_large @ 000107b0 */

int switch_large(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 10) {
    iVar1 = op * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 000107c8 */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = 0;
  if (op - 1U < 3) {
    iVar1 = (op - 1U) * 100 + 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 000107e4 */

int switch_fallthrough(int op)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = 0;
  if (op != 1) {
    if (op != 2) {
      if (op != 3) {
        return -1;
      }
      iVar1 = 0xc;
    }
    iVar1 = iVar1 + op * 2;
  }
  return iVar1 + op;
}



/* Function: loop_for_fixed @ 00010818 */

int loop_for_fixed(int n)

{
  longlong lVar1;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar1 = (ulonglong)(n - 2) * (ulonglong)(n - 1);
    return ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1) + n + -1;
  }
  return 0;
}



/* Function: loop_while @ 00010848 */

int loop_while(int x)

{
  int iVar1;
  uint uVar2;
  
                    /* Unresolved local var: int count@[???] */
  if (x != 0) {
    iVar1 = 0;
    do {
      uVar2 = x + 9;
      iVar1 = iVar1 + 1;
      x = x / 10;
    } while (0x12 < uVar2);
    return iVar1;
  }
  return 1;
}



/* Function: loop_dowhile @ 00010888 */

int loop_dowhile(int x)

{
  int iVar1;
  uint uVar2;
  
                    /* Unresolved local var: int count@[DW_OP_reg0(r0)] */
  iVar1 = 0;
  do {
    uVar2 = x + 9;
    iVar1 = iVar1 + 1;
    x = x / 10;
  } while (0x12 < uVar2);
  return iVar1;
}



/* Function: loop_nested @ 000108bc */

int loop_nested(int m,int n)

{
  int iVar1;
  
                    /* Unresolved local var: int total@[???]
                       Unresolved local var: int i@[???] */
  iVar1 = 0;
  if (0 < m) {
    iVar1 = (n & ~(n >> 0x1f)) * m;
  }
  return iVar1;
}



/* Function: loop_break @ 000108d4 */

int loop_break(int target)

{
  int iVar1;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int[5] arr@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
    if ((&DAT_00011848)[iVar1] == target) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 5);
  return -1;
}



/* Function: loop_continue @ 00010908 */

int loop_continue(int n)

{
  int iVar1;
  uint uVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      if ((uVar2 & 1) != 0) {
        iVar1 = iVar1 + uVar2;
      }
    } while (n != uVar2);
  }
  return iVar1;
}



/* Function: goto_forward @ 0001093c */

int goto_forward(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = x;
  if (x < 2) {
    iVar1 = 1;
  }
  return x * iVar1 * 2;
}



/* Function: goto_backward @ 00010954 */

int goto_backward(int x)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int i@[???] */
  if (x < 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = 1;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = iVar1 * iVar2;
    } while (x != iVar1);
  }
  return iVar2;
}



/* Function: ternary_op @ 00010988 */

int ternary_op(int a,int b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: test_control_flow_l1 @ 00010994 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  puts(&DAT_00011de1);
  printf("CF-L1-01 (sequential_ops): %d\n",0x15);
  printf("CF-L1-02 (single_if): %d\n",0x14);
  printf("CF-L1-02 (single_if): %d\n",0xfffffffb);
  printf("CF-L1-03 (if_else): %d\n",1);
  printf("CF-L1-03 (if_else): %d\n",0);
  printf("CF-L1-04 (nested_if_2): %d\n",0xf);
  printf("CF-L1-04 (nested_if_2): %d\n",10);
  printf("CF-L1-04 (nested_if_2): %d\n",0);
  printf("CF-L1-05 (nested_if_deep): %d\n",5);
  printf("CF-L1-06 (if_elseif_chain): %d\n",0x14);
  printf("CF-L1-07 (if_elseif_long): %d\n",400);
  printf("CF-L1-08 (switch_small): %d\n",0x32);
  printf("CF-L1-09 (switch_large): %d\n",0x46);
  printf("CF-L1-10 (switch_default): %d\n",0);
  printf("CF-L1-11 (switch_fallthrough): %d\n",0x15);
  printf("CF-L1-12 (loop_for_fixed): %d\n",0x2d);
  printf("CF-L1-13 (loop_while): %d\n",5);
  printf("CF-L1-14 (loop_dowhile): %d\n",4);
  printf("CF-L1-15 (loop_nested): %d\n",0xc);
  printf("CF-L1-16 (loop_break): %d\n",2);
  printf("CF-L1-16 (loop_break): %d\n",0xffffffff);
  printf("CF-L1-17 (loop_continue): %d\n",0x19);
  printf("CF-L1-18 (goto_forward): %d\n",0x32);
  printf("CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  printf("CF-L1-19 (goto_backward): %d\n",0x78);
  printf("CF-L1-20 (ternary_op): %d\n",10);
  printf("CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 00010ba8 */

int loop_multi_exit(int target)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int[3][4] matrix@[???] */
  iVar3 = 0;
  iVar4 = 0;
  puVar2 = &DAT_0001185c;
  do {
    iVar1 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg14(lr)]
                       Unresolved local var: int j@[DW_OP_reg1(r1)] */
      if (puVar2[iVar1] == target) {
        return iVar1 - iVar3;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -10;
  } while (iVar4 != 3);
  return -1;
}



/* Function: infinite_loop @ 00010c04 */

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



/* Function: multi_return @ 00010c3c */

int multi_return(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  if (x < 0) {
    return -1;
  }
  if ((uint)x < 0x33) {
    iVar1 = x + 1;
    if ((x & 1U) == 0) {
      iVar1 = x << 1;
    }
    return iVar1;
  }
  return -2;
}



/* Function: conditional_return @ 00010c68 */

int conditional_return(int x)

{
  int iVar1;
  
  iVar1 = -x;
  if (0 < x) {
    iVar1 = x << 1;
  }
  return iVar1;
}



/* Function: duffs_device @ 00010c7c */

int duffs_device(int *dst,int *src,int n)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
                    /* Unresolved local var: int count@[???] */
  iVar3 = -1;
  if (0 < n) {
    uVar5 = n + 7U >> 3;
    piVar1 = dst;
    piVar2 = src;
    uVar4 = uVar5;
    switch(n & 7) {
    case 1:
      goto switchD_00010ca0_caseD_1;
    case 2:
      goto switchD_00010ca0_caseD_2;
    case 3:
      goto switchD_00010ca0_caseD_3;
    case 4:
      goto switchD_00010ca0_caseD_4;
    case 5:
      goto switchD_00010ca0_caseD_5;
    case 6:
      goto switchD_00010ca0_caseD_6;
    case 7:
      goto switchD_00010ca0_caseD_7;
    }
    do {
      piVar2 = src + 1;
      piVar1 = dst + 1;
      *dst = *src;
switchD_00010ca0_caseD_7:
      src = piVar2 + 1;
      dst = piVar1 + 1;
      *piVar1 = *piVar2;
switchD_00010ca0_caseD_6:
      piVar2 = src + 1;
      piVar1 = dst + 1;
      *dst = *src;
switchD_00010ca0_caseD_5:
      src = piVar2 + 1;
      dst = piVar1 + 1;
      *piVar1 = *piVar2;
switchD_00010ca0_caseD_4:
      piVar2 = src + 1;
      piVar1 = dst + 1;
      *dst = *src;
switchD_00010ca0_caseD_3:
      src = piVar2 + 1;
      dst = piVar1 + 1;
      *piVar1 = *piVar2;
switchD_00010ca0_caseD_2:
      piVar2 = src + 1;
      piVar1 = dst + 1;
      *dst = *src;
      uVar4 = uVar5;
switchD_00010ca0_caseD_1:
      src = piVar2 + 1;
      uVar5 = uVar4 - 1;
      dst = piVar1 + 1;
      *piVar1 = *piVar2;
      iVar3 = n;
    } while (uVar5 != 0 && 0 < (int)uVar4);
  }
  return iVar3;
}



/* Function: loop_complex_cond @ 00010d1c */

int loop_complex_cond(int x)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
                    /* Unresolved local var: int b@[DW_OP_reg0(r0)]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int c@[???] */
  if (x < 1) {
    iVar1 = 0;
    uVar4 = 0;
  }
  else {
    iVar1 = 0;
    uVar2 = x;
    uVar3 = 0;
    do {
      iVar1 = iVar1 + 2;
      uVar4 = uVar3 + 1;
      x = uVar2 - 1;
      if ((uVar2 < 2) || (x <= iVar1)) break;
      bVar5 = uVar3 < 9;
      uVar2 = x;
      uVar3 = uVar4;
    } while (bVar5);
  }
  return x + iVar1 + uVar4;
}



/* Function: loop_modify_var @ 00010d74 */

int loop_modify_var(int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar2 + iVar1;
      if (5 < iVar2) {
        iVar2 = iVar2 + 2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < n);
  }
  return iVar1;
}



/* Function: loop_external_state @ 00010dac */

int loop_external_state(int *flag)

{
  int iVar1;
  
                    /* Unresolved local var: int count@[DW_OP_reg0(r0)] */
  iVar1 = 0;
  do {
    if (*flag != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  return 0x65;
}



/* Function: recursion_factorial @ 00010dd4 */

int recursion_factorial(int n)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < n) {
    iVar2 = 1;
    do {
      iVar2 = n * iVar2;
      bVar1 = 2 < (uint)n;
      n = n - 1;
    } while (bVar1);
  }
  return iVar2;
}



/* Function: tail_recursion @ 00010e04 */

int tail_recursion(int n,int acc)

{
  bool bVar1;
  
  if (1 < n) {
    do {
      acc = acc * n;
      bVar1 = 2 < (uint)n;
      n = n - 1;
    } while (bVar1);
  }
  return acc;
}



/* Function: indirect_recursion_a @ 00010e34 */

int indirect_recursion_a(int n,int depth)

{
  int iVar1;
  
  if (0 < depth) {
    iVar1 = depth + 2;
    do {
      if ((n & 1U) == 0) {
        if (iVar1 == 3) {
          return n / 2;
        }
        n = n / 2 + 1;
      }
      else {
        if (iVar1 == 3) {
          return n * 3 + 1;
        }
        n = n * 3 + 2;
      }
      iVar1 = iVar1 + -2;
    } while (2 < iVar1);
  }
  return n;
}



/* Function: call_func_ptr @ 00010e88 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 00010e94 */

int call_func_ptr_array(int idx,int x)

{
  bool bVar1;
  int iVar2;
  
  switch(idx) {
  case 0:
    return x << 1;
  case 1:
    return x * 3;
  case 2:
    break;
  default:
    return -1;
  }
  iVar2 = 1;
  if (1 < x) {
    iVar2 = 1;
    do {
      iVar2 = x * iVar2;
      bVar1 = 2 < (uint)x;
      x = x - 1;
    } while (bVar1);
  }
  return iVar2;
}



/* Function: double_value @ 00010eb8 */

int double_value(int x)

{
  return x << 1;
}



/* Function: triple_value @ 00010ec0 */

int triple_value(int x)

{
  return x * 3;
}



/* Function: call_virtual_func @ 00010ec8 */

int call_virtual_func(void *obj,int x)

{
  return x << 1;
}



/* Function: process_with_callback @ 00010ed0 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = (*cb)(*arr);
      iVar2 = iVar1 + iVar2;
      n = n + -1;
      arr = arr + 1;
    } while (n != 0);
  }
  return iVar2;
}



/* Function: test_control_flow_l2 @ 00010f18 */

/* WARNING: Removing unreachable block (ram,0x00010fb8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int aiStack_5c [8];
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
                    /* Unresolved local var: int flag@[???]
                       Unresolved local var: int[8] src@[???]
                       Unresolved local var: int[8] dst@[???]
                       Unresolved local var: int ext_flag@[???]
                       Unresolved local var: int[5] arr@[???] */
  puts(&DAT_00011e05);
  iVar1 = 0;
  iVar3 = 0;
  puVar2 = &DAT_0001185c;
  do {
    iVar4 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg2(r2)]
                       Unresolved local var: int j@[DW_OP_reg3(r3)] */
      if (puVar2[iVar4] == 7) {
        iVar4 = iVar4 - iVar1;
        goto LAB_00010f78;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -10;
  } while (iVar3 != 3);
  iVar4 = -1;
LAB_00010f78:
  printf("CF-L2-01 (loop_multi_exit): %d\n",iVar4);
  iVar1 = 0;
  do {
                    /* Unresolved local var: int count@[???] */
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  local_1c = 1;
  printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
  uVar6 = 0xffffffff;
  printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
  printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
  printf("CF-L2-03 (multi_return): %d\n",4);
  iVar3 = 10;
  printf("CF-L2-04 (conditional_return): %d\n",10);
  printf("CF-L2-04 (conditional_return): %d\n",5);
  local_3c = 1;
  uStack_38 = 2;
  uStack_34 = 3;
  uStack_30 = 4;
  local_2c = 5;
  uStack_28 = 6;
  uStack_24 = 7;
  uStack_20 = 8;
  iVar1 = duffs_device(aiStack_5c,&local_3c,8);
  printf("CF-L2-05 (duffs_device): %d\n",iVar1);
  iVar1 = 0xb;
  do {
                    /* Unresolved local var: int c@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???] */
    uVar5 = iVar3 - 8;
    iVar3 = iVar3 + 2;
    if (iVar1 - 2U <= uVar5) break;
    uVar6 = uVar6 + 1;
    iVar1 = iVar1 + -1;
  } while (uVar6 < 9);
  printf("CF-L2-06 (loop_complex_cond): %d\n");
  printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
  iVar1 = 0;
  do {
                    /* Unresolved local var: int count@[DW_OP_reg1(r1)] */
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  printf("CF-L2-08 (loop_external_state): %d\n",0x65);
  printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
  printf("CF-L2-10 (tail_recursion): %d\n",0x78);
  printf("CF-L2-11 (indirect_recursion): %d\n",3);
  printf("CF-L2-12 (call_func_ptr): %d\n",10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
  printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
  return;
}



/* Function: non_local_jump @ 0001118c */

int non_local_jump(int x)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
    if (x < 0) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,1);
    }
    if (100 < (uint)x) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,2);
    }
    iVar2 = x << 1;
  }
  return iVar2;
}



/* Function: cpp_exception @ 000111f8 */

int cpp_exception(int x)

{
  int iVar1;
  
  iVar1 = x << 1;
  if (100 < x) {
    iVar1 = -2;
  }
  if (0x7fffffff < (uint)x) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: large_jump_table @ 00011214 */

int large_jump_table(int op,int a,int b)

{
  int iVar1;
  int extraout_r1;
  
  switch(op) {
  case 0:
    return b + a;
  case 1:
    return a - b;
  case 2:
    return b * a;
  case 3:
    break;
  case 4:
    if (b == 0) {
      return 0;
    }
    __aeabi_idivmod();
    return extraout_r1;
  case 5:
    return b & a;
  case 6:
    return b | a;
  case 7:
    return b ^ a;
  case 8:
    return a << (b & 0xffU);
  case 9:
    return a >> (b & 0xffU);
  default:
    return -1;
  }
  if (b == 0) {
    return 0;
  }
  iVar1 = __divsi3();
  return iVar1;
}



/* Function: op_add @ 0001123c */

int op_add(int a,int b)

{
  return b + a;
}



/* Function: op_sub @ 00011244 */

int op_sub(int a,int b)

{
  return a - b;
}



/* Function: op_mul @ 0001124c */

int op_mul(int a,int b)

{
  return b * a;
}



/* Function: op_div @ 00011258 */

int op_div(int a,int b)

{
  int iVar1;
  
  if (b != 0) {
    iVar1 = __divsi3();
    return iVar1;
  }
  return 0;
}



/* Function: op_mod @ 00011274 */

int op_mod(int a,int b)

{
  int extraout_r1;
  
  if (b != 0) {
    __aeabi_idivmod();
    return extraout_r1;
  }
  return 0;
}



/* Function: op_and @ 00011294 */

int op_and(int a,int b)

{
  return b & a;
}



/* Function: op_or @ 0001129c */

int op_or(int a,int b)

{
  return b | a;
}



/* Function: op_xor @ 000112a4 */

int op_xor(int a,int b)

{
  return b ^ a;
}



/* Function: op_shl @ 000112ac */

int op_shl(int a,int b)

{
  return a << (b & 0xffU);
}



/* Function: op_shr @ 000112b4 */

int op_shr(int a,int b)

{
  return a >> (b & 0xffU);
}



/* Function: conditional_func_ptr @ 000112bc */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar2;
  
                    /* Unresolved local var: _func_int_int * func@[???] */
  pcVar2 = recursion_factorial;
  if (mode == 1) {
    pcVar2 = triple_value;
  }
  UNRECOVERED_JUMPTABLE = double_value;
  if (mode != 0) {
    UNRECOVERED_JUMPTABLE = pcVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000112e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
  return iVar1;
}



/* Function: state_machine @ 000112f8 */

int state_machine(int event,int state)

{
  switch(state) {
  case 0:
    state = (int)(event == 1);
    break;
  case 1:
    state = 1;
    if (event == 99) {
      state = 3;
    }
    if (event == 2) {
      state = event;
    }
    break;
  case 2:
    break;
  case 3:
    state = event;
    if (event != 0) {
      state = 3;
    }
    break;
  default:
    state = 3;
  }
  return state;
}



/* Function: fsm_func_table @ 00011360 */

int fsm_func_table(int event,int state)

{
  int iVar1;
  
  switch(state) {
  case 0:
    return (uint)(event == 1);
  case 1:
    iVar1 = 1;
    if (event == 99) {
      iVar1 = 3;
    }
    break;
  case 2:
    return 2;
  case 3:
    iVar1 = 0;
    if (event != 0) {
      iVar1 = 3;
    }
    return iVar1;
  default:
    return 3;
  }
  if (event != 2) {
    event = iVar1;
  }
  return event;
}



/* Function: state_idle @ 00011380 */

int state_idle(int event)

{
  return (uint)(event == 1);
}



/* Function: state_processing @ 00011390 */

int state_processing(int event)

{
  int iVar1;
  
  iVar1 = 1;
  if (event == 99) {
    iVar1 = 3;
  }
  if (event != 2) {
    event = iVar1;
  }
  return event;
}



/* Function: state_done @ 000113a8 */

int state_done(int event)

{
  return 2;
}



/* Function: state_error @ 000113b0 */

int state_error(int event)

{
  int iVar1;
  
  iVar1 = 0;
  if (event != 0) {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: computed_goto @ 000113bc */

int computed_goto(int *labels,int idx)

{
  switch(idx) {
  case 0:
    return 0;
  case 1:
    return 10;
  case 2:
    return 0x14;
  case 3:
    return 0x1e;
  default:
    return -1;
  }
}



/* Function: obfuscated_cf @ 000113fc */

int obfuscated_cf(int x)

{
                    /* Unresolved local var: int result@[DW_OP_reg0(r0)] */
  return x << 1;
}



/* Function: opaque_predicate @ 00011404 */

int opaque_predicate(int x)

{
                    /* Unresolved local var: int cond@[???] */
  return x << 1;
}



/* Function: overlapped_code @ 0001140c */

int overlapped_code(int x)

{
  int iVar1;
  
  iVar1 = x * 3 + 1;
  if ((x & 1U) == 0) {
    iVar1 = x / 2;
  }
  return iVar1;
}



/* Function: test_control_flow_l3 @ 00011428 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  int iVar1;
  int *labels;
  
                    /* Unresolved local var: int[4] labels@[???] */
  puts(&DAT_00011e29);
  iVar1 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
  iVar1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
  printf("CF-L3-02 (cpp_exception): %d\n",10);
  printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  printf("CF-L3-03 (large_jump_table): %d\n",0xf);
  printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
  printf("CF-L3-05 (state_machine): %d\n",1);
  labels = (int *)printf("CF-L3-06 (fsm_func_table): %d\n",2);
  iVar1 = computed_goto(labels,2);
  printf("CF-L3-07 (computed_goto): %d\n",iVar1);
  printf("CF-L3-08 (obfuscated_cf): %d\n",10);
  printf("CF-L3-09 (opaque_predicate): %d\n",10);
  printf("CF-L3-10 (overlapped_code): %d\n",0x10);
  return;
}



/* Function: main @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: __divsi3 @ 0001155c */

uint __divsi3(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  
  if (param_2 == 0) {
    bVar5 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar5) {
      param_1 = 0x80000000;
    }
    uVar1 = __aeabi_ldiv0(param_1);
    return uVar1;
  }
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000115a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x115ac))();
  return uVar1;
}



/* Function: .divsi3_skip_div0_test @ 00011564 */

uint _divsi3_skip_div0_test(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool in_NG;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if (in_NG) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000115a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x115ac))();
  return uVar1;
}



/* Function: __aeabi_idivmod @ 0001177c */

void __aeabi_idivmod(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    _divsi3_skip_div0_test();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_ldiv0(param_1);
  return;
}



/* Function: __aeabi_ldiv0 @ 0001179c */

void __aeabi_ldiv0(void)

{
  raise(8);
  return;
}



/* Function: _fini @ 000117ac */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 76 */
