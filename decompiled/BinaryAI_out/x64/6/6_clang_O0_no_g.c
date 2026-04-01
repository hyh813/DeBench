// Decompiled by BinaryAI
// SHA256: 38ace62bcd986b7d89ba3abca0a90e1c2cb21bfbc8986dceb75e7acf17604e0d

// Function: _init @ 0x102000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::raise @ 0x102030
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::free @ 0x102040
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::__errno_location @ 0x102050
int * __errno_location(void)
{
  int *piVar1;
  piVar1 = __errno_location();
  return piVar1;
}

// Function: <EXTERNAL>::unlink @ 0x102060
int unlink(char *__name)
{
  int iVar1;
  iVar1 = unlink(__name);
  return iVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x102070
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::_exit @ 0x102080
void _exit(int __status)
{
  _exit(__status);
}

// Function: <EXTERNAL>::strcpy @ 0x102090
char * strcpy(char *__dest,char *__src)
{
  char *pcVar1;
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}

// Function: <EXTERNAL>::fread @ 0x1020a0
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x1020b0
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
  int iVar1;
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x1020c0
int shmdt(void *__shmaddr)
{
  int iVar1;
  iVar1 = shmdt(__shmaddr);
  return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1020d0
ssize_t write(int __fd,void *__buf,size_t __n)
{
  ssize_t sVar1;
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x1020e0
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x1020f0
int fclose(FILE *__stream)
{
  int iVar1;
  iVar1 = fclose(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x102100
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::htons @ 0x102110
uint16_t htons(uint16_t __hostshort)
{
  uint16_t uVar1;
  uVar1 = htons(__hostshort);
  return uVar1;
}

// Function: <EXTERNAL>::strchr @ 0x102120
char * strchr(char *__s,int __c)
{
  char *pcVar1;
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x102130
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::rewind @ 0x102140
void rewind(FILE *__stream)
{
  rewind(__stream);
  return;
}

// Function: <EXTERNAL>::snprintf @ 0x102150
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
  int iVar1;
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x102160
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::alarm @ 0x102170
uint alarm(uint __seconds)
{
  uint uVar1;
  uVar1 = alarm(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::close @ 0x102180
int close(int __fd)
{
  int iVar1;
  iVar1 = close(__fd);
  return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x102190
int pipe(int *__pipedes)
{
  int iVar1;
  iVar1 = pipe(__pipedes);
  return iVar1;
}

// Function: <EXTERNAL>::read @ 0x1021a0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
  ssize_t sVar1;
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x1021b0
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x1021c0
int pthread_cond_signal(pthread_cond_t *__cond)
{
  int iVar1;
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x1021d0
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x1021e0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::syscall @ 0x1021f0
long syscall(long __sysno,...)
{
  long lVar1;
  lVar1 = syscall(__sysno);
  return lVar1;
}

// Function: <EXTERNAL>::stat @ 0x102200
int stat(char *__file,stat *__buf)
{
  int iVar1;
  iVar1 = stat(__file,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x102210
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::fileno @ 0x102220
int fileno(FILE *__stream)
{
  int iVar1;
  iVar1 = fileno(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x102230
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x102240
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x102250
void __isoc99_sscanf(void)
{
  __isoc99_sscanf();
  return;
}

// Function: <EXTERNAL>::listen @ 0x102260
int listen(int __fd,int __n)
{
  int iVar1;
  iVar1 = listen(__fd,__n);
  return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x102270
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
  int iVar1;
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x102280
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)
{
  int iVar1;
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x102290
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::open @ 0x1022a0
int open(char *__file,int __oflag,...)
{
  int iVar1;
  iVar1 = open(__file,__oflag);
  return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x1022b0
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
  int iVar1;
  iVar1 = shmctl(__shmid,__cmd,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x1022c0
FILE * fopen(char *__filename,char *__modes)
{
  FILE *pFVar1;
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}

// Function: <EXTERNAL>::shmat @ 0x1022d0
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
  void *pvVar1;
  pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
  return pvVar1;
}

// Function: <EXTERNAL>::shmget @ 0x1022e0
int shmget(key_t __key,size_t __size,int __shmflg)
{
  int iVar1;
  iVar1 = shmget(__key,__size,__shmflg);
  return iVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x1022f0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
  size_t sVar1;
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x102300
key_t ftok(char *__pathname,int __proj_id)
{
  key_t kVar1;
  kVar1 = ftok(__pathname,__proj_id);
  return kVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x102310
int pthread_join(pthread_t __th,void **__thread_return)
{
  int iVar1;
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}

// Function: <EXTERNAL>::execl @ 0x102320
int execl(char *__path,char *__arg,...)
{
  int iVar1;
  iVar1 = execl(__path,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x102330
int pthread_cancel(pthread_t __th)
{
  int iVar1;
  iVar1 = pthread_cancel(__th);
  return iVar1;
}

// Function: <EXTERNAL>::sleep @ 0x102340
uint sleep(uint __seconds)
{
  uint uVar1;
  uVar1 = sleep(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::wait @ 0x102350
__pid_t wait(void *__stat_loc)
{
  __pid_t _Var1;
  _Var1 = wait(__stat_loc);
  return _Var1;
}

// Function: <EXTERNAL>::fork @ 0x102360
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::strstr @ 0x102370
char * strstr(char *__haystack,char *__needle)
{
  char *pcVar1;
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x102380
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::usleep @ 0x102390
int usleep(__useconds_t __useconds)
{
  int iVar1;
  iVar1 = usleep(__useconds);
  return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x1023a0
int socket(int __domain,int __type,int __protocol)
{
  int iVar1;
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1023b0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _start @ 0x1023c0
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1023f0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x102420
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x102460
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

// Function: param_strcpy @ 0x1024b0
void param_strcpy(char *param_1,char *param_2)
{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}

// Function: call_strcpy @ 0x1024e0
undefined4 call_strcpy(void)
{
  undefined4 uVar1;
  undefined local_28 [32];
  uVar1 = param_strcpy(local_28,"HelloLib");
  return uVar1;
}

// Function: param_strcmp @ 0x102510
undefined4 param_strcmp(char *param_1,char *param_2)
{
  int iVar1;
  undefined4 local_20;
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 < 1) {
    local_20 = 0;
    if (iVar1 < 0) {
      local_20 = 0xffffffff;
    }
  }
  else {
    local_20 = 1;
  }
  return local_20;
}

// Function: call_strcmp @ 0x102570
int call_strcmp(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = param_strcmp(&DAT_0010500d,&DAT_00105011);
  iVar2 = param_strcmp(&DAT_00105015);
  iVar3 = param_strcmp(&DAT_00105019,&DAT_0010501d);
  return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x1025d0
size_t param_strlen(char *param_1)
{
  size_t sVar1;
  sVar1 = strlen(param_1);
  return sVar1;
}

// Function: call_strlen @ 0x102600
void call_strlen(void)
{
  param_strlen("BinBench2025");
  return;
}

// Function: param_memcpy @ 0x102630
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return param_3;
}

// Function: call_memcpy @ 0x102660
int call_memcpy(void)
{
  int local_48 [2];
  int local_40;
  int local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  local_28 = 0x140000000a;
  local_20 = 0x280000001e;
  local_18 = 0x32;
  memset(local_48,0,0x14);
  param_memcpy(local_48,&local_28,0x14);
  return local_48[0] + local_40 + local_38;
}

// Function: param_memcmp @ 0x1026c0
undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  undefined4 local_28;
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    local_28 = 0;
    if (iVar1 < 0) {
      local_28 = 0xffffffff;
    }
  }
  else {
    local_28 = 1;
  }
  return local_28;
}

// Function: call_memcmp @ 0x102720
int call_memcmp(void)
{
  int iVar1;
  int iVar2;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  local_14 = 0x200000001;
  local_c = 3;
  local_20 = 0x200000001;
  local_18 = 4;
  local_2c = 0x200000001;
  local_24 = 3;
  iVar1 = param_memcmp(&local_14,&local_20,0xc);
  iVar2 = param_memcmp(&local_14,&local_2c,0xc);
  return iVar1 + iVar2;
}

// Function: param_printf @ 0x1027a0
int param_printf(uint param_1,undefined8 param_2)
{
  int iVar1;
  iVar1 = printf("Value: %d, Name: %s\n",(ulong)param_1,param_2);
  return iVar1;
}

// Function: call_printf @ 0x1027d0
undefined4 call_printf(void)
{
  undefined4 uVar1;
  uVar1 = param_printf(0x2a,"Test");
  return uVar1;
}

// Function: param_scanf @ 0x102800
int param_scanf(undefined8 param_1)
{
  int iVar1;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_c;
  local_18 = param_1;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_1c,&local_20);
  if (iVar1 == 2) {
    local_c = local_1c + local_20;
  }
  else {
    local_c = -1;
  }
  return local_c;
}

// Function: call_scanf @ 0x102860
void call_scanf(void)
{
  param_scanf("123,456");
  return;
}

// Function: param_fopen_fclose @ 0x102880
int param_fopen_fclose(char *param_1)
{
  FILE *__stream;
  int local_c;
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    local_c = -1;
  }
  else {
    local_c = fileno(__stream);
    fclose(__stream);
  }
  return local_c;
}

// Function: call_fopen_fclose @ 0x1028e0
undefined8 call_fopen_fclose(void)
{
  int iVar1;
  undefined8 uVar2;
  iVar1 = param_fopen_fclose("/etc/passwd");
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_fread_fwrite @ 0x102910
undefined4 param_fread_fwrite(char *param_1)
{
  char *__ptr;
  int iVar1;
  FILE *__s;
  size_t sVar2;
  size_t sVar3;
  bool bVar4;
  char local_48 [40];
  char *local_20;
  char *local_18;
  undefined4 local_c;
  local_20 = "BinBench Test Data";
  local_18 = param_1;
  __s = fopen(param_1,"w+");
  __ptr = local_20;
  if (__s == (FILE *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    sVar2 = strlen(local_20);
    sVar2 = fwrite(__ptr,1,sVar2,__s);
    sVar3 = strlen(local_20);
    if (sVar2 == sVar3) {
      rewind(__s);
      sVar3 = fread(local_48,1,sVar2,__s);
      local_48[sVar3] = '\0';
      fclose(__s);
      unlink(local_18);
      bVar4 = false;
      if (sVar3 == sVar2) {
        iVar1 = strcmp(local_48,local_20);
        bVar4 = iVar1 == 0;
      }
      local_c = 0xfffffffd;
      if (bVar4) {
        local_c = 0x2a;
      }
    }
    else {
      fclose(__s);
      local_c = 0xfffffffe;
    }
  }
  return local_c;
}

// Function: call_fread_fwrite @ 0x102a40
void call_fread_fwrite(void)
{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}

// Function: param_malloc_free @ 0x102a60
int param_malloc_free(ulong param_1)
{
  int *__ptr;
  ulong local_28;
  int local_c;
  __ptr = (int *)malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    local_c = -1;
  }
  else {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      __ptr[local_28] = (int)local_28 * 10;
    }
    local_c = *__ptr + __ptr[param_1 - 1];
    free(__ptr);
  }
  return local_c;
}

// Function: call_malloc_free @ 0x102b10
void call_malloc_free(void)
{
  param_malloc_free(10);
  return;
}

// Function: param_memset @ 0x102b20
int param_memset(void *param_1,ulong param_2)
{
  ulong local_30;
  int local_24;
  memset(param_1,0,param_2);
  local_24 = 0;
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    local_24 = (uint)*(byte *)((long)param_1 + local_30) + local_24;
  }
  return local_24;
}

// Function: call_memset @ 0x102b90
int call_memset(void)
{
  int local_3c;
  int local_38 [12];
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    local_38[local_3c] = 0xff;
  }
  param_memset(local_38,0x28);
  return local_38[0] + local_38[9];
}

// Function: param_strchr_strstr @ 0x102be0
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
  char *pcVar1;
  int local_50;
  int local_48;
  pcVar1 = strchr(param_1,(int)param_2);
  if (pcVar1 == (char *)0x0) {
    local_48 = -1;
  }
  else {
    local_48 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    local_50 = -1;
  }
  else {
    local_50 = (int)pcVar1 - (int)param_1;
  }
  return local_48 + local_50;
}

// Function: call_strchr_strstr @ 0x102c90
undefined4 call_strchr_strstr(void)
{
  undefined4 uVar1;
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}

// Function: test_standard_library_functions @ 0x102cd0
void test_standard_library_functions(void)
{
  uint uVar1;
  printf(&DAT_001050a6);
  uVar1 = call_strcpy();
  printf(&DAT_001050cb,(ulong)uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_001050e6,(ulong)uVar1);
  uVar1 = call_strlen();
  printf(&DAT_00105101,(ulong)uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_0010511d,(ulong)uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_00105139,(ulong)uVar1);
  uVar1 = call_printf();
  printf(&DAT_00105155,(ulong)uVar1);
  uVar1 = call_scanf();
  printf(&DAT_00105171,(ulong)uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_0010518e,(ulong)uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_001051aa,(ulong)uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_001051c6,(ulong)uVar1);
  uVar1 = call_memset();
  printf(&DAT_001051e2,(ulong)uVar1);
  uVar1 = call_strchr_strstr();
  printf(&DAT_001051fd,(ulong)uVar1);
  return;
}

// Function: param_linux_syscall @ 0x102de0
int param_linux_syscall(undefined8 param_1)
{
  ulong uVar1;
  int *piVar2;
  int local_c;
  uVar1 = syscall(2,param_1,0);
  local_c = (int)uVar1;
  if (local_c < 0) {
    piVar2 = __errno_location();
    local_c = -*piVar2;
  }
  else {
    syscall(3,uVar1 & 0xffffffff);
  }
  return local_c;
}

// Function: call_linux_syscall @ 0x102e40
undefined8 call_linux_syscall(void)
{
  int iVar1;
  undefined8 uVar2;
  iVar1 = param_linux_syscall("/etc/passwd");
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_win32_api @ 0x102e70
undefined4 param_win32_api(char *param_1)
{
  int iVar1;
  stat local_a8;
  char *local_18;
  undefined4 local_c;
  local_18 = param_1;
  iVar1 = stat(param_1,&local_a8);
  if (iVar1 < 0) {
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xfffffffe;
    if (0 < local_a8.st_size) {
      local_c = 0x2a;
    }
  }
  return local_c;
}

// Function: call_win32_api @ 0x102ed0
void call_win32_api(void)
{
  param_win32_api("/etc/passwd");
  return;
}

// Function: param_fork_exec @ 0x102ef0
int param_fork_exec(char *param_1,undefined8 param_2)
{
  __pid_t _Var1;
  uint local_28;
  __pid_t local_24;
  undefined8 local_20;
  char *local_18;
  int local_c;
  local_20 = param_2;
  local_18 = param_1;
  local_24 = fork();
  if (local_24 < 0) {
    local_c = -1;
  }
  else {
    if (local_24 == 0) {
      execl(local_18,local_18,local_20,0);
      _exit(0x7f);
    }
    _Var1 = waitpid(local_24,(int *)&local_28,0);
    if (_Var1 < 0) {
      local_c = -2;
    }
    else if ((local_28 & 0x7f) == 0) {
      local_c = (int)(local_28 & 0xff00) >> 8;
    }
    else {
      local_c = -3;
    }
  }
  return local_c;
}

// Function: call_fork_exec @ 0x102fb0
undefined8 call_fork_exec(void)
{
  int iVar1;
  undefined8 uVar2;
  iVar1 = param_fork_exec("/bin/true",0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_pipe_communication @ 0x102ff0
undefined4 param_pipe_communication(void)
{
  int iVar1;
  __pid_t _Var2;
  size_t __n;
  ssize_t sVar3;
  undefined local_38 [36];
  int local_14;
  int local_10;
  undefined4 local_c;
  iVar1 = pipe(&local_14);
  if (iVar1 < 0) {
    local_c = 0xffffffff;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      local_c = 0xfffffffe;
    }
    else {
      if (_Var2 == 0) {
        close(local_14);
        iVar1 = local_10;
        __n = strlen("HelloPipe");
        write(iVar1,"HelloPipe",__n);
        close(local_10);
        _exit(0);
      }
      close(local_10);
      sVar3 = read(local_14,local_38,0x1f);
      local_38[sVar3] = 0;
      close(local_14);
      wait((void *)0x0);
      local_c = 0xfffffffd;
      if (0 < sVar3) {
        local_c = 0x2a;
      }
    }
  }
  return local_c;
}

// Function: call_pipe_communication @ 0x1030e0
void call_pipe_communication(void)
{
  param_pipe_communication();
  return;
}

// Function: param_socket_create @ 0x1030f0
undefined4 param_socket_create(void)
{
  int iVar1;
  sockaddr local_28;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  local_10 = socket(2,1,0);
  if (local_10 < 0) {
    local_c = 0xffffffff;
  }
  else {
    local_14 = 1;
    iVar1 = setsockopt(local_10,1,2,&local_14,4);
    if (iVar1 < 0) {
      close(local_10);
      local_c = 0xfffffffe;
    }
    else {
      memset(&local_28,0,0x10);
      local_28.sa_family = 2;
      local_28.sa_data._0_2_ = htons(0);
      local_28.sa_data[2] = '\0';
      local_28.sa_data[3] = '\0';
      local_28.sa_data[4] = '\0';
      local_28.sa_data[5] = '\0';
      iVar1 = bind(local_10,&local_28,0x10);
      if (iVar1 < 0) {
        close(local_10);
        local_c = 0xfffffffd;
      }
      else {
        iVar1 = listen(local_10,5);
        if (iVar1 < 0) {
          close(local_10);
          local_c = 0xfffffffc;
        }
        else {
          close(local_10);
          local_c = 0x2a;
        }
      }
    }
  }
  return local_c;
}

// Function: call_socket_create @ 0x103200
void call_socket_create(void)
{
  param_socket_create();
  return;
}

// Function: param_shmget_shmat @ 0x103210
undefined4 param_shmget_shmat(void)
{
  int iVar1;
  key_t __key;
  char *__dest;
  size_t sVar2;
  undefined4 local_c;
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
        __dest = (char *)shmat(iVar1,(void *)0x0,0);
        if (__dest == (char *)0xffffffffffffffff) {
          local_c = 0xfffffffd;
        }
        else {
          strcpy(__dest,"SharedMemory");
          sVar2 = strlen(__dest);
          local_c = (undefined4)sVar2;
          shmdt(__dest);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return local_c;
}

// Function: call_shmget_shmat @ 0x103320
undefined8 call_shmget_shmat(void)
{
  int iVar1;
  undefined8 uVar2;
  iVar1 = param_shmget_shmat();
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_signal_handling @ 0x103350
undefined4 param_signal_handling(void)
{
  int iVar1;
  __sighandler_t p_Var2;
  int local_10;
  undefined4 local_c;
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
    local_c = 0xffffffff;
  }
  else {
    p_Var2 = signal(0xe,signal_handler);
    if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
      local_c = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      local_10 = 1000;
      while( true ) {
        iVar1 = local_10;
        if (signal_received == 0) {
          local_10 = local_10 + -1;
        }
        if (signal_received != 0 || iVar1 < 1) break;
        usleep(1000);
      }
      if (signal_received == 0) {
        local_c = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        local_10 = 2000;
        while( true ) {
          iVar1 = local_10;
          if (signal_received == 0) {
            local_10 = local_10 + -1;
          }
          if (signal_received != 0 || iVar1 < 1) break;
          usleep(1000);
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          local_c = 0xfffffffb;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          local_c = 0x2a;
        }
      }
      else {
        local_c = 0xfffffffc;
      }
    }
  }
  return local_c;
}

// Function: signal_handler @ 0x103510
void signal_handler(undefined4 param_1)
{
  signal_received = 1;
  signal_number = param_1;
  return;
}

// Function: call_signal_handling @ 0x103530
void call_signal_handling(void)
{
  param_signal_handling();
  return;
}

// Function: test_system_calls @ 0x103540
void test_system_calls(void)
{
  uint uVar1;
  printf(&DAT_0010524c);
  uVar1 = call_linux_syscall();
  printf(&DAT_00105268,(ulong)uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_00105284,(ulong)uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_001052a0,(ulong)uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_001052bc,(ulong)uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_001052d8,(ulong)uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_001052f4,(ulong)uVar1);
  uVar1 = call_signal_handling();
  printf(&DAT_00105310,(ulong)uVar1);
  return;
}

// Function: thread_compute @ 0x1035f0
int * thread_compute(int *param_1)
{
  int iVar1;
  int *piVar2;
  iVar1 = *param_1;
  piVar2 = (int *)malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}

// Function: param_pthread_create @ 0x103640
undefined4 param_pthread_create(undefined4 param_1)
{
  int iVar1;
  undefined4 *local_28;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 local_10;
  undefined4 local_c;
  local_1c = param_1;
  local_10 = param_1;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_28);
    local_c = *local_28;
    free(local_28);
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}

// Function: call_pthread_create @ 0x1036b0
void call_pthread_create(void)
{
  param_pthread_create(7);
  return;
}

// Function: thread_sum @ 0x1036c0
undefined8 thread_sum(int *param_1)
{
  int local_1c;
  param_1[2] = 0;
  for (local_1c = *param_1; local_1c <= param_1[1]; local_1c = local_1c + 1) {
    param_1[2] = local_1c + param_1[2];
  }
  return 0;
}

// Function: param_pthread_join @ 0x103720
int param_pthread_join(void)
{
  int iVar1;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [4];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  pthread_t local_28 [4];
  memset(local_58,0,0x24);
  local_58[0] = 1;
  local_58[1] = 10;
  local_58[3] = 0xb;
  local_48 = 0x14;
  local_40 = 0x15;
  local_3c = 0x1e;
  for (local_5c = 0; local_5c < 3; local_5c = local_5c + 1) {
    iVar1 = pthread_create(local_28 + local_5c,(pthread_attr_t *)0x0,thread_sum,
                           local_58 + (long)local_5c * 3);
    if (iVar1 != 0) {
      return -1;
    }
  }
  local_60 = 0;
  local_64 = 0;
  while( true ) {
    if (2 < local_64) {
      return local_60;
    }
    iVar1 = pthread_join(local_28[local_64],(void **)0x0);
    if (iVar1 != 0) break;
    local_60 = local_58[(long)local_64 * 3 + 2] + local_60;
    local_64 = local_64 + 1;
  }
  return -2;
}

// Function: call_pthread_join @ 0x103840
void call_pthread_join(void)
{
  param_pthread_join();
  return;
}

// Function: thread_increment @ 0x103850
undefined8 thread_increment(int *param_1)
{
  int iVar1;
  int local_18;
  iVar1 = *param_1;
  for (local_18 = 0; local_18 < iVar1; local_18 = local_18 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}

// Function: param_mutex_lock @ 0x1038c0
undefined4 param_mutex_lock(int param_1,int param_2)
{
  int iVar1;
  void *__ptr;
  int local_28;
  int local_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  local_14 = param_2;
  local_10 = param_1;
  __ptr = malloc((long)param_1 << 3);
  if (__ptr == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_24 = 0; local_24 < local_10; local_24 = local_24 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)__ptr + (long)local_24 * 8),(pthread_attr_t *)0x0,
                             thread_increment,&local_14);
      if (iVar1 != 0) {
        free(__ptr);
        return 0xfffffffe;
      }
    }
    for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
      pthread_join(*(pthread_t *)((long)__ptr + (long)local_28 * 8),(void **)0x0);
    }
    free(__ptr);
    local_c = 0xfffffffd;
    if (shared_counter == local_10 * local_14) {
      local_c = 0x2a;
    }
  }
  return local_c;
}

// Function: call_mutex_lock @ 0x1039e0
void call_mutex_lock(void)
{
  param_mutex_lock(4,1000);
  return;
}

// Function: consumer_thread @ 0x103a00
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

// Function: producer_thread @ 0x103a80
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

// Function: param_condition_variable @ 0x103ae0
undefined4 param_condition_variable(void)
{
  int iVar1;
  undefined4 *local_28;
  pthread_t local_20;
  pthread_t local_18;
  undefined4 local_c;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_20,&local_28);
      pthread_join(local_18,(void **)0x0);
      local_c = *local_28;
      free(local_28);
    }
    else {
      pthread_cancel(local_20);
      local_c = 0xfffffffe;
    }
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}

// Function: call_condition_variable @ 0x103ba0
void call_condition_variable(void)
{
  param_condition_variable();
  return;
}

// Function: thread_atomic_increment @ 0x103bb0
undefined8 thread_atomic_increment(int *param_1)
{
  int iVar1;
  int local_18;
  for (local_18 = 0; local_18 < *param_1; local_18 = local_18 + 1) {
    LOCK();
    iVar1 = atomic_counter + 1;
    UNLOCK();
    atomic_counter = local_18 + 1000;
    LOCK();
    if (local_18 != iVar1) {
      atomic_counter = iVar1;
    }
    UNLOCK();
  }
  return 0;
}

// Function: thread_atomic_load_store @ 0x103c50
undefined8 thread_atomic_load_store(void)
{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return 0;
}

// Function: param_atomic_ops @ 0x103c80
undefined4 param_atomic_ops(int param_1,undefined4 param_2)
{
  int iVar1;
  int local_34;
  pthread_t local_30;
  int local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  local_14 = param_2;
  local_10 = param_1;
  local_20 = malloc((long)param_1 << 3);
  if (local_20 == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    local_24 = 0;
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_20 + (long)local_28 * 8),
                             (pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
      if (iVar1 != 0) {
        free(local_20);
        return 0xfffffffe;
      }
    }
    iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_30,(void **)0x0);
    }
    for (local_34 = 0; iVar1 = atomic_counter, local_34 < local_10; local_34 = local_34 + 1) {
      pthread_join(*(pthread_t *)((long)local_20 + (long)local_34 * 8),(void **)0x0);
    }
    free(local_20);
    local_c = 0xfffffffd;
    if (0 < iVar1) {
      local_c = 0x2a;
    }
  }
  return local_c;
}

// Function: call_atomic_ops @ 0x103dd0
void call_atomic_ops(void)
{
  param_atomic_ops(4,500);
  return;
}

// Function: thread_tls_test @ 0x103df0
undefined4 * thread_tls_test(char *param_1)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *in_FS_OFFSET;
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -6);
  *(int *)(in_FS_OFFSET + -6) = *(int *)(in_FS_OFFSET + -6) + 0x32;
  strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
  puVar2 = (undefined4 *)malloc(8);
  *puVar2 = uVar1;
  puVar2[1] = *(undefined4 *)(in_FS_OFFSET + -6);
  return puVar2;
}

// Function: param_thread_local_storage @ 0x103e70
undefined4 param_thread_local_storage(int param_1)
{
  int iVar1;
  void *pvVar2;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  void *local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  local_10 = param_1;
  local_18 = malloc((long)param_1 << 3);
  local_20 = malloc((long)local_10 << 3);
  if ((local_18 == (void *)0x0) || (local_20 == (void *)0x0)) {
    local_c = 0xffffffff;
  }
  else {
    for (local_24 = 0; (int)local_24 < local_10; local_24 = local_24 + 1) {
      pvVar2 = malloc(0x10);
      *(void **)((long)local_20 + (long)(int)local_24 * 8) = pvVar2;
      snprintf(*(char **)((long)local_20 + (long)(int)local_24 * 8),0x10,"Thread-%d",(ulong)local_24
              );
    }
    for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_18 + (long)local_28 * 8),
                             (pthread_attr_t *)0x0,thread_tls_test,
                             *(void **)((long)local_20 + (long)local_28 * 8));
      if (iVar1 != 0) {
        for (local_2c = 0; local_2c <= local_28; local_2c = local_2c + 1) {
          free(*(void **)((long)local_20 + (long)local_2c * 8));
        }
        free(local_20);
        free(local_18);
        return 0xfffffffe;
      }
    }
    local_30 = 0;
    local_34 = 0;
    for (local_38 = 0; local_38 < local_10; local_38 = local_38 + 1) {
      pthread_join(*(pthread_t *)((long)local_18 + (long)local_38 * 8),&local_40);
      local_30 = *local_40 + local_30;
      local_34 = local_40[1] + local_34;
      free(local_40);
      free(*(void **)((long)local_20 + (long)local_38 * 8));
    }
    free(local_20);
    free(local_18);
    local_c = 0xfffffffd;
    if (local_30 == local_10 * 100 && local_34 == local_10 * 0x96) {
      local_c = 0x2a;
    }
  }
  return local_c;
}

// Function: call_thread_local_storage @ 0x1040b0
void call_thread_local_storage(void)
{
  param_thread_local_storage(4);
  return;
}

// Function: test_thread_concurrency @ 0x1040c0
void test_thread_concurrency(void)
{
  uint uVar1;
  printf(&DAT_00105336);
  uVar1 = call_pthread_create();
  printf(&DAT_00105355,(ulong)uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_00105371,(ulong)uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_0010538e,(ulong)uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_001053aa,(ulong)uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_001053c6,(ulong)uVar1);
  uVar1 = call_thread_local_storage();
  printf(&DAT_001053e2,(ulong)uVar1);
  return;
}

// Function: main @ 0x104160
undefined8 main(void)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}

// Function: _fini @ 0x104188
void _fini(void)
{
  return;
}

