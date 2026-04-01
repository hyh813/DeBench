/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/6/6_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010c9c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: main @ 00010f90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _start @ 00010fa8 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010fec */

/* WARNING: Removing unreachable block (ram,0x00011000) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00011010 */

/* WARNING: Removing unreachable block (ram,0x00011020) */
/* WARNING: Removing unreachable block (ram,0x00011028) */
/* WARNING: Removing unreachable block (ram,0x0001102c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001103c */

/* WARNING: Removing unreachable block (ram,0x00011058) */
/* WARNING: Removing unreachable block (ram,0x00011060) */
/* WARNING: Removing unreachable block (ram,0x00011064) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011074 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: signal_handler @ 000110a0 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 000110b8 */

void * thread_sum(void *arg)

{
  int iVar1;
  
                    /* Unresolved local var: ThreadData * data@[DW_OP_reg0(r0)] */
                    /* Unresolved local var: int i@[???] */
  *(undefined4 *)((int)arg + 8) = 0;
  for (iVar1 = *(int *)arg; iVar1 <= *(int *)((int)arg + 4); iVar1 = iVar1 + 1) {
    *(int *)((int)arg + 8) = *(int *)((int)arg + 8) + iVar1;
  }
  return (void *)0x0;
}



/* Function: thread_compute @ 000110ec */

void * thread_compute(void *arg)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int * input@[DW_OP_reg0(r0)]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: int * ret@[???] */
  iVar2 = *(int *)arg;
  piVar1 = malloc(4);
  *piVar1 = iVar2 * iVar2;
  return piVar1;
}



/* Function: thread_increment @ 00011110 */

void * thread_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)arg;
                    /* Unresolved local var: int iterations@[???] */
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
    usleep(1000);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 00011164 */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int received@[???]
                       Unresolved local var: int * ret@[???] */
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  while (iVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  piVar2 = malloc(4);
  *piVar2 = iVar1;
  return piVar2;
}



/* Function: producer_thread @ 000111bc */

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



/* Function: thread_atomic_increment @ 00011204 */

/* WARNING: Removing unreachable block (ram,0x00011244) */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  int iVar2;
  int expected;
  
  iVar2 = *(int *)arg;
                    /* Unresolved local var: int iterations@[???] */
                    /* Unresolved local var: int i@[???] */
                    /* Unresolved local var: int desired@[???] */
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    __sync_fetch_and_add_4(&atomic_counter,1);
    __sync_val_compare_and_swap_4(&atomic_counter,iVar1,iVar1 + 1000);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 0001128c */

void * thread_atomic_load_store(void *arg)

{
  atomic_int aVar1;
  
                    /* Unresolved local var: int value@[???] */
  __sync_synchronize();
  aVar1 = atomic_counter;
  __sync_synchronize();
  __sync_synchronize();
  atomic_counter = aVar1 + 100;
  __sync_synchronize();
  return (void *)0x0;
}



/* Function: thread_tls_test @ 000112bc */

void * thread_tls_test(void *arg)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
                    /* Unresolved local var: char * name@[???]
                       Unresolved local var: int initial@[???]
                       Unresolved local var: int * ret@[???] */
  uVar5 = __aeabi_read_tp(arg,arg);
  iVar1 = (int)uVar5;
  iVar4 = *(int *)(iVar1 + 8);
  iVar3 = iVar4 + 0x32;
  *(int *)(iVar1 + 8) = iVar3;
  strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar5 >> 0x20),0x1f);
  piVar2 = malloc(8);
  *piVar2 = iVar4;
  piVar2[1] = iVar3;
  return piVar2;
}



/* Function: param_strcpy @ 00011304 */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return sVar1;
}



/* Function: call_strcpy @ 0001131c */

/* WARNING: Removing unreachable block (ram,0x00011358) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  int iVar1;
  char buffer [32];
  
                    /* Unresolved local var: int len@[???] */
  iVar1 = param_strcpy(buffer,"HelloLib");
  return iVar1;
}



/* Function: param_strcmp @ 0001136c */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = strcmp(s1,s2);
  if (0 < iVar1) {
    return 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_strcmp @ 00011390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  iVar1 = param_strcmp("abc","def");
  iVar2 = param_strcmp("xyz","xyz");
  iVar3 = param_strcmp("bbb","aaa");
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 000113e0 */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return sVar1;
                    /* Unresolved local var: size_t len@[???] */
}



/* Function: call_strlen @ 000113e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
                    /* Unresolved local var: char * test@[???] */
  return 0xc;
}



/* Function: param_memcpy @ 000113ec */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 00011400 */

/* WARNING: Removing unreachable block (ram,0x0001147c) */
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
  memset(dst,0,0x14);
  param_memcpy(dst,src,0x14);
  return dst[0] + dst[2] + dst[4];
}



/* Function: param_memcmp @ 00011490 */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = memcmp(p1,p2,n);
  if (0 < iVar1) {
    return 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_memcmp @ 000114b4 */

/* WARNING: Removing unreachable block (ram,0x00011538) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
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



/* Function: param_printf @ 0001154c */

int param_printf(int x,char *name)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00011564 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
                    /* Unresolved local var: int chars@[???] */
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 00011574 */

int param_scanf(char *input_str)

{
  int iVar1;
  int in_r1;
  int in_r2;
  int a;
  int b;
  int local_c;
  
                    /* Unresolved local var: int ret@[???] */
  local_c = 0;
  a = in_r1;
  b = in_r2;
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b,input_str);
  if (iVar1 == 2) {
    iVar1 = a + b;
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



/* Function: call_scanf @ 000115d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 000115e0 */

int param_fopen_fclose(char *filename)

{
  FILE *__stream;
  int iVar1;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: int fd@[???] */
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



/* Function: call_fopen_fclose @ 00011614 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  
                    /* Unresolved local var: int fd@[???] */
  iVar1 = param_fopen_fclose("/etc/passwd");
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_fread_fwrite @ 00011634 */

/* WARNING: Removing unreachable block (ram,0x000116a8) */

int param_fread_fwrite(char *tmpfile)

{
  FILE *__s;
  int iVar1;
  size_t sVar2;
  char read_buffer [32];
  
                    /* Unresolved local var: char * write_data@[???]
                       Unresolved local var: FILE * fp@[???]
                       Unresolved local var: size_t written@[???]
                       Unresolved local var: size_t read@[???] */
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar2 == 0x12) {
      rewind(__s);
                    /* Unresolved local var: size_t sz@[???] */
      sVar2 = fread(read_buffer,1,0x12,__s);
      read_buffer[sVar2] = '\0';
      fclose(__s);
      unlink(tmpfile);
      if (sVar2 == 0x12) {
        iVar1 = strcmp(read_buffer,"BinBench Test Data");
        if (iVar1 == 0) {
          iVar1 = 0x2a;
        }
        else {
          iVar1 = -3;
        }
      }
      else {
        iVar1 = -3;
      }
    }
    else {
      fclose(__s);
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: call_fread_fwrite @ 00011724 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00011730 */

int param_malloc_free(size_t size)

{
  int *__ptr;
  size_t sVar1;
  int iVar2;
  
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(size * 4);
                    /* Unresolved local var: size_t i@[???] */
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    for (sVar1 = 0; sVar1 != size; sVar1 = sVar1 + 1) {
      __ptr[sVar1] = sVar1 * 10;
    }
    iVar2 = __ptr[size - 1] + *__ptr;
    free(__ptr);
  }
  return iVar2;
}



/* Function: call_malloc_free @ 0001178c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00011794 */

int param_memset(void *buffer,size_t size)

{
  int iVar1;
  byte *pbVar2;
  
                    /* Unresolved local var: uchar * bytes@[???]
                       Unresolved local var: int sum@[???] */
  memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  iVar1 = 0;
  pbVar2 = (byte *)((int)buffer + size);
  for (; buffer != pbVar2; buffer = (void *)((int)buffer + 1)) {
    iVar1 = iVar1 + (uint)*(byte *)buffer;
  }
  return iVar1;
}



/* Function: call_memset @ 000117cc */

/* WARNING: Removing unreachable block (ram,0x00011830) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  int *piVar1;
  int iVar2;
  int buffer [10];
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  piVar1 = buffer;
  do {
    iVar2 = iVar2 + 1;
    *piVar1 = 0xff;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 10);
  param_memset(buffer,0x28);
  return buffer[0] + buffer[9];
}



/* Function: param_strchr_strstr @ 00011840 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: char * pos1@[???]
                       Unresolved local var: int index1@[???]
                       Unresolved local var: char * pos2@[???]
                       Unresolved local var: int index2@[???] */
  pcVar1 = strchr(str,(int)ch);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)str;
  }
  pcVar1 = strstr(str,substr);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)str;
  }
  return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 0001187c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  
                    /* Unresolved local var: char * text@[???]
                       Unresolved local var: int result@[???] */
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 00011894 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  
  puts(&DAT_000136a9);
  iVar1 = call_strcpy();
  __printf_chk(1,&DAT_000136cd,iVar1);
  iVar1 = call_strcmp();
  __printf_chk(1,&DAT_000136e8,iVar1);
  __printf_chk(1,&DAT_00013703,0xc);
  iVar1 = call_memcpy();
  __printf_chk(1,&DAT_0001371f,iVar1);
  iVar1 = call_memcmp();
  __printf_chk(1,&DAT_0001373b,iVar1);
  iVar1 = call_printf();
  __printf_chk(1,&DAT_00013757,iVar1);
  iVar1 = call_scanf();
  __printf_chk(1,&DAT_00013773,iVar1);
  iVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_00013790,iVar1);
  iVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_000137ac,iVar1);
  iVar1 = call_malloc_free();
  __printf_chk(1,&DAT_000137c8,iVar1);
  iVar1 = call_memset();
  __printf_chk(1,&DAT_000137e4,iVar1);
  iVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_000137ff,iVar1);
  return;
}



/* Function: param_linux_syscall @ 000119c4 */

int param_linux_syscall(char *pathname)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int fd@[???] */
  iVar1 = syscall(5,pathname,0);
  if (iVar1 < 0) {
                    /* Unresolved local var: int fd@[???] */
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    syscall(6,iVar1);
  }
  return iVar1;
}



/* Function: call_linux_syscall @ 00011a04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = param_linux_syscall("/etc/passwd");
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_win32_api @ 00011a24 */

/* WARNING: Removing unreachable block (ram,0x00011a78) */

int param_win32_api(char *filename)

{
  int iVar1;
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



/* Function: call_win32_api @ 00011a88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 00011a94 */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint uVar2;
  int status;
  int local_14;
  
                    /* Unresolved local var: pid_t pid@[???] */
  local_14 = 0;
  status = (int)prog;
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
                    /* Unresolved local var: pid_t pid@[???] */
      execl(prog,prog,arg);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
                    /* Unresolved local var: pid_t wpid@[???] */
    _Var1 = waitpid(_Var1,&status,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else if ((status & 0x7fU) == 0) {
      uVar2 = status >> 8 & 0xff;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_14 == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_fork_exec @ 00011b34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  if (iVar1 == 0) {
    iVar1 = 0x2a;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: param_pipe_communication @ 00011b58 */

/* WARNING: Removing unreachable block (ram,0x00011c18) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  int pipefd [2];
  char buffer [32];
  
                    /* Unresolved local var: pid_t pid@[???] */
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
                    /* Unresolved local var: char * msg@[???] */
        close(pipefd[0]);
        write(pipefd[1],"HelloPipe",9);
        close(pipefd[1]);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
                    /* Unresolved local var: ssize_t bytes@[???] */
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



/* Function: call_pipe_communication @ 00011c3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [32];
  int iStack_14;
  
  iStack_14 = 0;
  iVar1 = pipe(&iStack_3c);
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
        close(iStack_3c);
        write(iStack_38,"HelloPipe",9);
        close(iStack_38);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(iStack_38);
      sVar3 = read(iStack_3c,auStack_34,0x1f);
      auStack_34[sVar3] = 0;
      close(iStack_3c);
      wait((void *)0x0);
      if (sVar3 < 1) {
        iVar1 = -3;
      }
      else {
        iVar1 = 0x2a;
      }
    }
  }
  if (iStack_14 == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_socket_create @ 00011c40 */

/* WARNING: Removing unreachable block (ram,0x00011cbc) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  int iVar1;
  int iVar2;
  int opt;
  sockaddr_in addr;
  
                    /* Unresolved local var: int sock@[???] */
  iVar1 = socket(2,1,0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    opt = 1;
    iVar2 = setsockopt(iVar1,1,2,&opt,4);
    if (iVar2 < 0) {
      close(iVar1);
      iVar1 = -2;
    }
    else {
      memset(&addr,0,0x10);
      addr.sin_family = 2;
      iVar2 = bind(iVar1,(sockaddr *)&addr,0x10);
      if (iVar2 < 0) {
        close(iVar1);
        iVar1 = -3;
      }
      else {
        iVar2 = listen(iVar1,5);
        if (iVar2 < 0) {
          close(iVar1);
          iVar1 = -4;
        }
        else {
          close(iVar1);
          iVar1 = 0x2a;
        }
      }
    }
  }
  return iVar1;
}



/* Function: call_socket_create @ 00011d3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  sockaddr sStack_1c;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = socket(2,1,0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    uStack_20 = 1;
    iVar2 = setsockopt(iVar1,1,2,&uStack_20,4);
    if (iVar2 < 0) {
      close(iVar1);
      iVar1 = -2;
    }
    else {
      memset(&sStack_1c,0,0x10);
      sStack_1c.sa_family = 2;
      iVar2 = bind(iVar1,&sStack_1c,0x10);
      if (iVar2 < 0) {
        close(iVar1);
        iVar1 = -3;
      }
      else {
        iVar2 = listen(iVar1,5);
        if (iVar2 < 0) {
          close(iVar1);
          iVar1 = -4;
        }
        else {
          close(iVar1);
          iVar1 = 0x2a;
        }
      }
    }
  }
  if (iStack_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_shmget_shmat @ 00011d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__dest;
  size_t sVar2;
  
                    /* Unresolved local var: char * ftok_path@[???]
                       Unresolved local var: int fd@[???]
                       Unresolved local var: key_t key@[???]
                       Unresolved local var: int shmid@[???]
                       Unresolved local var: char * shm@[???]
                       Unresolved local var: int len@[???] */
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
      if (__dest != (char *)0xffffffff) {
        strcpy(__dest,"SharedMemory");
        sVar2 = strlen(__dest);
        shmdt(__dest);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return sVar2;
      }
      return -3;
    }
  }
  return -1;
}



/* Function: call_shmget_shmat @ 00011df4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_shmget_shmat();
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_signal_handling @ 00011e0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
                    /* Unresolved local var: int attempts@[???] */
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -1;
  }
  p_Var1 = signal(0xe,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -2;
  }
  signal_received = 0;
  raise(10);
  iVar2 = 0x3e9;
                    /* Unresolved local var: int attempts@[???] */
  while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    usleep(1000);
  }
  if (signal_received == 0) {
    return -3;
  }
  if (signal_number != 10) {
    return -4;
  }
  signal_received = 0;
  alarm(1);
  iVar2 = 0x7d1;
  while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    usleep(1000);
  }
  if ((signal_received != 0) && (signal_number == 0xe)) {
    signal(10,(__sighandler_t)0x0);
    signal(0xe,(__sighandler_t)0x0);
    return 0x2a;
  }
  return -5;
}



/* Function: call_signal_handling @ 00011f24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -1;
  }
  p_Var1 = signal(0xe,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -2;
  }
  signal_received = 0;
  raise(10);
  iVar2 = 0x3e9;
  while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    usleep(1000);
  }
  if (signal_received == 0) {
    return -3;
  }
  if (signal_number != 10) {
    return -4;
  }
  signal_received = 0;
  alarm(1);
  iVar2 = 0x7d1;
  while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    usleep(1000);
  }
  if ((signal_received != 0) && (signal_number == 0xe)) {
    signal(10,(__sighandler_t)0x0);
    signal(0xe,(__sighandler_t)0x0);
    return 0x2a;
  }
  return -5;
}



/* Function: test_system_calls @ 00011f28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  
  puts(&DAT_0001384e);
  iVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_00013869,iVar1);
  iVar1 = call_win32_api();
  __printf_chk(1,&DAT_00013885,iVar1);
  iVar1 = call_fork_exec();
  __printf_chk(1,&DAT_000138a1,iVar1);
  iVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_000138bd,iVar1);
  iVar1 = param_socket_create();
  __printf_chk(1,&DAT_000138d9,iVar1);
  iVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_000138f5,iVar1);
  iVar1 = param_signal_handling();
  __printf_chk(1,&DAT_00013911,iVar1);
  return;
}



/* Function: param_pthread_create @ 00011fe4 */

int param_pthread_create(int x)

{
  int iVar1;
  void *in_r2;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_c;
  
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
  local_c = 0;
  tid = x;
  input = x;
  thread_ret = in_r2;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    iVar1 = *(int *)thread_ret;
    free(thread_ret);
  }
  else {
    iVar1 = -1;
  }
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_create @ 00012064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: param_pthread_join @ 0001206c */

/* WARNING: Removing unreachable block (ram,0x0001212c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ThreadData *__arg;
  pthread_t *__newthread;
  ThreadData *pTVar4;
  pthread_t *ppVar5;
  pthread_t tids [3];
  ThreadData data [3];
  
                    /* Unresolved local var: int total@[???] */
  pTVar4 = data;
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  data[0].start = 1;
  data[0].end = 10;
  data[0].result = 0;
  data[1].start = 0xb;
  data[1].end = 0x14;
  data[1].result = 0;
  data[2].start = 0x15;
  data[2].end = 0x1e;
  data[2].result = 0;
  __arg = pTVar4;
  __newthread = tids;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      return -1;
    }
    iVar3 = iVar3 + 1;
    __newthread = __newthread + 1;
    __arg = __arg + 1;
    iVar1 = 0;
    ppVar5 = tids;
  } while (iVar3 != 3);
  do {
                    /* Unresolved local var: int i@[???] */
    iVar2 = pthread_join(*ppVar5,(void **)0x0);
    if (iVar2 != 0) {
      return -2;
    }
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + pTVar4->result;
    pTVar4 = pTVar4 + 1;
    ppVar5 = ppVar5 + 1;
  } while (iVar3 != 0);
  return iVar1;
}



/* Function: call_pthread_join @ 00012158 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  pthread_t *__arg;
  pthread_t *__newthread;
  pthread_t *ppVar4;
  pthread_t *ppVar5;
  pthread_t apStack_54 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  ppVar4 = apStack_54 + 3;
  iVar3 = 0;
  iStack_24 = 0;
  apStack_54[3] = 1;
  uStack_44 = 10;
  uStack_40 = 0;
  uStack_3c = 0xb;
  uStack_38 = 0x14;
  uStack_34 = 0;
  uStack_30 = 0x15;
  uStack_2c = 0x1e;
  uStack_28 = 0;
  __arg = ppVar4;
  __newthread = apStack_54;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_00012114;
    }
    iVar3 = iVar3 + 1;
    __newthread = __newthread + 1;
    __arg = __arg + 3;
    iVar1 = 0;
    ppVar5 = apStack_54;
  } while (iVar3 != 3);
  do {
    iVar2 = pthread_join(*ppVar5,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + ppVar4[2];
    ppVar4 = ppVar4 + 3;
    ppVar5 = ppVar5 + 1;
  } while (iVar3 != 0);
LAB_00012114:
  if (iStack_24 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: param_mutex_lock @ 0001215c */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  int local_1c;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int expected@[???] */
  local_1c = iterations_per_thread;
  __ptr = malloc(thread_count << 2);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    shared_counter = 0;
    for (iVar1 = 0; iVar1 < thread_count; iVar1 = iVar1 + 1) {
      iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar1 * 4),(pthread_attr_t *)0x0,
                             thread_increment,&local_1c);
      if (iVar2 != 0) {
        free(__ptr);
        return -2;
      }
    }
                    /* Unresolved local var: int i@[???] */
    for (iVar1 = 0; iVar1 < thread_count; iVar1 = iVar1 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar1 * 4),(void **)0x0);
    }
    free(__ptr);
    if (shared_counter == local_1c * thread_count) {
      iVar1 = 0x2a;
    }
    else {
      iVar1 = -3;
    }
  }
  return iVar1;
}



/* Function: call_mutex_lock @ 00012218 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: param_condition_variable @ 00012224 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  pthread_t in_r0;
  int iVar1;
  pthread_t in_r1;
  void *in_r2;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  int local_c;
  
                    /* Unresolved local var: int result@[???] */
  local_c = 0;
  ready = 0;
  data = 0;
  producer = in_r0;
  consumer = in_r1;
  consumer_ret = in_r2;
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
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_condition_variable @ 000122e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  pthread_t in_r0;
  pthread_t in_r1;
  int *in_r2;
  pthread_t pStack_18;
  pthread_t pStack_14;
  int *piStack_10;
  int iStack_c;
  
  iStack_c = 0;
  ready = 0;
  data = 0;
  pStack_18 = in_r0;
  pStack_14 = in_r1;
  piStack_10 = in_r2;
  iVar1 = pthread_create(&pStack_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(pStack_14,&piStack_10);
      pthread_join(pStack_18,(void **)0x0);
      iVar1 = *piStack_10;
      free(piStack_10);
    }
    else {
      pthread_cancel(pStack_14);
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  if (iStack_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_atomic_ops @ 000122ec */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  pthread_t in_r2;
  int local_24;
  pthread_t load_store_tid;
  int local_1c;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int final_value@[???] */
  local_1c = 0;
  local_24 = iterations;
  load_store_tid = in_r2;
  __ptr = malloc(thread_count << 2);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    __sync_synchronize();
    atomic_counter = 0;
    __sync_synchronize();
                    /* Unresolved local var: int i@[???] */
    for (iVar2 = 0; iVar2 < thread_count; iVar2 = iVar2 + 1) {
      iVar3 = pthread_create((pthread_t *)((int)__ptr + iVar2 * 4),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&local_24);
      if (iVar3 != 0) {
        free(__ptr);
        iVar2 = -2;
        goto LAB_000123b8;
      }
    }
    iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                           (void *)0x0);
    if (iVar2 == 0) {
      pthread_join(load_store_tid,(void **)0x0);
    }
                    /* Unresolved local var: int i@[???] */
    for (iVar2 = 0; iVar2 < thread_count; iVar2 = iVar2 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar2 * 4),(void **)0x0);
    }
    __sync_synchronize();
    aVar1 = atomic_counter;
    __sync_synchronize();
    free(__ptr);
    if (aVar1 < 1) {
      iVar2 = -3;
    }
    else {
      iVar2 = 0x2a;
    }
  }
LAB_000123b8:
  if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_atomic_ops @ 00012408 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: param_thread_local_storage @ 00012414 */

int param_thread_local_storage(int thread_count)

{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *ret;
  int local_24;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: char * * names@[???]
                       Unresolved local var: int total_initial@[???]
                       Unresolved local var: int total_final@[???]
                       Unresolved local var: int expected_initial@[???]
                       Unresolved local var: int expected_final@[???] */
  local_24 = 0;
  __ptr = malloc(thread_count << 2);
  __ptr_00 = malloc(thread_count << 2);
  if (__ptr_00 == (void *)0x0 || __ptr == (void *)0x0) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    for (iVar3 = 0; iVar3 < thread_count; iVar3 = iVar3 + 1) {
      pvVar1 = malloc(0x10);
      *(void **)((int)__ptr_00 + iVar3 * 4) = pvVar1;
      __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar3);
    }
                    /* Unresolved local var: int i@[???] */
    for (iVar3 = 0; iVar3 < thread_count; iVar3 = iVar3 + 1) {
      iVar4 = pthread_create((pthread_t *)((int)__ptr + iVar3 * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)__ptr_00 + iVar3 * 4));
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)((int)__ptr_00 + -4);
        do {
          puVar2 = puVar2 + 1;
                    /* Unresolved local var: int j@[???] */
          free((void *)*puVar2);
        } while (puVar2 != (undefined4 *)((int)__ptr_00 + iVar3 * 4));
        free(__ptr_00);
        free(__ptr);
        iVar3 = -2;
        goto LAB_00012540;
      }
    }
    iVar4 = 0;
    iVar5 = 0;
                    /* Unresolved local var: int i@[???] */
    for (iVar3 = 0; iVar3 < thread_count; iVar3 = iVar3 + 1) {
                    /* Unresolved local var: int * values@[???] */
      pthread_join(*(pthread_t *)((int)__ptr + iVar3 * 4),&ret);
      iVar5 = iVar5 + *(int *)ret;
      iVar4 = iVar4 + *(int *)((int)ret + 4);
      free(ret);
      free(*(void **)((int)__ptr_00 + iVar3 * 4));
    }
    free(__ptr_00);
    free(__ptr);
    if (thread_count * 100 - iVar5 == 0 && thread_count * 0x96 - iVar4 == 0) {
      iVar3 = 0x2a;
    }
    else {
      iVar3 = -3;
    }
  }
LAB_00012540:
  if (local_24 == 0) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 000125ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 000125b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  
  puts(&DAT_00013937);
  iVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00013955,iVar1);
  iVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00013971,iVar1);
  iVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_0001398e,iVar1);
  iVar1 = param_condition_variable();
  __printf_chk(1,&DAT_000139aa,iVar1);
  iVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_000139c6,iVar1);
  iVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_000139e2,iVar1);
  return;
}



/* Function: __sync_fetch_and_add_4 @ 00012658 */

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



/* Function: __sync_fetch_and_sub_4 @ 00012690 */

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



/* Function: __sync_fetch_and_or_4 @ 000126c8 */

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



/* Function: __sync_fetch_and_and_4 @ 00012700 */

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



/* Function: __sync_fetch_and_xor_4 @ 00012738 */

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



/* Function: __sync_fetch_and_nand_4 @ 00012770 */

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



/* Function: __sync_fetch_and_add_2 @ 000127ac */

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



/* Function: __sync_fetch_and_sub_2 @ 0001280c */

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



/* Function: __sync_fetch_and_or_2 @ 0001286c */

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



/* Function: __sync_fetch_and_and_2 @ 000128cc */

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



/* Function: __sync_fetch_and_xor_2 @ 0001292c */

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



/* Function: __sync_fetch_and_nand_2 @ 0001298c */

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



/* Function: __sync_fetch_and_add_1 @ 000129f0 */

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



/* Function: __sync_fetch_and_sub_1 @ 00012a4c */

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



/* Function: __sync_fetch_and_or_1 @ 00012aa8 */

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



/* Function: __sync_fetch_and_and_1 @ 00012b04 */

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



/* Function: __sync_fetch_and_xor_1 @ 00012b60 */

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



/* Function: __sync_fetch_and_nand_1 @ 00012bbc */

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



/* Function: __sync_add_and_fetch_4 @ 00012c1c */

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



/* Function: __sync_sub_and_fetch_4 @ 00012c54 */

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



/* Function: __sync_or_and_fetch_4 @ 00012c8c */

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



/* Function: __sync_and_and_fetch_4 @ 00012cc4 */

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



/* Function: __sync_xor_and_fetch_4 @ 00012cfc */

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



/* Function: __sync_nand_and_fetch_4 @ 00012d34 */

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



/* Function: __sync_add_and_fetch_2 @ 00012d70 */

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



/* Function: __sync_sub_and_fetch_2 @ 00012dd8 */

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



/* Function: __sync_or_and_fetch_2 @ 00012e40 */

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



/* Function: __sync_and_and_fetch_2 @ 00012ea8 */

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



/* Function: __sync_xor_and_fetch_2 @ 00012f10 */

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



/* Function: __sync_nand_and_fetch_2 @ 00012f78 */

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



/* Function: __sync_add_and_fetch_1 @ 00012fe4 */

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



/* Function: __sync_sub_and_fetch_1 @ 00013048 */

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



/* Function: __sync_or_and_fetch_1 @ 000130ac */

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



/* Function: __sync_and_and_fetch_1 @ 00013110 */

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



/* Function: __sync_xor_and_fetch_1 @ 00013174 */

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



/* Function: __sync_nand_and_fetch_1 @ 000131d8 */

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



/* Function: __sync_val_compare_and_swap_4 @ 00013240 */

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



/* Function: __sync_val_compare_and_swap_2 @ 00013290 */

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



/* Function: __sync_val_compare_and_swap_1 @ 00013308 */

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



/* Function: __sync_bool_compare_and_swap_4 @ 0001337c */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 000133a8 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000133c4 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 000133ec */

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



/* Function: __sync_lock_test_and_set_2 @ 00013424 */

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



/* Function: __sync_lock_test_and_set_1 @ 00013484 */

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



/* Function: __sync_lock_release_8 @ 000134e0 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 00013504 */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 00013524 */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 00013544 */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 00013578 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 119 */
