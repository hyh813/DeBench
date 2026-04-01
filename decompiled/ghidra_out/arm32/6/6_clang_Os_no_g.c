/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/6/6_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010c3c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010f70 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010fb4 */

/* WARNING: Removing unreachable block (ram,0x00010fc8) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010fd8 */

/* WARNING: Removing unreachable block (ram,0x00010ff8) */
/* WARNING: Removing unreachable block (ram,0x00011004) */
/* WARNING: Removing unreachable block (ram,0x00011008) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001101c */

/* WARNING: Removing unreachable block (ram,0x00011048) */
/* WARNING: Removing unreachable block (ram,0x00011054) */
/* WARNING: Removing unreachable block (ram,0x00011058) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 0001106c */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: param_strcpy @ 000110d8 */

void param_strcpy(char *param_1,char *param_2)

{
  char *__s;
  
  __s = strcpy(param_1,param_2);
  strlen(__s);
  return;
}



/* Function: call_strcpy @ 000110e8 */

void call_strcpy(void)

{
  char local_28 [4];
  char acStack_24 [4];
  char local_20;
  
  local_28[0] = 'H';
  local_28[1] = 'e';
  local_28[2] = 'l';
  local_28[3] = 'l';
  acStack_24[0] = 'o';
  acStack_24[1] = 'L';
  acStack_24[2] = 'i';
  acStack_24[3] = 'b';
  local_20 = '\0';
  strlen(local_28);
  return;
}



/* Function: param_strcmp @ 00011124 */

undefined4 param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (0 < iVar1) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: call_strcmp @ 0001114c */

undefined4 call_strcmp(void)

{
  return 0;
}



/* Function: param_strlen @ 00011154 */

void param_strlen(char *param_1)

{
  strlen(param_1);
  return;
}



/* Function: call_strlen @ 00011158 */

undefined4 call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00011160 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 00011178 */

undefined4 call_memcpy(void)

{
  return 0x5a;
}



/* Function: param_memcmp @ 00011180 */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (0 < iVar1) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: call_memcmp @ 000111a8 */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = memcmp(&DAT_0001285c,&DAT_00012850,0xc);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = -1;
  }
  if (0 < iVar1) {
    iVar3 = 1;
  }
  iVar2 = memcmp(&DAT_0001285c,&DAT_0001285c,0xc);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = -1;
  }
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1 + iVar3;
}



/* Function: param_printf @ 00011218 */

void param_printf(undefined4 param_1,undefined4 param_2)

{
  printf("Value: %d, Name: %s\n",param_1,param_2);
  return;
}



/* Function: call_printf @ 00011230 */

void call_printf(void)

{
  printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
  return;
}



/* Function: param_scanf @ 00011250 */

int param_scanf(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_c,&local_10);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = local_10 + local_c;
  }
  return iVar2;
}



/* Function: call_scanf @ 00011294 */

int call_scanf(void)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = local_10 + local_c;
  }
  return iVar2;
}



/* Function: param_fopen_fclose @ 000112e4 */

int param_fopen_fclose(char *param_1)

{
  FILE *__stream;
  int iVar1;
  
  __stream = fopen(param_1,"r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    return iVar1;
  }
  return -1;
}



/* Function: call_fopen_fclose @ 00011328 */

undefined4 call_fopen_fclose(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_fopen_fclose("/etc/passwd");
  uVar2 = 0xffffffff;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_fread_fwrite @ 00011354 */

undefined4 param_fread_fwrite(char *param_1)

{
  FILE *__s;
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar1 == 0x12) {
      rewind(__s);
      sVar1 = fread(auStack_38,1,0x12,__s);
      auStack_38[sVar1] = 0;
      fclose(__s);
      unlink(param_1);
      uVar2 = 0xfffffffd;
      if (sVar1 == 0x12) {
        iVar3 = bcmp(auStack_38,"BinBench Test Data",0x13);
        uVar2 = 0xfffffffd;
        if (iVar3 == 0) {
          uVar2 = 0x2a;
        }
      }
    }
    else {
      fclose(__s);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



/* Function: call_fread_fwrite @ 00011434 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00011444 */

int param_malloc_free(int param_1)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_r5;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    if (param_1 != 0) {
      iVar1 = 0;
      piVar2 = __ptr;
      iVar3 = param_1;
      do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 10;
        iVar3 = iVar3 + -1;
        piVar2 = piVar2 + 1;
      } while (iVar3 != 0);
      unaff_r5 = *__ptr;
    }
    iVar3 = __ptr[param_1 + -1];
    free(__ptr);
    iVar3 = iVar3 + unaff_r5;
  }
  return iVar3;
}



/* Function: call_malloc_free @ 000114a8 */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 000114b0 */

int param_memset(byte *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = 0;
  memset(param_1,0,param_2);
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      param_2 = param_2 - 1;
      iVar1 = iVar1 + (uint)*param_1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return iVar1;
}



/* Function: call_memset @ 000114f4 */

undefined4 call_memset(void)

{
  return 0;
}



/* Function: param_strchr_strstr @ 000114fc */

int param_strchr_strstr(char *param_1,int param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = strchr(param_1,param_2);
  iVar3 = (int)pcVar1 - (int)param_1;
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  pcVar1 = strstr(param_1,param_3);
  iVar2 = (int)pcVar1 - (int)param_1;
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 0001153c */

undefined4 call_strchr_strstr(void)

{
  return 0xf;
}



/* Function: test_standard_library_functions @ 00011544 */

void test_standard_library_functions(void)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_2c;
  char acStack_28 [4];
  char local_24;
  int local_c;
  
  puts(&DAT_00012bb6);
  local_2c._0_1_ = 'H';
  local_2c._1_1_ = 'e';
  local_2c._2_1_ = 'l';
  local_2c._3_1_ = 'l';
  acStack_28[0] = 'o';
  acStack_28[1] = 'L';
  acStack_28[2] = 'i';
  acStack_28[3] = 'b';
  local_24 = '\0';
  sVar1 = strlen((char *)&local_2c);
  printf(&DAT_000128cb,sVar1);
  printf(&DAT_000128e6,0);
  printf(&DAT_00012901,0xc);
  printf(&DAT_0001291d,0x5a);
  uVar2 = call_memcmp();
  printf(&DAT_00012939,uVar2);
  iVar3 = printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
  printf(&DAT_00012955,iVar3);
  iVar3 = __isoc99_sscanf("123,456","%d,%d",&local_2c,&local_c);
  iVar5 = -1;
  uVar2 = 0xffffffff;
  if (iVar3 == 2) {
    iVar5 = local_c + local_2c;
  }
  printf(&DAT_00012971,iVar5);
  uVar4 = param_fopen_fclose("/etc/passwd");
  if (uVar4 < 0x80000000) {
    uVar2 = 0x2a;
  }
  printf(&DAT_0001298e,uVar2);
  uVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(&DAT_000129aa,uVar2);
  uVar2 = param_malloc_free(10);
  printf(&DAT_000129c6,uVar2);
  printf(&DAT_000129e2,0);
  printf(&DAT_000129fd,0xf);
  return;
}



/* Function: param_linux_syscall @ 0001170c */

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



/* Function: call_linux_syscall @ 00011754 */

undefined4 call_linux_syscall(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_linux_syscall("/etc/passwd");
  uVar2 = 0xffffffff;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_win32_api @ 00011780 */

undefined4 param_win32_api(char *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  stat sStack_60;
  
  uVar1 = stat(param_1,&sStack_60);
  uVar2 = 0xfffffffe;
  if (0 < sStack_60.st_size) {
    uVar2 = 0x2a;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_win32_api @ 000117b8 */

undefined4 call_win32_api(void)

{
  uint uVar1;
  undefined4 uVar2;
  stat sStack_60;
  
  uVar1 = stat("/etc/passwd",&sStack_60);
  uVar2 = 0xfffffffe;
  if (0 < sStack_60.st_size) {
    uVar2 = 0x2a;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_fork_exec @ 000117fc */

uint param_fork_exec(char *param_1,undefined4 param_2)

{
  __pid_t _Var1;
  uint uVar2;
  uint local_14;
  
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
    _Var1 = waitpid(_Var1,(int *)&local_14,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0xfffffffd;
      if ((local_14 & 0x7f) == 0) {
        uVar2 = local_14 >> 8 & 0xff;
      }
    }
  }
  return uVar2;
}



/* Function: call_fork_exec @ 0001187c */

undefined4 call_fork_exec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_fork_exec("/bin/true",0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_pipe_communication @ 000118ac */

undefined4 param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  
  iVar1 = pipe(&local_18);
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
        close(local_18);
        write(local_14,"HelloPipe",9);
        close(local_14);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_14);
      sVar3 = read(local_18,auStack_38,0x1f);
      auStack_38[sVar3] = 0;
      close(local_18);
      wait((void *)0x0);
      uVar4 = 0xfffffffd;
      if (0 < sVar3) {
        uVar4 = 0x2a;
      }
    }
  }
  return uVar4;
}



/* Function: param_socket_create @ 00011968 */

undefined4 param_socket_create(void)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  sockaddr local_24;
  undefined4 local_14;
  
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_14 = 1;
    iVar1 = setsockopt(__fd,1,2,&local_14,4);
    if (iVar1 < 0) {
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      local_24.sa_family = 2;
      local_24.sa_data[0] = '\0';
      local_24.sa_data[1] = '\0';
      local_24.sa_data[10] = '\0';
      local_24.sa_data[0xb] = '\0';
      local_24.sa_data[0xc] = '\0';
      local_24.sa_data[0xd] = '\0';
      local_24.sa_data[6] = '\0';
      local_24.sa_data[7] = '\0';
      local_24.sa_data[8] = '\0';
      local_24.sa_data[9] = '\0';
      local_24.sa_data[2] = '\0';
      local_24.sa_data[3] = '\0';
      local_24.sa_data[4] = '\0';
      local_24.sa_data[5] = '\0';
      iVar1 = bind(__fd,&local_24,0x10);
      if (iVar1 < 0) {
        close(__fd);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(__fd,5);
        close(__fd);
        uVar2 = 0x2a;
        if (iVar1 < 0) {
          uVar2 = 0xfffffffc;
        }
      }
    }
  }
  return uVar2;
}



/* Function: param_shmget_shmat @ 00011a44 */

size_t param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  sVar2 = 0xffffffff;
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



/* Function: call_shmget_shmat @ 00011b1c */

undefined4 call_shmget_shmat(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_shmget_shmat();
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_signal_handling @ 00011b3c */

undefined4 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
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
      if (signal_received == 0) {
        iVar3 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          bVar4 = iVar3 != 0;
          iVar3 = iVar3 + -1;
        } while (bVar4 && iVar3 != 0);
      }
      if (signal_received == 0) {
        uVar2 = 0xfffffffd;
      }
      else {
        uVar2 = 0xfffffffc;
        if (signal_number == 10) {
          signal_received = 0;
          alarm(1);
          if (signal_received == 0) {
            iVar3 = 2000;
            do {
              usleep(1000);
              if (signal_received != 0) break;
              bVar4 = iVar3 != 0;
              iVar3 = iVar3 + -1;
            } while (bVar4 && iVar3 != 0);
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
  }
  return uVar2;
}



/* Function: signal_handler @ 00011cb0 */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: test_system_calls @ 00011cdc */

void test_system_calls(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  stat sStack_68;
  
  puts(&DAT_00012bda);
  uVar1 = param_linux_syscall("/etc/passwd");
  uVar3 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (uVar1 < 0x80000000) {
    uVar3 = 0x2a;
  }
  printf(&DAT_00012a3f,uVar3);
  uVar1 = stat("/etc/passwd",&sStack_68);
  uVar3 = 0xfffffffe;
  if (0 < sStack_68.st_size) {
    uVar3 = 0x2a;
  }
  if (0x7fffffff < uVar1) {
    uVar3 = 0xffffffff;
  }
  printf(&DAT_00012a5b,uVar3);
  iVar2 = param_fork_exec("/bin/true",0);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    uVar3 = 0x2a;
  }
  printf(&DAT_00012a77,uVar3);
  uVar3 = param_pipe_communication();
  printf(&DAT_00012a93,uVar3);
  uVar3 = param_socket_create();
  printf(&DAT_00012aaf,uVar3);
  iVar2 = param_shmget_shmat();
  if (0 < iVar2) {
    uVar4 = 0x2a;
  }
  printf(&DAT_00012acb,uVar4);
  uVar3 = param_signal_handling();
  printf(&DAT_00012ae7,uVar3);
  return;
}



/* Function: thread_compute @ 00011dfc */

void thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}



/* Function: param_pthread_create @ 00011e1c */

undefined4 param_pthread_create(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_14;
  undefined4 local_10;
  pthread_t local_c;
  
  local_10 = param_1;
  iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    pthread_join(local_c,&local_14);
    uVar2 = *local_14;
    free(local_14);
  }
  return uVar2;
}



/* Function: call_pthread_create @ 00011e78 */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: thread_sum @ 00011e80 */

undefined4 thread_sum(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[2] = 0;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if ((int)uVar2 <= (int)uVar3) {
    lVar1 = (ulonglong)(uVar3 - uVar2) * (ulonglong)(uVar3 + ~uVar2);
    param_1[2] = (uVar3 - uVar2) * (uVar2 + 1) + uVar2 +
                 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
  }
  return 0;
}



/* Function: param_pthread_join @ 00011ed0 */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  undefined4 *__arg;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  pthread_t local_24 [3];
  
  __arg = &local_48;
  iVar3 = 0;
  memset(local_40,0,0x1c);
  local_2c = 0x1e;
  local_30 = 0x15;
  local_40[2] = 0x14;
  local_40[1] = 0xb;
  local_44 = 10;
  local_48 = 1;
  do {
    iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar3),(pthread_attr_t *)0x0,thread_sum,
                           __arg);
    if (iVar1 != 0) {
      return -1;
    }
    iVar3 = iVar3 + 4;
    __arg = (undefined4 *)((int)__arg + 0xc);
  } while (iVar3 != 0xc);
  iVar1 = 0;
  iVar3 = 0;
  do {
    iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
    if (iVar2 != 0) {
      return -2;
    }
    iVar2 = iVar1 * -3;
    iVar1 = iVar1 + -4;
    iVar3 = *(int *)((int)local_40 + iVar2) + iVar3;
  } while (iVar1 != -0xc);
  return iVar3;
}



/* Function: thread_increment @ 00011fbc */

undefined4 thread_increment(int *param_1)

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



/* Function: param_mutex_lock @ 00012024 */

undefined4 param_mutex_lock(int param_1,int param_2)

{
  pthread_t *__ptr;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  pthread_t *ppVar4;
  int local_24;
  
  local_24 = param_2;
  __ptr = malloc(param_1 << 2);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    if (0 < param_1) {
      iVar3 = param_1;
      ppVar4 = __ptr;
      do {
        iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_24);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        ppVar4 = ppVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      ppVar4 = __ptr;
      iVar3 = param_1;
      if (0 < param_1) {
        do {
          pthread_join(*ppVar4,(void **)0x0);
          iVar3 = iVar3 + -1;
          ppVar4 = ppVar4 + 1;
        } while (iVar3 != 0);
      }
    }
    free(__ptr);
    uVar2 = 0xfffffffd;
    if (shared_counter == local_24 * param_1) {
      uVar2 = 0x2a;
    }
  }
  return uVar2;
}



/* Function: call_mutex_lock @ 00012114 */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: consumer_thread @ 00012120 */

void consumer_thread(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  if (ready == '\0') {
    do {
      pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
    } while (ready != '\x01');
  }
  cVar1 = data;
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = 0x2a;
  }
  puVar2 = malloc(4);
  *puVar2 = uVar3;
  return;
}



/* Function: producer_thread @ 000121b8 */

undefined4 producer_thread(void)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 1;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}



/* Function: param_condition_variable @ 00012220 */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_14;
  pthread_t local_10;
  pthread_t local_c;
  
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_10,&local_14);
      pthread_join(local_c,(void **)0x0);
      uVar2 = *local_14;
      free(local_14);
    }
    else {
      pthread_cancel(local_10);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



/* Function: thread_atomic_increment @ 000122e0 */

undefined4 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      __atomic_fetch_add_4(&atomic_counter,1,5);
      local_1c = iVar2;
      __atomic_compare_exchange_4(&atomic_counter,&local_1c,iVar2 + 1000,5,5);
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar1);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 00012354 */

undefined4 thread_atomic_load_store(void)

{
  int iVar1;
  
  iVar1 = __atomic_load_4(&atomic_counter,5);
  __atomic_store_4(&atomic_counter,iVar1 + 100,5);
  return 0;
}



/* Function: param_atomic_ops @ 0001238c */

undefined4 param_atomic_ops(int param_1,undefined4 param_2)

{
  pthread_t *__ptr;
  int iVar1;
  undefined4 uVar2;
  pthread_t *ppVar3;
  int iVar4;
  pthread_t local_28;
  undefined4 local_24;
  
  local_24 = param_2;
  __ptr = malloc(param_1 << 2);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    __atomic_store_4(&atomic_counter,0,5);
    if (0 < param_1) {
      ppVar3 = __ptr;
      iVar4 = param_1;
      do {
        iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_24);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        ppVar3 = ppVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar4 == 0) {
      pthread_join(local_28,(void **)0x0);
    }
    ppVar3 = __ptr;
    if (0 < param_1) {
      do {
        pthread_join(*ppVar3,(void **)0x0);
        param_1 = param_1 + -1;
        ppVar3 = ppVar3 + 1;
      } while (param_1 != 0);
    }
    iVar4 = __atomic_load_4(&atomic_counter,5);
    free(__ptr);
    uVar2 = 0xfffffffd;
    if (0 < iVar4) {
      uVar2 = 0x2a;
    }
  }
  return uVar2;
}



/* Function: call_atomic_ops @ 000124b0 */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: thread_tls_test @ 000124bc */

void thread_tls_test(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int extraout_r2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = __aeabi_read_tp(param_1,param_1,8);
  iVar1 = (int)uVar5;
  iVar3 = *(int *)(iVar1 + extraout_r2);
  iVar4 = iVar3 + 0x32;
  *(int *)(iVar1 + extraout_r2) = iVar4;
  strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar5 >> 0x20),0x1f);
  piVar2 = malloc(8);
  *piVar2 = iVar3;
  piVar2[1] = iVar4;
  return;
}



/* Function: param_thread_local_storage @ 00012504 */

undefined4 param_thread_local_storage(int param_1)

{
  pthread_t *__ptr;
  undefined4 *__ptr_00;
  char *__s;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  pthread_t *ppVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_28;
  
  __ptr = malloc(param_1 << 2);
  __ptr_00 = malloc(param_1 << 2);
  if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  if (0 < param_1) {
    iVar3 = 0;
    do {
      __s = malloc(0x10);
      __ptr_00[iVar3] = __s;
      snprintf(__s,0x10,"Thread-%d",iVar3);
      iVar3 = iVar3 + 1;
    } while (param_1 != iVar3);
    if (0 < param_1) {
      iVar3 = 0;
      ppVar4 = __ptr;
      do {
        iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_tls_test,(void *)__ptr_00[iVar3])
        ;
        if (iVar1 != 0) {
          iVar1 = 0;
          do {
            free((void *)__ptr_00[iVar1]);
            iVar1 = iVar1 + 1;
          } while (iVar3 + 1 != iVar1);
          free(__ptr_00);
          free(__ptr);
          return 0xfffffffe;
        }
        iVar3 = iVar3 + 1;
        ppVar4 = ppVar4 + 1;
      } while (param_1 != iVar3);
      if (0 < param_1) {
        iVar1 = 0;
        iVar3 = 0;
        ppVar4 = __ptr;
        puVar5 = __ptr_00;
        iVar8 = param_1;
        do {
          pthread_join(*ppVar4,&local_28);
          iVar6 = *local_28;
          iVar7 = local_28[1];
          free(local_28);
          free((void *)*puVar5);
          iVar1 = iVar7 + iVar1;
          iVar3 = iVar6 + iVar3;
          iVar8 = iVar8 + -1;
          ppVar4 = ppVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar8 != 0);
        goto LAB_00012620;
      }
    }
  }
  iVar3 = 0;
  iVar1 = 0;
LAB_00012620:
  free(__ptr_00);
  free(__ptr);
  uVar2 = 0xfffffffd;
  if (iVar3 == param_1 * 100 && iVar1 == param_1 * 0x96) {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: call_thread_local_storage @ 000126a0 */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 000126a8 */

void test_thread_concurrency(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00012bf5);
  uVar1 = param_pthread_create(7);
  printf(&DAT_00012b0d,uVar1);
  uVar1 = param_pthread_join();
  printf(&DAT_00012b29,uVar1);
  uVar1 = param_mutex_lock(4,1000);
  printf(&DAT_00012b46,uVar1);
  uVar1 = param_condition_variable();
  printf(&DAT_00012b62,uVar1);
  uVar1 = param_atomic_ops(4,500);
  printf(&DAT_00012b7e,uVar1);
  uVar1 = param_thread_local_storage(4);
  printf(&DAT_00012b9a,uVar1);
  return;
}



/* Function: main @ 00012768 */

undefined4 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _fini @ 00012798 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 65 */
