// Decompiled by BinaryAI
// SHA256: f7c817139f099203f07dad4385e46454602212ee375e481878f2f6fb3280a331

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

// Function: <EXTERNAL>::puts @ 0x1020a0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x1020b0
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x1020c0
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
  int iVar1;
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x1020d0
int shmdt(void *__shmaddr)
{
  int iVar1;
  iVar1 = shmdt(__shmaddr);
  return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1020e0
ssize_t write(int __fd,void *__buf,size_t __n)
{
  ssize_t sVar1;
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x1020f0
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
  int iVar1;
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x102100
int fclose(FILE *__stream)
{
  int iVar1;
  iVar1 = fclose(__stream);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x102110
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
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

// Function: call_strcpy @ 0x1024d0
void call_strcpy(void)
{
  undefined8 local_28;
  undefined local_20;
  local_28 = 0x62694c6f6c6c6548;
  local_20 = 0;
  strlen((char *)&local_28);
  return;
}

// Function: param_strcmp @ 0x102500
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

// Function: call_strcmp @ 0x102520
undefined8 call_strcmp(void)
{
  return 0;
}

// Function: param_strlen @ 0x102530
void param_strlen(char *param_1)
{
  strlen(param_1);
  return;
}

// Function: call_strlen @ 0x102540
undefined8 call_strlen(void)
{
  return 0xc;
}

// Function: param_memcpy @ 0x102550
ulong param_memcpy(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102560
undefined8 call_memcpy(void)
{
  return 0x5a;
}

// Function: param_memcmp @ 0x102570
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

// Function: call_memcmp @ 0x102590
undefined8 call_memcmp(void)
{
  return 0xffffffff;
}

// Function: param_printf @ 0x1025a0
void param_printf(ulong param_1,undefined8 param_2)
{
  printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
  return;
}

// Function: call_printf @ 0x1025c0
void call_printf(void)
{
  printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
  return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(undefined8 param_1)
{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 local_8;
  local_8 = in_RAX;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",(long)&local_8 + 4,&local_8);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = (int)local_8 + local_8._4_4_;
  }
  return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 local_8;
  local_8 = in_RAX;
  iVar1 = __isoc99_sscanf("123,456","%d,%d",(long)&local_8 + 4,&local_8);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = (int)local_8 + local_8._4_4_;
  }
  return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
int param_fopen_fclose(char *param_1)
{
  int iVar1;
  FILE *__stream;
  __stream = fopen(param_1,"r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    return iVar1;
  }
  return -1;
}

// Function: call_fopen_fclose @ 0x102690
uint call_fopen_fclose(void)
{
  int iVar1;
  FILE *__stream;
  uint uVar2;
  __stream = fopen("/etc/passwd","r");
  if (__stream == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = fileno(__stream);
    fclose(__stream);
    uVar2 = iVar1 >> 0x1f | 0x2a;
  }
  return uVar2;
}

// Function: param_fread_fwrite @ 0x1026e0
undefined8 param_fread_fwrite(char *param_1)
{
  FILE *__s;
  size_t sVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  char local_38 [4];
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar1 == 0x12) {
      rewind(__s);
      sVar1 = fread(local_38,1,0x12,__s);
      local_38[sVar1] = '\0';
      fclose(__s);
      unlink(param_1);
      uVar2 = 0xfffffffd;
      if (sVar1 == 0x12) {
        auVar4[0] = -(local_38[3] == s_Bench_Test_Data_00104010[0]);
        auVar4[1] = -(cStack_34 == s_Bench_Test_Data_00104010[1]);
        auVar4[2] = -(cStack_33 == s_Bench_Test_Data_00104010[2]);
        auVar4[3] = -(cStack_32 == s_Bench_Test_Data_00104010[3]);
        auVar4[4] = -(cStack_31 == s_Bench_Test_Data_00104010[4]);
        auVar4[5] = -(cStack_30 == s_Bench_Test_Data_00104010[5]);
        auVar4[6] = -(cStack_2f == s_Bench_Test_Data_00104010[6]);
        auVar4[7] = -(cStack_2e == s_Bench_Test_Data_00104010[7]);
        auVar4[8] = -(cStack_2d == s_Bench_Test_Data_00104010[8]);
        auVar4[9] = -(cStack_2c == s_Bench_Test_Data_00104010[9]);
        auVar4[10] = -(cStack_2b == s_Bench_Test_Data_00104010[10]);
        auVar4[11] = -(cStack_2a == s_Bench_Test_Data_00104010[11]);
        auVar4[12] = -(cStack_29 == s_Bench_Test_Data_00104010[12]);
        auVar4[13] = -(cStack_28 == s_Bench_Test_Data_00104010[13]);
        auVar4[14] = -(cStack_27 == s_Bench_Test_Data_00104010[14]);
        auVar4[15] = -(cStack_26 == s_Bench_Test_Data_00104010[15]);
        auVar3[0] = -(local_38[0] == 'B');
        auVar3[1] = -(local_38[1] == 'i');
        auVar3[2] = -(local_38[2] == 'n');
        auVar3[3] = -(local_38[3] == 'B');
        auVar3[4] = -(cStack_34 == 'e');
        auVar3[5] = -(cStack_33 == 'n');
        auVar3[6] = -(cStack_32 == 'c');
        auVar3[7] = -(cStack_31 == 'h');
        auVar3[8] = -(cStack_30 == ' ');
        auVar3[9] = -(cStack_2f == 'T');
        auVar3[10] = -(cStack_2e == 'e');
        auVar3[11] = -(cStack_2d == 's');
        auVar3[12] = -(cStack_2c == 't');
        auVar3[13] = -(cStack_2b == ' ');
        auVar3[14] = -(cStack_2a == 'D');
        auVar3[15] = -(cStack_29 == 'a');
        auVar3 = auVar3 & auVar4;
        uVar2 = 0xfffffffd;
        if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar3[15] >> 7) << 0xf) == 0xffff) {
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

// Function: call_fread_fwrite @ 0x1027c0
void call_fread_fwrite(void)
{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}

// Function: param_malloc_free @ 0x1027d0
int param_malloc_free(ulong param_1)
{
  undefined8 *puVar1;
  int *piVar2;
  int *__ptr;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int unaff_EBP;
  long lVar6;
  ulong uVar7;
  int iVar10;
  undefined auVar8 [16];
  int iVar11;
  undefined auVar9 [16];
  int iVar12;
  int iVar13;
  int iVar15;
  undefined auVar14 [16];
  __ptr = (int *)malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    return -1;
  }
  if (param_1 == 0) goto LAB_00102921;
  if (param_1 < 8) {
    uVar3 = 0;
LAB_00102904:
    iVar4 = (int)uVar3 * 10;
    do {
      __ptr[uVar3] = iVar4;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 10;
    } while (param_1 != uVar3);
  }
  else {
    uVar3 = param_1 & 0xfffffffffffffff8;
    uVar5 = (uVar3 - 8 >> 3) + 1;
    if (uVar3 - 8 == 0) {
      iVar4._0_1_ = '\0';
      iVar4._1_1_ = '\0';
      iVar4._2_1_ = '\0';
      iVar4._3_1_ = '\0';
      iVar11 = 10;
      iVar10 = 0x14;
      iVar12 = 0x1e;
      lVar6 = 0;
    }
    else {
      uVar7 = uVar5 & 0xfffffffffffffffe;
      lVar6 = 0;
      auVar8 = _DAT_00104040;
      do {
        iVar10 = auVar8._0_4_ * 10;
        iVar12 = (int)((auVar8._8_8_ & 0xffffffff) * 10);
        iVar4 = auVar8._4_4_;
        iVar11 = auVar8._12_4_;
        auVar14._4_4_ = iVar4;
        auVar14._0_4_ = iVar4;
        auVar14._8_4_ = iVar11;
        auVar14._12_4_ = iVar11;
        iVar13 = iVar4 * 10;
        iVar15 = (int)((auVar14._8_8_ & 0xffffffff) * 10);
        puVar1 = (undefined8 *)(__ptr + lVar6);
        *puVar1 = CONCAT44(iVar13,iVar10);
        *(int *)(puVar1 + 2) = iVar12;
        *(int *)((long)puVar1 + 0x14) = iVar15;
        piVar2 = __ptr + lVar6 + 4;
        *piVar2 = iVar10 + 0x28;
        piVar2[1] = iVar13 + 0x28;
        piVar2[2] = iVar12 + 0x28;
        piVar2[3] = iVar15 + 0x28;
        piVar2 = __ptr + lVar6 + 8;
        *piVar2 = iVar10 + 0x50;
        piVar2[1] = iVar13 + 0x50;
        piVar2[2] = iVar12 + 0x50;
        piVar2[3] = iVar15 + 0x50;
        piVar2 = __ptr + lVar6 + 0xc;
        *piVar2 = iVar10 + 0x78;
        piVar2[1] = iVar13 + 0x78;
        piVar2[2] = iVar12 + 0x78;
        piVar2[3] = iVar15 + 0x78;
        lVar6 = lVar6 + 0x10;
        auVar9._0_4_ = auVar8._0_4_ + 0x10;
        auVar9._4_4_ = iVar4 + 0x10;
        auVar9._8_4_ = auVar8._8_4_ + 0x10;
        auVar9._12_4_ = iVar11 + 0x10;
        uVar7 = uVar7 - 2;
        auVar8 = auVar9;
      } while (uVar7 != 0);
      auVar8._4_4_ = auVar9._4_4_;
      auVar8._0_4_ = auVar9._4_4_;
      auVar8._8_4_ = auVar9._12_4_;
      auVar8._12_4_ = auVar9._12_4_;
      iVar4 = auVar9._0_4_ * 10;
      iVar10 = (int)((auVar9._8_8_ & 0xffffffff) * 10);
      iVar11 = auVar9._4_4_ * 10;
      iVar12 = (int)((auVar8._8_8_ & 0xffffffff) * 10);
    }
    if ((uVar5 & 1) != 0) {
      piVar2 = __ptr + lVar6;
      *piVar2 = iVar4;
      piVar2[1] = iVar11;
      piVar2[2] = iVar10;
      piVar2[3] = iVar12;
      piVar2 = __ptr + lVar6 + 4;
      *piVar2 = iVar4 + 0x28;
      piVar2[1] = iVar11 + 0x28;
      piVar2[2] = iVar10 + 0x28;
      piVar2[3] = iVar12 + 0x28;
    }
    if (uVar3 != param_1) goto LAB_00102904;
  }
  unaff_EBP = *__ptr;
LAB_00102921:
  iVar4 = __ptr[param_1 - 1];
  free(__ptr);
  return unaff_EBP + iVar4;
}

// Function: call_malloc_free @ 0x102950
undefined8 call_malloc_free(void)
{
  return 0x5a;
}

// Function: param_memset @ 0x102960
int param_memset(void *param_1,size_t param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined auVar4 [13];
  undefined auVar5 [13];
  undefined auVar6 [13];
  undefined auVar7 [13];
  undefined auVar8 [13];
  undefined auVar9 [13];
  undefined auVar10 [13];
  undefined auVar11 [13];
  undefined auVar12 [13];
  undefined auVar13 [13];
  undefined auVar14 [13];
  undefined auVar15 [13];
  undefined auVar16 [13];
  undefined auVar17 [13];
  undefined auVar18 [13];
  undefined auVar19 [13];
  ulong uVar20;
  ulong uVar21;
  undefined auVar22 [13];
  undefined auVar23 [13];
  undefined auVar24 [13];
  undefined auVar25 [13];
  uint5 uVar26;
  undefined auVar27 [13];
  undefined auVar28 [13];
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  iVar32 = 0;
  memset(param_1,0,param_2);
  if (param_2 != 0) {
    if (param_2 < 8) {
      uVar29 = 0;
      iVar32 = 0;
    }
    else {
      uVar29 = param_2 & 0xfffffffffffffff8;
      uVar30 = (uVar29 - 8 >> 3) + 1;
      if (uVar29 - 8 == 0) {
        iVar32 = 0;
        iVar34 = 0;
        iVar35 = 0;
        iVar36 = 0;
        lVar31 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
      }
      else {
        uVar33 = uVar30 & 0xfffffffffffffffe;
        lVar31 = 0;
        iVar32 = 0;
        iVar34 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
        do {
          uVar1 = *(undefined4 *)((long)param_1 + lVar31);
          uVar2 = *(undefined4 *)((long)param_1 + lVar31 + 4);
          uVar20 = (ulong)(ushort)uVar1 & 0xffffffffffff00ff;
          auVar4._8_4_ = 0;
          auVar4._0_8_ = uVar20;
          auVar4[12] = (char)((uint)uVar1 >> 0x18);
          auVar5[8] = (char)((uint)uVar1 >> 0x10);
          auVar5._0_8_ = uVar20;
          auVar5[9] = 0;
          auVar5._10_3_ = auVar4._10_3_;
          auVar22._5_8_ = 0;
          auVar22._0_5_ = auVar5._8_5_;
          auVar6[4] = (char)((uint)uVar1 >> 8);
          auVar6._0_4_ = (int)uVar20;
          auVar6[5] = 0;
          auVar6._6_7_ = SUB137(auVar22 << 0x40,6);
          uVar21 = (ulong)(ushort)uVar2 & 0xffffffffffff00ff;
          auVar7._8_4_ = 0;
          auVar7._0_8_ = uVar21;
          auVar7[12] = (char)((uint)uVar2 >> 0x18);
          auVar8[8] = (char)((uint)uVar2 >> 0x10);
          auVar8._0_8_ = uVar21;
          auVar8[9] = 0;
          auVar8._10_3_ = auVar7._10_3_;
          auVar23._5_8_ = 0;
          auVar23._0_5_ = auVar8._8_5_;
          auVar9[4] = (char)((uint)uVar2 >> 8);
          auVar9._0_4_ = (int)uVar21;
          auVar9[5] = 0;
          auVar9._6_7_ = SUB137(auVar23 << 0x40,6);
          uVar3 = *(uint *)((long)param_1 + lVar31 + 8);
          uVar1 = *(undefined4 *)((long)param_1 + lVar31 + 0xc);
          auVar10[12] = (char)(uVar3 >> 0x18);
          auVar10._0_12_ = ZEXT812(0);
          auVar11._10_3_ = auVar10._10_3_;
          auVar11._0_10_ = (unkuint10)(byte)(uVar3 >> 0x10) << 0x40;
          auVar24._5_8_ = 0;
          auVar24._0_5_ = auVar11._8_5_;
          auVar12._6_7_ = SUB137(auVar24 << 0x40,6);
          auVar12._0_6_ = (uint6)CONCAT14((char)(uVar3 >> 8),uVar3) & 0xffff000000ff;
          iVar32 = (uVar3 & 0xff) + (int)uVar20 + iVar32;
          iVar34 = auVar12._4_4_ + auVar6._4_4_ + iVar34;
          iVar35 = auVar11._8_4_ + auVar5._8_4_ + iVar35;
          iVar36 = (uint)(uint3)(auVar10._10_3_ >> 0x10) +
                   (uint)(uint3)(auVar4._10_3_ >> 0x10) + iVar36;
          uVar20 = (ulong)(ushort)uVar1 & 0xffffffffffff00ff;
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar20;
          auVar13[12] = (char)((uint)uVar1 >> 0x18);
          auVar14[8] = (char)((uint)uVar1 >> 0x10);
          auVar14._0_8_ = uVar20;
          auVar14[9] = 0;
          auVar14._10_3_ = auVar13._10_3_;
          auVar25._5_8_ = 0;
          auVar25._0_5_ = auVar14._8_5_;
          auVar15[4] = (char)((uint)uVar1 >> 8);
          auVar15._0_4_ = (int)uVar20;
          auVar15[5] = 0;
          auVar15._6_7_ = SUB137(auVar25 << 0x40,6);
          iVar37 = (int)uVar20 + (int)uVar21 + iVar37;
          iVar38 = auVar15._4_4_ + auVar9._4_4_ + iVar38;
          iVar39 = auVar14._8_4_ + auVar8._8_4_ + iVar39;
          iVar40 = (uint)(uint3)(auVar13._10_3_ >> 0x10) +
                   (uint)(uint3)(auVar7._10_3_ >> 0x10) + iVar40;
          lVar31 = lVar31 + 0x10;
          uVar33 = uVar33 - 2;
        } while (uVar33 != 0);
      }
      if ((uVar30 & 1) != 0) {
        uVar3 = *(uint *)((long)param_1 + lVar31);
        uVar1 = *(undefined4 *)((long)param_1 + lVar31 + 4);
        auVar16[12] = (char)(uVar3 >> 0x18);
        auVar16._0_12_ = ZEXT712(0);
        uVar26 = CONCAT32(auVar16._10_3_,(ushort)(byte)(uVar3 >> 0x10));
        auVar28._5_8_ = 0;
        auVar28._0_5_ = uVar26;
        iVar32 = iVar32 + (uVar3 & 0xff);
        iVar34 = iVar34 + (int)CONCAT72(SUB137(auVar28 << 0x40,6),(ushort)(byte)(uVar3 >> 8));
        iVar35 = iVar35 + (int)uVar26;
        iVar36 = iVar36 + (uint)(uint3)(auVar16._10_3_ >> 0x10);
        uVar30 = (ulong)(ushort)uVar1 & 0xffffffffffff00ff;
        auVar17._8_4_ = 0;
        auVar17._0_8_ = uVar30;
        auVar17[12] = (char)((uint)uVar1 >> 0x18);
        auVar18[8] = (char)((uint)uVar1 >> 0x10);
        auVar18._0_8_ = uVar30;
        auVar18[9] = 0;
        auVar18._10_3_ = auVar17._10_3_;
        auVar27._5_8_ = 0;
        auVar27._0_5_ = auVar18._8_5_;
        auVar19[4] = (char)((uint)uVar1 >> 8);
        auVar19._0_4_ = (int)uVar30;
        auVar19[5] = 0;
        auVar19._6_7_ = SUB137(auVar27 << 0x40,6);
        iVar37 = iVar37 + (int)uVar30;
        iVar38 = iVar38 + auVar19._4_4_;
        iVar39 = iVar39 + auVar18._8_4_;
        iVar40 = iVar40 + (uint)(uint3)(auVar17._10_3_ >> 0x10);
      }
      iVar32 = iVar36 + iVar40 + iVar34 + iVar38 + iVar35 + iVar39 + iVar32 + iVar37;
      if (uVar29 == param_2) {
        return iVar32;
      }
    }
    do {
      iVar32 = iVar32 + (uint)*(byte *)((long)param_1 + uVar29);
      uVar29 = uVar29 + 1;
    } while (param_2 != uVar29);
  }
  return iVar32;
}

// Function: call_memset @ 0x102aa0
undefined8 call_memset(void)
{
  return 0;
}

// Function: param_strchr_strstr @ 0x102ab0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
  char *pcVar1;
  char *pcVar2;
  pcVar1 = strchr(param_1,param_2);
  pcVar2 = strstr(param_1,param_3);
  return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
         (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102af0
undefined8 call_strchr_strstr(void)
{
  return 0xf;
}

// Function: test_standard_library_functions @ 0x102b00
void test_standard_library_functions(void)
{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  FILE *__stream;
  uint uVar4;
  int local_3c;
  undefined8 local_38;
  undefined local_30;
  puts(&DAT_0010441f);
  local_38 = 0x62694c6f6c6c6548;
  local_30 = 0;
  sVar3 = strlen((char *)&local_38);
  printf(&DAT_00104127,sVar3 & 0xffffffff);
  printf(&DAT_00104142,0);
  printf(&DAT_0010415d,0xc);
  printf(&DAT_00104179,0x5a);
  uVar4 = 0xffffffff;
  printf(&DAT_00104195,0xffffffff);
  uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
  printf(&DAT_001041b1,(ulong)uVar1);
  iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_38,&local_3c);
  uVar1 = local_3c + (int)local_38;
  if (iVar2 != 2) {
    uVar1 = 0xffffffff;
  }
  printf(&DAT_001041cd,(ulong)uVar1);
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar2 = fileno(__stream);
    fclose(__stream);
    uVar4 = iVar2 >> 0x1f | 0x2a;
  }
  printf(&DAT_001041ea,(ulong)uVar4);
  uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(&DAT_00104206,(ulong)uVar1);
  printf(&DAT_00104222,0x5a);
  printf(&DAT_0010423e,0);
  printf(&DAT_00104259,0xf);
  return;
}

// Function: param_linux_syscall @ 0x102c90
ulong param_linux_syscall(undefined8 param_1)
{
  ulong uVar1;
  int *piVar2;
  uVar1 = syscall(2,param_1,0);
  if ((int)uVar1 < 0) {
    piVar2 = __errno_location();
    uVar1 = (ulong)(uint)-*piVar2;
  }
  else {
    syscall(3,uVar1 & 0xffffffff);
  }
  return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x102cd0
uint call_linux_syscall(void)
{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  uVar1 = syscall(2,"/etc/passwd",0);
  iVar3 = (int)uVar1;
  if (iVar3 < 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  else {
    syscall(3,uVar1 & 0xffffffff);
  }
  return iVar3 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x102d20
undefined4 param_win32_api(char *param_1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  stat local_90;
  iVar1 = stat(param_1,&local_90);
  uVar3 = 0xfffffffe;
  if (0 < local_90.st_size) {
    uVar3 = 0x2a;
  }
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// Function: call_win32_api @ 0x102d60
undefined4 call_win32_api(void)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  stat local_90;
  iVar1 = stat("/etc/passwd",&local_90);
  uVar3 = 0xfffffffe;
  if (0 < local_90.st_size) {
    uVar3 = 0x2a;
  }
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// Function: param_fork_exec @ 0x102da0
uint param_fork_exec(char *param_1,undefined8 param_2)
{
  __pid_t _Var1;
  undefined8 in_RAX;
  uint local_14;
  local_14 = (uint)((ulong)in_RAX >> 0x20);
  _Var1 = fork();
  if (_Var1 < 0) {
    return 0xffffffff;
  }
  if (_Var1 == 0) {
    execl(param_1,param_1,param_2,0);
    _exit(0x7f);
  }
  _Var1 = waitpid(_Var1,(int *)&local_14,0);
  if (_Var1 < 0) {
    return 0xfffffffe;
  }
  if ((local_14 & 0x7f) != 0) {
    return 0xfffffffd;
  }
  return local_14 >> 8 & 0xff;
}

// Function: call_fork_exec @ 0x102e20
uint call_fork_exec(void)
{
  __pid_t _Var1;
  uint local_c;
  _Var1 = fork();
  if (-1 < _Var1) {
    if (_Var1 == 0) {
      execl("/bin/true","/bin/true",0,0);
      _exit(0x7f);
    }
    _Var1 = waitpid(_Var1,(int *)&local_c,0);
    if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
      return -(uint)((local_c & 0xff00) != 0) | 0x2a;
    }
  }
  return 0xffffffff;
}

// Function: param_pipe_communication @ 0x102e90
undefined8 param_pipe_communication(void)
{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  undefined8 uVar4;
  int local_30;
  int local_2c;
  undefined local_28 [32];
  iVar1 = pipe(&local_30);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  _Var2 = fork();
  if (-1 < _Var2) {
    if (_Var2 != 0) {
      close(local_2c);
      sVar3 = read(local_30,local_28,0x1f);
      local_28[sVar3] = 0;
      close(local_30);
      wait((void *)0x0);
      uVar4 = 0xfffffffd;
      if (0 < sVar3) {
        uVar4 = 0x2a;
      }
      return uVar4;
    }
    close(local_30);
    write(local_2c,"HelloPipe",9);
    close(local_2c);
    _exit(0);
  }
  return 0xfffffffe;
}

// Function: param_socket_create @ 0x102f50
undefined8 param_socket_create(void)
{
  int __fd;
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  sockaddr local_20;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    return 0xffffffff;
  }
  local_24 = 1;
  iVar1 = setsockopt(__fd,1,2,&local_24,4);
  if (-1 < iVar1) {
    local_20.sa_data[6] = '\0';
    local_20.sa_data[7] = '\0';
    local_20.sa_data[8] = '\0';
    local_20.sa_data[9] = '\0';
    local_20.sa_data[10] = '\0';
    local_20.sa_data[11] = '\0';
    local_20.sa_data[12] = '\0';
    local_20.sa_data[13] = '\0';
    local_20.sa_family = 2;
    local_20.sa_data[0] = '\0';
    local_20.sa_data[1] = '\0';
    local_20.sa_data[2] = '\0';
    local_20.sa_data[3] = '\0';
    local_20.sa_data[4] = '\0';
    local_20.sa_data[5] = '\0';
    iVar1 = bind(__fd,&local_20,0x10);
    if (-1 < iVar1) {
      iVar1 = listen(__fd,5);
      close(__fd);
      uVar2 = 0x2a;
      if (iVar1 < 0) {
        uVar2 = 0xfffffffc;
      }
      return uVar2;
    }
    close(__fd);
    return 0xfffffffd;
  }
  close(__fd);
  return 0xfffffffe;
}

// Function: param_shmget_shmat @ 0x103030
ulong param_shmget_shmat(void)
{
  int iVar1;
  key_t __key;
  undefined8 *__s;
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
        __s = (undefined8 *)shmat(iVar1,(void *)0x0,0);
        if (__s == (undefined8 *)0xffffffffffffffff) {
          sVar2 = 0xfffffffd;
        }
        else {
          *(undefined8 *)((long)__s + 5) = 0x79726f6d654d64;
          *__s = 0x654d646572616853;
          sVar2 = strlen((char *)__s);
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x103100
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

// Function: param_signal_handling @ 0x103120
undefined8 param_signal_handling(void)
{
  bool bVar1;
  __sighandler_t p_Var2;
  undefined8 uVar3;
  uint uVar4;
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
    return 0xffffffff;
  }
  p_Var2 = signal(0xe,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
    return 0xfffffffe;
  }
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
    return 0xfffffffd;
  }
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
  return uVar3;
}

// Function: signal_handler @ 0x103250
void signal_handler(undefined4 param_1)
{
  signal_received = 1;
  signal_number = param_1;
  return;
}

// Function: test_system_calls @ 0x103280
void test_system_calls(void)
{
  int iVar1;
  __pid_t _Var2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  stat local_a0;
  puts(&DAT_00104443);
  uVar4 = syscall(2,"/etc/passwd",0);
  iVar1 = (int)uVar4;
  if (iVar1 < 0) {
    piVar5 = __errno_location();
    iVar1 = -*piVar5;
  }
  else {
    syscall(3,uVar4 & 0xffffffff);
  }
  printf(&DAT_001042a8,(ulong)(iVar1 >> 0x1f | 0x2a));
  iVar1 = stat("/etc/passwd",&local_a0);
  uVar6 = 0xfffffffe;
  if (0 < local_a0.st_size) {
    uVar6 = 0x2a;
  }
  if (iVar1 < 0) {
    uVar6 = 0xffffffff;
  }
  printf(&DAT_001042c4,uVar6);
  _Var2 = fork();
  uVar4 = 0xffffffff;
  if (-1 < _Var2) {
    if (_Var2 == 0) {
      execl("/bin/true","/bin/true",0,0);
      _exit(0x7f);
    }
    _Var2 = waitpid(_Var2,(int *)&local_a0,0);
    if ((_Var2 < 0) || (((uint)local_a0.st_dev & 0x7f) != 0)) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (ulong)(-(uint)(((uint)local_a0.st_dev & 0xff00) != 0) | 0x2a);
    }
  }
  printf(&DAT_001042e0,uVar4);
  uVar3 = param_pipe_communication();
  printf(&DAT_001042fc,(ulong)uVar3);
  uVar3 = param_socket_create();
  printf(&DAT_00104318,(ulong)uVar3);
  iVar1 = param_shmget_shmat();
  uVar3 = 0xffffffff;
  if (0 < iVar1) {
    uVar3 = 0x2a;
  }
  printf(&DAT_00104334,(ulong)uVar3);
  uVar3 = param_signal_handling();
  printf(&DAT_00104350,(ulong)uVar3);
  return;
}

// Function: thread_compute @ 0x1033f0
void thread_compute(int *param_1)
{
  int iVar1;
  int *piVar2;
  iVar1 = *param_1;
  piVar2 = (int *)malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}

// Function: param_pthread_create @ 0x103410
undefined4 param_pthread_create(undefined4 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 *local_18;
  pthread_t local_10;
  local_1c = param_1;
  iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  pthread_join(local_10,&local_18);
  uVar1 = *local_18;
  free(local_18);
  return uVar1;
}

// Function: call_pthread_create @ 0x103470
undefined4 call_pthread_create(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 *local_18;
  pthread_t local_10;
  local_1c = 7;
  iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  pthread_join(local_10,&local_18);
  uVar1 = *local_18;
  free(local_18);
  return uVar1;
}

// Function: thread_sum @ 0x1034d0
undefined8 thread_sum(uint *param_1)
{
  uint uVar1;
  uint uVar2;
  param_1[2] = 0;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((int)uVar1 <= (int)uVar2) {
    param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
                 (int)((ulong)(uVar2 - uVar1) * (ulong)(uVar2 + ~uVar1) >> 1);
  }
  return 0;
}

// Function: param_pthread_join @ 0x103510
int param_pthread_join(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined local_68 [12];
  undefined4 uStack_5c;
  undefined local_58 [4];
  undefined auStack_54 [12];
  int local_48;
  pthread_t local_38;
  pthread_t local_30;
  pthread_t local_28 [2];
  local_48 = 0;
  _local_68 = ZEXT816(0xa00000001);
  uStack_5c = 0xb;
  auStack_54 = SUB1612(ZEXT816(0),4);
  local_58 = (undefined  [4])0x14;
  auStack_54._4_8_ = 0x1e00000015;
  iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,local_68);
  iVar4 = -1;
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_5c);
    if (iVar1 == 0) {
      iVar1 = pthread_create(local_28,(pthread_attr_t *)0x0,thread_sum,auStack_54 + 4);
      if (iVar1 == 0) {
        iVar1 = pthread_join(local_38,(void **)0x0);
        iVar4 = -2;
        if (iVar1 == 0) {
          iVar1 = local_68._8_4_;
          iVar2 = pthread_join(local_30,(void **)0x0);
          if (iVar2 == 0) {
            iVar2 = auStack_54._0_4_;
            iVar3 = pthread_join(local_28[0],(void **)0x0);
            if (iVar3 == 0) {
              iVar4 = iVar2 + iVar1 + local_48;
            }
          }
        }
      }
    }
  }
  return iVar4;
}

// Function: thread_increment @ 0x103620
undefined8 thread_increment(int *param_1)
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

// Function: param_mutex_lock @ 0x103660
undefined8 param_mutex_lock(uint param_1,int param_2)
{
  int iVar1;
  undefined8 in_RAX;
  void *__ptr;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int local_38;
  uint local_34;
  local_34 = (uint)((ulong)in_RAX >> 0x20);
  local_38 = param_2;
  __ptr = malloc((long)(int)param_1 << 3);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    if (0 < (int)param_1) {
      uVar4 = (ulong)param_1;
      lVar5 = 0;
      local_34 = param_1;
      do {
        iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
                               thread_increment,&local_38);
        param_1 = local_34;
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        lVar5 = lVar5 + 8;
      } while (uVar4 * 8 - lVar5 != 0);
      if (0 < (int)local_34) {
        uVar3 = 0;
        do {
          pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
      }
    }
    free(__ptr);
    uVar2 = 0xfffffffd;
    if (shared_counter == param_1 * local_38) {
      uVar2 = 0x2a;
    }
  }
  return uVar2;
}

// Function: call_mutex_lock @ 0x103750
void call_mutex_lock(void)
{
  param_mutex_lock(4,1000);
  return;
}

// Function: consumer_thread @ 0x103760
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

// Function: producer_thread @ 0x1037e0
undefined8 producer_thread(void)
{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 1;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}

// Function: param_condition_variable @ 0x103820
undefined4 param_condition_variable(void)
{
  undefined4 uVar1;
  int iVar2;
  pthread_t local_20;
  undefined4 *local_18;
  pthread_t local_10;
  ready = 0;
  data = 0;
  iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
  if (iVar2 != 0) {
    pthread_cancel(local_20);
    return 0xfffffffe;
  }
  pthread_join(local_20,&local_18);
  pthread_join(local_10,(void **)0x0);
  uVar1 = *local_18;
  free(local_18);
  return uVar1;
}

// Function: thread_atomic_increment @ 0x1038d0
undefined8 thread_atomic_increment(uint *param_1)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    uVar5 = uVar1 & 3;
    uVar4 = 0;
    if (2 < uVar1 - 1) {
      uVar4 = 0;
      do {
        LOCK();
        atomic_counter = atomic_counter + 1;
        UNLOCK();
        LOCK();
        uVar2 = uVar4 + 1000;
        if (uVar4 != atomic_counter) {
          uVar2 = atomic_counter;
        }
        atomic_counter = uVar2;
        UNLOCK();
        LOCK();
        atomic_counter = atomic_counter + 1;
        UNLOCK();
        LOCK();
        iVar3 = uVar4 + 0x3e9;
        if (uVar4 + 1 != atomic_counter) {
          iVar3 = atomic_counter;
        }
        atomic_counter = iVar3;
        UNLOCK();
        LOCK();
        atomic_counter = atomic_counter + 1;
        UNLOCK();
        LOCK();
        iVar3 = uVar4 + 0x3ea;
        if (uVar4 + 2 != atomic_counter) {
          iVar3 = atomic_counter;
        }
        atomic_counter = iVar3;
        UNLOCK();
        LOCK();
        atomic_counter = atomic_counter + 1;
        UNLOCK();
        LOCK();
        uVar2 = uVar4 + 0x3eb;
        if (uVar4 + 3 != atomic_counter) {
          uVar2 = atomic_counter;
        }
        atomic_counter = uVar2;
        UNLOCK();
        uVar4 = uVar4 + 4;
      } while (uVar4 != (uVar1 & 0xfffffffc));
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      LOCK();
      atomic_counter = atomic_counter + 1;
      UNLOCK();
      LOCK();
      uVar1 = uVar4 + 1000;
      if (uVar4 != atomic_counter) {
        uVar1 = atomic_counter;
      }
      atomic_counter = uVar1;
      UNLOCK();
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}

// Function: thread_atomic_load_store @ 0x103990
undefined8 thread_atomic_load_store(void)
{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return 0;
}

// Function: param_atomic_ops @ 0x1039b0
undefined8 param_atomic_ops(uint param_1,undefined4 param_2)
{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_3c;
  pthread_t local_38;
  local_3c = param_2;
  __ptr = malloc((long)(int)param_1 << 3);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    if (0 < (int)param_1) {
      lVar4 = 0;
      do {
        iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
                               thread_atomic_increment,&local_3c);
        if (iVar1 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        lVar4 = lVar4 + 8;
      } while ((ulong)param_1 * 8 - lVar4 != 0);
    }
    iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_38,(void **)0x0);
    }
    if (0 < (int)param_1) {
      uVar3 = 0;
      do {
        pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
        uVar3 = uVar3 + 1;
      } while (param_1 != uVar3);
    }
    iVar1 = atomic_counter;
    free(__ptr);
    uVar2 = 0xfffffffd;
    if (0 < iVar1) {
      uVar2 = 0x2a;
    }
  }
  return uVar2;
}

// Function: call_atomic_ops @ 0x103ac0
void call_atomic_ops(void)
{
  param_atomic_ops(4,500);
  return;
}

// Function: thread_tls_test @ 0x103ad0
void thread_tls_test(char *param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  long *in_FS_OFFSET;
  iVar2 = *(int *)(in_FS_OFFSET + -6);
  iVar1 = iVar2 + 0x32;
  *(int *)(in_FS_OFFSET + -6) = iVar1;
  strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
  piVar3 = (int *)malloc(8);
  *piVar3 = iVar2;
  piVar3[1] = iVar1;
  return;
}

// Function: param_thread_local_storage @ 0x103b20
undefined8 param_thread_local_storage(uint param_1)
{
  int iVar1;
  pthread_t *__ptr;
  void *__ptr_00;
  char *__s;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  pthread_t *__newthread;
  ulong uVar5;
  uint uVar6;
  int *local_38;
  __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
  __ptr_00 = malloc((long)(int)param_1 << 3);
  if (__ptr == (pthread_t *)0x0) {
    return 0xffffffff;
  }
  if (__ptr_00 == (void *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)param_1) {
    uVar5 = (ulong)param_1;
    uVar4 = 0;
    do {
      __s = (char *)malloc(0x10);
      *(char **)((long)__ptr_00 + uVar4 * 8) = __s;
      snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
    if (0 < (int)param_1) {
      uVar4 = 0;
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               *(void **)((long)__ptr_00 + uVar4 * 8));
        if (iVar1 != 0) {
          uVar5 = 0xffffffffffffffff;
          do {
            free(*(void **)((long)__ptr_00 + uVar5 * 8 + 8));
            uVar5 = uVar5 + 1;
          } while (uVar4 != uVar5);
          free(__ptr_00);
          free(__ptr);
          return 0xfffffffe;
        }
        uVar4 = uVar4 + 1;
        __newthread = __newthread + 1;
      } while (uVar5 != uVar4);
      if ((int)param_1 < 1) {
        uVar3 = 0;
        uVar6 = 0;
      }
      else {
        uVar4 = 0;
        uVar6 = 0;
        uVar3 = 0;
        do {
          pthread_join(__ptr[uVar4],&local_38);
          uVar3 = uVar3 + *local_38;
          uVar6 = uVar6 + local_38[1];
          free(local_38);
          free(*(void **)((long)__ptr_00 + uVar4 * 8));
          uVar4 = uVar4 + 1;
        } while (uVar5 != uVar4);
      }
      goto LAB_00103c4c;
    }
  }
  uVar3 = 0;
  uVar6 = 0;
LAB_00103c4c:
  free(__ptr_00);
  free(__ptr);
  uVar2 = 0xfffffffd;
  if ((param_1 * 0x96 ^ uVar6 | param_1 * 100 ^ uVar3) == 0) {
    uVar2 = 0x2a;
  }
  return uVar2;
}

// Function: call_thread_local_storage @ 0x103ce0
void call_thread_local_storage(void)
{
  param_thread_local_storage(4);
  return;
}

// Function: test_thread_concurrency @ 0x103cf0
void test_thread_concurrency(void)
{
  int iVar1;
  uint uVar2;
  undefined4 local_1c;
  uint *local_18;
  pthread_t local_10;
  puts(&DAT_0010445e);
  local_1c = 7;
  iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    pthread_join(local_10,&local_18);
    uVar2 = *local_18;
    free(local_18);
  }
  printf(&DAT_00104376,(ulong)uVar2);
  uVar2 = param_pthread_join();
  printf(&DAT_00104392,(ulong)uVar2);
  uVar2 = param_mutex_lock(4,1000);
  printf(&DAT_001043af,(ulong)uVar2);
  uVar2 = param_condition_variable();
  printf(&DAT_001043cb,(ulong)uVar2);
  uVar2 = param_atomic_ops(4,500);
  printf(&DAT_001043e7,(ulong)uVar2);
  uVar2 = param_thread_local_storage(4);
  printf(&DAT_00104403,(ulong)uVar2);
  return;
}

// Function: main @ 0x103de0
undefined8 main(void)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}

// Function: _fini @ 0x103df4
void _fini(void)
{
  return;
}

