/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/6/6_gcc_O0_no_g
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



/* Function: _start @ 00102780 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001027b0 */

/* WARNING: Removing unreachable block (ram,0x001027c3) */
/* WARNING: Removing unreachable block (ram,0x001027cf) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001027e0 */

/* WARNING: Removing unreachable block (ram,0x00102804) */
/* WARNING: Removing unreachable block (ram,0x00102810) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102820 */

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



/* Function: param_strcpy @ 00102869 */

void param_strcpy(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}



/* Function: call_strcpy @ 0010289e */

undefined4 call_strcpy(void)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_strcpy(local_38,"HelloLib");
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* Function: param_strcmp @ 001028eb */

undefined8 param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
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



/* Function: call_strcmp @ 00102936 */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_00105015,&DAT_00105011);
  iVar2 = param_strcmp(&DAT_00105019,&DAT_00105019);
  iVar3 = param_strcmp(&DAT_00105021,&DAT_0010501d);
  return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 001029a5 */

size_t param_strlen(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  return sVar1;
}



/* Function: call_strlen @ 001029cb */

void call_strlen(void)

{
  param_strlen("BinBench2025");
  return;
}



/* Function: param_memcpy @ 001029f0 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 00102a25 */

int call_memcpy(void)

{
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 10;
  local_44 = 0x14;
  local_40 = 0x1e;
  local_3c = 0x28;
  local_38 = 0x32;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  param_memcpy(&local_28,&local_48,0x14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18 + (int)local_28 + (int)local_20;
}



/* Function: param_memcmp @ 00102ab5 */

undefined8 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined8 uVar2;
  
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



/* Function: call_memcmp @ 00102b08 */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 1;
  local_30 = 2;
  local_2c = 3;
  local_28 = 1;
  local_24 = 2;
  local_20 = 4;
  local_1c = 1;
  local_18 = 2;
  local_14 = 3;
  iVar1 = param_memcmp(&local_34,&local_28,0xc);
  iVar2 = param_memcmp(&local_34,&local_1c,0xc);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 + iVar1;
}



/* Function: param_printf @ 00102bb6 */

int param_printf(uint param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = printf("Value: %d, Name: %s\n",(ulong)param_1,param_2);
  return iVar1;
}



/* Function: call_printf @ 00102bee */

undefined4 call_printf(void)

{
  undefined4 uVar1;
  
  uVar1 = param_printf(0x2a,&DAT_00105047);
  return uVar1;
}



/* Function: param_scanf @ 00102c16 */

int param_scanf(undefined8 param_1)

{
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = __isoc99_sscanf(param_1,"%d,%d",&local_1c,&local_18);
  if (local_14 == 2) {
    local_18 = local_18 + local_1c;
  }
  else {
    local_18 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* Function: call_scanf @ 00102c83 */

void call_scanf(void)

{
  param_scanf("123,456");
  return;
}



/* Function: param_fopen_fclose @ 00102c9c */

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



/* Function: call_fopen_fclose @ 00102cf4 */

undefined8 call_fopen_fclose(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_fread_fwrite @ 00102d26 */

undefined8 param_fread_fwrite(char *param_1)

{
  int iVar1;
  FILE *__s;
  undefined8 uVar2;
  size_t sVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  char local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar3 = strlen("BinBench Test Data");
    sVar3 = fwrite("BinBench Test Data",1,sVar3,__s);
    sVar4 = strlen("BinBench Test Data");
    if (sVar3 == sVar4) {
      rewind(__s);
      sVar4 = fread(local_38,1,sVar3,__s);
      local_38[sVar4] = '\0';
      fclose(__s);
      unlink(param_1);
      if (sVar4 == sVar3) {
        iVar1 = strcmp(local_38,"BinBench Test Data");
        if (iVar1 == 0) {
          uVar2 = 0x2a;
          goto LAB_00102e4a;
        }
      }
      uVar2 = 0xfffffffd;
    }
    else {
      fclose(__s);
      uVar2 = 0xfffffffe;
    }
  }
LAB_00102e4a:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_fread_fwrite @ 00102e60 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00102e79 */

int param_malloc_free(ulong param_1)

{
  int iVar1;
  int *__ptr;
  ulong local_18;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      __ptr[local_18] = (int)local_18 * 10;
    }
    iVar1 = __ptr[param_1 - 1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00102f23 */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 00102f37 */

int param_memset(void *param_1,size_t param_2)

{
  undefined4 local_1c;
  undefined8 local_18;
  
  memset(param_1,0,param_2);
  local_1c = 0;
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    local_1c = local_1c + (uint)*(byte *)(local_18 + (long)param_1);
  }
  return local_1c;
}



/* Function: call_memset @ 00102fa1 */

int call_memset(void)

{
  long in_FS_OFFSET;
  int local_3c;
  int local_38 [10];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    local_38[local_3c] = 0xff;
  }
  param_memset(local_38,0x28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38[9] + local_38[0];
}



/* Function: param_strchr_strstr @ 0010300b */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = strchr(param_1,(int)param_2);
  if (pcVar3 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)pcVar3 - (int)param_1;
  }
  pcVar3 = strstr(param_1,param_3);
  if (pcVar3 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar3 - (int)param_1;
  }
  return iVar2 + iVar1;
}



/* Function: call_strchr_strstr @ 0010308d */

undefined4 call_strchr_strstr(void)

{
  undefined4 uVar1;
  
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}



/* Function: test_standard_library_functions @ 001030c4 */

void test_standard_library_functions(void)

{
  uint uVar1;
  
  puts(&DAT_001050b0);
  uVar1 = call_strcpy();
  printf(&DAT_001050d4,(ulong)uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_001050ef,(ulong)uVar1);
  uVar1 = call_strlen();
  printf(&DAT_0010510a,(ulong)uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_00105126,(ulong)uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_00105142,(ulong)uVar1);
  uVar1 = call_printf();
  printf(&DAT_0010515e,(ulong)uVar1);
  uVar1 = call_scanf();
  printf(&DAT_0010517a,(ulong)uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_00105197,(ulong)uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_001051b3,(ulong)uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_001051cf,(ulong)uVar1);
  uVar1 = call_memset();
  printf(&DAT_001051eb,(ulong)uVar1);
  uVar1 = call_strchr_strstr();
  printf(&DAT_00105206,(ulong)uVar1);
  return;
}



/* Function: param_linux_syscall @ 0010325e */

int param_linux_syscall(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = syscall(2,param_1,0);
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    piVar3 = __errno_location();
    iVar1 = -*piVar3;
  }
  else {
    syscall(3,uVar2 & 0xffffffff);
  }
  return iVar1;
}



/* Function: call_linux_syscall @ 001032b6 */

undefined8 call_linux_syscall(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_win32_api @ 001032e8 */

undefined8 param_win32_api(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  stat local_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = stat(param_1,&local_a8);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (local_a8.st_size < 1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0x2a;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_win32_api @ 0010335c */

void call_win32_api(void)

{
  param_win32_api("/etc/passwd");
  return;
}



/* Function: param_fork_exec @ 00103375 */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_1c;
  __pid_t local_18;
  __pid_t local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = fork();
  if (local_18 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (local_18 == 0) {
      execl(param_1,param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    local_14 = waitpid(local_18,(int *)&local_1c,0);
    if (local_14 < 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((local_1c & 0x7f) == 0) {
      uVar1 = (int)local_1c >> 8 & 0xff;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* Function: call_fork_exec @ 00103431 */

undefined8 call_fork_exec(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_fork_exec("/bin/true",0);
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_pipe_communication @ 00103468 */

undefined8 param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  undefined8 uVar3;
  size_t __n;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pipe(&local_40);
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
        close(local_40);
        __n = strlen("HelloPipe");
        write(local_3c,"HelloPipe",__n);
        close(local_3c);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_3c);
      sVar4 = read(local_40,local_38,0x1f);
      local_38[sVar4] = 0;
      close(local_40);
      wait((void *)0x0);
      if (sVar4 < 1) {
        uVar3 = 0xfffffffd;
      }
      else {
        uVar3 = 0x2a;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* Function: call_pipe_communication @ 00103573 */

void call_pipe_communication(void)

{
  param_pipe_communication();
  return;
}



/* Function: param_socket_create @ 00103582 */

undefined8 param_socket_create(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  sockaddr local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = socket(2,1,0);
  if (local_2c < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_30 = 1;
    iVar1 = setsockopt(local_2c,1,2,&local_30,4);
    if (iVar1 < 0) {
      close(local_2c);
      uVar2 = 0xfffffffe;
    }
    else {
      memset(&local_28,0,0x10);
      local_28.sa_family = 2;
      local_28.sa_data._0_2_ = htons(0);
      local_28.sa_data[2] = '\0';
      local_28.sa_data[3] = '\0';
      local_28.sa_data[4] = '\0';
      local_28.sa_data[5] = '\0';
      iVar1 = bind(local_2c,&local_28,0x10);
      if (iVar1 < 0) {
        close(local_2c);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(local_2c,5);
        if (iVar1 < 0) {
          close(local_2c);
          uVar2 = 0xfffffffc;
        }
        else {
          close(local_2c);
          uVar2 = 0x2a;
        }
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_socket_create @ 001036a9 */

void call_socket_create(void)

{
  param_socket_create();
  return;
}



/* Function: param_shmget_shmat @ 001036b8 */

ulong param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        uVar2 = 0xfffffffe;
      }
      else {
        __s = shmat(iVar1,(void *)0x0,0);
        if (__s == (char *)0xffffffffffffffff) {
          uVar2 = 0xfffffffd;
        }
        else {
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar3 = strlen(__s);
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
          uVar2 = sVar3 & 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}



/* Function: call_shmget_shmat @ 001037c8 */

undefined8 call_shmget_shmat(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_shmget_shmat();
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: signal_handler @ 001037f0 */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: param_signal_handling @ 00103811 */

undefined8 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  undefined8 uVar2;
  int local_c;
  
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



/* Function: call_signal_handling @ 00103948 */

void call_signal_handling(void)

{
  param_signal_handling();
  return;
}



/* Function: test_system_calls @ 00103957 */

void test_system_calls(void)

{
  uint uVar1;
  
  puts(&DAT_00105248);
  uVar1 = call_linux_syscall();
  printf(&DAT_00105263,(ulong)uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_0010527f,(ulong)uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_0010529b,(ulong)uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_001052b7,(ulong)uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_001052d3,(ulong)uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_001052ef,(ulong)uVar1);
  uVar1 = call_signal_handling();
  printf(&DAT_0010530b,(ulong)uVar1);
  return;
}



/* Function: thread_compute @ 00103a51 */

int * thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00103a98 */

undefined4 param_pthread_create(undefined4 param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  pthread_t local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = param_1;
  local_28 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_2c);
  if (local_28 == 0) {
    pthread_join(local_20,&local_18);
    local_24 = *local_18;
    free(local_18);
    uVar1 = local_24;
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



/* Function: call_pthread_create @ 00103b2c */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: thread_sum @ 00103b40 */

undefined8 thread_sum(int *param_1)

{
  int local_14;
  
  param_1[2] = 0;
  for (local_14 = *param_1; local_14 <= param_1[1]; local_14 = local_14 + 1) {
    param_1[2] = param_1[2] + local_14;
  }
  return 0;
}



/* Function: param_pthread_join @ 00103b94 */

int param_pthread_join(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  pthread_t local_58 [4];
  int local_38 [10];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38[0] = 1;
  local_38[1] = 10;
  local_38[2] = 0;
  local_38[3] = 0xb;
  local_38[4] = 0x14;
  local_38[5] = 0;
  local_38[6] = 0x15;
  local_38[7] = 0x1e;
  local_38[8] = 0;
  for (local_64 = 0; local_64 < 3; local_64 = local_64 + 1) {
    iVar1 = pthread_create(local_58 + local_64,(pthread_attr_t *)0x0,thread_sum,
                           local_38 + (long)local_64 * 3);
    if (iVar1 != 0) {
      local_60 = -1;
      goto LAB_00103cac;
    }
  }
  local_60 = 0;
  local_5c = 0;
  do {
    if (2 < local_5c) {
LAB_00103cac:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return local_60;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar1 = pthread_join(local_58[local_5c],(void **)0x0);
    if (iVar1 != 0) {
      local_60 = -2;
      goto LAB_00103cac;
    }
    local_60 = local_60 + local_38[(long)local_5c * 3 + 2];
    local_5c = local_5c + 1;
  } while( true );
}



/* Function: call_pthread_join @ 00103cc2 */

void call_pthread_join(void)

{
  param_pthread_join();
  return;
}



/* Function: thread_increment @ 00103cd6 */

undefined8 thread_increment(int *param_1)

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



/* Function: param_mutex_lock @ 00103d42 */

undefined8 param_mutex_lock(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  void *local_10;
  
  local_30 = param_2;
  local_2c = param_1;
  local_10 = malloc((long)param_1 << 3);
  if (local_10 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_1c = 0; local_1c < local_2c; local_1c = local_1c + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_1c * 8 + (long)local_10),
                             (pthread_attr_t *)0x0,thread_increment,&local_30);
      if (iVar1 != 0) {
        free(local_10);
        return 0xfffffffe;
      }
    }
    for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
      pthread_join(*(pthread_t *)((long)local_10 + (long)local_18 * 8),(void **)0x0);
    }
    free(local_10);
    if (local_30 * local_2c == shared_counter) {
      uVar2 = 0x2a;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_mutex_lock @ 00103e4a */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: consumer_thread @ 00103e63 */

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



/* Function: producer_thread @ 00103edc */

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



/* Function: param_condition_variable @ 00103f3e */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  pthread_t local_28;
  pthread_t local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_20,&local_18);
      pthread_join(local_28,(void **)0x0);
      uVar2 = *local_18;
      free(local_18);
    }
    else {
      pthread_cancel(local_20);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_condition_variable @ 0010401b */

void call_condition_variable(void)

{
  param_condition_variable();
  return;
}



/* Function: thread_atomic_increment @ 0010402f */

undefined8 thread_atomic_increment(int *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_1c;
  
  for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
    LOCK();
    atomic_counter = atomic_counter + 1;
    UNLOCK();
    LOCK();
    iVar1 = local_1c + 1000;
    if (local_1c != atomic_counter) {
      iVar1 = atomic_counter;
    }
    atomic_counter = iVar1;
    UNLOCK();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 001040ba */

undefined8 thread_atomic_load_store(void)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return 0;
}



/* Function: param_atomic_ops @ 001040e2 */

undefined8 param_atomic_ops(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_40;
  int local_3c;
  int local_2c;
  int local_28;
  int local_24;
  pthread_t local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_3c = param_1;
  local_18 = malloc((long)param_1 << 3);
  if (local_18 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (local_2c = 0; local_2c < local_3c; local_2c = local_2c + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_2c * 8 + (long)local_18),
                             (pthread_attr_t *)0x0,thread_atomic_increment,&local_40);
      if (iVar1 != 0) {
        free(local_18);
        uVar2 = 0xfffffffe;
        goto LAB_00104225;
      }
    }
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_20,(void **)0x0);
    }
    for (local_28 = 0; local_28 < local_3c; local_28 = local_28 + 1) {
      pthread_join(*(pthread_t *)((long)local_18 + (long)local_28 * 8),(void **)0x0);
    }
    local_24 = atomic_counter;
    free(local_18);
    if (local_24 < 1) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0x2a;
    }
  }
LAB_00104225:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_atomic_ops @ 0010423b */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: thread_tls_test @ 00104254 */

undefined4 * thread_tls_test(char *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)((long)in_FS_OFFSET + -0x24);
  *(int *)((long)in_FS_OFFSET + -0x24) = *(int *)((long)in_FS_OFFSET + -0x24) + 0x32;
  strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
  puVar2 = malloc(8);
  *puVar2 = uVar1;
  puVar2[1] = *(undefined4 *)((long)in_FS_OFFSET + -0x24);
  return puVar2;
}



/* Function: param_thread_local_storage @ 001042dd */

undefined8 param_thread_local_storage(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int *local_40;
  void *local_38;
  void *local_30;
  int *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = malloc((long)param_1 << 3);
  local_30 = malloc((long)param_1 << 3);
  if ((local_38 == (void *)0x0) || (local_30 == (void *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    for (local_60 = 0; (int)local_60 < param_1; local_60 = local_60 + 1) {
      puVar1 = (undefined8 *)((long)(int)local_60 * 8 + (long)local_30);
      pvVar4 = malloc(0x10);
      *puVar1 = pvVar4;
      snprintf(*(char **)((long)local_30 + (long)(int)local_60 * 8),0x10,"Thread-%d",(ulong)local_60
              );
    }
    for (local_5c = 0; local_5c < param_1; local_5c = local_5c + 1) {
      iVar2 = pthread_create((pthread_t *)((long)local_5c * 8 + (long)local_38),
                             (pthread_attr_t *)0x0,thread_tls_test,
                             *(void **)((long)local_30 + (long)local_5c * 8));
      if (iVar2 != 0) {
        for (local_58 = 0; local_58 <= local_5c; local_58 = local_58 + 1) {
          free(*(void **)((long)local_30 + (long)local_58 * 8));
        }
        free(local_30);
        free(local_38);
        uVar3 = 0xfffffffe;
        goto LAB_0010453f;
      }
    }
    local_54 = 0;
    local_50 = 0;
    for (local_4c = 0; local_4c < param_1; local_4c = local_4c + 1) {
      pthread_join(*(pthread_t *)((long)local_38 + (long)local_4c * 8),&local_40);
      local_28 = local_40;
      local_54 = local_54 + *local_40;
      local_50 = local_50 + local_40[1];
      free(local_40);
      free(*(void **)((long)local_30 + (long)local_4c * 8));
    }
    free(local_30);
    free(local_38);
    if ((local_54 == param_1 * 100) && (local_50 == param_1 * 0x96)) {
      uVar3 = 0x2a;
    }
    else {
      uVar3 = 0xfffffffd;
    }
  }
LAB_0010453f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* Function: call_thread_local_storage @ 00104559 */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 0010456d */

void test_thread_concurrency(void)

{
  uint uVar1;
  
  puts(&DAT_00105331);
  uVar1 = call_pthread_create();
  printf(&DAT_0010534f,(ulong)uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_0010536b,(ulong)uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_00105388,(ulong)uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_001053a4,(ulong)uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_001053c0,(ulong)uVar1);
  uVar1 = call_thread_local_storage();
  printf(&DAT_001053dc,(ulong)uVar1);
  return;
}



/* Function: main @ 00104647 */

undefined8 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _fini @ 00104674 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
