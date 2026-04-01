// Decompiled by BinaryAI
// SHA256: 2ed314daa5878b1c670ed94c2d74ed1dcff14e01bfa4750effd14968f9687a3d

// Function: _init @ 0x11000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::setsockopt @ 0x11040
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
  int iVar1;
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x11050
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x11060
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::strstr @ 0x11070
char * strstr(char *__haystack,char *__needle)
{
  char *pcVar1;
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x11080
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::read @ 0x110a0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
  ssize_t sVar1;
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}

// Function: <EXTERNAL>::printf @ 0x110b0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::_exit @ 0x110c0
void _exit(int __status)
{
  _exit(__status);
}

// Function: <EXTERNAL>::free @ 0x110d0
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x110e0
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::shmget @ 0x110f0
int shmget(key_t __key,size_t __size,int __shmflg)
{
  int iVar1;
  iVar1 = shmget(__key,__size,__shmflg);
  return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x11100
int fclose(FILE *__stream)
{
  int iVar1;
  iVar1 = fclose(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x11110
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x11120
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::memcmp @ 0x11130
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::sleep @ 0x11140
uint sleep(uint __seconds)
{
  uint uVar1;
  uVar1 = sleep(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::alarm @ 0x11150
uint alarm(uint __seconds)
{
  uint uVar1;
  uVar1 = alarm(__seconds);
  return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x11160
void rewind(FILE *__stream)
{
  rewind(__stream);
  return;
}

// Function: <EXTERNAL>::wait @ 0x11170
__pid_t wait(void *__stat_loc)
{
  __pid_t _Var1;
  _Var1 = wait(__stat_loc);
  return _Var1;
}

// Function: <EXTERNAL>::htons @ 0x11180
uint16_t htons(uint16_t __hostshort)
{
  uint16_t uVar1;
  uVar1 = htons(__hostshort);
  return uVar1;
}

// Function: <EXTERNAL>::shmat @ 0x11190
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
  void *pvVar1;
  pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
  return pvVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x111a0
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::unlink @ 0x111b0
int unlink(char *__name)
{
  int iVar1;
  iVar1 = unlink(__name);
  return iVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x111c0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
  size_t sVar1;
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x111d0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::usleep @ 0x111e0
int usleep(__useconds_t __useconds)
{
  int iVar1;
  iVar1 = usleep(__useconds);
  return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x111f0
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}

// Function: <EXTERNAL>::strcpy @ 0x11200
char * strcpy(char *__dest,char *__src)
{
  char *pcVar1;
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x11210
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
  int iVar1;
  iVar1 = shmctl(__shmid,__cmd,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x11220
int pthread_cond_signal(pthread_cond_t *__cond)
{
  int iVar1;
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x11230
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::stat @ 0x11240
int stat(char *__file,stat *__buf)
{
  int iVar1;
  iVar1 = stat(__file,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::open @ 0x11250
int open(char *__file,int __oflag,...)
{
  int iVar1;
  iVar1 = open(__file,__oflag);
  return iVar1;
}

// Function: <EXTERNAL>::strchr @ 0x11260
char * strchr(char *__s,int __c)
{
  char *pcVar1;
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}

// Function: <EXTERNAL>::strlen @ 0x11270
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::write @ 0x11280
ssize_t write(int __fd,void *__buf,size_t __n)
{
  ssize_t sVar1;
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}

// Function: <EXTERNAL>::bind @ 0x11290
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
  int iVar1;
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x112a0
void __isoc99_sscanf(void)
{
  __isoc99_sscanf();
  return;
}

// Function: <EXTERNAL>::fopen @ 0x112b0
FILE * fopen(char *__filename,char *__modes)
{
  FILE *pFVar1;
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}

// Function: <EXTERNAL>::memset @ 0x112c0
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::snprintf @ 0x112d0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
  int iVar1;
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x112e0
int * __errno_location(void)
{
  int *piVar1;
  piVar1 = __errno_location();
  return piVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x112f0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::syscall @ 0x11300
long syscall(long __sysno,...)
{
  long lVar1;
  lVar1 = syscall(__sysno);
  return lVar1;
}

// Function: <EXTERNAL>::fileno @ 0x11310
int fileno(FILE *__stream)
{
  int iVar1;
  iVar1 = fileno(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::execl @ 0x11320
int execl(char *__path,char *__arg,...)
{
  int iVar1;
  iVar1 = execl(__path,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x11330
int pipe(int *__pipedes)
{
  int iVar1;
  iVar1 = pipe(__pipedes);
  return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x11340
int shmdt(void *__shmaddr)
{
  int iVar1;
  iVar1 = shmdt(__shmaddr);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x11350
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)
{
  int iVar1;
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x11360
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::listen @ 0x11370
int listen(int __fd,int __n)
{
  int iVar1;
  iVar1 = listen(__fd,__n);
  return iVar1;
}

// Function: <EXTERNAL>::ftok @ 0x11380
key_t ftok(char *__pathname,int __proj_id)
{
  key_t kVar1;
  kVar1 = ftok(__pathname,__proj_id);
  return kVar1;
}

// Function: <EXTERNAL>::socket @ 0x11390
int socket(int __domain,int __type,int __protocol)
{
  int iVar1;
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x113a0
int pthread_join(pthread_t __th,void **__thread_return)
{
  int iVar1;
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x113b0
int pthread_cancel(pthread_t __th)
{
  int iVar1;
  iVar1 = pthread_cancel(__th);
  return iVar1;
}

// Function: <EXTERNAL>::close @ 0x113c0
int close(int __fd)
{
  int iVar1;
  iVar1 = close(__fd);
  return iVar1;
}

// Function: FUN_000113d0 @ 0x113d0
void FUN_000113d0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + -0x10))();
  return;
}

// Function: _start @ 0x113e0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1140c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11410
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11420
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11460
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x114b0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x5c3b) == '\0') {
    if (*(int *)(unaff_EDI + 0x5b33) != 0) {
      FUN_000113d0(*(undefined4 *)(unaff_EDI + 0x5c37));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x5c3f);
    while (uVar1 < ((unaff_EDI + 0x5a5b) - (unaff_EDI + 0x5a57) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x5c3f) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x5a57 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x5c3f);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x5c3b) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11549
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1154d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: param_strcpy @ 0x11560
void param_strcpy(char *param_1,char *param_2)
{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}

// Function: call_strcpy @ 0x115b0
undefined4 call_strcpy(void)
{
  undefined4 uVar1;
  undefined local_28 [32];
  uVar1 = param_strcpy(local_28,"HelloLib");
  return uVar1;
}

// Function: param_strcmp @ 0x115f0
undefined4 param_strcmp(char *param_1,char *param_2)
{
  int iVar1;
  undefined4 local_10;
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 < 1) {
    local_10 = 0;
    if (iVar1 < 0) {
      local_10 = 0xffffffff;
    }
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

// Function: call_strcmp @ 0x11660
int call_strcmp(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = param_strcmp(&DAT_00014011,&DAT_00014015);
  iVar2 = param_strcmp(&DAT_00014019,&DAT_00014019);
  iVar3 = param_strcmp(&DAT_0001401d,&DAT_00014021);
  return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x116e0
size_t param_strlen(char *param_1)
{
  size_t sVar1;
  sVar1 = strlen(param_1);
  return sVar1;
}

// Function: call_strlen @ 0x11710
void call_strlen(void)
{
  param_strlen("BinBench2025");
  return;
}

// Function: param_memcpy @ 0x11740
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return param_3;
}

// Function: call_memcpy @ 0x11780
int call_memcpy(void)
{
  int local_30 [2];
  int local_28;
  int local_20;
  undefined local_1c [20];
  memcpy(local_1c,&DAT_00014404,0x14);
  memset(local_30,0,0x14);
  param_memcpy(local_30,local_1c,0x14);
  return local_30[0] + local_28 + local_20;
}

// Function: param_memcmp @ 0x11800
undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  undefined4 local_14;
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    local_14 = 0;
    if (iVar1 < 0) {
      local_14 = 0xffffffff;
    }
  }
  else {
    local_14 = 1;
  }
  return local_14;
}

// Function: call_memcmp @ 0x11870
int call_memcmp(void)
{
  int iVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  local_14 = 1;
  local_10 = 2;
  local_c = 3;
  local_20 = 1;
  local_1c = 2;
  local_18 = 4;
  local_2c = 1;
  local_28 = 2;
  local_24 = 3;
  iVar1 = param_memcmp(&local_14,&local_20,0xc);
  iVar2 = param_memcmp(&local_14,&local_2c,0xc);
  return iVar1 + iVar2;
}

// Function: param_printf @ 0x11920
int param_printf(undefined4 param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
  return iVar1;
}

// Function: call_printf @ 0x11970
undefined4 call_printf(void)
{
  undefined4 uVar1;
  uVar1 = param_printf(0x2a,"Test");
  return uVar1;
}

// Function: param_scanf @ 0x119b0
int param_scanf(undefined4 param_1)
{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_18);
  if (iVar1 == 2) {
    local_10 = local_14 + local_18;
  }
  else {
    local_10 = -1;
  }
  return local_10;
}

// Function: call_scanf @ 0x11a20
void call_scanf(void)
{
  param_scanf("123,456");
  return;
}

// Function: param_fopen_fclose @ 0x11a50
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

// Function: call_fopen_fclose @ 0x11ad0
undefined4 call_fopen_fclose(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_fopen_fclose("/etc/passwd");
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_fread_fwrite @ 0x11b10
undefined4 param_fread_fwrite(char *param_1)
{
  char *__ptr;
  FILE *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  bool bVar4;
  char local_30 [32];
  char *local_10;
  undefined4 local_c;
  local_10 = "BinBench Test Data";
  __s = fopen(param_1,"w+");
  __ptr = local_10;
  if (__s == (FILE *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    sVar1 = strlen(local_10);
    sVar1 = fwrite(__ptr,1,sVar1,__s);
    sVar2 = strlen(local_10);
    if (sVar1 == sVar2) {
      rewind(__s);
      sVar2 = fread(local_30,1,sVar1,__s);
      local_30[sVar2] = '\0';
      fclose(__s);
      unlink(param_1);
      bVar4 = false;
      if (sVar2 == sVar1) {
        iVar3 = strcmp(local_30,local_10);
        bVar4 = iVar3 == 0;
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

// Function: call_fread_fwrite @ 0x11c80
void call_fread_fwrite(void)
{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}

// Function: param_malloc_free @ 0x11cb0
int param_malloc_free(uint param_1)
{
  int *__ptr;
  uint local_14;
  int local_c;
  __ptr = (int *)malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    local_c = -1;
  }
  else {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      __ptr[local_14] = local_14 * 10;
    }
    local_c = *__ptr + __ptr[param_1 - 1];
    free(__ptr);
  }
  return local_c;
}

// Function: call_malloc_free @ 0x11d60
void call_malloc_free(void)
{
  param_malloc_free(10);
  return;
}

// Function: param_memset @ 0x11d90
int param_memset(void *param_1,uint param_2)
{
  uint local_14;
  int local_10;
  memset(param_1,0,param_2);
  local_10 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_10 = (uint)*(byte *)((int)param_1 + local_14) + local_10;
  }
  return local_10;
}

// Function: call_memset @ 0x11e10
int call_memset(void)
{
  int local_34;
  int local_30 [10];
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    local_30[local_34] = 0xff;
  }
  param_memset(local_30,0x28);
  return local_30[0] + local_30[9];
}

// Function: param_strchr_strstr @ 0x11e80
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
  char *pcVar1;
  int local_24;
  int local_20;
  pcVar1 = strchr(param_1,(int)param_2);
  if (pcVar1 == (char *)0x0) {
    local_20 = -1;
  }
  else {
    local_20 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    local_24 = -1;
  }
  else {
    local_24 = (int)pcVar1 - (int)param_1;
  }
  return local_20 + local_24;
}

// Function: call_strchr_strstr @ 0x11f40
undefined4 call_strchr_strstr(void)
{
  undefined4 uVar1;
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}

// Function: test_standard_library_functions @ 0x11f90
void test_standard_library_functions(void)
{
  undefined4 uVar1;
  printf(&DAT_000140aa);
  uVar1 = call_strcpy();
  printf(&DAT_000140cf,uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_000140ea,uVar1);
  uVar1 = call_strlen();
  printf(&DAT_00014105,uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_00014121,uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_0001413d,uVar1);
  uVar1 = call_printf();
  printf(&DAT_00014159,uVar1);
  uVar1 = call_scanf();
  printf(&DAT_00014175,uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_00014192,uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_000141ae,uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_000141ca,uVar1);
  uVar1 = call_memset();
  printf(&DAT_000141e6,uVar1);
  uVar1 = call_strchr_strstr();
  printf(&DAT_00014201,uVar1);
  return;
}

// Function: param_linux_syscall @ 0x12120
int param_linux_syscall(undefined4 param_1)
{
  int *piVar1;
  undefined4 uVar2;
  int local_c;
  uVar2 = 0;
  local_c = syscall(5,param_1,0);
  if (local_c < 0) {
    piVar1 = __errno_location();
    local_c = -*piVar1;
  }
  else {
    syscall(6,local_c,uVar2);
  }
  return local_c;
}

// Function: call_linux_syscall @ 0x121a0
undefined4 call_linux_syscall(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_linux_syscall("/etc/passwd");
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_win32_api @ 0x121e0
undefined4 param_win32_api(char *param_1)
{
  int iVar1;
  stat local_64;
  undefined4 local_c;
  iVar1 = stat(param_1,&local_64);
  if (iVar1 < 0) {
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xfffffffe;
    if (0 < local_64.st_size) {
      local_c = 0x2a;
    }
  }
  return local_c;
}

// Function: call_win32_api @ 0x12240
void call_win32_api(void)
{
  param_win32_api("/etc/passwd");
  return;
}

// Function: param_fork_exec @ 0x12270
int param_fork_exec(char *param_1,undefined4 param_2)
{
  __pid_t _Var1;
  uint local_18;
  __pid_t local_14;
  int local_10;
  local_14 = fork();
  if (local_14 < 0) {
    local_10 = -1;
  }
  else {
    if (local_14 == 0) {
      execl(param_1,param_1,param_2,0);
      _exit(0x7f);
    }
    _Var1 = waitpid(local_14,(int *)&local_18,0);
    if (_Var1 < 0) {
      local_10 = -2;
    }
    else if ((local_18 & 0x7f) == 0) {
      local_10 = (int)(local_18 & 0xff00) >> 8;
    }
    else {
      local_10 = -3;
    }
  }
  return local_10;
}

// Function: call_fork_exec @ 0x12360
undefined4 call_fork_exec(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_fork_exec("/bin/true",0);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_pipe_communication @ 0x123b0
undefined4 param_pipe_communication(void)
{
  int iVar1;
  __pid_t _Var2;
  size_t __n;
  ssize_t sVar3;
  undefined local_34 [32];
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
      sVar3 = read(local_14,local_34,0x1f);
      local_34[sVar3] = 0;
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

// Function: call_pipe_communication @ 0x124f0
void __regparm3 call_pipe_communication(undefined4 param_1)
{
  param_pipe_communication(param_1);
  return;
}

// Function: param_socket_create @ 0x12510
undefined4 param_socket_create(void)
{
  int iVar1;
  sockaddr local_24;
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
      memset(&local_24,0,0x10);
      local_24.sa_family = 2;
      local_24.sa_data._0_2_ = htons(0);
      local_24.sa_data[2] = '\0';
      local_24.sa_data[3] = '\0';
      local_24.sa_data[4] = '\0';
      local_24.sa_data[5] = '\0';
      iVar1 = bind(local_10,&local_24,0x10);
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

// Function: call_socket_create @ 0x12690
void __regparm3 call_socket_create(undefined4 param_1)
{
  param_socket_create(param_1);
  return;
}

// Function: param_shmget_shmat @ 0x126b0
size_t param_shmget_shmat(void)
{
  int iVar1;
  key_t __key;
  char *__dest;
  size_t local_c;
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
        if (__dest == (char *)0xffffffff) {
          local_c = 0xfffffffd;
        }
        else {
          strcpy(__dest,"SharedMemory");
          local_c = strlen(__dest);
          shmdt(__dest);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return local_c;
}

// Function: call_shmget_shmat @ 0x12820
undefined4 __regparm3 call_shmget_shmat(undefined4 param_1)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = param_shmget_shmat(param_1);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: param_signal_handling @ 0x12860
undefined4 param_signal_handling(void)
{
  int iVar1;
  __sighandler_t p_Var2;
  int local_10;
  undefined4 local_c;
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffff) {
    local_c = 0xffffffff;
  }
  else {
    p_Var2 = signal(0xe,signal_handler);
    if (p_Var2 == (__sighandler_t)0xffffffff) {
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

// Function: signal_handler @ 0x12a70
void signal_handler(undefined4 param_1)
{
  signal_received = 1;
  signal_number = param_1;
  return;
}

// Function: call_signal_handling @ 0x12aa0
void __regparm3 call_signal_handling(undefined4 param_1)
{
  param_signal_handling(param_1);
  return;
}

// Function: test_system_calls @ 0x12ac0
void test_system_calls(void)
{
  undefined4 uVar1;
  printf(&DAT_00014250);
  uVar1 = call_linux_syscall();
  printf(&DAT_0001426c,uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_00014288,uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_000142a4,uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_000142c0,uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_000142dc,uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_000142f8,uVar1);
  uVar1 = call_signal_handling();
  printf(&DAT_00014314,uVar1);
  return;
}

// Function: thread_compute @ 0x12bc0
int * thread_compute(int *param_1)
{
  int iVar1;
  int *piVar2;
  iVar1 = *param_1;
  piVar2 = (int *)malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}

// Function: param_pthread_create @ 0x12c10
undefined4 param_pthread_create(undefined4 param_1)
{
  int iVar1;
  undefined4 *local_18;
  undefined4 local_14;
  pthread_t local_10;
  undefined4 local_c;
  local_14 = param_1;
  iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_14);
  if (iVar1 == 0) {
    pthread_join(local_10,&local_18);
    local_c = *local_18;
    free(local_18);
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}

// Function: call_pthread_create @ 0x12cb0
void call_pthread_create(void)
{
  param_pthread_create(7);
  return;
}

// Function: thread_sum @ 0x12ce0
undefined4 thread_sum(int *param_1)
{
  int local_c;
  param_1[2] = 0;
  for (local_c = *param_1; local_c <= param_1[1]; local_c = local_c + 1) {
    param_1[2] = local_c + param_1[2];
  }
  return 0;
}

// Function: param_pthread_join @ 0x12d40
int param_pthread_join(void)
{
  int iVar1;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  pthread_t local_18 [4];
  memset(local_3c,0,0x24);
  local_3c[0] = 1;
  local_3c[1] = 10;
  local_3c[3] = 0xb;
  local_2c = 0x14;
  local_24 = 0x15;
  local_20 = 0x1e;
  for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
    iVar1 = pthread_create(local_18 + local_40,(pthread_attr_t *)0x0,thread_sum,
                           local_3c + local_40 * 3);
    if (iVar1 != 0) {
      return -1;
    }
  }
  local_44 = 0;
  local_48 = 0;
  while( true ) {
    if (2 < local_48) {
      return local_44;
    }
    iVar1 = pthread_join(local_18[local_48],(void **)0x0);
    if (iVar1 != 0) break;
    local_44 = local_3c[local_48 * 3 + 2] + local_44;
    local_48 = local_48 + 1;
  }
  return -2;
}

// Function: call_pthread_join @ 0x12e90
void __regparm3 call_pthread_join(undefined4 param_1)
{
  param_pthread_join(param_1);
  return;
}

// Function: thread_increment @ 0x12eb0
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

// Function: param_mutex_lock @ 0x12f40
undefined4 param_mutex_lock(int param_1,int param_2)
{
  void *__ptr;
  int iVar1;
  int local_1c;
  int local_18;
  undefined4 local_10;
  __ptr = malloc(param_1 << 2);
  if (__ptr == (void *)0x0) {
    local_10 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)__ptr + local_18 * 4),(pthread_attr_t *)0x0,
                             thread_increment,&param_2);
      if (iVar1 != 0) {
        free(__ptr);
        return 0xfffffffe;
      }
    }
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + local_1c * 4),(void **)0x0);
    }
    free(__ptr);
    local_10 = 0xfffffffd;
    if (shared_counter == param_1 * param_2) {
      local_10 = 0x2a;
    }
  }
  return local_10;
}

// Function: call_mutex_lock @ 0x13090
void call_mutex_lock(void)
{
  param_mutex_lock(4,1000);
  return;
}

// Function: consumer_thread @ 0x130c0
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

// Function: producer_thread @ 0x13160
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

// Function: param_condition_variable @ 0x131e0
undefined4 param_condition_variable(void)
{
  int iVar1;
  undefined4 *local_18;
  pthread_t local_14;
  pthread_t local_10;
  undefined4 local_c;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_14,&local_18);
      pthread_join(local_10,(void **)0x0);
      local_c = *local_18;
      free(local_18);
    }
    else {
      pthread_cancel(local_14);
      local_c = 0xfffffffe;
    }
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}

// Function: call_condition_variable @ 0x132f0
void __regparm3 call_condition_variable(undefined4 param_1)
{
  param_condition_variable(param_1);
  return;
}

// Function: thread_atomic_increment @ 0x13310
undefined4 thread_atomic_increment(int *param_1)
{
  int iVar1;
  int local_c;
  for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
    LOCK();
    iVar1 = atomic_counter + 1;
    UNLOCK();
    atomic_counter = local_c + 1000;
    LOCK();
    if (local_c != iVar1) {
      atomic_counter = iVar1;
    }
    UNLOCK();
  }
  return 0;
}

// Function: thread_atomic_load_store @ 0x133c0
undefined4 thread_atomic_load_store(void)
{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return 0;
}

// Function: param_atomic_ops @ 0x13400
undefined4 param_atomic_ops(int param_1)
{
  int iVar1;
  int local_20;
  pthread_t local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined4 local_c;
  local_10 = malloc(param_1 << 2);
  if (local_10 == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    local_14 = 0;
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      iVar1 = pthread_create((pthread_t *)((int)local_10 + local_18 * 4),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&stack0x00000008);
      if (iVar1 != 0) {
        free(local_10);
        return 0xfffffffe;
      }
    }
    iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_1c,(void **)0x0);
    }
    for (local_20 = 0; iVar1 = atomic_counter, local_20 < param_1; local_20 = local_20 + 1) {
      pthread_join(*(pthread_t *)((int)local_10 + local_20 * 4),(void **)0x0);
    }
    free(local_10);
    local_c = 0xfffffffd;
    if (0 < iVar1) {
      local_c = 0x2a;
    }
  }
  return local_c;
}

// Function: call_atomic_ops @ 0x135a0
void call_atomic_ops(void)
{
  param_atomic_ops(4,500);
  return;
}

// Function: thread_tls_test @ 0x135d0
int * thread_tls_test(char *param_1)
{
  int iVar1;
  int *piVar2;
  int *in_GS_OFFSET;
  iVar1 = in_GS_OFFSET[-9];
  in_GS_OFFSET[-9] = in_GS_OFFSET[-9] + 0x32;
  strncpy((char *)(*in_GS_OFFSET + -0x20),param_1,0x1f);
  piVar2 = (int *)malloc(8);
  *piVar2 = iVar1;
  piVar2[1] = in_GS_OFFSET[-9];
  return piVar2;
}

// Function: param_thread_local_storage @ 0x13660
undefined4 param_thread_local_storage(int param_1)
{
  void *pvVar1;
  int iVar2;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined4 local_c;
  local_10 = malloc(param_1 << 2);
  local_14 = malloc(param_1 << 2);
  if ((local_10 == (void *)0x0) || (local_14 == (void *)0x0)) {
    local_c = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      pvVar1 = malloc(0x10);
      *(void **)((int)local_14 + local_18 * 4) = pvVar1;
      snprintf(*(char **)((int)local_14 + local_18 * 4),0x10,"Thread-%d",local_18);
    }
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      iVar2 = pthread_create((pthread_t *)((int)local_10 + local_1c * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)local_14 + local_1c * 4));
      if (iVar2 != 0) {
        for (local_20 = 0; local_20 <= local_1c; local_20 = local_20 + 1) {
          free(*(void **)((int)local_14 + local_20 * 4));
        }
        free(local_14);
        free(local_10);
        return 0xfffffffe;
      }
    }
    local_24 = 0;
    local_28 = 0;
    for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
      pthread_join(*(pthread_t *)((int)local_10 + local_2c * 4),&local_30);
      local_24 = *local_30 + local_24;
      local_28 = local_30[1] + local_28;
      free(local_30);
      free(*(void **)((int)local_14 + local_2c * 4));
    }
    free(local_14);
    free(local_10);
    local_c = 0xfffffffd;
    if (local_24 == param_1 * 100 && local_28 == param_1 * 0x96) {
      local_c = 0x2a;
    }
  }
  return local_c;
}

// Function: call_thread_local_storage @ 0x138e0
void call_thread_local_storage(void)
{
  param_thread_local_storage(4);
  return;
}

// Function: test_thread_concurrency @ 0x13910
void test_thread_concurrency(void)
{
  undefined4 uVar1;
  printf(&DAT_0001433a);
  uVar1 = call_pthread_create();
  printf(&DAT_00014359,uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_00014375,uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_00014392,uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_000143ae,uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_000143ca,uVar1);
  uVar1 = call_thread_local_storage();
  printf(&DAT_000143e6,uVar1);
  return;
}

// Function: main @ 0x139f0
undefined4 main(void)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}

// Function: __do_global_ctors_aux @ 0x13a30
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x13a7c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

