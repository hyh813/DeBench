/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/6/6_gcc_O2_g
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



/* Function: main @ 00102760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _start @ 00102790 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001027c0 */

/* WARNING: Removing unreachable block (ram,0x001027d3) */
/* WARNING: Removing unreachable block (ram,0x001027df) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001027f0 */

/* WARNING: Removing unreachable block (ram,0x00102814) */
/* WARNING: Removing unreachable block (ram,0x00102820) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102830 */

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



/* Function: signal_handler @ 00102880 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 001028a0 */

void * thread_sum(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  iVar1 = *(int *)arg;
  *(undefined4 *)((long)arg + 8) = 0;
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



/* Function: thread_compute @ 001028d0 */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: thread_increment @ 001028f0 */

void * thread_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
      usleep(1000);
    } while (iVar1 != iVar2);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 00102950 */

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



/* Function: producer_thread @ 001029c0 */

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



/* Function: thread_atomic_increment @ 00102a10 */

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



/* Function: thread_atomic_load_store @ 00102a50 */

void * thread_atomic_load_store(void *arg)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: thread_tls_test @ 00102a70 */

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



/* Function: param_strcpy @ 00102ac0 */

int param_strcpy(char *dst,char *src)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(dst,src);
  return (int)pcVar1 - (int)dst;
}



/* Function: call_strcpy @ 00102ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  return 8;
}



/* Function: param_strcmp @ 00102af0 */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(s1,s2);
  iVar2 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar2 = 1;
  }
  return iVar2;
}



/* Function: call_strcmp @ 00102b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  return 0;
}



/* Function: param_strlen @ 00102b30 */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return (int)sVar1;
}



/* Function: call_strlen @ 00102b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00102b60 */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return (int)n;
}



/* Function: call_memcpy @ 00102b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  return 0x5a;
}



/* Function: param_memcmp @ 00102b90 */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = memcmp(p1,p2,n);
  iVar2 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar2 = 1;
  }
  return iVar2;
}



/* Function: call_memcmp @ 00102bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
                    /* Unresolved local var: int ret@[???] */
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
  iVar3 = memcmp(arr1,arr2,0xc);
                    /* Unresolved local var: int ret@[???] */
  iVar2 = -(uint)(iVar3 != 0);
  if (0 < iVar3) {
    iVar2 = 1;
  }
  iVar3 = memcmp(arr1,arr3,0xc);
  iVar4 = -(uint)(iVar3 != 0);
  if (0 < iVar3) {
    iVar4 = 1;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_printf @ 00102c80 */

int param_printf(int x,char *name)

{
  int iVar1;
  
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00102ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105019);
  return iVar1;
}



/* Function: param_scanf @ 00102cd0 */

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



/* Function: call_scanf @ 00102d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int a;
  int b;
  long local_10;
  
                    /* Unresolved local var: int ret@[???] */
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
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



/* Function: param_fopen_fclose @ 00102da0 */

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



/* Function: call_fopen_fclose @ 00102df0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  FILE *__stream;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: int fd@[???] */
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    if (-1 < iVar1) {
      return 0x2a;
    }
  }
  return -1;
}



/* Function: param_fread_fwrite @ 00102e50 */

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
      if ((((sVar3 != 0x12) ||
           (read_buffer._8_8_ != 0x6144207473655420 || read_buffer._0_8_ != 0x68636e65426e6942)) ||
          (read_buffer._16_2_ != 0x6174)) || (iVar2 = 0x2a, read_buffer[0x12] != '\0')) {
        iVar2 = -3;
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



/* Function: call_fread_fwrite @ 00102f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00102f70 */

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
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + 10;
      } while (piVar2 != __ptr + size);
    }
    iVar1 = *__ptr + __ptr[size - 1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00102fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    piVar1 = __ptr;
    do {
                    /* Unresolved local var: size_t i@[???] */
      *piVar1 = iVar2;
      iVar2 = iVar2 + 10;
      piVar1 = piVar1 + 1;
    } while (iVar2 != 100);
    iVar2 = __ptr[9] + *__ptr;
    free(__ptr);
  }
  return iVar2;
}



/* Function: param_memset @ 00103030 */

int param_memset(void *buffer,size_t size)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  if (size != 0) {
    pbVar1 = pbVar4 + size;
    iVar3 = 0;
    do {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 + (uint)bVar2;
    } while (pbVar4 != pbVar1);
    return iVar3;
  }
  return 0;
}



/* Function: call_memset @ 00103070 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  return 0;
}



/* Function: param_strchr_strstr @ 00103080 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = strchr(str,(int)ch);
  iVar3 = (int)pcVar2 - (int)str;
  if (pcVar2 == (char *)0x0) {
    iVar3 = -1;
  }
  pcVar2 = strstr(str,substr);
  iVar1 = -1;
  if (pcVar2 != (char *)0x0) {
    iVar1 = (int)pcVar2 - (int)str;
  }
  return iVar3 + iVar1;
}



/* Function: call_strchr_strstr @ 001030e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  return 0xf;
}



/* Function: test_standard_library_functions @ 001030f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  undefined4 uVar2;
  FILE *__stream;
  int *__ptr;
  int *piVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int a;
  int b;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00105390);
  __printf_chk(1,&DAT_00105067,8);
  call_strcmp();
  __printf_chk();
  __printf_chk(1,&DAT_0010509d,0xc);
  __printf_chk(1,&DAT_001050b9,0x5a);
  iVar1 = call_memcmp();
  __printf_chk(1,&DAT_001050d5,iVar1);
                    /* Unresolved local var: int chars@[???]
                       Unresolved local var: int ret@[???] */
  uVar2 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105019);
  __printf_chk(1,&DAT_001050f1,uVar2);
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
  if (iVar1 == 2) {
    iVar1 = b + a;
  }
  else {
    iVar1 = -1;
  }
  __printf_chk(1,&DAT_0010510d,iVar1);
                    /* Unresolved local var: int fd@[???]
                       Unresolved local var: FILE * fp@[???] */
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    uVar4 = 0x2a;
    if (-1 < iVar1) goto LAB_0010324b;
  }
  uVar4 = 0xffffffff;
LAB_0010324b:
  __printf_chk(1,&DAT_0010512a,uVar4);
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  __printf_chk(1,&DAT_00105146,iVar1);
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    piVar3 = __ptr;
    do {
                    /* Unresolved local var: size_t i@[???] */
      *piVar3 = iVar1;
      iVar1 = iVar1 + 10;
      piVar3 = piVar3 + 1;
    } while (iVar1 != 100);
    iVar1 = __ptr[9] + *__ptr;
    free(__ptr);
  }
  __printf_chk(1,&DAT_00105162,iVar1);
  call_memset();
  __printf_chk();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_00105199,0xf);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_linux_syscall @ 00103340 */

int param_linux_syscall(char *pathname)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = syscall(2,pathname,0);
  if (-1 < (int)uVar1) {
    syscall(3,uVar1 & 0xffffffff);
    return (int)uVar1;
  }
                    /* Unresolved local var: int fd@[???] */
  piVar2 = __errno_location();
  return -*piVar2;
}



/* Function: call_linux_syscall @ 00103390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
                    /* Unresolved local var: int fd@[???] */
  uVar2 = syscall(2,"/etc/passwd",0);
  if (-1 < (int)uVar2) {
    syscall(3,uVar2 & 0xffffffff);
    return 0x2a;
  }
                    /* Unresolved local var: int fd@[???] */
  piVar3 = __errno_location();
  iVar1 = 0x2a;
  if (0 < *piVar3) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: param_win32_api @ 001033f0 */

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



/* Function: call_win32_api @ 00103460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = stat("/etc/passwd",(stat *)&st);
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



/* Function: param_fork_exec @ 001034d0 */

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



/* Function: call_fork_exec @ 00103570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 001035a0 */

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



/* Function: call_pipe_communication @ 00103690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 001036a0 */

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
      addr._2_14_ = SUB1614((undefined1  [16])0x0,2);
      addr.sin_family = 2;
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



/* Function: call_socket_create @ 001037a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 001037b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  undefined8 *__shmaddr;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        return -2;
      }
      __shmaddr = shmat(iVar1,(void *)0x0,0);
      if (__shmaddr != (undefined8 *)0xffffffffffffffff) {
        *(undefined4 *)(__shmaddr + 1) = 0x79726f6d;
        *__shmaddr = 0x654d646572616853;
        *(undefined1 *)((long)__shmaddr + 0xc) = 0;
        shmdt(__shmaddr);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return 0xc;
      }
      return -3;
    }
  }
  return -1;
}



/* Function: call_shmget_shmat @ 00103870 */

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



/* Function: param_signal_handling @ 001038a0 */

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
                    /* Unresolved local var: int attempts@[???] */
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



/* Function: call_signal_handling @ 001039e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 001039f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  stat st;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int fd@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001051db);
  uVar3 = syscall(2,"/etc/passwd",0);
  if ((int)uVar3 < 0) {
                    /* Unresolved local var: int fd@[???] */
    piVar4 = __errno_location();
    uVar5 = 0x2a;
    if (0 < *piVar4) {
      uVar5 = 0xffffffff;
    }
  }
  else {
    syscall(3,uVar3 & 0xffffffff);
    uVar5 = 0x2a;
  }
  __printf_chk(1,&DAT_001051f6,uVar5);
  iVar2 = stat("/etc/passwd",(stat *)&st);
  if (iVar2 < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0x2a;
    if (st.st_size < 1) {
      uVar5 = 0xfffffffe;
    }
  }
  __printf_chk(1,&DAT_00105212,uVar5);
                    /* Unresolved local var: int ret@[???] */
  iVar2 = param_fork_exec("/bin/true",(char *)0x0);
  __printf_chk(1,&DAT_0010522e,(-(uint)(iVar2 == 0) & 0x2b) - 1);
  iVar2 = param_pipe_communication();
  __printf_chk(1,&DAT_0010524a,iVar2);
  iVar2 = param_socket_create();
  __printf_chk(1,&DAT_00105266,iVar2);
                    /* Unresolved local var: int ret@[???] */
  iVar2 = param_shmget_shmat();
  uVar5 = 0x2a;
  if (iVar2 < 1) {
    uVar5 = 0xffffffff;
  }
  __printf_chk(1,&DAT_00105282,uVar5);
  param_signal_handling();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __printf_chk(1,&DAT_0010529e);
  return;
}



/* Function: param_pthread_create @ 00103b90 */

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



/* Function: call_pthread_create @ 00103c10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int input;
  pthread_t tid;
  void *thread_ret;
  long local_10;
  
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  input = 7;
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



/* Function: param_pthread_join @ 00103ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  ThreadData *__arg;
  long lVar3;
  long lVar4;
  pthread_t *__newthread;
  long in_FS_OFFSET;
  pthread_t tids [3];
  ThreadData data [3];
  ThreadData local_44;
  
  __newthread = tids;
  local_44._4_8_ = *(long *)(in_FS_OFFSET + 0x28);
  __arg = data;
  data[1].end = 0x14;
  data[1].result = 0;
  data[2].result = 0;
  data[0].start = 1;
  data[0].end = 10;
                    /* Unresolved local var: int i@[???] */
  data[0].result = 0;
  data[1].start = 0xb;
  data[2].start = 0x15;
  data[2].end = 0x1e;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_00103d63;
    }
    __arg = __arg + 1;
    __newthread = __newthread + 1;
  } while (__arg != &local_44);
                    /* Unresolved local var: int i@[???] */
  iVar1 = 0;
  lVar3 = 0;
  do {
    iVar2 = pthread_join(tids[lVar3],(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    lVar4 = lVar3 + 1;
    iVar1 = iVar1 + data[lVar3].result;
    lVar3 = lVar4;
  } while (lVar4 != 3);
LAB_00103d63:
  if (local_44._4_8_ == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_join @ 00103da0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: param_mutex_lock @ 00103db0 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  pthread_t __th;
  int iVar1;
  pthread_t *__ptr;
  pthread_t *ppVar2;
  pthread_t *__newthread;
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
        __th = *ppVar2;
        ppVar2 = ppVar2 + 1;
        pthread_join(__th,(void **)0x0);
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



/* Function: call_mutex_lock @ 00103ea0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: param_condition_variable @ 00103ec0 */

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
      iVar1 = -2;
      pthread_cancel(consumer);
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



/* Function: call_condition_variable @ 00103f90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: param_atomic_ops @ 00103fa0 */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  int iVar2;
  pthread_t *__ptr;
  pthread_t *ppVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_4c;
  pthread_t load_store_tid;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = iterations;
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
      ppVar3 = __ptr;
      do {
        iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
        if (iVar2 != 0) {
          free(__ptr);
          iVar2 = -2;
          goto LAB_0010403a;
        }
        ppVar3 = ppVar3 + 1;
      } while (ppVar3 != __ptr + (uint)thread_count);
      iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar2 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
      lVar4 = 0;
      do {
        ppVar3 = __ptr + lVar4;
                    /* Unresolved local var: int i@[???] */
        lVar4 = lVar4 + 1;
        pthread_join(*ppVar3,(void **)0x0);
      } while ((int)lVar4 < thread_count);
    }
    aVar1 = atomic_counter;
    free(__ptr);
    iVar2 = 0x2a;
    if (aVar1 < 1) {
      iVar2 = -3;
    }
  }
LAB_0010403a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_atomic_ops @ 00104100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: param_thread_local_storage @ 00104120 */

int param_thread_local_storage(int thread_count)

{
  int iVar1;
  pthread_t *__ptr;
  undefined8 *__ptr_00;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  pthread_t *__newthread;
  long in_FS_OFFSET;
  void *ret;
  long local_40;
  
  uVar3 = (ulong)thread_count;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = malloc(uVar3 * 8);
  __ptr_00 = malloc(uVar3 * 8);
  if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (thread_count < 1) {
      iVar6 = 0;
      iVar1 = 0;
    }
    else {
      uVar7 = 0;
      do {
        pvVar2 = malloc(0x10);
        uVar5 = uVar7 & 0xffffffff;
        __ptr_00[uVar7] = pvVar2;
        uVar7 = uVar7 + 1;
        __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar5);
      } while (uVar7 != uVar3);
      uVar7 = 0;
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               (void *)__ptr_00[uVar7]);
        if (iVar1 != 0) {
          puVar4 = __ptr_00;
          do {
                    /* Unresolved local var: int j@[???] */
            pvVar2 = (void *)*puVar4;
            puVar4 = puVar4 + 1;
            free(pvVar2);
          } while (__ptr_00 + uVar7 + 1 != puVar4);
          free(__ptr_00);
          free(__ptr);
          iVar1 = -2;
          goto LAB_00104237;
        }
                    /* Unresolved local var: int i@[???] */
        uVar7 = uVar7 + 1;
        __newthread = __newthread + 1;
      } while (uVar7 != uVar3);
      iVar6 = 0;
      uVar7 = 0;
      iVar1 = 0;
      do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int * values@[???] */
        pthread_join(__ptr[uVar7],&ret);
        iVar1 = iVar1 + *(int *)ret;
        iVar6 = iVar6 + *(int *)((long)ret + 4);
        free(ret);
        puVar4 = __ptr_00 + uVar7;
        uVar7 = uVar7 + 1;
        free((void *)*puVar4);
      } while (uVar7 != uVar3);
    }
    free(__ptr_00);
    free(__ptr);
    if ((thread_count * 100 == iVar1) && (thread_count * 0x96 == iVar6)) {
      iVar1 = 0x2a;
    }
    else {
      iVar1 = -3;
    }
  }
LAB_00104237:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 00104300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 00104310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  int input;
  pthread_t tid;
  void *thread_ret;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001052c4);
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
  input = 7;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    uVar2 = *(undefined4 *)thread_ret;
    free(thread_ret);
  }
  else {
    uVar2 = 0xffffffff;
  }
  __printf_chk(1,&DAT_001052e2,uVar2);
  iVar1 = param_pthread_join();
  __printf_chk(1,&DAT_001052fe,iVar1);
  iVar1 = param_mutex_lock(4,1000);
  __printf_chk(1,&DAT_0010531b,iVar1);
  iVar1 = param_condition_variable();
  __printf_chk(1,&DAT_00105337,iVar1);
  iVar1 = param_atomic_ops(4,500);
  __printf_chk(1,&DAT_00105353,iVar1);
  param_thread_local_storage(4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_0010536f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: _fini @ 00104458 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
