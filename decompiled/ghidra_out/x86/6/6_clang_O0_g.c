/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/6/6_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 000113e0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011410 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011420 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001143b) */
/* WARNING: Removing unreachable block (ram,0x00011445) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011460 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001148e) */
/* WARNING: Removing unreachable block (ram,0x00011498) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000114b0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001150c) */
/* WARNING: Removing unreachable block (ram,0x00011510) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_strcpy @ 00011560 */

/* WARNING: Unknown calling convention */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return sVar1;
}



/* Function: call_strcpy @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  int iVar1;
  int len;
  char buffer [32];
  
  iVar1 = param_strcpy(buffer,"HelloLib");
  return iVar1;
}



/* Function: param_strcmp @ 000115f0 */

/* WARNING: Unknown calling convention */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  undefined4 local_10;
  int ret;
  
  iVar1 = strcmp(s1,s2);
  if (iVar1 < 1) {
    local_10 = 0;
    if (iVar1 < 0) {
      local_10 = -1;
    }
  }
  else {
    local_10 = 1;
  }
  return local_10;
}



/* Function: call_strcmp @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int r3;
  int r2;
  int r1;
  
  iVar1 = param_strcmp("abc","def");
  iVar2 = param_strcmp("xyz","xyz");
  iVar3 = param_strcmp("bbb","aaa");
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 000116e0 */

/* WARNING: Unknown calling convention */

int param_strlen(char *str)

{
  size_t sVar1;
  size_t len;
  
  sVar1 = strlen(str);
  return sVar1;
}



/* Function: call_strlen @ 00011710 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  int iVar1;
  char *test;
  
  iVar1 = param_strlen("BinBench2025");
  return iVar1;
}



/* Function: param_memcpy @ 00011740 */

/* WARNING: Unknown calling convention */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  int dst [5];
  int src [5];
  
  memcpy(src,&DAT_00014404,0x14);
  memset(dst,0,0x14);
  param_memcpy(dst,src,0x14);
  return dst[0] + dst[2] + dst[4];
}



/* Function: param_memcmp @ 00011800 */

/* WARNING: Unknown calling convention */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  undefined4 local_14;
  int ret;
  
  iVar1 = memcmp(p1,p2,n);
  if (iVar1 < 1) {
    local_14 = 0;
    if (iVar1 < 0) {
      local_14 = -1;
    }
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



/* Function: call_memcmp @ 00011870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int r2;
  int r1;
  int arr3 [3];
  int arr2 [3];
  int arr1 [3];
  
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



/* Function: param_printf @ 00011920 */

/* WARNING: Unknown calling convention */

int param_printf(int x,char *name)

{
  int iVar1;
  int ret;
  
  iVar1 = printf("Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00011970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  int chars;
  
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 000119b0 */

/* WARNING: Unknown calling convention */

int param_scanf(char *input_str)

{
  int iVar1;
  int ret;
  int b;
  int a;
  int local_10;
  
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  if (iVar1 == 2) {
    local_10 = a + b;
  }
  else {
    local_10 = -1;
  }
  return local_10;
}



/* Function: call_scanf @ 00011a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00011a50 */

/* WARNING: Unknown calling convention */

int param_fopen_fclose(char *filename)

{
  FILE *__stream;
  int fd;
  FILE *fp;
  int local_c;
  
  __stream = fopen(filename,"r");
  if (__stream == (FILE *)0x0) {
    local_c = -1;
  }
  else {
    local_c = fileno(__stream);
    fclose(__stream);
  }
  return local_c;
}



/* Function: call_fopen_fclose @ 00011ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  int iVar2;
  int fd;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = 0x2a;
  }
  return iVar2;
}



/* Function: param_fread_fwrite @ 00011b10 */

/* WARNING: Unknown calling convention */

int param_fread_fwrite(char *tmpfile)

{
  FILE *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  bool bVar4;
  size_t read;
  size_t written;
  FILE *fp;
  char read_buffer [32];
  char *write_data;
  int local_c;
  
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    local_c = -1;
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
      bVar4 = false;
      if (sVar2 == sVar1) {
        iVar3 = strcmp(read_buffer,"BinBench Test Data");
        bVar4 = iVar3 == 0;
      }
      local_c = -3;
      if (bVar4) {
        local_c = 0x2a;
      }
    }
    else {
      fclose(__s);
      local_c = -2;
    }
  }
  return local_c;
}



/* Function: call_fread_fwrite @ 00011c80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00011cb0 */

/* WARNING: Unknown calling convention */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int sum;
  size_t i;
  int *ptr;
  int local_c;
  
  __ptr = malloc(size << 2);
  if (__ptr == (int *)0x0) {
    local_c = -1;
  }
  else {
    for (i = 0; i < size; i = i + 1) {
      __ptr[i] = i * 10;
    }
    local_c = *__ptr + __ptr[size - 1];
    free(__ptr);
  }
  return local_c;
}



/* Function: call_malloc_free @ 00011d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00011d90 */

/* WARNING: Unknown calling convention */

int param_memset(void *buffer,size_t size)

{
  size_t i;
  int sum;
  uchar *bytes;
  
  memset(buffer,0,size);
  sum = 0;
  for (i = 0; i < size; i = i + 1) {
    sum = (uint)*(byte *)((int)buffer + i) + sum;
  }
  return sum;
}



/* Function: call_memset @ 00011e10 */

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



/* Function: param_strchr_strstr @ 00011e80 */

/* WARNING: Unknown calling convention */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  undefined4 local_24;
  undefined4 local_20;
  int index2;
  char *pos2;
  int index1;
  char *pos1;
  
  pcVar1 = strchr(str,(int)ch);
  if (pcVar1 == (char *)0x0) {
    local_20 = -1;
  }
  else {
    local_20 = (int)pcVar1 - (int)str;
  }
  pcVar1 = strstr(str,substr);
  if (pcVar1 == (char *)0x0) {
    local_24 = -1;
  }
  else {
    local_24 = (int)pcVar1 - (int)str;
  }
  return local_20 + local_24;
}



/* Function: call_strchr_strstr @ 00011f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  int result;
  char *text;
  
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 00011f90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  
  printf(&DAT_000140aa);
  iVar1 = call_strcpy();
  printf(&DAT_000140cf,iVar1);
  iVar1 = call_strcmp();
  printf(&DAT_000140ea,iVar1);
  iVar1 = call_strlen();
  printf(&DAT_00014105,iVar1);
  iVar1 = call_memcpy();
  printf(&DAT_00014121,iVar1);
  iVar1 = call_memcmp();
  printf(&DAT_0001413d,iVar1);
  iVar1 = call_printf();
  printf(&DAT_00014159,iVar1);
  iVar1 = call_scanf();
  printf(&DAT_00014175,iVar1);
  iVar1 = call_fopen_fclose();
  printf(&DAT_00014192,iVar1);
  iVar1 = call_fread_fwrite();
  printf(&DAT_000141ae,iVar1);
  iVar1 = call_malloc_free();
  printf(&DAT_000141ca,iVar1);
  iVar1 = call_memset();
  printf(&DAT_000141e6,iVar1);
  iVar1 = call_strchr_strstr();
  printf(&DAT_00014201,iVar1);
  return;
}



/* Function: param_linux_syscall @ 00012120 */

/* WARNING: Unknown calling convention */

int param_linux_syscall(char *pathname)

{
  int *piVar1;
  undefined4 uVar2;
  int fd;
  undefined4 local_c;
  
  uVar2 = 0;
  local_c = syscall(5,pathname,0);
  if (local_c < 0) {
    piVar1 = __errno_location();
    local_c = -*piVar1;
  }
  else {
    syscall(6,local_c,uVar2);
  }
  return local_c;
}



/* Function: call_linux_syscall @ 000121a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  int iVar2;
  int result;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = 0x2a;
  }
  return iVar2;
}



/* Function: param_win32_api @ 000121e0 */

/* WARNING: Unknown calling convention */

int param_win32_api(char *filename)

{
  int iVar1;
  stat st;
  int local_c;
  
  iVar1 = stat(filename,(stat *)&st);
  if (iVar1 < 0) {
    local_c = -1;
  }
  else {
    local_c = -2;
    if (0 < st.st_size) {
      local_c = 0x2a;
    }
  }
  return local_c;
}



/* Function: call_win32_api @ 00012240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 00012270 */

/* WARNING: Unknown calling convention */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  pid_t wpid;
  int status;
  pid_t pid;
  int local_10;
  
  pid = fork();
  if (pid < 0) {
    local_10 = -1;
  }
  else {
    if (pid == 0) {
      execl(prog,prog,arg,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    _Var1 = waitpid(pid,&status,0);
    if (_Var1 < 0) {
      local_10 = -2;
    }
    else if ((status & 0x7fU) == 0) {
      local_10 = (int)(status & 0xff00U) >> 8;
    }
    else {
      local_10 = -3;
    }
  }
  return local_10;
}



/* Function: call_fork_exec @ 00012360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  int iVar2;
  int ret;
  
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  iVar2 = -1;
  if (iVar1 == 0) {
    iVar2 = 0x2a;
  }
  return iVar2;
}



/* Function: param_pipe_communication @ 000123b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  size_t __n;
  ssize_t sVar3;
  ssize_t bytes;
  char *msg;
  pid_t pid;
  char buffer [32];
  int pipefd [2];
  int local_c;
  
  iVar1 = pipe(pipefd);
  if (iVar1 < 0) {
    local_c = -1;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      local_c = -2;
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
      local_c = -3;
      if (0 < sVar3) {
        local_c = 0x2a;
      }
    }
  }
  return local_c;
}



/* Function: call_pipe_communication @ 000124f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 00012510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  int iVar1;
  sockaddr_in addr;
  int opt;
  int sock;
  int local_c;
  
  sock = socket(2,1,0);
  if (sock < 0) {
    local_c = -1;
  }
  else {
    opt = 1;
    iVar1 = setsockopt(sock,1,2,&opt,4);
    if (iVar1 < 0) {
      close(sock);
      local_c = -2;
    }
    else {
      memset(&addr,0,0x10);
      addr.sin_family = 2;
      addr.sin_port = htons(0);
      addr.sin_addr.s_addr = 0;
      iVar1 = bind(sock,(sockaddr *)&addr,0x10);
      if (iVar1 < 0) {
        close(sock);
        local_c = -3;
      }
      else {
        iVar1 = listen(sock,5);
        if (iVar1 < 0) {
          close(sock);
          local_c = -4;
        }
        else {
          close(sock);
          local_c = 0x2a;
        }
      }
    }
  }
  return local_c;
}



/* Function: call_socket_create @ 00012690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 000126b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__dest;
  int len;
  char *shm;
  int shmid;
  key_t key;
  int fd;
  char *ftok_path;
  size_t local_c;
  
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
        if (__dest == (char *)0xffffffff) {
          local_c = 0xfffffffd;
        }
        else {
          strcpy(__dest,"SharedMemory");
          local_c = strlen(__dest);
          shmdt(__dest);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return local_c;
}



/* Function: call_shmget_shmat @ 00012820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  int iVar2;
  int ret;
  
  iVar1 = param_shmget_shmat();
  iVar2 = -1;
  if (0 < iVar1) {
    iVar2 = 0x2a;
  }
  return iVar2;
}



/* Function: param_signal_handling @ 00012860 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  int iVar1;
  __sighandler_t p_Var2;
  int attempts;
  int local_c;
  
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffff) {
    local_c = -1;
  }
  else {
    p_Var2 = signal(0xe,signal_handler);
    if (p_Var2 == (__sighandler_t)0xffffffff) {
      local_c = -2;
    }
    else {
      signal_received = 0;
      raise(10);
      attempts = 1000;
      while( true ) {
        iVar1 = attempts;
        if (signal_received == 0) {
          attempts = attempts + -1;
        }
        if (signal_received != 0 || iVar1 < 1) break;
        usleep(1000);
      }
      if (signal_received == 0) {
        local_c = -3;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        attempts = 2000;
        while( true ) {
          iVar1 = attempts;
          if (signal_received == 0) {
            attempts = attempts + -1;
          }
          if (signal_received != 0 || iVar1 < 1) break;
          usleep(1000);
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          local_c = -5;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          local_c = 0x2a;
        }
      }
      else {
        local_c = -4;
      }
    }
  }
  return local_c;
}



/* Function: signal_handler @ 00012a70 */

/* WARNING: Unknown calling convention */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: call_signal_handling @ 00012aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 00012ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  
  printf(&DAT_00014250);
  iVar1 = call_linux_syscall();
  printf(&DAT_0001426c,iVar1);
  iVar1 = call_win32_api();
  printf(&DAT_00014288,iVar1);
  iVar1 = call_fork_exec();
  printf(&DAT_000142a4,iVar1);
  iVar1 = call_pipe_communication();
  printf(&DAT_000142c0,iVar1);
  iVar1 = call_socket_create();
  printf(&DAT_000142dc,iVar1);
  iVar1 = call_shmget_shmat();
  printf(&DAT_000142f8,iVar1);
  iVar1 = call_signal_handling();
  printf(&DAT_00014314,iVar1);
  return;
}



/* Function: thread_compute @ 00012bc0 */

/* WARNING: Unknown calling convention */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  int *ret;
  int result;
  int value;
  int *input;
  
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00012c10 */

/* WARNING: Unknown calling convention */

int param_pthread_create(int x)

{
  int iVar1;
  int result;
  int ret;
  void *thread_ret;
  int input;
  pthread_t tid;
  int local_c;
  
  input = x;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    iVar1 = *(int *)thread_ret;
    free(thread_ret);
    local_c = iVar1;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_pthread_create @ 00012cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: thread_sum @ 00012ce0 */

/* WARNING: Unknown calling convention */

void * thread_sum(void *arg)

{
  int i;
  ThreadData *data;
  
  *(undefined4 *)((int)arg + 8) = 0;
  for (i = *(int *)arg; i <= *(int *)((int)arg + 4); i = i + 1) {
    *(int *)((int)arg + 8) = i + *(int *)((int)arg + 8);
  }
  return (void *)0x0;
}



/* Function: param_pthread_join @ 00012d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int i_1;
  int total;
  int i;
  ThreadData data [3];
  pthread_t tids [3];
  
  memset(data,0,0x24);
  data[0].start = 1;
  data[0].end = 10;
  data[1].start = 0xb;
  data[1].end = 0x14;
  data[2].start = 0x15;
  data[2].end = 0x1e;
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
    total = data[i_1].result + total;
    i_1 = i_1 + 1;
  }
  return -2;
}



/* Function: call_pthread_join @ 00012e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: thread_increment @ 00012eb0 */

/* WARNING: Unknown calling convention */

void * thread_increment(void *arg)

{
  int iVar1;
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



/* Function: param_mutex_lock @ 00012f40 */

/* WARNING: Unknown calling convention */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  void *__ptr;
  int iVar1;
  int expected;
  int i_1;
  int i;
  pthread_t *tids;
  int local_10;
  
  __ptr = malloc(thread_count << 2);
  if (__ptr == (void *)0x0) {
    local_10 = -1;
  }
  else {
    shared_counter = 0;
    for (i = 0; i < thread_count; i = i + 1) {
      iVar1 = pthread_create((pthread_t *)((int)__ptr + i * 4),(pthread_attr_t *)0x0,
                             thread_increment,&iterations_per_thread);
      if (iVar1 != 0) {
        free(__ptr);
        return -2;
      }
    }
    for (i_1 = 0; i_1 < thread_count; i_1 = i_1 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + i_1 * 4),(void **)0x0);
    }
    free(__ptr);
    local_10 = -3;
    if (shared_counter == thread_count * iterations_per_thread) {
      local_10 = 0x2a;
    }
  }
  return local_10;
}



/* Function: call_mutex_lock @ 00013090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: consumer_thread @ 000130c0 */

/* WARNING: Unknown calling convention */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  int *ret;
  int received;
  
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  while (iVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  piVar2 = malloc(4);
  *piVar2 = iVar1;
  return piVar2;
}



/* Function: producer_thread @ 00013160 */

/* WARNING: Unknown calling convention */

void * producer_thread(void *arg)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)&cond);
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  return (void *)0x0;
}



/* Function: param_condition_variable @ 000131e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  int result;
  void *consumer_ret;
  pthread_t consumer;
  pthread_t producer;
  int local_c;
  
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
      local_c = iVar1;
    }
    else {
      pthread_cancel(consumer);
      local_c = -2;
    }
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_condition_variable @ 000132f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: thread_atomic_increment @ 00013310 */

/* WARNING: Unknown calling convention */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  int desired;
  int expected;
  int i;
  int iterations;
  
  for (i = 0; i < *(int *)arg; i = i + 1) {
    LOCK();
    iVar1 = atomic_counter + 1;
    UNLOCK();
    atomic_counter = i + 1000;
    LOCK();
    if (i != iVar1) {
      atomic_counter = iVar1;
    }
    UNLOCK();
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 000133c0 */

/* WARNING: Unknown calling convention */

void * thread_atomic_load_store(void *arg)

{
  int value;
  
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: param_atomic_ops @ 00013400 */

/* WARNING: Unknown calling convention */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  int iVar2;
  int final_value;
  int i_1;
  pthread_t load_store_tid;
  int i;
  undefined4 local_14;
  pthread_t *tids;
  int local_c;
  
  tids = malloc(thread_count << 2);
  if (tids == (pthread_t *)0x0) {
    local_c = -1;
  }
  else {
    local_14 = 0;
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (i = 0; i < thread_count; i = i + 1) {
      iVar2 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_atomic_increment,&iterations);
      if (iVar2 != 0) {
        free(tids);
        return -2;
      }
    }
    iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                           (void *)0x0);
    if (iVar2 == 0) {
      pthread_join(load_store_tid,(void **)0x0);
    }
    for (i_1 = 0; aVar1 = atomic_counter, i_1 < thread_count; i_1 = i_1 + 1) {
      pthread_join(tids[i_1],(void **)0x0);
    }
    free(tids);
    local_c = -3;
    if (0 < aVar1) {
      local_c = 0x2a;
    }
  }
  return local_c;
}



/* Function: call_atomic_ops @ 000135a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: thread_tls_test @ 000135d0 */

/* WARNING: Unknown calling convention */

void * thread_tls_test(void *arg)

{
  int iVar1;
  int *piVar2;
  int *in_GS_OFFSET;
  int *ret;
  int initial;
  char *name;
  
  iVar1 = in_GS_OFFSET[-9];
  in_GS_OFFSET[-9] = in_GS_OFFSET[-9] + 0x32;
  strncpy((char *)(*in_GS_OFFSET + -0x20),arg,0x1f);
  piVar2 = malloc(8);
  *piVar2 = iVar1;
  piVar2[1] = in_GS_OFFSET[-9];
  return piVar2;
}



/* Function: param_thread_local_storage @ 00013660 */

/* WARNING: Unknown calling convention */

int param_thread_local_storage(int thread_count)

{
  char *pcVar1;
  int iVar2;
  int expected_final;
  int expected_initial;
  int *values;
  void *ret;
  int i_2;
  int total_final;
  int total_initial;
  int j;
  int i_1;
  int i;
  char **names;
  pthread_t *tids;
  int local_c;
  
  tids = malloc(thread_count << 2);
  names = malloc(thread_count << 2);
  if ((tids == (pthread_t *)0x0) || (names == (char **)0x0)) {
    local_c = -1;
  }
  else {
    for (i = 0; i < thread_count; i = i + 1) {
      pcVar1 = malloc(0x10);
      names[i] = pcVar1;
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
        return -2;
      }
    }
    total_initial = 0;
    total_final = 0;
    for (i_2 = 0; i_2 < thread_count; i_2 = i_2 + 1) {
      pthread_join(tids[i_2],&ret);
      total_initial = *(int *)ret + total_initial;
      total_final = *(int *)((int)ret + 4) + total_final;
      free(ret);
      free(names[i_2]);
    }
    free(names);
    free(tids);
    local_c = -3;
    if (total_initial == thread_count * 100 && total_final == thread_count * 0x96) {
      local_c = 0x2a;
    }
  }
  return local_c;
}



/* Function: call_thread_local_storage @ 000138e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 00013910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  
  printf(&DAT_0001433a);
  iVar1 = call_pthread_create();
  printf(&DAT_00014359,iVar1);
  iVar1 = call_pthread_join();
  printf(&DAT_00014375,iVar1);
  iVar1 = call_mutex_lock();
  printf(&DAT_00014392,iVar1);
  iVar1 = call_condition_variable();
  printf(&DAT_000143ae,iVar1);
  iVar1 = call_atomic_ops();
  printf(&DAT_000143ca,iVar1);
  iVar1 = call_thread_local_storage();
  printf(&DAT_000143e6,iVar1);
  return;
}



/* Function: main @ 000139f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00013a30 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00013a4a) */
/* WARNING: Removing unreachable block (ram,0x00013a60) */
/* WARNING: Removing unreachable block (ram,0x00013a6d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00013a7c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 75 */
