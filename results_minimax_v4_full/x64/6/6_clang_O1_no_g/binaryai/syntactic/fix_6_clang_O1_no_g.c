/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/errno.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/syscall.h>
#include <time.h>
#include <termios.h>

// Additional function declarations
void _exit(int status);
int __isoc99_sscanf(const char *str, const char *format, ...);
int *__errno_location(void);
int fileno(FILE *stream);
key_t ftok(const char *pathname, int proj_id);
int shmget(key_t key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
void __cxa_finalize(void *);
int snprintf(char *str, size_t size, const char *format, ...);
int pthread_cancel(pthread_t thread);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int alarm(unsigned int seconds);
unsigned int sleep(unsigned int seconds);
int usleep(useconds_t usec);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);

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
typedef int bool;
#define true 1
#define false 0

// Define missing types
typedef unsigned int uint;
typedef unsigned long __useconds_t;
typedef unsigned int __pid_t;
typedef unsigned int key_t;
typedef unsigned long socklen_t;
typedef unsigned short sa_family_t;
typedef unsigned int in_port_t;

// Define struct types
struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct in_addr {
 unsigned int s_addr;
};

struct sockaddr_in {
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 char sin_zero[8];
};

struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned int st_mode;
 unsigned int st_nlink;
 unsigned int st_uid;
 unsigned int st_gid;
 int st_rdev;
 unsigned long st_size;
 unsigned long st_blksize;
 unsigned long st_blocks;
 unsigned long st_atime;
 unsigned long st_mtime;
 unsigned long st_ctime;
};

struct shmid_ds {
 unsigned long shm_segsz;
 unsigned int shm_cpid;
 unsigned int shm_lpid;
 unsigned int shm_nattch;
 unsigned long shm_atime;
 unsigned long shm_dtime;
 unsigned long shm_ctime;
 void *shm_internal;
};

typedef struct { char __data[56]; } pthread_t;
typedef struct { char __data[56]; } pthread_attr_t;
typedef struct { char __data[48]; } pthread_mutex_t;
typedef struct { char __data[48]; } pthread_cond_t;
typedef void *(*__start_routine)(void *);
typedef void (*__sighandler_t)(int);
extern intptr_t __thread_stack_base;

// Define missing macros from IDA pseudocode
#define ZEXT816(x) ((unsigned long long)(x))
#define SUB161(x,y) (((x) >> (y)) & 1)
#define SUB1612(x,y) (((x) >> (y)) & 0xFFFF)
#define CONCAT44(x,y) (((x) << 32) | (y))
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)

// Define signal handlers
// Data references - initialized as empty strings/buffers
char DAT_00104010[16] = "BenchTestData";
char DAT_00104069[16] = "TestName";
char DAT_001040b7[32] = "strlen: %lu\n";
char DAT_001040d2[32] = "strcmp: %d\n";
char DAT_001040ed[32] = "strlen: %lu\n";
char DAT_00104109[32] = "strlen: %lu\n";
char DAT_00104125[32] = "strcmp: %u\n";
char DAT_00104141[32] = "printf: %u\n";
char DAT_0010415d[32] = "scanf result: %llu\n";
char DAT_0010417a[32] = "fopen: %u\n";
char DAT_00104196[32] = "fread_fwrite: %llu\n";
char DAT_001041b2[32] = "malloc: %u\n";
char DAT_001041ce[32] = "memset sum: %u\n";
char DAT_001041e9[32] = "strchr_strstr: %llu\n";
char DAT_00104238[32] = "syscall: %lu\n";
char DAT_00104254[32] = "stat: %llu\n";
char DAT_00104270[32] = "fork_exec: %lu\n";
char DAT_0010428c[32] = "pipe: %llu\n";
char DAT_001042a8[32] = "socket: %llu\n";
char DAT_001042c4[32] = "shmget: %lu\n";
char DAT_001042e0[32] = "signal: %llu\n";
char DAT_00104306[32] = "pthread_join sum: %u\n";
char DAT_00104322[32] = "sum result: %u\n";
char DAT_0010433f[32] = "mutex_lock: %llu\n";
char DAT_0010435b[32] = "cond_var: %llu\n";
char DAT_00104377[32] = "atomic_ops: %llu\n";
char DAT_00104393[32] = "tls: %llu\n";
char DAT_001043af[32] = "Standard Lib Tests\n";
char DAT_001043d3[32] = "System Call Tests\n";
char DAT_001043ee[32] = "Thread Concurrency Tests\n";

// Global variables
int completed_0 = 0;
void *__dso_handle = 0;
int __gmon_start__(void) { return 0; }
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = 0;
pthread_mutex_t cond_mutex = 0;
pthread_cond_t cond = 0;
int data = 0;
int ready = 0;
int atomic_counter = 0;

// Forward declarations
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);

// Decompiled by BinaryAI
// SHA256: 0f831c69047da639e1e2e200061b3fab227b4339f463f0e620f1b530c4284026

// Note: External functions are provided by the standard library via included headers
// The following are placeholder implementations to satisfy linker references

// Function: _init @ 0x102000
void _init(void)
{
 __gmon_start__();
}

// Function: FUN_00102020 @ 0x102020 - stub function
void FUN_00102020(void)
{
 return;
}

// Function: _start @ 0x1023c0
void _start(void *param_1, void *param_2, void (*main_fn)(void))
{
 // Call main through __libc_start_main equivalent
 typedef int (*main_t)(void);
 ((main_t)main_fn)();
 _exit(0);
 while(1) {} // infinite loop to satisfy noreturn
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
 char local_28[16] = "HelloLib";
 char local_20;
 local_20 = 0;
 strlen(local_28);
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
int call_strcmp(void)
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
unsigned long call_strlen(void)
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
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(const char *param_1)
{
 int iVar1;
 int iVar2;
 int local_4;
 int local_8;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_4,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_4 + local_8;
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_4;
 int local_8;
 local_8 = 0;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_4,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_4 + local_8;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
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
 uVar2 = (iVar1 >> 0x1f) | 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x1026e0
unsigned long long param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned long long uVar2;
 unsigned long long auVar3;
 unsigned long long auVar4;
 char local_48[16];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_48,1,0x12,__s);
 local_48[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 auVar4 = 0;
 auVar4 = auVar4 | (unsigned long long)(-((local_48[3] == DAT_00104010[0])) & 0xFF) << 0;
 auVar4 = auVar4 | (unsigned long long)(-((local_48[2] == DAT_00104010[1])) & 0xFF) << 8;
 auVar4 = auVar4 | (unsigned long long)(-((local_48[1] == DAT_00104010[2])) & 0xFF) << 16;
 auVar4 = auVar4 | (unsigned long long)(-((local_48[0] == DAT_00104010[3])) & 0xFF) << 24;
 auVar3 = 0;
 auVar3 = auVar3 | (unsigned long long)(-((local_48[0] == 'B')) & 0xFF) << 0;
 auVar3 = auVar3 | (unsigned long long)(-((local_48[1] == 'i')) & 0xFF) << 8;
 auVar3 = auVar3 | (unsigned long long)(-((local_48[2] == 'n')) & 0xFF) << 16;
 auVar3 = auVar3 | (unsigned long long)(-((local_48[3] == 'B')) & 0xFF) << 24;
 auVar3 = auVar3 & auVar4;
 uVar2 = 0xfffffffd;
 if (auVar3 == 0xFFFFFFFFFFFFFFFFFFULL) {
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
int param_malloc_free(long param_1)
{
 int *__ptr;
 int iVar1;
 long lVar2;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 lVar2 = 0;
 do {
 __ptr[lVar2] = iVar1;
 lVar2 = lVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (param_1 != lVar2);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x102820
int call_malloc_free(void)
{
 int *__ptr;
 long lVar1;
 int *piVar2;
 int iVar3;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 lVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = (int)lVar1;
 lVar1 = lVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar3;
}

// Function: param_memset @ 0x102870
int param_memset(void *param_1,size_t param_2)
{
 size_t sVar1;
 int iVar2;
 iVar2 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 sVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*(byte *)((long)param_1 + sVar1);
 sVar1 = sVar1 + 1;
 } while (param_2 != sVar1);
 }
 return iVar2;
}

// Function: call_memset @ 0x1028b0
int call_memset(void)
{
 long lVar1;
 unsigned int local_28 [10];
 int iVar2;
 lVar1 = 0;
 do {
 local_28[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 iVar2 = 0;
 lVar1 = 0;
 do {
 iVar2 = iVar2 + local_28[lVar1];
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 return iVar2;
}

// Function: param_strchr_strstr @ 0x1028f0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102930
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x102940
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 int *__ptr;
 long lVar4;
 int *piVar5;
 unsigned long uVar6;
 uint uVar7;
 int local_4c;
 int local_50;
 char local_48[9] = "HelloWorld";
 unsigned long long local_28;
 puts(&DAT_001043af);
 sVar3 = strlen(local_48);
 printf(&DAT_001040b7,sVar3 & 0xffffffff);
 printf(&DAT_001040d2,0);
 printf(&DAT_001040ed,0xc);
 printf(&DAT_00104109,0x5a);
 uVar7 = 0xffffffff;
 printf(&DAT_00104125,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 printf(&DAT_00104141,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_4c,&local_50);
 uVar6 = (unsigned long)(uint)(local_4c + local_50);
 if (iVar2 != 2) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_0010415d,uVar6);
 __stream = fopen("/etc/passwd","r");
 uVar1 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar1 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_0010417a,(unsigned long)uVar1);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104196,(unsigned long)uVar1);
 __ptr = (int *)malloc(0x28);
 if (__ptr != (int *)0x0) {
 lVar4 = 0;
 piVar5 = __ptr;
 do {
 *piVar5 = (int)lVar4;
 lVar4 = lVar4 + 10;
 piVar5 = piVar5 + 1;
 } while (lVar4 != 100);
 uVar7 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 lVar4 = 0;
 printf(&DAT_001041b2,(unsigned long)uVar7);
 do {
 *(unsigned int *)(local_48 + lVar4 * 4) = 0xff;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 local_28 = 0;
 printf(&DAT_001041ce,0);
 printf(&DAT_001041e9,0xf);
 return;
}

// Function: param_linux_syscall @ 0x102b50
unsigned long param_linux_syscall(const char *param_1)
{
 long uVar1;
 int *piVar2;
 uVar1 = syscall(2,param_1,0);
 if (uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = -*piVar2;
 }
 else {
 syscall(3,uVar1);
 }
 return (unsigned long)uVar1;
}

// Function: call_linux_syscall @ 0x102b90
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

// Function: param_win32_api @ 0x102be0
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 stat local_90;
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

// Function: call_win32_api @ 0x102c20
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 stat local_90;
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

// Function: param_fork_exec @ 0x102c60
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_14;
 local_14 = (uint)(param_2 >> 0x20);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,(char *)(unsigned long long)param_2,(char *)NULL);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_14 & 0x7f) == 0) {
 uVar2 = local_14 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x102cd0
uint call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_4;
 local_4 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",(char *)NULL);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_4,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_4 & 0x7f) == 0) {
 uVar2 = local_4 >> 8 & 0xff;
 }
 }
 }
 return (-(uint)(uVar2 != 0)) | 0x2a;
}

// Function: param_pipe_communication @ 0x102d40
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
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

// Function: call_pipe_communication @ 0x102df0
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x102e00
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_2c;
 struct sockaddr_in local_28;
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
 memset(&local_28, 0, sizeof(local_28));
 local_28.sin_family = 2;
 local_28.sin_port = 0;
 local_28.sin_addr.s_addr = 0;
 iVar1 = bind(__fd,(struct sockaddr *)&local_28,sizeof(local_28));
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

// Function: call_socket_create @ 0x102ec0
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102ed0
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
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x102fa0
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

// Function: param_signal_handling @ 0x102fc0
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

// Function: signal_handler @ 0x1030f0
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x103110
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x103120
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned long uVar3;
 int *piVar4;
 uint uVar5;
 unsigned long long uVar6;
 int local_status;
 stat local_a0;
 puts(&DAT_001043d3);
 uVar3 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar3;
 if (iVar1 < 0) {
 piVar4 = __errno_location();
 iVar1 = -*piVar4;
 }
 else {
 syscall(3,uVar3 & 0xffffffff);
 }
 printf(&DAT_00104238,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar6 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar6 = 0x2a;
 }
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00104254,uVar6);
 _Var2 = fork();
 uVar5 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",(char *)NULL);
 _exit(0x7f);
 }
 _Var2 = waitpid(_Var2,&local_status,0);
 if (_Var2 < 0) {
 uVar5 = 0xfffffffe;
 }
 else {
 uVar5 = 0xfffffffd;
 if (((uint)local_a0.st_dev & 0x7f) == 0) {
 uVar5 = (uint)local_a0.st_dev >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_00104270,(unsigned long)((-(uint)(uVar5 != 0)) | 0x2a));
 uVar5 = param_pipe_communication();
 printf(&DAT_0010428c,(unsigned long)uVar5);
 uVar5 = param_socket_create();
 printf(&DAT_001042a8,(unsigned long)uVar5);
 iVar1 = param_shmget_shmat();
 uVar5 = 0xffffffff;
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_001042c4,(unsigned long)uVar5);
 uVar5 = param_signal_handling();
 printf(&DAT_001042e0,(unsigned long)uVar5);
 return;
}

// Function: thread_compute @ 0x1032a0
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 int *input = (int *)param_1;
 iVar1 = *input;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x1032c0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = param_1;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x103310
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: thread_sum @ 0x103370
void *thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = uVar1 + param_1[2] + (uVar1 + 1) * (uVar2 - uVar1) +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x1033b0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 char *__arg;
 int *piVar3;
 long lVar4;
 char local_68 [12];
 unsigned int uStack_5c;
 char local_58 [8];
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 __arg = local_68;
 local_48 = 0;
 *(unsigned long long *)local_68 = 0xa00000001ULL;
 uStack_5c = 0xb;
 uStack_50 = 0x1e00000015;
 local_58[0] = 0x14;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = __arg + 0xc;
 lVar4 = lVar4 + 8;
 } while (lVar4 != 0x18);
 piVar3 = (int *)(local_68 + 8);
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}

// Function: call_pthread_join @ 0x103490
int call_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int *__arg;
 int *piVar3;
 long lVar4;
 int local_68[9];  // 3 threads * 3 ints each
 unsigned int uStack_5c;
 unsigned int local_58;
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 __arg = local_68;
 local_48 = 0;
 local_68[0] = 0xa00000001;
 local_68[1] = 0xb;
 local_68[2] = 0x14;
 local_68[3] = 0xa00000001;
 local_68[4] = 0xb;
 local_68[5] = 0x1e000000;
 local_68[6] = 0x15000000;
 local_68[7] = 0xa00000001;
 local_68[8] = 0xb;
 uStack_5c = 0xb;
 uStack_50 = 0x1e00000015;
 local_58 = 0x14;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 lVar4 = lVar4 + 8;
 __arg = __arg + 3;
 } while (lVar4 != 0x18);
 piVar3 = &local_68[2];
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}

// Function: thread_increment @ 0x103570
unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x1035b0
unsigned long long param_mutex_lock(uint param_1,unsigned int param_2)
{
 uint uVar1;
 int iVar2;
 void *__ptr;
 unsigned long long uVar3;
 unsigned long uVar4;
 long lVar5;
 unsigned int local_38;
 unsigned int local_38_high;
 local_38 = param_2;
 local_38_high = param_1;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 lVar5 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 if (iVar2 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while ((unsigned long)param_1 * 8 - lVar5 != 0);
 }
 uVar1 = local_38;
 if (0 < (int)local_38) {
 uVar4 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar4 * 8),(void **)0x0);
 uVar4 = uVar4 + 1;
 } while (param_1 != uVar4);
 }
 free(__ptr);
 uVar3 = 0xfffffffd;
 if (shared_counter == uVar1 * (int)local_38_high) {
 uVar3 = 0x2a;
 }
 }
 return uVar3;
}

// Function: call_mutex_lock @ 0x1036a0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x1036c0
void consumer_thread(void)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return;
}

// Function: producer_thread @ 0x103740
unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x103780
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 unsigned int *local_18;
 pthread_t local_10;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 if (local_18 != NULL) {
 uVar2 = *local_18;
 free(local_18);
 } else {
 uVar2 = 0;
 }
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x103810
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x103820
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
 } while (iVar2 != *param_1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x103860
unsigned long long thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x103880
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

// Function: call_atomic_ops @ 0x103990
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x1039b0
void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 iVar2 = *(int *)(in_FS_OFFSET + -6);
 iVar1 = iVar2 + 0x32;
 *(int *)(in_FS_OFFSET + -6) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_thread_local_storage @ 0x103a00
unsigned long long param_thread_local_storage(uint param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void *__ptr_00;
 unsigned long long uVar2;
 char *__s;
 uint uVar3;
 unsigned long uVar4;
 pthread_t *__newthread;
 unsigned long uVar5;
 uint uVar6;
 int *local_38;
 uVar5 = (unsigned long)param_1;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 __ptr_00 = malloc((long)(int)param_1 << 3);
 uVar2 = 0xffffffff;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void *)0x0)) {
 if (0 < (int)param_1) {
 uVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((long)__ptr_00 + uVar4 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
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
 }
 if ((int)param_1 < 1) {
 uVar6 = 0;
 uVar3 = 0;
 }
 else {
 uVar4 = 0;
 uVar3 = 0;
 uVar6 = 0;
 do {
 pthread_join(__ptr[uVar4],&local_38);
 uVar6 = uVar6 + *local_38;
 uVar3 = uVar3 + local_38[1];
 free(local_38);
 free(*(void **)((long)__ptr_00 + uVar4 * 8));
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar6) == 0) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103b90
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103ba0
void test_thread_concurrency(void)
{
 int iVar1;
 pthread_t *__newthread;
 long lVar2;
 int *piVar3;
 uint uVar4;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int uStack_5c;
 unsigned int local_58;
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 puts(&DAT_001043ee);
 local_6c = 7;
 __newthread = &local_68;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_compute,&local_6c);
 if (iVar1 == 0) {
 pthread_join(local_38[0],(void **)0x0);
 }
 lVar2 = 0;
 printf(&DAT_00104306);
 local_48 = 0;
 local_68 = 0xa00000001;
 uStack_5c = 0xb;
 uStack_50 = SUB1612(0,4);
 local_58 = 0x14;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar2),(pthread_attr_t *)0x0,thread_sum,
 __newthread);
 if (iVar1 != 0) {
 uVar4 = 0xffffffff;
 goto LAB_00103cd2;
 }
 lVar2 = lVar2 + 8;
 __newthread = (pthread_t *)((long)__newthread + 0xc);
 } while (lVar2 != 0x18);
 piVar3 = (int *)(&local_68 + 1);
 lVar2 = 0;
 uVar4 = 0;
 do {
 iVar1 = pthread_join(local_38[lVar2],(void **)0x0);
 if (iVar1 != 0) {
 uVar4 = 0xfffffffe;
 break;
 }
 uVar4 = uVar4 + *piVar3;
 lVar2 = lVar2 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar2 != 3);
LAB_00103cd2:
 printf(&DAT_00104322,(unsigned long)uVar4);
 uVar4 = param_mutex_lock(4,1000);
 printf(&DAT_0010433f,(unsigned long)uVar4);
 uVar4 = param_condition_variable();
 printf(&DAT_0010435b,(unsigned long)uVar4);
 uVar4 = param_atomic_ops(4,500);
 printf(&DAT_00104377,(unsigned long)uVar4);
 uVar4 = param_thread_local_storage(4);
 printf(&DAT_00104393,(unsigned long)uVar4);
 return;
}

// Function: main @ 0x103d60
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x103d74
void _fini(void)
{
 return;
}

