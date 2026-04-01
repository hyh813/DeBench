/* Standard library headers for variable arguments */
#include <stdarg.h>

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

/* Standard library types */
typedef struct FILE FILE;

/* Process-related types */
typedef int __pid_t;
typedef unsigned int __useconds_t;

/* IPC types */
typedef int key_t;
typedef struct shmid_ds shmid_ds;

/* Socket types */
typedef unsigned int socklen_t;
typedef struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
    union {
        unsigned long long _0_8_;
    };
} sockaddr;

/* Thread types */
typedef unsigned long pthread_t;
typedef struct pthread_attr_t pthread_attr_t;
typedef struct pthread_mutex_t {
    long data[6];
} pthread_mutex_t;
typedef struct pthread_cond_t {
    long data[6];
} pthread_cond_t;
typedef void *(*__start_routine)(void *);

/* Signal types */
typedef void (*__sighandler_t)(int);

/* Global variable declarations */
typedef unsigned char byte;

/* Data string constants */
char DAT_00103911[4];
char DAT_00103915[4];
char DAT_00103919[4];
char DAT_0010391d[4];
char DAT_00103921[4];
char DAT_001039aa[32];
char DAT_001039cf[32];
char DAT_001039ea[32];
char DAT_00103a05[32];
char DAT_00103a21[32];
char DAT_00103a3d[32];
char DAT_00103a59[32];
char DAT_00103a75[32];
char DAT_00103a92[32];
char DAT_00103aae[32];
char DAT_00103aca[32];
char DAT_00103ae6[32];
char DAT_00103b01[32];
char DAT_00103b50[32];
char DAT_00103b6c[32];
char DAT_00103b88[32];
char DAT_00103ba4[32];
char DAT_00103bc0[32];
char DAT_00103bdc[32];
char DAT_00103bf8[32];
char DAT_00103c14[32];
char DAT_00103c3a[32];
char DAT_00103c59[32];
char DAT_00103c75[32];
char DAT_00103c92[32];
char DAT_00103cae[32];
char DAT_00103cca[32];
char DAT_00103ce6[32];

/* Atomic counter structure */
struct {
    int _0_4_;
    char _4_1_;
} atomic_counter;

/* Thread synchronization variables */
pthread_mutex_t counter_mutex = {{0}};
pthread_mutex_t cond_mutex = {{0}};
pthread_cond_t cond = {{0}};

/* Shared state variables */
int shared_counter = 0;
unsigned int data = 0;
int ready = 0;

/* Signal handling variables */
volatile int signal_received = 0;
unsigned int signal_number = 0;

/* Thread-local storage */
void *tpidr_el0;
char *thread_tls_var;

/* Module lifecycle */
char completed_0 = 0;
void *__dso_handle = 0;

/* Stack pointer for _start */
void *stack0x00000008;

// Decompiled by BinaryAI
// SHA256: 9981aed241a45268b6c40d9beb43a4a15c767b6bd3885175cfa99991c07c2d93

/* Forward declarations */
int call_weak_fn(int ctx);
int main(int argc, char **argv, char **envp);
void signal_handler(int param_1);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
int call_strcmp(void);
unsigned int call_strcpy(void);
void _fini(void);

/* ARM64 atomic intrinsic stub declarations */
bool ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* timespec structure */
struct timespec {
    long tv_sec;
    long tv_nsec;
};

/* stat structure */
struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned int __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

/* Standard library function declarations */
void __cxa_finalize(void *dso);
int printf(const char *format, ...);
int stat(char *__file, struct stat *__buf);
unsigned long __getauxval(unsigned long type);
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, 
                       int (*init)(void), void (*fini)(void), void (*rtld_fini), void *stack_end);
int sscanf(const char *str, const char *format, ...);
int vsscanf(const char *str, const char *format, va_list ap);

/* Standard library function actual signatures */
void _exit(int __status);
void abort(void);
void __gmon_start__(void);

/* Temporary variables for atomic operations */
int tmp_ldWn;
int tmp_stWn;

/* Compiler intrinsic macros */
#define ZEXT48(x) ((uint64_t)(x))
#define CONCAT22(a, b) (((uint64_t)(a) << 16) | ((uint64_t)(b) & 0xFFFF))

// Function: _init @ 0x1012c8
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x101300
void * memcpy(void *__dest,void *__src,size_t __n)
{
 return memcpy(__dest,__src,__n);
}

// Function: <EXTERNAL>::_exit @ 0x101310
void _exit(int __status)
{
 _exit(__status);
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
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101340
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, 
                       int (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 /* External function - actual implementation in libc */
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
 iVar1 = snprintf(__s,__maxlen,__format);
 return iVar1;
}

// Function: <EXTERNAL>::fileno @ 0x1013d0
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
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
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x101400
FILE * fopen(char *__filename,char *__modes)
{
 FILE *pFVar1;
 pFVar1 = fopen(__filename,__modes);
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
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
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

// Function: <EXTERNAL>::htons @ 0x101480
uint16_t htons(uint16_t __hostshort)
{
 uint16_t uVar1;
 uVar1 = htons(__hostshort);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x101490
void rewind(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::close @ 0x1014a0
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1014b0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::stat @ 0x1014c0
int stat(char *__file,struct stat *__buf)
{
 int iVar1;
 iVar1 = stat(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1014d0
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::__getauxval @ 0x1014e0
unsigned long __getauxval(unsigned long type)
{
 /* External function - actual implementation in libc */
 return 0;
}

// Function: <EXTERNAL>::abort @ 0x1014f0
void abort(void)
{
 abort();
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
 sVar1 = fread(__ptr,__size,__n,__stream);
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
 free(__ptr);
 return;
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
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
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
 sVar1 = fwrite(__ptr,__size,__n,__s);
 return sVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x1015a0
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine __start_routine,
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
int __isoc99_sscanf(const char *__str, const char *__fmt, ...)
{
 va_list ap;
 int iVar1;
 va_start(ap, __fmt);
 iVar1 = vsscanf(__str, __fmt, ap);
 va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x101620
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
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
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
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
 int iVar1;
 iVar1 = pthread_mutex_unlock(__mutex);
 return iVar1;
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
 iVar1 = unlink(__name);
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x101700
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 atomic_counter._4_1_ = extraout_var & 1;
 return;
}

// Function: _start @ 0x101740
void _start(unsigned long long param_1)
{
 (void)__libc_start_main((int (*)(int, char **, char **))main,0,(char **)&stack0x00000008,(int (*)(void))_init,(void (*)(void))_fini,(void *)0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101774
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x101790
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1017c0
void register_tm_clones(void)
{
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
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x101888
unsigned int call_strcpy(void)
{
 char auStack_30 [32];
 param_strcpy(auStack_30,"HelloLib");
 return 0x2a;
}

// Function: param_strcmp @ 0x1018b8
unsigned int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned int local_28;
 iVar1 = strcmp(param_1,param_2);
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

// Function: call_strcmp @ 0x101920
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00103911[0],&DAT_00103915[0]);
 iVar2 = param_strcmp(&DAT_00103919[0],&DAT_00103911[0]);
 iVar3 = param_strcmp(&DAT_0010391d[0],&DAT_00103921[0]);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101990
unsigned long param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1 & 0xffffffff;
}

// Function: call_strlen @ 0x1019c0
void call_strlen(void)
{
 param_strlen("BinBench2025");
 return;
}

// Function: param_memcpy @ 0x1019ec
unsigned long param_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101a28
int call_memcpy(void)
{
 unsigned long long local_48;
 unsigned long long local_40;
 int local_38;
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned int local_20;
 uStack_28 = 0x280000001e;
 local_30 = 0x140000000a;
 local_20 = 0x32;
 local_48 = 0;
 local_40 = 0;
 local_38 = 0;
 param_memcpy(&local_48,&local_30,0x14);
 return (int)local_48 + (int)local_40 + local_38;
}

// Function: param_memcmp @ 0x101a88
unsigned int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int local_30;
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_30 = 0;
 if (iVar1 < 0) {
 local_30 = 0xffffffff;
 }
 }
 else {
 local_30 = 1;
 }
 return local_30;
}

// Function: call_memcmp @ 0x101af8
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_40;
 unsigned int local_38;
 unsigned long long local_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned int local_18;
 local_20 = 0x200000001;
 local_18 = 3;
 local_30 = 0x200000001;
 local_28 = 4;
 local_40 = 0x200000001;
 local_38 = 3;
 iVar1 = param_memcmp(&local_20,&local_30,0xc);
 iVar2 = param_memcmp(&local_20,&local_40,0xc);
 return iVar1 + iVar2;
}

// Function: param_printf @ 0x101ba0
int param_printf(uint param_1,const char *param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",(unsigned long)param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x101bdc
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,"Test");
 return uVar1;
}

// Function: param_scanf @ 0x101c0c
int param_scanf(const char *param_1)
{
 int iVar1;
 int local_28;
 int local_24;
 const char *local_20;
 int local_14;
 local_20 = param_1;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_24,&local_28);
 if (iVar1 == 2) {
 local_14 = local_24 + local_28;
 }
 else {
 local_14 = -1;
 }
 return local_14;
}

// Function: call_scanf @ 0x101c78
void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x101c94
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int local_14;
 __stream = fopen(param_1,"r");
 if (__stream == (FILE *)0x0) {
 local_14 = -1;
 }
 else {
 local_14 = fileno(__stream);
 fclose(__stream);
 }
 return local_14;
}

// Function: call_fopen_fclose @ 0x101d00
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

// Function: param_fread_fwrite @ 0x101d38
unsigned int param_fread_fwrite(char *param_1)
{
 char *__ptr;
 bool bVar1;
 int iVar2;
 FILE *__s;
 size_t sVar3;
 size_t sVar4;
 char acStack_48 [32];
 char *local_28;
 char *local_20;
 unsigned int local_14;
 local_28 = "BinBench Test Data";
 local_20 = param_1;
 __s = fopen(param_1,"w+");
 __ptr = local_28;
 if (__s == (FILE *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 sVar3 = strlen(local_28);
 sVar3 = fwrite(__ptr,1,sVar3,__s);
 sVar4 = strlen(local_28);
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(acStack_48,1,sVar3,__s);
 acStack_48[sVar4] = '\0';
 fclose(__s);
 unlink(local_20);
 bVar1 = false;
 if (sVar4 == sVar3) {
 iVar2 = strcmp(acStack_48,local_28);
 bVar1 = iVar2 == 0;
 }
 local_14 = 0x2a;
 if (!bVar1) {
 local_14 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 local_14 = 0xfffffffe;
 }
 }
 return local_14;
}

// Function: call_fread_fwrite @ 0x101e84
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101ea0
int param_malloc_free(unsigned long param_1)
{
 int *__ptr;
 unsigned long local_30;
 int local_14;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
 __ptr[local_30] = (int)local_30 * 10;
 }
 local_14 = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return local_14;
}

// Function: call_malloc_free @ 0x101f68
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x101f80
int param_memset(void *param_1,unsigned long param_2)
{
 unsigned long local_38;
 int local_2c;
 memset(param_1,0,param_2);
 local_2c = 0;
 for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
 local_2c = local_2c + (uint)*(byte *)((long)param_1 + local_38);
 }
 return local_2c;
}

// Function: call_memset @ 0x102008
int call_memset(void)
{
 int local_3c;
 int local_38 [10];
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 param_memset(local_38,0x28);
 return local_38[0] + local_38[9];
}

// Function: param_strchr_strstr @ 0x102074
int param_strchr_strstr(char *param_1,byte param_2,char *param_3)
{
 char *pcVar1;
 int local_58;
 int local_50;
 pcVar1 = strchr(param_1,(uint)param_2);
 if (pcVar1 == (char *)0x0) {
 local_50 = -1;
 }
 else {
 local_50 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 local_58 = -1;
 }
 else {
 local_58 = (int)pcVar1 - (int)param_1;
 }
 return local_50 + local_58;
}

// Function: call_strchr_strstr @ 0x10212c
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x10216c
int test_standard_library_functions(void)
{
 int iVar1;
 unsigned long uVar2;
 uVar2 = call_strcpy();
 iVar1 = printf(DAT_001039aa,uVar2 & 0xffffffff);
 uVar2 = call_strcmp();
 iVar1 = printf(DAT_001039cf,uVar2 & 0xffffffff);
 call_strlen();
 iVar1 = printf(DAT_001039ea,0x2a);
 uVar2 = call_memcpy();
 iVar1 = printf(DAT_00103a05,uVar2 & 0xffffffff);
 uVar2 = call_memcmp();
 iVar1 = printf(DAT_00103a21,uVar2 & 0xffffffff);
 uVar2 = call_printf();
 iVar1 = printf(DAT_00103a3d,uVar2 & 0xffffffff);
 call_scanf();
 iVar1 = printf(DAT_00103a59,0x2a);
 uVar2 = call_fopen_fclose();
 iVar1 = printf(DAT_00103a75,uVar2 & 0xffffffff);
 call_fread_fwrite();
 iVar1 = printf(DAT_00103a92,0x2a);
 call_malloc_free();
 iVar1 = printf(DAT_00103aae,0x2a);
 uVar2 = call_memset();
 iVar1 = printf(DAT_00103aca,uVar2 & 0xffffffff);
 uVar2 = call_strchr_strstr();
 iVar1 = printf(DAT_00103ae6,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: param_linux_syscall @ 0x102278
int param_linux_syscall(const char *param_1)
{
 unsigned long uVar1;
 int *piVar2;
 int local_14;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 local_14 = (int)uVar1;
 if (local_14 < 0) {
 piVar2 = __errno_location();
 local_14 = -*piVar2;
 }
 else {
 (void)syscall(0x39,uVar1 & 0xffffffff);
 }
 return local_14;
}

// Function: call_linux_syscall @ 0x1022f4
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

// Function: param_win32_api @ 0x10232c
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 struct stat stbuf;
 iVar1 = stat(param_1,&stbuf);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 else {
 if (stbuf.st_size < 1) {
 return 0xfffffffe;
 }
 }
 return 0x2a;
}

// Function: call_win32_api @ 0x10238c
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x1023a8
int param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint local_30;
 __pid_t local_2c;
 unsigned long long local_28;
 char *local_20;
 int local_14;
 local_28 = param_2;
 local_20 = param_1;
 local_2c = fork();
 if (local_2c < 0) {
 local_14 = -1;
 }
 else {
 if (local_2c == 0) {
 execl(local_20,local_20,local_28,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(local_2c,(int *)&local_30,0);
 if (_Var1 < 0) {
 local_14 = -2;
 }
 else if ((local_30 & 0x7f) == 0) {
 local_14 = (int)(local_30 & 0xff00) >> 8;
 }
 else {
 local_14 = -3;
 }
 }
 return local_14;
}

// Function: call_fork_exec @ 0x102478
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

// Function: param_pipe_communication @ 0x1024b4
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 char auStack_3c [32];
 int local_1c;
 int local_18;
 unsigned int local_14;
 iVar1 = pipe(&local_1c);
 if (iVar1 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 local_14 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_1c);
 iVar1 = local_18;
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(local_18);
 _exit(0);
 }
 close(local_18);
 sVar3 = read(local_1c,auStack_3c,0x1f);
 auStack_3c[sVar3] = 0;
 close(local_1c);
 wait((void *)0x0);
 local_14 = 0x2a;
 if (sVar3 < 1) {
 local_14 = 0xfffffffd;
 }
 }
 }
 return local_14;
}

// Function: call_pipe_communication @ 0x1025c8
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x1025dc
unsigned int param_socket_create(void)
{
 uint16_t uVar1;
 int iVar2;
 sockaddr local_30;
 unsigned int local_1c;
 int local_18;
 unsigned int local_14;
 local_18 = socket(2,1,0);
 if (local_18 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 local_1c = 1;
 iVar2 = setsockopt(local_18,1,2,&local_1c,4);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffe;
 }
 else {
 local_30.sa_data[6] = '\0';
 local_30.sa_data[7] = '\0';
 local_30.sa_data[8] = '\0';
 local_30.sa_data[9] = '\0';
 local_30.sa_data[10] = '\0';
 local_30.sa_data[11] = '\0';
 local_30.sa_data[12] = '\0';
 local_30.sa_data[13] = '\0';
 local_30.sa_family = 2;
 local_30.sa_data[0] = '\0';
 local_30.sa_data[1] = '\0';
 local_30.sa_data[2] = '\0';
 local_30.sa_data[3] = '\0';
 local_30.sa_data[4] = '\0';
 local_30.sa_data[5] = '\0';
 uVar1 = htons(0);
 local_30._0_8_ = ZEXT48((uint)CONCAT22(uVar1,local_30.sa_family));
 iVar2 = bind(local_18,&local_30,0x10);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffd;
 }
 else {
 iVar2 = listen(local_18,5);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffc;
 }
 else {
 close(local_18);
 local_14 = 0x2a;
 }
 }
 }
 }
 return local_14;
}

// Function: call_socket_create @ 0x1026fc
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102710
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t sVar2;
 unsigned int local_14;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 local_14 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 local_14 = 0xfffffffe;
 }
 else {
 __dest = (char *)shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffffffffffff) {
 local_14 = 0xfffffffd;
 }
 else {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 local_14 = (unsigned int)sVar2;
 shmdt(__dest);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return local_14;
}

// Function: call_shmget_shmat @ 0x102844
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

// Function: param_signal_handling @ 0x102874
unsigned int param_signal_handling(void)
{
 int iVar1;
 __sighandler_t p_Var2;
 int local_18;
 unsigned int local_14;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_14 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_14 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_18 = 1000;
 while( true ) {
 iVar1 = local_18;
 if (signal_received == 0) {
 local_18 = local_18 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if (signal_received == 0) {
 local_14 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_18 = 2000;
 while( true ) {
 iVar1 = local_18;
 if (signal_received == 0) {
 local_18 = local_18 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 local_14 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 local_14 = 0x2a;
 }
 }
 else {
 local_14 = 0xfffffffc;
 }
 }
 }
 return local_14;
}

// Function: signal_handler @ 0x102a44
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x102a6c
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x102a80
int test_system_calls(void)
{
 int iVar1;
 unsigned long uVar2;
 uVar2 = call_linux_syscall();
 iVar1 = printf(DAT_00103b50,uVar2 & 0xffffffff);
 call_win32_api();
 iVar1 = printf(DAT_00103b6c,0x2a);
 uVar2 = call_fork_exec();
 iVar1 = printf(DAT_00103b88,uVar2 & 0xffffffff);
 call_pipe_communication();
 iVar1 = printf(DAT_00103ba4,0x2a);
 call_socket_create();
 iVar1 = printf(DAT_00103bc0,0x2a);
 uVar2 = call_shmget_shmat();
 iVar1 = printf(DAT_00103bdc,uVar2 & 0xffffffff);
 call_signal_handling();
 iVar1 = printf(DAT_00103bf8,0x2a);
 return iVar1;
}

// Function: thread_compute @ 0x102b28
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *((int *)param_1);
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x102b84
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int local_18;
 unsigned int local_14;
 local_24 = param_1;
 local_18 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(__start_routine)thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,(void **)&local_30);
 local_14 = *local_30;
 free(local_30);
 }
 else {
 local_14 = 0xffffffff;
 }
 return local_14;
}

// Function: call_pthread_create @ 0x102c0c
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x102c24
void * thread_sum(void *param_1)
{
 int local_14;
 int *piVar1;
 piVar1 = (int *)param_1;
 piVar1[2] = 0;
 for (local_14 = *piVar1; local_14 <= piVar1[1]; local_14 = local_14 + 1) {
 piVar1[2] = piVar1[2] + local_14;
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x102c98
int param_pthread_join(void)
{
 int iVar1;
 int local_60;
 int local_5c;
 int local_58;
 int local_54 [4];
 unsigned int local_44;
 unsigned int local_3c;
 unsigned int local_38;
 pthread_t apStack_30 [4];
 memset(local_54,0,0x24);
 local_54[0] = 1;
 local_54[1] = 10;
 local_54[3] = 0xb;
 local_44 = 0x14;
 local_3c = 0x15;
 local_38 = 0x1e;
 for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
 iVar1 = pthread_create(apStack_30 + local_58,(pthread_attr_t *)0x0,(__start_routine)thread_sum,
 (void *)(local_54 + (long)local_58 * 3));
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_5c = 0;
 local_60 = 0;
 while( true ) {
 if (2 < local_60) {
 return local_5c;
 }
 iVar1 = pthread_join(apStack_30[local_60],(void **)0x0);
 if (iVar1 != 0) break;
 local_5c = local_5c + local_54[(long)local_60 * 3 + 2];
 local_60 = local_60 + 1;
 }
 return -2;
}

// Function: call_pthread_join @ 0x102dec
int call_pthread_join(void)
{
 return param_pthread_join();
}

// Function: thread_increment @ 0x102e00
void * thread_increment(void *param_1)
{
 int iVar1;
 int local_20;
 iVar1 = *((int *)param_1);
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return (void *)0;
}

// Function: param_mutex_lock @ 0x102e8c
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 void *__ptr;
 int local_30;
 int local_2c;
 int local_1c;
 int local_18;
 unsigned int local_14;
 local_1c = param_2;
 local_18 = param_1;
 __ptr = malloc((long)param_1 << 3);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_2c = 0; local_2c < local_18; local_2c = local_2c + 1) {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + (long)local_2c * 8),(pthread_attr_t *)0x0,
 (__start_routine)thread_increment,(void *)&local_1c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + (long)local_30 * 8),(void **)0x0);
 }
 free(__ptr);
 local_14 = 0x2a;
 if (shared_counter != local_18 * local_1c) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}

// Function: call_mutex_lock @ 0x102fcc
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x102fe8
void * consumer_thread(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock(&cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return (void *)puVar2;
}

// Function: producer_thread @ 0x103070
void * producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x1030d8
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_20;
 unsigned int local_14;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,(__start_routine)consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(__start_routine)producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_28,(void **)&local_30);
 pthread_join(local_20,(void **)0x0);
 local_14 = *local_30;
 free(local_30);
 }
 else {
 pthread_cancel(local_28);
 local_14 = 0xfffffffe;
 }
 }
 else {
 local_14 = 0xffffffff;
 }
 return local_14;
}

// Function: call_condition_variable @ 0x10319c
unsigned int call_condition_variable(void)
{
 return param_condition_variable();
}

// Function: thread_atomic_increment @ 0x1031b0
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 int local_20;
 iVar1 = *((int *)param_1);
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(local_20,local_20 + 1000,&atomic_counter._0_4_);
 }
 return (void *)0;
}

// Function: thread_atomic_load_store @ 0x103298
void * thread_atomic_load_store(void *param_1)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return (void *)0;
}

// Function: param_atomic_ops @ 0x1032d8
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 int local_3c;
 pthread_t local_38;
 int local_30;
 unsigned int local_2c;
 void *local_28;
 unsigned int local_1c;
 int local_18;
 unsigned int local_14;
 local_1c = param_2;
 local_18 = param_1;
 local_28 = malloc((long)param_1 << 3);
 if (local_28 == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 local_2c = 0;
 atomic_counter._0_4_ = 0;
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_28 + (long)local_30 * 8),
 (pthread_attr_t *)0x0,(__start_routine)thread_atomic_increment,(void *)&local_1c);
 if (iVar1 != 0) {
 free(local_28);
 return 0xfffffffe;
 }
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,(__start_routine)thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 for (local_3c = 0; iVar1 = atomic_counter._0_4_, local_3c < local_18; local_3c = local_3c + 1) {
 pthread_join(*(pthread_t *)((long)local_28 + (long)local_3c * 8),(void **)0x0);
 }
 free(local_28);
 local_14 = 0x2a;
 if (iVar1 < 1) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}

// Function: call_atomic_ops @ 0x103458
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x103474
void * thread_tls_test(void *param_1)
{
 int *piVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = (long)tpidr_el0;
 piVar1 = (int *)(lVar3 + 0x10);
 iVar2 = *piVar1;
 *piVar1 = *piVar1 + 0x32;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = *piVar1;
 return (void *)piVar4;
}

// Function: param_thread_local_storage @ 0x103504
unsigned int param_thread_local_storage(int param_1)
{
 int iVar1;
 void *pvVar2;
 int *local_48;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 uint local_2c;
 void *local_28;
 void *local_20;
 int local_18;
 unsigned int local_14;
 local_18 = param_1;
 local_20 = malloc((long)param_1 << 3);
 local_28 = malloc((long)local_18 << 3);
 if ((local_20 == (void *)0x0) || (local_28 == (void *)0x0)) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_2c = 0; (int)local_2c < local_18; local_2c = local_2c + 1) {
 pvVar2 = malloc(0x10);
 *(void **)((long)local_28 + (long)(int)local_2c * 8) = pvVar2;
 snprintf(*(char **)((long)local_28 + (long)(int)local_2c * 8),0x10,"Thread-%d",(unsigned long)local_2c
 );
 }
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_20 + (long)local_30 * 8),
 (pthread_attr_t *)0x0,(__start_routine)thread_tls_test,
 *(void **)((long)local_28 + (long)local_30 * 8));
 if (iVar1 != 0) {
 for (local_34 = 0; local_34 <= local_30; local_34 = local_34 + 1) {
 free(*(void **)((long)local_28 + (long)local_34 * 8));
 }
 free(local_28);
 free(local_20);
 return 0xfffffffe;
 }
 }
 local_38 = 0;
 local_3c = 0;
 for (local_40 = 0; local_40 < local_18; local_40 = local_40 + 1) {
 pthread_join(*(pthread_t *)((long)local_20 + (long)local_40 * 8),(void **)&local_48);
 local_38 = local_38 + *local_48;
 local_3c = local_3c + local_48[1];
 free(local_48);
 free(*(void **)((long)local_28 + (long)local_40 * 8));
 }
 free(local_28);
 free(local_20);
 local_14 = 0x2a;
 if (local_38 != local_18 * 100 || local_3c != local_18 * 0x96) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}

// Function: call_thread_local_storage @ 0x1037a0
unsigned int call_thread_local_storage(void)
{
 return param_thread_local_storage(4);
}

// Function: test_thread_concurrency @ 0x1037b8
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 call_pthread_create();
 iVar1 = printf(DAT_00103c3a,0x2a);
 uVar2 = call_pthread_join();
 iVar1 = printf(DAT_00103c59,uVar2 & 0xffffffff);
 call_mutex_lock();
 iVar1 = printf(DAT_00103c75,0x2a);
 uVar2 = call_condition_variable();
 iVar1 = printf(DAT_00103c92,uVar2 & 0xffffffff);
 call_atomic_ops();
 iVar1 = printf(DAT_00103cae,0x2a);
 uVar2 = call_thread_local_storage();
 iVar1 = printf(DAT_00103cca,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x10384c
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103880
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

// Function: __aarch64_ldadd4_acq_rel @ 0x1038c0
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

// Function: _fini @ 0x1038f0
void _fini(void)
{
 return;
}

