/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/6/6_gcc_O1_g
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



/* Function: _start @ 00102760 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00102790 */

/* WARNING: Removing unreachable block (ram,0x001027a3) */
/* WARNING: Removing unreachable block (ram,0x001027af) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001027c0 */

/* WARNING: Removing unreachable block (ram,0x001027e4) */
/* WARNING: Removing unreachable block (ram,0x001027f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102800 */

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



/* Function: signal_handler @ 00102849 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 0010285e */

void * thread_sum(void *arg)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((long)arg + 8) = 0;
                    /* Unresolved local var: int i@[???] */
  iVar1 = *(int *)arg;
  if (iVar1 <= *(int *)((long)arg + 4)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int *)((long)arg + 4) + 1);
    *(int *)((long)arg + 8) = iVar2;
  }
  return (void *)0x0;
}



/* Function: thread_compute @ 0010288c */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: thread_increment @ 001028a4 */

void * thread_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
      usleep(1000);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 001028fb */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  iVar1 = data;
  while (data = iVar1, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
    iVar1 = data;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  piVar2 = malloc(4);
  *piVar2 = iVar1;
  return piVar2;
}



/* Function: producer_thread @ 00102961 */

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



/* Function: thread_atomic_increment @ 001029ae */

void * thread_atomic_increment(void *arg)

{
  atomic_int aVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < *(int *)arg) {
    iVar2 = 0;
    do {
                    /* Unresolved local var: int expected@[???]
                       Unresolved local var: int desired@[???] */
      LOCK();
      atomic_counter = atomic_counter + 1;
      UNLOCK();
      LOCK();
      aVar1 = iVar2 + 1000;
      if (iVar2 != atomic_counter) {
        aVar1 = atomic_counter;
      }
      atomic_counter = aVar1;
      UNLOCK();
      iVar2 = iVar2 + 1;
    } while (*(int *)arg != iVar2);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 001029e2 */

void * thread_atomic_load_store(void *arg)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: thread_tls_test @ 001029fb */

void * thread_tls_test(void *arg)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long *in_FS_OFFSET;
  
  iVar2 = *(int *)((long)in_FS_OFFSET + -0x24);
  iVar1 = iVar2 + 0x32;
  *(int *)((long)in_FS_OFFSET + -0x24) = iVar1;
  strncpy((char *)(*in_FS_OFFSET + -0x20),arg,0x1f);
  piVar3 = malloc(8);
  *piVar3 = iVar2;
  piVar3[1] = iVar1;
  return piVar3;
}



/* Function: param_strcpy @ 00102a4b */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return (int)sVar1;
}



/* Function: call_strcpy @ 00102a62 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  char buffer [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = param_strcpy(buffer,"HelloLib");
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_strcmp @ 00102aa3 */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(s1,s2);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = iVar1 >> 0x1f;
  }
  return iVar2;
}



/* Function: call_strcmp @ 00102ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp("abc","def");
  iVar2 = param_strcmp("xyz","xyz");
  iVar3 = param_strcmp("bbb","aaa");
  return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00102b0e */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return (int)sVar1;
}



/* Function: call_strlen @ 00102b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00102b2a */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return (int)n;
}



/* Function: call_memcpy @ 00102b3b */

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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dst[2] + dst[0] + dst[4];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_memcmp @ 00102bcc */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = memcmp(p1,p2,n);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = iVar1 >> 0x1f;
  }
  return iVar2;
}



/* Function: call_memcmp @ 00102be9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_printf @ 00102c94 */

int param_printf(int x,char *name)

{
  int iVar1;
  
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00102cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 00102cda */

int param_scanf(char *input_str)

{
  int iVar1;
  long in_FS_OFFSET;
  int a;
  int b;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  if (iVar1 == 2) {
    iVar1 = b + a;
  }
  else {
    iVar1 = -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_scanf @ 00102d33 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00102d4c */

int param_fopen_fclose(char *filename)

{
  int iVar1;
  FILE *__stream;
  
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



/* Function: call_fopen_fclose @ 00102d8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00102dab */

int param_fread_fwrite(char *tmpfile)

{
  long lVar1;
  int iVar2;
  FILE *__s;
  size_t sVar3;
  long in_FS_OFFSET;
  char read_buffer [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar2 = -1;
  }
  else {
    sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar3 == 0x12) {
      rewind(__s);
                    /* Unresolved local var: size_t sz@[???] */
      sVar3 = fread(read_buffer,1,0x12,__s);
      read_buffer[sVar3] = '\0';
      fclose(__s);
      unlink(tmpfile);
      if (sVar3 == 0x12) {
        iVar2 = strcmp(read_buffer,"BinBench Test Data");
        iVar2 = (-(uint)(iVar2 == 0) & 0x2d) - 3;
      }
      else {
        iVar2 = -3;
      }
    }
    else {
      fclose(__s);
      iVar2 = -2;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_fread_fwrite @ 00102e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00102ea9 */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  
  __ptr = malloc(size * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: size_t i@[???] */
    if (size != 0) {
      iVar1 = 0;
      piVar2 = __ptr;
      do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 10;
        piVar2 = piVar2 + 1;
      } while (piVar2 != __ptr + size);
    }
    iVar1 = *__ptr + __ptr[size - 1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00102f0a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00102f21 */

int param_memset(void *buffer,size_t size)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  if (size == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + (uint)*pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)((long)buffer + size));
  }
  return iVar2;
}



/* Function: call_memset @ 00102f6a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  int buffer [10];
  long local_10 [2];
  
  plVar1 = (long *)buffer;
  local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
                    /* Unresolved local var: int i@[???] */
  do {
    *(undefined4 *)plVar1 = 0xff;
    plVar1 = (long *)((long)plVar1 + 4);
  } while (plVar1 != local_10);
  param_memset(buffer,0x28);
  if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return buffer[9] + buffer[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_strchr_strstr @ 00102fc7 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = strchr(str,(int)ch);
  iVar3 = -1;
  if (pcVar2 != (char *)0x0) {
    iVar3 = (int)pcVar2 - (int)str;
  }
  pcVar2 = strstr(str,substr);
  iVar1 = -1;
  if (pcVar2 != (char *)0x0) {
    iVar1 = (int)pcVar2 - (int)str;
  }
  return iVar1 + iVar3;
}



/* Function: call_strchr_strstr @ 00103012 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 00103037 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  
  puts(&DAT_001053c0);
  iVar1 = call_strcpy();
  __printf_chk(1,&DAT_00105099,iVar1);
  iVar1 = call_strcmp();
  __printf_chk(1,&DAT_001050b4,iVar1);
  iVar1 = call_strlen();
  __printf_chk(1,&DAT_001050cf,iVar1);
  iVar1 = call_memcpy();
  __printf_chk(1,&DAT_001050eb,iVar1);
  iVar1 = call_memcmp();
  __printf_chk(1,&DAT_00105107,iVar1);
  iVar1 = call_printf();
  __printf_chk(1,&DAT_00105123,iVar1);
  iVar1 = call_scanf();
  __printf_chk(1,&DAT_0010513f,iVar1);
  iVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_0010515c,iVar1);
  iVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_00105178,iVar1);
  iVar1 = call_malloc_free();
  __printf_chk(1,&DAT_00105194,iVar1);
  iVar1 = call_memset();
  __printf_chk(1,&DAT_001051b0,iVar1);
  iVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_001051cb,iVar1);
  return;
}



/* Function: param_linux_syscall @ 001031e8 */

int param_linux_syscall(char *pathname)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = syscall(2,pathname,0);
  iVar3 = (int)uVar1;
  if (iVar3 < 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  else {
    syscall(3,uVar1 & 0xffffffff);
  }
  return iVar3;
}



/* Function: call_linux_syscall @ 0010322a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00103249 */

int param_win32_api(char *filename)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = stat(filename,(stat *)&st);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0x2a;
    if (st.st_size < 1) {
      iVar2 = -2;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_win32_api @ 001032ad */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 001032c6 */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint uVar2;
  long in_FS_OFFSET;
  int status;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl(prog,prog,arg,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
                    /* Unresolved local var: pid_t wpid@[???] */
    _Var1 = waitpid(_Var1,&status,0);
    uVar2 = 0xfffffffe;
    if ((-1 < _Var1) && (uVar2 = (uint)status >> 8 & 0xff, (status & 0x7fU) != 0)) {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_fork_exec @ 00103364 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 0010338d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  long lVar1;
  int iVar2;
  __pid_t _Var3;
  ssize_t sVar4;
  long in_FS_OFFSET;
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
                    /* Unresolved local var: char * msg@[???] */
        close(pipefd[0]);
        write(pipefd[1],"HelloPipe",9);
        close(pipefd[1]);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
                    /* Unresolved local var: ssize_t bytes@[???] */
      close(pipefd[1]);
      sVar4 = read(pipefd[0],buffer,0x1f);
      buffer[sVar4] = '\0';
      close(pipefd[0]);
      wait((void *)0x0);
      iVar2 = 0x2a;
      if (sVar4 < 1) {
        iVar2 = -3;
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pipe_communication @ 00103468 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 0010347a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  int opt;
  sockaddr_in addr;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = socket(2,1,0);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    opt = 1;
    iVar3 = setsockopt(iVar2,1,2,&opt,4);
    if (iVar3 < 0) {
      close(iVar2);
      iVar2 = -2;
    }
    else {
      addr.sin_zero[0] = '\0';
      addr.sin_zero[1] = '\0';
      addr.sin_zero[2] = '\0';
      addr.sin_zero[3] = '\0';
      addr.sin_zero[4] = '\0';
      addr.sin_zero[5] = '\0';
      addr.sin_zero[6] = '\0';
      addr.sin_zero[7] = '\0';
      addr.sin_family = 2;
      addr.sin_port = 0;
      addr.sin_addr.s_addr = 0;
      iVar3 = bind(iVar2,(sockaddr *)&addr,0x10);
      if (iVar3 < 0) {
        close(iVar2);
        iVar2 = -3;
      }
      else {
        iVar3 = listen(iVar2,5);
        if (iVar3 < 0) {
          close(iVar2);
          iVar2 = -4;
        }
        else {
          close(iVar2);
          iVar2 = 0x2a;
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_socket_create @ 0010356f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 00103581 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  int __shmid;
  char *__s;
  size_t sVar2;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      iVar1 = -1;
    }
    else {
      __shmid = shmget(__key,0x1000,0x3b6);
      if (__shmid < 0) {
        iVar1 = -2;
      }
      else {
        __s = shmat(__shmid,(void *)0x0,0);
        if (__s == (char *)0xffffffffffffffff) {
          iVar1 = -3;
        }
        else {
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar2 = strlen(__s);
          iVar1 = (int)sVar2;
          shmdt(__s);
          shmctl(__shmid,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return iVar1;
}



/* Function: call_shmget_shmat @ 0010365d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_shmget_shmat();
  iVar2 = 0x2a;
  if (iVar1 < 1) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: param_signal_handling @ 0010367e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
    iVar2 = -1;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
      iVar2 = -2;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        iVar2 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (signal_received == 0) {
        iVar2 = -3;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        if (signal_received == 0) {
          iVar2 = 2000;
          do {
            usleep(1000);
            if (signal_received != 0) break;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (signal_received == 0) {
          iVar2 = -5;
        }
        else if (signal_number == 0xe) {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          iVar2 = 0x2a;
        }
        else {
          iVar2 = -5;
        }
      }
      else {
        iVar2 = -4;
      }
    }
  }
  return iVar2;
}



/* Function: call_signal_handling @ 001037b2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 001037c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  
  puts(&DAT_0010520d);
  iVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_00105228,iVar1);
  iVar1 = call_win32_api();
  __printf_chk(1,&DAT_00105244,iVar1);
  iVar1 = call_fork_exec();
  __printf_chk(1,&DAT_00105260,iVar1);
  iVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_0010527c,iVar1);
  iVar1 = param_socket_create();
  __printf_chk(1,&DAT_00105298,iVar1);
  iVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_001052b4,iVar1);
  iVar1 = param_signal_handling();
  __printf_chk(1,&DAT_001052d0,iVar1);
  return;
}



/* Function: param_pthread_create @ 001038bc */

int param_pthread_create(int x)

{
  int iVar1;
  long in_FS_OFFSET;
  int input;
  pthread_t tid;
  void *thread_ret;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  input = x;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    iVar1 = *(int *)thread_ret;
    free(thread_ret);
  }
  else {
    iVar1 = -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_create @ 00103937 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: param_pthread_join @ 0010394e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  ThreadData *__arg;
  long lVar3;
  pthread_t *__newthread;
  long in_FS_OFFSET;
  pthread_t tids [3];
  ThreadData data [3];
  ThreadData local_34;
  
  __newthread = tids;
  local_34._4_8_ = *(long *)(in_FS_OFFSET + 0x28);
  data[0].start = 1;
  data[0].end = 10;
  data[0].result = 0;
  data[1].start = 0xb;
  data[1].end = 0x14;
  data[1].result = 0;
  data[2].start = 0x15;
  data[2].end = 0x1e;
  data[2].result = 0;
                    /* Unresolved local var: int i@[???] */
  __arg = data;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_00103a1f;
    }
    __newthread = __newthread + 1;
    __arg = __arg + 1;
  } while (__arg != &local_34);
  lVar3 = 0;
                    /* Unresolved local var: int i@[???] */
  iVar1 = 0;
  do {
    iVar2 = pthread_join(tids[lVar3],(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar1 = iVar1 + data[lVar3].result;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
LAB_00103a1f:
  if (local_34._4_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_join @ 00103a51 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: param_mutex_lock @ 00103a68 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  int iVar1;
  pthread_t *__ptr;
  pthread_t *__newthread;
  pthread_t *ppVar2;
  int local_3c [3];
  
  local_3c[0] = iterations_per_thread;
  __ptr = malloc((long)thread_count << 3);
  if (__ptr == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    shared_counter = 0;
                    /* Unresolved local var: int i@[???] */
    if (0 < thread_count) {
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,local_3c);
        if (iVar1 != 0) {
          free(__ptr);
          return -2;
        }
        __newthread = __newthread + 1;
        ppVar2 = __ptr;
      } while (__newthread != __ptr + (uint)thread_count);
      do {
                    /* Unresolved local var: int i@[???] */
        pthread_join(*ppVar2,(void **)0x0);
        ppVar2 = ppVar2 + 1;
      } while (ppVar2 != __ptr + (uint)thread_count);
    }
    free(__ptr);
    iVar1 = 0x2a;
    if (shared_counter != thread_count * local_3c[0]) {
      iVar1 = -3;
    }
  }
  return iVar1;
}



/* Function: call_mutex_lock @ 00103b3e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: param_condition_variable @ 00103b5a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  long in_FS_OFFSET;
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
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_condition_variable @ 00103c21 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: param_atomic_ops @ 00103c38 */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  int iVar2;
  pthread_t *__ptr;
  pthread_t *__newthread;
  long lVar3;
  long in_FS_OFFSET;
  int local_3c;
  pthread_t load_store_tid;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = iterations;
  __ptr = malloc((long)thread_count << 3);
  if (__ptr == (pthread_t *)0x0) {
    iVar2 = -1;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
                    /* Unresolved local var: int i@[???] */
    if (thread_count < 1) {
      iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar2 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
    }
    else {
      __newthread = __ptr;
      do {
        iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_3c);
        if (iVar2 != 0) {
          free(__ptr);
          iVar2 = -2;
          goto LAB_00103d20;
        }
        __newthread = __newthread + 1;
      } while (__newthread != __ptr + (uint)thread_count);
      iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar2 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
      lVar3 = 0;
      do {
                    /* Unresolved local var: int i@[???] */
        pthread_join(__ptr[lVar3],(void **)0x0);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < thread_count);
    }
    aVar1 = atomic_counter;
    free(__ptr);
    iVar2 = 0x2a;
    if (aVar1 < 1) {
      iVar2 = -3;
    }
  }
LAB_00103d20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_atomic_ops @ 00103d9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: param_thread_local_storage @ 00103db8 */

int param_thread_local_storage(int thread_count)

{
  int iVar1;
  pthread_t *__ptr;
  undefined8 *__ptr_00;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  pthread_t *__newthread;
  ulong uVar6;
  long in_FS_OFFSET;
  void *ret;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = malloc((long)thread_count << 3);
  __ptr_00 = malloc((long)thread_count << 3);
  if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (thread_count < 1) {
      iVar5 = 0;
      iVar1 = 0;
    }
    else {
      uVar6 = (ulong)(uint)thread_count;
      uVar3 = 0;
      do {
        pvVar2 = malloc(0x10);
        __ptr_00[uVar3] = pvVar2;
        __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar3 & 0xffffffff);
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar6);
      uVar3 = 0;
      __newthread = __ptr;
      do {
                    /* Unresolved local var: int i@[???] */
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               (void *)__ptr_00[uVar3]);
        if (iVar1 != 0) {
                    /* Unresolved local var: int j@[???] */
          if (-1 < (int)uVar3) {
            puVar4 = __ptr_00;
            do {
              free((void *)*puVar4);
              puVar4 = puVar4 + 1;
            } while (puVar4 != __ptr_00 + (uVar3 & 0xffffffff) + 1);
          }
          free(__ptr_00);
          free(__ptr);
          iVar1 = -2;
          goto LAB_00103f06;
        }
        uVar3 = uVar3 + 1;
        __newthread = __newthread + 1;
      } while (uVar3 != uVar6);
      uVar3 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int * values@[???] */
      iVar1 = 0;
      iVar5 = 0;
      do {
        pthread_join(__ptr[uVar3],&ret);
        iVar1 = iVar1 + *(int *)ret;
        iVar5 = iVar5 + *(int *)((long)ret + 4);
        free(ret);
        free((void *)__ptr_00[uVar3]);
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar6);
    }
    free(__ptr_00);
    free(__ptr);
    if ((thread_count * 100 == iVar1) && (thread_count * 0x96 == iVar5)) {
      iVar1 = 0x2a;
    }
    else {
      iVar1 = -3;
    }
  }
LAB_00103f06:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 00103f81 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 00103f98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  
  puts(&DAT_001052f6);
  iVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00105314,iVar1);
  iVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00105330,iVar1);
  iVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_0010534d,iVar1);
  iVar1 = param_condition_variable();
  __printf_chk(1,&DAT_00105369,iVar1);
  iVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_00105385,iVar1);
  iVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_001053a1,iVar1);
  return;
}



/* Function: main @ 0010407d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _fini @ 001040b0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
