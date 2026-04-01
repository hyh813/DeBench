// Decompiled by BinaryAI
// SHA256: 174862073bdbd8d343bfd06969cbd596d4c095eaeafac7cdafc8461da5ef6a25

// Function: _init @ 0x11000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::mprotect @ 0x11050
int mprotect(void *__addr,size_t __len,int __prot)
{
  int iVar1;
  iVar1 = mprotect(__addr,__len,__prot);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x11060
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x11070
long sysconf(int __name)
{
  long lVar1;
  lVar1 = sysconf(__name);
  return lVar1;
}

// Function: <EXTERNAL>::puts @ 0x11080
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::mmap @ 0x11090
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
  void *pvVar1;
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x110a0
int munmap(void *__addr,size_t __len)
{
  int iVar1;
  iVar1 = munmap(__addr,__len);
  return iVar1;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + -0x10))();
  return;
}

// Function: _start @ 0x110c0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x110ec
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110f0
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11100
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11140
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x11190
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2e97) == '\0') {
    if (*(int *)(unaff_EDI + 0x2e53) != 0) {
      FUN_000110b0(*(undefined4 *)(unaff_EDI + 0x2e8f));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2e9b);
    while (uVar1 < ((unaff_EDI + 0x2d73) - (unaff_EDI + 0x2d6f) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2e9b) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2d6f + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2e9b);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2e97) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11229
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1122d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: param_macro_constants @ 0x11234
undefined4 param_macro_constants(int param_1)
{
  undefined4 uVar1;
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}

// Function: call_macro_constants @ 0x1124a
undefined4 call_macro_constants(void)
{
  return 0x40;
}

// Function: param_macro_functions @ 0x11250
int param_macro_functions(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x11265
undefined4 call_macro_functions(void)
{
  return 0x1e;
}

// Function: param_conditional_compile @ 0x1126b
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x11276
undefined4 call_conditional_compile(void)
{
  return 0x20;
}

// Function: param_multi_branch_compile @ 0x1127c
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x11289
undefined4 call_multi_branch_compile(void)
{
  return 0xdf22;
}

// Function: param_macro_recursion @ 0x1128f
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x11297
undefined4 call_macro_recursion(void)
{
  return 0x74;
}

// Function: param_stringize @ 0x1129d
undefined4 param_stringize(void)
{
  return 0x13;
}

// Function: call_stringize @ 0x112a3
undefined4 call_stringize(void)
{
  return 0x13;
}

// Function: my_func @ 0x112a9
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x112b3
int param_token_paste(int param_1)
{
  return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x112c1
undefined4 call_token_paste(void)
{
  return 0x3c;
}

// Function: param_variadic_macro @ 0x112c7
int __regparm1
param_variadic_macro(undefined4 param_1_00,int param_1,undefined4 param_2,undefined4 param_3)
{
  printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3,param_1_00);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x112fd
undefined4 call_variadic_macro(void)
{
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}

// Function: param_macro_override @ 0x1132c
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x11335
undefined4 call_macro_override(void)
{
  return 0x10;
}

// Function: param_include_guard @ 0x1133b
undefined4 param_include_guard(void)
{
  return 500;
}

// Function: call_include_guard @ 0x11341
undefined4 call_include_guard(void)
{
  return 500;
}

// Function: param_builtin_macros @ 0x11347
int param_builtin_macros(int param_1)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:21");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x11396
undefined4 call_builtin_macros(void)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:21");
  return 0x17e;
}

// Function: test_preprocessing_features @ 0x113e1
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

// Function: param_asm_basic @ 0x11515
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x11523
undefined4 call_asm_basic(void)
{
  return 0xf;
}

// Function: param_asm_clobber @ 0x11532
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

// Function: call_asm_clobber @ 0x1154f
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

// Function: param_asm_multi_insn @ 0x11590
void param_asm_multi_insn(undefined *param_1,undefined *param_2,int param_3)
{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// Function: call_asm_multi_insn @ 0x115ae
undefined4 call_asm_multi_insn(void)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined local_2c [16];
  undefined local_1c [16];
  puVar2 = &local_38;
  local_30 = 0x4d;
  local_34 = 0x5341206f;
  local_38 = 0x6c6c6548;
  puVar4 = local_2c;
  local_1c = ZEXT816(0);
  local_2c = ZEXT816(0);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined *)puVar2;
    puVar4 = puVar4 + 1;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  uVar1 = 0x2a;
  if ((byte)(local_2c[4] ^ 0x6f | local_2c[0] ^ 0x48) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: param_asm_simd @ 0x1160b
undefined4 param_asm_simd(int *param_1,int *param_2,undefined (*param_3) [16])
{
  undefined auVar1 [16];
  auVar1._4_4_ = param_1[1] + param_2[1];
  auVar1._0_4_ = *param_1 + *param_2;
  auVar1._8_4_ = param_1[2] + param_2[2];
  auVar1._12_4_ = param_1[3] + param_2[3];
  *param_3 = auVar1;
  return 0;
}

// Function: param_simd_intrinsics @ 0x11627
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

// Function: call_asm_simd @ 0x11642
undefined4 call_asm_simd(void)
{
  return 0x24;
}

// Function: param_asm_atomic @ 0x1169a
int param_asm_atomic(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x116ab
int param_atomic_c11(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x116bc
undefined4 call_asm_atomic(void)
{
  LOCK();
  UNLOCK();
  return 0x1e;
}

// Function: param_dynamic_code @ 0x116d7
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

// Function: param_memory_protection @ 0x11739
undefined4 param_memory_protection(void)
{
  undefined4 uVar1;
  size_t __len;
  undefined4 *__addr;
  int iVar2;
  undefined4 uVar3;
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,3,0x22,-1,0);
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

// Function: param_clobber_importance @ 0x117e8
int param_clobber_importance(int param_1,int param_2)
{
  return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11803
uint call_asm_privileged(void)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uVar1 = param_dynamic_code(10);
  uVar2 = param_memory_protection();
  uVar3 = 0x4d;
  if ((uVar2 ^ 0x2a | uVar1 ^ 0xf) != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}

// Function: FUN_00011867 @ 0x11867
int FUN_00011867(void)
{
  int unaff_retaddr;
  return *(int *)(unaff_retaddr + 0x27c9) + 0x32;
}

// Function: test_asm_features @ 0x11880
void test_asm_features(void)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined local_3c [8];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined local_2c [28];
  puts(&DAT_000122f0);
  printf(&DAT_00012221,0xf);
  puVar5 = local_3c;
  local_2c._0_4_ = 5;
  uStack_34 = 3;
  local_3c = (undefined  [8])0x200000001;
  uStack_30 = 4;
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = iVar1 + *(int *)(puVar5 + iVar3 * 4);
  }
  printf(&DAT_0001223d,iVar1);
  puVar4 = &local_4c;
  uStack_44 = CONCAT22(uStack_44._2_2_,0x4d);
  uStack_48 = 0x5341206f;
  local_4c = 0x6c6c6548;
  local_2c._0_16_ = ZEXT816(0);
  _local_3c = ZEXT816(0);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *(undefined *)puVar4;
    puVar5 = puVar5 + 1;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  uVar2 = 0x2a;
  if ((byte)(local_3c[4] ^ 0x6f | local_3c[0] ^ 0x48) != 0) {
    uVar2 = 0xffffffff;
  }
  printf(&DAT_00012259,uVar2);
  uStack_34 = 3;
  local_3c = (undefined  [8])0x200000001;
  uStack_30 = 4;
  local_4c = 5;
  uStack_48 = 6;
  uStack_44 = 7;
  uStack_40 = 8;
  printf(&DAT_00012275,0x24);
  LOCK();
  local_3c._0_4_ = 0xf;
  UNLOCK();
  printf(&DAT_00012291,0x1e);
  uVar2 = call_asm_privileged();
  printf(&DAT_000122ad,uVar2);
  return;
}

// Function: main @ 0x119f3
undefined4 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: __do_global_ctors_aux @ 0x11a20
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x11a6c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

