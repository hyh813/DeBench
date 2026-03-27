/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-23/5-23_clang_Os_no_g
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



/* Function: _start @ 001010a0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010d0 */

/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001010ef) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101100 */

/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x00101130) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101140 */

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



/* Function: param_macro_constants @ 0010118c */

undefined8 param_macro_constants(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}



/* Function: call_macro_constants @ 001011a0 */

undefined8 call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 001011a6 */

int param_macro_functions(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_1 * param_1 + param_2;
}



/* Function: call_macro_functions @ 001011b3 */

undefined8 call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 001011b9 */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 001011c0 */

undefined8 call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 001011c6 */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 001011cf */

undefined8 call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 001011d5 */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 001011d9 */

undefined8 call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 001011df */

undefined8 param_stringize(void)

{
  return 0x13;
}



/* Function: call_stringize @ 001011e5 */

undefined8 call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 001011eb */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 001011f1 */

int param_token_paste(int param_1)

{
  return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 001011fb */

undefined8 call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 00101201 */

int param_variadic_macro(uint param_1,ulong param_2,ulong param_3)

{
  printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
  return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 0010121f */

undefined8 call_variadic_macro(void)

{
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: param_macro_override @ 00101244 */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 0010124a */

undefined8 call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 00101250 */

undefined8 param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 00101256 */

undefined8 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 0010125c */

int param_builtin_macros(int param_1)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:00");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00101298 */

undefined8 call_builtin_macros(void)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:00");
  return 0x17e;
}



/* Function: test_preprocessing_features @ 001012cf */

void test_preprocessing_features(void)

{
  puts(&DAT_0010227d);
  printf(&DAT_0010207f,0x40);
  printf(&DAT_0010209a,0x1e);
  printf(&DAT_001020b5,0x20);
  printf(&DAT_001020d0,0xdf22);
  printf(&DAT_001020ef,0x74);
  printf(&DAT_0010210b,0x13);
  printf(&DAT_00102135,0x3c);
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  printf(&DAT_00102150,0x3c);
  printf(&DAT_0010216b,0x10);
  printf(&DAT_00102186,500);
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:00");
  printf(&DAT_001021a2,0x17e);
  return;
}



/* Function: param_asm_basic @ 001013fa */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 00101404 */

undefined8 call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 00101413 */

int param_asm_clobber(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (ulong)((int)uVar2 + 1)) {
    iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 00101427 */

int call_asm_clobber(void)

{
  int iVar1;
  ulong uVar2;
  int local_18 [6];
  
  local_18[4] = 5;
  local_18[0] = 1;
  local_18[1] = 2;
  local_18[2] = 3;
  local_18[3] = 4;
  iVar1 = 0;
  for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
    iVar1 = iVar1 + local_18[uVar2];
  }
  return iVar1;
}



/* Function: param_asm_multi_insn @ 00101458 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Function: call_asm_multi_insn @ 0010146f */

undefined8 call_asm_multi_insn(void)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char local_38 [16];
  char local_28 [40];
  
  pcVar2 = local_38;
  builtin_strncpy(local_38,"Hello ASM",10);
  pcVar4 = local_28;
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  local_28[0x18] = '\0';
  local_28[0x19] = '\0';
  local_28[0x1a] = '\0';
  local_28[0x1b] = '\0';
  local_28[0x1c] = '\0';
  local_28[0x1d] = '\0';
  local_28[0x1e] = '\0';
  local_28[0x1f] = '\0';
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar4 = *pcVar2;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar1 = 0xffffffff;
  if (local_28[4] == 'o' && local_28[0] == 'H') {
    uVar1 = 0x2a;
  }
  return uVar1;
}



/* Function: param_asm_simd @ 001014ce */

undefined8 param_asm_simd(int *param_1,int *param_2,int *param_3)

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



/* Function: param_simd_intrinsics @ 001014de */

undefined8 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

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



/* Function: call_asm_simd @ 001014ed */

undefined4 call_asm_simd(void)

{
  return 0x24;
}



/* Function: param_asm_atomic @ 00101538 */

int param_asm_atomic(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101541 */

int param_atomic_c11(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 0010154a */

undefined4 call_asm_atomic(void)

{
  LOCK();
  UNLOCK();
  return 0x1e;
}



/* Function: param_dynamic_code @ 00101566 */

undefined4 param_dynamic_code(undefined4 param_1)

{
  undefined4 uVar1;
  size_t __len;
  code *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (code *)0xffffffffffffffff) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined2 *)(__addr + 4) = 0xc305;
    *(undefined4 *)__addr = 0xc083f889;
    uVar1 = (*__addr)(param_1);
    munmap(__addr,__len);
  }
  return uVar1;
}



/* Function: param_memory_protection @ 001015ce */

undefined4 param_memory_protection(void)

{
  undefined4 uVar1;
  int iVar2;
  size_t __len;
  undefined4 *__addr;
  undefined4 uVar3;
  
  __len = sysconf(0x1e);
  uVar3 = 0xffffffff;
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr != (undefined4 *)0xffffffffffffffff) {
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



/* Function: param_clobber_importance @ 00101669 */

int param_clobber_importance(int param_1,int param_2)

{
  return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00101678 */

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



/* Function: param_memory_clobber_demo @ 001016c0 */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 001016d2 */

void test_asm_features(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  char cStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  puts(&DAT_001022a4);
  printf(&DAT_001021d5,0xf);
  piVar5 = &local_38;
  local_28 = CONCAT44(local_28._4_4_,5);
  _local_38 = 0x200000001;
  uStack_30 = 0x400000003;
  uVar1 = 0;
  for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
    uVar1 = uVar1 + piVar5[uVar2];
  }
  printf(&DAT_001021f1,(ulong)uVar1);
  puVar4 = &local_48;
  local_48 = 0x5341206f6c6c6548;
  uStack_40 = CONCAT62(uStack_40._2_6_,0x4d);
  local_28 = 0;
  uStack_20 = 0;
  _local_38 = 0;
  uStack_30 = 0;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)piVar5 = *(undefined1 *)puVar4;
    piVar5 = (int *)((long)piVar5 + 1);
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  }
  uVar6 = 0xffffffff;
  if (cStack_34 == 'o' && (char)local_38 == 'H') {
    uVar6 = 0x2a;
  }
  printf(&DAT_0010220d,uVar6);
  _local_38 = 0x200000001;
  uStack_30 = 0x400000003;
  local_48 = 0x600000005;
  uStack_40 = 0x800000007;
  printf(&DAT_00102229,0x24);
  LOCK();
  _local_38 = CONCAT44(_cStack_34,0xf);
  UNLOCK();
  printf(&DAT_00102245,0x1e);
  uVar1 = call_asm_privileged();
  printf(&DAT_00102261,(ulong)uVar1);
  return;
}



/* Function: main @ 00101835 */

undefined8 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: _fini @ 00101844 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 50 */
