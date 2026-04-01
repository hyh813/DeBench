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

/* Additional type definitions for compatibility */
typedef unsigned int uint;
typedef int pid_t;
typedef int __pid_t;
typedef int key_t;
typedef unsigned int __useconds_t;
typedef unsigned char byte;

/* Variable argument handling */
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;

/* Decompiler-generated undefined types */
typedef struct { unsigned char bytes[3]; } undefined3;
typedef struct { unsigned char bytes[5]; } undefined5;

/* Standard library includes */
#include <stdbool.h>

/* Forward declarations for opaque types */
struct _IO_FILE;
typedef struct _IO_FILE FILE;

/* Socket types */
struct sockaddr {
 unsigned short sa_family;
 char sa_data[14];
};
typedef struct sockaddr sockaddr;
typedef unsigned int socklen_t;

/* Signal types */
typedef void (*__sighandler_t)(int);
typedef __sighandler_t sighandler_t;

/* POSIX thread types */
typedef unsigned long pthread_t;
typedef struct { unsigned int __attr; } pthread_attr_t;
typedef struct { unsigned int __cond; } pthread_cond_t;
typedef struct { unsigned int __mutex; } pthread_mutex_t;
typedef void *(*__start_routine)(void *);

/* IPC structures */
struct ipc_perm {
 unsigned int __key;
 unsigned int uid;
 unsigned int gid;
 unsigned int cuid;
 unsigned int cgid;
 unsigned short mode;
 unsigned short __pad1;
 unsigned short __seq;
 unsigned short __pad2;
 unsigned long __glibc_reserved1;
 unsigned long __glibc_reserved2;
};

struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;
 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned long __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;
 struct { long tv_sec; long tv_usec; } st_atim;
 struct { long tv_sec; long tv_usec; } st_mtim;
 struct { long tv_sec; long tv_usec; } st_ctim;
 long __glibc_reserved[3];
};


struct shmid_ds {
 struct ipc_perm shm_perm;
 size_t shm_segsz;
 long shm_attime;
 long shm_dtime;
 long shm_ctime;
 pid_t shm_cpid;
 pid_t shm_lpid;
 unsigned long shm_nattch;
 unsigned long __glibc_reserved4;
 unsigned long __glibc_reserved5;
};
typedef struct shmid_ds shmid_ds;

// Decompiled by BinaryAI
// SHA256: 9a4e8ec1902d861b45f9d31c5ee6539b99bf257949b02357f08138e0302aafd1

/* Global variables for thread synchronization */
int atomic_counter;
int ready;
int data;

/* DSO and cleanup variables */
extern void *__dso_handle;
char completed_0;

/* Forward declarations */
void call_weak_fn(void);
int main(void);
unsigned long long stack0x00000008;
void signal_handler(int param_1);

/* Decompiler helper macros */
#define CONCAT53(a, b) (((unsigned long long)(a) << 24) | (unsigned char)(b))
#define CONCAT35(a, b) (((unsigned long long)(a) << 40) | (unsigned long long)(b))

/* Data symbols */
extern const char DAT_001033a6[];
extern const char *DAT_001036ec;
extern const char *DAT_001033f4;
extern const char *DAT_0010340f;
extern const char *DAT_0010342a;
extern const char *DAT_00103446;
extern const char *DAT_00103462;
extern const char *DAT_0010347e;
extern const char *DAT_0010349a;
extern const char *DAT_001034b7;
extern const char *DAT_001034d3;
extern const char *DAT_001034ef;
extern const char *DAT_0010350b;
extern const char *DAT_00103526;
extern const char *DAT_00103575;
extern const char *DAT_00103591;
extern const char *DAT_001035ad;
extern const char *DAT_001035c9;
extern const char *DAT_001035e5;
extern const char *DAT_00103601;
extern const char *DAT_0010361d;
extern const char *DAT_00103643;
extern const char *DAT_0010365f;
extern const char *DAT_0010367c;
extern const char *DAT_00103698;
extern const char *DAT_001036b4;
extern const char *DAT_001036d0;
extern const char DAT_00103710[];
extern const char *DAT_0010372b;

/* Signal handling globals */
int signal_received;
int signal_number;

/* Thread synchronization globals */
void *cond_mutex;
void *cond;
int shared_counter;
void *counter_mutex;

/* ARM64 atomic operations forward declarations */
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);

/* ARM64 system register */
/* ARM64 system register - accessed via inline assembly instead */

/* ARM64 exclusive monitor functions */
bool ExclusiveMonitorPass(int *param_1, int param_2);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// Function: _init @ 0x1012c8
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x101300
void * memcpy(void *__dest,void *__src,size_t __n)
{
 extern void *real_memcpy(void *__dest,void *__src,size_t __n);
 void *pvVar1;
 pvVar1 = real_memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::_exit @ 0x101310
void _exit(int __status)
{
 extern void real_exit(int __status);
 real_exit(__status);
}

// Function: <EXTERNAL>::strlen @ 0x101320
size_t strlen(char *__s)
{
 extern size_t real_strlen(char *__s);
 size_t sVar1;
 sVar1 = real_strlen(__s);
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
int __libc_start_main(void)
{
 return 0;
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
void __cxa_finalize(void)
{
 __cxa_finalize();
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

// Function: <EXTERNAL>::rewind @ 0x101480
void rewind(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::close @ 0x101490
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1014a0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::stat @ 0x1014b0
int stat(char *__file,struct stat *__buf)
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
unsigned long __getauxval(unsigned long __type)
{
 extern unsigned long __getauxval_builtin(unsigned long) __attribute__((__builtin__));
 unsigned long ret;
 ret = __getauxval_builtin(__type);
 return ret;
}

// Function: <EXTERNAL>::abort @ 0x1014e0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x1014f0
int puts(const char *__s)
{
 extern int real_puts(const char *__s);
 int iVar1;
 iVar1 = real_puts(__s);
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

// Function: <EXTERNAL>::vsscanf @ 0x101620
int vsscanf(const char *__str, const char *__format, va_list __ap)
{
 int iVar1;
 iVar1 = __builtin_vsscanf(__str, __format, __ap);
 return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x101610
int __isoc99_sscanf(const char *__str, const char *__format, ...)
{
 int iVar1;
 __builtin_va_list ap;
 __builtin_va_start(ap, __format);
 iVar1 = vsscanf(__str, __format, ap);
 __builtin_va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x101640
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x101650
int printf(const char *__format,...)
{
 __builtin_va_list ap;
 int iVar1;
 __builtin_va_start(ap, __format);
 iVar1 = __builtin_vprintf(__format, ap);
 __builtin_va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x101640
int * __errno_location(void)
{
 extern int *__errno_location_builtin(void) __attribute__((__builtin__));
 int *piVar1;
 piVar1 = __errno_location_builtin();
 return piVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x101650
int pthread_join(pthread_t __th,void **__thread_return)
{
 extern int real_pthread_join(pthread_t __th,void **__thread_return);
 int iVar1;
 iVar1 = real_pthread_join(__th,__thread_return);
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
 return;
}

// Function: _start @ 0x101740
void _start(unsigned long long param_1)
{
 main();
 abort();
}

// Function: call_weak_fn @ 0x101774
void call_weak_fn(void)
{
 __gmon_start__();
 return;
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
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101800
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
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
 struct { unsigned char _0_1_; unsigned char _1_1_; unsigned char _2_1_; unsigned char _3_1_; unsigned char _4_1_; unsigned char _5_1_; unsigned char _6_1_; unsigned char _7_1_; unsigned char _8_1_; } local_30;
 char local_28;
 local_28 = 0;
 local_30._0_1_ = 'H';
 local_30._1_1_ = 'e';
 local_30._2_1_ = 'l';
 local_30._3_1_ = 'l';
 local_30._4_1_ = 'o';
 local_30._5_1_ = 'L';
 local_30._6_1_ = 'i';
 local_30._7_1_ = 'b';
 strlen((char *)&local_30);
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

// Function: call_printf @ 0x101964
int call_printf(void)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001033a6);
 return iVar1;
}

// Function: param_scanf @ 0x10198c
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = __isoc99_sscanf((const char *)param_1,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: call_scanf @ 0x1019cc
int call_scanf(void)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: param_fopen_fclose @ 0x101a14
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

// Function: call_fopen_fclose @ 0x101a5c
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 FILE *__stream;
 unsigned int uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x101ab4
unsigned int param_fread_fwrite(char *param_1)
{
 unsigned int uVar1;
 FILE *__s;
 size_t sVar2;
 unsigned long local_60;
 undefined3 uStack_58;
 undefined5 local_55;
 unsigned int uStack_50;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(&local_60,1,0x12,__s);
 *(char *)((long)&local_60 + sVar2) = 0;
		fclose(__s);
		unlink(param_1);
		uVar1 = 0xfffffffd;
		if (sVar2 == 0x12) {
			uVar1 = 0x2a;
			if ((*(unsigned long long *)&local_60 ^ 0x68636e65426e6942) != 0) {
				uVar1 = 0xfffffffd;
			}
		}
 }
 else {
 fclose(__s);
 uVar1 = 0xfffffffe;
 }
 }
 return uVar1;
}

// Function: call_fread_fwrite @ 0x101bd4
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101bf0
int param_malloc_free(long param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 long lVar3;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 lVar3 = param_1;
 do {
 *piVar2 = iVar1;
 lVar3 = lVar3 + -1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar3 != 0);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x101c58
int call_malloc_free(void)
{
 int *__ptr;
 int iVar1;
 long lVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 lVar2 = 0;
 do {
 *(int *)((long)__ptr + lVar2) = iVar1;
 lVar2 = lVar2 + 4;
 iVar1 = iVar1 + 10;
 } while (lVar2 != 0x28);
 iVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: param_memset @ 0x101cb4
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 memset(param_1,0,param_2);
 iVar1 = 0;
 if (param_2 != 0) {
 do {
 param_2 = param_2 - 1;
 iVar1 = iVar1 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: call_memset @ 0x101cf8
unsigned int call_memset(void)
{
 long lVar1;
 unsigned int local_30 [12];
 lVar1 = 0;
 do {
 *(unsigned int *)((long)local_30 + lVar1) = 0xff;
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x28);
 return 0;
}

// Function: param_strchr_strstr @ 0x101d34
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

// Function: call_strchr_strstr @ 0x101d8c
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x101d94
int test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 unsigned long uVar4;
 int *__ptr;
 long lVar5;
 uint uVar6;
 struct { unsigned char _0_1_; unsigned char _1_1_; unsigned char _2_1_; unsigned char _3_1_; unsigned char _4_1_; unsigned char _5_1_; unsigned char _6_1_; unsigned char _7_1_; unsigned char _8_1_; } local_60;
 unsigned long uStack_58;
 unsigned long long local_40;
 int local_14;
	puts(DAT_001036ec);
	uStack_58 = 0;
 local_60._0_1_ = 'H';
 local_60._1_1_ = 'e';
 local_60._2_1_ = 'l';
 local_60._3_1_ = 'l';
 local_60._4_1_ = 'o';
 local_60._5_1_ = 'L';
 local_60._6_1_ = 'i';
 local_60._7_1_ = 'b';
 sVar3 = strlen((char *)&local_60);
 printf((char *)DAT_001033f4,sVar3);
 printf((char *)DAT_0010340f,0);
 printf((char *)DAT_0010342a,0xc);
 printf((char *)DAT_00103446,0x5a);
 uVar6 = 0xffffffff;
 printf((char *)DAT_00103462,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,DAT_001033a6);
 printf((char *)DAT_0010347e,(unsigned long)uVar1);
		iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_14,&iVar2);
 uVar1 = local_14 + *(int *)&local_60;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf((char *)DAT_0010349a,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar6 = 0x2a;
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 }
 printf((char *)DAT_001034b7,(unsigned long)uVar6);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf((char *)DAT_001034d3,uVar4 & 0xffffffff);
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 iVar2 = 0;
 lVar5 = 0;
 do {
 *(int *)((long)__ptr + lVar5) = iVar2;
 lVar5 = lVar5 + 4;
 iVar2 = iVar2 + 10;
 } while (lVar5 != 0x28);
 uVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 printf((char *)DAT_001034ef,(unsigned long)uVar1);
 lVar5 = 0;
 do {
 *(unsigned int *)((long)&local_60 + lVar5) = 0xff;
 lVar5 = lVar5 + 4;
 } while (lVar5 != 0x28);
 local_40 = 0;
 uStack_58 = 0;
 memset(&local_60, 0, sizeof(local_60));
 printf((char *)DAT_0010350b,0);
 iVar2 = printf((char *)DAT_00103526,0xf);
 return iVar2;
}

// Function: param_linux_syscall @ 0x101fa0
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (unsigned long)(uint)-*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x101ff4
unsigned int call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned int uVar3;
 int iVar4;
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar4 = (int)uVar1;
 if (iVar4 < 0) {
 piVar2 = __errno_location();
 iVar4 = -*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 uVar3 = 0x2a;
 if (iVar4 < 0) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x102054
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_60;
 iVar1 = stat(param_1,(struct stat *)&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x102090
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_60;
 iVar1 = stat("/etc/passwd",(struct stat *)&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x1020d4
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_24;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x10215c
unsigned int call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 unsigned int uVar3;
 uint local_14;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_14 & 0x7f) == 0) {
 uVar2 = local_14 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 uVar3 = 0x2a;
 if (uVar2 != 0) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_pipe_communication @ 0x1021e4
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
 uVar4 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 uVar4 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 _exit(0);
 }
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 return uVar4;
}

// Function: call_pipe_communication @ 0x10229c
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x1022b0
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 sockaddr local_38;
 unsigned int local_24;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
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
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0xfffffffc;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 }
 }
 }
 return uVar2;
}

// Function: call_socket_create @ 0x102374
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102388
unsigned int param_shmget_shmat(void)
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
 sVar2 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 *__s = 0x654d646572616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 goto LAB_00102434;
 }
 }
 sVar2 = 0xffffffff;
LAB_00102434:
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x102458
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

// Function: param_signal_handling @ 0x102478
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 unsigned long long uVar4;
 int iVar5;
 p_Var3 = signal(10,(__sighandler_t)signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xffffffff;
 }
 else {
 p_Var3 = signal(0xe,(__sighandler_t)signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar5 = 1000;
 do {
 usleep(1000);
 bVar2 = iVar5 != 0;
 bVar1 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if (signal_received == 0) {
 uVar4 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar5 = 2000;
 do {
 usleep(1000);
 bVar2 = iVar5 != 0;
 bVar1 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar4 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar4 = 0x2a;
 }
 }
 else {
 uVar4 = 0xfffffffc;
 }
 }
 }
 return uVar4;
}

// Function: signal_handler @ 0x1025ac
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x1025c4
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x1025d8
	int test_system_calls(void)
{
 uint uVar1;
 int iVar2;
 __pid_t _Var3;
 unsigned long uVar4;
 int *piVar5;
 uint uVar6;
 uint uVar7;
	struct stat local_70;
	int local_a0 [12];
	puts(DAT_00103710);
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
 printf((char *)DAT_00103575,(unsigned long)uVar1);
	iVar2 = stat("/etc/passwd",&local_70);
	if (iVar2 < 0 || local_70.st_size < 1) {
	uVar6 = 0xfffffffe;
	}
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 printf((char *)DAT_00103591,(unsigned long)uVar6);
 _Var3 = fork();
 if (_Var3 < 0) {
 uVar6 = 0xffffffff;
 }
 else {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
	_Var3 = waitpid(_Var3,(int *)local_a0,0);
	if (_Var3 < 0) {
	uVar6 = 0xfffffffe;
	}
	else if ((*local_a0 & 0x7f) == 0) {
	uVar6 = *local_a0 >> 8 & 0xff;
	}
	else {
	uVar6 = 0xfffffffd;
	}
 }
 uVar7 = 0x2a;
 uVar1 = uVar7;
 if (uVar6 != 0) {
 uVar1 = 0xffffffff;
 }
 iVar2 = printf((char *)DAT_001035ad,(unsigned long)uVar1);
 uVar4 = param_pipe_communication();
 iVar2 = printf((char *)DAT_001035c9,uVar4 & 0xffffffff);
 uVar4 = param_socket_create();
 iVar2 = printf((char *)DAT_001035e5,uVar4 & 0xffffffff);
 iVar2 = param_shmget_shmat();
 uVar7 = 0x2a;
 if (iVar2 < 1) {
 uVar7 = 0xffffffff;
 }
 iVar2 = printf((char *)DAT_00103601,(unsigned long)uVar7);
 uVar4 = param_signal_handling();
 iVar2 = printf((char *)DAT_0010361d,uVar4 & 0xffffffff);
 return iVar2;
}

// Function: thread_compute @ 0x102758
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x102784
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = param_1;
	iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_24);
	if (iVar1 == 0) {
	pthread_join(local_8,(void **)&local_30);
	uVar2 = *local_30;
	free(local_30);
 }
 else {
	uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x1027e8
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_24);
	if (iVar1 == 0) {
	pthread_join(local_8,(void **)&local_30);
	uVar2 = *local_30;
	free(local_30);
 }
 else {
	uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: thread_sum @ 0x102850
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint *param_1_cast = (uint *)param_1;
 uVar1 = *param_1_cast;
 uVar2 = param_1_cast[1];
 param_1_cast[2] = 0;
 uVar3 = uVar2 - uVar1;
 if ((int)uVar1 <= (int)uVar2) {
 param_1_cast[2] = param_1_cast[2] + uVar1 + uVar3 + uVar3 * uVar1 +
 (int)((unsigned long)(uVar2 + ~uVar1) * (unsigned long)uVar3 >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x102890
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned long long *__arg;
 long lVar3;
 int *piVar4;
 unsigned long long local_70;
 unsigned long long uStack_68;
 unsigned long long uStack_60;
 unsigned long long local_58;
 unsigned int local_50;
 pthread_t local_48 [3];
 __arg = (unsigned long long *)&local_70;
 lVar3 = 0;
 local_70 = 0xa00000001;
 local_50 = 0;
 uStack_68 = 0xb00000000;
 uStack_60 = 0x14;
 local_58 = 0x1e00000015;
	do {
	iVar1 = pthread_create((pthread_t *)((char *)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
	if (iVar1 != 0) {
	return -1;
	}
	__arg = (unsigned long long *)((long)__arg + 0xc);
 lVar3 = lVar3 + 8;
 } while (lVar3 != 0x18);
 lVar3 = 0;
 iVar1 = 0;
 piVar4 = (int *)((unsigned long)&local_70 | 8);
 do {
 iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 lVar3 = lVar3 + 8;
 iVar1 = *piVar4 + iVar1;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
 return iVar1;
}

// Function: call_pthread_join @ 0x102970
int call_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned long long *__arg;
 long lVar3;
 int *piVar4;
 unsigned long long local_70;
 unsigned long long uStack_68;
 unsigned long long uStack_60;
 unsigned long long local_58;
 unsigned int local_50;
 pthread_t local_48 [3];
 __arg = (unsigned long long *)&local_70;
 lVar3 = 0;
 local_70 = 0xa00000001;
 local_50 = 0;
 uStack_68 = 0xb00000000;
 uStack_60 = 0x14;
 local_58 = 0x1e00000015;
	do {
 iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
 (void *)__arg);
 if (iVar1 != 0) {
 return -1;
 }
 lVar3 = lVar3 + 8;
 __arg = (unsigned long long *)((long)__arg + 0xc);
 } while (lVar3 != 0x18);
 lVar3 = 0;
 iVar1 = 0;
 piVar4 = (int *)((unsigned long)&local_70 | 8);
 do {
 iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 lVar3 = lVar3 + 8;
 iVar1 = *piVar4 + iVar1;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
 return iVar1;
}

// Function: thread_increment @ 0x102a50
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
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

// Function: param_mutex_lock @ 0x102ab8
unsigned int param_mutex_lock(unsigned long param_1,int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 int iVar3;
 long lVar4;
 pthread_t *ppVar5;
 int local_44;
 param_1 = param_1 & 0xffffffff;
 local_44 = param_2;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar3 = (int)param_1;
 shared_counter = 0;
 if (0 < iVar3) {
 lVar4 = 0;
	do {
	iVar1 = pthread_create((pthread_t *)((char *)__ptr + lVar4),(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_increment,&local_44);
	if (iVar1 != 0) {
	free(__ptr);
	return 0xfffffffe;
	}
	lVar4 = lVar4 + 8;
 } while (param_1 * 8 - lVar4 != 0);
 }
 ppVar5 = __ptr;
 if (0 < iVar3) {
 do {
 pthread_join(*ppVar5,(void **)0x0);
 param_1 = param_1 - 1;
 ppVar5 = ppVar5 + 1;
 } while (param_1 != 0);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_44 * iVar3) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x102ba8
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x102bc4
void *consumer_thread(void *param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == 0) {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}

// Function: producer_thread @ 0x102c50
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x102cac
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 ready = 0;
 data = 0;
	iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
	if (iVar1 == 0) {
	iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
	if (iVar1 == 0) {
	pthread_join(local_28,(void **)&local_30);
	pthread_join(local_8,(void **)0x0);
	uVar2 = *local_30;
	free(local_30);
 }
 else {
	pthread_cancel(local_28);
	uVar2 = 0xfffffffe;
 }
 }
 else {
	uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x102d54
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x102d68
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
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

// Function: thread_atomic_load_store @ 0x102dcc
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter = atomic_counter + 100;
 return 0;
}

// Function: param_atomic_ops @ 0x102de8
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
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 if (0 < (int)param_1) {
 lVar4 = 0;
	do {
	iVar1 = pthread_create((pthread_t *)((char *)__ptr + lVar4),(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_atomic_increment,&local_44);
	if (iVar1 != 0) {
	free(__ptr);
	return 0xfffffffe;
	}
	lVar4 = lVar4 + 8;
 } while (param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_load_store,(void *)0x0);
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
	iVar1 = atomic_counter;
	free(__ptr);
	uVar2 = 0x2a;
	if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x102efc
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x102f18
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 __asm__ volatile("mrs %0, tpidr_el0" : "=r" (lVar3));
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}

// Function: param_thread_local_storage @ 0x102f68
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
 uVar2 = 0xffffffff;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void **)0x0)) {
 iVar3 = (int)param_1;
 if (0 < iVar3) {
 uVar5 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[uVar5] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar5 & 0xffffffff);
 uVar5 = uVar5 + 1;
 } while (param_1 != uVar5);
 }
 if (0 < iVar3) {
 uVar5 = 0;
 ppVar6 = __ptr;
 do {
 iVar1 = pthread_create(ppVar6,(pthread_attr_t *)0x0,(void *(*)(void *))thread_tls_test,__ptr_00[uVar5]);
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
 }
 if (iVar3 < 1) {
 iVar1 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar1 = 0;
 ppVar6 = __ptr;
 ppvVar8 = __ptr_00;
	do {
	pthread_join(*ppVar6,(void **)&local_58);
	iVar1 = *local_58 + iVar1;
 iVar7 = local_58[1] + iVar7;
 free(local_58);
 free(*ppvVar8);
 param_1 = param_1 - 1;
 ppVar6 = ppVar6 + 1;
 ppvVar8 = ppvVar8 + 1;
 } while (param_1 != 0);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar7 != iVar3 * 0x96 || iVar1 != iVar3 * 100) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x10310c
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103124
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 pthread_t *__arg;
 long lVar4;
 int *piVar5;
 unsigned int local_74;
 pthread_t local_70;
 unsigned long long uStack_68;
 unsigned long long uStack_60;
 unsigned long long local_58;
	unsigned int local_50;
	uint *local_48 [3];
	void *local_thread_ret;
	unsigned long long local_78[6];
	unsigned long long local_88;
	puts(DAT_0010372b);
	local_74 = 7;
	iVar1 = pthread_create(&local_70,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_74);
	if (iVar1 == 0) {
	pthread_join(local_70,(void **)&local_thread_ret);
	uVar3 = *(int *)local_thread_ret;
	free(local_thread_ret);
	}
	else {
	uVar3 = 0xffffffff;
	}
	printf((char *)DAT_00103643,(unsigned long)uVar3);
	lVar4 = 0;
	local_78[0] = 0xa00000001;
	local_50 = 0;
	uStack_68 = 0xb00000000;
	uStack_60 = 0x14;
	local_58 = 0x1e00000015;
	pthread_t local_thread_array[3];
	uint *local_thread_args[3];
	local_thread_args[0] = (uint *)((unsigned long long *)local_78);
	local_thread_args[1] = (uint *)&uStack_68;
	local_thread_args[2] = (uint *)&local_58;
	do {
	iVar1 = pthread_create(&local_thread_array[lVar4],(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,
	local_thread_args[lVar4]);
	if (iVar1 != 0) {
	uVar3 = 0xffffffff;
	goto LAB_0010324c;
	}
	lVar4 = lVar4 + 1;
	} while (lVar4 != 3);
	lVar4 = 0;
	uVar3 = 0;
	piVar5 = (int *)&local_78;
	do {
	iVar1 = pthread_join(local_thread_array[lVar4],(void **)0x0);
	if (iVar1 != 0) {
	uVar3 = 0xfffffffe;
	break;
	}
	lVar4 = lVar4 + 1;
	uVar3 = piVar5[2] + uVar3;
	piVar5 = piVar5 + 3;
	} while (lVar4 != 3);
LAB_0010324c:
 printf((char *)DAT_0010365f,(unsigned long)uVar3);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf((char *)DAT_0010367c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable();
 printf((char *)DAT_00103698,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf((char *)DAT_001036b4,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf((char *)DAT_001036d0,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1032d4
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103300
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 do {
 iVar3 = *(volatile int *)param_3;
 if (*(volatile int *)param_3 != param_1) {
 return iVar3;
 }
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass((int *)param_3,0x10);
 if (bVar2) {
 *(volatile int *)param_3 = param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x103340
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 int tmp_ldWn;
 int tmp_stWn;
 char cVar2;
 bool bVar3;
 do {
 iVar1 = *(volatile int *)param_2;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass((int *)param_2,0x10);
 if (bVar3) {
 *(volatile int *)param_2 = iVar1 + param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
}

// ARM64 exclusive monitor implementations
bool ExclusiveMonitorPass(int *param_1, int param_2)
{
    int expected = *param_1;
    bool result = __builtin_expect(__atomic_compare_exchange_n(param_1, &expected, expected, 0, __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE), 1);
    return result;
}

int ExclusiveMonitorsStatus(void)
{
    return 0;
}

void LOAcquire(void)
{
    __atomic_thread_fence(__ATOMIC_ACQUIRE);
}

void LORelease(void)
{
    __atomic_thread_fence(__ATOMIC_RELEASE);
}

// Function: _fini @ 0x103370
void _fini(void)
{
 return;
}

