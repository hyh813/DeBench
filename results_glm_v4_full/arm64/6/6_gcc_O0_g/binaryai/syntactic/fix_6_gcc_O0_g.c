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

/* NULL pointer definition */
#ifndef NULL
#define NULL ((void *)0)
#endif

/* Additional type definitions */
typedef unsigned int uint;
typedef int __pid_t;
typedef unsigned long pthread_t;
typedef int key_t;
typedef struct _IO_FILE FILE;
typedef unsigned char byte;

/* POSIX types */
typedef unsigned int socklen_t;
typedef void (*__sighandler_t)(int);
typedef struct { unsigned int __i[6]; } pthread_mutex_t;
typedef struct { unsigned int __i[6]; } pthread_cond_t;
typedef struct { unsigned int __i[6]; } pthread_attr_t;
typedef void *(*__start_routine)(void *);
typedef unsigned int __useconds_t;

/* Stat structure */
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
  unsigned long st_atime;
  unsigned long st_mtime;
  unsigned long st_ctime;
};

/* IPC permission structure */
struct ipc_perm {
  unsigned int key;
  unsigned int uid;
  unsigned int gid;
  unsigned int cuid;
  unsigned int cgid;
  unsigned short mode;
  unsigned short __pad1;
  unsigned long __seq;
};

/* Shared memory data structure */
struct shmid_ds {
  struct ipc_perm shm_perm;
  long shm_segsz;
  unsigned long shm_atime;
  unsigned long shm_dtime;
  unsigned long shm_ctime;
  unsigned int shm_cpid;
  unsigned int shm_lpid;
  unsigned long shm_nattch;
  unsigned long __pad1;
  unsigned long __pad2;
};

/* Atomic counter structure */
struct {
  union {
    unsigned long long _val;
    struct {
      unsigned int _0_4_;
      unsigned int _4_4_;
    };
  };
  char _4_1_;
} atomic_counter;

/* Condition variable data */
unsigned int data;
int ready;

/* Socket types */
struct sockaddr {
 unsigned short sa_family;
 char sa_data[14];
};

/* Global variables for stack checking and runtime */
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;
extern void *__dso_handle;
extern char completed_0;

/* Forward declarations */
void call_weak_fn(void);
int call_weak_fn_int(int ctx);
int main(int argc, char **argv, char **envp);
unsigned long stack0x00000008;

/* ARM64 atomic operation declarations */
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);

/* Thread function prototypes */
void * thread_compute(void *param_1);
void * thread_sum(void *param_1);
void * thread_increment(void *param_1);
void * consumer_thread(void *unused);
void * producer_thread(void *unused);
void * thread_atomic_increment(void *param_1);
void * thread_atomic_load_store(void *unused);
void * thread_tls_test(void *param_1);

/* ARM64 exclusive monitor functions */
bool ExclusiveMonitorPass(int *addr, int size);
int ExclusiveMonitorsStatus(void);

/* ARM64 LSE atomic operation helpers */
static inline void LOAcquire(void) {
    __asm__ volatile("dmb ish" ::: "memory");
}

static inline void LORelease(void) {
    __asm__ volatile("dmb ish" ::: "memory");
}

/* ARM64 system register access */
static inline unsigned long get_tpidr_el0(void) {
    unsigned long val;
    __asm__ volatile("mrs %0, tpidr_el0" : "=r"(val));
    return val;
}

#define tpidr_el0 get_tpidr_el0()

/* Data section references */
extern char DAT_00103a78;
extern char DAT_00103a70;
extern char DAT_00103a80;
extern char DAT_00103a90;
extern char DAT_00103a88;
extern char DAT_00103af8;
extern char DAT_00103b80;
extern char DAT_00103ba8;
extern char DAT_00103bc8;
extern char DAT_00103be8;
extern char DAT_00103c08;
extern char DAT_00103c28;
extern char DAT_00103c48;
extern char DAT_00103c68;
extern char DAT_00103c88;
extern char DAT_00103ca8;
extern char DAT_00103cc8;
extern char DAT_00103ce8;
extern char DAT_00103d08;
extern char DAT_00103d70;
extern char DAT_00103d90;
extern char DAT_00103db0;
extern char DAT_00103dd0;
extern char DAT_00103df0;
extern char DAT_00103e10;
extern char DAT_00103e30;
extern char DAT_00103e50;
extern char DAT_00103ea8;
extern char DAT_00103ec8;
extern char DAT_00103ee8;
extern char DAT_00103f08;
extern char DAT_00103f28;
extern char DAT_00103f48;
extern char DAT_00103f68;

/* Global variables for signal handling */
volatile int signal_received = 0;
volatile int signal_number = 0;

/* Global variables for thread synchronization */
volatile int shared_counter = 0;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

/* Temporary variables for atomic operations */
static int tmp_ldWn;
static int tmp_stWn;

// Decompiled by BinaryAI
// SHA256: eec78a13cb701b94fcf9de9642aad6b42c9c12b28f4a1c99c55e61fbf173c71a

// Function: _init @ 0x1013b0
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_001013d0 @ 0x1013d0
void FUN_001013d0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1013f0
extern void *memcpy(void *dest, const void *src, size_t n);

// Function: <EXTERNAL>::_exit @ 0x101400
extern void _exit(int __status);

// Function: <EXTERNAL>::strlen @ 0x101410
extern size_t strlen(const char *s);

// Function: <EXTERNAL>::raise @ 0x101420
extern int raise(int sig);

/* External function: __libc_start_main */
void __libc_start_main(int (*)(int, char **, char **), int, char **, int (*)(), void (*)(void), void *);

// Function: <EXTERNAL>::execl @ 0x101440
extern int execl(const char *pathname, const char *arg, ...);

// Function: <EXTERNAL>::listen @ 0x101450
extern int listen(int sockfd, int backlog);

// Function: <EXTERNAL>::shmdt @ 0x101460
extern int shmdt(const void *shmaddr);

// Function: <EXTERNAL>::bind @ 0x101470
extern int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);

// Function: <EXTERNAL>::bind @ 0x101470
extern int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);

// Function: <EXTERNAL>::__cxa_finalize @ 0x101480
extern void __cxa_finalize(void *dso_handle);

// Function: <EXTERNAL>::pipe @ 0x101490
extern int pipe(int pipefd[2]);

// Function: <EXTERNAL>::fork @ 0x1014a0
extern __pid_t fork(void);

// Function: <EXTERNAL>::fork @ 0x1014a0
extern __pid_t fork(void);

// Function: <EXTERNAL>::snprintf @ 0x1014b0
extern int snprintf(char *str, size_t size, const char *format, ...);

// Function: <EXTERNAL>::fileno @ 0x1014c0
extern int fileno(FILE *stream);

// Function: <EXTERNAL>::signal @ 0x1014d0
extern __sighandler_t signal(int signum, __sighandler_t handler);

// Function: <EXTERNAL>::fileno @ 0x1014c0

// Function: <EXTERNAL>::signal @ 0x1014d0
extern __sighandler_t signal(int signum, __sighandler_t handler);

// Function: <EXTERNAL>::fclose @ 0x1014e0
extern int fclose(FILE *stream);

// Function: <EXTERNAL>::fopen @ 0x1014f0
extern FILE *fopen(const char *pathname, const char *mode);

// Function: <EXTERNAL>::malloc @ 0x101500
extern void *malloc(size_t size);

// Function: <EXTERNAL>::fopen @ 0x1014f0

// Function: <EXTERNAL>::malloc @ 0x101500
extern void *malloc(size_t size);

// Function: <EXTERNAL>::setsockopt @ 0x101510
extern int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);

// Function: <EXTERNAL>::open @ 0x101520
extern int open(const char *pathname, int flags, ...);

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101530
extern int pthread_cond_signal(pthread_cond_t *cond);

// Function: <EXTERNAL>::memset @ 0x101540
extern void *memset(void *s, int c, size_t n);

// Function: <EXTERNAL>::shmat @ 0x101550
extern void *shmat(int shmid, const void *shmaddr, int shmflg);

// Function: <EXTERNAL>::sleep @ 0x101560
extern unsigned int sleep(unsigned int seconds);

// Function: <EXTERNAL>::htons @ 0x101570
extern uint16_t htons(uint16_t hostshort);

// Function: <EXTERNAL>::rewind @ 0x101580
extern void rewind(FILE *stream);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101590
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::close @ 0x1015a0
extern int close(int fd);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1015b0
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::stat @ 0x1015c0
extern int stat(const char *pathname, struct stat *statbuf);

// Function: <EXTERNAL>::write @ 0x1015d0
ssize_t write(int __fd,const void *__buf,size_t __n);

/* External function: __getauxval */
unsigned long __getauxval(unsigned long);

// Function: <EXTERNAL>::abort @ 0x1015f0
extern void abort(void);

// Function: <EXTERNAL>::puts @ 0x101600
extern int puts(char *__s);

// Function: <EXTERNAL>::memcmp @ 0x101610
extern int memcmp(const void *s1, const void *s2, size_t n);

// Function: <EXTERNAL>::strcmp @ 0x101620
extern int strcmp(const char *s1, const char *s2);

// Function: <EXTERNAL>::shmctl @ 0x101630
extern int shmctl(int shmid, int cmd, struct shmid_ds *buf);

// Function: <EXTERNAL>::fread @ 0x101640
extern size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);

// Function: <EXTERNAL>::ftok @ 0x101650
extern key_t ftok(const char *pathname, int proj_id);

// Function: <EXTERNAL>::ftok @ 0x101650
extern key_t ftok(const char *pathname, int proj_id);

// Function: <EXTERNAL>::free @ 0x101660
extern void free(void *ptr);

// Function: <EXTERNAL>::shmget @ 0x101670
extern int shmget(key_t key, size_t size, int shmflg);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101680
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);

// Function: <EXTERNAL>::strchr @ 0x101690
extern char *strchr(const char *s, int c);

// Function: <EXTERNAL>::fwrite @ 0x1016a0
extern size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);

// Function: <EXTERNAL>::pthread_create @ 0x1016b0
extern int pthread_create(pthread_t *thread, const pthread_attr_t *attr, __start_routine start_routine, void *arg);

// Function: <EXTERNAL>::wait @ 0x1016c0
extern __pid_t wait(int *wstatus);

// Function: <EXTERNAL>::socket @ 0x1016d0
extern int socket(int domain, int type, int protocol);

// Function: <EXTERNAL>::strcpy @ 0x1016e0
extern char *strcpy(char *dest, const char *src);

// Function: <EXTERNAL>::read @ 0x1016f0
extern ssize_t read(int fd, void *buf, size_t count);

// Function: <EXTERNAL>::strstr @ 0x101700
extern char *strstr(const char *haystack, const char *needle);

// Function: <EXTERNAL>::usleep @ 0x101710
extern int usleep(__useconds_t usec);

/* External function: __isoc99_sscanf */
int __isoc99_sscanf(const char *, const char *, ...);

// Function: <EXTERNAL>::strncpy @ 0x101730
extern char *strncpy(char *dest, const char *src, size_t n);

// Function: <EXTERNAL>::printf @ 0x101740
extern int printf(char *__format,...);

// Function: <EXTERNAL>::__errno_location @ 0x101750
extern int *__errno_location(void);

// Function: <EXTERNAL>::pthread_join @ 0x101760
extern int pthread_join(pthread_t thread, void **retval);

// Function: <EXTERNAL>::alarm @ 0x101770
extern unsigned int alarm(unsigned int seconds);

// Function: <EXTERNAL>::pthread_cancel @ 0x101780
extern int pthread_cancel(pthread_t thread);

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101790
extern int pthread_mutex_lock(pthread_mutex_t *mutex);

// Function: <EXTERNAL>::syscall @ 0x1017a0
extern long syscall(long number, ...);

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x1017b0
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);

// Function: <EXTERNAL>::waitpid @ 0x1017c0
extern __pid_t waitpid(__pid_t pid, int *wstatus, int options);

// Function: <EXTERNAL>::unlink @ 0x1017d0
extern int unlink(const char *pathname);

// Function: init_have_lse_atomics @ 0x101800
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 atomic_counter._4_1_ = extraout_var & 1;
 return;
}

// Function: _start @ 0x101840
void _start(unsigned long long param_1)
{
 __libc_start_main((int (*)(int, char **, char **))main,0,(char **)&stack0x00000008,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101874
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

int call_weak_fn_int(int ctx) {
  call_weak_fn();
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
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101900
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_strcpy @ 0x101954
unsigned int param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 return (unsigned int)strlen(param_1);
}

// Function: call_strcpy @ 0x101980
unsigned int call_strcpy(void)
{
 unsigned int uVar1;
 char auStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 uVar1 = param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_strcmp @ 0x1019e8
unsigned long long param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_strcmp @ 0x101a3c
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00103a78,&DAT_00103a70);
 iVar2 = param_strcmp(&DAT_00103a80,&DAT_00103a80);
 iVar3 = param_strcmp(&DAT_00103a90,&DAT_00103a88);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101aa8
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x101acc
void call_strlen(void)
{
 param_strlen("BinBench2025");
 return;
}

// Function: param_memcpy @ 0x101af0
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x101b20
int call_memcpy(void)
{
 int iVar1;
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 local_20 = 0;
 local_18 = 0;
 local_10 = 0;
 param_memcpy(&local_20,&local_38,0x14);
 iVar1 = (int)local_20 + (int)local_18 + local_10;
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1;
}

// Function: param_memcmp @ 0x101bb8
unsigned long long param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_memcmp @ 0x101c14
int call_memcmp(void)
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
 local_38 = 0x200000001;
 local_30 = 3;
 local_28 = 0x200000001;
 local_20 = 4;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = param_memcmp(&local_38,&local_28,0xc);
 iVar2 = param_memcmp(&local_38,&local_18,0xc);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: param_printf @ 0x101ce8
int param_printf(uint param_1,char *param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x101d1c
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,(char *)&DAT_00103af8);
 return uVar1;
}

// Function: param_scanf @ 0x101d44
int param_scanf(const char *param_1)
{
 int local_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_10);
 if (local_c == 2) {
 local_14 = local_14 + local_10;
 }
 else {
 local_14 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_14;
}

// Function: call_scanf @ 0x101dd8
int call_scanf(void)
{
 return param_scanf("123,456");
}

// Function: param_fopen_fclose @ 0x101df4
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

// Function: call_fopen_fclose @ 0x101e48
unsigned long long call_fopen_fclose(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x101e80
unsigned long long param_fread_fwrite(char *param_1)
{
 int iVar1;
 FILE *__s;
 unsigned long long uVar2;
 size_t sVar3;
 size_t sVar4;
 char acStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar3 = strlen("BinBench Test Data");
 sVar3 = fwrite("BinBench Test Data",1,sVar3,__s);
 sVar4 = strlen("BinBench Test Data");
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(acStack_28,1,sVar3,__s);
 acStack_28[sVar4] = '\0';
 fclose(__s);
 unlink(param_1);
 if ((sVar4 == sVar3) && (iVar1 = strcmp(acStack_28,"BinBench Test Data"), iVar1 == 0)) {
 uVar2 = 0x2a;
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
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x101fb8
unsigned long long call_fread_fwrite(void)
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}

// Function: param_malloc_free @ 0x101fd4
int param_malloc_free(unsigned long param_1)
{
 int iVar1;
 int *__ptr;
 unsigned long local_10;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 __ptr[local_10] = (int)local_10 * 10;
 }
 iVar1 = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x10209c
int call_malloc_free(void)
{
 return param_malloc_free(10);
}

// Function: param_memset @ 0x1020b4
int param_memset(void *param_1,size_t param_2)
{
 int local_14;
 unsigned long local_10;
 memset(param_1,0,param_2);
 local_14 = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_14 = local_14 + (uint)*(byte *)((long)param_1 + local_10);
 }
 return local_14;
}

// Function: call_memset @ 0x102130
int call_memset(void)
{
 int local_34;
 int local_30 [10];
 long local_8;
 local_8 = ___stack_chk_guard;
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 local_30[local_34] = 0xff;
 }
 param_memset(local_30,0x28);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_30[0] + local_30[9];
}

// Function: param_strchr_strstr @ 0x1021c8
int param_strchr_strstr(char *param_1,byte param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,(uint)param_2);
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = (int)pcVar3 - (int)param_1;
 }
 pcVar3 = strstr(param_1,param_3);
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = (int)pcVar3 - (int)param_1;
 }
 return iVar1 + iVar2;
}

// Function: call_strchr_strstr @ 0x10225c
int call_strchr_strstr(void)
{
 int iVar1;
 iVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return iVar1;
}

// Function: test_standard_library_functions @ 0x102294
int test_standard_library_functions(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(&DAT_00103b80);
 uVar2 = call_strcpy();
 iVar1 = printf(&DAT_00103ba8,uVar2 & 0xffffffff);
 uVar2 = call_strcmp();
 iVar1 = printf(&DAT_00103bc8,uVar2 & 0xffffffff);
 uVar2 = call_strlen();
 iVar1 = printf(&DAT_00103be8,uVar2 & 0xffffffff);
 uVar2 = call_memcpy();
 iVar1 = printf(&DAT_00103c08,uVar2 & 0xffffffff);
 uVar2 = call_memcmp();
 iVar1 = printf(&DAT_00103c28,uVar2 & 0xffffffff);
 uVar2 = call_printf();
 iVar1 = printf(&DAT_00103c48,uVar2 & 0xffffffff);
 uVar2 = call_scanf();
 iVar1 = printf(&DAT_00103c68,uVar2 & 0xffffffff);
 uVar2 = call_fopen_fclose();
 iVar1 = printf(&DAT_00103c88,uVar2 & 0xffffffff);
 uVar2 = call_fread_fwrite();
 iVar1 = printf(&DAT_00103ca8,uVar2 & 0xffffffff);
 uVar2 = call_malloc_free();
 iVar1 = printf(&DAT_00103cc8,uVar2 & 0xffffffff);
 uVar2 = call_memset();
 iVar1 = printf(&DAT_00103ce8,uVar2 & 0xffffffff);
 uVar2 = call_strchr_strstr();
 iVar1 = printf(&DAT_00103d08,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: param_linux_syscall @ 0x1023a4
int param_linux_syscall(unsigned long long param_1)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 uVar2 = syscall(0x38,0xffffff9c,param_1,0);
 iVar1 = (int)uVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(0x39,uVar2 & 0xffffffff);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x1023fc
unsigned long long call_linux_syscall(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_linux_syscall((unsigned long long)"/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x102434
unsigned long long param_win32_api(char *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 struct stat local_58;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,&local_58);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else if (local_58.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0x2a;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x1024bc
unsigned long long call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x1024d8
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 uint uVar1;
 uint local_14;
 __pid_t local_10;
 __pid_t local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_10 = fork();
 if (local_10 < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (local_10 == 0) {
 execl(param_1,param_1,(char *)param_2,(char *)0);
 _exit(0x7f);
 /* unreachable */
 }
 local_c = waitpid(local_10,(int *)&local_14,0);
 if (local_c < 0) {
 uVar1 = 0xfffffffe;
 }
 else if ((local_14 & 0x7f) == 0) {
 uVar1 = (int)local_14 >> 8 & 0xff;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_fork_exec @ 0x1025c0
unsigned long long call_fork_exec(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x1025fc
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned long long uVar3;
 size_t __n;
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
        __n = strlen("HelloPipe");
        write(local_2c,"HelloPipe",__n);
        close(local_2c);
        _exit(0);
        __n = 0; /* unreachable, but silences warning */
      }
 close(local_2c);
 sVar4 = read(local_30,auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(local_30);
 wait((int *)0x0);
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 else {
 uVar3 = 0x2a;
 }
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_pipe_communication @ 0x102720
unsigned long long call_pipe_communication(void)
{
 return param_pipe_communication();
}

// Function: param_socket_create @ 0x102734
unsigned long long param_socket_create(void)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_20;
 int local_1c;
 struct sockaddr local_18;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_1c = socket(2,1,0);
 if (local_1c < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_20 = 1;
 iVar1 = setsockopt(local_1c,1,2,&local_20,4);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_18,0,0x10);
 local_18.sa_family = 2;
 *(uint16_t *)local_18.sa_data = htons(0);
 local_18.sa_data[2] = '\0';
 local_18.sa_data[3] = '\0';
 local_18.sa_data[4] = '\0';
 local_18.sa_data[5] = '\0';
 iVar1 = bind(local_1c,&local_18,0x10);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(local_1c,5);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffc;
 }
 else {
 close(local_1c);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_socket_create @ 0x10286c
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102880
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long uVar2;
 unsigned long long *__s;
 size_t sVar3;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 uVar2 = 0xfffffffd;
 }
 else {
 *__s = 0x654d646572616853;
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 sVar3 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 uVar2 = sVar3 & 0xffffffff;
 }
 }
 }
 }
 return uVar2;
}

// Function: call_shmget_shmat @ 0x10298c
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: signal_handler @ 0x1029bc
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
}

// Function: param_signal_handling @ 0x1029f0
unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int local_4;
 p_Var1 = signal(10,(__sighandler_t)signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,(__sighandler_t)signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_4 = 1000;
 while ((signal_received == 0 && (0 < local_4))) {
 usleep(1000);
 local_4 = local_4 + -1;
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_4 = 2000;
 while ((signal_received == 0 && (0 < local_4))) {
 usleep(1000);
 local_4 = local_4 + -1;
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

// Function: call_signal_handling @ 0x102b64
unsigned long long call_signal_handling(void)
{
 return param_signal_handling();
}

// Function: test_system_calls @ 0x102b78
int test_system_calls(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(&DAT_00103d70);
 uVar2 = call_linux_syscall();
 iVar1 = printf(&DAT_00103d90,uVar2 & 0xffffffff);
 uVar2 = call_win32_api();
 iVar1 = printf(&DAT_00103db0,uVar2 & 0xffffffff);
 uVar2 = call_fork_exec();
 iVar1 = printf(&DAT_00103dd0,uVar2 & 0xffffffff);
 uVar2 = call_pipe_communication();
 iVar1 = printf(&DAT_00103df0,uVar2 & 0xffffffff);
 uVar2 = call_socket_create();
 iVar1 = printf(&DAT_00103e10,uVar2 & 0xffffffff);
 uVar2 = call_shmget_shmat();
 iVar1 = printf(&DAT_00103e30,uVar2 & 0xffffffff);
 uVar2 = call_signal_handling();
 iVar1 = printf(&DAT_00103e50,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: thread_compute @ 0x102c24
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x102c74
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 unsigned int local_24;
 int local_20;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_24 = param_1;
 local_20 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_24);
 if (local_20 == 0) {
 pthread_join(local_18,(void **)&local_10);
 local_1c = *local_10;
 free(local_10);
 uVar1 = local_1c;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_pthread_create @ 0x102d28
unsigned int call_pthread_create(void)
{
 return param_pthread_create(7);
}

// Function: thread_sum @ 0x102d40
void * thread_sum(void *param_1)
{
 int local_c;
 int *p = (int *)param_1;
 p[2] = 0;
 for (local_c = p[0]; local_c <= p[1]; local_c = local_c + 1) {
 p[2] = p[2] + local_c;
 }
 return NULL;
}

// Function: param_pthread_join @ 0x102dac
int param_pthread_join(void)
{
 int iVar1;
 int local_54;
 int local_50;
 int local_4c;
 pthread_t apStack_48 [3];
 struct {
   int start;
   int end;
   int result;
 } local_30[3];
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_30[0].start = 10;
 local_30[0].end = 1;
 local_30[1].start = 11;
 local_30[1].end = 30;
 local_30[2].start = 21;
 local_30[2].end = 20;
 local_10 = 0;
 for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
 iVar1 = pthread_create(apStack_48 + local_54,(pthread_attr_t *)0x0,(__start_routine)thread_sum,
 &local_30[local_54]);
 if (iVar1 != 0) {
 local_50 = -1;
 goto LAB_00102ed0;
 }
 }
 local_50 = 0;
 local_4c = 0;
 do {
 if (2 < local_4c) {
LAB_00102ed0:
 if (local_8 - ___stack_chk_guard == 0) {
 return local_50;
 }
 __stack_chk_fail();
 }
 iVar1 = pthread_join(apStack_48[local_4c],(void **)0x0);
 if (iVar1 != 0) {
 local_50 = -2;
 goto LAB_00102ed0;
 }
 local_50 = local_50 + local_30[local_4c].result;
 local_4c = local_4c + 1;
 } while( true );
}

// Function: call_pthread_join @ 0x102f00
int call_pthread_join(void)
{
 return param_pthread_join();
}

// Function: thread_increment @ 0x102f14
void * thread_increment(void *param_1)
{
 int iVar1;
 int local_8;
 iVar1 = *(int *)param_1;
 for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
 pthread_mutex_lock(&cond_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&cond_mutex);
 usleep(1000);
 }
 return NULL;
}

// Function: param_mutex_lock @ 0x102f98
unsigned long long param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 int local_28;
 int local_24;
 int local_14;
 int local_10;
 void *local_8;
 local_28 = param_2;
 local_24 = param_1;
 local_8 = malloc((long)param_1 << 3);
 if (local_8 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_8 + (long)local_14 * 8),(pthread_attr_t *)0x0
 ,(__start_routine)thread_increment,&local_28);
 if (iVar1 != 0) {
 free(local_8);
 uVar2 = 0xfffffffe;
 goto LAB_001030bc;
 }
 }
 for (local_10 = 0; local_10 < local_24; local_10 = local_10 + 1) {
 pthread_join(*(pthread_t *)((long)local_8 + (long)local_10 * 8),(void **)0x0);
 }
 free(local_8);
 if (local_24 * local_28 == shared_counter) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001030bc:
 return uVar2;
}

// Function: call_mutex_lock @ 0x1030c4
unsigned long long call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
}

// Function: consumer_thread @ 0x1030e0
void * consumer_thread(void *unused)
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

// Function: producer_thread @ 0x103164
void * producer_thread(void *unused)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: param_condition_variable @ 0x1031c8
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
	iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)consumer_thread,(void *)0x0);
	if (iVar1 == 0) {
		iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(__start_routine)producer_thread,(void *)0x0);
		if (iVar1 == 0) {
			pthread_join(local_18,(void **)&local_10);
			pthread_join(local_20,(void **)NULL);
			uVar2 = *local_10;
			free(local_10);
		}
		else {
			uVar2 = 0xffffffff;
		}
	}
	else {
		uVar2 = 0xffffffff;
	}
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x1032bc
unsigned int call_condition_variable(void)
{
 return param_condition_variable();
}

// Function: thread_atomic_increment @ 0x1032d0
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 long lVar2;
 int local_14;
 lVar2 = ___stack_chk_guard;
 iVar1 = *(int *)param_1;
 for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(local_14,local_14 + 1000,&atomic_counter._0_4_);
 }
 if (lVar2 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x1033bc
void * thread_atomic_load_store(void *unused)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return NULL;
}

// Function: param_atomic_ops @ 0x1033f8
unsigned long long param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_38;
 int local_34;
 int local_24;
 int local_20;
 int local_1c;
 pthread_t local_18;
 void *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38 = param_2;
 local_34 = param_1;
 local_10 = malloc((long)param_1 << 3);
 if (local_10 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter._0_4_ = 0;
 for (local_24 = 0; local_24 < local_34; local_24 = local_24 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_10 + (long)local_24 * 8),
 (pthread_attr_t *)0x0,(__start_routine)thread_atomic_increment,&local_38);
 if (iVar1 != 0) {
 free(local_10);
 uVar2 = 0xfffffffe;
 goto LAB_00103554;
 }
 }
	iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
	if (iVar1 == 0) {
		pthread_join(local_18,(void **)NULL);
	}
	else {
		free(local_10);
		uVar2 = 0xfffffffe;
	}
 for (local_20 = 0; local_20 < local_34; local_20 = local_20 + 1) {
 pthread_join(*(pthread_t *)((long)local_10 + (long)local_20 * 8),(void **)0x0);
 }
 local_1c = atomic_counter._0_4_;
 free(local_10);
 if (local_1c < 1) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0x2a;
 }
 }
LAB_00103554:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x103584
unsigned long long call_atomic_ops(void)
{
 return param_atomic_ops(4,500);
}

// Function: thread_tls_test @ 0x1035a0
void * thread_tls_test(void *param_1)
{
 unsigned int uVar1;
 long lVar2;
 long lVar3;
 unsigned int *puVar4;
 lVar2 = tpidr_el0;
 uVar1 = *(unsigned int *)(lVar2 + 0x10);
 lVar2 = tpidr_el0;
 lVar3 = tpidr_el0;
 *(int *)(lVar3 + 0x10) = *(int *)(lVar2 + 0x10) + 0x32;
 lVar2 = tpidr_el0;
 strncpy((char *)(lVar2 + 0x18),(char *)param_1,0x1f);
 puVar4 = (unsigned int *)malloc(8);
 *puVar4 = uVar1;
 lVar2 = tpidr_el0;
 puVar4[1] = *(unsigned int *)(lVar2 + 0x10);
 return (void *)puVar4;
}

// Function: param_thread_local_storage @ 0x103644
unsigned long long param_thread_local_storage(int param_1)
{
 void **ppvVar1;
 int iVar2;
 unsigned long long uVar3;
 void *pvVar4;
 uint local_48;
 int local_44;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int *local_28;
 void *local_20;
 void *local_18;
 int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = malloc((long)param_1 << 3);
 local_18 = malloc((long)param_1 << 3);
 if ((local_20 == (void *)0x0) || (local_18 == (void *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (local_48 = 0; (int)local_48 < param_1; local_48 = local_48 + 1) {
 ppvVar1 = (void **)((long)local_18 + (long)(int)local_48 * 8);
 pvVar4 = malloc(0x10);
 *ppvVar1 = pvVar4;
 snprintf(*(char **)((long)local_18 + (long)(int)local_48 * 8),0x10,"Thread-%d",(unsigned long)local_48
 );
 }
 for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
 iVar2 = pthread_create((pthread_t *)((long)local_20 + (long)local_44 * 8),
 (pthread_attr_t *)0x0,(__start_routine)thread_tls_test,
 *(void **)((long)local_18 + (long)local_44 * 8));
 if (iVar2 != 0) {
 for (local_40 = 0; local_40 <= local_44; local_40 = local_40 + 1) {
 free(*(void **)((long)local_18 + (long)local_40 * 8));
 }
 free(local_18);
 free(local_20);
 uVar3 = 0xfffffffe;
 goto LAB_001038c8;
 }
 }
 local_3c = 0;
 local_38 = 0;
 for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
 pthread_join(*(pthread_t *)((long)local_20 + (long)local_34 * 8),(void **)&local_28);
 local_10 = local_28;
 local_3c = local_3c + *local_28;
 local_38 = local_38 + local_28[1];
 free(local_28);
 free(*(void **)((long)local_18 + (long)local_34 * 8));
 }
 free(local_18);
 free(local_20);
 if ((local_3c == param_1 * 100) && (local_38 == param_1 * 0x96)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_001038c8:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x1038fc
unsigned long long call_thread_local_storage(void)
{
 return param_thread_local_storage(4);
}

// Function: test_thread_concurrency @ 0x103914
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(&DAT_00103ea8);
 uVar2 = call_pthread_create();
 iVar1 = printf(&DAT_00103ec8,uVar2 & 0xffffffff);
 uVar2 = call_pthread_join();
 iVar1 = printf(&DAT_00103ee8,uVar2 & 0xffffffff);
 uVar2 = call_mutex_lock();
 iVar1 = printf(&DAT_00103f08,uVar2 & 0xffffffff);
 uVar2 = call_condition_variable();
 iVar1 = printf(&DAT_00103f28,uVar2 & 0xffffffff);
 uVar2 = call_atomic_ops();
 iVar1 = printf(&DAT_00103f48,uVar2 & 0xffffffff);
 uVar2 = call_thread_local_storage();
 iVar1 = printf(&DAT_00103f68,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1039ac
int main(int argc,char **argv,char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x1039d0
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

// Function: __aarch64_ldadd4_acq_rel @ 0x103a10
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

// Function: _fini @ 0x103a40
void _fini(void)
{
 return;
}

