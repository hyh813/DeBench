/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/5-23/5-23_clang_O2_g
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



/* Function: param_macro_constants @ 00011240 */

int param_macro_constants(int size)

{
  int iVar1;
  
  iVar1 = 0x200;
  if (0x400 < size) {
    iVar1 = 0x40;
  }
  return iVar1;
}



/* Function: call_macro_constants @ 00011260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00011270 */

int param_macro_functions(int x,int y)

{
  if (y < x) {
    y = x;
  }
  return y + x * x;
}



/* Function: call_macro_functions @ 00011290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 000112a0 */

int param_conditional_compile(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg4(ESP): +4] */
  return x * 3 + 2;
}



/* Function: call_conditional_compile @ 000112b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 000112c0 */

int param_multi_branch_compile(int x)

{
  return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 000112d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 000112e0 */

int param_macro_recursion(int x)

{
  return x + 0x10;
}



/* Function: call_macro_recursion @ 000112f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 00011300 */

int param_stringize(int value)

{
                    /* Unresolved local var: char * str1@[???]
                       Unresolved local var: char * str2@[???]
                       Unresolved local var: char * str3@[???] */
  return 0x13;
}



/* Function: call_stringize @ 00011310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 00011320 */

int my_func(int x)

{
  return x * 10;
}



/* Function: param_token_paste @ 00011330 */

int param_token_paste(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int temp__LINE__@[???] */
  return x * 0xb + 5;
}



/* Function: call_token_paste @ 00011340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 00011350 */

int __regparm1 param_variadic_macro(int x,int y,int z)

{
                    /* Unresolved local var: int count@[???] */
  printf("LOG: Values: %d, %d, %d\n",y,z);
  return y + 0x32;
}



/* Function: call_variadic_macro @ 00011390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
                    /* Unresolved local var: int count@[???] */
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: param_macro_override @ 000113c0 */

int param_macro_override(int x)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return x * 3 + 1;
}



/* Function: call_macro_override @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 00011400 */

int param_builtin_macros(int x)

{
                    /* Unresolved local var: int line@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * func@[???]
                       Unresolved local var: char * file@[???]
                       Unresolved local var: int counter3@[???]
                       Unresolved local var: int counter2@[???]
                       Unresolved local var: int counter1@[???] */
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:11");
  return x + 0x11a;
}



/* Function: call_builtin_macros @ 00011450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
                    /* Unresolved local var: int line@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * func@[???]
                       Unresolved local var: char * file@[???]
                       Unresolved local var: int counter3@[???]
                       Unresolved local var: int counter2@[???]
                       Unresolved local var: int counter1@[???] */
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:11");
  return 0x17e;
}



/* Function: test_preprocessing_features @ 000114a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
                    /* Unresolved local var: int line@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * func@[???]
                       Unresolved local var: char * file@[???] */
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:11");
  printf(&DAT_000121ee,0x17e);
  return;
}



/* Function: param_asm_basic @ 000115d0 */

int param_asm_basic(int x)

{
                    /* Unresolved local var: int result@[???] */
  return x + 10;
}



/* Function: call_asm_basic @ 000115e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 000115f0 */

int param_asm_clobber(int *arr,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + arr[iVar2];
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 00011610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
  int iVar1;
  int iVar2;
  int local_1c [6];
  
                    /* Unresolved local var: int[5] arr@[???] */
  local_1c[4] = 5;
  local_1c[0] = 1;
  local_1c[1] = 2;
  local_1c[2] = 3;
  local_1c[3] = 4;
                    /* Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + local_1c[iVar2];
  }
  return iVar1;
}



/* Function: param_asm_multi_insn @ 00011660 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
  for (; n != 0; n = n - 1) {
    *(undefined1 *)dst = *(undefined1 *)src;
    dst = (void *)((int)dst + 1);
    src = (void *)((int)src + 1);
  }
  return;
}



/* Function: call_asm_multi_insn @ 00011680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char local_38 [12];
  char local_2c [40];
  
                    /* Unresolved local var: char[10] src@[???]
                       Unresolved local var: char[32] dst@[???] */
  builtin_strncpy(local_38 + 4,"o ASM",6);
  builtin_strncpy(local_38,"Hell",4);
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
  pcVar1 = local_2c;
  pcVar2 = local_38;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pcVar1 = *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  }
  iVar3 = -1;
  if (local_2c[4] == 'o' && local_2c[0] == 'H') {
    iVar3 = 0x2a;
  }
  return iVar3;
}



/* Function: param_asm_simd @ 000116f0 */

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



/* Function: param_simd_intrinsics @ 00011710 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* Unresolved local var: __m128i vec_sum@[???]
                       Unresolved local var: __m128i vec_a@[???]
                       Unresolved local var: __m128i vec_b@[???] */
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



/* Function: call_asm_simd @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
                    /* Unresolved local var: int[4] a@[???]
                       Unresolved local var: int[4] b@[???]
                       Unresolved local var: int[4] result@[???] */
  return 0x24;
}



/* Function: param_asm_atomic @ 00011790 */

int param_asm_atomic(int *counter,int increment)

{
  int iVar1;
  
                    /* Unresolved local var: int old_value@[???] */
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 000117b0 */

int param_atomic_c11(int *counter,int increment)

{
  int iVar1;
  
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return iVar1 + increment;
}



/* Function: call_asm_atomic @ 000117d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
                    /* Unresolved local var: int counter@[???]
                       Unresolved local var: int new_val@[???] */
  LOCK();
  UNLOCK();
  return 0x1e;
}



/* Function: param_dynamic_code @ 000117f0 */

int param_dynamic_code(int x)

{
  size_t __len;
  void *__addr;
  int iVar1;
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: int result@[???] */
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffff) {
    iVar1 = -1;
  }
  else {
    iVar1 = x + 5;
    munmap(__addr,__len);
  }
  return iVar1;
}



/* Function: param_memory_protection @ 00011860 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
  size_t __len;
  int *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * mem@[???]
                       Unresolved local var: int * data@[???]
                       Unresolved local var: int value@[???] */
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (int *)0xffffffff) {
    iVar3 = -1;
  }
  else {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    iVar3 = -2;
    if (iVar1 == 0) {
      iVar1 = *__addr;
      iVar2 = mprotect(__addr,__len,3);
      iVar3 = -3;
      if (iVar2 == 0) {
        *__addr = 100;
        iVar3 = iVar1;
      }
    }
    munmap(__addr,__len);
  }
  return iVar3;
}



/* Function: param_clobber_importance @ 00011920 */

int param_clobber_importance(int a,int b)

{
                    /* Unresolved local var: int result1@[???]
                       Unresolved local var: int result2@[???] */
  return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00011940 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
  size_t __len;
  void *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: int result@[???] */
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffff) {
    iVar3 = -1;
  }
  else {
    munmap(__addr,__len);
    iVar3 = 0xf;
  }
  iVar1 = param_memory_protection();
                    /* Unresolved local var: int result1@[???]
                       Unresolved local var: int result2@[???] */
  iVar2 = 0x4d;
  if (iVar1 != 0x2a) {
    iVar2 = iVar3;
  }
  if (__addr == (void *)0xffffffff) {
    iVar2 = iVar3;
  }
  return iVar2;
}



/* Function: param_memory_clobber_demo @ 000119e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
                    /* Unresolved local var: int local@[???]
                       Unresolved local var: int result@[???] */
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00011a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
  int iVar1;
  undefined4 uVar2;
  size_t __len;
  void *__addr;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puts(&DAT_000122f0);
  printf(&DAT_00012221,0xf);
                    /* Unresolved local var: int[5] arr@[???] */
  local_3c = 5;
  local_4c = 1;
  uStack_48 = 2;
  uStack_44 = 3;
  uStack_40 = 4;
  piVar4 = &local_4c;
                    /* Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = iVar1 + piVar4[iVar3];
  }
  printf(&DAT_0001223d,iVar1);
                    /* Unresolved local var: char[10] src@[???]
                       Unresolved local var: char[32] dst@[???] */
  uStack_54 = CONCAT22(uStack_54._2_2_,0x4d);
  uStack_58 = 0x5341206f;
  local_5c = 0x6c6c6548;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  puVar5 = &local_5c;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)piVar4 = *(undefined1 *)puVar5;
    piVar4 = (int *)((int)piVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar2 = 0x2a;
  uVar6 = 0xffffffff;
  if ((char)uStack_48 != 'o' || (char)local_4c != 'H') {
    uVar2 = 0xffffffff;
  }
  printf(&DAT_00012259,uVar2);
                    /* Unresolved local var: int[4] a@[???]
                       Unresolved local var: int[4] b@[???]
                       Unresolved local var: int[4] result@[???] */
  local_4c = 1;
  uStack_48 = 2;
  uStack_44 = 3;
  uStack_40 = 4;
  local_5c = 5;
  uStack_58 = 6;
  uStack_54 = 7;
  uStack_50 = 8;
  local_2c = 6;
  uStack_28 = 8;
  uStack_24 = 10;
  uStack_20 = 0xc;
  printf(&DAT_00012275,0x24);
                    /* Unresolved local var: int counter@[???] */
  LOCK();
  local_4c = 0xf;
  UNLOCK();
  printf(&DAT_00012291,0x1e);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: int result@[???] */
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr != (void *)0xffffffff) {
    munmap(__addr,__len);
    uVar6 = 0xf;
  }
  iVar1 = param_memory_protection();
                    /* Unresolved local var: int result1@[???]
                       Unresolved local var: int result2@[???] */
  uVar2 = 0x4d;
  if (iVar1 != 0x2a) {
    uVar2 = uVar6;
  }
  if (__addr == (void *)0xffffffff) {
    uVar2 = uVar6;
  }
  printf(&DAT_000122ad,uVar2);
  return;
}



/* Function: main @ 00011c10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00011c40 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011c5a) */
/* WARNING: Removing unreachable block (ram,0x00011c70) */
/* WARNING: Removing unreachable block (ram,0x00011c7d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011c8c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 55 */
