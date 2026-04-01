/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/6/6_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00102000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 001023c0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001023f0 */

/* WARNING: Removing unreachable block (ram,0x00102403) */
/* WARNING: Removing unreachable block (ram,0x0010240f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00102420 */

/* WARNING: Removing unreachable block (ram,0x00102444) */
/* WARNING: Removing unreachable block (ram,0x00102450) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102460 */

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



/* Function: param_strcpy @ 001024b0 */

void param_strcpy(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}



/* Function: call_strcpy @ 001024e0 */

undefined4 call_strcpy(void)

{
  undefined4 uVar1;
  undefined1 local_28 [32];
  
  uVar1 = param_strcpy(local_28,"HelloLib");
  return uVar1;
}



/* Function: param_strcmp @ 00102510 */

undefined4 param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 local_20;
  
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 < 1) {
    local_20 = 0;
    if (iVar1 < 0) {
      local_20 = 0xffffffff;
    }
  }
  else {
    local_20 = 1;
  }
  return local_20;
}



/* Function: call_strcmp @ 00102570 */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_0010500d,&DAT_00105011);
  iVar2 = param_strcmp(&DAT_00105015);
  iVar3 = param_strcmp(&DAT_00105019,&DAT_0010501d);
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 001025d0 */

size_t param_strlen(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  return sVar1;
}



/* Function: call_strlen @ 00102600 */

void call_strlen(void)

{
  param_strlen("BinBench2025");
  return;
}



/* Function: param_memcpy @ 00102630 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 00102660 */

int call_memcpy(void)

{
  int local_48 [2];
  int local_40;
  int local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = 0x140000000a;
  local_20 = 0x280000001e;
  local_18 = 0x32;
  memset(local_48,0,0x14);
  param_memcpy(local_48,&local_28,0x14);
  return local_48[0] + local_40 + local_38;
}



/* Function: param_memcmp @ 001026c0 */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 local_28;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    local_28 = 0;
    if (iVar1 < 0) {
      local_28 = 0xffffffff;
    }
  }
  else {
    local_28 = 1;
  }
  return local_28;
}



/* Function: call_memcmp @ 00102720 */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  local_14 = 0x200000001;
  local_c = 3;
  local_20 = 0x200000001;
  local_18 = 4;
  local_2c = 0x200000001;
  local_24 = 3;
  iVar1 = param_memcmp(&local_14,&local_20,0xc);
  iVar2 = param_memcmp(&local_14,&local_2c,0xc);
  return iVar1 + iVar2;
}



/* Function: param_printf @ 001027a0 */

int param_printf(uint param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = printf("Value: %d, Name: %s\n",(ulong)param_1,param_2);
  return iVar1;
}



/* Function: call_printf @ 001027d0 */

undefined4 call_printf(void)

{
  undefined4 uVar1;
  
  uVar1 = param_printf(0x2a,"Test");
  return uVar1;
}



/* Function: param_scanf @ 00102800 */

int param_scanf(undefined8 param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_c;
  
  local_18 = param_1;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_1c,&local_20);
  if (iVar1 == 2) {
    local_c = local_1c + local_20;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_scanf @ 00102860 */

void call_scanf(void)

{
  param_scanf("123,456");
  return;
}



/* Function: param_fopen_fclose @ 00102880 */

int param_fopen_fclose(char *param_1)

{
  FILE *__stream;
  int local_c;
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    local_c = -1;
  }
  else {
    local_c = fileno(__stream);
    fclose(__stream);
  }
  return local_c;
}



/* Function: call_fopen_fclose @ 001028e0 */

undefined8 call_fopen_fclose(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_fread_fwrite @ 00102910 */

undefined4 param_fread_fwrite(char *param_1)

{
  char *__ptr;
  int iVar1;
  FILE *__s;
  size_t sVar2;
  size_t sVar3;
  bool bVar4;
  char local_48 [40];
  char *local_20;
  char *local_18;
  undefined4 local_c;
  
  local_20 = "BinBench Test Data";
  local_18 = param_1;
  __s = fopen(param_1,"w+");
  __ptr = local_20;
  if (__s == (FILE *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    sVar2 = strlen(local_20);
    sVar2 = fwrite(__ptr,1,sVar2,__s);
    sVar3 = strlen(local_20);
    if (sVar2 == sVar3) {
      rewind(__s);
      sVar3 = fread(local_48,1,sVar2,__s);
      local_48[sVar3] = '\0';
      fclose(__s);
      unlink(local_18);
      bVar4 = false;
      if (sVar3 == sVar2) {
        iVar1 = strcmp(local_48,local_20);
        bVar4 = iVar1 == 0;
      }
      local_c = 0xfffffffd;
      if (bVar4) {
        local_c = 0x2a;
      }
    }
    else {
      fclose(__s);
      local_c = 0xfffffffe;
    }
  }
  return local_c;
}



/* Function: call_fread_fwrite @ 00102a40 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00102a60 */

int param_malloc_free(ulong param_1)

{
  int *__ptr;
  ulong local_28;
  int local_c;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    local_c = -1;
  }
  else {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      __ptr[local_28] = (int)local_28 * 10;
    }
    local_c = *__ptr + __ptr[param_1 - 1];
    free(__ptr);
  }
  return local_c;
}



/* Function: call_malloc_free @ 00102b10 */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 00102b20 */

int param_memset(void *param_1,ulong param_2)

{
  undefined8 local_30;
  undefined4 local_24;
  
  memset(param_1,0,param_2);
  local_24 = 0;
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    local_24 = (uint)*(byte *)((long)param_1 + local_30) + local_24;
  }
  return local_24;
}



/* Function: call_memset @ 00102b90 */

int call_memset(void)

{
  int local_3c;
  int local_38 [12];
  
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    local_38[local_3c] = 0xff;
  }
  param_memset(local_38,0x28);
  return local_38[0] + local_38[9];
}



/* Function: param_strchr_strstr @ 00102be0 */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
  char *pcVar1;
  undefined4 local_50;
  undefined4 local_48;
  
  pcVar1 = strchr(param_1,(int)param_2);
  if (pcVar1 == (char *)0x0) {
    local_48 = -1;
  }
  else {
    local_48 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    local_50 = -1;
  }
  else {
    local_50 = (int)pcVar1 - (int)param_1;
  }
  return local_48 + local_50;
}



/* Function: call_strchr_strstr @ 00102c90 */

undefined4 call_strchr_strstr(void)

{
  undefined4 uVar1;
  
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}



/* Function: test_standard_library_functions @ 00102cd0 */

void test_standard_library_functions(void)

{
  uint uVar1;
  
  printf(&DAT_001050a6);
  uVar1 = call_strcpy();
  printf(&DAT_001050cb,(ulong)uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_001050e6,(ulong)uVar1);
  uVar1 = call_strlen();
  printf(&DAT_00105101,(ulong)uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_0010511d,(ulong)uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_00105139,(ulong)uVar1);
  uVar1 = call_printf();
  printf(&DAT_00105155,(ulong)uVar1);
  uVar1 = call_scanf();
  printf(&DAT_00105171,(ulong)uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_0010518e,(ulong)uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_001051aa,(ulong)uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_001051c6,(ulong)uVar1);
  uVar1 = call_memset();
  printf(&DAT_001051e2,(ulong)uVar1);
  uVar1 = call_strchr_strstr();
  printf(&DAT_001051fd,(ulong)uVar1);
  return;
}



/* Function: param_linux_syscall @ 00102de0 */

int param_linux_syscall(undefined8 param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_c;
  
  uVar1 = syscall(2,param_1,0);
  local_c = (int)uVar1;
  if (local_c < 0) {
    piVar2 = __errno_location();
    local_c = -*piVar2;
  }
  else {
    syscall(3,uVar1 & 0xffffffff);
  }
  return local_c;
}



/* Function: call_linux_syscall @ 00102e40 */

undefined8 call_linux_syscall(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_win32_api @ 00102e70 */

undefined4 param_win32_api(char *param_1)

{
  int iVar1;
  stat local_a8;
  char *local_18;
  undefined4 local_c;
  
  local_18 = param_1;
  iVar1 = stat(param_1,&local_a8);
  if (iVar1 < 0) {
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xfffffffe;
    if (0 < local_a8.st_size) {
      local_c = 0x2a;
    }
  }
  return local_c;
}



/* Function: call_win32_api @ 00102ed0 */

void call_win32_api(void)

{
  param_win32_api("/etc/passwd");
  return;
}



/* Function: param_fork_exec @ 00102ef0 */

int param_fork_exec(char *param_1,undefined8 param_2)

{
  __pid_t _Var1;
  uint local_28;
  __pid_t local_24;
  undefined8 local_20;
  char *local_18;
  int local_c;
  
  local_20 = param_2;
  local_18 = param_1;
  local_24 = fork();
  if (local_24 < 0) {
    local_c = -1;
  }
  else {
    if (local_24 == 0) {
      execl(local_18,local_18,local_20,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    _Var1 = waitpid(local_24,(int *)&local_28,0);
    if (_Var1 < 0) {
      local_c = -2;
    }
    else if ((local_28 & 0x7f) == 0) {
      local_c = (int)(local_28 & 0xff00) >> 8;
    }
    else {
      local_c = -3;
    }
  }
  return local_c;
}



/* Function: call_fork_exec @ 00102fb0 */

undefined8 call_fork_exec(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_fork_exec("/bin/true",0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_pipe_communication @ 00102ff0 */

undefined4 param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  size_t __n;
  ssize_t sVar3;
  undefined1 local_38 [36];
  int local_14;
  int local_10;
  undefined4 local_c;
  
  iVar1 = pipe(&local_14);
  if (iVar1 < 0) {
    local_c = 0xffffffff;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      local_c = 0xfffffffe;
    }
    else {
      if (_Var2 == 0) {
        close(local_14);
        iVar1 = local_10;
        __n = strlen("HelloPipe");
        write(iVar1,"HelloPipe",__n);
        close(local_10);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_10);
      sVar3 = read(local_14,local_38,0x1f);
      local_38[sVar3] = 0;
      close(local_14);
      wait((void *)0x0);
      local_c = 0xfffffffd;
      if (0 < sVar3) {
        local_c = 0x2a;
      }
    }
  }
  return local_c;
}



/* Function: call_pipe_communication @ 001030e0 */

void call_pipe_communication(void)

{
  param_pipe_communication();
  return;
}



/* Function: param_socket_create @ 001030f0 */

undefined4 param_socket_create(void)

{
  int iVar1;
  sockaddr local_28;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_10 = socket(2,1,0);
  if (local_10 < 0) {
    local_c = 0xffffffff;
  }
  else {
    local_14 = 1;
    iVar1 = setsockopt(local_10,1,2,&local_14,4);
    if (iVar1 < 0) {
      close(local_10);
      local_c = 0xfffffffe;
    }
    else {
      memset(&local_28,0,0x10);
      local_28.sa_family = 2;
      local_28.sa_data._0_2_ = htons(0);
      local_28.sa_data[2] = '\0';
      local_28.sa_data[3] = '\0';
      local_28.sa_data[4] = '\0';
      local_28.sa_data[5] = '\0';
      iVar1 = bind(local_10,&local_28,0x10);
      if (iVar1 < 0) {
        close(local_10);
        local_c = 0xfffffffd;
      }
      else {
        iVar1 = listen(local_10,5);
        if (iVar1 < 0) {
          close(local_10);
          local_c = 0xfffffffc;
        }
        else {
          close(local_10);
          local_c = 0x2a;
        }
      }
    }
  }
  return local_c;
}



/* Function: call_socket_create @ 00103200 */

void call_socket_create(void)

{
  param_socket_create();
  return;
}



/* Function: param_shmget_shmat @ 00103210 */

undefined4 param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__dest;
  size_t sVar2;
  undefined4 local_c;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    local_c = 0xffffffff;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      local_c = 0xffffffff;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        local_c = 0xfffffffe;
      }
      else {
        __dest = shmat(iVar1,(void *)0x0,0);
        if (__dest == (char *)0xffffffffffffffff) {
          local_c = 0xfffffffd;
        }
        else {
          strcpy(__dest,"SharedMemory");
          sVar2 = strlen(__dest);
          local_c = (undefined4)sVar2;
          shmdt(__dest);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return local_c;
}



/* Function: call_shmget_shmat @ 00103320 */

undefined8 call_shmget_shmat(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_shmget_shmat();
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_signal_handling @ 00103350 */

undefined4 param_signal_handling(void)

{
  int iVar1;
  __sighandler_t p_Var2;
  int local_10;
  undefined4 local_c;
  
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
    local_c = 0xffffffff;
  }
  else {
    p_Var2 = signal(0xe,signal_handler);
    if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
      local_c = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      local_10 = 1000;
      while( true ) {
        iVar1 = local_10;
        if (signal_received == 0) {
          local_10 = local_10 + -1;
        }
        if (signal_received != 0 || iVar1 < 1) break;
        usleep(1000);
      }
      if (signal_received == 0) {
        local_c = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        local_10 = 2000;
        while( true ) {
          iVar1 = local_10;
          if (signal_received == 0) {
            local_10 = local_10 + -1;
          }
          if (signal_received != 0 || iVar1 < 1) break;
          usleep(1000);
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          local_c = 0xfffffffb;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          local_c = 0x2a;
        }
      }
      else {
        local_c = 0xfffffffc;
      }
    }
  }
  return local_c;
}



/* Function: signal_handler @ 00103510 */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: call_signal_handling @ 00103530 */

void call_signal_handling(void)

{
  param_signal_handling();
  return;
}



/* Function: test_system_calls @ 00103540 */

void test_system_calls(void)

{
  uint uVar1;
  
  printf(&DAT_0010524c);
  uVar1 = call_linux_syscall();
  printf(&DAT_00105268,(ulong)uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_00105284,(ulong)uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_001052a0,(ulong)uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_001052bc,(ulong)uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_001052d8,(ulong)uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_001052f4,(ulong)uVar1);
  uVar1 = call_signal_handling();
  printf(&DAT_00105310,(ulong)uVar1);
  return;
}



/* Function: thread_compute @ 001035f0 */

int * thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00103640 */

undefined4 param_pthread_create(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_28;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = param_1;
  local_10 = param_1;
  iVar2 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar2 == 0) {
    pthread_join(local_18,&local_28);
    uVar1 = *local_28;
    free(local_28);
    local_c = uVar1;
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: call_pthread_create @ 001036b0 */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: thread_sum @ 001036c0 */

undefined8 thread_sum(int *param_1)

{
  int local_1c;
  
  param_1[2] = 0;
  for (local_1c = *param_1; local_1c <= param_1[1]; local_1c = local_1c + 1) {
    param_1[2] = local_1c + param_1[2];
  }
  return 0;
}



/* Function: param_pthread_join @ 00103720 */

int param_pthread_join(void)

{
  int iVar1;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [6];
  undefined4 local_40;
  undefined4 local_3c;
  pthread_t local_28 [4];
  
  memset(local_58,0,0x24);
  local_58[0] = 1;
  local_58[1] = 10;
  local_58[3] = 0xb;
  local_58[4] = 0x14;
  local_40 = 0x15;
  local_3c = 0x1e;
  for (local_5c = 0; local_5c < 3; local_5c = local_5c + 1) {
    iVar1 = pthread_create(local_28 + local_5c,(pthread_attr_t *)0x0,thread_sum,
                           local_58 + (long)local_5c * 3);
    if (iVar1 != 0) {
      return -1;
    }
  }
  local_60 = 0;
  local_64 = 0;
  while( true ) {
    if (2 < local_64) {
      return local_60;
    }
    iVar1 = pthread_join(local_28[local_64],(void **)0x0);
    if (iVar1 != 0) break;
    local_60 = local_58[(long)local_64 * 3 + 2] + local_60;
    local_64 = local_64 + 1;
  }
  return -2;
}



/* Function: call_pthread_join @ 00103840 */

void call_pthread_join(void)

{
  param_pthread_join();
  return;
}



/* Function: thread_increment @ 00103850 */

undefined8 thread_increment(int *param_1)

{
  int iVar1;
  int local_18;
  
  iVar1 = *param_1;
  for (local_18 = 0; local_18 < iVar1; local_18 = local_18 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}



/* Function: param_mutex_lock @ 001038c0 */

undefined4 param_mutex_lock(int param_1,int param_2)

{
  int iVar1;
  void *__ptr;
  int local_28;
  int local_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_1;
  __ptr = malloc((long)param_1 << 3);
  if (__ptr == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_24 = 0; local_24 < local_10; local_24 = local_24 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)__ptr + (long)local_24 * 8),(pthread_attr_t *)0x0,
                             thread_increment,&local_14);
      if (iVar1 != 0) {
        free(__ptr);
        return 0xfffffffe;
      }
    }
    for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
      pthread_join(*(pthread_t *)((long)__ptr + (long)local_28 * 8),(void **)0x0);
    }
    free(__ptr);
    local_c = 0xfffffffd;
    if (shared_counter == local_10 * local_14) {
      local_c = 0x2a;
    }
  }
  return local_c;
}



/* Function: call_mutex_lock @ 001039e0 */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: consumer_thread @ 00103a00 */

undefined4 * consumer_thread(void)

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
  return puVar2;
}



/* Function: producer_thread @ 00103a80 */

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



/* Function: param_condition_variable @ 00103ae0 */

undefined4 param_condition_variable(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_28;
  pthread_t local_20;
  pthread_t local_18;
  undefined4 local_c;
  
  ready = 0;
  data = 0;
  iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar2 == 0) {
    iVar2 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(local_20,&local_28);
      pthread_join(local_18,(void **)0x0);
      uVar1 = *local_28;
      free(local_28);
      local_c = uVar1;
    }
    else {
      pthread_cancel(local_20);
      local_c = 0xfffffffe;
    }
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: call_condition_variable @ 00103ba0 */

void call_condition_variable(void)

{
  param_condition_variable();
  return;
}



/* Function: thread_atomic_increment @ 00103bb0 */

undefined8 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 0; local_18 < *param_1; local_18 = local_18 + 1) {
    LOCK();
    iVar1 = atomic_counter + 1;
    UNLOCK();
    atomic_counter = local_18 + 1000;
    LOCK();
    if (local_18 != iVar1) {
      atomic_counter = iVar1;
    }
    UNLOCK();
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 00103c50 */

undefined8 thread_atomic_load_store(void)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return 0;
}



/* Function: param_atomic_ops @ 00103c80 */

undefined4 param_atomic_ops(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_34;
  pthread_t local_30;
  int local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_1;
  local_20 = malloc((long)param_1 << 3);
  if (local_20 == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    local_24 = 0;
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_20 + (long)local_28 * 8),
                             (pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
      if (iVar1 != 0) {
        free(local_20);
        return 0xfffffffe;
      }
    }
    iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_30,(void **)0x0);
    }
    for (local_34 = 0; iVar1 = atomic_counter, local_34 < local_10; local_34 = local_34 + 1) {
      pthread_join(*(pthread_t *)((long)local_20 + (long)local_34 * 8),(void **)0x0);
    }
    free(local_20);
    local_c = 0xfffffffd;
    if (0 < iVar1) {
      local_c = 0x2a;
    }
  }
  return local_c;
}



/* Function: call_atomic_ops @ 00103dd0 */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: thread_tls_test @ 00103df0 */

undefined4 * thread_tls_test(char *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *in_FS_OFFSET;
  
  lVar1 = in_FS_OFFSET[-6];
  *(int *)(in_FS_OFFSET + -6) = (int)in_FS_OFFSET[-6] + 0x32;
  strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
  puVar2 = malloc(8);
  *puVar2 = (int)lVar1;
  puVar2[1] = (int)in_FS_OFFSET[-6];
  return puVar2;
}



/* Function: param_thread_local_storage @ 00103e70 */

undefined4 param_thread_local_storage(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  void *local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_18 = malloc((long)param_1 << 3);
  local_20 = malloc((long)local_10 << 3);
  if ((local_18 == (void *)0x0) || (local_20 == (void *)0x0)) {
    local_c = 0xffffffff;
  }
  else {
    for (local_24 = 0; (int)local_24 < local_10; local_24 = local_24 + 1) {
      pvVar2 = malloc(0x10);
      *(void **)((long)local_20 + (long)(int)local_24 * 8) = pvVar2;
      snprintf(*(char **)((long)local_20 + (long)(int)local_24 * 8),0x10,"Thread-%d",(ulong)local_24
              );
    }
    for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_18 + (long)local_28 * 8),
                             (pthread_attr_t *)0x0,thread_tls_test,
                             *(void **)((long)local_20 + (long)local_28 * 8));
      if (iVar1 != 0) {
        for (local_2c = 0; local_2c <= local_28; local_2c = local_2c + 1) {
          free(*(void **)((long)local_20 + (long)local_2c * 8));
        }
        free(local_20);
        free(local_18);
        return 0xfffffffe;
      }
    }
    local_30 = 0;
    local_34 = 0;
    for (local_38 = 0; local_38 < local_10; local_38 = local_38 + 1) {
      pthread_join(*(pthread_t *)((long)local_18 + (long)local_38 * 8),&local_40);
      local_30 = *local_40 + local_30;
      local_34 = local_40[1] + local_34;
      free(local_40);
      free(*(void **)((long)local_20 + (long)local_38 * 8));
    }
    free(local_20);
    free(local_18);
    local_c = 0xfffffffd;
    if (local_30 == local_10 * 100 && local_34 == local_10 * 0x96) {
      local_c = 0x2a;
    }
  }
  return local_c;
}



/* Function: call_thread_local_storage @ 001040b0 */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 001040c0 */

void test_thread_concurrency(void)

{
  uint uVar1;
  
  printf(&DAT_00105336);
  uVar1 = call_pthread_create();
  printf(&DAT_00105355,(ulong)uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_00105371,(ulong)uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_0010538e,(ulong)uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_001053aa,(ulong)uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_001053c6,(ulong)uVar1);
  uVar1 = call_thread_local_storage();
  printf(&DAT_001053e2,(ulong)uVar1);
  return;
}



/* Function: main @ 00104160 */

undefined8 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _fini @ 00104188 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
