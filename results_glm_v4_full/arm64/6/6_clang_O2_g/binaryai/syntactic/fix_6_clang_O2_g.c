/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;

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
typedef unsigned char byte;
typedef unsigned int useconds_t;

/* Standard library includes */
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>

/* Signal handler type */
typedef void (*__sighandler_t)(int);

#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>
#include <stdbool.h>

/* Forward declarations for system types */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};
typedef struct sockaddr sockaddr;

struct stat;
struct shmid_ds;





/* Standard library function forward declarations */
int fileno(FILE *stream);
void rewind(FILE *stream);
int unlink(const char *pathname);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
key_t ftok(const char *pathname, int proj_id);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
int execl(const char *pathname, const char *arg, ...);
void _exit(int status);
pid_t waitpid(pid_t pid, int *wstatus, int options);
pid_t wait(int *wstatus);
pid_t fork(void);
int pipe(int pipefd[2]);
unsigned int sleep(unsigned int seconds);
unsigned int alarm(unsigned int seconds);
int raise(int sig);
int puts(const char *s);
int fclose(FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
char *strncpy(char *dest, const char *src, size_t n);
int snprintf(char *str, size_t size, const char *format, ...);
int pthread_cancel(pthread_t thread);
int usleep(useconds_t usec);
char *strcpy(char *dest, const char *src);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int printf(const char *format, ...);
int scanf(const char *format, ...);
FILE *fopen(const char *pathname, const char *mode);
void *malloc(size_t size);
void free(void *ptr);
void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
int stat(const char *pathname, struct stat *statbuf);
int socket(int domain, int type, int protocol);
int shmget(key_t key, size_t size, int shmflg);
__sighandler_t signal(int signum, __sighandler_t handler);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);

/* ARM64 atomic operation forward declarations */
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);

/* ARM64 exclusive monitor intrinsics */
static inline bool ExclusiveMonitorPass(void *addr, int size) {
    bool result;
    __asm__ volatile("ldxr %w0, [%1]" : "=r"(result) : "r"(addr) : "memory");
    return true;
}

/* glibc internal function forward declarations */
unsigned long __getauxval(unsigned long type);
void __libc_start_main(int (*main)(int, char**, char**), int argc, char** ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
void __gmon_start__(void);
void __cxa_finalize(void *d);
int __isoc99_sscanf(const char *str, const char *format, ...);
int *__errno_location(void);
long syscall(long number, ...);



static inline bool ExclusiveMonitorsStatus(void) {
    bool result;
    __asm__ volatile("clrex" ::: "memory");
    return false;
}

/* Load-Acquire / Store-Release helpers */
static inline void LOAcquire(void) {
    __asm__ volatile("dmb ishld" ::: "memory");
}

static inline void LORelease(void) {
    __asm__ volatile("dmb ish" ::: "memory");
}

/* Thread pointer register access for ARM64 */
static inline long tpidr_el0_read(void) {
    long val;
    __asm__ volatile("mrs %0, tpidr_el0" : "=r"(val));
    return val;
}

/* Forward declarations for user functions */
void call_weak_fn(void);
int main(int argc, char **argv, char **envp);
void signal_handler(int param_1);



/* Type for pthread start routine */
typedef void *(*__start_routine)(void *);



/* Decompiler helper types */
typedef unsigned char undefined3[3];
typedef unsigned char undefined5[5];

/* Decompiler concatenation macros */
#define CONCAT44(a,b) (((unsigned long long)(uint)(a) << 32) | ((unsigned long long)(uint)(b) & 0xffffffffULL))
#define CONCAT53(a,b) (((unsigned long long)(uint)(a) << 40) | ((unsigned long long)(uint)(b) & 0xffffffffffULL))
#define CONCAT35(a,b) (((unsigned long long)(uint)(a) << 24) | ((unsigned long long)(uint)(b) & 0xffffffULL))

/* Global variables */
union {
    int _0_4_;
    struct {
        char _0_1_;
        char _1_1_;
        char _2_1_;
        char _3_1_;
        char _4_1_;
    };
} atomic_counter;

int ready;
char data;
char completed_0;

/* External runtime symbol */
extern void *__dso_handle;

/* Data section references */
char DAT_00103156[8] = "Test";
char DAT_001031a4[32] = "strlen result: %zu\n";
char DAT_001031bf[32] = "strcmp result: %d\n";
char DAT_001031da[32] = "strlen: %d\n";
char DAT_001031f6[32] = "memcpy: %d\n";
char DAT_00103212[32] = "memcmp: %d\n";
char DAT_0010322e[32] = "printf: %d\n";
char DAT_0010324a[32] = "scanf: %d\n";
char DAT_00103267[32] = "fopen: %d\n";
char DAT_00103283[32] = "fread: %d\n";
char DAT_0010329f[32] = "malloc: %d\n";
char DAT_001032bb[32] = "memset: %d\n";
char DAT_001032d6[32] = "strchr/strstr: %d\n";
char DAT_00103325[32] = "open syscall: %d\n";
char DAT_00103341[32] = "stat: %d\n";
char DAT_0010335d[32] = "fork/exec: %d\n";
char DAT_00103379[32] = "pipe: %d\n";
char DAT_00103395[32] = "socket: %d\n";
char DAT_001033b1[32] = "shm: %d\n";
char DAT_001033cd[32] = "signal: %d\n";
char DAT_001033f3[32] = "pthread_create: %d\n";
char DAT_0010340f[32] = "pthread_join: %d\n";
char DAT_0010342c[32] = "mutex_lock: %d\n";
char DAT_00103448[32] = "cond_var: %d\n";
char DAT_00103464[32] = "atomic_ops: %d\n";
char DAT_00103480[32] = "thread_local_storage: %d\n";
char DAT_0010349c[32] = "Testing Standard Library Functions...\n";
char DAT_001034c0[32] = "Testing System Calls...\n";
char DAT_001034db[32] = "Testing Thread Concurrency...\n";

/* Signal handling globals */
int signal_received = 0;
unsigned int signal_number = 0;

/* Thread synchronization globals */
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;

/* Stack pointer placeholder for _start function */
void *stack0x00000008;

/* Atomic operation helpers */
int tmp_ldWn;
int tmp_stWn;

// Decompiled by BinaryAI
// SHA256: d6aaa242df9c1bc30c9343f19817b09538716090b3c4e25f1283822d11162de5

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

// Function: init_have_lse_atomics @ 0x101700
void init_have_lse_atomics(void)
{
 unsigned long extraout_var;
 extraout_var = __getauxval(0x10);
 atomic_counter._4_1_ = (char)(extraout_var & 1);
 return;
}

// Function: _start @ 0x101740
void _start(unsigned long long param_1)
{
 __libc_start_main(main,0,(char **)0,(void (*)(void))0,(void (*)(void))0,(void (*)(void))0,(void *)param_1);
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
 union { unsigned long long _0_8_; struct { char _0_1_; char _1_1_; char _2_1_; char _3_1_; char _4_1_; char _5_1_; char _6_1_; char _7_1_; }; } local_30;
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

// Function: call_printf @ 0x101954
int call_printf(void)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00103156);
 return iVar1;
}

// Function: param_scanf @ 0x10196c
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

// Function: call_scanf @ 0x1019ac
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

// Function: param_fopen_fclose @ 0x1019f4
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

// Function: call_fopen_fclose @ 0x101a3c
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

// Function: param_fread_fwrite @ 0x101a94
unsigned int param_fread_fwrite(char *param_1)
{
 unsigned int uVar1;
 FILE *__s;
 size_t sVar2;
 unsigned long local_50;
 undefined3 uStack_48;
 undefined5 local_45;
 unsigned int uStack_40;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(&local_50,1,0x12,__s);
 *(char *)((long)&local_50 + sVar2) = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if (sVar2 == 0x12) {
 uVar1 = 0x2a;
 if ((local_50 ^ 0x68636e65426e6942 | (uint64_t)(*(uint64_t*)(char*)(&local_45 - 2)) ^ 0x6144207473655420 |
 (uint64_t)(*(uint64_t*)(char*)(&uStack_40 - 1)) ^ 0x61746144207473) != 0) {
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

// Function: call_fread_fwrite @ 0x101ba8
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101bb4
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
 if (param_1 == 0) goto LAB_00101c58;
 if (param_1 < 8) {
 uVar1 = 0;
LAB_00101c34:
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
 if (uVar1 != param_1) goto LAB_00101c34;
 }
 iVar6 = *__ptr;
LAB_00101c58:
 iVar7 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar7 + iVar6;
}

// Function: call_malloc_free @ 0x101c78
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x101c80
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

// Function: call_memset @ 0x101d2c
unsigned long long call_memset(void)
{
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
 uint uVar5;
 union { unsigned long long _0_8_; struct { char _0_1_; char _1_1_; char _2_1_; char _3_1_; char _4_1_; char _5_1_; char _6_1_; char _7_1_; }; } local_50;
 char local_48;
 int local_14;
 puts(DAT_0010349c);
 local_48 = 0;
 local_50._0_1_ = 'H';
 local_50._1_1_ = 'e';
 local_50._2_1_ = 'l';
 local_50._3_1_ = 'l';
 local_50._4_1_ = 'o';
 local_50._5_1_ = 'L';
 local_50._6_1_ = 'i';
 local_50._7_1_ = 'b';
 sVar3 = strlen((char *)&local_50);
 printf(DAT_001031a4,sVar3);
 printf(DAT_001031bf,0);
 printf(DAT_001031da,0xc);
 printf(DAT_001031f6,0x5a);
 uVar5 = 0xffffffff;
 printf(DAT_00103212,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,DAT_00103156);
 printf(DAT_0010322e,(unsigned long)uVar1);
 {
 int scan_val1, scan_val2;
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&scan_val1,&scan_val2);
 if (iVar2 == 2) {
 uVar1 = scan_val2 + scan_val1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 }
 printf(DAT_0010324a,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (iVar2 < 0) {
 uVar5 = 0xffffffff;
 }
 }
 printf(DAT_00103267,(unsigned long)uVar5);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00103283,uVar4 & 0xffffffff);
 printf(DAT_0010329f,0x5a);
 printf(DAT_001032bb,0);
 iVar2 = printf(DAT_001032d6,0xf);
 return iVar2;
}

// Function: param_linux_syscall @ 0x101f30
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

// Function: call_linux_syscall @ 0x101f84
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

// Function: param_win32_api @ 0x101fe4
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_60;
 iVar1 = stat(param_1,&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x102020
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_60;
 iVar1 = stat("/etc/passwd",&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x102064
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

// Function: call_fork_exec @ 0x1020ec
unsigned int call_fork_exec(void)
{
 __pid_t _Var1;
 uint local_14;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if ((-1 < _Var1) && ((local_14 & 0x7f) == 0)) {
 if ((local_14 & 0xff00) == 0) {
 return 0x2a;
 }
 return 0xffffffff;
 }
 }
 return 0xffffffff;
}

// Function: param_pipe_communication @ 0x102160
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

// Function: param_socket_create @ 0x10221c
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

// Function: param_shmget_shmat @ 0x1022e4
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
 shmctl(iVar1,0,(void *)0x0);
 }
 }
 goto LAB_00102390;
 }
 }
 sVar2 = 0xffffffff;
LAB_00102390:
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x1023b4
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

// Function: param_signal_handling @ 0x1023d4
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 unsigned long long uVar4;
 int iVar5;
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xffffffff;
 }
 else {
 p_Var3 = signal(0xe,signal_handler);
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
 usleep((useconds_t)1000);
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

// Function: signal_handler @ 0x102508
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = (unsigned int)param_1;
 return;
}

// Function: test_system_calls @ 0x102524
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
 puts(DAT_001034c0);
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
 printf(DAT_00103325,(unsigned long)uVar1);
 iVar2 = stat("/etc/passwd",(struct stat *)local_a0);
 if (((struct stat *)local_a0)->st_size < 1) {
 uVar6 = 0xfffffffe;
 }
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(DAT_00103341,(unsigned long)uVar6);
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
 goto LAB_001025f4;
 }
 }
 uVar4 = 0xffffffff;
LAB_001025f4:
 iVar2 = printf(DAT_0010335d,uVar4);
 uVar4 = param_pipe_communication();
 iVar2 = printf(DAT_00103379,uVar4 & 0xffffffff);
 uVar4 = param_socket_create();
 iVar2 = printf(DAT_00103395,uVar4 & 0xffffffff);
 iVar2 = param_shmget_shmat();
 uVar6 = 0x2a;
 if (iVar2 < 1) {
 uVar6 = 0xffffffff;
 }
 iVar2 = printf(DAT_001033b1,(unsigned long)uVar6);
 uVar4 = param_signal_handling();
 iVar2 = printf(DAT_001033cd,uVar4 & 0xffffffff);
 return iVar2;
}

// Function: thread_compute @ 0x102694
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x1026c0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = param_1;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,(void *)&local_24);
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

// Function: call_pthread_create @ 0x102724
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,(void *)&local_24);
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

// Function: thread_sum @ 0x10278c
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *p = (uint *)param_1;
 uVar1 = p[0];
 uVar2 = p[1];
 p[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 p[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((unsigned long)(uVar2 + ~uVar1) * (unsigned long)(uVar2 - uVar1) >> 1);
 }
 return NULL;
}

// Function: param_pthread_join @ 0x1027c0
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
 if (((iVar1 == 0) &&
 (iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_54), iVar1 == 0))
 && (iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_sum,&local_48), iVar1 == 0))
 {
 iVar2 = pthread_join(local_38,(void **)0x0);
 iVar1 = local_58;
 if (((iVar2 == 0) && (iVar3 = pthread_join(local_30,(void **)0x0), iVar2 = local_4c, iVar3 == 0)
 ) && (iVar3 = pthread_join(local_28,(void **)0x0), iVar3 == 0)) {
 return local_40 + iVar2 + iVar1;
 }
 iVar1 = -2;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: thread_increment @ 0x1028c8
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep((useconds_t)1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return NULL;
}

// Function: param_mutex_lock @ 0x102930
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
 uVar2 = 0xffffffff;
 }
 else {
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
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x102a1c
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x102a28
void *consumer_thread(void *unused)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 (void)unused;
 pthread_mutex_lock(&cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}

// Function: producer_thread @ 0x102ab4
void *producer_thread(void *unused)
{
 (void)unused;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: param_condition_variable @ 0x102b10
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,NULL);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,NULL);
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

// Function: thread_atomic_increment @ 0x102bbc
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,(int *)&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,(int *)&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x102c20
void *thread_atomic_load_store(void *unused)
{
 (void)unused;
 atomic_counter._0_4_ = (int)atomic_counter._0_4_ + 100;
 return NULL;
}

// Function: param_atomic_ops @ 0x102c3c
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
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,NULL);
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
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x102d50
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x102d5c
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = tpidr_el0_read();
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}

// Function: param_thread_local_storage @ 0x102dac
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
 pthread_join(*ppVar6,(void **)&local_58);
 iVar1 = *local_58 + iVar1;
 iVar7 = local_58[1] + iVar7;
 free(local_58);
 free(*ppvVar8);
 param_1 = param_1 - 1;
 ppVar6 = ppVar6 + 1;
 ppvVar8 = ppvVar8 + 1;
 } while (param_1 != 0);
 goto LAB_00102ec8;
 }
 }
 }
 iVar1 = 0;
 iVar7 = 0;
LAB_00102ec8:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar7 != iVar3 * 0x96 || iVar1 != iVar3 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x102f48
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x102f50
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 uint *local_30;
 unsigned int local_24;
 pthread_t local_8;
 puts(DAT_001034db);
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,(void *)&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,(void **)&local_30);
 uVar3 = *local_30;
 free(local_30);
 }
 else {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(DAT_001033f3,(unsigned long)uVar3);
 uVar2 = param_pthread_join();
 printf(DAT_0010340f,uVar2 & 0xffffffff);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf(DAT_0010342c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable();
 printf(DAT_00103448,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf(DAT_00103464,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf(DAT_00103480,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x103048
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103070
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if ((int)atomic_counter._4_1_ != '\0') {
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

// Function: __aarch64_ldadd4_acq_rel @ 0x1030b0
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if ((int)atomic_counter._4_1_ == '\0') {
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

// Function: _fini @ 0x1030e0
void _fini(void)
{
 return;
}

