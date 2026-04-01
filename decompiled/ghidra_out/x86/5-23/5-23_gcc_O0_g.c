/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-23/5-23_gcc_O0_g
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



/* Function: _start @ 00011170 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001119c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111a0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000111b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111cb) */
/* WARNING: Removing unreachable block (ram,0x000111d5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000111f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001121e) */
/* WARNING: Removing unreachable block (ram,0x00011228) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011240 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001129c) */
/* WARNING: Removing unreachable block (ram,0x000112a0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000112d9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000112dd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_macro_constants @ 000112e1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_macro_constants(int size)

{
  int iVar1;
  
  if (size < 0x401) {
    iVar1 = 0x200;
  }
  else {
    iVar1 = 0x40;
  }
  return iVar1;
}



/* Function: call_macro_constants @ 00011309 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
  int iVar1;
  
  iVar1 = param_macro_constants(0x800);
  return iVar1;
}



/* Function: param_macro_functions @ 00011329 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_macro_functions(int x,int y)

{
  int iVar1;
  
  iVar1 = x * x;
  if (x <= y) {
    x = y;
  }
  return x + iVar1;
}



/* Function: call_macro_functions @ 00011351 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
  int iVar1;
  
  iVar1 = param_macro_functions(5,3);
  return iVar1;
}



/* Function: param_conditional_compile @ 00011370 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_conditional_compile(int x)

{
  int result;
  
  return x * 3 + 2;
}



/* Function: call_conditional_compile @ 0001139e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
  int iVar1;
  
  iVar1 = param_conditional_compile(10);
  return iVar1;
}



/* Function: param_multi_branch_compile @ 000113bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_multi_branch_compile(int x)

{
  return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 000113dd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
  int iVar1;
  
  iVar1 = param_multi_branch_compile(10);
  return iVar1;
}



/* Function: param_macro_recursion @ 000113fa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_macro_recursion(int x)

{
  return x + 0x10;
}



/* Function: call_macro_recursion @ 00011413 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
  int iVar1;
  
  iVar1 = param_macro_recursion(100);
  return iVar1;
}



/* Function: param_stringize @ 00011430 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_stringize(int value)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  char *str1;
  char *str2;
  char *str3;
  
  sVar1 = strlen("Hello World");
  sVar2 = strlen("1.2.3");
  sVar3 = strlen("155");
  return sVar3 + sVar1 + sVar2;
}



/* Function: call_stringize @ 00011499 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
  int iVar1;
  
  iVar1 = param_stringize(0);
  return iVar1;
}



/* Function: my_func @ 000114bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int my_func(int x)

{
  return x * 10;
}



/* Function: param_token_paste @ 000114db */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_token_paste(int x)

{
  int iVar1;
  int result;
  int temp__LINE__;
  
  iVar1 = my_func(x);
  return iVar1 + x + 5;
}



/* Function: call_token_paste @ 00011511 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
  int iVar1;
  
  iVar1 = param_token_paste(5);
  return iVar1;
}



/* Function: param_variadic_macro @ 0001152e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_variadic_macro(int x,int y,int z)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int count;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  printf("LOG: Values: %d, %d, %d\n",x,y,z);
  iVar2 = x + 0x32;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_variadic_macro @ 00011599 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
  int iVar1;
  
  iVar1 = param_variadic_macro(10,0x14,0x1e);
  return iVar1;
}



/* Function: param_macro_override @ 000115c0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_macro_override(int x)

{
  int r1;
  int r2;
  
  return x * 3 + 1;
}



/* Function: call_macro_override @ 000115ef */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
  int iVar1;
  
  iVar1 = param_macro_override(5);
  return iVar1;
}



/* Function: header_func @ 0001160c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int header_func(int x)

{
  return x * 100;
}



/* Function: param_include_guard @ 00011625 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
  int iVar1;
  
  iVar1 = header_func(5);
  return iVar1;
}



/* Function: call_include_guard @ 00011642 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
  int iVar1;
  
  iVar1 = param_include_guard();
  return iVar1;
}



/* Function: param_builtin_macros @ 0001165a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_builtin_macros(int x)

{
  char *file;
  int line;
  char *func;
  char *date;
  char *time;
  int counter1;
  int counter2;
  int counter3;
  
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","02:59:44");
  return x + 0x11a;
}



/* Function: call_builtin_macros @ 000116ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
  int iVar1;
  
  iVar1 = param_builtin_macros(100);
  return iVar1;
}



/* Function: test_preprocessing_features @ 00011711 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
  int iVar1;
  
  puts(&DAT_00012088);
  iVar1 = call_macro_constants();
  printf(&DAT_000120af,iVar1);
  iVar1 = call_macro_functions();
  printf(&DAT_000120ca,iVar1);
  iVar1 = call_conditional_compile();
  printf(&DAT_000120e5,iVar1);
  iVar1 = call_multi_branch_compile();
  printf(&DAT_00012100,iVar1);
  iVar1 = call_macro_recursion();
  printf(&DAT_0001211f,iVar1);
  iVar1 = call_stringize();
  printf(&DAT_0001213c,iVar1);
  iVar1 = call_token_paste();
  printf(&DAT_00012166,iVar1);
  iVar1 = call_variadic_macro();
  printf(&DAT_00012181,iVar1);
  iVar1 = call_macro_override();
  printf(&DAT_0001219c,iVar1);
  iVar1 = call_include_guard();
  printf(&DAT_000121b7,iVar1);
  iVar1 = call_builtin_macros();
  printf(&DAT_000121d4,iVar1);
  return;
}



/* Function: param_asm_basic @ 00011847 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_asm_basic(int x)

{
  int result;
  
  return x + 10;
}



/* Function: call_asm_basic @ 0001186d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
  int iVar1;
  
  iVar1 = param_asm_basic(5);
  return iVar1;
}



/* Function: param_asm_clobber @ 0001188a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_asm_clobber(int *arr,int n)

{
  int iVar1;
  int iVar2;
  int sum;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + arr[iVar2];
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 000118c7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int arr [5];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  iVar2 = param_asm_clobber(arr,5);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_asm_multi_insn @ 0001192a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
  for (; n != 0; n = n - 1) {
    *(undefined1 *)dst = *(undefined1 *)src;
    dst = (void *)((int)dst + 1);
    src = (void *)((int)src + 1);
  }
  return;
}



/* Function: call_asm_multi_insn @ 00011969 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char src [10];
  char dst [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  builtin_strncpy(src,"Hello ASM",10);
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
  param_asm_multi_insn(dst,src,9);
  if ((dst[0] == 'H') && (dst[4] == 'o')) {
    iVar2 = 0x2a;
  }
  else {
    iVar2 = -1;
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_asm_simd @ 00011a15 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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



/* Function: param_simd_intrinsics @ 00011a43 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_simd_intrinsics(int *a,int *b,int *result)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  __m128i vec_a;
  __m128i vec_b;
  __m128i vec_sum;
  
  iVar1 = a[1];
  iVar2 = a[2];
  iVar3 = a[3];
  iVar4 = b[1];
  iVar5 = b[2];
  iVar6 = b[3];
  *result = *b + *a;
  result[1] = iVar4 + iVar1;
  result[2] = iVar5 + iVar2;
  result[3] = iVar6 + iVar3;
  return 0;
}



/* Function: call_asm_simd @ 00011abf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int a [4];
  int b [4];
  int result [4];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  b[0] = 5;
  b[1] = 6;
  b[2] = 7;
  b[3] = 8;
  param_asm_simd(a,b,result);
  iVar2 = result[3] + result[0] + result[1] + result[2];
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_asm_atomic @ 00011b4f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_asm_atomic(int *counter,int increment)

{
  int iVar1;
  int old_value;
  
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return increment + iVar1;
}



/* Function: param_atomic_c11 @ 00011b7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_atomic_c11(int *counter,int increment)

{
  int iVar1;
  
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return increment + iVar1;
}



/* Function: call_asm_atomic @ 00011b9c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int counter;
  int new_val;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  counter = 10;
  new_val = param_asm_atomic(&counter,5);
  iVar1 = new_val + counter;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_dynamic_code @ 00011bee */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_dynamic_code(int x)

{
  size_t __len;
  void *__addr;
  int iVar1;
  size_t page_size;
  void *exec_mem;
  int result;
  
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



/* Function: param_memory_protection @ 00011c5e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
  size_t __len;
  int *__addr;
  int iVar1;
  int iVar2;
  size_t page_size;
  void *mem;
  int *data;
  int value;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (int *)0xffffffff) {
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
        munmap(__addr,__len);
        iVar1 = -3;
      }
    }
    else {
      munmap(__addr,__len);
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: param_clobber_importance @ 00011d46 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_clobber_importance(int a,int b)

{
  int result1;
  int result2;
  
  return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00011d82 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int r1;
  int r2;
  int r3;
  
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  iVar3 = param_clobber_importance(3,7);
  if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
    iVar1 = 0x4d;
  }
  return iVar1;
}



/* Function: param_memory_clobber_demo @ 00011dde */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
  int local;
  int result;
  
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00011e0f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
  int iVar1;
  
  puts(&DAT_00012200);
  iVar1 = call_asm_basic();
  printf(&DAT_0001222a,iVar1);
  iVar1 = call_asm_clobber();
  printf(&DAT_00012246,iVar1);
  iVar1 = call_asm_multi_insn();
  printf(&DAT_00012262,iVar1);
  iVar1 = call_asm_simd();
  printf(&DAT_0001227e,iVar1);
  iVar1 = call_asm_atomic();
  printf(&DAT_0001229a,iVar1);
  iVar1 = call_asm_privileged();
  printf(&DAT_000122b6,iVar1);
  return;
}



/* Function: main @ 00011ecd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00011ef2 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00011ef6 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 00011f00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011f20 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011f3a) */
/* WARNING: Removing unreachable block (ram,0x00011f50) */
/* WARNING: Removing unreachable block (ram,0x00011f5d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011f6c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 59 */
