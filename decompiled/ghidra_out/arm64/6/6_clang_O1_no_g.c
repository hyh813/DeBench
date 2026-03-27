/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/6/6_clang_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001012c8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001012e0 @ 001012e0 */

void FUN_001012e0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: init_have_lse_atomics @ 00101700 */

void init_have_lse_atomics(void)

{
  byte extraout_var;
  
  __getauxval(0x10);
  atomic_counter._4_1_ = extraout_var & 1;
  return;
}



/* Function: _start @ 00101740 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101774 */

/* WARNING: Removing unreachable block (ram,0x00101784) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101790 */

/* WARNING: Removing unreachable block (ram,0x001017a8) */
/* WARNING: Removing unreachable block (ram,0x001017b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001017c0 */

/* WARNING: Removing unreachable block (ram,0x001017e4) */
/* WARNING: Removing unreachable block (ram,0x001017f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001017fc @ 001017fc */

void FUN_001017fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00101800 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: param_strcpy @ 00101854 */

void param_strcpy(char *param_1,char *param_2)

{
  char *__s;
  
  __s = strcpy(param_1,param_2);
  strlen(__s);
  return;
}



/* Function: call_strcpy @ 0010186c */

void call_strcpy(void)

{
  char local_30 [32];
  
  builtin_strncpy(local_30,"HelloLib",9);
  strlen(local_30);
  return;
}



/* Function: param_strcmp @ 001018a0 */

int param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,param_2);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_strcmp @ 001018c4 */

undefined8 call_strcmp(void)

{
  return 0;
}



/* Function: param_strlen @ 001018cc */

void param_strlen(char *param_1)

{
  strlen(param_1);
  return;
}



/* Function: call_strlen @ 001018e0 */

undefined8 call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 001018e8 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 0010190c */

undefined8 call_memcpy(void)

{
  return 0x5a;
}



/* Function: param_memcmp @ 00101914 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = memcmp(param_1,param_2,param_3);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_memcmp @ 00101938 */

undefined8 call_memcmp(void)

{
  return 0xffffffff;
}



/* Function: param_printf @ 00101940 */

int param_printf(ulong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
  return iVar1;
}



/* Function: call_printf @ 00101964 */

int call_printf(void)

{
  int iVar1;
  
  iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001033a6);
  return iVar1;
}



/* Function: param_scanf @ 0010198c */

int param_scanf(undefined8 param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_18);
  local_18 = local_18 + local_14;
  if (iVar1 != 2) {
    local_18 = -1;
  }
  return local_18;
}



/* Function: call_scanf @ 001019cc */

int call_scanf(void)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_14,&local_18);
  local_18 = local_18 + local_14;
  if (iVar1 != 2) {
    local_18 = -1;
  }
  return local_18;
}



/* Function: param_fopen_fclose @ 00101a14 */

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



/* Function: call_fopen_fclose @ 00101a5c */

undefined4 call_fopen_fclose(void)

{
  int iVar1;
  FILE *__stream;
  undefined4 uVar2;
  
  __stream = fopen("/etc/passwd","r");
  if (__stream == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = fileno(__stream);
    fclose(__stream);
    uVar2 = 0x2a;
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* Function: param_fread_fwrite @ 00101ab4 */

undefined4 param_fread_fwrite(char *param_1)

{
  undefined4 uVar1;
  FILE *__s;
  size_t sVar2;
  long local_60;
  undefined3 uStack_58;
  undefined5 local_55;
  undefined3 uStack_50;
  
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar2 == 0x12) {
      rewind(__s);
      sVar2 = fread(&local_60,1,0x12,__s);
      *(undefined1 *)((long)&local_60 + sVar2) = 0;
      fclose(__s);
      unlink(param_1);
      uVar1 = 0xfffffffd;
      if ((sVar2 == 0x12) &&
         (uVar1 = 0x2a,
         (local_60 != 0x68636e65426e6942 || CONCAT53(local_55,uStack_58) != 0x6144207473655420) ||
         CONCAT35(uStack_50,local_55) != 0x61746144207473)) {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      fclose(__s);
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}



/* Function: call_fread_fwrite @ 00101bd4 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00101bf0 */

int param_malloc_free(long param_1)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  long lVar3;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    if (param_1 != 0) {
      iVar1 = 0;
      piVar2 = __ptr;
      lVar3 = param_1;
      do {
        *piVar2 = iVar1;
        lVar3 = lVar3 + -1;
        iVar1 = iVar1 + 10;
        piVar2 = piVar2 + 1;
      } while (lVar3 != 0);
    }
    iVar1 = __ptr[param_1 + -1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00101c58 */

int call_malloc_free(void)

{
  int *__ptr;
  int iVar1;
  long lVar2;
  
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    lVar2 = 0;
    do {
      *(int *)((long)__ptr + lVar2) = iVar1;
      lVar2 = lVar2 + 4;
      iVar1 = iVar1 + 10;
    } while (lVar2 != 0x28);
    iVar1 = __ptr[9] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: param_memset @ 00101cb4 */

int param_memset(byte *param_1,size_t param_2)

{
  int iVar1;
  
  memset(param_1,0,param_2);
  iVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    iVar1 = iVar1 + (uint)*param_1;
    param_1 = param_1 + 1;
  }
  return iVar1;
}



/* Function: call_memset @ 00101cf8 */

undefined4 call_memset(void)

{
  long lVar1;
  undefined4 local_30 [12];
  
  lVar1 = 0;
  do {
    *(undefined4 *)((long)local_30 + lVar1) = 0xff;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  return 0;
}



/* Function: param_strchr_strstr @ 00101d34 */

int param_strchr_strstr(char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = strchr(param_1,param_2 & 0xff);
  iVar1 = (int)pcVar3 - (int)param_1;
  if (pcVar3 == (char *)0x0) {
    iVar1 = -1;
  }
  pcVar3 = strstr(param_1,param_3);
  iVar2 = (int)pcVar3 - (int)param_1;
  if (pcVar3 == (char *)0x0) {
    iVar2 = -1;
  }
  return iVar2 + iVar1;
}



/* Function: call_strchr_strstr @ 00101d8c */

undefined8 call_strchr_strstr(void)

{
  return 0xf;
}



/* Function: test_standard_library_functions @ 00101d94 */

int test_standard_library_functions(void)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  FILE *__stream;
  ulong uVar4;
  int *__ptr;
  long lVar5;
  uint uVar6;
  int local_60 [2];
  ulong uStack_58;
  undefined8 local_40;
  int local_14;
  
  puts(&DAT_001036ec);
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  local_60 = (int  [2])0x62694c6f6c6c6548;
  sVar3 = strlen((char *)local_60);
  printf(&DAT_001033f4,sVar3);
  printf(&DAT_0010340f,0);
  printf(&DAT_0010342a,0xc);
  printf(&DAT_00103446,0x5a);
  uVar6 = 0xffffffff;
  printf(&DAT_00103462,0xffffffff);
  uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001033a6);
  printf(&DAT_0010347e,(ulong)uVar1);
  iVar2 = __isoc99_sscanf("123,456","%d,%d",local_60,&local_14);
  uVar1 = local_14 + local_60[0];
  if (iVar2 != 2) {
    uVar1 = 0xffffffff;
  }
  printf(&DAT_0010349a,(ulong)uVar1);
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar2 = fileno(__stream);
    fclose(__stream);
    uVar6 = 0x2a;
    if (iVar2 < 0) {
      uVar6 = 0xffffffff;
    }
  }
  printf(&DAT_001034b7,(ulong)uVar6);
  uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(&DAT_001034d3,uVar4 & 0xffffffff);
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = 0;
    lVar5 = 0;
    do {
      *(int *)((long)__ptr + lVar5) = iVar2;
      lVar5 = lVar5 + 4;
      iVar2 = iVar2 + 10;
    } while (lVar5 != 0x28);
    uVar1 = __ptr[9] + *__ptr;
    free(__ptr);
  }
  printf(&DAT_001034ef,(ulong)uVar1);
  lVar5 = 0;
  do {
    *(undefined4 *)((long)local_60 + lVar5) = 0xff;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x28);
  local_40 = 0;
  uStack_58 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  printf(&DAT_0010350b,0);
  iVar2 = printf(&DAT_00103526,0xf);
  return iVar2;
}



/* Function: param_linux_syscall @ 00101fa0 */

ulong param_linux_syscall(undefined8 param_1)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = syscall(0x38,0xffffff9c,param_1,0);
  if ((int)uVar1 < 0) {
    piVar2 = __errno_location();
    uVar1 = (ulong)(uint)-*piVar2;
  }
  else {
    syscall(0x39,uVar1 & 0xffffffff);
  }
  return uVar1 & 0xffffffff;
}



/* Function: call_linux_syscall @ 00101ff4 */

undefined4 call_linux_syscall(void)

{
  ulong uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
  iVar4 = (int)uVar1;
  if (iVar4 < 0) {
    piVar2 = __errno_location();
    iVar4 = -*piVar2;
  }
  else {
    syscall(0x39,uVar1 & 0xffffffff);
  }
  uVar3 = 0x2a;
  if (iVar4 < 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Function: param_win32_api @ 00102054 */

undefined4 param_win32_api(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long local_60;
  
  iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff70);
  uVar2 = 0x2a;
  if (local_60 < 1) {
    uVar2 = 0xfffffffe;
  }
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_win32_api @ 00102090 */

undefined4 call_win32_api(void)

{
  int iVar1;
  undefined4 uVar2;
  long local_60;
  
  iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff70);
  uVar2 = 0x2a;
  if (local_60 < 1) {
    uVar2 = 0xfffffffe;
  }
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_fork_exec @ 001020d4 */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
  __pid_t _Var1;
  uint uVar2;
  uint local_24;
  
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
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else if ((local_24 & 0x7f) == 0) {
      uVar2 = local_24 >> 8 & 0xff;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_fork_exec @ 0010215c */

undefined4 call_fork_exec(void)

{
  __pid_t _Var1;
  uint uVar2;
  undefined4 uVar3;
  uint local_14;
  
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl("/bin/true","/bin/true",0,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    _Var1 = waitpid(_Var1,(int *)&local_14,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else if ((local_14 & 0x7f) == 0) {
      uVar2 = local_14 >> 8 & 0xff;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  uVar3 = 0x2a;
  if (uVar2 != 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Function: param_pipe_communication @ 001021e4 */

undefined4 param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  
  iVar1 = pipe(&local_28);
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
        close(local_28);
        write(local_24,"HelloPipe",9);
        close(local_24);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_24);
      sVar3 = read(local_28,auStack_48,0x1f);
      auStack_48[sVar3] = 0;
      close(local_28);
      wait((void *)0x0);
      uVar4 = 0x2a;
      if (sVar3 < 1) {
        uVar4 = 0xfffffffd;
      }
    }
  }
  return uVar4;
}



/* Function: call_pipe_communication @ 0010229c */

void call_pipe_communication(void)

{
  param_pipe_communication();
  return;
}



/* Function: param_socket_create @ 001022b0 */

undefined4 param_socket_create(void)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  sockaddr local_38;
  undefined4 local_24;
  
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_24 = 1;
    iVar1 = setsockopt(__fd,1,2,&local_24,4);
    if (iVar1 < 0) {
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      local_38.sa_family = 2;
      local_38.sa_data[0] = '\0';
      local_38.sa_data[1] = '\0';
      local_38.sa_data[2] = '\0';
      local_38.sa_data[3] = '\0';
      local_38.sa_data[4] = '\0';
      local_38.sa_data[5] = '\0';
      local_38.sa_data[6] = '\0';
      local_38.sa_data[7] = '\0';
      local_38.sa_data[8] = '\0';
      local_38.sa_data[9] = '\0';
      local_38.sa_data[10] = '\0';
      local_38.sa_data[0xb] = '\0';
      local_38.sa_data[0xc] = '\0';
      local_38.sa_data[0xd] = '\0';
      iVar1 = bind(__fd,&local_38,0x10);
      if (iVar1 < 0) {
        close(__fd);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(__fd,5);
        close(__fd);
        uVar2 = 0xfffffffc;
        if (-1 < iVar1) {
          uVar2 = 0x2a;
        }
      }
    }
  }
  return uVar2;
}



/* Function: call_socket_create @ 00102374 */

void call_socket_create(void)

{
  param_socket_create();
  return;
}



/* Function: param_shmget_shmat @ 00102388 */

ulong param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        sVar2 = 0xfffffffe;
      }
      else {
        __s = shmat(iVar1,(void *)0x0,0);
        if (__s == (char *)0xffffffffffffffff) {
          sVar2 = 0xfffffffd;
        }
        else {
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar2 = strlen(__s);
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
      goto LAB_00102434;
    }
  }
  sVar2 = 0xffffffff;
LAB_00102434:
  return sVar2 & 0xffffffff;
}



/* Function: call_shmget_shmat @ 00102458 */

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



/* Function: param_signal_handling @ 00102478 */

undefined8 param_signal_handling(void)

{
  bool bVar1;
  bool bVar2;
  __sighandler_t p_Var3;
  undefined8 uVar4;
  int iVar5;
  
  p_Var3 = signal(10,signal_handler);
  if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
    uVar4 = 0xffffffff;
  }
  else {
    p_Var3 = signal(0xe,signal_handler);
    if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
      uVar4 = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        iVar5 = 1000;
        do {
          usleep(1000);
          bVar1 = iVar5 != 0;
          bVar2 = iVar5 != 1;
          iVar5 = iVar5 + -1;
        } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
      }
      if (signal_received == 0) {
        uVar4 = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        if (signal_received == 0) {
          iVar5 = 2000;
          do {
            usleep(1000);
            bVar1 = iVar5 != 0;
            bVar2 = iVar5 != 1;
            iVar5 = iVar5 + -1;
          } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          uVar4 = 0xfffffffb;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          uVar4 = 0x2a;
        }
      }
      else {
        uVar4 = 0xfffffffc;
      }
    }
  }
  return uVar4;
}



/* Function: signal_handler @ 001025ac */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: call_signal_handling @ 001025c4 */

void call_signal_handling(void)

{
  param_signal_handling();
  return;
}



/* Function: test_system_calls @ 001025d8 */

int test_system_calls(void)

{
  uint uVar1;
  int iVar2;
  __pid_t _Var3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_a0 [12];
  long local_70;
  
  puts(&DAT_00103710);
  uVar4 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
  iVar2 = (int)uVar4;
  if (iVar2 < 0) {
    piVar5 = __errno_location();
    iVar2 = -*piVar5;
  }
  else {
    syscall(0x39,uVar4 & 0xffffffff);
  }
  uVar6 = 0x2a;
  uVar1 = uVar6;
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  printf(&DAT_00103575,(ulong)uVar1);
  iVar2 = stat("/etc/passwd",(stat *)local_a0);
  if (local_70 < 1) {
    uVar6 = 0xfffffffe;
  }
  if (iVar2 < 0) {
    uVar6 = 0xffffffff;
  }
  printf(&DAT_00103591,(ulong)uVar6);
  _Var3 = fork();
  if (_Var3 < 0) {
    uVar6 = 0xffffffff;
  }
  else {
    if (_Var3 == 0) {
      execl("/bin/true","/bin/true",0,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    _Var3 = waitpid(_Var3,(int *)local_a0,0);
    if (_Var3 < 0) {
      uVar6 = 0xfffffffe;
    }
    else if ((local_a0[0] & 0x7f) == 0) {
      uVar6 = local_a0[0] >> 8 & 0xff;
    }
    else {
      uVar6 = 0xfffffffd;
    }
  }
  uVar7 = 0x2a;
  uVar1 = uVar7;
  if (uVar6 != 0) {
    uVar1 = 0xffffffff;
  }
  iVar2 = printf(&DAT_001035ad,(ulong)uVar1);
  uVar4 = param_pipe_communication(iVar2);
  iVar2 = printf(&DAT_001035c9,uVar4 & 0xffffffff);
  uVar4 = param_socket_create(iVar2);
  iVar2 = printf(&DAT_001035e5,uVar4 & 0xffffffff);
  iVar2 = param_shmget_shmat(iVar2);
  if (iVar2 < 1) {
    uVar7 = 0xffffffff;
  }
  iVar2 = printf(&DAT_00103601,(ulong)uVar7);
  uVar4 = param_signal_handling(iVar2);
  iVar2 = printf(&DAT_0010361d,uVar4 & 0xffffffff);
  return iVar2;
}



/* Function: thread_compute @ 00102758 */

void thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}



/* Function: param_pthread_create @ 00102784 */

undefined4 param_pthread_create(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_30;
  undefined4 local_24;
  pthread_t local_8;
  
  local_24 = param_1;
  iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
  if (iVar1 == 0) {
    pthread_join(local_8,&local_30);
    uVar2 = *local_30;
    free(local_30);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_pthread_create @ 001027e8 */

undefined4 call_pthread_create(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_30;
  undefined4 local_24;
  pthread_t local_8;
  
  local_24 = 7;
  iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
  if (iVar1 == 0) {
    pthread_join(local_8,&local_30);
    uVar2 = *local_30;
    free(local_30);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: thread_sum @ 00102850 */

undefined8 thread_sum(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  param_1[2] = 0;
  uVar3 = uVar2 - uVar1;
  if ((int)uVar1 <= (int)uVar2) {
    param_1[2] = param_1[2] + uVar1 + uVar3 + uVar3 * uVar1 +
                 (int)((ulong)(uVar2 + ~uVar1) * (ulong)uVar3 >> 1);
  }
  return 0;
}



/* Function: param_pthread_join @ 00102890 */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  undefined8 *__arg;
  long lVar3;
  int *piVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  pthread_t local_48 [3];
  
  __arg = &local_70;
  lVar3 = 0;
  local_70 = 0xa00000001;
  local_50 = 0;
  uStack_68 = 0xb00000000;
  uStack_60 = 0x14;
  local_58 = 0x1e00000015;
  do {
    iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
                           __arg);
    if (iVar1 != 0) {
      return -1;
    }
    __arg = (undefined8 *)((long)__arg + 0xc);
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  lVar3 = 0;
  iVar1 = 0;
  piVar4 = (int *)((ulong)&local_70 | 8);
  do {
    iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
    if (iVar2 != 0) {
      return -2;
    }
    lVar3 = lVar3 + 8;
    iVar1 = *piVar4 + iVar1;
    piVar4 = piVar4 + 3;
  } while (lVar3 != 0x18);
  return iVar1;
}



/* Function: call_pthread_join @ 00102970 */

int call_pthread_join(void)

{
  int iVar1;
  int iVar2;
  undefined8 *__arg;
  long lVar3;
  int *piVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  pthread_t local_48 [3];
  
  __arg = &local_70;
  lVar3 = 0;
  local_70 = 0xa00000001;
  local_50 = 0;
  uStack_68 = 0xb00000000;
  uStack_60 = 0x14;
  local_58 = 0x1e00000015;
  do {
    iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
                           __arg);
    if (iVar1 != 0) {
      return -1;
    }
    lVar3 = lVar3 + 8;
    __arg = (undefined8 *)((long)__arg + 0xc);
  } while (lVar3 != 0x18);
  lVar3 = 0;
  iVar1 = 0;
  piVar4 = (int *)((ulong)&local_70 | 8);
  do {
    iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
    if (iVar2 != 0) {
      return -2;
    }
    lVar3 = lVar3 + 8;
    iVar1 = *piVar4 + iVar1;
    piVar4 = piVar4 + 3;
  } while (lVar3 != 0x18);
  return iVar1;
}



/* Function: thread_increment @ 00102a50 */

undefined8 thread_increment(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
      usleep(1000);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}



/* Function: param_mutex_lock @ 00102ab8 */

undefined4 param_mutex_lock(uint param_1,int param_2)

{
  int iVar1;
  pthread_t *__ptr;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  pthread_t *ppVar5;
  int local_44;
  
  local_44 = param_2;
  __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    if (0 < (int)param_1) {
      lVar4 = 0;
      do {
        iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
                               thread_increment,&local_44);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        lVar4 = lVar4 + 8;
      } while ((ulong)param_1 * 8 - lVar4 != 0);
    }
    if (0 < (int)param_1) {
      uVar3 = (ulong)param_1;
      ppVar5 = __ptr;
      do {
        pthread_join(*ppVar5,(void **)0x0);
        uVar3 = uVar3 - 1;
        ppVar5 = ppVar5 + 1;
      } while (uVar3 != 0);
    }
    free(__ptr);
    uVar2 = 0x2a;
    if (shared_counter != local_44 * param_1) {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_mutex_lock @ 00102ba8 */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: consumer_thread @ 00102bc4 */

void consumer_thread(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  if ((ready & 1) == 0) {
    do {
      pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
    } while (ready != 1);
  }
  uVar2 = 0x2a;
  if (data == '\0') {
    uVar2 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar1 = malloc(4);
  *puVar1 = uVar2;
  return;
}



/* Function: producer_thread @ 00102c50 */

undefined8 producer_thread(void)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 1;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}



/* Function: param_condition_variable @ 00102cac */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_30;
  pthread_t local_28;
  pthread_t local_8;
  
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_28,&local_30);
      pthread_join(local_8,(void **)0x0);
      uVar2 = *local_30;
      free(local_30);
    }
    else {
      pthread_cancel(local_28);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_condition_variable @ 00102d54 */

void call_condition_variable(void)

{
  param_condition_variable();
  return;
}



/* Function: thread_atomic_increment @ 00102d68 */

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
    } while (iVar2 != iVar1);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 00102dcc */

undefined8 thread_atomic_load_store(void)

{
  atomic_counter._0_4_ = (int)atomic_counter + 100;
  return 0;
}



/* Function: param_atomic_ops @ 00102de8 */

undefined4 param_atomic_ops(uint param_1,undefined4 param_2)

{
  int iVar1;
  pthread_t *__ptr;
  undefined4 uVar2;
  ulong uVar3;
  pthread_t *ppVar4;
  long lVar5;
  pthread_t local_50;
  undefined4 local_44;
  
  local_44 = param_2;
  __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    atomic_counter._0_4_ = 0;
    if (0 < (int)param_1) {
      lVar5 = 0;
      do {
        iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
                               thread_atomic_increment,&local_44);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        lVar5 = lVar5 + 8;
      } while ((ulong)param_1 * 8 - lVar5 != 0);
    }
    iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_50,(void **)0x0);
    }
    if (0 < (int)param_1) {
      uVar3 = (ulong)param_1;
      ppVar4 = __ptr;
      do {
        pthread_join(*ppVar4,(void **)0x0);
        uVar3 = uVar3 - 1;
        ppVar4 = ppVar4 + 1;
      } while (uVar3 != 0);
    }
    iVar1 = (int)atomic_counter;
    free(__ptr);
    uVar2 = 0x2a;
    if (iVar1 < 1) {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_atomic_ops @ 00102efc */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: thread_tls_test @ 00102f18 */

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
  strncpy((char *)(lVar3 + 0x14),param_1,0x1f);
  piVar4 = malloc(8);
  *piVar4 = iVar2;
  piVar4[1] = iVar1;
  return;
}



/* Function: param_thread_local_storage @ 00102f68 */

undefined4 param_thread_local_storage(uint param_1)

{
  int iVar1;
  pthread_t *__ptr;
  undefined8 *__ptr_00;
  char *__s;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  pthread_t *ppVar5;
  int iVar6;
  undefined8 *puVar7;
  int *local_58;
  
  uVar4 = -(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3;
  __ptr = malloc(uVar4);
  __ptr_00 = malloc(uVar4);
  uVar2 = 0xffffffff;
  if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (undefined8 *)0x0)) {
    if (0 < (int)param_1) {
      uVar4 = 0;
      do {
        __s = malloc(0x10);
        __ptr_00[uVar4] = __s;
        snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
        uVar4 = uVar4 + 1;
      } while (param_1 != uVar4);
    }
    if (0 < (int)param_1) {
      uVar4 = 0;
      ppVar5 = __ptr;
      do {
        iVar1 = pthread_create(ppVar5,(pthread_attr_t *)0x0,thread_tls_test,(void *)__ptr_00[uVar4])
        ;
        uVar4 = uVar4 + 1;
        if (iVar1 != 0) {
          uVar3 = 0;
          do {
            free((void *)__ptr_00[uVar3]);
            uVar3 = uVar3 + 1;
          } while (uVar4 != uVar3);
          free(__ptr_00);
          free(__ptr);
          return 0xfffffffe;
        }
        ppVar5 = ppVar5 + 1;
      } while (param_1 != uVar4);
    }
    if ((int)param_1 < 1) {
      iVar1 = 0;
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      iVar1 = 0;
      uVar4 = (ulong)param_1;
      ppVar5 = __ptr;
      puVar7 = __ptr_00;
      do {
        pthread_join(*ppVar5,&local_58);
        iVar1 = *local_58 + iVar1;
        iVar6 = local_58[1] + iVar6;
        free(local_58);
        free((void *)*puVar7);
        uVar4 = uVar4 - 1;
        ppVar5 = ppVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
    }
    free(__ptr_00);
    free(__ptr);
    uVar2 = 0x2a;
    if (iVar6 != param_1 * 0x96 || iVar1 != param_1 * 100) {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}



/* Function: call_thread_local_storage @ 0010310c */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 00103124 */

int test_thread_concurrency(void)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  pthread_t *__arg;
  long lVar4;
  int *piVar5;
  undefined4 local_74;
  pthread_t local_70 [4];
  undefined4 local_50;
  uint *local_48 [3];
  
  puts(&DAT_0010372b);
  local_74 = 7;
  iVar1 = pthread_create(local_70,(pthread_attr_t *)0x0,thread_compute,&local_74);
  if (iVar1 == 0) {
    pthread_join(local_70[0],local_48);
    uVar3 = *local_48[0];
    free(local_48[0]);
  }
  else {
    uVar3 = 0xffffffff;
  }
  printf(&DAT_00103643,(ulong)uVar3);
  lVar4 = 0;
  __arg = local_70;
  local_70[0] = 0xa00000001;
  local_50 = 0;
  local_70[1] = 0xb00000000;
  local_70[2] = 0x14;
  local_70[3] = 0x1e00000015;
  do {
    iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar4),(pthread_attr_t *)0x0,thread_sum,
                           __arg);
    if (iVar1 != 0) {
      uVar3 = 0xffffffff;
      goto LAB_0010324c;
    }
    lVar4 = lVar4 + 8;
    __arg = (pthread_t *)((long)__arg + 0xc);
  } while (lVar4 != 0x18);
  lVar4 = 0;
  uVar3 = 0;
  piVar5 = (int *)((ulong)local_70 | 8);
  do {
    iVar1 = pthread_join(*(pthread_t *)((long)local_48 + lVar4),(void **)0x0);
    if (iVar1 != 0) {
      uVar3 = 0xfffffffe;
      break;
    }
    lVar4 = lVar4 + 8;
    uVar3 = *piVar5 + uVar3;
    piVar5 = piVar5 + 3;
  } while (lVar4 != 0x18);
LAB_0010324c:
  printf(&DAT_0010365f,(ulong)uVar3);
  uVar2 = param_mutex_lock(4,1000);
  iVar1 = printf(&DAT_0010367c,uVar2 & 0xffffffff);
  uVar2 = param_condition_variable(iVar1);
  printf(&DAT_00103698,uVar2 & 0xffffffff);
  uVar2 = param_atomic_ops(4,500);
  printf(&DAT_001036b4,uVar2 & 0xffffffff);
  uVar2 = param_thread_local_storage(4);
  iVar1 = printf(&DAT_001036d0,uVar2 & 0xffffffff);
  return iVar1;
}



/* Function: main @ 001032d4 */

undefined8 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103300 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 00103340 */

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



/* Function: _fini @ 00103370 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 75 */
