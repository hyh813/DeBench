/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/6/6_gcc_Os_no_g
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



/* Function: main @ 00011750 */

undefined4 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _start @ 00011770 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001179c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000117a0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000117b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000117cb) */
/* WARNING: Removing unreachable block (ram,0x000117d5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000117f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001181e) */
/* WARNING: Removing unreachable block (ram,0x00011828) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011840 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001189c) */
/* WARNING: Removing unreachable block (ram,0x000118a0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000118d9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000118dd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: signal_handler @ 000118e1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: thread_sum @ 00011907 */

undefined4 thread_sum(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[2] = 0;
  for (; iVar1 <= param_1[1]; iVar1 = iVar1 + 1) {
    param_1[2] = param_1[2] + iVar1;
  }
  return 0;
}



/* Function: thread_compute @ 0001192b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}



/* Function: thread_increment @ 0001195a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 thread_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}



/* Function: consumer_thread @ 000119c1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void consumer_thread(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  while (uVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar2 = malloc(4);
  *puVar2 = uVar1;
  return;
}



/* Function: producer_thread @ 00011a2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 producer_thread(void)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}



/* Function: thread_atomic_increment @ 00011a89 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
    LOCK();
    iVar1 = atomic_counter + 1;
    UNLOCK();
    atomic_counter = iVar2 + 1000;
    LOCK();
    if (iVar2 != iVar1) {
      atomic_counter = iVar1;
    }
    UNLOCK();
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 00011ac8 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

undefined4 thread_atomic_load_store(void)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return 0;
}



/* Function: thread_tls_test @ 00011ae9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void thread_tls_test(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_GS_OFFSET;
  
  iVar2 = in_GS_OFFSET[-9];
  iVar1 = iVar2 + 0x32;
  in_GS_OFFSET[-9] = iVar1;
  strncpy((char *)(*in_GS_OFFSET + -0x20),param_1,0x1f);
  piVar3 = malloc(8);
  *piVar3 = iVar2;
  piVar3[1] = iVar1;
  return;
}



/* Function: param_strcpy @ 00011b43 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_strcpy(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}



/* Function: call_strcpy @ 00011b77 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_strcpy(void)

{
  int in_GS_OFFSET;
  undefined1 local_30 [32];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  param_strcpy(local_30,"HelloLib");
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: param_strcmp @ 00011bba */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(param_1,param_2);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_strcmp @ 00011bf6 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_00014015,&DAT_00014011);
  iVar2 = param_strcmp(&DAT_00014019,&DAT_00014019);
  iVar3 = param_strcmp(&DAT_00014021,&DAT_0001401d);
  return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00011c58 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_strlen(char *param_1)

{
  strlen(param_1);
  return;
}



/* Function: call_strlen @ 00011c7e */

undefined4 call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00011c88 */

void param_memcpy(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: call_memcpy @ 00011ca2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_memcpy(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_GS_OFFSET;
  undefined4 local_38 [5];
  int local_24 [4];
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puVar2 = &DAT_00014400;
  puVar3 = local_38;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  piVar4 = local_24;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  param_memcpy(local_24,local_38,0x14);
  local_14 = local_24[2] + local_24[0] + local_14;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_14 = __stack_chk_fail_local();
  }
  return local_14;
}



/* Function: param_memcmp @ 00011d10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_memcmp @ 00011d4f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_GS_OFFSET;
  int local_34 [10];
  
  local_34[9] = *(int *)(in_GS_OFFSET + 0x14);
  piVar3 = &DAT_00014414;
  piVar4 = local_34;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = &DAT_00014420;
  piVar4 = local_34 + 3;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = &DAT_00014414;
  piVar4 = local_34 + 6;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar2 = param_memcmp(local_34,local_34 + 3,0xc);
  iVar1 = param_memcmp(local_34,local_34 + 6,0xc);
  iVar1 = iVar1 + iVar2;
  if (local_34[9] != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_printf @ 00011ddc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_printf(undefined4 param_1,undefined4 param_2)

{
  __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
  return;
}



/* Function: call_printf @ 00011e09 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_printf(void)

{
  param_printf(0x2a,"Test");
  return;
}



/* Function: param_scanf @ 00011e2d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_scanf(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x11e3a;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = local_14 + local_18;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_scanf @ 00011e8e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_scanf(void)

{
  param_scanf("123,456");
  return;
}



/* Function: param_fopen_fclose @ 00011eb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fopen_fclose(char *param_1)

{
  FILE *__stream;
  int iVar1;
  
  iVar1 = -1;
  __stream = fopen(param_1,"r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
  }
  return iVar1;
}



/* Function: call_fopen_fclose @ 00011f03 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint call_fopen_fclose(void)

{
  int iVar1;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00011f2e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fread_fwrite(char *param_1)

{
  FILE *__s;
  int iVar1;
  size_t sVar2;
  int in_GS_OFFSET;
  char local_40 [32];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x11f3d;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  __s = fopen(param_1,"w+");
  iVar1 = -1;
  if (__s != (FILE *)0x0) {
    sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar2 == 0x12) {
      rewind(__s);
      sVar2 = fread(local_40,1,0x12,__s);
      local_40[sVar2] = '\0';
      fclose(__s);
      unlink(param_1);
      iVar1 = -3;
      if (sVar2 == 0x12) {
        iVar1 = strcmp(local_40,"BinBench Test Data");
        iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
      }
    }
    else {
      fclose(__s);
      iVar1 = -2;
    }
  }
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: call_fread_fwrite @ 00012016 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00012038 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_malloc_free(int param_1)

{
  int *__ptr;
  int iVar1;
  
  __ptr = malloc(param_1 * 4);
  iVar1 = 0;
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (; iVar1 != param_1; iVar1 = iVar1 + 1) {
      __ptr[iVar1] = iVar1 * 10;
    }
    iVar1 = *__ptr + __ptr[param_1 + -1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 0001209d */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 000120b0 */

int param_memset(byte *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  pbVar2 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + 1;
  }
  for (; param_1 != pbVar2; param_1 = param_1 + 1) {
    iVar1 = iVar1 + (uint)*param_1;
  }
  return iVar1;
}



/* Function: call_memset @ 000120d8 */

int call_memset(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int local_38 [10];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    local_38[iVar1] = 0xff;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  param_memset(local_38,0x28,10,10);
  local_38[9] = local_38[9] + local_38[0];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_38[9] = __stack_chk_fail_local();
  }
  return local_38[9];
}



/* Function: param_strchr_strstr @ 00012120 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  pcVar1 = strchr(param_1,(int)param_2);
  if (pcVar1 != (char *)0x0) {
    iVar3 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  iVar2 = -1;
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 00012178 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_strchr_strstr(void)

{
  param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return;
}



/* Function: test_standard_library_functions @ 000121a6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_standard_library_functions(void)

{
  undefined4 uVar1;
  
  puts(&DAT_0001409d);
  uVar1 = call_strcpy();
  __printf_chk(1,&DAT_000140c1,uVar1);
  uVar1 = call_strcmp();
  __printf_chk(1,&DAT_000140dc,uVar1);
  __printf_chk(1,&DAT_000140f7,0xc);
  uVar1 = call_memcpy();
  __printf_chk(1,&DAT_00014113,uVar1);
  uVar1 = call_memcmp();
  __printf_chk(1,&DAT_0001412f,uVar1);
  uVar1 = call_printf();
  __printf_chk(1,&DAT_0001414b,uVar1);
  uVar1 = call_scanf();
  __printf_chk(1,&DAT_00014167,uVar1);
  uVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_00014184,uVar1);
  uVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_000141a0,uVar1);
  uVar1 = call_malloc_free();
  __printf_chk(1,&DAT_000141bc,uVar1);
  uVar1 = call_memset();
  __printf_chk(1,&DAT_000141d8,uVar1);
  uVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_000141f3,uVar1);
  return;
}



/* Function: param_linux_syscall @ 000122e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

long param_linux_syscall(undefined4 param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = syscall(5,param_1,0);
  if (lVar1 < 0) {
    piVar2 = __errno_location();
    lVar1 = -*piVar2;
  }
  else {
    syscall(6,lVar1,lVar1,lVar1);
  }
  return lVar1;
}



/* Function: call_linux_syscall @ 0001232b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint call_linux_syscall(void)

{
  int iVar1;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00012356 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_win32_api(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  stat local_68;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x12363;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = stat(param_1,&local_68);
  uVar2 = 0xffffffff;
  if ((-1 < iVar1) && (uVar2 = 0x2a, local_68.st_size < 1)) {
    uVar2 = 0xfffffffe;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: call_win32_api @ 000123b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_win32_api(void)

{
  param_win32_api("/etc/passwd");
  return;
}



/* Function: param_fork_exec @ 000123d8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint param_fork_exec(char *param_1,undefined4 param_2)

{
  __pid_t _Var1;
  uint uVar2;
  int in_GS_OFFSET;
  uint local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x123e7;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl(param_1,param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    _Var1 = waitpid(_Var1,(int *)&local_24,0);
    uVar2 = 0xfffffffe;
    if (-1 < _Var1) {
      uVar2 = 0xfffffffd;
      if ((local_24 & 0x7f) == 0) {
        uVar2 = local_24 >> 8 & 0xff;
      }
    }
  }
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: call_fork_exec @ 0001246b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_fork_exec(void)

{
  int iVar1;
  
  iVar1 = param_fork_exec("/bin/true",0);
  return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 0001249b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  undefined4 uVar4;
  int in_GS_OFFSET;
  int local_38;
  int local_34;
  undefined1 local_30 [32];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = pipe(&local_38);
  if (iVar1 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      uVar4 = 0xfffffffe;
    }
    else {
      if (_Var2 == 0) {
        close(local_38);
        write(local_34,"HelloPipe",9);
        close(local_34);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_34);
      sVar3 = read(local_38,local_30,0x1f);
      local_30[sVar3] = 0;
      close(local_38);
      wait((void *)0x0);
      uVar4 = 0x2a;
      if (sVar3 < 1) {
        uVar4 = 0xfffffffd;
      }
    }
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar4 = __stack_chk_fail_local();
  }
  return uVar4;
}



/* Function: param_socket_create @ 0001258b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_socket_create(void)

{
  int __fd;
  undefined4 uVar1;
  int iVar2;
  sockaddr *psVar3;
  int in_GS_OFFSET;
  byte bVar4;
  undefined4 local_34;
  sockaddr local_30;
  int local_20;
  undefined4 uStack_14;
  
  bVar4 = 0;
  uStack_14 = 0x1259a;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  __fd = socket(2,1,0);
  uVar1 = 0xffffffff;
  if (-1 < __fd) {
    local_34 = 1;
    iVar2 = setsockopt(__fd,1,2,&local_34,4);
    if (iVar2 < 0) {
      close(__fd);
      uVar1 = 0xfffffffe;
    }
    else {
      psVar3 = &local_30;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        psVar3->sa_family = 0;
        psVar3->sa_data[0] = '\0';
        psVar3->sa_data[1] = '\0';
        psVar3 = (sockaddr *)((int)psVar3 + (uint)bVar4 * -8 + 4);
      }
      local_30.sa_family = 2;
      iVar2 = bind(__fd,&local_30,0x10);
      if (iVar2 < 0) {
        close(__fd);
        uVar1 = 0xfffffffd;
      }
      else {
        iVar2 = listen(__fd,5);
        if (iVar2 < 0) {
          close(__fd);
          uVar1 = 0xfffffffc;
        }
        else {
          close(__fd);
          uVar1 = 0x2a;
        }
      }
    }
  }
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: param_shmget_shmat @ 0001268c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

size_t param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__dest;
  size_t sVar2;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        return 0xfffffffe;
      }
      __dest = shmat(iVar1,(void *)0x0,0);
      if (__dest == (char *)0xffffffff) {
        return 0xfffffffd;
      }
      strcpy(__dest,"SharedMemory");
      sVar2 = strlen(__dest);
      shmdt(__dest);
      shmctl(iVar1,0,(shmid_ds *)0x0);
      return sVar2;
    }
  }
  return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00012758 */

undefined4 call_shmget_shmat(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_shmget_shmat();
  uVar2 = 0x2a;
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_signal_handling @ 00012778 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  undefined4 uVar2;
  int iVar3;
  
  p_Var1 = signal(10,signal_handler);
  uVar2 = 0xffffffff;
  if (p_Var1 != (__sighandler_t)0xffffffff) {
    p_Var1 = signal(0xe,signal_handler);
    uVar2 = 0xfffffffe;
    if (p_Var1 != (__sighandler_t)0xffffffff) {
      iVar3 = 0x3e9;
      signal_received = 0;
      raise(10);
      while ((signal_received == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
        usleep(1000);
      }
      uVar2 = 0xfffffffd;
      if ((signal_received != 0) && (uVar2 = 0xfffffffc, signal_number == 10)) {
        iVar3 = 0x7d1;
        signal_received = 0;
        alarm(1);
        while ((signal_received == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
          usleep(1000);
        }
        uVar2 = 0xfffffffb;
        if ((signal_received != 0) && (signal_number == 0xe)) {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          uVar2 = 0x2a;
        }
      }
    }
  }
  return uVar2;
}



/* Function: test_system_calls @ 000128a7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_system_calls(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00014242);
  uVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_0001425d,uVar1);
  uVar1 = call_win32_api();
  __printf_chk(1,&DAT_00014279,uVar1);
  uVar1 = call_fork_exec();
  __printf_chk(1,&DAT_00014295,uVar1);
  uVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_000142b1,uVar1);
  uVar1 = param_socket_create();
  __printf_chk(1,&DAT_000142cd,uVar1);
  uVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_000142e9,uVar1);
  uVar1 = param_signal_handling();
  __printf_chk(1,&DAT_00014305,uVar1);
  return;
}



/* Function: param_pthread_create @ 00012972 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_pthread_create(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  pthread_t local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x1297f;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_18 = param_1;
  iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,thread_compute,&local_18);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    pthread_join(local_1c,&local_14);
    uVar2 = *local_14;
    free(local_14);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: call_pthread_create @ 000129f3 */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: param_pthread_join @ 00012a06 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  int iVar5;
  int in_GS_OFFSET;
  pthread_t local_50 [12];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x12a20;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  ppVar3 = &DAT_00014440;
  ppVar4 = local_50 + 3;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppVar4 = *ppVar3;
    ppVar3 = ppVar3 + 1;
    ppVar4 = ppVar4 + 1;
  }
  ppVar3 = local_50 + 3;
  ppVar4 = local_50;
  do {
    iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_sum,ppVar3);
    if (iVar2 != 0) {
      iVar2 = -1;
      goto LAB_00012aa6;
    }
    ppVar4 = ppVar4 + 1;
    ppVar3 = ppVar3 + 3;
  } while (ppVar4 != local_50 + 3);
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar1 = pthread_join(local_50[iVar5],(void **)0x0);
    if (iVar1 != 0) {
      iVar2 = -2;
      break;
    }
    iVar1 = iVar5 + 1;
    iVar2 = iVar2 + local_50[iVar5 * 3 + 5];
    iVar5 = iVar1;
  } while (iVar1 != 3);
LAB_00012aa6:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_mutex_lock @ 00012aca */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_mutex_lock(int param_1,int param_2)

{
  void *__ptr;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  __ptr = malloc(param_1 * 4);
  uVar1 = 0xffffffff;
  if (__ptr != (void *)0x0) {
    shared_counter = 0;
    for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
      iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar3 * 4),(pthread_attr_t *)0x0,
                             thread_increment,&param_2);
      if (iVar2 != 0) {
        free(__ptr);
        return 0xfffffffe;
      }
    }
    for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar3 * 4),(void **)0x0);
    }
    free(__ptr);
    uVar1 = 0x2a;
    if (shared_counter != param_1 * param_2) {
      uVar1 = 0xfffffffd;
    }
  }
  return uVar1;
}



/* Function: call_mutex_lock @ 00012b9c */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: param_condition_variable @ 00012bb4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  pthread_t local_1c;
  pthread_t local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x12bc1;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_18,&local_14);
      pthread_join(local_1c,(void **)0x0);
      uVar2 = *local_14;
      free(local_14);
    }
    else {
      pthread_cancel(local_18);
      uVar2 = 0xfffffffe;
    }
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: param_atomic_ops @ 00012c88 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_atomic_ops(int param_1)

{
  void *__ptr;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  pthread_t local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x12c97;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  __ptr = malloc(param_1 << 2);
  uVar1 = 0xffffffff;
  if (__ptr != (void *)0x0) {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
      iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar3 * 4),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&stack0x00000008);
      if (iVar2 != 0) {
        free(__ptr);
        uVar1 = 0xfffffffe;
        goto LAB_00012d71;
      }
    }
    iVar3 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar3 == 0) {
      pthread_join(local_24,(void **)0x0);
    }
    for (iVar3 = 0; iVar2 = atomic_counter, iVar3 < param_1; iVar3 = iVar3 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar3 * 4),(void **)0x0);
    }
    free(__ptr);
    uVar1 = 0x2a;
    if (iVar2 < 1) {
      uVar1 = 0xfffffffd;
    }
  }
LAB_00012d71:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: call_atomic_ops @ 00012d8a */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: param_thread_local_storage @ 00012da2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_thread_local_storage(int param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  int iVar4;
  int in_GS_OFFSET;
  int local_38;
  int local_34;
  int *local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x12db1;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  __ptr = malloc(param_1 * 4);
  __ptr_00 = malloc(param_1 * 4);
  if ((__ptr == (void *)0x0) || (__ptr_00 == (void *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      pvVar1 = malloc(0x10);
      *(void **)((int)__ptr_00 + iVar4 * 4) = pvVar1;
      __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar4);
    }
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar4 * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)__ptr_00 + iVar4 * 4));
      if (iVar2 != 0) {
        iVar2 = 0;
        do {
          free(*(void **)((int)__ptr_00 + iVar2 * 4));
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar4);
        free(__ptr_00);
        free(__ptr);
        uVar3 = 0xfffffffe;
        goto LAB_00012f17;
      }
    }
    local_38 = 0;
    local_34 = 0;
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar4 * 4),&local_24);
      local_34 = local_34 + *local_24;
      local_38 = local_38 + local_24[1];
      free(local_24);
      free(*(void **)((int)__ptr_00 + iVar4 * 4));
    }
    free(__ptr_00);
    free(__ptr);
    if ((param_1 * 100 - local_34 != 0) || (uVar3 = 0x2a, param_1 * 0x96 - local_38 != 0)) {
      uVar3 = 0xfffffffd;
    }
  }
LAB_00012f17:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
    uVar3 = extraout_EDX;
  }
  return uVar3;
}



/* Function: call_thread_local_storage @ 00012f32 */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 00012f45 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_thread_concurrency(void)

{
  undefined4 uVar1;
  
  puts(&DAT_0001432b);
  uVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00014349,uVar1);
  uVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00014365,uVar1);
  uVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_00014382,uVar1);
  uVar1 = param_condition_variable();
  __printf_chk(1,&DAT_0001439e,uVar1);
  uVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_000143ba,uVar1);
  uVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_000143d6,uVar1);
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012ff9 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012ffd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.si @ 00013001 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 00013010 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00013030 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001304a) */
/* WARNING: Removing unreachable block (ram,0x00013060) */
/* WARNING: Removing unreachable block (ram,0x0001306d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001307c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 74 */
