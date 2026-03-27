// Decompiled by BinaryAI
// SHA256: a412c8f9704b6d19689c1ee2a45b8bc5aece9189c6991fa1241011659f1a7f05

// Function: _init @ 0x101388
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_001013a0 @ 0x1013a0
void FUN_001013a0(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x1013c0
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::_exit @ 0x1013d0
void _exit(int __status)
{
  _exit(__status);
}

// Function: <EXTERNAL>::strlen @ 0x1013e0
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::raise @ 0x1013f0
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101400
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::execl @ 0x101410
int execl(char *__path,char *__arg,...)
{
  int iVar1;
  iVar1 = execl(__path,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x101420
int listen(int __fd,int __n)
{
  int iVar1;
  iVar1 = listen(__fd,__n);
  return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x101430
int shmdt(void *__shmaddr)
{
  int iVar1;
  iVar1 = shmdt(__shmaddr);
  return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x101440
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
  int iVar1;
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101450
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::pipe @ 0x101460
int pipe(int *__pipedes)
{
  int iVar1;
  iVar1 = pipe(__pipedes);
  return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x101470
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::fileno @ 0x101480
int fileno(FILE *__stream)
{
  int iVar1;
  iVar1 = fileno(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x101490
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::__snprintf_chk @ 0x1014a0
void __snprintf_chk(void)
{
  __snprintf_chk();
  return;
}

// Function: <EXTERNAL>::fclose @ 0x1014b0
int fclose(FILE *__stream)
{
  int iVar1;
  iVar1 = fclose(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x1014c0
FILE * fopen(char *__filename,char *__modes)
{
  FILE *pFVar1;
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1014d0
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x1014e0
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
  int iVar1;
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}

// Function: <EXTERNAL>::open @ 0x1014f0
int open(char *__file,int __oflag,...)
{
  int iVar1;
  iVar1 = open(__file,__oflag);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101500
int pthread_cond_signal(pthread_cond_t *__cond)
{
  int iVar1;
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101510
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::memset @ 0x101520
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::shmat @ 0x101530
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
  void *pvVar1;
  pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
  return pvVar1;
}

// Function: <EXTERNAL>::sleep @ 0x101540
uint sleep(uint __seconds)
{
  uint uVar1;
  uVar1 = sleep(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x101550
void rewind(FILE *__stream)
{
  rewind(__stream);
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101560
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::close @ 0x101570
int close(int __fd)
{
  int iVar1;
  iVar1 = close(__fd);
  return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101580
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::stat @ 0x101590
int stat(char *__file,stat *__buf)
{
  int iVar1;
  iVar1 = stat(__file,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1015a0
ssize_t write(int __fd,void *__buf,size_t __n)
{
  ssize_t sVar1;
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}

// Function: <EXTERNAL>::__getauxval @ 0x1015b0
void __getauxval(void)
{
  __getauxval();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1015c0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1015d0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x1015e0
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x1015f0
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x101600
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
  int iVar1;
  iVar1 = shmctl(__shmid,__cmd,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x101610
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x101620
key_t ftok(char *__pathname,int __proj_id)
{
  key_t kVar1;
  kVar1 = ftok(__pathname,__proj_id);
  return kVar1;
}

// Function: <EXTERNAL>::free @ 0x101630
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::shmget @ 0x101640
int shmget(key_t __key,size_t __size,int __shmflg)
{
  int iVar1;
  iVar1 = shmget(__key,__size,__shmflg);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101650
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::strchr @ 0x101660
char * strchr(char *__s,int __c)
{
  char *pcVar1;
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x101670
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
  size_t sVar1;
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x101680
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)
{
  int iVar1;
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x101690
__pid_t wait(void *__stat_loc)
{
  __pid_t _Var1;
  _Var1 = wait(__stat_loc);
  return _Var1;
}

// Function: <EXTERNAL>::socket @ 0x1016a0
int socket(int __domain,int __type,int __protocol)
{
  int iVar1;
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}

// Function: <EXTERNAL>::strcpy @ 0x1016b0
char * strcpy(char *__dest,char *__src)
{
  char *pcVar1;
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}

// Function: <EXTERNAL>::read @ 0x1016c0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
  ssize_t sVar1;
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}

// Function: <EXTERNAL>::strstr @ 0x1016d0
char * strstr(char *__haystack,char *__needle)
{
  char *pcVar1;
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}

// Function: <EXTERNAL>::usleep @ 0x1016e0
int usleep(__useconds_t __useconds)
{
  int iVar1;
  iVar1 = usleep(__useconds);
  return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x1016f0
void __isoc99_sscanf(void)
{
  __isoc99_sscanf();
  return;
}

// Function: <EXTERNAL>::strncpy @ 0x101700
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x101710
int * __errno_location(void)
{
  int *piVar1;
  piVar1 = __errno_location();
  return piVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x101720
int pthread_join(pthread_t __th,void **__thread_return)
{
  int iVar1;
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}

// Function: <EXTERNAL>::alarm @ 0x101730
uint alarm(uint __seconds)
{
  uint uVar1;
  uVar1 = alarm(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x101740
int pthread_cancel(pthread_t __th)
{
  int iVar1;
  iVar1 = pthread_cancel(__th);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101750
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x101760
long syscall(long __sysno,...)
{
  long lVar1;
  lVar1 = syscall(__sysno);
  return lVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x101770
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x101780
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::unlink @ 0x101790
int unlink(char *__name)
{
  int iVar1;
  iVar1 = unlink(__name);
  return iVar1;
}

// Function: init_have_lse_atomics @ 0x1017c0
void init_have_lse_atomics(void)
{
  byte extraout_var;
  __getauxval(0x10);
  atomic_counter._4_1_ = extraout_var & 1;
  return;
}

// Function: _start @ 0x101800
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x101834
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x101850
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101880
void register_tm_clones(void)
{
  return;
}

// Function: FUN_001018bc @ 0x1018bc
void FUN_001018bc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x1018c0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: signal_handler @ 0x101914
void signal_handler(undefined4 param_1)
{
  signal_received = 1;
  signal_number = param_1;
  return;
}

// Function: thread_sum @ 0x10192c
undefined8 thread_sum(int *param_1)
{
  int iVar1;
  int iVar2;
  param_1[2] = 0;
  iVar1 = *param_1;
  if (iVar1 <= param_1[1]) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_1[1] + 1);
    param_1[2] = iVar2;
  }
  return 0;
}

// Function: thread_compute @ 0x101964
void thread_compute(int *param_1)
{
  int iVar1;
  int *piVar2;
  iVar1 = *param_1;
  piVar2 = (int *)malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}

// Function: thread_increment @ 0x101990
undefined8 thread_increment(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = *param_1;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
      usleep(1000);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return 0;
}

// Function: consumer_thread @ 0x101a0c
void consumer_thread(void)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  uVar1 = data;
  while (data = uVar1, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
    uVar1 = data;
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar2 = (undefined4 *)malloc(4);
  *puVar2 = uVar1;
  return;
}

// Function: producer_thread @ 0x101a88
undefined8 producer_thread(void)
{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}

// Function: thread_atomic_increment @ 0x101ae0
undefined8 thread_atomic_increment(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = *param_1;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      __aarch64_ldadd4_acq_rel(1,&atomic_counter);
      __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return 0;
}

// Function: thread_atomic_load_store @ 0x101b4c
undefined8 thread_atomic_load_store(void)
{
  atomic_counter._0_4_ = (int)atomic_counter + 100;
  return 0;
}

// Function: thread_tls_test @ 0x101b6c
void thread_tls_test(char *param_1)
{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  lVar3 = tpidr_el0;
  iVar2 = *(int *)(lVar3 + 0x10);
  iVar1 = iVar2 + 0x32;
  *(int *)(lVar3 + 0x10) = iVar1;
  strncpy((char *)(lVar3 + 0x18),param_1,0x1f);
  piVar4 = (int *)malloc(8);
  *piVar4 = iVar2;
  piVar4[1] = iVar1;
  return;
}

// Function: param_strcpy @ 0x101bc0
void param_strcpy(char *param_1,char *param_2)
{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}

// Function: call_strcpy @ 0x101be8
void call_strcpy(void)
{
  undefined8 uVar1;
  undefined auStack_28 [32];
  long local_8;
  local_8 = ___stack_chk_guard;
  uVar1 = param_strcpy(auStack_28,"HelloLib");
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_strcmp @ 0x101c3c
int param_strcmp(char *param_1,char *param_2)
{
  int iVar1;
  int iVar2;
  iVar2 = strcmp(param_1,param_2);
  iVar1 = iVar2 >> 0x1f;
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}

// Function: call_strcmp @ 0x101c5c
int call_strcmp(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = param_strcmp(&DAT_00103408,&DAT_00103400);
  iVar2 = param_strcmp(&DAT_00103410,&DAT_00103410);
  iVar3 = param_strcmp(&DAT_00103420,&DAT_00103418);
  return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101cbc
void param_strlen(char *param_1)
{
  strlen(param_1);
  return;
}

// Function: call_strlen @ 0x101cd0
undefined8 call_strlen(void)
{
  return 0xc;
}

// Function: param_memcpy @ 0x101cd8
ulong param_memcpy(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101cfc
void call_memcpy(void)
{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_38 = 0x140000000a;
  uStack_30 = 0x280000001e;
  local_28 = 0x32;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  param_memcpy(&local_20,&local_38,0x14);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail((int)local_20 + (int)local_18 + local_10,&__stack_chk_guard,0,
                   local_8 - ___stack_chk_guard);
}

// Function: param_memcmp @ 0x101d84
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  int iVar2;
  iVar2 = memcmp(param_1,param_2,param_3);
  iVar1 = iVar2 >> 0x1f;
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}

// Function: call_memcmp @ 0x101da4
void call_memcmp(void)
{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_38 = 0x200000001;
  local_30 = 3;
  local_28 = 0x200000001;
  local_20 = 4;
  local_18 = 0x200000001;
  local_10 = 3;
  iVar1 = param_memcmp(&local_38,&local_28,0xc);
  iVar2 = param_memcmp(&local_38,&local_18,0xc);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_printf @ 0x101e58
void param_printf(undefined4 param_1,undefined8 param_2)
{
  __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
  return;
}

// Function: call_printf @ 0x101e80
void call_printf(void)
{
  param_printf(0x2a,&DAT_00103440);
  return;
}

// Function: param_scanf @ 0x101ea0
void param_scanf(undefined8 param_1)
{
  int iVar1;
  int local_10;
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&local_c);
  if (iVar1 == 2) {
    local_10 = local_10 + local_c;
  }
  else {
    local_10 = -1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(local_10,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: call_scanf @ 0x101f14
void call_scanf(void)
{
  param_scanf("123,456");
  return;
}

// Function: param_fopen_fclose @ 0x101f30
int param_fopen_fclose(char *param_1)
{
  int iVar1;
  FILE *__stream;
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

// Function: call_fopen_fclose @ 0x101f78
undefined4 call_fopen_fclose(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_fopen_fclose("/etc/passwd");
  uVar2 = 0x2a;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: param_fread_fwrite @ 0x101fa0
void param_fread_fwrite(char *param_1)
{
  int iVar1;
  undefined4 uVar2;
  FILE *__s;
  size_t sVar3;
  char acStack_28 [32];
  long local_8;
  local_8 = ___stack_chk_guard;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar3 == 0x12) {
      rewind(__s);
      sVar3 = fread(acStack_28,1,0x12,__s);
      acStack_28[sVar3] = '\0';
      fclose(__s);
      unlink(param_1);
      if (sVar3 == 0x12) {
        iVar1 = strcmp(acStack_28,"BinBench Test Data");
        uVar2 = 0xfffffffd;
        if (iVar1 == 0) {
          uVar2 = 0x2a;
        }
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      fclose(__s);
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: call_fread_fwrite @ 0x1020b8
void call_fread_fwrite(void)
{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}

// Function: param_malloc_free @ 0x1020d4
int param_malloc_free(long param_1)
{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int *piVar3;
  __ptr = (int *)malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    if (param_1 != 0) {
      iVar1 = 0;
      piVar2 = __ptr;
      do {
        piVar3 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 10;
        piVar2 = piVar3;
      } while (piVar3 != __ptr + param_1);
    }
    iVar1 = __ptr[param_1 + -1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}

// Function: call_malloc_free @ 0x102140
void call_malloc_free(void)
{
  param_malloc_free(10);
  return;
}

// Function: param_memset @ 0x102158
int param_memset(byte *param_1,size_t param_2)
{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  memset(param_1,0,param_2);
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    pbVar3 = param_1;
    do {
      pbVar2 = pbVar3 + 1;
      iVar1 = iVar1 + (uint)*pbVar3;
      pbVar3 = pbVar2;
    } while (pbVar2 != param_1 + param_2);
  }
  return iVar1;
}

// Function: call_memset @ 0x1021ac
void call_memset(void)
{
  long *plVar1;
  long local_30 [4];
  int local_c;
  long local_8;
  long *plVar2;
  local_8 = ___stack_chk_guard;
  plVar2 = local_30;
  do {
    plVar1 = (long *)((long)plVar2 + 4);
    *(undefined4 *)plVar2 = 0xff;
    plVar2 = plVar1;
  } while (plVar1 != &local_8);
  param_memset(local_30,0x28);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail((int)local_30[0] + local_c,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_strchr_strstr @ 0x102220
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
  char *pcVar1;
  int iVar2;
  int iVar3;
  pcVar1 = strchr(param_1,param_2 & 0xff);
  iVar3 = (int)pcVar1 - (int)param_1;
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  pcVar1 = strstr(param_1,param_3);
  iVar2 = (int)pcVar1 - (int)param_1;
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  return iVar3 + iVar2;
}

// Function: call_strchr_strstr @ 0x102278
void call_strchr_strstr(void)
{
  param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return;
}

// Function: test_standard_library_functions @ 0x1022a0
void test_standard_library_functions(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = puts(&DAT_001034c8);
  uVar2 = call_strcpy(iVar1);
  __printf_chk(1,&DAT_001034f0,uVar2);
  uVar2 = call_strcmp();
  __printf_chk(1,&DAT_00103510,uVar2);
  uVar2 = call_strlen();
  __printf_chk(1,&DAT_00103530,uVar2);
  uVar2 = call_memcpy();
  __printf_chk(1,&DAT_00103550,uVar2);
  uVar2 = call_memcmp();
  __printf_chk(1,&DAT_00103570,uVar2);
  uVar2 = call_printf();
  __printf_chk(1,&DAT_00103590,uVar2);
  uVar2 = call_scanf();
  __printf_chk(1,&DAT_001035b0,uVar2);
  uVar2 = call_fopen_fclose();
  __printf_chk(1,&DAT_001035d0,uVar2);
  uVar2 = call_fread_fwrite();
  __printf_chk(1,&DAT_001035f0,uVar2);
  uVar2 = call_malloc_free();
  __printf_chk(1,&DAT_00103610,uVar2);
  uVar2 = call_memset();
  __printf_chk(1,&DAT_00103630,uVar2);
  uVar2 = call_strchr_strstr();
  __printf_chk(1,&DAT_00103650,uVar2);
  return;
}

// Function: param_linux_syscall @ 0x1023dc
ulong param_linux_syscall(undefined8 param_1)
{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  uVar1 = syscall(0x38,0xffffff9c,param_1,0);
  if ((int)uVar1 < 0) {
    piVar2 = __errno_location();
    uVar3 = (ulong)(uint)-*piVar2;
  }
  else {
    uVar3 = uVar1 & 0xffffffff;
    syscall(0x39,uVar1 & 0xffffffff);
  }
  return uVar3;
}

// Function: call_linux_syscall @ 0x102430
undefined4 call_linux_syscall(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_linux_syscall("/etc/passwd");
  uVar2 = 0x2a;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: param_win32_api @ 0x102458
void param_win32_api(char *param_1)
{
  int iVar1;
  undefined4 uVar2;
  long local_58;
  long local_8;
  local_8 = ___stack_chk_guard;
  iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
    if (local_58 < 1) {
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: call_win32_api @ 0x1024c4
void call_win32_api(void)
{
  param_win32_api("/etc/passwd");
  return;
}

// Function: param_fork_exec @ 0x1024e0
void param_fork_exec(char *param_1,undefined8 param_2)
{
  __pid_t _Var1;
  uint uVar2;
  uint local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl(param_1,param_1,param_2,0);
      _exit(0x7f);
    }
    _Var1 = waitpid(_Var1,(int *)&local_c,0);
    uVar2 = 0xfffffffe;
    if ((-1 < _Var1) && (uVar2 = local_c >> 8 & 0xff, (local_c & 0x7f) != 0)) {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: call_fork_exec @ 0x102590
undefined4 call_fork_exec(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_fork_exec("/bin/true",0);
  uVar2 = 0x2a;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: param_pipe_communication @ 0x1025bc
void param_pipe_communication(void)
{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  ssize_t sVar4;
  int local_30;
  int local_2c;
  undefined auStack_28 [32];
  long local_8;
  local_8 = ___stack_chk_guard;
  iVar1 = pipe(&local_30);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      if (_Var2 == 0) {
        close(local_30);
        write(local_2c,"HelloPipe",9);
        close(local_2c);
        _exit(0);
      }
      close(local_2c);
      sVar4 = read(local_30,auStack_28,0x1f);
      auStack_28[sVar4] = 0;
      close(local_30);
      wait((void *)0x0);
      uVar3 = 0x2a;
      if (sVar4 < 1) {
        uVar3 = 0xfffffffd;
      }
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: call_pipe_communication @ 0x1026a4
void call_pipe_communication(void)
{
  param_pipe_communication();
  return;
}

// Function: param_socket_create @ 0x1026b8
void param_socket_create(void)
{
  int __fd;
  int iVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  sockaddr local_18;
  long local_8;
  local_8 = ___stack_chk_guard;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_1c = 1;
    iVar1 = setsockopt(__fd,1,2,&local_1c,4);
    if (iVar1 < 0) {
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      local_18.sa_data[6] = '\0';
      local_18.sa_data[7] = '\0';
      local_18.sa_data[8] = '\0';
      local_18.sa_data[9] = '\0';
      local_18.sa_data[10] = '\0';
      local_18.sa_data[11] = '\0';
      local_18.sa_data[12] = '\0';
      local_18.sa_data[13] = '\0';
      local_18.sa_family = 2;
      local_18.sa_data[0] = '\0';
      local_18.sa_data[1] = '\0';
      local_18.sa_data[2] = '\0';
      local_18.sa_data[3] = '\0';
      local_18.sa_data[4] = '\0';
      local_18.sa_data[5] = '\0';
      iVar1 = bind(__fd,&local_18,0x10);
      if (iVar1 < 0) {
        close(__fd);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(__fd,5);
        if (iVar1 < 0) {
          close(__fd);
          uVar2 = 0xfffffffc;
        }
        else {
          close(__fd);
          uVar2 = 0x2a;
        }
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: call_socket_create @ 0x1027bc
void call_socket_create(void)
{
  param_socket_create();
  return;
}

// Function: param_shmget_shmat @ 0x1027d0
ulong param_shmget_shmat(void)
{
  int iVar1;
  key_t __key;
  undefined8 *__s;
  size_t sVar2;
  ulong uVar3;
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        uVar3 = 0xfffffffe;
      }
      else {
        __s = (undefined8 *)shmat(iVar1,(void *)0x0,0);
        if (__s == (undefined8 *)0xffffffffffffffff) {
          uVar3 = 0xfffffffd;
        }
        else {
          *__s = 0x654d646572616853;
          *(undefined8 *)((long)__s + 5) = 0x79726f6d654d64;
          sVar2 = strlen((char *)__s);
          uVar3 = sVar2 & 0xffffffff;
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return uVar3;
}

// Function: call_shmget_shmat @ 0x1028b4
undefined4 call_shmget_shmat(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_shmget_shmat();
  uVar2 = 0x2a;
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: param_signal_handling @ 0x1028d4
undefined8 param_signal_handling(void)
{
  __sighandler_t p_Var1;
  undefined8 uVar2;
  int iVar3;
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
      uVar2 = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        iVar3 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (signal_received == 0) {
        uVar2 = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        if (signal_received == 0) {
          iVar3 = 2000;
          do {
            usleep(1000);
            if (signal_received != 0) break;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (signal_received == 0) {
          uVar2 = 0xfffffffb;
        }
        else if (signal_number == 0xe) {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          uVar2 = 0x2a;
        }
        else {
          uVar2 = 0xfffffffb;
        }
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
  }
  return uVar2;
}

// Function: call_signal_handling @ 0x102a48
void call_signal_handling(void)
{
  param_signal_handling();
  return;
}

// Function: test_system_calls @ 0x102a5c
void test_system_calls(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = puts(&DAT_001036b8);
  uVar2 = call_linux_syscall(iVar1);
  __printf_chk(1,&DAT_001036d8,uVar2);
  uVar2 = call_win32_api();
  __printf_chk(1,&DAT_001036f8,uVar2);
  uVar2 = call_fork_exec();
  __printf_chk(1,&DAT_00103718,uVar2);
  uVar2 = param_pipe_communication();
  __printf_chk(1,&DAT_00103738,uVar2);
  uVar2 = param_socket_create();
  __printf_chk(1,&DAT_00103758,uVar2);
  uVar2 = call_shmget_shmat();
  __printf_chk(1,&DAT_00103778,uVar2);
  uVar2 = param_signal_handling();
  __printf_chk(1,&DAT_00103798,uVar2);
  return;
}

// Function: param_pthread_create @ 0x102b20
undefined4 param_pthread_create(undefined4 param_1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_1c = param_1;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: call_pthread_create @ 0x102bb0
void call_pthread_create(void)
{
  param_pthread_create(7);
  return;
}

// Function: param_pthread_join @ 0x102bc8
int param_pthread_join(void)
{
  int iVar1;
  pthread_t *__arg;
  long lVar2;
  pthread_t *__newthread;
  int iVar3;
  pthread_t *ppVar4;
  pthread_t local_48 [4];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  __arg = local_48 + 3;
  uStack_28 = 0xb00000000;
  local_48[3] = 0xa00000001;
  uStack_18 = 0x1e00000015;
  uStack_20 = 0x14;
  local_10 = 0;
  ppVar4 = local_48;
  iVar3 = 3;
  __newthread = ppVar4;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar3 = -1;
      goto LAB_00102c84;
    }
    __newthread = __newthread + 1;
    __arg = (pthread_t *)((long)__arg + 0xc);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  lVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = pthread_join(*ppVar4,(void **)0x0);
    if (iVar1 != 0) {
      iVar3 = -2;
      break;
    }
    iVar3 = iVar3 + *(int *)((long)&uStack_28 + lVar2);
    ppVar4 = ppVar4 + 1;
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x24);
LAB_00102c84:
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar3;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: call_pthread_join @ 0x102ccc
void call_pthread_join(void)
{
  param_pthread_join();
  return;
}

// Function: param_mutex_lock @ 0x102ce0
undefined4 param_mutex_lock(ulong param_1,int param_2)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  int iVar5;
  int local_4;
  local_4 = param_2;
  __ptr = (pthread_t *)
          malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    iVar5 = (int)(param_1 & 0xffffffff);
    if (0 < iVar5) {
      ppVar3 = __ptr;
      do {
        iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_4);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        ppVar3 = ppVar3 + 1;
        ppVar4 = __ptr;
      } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
      do {
        ppVar3 = ppVar4 + 1;
        pthread_join(*ppVar4,(void **)0x0);
        ppVar4 = ppVar3;
      } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
    }
    free(__ptr);
    uVar2 = 0x2a;
    if (shared_counter != iVar5 * local_4) {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}

// Function: call_mutex_lock @ 0x102ddc
void call_mutex_lock(void)
{
  param_mutex_lock(4,1000);
  return;
}

// Function: param_condition_variable @ 0x102df8
undefined4 param_condition_variable(void)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_20;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_18,&local_10);
      pthread_join(local_20,(void **)0x0);
      uVar2 = *local_10;
      free(local_10);
    }
    else {
      pthread_cancel(local_18);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: call_condition_variable @ 0x102ec8
void call_condition_variable(void)
{
  param_condition_variable();
  return;
}

// Function: param_atomic_ops @ 0x102edc
void param_atomic_ops(ulong param_1,undefined4 param_2)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  pthread_t *__newthread;
  long lVar3;
  undefined4 local_14;
  pthread_t local_10;
  long local_8;
  param_1 = param_1 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  local_14 = param_2;
  __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    atomic_counter._0_4_ = 0;
    if ((int)param_1 < 1) {
      iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar1 == 0) {
        pthread_join(local_10,(void **)0x0);
      }
    }
    else {
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
        if (iVar1 != 0) {
          free(__ptr);
          uVar2 = 0xfffffffe;
          goto LAB_00102fd4;
        }
        __newthread = __newthread + 1;
      } while (__newthread != __ptr + param_1);
      iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar1 == 0) {
        pthread_join(local_10,(void **)0x0);
      }
      lVar3 = 0;
      do {
        pthread_join(__ptr[lVar3],(void **)0x0);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < (int)param_1);
    }
    iVar1 = (int)atomic_counter;
    free(__ptr);
    uVar2 = 0x2a;
    if (iVar1 < 1) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_00102fd4:
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: call_atomic_ops @ 0x103064
void call_atomic_ops(void)
{
  param_atomic_ops(4,500);
  return;
}

// Function: param_thread_local_storage @ 0x103080
void param_thread_local_storage(ulong param_1)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  void **__ptr_00;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  void **ppvVar6;
  int iVar8;
  pthread_t *__newthread;
  int iVar9;
  int *local_10;
  long local_8;
  void **ppvVar7;
  param_1 = param_1 & 0xffffffff;
  local_8 = ___stack_chk_guard;
  uVar4 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
  __ptr = (pthread_t *)malloc(uVar4);
  __ptr_00 = (void **)malloc(uVar4);
  if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void **)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar9 = (int)param_1;
    if (iVar9 < 1) {
      iVar8 = 0;
      iVar1 = 0;
    }
    else {
      uVar4 = 0;
      do {
        pvVar3 = malloc(0x10);
        __ptr_00[uVar4] = pvVar3;
        __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4 & 0xffffffff);
        uVar4 = uVar4 + 1;
      } while (uVar4 != param_1);
      uVar4 = 0;
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[uVar4]);
        if (iVar1 != 0) {
          if (-1 < (int)uVar4) {
            ppvVar6 = __ptr_00;
            do {
              ppvVar7 = ppvVar6 + 1;
              free(*ppvVar6);
              ppvVar6 = ppvVar7;
            } while (ppvVar7 != __ptr_00 + (uVar4 & 0xffffffff) + 1);
          }
          free(__ptr_00);
          free(__ptr);
          uVar2 = 0xfffffffe;
          goto LAB_001031ec;
        }
        uVar4 = uVar4 + 1;
        __newthread = __newthread + 1;
      } while (uVar4 != param_1);
      lVar5 = 0;
      iVar1 = 0;
      iVar8 = 0;
      do {
        pthread_join(*(pthread_t *)((long)__ptr + lVar5),&local_10);
        iVar1 = iVar1 + *local_10;
        iVar8 = iVar8 + local_10[1];
        free(local_10);
        free(*(void **)((long)__ptr_00 + lVar5));
        lVar5 = lVar5 + 8;
      } while (lVar5 != param_1 * 8);
    }
    free(__ptr_00);
    free(__ptr);
    uVar2 = 0x2a;
    if (iVar9 * 100 != iVar1 || iVar9 * 0x96 != iVar8) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_001031ec:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: call_thread_local_storage @ 0x10327c
void call_thread_local_storage(void)
{
  param_thread_local_storage(4);
  return;
}

// Function: test_thread_concurrency @ 0x103294
void test_thread_concurrency(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = puts(&DAT_001037c8);
  uVar2 = call_pthread_create(iVar1);
  __printf_chk(1,&DAT_001037e8,uVar2);
  uVar2 = param_pthread_join();
  __printf_chk(1,&DAT_00103808,uVar2);
  uVar2 = call_mutex_lock();
  __printf_chk(1,&DAT_00103828,uVar2);
  uVar2 = param_condition_variable();
  __printf_chk(1,&DAT_00103848,uVar2);
  uVar2 = call_atomic_ops();
  __printf_chk(1,&DAT_00103868,uVar2);
  uVar2 = call_thread_local_storage();
  __printf_chk(1,&DAT_00103888,uVar2);
  return;
}

// Function: main @ 0x103340
undefined8 main(void)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103360
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  if (atomic_counter._4_1_ != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x1033a0
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
  int iVar1;
  char cVar2;
  bool bVar3;
  if (atomic_counter._4_1_ == '\0') {
    do {
      iVar1 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = iVar1 + param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return iVar1;
  }
  LOAcquire();
  tmp_ldWn = *param_2;
  iVar1 = tmp_ldWn;
  tmp_stWn = iVar1 + param_1;
  iVar1 = tmp_stWn;
  *param_2 = iVar1;
  iVar1 = tmp_ldWn;
  LORelease();
  return iVar1;
}

// Function: _fini @ 0x1033d0
void _fini(void)
{
  return;
}

