/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>

// Standard types already defined in system headers

// Additional type definitions
typedef void *(*__start_routine_t)(void *);
typedef long __pid_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int __useconds_t;
typedef int key_t;
typedef long long __off_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef long __time_t;
// socklen_t already defined in sys/socket.h
// pthread types already defined in pthread.h
// shmid_ds is defined in sys/shm.h - using system definition
// Using system struct sockaddr from sys/socket.h



// Non-standard types from decompiler
typedef unsigned char uint5;
typedef unsigned long long unkuint10;
typedef unsigned long long uint6;
typedef unsigned int uint3;

// Global variables
static int completed_0 = 0;
static void *__dso_handle = 0;
static int signal_received = 0;
static unsigned int signal_number = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static int shared_counter = 0;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static char ready = 0;
static char data = 0;
static int atomic_counter = 0;
static long in_FS_OFFSET = 0;

// External data definitions
char s_Bench_Test_Data_00104010[] = "Bench Test Data";
char _DAT_00104040[16] = {0};
char DAT_001040d9[] = "TestName";
char DAT_0010441f[] = "Testing standard library functions";
char DAT_00104127[] = "String length: %d\n";
char DAT_00104142[] = "strcmp result: %d\n";
char DAT_0010415d[] = "strlen result: %d\n";
char DAT_00104179[] = "memcpy result: %d\n";
char DAT_00104195[] = "memcmp result: %d\n";
char DAT_001041b1[] = "printf result: %d\n";
char DAT_001041cd[] = "scanf result: %d\n";
char DAT_001041ea[] = "fopen result: %d\n";
char DAT_00104206[] = "fread/fwrite result: %d\n";
char DAT_00104222[] = "malloc result: %d\n";
char DAT_0010423e[] = "memset result: %d\n";
char DAT_00104259[] = "strchr/strstr result: %d\n";
char DAT_001042a8[] = "syscall result: %d\n";
char DAT_001042c4[] = "stat result: %d\n";
char DAT_001042e0[] = "fork result: %d\n";
char DAT_001042fc[] = "pipe result: %d\n";
char DAT_00104318[] = "socket result: %d\n";
char DAT_00104334[] = "shm result: %d\n";
char DAT_00104350[] = "signal result: %d\n";
char DAT_00104376[] = "pthread create result: %d\n";
char DAT_00104392[] = "pthread join result: %d\n";
char DAT_001043af[] = "mutex result: %d\n";
char DAT_001043cb[] = "condition variable result: %d\n";
char DAT_001043e7[] = "atomic ops result: %d\n";
char DAT_00104403[] = "TLS result: %d\n";
char DAT_00104443[] = "Testing system calls";
char DAT_0010445e[] = "Testing thread concurrency";

// External data declarations
extern char s_Bench_Test_Data_00104010[];
extern char _DAT_00104040[];
extern char DAT_001040d9[];
extern char DAT_0010441f[];
extern char DAT_00104127[];
extern char DAT_00104142[];
extern char DAT_0010415d[];
extern char DAT_00104179[];
extern char DAT_00104195[];
extern char DAT_001041b1[];
extern char DAT_001041cd[];
extern char DAT_001041ea[];
extern char DAT_00104206[];
extern char DAT_00104222[];
extern char DAT_0010423e[];
extern char DAT_00104259[];
extern char DAT_001042a8[];
extern char DAT_001042c4[];
extern char DAT_001042e0[];
extern char DAT_001042fc[];
extern char DAT_00104318[];
extern char DAT_00104334[];
extern char DAT_00104350[];
extern char DAT_00104376[];
extern char DAT_00104392[];
extern char DAT_001043af[];
extern char DAT_001043cb[];
extern char DAT_001043e7[];
extern char DAT_00104403[];
extern char DAT_00104443[];
extern char DAT_0010445e[];

// struct stat is defined in sys/stat.h - no forward declaration needed

// Forward declarations for functions
extern int main(void);
extern void *thread_compute(void *param_1);
extern void *thread_sum(void *param_1);
extern void *thread_increment(void *param_1);
extern void *consumer_thread(void *param_1);
extern void *producer_thread(void *param_1);
extern void *thread_atomic_increment(void *param_1);
extern void *thread_atomic_load_store(void *param_1);
extern void *thread_tls_test(void *param_1);
extern void signal_handler(int param_1);

// External function declarations
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
extern int __gmon_start__(void);
extern void *memset(void *s, int c, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern char *strcpy(char *dest, const char *src);
extern char *strncpy(char *dest, const char *src, size_t n);
extern size_t strlen(const char *s);
extern char *strchr(const char *s, int c);
extern char *strstr(const char *haystack, const char *needle);
extern int strcmp(const char *s1, const char *s2);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern int snprintf(char *s, size_t maxlen, const char *format, ...);
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern FILE *fopen(char *filename, char *modes);
extern int fclose(FILE *stream);
extern int fileno(FILE *stream);
extern size_t fread(void *ptr, size_t size, size_t n, FILE *stream);
extern size_t fwrite(void *ptr, size_t size, size_t n, FILE *stream);
extern void rewind(FILE *stream);
extern int unlink(char *name);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern int open(char *file, int oflag, ...);
extern int close(int fd);
extern ssize_t read(int fd, void *buf, size_t nbytes);
extern ssize_t write(int fd, void *buf, size_t n);
extern long syscall(long sysno, ...);
extern int * __errno_location(void);
extern int stat(const char *file, struct stat *buf);
extern key_t ftok(char *pathname, int proj_id);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, void *shmaddr, int shmflg);
extern int shmdt(void *shmaddr);
extern int shmctl(int shmid, int cmd, struct shmid_ds *buf);
extern int socket(int domain, int type, int protocol);
extern int setsockopt(int fd, int level, int optname, void *optval, socklen_t optlen);
extern int bind(int fd, struct sockaddr *addr, socklen_t addrlen);
extern int listen(int fd, int n);
extern __pid_t fork(void);
extern int execl(char *path, char *arg, ...);
extern void _exit(int status);
extern __pid_t waitpid(__pid_t pid, int *stat_loc, int options);
extern __pid_t wait(int *stat_loc);
extern int pipe(int *pipedes);
extern int pthread_create(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern int pthread_join(pthread_t th, void **thread_return);
extern int pthread_cancel(pthread_t th);
extern int pthread_mutex_lock(pthread_mutex_t *mutex);
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern int raise(int sig);
extern __sighandler_t signal(int sig, __sighandler_t handler);
extern uint alarm(uint seconds);
extern int usleep(__useconds_t useconds);
extern uint sleep(uint seconds);
extern void __cxa_finalize(void *dso_handle);

// Helper macros/functions
#define LOCK() { }
#define UNLOCK() { }
#define SUB161(x, n) ((x) >> ((n) * 8))
#define SUB137(x, n) ((x) >> ((n) * 8))
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))
#define CONCAT14(hi, lo) (((unsigned long)(hi) << 4) | (lo))
#define CONCAT72(hi, lo) (((hi) << 2) | (lo))
#define CONCAT32(hi, lo) (((hi) << 2) | (lo))
#define ZEXT812(x) (x)
#define ZEXT712(x) (x)
#define ZEXT816(x) (x)
#define SUB1612(x, n) ((x) >> ((n) * 8))

// Decompiled by BinaryAI
// SHA256: f7c817139f099203f07dad4385e46454602212ee375e481878f2f6fb3280a331

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



















































































































// Function: _start @ 0x1023c0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,auStack_8,0,0,param_1,auStack_8);
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
 printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 unsigned long long local_8;
 local_8 = 0;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",(long)&local_8 + 4,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + (int)(local_8 >> 32);
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_8;
 local_8 = 0;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",(long)&local_8 + 4,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + (int)(local_8 >> 32);
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
int param_fopen_fclose(char *param_1)
{
 int iVar1;
 FILE *__stream;
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
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
 char local_38 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_38,1,0x12,__s);
 local_38[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 // Simplified comparison check - compare local_38 with expected data
 int match = 1;
 char expected[] = "BinBench Test Data";
 for (int i = 0; i < 18; i++) {
 if (local_38[i] != expected[i]) {
 match = 0;
 break;
 }
 }
 if (match) {
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

// Function: call_fread_fwrite @ 0x1027c0
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x1027d0
int param_malloc_free(unsigned long param_1)
{
 unsigned long long *puVar1;
 int *piVar2;
 int *__ptr;
 unsigned long uVar3;
 int iVar4;
 unsigned long uVar5;
 int unaff_EBP;
 long lVar6;
 unsigned long uVar7;
 int iVar10;
 char auVar8 [16];
 int iVar11;
 char auVar9 [16];
 int iVar12;
 int iVar13;
 int iVar15;
 char auVar14 [16];
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 == 0) goto LAB_00102921;
 if (param_1 < 8) {
 uVar3 = 0;
LAB_00102904:
 iVar4 = (int)uVar3 * 10;
 do {
 __ptr[uVar3] = iVar4;
 uVar3 = uVar3 + 1;
 iVar4 = iVar4 + 10;
 } while (param_1 != uVar3);
 }
 else {
 uVar3 = param_1 & 0xfffffffffffffff8;
 uVar5 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar4 = 0;
 iVar11 = 10;
 iVar10 = 0x14;
 iVar12 = 0x1e;
 lVar6 = 0;
 }
 else {
 // Simplified initialization loop
 for (unsigned long i = 0; i < param_1; i++) {
 __ptr[i] = (int)i * 10;
 }
 }
 // Handled in simplified loop above
 if (uVar3 != param_1) goto LAB_00102904;
 }
 unaff_EBP = *__ptr;
LAB_00102921:
 iVar4 = __ptr[param_1 - 1];
 free(__ptr);
 return unaff_EBP + iVar4;
}

// Function: call_malloc_free @ 0x102950
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x102960
int param_memset(void *param_1,size_t param_2)
{
 unsigned long uVar29;
 long lVar31;
 int iVar32;
 iVar32 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 uVar29 = 0;
 iVar32 = 0;
 do {
 iVar32 = iVar32 + (uint)*(byte *)((long)param_1 + uVar29);
 uVar29 = uVar29 + 1;
 } while (param_2 != uVar29);
 }
 return iVar32;
}

// Function: call_memset @ 0x102aa0
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x102ab0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102af0
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x102b00
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 uint uVar4;
 int local_3c;
 unsigned long long local_38;
 char local_30;
 puts(&DAT_0010441f);
 local_38 = 0x62694c6f6c6c6548;
 local_30 = 0;
 sVar3 = strlen((char *)&local_38);
 printf(&DAT_00104127,sVar3 & 0xffffffff);
 printf(&DAT_00104142,0);
 printf(&DAT_0010415d,0xc);
 printf(&DAT_00104179,0x5a);
 uVar4 = 0xffffffff;
 printf(&DAT_00104195,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 printf(&DAT_001041b1,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_38,&local_3c);
 uVar1 = local_3c + (int)local_38;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_001041cd,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_001041ea,(unsigned long)uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104206,(unsigned long)uVar1);
 printf(&DAT_00104222,0x5a);
 printf(&DAT_0010423e,0);
 printf(&DAT_00104259,0xf);
 return;
}

// Function: param_linux_syscall @ 0x102c90
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

// Function: call_linux_syscall @ 0x102cd0
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

// Function: param_win32_api @ 0x102d20
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_90;
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

// Function: call_win32_api @ 0x102d60
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_90;
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

// Function: param_fork_exec @ 0x102da0
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 int wait_status;
 uint local_14;
 local_14 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,&wait_status,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 if ((wait_status & 0x7f) != 0) {
 return 0xfffffffd;
 }
 return wait_status >> 8 & 0xff;
}

// Function: call_fork_exec @ 0x102e20
uint call_fork_exec(void)
{
 __pid_t _Var1;
 int wait_status;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,&wait_status,0);
 if ((-1 < _Var1) && ((wait_status & 0x7f) == 0)) {
 return -(uint)((wait_status & 0xff00) != 0) | 0x2a;
 }
 }
 return 0xffffffff;
}

// Function: param_pipe_communication @ 0x102e90
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 int local_30[2];
 char local_28 [32];
 iVar1 = pipe(local_30);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_30[1]);
 sVar3 = read(local_30[0],local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30[0]);
 wait(0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 return uVar4;
 }
 close(local_30[0]);
 write(local_30[1],"HelloPipe",9);
 close(local_30[1]);
 _exit(0);
 }
 return 0xfffffffe;
}

// Function: param_socket_create @ 0x102f50
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_24;
 struct sockaddr_in local_20;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (-1 < iVar1) {
 memset(&local_20, 0, sizeof(local_20));
 local_20.sin_family = 2;
 iVar1 = bind(__fd,(struct sockaddr*)&local_20,sizeof(local_20));
 if (-1 < iVar1) {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xfffffffc;
 }
 return uVar2;
 }
 close(__fd);
 return 0xfffffffd;
 }
 close(__fd);
 return 0xfffffffe;
}

// Function: param_shmget_shmat @ 0x103030
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

// Function: call_shmget_shmat @ 0x103100
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

// Function: param_signal_handling @ 0x103120
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

// Function: signal_handler @ 0x103250
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = (unsigned int)param_1;
 return;
}

// Function: test_system_calls @ 0x103280
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
 uint uVar3;
 unsigned long uVar4;
 int *piVar5;
 unsigned long long uVar6;
 struct stat local_a0;
 puts(&DAT_00104443);
 uVar4 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar4;
 if (iVar1 < 0) {
 piVar5 = __errno_location();
 iVar1 = -*piVar5;
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 }
 printf(&DAT_001042a8,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar6 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar6 = 0x2a;
 }
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_001042c4,uVar6);
 _Var2 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 int wait_status;
 _Var2 = waitpid(_Var2,&wait_status,0);
 if ((_Var2 < 0) || ((wait_status & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = (unsigned long)(-(uint)((wait_status & 0xff00) != 0) | 0x2a);
 }
 }
 printf(&DAT_001042e0,uVar4);
 uVar3 = param_pipe_communication();
 printf(&DAT_001042fc,(unsigned long)uVar3);
 uVar3 = param_socket_create();
 printf(&DAT_00104318,(unsigned long)uVar3);
 iVar1 = param_shmget_shmat();
 uVar3 = 0xffffffff;
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00104334,(unsigned long)uVar3);
 uVar3 = param_signal_handling();
 printf(&DAT_00104350,(unsigned long)uVar3);
 return;
}

// Function: thread_compute @ 0x1033f0
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 int *int_param = (int *)param_1;
 iVar1 = *int_param;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x103410
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = param_1;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}

// Function: call_pthread_create @ 0x103470
unsigned int call_pthread_create(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = 7;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}

// Function: thread_sum @ 0x1034d0
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *uint_param = (uint *)param_1;
 uint_param[2] = 0;
 uVar1 = *uint_param;
 uVar2 = uint_param[1];
 if ((int)uVar1 <= (int)uVar2) {
 uint_param[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x103510
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 unsigned int local_68 [3];
 unsigned int uStack_5c;
 unsigned int local_58 [1];
 unsigned int auStack_54 [3];
 int local_48;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28 [2];
 local_48 = 0;
 local_68[0] = 1;
 local_68[1] = 10;
 local_68[2] = 0;
 uStack_5c = 0xb;
 auStack_54[0] = 0;
 auStack_54[1] = 21;
 auStack_54[2] = 30;
 local_58[0] = 0x14;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,local_68);
 iVar4 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_5c);
 if (iVar1 == 0) {
 iVar1 = pthread_create(local_28,(pthread_attr_t *)0x0,thread_sum,auStack_54 + 4);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_38,(void **)0x0);
 iVar4 = -2;
 if (iVar1 == 0) {
 iVar1 = local_68[2];
 iVar2 = pthread_join(local_30,(void **)0x0);
 if (iVar2 == 0) {
 iVar2 = auStack_54[0];
 iVar3 = pthread_join(local_28[0],(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar2 + iVar1 + local_48;
 }
 }
 }
 }
 }
 }
 return iVar4;
}

// Function: thread_increment @ 0x103620
void *thread_increment(void *param_1)
{
 int iVar1;
 int *int_param = (int *)param_1;
 iVar1 = *int_param;
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

// Function: param_mutex_lock @ 0x103660
unsigned long long param_mutex_lock(uint param_1,int param_2)
{
 int iVar1;
 void *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 long lVar5;
 int local_38;
 uint local_34;
 local_34 = param_2;
 local_38 = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 uVar4 = (unsigned long)param_1;
 lVar5 = 0;
 local_34 = param_1;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 param_1 = local_34;
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (uVar4 * 8 - lVar5 != 0);
 if (0 < (int)local_34) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * local_38) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x103750
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103760
void *consumer_thread(void *param_1)
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
 return (void *)puVar1;
}

// Function: producer_thread @ 0x1037e0
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x103820
unsigned int param_condition_variable(void)
{
 unsigned int uVar1;
 int iVar2;
 pthread_t local_20;
 unsigned int *local_18;
 pthread_t local_10;
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 != 0) {
 pthread_cancel(local_20);
 return 0xfffffffe;
 }
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}

// Function: thread_atomic_increment @ 0x1038d0
void *thread_atomic_increment(void *param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 uint *uint_param = (uint *)param_1;
 uVar1 = *uint_param;
 if (0 < (int)uVar1) {
 uVar5 = uVar1 & 3;
 uVar4 = 0;
 if (2 < uVar1 - 1) {
 uVar4 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3e9;
 if (uVar4 + 1 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3ea;
 if (uVar4 + 2 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 0x3eb;
 if (uVar4 + 3 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 uVar4 = uVar4 + 4;
 } while (uVar4 != (uVar1 & 0xfffffffc));
 }
 for (; uVar5 != 0; uVar5 = uVar5 - 1) {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar1 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar1 = atomic_counter;
 }
 atomic_counter = uVar1;
 UNLOCK();
 uVar4 = uVar4 + 1;
 }
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x103990
void *thread_atomic_load_store(void *param_1)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0;
}

// Function: param_atomic_ops @ 0x1039b0
unsigned long long param_atomic_ops(uint param_1,unsigned int param_2)
{
 int iVar1;
 void *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 long lVar4;
 unsigned int local_3c;
 pthread_t local_38;
 local_3c = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (0 < (int)param_1) {
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while ((unsigned long)param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 if (0 < (int)param_1) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
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

// Function: call_atomic_ops @ 0x103ac0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x103ad0
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 char local_buffer[32];
 char *str_param = (char *)param_1;
 // TLS simulation - simplified for compilation
 iVar2 = 0;
 iVar1 = iVar2 + 0x32;
 strncpy(local_buffer, str_param, 0x1f);
 local_buffer[0x1f] = '\0';
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)piVar3;
}

// Function: param_thread_local_storage @ 0x103b20
unsigned long long param_thread_local_storage(uint param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 unsigned long long uVar2;
 uint uVar3;
 unsigned long uVar4;
 pthread_t *__newthread;
 unsigned long uVar5;
 uint uVar6;
 int *local_38;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 __ptr_00 = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 uVar5 = (unsigned long)param_1;
 uVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((long)__ptr_00 + uVar4 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 if (0 < (int)param_1) {
 uVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + uVar4 * 8));
 if (iVar1 != 0) {
 uVar5 = 0xffffffffffffffff;
 do {
 free(*(void **)((long)__ptr_00 + uVar5 * 8 + 8));
 uVar5 = uVar5 + 1;
 } while (uVar4 != uVar5);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 uVar4 = uVar4 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar4);
 if ((int)param_1 < 1) {
 uVar3 = 0;
 uVar6 = 0;
 }
 else {
 uVar4 = 0;
 uVar6 = 0;
 uVar3 = 0;
 do {
 pthread_join(__ptr[uVar4],&local_38);
 uVar3 = uVar3 + *local_38;
 uVar6 = uVar6 + local_38[1];
 free(local_38);
 free(*(void **)((long)__ptr_00 + uVar4 * 8));
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 goto LAB_00103c4c;
 }
 }
 uVar3 = 0;
 uVar6 = 0;
LAB_00103c4c:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar6 | param_1 * 100 ^ uVar3) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103ce0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103cf0
void test_thread_concurrency(void)
{
 int iVar1;
 uint uVar2;
 unsigned int local_1c;
 uint *local_18;
 pthread_t local_10;
 puts(&DAT_0010445e);
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 printf(&DAT_00104376,(unsigned long)uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_00104392,(unsigned long)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_001043af,(unsigned long)uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_001043cb,(unsigned long)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_001043e7,(unsigned long)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00104403,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x103de0
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x103df4
void _fini(void)
{
 return;
}

