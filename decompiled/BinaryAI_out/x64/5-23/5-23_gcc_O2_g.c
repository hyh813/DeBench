// Decompiled by BinaryAI
// SHA256: 27508f16c90bf9f712216c88dc051676996a01e12af573a6602f2ba1c8a793f0

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

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::mmap @ 0x1010b0
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
  void *pvVar1;
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x1010c0
int munmap(void *__addr,size_t __len)
{
  int iVar1;
  iVar1 = munmap(__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1010d0
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::mprotect @ 0x1010e0
int mprotect(void *__addr,size_t __len,int __prot)
{
  int iVar1;
  iVar1 = mprotect(__addr,__len,__prot);
  return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x1010f0
long sysconf(int __name)
{
  long lVar1;
  lVar1 = sysconf(__name);
  return lVar1;
}

// Function: main @ 0x101100
undefined8 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: _start @ 0x101120
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x101150
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101180
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1011c0
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

// Function: param_macro_constants @ 0x101210
undefined8 param_macro_constants(int param_1)
{
  undefined8 uVar1;
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}

// Function: call_macro_constants @ 0x101230
undefined8 call_macro_constants(void)
{
  return 0x40;
}

// Function: param_macro_functions @ 0x101240
int param_macro_functions(int param_1,int param_2)
{
  int iVar1;
  iVar1 = param_1;
  if (param_1 < param_2) {
    iVar1 = param_2;
  }
  return param_1 * param_1 + iVar1;
}

// Function: call_macro_functions @ 0x101260
undefined8 call_macro_functions(void)
{
  return 0x1e;
}

// Function: param_conditional_compile @ 0x101270
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101280
undefined8 call_conditional_compile(void)
{
  return 0x20;
}

// Function: param_multi_branch_compile @ 0x101290
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1012a0
undefined8 call_multi_branch_compile(void)
{
  return 0xdf22;
}

// Function: param_macro_recursion @ 0x1012b0
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x1012c0
undefined8 call_macro_recursion(void)
{
  return 0x74;
}

// Function: param_stringize @ 0x1012d0
undefined8 param_stringize(void)
{
  return 0x13;
}

// Function: call_stringize @ 0x1012e0
undefined8 call_stringize(void)
{
  return 0x13;
}

// Function: my_func @ 0x1012f0
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x101300
int param_token_paste(int param_1)
{
  return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x101310
undefined8 call_token_paste(void)
{
  return 0x3c;
}

// Function: param_variadic_macro @ 0x101320
int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)
{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x101350
undefined8 call_variadic_macro(void)
{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}

// Function: param_macro_override @ 0x101390
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1013a0
undefined8 call_macro_override(void)
{
  return 0x10;
}

// Function: param_include_guard @ 0x1013b0
undefined8 param_include_guard(void)
{
  return 500;
}

// Function: call_include_guard @ 0x1013c0
undefined8 call_include_guard(void)
{
  return 500;
}

// Function: param_builtin_macros @ 0x1013d0
int param_builtin_macros(int param_1)
{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101420
undefined8 call_builtin_macros(void)
{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:00:30");
  return 0x17e;
}

// Function: test_preprocessing_features @ 0x101470
void test_preprocessing_features(void)
{
  __printf_chk(1,&DAT_001021f0);
  __printf_chk(1,&DAT_0010203d,0x40);
  __printf_chk(1,&DAT_00102058,0x1e);
  __printf_chk(1,&DAT_00102073,0x20);
  __printf_chk(1,&DAT_00102218,0xdf22);
  __printf_chk(1,&DAT_0010208e,0x74);
  __printf_chk(1,&DAT_00102238,0x13);
  __printf_chk(1,&DAT_001020aa,0x3c);
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  __printf_chk(1,&DAT_001020c5,0x3c);
  __printf_chk(1,&DAT_001020e0,0x10);
  __printf_chk(1,&DAT_001020fb,500);
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:00:30");
  __printf_chk(1,&DAT_00102268,0x17e);
  return;
}

// Function: param_asm_basic @ 0x101600
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x101610
undefined8 call_asm_basic(void)
{
  return 0xf;
}

// Function: param_asm_clobber @ 0x101630
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

// Function: call_asm_clobber @ 0x101650
int call_asm_clobber(void)
{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_28 [6];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
    iVar1 = iVar1 + local_28[uVar2];
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
  __stack_chk_fail();
}

// Function: param_asm_multi_insn @ 0x1016a0
void param_asm_multi_insn(undefined *param_1,undefined *param_2,long param_3)
{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// Function: call_asm_multi_insn @ 0x1016c0
undefined8 call_asm_multi_insn(void)
{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_42;
  undefined2 local_3a;
  undefined local_38 [16];
  undefined local_28 [16];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_38;
  local_38 = (undefined  [16])0x0;
  puVar2 = &local_42;
  local_28 = (undefined  [16])0x0;
  local_42 = 0x5341206f6c6c6548;
  local_3a = 0x4d;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar3 = *(undefined *)puVar2;
    puVar3 = puVar3 + 1;
    puVar2 = (undefined8 *)((long)puVar2 + 1);
  }
  if (local_38[0] == 'H') {
    uVar1 = 0xffffffff;
    if (local_38[4] == 'o') {
      uVar1 = 0x2a;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
  __stack_chk_fail();
}

// Function: param_asm_simd @ 0x101760
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

// Function: param_simd_intrinsics @ 0x101780
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

// Function: call_asm_simd @ 0x1017a0
undefined4 call_asm_simd(void)
{
  long in_FS_OFFSET;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x24;
  }
  __stack_chk_fail();
}

// Function: param_asm_atomic @ 0x101840
int param_asm_atomic(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101850
int param_atomic_c11(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101860
undefined4 call_asm_atomic(void)
{
  long in_FS_OFFSET;
  LOCK();
  UNLOCK();
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x1e;
  }
  __stack_chk_fail();
}

// Function: param_dynamic_code @ 0x1018b0
undefined4 param_dynamic_code(undefined4 param_1)
{
  long lVar1;
  undefined4 uVar2;
  size_t __len;
  undefined4 *__addr;
  long in_FS_OFFSET;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffffffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    *__addr = 0xc083f889;
    *(undefined2 *)(__addr + 1) = 0xc305;
    uVar2 = (*(code *)__addr)(param_1);
    munmap(__addr,__len);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  __stack_chk_fail();
}

// Function: param_memory_protection @ 0x101950
undefined4 param_memory_protection(void)
{
  int iVar1;
  size_t __len;
  undefined4 *__addr;
  undefined4 uVar2;
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffffffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    if (iVar1 == 0) {
      uVar2 = *__addr;
      iVar1 = mprotect(__addr,__len,3);
      if (iVar1 == 0) {
        *__addr = 100;
        munmap(__addr,__len);
      }
      else {
        uVar2 = 0xfffffffd;
        munmap(__addr,__len);
      }
    }
    else {
      uVar2 = 0xfffffffe;
      munmap(__addr,__len);
    }
  }
  return uVar2;
}

// Function: param_clobber_importance @ 0x101a20
int param_clobber_importance(int param_1,int param_2)
{
  return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101a40
int call_asm_privileged(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  if ((iVar1 == 0xf) && (iVar2 == 0x2a)) {
    iVar1 = 0x4d;
  }
  return iVar1;
}

// Function: param_memory_clobber_demo @ 0x101aa0
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x101ac0
void test_asm_features(void)
{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  int local_28 [6];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __printf_chk(1,&DAT_00102298);
  __printf_chk(1,&DAT_00102117,0xf);
  iVar1 = 0;
  for (uVar3 = 0; (int)uVar3 < 5; uVar3 = (ulong)((int)uVar3 + 1)) {
    iVar1 = iVar1 + local_28[uVar3];
  }
  __printf_chk(1,&DAT_00102133,iVar1);
  uVar2 = call_asm_multi_insn();
  __printf_chk(1,&DAT_0010214f,uVar2);
  uVar2 = call_asm_simd();
  __printf_chk(1,&DAT_0010216b,uVar2);
  LOCK();
  UNLOCK();
  __printf_chk(1,&DAT_00102187,0x1e);
  call_asm_privileged();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_001021a3);
    return;
  }
  __stack_chk_fail();
}

// Function: _fini @ 0x101bcc
void _fini(void)
{
  return;
}

