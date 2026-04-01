/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/6/6_gcc_O0_g
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

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  char *src_local;
  char *dst_local;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return sVar1;
}



/* Function: call_strcpy @ 000110e0 */

/* WARNING: Removing unreachable block (ram,0x0001112c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  int iVar1;
  int len;
  char buffer [32];
  
  iVar1 = param_strcpy(buffer,"HelloLib");
  return iVar1;
}



/* Function: param_strcmp @ 00011144 */

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



/* Function: call_strcmp @ 000111a0 */

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
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00011210 */

int param_strlen(char *str)

{
  size_t sVar1;
  char *str_local;
  size_t len;
  
  sVar1 = strlen(str);
  return sVar1;
}



/* Function: call_strlen @ 0001123c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  int iVar1;
  char *test;
  
  iVar1 = param_strlen("BinBench2025");
  return iVar1;
}



/* Function: param_memcpy @ 0001126c */

int param_memcpy(void *dst,void *src,size_t n)

{
  size_t n_local;
  void *src_local;
  void *dst_local;
  
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 000112a4 */

/* WARNING: Removing unreachable block (ram,0x00011338) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  int src [5];
  int dst [5];
  
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
  return dst[0] + dst[2] + dst[4];
}



/* Function: param_memcmp @ 00011350 */

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



/* Function: call_memcmp @ 000113b4 */

/* WARNING: Removing unreachable block (ram,0x00011454) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr2[0] = 1;
  arr2[1] = 2;
  arr2[2] = 4;
  arr3[0] = 1;
  arr3[1] = 2;
  arr3[2] = 3;
  iVar1 = param_memcmp(arr1,arr2,0xc);
  iVar2 = param_memcmp(arr1,arr3,0xc);
  return iVar1 + iVar2;
}



/* Function: param_printf @ 00011470 */

int param_printf(int x,char *name)

{
  int iVar1;
  char *name_local;
  int x_local;
  int ret;
  
  iVar1 = printf("Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 000114ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  int chars;
  
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 000114dc */

int param_scanf(char *input_str)

{
  int iVar1;
  char *input_str_local;
  int a;
  int b;
  int ret;
  int local_c;
  
  local_c = 0;
  ret = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  if (ret == 2) {
    iVar1 = a + b;
  }
  else {
    iVar1 = -1;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(ret,local_c,0);
  }
  return iVar1;
}



/* Function: call_scanf @ 00011564 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00011584 */

int param_fopen_fclose(char *filename)

{
  FILE *__stream;
  int iVar1;
  char *filename_local;
  FILE *fp;
  int fd;
  
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



/* Function: call_fopen_fclose @ 000115e4 */

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



/* Function: param_fread_fwrite @ 00011624 */

/* WARNING: Removing unreachable block (ram,0x00011750) */

int param_fread_fwrite(char *tmpfile)

{
  FILE *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *tmpfile_local;
  char *write_data;
  FILE *fp;
  size_t written;
  size_t read;
  char read_buffer [32];
  
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar3 = -1;
  }
  else {
    sVar1 = strlen("BinBench Test Data");
    sVar1 = fwrite("BinBench Test Data",1,sVar1,__s);
    sVar2 = strlen("BinBench Test Data");
    if (sVar1 == sVar2) {
      rewind(__s);
      sVar2 = fread(read_buffer,1,sVar1,__s);
      read_buffer[sVar2] = '\0';
      fclose(__s);
      unlink(tmpfile);
      if ((sVar2 == sVar1) && (iVar3 = strcmp(read_buffer,"BinBench Test Data"), iVar3 == 0)) {
        iVar3 = 0x2a;
      }
      else {
        iVar3 = -3;
      }
    }
    else {
      fclose(__s);
      iVar3 = -2;
    }
  }
  return iVar3;
}



/* Function: call_fread_fwrite @ 0001176c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 0001178c */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int iVar1;
  size_t size_local;
  size_t i;
  int *ptr;
  int sum;
  
  __ptr = malloc(size << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < size; i = i + 1) {
      __ptr[i] = i * 10;
    }
    iVar1 = *__ptr + __ptr[size + 0x3fffffff];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00011868 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00011884 */

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
    sum = sum + (uint)*(byte *)((int)buffer + i);
  }
  return sum;
}



/* Function: call_memset @ 00011910 */

/* WARNING: Removing unreachable block (ram,0x0001199c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  int i;
  int buffer [10];
  
  for (i = 0; i < 10; i = i + 1) {
    buffer[i] = 0xff;
  }
  param_memset(buffer,0x28);
  return buffer[0] + buffer[9];
}



/* Function: param_strchr_strstr @ 000119b0 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *substr_local;
  char ch_local;
  char *str_local;
  char *pos1;
  int index1;
  char *pos2;
  int index2;
  
  pcVar1 = strchr(str,(uint)(byte)ch);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)str;
  }
  pcVar1 = strstr(str,substr);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)str;
  }
  return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 00011a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  char *text;
  int result;
  
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 00011a90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  
  puts(&DAT_0001446c);
  iVar1 = call_strcpy();
  printf(&DAT_00014490,iVar1);
  iVar1 = call_strcmp();
  printf(&DAT_000144ac,iVar1);
  iVar1 = call_strlen();
  printf(&DAT_000144c8,iVar1);
  iVar1 = call_memcpy();
  printf(&DAT_000144e4,iVar1);
  iVar1 = call_memcmp();
  printf(&DAT_00014500,iVar1);
  iVar1 = call_printf();
  printf(&DAT_0001451c,iVar1);
  iVar1 = call_scanf();
  printf(&DAT_00014538,iVar1);
  iVar1 = call_fopen_fclose();
  printf(&DAT_00014558,iVar1);
  iVar1 = call_fread_fwrite();
  printf(&DAT_00014574,iVar1);
  iVar1 = call_malloc_free();
  printf(&DAT_00014590,iVar1);
  iVar1 = call_memset();
  printf(&DAT_000145ac,iVar1);
  iVar1 = call_strchr_strstr();
  printf(&DAT_000145c8,iVar1);
  return;
}



/* Function: param_linux_syscall @ 00011bcc */

int param_linux_syscall(char *pathname)

{
  int iVar1;
  int *piVar2;
  char *pathname_local;
  int fd;
  
  iVar1 = syscall(5,pathname,0);
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



/* Function: param_win32_api @ 00011c6c */

/* WARNING: Removing unreachable block (ram,0x00011ce0) */

int param_win32_api(char *filename)

{
  int iVar1;
  char *filename_local;
  stat st;
  
  iVar1 = stat(filename,(stat *)&st);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else if (st.st_size < 1) {
    iVar1 = -2;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: call_win32_api @ 00011cf4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 00011d14 */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t __pid;
  uint uVar1;
  char *arg_local;
  char *prog_local;
  int status;
  pid_t pid;
  pid_t wpid;
  int local_c;
  
  local_c = 0;
  __pid = fork();
  pid = __pid;
  if (__pid < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (__pid == 0) {
      execl(prog,prog,arg,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    __pid = waitpid(__pid,&status,0);
    wpid = __pid;
    if (__pid < 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((status & 0x7fU) == 0) {
      uVar1 = status >> 8 & 0xff;
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



/* Function: param_pipe_communication @ 00011e40 */

/* WARNING: Removing unreachable block (ram,0x00011f6c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  size_t __n;
  ssize_t sVar3;
  pid_t pid;
  ssize_t bytes;
  char *msg;
  int pipefd [2];
  char buffer [32];
  
  iVar1 = pipe(pipefd);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      iVar1 = -2;
    }
    else {
      if (_Var2 == 0) {
        close(pipefd[0]);
        iVar1 = pipefd[1];
        __n = strlen("HelloPipe");
        write(iVar1,"HelloPipe",__n);
        close(pipefd[1]);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(pipefd[1]);
      sVar3 = read(pipefd[0],buffer,0x1f);
      buffer[sVar3] = '\0';
      close(pipefd[0]);
      wait((void *)0x0);
      if (sVar3 < 1) {
        iVar1 = -3;
      }
      else {
        iVar1 = 0x2a;
      }
    }
  }
  return iVar1;
}



/* Function: call_pipe_communication @ 00011f84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 00011f9c */

/* WARNING: Removing unreachable block (ram,0x000120d0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  int iVar1;
  int opt;
  int sock;
  sockaddr_in addr;
  
  sock = socket(2,1,0);
  if (sock < 0) {
    iVar1 = -1;
  }
  else {
    opt = 1;
    iVar1 = setsockopt(sock,1,2,&opt,4);
    if (iVar1 < 0) {
      close(sock);
      iVar1 = -2;
    }
    else {
      memset(&addr,0,0x10);
      addr.sin_family = 2;
      addr.sin_port = htons(0);
      addr.sin_addr.s_addr = 0;
      iVar1 = bind(sock,(sockaddr *)&addr,0x10);
      if (iVar1 < 0) {
        close(sock);
        iVar1 = -3;
      }
      else {
        iVar1 = listen(sock,5);
        if (iVar1 < 0) {
          close(sock);
          iVar1 = -4;
        }
        else {
          close(sock);
          iVar1 = 0x2a;
        }
      }
    }
  }
  return iVar1;
}



/* Function: call_socket_create @ 000120e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 000120fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  char *ftok_path;
  int fd;
  key_t key;
  int shmid;
  char *shm;
  int len;
  
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



/* Function: signal_handler @ 00012250 */

void signal_handler(int sig)

{
  int sig_local;
  
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: param_signal_handling @ 00012290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  int attempts;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    iVar2 = -1;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffff) {
      iVar2 = -2;
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
        iVar2 = -3;
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
          iVar2 = -5;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          iVar2 = 0x2a;
        }
      }
      else {
        iVar2 = -4;
      }
    }
  }
  return iVar2;
}



/* Function: call_signal_handling @ 00012400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 00012418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  
  puts(&DAT_00014620);
  iVar1 = call_linux_syscall();
  printf(&DAT_0001463c,iVar1);
  iVar1 = call_win32_api();
  printf(&DAT_00014658,iVar1);
  iVar1 = call_fork_exec();
  printf(&DAT_00014674,iVar1);
  iVar1 = call_pipe_communication();
  printf(&DAT_00014690,iVar1);
  iVar1 = call_socket_create();
  printf(&DAT_000146ac,iVar1);
  iVar1 = call_shmget_shmat();
  printf(&DAT_000146c8,iVar1);
  iVar1 = call_signal_handling();
  printf(&DAT_000146e4,iVar1);
  return;
}



/* Function: thread_compute @ 000124dc */

void * thread_compute(void *arg)

{
  int *piVar1;
  int iVar2;
  void *arg_local;
  int *input;
  int value;
  int result;
  int *ret;
  
  iVar2 = *(int *)arg;
  piVar1 = malloc(4);
  *piVar1 = iVar2 * iVar2;
  return piVar1;
}



/* Function: param_pthread_create @ 00012540 */

int param_pthread_create(int x)

{
  int iVar1;
  int extraout_r0;
  int iVar2;
  int x_local;
  pthread_t tid;
  int input;
  void *thread_ret;
  int ret;
  int result;
  int local_c;
  
  local_c = 0;
  input = x;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  ret = iVar1;
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    result = *(int *)thread_ret;
    free(thread_ret);
    iVar1 = extraout_r0;
    iVar2 = result;
  }
  else {
    iVar2 = -1;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,local_c,0);
  }
  return iVar2;
}



/* Function: call_pthread_create @ 000125f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: thread_sum @ 00012610 */

void * thread_sum(void *arg)

{
  void *arg_local;
  int i;
  ThreadData *data;
  
  *(undefined4 *)((int)arg + 8) = 0;
  for (i = *(int *)arg; i <= *(int *)((int)arg + 4); i = i + 1) {
    *(int *)((int)arg + 8) = *(int *)((int)arg + 8) + i;
  }
  return (void *)0x0;
}



/* Function: param_pthread_join @ 00012690 */

/* WARNING: Removing unreachable block (ram,0x000127ec) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int i;
  int total;
  int i_1;
  pthread_t tids [3];
  ThreadData data [3];
  
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
    iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_sum,data + i);
    if (iVar1 != 0) {
      return -1;
    }
  }
  total = 0;
  i_1 = 0;
  while( true ) {
    if (2 < i_1) {
      return total;
    }
    iVar1 = pthread_join(tids[i_1],(void **)0x0);
    if (iVar1 != 0) break;
    total = total + data[i_1].result;
    i_1 = i_1 + 1;
  }
  return -2;
}



/* Function: call_pthread_join @ 00012808 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: thread_increment @ 00012820 */

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



/* Function: param_mutex_lock @ 000128a8 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  int iVar1;
  int iterations_per_thread_local;
  int thread_count_local;
  int i;
  int i_1;
  pthread_t *tids;
  int expected;
  
  iterations_per_thread_local = iterations_per_thread;
  thread_count_local = thread_count;
  tids = malloc(thread_count << 2);
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



/* Function: call_mutex_lock @ 000129ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: consumer_thread @ 00012a0c */

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



/* Function: producer_thread @ 00012a94 */

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



/* Function: param_condition_variable @ 00012afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  int result;
  int local_c;
  
  local_c = 0;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(consumer,&consumer_ret);
      pthread_join(producer,(void **)0x0);
      result = *(int *)consumer_ret;
      free(consumer_ret);
      iVar1 = result;
    }
    else {
      pthread_cancel(consumer);
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: call_condition_variable @ 00012c08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: thread_atomic_increment @ 00012c20 */

/* WARNING: Removing unreachable block (ram,0x00012cec) */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  void *arg_local;
  int expected;
  int i;
  int iterations;
  int desired;
  
  iVar1 = *(int *)arg;
  for (i = 0; i < iVar1; i = i + 1) {
    __sync_fetch_and_add_4(&atomic_counter,1);
    __sync_val_compare_and_swap_4(&atomic_counter,i,i + 1000);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00012d04 */

void * thread_atomic_load_store(void *arg)

{
  atomic_int aVar1;
  void *arg_local;
  int value;
  
  __sync_synchronize();
  aVar1 = atomic_counter;
  __sync_synchronize();
  __sync_synchronize();
  atomic_counter = aVar1 + 100;
  __sync_synchronize();
  return (void *)0x0;
}



/* Function: param_atomic_ops @ 00012d58 */

int param_atomic_ops(int thread_count,int iterations)

{
  int iVar1;
  atomic_int aVar2;
  int iterations_local;
  int thread_count_local;
  pthread_t load_store_tid;
  int i;
  int i_1;
  pthread_t *tids;
  int final_value;
  int local_14;
  
  local_14 = 0;
  iterations_local = iterations;
  thread_count_local = thread_count;
  tids = malloc(thread_count << 2);
  if (tids == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    __sync_synchronize();
    atomic_counter = 0;
    __sync_synchronize();
    for (i = 0; i < thread_count_local; i = i + 1) {
      iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_atomic_increment,
                             &iterations_local);
      if (iVar1 != 0) {
        free(tids);
        iVar1 = -2;
        goto LAB_00012ecc;
      }
    }
    iVar1 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                           (void *)0x0);
    if (iVar1 == 0) {
      pthread_join(load_store_tid,(void **)0x0);
    }
    i_1 = 0;
    while( true ) {
      if (thread_count_local <= i_1) break;
      pthread_join(tids[i_1],(void **)0x0);
      i_1 = i_1 + 1;
    }
    __sync_synchronize();
    aVar2 = atomic_counter;
    __sync_synchronize();
    final_value = aVar2;
    free(tids);
    if (final_value < 1) {
      iVar1 = -3;
    }
    else {
      iVar1 = 0x2a;
    }
  }
LAB_00012ecc:
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: call_atomic_ops @ 00012f04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: thread_tls_test @ 00012f24 */

void * thread_tls_test(void *arg)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 *extraout_r3_00;
  void *arg_local;
  char *name;
  int initial;
  int *ret;
  
  iVar1 = __aeabi_read_tp();
  uVar3 = *(undefined4 *)(iVar1 + 8);
  __aeabi_read_tp();
  iVar1 = __aeabi_read_tp();
  *(undefined4 *)(iVar1 + 8) = extraout_r3;
  iVar1 = __aeabi_read_tp();
  strncpy((char *)(iVar1 + 0xc),arg,0x1f);
  puVar2 = malloc(8);
  *puVar2 = uVar3;
  iVar1 = __aeabi_read_tp();
  *extraout_r3_00 = *(undefined4 *)(iVar1 + 8);
  return puVar2;
}



/* Function: param_thread_local_storage @ 00012fe4 */

int param_thread_local_storage(int thread_count)

{
  char *pcVar1;
  int iVar2;
  char **ppcVar3;
  int thread_count_local;
  void *ret;
  int i;
  int i_1;
  int j;
  int total_initial;
  int total_final;
  int i_2;
  pthread_t *tids;
  char **names;
  int expected_initial;
  int expected_final;
  int *values;
  int local_14;
  
  local_14 = 0;
  tids = malloc(thread_count << 2);
  names = malloc(thread_count << 2);
  if ((tids == (pthread_t *)0x0) || (names == (char **)0x0)) {
    iVar2 = -1;
  }
  else {
    for (i = 0; i < thread_count; i = i + 1) {
      ppcVar3 = names + i;
      pcVar1 = malloc(0x10);
      *ppcVar3 = pcVar1;
      snprintf(names[i],0x10,"Thread-%d",i);
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
        goto LAB_000132b4;
      }
    }
    total_initial = 0;
    total_final = 0;
    for (i_2 = 0; i_2 < thread_count; i_2 = i_2 + 1) {
      pthread_join(tids[i_2],&ret);
      values = ret;
      total_initial = total_initial + *(int *)ret;
      total_final = total_final + *(int *)((int)ret + 4);
      free(ret);
      free(names[i_2]);
    }
    free(names);
    free(tids);
    expected_initial = thread_count * 100;
    expected_final = thread_count * 0x96;
    if ((total_initial == expected_initial) && (total_final == expected_final)) {
      iVar2 = 0x2a;
    }
    else {
      iVar2 = -3;
    }
  }
LAB_000132b4:
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_thread_local_storage @ 000132e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 00013304 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  
  puts(&DAT_00014730);
  iVar1 = call_pthread_create();
  printf(&DAT_00014750,iVar1);
  iVar1 = call_pthread_join();
  printf(&DAT_0001476c,iVar1);
  iVar1 = call_mutex_lock();
  printf(&DAT_0001478c,iVar1);
  iVar1 = call_condition_variable();
  printf(&DAT_000147a8,iVar1);
  iVar1 = call_atomic_ops();
  printf(&DAT_000147c4,iVar1);
  iVar1 = call_thread_local_storage();
  printf(&DAT_000147e0,iVar1);
  return;
}



/* Function: main @ 000133b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
