/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/6/6_gcc_O0_g
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



/* Function: _start @ 000117b0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000117dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000117e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000117f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001180b) */
/* WARNING: Removing unreachable block (ram,0x00011815) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011830 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001185e) */
/* WARNING: Removing unreachable block (ram,0x00011868) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011880 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000118dc) */
/* WARNING: Removing unreachable block (ram,0x000118e0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011919 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001191d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_strcpy @ 00011921 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return sVar1;
}



/* Function: call_strcpy @ 0001195b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int len;
  char buffer [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = param_strcpy(buffer,"HelloLib");
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_strcmp @ 000119aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
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



/* Function: call_strcmp @ 000119f9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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



/* Function: param_strlen @ 00011a75 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_strlen(char *str)

{
  size_t sVar1;
  size_t len;
  
  sVar1 = strlen(str);
  return sVar1;
}



/* Function: call_strlen @ 00011aa5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  int iVar1;
  char *test;
  
  iVar1 = param_strlen("BinBench2025");
  return iVar1;
}



/* Function: param_memcpy @ 00011ad2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 00011b05 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int src [5];
  int dst [5];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
  iVar2 = dst[4] + dst[0] + dst[2];
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_memcmp @ 00011b9f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
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



/* Function: call_memcmp @ 00011bf1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int r1;
  int r2;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
  iVar3 = iVar3 + iVar2;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar3 = __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: param_printf @ 00011c9a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_printf(int x,char *name)

{
  int iVar1;
  int ret;
  
  iVar1 = printf("Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00011cd4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  int chars;
  
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_scanf(char *input_str)

{
  int iVar1;
  int in_GS_OFFSET;
  char *input_str_local;
  int a;
  int b;
  int ret;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ret = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  if (ret == 2) {
    iVar1 = b + a;
  }
  else {
    iVar1 = -1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: call_scanf @ 00011d75 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00011d9d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fopen_fclose(char *filename)

{
  FILE *__stream;
  int iVar1;
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



/* Function: call_fopen_fclose @ 00011dff */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: param_fread_fwrite @ 00011e3c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fread_fwrite(char *tmpfile)

{
  int iVar1;
  FILE *__s;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  int in_GS_OFFSET;
  char *tmpfile_local;
  char *write_data;
  FILE *fp;
  size_t written;
  size_t read;
  char read_buffer [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
          goto LAB_00011f54;
        }
      }
      iVar2 = -3;
    }
    else {
      fclose(__s);
      iVar2 = -2;
    }
  }
LAB_00011f54:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_fread_fwrite @ 00011f6a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00011f92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int iVar1;
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
    iVar1 = __ptr[size + 0x3fffffff] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 0001203b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 0001205e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_memset(void *buffer,size_t size)

{
  int sum;
  size_t i;
  uchar *bytes;
  
  memset(buffer,0,size);
  sum = 0;
  for (i = 0; i < size; i = i + 1) {
    sum = sum + (uint)*(byte *)(i + (int)buffer);
  }
  return sum;
}



/* Function: call_memset @ 000120c3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int i;
  int buffer [10];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  for (i = 0; i < 10; i = i + 1) {
    buffer[i] = 0xff;
  }
  param_memset(buffer,0x28);
  iVar2 = buffer[9] + buffer[0];
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_strchr_strstr @ 0001212c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char ch_local;
  char *pos1;
  int index1;
  char *pos2;
  int index2;
  
  pcVar1 = strchr(str,(int)ch);
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
  return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 000121ab */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  char *text;
  int result;
  
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 000121e7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  
  puts(&DAT_000140b0);
  iVar1 = call_strcpy();
  printf(&DAT_000140d4,iVar1);
  iVar1 = call_strcmp();
  printf(&DAT_000140ef,iVar1);
  iVar1 = call_strlen();
  printf(&DAT_0001410a,iVar1);
  iVar1 = call_memcpy();
  printf(&DAT_00014126,iVar1);
  iVar1 = call_memcmp();
  printf(&DAT_00014142,iVar1);
  iVar1 = call_printf();
  printf(&DAT_0001415e,iVar1);
  iVar1 = call_scanf();
  printf(&DAT_0001417a,iVar1);
  iVar1 = call_fopen_fclose();
  printf(&DAT_00014197,iVar1);
  iVar1 = call_fread_fwrite();
  printf(&DAT_000141b3,iVar1);
  iVar1 = call_malloc_free();
  printf(&DAT_000141cf,iVar1);
  iVar1 = call_memset();
  printf(&DAT_000141eb,iVar1);
  iVar1 = call_strchr_strstr();
  printf(&DAT_00014206,iVar1);
  return;
}



/* Function: param_linux_syscall @ 00012335 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_linux_syscall(char *pathname)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int fd;
  
  uVar4 = 0x12345;
  uVar3 = 0;
  iVar1 = syscall(5,pathname,0,0x12345);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    syscall(6,iVar1,uVar3,uVar4);
  }
  return iVar1;
}



/* Function: call_linux_syscall @ 00012389 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: param_win32_api @ 000123c6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_win32_api(char *filename)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char *filename_local;
  stat st;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_win32_api @ 00012435 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 0001245d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fork_exec(char *prog,char *arg)

{
  uint uVar1;
  int in_GS_OFFSET;
  char *arg_local;
  char *prog_local;
  int status;
  pid_t pid;
  pid_t wpid;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: call_fork_exec @ 00012516 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: param_pipe_communication @ 00012555 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  int iVar2;
  __pid_t _Var3;
  size_t __n;
  ssize_t sVar4;
  int in_GS_OFFSET;
  pid_t pid;
  ssize_t bytes;
  char *msg;
  int pipefd [2];
  char buffer [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_pipe_communication @ 00012679 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 00012694 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int opt;
  int sock;
  sockaddr_in addr;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_socket_create @ 000127c4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 000127df */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  size_t sVar2;
  key_t __key;
  char *__s;
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
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar2 = strlen(__s);
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return sVar2;
}



/* Function: call_shmget_shmat @ 000128f9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: signal_handler @ 00012929 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: param_signal_handling @ 00012950 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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



/* Function: call_signal_handling @ 00012aa7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 00012ac2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  
  puts(&DAT_00014248);
  iVar1 = call_linux_syscall();
  printf(&DAT_00014263,iVar1);
  iVar1 = call_win32_api();
  printf(&DAT_0001427f,iVar1);
  iVar1 = call_fork_exec();
  printf(&DAT_0001429b,iVar1);
  iVar1 = call_pipe_communication();
  printf(&DAT_000142b7,iVar1);
  iVar1 = call_socket_create();
  printf(&DAT_000142d3,iVar1);
  iVar1 = call_shmget_shmat();
  printf(&DAT_000142ef,iVar1);
  iVar1 = call_signal_handling();
  printf(&DAT_0001430b,iVar1);
  return;
}



/* Function: thread_compute @ 00012b98 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  int *input;
  int value;
  int result;
  int *ret;
  
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00012be7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_pthread_create(int x)

{
  int iVar1;
  int in_GS_OFFSET;
  pthread_t tid;
  int input;
  void *thread_ret;
  int ret;
  int result;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: call_pthread_create @ 00012c7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: thread_sum @ 00012c9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void * thread_sum(void *arg)

{
  int i;
  ThreadData *data;
  
  *(undefined4 *)((int)arg + 8) = 0;
  for (i = *(int *)arg; i <= *(int *)((int)arg + 4); i = i + 1) {
    *(int *)((int)arg + 8) = *(int *)((int)arg + 8) + i;
  }
  return (void *)0x0;
}



/* Function: param_pthread_join @ 00012cf2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int i;
  int total;
  int i_1;
  pthread_t tids [3];
  ThreadData data [3];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
      goto LAB_00012df5;
    }
  }
  total = 0;
  i_1 = 0;
  do {
    if (2 < i_1) {
LAB_00012df5:
      if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
        total = __stack_chk_fail_local();
      }
      return total;
    }
    iVar2 = pthread_join(tids[i_1],(void **)0x0);
    if (iVar2 != 0) {
      total = -2;
      goto LAB_00012df5;
    }
    total = total + data[i_1].result;
    i_1 = i_1 + 1;
  } while( true );
}



/* Function: call_pthread_join @ 00012e0b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: thread_increment @ 00012e26 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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



/* Function: param_mutex_lock @ 00012ea6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  void *__ptr;
  int iVar1;
  int i;
  int i_1;
  pthread_t *tids;
  int expected;
  
  __ptr = malloc(thread_count << 2);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    shared_counter = 0;
    for (i = 0; i < thread_count; i = i + 1) {
      iVar1 = pthread_create((pthread_t *)(i * 4 + (int)__ptr),(pthread_attr_t *)0x0,
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
    if (iterations_per_thread * thread_count == shared_counter) {
      iVar1 = 0x2a;
    }
    else {
      iVar1 = -3;
    }
  }
  return iVar1;
}



/* Function: call_mutex_lock @ 00012fa8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: consumer_thread @ 00012fd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
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



/* Function: producer_thread @ 00013058 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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



/* Function: param_condition_variable @ 000130cf */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  int in_GS_OFFSET;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  int result;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: call_condition_variable @ 000131ab */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: thread_atomic_increment @ 000131c6 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  void *pvVar2;
  int in_GS_OFFSET;
  void *arg_local;
  int expected;
  int i;
  int iterations;
  int desired;
  
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
  pvVar2 = (void *)0x0;
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    pvVar2 = (void *)__stack_chk_fail_local();
  }
  return pvVar2;
}



/* Function: thread_atomic_load_store @ 00013257 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void * thread_atomic_load_store(void *arg)

{
  int value;
  
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: param_atomic_ops @ 00013287 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_atomic_ops(int thread_count,int iterations)

{
  int iVar1;
  int in_GS_OFFSET;
  pthread_t load_store_tid;
  int i;
  int i_1;
  pthread_t *tids;
  int final_value;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  tids = malloc(thread_count << 2);
  if (tids == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (i = 0; i < thread_count; i = i + 1) {
      iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_atomic_increment,&iterations);
      if (iVar1 != 0) {
        free(tids);
        iVar1 = -2;
        goto LAB_000133b7;
      }
    }
    iVar1 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                           (void *)0x0);
    if (iVar1 == 0) {
      pthread_join(load_store_tid,(void **)0x0);
    }
    for (i_1 = 0; i_1 < thread_count; i_1 = i_1 + 1) {
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
LAB_000133b7:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: call_atomic_ops @ 000133cd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: thread_tls_test @ 000133f5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * thread_tls_test(void *arg)

{
  int iVar1;
  int *piVar2;
  int *in_GS_OFFSET;
  char *name;
  int initial;
  int *ret;
  
  iVar1 = in_GS_OFFSET[-9];
  in_GS_OFFSET[-9] = in_GS_OFFSET[-9] + 0x32;
  strncpy((char *)(*in_GS_OFFSET + -0x20),arg,0x1f);
  piVar2 = malloc(8);
  *piVar2 = iVar1;
  piVar2[1] = in_GS_OFFSET[-9];
  return piVar2;
}



/* Function: param_thread_local_storage @ 00013477 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_thread_local_storage(int thread_count)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  int in_GS_OFFSET;
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
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  tids = malloc(thread_count << 2);
  names = malloc(thread_count << 2);
  if ((tids == (pthread_t *)0x0) || (names == (char **)0x0)) {
    iVar2 = -1;
  }
  else {
    for (i = 0; i < thread_count; i = i + 1) {
      ppcVar1 = names + i;
      pcVar3 = malloc(0x10);
      *ppcVar1 = pcVar3;
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
        goto LAB_000136b3;
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
LAB_000136b3:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_thread_local_storage @ 000136cb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 000136ee */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  
  puts(&DAT_00014331);
  iVar1 = call_pthread_create();
  printf(&DAT_0001434f,iVar1);
  iVar1 = call_pthread_join();
  printf(&DAT_0001436b,iVar1);
  iVar1 = call_mutex_lock();
  printf(&DAT_00014388,iVar1);
  iVar1 = call_condition_variable();
  printf(&DAT_000143a4,iVar1);
  iVar1 = call_atomic_ops();
  printf(&DAT_000143c0,iVar1);
  iVar1 = call_thread_local_storage();
  printf(&DAT_000143dc,iVar1);
  return;
}



/* Function: main @ 000137ac */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 000137d6 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 000137e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00013800 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001381a) */
/* WARNING: Removing unreachable block (ram,0x00013830) */
/* WARNING: Removing unreachable block (ram,0x0001383d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001384c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 77 */
