/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/6/6_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00101388 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: init_have_lse_atomics @ 001017c0 */

void init_have_lse_atomics(void)

{
  byte extraout_var;
  
  __getauxval(0x10);
  atomic_counter._4_1_ = extraout_var & 1;
  return;
}



/* Function: _start @ 00101800 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101834 */

/* WARNING: Removing unreachable block (ram,0x00101844) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101850 */

/* WARNING: Removing unreachable block (ram,0x00101868) */
/* WARNING: Removing unreachable block (ram,0x00101874) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101880 */

/* WARNING: Removing unreachable block (ram,0x001018a4) */
/* WARNING: Removing unreachable block (ram,0x001018b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001018bc @ 001018bc */

void FUN_001018bc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 001018c0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: signal_handler @ 00101914 */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: thread_sum @ 0010192c */

undefined8 thread_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[2] = 0;
  iVar1 = *param_1;
  if (iVar1 <= param_1[1]) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_1[1] + 1);
    param_1[2] = iVar2;
  }
  return 0;
}



/* Function: thread_compute @ 00101964 */

void thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}



/* Function: thread_increment @ 00101990 */

undefined8 thread_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
      usleep(1000);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return 0;
}



/* Function: consumer_thread @ 00101a0c */

void consumer_thread(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  uVar1 = data;
  while (data = uVar1, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
    uVar1 = data;
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar2 = malloc(4);
  *puVar2 = uVar1;
  return;
}



/* Function: producer_thread @ 00101a88 */

undefined8 producer_thread(void)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}



/* Function: thread_atomic_increment @ 00101ae0 */

undefined8 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      __aarch64_ldadd4_acq_rel(1,&atomic_counter);
      __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 00101b4c */

undefined8 thread_atomic_load_store(void)

{
  atomic_counter._0_4_ = (int)atomic_counter + 100;
  return 0;
}



/* Function: thread_tls_test @ 00101b6c */

void thread_tls_test(char *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = tpidr_el0;
  iVar2 = *(int *)(lVar3 + 0x10);
  iVar1 = iVar2 + 0x32;
  *(int *)(lVar3 + 0x10) = iVar1;
  strncpy((char *)(lVar3 + 0x18),param_1,0x1f);
  piVar4 = malloc(8);
  *piVar4 = iVar2;
  piVar4[1] = iVar1;
  return;
}



/* Function: param_strcpy @ 00101bc0 */

void param_strcpy(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}



/* Function: call_strcpy @ 00101be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_strcpy(void)

{
  undefined8 uVar1;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_strcpy(auStack_28,"HelloLib");
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_strcmp @ 00101c3c */

int param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,param_2);
  iVar1 = iVar2 >> 0x1f;
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_strcmp @ 00101c5c */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_00103408,&DAT_00103400);
  iVar2 = param_strcmp(&DAT_00103410,&DAT_00103410);
  iVar3 = param_strcmp(&DAT_00103420,&DAT_00103418);
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101cbc */

void param_strlen(char *param_1)

{
  strlen(param_1);
  return;
}



/* Function: call_strlen @ 00101cd0 */

undefined8 call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00101cd8 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00101cfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_memcpy(void)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = 0x140000000a;
  uStack_30 = 0x280000001e;
  local_28 = 0x32;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  param_memcpy(&local_20,&local_38,0x14);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_20 + (int)local_18 + local_10,&__stack_chk_guard,0,
                   local_8 - ___stack_chk_guard);
}



/* Function: param_memcmp @ 00101d84 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = memcmp(param_1,param_2,param_3);
  iVar1 = iVar2 >> 0x1f;
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_memcmp @ 00101da4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_memcmp(void)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = 0x200000001;
  local_30 = 3;
  local_28 = 0x200000001;
  local_20 = 4;
  local_18 = 0x200000001;
  local_10 = 3;
  iVar1 = param_memcmp(&local_38,&local_28,0xc);
  iVar2 = param_memcmp(&local_38,&local_18,0xc);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_printf @ 00101e58 */

void param_printf(undefined4 param_1,undefined8 param_2)

{
  __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
  return;
}



/* Function: call_printf @ 00101e80 */

void call_printf(void)

{
  param_printf(0x2a,&DAT_00103440);
  return;
}



/* Function: param_scanf @ 00101ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_scanf(undefined8 param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&local_c);
  if (iVar1 == 2) {
    local_10 = local_10 + local_c;
  }
  else {
    local_10 = -1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_scanf @ 00101f14 */

void call_scanf(void)

{
  param_scanf("123,456");
  return;
}



/* Function: param_fopen_fclose @ 00101f30 */

int param_fopen_fclose(char *param_1)

{
  int iVar1;
  FILE *__stream;
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = fileno(__stream);
    fclose(__stream);
  }
  return iVar1;
}



/* Function: call_fopen_fclose @ 00101f78 */

undefined4 call_fopen_fclose(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  uVar2 = 0x2a;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_fread_fwrite @ 00101fa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fread_fwrite(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FILE *__s;
  size_t sVar3;
  char acStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar3 == 0x12) {
      rewind(__s);
      sVar3 = fread(acStack_28,1,0x12,__s);
      acStack_28[sVar3] = '\0';
      fclose(__s);
      unlink(param_1);
      if (sVar3 == 0x12) {
        iVar1 = strcmp(acStack_28,"BinBench Test Data");
        uVar2 = 0xfffffffd;
        if (iVar1 == 0) {
          uVar2 = 0x2a;
        }
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      fclose(__s);
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_fread_fwrite @ 001020b8 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 001020d4 */

int param_malloc_free(long param_1)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    if (param_1 != 0) {
      iVar1 = 0;
      piVar2 = __ptr;
      do {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 10;
        piVar2 = piVar3;
      } while (piVar3 != __ptr + param_1);
    }
    iVar1 = __ptr[param_1 + -1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00102140 */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 00102158 */

int param_memset(byte *param_1,size_t param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  memset(param_1,0,param_2);
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    pbVar3 = param_1;
    do {
      pbVar2 = pbVar3 + 1;
      iVar1 = iVar1 + (uint)*pbVar3;
      pbVar3 = pbVar2;
    } while (pbVar2 != param_1 + param_2);
  }
  return iVar1;
}



/* Function: call_memset @ 001021ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_memset(void)

{
  long *plVar1;
  long local_30 [4];
  int local_c;
  long local_8;
  long *plVar2;
  
  local_8 = ___stack_chk_guard;
  plVar2 = local_30;
  do {
    plVar1 = (long *)((long)plVar2 + 4);
    *(undefined4 *)plVar2 = 0xff;
    plVar2 = plVar1;
  } while (plVar1 != &local_8);
  param_memset(local_30,0x28);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_30[0] + local_c,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_strchr_strstr @ 00102220 */

int param_strchr_strstr(char *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = strchr(param_1,param_2 & 0xff);
  iVar3 = (int)pcVar1 - (int)param_1;
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  pcVar1 = strstr(param_1,param_3);
  iVar2 = (int)pcVar1 - (int)param_1;
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 00102278 */

void call_strchr_strstr(void)

{
  param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return;
}



/* Function: test_standard_library_functions @ 001022a0 */

void test_standard_library_functions(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = puts(&DAT_001034c8);
  uVar2 = call_strcpy(iVar1);
  __printf_chk(1,&DAT_001034f0,uVar2);
  uVar2 = call_strcmp();
  __printf_chk(1,&DAT_00103510,uVar2);
  uVar2 = call_strlen();
  __printf_chk(1,&DAT_00103530,uVar2);
  uVar2 = call_memcpy();
  __printf_chk(1,&DAT_00103550,uVar2);
  uVar2 = call_memcmp();
  __printf_chk(1,&DAT_00103570,uVar2);
  uVar2 = call_printf();
  __printf_chk(1,&DAT_00103590,uVar2);
  uVar2 = call_scanf();
  __printf_chk(1,&DAT_001035b0,uVar2);
  uVar2 = call_fopen_fclose();
  __printf_chk(1,&DAT_001035d0,uVar2);
  uVar2 = call_fread_fwrite();
  __printf_chk(1,&DAT_001035f0,uVar2);
  uVar2 = call_malloc_free();
  __printf_chk(1,&DAT_00103610,uVar2);
  uVar2 = call_memset();
  __printf_chk(1,&DAT_00103630,uVar2);
  uVar2 = call_strchr_strstr();
  __printf_chk(1,&DAT_00103650,uVar2);
  return;
}



/* Function: param_linux_syscall @ 001023dc */

ulong param_linux_syscall(undefined8 param_1)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar1 = syscall(0x38,0xffffff9c,param_1,0);
  if ((int)uVar1 < 0) {
    piVar2 = __errno_location();
    uVar3 = (ulong)(uint)-*piVar2;
  }
  else {
    uVar3 = uVar1 & 0xffffffff;
    syscall(0x39,uVar1 & 0xffffffff);
  }
  return uVar3;
}



/* Function: call_linux_syscall @ 00102430 */

undefined4 call_linux_syscall(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  uVar2 = 0x2a;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_win32_api @ 00102458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_win32_api(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
    if (local_58 < 1) {
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_win32_api @ 001024c4 */

void call_win32_api(void)

{
  param_win32_api("/etc/passwd");
  return;
}



/* Function: param_fork_exec @ 001024e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fork_exec(char *param_1,undefined8 param_2)

{
  __pid_t _Var1;
  uint uVar2;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
    _Var1 = waitpid(_Var1,(int *)&local_c,0);
    uVar2 = 0xfffffffe;
    if ((-1 < _Var1) && (uVar2 = local_c >> 8 & 0xff, (local_c & 0x7f) != 0)) {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_fork_exec @ 00102590 */

undefined4 call_fork_exec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_fork_exec("/bin/true",0);
  uVar2 = 0x2a;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_pipe_communication @ 001025bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  ssize_t sVar4;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = pipe(&local_30);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      if (_Var2 == 0) {
        close(local_30);
        write(local_2c,"HelloPipe",9);
        close(local_2c);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_2c);
      sVar4 = read(local_30,auStack_28,0x1f);
      auStack_28[sVar4] = 0;
      close(local_30);
      wait((void *)0x0);
      uVar3 = 0x2a;
      if (sVar4 < 1) {
        uVar3 = 0xfffffffd;
      }
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_pipe_communication @ 001026a4 */

void call_pipe_communication(void)

{
  param_pipe_communication();
  return;
}



/* Function: param_socket_create @ 001026b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_socket_create(void)

{
  int __fd;
  int iVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  sockaddr local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_1c = 1;
    iVar1 = setsockopt(__fd,1,2,&local_1c,4);
    if (iVar1 < 0) {
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      local_18.sa_data[6] = '\0';
      local_18.sa_data[7] = '\0';
      local_18.sa_data[8] = '\0';
      local_18.sa_data[9] = '\0';
      local_18.sa_data[10] = '\0';
      local_18.sa_data[0xb] = '\0';
      local_18.sa_data[0xc] = '\0';
      local_18.sa_data[0xd] = '\0';
      local_18.sa_family = 2;
      local_18.sa_data[0] = '\0';
      local_18.sa_data[1] = '\0';
      local_18.sa_data[2] = '\0';
      local_18.sa_data[3] = '\0';
      local_18.sa_data[4] = '\0';
      local_18.sa_data[5] = '\0';
      iVar1 = bind(__fd,&local_18,0x10);
      if (iVar1 < 0) {
        close(__fd);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(__fd,5);
        if (iVar1 < 0) {
          close(__fd);
          uVar2 = 0xfffffffc;
        }
        else {
          close(__fd);
          uVar2 = 0x2a;
        }
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_socket_create @ 001027bc */

void call_socket_create(void)

{
  param_socket_create();
  return;
}



/* Function: param_shmget_shmat @ 001027d0 */

ulong param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  ulong uVar3;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        uVar3 = 0xfffffffe;
      }
      else {
        __s = shmat(iVar1,(void *)0x0,0);
        if (__s == (char *)0xffffffffffffffff) {
          uVar3 = 0xfffffffd;
        }
        else {
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar2 = strlen(__s);
          uVar3 = sVar2 & 0xffffffff;
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return uVar3;
}



/* Function: call_shmget_shmat @ 001028b4 */

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



/* Function: param_signal_handling @ 001028d4 */

undefined8 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  undefined8 uVar2;
  int iVar3;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
      uVar2 = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        iVar3 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (signal_received == 0) {
        uVar2 = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        if (signal_received == 0) {
          iVar3 = 2000;
          do {
            usleep(1000);
            if (signal_received != 0) break;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (signal_received == 0) {
          uVar2 = 0xfffffffb;
        }
        else if (signal_number == 0xe) {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          uVar2 = 0x2a;
        }
        else {
          uVar2 = 0xfffffffb;
        }
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
  }
  return uVar2;
}



/* Function: call_signal_handling @ 00102a48 */

void call_signal_handling(void)

{
  param_signal_handling();
  return;
}



/* Function: test_system_calls @ 00102a5c */

void test_system_calls(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = puts(&DAT_001036b8);
  uVar2 = call_linux_syscall(iVar1);
  __printf_chk(1,&DAT_001036d8,uVar2);
  uVar2 = call_win32_api();
  __printf_chk(1,&DAT_001036f8,uVar2);
  uVar2 = call_fork_exec();
  __printf_chk(1,&DAT_00103718,uVar2);
  uVar2 = param_pipe_communication();
  __printf_chk(1,&DAT_00103738,uVar2);
  uVar2 = param_socket_create();
  __printf_chk(1,&DAT_00103758,uVar2);
  uVar2 = call_shmget_shmat();
  __printf_chk(1,&DAT_00103778,uVar2);
  uVar2 = param_signal_handling();
  __printf_chk(1,&DAT_00103798,uVar2);
  return;
}



/* Function: param_pthread_create @ 00102b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pthread_create(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = param_1;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_pthread_create @ 00102bb0 */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: param_pthread_join @ 00102bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_join(void)

{
  int iVar1;
  pthread_t *__arg;
  long lVar2;
  pthread_t *__newthread;
  int iVar3;
  pthread_t *ppVar4;
  pthread_t local_48 [4];
  int aiStack_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __arg = local_48 + 3;
  aiStack_28[0] = 0;
  aiStack_28[1] = 0xb;
  local_48[3] = 0xa00000001;
  aiStack_28[4] = 0x15;
  aiStack_28[5] = 0x1e;
  aiStack_28[2] = 0x14;
  aiStack_28[3] = 0;
  aiStack_28[6] = 0;
  ppVar4 = local_48;
  iVar3 = 3;
  __newthread = ppVar4;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar3 = -1;
      goto LAB_00102c84;
    }
    __newthread = __newthread + 1;
    __arg = (pthread_t *)((long)__arg + 0xc);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  lVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = pthread_join(*ppVar4,(void **)0x0);
    if (iVar1 != 0) {
      iVar3 = -2;
      break;
    }
    iVar3 = iVar3 + *(int *)((long)aiStack_28 + lVar2);
    ppVar4 = ppVar4 + 1;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x24);
LAB_00102c84:
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_pthread_join @ 00102ccc */

void call_pthread_join(void)

{
  param_pthread_join();
  return;
}



/* Function: param_mutex_lock @ 00102ce0 */

undefined4 param_mutex_lock(ulong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  int local_4;
  
  local_4 = param_2;
  __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    if (0 < (int)param_1) {
      ppVar3 = __ptr;
      do {
        iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_4);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        ppVar3 = ppVar3 + 1;
        ppVar4 = __ptr;
      } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
      do {
        ppVar3 = ppVar4 + 1;
        pthread_join(*ppVar4,(void **)0x0);
        ppVar4 = ppVar3;
      } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
    }
    free(__ptr);
    uVar2 = 0x2a;
    if (shared_counter != (int)param_1 * local_4) {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_mutex_lock @ 00102ddc */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: param_condition_variable @ 00102df8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_20;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_18,&local_10);
      pthread_join(local_20,(void **)0x0);
      uVar2 = *local_10;
      free(local_10);
    }
    else {
      pthread_cancel(local_18);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_condition_variable @ 00102ec8 */

void call_condition_variable(void)

{
  param_condition_variable();
  return;
}



/* Function: param_atomic_ops @ 00102edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_atomic_ops(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  pthread_t *__newthread;
  long lVar3;
  undefined4 local_14;
  pthread_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = param_2;
  __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    atomic_counter._0_4_ = 0;
    if ((int)param_1 < 1) {
      iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar1 == 0) {
        pthread_join(local_10,(void **)0x0);
      }
    }
    else {
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
        if (iVar1 != 0) {
          free(__ptr);
          uVar2 = 0xfffffffe;
          goto LAB_00102fd4;
        }
        __newthread = __newthread + 1;
      } while (__newthread != __ptr + param_1);
      iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar1 == 0) {
        pthread_join(local_10,(void **)0x0);
      }
      lVar3 = 0;
      do {
        pthread_join(__ptr[lVar3],(void **)0x0);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < (int)param_1);
    }
    iVar1 = (int)atomic_counter;
    free(__ptr);
    uVar2 = 0x2a;
    if (iVar1 < 1) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_00102fd4:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_atomic_ops @ 00103064 */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: param_thread_local_storage @ 00103080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_thread_local_storage(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  undefined8 *__ptr_00;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar8;
  pthread_t *__newthread;
  ulong uVar9;
  int *local_10;
  long local_8;
  undefined8 *puVar7;
  
  local_8 = ___stack_chk_guard;
  uVar4 = -(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3;
  __ptr = malloc(uVar4);
  __ptr_00 = malloc(uVar4);
  if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined8 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((int)param_1 < 1) {
      iVar8 = 0;
      iVar1 = 0;
    }
    else {
      uVar9 = (ulong)param_1;
      uVar4 = 0;
      do {
        pvVar3 = malloc(0x10);
        __ptr_00[uVar4] = pvVar3;
        __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4 & 0xffffffff);
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar9);
      uVar4 = 0;
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               (void *)__ptr_00[uVar4]);
        if (iVar1 != 0) {
          if (-1 < (int)uVar4) {
            puVar6 = __ptr_00;
            do {
              puVar7 = puVar6 + 1;
              free((void *)*puVar6);
              puVar6 = puVar7;
            } while (puVar7 != __ptr_00 + (uVar4 & 0xffffffff) + 1);
          }
          free(__ptr_00);
          free(__ptr);
          uVar2 = 0xfffffffe;
          goto LAB_001031ec;
        }
        uVar4 = uVar4 + 1;
        __newthread = __newthread + 1;
      } while (uVar4 != uVar9);
      lVar5 = 0;
      iVar1 = 0;
      iVar8 = 0;
      do {
        pthread_join(*(pthread_t *)((long)__ptr + lVar5),&local_10);
        iVar1 = iVar1 + *local_10;
        iVar8 = iVar8 + local_10[1];
        free(local_10);
        free(*(void **)((long)__ptr_00 + lVar5));
        lVar5 = lVar5 + 8;
      } while (lVar5 != uVar9 * 8);
    }
    free(__ptr_00);
    free(__ptr);
    uVar2 = 0x2a;
    if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar8) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_001031ec:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_thread_local_storage @ 0010327c */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 00103294 */

void test_thread_concurrency(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = puts(&DAT_001037c8);
  uVar2 = call_pthread_create(iVar1);
  __printf_chk(1,&DAT_001037e8,uVar2);
  uVar2 = param_pthread_join();
  __printf_chk(1,&DAT_00103808,uVar2);
  uVar2 = call_mutex_lock();
  __printf_chk(1,&DAT_00103828,uVar2);
  uVar2 = param_condition_variable();
  __printf_chk(1,&DAT_00103848,uVar2);
  uVar2 = call_atomic_ops();
  __printf_chk(1,&DAT_00103868,uVar2);
  uVar2 = call_thread_local_storage();
  __printf_chk(1,&DAT_00103888,uVar2);
  return;
}



/* Function: main @ 00103340 */

undefined8 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103360 */

int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (atomic_counter._4_1_ != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}



/* Function: __aarch64_ldadd4_acq_rel @ 001033a0 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (atomic_counter._4_1_ == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  LOAcquire();
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  LORelease();
  return iVar3;
}



/* Function: _fini @ 001033d0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 75 */
