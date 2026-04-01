/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/6/6_gcc_O0_g
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

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  char *src_local;
  char *dst_local;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return (int)sVar1;
}



/* Function: call_strcpy @ 0010289e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int len;
  char buffer [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = param_strcpy(buffer,"HelloLib");
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_strcmp @ 001028eb */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  char *s2_local;
  char *s1_local;
  int ret;
  
  iVar1 = strcmp(s1,s2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_strcmp @ 00102936 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int r1;
  int r2;
  int r3;
  
  iVar1 = param_strcmp("abc","def");
  iVar2 = param_strcmp("xyz","xyz");
  iVar3 = param_strcmp("bbb","aaa");
  return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 001029a5 */

int param_strlen(char *str)

{
  size_t sVar1;
  char *str_local;
  size_t len;
  
  sVar1 = strlen(str);
  return (int)sVar1;
}



/* Function: call_strlen @ 001029cb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  int iVar1;
  char *test;
  
  iVar1 = param_strlen("BinBench2025");
  return iVar1;
}



/* Function: param_memcpy @ 001029f0 */

int param_memcpy(void *dst,void *src,size_t n)

{
  size_t n_local;
  void *src_local;
  void *dst_local;
  
  memcpy(dst,src,n);
  return (int)n;
}



/* Function: call_memcpy @ 00102a25 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  long lVar1;
  long in_FS_OFFSET;
  int src [5];
  int dst [5];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  src[0] = 10;
  src[1] = 0x14;
  src[2] = 0x1e;
  src[3] = 0x28;
  src[4] = 0x32;
  dst[0] = 0;
  dst[1] = 0;
  dst[2] = 0;
  dst[3] = 0;
  dst[4] = 0;
  param_memcpy(dst,src,0x14);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dst[4] + dst[0] + dst[2];
}



/* Function: param_memcmp @ 00102ab5 */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  size_t n_local;
  void *p2_local;
  void *p1_local;
  int ret;
  
  iVar1 = memcmp(p1,p2,n);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_memcmp @ 00102b08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  int r1;
  int r2;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr2[0] = 1;
  arr2[1] = 2;
  arr2[2] = 4;
  arr3[0] = 1;
  arr3[1] = 2;
  arr3[2] = 3;
  iVar2 = param_memcmp(arr1,arr2,0xc);
  iVar3 = param_memcmp(arr1,arr3,0xc);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3 + iVar2;
}



/* Function: param_printf @ 00102bb6 */

int param_printf(int x,char *name)

{
  int iVar1;
  char *name_local;
  int x_local;
  int ret;
  
  iVar1 = printf("Value: %d, Name: %s\n",(ulong)(uint)x,name);
  return iVar1;
}



/* Function: call_printf @ 00102bee */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  int chars;
  
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 00102c16 */

int param_scanf(char *input_str)

{
  int iVar1;
  long in_FS_OFFSET;
  char *input_str_local;
  int a;
  int b;
  int ret;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ret = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  if (ret == 2) {
    iVar1 = b + a;
  }
  else {
    iVar1 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: call_scanf @ 00102c83 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00102c9c */

int param_fopen_fclose(char *filename)

{
  int iVar1;
  FILE *__stream;
  char *filename_local;
  int fd;
  FILE *fp;
  
  __stream = fopen(filename,"r");
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  int fd;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_fread_fwrite @ 00102d26 */

int param_fread_fwrite(char *tmpfile)

{
  long lVar1;
  int iVar2;
  FILE *__s;
  size_t sVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  char *tmpfile_local;
  char *write_data;
  FILE *fp;
  size_t written;
  size_t read;
  char read_buffer [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar2 = -1;
  }
  else {
    sVar3 = strlen("BinBench Test Data");
    sVar3 = fwrite("BinBench Test Data",1,sVar3,__s);
    sVar4 = strlen("BinBench Test Data");
    if (sVar3 == sVar4) {
      rewind(__s);
      sVar4 = fread(read_buffer,1,sVar3,__s);
      read_buffer[sVar4] = '\0';
      fclose(__s);
      unlink(tmpfile);
      if (sVar4 == sVar3) {
        iVar2 = strcmp(read_buffer,"BinBench Test Data");
        if (iVar2 == 0) {
          iVar2 = 0x2a;
          goto LAB_00102e4a;
        }
      }
      iVar2 = -3;
    }
    else {
      fclose(__s);
      iVar2 = -2;
    }
  }
LAB_00102e4a:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_fread_fwrite @ 00102e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00102e79 */

int param_malloc_free(size_t size)

{
  int iVar1;
  int *__ptr;
  size_t size_local;
  int sum;
  size_t i;
  int *ptr;
  
  __ptr = malloc(size << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < size; i = i + 1) {
      __ptr[i] = (int)i * 10;
    }
    iVar1 = __ptr[size - 1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00102f23 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00102f37 */

int param_memset(void *buffer,size_t size)

{
  size_t size_local;
  void *buffer_local;
  int sum;
  size_t i;
  uchar *bytes;
  
  memset(buffer,0,size);
  sum = 0;
  for (i = 0; i < size; i = i + 1) {
    sum = sum + (uint)*(byte *)(i + (long)buffer);
  }
  return sum;
}



/* Function: call_memset @ 00102fa1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  long lVar1;
  long in_FS_OFFSET;
  int i;
  int buffer [10];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  for (i = 0; i < 10; i = i + 1) {
    buffer[i] = 0xff;
  }
  param_memset(buffer,0x28);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return buffer[9] + buffer[0];
}



/* Function: param_strchr_strstr @ 0010300b */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *substr_local;
  char ch_local;
  char *str_local;
  int index1;
  int index2;
  char *pos1;
  char *pos2;
  
  pcVar3 = strchr(str,(int)ch);
  if (pcVar3 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)pcVar3 - (int)str;
  }
  pcVar3 = strstr(str,substr);
  if (pcVar3 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar3 - (int)str;
  }
  return iVar2 + iVar1;
}



/* Function: call_strchr_strstr @ 0010308d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  int result;
  char *text;
  
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 001030c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

int param_linux_syscall(char *pathname)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  char *pathname_local;
  int fd;
  
  uVar2 = syscall(2,pathname,0);
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  int result;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_win32_api @ 001032e8 */

int param_win32_api(char *filename)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *filename_local;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = stat(filename,(stat *)&st);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else if (st.st_size < 1) {
    iVar2 = -2;
  }
  else {
    iVar2 = 0x2a;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_win32_api @ 0010335c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 00103375 */

int param_fork_exec(char *prog,char *arg)

{
  uint uVar1;
  long in_FS_OFFSET;
  char *arg_local;
  char *prog_local;
  int status;
  pid_t pid;
  pid_t wpid;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pid = fork();
  if (pid < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (pid == 0) {
      execl(prog,prog,arg,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    wpid = waitpid(pid,&status,0);
    if (wpid < 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((status & 0x7fU) == 0) {
      uVar1 = status >> 8 & 0xff;
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  int ret;
  
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  if (iVar1 == 0) {
    iVar1 = 0x2a;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: param_pipe_communication @ 00103468 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  long lVar1;
  int iVar2;
  __pid_t _Var3;
  size_t __n;
  ssize_t sVar4;
  long in_FS_OFFSET;
  pid_t pid;
  ssize_t bytes;
  char *msg;
  int pipefd [2];
  char buffer [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = pipe(pipefd);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    _Var3 = fork();
    if (_Var3 < 0) {
      iVar2 = -2;
    }
    else {
      if (_Var3 == 0) {
        close(pipefd[0]);
        __n = strlen("HelloPipe");
        write(pipefd[1],"HelloPipe",__n);
        close(pipefd[1]);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(pipefd[1]);
      sVar4 = read(pipefd[0],buffer,0x1f);
      buffer[sVar4] = '\0';
      close(pipefd[0]);
      wait((void *)0x0);
      if (sVar4 < 1) {
        iVar2 = -3;
      }
      else {
        iVar2 = 0x2a;
      }
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_pipe_communication @ 00103573 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 00103582 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int opt;
  int sock;
  sockaddr_in addr;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sock = socket(2,1,0);
  if (sock < 0) {
    iVar2 = -1;
  }
  else {
    opt = 1;
    iVar2 = setsockopt(sock,1,2,&opt,4);
    if (iVar2 < 0) {
      close(sock);
      iVar2 = -2;
    }
    else {
      memset(&addr,0,0x10);
      addr.sin_family = 2;
      addr.sin_port = htons(0);
      addr.sin_addr.s_addr = 0;
      iVar2 = bind(sock,(sockaddr *)&addr,0x10);
      if (iVar2 < 0) {
        close(sock);
        iVar2 = -3;
      }
      else {
        iVar2 = listen(sock,5);
        if (iVar2 < 0) {
          close(sock);
          iVar2 = -4;
        }
        else {
          close(sock);
          iVar2 = 0x2a;
        }
      }
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_socket_create @ 001036a9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 001036b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  int iVar2;
  char *__s;
  size_t sVar3;
  int fd;
  key_t key;
  int shmid;
  int len;
  char *ftok_path;
  char *shm;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      iVar2 = -1;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        iVar2 = -2;
      }
      else {
        __s = shmat(iVar1,(void *)0x0,0);
        if (__s == (char *)0xffffffffffffffff) {
          iVar2 = -3;
        }
        else {
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar3 = strlen(__s);
          iVar2 = (int)sVar3;
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return iVar2;
}



/* Function: call_shmget_shmat @ 001037c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  int ret;
  
  iVar1 = param_shmget_shmat();
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: signal_handler @ 001037f0 */

void signal_handler(int sig)

{
  int sig_local;
  
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: param_signal_handling @ 00103811 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  int iVar1;
  __sighandler_t p_Var2;
  int attempts;
  
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
    iVar1 = -1;
  }
  else {
    p_Var2 = signal(0xe,signal_handler);
    if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
      iVar1 = -2;
    }
    else {
      signal_received = 0;
      raise(10);
      attempts = 1000;
      while ((signal_received == 0 && (0 < attempts))) {
        usleep(1000);
        attempts = attempts + -1;
      }
      if (signal_received == 0) {
        iVar1 = -3;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        attempts = 2000;
        while ((signal_received == 0 && (0 < attempts))) {
          usleep(1000);
          attempts = attempts + -1;
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          iVar1 = -5;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          iVar1 = 0x2a;
        }
      }
      else {
        iVar1 = -4;
      }
    }
  }
  return iVar1;
}



/* Function: call_signal_handling @ 00103948 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 00103957 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  void *arg_local;
  int value;
  int result;
  int *input;
  int *ret;
  
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00103a98 */

int param_pthread_create(int x)

{
  int iVar1;
  long in_FS_OFFSET;
  int x_local;
  int input;
  int ret;
  int result;
  pthread_t tid;
  void *thread_ret;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  input = x;
  ret = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (ret == 0) {
    pthread_join(tid,&thread_ret);
    result = *(int *)thread_ret;
    free(thread_ret);
    iVar1 = result;
  }
  else {
    iVar1 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: call_pthread_create @ 00103b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: thread_sum @ 00103b40 */

void * thread_sum(void *arg)

{
  void *arg_local;
  int i;
  ThreadData *data;
  
  *(undefined4 *)((long)arg + 8) = 0;
  for (i = *(int *)arg; i <= *(int *)((long)arg + 4); i = i + 1) {
    *(int *)((long)arg + 8) = *(int *)((long)arg + 8) + i;
  }
  return (void *)0x0;
}



/* Function: param_pthread_join @ 00103b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int i;
  int total;
  int i_1;
  pthread_t tids [3];
  ThreadData data [3];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  data[0].start = 1;
  data[0].end = 10;
  data[0].result = 0;
  data[1].start = 0xb;
  data[1].end = 0x14;
  data[1].result = 0;
  data[2].start = 0x15;
  data[2].end = 0x1e;
  data[2].result = 0;
  for (i = 0; i < 3; i = i + 1) {
    iVar2 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_sum,data + i);
    if (iVar2 != 0) {
      total = -1;
      goto LAB_00103cac;
    }
  }
  total = 0;
  i_1 = 0;
  do {
    if (2 < i_1) {
LAB_00103cac:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return total;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar2 = pthread_join(tids[i_1],(void **)0x0);
    if (iVar2 != 0) {
      total = -2;
      goto LAB_00103cac;
    }
    total = total + data[i_1].result;
    i_1 = i_1 + 1;
  } while( true );
}



/* Function: call_pthread_join @ 00103cc2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: thread_increment @ 00103cd6 */

void * thread_increment(void *arg)

{
  int iVar1;
  void *arg_local;
  int i;
  int iterations;
  
  iVar1 = *(int *)arg;
  for (i = 0; i < iVar1; i = i + 1) {
    pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
    usleep(1000);
  }
  return (void *)0x0;
}



/* Function: param_mutex_lock @ 00103d42 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  int iVar1;
  int iterations_per_thread_local;
  int thread_count_local;
  int i;
  int i_1;
  int expected;
  pthread_t *tids;
  
  iterations_per_thread_local = iterations_per_thread;
  thread_count_local = thread_count;
  tids = malloc((long)thread_count << 3);
  if (tids == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    shared_counter = 0;
    for (i = 0; i < thread_count_local; i = i + 1) {
      iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_increment,
                             &iterations_per_thread_local);
      if (iVar1 != 0) {
        free(tids);
        return -2;
      }
    }
    for (i_1 = 0; i_1 < thread_count_local; i_1 = i_1 + 1) {
      pthread_join(tids[i_1],(void **)0x0);
    }
    free(tids);
    if (iterations_per_thread_local * thread_count_local == shared_counter) {
      iVar1 = 0x2a;
    }
    else {
      iVar1 = -3;
    }
  }
  return iVar1;
}



/* Function: call_mutex_lock @ 00103e4a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: consumer_thread @ 00103e63 */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  void *arg_local;
  int received;
  int *ret;
  
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  while (iVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  piVar2 = malloc(4);
  *piVar2 = iVar1;
  return piVar2;
}



/* Function: producer_thread @ 00103edc */

void * producer_thread(void *arg)

{
  void *arg_local;
  
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)&cond);
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  return (void *)0x0;
}



/* Function: param_condition_variable @ 00103f3e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int result;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(consumer,&consumer_ret);
      pthread_join(producer,(void **)0x0);
      iVar1 = *(int *)consumer_ret;
      free(consumer_ret);
    }
    else {
      pthread_cancel(consumer);
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: call_condition_variable @ 0010401b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: thread_atomic_increment @ 0010402f */

void * thread_atomic_increment(void *arg)

{
  atomic_int aVar1;
  long in_FS_OFFSET;
  void *arg_local;
  int expected;
  int i;
  int iterations;
  int desired;
  
  for (i = 0; i < *(int *)arg; i = i + 1) {
    LOCK();
    atomic_counter = atomic_counter + 1;
    UNLOCK();
    LOCK();
    aVar1 = i + 1000;
    if (i != atomic_counter) {
      aVar1 = atomic_counter;
    }
    atomic_counter = aVar1;
    UNLOCK();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 001040ba */

void * thread_atomic_load_store(void *arg)

{
  void *arg_local;
  int value;
  
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: param_atomic_ops @ 001040e2 */

int param_atomic_ops(int thread_count,int iterations)

{
  int iVar1;
  long in_FS_OFFSET;
  int iterations_local;
  int thread_count_local;
  int i;
  int i_1;
  int final_value;
  pthread_t load_store_tid;
  pthread_t *tids;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iterations_local = iterations;
  thread_count_local = thread_count;
  tids = malloc((long)thread_count << 3);
  if (tids == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (i = 0; i < thread_count_local; i = i + 1) {
      iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_atomic_increment,
                             &iterations_local);
      if (iVar1 != 0) {
        free(tids);
        iVar1 = -2;
        goto LAB_00104225;
      }
    }
    iVar1 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                           (void *)0x0);
    if (iVar1 == 0) {
      pthread_join(load_store_tid,(void **)0x0);
    }
    for (i_1 = 0; i_1 < thread_count_local; i_1 = i_1 + 1) {
      pthread_join(tids[i_1],(void **)0x0);
    }
    final_value = atomic_counter;
    free(tids);
    if (final_value < 1) {
      iVar1 = -3;
    }
    else {
      iVar1 = 0x2a;
    }
  }
LAB_00104225:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: call_atomic_ops @ 0010423b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: thread_tls_test @ 00104254 */

void * thread_tls_test(void *arg)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *in_FS_OFFSET;
  void *arg_local;
  int initial;
  char *name;
  int *ret;
  
  uVar1 = *(undefined4 *)((long)in_FS_OFFSET + -0x24);
  *(int *)((long)in_FS_OFFSET + -0x24) = *(int *)((long)in_FS_OFFSET + -0x24) + 0x32;
  strncpy((char *)(*in_FS_OFFSET + -0x20),arg,0x1f);
  puVar2 = malloc(8);
  *puVar2 = uVar1;
  puVar2[1] = *(undefined4 *)((long)in_FS_OFFSET + -0x24);
  return puVar2;
}



/* Function: param_thread_local_storage @ 001042dd */

int param_thread_local_storage(int thread_count)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  int thread_count_local;
  int i;
  int i_1;
  int j;
  int total_initial;
  int total_final;
  int i_2;
  int expected_initial;
  int expected_final;
  void *ret;
  pthread_t *tids;
  char **names;
  int *values;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  tids = malloc((long)thread_count << 3);
  names = malloc((long)thread_count << 3);
  if ((tids == (pthread_t *)0x0) || (names == (char **)0x0)) {
    iVar2 = -1;
  }
  else {
    for (i = 0; i < thread_count; i = i + 1) {
      ppcVar1 = names + i;
      pcVar3 = malloc(0x10);
      *ppcVar1 = pcVar3;
      snprintf(names[i],0x10,"Thread-%d",(ulong)(uint)i);
    }
    for (i_1 = 0; i_1 < thread_count; i_1 = i_1 + 1) {
      iVar2 = pthread_create(tids + i_1,(pthread_attr_t *)0x0,thread_tls_test,names[i_1]);
      if (iVar2 != 0) {
        for (j = 0; j <= i_1; j = j + 1) {
          free(names[j]);
        }
        free(names);
        free(tids);
        iVar2 = -2;
        goto LAB_0010453f;
      }
    }
    total_initial = 0;
    total_final = 0;
    for (i_2 = 0; i_2 < thread_count; i_2 = i_2 + 1) {
      pthread_join(tids[i_2],&ret);
      values = ret;
      total_initial = total_initial + *(int *)ret;
      total_final = total_final + *(int *)((long)ret + 4);
      free(ret);
      free(names[i_2]);
    }
    free(names);
    free(tids);
    if ((total_initial == thread_count * 100) && (total_final == thread_count * 0x96)) {
      iVar2 = 0x2a;
    }
    else {
      iVar2 = -3;
    }
  }
LAB_0010453f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_thread_local_storage @ 00104559 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 0010456d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
