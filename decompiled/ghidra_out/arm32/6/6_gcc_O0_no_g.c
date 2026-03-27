/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_gcc_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010cac */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010fb0 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010ff4 */

/* WARNING: Removing unreachable block (ram,0x00011008) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00011018 */

/* WARNING: Removing unreachable block (ram,0x00011028) */
/* WARNING: Removing unreachable block (ram,0x00011030) */
/* WARNING: Removing unreachable block (ram,0x00011034) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011044 */

/* WARNING: Removing unreachable block (ram,0x00011060) */
/* WARNING: Removing unreachable block (ram,0x00011068) */
/* WARNING: Removing unreachable block (ram,0x0001106c) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 0001107c */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: param_strcpy @ 000110a8 */

size_t param_strcpy(char *param_1,char *param_2)

{
  size_t sVar1;
  
  strcpy(param_1,param_2);
  sVar1 = strlen(param_1);
  return sVar1;
}



/* Function: call_strcpy @ 000110e0 */

undefined4 call_strcpy(void)

{
  undefined4 uVar1;
  undefined1 auStack_2c [32];
  int local_c;
  
  local_c = 0;
  uVar1 = param_strcpy(auStack_2c,"HelloLib");
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}



/* Function: param_strcmp @ 00011144 */

undefined4 param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: call_strcmp @ 000111a0 */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_00014394,&DAT_00014390);
  iVar2 = param_strcmp(&DAT_00014398,&DAT_00014398);
  iVar3 = param_strcmp(&DAT_000143a0,&DAT_0001439c);
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00011210 */

size_t param_strlen(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  return sVar1;
}



/* Function: call_strlen @ 0001123c */

undefined4 call_strlen(void)

{
  undefined4 uVar1;
  
  uVar1 = param_strlen("BinBench2025");
  return uVar1;
}



/* Function: param_memcpy @ 0001126c */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 000112a4 */

int call_memcpy(void)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int local_20 [6];
  
  local_20[5] = 0;
  local_34 = 10;
  uStack_30 = 0x14;
  uStack_2c = 0x1e;
  uStack_28 = 0x28;
  local_24 = 0x32;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  uVar1 = param_memcpy(local_20,&local_34,0x14);
  if (local_20[5] != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_20[5],0);
  }
  return local_20[0] + local_20[2] + local_20[4];
}



/* Function: param_memcmp @ 00011350 */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: call_memcmp @ 000113b4 */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = 0;
  local_30 = 1;
  uStack_2c = 2;
  uStack_28 = 3;
  local_24 = 1;
  uStack_20 = 2;
  uStack_1c = 4;
  local_18 = 1;
  uStack_14 = 2;
  uStack_10 = 3;
  iVar1 = param_memcmp(&local_30,&local_24,0xc);
  iVar2 = param_memcmp(&local_30,&local_18,0xc);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2,local_c,0);
  }
  return iVar1 + iVar2;
}



/* Function: param_printf @ 00011470 */

int param_printf(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
  return iVar1;
}



/* Function: call_printf @ 000114ac */

undefined4 call_printf(void)

{
  undefined4 uVar1;
  
  uVar1 = param_printf(0x2a,&DAT_000143f8);
  return uVar1;
}



/* Function: param_scanf @ 000114dc */

int param_scanf(undefined4 param_1)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
  if (local_10 == 2) {
    local_18 = local_18 + local_14;
  }
  else {
    local_18 = -1;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,local_c,0);
  }
  return local_18;
}



/* Function: call_scanf @ 00011564 */

undefined4 call_scanf(void)

{
  undefined4 uVar1;
  
  uVar1 = param_scanf("123,456");
  return uVar1;
}



/* Function: param_fopen_fclose @ 00011584 */

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



/* Function: call_fopen_fclose @ 000115e4 */

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



/* Function: param_fread_fwrite @ 00011624 */

undefined4 param_fread_fwrite(char *param_1)

{
  FILE *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_2c [32];
  int local_c;
  
  local_c = 0;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar4 = 0xffffffff;
    iVar3 = 0;
  }
  else {
    sVar1 = strlen("BinBench Test Data");
    sVar1 = fwrite("BinBench Test Data",1,sVar1,__s);
    sVar2 = strlen("BinBench Test Data");
    if (sVar1 == sVar2) {
      rewind(__s);
      sVar2 = fread(acStack_2c,1,sVar1,__s);
      acStack_2c[sVar2] = '\0';
      fclose(__s);
      iVar3 = unlink(param_1);
      if ((sVar2 == sVar1) && (iVar3 = strcmp(acStack_2c,"BinBench Test Data"), iVar3 == 0)) {
        uVar4 = 0x2a;
      }
      else {
        uVar4 = 0xfffffffd;
      }
    }
    else {
      iVar3 = fclose(__s);
      uVar4 = 0xfffffffe;
    }
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3,local_c,0);
  }
  return uVar4;
}



/* Function: call_fread_fwrite @ 0001176c */

undefined4 call_fread_fwrite(void)

{
  undefined4 uVar1;
  
  uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return uVar1;
}



/* Function: param_malloc_free @ 0001178c */

int param_malloc_free(uint param_1)

{
  int *__ptr;
  int iVar1;
  uint local_14;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      __ptr[local_14] = local_14 * 10;
    }
    iVar1 = *__ptr + __ptr[param_1 + 0x3fffffff];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00011868 */

undefined4 call_malloc_free(void)

{
  undefined4 uVar1;
  
  uVar1 = param_malloc_free(10);
  return uVar1;
}



/* Function: param_memset @ 00011884 */

int param_memset(void *param_1,size_t param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  memset(param_1,0,param_2);
  local_14 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_14 = local_14 + (uint)*(byte *)((int)param_1 + local_10);
  }
  return local_14;
}



/* Function: call_memset @ 00011910 */

int call_memset(void)

{
  undefined4 uVar1;
  int local_38;
  int local_34 [10];
  int local_c;
  
  local_c = 0;
  for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
    local_34[local_38] = 0xff;
  }
  uVar1 = param_memset(local_34,0x28);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return local_34[0] + local_34[9];
}



/* Function: param_strchr_strstr @ 000119b0 */

int param_strchr_strstr(char *param_1,byte param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = strchr(param_1,(uint)param_2);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)param_1;
  }
  return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 00011a50 */

undefined4 call_strchr_strstr(void)

{
  undefined4 uVar1;
  
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}



/* Function: test_standard_library_functions @ 00011a90 */

int test_standard_library_functions(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_0001446c);
  uVar1 = call_strcpy();
  printf(&DAT_00014490,uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_000144ac,uVar1);
  uVar1 = call_strlen();
  printf(&DAT_000144c8,uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_000144e4,uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_00014500,uVar1);
  uVar1 = call_printf();
  printf(&DAT_0001451c,uVar1);
  uVar1 = call_scanf();
  printf(&DAT_00014538,uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_00014558,uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_00014574,uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_00014590,uVar1);
  uVar1 = call_memset();
  printf(&DAT_000145ac,uVar1);
  uVar1 = call_strchr_strstr();
  iVar2 = printf(&DAT_000145c8,uVar1);
  return iVar2;
}



/* Function: param_linux_syscall @ 00011bcc */

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



/* Function: call_linux_syscall @ 00011c2c */

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



/* Function: param_win32_api @ 00011c6c */

undefined4 param_win32_api(char *param_1)

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
    __stack_chk_fail(iVar1,local_c,0);
  }
  return uVar2;
}



/* Function: call_win32_api @ 00011cf4 */

undefined4 call_win32_api(void)

{
  undefined4 uVar1;
  
  uVar1 = param_win32_api("/etc/passwd");
  return uVar1;
}



/* Function: param_fork_exec @ 00011d14 */

uint param_fork_exec(char *param_1,undefined4 param_2)

{
  __pid_t __pid;
  uint uVar1;
  uint local_18;
  __pid_t local_14;
  __pid_t local_10;
  int local_c;
  
  local_c = 0;
  __pid = fork();
  local_14 = __pid;
  if (__pid < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (__pid == 0) {
      execl(param_1,param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    __pid = waitpid(__pid,(int *)&local_18,0);
    local_10 = __pid;
    if (__pid < 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((local_18 & 0x7f) == 0) {
      uVar1 = (int)local_18 >> 8 & 0xff;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__pid,local_c,0);
  }
  return uVar1;
}



/* Function: call_fork_exec @ 00011dfc */

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



/* Function: param_pipe_communication @ 00011e40 */

undefined4 param_pipe_communication(void)

{
  int iVar1;
  size_t __n;
  ssize_t sVar2;
  undefined4 uVar3;
  int local_3c;
  int local_38;
  undefined1 auStack_34 [32];
  int local_14;
  
  local_14 = 0;
  iVar1 = pipe(&local_3c);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = fork();
    if (iVar1 < 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      if (iVar1 == 0) {
        close(local_3c);
        iVar1 = local_38;
        __n = strlen("HelloPipe");
        write(iVar1,"HelloPipe",__n);
        close(local_38);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_38);
      sVar2 = read(local_3c,auStack_34,0x1f);
      auStack_34[sVar2] = 0;
      close(local_3c);
      iVar1 = wait((void *)0x0);
      if (sVar2 < 1) {
        uVar3 = 0xfffffffd;
      }
      else {
        uVar3 = 0x2a;
      }
    }
  }
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,local_14,0);
  }
  return uVar3;
}



/* Function: call_pipe_communication @ 00011f84 */

undefined4 call_pipe_communication(void)

{
  undefined4 uVar1;
  
  uVar1 = param_pipe_communication();
  return uVar1;
}



/* Function: param_socket_create @ 00011f9c */

undefined4 param_socket_create(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20;
  sockaddr local_1c;
  int local_c;
  
  local_c = 0;
  iVar1 = socket(2,1,0);
  local_20 = iVar1;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_24 = 1;
    iVar1 = setsockopt(iVar1,1,2,&local_24,4);
    if (iVar1 < 0) {
      iVar1 = close(local_20);
      uVar2 = 0xfffffffe;
    }
    else {
      memset(&local_1c,0,0x10);
      local_1c.sa_family = 2;
      local_1c.sa_data._0_2_ = htons(0);
      local_1c.sa_data[2] = '\0';
      local_1c.sa_data[3] = '\0';
      local_1c.sa_data[4] = '\0';
      local_1c.sa_data[5] = '\0';
      iVar1 = bind(local_20,&local_1c,0x10);
      if (iVar1 < 0) {
        iVar1 = close(local_20);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(local_20,5);
        if (iVar1 < 0) {
          iVar1 = close(local_20);
          uVar2 = 0xfffffffc;
        }
        else {
          iVar1 = close(local_20);
          uVar2 = 0x2a;
        }
      }
    }
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,local_c,0);
  }
  return uVar2;
}



/* Function: call_socket_create @ 000120e4 */

undefined4 call_socket_create(void)

{
  undefined4 uVar1;
  
  uVar1 = param_socket_create();
  return uVar1;
}



/* Function: param_shmget_shmat @ 000120fc */

size_t param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    sVar2 = 0xffffffff;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      sVar2 = 0xffffffff;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        sVar2 = 0xfffffffe;
      }
      else {
        __s = shmat(iVar1,(void *)0x0,0);
        if (__s == (char *)0xffffffff) {
          sVar2 = 0xfffffffd;
        }
        else {
          memcpy(__s,"SharedMemory",0xd);
          sVar2 = strlen(__s);
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return sVar2;
}



/* Function: call_shmget_shmat @ 00012218 */

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



/* Function: signal_handler @ 00012250 */

undefined4 signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return param_1;
}



/* Function: param_signal_handling @ 00012290 */

undefined4 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  undefined4 uVar2;
  int local_c;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffff) {
      uVar2 = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      local_c = 1000;
      while ((signal_received == 0 && (0 < local_c))) {
        usleep(1000);
        local_c = local_c + -1;
      }
      if (signal_received == 0) {
        uVar2 = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        local_c = 2000;
        while ((signal_received == 0 && (0 < local_c))) {
          usleep(1000);
          local_c = local_c + -1;
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          uVar2 = 0xfffffffb;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          uVar2 = 0x2a;
        }
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
  }
  return uVar2;
}



/* Function: call_signal_handling @ 00012400 */

undefined4 call_signal_handling(void)

{
  undefined4 uVar1;
  
  uVar1 = param_signal_handling();
  return uVar1;
}



/* Function: test_system_calls @ 00012418 */

int test_system_calls(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_00014620);
  uVar1 = call_linux_syscall();
  printf(&DAT_0001463c,uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_00014658,uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_00014674,uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_00014690,uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_000146ac,uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_000146c8,uVar1);
  uVar1 = call_signal_handling();
  iVar2 = printf(&DAT_000146e4,uVar1);
  return iVar2;
}



/* Function: thread_compute @ 000124dc */

int * thread_compute(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = malloc(4);
  *piVar1 = iVar2 * iVar2;
  return piVar1;
}



/* Function: param_pthread_create @ 00012540 */

undefined4 param_pthread_create(undefined4 param_1)

{
  int iVar1;
  int extraout_r0;
  undefined4 uVar2;
  pthread_t local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_1c = param_1;
  iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  local_14 = iVar1;
  if (iVar1 == 0) {
    pthread_join(local_20,&local_18);
    local_10 = *local_18;
    free(local_18);
    iVar1 = extraout_r0;
    uVar2 = local_10;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,local_c,0);
  }
  return uVar2;
}



/* Function: call_pthread_create @ 000125f4 */

undefined4 call_pthread_create(void)

{
  undefined4 uVar1;
  
  uVar1 = param_pthread_create(7);
  return uVar1;
}



/* Function: thread_sum @ 00012610 */

undefined4 thread_sum(int *param_1)

{
  int local_10;
  
  param_1[2] = 0;
  for (local_10 = *param_1; local_10 <= param_1[1]; local_10 = local_10 + 1) {
    param_1[2] = param_1[2] + local_10;
  }
  return 0;
}



/* Function: param_pthread_join @ 00012690 */

int param_pthread_join(void)

{
  int iVar1;
  int local_48;
  int local_44;
  int local_40;
  pthread_t apStack_3c [13];
  
  apStack_3c[0xc] = 0;
  apStack_3c[3] = 1;
  apStack_3c[4] = 10;
  apStack_3c[5] = 0;
  apStack_3c[6] = 0xb;
  iVar1 = 0x14;
  apStack_3c[7] = 0x14;
  apStack_3c[8] = 0;
  apStack_3c[9] = 0x15;
  apStack_3c[10] = 0x1e;
  apStack_3c[0xb] = 0;
  for (local_48 = 0; local_48 < 3; local_48 = local_48 + 1) {
    iVar1 = pthread_create(apStack_3c + local_48,(pthread_attr_t *)0x0,thread_sum,
                           apStack_3c + local_48 * 3 + 3);
    if (iVar1 != 0) {
      local_44 = -1;
      goto LAB_000127d4;
    }
  }
  local_44 = 0;
  local_40 = 0;
  do {
    if (2 < local_40) {
LAB_000127d4:
      if (apStack_3c[0xc] == 0) {
        return local_44;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar1,apStack_3c[0xc],0);
    }
    iVar1 = pthread_join(apStack_3c[local_40],(void **)0x0);
    if (iVar1 != 0) {
      local_44 = -2;
      goto LAB_000127d4;
    }
    local_44 = local_44 + apStack_3c[local_40 * 3 + 5];
    local_40 = local_40 + 1;
  } while( true );
}



/* Function: call_pthread_join @ 00012808 */

undefined4 call_pthread_join(void)

{
  undefined4 uVar1;
  
  uVar1 = param_pthread_join();
  return uVar1;
}



/* Function: thread_increment @ 00012820 */

undefined4 thread_increment(int *param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = *param_1;
  for (local_10 = 0; local_10 < iVar1; local_10 = local_10 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}



/* Function: param_mutex_lock @ 000128a8 */

undefined4 param_mutex_lock(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  
  local_20 = param_2;
  local_1c = param_1;
  local_10 = malloc(param_1 << 2);
  if (local_10 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)local_10 + local_18 * 4),(pthread_attr_t *)0x0,
                             thread_increment,&local_20);
      if (iVar1 != 0) {
        free(local_10);
        return 0xfffffffe;
      }
    }
    for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
      pthread_join(*(pthread_t *)((int)local_10 + local_14 * 4),(void **)0x0);
    }
    free(local_10);
    if (local_20 * local_1c == shared_counter) {
      uVar2 = 0x2a;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_mutex_lock @ 000129ec */

undefined4 call_mutex_lock(void)

{
  undefined4 uVar1;
  
  uVar1 = param_mutex_lock(4,1000);
  return uVar1;
}



/* Function: consumer_thread @ 00012a0c */

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



/* Function: producer_thread @ 00012a94 */

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



/* Function: param_condition_variable @ 00012afc */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_1c;
  pthread_t local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_18,&local_14);
      pthread_join(local_1c,(void **)0x0);
      local_10 = *local_14;
      free(local_14);
      uVar2 = local_10;
    }
    else {
      pthread_cancel(local_18);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_condition_variable @ 00012c08 */

undefined4 call_condition_variable(void)

{
  undefined4 uVar1;
  
  uVar1 = param_condition_variable();
  return uVar1;
}



/* Function: thread_atomic_increment @ 00012c20 */

/* WARNING: Removing unreachable block (ram,0x00012cec) */

undefined4 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int local_20;
  
  iVar1 = *param_1;
  for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
    __sync_fetch_and_add_4(&atomic_counter,1);
    __sync_val_compare_and_swap_4(&atomic_counter,local_20,local_20 + 1000);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 00012d04 */

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



/* Function: param_atomic_ops @ 00012d58 */

undefined4 param_atomic_ops(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  int local_2c;
  pthread_t local_28;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_30 = param_2;
  local_2c = param_1;
  local_1c = malloc(param_1 << 2);
  if (local_1c == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    __sync_synchronize();
    atomic_counter = 0;
    __sync_synchronize();
    for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)local_1c + local_24 * 4),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&local_30);
      if (iVar1 != 0) {
        free(local_1c);
        uVar2 = 0xfffffffe;
        goto LAB_00012ecc;
      }
    }
    iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_28,(void **)0x0);
    }
    local_20 = 0;
    while( true ) {
      if (local_2c <= local_20) break;
      pthread_join(*(pthread_t *)((int)local_1c + local_20 * 4),(void **)0x0);
      local_20 = local_20 + 1;
    }
    __sync_synchronize();
    iVar1 = atomic_counter;
    __sync_synchronize();
    local_18 = iVar1;
    free(local_1c);
    if (local_18 < 1) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0x2a;
    }
  }
LAB_00012ecc:
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_atomic_ops @ 00012f04 */

undefined4 call_atomic_ops(void)

{
  undefined4 uVar1;
  
  uVar1 = param_atomic_ops(4,500);
  return uVar1;
}



/* Function: thread_tls_test @ 00012f24 */

undefined4 * thread_tls_test(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 *extraout_r3_00;
  
  iVar1 = __aeabi_read_tp();
  uVar3 = *(undefined4 *)(iVar1 + 8);
  __aeabi_read_tp();
  iVar1 = __aeabi_read_tp();
  *(undefined4 *)(iVar1 + 8) = extraout_r3;
  iVar1 = __aeabi_read_tp();
  strncpy((char *)(iVar1 + 0xc),param_1,0x1f);
  puVar2 = malloc(8);
  *puVar2 = uVar3;
  iVar1 = __aeabi_read_tp();
  *extraout_r3_00 = *(undefined4 *)(iVar1 + 8);
  return puVar2;
}



/* Function: param_thread_local_storage @ 00012fe4 */

undefined4 param_thread_local_storage(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0;
  local_28 = malloc(param_1 << 2);
  local_24 = malloc(param_1 << 2);
  if ((local_28 == (void *)0x0) || (local_24 == (void *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      puVar4 = (undefined4 *)((int)local_24 + local_40 * 4);
      pvVar1 = malloc(0x10);
      *puVar4 = pvVar1;
      snprintf(*(char **)((int)local_24 + local_40 * 4),0x10,"Thread-%d",local_40);
    }
    for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
      iVar2 = pthread_create((pthread_t *)((int)local_28 + local_3c * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)local_24 + local_3c * 4));
      if (iVar2 != 0) {
        for (local_38 = 0; local_38 <= local_3c; local_38 = local_38 + 1) {
          free(*(void **)((int)local_24 + local_38 * 4));
        }
        free(local_24);
        free(local_28);
        uVar3 = 0xfffffffe;
        goto LAB_000132b4;
      }
    }
    local_34 = 0;
    local_30 = 0;
    for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
      pthread_join(*(pthread_t *)((int)local_28 + local_2c * 4),&local_44);
      local_18 = local_44;
      local_34 = local_34 + *local_44;
      local_30 = local_30 + local_44[1];
      free(local_44);
      free(*(void **)((int)local_24 + local_2c * 4));
    }
    free(local_24);
    free(local_28);
    local_20 = param_1 * 100;
    local_1c = param_1 * 0x96;
    if ((local_34 == local_20) && (local_30 == local_1c)) {
      uVar3 = 0x2a;
    }
    else {
      uVar3 = 0xfffffffd;
    }
  }
LAB_000132b4:
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* Function: call_thread_local_storage @ 000132e8 */

undefined4 call_thread_local_storage(void)

{
  undefined4 uVar1;
  
  uVar1 = param_thread_local_storage(4);
  return uVar1;
}



/* Function: test_thread_concurrency @ 00013304 */

int test_thread_concurrency(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_00014730);
  uVar1 = call_pthread_create();
  printf(&DAT_00014750,uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_0001476c,uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_0001478c,uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_000147a8,uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_000147c4,uVar1);
  uVar1 = call_thread_local_storage();
  iVar2 = printf(&DAT_000147e0,uVar1);
  return iVar2;
}



/* Function: main @ 000133b0 */

undefined4 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __sync_fetch_and_add_4 @ 000133d0 */

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



/* Function: __sync_fetch_and_sub_4 @ 00013408 */

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



/* Function: __sync_fetch_and_or_4 @ 00013440 */

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



/* Function: __sync_fetch_and_and_4 @ 00013478 */

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



/* Function: __sync_fetch_and_xor_4 @ 000134b0 */

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



/* Function: __sync_fetch_and_nand_4 @ 000134e8 */

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



/* Function: __sync_fetch_and_add_2 @ 00013524 */

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



/* Function: __sync_fetch_and_sub_2 @ 00013584 */

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



/* Function: __sync_fetch_and_or_2 @ 000135e4 */

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



/* Function: __sync_fetch_and_and_2 @ 00013644 */

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



/* Function: __sync_fetch_and_xor_2 @ 000136a4 */

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



/* Function: __sync_fetch_and_nand_2 @ 00013704 */

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



/* Function: __sync_fetch_and_add_1 @ 00013768 */

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



/* Function: __sync_fetch_and_sub_1 @ 000137c4 */

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



/* Function: __sync_fetch_and_or_1 @ 00013820 */

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



/* Function: __sync_fetch_and_and_1 @ 0001387c */

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



/* Function: __sync_fetch_and_xor_1 @ 000138d8 */

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



/* Function: __sync_fetch_and_nand_1 @ 00013934 */

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



/* Function: __sync_add_and_fetch_4 @ 00013994 */

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



/* Function: __sync_sub_and_fetch_4 @ 000139cc */

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



/* Function: __sync_or_and_fetch_4 @ 00013a04 */

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



/* Function: __sync_and_and_fetch_4 @ 00013a3c */

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



/* Function: __sync_xor_and_fetch_4 @ 00013a74 */

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



/* Function: __sync_nand_and_fetch_4 @ 00013aac */

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



/* Function: __sync_add_and_fetch_2 @ 00013ae8 */

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



/* Function: __sync_sub_and_fetch_2 @ 00013b50 */

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



/* Function: __sync_or_and_fetch_2 @ 00013bb8 */

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



/* Function: __sync_and_and_fetch_2 @ 00013c20 */

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



/* Function: __sync_xor_and_fetch_2 @ 00013c88 */

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



/* Function: __sync_nand_and_fetch_2 @ 00013cf0 */

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



/* Function: __sync_add_and_fetch_1 @ 00013d5c */

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



/* Function: __sync_sub_and_fetch_1 @ 00013dc0 */

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



/* Function: __sync_or_and_fetch_1 @ 00013e24 */

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



/* Function: __sync_and_and_fetch_1 @ 00013e88 */

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



/* Function: __sync_xor_and_fetch_1 @ 00013eec */

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



/* Function: __sync_nand_and_fetch_1 @ 00013f50 */

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



/* Function: __sync_val_compare_and_swap_4 @ 00013fb8 */

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



/* Function: __sync_val_compare_and_swap_2 @ 00014008 */

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



/* Function: __sync_val_compare_and_swap_1 @ 00014080 */

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



/* Function: __sync_bool_compare_and_swap_4 @ 000140f4 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00014120 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 0001413c */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00014164 */

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



/* Function: __sync_lock_test_and_set_2 @ 0001419c */

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



/* Function: __sync_lock_test_and_set_1 @ 000141fc */

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



/* Function: __sync_lock_release_8 @ 00014258 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 0001427c */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 0001429c */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 000142bc */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 000142e8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 119 */
