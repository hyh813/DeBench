/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_gcc_O2_no_g
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
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *param_1;
  param_1[2] = 0;
  if (iVar2 <= param_1[1]) {
    do {
      iVar1 = iVar1 + iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_1[1] + 1);
    param_1[2] = iVar1;
  }
  return 0;
}



/* Function: thread_compute @ 000110f0 */

void thread_compute(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = malloc(4);
  *piVar1 = iVar2 * iVar2;
  return;
}



/* Function: thread_increment @ 00011118 */

undefined4 thread_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
      shared_counter = shared_counter + 1;
      iVar1 = iVar1 + 1;
      pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
      usleep(1000);
    } while (iVar2 != iVar1);
  }
  return 0;
}



/* Function: consumer_thread @ 00011170 */

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



/* Function: producer_thread @ 000111d0 */

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



/* Function: thread_atomic_increment @ 00011218 */

/* WARNING: Removing unreachable block (ram,0x0001129c) */

undefined4 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      __sync_fetch_and_add_4(&atomic_counter,1);
      __sync_val_compare_and_swap_4(&atomic_counter,iVar1,iVar1 + 1000);
      iVar1 = iVar1 + 1;
    } while (iVar2 != iVar1);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 000112a8 */

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



/* Function: thread_tls_test @ 000112d8 */

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



/* Function: param_strcpy @ 00011324 */

int param_strcpy(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(param_1,param_2);
  return (int)pcVar1 - (int)param_1;
}



/* Function: call_strcpy @ 00011338 */

undefined4 call_strcpy(void)

{
  return 8;
}



/* Function: param_strcmp @ 00011340 */

undefined4 param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 1;
}



/* Function: call_strcmp @ 00011364 */

undefined4 call_strcmp(void)

{
  return 0;
}



/* Function: call_strlen @ 00011370 */

undefined4 call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00011378 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 0001138c */

undefined4 call_memcpy(void)

{
  return 0x5a;
}



/* Function: param_memcmp @ 00011394 */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 1;
}



/* Function: call_memcmp @ 000113b8 */

void call_memcmp(void)

{
  int iVar1;
  int iVar2;
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
  
  local_38 = 1;
  uStack_34 = 2;
  uStack_30 = 3;
  local_14 = 0;
  local_2c = 1;
  uStack_28 = 2;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 2;
  uStack_18 = 3;
  iVar1 = memcmp(&local_38,&local_2c,0xc);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 1;
  }
  iVar2 = memcmp(&local_38,&local_20,0xc);
  if (iVar2 < 1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 1;
  }
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 + iVar1);
  }
  return;
}



/* Function: param_printf @ 00011474 */

void param_printf(undefined4 param_1,undefined4 param_2)

{
  __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
  return;
}



/* Function: call_printf @ 0001148c */

void call_printf(void)

{
  __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_000139fc);
  return;
}



/* Function: param_scanf @ 000114a8 */

void param_scanf(undefined4 param_1)

{
  undefined8 uVar1;
  int iStack_14;
  int iStack_10;
  int local_c;
  
  local_c = 0;
  uVar1 = __isoc99_sscanf(param_1,"%d,%d",&iStack_14,&iStack_10);
  if ((int)uVar1 == 2) {
    iStack_14 = iStack_14 + iStack_10;
  }
  else {
    iStack_14 = -1;
  }
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iStack_14,(int)((ulonglong)uVar1 >> 0x20),local_c,0);
}



/* Function: call_scanf @ 0001150c */

void call_scanf(void)

{
  undefined8 uVar1;
  int iStack_14;
  int iStack_10;
  int local_c;
  
  local_c = 0;
  uVar1 = __isoc99_sscanf("123,456","%d,%d",&iStack_14,&iStack_10);
  if ((int)uVar1 == 2) {
    iStack_14 = iStack_14 + iStack_10;
  }
  else {
    iStack_14 = -1;
  }
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iStack_14,(int)((ulonglong)uVar1 >> 0x20),local_c,0);
}



/* Function: param_fopen_fclose @ 00011578 */

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



/* Function: call_fopen_fclose @ 000115b4 */

undefined4 call_fopen_fclose(void)

{
  FILE *__stream;
  int iVar1;
  
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    if (-1 < iVar1) {
      return 0x2a;
    }
  }
  return 0xffffffff;
}



/* Function: param_fread_fwrite @ 00011600 */

void param_fread_fwrite(char *param_1)

{
  FILE *__s;
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_34 [32];
  int local_14;
  
  local_14 = 0;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar1 == 0x12) {
      rewind(__s);
      sVar1 = fread(acStack_34,1,0x12,__s);
      acStack_34[sVar1] = '\0';
      fclose(__s);
      unlink(param_1);
      if (sVar1 == 0x12) {
        iVar2 = strcmp(acStack_34,"BinBench Test Data");
        if (iVar2 == 0) {
          uVar3 = 0x2a;
        }
        else {
          uVar3 = 0xfffffffd;
        }
      }
      else {
        uVar3 = 0xfffffffd;
      }
    }
    else {
      fclose(__s);
      uVar3 = 0xfffffffe;
    }
  }
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* Function: call_fread_fwrite @ 000116fc */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00011708 */

int param_malloc_free(int param_1)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    if (param_1 != 0) {
      iVar1 = 0;
      piVar2 = __ptr + -1;
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 10;
      } while (piVar2 != __ptr + param_1 + -1);
    }
    iVar1 = __ptr[param_1 + -1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00011770 */

int call_malloc_free(void)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    piVar1 = __ptr + -1;
    do {
      piVar1 = piVar1 + 1;
      *piVar1 = iVar2;
      iVar2 = iVar2 + 10;
    } while (iVar2 != 100);
    iVar2 = *__ptr + __ptr[9];
    free(__ptr);
  }
  return iVar2;
}



/* Function: param_memset @ 000117bc */

int param_memset(void *param_1,size_t param_2)

{
  int iVar1;
  byte *pbVar2;
  
  memset(param_1,0,param_2);
  if (param_2 != 0) {
    iVar1 = 0;
    pbVar2 = (byte *)((int)param_1 + -1);
    do {
      pbVar2 = pbVar2 + 1;
      iVar1 = iVar1 + (uint)*pbVar2;
    } while (pbVar2 != (byte *)((int)param_1 + (param_2 - 1)));
    return iVar1;
  }
  return 0;
}



/* Function: call_memset @ 00011808 */

undefined4 call_memset(void)

{
  return 0;
}



/* Function: param_strchr_strstr @ 00011810 */

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



/* Function: call_strchr_strstr @ 0001184c */

undefined4 call_strchr_strstr(void)

{
  return 0xf;
}



/* Function: test_standard_library_functions @ 00011854 */

void test_standard_library_functions(void)

{
  undefined4 uVar1;
  int iVar2;
  FILE *__stream;
  int *__ptr;
  int *piVar3;
  int iStack_14;
  int iStack_10;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00013a54);
  __printf_chk(1,&DAT_00013a78,8);
  uVar1 = call_strcmp();
  __printf_chk(1,&DAT_00013a94,uVar1);
  __printf_chk(1,&DAT_00013ab0,0xc);
  __printf_chk(1,&DAT_00013acc,0x5a);
  uVar1 = call_memcmp();
  __printf_chk(1,&DAT_00013ae8,uVar1);
  uVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_000139fc);
  __printf_chk(1,&DAT_00013b04,uVar1);
  iVar2 = __isoc99_sscanf("123,456","%d,%d",&iStack_14,&iStack_10);
  if (iVar2 == 2) {
    iStack_14 = iStack_14 + iStack_10;
  }
  else {
    iStack_14 = -1;
  }
  __printf_chk(1,&DAT_00013b20,iStack_14);
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar2 = fileno(__stream);
    fclose(__stream);
    if (-1 < iVar2) {
      uVar1 = 0x2a;
      goto LAB_00011954;
    }
  }
  uVar1 = 0xffffffff;
LAB_00011954:
  __printf_chk(1,&DAT_00013b40,uVar1);
  uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  __printf_chk(1,&DAT_00013b5c,uVar1);
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    piVar3 = __ptr + -1;
    do {
      piVar3 = piVar3 + 1;
      *piVar3 = iVar2;
      iVar2 = iVar2 + 10;
    } while (iVar2 != 100);
    iVar2 = *__ptr + __ptr[9];
    free(__ptr);
  }
  __printf_chk(1,&DAT_00013b78,iVar2);
  uVar1 = call_memset();
  __printf_chk(1,&DAT_00013b94,uVar1);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __printf_chk(1,&DAT_00013bb0,0xf);
  return;
}



/* Function: param_linux_syscall @ 00011a6c */

long param_linux_syscall(undefined4 param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = syscall(5,param_1,0);
  if (-1 < lVar1) {
    syscall(6,lVar1);
    return lVar1;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* Function: call_linux_syscall @ 00011ab0 */

undefined4 call_linux_syscall(void)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  
  lVar1 = syscall(5,"/etc/passwd",0);
  if (lVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 < 1) {
      uVar3 = 0x2a;
    }
    else {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  syscall(6);
  return 0x2a;
}



/* Function: param_win32_api @ 00011af8 */

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
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* Function: call_win32_api @ 00011b60 */

void call_win32_api(void)

{
  int iVar1;
  undefined4 uVar2;
  stat sStack_68;
  int local_c;
  
  local_c = 0;
  iVar1 = stat("/etc/passwd",&sStack_68);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (sStack_68.st_size < 1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0x2a;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* Function: param_fork_exec @ 00011bd0 */

void param_fork_exec(char *param_1,undefined4 param_2)

{
  __pid_t _Var1;
  uint uVar2;
  uint local_18;
  int local_14;
  
  local_14 = 0;
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
    else if ((local_18 & 0x7f) == 0) {
      uVar2 = (int)local_18 >> 8 & 0xff;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* Function: call_fork_exec @ 00011c74 */

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



/* Function: param_pipe_communication @ 00011c98 */

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
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* Function: param_socket_create @ 00011d80 */

void param_socket_create(void)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  sockaddr local_1c;
  int local_c;
  
  local_c = 0;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 1;
    iVar1 = setsockopt(__fd,1,2,&local_20,4);
    if (iVar1 < 0) {
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      local_1c.sa_data[2] = '\0';
      local_1c.sa_data[3] = '\0';
      local_1c.sa_data[4] = '\0';
      local_1c.sa_data[5] = '\0';
      local_1c.sa_family = 2;
      local_1c.sa_data[0] = '\0';
      local_1c.sa_data[1] = '\0';
      local_1c.sa_data[6] = '\0';
      local_1c.sa_data[7] = '\0';
      local_1c.sa_data[8] = '\0';
      local_1c.sa_data[9] = '\0';
      local_1c.sa_data[10] = '\0';
      local_1c.sa_data[0xb] = '\0';
      local_1c.sa_data[0xc] = '\0';
      local_1c.sa_data[0xd] = '\0';
      iVar1 = bind(__fd,&local_1c,0x10);
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
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* Function: param_shmget_shmat @ 00011e88 */

undefined4 param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  void *__dest;
  
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
      if (__dest != (void *)0xffffffff) {
        memcpy(__dest,"SharedMemory",0xd);
        shmdt(__dest);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return 0xc;
      }
      return 0xfffffffd;
    }
  }
  return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00011f3c */

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



/* Function: param_signal_handling @ 00011f54 */

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
  if (signal_received == 0) {
    iVar2 = 1000;
    do {
      usleep(1000);
      if (signal_received != 0) break;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (signal_received == 0) {
    return 0xfffffffd;
  }
  if (signal_number != 10) {
    return 0xfffffffc;
  }
  signal_received = 0;
  alarm(1);
  if (signal_received == 0) {
    iVar2 = 2000;
    do {
      usleep(1000);
      if (signal_received != 0) break;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((signal_received != 0) && (signal_number == 0xe)) {
    signal(10,(__sighandler_t)0x0);
    signal(0xe,(__sighandler_t)0x0);
    return 0x2a;
  }
  return 0xfffffffb;
}



/* Function: test_system_calls @ 00012080 */

void test_system_calls(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  stat sStack_68;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00013c08);
  lVar1 = syscall(5,"/etc/passwd",0);
  if (lVar1 < 0) {
    piVar3 = __errno_location();
    if (*piVar3 < 1) {
      uVar4 = 0x2a;
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  else {
    syscall(6);
    uVar4 = 0x2a;
  }
  __printf_chk(1,&DAT_00013c24,uVar4);
  stat("/etc/passwd",&sStack_68);
  __printf_chk(1,&DAT_00013c40);
  iVar2 = param_fork_exec("/bin/true",0);
  if (iVar2 == 0) {
    uVar4 = 0x2a;
  }
  else {
    uVar4 = 0xffffffff;
  }
  __printf_chk(1,&DAT_00013c5c,uVar4);
  uVar4 = param_pipe_communication();
  __printf_chk(1,&DAT_00013c78,uVar4);
  uVar4 = param_socket_create();
  __printf_chk(1,&DAT_00013c94,uVar4);
  iVar2 = param_shmget_shmat();
  if (iVar2 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0x2a;
  }
  __printf_chk(1,&DAT_00013cb0,uVar4);
  uVar4 = param_signal_handling();
  if (local_c == 0) {
    __printf_chk(1,&DAT_00013ccc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,local_c,uVar4,0);
}



/* Function: param_pthread_create @ 000121f4 */

undefined4 param_pthread_create(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  local_14 = param_1;
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



/* Function: call_pthread_create @ 00012280 */

/* WARNING: Type propagation algorithm not settling */

undefined4 call_pthread_create(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_18 [2];
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  local_18[1] = 7;
  iVar1 = pthread_create(local_18,(pthread_attr_t *)0x0,thread_compute,local_18 + 1);
  if (iVar1 == 0) {
    pthread_join(local_18[0],&local_10);
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



/* Function: param_pthread_join @ 0001230c */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  pthread_t *ppVar5;
  pthread_t apStack_54 [3];
  pthread_t local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  pthread_t local_24;
  
  ppVar5 = &local_48;
  local_24 = 0;
  local_48 = 1;
  uStack_44 = 10;
  local_40 = 0;
  uStack_3c = 0xb;
  local_38 = 0x14;
  uStack_34 = 0;
  uStack_30 = 0x15;
  uStack_2c = 0x1e;
  local_28 = 0;
  ppVar3 = ppVar5;
  ppVar4 = apStack_54;
  do {
    iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_sum,ppVar3);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_000123b4;
    }
    ppVar3 = ppVar3 + 3;
    ppVar4 = ppVar4 + 1;
  } while (ppVar3 != &local_24);
  iVar1 = 0;
  ppVar3 = apStack_54;
  do {
    ppVar4 = ppVar3 + 1;
    iVar2 = pthread_join(*ppVar3,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar1 = iVar1 + ppVar5[2];
    ppVar5 = ppVar5 + 3;
    ppVar3 = ppVar4;
  } while (ppVar4 != &local_48);
LAB_000123b4:
  if (local_24 == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_mutex_lock @ 000123fc */

undefined4 param_mutex_lock(int param_1,int param_2)

{
  pthread_t *__ptr;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  pthread_t *ppVar4;
  int iVar5;
  bool bVar6;
  int local_24;
  
  local_24 = param_2;
  __ptr = malloc(param_1 << 2);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    ppVar4 = __ptr;
    iVar3 = 0;
    if (0 < param_1) {
      do {
        iVar5 = iVar3;
        iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_24);
        iVar3 = iVar5 + 1;
        ppVar4 = ppVar4 + 1;
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
      } while (param_1 != iVar3);
      ppVar4 = __ptr + -1;
      iVar3 = 0;
      do {
        ppVar4 = ppVar4 + 1;
        pthread_join(*ppVar4,(void **)0x0);
        bVar6 = iVar5 != iVar3;
        iVar3 = iVar3 + 1;
      } while (bVar6);
    }
    free(__ptr);
    if (shared_counter == local_24 * param_1) {
      uVar2 = 0x2a;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_mutex_lock @ 000124d4 */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: param_condition_variable @ 000124e0 */

undefined4 param_condition_variable(void)

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



/* Function: param_atomic_ops @ 000125ac */

void param_atomic_ops(int param_1,undefined4 param_2)

{
  pthread_t *__ptr;
  int iVar1;
  int iVar2;
  pthread_t *ppVar3;
  undefined4 local_2c;
  pthread_t local_28;
  int local_24;
  
  local_24 = 0;
  local_2c = param_2;
  __ptr = malloc(param_1 << 2);
  if (__ptr != (pthread_t *)0x0) {
    iVar2 = 0;
    __sync_synchronize();
    atomic_counter = 0;
    __sync_synchronize();
    ppVar3 = __ptr;
    if (param_1 < 1) {
      iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar2 == 0) {
        pthread_join(local_28,(void **)0x0);
      }
    }
    else {
      do {
        iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_2c);
        if (iVar1 != 0) {
          free(__ptr);
          goto LAB_0001263c;
        }
        iVar2 = iVar2 + 1;
        ppVar3 = ppVar3 + 1;
      } while (param_1 != iVar2);
      iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar2 == 0) {
        pthread_join(local_28,(void **)0x0);
      }
      ppVar3 = __ptr + -1;
      iVar2 = 0;
      do {
        ppVar3 = ppVar3 + 1;
        iVar2 = iVar2 + 1;
        pthread_join(*ppVar3,(void **)0x0);
      } while (iVar2 < param_1);
    }
    __sync_synchronize();
    __sync_synchronize();
    free(__ptr);
  }
LAB_0001263c:
  if (local_24 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_atomic_ops @ 0001270c */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: param_thread_local_storage @ 00012718 */

void param_thread_local_storage(int param_1)

{
  pthread_t *__ptr;
  void *__ptr_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  pthread_t *ppVar6;
  undefined4 *puVar7;
  bool bVar8;
  int *local_30;
  int local_2c;
  
  local_2c = 0;
  __ptr = malloc(param_1 * 4);
  __ptr_00 = malloc(param_1 * 4);
  if (__ptr_00 != (void *)0x0 && __ptr != (pthread_t *)0x0) {
    if (0 < param_1) {
      puVar7 = (undefined4 *)((int)__ptr_00 + -4);
      iVar4 = 0;
      puVar5 = puVar7;
      do {
        iVar3 = iVar4;
        pvVar1 = malloc(0x10);
        puVar5 = puVar5 + 1;
        *puVar5 = pvVar1;
        __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar3);
        iVar4 = iVar3 + 1;
      } while (param_1 != iVar3 + 1);
      iVar4 = 0;
      ppVar6 = __ptr;
      puVar5 = puVar7;
      do {
        puVar5 = puVar5 + 1;
        iVar2 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,(void *)*puVar5);
        if (iVar2 != 0) {
          do {
            puVar7 = puVar7 + 1;
            free((void *)*puVar7);
          } while ((undefined4 *)((int)__ptr_00 + iVar4 * 4) != puVar7);
          free(__ptr_00);
          free(__ptr);
          goto LAB_00012824;
        }
        bVar8 = iVar3 != iVar4;
        ppVar6 = ppVar6 + 1;
        iVar4 = iVar4 + 1;
      } while (bVar8);
      ppVar6 = __ptr + -1;
      iVar4 = 0;
      do {
        ppVar6 = ppVar6 + 1;
        pthread_join(*ppVar6,&local_30);
        free(local_30);
        puVar7 = puVar7 + 1;
        free((void *)*puVar7);
        bVar8 = iVar3 != iVar4;
        iVar4 = iVar4 + 1;
      } while (bVar8);
    }
    free(__ptr_00);
    free(__ptr);
  }
LAB_00012824:
  if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: call_thread_local_storage @ 000128f8 */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 00012900 */

/* WARNING: Type propagation algorithm not settling */

void test_thread_concurrency(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_18 [2];
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00013cf4);
  local_18[1] = 7;
  iVar1 = pthread_create(local_18,(pthread_attr_t *)0x0,thread_compute,local_18 + 1);
  if (iVar1 == 0) {
    pthread_join(local_18[0],&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  __printf_chk(1,&DAT_00013d14,uVar2);
  uVar2 = param_pthread_join();
  __printf_chk(1,&DAT_00013d30,uVar2);
  uVar2 = param_mutex_lock(4,1000);
  __printf_chk(1,&DAT_00013d50,uVar2);
  uVar2 = param_condition_variable();
  __printf_chk(1,&DAT_00013d6c,uVar2);
  uVar2 = param_atomic_ops(4,500);
  __printf_chk(1,&DAT_00013d88,uVar2);
  uVar2 = param_thread_local_storage(4);
  if (local_c == 0) {
    __printf_chk(1,&DAT_00013da4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,local_c,uVar2,0);
}



/* Function: __sync_fetch_and_add_4 @ 00012a34 */

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



/* Function: __sync_fetch_and_sub_4 @ 00012a6c */

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



/* Function: __sync_fetch_and_or_4 @ 00012aa4 */

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



/* Function: __sync_fetch_and_and_4 @ 00012adc */

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



/* Function: __sync_fetch_and_xor_4 @ 00012b14 */

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



/* Function: __sync_fetch_and_nand_4 @ 00012b4c */

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



/* Function: __sync_fetch_and_add_2 @ 00012b88 */

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



/* Function: __sync_fetch_and_sub_2 @ 00012be8 */

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



/* Function: __sync_fetch_and_or_2 @ 00012c48 */

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



/* Function: __sync_fetch_and_and_2 @ 00012ca8 */

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



/* Function: __sync_fetch_and_xor_2 @ 00012d08 */

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



/* Function: __sync_fetch_and_nand_2 @ 00012d68 */

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



/* Function: __sync_fetch_and_add_1 @ 00012dcc */

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



/* Function: __sync_fetch_and_sub_1 @ 00012e28 */

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



/* Function: __sync_fetch_and_or_1 @ 00012e84 */

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



/* Function: __sync_fetch_and_and_1 @ 00012ee0 */

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



/* Function: __sync_fetch_and_xor_1 @ 00012f3c */

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



/* Function: __sync_fetch_and_nand_1 @ 00012f98 */

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



/* Function: __sync_add_and_fetch_4 @ 00012ff8 */

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



/* Function: __sync_sub_and_fetch_4 @ 00013030 */

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



/* Function: __sync_or_and_fetch_4 @ 00013068 */

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



/* Function: __sync_and_and_fetch_4 @ 000130a0 */

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



/* Function: __sync_xor_and_fetch_4 @ 000130d8 */

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



/* Function: __sync_nand_and_fetch_4 @ 00013110 */

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



/* Function: __sync_add_and_fetch_2 @ 0001314c */

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



/* Function: __sync_sub_and_fetch_2 @ 000131b4 */

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



/* Function: __sync_or_and_fetch_2 @ 0001321c */

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



/* Function: __sync_and_and_fetch_2 @ 00013284 */

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



/* Function: __sync_xor_and_fetch_2 @ 000132ec */

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



/* Function: __sync_nand_and_fetch_2 @ 00013354 */

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



/* Function: __sync_add_and_fetch_1 @ 000133c0 */

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



/* Function: __sync_sub_and_fetch_1 @ 00013424 */

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



/* Function: __sync_or_and_fetch_1 @ 00013488 */

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



/* Function: __sync_and_and_fetch_1 @ 000134ec */

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



/* Function: __sync_xor_and_fetch_1 @ 00013550 */

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



/* Function: __sync_nand_and_fetch_1 @ 000135b4 */

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



/* Function: __sync_val_compare_and_swap_4 @ 0001361c */

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



/* Function: __sync_val_compare_and_swap_2 @ 0001366c */

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



/* Function: __sync_val_compare_and_swap_1 @ 000136e4 */

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



/* Function: __sync_bool_compare_and_swap_4 @ 00013758 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00013784 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000137a0 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 000137c8 */

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



/* Function: __sync_lock_test_and_set_2 @ 00013800 */

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



/* Function: __sync_lock_test_and_set_1 @ 00013860 */

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



/* Function: __sync_lock_release_8 @ 000138bc */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 000138e0 */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 00013900 */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 00013920 */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 00013948 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 113 */
