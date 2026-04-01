/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <errno.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <strings.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <time.h>
#include <stdint.h>

typedef unsigned int uint;

/* Additional type definitions */
typedef void (*__sighandler_t)(int);
typedef int __pid_t;
typedef unsigned int __useconds_t;
typedef long long longlong;
typedef int key_t;
typedef unsigned short shmatt_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned int size_t;
typedef long time_t;
typedef int pid_t;
typedef long ssize_t;
typedef unsigned int socklen_t;
typedef struct { } pthread_attr_t;

struct ipc_perm {
 key_t __key;
 __uid_t uid;
 __gid_t gid;
 __uid_t cuid;
 __gid_t cgid;
 unsigned short mode;
 unsigned short __seq;
};

struct sockaddr {
 unsigned short sa_family;
 char sa_data[14];
};

/* Global variable declarations */
static int signal_received = 0;
static int signal_number = 0;
static pthread_mutex_t counter_mutex;
static pthread_mutex_t cond_mutex;
static pthread_cond_t cond;
static char ready = 0;
static char data = 0;
static int shared_counter = 0;
static int atomic_counter = 0;
static int in_GS_OFFSET = 0;
static unsigned int stack0x00000004 = 0;
static unsigned int stack0x00000008 = 0;

/* External function declarations */
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_di(void);
void signal_handler(int sig);
int __libc_start_main(int (*main)(int, char**, char**), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
void FUN_000113e0(unsigned int param_1);
void FUN_00012525(unsigned int param_1,unsigned int param_2);

/* Signal handler implementation */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}

/* struct shmid_ds definition for shmctl */
struct shmid_ds {
 struct ipc_perm shm_perm;
 size_t shm_segsz;
 time_t shm_atime;
 time_t shm_dtime;
 time_t shm_ctime;
 pid_t shm_cpid;
 pid_t shm_lpid;
 shmatt_t shm_nattch;
};

int *__errno_location(void);
int * __errno_location(void) { return &errno; }
void _exit(int status);
int __isoc99_sscanf(const char *str, const char *format, ...);
int bcmp(const void *s1, const void *s2, size_t n);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
int pthread_cancel(pthread_t thread);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmget(key_t key, size_t size, int shmflg);
key_t ftok(const char *pathname, int proj_id);
int raise(int sig);
unsigned int alarm(unsigned int seconds);
int usleep(__useconds_t useconds);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
unsigned int sleep(unsigned int seconds);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
int strcmp(const char *s1, const char *s2);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int printf(const char *format, ...);
FILE *fopen(const char *pathname, const char *mode);
int fclose(FILE *stream);
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
int open(const char *pathname, int flags, ...);
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int pipe(int pipefd[2]);
int socket(int domain, int type, int protocol);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int fileno(FILE *stream);
int unlink(const char *pathname);
void rewind(FILE *stream);
int execl(const char *path, const char *arg, ...);
__pid_t fork(void);
__pid_t waitpid(__pid_t pid, int *status, int options);
int wait(int *status);
int stat(const char *pathname, struct stat *buf);
__sighandler_t signal(int signum, __sighandler_t handler);
long syscall(long number, ...);

/* Forward declarations */
int main(int argc, char **argv);


/* LOCK/UNLOCK macros for atomic operations */
#define LOCK() do { } while(0)
#define UNLOCK() do { } while(0)

/* Data declarations */
extern char DAT_0001436c[];
extern char DAT_00014074[];
extern char DAT_0001408f[];
extern char DAT_000140aa[];
extern char DAT_000140c6[];
extern char DAT_000143d8[];
extern char DAT_000143cc[];
extern char DAT_000140e2[];
extern char DAT_00014026[];
extern char DAT_000140fe[];
extern char DAT_0001411a[];
extern char DAT_00014137[];
extern char DAT_00014153[];
extern char DAT_0001416f[];
extern char DAT_0001418b[];
extern char DAT_000141a6[];
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

// Decompiled by BinaryAI
// SHA256: 4dfc83a07d3fb4e7150305f4a8e8de471e507df407f52cd78717cfcbcca288a3

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}























































































































// Function: _start @ 0x113f0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
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

// Function: deregister_tm_clones @ 0x11430
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11470
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x114c0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x5c2f) == '\0') {
 if (*(int *)(unaff_EDI + 0x5b23) != 0) {
 FUN_000113e0(*(unsigned int *)(unaff_EDI + 0x5c2b));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x5c33);
 while (uVar1 < ((unaff_EDI + 0x5a4b) - (unaff_EDI + 0x5a47) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x5c33) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x5a47 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x5c33);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x5c2f) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11559
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1155d
void __x86_get_pc_thunk_di(void)
{
 return;
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
int param_malloc_free(uint param_1)
{
 int *__ptr;
 uint uVar1;
 int iVar2;
 uint uVar3;
 int unaff_ESI;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 != 0) {
 uVar1 = 0;
 if (2 < param_1 - 1) {
 uVar1 = 0;
 iVar2 = 0x14;
 do {
 __ptr[uVar1] = iVar2 + -0x14;
 __ptr[uVar1 + 1] = iVar2 + -10;
 __ptr[uVar1 + 2] = iVar2;
 __ptr[uVar1 + 3] = iVar2 + 10;
 uVar1 = uVar1 + 4;
 iVar2 = iVar2 + 0x28;
 } while ((param_1 & 0xfffffffc) != uVar1);
 }
 if ((param_1 & 3) != 0) {
 iVar2 = uVar1 * 10;
 uVar3 = 0;
 do {
 __ptr[uVar1 + uVar3] = iVar2;
 uVar3 = uVar3 + 1;
 iVar2 = iVar2 + 10;
 } while ((param_1 & 3) != uVar3);
 }
 unaff_ESI = *__ptr;
 }
 iVar2 = unaff_ESI + __ptr[param_1 - 1];
 free(__ptr);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x11af0
unsigned int call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x11b00
int param_memset(void *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (uint)*(byte *)((int)param_1 + uVar2 + 7) +
 (uint)*(byte *)((int)param_1 + uVar2 + 6) +
 (uint)*(byte *)((int)param_1 + uVar2 + 5) +
 (uint)*(byte *)((int)param_1 + uVar2 + 4) +
 (uint)*(byte *)((int)param_1 + uVar2 + 3) +
 (uint)*(byte *)((int)param_1 + uVar2 + 2) +
 (uint)*(byte *)((int)param_1 + uVar2 + 1) +
 (uint)*(byte *)((int)param_1 + uVar2) + iVar1;
 uVar2 = uVar2 + 8;
 } while ((param_2 & 0xfffffff8) != uVar2);
 }
 if ((param_2 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)((int)param_1 + uVar3 + uVar2);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 7) != uVar3);
 }
 }
 return iVar1;
}

// Function: call_memset @ 0x11bc0
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x11bd0
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,(int)param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x11c30
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11c40
void test_standard_library_functions(void)
{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 unsigned int uVar4;
 int iVar5;
 uint uVar6;
 int local_34;
 int local_30;
 unsigned int local_2c;
 char local_28;
 puts(&DAT_0001436c);
 local_28 = 0;
 local_2c = 0x62694c6f;
 local_30 = 0x6c6c6548;
 sVar1 = strlen((char *)&local_30);
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
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_30,&local_34);
 local_34 = local_34 + local_30;
 uVar6 = 0xffffffff;
 if (iVar2 != 2) {
 local_34 = -1;
 }
 printf(&DAT_0001411a,local_34);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar6 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_00014137,uVar6);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00014153,uVar4);
 printf(&DAT_0001416f,0x5a);
 printf(&DAT_0001418b,0);
 printf(&DAT_000141a6,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11e40
int param_linux_syscall(char *param_1_00,unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11e48;
 uVar3 = 0;
 iVar1 = syscall(5,param_1_00,0,0x11e48,param_1);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,param_1);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11e90
uint call_linux_syscall(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11e98;
 uVar3 = 0;
 iVar1 = syscall(5,"/etc/passwd",0,0x11e98,uVar3);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,uVar3);
 }
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x11ef0
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

// Function: call_win32_api @ 0x11f40
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

// Function: param_fork_exec @ 0x11f90
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint local_8;
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 if ((local_8 & 0x7f) != 0) {
 return 0xfffffffd;
 }
 return local_8 >> 8 & 0xff;
}

// Function: call_fork_exec @ 0x12010
uint call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 _Var1 = fork();
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x12080
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 int local_fd[2];
 char local_28 [32];
 iVar1 = pipe(local_fd);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_fd[1]);
 sVar3 = read(local_fd[0],local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_fd[0]);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 return uVar4;
 }
 close(local_fd[0]);
 write(local_fd[1],"HelloPipe",9);
 close(local_fd[1]);
 _exit(0);
 }
 return 0xfffffffe;
}

// Function: call_pipe_communication @ 0x12160
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x12180
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
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 local_1c.sa_data[2] = '\0';
 local_1c.sa_data[3] = '\0';
 local_1c.sa_data[4] = '\0';
 local_1c.sa_data[5] = '\0';
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

// Function: call_socket_create @ 0x12270
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x12290
size_t param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned int *__s;
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
 __s = (unsigned int *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned int *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(char *)(__s + 3) = 0;
 __s[2] = 0x79726f6d;
 __s[1] = 0x654d6465;
 *__s = 0x72616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x12380
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

// Function: param_signal_handling @ 0x123b0
unsigned int param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned int uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 return 0xffffffff;
 }
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
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

// Function: FUN_000113e0 @ 0x113e0
void FUN_000113e0(unsigned int param_1)
{
 (void)param_1;
 return;
}

// Function: FUN_00012525 @ 0x12525
void FUN_00012525(unsigned int param_1,unsigned int param_2)
{
 (void)param_1;
 (void)param_2;
 return;
}

// Function: call_signal_handling @ 0x12550
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x12570
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
 if ((_Var3 < 0) || ((local_status & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = -(uint)((local_status & 0xff00) != 0) | 0x2a;
 }
 }
 printf(&DAT_0001422d,uVar4);
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

// Function: thread_compute @ 0x12700
void *thread_compute(void *arg)
{
 int iVar1;
 int *piVar2;
 int *param_1 = (int *)arg;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x12730
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

// Function: call_pthread_create @ 0x127a0
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

// Function: thread_sum @ 0x12810
void *thread_sum(void *arg)
{
 uint uVar1;
 uint uVar2;
 longlong lVar3;
 uint *param_1 = (uint *)arg;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x12850
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 pthread_t local_40;
 pthread_t local_3c;
 pthread_t local_38;
 unsigned int local_34;
 unsigned int local_30;
 int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 int local_14;
 local_14 = 0;
 local_20 = 0;
 local_2c = 0;
 local_34 = 1;
 local_30 = 10;
 local_28 = 0xb;
 local_24 = 0x14;
 local_1c = 0x15;
 local_18 = 0x1e;
 iVar1 = pthread_create(&local_40,(pthread_attr_t *)0x0,thread_sum,&local_34);
 iVar4 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_3c,(pthread_attr_t *)0x0,thread_sum,&local_28);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_1c);
 if (iVar1 == 0) {
 iVar2 = pthread_join(local_40,(void **)0x0);
 iVar1 = local_2c;
 iVar4 = -2;
 if (iVar2 == 0) {
 iVar3 = pthread_join(local_3c,(void **)0x0);
 iVar2 = local_20;
 if (iVar3 == 0) {
 iVar3 = pthread_join(local_38,(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar2 + iVar1 + local_14;
 }
 }
 }
 }
 }
 }
 return iVar4;
}

// Function: call_pthread_join @ 0x12970
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x12990
void *thread_increment(void *arg)
{
 int iVar1;
 int *param_1 = (int *)arg;
 iVar1 = *param_1;
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

// Function: param_mutex_lock @ 0x12a00
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
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * param_2) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12af0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12b20
void * consumer_thread(void *arg)
{
 unsigned int *puVar1;
 unsigned int uVar2;
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
 return puVar1;
}

// Function: producer_thread @ 0x12ba0
void * producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x12c00
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

// Function: call_condition_variable @ 0x12cb0
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x12cd0
void *thread_atomic_increment(void *arg)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint *param_1 = (uint *)arg;
 uVar3 = *param_1;
 if (0 < (int)uVar3) {
 uVar5 = uVar3 & 3;
 uVar4 = 0;
 if (2 < uVar3 - 1) {
 uVar4 = 0;
 do {
 LOCK();
 uVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 1000;
 LOCK();
 if (uVar4 != uVar1) {
 atomic_counter = uVar1;
 }
 UNLOCK();
 LOCK();
 iVar2 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3e9;
 LOCK();
 if (uVar4 + 1 != iVar2) {
 atomic_counter = iVar2;
 }
 UNLOCK();
 LOCK();
 iVar2 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3ea;
 LOCK();
 if (uVar4 + 2 != iVar2) {
 atomic_counter = iVar2;
 }
 UNLOCK();
 LOCK();
 uVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3eb;
 LOCK();
 if (uVar4 + 3 != uVar1) {
 atomic_counter = uVar1;
 }
 UNLOCK();
 uVar4 = uVar4 + 4;
 } while (uVar4 != (uVar3 & 0xfffffffc));
 }
 for (; uVar5 != 0; uVar5 = uVar5 - 1) {
 LOCK();
 uVar3 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 1000;
 LOCK();
 if (uVar4 != uVar3) {
 atomic_counter = uVar3;
 }
 UNLOCK();
 uVar4 = uVar4 + 1;
 }
 }
 return (void *)0;
}

// Function: thread_atomic_load_store @ 0x12db5
void *thread_atomic_load_store(void *arg)
{
 (void)arg;
 return (void *)0;
}

// Function: param_atomic_ops @ 0x12dd0
unsigned int param_atomic_ops(int param_1,int param_2)
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

// Function: call_atomic_ops @ 0x12ee0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x12f10
void *thread_tls_test(void *arg)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 char *param_1 = (char *)arg;
 iVar2 = in_GS_OFFSET;
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET = iVar1;
 strncpy((char *)((int)&in_GS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}

// Function: param_thread_local_storage @ 0x12f70
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 int iVar1;
 unsigned int uVar2;
 pthread_t *__newthread;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int *local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < param_1) {
 iVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((int)__ptr_00 + iVar4 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar4);
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 if (0 < param_1) {
 iVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar4 * 4));
 if (iVar1 != 0) {
 iVar1 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar1 * 4 + 4));
 iVar1 = iVar1 + 1;
 } while (iVar4 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar4 = iVar4 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar4);
 if (0 < param_1) {
 iVar4 = 0;
 uVar3 = 0;
 uVar5 = 0;
 do {
 pthread_join(__ptr[iVar4],&local_14);
 uVar5 = uVar5 + *local_14;
 uVar3 = uVar3 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar4 * 4));
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 goto LAB_000130b6;
 }
 }
 }
 uVar5 = 0;
 uVar3 = 0;
LAB_000130b6:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar5) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x13140
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x13170
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 puts(&DAT_000143ab);
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 printf(&DAT_000142c3,uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_000142df,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_000142fc,uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_00014318,uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_00014334,uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00014350,uVar2);
 return;
}

// Function: main @ 0x13290
int main(int argc, char **argv)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x132c0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1330c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

