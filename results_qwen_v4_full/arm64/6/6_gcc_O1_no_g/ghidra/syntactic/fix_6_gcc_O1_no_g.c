/* Auto-injected type definitions by preprocessor */
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <errno.h>

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
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef unsigned int useconds_t;
typedef unsigned int socklen_t;
typedef int pid_t;
typedef int __pid_t;
typedef int key_t;

/* FILE type already defined in stdio.h */

/* Structure definitions */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

struct shmid_ds {
    unsigned long shm_perm;
    unsigned long shm_segsz;
    unsigned long shm_atime;
    unsigned long shm_dtime;
    unsigned long shm_ctime;
    unsigned long shm_cpid;
    unsigned long shm_lpid;
    unsigned long shm_nattch;
};





/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*code)(void);
typedef undefined1 undefined;
typedef void (*sighandler_t)(int);
typedef void (*__sighandler_t)(int);

/* Stack protector variables */
uintptr_t ___stack_chk_guard = 0;
uintptr_t __stack_chk_guard = 0;
void __stack_chk_fail(uintptr_t val1, uintptr_t val2, uintptr_t val3, uintptr_t val4) {
    (void)val1; (void)val2; (void)val3; (void)val4;
    _exit(1);
}

/* Global variable definitions */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
long tpidr_el0 = 0;
int shared_counter = 0;
int completed_0 = 0;
void *__dso_handle = 0;
int *__errno_location(void) { static int e = 0; return &e; }



/* Global variables */
union {
    int _0_4_;
    struct {
        int _unused_0_4_;
        char _4_1_;
    };
} atomic_counter_union;
#define atomic_counter (atomic_counter_union._0_4_)
int data;
int ready;
int signal_received;
int signal_number;
void __cxa_finalize(void *p) { (void)p; }
void deregister_tm_clones(void) { }
unsigned long __getauxval(unsigned long type) { (void)type; return 0; }
int __aarch64_ldadd4_acq_rel(int val, int *ptr) { int old = *ptr; *ptr = old + val; return old; }
int __aarch64_cas4_acq_rel(int expected, int desired, int *ptr) { int old = *ptr; if (*ptr == expected) *ptr = desired; return old; }
int ExclusiveMonitorPass(void *p, unsigned long n) { (void)p; (void)n; return 1; }
unsigned char ExclusiveMonitorsStatus(void) { return 0; }
void LOAcquire(void) { }
void LORelease(void) { }
int __snprintf_chk(void *s, unsigned long n, int flag, unsigned long slen, const char *fmt, ...) { (void)s; (void)n; (void)flag; (void)slen; (void)fmt; return 0; }
int __printf_chk(int flag, const char *fmt, ...) { (void)flag; (void)fmt; return 0; }
int __isoc99_sscanf(const char *s, const char *fmt, ...) { (void)s; (void)fmt; return 0; }
int printf(const char *fmt, ...) { return 0; }
int puts(const char *s) { return printf("%s\n", s); }
int builtin_strncpy(char *dest, const char *src, unsigned long n) { return strncpy(dest, src, n) != NULL ? 0 : -1; }
char *strcpy(char *dest, const char *src) { while (*src) *dest++ = *src++; *dest = '\0'; return dest; }
size_t strlen(const char *s) { size_t len = 0; while (*s++) len++; return len; }
void *memcpy(void *dest, const void *src, size_t n) { char *d = dest; const char *s = src; while (n--) *d++ = *s++; return dest; }
int memcmp(const void *s1, const void *s2, size_t n) { const unsigned char *p1 = s1, *p2 = s2; while (n--) { if (*p1 != *p2) return *p1 - *p2; p1++; p2++; } return 0; }
int strcmp(const char *s1, const char *s2) { while (*s1 && *s1 == *s2) { s1++; s2++; } return *(unsigned char *)s1 - *(unsigned char *)s2; }
char *strchr(const char *s, int c) { while (*s) { if (*s == c) return (char *)s; s++; } return (c == '\0') ? (char *)s : NULL; }
char *strstr(const char *haystack, const char *needle) { if (!*needle) return (char *)haystack; while (*haystack) { const char *h = haystack, *n = needle; while (*h && *n && *h == *n) { h++; n++; } if (!*n) return (char *)haystack; haystack++; } return NULL; }
void *memset(void *s, int c, size_t n) { unsigned char *p = s; while (n--) *p++ = c; return s; }
void *malloc(size_t size) { static char buffer[100000]; static size_t offset = 0; if (offset + size > sizeof(buffer)) return NULL; void *p = buffer + offset; offset += size; return p; }
void free(void *ptr) { (void)ptr; }

int unlink(const char *pathname) { (void)pathname; return 0; }
long syscall(long number, ...) { (void)number; return 0; }
int fileno(FILE *stream) { (void)stream; return 0; }
int fclose(FILE *stream) { (void)stream; return 0; }
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream) { (void)ptr; (void)size; (void)nmemb; (void)stream; return 0; }
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream) { (void)ptr; (void)size; (void)nmemb; (void)stream; return 0; }
void rewind(FILE *stream) { (void)stream; }
FILE *fopen(const char *pathname, const char *mode) { (void)pathname; (void)mode; static FILE f; return &f; }
int stat(const char *pathname, struct stat *buf) { (void)pathname; buf->st_size = 100; return 0; }
pid_t fork(void) { return 0; }
int execl(const char *path, const char *arg, ...) { (void)path; (void)arg; return 0; }
pid_t waitpid(pid_t pid, int *wstatus, int options) { (void)pid; (void)wstatus; (void)options; return 0; }
void _exit(int status) { (void)status; }
int pipe(int pipefd[2]) { pipefd[0] = 0; pipefd[1] = 1; return 0; }
int close(int fd) { (void)fd; return 0; }
ssize_t write(int fd, const void *buf, size_t count) { (void)fd; (void)buf; (void)count; return count; }
ssize_t read(int fd, void *buf, size_t count) { (void)fd; (void)buf; (void)count; return count; }
pid_t wait(int *wstatus) { (void)wstatus; return 0; }
int socket(int domain, int type, int protocol) { (void)domain; (void)type; (void)protocol; return 0; }
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen) { (void)sockfd; (void)level; (void)optname; (void)optval; (void)optlen; return 0; }
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen) { (void)sockfd; (void)addr; (void)addrlen; return 0; }
int listen(int sockfd, int backlog) { (void)sockfd; (void)backlog; return 0; }
int open(const char *pathname, int flags, ...) { (void)pathname; (void)flags; return 0; }
key_t ftok(const char *pathname, int proj_id) { (void)pathname; (void)proj_id; return 0x2a; }
int shmget(key_t key, size_t size, int shmflg) { (void)key; (void)size; (void)shmflg; return 0; }
void *shmat(int shmid, const void *shmaddr, int shmflg) { (void)shmid; (void)shmaddr; (void)shmflg; static char buf[1000]; return buf; }
int shmdt(const void *shmaddr) { (void)shmaddr; return 0; }
int shmctl(int shmid, int cmd, struct shmid_ds *buf) { (void)shmid; (void)cmd; (void)buf; return 0; }
sighandler_t signal(int signum, sighandler_t handler) { (void)signum; (void)handler; return SIG_DFL; }
int raise(int sig) { (void)sig; return 0; }
int usleep(useconds_t usec) { (void)usec; return 0; }
unsigned int alarm(unsigned int seconds) { (void)seconds; return 0; }
unsigned int sleep(unsigned int seconds) { (void)seconds; return 0; }
char *strncpy(char *dest, const char *src, size_t n) { size_t i; for (i = 0; i < n && src[i]; i++) dest[i] = src[i]; for (; i < n; i++) dest[i] = '\0'; return dest; }
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg) { (void)thread; (void)attr; (void)start_routine; (void)arg; return 0; }
int pthread_join(pthread_t thread, void **retval) { (void)thread; (void)retval; return 0; }
int pthread_cancel(pthread_t thread) { (void)thread; return 0; }
int pthread_mutex_lock(pthread_mutex_t *mutex) { (void)mutex; return 0; }
int pthread_mutex_unlock(pthread_mutex_t *mutex) { (void)mutex; return 0; }
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex) { (void)cond; (void)mutex; return 0; }
int pthread_cond_signal(pthread_cond_t *cond) { (void)cond; return 0; }
char DAT_00103408[] = "test1";
char DAT_00103400[] = "test2";
char DAT_00103410[] = "test3";
char DAT_00103420[] = "test4";
char DAT_00103418[] = "test5";
char DAT_00103440[] = "TestName";
char DAT_001034c8[] = "Testing standard library functions...";
char DAT_001034f0[] = "call_strcpy result: %d\n";
char DAT_00103510[] = "call_strcmp result: %d\n";
char DAT_00103530[] = "call_strlen result: %d\n";
char DAT_00103550[] = "call_memcpy result: %d\n";
char DAT_00103570[] = "call_memcmp result: %d\n";
char DAT_00103590[] = "call_printf result: %d\n";
char DAT_001035b0[] = "call_scanf result: %d\n";
char DAT_001035d0[] = "call_fopen_fclose result: %d\n";
char DAT_001035f0[] = "call_fread_fwrite result: %d\n";
char DAT_00103610[] = "call_malloc_free result: %d\n";
char DAT_00103630[] = "call_memset result: %d\n";
char DAT_00103650[] = "call_strchr_strstr result: %d\n";
char DAT_001036b8[] = "Testing system calls...";
char DAT_001036d8[] = "call_linux_syscall result: %d\n";
char DAT_001036f8[] = "call_win32_api result: %d\n";
char DAT_00103718[] = "call_fork_exec result: %d\n";
char DAT_00103738[] = "call_pipe_communication result: %d\n";
char DAT_00103758[] = "call_socket_create result: %d\n";
char DAT_00103778[] = "call_shmget_shmat result: %d\n";
char DAT_00103798[] = "call_signal_handling result: %d\n";
char DAT_001037c8[] = "Testing thread concurrency...";
char DAT_001037e8[] = "call_pthread_create result: %d\n";
char DAT_00103808[] = "call_pthread_join result: %d\n";
char DAT_00103828[] = "call_mutex_lock result: %d\n";
char DAT_00103848[] = "call_condition_variable result: %d\n";
char DAT_00103868[] = "call_atomic_ops result: %d\n";
char DAT_00103888[] = "call_thread_local_storage result: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 001017c0 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 atomic_counter_union._4_1_ = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001018bc @ 001018bc */

void FUN_001018bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00101914 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 0010192c */

void *thread_sum(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 piVar3 = (int *)param_1;
 piVar3[2] = 0;
 iVar1 = *piVar3;
 if (iVar1 <= piVar3[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != piVar3[1] + 1);
 piVar3[2] = iVar2;
 }
 return 0;
}



/* Function: thread_compute @ 00101964 */

void *thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 piVar3 = (int *)param_1;
 iVar1 = *piVar3;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}



/* Function: thread_increment @ 00101990 */

void *thread_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 piVar3 = (int *)param_1;
 iVar1 = *piVar3;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return 0;
}



/* Function: consumer_thread @ 00101a0c */

void *consumer_thread(void *param_1)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 (void)param_1;
 pthread_mutex_lock(&cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return (void *)puVar2;
}



/* Function: producer_thread @ 00101a88 */

void *producer_thread(void *param_1)

{
 (void)param_1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}



/* Function: thread_atomic_increment @ 00101ae0 */

void *thread_atomic_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 piVar3 = (int *)param_1;
 iVar1 = *piVar3;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00101b4c */

void *thread_atomic_load_store(void *param_1)

{
 (void)param_1;
 atomic_counter = atomic_counter + 100;
 return 0;
}



/* Function: thread_tls_test @ 00101b6c */

void *thread_tls_test(void *param_1)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 char *pcVar5;
 
 pcVar5 = (char *)param_1;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x18),pcVar5,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return 0;
}



/* Function: param_strcpy @ 00101bc0 */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 00101be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_strcpy(void)

{
 undefined1 auStack_28 [32];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(0,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_strcmp @ 00101c3c */

int param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 int iVar2;
 
 iVar2 = strcmp(param_1,param_2);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 00101c5c */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp((char *)&DAT_00103408,(char *)&DAT_00103400);
 iVar2 = param_strcmp((char *)&DAT_00103410,(char *)&DAT_00103410);
 iVar3 = param_strcmp((char *)&DAT_00103420,(char *)&DAT_00103418);
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101cbc */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00101cd0 */

undefined4 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00101cd8 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00101cfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_memcpy(void)

{
 undefined8 local_38;
 undefined8 uStack_30;
 undefined4 local_28;
 undefined8 local_20;
 undefined8 local_18;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)local_20 + (int)local_18 + local_10,(int)(uintptr_t)__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
}



/* Function: param_memcmp @ 00101d84 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 00101da4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_memcmp(void)

{
 int iVar1;
 int iVar2;
 undefined8 local_38;
 undefined4 local_30;
 undefined8 local_28;
 undefined4 local_20;
 undefined8 local_18;
 undefined4 local_10;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2,(int)(uintptr_t)__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_printf @ 00101e58 */

void param_printf(undefined4 param_1,char *param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00101e80 */

undefined4 call_printf(void)

{
 param_printf(0x2a,(char *)&DAT_00103440);
 return 0x2a;
}



/* Function: param_scanf @ 00101ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_scanf(char *param_1)

{
 int iVar1;
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&local_c);
 if (iVar1 == 2) {
 local_10 = local_10 + local_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_10,(int)(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_scanf @ 00101f14 */

undefined4 call_scanf(void)

{
 param_scanf("123,456");
 return 0x2a;
}



/* Function: param_fopen_fclose @ 00101f30 */

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



/* Function: call_fopen_fclose @ 00101f78 */

undefined4 call_fopen_fclose(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_fread_fwrite @ 00101fa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fread_fwrite(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
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
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,(int)(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: call_fread_fwrite @ 001020b8 */

undefined4 call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0x2a;
}



/* Function: param_malloc_free @ 001020d4 */

int param_malloc_free(long param_1)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + param_1);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102140 */

undefined4 call_malloc_free(void)

{
 param_malloc_free(10);
 return 0x2a;
}



/* Function: param_memset @ 00102158 */

int param_memset(byte *param_1,size_t param_2)

{
 int iVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 pbVar3 = param_1;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != param_1 + param_2);
 }
 return iVar1;
}



/* Function: call_memset @ 001021ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_memset(void)

{
 long *plVar1;
 long local_30 [4];
 int local_c;
 long local_8;
 long *plVar2;
 
 local_8 = ___stack_chk_guard;
 plVar2 = local_30;
 do {
 plVar1 = (long *)((long)plVar2 + 4);
 *(undefined4 *)plVar2 = 0xff;
 plVar2 = plVar1;
 } while (plVar1 != &local_8);
 param_memset((byte *)local_30,0x28);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)local_30[0] + local_c,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_strchr_strstr @ 00102220 */

int param_strchr_strstr(char *param_1,uint param_2,char *param_3)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 pcVar1 = strchr(param_1,param_2 & 0xff);
 iVar3 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 00102278 */

undefined4 call_strchr_strstr(void)

{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return 0x2a;
}



/* Function: test_standard_library_functions @ 001022a0 */

void test_standard_library_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts((const char *)&DAT_001034c8);
 uVar2 = call_strcpy();
 __printf_chk(1,(const char *)&DAT_001034f0,uVar2);
 uVar2 = call_strcmp();
 __printf_chk(1,(const char *)&DAT_00103510,uVar2);
 uVar2 = call_strlen();
 __printf_chk(1,(const char *)&DAT_00103530,uVar2);
 uVar2 = call_memcpy();
 __printf_chk(1,(const char *)&DAT_00103550,uVar2);
 uVar2 = call_memcmp();
 __printf_chk(1,(const char *)&DAT_00103570,uVar2);
 uVar2 = call_printf();
 __printf_chk(1,(const char *)&DAT_00103590,uVar2);
 uVar2 = call_scanf();
 __printf_chk(1,(const char *)&DAT_001035b0,uVar2);
 uVar2 = call_fopen_fclose();
 __printf_chk(1,(const char *)&DAT_001035d0,uVar2);
 uVar2 = call_fread_fwrite();
 __printf_chk(1,(const char *)&DAT_001035f0,uVar2);
 uVar2 = call_malloc_free();
 __printf_chk(1,(const char *)&DAT_00103610,uVar2);
 uVar2 = call_memset();
 __printf_chk(1,(const char *)&DAT_00103630,uVar2);
 uVar2 = call_strchr_strstr();
 __printf_chk(1,(const char *)&DAT_00103650,uVar2);
 return;
}



/* Function: param_linux_syscall @ 001023dc */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 ulong uVar3;
 
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar3 = (ulong)(uint)-*piVar2;
 }
 else {
 uVar3 = uVar1 & 0xffffffff;
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return uVar3;
}



/* Function: call_linux_syscall @ 00102430 */

undefined4 call_linux_syscall(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_linux_syscall((undefined8)"/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_win32_api @ 00102458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 struct stat local_stat;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,&local_stat);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_stat.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar2,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar2;
}



/* Function: call_win32_api @ 001024c4 */

undefined4 call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return 0x2a;
}



/* Function: param_fork_exec @ 001024e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_fork_exec(char *param_1,undefined8 param_2)

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
 execl(param_1,param_1,param_2,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_c >> 8 & 0xff, (local_c & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar2,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00102590 */

undefined4 call_fork_exec(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0x2a;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 001025bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 undefined4 uVar3;
 ssize_t sVar4;
 int local_30;
 int local_2c;
 undefined1 auStack_28 [32];
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
 /* WARNING: Subroutine does not return */
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
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar3,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar3;
}



/* Function: call_pipe_communication @ 001026a4 */

undefined4 call_pipe_communication(void)

{
 param_pipe_communication();
 return 0x2a;
}



/* Function: param_socket_create @ 001026b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 struct sockaddr local_18;
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
 local_18.sa_data[0xb] = '\0';
 local_18.sa_data[0xc] = '\0';
 local_18.sa_data[0xd] = '\0';
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
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar2,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_socket_create @ 001027bc */

undefined4 call_socket_create(void)

{
 param_socket_create();
 return 0x2a;
}



/* Function: param_shmget_shmat @ 001027d0 */

ulong param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 ulong uVar3;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffffffffffff) {
 uVar3 = 0xfffffffd;
 }
 else {
 builtin_strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 uVar3 = sVar2 & 0xffffffff;
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return uVar3;
}



/* Function: call_shmget_shmat @ 001028b4 */

undefined4 call_shmget_shmat(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 001028d4 */

undefined8 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 undefined8 uVar2;
 int iVar3;
 
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
 if (signal_received == 0) {
 uVar2 = 0xfffffffb;
 }
 else if (signal_number == 0xe) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffb;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}



/* Function: call_signal_handling @ 00102a48 */

undefined4 call_signal_handling(void)

{
 param_signal_handling();
 return 0x2a;
}



/* Function: test_system_calls @ 00102a5c */

void test_system_calls(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts((const char *)&DAT_001036b8);
 uVar2 = call_linux_syscall();
 __printf_chk(1,(const char *)&DAT_001036d8,uVar2);
 uVar2 = call_win32_api();
 __printf_chk(1,(const char *)&DAT_001036f8,uVar2);
 uVar2 = call_fork_exec();
 __printf_chk(1,(const char *)&DAT_00103718,uVar2);
 uVar2 = call_pipe_communication();
 __printf_chk(1,(const char *)&DAT_00103738,uVar2);
 uVar2 = call_socket_create();
 __printf_chk(1,(const char *)&DAT_00103758,uVar2);
 uVar2 = call_shmget_shmat();
 __printf_chk(1,(const char *)&DAT_00103778,uVar2);
 uVar2 = call_signal_handling();
 __printf_chk(1,(const char *)&DAT_00103798,uVar2);
 return;
}



/* Function: param_pthread_create @ 00102b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 pthread_t local_18;
 undefined4 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(0,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_pthread_create @ 00102bb0 */

undefined4 call_pthread_create(void)

{
 param_pthread_create(7);
 return 0x2a;
}



/* Function: param_pthread_join @ 00102bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_join(void)

{
 int iVar1;
 pthread_t *__arg;
 long lVar2;
 pthread_t *__newthread;
 int iVar3;
 pthread_t *ppVar4;
 pthread_t local_48 [4];
 int aiStack_28 [8];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __arg = local_48 + 3;
 aiStack_28[0] = 0;
 aiStack_28[1] = 0xb;
 local_48[3] = 0xa00000001;
 aiStack_28[4] = 0x15;
 aiStack_28[5] = 0x1e;
 aiStack_28[2] = 0x14;
 aiStack_28[3] = 0;
 aiStack_28[6] = 0;
 ppVar4 = local_48;
 iVar3 = 3;
 __newthread = ppVar4;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar3 = -1;
 goto LAB_00102c84;
 }
 __newthread = __newthread + 1;
 __arg = (pthread_t *)((long)__arg + 0xc);
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 lVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = pthread_join(*ppVar4,(void **)0x0);
 if (iVar1 != 0) {
 iVar3 = -2;
 break;
 }
 iVar3 = iVar3 + *(int *)((long)aiStack_28 + lVar2);
 ppVar4 = ppVar4 + 1;
 lVar2 = lVar2 + 0xc;
 } while (lVar2 != 0x24);
LAB_00102c84:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(0,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_pthread_join @ 00102ccc */

undefined4 call_pthread_join(void)

{
 param_pthread_join();
 return 0x2a;
}



/* Function: param_mutex_lock @ 00102ce0 */

undefined4 param_mutex_lock(ulong param_1,int param_2)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 int local_4;
 
 local_4 = param_2;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_4);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar3 = ppVar3 + 1;
 ppVar4 = __ptr;
 } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
 do {
 ppVar3 = ppVar4 + 1;
 pthread_join(*ppVar4,(void **)0x0);
 ppVar4 = ppVar3;
 } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != (int)param_1 * local_4) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00102ddc */

undefined4 call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return 0x2a;
}



/* Function: param_condition_variable @ 00102df8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_20;
 pthread_t local_18;
 undefined4 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 pthread_join(local_20,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_18);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(0,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_condition_variable @ 00102ec8 */

undefined4 call_condition_variable(void)

{
 param_condition_variable();
 return 0x2a;
}



/* Function: param_atomic_ops @ 00102edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t *__ptr;
 pthread_t *__newthread;
 long lVar3;
 undefined4 local_14;
 pthread_t local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = param_2;
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter_union._0_4_ = 0;
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 }
 else {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102fd4;
 }
 __newthread = __newthread + 1;
 } while (__newthread != __ptr + param_1);
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 lVar3 = 0;
 do {
 pthread_join(__ptr[lVar3],(void **)0x0);
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < (int)param_1);
 }
 iVar1 = (int)atomic_counter_union._0_4_;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00102fd4:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar2,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00103064 */

undefined4 call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return 0x2a;
}



/* Function: param_thread_local_storage @ 00103080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_thread_local_storage(uint param_1)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar3;
 ulong uVar4;
 long lVar5;
 undefined8 *puVar6;
 int iVar8;
 pthread_t *__newthread;
 ulong uVar9;
 int *local_10;
 long local_8;
 undefined8 *puVar7;
 
 local_8 = ___stack_chk_guard;
 uVar4 = -(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3;
 __ptr = malloc(uVar4);
 __ptr_00 = malloc(uVar4);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined8 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if ((int)param_1 < 1) {
 iVar8 = 0;
 iVar1 = 0;
 }
 else {
 uVar9 = (ulong)param_1;
 uVar4 = 0;
 do {
 pvVar3 = malloc(0x10);
 __ptr_00[uVar4] = (undefined8)pvVar3;
 __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar4 != uVar9);
 uVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar4]);
 if (iVar1 != 0) {
 if (-1 < (int)uVar4) {
 puVar6 = __ptr_00;
 do {
 puVar7 = puVar6 + 1;
 free((void *)*puVar6);
 puVar6 = puVar7;
 } while (puVar7 != __ptr_00 + (uVar4 & 0xffffffff) + 1);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001031ec;
 }
 uVar4 = uVar4 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != uVar9);
 lVar5 = 0;
 iVar1 = 0;
 iVar8 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar5),(void **)&local_10);
 iVar1 = iVar1 + *local_10;
 iVar8 = iVar8 + local_10[1];
 free(local_10);
 free(*(void **)((long)__ptr_00 + lVar5));
 lVar5 = lVar5 + 8;
 } while (lVar5 != uVar9 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar8) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001031ec:
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar2,(uintptr_t)&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_thread_local_storage @ 0010327c */

undefined4 call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return 0x2a;
}



/* Function: test_thread_concurrency @ 00103294 */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts((const char *)&DAT_001037c8);
 uVar2 = call_pthread_create();
 __printf_chk(1,(const char *)&DAT_001037e8,uVar2);
 uVar2 = call_pthread_join();
 __printf_chk(1,(const char *)&DAT_00103808,uVar2);
 uVar2 = call_mutex_lock();
 __printf_chk(1,(const char *)&DAT_00103828,uVar2);
 uVar2 = call_condition_variable();
 __printf_chk(1,(const char *)&DAT_00103848,uVar2);
 uVar2 = call_atomic_ops();
 __printf_chk(1,(const char *)&DAT_00103868,uVar2);
 uVar2 = call_thread_local_storage();
 __printf_chk(1,(const char *)&DAT_00103888,uVar2);
 return;
}



/* Function: main @ 00103340 */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}












/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
