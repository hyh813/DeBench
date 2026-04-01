/* Auto-injected type definitions by preprocessor */
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
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef void (*code)(void);
typedef void* undefined;

/* Define LOCK/UNLOCK macros for atomic operations */
#define LOCK()
#define UNLOCK()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <errno.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Global variables */
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex;
int shared_counter;
pthread_mutex_t cond_mutex;
int data;
int ready;
pthread_cond_t cond;
int atomic_counter;

/* Data references from decompiled binary */
char DAT_0010500d[] = "test";
char DAT_00105011[] = "test";
char DAT_00105015[] = "same";
char DAT_00105019[] = "diff";
char DAT_0010501d[] = "diff";
char DAT_00105099[] = "strcpy result: %d\n";
char DAT_001050b4[] = "strcmp result: %d\n";
char DAT_001050cf[] = "strlen result: %d\n";
char DAT_001050eb[] = "memcpy result: %d\n";
char DAT_00105107[] = "memcmp result: %d\n";
char DAT_00105123[] = "printf result: %d\n";
char DAT_0010513f[] = "scanf result: %d\n";
char DAT_0010515c[] = "fopen result: %d\n";
char DAT_00105178[] = "fread result: %d\n";
char DAT_00105194[] = "malloc result: %d\n";
char DAT_001051b0[] = "memset result: %d\n";
char DAT_001051cb[] = "strchr result: %d\n";
char DAT_0010520d[] = "System calls test\n";
char DAT_00105228[] = "linux syscall result: %d\n";
char DAT_00105244[] = "win32 api result: %d\n";
char DAT_00105260[] = "fork exec result: %d\n";
char DAT_0010527c[] = "pipe result: %d\n";
char DAT_00105298[] = "socket result: %d\n";
char DAT_001052b4[] = "shm result: %d\n";
char DAT_001052d0[] = "signal result: %d\n";
char DAT_001052f6[] = "Thread concurrency test\n";
char DAT_00105314[] = "pthread create result: %d\n";
char DAT_00105330[] = "pthread join result: %d\n";
char DAT_0010534d[] = "mutex result: %d\n";
char DAT_00105369[] = "cond var result: %d\n";
char DAT_00105385[] = "atomic result: %d\n";
char DAT_001053a1[] = "tls result: %d\n";
char DAT_001053c0[] = "Standard library functions test\n";


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00102849 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 0010285e */

undefined8 thread_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 
 param_1[2] = 0;
 iVar1 = *param_1;
 if (iVar1 <= param_1[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != param_1[1] + 1);
 param_1[2] = iVar2;
 }
 return 0;
}



/* Function: thread_compute @ 0010288c */

void thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}



/* Function: thread_increment @ 001028a4 */

undefined8 thread_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
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



/* Function: consumer_thread @ 001028fb */

void *consumer_thread(void *param_1)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock(&cond_mutex);
 uVar1 = data;
 while (ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 free(puVar2);
 return (void *)0;
}



/* Function: producer_thread @ 00102961 */

void *producer_thread(void *param_1)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}



/* Function: thread_atomic_increment @ 001029ae */

undefined8 thread_atomic_increment(int *param_1)

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
 } while (*param_1 != iVar2);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 001029e2 */

undefined8 thread_atomic_load_store(void)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}



/* Function: thread_tls_test @ 001029fb */

void *thread_tls_test(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 iVar2 = 0;
 iVar1 = iVar2 + 0x32;
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)0;
}



/* Function: param_strcpy @ 00102a4b */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 00102a62 */

void call_strcpy(void)

{
 long in_FS_OFFSET;
 undefined1 auStack_38 [40];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 param_strcpy(auStack_38,"HelloLib");
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_strcmp @ 00102aa3 */

int param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = strcmp(param_1,param_2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 return iVar2;
}



/* Function: call_strcmp @ 00102ac0 */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp(&DAT_00105011,&DAT_0010500d);
 iVar2 = param_strcmp(&DAT_00105015,&DAT_00105015);
 iVar3 = param_strcmp(&DAT_0010501d,&DAT_00105019);
 return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00102b0e */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00102b20 */

undefined4 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00102b2a */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00102b3b */

int call_memcpy(void)

{
 long in_FS_OFFSET;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined8 local_28;
 undefined8 local_20;
 int local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 10;
 local_44 = 0x14;
 local_40 = 0x1e;
 local_3c = 0x28;
 local_38 = 0x32;
 local_28 = 0;
 local_20 = 0;
 local_18 = 0;
 param_memcpy(&local_28,&local_48,0x14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)local_20 + (int)local_28 + local_18;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_memcmp @ 00102bcc */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 return iVar2;
}



/* Function: call_memcmp @ 00102be9 */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_44 = 1;
 local_40 = 2;
 local_3c = 3;
 local_38 = 1;
 local_34 = 2;
 local_30 = 4;
 local_2c = 1;
 local_28 = 2;
 local_24 = 3;
 iVar1 = param_memcmp(&local_44,&local_38,0xc);
 iVar2 = param_memcmp(&local_44,&local_2c,0xc);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_printf @ 00102c94 */

void param_printf(undefined4 param_1,undefined8 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00102cbc */

undefined4 call_printf(void)

{
 param_printf(0x2a,"Test");
 return 0;
}



/* Function: param_scanf @ 00102cda */

int param_scanf(undefined8 param_1)

{
 int iVar1;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_scanf @ 00102d33 */

undefined4 call_scanf(void)

{
 return param_scanf("123,456");
}



/* Function: param_fopen_fclose @ 00102d4c */

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



/* Function: call_fopen_fclose @ 00102d8c */

uint call_fopen_fclose(void)

{
 int iVar1;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00102dab */

int param_fread_fwrite(char *param_1)

{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 long in_FS_OFFSET;
 char acStack_48 [40];
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(acStack_48,1,0x12,__s);
 acStack_48[sVar2] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar2 == 0x12) {
 iVar1 = strcmp(acStack_48,"BinBench Test Data");
 iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 fclose(__s);
 iVar1 = -2;
 }
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fread_fwrite @ 00102e90 */

undefined4 call_fread_fwrite(void)

{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}



/* Function: param_malloc_free @ 00102ea9 */

int param_malloc_free(long param_1)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (piVar2 != __ptr + param_1);
 }
 iVar1 = *__ptr + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102f0a */

undefined4 call_malloc_free(void)

{
 return param_malloc_free(10);
}



/* Function: param_memset @ 00102f21 */

int param_memset(void *param_1,size_t param_2)

{
 byte *pbVar1;
 int iVar2;
 
 pbVar1 = memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*pbVar1;
 pbVar1 = pbVar1 + 1;
 } while (pbVar1 != (byte *)((long)param_1 + param_2));
 }
 return iVar2;
}



/* Function: call_memset @ 00102f6a */

undefined4 call_memset(void)

{
 long *plVar1;
 long in_FS_OFFSET;
 long local_38 [4];
 int local_14;
 long local_10 [2];
 
 plVar1 = local_38;
 local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *(undefined4 *)plVar1 = 0xff;
 plVar1 = (long *)((long)plVar1 + 4);
 } while (plVar1 != local_10);
 param_memset(local_38,0x28);
 if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14 + (int)local_38[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_strchr_strstr @ 00102fc7 */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
 int iVar1;
 char *pcVar2;
 int iVar3;
 
 pcVar2 = strchr(param_1,(int)param_2);
 iVar3 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar3 = (int)pcVar2 - (int)param_1;
 }
 pcVar2 = strstr(param_1,param_3);
 iVar1 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar1 = (int)pcVar2 - (int)param_1;
 }
 return iVar1 + iVar3;
}



/* Function: call_strchr_strstr @ 00103012 */

undefined4 call_strchr_strstr(void)

{
 return param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
}



/* Function: test_standard_library_functions @ 00103037 */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 
 puts(&DAT_001053c0);
 call_strcpy();
 uVar1 = 0;
 __printf_chk(1,&DAT_00105099,uVar1);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_001050b4,uVar1);
 uVar1 = call_strlen();
 __printf_chk(1,&DAT_001050cf,uVar1);
 uVar1 = call_memcpy();
 __printf_chk(1,&DAT_001050eb,uVar1);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_00105107,uVar1);
 uVar1 = call_printf();
 __printf_chk(1,&DAT_00105123,uVar1);
 uVar1 = call_scanf();
 __printf_chk(1,&DAT_0010513f,uVar1);
 uVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_0010515c,uVar1);
 uVar1 = call_fread_fwrite();
 __printf_chk(1,&DAT_00105178,uVar1);
 uVar1 = call_malloc_free();
 __printf_chk(1,&DAT_00105194,uVar1);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_001051b0,uVar1);
 uVar1 = call_strchr_strstr();
 __printf_chk(1,&DAT_001051cb,uVar1);
 return;
}



/* Function: param_linux_syscall @ 001031e8 */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 ulong uVar3;
 
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar3 = (ulong)(uint)-*piVar2;
 }
 else {
 uVar3 = uVar1 & 0xffffffff;
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar3;
}



/* Function: call_linux_syscall @ 0010322a */

uint call_linux_syscall(void)

{
 int iVar1;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00103249 */

undefined8 param_win32_api(char *param_1)

{
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 struct stat sStack_a8;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&sStack_a8);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (sStack_a8.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_win32_api @ 001032ad */

undefined4 call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return 0;
}



/* Function: param_fork_exec @ 001032c6 */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 long in_FS_OFFSET;
 uint local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
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
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_24 >> 8 & 0xff, (local_24 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fork_exec @ 00103364 */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 0010338d */

undefined8 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined8 uVar4;
 long in_FS_OFFSET;
 int pipefd[2];
 undefined1 local_38 [40];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = pipe(pipefd);
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
 close(pipefd[0]);
 write(pipefd[1],"HelloPipe",9);
 close(pipefd[1]);
 _exit(0);
 }
 close(pipefd[1]);
 sVar3 = read(pipefd[0],local_38,0x1f);
 local_38[sVar3] = 0;
 close(pipefd[0]);
 iVar1 = wait(0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar4;
 }
 __stack_chk_fail();
}



/* Function: call_pipe_communication @ 00103468 */

undefined8 call_pipe_communication(void)

{
 return param_pipe_communication();
}



/* Function: param_socket_create @ 0010347a */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 undefined4 local_2c;
 struct sockaddr local_28;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
 local_28.sa_data[6] = '\0';
 local_28.sa_data[7] = '\0';
 local_28.sa_data[8] = '\0';
 local_28.sa_data[9] = '\0';
 local_28.sa_data[10] = '\0';
 local_28.sa_data[0xb] = '\0';
 local_28.sa_data[0xc] = '\0';
 local_28.sa_data[0xd] = '\0';
 local_28.sa_family = 2;
 local_28.sa_data[0] = '\0';
 local_28.sa_data[1] = '\0';
 local_28.sa_data[2] = '\0';
 local_28.sa_data[3] = '\0';
 local_28.sa_data[4] = '\0';
 local_28.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_28,0x10);
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_socket_create @ 0010356f */

undefined8 call_socket_create(void)

{
 return param_socket_create();
}



/* Function: param_shmget_shmat @ 00103581 */

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
 if (__s == (void *)-1) {
 uVar3 = 0xfffffffd;
 }
 else {
 strncpy(__s,"SharedMemory",0xd);
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



/* Function: call_shmget_shmat @ 0010365d */

undefined8 call_shmget_shmat(void)

{
 int iVar1;
 undefined8 uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 0010367e */

undefined8 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 undefined8 uVar2;
 int iVar3;
 
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
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



/* Function: call_signal_handling @ 001037b2 */

undefined8 call_signal_handling(void)

{
 return param_signal_handling();
}



/* Function: test_system_calls @ 001037c4 */

void test_system_calls(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0010520d);
 uVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_00105228,uVar1);
 uVar1 = call_win32_api();
 __printf_chk(1,&DAT_00105244,uVar1);
 uVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00105260,uVar1);
 uVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_0010527c,uVar1);
 uVar1 = param_socket_create();
 __printf_chk(1,&DAT_00105298,uVar1);
 uVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_001052b4,uVar1);
 uVar1 = param_signal_handling();
 __printf_chk(1,&DAT_001052d0,uVar1);
 return;
}



/* Function: param_pthread_create @ 001038bc */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_create @ 00103937 */

undefined4 call_pthread_create(void)

{
 param_pthread_create(7);
 return 0;
}



/* Function: param_pthread_join @ 0010394e */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int *__arg;
 long lVar3;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 pthread_t local_78 [4];
 int local_58 [10];
 long local_30;
 
 __newthread = local_78;
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 local_58[0] = 1;
 local_58[1] = 10;
 local_58[2] = 0;
 local_58[3] = 0xb;
 local_58[4] = 0x14;
 local_58[5] = 0;
 local_58[6] = 0x15;
 local_58[7] = 0x1e;
 local_58[8] = 0;
 __arg = local_58;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00103a1f;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 3;
 } while (__arg != local_58 + 9);
 lVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_78[lVar3],(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + local_58[lVar3 * 3 + 2];
 lVar3 = lVar3 + 1;
 } while (lVar3 != 3);
LAB_00103a1f:
 if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_join @ 00103a51 */

undefined4 call_pthread_join(void)

{
 return param_pthread_join();
}



/* Function: param_mutex_lock @ 00103a68 */

undefined8 param_mutex_lock(uint param_1,int param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *__newthread;
 pthread_t *ppVar3;
 int local_3c [3];
 
 local_3c[0] = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 __newthread = __newthread + 1;
 ppVar3 = __ptr;
 } while (__newthread != __ptr + param_1);
 do {
 pthread_join(*ppVar3,(void **)0x0);
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + param_1);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * local_3c[0]) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00103b3e */

undefined4 call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return 0;
}



/* Function: param_condition_variable @ 00103b5a */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 pthread_t local_28;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_28,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_condition_variable @ 00103c21 */

undefined4 call_condition_variable(void)

{
 param_condition_variable();
 return 0;
}



/* Function: param_atomic_ops @ 00103c38 */

undefined8 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *__newthread;
 long lVar3;
 long in_FS_OFFSET;
 undefined4 local_3c;
 pthread_t local_38;
 long local_30;
 
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 local_3c = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 }
 else {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00103d20;
 }
 __newthread = __newthread + 1;
 } while (__newthread != __ptr + param_1);
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 lVar3 = 0;
 do {
 pthread_join(__ptr[lVar3],(void **)0x0);
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < (int)param_1);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00103d20:
 if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_atomic_ops @ 00103d9c */

undefined4 call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return 0;
}



/* Function: param_thread_local_storage @ 00103db8 */

undefined8 param_thread_local_storage(uint param_1)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 undefined8 uVar3;
 ulong uVar4;
 undefined8 *puVar5;
 int iVar6;
 pthread_t *__newthread;
 ulong uVar7;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = malloc((long)(int)param_1 << 3);
 __ptr_00 = malloc((long)(int)param_1 << 3);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if ((int)param_1 < 1) {
 iVar6 = 0;
 iVar1 = 0;
 }
 else {
 uVar7 = (ulong)param_1;
 uVar4 = 0;
 do {
 pvVar2 = malloc(0x10);
 __ptr_00[uVar4] = pvVar2;
 snprintf(pvVar2,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar4 != uVar7);
 uVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar4]);
 if (iVar1 != 0) {
 if (-1 < (int)uVar4) {
 puVar5 = __ptr_00;
 do {
 free((void *)*puVar5);
 puVar5 = puVar5 + 1;
 } while (puVar5 != __ptr_00 + (uVar4 & 0xffffffff) + 1);
 }
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00103f06;
 }
 uVar4 = uVar4 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != uVar7);
 uVar4 = 0;
 iVar1 = 0;
 iVar6 = 0;
 do {
 pthread_join(__ptr[uVar4],(void **)&local_48);
 iVar1 = iVar1 + *local_48;
 iVar6 = iVar6 + local_48[1];
 free(local_48);
 free((void *)__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 } while (uVar4 != uVar7);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 == iVar1) && (param_1 * 0x96 == iVar6)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00103f06:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 00103f81 */

undefined4 call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return 0;
}



/* Function: test_thread_concurrency @ 00103f98 */

void test_thread_concurrency(void)

{
 undefined4 uVar1;
 
 puts(&DAT_001052f6);
 call_pthread_create();
 uVar1 = 0;
 __printf_chk(1,&DAT_00105314,uVar1);
 uVar1 = param_pthread_join();
 __printf_chk(1,&DAT_00105330,uVar1);
 call_mutex_lock();
 uVar1 = 0;
 __printf_chk(1,&DAT_0010534d,uVar1);
 uVar1 = param_condition_variable();
 __printf_chk(1,&DAT_00105369,uVar1);
 call_atomic_ops();
 uVar1 = 0;
 __printf_chk(1,&DAT_00105385,uVar1);
 call_thread_local_storage();
 uVar1 = 0;
 __printf_chk(1,&DAT_001053a1,uVar1);
 return;
}



/* Function: main @ 0010407d */

undefined8 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
