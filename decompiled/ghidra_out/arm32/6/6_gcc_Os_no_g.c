/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010c9c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: main @ 00010f90 */

undefined4 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _start @ 00010fa8 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010fec */

/* WARNING: Removing unreachable block (ram,0x00011000) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00011010 */

/* WARNING: Removing unreachable block (ram,0x00011020) */
/* WARNING: Removing unreachable block (ram,0x00011028) */
/* WARNING: Removing unreachable block (ram,0x0001102c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001103c */

/* WARNING: Removing unreachable block (ram,0x00011058) */
/* WARNING: Removing unreachable block (ram,0x00011060) */
/* WARNING: Removing unreachable block (ram,0x00011064) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011074 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: signal_handler @ 000110a0 */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: thread_sum @ 000110b8 */

undefined4 thread_sum(int *param_1)

{
  int iVar1;
  
  param_1[2] = 0;
  for (iVar1 = *param_1; iVar1 <= param_1[1]; iVar1 = iVar1 + 1) {
    param_1[2] = param_1[2] + iVar1;
  }
  return 0;
}



/* Function: thread_compute @ 000110ec */

void thread_compute(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = malloc(4);
  *piVar1 = iVar2 * iVar2;
  return;
}



/* Function: thread_increment @ 00011110 */

undefined4 thread_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}



/* Function: consumer_thread @ 00011164 */

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



/* Function: producer_thread @ 000111bc */

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



/* Function: thread_atomic_increment @ 00011204 */

/* WARNING: Removing unreachable block (ram,0x00011244) */

undefined4 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    __sync_fetch_and_add_4(&atomic_counter,1);
    __sync_val_compare_and_swap_4(&atomic_counter,iVar1,iVar1 + 1000);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 0001128c */

undefined4 thread_atomic_load_store(void)

{
  int iVar1;
  
  __sync_synchronize();
  iVar1 = atomic_counter;
  __sync_synchronize();
  __sync_synchronize();
  atomic_counter = iVar1 + 100;
  __sync_synchronize();
  return 0;
}



/* Function: thread_tls_test @ 000112bc */

void thread_tls_test(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = __aeabi_read_tp(param_1,param_1);
  iVar1 = (int)uVar5;
  iVar4 = *(int *)(iVar1 + 8);
  iVar3 = iVar4 + 0x32;
  *(int *)(iVar1 + 8) = iVar3;
  strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar5 >> 0x20),0x1f);
  piVar2 = malloc(8);
  *piVar2 = iVar4;
  piVar2[1] = iVar3;
  return;
}



/* Function: param_strcpy @ 00011304 */

void param_strcpy(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}



/* Function: call_strcpy @ 0001131c */

void call_strcpy(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_2c [32];
  int local_c;
  
  local_c = 0;
  param_strcpy(auStack_2c,"HelloLib",param_3,0);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_strcmp @ 0001136c */

undefined4 param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,param_2);
  if (0 < iVar1) {
    return 1;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_strcmp @ 00011390 */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_00013621,&DAT_0001361d);
  iVar2 = param_strcmp(&DAT_00013625);
  iVar3 = param_strcmp(&DAT_0001362d,&DAT_00013629);
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 000113e0 */

void param_strlen(char *param_1)

{
  strlen(param_1);
  return;
}



/* Function: call_strlen @ 000113e4 */

undefined4 call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 000113ec */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 00011400 */

void call_memcpy(void)

{
  undefined4 extraout_r1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int local_20 [2];
  int local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_34 = 10;
  uStack_30 = 0x14;
  uStack_2c = 0x1e;
  uStack_28 = 0x28;
  local_24 = 0x32;
  memset(local_20,0,0x14);
  param_memcpy(local_20,&local_34,0x14);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_20[0] + local_18 + local_10,extraout_r1,local_c,0);
  }
  return;
}



/* Function: param_memcmp @ 00011490 */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  if (0 < iVar1) {
    return 1;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_memcmp @ 000114b4 */

void call_memcmp(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = 0;
  local_38 = 1;
  uStack_34 = 2;
  uStack_30 = 3;
  local_2c = 1;
  uStack_28 = 2;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 2;
  uStack_18 = 3;
  iVar1 = param_memcmp(&local_38,&local_2c,0xc);
  uVar2 = param_memcmp(&local_38,&local_20,0xc);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_14,0);
  }
  return;
}



/* Function: param_printf @ 0001154c */

void param_printf(undefined4 param_1,undefined4 param_2)

{
  __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
  return;
}



/* Function: call_printf @ 00011564 */

void call_printf(void)

{
  param_printf(0x2a,"Test");
  return;
}



/* Function: param_scanf @ 00011574 */

void param_scanf(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iStack_14;
  int iStack_10;
  int local_c;
  
  local_c = 0;
  iStack_14 = param_2;
  iStack_10 = param_3;
  uVar2 = __isoc99_sscanf(param_1,"%d,%d",&iStack_14,&iStack_10,param_1);
  if ((int)uVar2 == 2) {
    iVar1 = iStack_14 + iStack_10;
  }
  else {
    iVar1 = -1;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,(int)((ulonglong)uVar2 >> 0x20),local_c,0);
  }
  return;
}



/* Function: call_scanf @ 000115d4 */

void call_scanf(void)

{
  param_scanf("123,456");
  return;
}



/* Function: param_fopen_fclose @ 000115e0 */

int param_fopen_fclose(char *param_1)

{
  FILE *__stream;
  int iVar1;
  
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



/* Function: call_fopen_fclose @ 00011614 */

undefined4 call_fopen_fclose(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_fread_fwrite @ 00011634 */

void param_fread_fwrite(char *param_1)

{
  FILE *__s;
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  char acStack_34 [32];
  int local_14;
  
  local_14 = 0;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar2 == 0x12) {
      rewind(__s);
      sVar2 = fread(acStack_34,1,0x12,__s);
      acStack_34[sVar2] = '\0';
      fclose(__s);
      unlink(param_1);
      if (sVar2 == 0x12) {
        iVar3 = strcmp(acStack_34,"BinBench Test Data");
        if (iVar3 == 0) {
          uVar1 = 0x2a;
        }
        else {
          uVar1 = 0xfffffffd;
        }
      }
      else {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      fclose(__s);
      uVar1 = 0xfffffffe;
    }
  }
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* Function: call_fread_fwrite @ 00011724 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00011730 */

int param_malloc_free(int param_1)

{
  int *__ptr;
  int iVar1;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (iVar1 = 0; iVar1 != param_1; iVar1 = iVar1 + 1) {
      __ptr[iVar1] = iVar1 * 10;
    }
    iVar1 = __ptr[param_1 + -1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 0001178c */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 00011794 */

int param_memset(byte *param_1,size_t param_2)

{
  int iVar1;
  byte *pbVar2;
  
  memset(param_1,0,param_2);
  iVar1 = 0;
  pbVar2 = param_1 + param_2;
  for (; param_1 != pbVar2; param_1 = param_1 + 1) {
    iVar1 = iVar1 + (uint)*param_1;
  }
  return iVar1;
}



/* Function: call_memset @ 000117cc */

void call_memset(void)

{
  undefined4 extraout_r1;
  int *piVar1;
  int iVar2;
  int local_34 [9];
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar2 = 0;
  piVar1 = local_34;
  do {
    iVar2 = iVar2 + 1;
    *piVar1 = 0xff;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 10);
  param_memset(local_34,0x28);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_34[0] + local_10,extraout_r1,local_c,0);
  }
  return;
}



/* Function: param_strchr_strstr @ 00011840 */

int param_strchr_strstr(char *param_1,int param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = strchr(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 0001187c */

void call_strchr_strstr(void)

{
  param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return;
}



/* Function: test_standard_library_functions @ 00011894 */

void test_standard_library_functions(void)

{
  undefined4 uVar1;
  
  puts(&DAT_000136a9);
  uVar1 = call_strcpy();
  __printf_chk(1,&DAT_000136cd,uVar1);
  uVar1 = call_strcmp();
  __printf_chk(1,&DAT_000136e8,uVar1);
  __printf_chk(1,&DAT_00013703,0xc);
  uVar1 = call_memcpy();
  __printf_chk(1,&DAT_0001371f,uVar1);
  uVar1 = call_memcmp();
  __printf_chk(1,&DAT_0001373b,uVar1);
  uVar1 = call_printf();
  __printf_chk(1,&DAT_00013757,uVar1);
  uVar1 = call_scanf();
  __printf_chk(1,&DAT_00013773,uVar1);
  uVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_00013790,uVar1);
  uVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_000137ac,uVar1);
  uVar1 = call_malloc_free();
  __printf_chk(1,&DAT_000137c8,uVar1);
  uVar1 = call_memset();
  __printf_chk(1,&DAT_000137e4,uVar1);
  uVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_000137ff,uVar1);
  return;
}



/* Function: param_linux_syscall @ 000119c4 */

int param_linux_syscall(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = syscall(5,param_1,0);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    syscall(6,iVar1);
  }
  return iVar1;
}



/* Function: call_linux_syscall @ 00011a04 */

undefined4 call_linux_syscall(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_win32_api @ 00011a24 */

void param_win32_api(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  stat sStack_68;
  int local_c;
  
  local_c = 0;
  iVar1 = stat(param_1,&sStack_68);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (sStack_68.st_size < 1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0x2a;
  }
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* Function: call_win32_api @ 00011a88 */

void call_win32_api(void)

{
  param_win32_api("/etc/passwd");
  return;
}



/* Function: param_fork_exec @ 00011a94 */

void param_fork_exec(char *param_1,undefined4 param_2,undefined4 param_3)

{
  __pid_t _Var1;
  uint uVar2;
  char *local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  local_18 = param_1;
  uStack_10 = param_3;
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl(param_1,param_1,param_2);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    _Var1 = waitpid(_Var1,(int *)&local_18,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else if (((uint)local_18 & 0x7f) == 0) {
      uVar2 = (int)local_18 >> 8 & 0xff;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* Function: call_fork_exec @ 00011b34 */

undefined4 call_fork_exec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_fork_exec("/bin/true",0);
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_pipe_communication @ 00011b58 */

void param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  undefined4 uVar4;
  int local_3c;
  int local_38;
  undefined1 auStack_34 [32];
  int local_14;
  
  local_14 = 0;
  iVar1 = pipe(&local_3c);
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
        close(local_3c);
        write(local_38,"HelloPipe",9);
        close(local_38);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_38);
      sVar3 = read(local_3c,auStack_34,0x1f);
      auStack_34[sVar3] = 0;
      close(local_3c);
      wait((void *)0x0);
      if (sVar3 < 1) {
        uVar4 = 0xfffffffd;
      }
      else {
        uVar4 = 0x2a;
      }
    }
  }
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* Function: param_socket_create @ 00011c40 */

void param_socket_create(void)

{
  int __fd;
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  sockaddr local_1c;
  int local_c;
  
  local_c = 0;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = 1;
    iVar2 = setsockopt(__fd,1,2,&local_20,4);
    if (iVar2 < 0) {
      close(__fd);
      uVar1 = 0xfffffffe;
    }
    else {
      memset(&local_1c,0,0x10);
      local_1c.sa_family = 2;
      iVar2 = bind(__fd,&local_1c,0x10);
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
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* Function: param_shmget_shmat @ 00011d40 */

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
      if (__dest != (char *)0xffffffff) {
        strcpy(__dest,"SharedMemory");
        sVar2 = strlen(__dest);
        shmdt(__dest);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return sVar2;
      }
      return 0xfffffffd;
    }
  }
  return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00011df4 */

undefined4 call_shmget_shmat(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_shmget_shmat();
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_signal_handling @ 00011e0c */

undefined4 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return 0xffffffff;
  }
  p_Var1 = signal(0xe,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return 0xfffffffe;
  }
  signal_received = 0;
  raise(10);
  iVar2 = 0x3e9;
  while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    usleep(1000);
  }
  if (signal_received == 0) {
    return 0xfffffffd;
  }
  if (signal_number != 10) {
    return 0xfffffffc;
  }
  signal_received = 0;
  alarm(1);
  iVar2 = 0x7d1;
  while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    usleep(1000);
  }
  if ((signal_received != 0) && (signal_number == 0xe)) {
    signal(10,(__sighandler_t)0x0);
    signal(0xe,(__sighandler_t)0x0);
    return 0x2a;
  }
  return 0xfffffffb;
}



/* Function: test_system_calls @ 00011f28 */

void test_system_calls(void)

{
  undefined4 uVar1;
  
  puts(&DAT_0001384e);
  uVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_00013869,uVar1);
  uVar1 = call_win32_api();
  __printf_chk(1,&DAT_00013885,uVar1);
  uVar1 = call_fork_exec();
  __printf_chk(1,&DAT_000138a1,uVar1);
  uVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_000138bd,uVar1);
  uVar1 = param_socket_create();
  __printf_chk(1,&DAT_000138d9,uVar1);
  uVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_000138f5,uVar1);
  uVar1 = param_signal_handling();
  __printf_chk(1,&DAT_00013911,uVar1);
  return;
}



/* Function: param_pthread_create @ 00011fe4 */

undefined4 param_pthread_create(pthread_t param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_18;
  pthread_t local_14;
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  local_18 = param_1;
  local_14 = param_1;
  local_10 = param_3;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_14);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_create @ 00012064 */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: param_pthread_join @ 0001206c */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  pthread_t *__arg;
  pthread_t *__newthread;
  pthread_t *ppVar4;
  pthread_t *ppVar5;
  pthread_t apStack_54 [4];
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  
  ppVar4 = apStack_54 + 3;
  iVar3 = 0;
  local_24 = 0;
  apStack_54[3] = 1;
  uStack_44 = 10;
  local_40 = 0;
  uStack_3c = 0xb;
  local_38 = 0x14;
  uStack_34 = 0;
  uStack_30 = 0x15;
  uStack_2c = 0x1e;
  local_28 = 0;
  __arg = ppVar4;
  __newthread = apStack_54;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_00012114;
    }
    iVar3 = iVar3 + 1;
    __newthread = __newthread + 1;
    __arg = __arg + 3;
    iVar1 = 0;
    ppVar5 = apStack_54;
  } while (iVar3 != 3);
  do {
    iVar2 = pthread_join(*ppVar5,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + ppVar4[2];
    ppVar4 = ppVar4 + 3;
    ppVar5 = ppVar5 + 1;
  } while (iVar3 != 0);
LAB_00012114:
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: param_mutex_lock @ 0001215c */

void param_mutex_lock(int param_1,int param_2)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  int local_1c;
  
  local_1c = param_2;
  __ptr = malloc(param_1 << 2);
  if (__ptr != (void *)0x0) {
    shared_counter = 0;
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)__ptr + iVar2 * 4),(pthread_attr_t *)0x0,
                             thread_increment,&local_1c);
      if (iVar1 != 0) {
        free(__ptr);
        return;
      }
    }
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar2 * 4),(void **)0x0);
    }
    free(__ptr);
  }
  return;
}



/* Function: call_mutex_lock @ 00012218 */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: param_condition_variable @ 00012224 */

undefined4 param_condition_variable(pthread_t param_1,pthread_t param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_18;
  pthread_t local_14;
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  ready = 0;
  data = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_14,&local_10);
      pthread_join(local_18,(void **)0x0);
      uVar2 = *local_10;
      free(local_10);
    }
    else {
      pthread_cancel(local_14);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_atomic_ops @ 000122ec */

void param_atomic_ops(int param_1,undefined4 param_2,pthread_t param_3)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  undefined4 local_24;
  pthread_t local_20;
  int local_1c;
  
  local_1c = 0;
  local_24 = param_2;
  local_20 = param_3;
  __ptr = malloc(param_1 << 2);
  if (__ptr != (void *)0x0) {
    __sync_synchronize(__ptr);
    atomic_counter = 0;
    __sync_synchronize();
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)__ptr + iVar2 * 4),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&local_24);
      if (iVar1 != 0) {
        free(__ptr);
        goto LAB_000123b8;
      }
    }
    iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(local_20,(void **)0x0);
    }
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar2 * 4),(void **)0x0);
    }
    __sync_synchronize();
    __sync_synchronize();
    free(__ptr);
  }
LAB_000123b8:
  if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: call_atomic_ops @ 00012408 */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: param_thread_local_storage @ 00012414 */

void param_thread_local_storage(int param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *local_28;
  int local_24;
  
  local_24 = 0;
  __ptr = malloc(param_1 << 2);
  __ptr_00 = malloc(param_1 << 2);
  if (__ptr_00 != (void *)0x0 && __ptr != (void *)0x0) {
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      pvVar1 = malloc(0x10);
      *(void **)((int)__ptr_00 + iVar4 * 4) = pvVar1;
      __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar4);
    }
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar4 * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)__ptr_00 + iVar4 * 4));
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)((int)__ptr_00 + -4);
        do {
          puVar3 = puVar3 + 1;
          free((void *)*puVar3);
        } while (puVar3 != (undefined4 *)((int)__ptr_00 + iVar4 * 4));
        free(__ptr_00);
        free(__ptr);
        goto LAB_00012540;
      }
    }
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar4 * 4),&local_28);
      free(local_28);
      free(*(void **)((int)__ptr_00 + iVar4 * 4));
    }
    free(__ptr_00);
    free(__ptr);
  }
LAB_00012540:
  if (local_24 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 000125ac */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 000125b4 */

void test_thread_concurrency(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00013937);
  uVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00013955,uVar1);
  uVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00013971,uVar1);
  uVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_0001398e,uVar1);
  uVar1 = param_condition_variable();
  __printf_chk(1,&DAT_000139aa,uVar1);
  uVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_000139c6,uVar1);
  uVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_000139e2,uVar1);
  return;
}



/* Function: __sync_fetch_and_add_4 @ 00012658 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 00012690 */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 000126c8 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 00012700 */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 00012738 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00012770 */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 000127ac */

int __sync_fetch_and_add_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 0001280c */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 0001286c */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 000128cc */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 0001292c */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 0001298c */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 000129f0 */

int __sync_fetch_and_add_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00012a4c */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 00012aa8 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00012b04 */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 00012b60 */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 00012bbc */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00012c1c */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 + param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00012c54 */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 - param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00012c8c */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 | param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 00012cc4 */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 & param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 00012cfc */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 ^ param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00012d34 */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = ~(*param_1 & param_2);
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 00012d70 */

int __sync_add_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 00012dd8 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 00012e40 */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 00012ea8 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 00012f10 */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 00012f78 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 00012fe4 */

int __sync_add_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 00013048 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 000130ac */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 00013110 */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 00013174 */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 000131d8 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 00013240 */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    if (*param_1 != param_2) {
      return *param_1;
    }
    iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  } while (iVar1 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 00013290 */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xffff)) {
      return (int)(short)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 00013308 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xff)) {
      return (int)(char)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 0001337c */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 000133a8 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000133c4 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 000133ec */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 00013424 */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 00013484 */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 000134e0 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 00013504 */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 00013524 */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 00013544 */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 00013578 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 114 */
