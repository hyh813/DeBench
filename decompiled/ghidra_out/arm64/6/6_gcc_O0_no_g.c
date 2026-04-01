/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/6/6_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001013b0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001013d0 @ 001013d0 */

void FUN_001013d0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: init_have_lse_atomics @ 00101800 */

void init_have_lse_atomics(void)

{
  byte extraout_var;
  
  __getauxval(0x10);
  atomic_counter._4_1_ = extraout_var & 1;
  return;
}



/* Function: _start @ 00101840 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101874 */

/* WARNING: Removing unreachable block (ram,0x00101884) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101890 */

/* WARNING: Removing unreachable block (ram,0x001018a8) */
/* WARNING: Removing unreachable block (ram,0x001018b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001018c0 */

/* WARNING: Removing unreachable block (ram,0x001018e4) */
/* WARNING: Removing unreachable block (ram,0x001018f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001018fc @ 001018fc */

void FUN_001018fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00101900 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: param_strcpy @ 00101954 */

void param_strcpy(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}



/* Function: call_strcpy @ 00101980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_strcpy(void)

{
  undefined4 uVar1;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = param_strcpy(auStack_28,"HelloLib");
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}



/* Function: param_strcmp @ 001019e8 */

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



/* Function: call_strcmp @ 00101a3c */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_00103a78,&DAT_00103a70);
  iVar2 = param_strcmp(&DAT_00103a80,&DAT_00103a80);
  iVar3 = param_strcmp(&DAT_00103a90,&DAT_00103a88);
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101aa8 */

size_t param_strlen(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  return sVar1;
}



/* Function: call_strlen @ 00101acc */

void call_strlen(void)

{
  param_strlen("BinBench2025");
  return;
}



/* Function: param_memcpy @ 00101af0 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 00101b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_memcpy(void)

{
  int iVar1;
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
  iVar1 = (int)local_20 + (int)local_18 + local_10;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: param_memcmp @ 00101bb8 */

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



/* Function: call_memcmp @ 00101c14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_memcmp(void)

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
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1 + iVar2,0,local_8 - ___stack_chk_guard);
  }
  return iVar1 + iVar2;
}



/* Function: param_printf @ 00101ce8 */

int param_printf(uint param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = printf("Value: %d, Name: %s\n",(ulong)param_1,param_2);
  return iVar1;
}



/* Function: call_printf @ 00101d1c */

undefined4 call_printf(void)

{
  undefined4 uVar1;
  
  uVar1 = param_printf(0x2a,&DAT_00103af8);
  return uVar1;
}



/* Function: param_scanf @ 00101d44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_scanf(undefined8 param_1)

{
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_10);
  if (local_c == 2) {
    local_14 = local_14 + local_10;
  }
  else {
    local_14 = -1;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_14,0,local_8 - ___stack_chk_guard);
  }
  return local_14;
}



/* Function: call_scanf @ 00101dd8 */

void call_scanf(void)

{
  param_scanf("123,456");
  return;
}



/* Function: param_fopen_fclose @ 00101df4 */

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



/* Function: call_fopen_fclose @ 00101e48 */

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



/* Function: param_fread_fwrite @ 00101e80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_fread_fwrite(char *param_1)

{
  int iVar1;
  FILE *__s;
  undefined8 uVar2;
  size_t sVar3;
  size_t sVar4;
  char acStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
      sVar4 = fread(acStack_28,1,sVar3,__s);
      acStack_28[sVar4] = '\0';
      fclose(__s);
      unlink(param_1);
      if ((sVar4 == sVar3) && (iVar1 = strcmp(acStack_28,"BinBench Test Data"), iVar1 == 0)) {
        uVar2 = 0x2a;
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
    __stack_chk_fail(&__stack_chk_guard,uVar2,0,local_8 - ___stack_chk_guard);
  }
  return uVar2;
}



/* Function: call_fread_fwrite @ 00101fb8 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00101fd4 */

int param_malloc_free(ulong param_1)

{
  int iVar1;
  int *__ptr;
  ulong local_10;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
      __ptr[local_10] = (int)local_10 * 10;
    }
    iVar1 = *__ptr + __ptr[param_1 - 1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 0010209c */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 001020b4 */

int param_memset(void *param_1,size_t param_2)

{
  undefined4 local_14;
  undefined8 local_10;
  
  memset(param_1,0,param_2);
  local_14 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_14 = local_14 + (uint)*(byte *)((long)param_1 + local_10);
  }
  return local_14;
}



/* Function: call_memset @ 00102130 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_memset(void)

{
  int local_34;
  int local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    local_30[local_34] = 0xff;
  }
  param_memset(local_30,0x28);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_30[0] + local_30[9],0,local_8 - ___stack_chk_guard);
  }
  return local_30[0] + local_30[9];
}



/* Function: param_strchr_strstr @ 001021c8 */

int param_strchr_strstr(char *param_1,byte param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = strchr(param_1,(uint)param_2);
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
  return iVar1 + iVar2;
}



/* Function: call_strchr_strstr @ 0010225c */

undefined4 call_strchr_strstr(void)

{
  undefined4 uVar1;
  
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}



/* Function: test_standard_library_functions @ 00102294 */

int test_standard_library_functions(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = puts(&DAT_00103b80);
  uVar2 = call_strcpy(iVar1);
  iVar1 = printf(&DAT_00103ba8,uVar2 & 0xffffffff);
  uVar2 = call_strcmp(iVar1);
  iVar1 = printf(&DAT_00103bc8,uVar2 & 0xffffffff);
  uVar2 = call_strlen(iVar1);
  iVar1 = printf(&DAT_00103be8,uVar2 & 0xffffffff);
  uVar2 = call_memcpy(iVar1);
  iVar1 = printf(&DAT_00103c08,uVar2 & 0xffffffff);
  uVar2 = call_memcmp(iVar1);
  iVar1 = printf(&DAT_00103c28,uVar2 & 0xffffffff);
  uVar2 = call_printf(iVar1);
  iVar1 = printf(&DAT_00103c48,uVar2 & 0xffffffff);
  uVar2 = call_scanf(iVar1);
  iVar1 = printf(&DAT_00103c68,uVar2 & 0xffffffff);
  uVar2 = call_fopen_fclose(iVar1);
  iVar1 = printf(&DAT_00103c88,uVar2 & 0xffffffff);
  uVar2 = call_fread_fwrite(iVar1);
  iVar1 = printf(&DAT_00103ca8,uVar2 & 0xffffffff);
  uVar2 = call_malloc_free(iVar1);
  iVar1 = printf(&DAT_00103cc8,uVar2 & 0xffffffff);
  uVar2 = call_memset(iVar1);
  iVar1 = printf(&DAT_00103ce8,uVar2 & 0xffffffff);
  uVar2 = call_strchr_strstr(iVar1);
  iVar1 = printf(&DAT_00103d08,uVar2 & 0xffffffff);
  return iVar1;
}



/* Function: param_linux_syscall @ 001023a4 */

int param_linux_syscall(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = syscall(0x38,0xffffff9c,param_1,0);
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    piVar3 = __errno_location();
    iVar1 = -*piVar3;
  }
  else {
    syscall(0x39,uVar2 & 0xffffffff);
  }
  return iVar1;
}



/* Function: call_linux_syscall @ 001023fc */

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



/* Function: param_win32_api @ 00102434 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_win32_api(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (local_58 < 1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0x2a;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar2,0,local_8 - ___stack_chk_guard);
  }
  return uVar2;
}



/* Function: call_win32_api @ 001024bc */

void call_win32_api(void)

{
  param_win32_api("/etc/passwd");
  return;
}



/* Function: param_fork_exec @ 001024d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint local_14;
  __pid_t local_10;
  __pid_t local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = fork();
  if (local_10 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (local_10 == 0) {
      execl(param_1,param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    local_c = waitpid(local_10,(int *)&local_14,0);
    if (local_c < 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((local_14 & 0x7f) == 0) {
      uVar1 = (int)local_14 >> 8 & 0xff;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}



/* Function: call_fork_exec @ 001025c0 */

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



/* Function: param_pipe_communication @ 001025fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  undefined8 uVar3;
  size_t __n;
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
        iVar1 = local_2c;
        __n = strlen("HelloPipe");
        write(iVar1,"HelloPipe",__n);
        close(local_2c);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_2c);
      sVar4 = read(local_30,auStack_28,0x1f);
      auStack_28[sVar4] = 0;
      close(local_30);
      wait((void *)0x0);
      if (sVar4 < 1) {
        uVar3 = 0xfffffffd;
      }
      else {
        uVar3 = 0x2a;
      }
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar3,0,local_8 - ___stack_chk_guard);
  }
  return uVar3;
}



/* Function: call_pipe_communication @ 00102720 */

void call_pipe_communication(void)

{
  param_pipe_communication();
  return;
}



/* Function: param_socket_create @ 00102734 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_socket_create(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_20;
  int local_1c;
  sockaddr local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = socket(2,1,0);
  if (local_1c < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 1;
    iVar1 = setsockopt(local_1c,1,2,&local_20,4);
    if (iVar1 < 0) {
      close(local_1c);
      uVar2 = 0xfffffffe;
    }
    else {
      memset(&local_18,0,0x10);
      local_18.sa_family = 2;
      local_18.sa_data._0_2_ = htons(0);
      local_18.sa_data[2] = '\0';
      local_18.sa_data[3] = '\0';
      local_18.sa_data[4] = '\0';
      local_18.sa_data[5] = '\0';
      iVar1 = bind(local_1c,&local_18,0x10);
      if (iVar1 < 0) {
        close(local_1c);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(local_1c,5);
        if (iVar1 < 0) {
          close(local_1c);
          uVar2 = 0xfffffffc;
        }
        else {
          close(local_1c);
          uVar2 = 0x2a;
        }
      }
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar2,0,local_8 - ___stack_chk_guard);
  }
  return uVar2;
}



/* Function: call_socket_create @ 0010286c */

void call_socket_create(void)

{
  param_socket_create();
  return;
}



/* Function: param_shmget_shmat @ 00102880 */

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



/* Function: call_shmget_shmat @ 0010298c */

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



/* Function: signal_handler @ 001029bc */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: param_signal_handling @ 001029f0 */

undefined8 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  undefined8 uVar2;
  int local_4;
  
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
      local_4 = 1000;
      while ((signal_received == 0 && (0 < local_4))) {
        usleep(1000);
        local_4 = local_4 + -1;
      }
      if (signal_received == 0) {
        uVar2 = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        local_4 = 2000;
        while ((signal_received == 0 && (0 < local_4))) {
          usleep(1000);
          local_4 = local_4 + -1;
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



/* Function: call_signal_handling @ 00102b64 */

void call_signal_handling(void)

{
  param_signal_handling();
  return;
}



/* Function: test_system_calls @ 00102b78 */

int test_system_calls(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = puts(&DAT_00103d70);
  uVar2 = call_linux_syscall(iVar1);
  iVar1 = printf(&DAT_00103d90,uVar2 & 0xffffffff);
  uVar2 = call_win32_api(iVar1);
  iVar1 = printf(&DAT_00103db0,uVar2 & 0xffffffff);
  uVar2 = call_fork_exec(iVar1);
  iVar1 = printf(&DAT_00103dd0,uVar2 & 0xffffffff);
  uVar2 = call_pipe_communication(iVar1);
  iVar1 = printf(&DAT_00103df0,uVar2 & 0xffffffff);
  uVar2 = call_socket_create(iVar1);
  iVar1 = printf(&DAT_00103e10,uVar2 & 0xffffffff);
  uVar2 = call_shmget_shmat(iVar1);
  iVar1 = printf(&DAT_00103e30,uVar2 & 0xffffffff);
  uVar2 = call_signal_handling(iVar1);
  iVar1 = printf(&DAT_00103e50,uVar2 & 0xffffffff);
  return iVar1;
}



/* Function: thread_compute @ 00102c24 */

int * thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00102c74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pthread_create(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = param_1;
  local_20 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_24);
  if (local_20 == 0) {
    pthread_join(local_18,&local_10);
    local_1c = *local_10;
    free(local_10);
    uVar1 = local_1c;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}



/* Function: call_pthread_create @ 00102d28 */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: thread_sum @ 00102d40 */

undefined8 thread_sum(int *param_1)

{
  int local_c;
  
  param_1[2] = 0;
  for (local_c = *param_1; local_c <= param_1[1]; local_c = local_c + 1) {
    param_1[2] = param_1[2] + local_c;
  }
  return 0;
}



/* Function: param_pthread_join @ 00102dac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_join(void)

{
  int iVar1;
  int local_54;
  int local_50;
  int local_4c;
  pthread_t apStack_48 [3];
  undefined8 local_30;
  int aiStack_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  aiStack_28[0] = 0;
  aiStack_28[1] = 0xb;
  local_30 = 0xa00000001;
  aiStack_28[4] = 0x15;
  aiStack_28[5] = 0x1e;
  aiStack_28[2] = 0x14;
  aiStack_28[3] = 0;
  aiStack_28[6] = 0;
  for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
    iVar1 = pthread_create(apStack_48 + local_54,(pthread_attr_t *)0x0,thread_sum,
                           (void *)((long)&local_30 + (long)local_54 * 0xc));
    if (iVar1 != 0) {
      local_50 = -1;
      goto LAB_00102ed0;
    }
  }
  local_50 = 0;
  local_4c = 0;
  do {
    if (2 < local_4c) {
LAB_00102ed0:
      if (local_8 - ___stack_chk_guard == 0) {
        return local_50;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(&__stack_chk_guard,local_50,0,local_8 - ___stack_chk_guard);
    }
    iVar1 = pthread_join(apStack_48[local_4c],(void **)0x0);
    if (iVar1 != 0) {
      local_50 = -2;
      goto LAB_00102ed0;
    }
    local_50 = local_50 + aiStack_28[(long)local_4c * 3];
    local_4c = local_4c + 1;
  } while( true );
}



/* Function: call_pthread_join @ 00102f00 */

void call_pthread_join(void)

{
  param_pthread_join();
  return;
}



/* Function: thread_increment @ 00102f14 */

undefined8 thread_increment(int *param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = *param_1;
  for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}



/* Function: param_mutex_lock @ 00102f98 */

undefined8 param_mutex_lock(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  int local_24;
  int local_14;
  int local_10;
  void *local_8;
  
  local_28 = param_2;
  local_24 = param_1;
  local_8 = malloc((long)param_1 << 3);
  if (local_8 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_8 + (long)local_14 * 8),(pthread_attr_t *)0x0
                             ,thread_increment,&local_28);
      if (iVar1 != 0) {
        free(local_8);
        return 0xfffffffe;
      }
    }
    for (local_10 = 0; local_10 < local_24; local_10 = local_10 + 1) {
      pthread_join(*(pthread_t *)((long)local_8 + (long)local_10 * 8),(void **)0x0);
    }
    free(local_8);
    if (local_24 * local_28 == shared_counter) {
      uVar2 = 0x2a;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_mutex_lock @ 001030c4 */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: consumer_thread @ 001030e0 */

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



/* Function: producer_thread @ 00103164 */

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



/* Function: param_condition_variable @ 001031c8 */

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
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar2,0,local_8 - ___stack_chk_guard);
  }
  return uVar2;
}



/* Function: call_condition_variable @ 001032bc */

void call_condition_variable(void)

{
  param_condition_variable();
  return;
}



/* Function: thread_atomic_increment @ 001032d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thread_atomic_increment(int *param_1)

{
  int iVar1;
  long lVar2;
  int local_14;
  
  lVar2 = ___stack_chk_guard;
  iVar1 = *param_1;
  for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
    __aarch64_ldadd4_acq_rel(1,&atomic_counter);
    __aarch64_cas4_acq_rel(local_14,local_14 + 1000,&atomic_counter);
  }
  if (lVar2 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,0,lVar2 - ___stack_chk_guard);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 001033bc */

undefined8 thread_atomic_load_store(void)

{
  atomic_counter._0_4_ = (int)atomic_counter + 100;
  return 0;
}



/* Function: param_atomic_ops @ 001033f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_atomic_ops(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_38;
  int local_34;
  int local_24;
  int local_20;
  int local_1c;
  pthread_t local_18;
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = param_2;
  local_34 = param_1;
  local_10 = malloc((long)param_1 << 3);
  if (local_10 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    atomic_counter._0_4_ = 0;
    for (local_24 = 0; local_24 < local_34; local_24 = local_24 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_10 + (long)local_24 * 8),
                             (pthread_attr_t *)0x0,thread_atomic_increment,&local_38);
      if (iVar1 != 0) {
        free(local_10);
        uVar2 = 0xfffffffe;
        goto LAB_00103554;
      }
    }
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_18,(void **)0x0);
    }
    for (local_20 = 0; local_20 < local_34; local_20 = local_20 + 1) {
      pthread_join(*(pthread_t *)((long)local_10 + (long)local_20 * 8),(void **)0x0);
    }
    local_1c = (int)atomic_counter;
    free(local_10);
    if (local_1c < 1) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0x2a;
    }
  }
LAB_00103554:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar2,0,local_8 - ___stack_chk_guard);
  }
  return uVar2;
}



/* Function: call_atomic_ops @ 00103584 */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: thread_tls_test @ 001035a0 */

undefined4 * thread_tls_test(char *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar2 = tpidr_el0;
  uVar1 = *(undefined4 *)(lVar2 + 0x10);
  lVar2 = tpidr_el0;
  lVar3 = tpidr_el0;
  *(int *)(lVar3 + 0x10) = *(int *)(lVar2 + 0x10) + 0x32;
  lVar2 = tpidr_el0;
  strncpy((char *)(lVar2 + 0x18),param_1,0x1f);
  puVar4 = malloc(8);
  *puVar4 = uVar1;
  lVar2 = tpidr_el0;
  puVar4[1] = *(undefined4 *)(lVar2 + 0x10);
  return puVar4;
}



/* Function: param_thread_local_storage @ 00103644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_thread_local_storage(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_28;
  void *local_20;
  void *local_18;
  int *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = malloc((long)param_1 << 3);
  local_18 = malloc((long)param_1 << 3);
  if ((local_20 == (void *)0x0) || (local_18 == (void *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    for (local_48 = 0; (int)local_48 < param_1; local_48 = local_48 + 1) {
      puVar1 = (undefined8 *)((long)local_18 + (long)(int)local_48 * 8);
      pvVar4 = malloc(0x10);
      *puVar1 = pvVar4;
      snprintf(*(char **)((long)local_18 + (long)(int)local_48 * 8),0x10,"Thread-%d",(ulong)local_48
              );
    }
    for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
      iVar2 = pthread_create((pthread_t *)((long)local_20 + (long)local_44 * 8),
                             (pthread_attr_t *)0x0,thread_tls_test,
                             *(void **)((long)local_18 + (long)local_44 * 8));
      if (iVar2 != 0) {
        for (local_40 = 0; local_40 <= local_44; local_40 = local_40 + 1) {
          free(*(void **)((long)local_18 + (long)local_40 * 8));
        }
        free(local_18);
        free(local_20);
        uVar3 = 0xfffffffe;
        goto LAB_001038c8;
      }
    }
    local_3c = 0;
    local_38 = 0;
    for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
      pthread_join(*(pthread_t *)((long)local_20 + (long)local_34 * 8),&local_28);
      local_10 = local_28;
      local_3c = local_3c + *local_28;
      local_38 = local_38 + local_28[1];
      free(local_28);
      free(*(void **)((long)local_18 + (long)local_34 * 8));
    }
    free(local_18);
    free(local_20);
    if ((local_3c == param_1 * 100) && (local_38 == param_1 * 0x96)) {
      uVar3 = 0x2a;
    }
    else {
      uVar3 = 0xfffffffd;
    }
  }
LAB_001038c8:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,uVar3,0,local_8 - ___stack_chk_guard);
  }
  return uVar3;
}



/* Function: call_thread_local_storage @ 001038fc */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 00103914 */

int test_thread_concurrency(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = puts(&DAT_00103ea8);
  uVar2 = call_pthread_create(iVar1);
  iVar1 = printf(&DAT_00103ec8,uVar2 & 0xffffffff);
  uVar2 = call_pthread_join(iVar1);
  iVar1 = printf(&DAT_00103ee8,uVar2 & 0xffffffff);
  uVar2 = call_mutex_lock(iVar1);
  iVar1 = printf(&DAT_00103f08,uVar2 & 0xffffffff);
  uVar2 = call_condition_variable(iVar1);
  iVar1 = printf(&DAT_00103f28,uVar2 & 0xffffffff);
  uVar2 = call_atomic_ops(iVar1);
  iVar1 = printf(&DAT_00103f48,uVar2 & 0xffffffff);
  uVar2 = call_thread_local_storage(iVar1);
  iVar1 = printf(&DAT_00103f68,uVar2 & 0xffffffff);
  return iVar1;
}



/* Function: main @ 001039ac */

undefined8 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 001039d0 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 00103a10 */

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



/* Function: _fini @ 00103a40 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 75 */
