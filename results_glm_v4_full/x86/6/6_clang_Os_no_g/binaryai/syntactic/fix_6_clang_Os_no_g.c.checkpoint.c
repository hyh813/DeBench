/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t, intmax_t, uintmax_t provided by system headers */

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdbool.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <errno.h>
#include <stdint.h>
#include <fcntl.h>
#include <time.h>
#include <strings.h>

/* Forward declarations for undefined functions) */
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __minuxdo_global_dtors_aux(void);
unsigned int main(void);
void thread_compute(unsigned int *param_1);
unsigned int thread_sum(uint *param_1);
unsigned int thread_increment(int *param_1);
void consumer_thread(void);
unsigned int producer_thread(void);
unsigned int thread_atomic_increment(int *param_1);
unsigned int FUN_00012820(void);
void thread_tls_test(char *param_1);
void signal_handler(int sig);
unsigned int thread_atomic_load_store(void *param_1);

/* Additional system function declarations */
int __libc_start_main(int (*main)(void), int argc, char **argv, 
                      void (*init)(void), void (*fini)(void), 
                      void (*rtld_fini)(void), void *stack_end);
int *__errno_location(void);
int __isoc99_sscanf(const char *str, const char *format, ...);
int fileno(FILE *stream);
int bcmp(const void *s1, const void *s2, size_t n);
int unlink(const char *pathname);
void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_dx(void);
__sighandler_t signal(int sig, __sighandler_t func);

/* Type definitions for missing types */
typedef long long longlong;
typedef unsigned long long ulonglong;


/* Type definitions */
typedef unsigned char byte;
#ifndef uint
typedef unsigned int uint;
#endif
typedef useconds_t __useconds_t;
typedef void (*_sig_func_ptr)(int);
typedef void (*__sighandler_t)(int);
typedef void *(*__start_routine)(void *);
typedef void (*processEntry)(unsigned int, unsigned int);

/* Global variables */
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t *counter_mutex = NULL;
int shared_counter = 0;
pthread_mutex_t *cond_mutex = NULL;
pthread_cond_t *cond = NULL;
int ready = 0;
int data = 0;
int atomic_counter = 0;
void *stack0x00000008 = NULL;
int stack0x00000004 = 0;

/* Synchronization macros for atomic operations */
#define LOCK() __sync_synchronize()
#define UNLOCK() __sync_synchronize()

/* String data definitions */
static char DAT_00013026[] = "BinBench";
static char DAT_00013390[] = "=== Testing System Calls ===\n";
static char DAT_000130c6[] = "memset: %d\n";
static char DAT_000130fe[] = "printf returned: %d\n";
static char DAT_00013211[] = "stat: %d\n";
static char DAT_00013318[] = "condition_variable: %d\n";
static char DAT_00013153[] = "fread_fwrite: %d\n";
static char DAT_00013249[] = "pipe_communication: %d\n";
static char DAT_0001336c[] = "=== Testing Standard Library Functions ===\n";
static char DAT_0001316f[] = "malloc_free: %d\n";
static char DAT_00013350[] = "thread_local_storage: %d\n";
static char DAT_00013074[] = "strlen: %d\n";
static char DAT_0001308f[] = "strcmp: %d\n";
static char DAT_000130aa[] = "call_strlen: %d\n";
static char DAT_000130e2[] = "call_memcmp: %d\n";
static char DAT_0001311a[] = "scanf: %d\n";
static char DAT_00013137[] = "fopen_fclose: %d\n";
static char DAT_0001318b[] = "call_memset: %d\n";
static char DAT_000131a6[] = "call_strchr_strstr: %d\n";
static char DAT_000131f5[] = "linux_syscall: %d\n";
static char DAT_0001322d[] = "fork_exec: %d\n";
static char DAT_00013265[] = "socket_create: %d\n";
static char DAT_00013281[] = "shmget_shmat: %d\n";
static char DAT_0001329d[] = "signal_handling: %d\n";
static char DAT_000132c3[] = "pthread_create: %d\n";
static char DAT_000132df[] = "pthread_join: %d\n";
static char DAT_000132fc[] = "mutex_lock: %d\n";
static char DAT_00013334[] = "atomic_ops: %d\n";
static char DAT_000133ab[] = "=== Testing Thread Concurrency ===\n";
static char DAT_000133cc[] = "HelloWorld";
static char DAT_000133d8[] = "HelloWorld";

/* Data references */
extern char DAT_000133d8[];
extern char DAT_000133cc[];
extern char DAT_00013026[];
extern char DAT_0001336c[];
extern char DAT_00013074[];
extern char DAT_0001308f[];
extern char DAT_000130aa[];
extern char DAT_000130c6[];
extern char DAT_000130e2[];
extern char DAT_000130fe[];
extern char DAT_0001311a[];
extern char DAT_00013137[];
extern char DAT_00013153[];
extern char DAT_0001316f[];
extern char DAT_0001318b[];
extern char DAT_000131a6[];
extern char DAT_000131f5[];
extern char DAT_00013211[];
extern char DAT_0001322d[];
extern char DAT_00013249[];
extern char DAT_00013265[];
extern char DAT_00013281[];
extern char DAT_0001329d[];
extern char DAT_000132c3[];
extern char DAT_000132df[];
extern char DAT_000132fc[];
extern char DAT_00013318[];
extern char DAT_00013334[];
extern char DAT_00013350[];
extern char DAT_00013390[];
extern char DAT_000133ab[];

// Decompiled by BinaryAI
// SHA256: 56f3407a1028269cb04be1853df1d3552d98056a3ccfd6e0640bd7ad14cf34f5

// CRT functions removed

// Function: param_strcpy @ 0x11564
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x11597
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

// Function: param_strcmp @ 0x115c9
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

// Function: call_strcmp @ 0x11604
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11607
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11628
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x1162e
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x1165d
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11663
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

// Function: call_memcmp @ 0x116a2
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_000133d8,&DAT_000133cc,0xc);
 iVar2 = memcmp(&DAT_000133d8,&DAT_000133d8,0xc);
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

// Function: param_printf @ 0x1170d
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11739
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
 return;
}

// Function: param_scanf @ 0x11766
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_14;
 int local_10;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_10;
 }
 return iVar2;
}

// Function: call_scanf @ 0x117ab
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_14;
 int local_10;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_10;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x117f3
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

// Function: call_fopen_fclose @ 0x11841
uint call_fopen_fclose(void)
{
 int iVar1;
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_fread_fwrite @ 0x1186a
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

// Function: call_fread_fwrite @ 0x1193c
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x1195f
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int iVar2;
 int unaff_ESI;
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
 unaff_ESI = *__ptr;
 }
 iVar1 = unaff_ESI + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x119b9
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x119da
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

// Function: call_memset @ 0x11a1b
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x11a1e
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,(int)param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x11a78
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11a7e
void test_standard_library_functions(void)
{
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int local_34;
 int local_30;
 unsigned int local_2c;
 char local_28;
 puts(&DAT_0001336c);
 local_28 = 0;
 local_2c = 0x62694c6f;
 local_30 = 0x6c6c6548;
 sVar1 = strlen((char *)&local_30);
 printf(&DAT_00013074,sVar1);
 printf(&DAT_0001308f,0);
 printf(&DAT_000130aa,0xc);
 printf(&DAT_000130c6,0x5a);
 uVar2 = call_memcmp();
 printf(&DAT_000130e2,uVar2);
 iVar3 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
 printf(&DAT_000130fe,iVar3);
 iVar4 = __isoc99_sscanf("123,456","%d,%d",&local_30,&local_34);
 iVar3 = -1;
 if (iVar4 == 2) {
 iVar3 = local_34 + local_30;
 }
 printf(&DAT_0001311a,iVar3);
 iVar3 = param_fopen_fclose("/etc/passwd");
 printf(&DAT_00013137,iVar3 >> 0x1f | 0x2a);
 uVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00013153,uVar2);
 uVar2 = param_malloc_free(10);
 printf(&DAT_0001316f,uVar2);
 printf(&DAT_0001318b,0);
 printf(&DAT_000131a6,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11c2f
int param_linux_syscall(const char *param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11c37;
 uVar3 = 0;
 iVar1 = syscall(5,param_1,0,0x11c37,0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,0);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11c78
uint call_linux_syscall(void)
{
 int iVar1;
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x11ca1
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_64;
 iVar1 = stat(param_1,&local_64);
 uVar3 = 0xfffffffe;
 if (0 < local_64.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x11ce7
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_64;
 iVar1 = stat("/etc/passwd",&local_64);
 uVar3 = 0xfffffffe;
 if (0 < local_64.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x11d30
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 pid_t _Var1;
 uint uVar2;
 uint local_8;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,(const char *)param_2,NULL);
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

// Function: call_fork_exec @ 0x11d9f
uint call_fork_exec(void)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 return -(uint)(iVar1 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x11dcf
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
 wait(NULL);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: call_pipe_communication @ 0x11ea5
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x11ebf
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
 iVar1 = setsockopt(__fd,SOL_SOCKET,SO_REUSEADDR,(const void *)&local_20,sizeof(local_20));
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

// Function: call_socket_create @ 0x11f8c
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x11fa6
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
 shmdt((void *)__s);
 shmctl(iVar1,IPC_RMID,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x1208a
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

// Function: param_signal_handling @ 0x120b1
unsigned int param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned int uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)(-1)) {
 uVar3 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)(-1)) {
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
 signal(10,(_sig_func_ptr)0x0);
 signal(0xe,(_sig_func_ptr)0x0);
 uVar3 = 0x2a;
 }
 }
 }
 }
 }
 return uVar3;
}

// Function: FUN_000121ff @ 0x121ff
void FUN_000121ff(unsigned int param_1,unsigned int param_2)
{
 int unaff_retaddr;
 *(unsigned int *)(unaff_retaddr + 0x3f05) = 1;
 *(unsigned int *)(unaff_retaddr + 0x3f09) = param_2;
 return;
}

// Function: call_signal_handling @ 0x1221b
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x12235
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_6c;
 puts(&DAT_00013390);
 iVar1 = param_linux_syscall("/etc/passwd");
 printf(&DAT_000131f5,iVar1 >> 0x1f | 0x2a);
 iVar1 = stat("/etc/passwd",&local_6c);
 uVar2 = 0xfffffffe;
 if (0 < local_6c.st_size) {
 uVar2 = 0x2a;
 }
 uVar3 = 0xffffffff;
 if (iVar1 < 0) {
 uVar2 = uVar3;
 }
 printf(&DAT_00013211,uVar2);
 iVar1 = param_fork_exec("/bin/true",0);
 printf(&DAT_0001322d,-(uint)(iVar1 != 0) | 0x2a);
 uVar2 = param_pipe_communication();
 printf(&DAT_00013249,uVar2);
 uVar2 = param_socket_create();
 printf(&DAT_00013265,uVar2);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00013281,uVar3);
 uVar2 = param_signal_handling();
 printf(&DAT_0001329d,uVar2);
 return;
}

// Function: thread_compute @ 0x1234e
void thread_compute(unsigned int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: param_pthread_create @ 0x1237a
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_14;
 unsigned int *local_10;
 unsigned int local_c;
 local_c = param_1;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_compute,&local_c);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x123e1
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x12402
unsigned int thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 longlong lVar3;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x1243a
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 pthread_t *__arg;
 int iVar3;
 int *piVar4;
 pthread_t apStack_40 [4];
 unsigned int local_30;
 int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 iVar3 = 0;
 __arg = apStack_40;
 local_14 = 0;
 local_20 = 0;
 local_2c = 0;
 apStack_40[3] = 1;
 local_30 = 10;
 local_28 = 0xb;
 local_24 = 0x14;
 local_1c = 0x15;
 local_18 = 0x1e;
 do {
 __arg = __arg + 3;
 iVar1 = pthread_create((pthread_t *)((int)apStack_40 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 } while (iVar3 != 0xc);
 piVar4 = &local_2c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_40[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}

// Function: call_pthread_join @ 0x124f1
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x1250b
unsigned int thread_increment(int *param_1)
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

// Function: param_mutex_lock @ 0x1255b
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

// Function: call_mutex_lock @ 0x12631
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12655
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

// Function: producer_thread @ 0x126c7
unsigned int producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x1271c
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_14;
 pthread_t local_10;
 unsigned int *local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_c);
 pthread_join(local_10,(void **)0x0);
 uVar2 = *local_c;
 free(local_c);
 }
 else {
 pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x127c6
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x127e0
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *param_1) {
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
 } while (iVar2 != *param_1);
 }
 return 0;
}

// Function: FUN_00012820 @ 0x12820
unsigned int FUN_00012820(void)
{
 int unaff_retaddr;
 LOCK();
 *(int *)(unaff_retaddr + 0x3928) = *(int *)(unaff_retaddr + 0x3928) + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x12839
unsigned int param_atomic_ops(int param_1, int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 (void)param_2;  /* unused parameter */
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

// Function: call_atomic_ops @ 0x12939
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x1295d
void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 strncpy((char *)(*in_GS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_thread_local_storage @ 0x129b0
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
 goto LAB_00012add;
 }
 }
 }
 uVar5 = 0;
 uVar3 = 0;
LAB_00012add:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar5) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x12b50
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x12b71
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 puts(&DAT_000133ab);
 uVar1 = param_pthread_create(7);
 printf(&DAT_000132c3,uVar1);
 uVar1 = param_pthread_join();
 printf(&DAT_000132df,uVar1);
 uVar1 = param_mutex_lock(4,1000);
 printf(&DAT_000132fc,uVar1);
 uVar1 = param_condition_variable();
 printf(&DAT_00013318,uVar1);
 uVar1 = param_atomic_ops(4,500);
 printf(&DAT_00013334,uVar1);
 uVar1 = param_thread_local_storage(4);
 printf(&DAT_00013350,uVar1);
 return;
}

// Function: signal_handler @ 0x12220
void signal_handler(int sig)
{
	signal_number = sig;
	signal_received = 1;
	return;
}

// Function: thread_atomic_load_store @ 0x12800
unsigned int thread_atomic_load_store(void *param_1)
{
	int prev;
	int new_val;
	LOCK();
	prev = atomic_counter;
	new_val = prev + 100;
	atomic_counter = new_val;
	UNLOCK();
	return 0;
}

// Function: main @ 0x12c45
unsigned int main(void)
{
	test_standard_library_functions();
	test_system_calls();
	test_thread_concurrency();
	return 0;
}





