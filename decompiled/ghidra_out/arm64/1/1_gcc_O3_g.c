/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/1/1_gcc_O3_g
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



/* Function: recursion_factorial @ 00100b60 */

int recursion_factorial(int n)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  iVar8 = 1;
  if (1 < n) {
    uVar3 = n - 1;
    if (n - 2U < 0xe) {
      iVar8 = 1;
    }
    else {
      iVar8 = 1;
      iVar9 = 1;
      iVar10 = 1;
      iVar11 = 1;
      uVar2 = 0;
      iVar4 = n;
      iVar5 = n + -1;
      iVar6 = n + -2;
      iVar7 = n + -3;
      do {
        uVar2 = uVar2 + 1;
        iVar8 = iVar8 * iVar4;
        iVar9 = iVar9 * iVar5;
        iVar10 = iVar10 * iVar6;
        iVar11 = iVar11 * iVar7;
        iVar4 = iVar4 + -4;
        iVar5 = iVar5 + -4;
        iVar6 = iVar6 + -4;
        iVar7 = iVar7 + -4;
      } while (uVar3 >> 2 != uVar2);
      n = n - (uVar3 & 0xfffffffc);
      auVar12._4_4_ = iVar9;
      auVar12._0_4_ = iVar8;
      auVar12._8_4_ = iVar10;
      auVar12._12_4_ = iVar11;
      auVar12 = NEON_ext(auVar12,ZEXT816(0),8,1);
      iVar8 = auVar12._0_4_ * iVar8;
      auVar1._4_4_ = auVar12._4_4_ * iVar9;
      auVar1._0_4_ = iVar8;
      auVar1._8_4_ = auVar12._8_4_ * iVar10;
      auVar1._12_4_ = auVar12._12_4_ * iVar11;
      auVar12 = NEON_ext(auVar1,ZEXT816(0),4,1);
      iVar8 = auVar12._0_4_ * iVar8;
      if (uVar3 == (uVar3 & 0xfffffffc)) {
        return iVar8;
      }
      uVar3 = n - 1;
    }
    iVar8 = iVar8 * n;
    if (uVar3 != 1) {
      iVar8 = iVar8 * uVar3;
      if (n != 3) {
        iVar8 = iVar8 * (n + -2);
        if (n != 4) {
          iVar8 = iVar8 * (n + -3);
          if (n != 5) {
            iVar8 = iVar8 * (n + -4);
            if (n != 6) {
              iVar8 = iVar8 * (n + -5);
              if (n != 7) {
                iVar8 = iVar8 * (n + -6);
                if (n != 8) {
                  iVar8 = iVar8 * (n + -7);
                  if (n != 9) {
                    iVar8 = iVar8 * (n + -8);
                    if (n != 10) {
                      iVar8 = iVar8 * (n + -9);
                      if (n != 0xb) {
                        iVar8 = iVar8 * (n + -10);
                        if (n != 0xc) {
                          iVar8 = iVar8 * (n + -0xb);
                          if (n != 0xd) {
                            iVar8 = (n + -0xd) * (n + -0xc) * iVar8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar8;
}



/* Function: double_value @ 00100cc0 */

int double_value(int x)

{
  return x << 1;
}



/* Function: triple_value @ 00100cd0 */

int triple_value(int x)

{
  return x * 3;
}



/* Function: op_add @ 00100ce0 */

int op_add(int a,int b)

{
  return a + b;
}



/* Function: op_sub @ 00100cf0 */

int op_sub(int a,int b)

{
  return a - b;
}



/* Function: op_mul @ 00100d00 */

int op_mul(int a,int b)

{
  return a * b;
}



/* Function: op_div @ 00100d10 */

int op_div(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if ((b != 0) && (iVar1 = 0, b != 0)) {
    iVar1 = a / b;
  }
  return iVar1;
}



/* Function: op_mod @ 00100d24 */

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



/* Function: op_and @ 00100d40 */

int op_and(int a,int b)

{
  return a & b;
}



/* Function: op_or @ 00100d50 */

int op_or(int a,int b)

{
  return a | b;
}



/* Function: op_xor @ 00100d60 */

int op_xor(int a,int b)

{
  return a ^ b;
}



/* Function: op_shl @ 00100d70 */

int op_shl(int a,int b)

{
  return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00100d80 */

int op_shr(int a,int b)

{
  return a >> (b & 0x1fU);
}



/* Function: state_idle @ 00100d90 */

int state_idle(int event)

{
  return (int)(event == 1);
}



/* Function: state_processing @ 00100da0 */

int state_processing(int event)

{
  bool bVar1;
  
  if ((event != 2) && (bVar1 = event != 99, event = 3, bVar1)) {
    event = 1;
  }
  return event;
}



/* Function: state_done @ 00100dc0 */

int state_done(int event)

{
  return 2;
}



/* Function: state_error @ 00100dd0 */

int state_error(int event)

{
  int iVar1;
  
  iVar1 = 0;
  if (event != 0) {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: non_local_jump @ 00100de0 */

int non_local_jump(int x)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  iVar2 = 10;
  if (iVar1 != 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: sequential_ops @ 00100e10 */

int sequential_ops(int a,int b,int c)

{
                    /* Unresolved local var: int temp1@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
                       DW_OP_plus; DW_OP_stack_value]
                       Unresolved local var: int temp2@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
                       DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value]
                       Unresolved local var: int temp3@[???] */
  return (a + b) * 2 - c;
}



/* Function: single_if @ 00100e20 */

int single_if(int x)

{
  int iVar1;
  
  iVar1 = x << 1;
  if (x < 1) {
    iVar1 = x;
  }
  return iVar1;
}



/* Function: if_else @ 00100e30 */

int if_else(int x)

{
  return (int)(0 < x);
}



/* Function: nested_if_2 @ 00100e40 */

int nested_if_2(int a,int b)

{
  int iVar1;
  
  if (0 < a) {
    iVar1 = a + b;
    if (b < 1) {
      iVar1 = a;
    }
    return iVar1;
  }
  return 0;
}



/* Function: nested_if_deep @ 00100e60 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int iVar1;
  
  if (a < 1) {
    return 0;
  }
  iVar1 = 1;
  if (0 < b) {
    if (c < 1) {
      return 2;
    }
    if (d < 1) {
      return 3;
    }
    iVar1 = (0 < e) + 4;
  }
  return iVar1;
}



/* Function: if_elseif_chain @ 00100eb0 */

int if_elseif_chain(int x)

{
  int iVar1;
  
  if (x == 0) {
    return 10;
  }
  if (x != 1) {
    iVar1 = 0x1e;
    if (x != 2) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return 0x14;
}



/* Function: if_elseif_long @ 00100ee0 */

int if_elseif_long(int x)

{
  int iVar1;
  
  if (x == 0) {
    return 100;
  }
  if (x == 1) {
    return 200;
  }
  if (x == 2) {
    return 300;
  }
  if (x != 3) {
    iVar1 = 500;
    if (x != 4) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return 400;
}



/* Function: switch_small @ 00100f30 */

int switch_small(int op)

{
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  if ((uint)op < 4) {
    return *(int *)(&CSWTCH_55 + (ulong)(uint)op * 4);
  }
  return -1;
}



/* Function: switch_large @ 00100f50 */

int switch_large(int op)

{
  int iVar1;
  
  iVar1 = op * 10;
  if (9 < (uint)op) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_default @ 00100f64 */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = op * 100;
  if (2 < op - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00100f80 */

int switch_fallthrough(int op)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  if (op == 2) {
    iVar1 = 0;
  }
  else {
    if (op != 3) {
      iVar1 = 1;
      if (op != 1) {
        iVar1 = -1;
      }
      return iVar1;
    }
    iVar1 = 0xc;
  }
  return iVar1 + op * 3;
}



/* Function: loop_for_fixed @ 00100fc0 */

int loop_for_fixed(int n)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (n < 1) {
    return 0;
  }
  if (n - 1U < 8) {
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = 0;
    iVar3 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar4 = 0;
    iVar1 = 1;
    iVar8 = 2;
    iVar9 = 3;
    do {
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + iVar4;
      iVar5 = iVar5 + iVar1;
      iVar6 = iVar6 + iVar8;
      iVar7 = iVar7 + iVar9;
      iVar4 = iVar4 + 4;
      iVar1 = iVar1 + 4;
      iVar8 = iVar8 + 4;
      iVar9 = iVar9 + 4;
    } while ((uint)n >> 2 != uVar2);
    iVar4 = iVar3 + iVar5 + iVar6 + iVar7;
    uVar2 = n & 0xfffffffc;
    if ((n & 3U) == 0) {
      return iVar4;
    }
  }
  iVar1 = iVar4 + uVar2;
  if ((int)(uVar2 + 1) < n) {
    iVar1 = iVar4 + uVar2 + uVar2 + 1;
    if ((int)(uVar2 + 2) < n) {
      iVar1 = iVar1 + uVar2 + 2;
      if ((int)(uVar2 + 3) < n) {
        iVar1 = iVar1 + uVar2 + 3;
        if ((int)(uVar2 + 4) < n) {
          iVar1 = iVar1 + uVar2 + 4;
          if ((int)(uVar2 + 5) < n) {
            iVar1 = iVar1 + uVar2 + 5;
            if ((int)(uVar2 + 6) < n) {
              iVar4 = iVar1 + uVar2 + 6;
              iVar1 = iVar4 + uVar2 + 7;
              if (n <= (int)(uVar2 + 7)) {
                iVar1 = iVar4;
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



/* Function: loop_while @ 001010b0 */

int loop_while(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int count@[???] */
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



/* Function: loop_dowhile @ 001010f0 */

int loop_dowhile(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int count@[???] */
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    x = x / 10;
  } while (x != 0);
  return iVar1;
}



/* Function: loop_nested @ 00101120 */

int loop_nested(int m,int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int total@[???]
                       Unresolved local var: int i@[???] */
  if (0 < m) {
    iVar3 = 0;
    iVar2 = 0;
    do {
                    /* Unresolved local var: int j@[???] */
      iVar3 = iVar3 + 1;
      iVar1 = n + iVar2;
      if (n < 1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
    } while (m != iVar3);
    return iVar1;
  }
  return 0;
}



/* Function: loop_break @ 00101160 */

int loop_break(int target)

{
  int iVar1;
  
                    /* Unresolved local var: int[5] arr@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: int i@[???] */
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
    iVar1 = 4;
    if (target != 0x32) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return 3;
}



/* Function: loop_continue @ 001011b0 */

int loop_continue(int n)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (n < 1) {
    return 0;
  }
  if (n - 1U < 5) {
    uVar3 = 1;
    iVar4 = 1;
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    iVar5 = 0;
    uVar6 = 0x200000001;
    uVar7 = 0x400000003;
    do {
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + (CONCAT13((char)(uVar6 >> 0x18),
                                CONCAT12((char)(uVar6 >> 0x10),CONCAT11((char)(uVar6 >> 8),0xff))) &
                      0xffffff01);
      iVar5 = iVar5 + (CONCAT13((char)(uVar7 >> 0x18),
                                CONCAT12((char)(uVar7 >> 0x10),CONCAT11((char)(uVar7 >> 8),0xff))) &
                      0xffffff01);
      uVar6 = (ulong)((int)uVar6 + 4);
      uVar7 = (ulong)((int)uVar7 + 4);
    } while ((uint)n >> 2 != uVar3);
    iVar4 = iVar4 + iVar5;
    uVar3 = (n & 0xfffffffcU) + 1;
    if (n == (n & 0xfffffffcU)) {
      return iVar4;
    }
    if ((uVar3 & 1) != 0) {
      iVar4 = iVar4 + uVar3;
    }
  }
  uVar1 = uVar3 + 1;
  if ((int)uVar1 <= n) {
    uVar2 = uVar3 + 2;
    iVar5 = iVar4 + uVar1;
    if ((uVar1 & 1) == 0) {
      iVar5 = iVar4;
    }
    iVar4 = iVar5;
    if ((int)uVar2 <= n) {
      uVar1 = uVar3 + 3;
      iVar4 = iVar5 + uVar2;
      if ((uVar2 & 1) == 0) {
        iVar4 = iVar5;
      }
      if ((int)uVar1 <= n) {
        uVar3 = uVar3 + 4;
        iVar5 = iVar4 + uVar1;
        if ((uVar1 & 1) == 0) {
          iVar5 = iVar4;
        }
        iVar4 = iVar5;
        if (((int)uVar3 <= n) && (iVar4 = iVar5 + uVar3, (uVar3 & 1) == 0)) {
          iVar4 = iVar5;
        }
      }
    }
  }
  return iVar4;
}



/* Function: goto_forward @ 001012b0 */

int goto_forward(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = x * x;
  if (x < 1) {
    iVar1 = x;
  }
  return iVar1 << 1;
}



/* Function: goto_backward @ 001012c4 */

int goto_backward(int x)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int i@[???] */
  iVar7 = 1;
  if (0 < x) {
    if (x - 1U < 0xe) {
      iVar7 = 1;
      iVar3 = 1;
    }
    else {
      iVar7 = 1;
      iVar8 = 1;
      iVar9 = 1;
      iVar10 = 1;
      uVar2 = 0;
      iVar3 = 1;
      iVar4 = 2;
      iVar5 = 3;
      iVar6 = 4;
      do {
        uVar2 = uVar2 + 1;
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int i@[???] */
        iVar7 = iVar7 * iVar3;
        iVar8 = iVar8 * iVar4;
        iVar9 = iVar9 * iVar5;
        iVar10 = iVar10 * iVar6;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + 4;
      } while ((uint)x >> 2 != uVar2);
      iVar3 = (x & 0xfffffffcU) + 1;
      auVar11._4_4_ = iVar8;
      auVar11._0_4_ = iVar7;
      auVar11._8_4_ = iVar9;
      auVar11._12_4_ = iVar10;
      auVar11 = NEON_ext(auVar11,ZEXT816(0),8,1);
      iVar7 = auVar11._0_4_ * iVar7;
      auVar1._4_4_ = auVar11._4_4_ * iVar8;
      auVar1._0_4_ = iVar7;
      auVar1._8_4_ = auVar11._8_4_ * iVar9;
      auVar1._12_4_ = auVar11._12_4_ * iVar10;
      auVar11 = NEON_ext(auVar1,ZEXT816(0),4,1);
      iVar7 = auVar11._0_4_ * iVar7;
      if (x == (x & 0xfffffffcU)) {
        return iVar7;
      }
    }
    iVar7 = iVar7 * iVar3;
    if (iVar3 + 1 <= x) {
      iVar7 = iVar7 * (iVar3 + 1);
      if (iVar3 + 2 <= x) {
        iVar7 = iVar7 * (iVar3 + 2);
        if (iVar3 + 3 <= x) {
          iVar7 = iVar7 * (iVar3 + 3);
          if (iVar3 + 4 <= x) {
            iVar7 = iVar7 * (iVar3 + 4);
            if (iVar3 + 5 <= x) {
              iVar7 = iVar7 * (iVar3 + 5);
              if (iVar3 + 6 <= x) {
                iVar7 = iVar7 * (iVar3 + 6);
                if (iVar3 + 7 <= x) {
                  iVar7 = iVar7 * (iVar3 + 7);
                  if (iVar3 + 8 <= x) {
                    iVar7 = iVar7 * (iVar3 + 8);
                    if (iVar3 + 9 <= x) {
                      iVar7 = iVar7 * (iVar3 + 9);
                      if (iVar3 + 10 <= x) {
                        iVar7 = iVar7 * (iVar3 + 10);
                        if ((iVar3 + 0xb <= x) && (iVar7 = iVar7 * (iVar3 + 0xb), iVar3 + 0xc <= x))
                        {
                          iVar7 = 0x7fffffff;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar7;
}



/* Function: ternary_op @ 00101410 */

int ternary_op(int a,int b)

{
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: FUN_0010141c @ 0010141c */

void FUN_0010141c(void)

{
  puts(&DAT_001024b8);
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



/* Function: test_control_flow_l1 @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  puts(&DAT_001024b8);
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



/* Function: loop_multi_exit @ 00101660 */

int loop_multi_exit(int target)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int[3][4] matrix@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
  if (target == 1) {
    iVar1 = 0;
  }
  else {
    if (target == 2) {
      iVar1 = 0;
LAB_001016f0:
      iVar2 = 1;
      goto LAB_001016e0;
    }
    if (target == 3) {
      iVar1 = 0;
LAB_001016fc:
      iVar2 = 2;
      goto LAB_001016e0;
    }
    if (target == 4) {
      iVar1 = 0;
      iVar2 = 3;
      goto LAB_001016e0;
    }
    if (target == 5) {
      iVar1 = 1;
    }
    else {
      if (target == 6) {
        iVar1 = 1;
        iVar2 = 1;
        goto LAB_001016e0;
      }
      if (target == 7) {
        iVar1 = 1;
        iVar2 = 2;
        goto LAB_001016e0;
      }
      if (target == 8) {
        iVar1 = 1;
        iVar2 = 3;
        goto LAB_001016e0;
      }
      iVar1 = 2;
      if (target != 9) {
        iVar1 = 2;
        if (target == 10) goto LAB_001016f0;
        iVar1 = 2;
        if (target != 0xb) {
          if (target != 0xc) {
            return -1;
          }
          iVar1 = 2;
          iVar2 = 3;
          goto LAB_001016e0;
        }
        goto LAB_001016fc;
      }
    }
  }
  iVar2 = 0;
LAB_001016e0:
  return iVar2 + iVar1 * 10;
}



/* Function: infinite_loop @ 00101750 */

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



/* Function: multi_return @ 00101790 */

int multi_return(int x)

{
  int iVar1;
  
                    /* Unresolved local var: int temp@[???] */
  if (x < 0) {
    return -1;
  }
  iVar1 = x * 2;
  if (iVar1 < 0x65) {
    if ((x & 1U) != 0) {
      iVar1 = x + 1;
    }
    return iVar1;
  }
  return -2;
}



/* Function: conditional_return @ 001017c0 */

int conditional_return(int x)

{
  int iVar1;
  
  iVar1 = 0;
  if (x != 0) {
    iVar1 = -x;
  }
  if (0 < x) {
    iVar1 = x << 1;
  }
  return iVar1;
}



/* Function: duffs_device @ 001017d4 */

int duffs_device(int *dst,int *src,int n)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
                    /* Unresolved local var: int count@[???] */
  if (n < 1) {
    n = -1;
  }
  else {
    uVar1 = n & 7;
    iVar6 = n + 7 >> 3;
    piVar3 = src;
    piVar5 = dst;
    if (uVar1 == 4) goto LAB_00101850;
    if (uVar1 < 5) {
      if (uVar1 == 2) goto LAB_00101810;
      if (uVar1 != 3) {
        if (uVar1 != 1) goto LAB_00101830;
        iVar6 = iVar6 + -1;
        *dst = *src;
        if (iVar6 != 0) goto LAB_00101828;
        return n;
      }
    }
    else {
      piVar2 = src;
      piVar4 = dst;
      if (uVar1 == 6) goto LAB_00101840;
      if (uVar1 == 7) {
        piVar2 = src + 1;
        piVar4 = dst + 1;
        *dst = *src;
        goto LAB_00101840;
      }
      if (uVar1 != 5) goto LAB_00101830;
      piVar3 = src + 1;
      piVar5 = dst + 1;
      *dst = *src;
      src = src + 2;
      dst = dst + 2;
      *piVar5 = *piVar3;
    }
    while( true ) {
      piVar3 = src + 1;
      piVar5 = dst + 1;
      *dst = *src;
LAB_00101810:
      src = piVar3 + 1;
      iVar6 = iVar6 + -1;
      dst = piVar5 + 1;
      *piVar5 = *piVar3;
      *dst = *src;
      if (iVar6 == 0) break;
LAB_00101828:
      src = src + 1;
      dst = dst + 1;
LAB_00101830:
      *dst = *src;
      dst[1] = src[1];
      piVar2 = src + 2;
      piVar4 = dst + 2;
LAB_00101840:
      *piVar4 = *piVar2;
      piVar3 = piVar2 + 2;
      piVar5 = piVar4 + 2;
      piVar4[1] = piVar2[1];
LAB_00101850:
      src = piVar3 + 1;
      dst = piVar5 + 1;
      *piVar5 = *piVar3;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 001018c0 */

int loop_complex_cond(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[DW_OP_reg0(x0)]
                       Unresolved local var: int c@[???] */
  if (0 < x) {
    iVar2 = x + -1;
    if (iVar2 < 3) {
      iVar1 = 1;
      iVar3 = 2;
    }
    else {
      iVar2 = x + -2;
      if (iVar2 < 5) {
        iVar1 = 2;
        iVar3 = 4;
      }
      else {
        iVar2 = x + -3;
        if (iVar2 < 7) {
          iVar1 = 3;
          iVar3 = 6;
        }
        else {
          iVar2 = x + -4;
          if (iVar2 < 9) {
            iVar1 = 4;
            iVar3 = 8;
          }
          else {
            iVar2 = x + -5;
            if (iVar2 < 0xb) {
              iVar1 = 5;
              iVar3 = 10;
            }
            else {
              iVar2 = x + -6;
              if (iVar2 < 0xd) {
                iVar1 = 6;
                iVar3 = 0xc;
              }
              else {
                iVar2 = x + -7;
                if (iVar2 < 0xf) {
                  iVar1 = 7;
                  iVar3 = 0xe;
                }
                else {
                  iVar2 = x + -8;
                  if (iVar2 < 0x11) {
                    iVar1 = 8;
                    iVar3 = 0x10;
                  }
                  else {
                    iVar2 = x + -9;
                    if (iVar2 < 0x13) {
                      iVar1 = 9;
                      iVar3 = 0x12;
                    }
                    else {
                      iVar2 = x + -10;
                      iVar3 = 0x14;
                      iVar1 = 10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    x = iVar2 + iVar3 + iVar1;
  }
  return x;
}



/* Function: loop_modify_var @ 001019c0 */

int loop_modify_var(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar2 = 0;
  if (0 < n) {
    iVar1 = 1;
    iVar4 = 0;
    if (n != 1) {
      do {
        while( true ) {
          iVar3 = iVar1;
          iVar2 = iVar2 + iVar3;
          if (5 < iVar3) break;
          iVar1 = iVar3 + 1;
          iVar4 = iVar3;
          if (n <= iVar3 + 1) {
            return iVar2;
          }
        }
        iVar1 = iVar4 + 4;
        iVar4 = iVar4 + 3;
      } while (iVar1 < n);
    }
  }
  return iVar2;
}



/* Function: loop_external_state @ 00101a20 */

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



/* Function: tail_recursion @ 00101a44 */

int tail_recursion(int n,int acc)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  if (1 < n) {
    uVar3 = n - 1;
    if (0xd < n - 2U) {
      iVar8 = 1;
      iVar9 = 1;
      iVar10 = 1;
      iVar11 = 1;
      uVar2 = 0;
      iVar4 = n;
      iVar5 = n + -1;
      iVar6 = n + -2;
      iVar7 = n + -3;
      do {
        uVar2 = uVar2 + 1;
        iVar8 = iVar8 * iVar4;
        iVar9 = iVar9 * iVar5;
        iVar10 = iVar10 * iVar6;
        iVar11 = iVar11 * iVar7;
        iVar4 = iVar4 + -4;
        iVar5 = iVar5 + -4;
        iVar6 = iVar6 + -4;
        iVar7 = iVar7 + -4;
      } while (uVar3 >> 2 != uVar2);
      n = n - (uVar3 & 0xfffffffc);
      auVar12._4_4_ = iVar9;
      auVar12._0_4_ = iVar8;
      auVar12._8_4_ = iVar10;
      auVar12._12_4_ = iVar11;
      auVar12 = NEON_ext(auVar12,ZEXT816(0),8,1);
      iVar8 = auVar12._0_4_ * iVar8;
      auVar1._4_4_ = auVar12._4_4_ * iVar9;
      auVar1._0_4_ = iVar8;
      auVar1._8_4_ = auVar12._8_4_ * iVar10;
      auVar1._12_4_ = auVar12._12_4_ * iVar11;
      auVar12 = NEON_ext(auVar1,ZEXT816(0),4,1);
      acc = auVar12._0_4_ * iVar8 * acc;
      if (uVar3 == (uVar3 & 0xfffffffc)) {
        return acc;
      }
      uVar3 = n - 1;
    }
    acc = acc * n;
    if (uVar3 != 1) {
      acc = acc * uVar3;
      if (n != 3) {
        acc = acc * (n + -2);
        if (n != 4) {
          acc = acc * (n + -3);
          if (n != 5) {
            acc = acc * (n + -4);
            if (n != 6) {
              acc = acc * (n + -5);
              if (n != 7) {
                acc = acc * (n + -6);
                if (n != 8) {
                  acc = acc * (n + -7);
                  if (n != 9) {
                    acc = acc * (n + -8);
                    if (n != 10) {
                      acc = acc * (n + -9);
                      if (n != 0xb) {
                        acc = acc * (n + -10);
                        if (n != 0xc) {
                          acc = acc * (n + -0xb);
                          if (n != 0xd) {
                            acc = (n + -0xd) * (n + -0xc) * acc;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return acc;
}



/* Function: indirect_recursion_a @ 00101ba4 */

int indirect_recursion_a(int n,int depth)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = depth;
  if (0 < depth) {
    do {
      iVar3 = iVar3 + -4;
      if ((n & 1U) == 0) {
        if (depth == 1) {
          return n / 2;
        }
        uVar2 = n / 2 + 1;
        if (depth < 3) {
          return uVar2;
        }
        if ((uVar2 & 1) != 0) goto LAB_00101bd0;
LAB_00101c1c:
        if (depth == 3) {
          return (int)uVar2 / 2;
        }
        n = (int)uVar2 / 2 + 1;
      }
      else {
        iVar1 = n * 3;
        if (depth == 1) goto LAB_00101bf4;
        uVar2 = iVar1 + 2;
        if (depth < 3) {
          return uVar2;
        }
        if ((uVar2 & 1) == 0) goto LAB_00101c1c;
LAB_00101bd0:
        iVar1 = uVar2 * 3;
        if (depth == 3) {
LAB_00101bf4:
          return iVar1 + 1;
        }
        n = iVar1 + 2;
      }
      depth = depth + -4;
    } while (iVar3 != 0);
  }
  return n;
}



/* Function: call_func_ptr @ 00101c40 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: FUN_00101c4c @ 00101c4c */

/* WARNING: Removing unreachable block (ram,0x00101cec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00101c4c(uint param_1)

{
  undefined8 uVar1;
  undefined *apuStack_20 [4];
  
  apuStack_20[3] = (undefined *)___stack_chk_guard;
  apuStack_20[0] = PTR_double_value_00114010;
  apuStack_20[1] = PTR_triple_value_00114018;
  apuStack_20[2] = PTR_recursion_factorial_00114020;
  if (param_1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00101cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)apuStack_20[(int)param_1])();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: call_func_ptr_array @ 00101c50 */

/* WARNING: Removing unreachable block (ram,0x00101cec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_func_ptr_array(int idx,int x)

{
  int iVar1;
  _func_int_int *funcs [3];
  
  funcs[0] = (_func_int_int *)PTR_double_value_00114010;
  funcs[1] = (_func_int_int *)PTR_triple_value_00114018;
  funcs[2] = (_func_int_int *)PTR_recursion_factorial_00114020;
  if ((uint)idx < 3) {
                    /* WARNING: Could not recover jumptable at 0x00101cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*funcs[idx])(x);
    return iVar1;
  }
  return -1;
}



/* Function: call_virtual_func @ 00101cf0 */

int call_virtual_func(void *obj,int x)

{
  return x << 1;
}



/* Function: process_with_callback @ 00101d00 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar4 = 0;
    piVar2 = arr;
    do {
      piVar3 = piVar2 + 1;
      iVar1 = (*cb)(*piVar2);
      iVar4 = iVar4 + iVar1;
      piVar2 = piVar3;
    } while (piVar3 != arr + (ulong)(n - 1) + 1);
    return iVar4;
  }
  return 0;
}



/* Function: FUN_00101d6c @ 00101d6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101d6c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_48 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  puts(&DAT_00102760);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  aiStack_48[8] = 0;
  aiStack_48[9] = 0;
  aiStack_48[10] = 0;
  aiStack_48[0xb] = 0;
  aiStack_48[0xc] = 0;
  aiStack_48[0xd] = 0;
  aiStack_48[0xe] = 0;
  aiStack_48[0xf] = 0;
  aiStack_48[2] = 3;
  aiStack_48[3] = 4;
  aiStack_48[0] = 1;
  aiStack_48[1] = 2;
  aiStack_48[6] = 7;
  aiStack_48[7] = 8;
  aiStack_48[4] = 5;
  aiStack_48[5] = 6;
  iVar1 = duffs_device(aiStack_48 + 8,aiStack_48,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar1);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
  iVar3 = 1;
  iVar1 = 1;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
    while (iVar3 = iVar3 + iVar1, 5 < iVar1) {
      if (iVar2 != 5) {
        __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar3);
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 1;
        } while (iVar1 != 0x65);
        __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
        __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
        __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
        __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
        __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
        __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
        __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
        __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
        if (lStack_8 - ___stack_chk_guard == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
      }
      iVar2 = 8;
      iVar1 = 9;
    }
  } while( true );
}



/* Function: test_control_flow_l2 @ 00101d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int flag;
  int ext_flag;
  int src [8];
  int dst [8];
  
                    /* Unresolved local var: int[5] arr@[???] */
  lVar1 = ___stack_chk_guard;
  puts(&DAT_00102760);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
                    /* Unresolved local var: int count@[???] */
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x3e9);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
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
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar4 = 1;
  iVar2 = 1;
  do {
    iVar3 = iVar2;
    iVar2 = iVar3 + 1;
    while (iVar4 = iVar4 + iVar2, 5 < iVar2) {
      if (iVar3 != 5) {
        __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar4);
                    /* Unresolved local var: int count@[???] */
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0x65);
        __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
        __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
        __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
        __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
        __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
        __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
        __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
        __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
        if (lVar1 - ___stack_chk_guard == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
      }
      iVar3 = 8;
      iVar2 = 9;
    }
  } while( true );
}



/* Function: non_local_jump @ 00101fe4 */

int non_local_jump(int x)

{
  int iVar1;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 == 0) {
    if (x < 0) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(jump_buffer,1);
    }
    iVar1 = x << 1;
    if (100 < x) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(jump_buffer,2);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: cpp_exception @ 00102050 */

int cpp_exception(int x)

{
  if (x < 0) {
    return -1;
  }
  if (x < 0x65) {
    return x << 1;
  }
  return -2;
}



/* Function: large_jump_table @ 00102074 */

/* WARNING: Removing unreachable block (ram,0x00102120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int large_jump_table(int op,int a,int b)

{
  int iVar1;
  _func_int_int_int *ops [10];
  
  ops[1] = (_func_int_int_int *)PTR_op_sub_00114030;
  ops[0] = (_func_int_int_int *)PTR_op_add_00114028;
  ops[3] = (_func_int_int_int *)PTR_op_div_00114040;
  ops[2] = (_func_int_int_int *)PTR_op_mul_00114038;
  ops[5] = (_func_int_int_int *)PTR_op_and_00114050;
  ops[4] = (_func_int_int_int *)PTR_op_mod_00114048;
  ops[7] = (_func_int_int_int *)PTR_op_xor_00114060;
  ops[6] = (_func_int_int_int *)PTR_op_or_00114058;
  ops[9] = (_func_int_int_int *)PTR_op_shr_00114070;
  ops[8] = (_func_int_int_int *)PTR_op_shl_00114068;
  if ((uint)op < 10) {
                    /* WARNING: Could not recover jumptable at 0x001020f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*ops[op])(a,b);
    return iVar1;
  }
  return -1;
}



/* Function: conditional_func_ptr @ 00102124 */

int conditional_func_ptr(int mode,int x)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    /* Unresolved local var: _func_int_int * func@[???] */
  if (mode == 0) {
    return x << 1;
  }
  UNRECOVERED_JUMPTABLE = triple_value;
  if (mode != 1) {
    UNRECOVERED_JUMPTABLE = recursion_factorial;
  }
                    /* WARNING: Could not recover jumptable at 0x0010214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}



/* Function: state_machine @ 00102160 */

int state_machine(int event,int state)

{
  int iVar1;
  bool bVar2;
  
  if (state == 2) {
    return 2;
  }
  if (2 < state) {
    iVar1 = state;
    if (event == 0) {
      iVar1 = 0;
    }
    if (state != 3) {
      iVar1 = 3;
    }
    return iVar1;
  }
  if (state == 0) {
    return (int)(event == 1);
  }
  if (state != 1) {
    return 3;
  }
  if ((event != 2) && (bVar2 = event != 99, event = 3, bVar2)) {
    event = 1;
  }
  return event;
}



/* Function: fsm_func_table @ 001021c4 */

/* WARNING: Removing unreachable block (ram,0x00102254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fsm_func_table(int event,int state)

{
  int iVar1;
  _func_int_int *state_handlers [4];
  
  state_handlers[0]._0_1_ = DAT_00114078;
  state_handlers[0]._1_1_ = DAT_00114079;
  state_handlers[0]._2_1_ = DAT_0011407a;
  state_handlers[0]._3_1_ = DAT_0011407b;
  state_handlers[0]._4_1_ = DAT_0011407c;
  state_handlers[0]._5_1_ = DAT_0011407d;
  state_handlers[0]._6_1_ = DAT_0011407e;
  state_handlers[0]._7_1_ = DAT_0011407f;
  state_handlers[1]._0_1_ = DAT_00114080;
  state_handlers[1]._1_1_ = DAT_00114081;
  state_handlers[1]._2_1_ = DAT_00114082;
  state_handlers[1]._3_1_ = DAT_00114083;
  state_handlers[1]._4_1_ = DAT_00114084;
  state_handlers[1]._5_1_ = DAT_00114085;
  state_handlers[1]._6_1_ = DAT_00114086;
  state_handlers[1]._7_1_ = DAT_00114087;
  state_handlers[2]._0_1_ = DAT_00114088;
  state_handlers[2]._1_1_ = DAT_00114089;
  state_handlers[2]._2_1_ = DAT_0011408a;
  state_handlers[2]._3_1_ = DAT_0011408b;
  state_handlers[2]._4_1_ = DAT_0011408c;
  state_handlers[2]._5_1_ = DAT_0011408d;
  state_handlers[2]._6_1_ = DAT_0011408e;
  state_handlers[2]._7_1_ = DAT_0011408f;
  state_handlers[3]._0_1_ = DAT_00114090;
  state_handlers[3]._1_1_ = DAT_00114091;
  state_handlers[3]._2_1_ = DAT_00114092;
  state_handlers[3]._3_1_ = DAT_00114093;
  state_handlers[3]._4_1_ = DAT_00114094;
  state_handlers[3]._5_1_ = DAT_00114095;
  state_handlers[3]._6_1_ = DAT_00114096;
  state_handlers[3]._7_1_ = DAT_00114097;
  if ((uint)state < 4) {
                    /* WARNING: Could not recover jumptable at 0x00102228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*state_handlers[state])(event);
    return iVar1;
  }
  return 3;
}



/* Function: computed_goto @ 00102260 */

/* WARNING: Removing unreachable block (ram,0x001022ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  void *targets [4];
  
  targets[0]._0_1_ = DAT_00114098;
  targets[0]._1_1_ = DAT_00114099;
  targets[0]._2_1_ = DAT_0011409a;
  targets[0]._3_1_ = DAT_0011409b;
  targets[0]._4_1_ = DAT_0011409c;
  targets[0]._5_1_ = DAT_0011409d;
  targets[0]._6_1_ = DAT_0011409e;
  targets[0]._7_1_ = DAT_0011409f;
  targets[1]._0_1_ = DAT_001140a0;
  targets[1]._1_1_ = DAT_001140a1;
  targets[1]._2_1_ = DAT_001140a2;
  targets[1]._3_1_ = DAT_001140a3;
  targets[1]._4_1_ = DAT_001140a4;
  targets[1]._5_1_ = DAT_001140a5;
  targets[1]._6_1_ = DAT_001140a6;
  targets[1]._7_1_ = DAT_001140a7;
  targets[2]._0_1_ = DAT_001140a8;
  targets[2]._1_1_ = DAT_001140a9;
  targets[2]._2_1_ = DAT_001140aa;
  targets[2]._3_1_ = DAT_001140ab;
  targets[2]._4_1_ = DAT_001140ac;
  targets[2]._5_1_ = DAT_001140ad;
  targets[2]._6_1_ = DAT_001140ae;
  targets[2]._7_1_ = DAT_001140af;
  targets[3]._0_1_ = DAT_001140b0;
  targets[3]._1_1_ = DAT_001140b1;
  targets[3]._2_1_ = DAT_001140b2;
  targets[3]._3_1_ = DAT_001140b3;
  targets[3]._4_1_ = DAT_001140b4;
  targets[3]._5_1_ = DAT_001140b5;
  targets[3]._6_1_ = DAT_001140b6;
  targets[3]._7_1_ = DAT_001140b7;
  if (3 < (uint)idx) {
    return -1;
  }
                    /* WARNING: Could not recover jumptable at 0x001022a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*targets[idx])();
  return iVar1;
}



/* Function: obfuscated_cf @ 001022f0 */

int obfuscated_cf(int param_1)

{
  return param_1 << 1;
}



/* Function: opaque_predicate @ 00102300 */

int opaque_predicate(int param_1)

{
  return param_1 << 1;
}



/* Function: overlapped_code @ 00102310 */

int overlapped_code(int x)

{
  int iVar1;
  
  iVar1 = x / 2;
  if ((x & 1U) != 0) {
    iVar1 = x * 3 + 1;
  }
  return iVar1;
}



/* Function: test_control_flow_l3 @ 00102330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  long lVar1;
  int iVar2;
  int labels [4];
  
  lVar1 = ___stack_chk_guard;
  iVar2 = puts(&DAT_00102980);
  iVar2 = non_local_jump(iVar2);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
  iVar2 = non_local_jump(-5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",0xf);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
  labels[2] = 2;
  labels[3] = 3;
  labels[0] = 0;
  labels[1] = 1;
  iVar2 = computed_goto(labels,2);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar2);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (lVar1 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: _fini @ 0010249c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 78 */
