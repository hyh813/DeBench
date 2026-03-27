/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/6/6_gcc_Os_g
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



/* Function: main @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _start @ 00102740 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00102770 */

/* WARNING: Removing unreachable block (ram,0x00102783) */
/* WARNING: Removing unreachable block (ram,0x0010278f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001027a0 */

/* WARNING: Removing unreachable block (ram,0x001027c4) */
/* WARNING: Removing unreachable block (ram,0x001027d0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001027e0 */

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



/* Function: signal_handler @ 00102829 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 0010283e */

void * thread_sum(void *arg)

{
  int iVar1;
  
                    /* Unresolved local var: int i@[???] */
  iVar1 = *(int *)arg;
  *(undefined4 *)((long)arg + 8) = 0;
  for (; iVar1 <= *(int *)((long)arg + 4); iVar1 = iVar1 + 1) {
    *(int *)((long)arg + 8) = *(int *)((long)arg + 8) + iVar1;
  }
  return (void *)0x0;
}



/* Function: thread_compute @ 0010285c */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: thread_increment @ 00102874 */

void * thread_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  iVar1 = *(int *)arg;
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
    usleep(1000);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 001028c0 */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  while (iVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  piVar2 = malloc(4);
  *piVar2 = iVar1;
  return piVar2;
}



/* Function: producer_thread @ 00102911 */

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



/* Function: thread_atomic_increment @ 0010295b */

void * thread_atomic_increment(void *arg)

{
  atomic_int aVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  for (iVar2 = 0; iVar2 < *(int *)arg; iVar2 = iVar2 + 1) {
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
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00102985 */

void * thread_atomic_load_store(void *arg)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: thread_tls_test @ 0010299b */

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



/* Function: param_strcpy @ 001029e5 */

int param_strcpy(char *dst,char *src)

{
  char *__s;
  size_t sVar1;
  
  __s = strcpy(dst,src);
  sVar1 = strlen(__s);
  return (int)sVar1;
}



/* Function: call_strcpy @ 001029f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  char buffer [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = param_strcpy(buffer,"HelloLib");
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_strcmp @ 00102a3c */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(s1,s2);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_strcmp @ 00102a5d */

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



/* Function: param_strlen @ 00102aa5 */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return (int)sVar1;
}



/* Function: call_strlen @ 00102ab1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00102abb */

int param_memcpy(void *dst,void *src,size_t n)

{
  size_t sVar1;
  
  for (sVar1 = n; sVar1 != 0; sVar1 = sVar1 - 1) {
    *(undefined1 *)dst = *(undefined1 *)src;
    src = (undefined1 *)((long)src + 1);
    dst = (undefined1 *)((long)dst + 1);
  }
  return (int)n;
}



/* Function: call_memcpy @ 00102ac8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int src [5];
  int dst [5];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  src[4] = 0x32;
  src[0] = 10;
  src[1] = 0x14;
  src[2] = 0x1e;
  src[3] = 0x28;
  piVar3 = dst;
  for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  param_memcpy(dst,src,0x14);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return dst[2] + dst[0] + dst[4];
}



/* Function: param_memcmp @ 00102b49 */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = memcmp(p1,p2,n);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_memcmp @ 00102b6a */

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
  arr1[2] = 3;
  arr2[2] = 4;
  arr3[2] = 3;
  arr1[0] = 1;
  arr1[1] = 2;
  arr2[0] = 1;
  arr2[1] = 2;
  arr3[0] = 1;
  arr3[1] = 2;
  iVar2 = param_memcmp(arr1,arr2,0xc);
  iVar3 = param_memcmp(arr1,arr3,0xc);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3 + iVar2;
}



/* Function: param_printf @ 00102bfc */

int param_printf(int x,char *name)

{
  int iVar1;
  
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00102c18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 00102c2a */

int param_scanf(char *input_str)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int a;
  int b;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = b + a;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_scanf @ 00102c83 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00102c90 */

int param_fopen_fclose(char *filename)

{
  int iVar1;
  FILE *__stream;
  
  iVar1 = -1;
  __stream = fopen(filename,"r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
  }
  return iVar1;
}



/* Function: call_fopen_fclose @ 00102ccb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00102ce4 */

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
  iVar2 = -1;
  if (__s != (FILE *)0x0) {
    sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar3 == 0x12) {
      rewind(__s);
                    /* Unresolved local var: size_t sz@[???] */
      sVar3 = fread(read_buffer,1,0x12,__s);
      read_buffer[sVar3] = '\0';
      fclose(__s);
      unlink(tmpfile);
      iVar2 = -3;
      if (sVar3 == 0x12) {
        iVar2 = strcmp(read_buffer,"BinBench Test Data");
        iVar2 = (-(uint)(iVar2 == 0) & 0x2d) - 3;
      }
    }
    else {
      fclose(__s);
      iVar2 = -2;
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_fread_fwrite @ 00102dcd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00102ddd */

int param_malloc_free(size_t size)

{
  int *__ptr;
  size_t sVar1;
  int iVar2;
  
  iVar2 = -1;
  __ptr = malloc(size * 4);
  if (__ptr != (int *)0x0) {
                    /* Unresolved local var: size_t i@[???] */
    for (sVar1 = 0; sVar1 != size; sVar1 = sVar1 + 1) {
      __ptr[sVar1] = (int)sVar1 * 10;
    }
    iVar2 = *__ptr + __ptr[size - 1];
    free(__ptr);
  }
  return iVar2;
}



/* Function: call_malloc_free @ 00102e2b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00102e36 */

int param_memset(void *buffer,size_t size)

{
  size_t sVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = buffer;
  for (sVar1 = size; sVar1 != 0; sVar1 = sVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
                    /* Unresolved local var: size_t i@[???] */
  for (sVar1 = 0; sVar1 != size; sVar1 = sVar1 + 1) {
    iVar3 = iVar3 + (uint)*(byte *)((long)buffer + sVar1);
  }
  return iVar3;
}



/* Function: call_memset @ 00102e5e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  int buffer [10];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    buffer[lVar2] = 0xff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  param_memset(buffer,0x28);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return buffer[9] + buffer[0];
}



/* Function: param_strchr_strstr @ 00102eb4 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = strchr(str,(int)ch);
  iVar2 = (int)pcVar1 - (int)str;
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  pcVar1 = strstr(str,substr);
  iVar3 = -1;
  if (pcVar1 != (char *)0x0) {
    iVar3 = (int)pcVar1 - (int)str;
  }
  return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 00102f04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 00102f1d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  undefined8 in_RAX;
  
  puts(&DAT_00104099);
  iVar1 = call_strcpy();
  __printf_chk(1,&DAT_001040bd,iVar1);
  iVar1 = call_strcmp();
  __printf_chk(1,&DAT_001040d8,iVar1);
  __printf_chk(1,&DAT_001040f3,0xc);
  iVar1 = call_memcpy();
  __printf_chk(1,&DAT_0010410f,iVar1);
  iVar1 = call_memcmp();
  __printf_chk(1,&DAT_0010412b,iVar1);
  iVar1 = call_printf();
  __printf_chk(1,&DAT_00104147,iVar1);
  iVar1 = call_scanf();
  __printf_chk(1,&DAT_00104163,iVar1);
  iVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_00104180,iVar1);
  iVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_0010419c,iVar1);
  iVar1 = call_malloc_free();
  __printf_chk(1,&DAT_001041b8,iVar1);
  iVar1 = call_memset();
  __printf_chk(1,&DAT_001041d4,iVar1);
  iVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_001041ef,iVar1,in_RAX);
  return;
}



/* Function: param_linux_syscall @ 0010307b */

int param_linux_syscall(char *pathname)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = syscall(2,pathname,0);
  iVar3 = (int)uVar1;
  if (iVar3 < 0) {
                    /* Unresolved local var: int fd@[???] */
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  else {
    syscall(3,uVar1 & 0xffffffff);
  }
  return iVar3;
}



/* Function: call_linux_syscall @ 001030ba */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 001030d3 */

int param_win32_api(char *filename)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = stat(filename,(stat *)&st);
  iVar3 = -1;
  if ((-1 < iVar2) && (iVar3 = 0x2a, st.st_size < 1)) {
    iVar3 = -2;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* Function: call_win32_api @ 00103139 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 00103146 */

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
                    /* Unresolved local var: pid_t pid@[???] */
      execl(prog,prog,arg,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
                    /* Unresolved local var: pid_t wpid@[???] */
    _Var1 = waitpid(_Var1,&status,0);
    uVar2 = 0xfffffffe;
    if (-1 < _Var1) {
      uVar2 = 0xfffffffd;
      if ((status & 0x7fU) == 0) {
        uVar2 = (uint)status >> 8 & 0xff;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_fork_exec @ 001031dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 001031fb */

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



/* Function: call_pipe_communication @ 001032c1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 001032ca */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  long lVar1;
  int __fd;
  int iVar2;
  long in_FS_OFFSET;
  int opt;
  sockaddr_in addr;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = socket(2,1,0);
  iVar2 = -1;
  if (-1 < __fd) {
    opt = 1;
    iVar2 = setsockopt(__fd,1,2,&opt,4);
    if (iVar2 < 0) {
      close(__fd);
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
      iVar2 = bind(__fd,(sockaddr *)&addr,0x10);
      if (iVar2 < 0) {
        close(__fd);
        iVar2 = -3;
      }
      else {
        iVar2 = listen(__fd,5);
        if (iVar2 < 0) {
          close(__fd);
          iVar2 = -4;
        }
        else {
          close(__fd);
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



/* Function: call_socket_create @ 001033b6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 001033bf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__dest;
  size_t sVar2;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        return -2;
      }
      __dest = shmat(iVar1,(void *)0x0,0);
      if (__dest == (char *)0xffffffffffffffff) {
        return -3;
      }
      strcpy(__dest,"SharedMemory");
      sVar2 = strlen(__dest);
      shmdt(__dest);
      shmctl(iVar1,0,(shmid_ds *)0x0);
      return (int)sVar2;
    }
  }
  return -1;
}



/* Function: call_shmget_shmat @ 00103474 */

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



/* Function: param_signal_handling @ 0010348f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
  p_Var1 = signal(10,signal_handler);
  iVar2 = -1;
  if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
    p_Var1 = signal(0xe,signal_handler);
    iVar2 = -2;
    if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
      iVar2 = 0x3e9;
      signal_received = 0;
      raise(10);
                    /* Unresolved local var: int attempts@[???] */
      while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
        usleep(1000);
      }
      iVar2 = -3;
      if ((signal_received != 0) && (iVar2 = -4, signal_number == 10)) {
        iVar2 = 0x7d1;
        signal_received = 0;
        alarm(1);
        while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
          usleep(1000);
        }
        iVar2 = -5;
        if ((signal_received != 0) && (signal_number == 0xe)) {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          iVar2 = 0x2a;
        }
      }
    }
  }
  return iVar2;
}



/* Function: call_signal_handling @ 00103597 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 001035a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  undefined8 in_RAX;
  
  puts(&DAT_0010423e);
  iVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_00104259,iVar1);
  iVar1 = call_win32_api();
  __printf_chk(1,&DAT_00104275,iVar1);
  iVar1 = call_fork_exec();
  __printf_chk(1,&DAT_00104291,iVar1);
  iVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_001042ad,iVar1);
  iVar1 = param_socket_create();
  __printf_chk(1,&DAT_001042c9,iVar1);
  iVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_001042e5,iVar1);
  iVar1 = param_signal_handling();
  __printf_chk(1,&DAT_00104301,iVar1,in_RAX);
  return;
}



/* Function: param_pthread_create @ 00103670 */

int param_pthread_create(int x)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int input;
  pthread_t tid;
  void *thread_ret;
  long local_10;
  
  iVar2 = -1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  input = x;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    iVar2 = *(int *)thread_ret;
    free(thread_ret);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_pthread_create @ 001036e9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: param_pthread_join @ 001036f7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  pthread_t *__newthread;
  long lVar5;
  ThreadData *pTVar6;
  int *piVar7;
  long in_FS_OFFSET;
  pthread_t tids [3];
  undefined1 local_68 [4];
  ThreadData data [3];
  
                    /* Unresolved local var: int i@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  piVar7 = &DAT_00104400;
  pTVar6 = data;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    pTVar6->start = *piVar7;
    piVar7 = piVar7 + 1;
    pTVar6 = (ThreadData *)&pTVar6->end;
  }
  pTVar6 = data;
  __newthread = tids;
  do {
    iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,pTVar6);
    if (iVar2 != 0) {
      iVar2 = -1;
      goto LAB_001037a0;
    }
    __newthread = __newthread + 1;
    pTVar6 = pTVar6 + 1;
  } while (__newthread != (pthread_t *)local_68);
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  lVar4 = 0;
  do {
    iVar3 = pthread_join(tids[lVar4],(void **)0x0);
    if (iVar3 != 0) {
      iVar2 = -2;
      break;
    }
    lVar5 = lVar4 + 1;
    iVar2 = iVar2 + data[lVar4].result;
    lVar4 = lVar5;
  } while (lVar5 != 3);
LAB_001037a0:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_join @ 001037c7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: param_mutex_lock @ 001037d2 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  int iVar1;
  pthread_t *__ptr;
  int iVar2;
  long lVar3;
  pthread_t *__newthread;
  int local_2c;
  
  local_2c = iterations_per_thread;
  __ptr = malloc((long)thread_count << 3);
  iVar2 = -1;
  if (__ptr != (pthread_t *)0x0) {
    shared_counter = 0;
    __newthread = __ptr;
                    /* Unresolved local var: int i@[???] */
    for (iVar2 = 0; iVar2 < thread_count; iVar2 = iVar2 + 1) {
      iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&local_2c);
      __newthread = __newthread + 1;
      if (iVar1 != 0) {
        free(__ptr);
        return -2;
      }
    }
                    /* Unresolved local var: int i@[???] */
    for (lVar3 = 0; (int)lVar3 < thread_count; lVar3 = lVar3 + 1) {
      pthread_join(__ptr[lVar3],(void **)0x0);
    }
    free(__ptr);
    iVar2 = 0x2a;
    if (shared_counter != thread_count * local_2c) {
      iVar2 = -3;
    }
  }
  return iVar2;
}



/* Function: call_mutex_lock @ 00103896 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: param_condition_variable @ 001038a9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  long local_10;
  
  iVar2 = -1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar2 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(consumer,&consumer_ret);
      pthread_join(producer,(void **)0x0);
      iVar2 = *(int *)consumer_ret;
      free(consumer_ret);
    }
    else {
      pthread_cancel(consumer);
      iVar2 = -2;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_condition_variable @ 0010395e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: param_atomic_ops @ 00103969 */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  int iVar2;
  pthread_t *__ptr;
  int iVar3;
  long lVar4;
  pthread_t *__newthread;
  long in_FS_OFFSET;
  int local_3c;
  pthread_t load_store_tid;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = iterations;
  __ptr = malloc((long)thread_count << 3);
  iVar3 = -1;
  if (__ptr != (pthread_t *)0x0) {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    __newthread = __ptr;
                    /* Unresolved local var: int i@[???] */
    for (iVar3 = 0; iVar3 < thread_count; iVar3 = iVar3 + 1) {
      iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_3c);
      __newthread = __newthread + 1;
      if (iVar2 != 0) {
        free(__ptr);
        iVar3 = -2;
        goto LAB_00103a4e;
      }
    }
    iVar3 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                           (void *)0x0);
    if (iVar3 == 0) {
      pthread_join(load_store_tid,(void **)0x0);
    }
                    /* Unresolved local var: int i@[???] */
    for (lVar4 = 0; aVar1 = atomic_counter, (int)lVar4 < thread_count; lVar4 = lVar4 + 1) {
      pthread_join(__ptr[lVar4],(void **)0x0);
    }
    free(__ptr);
    iVar3 = 0x2a;
    if (aVar1 < 1) {
      iVar3 = -3;
    }
  }
LAB_00103a4e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* Function: call_atomic_ops @ 00103a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: param_thread_local_storage @ 00103a83 */

int param_thread_local_storage(int thread_count)

{
  int iVar1;
  void *__ptr;
  undefined8 *__ptr_00;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  void *ret;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = malloc((long)thread_count << 3);
  __ptr_00 = malloc((long)thread_count << 3);
                    /* Unresolved local var: int i@[???] */
  if ((__ptr == (void *)0x0) || (uVar4 = 0, __ptr_00 == (undefined8 *)0x0)) {
    iVar1 = -1;
  }
  else {
    for (; (int)uVar4 < thread_count; uVar4 = uVar4 + 1) {
      pvVar2 = malloc(0x10);
      __ptr_00[uVar4] = pvVar2;
      __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar4 & 0xffffffff);
    }
                    /* Unresolved local var: int i@[???] */
    lVar6 = 0;
    do {
      lVar5 = lVar6;
      if (thread_count <= (int)lVar5) {
        iVar7 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int * values@[???] */
        iVar1 = 0;
        for (lVar6 = 0; (int)lVar6 < thread_count; lVar6 = lVar6 + 1) {
          pthread_join(*(pthread_t *)((long)__ptr + lVar6 * 8),&ret);
          iVar1 = iVar1 + *(int *)ret;
          iVar7 = iVar7 + *(int *)((long)ret + 4);
          free(ret);
          free((void *)__ptr_00[lVar6]);
        }
        free(__ptr_00);
        free(__ptr);
        if ((thread_count * 100 != iVar1) || (iVar1 = 0x2a, thread_count * 0x96 != iVar7)) {
          iVar1 = -3;
        }
        goto LAB_00103bf5;
      }
      iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5 * 8),(pthread_attr_t *)0x0,
                             thread_tls_test,(void *)__ptr_00[lVar5]);
      lVar6 = lVar5 + 1;
    } while (iVar1 == 0);
    puVar3 = __ptr_00;
    do {
                    /* Unresolved local var: int j@[???] */
      pvVar2 = (void *)*puVar3;
      puVar3 = puVar3 + 1;
      free(pvVar2);
    } while (puVar3 != __ptr_00 + lVar5 + 1);
    free(__ptr_00);
    free(__ptr);
    iVar1 = -2;
  }
LAB_00103bf5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: call_thread_local_storage @ 00103c19 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 00103c27 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  undefined8 in_RAX;
  
  puts(&DAT_00104327);
  iVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00104345,iVar1);
  iVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00104361,iVar1);
  iVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_0010437e,iVar1);
  iVar1 = param_condition_variable();
  __printf_chk(1,&DAT_0010439a,iVar1);
  iVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_001043b6,iVar1);
  iVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_001043d2,iVar1,in_RAX);
  return;
}



/* Function: _fini @ 00103ce4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
