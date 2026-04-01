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
typedef unsigned long pthread_t;
typedef long pthread_attr_t;
typedef void *pthread_mutex_t;
typedef void *pthread_cond_t;
typedef void *__sighandler_t;
typedef void *key_t;
typedef unsigned short sa_family_t;
struct sockaddr {
 unsigned short sa_family;
 char sa_data[14];
};
typedef struct sockaddr sockaddr;
typedef int socklen_t;
typedef unsigned long __useconds_t;
typedef unsigned int mode_t;
typedef unsigned long ino_t;
typedef unsigned long dev_t;
typedef unsigned long off_t;
typedef long time_t;
typedef unsigned long nlink_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef int pid_t;
typedef unsigned long ftok_return_t;
typedef void FILE;
typedef int __start_routine(void *);
typedef void shmid_ds;
typedef unsigned int unkuint9;
typedef unsigned long long uint6;
typedef unsigned short ushort;
typedef unsigned int unkuint10;
typedef unsigned int uint3;
typedef unsigned char byte;

// Global variables

// Global variables
static int atomic_counter = 0;
static int shared_counter = 0;
static int data = 0;
static int ready = 0;
static int signal_received = 0;
static int signal_number = 0;
char completed_0 = 0;
void *__dso_handle = 0;

// Global variables for threading
int cond_mutex = 0;
int cond = 0;
int counter_mutex = 0;

// String constants for printf
char DAT_00105023[] = "Test";
char DAT_00105390[] = "Testing standard library functions...";
char DAT_00105071[] = "memcmp: %d\n";
char DAT_0010508c[] = "printf: %d\n";
char DAT_001050a7[] = "printf result: %d\n";
char DAT_001050c3[] = "printf: 0x%x\n";
char DAT_001050df[] = "memcmp result: %d\n";
char DAT_001050fb[] = "printf chars written: %u\n";
char DAT_00105117[] = "sscanf result: %d\n";
char DAT_00105134[] = "fopen/fileno: %llu\n";
char DAT_00105150[] = "fread/fwrite: %llu\n";
char DAT_0010516c[] = "malloc/free: %llu\n";
char DAT_00105188[] = "memset: %llu\n";
char DAT_001051a3[] = "strchr/strstr: %llu\n";
char DAT_001051e5[] = "Testing system calls...";
char DAT_00105200[] = "syscall open: %llu\n";
char DAT_0010521c[] = "stat: %llu\n";
char DAT_00105238[] = "fork/exec: %llu\n";
char DAT_00105254[] = "pipe: %llu\n";
char DAT_00105270[] = "socket: %llu\n";
char DAT_0010528c[] = "shm: %llu\n";
char DAT_001052a8[] = "System calls done: %llu\n";
char DAT_001052c4[] = "Testing thread concurrency...";
char DAT_001052e2[] = "thread create: %u\n";
char DAT_001052fe[] = "pthread join: %u\n";
char DAT_0010531b[] = "mutex lock: %u\n";
char DAT_00105337[] = "condition variable: %u\n";
char DAT_00105353[] = "atomic ops: %u\n";
char DAT_0010536f[] = "Thread concurrency done\n";

// LOCK/UNLOCK macros for atomic operations
#define LOCK() 
#define UNLOCK()

// Ghidra macro for combining two 32-bit values into a 64-bit value
#define CONCAT44(lo, hi) (((uint64_t)(uint32_t)(hi) << 32) | (uint32_t)(lo))

// stat structure definition
struct stat_t {
 unsigned long st_size;
 unsigned long st_mode;
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;
 unsigned long st_uid;
 unsigned long st_gid;
 unsigned long st_rdev;
 unsigned long st_atime;
 unsigned long st_mtime;
 unsigned long st_ctime;
 unsigned long st_blksize;
 unsigned long st_blocks;
};
typedef struct stat_t stat_t;

// Decompiled by BinaryAI
// SHA256: 1f649ca6252869f8f61280a7fabaf499c3949a2e3c21fe1be6ea2a9778ca28a9



// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1023c0
void __cxa_finalize(void *param)
{
 return;
}

// Function: <EXTERNAL>::__snprintf_chk @ 0x1023d0
int __snprintf_chk(char *__s, size_t __maxlen, int __flag, size_t __os, char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::raise @ 0x1023e0
int raise(int __sig)
{
 return 0;
}

// Function: <EXTERNAL>::free @ 0x1023f0
void free(void *__ptr)
{
}

// Function: <EXTERNAL>::__errno_location @ 0x102400
int * __errno_location(void)
{
 return (int *)0;
}

// Function: <EXTERNAL>::unlink @ 0x102410
int unlink(char *__name)
{
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x102420
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::_exit @ 0x102430
void _exit(int __status)
{
 while(1) { }
}

// Function: <EXTERNAL>::puts @ 0x102440
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::fread @ 0x102450
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 sVar1 = fread(__ptr,__size,__n,__stream);
 return sVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x102460
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 int iVar1;
 iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x102470
int shmdt(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x102480
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x102490
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x1024a0
int fclose(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::stpcpy @ 0x1024b0
char * stpcpy(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = stpcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::strlen @ 0x1024c0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1024d0
void __stack_chk_fail(void)
{
 while(1) { }
}

// Function: <EXTERNAL>::strchr @ 0x1024e0
char * strchr(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::rewind @ 0x1024f0
void rewind(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::memset @ 0x102500
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::alarm @ 0x102510
uint alarm(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::close @ 0x102520
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x102530
int pipe(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::read @ 0x102540
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x102550
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x102560
int pthread_cond_signal(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x102570
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x102580
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::syscall @ 0x102590
long syscall(long __sysno,...)
{
 long lVar1;
 lVar1 = syscall(__sysno);
 return lVar1;
}

// Function: <EXTERNAL>::stat @ 0x1025a0
int stat_syscall(char *__file,struct stat *__buf)
{
 int iVar1;
 iVar1 = stat_syscall(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x1025b0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::fileno @ 0x1025c0
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x1025d0
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_unlock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1025e0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x1025f0
int __isoc99_sscanf(char *__s, char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::listen @ 0x102600
int listen(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102610
int __printf_chk(int __flag, char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::bind @ 0x102620
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x102630
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x102640
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::open @ 0x102650
int open(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x102660
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x102670
FILE * fopen(char *__filename,char *__modes)
{
 FILE *pFVar1;
 pFVar1 = fopen(__filename,__modes);
 return pFVar1;
}

// Function: <EXTERNAL>::shmat @ 0x102680
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 void *pvVar1;
 pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
 return pvVar1;
}

// Function: <EXTERNAL>::shmget @ 0x102690
int shmget(key_t __key,size_t __size,int __shmflg)
{
 int iVar1;
 iVar1 = shmget(__key,__size,__shmflg);
 return iVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x1026a0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 size_t sVar1;
 sVar1 = fwrite(__ptr,__size,__n,__s);
 return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x1026b0
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x1026c0
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::execl @ 0x1026d0
int execl(char *__path,char *__arg,...)
{
 int iVar1;
 iVar1 = execl(__path,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x1026e0
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::sleep @ 0x1026f0
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::wait @ 0x102700
__pid_t wait(void *__stat_loc)
{
 __pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::fork @ 0x102710
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::strstr @ 0x102720
char * strstr(char *__haystack,char *__needle)
{
 char *pcVar1;
 pcVar1 = strstr(__haystack,__needle);
 return pcVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x102730
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::usleep @ 0x102740
int usleep(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x102750
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: main @ 0x102760
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _start @ 0x102790
static void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,auStack_8,0,0,param_1,auStack_8);
 do {
 } while( 1 );
}

// Function: deregister_tm_clones @ 0x1027c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1027f0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102830
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

// Function: signal_handler @ 0x102880
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x1028a0
unsigned long long thread_sum(int *param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 iVar5 = *param_1;
 iVar2 = param_1[1];
 param_1[2] = 0;
 if (iVar2 < iVar5) {
 return 0;
 }
 uVar1 = (iVar2 - iVar5) + 1;
 if ((uint)(iVar2 - iVar5) < 10) {
 iVar9 = 0;
 }
 else {
 iVar8 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 uVar3 = 0;
 iVar9 = iVar5;
 iVar4 = iVar5 + 1;
 iVar6 = iVar5 + 2;
 iVar7 = iVar5 + 3;
 do {
 uVar3 = uVar3 + 1;
 iVar8 = iVar8 + iVar9;
 iVar10 = iVar10 + iVar4;
 iVar11 = iVar11 + iVar6;
 iVar12 = iVar12 + iVar7;
 iVar9 = iVar9 + 4;
 iVar4 = iVar4 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 } while (uVar1 >> 2 != uVar3);
 iVar5 = iVar5 + (uVar1 & 0xfffffffc);
 iVar9 = iVar8 + iVar11 + iVar10 + iVar12;
 iVar4 = iVar9;
 if (uVar1 == (uVar1 & 0xfffffffc)) goto LAB_0010298b;
 }
 iVar4 = iVar9 + iVar5;
 if (iVar5 + 1 <= iVar2) {
 iVar4 = iVar9 + iVar5 + iVar5 + 1;
 if (iVar5 + 2 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 2;
 if (iVar5 + 3 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 3;
 if (iVar5 + 4 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 4;
 if (iVar5 + 5 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 5;
 if (iVar5 + 6 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 6;
 if (iVar5 + 7 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 7;
 if (iVar5 + 8 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 8;
 if (iVar5 + 9 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 9;
 }
 }
 }
 }
 }
 }
 }
 }
 }
LAB_0010298b:
 param_1[2] = iVar4;
 return 0;
}

// Function: thread_compute @ 0x1029a0
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: thread_increment @ 0x1029c0
unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return 0;
}

// Function: consumer_thread @ 0x102a20
void consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return;
}

// Function: producer_thread @ 0x102a90
unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: thread_atomic_increment @ 0x102ae0
unsigned long long thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *param_1) {
 iVar2 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar1 = iVar2 + 1000;
 if (iVar2 != atomic_counter) {
 iVar1 = atomic_counter;
 }
 atomic_counter = iVar1;
 UNLOCK();
 iVar2 = iVar2 + 1;
 } while (*param_1 != iVar2);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x102b20
unsigned long long thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: thread_tls_test @ 0x102b40
void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 unsigned long long *puVar3;
 long *in_FS_OFFSET;
 iVar2 = *(int *)((long)in_FS_OFFSET + -0x24);
 iVar1 = iVar2 + 0x32;
 *(int *)((long)in_FS_OFFSET + -0x24) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 puVar3 = (unsigned long long *)malloc(8);
 *puVar3 = CONCAT44(iVar1,iVar2);
 return;
}

// Function: param_fork_exec.part.0 @ 0x102ba0
void param_fork_exec_part_0(char *param_1,unsigned long long param_2)
{
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
}

// Function: param_thread_local_storage.constprop.0 @ 0x102bc0
unsigned long long param_thread_local_storage_constprop_0(void)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 void *pvVar2;
 unsigned long long uVar3;
 unsigned long uVar4;
 void **ppvVar5;
 unsigned long uVar6;
 long lVar7;
 int iVar8;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = (pthread_t *)malloc(0x20);
 __ptr_00 = (void **)malloc(0x20);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (void **)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar4 = 0;
 do {
 pvVar2 = malloc(0x10);
 uVar6 = uVar4 & 0xffffffff;
 __ptr_00[uVar4] = pvVar2;
 uVar4 = uVar4 + 1;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar6);
 } while (uVar4 != 4);
 lVar7 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[lVar7]);
 if (iVar1 != 0) {
 ppvVar5 = __ptr_00;
 do {
 pvVar2 = *ppvVar5;
 ppvVar5 = ppvVar5 + 1;
 free(pvVar2);
 } while (__ptr_00 + lVar7 + 1 != ppvVar5);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00102ced;
 }
 lVar7 = lVar7 + 1;
 __newthread = __newthread + 1;
 } while (lVar7 != 4);
 iVar8 = 0;
 lVar7 = 0;
 iVar1 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar7),&local_48);
 iVar1 = iVar1 + *local_48;
 iVar8 = iVar8 + local_48[1];
 free(local_48);
 ppvVar5 = (void **)((long)__ptr_00 + lVar7);
 lVar7 = lVar7 + 8;
 free(*ppvVar5);
 } while (lVar7 != 0x20);
 free(__ptr_00);
 free(__ptr);
 if ((iVar1 == 400) && (iVar8 == 600)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00102ced:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar3;
 }
 __stack_chk_fail();
}

// Function: param_atomic_ops.constprop.0 @ 0x102d60
unsigned long long param_atomic_ops_constprop_0(void)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 long in_FS_OFFSET;
 unsigned int local_4c;
 pthread_t local_48;
 long local_40;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_4c = 500;
 __ptr = (pthread_t *)malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102e31;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + 4);
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 ppVar3 = __ptr;
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 do {
 ppVar4 = ppVar3 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 iVar1 = atomic_counter;
 ppVar3 = ppVar4;
 } while (ppVar4 != __ptr + 4);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00102e31:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_mutex_lock.constprop.0 @ 0x102e80
unsigned long long param_mutex_lock_constprop_0(void)
{
 pthread_t __th;
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 pthread_t *__newthread;
 pthread_t *ppVar3;
 long in_FS_OFFSET;
 int local_44;
 long local_40;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_44 = 1000;
 __ptr = (pthread_t *)malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102f38;
 }
 __newthread = __newthread + 1;
 ppVar3 = __ptr;
 } while (__newthread != __ptr + 4);
 do {
 __th = *ppVar3;
 ppVar3 = ppVar3 + 1;
 pthread_join(__th,(void **)0x0);
 } while (ppVar3 != __ptr + 4);
 free(__ptr);
 uVar2 = 0x2a;
 if (local_44 << 2 != shared_counter) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00102f38:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_strcpy @ 0x102f80
int param_strcpy(char *param_1,char *param_2)
{
 char *pcVar1;
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}

// Function: call_strcpy @ 0x102fa0
unsigned long long call_strcpy(void)
{
 return 8;
}

// Function: param_strcmp @ 0x102fb0
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x102fe0
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x102ff0
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x103010
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x103020
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x103040
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x103050
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x103080
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 unsigned long long local_50;
 unsigned int local_48;
 unsigned long long local_40;
 unsigned int local_38;
 unsigned long long local_30;
 unsigned int local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 3;
 local_50 = 0x200000001;
 local_40 = 0x200000001;
 local_38 = 4;
 local_30 = 0x200000001;
 local_28 = 3;
 iVar1 = memcmp(&local_50,&local_40,0xc);
 iVar3 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar1 = memcmp(&local_50,&local_30,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar3;
 }
 __stack_chk_fail();
}

// Function: param_printf @ 0x103140
void param_printf(unsigned int param_1,unsigned long long param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x103160
void call_printf(void)
{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105023);
 return;
}

// Function: param_scanf @ 0x103190
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14;
 }
 __stack_chk_fail();
}

// Function: call_scanf @ 0x1031f0
int call_scanf(void)
{
 int iVar1;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14;
 }
 __stack_chk_fail();
}

// Function: param_fopen_fclose @ 0x103260
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

// Function: call_fopen_fclose @ 0x1032b0
unsigned long long call_fopen_fclose(void)
{
 int iVar1;
 FILE *__stream;
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 if (-1 < iVar1) {
 return 0x2a;
 }
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x103310
unsigned long long param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 unsigned long local_48;
 unsigned long local_40;
 short local_38;
 char local_36;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(&local_48,1,0x12,__s);
 *(char *)((long)&local_48 + sVar1) = 0;
 fclose(__s);
 unlink(param_1);
 if ((((sVar1 != 0x12) ||
 ((local_40 ^ 0x6144207473655420 | local_48 ^ 0x68636e65426e6942) != 0)) ||
 (local_38 != 0x6174)) || (uVar2 = 0x2a, local_36 != '\0')) {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x103420
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x103430
int param_malloc_free(unsigned long param_1)
{
 int *__ptr;
 int *piVar1;
 int *piVar2;
 unsigned long uVar3;
 int iVar4;
 int iVar5;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 != 0) {
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 }
 else {
 piVar1 = __ptr;
 iVar4 = 0;
 iVar5 = 1;
 do {
 piVar2 = piVar1 + 4;
 *piVar1 = iVar4 * 10;
 piVar1[1] = iVar5 * 10;
 piVar1[2] = (iVar4 + 2) * 10;
 piVar1[3] = (iVar5 + 2) * 10;
 piVar1 = piVar2;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 } while (__ptr + (param_1 & 0xfffffffffffffffc) != piVar2);
 uVar3 = param_1 & 0xfffffffffffffffc;
 if ((param_1 & 3) == 0) goto LAB_00103513;
 }
 __ptr[uVar3] = (int)uVar3 * 10;
 if (uVar3 + 1 < param_1) {
 __ptr[uVar3 + 1] = (int)(uVar3 + 1) * 10;
 if (uVar3 + 2 < param_1) {
 __ptr[uVar3 + 2] = (int)(uVar3 + 2) * 10;
 }
 }
 }
LAB_00103513:
 iVar4 = *__ptr;
 iVar5 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar4 + iVar5;
}

// Function: call_malloc_free @ 0x103540
unsigned long long call_malloc_free(void)
{
 void *__ptr;
 unsigned long long uVar1;
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0x5a;
 }
 return uVar1;
}

// Function: param_memset @ 0x103570
int param_memset(void *param_1,size_t param_2)
{
 memset(param_1,0,param_2);
 return 0;
}

// Function: call_memset @ 0x103740
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x103750
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 int iVar1;
 char *pcVar2;
 int iVar3;
 pcVar2 = strchr(param_1,(int)param_2);
 iVar3 = (int)pcVar2 - (int)param_1;
 if (pcVar2 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar2 = strstr(param_1,param_3);
 iVar1 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar1 = (int)pcVar2 - (int)param_1;
 }
 return iVar3 + iVar1;
}

// Function: call_strchr_strstr @ 0x1037b0
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x1037c0
void test_standard_library_functions(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 FILE *__stream;
 void *__ptr;
 unsigned long long uVar4;
 int iVar5;
 long in_FS_OFFSET;
 int local_58;
 int local_54;
 unsigned long long local_50;
 unsigned int local_48;
 unsigned long long local_40;
 unsigned int local_38;
 unsigned long long local_30;
 unsigned int local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00105390);
 __printf_chk(1,&DAT_00105071,8);
 __printf_chk(1,&DAT_0010508c,0);
 __printf_chk(1,&DAT_001050a7,0xc);
 __printf_chk(1,&DAT_001050c3,0x5a);
 local_48 = 3;
 local_50 = 0x200000001;
 local_40 = 0x200000001;
 local_38 = 4;
 local_30 = 0x200000001;
 local_28 = 3;
 iVar1 = memcmp(&local_50,&local_40,0xc);
 iVar5 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar5 = 1;
 }
 iVar2 = memcmp(&local_50,&local_30,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 __printf_chk(1,&DAT_001050df,iVar1 + iVar5);
 uVar3 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105023);
 __printf_chk(1,&DAT_001050fb,uVar3);
 iVar5 = __isoc99_sscanf("123,456","%d,%d",&local_58,&local_54);
 if (iVar5 == 2) {
 local_54 = local_54 + local_58;
 }
 else {
 local_54 = -1;
 }
 __printf_chk(1,&DAT_00105117,local_54);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar5 = fileno(__stream);
 fclose(__stream);
 uVar4 = 0x2a;
 if (-1 < iVar5) goto LAB_00103987;
 }
 uVar4 = 0xffffffff;
LAB_00103987:
 __printf_chk(1,&DAT_00105134,uVar4);
 uVar3 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00105150,uVar3);
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar4 = 0x5a;
 }
 __printf_chk(1,&DAT_0010516c,uVar4);
 __printf_chk(1,&DAT_00105188,0);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_001051a3,0xf);
 return;
 }
 __stack_chk_fail();
}

// Function: param_linux_syscall @ 0x103a50
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(2,param_1,0);
 if (-1 < (int)uVar1) {
 syscall(3,uVar1 & 0xffffffff);
 return uVar1 & 0xffffffff;
 }
 piVar2 = __errno_location();
 return (unsigned long)(uint)-*piVar2;
}

// Function: call_linux_syscall @ 0x103aa0
unsigned long long call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned long long uVar3;
 uVar1 = syscall(2,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(3,uVar1 & 0xffffffff);
 return 0x2a;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x103b00
unsigned long long param_win32_api(char *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 struct stat_t sStack_a8;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&sStack_a8);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (sStack_a8.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_win32_api @ 0x103b70
unsigned long long call_win32_api(void)
{
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 struct stat_t sStack_a8;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat("/etc/passwd",&sStack_a8);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (sStack_a8.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_fork_exec @ 0x103be0
uint param_fork_exec(unsigned long long param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 long in_FS_OFFSET;
 uint uStack_3c;
 long lStack_38;
 unsigned long long uStack_30;
 uint local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 uStack_30 = 0x103c06;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
LAB_00103c39:
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 uStack_30 = 0x103c5d;
 __stack_chk_fail();
 }
 if (_Var1 != 0) {
 uStack_30 = 0x103c1a;
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_24 >> 8 & 0xff, (local_24 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 goto LAB_00103c39;
 }
 uStack_30 = 0x103c68;
 param_fork_exec_part_0(param_1,param_2);
 lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
 _Var1 = fork();
 if (_Var1 < 0) {
LAB_00103cad:
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 param_fork_exec_part_0("/bin/true",0);
 goto LAB_00103cea;
 }
 _Var1 = waitpid(_Var1,(int *)&uStack_3c,0);
 if (((_Var1 < 0) || ((uStack_3c & 0x7f) != 0)) || ((char)(uStack_3c >> 8) != '\0'))
 goto LAB_00103cad;
 uVar2 = 0x2a;
 }
 if (lStack_38 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
LAB_00103cea:
 __stack_chk_fail();
}

// Function: call_fork_exec @ 0x103c70
static unsigned long long call_fork_exec(void)
{
 __pid_t _Var1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 uint local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 _Var1 = fork();
 if (_Var1 < 0) {
LAB_00103cad:
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 param_fork_exec_part_0("/bin/true",0);
 goto LAB_00103cea;
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (((_Var1 < 0) || ((local_14 & 0x7f) != 0)) || ((char)(local_14 >> 8) != '\0'))
 goto LAB_00103cad;
 uVar2 = 0x2a;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
LAB_00103cea:
 __stack_chk_fail();
}

// Function: param_pipe_communication @ 0x103cf0
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 long in_FS_OFFSET;
 int local_40;
 int local_3c;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = pipe(&local_40);
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
 close(local_40);
 write(local_3c,"HelloPipe",9);
 close(local_3c);
 _exit(0);
 }
 close(local_3c);
 sVar3 = read(local_40,local_38,0x1f);
 local_38[sVar3] = 0;
 close(local_40);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar4;
 }
 __stack_chk_fail();
}

// Function: param_socket_create @ 0x103df0
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 unsigned int local_2c;
 sockaddr local_28;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
 memset(local_28.sa_data, 0, 14);
 local_28.sa_family = 2;
 iVar1 = bind(__fd,&local_28,0x10);
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_shmget_shmat @ 0x103f00
unsigned long long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__shmaddr;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 __shmaddr = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__shmaddr != (unsigned long long *)0xffffffffffffffff) {
 *(unsigned int *)(__shmaddr + 1) = 0x79726f6d;
 *__shmaddr = 0x654d646572616853;
 *(char *)((long)__shmaddr + 0xc) = 0;
 shmdt(__shmaddr);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x103fc0
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x103ff0
unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int iVar3;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar3 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar3 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
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

// Function: test_system_calls @ 0x104140
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned int uVar3;
 unsigned long uVar4;
 int *piVar5;
 unsigned long long uVar6;
 uint uVar7;
 long in_FS_OFFSET;
 unsigned int uStack_dc;
 pthread_t pStack_d8;
 uint *puStack_d0;
 long lStack_c8;
 uint local_ac;
 struct stat_t local_a8;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001051e5);
 uVar4 = syscall(2,"/etc/passwd",0);
 if ((int)uVar4 < 0) {
 piVar5 = __errno_location();
 uVar6 = 0x2a;
 if (0 < *piVar5) {
 uVar6 = 0xffffffff;
 }
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 uVar6 = 0x2a;
 }
 __printf_chk(1,&DAT_00105200,uVar6);
 iVar1 = stat("/etc/passwd",&local_a8);
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 else {
 uVar6 = 0x2a;
 if (local_a8.st_size < 1) {
 uVar6 = 0xfffffffe;
 }
 }
 __printf_chk(1,&DAT_0010521c,uVar6);
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 uStack_dc = 0x1051bf;
 param_fork_exec_part_0((char *)uStack_dc, 0);
 lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = pthread_create(&pStack_d8,(pthread_attr_t *)0x0,thread_compute,&uStack_dc);
 if (iVar1 == 0) {
 pthread_join(pStack_d8,&puStack_d0);
 uVar7 = *puStack_d0;
 free(puStack_d0);
 }
 else {
 uVar7 = 0xffffffff;
 }
 if (lStack_c8 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (unsigned long)uVar7;
 }
 _Var2 = waitpid(_Var2,(int *)&local_ac,0);
 if (((-1 < _Var2) && ((local_ac & 0x7f) == 0)) && ((char)(local_ac >> 8) == '\0')) {
 uVar6 = 0x2a;
 goto LAB_0010421e;
 }
 }
 uVar6 = 0xffffffff;
LAB_0010421e:
 __printf_chk(1,&DAT_00105238,uVar6);
 uVar3 = param_pipe_communication();
 __printf_chk(1,&DAT_00105254,uVar3);
 uVar3 = param_socket_create();
 __printf_chk(1,&DAT_00105270,uVar3);
 iVar1 = param_shmget_shmat();
 uVar6 = 0x2a;
 if (iVar1 < 1) {
 uVar6 = 0xffffffff;
 }
 __printf_chk(1,&DAT_0010528c,uVar6);
 param_signal_handling();
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 uVar4 = __printf_chk(1,&DAT_001052a8);
 return uVar4;
}

// Function: param_pthread_create @ 0x104320
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 long in_FS_OFFSET;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_pthread_create @ 0x1043a0
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 long in_FS_OFFSET;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 7;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_pthread_join @ 0x104430
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned int *__arg;
 long lVar3;
 long lVar4;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 pthread_t local_88 [4];
 unsigned int local_68;
 unsigned int uStack_64;
 int aiStack_60 [7];
 unsigned int local_44;
 long local_40;
 __newthread = local_88;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __arg = &local_68;
 local_68 = 1;
 uStack_64 = 10;
 aiStack_60[0] = 0;
 aiStack_60[1] = 0xb;
 aiStack_60[6] = 0;
 aiStack_60[2] = 0x14;
 aiStack_60[3] = 0;
 aiStack_60[4] = 0x15;
 aiStack_60[5] = 0x1e;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_001044d9;
 }
 __arg = __arg + 3;
 __newthread = __newthread + 1;
 } while (&local_44 != __arg);
 iVar1 = 0;
 lVar3 = 0;
 do {
 iVar2 = pthread_join(local_88[lVar3],(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 lVar4 = lVar3 + 1;
 iVar1 = iVar1 + aiStack_60[lVar3 * 3];
 lVar3 = lVar4;
 } while (lVar4 != 3);
LAB_001044d9:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: call_pthread_join @ 0x104520
static void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: param_mutex_lock @ 0x104530
unsigned long long param_mutex_lock(uint param_1,int param_2)
{
 pthread_t __th;
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 pthread_t *ppVar3;
 pthread_t *__newthread;
 int local_3c [3];
 local_3c[0] = param_2;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 __newthread = __newthread + 1;
 ppVar3 = __ptr;
 } while (__newthread != __ptr + param_1);
 do {
 __th = *ppVar3;
 ppVar3 = ppVar3 + 1;
 pthread_join(__th,(void **)0x0);
 } while (ppVar3 != __ptr + param_1);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * local_3c[0]) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: param_condition_variable @ 0x104630
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 long in_FS_OFFSET;
 pthread_t local_28;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_28,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xfffffffe;
 pthread_cancel(local_20);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_condition_variable @ 0x104700
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: param_atomic_ops @ 0x104710
unsigned long long param_atomic_ops(uint param_1,unsigned int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 pthread_t *ppVar3;
 long lVar4;
 long in_FS_OFFSET;
 unsigned int local_4c;
 pthread_t local_48;
 long local_40;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_4c = param_2;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 }
 else {
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001047aa;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + param_1);
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 lVar4 = 0;
 do {
 ppVar3 = __ptr + lVar4;
 lVar4 = lVar4 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 } while ((int)lVar4 < (int)param_1);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001047aa:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_thread_local_storage @ 0x104880
unsigned long long param_thread_local_storage(int param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 void *pvVar2;
 unsigned long long uVar3;
 unsigned long uVar4;
 void **ppvVar5;
 unsigned long uVar6;
 int iVar7;
 unsigned long uVar8;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 uVar4 = (unsigned long)param_1;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = (pthread_t *)malloc(uVar4 * 8);
 __ptr_00 = (void **)malloc(uVar4 * 8);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (void **)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar7 = 0;
 iVar1 = 0;
 }
 else {
 uVar8 = 0;
 do {
 pvVar2 = malloc(0x10);
 uVar6 = uVar8 & 0xffffffff;
 __ptr_00[uVar8] = pvVar2;
 uVar8 = uVar8 + 1;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar6);
 } while (uVar8 != uVar4);
 uVar8 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[uVar8]);
 if (iVar1 != 0) {
 ppvVar5 = __ptr_00;
 do {
 pvVar2 = *ppvVar5;
 ppvVar5 = ppvVar5 + 1;
 free(pvVar2);
 } while (__ptr_00 + uVar8 + 1 != ppvVar5);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00104997;
 }
 uVar8 = uVar8 + 1;
 __newthread = __newthread + 1;
 } while (uVar8 != uVar4);
 iVar7 = 0;
 uVar8 = 0;
 iVar1 = 0;
 do {
 pthread_join(__ptr[uVar8],&local_48);
 iVar1 = iVar1 + *local_48;
 iVar7 = iVar7 + local_48[1];
 free(local_48);
 ppvVar5 = __ptr_00 + uVar8;
 uVar8 = uVar8 + 1;
 free(*ppvVar5);
 } while (uVar8 != uVar4);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 == iVar1) && (param_1 * 0x96 == iVar7)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00104997:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar3;
 }
 __stack_chk_fail();
}

// Function: test_thread_concurrency @ 0x104a70
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 long in_FS_OFFSET;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001052c4);
 local_24 = 7;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_001052e2,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_001052fe,uVar2);
 uVar2 = param_mutex_lock_constprop_0();
 __printf_chk(1,&DAT_0010531b,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_00105337,uVar2);
 uVar2 = param_atomic_ops_constprop_0();
 __printf_chk(1,&DAT_00105353,uVar2);
 param_thread_local_storage_constprop_0();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_0010536f);
 return;
 }
 __stack_chk_fail();
}

// Function: _fini @ 0x104ba0
static void _fini(void)
{
 return;
}

