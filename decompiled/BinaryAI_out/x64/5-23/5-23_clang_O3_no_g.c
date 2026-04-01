// Decompiled by BinaryAI
// SHA256: 60427485d9636ec15473939aa3eade1e9255e9cd2643cebf9bdf386f17f3e2bd

// Function: _init @ 0x101000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::puts @ 0x101030
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::mmap @ 0x101040
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
  void *pvVar1;
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x101050
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::munmap @ 0x101060
int munmap(void *__addr,size_t __len)
{
  int iVar1;
  iVar1 = munmap(__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x101070
int mprotect(void *__addr,size_t __len,int __prot)
{
  int iVar1;
  iVar1 = mprotect(__addr,__len,__prot);
  return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x101080
long sysconf(int __name)
{
  long lVar1;
  lVar1 = sysconf(__name);
  return lVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _start @ 0x1010a0
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1010d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101100
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x101140
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

// Function: param_macro_constants @ 0x101190
undefined8 param_macro_constants(int param_1)
{
  undefined8 uVar1;
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}

// Function: call_macro_constants @ 0x1011b0
undefined8 call_macro_constants(void)
{
  return 0x40;
}

// Function: param_macro_functions @ 0x1011c0
int param_macro_functions(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x1011d0
undefined8 call_macro_functions(void)
{
  return 0x1e;
}

// Function: param_conditional_compile @ 0x1011e0
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1011f0
undefined8 call_conditional_compile(void)
{
  return 0x20;
}

// Function: param_multi_branch_compile @ 0x101200
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101210
undefined8 call_multi_branch_compile(void)
{
  return 0xdf22;
}

// Function: param_macro_recursion @ 0x101220
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x101230
undefined8 call_macro_recursion(void)
{
  return 0x74;
}

// Function: param_stringize @ 0x101240
undefined8 param_stringize(void)
{
  return 0x13;
}

// Function: call_stringize @ 0x101250
undefined8 call_stringize(void)
{
  return 0x13;
}

// Function: my_func @ 0x101260
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x101270
int param_token_paste(int param_1)
{
  return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x101280
undefined8 call_token_paste(void)
{
  return 0x3c;
}

// Function: param_variadic_macro @ 0x101290
int param_variadic_macro(uint param_1,ulong param_2,ulong param_3)
{
  printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x1012b0
undefined8 call_variadic_macro(void)
{
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}

// Function: param_macro_override @ 0x1012e0
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1012f0
undefined8 call_macro_override(void)
{
  return 0x10;
}

// Function: param_include_guard @ 0x101300
undefined8 param_include_guard(void)
{
  return 500;
}

// Function: call_include_guard @ 0x101310
undefined8 call_include_guard(void)
{
  return 500;
}

// Function: param_builtin_macros @ 0x101320
int param_builtin_macros(int param_1)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:56");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101360
undefined8 call_builtin_macros(void)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:56");
  return 0x17e;
}

// Function: test_preprocessing_features @ 0x1013a0
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
         "Jan 15 2026","03:00:56");
  printf(&DAT_001021a2,0x17e);
  return;
}

// Function: param_asm_basic @ 0x1014d0
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x1014e0
undefined8 call_asm_basic(void)
{
  return 0xf;
}

// Function: param_asm_clobber @ 0x1014f0
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

// Function: call_asm_clobber @ 0x101510
int call_asm_clobber(void)
{
  int iVar1;
  ulong uVar2;
  int local_18 [4];
  undefined4 local_8;
  local_8 = 5;
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

// Function: param_asm_multi_insn @ 0x101550
void param_asm_multi_insn(undefined *param_1,undefined *param_2,long param_3)
{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// Function: call_asm_multi_insn @ 0x101570
undefined8 call_asm_multi_insn(void)
{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_38;
  undefined2 local_30;
  undefined local_28 [16];
  undefined local_18 [16];
  local_38 = 0x5341206f6c6c6548;
  local_30 = 0x4d;
  local_18 = ZEXT816(0);
  local_28 = ZEXT816(0);
  puVar2 = local_28;
  puVar3 = &local_38;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar2 = *(undefined *)puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = (undefined8 *)((long)puVar3 + 1);
  }
  uVar1 = 0xffffffff;
  if ((byte)(local_28[4] ^ 0x6f | local_28[0] ^ 0x48) == 0) {
    uVar1 = 0x2a;
  }
  return uVar1;
}

// Function: param_asm_simd @ 0x1015e0
undefined8 param_asm_simd(int *param_1,int *param_2,undefined (*param_3) [16])
{
  undefined auVar1 [16];
  auVar1._4_4_ = param_1[1] + param_2[1];
  auVar1._0_4_ = *param_1 + *param_2;
  auVar1._8_4_ = param_1[2] + param_2[2];
  auVar1._12_4_ = param_1[3] + param_2[3];
  *param_3 = auVar1;
  return 0;
}

// Function: param_simd_intrinsics @ 0x1015f0
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

// Function: call_asm_simd @ 0x101600
undefined4 call_asm_simd(void)
{
  return 0x24;
}

// Function: param_asm_atomic @ 0x101660
int param_asm_atomic(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101670
int param_atomic_c11(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101680
undefined4 call_asm_atomic(void)
{
  LOCK();
  UNLOCK();
  return 0x1e;
}

// Function: param_dynamic_code @ 0x1016a0
undefined4 param_dynamic_code(undefined4 param_1)
{
  undefined4 uVar1;
  size_t __len;
  undefined4 *__addr;
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr != (undefined4 *)0xffffffffffffffff) {
    *(undefined2 *)(__addr + 1) = 0xc305;
    *__addr = 0xc083f889;
    uVar1 = (*(code *)__addr)(param_1);
    munmap(__addr,__len);
    return uVar1;
  }
  return 0xffffffff;
}

// Function: param_memory_protection @ 0x101710
undefined4 param_memory_protection(void)
{
  undefined4 uVar1;
  int iVar2;
  size_t __len;
  undefined4 *__addr;
  undefined4 uVar3;
  __len = sysconf(0x1e);
  uVar3 = 0xffffffff;
  __addr = (undefined4 *)mmap((void *)0x0,__len,3,0x22,-1,0);
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

// Function: param_clobber_importance @ 0x1017b0
int param_clobber_importance(int param_1,int param_2)
{
  return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x1017c0
uint call_asm_privileged(void)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *__addr;
  uint *__addr_00;
  uint uVar5;
  sVar4 = sysconf(0x1e);
  uVar5 = 0xffffffff;
  __addr = (undefined4 *)mmap((void *)0x0,sVar4,7,0x22,-1,0);
  uVar1 = 0xffffffff;
  if (__addr != (undefined4 *)0xffffffffffffffff) {
    *(undefined2 *)(__addr + 1) = 0xc305;
    *__addr = 0xc083f889;
    uVar1 = (*(code *)__addr)(10);
    munmap(__addr,sVar4);
  }
  sVar4 = sysconf(0x1e);
  __addr_00 = (uint *)mmap((void *)0x0,sVar4,3,0x22,-1,0);
  if (__addr_00 != (uint *)0xffffffffffffffff) {
    *__addr_00 = 0x2a;
    iVar2 = mprotect(__addr_00,sVar4,1);
    uVar5 = 0xfffffffe;
    if (iVar2 == 0) {
      uVar3 = *__addr_00;
      iVar2 = mprotect(__addr_00,sVar4,3);
      uVar5 = 0xfffffffd;
      if (iVar2 == 0) {
        *__addr_00 = 100;
        uVar5 = uVar3;
      }
    }
    munmap(__addr_00,sVar4);
  }
  uVar3 = 0x4d;
  if ((uVar5 ^ 0x2a | uVar1 ^ 0xf) != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}

// Function: param_memory_clobber_demo @ 0x101900
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x101920
void test_asm_features(void)
{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined local_48 [16];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  puVar5 = local_58;
  puts(&DAT_001022a4);
  printf(&DAT_001021d5,0xf);
  local_48._0_4_ = 5;
  uStack_50 = 3;
  local_58 = (undefined  [8])0x200000001;
  uStack_4c = 4;
  uVar1 = 0;
  for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
    uVar1 = uVar1 + *(int *)(local_58 + uVar2 * 4);
  }
  printf(&DAT_001021f1,(ulong)uVar1);
  local_38 = 0x5341206f6c6c6548;
  uStack_30 = CONCAT22(uStack_30._2_2_,0x4d);
  local_48 = ZEXT816(0);
  _local_58 = ZEXT816(0);
  puVar4 = &local_38;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *(undefined *)puVar4;
    puVar5 = puVar5 + 1;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  }
  uVar6 = 0xffffffff;
  if ((byte)(local_58[4] ^ 0x6f | local_58[0] ^ 0x48) == 0) {
    uVar6 = 0x2a;
  }
  printf(&DAT_0010220d,uVar6);
  uStack_50 = 3;
  local_58 = (undefined  [8])0x200000001;
  uStack_4c = 4;
  local_38 = 0x600000005;
  uStack_30 = 7;
  uStack_2c = 8;
  local_28 = 6;
  uStack_24 = 8;
  uStack_20 = 10;
  uStack_1c = 0xc;
  printf(&DAT_00102229,0x24);
  LOCK();
  local_58._0_4_ = 0xf;
  UNLOCK();
  printf(&DAT_00102245,0x1e);
  uVar1 = call_asm_privileged();
  printf(&DAT_00102261,(ulong)uVar1);
  return;
}

// Function: main @ 0x101a90
undefined8 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: _fini @ 0x101aa0
void _fini(void)
{
  return;
}

