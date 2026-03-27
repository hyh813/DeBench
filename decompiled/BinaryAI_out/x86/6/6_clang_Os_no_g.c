// Decompiled by BinaryAI
// SHA256: 56f3407a1028269cb04be1853df1d3552d98056a3ccfd6e0640bd7ad14cf34f5

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

// Function: <EXTERNAL>::shmat @ 0x11180
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
  void *pvVar1;
  pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
  return pvVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x11190
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::unlink @ 0x111a0
int unlink(char *__name)
{
  int iVar1;
  iVar1 = unlink(__name);
  return iVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x111b0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
  size_t sVar1;
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x111c0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::usleep @ 0x111d0
int usleep(__useconds_t __useconds)
{
  int iVar1;
  iVar1 = usleep(__useconds);
  return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x111e0
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}

// Function: <EXTERNAL>::strcpy @ 0x111f0
char * strcpy(char *__dest,char *__src)
{
  char *pcVar1;
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x11200
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
  int iVar1;
  iVar1 = shmctl(__shmid,__cmd,__buf);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x11210
int pthread_cond_signal(pthread_cond_t *__cond)
{
  int iVar1;
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x11220
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x11230
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
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

// Function: <EXTERNAL>::bcmp @ 0x11280
int bcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = bcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::write @ 0x11290
ssize_t write(int __fd,void *__buf,size_t __n)
{
  ssize_t sVar1;
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}

// Function: <EXTERNAL>::bind @ 0x112a0
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
  int iVar1;
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x112b0
void __isoc99_sscanf(void)
{
  __isoc99_sscanf();
  return;
}

// Function: <EXTERNAL>::fopen @ 0x112c0
FILE * fopen(char *__filename,char *__modes)
{
  FILE *pFVar1;
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}

// Function: <EXTERNAL>::memset @ 0x112d0
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::snprintf @ 0x112e0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
  int iVar1;
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x112f0
int * __errno_location(void)
{
  int *piVar1;
  piVar1 = __errno_location();
  return piVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x11300
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::syscall @ 0x11310
long syscall(long __sysno,...)
{
  long lVar1;
  lVar1 = syscall(__sysno);
  return lVar1;
}

// Function: <EXTERNAL>::fileno @ 0x11320
int fileno(FILE *__stream)
{
  int iVar1;
  iVar1 = fileno(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::execl @ 0x11330
int execl(char *__path,char *__arg,...)
{
  int iVar1;
  iVar1 = execl(__path,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x11340
int pipe(int *__pipedes)
{
  int iVar1;
  iVar1 = pipe(__pipedes);
  return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x11350
int shmdt(void *__shmaddr)
{
  int iVar1;
  iVar1 = shmdt(__shmaddr);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x11360
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)
{
  int iVar1;
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x11370
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::listen @ 0x11380
int listen(int __fd,int __n)
{
  int iVar1;
  iVar1 = listen(__fd,__n);
  return iVar1;
}

// Function: <EXTERNAL>::ftok @ 0x11390
key_t ftok(char *__pathname,int __proj_id)
{
  key_t kVar1;
  kVar1 = ftok(__pathname,__proj_id);
  return kVar1;
}

// Function: <EXTERNAL>::socket @ 0x113a0
int socket(int __domain,int __type,int __protocol)
{
  int iVar1;
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x113b0
int pthread_join(pthread_t __th,void **__thread_return)
{
  int iVar1;
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x113c0
int pthread_cancel(pthread_t __th)
{
  int iVar1;
  iVar1 = pthread_cancel(__th);
  return iVar1;
}

// Function: <EXTERNAL>::close @ 0x113d0
int close(int __fd)
{
  int iVar1;
  iVar1 = close(__fd);
  return iVar1;
}

// Function: FUN_000113e0 @ 0x113e0
void FUN_000113e0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + -0x10))();
  return;
}

// Function: _start @ 0x113f0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1141c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11420
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11430
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11470
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x114c0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x4c2f) == '\0') {
    if (*(int *)(unaff_EDI + 0x4b23) != 0) {
      FUN_000113e0(*(undefined4 *)(unaff_EDI + 0x4c2b));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x4c33);
    while (uVar1 < ((unaff_EDI + 0x4a4b) - (unaff_EDI + 0x4a47) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x4c33) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x4a47 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x4c33);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x4c2f) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11559
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1155d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: param_strcpy @ 0x11564
void param_strcpy(char *param_1,char *param_2)
{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}

// Function: call_strcpy @ 0x11597
void call_strcpy(void)
{
  undefined4 local_24;
  undefined4 local_20;
  undefined local_1c;
  local_1c = 0;
  local_20 = 0x62694c6f;
  local_24 = 0x6c6c6548;
  strlen((char *)&local_24);
  return;
}

// Function: param_strcmp @ 0x115c9
int param_strcmp(char *param_1,char *param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = strcmp(param_1,param_2);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}

// Function: call_strcmp @ 0x11604
undefined4 call_strcmp(void)
{
  return 0;
}

// Function: param_strlen @ 0x11607
void param_strlen(char *param_1)
{
  strlen(param_1);
  return;
}

// Function: call_strlen @ 0x11628
undefined4 call_strlen(void)
{
  return 0xc;
}

// Function: param_memcpy @ 0x1162e
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return param_3;
}

// Function: call_memcpy @ 0x1165d
undefined4 call_memcpy(void)
{
  return 0x5a;
}

// Function: param_memcmp @ 0x11663
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  int iVar2;
  iVar1 = memcmp(param_1,param_2,param_3);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}

// Function: call_memcmp @ 0x116a2
int call_memcmp(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = memcmp(&DAT_000133d8,&DAT_000133cc,0xc);
  iVar2 = memcmp(&DAT_000133d8,&DAT_000133d8,0xc);
  iVar3 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar3 = 1;
  }
  iVar2 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar2 = 1;
  }
  return iVar2 + iVar3;
}

// Function: param_printf @ 0x1170d
void param_printf(undefined4 param_1,undefined4 param_2)
{
  printf("Value: %d, Name: %s\n",param_1,param_2);
  return;
}

// Function: call_printf @ 0x11739
void call_printf(void)
{
  printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
  return;
}

// Function: param_scanf @ 0x11766
int param_scanf(undefined4 param_1)
{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&local_14);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = local_14 + local_10;
  }
  return iVar2;
}

// Function: call_scanf @ 0x117ab
int call_scanf(void)
{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&local_14);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = local_14 + local_10;
  }
  return iVar2;
}

// Function: param_fopen_fclose @ 0x117f3
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

// Function: call_fopen_fclose @ 0x11841
uint call_fopen_fclose(void)
{
  int iVar1;
  iVar1 = param_fopen_fclose("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}

// Function: param_fread_fwrite @ 0x1186a
undefined4 param_fread_fwrite(char *param_1)
{
  FILE *__s;
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined local_30 [32];
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar1 == 0x12) {
      rewind(__s);
      sVar1 = fread(local_30,1,0x12,__s);
      local_30[sVar1] = 0;
      fclose(__s);
      unlink(param_1);
      uVar2 = 0xfffffffd;
      if (sVar1 == 0x12) {
        iVar3 = bcmp(local_30,"BinBench Test Data",0x13);
        uVar2 = 0xfffffffd;
        if (iVar3 == 0) {
          uVar2 = 0x2a;
        }
      }
    }
    else {
      fclose(__s);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

// Function: call_fread_fwrite @ 0x1193c
void call_fread_fwrite(void)
{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}

// Function: param_malloc_free @ 0x1195f
int param_malloc_free(int param_1)
{
  int *__ptr;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  __ptr = (int *)malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    if (param_1 != 0) {
      iVar1 = 0;
      iVar2 = 0;
      do {
        __ptr[iVar2] = iVar1;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 10;
      } while (param_1 != iVar2);
      unaff_ESI = *__ptr;
    }
    iVar1 = unaff_ESI + __ptr[param_1 + -1];
    free(__ptr);
  }
  return iVar1;
}

// Function: call_malloc_free @ 0x119b9
void call_malloc_free(void)
{
  param_malloc_free(10);
  return;
}

// Function: param_memset @ 0x119da
int param_memset(void *param_1,size_t param_2)
{
  int iVar1;
  size_t sVar2;
  memset(param_1,0,param_2);
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    sVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + (uint)*(byte *)((int)param_1 + sVar2);
      sVar2 = sVar2 + 1;
    } while (param_2 != sVar2);
  }
  return iVar1;
}

// Function: call_memset @ 0x11a1b
undefined4 call_memset(void)
{
  return 0;
}

// Function: param_strchr_strstr @ 0x11a1e
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
  char *pcVar1;
  char *pcVar2;
  pcVar1 = strchr(param_1,(int)param_2);
  pcVar2 = strstr(param_1,param_3);
  return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
         (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x11a78
undefined4 call_strchr_strstr(void)
{
  return 0xf;
}

// Function: test_standard_library_functions @ 0x11a7e
void test_standard_library_functions(void)
{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined local_28;
  puts(&DAT_0001336c);
  local_28 = 0;
  local_2c = 0x62694c6f;
  local_30 = 0x6c6c6548;
  sVar1 = strlen((char *)&local_30);
  printf(&DAT_00013074,sVar1);
  printf(&DAT_0001308f,0);
  printf(&DAT_000130aa,0xc);
  printf(&DAT_000130c6,0x5a);
  uVar2 = call_memcmp();
  printf(&DAT_000130e2,uVar2);
  iVar3 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
  printf(&DAT_000130fe,iVar3);
  iVar4 = __isoc99_sscanf("123,456","%d,%d",&local_30,&local_34);
  iVar3 = -1;
  if (iVar4 == 2) {
    iVar3 = local_34 + local_30;
  }
  printf(&DAT_0001311a,iVar3);
  iVar3 = param_fopen_fclose("/etc/passwd");
  printf(&DAT_00013137,iVar3 >> 0x1f | 0x2a);
  uVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(&DAT_00013153,uVar2);
  uVar2 = param_malloc_free(10);
  printf(&DAT_0001316f,uVar2);
  printf(&DAT_0001318b,0);
  printf(&DAT_000131a6,0xf);
  return;
}

// Function: param_linux_syscall @ 0x11c2f
int __regparm1 param_linux_syscall(undefined4 param_1_00,undefined4 param_1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uVar4 = 0x11c37;
  uVar3 = 0;
  iVar1 = syscall(5,param_1,0,0x11c37,param_1_00);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    syscall(6,iVar1,uVar3,uVar4,param_1_00);
  }
  return iVar1;
}

// Function: call_linux_syscall @ 0x11c78
uint call_linux_syscall(void)
{
  int iVar1;
  iVar1 = param_linux_syscall("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x11ca1
undefined4 param_win32_api(char *param_1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  stat local_64;
  iVar1 = stat(param_1,&local_64);
  uVar3 = 0xfffffffe;
  if (0 < local_64.st_size) {
    uVar3 = 0x2a;
  }
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// Function: call_win32_api @ 0x11ce7
undefined4 call_win32_api(void)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  stat local_64;
  iVar1 = stat("/etc/passwd",&local_64);
  uVar3 = 0xfffffffe;
  if (0 < local_64.st_size) {
    uVar3 = 0x2a;
  }
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// Function: param_fork_exec @ 0x11d30
uint param_fork_exec(char *param_1,undefined4 param_2)
{
  __pid_t _Var1;
  uint uVar2;
  uint local_8;
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl(param_1,param_1,param_2,0);
      _exit(0x7f);
    }
    _Var1 = waitpid(_Var1,(int *)&local_8,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0xfffffffd;
      if ((local_8 & 0x7f) == 0) {
        uVar2 = local_8 >> 8 & 0xff;
      }
    }
  }
  return uVar2;
}

// Function: call_fork_exec @ 0x11d9f
uint call_fork_exec(void)
{
  int iVar1;
  iVar1 = param_fork_exec("/bin/true",0);
  return -(uint)(iVar1 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x11dcf
undefined4 param_pipe_communication(void)
{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  undefined4 uVar4;
  int local_30;
  int local_2c;
  undefined local_28 [32];
  iVar1 = pipe(&local_30);
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
        close(local_30);
        write(local_2c,"HelloPipe",9);
        close(local_2c);
        _exit(0);
      }
      close(local_2c);
      sVar3 = read(local_30,local_28,0x1f);
      local_28[sVar3] = 0;
      close(local_30);
      wait((void *)0x0);
      uVar4 = 0xfffffffd;
      if (0 < sVar3) {
        uVar4 = 0x2a;
      }
    }
  }
  return uVar4;
}

// Function: call_pipe_communication @ 0x11ea5
void call_pipe_communication(void)
{
  param_pipe_communication();
  return;
}

// Function: param_socket_create @ 0x11ebf
undefined4 param_socket_create(void)
{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  sockaddr local_1c;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 1;
    iVar1 = setsockopt(__fd,1,2,&local_20,4);
    if (iVar1 < 0) {
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      local_1c.sa_data[10] = '\0';
      local_1c.sa_data[11] = '\0';
      local_1c.sa_data[12] = '\0';
      local_1c.sa_data[13] = '\0';
      local_1c.sa_data[6] = '\0';
      local_1c.sa_data[7] = '\0';
      local_1c.sa_data[8] = '\0';
      local_1c.sa_data[9] = '\0';
      local_1c.sa_family = 2;
      local_1c.sa_data[0] = '\0';
      local_1c.sa_data[1] = '\0';
      local_1c.sa_data[2] = '\0';
      local_1c.sa_data[3] = '\0';
      local_1c.sa_data[4] = '\0';
      local_1c.sa_data[5] = '\0';
      iVar1 = bind(__fd,&local_1c,0x10);
      if (iVar1 < 0) {
        close(__fd);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(__fd,5);
        close(__fd);
        uVar2 = 0x2a;
        if (iVar1 < 0) {
          uVar2 = 0xfffffffc;
        }
      }
    }
  }
  return uVar2;
}

// Function: call_socket_create @ 0x11f8c
void call_socket_create(void)
{
  param_socket_create();
  return;
}

// Function: param_shmget_shmat @ 0x11fa6
size_t param_shmget_shmat(void)
{
  int iVar1;
  key_t __key;
  undefined4 *__s;
  size_t sVar2;
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  sVar2 = 0xffffffff;
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        sVar2 = 0xfffffffe;
      }
      else {
        __s = (undefined4 *)shmat(iVar1,(void *)0x0,0);
        if (__s == (undefined4 *)0xffffffff) {
          sVar2 = 0xfffffffd;
        }
        else {
          *(undefined *)(__s + 3) = 0;
          __s[2] = 0x79726f6d;
          __s[1] = 0x654d6465;
          *__s = 0x72616853;
          sVar2 = strlen((char *)__s);
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return sVar2;
}

// Function: call_shmget_shmat @ 0x1208a
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

// Function: param_signal_handling @ 0x120b1
undefined4 param_signal_handling(void)
{
  bool bVar1;
  __sighandler_t p_Var2;
  undefined4 uVar3;
  uint uVar4;
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffff) {
    uVar3 = 0xffffffff;
  }
  else {
    p_Var2 = signal(0xe,signal_handler);
    if (p_Var2 == (__sighandler_t)0xffffffff) {
      uVar3 = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        uVar4 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          bVar1 = 1 < uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
      if (signal_received == 0) {
        uVar3 = 0xfffffffd;
      }
      else {
        uVar3 = 0xfffffffc;
        if (signal_number == 10) {
          signal_received = 0;
          alarm(1);
          if (signal_received == 0) {
            uVar4 = 2000;
            do {
              usleep(1000);
              if (signal_received != 0) break;
              bVar1 = 1 < uVar4;
              uVar4 = uVar4 - 1;
            } while (bVar1);
          }
          uVar3 = 0xfffffffb;
          if ((signal_received != 0) && (signal_number == 0xe)) {
            signal(10,(__sighandler_t)0x0);
            signal(0xe,(__sighandler_t)0x0);
            uVar3 = 0x2a;
          }
        }
      }
    }
  }
  return uVar3;
}

// Function: FUN_000121ff @ 0x121ff
void FUN_000121ff(undefined4 param_1,undefined4 param_2)
{
  int unaff_retaddr;
  *(undefined4 *)(unaff_retaddr + 0x3f05) = 1;
  *(undefined4 *)(unaff_retaddr + 0x3f09) = param_2;
  return;
}

// Function: call_signal_handling @ 0x1221b
void call_signal_handling(void)
{
  param_signal_handling();
  return;
}

// Function: test_system_calls @ 0x12235
void test_system_calls(void)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  stat local_6c;
  puts(&DAT_00013390);
  iVar1 = param_linux_syscall("/etc/passwd");
  printf(&DAT_000131f5,iVar1 >> 0x1f | 0x2a);
  iVar1 = stat("/etc/passwd",&local_6c);
  uVar2 = 0xfffffffe;
  if (0 < local_6c.st_size) {
    uVar2 = 0x2a;
  }
  uVar3 = 0xffffffff;
  if (iVar1 < 0) {
    uVar2 = uVar3;
  }
  printf(&DAT_00013211,uVar2);
  iVar1 = param_fork_exec("/bin/true",0);
  printf(&DAT_0001322d,-(uint)(iVar1 != 0) | 0x2a);
  uVar2 = param_pipe_communication();
  printf(&DAT_00013249,uVar2);
  uVar2 = param_socket_create();
  printf(&DAT_00013265,uVar2);
  iVar1 = param_shmget_shmat();
  if (0 < iVar1) {
    uVar3 = 0x2a;
  }
  printf(&DAT_00013281,uVar3);
  uVar2 = param_signal_handling();
  printf(&DAT_0001329d,uVar2);
  return;
}

// Function: thread_compute @ 0x1234e
void thread_compute(int *param_1)
{
  int iVar1;
  int *piVar2;
  iVar1 = *param_1;
  piVar2 = (int *)malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}

// Function: param_pthread_create @ 0x1237a
undefined4 param_pthread_create(undefined4 param_1)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_14;
  undefined4 *local_10;
  undefined4 local_c;
  local_c = param_1;
  iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_compute,&local_c);
  if (iVar1 == 0) {
    pthread_join(local_14,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_pthread_create @ 0x123e1
void call_pthread_create(void)
{
  param_pthread_create(7);
  return;
}

// Function: thread_sum @ 0x12402
undefined4 thread_sum(uint *param_1)
{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  param_1[2] = 0;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((int)uVar1 <= (int)uVar2) {
    lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
    param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
                 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
  }
  return 0;
}

// Function: param_pthread_join @ 0x1243a
int param_pthread_join(void)
{
  int iVar1;
  int iVar2;
  pthread_t *__arg;
  int iVar3;
  int *piVar4;
  pthread_t apStack_40 [4];
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  iVar3 = 0;
  __arg = apStack_40;
  local_14 = 0;
  local_20 = 0;
  local_2c = 0;
  apStack_40[3] = 1;
  local_30 = 10;
  local_28 = 0xb;
  local_24 = 0x14;
  local_1c = 0x15;
  local_18 = 0x1e;
  do {
    __arg = __arg + 3;
    iVar1 = pthread_create((pthread_t *)((int)apStack_40 + iVar3),(pthread_attr_t *)0x0,thread_sum,
                           __arg);
    if (iVar1 != 0) {
      return -1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0xc);
  piVar4 = &local_2c;
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar2 = pthread_join(apStack_40[iVar3],(void **)0x0);
    if (iVar2 != 0) {
      return -2;
    }
    iVar1 = iVar1 + *piVar4;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 3;
  } while (iVar3 != 3);
  return iVar1;
}

// Function: call_pthread_join @ 0x124f1
void call_pthread_join(void)
{
  param_pthread_join();
  return;
}

// Function: thread_increment @ 0x1250b
undefined4 thread_increment(int *param_1)
{
  int iVar1;
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
      usleep(1000);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

// Function: param_mutex_lock @ 0x1255b
undefined4 param_mutex_lock(int param_1,int param_2)
{
  pthread_t *__ptr;
  int iVar1;
  undefined4 uVar2;
  pthread_t *__newthread;
  int iVar3;
  __ptr = (pthread_t *)malloc(param_1 * 4);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    __newthread = __ptr;
    iVar3 = param_1;
    if (0 < param_1) {
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&param_2);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        iVar3 = iVar3 + -1;
        __newthread = __newthread + 1;
      } while (iVar3 != 0);
      if (0 < param_1) {
        iVar3 = 0;
        do {
          pthread_join(__ptr[iVar3],(void **)0x0);
          iVar3 = iVar3 + 1;
        } while (param_1 != iVar3);
      }
    }
    free(__ptr);
    uVar2 = 0xfffffffd;
    if (shared_counter == param_1 * param_2) {
      uVar2 = 0x2a;
    }
  }
  return uVar2;
}

// Function: call_mutex_lock @ 0x12631
void call_mutex_lock(void)
{
  param_mutex_lock(4,1000);
  return;
}

// Function: consumer_thread @ 0x12655
void consumer_thread(void)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  if (ready == '\0') {
    do {
      pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
    } while (ready != '\x01');
  }
  uVar2 = 0x2a;
  if (data == '\0') {
    uVar2 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar1 = (undefined4 *)malloc(4);
  *puVar1 = uVar2;
  return;
}

// Function: producer_thread @ 0x126c7
undefined4 producer_thread(void)
{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 1;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}

// Function: param_condition_variable @ 0x1271c
undefined4 param_condition_variable(void)
{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_14;
  pthread_t local_10;
  undefined4 *local_c;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_14,&local_c);
      pthread_join(local_10,(void **)0x0);
      uVar2 = *local_c;
      free(local_c);
    }
    else {
      pthread_cancel(local_14);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_condition_variable @ 0x127c6
void call_condition_variable(void)
{
  param_condition_variable();
  return;
}

// Function: thread_atomic_increment @ 0x127e0
undefined4 thread_atomic_increment(int *param_1)
{
  int iVar1;
  int iVar2;
  if (0 < *param_1) {
    iVar2 = 0;
    do {
      LOCK();
      iVar1 = atomic_counter + 1;
      UNLOCK();
      atomic_counter = iVar2 + 1000;
      LOCK();
      if (iVar2 != iVar1) {
        atomic_counter = iVar1;
      }
      UNLOCK();
      iVar2 = iVar2 + 1;
    } while (iVar2 != *param_1);
  }
  return 0;
}

// Function: FUN_00012820 @ 0x12820
undefined4 FUN_00012820(void)
{
  int unaff_retaddr;
  LOCK();
  *(int *)(unaff_retaddr + 0x3928) = *(int *)(unaff_retaddr + 0x3928) + 100;
  UNLOCK();
  return 0;
}

// Function: param_atomic_ops @ 0x12839
undefined4 param_atomic_ops(int param_1)
{
  pthread_t *__ptr;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  pthread_t *__newthread;
  pthread_t local_14;
  __ptr = (pthread_t *)malloc(param_1 * 4);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    iVar3 = param_1;
    __newthread = __ptr;
    if (0 < param_1) {
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,
                               &stack0x00000008);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        iVar3 = iVar3 + -1;
        __newthread = __newthread + 1;
      } while (iVar3 != 0);
    }
    iVar3 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar3 == 0) {
      pthread_join(local_14,(void **)0x0);
    }
    if (0 < param_1) {
      iVar3 = 0;
      do {
        pthread_join(__ptr[iVar3],(void **)0x0);
        iVar3 = iVar3 + 1;
      } while (param_1 != iVar3);
    }
    iVar3 = atomic_counter;
    free(__ptr);
    uVar2 = 0xfffffffd;
    if (0 < iVar3) {
      uVar2 = 0x2a;
    }
  }
  return uVar2;
}

// Function: call_atomic_ops @ 0x12939
void call_atomic_ops(void)
{
  param_atomic_ops(4,500);
  return;
}

// Function: thread_tls_test @ 0x1295d
void thread_tls_test(char *param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_GS_OFFSET;
  iVar2 = in_GS_OFFSET[-9];
  iVar1 = iVar2 + 0x32;
  in_GS_OFFSET[-9] = iVar1;
  strncpy((char *)(*in_GS_OFFSET + -0x20),param_1,0x1f);
  piVar3 = (int *)malloc(8);
  *piVar3 = iVar2;
  piVar3[1] = iVar1;
  return;
}

// Function: param_thread_local_storage @ 0x129b0
undefined4 param_thread_local_storage(int param_1)
{
  pthread_t *__ptr;
  void *__ptr_00;
  char *__s;
  int iVar1;
  undefined4 uVar2;
  pthread_t *__newthread;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *local_14;
  __ptr = (pthread_t *)malloc(param_1 * 4);
  __ptr_00 = malloc(param_1 * 4);
  if (__ptr == (pthread_t *)0x0) {
    return 0xffffffff;
  }
  if (__ptr_00 == (void *)0x0) {
    return 0xffffffff;
  }
  if (0 < param_1) {
    iVar4 = 0;
    do {
      __s = (char *)malloc(0x10);
      *(char **)((int)__ptr_00 + iVar4 * 4) = __s;
      snprintf(__s,0x10,"Thread-%d",iVar4);
      iVar4 = iVar4 + 1;
    } while (param_1 != iVar4);
    if (0 < param_1) {
      iVar4 = 0;
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               *(void **)((int)__ptr_00 + iVar4 * 4));
        if (iVar1 != 0) {
          iVar1 = -1;
          do {
            free(*(void **)((int)__ptr_00 + iVar1 * 4 + 4));
            iVar1 = iVar1 + 1;
          } while (iVar4 != iVar1);
          free(__ptr_00);
          free(__ptr);
          return 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        __newthread = __newthread + 1;
      } while (param_1 != iVar4);
      if (0 < param_1) {
        iVar4 = 0;
        uVar3 = 0;
        uVar5 = 0;
        do {
          pthread_join(__ptr[iVar4],&local_14);
          uVar5 = uVar5 + *local_14;
          uVar3 = uVar3 + local_14[1];
          free(local_14);
          free(*(void **)((int)__ptr_00 + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (param_1 != iVar4);
        goto LAB_00012add;
      }
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_00012add:
  free(__ptr_00);
  free(__ptr);
  uVar2 = 0xfffffffd;
  if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar5) == 0) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: call_thread_local_storage @ 0x12b50
void call_thread_local_storage(void)
{
  param_thread_local_storage(4);
  return;
}

// Function: test_thread_concurrency @ 0x12b71
void test_thread_concurrency(void)
{
  undefined4 uVar1;
  puts(&DAT_000133ab);
  uVar1 = param_pthread_create(7);
  printf(&DAT_000132c3,uVar1);
  uVar1 = param_pthread_join();
  printf(&DAT_000132df,uVar1);
  uVar1 = param_mutex_lock(4,1000);
  printf(&DAT_000132fc,uVar1);
  uVar1 = param_condition_variable();
  printf(&DAT_00013318,uVar1);
  uVar1 = param_atomic_ops(4,500);
  printf(&DAT_00013334,uVar1);
  uVar1 = param_thread_local_storage(4);
  printf(&DAT_00013350,uVar1);
  return;
}

// Function: main @ 0x12c45
undefined4 main(void)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}

// Function: __do_global_ctors_aux @ 0x12c70
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x12cbc
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

