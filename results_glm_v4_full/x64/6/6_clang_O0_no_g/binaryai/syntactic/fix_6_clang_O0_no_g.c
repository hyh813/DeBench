/* Standard headers for system functions */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <pthread.h>
#include <sys/shm.h>
#include <arpa/inet.h>
#include <stdarg.h>
#include <stdint.h>
#include <errno.h>
#include <sys/syscall.h>
#include <sys/ipc.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <netdb.h>
#include <time.h>
#include <netinet/in.h>
#include <netinet/tcp.h>

/* IPC constants */
#ifndef IPC_CREAT
#define IPC_CREAT  01000
#endif
#ifndef IPC_EXCL
#define IPC_EXCL   02000
#endif
#ifndef IPC_RMID
#define IPC_RMID   0001000  /* Remove shared memory segment */
#endif

/* Socket constants */
#ifndef AF_INET
#define AF_INET    2
#endif
#ifndef SOCK_STREAM
#define SOCK_STREAM 1
#endif
#ifndef SOL_SOCKET
#define SOL_SOCKET 1
#endif
#ifndef SO_REUSEADDR
#define SO_REUSEADDR 2
#endif
#ifndef INADDR_ANY
#define INADDR_ANY ((in_addr_t)0x00000000)
#endif

/* File open constants */
#ifndef O_RDONLY
#define O_RDONLY  00
#endif
#ifndef O_WRONLY
#define O_WRONLY  01
#endif
#ifndef O_RDWR
#define O_RDWR    02
#endif
#ifndef O_CREAT
#define O_CREAT   0100
#endif
#ifndef O_TRUNC
#define O_TRUNC   01000
#endif

/* Additional type definitions */
typedef unsigned char byte;
typedef unsigned char bool;
typedef unsigned int uint;
#define true 1
#define false 0

/* System types - using standard unsigned int instead of non-standard uint */

/* Shared memory structure - defined in <sys/shm.h> */

/* Function pointer types for threads */
typedef void *(*__start_routine)(void *);

/* Pthread types */
/* pthread_attr_t is defined in pthread.h */

/* Global variables */
char completed_0 = 0;
void *__dso_handle = 0;

/* Data variables */
char DAT_0010500d = 0;
char DAT_00105011 = 0;
char DAT_00105015 = 0;
char DAT_00105019 = 0;
char DAT_0010501d = 0;
char DAT_001050a6[] = "call_strcpy: %u\n";
char DAT_001050cb[] = "Result: %u\n";
char DAT_001050e6[] = "call_strcmp: %u\n";
char DAT_00105101[] = "call_strlen: %u\n";
char DAT_0010511d[] = "call_memcpy: %u\n";
char DAT_00105139[] = "call_memcmp: %u\n";
char DAT_00105155[] = "call_printf: %u\n";
char DAT_00105171[] = "call_scanf: %u\n";
char DAT_0010518e[] = "call_fopen_fclose: %u\n";
char DAT_001051aa[] = "call_fread_fwrite: %u\n";
char DAT_001051c6[] = "call_malloc_free: %u\n";
char DAT_001051e2[] = "call_memset: %u\n";
char DAT_001051fd[] = "call_strchr_strstr: %u\n";
char DAT_0010524c[] = "call_linux_syscall: %u\n";
char DAT_00105268[] = "Result: %u\n";
char DAT_00105284[] = "call_win32_api: %u\n";
char DAT_001052a0[] = "call_fork_exec: %u\n";
char DAT_001052bc[] = "call_pipe_communication: %u\n";
char DAT_001052d8[] = "call_socket_create: %u\n";
char DAT_001052f4[] = "call_shmget_shmat: %u\n";
char DAT_00105310[] = "call_signal_handling: %u\n";
char DAT_00105336[] = "call_pthread_create: %u\n";
char DAT_00105355[] = "Result: %u\n";
char DAT_00105371[] = "call_pthread_join: %u\n";
char DAT_0010538e[] = "call_mutex_lock: %u\n";
char DAT_001053aa[] = "call_condition_variable: %u\n";
char DAT_001053c6[] = "call_atomic_ops: %u\n";
char DAT_001053e2[] = "call_thread_local_storage: %u\n";

/* Signal handling globals */
volatile int signal_received = 0;
volatile int signal_number = 0;

/* Thread synchronization globals */
volatile int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
volatile int ready = 0;
volatile int data = 0;
volatile int atomic_counter = 0;

/* Stack reference */
static void *stack0x00000008;

/* Signal constants */
#define SIGUSR1 10
#define SIGALRM 14
#define SIG_DFL ((void (*)(int))0)
#define SIG_ERR ((void (*)(int))-1)
#define SIG_IGN ((void (*)(int))1)

/* Type definitions */
typedef void (*__sighandler_t)(int);

/* External function declarations */
void __cxa_finalize(void *);
void signal_handler(int param_1);

/* Forward declarations */
int main(int argc, char **argv, char **envp);

/* Forward declaration for struct shmid_ds */
struct shmid_ds;



/* Portable errno location function for compatibility */
int *__errno_location(void) {
    extern int errno;
    return &errno;
}

static pthread_mutex_t atomic_lock = PTHREAD_MUTEX_INITIALIZER;
void LOCK(void) { pthread_mutex_lock(&atomic_lock); }
void UNLOCK(void) { pthread_mutex_unlock(&atomic_lock); }

// Decompiled by BinaryAI
// SHA256: 38ace62bcd986b7d89ba3abca0a90e1c2cb21bfbc8986dceb75e7acf17604e0d

// Function: _init @ 0x102000
int _init(void *ctx)
{
 return 0;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 return;
}



// Function: _start @ 0x1023c0
void _start(void)
{
 char auStack_8 [8];
 main(0, (char **)0, (char **)(uintptr_t)(size_t)auStack_8);
 _exit(0);
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
size_t param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 return strlen(param_1);
}

// Function: call_strcpy @ 0x1024e0
unsigned int call_strcpy(void)
{
 unsigned int uVar1;
 char local_28 [32];
 uVar1 = (unsigned int)param_strcpy(local_28,"HelloLib");
 return uVar1;
}

// Function: param_strcmp @ 0x102510
unsigned int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned int local_20;
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 local_20 = 0;
 if (iVar1 < 0) {
 local_20 = 0xffffffff;
 }
 }
 else {
 local_20 = 1;
 }
 return local_20;
}

// Function: call_strcmp @ 0x102570
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_0010500d,&DAT_00105011);
 iVar2 = param_strcmp(&DAT_00105015,&DAT_00105019);
 iVar3 = param_strcmp(&DAT_00105019,&DAT_0010501d);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x1025d0
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x102600
void call_strlen(void)
{
 param_strlen("BinBench2025");
 return;
}

// Function: param_memcpy @ 0x102630
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x102660
int call_memcpy(void)
{
 int local_48 [2];
 int local_40;
 int local_38;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned int local_18;
 local_28 = 0x140000000a;
 local_20 = 0x280000001e;
 local_18 = 0x32;
 memset(local_48,0,0x14);
 param_memcpy(local_48,&local_28,0x14);
 return local_48[0] + local_40 + local_38;
}

// Function: param_memcmp @ 0x1026c0
unsigned int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int local_28;
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_28 = 0;
 if (iVar1 < 0) {
 local_28 = 0xffffffff;
 }
 }
 else {
 local_28 = 1;
 }
 return local_28;
}

// Function: call_memcmp @ 0x102720
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_2c;
 unsigned int local_24;
 unsigned long long local_20;
 unsigned int local_18;
 unsigned long long local_14;
 unsigned int local_c;
 local_14 = 0x200000001;
 local_c = 3;
 local_20 = 0x200000001;
 local_18 = 4;
 local_2c = 0x200000001;
 local_24 = 3;
 iVar1 = param_memcmp(&local_14,&local_20,0xc);
 iVar2 = param_memcmp(&local_14,&local_2c,0xc);
 return iVar1 + iVar2;
}

// Function: param_printf @ 0x1027a0
int param_printf(uint param_1,const char *param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",(unsigned long)param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x1027d0
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,"Test");
 return uVar1;
}

// Function: param_scanf @ 0x102800
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int local_20;
 int local_1c;
 unsigned long long local_18;
 int local_c;
 local_18 = param_1;
 iVar1 = sscanf(param_1,"%d,%d",&local_1c,&local_20);
 if (iVar1 == 2) {
 local_c = local_1c + local_20;
 }
 else {
 local_c = -1;
 }
 return local_c;
}

// Function: call_scanf @ 0x102860
void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x102880
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

// Function: call_fopen_fclose @ 0x1028e0
unsigned long long call_fopen_fclose(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x102910
unsigned int param_fread_fwrite(char *param_1)
{
 char *__ptr;
 int iVar1;
 FILE *__s;
 size_t sVar2;
 size_t sVar3;
 bool bVar4;
 char local_48 [40];
 char *local_20;
 char *local_18;
 unsigned int local_c;
 local_20 = "BinBench Test Data";
 local_18 = param_1;
 __s = fopen(param_1,"w+");
 __ptr = local_20;
 if (__s == (FILE *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 sVar2 = strlen(local_20);
 sVar2 = fwrite(__ptr,1,sVar2,__s);
 sVar3 = strlen(local_20);
 if (sVar2 == sVar3) {
 rewind(__s);
 sVar3 = fread(local_48,1,sVar2,__s);
 local_48[sVar3] = '\0';
 fclose(__s);
 unlink(local_18);
 bVar4 = false;
 if (sVar3 == sVar2) {
 iVar1 = strcmp(local_48,local_20);
 bVar4 = iVar1 == 0;
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

// Function: call_fread_fwrite @ 0x102a40
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x102a60
int param_malloc_free(unsigned long param_1)
{
 int *__ptr;
 unsigned long local_28;
 int local_c;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
 __ptr[local_28] = (int)local_28 * 10;
 }
 local_c = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return local_c;
}

// Function: call_malloc_free @ 0x102b10
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x102b20
int param_memset(void *param_1,unsigned long param_2)
{
 unsigned long local_30;
 int local_24;
 memset(param_1,0,param_2);
 local_24 = 0;
 for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
 local_24 = (uint)*(byte *)((long)param_1 + local_30) + local_24;
 }
 return local_24;
}

// Function: call_memset @ 0x102b90
int call_memset(void)
{
 int local_3c;
 int local_38 [12];
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 param_memset(local_38,0x28);
 return local_38[0] + local_38[9];
}

// Function: param_strchr_strstr @ 0x102be0
int param_strchr_strstr(const char *param_1,char param_2,const char *param_3)
{
 char *pcVar1;
 int local_50;
 int local_48;
 pcVar1 = strchr(param_1,(int)param_2);
 if (pcVar1 == (char *)0x0) {
 local_48 = -1;
 }
 else {
 local_48 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 local_50 = -1;
 }
 else {
 local_50 = (int)pcVar1 - (int)param_1;
 }
 return local_48 + local_50;
}

// Function: call_strchr_strstr @ 0x102c90
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x102cd0
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 printf(&DAT_001050a6,0u);
 uVar1 = call_strcpy();
 printf(&DAT_001050cb,(unsigned long)uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_001050e6,(unsigned long)uVar1);
 uVar1 = call_strlen();
 printf(&DAT_00105101,(unsigned long)uVar1);
 uVar1 = call_memcpy();
 printf(&DAT_0010511d,(unsigned long)uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_00105139,(unsigned long)uVar1);
 uVar1 = call_printf();
 printf(&DAT_00105155,(unsigned long)uVar1);
 uVar1 = call_scanf();
 printf(&DAT_00105171,(unsigned long)uVar1);
 uVar1 = call_fopen_fclose();
 printf(&DAT_0010518e,(unsigned long)uVar1);
 uVar1 = call_fread_fwrite();
 printf(&DAT_001051aa,(unsigned long)uVar1);
 uVar1 = call_malloc_free();
 printf(&DAT_001051c6,(unsigned long)uVar1);
 uVar1 = call_memset();
 printf(&DAT_001051e2,(unsigned long)uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_001051fd,(unsigned long)uVar1);
 return;
}

// Function: param_linux_syscall @ 0x102de0
int param_linux_syscall(const char *param_1)
{
 unsigned long uVar1;
 int *piVar2;
 int local_c;
 uVar1 = syscall(2,(unsigned long)param_1,0);
 local_c = (int)uVar1;
 if (local_c < 0) {
 piVar2 = __errno_location();
 local_c = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return local_c;
}

// Function: call_linux_syscall @ 0x102e40
unsigned long long call_linux_syscall(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x102e70
unsigned int param_win32_api(const char *param_1)
{
 int iVar1;
 struct stat local_a8;
 char *local_18;
 unsigned int local_c;
 local_18 = param_1;
 iVar1 = stat(param_1,&local_a8);
 if (iVar1 < 0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = 0xfffffffe;
 if (0 < local_a8.st_size) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_win32_api @ 0x102ed0
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x102ef0
int param_fork_exec(char *param_1,unsigned long long param_2)
{
 pid_t _Var1;
 uint local_28;
 pid_t local_24;
 unsigned long long local_20;
 char *local_18;
 char arg_buf[32];
 int local_c;
 local_20 = param_2;
 local_18 = param_1;
 local_24 = fork();
 if (local_24 < 0) {
 local_c = -1;
 }
 else {
 if (local_24 == 0) {
 snprintf(arg_buf, sizeof(arg_buf), "%llu", local_20);
 execl(local_18,local_18,arg_buf,(char *)0);
 _exit(0x7f);
 }
 _Var1 = waitpid(local_24,(int *)&local_28,0);
 if (_Var1 < 0) {
 local_c = -2;
 }
 else if ((local_28 & 0x7f) == 0) {
 local_c = (int)(local_28 & 0xff00) >> 8;
 }
 else {
 local_c = -3;
 }
 }
 return local_c;
}

// Function: call_fork_exec @ 0x102fb0
unsigned long long call_fork_exec(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x102ff0
unsigned int param_pipe_communication(void)
{
 int iVar1;
 pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 char local_38 [36];
 int local_14;
 int local_10;
 unsigned int local_c;
 iVar1 = pipe(&local_14);
 if (iVar1 < 0) {
 local_c = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 local_c = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_14);
 __n = strlen("HelloPipe");
 write(local_10,"HelloPipe",__n);
 close(local_10);
 _exit(0);
 }
 close(local_10);
 sVar3 = read(local_14,local_38,0x1f);
 local_38[sVar3] = 0;
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

// Function: call_pipe_communication @ 0x1030e0
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x1030f0
unsigned int param_socket_create(void)
{
 int iVar1;
 struct sockaddr_in local_28;
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_10 = socket(AF_INET, SOCK_STREAM, 0);
 if (local_10 < 0) {
 local_c = 0xffffffff;
 }
 else {
 local_14 = 1;
 iVar1 = setsockopt(local_10, SOL_SOCKET, SO_REUSEADDR, &local_14, sizeof(local_14));
 if (iVar1 < 0) {
 close(local_10);
 local_c = 0xfffffffe;
 }
 else {
 memset(&local_28, 0, sizeof(local_28));
 local_28.sin_family = AF_INET;
 local_28.sin_port = htons(0);
 local_28.sin_addr.s_addr = INADDR_ANY;
 iVar1 = bind(local_10, (struct sockaddr *)&local_28, sizeof(local_28));
 if (iVar1 < 0) {
 close(local_10);
 local_c = 0xfffffffd;
 }
 else {
 iVar1 = listen(local_10, 5);
 if (iVar1 < 0) {
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

// Function: call_socket_create @ 0x103200
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x103210
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t sVar2;
 unsigned int local_c;
 iVar1 = open("/tmp/binbench_shm", O_RDWR | O_CREAT, 0666);
 if (iVar1 < 0) {
 local_c = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key == (key_t)-1) {
 local_c = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,IPC_CREAT | IPC_EXCL | 0666);
 if (iVar1 < 0) {
 local_c = 0xfffffffe;
 }
 else {
 __dest = (char *)shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffffffffffff) {
 local_c = 0xfffffffd;
 }
 else {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 local_c = (unsigned int)sVar2;
 shmdt(__dest);
 shmctl(iVar1,IPC_RMID,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return local_c;
}

// Function: call_shmget_shmat @ 0x103320
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

// Function: param_signal_handling @ 0x103350
unsigned int param_signal_handling(void)
{
 int iVar1;
 __sighandler_t p_Var2;
 int local_10;
 unsigned int local_c;
 p_Var2 = signal(SIGUSR1,signal_handler);
 if (p_Var2 == SIG_ERR) {
 local_c = 0xffffffff;
 }
 else {
 p_Var2 = signal(SIGALRM,signal_handler);
 if (p_Var2 == SIG_ERR) {
 local_c = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(SIGUSR1);
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
 else if (signal_number == SIGUSR1) {
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
 if ((signal_received == 0) || (signal_number != SIGALRM)) {
 local_c = 0xfffffffb;
 }
 else {
 signal(SIGUSR1,SIG_DFL);
 signal(SIGALRM,SIG_DFL);
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

// Function: signal_handler @ 0x103510
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x103530
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x103540
void test_system_calls(void)
{
 unsigned int uVar1;
 printf(&DAT_0010524c,0u);
 uVar1 = call_linux_syscall();
 printf(&DAT_00105268,(unsigned long)uVar1);
 uVar1 = call_win32_api();
 printf(&DAT_00105284,(unsigned long)uVar1);
 uVar1 = call_fork_exec();
 printf(&DAT_001052a0,(unsigned long)uVar1);
 uVar1 = call_pipe_communication();
 printf(&DAT_001052bc,(unsigned long)uVar1);
 uVar1 = call_socket_create();
 printf(&DAT_001052d8,(unsigned long)uVar1);
 uVar1 = call_shmget_shmat();
 printf(&DAT_001052f4,(unsigned long)uVar1);
 uVar1 = call_signal_handling();
 printf(&DAT_00105310,(unsigned long)uVar1);
 return;
}

// Function: thread_compute @ 0x1035f0
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 int *actual_param = (int *)param_1;
 iVar1 = *actual_param;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x103640
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 void *local_28;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int local_10;
 unsigned int local_c;
 local_1c = param_1;
 local_10 = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_28);
 local_c = *(unsigned int *)(int *)local_28;
 free(local_28);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_pthread_create @ 0x1036b0
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x1036c0
void * thread_sum(void *param_1)
{
 int local_1c;
 int *actual_param = (int *)param_1;
 actual_param[2] = 0;
 for (local_1c = *actual_param; local_1c <= actual_param[1]; local_1c = local_1c + 1) {
 actual_param[2] = local_1c + actual_param[2];
 }
 return 0;
}

// Function: param_pthread_join @ 0x103720
int param_pthread_join(void)
{
 int iVar1;
 int local_64;
 int local_60;
 int local_5c;
 int local_58 [4];
 unsigned int local_48;
 unsigned int local_40;
 unsigned int local_3c;
 pthread_t local_28 [4];
 memset(local_58,0,0x24);
 local_58[0] = 1;
 local_58[1] = 10;
 local_58[3] = 0xb;
 local_48 = 0x14;
 local_40 = 0x15;
 local_3c = 0x1e;
 for (local_5c = 0; local_5c < 3; local_5c = local_5c + 1) {
 iVar1 = pthread_create(local_28 + local_5c,(pthread_attr_t *)0x0,thread_sum,
 local_58 + (long)local_5c * 3);
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_60 = 0;
 local_64 = 0;
 while( true ) {
 if (2 < local_64) {
 return local_60;
 }
 iVar1 = pthread_join(local_28[local_64],NULL);
 if (iVar1 != 0) break;
 local_60 = local_58[(long)local_64 * 3 + 2] + local_60;
 local_64 = local_64 + 1;
 }
 return -2;
}

// Function: call_pthread_join @ 0x103840
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x103850
void * thread_increment(void *param_1)
{
 int iVar1;
 int local_18;
 int *actual_param = (int *)param_1;
 iVar1 = *actual_param;
 for (local_18 = 0; local_18 < iVar1; local_18 = local_18 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x1038c0
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 void *__ptr;
 int local_28;
 int local_24;
 int local_14;
 int local_10;
 unsigned int local_c;
 local_14 = param_2;
 local_10 = param_1;
 __ptr = malloc((long)param_1 << 3);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_24 = 0; local_24 < local_10; local_24 = local_24 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + (long)local_24 * 8),(pthread_attr_t *)0x0,
 thread_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + (long)local_28 * 8),(void **)0x0);
 }
 free(__ptr);
 local_c = 0xfffffffd;
 if (shared_counter == local_10 * local_14) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_mutex_lock @ 0x1039e0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103a00
void * consumer_thread(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 (void)param_1;
 pthread_mutex_lock(&cond_mutex);
 while (ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 }
 uVar1 = data;
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x103a80
void * producer_thread(void *param_1)
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

// Function: param_condition_variable @ 0x103ae0
unsigned int param_condition_variable(void)
{
 int iVar1;
 void *local_28;
 pthread_t local_20;
 pthread_t local_18;
 unsigned int local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_28);
 pthread_join(local_18,NULL);
 local_c = *(unsigned int *)(unsigned int *)local_28;
 free(local_28);
 }
 else {
 pthread_cancel(local_20);
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_condition_variable @ 0x103ba0
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x103bb0
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 int local_18;
 int *actual_param = (int *)param_1;
 for (local_18 = 0; local_18 < *actual_param; local_18 = local_18 + 1) {
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = local_18 + 1000;
 LOCK();
 if (local_18 != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x103c50
void * thread_atomic_load_store(void *param_1)
{
 (void)param_1;
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x103c80
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 int local_34;
 pthread_t local_30;
 int local_28;
 unsigned int local_24;
 void *local_20;
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_14 = param_2;
 local_10 = param_1;
 local_20 = malloc((long)param_1 << 3);
 if (local_20 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_24 = 0;
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_20 + (long)local_28 * 8),
 (pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(local_20);
 return (unsigned int)0xfffffffe;
 }
 }
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_30,(void **)0x0);
 }
 for (local_34 = 0; iVar1 = atomic_counter, local_34 < local_10; local_34 = local_34 + 1) {
 pthread_join(*(pthread_t *)((long)local_20 + (long)local_34 * 8),(void **)0x0);
 }
 free(local_20);
 local_c = (unsigned int)0xfffffffd;
 if (0 < iVar1) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_atomic_ops @ 0x103dd0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x103df0
void * thread_tls_test(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 char *actual_param = (char *)param_1;
 (void)actual_param;
 uVar1 = 100;
 puVar2 = (unsigned int *)malloc(8);
 puVar2[0] = uVar1;
 puVar2[1] = uVar1 + 0x32;
 return puVar2;
}

// Function: param_thread_local_storage @ 0x103e70
unsigned int param_thread_local_storage(int param_1)
{
 int iVar1;
 void *pvVar2;
 void *local_40;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 uint local_24;
 void *local_20;
 void *local_18;
 int local_10;
 unsigned int local_c;
 local_10 = param_1;
 local_18 = malloc((long)param_1 << 3);
 local_20 = malloc((long)local_10 << 3);
 if ((local_18 == (void *)0x0) || (local_20 == (void *)0x0)) {
 local_c = 0xffffffff;
 }
 else {
 for (local_24 = 0; (int)local_24 < local_10; local_24 = local_24 + 1) {
 pvVar2 = malloc(0x10);
 *(void **)((long)local_20 + (long)(int)local_24 * 8) = pvVar2;
 snprintf(*(char **)((long)local_20 + (long)(int)local_24 * 8),0x10,"Thread-%d",(unsigned long)local_24
 );
 }
 for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_18 + (long)local_28 * 8),
 (pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)local_20 + (long)local_28 * 8));
 if (iVar1 != 0) {
 for (local_2c = 0; local_2c <= local_28; local_2c = local_2c + 1) {
 free(*(void **)((long)local_20 + (long)local_2c * 8));
 }
 free(local_20);
 free(local_18);
 return 0xfffffffe;
 }
 }
 local_30 = 0;
 local_34 = 0;
 for (local_38 = 0; local_38 < local_10; local_38 = local_38 + 1) {
 pthread_join(*(pthread_t *)((long)local_18 + (long)local_38 * 8),&local_40);
 local_30 = *(unsigned int *)(unsigned int *)local_40 + local_30;
 local_34 = ((unsigned int *)(unsigned int *)local_40)[1] + local_34;
 free(local_40);
 free(*(void **)((long)local_20 + (long)local_38 * 8));
 }
 free(local_20);
 free(local_18);
 local_c = 0xfffffffd;
 if (local_30 == local_10 * 100 && local_34 == local_10 * 0x96) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_thread_local_storage @ 0x1040b0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x1040c0
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 printf(&DAT_00105336,0u);
 uVar1 = call_pthread_create();
 printf(&DAT_00105355,(unsigned long)uVar1);
 uVar1 = call_pthread_join();
 printf(&DAT_00105371,(unsigned long)uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_0010538e,(unsigned long)uVar1);
 uVar1 = call_condition_variable();
 printf(&DAT_001053aa,(unsigned long)uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_001053c6,(unsigned long)uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_001053e2,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x104160
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x104188
void _fini(void)
{
 return;
}

