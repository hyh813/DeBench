// Decompiled by BinaryAI
// SHA256: ef0dad13224d91460b5c1f41ad9f3b0fd03a9751843038ed2dc23c720fce49b1

// Function: _init @ 0x10cac
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x10ccc
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::strstr @ 0x10cd8
char * strstr(char *__haystack,char *__needle)
{
  char *pcVar1;
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}

// Function: <EXTERNAL>::raise @ 0x10ce4
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10cf0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x10cfc
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x10d08
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
  int iVar1;
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x10d14
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x10d20
FILE * fopen(char *__filename,char *__modes)
{
  FILE *pFVar1;
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}

// Function: <EXTERNAL>::read @ 0x10d2c
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
  ssize_t sVar1;
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}

// Function: <EXTERNAL>::free @ 0x10d38
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x10d44
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::_exit @ 0x10d50
void _exit(int __status)
{
  _exit(__status);
}

// Function: <EXTERNAL>::memcpy @ 0x10d5c
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::shmget @ 0x10d68
int shmget(key_t __key,size_t __size,int __shmflg)
{
  int iVar1;
  iVar1 = shmget(__key,__size,__shmflg);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x10d74
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::memcmp @ 0x10d80
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::sleep @ 0x10d8c
uint sleep(uint __seconds)
{
  uint uVar1;
  uVar1 = sleep(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10d98
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::htons @ 0x10da4
uint16_t htons(uint16_t __hostshort)
{
  uint16_t uVar1;
  uVar1 = htons(__hostshort);
  return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x10db0
void rewind(FILE *__stream)
{
  rewind(__stream);
  return;
}

// Function: <EXTERNAL>::alarm @ 0x10dbc
uint alarm(uint __seconds)
{
  uint uVar1;
  uVar1 = alarm(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::unlink @ 0x10dc8
int unlink(char *__name)
{
  int iVar1;
  iVar1 = unlink(__name);
  return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x10dd4
__pid_t wait(void *__stat_loc)
{
  __pid_t _Var1;
  _Var1 = wait(__stat_loc);
  return _Var1;
}

// Function: <EXTERNAL>::shmat @ 0x10de0
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
  void *pvVar1;
  pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
  return pvVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x10dec
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
  size_t sVar1;
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}

// Function: <EXTERNAL>::usleep @ 0x10df8
int usleep(__useconds_t __useconds)
{
  int iVar1;
  iVar1 = usleep(__useconds);
  return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x10e04
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::strcpy @ 0x10e10
char * strcpy(char *__dest,char *__src)
{
  char *pcVar1;
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}

// Function: <EXTERNAL>::fread @ 0x10e1c
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x10e28
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
  int iVar1;
  iVar1 = shmctl(__shmid,__cmd,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10e34
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10e40
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::stat @ 0x10e58
int stat(char *__file,stat *__buf)
{
  int iVar1;
  iVar1 = stat(__file,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::open @ 0x10e64
int open(char *__file,int __oflag,...)
{
  int iVar1;
  iVar1 = open(__file,__oflag);
  return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x10e70
long syscall(long __sysno,...)
{
  long lVar1;
  lVar1 = syscall(__sysno);
  return lVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10e7c
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::strchr @ 0x10e88
char * strchr(char *__s,int __c)
{
  char *pcVar1;
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x10e94
int * __errno_location(void)
{
  int *piVar1;
  piVar1 = __errno_location();
  return piVar1;
}

// Function: <EXTERNAL>::snprintf @ 0x10ea0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
  int iVar1;
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x10eac
void __isoc99_sscanf(void)
{
  __isoc99_sscanf();
  return;
}

// Function: <EXTERNAL>::bind @ 0x10eb8
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
  int iVar1;
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x10ec4
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10ed0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::write @ 0x10edc
ssize_t write(int __fd,void *__buf,size_t __n)
{
  ssize_t sVar1;
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}

// Function: <EXTERNAL>::fileno @ 0x10ee8
int fileno(FILE *__stream)
{
  int iVar1;
  iVar1 = fileno(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x10ef4
int shmdt(void *__shmaddr)
{
  int iVar1;
  iVar1 = shmdt(__shmaddr);
  return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x10f00
int fclose(FILE *__stream)
{
  int iVar1;
  iVar1 = fclose(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x10f0c
int pipe(int *__pipedes)
{
  int iVar1;
  iVar1 = pipe(__pipedes);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x10f18
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)
{
  int iVar1;
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x10f24
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::execl @ 0x10f30
int execl(char *__path,char *__arg,...)
{
  int iVar1;
  iVar1 = execl(__path,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x10f3c
int listen(int __fd,int __n)
{
  int iVar1;
  iVar1 = listen(__fd,__n);
  return iVar1;
}

// Function: <EXTERNAL>::ftok @ 0x10f48
key_t ftok(char *__pathname,int __proj_id)
{
  key_t kVar1;
  kVar1 = ftok(__pathname,__proj_id);
  return kVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x10f54
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x10f60
int socket(int __domain,int __type,int __protocol)
{
  int iVar1;
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x10f6c
int pthread_join(pthread_t __th,void **__thread_return)
{
  int iVar1;
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x10f78
int pthread_cancel(pthread_t __th)
{
  int iVar1;
  iVar1 = pthread_cancel(__th);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x10f84
int pthread_cond_signal(pthread_cond_t *__cond)
{
  int iVar1;
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10f90
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::close @ 0x10f9c
int close(int __fd)
{
  int iVar1;
  iVar1 = close(__fd);
  return iVar1;
}

// Function: _start @ 0x10fb0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x10ff4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x11018
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11044
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1107c
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: param_strcpy @ 0x110a8
size_t param_strcpy(char *param_1,char *param_2)
{
  size_t sVar1;
  strcpy(param_1,param_2);
  sVar1 = strlen(param_1);
  return sVar1;
}

// Function: call_strcpy @ 0x110e0
undefined4 call_strcpy(void)
{
  undefined4 uVar1;
  undefined auStack_2c [32];
  int local_c;
  local_c = 0;
  uVar1 = param_strcpy(auStack_2c,"HelloLib");
  if (local_c != 0) {
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}

// Function: param_strcmp @ 0x11144
undefined4 param_strcmp(char *param_1,char *param_2)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// Function: call_strcmp @ 0x111a0
int call_strcmp(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = param_strcmp(&DAT_00014394,&DAT_00014390);
  iVar2 = param_strcmp(&DAT_00014398,&DAT_00014398);
  iVar3 = param_strcmp(&DAT_000143a0,&DAT_0001439c);
  return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x11210
size_t param_strlen(char *param_1)
{
  size_t sVar1;
  sVar1 = strlen(param_1);
  return sVar1;
}

// Function: call_strlen @ 0x1123c
undefined4 call_strlen(void)
{
  undefined4 uVar1;
  uVar1 = param_strlen("BinBench2025");
  return uVar1;
}

// Function: param_memcpy @ 0x1126c
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return param_3;
}

// Function: call_memcpy @ 0x112a4
int call_memcpy(void)
{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  local_c = 0;
  local_34 = 10;
  uStack_30 = 0x14;
  uStack_2c = 0x1e;
  uStack_28 = 0x28;
  local_24 = 0x32;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar1 = param_memcpy(&local_20,&local_34,0x14);
  if (local_c != 0) {
    __stack_chk_fail(uVar1,local_c,0);
  }
  return local_20 + local_18 + local_10;
}

// Function: param_memcmp @ 0x11350
undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// Function: call_memcmp @ 0x113b4
int call_memcmp(void)
{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  local_c = 0;
  local_30 = 1;
  uStack_2c = 2;
  uStack_28 = 3;
  local_24 = 1;
  uStack_20 = 2;
  uStack_1c = 4;
  local_18 = 1;
  uStack_14 = 2;
  uStack_10 = 3;
  iVar1 = param_memcmp(&local_30,&local_24,0xc);
  iVar2 = param_memcmp(&local_30,&local_18,0xc);
  if (local_c != 0) {
    __stack_chk_fail(iVar2,local_c,0);
  }
  return iVar1 + iVar2;
}

// Function: param_printf @ 0x11470
int param_printf(undefined4 param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
  return iVar1;
}

// Function: call_printf @ 0x114ac
undefined4 call_printf(void)
{
  undefined4 uVar1;
  uVar1 = param_printf(0x2a,&DAT_000143f8);
  return uVar1;
}

// Function: param_scanf @ 0x114dc
int param_scanf(undefined4 param_1)
{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  local_c = 0;
  local_10 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
  if (local_10 == 2) {
    local_18 = local_18 + local_14;
  }
  else {
    local_18 = -1;
  }
  if (local_c != 0) {
    __stack_chk_fail(local_10,local_c,0);
  }
  return local_18;
}

// Function: call_scanf @ 0x11564
undefined4 call_scanf(void)
{
  undefined4 uVar1;
  uVar1 = param_scanf("123,456");
  return uVar1;
}

// Function: param_fopen_fclose @ 0x11584
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

// Function: call_fopen_fclose @ 0x115e4
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

// Function: param_fread_fwrite @ 0x11624
undefined4 param_fread_fwrite(char *param_1)
{
  FILE *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_2c [32];
  int local_c;
  local_c = 0;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar4 = 0xffffffff;
    iVar3 = 0;
  }
  else {
    sVar1 = strlen("BinBench Test Data");
    sVar1 = fwrite("BinBench Test Data",1,sVar1,__s);
    sVar2 = strlen("BinBench Test Data");
    if (sVar1 == sVar2) {
      rewind(__s);
      sVar2 = fread(acStack_2c,1,sVar1,__s);
      acStack_2c[sVar2] = '\0';
      fclose(__s);
      iVar3 = unlink(param_1);
      if ((sVar2 == sVar1) && (iVar3 = strcmp(acStack_2c,"BinBench Test Data"), iVar3 == 0)) {
        uVar4 = 0x2a;
      }
      else {
        uVar4 = 0xfffffffd;
      }
    }
    else {
      iVar3 = fclose(__s);
      uVar4 = 0xfffffffe;
    }
  }
  if (local_c != 0) {
    __stack_chk_fail(iVar3,local_c,0);
  }
  return uVar4;
}

// Function: call_fread_fwrite @ 0x1176c
undefined4 call_fread_fwrite(void)
{
  undefined4 uVar1;
  uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return uVar1;
}

// Function: param_malloc_free @ 0x1178c
int param_malloc_free(uint param_1)
{
  int *__ptr;
  int iVar1;
  uint local_14;
  __ptr = (int *)malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      __ptr[local_14] = local_14 * 10;
    }
    iVar1 = *__ptr + __ptr[param_1 + 0x3fffffff];
    free(__ptr);
  }
  return iVar1;
}

// Function: call_malloc_free @ 0x11868
undefined4 call_malloc_free(void)
{
  undefined4 uVar1;
  uVar1 = param_malloc_free(10);
  return uVar1;
}

// Function: param_memset @ 0x11884
int param_memset(void *param_1,size_t param_2)
{
  int local_14;
  uint local_10;
  memset(param_1,0,param_2);
  local_14 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_14 = local_14 + (uint)*(byte *)((int)param_1 + local_10);
  }
  return local_14;
}

// Function: call_memset @ 0x11910
int call_memset(void)
{
  undefined4 uVar1;
  int local_38;
  int local_34 [10];
  int local_c;
  local_c = 0;
  for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
    local_34[local_38] = 0xff;
  }
  uVar1 = param_memset(local_34,0x28);
  if (local_c != 0) {
    __stack_chk_fail(uVar1,local_c,0);
  }
  return local_34[0] + local_34[9];
}

// Function: param_strchr_strstr @ 0x119b0
int param_strchr_strstr(char *param_1,byte param_2,char *param_3)
{
  char *pcVar1;
  int iVar2;
  int iVar3;
  pcVar1 = strchr(param_1,(uint)param_2);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)param_1;
  }
  return iVar2 + iVar3;
}

// Function: call_strchr_strstr @ 0x11a50
undefined4 call_strchr_strstr(void)
{
  undefined4 uVar1;
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}

// Function: test_standard_library_functions @ 0x11a90
int test_standard_library_functions(void)
{
  undefined4 uVar1;
  int iVar2;
  puts(&DAT_0001446c);
  uVar1 = call_strcpy();
  printf(&DAT_00014490,uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_000144ac,uVar1);
  uVar1 = call_strlen();
  printf(&DAT_000144c8,uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_000144e4,uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_00014500,uVar1);
  uVar1 = call_printf();
  printf(&DAT_0001451c,uVar1);
  uVar1 = call_scanf();
  printf(&DAT_00014538,uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_00014558,uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_00014574,uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_00014590,uVar1);
  uVar1 = call_memset();
  printf(&DAT_000145ac,uVar1);
  uVar1 = call_strchr_strstr();
  iVar2 = printf(&DAT_000145c8,uVar1);
  return iVar2;
}

// Function: param_linux_syscall @ 0x11bcc
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

// Function: call_linux_syscall @ 0x11c2c
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

// Function: param_win32_api @ 0x11c6c
undefined4 param_win32_api(char *param_1)
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
  if (local_c != 0) {
    __stack_chk_fail(iVar1,local_c,0);
  }
  return uVar2;
}

// Function: call_win32_api @ 0x11cf4
undefined4 call_win32_api(void)
{
  undefined4 uVar1;
  uVar1 = param_win32_api("/etc/passwd");
  return uVar1;
}

// Function: param_fork_exec @ 0x11d14
uint param_fork_exec(char *param_1,undefined4 param_2)
{
  __pid_t __pid;
  uint uVar1;
  uint local_18;
  __pid_t local_14;
  __pid_t local_10;
  int local_c;
  local_c = 0;
  __pid = fork();
  local_14 = __pid;
  if (__pid < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (__pid == 0) {
      execl(param_1,param_1,param_2,0);
      _exit(0x7f);
    }
    __pid = waitpid(__pid,(int *)&local_18,0);
    local_10 = __pid;
    if (__pid < 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((local_18 & 0x7f) == 0) {
      uVar1 = (int)local_18 >> 8 & 0xff;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  if (local_c != 0) {
    __stack_chk_fail(__pid,local_c,0);
  }
  return uVar1;
}

// Function: call_fork_exec @ 0x11dfc
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

// Function: param_pipe_communication @ 0x11e40
undefined4 param_pipe_communication(void)
{
  int iVar1;
  size_t __n;
  ssize_t sVar2;
  undefined4 uVar3;
  int local_3c;
  int local_38;
  undefined auStack_34 [32];
  int local_14;
  local_14 = 0;
  iVar1 = pipe(&local_3c);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = fork();
    if (iVar1 < 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      if (iVar1 == 0) {
        close(local_3c);
        iVar1 = local_38;
        __n = strlen("HelloPipe");
        write(iVar1,"HelloPipe",__n);
        close(local_38);
        _exit(0);
      }
      close(local_38);
      sVar2 = read(local_3c,auStack_34,0x1f);
      auStack_34[sVar2] = 0;
      close(local_3c);
      iVar1 = wait((void *)0x0);
      if (sVar2 < 1) {
        uVar3 = 0xfffffffd;
      }
      else {
        uVar3 = 0x2a;
      }
    }
  }
  if (local_14 != 0) {
    __stack_chk_fail(iVar1,local_14,0);
  }
  return uVar3;
}

// Function: call_pipe_communication @ 0x11f84
undefined4 call_pipe_communication(void)
{
  undefined4 uVar1;
  uVar1 = param_pipe_communication();
  return uVar1;
}

// Function: param_socket_create @ 0x11f9c
undefined4 param_socket_create(void)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20;
  sockaddr local_1c;
  int local_c;
  local_c = 0;
  iVar1 = socket(2,1,0);
  local_20 = iVar1;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_24 = 1;
    iVar1 = setsockopt(iVar1,1,2,&local_24,4);
    if (iVar1 < 0) {
      iVar1 = close(local_20);
      uVar2 = 0xfffffffe;
    }
    else {
      memset(&local_1c,0,0x10);
      local_1c.sa_family = 2;
      local_1c.sa_data._0_2_ = htons(0);
      local_1c.sa_data[2] = '\0';
      local_1c.sa_data[3] = '\0';
      local_1c.sa_data[4] = '\0';
      local_1c.sa_data[5] = '\0';
      iVar1 = bind(local_20,&local_1c,0x10);
      if (iVar1 < 0) {
        iVar1 = close(local_20);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(local_20,5);
        if (iVar1 < 0) {
          iVar1 = close(local_20);
          uVar2 = 0xfffffffc;
        }
        else {
          iVar1 = close(local_20);
          uVar2 = 0x2a;
        }
      }
    }
  }
  if (local_c != 0) {
    __stack_chk_fail(iVar1,local_c,0);
  }
  return uVar2;
}

// Function: call_socket_create @ 0x120e4
undefined4 call_socket_create(void)
{
  undefined4 uVar1;
  uVar1 = param_socket_create();
  return uVar1;
}

// Function: param_shmget_shmat @ 0x120fc
size_t param_shmget_shmat(void)
{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
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
        __s = (char *)shmat(iVar1,(void *)0x0,0);
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

// Function: call_shmget_shmat @ 0x12218
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

// Function: signal_handler @ 0x12250
undefined4 signal_handler(undefined4 param_1)
{
  signal_received = 1;
  signal_number = param_1;
  return param_1;
}

// Function: param_signal_handling @ 0x12290
undefined4 param_signal_handling(void)
{
  __sighandler_t p_Var1;
  undefined4 uVar2;
  int local_c;
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffff) {
      uVar2 = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      local_c = 1000;
      while ((signal_received == 0 && (0 < local_c))) {
        usleep(1000);
        local_c = local_c + -1;
      }
      if (signal_received == 0) {
        uVar2 = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        local_c = 2000;
        while ((signal_received == 0 && (0 < local_c))) {
          usleep(1000);
          local_c = local_c + -1;
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          uVar2 = 0xfffffffb;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          uVar2 = 0x2a;
        }
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
  }
  return uVar2;
}

// Function: call_signal_handling @ 0x12400
undefined4 call_signal_handling(void)
{
  undefined4 uVar1;
  uVar1 = param_signal_handling();
  return uVar1;
}

// Function: test_system_calls @ 0x12418
int test_system_calls(void)
{
  undefined4 uVar1;
  int iVar2;
  puts(&DAT_00014620);
  uVar1 = call_linux_syscall();
  printf(&DAT_0001463c,uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_00014658,uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_00014674,uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_00014690,uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_000146ac,uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_000146c8,uVar1);
  uVar1 = call_signal_handling();
  iVar2 = printf(&DAT_000146e4,uVar1);
  return iVar2;
}

// Function: thread_compute @ 0x124dc
int * thread_compute(int *param_1)
{
  int *piVar1;
  int iVar2;
  iVar2 = *param_1;
  piVar1 = (int *)malloc(4);
  *piVar1 = iVar2 * iVar2;
  return piVar1;
}

// Function: param_pthread_create @ 0x12540
undefined4 param_pthread_create(undefined4 param_1)
{
  undefined4 uVar1;
  pthread_t local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  local_c = 0;
  local_1c = param_1;
  local_14 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (local_14 == 0) {
    pthread_join(local_20,&local_18);
    local_10 = *local_18;
    free(local_18);
    uVar1 = local_10;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return uVar1;
}

// Function: call_pthread_create @ 0x125f4
undefined4 call_pthread_create(void)
{
  undefined4 uVar1;
  uVar1 = param_pthread_create(7);
  return uVar1;
}

// Function: thread_sum @ 0x12610
undefined4 thread_sum(int *param_1)
{
  int local_10;
  param_1[2] = 0;
  for (local_10 = *param_1; local_10 <= param_1[1]; local_10 = local_10 + 1) {
    param_1[2] = param_1[2] + local_10;
  }
  return 0;
}

// Function: param_pthread_join @ 0x12690
int param_pthread_join(void)
{
  int iVar1;
  int local_48;
  int local_44;
  int local_40;
  pthread_t apStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  local_c = 0;
  apStack_3c[3] = 1;
  uStack_2c = 10;
  uStack_28 = 0;
  uStack_24 = 0xb;
  iVar1 = 0x14;
  local_20 = 0x14;
  uStack_1c = 0;
  uStack_18 = 0x15;
  uStack_14 = 0x1e;
  local_10 = 0;
  for (local_48 = 0; local_48 < 3; local_48 = local_48 + 1) {
    iVar1 = pthread_create(apStack_3c + local_48,(pthread_attr_t *)0x0,thread_sum,
                           apStack_3c + local_48 * 3 + 3);
    if (iVar1 != 0) {
      local_44 = -1;
      goto LAB_000127d4;
    }
  }
  local_44 = 0;
  local_40 = 0;
  do {
    if (2 < local_40) {
LAB_000127d4:
      if (local_c == 0) {
        return local_44;
      }
      __stack_chk_fail(iVar1,local_c,0);
    }
    iVar1 = pthread_join(apStack_3c[local_40],(void **)0x0);
    if (iVar1 != 0) {
      local_44 = -2;
      goto LAB_000127d4;
    }
    local_44 = local_44 + apStack_3c[local_40 * 3 + 5];
    local_40 = local_40 + 1;
  } while( true );
}

// Function: call_pthread_join @ 0x12808
undefined4 call_pthread_join(void)
{
  undefined4 uVar1;
  uVar1 = param_pthread_join();
  return uVar1;
}

// Function: thread_increment @ 0x12820
undefined4 thread_increment(int *param_1)
{
  int iVar1;
  int local_10;
  iVar1 = *param_1;
  for (local_10 = 0; local_10 < iVar1; local_10 = local_10 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}

// Function: param_mutex_lock @ 0x128a8
undefined4 param_mutex_lock(int param_1,int param_2)
{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  local_20 = param_2;
  local_1c = param_1;
  local_10 = malloc(param_1 << 2);
  if (local_10 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)local_10 + local_18 * 4),(pthread_attr_t *)0x0,
                             thread_increment,&local_20);
      if (iVar1 != 0) {
        free(local_10);
        return 0xfffffffe;
      }
    }
    for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
      pthread_join(*(pthread_t *)((int)local_10 + local_14 * 4),(void **)0x0);
    }
    free(local_10);
    if (local_20 * local_1c == shared_counter) {
      uVar2 = 0x2a;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}

// Function: call_mutex_lock @ 0x129ec
undefined4 call_mutex_lock(void)
{
  undefined4 uVar1;
  uVar1 = param_mutex_lock(4,1000);
  return uVar1;
}

// Function: consumer_thread @ 0x12a0c
undefined4 * consumer_thread(void)
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
  return puVar2;
}

// Function: producer_thread @ 0x12a94
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

// Function: param_condition_variable @ 0x12afc
undefined4 param_condition_variable(void)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_1c;
  pthread_t local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  local_c = 0;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_18,&local_14);
      pthread_join(local_1c,(void **)0x0);
      local_10 = *local_14;
      free(local_14);
      uVar2 = local_10;
    }
    else {
      pthread_cancel(local_18);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return uVar2;
}

// Function: call_condition_variable @ 0x12c08
undefined4 call_condition_variable(void)
{
  undefined4 uVar1;
  uVar1 = param_condition_variable();
  return uVar1;
}

// Function: thread_atomic_increment @ 0x12c20
undefined4 thread_atomic_increment(int *param_1)
{
  int iVar1;
  int local_20;
  iVar1 = *param_1;
  for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
    __sync_fetch_and_add_4(&atomic_counter,1);
    __sync_val_compare_and_swap_4(&atomic_counter,local_20);
  }
  return 0;
}

// Function: thread_atomic_load_store @ 0x12d04
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

// Function: param_atomic_ops @ 0x12d58
undefined4 param_atomic_ops(int param_1,undefined4 param_2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  int local_2c;
  pthread_t local_28;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  local_14 = 0;
  local_30 = param_2;
  local_2c = param_1;
  local_1c = malloc(param_1 << 2);
  if (local_1c == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    __sync_synchronize();
    atomic_counter = 0;
    __sync_synchronize();
    for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)local_1c + local_24 * 4),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&local_30);
      if (iVar1 != 0) {
        free(local_1c);
        uVar2 = 0xfffffffe;
        goto LAB_00012ecc;
      }
    }
    iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_28,(void **)0x0);
    }
    local_20 = 0;
    while( true ) {
      if (local_2c <= local_20) break;
      pthread_join(*(pthread_t *)((int)local_1c + local_20 * 4),(void **)0x0);
      local_20 = local_20 + 1;
    }
    __sync_synchronize();
    local_18 = atomic_counter;
    __sync_synchronize();
    free(local_1c);
    if (local_18 < 1) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0x2a;
    }
  }
LAB_00012ecc:
  if (local_14 != 0) {
    __stack_chk_fail();
  }
  return uVar2;
}

// Function: call_atomic_ops @ 0x12f04
undefined4 call_atomic_ops(void)
{
  undefined4 uVar1;
  uVar1 = param_atomic_ops(4,500);
  return uVar1;
}

// Function: thread_tls_test @ 0x12f24
undefined4 * thread_tls_test(char *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  iVar1 = __aeabi_read_tp();
  uVar3 = *(undefined4 *)(iVar1 + 8);
  iVar1 = __aeabi_read_tp();
  iVar4 = *(int *)(iVar1 + 8) + 0x32;
  iVar1 = __aeabi_read_tp();
  *(int *)(iVar1 + 8) = iVar4;
  iVar1 = __aeabi_read_tp();
  strncpy((char *)(iVar1 + 0xc),param_1,0x1f);
  puVar2 = (undefined4 *)malloc(8);
  *puVar2 = uVar3;
  puVar5 = puVar2 + 1;
  iVar1 = __aeabi_read_tp();
  *puVar5 = *(undefined4 *)(iVar1 + 8);
  return puVar2;
}

// Function: param_thread_local_storage @ 0x12fe4
undefined4 param_thread_local_storage(int param_1)
{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  void **ppvVar4;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  local_14 = 0;
  local_28 = malloc(param_1 << 2);
  local_24 = malloc(param_1 << 2);
  if ((local_28 == (void *)0x0) || (local_24 == (void *)0x0)) {
    uVar3 = 0xffffffff;
  }
  else {
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      ppvVar4 = (void **)((int)local_24 + local_40 * 4);
      pvVar1 = malloc(0x10);
      *ppvVar4 = pvVar1;
      snprintf(*(char **)((int)local_24 + local_40 * 4),0x10,"Thread-%d",local_40);
    }
    for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
      iVar2 = pthread_create((pthread_t *)((int)local_28 + local_3c * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)local_24 + local_3c * 4));
      if (iVar2 != 0) {
        for (local_38 = 0; local_38 <= local_3c; local_38 = local_38 + 1) {
          free(*(void **)((int)local_24 + local_38 * 4));
        }
        free(local_24);
        free(local_28);
        uVar3 = 0xfffffffe;
        goto LAB_000132b4;
      }
    }
    local_34 = 0;
    local_30 = 0;
    for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
      pthread_join(*(pthread_t *)((int)local_28 + local_2c * 4),&local_44);
      local_18 = local_44;
      local_34 = local_34 + *local_44;
      local_30 = local_30 + local_44[1];
      free(local_44);
      free(*(void **)((int)local_24 + local_2c * 4));
    }
    free(local_24);
    free(local_28);
    local_20 = param_1 * 100;
    local_1c = param_1 * 0x96;
    if ((local_34 == local_20) && (local_30 == local_1c)) {
      uVar3 = 0x2a;
    }
    else {
      uVar3 = 0xfffffffd;
    }
  }
LAB_000132b4:
  if (local_14 != 0) {
    __stack_chk_fail();
  }
  return uVar3;
}

// Function: call_thread_local_storage @ 0x132e8
undefined4 call_thread_local_storage(void)
{
  undefined4 uVar1;
  uVar1 = param_thread_local_storage(4);
  return uVar1;
}

// Function: test_thread_concurrency @ 0x13304
int test_thread_concurrency(void)
{
  undefined4 uVar1;
  int iVar2;
  puts(&DAT_00014730);
  uVar1 = call_pthread_create();
  printf(&DAT_00014750,uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_0001476c,uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_0001478c,uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_000147a8,uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_000147c4,uVar1);
  uVar1 = call_thread_local_storage();
  iVar2 = printf(&DAT_000147e0,uVar1);
  return iVar2;
}

// Function: main @ 0x133b0
undefined4 main(void)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}

// Function: __sync_fetch_and_add_4 @ 0x133d0
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

// Function: __sync_fetch_and_sub_4 @ 0x13408
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

// Function: __sync_fetch_and_or_4 @ 0x13440
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

// Function: __sync_fetch_and_and_4 @ 0x13478
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

// Function: __sync_fetch_and_xor_4 @ 0x134b0
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

// Function: __sync_fetch_and_nand_4 @ 0x134e8
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

// Function: __sync_fetch_and_add_2 @ 0x13524
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

// Function: __sync_fetch_and_sub_2 @ 0x13584
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

// Function: __sync_fetch_and_or_2 @ 0x135e4
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

// Function: __sync_fetch_and_and_2 @ 0x13644
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

// Function: __sync_fetch_and_xor_2 @ 0x136a4
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

// Function: __sync_fetch_and_nand_2 @ 0x13704
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

// Function: __sync_fetch_and_add_1 @ 0x13768
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

// Function: __sync_fetch_and_sub_1 @ 0x137c4
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

// Function: __sync_fetch_and_or_1 @ 0x13820
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

// Function: __sync_fetch_and_and_1 @ 0x1387c
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

// Function: __sync_fetch_and_xor_1 @ 0x138d8
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

// Function: __sync_fetch_and_nand_1 @ 0x13934
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

// Function: __sync_add_and_fetch_4 @ 0x13994
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

// Function: __sync_sub_and_fetch_4 @ 0x139cc
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

// Function: __sync_or_and_fetch_4 @ 0x13a04
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

// Function: __sync_and_and_fetch_4 @ 0x13a3c
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

// Function: __sync_xor_and_fetch_4 @ 0x13a74
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

// Function: __sync_nand_and_fetch_4 @ 0x13aac
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

// Function: __sync_add_and_fetch_2 @ 0x13ae8
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

// Function: __sync_sub_and_fetch_2 @ 0x13b50
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

// Function: __sync_or_and_fetch_2 @ 0x13bb8
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

// Function: __sync_and_and_fetch_2 @ 0x13c20
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

// Function: __sync_xor_and_fetch_2 @ 0x13c88
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

// Function: __sync_nand_and_fetch_2 @ 0x13cf0
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

// Function: __sync_add_and_fetch_1 @ 0x13d5c
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

// Function: __sync_sub_and_fetch_1 @ 0x13dc0
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

// Function: __sync_or_and_fetch_1 @ 0x13e24
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

// Function: __sync_and_and_fetch_1 @ 0x13e88
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

// Function: __sync_xor_and_fetch_1 @ 0x13eec
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

// Function: __sync_nand_and_fetch_1 @ 0x13f50
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

// Function: __sync_val_compare_and_swap_4 @ 0x13fb8
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

// Function: __sync_val_compare_and_swap_2 @ 0x14008
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

// Function: __sync_val_compare_and_swap_1 @ 0x14080
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

// Function: __sync_bool_compare_and_swap_4 @ 0x140f4
bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  int iVar1;
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x14120
bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x1413c
bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x14164
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

// Function: __sync_lock_test_and_set_2 @ 0x1419c
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

// Function: __sync_lock_test_and_set_1 @ 0x141fc
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

// Function: __sync_lock_release_8 @ 0x14258
void __sync_lock_release_8(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// Function: __sync_lock_release_4 @ 0x1427c
void __sync_lock_release_4(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_2 @ 0x1429c
void __sync_lock_release_2(undefined2 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_1 @ 0x142bc
void __sync_lock_release_1(undefined *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: _fini @ 0x142e8
void _fini(void)
{
  return;
}

