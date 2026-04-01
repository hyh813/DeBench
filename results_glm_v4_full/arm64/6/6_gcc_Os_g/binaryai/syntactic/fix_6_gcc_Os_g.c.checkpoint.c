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

/* Additional type definitions for compilation */
typedef unsigned int uint;
typedef int __pid_t;
typedef int pid_t;
typedef int key_t;
typedef unsigned int __useconds_t;
typedef unsigned char byte;
#define NULL ((void *)0)

/* IPC permission structure */
struct ipc_perm {
 unsigned int __key;
 unsigned int uid;
 unsigned int gid;
 unsigned int cuid;
 unsigned int cgid;
 unsigned int mode;
 unsigned int __seq;
};

/* Forward declarations for types from system headers */
struct __pthread_internal_list;
typedef struct __pthread_internal_list __pthread_list_t;
typedef unsigned long pthread_t;
typedef union { char __size[40]; long long __align; } pthread_mutex_t;
typedef union { char __size[48]; long long __align; } pthread_cond_t;
typedef union { char __size[56]; long long __align; } pthread_attr_t;
typedef void *(*__start_routine)(void *);
typedef void (*__sighandler_t)(int);

/* File I/O types from stdio.h */
typedef struct _IO_FILE FILE;

/* External stack canary variable */
long __stack_chk_guard = 0;

/* Temporary variables for atomic operations - now defined */
int tmp_ldWn;
int tmp_stWn;

/* Global variables for threading */
_Bool __aarch64_have_lse_atomics;
int shared_counter;
int ready;
int data;
int atomic_counter;
int signal_received;
int signal_number;
char completed_0;
void *__dso_handle;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
pthread_mutex_t counter_mutex;
unsigned long long stack0x00000008;

/* AArch64 system register access - using regular variable for portability */
long tpidr_el0;

/* Data symbols from decompilation */
const char DAT_00103181[] = "hello";
const char DAT_00103185[] = "hello";
const char DAT_00103189[] = "world";
const char DAT_0010318d[] = "different";
const char DAT_00103191[] = "test";
const char DAT_0010320d[] = "=== Testing Standard Library Functions ===";
const char DAT_00103231[] = "strcpy: %d\n";
const char DAT_0010324c[] = "strcmp: %d\n";
const char DAT_00103267[] = "strlen: %d\n";
const char DAT_00103283[] = "memcpy: %d\n";
const char DAT_0010329f[] = "memcmp: %d\n";
const char DAT_001032bb[] = "printf: %d\n";
const char DAT_001032d7[] = "scanf: %d\n";
const char DAT_001032f4[] = "fopen/fclose: %d\n";
const char DAT_00103310[] = "fread/fwrite: %d\n";
const char DAT_0010332c[] = "malloc/free: %d\n";
const char DAT_00103348[] = "memset: %d\n";
const char DAT_00103363[] = "strchr/strstr: %d\n";
const char DAT_001033b2[] = "=== Testing System Calls ===";
const char DAT_001033cd[] = "syscall: %d\n";
const char DAT_001033e9[] = "stat: %d\n";
const char DAT_00103405[] = "fork/exec: %d\n";
const char DAT_00103421[] = "pipe: %d\n";
const char DAT_0010343d[] = "socket: %d\n";
const char DAT_00103459[] = "shm: %d\n";
const char DAT_00103475[] = "signal: %d\n";
const char DAT_0010349b[] = "=== Testing Thread Concurrency ===";
const char DAT_001034b9[] = "pthread_create: %d\n";
const char DAT_001034d5[] = "pthread_join: %d\n";
const char DAT_001034f2[] = "mutex_lock: %d\n";
const char DAT_0010350e[] = "condition_var: %d\n";
const char DAT_0010352a[] = "atomic_ops: %d\n";
const char DAT_00103546[] = "thread_local_storage: %d\n";

/* Socket types */
typedef unsigned int socklen_t;
struct sockaddr {
 unsigned short sa_family;
 char sa_data[14];
};
typedef struct sockaddr sockaddr;

/* Stat structure */
struct stat_struct {
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
 long st_atime;
 long st_mtime;
 long st_ctime;
};
typedef struct stat_struct stat_struct;

/* Shared memory structure */
struct shmid_ds {
 struct ipc_perm shm_perm;
 size_t shm_segsz;
 long shm_atime;
 long shm_dtime;
 long shm_ctime;
 unsigned long __shm_internal1;
 void *__shm_internal2;
 void *__shm_internal3;
};
typedef struct shmid_ds shmid_ds;

// Decompiled by BinaryAI
// SHA256: d0a5d247f074f8ff36d0e8903aa6968ee045d38c1260b060a9464673caef029e

/* Forward declarations */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);
int __my_init(void *ctx);
void __my_fini(void);
unsigned long __getauxval(unsigned long type);
void *malloc(size_t size);
void free(void *ptr);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int usleep(unsigned int useconds);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
unsigned int sleep(unsigned int seconds);
char *strncpy(char *dest, const char *src, size_t n);
int __isoc99_sscanf(const char *str, const char *format, ...);
FILE *fopen(const char *pathname, const char *mode);
int fclose(FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
void rewind(FILE *stream);
int fileno(FILE *stream);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
int unlink(const char *pathname);
int strcmp(const char *s1, const char *s2);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
int puts(const char *s);
long syscall(long number, ...);
int *__errno_location(void);
int stat(const char *pathname, struct stat_struct *statbuf);
__pid_t fork(void);
int execl(const char *pathname, const char *arg, ...);
__pid_t waitpid(__pid_t pid, int *wstatus, int options);
int pipe(int pipefd[2]);
int close(int fd);
ssize_t write(int fd, const void *buf, size_t count);
ssize_t read(int fd, void *buf, size_t count);
__pid_t wait(int *wstatus);
int socket(int domain, int type, int protocol);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
key_t ftok(const char *pathname, int proj_id);
int shmget(key_t key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
__sighandler_t signal(int signum, __sighandler_t handler);
void _exit(int status);
int open(const char *pathname, int flags, unsigned int mode);
char *strcpy(char *dest, const char *src);
int raise(int sig);
unsigned int alarm(unsigned int seconds);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_cancel(pthread_t thread);
int __printf_chk(int flag, const char *format, ...);
void __stack_chk_fail(void);
size_t strlen(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *s, int c, size_t n);

/* AArch64 atomic intrinsics - implementations for portability */
int ExclusiveMonitorPass(void *addr, int size) {
 (void)addr; (void)size;
 return 1;
}
int ExclusiveMonitorsStatus(void) {
 return 0;
}
void LOAcquire(void) {
}
void LORelease(void) {
}

/* Weak function implementation */
void call_weak_fn(void) {
}

// Function: __my_init @ 0x101388
int __my_init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_001013a0 @ 0x1013a0
void FUN_001013a0(void)
{
 ((void (*)(void))0)();
 return;
}































































// Function: main @ 0x1017c0
int main(int __argc, char **__argv)
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
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

/* Init wrapper for __libc_start_main */
static void _init_wrapper(void) {
 __my_init((void *)0);
}

/* Fini wrapper for __libc_start_main */
static void _fini_wrapper(void) {
 __my_fini();
}













// Function: signal_handler @ 0x101954
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x10196c
void * thread_sum(void *param_1)
{
 int iVar1;
 int *piVar1 = (int *)param_1;
 iVar1 = *piVar1;
 piVar1[2] = 0;
 for (; iVar1 <= piVar1[1]; iVar1 = iVar1 + 1) {
 piVar1[2] = piVar1[2] + iVar1;
 }
 return NULL;
}

// Function: thread_compute @ 0x101998
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return NULL;
}

// Function: thread_increment @ 0x1019c4
void * thread_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return NULL;
}

// Function: consumer_thread @ 0x101a30
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
 return NULL;
}

// Function: producer_thread @ 0x101a98
void * producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: thread_atomic_increment @ 0x101af0
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x101b54
void * thread_atomic_load_store(void *param_1)
{
 atomic_counter = atomic_counter + 100;
 return NULL;
}

// Function: thread_tls_test @ 0x101b74
void * thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return NULL;
}

// Function: param_strcpy @ 0x101bc4
int param_strcpy(char *param_1,char *param_2)
{
 extern char *__builtin_strcpy(char *, const char *);
 __builtin_strcpy(param_1,param_2);
 return 0x2a;
}

// Function: call_strcpy @ 0x101bec
unsigned int call_strcpy(int param_1)
{
 char auStack_28 [32];
 long local_8;
 local_8 = __stack_chk_guard;
 param_strcpy(auStack_28,"HelloLib");
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return 0x2a;
}

// Function: param_strcmp @ 0x101c40
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 extern int __builtin_strcmp(const char *, const char *);
 iVar2 = __builtin_strcmp(param_1,param_2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_strcmp @ 0x101c60
unsigned int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp((char *)&DAT_00103185,(char *)&DAT_00103181);
 iVar2 = param_strcmp((char *)&DAT_00103189,(char *)&DAT_00103189);
 iVar3 = param_strcmp((char *)&DAT_00103191,(char *)&DAT_0010318d);
 return (unsigned int)(iVar1 + iVar2 + iVar3);
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
 return 0xc;
}

// Function: param_memcpy @ 0x101cdc
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101d00
unsigned int call_memcpy(void)
{
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 int local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 local_20 = 0;
 local_18 = 0;
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 local_10 = 0;
 param_memcpy(&local_20,&local_38,0x14);
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return 0x2a;
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
unsigned int call_memcmp(void)
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
 local_8 = __stack_chk_guard;
 local_20 = 4;
 local_38 = 0x200000001;
 local_30 = 3;
 local_28 = 0x200000001;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = param_memcmp(&local_38,&local_28,0xc);
 iVar2 = param_memcmp(&local_38,&local_18,0xc);
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return 0x2a;
}

// Function: param_printf @ 0x101e5c
void param_printf(unsigned int param_1,char *param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
}

// Function: call_printf @ 0x101e74
unsigned int call_printf(void)
{
 param_printf(0x2a,"Test");
 return 0x2a;
}

// Function: param_scanf @ 0x101e84
void param_scanf(const char *param_1)
{
 int iVar1;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = __stack_chk_guard;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&iStack_c);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
}

// Function: call_scanf @ 0x101ef4
unsigned int call_scanf(void)
{
 param_scanf("123,456");
 return 0x2a;
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
 local_8 = __stack_chk_guard;
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
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_fread_fwrite @ 0x102084
unsigned int call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0x2a;
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
unsigned int call_malloc_free(void)
{
 param_malloc_free(10);
 return 0x2a;
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
unsigned int call_memset(void)
{
 long lVar1;
 int local_30 [10];
 long local_8;
 local_8 = __stack_chk_guard;
 lVar1 = 0;
 do {
 local_30[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 param_memset(local_30,0x28);
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return 0x2a;
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
unsigned int call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return 0x2a;
}

// Function: test_standard_library_functions @ 0x102234
void test_standard_library_functions(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_0010320d);
 uVar2 = call_strcpy(iVar1);
 __printf_chk(1,DAT_00103231,uVar2);
 uVar2 = call_strcmp();
 __printf_chk(1,DAT_0010324c,uVar2);
 __printf_chk(1,DAT_00103267,0xc);
 uVar2 = call_memcpy();
 __printf_chk(1,DAT_00103283,uVar2);
 uVar2 = call_memcmp();
 __printf_chk(1,DAT_0010329f,uVar2);
 uVar2 = call_printf();
 __printf_chk(1,DAT_001032bb,uVar2);
 uVar2 = call_scanf();
 __printf_chk(1,DAT_001032d7,uVar2);
 uVar2 = call_fopen_fclose();
 __printf_chk(1,DAT_001032f4,uVar2);
 uVar2 = call_fread_fwrite();
 __printf_chk(1,DAT_00103310,uVar2);
 uVar2 = call_malloc_free();
 __printf_chk(1,DAT_0010332c,uVar2);
 uVar2 = call_memset();
 __printf_chk(1,DAT_00103348,uVar2);
 uVar2 = call_strchr_strstr();
 __printf_chk(1,DAT_00103363,uVar2);
 return;
}

// Function: param_linux_syscall @ 0x102368
int param_linux_syscall(char *param_1)
{
 int iVar1;
 long lVar2;
 int *piVar3;
 lVar2 = syscall(0x38,0xffffff9c,(unsigned long long)param_1,0);
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
unsigned int call_linux_syscall(int unused)
{
 int iVar1;
 unsigned int uVar2;
 (void)unused;
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x1023e4
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 stat_struct local_58;
 long local_8;
 local_8 = __stack_chk_guard;
 iVar1 = stat(param_1,&local_58);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - __stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_win32_api @ 0x102450
unsigned int call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x10245c
void param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 long local_8;
 local_8 = __stack_chk_guard;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,(char *)param_2,0);
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
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_fork_exec @ 0x102510
unsigned int call_fork_exec(void)
{
 unsigned int uVar2;
 param_fork_exec("/bin/true",0);
 uVar2 = 0x2a;
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
 local_8 = __stack_chk_guard;
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
 if (local_8 - __stack_chk_guard == 0) {
 return uVar3;
 }
 __stack_chk_fail();
}

// Function: param_socket_create @ 0x102628
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_1c;
 sockaddr local_18;
 long local_8;
 local_8 = __stack_chk_guard;
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
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
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
uintptr_t param_signal_handling(void)
{
 __sighandler_t p_Var1;
 int iVar2;
 p_Var1 = signal(10,(__sighandler_t)signal_handler);
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,(__sighandler_t)signal_handler);
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
 return (uintptr_t)p_Var1;
}

// Function: test_system_calls @ 0x10291c
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001033b2);
 uVar2 = call_linux_syscall(iVar1);
 __printf_chk(1,DAT_001033cd,uVar2);
 uVar2 = call_win32_api();
 __printf_chk(1,DAT_001033e9,uVar2);
 uVar2 = call_fork_exec();
 __printf_chk(1,DAT_00103405,uVar2);
 uVar2 = param_pipe_communication();
 __printf_chk(1,DAT_00103421,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,DAT_0010343d,uVar2);
 uVar2 = call_shmget_shmat();
 __printf_chk(1,DAT_00103459,uVar2);
 uVar2 = param_signal_handling();
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
 local_8 = __stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - __stack_chk_guard != 0) {
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
 local_8 = __stack_chk_guard;
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
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
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
 (void *(*)(void *))thread_increment,&local_4);
 } while (iVar3 == 0);
 free(__ptr);
 uVar4 = 0xfffffffe;
 }
 return uVar4;
}

// Function: call_mutex_lock @ 0x102c60
unsigned int call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
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
 local_8 = __stack_chk_guard;
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
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
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
 local_8 = __stack_chk_guard;
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
 if (iVar2 < 1) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00102e28;
 }
 lVar1 = lVar4 * 8;
 lVar4 = lVar4 + 1;
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar1),(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_atomic_increment,&local_14);
 } while (iVar2 == 0);
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
LAB_00102e28:
 if (local_8 - __stack_chk_guard == 0) {
 return uVar3;
 }
 __stack_chk_fail();
}

// Function: call_atomic_ops @ 0x102e78
unsigned int call_atomic_ops(void)
{
 return param_atomic_ops(4,500);
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
 local_8 = __stack_chk_guard;
 __ptr = malloc(uVar7);
 __ptr_00 = malloc(uVar7);
 if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 for (uVar7 = 0; iVar6 = (int)param_1, (int)uVar7 < iVar6; uVar7 = uVar7 + 1) {
 pvVar5 = malloc(0x10);
 *(void **)((long)__ptr_00 + uVar7 * 8) = pvVar5;
 __snprintf_chk((char *)pvVar5,0x10,1,0x10,"Thread-%d",uVar7 & 0xffffffff);
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
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
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
 call_pthread_create();
 uVar2 = 0x2a;
 __printf_chk(1,DAT_001034b9,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,DAT_001034d5,uVar2);
 uVar2 = call_mutex_lock();
 __printf_chk(1,DAT_001034f2,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,DAT_0010350e,uVar2);
 uVar2 = call_atomic_ops();
 __printf_chk(1,DAT_0010352a,uVar2);
 call_thread_local_storage();
 __printf_chk(1,DAT_00103546,0x2a);
 return;
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

// Function: __my_fini @ 0x103160
void __my_fini(void)
{
 return;
}

