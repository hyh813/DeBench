/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_O3_g
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



/* Function: computed_goto @ 00101370 */

int computed_goto(int *labels,int idx)

{
                    /* Unresolved local var: void *[4] targets@[???] */
  return 0x14;
}



/* Function: non_local_jump @ 00101380 */

int non_local_jump(int x)

{
  int iVar1;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  return (-(uint)(iVar1 == 0) & 0xb) - 1;
}



/* Function: sequential_ops @ 001013b0 */

int sequential_ops(int a,int b,int c)

{
  return (a + b) * 2 - c;
}



/* Function: single_if @ 001013c0 */

int single_if(int x)

{
  int iVar1;
  
  iVar1 = x * 2;
  if (x < 1) {
    iVar1 = x;
  }
  return iVar1;
}



/* Function: if_else @ 001013d0 */

int if_else(int x)

{
  return (int)(0 < x);
}



/* Function: nested_if_2 @ 001013e0 */

int nested_if_2(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0 < a) && (iVar1 = a + b, b < 1)) {
    iVar1 = a;
  }
  return iVar1;
}



/* Function: nested_if_deep @ 00101400 */

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



/* Function: if_elseif_chain @ 00101450 */

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



/* Function: if_elseif_long @ 00101480 */

int if_elseif_long(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)x < 5) {
    iVar1 = (x + 1) * 100;
  }
  return iVar1;
}



/* Function: switch_small @ 001014a0 */

int switch_small(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 4) {
    iVar1 = *(int *)(CSWTCH_55 + (ulong)(uint)op * 4);
  }
  return iVar1;
}



/* Function: switch_large @ 001014c0 */

int switch_large(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 10) {
    iVar1 = op * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 001014e0 */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = 0;
  if (op - 1U < 3) {
    iVar1 = op * 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00101500 */

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



/* Function: loop_for_fixed @ 00101540 */

int loop_for_fixed(int n)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar3 = 0;
  }
  else {
    if (n - 1U < 10) {
      uVar1 = 0;
      iVar3 = 0;
    }
    else {
      uVar1 = 0;
      iVar2 = 0;
      iVar4 = 0;
      iVar5 = 0;
      iVar6 = 0;
      iVar3 = 0;
      iVar7 = 1;
      iVar8 = 2;
      iVar9 = 3;
      do {
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + iVar3;
        iVar4 = iVar4 + iVar7;
        iVar5 = iVar5 + iVar8;
        iVar6 = iVar6 + iVar9;
        iVar3 = iVar3 + 4;
        iVar7 = iVar7 + 4;
        iVar8 = iVar8 + 4;
        iVar9 = iVar9 + 4;
      } while ((uint)n >> 2 != uVar1);
      uVar1 = n & 0xfffffffc;
      iVar3 = iVar2 + iVar5 + iVar4 + iVar6;
      if ((n & 3U) == 0) {
        return iVar3;
      }
    }
    iVar3 = iVar3 + uVar1;
    if ((int)(uVar1 + 1) < n) {
      iVar3 = iVar3 + uVar1 + 1;
      if ((int)(uVar1 + 2) < n) {
        iVar3 = iVar3 + uVar1 + 2;
        if ((int)(uVar1 + 3) < n) {
          iVar3 = iVar3 + uVar1 + 3;
          if ((int)(uVar1 + 4) < n) {
            iVar3 = iVar3 + uVar1 + 4;
            if ((int)(uVar1 + 5) < n) {
              iVar3 = iVar3 + uVar1 + 5;
              if ((int)(uVar1 + 6) < n) {
                iVar3 = iVar3 + uVar1 + 6;
                if ((int)(uVar1 + 7) < n) {
                  iVar3 = iVar3 + uVar1 + 7;
                  if ((int)(uVar1 + 8) < n) {
                    iVar3 = iVar3 + uVar1 + 8;
                    if ((int)(uVar1 + 9) < n) {
                      iVar3 = iVar3 + uVar1 + 9;
                    }
                    return iVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}



/* Function: loop_while @ 00101620 */

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



/* Function: loop_dowhile @ 00101670 */

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



/* Function: loop_nested @ 001016b0 */

int loop_nested(int m,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < m) {
    iVar2 = 0;
    iVar1 = 0;
    do {
                    /* Unresolved local var: int j@[???] */
      if (0 < n) {
        iVar1 = n + iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (m != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: loop_break @ 001016e0 */

int loop_break(int target)

{
                    /* Unresolved local var: int i@[???] */
  if (target == 10) {
    return 0;
  }
  if (target == 0x14) {
    return 1;
  }
  if (target == 0x1e) {
    return 2;
  }
  if (target != 0x28) {
    return (uint)(target == 0x32) * 5 + -1;
  }
  return 3;
}



/* Function: loop_continue @ 00101730 */

int loop_continue(int n)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar4 = 0;
  }
  else {
    if (n - 1U < 5) {
      uVar3 = 1;
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
      iVar5 = 0;
      uVar1 = 0;
      uVar3 = 1;
      uVar2 = 3;
      do {
        uVar1 = uVar1 + 1;
        iVar4 = iVar4 + (~-(uint)((uVar3 & 1) == 0) & uVar3);
        iVar5 = iVar5 + (~-(uint)((uVar2 & 1) == 0) & uVar2);
        uVar3 = uVar3 + 4;
        uVar2 = uVar2 + 4;
      } while ((uint)n >> 2 != uVar1);
      iVar4 = iVar4 + iVar5;
      uVar3 = (n & 0xfffffffcU) + 1;
      if (n == (n & 0xfffffffcU)) {
        return iVar4;
      }
      if ((uVar3 & 1) != 0) {
        iVar4 = iVar4 + uVar3;
      }
    }
    uVar2 = uVar3 + 1;
    if ((int)uVar2 <= n) {
      uVar1 = uVar3 + 2;
      if ((uVar2 & 1) != 0) {
        iVar4 = iVar4 + uVar2;
      }
      if ((int)uVar1 <= n) {
        uVar2 = uVar3 + 3;
        if ((uVar1 & 1) != 0) {
          iVar4 = iVar4 + uVar1;
        }
        if ((int)uVar2 <= n) {
          if ((uVar2 & 1) != 0) {
            iVar4 = iVar4 + uVar2;
          }
          uVar3 = uVar3 + 4;
          if ((int)uVar3 <= n) {
            if ((uVar3 & 1) != 0) {
              iVar4 = iVar4 + uVar3;
            }
            return iVar4;
          }
        }
      }
    }
  }
  return iVar4;
}



/* Function: goto_forward @ 00101820 */

int goto_forward(int x)

{
  if (0 < x) {
    x = x * x;
  }
  return x * 2;
}



/* Function: goto_backward @ 00101830 */

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



/* Function: ternary_op @ 00101860 */

int ternary_op(int a,int b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: test_control_flow_l1 @ 00101870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
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
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",2);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",0xffffffff);
  __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 00101b00 */

int loop_multi_exit(int target)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
  if (target == 1) {
    iVar1 = 0;
LAB_00101b57:
    iVar2 = 0;
  }
  else {
    if (target == 2) {
      iVar1 = 0;
LAB_00101b62:
      return iVar1 * 10 + 1;
    }
    if (target == 3) {
      iVar1 = 0;
LAB_00101b70:
      iVar2 = 2;
      goto LAB_00101b59;
    }
    if (target == 4) {
      iVar1 = 0;
    }
    else {
      if (target == 5) {
        iVar1 = 1;
        goto LAB_00101b57;
      }
      if (target == 6) {
        iVar1 = 1;
        goto LAB_00101b62;
      }
      if (target == 7) {
        iVar1 = 1;
        goto LAB_00101b70;
      }
      if (target == 8) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
        if (target == 9) goto LAB_00101b57;
        iVar1 = 2;
        if (target == 10) goto LAB_00101b62;
        iVar1 = 2;
        if (target == 0xb) goto LAB_00101b70;
        if (target != 0xc) {
          return -1;
        }
        iVar1 = 2;
      }
    }
    iVar2 = 3;
  }
LAB_00101b59:
  return iVar2 + iVar1 * 10;
}



/* Function: infinite_loop @ 00101bb0 */

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



/* Function: multi_return @ 00101be0 */

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



/* Function: conditional_return @ 00101c10 */

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



/* Function: duffs_device @ 00101c30 */

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
      goto switchD_00101c5f_caseD_1;
    case 2:
      piVar4 = src;
      goto LAB_00101cba;
    case 3:
      goto switchD_00101c5f_caseD_3;
    case 4:
      piVar4 = src;
      goto LAB_00101ca2;
    case 5:
      goto switchD_00101c5f_caseD_5;
    case 6:
      goto switchD_00101c5f_caseD_6;
    case 7:
      goto switchD_00101c5f_caseD_7;
    }
    while( true ) {
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
switchD_00101c5f_caseD_7:
      iVar1 = *src;
      piVar2 = dst + 1;
      src = src + 1;
      *dst = iVar1;
switchD_00101c5f_caseD_6:
      iVar1 = *src;
      dst = piVar2 + 1;
      src = src + 1;
      *piVar2 = iVar1;
switchD_00101c5f_caseD_5:
      *dst = *src;
      piVar2 = dst + 1;
      piVar4 = src + 1;
LAB_00101ca2:
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
switchD_00101c5f_caseD_3:
      *dst = *src;
      piVar2 = dst + 1;
      piVar4 = src + 1;
LAB_00101cba:
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
switchD_00101c5f_caseD_1:
      *dst = *src;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      piVar2 = dst + 1;
      piVar4 = src + 1;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 00101d00 */

int loop_complex_cond(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < x) {
    iVar3 = x + -1;
    if (iVar3 < 3) {
      iVar1 = 1;
      iVar2 = 2;
    }
    else {
      iVar3 = x + -2;
      if (iVar3 < 5) {
        iVar1 = 2;
        iVar2 = 4;
      }
      else {
        iVar3 = x + -3;
        if (iVar3 < 7) {
          iVar1 = 3;
          iVar2 = 6;
        }
        else {
          iVar3 = x + -4;
          if (iVar3 < 9) {
            iVar1 = 4;
            iVar2 = 8;
          }
          else {
            iVar3 = x + -5;
            if (iVar3 < 0xb) {
              iVar1 = 5;
              iVar2 = 10;
            }
            else {
              iVar3 = x + -6;
              if (iVar3 < 0xd) {
                iVar1 = 6;
                iVar2 = 0xc;
              }
              else {
                iVar3 = x + -7;
                if (iVar3 < 0xf) {
                  iVar1 = 7;
                  iVar2 = 0xe;
                }
                else {
                  iVar3 = x + -8;
                  if (iVar3 < 0x11) {
                    iVar1 = 8;
                    iVar2 = 0x10;
                  }
                  else {
                    iVar3 = x + -9;
                    if (iVar3 < 0x13) {
                      iVar1 = 9;
                      iVar2 = 0x12;
                    }
                    else {
                      iVar3 = x + -10;
                      iVar1 = 10;
                      iVar2 = 0x14;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return iVar1 + iVar3 + iVar2;
  }
  return x;
}



/* Function: loop_modify_var @ 00101de0 */

int loop_modify_var(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int i@[???] */
  iVar4 = 0;
  if ((0 < n) && (iVar4 = 0, n != 1)) {
    iVar4 = 1;
    iVar2 = 1;
    while (iVar1 = iVar2 + 1, iVar3 = iVar2, iVar1 < n) {
      while (iVar4 = iVar4 + iVar1, iVar2 = iVar1, 5 < iVar1) {
        iVar1 = iVar3 + 4;
        iVar3 = iVar3 + 3;
        if (n <= iVar1) {
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* Function: loop_external_state @ 00101e30 */

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



/* Function: tail_recursion @ 00101e50 */

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



/* Function: indirect_recursion_a @ 00101e70 */

int indirect_recursion_a(int n,int depth)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = depth;
  if (0 < depth) {
    do {
      iVar2 = iVar2 + -4;
      if ((n & 1U) == 0) {
        if (depth == 1) {
          return n / 2;
        }
        uVar1 = n / 2 + 1;
        if (depth < 3) {
          return uVar1;
        }
        if ((uVar1 & 1) == 0) goto LAB_00101edc;
LAB_00101e97:
        if (depth == 3) {
          return uVar1 * 3 + 1;
        }
        n = uVar1 * 3 + 2;
      }
      else {
        if (depth == 1) {
          return n * 3 + 1;
        }
        uVar1 = n * 3 + 2;
        if (depth < 3) {
          return uVar1;
        }
        if ((uVar1 & 1) != 0) goto LAB_00101e97;
LAB_00101edc:
        if (depth == 3) {
          return (int)uVar1 / 2;
        }
        n = (int)uVar1 / 2 + 1;
      }
      depth = depth + -4;
    } while (iVar2 != 0);
  }
  return n;
}



/* Function: call_func_ptr @ 00101f00 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 00101f10 */

int call_func_ptr_array(int idx,int x)

{
  int iVar1;
  long in_FS_OFFSET;
  _func_int_int *funcs [3];
  
  funcs[2] = recursion_factorial;
  funcs[0] = double_value;
  funcs[1] = triple_value;
  if ((uint)idx < 3) {
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101f74. Too many branches */
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



/* Function: call_virtual_func @ 00101fa0 */

int call_virtual_func(void *obj,int x)

{
  return x * 2;
}



/* Function: process_with_callback @ 00101fb0 */

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



/* Function: test_control_flow_l2 @ 00102020 */

/* WARNING: Removing unreachable block (ram,0x00102186) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  int flag;
  int ext_flag;
  int src [8];
  int dst [8];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103118);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
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
  iVar3 = duffs_device(dst,src,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar3);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar5 = 1;
  iVar3 = 1;
  do {
    iVar4 = iVar3 + 1;
    iVar2 = iVar3;
    while (iVar5 = iVar5 + iVar4, iVar3 = iVar4, 5 < iVar4) {
      if (iVar2 != 5) {
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
        __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      iVar2 = 8;
      iVar4 = 9;
    }
  } while( true );
}



/* Function: non_local_jump @ 001022d0 */

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



/* Function: cpp_exception @ 00102340 */

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



/* Function: large_jump_table @ 00102370 */

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
                    /* WARNING: Could not recover jumptable at 0x0010244e. Too many branches */
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



/* Function: conditional_func_ptr @ 00102470 */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = double_value;
  if ((mode != 0) && (UNRECOVERED_JUMPTABLE = triple_value, mode != 1)) {
    UNRECOVERED_JUMPTABLE = recursion_factorial;
  }
                    /* WARNING: Could not recover jumptable at 0x00102498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(x,x,UNRECOVERED_JUMPTABLE);
  return iVar1;
}



/* Function: state_machine @ 001024a0 */

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



/* Function: fsm_func_table @ 00102510 */

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
                    /* WARNING: Could not recover jumptable at 0x00102587. Too many branches */
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



/* Function: computed_goto @ 001025b0 */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  long in_FS_OFFSET;
  void *targets [4];
  
  targets[0] = &LAB_00102660;
  targets[1] = &LAB_00102650;
  targets[2] = &LAB_00102640;
  targets[3] = &LAB_00102618;
  if ((uint)idx < 4) {
                    /* WARNING: Could not recover jumptable at 0x0010260f. Too many branches */
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



/* Function: obfuscated_cf @ 00102680 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00102690 */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 001026a0 */

int overlapped_code(int x)

{
  if ((x & 1U) != 0) {
    return x * 3 + 1;
  }
  return x / 2;
}



/* Function: test_control_flow_l3 @ 001026c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  int iVar1;
  
  iVar1 = 0x1032b8;
  puts(&DAT_001032b8);
  iVar1 = non_local_jump(iVar1);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
  iVar1 = non_local_jump(-5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",0xf);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
  computed_goto((int *)0x1,0x1035d5);
  __printf_chk();
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  return;
}



/* Function: _fini @ 001027fc */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 74 */
