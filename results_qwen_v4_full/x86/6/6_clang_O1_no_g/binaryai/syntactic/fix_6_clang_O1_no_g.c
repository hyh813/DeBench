/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/syscall.h>

#include <stdbool.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// typedef unsigned long size_t; // already defined
// typedef long ssize_t; // already defined
typedef unsigned long uintptr_t;
// typedef long intptr_t; // already defined
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Additional type definitions
typedef int pid_t;
typedef pid_t __pid_t;
typedef unsigned int socklen_t;
typedef int key_t;
typedef unsigned int __useconds_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned char byte;
typedef unsigned long long ulonglong;

// POSIX types - already defined in pthread.h
// struct shmid_ds - already defined in sys/shm.h

// stat structure - already defined in sys/stat.h
// struct stat { ... };

// Socket types - already defined in sys/socket.h
// struct sockaddr { ... };

// FILE type - already defined in stdio.h
// typedef struct _IO_FILE FILE;



// Global variables
static int signal_received = 0;
static int signal_number = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static char ready = 0;
static char data = 0;
static int atomic_counter = 0;
static int shared_counter = 0;
static int *in_GS_OFFSET = NULL;

// External function declarations
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
int __x86_get_pc_thunk_di(void);
void signal_handler(int sig);
void LOCK(void);
void UNLOCK(void);
void thread_atomic_load_store(void *arg);
unsigned int main(void);
int __libc_start_main(int (*main)(void), int argc, void *ubp_start, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
int __isoc99_sscanf(const char *str, const char *format, ...);
int bcmp(const void *s1, const void *s2, size_t n);
int *__errno_location(void);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
int pthread_cancel(pthread_t thread);
unsigned int alarm(unsigned int seconds);
int raise(int sig);
int usleep(__useconds_t useconds);
unsigned int sleep(unsigned int seconds);
int unlink(const char *pathname);
void rewind(FILE *stream);
int fileno(FILE *stream);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int open(const char *pathname, int flags, ...);
int fclose(FILE *stream);
FILE *fopen(const char *pathname, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
void *malloc(size_t size);
void free(void *ptr);
void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
int puts(const char *s);
int snprintf(char *str, size_t size, const char *format, ...);
char *strncpy(char *dest, const char *src, size_t n);
int execl(const char *path, const char *arg, ...);
void _exit(int status);
pid_t waitpid(pid_t pid, int *wstatus, int options);
pid_t wait(int *wstatus);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int close(int fd);
int pipe(int pipefd[2]);
int socket(int domain, int type, int protocol);
key_t ftok(const char *pathname, int proj_id);
int shmget(key_t key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
char *strcpy(char *dest, const char *src);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int printf(const char *format, ...);
long syscall(long number, ...);
pid_t fork(void);
__sighandler_t signal(int signum, __sighandler_t handler);
int stat(const char *pathname, struct stat *statbuf);

// Data references
extern char DAT_0001436c[];
extern char DAT_00014074[];
extern char DAT_0001408f[];
extern char DAT_000140aa[];
extern char DAT_000140c6[];
extern char DAT_000140e2[];
extern char DAT_000140fe[];
extern char DAT_0001411a[];
extern char DAT_00014137[];
extern char DAT_00014153[];
extern char DAT_0001416f[];
extern char DAT_0001418b[];
extern char DAT_000141a6[];
extern char DAT_000143d8[];
extern char DAT_000143cc[];
extern char DAT_00014026[];
extern char DAT_00014390[];
extern char DAT_000141f5[];
extern char DAT_00014211[];
extern char DAT_0001422d[];
extern char DAT_00014249[];
extern char DAT_00014265[];
extern char DAT_00014281[];
extern char DAT_0001429d[];
extern char DAT_000142c3[];
extern char DAT_000142df[];
extern char DAT_000142fc[];
extern char DAT_00014318[];
extern char DAT_00014334[];
extern char DAT_00014350[];
extern char DAT_000143ab[];
extern int stack0x00000004;
extern int stack0x00000008;

// Data definitions
char DAT_0001436c[] = "Testing standard library functions\n";
char DAT_00014074[] = "strlen result: %zu\n";
char DAT_0001408f[] = "call_strcmp: %d\n";
char DAT_000140aa[] = "call_strlen: %u\n";
char DAT_000140c6[] = "call_memcpy: %u\n";
char DAT_000140e2[] = "call_memcmp: %d\n";
char DAT_000140fe[] = "call_printf: %d\n";
char DAT_0001411a[] = "call_scanf: %d\n";
char DAT_00014137[] = "call_fopen_fclose: %u\n";
char DAT_00014153[] = "call_fread_fwrite: %u\n";
char DAT_0001416f[] = "call_malloc_free: %d\n";
char DAT_0001418b[] = "call_memset: %u\n";
char DAT_000141a6[] = "call_strchr_strstr: %u\n";
char DAT_000143d8[] = "BinBenchTest";
char DAT_000143cc[] = "BinBenchTesT";
char DAT_00014026[] = "TestName";
char DAT_00014390[] = "Testing system calls\n";
char DAT_000141f5[] = "call_linux_syscall: %d\n";
char DAT_00014211[] = "call_win32_api: %u\n";
char DAT_0001422d[] = "call_fork_exec: %d\n";
char DAT_00014249[] = "call_pipe_communication: %u\n";
char DAT_00014265[] = "call_socket_create: %u\n";
char DAT_00014281[] = "call_shmget_shmat: %u\n";
char DAT_0001429d[] = "call_signal_handling: %u\n";
char DAT_000142c3[] = "call_pthread_create: %u\n";
char DAT_000142df[] = "call_pthread_join: %d\n";
char DAT_000142fc[] = "call_mutex_lock: %u\n";
char DAT_00014318[] = "call_condition_variable: %u\n";
char DAT_00014334[] = "call_atomic_ops: %u\n";
char DAT_00014350[] = "call_thread_local_storage: %u\n";
char DAT_000143ab[] = "Testing thread concurrency\n";
int stack0x00000004 = 0;
int stack0x00000008 = 0;

// Decompiled by BinaryAI
// SHA256: 1f8c23f8d9f588dcbcb5b38277dc36407ea6892dd33c135ea70704cf07c34568



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}





































































































// Function pointer type for pthread_create
typedef void *(*__start_routine)(void *);

















// Function: FUN_000113e0 @ 0x113e0
int FUN_000113e0(unsigned int param_1)
{
 (void)param_1;
 return 0;
}



// Function: __i686.get_pc_thunk.bx @ 0x1141c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11420
void __x86_get_pc_thunk_bx(void)
{
 return;
}







// Function: __x86.get_pc_thunk.dx @ 0x11559
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1155d
int __x86_get_pc_thunk_di(void);
int __x86_get_pc_thunk_di(void)
{
 int ret;
 __asm__("movl %%ebx, %0" : "=r"(ret));
 return ret;
}

// Function: param_strcpy @ 0x11570
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x115b0
void call_strcpy(void)
{
 unsigned int local_24;
 unsigned int local_20;
 char local_1c;
 local_1c = 0;
 local_20 = 0x62694c6f;
 local_24 = 0x6c6c6548;
 strlen((char *)&local_24);
 return;
}

// Function: param_strcmp @ 0x115f0
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

// Function: call_strcmp @ 0x11630
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11640
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11670
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11680
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x116b0
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x116c0
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

// Function: call_memcmp @ 0x11700
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2 + iVar3;
}

// Function: param_printf @ 0x11770
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x117a0
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 return;
}

// Function: param_scanf @ 0x117d0
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_c;
 int local_8;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_8,&local_c);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_c + local_8;
 }
 return iVar2;
}

// Function: call_scanf @ 0x11820
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x11870
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int iVar1;
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

// Function: call_fopen_fclose @ 0x118c0
uint call_fopen_fclose(void)
{
 FILE *__stream;
 int iVar1;
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

// Function: param_fread_fwrite @ 0x11920
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char local_30 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_30,1,0x12,__s);
 local_30[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = bcmp(local_30,"BinBench Test Data",0x13);
 uVar2 = 0xfffffffd;
 if (iVar3 == 0) {
 uVar2 = 0x2a;
 }
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x11a00
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11a30
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int iVar2;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 __ptr[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (param_1 != iVar2);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x11a90
int call_malloc_free(void)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 100);
 iVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: param_memset @ 0x11af0
int param_memset(void *param_1,size_t param_2)
{
 int iVar1;
 size_t sVar2;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 sVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)((int)param_1 + sVar2);
 sVar2 = sVar2 + 1;
 } while (param_2 != sVar2);
 }
 return iVar1;
}

// Function: call_memset @ 0x11b40
unsigned int call_memset(void)
{
 int iVar1;
 unsigned int local_28 [10];
 iVar1 = 0;
 do {
 local_28[iVar1] = 0xff;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 10);
 return 0;
}

// Function: param_strchr_strstr @ 0x11b70
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,(int)param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x11bd0
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11be0
void test_standard_library_functions(void)
{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 unsigned int uVar4;
 int *__ptr;
 int iVar5;
 int *piVar6;
 uint uVar7;
 int local_3c;
 int local_38 [2];
 char local_30;
 puts(&DAT_0001436c);
 local_30 = 0;
 local_38[1] = 0x62694c6f;
 local_38[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_38);
 printf(&DAT_00014074,sVar1);
 printf(&DAT_0001408f,0);
 printf(&DAT_000140aa,0xc);
 printf(&DAT_000140c6,0x5a);
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 iVar3 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar5 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar5 = 1;
 }
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 printf(&DAT_000140e2,iVar3 + iVar5);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 printf(&DAT_000140fe,iVar2);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_38,&local_3c);
 local_3c = local_3c + local_38[0];
 iVar3 = -1;
 if (iVar2 != 2) {
 local_3c = -1;
 }
 printf(&DAT_0001411a,local_3c);
 __stream = fopen("/etc/passwd","r");
 uVar7 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar7 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_00014137,uVar7);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00014153,uVar4);
 __ptr = (int *)malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar2 = 0;
 piVar6 = __ptr;
 do {
 *piVar6 = iVar2;
 iVar2 = iVar2 + 10;
 piVar6 = piVar6 + 1;
 } while (iVar2 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 printf(&DAT_0001416f,iVar3);
 iVar2 = 0;
 do {
 local_38[iVar2] = 0xff;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 printf(&DAT_0001418b,0);
 printf(&DAT_000141a6,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11e60
int param_linux_syscall(unsigned int param_1_00,unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = open((const char*)param_1,0,0x1b6);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 close(iVar1);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11eb0
uint call_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = open("/etc/passwd",0,0x1b6);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 close(iVar1);
 }
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x11f10
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_5c;
 iVar1 = stat(param_1,&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x11f60
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_5c;
 iVar1 = stat("/etc/passwd",&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x11fb0
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x12030
uint call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return -(uint)(uVar2 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x120b0
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
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

// Function: call_pipe_communication @ 0x12190
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x121b0
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 unsigned int local_20;
 struct sockaddr local_1c;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_20 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_20,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[11] = '\0';
 local_1c.sa_data[12] = '\0';
 local_1c.sa_data[13] = '\0';
 local_1c.sa_data[6] = '\0';
 local_1c.sa_data[7] = '\0';
 local_1c.sa_data[8] = '\0';
 local_1c.sa_data[9] = '\0';
 local_1c.sa_data[2] = '\0';
 local_1c.sa_data[3] = '\0';
 local_1c.sa_data[4] = '\0';
 local_1c.sa_data[5] = '\0';
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 iVar1 = bind(__fd,&local_1c,0x10);
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

// Function: call_socket_create @ 0x122a0
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x122c0
size_t param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 char *__s;
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
 __s = (char *)shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(char *)(__s + 12) = 0;
 ((unsigned int *)__s)[2] = 0x79726f6d;
 ((unsigned int *)__s)[1] = 0x654d6465;
 *(unsigned int *)__s = 0x72616853;
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x123b0
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x123e0
unsigned int param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned int uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 uVar3 = 0xfffffffe;
 }
 else {
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
 uVar3 = 0xfffffffd;
 }
 else {
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
 }
 }
 }
 return uVar3;
}

// Function: signal_handler @ 0x12545
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
 return;
}

// Function: LOCK @ stub
void LOCK(void)
{
 pthread_mutex_lock(&counter_mutex);
 return;
}

// Function: UNLOCK @ stub
void UNLOCK(void)
{
 pthread_mutex_unlock(&counter_mutex);
 return;
}

// Function: thread_atomic_load_store @ stub
void thread_atomic_load_store(void *arg)
{
 (void)arg;
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 return;
}

// Function: call_signal_handling @ 0x12570
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x12590
void test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 uint uVar4;
 unsigned int uVar5;
 unsigned int uVar6;
 struct stat local_6c;
 int local_status;
 puts(&DAT_00014390);
 uVar6 = 0;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar6);
 }
 printf(&DAT_000141f5,iVar1 >> 0x1f | 0x2a);
 iVar1 = stat("/etc/passwd",&local_6c);
 uVar6 = 0xfffffffe;
 if (0 < local_6c.st_size) {
 uVar6 = 0x2a;
 }
 uVar5 = 0xffffffff;
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00014211,uVar6);
 _Var3 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,&local_status,0);
 if (_Var3 < 0) {
 uVar4 = 0xfffffffe;
 }
 else {
 uVar4 = 0xfffffffd;
 if ((local_status & 0x7f) == 0) {
 uVar4 = local_status >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_0001422d,-(uint)(uVar4 != 0) | 0x2a);
 uVar6 = param_pipe_communication();
 printf(&DAT_00014249,uVar6);
 uVar6 = param_socket_create();
 printf(&DAT_00014265,uVar6);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00014281,uVar5);
 uVar6 = param_signal_handling();
 printf(&DAT_0001429d,uVar6);
 return;
}

// Function: thread_compute @ 0x12720
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 int *pval;
 pval = (int *)param_1;
 iVar1 = *pval;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x12750
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = param_1;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x127c0
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}

// Function: thread_sum @ 0x12830
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 longlong lVar3;
 unsigned int *pval;
 pval = (unsigned int *)param_1;
 pval[2] = 0;
 uVar1 = *pval;
 uVar2 = pval[1];
 if ((int)uVar1 <= (int)uVar2) {
 lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
 pval[2] = uVar1 + pval[2] + (uVar1 + 1) * (uVar2 - uVar1) +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x12870
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned int *__arg;
 int *piVar4;
 unsigned int local_44;
 unsigned int local_40;
 int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 pthread_t apStack_1c [3];
 local_24 = 0;
 local_30 = 0;
 local_3c = 0;
 local_44 = 1;
 local_40 = 10;
 local_38 = 0xb;
 local_34 = 0x14;
 local_2c = 0x15;
 local_28 = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 iVar1 = pthread_create(&apStack_1c[iVar3/4],(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 piVar4 = &local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}

// Function: call_pthread_join @ 0x12950
int call_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned int *__arg;
 int *piVar4;
 unsigned int local_44;
 unsigned int local_40;
 int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 pthread_t apStack_1c [3];
 local_24 = 0;
 local_30 = 0;
 local_3c = 0;
 local_44 = 1;
 local_40 = 10;
 local_38 = 0xb;
 local_34 = 0x14;
 local_2c = 0x15;
 local_28 = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 iVar1 = pthread_create(&apStack_1c[iVar3/4],(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 piVar4 = &local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}

// Function: thread_increment @ 0x12a30
void *thread_increment(void *param_1)
{
 int iVar1;
 int *pval;
 pval = (int *)param_1;
 iVar1 = *pval;
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

// Function: param_mutex_lock @ 0x12aa0
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *__newthread;
 int iVar3;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 __newthread = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * param_2) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12ba0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12bd0
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

// Function: producer_thread @ 0x12c50
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

// Function: param_condition_variable @ 0x12cb0
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_14;
 unsigned int *local_10;
 pthread_t local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_10);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x12d60
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x12d80
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 int *pval;
 pval = (int *)param_1;
 if (0 < *pval) {
 iVar2 = 0;
 do {
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = iVar2 + 1000;
 LOCK();
 if (iVar2 != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 iVar2 = iVar2 + 1;
 } while (iVar2 != *pval);
 }
 return (void *)0;
}

// Function: FUN_00012dd5 @ 0x12dd5
unsigned int FUN_00012dd5(int unaff_retaddr)
{
 *(int *)(unaff_retaddr + 0x4373) = *(int *)(unaff_retaddr + 0x4373) + 100;
 return 0;
}

// Function: param_atomic_ops @ 0x12df0
unsigned int param_atomic_ops(int param_1)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 iVar3 = param_1;
 __newthread = __ptr;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,
 &stack0x00000008);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 iVar3 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_14,(void **)0x0);
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar3) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x12f00
void call_atomic_ops(void)
{
 param_atomic_ops(4);
 return;
}

// Function: thread_tls_test @ 0x12f30
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *tls_data;
 char *str;
 static int tls_value = 0;
 str = (char *)param_1;
 iVar2 = tls_value;
 iVar1 = iVar2 + 0x32;
 tls_value = iVar1;
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)piVar3;
}

// Function: param_thread_local_storage @ 0x12f90
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void *__ptr_00;
 unsigned int uVar1;
 char *__s;
 int iVar2;
 pthread_t *__newthread;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int *local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 uVar1 = 0xffffffff;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void *)0x0)) {
 if (0 < param_1) {
 iVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((int)__ptr_00 + iVar4 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar4);
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 }
 if (0 < param_1) {
 iVar4 = 0;
 __newthread = __ptr;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar4 * 4));
 if (iVar2 != 0) {
 iVar2 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar2 * 4 + 4));
 iVar2 = iVar2 + 1;
 } while (iVar4 != iVar2);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar4 = iVar4 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar4);
 }
 if (param_1 < 1) {
 uVar3 = 0;
 uVar5 = 0;
 }
 else {
 iVar4 = 0;
 uVar5 = 0;
 uVar3 = 0;
 do {
 pthread_join(__ptr[iVar4],&local_14);
 uVar3 = uVar3 + *local_14;
 uVar5 = uVar5 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar4 * 4));
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 }
 free(__ptr_00);
 free(__ptr);
 uVar1 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar5 | param_1 * 100 ^ uVar3) == 0) {
 uVar1 = 0x2a;
 }
 }
 return uVar1;
}

// Function: call_thread_local_storage @ 0x13150
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x13180
void test_thread_concurrency(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 pthread_t *__newthread;
 unsigned int uVar4;
 int *piVar5;
 unsigned int *local_48;
 pthread_t local_44;
 unsigned int local_40;
 int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 pthread_t local_1c [3];
 unsigned int thread_args[3][3];
 puts(&DAT_000143ab);
 thread_args[0][0] = 7;
 __newthread = &local_44;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_compute,&thread_args[0][0]);
 uVar4 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_44,&local_48);
 uVar4 = *local_48;
 free(local_48);
 }
 printf(&DAT_000142c3,uVar4);
 local_24 = 0;
 local_30 = 0;
 local_3c = 0;
 local_44 = 1;
 local_40 = 10;
 local_38 = 0xb;
 local_34 = 0x14;
 local_2c = 0x15;
 local_28 = 0x1e;
 thread_args[0][0] = local_44;
 thread_args[0][1] = local_40;
 thread_args[0][2] = local_3c;
 thread_args[1][0] = local_38;
 thread_args[1][1] = local_34;
 thread_args[1][2] = local_30;
 thread_args[2][0] = local_2c;
 thread_args[2][1] = local_28;
 thread_args[2][2] = local_24;
 iVar1 = 0;
 do {
 iVar2 = pthread_create(&local_1c[iVar1],(pthread_attr_t *)0x0,thread_sum,
 &thread_args[iVar1][0]);
 if (iVar2 != 0) {
 iVar1 = -1;
 goto LAB_000132c0;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 3);
 piVar5 = &local_3c;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar3 = pthread_join(local_1c[iVar2],(void **)0x0);
 if (iVar3 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + thread_args[iVar2][2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 3);
LAB_000132c0:
 printf(&DAT_000142df,iVar1);
 uVar4 = param_mutex_lock(4,1000);
 printf(&DAT_000142fc,uVar4);
 uVar4 = param_condition_variable();
 printf(&DAT_00014318,uVar4);
 uVar4 = param_atomic_ops(4);
 printf(&DAT_00014334,uVar4);
 uVar4 = param_thread_local_storage(4);
 printf(&DAT_00014350,uVar4);
 return;
}

// Function: main @ 0x13350
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x13380
void __do_global_ctors_aux(void)
{
 return;
}



