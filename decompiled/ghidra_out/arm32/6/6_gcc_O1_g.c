/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_gcc_O1_g
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



/* Function: _start @ 00010f90 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010fd4 */

/* WARNING: Removing unreachable block (ram,0x00010fe8) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010ff8 */

/* WARNING: Removing unreachable block (ram,0x00011008) */
/* WARNING: Removing unreachable block (ram,0x00011010) */
/* WARNING: Removing unreachable block (ram,0x00011014) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011024 */

/* WARNING: Removing unreachable block (ram,0x00011040) */
/* WARNING: Removing unreachable block (ram,0x00011048) */
/* WARNING: Removing unreachable block (ram,0x0001104c) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 0001105c */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: signal_handler @ 00011088 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 000110a0 */

void * thread_sum(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: ThreadData * data@[DW_OP_reg0(r0)] */
  *(undefined4 *)((int)arg + 8) = 0;
                    /* Unresolved local var: int i@[???] */
  iVar2 = *(int *)arg;
  if (iVar2 <= *(int *)((int)arg + 4)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)((int)arg + 4) + 1);
    *(int *)((int)arg + 8) = iVar1;
  }
  return (void *)0x0;
}



/* Function: thread_compute @ 000110dc */

void * thread_compute(void *arg)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int * input@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: int * ret@[???] */
  iVar2 = *(int *)arg;
  piVar1 = malloc(4);
  *piVar1 = iVar2 * iVar2;
  return piVar1;
}



/* Function: thread_increment @ 00011100 */

void * thread_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int iterations@[???] */
  iVar2 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
      usleep(1000);
      iVar1 = iVar1 + 1;
    } while (iVar2 != iVar1);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 0001115c */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int received@[???]
                       Unresolved local var: int * ret@[???] */
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

/* WARNING: Removing unreachable block (ram,0x0001128c) */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  int iVar2;
  int expected;
  
                    /* Unresolved local var: int iterations@[???] */
  iVar2 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar2) {
    iVar1 = 0;
                    /* Unresolved local var: int desired@[???] */
    do {
      __sync_fetch_and_add_4(&atomic_counter,1);
      __sync_val_compare_and_swap_4(&atomic_counter,iVar1,iVar1 + 1000);
      iVar1 = iVar1 + 1;
    } while (iVar2 != iVar1);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00011298 */

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



/* Function: thread_tls_test @ 000112c8 */

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



/* Function: param_strcpy @ 00011310 */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return sVar1;
}



/* Function: call_strcpy @ 00011328 */

/* WARNING: Removing unreachable block (ram,0x0001136c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  int iVar1;
  char buffer [32];
  
                    /* Unresolved local var: int len@[???] */
  iVar1 = param_strcpy(buffer,"HelloLib");
  return iVar1;
}



/* Function: param_strcmp @ 00011378 */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = strcmp(s1,s2);
  if (iVar1 < 1) {
    iVar1 = iVar1 >> 0x1f;
  }
  else {
    iVar1 = 1;
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
  
                    /* Unresolved local var: size_t len@[???] */
  sVar1 = strlen(str);
  return sVar1;
}



/* Function: call_strlen @ 000113ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
                    /* Unresolved local var: char * test@[???] */
  return 0xc;
}



/* Function: param_memcpy @ 000113f4 */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 00011408 */

/* WARNING: Removing unreachable block (ram,0x00011494) */
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



/* Function: param_memcmp @ 000114a0 */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = memcmp(p1,p2,n);
  if (iVar1 < 1) {
    iVar1 = iVar1 >> 0x1f;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_memcmp @ 000114b8 */

/* WARNING: Removing unreachable block (ram,0x00011548) */
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



/* Function: param_printf @ 00011554 */

int param_printf(int x,char *name)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00011574 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
                    /* Unresolved local var: int chars@[???] */
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 0001158c */

int param_scanf(char *input_str)

{
  int iVar1;
  int a;
  int b;
  int local_c;
  
                    /* Unresolved local var: int ret@[???] */
  local_c = 0;
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
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



/* Function: call_scanf @ 000115f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00011608 */

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



/* Function: call_fopen_fclose @ 00011644 */

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



/* Function: param_fread_fwrite @ 00011664 */

/* WARNING: Removing unreachable block (ram,0x0001174c) */

int param_fread_fwrite(char *tmpfile)

{
  FILE *__s;
  size_t sVar1;
  int iVar2;
  char read_buffer [32];
  
                    /* Unresolved local var: char * write_data@[???]
                       Unresolved local var: FILE * fp@[???]
                       Unresolved local var: size_t written@[???]
                       Unresolved local var: size_t read@[???] */
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar2 = -1;
  }
  else {
    sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar1 == 0x12) {
      rewind(__s);
                    /* Unresolved local var: size_t sz@[???] */
      sVar1 = fread(read_buffer,1,0x12,__s);
      read_buffer[sVar1] = '\0';
      fclose(__s);
      unlink(tmpfile);
      if (sVar1 == 0x12) {
        iVar2 = strcmp(read_buffer,"BinBench Test Data");
        if (iVar2 == 0) {
          iVar2 = 0x2a;
        }
        else {
          iVar2 = -3;
        }
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
  return iVar2;
}



/* Function: call_fread_fwrite @ 0001175c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00011770 */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(size * 4);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: size_t i@[???] */
    if (size != 0) {
      piVar1 = __ptr + -1;
      iVar2 = 0;
      do {
        piVar1 = piVar1 + 1;
        *piVar1 = iVar2;
        iVar2 = iVar2 + 10;
      } while (piVar1 != __ptr + (size - 1));
    }
    iVar2 = __ptr[size - 1] + *__ptr;
    free(__ptr);
  }
  return iVar2;
}



/* Function: call_malloc_free @ 000117d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 000117e8 */

int param_memset(void *buffer,size_t size)

{
  int iVar1;
  byte *pbVar2;
  
                    /* Unresolved local var: uchar * bytes@[???]
                       Unresolved local var: int sum@[???] */
  memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  if (size != 0) {
    pbVar2 = (byte *)((int)buffer + -1);
    iVar1 = 0;
    do {
      pbVar2 = pbVar2 + 1;
      iVar1 = iVar1 + (uint)*pbVar2;
    } while (pbVar2 != (byte *)((int)buffer + (size - 1)));
    return iVar1;
  }
  return 0;
}



/* Function: call_memset @ 00011834 */

/* WARNING: Removing unreachable block (ram,0x0001189c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  int *piVar1;
  int iStack_38;
  int buffer [10];
  
  piVar1 = &iStack_38;
                    /* Unresolved local var: int i@[???] */
  do {
    piVar1 = piVar1 + 1;
    *piVar1 = 0xff;
  } while (piVar1 != buffer + 9);
  param_memset(buffer,0x28);
  return buffer[0] + buffer[9];
}



/* Function: param_strchr_strstr @ 000118a4 */

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



/* Function: call_strchr_strstr @ 000118e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  
                    /* Unresolved local var: char * text@[???]
                       Unresolved local var: int result@[???] */
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 00011900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  
  puts(&DAT_000138f0);
  iVar1 = call_strcpy();
  __printf_chk(1,&DAT_00013914,iVar1);
  iVar1 = call_strcmp();
  __printf_chk(1,&DAT_00013930,iVar1);
  iVar1 = call_strlen();
  __printf_chk(1,&DAT_0001394c,iVar1);
  iVar1 = call_memcpy();
  __printf_chk(1,&DAT_00013968,iVar1);
  iVar1 = call_memcmp();
  __printf_chk(1,&DAT_00013984,iVar1);
  iVar1 = call_printf();
  __printf_chk(1,&DAT_000139a0,iVar1);
  iVar1 = call_scanf();
  __printf_chk(1,&DAT_000139bc,iVar1);
  iVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_000139dc,iVar1);
  iVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_000139f8,iVar1);
  iVar1 = call_malloc_free();
  __printf_chk(1,&DAT_00013a14,iVar1);
  iVar1 = call_memset();
  __printf_chk(1,&DAT_00013a30,iVar1);
  iVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_00013a4c,iVar1);
  return;
}



/* Function: param_linux_syscall @ 00011a34 */

int param_linux_syscall(char *pathname)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int fd@[???] */
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



/* Function: call_linux_syscall @ 00011a74 */

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



/* Function: param_win32_api @ 00011a94 */

/* WARNING: Removing unreachable block (ram,0x00011af4) */

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



/* Function: call_win32_api @ 00011afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 00011b10 */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint uVar2;
  int status;
  int local_14;
  
                    /* Unresolved local var: pid_t pid@[???] */
  local_14 = 0;
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
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_fork_exec @ 00011bb8 */

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



/* Function: param_pipe_communication @ 00011bdc */

/* WARNING: Removing unreachable block (ram,0x00011cb4) */
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



/* Function: call_pipe_communication @ 00011cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 00011ccc */

/* WARNING: Removing unreachable block (ram,0x00011dd0) */
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
      addr.sin_addr.s_addr = 0;
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



/* Function: call_socket_create @ 00011dd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 00011de4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  
                    /* Unresolved local var: char * ftok_path@[???]
                       Unresolved local var: int fd@[???]
                       Unresolved local var: key_t key@[???]
                       Unresolved local var: int shmid@[???]
                       Unresolved local var: char * shm@[???]
                       Unresolved local var: int len@[???] */
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



/* Function: call_shmget_shmat @ 00011eb0 */

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



/* Function: param_signal_handling @ 00011ec8 */

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
  if (signal_received == 0) {
    iVar2 = 1000;
    do {
      usleep(1000);
      if (signal_received != 0) break;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (signal_received == 0) {
    return -3;
  }
  if (signal_number != 10) {
    return -4;
  }
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
    return -5;
  }
  if (signal_number == 0xe) {
    signal(10,(__sighandler_t)0x0);
    signal(0xe,(__sighandler_t)0x0);
    return 0x2a;
  }
  return -5;
}



/* Function: call_signal_handling @ 0001201c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 00012028 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  
  puts(&DAT_00013aa4);
  iVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_00013ac0,iVar1);
  iVar1 = call_win32_api();
  __printf_chk(1,&DAT_00013adc,iVar1);
  iVar1 = call_fork_exec();
  __printf_chk(1,&DAT_00013af8,iVar1);
  iVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_00013b14,iVar1);
  iVar1 = param_socket_create();
  __printf_chk(1,&DAT_00013b30,iVar1);
  iVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_00013b4c,iVar1);
  iVar1 = param_signal_handling();
  __printf_chk(1,&DAT_00013b68,iVar1);
  return;
}



/* Function: param_pthread_create @ 000120e4 */

int param_pthread_create(int x)

{
  int iVar1;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_c;
  
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
  local_c = 0;
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
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_create @ 0001216c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: param_pthread_join @ 0001217c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  ThreadData *__arg;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  ThreadData *pTVar5;
  pthread_t tids [3];
  ThreadData data [3];
  int local_2c;
  
                    /* Unresolved local var: int total@[???] */
  local_2c = 0;
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
  pTVar5 = data;
  __arg = pTVar5;
  ppVar3 = tids;
  do {
    iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_0001222c;
    }
    ppVar3 = ppVar3 + 1;
    __arg = __arg + 1;
  } while (__arg != (ThreadData *)&local_2c);
  iVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  ppVar3 = tids;
  do {
    ppVar4 = ppVar3 + 1;
    iVar2 = pthread_join(*ppVar3,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar1 = iVar1 + pTVar5->result;
    pTVar5 = pTVar5 + 1;
    ppVar3 = ppVar4;
  } while ((ThreadData *)ppVar4 != data);
LAB_0001222c:
  if (local_2c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_join @ 00012270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: param_mutex_lock @ 0001227c */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  pthread_t *__ptr;
  int iVar1;
  pthread_t *ppVar2;
  int iVar3;
  bool bVar4;
  int local_24;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int expected@[???] */
  local_24 = iterations_per_thread;
  __ptr = malloc(thread_count << 2);
  if (__ptr == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    shared_counter = 0;
                    /* Unresolved local var: int i@[???] */
    if (0 < thread_count) {
      ppVar2 = __ptr;
      iVar1 = 0;
      do {
        iVar3 = iVar1;
        iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_increment,&local_24);
        if (iVar1 != 0) {
          free(__ptr);
          return -2;
        }
        iVar1 = iVar3 + 1;
        ppVar2 = ppVar2 + 1;
      } while (thread_count != iVar1);
      ppVar2 = __ptr + -1;
      iVar1 = 0;
                    /* Unresolved local var: int i@[???] */
      do {
        ppVar2 = ppVar2 + 1;
        pthread_join(*ppVar2,(void **)0x0);
        bVar4 = iVar3 != iVar1;
        iVar1 = iVar1 + 1;
      } while (bVar4);
    }
    free(__ptr);
    if (shared_counter == local_24 * thread_count) {
      iVar1 = 0x2a;
    }
    else {
      iVar1 = -3;
    }
  }
  return iVar1;
}



/* Function: call_mutex_lock @ 00012360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: param_condition_variable @ 00012374 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  int local_c;
  
                    /* Unresolved local var: int result@[???] */
  local_c = 0;
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
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_condition_variable @ 00012444 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: param_atomic_ops @ 00012450 */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  pthread_t *__ptr;
  int iVar2;
  pthread_t *ppVar3;
  int iVar4;
  int local_2c;
  pthread_t load_store_tid;
  int local_24;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int final_value@[???] */
  local_24 = 0;
  local_2c = iterations;
  __ptr = malloc(thread_count << 2);
  if (__ptr == (pthread_t *)0x0) {
    iVar4 = -1;
  }
  else {
    __sync_synchronize();
    atomic_counter = 0;
    __sync_synchronize();
                    /* Unresolved local var: int i@[???] */
    if (thread_count < 1) {
      iVar4 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar4 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
    }
    else {
      iVar4 = 0;
      ppVar3 = __ptr;
      do {
        iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_2c);
        if (iVar2 != 0) {
          free(__ptr);
          iVar4 = -2;
          goto LAB_00012538;
        }
        iVar4 = iVar4 + 1;
        ppVar3 = ppVar3 + 1;
      } while (thread_count != iVar4);
      iVar4 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar4 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
      ppVar3 = __ptr + -1;
      iVar4 = 0;
                    /* Unresolved local var: int i@[???] */
      do {
        ppVar3 = ppVar3 + 1;
        pthread_join(*ppVar3,(void **)0x0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < thread_count);
    }
    __sync_synchronize();
    aVar1 = atomic_counter;
    __sync_synchronize();
    free(__ptr);
    if (aVar1 < 1) {
      iVar4 = -3;
    }
    else {
      iVar4 = 0x2a;
    }
  }
LAB_00012538:
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: call_atomic_ops @ 000125c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: param_thread_local_storage @ 000125d4 */

int param_thread_local_storage(int thread_count)

{
  pthread_t *__ptr;
  void *__ptr_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  pthread_t *ppVar7;
  undefined4 *puVar8;
  bool bVar9;
  void *ret;
  int local_2c;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: char * * names@[???]
                       Unresolved local var: int total_initial@[???]
                       Unresolved local var: int total_final@[???]
                       Unresolved local var: int expected_initial@[???]
                       Unresolved local var: int expected_final@[???] */
  local_2c = 0;
  __ptr = malloc(thread_count << 2);
  __ptr_00 = malloc(thread_count << 2);
  if (__ptr_00 == (void *)0x0 || __ptr == (pthread_t *)0x0) {
    iVar4 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (thread_count < 1) {
      iVar4 = 0;
      iVar2 = iVar4;
    }
    else {
      puVar8 = (undefined4 *)((int)__ptr_00 + -4);
      iVar4 = 0;
      puVar6 = puVar8;
      do {
        iVar3 = iVar4;
        pvVar1 = malloc(0x10);
        puVar6 = puVar6 + 1;
        *puVar6 = pvVar1;
        __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar3);
        iVar4 = iVar3 + 1;
      } while (thread_count != iVar3 + 1);
      iVar4 = 0;
      ppVar7 = __ptr;
      puVar6 = puVar8;
                    /* Unresolved local var: int i@[???] */
      do {
        puVar6 = puVar6 + 1;
        iVar2 = pthread_create(ppVar7,(pthread_attr_t *)0x0,thread_tls_test,(void *)*puVar6);
        if (iVar2 != 0) {
                    /* Unresolved local var: int j@[???] */
          if (-1 < iVar4) {
            do {
              puVar8 = puVar8 + 1;
              free((void *)*puVar8);
            } while (puVar8 != (undefined4 *)((int)__ptr_00 + iVar4 * 4));
          }
          free(__ptr_00);
          free(__ptr);
          iVar4 = -2;
          goto LAB_00012740;
        }
        ppVar7 = ppVar7 + 1;
        bVar9 = iVar3 != iVar4;
        iVar4 = iVar4 + 1;
      } while (bVar9);
      ppVar7 = __ptr + -1;
      iVar4 = 0;
      iVar5 = 0;
      iVar2 = 0;
      do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int * values@[???] */
        ppVar7 = ppVar7 + 1;
        pthread_join(*ppVar7,&ret);
        iVar4 = iVar4 + *(int *)ret;
        iVar2 = iVar2 + *(int *)((int)ret + 4);
        free(ret);
        puVar8 = puVar8 + 1;
        free((void *)*puVar8);
        bVar9 = iVar3 != iVar5;
        iVar5 = iVar5 + 1;
      } while (bVar9);
    }
    free(__ptr_00);
    free(__ptr);
    if (iVar2 == thread_count * 0x96 && iVar4 == thread_count * 100) {
      iVar4 = 0x2a;
    }
    else {
      iVar4 = -3;
    }
  }
LAB_00012740:
  if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: call_thread_local_storage @ 000127bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 000127cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  
  puts(&DAT_00013b90);
  iVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00013bb0,iVar1);
  iVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00013bcc,iVar1);
  iVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_00013bec,iVar1);
  iVar1 = param_condition_variable();
  __printf_chk(1,&DAT_00013c08,iVar1);
  iVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_00013c24,iVar1);
  iVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_00013c40,iVar1);
  return;
}



/* Function: main @ 00012870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __sync_fetch_and_add_4 @ 00012888 */

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



/* Function: __sync_fetch_and_sub_4 @ 000128c0 */

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



/* Function: __sync_fetch_and_or_4 @ 000128f8 */

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



/* Function: __sync_fetch_and_and_4 @ 00012930 */

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



/* Function: __sync_fetch_and_xor_4 @ 00012968 */

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



/* Function: __sync_fetch_and_nand_4 @ 000129a0 */

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



/* Function: __sync_fetch_and_add_2 @ 000129dc */

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



/* Function: __sync_fetch_and_sub_2 @ 00012a3c */

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



/* Function: __sync_fetch_and_or_2 @ 00012a9c */

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



/* Function: __sync_fetch_and_and_2 @ 00012afc */

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



/* Function: __sync_fetch_and_xor_2 @ 00012b5c */

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



/* Function: __sync_fetch_and_nand_2 @ 00012bbc */

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



/* Function: __sync_fetch_and_add_1 @ 00012c20 */

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



/* Function: __sync_fetch_and_sub_1 @ 00012c7c */

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



/* Function: __sync_fetch_and_or_1 @ 00012cd8 */

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



/* Function: __sync_fetch_and_and_1 @ 00012d34 */

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



/* Function: __sync_fetch_and_xor_1 @ 00012d90 */

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



/* Function: __sync_fetch_and_nand_1 @ 00012dec */

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



/* Function: __sync_add_and_fetch_4 @ 00012e4c */

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



/* Function: __sync_sub_and_fetch_4 @ 00012e84 */

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



/* Function: __sync_or_and_fetch_4 @ 00012ebc */

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



/* Function: __sync_and_and_fetch_4 @ 00012ef4 */

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



/* Function: __sync_xor_and_fetch_4 @ 00012f2c */

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



/* Function: __sync_nand_and_fetch_4 @ 00012f64 */

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



/* Function: __sync_add_and_fetch_2 @ 00012fa0 */

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



/* Function: __sync_sub_and_fetch_2 @ 00013008 */

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



/* Function: __sync_or_and_fetch_2 @ 00013070 */

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



/* Function: __sync_and_and_fetch_2 @ 000130d8 */

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



/* Function: __sync_xor_and_fetch_2 @ 00013140 */

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



/* Function: __sync_nand_and_fetch_2 @ 000131a8 */

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



/* Function: __sync_add_and_fetch_1 @ 00013214 */

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



/* Function: __sync_sub_and_fetch_1 @ 00013278 */

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



/* Function: __sync_or_and_fetch_1 @ 000132dc */

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



/* Function: __sync_and_and_fetch_1 @ 00013340 */

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



/* Function: __sync_xor_and_fetch_1 @ 000133a4 */

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



/* Function: __sync_nand_and_fetch_1 @ 00013408 */

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



/* Function: __sync_val_compare_and_swap_4 @ 00013470 */

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



/* Function: __sync_val_compare_and_swap_2 @ 000134c0 */

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



/* Function: __sync_val_compare_and_swap_1 @ 00013538 */

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



/* Function: __sync_bool_compare_and_swap_4 @ 000135ac */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 000135d8 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000135f4 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 0001361c */

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



/* Function: __sync_lock_test_and_set_2 @ 00013654 */

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



/* Function: __sync_lock_test_and_set_1 @ 000136b4 */

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



/* Function: __sync_lock_release_8 @ 00013710 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 00013734 */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 00013754 */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 00013774 */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 000137a8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 119 */
