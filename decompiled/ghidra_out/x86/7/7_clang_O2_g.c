/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 000110d0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011110 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112b) */
/* WARNING: Removing unreachable block (ram,0x00011135) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001117e) */
/* WARNING: Removing unreachable block (ram,0x00011188) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111a0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111fc) */
/* WARNING: Removing unreachable block (ram,0x00011200) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_fake_branch @ 00011250 */

int param_fake_branch(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char * str@[???] */
  return x;
}



/* Function: call_fake_branch @ 00011260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00011270 */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p2@[???] */
  iVar5 = x + 1;
  iVar1 = -1;
  iVar3 = iVar5;
  iVar4 = x;
  while (iVar2 = iVar3, iVar2 != 0) {
                    /* Unresolved local var: int temp@[DW_OP_reg3(EBX)] */
    iVar1 = iVar2;
    iVar3 = iVar4 % iVar2;
    iVar4 = iVar2;
  }
  iVar4 = x * 3 + 0x14;
  if (iVar1 == 1 && iVar5 * iVar5 == (x * 2 | 1U) + x * x) {
    iVar4 = x * 2 + 10;
  }
  return iVar4;
}



/* Function: call_opaque_predicate @ 000112d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 5;
  iVar3 = 6;
  do {
    iVar2 = iVar3;
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[DW_OP_reg1(ECX)] */
    iVar3 = iVar1 % iVar2;
    iVar1 = iVar2;
  } while (iVar3 != 0);
  iVar1 = 0x23;
  if (iVar2 == 1) {
    iVar1 = 0x14;
  }
  return iVar1;
}



/* Function: param_instruction_substitution @ 00011300 */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: uint ux@[???]
                       Unresolved local var: int div2@[???]
                       Unresolved local var: int mod16@[???]
                       Unresolved local var: int mul15@[???] */
  return x * 0x15 + (x & 0xfU) + ((uint)x >> 1);
}



/* Function: call_instruction_substitution @ 00011320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 00011330 */

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



/* Function: param_string_encryption @ 00011390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  int iVar4;
  byte local_2c [31];
  undefined1 local_d;
  
                    /* Unresolved local var: char[32] decrypted@[???] */
  pbVar3 = local_2c;
                    /* Unresolved local var: char * p@[???] */
  strncpy((char *)local_2c,param_string_encryption::encrypted,0x20);
  local_d = 0;
  bVar1 = local_2c[0];
  if (local_2c[0] == 0) {
    iVar4 = 0;
  }
  else {
    do {
      *pbVar3 = bVar1 ^ 0x5a;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    iVar4 = (int)(char)local_2c[0];
  }
  sVar2 = strlen((char *)local_2c);
  return sVar2 + iVar4;
}



/* Function: call_string_encryption @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  int iVar4;
  byte local_2c [31];
  undefined1 local_d;
  
                    /* Unresolved local var: char[32] decrypted@[???] */
  pbVar3 = local_2c;
                    /* Unresolved local var: char * p@[???] */
  strncpy((char *)local_2c,param_string_encryption::encrypted,0x20);
  local_d = 0;
  bVar1 = local_2c[0];
  if (local_2c[0] == 0) {
    iVar4 = 0;
  }
  else {
    do {
      *pbVar3 = bVar1 ^ 0x5a;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    iVar4 = (int)(char)local_2c[0];
  }
  sVar2 = strlen((char *)local_2c);
  return sVar2 + iVar4;
}



/* Function: param_tail_call_optimized @ 00011470 */

int param_tail_call_optimized(int n,int acc)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < n) {
    uVar1 = n - 1;
    lVar2 = (ulonglong)uVar1 * (ulonglong)(n - 2);
    acc = (acc + n + uVar1 * uVar1) - ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 000114a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000114b0 */

int param_non_tail_call(int n)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (n < 1) {
    iVar3 = 0;
  }
  else {
    uVar1 = n - 1;
    lVar2 = (ulonglong)uVar1 * (ulonglong)(n - 2);
    iVar3 = (uVar1 * uVar1 + n) - ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
  }
  return iVar3;
}



/* Function: call_non_tail_call @ 000114e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 000114f0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar2 = 0;
    if (2 < n - 1U) {
      uVar2 = 0;
      do {
        c[uVar2] = b[uVar2] + a[uVar2];
        c[uVar2 + 1] = b[uVar2 + 1] + a[uVar2 + 1];
        c[uVar2 + 2] = b[uVar2 + 2] + a[uVar2 + 2];
        c[uVar2 + 3] = b[uVar2 + 3] + a[uVar2 + 3];
        uVar2 = uVar2 + 4;
      } while ((n & 0xfffffffcU) != uVar2);
    }
    if ((n & 3U) != 0) {
      uVar3 = 0;
      do {
        c[uVar2 + uVar3] = b[uVar2 + uVar3] + a[uVar2 + uVar3];
        uVar3 = uVar3 + 1;
      } while ((n & 3U) != uVar3);
    }
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      if (n - 1U < 7) {
        uVar2 = 0;
        iVar1 = 0;
      }
      else {
        uVar2 = 0;
        iVar1 = 0;
        do {
          iVar1 = iVar1 + c[uVar2] + c[uVar2 + 1] + c[uVar2 + 2] + c[uVar2 + 3] + c[uVar2 + 4] +
                  c[uVar2 + 5] + c[uVar2 + 6] + c[uVar2 + 7];
          uVar2 = uVar2 + 8;
        } while ((n & 0xfffffff8U) != uVar2);
      }
      if ((n & 7U) == 0) {
        return iVar1;
      }
      uVar3 = 0;
      do {
        iVar1 = iVar1 + c[uVar2 + uVar3];
        uVar3 = uVar3 + 1;
      } while ((n & 7U) != uVar3);
      return iVar1;
    }
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00011610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
                    /* Unresolved local var: int[8] c@[???]
                       Unresolved local var: int[8] a@[???]
                       Unresolved local var: int[8] b@[???] */
  return 0x48;
}



/* Function: param_link_time_optimization @ 00011620 */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 00011640 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00011670 */

int param_division_by_zero(int x)

{
  int iVar1;
  int iVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[???] */
    iVar2 = (int)(10 / (longlong)x);
  }
  return iVar2;
}



/* Function: call_division_by_zero @ 000116d0 */

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



/* Function: segv_handler @ 00011720 */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011750 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int iVar2;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
                    /* Unresolved local var: int val@[???] */
    iVar2 = *p;
  }
  return iVar2;
}



/* Function: call_null_pointer_deref @ 000117a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int local_10;
  
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  local_10 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_10);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011800 */

int param_buffer_overflow_stack(int x)

{
                    /* Unresolved local var: int canary@[???]
                       Unresolved local var: char[8] buffer@[???] */
  return x;
}



/* Function: param_buffer_overflow_heap @ 00011810 */

int param_buffer_overflow_heap(int x)

{
                    /* Unresolved local var: char * heap_buffer@[???] */
  return x;
}



/* Function: call_buffer_overflow @ 00011820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x1e;
}



/* Function: param_integer_overflow @ 00011830 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: uint ua@[???]
                       Unresolved local var: uint ub@[???]
                       Unresolved local var: uint unsigned_sum@[???]
                       Unresolved local var: int signed_sum@[???] */
  iVar1 = b + a;
  if (((0 < a) && (0 < b)) && (iVar1 < 0)) {
    return -1;
  }
  iVar2 = -2;
  if (iVar1 < 1) {
    iVar2 = iVar1;
  }
  if (-1 < (b & a)) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Function: call_integer_overflow @ 00011860 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00011870 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[???] */
  return i * 2;
}



/* Function: call_undefined_behavior @ 00011880 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
                    /* Unresolved local var: int result@[???] */
  return 10;
}



/* Function: param_implementation_defined @ 00011890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char c@[???]
                       Unresolved local var: int s@[???]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
  return 0x2b;
}



/* Function: call_implementation_defined @ 000118a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  return 0x2b;
}



/* Function: test_obf_opt_edge @ 000118b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  byte bVar1;
  size_t sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte local_30 [31];
  undefined1 local_11;
  
  puts(&DAT_000121d9);
  printf(&DAT_00012008,10);
  iVar7 = 5;
  iVar6 = 6;
  do {
    iVar5 = iVar6;
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[DW_OP_reg1(ECX)] */
    iVar6 = iVar7 % iVar5;
    iVar7 = iVar5;
  } while (iVar6 != 0);
  uVar3 = 0x23;
  if (iVar5 == 1) {
    uVar3 = 0x14;
  }
  printf(&DAT_00012024,uVar3);
  printf(&DAT_00012040,0xe1);
                    /* Unresolved local var: char[32] decrypted@[???]
                       Unresolved local var: char * p@[???] */
  strncpy((char *)local_30,param_string_encryption::encrypted,0x20);
  local_11 = 0;
  if (local_30[0] == 0) {
    iVar7 = 0;
  }
  else {
    pbVar4 = local_30;
    bVar1 = local_30[0];
    do {
      pbVar4 = pbVar4 + 1;
      pbVar4[-1] = bVar1 ^ 0x5a;
      bVar1 = *pbVar4;
    } while (bVar1 != 0);
    iVar7 = (int)(char)local_30[0];
  }
  sVar2 = strlen((char *)local_30);
  printf(&DAT_0001205d,sVar2 + iVar7);
  printf(&DAT_00012079,0x7a314);
  printf(&DAT_000120a3,0x13ba);
  printf(&DAT_000120c8,0x48);
  printf(&DAT_000120ee,0x14);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar7 = param_division_by_zero(5);
  iVar6 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_0001210e,iVar6 + iVar7);
  local_30[0] = 0x2a;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar7 = param_null_pointer_deref((int *)local_30);
  iVar6 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_0001212a,iVar6 + iVar7);
  printf(&DAT_00012147,0x1e);
  printf(&DAT_00012164,2000000000);
  printf(&DAT_00012195,10);
  printf(&DAT_000121b2,0x2b);
  return;
}



/* Function: main @ 00011b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00011b20 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011b3a) */
/* WARNING: Removing unreachable block (ram,0x00011b50) */
/* WARNING: Removing unreachable block (ram,0x00011b5d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011b6c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 46 */
