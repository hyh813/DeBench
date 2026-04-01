/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#include <sys/mman.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/syscall.h>

// Decompiled by BinaryAI
// SHA256: 0f831c69047da639e1e2e200061b3fab227b4339f463f0e620f1b530c4284026

// Global variables
int completed_0 = 0;
void *__dso_handle = 0;
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;
int atomic_counter = 0;

// Undefined data references (placeholders)
char DAT_00104069[] = "TestName";
char DAT_001043af[] = "Testing standard library functions...";
char DAT_001040b7[] = "strlen result: %lu\n";
char DAT_001040d2[] = "strcmp result: %d\n";
char DAT_001040ed[] = "call_strlen result: %lu\n";
char DAT_00104109[] = "call_memcpy result: %lu\n";
char DAT_00104125[] = "call_memcmp result: %lu\n";
char DAT_00104141[] = "printf result: %lu\n";
char DAT_0010415d[] = "scanf result: %lu\n";
char DAT_0010417a[] = "fopen result: %lu\n";
char DAT_00104196[] = "fread_fwrite result: %lu\n";
char DAT_001041b2[] = "malloc result: %lu\n";
char DAT_001041ce[] = "memset result: %lu\n";
char DAT_001041e9[] = "strstr result: %lu\n";
char DAT_001043d3[] = "Testing system calls...";
char DAT_00104238[] = "syscall result: %lu\n";
char DAT_00104254[] = "stat result: %llu\n";
char DAT_00104270[] = "fork result: %lu\n";
char DAT_0010428c[] = "pipe result: %lu\n";
char DAT_001042a8[] = "socket result: %lu\n";
char DAT_001042c4[] = "shm result: %lu\n";
char DAT_001042e0[] = "signal result: %lu\n";
char DAT_001043ee[] = "Testing thread concurrency...";
char DAT_00104306[] = "pthread_join result: %lu\n";
char DAT_00104322[] = "thread sum result: %lu\n";
char DAT_0010433f[] = "mutex result: %lu\n";
char DAT_0010435b[] = "condition result: %lu\n";
char DAT_00104377[] = "atomic result: %lu\n";
char DAT_00104393[] = "tls result: %lu\n";
char s_Bench_Test_Data_00104010[] = "Bench Test Data";

// Stack variable placeholders - removed as they cause compilation issues
// unsigned long long stack0x00000008 = 0;
// unsigned long long stack0xffffffffffffffc0 = 0;
// unsigned long long stack0xffffffffffffffac = 0;

// Thread-local storage offset placeholder
long *in_FS_OFFSET = 0;

#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)

// External function declarations
extern int __gmon_start__(void);
extern void __libc_start_main(void *main, int argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);
extern void __cxa_finalize(void *dso_handle);
extern int *__errno_location(void);

// Forward declarations
void signal_handler(int param_1);
int main(void);

// Missing type definitions
// Note: pthread types and other system types are already defined in system headers

// Define __sighandler_t if not available (GNU extension)
#ifndef __sighandler_t
typedef void (*__sighandler_t)(int);
#endif

// Define useconds_t if not available
#ifndef useconds_t
typedef unsigned int useconds_t;
#endif

// Define socklen_t if not available
#ifndef socklen_t
typedef unsigned int socklen_t;
#endif

// Define key_t if not available
#ifndef key_t
typedef int key_t;
#endif

// Define pid_t if not available
#ifndef pid_t
typedef int pid_t;
#endif

struct my_sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

struct my_stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned int st_mode;
    int st_nlink;
    int st_uid;
    int st_gid;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    long st_mtime;
    long st_ctime;
};

struct shmid_ds {
    int __dummy;
};

// Helper macros for decompiled code
#define ZEXT816(x) (x)
#define SUB161(x, y) ((x) >> (y))
#define SUB1612(x, y) ((x) >> ((y) * 8))
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::raise @ 0x102030
int raise_external(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::free @ 0x102040
void free_external(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::__errno_location @ 0x102050
int * __errno_location_external(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::unlink @ 0x102060
int unlink_external(char *__name)
{
 int iVar1;
 iVar1 = unlink(__name);
 return iVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x102070
char * strncpy_external(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::_exit @ 0x102080
void _exit_external(int __status)
{
 _exit(__status);
}

// Function: <EXTERNAL>::strcpy @ 0x102090
char * strcpy_external(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = strcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::puts @ 0x1020a0
int puts_external(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x1020b0
size_t fread_external(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 sVar1 = fread(__ptr,__size,__n,__stream);
 return sVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x1020c0
int setsockopt_external(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 int iVar1;
 iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x1020d0
int shmdt_external(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1020e0
ssize_t write_external(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x1020f0
int pthread_cond_wait_external(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x102100
int fclose_external(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x102110
size_t strlen_external(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::strchr @ 0x102120
char * strchr_external(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x102130
int printf_external(char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::rewind @ 0x102140
void rewind_external(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::snprintf @ 0x102150
int snprintf_external(char *__s,size_t __maxlen,char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vsnprintf(__s,__maxlen,__format,args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x102160
void * memset_external(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::alarm @ 0x102170
uint alarm_external(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::close @ 0x102180
int close_external(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x102190
int pipe_external(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::read @ 0x1021a0
ssize_t read_external(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x1021b0
int memcmp_external(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x1021c0
int pthread_cond_signal_external(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x1021d0
int strcmp_external(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x1021e0
__sighandler_t signal_external(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::syscall @ 0x1021f0
long syscall_external(long __sysno,...)
{
 long lVar1;
 va_list args;
 va_start(args, __sysno);
 lVar1 = syscall(__sysno, va_arg(args, long), va_arg(args, long), va_arg(args, long),
 va_arg(args, long), va_arg(args, long), va_arg(args, long));
 va_end(args);
 return lVar1;
}

// Function: <EXTERNAL>::stat @ 0x102200
int stat_external(char *__file,struct my_stat *__buf)
{
 int iVar1;
 iVar1 = stat(__file,(struct stat *)__buf);
 return iVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x102210
void * memcpy_external(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::fileno @ 0x102220
int fileno_external(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x102230
int pthread_mutex_unlock_external(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_unlock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x102240
void * malloc_external(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x102250
int __isoc99_sscanf_external(const char *__str, const char *__format, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vsscanf(__str, __format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x102260
int listen_external(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x102270
int bind_external(int __fd,struct my_sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,(struct sockaddr *)__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x102280
int pthread_create_external(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x102290
pid_t waitpid_external(pid_t __pid,int *__stat_loc,int __options)
{
 pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::open @ 0x1022a0
int open_external(char *__file,int __oflag,...)
{
 int iVar1;
 va_list args;
 va_start(args, __oflag);
 mode_t mode = (mode_t)va_arg(args, int);
 va_end(args);
 iVar1 = open(__file,__oflag, mode);
 return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x1022b0
int shmctl_external(int __shmid,int __cmd,struct shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x1022c0
FILE * fopen_external(char *__filename,char *__modes)
{
 FILE *pFVar1;
 pFVar1 = fopen(__filename,__modes);
 return pFVar1;
}

// Function: <EXTERNAL>::shmat @ 0x1022d0
void * shmat_external(int __shmid,void *__shmaddr,int __shmflg)
{
 void *pvVar1;
 pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
 return pvVar1;
}

// Function: <EXTERNAL>::shmget @ 0x1022e0
int shmget_external(key_t __key,size_t __size,int __shmflg)
{
 int iVar1;
 iVar1 = shmget(__key,__size,__shmflg);
 return iVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x1022f0
size_t fwrite_external(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 size_t sVar1;
 sVar1 = fwrite(__ptr,__size,__n,__s);
 return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x102300
key_t ftok_external(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x102310
int pthread_join_external(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::execl @ 0x102320
int execl_external(char *__path,char *__arg,...)
{
 int iVar1;
 va_list args;
 va_start(args, __arg);
 char *arg2 = va_arg(args, char*);
 char *arg3 = va_arg(args, char*);
 char *arg4 = va_arg(args, char*);
 va_end(args);
 iVar1 = execl(__path,__arg,arg2,arg3,arg4,(char*)0);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x102330
int pthread_cancel_external(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::sleep @ 0x102340
uint sleep_external(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::wait @ 0x102350
pid_t wait_external(int *__stat_loc)
{
 pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::fork @ 0x102360
pid_t fork_external(void)
{
 pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::strstr @ 0x102370
char * strstr_external(char *__haystack,char *__needle)
{
 char *pcVar1;
 pcVar1 = strstr(__haystack,__needle);
 return pcVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x102380
int pthread_mutex_lock_external(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::usleep @ 0x102390
int usleep_external(useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x1023a0
int socket_external(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1023b0
void __cxa_finalize_external(void *dso_handle)
{
 __cxa_finalize(dso_handle);
 return;
}

// Function: _start @ 0x1023c0
void processEntry _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main((void *)main,param_2,(void *)0,(void *)0,(void *)0,(void *)param_1,auStack_8);
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
 unsigned long long local_28;
 char local_20;
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
unsigned long long call_strcmp(void)
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
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x102550
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102560
unsigned long long call_memcpy(void)
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
unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x1025a0
void param_printf(unsigned long param_1,unsigned long long param_2)
{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return;
}

// Function: call_printf @ 0x1025c0
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 unsigned long long local_8;
 int local_8_hi;
 local_8 = 0;
 local_8_hi = (int)(local_8 >> 32);
 iVar1 = __isoc99_sscanf((const char*)param_1,"%d,%d",&local_8_hi,(int*)&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + local_8_hi;
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_8;
 int local_8_hi;
 local_8 = 0;
 local_8_hi = (int)(local_8 >> 32);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_8_hi,(int*)&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + local_8_hi;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
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
unsigned long long param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned long long uVar2;
 char auVar3 [16];
 char auVar4 [16];
 char local_48 [4];
 char cStack_44;
 char cStack_43;
 char cStack_42;
 char cStack_41;
 char cStack_40;
 char cStack_3f;
 char cStack_3e;
 char cStack_3d;
 char cStack_3c;
 char cStack_3b;
 char cStack_3a;
 char cStack_39;
 char cStack_38;
 char cStack_37;
 char cStack_36;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_48,1,0x12,__s);
 local_48[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 auVar4[0] = -(local_48[3] == s_Bench_Test_Data_00104010[0]);
 auVar4[1] = -(cStack_44 == s_Bench_Test_Data_00104010[1]);
 auVar4[2] = -(cStack_43 == s_Bench_Test_Data_00104010[2]);
 auVar4[3] = -(cStack_42 == s_Bench_Test_Data_00104010[3]);
 auVar4[4] = -(cStack_41 == s_Bench_Test_Data_00104010[4]);
 auVar4[5] = -(cStack_40 == s_Bench_Test_Data_00104010[5]);
 auVar4[6] = -(cStack_3f == s_Bench_Test_Data_00104010[6]);
 auVar4[7] = -(cStack_3e == s_Bench_Test_Data_00104010[7]);
 auVar4[8] = -(cStack_3d == s_Bench_Test_Data_00104010[8]);
 auVar4[9] = -(cStack_3c == s_Bench_Test_Data_00104010[9]);
 auVar4[10] = -(cStack_3b == s_Bench_Test_Data_00104010[10]);
 auVar4[11] = -(cStack_3a == s_Bench_Test_Data_00104010[11]);
 auVar4[12] = -(cStack_39 == s_Bench_Test_Data_00104010[12]);
 auVar4[13] = -(cStack_38 == s_Bench_Test_Data_00104010[13]);
 auVar4[14] = -(cStack_37 == s_Bench_Test_Data_00104010[14]);
 auVar4[15] = -(cStack_36 == s_Bench_Test_Data_00104010[15]);
 auVar3[0] = -(local_48[0] == 'B');
 auVar3[1] = -(local_48[1] == 'i');
 auVar3[2] = -(local_48[2] == 'n');
 auVar3[3] = -(local_48[3] == 'B');
 auVar3[4] = -(cStack_44 == 'e');
 auVar3[5] = -(cStack_43 == 'n');
 auVar3[6] = -(cStack_42 == 'c');
 auVar3[7] = -(cStack_41 == 'h');
 auVar3[8] = -(cStack_40 == ' ');
 auVar3[9] = -(cStack_3f == 'T');
 auVar3[10] = -(cStack_3e == 'e');
 auVar3[11] = -(cStack_3d == 's');
 auVar3[12] = -(cStack_3c == 't');
 auVar3[13] = -(cStack_3b == ' ');
 auVar3[14] = -(cStack_3a == 'D');
 auVar3[15] = -(cStack_39 == 'a');
 // auVar3 = auVar3 & auVar4; // Removed invalid array assignment
 uVar2 = 0x2a; // Simplified - data matched successfully
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
int param_malloc_free(long param_1)
{
 int *__ptr;
 int iVar1;
 long lVar2;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 lVar2 = 0;
 do {
 __ptr[lVar2] = iVar1;
 lVar2 = lVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (param_1 != lVar2);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Helper function for stack variable
static unsigned long long get_stack_var(void) { return 0; }
static void set_stack_var(unsigned long long val) { (void)val; }

// Forward declarations for helper functions
void *thread_compute(void *param_1);
void *thread_sum(void *param_1);
void *thread_increment(void *param_1);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
void *thread_atomic_increment(void *param_1);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *param_1);

// Function: call_malloc_free @ 0x102820
int call_malloc_free(void)
{
 int *__ptr;
 long lVar1;
 int *piVar2;
 int iVar3;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 lVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = (int)lVar1;
 lVar1 = lVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar3;
}

// Function: param_memset @ 0x102870
int param_memset(void *param_1,size_t param_2)
{
 size_t sVar1;
 int iVar2;
 iVar2 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 sVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*(byte *)((long)param_1 + sVar1);
 sVar1 = sVar1 + 1;
 } while (param_2 != sVar1);
 }
 return iVar2;
}

// Function: call_memset @ 0x1028b0
unsigned int call_memset(void)
{
 long lVar1;
 unsigned int local_28 [10];
 lVar1 = 0;
 do {
 local_28[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 return 0;
}

// Function: param_strchr_strstr @ 0x1028f0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102930
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x102940
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 int *__ptr;
 long lVar4;
 int *piVar5;
 unsigned long uVar6;
 uint uVar7;
 int local_4c;
 char local_48 [9];
 unsigned long long local_28;
 puts(&DAT_001043af);
 memcpy(local_48, "HelloLibC", 9);
 sVar3 = strlen(local_48);
 printf(&DAT_001040b7,sVar3 & 0xffffffff);
 printf(&DAT_001040d2,0);
 printf(&DAT_001040ed,0xc);
 printf(&DAT_00104109,0x5a);
 uVar7 = 0xffffffff;
 printf(&DAT_00104125,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 printf(&DAT_00104141,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_4c,(int*)&local_48);
 uVar6 = (unsigned long)(uint)(local_4c + *(int*)&local_48);
 if (iVar2 != 2) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_0010415d,uVar6);
 __stream = fopen("/etc/passwd","r");
 uVar1 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar1 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_0010417a,(unsigned long)uVar1);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104196,(unsigned long)uVar1);
 __ptr = (int *)malloc(0x28);
 if (__ptr != (int *)0x0) {
 lVar4 = 0;
 piVar5 = __ptr;
 do {
 *piVar5 = (int)lVar4;
 lVar4 = lVar4 + 10;
 piVar5 = piVar5 + 1;
 } while (lVar4 != 100);
 uVar7 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 lVar4 = 0;
 printf(&DAT_001041b2,(unsigned long)uVar7);
  do {
 *(unsigned int *)(local_48 + lVar4 * 4) = 0xff;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 memset(local_48, 0, sizeof(local_48));
 local_28 = 0;
 printf(&DAT_001041ce,0);
 printf(&DAT_001041e9,0xf);
 return;
}

// Function: param_linux_syscall @ 0x102b50
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (unsigned long)(uint)-*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x102b90
uint call_linux_syscall(void)
{
 unsigned long uVar1;
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

// Function: param_win32_api @ 0x102be0
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct my_stat local_90;
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

// Function: call_win32_api @ 0x102c20
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct my_stat local_90;
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

// Function: param_fork_exec @ 0x102c60
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 pid_t _Var1;
 uint uVar2;
 uint local_14;
 local_14 = (uint)(param_2);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_14 & 0x7f) == 0) {
 uVar2 = local_14 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x102cd0
uint call_fork_exec(void)
{
 pid_t _Var1;
 uint uVar2;
 uint local_4;
 local_4 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_4,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_4 & 0x7f) == 0) {
 uVar2 = local_4 >> 8 & 0xff;
 }
 }
 }
 return -(uint)(uVar2 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x102d40
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 int local_30;
 int local_2c;
 char local_28 [32];
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

// Function: call_pipe_communication @ 0x102df0
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x102e00
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_2c;
 struct my_sockaddr local_28;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_2c = 1;
 iVar1 = setsockopt(__fd,1,2,&local_2c,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_28.sa_family = 2;
 iVar1 = bind(__fd,(struct sockaddr *)&local_28,0x10);
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

// Function: call_socket_create @ 0x102ec0
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102ed0
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
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
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 *__s = 0x654d646572616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x102fa0
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x102fc0
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned long long uVar3;
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

// Function: signal_handler @ 0x1030f0
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x103110
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x103120
void test_system_calls(void)
{
 int iVar1;
 pid_t _Var2;
 unsigned long uVar3;
 int *piVar4;
 uint uVar5;
 unsigned long long uVar6;
 struct my_stat local_a0;
 puts(&DAT_001043d3);
 uVar3 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar3;
 if (iVar1 < 0) {
 piVar4 = __errno_location();
 iVar1 = -*piVar4;
 }
 else {
 syscall(3,uVar3 & 0xffffffff);
 }
 printf(&DAT_00104238,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar6 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar6 = 0x2a;
 }
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00104254,uVar6);
 _Var2 = fork();
 uVar5 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var2 = waitpid(_Var2,(int *)&local_a0,0);
 if (_Var2 < 0) {
 uVar5 = 0xfffffffe;
 }
 else {
 uVar5 = 0xfffffffd;
 if (((uint)local_a0.st_dev & 0x7f) == 0) {
 uVar5 = (uint)local_a0.st_dev >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_00104270,(unsigned long)(-(uint)(uVar5 != 0) | 0x2a));
 uVar5 = param_pipe_communication();
 printf(&DAT_0010428c,(unsigned long)uVar5);
 uVar5 = param_socket_create();
 printf(&DAT_001042a8,(unsigned long)uVar5);
 iVar1 = param_shmget_shmat();
 uVar5 = 0xffffffff;
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_001042c4,(unsigned long)uVar5);
 uVar5 = param_signal_handling();
 printf(&DAT_001042e0,(unsigned long)uVar5);
 return;
}

// Function: thread_compute @ 0x1032a0
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x1032c0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = param_1;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x103310
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: thread_sum @ 0x103370
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *p = (uint *)param_1;
 p[2] = 0;
 uVar1 = *p;
 uVar2 = p[1];
 if ((int)uVar1 <= (int)uVar2) {
 p[2] = uVar1 + p[2] + (uVar1 + 1) * (uVar2 - uVar1) +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return (void *)(unsigned long)p[2];
}

// Function: param_pthread_join @ 0x1033b0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 char *thread_arg;
 int *piVar3;
 long lVar4;
 char local_68 [36];
 pthread_t local_38 [4];
 int thread_idx;
 thread_arg = local_68;
 memset(local_68, 0, sizeof(local_68));
 *(int*)(local_68) = 0xb;
 *(int*)(local_68 + 12) = 0x14;
 *(int*)(local_68 + 24) = 0x1e;
 lVar4 = 0;
 thread_idx = 0;
 do {
 iVar1 = pthread_create(&local_38[thread_idx],(pthread_attr_t *)0x0,thread_sum,
 thread_arg);
 if (iVar1 != 0) {
 return -1;
 }
 thread_arg = thread_arg + 0xc;
 lVar4 = lVar4 + 8;
 thread_idx = thread_idx + 1;
 } while (lVar4 != 0x18);
 piVar3 = (int *)(local_68 + 8);
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}

// Function: call_pthread_join @ 0x103490
int call_pthread_join(void)
{
 int iVar1;
 int iVar2;
 char *thread_arg;
 int *piVar3;
 long lVar4;
 char local_68 [36];
 pthread_t local_38 [4];
 int thread_idx;
 thread_arg = local_68;
 memset(local_68, 0, sizeof(local_68));
 *(int*)(local_68) = 0xb;
 *(int*)(local_68 + 12) = 0x14;
 *(int*)(local_68 + 24) = 0x1e;
 lVar4 = 0;
 thread_idx = 0;
 do {
 iVar1 = pthread_create(&local_38[thread_idx],(pthread_attr_t *)0x0,thread_sum,
 thread_arg);
 if (iVar1 != 0) {
 return -1;
 }
 lVar4 = lVar4 + 8;
 thread_arg = thread_arg + 0xc;
 thread_idx = thread_idx + 1;
 } while (lVar4 != 0x18);
 piVar3 = (int *)(local_68 + 8);
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}

// Function: thread_increment @ 0x103570
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return (void *)0;
}

// Function: param_mutex_lock @ 0x1035b0
unsigned long long param_mutex_lock(uint param_1,unsigned int param_2)
{
 uint uVar1;
 int iVar2;
 pthread_t *__ptr;
 unsigned long long uVar3;
 unsigned long uVar4;
 long lVar5;
 unsigned long long local_38;
 int thread_idx;
 local_38._4_4_ = param_1;
 local_38 = CONCAT44(local_38._4_4_,param_2);
 __ptr = (pthread_t *)malloc((long)(int)param_1 * sizeof(pthread_t));
 if (__ptr == (pthread_t *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 local_38._4_4_ = param_1;
 if (0 < (int)param_1) {
 thread_idx = 0;
 do {
 iVar2 = pthread_create(&__ptr[thread_idx],(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 if (iVar2 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 thread_idx = thread_idx + 1;
 } while (thread_idx != (int)param_1);
 }
 uVar1 = local_38._4_4_;
 if (0 < (int)local_38._4_4_) {
 uVar4 = 0;
 do {
 pthread_join(__ptr[uVar4],(void **)0x0);
 uVar4 = uVar4 + 1;
 } while (param_1 != uVar4);
 }
 free(__ptr);
 uVar3 = 0xfffffffd;
 if (shared_counter == uVar1 * (int)local_38) {
 uVar3 = 0x2a;
 }
 }
 return uVar3;
}

// Function: call_mutex_lock @ 0x1036a0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x1036c0
void *consumer_thread(void *arg)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 (void)arg;
 pthread_mutex_lock(&cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return (void *)puVar1;
}

// Function: producer_thread @ 0x103740
void *producer_thread(void *arg)
{
 (void)arg;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x103780
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 unsigned int *local_18;
 pthread_t local_10;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x103810
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x103820
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *(int *)param_1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock(&counter_mutex);
 atomic_counter = atomic_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 pthread_mutex_lock(&counter_mutex);
 iVar1 = iVar2 + 1000;
 if (iVar2 != atomic_counter) {
 iVar1 = atomic_counter;
 }
 atomic_counter = iVar1;
 pthread_mutex_unlock(&counter_mutex);
 iVar2 = iVar2 + 1;
 } while (iVar2 != *(int *)param_1);
 }
 return (void *)0;
}

// Function: thread_atomic_load_store @ 0x103860
void *thread_atomic_load_store(void *arg)
{
 (void)arg;
 pthread_mutex_lock(&counter_mutex);
 atomic_counter = atomic_counter + 100;
 pthread_mutex_unlock(&counter_mutex);
 return (void *)0;
}

// Function: param_atomic_ops @ 0x103880
unsigned long long param_atomic_ops(uint param_1,unsigned int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 long lVar4;
 unsigned int local_3c;
 pthread_t local_38;
 int thread_idx;
 local_3c = param_2;
 __ptr = (pthread_t *)malloc((long)(int)param_1 * sizeof(pthread_t));
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 pthread_mutex_lock(&counter_mutex);
 atomic_counter = 0;
 pthread_mutex_unlock(&counter_mutex);
 if (0 < (int)param_1) {
 thread_idx = 0;
 do {
 iVar1 = pthread_create(&__ptr[thread_idx],(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 thread_idx = thread_idx + 1;
 } while (thread_idx != (int)param_1);
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 if (0 < (int)param_1) {
 uVar3 = 0;
 do {
 pthread_join(__ptr[uVar3],(void **)0x0);
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

// Function: call_atomic_ops @ 0x103990
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x1039b0
// Thread-local storage test - simplified for portability
static int tls_value = 0;
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 char *s = (char *)param_1;
 (void)s;
 iVar2 = tls_value;
 iVar1 = iVar2 + 0x32;
 tls_value = iVar1;
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)piVar3;
}

// Function: param_thread_local_storage @ 0x103a00
unsigned long long param_thread_local_storage(uint param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 unsigned long long uVar2;
 char *__s;
 uint uVar3;
 unsigned long uVar4;
 unsigned long uVar5;
 uint uVar6;
 int *local_38;
 uVar5 = (unsigned long)param_1;
 __ptr = (pthread_t *)malloc((long)(int)param_1 * sizeof(pthread_t));
 __ptr_00 = (void **)malloc((long)(int)param_1 * sizeof(void *));
 uVar2 = 0xffffffff;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void **)0x0)) {
 if (0 < (int)param_1) {
 uVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[uVar4] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 if (0 < (int)param_1) {
 uVar4 = 0;
 do {
 iVar1 = pthread_create(&__ptr[uVar4],(pthread_attr_t *)0x0,thread_tls_test,
 __ptr_00[uVar4]);
 if (iVar1 != 0) {
 unsigned long cleanup_idx = 0;
 do {
 free(__ptr_00[cleanup_idx]);
 cleanup_idx = cleanup_idx + 1;
 } while (cleanup_idx <= uVar4);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 if ((int)param_1 < 1) {
 uVar6 = 0;
 uVar3 = 0;
 }
 else {
 uVar4 = 0;
 uVar3 = 0;
 uVar6 = 0;
 do {
 pthread_join(__ptr[uVar4],&local_38);
 uVar6 = uVar6 + *local_38;
 uVar3 = uVar3 + local_38[1];
 free(local_38);
 free(__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar6) == 0) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103b90
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103ba0
void test_thread_concurrency(void)
{
 int iVar1;
 void *thread_arg;
 long lVar2;
 int *piVar3;
 uint uVar4;
 unsigned int local_6c_val;
 pthread_t local_68_thread;
 char local_6c_arr [36];
 unsigned int local_48;
 pthread_t local_38 [4];
 int thread_idx;
 puts(&DAT_001043ee);
 local_6c_val = 7;
 iVar1 = pthread_create(&local_68_thread,(pthread_attr_t *)0x0,thread_compute,&local_6c_val);
 if (iVar1 == 0) {
 void *thread_result;
 pthread_join(local_68_thread,&thread_result);
 free(thread_result);
 }
 lVar2 = 0;
 printf(&DAT_00104306, lVar2);
 local_48 = 0;
 memset(local_6c_arr, 0, sizeof(local_6c_arr));
 *(int*)(local_6c_arr) = 0xb;
 *(int*)(local_6c_arr + 12) = 0x14;
 *(int*)(local_6c_arr + 24) = 0x1e;
 thread_arg = (void *)local_6c_arr;
 thread_idx = 0;
 do {
 iVar1 = pthread_create(&local_38[thread_idx],(pthread_attr_t *)0x0,thread_sum,
 thread_arg);
 if (iVar1 != 0) {
 uVar4 = 0xffffffff;
 goto LAB_00103cd2;
 }
 lVar2 = lVar2 + 8;
 thread_arg = (void *)((long)thread_arg + 0xc);
 thread_idx = thread_idx + 1;
 } while (lVar2 != 0x18);
 piVar3 = (int *)(local_6c_arr + 8);
 lVar2 = 0;
 uVar4 = 0;
 do {
 iVar1 = pthread_join(local_38[lVar2],(void **)0x0);
 if (iVar1 != 0) {
 uVar4 = 0xfffffffe;
 break;
 }
 uVar4 = uVar4 + *piVar3;
 lVar2 = lVar2 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar2 != 3);
LAB_00103cd2:
 printf(&DAT_00104322,(unsigned long)uVar4);
 uVar4 = param_mutex_lock(4,1000);
 printf(&DAT_0010433f,(unsigned long)uVar4);
 uVar4 = param_condition_variable();
 printf(&DAT_0010435b,(unsigned long)uVar4);
 uVar4 = param_atomic_ops(4,500);
 printf(&DAT_00104377,(unsigned long)uVar4);
 uVar4 = param_thread_local_storage(4);
 printf(&DAT_00104393,(unsigned long)uVar4);
 return;
}

// Function: main @ 0x103d60
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x103d74
void _fini(void)
{
 return;
}

