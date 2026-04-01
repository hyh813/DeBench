// Decompiled by BinaryAI
// SHA256: 04c0fc70c544833930ebf7de3eb03551eb918e6fead1c349f2e437b97081b2ca

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

// Function: <EXTERNAL>::strlen @ 0x101030
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
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

// Function: <EXTERNAL>::memset @ 0x101060
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x101070
int munmap(void *__addr,size_t __len)
{
  int iVar1;
  iVar1 = munmap(__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x101080
int mprotect(void *__addr,size_t __len,int __prot)
{
  int iVar1;
  iVar1 = mprotect(__addr,__len,__prot);
  return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x101090
long sysconf(int __name)
{
  long lVar1;
  lVar1 = sysconf(__name);
  return lVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010a0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _start @ 0x1010b0
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1010e0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101110
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x101150
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

// Function: param_macro_constants @ 0x1011a0
undefined4 param_macro_constants(int param_1)
{
  undefined4 local_c;
  if (param_1 < 0x401) {
    local_c = 0x200;
  }
  else {
    local_c = 0x40;
  }
  return local_c;
}

// Function: call_macro_constants @ 0x1011d0
void call_macro_constants(void)
{
  param_macro_constants(0x800);
  return;
}

// Function: param_macro_functions @ 0x1011e0
int param_macro_functions(int param_1,int param_2)
{
  int local_18;
  local_18 = param_2;
  if (param_2 < param_1) {
    local_18 = param_1;
  }
  return param_1 * param_1 + local_18;
}

// Function: call_macro_functions @ 0x101220
void call_macro_functions(void)
{
  param_macro_functions(5,3);
  return;
}

// Function: param_conditional_compile @ 0x101240
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101260
void call_conditional_compile(void)
{
  param_conditional_compile(10);
  return;
}

// Function: param_multi_branch_compile @ 0x101270
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101290
void call_multi_branch_compile(void)
{
  param_multi_branch_compile(10);
  return;
}

// Function: param_macro_recursion @ 0x1012a0
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x1012e0
void call_macro_recursion(void)
{
  param_macro_recursion(100);
  return;
}

// Function: param_stringize @ 0x1012f0
long param_stringize(void)
{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  sVar1 = strlen("Hello World");
  sVar2 = strlen("1.2.3");
  sVar3 = strlen("155");
  return sVar1 + sVar2 + sVar3;
}

// Function: call_stringize @ 0x101360
void call_stringize(void)
{
  param_stringize(0);
  return;
}

// Function: my_func @ 0x101370
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x101380
int param_token_paste(int param_1)
{
  int iVar1;
  iVar1 = my_func(param_1);
  return param_1 + 5 + iVar1;
}

// Function: call_token_paste @ 0x1013c0
void call_token_paste(void)
{
  param_token_paste(5);
  return;
}

// Function: param_variadic_macro @ 0x1013d0
int param_variadic_macro(uint param_1,uint param_2,uint param_3)
{
  printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,(ulong)param_2,(ulong)param_3);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x101410
void call_variadic_macro(void)
{
  param_variadic_macro(10,0x14,0x1e);
  return;
}

// Function: param_macro_override @ 0x101430
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x101460
void call_macro_override(void)
{
  param_macro_override(5);
  return;
}

// Function: param_include_guard @ 0x101470
void param_include_guard(void)
{
  header_func(5);
  return;
}

// Function: header_func @ 0x101480
int header_func(int param_1)
{
  return param_1 * 100;
}

// Function: call_include_guard @ 0x101490
void call_include_guard(void)
{
  param_include_guard();
  return;
}

// Function: param_builtin_macros @ 0x1014a0
int param_builtin_macros(int param_1)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:43");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101530
void call_builtin_macros(void)
{
  param_builtin_macros(100);
  return;
}

// Function: test_preprocessing_features @ 0x101540
void test_preprocessing_features(void)
{
  uint uVar1;
  printf(&DAT_00102095);
  uVar1 = call_macro_constants();
  printf(&DAT_001020bd,(ulong)uVar1);
  uVar1 = call_macro_functions();
  printf(&DAT_001020d8,(ulong)uVar1);
  uVar1 = call_conditional_compile();
  printf(&DAT_001020f3,(ulong)uVar1);
  uVar1 = call_multi_branch_compile();
  printf(&DAT_0010210e,(ulong)uVar1);
  uVar1 = call_macro_recursion();
  printf(&DAT_0010212d,(ulong)uVar1);
  uVar1 = call_stringize();
  printf(&DAT_00102149,(ulong)uVar1);
  uVar1 = call_token_paste();
  printf(&DAT_00102173,(ulong)uVar1);
  uVar1 = call_variadic_macro();
  printf(&DAT_0010218e,(ulong)uVar1);
  uVar1 = call_macro_override();
  printf(&DAT_001021a9,(ulong)uVar1);
  uVar1 = call_include_guard();
  printf(&DAT_001021c4,(ulong)uVar1);
  uVar1 = call_builtin_macros();
  printf(&DAT_001021e0,(ulong)uVar1);
  return;
}

// Function: param_asm_basic @ 0x101640
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x101660
void call_asm_basic(void)
{
  param_asm_basic(5);
  return;
}

// Function: param_asm_clobber @ 0x101670
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

// Function: call_asm_clobber @ 0x1016b0
void call_asm_clobber(void)
{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  local_28 = 0x200000001;
  local_20 = 0x400000003;
  local_18 = 5;
  param_asm_clobber(&local_28,5);
  return;
}

// Function: param_asm_multi_insn @ 0x1016f0
void param_asm_multi_insn(undefined *param_1,undefined *param_2,long param_3)
{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// Function: call_asm_multi_insn @ 0x101740
undefined8 call_asm_multi_insn(void)
{
  undefined8 uVar1;
  char local_38 [4];
  char local_34;
  undefined8 local_12;
  undefined2 local_a;
  local_12._0_1_ = 'H';
  local_12._1_1_ = 'e';
  local_12._2_1_ = 'l';
  local_12._3_1_ = 'l';
  local_12._4_1_ = 'o';
  local_12._5_1_ = ' ';
  local_12._6_1_ = 'A';
  local_12._7_1_ = 'S';
  local_a = 0x4d;
  memset(local_38,0,0x20);
  param_asm_multi_insn(local_38,&local_12,9);
  uVar1 = 0xffffffff;
  if (local_38[0] == 'H' && local_34 == 'o') {
    uVar1 = 0x2a;
  }
  return uVar1;
}

// Function: param_asm_simd @ 0x1017c0
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

// Function: param_simd_intrinsics @ 0x1017f0
undefined8 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
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

// Function: call_asm_simd @ 0x101890
int call_asm_simd(void)
{
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  local_18 = 0x200000001;
  local_10 = 0x400000003;
  local_28 = 0x600000005;
  local_20 = 0x800000007;
  param_asm_simd(&local_18,&local_28,&local_38);
  return local_38 + local_34 + local_30 + local_2c;
}

// Function: param_asm_atomic @ 0x1018f0
int param_asm_atomic(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101920
int param_atomic_c11(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101950
int call_asm_atomic(void)
{
  int iVar1;
  int local_c;
  local_c = 10;
  iVar1 = param_asm_atomic(&local_c,5);
  return local_c + iVar1;
}

// Function: param_dynamic_code @ 0x101980
undefined4 param_dynamic_code(undefined4 param_1)
{
  size_t __len;
  undefined4 *__addr;
  undefined4 local_c;
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffffffffffff) {
    local_c = 0xffffffff;
  }
  else {
    *__addr = 0xc083f889;
    *(undefined2 *)(__addr + 1) = 0xc305;
    local_c = (*(code *)__addr)(param_1);
    munmap(__addr,__len);
  }
  return local_c;
}

// Function: param_memory_protection @ 0x101a30
undefined4 param_memory_protection(void)
{
  int iVar1;
  size_t __len;
  undefined4 *__addr;
  undefined4 local_c;
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffffffffffff) {
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

// Function: param_clobber_importance @ 0x101b40
int param_clobber_importance(int param_1,int param_2)
{
  return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101b80
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

// Function: param_memory_clobber_demo @ 0x101bf0
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x101c20
void test_asm_features(void)
{
  uint uVar1;
  printf(&DAT_00102213);
  uVar1 = call_asm_basic();
  printf(&DAT_0010223e,(ulong)uVar1);
  uVar1 = call_asm_clobber();
  printf(&DAT_0010225a,(ulong)uVar1);
  uVar1 = call_asm_multi_insn();
  printf(&DAT_00102276,(ulong)uVar1);
  uVar1 = call_asm_simd();
  printf(&DAT_00102292,(ulong)uVar1);
  uVar1 = call_asm_atomic();
  printf(&DAT_001022ae,(ulong)uVar1);
  uVar1 = call_asm_privileged();
  printf(&DAT_001022ca,(ulong)uVar1);
  return;
}

// Function: main @ 0x101cc0
undefined8 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: _fini @ 0x101ce4
void _fini(void)
{
  return;
}

