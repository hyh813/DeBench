/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
#include <stdarg.h>
#include <stdbool.h>
#include <sys/syscall.h>
#include <fcntl.h>

/* Type definitions */
typedef unsigned char byte;
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef int __pid_t;
typedef int key_t;
typedef unsigned int __useconds_t;
typedef void (*__sighandler_t)(int);
typedef void *(*__start_routine)(void *);

/* Macro definitions */
#define SCARRY4(x, y) ((x) + (y) < (x))

/* Global variable declarations */
char DAT_0001285c[] = "BinBenchData";
char DAT_00012850[] = "BinBenchData";
char DAT_0001287d[] = "TestName";
char DAT_00012bb6[] = "Standard Library Functions Test";
char DAT_000128cb[] = "strlen test: %d\n";
char DAT_000128e6[] = "strcmp test: %x\n";
char DAT_00012901[] = "memcpy test: %x\n";
char DAT_0001291d[] = "memcpy test: %x\n";
char DAT_00012939[] = "memcmp test: %x\n";
char DAT_00012955[] = "printf return: %d\n";
char DAT_00012971[] = "scanf return: %d\n";
char DAT_0001298e[] = "fopen test: %x\n";
char DAT_000129aa[] = "fread test: %x\n";
char DAT_000129c6[] = "malloc return: %x\n";
char DAT_000129e2[] = "memset test: %d\n";
char DAT_000129fd[] = "strchr_strstr: %x\n";
char DAT_00012bda[] = "System Calls Test";
char DAT_00012a3f[] = "syscall test: %x\n";
char DAT_00012a5b[] = "stat test: %x\n";
char DAT_00012a77[] = "fork test: %x\n";
char DAT_00012a93[] = "pipe test: %x\n";
char DAT_00012aaf[] = "socket test: %x\n";
char DAT_00012acb[] = "shm test: %x\n";
char DAT_00012ae7[] = "signal test: %x\n";
char DAT_00012bf5[] = "Thread Test";
char DAT_00012b0d[] = "create test: %x\n";
char DAT_00012b29[] = "join test: %x\n";
char DAT_00012b46[] = "mutex test: %x\n";
char DAT_00012b62[] = "condition test: %x\n";
char DAT_00012b7e[] = "atomic test: %x\n";
char DAT_00012b9a[] = "tls test: %x\n";

extern char completed_0;
extern void *__dso_handle;
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready;
int data;
int atomic_counter;

/* External function declarations */
extern void __gmon_start__(void);
extern ulonglong __aeabi_read_tp(uint, uint);
extern void __libc_start_main(int (*)(void), int, char **, void (*)(void), void (*)(void), void *);
extern void abort(void);
extern void __cxa_finalize(void *);
extern int *__errno_location(void);

/* Function prototypes */
int call_weak_fn(void);
int main(void);
void signal_handler(unsigned int);
void *thread_compute(void *);
void *thread_sum(void *);
void *thread_increment(void *);
void *consumer_thread(void *);
void *producer_thread(void *);
void *thread_atomic_increment(void *);
void *thread_atomic_load_store(void *);
void *thread_tls_test(void *);
void param_strcpy(char *, char *);
int param_strcmp(char *, char *);
void param_strlen(char *);
size_t param_memcpy(void *, void *, size_t);
int param_memcmp(void *, void *, size_t);
void param_printf(unsigned int, unsigned int);
int param_scanf(unsigned int);
int param_fopen_fclose(char *);
unsigned int param_fread_fwrite(char *);
int param_malloc_free(int);
int param_memset(byte *, size_t);
int param_strchr_strstr(char *, int, char *);
int param_linux_syscall(unsigned int);
unsigned int param_win32_api(char *);
uint param_fork_exec(char *, unsigned int);
unsigned int param_pipe_communication(void);
unsigned int param_socket_create(void);
size_t param_shmget_shmat(void);
unsigned int param_signal_handling(void);
unsigned int param_pthread_create(unsigned int);
int param_pthread_join(void);
unsigned int param_mutex_lock(int, int);
unsigned int param_condition_variable(void);
unsigned int param_atomic_ops(int, unsigned int);
unsigned int param_thread_local_storage(int);
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);

// Decompiled by BinaryAI
// SHA256: 9ec597b95dff01065ec35b5e0182f0edcc02d9954c891d44e194ba7f56ed5ed0



// Function: param_strcpy @ 0x110d8
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x110e8
void call_strcpy(void)
{
 char local_28 [8];
 local_28[0] = 'H';
 local_28[1] = 'e';
 local_28[2] = 'l';
 local_28[3] = 'l';
 local_28[4] = 'o';
 local_28[5] = 'L';
 local_28[6] = 'i';
 local_28[7] = 'b';
 strlen(local_28);
 return;
}

// Function: param_strcmp @ 0x11124
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x1114c
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11154
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11158
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11160
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11178
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11180
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x111a8
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_0001285c,&DAT_00012850,0xc);
 iVar3 = iVar1;
 if (iVar1 != 0) {
 iVar3 = -1;
 }
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar2 = memcmp(&DAT_0001285c,&DAT_0001285c,0xc);
 iVar1 = iVar2;
 if (iVar2 != 0) {
 iVar1 = -1;
 }
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1 + iVar3;
}

// Function: param_printf @ 0x11218
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11230
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
 return;
}

// Function: param_scanf @ 0x11250
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: call_scanf @ 0x11294
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

// Function: param_fopen_fclose @ 0x112e4
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int iVar1;
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
}

// Function: call_fopen_fclose @ 0x11328
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

// Function: param_fread_fwrite @ 0x11354
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char auStack_38 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(auStack_38,1,0x12,__s);
 auStack_38[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = memcmp(auStack_38,"BinBench Test Data",0x13);
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

// Function: call_fread_fwrite @ 0x11434
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11444
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 int unaff_r5;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 iVar3 = param_1;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 iVar3 = iVar3 + -1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0);
 unaff_r5 = *__ptr;
 }
 iVar3 = __ptr[param_1 + -1];
 free(__ptr);
 iVar3 = iVar3 + unaff_r5;
 }
 return iVar3;
}

// Function: call_malloc_free @ 0x114a8
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x114b0
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 iVar1 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 do {
 param_2 = param_2 - 1;
 iVar1 = iVar1 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: call_memset @ 0x114f4
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x114fc
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 int iVar2;
 int iVar3;
 pcVar1 = strchr(param_1,param_2);
 iVar3 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar3;
}

// Function: call_strchr_strstr @ 0x1153c
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11544
void test_standard_library_functions(void)
{
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 char local_2c [8];
 char local_24;
 int local_c;
 puts(&DAT_00012bb6);
 local_2c[0] = 'H';
 local_2c[1] = 'e';
 local_2c[2] = 'l';
 local_2c[3] = 'l';
 local_2c[4] = 'o';
 local_2c[5] = 'L';
 local_2c[6] = 'i';
 local_2c[7] = 'b';
 local_24 = '\0';
 sVar1 = strlen(local_2c);
 printf(&DAT_000128cb,sVar1);
 printf(&DAT_000128e6,0);
 printf(&DAT_00012901,0xc);
 printf(&DAT_0001291d,0x5a);
 uVar2 = call_memcmp();
 printf(&DAT_00012939,uVar2);
 iVar3 = printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
 printf(&DAT_00012955,iVar3);
 iVar3 = __isoc99_sscanf("123,456","%d,%d",&local_2c,&local_c);
 iVar4 = -1;
 uVar2 = 0xffffffff;
 if (iVar3 == 2) {
 iVar4 = local_c + local_2c;
 }
 printf(&DAT_00012971,iVar4);
 iVar3 = param_fopen_fclose("/etc/passwd");
 if (iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1)) {
 uVar2 = 0x2a;
 }
 printf(&DAT_0001298e,uVar2);
 uVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_000129aa,uVar2);
 uVar2 = param_malloc_free(10);
 printf(&DAT_000129c6,uVar2);
 printf(&DAT_000129e2,0);
 printf(&DAT_000129fd,0xf);
 return;
}

// Function: param_linux_syscall @ 0x1170c
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = syscall(5,param_1,0);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11754
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

// Function: param_win32_api @ 0x11780
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat(param_1,&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x117b8
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat("/etc/passwd",&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x117fc
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_14;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
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

// Function: call_fork_exec @ 0x1187c
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

// Function: param_pipe_communication @ 0x118ac
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 char auStack_38 [32];
 int local_18;
 int local_14;
 iVar1 = pipe(&local_18);
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
 close(local_18);
 write(local_14,"HelloPipe",9);
 close(local_14);
 _exit(0);
 }
 close(local_14);
 sVar3 = read(local_18,auStack_38,0x1f);
 auStack_38[sVar3] = 0;
 close(local_18);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: param_socket_create @ 0x11968
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 struct sockaddr local_24;
 unsigned int local_14;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_14 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_14,4);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_24.sa_family = 2;
 local_24.sa_data[0] = '\0';
 local_24.sa_data[1] = '\0';
 local_24.sa_data[10] = '\0';
 local_24.sa_data[11] = '\0';
 local_24.sa_data[12] = '\0';
 local_24.sa_data[13] = '\0';
 local_24.sa_data[6] = '\0';
 local_24.sa_data[7] = '\0';
 local_24.sa_data[8] = '\0';
 local_24.sa_data[9] = '\0';
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_24,0x10);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
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

// Function: param_shmget_shmat @ 0x11a44
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
 memcpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x11b1c
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

// Function: param_signal_handling @ 0x11b3c
unsigned int param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned int uVar2;
 int iVar3;
 bool bVar4;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
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
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0xfffffffc;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar3 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 uVar2 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 }
 }
 }
 }
 return uVar2;
}

// Function: signal_handler @ 0x11cb0
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x11cdc
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat sStack_68;
 puts(&DAT_00012bda);
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 uVar3 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 printf(&DAT_00012a3f,uVar2);
 iVar1 = stat("/etc/passwd",&sStack_68);
 uVar2 = 0xfffffffe;
 if (0 < sStack_68.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 printf(&DAT_00012a5b,uVar2);
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 printf(&DAT_00012a77,uVar2);
 uVar2 = param_pipe_communication();
 printf(&DAT_00012a93,uVar2);
 uVar2 = param_socket_create();
 printf(&DAT_00012aaf,uVar2);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00012acb,uVar3);
 uVar2 = param_signal_handling();
 printf(&DAT_00012ae7,uVar2);
 return;
}

// Function: thread_compute @ 0x11dfc
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}


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

// Function: call_pthread_create @ 0x11e78
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x11e80
void *thread_sum(void *param_1)
{
 longlong lVar1;
 uint uVar2;
 uint uVar3;
 uint *puVar1 = (uint *)param_1;
 puVar1[2] = 0;
 uVar2 = *puVar1;
 uVar3 = puVar1[1];
 if ((int)uVar2 <= (int)uVar3) {
 lVar1 = (ulonglong)(uVar3 - uVar2) * (ulonglong)(uVar3 + ~uVar2);
 puVar1[2] = (uVar3 - uVar2) * (uVar2 + 1) + uVar2 +
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return NULL;
}

// Function: param_pthread_join @ 0x11ed0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned int *__arg;
 int iVar3;
 unsigned int local_48;
 unsigned int local_44;
 int local_40 [4];
 unsigned int local_30;
 unsigned int local_2c;
 pthread_t local_24 [3];
 __arg = &local_48;
 iVar3 = 0;
 memset(local_40,0,0x1c);
 local_2c = 0x1e;
 local_30 = 0x15;
 local_40[2] = 0x14;
 local_40[1] = 0xb;
 local_44 = 10;
 local_48 = 1;
 do {
 iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = (unsigned int *)((int)__arg + 0xc);
 } while (iVar3 != 0xc);
 iVar1 = 0;
 iVar3 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar2 = iVar1 * -3;
 iVar1 = iVar1 + -4;
 iVar3 = *(int *)((int)local_40 + iVar2) + iVar3;
 } while (iVar1 != -0xc);
 return iVar3;
}

// Function: thread_increment @ 0x11fbc
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 do {
	pthread_mutex_lock(&counter_mutex);
	shared_counter = shared_counter + 1;
	pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return NULL;
}

// Function: param_mutex_lock @ 0x12024
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < param_1) {
 iVar3 = param_1;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar4 = ppVar4 + 1;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 ppVar4 = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar4,(void **)0x0);
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 } while (iVar3 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == local_24 * param_1) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12114
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12120
void *consumer_thread(void *param_1)
{
 uint *puVar1;
 uint uVar2;
	pthread_mutex_lock(&cond_mutex);
	if (ready == '\0') {
		do {
			pthread_cond_wait(&cond,&cond_mutex);
		} while (ready != '\x01');
	}
	uVar2 = (uint)data;
	pthread_mutex_unlock(&cond_mutex);
 if (uVar2 != 0) {
 uVar2 = 0x2a;
 }
 puVar1 = (uint *)malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}

// Function: producer_thread @ 0x121b8
void *producer_thread(void *param_1)
{
 sleep(1);
	pthread_mutex_lock(&cond_mutex);
	data = 1;
	ready = 1;
	pthread_cond_signal(&cond);
	pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: param_condition_variable @ 0x12220
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 pthread_t local_10;
 pthread_t local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,&local_14);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_14;
 free(local_14);
 }
 else {
 pthread_cancel(local_10);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: thread_atomic_increment @ 0x122e0
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 int local_1c;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __atomic_fetch_add(&atomic_counter,1,5);
 local_1c = iVar2;
 __atomic_compare_exchange_n(&atomic_counter,&local_1c,iVar2 + 1000,0,5,5);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x12354
void *thread_atomic_load_store(void *param_1)
{
 int iVar1;
 iVar1 = __atomic_load_n(&atomic_counter,5);
 __atomic_store_n(&atomic_counter,iVar1 + 100,5);
 return NULL;
}

// Function: param_atomic_ops @ 0x1238c
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *ppVar3;
 int iVar4;
 pthread_t local_28;
 unsigned int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 __atomic_store_4(&atomic_counter,0,5);
 if (0 < param_1) {
 ppVar3 = __ptr;
 iVar4 = param_1;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar3 = ppVar3 + 1;
 iVar4 = iVar4 + -1;
 } while (iVar4 != 0);
 }
 iVar4 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar4 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 ppVar3 = __ptr;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 param_1 = param_1 + -1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != 0);
 }
 iVar4 = __atomic_load_4(&atomic_counter,5);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar4) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x124b0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x124bc
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 unsigned long long uVar6;
 iVar3 = 8;
 uVar6 = __aeabi_read_tp((uint)(uintptr_t)param_1,(uint)(uintptr_t)param_1);
 iVar1 = (int)uVar6;
 iVar4 = *(int *)(iVar1 + iVar3);
 iVar5 = iVar4 + 0x32;
 *(int *)(iVar1 + iVar3) = iVar5;
 strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar6 >> 0x20),0x1f);
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar4;
 piVar2[1] = iVar5;
 return piVar2;
}

// Function: param_thread_local_storage @ 0x12504
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void **__ptr_00;
 char *__s;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 uint uVar5;
 void **ppvVar6;
 int iVar7;
 uint uVar8;
 int *local_28;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 __ptr_00 = (void **)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void **)0x0) {
 return 0xffffffff;
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[iVar3] = __s;
 snprintf(__s,0x10,"Thread-%d",iVar3);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 if (0 < param_1) {
 iVar3 = 0;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[iVar3]);
 if (iVar1 != 0) {
 iVar1 = 0;
 do {
 free(__ptr_00[iVar1]);
 iVar1 = iVar1 + 1;
 } while (iVar3 + 1 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + 1;
 ppVar4 = ppVar4 + 1;
 } while (param_1 != iVar3);
 if (0 < param_1) {
 uVar8 = 0;
 uVar5 = 0;
 ppVar4 = __ptr;
 ppvVar6 = __ptr_00;
 iVar3 = param_1;
 do {
 pthread_join(*ppVar4,&local_28);
 iVar1 = *local_28;
 iVar7 = local_28[1];
 free(local_28);
 free(*ppvVar6);
 uVar8 = iVar7 + uVar8;
 uVar5 = iVar1 + uVar5;
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 ppvVar6 = ppvVar6 + 1;
 } while (iVar3 != 0);
 goto LAB_00012620;
 }
 }
 }
 uVar5 = 0;
 uVar8 = 0;
LAB_00012620:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((uVar5 ^ param_1 * 100 | uVar8 ^ param_1 * 0x96) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x126a0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x126a8
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 puts(&DAT_00012bf5);
 uVar1 = param_pthread_create(7);
 printf(&DAT_00012b0d,uVar1);
 uVar1 = param_pthread_join();
 printf(&DAT_00012b29,uVar1);
 uVar1 = param_mutex_lock(4,1000);
 printf(&DAT_00012b46,uVar1);
 uVar1 = param_condition_variable();
 printf(&DAT_00012b62,uVar1);
 uVar1 = param_atomic_ops(4,500);
 printf(&DAT_00012b7e,uVar1);
 uVar1 = param_thread_local_storage(4);
 printf(&DAT_00012b9a,uVar1);
 return;
}

// Function: main @ 0x12768
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

