#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <errno.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <netinet/in.h>
#include <time.h>

/* Additional type definitions */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int __useconds_t;

/* Global variables */
volatile int signal_received = 0;
volatile int signal_number = 0;
volatile int shared_counter = 0;
volatile int atomic_counter = 0;
volatile int ready = 0;
volatile int data = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
char completed_0 = 0;
void *__dso_handle = 0;
int stack0x00000004 = 0;

/* Data definitions */
char DAT_000133fd[1] = {0};
char DAT_00013401[1] = {0};
char DAT_00013405[1] = {0};
char DAT_00013409[1] = {0};
char DAT_0001340d[1] = {0};
char DAT_00013496[] = "Testing string functions...\n";
char DAT_000134bb[] = "  strcpy: %d\n";
char DAT_000134d6[] = "  strcmp: %d\n";
char DAT_000134f1[] = "  strlen: %d\n";
char DAT_0001350d[] = "  memcpy: %d\n";
char DAT_00013529[] = "  memcmp: %d\n";
char DAT_00013545[] = "  printf: %d\n";
char DAT_00013561[] = "  scanf: %d\n";
char DAT_0001357e[] = "  fopen/fclose: %d\n";
char DAT_0001359a[] = "  fread/fwrite: %d\n";
char DAT_000135b6[] = "  malloc/free: %d\n";
char DAT_000135d2[] = "  memset: %d\n";
char DAT_000135ed[] = "  strchr/strstr: %d\n";
char DAT_0001363c[] = "Testing system calls...\n";
char DAT_00013658[] = "  linux_syscall: %d\n";
char DAT_00013674[] = "  win32_api: %d\n";
char DAT_00013690[] = "  fork_exec: %d\n";
char DAT_000136ac[] = "  pipe_communication: %d\n";
char DAT_000136c8[] = "  socket_create: %d\n";
char DAT_000136e4[] = "  shmget_shmat: %d\n";
char DAT_00013700[] = "  signal_handling: %d\n";
char DAT_00013726[] = "Testing thread concurrency...\n";
char DAT_00013745[] = "  pthread_create: %d\n";
char DAT_00013761[] = "  pthread_join: %d\n";
char DAT_0001377e[] = "  mutex_lock: %d\n";
char DAT_0001379a[] = "  condition_variable: %d\n";
char DAT_000137b6[] = "  atomic_ops: %d\n";
char DAT_000137d2[] = "  thread_local_storage: %d\n";

/* Helper functions */
static inline int SCARRY4(int a, int b) {
    return ((unsigned int)a + (unsigned int)b) < (unsigned int)a;
}


/* Standard library functions that need explicit declarations */
int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void));
void __cxa_finalize(void *dso_handle);
void __gmon_start__(void);
void call_weak_fn(void);
int main(int argc, char **argv, char **envp);
int *__errno_location(void);
int __isoc99_sscanf(const char *str, const char *format, ...);
int fileno(FILE *stream);
key_t ftok(const char *pathname, int proj_id);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
int pthread_cancel(pthread_t thread);
/* Atomic builtin functions */
int __atomic_fetch_add_4(volatile int *ptr, int val);
int __atomic_compare_exchange_4(volatile int *ptr, int *expected, int desired, int success_memorder, int failure_memorder);
int __atomic_load_4(volatile int *ptr, int memorder);
void __atomic_store_4(volatile int *ptr, int val, int memorder);
/* pthread functions */
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);
/* sighandler_t type for signal handlers */
typedef void (*sighandler_t)(int);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int socket(int domain, int type, int protocol);
int raise(int sig);
int usleep(unsigned int usec);
unsigned int sleep(unsigned int seconds);
pid_t waitpid(pid_t pid, int *wstatus, int options);
long syscall(long number, ...);
pid_t wait(int *wstatus);
pid_t fork(void);
int execl(const char *path, const char *arg, ...);
void _exit(int status);
void abort(void);
int pipe(int pipefd[2]);
ssize_t write(int fd, const void *buf, size_t count);
ssize_t read(int fd, void *buf, size_t count);
int close(int fd);
int unlink(const char *pathname);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmget(key_t key, size_t size, int shmflg);
int snprintf(char *str, size_t size, const char *format, ...);
void rewind(FILE *stream);
char *strncpy(char *dest, const char *src, size_t n);



void signal_handler(int param_1);



/* Pthread types are already defined in pthread.h */
typedef void *(*__start_routine)(void *);

/* alarm function */
unsigned int alarm(unsigned int seconds);

/* ARM TLS function stub (for compatibility) */
static inline int *__aeabi_read_tp(void) {
    static int thread_ptr[16] = {0};
    return thread_ptr;
}

/* ipc_perm, shmatt_t, and shmid_ds are already defined in sys/ipc.h and sys/shm.h */

// Decompiled by BinaryAI
// SHA256: 5fc31d2a69d59c309c25cc5334c6519831cc0d811b6485d010ccceac1510c832

// Function: _init @ 0x10c20
int _init(void *ctx)
{
 (void)ctx;
 call_weak_fn();
 return 0;
}















































// Function: <EXTERNAL>::__atomic_store_4 @ 0x10ee0
void __atomic_store_4_fallback(volatile void *ptr, int val, int memorder)
{
 __atomic_store_4((volatile int *)ptr, val, memorder);
}

// Function: _start @ 0x10f40
void _start(unsigned int param_1,unsigned int param_2)
{
 (void)param_1;
 __libc_start_main((int (*)(int, char **, char **))main, (int)param_2, (char **)(&stack0x00000004), 0, 0, 0);
 abort();
}

// Function: call_weak_fn @ 0x10f84
void call_weak_fn(void)
{
 /* __gmon_start__ is a weak symbol - may not be present */
 return;
}

// Function: deregister_tm_clones @ 0x10fa8
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10fec
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1103c
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: param_strcpy @ 0x110a8
size_t param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 return strlen(param_1);
}

// Function: call_strcpy @ 0x110dc
unsigned int call_strcpy(void)
{
 unsigned int uVar1;
 char auStack_28 [32];
 uVar1 = param_strcpy(auStack_28,"HelloLib");
 return uVar1;
}

// Function: param_strcmp @ 0x11110
int param_strcmp(char *param_1,char *param_2)
{
 int local_18;
 local_18 = strcmp(param_1,param_2);
 if (local_18 < 1) {
 local_18 = local_18 >> 0x1f;
 }
 else {
 local_18 = 1;
 }
 return local_18;
}

// Function: call_strcmp @ 0x11170
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_000133fd,&DAT_00013401);
 iVar2 = param_strcmp(&DAT_00013405,&DAT_00013409);
 iVar3 = param_strcmp(&DAT_00013409,&DAT_0001340d);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x111f4
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x11220
void call_strlen(void)
{
 param_strlen("BinBench2025");
 return;
}

// Function: param_memcpy @ 0x11250
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11288
int call_memcpy(void)
{
 int local_38;
 unsigned int local_34;
 int local_30;
 unsigned int local_2c;
 int local_28;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 local_24 = 10;
 uStack_20 = 0x14;
 uStack_1c = 0x1e;
 uStack_18 = 0x28;
 uStack_14 = 0x32;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0;
 local_34 = 0;
 local_38 = 0;
 param_memcpy(&local_38,&local_24,0x14);
 return local_38 + local_30 + local_28;
}

// Function: param_memcmp @ 0x112f4
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int local_1c;
 local_1c = memcmp(param_1,param_2,param_3);
 if (local_1c < 1) {
 local_1c = local_1c >> 0x1f;
 }
 else {
 local_1c = 1;
 }
 return local_1c;
}

// Function: call_memcmp @ 0x1135c
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 local_1c = 2;
 local_18 = 4;
 local_20 = 1;
 local_28 = 2;
 local_24 = 3;
 local_2c = 1;
 iVar1 = param_memcmp(&local_14,&local_20,sizeof(int));
 iVar2 = param_memcmp(&local_14,&local_2c,0xc);
 return iVar1 + iVar2;
}

// Function: param_printf @ 0x11438
int param_printf(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x11478
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,"Test");
 return uVar1;
}

// Function: param_scanf @ 0x114ac
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 unsigned int local_10;
 int local_c;
 (void)param_1;
 local_10 = param_1;
 iVar1 = __isoc99_sscanf((const char *)param_1,"%d,%d",&local_14,&local_18);
 if (iVar1 == 2) {
 local_c = local_14 + local_18;
 }
 else {
 local_c = -1;
 }
 return local_c;
}

// Function: call_scanf @ 0x1151c
void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x1153c
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int local_c;
 __stream = fopen(param_1,"r");
 if (__stream == (FILE *)0x0) {
 local_c = -1;
 }
 else {
 local_c = fileno(__stream);
 fclose(__stream);
 }
 return local_c;
}

// Function: call_fopen_fclose @ 0x115b0
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x115ec
unsigned int param_fread_fwrite(char *param_1)
{
 char *__ptr;
 FILE *__s;
 size_t sVar1;
 size_t sVar2;
 int iVar3;
 bool bVar4;
 char acStack_34 [32];
 char *local_14;
 char *local_10;
 unsigned int local_c;
 local_14 = "BinBench Test Data";
 local_10 = param_1;
 __s = fopen(param_1,"w+");
 (void)__ptr;
 __ptr = local_14;
 if (__s == (FILE *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 sVar1 = strlen(local_14);
 sVar1 = fwrite(__ptr,1,sVar1,__s);
 sVar2 = strlen(local_14);
 if (sVar1 == sVar2) {
 rewind(__s);
 sVar2 = fread(acStack_34,1,sVar1,__s);
 acStack_34[sVar2] = '\0';
 fclose(__s);
 unlink(local_10);
 bVar4 = false;
 if (sVar2 == sVar1) {
 iVar3 = strcmp(acStack_34,local_14);
 bVar4 = iVar3 == 0;
 }
 local_c = 0xfffffffd;
 if (bVar4) {
 local_c = 0x2a;
 }
 }
 else {
 fclose(__s);
 local_c = 0xfffffffe;
 }
 }
 return local_c;
}

// Function: call_fread_fwrite @ 0x11744
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11764
int param_malloc_free(uint param_1)
{
 int *__ptr;
 uint local_18;
 int local_c;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 __ptr[local_18] = local_18 * 10;
 }
 local_c = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return local_c;
}

// Function: call_malloc_free @ 0x1182c
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x11844
int param_memset(void *param_1,uint param_2)
{
 uint local_1c;
 int local_18;
 memset(param_1,0,param_2);
 local_18 = 0;
 for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
 local_18 = local_18 + (uint)*(byte *)((int)param_1 + local_1c);
 }
 return local_18;
}

// Function: call_memset @ 0x118d4
int call_memset(void)
{
 int local_34;
 int local_30 [10];
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 local_30[local_34] = 0xff;
 }
 param_memset(local_30,0x28);
 return local_30[0] + local_30[9];
}

// Function: param_strchr_strstr @ 0x11944
int param_strchr_strstr(char *param_1,byte param_2,char *param_3)
{
 char *pcVar1;
 int local_2c;
 int local_28;
 pcVar1 = strchr(param_1,(uint)param_2);
 if (pcVar1 == (char *)0x0) {
 local_28 = -1;
 }
 else {
 local_28 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 local_2c = -1;
 }
 else {
 local_2c = (int)pcVar1 - (int)param_1;
 }
 return local_28 + local_2c;
}

// Function: call_strchr_strstr @ 0x11a04
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x11a4c
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 printf(&DAT_00013496);
 uVar1 = call_strcpy();
 printf(&DAT_000134bb,uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_000134d6,uVar1);
 uVar1 = call_strlen();
 printf(&DAT_000134f1,uVar1);
 uVar1 = call_memcpy();
 printf(&DAT_0001350d,uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_00013529,uVar1);
 uVar1 = call_printf();
 printf(&DAT_00013545,uVar1);
 uVar1 = call_scanf();
 printf(&DAT_00013561,uVar1);
 uVar1 = call_fopen_fclose();
 printf(&DAT_0001357e,uVar1);
 uVar1 = call_fread_fwrite();
 printf(&DAT_0001359a,uVar1);
 uVar1 = call_malloc_free();
 printf(&DAT_000135b6,uVar1);
 uVar1 = call_memset();
 printf(&DAT_000135d2,uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_000135ed,uVar1);
 return;
}

// Function: param_linux_syscall @ 0x11b8c
int param_linux_syscall(const char *param_1)
{
 int *piVar1;
 int local_c;
 local_c = syscall(5,param_1,0);
 if (local_c == -1 || local_c + 1 < 0 != SCARRY4(local_c,1)) {
 piVar1 = __errno_location();
 local_c = -*piVar1;
 }
 else {
 syscall(6,local_c);
 }
 return local_c;
}

// Function: call_linux_syscall @ 0x11bfc
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x11c38
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 struct stat sStack_68;
 char *local_10;
 unsigned int local_c;
 local_10 = param_1;
 iVar1 = stat(param_1,&sStack_68);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 local_c = 0xffffffff;
 }
 else {
 local_c = 0xfffffffe;
 if (0 < sStack_68.st_size) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_win32_api @ 0x11c94
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x11cb4
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 pid_t _Var1;
 byte local_1c;
 byte local_1b;
 pid_t local_18;
 unsigned int local_14;
 char *local_10;
 uint local_c;
 local_14 = param_2;
 local_10 = param_1;
 local_1b = 0;
 local_18 = fork();
 if (local_18 == -1 || local_18 + 1 < 0 != SCARRY4(local_18,1)) {
 local_c = 0xffffffff;
 }
 else {
 if (local_18 == 0) {
 execl(local_10,local_10,local_14,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(local_18,(int *)&local_1c,0);
 if (_Var1 == -1 || _Var1 + 1 < 0 != SCARRY4(_Var1,1)) {
 local_c = 0xfffffffe;
 }
 else if ((local_1c & 0x7f) == 0) {
 local_c = (uint)local_1b;
 }
 else {
 local_c = 0xfffffffd;
 }
 }
 return local_c;
}

// Function: call_fork_exec @ 0x11d80
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x11dc0
unsigned int param_pipe_communication(void)
{
 int iVar1;
 pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 char auStack_34 [32];
 int local_14;
 int local_10;
 unsigned int local_c;
 iVar1 = pipe(&local_14);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 local_c = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 == -1 || _Var2 + 1 < 0 != SCARRY4(_Var2,1)) {
 local_c = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_14);
 iVar1 = local_10;
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(local_10);
 _exit(0);
 }
 close(local_10);
 sVar3 = read(local_14,auStack_34,0x1f);
 auStack_34[sVar3] = 0;
 close(local_14);
 wait((void *)0x0);
 local_c = 0xfffffffd;
 if (0 < sVar3) {
 local_c = 0x2a;
 }
 }
 }
 return local_c;
}

// Function: call_pipe_communication @ 0x11ed8
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x11eec
unsigned int param_socket_create(void)
{
 uint16_t uVar1;
 int iVar2;
 struct sockaddr_in local_24;
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_10 = socket(AF_INET,SOCK_STREAM,0);
 if (local_10 == -1 || local_10 + 1 < 0 != SCARRY4(local_10,1)) {
 local_c = 0xffffffff;
 }
 else {
 local_14 = 1;
 iVar2 = setsockopt(local_10,SOL_SOCKET,SO_REUSEADDR,&local_14,sizeof(local_14));
 if (iVar2 == -1 || iVar2 + 1 < 0 != SCARRY4(iVar2,1)) {
 close(local_10);
 local_c = 0xfffffffe;
 }
 else {
 memset(&local_24, 0, sizeof(local_24));
 local_24.sin_family = AF_INET;
 uVar1 = htons(0);
 local_24.sin_port = uVar1;
 local_24.sin_addr.s_addr = INADDR_ANY;
 iVar2 = bind(local_10,(struct sockaddr *)&local_24,sizeof(local_24));
 if (iVar2 == -1 || iVar2 + 1 < 0 != SCARRY4(iVar2,1)) {
 close(local_10);
 local_c = 0xfffffffd;
 }
 else {
 iVar2 = listen(local_10,5);
 if (iVar2 == -1 || iVar2 + 1 < 0 != SCARRY4(iVar2,1)) {
 close(local_10);
 local_c = 0xfffffffc;
 }
 else {
 close(local_10);
 local_c = 0x2a;
 }
 }
 }
 }
 return local_c;
}

// Function: call_socket_create @ 0x12020
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x12034
size_t param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t local_c;
 (void)__dest;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 local_c = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key == -1 || __key + 1 < 0 != SCARRY4(__key,1)) {
 local_c = 0xffffffff;
 }
 else {
 iVar1 = (int)shmget(__key,0x1000,0x3b6);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 local_c = 0xfffffffe;
 }
 else {
 __dest = (char *)shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffff) {
 local_c = 0xfffffffd;
 }
 else {
 strcpy(__dest,"SharedMemory");
 local_c = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return local_c;
}

// Function: call_shmget_shmat @ 0x12178
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

// Function: param_signal_handling @ 0x121a8
unsigned int param_signal_handling(void)
{
 int iVar1;
 sighandler_t p_Var2;
 int local_10;
 unsigned int local_c;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == SIG_ERR) {
 local_c = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == SIG_ERR) {
 local_c = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_10 = 1000;
 while( true ) {
 iVar1 = local_10;
 if (signal_received == 0) {
 local_10 = local_10 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if (signal_received == 0) {
 local_c = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_10 = 2000;
 while( true ) {
 iVar1 = local_10;
 if (signal_received == 0) {
 local_10 = local_10 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 local_c = 0xfffffffb;
 }
 else {
 signal(10,SIG_DFL);
 signal(0xe,SIG_DFL);
 local_c = 0x2a;
 }
 }
 else {
 local_c = 0xfffffffc;
 }
 }
 }
 return local_c;
}

// Function: signal_handler @ 0x123d0
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x12408
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x1241c
void test_system_calls(void)
{
 unsigned int uVar1;
 printf(&DAT_0001363c);
 uVar1 = call_linux_syscall();
 printf(&DAT_00013658,uVar1);
 uVar1 = call_win32_api();
 printf(&DAT_00013674,uVar1);
 uVar1 = call_fork_exec();
 printf(&DAT_00013690,uVar1);
 uVar1 = call_pipe_communication();
 printf(&DAT_000136ac,uVar1);
 uVar1 = call_socket_create();
 printf(&DAT_000136c8,uVar1);
 uVar1 = call_shmget_shmat();
 printf(&DAT_000136e4,uVar1);
 uVar1 = call_signal_handling();
 printf(&DAT_00013700,uVar1);
 return;
}

// Function: thread_compute @ 0x124e4
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x1253c
 unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 void *local_1c;
 unsigned int local_18;
 pthread_t local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_18 = param_1;
 local_10 = param_1;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_compute,(void *)&local_18);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_1c);
 local_c = (unsigned int)(*((int *)local_1c));
 free(local_1c);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_pthread_create @ 0x125cc
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x125e4
void * thread_sum(void *param_1)
{
 int local_c;
 int *arr = (int *)param_1;
 arr[2] = 0;
 for (local_c = arr[0]; local_c <= arr[1]; local_c = local_c + 1) {
 arr[2] = arr[2] + local_c;
 }
 return NULL;
}

// Function: param_pthread_join @ 0x1265c
int param_pthread_join(void)
{
 int iVar1;
 int local_48;
 int local_44;
 int local_40;
 int local_3c [4];
 unsigned int local_2c;
 unsigned int local_24;
 unsigned int local_20;
 pthread_t apStack_18 [4];
 memset(local_3c,0,0x24);
 local_3c[0] = 1;
 local_3c[1] = 10;
 local_3c[3] = 0xb;
 local_2c = 0x14;
 local_24 = 0x15;
 local_20 = 0x1e;
 for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
 iVar1 = pthread_create(&apStack_18[local_40],(pthread_attr_t *)0x0,thread_sum,
 local_3c + local_40 * 3);
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_44 = 0;
 local_48 = 0;
 while( true ) {
 if (2 < local_48) {
 return local_44;
 }
 iVar1 = pthread_join(apStack_18[local_48],NULL);
 if (iVar1 != 0) break;
 local_44 = local_44 + local_3c[local_48 * 3 + 2];
 local_48 = local_48 + 1;
 }
 return -2;
}

// Function: call_pthread_join @ 0x127bc
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x127d0
void * thread_increment(void *param_1)
{
 int iVar1;
 int local_14;
 iVar1 = *(int *)param_1;
 for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return NULL;
}

// Function: param_mutex_lock @ 0x12874
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *threads;
 int iVar1;
 int local_20;
 int local_1c;
 int local_14;
 int local_10;
 unsigned int local_c;
 local_14 = param_2;
 local_10 = param_1;
 threads = (pthread_t *)malloc(local_10 * sizeof(pthread_t));
 if (threads == (pthread_t *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {
 iVar1 = pthread_create(&threads[local_1c],(pthread_attr_t *)0x0,
 thread_increment,(void *)&local_14);
 if (iVar1 != 0) {
 free(threads);
 return 0xfffffffe;
 }
 }
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 pthread_join(threads[local_20], NULL);
 }
 free(threads);
 local_c = 0xfffffffd;
 if (shared_counter == local_10 * local_14) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_mutex_lock @ 0x129d0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x129ec
void * consumer_thread(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 (void)param_1;
 pthread_mutex_lock(&cond_mutex);
 uVar1 = data;
 while (ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x12a90
void * producer_thread(void *param_1)
{
 (void)param_1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: param_condition_variable @ 0x12b10
unsigned int param_condition_variable(void)
{
 int iVar1;
 void *local_18;
 pthread_t local_14;
 pthread_t local_10;
 unsigned int local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_18);
 pthread_join(local_10, NULL);
 local_c = (unsigned int)(*((int *)local_18));
 free(local_18);
 }
 else {
 pthread_cancel(local_14);
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_condition_variable @ 0x12bf4
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic__increment @ 0x12c08
void * thread_atomic_increment(void *param_1)
{
 int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)param_1;
 for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {
 local_18 = 1;
 local_1c = __atomic_fetch_add_4(&atomic_counter,1);
 local_20 = local_14;
 __atomic_compare_exchange_4(&atomic_counter,&local_20,local_14 + 1000,5,5);
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x12cd0
void * thread_atomic_load_store(void *param_1)
{
 int iVar1;
 (void)param_1;
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return NULL;
}

// Function: param_atomic_ops @ 0x12d38
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 int local_28;
 pthread_t local_24;
 int local_20;
 unsigned int local_1c;
 void *local_18;
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_14 = param_2;
 local_10 = param_1;
 local_18 = malloc(param_1 << 2);
 if (local_18 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_1c = 0;
 __atomic_store_4(&atomic_counter,0,5);
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 iVar1 = pthread_create((pthread_t *)((uintptr_t)local_18 + local_20 * 4),(pthread_attr_t *)0x0,
 thread_atomic_increment,(void *)&local_14);
 if (iVar1 != 0) {
 free(local_18);
 return 0xfffffffe;
 }
 }
 iVar1 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_24,NULL);
 }
 for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
 pthread_join(*(pthread_t *)((uintptr_t)local_18 + local_28 * 4),NULL);
 }
 iVar1 = __atomic_load_4(&atomic_counter,5);
 free(local_18);
 local_c = 0xfffffffd;
 if (0 < iVar1) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_atomic_ops @ 0x12ee8
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x12f04
void * thread_tls_test(void *param_1)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 char *str = (char *)param_1;
 iVar4 = 8;
 iVar1 = __aeabi_read_tp();
 uVar3 = *(unsigned int *)(iVar1 + iVar4);
 *(int *)(iVar1 + iVar4) = *(int *)(iVar1 + iVar4) + 0x32;
 strncpy((char *)(iVar1 + 0xc),str,0x1f);
 puVar2 = (unsigned int *)malloc(8);
 *puVar2 = uVar3;
 puVar2[1] = *(unsigned int *)(iVar1 + 8);
 return puVar2;
}

// Function: param_thread_local_storage @ 0x12f9c
unsigned int param_thread_local_storage(int param_1)
{
 void *pvVar1;
 int iVar2;
 void *local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 void **local_18;
 pthread_t *local_14;
 int local_10;
 unsigned int local_c;
 (void)pvVar1;
 (void)local_30;
 (void)local_2c;
 (void)local_28;
 (void)local_24;
 local_10 = param_1;
 local_14 = (pthread_t *)malloc(local_10 * sizeof(pthread_t));
 local_18 = (void **)malloc(local_10 * sizeof(void *));
 if ((local_14 == (pthread_t *)0x0) || (local_18 == (void **)0x0)) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {
 pvVar1 = malloc(0x10);
 local_18[local_1c] = pvVar1;
 snprintf((char *)local_18[local_1c],0x10,"Thread-%d");
 }
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 iVar2 = pthread_create(&local_14[local_20],(pthread_attr_t *)0x0,
 thread_tls_test,local_18[local_20]);
 if (iVar2 != 0) {
 for (local_24 = 0; local_24 <= local_20; local_24 = local_24 + 1) {
 free(local_18[local_24]);
 }
 free(local_18);
 free(local_14);
 return 0xfffffffe;
 }
 }
 local_28 = 0;
 local_2c = 0;
 for (local_30 = 0; local_30 < local_10; local_30 = local_30 + 1) {
 pthread_join(local_14[local_30],&local_34);
 local_28 = local_28 + *(unsigned int *)local_34;
 local_2c = local_2c + ((unsigned int *)local_34)[1];
 free(local_34);
 free(local_18[local_30]);
 }
 free(local_18);
 free(local_14);
 local_c = 0xfffffffd;
 if (local_28 == local_10 * 100 && local_2c == local_10 * 0x96) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_thread_local_storage @ 0x13254
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x1326c
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 printf(&DAT_00013726);
 uVar1 = call_pthread_create();
 printf(&DAT_00013745,uVar1);
 uVar1 = call_pthread_join();
 printf(&DAT_00013761,uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_0001377e,uVar1);
 uVar1 = call_condition_variable();
 printf(&DAT_0001379a,uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_000137b6,uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_000137d2,uVar1);
 return;
}

// Function: main @ 0x1331c
int main(int argc, char **argv, char **envp)
{
 (void)argc;
 (void)argv;
 (void)envp;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x13358
void _fini(void)
{
 return;
}

