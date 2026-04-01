// Decompiled by BinaryAI
// SHA256: b51d64dec387150b92f368e6dca2f1034ebc8d0563da952c9323c0a8b3c14395

// Function: _init @ 0x10c9c
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x10cbc
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::strstr @ 0x10cc8
char * strstr(char *__haystack,char *__needle)
{
  char *pcVar1;
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}

// Function: <EXTERNAL>::raise @ 0x10cd4
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10ce0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x10cec
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x10cf8
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
  int iVar1;
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x10d04
FILE * fopen(char *__filename,char *__modes)
{
  FILE *pFVar1;
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}

// Function: <EXTERNAL>::read @ 0x10d10
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
  ssize_t sVar1;
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}

// Function: <EXTERNAL>::free @ 0x10d1c
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x10d28
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::_exit @ 0x10d34
void _exit(int __status)
{
  _exit(__status);
}

// Function: <EXTERNAL>::memcpy @ 0x10d40
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::shmget @ 0x10d4c
int shmget(key_t __key,size_t __size,int __shmflg)
{
  int iVar1;
  iVar1 = shmget(__key,__size,__shmflg);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x10d58
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::memcmp @ 0x10d64
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::sleep @ 0x10d70
uint sleep(uint __seconds)
{
  uint uVar1;
  uVar1 = sleep(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10d7c
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::rewind @ 0x10d88
void rewind(FILE *__stream)
{
  rewind(__stream);
  return;
}

// Function: <EXTERNAL>::alarm @ 0x10d94
uint alarm(uint __seconds)
{
  uint uVar1;
  uVar1 = alarm(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::unlink @ 0x10da0
int unlink(char *__name)
{
  int iVar1;
  iVar1 = unlink(__name);
  return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x10dac
__pid_t wait(void *__stat_loc)
{
  __pid_t _Var1;
  _Var1 = wait(__stat_loc);
  return _Var1;
}

// Function: <EXTERNAL>::shmat @ 0x10db8
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
  void *pvVar1;
  pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
  return pvVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x10dc4
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
  size_t sVar1;
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}

// Function: <EXTERNAL>::usleep @ 0x10dd0
int usleep(__useconds_t __useconds)
{
  int iVar1;
  iVar1 = usleep(__useconds);
  return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x10ddc
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::strcpy @ 0x10de8
char * strcpy(char *__dest,char *__src)
{
  char *pcVar1;
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}

// Function: <EXTERNAL>::fread @ 0x10df4
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x10e00
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
  int iVar1;
  iVar1 = shmctl(__shmid,__cmd,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10e0c
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10e18
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::stat @ 0x10e30
int stat(char *__file,stat *__buf)
{
  int iVar1;
  iVar1 = stat(__file,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::open @ 0x10e3c
int open(char *__file,int __oflag,...)
{
  int iVar1;
  iVar1 = open(__file,__oflag);
  return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x10e48
long syscall(long __sysno,...)
{
  long lVar1;
  lVar1 = syscall(__sysno);
  return lVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10e54
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::strchr @ 0x10e60
char * strchr(char *__s,int __c)
{
  char *pcVar1;
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x10e6c
int * __errno_location(void)
{
  int *piVar1;
  piVar1 = __errno_location();
  return piVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x10e78
void __isoc99_sscanf(void)
{
  __isoc99_sscanf();
  return;
}

// Function: <EXTERNAL>::bind @ 0x10e84
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
  int iVar1;
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x10e90
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10e9c
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10ea8
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::write @ 0x10eb4
ssize_t write(int __fd,void *__buf,size_t __n)
{
  ssize_t sVar1;
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}

// Function: <EXTERNAL>::fileno @ 0x10ec0
int fileno(FILE *__stream)
{
  int iVar1;
  iVar1 = fileno(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x10ecc
int shmdt(void *__shmaddr)
{
  int iVar1;
  iVar1 = shmdt(__shmaddr);
  return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x10ed8
int fclose(FILE *__stream)
{
  int iVar1;
  iVar1 = fclose(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x10ee4
int pipe(int *__pipedes)
{
  int iVar1;
  iVar1 = pipe(__pipedes);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x10ef0
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)
{
  int iVar1;
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x10efc
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::execl @ 0x10f08
int execl(char *__path,char *__arg,...)
{
  int iVar1;
  iVar1 = execl(__path,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x10f14
int listen(int __fd,int __n)
{
  int iVar1;
  iVar1 = listen(__fd,__n);
  return iVar1;
}

// Function: <EXTERNAL>::ftok @ 0x10f20
key_t ftok(char *__pathname,int __proj_id)
{
  key_t kVar1;
  kVar1 = ftok(__pathname,__proj_id);
  return kVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x10f2c
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x10f38
int socket(int __domain,int __type,int __protocol)
{
  int iVar1;
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x10f44
int pthread_join(pthread_t __th,void **__thread_return)
{
  int iVar1;
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x10f50
int pthread_cancel(pthread_t __th)
{
  int iVar1;
  iVar1 = pthread_cancel(__th);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x10f5c
int pthread_cond_signal(pthread_cond_t *__cond)
{
  int iVar1;
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10f68
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::close @ 0x10f74
int close(int __fd)
{
  int iVar1;
  iVar1 = close(__fd);
  return iVar1;
}

// Function: <EXTERNAL>::__snprintf_chk @ 0x10f80
void __snprintf_chk(void)
{
  __snprintf_chk();
  return;
}

// Function: main @ 0x10f90
undefined4 main(void)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}

// Function: _start @ 0x10fa8
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x10fec
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x11010
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1103c
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x11074
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: signal_handler @ 0x110a0
void signal_handler(undefined4 param_1)
{
  signal_received = 1;
  signal_number = param_1;
  return;
}

// Function: thread_sum @ 0x110b8
undefined4 thread_sum(int *param_1)
{
  int iVar1;
  param_1[2] = 0;
  for (iVar1 = *param_1; iVar1 <= param_1[1]; iVar1 = iVar1 + 1) {
    param_1[2] = param_1[2] + iVar1;
  }
  return 0;
}

// Function: thread_compute @ 0x110ec
void thread_compute(int *param_1)
{
  int *piVar1;
  int iVar2;
  iVar2 = *param_1;
  piVar1 = (int *)malloc(4);
  *piVar1 = iVar2 * iVar2;
  return;
}

// Function: thread_increment @ 0x11110
undefined4 thread_increment(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = *param_1;
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}

// Function: consumer_thread @ 0x11164
void consumer_thread(void)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  while (uVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar2 = (undefined4 *)malloc(4);
  *puVar2 = uVar1;
  return;
}

// Function: producer_thread @ 0x111bc
undefined4 producer_thread(void)
{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}

// Function: thread_atomic_increment @ 0x11204
undefined4 thread_atomic_increment(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = *param_1;
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    __sync_fetch_and_add_4(&atomic_counter,1);
    __sync_val_compare_and_swap_4(&atomic_counter,iVar1,iVar1 + 1000);
  }
  return 0;
}

// Function: thread_atomic_load_store @ 0x1128c
undefined4 thread_atomic_load_store(void)
{
  int iVar1;
  __sync_synchronize();
  iVar1 = atomic_counter;
  __sync_synchronize();
  __sync_synchronize();
  atomic_counter = iVar1 + 100;
  __sync_synchronize();
  return 0;
}

// Function: thread_tls_test @ 0x112bc
void thread_tls_test(undefined4 param_1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uVar5 = __aeabi_read_tp(param_1,param_1);
  iVar1 = (int)uVar5;
  iVar4 = *(int *)(iVar1 + 8);
  iVar3 = iVar4 + 0x32;
  *(int *)(iVar1 + 8) = iVar3;
  strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar5 >> 0x20),0x1f);
  piVar2 = (int *)malloc(8);
  *piVar2 = iVar4;
  piVar2[1] = iVar3;
  return;
}

// Function: param_strcpy @ 0x11304
void param_strcpy(char *param_1,char *param_2)
{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}

// Function: call_strcpy @ 0x1131c
void call_strcpy(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  undefined auStack_2c [32];
  int local_c;
  local_c = 0;
  param_strcpy(auStack_2c,"HelloLib",param_3,0);
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return;
}

// Function: param_strcmp @ 0x1136c
undefined4 param_strcmp(char *param_1,char *param_2)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = strcmp(param_1,param_2);
  if (0 < iVar1) {
    return 1;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_strcmp @ 0x11390
int call_strcmp(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = param_strcmp(&DAT_00013621,&DAT_0001361d);
  iVar2 = param_strcmp(&DAT_00013625);
  iVar3 = param_strcmp(&DAT_0001362d,&DAT_00013629);
  return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x113e0
void param_strlen(char *param_1)
{
  strlen(param_1);
  return;
}

// Function: call_strlen @ 0x113e4
undefined4 call_strlen(void)
{
  return 0xc;
}

// Function: param_memcpy @ 0x113ec
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return param_3;
}

// Function: call_memcpy @ 0x11400
void call_memcpy(void)
{
  undefined4 extraout_r1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int local_20 [2];
  int local_18;
  int local_10;
  int local_c;
  local_c = 0;
  local_34 = 10;
  uStack_30 = 0x14;
  uStack_2c = 0x1e;
  uStack_28 = 0x28;
  local_24 = 0x32;
  memset(local_20,0,0x14);
  param_memcpy(local_20,&local_34,0x14);
  if (local_c != 0) {
    __stack_chk_fail(local_20[0] + local_18 + local_10,extraout_r1,local_c,0);
  }
  return;
}

// Function: param_memcmp @ 0x11490
undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = memcmp(param_1,param_2,param_3);
  if (0 < iVar1) {
    return 1;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_memcmp @ 0x114b4
void call_memcmp(void)
{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  local_14 = 0;
  local_38 = 1;
  uStack_34 = 2;
  uStack_30 = 3;
  local_2c = 1;
  uStack_28 = 2;
  uStack_24 = 4;
  local_20 = 1;
  uStack_1c = 2;
  uStack_18 = 3;
  iVar1 = param_memcmp(&local_38,&local_2c,0xc);
  uVar2 = param_memcmp(&local_38,&local_20,0xc);
  if (local_14 != 0) {
    __stack_chk_fail(iVar1 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_14,0);
  }
  return;
}

// Function: param_printf @ 0x1154c
void param_printf(undefined4 param_1,undefined4 param_2)
{
  __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
  return;
}

// Function: call_printf @ 0x11564
void call_printf(void)
{
  param_printf(0x2a,"Test");
  return;
}

// Function: param_scanf @ 0x11574
void param_scanf(undefined4 param_1,int param_2,int param_3)
{
  int iVar1;
  undefined8 uVar2;
  int iStack_14;
  int iStack_10;
  int local_c;
  local_c = 0;
  iStack_14 = param_2;
  iStack_10 = param_3;
  uVar2 = __isoc99_sscanf(param_1,"%d,%d",&iStack_14,&iStack_10,param_1);
  if ((int)uVar2 == 2) {
    iVar1 = iStack_14 + iStack_10;
  }
  else {
    iVar1 = -1;
  }
  if (local_c != 0) {
    __stack_chk_fail(iVar1,(int)((ulonglong)uVar2 >> 0x20),local_c,0);
  }
  return;
}

// Function: call_scanf @ 0x115d4
void call_scanf(void)
{
  param_scanf("123,456");
  return;
}

// Function: param_fopen_fclose @ 0x115e0
int param_fopen_fclose(char *param_1)
{
  FILE *__stream;
  int iVar1;
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = fileno(__stream);
    fclose(__stream);
  }
  return iVar1;
}

// Function: call_fopen_fclose @ 0x11614
undefined4 call_fopen_fclose(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_fopen_fclose("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_fread_fwrite @ 0x11634
void param_fread_fwrite(char *param_1)
{
  FILE *__s;
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  char acStack_34 [32];
  int local_14;
  local_14 = 0;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar2 == 0x12) {
      rewind(__s);
      sVar2 = fread(acStack_34,1,0x12,__s);
      acStack_34[sVar2] = '\0';
      fclose(__s);
      unlink(param_1);
      if (sVar2 == 0x12) {
        iVar3 = strcmp(acStack_34,"BinBench Test Data");
        if (iVar3 == 0) {
          uVar1 = 0x2a;
        }
        else {
          uVar1 = 0xfffffffd;
        }
      }
      else {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      fclose(__s);
      uVar1 = 0xfffffffe;
    }
  }
  if (local_14 != 0) {
    __stack_chk_fail(uVar1);
  }
  return;
}

// Function: call_fread_fwrite @ 0x11724
void call_fread_fwrite(void)
{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}

// Function: param_malloc_free @ 0x11730
int param_malloc_free(int param_1)
{
  int *__ptr;
  int iVar1;
  __ptr = (int *)malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (iVar1 = 0; iVar1 != param_1; iVar1 = iVar1 + 1) {
      __ptr[iVar1] = iVar1 * 10;
    }
    iVar1 = __ptr[param_1 + -1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}

// Function: call_malloc_free @ 0x1178c
void call_malloc_free(void)
{
  param_malloc_free(10);
  return;
}

// Function: param_memset @ 0x11794
int param_memset(byte *param_1,size_t param_2)
{
  int iVar1;
  byte *pbVar2;
  memset(param_1,0,param_2);
  iVar1 = 0;
  pbVar2 = param_1 + param_2;
  for (; param_1 != pbVar2; param_1 = param_1 + 1) {
    iVar1 = iVar1 + (uint)*param_1;
  }
  return iVar1;
}

// Function: call_memset @ 0x117cc
void call_memset(void)
{
  undefined4 extraout_r1;
  int *piVar1;
  int iVar2;
  int local_34 [9];
  int local_10;
  int local_c;
  local_c = 0;
  iVar2 = 0;
  piVar1 = local_34;
  do {
    iVar2 = iVar2 + 1;
    *piVar1 = 0xff;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 10);
  param_memset(local_34,0x28);
  if (local_c != 0) {
    __stack_chk_fail(local_34[0] + local_10,extraout_r1,local_c,0);
  }
  return;
}

// Function: param_strchr_strstr @ 0x11840
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
  char *pcVar1;
  int iVar2;
  int iVar3;
  pcVar1 = strchr(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  return iVar3 + iVar2;
}

// Function: call_strchr_strstr @ 0x1187c
void call_strchr_strstr(void)
{
  param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return;
}

// Function: test_standard_library_functions @ 0x11894
void test_standard_library_functions(void)
{
  undefined4 uVar1;
  puts(&DAT_000136a9);
  uVar1 = call_strcpy();
  __printf_chk(1,&DAT_000136cd,uVar1);
  uVar1 = call_strcmp();
  __printf_chk(1,&DAT_000136e8,uVar1);
  __printf_chk(1,&DAT_00013703,0xc);
  uVar1 = call_memcpy();
  __printf_chk(1,&DAT_0001371f,uVar1);
  uVar1 = call_memcmp();
  __printf_chk(1,&DAT_0001373b,uVar1);
  uVar1 = call_printf();
  __printf_chk(1,&DAT_00013757,uVar1);
  uVar1 = call_scanf();
  __printf_chk(1,&DAT_00013773,uVar1);
  uVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_00013790,uVar1);
  uVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_000137ac,uVar1);
  uVar1 = call_malloc_free();
  __printf_chk(1,&DAT_000137c8,uVar1);
  uVar1 = call_memset();
  __printf_chk(1,&DAT_000137e4,uVar1);
  uVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_000137ff,uVar1);
  return;
}

// Function: param_linux_syscall @ 0x119c4
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

// Function: call_linux_syscall @ 0x11a04
undefined4 call_linux_syscall(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_linux_syscall("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_win32_api @ 0x11a24
void param_win32_api(char *param_1)
{
  int iVar1;
  undefined4 uVar2;
  stat sStack_68;
  int local_c;
  local_c = 0;
  iVar1 = stat(param_1,&sStack_68);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (sStack_68.st_size < 1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0x2a;
  }
  if (local_c == 0) {
    return;
  }
  __stack_chk_fail(uVar2);
}

// Function: call_win32_api @ 0x11a88
void call_win32_api(void)
{
  param_win32_api("/etc/passwd");
  return;
}

// Function: param_fork_exec @ 0x11a94
void param_fork_exec(char *param_1,undefined4 param_2,undefined4 param_3)
{
  __pid_t _Var1;
  uint uVar2;
  char *local_18;
  int local_14;
  undefined4 uStack_10;
  local_14 = 0;
  local_18 = param_1;
  uStack_10 = param_3;
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl(param_1,param_1,param_2);
      _exit(0x7f);
    }
    _Var1 = waitpid(_Var1,(int *)&local_18,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else if (((uint)local_18 & 0x7f) == 0) {
      uVar2 = (int)local_18 >> 8 & 0xff;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_14 == 0) {
    return;
  }
  __stack_chk_fail(uVar2);
}

// Function: call_fork_exec @ 0x11b34
undefined4 call_fork_exec(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_fork_exec("/bin/true",0);
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: param_pipe_communication @ 0x11b58
void param_pipe_communication(void)
{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  undefined4 uVar4;
  int local_3c;
  int local_38;
  undefined auStack_34 [32];
  int local_14;
  local_14 = 0;
  iVar1 = pipe(&local_3c);
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
        close(local_3c);
        write(local_38,"HelloPipe",9);
        close(local_38);
        _exit(0);
      }
      close(local_38);
      sVar3 = read(local_3c,auStack_34,0x1f);
      auStack_34[sVar3] = 0;
      close(local_3c);
      wait((void *)0x0);
      if (sVar3 < 1) {
        uVar4 = 0xfffffffd;
      }
      else {
        uVar4 = 0x2a;
      }
    }
  }
  if (local_14 == 0) {
    return;
  }
  __stack_chk_fail(uVar4);
}

// Function: param_socket_create @ 0x11c40
void param_socket_create(void)
{
  int __fd;
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  sockaddr local_1c;
  int local_c;
  local_c = 0;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = 1;
    iVar2 = setsockopt(__fd,1,2,&local_20,4);
    if (iVar2 < 0) {
      close(__fd);
      uVar1 = 0xfffffffe;
    }
    else {
      memset(&local_1c,0,0x10);
      local_1c.sa_family = 2;
      iVar2 = bind(__fd,&local_1c,0x10);
      if (iVar2 < 0) {
        close(__fd);
        uVar1 = 0xfffffffd;
      }
      else {
        iVar2 = listen(__fd,5);
        if (iVar2 < 0) {
          close(__fd);
          uVar1 = 0xfffffffc;
        }
        else {
          close(__fd);
          uVar1 = 0x2a;
        }
      }
    }
  }
  if (local_c == 0) {
    return;
  }
  __stack_chk_fail(uVar1);
}

// Function: param_shmget_shmat @ 0x11d40
size_t param_shmget_shmat(void)
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
        return 0xfffffffe;
      }
      __dest = (char *)shmat(iVar1,(void *)0x0,0);
      if (__dest != (char *)0xffffffff) {
        strcpy(__dest,"SharedMemory");
        sVar2 = strlen(__dest);
        shmdt(__dest);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return sVar2;
      }
      return 0xfffffffd;
    }
  }
  return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x11df4
undefined4 call_shmget_shmat(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_shmget_shmat();
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_signal_handling @ 0x11e0c
undefined4 param_signal_handling(void)
{
  __sighandler_t p_Var1;
  int iVar2;
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return 0xffffffff;
  }
  p_Var1 = signal(0xe,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return 0xfffffffe;
  }
  signal_received = 0;
  raise(10);
  iVar2 = 0x3e9;
  while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    usleep(1000);
  }
  if (signal_received == 0) {
    return 0xfffffffd;
  }
  if (signal_number != 10) {
    return 0xfffffffc;
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
  return 0xfffffffb;
}

// Function: test_system_calls @ 0x11f28
void test_system_calls(void)
{
  undefined4 uVar1;
  puts(&DAT_0001384e);
  uVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_00013869,uVar1);
  uVar1 = call_win32_api();
  __printf_chk(1,&DAT_00013885,uVar1);
  uVar1 = call_fork_exec();
  __printf_chk(1,&DAT_000138a1,uVar1);
  uVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_000138bd,uVar1);
  uVar1 = param_socket_create();
  __printf_chk(1,&DAT_000138d9,uVar1);
  uVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_000138f5,uVar1);
  uVar1 = param_signal_handling();
  __printf_chk(1,&DAT_00013911,uVar1);
  return;
}

// Function: param_pthread_create @ 0x11fe4
undefined4 param_pthread_create(pthread_t param_1,undefined4 param_2,undefined4 *param_3)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_18;
  pthread_t local_14;
  undefined4 *local_10;
  int local_c;
  local_c = 0;
  local_18 = param_1;
  local_14 = param_1;
  local_10 = param_3;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_14);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c == 0) {
    return uVar2;
  }
  __stack_chk_fail();
}

// Function: call_pthread_create @ 0x12064
void call_pthread_create(void)
{
  param_pthread_create(7);
  return;
}

// Function: param_pthread_join @ 0x1206c
int param_pthread_join(void)
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
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  ppVar4 = apStack_54 + 3;
  iVar3 = 0;
  local_24 = 0;
  apStack_54[3] = 1;
  uStack_44 = 10;
  local_40 = 0;
  uStack_3c = 0xb;
  local_38 = 0x14;
  uStack_34 = 0;
  uStack_30 = 0x15;
  uStack_2c = 0x1e;
  local_28 = 0;
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
  if (local_24 != 0) {
    __stack_chk_fail();
  }
  return iVar1;
}

// Function: param_mutex_lock @ 0x1215c
void param_mutex_lock(int param_1,int param_2)
{
  void *__ptr;
  int iVar1;
  int iVar2;
  int local_1c;
  local_1c = param_2;
  __ptr = malloc(param_1 << 2);
  if (__ptr != (void *)0x0) {
    shared_counter = 0;
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)__ptr + iVar2 * 4),(pthread_attr_t *)0x0,
                             thread_increment,&local_1c);
      if (iVar1 != 0) {
        free(__ptr);
        return;
      }
    }
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar2 * 4),(void **)0x0);
    }
    free(__ptr);
  }
  return;
}

// Function: call_mutex_lock @ 0x12218
void call_mutex_lock(void)
{
  param_mutex_lock(4,1000);
  return;
}

// Function: param_condition_variable @ 0x12224
undefined4 param_condition_variable(pthread_t param_1,pthread_t param_2,undefined4 *param_3)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_18;
  pthread_t local_14;
  undefined4 *local_10;
  int local_c;
  local_c = 0;
  ready = 0;
  data = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_14,&local_10);
      pthread_join(local_18,(void **)0x0);
      uVar2 = *local_10;
      free(local_10);
    }
    else {
      pthread_cancel(local_14);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c == 0) {
    return uVar2;
  }
  __stack_chk_fail();
}

// Function: param_atomic_ops @ 0x122ec
void param_atomic_ops(int param_1,undefined4 param_2,pthread_t param_3)
{
  void *__ptr;
  int iVar1;
  int iVar2;
  undefined4 local_24;
  pthread_t local_20;
  int local_1c;
  local_1c = 0;
  local_24 = param_2;
  local_20 = param_3;
  __ptr = malloc(param_1 << 2);
  if (__ptr != (void *)0x0) {
    __sync_synchronize(__ptr);
    atomic_counter = 0;
    __sync_synchronize();
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)__ptr + iVar2 * 4),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&local_24);
      if (iVar1 != 0) {
        free(__ptr);
        goto LAB_000123b8;
      }
    }
    iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(local_20,(void **)0x0);
    }
    for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar2 * 4),(void **)0x0);
    }
    __sync_synchronize();
    __sync_synchronize();
    free(__ptr);
  }
LAB_000123b8:
  if (local_1c != 0) {
    __stack_chk_fail();
  }
  return;
}

// Function: call_atomic_ops @ 0x12408
void call_atomic_ops(void)
{
  param_atomic_ops(4,500);
  return;
}

// Function: param_thread_local_storage @ 0x12414
void param_thread_local_storage(int param_1)
{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  int *local_28;
  int local_24;
  local_24 = 0;
  __ptr = malloc(param_1 << 2);
  __ptr_00 = malloc(param_1 << 2);
  if (__ptr_00 != (void *)0x0 && __ptr != (void *)0x0) {
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      pvVar1 = malloc(0x10);
      *(void **)((int)__ptr_00 + iVar4 * 4) = pvVar1;
      __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar4);
    }
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar4 * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)__ptr_00 + iVar4 * 4));
      if (iVar2 != 0) {
        ppvVar3 = (void **)((int)__ptr_00 + -4);
        do {
          ppvVar3 = ppvVar3 + 1;
          free(*ppvVar3);
        } while (ppvVar3 != (void **)((int)__ptr_00 + iVar4 * 4));
        free(__ptr_00);
        free(__ptr);
        goto LAB_00012540;
      }
    }
    for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + iVar4 * 4),&local_28);
      free(local_28);
      free(*(void **)((int)__ptr_00 + iVar4 * 4));
    }
    free(__ptr_00);
    free(__ptr);
  }
LAB_00012540:
  if (local_24 == 0) {
    return;
  }
  __stack_chk_fail();
}

// Function: call_thread_local_storage @ 0x125ac
void call_thread_local_storage(void)
{
  param_thread_local_storage(4);
  return;
}

// Function: test_thread_concurrency @ 0x125b4
void test_thread_concurrency(void)
{
  undefined4 uVar1;
  puts(&DAT_00013937);
  uVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00013955,uVar1);
  uVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00013971,uVar1);
  uVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_0001398e,uVar1);
  uVar1 = param_condition_variable();
  __printf_chk(1,&DAT_000139aa,uVar1);
  uVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_000139c6,uVar1);
  uVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_000139e2,uVar1);
  return;
}

// Function: __sync_fetch_and_add_4 @ 0x12658
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

// Function: __sync_fetch_and_sub_4 @ 0x12690
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

// Function: __sync_fetch_and_or_4 @ 0x126c8
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

// Function: __sync_fetch_and_and_4 @ 0x12700
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

// Function: __sync_fetch_and_xor_4 @ 0x12738
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

// Function: __sync_fetch_and_nand_4 @ 0x12770
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

// Function: __sync_fetch_and_add_2 @ 0x127ac
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

// Function: __sync_fetch_and_sub_2 @ 0x1280c
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

// Function: __sync_fetch_and_or_2 @ 0x1286c
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

// Function: __sync_fetch_and_and_2 @ 0x128cc
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

// Function: __sync_fetch_and_xor_2 @ 0x1292c
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

// Function: __sync_fetch_and_nand_2 @ 0x1298c
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

// Function: __sync_fetch_and_add_1 @ 0x129f0
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

// Function: __sync_fetch_and_sub_1 @ 0x12a4c
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

// Function: __sync_fetch_and_or_1 @ 0x12aa8
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

// Function: __sync_fetch_and_and_1 @ 0x12b04
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

// Function: __sync_fetch_and_xor_1 @ 0x12b60
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

// Function: __sync_fetch_and_nand_1 @ 0x12bbc
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

// Function: __sync_add_and_fetch_4 @ 0x12c1c
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

// Function: __sync_sub_and_fetch_4 @ 0x12c54
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

// Function: __sync_or_and_fetch_4 @ 0x12c8c
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

// Function: __sync_and_and_fetch_4 @ 0x12cc4
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

// Function: __sync_xor_and_fetch_4 @ 0x12cfc
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

// Function: __sync_nand_and_fetch_4 @ 0x12d34
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

// Function: __sync_add_and_fetch_2 @ 0x12d70
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

// Function: __sync_sub_and_fetch_2 @ 0x12dd8
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

// Function: __sync_or_and_fetch_2 @ 0x12e40
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

// Function: __sync_and_and_fetch_2 @ 0x12ea8
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

// Function: __sync_xor_and_fetch_2 @ 0x12f10
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

// Function: __sync_nand_and_fetch_2 @ 0x12f78
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

// Function: __sync_add_and_fetch_1 @ 0x12fe4
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

// Function: __sync_sub_and_fetch_1 @ 0x13048
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

// Function: __sync_or_and_fetch_1 @ 0x130ac
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

// Function: __sync_and_and_fetch_1 @ 0x13110
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

// Function: __sync_xor_and_fetch_1 @ 0x13174
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

// Function: __sync_nand_and_fetch_1 @ 0x131d8
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

// Function: __sync_val_compare_and_swap_4 @ 0x13240
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

// Function: __sync_val_compare_and_swap_2 @ 0x13290
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

// Function: __sync_val_compare_and_swap_1 @ 0x13308
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

// Function: __sync_bool_compare_and_swap_4 @ 0x1337c
bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  int iVar1;
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x133a8
bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x133c4
bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x133ec
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

// Function: __sync_lock_test_and_set_2 @ 0x13424
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

// Function: __sync_lock_test_and_set_1 @ 0x13484
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

// Function: __sync_lock_release_8 @ 0x134e0
void __sync_lock_release_8(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// Function: __sync_lock_release_4 @ 0x13504
void __sync_lock_release_4(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_2 @ 0x13524
void __sync_lock_release_2(undefined2 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_1 @ 0x13544
void __sync_lock_release_1(undefined *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: _fini @ 0x13578
void _fini(void)
{
  return;
}

