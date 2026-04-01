/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/7/7_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000104ac */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010568 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000105ac */

/* WARNING: Removing unreachable block (ram,0x000105c0) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000105d0 */

/* WARNING: Removing unreachable block (ram,0x000105f0) */
/* WARNING: Removing unreachable block (ram,0x000105fc) */
/* WARNING: Removing unreachable block (ram,0x00010600) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010614 */

/* WARNING: Removing unreachable block (ram,0x00010640) */
/* WARNING: Removing unreachable block (ram,0x0001064c) */
/* WARNING: Removing unreachable block (ram,0x00010650) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010664 */

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



/* Function: param_fake_branch @ 000106d0 */

int param_fake_branch(int x)

{
                    /* Unresolved local var: int result@[DW_OP_reg0(r0)]
                       Unresolved local var: char * str@[???] */
  return x;
}



/* Function: call_fake_branch @ 000106d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 000106dc */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p2@[???] */
  iVar4 = x + 1;
  iVar3 = -1;
  iVar2 = x;
  iVar1 = iVar4;
  if (x != -1) {
    do {
      iVar3 = iVar1;
                    /* Unresolved local var: int temp@[DW_OP_reg5(r5)] */
      __aeabi_idivmod(iVar2);
      iVar2 = iVar3;
      iVar1 = extraout_r1;
    } while (extraout_r1 != 0);
  }
  iVar2 = x * 3 + 0x14;
  if (x * x + (x * 2 | 1U) == iVar4 * iVar4 && iVar3 == 1) {
    iVar2 = x * 2 + 10;
  }
  return iVar2;
}



/* Function: call_opaque_predicate @ 0001073c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  
  iVar2 = 5;
  iVar1 = 6;
  do {
    iVar3 = iVar1;
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[DW_OP_reg4(r4)] */
    __aeabi_idivmod(iVar2);
    iVar2 = iVar3;
    iVar1 = extraout_r1;
  } while (extraout_r1 != 0);
  iVar2 = 0x23;
  if (iVar3 == 1) {
    iVar2 = 0x14;
  }
  return iVar2;
}



/* Function: param_instruction_substitution @ 00010770 */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit6; DW_OP_mul;
                       DW_OP_stack_value]
                       Unresolved local var: uint ux@[DW_OP_reg0(r0)]
                       Unresolved local var: int mul15@[???]
                       Unresolved local var: int mod16@[???]
                       Unresolved local var: int div2@[???] */
  return x * 0x15 + (x & 0xfU) + ((uint)x >> 1);
}



/* Function: call_instruction_substitution @ 00010788 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 00010790 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte bVar1;
  byte *pbVar2;
  
                    /* Unresolved local var: char * p@[???] */
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  bVar1 = *buffer;
  pbVar2 = (byte *)buffer;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ key;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return buffer;
}



/* Function: param_string_encryption @ 000107ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  byte local_28 [31];
  undefined1 local_9;
  
                    /* Unresolved local var: char[32] decrypted@[???] */
                    /* Unresolved local var: char * p@[???] */
  pbVar1 = (byte *)strncpy((char *)local_28,param_string_encryption::encrypted,0x20);
  uVar4 = 0;
  local_9 = 0;
  bVar3 = local_28[0];
  if (local_28[0] != 0) {
    do {
      *pbVar1 = bVar3 ^ 0x5a;
      bVar3 = pbVar1[1];
      pbVar1 = pbVar1 + 1;
    } while (bVar3 != 0);
    uVar4 = (uint)local_28[0];
  }
  sVar2 = strlen((char *)local_28);
  return sVar2 + uVar4;
}



/* Function: call_string_encryption @ 00010858 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  byte abStack_28 [31];
  undefined1 uStack_9;
  
  pbVar1 = (byte *)strncpy((char *)abStack_28,param_string_encryption::encrypted,0x20);
  uVar4 = 0;
  uStack_9 = 0;
  bVar3 = abStack_28[0];
  if (abStack_28[0] != 0) {
    do {
      *pbVar1 = bVar3 ^ 0x5a;
      bVar3 = pbVar1[1];
      pbVar1 = pbVar1 + 1;
    } while (bVar3 != 0);
    uVar4 = (uint)abStack_28[0];
  }
  sVar2 = strlen((char *)abStack_28);
  return sVar2 + uVar4;
}



/* Function: param_tail_call_optimized @ 0001085c */

int param_tail_call_optimized(int n,int acc)

{
  longlong lVar1;
  uint uVar2;
  
  if (0 < n) {
    uVar2 = n - 1;
    lVar1 = (ulonglong)(n - 2) * (ulonglong)uVar2;
    acc = (uVar2 * uVar2 + acc + n) -
          ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 00010898 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000108a4 */

int param_non_tail_call(int n)

{
  longlong lVar1;
  uint uVar2;
  
  if (0 < n) {
    uVar2 = n - 1;
    lVar1 = (ulonglong)(n - 2) * (ulonglong)uVar2;
    return (uVar2 * uVar2 + n) -
           ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
  }
  return 0;
}



/* Function: call_non_tail_call @ 000108d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 000108e0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???] */
  iVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  iVar2 = n;
  piVar3 = c;
  if (0 < n) {
    do {
      iVar2 = iVar2 + -1;
      *piVar3 = *b + *a;
      b = b + 1;
      a = a + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 != 0);
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar1 = 0;
      do {
        n = n + -1;
        iVar1 = *c + iVar1;
        c = c + 1;
      } while (n != 0);
    }
  }
  return iVar1;
}



/* Function: call_vectorized_loop @ 00010938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_30 [8];
  
                    /* Unresolved local var: int[8] c@[???]
                       Unresolved local var: int[8] a@[???]
                       Unresolved local var: int[8] b@[???] */
  iVar3 = 0;
  memset(local_30,0,0x20);
  do {
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[DW_OP_reg5(r5)] */
    local_30[iVar3] = (&DAT_00011030)[iVar3] + (&DAT_00011010)[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1 = local_30 + iVar2;
                    /* Unresolved local var: int i@[DW_OP_reg1(r1)] */
    iVar2 = iVar2 + 1;
    iVar3 = *piVar1 + iVar3;
  } while (iVar2 != 8);
  return iVar3;
}



/* Function: param_link_time_optimization @ 000109b4 */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 000109c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 000109c8 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000109f0 */

int param_division_by_zero(int x)

{
  int iVar1;
  int iVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[???] */
    iVar2 = __divsi3(10,x);
  }
  return iVar2;
}



/* Function: call_division_by_zero @ 00010a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00010a74 */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010a9c */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int iVar2;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  iVar2 = -1;
                    /* Unresolved local var: int val@[???] */
  if (iVar1 == 0) {
    iVar2 = *p;
  }
  return iVar2;
}



/* Function: call_null_pointer_deref @ 00010ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int local_14;
  
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  local_14 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_14);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00010b24 */

int param_buffer_overflow_stack(int x)

{
                    /* Unresolved local var: int canary@[???]
                       Unresolved local var: char[8] buffer@[???] */
  return x;
}



/* Function: param_buffer_overflow_heap @ 00010b28 */

int param_buffer_overflow_heap(int x)

{
                    /* Unresolved local var: char * heap_buffer@[???] */
  return x;
}



/* Function: call_buffer_overflow @ 00010b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x1e;
}



/* Function: param_integer_overflow @ 00010b34 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: uint ub@[???]
                       Unresolved local var: uint ua@[???]
                       Unresolved local var: uint unsigned_sum@[???]
                       Unresolved local var: int signed_sum@[???] */
  iVar2 = b + a;
  iVar1 = a;
  if (0 < a) {
    iVar1 = b;
  }
  if ((iVar1 < 1) || (iVar1 = -1, -1 < iVar2)) {
    iVar1 = iVar2;
    if (0 < iVar2) {
      iVar1 = -2;
    }
    if (-1 < (b & a)) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 00010b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b80 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[???] */
  return i << 1;
}



/* Function: call_undefined_behavior @ 00010b88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
                    /* Unresolved local var: int result@[???] */
  return 10;
}



/* Function: param_implementation_defined @ 00010b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char c@[???]
                       Unresolved local var: int s@[???]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
  return 0x2c;
}



/* Function: call_implementation_defined @ 00010b98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined4 uVar4;
  
  puts(&DAT_00011221);
  printf(&DAT_00011050,10);
  iVar2 = 5;
  iVar1 = 6;
  do {
    iVar3 = iVar1;
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[DW_OP_reg4(r4)] */
    __aeabi_idivmod(iVar2);
    iVar2 = iVar3;
    iVar1 = extraout_r1;
  } while (extraout_r1 != 0);
  uVar4 = 0x23;
  if (iVar3 == 1) {
    uVar4 = 0x14;
  }
  printf(&DAT_0001106c,uVar4);
  printf(&DAT_00011088,0xe1);
  iVar2 = param_string_encryption();
  printf(&DAT_000110a5,iVar2);
  printf(&DAT_000110c1,0x7a314);
  printf(&DAT_000110eb,0x13ba);
  iVar2 = call_vectorized_loop();
  printf(&DAT_00011110,iVar2);
  printf(&DAT_00011136,0x14);
  iVar2 = call_division_by_zero();
  printf(&DAT_00011156,iVar2);
  iVar2 = call_null_pointer_deref();
  printf(&DAT_00011172,iVar2);
  printf(&DAT_0001118f,0x1e);
  printf(&DAT_000111ac,2000000000);
  printf(&DAT_000111dd,10);
  printf(&DAT_000111fa,0x2c);
  return;
}



/* Function: main @ 00010d10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __divsi3 @ 00010d24 */

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
                    /* WARNING: Could not recover jumptable at 0x00010d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10d74))();
  return uVar1;
}



/* Function: .divsi3_skip_div0_test @ 00010d2c */

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
                    /* WARNING: Could not recover jumptable at 0x00010d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10d74))();
  return uVar1;
}



/* Function: __aeabi_idivmod @ 00010f44 */

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



/* Function: __aeabi_ldiv0 @ 00010f64 */

void __aeabi_ldiv0(void)

{
  raise(8);
  return;
}



/* Function: _fini @ 00010f74 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 45 */
