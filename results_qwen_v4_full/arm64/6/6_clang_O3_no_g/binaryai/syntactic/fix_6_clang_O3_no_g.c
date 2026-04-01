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

// Additional type definitions for compilation
typedef struct __FILE FILE;
typedef struct { unsigned short sa_family; char sa_data[14]; } sockaddr;
typedef unsigned int socklen_t;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int uint;
typedef unsigned int key_t;
typedef struct { long sa_family; char sa_data[128]; } sockaddr_in;
typedef struct stat_struct { long st_mode; long st_size; } stat_struct;
typedef struct shmid_ds { int shm_perm; long shm_segsz; } shmid_ds;
typedef unsigned long pthread_t;
typedef struct { int __lock; unsigned long __count; int __owner; } pthread_mutex_t;
typedef struct { int __lock; unsigned int __futex; unsigned long long __total_seq; unsigned long long __wakeup_seq; unsigned long long __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; } pthread_cond_t;
typedef struct { int __detachstate; int __schedpolicy; int __schedparam; int __inheritsched; int __scope; size_t __guardsize; int __stackaddr_set; void *__stackaddr; size_t __stacksize; } pthread_attr_t;
typedef void *(*__start_routine)(void *);
typedef long __useconds_t;
typedef int bool;
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))

// Global variables for compilation
typedef unsigned char byte;
static byte completed_0;
static char DAT_001036ac[] = "Testing standard library functions";
static char DAT_001033b4[] = "strlen result: %lu\n";
static char DAT_001033cf[] = "strcmp result: %d\n";
static char DAT_001033ea[] = "call_strlen result: %lu\n";
static char DAT_00103406[] = "call_memcpy result: %lu\n";
static char DAT_00103422[] = "call_memcmp result: %lu\n";
static char DAT_0010343e[] = "call_printf result: %lu\n";
static char DAT_0010345a[] = "call_scanf result: %lu\n";
static char DAT_00103477[] = "call_fopen_fclose result: %lu\n";
static char DAT_00103493[] = "call_fread_fwrite result: %lu\n";
static char DAT_001034af[] = "call_malloc_free result: %lu\n";
static char DAT_001034cb[] = "call_memset result: %lu\n";
static char DAT_001034e6[] = "call_strchr_strstr result: %lu\n";
static char DAT_001036d0[] = "Testing system calls";
static char DAT_00103535[] = "call_linux_syscall result: %lu\n";
static char DAT_00103551[] = "call_win32_api result: %lu\n";
static char DAT_0010356d[] = "call_fork_exec result: %lu\n";
static char DAT_00103589[] = "call_pipe_communication result: %lu\n";
static char DAT_001035a5[] = "call_socket_create result: %lu\n";
static char DAT_001035c1[] = "call_shmget_shmat result: %lu\n";
static char DAT_001035dd[] = "call_signal_handling result: %lu\n";
static char DAT_00103603[] = "call_pthread_create result: %lu\n";
static char DAT_0010361f[] = "call_pthread_join result: %lu\n";
static char DAT_0010363c[] = "call_mutex_lock result: %lu\n";
static char DAT_00103658[] = "call_condition_variable result: %lu\n";
static char DAT_00103674[] = "call_atomic_ops result: %lu\n";
static char DAT_00103690[] = "call_thread_local_storage result: %lu\n";
static char DAT_001036eb[] = "Testing thread concurrency";
static void *__dso_handle;
static byte __aarch64_have_lse_atomics;
static int signal_received;
static int signal_number;
static pthread_mutex_t counter_mutex;
static int shared_counter;
static pthread_mutex_t cond_mutex;
static pthread_cond_t cond;
static int ready;
static int data;
typedef union { int _0_4_; long long _0_8_; } atomic_int;
static atomic_int atomic_counter;
static unsigned long tpidr_el0;
static int tmp_ldWn;
static int tmp_stWn;
static char DAT_00103366[] = "TestName";

// Forward declarations
int call_weak_fn(int);
void signal_handler(int);
void _fini(void);
int ExclusiveMonitorPass(void *, int);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int main(int argc, char **argv);
int sscanf(const char *restrict, const char *restrict, ...);
int __aarch64_ldadd4_acq_rel(int, int *);
int __aarch64_cas4_acq_rel(int, int, int *);
void __cxa_finalize(void *);
void consumer_thread(void *);
unsigned long long producer_thread(void *);
void call_mutex_lock(void);
void call_atomic_ops(void);
void call_thread_local_storage(void);
unsigned int param_mutex_lock(unsigned long param_1, int param_2);
unsigned int param_condition_variable(void);
unsigned int param_atomic_ops(unsigned long param_1, unsigned int param_2);
unsigned int param_thread_local_storage(unsigned long param_1);

// Decompiled by BinaryAI
// SHA256: e66881a0f62a9c5c77afda9243cbfe507d71ff8636d2f0076fb654d59743b7bb

// Function: _init @ 0x1012c8
void _init(void)
{
 call_weak_fn(0);
 return;
}

// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void *param)
{
 (void)param;
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x101300
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::_exit @ 0x101310
void _exit(int __status)
{
 (void)__status;
}

// Function: <EXTERNAL>::strlen @ 0x101320
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::raise @ 0x101330
int raise(int __sig)
{
 (void)__sig;
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101340
int __libc_start_main(int (*main)(int, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end))
{
 return main(0, 0);
}

// Function: <EXTERNAL>::execl @ 0x101350
int execl(char *__path,char *__arg,...)
{
 int iVar1;
 iVar1 = execl(__path,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x101360
int listen(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x101370
int shmdt(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x101380
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101390
void __cxa_finalize(void *param)
{
 return;
}

// Function: <EXTERNAL>::pipe @ 0x1013a0
int pipe(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x1013b0
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::snprintf @ 0x1013c0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 int iVar1;
 (void)__s;
 (void)__maxlen;
 (void)__format;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::fileno @ 0x1013d0
int fileno(FILE *__stream)
{
 int iVar1;
 (void)__stream;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x1013e0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::fclose @ 0x1013f0
int fclose(FILE *__stream)
{
 int iVar1;
 (void)__stream;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x101400
FILE * fopen(char *__filename,char *__modes)
{
 FILE *pFVar1;
 (void)__filename;
 (void)__modes;
 pFVar1 = (FILE *)0x0;
 return pFVar1;
}

// Function: <EXTERNAL>::malloc @ 0x101410
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x101420
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 int iVar1;
 iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
 return iVar1;
}

// Function: <EXTERNAL>::open @ 0x101430
int open(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101440
int pthread_cond_signal(pthread_cond_t *__cond)
{
 (void)__cond;
 return 0;
}

// Function: <EXTERNAL>::memset @ 0x101450
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::shmat @ 0x101460
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 void *pvVar1;
 pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
 return pvVar1;
}

// Function: <EXTERNAL>::sleep @ 0x101470
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x101480
void rewind(FILE *__stream)
{
 (void)__stream;
}

// Function: <EXTERNAL>::close @ 0x101490
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1014a0
void __gmon_start__(void *param)
{
 return;
}

// Function: <EXTERNAL>::stat @ 0x1014b0
int stat(char *__file,stat_struct *__buf)
{
 int iVar1;
 iVar1 = stat(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1014c0
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::__getauxval @ 0x1014d0
unsigned long __getauxval(unsigned long type)
{
 unsigned long lVar1;
 lVar1 = __getauxval(type);
 return lVar1;
}

// Function: <EXTERNAL>::abort @ 0x1014e0
void abort(void)
{
}

// Function: <EXTERNAL>::puts @ 0x1014f0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x101500
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x101510
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x101520
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x101530
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 (void)__ptr;
 (void)__size;
 (void)__n;
 (void)__stream;
 sVar1 = 0;
 return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x101540
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::free @ 0x101550
void free(void *__ptr)
{
 (void)__ptr;
}

// Function: <EXTERNAL>::shmget @ 0x101560
int shmget(key_t __key,size_t __size,int __shmflg)
{
 int iVar1;
 iVar1 = shmget(__key,__size,__shmflg);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101570
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 (void)__cond;
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::strchr @ 0x101580
char * strchr(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x101590
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 size_t sVar1;
 (void)__ptr;
 (void)__size;
 (void)__n;
 (void)__s;
 sVar1 = 0;
 return sVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x1015a0
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x1015b0
__pid_t wait(void *__stat_loc)
{
 __pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::socket @ 0x1015c0
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::strcpy @ 0x1015d0
char * strcpy(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = strcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::read @ 0x1015e0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::strstr @ 0x1015f0
char * strstr(char *__haystack,char *__needle)
{
 char *pcVar1;
 pcVar1 = strstr(__haystack,__needle);
 return pcVar1;
}

// Function: <EXTERNAL>::usleep @ 0x101600
int usleep(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x101610
int __isoc99_sscanf(const char *str, const char *format, ...)
{
 (void)str;
 (void)format;
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x101620
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x101630
int printf(char *__format,...)
{
 (void)__format;
 return 0;
}

// Function: <EXTERNAL>::__errno_location @ 0x101640
int * __errno_location(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x101650
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::alarm @ 0x101660
uint alarm(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x101670
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101680
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::syscall @ 0x101690
long syscall(long __sysno,...)
{
 long lVar1;
 lVar1 = syscall(__sysno);
 return lVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x1016a0
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::waitpid @ 0x1016b0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::unlink @ 0x1016c0
int unlink(char *__name)
{
 int iVar1;
 (void)__name;
 iVar1 = 0;
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x101700
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x101740
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 int stack_var = 8;
 __libc_start_main(main, 0, 0, _init, _fini, 0, 0);
}

// Function: call_weak_fn @ 0x101774
int call_weak_fn(int param_1)
{
 __gmon_start__(0);
 return 0;
}

// Function: deregister_tm_clones @ 0x101790
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1017c0
void register_tm_clones(void *param)
{
 (void)param;
 return;
}

// Function: FUN_001017fc @ 0x1017fc
void FUN_001017fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101800
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_strcpy @ 0x101854
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x10186c
void call_strcpy(void)
{
 char local_30[9];
 char local_28;
 local_28 = 0;
 local_30[0] = 'H';
 local_30[1] = 'e';
 local_30[2] = 'l';
 local_30[3] = 'l';
 local_30[4] = 'o';
 local_30[5] = 'L';
 local_30[6] = 'i';
 local_30[7] = 'b';
 local_30[8] = 0;
 strlen(local_30);
 return;
}

// Function: param_strcmp @ 0x1018a0
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

// Function: call_strcmp @ 0x1018c4
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x1018cc
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x1018e0
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x1018e8
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x10190c
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x101914
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

// Function: call_memcmp @ 0x101938
unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x101940
int param_printf(unsigned long param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return iVar1;
}

// Function: call_printf @ 0x101954
int call_printf(void)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00103366);
 return iVar1;
}

// Function: param_scanf @ 0x10196c
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = sscanf((char *)param_1,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: call_scanf @ 0x1019ac
int call_scanf(void)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: param_fopen_fclose @ 0x1019f4
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

// Function: call_fopen_fclose @ 0x101a44
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 FILE *__stream;
 unsigned int uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x101aa4
unsigned int param_fread_fwrite(char *param_1)
{
 unsigned int uVar1;
 FILE *__s;
 size_t sVar2;
 unsigned long local_50;
 unsigned int uStack_48;
 unsigned long long local_45;
 unsigned int uStack_40;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 return 0xffffffff;
 }
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 != 0x12) {
 fclose(__s);
 return 0xfffffffe;
 }
 rewind(__s);
 sVar2 = fread(&local_50,1,0x12,__s);
 *(char *)((long)&local_50 + sVar2) = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if (sVar2 == 0x12) {
 uVar1 = 0x2a;
 if ((local_50 ^ 0x68636e65426e6942 | ((local_45 << 24) | (uStack_48 & 0xffffff)) ^ 0x6144207473655420 |
 (((unsigned long long)uStack_40 << 40) | (local_45 & 0xffffffffff)) ^ 0x61746144207473) != 0) {
 uVar1 = 0xfffffffd;
 }
 }
 return uVar1;
}

// Function: call_fread_fwrite @ 0x101bd8
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101be4
int param_malloc_free(unsigned long param_1)
{
 int *__ptr;
 int extraout_w8;
 unsigned long uVar1;
 int *piVar2;
 unsigned long long *puVar3;
 long lVar4;
 unsigned long uVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 iVar6 = extraout_w8;
 if (param_1 == 0) goto LAB_00101c94;
 if (param_1 < 8) {
 uVar1 = 0;
LAB_00101c70:
 lVar4 = param_1 - uVar1;
 iVar6 = (int)uVar1 * 10;
 piVar2 = __ptr + uVar1;
 do {
 *piVar2 = iVar6;
 lVar4 = lVar4 + -1;
 iVar6 = iVar6 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar4 != 0);
 }
 else {
 uVar1 = param_1 & 0xfffffffffffffff8;
 iVar8 = 2;
 iVar9 = 3;
 iVar6 = 0;
 iVar7 = 1;
 puVar3 = (unsigned long long *)(__ptr + 4);
 uVar5 = uVar1;
 do {
 iVar10 = iVar6 * 10;
 iVar11 = iVar7 * 10;
 iVar12 = iVar8 * 10;
 iVar13 = iVar9 * 10;
 uVar5 = uVar5 - 8;
 iVar6 = iVar6 + 8;
 iVar7 = iVar7 + 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 puVar3[-1] = CONCAT44(iVar13,iVar12);
 puVar3[-2] = CONCAT44(iVar11,iVar10);
 puVar3[1] = CONCAT44(iVar13 + 0x28,iVar12 + 0x28);
 *puVar3 = CONCAT44(iVar11 + 0x28,iVar10 + 0x28);
 puVar3 = puVar3 + 4;
 } while (uVar5 != 0);
 if (uVar1 != param_1) goto LAB_00101c70;
 }
 iVar6 = *__ptr;
LAB_00101c94:
 iVar7 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar7 + iVar6;
}

// Function: call_malloc_free @ 0x101cb4
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x101cbc
int param_memset(void *param_1,unsigned long param_2)
{
 uint uVar1;
 uint uVar2;
 unsigned long uVar3;
 byte *pbVar4;
 uint *puVar5;
 long lVar6;
 unsigned long uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar8 = 0;
 }
 else {
 if (param_2 < 8) {
 uVar3 = 0;
 iVar8 = 0;
 }
 else {
 uVar3 = param_2 & 0xfffffffffffffff8;
 puVar5 = (uint *)((long)param_1 + 4);
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 uVar7 = uVar3;
 do {
 uVar1 = puVar5[-1];
 uVar2 = *puVar5;
 puVar5 = puVar5 + 2;
 uVar7 = uVar7 - 8;
 iVar8 = iVar8 + (uVar1 & 0xff);
 iVar9 = iVar9 + (uVar1 >> 8 & 0xff);
 iVar10 = iVar10 + (uVar1 >> 0x10 & 0xff);
 iVar11 = iVar11 + (uVar1 >> 0x18);
 iVar12 = iVar12 + (uVar2 & 0xff);
 iVar13 = iVar13 + (uVar2 >> 8 & 0xff);
 iVar14 = iVar14 + (uVar2 >> 0x10 & 0xff);
 iVar15 = iVar15 + (uVar2 >> 0x18);
 } while (uVar7 != 0);
 iVar8 = iVar12 + iVar8 + iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11;
 if (uVar3 == param_2) {
 return iVar8;
 }
 }
 lVar6 = param_2 - uVar3;
 pbVar4 = (byte *)((long)param_1 + uVar3);
 do {
 lVar6 = lVar6 + -1;
 iVar8 = iVar8 + (uint)*pbVar4;
 pbVar4 = pbVar4 + 1;
 } while (lVar6 != 0);
 }
 return iVar8;
}

// Function: call_memset @ 0x101d68
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x101d70
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}

// Function: call_strchr_strstr @ 0x101dc8
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x101dd0
int test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 unsigned long uVar4;
 uint uVar5;
 char local_50[9];
 int local_14;
 puts(DAT_001036ac);
 local_50[0] = 'H';
 local_50[1] = 'e';
 local_50[2] = 'l';
 local_50[3] = 'l';
 local_50[4] = 'o';
 local_50[5] = 'L';
 local_50[6] = 'i';
 local_50[7] = 'b';
 local_50[8] = 0;
 sVar3 = strlen(local_50);
 printf(DAT_001033b4,sVar3);
 printf(DAT_001033cf,0);
 printf(DAT_001033ea,0xc);
 printf(DAT_00103406,0x5a);
 uVar5 = 0xffffffff;
 printf(DAT_00103422,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,DAT_00103366);
 printf(DAT_0010343e,(unsigned long)uVar1);
 iVar2 = sscanf("123,456","%d,%d",&local_50,&local_14);
 uVar1 = local_14 + (int)*(int *)local_50;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_0010345a,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (iVar2 < 0) {
 uVar5 = 0xffffffff;
 }
 }
 printf(DAT_00103477,(unsigned long)uVar5);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00103493,uVar4 & 0xffffffff);
 printf(DAT_001034af,0x5a);
 printf(DAT_001034cb,0);
 iVar2 = printf(DAT_001034e6,0xf);
 return iVar2;
}

// Function: param_linux_syscall @ 0x101f6c
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return uVar1 & 0xffffffff;
 }
 piVar2 = __errno_location();
 return (unsigned long)(uint)-*piVar2;
}

// Function: call_linux_syscall @ 0x101fcc
unsigned int call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned int uVar3;
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 uVar3 = 0x2a;
 if ((int)uVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x102040
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 long local_60;
 stat_struct local_stat_buf;
 iVar1 = stat(param_1,&local_stat_buf);
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x10207c
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 long local_60;
 stat_struct local_stat_buf;
 iVar1 = stat("/etc/passwd",&local_stat_buf);
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x1020c0
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint local_24;
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 if ((local_24 & 0x7f) != 0) {
 return 0xfffffffd;
 }
 return local_24 >> 8 & 0xff;
}

// Function: call_fork_exec @ 0x10216c
unsigned int call_fork_exec(void)
{
 __pid_t _Var1;
 unsigned int uVar2;
 uint local_14;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if ((-1 < _Var1) && ((local_14 & 0x7f) == 0)) {
 uVar2 = 0x2a;
 if ((local_14 & 0xff00) != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 }
 return 0xffffffff;
}

// Function: param_pipe_communication @ 0x1021e8
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 char auStack_48 [32];
 int local_28;
 int local_24;
 iVar1 = pipe(&local_28);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 return uVar4;
 }
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 _exit(0);
 }
 return 0xfffffffe;
}

// Function: param_socket_create @ 0x1022bc
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 sockaddr local_38;
 unsigned int local_24;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (-1 < iVar1) {
 local_38.sa_family = 2;
 local_38.sa_data[0] = '\0';
 local_38.sa_data[1] = '\0';
 local_38.sa_data[2] = '\0';
 local_38.sa_data[3] = '\0';
 local_38.sa_data[4] = '\0';
 local_38.sa_data[5] = '\0';
 local_38.sa_data[6] = '\0';
 local_38.sa_data[7] = '\0';
 local_38.sa_data[8] = '\0';
 local_38.sa_data[9] = '\0';
 local_38.sa_data[10] = '\0';
 local_38.sa_data[11] = '\0';
 local_38.sa_data[12] = '\0';
 local_38.sa_data[13] = '\0';
 iVar1 = bind(__fd,&local_38,0x10);
 if (-1 < iVar1) {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0xfffffffc;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
 }
 close(__fd);
 return 0xfffffffd;
 }
 close(__fd);
 return 0xfffffffe;
}

// Function: param_shmget_shmat @ 0x1023a8
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
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
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s != (unsigned long long *)0xffffffffffffffff) {
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 *__s = 0x654d646572616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return sVar2 & 0xffffffff;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x1024a8
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

// Function: param_signal_handling @ 0x1024c8
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 int iVar4;
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return 0xffffffff;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return 0xfffffffe;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar4 = 1000;
 do {
 usleep(1000);
 bVar2 = iVar4 != 0;
 bVar1 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 if (signal_number != 10) {
 return 0xfffffffc;
 }
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar4 = 2000;
 do {
 usleep(1000);
 bVar2 = iVar4 != 0;
 bVar1 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 return 0x2a;
 }
 return 0xfffffffb;
}

// Function: signal_handler @ 0x102638
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x102654
int test_system_calls(void)
{
 uint uVar1;
 int iVar2;
 __pid_t _Var3;
 unsigned long uVar4;
 int *piVar5;
 uint uVar6;
 uint local_a0 [12];
 long local_70;
 puts(&DAT_001036d0);
 uVar4 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar2 = (int)uVar4;
 if (iVar2 < 0) {
 piVar5 = __errno_location();
 iVar2 = -*piVar5;
 }
 else {
 syscall(0x39,uVar4 & 0xffffffff);
 }
 uVar6 = 0x2a;
 uVar1 = uVar6;
 if (iVar2 < 0) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_00103535,(unsigned long)uVar1);
 iVar2 = stat("/etc/passwd",(stat_struct *)local_a0);
 if (local_70 < 1) {
 uVar6 = 0xfffffffe;
 }
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00103551,(unsigned long)uVar6);
 _Var3 = fork();
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)local_a0,0);
 if ((-1 < _Var3) && ((local_a0[0] & 0x7f) == 0)) {
 uVar6 = 0x2a;
 if ((local_a0[0] & 0xff00) != 0) {
 uVar6 = 0xffffffff;
 }
 uVar4 = (unsigned long)uVar6;
 goto LAB_00102724;
 }
 }
 uVar4 = 0xffffffff;
LAB_00102724:
 iVar2 = printf(&DAT_0010356d,uVar4);
 uVar4 = param_pipe_communication(iVar2);
 iVar2 = printf(&DAT_00103589,uVar4 & 0xffffffff);
 uVar4 = param_socket_create(iVar2);
 iVar2 = printf(&DAT_001035a5,uVar4 & 0xffffffff);
 iVar2 = param_shmget_shmat(iVar2);
 uVar6 = 0x2a;
 if (iVar2 < 1) {
 uVar6 = 0xffffffff;
 }
 iVar2 = printf(&DAT_001035c1,(unsigned long)uVar6);
 uVar4 = param_signal_handling(iVar2);
 iVar2 = printf(&DAT_001035dd,uVar4 & 0xffffffff);
 return iVar2;
}

// Function: thread_compute @ 0x1027c4
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: param_pthread_create @ 0x1027f0
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = param_1;
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_8,&local_30);
 uVar1 = *local_30;
 free(local_30);
 return uVar1;
}

// Function: call_pthread_create @ 0x102864
unsigned int call_pthread_create(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = 7;
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_8,&local_30);
 uVar1 = *local_30;
 free(local_30);
 return uVar1;
}

// Function: thread_sum @ 0x1028dc
unsigned long long thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 param_1[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((unsigned long)(uVar2 + ~uVar1) * (unsigned long)(uVar2 - uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x102910
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned long long local_60;
 int local_58;
 unsigned int uStack_54;
 unsigned int uStack_50;
 int local_4c;
 unsigned long long local_48;
 int local_40;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28;
 local_58 = 0;
 local_4c = 0;
 local_40 = 0;
 local_60 = 0xa00000001;
 uStack_54 = 0xb;
 uStack_50 = 0x14;
 local_48 = 0x1e00000015;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_60);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_54);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_sum,&local_48);
 if (iVar1 != 0) {
 return -1;
 }
 iVar2 = pthread_join(local_38,(void **)0x0);
 iVar1 = local_58;
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = pthread_join(local_30,(void **)0x0);
 iVar2 = local_4c;
 if (iVar3 != 0) {
 return -2;
 }
 iVar3 = pthread_join(local_28,(void **)0x0);
 if (iVar3 != 0) {
 return -2;
 }
 return local_40 + iVar2 + iVar1;
}

// Function: thread_increment @ 0x102a80
unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x102ae8
unsigned int param_mutex_lock(unsigned long param_1,int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 long lVar5;
 int local_34;
 param_1 = param_1 & 0xffffffff;
 local_34 = param_2;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 iVar3 = (int)param_1;
 shared_counter = 0;
 if (0 < iVar3) {
 lVar5 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_34);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (param_1 * 8 - lVar5 != 0);
 ppVar4 = __ptr;
 if (0 < iVar3) {
 do {
 pthread_join(*ppVar4,(void **)0x0);
 param_1 = param_1 - 1;
 ppVar4 = ppVar4 + 1;
 } while (param_1 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_34 * iVar3) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x102bfc
void call_mutex_lock(void)
{
 param_mutex_lock(4, 100);
 return;
}

// Function: consumer_thread @ 0x102c08
void consumer_thread(void *param)
{
 (void)param;
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock(&cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == 0) {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return;
}

// Function: producer_thread @ 0x102c7c
unsigned long long producer_thread(void *param)
{
 (void)param;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x102cd8
unsigned int param_condition_variable(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
 if (iVar2 != 0) {
 pthread_cancel(local_28);
 return 0xfffffffe;
 }
 pthread_join(local_28,(void **)&local_30);
 pthread_join(local_8,(void **)0x0);
 uVar1 = *local_30;
 free(local_30);
 return uVar1;
}

// Function: thread_atomic_increment @ 0x102da4
unsigned long long thread_atomic_increment(int *param_1)
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
 } while (iVar2 != iVar1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x102e08
unsigned long long thread_atomic_load_store(void)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return 0;
}

// Function: param_atomic_ops @ 0x102e24
unsigned int param_atomic_ops(unsigned long param_1,unsigned int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 pthread_t *ppVar3;
 long lVar4;
 pthread_t local_50;
 unsigned int local_44;
 param_1 = param_1 & 0xffffffff;
 local_44 = param_2;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 atomic_counter._0_4_ = 0;
 if (0 < (int)param_1) {
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while (param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_50,(void **)0x0);
 }
 ppVar3 = __ptr;
 if (0 < (int)param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 param_1 = param_1 - 1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != 0);
 }
 iVar1 = atomic_counter._0_4_;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x102f60
void call_atomic_ops(void)
{
 param_atomic_ops(4, 100);
 return;
}

// Function: thread_tls_test @ 0x102f6c
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
 strncpy((char *)(lVar3 + 0x14),param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return;
}

// Function: param_thread_local_storage @ 0x102fbc
unsigned int param_thread_local_storage(unsigned long param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 char *__s;
 unsigned int uVar2;
 int iVar3;
 unsigned long uVar4;
 unsigned long uVar5;
 pthread_t *ppVar6;
 int iVar7;
 void **ppvVar8;
 int *local_58;
 param_1 = param_1 & 0xffffffff;
 uVar5 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
 __ptr = (pthread_t *)malloc(uVar5);
 __ptr_00 = (void **)malloc(uVar5);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void **)0x0) {
 return 0xffffffff;
 }
 iVar3 = (int)param_1;
 if (0 < iVar3) {
 uVar5 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[uVar5] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar5 & 0xffffffff);
 uVar5 = uVar5 + 1;
 } while (param_1 != uVar5);
 if (0 < iVar3) {
 uVar5 = 0;
 ppVar6 = __ptr;
 do {
 iVar1 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[uVar5]);
 uVar5 = uVar5 + 1;
 if (iVar1 != 0) {
 uVar4 = 0;
 do {
 free(__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar6 = ppVar6 + 1;
 } while (param_1 != uVar5);
 if (0 < iVar3) {
 iVar7 = 0;
 iVar1 = 0;
 ppVar6 = __ptr;
 ppvVar8 = __ptr_00;
 do {
 pthread_join(*ppVar6,&local_58);
 iVar1 = *local_58 + iVar1;
 iVar7 = local_58[1] + iVar7;
 free(local_58);
 free(*ppvVar8);
 param_1 = param_1 - 1;
 ppVar6 = ppVar6 + 1;
 ppvVar8 = ppvVar8 + 1;
 } while (param_1 != 0);
 goto LAB_001030d8;
 }
 }
 }
 iVar1 = 0;
 iVar7 = 0;
LAB_001030d8:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar7 != iVar3 * 0x96 || iVar1 != iVar3 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103158
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103160
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 uint *local_30;
 unsigned int local_24;
 pthread_t local_8;
 puts(&DAT_001036eb);
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,&local_30);
 uVar3 = *local_30;
 free(local_30);
 }
 else {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(&DAT_00103603,(unsigned long)uVar3);
 uVar2 = param_pthread_join(iVar1);
 printf(&DAT_0010361f,uVar2 & 0xffffffff);
call_mutex_lock();
iVar1 = printf(&DAT_0010363c,0x2a);
uVar2 = param_condition_variable();
printf(&DAT_00103658,uVar2 & 0xffffffff);
call_atomic_ops();
printf(&DAT_00103674,0x2a);
call_thread_local_storage();
iVar1 = printf(&DAT_00103690,0x2a);
 return iVar1;
}

// Function: main @ 0x103258
int main(int argc, char **argv)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103280
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

// Function: __aarch64_ldadd4_acq_rel @ 0x1032c0
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

// Function: _fini @ 0x1032f0
void _fini(void)
{
 return;
}

