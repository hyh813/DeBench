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

/* Additional type definitions */
typedef int pid_t;
typedef unsigned int pthread_t;
typedef pid_t __pid_t;
typedef unsigned char byte;
typedef uint32_t undefined4;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef void (*__sighandler_t)(int);
typedef struct _IO_FILE FILE;
typedef int key_t;
typedef int atomic_int;
typedef unsigned long ulong;
typedef struct { unsigned long __dummy; } pthread_attr_t;
typedef void (*code)(void);
typedef int undefined;
typedef unsigned int useconds_t;
typedef unsigned int socklen_t;
typedef unsigned int mode_t;

/* Socket address structures */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};
typedef struct sockaddr sockaddr;

struct in_addr {
    uint32_t s_addr;
};

struct sockaddr_in {
    unsigned short sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};
typedef struct sockaddr_in sockaddr_in;

/* File status structure */
struct stat_struct {
    uint32_t st_dev;
    uint32_t st_ino;
    uint32_t st_mode;
    uint32_t st_nlink;
    uint32_t st_uid;
    uint32_t st_gid;
    uint32_t st_rdev;
    uint64_t st_size;
    uint32_t st_blksize;
    uint64_t st_blocks;
    uint32_t st_atime;
    uint32_t st_mtime;
    uint32_t st_ctime;
};
typedef struct stat_struct stat_t;

/* Shared memory control structure */
struct shmid_ds {
    uint32_t shm_perm;
    uint32_t shm_segsz;
    uint32_t shm_atime;
    uint32_t shm_dtime;
    uint32_t shm_ctime;
    int shm_cpid;
    int shm_lpid;
    uint64_t shm_nattch;
    uint64_t __unused1;
    uint64_t __unused2;
};
typedef struct shmid_ds shmid_ds;

/* Thread data structure */
struct ThreadData {
    int start;
    int end;
    int result;
};
typedef struct ThreadData ThreadData;

/* Global variable declarations */
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;
extern int data;
extern int ready;
extern char __aarch64_have_lse_atomics;
extern int shared_counter;
extern int atomic_counter;
extern int signal_received;
extern int signal_number;
extern char completed_0;
extern void *__dso_handle;
extern unsigned long tpidr_el0;

/* Mutex and condition variable types */
typedef struct {
    unsigned long __data[5];
} pthread_mutex_t;

typedef struct {
    unsigned long __data[6];
} pthread_cond_t;

/* Global mutex and condition variables */
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;

/* Function prototypes */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
unsigned long __getauxval(unsigned long type);
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
void *malloc(size_t size);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int usleep(useconds_t usec);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
unsigned int sleep(unsigned int seconds);
int pthread_cond_signal(pthread_cond_t *cond);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int __isoc99_sscanf(const char *str, const char *format, ...);
void __stack_chk_fail(void);
FILE *fopen(const char *filename, const char *mode);
int fileno(FILE *stream);
int fclose(FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
void rewind(FILE *stream);
int unlink(const char *pathname);
void free(void *ptr);
void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
int puts(const char *s);
char *strstr(const char *haystack, const char *needle);
long syscall(long number, ...);
int *__errno_location(void);
pid_t fork(void);
int execl(const char *path, const char *arg, ...);
void _exit(int status);
int pipe(int pipefd[2]);
ssize_t write(int fd, const void *buf, size_t count);
ssize_t read(int fd, void *buf, size_t count);
int close(int fd);
pid_t waitpid(pid_t pid, int *status, int options);
pid_t wait(int *status);
int socket(int domain, int type, int protocol);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int open(const char *pathname, int flags, mode_t mode);
key_t ftok(const char *pathname, int proj_id);
int shmget(key_t key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
int stat(const char *pathname, struct stat *statbuf);
__sighandler_t signal(int signum, __sighandler_t handler);
int raise(int sig);
unsigned int alarm(unsigned int seconds);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_cancel(pthread_t thread);
int __printf_chk(int flag, const char *format, ...);
int __snprintf_chk(char *str, size_t maxlen, int flag, size_t strlen, const char *format, ...);
bool ExclusiveMonitorPass(void *address, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* String data constants */
char DAT_0010320d[] = "Testing standard library functions\n";
char DAT_00103231[] = "strcpy: %d\n";
char DAT_0010324c[] = "strcmp: %d\n";
char DAT_00103267[] = "strlen: %d\n";
char DAT_00103283[] = "memcpy: %d\n";
char DAT_0010329f[] = "memcmp: %d\n";
char DAT_001032bb[] = "printf: %d\n";
char DAT_001032d7[] = "scanf: %d\n";
char DAT_001032f4[] = "fopen_fclose: %d\n";
char DAT_00103310[] = "fread_fwrite: %d\n";
char DAT_0010332c[] = "malloc_free: %d\n";
char DAT_00103348[] = "memset: %d\n";
char DAT_00103363[] = "strchr_strstr: %d\n";
char DAT_001033b2[] = "Testing system calls\n";
char DAT_001033cd[] = "linux_syscall: %d\n";
char DAT_001033e9[] = "win32_api: %d\n";
char DAT_00103405[] = "fork_exec: %d\n";
char DAT_00103421[] = "pipe_communication: %d\n";
char DAT_0010343d[] = "socket_create: %d\n";
char DAT_00103459[] = "shmget_shmat: %d\n";
char DAT_00103475[] = "signal_handling: %d\n";
char DAT_0010349b[] = "Testing thread concurrency\n";
char DAT_001034b9[] = "pthread_create: %d\n";
char DAT_001034d5[] = "pthread_join: %d\n";
char DAT_001034f2[] = "mutex_lock: %d\n";
char DAT_0010350e[] = "condition_variable: %d\n";
char DAT_0010352a[] = "atomic_ops: %d\n";
char DAT_00103546[] = "thread_local_storage: %d\n";

/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: init_have_lse_atomics @ 001017e0 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001018fc @ 001018fc */

void FUN_001018fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00101954 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: thread_sum @ 0010196c */

void * thread_sum(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: ThreadData * data@[DW_OP_reg0(x0)]
 Unresolved local var: int i@[???] */
 iVar1 = *(int *)arg;
 *(undefined4 *)((long)arg + 8) = 0;
 for (; iVar1 <= *(int *)((long)arg + 4); iVar1 = iVar1 + 1) {
 *(int *)((long)arg + 8) = *(int *)((long)arg + 8) + iVar1;
 }
 return (void *)0x0;
}



/* Function: thread_compute @ 00101998 */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * input@[DW_OP_reg0(x0)]
 Unresolved local var: int value@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ret@[???] */
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: thread_increment @ 001019c4 */

void * thread_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 /* Unresolved local var: int i@[???] */
 iVar1 = *(int *)arg;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 }
 return (void *)0x0;
}



/* Function: consumer_thread @ 00101a30 */

void * consumer_thread(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 while (iVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 piVar2 = malloc(4);
 *piVar2 = iVar1;
 return piVar2;
}



/* Function: producer_thread @ 00101a98 */

void * producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: thread_atomic_increment @ 00101af0 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 /* Unresolved local var: int i@[???]
 Unresolved local var: int expected@[???]
 Unresolved local var: int desired@[???] */
 iVar1 = *(int *)arg;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00101b54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 atomic_counter = atomic_counter + 100;
 return (void *)0x0;
}



/* Function: thread_tls_test @ 00101b74 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 
 /* Unresolved local var: char * name@[DW_OP_reg0(x0)]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),arg,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}



/* Function: param_strcpy @ 00101bc4 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return (int)sVar1;
}



/* Function: call_strcpy @ 00101bec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 long lVar1;
 int iVar2;
 char buffer [32];
 
 /* Unresolved local var: int len@[???] */
 lVar1 = ___stack_chk_guard;
 iVar2 = param_strcpy(buffer,"HelloLib");
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_strcmp @ 00101c40 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = strcmp(s1,s2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 00101c60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 iVar1 = param_strcmp("abc","def");
 iVar2 = param_strcmp("xyz","xyz");
 iVar3 = param_strcmp("bbb","aaa");
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101cc0 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 00101cd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00101cdc */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00101d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 int iVar1;
 long lVar2;
 int src [5];
 int dst [5];
 
 lVar2 = ___stack_chk_guard;
 dst[0] = 0;
 dst[1] = 0;
 dst[2] = 0;
 dst[3] = 0;
 src[0] = 10;
 src[1] = 0x14;
 src[2] = 0x1e;
 src[3] = 0x28;
 src[4] = 0x32;
 dst[4] = 0;
 param_memcpy(dst,src,0x14);
 iVar1 = dst[0] + dst[2] + dst[4];
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_memcmp @ 00101d88 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(p1,p2,n);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 00101da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 lVar1 = ___stack_chk_guard;
 arr2[2] = 4;
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 iVar2 = param_memcmp(arr1,arr2,0xc);
 iVar3 = param_memcmp(arr1,arr3,0xc);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3;
}



/* Function: param_printf @ 00101e5c */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00101e74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = param_printf(0x2a,"Test");
 return iVar1;
}



/* Function: param_scanf @ 00101e84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_scanf(char *input_str)

{
 int iVar1;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int ret@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
 if (iVar1 == 2) {
 iVar1 = a + b;
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: call_scanf @ 00101ef4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 
 iVar1 = param_scanf("123,456");
 return iVar1;
}



/* Function: param_fopen_fclose @ 00101f00 */

int param_fopen_fclose(char *filename)

{
 int iVar1;
 FILE *__stream;
 
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen(filename,"r");
 if (__stream == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 }
 return iVar1;
}



/* Function: call_fopen_fclose @ 00101f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int fd@[???] */
 iVar1 = param_fopen_fclose("/etc/passwd");
 iVar2 = 0x2a;
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_fread_fwrite @ 00101f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fread_fwrite(char *tmpfile)

{
 long lVar1;
 int iVar2;
 int iVar3;
 FILE *__s;
 size_t sVar4;
 char read_buffer [32];
 
 /* Unresolved local var: char * write_data@[???]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???] */
 lVar1 = ___stack_chk_guard;
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar3 = -1;
 }
 else {
 sVar4 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar4 == 0x12) {
 rewind(__s);
 /* Unresolved local var: size_t sz@[???] */
 sVar4 = fread(read_buffer,1,0x12,__s);
 read_buffer[sVar4] = '\0';
 fclose(__s);
 unlink(tmpfile);
 if (sVar4 == 0x12) {
 iVar2 = strcmp(read_buffer,"BinBench Test Data");
 iVar3 = -3;
 if (iVar2 == 0) {
 iVar3 = 0x2a;
 }
 }
 else {
 iVar3 = -3;
 }
 }
 else {
 fclose(__s);
 iVar3 = -2;
 }
 }
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fread_fwrite @ 00102084 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00102090 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 size_t sVar1;
 int iVar2;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size * 4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: size_t i@[???] */
 for (sVar1 = 0; sVar1 != size; sVar1 = sVar1 + 1) {
 __ptr[sVar1] = (int)sVar1 * 10;
 }
 iVar2 = __ptr[size - 1] + *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: call_malloc_free @ 001020fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 00102104 */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 size_t sVar2;
 
 /* Unresolved local var: uchar * bytes@[???]
 Unresolved local var: int sum@[???] */
 memset(buffer,0,size);
 iVar1 = 0;
 /* Unresolved local var: size_t i@[???] */
 for (sVar2 = 0; sVar2 != size; sVar2 = sVar2 + 1) {
 iVar1 = iVar1 + (uint)*(byte *)((long)buffer + sVar2);
 }
 return iVar1;
}



/* Function: call_memset @ 00102150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 long lVar1;
 long lVar2;
 int buffer [10];
 
 lVar1 = ___stack_chk_guard;
 /* Unresolved local var: int i@[???] */
 lVar2 = 0;
 do {
 buffer[lVar2] = 0xff;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 10);
 param_memset(buffer,0x28);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return buffer[0] + buffer[9];
}



/* Function: param_strchr_strstr @ 001021c0 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[???]
 Unresolved local var: char * pos2@[???]
 Unresolved local var: int index2@[???] */
 pcVar3 = strchr(str,(uint)(byte)ch);
 iVar1 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar1 = (int)pcVar3 - (int)str;
 }
 pcVar3 = strstr(str,substr);
 iVar2 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar2 = (int)pcVar3 - (int)str;
 }
 return iVar1 + iVar2;
}



/* Function: call_strchr_strstr @ 0010221c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 int iVar1;
 
 /* Unresolved local var: char * text@[???]
 Unresolved local var: int result@[???] */
 iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
 return iVar1;
}



/* Function: test_standard_library_functions @ 00102234 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 int iVar1;
 
 puts(DAT_0010320d);
 iVar1 = call_strcpy();
 __printf_chk(1,DAT_00103231,iVar1);
 iVar1 = call_strcmp();
 __printf_chk(1,DAT_0010324c,iVar1);
 __printf_chk(1,DAT_00103267,0xc);
 iVar1 = call_memcpy();
 __printf_chk(1,DAT_00103283,iVar1);
 iVar1 = call_memcmp();
 __printf_chk(1,DAT_0010329f,iVar1);
 iVar1 = call_printf();
 __printf_chk(1,DAT_001032bb,iVar1);
 iVar1 = call_scanf();
 __printf_chk(1,DAT_001032d7,iVar1);
 iVar1 = call_fopen_fclose();
 __printf_chk(1,DAT_001032f4,iVar1);
 iVar1 = call_fread_fwrite();
 __printf_chk(1,DAT_00103310,iVar1);
 iVar1 = call_malloc_free();
 __printf_chk(1,DAT_0010332c,iVar1);
 iVar1 = call_memset();
 __printf_chk(1,DAT_00103348,iVar1);
 iVar1 = call_strchr_strstr();
 __printf_chk(1,DAT_00103363,iVar1);
 return;
}



/* Function: param_linux_syscall @ 00102368 */

int param_linux_syscall(char *pathname)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 
 /* Unresolved local var: int fd@[???] */
 lVar2 = syscall(0x38,0xffffff9c,pathname,0);
 iVar1 = (int)lVar2;
 if (iVar1 < 0) {
 /* Unresolved local var: int fd@[???] */
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(0x39,lVar2);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 001023bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = param_linux_syscall("/etc/passwd");
 iVar2 = 0x2a;
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_win32_api @ 001023e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_win32_api(char *filename)

{
 long lVar1;
 int iVar2;
 struct stat st;
 
 lVar1 = ___stack_chk_guard;
 iVar2 = stat(filename,&st);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0x2a;
 if (st.st_size < 1) {
 iVar2 = -2;
 }
 }
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_win32_api @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 
 iVar1 = param_win32_api("/etc/passwd");
 return iVar1;
}



/* Function: param_fork_exec @ 0010245c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 int status;
 long local_8;
 
 /* Unresolved local var: pid_t pid@[???] */
 local_8 = ___stack_chk_guard;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 /* Unresolved local var: pid_t pid@[???] */
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,&status,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = (uint)status >> 8 & 0xff;
 if ((status & 0x7fU) != 0) {
 uVar2 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fork_exec @ 00102510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 iVar2 = 0x2a;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_pipe_communication @ 0010253c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 long lVar1;
 int iVar2;
 __pid_t _Var3;
 ssize_t sVar4;
 int pipefd [2];
 char buffer [32];
 
 /* Unresolved local var: pid_t pid@[???] */
 lVar1 = ___stack_chk_guard;
 iVar2 = pipe(pipefd);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 _Var3 = fork();
 if (_Var3 < 0) {
 iVar2 = -2;
 }
 else {
 if (_Var3 == 0) {
 /* Unresolved local var: char * msg@[???] */
 close(pipefd[0]);
 write(pipefd[1],"HelloPipe",9);
 close(pipefd[1]);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 /* Unresolved local var: ssize_t bytes@[???] */
 close(pipefd[1]);
 sVar4 = read(pipefd[0],buffer,0x1f);
 buffer[sVar4] = '\0';
 close(pipefd[0]);
 wait((void *)0x0);
 iVar2 = 0x2a;
 if (sVar4 < 1) {
 iVar2 = -3;
 }
 }
 }
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pipe_communication @ 00102624 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 int iStack_30;
 int iStack_2c;
 undefined1 auStack_28 [32];
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iVar1 = pipe(&iStack_30);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 iVar1 = -2;
 }
 else {
 if (_Var2 == 0) {
 close(iStack_30);
 write(iStack_2c,"HelloPipe",9);
 close(iStack_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(iStack_2c);
 sVar3 = read(iStack_30,auStack_28,0x1f);
 auStack_28[sVar3] = 0;
 close(iStack_30);
 wait((void *)0x0);
 iVar1 = 0x2a;
 if (sVar3 < 1) {
 iVar1 = -3;
 }
 }
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_socket_create @ 00102628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int opt;
 sockaddr_in addr;
 
 /* Unresolved local var: int sock@[???] */
 lVar1 = ___stack_chk_guard;
 iVar2 = socket(2,1,0);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 opt = 1;
 iVar3 = setsockopt(iVar2,1,2,&opt,4);
 if (iVar3 < 0) {
 close(iVar2);
 iVar2 = -2;
 }
 else {
 addr.sin_zero[0] = '\0';
 addr.sin_zero[1] = '\0';
 addr.sin_zero[2] = '\0';
 addr.sin_zero[3] = '\0';
 addr.sin_zero[4] = '\0';
 addr.sin_zero[5] = '\0';
 addr.sin_zero[6] = '\0';
 addr.sin_zero[7] = '\0';
 addr.sin_family = 2;
 addr.sin_port = 0;
 addr.sin_addr.s_addr = 0;
 iVar3 = bind(iVar2,(sockaddr *)&addr,0x10);
 if (iVar3 < 0) {
 close(iVar2);
 iVar2 = -3;
 }
 else {
 iVar3 = listen(iVar2,5);
 if (iVar3 < 0) {
 close(iVar2);
 iVar2 = -4;
 }
 else {
 close(iVar2);
 iVar2 = 0x2a;
 }
 }
 }
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_socket_create @ 0010271c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 int iVar2;
 undefined4 uStack_1c;
 sockaddr sStack_18;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 uStack_1c = 1;
 iVar2 = setsockopt(iVar1,1,2,&uStack_1c,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 sStack_18.sa_data[6] = '\0';
 sStack_18.sa_data[7] = '\0';
 sStack_18.sa_data[8] = '\0';
 sStack_18.sa_data[9] = '\0';
 sStack_18.sa_data[10] = '\0';
 sStack_18.sa_data[0xb] = '\0';
 sStack_18.sa_data[0xc] = '\0';
 sStack_18.sa_data[0xd] = '\0';
 sStack_18.sa_family = 2;
 sStack_18.sa_data[0] = '\0';
 sStack_18.sa_data[1] = '\0';
 sStack_18.sa_data[2] = '\0';
 sStack_18.sa_data[3] = '\0';
 sStack_18.sa_data[4] = '\0';
 sStack_18.sa_data[5] = '\0';
 iVar2 = bind(iVar1,&sStack_18,0x10);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -3;
 }
 else {
 iVar2 = listen(iVar1,5);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -4;
 }
 else {
 close(iVar1);
 iVar1 = 0x2a;
 }
 }
 }
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_shmget_shmat @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t sVar2;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return -2;
 }
 __dest = shmat(iVar1,(void *)0x0,0);
 if (__dest != (char *)0xffffffffffffffff) {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return (int)sVar2;
 }
 return -3;
 }
 }
 return -1;
}



/* Function: call_shmget_shmat @ 001027e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 iVar2 = 0x2a;
 if (iVar1 < 1) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 00102808 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 /* Unresolved local var: int attempts@[???] */
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
 /* Unresolved local var: int attempts@[???] */
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
 return (int)p_Var1;
}



/* Function: call_signal_handling @ 00102918 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

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
 return (int)p_Var1;
}



/* Function: test_system_calls @ 0010291c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 
 puts(DAT_001033b2);
 iVar1 = call_linux_syscall();
 __printf_chk(1,DAT_001033cd,iVar1);
 iVar1 = call_win32_api();
 __printf_chk(1,DAT_001033e9,iVar1);
 iVar1 = call_fork_exec();
 __printf_chk(1,DAT_00103405,iVar1);
 iVar1 = param_pipe_communication();
 __printf_chk(1,DAT_00103421,iVar1);
 iVar1 = param_socket_create();
 __printf_chk(1,DAT_0010343d,iVar1);
 iVar1 = call_shmget_shmat();
 __printf_chk(1,DAT_00103459,iVar1);
 iVar1 = param_signal_handling();
 __printf_chk(1,DAT_00103475,iVar1);
 return;
}



/* Function: param_pthread_create @ 001029dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_create(int x)

{
 int iVar1;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_8;
 
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
 local_8 = ___stack_chk_guard;
 input = x;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (iVar1 == 0) {
 pthread_join(tid,&thread_ret);
 iVar1 = *(int *)thread_ret;
 free(thread_ret);
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: call_pthread_create @ 00102a6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: param_pthread_join @ 00102a74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int *piVar1;
 long lVar2;
 int iVar3;
 ThreadData *pTVar4;
 pthread_t *__newthread;
 long lVar5;
 int iVar6;
 ThreadData *__arg;
 pthread_t tids [3];
 ThreadData data [3];
 
 /* Unresolved local var: int total@[???] */
 lVar2 = ___stack_chk_guard;
 pTVar4 = data;
 iVar6 = 3;
 /* Unresolved local var: int i@[???] */
 data[2].result = 0;
 data[0].result = 0;
 data[1].start = 0xb;
 data[0].start = 1;
 data[0].end = 10;
 data[2].start = 0x15;
 data[2].end = 0x1e;
 data[1].end = 0x14;
 data[1].result = 0;
 __newthread = tids;
 __arg = pTVar4;
 do {
 iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar3 != 0) {
 iVar6 = -1;
 goto LAB_00102b30;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 1;
 iVar6 = iVar6 + -1;
 } while (iVar6 != 0);
 lVar5 = 0;
 iVar6 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar3 = pthread_join(tids[lVar5],(void **)0x0);
 if (iVar3 != 0) {
 iVar6 = -2;
 break;
 }
 piVar1 = &pTVar4->result;
 lVar5 = lVar5 + 1;
 pTVar4 = pTVar4 + 1;
 iVar6 = iVar6 + *piVar1;
 } while (lVar5 != 3);
LAB_00102b30:
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
 }
 return iVar6;
}



/* Function: call_pthread_join @ 00102b7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 pthread_t *ppVar2;
 pthread_t *ppVar3;
 long lVar4;
 int iVar5;
 pthread_t *__arg;
 pthread_t apStack_48 [7];
 undefined4 uStack_10;
 long lStack_8;
 
 ppVar2 = apStack_48 + 3;
 iVar5 = 3;
 lStack_8 = ___stack_chk_guard;
 uStack_10 = 0;
 apStack_48[4] = 0xb00000000;
 apStack_48[3] = 0xa00000001;
 apStack_48[6] = 0x1e00000015;
 apStack_48[5] = 0x14;
 ppVar3 = apStack_48;
 __arg = ppVar2;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_sum,__arg);
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
 iVar1 = pthread_join(apStack_48[lVar4],(void **)0x0);
 if (iVar1 != 0) {
 iVar5 = -2;
 break;
 }
 ppVar3 = ppVar2 + 1;
 lVar4 = lVar4 + 1;
 ppVar2 = (pthread_t *)((long)ppVar2 + 0xc);
 iVar5 = iVar5 + (int)*ppVar3;
 } while (lVar4 != 3);
LAB_00102b30:
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
 }
 return iVar5;
}



/* Function: param_mutex_lock @ 00102b80 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 long lVar1;
 int iVar2;
 void *__ptr;
 long lVar3;
 int local_4;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_4 = iterations_per_thread;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 lVar3 = 0;
 shared_counter = 0;
 do {
 if (thread_count <= (int)lVar3) {
 /* Unresolved local var: int i@[???] */
 for (lVar3 = 0; (int)lVar3 < thread_count; lVar3 = lVar3 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar3 * 8),(void **)0x0);
 }
 free(__ptr);
 if (shared_counter == thread_count * local_4) {
 return 0x2a;
 }
 return -3;
 }
 lVar1 = lVar3 * 8;
 lVar3 = lVar3 + 1;
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar1),(pthread_attr_t *)0x0,
 thread_increment,&local_4);
 } while (iVar2 == 0);
 free(__ptr);
 iVar2 = -2;
 }
 return iVar2;
}



/* Function: call_mutex_lock @ 00102c60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: param_condition_variable @ 00102c6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 pthread_t producer;
 pthread_t consumer;
 void *consumer_ret;
 long local_8;
 
 /* Unresolved local var: int result@[???] */
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(consumer,&consumer_ret);
 pthread_join(producer,(void **)0x0);
 iVar1 = *(int *)consumer_ret;
 free(consumer_ret);
 }
 else {
 iVar1 = -2;
 pthread_cancel(consumer);
 }
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: call_condition_variable @ 00102d38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 pthread_t pStack_20;
 pthread_t pStack_18;
 int *piStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&pStack_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(pStack_18,&piStack_10);
 pthread_join(pStack_20,(void **)0x0);
 iVar1 = *piStack_10;
 free(piStack_10);
 }
 else {
 iVar1 = -2;
 pthread_cancel(pStack_18);
 }
 }
 else {
 iVar1 = -1;
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
 }
 return iVar1;
}



/* Function: param_atomic_ops @ 00102d3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(int thread_count,int iterations)

{
 long lVar1;
 atomic_int aVar2;
 int iVar3;
 void *__ptr;
 long lVar4;
 int local_14;
 pthread_t load_store_tid;
 long local_8;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int final_value@[???] */
 local_8 = ___stack_chk_guard;
 local_14 = iterations;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 atomic_counter = 0;
 /* Unresolved local var: int i@[???] */
 lVar4 = 0;
 do {
 if (thread_count <= (int)lVar4) {
 iVar3 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar3 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 for (lVar4 = 0; aVar2 = atomic_counter, (int)lVar4 < thread_count; lVar4 = lVar4 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar4 * 8),(void **)0x0);
 }
 free(__ptr);
 iVar3 = 0x2a;
 if (aVar2 < 1) {
 iVar3 = -3;
 }
 goto LAB_00102e28;
 }
 lVar1 = lVar4 * 8;
 lVar4 = lVar4 + 1;
 iVar3 = pthread_create((pthread_t *)((long)__ptr + lVar1),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_14);
 } while (iVar3 == 0);
 free(__ptr);
 iVar3 = -2;
 }
LAB_00102e28:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_atomic_ops @ 00102e78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: param_thread_local_storage @ 00102e84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_thread_local_storage(int thread_count)

{
 long lVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 void *__ptr;
 void *__ptr_00;
 void *pvVar5;
 ulong uVar6;
 long lVar7;
 int iVar8;
 void *ret;
 long local_8;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 uVar6 = -(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)thread_count << 3
 ;
 local_8 = ___stack_chk_guard;
 __ptr = malloc(uVar6);
 __ptr_00 = malloc(uVar6);
 if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 for (uVar6 = 0; (int)uVar6 < thread_count; uVar6 = uVar6 + 1) {
 pvVar5 = malloc(0x10);
 *(void **)((long)__ptr_00 + uVar6 * 8) = pvVar5;
 __snprintf_chk(pvVar5,0x10,1,0x10,"Thread-%d",uVar6 & 0xffffffff);
 }
 /* Unresolved local var: int i@[???] */
 lVar7 = 0;
 do {
 iVar3 = (int)lVar7;
 if (thread_count <= iVar3) {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int * values@[???] */
 iVar8 = 0;
 iVar4 = 0;
 for (lVar7 = 0; (int)lVar7 < thread_count; lVar7 = lVar7 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar7 * 8),&ret);
 iVar4 = iVar4 + *(int *)ret;
 iVar8 = iVar8 + *(int *)((long)ret + 4);
 free(ret);
 free(*(void **)((long)__ptr_00 + lVar7 * 8));
 }
 free(__ptr_00);
 free(__ptr);
 iVar3 = 0x2a;
 if (thread_count * 100 != iVar4 || thread_count * 0x96 != iVar8) {
 iVar3 = -3;
 }
 goto LAB_00102fcc;
 }
 lVar2 = lVar7 * 8;
 lVar1 = lVar7 * 8;
 lVar7 = lVar7 + 1;
 iVar4 = pthread_create((pthread_t *)((long)__ptr + lVar1),(pthread_attr_t *)0x0,
 thread_tls_test,*(void **)((long)__ptr_00 + lVar2));
 } while (iVar4 == 0);
 lVar7 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 lVar1 = lVar7 * 8;
 lVar7 = lVar7 + 1;
 free(*(void **)((long)__ptr_00 + lVar1));
 } while ((int)lVar7 <= iVar3);
 free(__ptr_00);
 free(__ptr);
 iVar3 = -2;
 }
LAB_00102fcc:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar3;
}



/* Function: call_thread_local_storage @ 00103040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00103048 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 
 puts(DAT_0010349b);
 iVar1 = call_pthread_create();
 __printf_chk(1,DAT_001034b9,iVar1);
 iVar1 = param_pthread_join();
 __printf_chk(1,DAT_001034d5,iVar1);
 iVar1 = call_mutex_lock();
 __printf_chk(1,DAT_001034f2,iVar1);
 iVar1 = param_condition_variable();
 __printf_chk(1,DAT_0010350e,iVar1);
 iVar1 = call_atomic_ops();
 __printf_chk(1,DAT_0010352a,iVar1);
 iVar1 = call_thread_local_storage();
 __printf_chk(1,DAT_00103546,iVar1);
 return;
}



/* Function: __aarch64_cas4_acq_rel @ 001030f0 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 00103130 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar2) {
 *param_2 = iVar3 + param_1;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_2;
 *param_2 = iVar3 + param_1;
 LORelease();
 return iVar3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
