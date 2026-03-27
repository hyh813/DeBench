/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-23/5-23_gcc_O0_no_g
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



/* Function: _start @ 00101140 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101170 */

/* WARNING: Removing unreachable block (ram,0x00101183) */
/* WARNING: Removing unreachable block (ram,0x0010118f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001011a0 */

/* WARNING: Removing unreachable block (ram,0x001011c4) */
/* WARNING: Removing unreachable block (ram,0x001011d0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011e0 */

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



/* Function: param_macro_constants @ 00101229 */

undefined8 param_macro_constants(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x401) {
    uVar1 = 0x200;
  }
  else {
    uVar1 = 0x40;
  }
  return uVar1;
}



/* Function: call_macro_constants @ 0010124b */

void call_macro_constants(void)

{
  param_macro_constants(0x800);
  return;
}



/* Function: param_macro_functions @ 0010125f */

int param_macro_functions(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 <= param_2) {
    iVar1 = param_2;
  }
  return iVar1 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00101284 */

void call_macro_functions(void)

{
  param_macro_functions(5,3);
  return;
}



/* Function: param_conditional_compile @ 0010129d */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 001012c2 */

void call_conditional_compile(void)

{
  param_conditional_compile(10);
  return;
}



/* Function: param_multi_branch_compile @ 001012d6 */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 001012f2 */

void call_multi_branch_compile(void)

{
  param_multi_branch_compile(10);
  return;
}



/* Function: param_macro_recursion @ 00101306 */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00101319 */

void call_macro_recursion(void)

{
  param_macro_recursion(100);
  return;
}



/* Function: param_stringize @ 0010132d */

int param_stringize(void)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  
  sVar1 = strlen("Hello World");
  sVar2 = strlen("1.2.3");
  sVar3 = strlen("155");
  return (int)sVar3 + (int)sVar1 + (int)sVar2;
}



/* Function: call_stringize @ 0010138e */

void call_stringize(void)

{
  param_stringize(0);
  return;
}



/* Function: my_func @ 001013a2 */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 001013bb */

int param_token_paste(int param_1)

{
  int iVar1;
  
  iVar1 = my_func(param_1);
  return iVar1 + param_1 + 5;
}



/* Function: call_token_paste @ 001013eb */

void call_token_paste(void)

{
  param_token_paste(5);
  return;
}



/* Function: param_variadic_macro @ 001013ff */

int param_variadic_macro(uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,(ulong)param_2,(ulong)param_3);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00101472 */

void call_variadic_macro(void)

{
  param_variadic_macro(10,0x14,0x1e);
  return;
}



/* Function: param_macro_override @ 00101490 */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 001014b6 */

void call_macro_override(void)

{
  param_macro_override(5);
  return;
}



/* Function: header_func @ 001014ca */

int header_func(int param_1)

{
  return param_1 * 100;
}



/* Function: param_include_guard @ 001014dd */

void param_include_guard(void)

{
  header_func(5);
  return;
}



/* Function: call_include_guard @ 001014f1 */

void call_include_guard(void)

{
  param_include_guard();
  return;
}



/* Function: param_builtin_macros @ 00101505 */

int param_builtin_macros(int param_1)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:25");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 001015a5 */

void call_builtin_macros(void)

{
  param_builtin_macros(100);
  return;
}



/* Function: test_preprocessing_features @ 001015b9 */

void test_preprocessing_features(void)

{
  uint uVar1;
  
  puts(&DAT_00102090);
  uVar1 = call_macro_constants();
  printf(&DAT_001020b7,(ulong)uVar1);
  uVar1 = call_macro_functions();
  printf(&DAT_001020d2,(ulong)uVar1);
  uVar1 = call_conditional_compile();
  printf(&DAT_001020ed,(ulong)uVar1);
  uVar1 = call_multi_branch_compile();
  printf(&DAT_00102108,(ulong)uVar1);
  uVar1 = call_macro_recursion();
  printf(&DAT_00102127,(ulong)uVar1);
  uVar1 = call_stringize();
  printf(&DAT_00102148,(ulong)uVar1);
  uVar1 = call_token_paste();
  printf(&DAT_00102172,(ulong)uVar1);
  uVar1 = call_variadic_macro();
  printf(&DAT_0010218d,(ulong)uVar1);
  uVar1 = call_macro_override();
  printf(&DAT_001021a8,(ulong)uVar1);
  uVar1 = call_include_guard();
  printf(&DAT_001021c3,(ulong)uVar1);
  uVar1 = call_builtin_macros();
  printf(&DAT_001021e0,(ulong)uVar1);
  return;
}



/* Function: param_asm_basic @ 00101733 */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 00101750 */

void call_asm_basic(void)

{
  param_asm_basic(5);
  return;
}



/* Function: param_asm_clobber @ 00101764 */

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



/* Function: call_asm_clobber @ 0010179a */

void call_asm_clobber(void)

{
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 1;
  local_24 = 2;
  local_20 = 3;
  local_1c = 4;
  local_18 = 5;
  param_asm_clobber(&local_28,5);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_asm_multi_insn @ 001017ff */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Function: call_asm_multi_insn @ 0010184d */

undefined8 call_asm_multi_insn(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_42;
  undefined2 local_3a;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_42 = 0x5341206f6c6c6548;
  local_3a = 0x4d;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  param_asm_multi_insn(&local_38,&local_42,9);
  if (((char)local_38 == 'H') && (local_38._4_1_ == 'o')) {
    uVar1 = 0x2a;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* Function: param_asm_simd @ 001018e6 */

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



/* Function: param_simd_intrinsics @ 0010191a */

undefined8 param_simd_intrinsics(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  local_28 = (int)*param_1;
  iStack_24 = (int)((ulong)*param_1 >> 0x20);
  iStack_20 = (int)param_1[1];
  iStack_1c = (int)((ulong)param_1[1] >> 0x20);
  local_18 = (int)*param_2;
  iStack_14 = (int)((ulong)*param_2 >> 0x20);
  iStack_10 = (int)param_2[1];
  iStack_c = (int)((ulong)param_2[1] >> 0x20);
  *param_3 = CONCAT44(iStack_14 + iStack_24,local_18 + local_28);
  param_3[1] = CONCAT44(iStack_c + iStack_1c,iStack_10 + iStack_20);
  return 0;
}



/* Function: call_asm_simd @ 001019b5 */

int call_asm_simd(void)

{
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 1;
  local_44 = 2;
  local_40 = 3;
  local_3c = 4;
  local_38 = 5;
  local_34 = 6;
  local_30 = 7;
  local_2c = 8;
  param_asm_simd(&local_48,&local_38,&local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1c + local_28 + local_24 + local_20;
}



/* Function: param_asm_atomic @ 00101a47 */

int param_asm_atomic(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return param_2 + iVar1;
}



/* Function: param_atomic_c11 @ 00101a6e */

int param_atomic_c11(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return param_2 + iVar1;
}



/* Function: call_asm_atomic @ 00101a8f */

int call_asm_atomic(void)

{
  long in_FS_OFFSET;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 10;
  local_14 = param_asm_atomic(&local_18,5);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14 + local_18;
}



/* Function: param_dynamic_code @ 00101ae3 */

undefined4 param_dynamic_code(undefined4 param_1)

{
  long lVar1;
  undefined4 uVar2;
  size_t __len;
  code *__addr;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (code *)0xffffffffffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)__addr = 0xc083f889;
    *(undefined2 *)(__addr + 4) = 0xc305;
    uVar2 = (*__addr)(param_1);
    munmap(__addr,__len);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: param_memory_protection @ 00101ba8 */

undefined4 param_memory_protection(void)

{
  int iVar1;
  undefined4 uVar2;
  size_t __len;
  undefined4 *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
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
        munmap(__addr,__len);
        uVar2 = 0xfffffffd;
      }
    }
    else {
      munmap(__addr,__len);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



/* Function: param_clobber_importance @ 00101ca7 */

int param_clobber_importance(int param_1,int param_2)

{
  return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00101cdd */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  iVar3 = param_clobber_importance(3,7);
  if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
    iVar1 = 0x4d;
  }
  return iVar1;
}



/* Function: param_memory_clobber_demo @ 00101d33 */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00101d57 */

void test_asm_features(void)

{
  uint uVar1;
  
  puts(&DAT_00102210);
  uVar1 = call_asm_basic();
  printf(&DAT_0010223a,(ulong)uVar1);
  uVar1 = call_asm_clobber();
  printf(&DAT_00102256,(ulong)uVar1);
  uVar1 = call_asm_multi_insn();
  printf(&DAT_00102272,(ulong)uVar1);
  uVar1 = call_asm_simd();
  printf(&DAT_0010228e,(ulong)uVar1);
  uVar1 = call_asm_atomic();
  printf(&DAT_001022aa,(ulong)uVar1);
  uVar1 = call_asm_privileged();
  printf(&DAT_001022c6,(ulong)uVar1);
  return;
}



/* Function: main @ 00101e31 */

undefined8 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: _fini @ 00101e54 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 51 */
