/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-23/5-23_gcc_O3_g
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



/* Function: main @ 00101100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: _start @ 00101120 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101150 */

/* WARNING: Removing unreachable block (ram,0x00101163) */
/* WARNING: Removing unreachable block (ram,0x0010116f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101180 */

/* WARNING: Removing unreachable block (ram,0x001011a4) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011c0 */

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



/* Function: param_macro_constants @ 00101210 */

int param_macro_constants(int size)

{
  int iVar1;
  
  iVar1 = 0x200;
  if (0x400 < size) {
    iVar1 = 0x40;
  }
  return iVar1;
}



/* Function: call_macro_constants @ 00101230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00101240 */

int param_macro_functions(int x,int y)

{
  int iVar1;
  
  iVar1 = x * x;
  if (x < y) {
    x = y;
  }
  return iVar1 + x;
}



/* Function: call_macro_functions @ 00101260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 00101270 */

int param_conditional_compile(int x)

{
  return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 00101290 */

int param_multi_branch_compile(int x)

{
  return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 001012a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 001012b0 */

int param_macro_recursion(int x)

{
  return x + 0x10;
}



/* Function: call_macro_recursion @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 001012d0 */

int param_stringize(int value)

{
  return 0x13;
}



/* Function: call_stringize @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 001012f0 */

int my_func(int x)

{
  return x * 10;
}



/* Function: param_token_paste @ 00101300 */

int param_token_paste(int x)

{
  return x * 0xb + 5;
}



/* Function: call_token_paste @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 00101320 */

int param_variadic_macro(int x,int y,int z)

{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
  return x + 0x32;
}



/* Function: call_variadic_macro @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
                    /* Unresolved local var: int count@[???] */
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: param_macro_override @ 00101390 */

int param_macro_override(int x)

{
  return x * 3 + 1;
}



/* Function: call_macro_override @ 001013a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 001013b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 001013c0 */

undefined8 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 001013d0 */

int param_builtin_macros(int x)

{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:00:34");
  return x + 0x11a;
}



/* Function: call_builtin_macros @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
                    /* Unresolved local var: char * file@[???]
                       Unresolved local var: int line@[???]
                       Unresolved local var: char * func@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: int counter1@[???]
                       Unresolved local var: int counter2@[???]
                       Unresolved local var: int counter3@[???] */
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:00:34");
  return 0x17e;
}



/* Function: test_preprocessing_features @ 00101470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
                    /* Unresolved local var: int count@[???] */
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  __printf_chk(1,&DAT_001020c5,0x3c);
  __printf_chk(1,&DAT_001020e0,0x10);
  __printf_chk(1,&DAT_001020fb,500);
                    /* Unresolved local var: char * file@[???]
                       Unresolved local var: int line@[???]
                       Unresolved local var: char * func@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: int counter1@[???]
                       Unresolved local var: int counter2@[???]
                       Unresolved local var: int counter3@[???] */
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:00:34");
  __printf_chk(1,&DAT_00102268,0x17e);
  return;
}



/* Function: param_asm_basic @ 00101600 */

int param_asm_basic(int x)

{
  return x + 10;
}



/* Function: call_asm_basic @ 00101610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
                    /* Unresolved local var: int result@[???] */
  return 0xf;
}



/* Function: param_asm_clobber @ 00101630 */

int param_asm_clobber(int *arr,int n)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; (int)uVar2 < n; uVar2 = (ulong)((int)uVar2 + 1)) {
    iVar1 = iVar1 + arr[uVar2];
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 00101650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int arr [5];
  
                    /* Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
    iVar1 = iVar1 + arr[uVar2];
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_asm_multi_insn @ 001016a0 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
  for (; n != 0; n = n - 1) {
    *(undefined1 *)dst = *(undefined1 *)src;
    dst = (void *)((long)dst + 1);
    src = (void *)((long)src + 1);
  }
  return;
}



/* Function: call_asm_multi_insn @ 001016c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  char src [10];
  char dst [32];
  
  lVar5 = 9;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = dst;
  dst[0] = '\0';
  dst[1] = '\0';
  dst[2] = '\0';
  dst[3] = '\0';
  dst[4] = '\0';
  dst[5] = '\0';
  dst[6] = '\0';
  dst[7] = '\0';
  dst[8] = '\0';
  dst[9] = '\0';
  dst[10] = '\0';
  dst[0xb] = '\0';
  dst[0xc] = '\0';
  dst[0xd] = '\0';
  dst[0xe] = '\0';
  dst[0xf] = '\0';
  pcVar3 = src;
  dst[0x10] = '\0';
  dst[0x11] = '\0';
  dst[0x12] = '\0';
  dst[0x13] = '\0';
  dst[0x14] = '\0';
  dst[0x15] = '\0';
  dst[0x16] = '\0';
  dst[0x17] = '\0';
  dst[0x18] = '\0';
  dst[0x19] = '\0';
  dst[0x1a] = '\0';
  dst[0x1b] = '\0';
  dst[0x1c] = '\0';
  dst[0x1d] = '\0';
  dst[0x1e] = '\0';
  dst[0x1f] = '\0';
  builtin_strncpy(src,"Hello ASM",10);
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar4 = *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (dst[0] == 'H') {
    iVar2 = -1;
    if (dst[4] == 'o') {
      iVar2 = 0x2a;
    }
  }
  else {
    iVar2 = -1;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_asm_simd @ 00101760 */

int param_asm_simd(int *a,int *b,int *result)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = a[1];
  iVar2 = a[2];
  iVar3 = a[3];
  iVar4 = b[1];
  iVar5 = b[2];
  iVar6 = b[3];
  *result = *a + *b;
  result[1] = iVar1 + iVar4;
  result[2] = iVar2 + iVar5;
  result[3] = iVar3 + iVar6;
  return 0;
}



/* Function: param_simd_intrinsics @ 00101780 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = b[1];
  iVar2 = b[2];
  iVar3 = b[3];
  iVar4 = a[1];
  iVar5 = a[2];
  iVar6 = a[3];
  *result = *b + *a;
  result[1] = iVar1 + iVar4;
  result[2] = iVar2 + iVar5;
  result[3] = iVar3 + iVar6;
  return 0;
}



/* Function: call_asm_simd @ 001017a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
  long in_FS_OFFSET;
  int a [4];
  int b [4];
  int result [4];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_asm_atomic @ 00101820 */

int param_asm_atomic(int *counter,int increment)

{
  int iVar1;
  
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00101830 */

int param_atomic_c11(int *counter,int increment)

{
  int iVar1;
  
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00101840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
  long in_FS_OFFSET;
  int counter;
  
                    /* Unresolved local var: int old_value@[???] */
  LOCK();
  UNLOCK();
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x1e;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_dynamic_code @ 00101890 */

int param_dynamic_code(int x)

{
  long lVar1;
  int iVar2;
  size_t __len;
  code *__addr;
  long in_FS_OFFSET;
  uchar code [6];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (code *)0xffffffffffffffff) {
    iVar2 = -1;
  }
  else {
    *(undefined4 *)__addr = 0xc083f889;
    *(undefined2 *)(__addr + 4) = 0xc305;
    iVar2 = (*__addr)(x);
    munmap(__addr,__len);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_memory_protection @ 00101930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
  int iVar1;
  int iVar2;
  size_t __len;
  int *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (int *)0xffffffffffffffff) {
    iVar1 = -1;
  }
  else {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    if (iVar1 == 0) {
      iVar1 = *__addr;
      iVar2 = mprotect(__addr,__len,3);
      if (iVar2 == 0) {
        *__addr = 100;
        munmap(__addr,__len);
      }
      else {
        iVar1 = -3;
        munmap(__addr,__len);
      }
    }
    else {
      iVar1 = -2;
      munmap(__addr,__len);
    }
  }
  return iVar1;
}



/* Function: param_clobber_importance @ 00101a00 */

int param_clobber_importance(int a,int b)

{
  return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00101a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t __len;
  code *__addr;
  long in_FS_OFFSET;
  bool bVar4;
  uchar code [6];
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: func_t dynamic_func@[???]
                       Unresolved local var: int result@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (code *)0xffffffffffffffff) {
    bVar4 = false;
    iVar2 = -1;
  }
  else {
    *(undefined4 *)__addr = 0xc083f889;
    *(undefined2 *)(__addr + 4) = 0xc305;
    iVar2 = (*__addr)(10);
    munmap(__addr,__len);
    bVar4 = iVar2 == 0xf;
  }
  iVar3 = param_memory_protection();
                    /* Unresolved local var: int result1@[???]
                       Unresolved local var: int result2@[???] */
  if ((iVar3 == 0x2a) && (bVar4)) {
    iVar2 = 0x4d;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_memory_clobber_demo @ 00101b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00101b30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  int counter;
  int a [4];
  int b [4];
  int arr [5];
  char src [10];
  char dst [32];
  
                    /* Unresolved local var: int result@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __printf_chk(1,&DAT_00102298);
  __printf_chk(1,&DAT_00102117,0xf);
                    /* Unresolved local var: int sum@[???] */
  iVar2 = 0;
  for (uVar3 = 0; (int)uVar3 < 5; uVar3 = (ulong)((int)uVar3 + 1)) {
    iVar2 = iVar2 + arr[uVar3];
  }
  __printf_chk(1,&DAT_00102133,iVar2);
  pcVar5 = dst;
  builtin_strncpy(src,"Hello ASM",10);
  pcVar4 = src;
  dst[0] = '\0';
  dst[1] = '\0';
  dst[2] = '\0';
  dst[3] = '\0';
  dst[4] = '\0';
  dst[5] = '\0';
  dst[6] = '\0';
  dst[7] = '\0';
  dst[8] = '\0';
  dst[9] = '\0';
  dst[10] = '\0';
  dst[0xb] = '\0';
  dst[0xc] = '\0';
  dst[0xd] = '\0';
  dst[0xe] = '\0';
  dst[0xf] = '\0';
  dst[0x10] = '\0';
  dst[0x11] = '\0';
  dst[0x12] = '\0';
  dst[0x13] = '\0';
  dst[0x14] = '\0';
  dst[0x15] = '\0';
  dst[0x16] = '\0';
  dst[0x17] = '\0';
  dst[0x18] = '\0';
  dst[0x19] = '\0';
  dst[0x1a] = '\0';
  dst[0x1b] = '\0';
  dst[0x1c] = '\0';
  dst[0x1d] = '\0';
  dst[0x1e] = '\0';
  dst[0x1f] = '\0';
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pcVar5 = *pcVar4;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  }
  if (dst[0] == 'H') {
    uVar6 = 0xffffffff;
    if (dst[4] == 'o') {
      uVar6 = 0x2a;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  __printf_chk(1,&DAT_0010214f,uVar6);
  arr[0] = 6;
  arr[1] = 8;
  arr[2] = 10;
  arr[3] = 0xc;
  __printf_chk(1,&DAT_0010216b,0x24);
                    /* Unresolved local var: int new_val@[???]
                       Unresolved local var: int old_value@[???] */
  LOCK();
  UNLOCK();
  __printf_chk(1,&DAT_00102187,0x1e);
  call_asm_privileged();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_001021a3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: _fini @ 00101cf0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 50 */
