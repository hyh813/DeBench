// Decompiled by BinaryAI
// SHA256: 377453e8f1e4d2adeea0d8cb4ad2fe306f9530ce1bcbf4062b48404bdf85985c

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

// Function: <EXTERNAL>::memcpy @ 0x11070
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x11080
long sysconf(int __name)
{
  long lVar1;
  lVar1 = sysconf(__name);
  return lVar1;
}

// Function: <EXTERNAL>::mmap @ 0x11090
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
  void *pvVar1;
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x110a0
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::memset @ 0x110b0
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x110c0
int munmap(void *__addr,size_t __len)
{
  int iVar1;
  iVar1 = munmap(__addr,__len);
  return iVar1;
}

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + -0x10))();
  return;
}

// Function: _start @ 0x110e0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1110c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11110
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11120
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11160
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x111b0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 15999) == '\0') {
    if (*(int *)(unaff_EDI + 0x3e33) != 0) {
      FUN_000110d0(*(undefined4 *)(unaff_EDI + 0x3e77));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x3e83);
    while (uVar1 < ((unaff_EDI + 0x3d53) - (unaff_EDI + 0x3d4f) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x3e83) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x3d4f + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x3e83);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 15999) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11249
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1124d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: param_macro_constants @ 0x11260
undefined4 param_macro_constants(int param_1)
{
  undefined4 local_8;
  if (param_1 < 0x401) {
    local_8 = 0x200;
  }
  else {
    local_8 = 0x40;
  }
  return local_8;
}

// Function: call_macro_constants @ 0x11290
void call_macro_constants(void)
{
  param_macro_constants(0x800);
  return;
}

// Function: param_macro_functions @ 0x112c0
int param_macro_functions(int param_1,int param_2)
{
  int local_c;
  if (param_2 < param_1) {
    local_c = param_1;
  }
  else {
    local_c = param_2;
  }
  return param_1 * param_1 + local_c;
}

// Function: call_macro_functions @ 0x11300
void call_macro_functions(void)
{
  param_macro_functions(5,3);
  return;
}

// Function: param_conditional_compile @ 0x11330
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x11350
void call_conditional_compile(void)
{
  param_conditional_compile(10);
  return;
}

// Function: param_multi_branch_compile @ 0x11380
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x113a0
void call_multi_branch_compile(void)
{
  param_multi_branch_compile(10);
  return;
}

// Function: param_macro_recursion @ 0x113d0
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x11410
void call_macro_recursion(void)
{
  param_macro_recursion(100);
  return;
}

// Function: param_stringize @ 0x11440
int param_stringize(void)
{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  sVar1 = strlen("Hello World");
  sVar2 = strlen("1.2.3");
  sVar3 = strlen("155");
  return sVar1 + sVar2 + sVar3;
}

// Function: call_stringize @ 0x114c0
void call_stringize(void)
{
  param_stringize(0);
  return;
}

// Function: my_func @ 0x114f0
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x11500
int param_token_paste(int param_1)
{
  int iVar1;
  iVar1 = my_func(param_1);
  return param_1 + 5 + iVar1;
}

// Function: call_token_paste @ 0x11540
void call_token_paste(void)
{
  param_token_paste(5);
  return;
}

// Function: param_variadic_macro @ 0x11570
int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)
{
  printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x115d0
void call_variadic_macro(void)
{
  param_variadic_macro(10,0x14,0x1e);
  return;
}

// Function: param_macro_override @ 0x11610
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x11640
void call_macro_override(void)
{
  param_macro_override(5);
  return;
}

// Function: param_include_guard @ 0x11670
void param_include_guard(void)
{
  header_func(5);
  return;
}

// Function: header_func @ 0x116a0
int header_func(int param_1)
{
  return param_1 * 100;
}

// Function: call_include_guard @ 0x116b0
void __regparm3 call_include_guard(undefined4 param_1)
{
  param_include_guard(param_1);
  return;
}

// Function: param_builtin_macros @ 0x116d0
int param_builtin_macros(int param_1)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:06");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x11780
void call_builtin_macros(void)
{
  param_builtin_macros(100);
  return;
}

// Function: test_preprocessing_features @ 0x117b0
void test_preprocessing_features(void)
{
  undefined4 uVar1;
  printf(&DAT_00013099);
  uVar1 = call_macro_constants();
  printf(&DAT_000130c1,uVar1);
  uVar1 = call_macro_functions();
  printf(&DAT_000130dc,uVar1);
  uVar1 = call_conditional_compile();
  printf(&DAT_000130f7,uVar1);
  uVar1 = call_multi_branch_compile();
  printf(&DAT_00013112,uVar1);
  uVar1 = call_macro_recursion();
  printf(&DAT_00013131,uVar1);
  uVar1 = call_stringize();
  printf(&DAT_0001314d,uVar1);
  uVar1 = call_token_paste();
  printf(&DAT_00013177,uVar1);
  uVar1 = call_variadic_macro();
  printf(&DAT_00013192,uVar1);
  uVar1 = call_macro_override();
  printf(&DAT_000131ad,uVar1);
  uVar1 = call_include_guard();
  printf(&DAT_000131c8,uVar1);
  uVar1 = call_builtin_macros();
  printf(&DAT_000131e4,uVar1);
  return;
}

// Function: param_asm_basic @ 0x11920
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x11950
void call_asm_basic(void)
{
  param_asm_basic(5);
  return;
}

// Function: param_asm_clobber @ 0x11980
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

// Function: call_asm_clobber @ 0x119d0
void call_asm_clobber(void)
{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined local_1c [20];
  ppuVar1 = &_GLOBAL_OFFSET_TABLE_;
  uVar2 = 0x14;
  memcpy(local_1c,&DAT_000132ec,0x14);
  param_asm_clobber(local_1c,5,uVar2,ppuVar1);
  return;
}

// Function: param_asm_multi_insn @ 0x11a20
void param_asm_multi_insn(undefined *param_1,undefined *param_2,int param_3)
{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// Function: call_asm_multi_insn @ 0x11a70
undefined4 call_asm_multi_insn(void)
{
  undefined4 uVar1;
  char local_32 [4];
  char local_2e;
  undefined4 local_12;
  undefined4 local_e;
  undefined2 local_a;
  local_12._0_1_ = 'H';
  local_12._1_1_ = 'e';
  local_12._2_1_ = 'l';
  local_12._3_1_ = 'l';
  local_e._0_1_ = 'o';
  local_e._1_1_ = ' ';
  local_e._2_1_ = 'A';
  local_e._3_1_ = 'S';
  local_a._0_1_ = 'M';
  local_a._1_1_ = '\0';
  memset(local_32,0,0x20);
  param_asm_multi_insn(local_32,&local_12,9);
  uVar1 = 0xffffffff;
  if (local_32[0] == 'H' && local_2e == 'o') {
    uVar1 = 0x2a;
  }
  return uVar1;
}

// Function: param_asm_simd @ 0x11b20
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

// Function: param_simd_intrinsics @ 0x11b50
undefined4 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
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

// Function: call_asm_simd @ 0x11bd0
int call_asm_simd(void)
{
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  local_18 = 1;
  local_14 = 2;
  local_10 = 3;
  local_c = 4;
  local_28 = 5;
  local_24 = 6;
  local_20 = 7;
  local_1c = 8;
  param_asm_simd(&local_18,&local_28,&local_38);
  return local_38 + local_34 + local_30 + local_2c;
}

// Function: param_asm_atomic @ 0x11c60
int param_asm_atomic(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x11c90
int param_atomic_c11(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x11cc0
int call_asm_atomic(void)
{
  int iVar1;
  int local_c;
  local_c = 10;
  iVar1 = param_asm_atomic(&local_c,5);
  return local_c + iVar1;
}

// Function: param_dynamic_code @ 0x11d00
int param_dynamic_code(int param_1)
{
  size_t __len;
  void *__addr;
  int local_c;
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffff) {
    local_c = -1;
  }
  else {
    local_c = param_1 + 5;
    munmap(__addr,__len);
  }
  return local_c;
}

// Function: param_memory_protection @ 0x11db0
undefined4 param_memory_protection(void)
{
  size_t __len;
  undefined4 *__addr;
  int iVar1;
  undefined4 local_c;
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffff) {
    local_c = 0xffffffff;
  }
  else {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    if (iVar1 == 0) {
      local_c = *__addr;
      iVar1 = mprotect(__addr,__len,3);
      if (iVar1 == 0) {
        *__addr = 100;
        munmap(__addr,__len);
      }
      else {
        munmap(__addr,__len);
        local_c = 0xfffffffd;
      }
    }
    else {
      munmap(__addr,__len);
      local_c = 0xfffffffe;
    }
  }
  return local_c;
}

// Function: param_clobber_importance @ 0x11f00
int param_clobber_importance(int param_1,int param_2)
{
  return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11f40
int call_asm_privileged(void)
{
  int iVar1;
  int iVar2;
  int local_c;
  local_c = param_dynamic_code(10);
  iVar1 = param_memory_protection();
  iVar2 = param_clobber_importance(3,7);
  if (((local_c == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
    local_c = 0x4d;
  }
  return local_c;
}

// Function: param_memory_clobber_demo @ 0x11fd0
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x12010
void test_asm_features(void)
{
  undefined4 uVar1;
  printf(&DAT_00013217);
  uVar1 = call_asm_basic();
  printf(&DAT_00013242,uVar1);
  uVar1 = call_asm_clobber();
  printf(&DAT_0001325e,uVar1);
  uVar1 = call_asm_multi_insn();
  printf(&DAT_0001327a,uVar1);
  uVar1 = call_asm_simd();
  printf(&DAT_00013296,uVar1);
  uVar1 = call_asm_atomic();
  printf(&DAT_000132b2,uVar1);
  uVar1 = call_asm_privileged();
  printf(&DAT_000132ce,uVar1);
  return;
}

// Function: main @ 0x120f0
undefined4 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: __do_global_ctors_aux @ 0x12130
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x1217c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

