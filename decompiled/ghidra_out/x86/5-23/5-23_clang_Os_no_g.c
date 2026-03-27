/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/5-23/5-23_clang_Os_no_g
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



/* Function: _start @ 000110c0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110ec */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110f0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011100 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001111b) */
/* WARNING: Removing unreachable block (ram,0x00011125) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011140 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001116e) */
/* WARNING: Removing unreachable block (ram,0x00011178) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011190 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111ec) */
/* WARNING: Removing unreachable block (ram,0x000111f0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011229 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001122d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_macro_constants @ 00011234 */

undefined4 param_macro_constants(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}



/* Function: call_macro_constants @ 0001124a */

undefined4 call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00011250 */

int param_macro_functions(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00011265 */

undefined4 call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 0001126b */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00011276 */

undefined4 call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 0001127c */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00011289 */

undefined4 call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 0001128f */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00011297 */

undefined4 call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 0001129d */

undefined4 param_stringize(void)

{
  return 0x13;
}



/* Function: call_stringize @ 000112a3 */

undefined4 call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 000112a9 */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 000112b3 */

int param_token_paste(int param_1)

{
  return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 000112c1 */

undefined4 call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 000112c7 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
  printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000112fd */

undefined4 call_variadic_macro(void)

{
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: param_macro_override @ 0001132c */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00011335 */

undefined4 call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 0001133b */

undefined4 param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 00011341 */

undefined4 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 00011347 */

int param_builtin_macros(int param_1)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:21");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00011396 */

undefined4 call_builtin_macros(void)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:21");
  return 0x17e;
}



/* Function: test_preprocessing_features @ 000113e1 */

void test_preprocessing_features(void)

{
  puts(&DAT_000122c9);
  printf(&DAT_000120cb,0x40);
  printf(&DAT_000120e6,0x1e);
  printf(&DAT_00012101,0x20);
  printf(&DAT_0001211c,0xdf22);
  printf(&DAT_0001213b,0x74);
  printf(&DAT_00012157,0x13);
  printf(&DAT_00012181,0x3c);
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  printf(&DAT_0001219c,0x3c);
  printf(&DAT_000121b7,0x10);
  printf(&DAT_000121d2,500);
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:21");
  printf(&DAT_000121ee,0x17e);
  return;
}



/* Function: param_asm_basic @ 00011515 */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 00011523 */

undefined4 call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 00011532 */

int param_asm_clobber(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 0001154f */

int call_asm_clobber(void)

{
  int iVar1;
  int iVar2;
  int local_1c [6];
  
  local_1c[4] = 5;
  local_1c[0] = 1;
  local_1c[1] = 2;
  local_1c[2] = 3;
  local_1c[3] = 4;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + local_1c[iVar2];
  }
  return iVar1;
}



/* Function: param_asm_multi_insn @ 00011590 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Function: call_asm_multi_insn @ 000115ae */

undefined4 call_asm_multi_insn(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_38 [12];
  char local_2c [36];
  
  pcVar2 = local_38;
  builtin_strncpy(local_38 + 4,"o ASM",6);
  builtin_strncpy(local_38,"Hell",4);
  pcVar4 = local_2c;
  local_2c[0x10] = '\0';
  local_2c[0x11] = '\0';
  local_2c[0x12] = '\0';
  local_2c[0x13] = '\0';
  local_2c[0x14] = '\0';
  local_2c[0x15] = '\0';
  local_2c[0x16] = '\0';
  local_2c[0x17] = '\0';
  local_2c[0x18] = '\0';
  local_2c[0x19] = '\0';
  local_2c[0x1a] = '\0';
  local_2c[0x1b] = '\0';
  local_2c[0x1c] = '\0';
  local_2c[0x1d] = '\0';
  local_2c[0x1e] = '\0';
  local_2c[0x1f] = '\0';
  local_2c[0] = '\0';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  local_2c[4] = '\0';
  local_2c[5] = '\0';
  local_2c[6] = '\0';
  local_2c[7] = '\0';
  local_2c[8] = '\0';
  local_2c[9] = '\0';
  local_2c[10] = '\0';
  local_2c[0xb] = '\0';
  local_2c[0xc] = '\0';
  local_2c[0xd] = '\0';
  local_2c[0xe] = '\0';
  local_2c[0xf] = '\0';
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pcVar4 = *pcVar2;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar1 = 0x2a;
  if (local_2c[4] != 'o' || local_2c[0] != 'H') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: param_asm_simd @ 0001160b */

undefined4 param_asm_simd(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  iVar6 = param_2[3];
  *param_3 = *param_1 + *param_2;
  param_3[1] = iVar1 + iVar4;
  param_3[2] = iVar2 + iVar5;
  param_3[3] = iVar3 + iVar6;
  return 0;
}



/* Function: param_simd_intrinsics @ 00011627 */

undefined4 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  iVar6 = param_1[3];
  *param_3 = *param_2 + *param_1;
  param_3[1] = iVar1 + iVar4;
  param_3[2] = iVar2 + iVar5;
  param_3[3] = iVar3 + iVar6;
  return 0;
}



/* Function: call_asm_simd @ 00011642 */

undefined4 call_asm_simd(void)

{
  return 0x24;
}



/* Function: param_asm_atomic @ 0001169a */

int param_asm_atomic(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 000116ab */

int param_atomic_c11(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 000116bc */

undefined4 call_asm_atomic(void)

{
  LOCK();
  UNLOCK();
  return 0x1e;
}



/* Function: param_dynamic_code @ 000116d7 */

int param_dynamic_code(int param_1)

{
  size_t __len;
  void *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffff) {
    param_1 = -1;
  }
  else {
    param_1 = param_1 + 5;
    munmap(__addr,__len);
  }
  return param_1;
}



/* Function: param_memory_protection @ 00011739 */

undefined4 param_memory_protection(void)

{
  undefined4 uVar1;
  size_t __len;
  undefined4 *__addr;
  int iVar2;
  undefined4 uVar3;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffff) {
    uVar3 = 0xffffffff;
  }
  else {
    *__addr = 0x2a;
    iVar2 = mprotect(__addr,__len,1);
    uVar3 = 0xfffffffe;
    if (iVar2 == 0) {
      uVar1 = *__addr;
      iVar2 = mprotect(__addr,__len,3);
      uVar3 = 0xfffffffd;
      if (iVar2 == 0) {
        *__addr = 100;
        uVar3 = uVar1;
      }
    }
    munmap(__addr,__len);
  }
  return uVar3;
}



/* Function: param_clobber_importance @ 000117e8 */

int param_clobber_importance(int param_1,int param_2)

{
  return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00011803 */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  iVar3 = 0x4d;
  if (iVar2 != 0x2a || iVar1 != 0xf) {
    iVar3 = iVar1;
  }
  return iVar3;
}



/* Function: FUN_00011867 @ 00011867 */

int FUN_00011867(void)

{
  int unaff_retaddr;
  
  return *(int *)(unaff_retaddr + 0x27c9) + 0x32;
}



/* Function: test_asm_features @ 00011880 */

void test_asm_features(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puts(&DAT_000122f0);
  printf(&DAT_00012221,0xf);
  piVar5 = &local_3c;
  local_2c = 5;
  local_3c = 1;
  uStack_38 = 2;
  uStack_34 = 3;
  uStack_30 = 4;
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = iVar1 + piVar5[iVar3];
  }
  printf(&DAT_0001223d,iVar1);
  puVar4 = &local_4c;
  uStack_44 = CONCAT22(uStack_44._2_2_,0x4d);
  uStack_48 = 0x5341206f;
  local_4c = 0x6c6c6548;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)piVar5 = *(undefined1 *)puVar4;
    piVar5 = (int *)((int)piVar5 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  uVar2 = 0x2a;
  if ((char)uStack_38 != 'o' || (char)local_3c != 'H') {
    uVar2 = 0xffffffff;
  }
  printf(&DAT_00012259,uVar2);
  local_3c = 1;
  uStack_38 = 2;
  uStack_34 = 3;
  uStack_30 = 4;
  local_4c = 5;
  uStack_48 = 6;
  uStack_44 = 7;
  uStack_40 = 8;
  printf(&DAT_00012275,0x24);
  LOCK();
  local_3c = 0xf;
  UNLOCK();
  printf(&DAT_00012291,0x1e);
  uVar2 = call_asm_privileged();
  printf(&DAT_000122ad,uVar2);
  return;
}



/* Function: main @ 000119f3 */

undefined4 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00011a20 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011a3a) */
/* WARNING: Removing unreachable block (ram,0x00011a50) */
/* WARNING: Removing unreachable block (ram,0x00011a5d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011a6c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 55 */
