/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef int __pid_t;
typedef int key_t;
typedef void *FILE;
typedef unsigned long pthread_t;
typedef void *pthread_attr_t;
typedef void *pthread_mutex_t;
typedef void *pthread_cond_t;
typedef struct {
 unsigned short sa_family;
 char sa_data[14];
} sockaddr;
typedef unsigned int socklen_t;
typedef void *shmid_ds;
typedef void *__sighandler_t;
typedef unsigned int __useconds_t;
typedef unsigned char byte;
typedef void *(*__start_routine)(void *);
typedef struct {
 long st_dev;
 long st_ino;
 long st_mode;
 long st_nlink;
 long st_uid;
 long st_gid;
 long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;
 long st_atime;
 long st_mtime;
 long st_ctime;
} stat_struct;

// Decompiled by BinaryAI
// SHA256: 7e64c811573cf185687d7a37711adf46dafffda990547718056fd0816b827f62

// Global variables
long ___stack_chk_guard;
long __stack_chk_guard;
int __aarch64_have_lse_atomics;
int signal_received;
int signal_number;
int shared_counter;
int atomic_counter;
int data;
int ready;
int counter_mutex;
int cond_mutex;
int cond;
long tpidr_el0;
void *__dso_handle;
char completed_0;
int tmp_ldWn;
int tmp_stWn;
char DAT_00103185[];
char DAT_00103181[];
char DAT_00103189[];
char DAT_00103191[];
char DAT_0010318d[];
char DAT_0010320d[];
char DAT_00103231[];
char DAT_0010324c[];
char DAT_00103267[];
char DAT_00103283[];
char DAT_0010329f[];
char DAT_001032bb[];
char DAT_001032d7[];
char DAT_001032f4[];
char DAT_00103310[];
char DAT_0010332c[];
char DAT_00103348[];
char DAT_00103363[];
char DAT_001033b2[];
char DAT_001033cd[];
char DAT_001033e9[];
char DAT_00103405[];
char DAT_00103421[];
char DAT_0010343d[];
char DAT_00103459[];
char DAT_00103475[];
char DAT_0010349b[];
char DAT_001034b9[];
char DAT_001034d5[];
char DAT_001034f2[];
char DAT_0010350e[];
char DAT_0010352a[];
char DAT_00103546[];

// Forward declarations
int call_weak_fn(int ctx);
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
int ExclusiveMonitorPass(void *addr, int size);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
void *thread_sum(void *param_1);
void *thread_compute(void *param_1);
void *thread_increment(void *param_1);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
void *thread_atomic_increment(void *param_1);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *param_1);
int stat(char *__file, stat_struct *__buf);
int pthread_create(pthread_t *__threadid, const pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg);

// Function: _init @ 0x101388
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001013a0 @ 0x1013a0
void FUN_001013a0(void)
{
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
 return;
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

// Helper for execl that returns void (for void expression contexts)
void execl_void(char *__path,char *__arg,...)
{
 execl(__path,__arg);
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
void __cxa_finalize(void *dso_handle)
{
 __cxa_finalize(dso_handle);
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
int __snprintf_chk(char *__s, size_t __maxlen, int __flag, char *__format, ...)
{
 int iVar1;
 iVar1 = __snprintf_chk(__s, __maxlen, __flag, __format);
 return iVar1;
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
void __printf_chk(int __flag, char *__format, ...)
{
 __printf_chk(__flag, __format);
 return;
}

// Helper for printf_chk with int and string args
void __printf_chk_int(int __flag, char *__format, int __arg1, char *__arg2)
{
 __printf_chk(__flag, __format, __arg1, __arg2);
 return;
}

// Helper for printf_chk with unsigned int arg
void __printf_chk_uint(int __flag, char *__format, unsigned int __arg)
{
 __printf_chk(__flag, __format, __arg);
 return;
}

// Helper for printf_chk with long arg
void __printf_chk_long(int __flag, char *__format, long __arg)
{
 __printf_chk(__flag, __format, __arg);
 return;
}

// Helper for printf_chk with unsigned long arg
void __printf_chk_ulong(int __flag, char *__format, unsigned long __arg)
{
 __printf_chk(__flag, __format, __arg);
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
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101560
void __stack_chk_fail(void)
{
 __stack_chk_fail();
 return;
}

// Wrapper for __stack_chk_fail that returns int (for void expression contexts)
int __stack_chk_fail_ret(void)
{
 __stack_chk_fail();
 return 0;
}

// Wrapper for __stack_chk_fail with args (ignore extra args)
void __stack_chk_fail_wrapper(void *arg1, void *arg2, void *arg3, void *arg4)
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
int stat_func(char *__file,stat_struct *__buf)
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
unsigned long __getauxval(unsigned long type)
{
 unsigned long lVar1;
 lVar1 = __getauxval(type);
 return lVar1;
}

// Function: <EXTERNAL>::abort @ 0x1015c0
void abort(void)
{
 abort();
 return;
}

// Function: <EXTERNAL>::puts @ 0x1015d0
int puts(void *__s)
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

// Function: main @ 0x1017c0
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: init_have_lse_atomics @ 0x1017e0
void init_have_lse_atomics(void)
{
 byte extraout_var;
 extraout_var = (byte)__getauxval(0);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x101840
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main();
 abort();
}

// Function: call_weak_fn @ 0x101874
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x101890
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1018c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001018fc @ 0x1018fc
void FUN_001018fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101900
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: signal_handler @ 0x101954
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x10196c
void *thread_sum(void *param_1)
{
 int *p = (int *)param_1;
 int iVar1;
 iVar1 = *p;
 p[2] = 0;
 for (; iVar1 <= p[1]; iVar1 = iVar1 + 1) {
 p[2] = p[2] + iVar1;
 }
 return (void *)0;
}

// Function: thread_compute @ 0x101998
void *thread_compute(void *param_1)
{
 int *p = (int *)param_1;
 int iVar1;
 int *piVar2;
 iVar1 = *p;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: thread_increment @ 0x1019c4
void *thread_increment(void *param_1)
{
 int *p = (int *)param_1;
 int iVar1;
 int iVar2;
 iVar1 = *p;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 }
 return (void *)0;
}

// Function: consumer_thread @ 0x101a30
void *consumer_thread(void *arg)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 while (data == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 }
 uVar1 = data;
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return (void *)puVar2;
}

// Function: producer_thread @ 0x101a98
void *producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return (void *)0;
}

// Function: thread_atomic_increment @ 0x101af0
void *thread_atomic_increment(void *param_1)
{
 int *p = (int *)param_1;
 int iVar1;
 int iVar2;
 iVar1 = *p;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 }
 return (void *)0;
}

// Function: thread_atomic_load_store @ 0x101b54
void *thread_atomic_load_store(void *arg)
{
 atomic_counter = atomic_counter + 100;
 return (void *)0;
}

// Function: thread_tls_test @ 0x101b74
void *thread_tls_test(void *param_1)
{
 char *p = (char *)param_1;
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),p,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return (void *)piVar4;
}

// Function: param_strcpy @ 0x101bc4
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x101bec
void call_strcpy(void)
{
 char auStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_strcmp @ 0x101c40
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = strcmp(param_1,param_2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Wrapper for param_strcmp with one arg (use empty string for second)
int param_strcmp_one(char *param_1)
{
 return param_strcmp(param_1, "");
}

// Function: call_strcmp @ 0x101c60
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(DAT_00103185,DAT_00103181);
 iVar2 = param_strcmp_one(DAT_00103189);
 iVar3 = param_strcmp(DAT_00103191,DAT_0010318d);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101cc0
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x101cd4
unsigned long long call_strlen(void)
{
 unsigned long long result;
 param_strlen("HelloLib");
 result = 0xc;
 return result;
}

// Function: param_memcpy @ 0x101cdc
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101d00
void call_memcpy(void)
{
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = 0;
 local_18 = 0;
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 local_10 = 0;
 param_memcpy(&local_20,&local_38,0x14);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_memcmp @ 0x101d88
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_memcmp @ 0x101da8
void call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_38;
 unsigned int local_30;
 unsigned long long local_28;
 unsigned int local_20;
 unsigned long long local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = 4;
 local_38 = 0x200000001;
 local_30 = 3;
 local_28 = 0x200000001;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = param_memcmp(&local_38,&local_28,0xc);
 iVar2 = param_memcmp(&local_38,&local_18,0xc);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_printf @ 0x101e5c
void param_printf(unsigned int param_1,char *param_2)
{
 __printf_chk_int(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x101e74
void call_printf(void)
{
 param_printf(0x2a,"Test");
 return;
}

// Function: param_scanf @ 0x101e84
void param_scanf(unsigned long long param_1)
{
 int iVar1;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 __isoc99_sscanf();
 iVar1 = 2;
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 return;
 }
 return;
}

// Function: call_scanf @ 0x101ef4
void call_scanf(void)
{
 param_scanf((unsigned long long)"123,456");
 return;
}

// Function: param_fopen_fclose @ 0x101f00
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

// Function: call_fopen_fclose @ 0x101f48
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x101f70
void param_fread_fwrite(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail_wrapper((void*)(long)uVar2,&__stack_chk_guard,(void*)0,(void*)(local_8 - ___stack_chk_guard));
}

// Function: call_fread_fwrite @ 0x102084
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x102090
int param_malloc_free(long param_1)
{
 int *__ptr;
 long lVar1;
 int iVar2;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 for (lVar1 = 0; lVar1 != param_1; lVar1 = lVar1 + 1) {
 __ptr[lVar1] = (int)lVar1 * 10;
 }
 iVar2 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x1020fc
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x102104
int param_memset(void *param_1,size_t param_2)
{
 int iVar1;
 size_t sVar2;
 memset(param_1,0,param_2);
 iVar1 = 0;
 for (sVar2 = 0; sVar2 != param_2; sVar2 = sVar2 + 1) {
 iVar1 = iVar1 + (uint)*(byte *)((long)param_1 + sVar2);
 }
 return iVar1;
}

// Function: call_memset @ 0x102150
void call_memset(void)
{
 long lVar1;
 int local_30 [10];
 long local_8;
 local_8 = ___stack_chk_guard;
 lVar1 = 0;
 do {
 local_30[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 param_memset(local_30,0x28);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_strchr_strstr @ 0x1021c0
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar1 = (int)pcVar3 - (int)param_1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar2 = (int)pcVar3 - (int)param_1;
 }
 return iVar1 + iVar2;
}

// Function: call_strchr_strstr @ 0x10221c
void call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}

// Function: test_standard_library_functions @ 0x102234
void test_standard_library_functions(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_0010320d);
 call_strcpy();
 __printf_chk(1,DAT_00103231,0);
 uVar2 = call_strcmp();
 __printf_chk(1,DAT_0010324c,uVar2);
 __printf_chk(1,DAT_00103267,0xc);
 call_memcpy();
 __printf_chk(1,DAT_00103283,0);
 call_memcmp();
 __printf_chk(1,DAT_0010329f,0);
 call_printf();
 __printf_chk(1,DAT_001032bb,0);
 call_scanf();
 __printf_chk(1,DAT_001032d7,0);
 uVar2 = call_fopen_fclose();
 __printf_chk(1,DAT_001032f4,uVar2);
 call_fread_fwrite();
 __printf_chk(1,DAT_00103310,0);
 call_malloc_free();
 __printf_chk(1,DAT_0010332c,0);
 call_memset();
 __printf_chk(1,DAT_00103348,0);
 call_strchr_strstr();
 __printf_chk(1,DAT_00103363,0);
 return;
}

// Function: param_linux_syscall @ 0x102368
int param_linux_syscall(char *param_1)
{
 int iVar1;
 long lVar2;
 int *piVar3;
 lVar2 = syscall(0x38,0xffffff9c,param_1,0);
 iVar1 = (int)lVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(0x39,lVar2);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x1023bc
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x1023e4
void param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 long local_58;
 long local_8;
 stat_struct local_stat;
 local_8 = ___stack_chk_guard;
 iVar1 = stat_func(param_1,&local_stat);
 local_58 = local_stat.st_size;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail_wrapper((void*)(long)uVar2,&__stack_chk_guard,(void*)0,(void*)(local_8 - ___stack_chk_guard));
}

// Function: call_win32_api @ 0x102450
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x10245c
unsigned int param_fork_exec(char *param_1,unsigned long long param_2)
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
 execl_void(param_1,param_1,(char *)0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = local_c >> 8 & 0xff;
 if ((local_c & 0x7f) != 0) {
 uVar2 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
  return uVar2;
 }
 __stack_chk_fail();
 return 0xffffffff;
}

// Function: call_fork_exec @ 0x102510
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0x2a;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x10253c
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned int uVar3;
 ssize_t sVar4;
 int local_30;
 int local_2c;
 char auStack_28 [32];
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
 if (local_8 - ___stack_chk_guard == 0) {
  return uVar3;
 }
 __stack_chk_fail();
 return 0xffffffff;
}

// Function: param_socket_create @ 0x102628
void param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_1c;
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
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_shmget_shmat @ 0x102720
unsigned long param_shmget_shmat(void)
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
 if (__dest != (char *)0xffffffffffffffff) {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return sVar2 & 0xffffffff;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x1027e8
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x102808
__sighandler_t param_signal_handling(void)
{
 __sighandler_t p_Var1;
 int iVar2;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = (__sighandler_t)0xfffffffe;
 }
 else {
 iVar2 = 0x3e9;
 signal_received = 0;
 raise(10);
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 if (signal_received == 0) {
 p_Var1 = (__sighandler_t)0xfffffffd;
 }
 else if (signal_number == 10) {
 iVar2 = 0x7d1;
 signal_received = 0;
 alarm(1);
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 p_Var1 = (__sighandler_t)0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 p_Var1 = (__sighandler_t)0x2a;
 }
 }
 else {
 p_Var1 = (__sighandler_t)0xfffffffc;
 }
 }
 }
 return p_Var1;
}

// Function: test_system_calls @ 0x10291c
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001033b2);
 uVar2 = call_linux_syscall();
 __printf_chk(1,DAT_001033cd,uVar2);
 call_win32_api();
 __printf_chk(1,DAT_001033e9,0);
 uVar2 = call_fork_exec();
 __printf_chk(1,DAT_00103405,uVar2);
 param_pipe_communication();
 __printf_chk(1,DAT_00103421,0);
 param_socket_create();
 __printf_chk(1,DAT_0010343d,0);
 uVar2 = call_shmget_shmat();
 __printf_chk(1,DAT_00103459,uVar2);
 uVar2 = (unsigned int)(long)param_signal_handling();
 __printf_chk(1,DAT_00103475,uVar2);
 return;
}

// Function: param_pthread_create @ 0x1029dc
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,(void *)(long)local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x102a6c
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: param_pthread_join @ 0x102a74
int param_pthread_join(void)
{
 int iVar1;
 pthread_t *ppVar2;
 pthread_t *ppVar3;
 long lVar4;
 int iVar5;
 pthread_t *__arg;
 pthread_t local_48 [4];
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 ppVar2 = local_48 + 3;
 iVar5 = 3;
 local_8 = ___stack_chk_guard;
 local_10 = 0;
 uStack_28 = 0xb00000000;
 local_48[3] = 0xa00000001;
 uStack_18 = 0x1e00000015;
 uStack_20 = 0x14;
 ppVar3 = local_48;
 __arg = ppVar2;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,__arg);
 if (iVar1 != 0) {
 iVar5 = -1;
 goto LAB_00102b30;
 }
 ppVar3 = ppVar3 + 1;
 __arg = (pthread_t *)((long)__arg + 0xc);
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 lVar4 = 0;
 iVar5 = 0;
 do {
 iVar1 = pthread_join(local_48[lVar4],(void **)0x0);
 if (iVar1 != 0) {
 iVar5 = -2;
 break;
 }
 ppVar3 = ppVar2 + 1;
 lVar4 = lVar4 + 1;
 ppVar2 = (pthread_t *)((long)ppVar2 + 0xc);
 iVar5 = iVar5 + *(int *)ppVar3;
 } while (lVar4 != 3);
LAB_00102b30:
 if (local_8 - ___stack_chk_guard != 0) {
 return -1;
 }
 return iVar5;
}

// Function: param_mutex_lock @ 0x102b80
unsigned int param_mutex_lock(unsigned long param_1,int param_2)
{
 long lVar1;
 int iVar2;
 int iVar3;
 unsigned int uVar4;
 void *__ptr;
 long lVar5;
 int local_4;
 iVar2 = (int)param_1;
 local_4 = param_2;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 lVar5 = 0;
 shared_counter = 0;
 do {
 if (iVar2 <= (int)lVar5) {
 for (lVar5 = 0; (int)lVar5 < iVar2; lVar5 = lVar5 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar5 * 8),(void **)0x0);
 }
 free(__ptr);
 if (shared_counter == iVar2 * local_4) {
 return 0x2a;
 }
 return 0xfffffffd;
 }
 lVar1 = lVar5 * 8;
 lVar5 = lVar5 + 1;
 iVar3 = pthread_create((pthread_t *)((long)__ptr + lVar1),(pthread_attr_t *)0x0,
  (void *(*)(void *))thread_increment,(void *)(long)local_4);
 } while (iVar3 == 0);
 free(__ptr);
 uVar4 = 0xfffffffe;
 }
 return uVar4;
}

// Function: call_mutex_lock @ 0x102c60
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x102c6c
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
  iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 pthread_join(local_20,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xfffffffe;
 pthread_cancel(local_18);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 return 0xffffffff;
 }
 return uVar2;
}

// Function: param_atomic_ops @ 0x102d3c
unsigned int param_atomic_ops(unsigned long param_1,unsigned int param_2)
{
 long lVar1;
 int iVar2;
 unsigned int uVar3;
 void *__ptr;
 long lVar4;
 unsigned int local_14;
 pthread_t local_10;
 long local_8;
 param_1 = param_1 & 0xffffffff;
 local_8 = ___stack_chk_guard;
 local_14 = param_2;
 __ptr = malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 lVar4 = 0;
 do {
 if ((int)param_1 <= (int)lVar4) {
  iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 for (lVar4 = 0; iVar2 = atomic_counter, (int)lVar4 < (int)param_1; lVar4 = lVar4 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar4 * 8),(void **)0x0);
 }
 free(__ptr);
 uVar3 = 0x2a;
 if ((int)atomic_counter < 1) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00102e28;
 }
 lVar1 = lVar4 * 8;
 lVar4 = lVar4 + 1;
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar1),(pthread_attr_t *)0x0,
  (void *(*)(void *))thread_atomic_increment,(void *)(long)local_14);
 } while (iVar2 == 0);
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
LAB_00102e28:
 return uVar3;
}

// Function: call_atomic_ops @ 0x102e78
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: param_thread_local_storage @ 0x102e84
unsigned int param_thread_local_storage(unsigned long param_1)
{
 long lVar1;
 long lVar2;
 unsigned int uVar3;
 int iVar4;
 void *__ptr;
 void *__ptr_00;
 void *pvVar5;
 int iVar6;
 unsigned long uVar7;
 long lVar8;
 int iVar9;
 int *local_10;
 long local_8;
 param_1 = param_1 & 0xffffffff;
 uVar7 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
 local_8 = ___stack_chk_guard;
 __ptr = malloc(uVar7);
 __ptr_00 = malloc(uVar7);
 if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 for (uVar7 = 0; iVar6 = (int)param_1, (int)uVar7 < iVar6; uVar7 = uVar7 + 1) {
 pvVar5 = malloc(0x10);
 *(void **)((long)__ptr_00 + uVar7 * 8) = pvVar5;
 __snprintf_chk(pvVar5,0x10,1,"Thread-%d",uVar7 & 0xffffffff);
 }
 lVar8 = 0;
 do {
 iVar9 = (int)lVar8;
 if (iVar6 <= iVar9) {
 iVar4 = 0;
 iVar9 = 0;
 for (lVar8 = 0; (int)lVar8 < iVar6; lVar8 = lVar8 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar8 * 8),(void **)&local_10);
 iVar9 = iVar9 + *local_10;
 iVar4 = iVar4 + local_10[1];
 free(local_10);
 free(*(void **)((long)__ptr_00 + lVar8 * 8));
 }
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0x2a;
 if (iVar6 * 100 != iVar9 || iVar6 * 0x96 != iVar4) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00102fcc;
 }
 lVar2 = lVar8 * 8;
 lVar1 = lVar8 * 8;
 lVar8 = lVar8 + 1;
 iVar4 = pthread_create((pthread_t *)((long)__ptr + lVar1),(pthread_attr_t *)0x0,
  (void *(*)(void *))thread_tls_test,*(void **)((long)__ptr_00 + lVar2));
 } while (iVar4 == 0);
 lVar8 = 0;
 do {
 lVar1 = lVar8 * 8;
 lVar8 = lVar8 + 1;
 free(*(void **)((long)__ptr_00 + lVar1));
 } while ((int)lVar8 <= iVar9);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
LAB_00102fcc:
 return uVar3;
}

// Function: call_thread_local_storage @ 0x103040
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103048
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_0010349b);
 uVar2 = call_pthread_create();
 __printf_chk(1,DAT_001034b9,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,DAT_001034d5,uVar2);
 call_mutex_lock();
 __printf_chk(1,DAT_001034f2,0);
 uVar2 = param_condition_variable();
 __printf_chk(1,DAT_0010350e,uVar2);
 call_atomic_ops();
 __printf_chk(1,DAT_0010352a,0);
 call_thread_local_storage();
 __printf_chk(1,DAT_00103546,0);
}

// Function: __aarch64_cas4_acq_rel @ 0x1030f0
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if (__aarch64_have_lse_atomics != '\0') {
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

// Function: __aarch64_ldadd4_acq_rel @ 0x103130
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (__aarch64_have_lse_atomics == '\0') {
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

// Function: _fini @ 0x103160
void _fini(void)
{
 return;
}

